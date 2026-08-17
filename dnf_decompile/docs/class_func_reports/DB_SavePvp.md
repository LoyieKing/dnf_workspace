# DB_SavePvp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_SavePvp

```asm
// === 0841720e DB_SavePvp::DB_SavePvp  [0x0841720e-0x8417229] ===
 841720e:	55                   	push   %ebp
 841720f:	89 e5                	mov    %esp,%ebp
 8417211:	83 ec 18             	sub    $0x18,%esp
 8417214:	8b 45 08             	mov    0x8(%ebp),%eax
 8417217:	89 04 24             	mov    %eax,(%esp)
 841721a:	e8 87 65 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 841721f:	8b 45 08             	mov    0x8(%ebp),%eax
 8417222:	c7 00 c8 fa c5 08    	movl   $0x8c5fac8,(%eax)
 8417228:	c9                   	leave
 8417229:	c3                   	ret

```

```c
// DB_SavePvp::DB_SavePvp @ 0x841720e

/* DB_SavePvp::DB_SavePvp() */

void __thiscall DB_SavePvp::DB_SavePvp(DB_SavePvp *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fac8;
  return;
}

```

---

## SavePvp

```asm
// === 084172c8 DB_SavePvp::SavePvp  [0x084172c8-0x84174bf] ===
 84172c8:	55                   	push   %ebp
 84172c9:	89 e5                	mov    %esp,%ebp
 84172cb:	57                   	push   %edi
 84172cc:	56                   	push   %esi
 84172cd:	53                   	push   %ebx
 84172ce:	81 ec ec 00 00 00    	sub    $0xec,%esp
 84172d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84172d7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84172da:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84172df:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84172e6:	00 
 84172e7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84172ee:	00 
 84172ef:	89 04 24             	mov    %eax,(%esp)
 84172f2:	e8 47 df fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84172f7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84172fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84172fd:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8417303:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8417306:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417309:	8b 40 60             	mov    0x60(%eax),%eax
 841730c:	89 45 90             	mov    %eax,-0x70(%ebp)
 841730f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417312:	8b 40 64             	mov    0x64(%eax),%eax
 8417315:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8417318:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 841731f:	e8 7a 49 cb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8417324:	89 45 98             	mov    %eax,-0x68(%ebp)
 8417327:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841732a:	8b 40 58             	mov    0x58(%eax),%eax
 841732d:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8417330:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417333:	8b 40 54             	mov    0x54(%eax),%eax
 8417336:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8417339:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841733c:	8b 40 50             	mov    0x50(%eax),%eax
 841733f:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8417342:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417345:	8b 40 4c             	mov    0x4c(%eax),%eax
 8417348:	89 45 a8             	mov    %eax,-0x58(%ebp)
 841734b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841734e:	8b 40 48             	mov    0x48(%eax),%eax
 8417351:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8417354:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417357:	8b 40 44             	mov    0x44(%eax),%eax
 841735a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 841735d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417360:	8b 40 40             	mov    0x40(%eax),%eax
 8417363:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8417366:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417369:	8b 40 3c             	mov    0x3c(%eax),%eax
 841736c:	89 45 b8             	mov    %eax,-0x48(%ebp)
 841736f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417372:	8b 40 38             	mov    0x38(%eax),%eax
 8417375:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8417378:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841737b:	8b 40 34             	mov    0x34(%eax),%eax
 841737e:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8417381:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417384:	8b 40 30             	mov    0x30(%eax),%eax
 8417387:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 841738a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841738d:	8b 40 2c             	mov    0x2c(%eax),%eax
 8417390:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8417393:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8417396:	8b 40 28             	mov    0x28(%eax),%eax
 8417399:	89 45 cc             	mov    %eax,-0x34(%ebp)
 841739c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841739f:	8b 40 24             	mov    0x24(%eax),%eax
 84173a2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84173a5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84173a8:	8b 40 20             	mov    0x20(%eax),%eax
 84173ab:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84173ae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84173b1:	8b 78 1c             	mov    0x1c(%eax),%edi
 84173b4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84173b7:	8b 70 18             	mov    0x18(%eax),%esi
 84173ba:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84173bd:	8b 58 14             	mov    0x14(%eax),%ebx
 84173c0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84173c3:	8b 48 08             	mov    0x8(%eax),%ecx
 84173c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84173c9:	8b 50 04             	mov    0x4(%eax),%edx
 84173cc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84173cf:	8b 00                	mov    (%eax),%eax
 84173d1:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84173d4:	8b 45 8c             	mov    -0x74(%ebp),%eax
 84173d7:	89 44 24 68          	mov    %eax,0x68(%esp)
 84173db:	8b 45 90             	mov    -0x70(%ebp),%eax
 84173de:	89 44 24 64          	mov    %eax,0x64(%esp)
 84173e2:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84173e5:	89 44 24 60          	mov    %eax,0x60(%esp)
 84173e9:	8b 45 98             	mov    -0x68(%ebp),%eax
 84173ec:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 84173f0:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84173f3:	89 44 24 58          	mov    %eax,0x58(%esp)
 84173f7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 84173fa:	89 44 24 54          	mov    %eax,0x54(%esp)
 84173fe:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8417401:	89 44 24 50          	mov    %eax,0x50(%esp)
 8417405:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8417408:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 841740c:	8b 45 ac             	mov    -0x54(%ebp),%eax
 841740f:	89 44 24 48          	mov    %eax,0x48(%esp)
 8417413:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8417416:	89 44 24 44          	mov    %eax,0x44(%esp)
 841741a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 841741d:	89 44 24 40          	mov    %eax,0x40(%esp)
 8417421:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8417424:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8417428:	8b 45 bc             	mov    -0x44(%ebp),%eax
 841742b:	89 44 24 38          	mov    %eax,0x38(%esp)
 841742f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8417432:	89 44 24 34          	mov    %eax,0x34(%esp)
 8417436:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8417439:	89 44 24 30          	mov    %eax,0x30(%esp)
 841743d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8417440:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8417444:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8417447:	89 44 24 28          	mov    %eax,0x28(%esp)
 841744b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841744e:	89 44 24 24          	mov    %eax,0x24(%esp)
 8417452:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8417455:	89 44 24 20          	mov    %eax,0x20(%esp)
 8417459:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 841745d:	89 74 24 18          	mov    %esi,0x18(%esp)
 8417461:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8417465:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8417469:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841746d:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8417470:	89 44 24 08          	mov    %eax,0x8(%esp)
 8417474:	c7 44 24 04 b8 97 c4 	movl   $0x8c497b8,0x4(%esp)
 841747b:	08 
 841747c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841747f:	89 04 24             	mov    %eax,(%esp)
 8417482:	e8 39 cd fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8417487:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841748e:	00 
 841748f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8417492:	89 04 24             	mov    %eax,(%esp)
 8417495:	e8 8c ce fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841749a:	88 45 e3             	mov    %al,-0x1d(%ebp)
 841749d:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 84174a1:	83 f0 01             	xor    $0x1,%eax
 84174a4:	84 c0                	test   %al,%al
 84174a6:	74 07                	je     84174af <_ZN10DB_SavePvp7SavePvpEP12SIG_SAVE_PVP+0x1e7>
 84174a8:	b8 00 00 00 00       	mov    $0x0,%eax
 84174ad:	eb 05                	jmp    84174b4 <_ZN10DB_SavePvp7SavePvpEP12SIG_SAVE_PVP+0x1ec>
 84174af:	b8 01 00 00 00       	mov    $0x1,%eax
 84174b4:	81 c4 ec 00 00 00    	add    $0xec,%esp
 84174ba:	5b                   	pop    %ebx
 84174bb:	5e                   	pop    %esi
 84174bc:	5f                   	pop    %edi
 84174bd:	5d                   	pop    %ebp
 84174be:	c3                   	ret
 84174bf:	90                   	nop

```

