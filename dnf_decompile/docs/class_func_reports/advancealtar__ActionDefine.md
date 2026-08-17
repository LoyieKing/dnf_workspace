# advancealtar__ActionDefine

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ActionDefine

```asm
// === 08899c62 advancealtar::ActionDefine::ActionDefine  [0x08899c62-0x8899c81] ===
 8899c62:	55                   	push   %ebp
 8899c63:	89 e5                	mov    %esp,%ebp
 8899c65:	83 ec 18             	sub    $0x18,%esp
 8899c68:	8b 45 08             	mov    0x8(%ebp),%eax
 8899c6b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8899c71:	8b 45 08             	mov    0x8(%ebp),%eax
 8899c74:	83 c0 04             	add    $0x4,%eax
 8899c77:	89 04 24             	mov    %eax,(%esp)
 8899c7a:	e8 69 1f 00 00       	call   889bbe8 <_ZNSt6vectorIN12advancealtar7_ActionESaIS1_EEC1Ev>
 8899c7f:	c9                   	leave
 8899c80:	c3                   	ret
 8899c81:	90                   	nop

```

```c
// advancealtar::ActionDefine::ActionDefine @ 0x8899c62

/* advancealtar::ActionDefine::ActionDefine() */

void __thiscall advancealtar::ActionDefine::ActionDefine(ActionDefine *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::vector
            ((vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> *)(this + 4));
  return;
}

```

---

## reset

```asm
// === 08899c98 advancealtar::ActionDefine::reset  [0x08899c98-0x8899cb7] ===
 8899c98:	55                   	push   %ebp
 8899c99:	89 e5                	mov    %esp,%ebp
 8899c9b:	83 ec 18             	sub    $0x18,%esp
 8899c9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8899ca1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8899ca7:	8b 45 08             	mov    0x8(%ebp),%eax
 8899caa:	83 c0 04             	add    $0x4,%eax
 8899cad:	89 04 24             	mov    %eax,(%esp)
 8899cb0:	e8 a5 1f 00 00       	call   889bc5a <_ZNSt6vectorIN12advancealtar7_ActionESaIS1_EE5clearEv>
 8899cb5:	c9                   	leave
 8899cb6:	c3                   	ret
 8899cb7:	90                   	nop

```

```c
// advancealtar::ActionDefine::reset @ 0x8899c98

/* advancealtar::ActionDefine::reset() */

void __thiscall advancealtar::ActionDefine::reset(ActionDefine *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::clear
            ((vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> *)(this + 4));
  return;
}

```

---

## ~ActionDefine

```asm
// === 08899c82 advancealtar::ActionDefine::~ActionDefine  [0x08899c82-0x8899c97] ===
 8899c82:	55                   	push   %ebp
 8899c83:	89 e5                	mov    %esp,%ebp
 8899c85:	83 ec 18             	sub    $0x18,%esp
 8899c88:	8b 45 08             	mov    0x8(%ebp),%eax
 8899c8b:	83 c0 04             	add    $0x4,%eax
 8899c8e:	89 04 24             	mov    %eax,(%esp)
 8899c91:	e8 66 1f 00 00       	call   889bbfc <_ZNSt6vectorIN12advancealtar7_ActionESaIS1_EED1Ev>
 8899c96:	c9                   	leave
 8899c97:	c3                   	ret

```

```c
// advancealtar::ActionDefine::~ActionDefine @ 0x8899c82

/* advancealtar::ActionDefine::~ActionDefine() */

void __thiscall advancealtar::ActionDefine::~ActionDefine(ActionDefine *this)

{
  std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::~vector
            ((vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> *)(this + 4));
  return;
}

```

