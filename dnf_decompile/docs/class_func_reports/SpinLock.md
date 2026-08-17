# SpinLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## SpinLock

```asm
// === 08ad3522 SpinLock::SpinLock  [0x08ad3522-0x8ad353d] ===
 8ad3522:	55                   	push   %ebp
 8ad3523:	89 e5                	mov    %esp,%ebp
 8ad3525:	83 ec 18             	sub    $0x18,%esp
 8ad3528:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad352b:	89 04 24             	mov    %eax,(%esp)
 8ad352e:	e8 6f 03 00 00       	call   8ad38a2 <_ZN10UncopyableC1Ev>
 8ad3533:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3536:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ad353c:	c9                   	leave
 8ad353d:	c3                   	ret

```

```c
// SpinLock::SpinLock @ 0x8ad3522

/* DWARF original prototype: void SpinLock(SpinLock * this) */

void __thiscall SpinLock::SpinLock(SpinLock *this)

{
  Uncopyable::Uncopyable((Uncopyable *)this);
  this->state_ = 0;
  return;
}

```

---

## enter

```asm
// === 08ad3552 SpinLock::enter  [0x08ad3552-0x8ad3571] ===
 8ad3552:	55                   	push   %ebp
 8ad3553:	89 e5                	mov    %esp,%ebp
 8ad3555:	eb 05                	jmp    8ad355c <_ZN8SpinLock5enterEv+0xa>
 8ad3557:	e8 c0 ff ff ff       	call   8ad351c <_ZL14YieldProcessorv>
 8ad355c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad355f:	ba 01 00 00 00       	mov    $0x1,%edx
 8ad3564:	87 10                	xchg   %edx,(%eax)
 8ad3566:	83 fa 01             	cmp    $0x1,%edx
 8ad3569:	0f 94 c0             	sete   %al
 8ad356c:	84 c0                	test   %al,%al
 8ad356e:	75 e7                	jne    8ad3557 <_ZN8SpinLock5enterEv+0x5>
 8ad3570:	5d                   	pop    %ebp
 8ad3571:	c3                   	ret

```

```c
// SpinLock::enter @ 0x8ad3552

/* DWARF original prototype: void enter(SpinLock * this) */

void __thiscall SpinLock::enter(SpinLock *this)

{
  int iVar1;
  
  while( true ) {
    LOCK();
    iVar1 = this->state_;
    this->state_ = 1;
    UNLOCK();
    if (iVar1 != 1) break;
    YieldProcessor();
  }
  return;
}

```

---

## isTaken

```asm
// === 08ad3596 SpinLock::isTaken  [0x08ad3596-0x8ad35a5] ===
 8ad3596:	55                   	push   %ebp
 8ad3597:	89 e5                	mov    %esp,%ebp
 8ad3599:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad359c:	8b 00                	mov    (%eax),%eax
 8ad359e:	83 f8 01             	cmp    $0x1,%eax
 8ad35a1:	0f 94 c0             	sete   %al
 8ad35a4:	5d                   	pop    %ebp
 8ad35a5:	c3                   	ret

```

```c
// SpinLock::isTaken @ 0x8ad3596

/* DWARF original prototype: bool isTaken(SpinLock * this) */

bool __thiscall SpinLock::isTaken(SpinLock *this)

{
  return this->state_ == 1;
}

```

---

## leave

```asm
// === 08ad3586 SpinLock::leave  [0x08ad3586-0x8ad3595] ===
 8ad3586:	55                   	push   %ebp
 8ad3587:	89 e5                	mov    %esp,%ebp
 8ad3589:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad358c:	ba 00 00 00 00       	mov    $0x0,%edx
 8ad3591:	87 10                	xchg   %edx,(%eax)
 8ad3593:	5d                   	pop    %ebp
 8ad3594:	c3                   	ret
 8ad3595:	90                   	nop

```

```c
// SpinLock::leave @ 0x8ad3586

/* DWARF original prototype: void leave(SpinLock * this) */

void __thiscall SpinLock::leave(SpinLock *this)

{
  LOCK();
  this->state_ = 0;
  UNLOCK();
  return;
}

```

---

## tryEnter

```asm
// === 08ad3572 SpinLock::tryEnter  [0x08ad3572-0x8ad3585] ===
 8ad3572:	55                   	push   %ebp
 8ad3573:	89 e5                	mov    %esp,%ebp
 8ad3575:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3578:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad357d:	87 02                	xchg   %eax,(%edx)
 8ad357f:	85 c0                	test   %eax,%eax
 8ad3581:	0f 94 c0             	sete   %al
 8ad3584:	5d                   	pop    %ebp
 8ad3585:	c3                   	ret

```

```c
// SpinLock::tryEnter @ 0x8ad3572

/* DWARF original prototype: bool tryEnter(SpinLock * this) */

bool __thiscall SpinLock::tryEnter(SpinLock *this)

{
  int iVar1;
  
  LOCK();
  iVar1 = this->state_;
  this->state_ = 1;
  UNLOCK();
  return iVar1 == 0;
}

```

---

## ~SpinLock

```asm
// === 08ad353e SpinLock::~SpinLock  [0x08ad353e-0x8ad3551] ===
 8ad353e:	55                   	push   %ebp
 8ad353f:	89 e5                	mov    %esp,%ebp
 8ad3541:	83 ec 18             	sub    $0x18,%esp
 8ad3544:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3547:	89 04 24             	mov    %eax,(%esp)
 8ad354a:	e8 59 03 00 00       	call   8ad38a8 <_ZN10UncopyableD1Ev>
 8ad354f:	c9                   	leave
 8ad3550:	c3                   	ret
 8ad3551:	90                   	nop

```

```c
// SpinLock::~SpinLock @ 0x8ad353e

/* DWARF original prototype: void ~SpinLock(SpinLock * this, int __in_chrg) */

void __thiscall SpinLock::~SpinLock(SpinLock *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  Uncopyable::~Uncopyable((Uncopyable *)this,in_stack_ffffffe8);
  return;
}

```

