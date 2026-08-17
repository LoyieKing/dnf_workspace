# DB_UpdateBreakAwayDungeonClearCnt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084383ba DB_UpdateBreakAwayDungeonClearCnt::dispatch  [0x084383ba-0x843848b] ===
 84383ba:	55                   	push   %ebp
 84383bb:	89 e5                	mov    %esp,%ebp
 84383bd:	83 ec 28             	sub    $0x28,%esp
 84383c0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84383c5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84383cc:	00 
 84383cd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84383d4:	00 
 84383d5:	89 04 24             	mov    %eax,(%esp)
 84383d8:	e8 61 ce fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84383dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84383e0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84383e7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84383ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84383f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84383f5:	8b 45 14             	mov    0x14(%ebp),%eax
 84383f8:	89 04 24             	mov    %eax,(%esp)
 84383fb:	e8 96 43 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8438400:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8438403:	89 44 24 04          	mov    %eax,0x4(%esp)
 8438407:	8b 45 14             	mov    0x14(%ebp),%eax
 843840a:	89 04 24             	mov    %eax,(%esp)
 843840d:	e8 b2 41 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8438412:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8438415:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843841c:	00 
 843841d:	89 04 24             	mov    %eax,(%esp)
 8438420:	e8 26 0c cd ff       	call   810904b <_Z14NumberToStringji>
 8438425:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8438428:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843842c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8438430:	c7 44 24 04 30 42 c5 	movl   $0x8c54230,0x4(%esp)
 8438437:	08 
 8438438:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843843b:	89 04 24             	mov    %eax,(%esp)
 843843e:	e8 7d bd fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8438443:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843844a:	00 
 843844b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843844e:	89 04 24             	mov    %eax,(%esp)
 8438451:	e8 d0 be fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438456:	83 f0 01             	xor    $0x1,%eax
 8438459:	84 c0                	test   %al,%al
 843845b:	75 11                	jne    843846e <_ZN33DB_UpdateBreakAwayDungeonClearCnt8dispatchEiiP6Stream+0xb4>
 843845d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8438460:	89 04 24             	mov    %eax,(%esp)
 8438463:	e8 a8 be fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8438468:	09 d0                	or     %edx,%eax
 843846a:	85 c0                	test   %eax,%eax
 843846c:	75 07                	jne    8438475 <_ZN33DB_UpdateBreakAwayDungeonClearCnt8dispatchEiiP6Stream+0xbb>
 843846e:	b8 01 00 00 00       	mov    $0x1,%eax
 8438473:	eb 05                	jmp    843847a <_ZN33DB_UpdateBreakAwayDungeonClearCnt8dispatchEiiP6Stream+0xc0>
 8438475:	b8 00 00 00 00       	mov    $0x0,%eax
 843847a:	84 c0                	test   %al,%al
 843847c:	74 07                	je     8438485 <_ZN33DB_UpdateBreakAwayDungeonClearCnt8dispatchEiiP6Stream+0xcb>
 843847e:	b8 00 00 00 00       	mov    $0x0,%eax
 8438483:	eb 05                	jmp    843848a <_ZN33DB_UpdateBreakAwayDungeonClearCnt8dispatchEiiP6Stream+0xd0>
 8438485:	b8 01 00 00 00       	mov    $0x1,%eax
 843848a:	c9                   	leave
 843848b:	c3                   	ret

```

```c
// DB_UpdateBreakAwayDungeonClearCnt::dispatch @ 0x84383ba

/* DB_UpdateBreakAwayDungeonClearCnt::dispatch(int, int, Stream*) */

bool DB_UpdateBreakAwayDungeonClearCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate churn_member_info set add_info=%d where m_id=%s",local_18,uVar3)
  ;
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}

```

