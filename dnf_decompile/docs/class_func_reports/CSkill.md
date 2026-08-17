# CSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 20

---

## IsStealable

```asm
// === 083504ec CSkill::IsStealable  [0x083504ec-0x8350579] ===
 83504ec:	55                   	push   %ebp
 83504ed:	89 e5                	mov    %esp,%ebp
 83504ef:	83 ec 10             	sub    $0x10,%esp
 83504f2:	8b 45 08             	mov    0x8(%ebp),%eax
 83504f5:	0f b6 80 14 01 00 00 	movzbl 0x114(%eax),%eax
 83504fc:	83 f0 01             	xor    $0x1,%eax
 83504ff:	84 c0                	test   %al,%al
 8350501:	74 07                	je     835050a <_ZNK6CSkill11IsStealableEii+0x1e>
 8350503:	b8 00 00 00 00       	mov    $0x0,%eax
 8350508:	eb 6d                	jmp    8350577 <_ZNK6CSkill11IsStealableEii+0x8b>
 835050a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8350511:	eb 1d                	jmp    8350530 <_ZNK6CSkill11IsStealableEii+0x44>
 8350513:	8b 55 f8             	mov    -0x8(%ebp),%edx
 8350516:	8b 45 08             	mov    0x8(%ebp),%eax
 8350519:	83 c2 30             	add    $0x30,%edx
 835051c:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8350520:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8350523:	75 07                	jne    835052c <_ZNK6CSkill11IsStealableEii+0x40>
 8350525:	b8 00 00 00 00       	mov    $0x0,%eax
 835052a:	eb 4b                	jmp    8350577 <_ZNK6CSkill11IsStealableEii+0x8b>
 835052c:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8350530:	83 7d f8 05          	cmpl   $0x5,-0x8(%ebp)
 8350534:	0f 9e c0             	setle  %al
 8350537:	84 c0                	test   %al,%al
 8350539:	75 d8                	jne    8350513 <_ZNK6CSkill11IsStealableEii+0x27>
 835053b:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 835053f:	7e 31                	jle    8350572 <_ZNK6CSkill11IsStealableEii+0x86>
 8350541:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8350548:	eb 1d                	jmp    8350567 <_ZNK6CSkill11IsStealableEii+0x7b>
 835054a:	8b 55 fc             	mov    -0x4(%ebp),%edx
 835054d:	8b 45 08             	mov    0x8(%ebp),%eax
 8350550:	83 c2 2c             	add    $0x2c,%edx
 8350553:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8350557:	3b 45 10             	cmp    0x10(%ebp),%eax
 835055a:	75 07                	jne    8350563 <_ZNK6CSkill11IsStealableEii+0x77>
 835055c:	b8 00 00 00 00       	mov    $0x0,%eax
 8350561:	eb 14                	jmp    8350577 <_ZNK6CSkill11IsStealableEii+0x8b>
 8350563:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8350567:	83 7d fc 01          	cmpl   $0x1,-0x4(%ebp)
 835056b:	0f 9e c0             	setle  %al
 835056e:	84 c0                	test   %al,%al
 8350570:	75 d8                	jne    835054a <_ZNK6CSkill11IsStealableEii+0x5e>
 8350572:	b8 01 00 00 00       	mov    $0x1,%eax
 8350577:	c9                   	leave
 8350578:	c3                   	ret
 8350579:	90                   	nop

```

```c
// CSkill::IsStealable @ 0x83504ec

/* CSkill::IsStealable(int, int) const */

undefined4 __thiscall CSkill::IsStealable(CSkill *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if (this[0x114] == (CSkill)0x1) {
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      if (*(int *)(this + (local_c + 0x30) * 4 + 0xc) == param_1) {
        return 0;
      }
    }
    if (0 < param_2) {
      for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
        if (*(int *)(this + (local_8 + 0x2c) * 4 + 4) == param_2) {
          return 0;
        }
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## add_learned_skill

```asm
// === 0834ffca CSkill::add_learned_skill  [0x0834ffca-0x834ffe7] ===
 834ffca:	55                   	push   %ebp
 834ffcb:	89 e5                	mov    %esp,%ebp
 834ffcd:	83 ec 18             	sub    $0x18,%esp
 834ffd0:	8b 45 08             	mov    0x8(%ebp),%eax
 834ffd3:	8d 50 18             	lea    0x18(%eax),%edx
 834ffd6:	8d 45 0c             	lea    0xc(%ebp),%eax
 834ffd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ffdd:	89 14 24             	mov    %edx,(%esp)
 834ffe0:	e8 6b f4 03 00       	call   838f450 <_ZNSt4listI10_pre_skillSaIS0_EE9push_backERKS0_>
 834ffe5:	c9                   	leave
 834ffe6:	c3                   	ret
 834ffe7:	90                   	nop

```

```c
// CSkill::add_learned_skill @ 0x834ffca

/* CSkill::add_learned_skill(_pre_skill) */

void CSkill::add_learned_skill(int param_1)

{
  std::list<_pre_skill,std::allocator<_pre_skill>>::push_back
            ((list<_pre_skill,std::allocator<_pre_skill>> *)(param_1 + 0x18),&stack0x00000008);
  return;
}

```

---

## add_need_sfp

```asm
// === 08350006 CSkill::add_need_sfp  [0x08350006-0x8350023] ===
 8350006:	55                   	push   %ebp
 8350007:	89 e5                	mov    %esp,%ebp
 8350009:	83 ec 18             	sub    $0x18,%esp
 835000c:	8b 45 08             	mov    0x8(%ebp),%eax
 835000f:	8d 50 10             	lea    0x10(%eax),%edx
 8350012:	8d 45 0c             	lea    0xc(%ebp),%eax
 8350015:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350019:	89 14 24             	mov    %edx,(%esp)
 835001c:	e8 8d cb f1 ff       	call   826cbae <_ZNSt4listIiSaIiEE9push_backERKi>
 8350021:	c9                   	leave
 8350022:	c3                   	ret
 8350023:	90                   	nop

```

```c
// CSkill::add_need_sfp @ 0x8350006

/* CSkill::add_need_sfp(int) */

void CSkill::add_need_sfp(int param_1)

{
  std::list<int,std::allocator<int>>::push_back
            ((list<int,std::allocator<int>> *)(param_1 + 0x10),(int *)&stack0x00000008);
  return;
}

```

---

## add_need_sp

```asm
// === 0834ffe8 CSkill::add_need_sp  [0x0834ffe8-0x8350005] ===
 834ffe8:	55                   	push   %ebp
 834ffe9:	89 e5                	mov    %esp,%ebp
 834ffeb:	83 ec 18             	sub    $0x18,%esp
 834ffee:	8b 45 08             	mov    0x8(%ebp),%eax
 834fff1:	8d 50 08             	lea    0x8(%eax),%edx
 834fff4:	8d 45 0c             	lea    0xc(%ebp),%eax
 834fff7:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fffb:	89 14 24             	mov    %edx,(%esp)
 834fffe:	e8 ab cb f1 ff       	call   826cbae <_ZNSt4listIiSaIiEE9push_backERKi>
 8350003:	c9                   	leave
 8350004:	c3                   	ret
 8350005:	90                   	nop

```

```c
// CSkill::add_need_sp @ 0x834ffe8

/* CSkill::add_need_sp(int) */

void CSkill::add_need_sp(int param_1)

{
  std::list<int,std::allocator<int>>::push_back
            ((list<int,std::allocator<int>> *)(param_1 + 8),(int *)&stack0x00000008);
  return;
}

