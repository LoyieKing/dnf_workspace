# expert_extraction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetExtracterType

```asm
// === 084a2904 expert_extraction::GetExtracterType  [0x084a2904-0x84a2937] ===
 84a2904:	55                   	push   %ebp
 84a2905:	89 e5                	mov    %esp,%ebp
 84a2907:	8b 45 08             	mov    0x8(%ebp),%eax
 84a290a:	83 f8 02             	cmp    $0x2,%eax
 84a290d:	74 0c                	je     84a291b <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x17>
 84a290f:	83 f8 04             	cmp    $0x4,%eax
 84a2912:	74 0e                	je     84a2922 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x1e>
 84a2914:	83 f8 01             	cmp    $0x1,%eax
 84a2917:	74 10                	je     84a2929 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x25>
 84a2919:	eb 15                	jmp    84a2930 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x2c>
 84a291b:	b8 00 00 00 00       	mov    $0x0,%eax
 84a2920:	eb 13                	jmp    84a2935 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x31>
 84a2922:	b8 02 00 00 00       	mov    $0x2,%eax
 84a2927:	eb 0c                	jmp    84a2935 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x31>
 84a2929:	b8 01 00 00 00       	mov    $0x1,%eax
 84a292e:	eb 05                	jmp    84a2935 <_ZN17expert_extraction16GetExtracterTypeE20ENUM_EXPERT_JOB_TYPE+0x31>
 84a2930:	b8 03 00 00 00       	mov    $0x3,%eax
 84a2935:	5d                   	pop    %ebp
 84a2936:	c3                   	ret
 84a2937:	90                   	nop

```

```c
// expert_extraction::GetExtracterType @ 0x84a2904

/* expert_extraction::GetExtracterType(ENUM_EXPERT_JOB_TYPE) */

undefined4 expert_extraction::GetExtracterType(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 0;
  }
  else if (param_1 == 4) {
    uVar1 = 2;
  }
  else if (param_1 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

```

