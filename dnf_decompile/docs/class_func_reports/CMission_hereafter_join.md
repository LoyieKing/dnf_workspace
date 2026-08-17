# CMission_hereafter_join

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Update

```asm
// === 085e3934 CMission_hereafter_join::Update  [0x085e3934-0x85e394f] ===
 85e3934:	55                   	push   %ebp
 85e3935:	89 e5                	mov    %esp,%ebp
 85e3937:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e393a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e393e:	8d 50 01             	lea    0x1(%eax),%edx
 85e3941:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3944:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3948:	b8 01 00 00 00       	mov    $0x1,%eax
 85e394d:	5d                   	pop    %ebp
 85e394e:	c3                   	ret
 85e394f:	90                   	nop

```

```c
// CMission_hereafter_join::Update @ 0x85e3934

/* CMission_hereafter_join::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_hereafter_join::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## isClearable

```asm
// === 085e3950 CMission_hereafter_join::isClearable  [0x085e3950-0x85e3967] ===
 85e3950:	55                   	push   %ebp
 85e3951:	89 e5                	mov    %esp,%ebp
 85e3953:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3956:	8b 50 40             	mov    0x40(%eax),%edx
 85e3959:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e395c:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3960:	98                   	cwtl
 85e3961:	39 c2                	cmp    %eax,%edx
 85e3963:	0f 9e c0             	setle  %al
 85e3966:	5d                   	pop    %ebp
 85e3967:	c3                   	ret

```

```c
// CMission_hereafter_join::isClearable @ 0x85e3950

/* CMission_hereafter_join::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_hereafter_join::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e390e CMission_hereafter_join::verifyMission  [0x085e390e-0x85e3933] ===
 85e390e:	55                   	push   %ebp
 85e390f:	89 e5                	mov    %esp,%ebp
 85e3911:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3914:	8b 40 40             	mov    0x40(%eax),%eax
 85e3917:	8d 50 0a             	lea    0xa(%eax),%edx
 85e391a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e391d:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3921:	98                   	cwtl
 85e3922:	39 c2                	cmp    %eax,%edx
 85e3924:	7f 07                	jg     85e392d <_ZNK23CMission_hereafter_join13verifyMissionERK11MissionInfo+0x1f>
 85e3926:	b8 00 00 00 00       	mov    $0x0,%eax
 85e392b:	eb 05                	jmp    85e3932 <_ZNK23CMission_hereafter_join13verifyMissionERK11MissionInfo+0x24>
 85e392d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3932:	5d                   	pop    %ebp
 85e3933:	c3                   	ret

```

```c
// CMission_hereafter_join::verifyMission @ 0x85e390e

/* CMission_hereafter_join::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_hereafter_join::verifyMission(CMission_hereafter_join *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}

```

