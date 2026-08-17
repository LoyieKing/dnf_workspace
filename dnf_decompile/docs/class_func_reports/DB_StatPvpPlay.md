# DB_StatPvpPlay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_StatPvpPlay

```asm
// === 08417e58 DB_StatPvpPlay::DB_StatPvpPlay  [0x08417e58-0x8417e73] ===
 8417e58:	55                   	push   %ebp
 8417e59:	89 e5                	mov    %esp,%ebp
 8417e5b:	83 ec 18             	sub    $0x18,%esp
 8417e5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8417e61:	89 04 24             	mov    %eax,(%esp)
 8417e64:	e8 3d 59 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417e69:	8b 45 08             	mov    0x8(%ebp),%eax
 8417e6c:	c7 00 08 fa c5 08    	movl   $0x8c5fa08,(%eax)
 8417e72:	c9                   	leave
 8417e73:	c3                   	ret

```

```c
// DB_StatPvpPlay::DB_StatPvpPlay @ 0x8417e58

/* DB_StatPvpPlay::DB_StatPvpPlay() */

void __thiscall DB_StatPvpPlay::DB_StatPvpPlay(DB_StatPvpPlay *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa08;
  return;
}

```

---

## LogWrite

```asm
// === 08417f40 DB_StatPvpPlay::LogWrite  [0x08417f40-0x8417f49] ===
 8417f40:	55                   	push   %ebp
 8417f41:	89 e5                	mov    %esp,%ebp
 8417f43:	b8 01 00 00 00       	mov    $0x1,%eax
 8417f48:	5d                   	pop    %ebp
 8417f49:	c3                   	ret

```

```c
// DB_StatPvpPlay::LogWrite @ 0x8417f40

/* DB_StatPvpPlay::LogWrite(MSG_STAT_PVPPLAY*) */

undefined4 DB_StatPvpPlay::LogWrite(MSG_STAT_PVPPLAY *param_1)

{
  return 1;
}

```

---

## dispatch

```asm
// === 08417ec2 DB_StatPvpPlay::dispatch  [0x08417ec2-0x8417f3f] ===
 8417ec2:	55                   	push   %ebp
 8417ec3:	89 e5                	mov    %esp,%ebp
 8417ec5:	83 ec 28             	sub    $0x28,%esp
 8417ec8:	8b 45 08             	mov    0x8(%ebp),%eax
 8417ecb:	8b 55 14             	mov    0x14(%ebp),%edx
 8417ece:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8417ed2:	8b 55 10             	mov    0x10(%ebp),%edx
 8417ed5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8417ed9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8417edc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8417ee0:	89 04 24             	mov    %eax,(%esp)
 8417ee3:	e8 94 40 fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8417ee8:	83 f0 01             	xor    $0x1,%eax
 8417eeb:	84 c0                	test   %al,%al
 8417eed:	74 07                	je     8417ef6 <_ZN14DB_StatPvpPlay8dispatchEiiP6Stream+0x34>
 8417eef:	b8 00 00 00 00       	mov    $0x0,%eax
 8417ef4:	eb 47                	jmp    8417f3d <_ZN14DB_StatPvpPlay8dispatchEiiP6Stream+0x7b>
 8417ef6:	8b 45 14             	mov    0x14(%ebp),%eax
 8417ef9:	89 04 24             	mov    %eax,(%esp)
 8417efc:	e8 27 8e 03 00       	call   8450d28 <_ZN6Stream12GetOutBufferI16MSG_STAT_PVPPLAYEEPT_v>
 8417f01:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8417f04:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8417f08:	75 07                	jne    8417f11 <_ZN14DB_StatPvpPlay8dispatchEiiP6Stream+0x4f>
 8417f0a:	b8 00 00 00 00       	mov    $0x0,%eax
 8417f0f:	eb 2c                	jmp    8417f3d <_ZN14DB_StatPvpPlay8dispatchEiiP6Stream+0x7b>
 8417f11:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8417f14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8417f18:	8b 45 08             	mov    0x8(%ebp),%eax
 8417f1b:	89 04 24             	mov    %eax,(%esp)
 8417f1e:	e8 1d 00 00 00       	call   8417f40 <_ZN14DB_StatPvpPlay8LogWriteEP16MSG_STAT_PVPPLAY>
 8417f23:	88 45 f3             	mov    %al,-0xd(%ebp)
 8417f26:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8417f2a:	83 f0 01             	xor    $0x1,%eax
 8417f2d:	84 c0                	test   %al,%al
 8417f2f:	74 07                	je     8417f38 <_ZN14DB_StatPvpPlay8dispatchEiiP6Stream+0x76>
 8417f31:	b8 00 00 00 00       	mov    $0x0,%eax
 8417f36:	eb 05                	jmp    8417f3d <_ZN14DB_StatPvpPlay8dispatchEiiP6Stream+0x7b>
 8417f38:	b8 01 00 00 00       	mov    $0x1,%eax
 8417f3d:	c9                   	leave
 8417f3e:	c3                   	ret
 8417f3f:	90                   	nop

```

