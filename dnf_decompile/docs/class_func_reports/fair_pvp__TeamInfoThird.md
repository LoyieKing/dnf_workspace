# fair_pvp__TeamInfoThird

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## GetTeamRating

```asm
// === 085627b2 fair_pvp::TeamInfoThird::GetTeamRating  [0x085627b2-0x8562833] ===
 85627b2:	55                   	push   %ebp
 85627b3:	89 e5                	mov    %esp,%ebp
 85627b5:	83 ec 14             	sub    $0x14,%esp
 85627b8:	b8 00 00 00 00       	mov    $0x0,%eax
 85627bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85627c0:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85627c7:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85627ce:	eb 3d                	jmp    856280d <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv+0x5b>
 85627d0:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85627d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85627d6:	c1 e2 04             	shl    $0x4,%edx
 85627d9:	01 d0                	add    %edx,%eax
 85627db:	83 c0 14             	add    $0x14,%eax
 85627de:	d9 00                	flds   (%eax)
 85627e0:	d9 45 f4             	flds   -0xc(%ebp)
 85627e3:	de c1                	faddp  %st,%st(1)
 85627e5:	d9 5d f4             	fstps  -0xc(%ebp)
 85627e8:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85627eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85627ee:	c1 e2 04             	shl    $0x4,%edx
 85627f1:	01 d0                	add    %edx,%eax
 85627f3:	83 c0 14             	add    $0x14,%eax
 85627f6:	d9 00                	flds   (%eax)
 85627f8:	d9 ee                	fldz
 85627fa:	d9 c9                	fxch   %st(1)
 85627fc:	da e9                	fucompp
 85627fe:	df e0                	fnstsw %ax
 8562800:	9e                   	sahf
 8562801:	7a 02                	jp     8562805 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv+0x53>
 8562803:	74 04                	je     8562809 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv+0x57>
 8562805:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8562809:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 856280d:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8562811:	0f 9e c0             	setle  %al
 8562814:	84 c0                	test   %al,%al
 8562816:	75 b8                	jne    85627d0 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv+0x1e>
 8562818:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
 856281c:	74 0b                	je     8562829 <_ZN8fair_pvp13TeamInfoThird13GetTeamRatingEv+0x77>
 856281e:	db 45 f8             	fildl  -0x8(%ebp)
 8562821:	d9 45 f4             	flds   -0xc(%ebp)
 8562824:	de f1                	fdivp  %st,%st(1)
 8562826:	d9 5d f4             	fstps  -0xc(%ebp)
 8562829:	8b 45 f4             	mov    -0xc(%ebp),%eax
 856282c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 856282f:	d9 45 ec             	flds   -0x14(%ebp)
 8562832:	c9                   	leave
 8562833:	c3                   	ret

```

```c
// fair_pvp::TeamInfoThird::GetTeamRating @ 0x85627b2

/* fair_pvp::TeamInfoThird::GetTeamRating() */

longdouble __thiscall fair_pvp::TeamInfoThird::GetTeamRating(TeamInfoThird *this)

{
  float local_10;
  int local_c;
  int local_8;
  
  local_10 = 0.0;
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    local_10 = local_10 + *(float *)(this + local_8 * 0x10 + 0x14);
    if (*(float *)(this + local_8 * 0x10 + 0x14) != 0.0) {
      local_c = local_c + 1;
    }
  }
  if (local_c != 0) {
    local_10 = local_10 / (float)local_c;
  }
  return (longdouble)local_10;
}

```

---

## SendToTeam