```

---

## can_learn

```asm
// === 0835039e CSkill::can_learn  [0x0835039e-0x83504eb] ===
 835039e:	55                   	push   %ebp
 835039f:	89 e5                	mov    %esp,%ebp
 83503a1:	53                   	push   %ebx
 83503a2:	83 ec 24             	sub    $0x24,%esp
 83503a5:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 83503a9:	0f 8f 90 00 00 00    	jg     835043f <_ZNK6CSkill9can_learnEiiii+0xa1>
 83503af:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 83503b3:	7e 17                	jle    83503cc <_ZNK6CSkill9can_learnEiiii+0x2e>
 83503b5:	8b 45 10             	mov    0x10(%ebp),%eax
 83503b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83503bc:	8b 45 08             	mov    0x8(%ebp),%eax
 83503bf:	89 04 24             	mov    %eax,(%esp)
 83503c2:	e8 41 48 02 00       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 83503c7:	3b 45 18             	cmp    0x18(%ebp),%eax
 83503ca:	7d 07                	jge    83503d3 <_ZNK6CSkill9can_learnEiiii+0x35>
 83503cc:	b8 01 00 00 00       	mov    $0x1,%eax
 83503d1:	eb 05                	jmp    83503d8 <_ZNK6CSkill9can_learnEiiii+0x3a>
 83503d3:	b8 00 00 00 00       	mov    $0x0,%eax
 83503d8:	84 c0                	test   %al,%al
 83503da:	74 0a                	je     83503e6 <_ZNK6CSkill9can_learnEiiii+0x48>
 83503dc:	b8 00 00 00 00       	mov    $0x0,%eax
 83503e1:	e9 ff 00 00 00       	jmp    83504e5 <_ZNK6CSkill9can_learnEiiii+0x147>
 83503e6:	8b 45 10             	mov    0x10(%ebp),%eax
 83503e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83503ed:	8b 45 08             	mov    0x8(%ebp),%eax
 83503f0:	89 04 24             	mov    %eax,(%esp)
 83503f3:	e8 10 48 02 00       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 83503f8:	8b 55 08             	mov    0x8(%ebp),%edx
 83503fb:	8b 92 c4 00 00 00    	mov    0xc4(%edx),%edx
 8350401:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8350404:	89 cb                	mov    %ecx,%ebx
 8350406:	29 d3                	sub    %edx,%ebx
 8350408:	89 da                	mov    %ebx,%edx
 835040a:	83 c2 01             	add    $0x1,%edx
 835040d:	39 d0                	cmp    %edx,%eax
 835040f:	7d 14                	jge    8350425 <_ZNK6CSkill9can_learnEiiii+0x87>
 8350411:	8b 45 10             	mov    0x10(%ebp),%eax
 8350414:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350418:	8b 45 08             	mov    0x8(%ebp),%eax
 835041b:	89 04 24             	mov    %eax,(%esp)
 835041e:	e8 e5 47 02 00       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 8350423:	eb 15                	jmp    835043a <_ZNK6CSkill9can_learnEiiii+0x9c>
 8350425:	8b 45 08             	mov    0x8(%ebp),%eax
 8350428:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 835042e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350431:	89 d1                	mov    %edx,%ecx
 8350433:	29 c1                	sub    %eax,%ecx
 8350435:	89 c8                	mov    %ecx,%eax
 8350437:	83 c0 01             	add    $0x1,%eax
 835043a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 835043d:	eb 6d                	jmp    83504ac <_ZNK6CSkill9can_learnEiiii+0x10e>
 835043f:	8b 45 14             	mov    0x14(%ebp),%eax
 8350442:	89 44 24 08          	mov    %eax,0x8(%esp)
 8350446:	8b 45 10             	mov    0x10(%ebp),%eax
 8350449:	89 44 24 04          	mov    %eax,0x4(%esp)
 835044d:	8b 45 08             	mov    0x8(%ebp),%eax
 8350450:	89 04 24             	mov    %eax,(%esp)
 8350453:	e8 00 02 00 00       	call   8350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>
 8350458:	89 45 f4             	mov    %eax,-0xc(%ebp)
 835045b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 835045f:	75 15                	jne    8350476 <_ZNK6CSkill9can_learnEiiii+0xd8>
 8350461:	8b 45 10             	mov    0x10(%ebp),%eax
 8350464:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350468:	8b 45 08             	mov    0x8(%ebp),%eax
 835046b:	89 04 24             	mov    %eax,(%esp)
 835046e:	e8 95 47 02 00       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 8350473:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8350476:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 835047a:	7e 08                	jle    8350484 <_ZNK6CSkill9can_learnEiiii+0xe6>
 835047c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835047f:	3b 45 18             	cmp    0x18(%ebp),%eax
 8350482:	7d 07                	jge    835048b <_ZNK6CSkill9can_learnEiiii+0xed>
 8350484:	b8 00 00 00 00       	mov    $0x0,%eax
 8350489:	eb 5a                	jmp    83504e5 <_ZNK6CSkill9can_learnEiiii+0x147>
 835048b:	8b 45 08             	mov    0x8(%ebp),%eax
 835048e:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 8350494:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350497:	89 d3                	mov    %edx,%ebx
 8350499:	29 c3                	sub    %eax,%ebx
 835049b:	89 d8                	mov    %ebx,%eax
 835049d:	83 c0 01             	add    $0x1,%eax
 83504a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83504a3:	39 d0                	cmp    %edx,%eax
 83504a5:	7e 02                	jle    83504a9 <_ZNK6CSkill9can_learnEiiii+0x10b>
 83504a7:	89 d0                	mov    %edx,%eax
 83504a9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83504ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83504af:	3b 45 18             	cmp    0x18(%ebp),%eax
 83504b2:	7d 07                	jge    83504bb <_ZNK6CSkill9can_learnEiiii+0x11d>
 83504b4:	b8 00 00 00 00       	mov    $0x0,%eax
 83504b9:	eb 2a                	jmp    83504e5 <_ZNK6CSkill9can_learnEiiii+0x147>
 83504bb:	8b 45 08             	mov    0x8(%ebp),%eax
 83504be:	8b 90 c4 00 00 00    	mov    0xc4(%eax),%edx
 83504c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83504c7:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
 83504cd:	8b 4d 18             	mov    0x18(%ebp),%ecx
 83504d0:	83 e9 01             	sub    $0x1,%ecx
 83504d3:	0f af c1             	imul   %ecx,%eax
 83504d6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83504d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83504dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83504df:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83504e2:	0f 9e c0             	setle  %al
 83504e5:	83 c4 24             	add    $0x24,%esp
 83504e8:	5b                   	pop    %ebx
 83504e9:	5d                   	pop    %ebp
 83504ea:	c3                   	ret
 83504eb:	90                   	nop

```

```c
// CSkill::can_learn @ 0x835039e

/* CSkill::can_learn(int, int, int, int) const */

undefined4 __thiscall
CSkill::can_learn(CSkill *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_10;
  
  if (param_3 < 1) {
    if ((param_4 < 1) || (iVar2 = get_type_max_level(this,param_2), iVar2 < param_4)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    iVar2 = get_type_max_level(this,param_2);
    if (iVar2 < (param_1 - *(int *)(this + 0xc4)) + 1) {
      local_18 = get_type_max_level(this,param_2);
    }
    else {
      local_18 = (param_1 - *(int *)(this + 0xc4)) + 1;
    }
  }
  else {
    local_10 = get_second_growtype_max_level(this,param_2,param_3);
    if (local_10 == 0) {
      local_10 = get_type_max_level(this,param_2);
    }
    if ((param_4 < 1) || (local_10 < param_4)) {
      return 0;
    }
    local_18 = (param_1 - *(int *)(this + 0xc4)) + 1;
    if (local_10 < local_18) {
      local_18 = local_10;
    }
  }
  if (local_18 < param_4) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0xc4) + *(int *)(this + 200) * (param_4 + -1);
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),iVar2 <= param_1);
  }
  return uVar3;
}

