# RwSectionLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## RwSectionLock

```asm
// === 08ad37f8 RwSectionLock::RwSectionLock  [0x08ad37f8-0x8ad3833] ===
 8ad37f8:	55                   	push   %ebp
 8ad37f9:	89 e5                	mov    %esp,%ebp
 8ad37fb:	83 ec 28             	sub    $0x28,%esp
 8ad37fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3801:	89 04 24             	mov    %eax,(%esp)
 8ad3804:	e8 99 00 00 00       	call   8ad38a2 <_ZN10UncopyableC1Ev>
 8ad3809:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad380c:	89 04 24             	mov    %eax,(%esp)
 8ad380f:	e8 2c ad 5a ff       	call   807e540 <pthread_rwlockattr_init@plt>
 8ad3814:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3817:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8ad381a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad381e:	89 04 24             	mov    %eax,(%esp)
 8ad3821:	e8 7a a8 5a ff       	call   807e0a0 <pthread_rwlock_init@plt>
 8ad3826:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad3829:	89 04 24             	mov    %eax,(%esp)
 8ad382c:	e8 ff ad 5a ff       	call   807e630 <pthread_rwlockattr_destroy@plt>
 8ad3831:	c9                   	leave
 8ad3832:	c3                   	ret
 8ad3833:	90                   	nop

```

```c
// RwSectionLock::RwSectionLock @ 0x8ad37f8

/* DWARF original prototype: void RwSectionLock(RwSectionLock * this) */

void __thiscall RwSectionLock::RwSectionLock(RwSectionLock *this)

{
  pthread_rwlockattr_t local_14 [2];
  
  Uncopyable::Uncopyable((Uncopyable *)this);
                    /* Unresolved local var: pthread_rwlockattr_t attr@[???] */
  pthread_rwlockattr_init(local_14);
  pthread_rwlock_init((pthread_rwlock_t *)this,local_14);
  pthread_rwlockattr_destroy(local_14);
  return;
}

```

---

## enterRead

```asm
// === 08ad3852 RwSectionLock::enterRead  [0x08ad3852-0x8ad3865] ===
 8ad3852:	55                   	push   %ebp
 8ad3853:	89 e5                	mov    %esp,%ebp
 8ad3855:	83 ec 18             	sub    $0x18,%esp
 8ad3858:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad385b:	89 04 24             	mov    %eax,(%esp)
 8ad385e:	e8 1d a6 5a ff       	call   807de80 <pthread_rwlock_rdlock@plt>
 8ad3863:	c9                   	leave
 8ad3864:	c3                   	ret
 8ad3865:	90                   	nop

```

```c
// RwSectionLock::enterRead @ 0x8ad3852

/* DWARF original prototype: void enterRead(RwSectionLock * this) */

void __thiscall RwSectionLock::enterRead(RwSectionLock *this)

{
  pthread_rwlock_rdlock((pthread_rwlock_t *)this);
  return;
}

```

---

## enterWrite

```asm
// === 08ad387a RwSectionLock::enterWrite  [0x08ad387a-0x8ad388d] ===
 8ad387a:	55                   	push   %ebp
 8ad387b:	89 e5                	mov    %esp,%ebp
 8ad387d:	83 ec 18             	sub    $0x18,%esp
 8ad3880:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3883:	89 04 24             	mov    %eax,(%esp)
 8ad3886:	e8 85 a8 5a ff       	call   807e110 <pthread_rwlock_wrlock@plt>
 8ad388b:	c9                   	leave
 8ad388c:	c3                   	ret
 8ad388d:	90                   	nop

```

```c
// RwSectionLock::enterWrite @ 0x8ad387a

/* DWARF original prototype: void enterWrite(RwSectionLock * this) */

void __thiscall RwSectionLock::enterWrite(RwSectionLock *this)

{
  pthread_rwlock_wrlock((pthread_rwlock_t *)this);
  return;
}

```

---

## leaveRead

