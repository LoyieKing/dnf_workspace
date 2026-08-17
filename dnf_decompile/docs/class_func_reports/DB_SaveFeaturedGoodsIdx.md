# DB_SaveFeaturedGoodsIdx

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0841b210 DB_SaveFeaturedGoodsIdx::dispatch  [0x0841b210-0x841b2d9] ===
 841b210:	55                   	push   %ebp
 841b211:	89 e5                	mov    %esp,%ebp
 841b213:	57                   	push   %edi
 841b214:	56                   	push   %esi
 841b215:	53                   	push   %ebx
 841b216:	83 ec 4c             	sub    $0x4c,%esp
 841b219:	8b 45 14             	mov    0x14(%ebp),%eax
 841b21c:	89 04 24             	mov    %eax,(%esp)
 841b21f:	e8 a0 5e 03 00       	call   84510c4 <_ZN6Stream12GetOutBufferI26SIG_SAVE_FEATURED_GOODSIDXEEPT_v>
 841b224:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841b227:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b22c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b233:	00 
 841b234:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 841b23b:	00 
 841b23c:	89 04 24             	mov    %eax,(%esp)
 841b23f:	e8 fa 9f fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b244:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841b247:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b24a:	8b 40 10             	mov    0x10(%eax),%eax
 841b24d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 841b250:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b253:	8b 78 04             	mov    0x4(%eax),%edi
 841b256:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b259:	8b 70 0c             	mov    0xc(%eax),%esi
 841b25c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b25f:	8b 58 10             	mov    0x10(%eax),%ebx
 841b262:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b265:	8b 00                	mov    (%eax),%eax
 841b267:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841b26e:	00 
 841b26f:	89 04 24             	mov    %eax,(%esp)
 841b272:	e8 d4 dd ce ff       	call   810904b <_Z14NumberToStringji>
 841b277:	8b 55 e0             	mov    -0x20(%ebp),%edx
 841b27a:	8b 52 08             	mov    0x8(%edx),%edx
 841b27d:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 841b280:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 841b284:	89 7c 24 18          	mov    %edi,0x18(%esp)
 841b288:	89 74 24 14          	mov    %esi,0x14(%esp)
 841b28c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841b290:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b294:	89 54 24 08          	mov    %edx,0x8(%esp)
 841b298:	c7 44 24 04 90 b1 c4 	movl   $0x8c4b190,0x4(%esp)
 841b29f:	08 
 841b2a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841b2a3:	89 04 24             	mov    %eax,(%esp)
 841b2a6:	e8 15 8f fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b2ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b2b2:	00 
 841b2b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841b2b6:	89 04 24             	mov    %eax,(%esp)
 841b2b9:	e8 68 90 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b2be:	83 f0 01             	xor    $0x1,%eax
 841b2c1:	84 c0                	test   %al,%al
 841b2c3:	74 07                	je     841b2cc <_ZN23DB_SaveFeaturedGoodsIdx8dispatchEiiP6Stream+0xbc>
 841b2c5:	b8 00 00 00 00       	mov    $0x0,%eax
 841b2ca:	eb 05                	jmp    841b2d1 <_ZN23DB_SaveFeaturedGoodsIdx8dispatchEiiP6Stream+0xc1>
 841b2cc:	b8 01 00 00 00       	mov    $0x1,%eax
 841b2d1:	83 c4 4c             	add    $0x4c,%esp
 841b2d4:	5b                   	pop    %ebx
 841b2d5:	5e                   	pop    %esi
 841b2d6:	5f                   	pop    %edi
 841b2d7:	5d                   	pop    %ebp
 841b2d8:	c3                   	ret
 841b2d9:	90                   	nop

```

```c
// DB_SaveFeaturedGoodsIdx::dispatch @ 0x841b210

/* DB_SaveFeaturedGoodsIdx::dispatch(int, int, Stream*) */

bool DB_SaveFeaturedGoodsIdx::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  SIG_SAVE_FEATURED_GOODSIDX *pSVar6;
  MySQL *this;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  
  pSVar6 = Stream::GetOutBuffer<SIG_SAVE_FEATURED_GOODSIDX>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(undefined4 *)(pSVar6 + 0x10);
  uVar2 = *(undefined4 *)(pSVar6 + 4);
  uVar3 = *(undefined4 *)(pSVar6 + 0xc);
  uVar4 = *(undefined4 *)(pSVar6 + 0x10);
  uVar7 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this,
                   "inSert into dnf_event_entry(event_id,m_id,occ_date,server_id,charac_no,obtain_date) values(%d,%s,from_unixtime(%d),%d,%d,from_unixtime(%d))"
                   ,*(undefined4 *)(pSVar6 + 8),uVar7,uVar4,uVar3,uVar2,uVar1);
  cVar5 = MySQL::exec(this,true);
  return cVar5 == '\x01';
}

