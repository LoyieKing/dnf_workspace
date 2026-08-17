# Inter_LoadPuUserCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e7fe2 Inter_LoadPuUserCheck::dispatch_sig  [0x084e7fe2-0x84e8003] ===
 84e7fe2:	55                   	push   %ebp
 84e7fe3:	89 e5                	mov    %esp,%ebp
 84e7fe5:	83 ec 10             	sub    $0x10,%esp
 84e7fe8:	8b 45 10             	mov    0x10(%ebp),%eax
 84e7feb:	89 45 fc             	mov    %eax,-0x4(%ebp)
 84e7fee:	8b 45 fc             	mov    -0x4(%ebp),%eax
 84e7ff1:	0f b6 10             	movzbl (%eax),%edx
 84e7ff4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e7ff7:	88 90 d8 96 07 00    	mov    %dl,0x796d8(%eax)
 84e7ffd:	b8 00 00 00 00       	mov    $0x0,%eax
 84e8002:	c9                   	leave
 84e8003:	c3                   	ret

```

```c
// Inter_LoadPuUserCheck::dispatch_sig @ 0x84e7fe2

/* Inter_LoadPuUserCheck::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPuUserCheck::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  param_2[0x796d8] = *(char *)param_3;
  return 0;
}

```

