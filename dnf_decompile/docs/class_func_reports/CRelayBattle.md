# CRelayBattle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Reset

```asm
// === 085de01a CRelayBattle::Reset  [0x085de01a-0x85de045] ===
 85de01a:	55                   	push   %ebp
 85de01b:	89 e5                	mov    %esp,%ebp
 85de01d:	8b 45 08             	mov    0x8(%ebp),%eax
 85de020:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85de026:	8b 45 08             	mov    0x8(%ebp),%eax
 85de029:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 85de02f:	8b 45 08             	mov    0x8(%ebp),%eax
 85de032:	c6 40 06 00          	movb   $0x0,0x6(%eax)
 85de036:	8b 45 08             	mov    0x8(%ebp),%eax
 85de039:	c6 40 07 00          	movb   $0x0,0x7(%eax)
 85de03d:	8b 45 08             	mov    0x8(%ebp),%eax
 85de040:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 85de044:	5d                   	pop    %ebp
 85de045:	c3                   	ret

```

```c
// CRelayBattle::Reset @ 0x85de01a

/* CRelayBattle::Reset() */

void __thiscall CRelayBattle::Reset(CRelayBattle *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  this[6] = (CRelayBattle)0x0;
  this[7] = (CRelayBattle)0x0;
  this[8] = (CRelayBattle)0x0;
  return;
}

```