```asm
// === 0856274c fair_pvp::TeamInfoThird::SendToTeam  [0x0856274c-0x85627b1] ===
 856274c:	55                   	push   %ebp
 856274d:	89 e5                	mov    %esp,%ebp
 856274f:	83 ec 28             	sub    $0x28,%esp
 8562752:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8562759:	eb 49                	jmp    85627a4 <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard+0x58>
 856275b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 856275e:	8b 45 08             	mov    0x8(%ebp),%eax
 8562761:	c1 e2 04             	shl    $0x4,%edx
 8562764:	0f b6 44 02 0c       	movzbl 0xc(%edx,%eax,1),%eax
 8562769:	84 c0                	test   %al,%al
 856276b:	74 33                	je     85627a0 <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard+0x54>
 856276d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562770:	8b 45 08             	mov    0x8(%ebp),%eax
 8562773:	c1 e2 04             	shl    $0x4,%edx
 8562776:	01 d0                	add    %edx,%eax
 8562778:	83 c0 08             	add    $0x8,%eax
 856277b:	8b 00                	mov    (%eax),%eax
 856277d:	85 c0                	test   %eax,%eax
 856277f:	74 1f                	je     85627a0 <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard+0x54>
 8562781:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562784:	8b 45 08             	mov    0x8(%ebp),%eax
 8562787:	c1 e2 04             	shl    $0x4,%edx
 856278a:	01 d0                	add    %edx,%eax
 856278c:	83 c0 08             	add    $0x8,%eax
 856278f:	8b 00                	mov    (%eax),%eax
 8562791:	8b 55 0c             	mov    0xc(%ebp),%edx
 8562794:	89 54 24 04          	mov    %edx,0x4(%esp)
 8562798:	89 04 24             	mov    %eax,(%esp)
 856279b:	e8 1a 5e 0e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85627a0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85627a4:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85627a8:	0f 9e c0             	setle  %al
 85627ab:	84 c0                	test   %al,%al
 85627ad:	75 ac                	jne    856275b <_ZN8fair_pvp13TeamInfoThird10SendToTeamER11PacketGuard+0xf>
 85627af:	c9                   	leave
 85627b0:	c3                   	ret
 85627b1:	90                   	nop

```

```c
// fair_pvp::TeamInfoThird::SendToTeam @ 0x856274c

/* fair_pvp::TeamInfoThird::SendToTeam(PacketGuard&) */

void __thiscall fair_pvp::TeamInfoThird::SendToTeam(TeamInfoThird *this,PacketGuard *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[local_10 * 0x10 + 0xc] != (TeamInfoThird)0x0) &&
       (*(int *)(this + local_10 * 0x10 + 8) != 0)) {
      CUser::Send(*(CUser **)(this + local_10 * 0x10 + 8),param_1);
    }
  }
  return;
}

```

---

## add

```asm
// === 085625c6 fair_pvp::TeamInfoThird::add  [0x085625c6-0x85626a9] ===
 85625c6:	55                   	push   %ebp
 85625c7:	89 e5                	mov    %esp,%ebp
 85625c9:	53                   	push   %ebx
 85625ca:	83 ec 24             	sub    $0x24,%esp
 85625cd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85625d4:	e9 b7 00 00 00       	jmp    8562690 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser+0xca>
 85625d9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85625dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85625df:	c1 e2 04             	shl    $0x4,%edx
 85625e2:	0f b6 44 02 0c       	movzbl 0xc(%edx,%eax,1),%eax
 85625e7:	83 f0 01             	xor    $0x1,%eax
 85625ea:	84 c0                	test   %al,%al
 85625ec:	0f 84 9a 00 00 00    	je     856268c <_ZN8fair_pvp13TeamInfoThird3addEP5CUser+0xc6>
 85625f2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85625f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85625f8:	c1 e2 04             	shl    $0x4,%edx
 85625fb:	c6 44 02 0c 01       	movb   $0x1,0xc(%edx,%eax,1)
 8562600:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562603:	8b 45 08             	mov    0x8(%ebp),%eax
 8562606:	c1 e2 04             	shl    $0x4,%edx
 8562609:	01 d0                	add    %edx,%eax
 856260b:	8d 50 08             	lea    0x8(%eax),%edx
 856260e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562611:	89 02                	mov    %eax,(%edx)
 8562613:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8562616:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562619:	89 04 24             	mov    %eax,(%esp)
 856261c:	e8 ff b8 b9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8562621:	89 c2                	mov    %eax,%edx
 8562623:	8b 45 08             	mov    0x8(%ebp),%eax
 8562626:	89 d9                	mov    %ebx,%ecx
 8562628:	c1 e1 04             	shl    $0x4,%ecx
 856262b:	88 54 01 0d          	mov    %dl,0xd(%ecx,%eax,1)
 856262f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8562632:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562635:	89 04 24             	mov    %eax,(%esp)
 8562638:	e8 df 4d bf ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 856263d:	89 c2                	mov    %eax,%edx
 856263f:	8b 45 08             	mov    0x8(%ebp),%eax
 8562642:	89 d9                	mov    %ebx,%ecx
 8562644:	c1 e1 04             	shl    $0x4,%ecx
 8562647:	88 54 01 0e          	mov    %dl,0xe(%ecx,%eax,1)
 856264b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856264e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8562651:	89 04 24             	mov    %eax,(%esp)
 8562654:	e8 f1 c7 c3 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8562659:	8b 55 08             	mov    0x8(%ebp),%edx
 856265c:	89 d9                	mov    %ebx,%ecx
 856265e:	c1 e1 04             	shl    $0x4,%ecx
 8562661:	01 ca                	add    %ecx,%edx
 8562663:	83 c2 10             	add    $0x10,%edx
 8562666:	89 02                	mov    %eax,(%edx)
 8562668:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856266b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856266e:	89 04 24             	mov    %eax,(%esp)
 8562671:	e8 0e 68 00 00       	call   8568e84 <_ZN5CUser9GetRatingEv>
 8562676:	8b 45 08             	mov    0x8(%ebp),%eax
 8562679:	89 da                	mov    %ebx,%edx
 856267b:	c1 e2 04             	shl    $0x4,%edx
 856267e:	01 d0                	add    %edx,%eax
 8562680:	83 c0 14             	add    $0x14,%eax
 8562683:	d9 18                	fstps  (%eax)
 8562685:	b8 01 00 00 00       	mov    $0x1,%eax
 856268a:	eb 18                	jmp    85626a4 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser+0xde>
 856268c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8562690:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8562694:	0f 9e c0             	setle  %al
 8562697:	84 c0                	test   %al,%al
 8562699:	0f 85 3a ff ff ff    	jne    85625d9 <_ZN8fair_pvp13TeamInfoThird3addEP5CUser+0x13>
 856269f:	b8 00 00 00 00       	mov    $0x0,%eax
 85626a4:	83 c4 24             	add    $0x24,%esp
 85626a7:	5b                   	pop    %ebx
 85626a8:	5d                   	pop    %ebp
 85626a9:	c3                   	ret

```

