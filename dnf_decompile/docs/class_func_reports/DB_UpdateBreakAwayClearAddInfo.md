# DB_UpdateBreakAwayClearAddInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843848c DB_UpdateBreakAwayClearAddInfo::dispatch  [0x0843848c-0x8438569] ===
 843848c:	55                   	push   %ebp
 843848d:	89 e5                	mov    %esp,%ebp
 843848f:	83 ec 38             	sub    $0x38,%esp
 8438492:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8438497:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843849e:	00 
 843849f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84384a6:	00 
 84384a7:	89 04 24             	mov    %eax,(%esp)
 84384aa:	e8 8f cd fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84384af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84384b2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84384b9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84384bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84384c0:	8b 45 14             	mov    0x14(%ebp),%eax
 84384c3:	89 04 24             	mov    %eax,(%esp)
 84384c6:	e8 cb 42 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84384cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84384ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84384d5:	00 
 84384d6:	89 04 24             	mov    %eax,(%esp)
 84384d9:	e8 6d 0b cd ff       	call   810904b <_Z14NumberToStringji>
 84384de:	89 44 24 08          	mov    %eax,0x8(%esp)
 84384e2:	c7 44 24 04 68 42 c5 	movl   $0x8c54268,0x4(%esp)
 84384e9:	08 
 84384ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84384ed:	89 04 24             	mov    %eax,(%esp)
 84384f0:	e8 cb bc fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84384f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84384fc:	00 
 84384fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8438500:	89 04 24             	mov    %eax,(%esp)
 8438503:	e8 1e be fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438508:	83 f0 01             	xor    $0x1,%eax
 843850b:	84 c0                	test   %al,%al
 843850d:	75 11                	jne    8438520 <_ZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6Stream+0x94>
 843850f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8438512:	89 04 24             	mov    %eax,(%esp)
 8438515:	e8 f6 bd fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843851a:	09 d0                	or     %edx,%eax
 843851c:	85 c0                	test   %eax,%eax
 843851e:	75 07                	jne    8438527 <_ZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6Stream+0x9b>
 8438520:	b8 01 00 00 00       	mov    $0x1,%eax
 8438525:	eb 05                	jmp    843852c <_ZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6Stream+0xa0>
 8438527:	b8 00 00 00 00       	mov    $0x0,%eax
 843852c:	84 c0                	test   %al,%al
 843852e:	74 33                	je     8438563 <_ZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6Stream+0xd7>
 8438530:	c7 44 24 10 d0 74 c4 	movl   $0x8c474d0,0x10(%esp)
 8438537:	08 
 8438538:	c7 44 24 0c f4 85 00 	movl   $0x85f4,0xc(%esp)
 843853f:	00 
 8438540:	c7 44 24 08 80 bc c5 	movl   $0x8c5bc80,0x8(%esp)
 8438547:	08 
 8438548:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843854f:	08 
 8438550:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8438557:	e8 ae b6 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 843855c:	b8 00 00 00 00       	mov    $0x0,%eax
 8438561:	eb 05                	jmp    8438568 <_ZN30DB_UpdateBreakAwayClearAddInfo8dispatchEiiP6Stream+0xdc>
 8438563:	b8 01 00 00 00       	mov    $0x1,%eax
 8438568:	c9                   	leave
 8438569:	c3                   	ret

```

```c
// DB_UpdateBreakAwayClearAddInfo::dispatch @ 0x843848c

/* DB_UpdateBreakAwayClearAddInfo::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayClearAddInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate churn_member_info set add_info=-1 where m_id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_UpdateBreakAwayClearAddInfo::dispatch(int, int, Stream*)",0x85f4,
               "BREAK_AWAY : ADD INFO UPDATE ERROR!!");
  }
  return !bVar1;
}

```

