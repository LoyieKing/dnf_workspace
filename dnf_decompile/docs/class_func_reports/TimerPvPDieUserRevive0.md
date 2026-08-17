# TimerPvPDieUserRevive0

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086365da TimerPvPDieUserRevive0::dispatch_sig  [0x086365da-0x8636603] ===
 86365da:	55                   	push   %ebp
 86365db:	89 e5                	mov    %esp,%ebp
 86365dd:	83 ec 18             	sub    $0x18,%esp
 86365e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86365e7:	00 
 86365e8:	8b 45 14             	mov    0x14(%ebp),%eax
 86365eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 86365ef:	8b 45 10             	mov    0x10(%ebp),%eax
 86365f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86365f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86365f9:	89 04 24             	mov    %eax,(%esp)
 86365fc:	e8 54 ff ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 8636601:	c9                   	leave
 8636602:	c3                   	ret
 8636603:	90                   	nop

```

```c
// TimerPvPDieUserRevive0::dispatch_sig @ 0x86365da

/* TimerPvPDieUserRevive0::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive0::dispatch_sig
          (TimerPvPDieUserRevive0 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,0);
  return;
}

```

