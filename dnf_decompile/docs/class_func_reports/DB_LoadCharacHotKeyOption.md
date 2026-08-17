# DB_LoadCharacHotKeyOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842f3a0 DB_LoadCharacHotKeyOption::dispatch  [0x0842f3a0-0x842f70f] ===
 842f3a0:	55                   	push   %ebp
 842f3a1:	89 e5                	mov    %esp,%ebp
 842f3a3:	57                   	push   %edi
 842f3a4:	56                   	push   %esi
 842f3a5:	53                   	push   %ebx
 842f3a6:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 842f3ac:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842f3b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842f3b8:	00 
 842f3b9:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 842f3c0:	00 
 842f3c1:	89 04 24             	mov    %eax,(%esp)
 842f3c4:	e8 75 5e fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842f3c9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 842f3cc:	8b 45 14             	mov    0x14(%ebp),%eax
 842f3cf:	89 04 24             	mov    %eax,(%esp)
 842f3d2:	e8 17 37 02 00       	call   8452aee <_ZN6Stream12GetOutBufferI33SIG_REQ_LOAD_CHARAC_HOTKEY_OPTIONEEPT_v>
 842f3d7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 842f3da:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842f3dd:	8b 58 04             	mov    0x4(%eax),%ebx
 842f3e0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842f3e3:	8b 00                	mov    (%eax),%eax
 842f3e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f3ec:	00 
 842f3ed:	89 04 24             	mov    %eax,(%esp)
 842f3f0:	e8 56 9c cd ff       	call   810904b <_Z14NumberToStringji>
 842f3f5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842f3f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 842f3fd:	c7 44 24 04 54 15 c5 	movl   $0x8c51554,0x4(%esp)
 842f404:	08 
 842f405:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842f408:	89 04 24             	mov    %eax,(%esp)
 842f40b:	e8 b0 4d fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842f410:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842f417:	00 
 842f418:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842f41b:	89 04 24             	mov    %eax,(%esp)
 842f41e:	e8 03 4f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842f423:	83 f0 01             	xor    $0x1,%eax
 842f426:	84 c0                	test   %al,%al
 842f428:	74 0a                	je     842f434 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x94>
 842f42a:	bb 00 00 00 00       	mov    $0x0,%ebx
 842f42f:	e9 cf 02 00 00       	jmp    842f703 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x363>
 842f434:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842f439:	c7 44 24 08 6e 74 00 	movl   $0x746e,0x8(%esp)
 842f440:	00 
 842f441:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842f448:	08 
 842f449:	89 04 24             	mov    %eax,(%esp)
 842f44c:	e8 35 06 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842f451:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842f458:	00 
 842f459:	89 44 24 04          	mov    %eax,0x4(%esp)
 842f45d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842f460:	89 04 24             	mov    %eax,(%esp)
 842f463:	e8 be 97 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842f468:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842f46b:	89 04 24             	mov    %eax,(%esp)
 842f46e:	e8 d3 97 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f473:	c7 44 24 04 20 03 00 	movl   $0x320,0x4(%esp)
 842f47a:	00 
 842f47b:	89 04 24             	mov    %eax,(%esp)
 842f47e:	e8 d3 97 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f483:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842f486:	89 04 24             	mov    %eax,(%esp)
 842f489:	e8 b8 97 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f48e:	8b 55 10             	mov    0x10(%ebp),%edx
 842f491:	89 54 24 04          	mov    %edx,0x4(%esp)
 842f495:	89 04 24             	mov    %eax,(%esp)
 842f498:	e8 b9 97 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f49d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842f4a0:	89 04 24             	mov    %eax,(%esp)
 842f4a3:	e8 a6 97 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842f4a8:	89 04 24             	mov    %eax,(%esp)
 842f4ab:	e8 04 7a e0 ff       	call   8236eb4 <_ZN12CStreamGuard11GetInBufferI29SIG_LOAD_CHARAC_HOTKEY_OPTIONEEPT_v>
 842f4b0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842f4b3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842f4b6:	8b 10                	mov    (%eax),%edx
 842f4b8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f4bb:	89 10                	mov    %edx,(%eax)
 842f4bd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842f4c0:	8b 40 04             	mov    0x4(%eax),%eax
 842f4c3:	89 c2                	mov    %eax,%edx
 842f4c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f4c8:	88 50 04             	mov    %dl,0x4(%eax)
 842f4cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842f4ce:	89 04 24             	mov    %eax,(%esp)
 842f4d1:	e8 96 2e cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842f4d6:	85 c0                	test   %eax,%eax
 842f4d8:	0f 94 c0             	sete   %al
 842f4db:	84 c0                	test   %al,%al
 842f4dd:	74 34                	je     842f513 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x173>
 842f4df:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f4e2:	83 c0 05             	add    $0x5,%eax
 842f4e5:	89 04 24             	mov    %eax,(%esp)
 842f4e8:	e8 07 b6 df ff       	call   822aaf4 <_ZN13CHotkeyOption5clearEv>
 842f4ed:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842f4f2:	8d 55 ac             	lea    -0x54(%ebp),%edx
 842f4f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f4f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842f500:	00 
 842f501:	89 04 24             	mov    %eax,(%esp)
 842f504:	e8 d5 1a 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842f509:	bb 01 00 00 00       	mov    $0x1,%ebx
 842f50e:	e9 e5 01 00 00       	jmp    842f6f8 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x358>
 842f513:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842f516:	89 04 24             	mov    %eax,(%esp)
 842f519:	e8 9e 4f fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842f51e:	83 f0 01             	xor    $0x1,%eax
 842f521:	84 c0                	test   %al,%al
 842f523:	74 5b                	je     842f580 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x1e0>
 842f525:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842f528:	8b 00                	mov    (%eax),%eax
 842f52a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f531:	00 
 842f532:	89 04 24             	mov    %eax,(%esp)
 842f535:	e8 11 9b cd ff       	call   810904b <_Z14NumberToStringji>
 842f53a:	89 c3                	mov    %eax,%ebx
 842f53c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842f543:	00 
 842f544:	c7 44 24 08 7f 74 00 	movl   $0x747f,0x8(%esp)
 842f54b:	00 
 842f54c:	c7 44 24 04 c0 c2 c5 	movl   $0x8c5c2c0,0x4(%esp)
 842f553:	08 
 842f554:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 842f557:	89 04 24             	mov    %eax,(%esp)
 842f55a:	e8 b9 01 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842f55f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 842f563:	c7 44 24 04 a0 15 c5 	movl   $0x8c515a0,0x4(%esp)
 842f56a:	08 
 842f56b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 842f56e:	89 04 24             	mov    %eax,(%esp)
 842f571:	e8 12 02 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842f576:	bb 00 00 00 00       	mov    $0x0,%ebx
 842f57b:	e9 78 01 00 00       	jmp    842f6f8 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x358>
 842f580:	8d 95 bb fe ff ff    	lea    -0x145(%ebp),%edx
 842f586:	bb ed 00 00 00       	mov    $0xed,%ebx
 842f58b:	b8 00 00 00 00       	mov    $0x0,%eax
 842f590:	89 d1                	mov    %edx,%ecx
 842f592:	83 e1 01             	and    $0x1,%ecx
 842f595:	85 c9                	test   %ecx,%ecx
 842f597:	74 08                	je     842f5a1 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x201>
 842f599:	88 02                	mov    %al,(%edx)
 842f59b:	83 c2 01             	add    $0x1,%edx
 842f59e:	83 eb 01             	sub    $0x1,%ebx
 842f5a1:	89 d1                	mov    %edx,%ecx
 842f5a3:	83 e1 02             	and    $0x2,%ecx
 842f5a6:	85 c9                	test   %ecx,%ecx
 842f5a8:	74 09                	je     842f5b3 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x213>
 842f5aa:	66 89 02             	mov    %ax,(%edx)
 842f5ad:	83 c2 02             	add    $0x2,%edx
 842f5b0:	83 eb 02             	sub    $0x2,%ebx
 842f5b3:	89 d9                	mov    %ebx,%ecx
 842f5b5:	c1 e9 02             	shr    $0x2,%ecx
 842f5b8:	89 d7                	mov    %edx,%edi
 842f5ba:	f3 ab                	rep stos %eax,%es:(%edi)
 842f5bc:	89 fa                	mov    %edi,%edx
 842f5be:	89 d9                	mov    %ebx,%ecx
 842f5c0:	83 e1 02             	and    $0x2,%ecx
 842f5c3:	85 c9                	test   %ecx,%ecx
 842f5c5:	74 06                	je     842f5cd <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x22d>
 842f5c7:	66 89 02             	mov    %ax,(%edx)
 842f5ca:	83 c2 02             	add    $0x2,%edx
 842f5cd:	89 d9                	mov    %ebx,%ecx
 842f5cf:	83 e1 01             	and    $0x1,%ecx
 842f5d2:	85 c9                	test   %ecx,%ecx
 842f5d4:	74 05                	je     842f5db <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x23b>
 842f5d6:	88 02                	mov    %al,(%edx)
 842f5d8:	83 c2 01             	add    $0x1,%edx
 842f5db:	c7 44 24 0c ed 00 00 	movl   $0xed,0xc(%esp)
 842f5e2:	00 
 842f5e3:	8d 85 bb fe ff ff    	lea    -0x145(%ebp),%eax
 842f5e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 842f5ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f5f4:	00 
 842f5f5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842f5f8:	89 04 24             	mov    %eax,(%esp)
 842f5fb:	e8 1a 5d cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 842f600:	88 45 e3             	mov    %al,-0x1d(%ebp)
 842f603:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 842f607:	83 f0 01             	xor    $0x1,%eax
 842f60a:	84 c0                	test   %al,%al
 842f60c:	74 5b                	je     842f669 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x2c9>
 842f60e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842f611:	8b 00                	mov    (%eax),%eax
 842f613:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f61a:	00 
 842f61b:	89 04 24             	mov    %eax,(%esp)
 842f61e:	e8 28 9a cd ff       	call   810904b <_Z14NumberToStringji>
 842f623:	89 c3                	mov    %eax,%ebx
 842f625:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842f62c:	00 
 842f62d:	c7 44 24 08 89 74 00 	movl   $0x7489,0x8(%esp)
 842f634:	00 
 842f635:	c7 44 24 04 c0 c2 c5 	movl   $0x8c5c2c0,0x4(%esp)
 842f63c:	08 
 842f63d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 842f640:	89 04 24             	mov    %eax,(%esp)
 842f643:	e8 d0 00 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842f648:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 842f64c:	c7 44 24 04 dc 15 c5 	movl   $0x8c515dc,0x4(%esp)
 842f653:	08 
 842f654:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 842f657:	89 04 24             	mov    %eax,(%esp)
 842f65a:	e8 29 01 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842f65f:	bb 00 00 00 00       	mov    $0x0,%ebx
 842f664:	e9 8f 00 00 00       	jmp    842f6f8 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x358>
 842f669:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f670:	00 
 842f671:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842f674:	89 04 24             	mov    %eax,(%esp)
 842f677:	e8 62 5d cf ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 842f67c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842f67f:	c7 45 a8 bc 00 00 00 	movl   $0xbc,-0x58(%ebp)
 842f686:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f689:	83 c0 05             	add    $0x5,%eax
 842f68c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842f68f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842f693:	8d 95 bb fe ff ff    	lea    -0x145(%ebp),%edx
 842f699:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f69d:	8d 55 a8             	lea    -0x58(%ebp),%edx
 842f6a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 842f6a4:	89 04 24             	mov    %eax,(%esp)
 842f6a7:	e8 56 2a 28 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 842f6ac:	83 f0 01             	xor    $0x1,%eax
 842f6af:	84 c0                	test   %al,%al
 842f6b1:	74 07                	je     842f6ba <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x31a>
 842f6b3:	bb 00 00 00 00       	mov    $0x0,%ebx
 842f6b8:	eb 3e                	jmp    842f6f8 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x358>
 842f6ba:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842f6bf:	8d 55 ac             	lea    -0x54(%ebp),%edx
 842f6c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f6c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842f6cd:	00 
 842f6ce:	89 04 24             	mov    %eax,(%esp)
 842f6d1:	e8 08 19 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842f6d6:	bb 01 00 00 00       	mov    $0x1,%ebx
 842f6db:	eb 1b                	jmp    842f6f8 <_ZN25DB_LoadCharacHotKeyOption8dispatchEiiP6Stream+0x358>
 842f6dd:	89 d3                	mov    %edx,%ebx
 842f6df:	89 c6                	mov    %eax,%esi
 842f6e1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842f6e4:	89 04 24             	mov    %eax,(%esp)
 842f6e7:	e8 e6 d1 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f6ec:	89 f0                	mov    %esi,%eax
 842f6ee:	89 da                	mov    %ebx,%edx
 842f6f0:	89 04 24             	mov    %eax,(%esp)
 842f6f3:	e8 58 40 6b 00       	call   8ae3750 <_Unwind_Resume>
 842f6f8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842f6fb:	89 04 24             	mov    %eax,(%esp)
 842f6fe:	e8 cf d1 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f703:	89 d8                	mov    %ebx,%eax
 842f705:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 842f70b:	5b                   	pop    %ebx
 842f70c:	5e                   	pop    %esi
 842f70d:	5f                   	pop    %edi
 842f70e:	5d                   	pop    %ebp
 842f70f:	c3                   	ret

