# DB_StatDungeonClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_StatDungeonClear

```asm
// === 08417c74 DB_StatDungeonClear::DB_StatDungeonClear  [0x08417c74-0x8417c8f] ===
 8417c74:	55                   	push   %ebp
 8417c75:	89 e5                	mov    %esp,%ebp
 8417c77:	83 ec 18             	sub    $0x18,%esp
 8417c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8417c7d:	89 04 24             	mov    %eax,(%esp)
 8417c80:	e8 21 5b 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417c85:	8b 45 08             	mov    0x8(%ebp),%eax
 8417c88:	c7 00 38 fa c5 08    	movl   $0x8c5fa38,(%eax)
 8417c8e:	c9                   	leave
 8417c8f:	c3                   	ret

```

```c
// DB_StatDungeonClear::DB_StatDungeonClear @ 0x8417c74

/* DB_StatDungeonClear::DB_StatDungeonClear() */

void __thiscall DB_StatDungeonClear::DB_StatDungeonClear(DB_StatDungeonClear *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa38;
  return;
}

```

---

## LogWrite

```asm
// === 08417d5c DB_StatDungeonClear::LogWrite  [0x08417d5c-0x8417d65] ===
 8417d5c:	55                   	push   %ebp
 8417d5d:	89 e5                	mov    %esp,%ebp
 8417d5f:	b8 01 00 00 00       	mov    $0x1,%eax
 8417d64:	5d                   	pop    %ebp
 8417d65:	c3                   	ret

```

```c
// DB_StatDungeonClear::LogWrite @ 0x8417d5c

/* DB_StatDungeonClear::LogWrite(MSG_STAT_DUNGEONCLEAR*) */

undefined4 DB_StatDungeonClear::LogWrite(MSG_STAT_DUNGEONCLEAR *param_1)

{
  return 1;
}

```

---

## dispatch

```asm
// === 08417cde DB_StatDungeonClear::dispatch  [0x08417cde-0x8417d5b] ===
 8417cde:	55                   	push   %ebp
 8417cdf:	89 e5                	mov    %esp,%ebp
 8417ce1:	83 ec 28             	sub    $0x28,%esp
 8417ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8417ce7:	8b 55 14             	mov    0x14(%ebp),%edx
 8417cea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8417cee:	8b 55 10             	mov    0x10(%ebp),%edx
 8417cf1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8417cf5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8417cf8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8417cfc:	89 04 24             	mov    %eax,(%esp)
 8417cff:	e8 78 42 fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8417d04:	83 f0 01             	xor    $0x1,%eax
 8417d07:	84 c0                	test   %al,%al
 8417d09:	74 07                	je     8417d12 <_ZN19DB_StatDungeonClear8dispatchEiiP6Stream+0x34>
 8417d0b:	b8 00 00 00 00       	mov    $0x0,%eax
 8417d10:	eb 47                	jmp    8417d59 <_ZN19DB_StatDungeonClear8dispatchEiiP6Stream+0x7b>
 8417d12:	8b 45 14             	mov    0x14(%ebp),%eax
 8417d15:	89 04 24             	mov    %eax,(%esp)
 8417d18:	e8 63 8f 03 00       	call   8450c80 <_ZN6Stream12GetOutBufferI21MSG_STAT_DUNGEONCLEAREEPT_v>
 8417d1d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8417d20:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8417d24:	75 07                	jne    8417d2d <_ZN19DB_StatDungeonClear8dispatchEiiP6Stream+0x4f>
 8417d26:	b8 00 00 00 00       	mov    $0x0,%eax
 8417d2b:	eb 2c                	jmp    8417d59 <_ZN19DB_StatDungeonClear8dispatchEiiP6Stream+0x7b>
 8417d2d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8417d30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8417d34:	8b 45 08             	mov    0x8(%ebp),%eax
 8417d37:	89 04 24             	mov    %eax,(%esp)
 8417d3a:	e8 1d 00 00 00       	call   8417d5c <_ZN19DB_StatDungeonClear8LogWriteEP21MSG_STAT_DUNGEONCLEAR>
 8417d3f:	88 45 f3             	mov    %al,-0xd(%ebp)
 8417d42:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8417d46:	83 f0 01             	xor    $0x1,%eax
 8417d49:	84 c0                	test   %al,%al
 8417d4b:	74 07                	je     8417d54 <_ZN19DB_StatDungeonClear8dispatchEiiP6Stream+0x76>
 8417d4d:	b8 00 00 00 00       	mov    $0x0,%eax
 8417d52:	eb 05                	jmp    8417d59 <_ZN19DB_StatDungeonClear8dispatchEiiP6Stream+0x7b>
 8417d54:	b8 01 00 00 00       	mov    $0x1,%eax
 8417d59:	c9                   	leave
 8417d5a:	c3                   	ret
 8417d5b:	90                   	nop

```

