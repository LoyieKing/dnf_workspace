# TimerUpdateCompoundEmblemStatics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08639174 TimerUpdateCompoundEmblemStatics::dispatch_sig  [0x08639174-0x8639399] ===
 8639174:	55                   	push   %ebp
 8639175:	89 e5                	mov    %esp,%ebp
 8639177:	57                   	push   %edi
 8639178:	56                   	push   %esi
 8639179:	53                   	push   %ebx
 863917a:	83 ec 6c             	sub    $0x6c,%esp
 863917d:	e8 ed 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 8639182:	89 04 24             	mov    %eax,(%esp)
 8639185:	e8 6e 2b 00 00       	call   863bcf8 <_ZN24CCompoundEmblemStatistic13getTotalCountEv>
 863918a:	85 c0                	test   %eax,%eax
 863918c:	0f 95 c0             	setne  %al
 863918f:	84 c0                	test   %al,%al
 8639191:	0f 84 e3 01 00 00    	je     863937a <_ZN32TimerUpdateCompoundEmblemStatics12dispatch_sigEiij+0x206>
 8639197:	e8 d3 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 863919c:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 86391a3:	00 
 86391a4:	89 04 24             	mov    %eax,(%esp)
 86391a7:	e8 3e 2b 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86391ac:	89 45 b8             	mov    %eax,-0x48(%ebp)
 86391af:	e8 bb 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86391b4:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86391bb:	00 
 86391bc:	89 04 24             	mov    %eax,(%esp)
 86391bf:	e8 26 2b 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86391c4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 86391c7:	e8 a3 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86391cc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86391d3:	00 
 86391d4:	89 04 24             	mov    %eax,(%esp)
 86391d7:	e8 0e 2b 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86391dc:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86391df:	e8 8b 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86391e4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86391eb:	00 
 86391ec:	89 04 24             	mov    %eax,(%esp)
 86391ef:	e8 f6 2a 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86391f4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86391f7:	e8 73 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86391fc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639203:	00 
 8639204:	89 04 24             	mov    %eax,(%esp)
 8639207:	e8 de 2a 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 863920c:	89 c7                	mov    %eax,%edi
 863920e:	e8 5c 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 8639213:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863921a:	00 
 863921b:	89 04 24             	mov    %eax,(%esp)
 863921e:	e8 c7 2a 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 8639223:	89 c6                	mov    %eax,%esi
 8639225:	e8 45 6b fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 863922a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8639231:	00 
 8639232:	89 04 24             	mov    %eax,(%esp)
 8639235:	e8 b0 2a 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 863923a:	89 c3                	mov    %eax,%ebx
 863923c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8639243:	00 
 8639244:	c7 44 24 08 aa 11 00 	movl   $0x11aa,0x8(%esp)
 863924b:	00 
 863924c:	c7 44 24 04 60 81 ce 	movl   $0x8ce8160,0x4(%esp)
 8639253:	08 
 8639254:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8639257:	89 04 24             	mov    %eax,(%esp)
 863925a:	e8 b9 64 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863925f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8639262:	89 44 24 20          	mov    %eax,0x20(%esp)
 8639266:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8639269:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 863926d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8639270:	89 44 24 18          	mov    %eax,0x18(%esp)
 8639274:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8639277:	89 54 24 14          	mov    %edx,0x14(%esp)
 863927b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 863927f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8639283:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8639287:	c7 44 24 04 64 6f ce 	movl   $0x8ce6f64,0x4(%esp)
 863928e:	08 
 863928f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8639292:	89 04 24             	mov    %eax,(%esp)
 8639295:	e8 ee 64 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863929a:	e8 d0 6a fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 863929f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 86392a6:	00 
 86392a7:	89 04 24             	mov    %eax,(%esp)
 86392aa:	e8 3b 2a 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86392af:	89 c6                	mov    %eax,%esi
 86392b1:	e8 b9 6a fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86392b6:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86392bd:	00 
 86392be:	89 04 24             	mov    %eax,(%esp)
 86392c1:	e8 24 2a 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86392c6:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86392c9:	e8 a1 6a fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86392ce:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86392d5:	00 
 86392d6:	89 04 24             	mov    %eax,(%esp)
 86392d9:	e8 0c 2a 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86392de:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86392e1:	e8 89 6a fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86392e6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86392ed:	00 
 86392ee:	89 04 24             	mov    %eax,(%esp)
 86392f1:	e8 f4 29 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 86392f6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86392f9:	e8 71 6a fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 86392fe:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8639305:	00 
 8639306:	89 04 24             	mov    %eax,(%esp)
 8639309:	e8 dc 29 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 863930e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8639311:	e8 59 6a fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 8639316:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863931d:	00 
 863931e:	89 04 24             	mov    %eax,(%esp)
 8639321:	e8 c4 29 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 8639326:	89 c7                	mov    %eax,%edi
 8639328:	e8 42 6a fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 863932d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8639334:	00 
 8639335:	89 04 24             	mov    %eax,(%esp)
 8639338:	e8 ad 29 00 00       	call   863bcea <_ZN24CCompoundEmblemStatistic13getGradeCountEi>
 863933d:	89 c3                	mov    %eax,%ebx
 863933f:	e8 3d 2e a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8639344:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 863934a:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 863934e:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8639351:	89 54 24 18          	mov    %edx,0x18(%esp)
 8639355:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8639358:	89 54 24 14          	mov    %edx,0x14(%esp)
 863935c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 863935f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8639363:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8639366:	89 54 24 0c          	mov    %edx,0xc(%esp)
 863936a:	89 7c 24 08          	mov    %edi,0x8(%esp)
 863936e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8639372:	89 04 24             	mov    %eax,(%esp)
 8639375:	e8 72 0a e0 ff       	call   8439dec <_ZN30DB_UpdateCompoundEmblemStatics11makeRequestEijjjjjjj>
 863937a:	e8 1b 00 00 00       	call   863939a <_ZN32TimerUpdateCompoundEmblemStatics15registNextTimerEv>
 863937f:	e8 eb 69 fd ff       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 8639384:	89 04 24             	mov    %eax,(%esp)
 8639387:	e8 a2 29 00 00       	call   863bd2e <_ZN24CCompoundEmblemStatistic5clearEv>
 863938c:	b8 01 00 00 00       	mov    $0x1,%eax
 8639391:	83 c4 6c             	add    $0x6c,%esp
 8639394:	5b                   	pop    %ebx
 8639395:	5e                   	pop    %esi
 8639396:	5f                   	pop    %edi
 8639397:	5d                   	pop    %ebp
 8639398:	c3                   	ret
 8639399:	90                   	nop

