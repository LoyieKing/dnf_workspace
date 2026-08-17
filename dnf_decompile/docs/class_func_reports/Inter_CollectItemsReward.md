# Inter_CollectItemsReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e71ee Inter_CollectItemsReward::dispatch_sig  [0x084e71ee-0x84e7597] ===
 84e71ee:	55                   	push   %ebp
 84e71ef:	89 e5                	mov    %esp,%ebp
 84e71f1:	57                   	push   %edi
 84e71f2:	56                   	push   %esi
 84e71f3:	53                   	push   %ebx
 84e71f4:	81 ec bc 01 00 00    	sub    $0x1bc,%esp
 84e71fa:	8b 45 10             	mov    0x10(%ebp),%eax
 84e71fd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e7200:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7203:	89 04 24             	mov    %eax,(%esp)
 84e7206:	e8 27 92 c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e720b:	85 c0                	test   %eax,%eax
 84e720d:	0f 94 c0             	sete   %al
 84e7210:	84 c0                	test   %al,%al
 84e7212:	74 0a                	je     84e721e <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x30>
 84e7214:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7219:	e9 6f 03 00 00       	jmp    84e758d <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x39f>
 84e721e:	8d 85 75 ff ff ff    	lea    -0x8b(%ebp),%eax
 84e7224:	89 04 24             	mov    %eax,(%esp)
 84e7227:	e8 28 46 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84e722c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84e7233:	8d 95 75 fe ff ff    	lea    -0x18b(%ebp),%edx
 84e7239:	bb 00 01 00 00       	mov    $0x100,%ebx
 84e723e:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7243:	89 d1                	mov    %edx,%ecx
 84e7245:	83 e1 01             	and    $0x1,%ecx
 84e7248:	85 c9                	test   %ecx,%ecx
 84e724a:	74 08                	je     84e7254 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x66>
 84e724c:	88 02                	mov    %al,(%edx)
 84e724e:	83 c2 01             	add    $0x1,%edx
 84e7251:	83 eb 01             	sub    $0x1,%ebx
 84e7254:	89 d1                	mov    %edx,%ecx
 84e7256:	83 e1 02             	and    $0x2,%ecx
 84e7259:	85 c9                	test   %ecx,%ecx
 84e725b:	74 09                	je     84e7266 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x78>
 84e725d:	66 89 02             	mov    %ax,(%edx)
 84e7260:	83 c2 02             	add    $0x2,%edx
 84e7263:	83 eb 02             	sub    $0x2,%ebx
 84e7266:	89 d9                	mov    %ebx,%ecx
 84e7268:	c1 e9 02             	shr    $0x2,%ecx
 84e726b:	89 d7                	mov    %edx,%edi
 84e726d:	f3 ab                	rep stos %eax,%es:(%edi)
 84e726f:	89 fa                	mov    %edi,%edx
 84e7271:	89 d9                	mov    %ebx,%ecx
 84e7273:	83 e1 02             	and    $0x2,%ecx
 84e7276:	85 c9                	test   %ecx,%ecx
 84e7278:	74 06                	je     84e7280 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x92>
 84e727a:	66 89 02             	mov    %ax,(%edx)
 84e727d:	83 c2 02             	add    $0x2,%edx
 84e7280:	89 d9                	mov    %ebx,%ecx
 84e7282:	83 e1 01             	and    $0x1,%ecx
 84e7285:	85 c9                	test   %ecx,%ecx
 84e7287:	74 05                	je     84e728e <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0xa0>
 84e7289:	88 02                	mov    %al,(%edx)
 84e728b:	83 c2 01             	add    $0x1,%edx
 84e728e:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 84e7291:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 84e7296:	ba 00 00 00 00       	mov    $0x0,%edx
 84e729b:	89 c1                	mov    %eax,%ecx
 84e729d:	83 e1 02             	and    $0x2,%ecx
 84e72a0:	85 c9                	test   %ecx,%ecx
 84e72a2:	74 09                	je     84e72ad <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0xbf>
 84e72a4:	66 89 10             	mov    %dx,(%eax)
 84e72a7:	83 c0 02             	add    $0x2,%eax
 84e72aa:	83 eb 02             	sub    $0x2,%ebx
 84e72ad:	89 de                	mov    %ebx,%esi
 84e72af:	83 e6 fc             	and    $0xfffffffc,%esi
 84e72b2:	b9 00 00 00 00       	mov    $0x0,%ecx
 84e72b7:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 84e72ba:	83 c1 04             	add    $0x4,%ecx
 84e72bd:	39 f1                	cmp    %esi,%ecx
 84e72bf:	72 f6                	jb     84e72b7 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0xc9>
 84e72c1:	01 c8                	add    %ecx,%eax
 84e72c3:	89 d9                	mov    %ebx,%ecx
 84e72c5:	83 e1 02             	and    $0x2,%ecx
 84e72c8:	85 c9                	test   %ecx,%ecx
 84e72ca:	74 06                	je     84e72d2 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0xe4>
 84e72cc:	66 89 10             	mov    %dx,(%eax)
 84e72cf:	83 c0 02             	add    $0x2,%eax
 84e72d2:	89 d9                	mov    %ebx,%ecx
 84e72d4:	83 e1 01             	and    $0x1,%ecx
 84e72d7:	85 c9                	test   %ecx,%ecx
 84e72d9:	74 05                	je     84e72e0 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0xf2>
 84e72db:	88 10                	mov    %dl,(%eax)
 84e72dd:	83 c0 01             	add    $0x1,%eax
 84e72e0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e72e3:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e72e7:	0f b6 c0             	movzbl %al,%eax
 84e72ea:	83 f8 01             	cmp    $0x1,%eax
 84e72ed:	74 79                	je     84e7368 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x17a>
 84e72ef:	83 f8 02             	cmp    $0x2,%eax
 84e72f2:	0f 84 d5 00 00 00    	je     84e73cd <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x1df>
 84e72f8:	85 c0                	test   %eax,%eax
 84e72fa:	0f 85 30 01 00 00    	jne    84e7430 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x242>
 84e7300:	c7 85 77 ff ff ff d7 	movl   $0x21d7,-0x89(%ebp)
 84e7307:	21 00 00 
 84e730a:	c7 85 7c ff ff ff 01 	movl   $0x1,-0x84(%ebp)
 84e7311:	00 00 00 
 84e7314:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7317:	89 04 24             	mov    %eax,(%esp)
 84e731a:	e8 09 9d c1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84e731f:	89 c3                	mov    %eax,%ebx
 84e7321:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e7328:	00 
 84e7329:	c7 44 24 08 cf a2 c8 	movl   $0x8c8a2cf,0x8(%esp)
 84e7330:	08 
 84e7331:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e7338:	00 
 84e7339:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e7340:	e8 b9 e4 5b 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e7345:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84e7349:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e734d:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 84e7354:	00 
 84e7355:	8d 85 75 fe ff ff    	lea    -0x18b(%ebp),%eax
 84e735b:	89 04 24             	mov    %eax,(%esp)
 84e735e:	e8 b9 54 0a 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84e7363:	e9 c8 00 00 00       	jmp    84e7430 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x242>
 84e7368:	c7 85 77 ff ff ff d7 	movl   $0x21d7,-0x89(%ebp)
 84e736f:	21 00 00 
 84e7372:	c7 85 7c ff ff ff 01 	movl   $0x1,-0x84(%ebp)
 84e7379:	00 00 00 
 84e737c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e737f:	89 04 24             	mov    %eax,(%esp)
 84e7382:	e8 a1 9c c1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84e7387:	89 c3                	mov    %eax,%ebx
 84e7389:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e7390:	00 
 84e7391:	c7 44 24 08 e3 a2 c8 	movl   $0x8c8a2e3,0x8(%esp)
 84e7398:	08 
 84e7399:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e73a0:	00 
 84e73a1:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e73a8:	e8 51 e4 5b 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e73ad:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84e73b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e73b5:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 84e73bc:	00 
 84e73bd:	8d 85 75 fe ff ff    	lea    -0x18b(%ebp),%eax
 84e73c3:	89 04 24             	mov    %eax,(%esp)
 84e73c6:	e8 51 54 0a 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84e73cb:	eb 63                	jmp    84e7430 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x242>
 84e73cd:	c7 85 77 ff ff ff c8 	movl   $0x68c8,-0x89(%ebp)
 84e73d4:	68 00 00 
 84e73d7:	c7 85 7c ff ff ff 01 	movl   $0x1,-0x84(%ebp)
 84e73de:	00 00 00 
 84e73e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e73e4:	89 04 24             	mov    %eax,(%esp)
 84e73e7:	e8 3c 9c c1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84e73ec:	89 c3                	mov    %eax,%ebx
 84e73ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e73f5:	00 
 84e73f6:	c7 44 24 08 f7 a2 c8 	movl   $0x8c8a2f7,0x8(%esp)
 84e73fd:	08 
 84e73fe:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e7405:	00 
 84e7406:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e740d:	e8 ec e3 5b 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e7412:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84e7416:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e741a:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 84e7421:	00 
 84e7422:	8d 85 75 fe ff ff    	lea    -0x18b(%ebp),%eax
 84e7428:	89 04 24             	mov    %eax,(%esp)
 84e742b:	e8 ec 53 0a 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84e7430:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e7437:	00 
 84e7438:	c7 44 24 08 0b a3 c8 	movl   $0x8c8a30b,0x8(%esp)
 84e743f:	08 
 84e7440:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e7447:	00 
 84e7448:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84e744f:	e8 aa e3 5b 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84e7454:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 84e745b:	00 
 84e745c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7460:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 84e7463:	89 04 24             	mov    %eax,(%esp)
 84e7466:	e8 65 64 b9 ff       	call   807d8d0 <strncpy@plt>
 84e746b:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 84e7471:	89 c3                	mov    %eax,%ebx
 84e7473:	e8 23 4d be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e7478:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e747c:	89 04 24             	mov    %eax,(%esp)
 84e747f:	e8 ae 85 e7 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84e7484:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e7487:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84e748b:	75 0a                	jne    84e7497 <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x2a9>
 84e748d:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7492:	e9 f6 00 00 00       	jmp    84e758d <_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci+0x39f>
 84e7497:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e749a:	8b 00                	mov    (%eax),%eax
 84e749c:	83 c0 08             	add    $0x8,%eax
 84e749f:	8b 10                	mov    (%eax),%edx
 84e74a1:	8d 85 75 ff ff ff    	lea    -0x8b(%ebp),%eax
 84e74a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e74ab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e74ae:	89 04 24             	mov    %eax,(%esp)
 84e74b1:	ff d2                	call   *%edx
 84e74b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e74b6:	89 04 24             	mov    %eax,(%esp)
 84e74b9:	e8 d2 47 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e74be:	89 c3                	mov    %eax,%ebx
 84e74c0:	8d 85 75 fe ff ff    	lea    -0x18b(%ebp),%eax
 84e74c6:	89 04 24             	mov    %eax,(%esp)
 84e74c9:	e8 e2 6e b9 ff       	call   807e3b0 <strlen@plt>
 84e74ce:	89 c6                	mov    %eax,%esi
 84e74d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e74d3:	89 04 24             	mov    %eax,(%esp)
 84e74d6:	e8 73 47 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e74db:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84e74e2:	00 
 84e74e3:	c7 44 24 20 01 00 00 	movl   $0x1,0x20(%esp)
 84e74ea:	00 
 84e74eb:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84e74ef:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84e74f6:	00 
 84e74f7:	89 74 24 14          	mov    %esi,0x14(%esp)
 84e74fb:	8d 95 75 fe ff ff    	lea    -0x18b(%ebp),%edx
 84e7501:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e7505:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e7509:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e7510:	00 
 84e7511:	8d 85 75 ff ff ff    	lea    -0x8b(%ebp),%eax
 84e7517:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e751b:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 84e751e:	89 04 24             	mov    %eax,(%esp)
 84e7521:	e8 c2 e0 06 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84e7526:	8b bd 77 ff ff ff    	mov    -0x89(%ebp),%edi
 84e752c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e752f:	89 04 24             	mov    %eax,(%esp)
 84e7532:	e8 17 47 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e7537:	89 c6                	mov    %eax,%esi
 84e7539:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e753c:	89 04 24             	mov    %eax,(%esp)
 84e753f:	e8 2a 2e bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e7544:	89 c3                	mov    %eax,%ebx
 84e7546:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e754d:	00 
 84e754e:	c7 44 24 08 c0 69 00 	movl   $0x69c0,0x8(%esp)
 84e7555:	00 
 84e7556:	c7 44 24 04 60 b5 c8 	movl   $0x8c8b560,0x4(%esp)
 84e755d:	08 
 84e755e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e7561:	89 04 24             	mov    %eax,(%esp)
 84e7564:	e8 af 81 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e7569:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e756d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e7571:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e7575:	c7 44 24 04 20 a3 c8 	movl   $0x8c8a320,0x4(%esp)
 84e757c:	08 
 84e757d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e7580:	89 04 24             	mov    %eax,(%esp)
 84e7583:	e8 00 82 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e7588:	b8 00 00 00 00       	mov    $0x0,%eax
 84e758d:	81 c4 bc 01 00 00    	add    $0x1bc,%esp
 84e7593:	5b                   	pop    %ebx
 84e7594:	5e                   	pop    %esi
 84e7595:	5f                   	pop    %edi
 84e7596:	5d                   	pop    %ebp
 84e7597:	c3                   	ret

