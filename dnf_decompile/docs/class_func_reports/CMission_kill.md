# CMission_kill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Update

```asm
// === 085e3c14 CMission_kill::Update  [0x085e3c14-0x85e3c2f] ===
 85e3c14:	55                   	push   %ebp
 85e3c15:	89 e5                	mov    %esp,%ebp
 85e3c17:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3c1a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3c1e:	8d 50 01             	lea    0x1(%eax),%edx
 85e3c21:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3c24:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3c28:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3c2d:	5d                   	pop    %ebp
 85e3c2e:	c3                   	ret
 85e3c2f:	90                   	nop

```

```c
// CMission_kill::Update @ 0x85e3c14

/* CMission_kill::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 CMission_kill::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## _canUpdate

```asm
// === 085e3bcc CMission_kill::_canUpdate  [0x085e3bcc-0x85e3bed] ===
 85e3bcc:	55                   	push   %ebp
 85e3bcd:	89 e5                	mov    %esp,%ebp
 85e3bcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3bd2:	8b 50 03             	mov    0x3(%eax),%edx
 85e3bd5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3bd8:	8b 40 40             	mov    0x40(%eax),%eax
 85e3bdb:	39 c2                	cmp    %eax,%edx
 85e3bdd:	7c 07                	jl     85e3be6 <_ZNK13CMission_kill10_canUpdateERK31MissionClearCondition_Parameter+0x1a>
 85e3bdf:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3be4:	eb 05                	jmp    85e3beb <_ZNK13CMission_kill10_canUpdateERK31MissionClearCondition_Parameter+0x1f>
 85e3be6:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3beb:	5d                   	pop    %ebp
 85e3bec:	c3                   	ret
 85e3bed:	90                   	nop

```

```c
// CMission_kill::_canUpdate @ 0x85e3bcc

/* CMission_kill::_canUpdate(MissionClearCondition_Parameter const&) const */

bool __thiscall
CMission_kill::_canUpdate(CMission_kill *this,MissionClearCondition_Parameter *param_1)

{
  return *(int *)(this + 0x40) <= *(int *)(param_1 + 3);
}

```

---

## isClearable

```asm
// === 085e3bb4 CMission_kill::isClearable  [0x085e3bb4-0x85e3bcb] ===
 85e3bb4:	55                   	push   %ebp
 85e3bb5:	89 e5                	mov    %esp,%ebp
 85e3bb7:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3bba:	8b 50 44             	mov    0x44(%eax),%edx
 85e3bbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3bc0:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3bc4:	98                   	cwtl
 85e3bc5:	39 c2                	cmp    %eax,%edx
 85e3bc7:	0f 9e c0             	setle  %al
 85e3bca:	5d                   	pop    %ebp
 85e3bcb:	c3                   	ret

```

```c
// CMission_kill::isClearable @ 0x85e3bb4

/* CMission_kill::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_kill::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x44) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e3bee CMission_kill::verifyMission  [0x085e3bee-0x85e3c13] ===
 85e3bee:	55                   	push   %ebp
 85e3bef:	89 e5                	mov    %esp,%ebp
 85e3bf1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3bf4:	8b 40 44             	mov    0x44(%eax),%eax
 85e3bf7:	8d 50 0a             	lea    0xa(%eax),%edx
 85e3bfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3bfd:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3c01:	98                   	cwtl
 85e3c02:	39 c2                	cmp    %eax,%edx
 85e3c04:	7f 07                	jg     85e3c0d <_ZNK13CMission_kill13verifyMissionERK11MissionInfo+0x1f>
 85e3c06:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3c0b:	eb 05                	jmp    85e3c12 <_ZNK13CMission_kill13verifyMissionERK11MissionInfo+0x24>
 85e3c0d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3c12:	5d                   	pop    %ebp
 85e3c13:	c3                   	ret

```

```c
// CMission_kill::verifyMission @ 0x85e3bee

/* CMission_kill::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_kill::verifyMission(CMission_kill *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x44) + 10;
}

```