```c
// fair_pvp::TeamInfoThird::add @ 0x85625c6

/* fair_pvp::TeamInfoThird::add(CUser*) */

undefined4 __thiscall fair_pvp::TeamInfoThird::add(TeamInfoThird *this,CUser *param_1)

{
  TeamInfoThird TVar1;
  undefined4 uVar2;
  longdouble lVar3;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    if (this[local_10 * 0x10 + 0xc] != (TeamInfoThird)0x1) break;
    local_10 = local_10 + 1;
  }
  this[local_10 * 0x10 + 0xc] = (TeamInfoThird)0x1;
  *(CUser **)(this + local_10 * 0x10 + 8) = param_1;
  TVar1 = (TeamInfoThird)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  this[local_10 * 0x10 + 0xd] = TVar1;
  TVar1 = (TeamInfoThird)CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  this[local_10 * 0x10 + 0xe] = TVar1;
  uVar2 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  *(undefined4 *)(this + local_10 * 0x10 + 0x10) = uVar2;
  lVar3 = (longdouble)CUser::GetRating(param_1);
  *(float *)(this + local_10 * 0x10 + 0x14) = (float)lVar3;
  return 1;
}

```

---

## del

```asm
// === 085626aa fair_pvp::TeamInfoThird::del  [0x085626aa-0x856270b] ===
 85626aa:	55                   	push   %ebp
 85626ab:	89 e5                	mov    %esp,%ebp
 85626ad:	83 ec 10             	sub    $0x10,%esp
 85626b0:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85626b7:	eb 40                	jmp    85626f9 <_ZN8fair_pvp13TeamInfoThird3delEP5CUser+0x4f>
 85626b9:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85626bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85626bf:	c1 e2 04             	shl    $0x4,%edx
 85626c2:	0f b6 44 02 0c       	movzbl 0xc(%edx,%eax,1),%eax
 85626c7:	84 c0                	test   %al,%al
 85626c9:	74 2a                	je     85626f5 <_ZN8fair_pvp13TeamInfoThird3delEP5CUser+0x4b>
 85626cb:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85626ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85626d1:	c1 e2 04             	shl    $0x4,%edx
 85626d4:	01 d0                	add    %edx,%eax
 85626d6:	83 c0 08             	add    $0x8,%eax
 85626d9:	8b 00                	mov    (%eax),%eax
 85626db:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85626de:	75 15                	jne    85626f5 <_ZN8fair_pvp13TeamInfoThird3delEP5CUser+0x4b>
 85626e0:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85626e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85626e6:	c1 e2 04             	shl    $0x4,%edx
 85626e9:	c6 44 02 0c 00       	movb   $0x0,0xc(%edx,%eax,1)
 85626ee:	b8 01 00 00 00       	mov    $0x1,%eax
 85626f3:	eb 14                	jmp    8562709 <_ZN8fair_pvp13TeamInfoThird3delEP5CUser+0x5f>
 85626f5:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85626f9:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 85626fd:	0f 9e c0             	setle  %al
 8562700:	84 c0                	test   %al,%al
 8562702:	75 b5                	jne    85626b9 <_ZN8fair_pvp13TeamInfoThird3delEP5CUser+0xf>
 8562704:	b8 00 00 00 00       	mov    $0x0,%eax
 8562709:	c9                   	leave
 856270a:	c3                   	ret
 856270b:	90                   	nop

```

