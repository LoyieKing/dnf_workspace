# WongWork__EventATI

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ArrangeATIEventItem

```asm
// === 083fa1d3 WongWork::EventATI::ArrangeATIEventItem  [0x083fa1d3-0x83fa69b] ===
 83fa1d3:	55                   	push   %ebp
 83fa1d4:	89 e5                	mov    %esp,%ebp
 83fa1d6:	53                   	push   %ebx
 83fa1d7:	81 ec 14 01 00 00    	sub    $0x114,%esp
 83fa1dd:	c7 45 e4 0a 00 00 00 	movl   $0xa,-0x1c(%ebp)
 83fa1e4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fa1e9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fa1f0:	00 
 83fa1f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa1f8:	00 
 83fa1f9:	89 04 24             	mov    %eax,(%esp)
 83fa1fc:	e8 3d b0 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fa201:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83fa204:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa20b:	00 
 83fa20c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa20f:	89 04 24             	mov    %eax,(%esp)
 83fa212:	e8 34 ee d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa217:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 83fa21e:	00 
 83fa21f:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa223:	c7 44 24 04 c8 5f c3 	movl   $0x8c35fc8,0x4(%esp)
 83fa22a:	08 
 83fa22b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa22e:	89 04 24             	mov    %eax,(%esp)
 83fa231:	e8 8a 9f ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa236:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa23d:	00 
 83fa23e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa241:	89 04 24             	mov    %eax,(%esp)
 83fa244:	e8 dd a0 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fa249:	83 f0 01             	xor    $0x1,%eax
 83fa24c:	84 c0                	test   %al,%al
 83fa24e:	74 5c                	je     83fa2ac <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0xd9>
 83fa250:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa257:	00 
 83fa258:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa25b:	89 04 24             	mov    %eax,(%esp)
 83fa25e:	e8 e8 ed d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa263:	89 c3                	mov    %eax,%ebx
 83fa265:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83fa26c:	00 
 83fa26d:	c7 44 24 08 a1 00 00 	movl   $0xa1,0x8(%esp)
 83fa274:	00 
 83fa275:	c7 44 24 04 60 dd c5 	movl   $0x8c5dd60,0x4(%esp)
 83fa27c:	08 
 83fa27d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fa280:	89 04 24             	mov    %eax,(%esp)
 83fa283:	e8 90 54 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83fa288:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83fa28c:	c7 44 24 08 60 dd c5 	movl   $0x8c5dd60,0x8(%esp)
 83fa293:	08 
 83fa294:	c7 44 24 04 9d 60 c3 	movl   $0x8c3609d,0x4(%esp)
 83fa29b:	08 
 83fa29c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fa29f:	89 04 24             	mov    %eax,(%esp)
 83fa2a2:	e8 e1 54 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83fa2a7:	e9 e7 03 00 00       	jmp    83fa693 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x4c0>
 83fa2ac:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83fa2b3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fa2ba:	e9 10 03 00 00       	jmp    83fa5cf <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x3fc>
 83fa2bf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa2c2:	89 04 24             	mov    %eax,(%esp)
 83fa2c5:	e8 f2 a1 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83fa2ca:	83 f0 01             	xor    $0x1,%eax
 83fa2cd:	84 c0                	test   %al,%al
 83fa2cf:	0f 85 15 03 00 00    	jne    83fa5ea <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x417>
 83fa2d5:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 83fa2dc:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 83fa2e3:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83fa2ea:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 83fa2f1:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 83fa2f8:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 83fa2ff:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 83fa306:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 83fa30d:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 83fa314:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 83fa31b:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 83fa322:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 83fa329:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 83fa330:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fa333:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa337:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa33e:	00 
 83fa33f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa342:	89 04 24             	mov    %eax,(%esp)
 83fa345:	e8 64 7f ce ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 83fa34a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83fa34d:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa351:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa358:	00 
 83fa359:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa35c:	89 04 24             	mov    %eax,(%esp)
 83fa35f:	e8 c8 c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa364:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83fa367:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa36b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83fa372:	00 
 83fa373:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa376:	89 04 24             	mov    %eax,(%esp)
 83fa379:	e8 ae c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa37e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83fa381:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa385:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83fa38c:	00 
 83fa38d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa390:	89 04 24             	mov    %eax,(%esp)
 83fa393:	e8 94 c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa398:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83fa39b:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa39f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83fa3a6:	00 
 83fa3a7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa3aa:	89 04 24             	mov    %eax,(%esp)
 83fa3ad:	e8 7a c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa3b2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83fa3b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa3b9:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 83fa3c0:	00 
 83fa3c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa3c4:	89 04 24             	mov    %eax,(%esp)
 83fa3c7:	e8 60 c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa3cc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83fa3cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa3d3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 83fa3da:	00 
 83fa3db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa3de:	89 04 24             	mov    %eax,(%esp)
 83fa3e1:	e8 46 c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa3e6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 83fa3e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa3ed:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 83fa3f4:	00 
 83fa3f5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa3f8:	89 04 24             	mov    %eax,(%esp)
 83fa3fb:	e8 2c c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa400:	8d 45 b0             	lea    -0x50(%ebp),%eax
 83fa403:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa407:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 83fa40e:	00 
 83fa40f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa412:	89 04 24             	mov    %eax,(%esp)
 83fa415:	e8 12 c5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa41a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83fa41d:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa421:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 83fa428:	00 
 83fa429:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa42c:	89 04 24             	mov    %eax,(%esp)
 83fa42f:	e8 f8 c4 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa434:	8d 45 a8             	lea    -0x58(%ebp),%eax
 83fa437:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa43b:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 83fa442:	00 
 83fa443:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa446:	89 04 24             	mov    %eax,(%esp)
 83fa449:	e8 de c4 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa44e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 83fa451:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa455:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 83fa45c:	00 
 83fa45d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa460:	89 04 24             	mov    %eax,(%esp)
 83fa463:	e8 c4 c4 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa468:	8d 45 a0             	lea    -0x60(%ebp),%eax
 83fa46b:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa46f:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 83fa476:	00 
 83fa477:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa47a:	89 04 24             	mov    %eax,(%esp)
 83fa47d:	e8 aa c4 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa482:	8b 45 b8             	mov    -0x48(%ebp),%eax
 83fa485:	85 c0                	test   %eax,%eax
 83fa487:	75 68                	jne    83fa4f1 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x31e>
 83fa489:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83fa48c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83fa48f:	75 60                	jne    83fa4f1 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x31e>
 83fa491:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa494:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83fa497:	c1 e2 04             	shl    $0x4,%edx
 83fa49a:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fa49d:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fa4a0:	81 ea f8 00 00 00    	sub    $0xf8,%edx
 83fa4a6:	89 02                	mov    %eax,(%edx)
 83fa4a8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa4ab:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83fa4ae:	c1 e2 04             	shl    $0x4,%edx
 83fa4b1:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa4b4:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fa4b7:	81 ea f0 00 00 00    	sub    $0xf0,%edx
 83fa4bd:	89 02                	mov    %eax,(%edx)
 83fa4bf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83fa4c2:	c1 e0 04             	shl    $0x4,%eax
 83fa4c5:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fa4c8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fa4cb:	2d ec 00 00 00       	sub    $0xec,%eax
 83fa4d0:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 83fa4d6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa4d9:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83fa4dc:	c1 e2 04             	shl    $0x4,%edx
 83fa4df:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fa4e2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fa4e5:	81 ea f4 00 00 00    	sub    $0xf4,%edx
 83fa4eb:	89 02                	mov    %eax,(%edx)
 83fa4ed:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83fa4f1:	8b 45 ac             	mov    -0x54(%ebp),%eax
 83fa4f4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83fa4f7:	0f 85 ce 00 00 00    	jne    83fa5cb <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x3f8>
 83fa4fd:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 83fa500:	85 c0                	test   %eax,%eax
 83fa502:	75 60                	jne    83fa564 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x391>
 83fa504:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa507:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83fa50a:	c1 e2 04             	shl    $0x4,%edx
 83fa50d:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa510:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fa513:	81 ea f8 00 00 00    	sub    $0xf8,%edx
 83fa519:	89 02                	mov    %eax,(%edx)
 83fa51b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa51e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 83fa521:	c1 e2 04             	shl    $0x4,%edx
 83fa524:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fa527:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fa52a:	81 ea f0 00 00 00    	sub    $0xf0,%edx
 83fa530:	89 02                	mov    %eax,(%edx)
 83fa532:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83fa535:	c1 e0 04             	shl    $0x4,%eax
 83fa538:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa53b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fa53e:	2d ec 00 00 00       	sub    $0xec,%eax
 83fa543:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 83fa549:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa54c:	8b 45 a8             	mov    -0x58(%ebp),%eax
 83fa54f:	c1 e2 04             	shl    $0x4,%edx
 83fa552:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fa555:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fa558:	81 ea f4 00 00 00    	sub    $0xf4,%edx
 83fa55e:	89 02                	mov    %eax,(%edx)
 83fa560:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83fa564:	8b 45 a0             	mov    -0x60(%ebp),%eax
 83fa567:	85 c0                	test   %eax,%eax
 83fa569:	75 60                	jne    83fa5cb <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x3f8>
 83fa56b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa56e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83fa571:	c1 e2 04             	shl    $0x4,%edx
 83fa574:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa577:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fa57a:	81 ea f8 00 00 00    	sub    $0xf8,%edx
 83fa580:	89 02                	mov    %eax,(%edx)
 83fa582:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa585:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83fa588:	c1 e2 04             	shl    $0x4,%edx
 83fa58b:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fa58e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fa591:	81 ea f0 00 00 00    	sub    $0xf0,%edx
 83fa597:	89 02                	mov    %eax,(%edx)
 83fa599:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83fa59c:	c1 e0 04             	shl    $0x4,%eax
 83fa59f:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa5a2:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fa5a5:	2d ec 00 00 00       	sub    $0xec,%eax
 83fa5aa:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 83fa5b0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fa5b3:	8b 45 a8             	mov    -0x58(%ebp),%eax
 83fa5b6:	c1 e2 04             	shl    $0x4,%edx
 83fa5b9:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fa5bc:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fa5bf:	81 ea f4 00 00 00    	sub    $0xf4,%edx
 83fa5c5:	89 02                	mov    %eax,(%edx)
 83fa5c7:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83fa5cb:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83fa5cf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fa5d2:	89 04 24             	mov    %eax,(%esp)
 83fa5d5:	e8 92 7d ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83fa5da:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83fa5dd:	0f 97 c0             	seta   %al
 83fa5e0:	84 c0                	test   %al,%al
 83fa5e2:	0f 85 d7 fc ff ff    	jne    83fa2bf <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0xec>
 83fa5e8:	eb 01                	jmp    83fa5eb <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x418>
 83fa5ea:	90                   	nop
 83fa5eb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83fa5f2:	e9 8b 00 00 00       	jmp    83fa682 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x4af>
 83fa5f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa5fa:	c1 e0 04             	shl    $0x4,%eax
 83fa5fd:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa600:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fa603:	2d f0 00 00 00       	sub    $0xf0,%eax
 83fa608:	8b 10                	mov    (%eax),%edx
 83fa60a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa60d:	c1 e0 04             	shl    $0x4,%eax
 83fa610:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fa613:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 83fa616:	2d f8 00 00 00       	sub    $0xf8,%eax
 83fa61b:	8b 00                	mov    (%eax),%eax
 83fa61d:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fa621:	89 04 24             	mov    %eax,(%esp)
 83fa624:	e8 84 fa ff ff       	call   83fa0ad <_ZN8WongWork8EventATI18UpdateEventATIInfoEji>
 83fa629:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa62c:	c1 e0 04             	shl    $0x4,%eax
 83fa62f:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa632:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fa635:	2d ec 00 00 00       	sub    $0xec,%eax
 83fa63a:	8b 00                	mov    (%eax),%eax
 83fa63c:	89 c1                	mov    %eax,%ecx
 83fa63e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa641:	c1 e0 04             	shl    $0x4,%eax
 83fa644:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fa647:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fa64a:	2d f0 00 00 00       	sub    $0xf0,%eax
 83fa64f:	8b 00                	mov    (%eax),%eax
 83fa651:	89 c2                	mov    %eax,%edx
 83fa653:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa656:	c1 e0 04             	shl    $0x4,%eax
 83fa659:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fa65c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fa65f:	2d f4 00 00 00       	sub    $0xf4,%eax
 83fa664:	8b 00                	mov    (%eax),%eax
 83fa666:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 83fa66d:	00 
 83fa66e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83fa672:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fa676:	89 04 24             	mov    %eax,(%esp)
 83fa679:	e8 d6 f4 ff ff       	call   83f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>
 83fa67e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83fa682:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa685:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 83fa688:	0f 9c c0             	setl   %al
 83fa68b:	84 c0                	test   %al,%al
 83fa68d:	0f 85 64 ff ff ff    	jne    83fa5f7 <_ZN8WongWork8EventATI19ArrangeATIEventItemEjj+0x424>
 83fa693:	81 c4 14 01 00 00    	add    $0x114,%esp
 83fa699:	5b                   	pop    %ebx
 83fa69a:	5d                   	pop    %ebp
 83fa69b:	c3                   	ret

```