```

---

## getMaxSkillLevel

```asm
// === 08350700 CSkill::getMaxSkillLevel  [0x08350700-0x83507e7] ===
 8350700:	55                   	push   %ebp
 8350701:	89 e5                	mov    %esp,%ebp
 8350703:	83 ec 38             	sub    $0x38,%esp
 8350706:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 835070a:	7f 17                	jg     8350723 <_ZNK6CSkill16getMaxSkillLevelEiii+0x23>
 835070c:	8b 45 10             	mov    0x10(%ebp),%eax
 835070f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350713:	8b 45 08             	mov    0x8(%ebp),%eax
 8350716:	89 04 24             	mov    %eax,(%esp)
 8350719:	e8 ea 44 02 00       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 835071e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8350721:	eb 37                	jmp    835075a <_ZNK6CSkill16getMaxSkillLevelEiii+0x5a>
 8350723:	8b 45 14             	mov    0x14(%ebp),%eax
 8350726:	89 44 24 08          	mov    %eax,0x8(%esp)
 835072a:	8b 45 10             	mov    0x10(%ebp),%eax
 835072d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350731:	8b 45 08             	mov    0x8(%ebp),%eax
 8350734:	89 04 24             	mov    %eax,(%esp)
 8350737:	e8 1c ff ff ff       	call   8350658 <_ZNK6CSkill29get_second_growtype_max_levelEii>
 835073c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 835073f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8350743:	75 15                	jne    835075a <_ZNK6CSkill16getMaxSkillLevelEiii+0x5a>
 8350745:	8b 45 10             	mov    0x10(%ebp),%eax
 8350748:	89 44 24 04          	mov    %eax,0x4(%esp)
 835074c:	8b 45 08             	mov    0x8(%ebp),%eax
 835074f:	89 04 24             	mov    %eax,(%esp)
 8350752:	e8 b1 44 02 00       	call   8374c08 <_ZNK6CSkill18get_type_max_levelEi>
 8350757:	89 45 f0             	mov    %eax,-0x10(%ebp)
 835075a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 835075e:	75 07                	jne    8350767 <_ZNK6CSkill16getMaxSkillLevelEiii+0x67>
 8350760:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8350765:	eb 7e                	jmp    83507e5 <_ZNK6CSkill16getMaxSkillLevelEiii+0xe5>
 8350767:	8b 45 08             	mov    0x8(%ebp),%eax
 835076a:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 8350770:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350773:	89 d1                	mov    %edx,%ecx
 8350775:	29 c1                	sub    %eax,%ecx
 8350777:	89 c8                	mov    %ecx,%eax
 8350779:	83 c0 01             	add    $0x1,%eax
 835077c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 835077f:	39 d0                	cmp    %edx,%eax
 8350781:	7e 02                	jle    8350785 <_ZNK6CSkill16getMaxSkillLevelEiii+0x85>
 8350783:	89 d0                	mov    %edx,%eax
 8350785:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8350788:	8b 45 08             	mov    0x8(%ebp),%eax
 835078b:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 8350791:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350794:	89 d1                	mov    %edx,%ecx
 8350796:	29 c1                	sub    %eax,%ecx
 8350798:	8b 45 08             	mov    0x8(%ebp),%eax
 835079b:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
 83507a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83507a4:	89 ca                	mov    %ecx,%edx
 83507a6:	89 d0                	mov    %edx,%eax
 83507a8:	c1 fa 1f             	sar    $0x1f,%edx
 83507ab:	f7 7d e4             	idivl  -0x1c(%ebp)
 83507ae:	83 c0 01             	add    $0x1,%eax
 83507b1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83507b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83507b7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83507ba:	7d 08                	jge    83507c4 <_ZNK6CSkill16getMaxSkillLevelEiii+0xc4>
 83507bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83507bf:	c1 e8 1f             	shr    $0x1f,%eax
 83507c2:	eb 06                	jmp    83507ca <_ZNK6CSkill16getMaxSkillLevelEiii+0xca>
 83507c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83507c7:	c1 e8 1f             	shr    $0x1f,%eax
 83507ca:	84 c0                	test   %al,%al
 83507cc:	74 07                	je     83507d5 <_ZNK6CSkill16getMaxSkillLevelEiii+0xd5>
 83507ce:	b8 00 00 00 00       	mov    $0x0,%eax
 83507d3:	eb 10                	jmp    83507e5 <_ZNK6CSkill16getMaxSkillLevelEiii+0xe5>
 83507d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83507d8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83507db:	7d 05                	jge    83507e2 <_ZNK6CSkill16getMaxSkillLevelEiii+0xe2>
 83507dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83507e0:	eb 03                	jmp    83507e5 <_ZNK6CSkill16getMaxSkillLevelEiii+0xe5>
 83507e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83507e5:	c9                   	leave
 83507e6:	c3                   	ret
 83507e7:	90                   	nop

```

```c
// CSkill::getMaxSkillLevel @ 0x8350700

/* CSkill::getMaxSkillLevel(int, int, int) const */

int __thiscall CSkill::getMaxSkillLevel(CSkill *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if (param_3 < 1) {
    local_14 = get_type_max_level(this,param_2);
  }
  else {
    local_14 = get_second_growtype_max_level(this,param_2,param_3);
    if (local_14 == 0) {
      local_14 = get_type_max_level(this,param_2);
    }
  }
  if (local_14 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (param_1 - *(int *)(this + 0xc4)) + 1;
    if (local_14 < iVar2) {
      iVar2 = local_14;
    }
    iVar3 = (param_1 - *(int *)(this + 0xc4)) / *(int *)(this + 200) + 1;
    if (iVar3 < iVar2) {
      cVar1 = (char)((uint)iVar3 >> 0x18);
    }
    else {
      cVar1 = (char)((uint)iVar2 >> 0x18);
    }
    if (cVar1 < '\0') {
      iVar2 = 0;
    }
    else if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}

```

---

## get_fitness_second_growtype

```asm
// === 083506d8 CSkill::get_fitness_second_growtype  [0x083506d8-0x83506ff] ===
 83506d8:	55                   	push   %ebp
 83506d9:	89 e5                	mov    %esp,%ebp
 83506db:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83506df:	7e 06                	jle    83506e7 <_ZNK6CSkill27get_fitness_second_growtypeEi+0xf>
 83506e1:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 83506e5:	7e 07                	jle    83506ee <_ZNK6CSkill27get_fitness_second_growtypeEi+0x16>
 83506e7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83506ec:	eb 10                	jmp    83506fe <_ZNK6CSkill27get_fitness_second_growtypeEi+0x26>
 83506ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 83506f1:	8d 50 ff             	lea    -0x1(%eax),%edx
 83506f4:	8b 45 08             	mov    0x8(%ebp),%eax
 83506f7:	83 c2 2c             	add    $0x2c,%edx
 83506fa:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 83506fe:	5d                   	pop    %ebp
 83506ff:	c3                   	ret

```

```c
// CSkill::get_fitness_second_growtype @ 0x83506d8

/* CSkill::get_fitness_second_growtype(int) const */

undefined4 __thiscall CSkill::get_fitness_second_growtype(CSkill *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x2b) * 4 + 4);
  }
  return uVar1;
}

