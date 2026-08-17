# DB_AvatarItemMove

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## ChangeSlot

```asm
// === 08400432 DB_AvatarItemMove::ChangeSlot  [0x08400432-0x84004bb] ===
 8400432:	55                   	push   %ebp
 8400433:	89 e5                	mov    %esp,%ebp
 8400435:	83 ec 38             	sub    $0x38,%esp
 8400438:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840043d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400444:	00 
 8400445:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840044c:	00 
 840044d:	89 04 24             	mov    %eax,(%esp)
 8400450:	e8 e9 4d ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8400455:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8400458:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 840045c:	79 07                	jns    8400465 <_ZN17DB_AvatarItemMove10ChangeSlotEiii+0x33>
 840045e:	b8 01 00 00 00       	mov    $0x1,%eax
 8400463:	eb 55                	jmp    84004ba <_ZN17DB_AvatarItemMove10ChangeSlotEiii+0x88>
 8400465:	8b 45 0c             	mov    0xc(%ebp),%eax
 8400468:	89 44 24 10          	mov    %eax,0x10(%esp)
 840046c:	8b 45 14             	mov    0x14(%ebp),%eax
 840046f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8400473:	8b 45 10             	mov    0x10(%ebp),%eax
 8400476:	89 44 24 08          	mov    %eax,0x8(%esp)
 840047a:	c7 44 24 04 1c 29 c4 	movl   $0x8c4291c,0x4(%esp)
 8400481:	08 
 8400482:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8400485:	89 04 24             	mov    %eax,(%esp)
 8400488:	e8 33 3d ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840048d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8400494:	00 
 8400495:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8400498:	89 04 24             	mov    %eax,(%esp)
 840049b:	e8 86 3e ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84004a0:	88 45 f7             	mov    %al,-0x9(%ebp)
 84004a3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84004a7:	83 f0 01             	xor    $0x1,%eax
 84004aa:	84 c0                	test   %al,%al
 84004ac:	74 07                	je     84004b5 <_ZN17DB_AvatarItemMove10ChangeSlotEiii+0x83>
 84004ae:	b8 00 00 00 00       	mov    $0x0,%eax
 84004b3:	eb 05                	jmp    84004ba <_ZN17DB_AvatarItemMove10ChangeSlotEiii+0x88>
 84004b5:	b8 01 00 00 00       	mov    $0x1,%eax
 84004ba:	c9                   	leave
 84004bb:	c3                   	ret

```

```c
// DB_AvatarItemMove::ChangeSlot @ 0x8400432

/* DB_AvatarItemMove::ChangeSlot(int, int, int) */

undefined4 __thiscall
DB_AvatarItemMove::ChangeSlot(DB_AvatarItemMove *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_1 < 0) {
    uVar2 = 1;
  }
  else {
    MySQL::set_query(this_00,"upDate user_items set slot=%d,clear_avatar_id=%d where ui_id=%d",
                     param_2,param_3,param_1);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## DB_AvatarItemMove

```asm
// === 0840031e DB_AvatarItemMove::DB_AvatarItemMove  [0x0840031e-0x8400339] ===
 840031e:	55                   	push   %ebp
 840031f:	89 e5                	mov    %esp,%ebp
 8400321:	83 ec 18             	sub    $0x18,%esp
 8400324:	8b 45 08             	mov    0x8(%ebp),%eax
 8400327:	89 04 24             	mov    %eax,(%esp)
 840032a:	e8 77 d4 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 840032f:	8b 45 08             	mov    0x8(%ebp),%eax
 8400332:	c7 00 c0 fc c5 08    	movl   $0x8c5fcc0,(%eax)
 8400338:	c9                   	leave
 8400339:	c3                   	ret

```

```c
// DB_AvatarItemMove::DB_AvatarItemMove @ 0x840031e

/* DB_AvatarItemMove::DB_AvatarItemMove() */

