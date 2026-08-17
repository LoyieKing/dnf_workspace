# TimerPvPDieUserRevive6

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086366d6 TimerPvPDieUserRevive6::dispatch_sig  [0x086366d6-0x86366ff] ===
 86366d6:	55                   	push   %ebp
 86366d7:	89 e5                	mov    %esp,%ebp
 86366d9:	83 ec 18             	sub    $0x18,%esp
 86366dc:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 86366e3:	00 
 86366e4:	8b 45 14             	mov    0x14(%ebp),%eax
 86366e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86366eb:	8b 45 10             	mov    0x10(%ebp),%eax
 86366ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 86366f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86366f5:	89 04 24             	mov    %eax,(%esp)
 86366f8:	e8 58 fe ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 86366fd:	c9                   	leave
 86366fe:	c3                   	ret
 86366ff:	90                   	nop

```

```c
// TimerPvPDieUserRevive6::dispatch_sig @ 0x86366d6

/* TimerPvPDieUserRevive6::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive6::dispatch_sig
          (TimerPvPDieUserRevive6 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,6);
  return;
}

```

