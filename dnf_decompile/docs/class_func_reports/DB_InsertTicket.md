# DB_InsertTicket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_InsertTicket

```asm
// === 08403a4e DB_InsertTicket::DB_InsertTicket  [0x08403a4e-0x8403a69] ===
 8403a4e:	55                   	push   %ebp
 8403a4f:	89 e5                	mov    %esp,%ebp
 8403a51:	83 ec 18             	sub    $0x18,%esp
 8403a54:	8b 45 08             	mov    0x8(%ebp),%eax
 8403a57:	89 04 24             	mov    %eax,(%esp)
 8403a5a:	e8 47 9d 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8403a5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8403a62:	c7 00 18 fc c5 08    	movl   $0x8c5fc18,(%eax)
 8403a68:	c9                   	leave
 8403a69:	c3                   	ret

```

```c
// DB_InsertTicket::DB_InsertTicket @ 0x8403a4e

/* DB_InsertTicket::DB_InsertTicket() */

void __thiscall DB_InsertTicket::DB_InsertTicket(DB_InsertTicket *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc18;
  return;
}

```

---

## InsertTicket

```asm
// === 08403b08 DB_InsertTicket::InsertTicket  [0x08403b08-0x8403b83] ===
 8403b08:	55                   	push   %ebp
 8403b09:	89 e5                	mov    %esp,%ebp
 8403b0b:	83 ec 28             	sub    $0x28,%esp
 8403b0e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8403b13:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8403b1a:	00 
 8403b1b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8403b22:	00 
 8403b23:	89 04 24             	mov    %eax,(%esp)
 8403b26:	e8 13 17 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8403b2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8403b2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403b31:	8b 50 04             	mov    0x4(%eax),%edx
 8403b34:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403b37:	8b 00                	mov    (%eax),%eax
 8403b39:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8403b3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8403b41:	c7 44 24 04 08 37 c4 	movl   $0x8c43708,0x4(%esp)
 8403b48:	08 
 8403b49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403b4c:	89 04 24             	mov    %eax,(%esp)
 8403b4f:	e8 6c 06 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8403b54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8403b5b:	00 
 8403b5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403b5f:	89 04 24             	mov    %eax,(%esp)
 8403b62:	e8 bf 07 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8403b67:	88 45 f3             	mov    %al,-0xd(%ebp)
 8403b6a:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8403b6e:	83 f0 01             	xor    $0x1,%eax
 8403b71:	84 c0                	test   %al,%al
 8403b73:	74 07                	je     8403b7c <_ZN15DB_InsertTicket12InsertTicketEP17SIG_INSERT_TICKET+0x74>
 8403b75:	b8 00 00 00 00       	mov    $0x0,%eax
 8403b7a:	eb 05                	jmp    8403b81 <_ZN15DB_InsertTicket12InsertTicketEP17SIG_INSERT_TICKET+0x79>
 8403b7c:	b8 01 00 00 00       	mov    $0x1,%eax
 8403b81:	c9                   	leave
 8403b82:	c3                   	ret
 8403b83:	90                   	nop

```

```c
// DB_InsertTicket::InsertTicket @ 0x8403b08

/* DB_InsertTicket::InsertTicket(SIG_INSERT_TICKET*) */

bool __thiscall DB_InsertTicket::InsertTicket(DB_InsertTicket *this,SIG_INSERT_TICKET *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this_00,"inSert village_ticket values(%u,%d)",*(undefined4 *)param_1,
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## dispatch

```asm
// === 08403ab8 DB_InsertTicket::dispatch  [0x08403ab8-0x8403b07] ===
 8403ab8:	55                   	push   %ebp
 8403ab9:	89 e5                	mov    %esp,%ebp
 8403abb:	83 ec 28             	sub    $0x28,%esp
 8403abe:	8b 45 14             	mov    0x14(%ebp),%eax
 8403ac1:	89 04 24             	mov    %eax,(%esp)
 8403ac4:	e8 1f cb 04 00       	call   84505e8 <_ZN6Stream12GetOutBufferI17SIG_INSERT_TICKETEEPT_v>
 8403ac9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8403acc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8403ad0:	75 07                	jne    8403ad9 <_ZN15DB_InsertTicket8dispatchEiiP6Stream+0x21>
 8403ad2:	b8 00 00 00 00       	mov    $0x0,%eax
 8403ad7:	eb 2c                	jmp    8403b05 <_ZN15DB_InsertTicket8dispatchEiiP6Stream+0x4d>
 8403ad9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403adc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403ae0:	8b 45 08             	mov    0x8(%ebp),%eax
 8403ae3:	89 04 24             	mov    %eax,(%esp)
 8403ae6:	e8 1d 00 00 00       	call   8403b08 <_ZN15DB_InsertTicket12InsertTicketEP17SIG_INSERT_TICKET>
 8403aeb:	88 45 f3             	mov    %al,-0xd(%ebp)
 8403aee:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8403af2:	83 f0 01             	xor    $0x1,%eax
 8403af5:	84 c0                	test   %al,%al
 8403af7:	74 07                	je     8403b00 <_ZN15DB_InsertTicket8dispatchEiiP6Stream+0x48>
 8403af9:	b8 00 00 00 00       	mov    $0x0,%eax
 8403afe:	eb 05                	jmp    8403b05 <_ZN15DB_InsertTicket8dispatchEiiP6Stream+0x4d>
 8403b00:	b8 01 00 00 00       	mov    $0x1,%eax
 8403b05:	c9                   	leave
 8403b06:	c3                   	ret
 8403b07:	90                   	nop