```c
// fair_pvp::TeamInfoThird::del @ 0x85626aa

/* fair_pvp::TeamInfoThird::del(CUser*) */

undefined4 __thiscall fair_pvp::TeamInfoThird::del(TeamInfoThird *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if ((this[local_8 * 0x10 + 0xc] != (TeamInfoThird)0x0) &&
       (*(CUser **)(this + local_8 * 0x10 + 8) == param_1)) break;
    local_8 = local_8 + 1;
  }
  this[local_8 * 0x10 + 0xc] = (TeamInfoThird)0x0;
  return 1;
}

```

---

## refresh

```asm
// === 085624de fair_pvp::TeamInfoThird::refresh  [0x085624de-0x8562581] ===
 85624de:	55                   	push   %ebp
 85624df:	89 e5                	mov    %esp,%ebp
 85624e1:	53                   	push   %ebx
 85624e2:	83 ec 24             	sub    $0x24,%esp
 85624e5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85624ec:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85624f3:	eb 6b                	jmp    8562560 <_ZN8fair_pvp13TeamInfoThird7refreshEv+0x82>
 85624f5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85624f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85624fb:	c1 e2 04             	shl    $0x4,%edx
 85624fe:	0f b6 44 02 0c       	movzbl 0xc(%edx,%eax,1),%eax
 8562503:	84 c0                	test   %al,%al
 8562505:	74 40                	je     8562547 <_ZN8fair_pvp13TeamInfoThird7refreshEv+0x69>
 8562507:	8b 55 f4             	mov    -0xc(%ebp),%edx
 856250a:	8b 45 08             	mov    0x8(%ebp),%eax
 856250d:	c1 e2 04             	shl    $0x4,%edx
 8562510:	01 d0                	add    %edx,%eax
 8562512:	83 c0 08             	add    $0x8,%eax
 8562515:	8b 00                	mov    (%eax),%eax
 8562517:	85 c0                	test   %eax,%eax
 8562519:	74 2c                	je     8562547 <_ZN8fair_pvp13TeamInfoThird7refreshEv+0x69>
 856251b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 856251e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8562521:	8b 45 08             	mov    0x8(%ebp),%eax
 8562524:	c1 e2 04             	shl    $0x4,%edx
 8562527:	01 d0                	add    %edx,%eax
 8562529:	83 c0 08             	add    $0x8,%eax
 856252c:	8b 00                	mov    (%eax),%eax
 856252e:	89 04 24             	mov    %eax,(%esp)
 8562531:	e8 4e 69 00 00       	call   8568e84 <_ZN5CUser9GetRatingEv>
 8562536:	8b 45 08             	mov    0x8(%ebp),%eax
 8562539:	89 da                	mov    %ebx,%edx
 856253b:	c1 e2 04             	shl    $0x4,%edx
 856253e:	01 d0                	add    %edx,%eax
 8562540:	83 c0 14             	add    $0x14,%eax
 8562543:	d9 18                	fstps  (%eax)
 8562545:	eb 15                	jmp    856255c <_ZN8fair_pvp13TeamInfoThird7refreshEv+0x7e>
 8562547:	8b 55 f4             	mov    -0xc(%ebp),%edx
 856254a:	8b 45 08             	mov    0x8(%ebp),%eax
 856254d:	c1 e2 04             	shl    $0x4,%edx
 8562550:	01 d0                	add    %edx,%eax
 8562552:	8d 50 14             	lea    0x14(%eax),%edx
 8562555:	b8 00 00 00 00       	mov    $0x0,%eax
 856255a:	89 02                	mov    %eax,(%edx)
 856255c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8562560:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8562564:	0f 9e c0             	setle  %al
 8562567:	84 c0                	test   %al,%al
 8562569:	75 8a                	jne    85624f5 <_ZN8fair_pvp13TeamInfoThird7refreshEv+0x17>
 856256b:	8b 45 08             	mov    0x8(%ebp),%eax
 856256e:	c6 00 00             	movb   $0x0,(%eax)
 8562571:	8b 45 08             	mov    0x8(%ebp),%eax
 8562574:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 856257b:	83 c4 24             	add    $0x24,%esp
 856257e:	5b                   	pop    %ebx
 856257f:	5d                   	pop    %ebp
 8562580:	c3                   	ret
 8562581:	90                   	nop

```