```

---

## makeRequest

```asm
// === 0841b2da DB_SaveFeaturedGoodsIdx::makeRequest  [0x0841b2da-0x841b419] ===
 841b2da:	55                   	push   %ebp
 841b2db:	89 e5                	mov    %esp,%ebp
 841b2dd:	56                   	push   %esi
 841b2de:	53                   	push   %ebx
 841b2df:	83 ec 20             	sub    $0x20,%esp
 841b2e2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841b2e7:	c7 44 24 08 fb 4d 00 	movl   $0x4dfb,0x8(%esp)
 841b2ee:	00 
 841b2ef:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841b2f6:	08 
 841b2f7:	89 04 24             	mov    %eax,(%esp)
 841b2fa:	e8 87 47 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841b2ff:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841b306:	00 
 841b307:	89 44 24 04          	mov    %eax,0x4(%esp)
 841b30b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b30e:	89 04 24             	mov    %eax,(%esp)
 841b311:	e8 10 d9 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841b316:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b319:	89 04 24             	mov    %eax,(%esp)
 841b31c:	e8 25 d9 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841b321:	c7 44 24 04 52 00 00 	movl   $0x52,0x4(%esp)
 841b328:	00 
 841b329:	89 04 24             	mov    %eax,(%esp)
 841b32c:	e8 25 d9 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841b331:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b334:	89 04 24             	mov    %eax,(%esp)
 841b337:	e8 0a d9 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841b33c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 841b343:	ff 
 841b344:	89 04 24             	mov    %eax,(%esp)
 841b347:	e8 0a d9 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841b34c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b34f:	89 04 24             	mov    %eax,(%esp)
 841b352:	e8 ef d8 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841b357:	8b 55 08             	mov    0x8(%ebp),%edx
 841b35a:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b35e:	89 04 24             	mov    %eax,(%esp)
 841b361:	e8 2c 6f cc ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 841b366:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b369:	89 04 24             	mov    %eax,(%esp)
 841b36c:	e8 d5 d8 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841b371:	8b 55 0c             	mov    0xc(%ebp),%edx
 841b374:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b378:	89 04 24             	mov    %eax,(%esp)
 841b37b:	e8 d6 d8 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841b380:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b383:	89 04 24             	mov    %eax,(%esp)
 841b386:	e8 bb d8 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841b38b:	8b 55 10             	mov    0x10(%ebp),%edx
 841b38e:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b392:	89 04 24             	mov    %eax,(%esp)
 841b395:	e8 bc d8 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841b39a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b39d:	89 04 24             	mov    %eax,(%esp)
 841b3a0:	e8 a1 d8 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841b3a5:	8b 55 18             	mov    0x18(%ebp),%edx
 841b3a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b3ac:	89 04 24             	mov    %eax,(%esp)
 841b3af:	e8 a2 d8 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841b3b4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b3b7:	89 04 24             	mov    %eax,(%esp)
 841b3ba:	e8 87 d8 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841b3bf:	8b 55 14             	mov    0x14(%ebp),%edx
 841b3c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b3c6:	89 04 24             	mov    %eax,(%esp)
 841b3c9:	e8 88 d8 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841b3ce:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841b3d3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 841b3d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 841b3da:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841b3e1:	00 
 841b3e2:	89 04 24             	mov    %eax,(%esp)
 841b3e5:	e8 f4 5b 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841b3ea:	eb 1b                	jmp    841b407 <_ZN23DB_SaveFeaturedGoodsIdx11makeRequestEjiiii+0x12d>
 841b3ec:	89 d3                	mov    %edx,%ebx
 841b3ee:	89 c6                	mov    %eax,%esi
 841b3f0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b3f3:	89 04 24             	mov    %eax,(%esp)
 841b3f6:	e8 d7 14 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841b3fb:	89 f0                	mov    %esi,%eax
 841b3fd:	89 da                	mov    %ebx,%edx
 841b3ff:	89 04 24             	mov    %eax,(%esp)
 841b402:	e8 49 83 6c 00       	call   8ae3750 <_Unwind_Resume>
 841b407:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841b40a:	89 04 24             	mov    %eax,(%esp)
 841b40d:	e8 c0 14 20 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841b412:	83 c4 20             	add    $0x20,%esp
 841b415:	5b                   	pop    %ebx
 841b416:	5e                   	pop    %esi
 841b417:	5d                   	pop    %ebp
 841b418:	c3                   	ret
 841b419:	90                   	nop

```

```c
// DB_SaveFeaturedGoodsIdx::makeRequest @ 0x841b2da

/* DB_SaveFeaturedGoodsIdx::makeRequest(unsigned int, int, int, int, int) */

void DB_SaveFeaturedGoodsIdx::makeRequest
               (uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x4dfb);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0841b32c to 0841b3e9 has its CatchHandler @ 0841b3ec */
  CStreamGuard::operator<<(pCVar2,0x52);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

