# Global__CGlobalFunc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Get_State_Check

```asm
// === 081466f0 Global::CGlobalFunc::Get_State_Check  [0x081466f0-0x8146721] ===
 81466f0:	55                   	push   %ebp
 81466f1:	89 e5                	mov    %esp,%ebp
 81466f3:	53                   	push   %ebx
 81466f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81466f7:	83 f8 0d             	cmp    $0xd,%eax
 81466fa:	77 1d                	ja     8146719 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state+0x29>
 81466fc:	ba 01 00 00 00       	mov    $0x1,%edx
 8146701:	89 d3                	mov    %edx,%ebx
 8146703:	89 c1                	mov    %eax,%ecx
 8146705:	d3 e3                	shl    %cl,%ebx
 8146707:	89 d8                	mov    %ebx,%eax
 8146709:	25 20 34 00 00       	and    $0x3420,%eax
 814670e:	85 c0                	test   %eax,%eax
 8146710:	74 07                	je     8146719 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state+0x29>
 8146712:	b8 01 00 00 00       	mov    $0x1,%eax
 8146717:	eb 05                	jmp    814671e <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state+0x2e>
 8146719:	b8 00 00 00 00       	mov    $0x0,%eax
 814671e:	5b                   	pop    %ebx
 814671f:	5d                   	pop    %ebp
 8146720:	c3                   	ret
 8146721:	90                   	nop

```

```c
// Global::CGlobalFunc::Get_State_Check @ 0x81466f0

/* Global::CGlobalFunc::Get_State_Check(ch_state) */

undefined4 Global::CGlobalFunc::Get_State_Check(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xe) && ((1 << ((byte)param_1 & 0x1f) & 0x3420U) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

