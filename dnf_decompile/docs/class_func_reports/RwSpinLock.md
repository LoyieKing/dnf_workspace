# RwSpinLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## RwSpinLock

```asm
// === 08ad35a6 RwSpinLock::RwSpinLock  [0x08ad35a6-0x8ad35c1] ===
 8ad35a6:	55                   	push   %ebp
 8ad35a7:	89 e5                	mov    %esp,%ebp
 8ad35a9:	83 ec 18             	sub    $0x18,%esp
 8ad35ac:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad35af:	89 04 24             	mov    %eax,(%esp)
 8ad35b2:	e8 eb 02 00 00       	call   8ad38a2 <_ZN10UncopyableC1Ev>
 8ad35b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad35ba:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ad35c0:	c9                   	leave
 8ad35c1:	c3                   	ret

```

```c
// RwSpinLock::RwSpinLock @ 0x8ad35a6

/* DWARF original prototype: void RwSpinLock(RwSpinLock * this) */

void __thiscall RwSpinLock::RwSpinLock(RwSpinLock *this)

{
  Uncopyable::Uncopyable((Uncopyable *)this);
  this->state_ = 0;
  return;
}

```

---

## enterRead

```asm
// === 08ad35c2 RwSpinLock::enterRead  [0x08ad35c2-0x8ad35d5] ===
 8ad35c2:	55                   	push   %ebp
 8ad35c3:	89 e5                	mov    %esp,%ebp
 8ad35c5:	83 ec 18             	sub    $0x18,%esp
 8ad35c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad35cb:	89 04 24             	mov    %eax,(%esp)
 8ad35ce:	e8 67 00 00 00       	call   8ad363a <_ZN10RwSpinLock16enterReadToValueEPVl>
 8ad35d3:	c9                   	leave
 8ad35d4:	c3                   	ret
 8ad35d5:	90                   	nop

```

```c
// RwSpinLock::enterRead @ 0x8ad35c2

/* DWARF original prototype: void enterRead(RwSpinLock * this) */

void __thiscall RwSpinLock::enterRead(RwSpinLock *this)

{
  enterReadToValue(&this->state_);
  return;
}

```

---

## enterReadToValue

```asm
// === 08ad363a RwSpinLock::enterReadToValue  [0x08ad363a-0x8ad3679] ===
 8ad363a:	55                   	push   %ebp
 8ad363b:	89 e5                	mov    %esp,%ebp
 8ad363d:	83 ec 10             	sub    $0x10,%esp
 8ad3640:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3643:	8b 00                	mov    (%eax),%eax
 8ad3645:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad3648:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad364b:	25 00 00 00 c0       	and    $0xc0000000,%eax
 8ad3650:	85 c0                	test   %eax,%eax
 8ad3652:	75 1c                	jne    8ad3670 <_ZN10RwSpinLock16enterReadToValueEPVl+0x36>
 8ad3654:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad3657:	83 c0 01             	add    $0x1,%eax
 8ad365a:	89 c1                	mov    %eax,%ecx
 8ad365c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad365f:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3662:	f0 0f b1 0a          	lock cmpxchg %ecx,(%edx)
 8ad3666:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 8ad3669:	0f 94 c0             	sete   %al
 8ad366c:	84 c0                	test   %al,%al
 8ad366e:	75 07                	jne    8ad3677 <_ZN10RwSpinLock16enterReadToValueEPVl+0x3d>
 8ad3670:	e8 a7 fe ff ff       	call   8ad351c <_ZL14YieldProcessorv>
 8ad3675:	eb c9                	jmp    8ad3640 <_ZN10RwSpinLock16enterReadToValueEPVl+0x6>
 8ad3677:	90                   	nop
 8ad3678:	c9                   	leave
 8ad3679:	c3                   	ret

```

