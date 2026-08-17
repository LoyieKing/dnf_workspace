# DB_UpdateSchoolPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842f05e DB_UpdateSchoolPoint::dispatch  [0x0842f05e-0x842f0ef] ===
 842f05e:	55                   	push   %ebp
 842f05f:	89 e5                	mov    %esp,%ebp
 842f061:	83 ec 28             	sub    $0x28,%esp
 842f064:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842f069:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842f070:	00 
 842f071:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842f078:	00 
 842f079:	89 04 24             	mov    %eax,(%esp)
 842f07c:	e8 bd 61 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842f081:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842f084:	8b 45 14             	mov    0x14(%ebp),%eax
 842f087:	89 04 24             	mov    %eax,(%esp)
 842f08a:	e8 8b 39 02 00       	call   8452a1a <_ZN6Stream12GetOutBufferI23SIG_UPDATE_SCHOOL_POINTEEPT_v>
 842f08f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842f092:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f095:	8b 00                	mov    (%eax),%eax
 842f097:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f09e:	00 
 842f09f:	89 04 24             	mov    %eax,(%esp)
 842f0a2:	e8 a4 9f cd ff       	call   810904b <_Z14NumberToStringji>
 842f0a7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842f0aa:	8b 52 04             	mov    0x4(%edx),%edx
 842f0ad:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842f0b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f0b5:	c7 44 24 04 94 14 c5 	movl   $0x8c51494,0x4(%esp)
 842f0bc:	08 
 842f0bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842f0c0:	89 04 24             	mov    %eax,(%esp)
 842f0c3:	e8 f8 50 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842f0c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842f0cf:	00 
 842f0d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842f0d3:	89 04 24             	mov    %eax,(%esp)
 842f0d6:	e8 4b 52 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842f0db:	83 f0 01             	xor    $0x1,%eax
 842f0de:	84 c0                	test   %al,%al
 842f0e0:	74 07                	je     842f0e9 <_ZN20DB_UpdateSchoolPoint8dispatchEiiP6Stream+0x8b>
 842f0e2:	b8 00 00 00 00       	mov    $0x0,%eax
 842f0e7:	eb 05                	jmp    842f0ee <_ZN20DB_UpdateSchoolPoint8dispatchEiiP6Stream+0x90>
 842f0e9:	b8 01 00 00 00       	mov    $0x1,%eax
 842f0ee:	c9                   	leave
 842f0ef:	c3                   	ret

```

```c
// DB_UpdateSchoolPoint::dispatch @ 0x842f05e

/* DB_UpdateSchoolPoint::dispatch(int, int, Stream*) */

