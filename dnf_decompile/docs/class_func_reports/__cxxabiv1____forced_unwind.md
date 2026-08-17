# __cxxabiv1____forced_unwind

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ~__forced_unwind

```asm
// === 087250d0 __cxxabiv1::__forced_unwind::~__forced_unwind  [0x087250d0-0x87250ef] ===
 87250d0:	e8 ef f4 ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87250d5:	81 c1 c3 7a c4 00    	add    $0xc47ac3,%ecx
 87250db:	55                   	push   %ebp
 87250dc:	89 e5                	mov    %esp,%ebp
 87250de:	8b 81 5c fa ff ff    	mov    -0x5a4(%ecx),%eax
 87250e4:	8d 50 08             	lea    0x8(%eax),%edx
 87250e7:	8b 45 08             	mov    0x8(%ebp),%eax
 87250ea:	89 10                	mov    %edx,(%eax)
 87250ec:	5d                   	pop    %ebp
 87250ed:	c3                   	ret
 87250ee:	90                   	nop
 87250ef:	90                   	nop

```

```c
// __cxxabiv1::__forced_unwind::~__forced_unwind @ 0x87250d0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* __cxxabiv1::__forced_unwind::~__forced_unwind() */

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  *(undefined **)this = PTR_vtable_0936c5f4 + 8;
  return;
}

```

---

## ~__forced_unwind_08725190

```asm
// === 08725190 __cxxabiv1::__forced_unwind::~__forced_unwind  [0x08725190-0x87251cf] ===
 8725190:	55                   	push   %ebp
 8725191:	89 e5                	mov    %esp,%ebp
 8725193:	83 ec 18             	sub    $0x18,%esp
 8725196:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8725199:	e8 5a dc ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872519e:	81 c3 fa 79 c4 00    	add    $0xc479fa,%ebx
 87251a4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87251a7:	8b 75 08             	mov    0x8(%ebp),%esi
 87251aa:	89 34 24             	mov    %esi,(%esp)
 87251ad:	e8 1e ff ff ff       	call   87250d0 <_ZN10__cxxabiv115__forced_unwindD1Ev>
 87251b2:	89 34 24             	mov    %esi,(%esp)
 87251b5:	e8 36 f3 ff ff       	call   87244f0 <_ZdlPv>
 87251ba:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87251bd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87251c0:	89 ec                	mov    %ebp,%esp
 87251c2:	5d                   	pop    %ebp
 87251c3:	c3                   	ret
 87251c4:	90                   	nop
 87251c5:	90                   	nop
 87251c6:	90                   	nop
 87251c7:	90                   	nop
 87251c8:	90                   	nop
 87251c9:	90                   	nop
 87251ca:	90                   	nop
 87251cb:	90                   	nop
 87251cc:	90                   	nop
 87251cd:	90                   	nop
 87251ce:	90                   	nop
 87251cf:	90                   	nop

```

```c
// __cxxabiv1::__forced_unwind::~__forced_unwind @ 0x8725190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__forced_unwind::~__forced_unwind() */

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  ~__forced_unwind(this);
  operator_delete(this);
  return;
}

```

