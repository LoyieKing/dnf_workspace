# DB_CancelRestingUserRestrict

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843712e DB_CancelRestingUserRestrict::dispatch  [0x0843712e-0x843741d] ===
 843712e:	55                   	push   %ebp
 843712f:	89 e5                	mov    %esp,%ebp
 8437131:	57                   	push   %edi
 8437132:	56                   	push   %esi
 8437133:	53                   	push   %ebx
 8437134:	81 ec 8c 01 00 00    	sub    $0x18c,%esp
 843713a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843713f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437146:	00 
 8437147:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843714e:	00 
 843714f:	89 04 24             	mov    %eax,(%esp)
 8437152:	e8 e7 e0 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8437157:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843715a:	8b 45 14             	mov    0x14(%ebp),%eax
 843715d:	89 04 24             	mov    %eax,(%esp)
 8437160:	e8 5b c3 01 00       	call   84534c0 <_ZN6Stream12GetOutBufferI25SIG_RESTING_USER_RESTRICTEEPT_v>
 8437165:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8437168:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843716b:	8b 00                	mov    (%eax),%eax
 843716d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8437174:	00 
 8437175:	89 04 24             	mov    %eax,(%esp)
 8437178:	e8 ce 1e cd ff       	call   810904b <_Z14NumberToStringji>
 843717d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8437181:	c7 44 24 04 10 3b c5 	movl   $0x8c53b10,0x4(%esp)
 8437188:	08 
 8437189:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843718c:	89 04 24             	mov    %eax,(%esp)
 843718f:	e8 2c d0 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8437194:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843719b:	00 
 843719c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843719f:	89 04 24             	mov    %eax,(%esp)
 84371a2:	e8 7f d1 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84371a7:	83 f0 01             	xor    $0x1,%eax
 84371aa:	84 c0                	test   %al,%al
 84371ac:	74 0a                	je     84371b8 <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x8a>
 84371ae:	bb 00 00 00 00       	mov    $0x0,%ebx
 84371b3:	e9 59 02 00 00       	jmp    8437411 <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x2e3>
 84371b8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84371bd:	c7 44 24 08 5c 83 00 	movl   $0x835c,0x8(%esp)
 84371c4:	00 
 84371c5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84371cc:	08 
 84371cd:	89 04 24             	mov    %eax,(%esp)
 84371d0:	e8 b1 88 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84371d5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84371dc:	00 
 84371dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84371e1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84371e4:	89 04 24             	mov    %eax,(%esp)
 84371e7:	e8 3a 1a c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84371ec:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84371ef:	89 04 24             	mov    %eax,(%esp)
 84371f2:	e8 4f 1a c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84371f7:	c7 44 24 04 95 01 00 	movl   $0x195,0x4(%esp)
 84371fe:	00 
 84371ff:	89 04 24             	mov    %eax,(%esp)
 8437202:	e8 4f 1a c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437207:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 843720a:	89 04 24             	mov    %eax,(%esp)
 843720d:	e8 34 1a c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437212:	8b 55 10             	mov    0x10(%ebp),%edx
 8437215:	89 54 24 04          	mov    %edx,0x4(%esp)
 8437219:	89 04 24             	mov    %eax,(%esp)
 843721c:	e8 35 1a c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437221:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8437226:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8437229:	89 54 24 08          	mov    %edx,0x8(%esp)
 843722d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437234:	00 
 8437235:	89 04 24             	mov    %eax,(%esp)
 8437238:	e8 a1 9d 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843723d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8437242:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437249:	00 
 843724a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437251:	00 
 8437252:	89 04 24             	mov    %eax,(%esp)
 8437255:	e8 e4 df fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843725a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843725d:	8d 95 89 fe ff ff    	lea    -0x177(%ebp),%edx
 8437263:	bb ff 00 00 00       	mov    $0xff,%ebx
 8437268:	b8 00 00 00 00       	mov    $0x0,%eax
 843726d:	89 d1                	mov    %edx,%ecx
 843726f:	83 e1 01             	and    $0x1,%ecx
 8437272:	85 c9                	test   %ecx,%ecx
 8437274:	74 08                	je     843727e <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x150>
 8437276:	88 02                	mov    %al,(%edx)
 8437278:	83 c2 01             	add    $0x1,%edx
 843727b:	83 eb 01             	sub    $0x1,%ebx
 843727e:	89 d1                	mov    %edx,%ecx
 8437280:	83 e1 02             	and    $0x2,%ecx
 8437283:	85 c9                	test   %ecx,%ecx
 8437285:	74 09                	je     8437290 <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x162>
 8437287:	66 89 02             	mov    %ax,(%edx)
 843728a:	83 c2 02             	add    $0x2,%edx
 843728d:	83 eb 02             	sub    $0x2,%ebx
 8437290:	89 d9                	mov    %ebx,%ecx
 8437292:	c1 e9 02             	shr    $0x2,%ecx
 8437295:	89 d7                	mov    %edx,%edi
 8437297:	f3 ab                	rep stos %eax,%es:(%edi)
 8437299:	89 fa                	mov    %edi,%edx
 843729b:	89 d9                	mov    %ebx,%ecx
 843729d:	83 e1 02             	and    $0x2,%ecx
 84372a0:	85 c9                	test   %ecx,%ecx
 84372a2:	74 06                	je     84372aa <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x17c>
 84372a4:	66 89 02             	mov    %ax,(%edx)
 84372a7:	83 c2 02             	add    $0x2,%edx
 84372aa:	89 d9                	mov    %ebx,%ecx
 84372ac:	83 e1 01             	and    $0x1,%ecx
 84372af:	85 c9                	test   %ecx,%ecx
 84372b1:	74 05                	je     84372b8 <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x18a>
 84372b3:	88 02                	mov    %al,(%edx)
 84372b5:	83 c2 01             	add    $0x1,%edx
 84372b8:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 84372bf:	00 
 84372c0:	c7 44 24 04 62 3b c5 	movl   $0x8c53b62,0x4(%esp)
 84372c7:	08 
 84372c8:	8d 85 89 fe ff ff    	lea    -0x177(%ebp),%eax
 84372ce:	89 04 24             	mov    %eax,(%esp)
 84372d1:	e8 ca 65 c4 ff       	call   807d8a0 <memcpy@plt>
 84372d6:	c7 45 ba 00 00 00 00 	movl   $0x0,-0x46(%ebp)
 84372dd:	c7 45 be 00 00 00 00 	movl   $0x0,-0x42(%ebp)
 84372e4:	66 c7 45 c2 00 00    	movw   $0x0,-0x3e(%ebp)
 84372ea:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84372f1:	e8 a8 49 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84372f6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84372f9:	8d 45 88             	lea    -0x78(%ebp),%eax
 84372fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437300:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8437303:	89 04 24             	mov    %eax,(%esp)
 8437306:	e8 55 70 c4 ff       	call   807e360 <localtime_r@plt>
 843730b:	8d 45 88             	lea    -0x78(%ebp),%eax
 843730e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8437312:	c7 44 24 08 97 0b c5 	movl   $0x8c50b97,0x8(%esp)
 8437319:	08 
 843731a:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8437321:	00 
 8437322:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8437325:	89 04 24             	mov    %eax,(%esp)
 8437328:	e8 93 68 c4 ff       	call   807dbc0 <strftime@plt>
 843732d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8437330:	8b 00                	mov    (%eax),%eax
 8437332:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8437339:	00 
 843733a:	89 04 24             	mov    %eax,(%esp)
 843733d:	e8 09 1d cd ff       	call   810904b <_Z14NumberToStringji>
 8437342:	c7 44 24 14 0a 00 00 	movl   $0xa,0x14(%esp)
 8437349:	00 
 843734a:	89 44 24 10          	mov    %eax,0x10(%esp)
 843734e:	8d 85 89 fe ff ff    	lea    -0x177(%ebp),%eax
 8437354:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8437358:	8d 45 ba             	lea    -0x46(%ebp),%eax
 843735b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843735f:	c7 44 24 04 80 3b c5 	movl   $0x8c53b80,0x4(%esp)
 8437366:	08 
 8437367:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843736a:	89 04 24             	mov    %eax,(%esp)
 843736d:	e8 4e ce fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8437372:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437379:	00 
 843737a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843737d:	89 04 24             	mov    %eax,(%esp)
 8437380:	e8 a1 cf fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8437385:	83 f0 01             	xor    $0x1,%eax
 8437388:	84 c0                	test   %al,%al
 843738a:	74 07                	je     8437393 <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x265>
 843738c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8437391:	eb 73                	jmp    8437406 <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x2d8>
 8437393:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8437396:	8b 00                	mov    (%eax),%eax
 8437398:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843739f:	00 
 84373a0:	89 04 24             	mov    %eax,(%esp)
 84373a3:	e8 a3 1c cd ff       	call   810904b <_Z14NumberToStringji>
 84373a8:	89 c3                	mov    %eax,%ebx
 84373aa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84373b1:	00 
 84373b2:	c7 44 24 08 81 83 00 	movl   $0x8381,0x8(%esp)
 84373b9:	00 
 84373ba:	c7 44 24 04 c0 bd c5 	movl   $0x8c5bdc0,0x4(%esp)
 84373c1:	08 
 84373c2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84373c5:	89 04 24             	mov    %eax,(%esp)
 84373c8:	e8 4b 83 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84373cd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84373d1:	c7 44 24 04 00 3c c5 	movl   $0x8c53c00,0x4(%esp)
 84373d8:	08 
 84373d9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84373dc:	89 04 24             	mov    %eax,(%esp)
 84373df:	e8 a4 83 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84373e4:	bb 01 00 00 00       	mov    $0x1,%ebx
 84373e9:	eb 1b                	jmp    8437406 <_ZN28DB_CancelRestingUserRestrict8dispatchEiiP6Stream+0x2d8>
 84373eb:	89 d3                	mov    %edx,%ebx
 84373ed:	89 c6                	mov    %eax,%esi
 84373ef:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84373f2:	89 04 24             	mov    %eax,(%esp)
 84373f5:	e8 d8 54 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84373fa:	89 f0                	mov    %esi,%eax
 84373fc:	89 da                	mov    %ebx,%edx
 84373fe:	89 04 24             	mov    %eax,(%esp)
 8437401:	e8 4a c3 6a 00       	call   8ae3750 <_Unwind_Resume>
 8437406:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8437409:	89 04 24             	mov    %eax,(%esp)
 843740c:	e8 c1 54 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8437411:	89 d8                	mov    %ebx,%eax
 8437413:	81 c4 8c 01 00 00    	add    $0x18c,%esp
 8437419:	5b                   	pop    %ebx
 843741a:	5e                   	pop    %esi
 843741b:	5f                   	pop    %edi
 843741c:	5d                   	pop    %ebp
 843741d:	c3                   	ret