```c
// WongWork::EventATI::ArrangeATIEventItem @ 0x83fa1d3

/* WongWork::EventATI::ArrangeATIEventItem(unsigned int, unsigned int) */

void WongWork::EventATI::ArrangeATIEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_104 [40];
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40 [4];
  cMyTrace local_30 [16];
  undefined4 local_20;
  MySQL *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_20 = 10;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_1c,
                   "seLect id,cera,cera_check,item_no,item_server_id,item_charac_no,item_check,avata_no1,avata_no2,avata_server_id,avata_charac_no,avata_check1,avata_check2 from event_ati_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_18 = 0;
    local_14 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_1c), local_14 < uVar3 &&
           (cVar1 = MySQL::fetch(local_1c), cVar1 == '\x01'))) {
      local_40[3] = 0;
      local_40[2] = 0;
      local_40[1] = 0;
      local_40[0] = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      MySQL::get_int(local_1c,0,local_40 + 3);
      MySQL::get_int(local_1c,1,(int *)(local_40 + 2));
      MySQL::get_int(local_1c,2,(int *)(local_40 + 1));
      MySQL::get_int(local_1c,3,(int *)local_40);
      MySQL::get_int(local_1c,4,(int *)&local_44);
      MySQL::get_int(local_1c,5,(int *)&local_48);
      MySQL::get_int(local_1c,6,&local_4c);
      MySQL::get_int(local_1c,7,(int *)&local_50);
      MySQL::get_int(local_1c,8,(int *)&local_54);
      MySQL::get_int(local_1c,9,(int *)&local_58);
      MySQL::get_int(local_1c,10,(int *)&local_5c);
      MySQL::get_int(local_1c,0xb,&local_60);
      MySQL::get_int(local_1c,0xc,&local_64);
      if ((local_4c == 0) && (local_44 == param_2)) {
        auStack_104[local_18 * 4] = local_40[3];
        auStack_104[local_18 * 4 + 2] = local_40[0];
        auStack_104[local_18 * 4 + 3] = 1;
        auStack_104[local_18 * 4 + 1] = local_48;
        local_18 = local_18 + 1;
      }
      if (local_58 == param_2) {
        if (local_60 == 0) {
          auStack_104[local_18 * 4] = local_40[3];
          auStack_104[local_18 * 4 + 2] = local_50;
          auStack_104[local_18 * 4 + 3] = 1;
          auStack_104[local_18 * 4 + 1] = local_5c;
          local_18 = local_18 + 1;
        }
        if (local_64 == 0) {
          auStack_104[local_18 * 4] = local_40[3];
          auStack_104[local_18 * 4 + 2] = local_54;
          auStack_104[local_18 * 4 + 3] = 1;
          auStack_104[local_18 * 4 + 1] = local_5c;
          local_18 = local_18 + 1;
        }
      }
      local_14 = local_14 + 1;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      UpdateEventATIInfo(auStack_104[local_10 * 4],auStack_104[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_104[local_10 * 4 + 1],auStack_104[local_10 * 4 + 2],
                 auStack_104[local_10 * 4 + 3],2);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventATI::ArrangeATIEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0xa1,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventATI::ArrangeATIEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}

```

