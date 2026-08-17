# advancealtar__TimeLine

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## TimeLine

```asm
// === 08899d6e advancealtar::TimeLine::TimeLine  [0x08899d6e-0x8899db3] ===
 8899d6e:	55                   	push   %ebp
 8899d6f:	89 e5                	mov    %esp,%ebp
 8899d71:	56                   	push   %esi
 8899d72:	53                   	push   %ebx
 8899d73:	83 ec 10             	sub    $0x10,%esp
 8899d76:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d79:	89 04 24             	mov    %eax,(%esp)
 8899d7c:	e8 11 20 00 00       	call   889bd92 <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EEC1Ev>
 8899d81:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d84:	83 c0 0c             	add    $0xc,%eax
 8899d87:	89 04 24             	mov    %eax,(%esp)
 8899d8a:	e8 89 ff ff ff       	call   8899d18 <_ZN12advancealtar15TimeLineSummaryC1Ev>
 8899d8f:	eb 1b                	jmp    8899dac <_ZN12advancealtar8TimeLineC1Ev+0x3e>
 8899d91:	89 d3                	mov    %edx,%ebx
 8899d93:	89 c6                	mov    %eax,%esi
 8899d95:	8b 45 08             	mov    0x8(%ebp),%eax
 8899d98:	89 04 24             	mov    %eax,(%esp)
 8899d9b:	e8 5c a5 af ff       	call   83942fc <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EED1Ev>
 8899da0:	89 f0                	mov    %esi,%eax
 8899da2:	89 da                	mov    %ebx,%edx
 8899da4:	89 04 24             	mov    %eax,(%esp)
 8899da7:	e8 a4 99 24 00       	call   8ae3750 <_Unwind_Resume>
 8899dac:	83 c4 10             	add    $0x10,%esp
 8899daf:	5b                   	pop    %ebx
 8899db0:	5e                   	pop    %esi
 8899db1:	5d                   	pop    %ebp
 8899db2:	c3                   	ret
 8899db3:	90                   	nop

```

```c
// advancealtar::TimeLine::TimeLine @ 0x8899d6e

/* advancealtar::TimeLine::TimeLine() */

void __thiscall advancealtar::TimeLine::TimeLine(TimeLine *this)

{
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::vector
            ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)this);
                    /* try { // try from 08899d8a to 08899d8e has its CatchHandler @ 08899d91 */
  TimeLineSummary::TimeLineSummary((TimeLineSummary *)(this + 0xc));
  return;
}

```

---

## reset

```asm
// === 08899dfa advancealtar::TimeLine::reset  [0x08899dfa-0x8899e1b] ===
 8899dfa:	55                   	push   %ebp
 8899dfb:	89 e5                	mov    %esp,%ebp
 8899dfd:	83 ec 18             	sub    $0x18,%esp
 8899e00:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e03:	89 04 24             	mov    %eax,(%esp)
 8899e06:	e8 9b 1f 00 00       	call   889bda6 <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EE5clearEv>
 8899e0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8899e0e:	83 c0 0c             	add    $0xc,%eax
 8899e11:	89 04 24             	mov    %eax,(%esp)
 8899e14:	e8 35 ff ff ff       	call   8899d4e <_ZN12advancealtar15TimeLineSummary5resetEv>
 8899e19:	c9                   	leave
 8899e1a:	c3                   	ret
 8899e1b:	90                   	nop

```

```c
// advancealtar::TimeLine::reset @ 0x8899dfa

/* advancealtar::TimeLine::reset() */

void __thiscall advancealtar::TimeLine::reset(TimeLine *this)

{
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::clear
            ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)this);
  TimeLineSummary::reset((TimeLineSummary *)(this + 0xc));
  return;
}

```

---

## ~TimeLine

```asm
// === 08899db4 advancealtar::TimeLine::~TimeLine  [0x08899db4-0x8899df9] ===
 8899db4:	55                   	push   %ebp
 8899db5:	89 e5                	mov    %esp,%ebp
 8899db7:	56                   	push   %esi
 8899db8:	53                   	push   %ebx
 8899db9:	83 ec 10             	sub    $0x10,%esp
 8899dbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8899dbf:	83 c0 0c             	add    $0xc,%eax
 8899dc2:	89 04 24             	mov    %eax,(%esp)
 8899dc5:	e8 6e ff ff ff       	call   8899d38 <_ZN12advancealtar15TimeLineSummaryD1Ev>
 8899dca:	eb 1b                	jmp    8899de7 <_ZN12advancealtar8TimeLineD1Ev+0x33>
 8899dcc:	89 d3                	mov    %edx,%ebx
 8899dce:	89 c6                	mov    %eax,%esi
 8899dd0:	8b 45 08             	mov    0x8(%ebp),%eax
 8899dd3:	89 04 24             	mov    %eax,(%esp)
 8899dd6:	e8 21 a5 af ff       	call   83942fc <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EED1Ev>
 8899ddb:	89 f0                	mov    %esi,%eax
 8899ddd:	89 da                	mov    %ebx,%edx
 8899ddf:	89 04 24             	mov    %eax,(%esp)
 8899de2:	e8 69 99 24 00       	call   8ae3750 <_Unwind_Resume>
 8899de7:	8b 45 08             	mov    0x8(%ebp),%eax
 8899dea:	89 04 24             	mov    %eax,(%esp)
 8899ded:	e8 0a a5 af ff       	call   83942fc <_ZNSt6vectorIN12advancealtar5PhaseESaIS1_EED1Ev>
 8899df2:	83 c4 10             	add    $0x10,%esp
 8899df5:	5b                   	pop    %ebx
 8899df6:	5e                   	pop    %esi
 8899df7:	5d                   	pop    %ebp
 8899df8:	c3                   	ret
 8899df9:	90                   	nop

```

```c
// advancealtar::TimeLine::~TimeLine @ 0x8899db4

/* advancealtar::TimeLine::~TimeLine() */

void __thiscall advancealtar::TimeLine::~TimeLine(TimeLine *this)

{
                    /* try { // try from 08899dc5 to 08899dc9 has its CatchHandler @ 08899dcc */
  TimeLineSummary::~TimeLineSummary((TimeLineSummary *)(this + 0xc));
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::~vector
            ((vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> *)this);
  return;
}

```

