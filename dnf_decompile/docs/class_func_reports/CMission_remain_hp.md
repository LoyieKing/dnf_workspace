# CMission_remain_hp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Update

```asm
// === 085e3a44 CMission_remain_hp::Update  [0x085e3a44-0x85e3a5f] ===
 85e3a44:	55                   	push   %ebp
 85e3a45:	89 e5                	mov    %esp,%ebp
 85e3a47:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3a4a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3a4e:	8d 50 01             	lea    0x1(%eax),%edx
 85e3a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3a54:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3a58:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3a5d:	5d                   	pop    %ebp
 85e3a5e:	c3                   	ret
 85e3a5f:	90                   	nop

```

```c
// CMission_remain_hp::Update @ 0x85e3a44

/* CMission_remain_hp::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 CMission_remain_hp::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## isClearable

```asm
// === 085e3a2c CMission_remain_hp::isClearable  [0x085e3a2c-0x85e3a43] ===
 85e3a2c:	55                   	push   %ebp
 85e3a2d:	89 e5                	mov    %esp,%ebp
 85e3a2f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3a32:	8b 50 44             	mov    0x44(%eax),%edx
 85e3a35:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3a38:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3a3c:	98                   	cwtl
 85e3a3d:	39 c2                	cmp    %eax,%edx
 85e3a3f:	0f 9e c0             	setle  %al
 85e3a42:	5d                   	pop    %ebp
 85e3a43:	c3                   	ret

```

```c
// CMission_remain_hp::isClearable @ 0x85e3a2c

/* CMission_remain_hp::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_remain_hp::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x44) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e3a06 CMission_remain_hp::verifyMission  [0x085e3a06-0x85e3a2b] ===
 85e3a06:	55                   	push   %ebp
 85e3a07:	89 e5                	mov    %esp,%ebp
 85e3a09:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3a0c:	8b 40 44             	mov    0x44(%eax),%eax
 85e3a0f:	8d 50 0a             	lea    0xa(%eax),%edx
 85e3a12:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3a15:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3a19:	98                   	cwtl
 85e3a1a:	39 c2                	cmp    %eax,%edx
 85e3a1c:	7f 07                	jg     85e3a25 <_ZNK18CMission_remain_hp13verifyMissionERK11MissionInfo+0x1f>
 85e3a1e:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3a23:	eb 05                	jmp    85e3a2a <_ZNK18CMission_remain_hp13verifyMissionERK11MissionInfo+0x24>
 85e3a25:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3a2a:	5d                   	pop    %ebp
 85e3a2b:	c3                   	ret

```

```c
// CMission_remain_hp::verifyMission @ 0x85e3a06

/* CMission_remain_hp::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_remain_hp::verifyMission(CMission_remain_hp *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x44) + 10;
}

```