---

## CheckAlreadyGetATIItem

```asm
// === 083f9f2e WongWork::EventATI::CheckAlreadyGetATIItem  [0x083f9f2e-0x83fa0ac] ===
 83f9f2e:	55                   	push   %ebp
 83f9f2f:	89 e5                	mov    %esp,%ebp
 83f9f31:	83 ec 28             	sub    $0x28,%esp
 83f9f34:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83f9f39:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83f9f40:	00 
 83f9f41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83f9f48:	00 
 83f9f49:	89 04 24             	mov    %eax,(%esp)
 83f9f4c:	e8 ed b2 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83f9f51:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83f9f54:	8b 45 0c             	mov    0xc(%ebp),%eax
 83f9f57:	89 44 24 04          	mov    %eax,0x4(%esp)
 83f9f5b:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 83f9f62:	e8 53 7b 2c 00       	call   86c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>
 83f9f67:	83 f8 02             	cmp    $0x2,%eax
 83f9f6a:	74 51                	je     83f9fbd <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x8f>
 83f9f6c:	83 f8 02             	cmp    $0x2,%eax
 83f9f6f:	7f 0a                	jg     83f9f7b <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x4d>
 83f9f71:	83 f8 01             	cmp    $0x1,%eax
 83f9f74:	74 18                	je     83f9f8e <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x60>
 83f9f76:	e9 c4 00 00 00       	jmp    83fa03f <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x111>
 83f9f7b:	83 f8 03             	cmp    $0x3,%eax
 83f9f7e:	74 69                	je     83f9fe9 <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0xbb>
 83f9f80:	83 f8 04             	cmp    $0x4,%eax
 83f9f83:	0f 84 8c 00 00 00    	je     83fa015 <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0xe7>
 83f9f89:	e9 b1 00 00 00       	jmp    83fa03f <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x111>
 83f9f8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f9f95:	00 
 83f9f96:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9f99:	89 04 24             	mov    %eax,(%esp)
 83f9f9c:	e8 aa f0 d0 ff       	call   810904b <_Z14NumberToStringji>
 83f9fa1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9fa5:	c7 44 24 04 d0 5d c3 	movl   $0x8c35dd0,0x4(%esp)
 83f9fac:	08 
 83f9fad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9fb0:	89 04 24             	mov    %eax,(%esp)
 83f9fb3:	e8 08 a2 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83f9fb8:	e9 82 00 00 00       	jmp    83fa03f <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x111>
 83f9fbd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f9fc4:	00 
 83f9fc5:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9fc8:	89 04 24             	mov    %eax,(%esp)
 83f9fcb:	e8 7b f0 d0 ff       	call   810904b <_Z14NumberToStringji>
 83f9fd0:	89 44 24 08          	mov    %eax,0x8(%esp)
 83f9fd4:	c7 44 24 04 04 5e c3 	movl   $0x8c35e04,0x4(%esp)
 83f9fdb:	08 
 83f9fdc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83f9fdf:	89 04 24             	mov    %eax,(%esp)
 83f9fe2:	e8 d9 a1 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83f9fe7:	eb 56                	jmp    83fa03f <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x111>
 83f9fe9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83f9ff0:	00 
 83f9ff1:	8b 45 08             	mov    0x8(%ebp),%eax
 83f9ff4:	89 04 24             	mov    %eax,(%esp)
 83f9ff7:	e8 4f f0 d0 ff       	call   810904b <_Z14NumberToStringji>
 83f9ffc:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa000:	c7 44 24 04 38 5e c3 	movl   $0x8c35e38,0x4(%esp)
 83fa007:	08 
 83fa008:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa00b:	89 04 24             	mov    %eax,(%esp)
 83fa00e:	e8 ad a1 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa013:	eb 2a                	jmp    83fa03f <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x111>
 83fa015:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa01c:	00 
 83fa01d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa020:	89 04 24             	mov    %eax,(%esp)
 83fa023:	e8 23 f0 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa028:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa02c:	c7 44 24 04 6c 5e c3 	movl   $0x8c35e6c,0x4(%esp)
 83fa033:	08 
 83fa034:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa037:	89 04 24             	mov    %eax,(%esp)
 83fa03a:	e8 81 a1 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa03f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa046:	00 
 83fa047:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa04a:	89 04 24             	mov    %eax,(%esp)
 83fa04d:	e8 d4 a2 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fa052:	83 f0 01             	xor    $0x1,%eax
 83fa055:	84 c0                	test   %al,%al
 83fa057:	74 07                	je     83fa060 <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x132>
 83fa059:	b8 00 00 00 00       	mov    $0x0,%eax
 83fa05e:	eb 4b                	jmp    83fa0ab <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x17d>
 83fa060:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fa067:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83fa06a:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa06e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa075:	00 
 83fa076:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa079:	89 04 24             	mov    %eax,(%esp)
 83fa07c:	e8 ab c8 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa081:	83 f0 01             	xor    $0x1,%eax
 83fa084:	84 c0                	test   %al,%al
 83fa086:	75 07                	jne    83fa08f <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x161>
 83fa088:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83fa08b:	85 c0                	test   %eax,%eax
 83fa08d:	75 07                	jne    83fa096 <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x168>
 83fa08f:	b8 01 00 00 00       	mov    $0x1,%eax
 83fa094:	eb 05                	jmp    83fa09b <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x16d>
 83fa096:	b8 00 00 00 00       	mov    $0x0,%eax
 83fa09b:	84 c0                	test   %al,%al
 83fa09d:	74 07                	je     83fa0a6 <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x178>
 83fa09f:	b8 00 00 00 00       	mov    $0x0,%eax
 83fa0a4:	eb 05                	jmp    83fa0ab <_ZN8WongWork8EventATI22CheckAlreadyGetATIItemEji+0x17d>
 83fa0a6:	b8 01 00 00 00       	mov    $0x1,%eax
 83fa0ab:	c9                   	leave
 83fa0ac:	c3                   	ret

```