```asm
// === 08ad3866 RwSectionLock::leaveRead  [0x08ad3866-0x8ad3879] ===
 8ad3866:	55                   	push   %ebp
 8ad3867:	89 e5                	mov    %esp,%ebp
 8ad3869:	83 ec 18             	sub    $0x18,%esp
 8ad386c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad386f:	89 04 24             	mov    %eax,(%esp)
 8ad3872:	e8 d9 a9 5a ff       	call   807e250 <pthread_rwlock_unlock@plt>
 8ad3877:	c9                   	leave
 8ad3878:	c3                   	ret
 8ad3879:	90                   	nop

```

```c
// RwSectionLock::leaveRead @ 0x8ad3866

/* DWARF original prototype: void leaveRead(RwSectionLock * this) */

void __thiscall RwSectionLock::leaveRead(RwSectionLock *this)

{
  pthread_rwlock_unlock((pthread_rwlock_t *)this);
  return;
}

```

---

## leaveWrite

```asm
// === 08ad388e RwSectionLock::leaveWrite  [0x08ad388e-0x8ad38af] ===
 8ad388e:	55                   	push   %ebp
 8ad388f:	89 e5                	mov    %esp,%ebp
 8ad3891:	83 ec 18             	sub    $0x18,%esp
 8ad3894:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3897:	89 04 24             	mov    %eax,(%esp)
 8ad389a:	e8 b1 a9 5a ff       	call   807e250 <pthread_rwlock_unlock@plt>
 8ad389f:	c9                   	leave
 8ad38a0:	c3                   	ret
 8ad38a1:	90                   	nop

08ad38a2 <_ZN10UncopyableC1Ev>:
 8ad38a2:	55                   	push   %ebp
 8ad38a3:	89 e5                	mov    %esp,%ebp
 8ad38a5:	5d                   	pop    %ebp
 8ad38a6:	c3                   	ret
 8ad38a7:	90                   	nop

08ad38a8 <_ZN10UncopyableD1Ev>:
 8ad38a8:	55                   	push   %ebp
 8ad38a9:	89 e5                	mov    %esp,%ebp
 8ad38ab:	5d                   	pop    %ebp
 8ad38ac:	c3                   	ret
 8ad38ad:	90                   	nop
 8ad38ae:	90                   	nop
 8ad38af:	90                   	nop

```

```c
// RwSectionLock::leaveWrite @ 0x8ad388e

/* DWARF original prototype: void leaveWrite(RwSectionLock * this) */

void __thiscall RwSectionLock::leaveWrite(RwSectionLock *this)

{
  pthread_rwlock_unlock((pthread_rwlock_t *)this);
  return;
}

```

---

## ~RwSectionLock

```asm
// === 08ad3834 RwSectionLock::~RwSectionLock  [0x08ad3834-0x8ad3851] ===
 8ad3834:	55                   	push   %ebp
 8ad3835:	89 e5                	mov    %esp,%ebp
 8ad3837:	83 ec 18             	sub    $0x18,%esp
 8ad383a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad383d:	89 04 24             	mov    %eax,(%esp)
 8ad3840:	e8 fb a7 5a ff       	call   807e040 <pthread_rwlock_destroy@plt>
 8ad3845:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3848:	89 04 24             	mov    %eax,(%esp)
 8ad384b:	e8 58 00 00 00       	call   8ad38a8 <_ZN10UncopyableD1Ev>
 8ad3850:	c9                   	leave
 8ad3851:	c3                   	ret

```

```c
// RwSectionLock::~RwSectionLock @ 0x8ad3834

/* DWARF original prototype: void ~RwSectionLock(RwSectionLock * this, int __in_chrg) */

void __thiscall RwSectionLock::~RwSectionLock(RwSectionLock *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  pthread_rwlock_destroy((pthread_rwlock_t *)this);
  Uncopyable::~Uncopyable((Uncopyable *)this,in_stack_ffffffe8);
  return;
}

```

