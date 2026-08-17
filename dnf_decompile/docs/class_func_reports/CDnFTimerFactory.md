# CDnFTimerFactory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CreateDnFTimer

```asm
// === 085ecab0 CDnFTimerFactory::CreateDnFTimer  [0x085ecab0-0x85ecad7] ===
 85ecab0:	55                   	push   %ebp
 85ecab1:	89 e5                	mov    %esp,%ebp
 85ecab3:	53                   	push   %ebx
 85ecab4:	83 ec 14             	sub    $0x14,%esp
 85ecab7:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 85ecabe:	e8 8d 79 13 00       	call   8724450 <_Znwj>
 85ecac3:	89 c3                	mov    %eax,%ebx
 85ecac5:	89 d8                	mov    %ebx,%eax
 85ecac7:	89 04 24             	mov    %eax,(%esp)
 85ecaca:	e8 23 0d 00 00       	call   85ed7f2 <_ZN10CUnixTimerC1Ev>
 85ecacf:	89 d8                	mov    %ebx,%eax
 85ecad1:	83 c4 14             	add    $0x14,%esp
 85ecad4:	5b                   	pop    %ebx
 85ecad5:	5d                   	pop    %ebp
 85ecad6:	c3                   	ret
 85ecad7:	90                   	nop

```

```c
// CDnFTimerFactory::CreateDnFTimer @ 0x85ecab0

/* CDnFTimerFactory::CreateDnFTimer() */

CUnixTimer * CDnFTimerFactory::CreateDnFTimer(void)

{
  CUnixTimer *this;
  
  this = operator_new(0xc);
  CUnixTimer::CUnixTimer(this);
  return this;
}

```

---

## DestroyDnFTimer

```asm
// === 085ecad8 CDnFTimerFactory::DestroyDnFTimer  [0x085ecad8-0x85ecaeb] ===
 85ecad8:	55                   	push   %ebp
 85ecad9:	89 e5                	mov    %esp,%ebp
 85ecadb:	83 ec 18             	sub    $0x18,%esp
 85ecade:	8b 45 08             	mov    0x8(%ebp),%eax
 85ecae1:	89 04 24             	mov    %eax,(%esp)
 85ecae4:	e8 07 7a 13 00       	call   87244f0 <_ZdlPv>
 85ecae9:	c9                   	leave
 85ecaea:	c3                   	ret
 85ecaeb:	90                   	nop

```

```c
// CDnFTimerFactory::DestroyDnFTimer @ 0x85ecad8

/* CDnFTimerFactory::DestroyDnFTimer(CDnFTimer*) */

void CDnFTimerFactory::DestroyDnFTimer(CDnFTimer *param_1)

{
  operator_delete(param_1);
  return;
}

```

