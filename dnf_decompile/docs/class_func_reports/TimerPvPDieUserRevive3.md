# TimerPvPDieUserRevive3

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08636658 TimerPvPDieUserRevive3::dispatch_sig  [0x08636658-0x8636681] ===
 8636658:	55                   	push   %ebp
 8636659:	89 e5                	mov    %esp,%ebp
 863665b:	83 ec 18             	sub    $0x18,%esp
 863665e:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 8636665:	00 
 8636666:	8b 45 14             	mov    0x14(%ebp),%eax
 8636669:	89 44 24 08          	mov    %eax,0x8(%esp)
 863666d:	8b 45 10             	mov    0x10(%ebp),%eax
 8636670:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636674:	8b 45 0c             	mov    0xc(%ebp),%eax
 8636677:	89 04 24             	mov    %eax,(%esp)
 863667a:	e8 d6 fe ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 863667f:	c9                   	leave
 8636680:	c3                   	ret
 8636681:	90                   	nop

```

```c
// TimerPvPDieUserRevive3::dispatch_sig @ 0x8636658

/* TimerPvPDieUserRevive3::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive3::dispatch_sig
          (TimerPvPDieUserRevive3 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,3);
  return;
}

```