```

---

## get_guildSkillNeedGSP

```asm
// === 083500f2 CSkill::get_guildSkillNeedGSP  [0x083500f2-0x8350139] ===
 83500f2:	55                   	push   %ebp
 83500f3:	89 e5                	mov    %esp,%ebp
 83500f5:	83 ec 18             	sub    $0x18,%esp
 83500f8:	8b 45 08             	mov    0x8(%ebp),%eax
 83500fb:	05 e4 00 00 00       	add    $0xe4,%eax
 8350100:	89 04 24             	mov    %eax,(%esp)
 8350103:	e8 b8 e0 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8350108:	8b 55 0c             	mov    0xc(%ebp),%edx
 835010b:	39 d0                	cmp    %edx,%eax
 835010d:	0f 92 c0             	setb   %al
 8350110:	84 c0                	test   %al,%al
 8350112:	74 07                	je     835011b <_ZNK6CSkill21get_guildSkillNeedGSPEi+0x29>
 8350114:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8350119:	eb 1d                	jmp    8350138 <_ZNK6CSkill21get_guildSkillNeedGSPEi+0x46>
 835011b:	8b 45 0c             	mov    0xc(%ebp),%eax
 835011e:	83 e8 01             	sub    $0x1,%eax
 8350121:	8b 55 08             	mov    0x8(%ebp),%edx
 8350124:	81 c2 e4 00 00 00    	add    $0xe4,%edx
 835012a:	89 44 24 04          	mov    %eax,0x4(%esp)
 835012e:	89 14 24             	mov    %edx,(%esp)
 8350131:	e8 c0 77 03 00       	call   83878f6 <_ZNKSt6vectorIiSaIiEE2atEj>
 8350136:	8b 00                	mov    (%eax),%eax
 8350138:	c9                   	leave
 8350139:	c3                   	ret

```

```c
// CSkill::get_guildSkillNeedGSP @ 0x83500f2

/* CSkill::get_guildSkillNeedGSP(int) const */

undefined4 __thiscall CSkill::get_guildSkillNeedGSP(CSkill *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 0xe4));
  if (uVar1 < (uint)param_1) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (undefined4 *)
             std::vector<int,std::allocator<int>>::at
                       ((vector<int,std::allocator<int>> *)(this + 0xe4),param_1 - 1);
    uVar2 = *puVar3;
  }
  return uVar2;
}

```

---

## get_guildSkillNeedGold

```asm
// === 0835013a CSkill::get_guildSkillNeedGold  [0x0835013a-0x8350181] ===
 835013a:	55                   	push   %ebp
 835013b:	89 e5                	mov    %esp,%ebp
 835013d:	83 ec 18             	sub    $0x18,%esp
 8350140:	8b 45 08             	mov    0x8(%ebp),%eax
 8350143:	05 f0 00 00 00       	add    $0xf0,%eax
 8350148:	89 04 24             	mov    %eax,(%esp)
 835014b:	e8 70 e0 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8350150:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350153:	39 d0                	cmp    %edx,%eax
 8350155:	0f 92 c0             	setb   %al
 8350158:	84 c0                	test   %al,%al
 835015a:	74 07                	je     8350163 <_ZNK6CSkill22get_guildSkillNeedGoldEi+0x29>
 835015c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8350161:	eb 1d                	jmp    8350180 <_ZNK6CSkill22get_guildSkillNeedGoldEi+0x46>
 8350163:	8b 45 0c             	mov    0xc(%ebp),%eax
 8350166:	83 e8 01             	sub    $0x1,%eax
 8350169:	8b 55 08             	mov    0x8(%ebp),%edx
 835016c:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 8350172:	89 44 24 04          	mov    %eax,0x4(%esp)
 8350176:	89 14 24             	mov    %edx,(%esp)
 8350179:	e8 78 77 03 00       	call   83878f6 <_ZNKSt6vectorIiSaIiEE2atEj>
 835017e:	8b 00                	mov    (%eax),%eax
 8350180:	c9                   	leave
 8350181:	c3                   	ret

```

```c
// CSkill::get_guildSkillNeedGold @ 0x835013a

/* CSkill::get_guildSkillNeedGold(int) const */

undefined4 __thiscall CSkill::get_guildSkillNeedGold(CSkill *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 0xf0));
  if (uVar1 < (uint)param_1) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (undefined4 *)
             std::vector<int,std::allocator<int>>::at
                       ((vector<int,std::allocator<int>> *)(this + 0xf0),param_1 - 1);
    uVar2 = *puVar3;
  }
  return uVar2;
}

```

---

## get_needGuildLevel

```asm
// === 08350182 CSkill::get_needGuildLevel  [0x08350182-0x83501a5] ===
 8350182:	55                   	push   %ebp
 8350183:	89 e5                	mov    %esp,%ebp
 8350185:	8b 45 08             	mov    0x8(%ebp),%eax
 8350188:	8b 90 fc 00 00 00    	mov    0xfc(%eax),%edx
 835018e:	8b 45 08             	mov    0x8(%ebp),%eax
 8350191:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 8350197:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 835019a:	83 e9 01             	sub    $0x1,%ecx
 835019d:	0f af c1             	imul   %ecx,%eax
 83501a0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83501a3:	5d                   	pop    %ebp
 83501a4:	c3                   	ret
 83501a5:	90                   	nop

```

```c
// CSkill::get_needGuildLevel @ 0x8350182

/* CSkill::get_needGuildLevel(int) const */

int __thiscall CSkill::get_needGuildLevel(CSkill *this,int param_1)

{
  return *(int *)(this + 0xfc) + *(int *)(this + 0x100) * (param_1 + -1);
}

```

---

## get_need_sfp_for_level

```asm
// === 083501a6 CSkill::get_need_sfp_for_level  [0x083501a6-0x835027b] ===
 83501a6:	55                   	push   %ebp
 83501a7:	89 e5                	mov    %esp,%ebp
 83501a9:	83 ec 48             	sub    $0x48,%esp
 83501ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83501af:	89 04 24             	mov    %eax,(%esp)
 83501b2:	e8 8d f3 03 00       	call   838f544 <_ZNSt20_List_const_iteratorIiEC1Ev>
 83501b7:	8b 45 08             	mov    0x8(%ebp),%eax
 83501ba:	83 c0 10             	add    $0x10,%eax
 83501bd:	89 04 24             	mov    %eax,(%esp)
 83501c0:	e8 b1 59 ee ff       	call   8235b76 <_ZNKSt4listIiSaIiEE4sizeEv>
 83501c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83501c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83501cb:	3b 45 10             	cmp    0x10(%ebp),%eax
 83501ce:	7d 0a                	jge    83501da <_ZNK6CSkill22get_need_sfp_for_levelEii+0x34>
 83501d0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83501d5:	e9 9f 00 00 00       	jmp    8350279 <_ZNK6CSkill22get_need_sfp_for_levelEii+0xd3>
 83501da:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83501de:	79 0a                	jns    83501ea <_ZNK6CSkill22get_need_sfp_for_levelEii+0x44>
 83501e0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83501e5:	e9 8f 00 00 00       	jmp    8350279 <_ZNK6CSkill22get_need_sfp_for_levelEii+0xd3>
 83501ea:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83501f1:	8b 45 08             	mov    0x8(%ebp),%eax
 83501f4:	8d 50 10             	lea    0x10(%eax),%edx
 83501f7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83501fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 83501fe:	89 04 24             	mov    %eax,(%esp)
 8350201:	e8 6e 87 ee ff       	call   8238974 <_ZNKSt4listIiSaIiEE5beginEv>
 8350206:	83 ec 04             	sub    $0x4,%esp
 8350209:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 835020c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 835020f:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8350216:	eb 41                	jmp    8350259 <_ZNK6CSkill22get_need_sfp_for_levelEii+0xb3>
 8350218:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835021b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 835021e:	7e 18                	jle    8350238 <_ZNK6CSkill22get_need_sfp_for_levelEii+0x92>
 8350220:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8350223:	3b 45 10             	cmp    0x10(%ebp),%eax
 8350226:	7d 10                	jge    8350238 <_ZNK6CSkill22get_need_sfp_for_levelEii+0x92>
 8350228:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 835022b:	89 04 24             	mov    %eax,(%esp)
 835022e:	e8 6d c9 f1 ff       	call   826cba0 <_ZNKSt20_List_const_iteratorIiEdeEv>
 8350233:	8b 00                	mov    (%eax),%eax
 8350235:	01 45 f0             	add    %eax,-0x10(%ebp)
 8350238:	8d 45 e8             	lea    -0x18(%ebp),%eax
 835023b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8350242:	00 
 8350243:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8350246:	89 54 24 04          	mov    %edx,0x4(%esp)
 835024a:	89 04 24             	mov    %eax,(%esp)
 835024d:	e8 00 f3 03 00       	call   838f552 <_ZNSt20_List_const_iteratorIiEppEi>
 8350252:	83 ec 04             	sub    $0x4,%esp
 8350255:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8350259:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835025c:	3b 45 10             	cmp    0x10(%ebp),%eax
 835025f:	0f 9c c0             	setl   %al
 8350262:	84 c0                	test   %al,%al
 8350264:	75 b2                	jne    8350218 <_ZNK6CSkill22get_need_sfp_for_levelEii+0x72>
 8350266:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8350269:	89 04 24             	mov    %eax,(%esp)
 835026c:	e8 2f c9 f1 ff       	call   826cba0 <_ZNKSt20_List_const_iteratorIiEdeEv>
 8350271:	8b 00                	mov    (%eax),%eax
 8350273:	01 45 f0             	add    %eax,-0x10(%ebp)
 8350276:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8350279:	c9                   	leave
 835027a:	c3                   	ret
 835027b:	90                   	nop