```

```c
// DB_CancelRestingUserRestrict::dispatch @ 0x843712e

/* DB_CancelRestingUserRestrict::dispatch(int, int, Stream*) */

bool __thiscall
DB_CancelRestingUserRestrict::dispatch
          (DB_CancelRestingUserRestrict *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  undefined1 local_17b [255];
  tm local_7c;
  time_t local_50;
  char local_4a [10];
  CStreamGuard local_40 [8];
  cMyTrace local_38 [16];
  MySQL *local_28;
  SIG_RESTING_USER_RESTRICT *local_24;
  MySQL *local_20;
  
  bVar9 = 0;
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_24 = Stream::GetOutBuffer<SIG_RESTING_USER_RESTRICT>(param_3);
  uVar2 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_28,
                   "upDate member_punish_info set apply_flag = 0 where m_id = %s and punish_type = 10"
                   ,uVar2);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x835c);
    CStreamGuard::CStreamGuard(local_40,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 08437202 to 084373e3 has its CatchHandler @ 084373eb */
    CStreamGuard::operator<<(pCVar4,0x195);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_40);
    CStreamGuard::operator<<(pCVar4,param_2);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    puVar6 = (undefined4 *)local_17b;
    uVar7 = 0xff;
    bVar8 = ((uint)puVar6 & 1) != 0;
    if (bVar8) {
      local_17b[0] = 0;
      puVar6 = (undefined4 *)(local_17b + 1);
      uVar7 = 0xfe;
    }
    if (((uint)puVar6 & 2) != 0) {
      *(undefined2 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 2);
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
    }
    if ((uVar7 & 2) != 0) {
      *(undefined2 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 2);
    }
    if (!bVar8) {
      *(undefined1 *)puVar6 = 0;
    }
    memcpy(local_17b,&DAT_08c53b62,0x1b);
    local_4a[0] = '\0';
    local_4a[1] = '\0';
    local_4a[2] = '\0';
    local_4a[3] = '\0';
    local_4a[4] = '\0';
    local_4a[5] = '\0';
    local_4a[6] = '\0';
    local_4a[7] = '\0';
    local_4a[8] = '\0';
    local_4a[9] = '\0';
    local_50 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_50,&local_7c);
    strftime(local_4a,10,"%Y",&local_7c);
    uVar2 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_20,
                     "upDate member_punish_info_history_%s set apply_flag = 0 , reason = \'%s\' where m_id = %s and punish_type = %d and apply_flag = 1"
                     ,local_4a,local_17b,uVar2,10);
    cVar1 = MySQL::exec(local_20,true);
    bVar8 = cVar1 == '\x01';
    if (bVar8) {
      uVar2 = NumberToString(*(uint *)local_24,0);
      cMyTrace::cMyTrace(local_38,
                         "virtual bool DB_CancelRestingUserRestrict::dispatch(int, int, Stream*)",
                         0x8381,0);
      cMyTrace::operator()(local_38,"CANCEL OK - Resting User Restrict (mid:%s)",uVar2);
    }
    CStreamGuard::~CStreamGuard(local_40);
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}