void __thiscall DB_AvatarItemMove::DB_AvatarItemMove(DB_AvatarItemMove *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fcc0;
  return;
}

```

---

## MoveAvatarItem

```asm
// === 084003ca DB_AvatarItemMove::MoveAvatarItem  [0x084003ca-0x8400431] ===
 84003ca:	55                   	push   %ebp
 84003cb:	89 e5                	mov    %esp,%ebp
 84003cd:	83 ec 18             	sub    $0x18,%esp
 84003d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84003d3:	8b 48 0e             	mov    0xe(%eax),%ecx
 84003d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84003d9:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 84003dd:	0f b6 d0             	movzbl %al,%edx
 84003e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84003e3:	8b 40 04             	mov    0x4(%eax),%eax
 84003e6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84003ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 84003ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84003f2:	8b 45 08             	mov    0x8(%ebp),%eax
 84003f5:	89 04 24             	mov    %eax,(%esp)
 84003f8:	e8 35 00 00 00       	call   8400432 <_ZN17DB_AvatarItemMove10ChangeSlotEiii>
 84003fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8400400:	8b 48 12             	mov    0x12(%eax),%ecx
 8400403:	8b 45 0c             	mov    0xc(%ebp),%eax
 8400406:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 840040a:	0f b6 d0             	movzbl %al,%edx
 840040d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8400410:	8b 40 08             	mov    0x8(%eax),%eax
 8400413:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8400417:	89 54 24 08          	mov    %edx,0x8(%esp)
 840041b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840041f:	8b 45 08             	mov    0x8(%ebp),%eax
 8400422:	89 04 24             	mov    %eax,(%esp)
 8400425:	e8 08 00 00 00       	call   8400432 <_ZN17DB_AvatarItemMove10ChangeSlotEiii>
 840042a:	b8 01 00 00 00       	mov    $0x1,%eax
 840042f:	c9                   	leave
 8400430:	c3                   	ret
 8400431:	90                   	nop

```

```c
// DB_AvatarItemMove::MoveAvatarItem @ 0x84003ca

/* DB_AvatarItemMove::MoveAvatarItem(SIG_AVATAR_MOVE*) */

undefined4 __thiscall
DB_AvatarItemMove::MoveAvatarItem(DB_AvatarItemMove *this,SIG_AVATAR_MOVE *param_1)

{
  ChangeSlot(this,*(int *)(param_1 + 4),(uint)(byte)param_1[0xd],*(int *)(param_1 + 0xe));
  ChangeSlot(this,*(int *)(param_1 + 8),(uint)(byte)param_1[0xc],*(int *)(param_1 + 0x12));
  return 1;
}

```

---

## dispatch

```asm
// === 08400388 DB_AvatarItemMove::dispatch  [0x08400388-0x84003c9] ===
 8400388:	55                   	push   %ebp
 8400389:	89 e5                	mov    %esp,%ebp
 840038b:	83 ec 28             	sub    $0x28,%esp
 840038e:	8b 45 14             	mov    0x14(%ebp),%eax
 8400391:	89 04 24             	mov    %eax,(%esp)
 8400394:	e8 2b 00 05 00       	call   84503c4 <_ZN6Stream12GetOutBufferI15SIG_AVATAR_MOVEEEPT_v>
 8400399:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840039c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840039f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84003a3:	8b 45 08             	mov    0x8(%ebp),%eax
 84003a6:	89 04 24             	mov    %eax,(%esp)
 84003a9:	e8 1c 00 00 00       	call   84003ca <_ZN17DB_AvatarItemMove14MoveAvatarItemEP15SIG_AVATAR_MOVE>
 84003ae:	88 45 f3             	mov    %al,-0xd(%ebp)
 84003b1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84003b5:	83 f0 01             	xor    $0x1,%eax
 84003b8:	84 c0                	test   %al,%al
 84003ba:	74 07                	je     84003c3 <_ZN17DB_AvatarItemMove8dispatchEiiP6Stream+0x3b>
 84003bc:	b8 00 00 00 00       	mov    $0x0,%eax
 84003c1:	eb 05                	jmp    84003c8 <_ZN17DB_AvatarItemMove8dispatchEiiP6Stream+0x40>
 84003c3:	b8 01 00 00 00       	mov    $0x1,%eax
 84003c8:	c9                   	leave
 84003c9:	c3                   	ret

