# DB_SecurityCardRetransfer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _sendResult

```asm
// === 0842c7be DB_SecurityCardRetransfer::_sendResult  [0x0842c7be-0x842c905] ===
 842c7be:	55                   	push   %ebp
 842c7bf:	89 e5                	mov    %esp,%ebp
 842c7c1:	56                   	push   %esi
 842c7c2:	53                   	push   %ebx
 842c7c3:	83 ec 20             	sub    $0x20,%esp
 842c7c6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842c7cb:	c7 44 24 08 d2 6f 00 	movl   $0x6fd2,0x8(%esp)
 842c7d2:	00 
 842c7d3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842c7da:	08 
 842c7db:	89 04 24             	mov    %eax,(%esp)
 842c7de:	e8 a3 32 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842c7e3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842c7ea:	00 
 842c7eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c7ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c7f2:	89 04 24             	mov    %eax,(%esp)
 842c7f5:	e8 2c c4 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842c7fa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c7fd:	89 04 24             	mov    %eax,(%esp)
 842c800:	e8 41 c4 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842c805:	c7 44 24 04 38 01 00 	movl   $0x138,0x4(%esp)
 842c80c:	00 
 842c80d:	89 04 24             	mov    %eax,(%esp)
 842c810:	e8 41 c4 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c815:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c818:	89 04 24             	mov    %eax,(%esp)
 842c81b:	e8 26 c4 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842c820:	8b 55 0c             	mov    0xc(%ebp),%edx
 842c823:	89 54 24 04          	mov    %edx,0x4(%esp)
 842c827:	89 04 24             	mov    %eax,(%esp)
 842c82a:	e8 27 c4 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c82f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c832:	89 04 24             	mov    %eax,(%esp)
 842c835:	e8 14 c4 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842c83a:	89 04 24             	mov    %eax,(%esp)
 842c83d:	e8 1a 5f 02 00       	call   845275c <_ZN12CStreamGuard11GetInBufferI28SIG_SECURITY_CARD_RETRANSFEREEPT_v>
 842c842:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842c845:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c848:	8b 55 1c             	mov    0x1c(%ebp),%edx
 842c84b:	89 90 88 00 00 00    	mov    %edx,0x88(%eax)
 842c851:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 842c855:	74 1d                	je     842c874 <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR+0xb6>
 842c857:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c85a:	8d 50 04             	lea    0x4(%eax),%edx
 842c85d:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 842c864:	00 
 842c865:	8b 45 14             	mov    0x14(%ebp),%eax
 842c868:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c86c:	89 14 24             	mov    %edx,(%esp)
 842c86f:	e8 5c 10 c5 ff       	call   807d8d0 <strncpy@plt>
 842c874:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 842c878:	74 1d                	je     842c897 <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR+0xd9>
 842c87a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c87d:	8d 50 2b             	lea    0x2b(%eax),%edx
 842c880:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 842c887:	00 
 842c888:	8b 45 18             	mov    0x18(%ebp),%eax
 842c88b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c88f:	89 14 24             	mov    %edx,(%esp)
 842c892:	e8 39 10 c5 ff       	call   807d8d0 <strncpy@plt>
 842c897:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 842c89b:	74 1d                	je     842c8ba <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR+0xfc>
 842c89d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c8a0:	8d 50 52             	lea    0x52(%eax),%edx
 842c8a3:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 842c8aa:	00 
 842c8ab:	8b 45 10             	mov    0x10(%ebp),%eax
 842c8ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c8b2:	89 14 24             	mov    %edx,(%esp)
 842c8b5:	e8 16 10 c5 ff       	call   807d8d0 <strncpy@plt>
 842c8ba:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842c8bf:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842c8c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 842c8c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c8cd:	00 
 842c8ce:	89 04 24             	mov    %eax,(%esp)
 842c8d1:	e8 08 47 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842c8d6:	eb 1b                	jmp    842c8f3 <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR+0x135>
 842c8d8:	89 d3                	mov    %edx,%ebx
 842c8da:	89 c6                	mov    %eax,%esi
 842c8dc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c8df:	89 04 24             	mov    %eax,(%esp)
 842c8e2:	e8 eb ff 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c8e7:	89 f0                	mov    %esi,%eax
 842c8e9:	89 da                	mov    %ebx,%edx
 842c8eb:	89 04 24             	mov    %eax,(%esp)
 842c8ee:	e8 5d 6e 6b 00       	call   8ae3750 <_Unwind_Resume>
 842c8f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c8f6:	89 04 24             	mov    %eax,(%esp)
 842c8f9:	e8 d4 ff 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c8fe:	83 c4 20             	add    $0x20,%esp
 842c901:	5b                   	pop    %ebx
 842c902:	5e                   	pop    %esi
 842c903:	5d                   	pop    %ebp
 842c904:	c3                   	ret
 842c905:	90                   	nop

```

