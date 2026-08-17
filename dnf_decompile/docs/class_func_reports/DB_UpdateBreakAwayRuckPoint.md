# DB_UpdateBreakAwayRuckPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08438300 DB_UpdateBreakAwayRuckPoint::dispatch  [0x08438300-0x84383b9] ===
 8438300:	55                   	push   %ebp
 8438301:	89 e5                	mov    %esp,%ebp
 8438303:	83 ec 28             	sub    $0x28,%esp
 8438306:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843830b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8438312:	00 
 8438313:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 843831a:	00 
 843831b:	89 04 24             	mov    %eax,(%esp)
 843831e:	e8 1b cf fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8438323:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8438326:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843832d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8438334:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8438337:	89 44 24 04          	mov    %eax,0x4(%esp)
 843833b:	8b 45 14             	mov    0x14(%ebp),%eax
 843833e:	89 04 24             	mov    %eax,(%esp)
 8438341:	e8 50 44 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8438346:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8438349:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8438350:	00 
 8438351:	89 04 24             	mov    %eax,(%esp)
 8438354:	e8 f2 0c cd ff       	call   810904b <_Z14NumberToStringji>
 8438359:	89 44 24 08          	mov    %eax,0x8(%esp)
 843835d:	c7 44 24 04 f8 41 c5 	movl   $0x8c541f8,0x4(%esp)
 8438364:	08 
 8438365:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8438368:	89 04 24             	mov    %eax,(%esp)
 843836b:	e8 50 be fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8438370:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8438377:	00 
 8438378:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843837b:	89 04 24             	mov    %eax,(%esp)
 843837e:	e8 a3 bf fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438383:	83 f0 01             	xor    $0x1,%eax
 8438386:	84 c0                	test   %al,%al
 8438388:	75 11                	jne    843839b <_ZN27DB_UpdateBreakAwayRuckPoint8dispatchEiiP6Stream+0x9b>
 843838a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843838d:	89 04 24             	mov    %eax,(%esp)
 8438390:	e8 7b bf fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8438395:	09 d0                	or     %edx,%eax
 8438397:	85 c0                	test   %eax,%eax
 8438399:	75 07                	jne    84383a2 <_ZN27DB_UpdateBreakAwayRuckPoint8dispatchEiiP6Stream+0xa2>
 843839b:	b8 01 00 00 00       	mov    $0x1,%eax
 84383a0:	eb 05                	jmp    84383a7 <_ZN27DB_UpdateBreakAwayRuckPoint8dispatchEiiP6Stream+0xa7>
 84383a2:	b8 00 00 00 00       	mov    $0x0,%eax
 84383a7:	84 c0                	test   %al,%al
 84383a9:	74 07                	je     84383b2 <_ZN27DB_UpdateBreakAwayRuckPoint8dispatchEiiP6Stream+0xb2>
 84383ab:	b8 00 00 00 00       	mov    $0x0,%eax
 84383b0:	eb 05                	jmp    84383b7 <_ZN27DB_UpdateBreakAwayRuckPoint8dispatchEiiP6Stream+0xb7>
 84383b2:	b8 01 00 00 00       	mov    $0x1,%eax
 84383b7:	c9                   	leave
 84383b8:	c3                   	ret
 84383b9:	90                   	nop

```

```c
// DB_UpdateBreakAwayRuckPoint::dispatch @ 0x8438300

/* DB_UpdateBreakAwayRuckPoint::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayRuckPoint::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_18;
  MySQL *local_14;
  undefined4 local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = 0;
  local_10 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar3 = NumberToString(local_18,0);
  MySQL::set_query(local_14,"upDate churn_member_info set luck_point=0 where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_14,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_14), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}

```

