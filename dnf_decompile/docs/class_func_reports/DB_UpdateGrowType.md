# DB_UpdateGrowType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_UpdateGrowType

```asm
// === 08418130 DB_UpdateGrowType::DB_UpdateGrowType  [0x08418130-0x841814b] ===
 8418130:	55                   	push   %ebp
 8418131:	89 e5                	mov    %esp,%ebp
 8418133:	83 ec 18             	sub    $0x18,%esp
 8418136:	8b 45 08             	mov    0x8(%ebp),%eax
 8418139:	89 04 24             	mov    %eax,(%esp)
 841813c:	e8 65 56 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8418141:	8b 45 08             	mov    0x8(%ebp),%eax
 8418144:	c7 00 d8 f9 c5 08    	movl   $0x8c5f9d8,(%eax)
 841814a:	c9                   	leave
 841814b:	c3                   	ret

```

```c
// DB_UpdateGrowType::DB_UpdateGrowType @ 0x8418130

/* DB_UpdateGrowType::DB_UpdateGrowType() */

void __thiscall DB_UpdateGrowType::DB_UpdateGrowType(DB_UpdateGrowType *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f9d8;
  return;
}

```

---

## UpdateGrowType

```asm
// === 084181ea DB_UpdateGrowType::UpdateGrowType  [0x084181ea-0x8418269] ===
 84181ea:	55                   	push   %ebp
 84181eb:	89 e5                	mov    %esp,%ebp
 84181ed:	83 ec 28             	sub    $0x28,%esp
 84181f0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84181f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84181fc:	00 
 84181fd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8418204:	00 
 8418205:	89 04 24             	mov    %eax,(%esp)
 8418208:	e8 31 d0 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841820d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8418210:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418213:	8b 10                	mov    (%eax),%edx
 8418215:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418218:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 841821c:	0f be c0             	movsbl %al,%eax
 841821f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8418223:	89 44 24 08          	mov    %eax,0x8(%esp)
 8418227:	c7 44 24 04 08 9c c4 	movl   $0x8c49c08,0x4(%esp)
 841822e:	08 
 841822f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418232:	89 04 24             	mov    %eax,(%esp)
 8418235:	e8 86 bf fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841823a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8418241:	00 
 8418242:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418245:	89 04 24             	mov    %eax,(%esp)
 8418248:	e8 d9 c0 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841824d:	88 45 f3             	mov    %al,-0xd(%ebp)
 8418250:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8418254:	83 f0 01             	xor    $0x1,%eax
 8418257:	84 c0                	test   %al,%al
 8418259:	74 07                	je     8418262 <_ZN17DB_UpdateGrowType14UpdateGrowTypeEP19SIG_UPDATE_GROWTYPE+0x78>
 841825b:	b8 00 00 00 00       	mov    $0x0,%eax
 8418260:	eb 05                	jmp    8418267 <_ZN17DB_UpdateGrowType14UpdateGrowTypeEP19SIG_UPDATE_GROWTYPE+0x7d>
 8418262:	b8 01 00 00 00       	mov    $0x1,%eax
 8418267:	c9                   	leave
 8418268:	c3                   	ret
 8418269:	90                   	nop

```

```c
// DB_UpdateGrowType::UpdateGrowType @ 0x84181ea

/* DB_UpdateGrowType::UpdateGrowType(SIG_UPDATE_GROWTYPE*) */

bool __thiscall
DB_UpdateGrowType::UpdateGrowType(DB_UpdateGrowType *this,SIG_UPDATE_GROWTYPE *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"upDate charac_info set grow_type=%d where charac_no=%u",
                   (int)(char)param_1[4],*(undefined4 *)param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## dispatch

```asm
// === 0841819a DB_UpdateGrowType::dispatch  [0x0841819a-0x84181e9] ===
 841819a:	55                   	push   %ebp
 841819b:	89 e5                	mov    %esp,%ebp
 841819d:	83 ec 28             	sub    $0x28,%esp
 84181a0:	8b 45 14             	mov    0x14(%ebp),%eax
 84181a3:	89 04 24             	mov    %eax,(%esp)
 84181a6:	e8 25 8c 03 00       	call   8450dd0 <_ZN6Stream12GetOutBufferI19SIG_UPDATE_GROWTYPEEEPT_v>
 84181ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84181ae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84181b2:	75 07                	jne    84181bb <_ZN17DB_UpdateGrowType8dispatchEiiP6Stream+0x21>
 84181b4:	b8 00 00 00 00       	mov    $0x0,%eax
 84181b9:	eb 2c                	jmp    84181e7 <_ZN17DB_UpdateGrowType8dispatchEiiP6Stream+0x4d>
 84181bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84181be:	89 44 24 04          	mov    %eax,0x4(%esp)
 84181c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84181c5:	89 04 24             	mov    %eax,(%esp)
 84181c8:	e8 1d 00 00 00       	call   84181ea <_ZN17DB_UpdateGrowType14UpdateGrowTypeEP19SIG_UPDATE_GROWTYPE>
 84181cd:	88 45 f3             	mov    %al,-0xd(%ebp)
 84181d0:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84181d4:	83 f0 01             	xor    $0x1,%eax
 84181d7:	84 c0                	test   %al,%al
 84181d9:	74 07                	je     84181e2 <_ZN17DB_UpdateGrowType8dispatchEiiP6Stream+0x48>
 84181db:	b8 00 00 00 00       	mov    $0x0,%eax
 84181e0:	eb 05                	jmp    84181e7 <_ZN17DB_UpdateGrowType8dispatchEiiP6Stream+0x4d>
 84181e2:	b8 01 00 00 00       	mov    $0x1,%eax
 84181e7:	c9                   	leave
 84181e8:	c3                   	ret
 84181e9:	90                   	nop