```

```c
// CSkill::get_need_sfp_for_level @ 0x83501a6

/* CSkill::get_need_sfp_for_level(int, int) const */

int __thiscall CSkill::get_need_sfp_for_level(CSkill *this,int param_1,int param_2)

{
  int *piVar1;
  _List_const_iterator<int> local_20 [4];
  _List_const_iterator<int> local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  std::_List_const_iterator<int>::_List_const_iterator(local_20);
  local_18 = std::list<int,std::allocator<int>>::size();
  if (local_18 < param_2) {
    local_14 = -1;
  }
  else if (param_1 < 0) {
    local_14 = -1;
  }
  else {
    local_14 = 0;
    std::list<int,std::allocator<int>>::begin();
    for (local_10 = 1; local_10 < param_2; local_10 = local_10 + 1) {
      if ((param_1 < local_10) && (local_10 < param_2)) {
        piVar1 = (int *)std::_List_const_iterator<int>::operator*(local_20);
        local_14 = local_14 + *piVar1;
      }
      std::_List_const_iterator<int>::operator++(local_1c,(int)local_20);
    }
    piVar1 = (int *)std::_List_const_iterator<int>::operator*(local_20);
    local_14 = local_14 + *piVar1;
  }
  return local_14;
}

```

---

## get_need_sp_for_level

```asm
// === 083502c8 CSkill::get_need_sp_for_level  [0x083502c8-0x835039d] ===
 83502c8:	55                   	push   %ebp
 83502c9:	89 e5                	mov    %esp,%ebp
 83502cb:	83 ec 48             	sub    $0x48,%esp
 83502ce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83502d1:	89 04 24             	mov    %eax,(%esp)
 83502d4:	e8 6b f2 03 00       	call   838f544 <_ZNSt20_List_const_iteratorIiEC1Ev>
 83502d9:	8b 45 08             	mov    0x8(%ebp),%eax
 83502dc:	83 c0 08             	add    $0x8,%eax
 83502df:	89 04 24             	mov    %eax,(%esp)
 83502e2:	e8 8f 58 ee ff       	call   8235b76 <_ZNKSt4listIiSaIiEE4sizeEv>
 83502e7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83502ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83502ed:	3b 45 10             	cmp    0x10(%ebp),%eax
 83502f0:	7d 0a                	jge    83502fc <_ZNK6CSkill21get_need_sp_for_levelEii+0x34>
 83502f2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83502f7:	e9 9f 00 00 00       	jmp    835039b <_ZNK6CSkill21get_need_sp_for_levelEii+0xd3>
 83502fc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8350300:	79 0a                	jns    835030c <_ZNK6CSkill21get_need_sp_for_levelEii+0x44>
 8350302:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8350307:	e9 8f 00 00 00       	jmp    835039b <_ZNK6CSkill21get_need_sp_for_levelEii+0xd3>
 835030c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8350313:	8b 45 08             	mov    0x8(%ebp),%eax
 8350316:	8d 50 08             	lea    0x8(%eax),%edx
 8350319:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 835031c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350320:	89 04 24             	mov    %eax,(%esp)
 8350323:	e8 4c 86 ee ff       	call   8238974 <_ZNKSt4listIiSaIiEE5beginEv>
 8350328:	83 ec 04             	sub    $0x4,%esp
 835032b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 835032e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8350331:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8350338:	eb 41                	jmp    835037b <_ZNK6CSkill21get_need_sp_for_levelEii+0xb3>
 835033a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835033d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8350340:	7e 18                	jle    835035a <_ZNK6CSkill21get_need_sp_for_levelEii+0x92>
 8350342:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8350345:	3b 45 10             	cmp    0x10(%ebp),%eax
 8350348:	7d 10                	jge    835035a <_ZNK6CSkill21get_need_sp_for_levelEii+0x92>
 835034a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 835034d:	89 04 24             	mov    %eax,(%esp)
 8350350:	e8 4b c8 f1 ff       	call   826cba0 <_ZNKSt20_List_const_iteratorIiEdeEv>
 8350355:	8b 00                	mov    (%eax),%eax
 8350357:	01 45 f0             	add    %eax,-0x10(%ebp)
 835035a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 835035d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8350364:	00 
 8350365:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8350368:	89 54 24 04          	mov    %edx,0x4(%esp)
 835036c:	89 04 24             	mov    %eax,(%esp)
 835036f:	e8 de f1 03 00       	call   838f552 <_ZNSt20_List_const_iteratorIiEppEi>
 8350374:	83 ec 04             	sub    $0x4,%esp
 8350377:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 835037b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 835037e:	3b 45 10             	cmp    0x10(%ebp),%eax
 8350381:	0f 9c c0             	setl   %al
 8350384:	84 c0                	test   %al,%al
 8350386:	75 b2                	jne    835033a <_ZNK6CSkill21get_need_sp_for_levelEii+0x72>
 8350388:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 835038b:	89 04 24             	mov    %eax,(%esp)
 835038e:	e8 0d c8 f1 ff       	call   826cba0 <_ZNKSt20_List_const_iteratorIiEdeEv>
 8350393:	8b 00                	mov    (%eax),%eax
 8350395:	01 45 f0             	add    %eax,-0x10(%ebp)
 8350398:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835039b:	c9                   	leave
 835039c:	c3                   	ret
 835039d:	90                   	nop

```

```c
// CSkill::get_need_sp_for_level @ 0x83502c8

/* CSkill::get_need_sp_for_level(int, int) const */

int __thiscall CSkill::get_need_sp_for_level(CSkill *this,int param_1,int param_2)