```c
// DB_StatPvpPlay::dispatch @ 0x8417ec2

/* DB_StatPvpPlay::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatPvpPlay::dispatch(DB_StatPvpPlay *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_PVPPLAY *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_PVPPLAY>(param_3);
    if (pMVar3 == (MSG_STAT_PVPPLAY *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_PVPPLAY *)this);
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

## ~DB_StatPvpPlay

```asm
// === 08417e74 DB_StatPvpPlay::~DB_StatPvpPlay  [0x08417e74-0x8417ea3] ===
 8417e74:	55                   	push   %ebp
 8417e75:	89 e5                	mov    %esp,%ebp
 8417e77:	83 ec 18             	sub    $0x18,%esp
 8417e7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8417e7d:	c7 00 08 fa c5 08    	movl   $0x8c5fa08,(%eax)
 8417e83:	8b 45 08             	mov    0x8(%ebp),%eax
 8417e86:	89 04 24             	mov    %eax,(%esp)
 8417e89:	e8 ea a4 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417e8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8417e93:	84 c0                	test   %al,%al
 8417e95:	74 0b                	je     8417ea2 <_ZN14DB_StatPvpPlayD1Ev+0x2e>
 8417e97:	8b 45 08             	mov    0x8(%ebp),%eax
 8417e9a:	89 04 24             	mov    %eax,(%esp)
 8417e9d:	e8 4e c6 30 00       	call   87244f0 <_ZdlPv>
 8417ea2:	c9                   	leave
 8417ea3:	c3                   	ret

```

```c
// DB_StatPvpPlay::~DB_StatPvpPlay @ 0x8417e74

/* WARNING: Removing unreachable block (ram,0x08417e97) */
/* DB_StatPvpPlay::~DB_StatPvpPlay() */

void __thiscall DB_StatPvpPlay::~DB_StatPvpPlay(DB_StatPvpPlay *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa08;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_StatPvpPlay_08417ea4

```asm
// === 08417ea4 DB_StatPvpPlay::~DB_StatPvpPlay  [0x08417ea4-0x8417ec1] ===
 8417ea4:	55                   	push   %ebp
 8417ea5:	89 e5                	mov    %esp,%ebp
 8417ea7:	83 ec 18             	sub    $0x18,%esp
 8417eaa:	8b 45 08             	mov    0x8(%ebp),%eax
 8417ead:	89 04 24             	mov    %eax,(%esp)
 8417eb0:	e8 bf ff ff ff       	call   8417e74 <_ZN14DB_StatPvpPlayD1Ev>
 8417eb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8417eb8:	89 04 24             	mov    %eax,(%esp)
 8417ebb:	e8 30 c6 30 00       	call   87244f0 <_ZdlPv>
 8417ec0:	c9                   	leave
 8417ec1:	c3                   	ret

```

```c
// DB_StatPvpPlay::~DB_StatPvpPlay @ 0x8417ea4

/* DB_StatPvpPlay::~DB_StatPvpPlay() */

void __thiscall DB_StatPvpPlay::~DB_StatPvpPlay(DB_StatPvpPlay *this)

{
  ~DB_StatPvpPlay(this);
  operator_delete(this);
  return;
}

```

