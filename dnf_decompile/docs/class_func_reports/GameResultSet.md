# GameResultSet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Clear

```asm
// === 084b75fa GameResultSet::Clear  [0x084b75fa-0x84b760c] ===
 84b75fa:	55                   	push   %ebp
 84b75fb:	89 e5                	mov    %esp,%ebp
 84b75fd:	83 ec 18             	sub    $0x18,%esp
 84b7600:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7603:	89 04 24             	mov    %eax,(%esp)
 84b7606:	e8 37 fe ff ff       	call   84b7442 <_ZN14GameResultType5ClearEv>
 84b760b:	c9                   	leave
 84b760c:	c3                   	ret

```

```c
// GameResultSet::Clear @ 0x84b75fa

/* GameResultSet::Clear() */

void __thiscall GameResultSet::Clear(GameResultSet *this)

{
  GameResultType::Clear((GameResultType *)this);
  return;
}

```

---

## GameResultSet

```asm
// === 084b75d2 GameResultSet::GameResultSet  [0x084b75d2-0x84b75e5] ===
 84b75d2:	55                   	push   %ebp
 84b75d3:	89 e5                	mov    %esp,%ebp
 84b75d5:	83 ec 18             	sub    $0x18,%esp
 84b75d8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b75db:	89 04 24             	mov    %eax,(%esp)
 84b75de:	e8 f1 fd ff ff       	call   84b73d4 <_ZN14GameResultTypeC1Ev>
 84b75e3:	c9                   	leave
 84b75e4:	c3                   	ret
 84b75e5:	90                   	nop

```

```c
// GameResultSet::GameResultSet @ 0x84b75d2

/* GameResultSet::GameResultSet() */

void __thiscall GameResultSet::GameResultSet(GameResultSet *this)

{
  GameResultType::GameResultType((GameResultType *)this);
  return;
}

```

---

## ~GameResultSet

```asm
// === 084b75e6 GameResultSet::~GameResultSet  [0x084b75e6-0x84b75f9] ===
 84b75e6:	55                   	push   %ebp
 84b75e7:	89 e5                	mov    %esp,%ebp
 84b75e9:	83 ec 04             	sub    $0x4,%esp
 84b75ec:	8b 45 08             	mov    0x8(%ebp),%eax
 84b75ef:	89 04 24             	mov    %eax,(%esp)
 84b75f2:	e8 1f fe ff ff       	call   84b7416 <_ZN14GameResultTypeD1Ev>
 84b75f7:	c9                   	leave
 84b75f8:	c3                   	ret
 84b75f9:	90                   	nop

```

```c
// GameResultSet::~GameResultSet @ 0x84b75e6

/* GameResultSet::~GameResultSet() */

void __thiscall GameResultSet::~GameResultSet(GameResultSet *this)

{
  GameResultType::~GameResultType((GameResultType *)this);
  return;
}

```

