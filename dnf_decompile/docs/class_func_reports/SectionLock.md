# SectionLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## SectionLock

```asm
// === 08ad3742 SectionLock::SectionLock  [0x08ad3742-0x8ad3785] ===
 8ad3742:	55                   	push   %ebp
 8ad3743:	89 e5                	mov    %esp,%ebp
 8ad3745:	83 ec 28             	sub    $0x28,%esp
 8ad3748:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad374b:	89 04 24             	mov    %eax,(%esp)
 8ad374e:	e8 4f 01 00 00       	call   8ad38a2 <_ZN10UncopyableC1Ev>
 8ad3753:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ad375a:	00 
 8ad375b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad375e:	89 04 24             	mov    %eax,(%esp)
 8ad3761:	e8 ba ad 5a ff       	call   807e520 <pthread_mutexattr_settype@plt>
 8ad3766:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3769:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8ad376c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3770:	89 04 24             	mov    %eax,(%esp)
 8ad3773:	e8 f8 a1 5a ff       	call   807d970 <pthread_mutex_init@plt>
 8ad3778:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad377b:	89 04 24             	mov    %eax,(%esp)
 8ad377e:	e8 dd a8 5a ff       	call   807e060 <pthread_mutexattr_destroy@plt>
 8ad3783:	c9                   	leave
 8ad3784:	c3                   	ret
 8ad3785:	90                   	nop

```

```c
// SectionLock::SectionLock @ 0x8ad3742

/* DWARF original prototype: void SectionLock(SectionLock * this) */

void __thiscall SectionLock::SectionLock(SectionLock *this)

{
  pthread_mutexattr_t local_10 [3];
  
  Uncopyable::Uncopyable((Uncopyable *)this);
                    /* Unresolved local var: pthread_mutexattr_t attr@[???] */
  pthread_mutexattr_settype(local_10,1);
  pthread_mutex_init((pthread_mutex_t *)this,local_10);
  pthread_mutexattr_destroy(local_10);
  return;
}

```

---

## enter

```asm
// === 08ad37a4 SectionLock::enter  [0x08ad37a4-0x8ad37b7] ===
 8ad37a4:	55                   	push   %ebp
 8ad37a5:	89 e5                	mov    %esp,%ebp
 8ad37a7:	83 ec 18             	sub    $0x18,%esp
 8ad37aa:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad37ad:	89 04 24             	mov    %eax,(%esp)
 8ad37b0:	e8 3b aa 5a ff       	call   807e1f0 <pthread_mutex_lock@plt>
 8ad37b5:	c9                   	leave
 8ad37b6:	c3                   	ret
 8ad37b7:	90                   	nop

```

```c
// SectionLock::enter @ 0x8ad37a4

/* DWARF original prototype: void enter(SectionLock * this) */

void __thiscall SectionLock::enter(SectionLock *this)

{
  pthread_mutex_lock((pthread_mutex_t *)this);
  return;
}

```

---

## isTaken

```asm
// === 08ad37e4 SectionLock::isTaken  [0x08ad37e4-0x8ad37ed] ===
 8ad37e4:	55                   	push   %ebp
 8ad37e5:	89 e5                	mov    %esp,%ebp
 8ad37e7:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad37ec:	5d                   	pop    %ebp
 8ad37ed:	c3                   	ret

```

```c
// SectionLock::isTaken @ 0x8ad37e4

/* DWARF original prototype: bool isTaken(SectionLock * this) */

bool __thiscall SectionLock::isTaken(SectionLock *this)

{
  return false;
}

```

---

## isTakenByCurrentThread

```asm
// === 08ad37ee SectionLock::isTakenByCurrentThread  [0x08ad37ee-0x8ad37f7] ===
 8ad37ee:	55                   	push   %ebp
 8ad37ef:	89 e5                	mov    %esp,%ebp
 8ad37f1:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad37f6:	5d                   	pop    %ebp
 8ad37f7:	c3                   	ret

```

```c
// SectionLock::isTakenByCurrentThread @ 0x8ad37ee

/* DWARF original prototype: bool isTakenByCurrentThread(SectionLock * this) */

bool __thiscall SectionLock::isTakenByCurrentThread(SectionLock *this)

{
  return false;
}

```

---

## leave

```asm
// === 08ad37d0 SectionLock::leave  [0x08ad37d0-0x8ad37e3] ===
 8ad37d0:	55                   	push   %ebp
 8ad37d1:	89 e5                	mov    %esp,%ebp
 8ad37d3:	83 ec 18             	sub    $0x18,%esp
 8ad37d6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad37d9:	89 04 24             	mov    %eax,(%esp)
 8ad37dc:	e8 ff a6 5a ff       	call   807dee0 <pthread_mutex_unlock@plt>
 8ad37e1:	c9                   	leave
 8ad37e2:	c3                   	ret
 8ad37e3:	90                   	nop

```

```c
// SectionLock::leave @ 0x8ad37d0

/* DWARF original prototype: void leave(SectionLock * this) */

void __thiscall SectionLock::leave(SectionLock *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}

```

---

## tryEnter

```asm
// === 08ad37b8 SectionLock::tryEnter  [0x08ad37b8-0x8ad37cf] ===
 8ad37b8:	55                   	push   %ebp
 8ad37b9:	89 e5                	mov    %esp,%ebp
 8ad37bb:	83 ec 18             	sub    $0x18,%esp
 8ad37be:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad37c1:	89 04 24             	mov    %eax,(%esp)
 8ad37c4:	e8 07 aa 5a ff       	call   807e1d0 <pthread_mutex_trylock@plt>
 8ad37c9:	85 c0                	test   %eax,%eax
 8ad37cb:	0f 95 c0             	setne  %al
 8ad37ce:	c9                   	leave
 8ad37cf:	c3                   	ret

```

```c
// SectionLock::tryEnter @ 0x8ad37b8

/* DWARF original prototype: bool tryEnter(SectionLock * this) */

bool __thiscall SectionLock::tryEnter(SectionLock *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 != 0;
}

```

---

## ~SectionLock

```asm
// === 08ad3786 SectionLock::~SectionLock  [0x08ad3786-0x8ad37a3] ===
 8ad3786:	55                   	push   %ebp
 8ad3787:	89 e5                	mov    %esp,%ebp
 8ad3789:	83 ec 18             	sub    $0x18,%esp
 8ad378c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad378f:	89 04 24             	mov    %eax,(%esp)
 8ad3792:	e8 89 a3 5a ff       	call   807db20 <pthread_mutex_destroy@plt>
 8ad3797:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad379a:	89 04 24             	mov    %eax,(%esp)
 8ad379d:	e8 06 01 00 00       	call   8ad38a8 <_ZN10UncopyableD1Ev>
 8ad37a2:	c9                   	leave
 8ad37a3:	c3                   	ret

```

```c
// SectionLock::~SectionLock @ 0x8ad3786

/* DWARF original prototype: void ~SectionLock(SectionLock * this, int __in_chrg) */

void __thiscall SectionLock::~SectionLock(SectionLock *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  pthread_mutex_destroy((pthread_mutex_t *)this);
  Uncopyable::~Uncopyable((Uncopyable *)this,in_stack_ffffffe8);
  return;
}

```

