# random_option

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetRandomOption

```asm
// === 085f0eb0 random_option::GetRandomOption  [0x085f0eb0-0x85f0ec1] ===
 85f0eb0:	55                   	push   %ebp
 85f0eb1:	89 e5                	mov    %esp,%ebp
 85f0eb3:	83 ec 08             	sub    $0x8,%esp
 85f0eb6:	e8 e0 b2 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85f0ebb:	05 10 4e 00 00       	add    $0x4e10,%eax
 85f0ec0:	c9                   	leave
 85f0ec1:	c3                   	ret

```

```c
// random_option::GetRandomOption @ 0x85f0eb0

/* random_option::GetRandomOption() */

int random_option::GetRandomOption(void)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  return iVar1 + 0x4e10;
}

```