```c
// WongWork::EventATI::CheckAlreadyGetATIItem @ 0x83f9f2e

/* WongWork::EventATI::CheckAlreadyGetATIItem(unsigned int, int) */

undefined4 WongWork::EventATI::CheckAlreadyGetATIItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = CWebEvent::GetItemType(2,param_2);
  if (iVar3 == 2) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect avata_check2 from event_ati_info where id=%s",uVar4);
  }
  else if (iVar3 < 3) {
    if (iVar3 == 1) {
      uVar4 = NumberToString(param_1,0);
      MySQL::set_query(local_10,"seLect avata_check1 from event_ati_info where id=%s",uVar4);
    }
  }
  else if (iVar3 == 3) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect item_check from event_ati_info where id=%s",uVar4);
  }
  else if (iVar3 == 4) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect cera_check from event_ati_info where id=%s",uVar4);
  }
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## UpdateEventATIInfo

```asm
// === 083fa0ad WongWork::EventATI::UpdateEventATIInfo  [0x083fa0ad-0x83fa1d2] ===
 83fa0ad:	55                   	push   %ebp
 83fa0ae:	89 e5                	mov    %esp,%ebp
 83fa0b0:	83 ec 28             	sub    $0x28,%esp
 83fa0b3:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fa0b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fa0bf:	00 
 83fa0c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa0c7:	00 
 83fa0c8:	89 04 24             	mov    %eax,(%esp)
 83fa0cb:	e8 6e b1 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fa0d0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fa0d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83fa0d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 83fa0da:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 83fa0e1:	e8 d4 79 2c 00       	call   86c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>
 83fa0e6:	83 f8 02             	cmp    $0x2,%eax
 83fa0e9:	74 51                	je     83fa13c <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x8f>
 83fa0eb:	83 f8 02             	cmp    $0x2,%eax
 83fa0ee:	7f 0a                	jg     83fa0fa <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x4d>
 83fa0f0:	83 f8 01             	cmp    $0x1,%eax
 83fa0f3:	74 18                	je     83fa10d <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x60>
 83fa0f5:	e9 c4 00 00 00       	jmp    83fa1be <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x111>
 83fa0fa:	83 f8 03             	cmp    $0x3,%eax
 83fa0fd:	74 69                	je     83fa168 <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0xbb>
 83fa0ff:	83 f8 04             	cmp    $0x4,%eax
 83fa102:	0f 84 8c 00 00 00    	je     83fa194 <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0xe7>
 83fa108:	e9 b1 00 00 00       	jmp    83fa1be <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x111>
 83fa10d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa114:	00 
 83fa115:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa118:	89 04 24             	mov    %eax,(%esp)
 83fa11b:	e8 2b ef d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa120:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa124:	c7 44 24 04 a0 5e c3 	movl   $0x8c35ea0,0x4(%esp)
 83fa12b:	08 
 83fa12c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa12f:	89 04 24             	mov    %eax,(%esp)
 83fa132:	e8 89 a0 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa137:	e9 82 00 00 00       	jmp    83fa1be <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x111>
 83fa13c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa143:	00 
 83fa144:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa147:	89 04 24             	mov    %eax,(%esp)
 83fa14a:	e8 fc ee d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa14f:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa153:	c7 44 24 04 ec 5e c3 	movl   $0x8c35eec,0x4(%esp)
 83fa15a:	08 
 83fa15b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa15e:	89 04 24             	mov    %eax,(%esp)
 83fa161:	e8 5a a0 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa166:	eb 56                	jmp    83fa1be <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x111>
 83fa168:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa16f:	00 
 83fa170:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa173:	89 04 24             	mov    %eax,(%esp)
 83fa176:	e8 d0 ee d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa17b:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa17f:	c7 44 24 04 38 5f c3 	movl   $0x8c35f38,0x4(%esp)
 83fa186:	08 
 83fa187:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa18a:	89 04 24             	mov    %eax,(%esp)
 83fa18d:	e8 2e a0 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa192:	eb 2a                	jmp    83fa1be <_ZN8WongWork8EventATI18UpdateEventATIInfoEji+0x111>
 83fa194:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa19b:	00 
 83fa19c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa19f:	89 04 24             	mov    %eax,(%esp)
 83fa1a2:	e8 a4 ee d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa1a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa1ab:	c7 44 24 04 80 5f c3 	movl   $0x8c35f80,0x4(%esp)
 83fa1b2:	08 
 83fa1b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa1b6:	89 04 24             	mov    %eax,(%esp)
 83fa1b9:	e8 02 a0 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa1be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa1c5:	00 
 83fa1c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa1c9:	89 04 24             	mov    %eax,(%esp)
 83fa1cc:	e8 55 a1 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fa1d1:	c9                   	leave
 83fa1d2:	c3                   	ret

```

```c
// WongWork::EventATI::UpdateEventATIInfo @ 0x83fa0ad

/* WongWork::EventATI::UpdateEventATIInfo(unsigned int, int) */

void WongWork::EventATI::UpdateEventATIInfo(uint param_1,int param_2)

{
  MySQL *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar1 = CWebEvent::GetItemType(2,param_2);
  if (iVar1 == 2) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,"upDate event_ati_info set avata_check2=unix_timestamp(now()) where id=%s"
                     ,uVar2);
  }
  else if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar2 = NumberToString(param_1,0);
      MySQL::set_query(this,
                       "upDate event_ati_info set avata_check1=unix_timestamp(now()) where id=%s",
                       uVar2);
    }
  }
  else if (iVar1 == 3) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,"upDate event_ati_info set item_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  else if (iVar1 == 4) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,"upDate event_ati_info set cera_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  MySQL::exec(this,true);
  return;
}

```