```c
// DB_StatDungeonClear::dispatch @ 0x8417cde

/* DB_StatDungeonClear::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatDungeonClear::dispatch(DB_StatDungeonClear *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_DUNGEONCLEAR *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_DUNGEONCLEAR>(param_3);
    if (pMVar3 == (MSG_STAT_DUNGEONCLEAR *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_DUNGEONCLEAR *)this);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~DB_StatDungeonClear

```asm
// === 08417c90 DB_StatDungeonClear::~DB_StatDungeonClear  [0x08417c90-0x8417cbf] ===
 8417c90:	55                   	push   %ebp
 8417c91:	89 e5                	mov    %esp,%ebp
 8417c93:	83 ec 18             	sub    $0x18,%esp
 8417c96:	8b 45 08             	mov    0x8(%ebp),%eax
 8417c99:	c7 00 38 fa c5 08    	movl   $0x8c5fa38,(%eax)
 8417c9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8417ca2:	89 04 24             	mov    %eax,(%esp)
 8417ca5:	e8 ce a6 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417caa:	b8 00 00 00 00       	mov    $0x0,%eax
 8417caf:	84 c0                	test   %al,%al
 8417cb1:	74 0b                	je     8417cbe <_ZN19DB_StatDungeonClearD1Ev+0x2e>
 8417cb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8417cb6:	89 04 24             	mov    %eax,(%esp)
 8417cb9:	e8 32 c8 30 00       	call   87244f0 <_ZdlPv>
 8417cbe:	c9                   	leave
 8417cbf:	c3                   	ret

```

```c
// DB_StatDungeonClear::~DB_StatDungeonClear @ 0x8417c90

/* WARNING: Removing unreachable block (ram,0x08417cb3) */
/* DB_StatDungeonClear::~DB_StatDungeonClear() */

void __thiscall DB_StatDungeonClear::~DB_StatDungeonClear(DB_StatDungeonClear *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa38;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_StatDungeonClear_08417cc0

```asm
// === 08417cc0 DB_StatDungeonClear::~DB_StatDungeonClear  [0x08417cc0-0x8417cdd] ===
 8417cc0:	55                   	push   %ebp
 8417cc1:	89 e5                	mov    %esp,%ebp
 8417cc3:	83 ec 18             	sub    $0x18,%esp
 8417cc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8417cc9:	89 04 24             	mov    %eax,(%esp)
 8417ccc:	e8 bf ff ff ff       	call   8417c90 <_ZN19DB_StatDungeonClearD1Ev>
 8417cd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8417cd4:	89 04 24             	mov    %eax,(%esp)
 8417cd7:	e8 14 c8 30 00       	call   87244f0 <_ZdlPv>
 8417cdc:	c9                   	leave
 8417cdd:	c3                   	ret

```

```c
// DB_StatDungeonClear::~DB_StatDungeonClear @ 0x8417cc0

/* DB_StatDungeonClear::~DB_StatDungeonClear() */

void __thiscall DB_StatDungeonClear::~DB_StatDungeonClear(DB_StatDungeonClear *this)

{
  ~DB_StatDungeonClear(this);
  operator_delete(this);
  return;
}

```