```

```c
// Inter_CollectItemsReward::dispatch_sig @ 0x84e71ee

/* WARNING: Removing unreachable block (ram,0x084e72db) */
/* Inter_CollectItemsReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CollectItemsReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *this;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_18f;
  char local_18e [255];
  Inven_Item local_8f [2];
  int local_8d;
  undefined4 local_88;
  char local_52 [30];
  cMyTrace local_34 [16];
  int local_24;
  int *local_20;
  
  bVar11 = 0;
  local_24 = param_3;
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    Inven_Item::Inven_Item(local_8f);
    local_20 = (int *)0x0;
    pcVar8 = &local_18f;
    uVar9 = 0x100;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_18f = '\0';
      pcVar8 = local_18e;
      uVar9 = 0xff;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (bVar10) {
      *pcVar8 = '\0';
    }
    pcVar8 = local_52;
    uVar9 = 0x1e;
    bVar10 = ((uint)pcVar8 & 2) != 0;
    if (bVar10) {
      local_52[0] = '\0';
      local_52[1] = '\0';
      pcVar8 = local_52 + 2;
      uVar9 = 0x1c;
    }
    uVar7 = 0;
    do {
      pcVar1 = pcVar8 + uVar7;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar9 & 0xfffffffc));
    if (!bVar10) {
      (pcVar8 + uVar7)[0] = '\0';
      (pcVar8 + uVar7)[1] = '\0';
    }
    cVar2 = *(char *)(local_24 + 0x12);
    if (cVar2 == '\x01') {
      local_8d = 0x21d7;
      local_88 = 1;
      uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_257",(bool *)0x0);
      OS_API::snprintf(&local_18f,0xff,pcVar8,uVar4);
    }
    else if (cVar2 == '\x02') {
      local_8d = 0x68c8;
      local_88 = 1;
      uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_259",(bool *)0x0);
      OS_API::snprintf(&local_18f,0xff,pcVar8,uVar4);
    }
    else if (cVar2 == '\0') {
      local_8d = 0x21d7;
      local_88 = 1;
      uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_258",(bool *)0x0);
      OS_API::snprintf(&local_18f,0xff,pcVar8,uVar4);
    }
    pcVar8 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_256",(bool *)0x0);
    strncpy(local_52,pcVar8,0x1d);
    iVar3 = local_8d;
    this = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(this,iVar3);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20,local_8f);
      uVar4 = CUser::GetServerGroup((CUser *)param_2);
      sVar5 = strlen(&local_18f);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_52,local_8f,0,uVar6,&local_18f,sVar5,0,uVar4,1,0);
      iVar3 = local_8d;
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Inter_CollectItemsReward::dispatch_sig(CUser*, char*, int)",
                         0x69c0,0);
      cMyTrace::operator()
                (local_34,"[collect items]reward: m_id(), charac_no(), reward()",uVar6,uVar4,iVar3);
    }
  }
  return 0;
}

```

