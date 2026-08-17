# TimerPvPDieUserRevive4

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08636682 TimerPvPDieUserRevive4::dispatch_sig  [0x08636682-0x86366ab] ===
 8636682:	55                   	push   %ebp
 8636683:	89 e5                	mov    %esp,%ebp
 8636685:	83 ec 18             	sub    $0x18,%esp
 8636688:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 863668f:	00 
 8636690:	8b 45 14             	mov    0x14(%ebp),%eax
 8636693:	89 44 24 08          	mov    %eax,0x8(%esp)
 8636697:	8b 45 10             	mov    0x10(%ebp),%eax
 863669a:	89 44 24 04          	mov    %eax,0x4(%esp)
 863669e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86366a1:	89 04 24             	mov    %eax,(%esp)
 86366a4:	e8 ac fe ff ff       	call   8636555 <_Z16PvPDieUserReviveiiji>
 86366a9:	c9                   	leave
 86366aa:	c3                   	ret
 86366ab:	90                   	nop

```

```c
// TimerPvPDieUserRevive4::dispatch_sig @ 0x8636682

/* TimerPvPDieUserRevive4::dispatch_sig(int, int, unsigned int) */

void __thiscall
TimerPvPDieUserRevive4::dispatch_sig
          (TimerPvPDieUserRevive4 *this,int param_1,int param_2,uint param_3)

{
  PvPDieUserRevive(param_1,param_2,param_3,4);
  return;
}

```

