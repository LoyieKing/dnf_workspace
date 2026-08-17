# CMission_kill_count

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Update

```asm
// === 085e38da CMission_kill_count::Update  [0x085e38da-0x85e38f5] ===
 85e38da:	55                   	push   %ebp
 85e38db:	89 e5                	mov    %esp,%ebp
 85e38dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e38e0:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e38e4:	8d 50 01             	lea    0x1(%eax),%edx
 85e38e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e38ea:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e38ee:	b8 01 00 00 00       	mov    $0x1,%eax
 85e38f3:	5d                   	pop    %ebp
 85e38f4:	c3                   	ret
 85e38f5:	90                   	nop

```

```c
// CMission_kill_count::Update @ 0x85e38da

/* CMission_kill_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_kill_count::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## _isAcceptCondition

```asm
// === 085e389a CMission_kill_count::_isAcceptCondition  [0x085e389a-0x85e38b3] ===
 85e389a:	55                   	push   %ebp
 85e389b:	89 e5                	mov    %esp,%ebp
 85e389d:	83 ec 18             	sub    $0x18,%esp
 85e38a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e38a3:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e38a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e38aa:	89 04 24             	mov    %eax,(%esp)
 85e38ad:	e8 de fb ff ff       	call   85e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>
 85e38b2:	c9                   	leave
 85e38b3:	c3                   	ret

```

```c
// CMission_kill_count::_isAcceptCondition @ 0x85e389a

/* CMission_kill_count::_isAcceptCondition(CUser const&) const */

void __thiscall CMission_kill_count::_isAcceptCondition(CMission_kill_count *this,CUser *param_1)

{
  CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  return;
}

```

---

## _makeTotalMissionInfo

```asm
// === 085e384c CMission_kill_count::_makeTotalMissionInfo  [0x085e384c-0x85e3899] ===
 85e384c:	55                   	push   %ebp
 85e384d:	89 e5                	mov    %esp,%ebp
 85e384f:	53                   	push   %ebx
 85e3850:	83 ec 24             	sub    $0x24,%esp
 85e3853:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3856:	8b 40 14             	mov    0x14(%eax),%eax
 85e3859:	83 f8 ff             	cmp    $0xffffffff,%eax
 85e385c:	74 35                	je     85e3893 <_ZNK19CMission_kill_count21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x47>
 85e385e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3861:	8b 58 14             	mov    0x14(%eax),%ebx
 85e3864:	e8 32 89 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e3869:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e386d:	89 04 24             	mov    %eax,(%esp)
 85e3870:	e8 11 c2 d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e3875:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e3878:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e387b:	8b 00                	mov    (%eax),%eax
 85e387d:	83 c0 28             	add    $0x28,%eax
 85e3880:	8b 10                	mov    (%eax),%edx
 85e3882:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e3885:	89 04 24             	mov    %eax,(%esp)
 85e3888:	ff d2                	call   *%edx
 85e388a:	89 c2                	mov    %eax,%edx
 85e388c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e388f:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3893:	83 c4 24             	add    $0x24,%esp
 85e3896:	5b                   	pop    %ebx
 85e3897:	5d                   	pop    %ebp
 85e3898:	c3                   	ret
 85e3899:	90                   	nop

```

```c
// CMission_kill_count::_makeTotalMissionInfo @ 0x85e384c

/* CMission_kill_count::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission_kill_count::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

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
// === 085e38f6 CMission_kill_count::isClearable  [0x085e38f6-0x85e390d] ===
 85e38f6:	55                   	push   %ebp
 85e38f7:	89 e5                	mov    %esp,%ebp
 85e38f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85e38fc:	8b 50 40             	mov    0x40(%eax),%edx
 85e38ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3902:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3906:	98                   	cwtl
 85e3907:	39 c2                	cmp    %eax,%edx
 85e3909:	0f 9e c0             	setle  %al
 85e390c:	5d                   	pop    %ebp
 85e390d:	c3                   	ret

```

```c
// CMission_kill_count::isClearable @ 0x85e38f6

/* CMission_kill_count::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_kill_count::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e38b4 CMission_kill_count::verifyMission  [0x085e38b4-0x85e38d9] ===
 85e38b4:	55                   	push   %ebp
 85e38b5:	89 e5                	mov    %esp,%ebp
 85e38b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85e38ba:	8b 40 40             	mov    0x40(%eax),%eax
 85e38bd:	8d 50 0a             	lea    0xa(%eax),%edx
 85e38c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e38c3:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e38c7:	98                   	cwtl
 85e38c8:	39 c2                	cmp    %eax,%edx
 85e38ca:	7f 07                	jg     85e38d3 <_ZNK19CMission_kill_count13verifyMissionERK11MissionInfo+0x1f>
 85e38cc:	b8 00 00 00 00       	mov    $0x0,%eax
 85e38d1:	eb 05                	jmp    85e38d8 <_ZNK19CMission_kill_count13verifyMissionERK11MissionInfo+0x24>
 85e38d3:	b8 01 00 00 00       	mov    $0x1,%eax
 85e38d8:	5d                   	pop    %ebp
 85e38d9:	c3                   	ret

```

```c
// CMission_kill_count::verifyMission @ 0x85e38b4

/* CMission_kill_count::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_kill_count::verifyMission(CMission_kill_count *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}

```

