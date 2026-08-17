# ARAD__Arad_GMCommandManger

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Destory

```asm
// === 0819823a ARAD::Arad_GMCommandManger::Destory  [0x0819823a-0x819823f] ===
 819823a:	55                   	push   %ebp
 819823b:	89 e5                	mov    %esp,%ebp
 819823d:	5d                   	pop    %ebp
 819823e:	c3                   	ret
 819823f:	90                   	nop

```

```c
// ARAD::Arad_GMCommandManger::Destory @ 0x819823a

/* ARAD::Arad_GMCommandManger::Destory() */

void ARAD::Arad_GMCommandManger::Destory(void)

{
  return;
}

```

---

## Init

```asm
// === 08198230 ARAD::Arad_GMCommandManger::Init  [0x08198230-0x8198239] ===
 8198230:	55                   	push   %ebp
 8198231:	89 e5                	mov    %esp,%ebp
 8198233:	b8 01 00 00 00       	mov    $0x1,%eax
 8198238:	5d                   	pop    %ebp
 8198239:	c3                   	ret

```

```c
// ARAD::Arad_GMCommandManger::Init @ 0x8198230

/* ARAD::Arad_GMCommandManger::Init() */

undefined4 ARAD::Arad_GMCommandManger::Init(void)

{
  return 1;
}

```

---

## Process

```asm
// === 08198240 ARAD::Arad_GMCommandManger::Process  [0x08198240-0x8198249] ===
 8198240:	55                   	push   %ebp
 8198241:	89 e5                	mov    %esp,%ebp
 8198243:	b8 01 00 00 00       	mov    $0x1,%eax
 8198248:	5d                   	pop    %ebp
 8198249:	c3                   	ret

```

```c
// ARAD::Arad_GMCommandManger::Process @ 0x8198240

/* ARAD::Arad_GMCommandManger::Process(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 ARAD::Arad_GMCommandManger::Process(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  return 1;
}

```

---

## __FindPorcess

```asm
// === 0819824a ARAD::Arad_GMCommandManger::__FindPorcess  [0x0819824a-0x8198253] ===
 819824a:	55                   	push   %ebp
 819824b:	89 e5                	mov    %esp,%ebp
 819824d:	b8 00 00 00 00       	mov    $0x0,%eax
 8198252:	5d                   	pop    %ebp
 8198253:	c3                   	ret

```

```c
// ARAD::Arad_GMCommandManger::__FindPorcess @ 0x819824a

/* ARAD::Arad_GMCommandManger::__FindPorcess(ENUM_DEBUG_COMMAND) */

undefined4 ARAD::Arad_GMCommandManger::__FindPorcess(void)

{
  return 0;
}

```

