# DB_StatCoinUse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_StatCoinUse

```asm
// === 08417b04 DB_StatCoinUse::DB_StatCoinUse  [0x08417b04-0x8417b1f] ===
 8417b04:	55                   	push   %ebp
 8417b05:	89 e5                	mov    %esp,%ebp
 8417b07:	83 ec 18             	sub    $0x18,%esp
 8417b0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b0d:	89 04 24             	mov    %eax,(%esp)
 8417b10:	e8 91 5c 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417b15:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b18:	c7 00 68 fa c5 08    	movl   $0x8c5fa68,(%eax)
 8417b1e:	c9                   	leave
 8417b1f:	c3                   	ret

```

```c
// DB_StatCoinUse::DB_StatCoinUse @ 0x8417b04

/* DB_StatCoinUse::DB_StatCoinUse() */

void __thiscall DB_StatCoinUse::DB_StatCoinUse(DB_StatCoinUse *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa68;
  return;
}

```

---

## LogWrite

```asm
// === 08417b78 DB_StatCoinUse::LogWrite  [0x08417b78-0x8417b81] ===
 8417b78:	55                   	push   %ebp
 8417b79:	89 e5                	mov    %esp,%ebp
 8417b7b:	b8 01 00 00 00       	mov    $0x1,%eax
 8417b80:	5d                   	pop    %ebp
 8417b81:	c3                   	ret

```

```c
// DB_StatCoinUse::LogWrite @ 0x8417b78

/* DB_StatCoinUse::LogWrite(MSG_STAT_USECOIN&) */

undefined4 DB_StatCoinUse::LogWrite(MSG_STAT_USECOIN *param_1)

{
  return 1;
}

```

---

## dispatch

```asm
// === 08417b6e DB_StatCoinUse::dispatch  [0x08417b6e-0x8417b77] ===
 8417b6e:	55                   	push   %ebp
 8417b6f:	89 e5                	mov    %esp,%ebp
 8417b71:	b8 01 00 00 00       	mov    $0x1,%eax
 8417b76:	5d                   	pop    %ebp
 8417b77:	c3                   	ret

```

```c
// DB_StatCoinUse::dispatch @ 0x8417b6e

/* DB_StatCoinUse::dispatch(int, int, Stream*) */

undefined4 DB_StatCoinUse::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

---

## ~DB_StatCoinUse

```asm
// === 08417b20 DB_StatCoinUse::~DB_StatCoinUse  [0x08417b20-0x8417b4f] ===
 8417b20:	55                   	push   %ebp
 8417b21:	89 e5                	mov    %esp,%ebp
 8417b23:	83 ec 18             	sub    $0x18,%esp
 8417b26:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b29:	c7 00 68 fa c5 08    	movl   $0x8c5fa68,(%eax)
 8417b2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b32:	89 04 24             	mov    %eax,(%esp)
 8417b35:	e8 3e a8 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417b3a:	b8 00 00 00 00       	mov    $0x0,%eax
 8417b3f:	84 c0                	test   %al,%al
 8417b41:	74 0b                	je     8417b4e <_ZN14DB_StatCoinUseD1Ev+0x2e>
 8417b43:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b46:	89 04 24             	mov    %eax,(%esp)
 8417b49:	e8 a2 c9 30 00       	call   87244f0 <_ZdlPv>
 8417b4e:	c9                   	leave
 8417b4f:	c3                   	ret

```

```c
// DB_StatCoinUse::~DB_StatCoinUse @ 0x8417b20

/* WARNING: Removing unreachable block (ram,0x08417b43) */
/* DB_StatCoinUse::~DB_StatCoinUse() */

void __thiscall DB_StatCoinUse::~DB_StatCoinUse(DB_StatCoinUse *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa68;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_StatCoinUse_08417b50

```asm
// === 08417b50 DB_StatCoinUse::~DB_StatCoinUse  [0x08417b50-0x8417b6d] ===
 8417b50:	55                   	push   %ebp
 8417b51:	89 e5                	mov    %esp,%ebp
 8417b53:	83 ec 18             	sub    $0x18,%esp
 8417b56:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b59:	89 04 24             	mov    %eax,(%esp)
 8417b5c:	e8 bf ff ff ff       	call   8417b20 <_ZN14DB_StatCoinUseD1Ev>
 8417b61:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b64:	89 04 24             	mov    %eax,(%esp)
 8417b67:	e8 84 c9 30 00       	call   87244f0 <_ZdlPv>
 8417b6c:	c9                   	leave
 8417b6d:	c3                   	ret

```

```c
// DB_StatCoinUse::~DB_StatCoinUse @ 0x8417b50

/* DB_StatCoinUse::~DB_StatCoinUse() */

void __thiscall DB_StatCoinUse::~DB_StatCoinUse(DB_StatCoinUse *this)

{
  ~DB_StatCoinUse(this);
  operator_delete(this);
  return;
}

```

