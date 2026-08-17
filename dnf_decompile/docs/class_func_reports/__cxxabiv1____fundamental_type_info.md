# __cxxabiv1____fundamental_type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ~__fundamental_type_info

```asm
// === 08722e00 __cxxabiv1::__fundamental_type_info::~__fundamental_type_info  [0x08722e00-0x8722e2f] ===
 8722e00:	55                   	push   %ebp
 8722e01:	89 e5                	mov    %esp,%ebp
 8722e03:	53                   	push   %ebx
 8722e04:	e8 ef ff ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8722e09:	81 c3 8f 9d c4 00    	add    $0xc49d8f,%ebx
 8722e0f:	83 ec 14             	sub    $0x14,%esp
 8722e12:	8b 45 08             	mov    0x8(%ebp),%eax
 8722e15:	8b 93 0c fe ff ff    	mov    -0x1f4(%ebx),%edx
 8722e1b:	83 c2 08             	add    $0x8,%edx
 8722e1e:	89 10                	mov    %edx,(%eax)
 8722e20:	89 04 24             	mov    %eax,(%esp)
 8722e23:	e8 d8 18 00 00       	call   8724700 <_ZNSt9type_infoD1Ev>
 8722e28:	83 c4 14             	add    $0x14,%esp
 8722e2b:	5b                   	pop    %ebx
 8722e2c:	5d                   	pop    %ebp
 8722e2d:	c3                   	ret
 8722e2e:	90                   	nop
 8722e2f:	90                   	nop

```

```c
// __cxxabiv1::__fundamental_type_info::~__fundamental_type_info @ 0x8722e00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__fundamental_type_info::~__fundamental_type_info() */

void __thiscall
__cxxabiv1::__fundamental_type_info::~__fundamental_type_info(__fundamental_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c9a4 + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}

```

---

## ~__fundamental_type_info_08722e30

```asm
// === 08722e30 __cxxabiv1::__fundamental_type_info::~__fundamental_type_info  [0x08722e30-0x8722e6f] ===
 8722e30:	55                   	push   %ebp
 8722e31:	89 e5                	mov    %esp,%ebp
 8722e33:	83 ec 18             	sub    $0x18,%esp
 8722e36:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8722e39:	e8 ba ff ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8722e3e:	81 c3 5a 9d c4 00    	add    $0xc49d5a,%ebx
 8722e44:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8722e47:	8b 75 08             	mov    0x8(%ebp),%esi
 8722e4a:	89 34 24             	mov    %esi,(%esp)
 8722e4d:	e8 ae ff ff ff       	call   8722e00 <_ZN10__cxxabiv123__fundamental_type_infoD1Ev>
 8722e52:	89 34 24             	mov    %esi,(%esp)
 8722e55:	e8 96 16 00 00       	call   87244f0 <_ZdlPv>
 8722e5a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8722e5d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8722e60:	89 ec                	mov    %ebp,%esp
 8722e62:	5d                   	pop    %ebp
 8722e63:	c3                   	ret
 8722e64:	90                   	nop
 8722e65:	90                   	nop
 8722e66:	90                   	nop
 8722e67:	90                   	nop
 8722e68:	90                   	nop
 8722e69:	90                   	nop
 8722e6a:	90                   	nop
 8722e6b:	90                   	nop
 8722e6c:	90                   	nop
 8722e6d:	90                   	nop
 8722e6e:	90                   	nop
 8722e6f:	90                   	nop

```

```c
// __cxxabiv1::__fundamental_type_info::~__fundamental_type_info @ 0x8722e30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__fundamental_type_info::~__fundamental_type_info() */

void __thiscall
__cxxabiv1::__fundamental_type_info::~__fundamental_type_info(__fundamental_type_info *this)

{
  ~__fundamental_type_info(this);
  operator_delete(this);
  return;
}

```

