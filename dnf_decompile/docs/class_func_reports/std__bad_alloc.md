# std__bad_alloc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## what

```asm
// === 08724540 std::bad_alloc::what  [0x08724540-0x872455f] ===
 8724540:	e8 7f 00 00 00       	call   87245c4 <__i686.get_pc_thunk.cx>
 8724545:	81 c1 53 86 c4 00    	add    $0xc48653,%ecx
 872454b:	55                   	push   %ebp
 872454c:	89 e5                	mov    %esp,%ebp
 872454e:	5d                   	pop    %ebp
 872454f:	8d 81 e0 4e 99 ff    	lea    -0x66b120(%ecx),%eax
 8724555:	c3                   	ret
 8724556:	90                   	nop
 8724557:	90                   	nop
 8724558:	90                   	nop
 8724559:	90                   	nop
 872455a:	90                   	nop
 872455b:	90                   	nop
 872455c:	90                   	nop
 872455d:	90                   	nop
 872455e:	90                   	nop
 872455f:	90                   	nop

```

```c
// std::bad_alloc::what @ 0x8724540

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_alloc::what() const */

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}

```

---

## ~bad_alloc

```asm
// === 08724560 std::bad_alloc::~bad_alloc  [0x08724560-0x872458f] ===
 8724560:	55                   	push   %ebp
 8724561:	89 e5                	mov    %esp,%ebp
 8724563:	53                   	push   %ebx
 8724564:	e8 8f e8 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724569:	81 c3 2f 86 c4 00    	add    $0xc4862f,%ebx
 872456f:	83 ec 14             	sub    $0x14,%esp
 8724572:	8b 45 08             	mov    0x8(%ebp),%eax
 8724575:	8b 93 5c fe ff ff    	mov    -0x1a4(%ebx),%edx
 872457b:	83 c2 08             	add    $0x8,%edx
 872457e:	89 10                	mov    %edx,(%eax)
 8724580:	89 04 24             	mov    %eax,(%esp)
 8724583:	e8 f8 0a 00 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 8724588:	83 c4 14             	add    $0x14,%esp
 872458b:	5b                   	pop    %ebx
 872458c:	5d                   	pop    %ebp
 872458d:	c3                   	ret
 872458e:	90                   	nop
 872458f:	90                   	nop

```

```c
// std::bad_alloc::~bad_alloc @ 0x8724560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_0936c9f4 + 8;
  exception::~exception((exception *)this);
  return;
}

```

---

## ~bad_alloc_08724590

```asm
// === 08724590 std::bad_alloc::~bad_alloc  [0x08724590-0x87245c3] ===
 8724590:	55                   	push   %ebp
 8724591:	89 e5                	mov    %esp,%ebp
 8724593:	83 ec 18             	sub    $0x18,%esp
 8724596:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8724599:	e8 5a e8 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872459e:	81 c3 fa 85 c4 00    	add    $0xc485fa,%ebx
 87245a4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87245a7:	8b 75 08             	mov    0x8(%ebp),%esi
 87245aa:	89 34 24             	mov    %esi,(%esp)
 87245ad:	e8 ae ff ff ff       	call   8724560 <_ZNSt9bad_allocD1Ev>
 87245b2:	89 34 24             	mov    %esi,(%esp)
 87245b5:	e8 36 ff ff ff       	call   87244f0 <_ZdlPv>
 87245ba:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87245bd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87245c0:	89 ec                	mov    %ebp,%esp
 87245c2:	5d                   	pop    %ebp
 87245c3:	c3                   	ret

```

```c
// std::bad_alloc::~bad_alloc @ 0x8724590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  ~bad_alloc(this);
  operator_delete(this);
  return;
}

```