bool DB_UpdateSchoolPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_UPDATE_SCHOOL_POINT *pSVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_SCHOOL_POINT>(in_stack_00000010);
  uVar3 = NumberToString(*(uint *)pSVar2,0);
  MySQL::set_query(this,"upDate event_school_point set point=%d+point where m_id=%s",
                   *(undefined4 *)(pSVar2 + 4),uVar3);
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 0842f0f0 DB_UpdateSchoolPoint::makeRequest  [0x0842f0f0-0x842f229] ===
 842f0f0:	55                   	push   %ebp
 842f0f1:	89 e5                	mov    %esp,%ebp
 842f0f3:	56                   	push   %esi
 842f0f4:	53                   	push   %ebx
 842f0f5:	83 ec 30             	sub    $0x30,%esp
 842f0f8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842f0fd:	c7 44 24 08 25 74 00 	movl   $0x7425,0x8(%esp)
 842f104:	00 
 842f105:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842f10c:	08 
 842f10d:	89 04 24             	mov    %eax,(%esp)
 842f110:	e8 71 09 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842f115:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842f11c:	00 
 842f11d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842f121:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f124:	89 04 24             	mov    %eax,(%esp)
 842f127:	e8 fa 9a c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842f12c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f12f:	89 04 24             	mov    %eax,(%esp)
 842f132:	e8 0f 9b c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f137:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 842f13e:	00 
 842f13f:	89 04 24             	mov    %eax,(%esp)
 842f142:	e8 0f 9b c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f147:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f14a:	89 04 24             	mov    %eax,(%esp)
 842f14d:	e8 f4 9a c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f152:	8b 55 10             	mov    0x10(%ebp),%edx
 842f155:	89 54 24 04          	mov    %edx,0x4(%esp)
 842f159:	89 04 24             	mov    %eax,(%esp)
 842f15c:	e8 f5 9a c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f161:	83 7d 0c 64          	cmpl   $0x64,0xc(%ebp)
 842f165:	7e 51                	jle    842f1b8 <_ZN20DB_UpdateSchoolPoint11makeRequestEjii+0xc8>
 842f167:	c7 45 0c 64 00 00 00 	movl   $0x64,0xc(%ebp)
 842f16e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f175:	00 
 842f176:	8b 45 08             	mov    0x8(%ebp),%eax
 842f179:	89 04 24             	mov    %eax,(%esp)
 842f17c:	e8 ca 9e cd ff       	call   810904b <_Z14NumberToStringji>
 842f181:	8b 55 0c             	mov    0xc(%ebp),%edx
 842f184:	89 54 24 18          	mov    %edx,0x18(%esp)
 842f188:	89 44 24 14          	mov    %eax,0x14(%esp)
 842f18c:	c7 44 24 10 d0 14 c5 	movl   $0x8c514d0,0x10(%esp)
 842f193:	08 
 842f194:	c7 44 24 0c 2d 74 00 	movl   $0x742d,0xc(%esp)
 842f19b:	00 
 842f19c:	c7 44 24 08 20 c3 c5 	movl   $0x8c5c320,0x8(%esp)
 842f1a3:	08 
 842f1a4:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842f1ab:	08 
 842f1ac:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 842f1b3:	e8 52 4a 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 842f1b8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f1bb:	89 04 24             	mov    %eax,(%esp)
 842f1be:	e8 8b 9a c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842f1c3:	89 04 24             	mov    %eax,(%esp)
 842f1c6:	e8 a3 38 02 00       	call   8452a6e <_ZN12CStreamGuard11GetInBufferI23SIG_UPDATE_SCHOOL_POINTEEPT_v>
 842f1cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842f1ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f1d1:	8b 55 08             	mov    0x8(%ebp),%edx
 842f1d4:	89 10                	mov    %edx,(%eax)
 842f1d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f1d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 842f1dc:	89 50 04             	mov    %edx,0x4(%eax)
 842f1df:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842f1e4:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842f1e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f1eb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842f1f2:	00 
 842f1f3:	89 04 24             	mov    %eax,(%esp)
 842f1f6:	e8 e3 1d 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842f1fb:	eb 1b                	jmp    842f218 <_ZN20DB_UpdateSchoolPoint11makeRequestEjii+0x128>
 842f1fd:	89 d3                	mov    %edx,%ebx
 842f1ff:	89 c6                	mov    %eax,%esi
 842f201:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f204:	89 04 24             	mov    %eax,(%esp)
 842f207:	e8 c6 d6 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f20c:	89 f0                	mov    %esi,%eax
 842f20e:	89 da                	mov    %ebx,%edx
 842f210:	89 04 24             	mov    %eax,(%esp)
 842f213:	e8 38 45 6b 00       	call   8ae3750 <_Unwind_Resume>
 842f218:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f21b:	89 04 24             	mov    %eax,(%esp)
 842f21e:	e8 af d6 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f223:	83 c4 30             	add    $0x30,%esp
 842f226:	5b                   	pop    %ebx
 842f227:	5e                   	pop    %esi
 842f228:	5d                   	pop    %ebp
 842f229:	c3                   	ret

```

```c
// DB_UpdateSchoolPoint::makeRequest @ 0x842f0f0

/* DB_UpdateSchoolPoint::makeRequest(unsigned int, int, int) */

void DB_UpdateSchoolPoint::makeRequest(uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_18 [8];
  SIG_UPDATE_SCHOOL_POINT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7425);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842f142 to 0842f1fa has its CatchHandler @ 0842f1fd */
  CStreamGuard::operator<<(pCVar2,0x129);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_3);
  if (100 < param_2) {
    param_2 = 100;
    uVar3 = NumberToString(param_1,0);
    LogManager::logFormat
              (1,"DBThread.cpp",
               "static void DB_UpdateSchoolPoint::makeRequest(memberIdentificationNumber_t, int, int)"
               ,0x742d,"School event point error (m_id: %s)(point: %d)",uVar3,100);
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_SCHOOL_POINT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(int *)(local_10 + 4) = param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

