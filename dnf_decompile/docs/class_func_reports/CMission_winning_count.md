# CMission_winning_count

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Update

```asm
// === 085e361a CMission_winning_count::Update  [0x085e361a-0x85e3635] ===
 85e361a:	55                   	push   %ebp
 85e361b:	89 e5                	mov    %esp,%ebp
 85e361d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3620:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3624:	8d 50 01             	lea    0x1(%eax),%edx
 85e3627:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e362a:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e362e:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3633:	5d                   	pop    %ebp
 85e3634:	c3                   	ret
 85e3635:	90                   	nop

```

```c
// CMission_winning_count::Update @ 0x85e361a

/* CMission_winning_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_winning_count::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## _canUpdate

```asm
// === 085e35d6 CMission_winning_count::_canUpdate  [0x085e35d6-0x85e3619] ===
 85e35d6:	55                   	push   %ebp
 85e35d7:	89 e5                	mov    %esp,%ebp
 85e35d9:	83 ec 28             	sub    $0x28,%esp
 85e35dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e35df:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 85e35e3:	0f b7 c0             	movzwl %ax,%eax
 85e35e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e35ea:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e35ed:	89 04 24             	mov    %eax,(%esp)
 85e35f0:	e8 eb 48 00 00       	call   85e7ee0 <_ZNSt6bitsetILj32EEC1Em>
 85e35f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e35fc:	00 
 85e35fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e3600:	89 04 24             	mov    %eax,(%esp)
 85e3603:	e8 46 74 47 00       	call   8a5aa4e <_Z19is_Victory_in_a_rowSt6bitsetILj32EEs>
 85e3608:	84 c0                	test   %al,%al
 85e360a:	74 07                	je     85e3613 <_ZNK22CMission_winning_count10_canUpdateERK31MissionClearCondition_Parameter+0x3d>
 85e360c:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3611:	eb 05                	jmp    85e3618 <_ZNK22CMission_winning_count10_canUpdateERK31MissionClearCondition_Parameter+0x42>
 85e3613:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3618:	c9                   	leave
 85e3619:	c3                   	ret

```

```c
// CMission_winning_count::_canUpdate @ 0x85e35d6

/* CMission_winning_count::_canUpdate(MissionClearCondition_Parameter const&) const */

bool __thiscall
CMission_winning_count::_canUpdate
          (CMission_winning_count *this,MissionClearCondition_Parameter *param_1)

{
  char cVar1;
  undefined4 local_10 [3];
  
  std::bitset<32u>::bitset((bitset<32u> *)local_10,(uint)*(ushort *)(param_1 + 1));
  cVar1 = is_Victory_in_a_row(local_10[0],1);
  return cVar1 != '\0';
}

```

---

## _isAcceptCondition

```asm
// === 085e3596 CMission_winning_count::_isAcceptCondition  [0x085e3596-0x85e35af] ===
 85e3596:	55                   	push   %ebp
 85e3597:	89 e5                	mov    %esp,%ebp
 85e3599:	83 ec 18             	sub    $0x18,%esp
 85e359c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e359f:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e35a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e35a6:	89 04 24             	mov    %eax,(%esp)
 85e35a9:	e8 e2 fe ff ff       	call   85e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>
 85e35ae:	c9                   	leave
 85e35af:	c3                   	ret

```

```c
// CMission_winning_count::_isAcceptCondition @ 0x85e3596

/* CMission_winning_count::_isAcceptCondition(CUser const&) const */

void __thiscall
CMission_winning_count::_isAcceptCondition(CMission_winning_count *this,CUser *param_1)

{
  CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  return;
}

```

---

## _makeTotalMissionInfo

```asm
// === 085e3548 CMission_winning_count::_makeTotalMissionInfo  [0x085e3548-0x85e3595] ===
 85e3548:	55                   	push   %ebp
 85e3549:	89 e5                	mov    %esp,%ebp
 85e354b:	53                   	push   %ebx
 85e354c:	83 ec 24             	sub    $0x24,%esp
 85e354f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3552:	8b 40 14             	mov    0x14(%eax),%eax
 85e3555:	83 f8 ff             	cmp    $0xffffffff,%eax
 85e3558:	74 35                	je     85e358f <_ZNK22CMission_winning_count21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x47>
 85e355a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e355d:	8b 58 14             	mov    0x14(%eax),%ebx
 85e3560:	e8 36 8c ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e3565:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e3569:	89 04 24             	mov    %eax,(%esp)
 85e356c:	e8 15 c5 d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e3571:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e3574:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e3577:	8b 00                	mov    (%eax),%eax
 85e3579:	83 c0 28             	add    $0x28,%eax
 85e357c:	8b 10                	mov    (%eax),%edx
 85e357e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e3581:	89 04 24             	mov    %eax,(%esp)
 85e3584:	ff d2                	call   *%edx
 85e3586:	89 c2                	mov    %eax,%edx
 85e3588:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e358b:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e358f:	83 c4 24             	add    $0x24,%esp
 85e3592:	5b                   	pop    %ebx
 85e3593:	5d                   	pop    %ebp
 85e3594:	c3                   	ret
 85e3595:	90                   	nop

```

```c
// CMission_winning_count::_makeTotalMissionInfo @ 0x85e3548

/* CMission_winning_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_winning_count::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x14) != -1) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    iVar2 = G_CDataManager();
    piVar3 = (int *)CDataManager::find_mission(iVar2);
    uVar1 = (**(code **)(*piVar3 + 0x28))(piVar3,uVar4);
    *(undefined2 *)(param_2 + 4) = uVar1;
  }
  return;
}

```

---

## isClearable

```asm
// === 085e3636 CMission_winning_count::isClearable  [0x085e3636-0x85e364d] ===
 85e3636:	55                   	push   %ebp
 85e3637:	89 e5                	mov    %esp,%ebp
 85e3639:	8b 45 08             	mov    0x8(%ebp),%eax
 85e363c:	8b 50 40             	mov    0x40(%eax),%edx
 85e363f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3642:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3646:	98                   	cwtl
 85e3647:	39 c2                	cmp    %eax,%edx
 85e3649:	0f 9e c0             	setle  %al
 85e364c:	5d                   	pop    %ebp
 85e364d:	c3                   	ret

```

```c
// CMission_winning_count::isClearable @ 0x85e3636

/* CMission_winning_count::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_winning_count::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e35b0 CMission_winning_count::verifyMission  [0x085e35b0-0x85e35d5] ===
 85e35b0:	55                   	push   %ebp
 85e35b1:	89 e5                	mov    %esp,%ebp
 85e35b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85e35b6:	8b 40 40             	mov    0x40(%eax),%eax
 85e35b9:	8d 50 0a             	lea    0xa(%eax),%edx
 85e35bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e35bf:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e35c3:	98                   	cwtl
 85e35c4:	39 c2                	cmp    %eax,%edx
 85e35c6:	7f 07                	jg     85e35cf <_ZNK22CMission_winning_count13verifyMissionERK11MissionInfo+0x1f>
 85e35c8:	b8 00 00 00 00       	mov    $0x0,%eax
 85e35cd:	eb 05                	jmp    85e35d4 <_ZNK22CMission_winning_count13verifyMissionERK11MissionInfo+0x24>
 85e35cf:	b8 01 00 00 00       	mov    $0x1,%eax
 85e35d4:	5d                   	pop    %ebp
 85e35d5:	c3                   	ret

```

```c
// CMission_winning_count::verifyMission @ 0x85e35b0

/* CMission_winning_count::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_winning_count::verifyMission(CMission_winning_count *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}

```

