# cSecuUserAction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Init

```asm
// === 0827b3f4 cSecuUserAction::Init  [0x0827b3f4-0x827b401] ===
 827b3f4:	55                   	push   %ebp
 827b3f5:	89 e5                	mov    %esp,%ebp
 827b3f7:	8b 45 08             	mov    0x8(%ebp),%eax
 827b3fa:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 827b400:	5d                   	pop    %ebp
 827b401:	c3                   	ret

```

```c
// cSecuUserAction::Init @ 0x827b3f4

/* cSecuUserAction::Init() */

void __thiscall cSecuUserAction::Init(cSecuUserAction *this)

{
  *(undefined4 *)this = 0;
  return;
}

```

---

## IsSecurityStateOff

```asm
// === 0827b402 cSecuUserAction::IsSecurityStateOff  [0x0827b402-0x827b41c] ===
 827b402:	55                   	push   %ebp
 827b403:	89 e5                	mov    %esp,%ebp
 827b405:	8b 45 08             	mov    0x8(%ebp),%eax
 827b408:	8b 00                	mov    (%eax),%eax
 827b40a:	83 f8 01             	cmp    $0x1,%eax
 827b40d:	75 07                	jne    827b416 <_ZN15cSecuUserAction18IsSecurityStateOffEv+0x14>
 827b40f:	b8 01 00 00 00       	mov    $0x1,%eax
 827b414:	eb 05                	jmp    827b41b <_ZN15cSecuUserAction18IsSecurityStateOffEv+0x19>
 827b416:	b8 00 00 00 00       	mov    $0x0,%eax
 827b41b:	5d                   	pop    %ebp
 827b41c:	c3                   	ret

```

```c
// cSecuUserAction::IsSecurityStateOff @ 0x827b402

/* cSecuUserAction::IsSecurityStateOff() */

bool __thiscall cSecuUserAction::IsSecurityStateOff(cSecuUserAction *this)

{
  return *(int *)this == 1;
}

```

