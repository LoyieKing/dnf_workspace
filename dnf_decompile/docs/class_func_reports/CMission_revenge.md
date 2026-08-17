# CMission_revenge

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Update

```asm
// === 085e3a60 CMission_revenge::Update  [0x085e3a60-0x85e3b1b] ===
 85e3a60:	55                   	push   %ebp
 85e3a61:	89 e5                	mov    %esp,%ebp
 85e3a63:	53                   	push   %ebx
 85e3a64:	83 ec 24             	sub    $0x24,%esp
 85e3a67:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3a6a:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e3a6e:	98                   	cwtl
 85e3a6f:	83 f8 01             	cmp    $0x1,%eax
 85e3a72:	74 2a                	je     85e3a9e <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x3e>
 85e3a74:	83 f8 02             	cmp    $0x2,%eax
 85e3a77:	74 35                	je     85e3aae <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x4e>
 85e3a79:	85 c0                	test   %eax,%eax
 85e3a7b:	75 65                	jne    85e3ae2 <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x82>
 85e3a7d:	8b 45 10             	mov    0x10(%ebp),%eax
 85e3a80:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 85e3a84:	0f b7 c0             	movzwl %ax,%eax
 85e3a87:	83 e0 01             	and    $0x1,%eax
 85e3a8a:	85 c0                	test   %eax,%eax
 85e3a8c:	75 09                	jne    85e3a97 <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0x37>
 85e3a8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3a91:	66 c7 40 06 01 00    	movw   $0x1,0x6(%eax)
 85e3a97:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3a9c:	eb 78                	jmp    85e3b16 <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0xb6>
 85e3a9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3aa1:	66 c7 40 06 02 00    	movw   $0x2,0x6(%eax)
 85e3aa7:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3aac:	eb 68                	jmp    85e3b16 <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0xb6>
 85e3aae:	8b 45 10             	mov    0x10(%ebp),%eax
 85e3ab1:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 85e3ab5:	0f b7 c0             	movzwl %ax,%eax
 85e3ab8:	83 e0 01             	and    $0x1,%eax
 85e3abb:	84 c0                	test   %al,%al
 85e3abd:	74 51                	je     85e3b10 <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0xb0>
 85e3abf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3ac2:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 85e3ac8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3acb:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3acf:	83 c0 01             	add    $0x1,%eax
 85e3ad2:	89 c2                	mov    %eax,%edx
 85e3ad4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3ad7:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e3adb:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3ae0:	eb 34                	jmp    85e3b16 <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0xb6>
 85e3ae2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3ae5:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e3ae9:	0f bf d8             	movswl %ax,%ebx
 85e3aec:	8d 45 f7             	lea    -0x9(%ebp),%eax
 85e3aef:	89 04 24             	mov    %eax,(%esp)
 85e3af2:	e8 63 72 c4 ff       	call   822ad5a <_ZN12cMyTraceNoopC1Ev>
 85e3af7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85e3afb:	c7 44 24 04 84 2c cc 	movl   $0x8cc2c84,0x4(%esp)
 85e3b02:	08 
 85e3b03:	8d 45 f7             	lea    -0x9(%ebp),%eax
 85e3b06:	89 04 24             	mov    %eax,(%esp)
 85e3b09:	e8 52 72 c4 ff       	call   822ad60 <_ZN12cMyTraceNoopclEPKcz>
 85e3b0e:	eb 01                	jmp    85e3b11 <_ZNK16CMission_revenge6UpdateER11MissionInfoRK31MissionClearCondition_Parameter+0xb1>
 85e3b10:	90                   	nop
 85e3b11:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3b16:	83 c4 24             	add    $0x24,%esp
 85e3b19:	5b                   	pop    %ebx
 85e3b1a:	5d                   	pop    %ebp
 85e3b1b:	c3                   	ret

```

```c
// CMission_revenge::Update @ 0x85e3a60

/* CMission_revenge::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4 __thiscall
CMission_revenge::Update
          (CMission_revenge *this,MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  short sVar1;
  cMyTraceNoop local_d [5];
  
  sVar1 = *(short *)(param_1 + 6);
  if (sVar1 == 1) {
    *(undefined2 *)(param_1 + 6) = 2;
  }
  else if (sVar1 == 2) {
    if ((*(ushort *)(param_2 + 1) & 1) != 0) {
      *(undefined2 *)(param_1 + 6) = 0;
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
      return 1;
    }
  }
  else {
    if (sVar1 == 0) {
      if ((*(ushort *)(param_2 + 1) & 1) == 0) {
        *(undefined2 *)(param_1 + 6) = 1;
      }
      return 0;
    }
    sVar1 = *(short *)(param_1 + 6);
    cMyTraceNoop::cMyTraceNoop(local_d);
    cMyTraceNoop::operator()((char *)local_d,"[@missionSystem] : revenge ??? : %d",(int)sVar1);
  }
  return 0;
}

```

---

## isClearable

```asm
// === 085e3b1c CMission_revenge::isClearable  [0x085e3b1c-0x85e3b33] ===
 85e3b1c:	55                   	push   %ebp
 85e3b1d:	89 e5                	mov    %esp,%ebp
 85e3b1f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3b22:	8b 50 40             	mov    0x40(%eax),%edx
 85e3b25:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3b28:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3b2c:	98                   	cwtl
 85e3b2d:	39 c2                	cmp    %eax,%edx
 85e3b2f:	0f 9e c0             	setle  %al
 85e3b32:	5d                   	pop    %ebp
 85e3b33:	c3                   	ret

```

```c
// CMission_revenge::isClearable @ 0x85e3b1c

/* CMission_revenge::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_revenge::isClearable(MissionInfo *param_1,bool *param_2)

{
  return CONCAT31((int3)(char)((ushort)*(short *)(param_2 + 4) >> 8),
                  *(int *)(param_1 + 0x40) <= (int)*(short *)(param_2 + 4));
}

```

---

## verifyMission

```asm
// === 085e3b34 CMission_revenge::verifyMission  [0x085e3b34-0x85e3b59] ===
 85e3b34:	55                   	push   %ebp
 85e3b35:	89 e5                	mov    %esp,%ebp
 85e3b37:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3b3a:	8b 40 40             	mov    0x40(%eax),%eax
 85e3b3d:	8d 50 0a             	lea    0xa(%eax),%edx
 85e3b40:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3b43:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e3b47:	98                   	cwtl
 85e3b48:	39 c2                	cmp    %eax,%edx
 85e3b4a:	7f 07                	jg     85e3b53 <_ZNK16CMission_revenge13verifyMissionERK11MissionInfo+0x1f>
 85e3b4c:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3b51:	eb 05                	jmp    85e3b58 <_ZNK16CMission_revenge13verifyMissionERK11MissionInfo+0x24>
 85e3b53:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3b58:	5d                   	pop    %ebp
 85e3b59:	c3                   	ret

```

```c
// CMission_revenge::verifyMission @ 0x85e3b34

/* CMission_revenge::verifyMission(MissionInfo const&) const */

bool __thiscall CMission_revenge::verifyMission(CMission_revenge *this,MissionInfo *param_1)

{
  return (int)*(short *)(param_1 + 4) < *(int *)(this + 0x40) + 10;
}

```

