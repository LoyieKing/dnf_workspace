# DB_SaveProperDungeonClearCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843a8b2 DB_SaveProperDungeonClearCount::dispatch  [0x0843a8b2-0x843a997] ===
 843a8b2:	55                   	push   %ebp
 843a8b3:	89 e5                	mov    %esp,%ebp
 843a8b5:	83 ec 28             	sub    $0x28,%esp
 843a8b8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843a8bd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843a8c4:	00 
 843a8c5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843a8cc:	00 
 843a8cd:	89 04 24             	mov    %eax,(%esp)
 843a8d0:	e8 69 a9 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843a8d5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843a8d8:	8b 45 14             	mov    0x14(%ebp),%eax
 843a8db:	89 04 24             	mov    %eax,(%esp)
 843a8de:	e8 ad 90 01 00       	call   8453990 <_ZN6Stream12GetOutBufferI26SIG_SAVE_BLOOD_CLEAR_COUNTEEPT_v>
 843a8e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843a8e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a8e9:	8b 10                	mov    (%eax),%edx
 843a8eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a8ee:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 843a8f2:	98                   	cwtl
 843a8f3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843a8f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843a8fb:	c7 44 24 04 6c 4c c5 	movl   $0x8c54c6c,0x4(%esp)
 843a902:	08 
 843a903:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a906:	89 04 24             	mov    %eax,(%esp)
 843a909:	e8 b2 98 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843a90e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a915:	00 
 843a916:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a919:	89 04 24             	mov    %eax,(%esp)
 843a91c:	e8 05 9a fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843a921:	83 f0 01             	xor    $0x1,%eax
 843a924:	84 c0                	test   %al,%al
 843a926:	74 07                	je     843a92f <_ZN30DB_SaveProperDungeonClearCount8dispatchEiiP6Stream+0x7d>
 843a928:	b8 00 00 00 00       	mov    $0x0,%eax
 843a92d:	eb 66                	jmp    843a995 <_ZN30DB_SaveProperDungeonClearCount8dispatchEiiP6Stream+0xe3>
 843a92f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a932:	89 04 24             	mov    %eax,(%esp)
 843a935:	e8 d6 99 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843a93a:	09 d0                	or     %edx,%eax
 843a93c:	85 c0                	test   %eax,%eax
 843a93e:	0f 94 c0             	sete   %al
 843a941:	84 c0                	test   %al,%al
 843a943:	74 4b                	je     843a990 <_ZN30DB_SaveProperDungeonClearCount8dispatchEiiP6Stream+0xde>
 843a945:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a948:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 843a94c:	0f bf d0             	movswl %ax,%edx
 843a94f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843a952:	8b 00                	mov    (%eax),%eax
 843a954:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843a958:	89 44 24 08          	mov    %eax,0x8(%esp)
 843a95c:	c7 44 24 04 c0 4c c5 	movl   $0x8c54cc0,0x4(%esp)
 843a963:	08 
 843a964:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a967:	89 04 24             	mov    %eax,(%esp)
 843a96a:	e8 51 98 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843a96f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843a976:	00 
 843a977:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843a97a:	89 04 24             	mov    %eax,(%esp)
 843a97d:	e8 a4 99 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843a982:	83 f0 01             	xor    $0x1,%eax
 843a985:	84 c0                	test   %al,%al
 843a987:	74 07                	je     843a990 <_ZN30DB_SaveProperDungeonClearCount8dispatchEiiP6Stream+0xde>
 843a989:	b8 00 00 00 00       	mov    $0x0,%eax
 843a98e:	eb 05                	jmp    843a995 <_ZN30DB_SaveProperDungeonClearCount8dispatchEiiP6Stream+0xe3>
 843a990:	b8 01 00 00 00       	mov    $0x1,%eax
 843a995:	c9                   	leave
 843a996:	c3                   	ret
 843a997:	90                   	nop

```

```c
// DB_SaveProperDungeonClearCount::dispatch @ 0x843a8b2

/* DB_SaveProperDungeonClearCount::dispatch(int, int, Stream*) */

undefined4 DB_SaveProperDungeonClearCount::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_SAVE_BLOOD_CLEAR_COUNT *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_BLOOD_CLEAR_COUNT>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate event_dungeon_clear set clear_cnt=%d, update_time=now() where charac_no=%u"
                   ,(int)*(short *)(pSVar2 + 4),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into event_dungeon_clear(charac_no, clear_cnt, update_time) values(%u, %d, now())"
                       ,*(undefined4 *)pSVar2,(int)*(short *)(pSVar2 + 4));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

