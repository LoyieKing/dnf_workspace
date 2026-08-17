# CBusinessImpl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ProcessProtectMsg

```asm
// === 080de4ec CBusinessImpl::ProcessProtectMsg  [0x080de4ec-0x80de5cf] ===
 80de4ec:	55                   	push   %ebp
 80de4ed:	89 e5                	mov    %esp,%ebp
 80de4ef:	56                   	push   %esi
 80de4f0:	53                   	push   %ebx
 80de4f1:	83 ec 20             	sub    $0x20,%esp
 80de4f4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80de4f9:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 80de500:	00 
 80de501:	c7 44 24 04 40 b0 b2 	movl   $0x8b2b040,0x4(%esp)
 80de508:	08 
 80de509:	89 04 24             	mov    %eax,(%esp)
 80de50c:	e8 75 15 1b 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80de511:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80de518:	00 
 80de519:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de51d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de520:	89 04 24             	mov    %eax,(%esp)
 80de523:	e8 fe a6 fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80de528:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de52b:	89 04 24             	mov    %eax,(%esp)
 80de52e:	e8 13 a7 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80de533:	c7 44 24 04 54 02 00 	movl   $0x254,0x4(%esp)
 80de53a:	00 
 80de53b:	89 04 24             	mov    %eax,(%esp)
 80de53e:	e8 13 a7 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80de543:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de546:	89 04 24             	mov    %eax,(%esp)
 80de549:	e8 f8 a6 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80de54e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80de555:	ff 
 80de556:	89 04 24             	mov    %eax,(%esp)
 80de559:	e8 f8 a6 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80de55e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de561:	89 04 24             	mov    %eax,(%esp)
 80de564:	e8 e5 a6 fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80de569:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 80de570:	00 
 80de571:	8b 55 0c             	mov    0xc(%ebp),%edx
 80de574:	89 54 24 04          	mov    %edx,0x4(%esp)
 80de578:	89 04 24             	mov    %eax,(%esp)
 80de57b:	e8 d2 00 00 00       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 80de580:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80de585:	8d 55 f0             	lea    -0x10(%ebp),%edx
 80de588:	89 54 24 08          	mov    %edx,0x8(%esp)
 80de58c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80de593:	00 
 80de594:	89 04 24             	mov    %eax,(%esp)
 80de597:	e8 42 2a 49 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80de59c:	bb 00 00 00 00       	mov    $0x0,%ebx
 80de5a1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de5a4:	89 04 24             	mov    %eax,(%esp)
 80de5a7:	e8 26 e3 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80de5ac:	89 d8                	mov    %ebx,%eax
 80de5ae:	83 c4 20             	add    $0x20,%esp
 80de5b1:	5b                   	pop    %ebx
 80de5b2:	5e                   	pop    %esi
 80de5b3:	5d                   	pop    %ebp
 80de5b4:	c3                   	ret
 80de5b5:	89 d3                	mov    %edx,%ebx
 80de5b7:	89 c6                	mov    %eax,%esi
 80de5b9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de5bc:	89 04 24             	mov    %eax,(%esp)
 80de5bf:	e8 0e e3 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80de5c4:	89 f0                	mov    %esi,%eax
 80de5c6:	89 da                	mov    %ebx,%edx
 80de5c8:	89 04 24             	mov    %eax,(%esp)
 80de5cb:	e8 80 51 a0 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CBusinessImpl::ProcessProtectMsg @ 0x80de4ec

/* CBusinessImpl::ProcessProtectMsg(tagTSafeModePkg*) */

undefined4 __thiscall CBusinessImpl::ProcessProtectMsg(CBusinessImpl *this,tagTSafeModePkg *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BusinessImpl.cpp",0x88);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080de53e to 080de59b has its CatchHandler @ 080de5b5 */
  CStreamGuard::operator<<(pCVar2,0x254);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_1,0x34);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}

```

---

## PunishClient

