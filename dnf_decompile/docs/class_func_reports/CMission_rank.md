# CMission_rank

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Update

```asm
// === 085e3780 CMission_rank::Update  [0x085e3780-0x85e3789] ===
 85e3780:	55                   	push   %ebp
 85e3781:	89 e5                	mov    %esp,%ebp
 85e3783:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3788:	5d                   	pop    %ebp
 85e3789:	c3                   	ret

```

```c
// CMission_rank::Update @ 0x85e3780

/* CMission_rank::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 CMission_rank::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  return 1;
}

```

---

## isAcceptCondition

```asm
// === 085e372c CMission_rank::isAcceptCondition  [0x085e372c-0x85e377f] ===
 85e372c:	55                   	push   %ebp
 85e372d:	89 e5                	mov    %esp,%ebp
 85e372f:	53                   	push   %ebx
 85e3730:	83 ec 14             	sub    $0x14,%esp
 85e3733:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3736:	8b 58 18             	mov    0x18(%eax),%ebx
 85e3739:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e373c:	89 04 24             	mov    %eax,(%esp)
 85e373f:	e8 06 b7 bb ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85e3744:	39 c3                	cmp    %eax,%ebx
 85e3746:	7f 1c                	jg     85e3764 <_ZNK13CMission_rank17isAcceptConditionERK5CUser+0x38>
 85e3748:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e374b:	89 04 24             	mov    %eax,(%esp)
 85e374e:	e8 f7 b6 bb ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85e3753:	8b 55 08             	mov    0x8(%ebp),%edx
 85e3756:	8b 52 1c             	mov    0x1c(%edx),%edx
 85e3759:	39 d0                	cmp    %edx,%eax
 85e375b:	7d 07                	jge    85e3764 <_ZNK13CMission_rank17isAcceptConditionERK5CUser+0x38>
 85e375d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3762:	eb 05                	jmp    85e3769 <_ZNK13CMission_rank17isAcceptConditionERK5CUser+0x3d>
 85e3764:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3769:	84 c0                	test   %al,%al
 85e376b:	74 07                	je     85e3774 <_ZNK13CMission_rank17isAcceptConditionERK5CUser+0x48>
 85e376d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3772:	eb 05                	jmp    85e3779 <_ZNK13CMission_rank17isAcceptConditionERK5CUser+0x4d>
 85e3774:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3779:	83 c4 14             	add    $0x14,%esp
 85e377c:	5b                   	pop    %ebx
 85e377d:	5d                   	pop    %ebp
 85e377e:	c3                   	ret
 85e377f:	90                   	nop

```

```c
// CMission_rank::isAcceptCondition @ 0x85e372c

/* CMission_rank::isAcceptCondition(CUser const&) const */

undefined1 __thiscall CMission_rank::isAcceptCondition(CMission_rank *this,CUser *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x18);
  iVar2 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
  if ((iVar2 < iVar3) ||
     (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1),
     *(int *)(this + 0x1c) <= iVar3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## isClearable

```asm
// === 085e3714 CMission_rank::isClearable  [0x085e3714-0x85e372b] ===
 85e3714:	55                   	push   %ebp
 85e3715:	89 e5                	mov    %esp,%ebp
 85e3717:	8b 45 08             	mov    0x8(%ebp),%eax
 85e371a:	8b 50 40             	mov    0x40(%eax),%edx
 85e371d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3720:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3724:	98                   	cwtl
 85e3725:	39 c2                	cmp    %eax,%edx
 85e3727:	0f 9e c0             	setle  %al
 85e372a:	5d                   	pop    %ebp
 85e372b:	c3                   	ret

```

```c
// CMission_rank::isClearable @ 0x85e3714

/* CMission_rank::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_rank::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