```c
// fair_pvp::TeamInfoThird::refresh @ 0x85624de

/* fair_pvp::TeamInfoThird::refresh() */

void __thiscall fair_pvp::TeamInfoThird::refresh(TeamInfoThird *this)

{
  longdouble lVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[local_10 * 0x10 + 0xc] == (TeamInfoThird)0x0) ||
       (*(int *)(this + local_10 * 0x10 + 8) == 0)) {
      *(undefined4 *)(this + local_10 * 0x10 + 0x14) = 0;
    }
    else {
      lVar1 = (longdouble)CUser::GetRating(*(CUser **)(this + local_10 * 0x10 + 8));
      *(float *)(this + local_10 * 0x10 + 0x14) = (float)lVar1;
    }
  }
  *this = (TeamInfoThird)0x0;
  *(undefined4 *)(this + 4) = 2;
  return;
}

```

---

## reset

```asm
// === 08562582 fair_pvp::TeamInfoThird::reset  [0x08562582-0x85625c5] ===
 8562582:	55                   	push   %ebp
 8562583:	89 e5                	mov    %esp,%ebp
 8562585:	83 ec 28             	sub    $0x28,%esp
 8562588:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 856258f:	eb 18                	jmp    85625a9 <_ZN8fair_pvp13TeamInfoThird5resetEv+0x27>
 8562591:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8562594:	c1 e0 04             	shl    $0x4,%eax
 8562597:	03 45 08             	add    0x8(%ebp),%eax
 856259a:	83 c0 08             	add    $0x8,%eax
 856259d:	89 04 24             	mov    %eax,(%esp)
 85625a0:	e8 5b 63 00 00       	call   8568900 <_ZN8fair_pvp15PlayerInfoThird5resetEv>
 85625a5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85625a9:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85625ad:	0f 9e c0             	setle  %al
 85625b0:	84 c0                	test   %al,%al
 85625b2:	75 dd                	jne    8562591 <_ZN8fair_pvp13TeamInfoThird5resetEv+0xf>
 85625b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85625b7:	c6 00 00             	movb   $0x0,(%eax)
 85625ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85625bd:	c7 40 04 02 00 00 00 	movl   $0x2,0x4(%eax)
 85625c4:	c9                   	leave
 85625c5:	c3                   	ret

```

```c
// fair_pvp::TeamInfoThird::reset @ 0x8562582

/* fair_pvp::TeamInfoThird::reset() */

void __thiscall fair_pvp::TeamInfoThird::reset(TeamInfoThird *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    PlayerInfoThird::reset((PlayerInfoThird *)(this + local_10 * 0x10 + 8));
  }
  *this = (TeamInfoThird)0x0;
  *(undefined4 *)(this + 4) = 2;
  return;
}

```

---

## size

```asm
// === 0856270c fair_pvp::TeamInfoThird::size  [0x0856270c-0x856274b] ===
 856270c:	55                   	push   %ebp
 856270d:	89 e5                	mov    %esp,%ebp
 856270f:	83 ec 10             	sub    $0x10,%esp
 8562712:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8562719:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8562720:	eb 1a                	jmp    856273c <_ZNK8fair_pvp13TeamInfoThird4sizeEv+0x30>
 8562722:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8562725:	8b 45 08             	mov    0x8(%ebp),%eax
 8562728:	c1 e2 04             	shl    $0x4,%edx
 856272b:	0f b6 44 02 0c       	movzbl 0xc(%edx,%eax,1),%eax
 8562730:	84 c0                	test   %al,%al
 8562732:	74 04                	je     8562738 <_ZNK8fair_pvp13TeamInfoThird4sizeEv+0x2c>
 8562734:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8562738:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 856273c:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 8562740:	0f 9e c0             	setle  %al
 8562743:	84 c0                	test   %al,%al
 8562745:	75 db                	jne    8562722 <_ZNK8fair_pvp13TeamInfoThird4sizeEv+0x16>
 8562747:	8b 45 f8             	mov    -0x8(%ebp),%eax
 856274a:	c9                   	leave
 856274b:	c3                   	ret

```

```c
// fair_pvp::TeamInfoThird::size @ 0x856270c

/* fair_pvp::TeamInfoThird::size() const */

int __thiscall fair_pvp::TeamInfoThird::size(TeamInfoThird *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 * 0x10 + 0xc] != (TeamInfoThird)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

