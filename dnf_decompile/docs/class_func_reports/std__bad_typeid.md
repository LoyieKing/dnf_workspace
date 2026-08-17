# std__bad_typeid

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## what

```asm
// === 08725ea0 std::bad_typeid::what  [0x08725ea0-0x8725ebf] ===
 8725ea0:	e8 1f e7 ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8725ea5:	81 c1 f3 6c c4 00    	add    $0xc46cf3,%ecx
 8725eab:	55                   	push   %ebp
 8725eac:	89 e5                	mov    %esp,%ebp
 8725eae:	5d                   	pop    %ebp
 8725eaf:	8d 81 8b 50 99 ff    	lea    -0x66af75(%ecx),%eax
 8725eb5:	c3                   	ret
 8725eb6:	90                   	nop
 8725eb7:	90                   	nop
 8725eb8:	90                   	nop
 8725eb9:	90                   	nop
 8725eba:	90                   	nop
 8725ebb:	90                   	nop
 8725ebc:	90                   	nop
 8725ebd:	90                   	nop
 8725ebe:	90                   	nop
 8725ebf:	90                   	nop

```

```c
// std::bad_typeid::what @ 0x8725ea0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_typeid::what() const */

char * std::bad_typeid::what(void)

{
  return "std::bad_typeid";
}

```

---

## ~bad_typeid

```asm
// === 08725ec0 std::bad_typeid::~bad_typeid  [0x08725ec0-0x8725eef] ===
 8725ec0:	55                   	push   %ebp
 8725ec1:	89 e5                	mov    %esp,%ebp
 8725ec3:	53                   	push   %ebx
 8725ec4:	e8 2f cf ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8725ec9:	81 c3 cf 6c c4 00    	add    $0xc46ccf,%ebx
 8725ecf:	83 ec 14             	sub    $0x14,%esp
 8725ed2:	8b 45 08             	mov    0x8(%ebp),%eax
 8725ed5:	8b 93 f8 ff ff ff    	mov    -0x8(%ebx),%edx
 8725edb:	83 c2 08             	add    $0x8,%edx
 8725ede:	89 10                	mov    %edx,(%eax)
 8725ee0:	89 04 24             	mov    %eax,(%esp)
 8725ee3:	e8 98 f1 ff ff       	call   8725080 <_ZNSt9exceptionD1Ev>
 8725ee8:	83 c4 14             	add    $0x14,%esp
 8725eeb:	5b                   	pop    %ebx
 8725eec:	5d                   	pop    %ebp
 8725eed:	c3                   	ret
 8725eee:	90                   	nop
 8725eef:	90                   	nop

```

```c
// std::bad_typeid::~bad_typeid @ 0x8725ec0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_0936cb90 + 8;
  exception::~exception((exception *)this);
  return;
}

```

---

## ~bad_typeid_08725ef0

```asm
// === 08725ef0 std::bad_typeid::~bad_typeid  [0x08725ef0-0x8725f2f] ===
 8725ef0:	55                   	push   %ebp
 8725ef1:	89 e5                	mov    %esp,%ebp
 8725ef3:	83 ec 18             	sub    $0x18,%esp
 8725ef6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8725ef9:	e8 fa ce ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8725efe:	81 c3 9a 6c c4 00    	add    $0xc46c9a,%ebx
 8725f04:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8725f07:	8b 75 08             	mov    0x8(%ebp),%esi
 8725f0a:	89 34 24             	mov    %esi,(%esp)
 8725f0d:	e8 ae ff ff ff       	call   8725ec0 <_ZNSt10bad_typeidD1Ev>
 8725f12:	89 34 24             	mov    %esi,(%esp)
 8725f15:	e8 d6 e5 ff ff       	call   87244f0 <_ZdlPv>
 8725f1a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8725f1d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8725f20:	89 ec                	mov    %ebp,%esp
 8725f22:	5d                   	pop    %ebp
 8725f23:	c3                   	ret
 8725f24:	90                   	nop
 8725f25:	90                   	nop
 8725f26:	90                   	nop
 8725f27:	90                   	nop
 8725f28:	90                   	nop
 8725f29:	90                   	nop
 8725f2a:	90                   	nop
 8725f2b:	90                   	nop
 8725f2c:	90                   	nop
 8725f2d:	90                   	nop
 8725f2e:	90                   	nop
 8725f2f:	90                   	nop

```

```c
// std::bad_typeid::~bad_typeid @ 0x8725ef0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  ~bad_typeid(this);
  operator_delete(this);
  return;
}

```

