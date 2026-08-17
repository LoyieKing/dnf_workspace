# UPGRADEJAR

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## doNothing

```asm
// === 089687cc UPGRADEJAR::doNothing  [0x089687cc-0x89687d0] ===
 89687cc:	55                   	push   %ebp
 89687cd:	89 e5                	mov    %esp,%ebp
 89687cf:	5d                   	pop    %ebp
 89687d0:	c3                   	ret

```

```c
// UPGRADEJAR::doNothing @ 0x89687cc

/* UPGRADEJAR::doNothing() */

void UPGRADEJAR::doNothing(void)

{
  return;
}

```

