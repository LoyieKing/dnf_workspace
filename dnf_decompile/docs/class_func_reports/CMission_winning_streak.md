# CMission_winning_streak

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Update

```asm
// === 085e3692 CMission_winning_streak::Update  [0x085e3692-0x85e36fb] ===
 85e3692:	55                   	push   %ebp
 85e3693:	89 e5                	mov    %esp,%ebp
 85e3695:	8b 45 10             	mov    0x10(%ebp),%eax
 85e3698:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 85e369c:	0f b7 c0             	movzwl %ax,%eax
 85e369f:	83 e0 01             	and    $0x1,%eax
 85e36a2:	84 c0                	test   %al,%al
 85e36a4:	74 3f                	je     85e36e5 <_ZNK23CMission_winning_streak6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x53>
 85e36a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e36a9:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e36ad:	8d 50 ff             	lea    -0x1(%eax),%edx
 85e36b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e36b3:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e36b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e36ba:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e36be:	66 85 c0             	test   %ax,%ax
 85e36c1:	7f 31                	jg     85e36f4 <_ZNK23CMission_winning_streak6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x62>
 85e36c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e36c6:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e36ca:	8d 50 01             	lea    0x1(%eax),%edx
 85e36cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e36d0:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e36d4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e36d7:	8b 40 40             	mov    0x40(%eax),%eax
 85e36da:	89 c2                	mov    %eax,%edx
 85e36dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e36df:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e36e3:	eb 0f                	jmp    85e36f4 <_ZNK23CMission_winning_streak6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x62>
 85e36e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e36e8:	8b 40 40             	mov    0x40(%eax),%eax
 85e36eb:	89 c2                	mov    %eax,%edx
 85e36ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e36f0:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e36f4:	b8 01 00 00 00       	mov    $0x1,%eax
 85e36f9:	5d                   	pop    %ebp
 85e36fa:	c3                   	ret
 85e36fb:	90                   	nop

```

```c
// CMission_winning_streak::Update @ 0x85e3692

/* CMission_winning_streak::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_winning_streak::Update
          (CMission_winning_streak *this,MissionInfo *param_1,
          MissionClearCondition_Parameter *param_2)

{
  if ((*(ushort *)(param_2 + 1) & 1) == 0) {
    *(short *)(param_1 + 6) = (short)*(undefined4 *)(this + 0x40);
  }
  else {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
    if (*(short *)(param_1 + 6) < 1) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
      *(short *)(param_1 + 6) = (short)*(undefined4 *)(this + 0x40);
    }
  }
  return 1;
}

```

---

## _canUpdate

```asm
// === 085e364e CMission_winning_streak::_canUpdate  [0x085e364e-0x85e3657] ===
 85e364e:	55                   	push   %ebp
 85e364f:	89 e5                	mov    %esp,%ebp
 85e3651:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3656:	5d                   	pop    %ebp
 85e3657:	c3                   	ret

```

```c
// CMission_winning_streak::_canUpdate @ 0x85e364e

/* CMission_winning_streak::_canUpdate(MissionClearCondition_Parameter const&) const */

undefined4 CMission_winning_streak::_canUpdate(MissionClearCondition_Parameter *param_1)

{
  return 1;
}

```

---

## _makeTotalMissionInfo

```asm
// === 085e3658 CMission_winning_streak::_makeTotalMissionInfo  [0x085e3658-0x85e366b] ===
 85e3658:	55                   	push   %ebp
 85e3659:	89 e5                	mov    %esp,%ebp
 85e365b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e365e:	8b 40 40             	mov    0x40(%eax),%eax
 85e3661:	89 c2                	mov    %eax,%edx
 85e3663:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3666:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e366a:	5d                   	pop    %ebp
 85e366b:	c3                   	ret

```

```c
// CMission_winning_streak::_makeTotalMissionInfo @ 0x85e3658

/* CMission_winning_streak::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_winning_streak::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

{
  *(short *)(param_2 + 6) = (short)*(undefined4 *)(param_1 + 0x40);
  return;
}

```

---

## isClearable

```asm
// === 085e36fc CMission_winning_streak::isClearable  [0x085e36fc-0x85e3713] ===
 85e36fc:	55                   	push   %ebp
 85e36fd:	89 e5                	mov    %esp,%ebp
 85e36ff:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3702:	8b 50 44             	mov    0x44(%eax),%edx
 85e3705:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3708:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e370c:	98                   	cwtl
 85e370d:	39 c2                	cmp    %eax,%edx
 85e370f:	0f 9e c0             	setle  %al
 85e3712:	5d                   	pop    %ebp
 85e3713:	c3                   	ret

```

```c
// CMission_winning_streak::isClearable @ 0x85e36fc

/* CMission_winning_streak::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_winning_streak::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x44) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e366c CMission_winning_streak::verifyMission  [0x085e366c-0x85e3691] ===
 85e366c:	55                   	push   %ebp
 85e366d:	89 e5                	mov    %esp,%ebp
 85e366f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3672:	8b 40 44             	mov    0x44(%eax),%eax
 85e3675:	8d 50 0a             	lea    0xa(%eax),%edx
 85e3678:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e367b:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e367f:	98                   	cwtl
 85e3680:	39 c2                	cmp    %eax,%edx
 85e3682:	7f 07                	jg     85e368b <_ZNK23CMission_winning_streak13verifyMissionERK11MissionInfo+0x1f>
 85e3684:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3689:	eb 05                	jmp    85e3690 <_ZNK23CMission_winning_streak13verifyMissionERK11MissionInfo+0x24>
 85e368b:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3690:	5d                   	pop    %ebp
 85e3691:	c3                   	ret

```

```c
// CMission_winning_streak::verifyMission @ 0x85e366c

/* CMission_winning_streak::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_winning_streak::verifyMission(CMission_winning_streak *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x44) + 10;
}

```

