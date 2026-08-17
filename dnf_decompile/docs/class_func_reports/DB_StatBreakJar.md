# DB_StatBreakJar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_StatBreakJar

```asm
// === 08417a12 DB_StatBreakJar::DB_StatBreakJar  [0x08417a12-0x8417a2d] ===
 8417a12:	55                   	push   %ebp
 8417a13:	89 e5                	mov    %esp,%ebp
 8417a15:	83 ec 18             	sub    $0x18,%esp
 8417a18:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a1b:	89 04 24             	mov    %eax,(%esp)
 8417a1e:	e8 83 5d 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417a23:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a26:	c7 00 80 fa c5 08    	movl   $0x8c5fa80,(%eax)
 8417a2c:	c9                   	leave
 8417a2d:	c3                   	ret

```

```c
// DB_StatBreakJar::DB_StatBreakJar @ 0x8417a12

/* DB_StatBreakJar::DB_StatBreakJar() */

void __thiscall DB_StatBreakJar::DB_StatBreakJar(DB_StatBreakJar *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa80;
  return;
}

```

---

## LogWrite

```asm
// === 08417afa DB_StatBreakJar::LogWrite  [0x08417afa-0x8417b03] ===
 8417afa:	55                   	push   %ebp
 8417afb:	89 e5                	mov    %esp,%ebp
 8417afd:	b8 01 00 00 00       	mov    $0x1,%eax
 8417b02:	5d                   	pop    %ebp
 8417b03:	c3                   	ret

```

```c
// DB_StatBreakJar::LogWrite @ 0x8417afa

/* DB_StatBreakJar::LogWrite(MSG_STAT_BREAKJAR*) */

undefined4 DB_StatBreakJar::LogWrite(MSG_STAT_BREAKJAR *param_1)

{
  return 1;
}

```

---

## dispatch

```asm
// === 08417a7c DB_StatBreakJar::dispatch  [0x08417a7c-0x8417af9] ===
 8417a7c:	55                   	push   %ebp
 8417a7d:	89 e5                	mov    %esp,%ebp
 8417a7f:	83 ec 28             	sub    $0x28,%esp
 8417a82:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a85:	8b 55 14             	mov    0x14(%ebp),%edx
 8417a88:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8417a8c:	8b 55 10             	mov    0x10(%ebp),%edx
 8417a8f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8417a93:	8b 55 0c             	mov    0xc(%ebp),%edx
 8417a96:	89 54 24 04          	mov    %edx,0x4(%esp)
 8417a9a:	89 04 24             	mov    %eax,(%esp)
 8417a9d:	e8 da 44 fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8417aa2:	83 f0 01             	xor    $0x1,%eax
 8417aa5:	84 c0                	test   %al,%al
 8417aa7:	74 07                	je     8417ab0 <_ZN15DB_StatBreakJar8dispatchEiiP6Stream+0x34>
 8417aa9:	b8 00 00 00 00       	mov    $0x0,%eax
 8417aae:	eb 47                	jmp    8417af7 <_ZN15DB_StatBreakJar8dispatchEiiP6Stream+0x7b>
 8417ab0:	8b 45 14             	mov    0x14(%ebp),%eax
 8417ab3:	89 04 24             	mov    %eax,(%esp)
 8417ab6:	e8 1d 91 03 00       	call   8450bd8 <_ZN6Stream12GetOutBufferI17MSG_STAT_BREAKJAREEPT_v>
 8417abb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8417abe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8417ac2:	75 07                	jne    8417acb <_ZN15DB_StatBreakJar8dispatchEiiP6Stream+0x4f>
 8417ac4:	b8 00 00 00 00       	mov    $0x0,%eax
 8417ac9:	eb 2c                	jmp    8417af7 <_ZN15DB_StatBreakJar8dispatchEiiP6Stream+0x7b>
 8417acb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8417ace:	89 44 24 04          	mov    %eax,0x4(%esp)
 8417ad2:	8b 45 08             	mov    0x8(%ebp),%eax
 8417ad5:	89 04 24             	mov    %eax,(%esp)
 8417ad8:	e8 1d 00 00 00       	call   8417afa <_ZN15DB_StatBreakJar8LogWriteEP17MSG_STAT_BREAKJAR>
 8417add:	88 45 f3             	mov    %al,-0xd(%ebp)
 8417ae0:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8417ae4:	83 f0 01             	xor    $0x1,%eax
 8417ae7:	84 c0                	test   %al,%al
 8417ae9:	74 07                	je     8417af2 <_ZN15DB_StatBreakJar8dispatchEiiP6Stream+0x76>
 8417aeb:	b8 00 00 00 00       	mov    $0x0,%eax
 8417af0:	eb 05                	jmp    8417af7 <_ZN15DB_StatBreakJar8dispatchEiiP6Stream+0x7b>
 8417af2:	b8 01 00 00 00       	mov    $0x1,%eax
 8417af7:	c9                   	leave
 8417af8:	c3                   	ret
 8417af9:	90                   	nop

```

