# DBInsertGiveBoxEventReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815d3ee DBInsertGiveBoxEventReward::dispatch  [0x0815d3ee-0x815d7a7] ===
 815d3ee:	55                   	push   %ebp
 815d3ef:	89 e5                	mov    %esp,%ebp
 815d3f1:	56                   	push   %esi
 815d3f2:	53                   	push   %ebx
 815d3f3:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 815d3f9:	8b 45 14             	mov    0x14(%ebp),%eax
 815d3fc:	89 04 24             	mov    %eax,(%esp)
 815d3ff:	e8 1a 19 00 00       	call   815ed1e <_ZN6Stream12GetOutBufferIN26DBInsertGiveBoxEventReward3MSGEEEPT_v>
 815d404:	89 45 e0             	mov    %eax,-0x20(%ebp)
 815d407:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 815d40b:	75 2c                	jne    815d439 <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x4b>
 815d40d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d414:	e8 e7 83 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d419:	89 c2                	mov    %eax,%edx
 815d41b:	c7 02 06 73 b7 08    	movl   $0x8b77306,(%edx)
 815d421:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d428:	00 
 815d429:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d430:	09 
 815d431:	89 04 24             	mov    %eax,(%esp)
 815d434:	e8 17 78 5c 00       	call   8724c50 <__cxa_throw>
 815d439:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815d43e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d445:	00 
 815d446:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815d44d:	00 
 815d44e:	89 04 24             	mov    %eax,(%esp)
 815d451:	e8 e8 7d 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815d456:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 815d459:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 815d45d:	75 2c                	jne    815d48b <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x9d>
 815d45f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d466:	e8 95 83 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d46b:	89 c2                	mov    %eax,%edx
 815d46d:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815d473:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d47a:	00 
 815d47b:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d482:	09 
 815d483:	89 04 24             	mov    %eax,(%esp)
 815d486:	e8 c5 77 5c 00       	call   8724c50 <__cxa_throw>
 815d48b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 815d492:	e8 b9 02 f2 ff       	call   807d750 <time@plt>
 815d497:	89 45 dc             	mov    %eax,-0x24(%ebp)
 815d49a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 815d49d:	89 44 24 04          	mov    %eax,0x4(%esp)
 815d4a1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815d4a4:	89 04 24             	mov    %eax,(%esp)
 815d4a7:	e8 b4 0e f2 ff       	call   807e360 <localtime_r@plt>
 815d4ac:	8b 45 a8             	mov    -0x58(%ebp),%eax
 815d4af:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 815d4b5:	8b 45 ac             	mov    -0x54(%ebp),%eax
 815d4b8:	89 45 80             	mov    %eax,-0x80(%ebp)
 815d4bb:	8b 45 b0             	mov    -0x50(%ebp),%eax
 815d4be:	89 45 84             	mov    %eax,-0x7c(%ebp)
 815d4c1:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 815d4c4:	89 45 88             	mov    %eax,-0x78(%ebp)
 815d4c7:	8b 45 b8             	mov    -0x48(%ebp),%eax
 815d4ca:	89 45 8c             	mov    %eax,-0x74(%ebp)
 815d4cd:	8b 45 bc             	mov    -0x44(%ebp),%eax
 815d4d0:	89 45 90             	mov    %eax,-0x70(%ebp)
 815d4d3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 815d4d6:	89 45 94             	mov    %eax,-0x6c(%ebp)
 815d4d9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 815d4dc:	89 45 98             	mov    %eax,-0x68(%ebp)
 815d4df:	8b 45 c8             	mov    -0x38(%ebp),%eax
 815d4e2:	89 45 9c             	mov    %eax,-0x64(%ebp)
 815d4e5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 815d4e8:	89 45 a0             	mov    %eax,-0x60(%ebp)
 815d4eb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 815d4ee:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 815d4f1:	e8 8b ec f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815d4f6:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 815d4fc:	89 45 84             	mov    %eax,-0x7c(%ebp)
 815d4ff:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 815d506:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 815d50d:	00 00 00 
 815d510:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 815d516:	89 04 24             	mov    %eax,(%esp)
 815d519:	e8 02 13 f2 ff       	call   807e820 <mktime@plt>
 815d51e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 815d521:	8b 55 b0             	mov    -0x50(%ebp),%edx
 815d524:	8b 45 84             	mov    -0x7c(%ebp),%eax
 815d527:	39 c2                	cmp    %eax,%edx
 815d529:	7d 07                	jge    815d532 <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x144>
 815d52b:	81 6d e8 80 51 01 00 	subl   $0x15180,-0x18(%ebp)
 815d532:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815d535:	8b 00                	mov    (%eax),%eax
 815d537:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815d53e:	00 
 815d53f:	89 04 24             	mov    %eax,(%esp)
 815d542:	e8 04 bb fa ff       	call   810904b <_Z14NumberToStringji>
 815d547:	8b 55 e8             	mov    -0x18(%ebp),%edx
 815d54a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 815d54e:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d552:	c7 44 24 04 c0 7d b7 	movl   $0x8b77dc0,0x4(%esp)
 815d559:	08 
 815d55a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815d55d:	89 04 24             	mov    %eax,(%esp)
 815d560:	e8 5b 6c 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815d565:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d56c:	00 
 815d56d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815d570:	89 04 24             	mov    %eax,(%esp)
 815d573:	e8 ae 6d 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815d578:	83 f0 01             	xor    $0x1,%eax
 815d57b:	84 c0                	test   %al,%al
 815d57d:	74 2c                	je     815d5ab <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x1bd>
 815d57f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d586:	e8 75 82 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d58b:	89 c2                	mov    %eax,%edx
 815d58d:	c7 02 f9 74 b7 08    	movl   $0x8b774f9,(%edx)
 815d593:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d59a:	00 
 815d59b:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d5a2:	09 
 815d5a3:	89 04 24             	mov    %eax,(%esp)
 815d5a6:	e8 a5 76 5c 00       	call   8724c50 <__cxa_throw>
 815d5ab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815d5ae:	89 04 24             	mov    %eax,(%esp)
 815d5b1:	e8 b6 4d f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815d5b6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815d5b9:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815d5bd:	0f 85 d4 01 00 00    	jne    815d797 <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x3a9>
 815d5c3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815d5c6:	8b 58 04             	mov    0x4(%eax),%ebx
 815d5c9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815d5cc:	8b 00                	mov    (%eax),%eax
 815d5ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815d5d5:	00 
 815d5d6:	89 04 24             	mov    %eax,(%esp)
 815d5d9:	e8 6d ba fa ff       	call   810904b <_Z14NumberToStringji>
 815d5de:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815d5e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d5e6:	c7 44 24 04 20 7e b7 	movl   $0x8b77e20,0x4(%esp)
 815d5ed:	08 
 815d5ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815d5f1:	89 04 24             	mov    %eax,(%esp)
 815d5f4:	e8 c7 6b 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815d5f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d600:	00 
 815d601:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815d604:	89 04 24             	mov    %eax,(%esp)
 815d607:	e8 1a 6d 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815d60c:	83 f0 01             	xor    $0x1,%eax
 815d60f:	84 c0                	test   %al,%al
 815d611:	74 2c                	je     815d63f <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x251>
 815d613:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d61a:	e8 e1 81 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d61f:	89 c2                	mov    %eax,%edx
 815d621:	c7 02 b2 73 b7 08    	movl   $0x8b773b2,(%edx)
 815d627:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d62e:	00 
 815d62f:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d636:	09 
 815d637:	89 04 24             	mov    %eax,(%esp)
 815d63a:	e8 11 76 5c 00       	call   8724c50 <__cxa_throw>
 815d63f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815d644:	c7 44 24 08 a5 03 00 	movl   $0x3a5,0x8(%esp)
 815d64b:	00 
 815d64c:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815d653:	08 
 815d654:	89 04 24             	mov    %eax,(%esp)
 815d657:	e8 2a 24 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815d65c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815d663:	00 
 815d664:	89 44 24 04          	mov    %eax,0x4(%esp)
 815d668:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815d66b:	89 04 24             	mov    %eax,(%esp)
 815d66e:	e8 b3 b5 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815d673:	8b 45 10             	mov    0x10(%ebp),%eax
 815d676:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d67a:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 815d681:	00 
 815d682:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815d685:	89 04 24             	mov    %eax,(%esp)
 815d688:	e8 c3 62 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815d68d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815d690:	89 04 24             	mov    %eax,(%esp)
 815d693:	e8 b6 b5 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815d698:	89 04 24             	mov    %eax,(%esp)
 815d69b:	e8 68 16 00 00       	call   815ed08 <_ZN12CStreamGuard11GetInBufferIN26DBInsertGiveBoxEventReward3MSGEEEPT_v>
 815d6a0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815d6a3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815d6a7:	75 2c                	jne    815d6d5 <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x2e7>
 815d6a9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d6b0:	e8 4b 81 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d6b5:	89 c2                	mov    %eax,%edx
 815d6b7:	c7 02 ff 72 b7 08    	movl   $0x8b772ff,(%edx)
 815d6bd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d6c4:	00 
 815d6c5:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d6cc:	09 
 815d6cd:	89 04 24             	mov    %eax,(%esp)
 815d6d0:	e8 7b 75 5c 00       	call   8724c50 <__cxa_throw>
 815d6d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815d6d8:	8b 50 04             	mov    0x4(%eax),%edx
 815d6db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d6de:	89 50 04             	mov    %edx,0x4(%eax)
 815d6e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 815d6e4:	8b 10                	mov    (%eax),%edx
 815d6e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815d6e9:	89 10                	mov    %edx,(%eax)
 815d6eb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815d6f0:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 815d6f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 815d6f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d6fe:	00 
 815d6ff:	89 04 24             	mov    %eax,(%esp)
 815d702:	e8 d7 38 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815d707:	eb 15                	jmp    815d71e <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x330>
 815d709:	89 d3                	mov    %edx,%ebx
 815d70b:	89 c6                	mov    %eax,%esi
 815d70d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815d710:	89 04 24             	mov    %eax,(%esp)
 815d713:	e8 ba f1 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815d718:	89 f0                	mov    %esi,%eax
 815d71a:	89 da                	mov    %ebx,%edx
 815d71c:	eb 0d                	jmp    815d72b <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x33d>
 815d71e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 815d721:	89 04 24             	mov    %eax,(%esp)
 815d724:	e8 a9 f1 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815d729:	eb 6c                	jmp    815d797 <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x3a9>
 815d72b:	83 fa 01             	cmp    $0x1,%edx
 815d72e:	74 08                	je     815d738 <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x34a>
 815d730:	89 04 24             	mov    %eax,(%esp)
 815d733:	e8 18 60 98 00       	call   8ae3750 <_Unwind_Resume>
 815d738:	89 04 24             	mov    %eax,(%esp)
 815d73b:	e8 a0 85 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815d740:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815d743:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815d746:	89 44 24 14          	mov    %eax,0x14(%esp)
 815d74a:	c7 44 24 10 84 7e b7 	movl   $0x8b77e84,0x10(%esp)
 815d751:	08 
 815d752:	c7 44 24 0c b4 03 00 	movl   $0x3b4,0xc(%esp)
 815d759:	00 
 815d75a:	c7 44 24 08 00 8d b7 	movl   $0x8b78d00,0x8(%esp)
 815d761:	08 
 815d762:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815d769:	08 
 815d76a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815d771:	e8 94 64 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815d776:	bb 00 00 00 00       	mov    $0x0,%ebx
 815d77b:	e8 b0 84 5c 00       	call   8725c30 <__cxa_end_catch>
 815d780:	eb 1a                	jmp    815d79c <_ZN26DBInsertGiveBoxEventReward8dispatchEiiP6Stream+0x3ae>
 815d782:	89 d3                	mov    %edx,%ebx
 815d784:	89 c6                	mov    %eax,%esi
 815d786:	e8 a5 84 5c 00       	call   8725c30 <__cxa_end_catch>
 815d78b:	89 f0                	mov    %esi,%eax
 815d78d:	89 da                	mov    %ebx,%edx
 815d78f:	89 04 24             	mov    %eax,(%esp)
 815d792:	e8 b9 5f 98 00       	call   8ae3750 <_Unwind_Resume>
 815d797:	bb 01 00 00 00       	mov    $0x1,%ebx
 815d79c:	89 d8                	mov    %ebx,%eax
 815d79e:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 815d7a4:	5b                   	pop    %ebx
 815d7a5:	5e                   	pop    %esi
 815d7a6:	5d                   	pop    %ebp
 815d7a7:	c3                   	ret