```

```c
// TimerUpdateCompoundEmblemStatics::dispatch_sig @ 0x8639174

/* TimerUpdateCompoundEmblemStatics::dispatch_sig(int, int, unsigned int) */

undefined4 TimerUpdateCompoundEmblemStatics::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CCompoundEmblemStatistic *pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  cMyTrace local_2c [28];
  
  pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
  iVar2 = CCompoundEmblemStatistic::getTotalCount(pCVar1);
  if (iVar2 != 0) {
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar3 = CCompoundEmblemStatistic::getGradeCount(pCVar1,6);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar4 = CCompoundEmblemStatistic::getGradeCount(pCVar1,5);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar5 = CCompoundEmblemStatistic::getGradeCount(pCVar1,4);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar6 = CCompoundEmblemStatistic::getGradeCount(pCVar1,3);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar7 = CCompoundEmblemStatistic::getGradeCount(pCVar1,2);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar8 = CCompoundEmblemStatistic::getGradeCount(pCVar1,1);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar9 = CCompoundEmblemStatistic::getGradeCount(pCVar1,0);
    cMyTrace::cMyTrace(local_2c,
                       "virtual bool TimerUpdateCompoundEmblemStatics::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x11aa,0);
    cMyTrace::operator()
              (local_2c,
               "DNF Compound Emblem Statistics (grade 0 : %d)(grade 1 : %d)(grade 2 : %d)(grade 3 : %d)(grade 4 : %d)(grade 5 : %d)(grade 6 : %d)"
               ,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar10 = CCompoundEmblemStatistic::getGradeCount(pCVar1,6);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar11 = CCompoundEmblemStatistic::getGradeCount(pCVar1,5);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar12 = CCompoundEmblemStatistic::getGradeCount(pCVar1,4);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar13 = CCompoundEmblemStatistic::getGradeCount(pCVar1,3);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar14 = CCompoundEmblemStatistic::getGradeCount(pCVar1,2);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar15 = CCompoundEmblemStatistic::getGradeCount(pCVar1,1);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar16 = CCompoundEmblemStatistic::getGradeCount(pCVar1,0);
    iVar2 = G_CEnvironment();
    DB_UpdateCompoundEmblemStatics::makeRequest
              (*(int *)(iVar2 + 0x1b0),uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10);
  }
  registNextTimer();
  pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
  CCompoundEmblemStatistic::clear(pCVar1);
  return 1;
}

```

---

## registNextTimer

```asm
// === 0863939a TimerUpdateCompoundEmblemStatics::registNextTimer  [0x0863939a-0x863949d] ===
 863939a:	55                   	push   %ebp
 863939b:	89 e5                	mov    %esp,%ebp
 863939d:	53                   	push   %ebx
 863939e:	83 ec 64             	sub    $0x64,%esp
 86393a1:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86393a8:	e8 f1 28 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86393ad:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86393b0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86393b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86393b7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86393ba:	89 04 24             	mov    %eax,(%esp)
 86393bd:	e8 9e 4f a4 ff       	call   807e360 <localtime_r@plt>
 86393c2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86393c5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86393c8:	8b 40 08             	mov    0x8(%eax),%eax
 86393cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86393ce:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86393d1:	c7 40 08 05 00 00 00 	movl   $0x5,0x8(%eax)
 86393d8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86393db:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 86393e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86393e5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86393eb:	e8 91 2d a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86393f0:	8b 88 b0 01 00 00    	mov    0x1b0(%eax),%ecx
 86393f6:	ba 89 88 88 88       	mov    $0x88888889,%edx
 86393fb:	89 c8                	mov    %ecx,%eax
 86393fd:	f7 ea                	imul   %edx
 86393ff:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8639402:	89 c2                	mov    %eax,%edx
 8639404:	c1 fa 04             	sar    $0x4,%edx
 8639407:	89 c8                	mov    %ecx,%eax
 8639409:	c1 f8 1f             	sar    $0x1f,%eax
 863940c:	89 d3                	mov    %edx,%ebx
 863940e:	29 c3                	sub    %eax,%ebx
 8639410:	89 d8                	mov    %ebx,%eax
 8639412:	8d 14 00             	lea    (%eax,%eax,1),%edx
 8639415:	89 d0                	mov    %edx,%eax
 8639417:	c1 e0 04             	shl    $0x4,%eax
 863941a:	29 d0                	sub    %edx,%eax
 863941c:	89 ca                	mov    %ecx,%edx
 863941e:	29 c2                	sub    %eax,%edx
 8639420:	89 d0                	mov    %edx,%eax
 8639422:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8639425:	89 42 04             	mov    %eax,0x4(%edx)
 8639428:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863942b:	89 04 24             	mov    %eax,(%esp)
 863942e:	e8 ed 53 a4 ff       	call   807e820 <mktime@plt>
 8639433:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8639436:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8639439:	8b 40 08             	mov    0x8(%eax),%eax
 863943c:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 863943f:	7f 07                	jg     8639448 <_ZN32TimerUpdateCompoundEmblemStatics15registNextTimerEv+0xae>
 8639441:	81 45 f0 80 51 01 00 	addl   $0x15180,-0x10(%ebp)
 8639448:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863944b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863944e:	89 d1                	mov    %edx,%ecx
 8639450:	29 c1                	sub    %eax,%ecx
 8639452:	89 c8                	mov    %ecx,%eax
 8639454:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8639457:	e8 20 d0 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863945c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8639463:	00 
 8639464:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863946b:	00 
 863946c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863946f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8639473:	c7 44 24 0c 89 00 00 	movl   $0x89,0xc(%esp)
 863947a:	00 
 863947b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8639482:	00 
 8639483:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863948a:	00 
 863948b:	89 04 24             	mov    %eax,(%esp)
 863948e:	e8 83 79 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8639493:	b8 01 00 00 00       	mov    $0x1,%eax
 8639498:	83 c4 64             	add    $0x64,%esp
 863949b:	5b                   	pop    %ebx
 863949c:	5d                   	pop    %ebp
 863949d:	c3                   	ret

```

```c
// TimerUpdateCompoundEmblemStatics::registNextTimer @ 0x863939a

/* TimerUpdateCompoundEmblemStatics::registNextTimer() */

undefined4 TimerUpdateCompoundEmblemStatics::registNextTimer(void)

{
  int iVar1;
  TimerQueue *pTVar2;
  tm local_4c;
  int local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_hour;
  local_1c->tm_hour = 5;
  local_1c->tm_min = 0;
  local_1c->tm_sec = 0;
  iVar1 = G_CEnvironment();
  local_1c->tm_min = *(int *)(iVar1 + 0x1b0) % 0x1e;
  local_14 = mktime(local_1c);
  if (local_1c->tm_hour <= local_18) {
    local_14 = local_14 + 0x15180;
  }
  local_10 = local_14 - local_20;
  pTVar2 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar2,2,0,0x89,local_10,0,0);
  return 1;
}

```

