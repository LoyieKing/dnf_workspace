# advancealtar__TimeLineSummary

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## TimeLineSummary

```asm
// === 08899d18 advancealtar::TimeLineSummary::TimeLineSummary  [0x08899d18-0x8899d37] ===
 8899d18:	55                   	push   %ebp
 8899d19:	89 e5                	mov    %esp,%ebp
 8899d1b:	83 ec 18             	sub    $0x18,%esp
 8899d1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d21:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8899d27:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d2a:	83 c0 04             	add    $0x4,%eax
 8899d2d:	89 04 24             	mov    %eax,(%esp)
 8899d30:	e8 cf 1f 00 00       	call   889bd04 <_ZNSt6vectorIN12advancealtar13_PhaseSummaryESaIS1_EEC1Ev>
 8899d35:	c9                   	leave
 8899d36:	c3                   	ret
 8899d37:	90                   	nop

```

```c
// advancealtar::TimeLineSummary::TimeLineSummary @ 0x8899d18

/* advancealtar::TimeLineSummary::TimeLineSummary() */

void __thiscall advancealtar::TimeLineSummary::TimeLineSummary(TimeLineSummary *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::vector
            ((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>> *)
             (this + 4));
  return;
}

```

---

## reset

```asm
// === 08899d4e advancealtar::TimeLineSummary::reset  [0x08899d4e-0x8899d6d] ===
 8899d4e:	55                   	push   %ebp
 8899d4f:	89 e5                	mov    %esp,%ebp
 8899d51:	83 ec 18             	sub    $0x18,%esp
 8899d54:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d57:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8899d5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d60:	83 c0 04             	add    $0x4,%eax
 8899d63:	89 04 24             	mov    %eax,(%esp)
 8899d66:	e8 0b 20 00 00       	call   889bd76 <_ZNSt6vectorIN12advancealtar13_PhaseSummaryESaIS1_EE5clearEv>
 8899d6b:	c9                   	leave
 8899d6c:	c3                   	ret
 8899d6d:	90                   	nop

```

```c
// advancealtar::TimeLineSummary::reset @ 0x8899d4e

/* advancealtar::TimeLineSummary::reset() */

void __thiscall advancealtar::TimeLineSummary::reset(TimeLineSummary *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::clear
            ((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>> *)
             (this + 4));
  return;
}

```

---

## ~TimeLineSummary

```asm
// === 08899d38 advancealtar::TimeLineSummary::~TimeLineSummary  [0x08899d38-0x8899d4d] ===
 8899d38:	55                   	push   %ebp
 8899d39:	89 e5                	mov    %esp,%ebp
 8899d3b:	83 ec 18             	sub    $0x18,%esp
 8899d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d41:	83 c0 04             	add    $0x4,%eax
 8899d44:	89 04 24             	mov    %eax,(%esp)
 8899d47:	e8 cc 1f 00 00       	call   889bd18 <_ZNSt6vectorIN12advancealtar13_PhaseSummaryESaIS1_EED1Ev>
 8899d4c:	c9                   	leave
 8899d4d:	c3                   	ret

```

```c
// advancealtar::TimeLineSummary::~TimeLineSummary @ 0x8899d38

/* advancealtar::TimeLineSummary::~TimeLineSummary() */

void __thiscall advancealtar::TimeLineSummary::~TimeLineSummary(TimeLineSummary *this)

{
  std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::~vector
            ((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>> *)
             (this + 4));
  return;
}

```