```

```c
// DBInsertGiveBoxEventReward::dispatch @ 0x815d3ee

/* DBInsertGiveBoxEventReward::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBInsertGiveBoxEventReward::dispatch
          (DBInsertGiveBoxEventReward *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  tm local_88;
  tm local_5c;
  CStreamGuard local_30 [8];
  time_t local_28;
  MSG *local_24;
  MySQL *local_20;
  int local_1c;
  int local_18;
  MSG *local_14;
  
                    /* try { // try from 0815d3ff to 0815d65b has its CatchHandler @ 0815d72b */
  local_24 = Stream::GetOutBuffer<DBInsertGiveBoxEventReward::MSG>(param_3);
  if (local_24 == (MSG *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_20 == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_28 = time((time_t *)0x0);
  localtime_r(&local_28,&local_5c);
  local_88.tm_sec = local_5c.tm_sec;
  local_88.tm_min = local_5c.tm_min;
  local_88.tm_hour = local_5c.tm_hour;
  local_88.tm_mday = local_5c.tm_mday;
  local_88.tm_mon = local_5c.tm_mon;
  local_88.tm_year = local_5c.tm_year;
  local_88.tm_wday = local_5c.tm_wday;
  local_88.tm_yday = local_5c.tm_yday;
  local_88.tm_isdst = local_5c.tm_isdst;
  local_88.tm_gmtoff = local_5c.tm_gmtoff;
  local_88.tm_zone = local_5c.tm_zone;
  iVar4 = G_CEnvironment();
  local_88.tm_hour = *(int *)(iVar4 + 0x37c);
  local_88.tm_min = 0;
  local_88.tm_sec = 0;
  local_1c = mktime(&local_88);
  if (local_5c.tm_hour < local_88.tm_hour) {
    local_1c = local_1c + -0x15180;
  }
  uVar5 = NumberToString(*(uint *)local_24,0);
  MySQL::set_query(local_20,
                   "seLect m_id from event_1306_account_reward_2nd where m_id=%s and occ_date > FROM_UNIXTIME(%d)"
                   ,uVar5,local_1c);
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  local_18 = MySQL::get_n_rows(local_20);
  if (local_18 == 0) {
    uVar1 = *(uint *)(local_24 + 4);
    uVar5 = NumberToString(*(uint *)local_24,0);
    MySQL::set_query(local_20,
                     "inSert into event_1306_account_reward_2nd (m_id , charac_no , occ_date ) values (%s , %u , now())"
                     ,uVar5,uVar1);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    pSVar6 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x3a5);
    CStreamGuard::CStreamGuard(local_30,pSVar6,true);
                    /* try { // try from 0815d688 to 0815d706 has its CatchHandler @ 0815d709 */
    Taiwan::internal_stream(local_30,0x10,param_2);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_30);
    local_14 = CStreamGuard::GetInBuffer<DBInsertGiveBoxEventReward::MSG>(this_00);
    if (local_14 == (MSG *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "stream";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    *(uint *)(local_14 + 4) = *(uint *)(local_24 + 4);
    *(uint *)local_14 = *(uint *)local_24;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
                    /* try { // try from 0815d724 to 0815d728 has its CatchHandler @ 0815d72b */
    CStreamGuard::~CStreamGuard(local_30);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0815d2c8 DBInsertGiveBoxEventReward::makeRequest  [0x0815d2c8-0x815d3ed] ===
 815d2c8:	55                   	push   %ebp
 815d2c9:	89 e5                	mov    %esp,%ebp
 815d2cb:	56                   	push   %esi
 815d2cc:	53                   	push   %ebx
 815d2cd:	83 ec 30             	sub    $0x30,%esp
 815d2d0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815d2d5:	c7 44 24 08 69 03 00 	movl   $0x369,0x8(%esp)
 815d2dc:	00 
 815d2dd:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815d2e4:	08 
 815d2e5:	89 04 24             	mov    %eax,(%esp)
 815d2e8:	e8 99 27 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815d2ed:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815d2f4:	00 
 815d2f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 815d2f9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815d2fc:	89 04 24             	mov    %eax,(%esp)
 815d2ff:	e8 22 b9 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815d304:	8b 45 08             	mov    0x8(%ebp),%eax
 815d307:	89 04 24             	mov    %eax,(%esp)
 815d30a:	e8 87 b9 f6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 815d30f:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d313:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 815d31a:	00 
 815d31b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815d31e:	89 04 24             	mov    %eax,(%esp)
 815d321:	e8 2a 66 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815d326:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815d329:	89 04 24             	mov    %eax,(%esp)
 815d32c:	e8 1d b9 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815d331:	89 04 24             	mov    %eax,(%esp)
 815d334:	e8 cf 19 00 00       	call   815ed08 <_ZN12CStreamGuard11GetInBufferIN26DBInsertGiveBoxEventReward3MSGEEEPT_v>
 815d339:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815d33c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815d340:	75 38                	jne    815d37a <_ZN26DBInsertGiveBoxEventReward11makeRequestEP5CUser+0xb2>
 815d342:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815d349:	00 
 815d34a:	c7 44 24 08 6e 03 00 	movl   $0x36e,0x8(%esp)
 815d351:	00 
 815d352:	c7 44 24 04 60 8d b7 	movl   $0x8b78d60,0x4(%esp)
 815d359:	08 
 815d35a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815d35d:	89 04 24             	mov    %eax,(%esp)
 815d360:	e8 b3 23 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815d365:	c7 44 24 04 f1 77 b7 	movl   $0x8b777f1,0x4(%esp)
 815d36c:	08 
 815d36d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815d370:	89 04 24             	mov    %eax,(%esp)
 815d373:	e8 10 24 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815d378:	eb 62                	jmp    815d3dc <_ZN26DBInsertGiveBoxEventReward11makeRequestEP5CUser+0x114>
 815d37a:	8b 45 08             	mov    0x8(%ebp),%eax
 815d37d:	89 04 24             	mov    %eax,(%esp)
 815d380:	e8 e9 cf f7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 815d385:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815d388:	89 02                	mov    %eax,(%edx)
 815d38a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 815d391:	ff 
 815d392:	8b 45 08             	mov    0x8(%ebp),%eax
 815d395:	89 04 24             	mov    %eax,(%esp)
 815d398:	e8 03 0c 4f 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 815d39d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815d3a0:	89 42 04             	mov    %eax,0x4(%edx)
 815d3a3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815d3a8:	8d 55 dc             	lea    -0x24(%ebp),%edx
 815d3ab:	89 54 24 08          	mov    %edx,0x8(%esp)
 815d3af:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815d3b6:	00 
 815d3b7:	89 04 24             	mov    %eax,(%esp)
 815d3ba:	e8 1f 3c 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815d3bf:	eb 1b                	jmp    815d3dc <_ZN26DBInsertGiveBoxEventReward11makeRequestEP5CUser+0x114>
 815d3c1:	89 d3                	mov    %edx,%ebx
 815d3c3:	89 c6                	mov    %eax,%esi
 815d3c5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815d3c8:	89 04 24             	mov    %eax,(%esp)
 815d3cb:	e8 02 f5 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815d3d0:	89 f0                	mov    %esi,%eax
 815d3d2:	89 da                	mov    %ebx,%edx
 815d3d4:	89 04 24             	mov    %eax,(%esp)
 815d3d7:	e8 74 63 98 00       	call   8ae3750 <_Unwind_Resume>
 815d3dc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815d3df:	89 04 24             	mov    %eax,(%esp)
 815d3e2:	e8 eb f4 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815d3e7:	83 c4 30             	add    $0x30,%esp
 815d3ea:	5b                   	pop    %ebx
 815d3eb:	5e                   	pop    %esi
 815d3ec:	5d                   	pop    %ebp
 815d3ed:	c3                   	ret

```

```c
// DBInsertGiveBoxEventReward::makeRequest @ 0x815d2c8

/* DBInsertGiveBoxEventReward::makeRequest(CUser*) */

void DBInsertGiveBoxEventReward::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x369);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815d321 to 0815d3be has its CatchHandler @ 0815d3c1 */
  Taiwan::internal_stream(local_28,0x10,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<DBInsertGiveBoxEventReward::MSG>(this);
  if (local_10 == (MSG *)0x0) {
    cMyTrace::cMyTrace(local_20,"static void DBInsertGiveBoxEventReward::makeRequest(CUser*)",0x36e,
                       0);
    cMyTrace::operator()(local_20,"[Taiwan, Event] msg is null");
  }
  else {
    uVar2 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar2;
    uVar2 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 4) = uVar2;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  }
  CStreamGuard::~CStreamGuard(local_28);
  return;
}

```