```c
// DB_SecurityCardRetransfer::_sendResult @ 0x842c7be

/* DB_SecurityCardRetransfer::_sendResult(int, char*, char const*, char const*, ENUM_ERROR) */

void __thiscall
DB_SecurityCardRetransfer::_sendResult
          (undefined4 this,int param_1,char *param_2,char *param_3,char *param_4,undefined4 param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_RETRANSFER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6fd2);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842c810 to 0842c8d5 has its CatchHandler @ 0842c8d8 */
  CStreamGuard::operator<<(pCVar2,0x138);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_RETRANSFER>(pCVar2);
  *(undefined4 *)(local_10 + 0x88) = param_6;
  if (param_3 != (char *)0x0) {
    strncpy((char *)(local_10 + 4),param_3,0x21);
  }
  if (param_4 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x2b),param_4,0x27);
  }
  if (param_2 != (char *)0x0) {
    strncpy((char *)(local_10 + 0x52),param_2,0xc);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## dispatch

```asm
// === 0842c362 DB_SecurityCardRetransfer::dispatch  [0x0842c362-0x842c7bd] ===
 842c362:	55                   	push   %ebp
 842c363:	89 e5                	mov    %esp,%ebp
 842c365:	56                   	push   %esi
 842c366:	53                   	push   %ebx
 842c367:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 842c36d:	8b 45 08             	mov    0x8(%ebp),%eax
 842c370:	8b 55 14             	mov    0x14(%ebp),%edx
 842c373:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842c377:	8b 55 10             	mov    0x10(%ebp),%edx
 842c37a:	89 54 24 08          	mov    %edx,0x8(%esp)
 842c37e:	8b 55 0c             	mov    0xc(%ebp),%edx
 842c381:	89 54 24 04          	mov    %edx,0x4(%esp)
 842c385:	89 04 24             	mov    %eax,(%esp)
 842c388:	e8 ef fb fc ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 842c38d:	83 f0 01             	xor    $0x1,%eax
 842c390:	84 c0                	test   %al,%al
 842c392:	74 0a                	je     842c39e <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x3c>
 842c394:	b8 00 00 00 00       	mov    $0x0,%eax
 842c399:	e9 15 04 00 00       	jmp    842c7b3 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x451>
 842c39e:	8b 45 14             	mov    0x14(%ebp),%eax
 842c3a1:	89 04 24             	mov    %eax,(%esp)
 842c3a4:	e8 c9 63 02 00       	call   8452772 <_ZN6Stream12GetOutBufferI28SIG_SECURITY_CARD_RETRANSFEREEPT_v>
 842c3a9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 842c3ac:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842c3b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c3b8:	00 
 842c3b9:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842c3c0:	00 
 842c3c1:	89 04 24             	mov    %eax,(%esp)
 842c3c4:	e8 75 8e fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842c3c9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842c3cc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c3cf:	8b 00                	mov    (%eax),%eax
 842c3d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842c3d8:	00 
 842c3d9:	89 04 24             	mov    %eax,(%esp)
 842c3dc:	e8 6a cc cd ff       	call   810904b <_Z14NumberToStringji>
 842c3e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c3e5:	c7 44 24 04 80 02 c5 	movl   $0x8c50280,0x4(%esp)
 842c3ec:	08 
 842c3ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c3f0:	89 04 24             	mov    %eax,(%esp)
 842c3f3:	e8 c8 7d fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842c3f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c3ff:	00 
 842c400:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c403:	89 04 24             	mov    %eax,(%esp)
 842c406:	e8 1b 7f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842c40b:	83 f0 01             	xor    $0x1,%eax
 842c40e:	84 c0                	test   %al,%al
 842c410:	74 2c                	je     842c43e <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0xdc>
 842c412:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842c419:	e8 e2 93 2f 00       	call   8725800 <__cxa_allocate_exception>
 842c41e:	89 c2                	mov    %eax,%edx
 842c420:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 842c426:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c42d:	00 
 842c42e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842c435:	08 
 842c436:	89 04 24             	mov    %eax,(%esp)
 842c439:	e8 12 88 2f 00       	call   8724c50 <__cxa_throw>
 842c43e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842c445:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 842c44c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c44f:	89 04 24             	mov    %eax,(%esp)
 842c452:	e8 65 80 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842c457:	83 f0 01             	xor    $0x1,%eax
 842c45a:	84 c0                	test   %al,%al
 842c45c:	74 2c                	je     842c48a <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x128>
 842c45e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842c465:	e8 96 93 2f 00       	call   8725800 <__cxa_allocate_exception>
 842c46a:	89 c2                	mov    %eax,%edx
 842c46c:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 842c472:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c479:	00 
 842c47a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842c481:	08 
 842c482:	89 04 24             	mov    %eax,(%esp)
 842c485:	e8 c6 87 2f 00       	call   8724c50 <__cxa_throw>
 842c48a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842c48d:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c491:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842c498:	00 
 842c499:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c49c:	89 04 24             	mov    %eax,(%esp)
 842c49f:	e8 4e 5e cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842c4a4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842c4a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c4ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c4b2:	00 
 842c4b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c4b6:	89 04 24             	mov    %eax,(%esp)
 842c4b9:	e8 34 5e cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 842c4be:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 842c4c5:	00 
 842c4c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842c4cd:	00 
 842c4ce:	8d 45 af             	lea    -0x51(%ebp),%eax
 842c4d1:	89 04 24             	mov    %eax,(%esp)
 842c4d4:	e8 e7 17 c5 ff       	call   807dcc0 <memset@plt>
 842c4d9:	c7 44 24 0c 29 00 00 	movl   $0x29,0xc(%esp)
 842c4e0:	00 
 842c4e1:	8d 45 af             	lea    -0x51(%ebp),%eax
 842c4e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c4e8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842c4ef:	00 
 842c4f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c4f3:	89 04 24             	mov    %eax,(%esp)
 842c4f6:	e8 ef 08 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 842c4fb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c4fe:	8d 50 5e             	lea    0x5e(%eax),%edx
 842c501:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 842c508:	00 
 842c509:	8d 45 af             	lea    -0x51(%ebp),%eax
 842c50c:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c510:	89 14 24             	mov    %edx,(%esp)
 842c513:	e8 a8 23 c5 ff       	call   807e8c0 <strncmp@plt>
 842c518:	85 c0                	test   %eax,%eax
 842c51a:	74 2c                	je     842c548 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x1e6>
 842c51c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842c523:	e8 d8 92 2f 00       	call   8725800 <__cxa_allocate_exception>
 842c528:	89 c2                	mov    %eax,%edx
 842c52a:	c7 02 7d 00 00 00    	movl   $0x7d,(%edx)
 842c530:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c537:	00 
 842c538:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842c53f:	08 
 842c540:	89 04 24             	mov    %eax,(%esp)
 842c543:	e8 08 87 2f 00       	call   8724c50 <__cxa_throw>
 842c548:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 842c54f:	e8 4a f7 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 842c554:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842c557:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842c55a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 842c55d:	8d 45 80             	lea    -0x80(%ebp),%eax
 842c560:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c564:	8d 45 d8             	lea    -0x28(%ebp),%eax
 842c567:	89 04 24             	mov    %eax,(%esp)
 842c56a:	e8 f1 1d c5 ff       	call   807e360 <localtime_r@plt>
 842c56f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 842c575:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c579:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842c57c:	89 04 24             	mov    %eax,(%esp)
 842c57f:	e8 dc 1d c5 ff       	call   807e360 <localtime_r@plt>
 842c584:	8b 55 9c             	mov    -0x64(%ebp),%edx
 842c587:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 842c58d:	39 c2                	cmp    %eax,%edx
 842c58f:	75 3d                	jne    842c5ce <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x26c>
 842c591:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842c594:	83 c0 01             	add    $0x1,%eax
 842c597:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842c59a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842c59d:	83 f8 03             	cmp    $0x3,%eax
 842c5a0:	76 33                	jbe    842c5d5 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x273>
 842c5a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842c5a9:	e8 52 92 2f 00       	call   8725800 <__cxa_allocate_exception>
 842c5ae:	89 c2                	mov    %eax,%edx
 842c5b0:	c7 02 78 00 00 00    	movl   $0x78,(%edx)
 842c5b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c5bd:	00 
 842c5be:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 842c5c5:	08 
 842c5c6:	89 04 24             	mov    %eax,(%esp)
 842c5c9:	e8 82 86 2f 00       	call   8724c50 <__cxa_throw>
 842c5ce:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842c5d5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c5d8:	8b 00                	mov    (%eax),%eax
 842c5da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842c5e1:	00 
 842c5e2:	89 04 24             	mov    %eax,(%esp)
 842c5e5:	e8 61 ca cd ff       	call   810904b <_Z14NumberToStringji>
 842c5ea:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842c5ed:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 842c5f0:	8d 71 2b             	lea    0x2b(%ecx),%esi
 842c5f3:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 842c5f6:	8d 59 04             	lea    0x4(%ecx),%ebx
 842c5f9:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 842c5fc:	83 c1 25             	add    $0x25,%ecx
 842c5ff:	89 44 24 18          	mov    %eax,0x18(%esp)
 842c603:	89 54 24 14          	mov    %edx,0x14(%esp)
 842c607:	89 74 24 10          	mov    %esi,0x10(%esp)
 842c60b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842c60f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 842c613:	c7 44 24 04 e4 02 c5 	movl   $0x8c502e4,0x4(%esp)
 842c61a:	08 
 842c61b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c61e:	89 04 24             	mov    %eax,(%esp)
 842c621:	e8 9a 7b fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842c626:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c62d:	00 
 842c62e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842c631:	89 04 24             	mov    %eax,(%esp)
 842c634:	e8 ed 7c fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842c639:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c63c:	8d 48 2b             	lea    0x2b(%eax),%ecx
 842c63f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c642:	8d 50 04             	lea    0x4(%eax),%edx
 842c645:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c648:	83 c0 52             	add    $0x52,%eax
 842c64b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 842c652:	00 
 842c653:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842c657:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842c65b:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c65f:	8b 45 10             	mov    0x10(%ebp),%eax
 842c662:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c666:	8b 45 08             	mov    0x8(%ebp),%eax
 842c669:	89 04 24             	mov    %eax,(%esp)
 842c66c:	e8 4d 01 00 00       	call   842c7be <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR>
 842c671:	eb 67                	jmp    842c6da <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x378>
 842c673:	83 fa 01             	cmp    $0x1,%edx
 842c676:	74 08                	je     842c680 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x31e>
 842c678:	89 04 24             	mov    %eax,(%esp)
 842c67b:	e8 d0 70 6b 00       	call   8ae3750 <_Unwind_Resume>
 842c680:	89 04 24             	mov    %eax,(%esp)
 842c683:	e8 58 96 2f 00       	call   8725ce0 <__cxa_begin_catch>
 842c688:	8b 00                	mov    (%eax),%eax
 842c68a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842c68d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c690:	89 44 24 14          	mov    %eax,0x14(%esp)
 842c694:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 842c69b:	00 
 842c69c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 842c6a3:	00 
 842c6a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c6ab:	00 
 842c6ac:	8b 45 10             	mov    0x10(%ebp),%eax
 842c6af:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c6b3:	8b 45 08             	mov    0x8(%ebp),%eax
 842c6b6:	89 04 24             	mov    %eax,(%esp)
 842c6b9:	e8 00 01 00 00       	call   842c7be <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR>
 842c6be:	eb 15                	jmp    842c6d5 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x373>
 842c6c0:	89 d3                	mov    %edx,%ebx
 842c6c2:	89 c6                	mov    %eax,%esi
 842c6c4:	e8 67 95 2f 00       	call   8725c30 <__cxa_end_catch>
 842c6c9:	89 f0                	mov    %esi,%eax
 842c6cb:	89 da                	mov    %ebx,%edx
 842c6cd:	89 04 24             	mov    %eax,(%esp)
 842c6d0:	e8 7b 70 6b 00       	call   8ae3750 <_Unwind_Resume>
 842c6d5:	e8 56 95 2f 00       	call   8725c30 <__cxa_end_catch>
 842c6da:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842c6df:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c6e6:	00 
 842c6e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c6ee:	00 
 842c6ef:	89 04 24             	mov    %eax,(%esp)
 842c6f2:	e8 47 8b fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842c6f7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842c6fa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c6fd:	8b 00                	mov    (%eax),%eax
 842c6ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842c706:	00 
 842c707:	89 04 24             	mov    %eax,(%esp)
 842c70a:	e8 3c c9 cd ff       	call   810904b <_Z14NumberToStringji>
 842c70f:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c713:	c7 44 24 04 ec ff c4 	movl   $0x8c4ffec,0x4(%esp)
 842c71a:	08 
 842c71b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842c71e:	89 04 24             	mov    %eax,(%esp)
 842c721:	e8 9a 7a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842c726:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c72d:	00 
 842c72e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842c731:	89 04 24             	mov    %eax,(%esp)
 842c734:	e8 ed 7b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842c739:	83 f0 01             	xor    $0x1,%eax
 842c73c:	84 c0                	test   %al,%al
 842c73e:	75 11                	jne    842c751 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x3ef>
 842c740:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842c743:	89 04 24             	mov    %eax,(%esp)
 842c746:	e8 c5 7b fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842c74b:	09 d0                	or     %edx,%eax
 842c74d:	85 c0                	test   %eax,%eax
 842c74f:	75 07                	jne    842c758 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x3f6>
 842c751:	b8 01 00 00 00       	mov    $0x1,%eax
 842c756:	eb 05                	jmp    842c75d <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x3fb>
 842c758:	b8 00 00 00 00       	mov    $0x0,%eax
 842c75d:	84 c0                	test   %al,%al
 842c75f:	74 4d                	je     842c7ae <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x44c>
 842c761:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842c764:	8b 00                	mov    (%eax),%eax
 842c766:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842c76d:	00 
 842c76e:	89 04 24             	mov    %eax,(%esp)
 842c771:	e8 d5 c8 cd ff       	call   810904b <_Z14NumberToStringji>
 842c776:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c77a:	c7 44 24 04 34 00 c5 	movl   $0x8c50034,0x4(%esp)
 842c781:	08 
 842c782:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842c785:	89 04 24             	mov    %eax,(%esp)
 842c788:	e8 33 7a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842c78d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c794:	00 
 842c795:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842c798:	89 04 24             	mov    %eax,(%esp)
 842c79b:	e8 86 7b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842c7a0:	83 f0 01             	xor    $0x1,%eax
 842c7a3:	84 c0                	test   %al,%al
 842c7a5:	74 07                	je     842c7ae <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x44c>
 842c7a7:	b8 00 00 00 00       	mov    $0x0,%eax
 842c7ac:	eb 05                	jmp    842c7b3 <_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream+0x451>
 842c7ae:	b8 01 00 00 00       	mov    $0x1,%eax
 842c7b3:	81 c4 d0 00 00 00    	add    $0xd0,%esp
 842c7b9:	5b                   	pop    %ebx
 842c7ba:	5e                   	pop    %esi
 842c7bb:	5d                   	pop    %ebp
 842c7bc:	c3                   	ret
 842c7bd:	90                   	nop