```asm
// === 080de3ee CBusinessImpl::PunishClient  [0x080de3ee-0x80de4eb] ===
 80de3ee:	55                   	push   %ebp
 80de3ef:	89 e5                	mov    %esp,%ebp
 80de3f1:	56                   	push   %esi
 80de3f2:	53                   	push   %ebx
 80de3f3:	83 ec 30             	sub    $0x30,%esp
 80de3f6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80de3fb:	c7 44 24 08 59 00 00 	movl   $0x59,0x8(%esp)
 80de402:	00 
 80de403:	c7 44 24 04 40 b0 b2 	movl   $0x8b2b040,0x4(%esp)
 80de40a:	08 
 80de40b:	89 04 24             	mov    %eax,(%esp)
 80de40e:	e8 73 16 1b 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80de413:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80de41a:	00 
 80de41b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de41f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de422:	89 04 24             	mov    %eax,(%esp)
 80de425:	e8 fc a7 fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80de42a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de42d:	89 04 24             	mov    %eax,(%esp)
 80de430:	e8 11 a8 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80de435:	c7 44 24 04 53 02 00 	movl   $0x253,0x4(%esp)
 80de43c:	00 
 80de43d:	89 04 24             	mov    %eax,(%esp)
 80de440:	e8 11 a8 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80de445:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de448:	89 04 24             	mov    %eax,(%esp)
 80de44b:	e8 f6 a7 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80de450:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80de457:	ff 
 80de458:	89 04 24             	mov    %eax,(%esp)
 80de45b:	e8 f6 a7 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80de460:	8b 45 14             	mov    0x14(%ebp),%eax
 80de463:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80de466:	8b 45 18             	mov    0x18(%ebp),%eax
 80de469:	88 45 e4             	mov    %al,-0x1c(%ebp)
 80de46c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80de46f:	8b 50 04             	mov    0x4(%eax),%edx
 80de472:	8b 00                	mov    (%eax),%eax
 80de474:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80de477:	89 55 ec             	mov    %edx,-0x14(%ebp)
 80de47a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de47d:	89 04 24             	mov    %eax,(%esp)
 80de480:	e8 c9 a7 fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80de485:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80de48c:	00 
 80de48d:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80de490:	89 54 24 04          	mov    %edx,0x4(%esp)
 80de494:	89 04 24             	mov    %eax,(%esp)
 80de497:	e8 b6 01 00 00       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 80de49c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80de4a1:	8d 55 f0             	lea    -0x10(%ebp),%edx
 80de4a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 80de4a8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80de4af:	00 
 80de4b0:	89 04 24             	mov    %eax,(%esp)
 80de4b3:	e8 26 2b 49 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80de4b8:	bb 00 00 00 00       	mov    $0x0,%ebx
 80de4bd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de4c0:	89 04 24             	mov    %eax,(%esp)
 80de4c3:	e8 0a e4 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80de4c8:	89 d8                	mov    %ebx,%eax
 80de4ca:	83 c4 30             	add    $0x30,%esp
 80de4cd:	5b                   	pop    %ebx
 80de4ce:	5e                   	pop    %esi
 80de4cf:	5d                   	pop    %ebp
 80de4d0:	c3                   	ret
 80de4d1:	89 d3                	mov    %edx,%ebx
 80de4d3:	89 c6                	mov    %eax,%esi
 80de4d5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de4d8:	89 04 24             	mov    %eax,(%esp)
 80de4db:	e8 f2 e3 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80de4e0:	89 f0                	mov    %esi,%eax
 80de4e2:	89 da                	mov    %ebx,%edx
 80de4e4:	89 04 24             	mov    %eax,(%esp)
 80de4e7:	e8 64 52 a0 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CBusinessImpl::PunishClient @ 0x80de3ee

/* CBusinessImpl::PunishClient(int, int, unsigned int, EPUNISHMODE, tagAntibotPunishInfo*, char*) */

undefined4 CBusinessImpl::PunishClient(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BusinessImpl.cpp",0x59);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080de440 to 080de4b7 has its CatchHandler @ 080de4d1 */
  CStreamGuard::operator<<(pCVar2,0x253);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  local_24 = in_stack_00000010;
  local_20 = in_stack_00000014;
  local_18 = in_stack_00000018[1];
  local_1c = *in_stack_00000018;
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,&local_24,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}

```

---

## SendBuffertoClient