```

---

## makeRequest

```asm
// === 0843741e DB_CancelRestingUserRestrict::makeRequest  [0x0843741e-0x84374f7] ===
 843741e:	55                   	push   %ebp
 843741f:	89 e5                	mov    %esp,%ebp
 8437421:	56                   	push   %esi
 8437422:	53                   	push   %ebx
 8437423:	83 ec 20             	sub    $0x20,%esp
 8437426:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843742b:	c7 44 24 08 89 83 00 	movl   $0x8389,0x8(%esp)
 8437432:	00 
 8437433:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843743a:	08 
 843743b:	89 04 24             	mov    %eax,(%esp)
 843743e:	e8 43 86 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8437443:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843744a:	00 
 843744b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843744f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437452:	89 04 24             	mov    %eax,(%esp)
 8437455:	e8 cc 17 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843745a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843745d:	89 04 24             	mov    %eax,(%esp)
 8437460:	e8 e1 17 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437465:	c7 44 24 04 95 01 00 	movl   $0x195,0x4(%esp)
 843746c:	00 
 843746d:	89 04 24             	mov    %eax,(%esp)
 8437470:	e8 e1 17 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8437475:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437478:	89 04 24             	mov    %eax,(%esp)
 843747b:	e8 c6 17 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8437480:	8b 55 0c             	mov    0xc(%ebp),%edx
 8437483:	89 54 24 04          	mov    %edx,0x4(%esp)
 8437487:	89 04 24             	mov    %eax,(%esp)
 843748a:	e8 c7 17 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843748f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8437492:	89 04 24             	mov    %eax,(%esp)
 8437495:	e8 b4 17 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843749a:	89 04 24             	mov    %eax,(%esp)
 843749d:	e8 72 c0 01 00       	call   8453514 <_ZN12CStreamGuard11GetInBufferI25SIG_RESTING_USER_RESTRICTEEPT_v>
 84374a2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84374a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84374a8:	8b 55 08             	mov    0x8(%ebp),%edx
 84374ab:	89 10                	mov    %edx,(%eax)
 84374ad:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84374b2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84374b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84374b9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84374c0:	00 
 84374c1:	89 04 24             	mov    %eax,(%esp)
 84374c4:	e8 15 9b 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84374c9:	eb 1b                	jmp    84374e6 <_ZN28DB_CancelRestingUserRestrict11makeRequestEji+0xc8>
 84374cb:	89 d3                	mov    %edx,%ebx
 84374cd:	89 c6                	mov    %eax,%esi
 84374cf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84374d2:	89 04 24             	mov    %eax,(%esp)
 84374d5:	e8 f8 53 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84374da:	89 f0                	mov    %esi,%eax
 84374dc:	89 da                	mov    %ebx,%edx
 84374de:	89 04 24             	mov    %eax,(%esp)
 84374e1:	e8 6a c2 6a 00       	call   8ae3750 <_Unwind_Resume>
 84374e6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84374e9:	89 04 24             	mov    %eax,(%esp)
 84374ec:	e8 e1 53 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84374f1:	83 c4 20             	add    $0x20,%esp
 84374f4:	5b                   	pop    %ebx
 84374f5:	5e                   	pop    %esi
 84374f6:	5d                   	pop    %ebp
 84374f7:	c3                   	ret

```

```c
// DB_CancelRestingUserRestrict::makeRequest @ 0x843741e

/* DB_CancelRestingUserRestrict::makeRequest(unsigned int, int) */

void DB_CancelRestingUserRestrict::makeRequest(uint param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_RESTING_USER_RESTRICT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8389);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08437470 to 084374c8 has its CatchHandler @ 084374cb */
  CStreamGuard::operator<<(pCVar2,0x195);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_RESTING_USER_RESTRICT>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

