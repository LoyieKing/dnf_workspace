# DB_SecuServiceUpdateValidityTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843a264 DB_SecuServiceUpdateValidityTime::dispatch  [0x0843a264-0x843a34d] ===
 843a264:	55                   	push   %ebp
 843a265:	89 e5                	mov    %esp,%ebp
 843a267:	83 ec 38             	sub    $0x38,%esp
 843a26a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843a26f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843a276:	00 
 843a277:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a27e:	00 
 843a27f:	89 04 24             	mov    %eax,(%esp)
 843a282:	e8 b7 af fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843a287:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843a28a:	8b 45 14             	mov    0x14(%ebp),%eax
 843a28d:	89 04 24             	mov    %eax,(%esp)
 843a290:	e8 11 96 01 00       	call   84538a6 <_ZN6Stream12GetOutBufferI38SIG_SECURITY_CARD_SERVICE_VALIDITYTIMEEEPT_v>
 843a295:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843a298:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a29b:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 843a29f:	66 83 f8 08          	cmp    $0x8,%ax
 843a2a3:	75 42                	jne    843a2e7 <_ZN32DB_SecuServiceUpdateValidityTime8dispatchEiiP6Stream+0x83>
 843a2a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a2a8:	8b 00                	mov    (%eax),%eax
 843a2aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a2b1:	00 
 843a2b2:	89 04 24             	mov    %eax,(%esp)
 843a2b5:	e8 91 ed cc ff       	call   810904b <_Z14NumberToStringji>
 843a2ba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843a2bd:	8d 4a 0a             	lea    0xa(%edx),%ecx
 843a2c0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843a2c3:	8b 52 04             	mov    0x4(%edx),%edx
 843a2c6:	89 44 24 10          	mov    %eax,0x10(%esp)
 843a2ca:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843a2ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a2d2:	c7 44 24 04 34 4b c5 	movl   $0x8c54b34,0x4(%esp)
 843a2d9:	08 
 843a2da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a2dd:	89 04 24             	mov    %eax,(%esp)
 843a2e0:	e8 db 9e fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843a2e5:	eb 4d                	jmp    843a334 <_ZN32DB_SecuServiceUpdateValidityTime8dispatchEiiP6Stream+0xd0>
 843a2e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a2ea:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 843a2ee:	66 83 f8 10          	cmp    $0x10,%ax
 843a2f2:	75 40                	jne    843a334 <_ZN32DB_SecuServiceUpdateValidityTime8dispatchEiiP6Stream+0xd0>
 843a2f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a2f7:	8b 00                	mov    (%eax),%eax
 843a2f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843a300:	00 
 843a301:	89 04 24             	mov    %eax,(%esp)
 843a304:	e8 42 ed cc ff       	call   810904b <_Z14NumberToStringji>
 843a309:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843a30c:	8d 4a 0a             	lea    0xa(%edx),%ecx
 843a30f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843a312:	8b 52 04             	mov    0x4(%edx),%edx
 843a315:	89 44 24 10          	mov    %eax,0x10(%esp)
 843a319:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843a31d:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a321:	c7 44 24 04 b0 4b c5 	movl   $0x8c54bb0,0x4(%esp)
 843a328:	08 
 843a329:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a32c:	89 04 24             	mov    %eax,(%esp)
 843a32f:	e8 8c 9e fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843a334:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a33b:	00 
 843a33c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a33f:	89 04 24             	mov    %eax,(%esp)
 843a342:	e8 df 9f fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843a347:	b8 01 00 00 00       	mov    $0x1,%eax
 843a34c:	c9                   	leave
 843a34d:	c3                   	ret

```

```c
// DB_SecuServiceUpdateValidityTime::dispatch @ 0x843a264

/* DB_SecuServiceUpdateValidityTime::dispatch(int, int, Stream*) */

undefined4 DB_SecuServiceUpdateValidityTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_SERVICE_VALIDITYTIME *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_SERVICE_VALIDITYTIME>(in_stack_00000010);
  if (*(short *)(pSVar1 + 8) == 8) {
    uVar2 = NumberToString(*(uint *)pSVar1,0);
    MySQL::set_query(this,
                     "upDate member_security_grade set security_card_validity_time\t=unix_timestamp(now())+%d , validity_ip = \'%s\' where m_id=%s"
                     ,*(undefined4 *)(pSVar1 + 4),pSVar1 + 10,uVar2);
  }
  else if (*(short *)(pSVar1 + 8) == 0x10) {
    uVar2 = NumberToString(*(uint *)pSVar1,0);
    MySQL::set_query(this,
                     "upDate member_security_grade set goblin_validity_time\t\t=unix_timestamp(now())+%d , validity_ip = \'%s\' where m_id=%s"
                     ,*(undefined4 *)(pSVar1 + 4),pSVar1 + 10,uVar2);
  }
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0843a34e DB_SecuServiceUpdateValidityTime::makeRequest  [0x0843a34e-0x843a461] ===
 843a34e:	55                   	push   %ebp
 843a34f:	89 e5                	mov    %esp,%ebp
 843a351:	56                   	push   %esi
 843a352:	53                   	push   %ebx
 843a353:	83 ec 30             	sub    $0x30,%esp
 843a356:	8b 45 10             	mov    0x10(%ebp),%eax
 843a359:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 843a35d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843a362:	c7 44 24 08 d4 88 00 	movl   $0x88d4,0x8(%esp)
 843a369:	00 
 843a36a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843a371:	08 
 843a372:	89 04 24             	mov    %eax,(%esp)
 843a375:	e8 0c 57 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843a37a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843a381:	00 
 843a382:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a386:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a389:	89 04 24             	mov    %eax,(%esp)
 843a38c:	e8 95 e8 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843a391:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a394:	89 04 24             	mov    %eax,(%esp)
 843a397:	e8 aa e8 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a39c:	c7 44 24 04 c9 01 00 	movl   $0x1c9,0x4(%esp)
 843a3a3:	00 
 843a3a4:	89 04 24             	mov    %eax,(%esp)
 843a3a7:	e8 aa e8 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a3ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a3af:	89 04 24             	mov    %eax,(%esp)
 843a3b2:	e8 8f e8 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843a3b7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843a3be:	ff 
 843a3bf:	89 04 24             	mov    %eax,(%esp)
 843a3c2:	e8 8f e8 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843a3c7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a3ca:	89 04 24             	mov    %eax,(%esp)
 843a3cd:	e8 7c e8 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843a3d2:	89 04 24             	mov    %eax,(%esp)
 843a3d5:	e8 20 95 01 00       	call   84538fa <_ZN12CStreamGuard11GetInBufferI38SIG_SECURITY_CARD_SERVICE_VALIDITYTIMEEEPT_v>
 843a3da:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843a3dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a3e0:	8b 55 08             	mov    0x8(%ebp),%edx
 843a3e3:	89 10                	mov    %edx,(%eax)
 843a3e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a3e8:	8b 55 0c             	mov    0xc(%ebp),%edx
 843a3eb:	89 50 04             	mov    %edx,0x4(%eax)
 843a3ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a3f1:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 843a3f5:	66 89 50 08          	mov    %dx,0x8(%eax)
 843a3f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a3fc:	8d 50 0a             	lea    0xa(%eax),%edx
 843a3ff:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 843a406:	00 
 843a407:	8b 45 14             	mov    0x14(%ebp),%eax
 843a40a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843a40e:	89 14 24             	mov    %edx,(%esp)
 843a411:	e8 ba 34 c4 ff       	call   807d8d0 <strncpy@plt>
 843a416:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843a41b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843a41e:	89 54 24 08          	mov    %edx,0x8(%esp)
 843a422:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843a429:	00 
 843a42a:	89 04 24             	mov    %eax,(%esp)
 843a42d:	e8 ac 6b 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843a432:	eb 1b                	jmp    843a44f <_ZN32DB_SecuServiceUpdateValidityTime11makeRequestEjjtPc+0x101>
 843a434:	89 d3                	mov    %edx,%ebx
 843a436:	89 c6                	mov    %eax,%esi
 843a438:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a43b:	89 04 24             	mov    %eax,(%esp)
 843a43e:	e8 8f 24 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a443:	89 f0                	mov    %esi,%eax
 843a445:	89 da                	mov    %ebx,%edx
 843a447:	89 04 24             	mov    %eax,(%esp)
 843a44a:	e8 01 93 6a 00       	call   8ae3750 <_Unwind_Resume>
 843a44f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843a452:	89 04 24             	mov    %eax,(%esp)
 843a455:	e8 78 24 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843a45a:	83 c4 30             	add    $0x30,%esp
 843a45d:	5b                   	pop    %ebx
 843a45e:	5e                   	pop    %esi
 843a45f:	5d                   	pop    %ebp
 843a460:	c3                   	ret
 843a461:	90                   	nop

```

```c
// DB_SecuServiceUpdateValidityTime::makeRequest @ 0x843a34e

/* DB_SecuServiceUpdateValidityTime::makeRequest(unsigned int, unsigned int, unsigned short, char*)
    */

void DB_SecuServiceUpdateValidityTime::makeRequest
               (uint param_1,uint param_2,ushort param_3,char *param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_SERVICE_VALIDITYTIME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x88d4);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843a3a7 to 0843a431 has its CatchHandler @ 0843a434 */
  CStreamGuard::operator<<(pCVar2,0x1c9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_SERVICE_VALIDITYTIME>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(ushort *)(local_10 + 8) = param_3;
  strncpy((char *)(local_10 + 10),param_4,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