```

```c
// DB_LoadCharacHotKeyOption::dispatch @ 0x842f3a0

/* DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadCharacHotKeyOption::dispatch
          (DB_LoadCharacHotKeyOption *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_149;
  char local_148 [236];
  uint local_5c;
  CStreamGuard local_58 [8];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  MySQL *local_30;
  SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION *local_2c;
  SIG_LOAD_CHARAC_HOTKEY_OPTION *local_28;
  char local_21;
  uint local_20;
  
  bVar11 = 0;
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xb,0);
  local_2c = Stream::GetOutBuffer<SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION>(param_3);
  uVar8 = *(undefined4 *)(local_2c + 4);
  uVar2 = NumberToString(*(uint *)local_2c,0);
  MySQL::set_query(local_30,
                   "seLect key_option from member_key_option where m_id = %s and key_type = %d",
                   uVar2,uVar8);
  cVar1 = MySQL::exec(local_30,true);
  if (cVar1 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x746e);
    CStreamGuard::CStreamGuard(local_58,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
                    /* try { // try from 0842f47e to 0842f6d5 has its CatchHandler @ 0842f6dd */
    CStreamGuard::operator<<(pCVar4,800);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_28 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC_HOTKEY_OPTION>(pCVar4);
    *(uint *)local_28 = *(uint *)local_2c;
    local_28[4] = SUB41(*(uint *)(local_2c + 4),0);
    iVar5 = MySQL::get_n_rows(local_30);
    if (iVar5 == 0) {
      CHotkeyOption::clear((CHotkeyOption *)(local_28 + 5));
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_58);
      uVar8 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_30);
      if (cVar1 == '\x01') {
        pcVar7 = &local_149;
        uVar9 = 0xed;
        bVar10 = ((uint)pcVar7 & 1) != 0;
        if (bVar10) {
          local_149 = '\0';
          pcVar7 = local_148;
          uVar9 = 0xec;
        }
        if (((uint)pcVar7 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
          uVar9 = uVar9 - 2;
        }
        for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + ((uint)bVar11 * -2 + 1) * 4;
        }
        if ((uVar9 & 2) != 0) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7 = pcVar7 + 2;
        }
        if (!bVar10) {
          *pcVar7 = '\0';
        }
        local_21 = MySQL::get_binary(local_30,0,&local_149,0xed);
        if (local_21 == '\x01') {
          local_20 = MySQL::get_binary_length(local_30,0);
          local_5c = 0xbc;
          cVar1 = uncompress_zip((char *)(local_28 + 5),&local_5c,&local_149,local_20);
          if (cVar1 == '\x01') {
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_58);
            uVar8 = 1;
          }
          else {
            uVar8 = 0;
          }
        }
        else {
          uVar8 = NumberToString(*(uint *)local_2c,0);
          cMyTrace::cMyTrace(local_40,
                             "virtual bool DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*)",
                             0x7489,5);
          cMyTrace::operator()
                    (local_40,"DB_LoadCharacHotKeyOption, get_binary(0) ERROR m_id=%s",uVar8);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = NumberToString(*(uint *)local_2c,0);
        cMyTrace::cMyTrace(local_50,
                           "virtual bool DB_LoadCharacHotKeyOption::dispatch(int, int, Stream*)",
                           0x747f,5);
        cMyTrace::operator()
                  (local_50,"DB_LoadCharacHotKeyOption::dispatch, fetch ERROR m_id=%s",uVar8);
        uVar8 = 0;
      }
    }
    CStreamGuard::~CStreamGuard(local_58);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

