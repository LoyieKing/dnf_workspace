# TimerPvPDieUserRevive5

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086366ac TimerPvPDieUserRevive5::dispatch_sig  [0x086366ac-0x86366d5] ===
 86366ac:	55                   	push   %ebp
 86366ad:	89 e5                	mov    %esp,%ebp
 86366af:	83 ec 18             	sub    $0x18,%esp
 86366b2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86366b9:	00 
 86366ba:	8b 45 14             	mov    0x14(%ebp),%eax
 86366bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 86366c1:	8b 45 10             	mov    0x10(%ebp),%eax
 86366c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86366c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86366cb:	89 04 24             	mov    %eax,(%esp)
 86366ce:	e8 82 fe ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 86366d3:	c9                   	leave
 86366d4:	c3                   	ret
 86366d5:	90                   	nop

```

```c
// TimerPvPDieUserRevive5::dispatch_sig @ 0x86366ac

/* TimerPvPDieUserRevive5::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive5::dispatch_sig
          (TimerPvPDieUserRevive5 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,5);
  return;
}

```