{
  int *piVar1;
  _List_const_iterator<int> local_20 [4];
  _List_const_iterator<int> local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  std::_List_const_iterator<int>::_List_const_iterator(local_20);
  local_18 = std::list<int,std::allocator<int>>::size();
  if (local_18 < param_2) {
    local_14 = -1;
  }
  else if (param_1 < 0) {
    local_14 = -1;
  }
  else {
    local_14 = 0;
    std::list<int,std::allocator<int>>::begin();
    for (local_10 = 1; local_10 < param_2; local_10 = local_10 + 1) {
      if ((param_1 < local_10) && (local_10 < param_2)) {
        piVar1 = (int *)std::_List_const_iterator<int>::operator*(local_20);
        local_14 = local_14 + *piVar1;
      }
      std::_List_const_iterator<int>::operator++(local_1c,(int)local_20);
    }
    piVar1 = (int *)std::_List_const_iterator<int>::operator*(local_20);
    local_14 = local_14 + *piVar1;
  }
  return local_14;
}

```

---

## get_need_sp_sfp_for_level

```asm
// === 0835027c CSkill::get_need_sp_sfp_for_level  [0x0835027c-0x83502c7] ===
 835027c:	55                   	push   %ebp
 835027d:	89 e5                	mov    %esp,%ebp
 835027f:	83 ec 18             	sub    $0x18,%esp
 8350282:	8b 45 08             	mov    0x8(%ebp),%eax
 8350285:	89 04 24             	mov    %eax,(%esp)
 8350288:	e8 25 b3 ed ff       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 835028d:	84 c0                	test   %al,%al
 835028f:	74 1b                	je     83502ac <_ZNK6CSkill25get_need_sp_sfp_for_levelEii+0x30>
 8350291:	8b 45 10             	mov    0x10(%ebp),%eax
 8350294:	89 44 24 08          	mov    %eax,0x8(%esp)
 8350298:	8b 45 0c             	mov    0xc(%ebp),%eax
 835029b:	89 44 24 04          	mov    %eax,0x4(%esp)
 835029f:	8b 45 08             	mov    0x8(%ebp),%eax
 83502a2:	89 04 24             	mov    %eax,(%esp)
 83502a5:	e8 fc fe ff ff       	call   83501a6 <_ZNK6CSkill22get_need_sfp_for_levelEii>
 83502aa:	eb 19                	jmp    83502c5 <_ZNK6CSkill25get_need_sp_sfp_for_levelEii+0x49>
 83502ac:	8b 45 10             	mov    0x10(%ebp),%eax
 83502af:	89 44 24 08          	mov    %eax,0x8(%esp)
 83502b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83502b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 83502ba:	8b 45 08             	mov    0x8(%ebp),%eax
 83502bd:	89 04 24             	mov    %eax,(%esp)
 83502c0:	e8 03 00 00 00       	call   83502c8 <_ZNK6CSkill21get_need_sp_for_levelEii>
 83502c5:	c9                   	leave
 83502c6:	c3                   	ret
 83502c7:	90                   	nop

```

```c
// CSkill::get_need_sp_sfp_for_level @ 0x835027c

/* CSkill::get_need_sp_sfp_for_level(int, int) const */

void __thiscall CSkill::get_need_sp_sfp_for_level(CSkill *this,int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = IsSpecialSkill(this);
  if (cVar1 == '\0') {
    get_need_sp_for_level(this,param_1,param_2);
  }
  else {
    get_need_sfp_for_level(this,param_1,param_2);
  }
  return;
}

```

---

## get_second_growtype_fitness

```asm
// === 083505be CSkill::get_second_growtype_fitness  [0x083505be-0x8350613] ===
 83505be:	55                   	push   %ebp
 83505bf:	89 e5                	mov    %esp,%ebp
 83505c1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83505c5:	78 12                	js     83505d9 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x1b>
 83505c7:	83 7d 0c 06          	cmpl   $0x6,0xc(%ebp)
 83505cb:	7f 0c                	jg     83505d9 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x1b>
 83505cd:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 83505d1:	78 06                	js     83505d9 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x1b>
 83505d3:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 83505d7:	7e 07                	jle    83505e0 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x22>
 83505d9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 83505de:	eb 31                	jmp    8350611 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x53>
 83505e0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83505e4:	78 13                	js     83505f9 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x3b>
 83505e6:	83 7d 0c 06          	cmpl   $0x6,0xc(%ebp)
 83505ea:	7f 0d                	jg     83505f9 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x3b>
 83505ec:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 83505f0:	75 07                	jne    83505f9 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x3b>
 83505f2:	b8 00 00 00 00       	mov    $0x0,%eax
 83505f7:	eb 18                	jmp    8350611 <_ZNK6CSkill27get_second_growtype_fitnessEii+0x53>
 83505f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 83505fc:	8b 45 10             	mov    0x10(%ebp),%eax
 83505ff:	8d 48 ff             	lea    -0x1(%eax),%ecx
 8350602:	8b 45 08             	mov    0x8(%ebp),%eax
 8350605:	c1 e2 02             	shl    $0x2,%edx
 8350608:	01 ca                	add    %ecx,%edx
 835060a:	83 c2 14             	add    $0x14,%edx
 835060d:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8350611:	5d                   	pop    %ebp
 8350612:	c3                   	ret
 8350613:	90                   	nop

```

```c
// CSkill::get_second_growtype_fitness @ 0x83505be

/* CSkill::get_second_growtype_fitness(int, int) const */

