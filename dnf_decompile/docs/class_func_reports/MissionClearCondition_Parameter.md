# MissionClearCondition_Parameter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## MissionClearCondition_Parameter

```asm
// === 085e1a44 MissionClearCondition_Parameter::MissionClearCondition_Parameter  [0x085e1a44-0x85e1a69] ===
 85e1a44:	55                   	push   %ebp
 85e1a45:	89 e5                	mov    %esp,%ebp
 85e1a47:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1a4a:	c6 00 0a             	movb   $0xa,(%eax)
 85e1a4d:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85e1a51:	75 08                	jne    85e1a5b <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE+0x17>
 85e1a53:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1a56:	c6 00 01             	movb   $0x1,(%eax)
 85e1a59:	eb 0c                	jmp    85e1a67 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE+0x23>
 85e1a5b:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 85e1a5f:	75 06                	jne    85e1a67 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE+0x23>
 85e1a61:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1a64:	c6 00 02             	movb   $0x2,(%eax)
 85e1a67:	5d                   	pop    %ebp
 85e1a68:	c3                   	ret
 85e1a69:	90                   	nop

```

```c
// MissionClearCondition_Parameter::MissionClearCondition_Parameter @ 0x85e1a44

/* MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE) */

void __thiscall
MissionClearCondition_Parameter::MissionClearCondition_Parameter
          (MissionClearCondition_Parameter *this,int param_2)

{
  *this = (MissionClearCondition_Parameter)0xa;
  if (param_2 == 2) {
    *this = (MissionClearCondition_Parameter)0x1;
  }
  else if (param_2 == 3) {
    *this = (MissionClearCondition_Parameter)0x2;
  }
  return;
}

```