```

---

## makeRequest

```asm
// === 0842f710 DB_LoadCharacHotKeyOption::makeRequest  [0x0842f710-0x842f7f3] ===
 842f710:	55                   	push   %ebp
 842f711:	89 e5                	mov    %esp,%ebp
 842f713:	56                   	push   %esi
 842f714:	53                   	push   %ebx
 842f715:	83 ec 20             	sub    $0x20,%esp
 842f718:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842f71d:	c7 44 24 08 9a 74 00 	movl   $0x749a,0x8(%esp)
 842f724:	00 
 842f725:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842f72c:	08 
 842f72d:	89 04 24             	mov    %eax,(%esp)
 842f730:	e8 51 03 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842f735:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842f73c:	00 
 842f73d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842f741:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f744:	89 04 24             	mov    %eax,(%esp)
 842f747:	e8 da 94 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842f74c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f74f:	89 04 24             	mov    %eax,(%esp)
 842f752:	e8 ef 94 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f757:	c7 44 24 04 20 03 00 	movl   $0x320,0x4(%esp)
 842f75e:	00 
 842f75f:	89 04 24             	mov    %eax,(%esp)
 842f762:	e8 ef 94 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f767:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f76a:	89 04 24             	mov    %eax,(%esp)
 842f76d:	e8 d4 94 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f772:	8b 55 08             	mov    0x8(%ebp),%edx
 842f775:	89 54 24 04          	mov    %edx,0x4(%esp)
 842f779:	89 04 24             	mov    %eax,(%esp)
 842f77c:	e8 d5 94 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f781:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f784:	89 04 24             	mov    %eax,(%esp)
 842f787:	e8 c2 94 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842f78c:	89 04 24             	mov    %eax,(%esp)
 842f78f:	e8 ae 33 02 00       	call   8452b42 <_ZN12CStreamGuard11GetInBufferI33SIG_REQ_LOAD_CHARAC_HOTKEY_OPTIONEEPT_v>
 842f794:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842f797:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f79a:	8b 55 0c             	mov    0xc(%ebp),%edx
 842f79d:	89 10                	mov    %edx,(%eax)
 842f79f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842f7a2:	8b 55 10             	mov    0x10(%ebp),%edx
 842f7a5:	89 50 04             	mov    %edx,0x4(%eax)
 842f7a8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842f7ad:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842f7b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f7b4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842f7bb:	00 
 842f7bc:	89 04 24             	mov    %eax,(%esp)
 842f7bf:	e8 1a 18 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842f7c4:	eb 1b                	jmp    842f7e1 <_ZN25DB_LoadCharacHotKeyOption11makeRequestEiji+0xd1>
 842f7c6:	89 d3                	mov    %edx,%ebx
 842f7c8:	89 c6                	mov    %eax,%esi
 842f7ca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f7cd:	89 04 24             	mov    %eax,(%esp)
 842f7d0:	e8 fd d0 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f7d5:	89 f0                	mov    %esi,%eax
 842f7d7:	89 da                	mov    %ebx,%edx
 842f7d9:	89 04 24             	mov    %eax,(%esp)
 842f7dc:	e8 6f 3f 6b 00       	call   8ae3750 <_Unwind_Resume>
 842f7e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842f7e4:	89 04 24             	mov    %eax,(%esp)
 842f7e7:	e8 e6 d0 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f7ec:	83 c4 20             	add    $0x20,%esp
 842f7ef:	5b                   	pop    %ebx
 842f7f0:	5e                   	pop    %esi
 842f7f1:	5d                   	pop    %ebp
 842f7f2:	c3                   	ret
 842f7f3:	90                   	nop

```

```c
// DB_LoadCharacHotKeyOption::makeRequest @ 0x842f710

/* DB_LoadCharacHotKeyOption::makeRequest(int, unsigned int, int) */

void DB_LoadCharacHotKeyOption::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x749a);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842f762 to 0842f7c3 has its CatchHandler @ 0842f7c6 */
  CStreamGuard::operator<<(pCVar2,800);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQ_LOAD_CHARAC_HOTKEY_OPTION>(pCVar2);
  *(uint *)local_10 = param_2;
  *(int *)(local_10 + 4) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

