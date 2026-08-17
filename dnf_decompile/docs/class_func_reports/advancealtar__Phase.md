# advancealtar__Phase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Phase

```asm
// === 08899cb8 advancealtar::Phase::Phase  [0x08899cb8-0x8899ce1] ===
 8899cb8:	55                   	push   %ebp
 8899cb9:	89 e5                	mov    %esp,%ebp
 8899cbb:	83 ec 18             	sub    $0x18,%esp
 8899cbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8899cc1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8899cc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8899cca:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8899cd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8899cd4:	83 c0 08             	add    $0x8,%eax
 8899cd7:	89 04 24             	mov    %eax,(%esp)
 8899cda:	e8 97 1f 00 00       	call   889bc76 <_ZNSt6vectorIN12advancealtar13_ActionAssignESaIS1_EEC1Ev>
 8899cdf:	c9                   	leave
 8899ce0:	c3                   	ret
 8899ce1:	90                   	nop

```

```c
// advancealtar::Phase::Phase @ 0x8899cb8

/* advancealtar::Phase::Phase() */

void __thiscall advancealtar::Phase::Phase(Phase *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::vector
            ((vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> *)
             (this + 8));
  return;
}

```

---

## reset

```asm
// === 08899cf8 advancealtar::Phase::reset  [0x08899cf8-0x8899d17] ===
 8899cf8:	55                   	push   %ebp
 8899cf9:	89 e5                	mov    %esp,%ebp
 8899cfb:	83 ec 18             	sub    $0x18,%esp
 8899cfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d01:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8899d07:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d0a:	83 c0 08             	add    $0x8,%eax
 8899d0d:	89 04 24             	mov    %eax,(%esp)
 8899d10:	e8 d3 1f 00 00       	call   889bce8 <_ZNSt6vectorIN12advancealtar13_ActionAssignESaIS1_EE5clearEv>
 8899d15:	c9                   	leave
 8899d16:	c3                   	ret
 8899d17:	90                   	nop

```

```c
// advancealtar::Phase::reset @ 0x8899cf8

/* advancealtar::Phase::reset() */

void __thiscall advancealtar::Phase::reset(Phase *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::clear
            ((vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> *)
             (this + 8));
  return;
}

```

---

## ~Phase

```asm
// === 08899ce2 advancealtar::Phase::~Phase  [0x08899ce2-0x8899cf7] ===
 8899ce2:	55                   	push   %ebp
 8899ce3:	89 e5                	mov    %esp,%ebp
 8899ce5:	83 ec 18             	sub    $0x18,%esp
 8899ce8:	8b 45 08             	mov    0x8(%ebp),%eax
 8899ceb:	83 c0 08             	add    $0x8,%eax
 8899cee:	89 04 24             	mov    %eax,(%esp)
 8899cf1:	e8 94 1f 00 00       	call   889bc8a <_ZNSt6vectorIN12advancealtar13_ActionAssignESaIS1_EED1Ev>
 8899cf6:	c9                   	leave
 8899cf7:	c3                   	ret

```

```c
// advancealtar::Phase::~Phase @ 0x8899ce2

/* advancealtar::Phase::~Phase() */

void __thiscall advancealtar::Phase::~Phase(Phase *this)

{
  std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::~vector
            ((vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> *)
             (this + 8));
  return;
}

```