```c
// DB_SavePvp::SavePvp @ 0x84172c8

/* DB_SavePvp::SavePvp(SIG_SAVE_PVP*) */

bool __thiscall DB_SavePvp::SavePvp(DB_SavePvp *this,SIG_SAVE_PVP *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  MySQL *this_00;
  undefined4 uVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 100);
  uVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  MySQL::set_query(this_00,
                   "upDate pvp_result set win=%d,lose=%d,pvp_point=%d,pvp_grade=%d,avg_kill_count=%d,avg_buf_count=%d,avg_debuf_count=%d,avg_heal_count=%d,avg_counter_count=%d,avg_back_atk_count=%d,avg_union_hit_count=%d,avg_overkill_count=%d,avg_combo_count=%d,avg_aerial_count=%d,avg_attacked_count=%d,avg_deal_damage=%d,avg_technic=%d,avg_style=%d,avg_hit_penalty=%d,pvp_count=%d,win_point=%d,last_play_time=from_unixtime(%d), play_count=%u,play_time=%u where charac_no=%u"
                   ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8)
                   ,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                   *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                   *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                   *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                   *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),uVar5,uVar3,uVar2
                   ,uVar1);
  cVar4 = MySQL::exec(this_00,true);
  return cVar4 == '\x01';
}

```

---

## dispatch

