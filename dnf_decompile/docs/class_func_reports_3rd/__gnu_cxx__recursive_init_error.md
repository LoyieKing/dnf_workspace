# __gnu_cxx__recursive_init_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ~recursive_init_error

```asm
// === 08725420 __gnu_cxx::recursive_init_error::~recursive_init_error  [0x08725420-0x872544f] ===
 8725420:	55                   	push   %ebp
 8725421:	89 e5                	mov    %esp,%ebp
 8725423:	53                   	push   %ebx
 8725424:	e8 cf d9 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8725429:	81 c3 6f 77 c4 00    	add    $0xc4776f,%ebx
 872542f:	83 ec 14             	sub    $0x14,%esp
 8725432:	8b 45 08             	mov    0x8(%ebp),%eax
 8725435:	8b 93 48 fe ff ff    	mov    -0x1b8(%ebx),%edx
 872543b:	83 c2 08             	add    $0x8,%edx
 872543e:	89 10                	mov    %edx,(%eax)
 8725440:	89 04 24             	mov    %eax,(%esp)
 8725443:	e8 38 fc ff ff       	call   8725080 <_ZNSt9exceptionD1Ev>
 8725448:	83 c4 14             	add    $0x14,%esp
 872544b:	5b                   	pop    %ebx
 872544c:	5d                   	pop    %ebp
 872544d:	c3                   	ret
 872544e:	90                   	nop
 872544f:	90                   	nop

```

```c
// __gnu_cxx::recursive_init_error::~recursive_init_error @ 0x8725420

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __gnu_cxx::recursive_init_error::~recursive_init_error() */

void __thiscall __gnu_cxx::recursive_init_error::~recursive_init_error(recursive_init_error *this)

{
  *(undefined **)this = PTR_vtable_0936c9e0 + 8;
  std::exception::~exception((exception *)this);
  return;
}

```

---

## ~recursive_init_error_08725450

```asm
// === 08725450 __gnu_cxx::recursive_init_error::~recursive_init_error  [0x08725450-0x872548f] ===
 8725450:	55                   	push   %ebp
 8725451:	89 e5                	mov    %esp,%ebp
 8725453:	83 ec 18             	sub    $0x18,%esp
 8725456:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8725459:	e8 9a d9 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872545e:	81 c3 3a 77 c4 00    	add    $0xc4773a,%ebx
 8725464:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8725467:	8b 75 08             	mov    0x8(%ebp),%esi
 872546a:	89 34 24             	mov    %esi,(%esp)
 872546d:	e8 ae ff ff ff       	call   8725420 <_ZN9__gnu_cxx20recursive_init_errorD1Ev>
 8725472:	89 34 24             	mov    %esi,(%esp)
 8725475:	e8 76 f0 ff ff       	call   87244f0 <_ZdlPv>
 872547a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 872547d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8725480:	89 ec                	mov    %ebp,%esp
 8725482:	5d                   	pop    %ebp
 8725483:	c3                   	ret
 8725484:	90                   	nop
 8725485:	90                   	nop
 8725486:	90                   	nop
 8725487:	90                   	nop
 8725488:	90                   	nop
 8725489:	90                   	nop
 872548a:	90                   	nop
 872548b:	90                   	nop
 872548c:	90                   	nop
 872548d:	90                   	nop
 872548e:	90                   	nop
 872548f:	90                   	nop

```

```c
// __gnu_cxx::recursive_init_error::~recursive_init_error @ 0x8725450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __gnu_cxx::recursive_init_error::~recursive_init_error() */

void __thiscall __gnu_cxx::recursive_init_error::~recursive_init_error(recursive_init_error *this)

{
  ~recursive_init_error(this);
  operator_delete(this);
  return;
}

```

