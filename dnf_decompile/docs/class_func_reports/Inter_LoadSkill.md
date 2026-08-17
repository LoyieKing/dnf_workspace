# Inter_LoadSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c5152 Inter_LoadSkill::dispatch_sig  [0x084c5152-0x84c515b] ===
 84c5152:	55                   	push   %ebp
 84c5153:	89 e5                	mov    %esp,%ebp
 84c5155:	b8 00 00 00 00       	mov    $0x0,%eax
 84c515a:	5d                   	pop    %ebp
 84c515b:	c3                   	ret

```

```c
// Inter_LoadSkill::dispatch_sig @ 0x84c5152

/* Inter_LoadSkill::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadSkill::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}

```

