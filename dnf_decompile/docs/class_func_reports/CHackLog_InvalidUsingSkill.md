# CHackLog_InvalidUsingSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GetHackType

```asm
// === 08286656 CHackLog_InvalidUsingSkill::GetHackType  [0x08286656-0x828665f] ===
 8286656:	55                   	push   %ebp
 8286657:	89 e5                	mov    %esp,%ebp
 8286659:	b8 39 03 00 00       	mov    $0x339,%eax
 828665e:	5d                   	pop    %ebp
 828665f:	c3                   	ret

```

```c
// CHackLog_InvalidUsingSkill::GetHackType @ 0x8286656

/* CHackLog_InvalidUsingSkill::GetHackType() */

undefined4 CHackLog_InvalidUsingSkill::GetHackType(void)

{
  return 0x339;
}

```

---

## IsSkillMatchFirstGrowType

```asm
// === 082865ca CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType  [0x082865ca-0x8286611] ===
 82865ca:	55                   	push   %ebp
 82865cb:	89 e5                	mov    %esp,%ebp
 82865cd:	83 ec 14             	sub    $0x14,%esp
 82865d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82865d3:	88 45 ec             	mov    %al,-0x14(%ebp)
 82865d6:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 82865dd:	eb 20                	jmp    82865ff <_ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc+0x35>
 82865df:	8b 55 fc             	mov    -0x4(%ebp),%edx
 82865e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82865e5:	83 c2 30             	add    $0x30,%edx
 82865e8:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 82865ec:	0f be 45 ec          	movsbl -0x14(%ebp),%eax
 82865f0:	39 c2                	cmp    %eax,%edx
 82865f2:	75 07                	jne    82865fb <_ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc+0x31>
 82865f4:	b8 01 00 00 00       	mov    $0x1,%eax
 82865f9:	eb 14                	jmp    828660f <_ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc+0x45>
 82865fb:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 82865ff:	83 7d fc 05          	cmpl   $0x5,-0x4(%ebp)
 8286603:	0f 9e c0             	setle  %al
 8286606:	84 c0                	test   %al,%al
 8286608:	75 d5                	jne    82865df <_ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc+0x15>
 828660a:	b8 00 00 00 00       	mov    $0x0,%eax
 828660f:	c9                   	leave
 8286610:	c3                   	ret
 8286611:	90                   	nop

```

```c
// CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType @ 0x82865ca

/* CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType(CSkill const*, char) */

undefined4 CHackLog_InvalidUsingSkill::IsSkillMatchFirstGrowType(CSkill *param_1,char param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (5 < local_8) {
      return 0;
    }
    if (*(int *)(param_1 + (local_8 + 0x30) * 4 + 0xc) == (int)param_2) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

```

---

## IsSkillMatchSecondGrowType

```asm
// === 08286612 CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType  [0x08286612-0x8286655] ===
 8286612:	55                   	push   %ebp
 8286613:	89 e5                	mov    %esp,%ebp
 8286615:	83 ec 28             	sub    $0x28,%esp
 8286618:	8b 55 0c             	mov    0xc(%ebp),%edx
 828661b:	8b 45 10             	mov    0x10(%ebp),%eax
 828661e:	88 55 f4             	mov    %dl,-0xc(%ebp)
 8286621:	88 45 f0             	mov    %al,-0x10(%ebp)
 8286624:	0f be 55 f0          	movsbl -0x10(%ebp),%edx
 8286628:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 828662c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8286630:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286634:	8b 45 08             	mov    0x8(%ebp),%eax
 8286637:	89 04 24             	mov    %eax,(%esp)
 828663a:	e8 19 a0 0c 00       	call   8350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>
 828663f:	85 c0                	test   %eax,%eax
 8286641:	0f 9f c0             	setg   %al
 8286644:	84 c0                	test   %al,%al
 8286646:	74 07                	je     828664f <_ZN26CHackLog_InvalidUsingSkill26IsSkillMatchSecondGrowTypeEPK6CSkillcc+0x3d>
 8286648:	b8 01 00 00 00       	mov    $0x1,%eax
 828664d:	eb 05                	jmp    8286654 <_ZN26CHackLog_InvalidUsingSkill26IsSkillMatchSecondGrowTypeEPK6CSkillcc+0x42>
 828664f:	b8 00 00 00 00       	mov    $0x0,%eax
 8286654:	c9                   	leave
 8286655:	c3                   	ret

```

```c
// CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType @ 0x8286612

/* CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType(CSkill const*, char, char) */

bool CHackLog_InvalidUsingSkill::IsSkillMatchSecondGrowType
               (CSkill *param_1,char param_2,char param_3)

{
  int iVar1;
  
  iVar1 = CSkill::get_second_growtype_max_level(param_1,(int)param_2,(int)param_3);
  return 0 < iVar1;
}

```