```c
// RwSpinLock::enterReadToValue @ 0x8ad363a

void RwSpinLock::enterReadToValue(long *state)

{
  uint uVar1;
  uint uVar2;
  
  do {
                    /* Unresolved local var: long ostate@[???] */
    uVar1 = *state;
    if ((uVar1 & 0xc0000000) == 0) {
      LOCK();
      uVar2 = *state;
      if (uVar1 == uVar2) {
        *state = uVar1 + 1;
        uVar2 = uVar1;
      }
      UNLOCK();
      if (uVar2 == uVar1) {
        return;
      }
    }
    YieldProcessor();
  } while( true );
}

```

---

## enterWrite

```asm
// === 08ad35ea RwSpinLock::enterWrite  [0x08ad35ea-0x8ad35fd] ===
 8ad35ea:	55                   	push   %ebp
 8ad35eb:	89 e5                	mov    %esp,%ebp
 8ad35ed:	83 ec 18             	sub    $0x18,%esp
 8ad35f0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad35f3:	89 04 24             	mov    %eax,(%esp)
 8ad35f6:	e8 c3 00 00 00       	call   8ad36be <_ZN10RwSpinLock17enterWriteToValueEPVl>
 8ad35fb:	c9                   	leave
 8ad35fc:	c3                   	ret
 8ad35fd:	90                   	nop

```

```c
// RwSpinLock::enterWrite @ 0x8ad35ea

/* DWARF original prototype: void enterWrite(RwSpinLock * this) */

void __thiscall RwSpinLock::enterWrite(RwSpinLock *this)

{
  enterWriteToValue(&this->state_);
  return;
}

```

---

## enterWriteToValue

```asm
// === 08ad36be RwSpinLock::enterWriteToValue  [0x08ad36be-0x8ad3729] ===
 8ad36be:	55                   	push   %ebp
 8ad36bf:	89 e5                	mov    %esp,%ebp
 8ad36c1:	83 ec 10             	sub    $0x10,%esp
 8ad36c4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad36c7:	8b 00                	mov    (%eax),%eax
 8ad36c9:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad36cc:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
 8ad36d0:	74 09                	je     8ad36db <_ZN10RwSpinLock17enterWriteToValueEPVl+0x1d>
 8ad36d2:	81 7d fc 00 00 00 40 	cmpl   $0x40000000,-0x4(%ebp)
 8ad36d9:	75 1b                	jne    8ad36f6 <_ZN10RwSpinLock17enterWriteToValueEPVl+0x38>
 8ad36db:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad36de:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad36e1:	b9 00 00 00 80       	mov    $0x80000000,%ecx
 8ad36e6:	f0 0f b1 0a          	lock cmpxchg %ecx,(%edx)
 8ad36ea:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 8ad36ed:	75 07                	jne    8ad36f6 <_ZN10RwSpinLock17enterWriteToValueEPVl+0x38>
 8ad36ef:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad36f4:	eb 05                	jmp    8ad36fb <_ZN10RwSpinLock17enterWriteToValueEPVl+0x3d>
 8ad36f6:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad36fb:	84 c0                	test   %al,%al
 8ad36fd:	75 27                	jne    8ad3726 <_ZN10RwSpinLock17enterWriteToValueEPVl+0x68>
 8ad36ff:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad3702:	25 00 00 00 40       	and    $0x40000000,%eax
 8ad3707:	85 c0                	test   %eax,%eax
 8ad3709:	75 14                	jne    8ad371f <_ZN10RwSpinLock17enterWriteToValueEPVl+0x61>
 8ad370b:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad370e:	0d 00 00 00 40       	or     $0x40000000,%eax
 8ad3713:	89 c1                	mov    %eax,%ecx
 8ad3715:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad3718:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad371b:	f0 0f b1 0a          	lock cmpxchg %ecx,(%edx)
 8ad371f:	e8 f8 fd ff ff       	call   8ad351c <_ZL14YieldProcessorv>
 8ad3724:	eb 9e                	jmp    8ad36c4 <_ZN10RwSpinLock17enterWriteToValueEPVl+0x6>
 8ad3726:	90                   	nop
 8ad3727:	c9                   	leave
 8ad3728:	c3                   	ret
 8ad3729:	90                   	nop

```

