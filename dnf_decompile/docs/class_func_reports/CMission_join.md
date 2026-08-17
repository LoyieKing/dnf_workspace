# CMission_join

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Update

```asm
// === 085e3818 CMission_join::Update  [0x085e3818-0x85e3833] ===
 85e3818:	55                   	push   %ebp
 85e3819:	89 e5                	mov    %esp,%ebp
 85e381b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e381e:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3822:	8d 50 01             	lea    0x1(%eax),%edx
 85e3825:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3828:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e382c:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3831:	5d                   	pop    %ebp
 85e3832:	c3                   	ret
 85e3833:	90                   	nop

```

```c
// CMission_join::Update @ 0x85e3818

/* CMission_join::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 CMission_join::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## _isAcceptCondition

```asm
// === 085e37fe CMission_join::_isAcceptCondition  [0x085e37fe-0x85e3817] ===
 85e37fe:	55                   	push   %ebp
 85e37ff:	89 e5                	mov    %esp,%ebp
 85e3801:	83 ec 18             	sub    $0x18,%esp
 85e3804:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3807:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e380a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e380e:	89 04 24             	mov    %eax,(%esp)
 85e3811:	e8 7a fc ff ff       	call   85e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>
 85e3816:	c9                   	leave
 85e3817:	c3                   	ret

```

```c
// CMission_join::_isAcceptCondition @ 0x85e37fe

/* CMission_join::_isAcceptCondition(CUser const&) const */

void __thiscall CMission_join::_isAcceptCondition(CMission_join *this,CUser *param_1)

{
  CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  return;
}

```

---

## _makeTotalMissionInfo

```asm
// === 085e378a CMission_join::_makeTotalMissionInfo  [0x085e378a-0x85e37d7] ===
 85e378a:	55                   	push   %ebp
 85e378b:	89 e5                	mov    %esp,%ebp
 85e378d:	53                   	push   %ebx
 85e378e:	83 ec 24             	sub    $0x24,%esp
 85e3791:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3794:	8b 40 14             	mov    0x14(%eax),%eax
 85e3797:	83 f8 ff             	cmp    $0xffffffff,%eax
 85e379a:	74 35                	je     85e37d1 <_ZNK13CMission_join21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x47>
 85e379c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e379f:	8b 58 14             	mov    0x14(%eax),%ebx
 85e37a2:	e8 f4 89 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e37a7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e37ab:	89 04 24             	mov    %eax,(%esp)
 85e37ae:	e8 d3 c2 d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e37b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e37b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e37b9:	8b 00                	mov    (%eax),%eax
 85e37bb:	83 c0 28             	add    $0x28,%eax
 85e37be:	8b 10                	mov    (%eax),%edx
 85e37c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e37c3:	89 04 24             	mov    %eax,(%esp)
 85e37c6:	ff d2                	call   *%edx
 85e37c8:	89 c2                	mov    %eax,%edx
 85e37ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e37cd:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e37d1:	83 c4 24             	add    $0x24,%esp
 85e37d4:	5b                   	pop    %ebx
 85e37d5:	5d                   	pop    %ebp
 85e37d6:	c3                   	ret
 85e37d7:	90                   	nop

```

```c
// CMission_join::_makeTotalMissionInfo @ 0x85e378a

/* CMission_join::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_join::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

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
// === 085e3834 CMission_join::isClearable  [0x085e3834-0x85e384b] ===
 85e3834:	55                   	push   %ebp
 85e3835:	89 e5                	mov    %esp,%ebp
 85e3837:	8b 45 08             	mov    0x8(%ebp),%eax
 85e383a:	8b 50 40             	mov    0x40(%eax),%edx
 85e383d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3840:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3844:	98                   	cwtl
 85e3845:	39 c2                	cmp    %eax,%edx
 85e3847:	0f 9e c0             	setle  %al
 85e384a:	5d                   	pop    %ebp
 85e384b:	c3                   	ret

```

```c
// CMission_join::isClearable @ 0x85e3834

/* CMission_join::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_join::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e37d8 CMission_join::verifyMission  [0x085e37d8-0x85e37fd] ===
 85e37d8:	55                   	push   %ebp
 85e37d9:	89 e5                	mov    %esp,%ebp
 85e37db:	8b 45 08             	mov    0x8(%ebp),%eax
 85e37de:	8b 40 40             	mov    0x40(%eax),%eax
 85e37e1:	8d 50 0a             	lea    0xa(%eax),%edx
 85e37e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e37e7:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e37eb:	98                   	cwtl
 85e37ec:	39 c2                	cmp    %eax,%edx
 85e37ee:	7f 07                	jg     85e37f7 <_ZNK13CMission_join13verifyMissionERK11MissionInfo+0x1f>
 85e37f0:	b8 00 00 00 00       	mov    $0x0,%eax
 85e37f5:	eb 05                	jmp    85e37fc <_ZNK13CMission_join13verifyMissionERK11MissionInfo+0x24>
 85e37f7:	b8 01 00 00 00       	mov    $0x1,%eax
 85e37fc:	5d                   	pop    %ebp
 85e37fd:	c3                   	ret

```

```c
// CMission_join::verifyMission @ 0x85e37d8

/* CMission_join::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_join::verifyMission(CMission_join *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}

```

