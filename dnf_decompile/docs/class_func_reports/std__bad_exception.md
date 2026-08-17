# std__bad_exception

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## what

```asm
// === 08725130 std::bad_exception::what  [0x08725130-0x872514f] ===
 8725130:	e8 8f f4 ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8725135:	81 c1 63 7a c4 00    	add    $0xc47a63,%ecx
 872513b:	55                   	push   %ebp
 872513c:	89 e5                	mov    %esp,%ebp
 872513e:	5d                   	pop    %ebp
 872513f:	8d 81 b8 4f 99 ff    	lea    -0x66b048(%ecx),%eax
 8725145:	c3                   	ret
 8725146:	90                   	nop
 8725147:	90                   	nop
 8725148:	90                   	nop
 8725149:	90                   	nop
 872514a:	90                   	nop
 872514b:	90                   	nop
 872514c:	90                   	nop
 872514d:	90                   	nop
 872514e:	90                   	nop
 872514f:	90                   	nop

```

```c
// std::bad_exception::what @ 0x8725130

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_exception::what() const */

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}

```

---

## ~bad_exception

```asm
// === 087250a0 std::bad_exception::~bad_exception  [0x087250a0-0x87250cf] ===
 87250a0:	55                   	push   %ebp
 87250a1:	89 e5                	mov    %esp,%ebp
 87250a3:	53                   	push   %ebx
 87250a4:	e8 4f dd ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87250a9:	81 c3 ef 7a c4 00    	add    $0xc47aef,%ebx
 87250af:	83 ec 14             	sub    $0x14,%esp
 87250b2:	8b 45 08             	mov    0x8(%ebp),%eax
 87250b5:	8b 93 38 fd ff ff    	mov    -0x2c8(%ebx),%edx
 87250bb:	83 c2 08             	add    $0x8,%edx
 87250be:	89 10                	mov    %edx,(%eax)
 87250c0:	89 04 24             	mov    %eax,(%esp)
 87250c3:	e8 b8 ff ff ff       	call   8725080 <_ZNSt9exceptionD1Ev>
 87250c8:	83 c4 14             	add    $0x14,%esp
 87250cb:	5b                   	pop    %ebx
 87250cc:	5d                   	pop    %ebp
 87250cd:	c3                   	ret
 87250ce:	90                   	nop
 87250cf:	90                   	nop

```

```c
// std::bad_exception::~bad_exception @ 0x87250a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(undefined **)this = PTR_vtable_0936c8d0 + 8;
  exception::~exception((exception *)this);
  return;
}

```

---

## ~bad_exception_087251d0

```asm
// === 087251d0 std::bad_exception::~bad_exception  [0x087251d0-0x872520f] ===
 87251d0:	55                   	push   %ebp
 87251d1:	89 e5                	mov    %esp,%ebp
 87251d3:	83 ec 18             	sub    $0x18,%esp
 87251d6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87251d9:	e8 1a dc ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87251de:	81 c3 ba 79 c4 00    	add    $0xc479ba,%ebx
 87251e4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87251e7:	8b 75 08             	mov    0x8(%ebp),%esi
 87251ea:	89 34 24             	mov    %esi,(%esp)
 87251ed:	e8 ae fe ff ff       	call   87250a0 <_ZNSt13bad_exceptionD1Ev>
 87251f2:	89 34 24             	mov    %esi,(%esp)
 87251f5:	e8 f6 f2 ff ff       	call   87244f0 <_ZdlPv>
 87251fa:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87251fd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8725200:	89 ec                	mov    %ebp,%esp
 8725202:	5d                   	pop    %ebp
 8725203:	c3                   	ret
 8725204:	90                   	nop
 8725205:	90                   	nop
 8725206:	90                   	nop
 8725207:	90                   	nop
 8725208:	90                   	nop
 8725209:	90                   	nop
 872520a:	90                   	nop
 872520b:	90                   	nop
 872520c:	90                   	nop
 872520d:	90                   	nop
 872520e:	90                   	nop
 872520f:	90                   	nop

```

```c
// std::bad_exception::~bad_exception @ 0x87251d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  ~bad_exception(this);
  operator_delete(this);
  return;
}

```