```c
// RwSpinLock::enterWriteToValue @ 0x8ad36be

void RwSpinLock::enterWriteToValue(long *state)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  do {
                    /* Unresolved local var: long ostate@[???] */
    uVar1 = *state;
    if ((uVar1 == 0) || (uVar1 == 0x40000000)) {
      LOCK();
      uVar3 = *state;
      if (uVar1 == uVar3) {
        *state = -0x80000000;
        uVar3 = uVar1;
      }
      UNLOCK();
      if (uVar3 != uVar1) goto LAB_08ad36f6;
      bVar2 = true;
    }
    else {
LAB_08ad36f6:
      bVar2 = false;
    }
    if (bVar2) {
      return;
    }
    if ((uVar1 & 0x40000000) == 0) {
      LOCK();
      if (uVar1 == *state) {
        *state = uVar1 | 0x40000000;
      }
      UNLOCK();
    }
    YieldProcessor();
  } while( true );
}

```

---

## isReadTaken

```asm
// === 08ad3612 RwSpinLock::isReadTaken  [0x08ad3612-0x8ad3625] ===
 8ad3612:	55                   	push   %ebp
 8ad3613:	89 e5                	mov    %esp,%ebp
 8ad3615:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3618:	8b 00                	mov    (%eax),%eax
 8ad361a:	25 ff ff ff 3f       	and    $0x3fffffff,%eax
 8ad361f:	85 c0                	test   %eax,%eax
 8ad3621:	0f 95 c0             	setne  %al
 8ad3624:	5d                   	pop    %ebp
 8ad3625:	c3                   	ret

```

```c
// RwSpinLock::isReadTaken @ 0x8ad3612

/* DWARF original prototype: bool isReadTaken(RwSpinLock * this) */

bool __thiscall RwSpinLock::isReadTaken(RwSpinLock *this)

{
  return (this->state_ & 0x3fffffffU) != 0;
}

```

---

## isWriteTaken

```asm
// === 08ad3626 RwSpinLock::isWriteTaken  [0x08ad3626-0x8ad3639] ===
 8ad3626:	55                   	push   %ebp
 8ad3627:	89 e5                	mov    %esp,%ebp
 8ad3629:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad362c:	8b 00                	mov    (%eax),%eax
 8ad362e:	25 00 00 00 c0       	and    $0xc0000000,%eax
 8ad3633:	85 c0                	test   %eax,%eax
 8ad3635:	0f 95 c0             	setne  %al
 8ad3638:	5d                   	pop    %ebp
 8ad3639:	c3                   	ret

```

```c
// RwSpinLock::isWriteTaken @ 0x8ad3626

/* DWARF original prototype: bool isWriteTaken(RwSpinLock * this) */

bool __thiscall RwSpinLock::isWriteTaken(RwSpinLock *this)

{
  return (this->state_ & 0xc0000000U) != 0;
}

```

---

## leaveRead

```asm
// === 08ad35d6 RwSpinLock::leaveRead  [0x08ad35d6-0x8ad35e9] ===
 8ad35d6:	55                   	push   %ebp
 8ad35d7:	89 e5                	mov    %esp,%ebp
 8ad35d9:	83 ec 18             	sub    $0x18,%esp
 8ad35dc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad35df:	89 04 24             	mov    %eax,(%esp)
 8ad35e2:	e8 93 00 00 00       	call   8ad367a <_ZN10RwSpinLock16leaveReadToValueEPVl>
 8ad35e7:	c9                   	leave
 8ad35e8:	c3                   	ret
 8ad35e9:	90                   	nop

```

```c
// RwSpinLock::leaveRead @ 0x8ad35d6

/* DWARF original prototype: void leaveRead(RwSpinLock * this) */

void __thiscall RwSpinLock::leaveRead(RwSpinLock *this)

{
  leaveReadToValue(&this->state_);
  return;
}

```

---

## leaveReadToValue

