# Inter_MonitorDeathTowerRanking

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d3290 Inter_MonitorDeathTowerRanking::dispatch_sig  [0x084d3290-0x84d3349] ===
 84d3290:	55                   	push   %ebp
 84d3291:	89 e5                	mov    %esp,%ebp
 84d3293:	57                   	push   %edi
 84d3294:	56                   	push   %esi
 84d3295:	53                   	push   %ebx
 84d3296:	83 ec 2c             	sub    $0x2c,%esp
 84d3299:	8b 45 10             	mov    0x10(%ebp),%eax
 84d329c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84d329f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84d32a6:	e9 80 00 00 00       	jmp    84d332b <_ZN30Inter_MonitorDeathTowerRanking12dispatch_sigEP5CUserPci+0x9b>
 84d32ab:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d32b2:	eb 66                	jmp    84d331a <_ZN30Inter_MonitorDeathTowerRanking12dispatch_sigEP5CUserPci+0x8a>
 84d32b4:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d32b7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d32ba:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d32bd:	c1 e1 02             	shl    $0x2,%ecx
 84d32c0:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84d32c3:	83 c2 04             	add    $0x4,%edx
 84d32c6:	8b 44 90 02          	mov    0x2(%eax,%edx,4),%eax
 84d32ca:	85 c0                	test   %eax,%eax
 84d32cc:	74 48                	je     84d3316 <_ZN30Inter_MonitorDeathTowerRanking12dispatch_sigEP5CUserPci+0x86>
 84d32ce:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d32d1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d32d4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d32d7:	c1 e1 02             	shl    $0x2,%ecx
 84d32da:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84d32dd:	83 c2 04             	add    $0x4,%edx
 84d32e0:	8b 7c 90 02          	mov    0x2(%eax,%edx,4),%edi
 84d32e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d32e7:	89 04 24             	mov    %eax,(%esp)
 84d32ea:	e8 5f 89 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d32ef:	89 c3                	mov    %eax,%ebx
 84d32f1:	8b 75 e0             	mov    -0x20(%ebp),%esi
 84d32f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d32f7:	83 c0 01             	add    $0x1,%eax
 84d32fa:	89 04 24             	mov    %eax,(%esp)
 84d32fd:	e8 4a 44 dd ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 84d3302:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84d3306:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d330a:	89 74 24 04          	mov    %esi,0x4(%esp)
 84d330e:	89 04 24             	mov    %eax,(%esp)
 84d3311:	e8 c4 50 f9 ff       	call   84683da <_ZN8WongWork18CDeathTowerRanking13registRankingEjjj>
 84d3316:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84d331a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d331d:	83 f8 03             	cmp    $0x3,%eax
 84d3320:	0f 96 c0             	setbe  %al
 84d3323:	84 c0                	test   %al,%al
 84d3325:	75 8d                	jne    84d32b4 <_ZN30Inter_MonitorDeathTowerRanking12dispatch_sigEP5CUserPci+0x24>
 84d3327:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84d332b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d332e:	83 f8 04             	cmp    $0x4,%eax
 84d3331:	0f 96 c0             	setbe  %al
 84d3334:	84 c0                	test   %al,%al
 84d3336:	0f 85 6f ff ff ff    	jne    84d32ab <_ZN30Inter_MonitorDeathTowerRanking12dispatch_sigEP5CUserPci+0x1b>
 84d333c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3341:	83 c4 2c             	add    $0x2c,%esp
 84d3344:	5b                   	pop    %ebx
 84d3345:	5e                   	pop    %esi
 84d3346:	5f                   	pop    %edi
 84d3347:	5d                   	pop    %ebp
 84d3348:	c3                   	ret
 84d3349:	90                   	nop

```

```c
// Inter_MonitorDeathTowerRanking::dispatch_sig @ 0x84d3290

/* Inter_MonitorDeathTowerRanking::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorDeathTowerRanking::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  CDeathTowerRanking *this;
  undefined4 local_24;
  undefined4 local_20;
  
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      if (*(int *)(param_3 + 2 + (local_24 * 4 + local_20 + 4) * 4) != 0) {
        uVar1 = *(uint *)(param_3 + 2 + (local_24 * 4 + local_20 + 4) * 4);
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        this = (CDeathTowerRanking *)WongWork::CDeathTowerRanking::getRankTable(local_20 + 1);
        WongWork::CDeathTowerRanking::registRanking(this,local_24,uVar2,uVar1);
      }
    }
  }
  return 0;
}

```

