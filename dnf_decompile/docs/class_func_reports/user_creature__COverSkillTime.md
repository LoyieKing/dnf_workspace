# user_creature__COverSkillTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## COverSkillTime

```asm
// === 0833d636 user_creature::COverSkillTime::COverSkillTime  [0x0833d636-0x833d643] ===
 833d636:	55                   	push   %ebp
 833d637:	89 e5                	mov    %esp,%ebp
 833d639:	8b 45 08             	mov    0x8(%ebp),%eax
 833d63c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 833d642:	5d                   	pop    %ebp
 833d643:	c3                   	ret

```

```c
// user_creature::COverSkillTime::COverSkillTime @ 0x833d636

/* user_creature::COverSkillTime::COverSkillTime() */

void __thiscall user_creature::COverSkillTime::COverSkillTime(COverSkillTime *this)

{
  *(undefined4 *)this = 0;
  return;
}

```

---

## SetTime

```asm
// === 0833d644 user_creature::COverSkillTime::SetTime  [0x0833d644-0x833d65d] ===
 833d644:	55                   	push   %ebp
 833d645:	89 e5                	mov    %esp,%ebp
 833d647:	83 ec 18             	sub    $0x18,%esp
 833d64a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 833d651:	e8 48 e6 d8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 833d656:	8b 55 08             	mov    0x8(%ebp),%edx
 833d659:	89 02                	mov    %eax,(%edx)
 833d65b:	c9                   	leave
 833d65c:	c3                   	ret
 833d65d:	90                   	nop

```

```c
// user_creature::COverSkillTime::SetTime @ 0x833d644

/* user_creature::COverSkillTime::SetTime() */

void __thiscall user_creature::COverSkillTime::SetTime(COverSkillTime *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)this = uVar1;
  return;
}

```

---

## checkTime

```asm
// === 0833d65e user_creature::COverSkillTime::checkTime  [0x0833d65e-0x833d6c1] ===
 833d65e:	55                   	push   %ebp
 833d65f:	89 e5                	mov    %esp,%ebp
 833d661:	83 ec 38             	sub    $0x38,%esp
 833d664:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 833d66b:	e8 2e e6 d8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 833d670:	89 45 f0             	mov    %eax,-0x10(%ebp)
 833d673:	8b 45 08             	mov    0x8(%ebp),%eax
 833d676:	8b 00                	mov    (%eax),%eax
 833d678:	8b 55 f0             	mov    -0x10(%ebp),%edx
 833d67b:	89 d1                	mov    %edx,%ecx
 833d67d:	29 c1                	sub    %eax,%ecx
 833d67f:	89 c8                	mov    %ecx,%eax
 833d681:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833d684:	db 45 e4             	fildl  -0x1c(%ebp)
 833d687:	d9 5d f4             	fstps  -0xc(%ebp)
 833d68a:	d9 45 f4             	flds   -0xc(%ebp)
 833d68d:	d9 ee                	fldz
 833d68f:	d9 c9                	fxch   %st(1)
 833d691:	da e9                	fucompp
 833d693:	df e0                	fnstsw %ax
 833d695:	9e                   	sahf
 833d696:	0f 97 c0             	seta   %al
 833d699:	84 c0                	test   %al,%al
 833d69b:	74 1e                	je     833d6bb <_ZN13user_creature14COverSkillTime9checkTimeEv+0x5d>
 833d69d:	d9 45 f4             	flds   -0xc(%ebp)
 833d6a0:	d9 05 68 f4 c2 08    	flds   0x8c2f468
 833d6a6:	da e9                	fucompp
 833d6a8:	df e0                	fnstsw %ax
 833d6aa:	f6 c4 45             	test   $0x45,%ah
 833d6ad:	0f 94 c0             	sete   %al
 833d6b0:	84 c0                	test   %al,%al
 833d6b2:	74 07                	je     833d6bb <_ZN13user_creature14COverSkillTime9checkTimeEv+0x5d>
 833d6b4:	b8 01 00 00 00       	mov    $0x1,%eax
 833d6b9:	eb 05                	jmp    833d6c0 <_ZN13user_creature14COverSkillTime9checkTimeEv+0x62>
 833d6bb:	b8 00 00 00 00       	mov    $0x0,%eax
 833d6c0:	c9                   	leave
 833d6c1:	c3                   	ret

```

```c
// user_creature::COverSkillTime::checkTime @ 0x833d65e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::COverSkillTime::checkTime() */

undefined4 __thiscall user_creature::COverSkillTime::checkTime(COverSkillTime *this)

{
  int iVar1;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if ((0.0 < (float)(iVar1 - *(int *)this)) && ((float)(iVar1 - *(int *)this) < _DAT_08c2f468)) {
    return 1;
  }
  return 0;
}

```