```asm
// === 08ad367a RwSpinLock::leaveReadToValue  [0x08ad367a-0x8ad36bd] ===
 8ad367a:	55                   	push   %ebp
 8ad367b:	89 e5                	mov    %esp,%ebp
 8ad367d:	83 ec 10             	sub    $0x10,%esp
 8ad3680:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3683:	8b 00                	mov    (%eax),%eax
 8ad3685:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8ad3688:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad368b:	25 ff ff ff 3f       	and    $0x3fffffff,%eax
 8ad3690:	8d 50 ff             	lea    -0x1(%eax),%edx
 8ad3693:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad3696:	25 00 00 00 40       	and    $0x40000000,%eax
 8ad369b:	09 d0                	or     %edx,%eax
 8ad369d:	89 c1                	mov    %eax,%ecx
 8ad369f:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8ad36a2:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad36a5:	f0 0f b1 0a          	lock cmpxchg %ecx,(%edx)
 8ad36a9:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 8ad36ac:	0f 94 c0             	sete   %al
 8ad36af:	84 c0                	test   %al,%al
 8ad36b1:	75 07                	jne    8ad36ba <_ZN10RwSpinLock16leaveReadToValueEPVl+0x40>
 8ad36b3:	e8 64 fe ff ff       	call   8ad351c <_ZL14YieldProcessorv>
 8ad36b8:	eb c6                	jmp    8ad3680 <_ZN10RwSpinLock16leaveReadToValueEPVl+0x6>
 8ad36ba:	90                   	nop
 8ad36bb:	c9                   	leave
 8ad36bc:	c3                   	ret
 8ad36bd:	90                   	nop

```

```c
// RwSpinLock::leaveReadToValue @ 0x8ad367a

void RwSpinLock::leaveReadToValue(long *state)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
                    /* Unresolved local var: long ostate@[???] */
    uVar1 = *state;
    LOCK();
    uVar2 = *state;
    if (uVar1 == uVar2) {
      *state = uVar1 & 0x40000000 | (uVar1 & 0x3fffffff) - 1;
      uVar2 = uVar1;
    }
    UNLOCK();
    if (uVar2 == uVar1) break;
    YieldProcessor();
  }
  return;
}

```

---

## leaveWrite

```asm
// === 08ad35fe RwSpinLock::leaveWrite  [0x08ad35fe-0x8ad3611] ===
 8ad35fe:	55                   	push   %ebp
 8ad35ff:	89 e5                	mov    %esp,%ebp
 8ad3601:	83 ec 18             	sub    $0x18,%esp
 8ad3604:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3607:	89 04 24             	mov    %eax,(%esp)
 8ad360a:	e8 1b 01 00 00       	call   8ad372a <_ZN10RwSpinLock17leaveWriteToValueEPVl>
 8ad360f:	c9                   	leave
 8ad3610:	c3                   	ret
 8ad3611:	90                   	nop

```

```c
// RwSpinLock::leaveWrite @ 0x8ad35fe

/* DWARF original prototype: void leaveWrite(RwSpinLock * this) */

void __thiscall RwSpinLock::leaveWrite(RwSpinLock *this)

{
  leaveWriteToValue(&this->state_);
  return;
}

```

---

## leaveWriteToValue

```asm
// === 08ad372a RwSpinLock::leaveWriteToValue  [0x08ad372a-0x8ad3741] ===
 8ad372a:	55                   	push   %ebp
 8ad372b:	89 e5                	mov    %esp,%ebp
 8ad372d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3730:	8b 00                	mov    (%eax),%eax
 8ad3732:	89 c2                	mov    %eax,%edx
 8ad3734:	81 e2 00 00 00 40    	and    $0x40000000,%edx
 8ad373a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad373d:	87 10                	xchg   %edx,(%eax)
 8ad373f:	5d                   	pop    %ebp
 8ad3740:	c3                   	ret
 8ad3741:	90                   	nop

```

```c
// RwSpinLock::leaveWriteToValue @ 0x8ad372a

void RwSpinLock::leaveWriteToValue(long *state)

{
  LOCK();
  *state = *state & 0x40000000;
  UNLOCK();
  return;
}

```