```asm
// === 080de240 CBusinessImpl::SendBuffertoClient  [0x080de240-0x80de3ed] ===
 80de240:	55                   	push   %ebp
 80de241:	89 e5                	mov    %esp,%ebp
 80de243:	56                   	push   %esi
 80de244:	53                   	push   %ebx
 80de245:	83 ec 40             	sub    $0x40,%esp
 80de248:	8b 45 20             	mov    0x20(%ebp),%eax
 80de24b:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 80de24f:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 80de253:	83 c0 14             	add    $0x14,%eax
 80de256:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80de259:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80de260:	00 
 80de261:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de264:	89 04 24             	mov    %eax,(%esp)
 80de267:	e8 c0 03 00 00       	call   80de62c <_ZN12CStreamGuardC1Eb>
 80de26c:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
 80de273:	7f 2e                	jg     80de2a3 <_ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x63>
 80de275:	a1 a8 bd 40 09       	mov    0x940bda8,%eax
 80de27a:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 80de281:	00 
 80de282:	c7 44 24 04 40 b0 b2 	movl   $0x8b2b040,0x4(%esp)
 80de289:	08 
 80de28a:	89 04 24             	mov    %eax,(%esp)
 80de28d:	e8 e2 1c 1b 00       	call   828ff74 <_ZN15SmallStreamPool7AcquireEPKci>
 80de292:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de296:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de299:	89 04 24             	mov    %eax,(%esp)
 80de29c:	e8 a3 03 00 00       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 80de2a1:	eb 6c                	jmp    80de30f <_ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0xcf>
 80de2a3:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
 80de2aa:	7e 37                	jle    80de2e3 <_ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0xa3>
 80de2ac:	81 7d f4 ff 3f 00 00 	cmpl   $0x3fff,-0xc(%ebp)
 80de2b3:	7f 2e                	jg     80de2e3 <_ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0xa3>
 80de2b5:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80de2ba:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 80de2c1:	00 
 80de2c2:	c7 44 24 04 40 b0 b2 	movl   $0x8b2b040,0x4(%esp)
 80de2c9:	08 
 80de2ca:	89 04 24             	mov    %eax,(%esp)
 80de2cd:	e8 b4 17 1b 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80de2d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de2d6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de2d9:	89 04 24             	mov    %eax,(%esp)
 80de2dc:	e8 63 03 00 00       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 80de2e1:	eb 2c                	jmp    80de30f <_ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0xcf>
 80de2e3:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 80de2e8:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 80de2ef:	00 
 80de2f0:	c7 44 24 04 40 b0 b2 	movl   $0x8b2b040,0x4(%esp)
 80de2f7:	08 
 80de2f8:	89 04 24             	mov    %eax,(%esp)
 80de2fb:	e8 62 1f 1b 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 80de300:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de304:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de307:	89 04 24             	mov    %eax,(%esp)
 80de30a:	e8 35 03 00 00       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 80de30f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de312:	89 04 24             	mov    %eax,(%esp)
 80de315:	e8 2c a9 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80de31a:	c7 44 24 04 52 02 00 	movl   $0x252,0x4(%esp)
 80de321:	00 
 80de322:	89 04 24             	mov    %eax,(%esp)
 80de325:	e8 2c a9 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80de32a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de32d:	89 04 24             	mov    %eax,(%esp)
 80de330:	e8 11 a9 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80de335:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80de33c:	ff 
 80de33d:	89 04 24             	mov    %eax,(%esp)
 80de340:	e8 11 a9 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80de345:	8b 45 0c             	mov    0xc(%ebp),%eax
 80de348:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80de34b:	8b 45 18             	mov    0x18(%ebp),%eax
 80de34e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80de351:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 80de355:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 80de359:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de35c:	89 04 24             	mov    %eax,(%esp)
 80de35f:	e8 ea a8 fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80de364:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 80de36b:	00 
 80de36c:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80de36f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80de373:	89 04 24             	mov    %eax,(%esp)
 80de376:	e8 d7 02 00 00       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 80de37b:	0f bf 5d d4          	movswl -0x2c(%ebp),%ebx
 80de37f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de382:	89 04 24             	mov    %eax,(%esp)
 80de385:	e8 c4 a8 fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80de38a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80de38e:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80de391:	89 54 24 04          	mov    %edx,0x4(%esp)
 80de395:	89 04 24             	mov    %eax,(%esp)
 80de398:	e8 b5 02 00 00       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 80de39d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80de3a2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80de3a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 80de3a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80de3b0:	00 
 80de3b1:	89 04 24             	mov    %eax,(%esp)
 80de3b4:	e8 25 2c 49 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80de3b9:	bb 00 00 00 00       	mov    $0x0,%ebx
 80de3be:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de3c1:	89 04 24             	mov    %eax,(%esp)
 80de3c4:	e8 09 e5 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80de3c9:	89 d8                	mov    %ebx,%eax
 80de3cb:	83 c4 40             	add    $0x40,%esp
 80de3ce:	5b                   	pop    %ebx
 80de3cf:	5e                   	pop    %esi
 80de3d0:	5d                   	pop    %ebp
 80de3d1:	c3                   	ret
 80de3d2:	89 d3                	mov    %edx,%ebx
 80de3d4:	89 c6                	mov    %eax,%esi
 80de3d6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80de3d9:	89 04 24             	mov    %eax,(%esp)
 80de3dc:	e8 f1 e4 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80de3e1:	89 f0                	mov    %esi,%eax
 80de3e3:	89 da                	mov    %ebx,%edx
 80de3e5:	89 04 24             	mov    %eax,(%esp)
 80de3e8:	e8 63 53 a0 00       	call   8ae3750 <_Unwind_Resume>
 80de3ed:	90                   	nop

```

```c
// CBusinessImpl::SendBuffertoClient @ 0x80de240

/* CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short) */

undefined4 __thiscall
CBusinessImpl::SendBuffertoClient
          (CBusinessImpl *this,int param_1,int param_2,int param_3,uint param_4,uchar *param_5,
          short param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int local_24;
  uint local_20;
  short local_1c;
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = param_6 + 0x14;
  CStreamGuard::CStreamGuard(local_18,true);
  if (local_10 < 0x1000) {
                    /* try { // try from 080de28d to 080de3b8 has its CatchHandler @ 080de3d2 */
    pSVar1 = (Stream *)
             SmallStreamPool::Acquire(GlobalData::s_small_stream_pool,"BusinessImpl.cpp",0x3a);
    CStreamGuard::Set(local_18,pSVar1);
  }
  else if ((local_10 < 0x1000) || (0x3fff < local_10)) {
    pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"BusinessImpl.cpp",0x42)
    ;
    CStreamGuard::Set(local_18,pSVar1);
  }
  else {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BusinessImpl.cpp",0x3e);
    CStreamGuard::Set(local_18,pSVar1);
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,0x252);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  local_24 = param_1;
  local_20 = param_4;
  local_1c = param_6;
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar2,&local_24,0xc);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar2,param_5,(int)param_6);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 0;
}

```

