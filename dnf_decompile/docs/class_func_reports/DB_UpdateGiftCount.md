# DB_UpdateGiftCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08427112 DB_UpdateGiftCount::dispatch  [0x08427112-0x84271eb] ===
 8427112:	55                   	push   %ebp
 8427113:	89 e5                	mov    %esp,%ebp
 8427115:	83 ec 38             	sub    $0x38,%esp
 8427118:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 842711f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8427126:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8427129:	89 44 24 04          	mov    %eax,0x4(%esp)
 842712d:	8b 45 14             	mov    0x14(%ebp),%eax
 8427130:	89 04 24             	mov    %eax,(%esp)
 8427133:	e8 5e 56 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8427138:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842713b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842713f:	8b 45 14             	mov    0x14(%ebp),%eax
 8427142:	89 04 24             	mov    %eax,(%esp)
 8427145:	e8 7a 54 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 842714a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842714f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8427156:	00 
 8427157:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842715e:	00 
 842715f:	89 04 24             	mov    %eax,(%esp)
 8427162:	e8 d7 e0 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8427167:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842716a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8427171:	00 
 8427172:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8427179:	00 
 842717a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 842717d:	89 04 24             	mov    %eax,(%esp)
 8427180:	e8 3b 6b c5 ff       	call   807dcc0 <memset@plt>
 8427185:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 842718c:	00 
 842718d:	c7 44 24 04 72 87 c4 	movl   $0x8c48772,0x4(%esp)
 8427194:	08 
 8427195:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8427198:	89 04 24             	mov    %eax,(%esp)
 842719b:	e8 00 67 c5 ff       	call   807d8a0 <memcpy@plt>
 84271a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84271a3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84271aa:	00 
 84271ab:	89 04 24             	mov    %eax,(%esp)
 84271ae:	e8 98 1e ce ff       	call   810904b <_Z14NumberToStringji>
 84271b3:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84271b6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84271ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 84271be:	c7 44 24 04 b0 ea c4 	movl   $0x8c4eab0,0x4(%esp)
 84271c5:	08 
 84271c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84271c9:	89 04 24             	mov    %eax,(%esp)
 84271cc:	e8 ef cf fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84271d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84271d8:	00 
 84271d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84271dc:	89 04 24             	mov    %eax,(%esp)
 84271df:	e8 42 d1 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84271e4:	b8 01 00 00 00       	mov    $0x1,%eax
 84271e9:	c9                   	leave
 84271ea:	c3                   	ret
 84271eb:	90                   	nop

```

```c
// DB_UpdateGiftCount::dispatch @ 0x8427112

/* DB_UpdateGiftCount::dispatch(int, int, Stream*) */

undefined4 DB_UpdateGiftCount::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  Stream *in_stack_00000010;
  undefined1 local_2c [20];
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  memset(local_2c,0,0x14);
  memcpy(local_2c,"member_login",0xd);
  uVar1 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_login set last_gift_time=unix_timestamp(now()),gift_cnt=gift_cnt+%d where m_id=%s"
                   ,local_18,uVar1);
  MySQL::exec(local_10,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 084271ec DB_UpdateGiftCount::makeRequest  [0x084271ec-0x84272dd] ===
 84271ec:	55                   	push   %ebp
 84271ed:	89 e5                	mov    %esp,%ebp
 84271ef:	56                   	push   %esi
 84271f0:	53                   	push   %ebx
 84271f1:	83 ec 20             	sub    $0x20,%esp
 84271f4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84271f9:	c7 44 24 08 41 68 00 	movl   $0x6841,0x8(%esp)
 8427200:	00 
 8427201:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8427208:	08 
 8427209:	89 04 24             	mov    %eax,(%esp)
 842720c:	e8 75 88 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8427211:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8427218:	00 
 8427219:	89 44 24 04          	mov    %eax,0x4(%esp)
 842721d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8427220:	89 04 24             	mov    %eax,(%esp)
 8427223:	e8 fe 19 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8427228:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842722b:	89 04 24             	mov    %eax,(%esp)
 842722e:	e8 13 1a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8427233:	c7 44 24 04 d1 00 00 	movl   $0xd1,0x4(%esp)
 842723a:	00 
 842723b:	89 04 24             	mov    %eax,(%esp)
 842723e:	e8 13 1a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8427243:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8427246:	89 04 24             	mov    %eax,(%esp)
 8427249:	e8 f8 19 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842724e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8427255:	ff 
 8427256:	89 04 24             	mov    %eax,(%esp)
 8427259:	e8 f8 19 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842725e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8427261:	89 04 24             	mov    %eax,(%esp)
 8427264:	e8 dd 19 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8427269:	8b 55 08             	mov    0x8(%ebp),%edx
 842726c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8427270:	89 04 24             	mov    %eax,(%esp)
 8427273:	e8 1a b0 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8427278:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842727b:	89 04 24             	mov    %eax,(%esp)
 842727e:	e8 c3 19 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8427283:	8b 55 0c             	mov    0xc(%ebp),%edx
 8427286:	89 54 24 04          	mov    %edx,0x4(%esp)
 842728a:	89 04 24             	mov    %eax,(%esp)
 842728d:	e8 c4 19 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8427292:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8427297:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842729a:	89 54 24 08          	mov    %edx,0x8(%esp)
 842729e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84272a5:	00 
 84272a6:	89 04 24             	mov    %eax,(%esp)
 84272a9:	e8 30 9d 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84272ae:	eb 1b                	jmp    84272cb <_ZN18DB_UpdateGiftCount11makeRequestEji+0xdf>
 84272b0:	89 d3                	mov    %edx,%ebx
 84272b2:	89 c6                	mov    %eax,%esi
 84272b4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84272b7:	89 04 24             	mov    %eax,(%esp)
 84272ba:	e8 13 56 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84272bf:	89 f0                	mov    %esi,%eax
 84272c1:	89 da                	mov    %ebx,%edx
 84272c3:	89 04 24             	mov    %eax,(%esp)
 84272c6:	e8 85 c4 6b 00       	call   8ae3750 <_Unwind_Resume>
 84272cb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84272ce:	89 04 24             	mov    %eax,(%esp)
 84272d1:	e8 fc 55 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84272d6:	83 c4 20             	add    $0x20,%esp
 84272d9:	5b                   	pop    %ebx
 84272da:	5e                   	pop    %esi
 84272db:	5d                   	pop    %ebp
 84272dc:	c3                   	ret
 84272dd:	90                   	nop

```

```c
// DB_UpdateGiftCount::makeRequest @ 0x84271ec

/* DB_UpdateGiftCount::makeRequest(unsigned int, int) */

void DB_UpdateGiftCount::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6841);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842723e to 084272ad has its CatchHandler @ 084272b0 */
  CStreamGuard::operator<<(pCVar2,0xd1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

