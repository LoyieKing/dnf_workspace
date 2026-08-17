# DB_StatGameRank

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_StatGameRank

```asm
// === 08417d66 DB_StatGameRank::DB_StatGameRank  [0x08417d66-0x8417d81] ===
 8417d66:	55                   	push   %ebp
 8417d67:	89 e5                	mov    %esp,%ebp
 8417d69:	83 ec 18             	sub    $0x18,%esp
 8417d6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8417d6f:	89 04 24             	mov    %eax,(%esp)
 8417d72:	e8 2f 5a 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417d77:	8b 45 08             	mov    0x8(%ebp),%eax
 8417d7a:	c7 00 20 fa c5 08    	movl   $0x8c5fa20,(%eax)
 8417d80:	c9                   	leave
 8417d81:	c3                   	ret

```

```c
// DB_StatGameRank::DB_StatGameRank @ 0x8417d66

/* DB_StatGameRank::DB_StatGameRank() */

void __thiscall DB_StatGameRank::DB_StatGameRank(DB_StatGameRank *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa20;
  return;
}

```

---

## LogWrite

```asm
// === 08417e4e DB_StatGameRank::LogWrite  [0x08417e4e-0x8417e57] ===
 8417e4e:	55                   	push   %ebp
 8417e4f:	89 e5                	mov    %esp,%ebp
 8417e51:	b8 01 00 00 00       	mov    $0x1,%eax
 8417e56:	5d                   	pop    %ebp
 8417e57:	c3                   	ret

```

```c
// DB_StatGameRank::LogWrite @ 0x8417e4e

/* DB_StatGameRank::LogWrite(MSG_STAT_RANKRES*) */

undefined4 DB_StatGameRank::LogWrite(MSG_STAT_RANKRES *param_1)

{
  return 1;
}

```

---

## dispatch

```asm
// === 08417dd0 DB_StatGameRank::dispatch  [0x08417dd0-0x8417e4d] ===
 8417dd0:	55                   	push   %ebp
 8417dd1:	89 e5                	mov    %esp,%ebp
 8417dd3:	83 ec 28             	sub    $0x28,%esp
 8417dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8417dd9:	8b 55 14             	mov    0x14(%ebp),%edx
 8417ddc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8417de0:	8b 55 10             	mov    0x10(%ebp),%edx
 8417de3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8417de7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8417dea:	89 54 24 04          	mov    %edx,0x4(%esp)
 8417dee:	89 04 24             	mov    %eax,(%esp)
 8417df1:	e8 86 41 fe ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8417df6:	83 f0 01             	xor    $0x1,%eax
 8417df9:	84 c0                	test   %al,%al
 8417dfb:	74 07                	je     8417e04 <_ZN15DB_StatGameRank8dispatchEiiP6Stream+0x34>
 8417dfd:	b8 00 00 00 00       	mov    $0x0,%eax
 8417e02:	eb 47                	jmp    8417e4b <_ZN15DB_StatGameRank8dispatchEiiP6Stream+0x7b>
 8417e04:	8b 45 14             	mov    0x14(%ebp),%eax
 8417e07:	89 04 24             	mov    %eax,(%esp)
 8417e0a:	e8 c5 8e 03 00       	call   8450cd4 <_ZN6Stream12GetOutBufferI16MSG_STAT_RANKRESEEPT_v>
 8417e0f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8417e12:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8417e16:	75 07                	jne    8417e1f <_ZN15DB_StatGameRank8dispatchEiiP6Stream+0x4f>
 8417e18:	b8 00 00 00 00       	mov    $0x0,%eax
 8417e1d:	eb 2c                	jmp    8417e4b <_ZN15DB_StatGameRank8dispatchEiiP6Stream+0x7b>
 8417e1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8417e22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8417e26:	8b 45 08             	mov    0x8(%ebp),%eax
 8417e29:	89 04 24             	mov    %eax,(%esp)
 8417e2c:	e8 1d 00 00 00       	call   8417e4e <_ZN15DB_StatGameRank8LogWriteEP16MSG_STAT_RANKRES>
 8417e31:	88 45 f3             	mov    %al,-0xd(%ebp)
 8417e34:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8417e38:	83 f0 01             	xor    $0x1,%eax
 8417e3b:	84 c0                	test   %al,%al
 8417e3d:	74 07                	je     8417e46 <_ZN15DB_StatGameRank8dispatchEiiP6Stream+0x76>
 8417e3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8417e44:	eb 05                	jmp    8417e4b <_ZN15DB_StatGameRank8dispatchEiiP6Stream+0x7b>
 8417e46:	b8 01 00 00 00       	mov    $0x1,%eax
 8417e4b:	c9                   	leave
 8417e4c:	c3                   	ret
 8417e4d:	90                   	nop

```

