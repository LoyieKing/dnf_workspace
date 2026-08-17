# CMission_hereafter_winning_count

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Update

```asm
// === 085e39d2 CMission_hereafter_winning_count::Update  [0x085e39d2-0x85e39ed] ===
 85e39d2:	55                   	push   %ebp
 85e39d3:	89 e5                	mov    %esp,%ebp
 85e39d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e39d8:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e39dc:	8d 50 01             	lea    0x1(%eax),%edx
 85e39df:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e39e2:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e39e6:	b8 01 00 00 00       	mov    $0x1,%eax
 85e39eb:	5d                   	pop    %ebp
 85e39ec:	c3                   	ret
 85e39ed:	90                   	nop

```

```c
// CMission_hereafter_winning_count::Update @ 0x85e39d2

/* CMission_hereafter_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&)
   const */

undefined4
CMission_hereafter_winning_count::Update
          (MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## _canUpdate

```asm
// === 085e398e CMission_hereafter_winning_count::_canUpdate  [0x085e398e-0x85e39d1] ===
 85e398e:	55                   	push   %ebp
 85e398f:	89 e5                	mov    %esp,%ebp
 85e3991:	83 ec 28             	sub    $0x28,%esp
 85e3994:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3997:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 85e399b:	0f b7 c0             	movzwl %ax,%eax
 85e399e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e39a2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e39a5:	89 04 24             	mov    %eax,(%esp)
 85e39a8:	e8 33 45 00 00       	call   85e7ee0 <_ZNSt6bitsetILj32EEC1Em>
 85e39ad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e39b4:	00 
 85e39b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e39b8:	89 04 24             	mov    %eax,(%esp)
 85e39bb:	e8 8e 70 47 00       	call   8a5aa4e <_Z19is_Victory_in_a_rowSt6bitsetILj32EEs>
 85e39c0:	84 c0                	test   %al,%al
 85e39c2:	74 07                	je     85e39cb <_ZNK32CMission_hereafter_winning_count10_canUpdateERK31MissionClearCondition_Parameter+0x3d>
 85e39c4:	b8 01 00 00 00       	mov    $0x1,%eax
 85e39c9:	eb 05                	jmp    85e39d0 <_ZNK32CMission_hereafter_winning_count10_canUpdateERK31MissionClearCondition_Parameter+0x42>
 85e39cb:	b8 00 00 00 00       	mov    $0x0,%eax
 85e39d0:	c9                   	leave
 85e39d1:	c3                   	ret

```

```c
// CMission_hereafter_winning_count::_canUpdate @ 0x85e398e

/* CMission_hereafter_winning_count::_canUpdate(MissionClearCondition_Parameter const&) const */

bool __thiscall
CMission_hereafter_winning_count::_canUpdate
          (CMission_hereafter_winning_count *this,MissionClearCondition_Parameter *param_1)

{
  char cVar1;
  undefined4 local_10 [3];
  
  std::bitset<32u>::bitset((bitset<32u> *)local_10,(uint)*(ushort *)(param_1 + 1));
  cVar1 = is_Victory_in_a_row(local_10[0],1);
  return cVar1 != '\0';
}

```

---

## isClearable

```asm
// === 085e39ee CMission_hereafter_winning_count::isClearable  [0x085e39ee-0x85e3a05] ===
 85e39ee:	55                   	push   %ebp
 85e39ef:	89 e5                	mov    %esp,%ebp
 85e39f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e39f4:	8b 50 40             	mov    0x40(%eax),%edx
 85e39f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e39fa:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e39fe:	98                   	cwtl
 85e39ff:	39 c2                	cmp    %eax,%edx
 85e3a01:	0f 9e c0             	setle  %al
 85e3a04:	5d                   	pop    %ebp
 85e3a05:	c3                   	ret

```

```c
// CMission_hereafter_winning_count::isClearable @ 0x85e39ee

/* CMission_hereafter_winning_count::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_hereafter_winning_count::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e3968 CMission_hereafter_winning_count::verifyMission  [0x085e3968-0x85e398d] ===
 85e3968:	55                   	push   %ebp
 85e3969:	89 e5                	mov    %esp,%ebp
 85e396b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e396e:	8b 40 40             	mov    0x40(%eax),%eax
 85e3971:	8d 50 0a             	lea    0xa(%eax),%edx
 85e3974:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3977:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e397b:	98                   	cwtl
 85e397c:	39 c2                	cmp    %eax,%edx
 85e397e:	7f 07                	jg     85e3987 <_ZNK32CMission_hereafter_winning_count13verifyMissionERK11MissionInfo+0x1f>
 85e3980:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3985:	eb 05                	jmp    85e398c <_ZNK32CMission_hereafter_winning_count13verifyMissionERK11MissionInfo+0x24>
 85e3987:	b8 01 00 00 00       	mov    $0x1,%eax
 85e398c:	5d                   	pop    %ebp
 85e398d:	c3                   	ret

```

```c
// CMission_hereafter_winning_count::verifyMission @ 0x85e3968

/* CMission_hereafter_winning_count::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_hereafter_winning_count::verifyMission
          (CMission_hereafter_winning_count *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}

```