```

```c
// DB_AvatarItemMove::dispatch @ 0x8400388

/* DB_AvatarItemMove::dispatch(int, int, Stream*) */

bool __thiscall
DB_AvatarItemMove::dispatch(DB_AvatarItemMove *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_AVATAR_MOVE *pSVar2;
  
  pSVar2 = Stream::GetOutBuffer<SIG_AVATAR_MOVE>(param_3);
  cVar1 = MoveAvatarItem(this,pSVar2);
  return cVar1 == '\x01';
}

```

---

## ~DB_AvatarItemMove

```asm
// === 0840033a DB_AvatarItemMove::~DB_AvatarItemMove  [0x0840033a-0x8400369] ===
 840033a:	55                   	push   %ebp
 840033b:	89 e5                	mov    %esp,%ebp
 840033d:	83 ec 18             	sub    $0x18,%esp
 8400340:	8b 45 08             	mov    0x8(%ebp),%eax
 8400343:	c7 00 c0 fc c5 08    	movl   $0x8c5fcc0,(%eax)
 8400349:	8b 45 08             	mov    0x8(%ebp),%eax
 840034c:	89 04 24             	mov    %eax,(%esp)
 840034f:	e8 24 20 ce ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8400354:	b8 00 00 00 00       	mov    $0x0,%eax
 8400359:	84 c0                	test   %al,%al
 840035b:	74 0b                	je     8400368 <_ZN17DB_AvatarItemMoveD1Ev+0x2e>
 840035d:	8b 45 08             	mov    0x8(%ebp),%eax
 8400360:	89 04 24             	mov    %eax,(%esp)
 8400363:	e8 88 41 32 00       	call   87244f0 <_ZdlPv>
 8400368:	c9                   	leave
 8400369:	c3                   	ret

```

```c
// DB_AvatarItemMove::~DB_AvatarItemMove @ 0x840033a

/* WARNING: Removing unreachable block (ram,0x0840035d) */
/* DB_AvatarItemMove::~DB_AvatarItemMove() */

void __thiscall DB_AvatarItemMove::~DB_AvatarItemMove(DB_AvatarItemMove *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fcc0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_AvatarItemMove_0840036a

```asm
// === 0840036a DB_AvatarItemMove::~DB_AvatarItemMove  [0x0840036a-0x8400387] ===
 840036a:	55                   	push   %ebp
 840036b:	89 e5                	mov    %esp,%ebp
 840036d:	83 ec 18             	sub    $0x18,%esp
 8400370:	8b 45 08             	mov    0x8(%ebp),%eax
 8400373:	89 04 24             	mov    %eax,(%esp)
 8400376:	e8 bf ff ff ff       	call   840033a <_ZN17DB_AvatarItemMoveD1Ev>
 840037b:	8b 45 08             	mov    0x8(%ebp),%eax
 840037e:	89 04 24             	mov    %eax,(%esp)
 8400381:	e8 6a 41 32 00       	call   87244f0 <_ZdlPv>
 8400386:	c9                   	leave
 8400387:	c3                   	ret

```

```c
// DB_AvatarItemMove::~DB_AvatarItemMove @ 0x840036a

/* DB_AvatarItemMove::~DB_AvatarItemMove() */

void __thiscall DB_AvatarItemMove::~DB_AvatarItemMove(DB_AvatarItemMove *this)

{
  ~DB_AvatarItemMove(this);
  operator_delete(this);
  return;
}

```

