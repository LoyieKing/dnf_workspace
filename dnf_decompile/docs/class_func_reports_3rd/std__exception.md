# std__exception

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## what

```asm
// === 08725110 std::exception::what  [0x08725110-0x872512f] ===
 8725110:	e8 af f4 ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8725115:	81 c1 83 7a c4 00    	add    $0xc47a83,%ecx
 872511b:	55                   	push   %ebp
 872511c:	89 e5                	mov    %esp,%ebp
 872511e:	5d                   	pop    %ebp
 872511f:	8d 81 a9 4f 99 ff    	lea    -0x66b057(%ecx),%eax
 8725125:	c3                   	ret
 8725126:	90                   	nop
 8725127:	90                   	nop
 8725128:	90                   	nop
 8725129:	90                   	nop
 872512a:	90                   	nop
 872512b:	90                   	nop
 872512c:	90                   	nop
 872512d:	90                   	nop
 872512e:	90                   	nop
 872512f:	90                   	nop

```

```c
// std::exception::what @ 0x8725110

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::exception::what() const */

char * std::exception::what(void)

{
  return "std::exception";
}

```

---

## ~exception

```asm
// === 08725080 std::exception::~exception  [0x08725080-0x872509f] ===
 8725080:	e8 3f f5 ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8725085:	81 c1 13 7b c4 00    	add    $0xc47b13,%ecx
 872508b:	55                   	push   %ebp
 872508c:	89 e5                	mov    %esp,%ebp
 872508e:	8b 81 f4 fd ff ff    	mov    -0x20c(%ecx),%eax
 8725094:	8d 50 08             	lea    0x8(%eax),%edx
 8725097:	8b 45 08             	mov    0x8(%ebp),%eax
 872509a:	89 10                	mov    %edx,(%eax)
 872509c:	5d                   	pop    %ebp
 872509d:	c3                   	ret
 872509e:	90                   	nop
 872509f:	90                   	nop

```

```c
// std::exception::~exception @ 0x8725080

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  *(undefined **)this = PTR_vtable_0936c98c + 8;
  return;
}

```

---

## ~exception_08725210

```asm
// === 08725210 std::exception::~exception  [0x08725210-0x872524f] ===
 8725210:	55                   	push   %ebp
 8725211:	89 e5                	mov    %esp,%ebp
 8725213:	83 ec 18             	sub    $0x18,%esp
 8725216:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8725219:	e8 da db ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872521e:	81 c3 7a 79 c4 00    	add    $0xc4797a,%ebx
 8725224:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8725227:	8b 75 08             	mov    0x8(%ebp),%esi
 872522a:	89 34 24             	mov    %esi,(%esp)
 872522d:	e8 4e fe ff ff       	call   8725080 <_ZNSt9exceptionD1Ev>
 8725232:	89 34 24             	mov    %esi,(%esp)
 8725235:	e8 b6 f2 ff ff       	call   87244f0 <_ZdlPv>
 872523a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 872523d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8725240:	89 ec                	mov    %ebp,%esp
 8725242:	5d                   	pop    %ebp
 8725243:	c3                   	ret
 8725244:	90                   	nop
 8725245:	90                   	nop
 8725246:	90                   	nop
 8725247:	90                   	nop
 8725248:	90                   	nop
 8725249:	90                   	nop
 872524a:	90                   	nop
 872524b:	90                   	nop
 872524c:	90                   	nop
 872524d:	90                   	nop
 872524e:	90                   	nop
 872524f:	90                   	nop

```

```c
// std::exception::~exception @ 0x8725210

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  ~exception(this);
  operator_delete(this);
  return;
}

```