```

```c
// DB_SecurityCardRetransfer::dispatch @ 0x842c362

/* DB_SecurityCardRetransfer::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SecurityCardRetransfer::dispatch
          (DB_SecurityCardRetransfer *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  Stream *pSVar7;
  tm local_b0;
  tm local_84;
  char local_55 [41];
  uint local_2c;
  time_t local_28;
  uint local_24;
  uint local_20;
  SIG_SECURITY_CARD_RETRANSFER *local_1c;
  MySQL *local_18;
  MySQL *local_14;
  
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = Stream::GetOutBuffer<SIG_SECURITY_CARD_RETRANSFER>(param_3);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0,pSVar7);
                    /* try { // try from 0842c3dc to 0842c670 has its CatchHandler @ 0842c673 */
  uVar3 = NumberToString(*(uint *)local_1c,0);
  MySQL::set_query(local_18,
                   "seLect re_issue_cnt,unix_timestamp(last_issue_time), phone from member_security_card where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  local_20 = 0;
  local_24 = 0;
  cVar2 = MySQL::fetch(local_18);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  MySQL::get_uint(local_18,0,&local_20);
  MySQL::get_uint(local_18,1,&local_24);
  memset(local_55,0,0x29);
  MySQL::get_str(local_18,2,local_55,0x29);
  iVar5 = strncmp((char *)(local_1c + 0x5e),local_55,0x29);
  if (iVar5 == 0) {
    local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_2c = local_24;
    localtime_r((time_t *)&local_2c,&local_84);
    localtime_r(&local_28,&local_b0);
    if (local_84.tm_yday == local_b0.tm_yday) {
      local_20 = local_20 + 1;
      if (3 < local_20) {
        puVar4 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar4 = 0x78;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
      }
    }
    else {
      local_20 = 0;
    }
    uVar3 = NumberToString(*(uint *)local_1c,0);
    MySQL::set_query(local_18,
                     "upDate member_security_card set cert_key=\'%s\',server_key=\'%s\',card=\'%s\',fail_cnt=0,cancel_cnt=0,re_issue_cnt=%d,last_issue_time=now(),validity_time=0,apply_flag=1,cert_flag=0,cert_cnt=0 where m_id=%s"
                     ,local_1c + 0x25,local_1c + 4,local_1c + 0x2b,local_20,uVar3);
    MySQL::exec(local_18,true);
    _sendResult(this,param_2,local_1c + 0x52,local_1c + 4,local_1c + 0x2b,0);
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = NumberToString(*(uint *)local_1c,0);
    MySQL::set_query(local_14,
                     "upDate member_security_grade set security_card_reg=now() where m_id=%s",uVar3)
    ;
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = NumberToString(*(uint *)local_1c,0);
      MySQL::set_query(local_14,
                       "inSert into member_security_grade(m_id, security_card_reg) values(%s, now())"
                       ,uVar3);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    return 1;
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar4 = 0x7d;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
}

```

---

## makeRequest

```asm
// === 0842c1f6 DB_SecurityCardRetransfer::makeRequest  [0x0842c1f6-0x842c361] ===
 842c1f6:	55                   	push   %ebp
 842c1f7:	89 e5                	mov    %esp,%ebp
 842c1f9:	56                   	push   %esi
 842c1fa:	53                   	push   %ebx
 842c1fb:	83 ec 20             	sub    $0x20,%esp
 842c1fe:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842c203:	c7 44 24 08 38 6f 00 	movl   $0x6f38,0x8(%esp)
 842c20a:	00 
 842c20b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842c212:	08 
 842c213:	89 04 24             	mov    %eax,(%esp)
 842c216:	e8 6b 38 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842c21b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842c222:	00 
 842c223:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c227:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c22a:	89 04 24             	mov    %eax,(%esp)
 842c22d:	e8 f4 c9 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842c232:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c235:	89 04 24             	mov    %eax,(%esp)
 842c238:	e8 09 ca c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842c23d:	c7 44 24 04 38 01 00 	movl   $0x138,0x4(%esp)
 842c244:	00 
 842c245:	89 04 24             	mov    %eax,(%esp)
 842c248:	e8 09 ca c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c24d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c250:	89 04 24             	mov    %eax,(%esp)
 842c253:	e8 ee c9 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842c258:	8b 55 08             	mov    0x8(%ebp),%edx
 842c25b:	89 54 24 04          	mov    %edx,0x4(%esp)
 842c25f:	89 04 24             	mov    %eax,(%esp)
 842c262:	e8 ef c9 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842c267:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c26a:	89 04 24             	mov    %eax,(%esp)
 842c26d:	e8 dc c9 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842c272:	89 04 24             	mov    %eax,(%esp)
 842c275:	e8 e2 64 02 00       	call   845275c <_ZN12CStreamGuard11GetInBufferI28SIG_SECURITY_CARD_RETRANSFEREEPT_v>
 842c27a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842c27d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c280:	8b 55 14             	mov    0x14(%ebp),%edx
 842c283:	89 10                	mov    %edx,(%eax)
 842c285:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c288:	8d 50 25             	lea    0x25(%eax),%edx
 842c28b:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 842c292:	00 
 842c293:	8b 45 18             	mov    0x18(%ebp),%eax
 842c296:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c29a:	89 14 24             	mov    %edx,(%esp)
 842c29d:	e8 2e 16 c5 ff       	call   807d8d0 <strncpy@plt>
 842c2a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c2a5:	8d 50 04             	lea    0x4(%eax),%edx
 842c2a8:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 842c2af:	00 
 842c2b0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 842c2b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c2b7:	89 14 24             	mov    %edx,(%esp)
 842c2ba:	e8 11 16 c5 ff       	call   807d8d0 <strncpy@plt>
 842c2bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c2c2:	8d 50 2b             	lea    0x2b(%eax),%edx
 842c2c5:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 842c2cc:	00 
 842c2cd:	8b 45 20             	mov    0x20(%ebp),%eax
 842c2d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c2d4:	89 14 24             	mov    %edx,(%esp)
 842c2d7:	e8 f4 15 c5 ff       	call   807d8d0 <strncpy@plt>
 842c2dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c2df:	8d 50 52             	lea    0x52(%eax),%edx
 842c2e2:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 842c2e9:	00 
 842c2ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 842c2ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c2f1:	89 14 24             	mov    %edx,(%esp)
 842c2f4:	e8 d7 15 c5 ff       	call   807d8d0 <strncpy@plt>
 842c2f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842c2fc:	8d 50 5e             	lea    0x5e(%eax),%edx
 842c2ff:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 842c306:	00 
 842c307:	8b 45 10             	mov    0x10(%ebp),%eax
 842c30a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c30e:	89 14 24             	mov    %edx,(%esp)
 842c311:	e8 ba 15 c5 ff       	call   807d8d0 <strncpy@plt>
 842c316:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842c31b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842c31e:	89 54 24 08          	mov    %edx,0x8(%esp)
 842c322:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842c329:	00 
 842c32a:	89 04 24             	mov    %eax,(%esp)
 842c32d:	e8 ac 4c 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842c332:	eb 1b                	jmp    842c34f <_ZN25DB_SecurityCardRetransfer11makeRequestEiPcS0_jPKcS2_S2_+0x159>
 842c334:	89 d3                	mov    %edx,%ebx
 842c336:	89 c6                	mov    %eax,%esi
 842c338:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c33b:	89 04 24             	mov    %eax,(%esp)
 842c33e:	e8 8f 05 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c343:	89 f0                	mov    %esi,%eax
 842c345:	89 da                	mov    %ebx,%edx
 842c347:	89 04 24             	mov    %eax,(%esp)
 842c34a:	e8 01 74 6b 00       	call   8ae3750 <_Unwind_Resume>
 842c34f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842c352:	89 04 24             	mov    %eax,(%esp)
 842c355:	e8 78 05 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842c35a:	83 c4 20             	add    $0x20,%esp
 842c35d:	5b                   	pop    %ebx
 842c35e:	5e                   	pop    %esi
 842c35f:	5d                   	pop    %ebp
 842c360:	c3                   	ret
 842c361:	90                   	nop

```

```c
// DB_SecurityCardRetransfer::makeRequest @ 0x842c1f6

/* DB_SecurityCardRetransfer::makeRequest(int, char*, char*, unsigned int, char const*, char const*,
   char const*) */

void DB_SecurityCardRetransfer::makeRequest
               (int param_1,char *param_2,char *param_3,uint param_4,char *param_5,char *param_6,
               char *param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_RETRANSFER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6f38);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842c248 to 0842c331 has its CatchHandler @ 0842c334 */
  CStreamGuard::operator<<(pCVar2,0x138);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_RETRANSFER>(pCVar2);
  *(uint *)local_10 = param_4;
  strncpy((char *)(local_10 + 0x25),param_5,6);
  strncpy((char *)(local_10 + 4),param_6,0x21);
  strncpy((char *)(local_10 + 0x2b),param_7,0x27);
  strncpy((char *)(local_10 + 0x52),param_2,0xc);
  strncpy((char *)(local_10 + 0x5e),param_3,0x29);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