```c
// DB_StatGameRank::dispatch @ 0x8417dd0

/* DB_StatGameRank::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatGameRank::dispatch(DB_StatGameRank *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_RANKRES *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_RANKRES>(param_3);
    if (pMVar3 == (MSG_STAT_RANKRES *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_RANKRES *)this);
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

## ~DB_StatGameRank

```asm
// === 08417d82 DB_StatGameRank::~DB_StatGameRank  [0x08417d82-0x8417db1] ===
 8417d82:	55                   	push   %ebp
 8417d83:	89 e5                	mov    %esp,%ebp
 8417d85:	83 ec 18             	sub    $0x18,%esp
 8417d88:	8b 45 08             	mov    0x8(%ebp),%eax
 8417d8b:	c7 00 20 fa c5 08    	movl   $0x8c5fa20,(%eax)
 8417d91:	8b 45 08             	mov    0x8(%ebp),%eax
 8417d94:	89 04 24             	mov    %eax,(%esp)
 8417d97:	e8 dc a5 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417d9c:	b8 00 00 00 00       	mov    $0x0,%eax
 8417da1:	84 c0                	test   %al,%al
 8417da3:	74 0b                	je     8417db0 <_ZN15DB_StatGameRankD1Ev+0x2e>
 8417da5:	8b 45 08             	mov    0x8(%ebp),%eax
 8417da8:	89 04 24             	mov    %eax,(%esp)
 8417dab:	e8 40 c7 30 00       	call   87244f0 <_ZdlPv>
 8417db0:	c9                   	leave
 8417db1:	c3                   	ret

```

```c
// DB_StatGameRank::~DB_StatGameRank @ 0x8417d82

/* WARNING: Removing unreachable block (ram,0x08417da5) */
/* DB_StatGameRank::~DB_StatGameRank() */

void __thiscall DB_StatGameRank::~DB_StatGameRank(DB_StatGameRank *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa20;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_StatGameRank_08417db2

```asm
// === 08417db2 DB_StatGameRank::~DB_StatGameRank  [0x08417db2-0x8417dcf] ===
 8417db2:	55                   	push   %ebp
 8417db3:	89 e5                	mov    %esp,%ebp
 8417db5:	83 ec 18             	sub    $0x18,%esp
 8417db8:	8b 45 08             	mov    0x8(%ebp),%eax
 8417dbb:	89 04 24             	mov    %eax,(%esp)
 8417dbe:	e8 bf ff ff ff       	call   8417d82 <_ZN15DB_StatGameRankD1Ev>
 8417dc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8417dc6:	89 04 24             	mov    %eax,(%esp)
 8417dc9:	e8 22 c7 30 00       	call   87244f0 <_ZdlPv>
 8417dce:	c9                   	leave
 8417dcf:	c3                   	ret

```

```c
// DB_StatGameRank::~DB_StatGameRank @ 0x8417db2

/* DB_StatGameRank::~DB_StatGameRank() */

void __thiscall DB_StatGameRank::~DB_StatGameRank(DB_StatGameRank *this)

{
  ~DB_StatGameRank(this);
  operator_delete(this);
  return;
}

```

