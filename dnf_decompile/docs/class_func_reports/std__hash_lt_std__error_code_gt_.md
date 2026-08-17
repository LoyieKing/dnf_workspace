# std__hash_lt_std__error_code_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator

```asm
// === 086d9f90 std::hash<std::error_code>::operator  [0x086d9f90-0x86d9fbf] ===
 86d9f90:	55                   	push   %ebp
 86d9f91:	b8 c5 9d 1c 81       	mov    $0x811c9dc5,%eax
 86d9f96:	89 e5                	mov    %esp,%ebp
 86d9f98:	8d 55 0c             	lea    0xc(%ebp),%edx
 86d9f9b:	53                   	push   %ebx
 86d9f9c:	8d 5d 14             	lea    0x14(%ebp),%ebx
 86d9f9f:	90                   	nop
 86d9fa0:	0f be 0a             	movsbl (%edx),%ecx
 86d9fa3:	83 c2 01             	add    $0x1,%edx
 86d9fa6:	31 c1                	xor    %eax,%ecx
 86d9fa8:	69 c1 93 01 00 01    	imul   $0x1000193,%ecx,%eax
 86d9fae:	39 da                	cmp    %ebx,%edx
 86d9fb0:	75 ee                	jne    86d9fa0 <_ZNKSt4hashISt10error_codeEclES0_+0x10>
 86d9fb2:	5b                   	pop    %ebx
 86d9fb3:	5d                   	pop    %ebp
 86d9fb4:	c3                   	ret
 86d9fb5:	90                   	nop
 86d9fb6:	90                   	nop
 86d9fb7:	90                   	nop
 86d9fb8:	90                   	nop
 86d9fb9:	90                   	nop
 86d9fba:	90                   	nop
 86d9fbb:	90                   	nop
 86d9fbc:	90                   	nop
 86d9fbd:	90                   	nop
 86d9fbe:	90                   	nop
 86d9fbf:	90                   	nop

```

```c
// std::hash<std::error_code>::operator @ 0x86d9f90

/* std::hash<std::error_code>::TEMPNAMEPLACEHOLDERVALUE(std::error_code) const */

uint __thiscall std::hash<std::error_code>::operator()(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0x811c9dc5;
  pcVar3 = &stack0x00000008;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    uVar2 = ((int)cVar1 ^ uVar2) * 0x1000193;
  } while (pcVar3 != &stack0x00000010);
  return uVar2;
}

```