```

```c
// DB_UpdateGrowType::dispatch @ 0x841819a

/* DB_UpdateGrowType::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateGrowType::dispatch(DB_UpdateGrowType *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_UPDATE_GROWTYPE *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_GROWTYPE>(param_3);
  if (pSVar2 == (SIG_UPDATE_GROWTYPE *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = UpdateGrowType(this,pSVar2);
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

## ~DB_UpdateGrowType

```asm
// === 0841814c DB_UpdateGrowType::~DB_UpdateGrowType  [0x0841814c-0x841817b] ===
 841814c:	55                   	push   %ebp
 841814d:	89 e5                	mov    %esp,%ebp
 841814f:	83 ec 18             	sub    $0x18,%esp
 8418152:	8b 45 08             	mov    0x8(%ebp),%eax
 8418155:	c7 00 d8 f9 c5 08    	movl   $0x8c5f9d8,(%eax)
 841815b:	8b 45 08             	mov    0x8(%ebp),%eax
 841815e:	89 04 24             	mov    %eax,(%esp)
 8418161:	e8 12 a2 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8418166:	b8 00 00 00 00       	mov    $0x0,%eax
 841816b:	84 c0                	test   %al,%al
 841816d:	74 0b                	je     841817a <_ZN17DB_UpdateGrowTypeD1Ev+0x2e>
 841816f:	8b 45 08             	mov    0x8(%ebp),%eax
 8418172:	89 04 24             	mov    %eax,(%esp)
 8418175:	e8 76 c3 30 00       	call   87244f0 <_ZdlPv>
 841817a:	c9                   	leave
 841817b:	c3                   	ret

```

```c
// DB_UpdateGrowType::~DB_UpdateGrowType @ 0x841814c

/* WARNING: Removing unreachable block (ram,0x0841816f) */
/* DB_UpdateGrowType::~DB_UpdateGrowType() */

void __thiscall DB_UpdateGrowType::~DB_UpdateGrowType(DB_UpdateGrowType *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f9d8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_UpdateGrowType_0841817c

```asm
// === 0841817c DB_UpdateGrowType::~DB_UpdateGrowType  [0x0841817c-0x8418199] ===
 841817c:	55                   	push   %ebp
 841817d:	89 e5                	mov    %esp,%ebp
 841817f:	83 ec 18             	sub    $0x18,%esp
 8418182:	8b 45 08             	mov    0x8(%ebp),%eax
 8418185:	89 04 24             	mov    %eax,(%esp)
 8418188:	e8 bf ff ff ff       	call   841814c <_ZN17DB_UpdateGrowTypeD1Ev>
 841818d:	8b 45 08             	mov    0x8(%ebp),%eax
 8418190:	89 04 24             	mov    %eax,(%esp)
 8418193:	e8 58 c3 30 00       	call   87244f0 <_ZdlPv>
 8418198:	c9                   	leave
 8418199:	c3                   	ret

```

```c
// DB_UpdateGrowType::~DB_UpdateGrowType @ 0x841817c

/* DB_UpdateGrowType::~DB_UpdateGrowType() */

void __thiscall DB_UpdateGrowType::~DB_UpdateGrowType(DB_UpdateGrowType *this)

{
  ~DB_UpdateGrowType(this);
  operator_delete(this);
  return;
}

```