```c
// DB_StatBreakJar::dispatch @ 0x8417a7c

/* DB_StatBreakJar::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatBreakJar::dispatch(DB_StatBreakJar *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_BREAKJAR *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_BREAKJAR>(param_3);
    if (pMVar3 == (MSG_STAT_BREAKJAR *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_BREAKJAR *)this);
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

## ~DB_StatBreakJar

```asm
// === 08417a2e DB_StatBreakJar::~DB_StatBreakJar  [0x08417a2e-0x8417a5d] ===
 8417a2e:	55                   	push   %ebp
 8417a2f:	89 e5                	mov    %esp,%ebp
 8417a31:	83 ec 18             	sub    $0x18,%esp
 8417a34:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a37:	c7 00 80 fa c5 08    	movl   $0x8c5fa80,(%eax)
 8417a3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a40:	89 04 24             	mov    %eax,(%esp)
 8417a43:	e8 30 a9 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417a48:	b8 00 00 00 00       	mov    $0x0,%eax
 8417a4d:	84 c0                	test   %al,%al
 8417a4f:	74 0b                	je     8417a5c <_ZN15DB_StatBreakJarD1Ev+0x2e>
 8417a51:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a54:	89 04 24             	mov    %eax,(%esp)
 8417a57:	e8 94 ca 30 00       	call   87244f0 <_ZdlPv>
 8417a5c:	c9                   	leave
 8417a5d:	c3                   	ret

```

```c
// DB_StatBreakJar::~DB_StatBreakJar @ 0x8417a2e

/* WARNING: Removing unreachable block (ram,0x08417a51) */
/* DB_StatBreakJar::~DB_StatBreakJar() */

void __thiscall DB_StatBreakJar::~DB_StatBreakJar(DB_StatBreakJar *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa80;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_StatBreakJar_08417a5e

```asm
// === 08417a5e DB_StatBreakJar::~DB_StatBreakJar  [0x08417a5e-0x8417a7b] ===
 8417a5e:	55                   	push   %ebp
 8417a5f:	89 e5                	mov    %esp,%ebp
 8417a61:	83 ec 18             	sub    $0x18,%esp
 8417a64:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a67:	89 04 24             	mov    %eax,(%esp)
 8417a6a:	e8 bf ff ff ff       	call   8417a2e <_ZN15DB_StatBreakJarD1Ev>
 8417a6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8417a72:	89 04 24             	mov    %eax,(%esp)
 8417a75:	e8 76 ca 30 00       	call   87244f0 <_ZdlPv>
 8417a7a:	c9                   	leave
 8417a7b:	c3                   	ret

```

```c
// DB_StatBreakJar::~DB_StatBreakJar @ 0x8417a5e

/* DB_StatBreakJar::~DB_StatBreakJar() */

void __thiscall DB_StatBreakJar::~DB_StatBreakJar(DB_StatBreakJar *this)

{
  ~DB_StatBreakJar(this);
  operator_delete(this);
  return;
}

```