undefined4 __thiscall CSkill::get_second_growtype_fitness(CSkill *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_1 < 0) || (6 < param_1)) || (param_2 < 0)) || (2 < param_2)) {
    uVar1 = 0xffffffff;
  }
  else if (((param_1 < 0) || (6 < param_1)) || (param_2 != 0)) {
    uVar1 = *(undefined4 *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## get_second_growtype_max_level

```asm
// === 08350658 CSkill::get_second_growtype_max_level  [0x08350658-0x83506ad] ===
 8350658:	55                   	push   %ebp
 8350659:	89 e5                	mov    %esp,%ebp
 835065b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 835065f:	78 12                	js     8350673 <_ZNK6CSkill29get_second_growtype_max_levelEii+0x1b>
 8350661:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8350665:	7f 0c                	jg     8350673 <_ZNK6CSkill29get_second_growtype_max_levelEii+0x1b>
 8350667:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 835066b:	7e 06                	jle    8350673 <_ZNK6CSkill29get_second_growtype_max_levelEii+0x1b>
 835066d:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8350671:	7e 07                	jle    835067a <_ZNK6CSkill29get_second_growtype_max_levelEii+0x22>
 8350673:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8350678:	eb 31                	jmp    83506ab <_ZNK6CSkill29get_second_growtype_max_levelEii+0x53>
 835067a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 835067e:	78 13                	js     8350693 <_ZNK6CSkill29get_second_growtype_max_levelEii+0x3b>
 8350680:	83 7d 0c 06          	cmpl   $0x6,0xc(%ebp)
 8350684:	7f 0d                	jg     8350693 <_ZNK6CSkill29get_second_growtype_max_levelEii+0x3b>
 8350686:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 835068a:	75 07                	jne    8350693 <_ZNK6CSkill29get_second_growtype_max_levelEii+0x3b>
 835068c:	b8 00 00 00 00       	mov    $0x0,%eax
 8350691:	eb 18                	jmp    83506ab <_ZNK6CSkill29get_second_growtype_max_levelEii+0x53>
 8350693:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350696:	8b 45 10             	mov    0x10(%ebp),%eax
 8350699:	8d 48 ff             	lea    -0x1(%eax),%ecx
 835069c:	8b 45 08             	mov    0x8(%ebp),%eax
 835069f:	c1 e2 02             	shl    $0x2,%edx
 83506a2:	01 ca                	add    %ecx,%edx
 83506a4:	83 c2 14             	add    $0x14,%edx
 83506a7:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 83506ab:	5d                   	pop    %ebp
 83506ac:	c3                   	ret
 83506ad:	90                   	nop

```

```c
// CSkill::get_second_growtype_max_level @ 0x8350658

/* CSkill::get_second_growtype_max_level(int, int) const */

undefined4 __thiscall CSkill::get_second_growtype_max_level(CSkill *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_1 < 0) || (5 < param_1)) || (param_2 < 1)) || (2 < param_2)) {
    uVar1 = 0xffffffff;
  }
  else if (((param_1 < 0) || (6 < param_1)) || (param_2 != 0)) {
    uVar1 = *(undefined4 *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 0xc);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## reform_ui_group_no

```asm
// === 083507e8 CSkill::reform_ui_group_no  [0x083507e8-0x8350841] ===
 83507e8:	55                   	push   %ebp
 83507e9:	89 e5                	mov    %esp,%ebp
 83507eb:	83 ec 04             	sub    $0x4,%esp
 83507ee:	8b 45 10             	mov    0x10(%ebp),%eax
 83507f1:	88 45 fc             	mov    %al,-0x4(%ebp)
 83507f4:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 83507f8:	74 0b                	je     8350805 <_ZN6CSkill18reform_ui_group_noERibi+0x1d>
 83507fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 83507fd:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8350803:	eb 3a                	jmp    835083f <_ZN6CSkill18reform_ui_group_noERibi+0x57>
 8350805:	8b 45 0c             	mov    0xc(%ebp),%eax
 8350808:	8b 00                	mov    (%eax),%eax
 835080a:	85 c0                	test   %eax,%eax
 835080c:	78 31                	js     835083f <_ZN6CSkill18reform_ui_group_noERibi+0x57>
 835080e:	83 f8 03             	cmp    $0x3,%eax
 8350811:	7e 07                	jle    835081a <_ZN6CSkill18reform_ui_group_noERibi+0x32>
 8350813:	83 f8 04             	cmp    $0x4,%eax
 8350816:	74 1e                	je     8350836 <_ZN6CSkill18reform_ui_group_noERibi+0x4e>
 8350818:	eb 25                	jmp    835083f <_ZN6CSkill18reform_ui_group_noERibi+0x57>
 835081a:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
 835081e:	7e 0b                	jle    835082b <_ZN6CSkill18reform_ui_group_noERibi+0x43>
 8350820:	8b 45 0c             	mov    0xc(%ebp),%eax
 8350823:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8350829:	eb 14                	jmp    835083f <_ZN6CSkill18reform_ui_group_noERibi+0x57>
 835082b:	8b 45 0c             	mov    0xc(%ebp),%eax
 835082e:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8350834:	eb 09                	jmp    835083f <_ZN6CSkill18reform_ui_group_noERibi+0x57>
 8350836:	8b 45 0c             	mov    0xc(%ebp),%eax
 8350839:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 835083f:	c9                   	leave
 8350840:	c3                   	ret
 8350841:	90                   	nop

```

```c
// CSkill::reform_ui_group_no @ 0x83507e8

/* CSkill::reform_ui_group_no(int&, bool, int) */

void __thiscall CSkill::reform_ui_group_no(CSkill *this,int *param_1,bool param_2,int param_3)

{
  int iVar1;
  
  if (param_2) {
    *param_1 = 3;
  }
  else {
    iVar1 = *param_1;
    if (-1 < iVar1) {
      if (iVar1 < 4) {
        if (param_3 < 3) {
          *param_1 = 1;
        }
        else {
          *param_1 = 0;
        }
      }
      else if (iVar1 == 4) {
        *param_1 = 2;
      }
    }
  }
  return;
}

```

---

## set_fitness_second_growtype

```asm
// === 083506ae CSkill::set_fitness_second_growtype  [0x083506ae-0x83506d7] ===
 83506ae:	55                   	push   %ebp
 83506af:	89 e5                	mov    %esp,%ebp
 83506b1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83506b5:	7e 1b                	jle    83506d2 <_ZN6CSkill27set_fitness_second_growtypeEii+0x24>
 83506b7:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 83506bb:	7f 18                	jg     83506d5 <_ZN6CSkill27set_fitness_second_growtypeEii+0x27>
 83506bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 83506c0:	8d 50 ff             	lea    -0x1(%eax),%edx
 83506c3:	8b 45 08             	mov    0x8(%ebp),%eax
 83506c6:	8d 4a 2c             	lea    0x2c(%edx),%ecx
 83506c9:	8b 55 10             	mov    0x10(%ebp),%edx
 83506cc:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 83506d0:	eb 04                	jmp    83506d6 <_ZN6CSkill27set_fitness_second_growtypeEii+0x28>
 83506d2:	90                   	nop
 83506d3:	eb 01                	jmp    83506d6 <_ZN6CSkill27set_fitness_second_growtypeEii+0x28>
 83506d5:	90                   	nop
 83506d6:	5d                   	pop    %ebp
 83506d7:	c3                   	ret

```

```c
// CSkill::set_fitness_second_growtype @ 0x83506ae

/* CSkill::set_fitness_second_growtype(int, int) */

void __thiscall CSkill::set_fitness_second_growtype(CSkill *this,int param_1,int param_2)

{
  if ((0 < param_1) && (param_1 < 3)) {
    *(int *)(this + (param_1 + 0x2b) * 4 + 4) = param_2;
  }
  return;
}

```

---

## set_prelearned_skill

```asm
// === 08350024 CSkill::set_prelearned_skill  [0x08350024-0x83500f1] ===
 8350024:	55                   	push   %ebp
 8350025:	89 e5                	mov    %esp,%ebp
 8350027:	56                   	push   %esi
 8350028:	53                   	push   %ebx
 8350029:	83 ec 40             	sub    $0x40,%esp
 835002c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 835002f:	89 04 24             	mov    %eax,(%esp)
 8350032:	e8 4f f4 03 00       	call   838f486 <_ZNSt14_List_iteratorI10_pre_skillEC1Ev>
 8350037:	8b 45 08             	mov    0x8(%ebp),%eax
 835003a:	83 c0 18             	add    $0x18,%eax
 835003d:	89 04 24             	mov    %eax,(%esp)
 8350040:	e8 4f f4 03 00       	call   838f494 <_ZNKSt4listI10_pre_skillSaIS0_EE4sizeEv>
 8350045:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8350048:	8b 45 08             	mov    0x8(%ebp),%eax
 835004b:	8d 50 18             	lea    0x18(%eax),%edx
 835004e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8350051:	89 54 24 04          	mov    %edx,0x4(%esp)
 8350055:	89 04 24             	mov    %eax,(%esp)
 8350058:	e8 7b f4 03 00       	call   838f4d8 <_ZNSt4listI10_pre_skillSaIS0_EE5beginEv>
 835005d:	83 ec 04             	sub    $0x4,%esp
 8350060:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8350063:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8350066:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 835006d:	eb 6c                	jmp    83500db <_ZN6CSkill20set_prelearned_skillEv+0xb7>
 835006f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8350072:	89 04 24             	mov    %eax,(%esp)
 8350075:	e8 84 f4 03 00       	call   838f4fe <_ZNKSt14_List_iteratorI10_pre_skillEdeEv>
 835007a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 835007d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8350080:	8b 30                	mov    (%eax),%esi
 8350082:	8b 45 08             	mov    0x8(%ebp),%eax
 8350085:	8b 58 04             	mov    0x4(%eax),%ebx
 8350088:	e8 0e c1 d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 835008d:	8b 40 10             	mov    0x10(%eax),%eax
 8350090:	89 74 24 08          	mov    %esi,0x8(%esp)
 8350094:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8350098:	89 04 24             	mov    %eax,(%esp)
 835009b:	e8 d4 1a 00 00       	call   8351b74 <_ZN10CSkillList10find_skillEii>
 83500a0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83500a3:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 83500a7:	74 11                	je     83500ba <_ZN6CSkill20set_prelearned_skillEv+0x96>
 83500a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83500ac:	89 04 24             	mov    %eax,(%esp)
 83500af:	e8 e2 4a 02 00       	call   8374b96 <_ZNK6CSkill9get_groupEv>
 83500b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83500b7:	89 42 08             	mov    %eax,0x8(%edx)
 83500ba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83500bd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83500c4:	00 
 83500c5:	8d 55 e0             	lea    -0x20(%ebp),%edx
 83500c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 83500cc:	89 04 24             	mov    %eax,(%esp)
 83500cf:	e8 38 f4 03 00       	call   838f50c <_ZNSt14_List_iteratorI10_pre_skillEppEi>
 83500d4:	83 ec 04             	sub    $0x4,%esp
 83500d7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83500db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83500de:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 83500e1:	0f 9c c0             	setl   %al
 83500e4:	84 c0                	test   %al,%al
 83500e6:	75 87                	jne    835006f <_ZN6CSkill20set_prelearned_skillEv+0x4b>
 83500e8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 83500eb:	83 c4 00             	add    $0x0,%esp
 83500ee:	5b                   	pop    %ebx
 83500ef:	5e                   	pop    %esi
 83500f0:	5d                   	pop    %ebp
 83500f1:	c3                   	ret

```

```c
// CSkill::set_prelearned_skill @ 0x8350024

/* CSkill::set_prelearned_skill() */

void __thiscall CSkill::set_prelearned_skill(CSkill *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  _List_iterator<_pre_skill> local_24 [4];
  _List_iterator<_pre_skill> local_20 [4];
  int local_1c;
  CSkill *local_18;
  int local_14;
  int local_10;
  
  std::_List_iterator<_pre_skill>::_List_iterator(local_24);
  local_1c = std::list<_pre_skill,std::allocator<_pre_skill>>::size();
  std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
  for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
    local_10 = std::_List_iterator<_pre_skill>::operator*(local_24);
    iVar1 = *(int *)(this + 4);
    iVar2 = G_CDataManager();
    local_18 = (CSkill *)CSkillList::find_skill(*(int *)(iVar2 + 0x10),iVar1);
    if (local_18 != (CSkill *)0x0) {
      uVar3 = get_group(local_18);
      *(undefined4 *)(local_10 + 8) = uVar3;
    }
    std::_List_iterator<_pre_skill>::operator++(local_20,(int)local_24);
  }
  return;
}

```

---

## set_second_growtype_fitness

```asm
// === 0835057a CSkill::set_second_growtype_fitness  [0x0835057a-0x83505bd] ===
 835057a:	55                   	push   %ebp
 835057b:	89 e5                	mov    %esp,%ebp
 835057d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8350581:	78 2f                	js     83505b2 <_ZN6CSkill27set_second_growtype_fitnessEiii+0x38>
 8350583:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8350587:	7f 2c                	jg     83505b5 <_ZN6CSkill27set_second_growtype_fitnessEiii+0x3b>
 8350589:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 835058d:	7e 29                	jle    83505b8 <_ZN6CSkill27set_second_growtype_fitnessEiii+0x3e>
 835058f:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8350593:	7f 26                	jg     83505bb <_ZN6CSkill27set_second_growtype_fitnessEiii+0x41>
 8350595:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350598:	8b 45 10             	mov    0x10(%ebp),%eax
 835059b:	8d 48 ff             	lea    -0x1(%eax),%ecx
 835059e:	8b 45 08             	mov    0x8(%ebp),%eax
 83505a1:	c1 e2 02             	shl    $0x2,%edx
 83505a4:	01 ca                	add    %ecx,%edx
 83505a6:	8d 4a 14             	lea    0x14(%edx),%ecx
 83505a9:	8b 55 14             	mov    0x14(%ebp),%edx
 83505ac:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 83505b0:	eb 0a                	jmp    83505bc <_ZN6CSkill27set_second_growtype_fitnessEiii+0x42>
 83505b2:	90                   	nop
 83505b3:	eb 07                	jmp    83505bc <_ZN6CSkill27set_second_growtype_fitnessEiii+0x42>
 83505b5:	90                   	nop
 83505b6:	eb 04                	jmp    83505bc <_ZN6CSkill27set_second_growtype_fitnessEiii+0x42>
 83505b8:	90                   	nop
 83505b9:	eb 01                	jmp    83505bc <_ZN6CSkill27set_second_growtype_fitnessEiii+0x42>
 83505bb:	90                   	nop
 83505bc:	5d                   	pop    %ebp
 83505bd:	c3                   	ret

```

```c
// CSkill::set_second_growtype_fitness @ 0x835057a

/* CSkill::set_second_growtype_fitness(int, int, int) */

void __thiscall
CSkill::set_second_growtype_fitness(CSkill *this,int param_1,int param_2,int param_3)

{
  if ((((-1 < param_1) && (param_1 < 6)) && (0 < param_2)) && (param_2 < 3)) {
    *(int *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 4) = param_3;
  }
  return;
}

```

---

## set_second_growtype_max_level

```asm
// === 08350614 CSkill::set_second_growtype_max_level  [0x08350614-0x8350657] ===
 8350614:	55                   	push   %ebp
 8350615:	89 e5                	mov    %esp,%ebp
 8350617:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 835061b:	78 2f                	js     835064c <_ZN6CSkill29set_second_growtype_max_levelEiii+0x38>
 835061d:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8350621:	7f 2c                	jg     835064f <_ZN6CSkill29set_second_growtype_max_levelEiii+0x3b>
 8350623:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8350627:	7e 29                	jle    8350652 <_ZN6CSkill29set_second_growtype_max_levelEiii+0x3e>
 8350629:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 835062d:	7f 26                	jg     8350655 <_ZN6CSkill29set_second_growtype_max_levelEiii+0x41>
 835062f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8350632:	8b 45 10             	mov    0x10(%ebp),%eax
 8350635:	8d 48 ff             	lea    -0x1(%eax),%ecx
 8350638:	8b 45 08             	mov    0x8(%ebp),%eax
 835063b:	c1 e2 02             	shl    $0x2,%edx
 835063e:	01 ca                	add    %ecx,%edx
 8350640:	8d 4a 14             	lea    0x14(%edx),%ecx
 8350643:	8b 55 14             	mov    0x14(%ebp),%edx
 8350646:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 835064a:	eb 0a                	jmp    8350656 <_ZN6CSkill29set_second_growtype_max_levelEiii+0x42>
 835064c:	90                   	nop
 835064d:	eb 07                	jmp    8350656 <_ZN6CSkill29set_second_growtype_max_levelEiii+0x42>
 835064f:	90                   	nop
 8350650:	eb 04                	jmp    8350656 <_ZN6CSkill29set_second_growtype_max_levelEiii+0x42>
 8350652:	90                   	nop
 8350653:	eb 01                	jmp    8350656 <_ZN6CSkill29set_second_growtype_max_levelEiii+0x42>
 8350655:	90                   	nop
 8350656:	5d                   	pop    %ebp
 8350657:	c3                   	ret

```

```c
// CSkill::set_second_growtype_max_level @ 0x8350614

/* CSkill::set_second_growtype_max_level(int, int, int) */

void __thiscall
CSkill::set_second_growtype_max_level(CSkill *this,int param_1,int param_2,int param_3)

{
  if ((((-1 < param_1) && (param_1 < 6)) && (0 < param_2)) && (param_2 < 3)) {
    *(int *)(this + (param_1 * 4 + param_2 + 0x13) * 4 + 0xc) = param_3;
  }
  return;
}

```

