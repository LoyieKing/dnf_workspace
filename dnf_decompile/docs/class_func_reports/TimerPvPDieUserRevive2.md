# TimerPvPDieUserRevive2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863662e TimerPvPDieUserRevive2::dispatch_sig  [0x0863662e-0x8636657] ===
 863662e:	55                   	push   %ebp
 863662f:	89 e5                	mov    %esp,%ebp
 8636631:	83 ec 18             	sub    $0x18,%esp
 8636634:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 863663b:	00 
 863663c:	8b 45 14             	mov    0x14(%ebp),%eax
 863663f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8636643:	8b 45 10             	mov    0x10(%ebp),%eax
 8636646:	89 44 24 04          	mov    %eax,0x4(%esp)
 863664a:	8b 45 0c             	mov    0xc(%ebp),%eax
 863664d:	89 04 24             	mov    %eax,(%esp)
 8636650:	e8 00 ff ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 8636655:	c9                   	leave
 8636656:	c3                   	ret
 8636657:	90                   	nop

```

```c
// TimerPvPDieUserRevive2::dispatch_sig @ 0x863662e

/* TimerPvPDieUserRevive2::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive2::dispatch_sig
          (TimerPvPDieUserRevive2 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,2);
  return;
}

```

