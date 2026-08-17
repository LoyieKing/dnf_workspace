# Inter_AutoPunishRuleHackType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d4440 Inter_AutoPunishRuleHackType::dispatch_sig  [0x084d4440-0x84d46f9] ===
 84d4440:	55                   	push   %ebp
 84d4441:	89 e5                	mov    %esp,%ebp
 84d4443:	57                   	push   %edi
 84d4444:	56                   	push   %esi
 84d4445:	53                   	push   %ebx
 84d4446:	83 ec 7c             	sub    $0x7c,%esp
 84d4449:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84d444e:	89 04 24             	mov    %eax,(%esp)
 84d4451:	e8 46 16 dd ff       	call   82a5a9c <_ZN8WongWork26CAutoPunishRuleHackTypeMgr5resetEv>
 84d4456:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4459:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84d445c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d445f:	8b 50 08             	mov    0x8(%eax),%edx
 84d4462:	8b 40 04             	mov    0x4(%eax),%eax
 84d4465:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d4468:	8b 19                	mov    (%ecx),%ebx
 84d446a:	8b 0d d4 f7 41 09    	mov    0x941f7d4,%ecx
 84d4470:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d4474:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d4478:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d447c:	89 0c 24             	mov    %ecx,(%esp)
 84d447f:	e8 50 75 01 00       	call   84eb9d4 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr13setTotalTradeEjy>
 84d4484:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d4487:	8b 38                	mov    (%eax),%edi
 84d4489:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d448c:	8b 58 04             	mov    0x4(%eax),%ebx
 84d448f:	8b 70 08             	mov    0x8(%eax),%esi
 84d4492:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4499:	00 
 84d449a:	c7 44 24 08 85 35 00 	movl   $0x3585,0x8(%esp)
 84d44a1:	00 
 84d44a2:	c7 44 24 04 a0 c8 c8 	movl   $0x8c8c8a0,0x4(%esp)
 84d44a9:	08 
 84d44aa:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84d44ad:	89 04 24             	mov    %eax,(%esp)
 84d44b0:	e8 63 b2 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d44b5:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84d44b9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d44bd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d44c1:	c7 44 24 04 7c 8f c8 	movl   $0x8c88f7c,0x4(%esp)
 84d44c8:	08 
 84d44c9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84d44cc:	89 04 24             	mov    %eax,(%esp)
 84d44cf:	e8 b4 b2 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d44d4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d44db:	e9 be 01 00 00       	jmp    84d469e <_ZN28Inter_AutoPunishRuleHackType12dispatch_sigEP5CUserPci+0x25e>
 84d44e0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d44e3:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d44e6:	89 d0                	mov    %edx,%eax
 84d44e8:	c1 e0 02             	shl    $0x2,%eax
 84d44eb:	01 d0                	add    %edx,%eax
 84d44ed:	c1 e0 02             	shl    $0x2,%eax
 84d44f0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d44f3:	83 c0 20             	add    $0x20,%eax
 84d44f6:	8b 38                	mov    (%eax),%edi
 84d44f8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d44fb:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d44fe:	89 d0                	mov    %edx,%eax
 84d4500:	c1 e0 02             	shl    $0x2,%eax
 84d4503:	01 d0                	add    %edx,%eax
 84d4505:	c1 e0 02             	shl    $0x2,%eax
 84d4508:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d450b:	83 c0 1c             	add    $0x1c,%eax
 84d450e:	8b 00                	mov    (%eax),%eax
 84d4510:	89 45 98             	mov    %eax,-0x68(%ebp)
 84d4513:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d4516:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d4519:	89 d0                	mov    %edx,%eax
 84d451b:	c1 e0 02             	shl    $0x2,%eax
 84d451e:	01 d0                	add    %edx,%eax
 84d4520:	c1 e0 02             	shl    $0x2,%eax
 84d4523:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d4526:	83 c0 10             	add    $0x10,%eax
 84d4529:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84d452d:	0f b7 c0             	movzwl %ax,%eax
 84d4530:	89 45 9c             	mov    %eax,-0x64(%ebp)
 84d4533:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d4536:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d4539:	89 d0                	mov    %edx,%eax
 84d453b:	c1 e0 02             	shl    $0x2,%eax
 84d453e:	01 d0                	add    %edx,%eax
 84d4540:	c1 e0 02             	shl    $0x2,%eax
 84d4543:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d4546:	83 c0 10             	add    $0x10,%eax
 84d4549:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 84d454d:	0f b7 c0             	movzwl %ax,%eax
 84d4550:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84d4553:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d4556:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d4559:	89 d0                	mov    %edx,%eax
 84d455b:	c1 e0 02             	shl    $0x2,%eax
 84d455e:	01 d0                	add    %edx,%eax
 84d4560:	c1 e0 02             	shl    $0x2,%eax
 84d4563:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d4566:	83 c0 10             	add    $0x10,%eax
 84d4569:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84d456d:	0f b7 f0             	movzwl %ax,%esi
 84d4570:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d4573:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d4576:	89 d0                	mov    %edx,%eax
 84d4578:	c1 e0 02             	shl    $0x2,%eax
 84d457b:	01 d0                	add    %edx,%eax
 84d457d:	c1 e0 02             	shl    $0x2,%eax
 84d4580:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d4583:	83 c0 10             	add    $0x10,%eax
 84d4586:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84d458a:	0f b7 d8             	movzwl %ax,%ebx
 84d458d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d4590:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d4593:	89 d0                	mov    %edx,%eax
 84d4595:	c1 e0 02             	shl    $0x2,%eax
 84d4598:	01 d0                	add    %edx,%eax
 84d459a:	c1 e0 02             	shl    $0x2,%eax
 84d459d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d45a0:	83 c0 10             	add    $0x10,%eax
 84d45a3:	0f b7 00             	movzwl (%eax),%eax
 84d45a6:	0f b7 d0             	movzwl %ax,%edx
 84d45a9:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84d45ae:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84d45b2:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 84d45b5:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84d45b9:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 84d45bc:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84d45c0:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 84d45c3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d45c7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d45cb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d45cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d45d3:	89 04 24             	mov    %eax,(%esp)
 84d45d6:	e8 79 72 01 00       	call   84eb854 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr10setHackCntENS_13ENUM_HACKTYPEEjS1_jjjj>
 84d45db:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d45de:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d45e1:	89 d0                	mov    %edx,%eax
 84d45e3:	c1 e0 02             	shl    $0x2,%eax
 84d45e6:	01 d0                	add    %edx,%eax
 84d45e8:	c1 e0 02             	shl    $0x2,%eax
 84d45eb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d45ee:	83 c0 10             	add    $0x10,%eax
 84d45f1:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 84d45f5:	0f b7 c0             	movzwl %ax,%eax
 84d45f8:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84d45fb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d45fe:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d4601:	89 d0                	mov    %edx,%eax
 84d4603:	c1 e0 02             	shl    $0x2,%eax
 84d4606:	01 d0                	add    %edx,%eax
 84d4608:	c1 e0 02             	shl    $0x2,%eax
 84d460b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d460e:	83 c0 10             	add    $0x10,%eax
 84d4611:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84d4615:	0f b7 f8             	movzwl %ax,%edi
 84d4618:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d461b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d461e:	89 d0                	mov    %edx,%eax
 84d4620:	c1 e0 02             	shl    $0x2,%eax
 84d4623:	01 d0                	add    %edx,%eax
 84d4625:	c1 e0 02             	shl    $0x2,%eax
 84d4628:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d462b:	83 c0 10             	add    $0x10,%eax
 84d462e:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84d4632:	0f b7 f0             	movzwl %ax,%esi
 84d4635:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d4638:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d463b:	89 d0                	mov    %edx,%eax
 84d463d:	c1 e0 02             	shl    $0x2,%eax
 84d4640:	01 d0                	add    %edx,%eax
 84d4642:	c1 e0 02             	shl    $0x2,%eax
 84d4645:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d4648:	83 c0 10             	add    $0x10,%eax
 84d464b:	0f b7 00             	movzwl (%eax),%eax
 84d464e:	0f b7 d8             	movzwl %ax,%ebx
 84d4651:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4658:	00 
 84d4659:	c7 44 24 08 96 35 00 	movl   $0x3596,0x8(%esp)
 84d4660:	00 
 84d4661:	c7 44 24 04 a0 c8 c8 	movl   $0x8c8c8a0,0x4(%esp)
 84d4668:	08 
 84d4669:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84d466c:	89 04 24             	mov    %eax,(%esp)
 84d466f:	e8 a4 b0 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d4674:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84d4677:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d467b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84d467f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d4683:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d4687:	c7 44 24 04 b4 8f c8 	movl   $0x8c88fb4,0x4(%esp)
 84d468e:	08 
 84d468f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84d4692:	89 04 24             	mov    %eax,(%esp)
 84d4695:	e8 ee b0 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d469a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84d469e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d46a1:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84d46a5:	0f b7 c0             	movzwl %ax,%eax
 84d46a8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84d46ab:	0f 9f c0             	setg   %al
 84d46ae:	84 c0                	test   %al,%al
 84d46b0:	0f 85 2a fe ff ff    	jne    84d44e0 <_ZN28Inter_AutoPunishRuleHackType12dispatch_sigEP5CUserPci+0xa0>
 84d46b6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d46bd:	00 
 84d46be:	c7 44 24 08 99 35 00 	movl   $0x3599,0x8(%esp)
 84d46c5:	00 
 84d46c6:	c7 44 24 04 a0 c8 c8 	movl   $0x8c8c8a0,0x4(%esp)
 84d46cd:	08 
 84d46ce:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d46d1:	89 04 24             	mov    %eax,(%esp)
 84d46d4:	e8 3f b0 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d46d9:	c7 44 24 04 e6 8f c8 	movl   $0x8c88fe6,0x4(%esp)
 84d46e0:	08 
 84d46e1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d46e4:	89 04 24             	mov    %eax,(%esp)
 84d46e7:	e8 9c b0 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d46ec:	b8 00 00 00 00       	mov    $0x0,%eax
 84d46f1:	83 c4 7c             	add    $0x7c,%esp
 84d46f4:	5b                   	pop    %ebx
 84d46f5:	5e                   	pop    %esi
 84d46f6:	5f                   	pop    %edi
 84d46f7:	5d                   	pop    %ebp
 84d46f8:	c3                   	ret
 84d46f9:	90                   	nop

