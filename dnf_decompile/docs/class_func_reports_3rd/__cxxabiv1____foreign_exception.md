# __cxxabiv1____foreign_exception

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ~__foreign_exception

```asm
// === 087250f0 __cxxabiv1::__foreign_exception::~__foreign_exception  [0x087250f0-0x872510f] ===
 87250f0:	e8 cf f4 ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87250f5:	81 c1 a3 7a c4 00    	add    $0xc47aa3,%ecx
 87250fb:	55                   	push   %ebp
 87250fc:	89 e5                	mov    %esp,%ebp
 87250fe:	8b 81 18 fb ff ff    	mov    -0x4e8(%ecx),%eax
 8725104:	8d 50 08             	lea    0x8(%eax),%edx
 8725107:	8b 45 08             	mov    0x8(%ebp),%eax
 872510a:	89 10                	mov    %edx,(%eax)
 872510c:	5d                   	pop    %ebp
 872510d:	c3                   	ret
 872510e:	90                   	nop
 872510f:	90                   	nop

```

```c
// __cxxabiv1::__foreign_exception::~__foreign_exception @ 0x87250f0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* __cxxabiv1::__foreign_exception::~__foreign_exception() */

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  *(undefined **)this = PTR_vtable_0936c6b0 + 8;
  return;
}

```

---

## ~__foreign_exception_08725150

```asm
// === 08725150 __cxxabiv1::__foreign_exception::~__foreign_exception  [0x08725150-0x872518f] ===
 8725150:	55                   	push   %ebp
 8725151:	89 e5                	mov    %esp,%ebp
 8725153:	83 ec 18             	sub    $0x18,%esp
 8725156:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8725159:	e8 9a dc ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872515e:	81 c3 3a 7a c4 00    	add    $0xc47a3a,%ebx
 8725164:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8725167:	8b 75 08             	mov    0x8(%ebp),%esi
 872516a:	89 34 24             	mov    %esi,(%esp)
 872516d:	e8 7e ff ff ff       	call   87250f0 <_ZN10__cxxabiv119__foreign_exceptionD1Ev>
 8725172:	89 34 24             	mov    %esi,(%esp)
 8725175:	e8 76 f3 ff ff       	call   87244f0 <_ZdlPv>
 872517a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 872517d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8725180:	89 ec                	mov    %ebp,%esp
 8725182:	5d                   	pop    %ebp
 8725183:	c3                   	ret
 8725184:	90                   	nop
 8725185:	90                   	nop
 8725186:	90                   	nop
 8725187:	90                   	nop
 8725188:	90                   	nop
 8725189:	90                   	nop
 872518a:	90                   	nop
 872518b:	90                   	nop
 872518c:	90                   	nop
 872518d:	90                   	nop
 872518e:	90                   	nop
 872518f:	90                   	nop

```

```c
// __cxxabiv1::__foreign_exception::~__foreign_exception @ 0x8725150

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__foreign_exception::~__foreign_exception() */

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  ~__foreign_exception(this);
  operator_delete(this);
  return;
}

```

