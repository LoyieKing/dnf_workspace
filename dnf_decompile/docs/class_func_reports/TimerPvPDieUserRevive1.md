# TimerPvPDieUserRevive1

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08636604 TimerPvPDieUserRevive1::dispatch_sig  [0x08636604-0x863662d] ===
 8636604:	55                   	push   %ebp
 8636605:	89 e5                	mov    %esp,%ebp
 8636607:	83 ec 18             	sub    $0x18,%esp
 863660a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8636611:	00 
 8636612:	8b 45 14             	mov    0x14(%ebp),%eax
 8636615:	89 44 24 08          	mov    %eax,0x8(%esp)
 8636619:	8b 45 10             	mov    0x10(%ebp),%eax
 863661c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636620:	8b 45 0c             	mov    0xc(%ebp),%eax
 8636623:	89 04 24             	mov    %eax,(%esp)
 8636626:	e8 2a ff ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 863662b:	c9                   	leave
 863662c:	c3                   	ret
 863662d:	90                   	nop

```

```c
// TimerPvPDieUserRevive1::dispatch_sig @ 0x8636604

/* TimerPvPDieUserRevive1::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive1::dispatch_sig
          (TimerPvPDieUserRevive1 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,1);
  return;
}

```

