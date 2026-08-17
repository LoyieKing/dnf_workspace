# CMission_hereafter_kill_count

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Update

```asm
// === 085e3b80 CMission_hereafter_kill_count::Update  [0x085e3b80-0x85e3b9b] ===
 85e3b80:	55                   	push   %ebp
 85e3b81:	89 e5                	mov    %esp,%ebp
 85e3b83:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3b86:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3b8a:	8d 50 01             	lea    0x1(%eax),%edx
 85e3b8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3b90:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3b94:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3b99:	5d                   	pop    %ebp
 85e3b9a:	c3                   	ret
 85e3b9b:	90                   	nop

```

```c
// CMission_hereafter_kill_count::Update @ 0x85e3b80

/* CMission_hereafter_kill_count::Update(MissionInfo&, MissionClearCondition_Parameter const&) const
    */

undefined4
CMission_hereafter_kill_count::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  *(short *)(param_2 + 4) = *(short *)(param_2 + 4) + 1;
  return 1;
}

```

---

## isClearable

```asm
// === 085e3b9c CMission_hereafter_kill_count::isClearable  [0x085e3b9c-0x85e3bb3] ===
 85e3b9c:	55                   	push   %ebp
 85e3b9d:	89 e5                	mov    %esp,%ebp
 85e3b9f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3ba2:	8b 50 40             	mov    0x40(%eax),%edx
 85e3ba5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3ba8:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3bac:	98                   	cwtl
 85e3bad:	39 c2                	cmp    %eax,%edx
 85e3baf:	0f 9e c0             	setle  %al
 85e3bb2:	5d                   	pop    %ebp
 85e3bb3:	c3                   	ret

```

```c
// CMission_hereafter_kill_count::isClearable @ 0x85e3b9c

/* CMission_hereafter_kill_count::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_hereafter_kill_count::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e3b5a CMission_hereafter_kill_count::verifyMission  [0x085e3b5a-0x85e3b7f] ===
 85e3b5a:	55                   	push   %ebp
 85e3b5b:	89 e5                	mov    %esp,%ebp
 85e3b5d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3b60:	8b 40 40             	mov    0x40(%eax),%eax
 85e3b63:	8d 50 0a             	lea    0xa(%eax),%edx
 85e3b66:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3b69:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3b6d:	98                   	cwtl
 85e3b6e:	39 c2                	cmp    %eax,%edx
 85e3b70:	7f 07                	jg     85e3b79 <_ZNK29CMission_hereafter_kill_count13verifyMissionERK11MissionInfo+0x1f>
 85e3b72:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3b77:	eb 05                	jmp    85e3b7e <_ZNK29CMission_hereafter_kill_count13verifyMissionERK11MissionInfo+0x24>
 85e3b79:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3b7e:	5d                   	pop    %ebp
 85e3b7f:	c3                   	ret

```

```c
// CMission_hereafter_kill_count::verifyMission @ 0x85e3b5a

/* CMission_hereafter_kill_count::verifyMission(MissionInfo const&) const */

bool __thiscall
CMission_hereafter_kill_count::verifyMission
          (CMission_hereafter_kill_count *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}

```