```asm
// === 08417278 DB_SavePvp::dispatch  [0x08417278-0x84172c7] ===
 8417278:	55                   	push   %ebp
 8417279:	89 e5                	mov    %esp,%ebp
 841727b:	83 ec 28             	sub    $0x28,%esp
 841727e:	8b 45 14             	mov    0x14(%ebp),%eax
 8417281:	89 04 24             	mov    %eax,(%esp)
 8417284:	e8 53 98 03 00       	call   8450adc <_ZN6Stream12GetOutBufferI12SIG_SAVE_PVPEEPT_v>
 8417289:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841728c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8417290:	75 07                	jne    8417299 <_ZN10DB_SavePvp8dispatchEiiP6Stream+0x21>
 8417292:	b8 00 00 00 00       	mov    $0x0,%eax
 8417297:	eb 2c                	jmp    84172c5 <_ZN10DB_SavePvp8dispatchEiiP6Stream+0x4d>
 8417299:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841729c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84172a0:	8b 45 08             	mov    0x8(%ebp),%eax
 84172a3:	89 04 24             	mov    %eax,(%esp)
 84172a6:	e8 1d 00 00 00       	call   84172c8 <_ZN10DB_SavePvp7SavePvpEP12SIG_SAVE_PVP>
 84172ab:	88 45 f3             	mov    %al,-0xd(%ebp)
 84172ae:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84172b2:	83 f0 01             	xor    $0x1,%eax
 84172b5:	84 c0                	test   %al,%al
 84172b7:	74 07                	je     84172c0 <_ZN10DB_SavePvp8dispatchEiiP6Stream+0x48>
 84172b9:	b8 00 00 00 00       	mov    $0x0,%eax
 84172be:	eb 05                	jmp    84172c5 <_ZN10DB_SavePvp8dispatchEiiP6Stream+0x4d>
 84172c0:	b8 01 00 00 00       	mov    $0x1,%eax
 84172c5:	c9                   	leave
 84172c6:	c3                   	ret
 84172c7:	90                   	nop

```

```c
// DB_SavePvp::dispatch @ 0x8417278

/* DB_SavePvp::dispatch(int, int, Stream*) */

undefined4 __thiscall DB_SavePvp::dispatch(DB_SavePvp *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_PVP *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_PVP>(param_3);
  if (pSVar2 == (SIG_SAVE_PVP *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SavePvp(this,pSVar2);
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

## ~DB_SavePvp

```asm
// === 0841722a DB_SavePvp::~DB_SavePvp  [0x0841722a-0x8417259] ===
 841722a:	55                   	push   %ebp
 841722b:	89 e5                	mov    %esp,%ebp
 841722d:	83 ec 18             	sub    $0x18,%esp
 8417230:	8b 45 08             	mov    0x8(%ebp),%eax
 8417233:	c7 00 c8 fa c5 08    	movl   $0x8c5fac8,(%eax)
 8417239:	8b 45 08             	mov    0x8(%ebp),%eax
 841723c:	89 04 24             	mov    %eax,(%esp)
 841723f:	e8 34 b1 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8417244:	b8 00 00 00 00       	mov    $0x0,%eax
 8417249:	84 c0                	test   %al,%al
 841724b:	74 0b                	je     8417258 <_ZN10DB_SavePvpD1Ev+0x2e>
 841724d:	8b 45 08             	mov    0x8(%ebp),%eax
 8417250:	89 04 24             	mov    %eax,(%esp)
 8417253:	e8 98 d2 30 00       	call   87244f0 <_ZdlPv>
 8417258:	c9                   	leave
 8417259:	c3                   	ret

```

```c
// DB_SavePvp::~DB_SavePvp @ 0x841722a

/* WARNING: Removing unreachable block (ram,0x0841724d) */
/* DB_SavePvp::~DB_SavePvp() */

void __thiscall DB_SavePvp::~DB_SavePvp(DB_SavePvp *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fac8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_SavePvp_0841725a

```asm
// === 0841725a DB_SavePvp::~DB_SavePvp  [0x0841725a-0x8417277] ===
 841725a:	55                   	push   %ebp
 841725b:	89 e5                	mov    %esp,%ebp
 841725d:	83 ec 18             	sub    $0x18,%esp
 8417260:	8b 45 08             	mov    0x8(%ebp),%eax
 8417263:	89 04 24             	mov    %eax,(%esp)
 8417266:	e8 bf ff ff ff       	call   841722a <_ZN10DB_SavePvpD1Ev>
 841726b:	8b 45 08             	mov    0x8(%ebp),%eax
 841726e:	89 04 24             	mov    %eax,(%esp)
 8417271:	e8 7a d2 30 00       	call   87244f0 <_ZdlPv>
 8417276:	c9                   	leave
 8417277:	c3                   	ret

```

```c
// DB_SavePvp::~DB_SavePvp @ 0x841725a

/* DB_SavePvp::~DB_SavePvp() */

void __thiscall DB_SavePvp::~DB_SavePvp(DB_SavePvp *this)

{
  ~DB_SavePvp(this);
  operator_delete(this);
  return;
}

```

