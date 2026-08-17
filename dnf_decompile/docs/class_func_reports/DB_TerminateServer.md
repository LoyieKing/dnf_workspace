# DB_TerminateServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## DB_TerminateServer

```asm
// === 0841a284 DB_TerminateServer::DB_TerminateServer  [0x0841a284-0x841a29f] ===
 841a284:	55                   	push   %ebp
 841a285:	89 e5                	mov    %esp,%ebp
 841a287:	83 ec 18             	sub    $0x18,%esp
 841a28a:	8b 45 08             	mov    0x8(%ebp),%eax
 841a28d:	89 04 24             	mov    %eax,(%esp)
 841a290:	e8 11 35 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 841a295:	8b 45 08             	mov    0x8(%ebp),%eax
 841a298:	c7 00 30 f9 c5 08    	movl   $0x8c5f930,(%eax)
 841a29e:	c9                   	leave
 841a29f:	c3                   	ret

```

```c
// DB_TerminateServer::DB_TerminateServer @ 0x841a284

/* DB_TerminateServer::DB_TerminateServer() */

void __thiscall DB_TerminateServer::DB_TerminateServer(DB_TerminateServer *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f930;
  return;
}

```

---

## dispatch

```asm
// === 0841a2ee DB_TerminateServer::dispatch  [0x0841a2ee-0x841a2f7] ===
 841a2ee:	55                   	push   %ebp
 841a2ef:	89 e5                	mov    %esp,%ebp
 841a2f1:	b8 01 00 00 00       	mov    $0x1,%eax
 841a2f6:	5d                   	pop    %ebp
 841a2f7:	c3                   	ret

```

```c
// DB_TerminateServer::dispatch @ 0x841a2ee

/* DB_TerminateServer::dispatch(int, int, Stream*) */

undefined4 DB_TerminateServer::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}

```

---

## ~DB_TerminateServer

```asm
// === 0841a2a0 DB_TerminateServer::~DB_TerminateServer  [0x0841a2a0-0x841a2cf] ===
 841a2a0:	55                   	push   %ebp
 841a2a1:	89 e5                	mov    %esp,%ebp
 841a2a3:	83 ec 18             	sub    $0x18,%esp
 841a2a6:	8b 45 08             	mov    0x8(%ebp),%eax
 841a2a9:	c7 00 30 f9 c5 08    	movl   $0x8c5f930,(%eax)
 841a2af:	8b 45 08             	mov    0x8(%ebp),%eax
 841a2b2:	89 04 24             	mov    %eax,(%esp)
 841a2b5:	e8 be 80 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 841a2ba:	b8 00 00 00 00       	mov    $0x0,%eax
 841a2bf:	84 c0                	test   %al,%al
 841a2c1:	74 0b                	je     841a2ce <_ZN18DB_TerminateServerD1Ev+0x2e>
 841a2c3:	8b 45 08             	mov    0x8(%ebp),%eax
 841a2c6:	89 04 24             	mov    %eax,(%esp)
 841a2c9:	e8 22 a2 30 00       	call   87244f0 <_ZdlPv>
 841a2ce:	c9                   	leave
 841a2cf:	c3                   	ret

```

```c
// DB_TerminateServer::~DB_TerminateServer @ 0x841a2a0

/* WARNING: Removing unreachable block (ram,0x0841a2c3) */
/* DB_TerminateServer::~DB_TerminateServer() */

void __thiscall DB_TerminateServer::~DB_TerminateServer(DB_TerminateServer *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f930;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_TerminateServer_0841a2d0

```asm
// === 0841a2d0 DB_TerminateServer::~DB_TerminateServer  [0x0841a2d0-0x841a2ed] ===
 841a2d0:	55                   	push   %ebp
 841a2d1:	89 e5                	mov    %esp,%ebp
 841a2d3:	83 ec 18             	sub    $0x18,%esp
 841a2d6:	8b 45 08             	mov    0x8(%ebp),%eax
 841a2d9:	89 04 24             	mov    %eax,(%esp)
 841a2dc:	e8 bf ff ff ff       	call   841a2a0 <_ZN18DB_TerminateServerD1Ev>
 841a2e1:	8b 45 08             	mov    0x8(%ebp),%eax
 841a2e4:	89 04 24             	mov    %eax,(%esp)
 841a2e7:	e8 04 a2 30 00       	call   87244f0 <_ZdlPv>
 841a2ec:	c9                   	leave
 841a2ed:	c3                   	ret

```

```c
// DB_TerminateServer::~DB_TerminateServer @ 0x841a2d0

/* DB_TerminateServer::~DB_TerminateServer() */

void __thiscall DB_TerminateServer::~DB_TerminateServer(DB_TerminateServer *this)

{
  ~DB_TerminateServer(this);
  operator_delete(this);
  return;
}

```

