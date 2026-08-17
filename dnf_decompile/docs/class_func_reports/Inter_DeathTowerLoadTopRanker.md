# Inter_DeathTowerLoadTopRanker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d3364 Inter_DeathTowerLoadTopRanker::dispatch_sig  [0x084d3364-0x84d347d] ===
 84d3364:	55                   	push   %ebp
 84d3365:	89 e5                	mov    %esp,%ebp
 84d3367:	57                   	push   %edi
 84d3368:	56                   	push   %esi
 84d3369:	53                   	push   %ebx
 84d336a:	83 ec 4c             	sub    $0x4c,%esp
 84d336d:	8b 45 10             	mov    0x10(%ebp),%eax
 84d3370:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84d3373:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d3376:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84d337a:	84 c0                	test   %al,%al
 84d337c:	75 2b                	jne    84d33a9 <_ZN29Inter_DeathTowerLoadTopRanker12dispatch_sigEP5CUserPci+0x45>
 84d337e:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 84d3385:	eb 17                	jmp    84d339e <_ZN29Inter_DeathTowerLoadTopRanker12dispatch_sigEP5CUserPci+0x3a>
 84d3387:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d338a:	89 04 24             	mov    %eax,(%esp)
 84d338d:	e8 ba 43 dd ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 84d3392:	89 04 24             	mov    %eax,(%esp)
 84d3395:	e8 fa 51 f9 ff       	call   8468594 <_ZN8WongWork18CDeathTowerRanking12resetRankingEv>
 84d339a:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84d339e:	83 7d e0 04          	cmpl   $0x4,-0x20(%ebp)
 84d33a2:	0f 96 c0             	setbe  %al
 84d33a5:	84 c0                	test   %al,%al
 84d33a7:	75 de                	jne    84d3387 <_ZN29Inter_DeathTowerLoadTopRanker12dispatch_sigEP5CUserPci+0x23>
 84d33a9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d33b0:	e9 a9 00 00 00       	jmp    84d345e <_ZN29Inter_DeathTowerLoadTopRanker12dispatch_sigEP5CUserPci+0xfa>
 84d33b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d33b8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84d33bb:	6b c0 6c             	imul   $0x6c,%eax,%eax
 84d33be:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84d33c1:	05 10 10 00 00       	add    $0x1010,%eax
 84d33c6:	8b 00                	mov    (%eax),%eax
 84d33c8:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84d33cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d33ce:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84d33d1:	6b c0 6c             	imul   $0x6c,%eax,%eax
 84d33d4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84d33d7:	05 0c 10 00 00       	add    $0x100c,%eax
 84d33dc:	8b 38                	mov    (%eax),%edi
 84d33de:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d33e1:	6b c0 6c             	imul   $0x6c,%eax,%eax
 84d33e4:	05 a0 0f 00 00       	add    $0xfa0,%eax
 84d33e9:	03 45 dc             	add    -0x24(%ebp),%eax
 84d33ec:	83 c0 10             	add    $0x10,%eax
 84d33ef:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84d33f2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d33f5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d33f8:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 84d33fd:	0f b7 f0             	movzwl %ax,%esi
 84d3400:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3403:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84d3406:	6b c0 6c             	imul   $0x6c,%eax,%eax
 84d3409:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84d340c:	05 a0 0f 00 00       	add    $0xfa0,%eax
 84d3411:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84d3415:	0f b7 d8             	movzwl %ax,%ebx
 84d3418:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d341b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84d341e:	6b c0 6c             	imul   $0x6c,%eax,%eax
 84d3421:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84d3424:	05 a0 0f 00 00       	add    $0xfa0,%eax
 84d3429:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84d342d:	0f b7 c0             	movzwl %ax,%eax
 84d3430:	89 04 24             	mov    %eax,(%esp)
 84d3433:	e8 14 43 dd ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 84d3438:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84d343b:	89 54 24 14          	mov    %edx,0x14(%esp)
 84d343f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84d3443:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84d3446:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d344a:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d344e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d3452:	89 04 24             	mov    %eax,(%esp)
 84d3455:	e8 ba 51 f9 ff       	call   8468614 <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj>
 84d345a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84d345e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d3461:	8b 00                	mov    (%eax),%eax
 84d3463:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84d3466:	0f 97 c0             	seta   %al
 84d3469:	84 c0                	test   %al,%al
 84d346b:	0f 85 44 ff ff ff    	jne    84d33b5 <_ZN29Inter_DeathTowerLoadTopRanker12dispatch_sigEP5CUserPci+0x51>
 84d3471:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3476:	83 c4 4c             	add    $0x4c,%esp
 84d3479:	5b                   	pop    %ebx
 84d347a:	5e                   	pop    %esi
 84d347b:	5f                   	pop    %edi
 84d347c:	5d                   	pop    %ebp
 84d347d:	c3                   	ret

```

```c
// Inter_DeathTowerLoadTopRanker::dispatch_sig @ 0x84d3364

/* Inter_DeathTowerLoadTopRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DeathTowerLoadTopRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  CDeathTowerRanking *pCVar5;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)(param_3 + 4) == '\0') {
    for (local_24 = 1; local_24 < 5; local_24 = local_24 + 1) {
      pCVar5 = (CDeathTowerRanking *)WongWork::CDeathTowerRanking::getRankTable(local_24);
      WongWork::CDeathTowerRanking::resetRanking(pCVar5);
    }
  }
  for (local_20 = 0; local_20 < *(uint *)param_3; local_20 = local_20 + 1) {
    uVar3 = *(uint *)(param_3 + local_20 * 0x6c + 0x1010);
    uVar4 = *(uint *)(param_3 + local_20 * 0x6c + 0x100c);
    uVar1 = *(ushort *)(param_3 + 6 + local_20 * 2);
    uVar2 = *(ushort *)(param_3 + local_20 * 0x6c + 0xfac);
    pCVar5 = (CDeathTowerRanking *)
             WongWork::CDeathTowerRanking::getRankTable
                       ((uint)*(ushort *)(param_3 + local_20 * 0x6c + 0xfae));
    WongWork::CDeathTowerRanking::registRanker
              (pCVar5,(uint)uVar2,(uint)uVar1,
               (stDeathTowerRecordMemberInfo_t *)(local_20 * 0x6c + param_3 + 0xfb0),uVar4,uVar3);
  }
  return 0;
}

```

