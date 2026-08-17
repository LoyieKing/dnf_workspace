# DB_StatComposition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_StatComposition

```asm
// === 08417b82 DB_StatComposition::DB_StatComposition  [0x08417b82-0x8417b9d] ===
 8417b82:	55                   	push   %ebp
 8417b83:	89 e5                	mov    %esp,%ebp
 8417b85:	83 ec 18             	sub    $0x18,%esp
 8417b88:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b8b:	89 04 24             	mov    %eax,(%esp)
 8417b8e:	e8 13 5c 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417b93:	8b 45 08             	mov    0x8(%ebp),%eax
 8417b96:	c7 00 50 fa c5 08    	movl   $0x8c5fa50,(%eax)
 8417b9c:	c9                   	leave
 8417b9d:	c3                   	ret

```

```c
// DB_StatComposition::DB_StatComposition @ 0x8417b82

/* DB_StatComposition::DB_StatComposition() */

void __thiscall DB_StatComposition::DB_StatComposition(DB_StatComposition *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa50;
  return;
}

```

---

## LogWrite

```asm
// === 08417c6a DB_StatComposition::LogWrite  [0x08417c6a-0x8417c73] ===
 8417c6a:	55                   	push   %ebp
 8417c6b:	89 e5                	mov    %esp,%ebp
 8417c6d:	b8 01 00 00 00       	mov    $0x1,%eax
 8417c72:	5d                   	pop    %ebp
 8417c73:	c3                   	ret

```

```c
// DB_StatComposition::LogWrite @ 0x8417c6a

/* DB_StatComposition::LogWrite(MSG_STAT_COMPOSITON*) */

undefined4 DB_StatComposition::LogWrite(MSG_STAT_COMPOSITON *param_1)

{
  return 1;
}

```

---

## dispatch

```asm
// === 08417bec DB_StatComposition::dispatch  [0x08417bec-0x8417c69] ===
 8417bec:	55                   	push   %ebp
 8417bed:	89 e5                	mov    %esp,%ebp
 8417bef:	83 ec 28             	sub    $0x28,%esp
 8417bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8417bf5:	8b 55 14             	mov    0x14(%ebp),%edx
 8417bf8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8417bfc:	8b 55 10             	mov    0x10(%ebp),%edx
 8417bff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8417c03:	8b 55 0c             	mov    0xc(%ebp),%edx
 8417c06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8417c0a:	89 04 24             	mov    %eax,(%esp)
 8417c0d:	e8 6a 43 fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8417c12:	83 f0 01             	xor    $0x1,%eax
 8417c15:	84 c0                	test   %al,%al
 8417c17:	74 07                	je     8417c20 <_ZN18DB_StatComposition8dispatchEiiP6Stream+0x34>
 8417c19:	b8 00 00 00 00       	mov    $0x0,%eax
 8417c1e:	eb 47                	jmp    8417c67 <_ZN18DB_StatComposition8dispatchEiiP6Stream+0x7b>
 8417c20:	8b 45 14             	mov    0x14(%ebp),%eax
 8417c23:	89 04 24             	mov    %eax,(%esp)
 8417c26:	e8 01 90 03 00       	call   8450c2c <_ZN6Stream12GetOutBufferI19MSG_STAT_COMPOSITONEEPT_v>
 8417c2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8417c2e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8417c32:	75 07                	jne    8417c3b <_ZN18DB_StatComposition8dispatchEiiP6Stream+0x4f>
 8417c34:	b8 00 00 00 00       	mov    $0x0,%eax
 8417c39:	eb 2c                	jmp    8417c67 <_ZN18DB_StatComposition8dispatchEiiP6Stream+0x7b>
 8417c3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8417c3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8417c42:	8b 45 08             	mov    0x8(%ebp),%eax
 8417c45:	89 04 24             	mov    %eax,(%esp)
 8417c48:	e8 1d 00 00 00       	call   8417c6a <_ZN18DB_StatComposition8LogWriteEP19MSG_STAT_COMPOSITON>
 8417c4d:	88 45 f3             	mov    %al,-0xd(%ebp)
 8417c50:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8417c54:	83 f0 01             	xor    $0x1,%eax
 8417c57:	84 c0                	test   %al,%al
 8417c59:	74 07                	je     8417c62 <_ZN18DB_StatComposition8dispatchEiiP6Stream+0x76>
 8417c5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8417c60:	eb 05                	jmp    8417c67 <_ZN18DB_StatComposition8dispatchEiiP6Stream+0x7b>
 8417c62:	b8 01 00 00 00       	mov    $0x1,%eax
 8417c67:	c9                   	leave
 8417c68:	c3                   	ret
 8417c69:	90                   	nop

```

```c
// DB_StatComposition::dispatch @ 0x8417bec

/* DB_StatComposition::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatComposition::dispatch(DB_StatComposition *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_COMPOSITON *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_COMPOSITON>(param_3);
    if (pMVar3 == (MSG_STAT_COMPOSITON *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_COMPOSITON *)this);
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

## ~DB_StatComposition

```asm
// === 08417b9e DB_StatComposition::~DB_StatComposition  [0x08417b9e-0x8417bcd] ===
 8417b9e:	55                   	push   %ebp
 8417b9f:	89 e5                	mov    %esp,%ebp
 8417ba1:	83 ec 18             	sub    $0x18,%esp
 8417ba4:	8b 45 08             	mov    0x8(%ebp),%eax
 8417ba7:	c7 00 50 fa c5 08    	movl   $0x8c5fa50,(%eax)
 8417bad:	8b 45 08             	mov    0x8(%ebp),%eax
 8417bb0:	89 04 24             	mov    %eax,(%esp)
 8417bb3:	e8 c0 a7 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417bb8:	b8 00 00 00 00       	mov    $0x0,%eax
 8417bbd:	84 c0                	test   %al,%al
 8417bbf:	74 0b                	je     8417bcc <_ZN18DB_StatCompositionD1Ev+0x2e>
 8417bc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8417bc4:	89 04 24             	mov    %eax,(%esp)
 8417bc7:	e8 24 c9 30 00       	call   87244f0 <_ZdlPv>
 8417bcc:	c9                   	leave
 8417bcd:	c3                   	ret

```

```c
// DB_StatComposition::~DB_StatComposition @ 0x8417b9e

/* WARNING: Removing unreachable block (ram,0x08417bc1) */
/* DB_StatComposition::~DB_StatComposition() */

void __thiscall DB_StatComposition::~DB_StatComposition(DB_StatComposition *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa50;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_StatComposition_08417bce

```asm
// === 08417bce DB_StatComposition::~DB_StatComposition  [0x08417bce-0x8417beb] ===
 8417bce:	55                   	push   %ebp
 8417bcf:	89 e5                	mov    %esp,%ebp
 8417bd1:	83 ec 18             	sub    $0x18,%esp
 8417bd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8417bd7:	89 04 24             	mov    %eax,(%esp)
 8417bda:	e8 bf ff ff ff       	call   8417b9e <_ZN18DB_StatCompositionD1Ev>
 8417bdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8417be2:	89 04 24             	mov    %eax,(%esp)
 8417be5:	e8 06 c9 30 00       	call   87244f0 <_ZdlPv>
 8417bea:	c9                   	leave
 8417beb:	c3                   	ret

```

```c
// DB_StatComposition::~DB_StatComposition @ 0x8417bce

/* DB_StatComposition::~DB_StatComposition() */

void __thiscall DB_StatComposition::~DB_StatComposition(DB_StatComposition *this)

{
  ~DB_StatComposition(this);
  operator_delete(this);
  return;
}

```

