# DB_UpdateQueryCountTimerDb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c5d4 DB_UpdateQueryCountTimerDb::dispatch  [0x0841c5d4-0x841c619] ===
 841c5d4:	55                   	push   %ebp
 841c5d5:	89 e5                	mov    %esp,%ebp
 841c5d7:	83 ec 28             	sub    $0x28,%esp
 841c5da:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c5df:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c5e6:	00 
 841c5e7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841c5ee:	00 
 841c5ef:	89 04 24             	mov    %eax,(%esp)
 841c5f2:	e8 47 8c fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c5f7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841c5fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c5fd:	89 04 24             	mov    %eax,(%esp)
 841c600:	e8 fd 7b e8 ff       	call   82a4202 <_ZN5MySQL15GetQueryCounterEv>
 841c605:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841c608:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c60b:	89 04 24             	mov    %eax,(%esp)
 841c60e:	e8 d3 08 1d 00       	call   85ecee6 <_ZN13CQueryCounter18UpdateQueryCounterEv>
 841c613:	b8 01 00 00 00       	mov    $0x1,%eax
 841c618:	c9                   	leave
 841c619:	c3                   	ret

```

```c
// DB_UpdateQueryCountTimerDb::dispatch @ 0x841c5d4

/* DB_UpdateQueryCountTimerDb::dispatch(int, int, Stream*) */

undefined4 DB_UpdateQueryCountTimerDb::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  CQueryCounter *this_00;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this_00 = (CQueryCounter *)MySQL::GetQueryCounter(this);
  CQueryCounter::UpdateQueryCounter(this_00);
  return 1;
}

```