```

```c
// Inter_AutoPunishRuleHackType::dispatch_sig @ 0x84d4440

/* Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AutoPunishRuleHackType::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  uint *local_24;
  int local_20;
  
  WongWork::CAutoPunishRuleHackTypeMgr::reset(GlobalData::g_autoPunishRuleHackTypeMgr);
  local_24 = (uint *)param_3;
  WongWork::CAutoPunishRuleHackTypeMgr::setTotalTrade
            ((uint)GlobalData::g_autoPunishRuleHackTypeMgr,*(ulonglong *)param_3);
  uVar5 = *local_24;
  uVar3 = local_24[1];
  uVar4 = local_24[2];
  cMyTrace::cMyTrace(local_54,
                     "virtual int Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)",
                     0x3585,0);
  cMyTrace::operator()
            (local_54,"HackType Load Start. (TotalGold: %llu)(TotalCount: %d)",uVar3,uVar4,uVar5);
  for (local_20 = 0; local_20 < (int)(uint)(ushort)local_24[3]; local_20 = local_20 + 1) {
    WongWork::CAutoPunishRuleHackTypeMgr::setHackCnt
              (GlobalData::g_autoPunishRuleHackTypeMgr,(short)local_24[local_20 * 5 + 4],
               *(undefined2 *)((int)local_24 + local_20 * 0x14 + 0x12),
               (short)local_24[local_20 * 5 + 5],
               *(undefined2 *)((int)local_24 + local_20 * 0x14 + 0x16),
               (short)local_24[local_20 * 5 + 6],local_24[local_20 * 5 + 7],
               local_24[local_20 * 5 + 8]);
    uVar1 = *(ushort *)((int)local_24 + local_20 * 0x14 + 0x16);
    uVar5 = (uint)(ushort)local_24[local_20 * 5 + 5];
    uVar2 = *(ushort *)((int)local_24 + local_20 * 0x14 + 0x12);
    uVar3 = local_24[local_20 * 5 + 4];
    cMyTrace::cMyTrace(local_44,
                       "virtual int Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)",
                       0x3596,0);
    cMyTrace::operator()
              (local_44,"HackType Load (Type: %d -> %d)(SubType: %d -> %d)",(uint)(ushort)uVar3,
               (uint)uVar2,uVar5,(uint)uVar1);
  }
  uVar7 = 0;
  uVar6 = 0x3599;
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)",
                     0x3599,0);
  cMyTrace::operator()(local_34,"HackType Load End",uVar6,uVar7,uVar5);
  return 0;
}

```