---

## IsValidUsingSkill

```asm
// === 082864fc CHackLog_InvalidUsingSkill::IsValidUsingSkill  [0x082864fc-0x82865c9] ===
 82864fc:	55                   	push   %ebp
 82864fd:	89 e5                	mov    %esp,%ebp
 82864ff:	56                   	push   %esi
 8286500:	53                   	push   %ebx
 8286501:	83 ec 20             	sub    $0x20,%esp
 8286504:	8b 45 08             	mov    0x8(%ebp),%eax
 8286507:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 828650b:	0f b6 f0             	movzbl %al,%esi
 828650e:	8b 45 08             	mov    0x8(%ebp),%eax
 8286511:	8b 18                	mov    (%eax),%ebx
 8286513:	e8 83 5c e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8286518:	89 74 24 08          	mov    %esi,0x8(%esp)
 828651c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8286520:	89 04 24             	mov    %eax,(%esp)
 8286523:	e8 7a 98 0d 00       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 8286528:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828652b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828652f:	0f 84 88 00 00 00    	je     82865bd <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO+0xc1>
 8286535:	8b 45 08             	mov    0x8(%ebp),%eax
 8286538:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 828653c:	0f be c0             	movsbl %al,%eax
 828653f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286543:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8286546:	89 04 24             	mov    %eax,(%esp)
 8286549:	e8 7c 00 00 00       	call   82865ca <_ZN26CHackLog_InvalidUsingSkill25IsSkillMatchFirstGrowTypeEPK6CSkillc>
 828654e:	84 c0                	test   %al,%al
 8286550:	74 07                	je     8286559 <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO+0x5d>
 8286552:	b8 01 00 00 00       	mov    $0x1,%eax
 8286557:	eb 69                	jmp    82865c2 <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO+0xc6>
 8286559:	8b 45 08             	mov    0x8(%ebp),%eax
 828655c:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8286560:	0f be d0             	movsbl %al,%edx
 8286563:	8b 45 08             	mov    0x8(%ebp),%eax
 8286566:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 828656a:	0f be c0             	movsbl %al,%eax
 828656d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8286571:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286575:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8286578:	89 04 24             	mov    %eax,(%esp)
 828657b:	e8 92 00 00 00       	call   8286612 <_ZN26CHackLog_InvalidUsingSkill26IsSkillMatchSecondGrowTypeEPK6CSkillcc>
 8286580:	84 c0                	test   %al,%al
 8286582:	74 07                	je     828658b <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO+0x8f>
 8286584:	b8 01 00 00 00       	mov    $0x1,%eax
 8286589:	eb 37                	jmp    82865c2 <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO+0xc6>
 828658b:	8b 45 08             	mov    0x8(%ebp),%eax
 828658e:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8286592:	0f be d0             	movsbl %al,%edx
 8286595:	8b 45 08             	mov    0x8(%ebp),%eax
 8286598:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 828659c:	0f be c0             	movsbl %al,%eax
 828659f:	89 54 24 08          	mov    %edx,0x8(%esp)
 82865a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82865a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82865aa:	89 04 24             	mov    %eax,(%esp)
 82865ad:	e8 3a 9f 0c 00       	call   83504ec <_ZNK6CSkill11IsStealableEii>
 82865b2:	84 c0                	test   %al,%al
 82865b4:	74 07                	je     82865bd <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO+0xc1>
 82865b6:	b8 01 00 00 00       	mov    $0x1,%eax
 82865bb:	eb 05                	jmp    82865c2 <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO+0xc6>
 82865bd:	b8 00 00 00 00       	mov    $0x0,%eax
 82865c2:	83 c4 20             	add    $0x20,%esp
 82865c5:	5b                   	pop    %ebx
 82865c6:	5e                   	pop    %esi
 82865c7:	5d                   	pop    %ebp
 82865c8:	c3                   	ret
 82865c9:	90                   	nop

```

```c
// CHackLog_InvalidUsingSkill::IsValidUsingSkill @ 0x82864fc

/* CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*) */

undefined4 CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  CSkill *this;
  
  iVar1 = *(int *)param_1;
  iVar3 = G_CDataManager();
  this = (CSkill *)CDataManager::find_skill(iVar3,iVar1);
  if (this != (CSkill *)0x0) {
    cVar2 = IsSkillMatchFirstGrowType(this,(char)param_1[5]);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = IsSkillMatchSecondGrowType(this,(char)param_1[5],(char)param_1[6]);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = CSkill::IsStealable(this,(int)(char)param_1[5],(int)(char)param_1[6]);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

```

