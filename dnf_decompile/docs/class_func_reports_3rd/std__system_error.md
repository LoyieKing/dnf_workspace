# std__system_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ~system_error

```asm
// === 086df7c0 std::system_error::~system_error  [0x086df7c0-0x86df7df] ===
 86df7c0:	55                   	push   %ebp
 86df7c1:	89 e5                	mov    %esp,%ebp
 86df7c3:	83 ec 08             	sub    $0x8,%esp
 86df7c6:	8b 45 08             	mov    0x8(%ebp),%eax
 86df7c9:	c7 00 70 e5 cf 08    	movl   $0x8cfe570,(%eax)
 86df7cf:	c9                   	leave
 86df7d0:	e9 7b db ff ff       	jmp    86dd350 <_ZNSt13runtime_errorD1Ev>
 86df7d5:	90                   	nop
 86df7d6:	90                   	nop
 86df7d7:	90                   	nop
 86df7d8:	90                   	nop
 86df7d9:	90                   	nop
 86df7da:	90                   	nop
 86df7db:	90                   	nop
 86df7dc:	90                   	nop
 86df7dd:	90                   	nop
 86df7de:	90                   	nop
 86df7df:	90                   	nop

```

```c
// std::system_error::~system_error @ 0x86df7c0

/* std::system_error::~system_error() */

void __thiscall std::system_error::~system_error(system_error *this)

{
  *(undefined ***)this = &PTR__system_error_08cfe570;
  runtime_error::~runtime_error((runtime_error *)this);
  return;
}

```

---

## ~system_error_086df7e0

```asm
// === 086df7e0 std::system_error::~system_error  [0x086df7e0-0x86df7ff] ===
 86df7e0:	55                   	push   %ebp
 86df7e1:	89 e5                	mov    %esp,%ebp
 86df7e3:	53                   	push   %ebx
 86df7e4:	83 ec 14             	sub    $0x14,%esp
 86df7e7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86df7ea:	89 1c 24             	mov    %ebx,(%esp)
 86df7ed:	e8 ce ff ff ff       	call   86df7c0 <_ZNSt12system_errorD1Ev>
 86df7f2:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86df7f5:	83 c4 14             	add    $0x14,%esp
 86df7f8:	5b                   	pop    %ebx
 86df7f9:	5d                   	pop    %ebp
 86df7fa:	e9 f1 4c 04 00       	jmp    87244f0 <_ZdlPv>
 86df7ff:	90                   	nop

```

```c
// std::system_error::~system_error @ 0x86df7e0

/* std::system_error::~system_error() */

void __thiscall std::system_error::~system_error(system_error *this)

{
  ~system_error(this);
  operator_delete(this);
  return;
}

```