```

```c
// DB_InsertTicket::dispatch @ 0x8403ab8

/* DB_InsertTicket::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_InsertTicket::dispatch(DB_InsertTicket *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_INSERT_TICKET *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_INSERT_TICKET>(param_3);
  if (pSVar2 == (SIG_INSERT_TICKET *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = InsertTicket(this,pSVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## ~DB_InsertTicket

```asm
// === 08403a6a DB_InsertTicket::~DB_InsertTicket  [0x08403a6a-0x8403a99] ===
 8403a6a:	55                   	push   %ebp
 8403a6b:	89 e5                	mov    %esp,%ebp
 8403a6d:	83 ec 18             	sub    $0x18,%esp
 8403a70:	8b 45 08             	mov    0x8(%ebp),%eax
 8403a73:	c7 00 18 fc c5 08    	movl   $0x8c5fc18,(%eax)
 8403a79:	8b 45 08             	mov    0x8(%ebp),%eax
 8403a7c:	89 04 24             	mov    %eax,(%esp)
 8403a7f:	e8 f4 e8 cd ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8403a84:	b8 00 00 00 00       	mov    $0x0,%eax
 8403a89:	84 c0                	test   %al,%al
 8403a8b:	74 0b                	je     8403a98 <_ZN15DB_InsertTicketD1Ev+0x2e>
 8403a8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8403a90:	89 04 24             	mov    %eax,(%esp)
 8403a93:	e8 58 0a 32 00       	call   87244f0 <_ZdlPv>
 8403a98:	c9                   	leave
 8403a99:	c3                   	ret

```

```c
// DB_InsertTicket::~DB_InsertTicket @ 0x8403a6a

/* WARNING: Removing unreachable block (ram,0x08403a8d) */
/* DB_InsertTicket::~DB_InsertTicket() */

void __thiscall DB_InsertTicket::~DB_InsertTicket(DB_InsertTicket *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc18;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_InsertTicket_08403a9a

```asm
// === 08403a9a DB_InsertTicket::~DB_InsertTicket  [0x08403a9a-0x8403ab7] ===
 8403a9a:	55                   	push   %ebp
 8403a9b:	89 e5                	mov    %esp,%ebp
 8403a9d:	83 ec 18             	sub    $0x18,%esp
 8403aa0:	8b 45 08             	mov    0x8(%ebp),%eax
 8403aa3:	89 04 24             	mov    %eax,(%esp)
 8403aa6:	e8 bf ff ff ff       	call   8403a6a <_ZN15DB_InsertTicketD1Ev>
 8403aab:	8b 45 08             	mov    0x8(%ebp),%eax
 8403aae:	89 04 24             	mov    %eax,(%esp)
 8403ab1:	e8 3a 0a 32 00       	call   87244f0 <_ZdlPv>
 8403ab6:	c9                   	leave
 8403ab7:	c3                   	ret

```

```c
// DB_InsertTicket::~DB_InsertTicket @ 0x8403a9a

/* DB_InsertTicket::~DB_InsertTicket() */

void __thiscall DB_InsertTicket::~DB_InsertTicket(DB_InsertTicket *this)

{
  ~DB_InsertTicket(this);
  operator_delete(this);
  return;
}

```

