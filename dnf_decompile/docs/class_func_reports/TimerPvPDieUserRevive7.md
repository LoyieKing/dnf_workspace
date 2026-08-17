# TimerPvPDieUserRevive7

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08636700 TimerPvPDieUserRevive7::dispatch_sig  [0x08636700-0x8636729] ===
 8636700:	55                   	push   %ebp
 8636701:	89 e5                	mov    %esp,%ebp
 8636703:	83 ec 18             	sub    $0x18,%esp
 8636706:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 863670d:	00 
 863670e:	8b 45 14             	mov    0x14(%ebp),%eax
 8636711:	89 44 24 08          	mov    %eax,0x8(%esp)
 8636715:	8b 45 10             	mov    0x10(%ebp),%eax
 8636718:	89 44 24 04          	mov    %eax,0x4(%esp)
 863671c:	8b 45 0c             	mov    0xc(%ebp),%eax
 863671f:	89 04 24             	mov    %eax,(%esp)
 8636722:	e8 2e fe ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 8636727:	c9                   	leave
 8636728:	c3                   	ret
 8636729:	90                   	nop

```

```c
// TimerPvPDieUserRevive7::dispatch_sig @ 0x8636700

/* TimerPvPDieUserRevive7::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive7::dispatch_sig
          (TimerPvPDieUserRevive7 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,7);
  return;
}

```

