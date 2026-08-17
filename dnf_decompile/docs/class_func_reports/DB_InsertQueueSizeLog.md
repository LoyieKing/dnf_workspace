# DB_InsertQueueSizeLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084225a8 DB_InsertQueueSizeLog::dispatch  [0x084225a8-0x842267f] ===
 84225a8:	55                   	push   %ebp
 84225a9:	89 e5                	mov    %esp,%ebp
 84225ab:	83 ec 38             	sub    $0x38,%esp
 84225ae:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84225b5:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84225bc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84225bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84225c3:	8b 45 14             	mov    0x14(%ebp),%eax
 84225c6:	89 04 24             	mov    %eax,(%esp)
 84225c9:	e8 f6 9f 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 84225ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84225d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84225d5:	8b 45 14             	mov    0x14(%ebp),%eax
 84225d8:	89 04 24             	mov    %eax,(%esp)
 84225db:	e8 e4 9f 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 84225e0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84225e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84225ec:	00 
 84225ed:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84225f4:	00 
 84225f5:	89 04 24             	mov    %eax,(%esp)
 84225f8:	e8 41 2c fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84225fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8422600:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8422603:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8422606:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842260a:	89 44 24 08          	mov    %eax,0x8(%esp)
 842260e:	c7 44 24 04 c8 d2 c4 	movl   $0x8c4d2c8,0x4(%esp)
 8422615:	08 
 8422616:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8422619:	89 04 24             	mov    %eax,(%esp)
 842261c:	e8 9f 1b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8422621:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422628:	00 
 8422629:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842262c:	89 04 24             	mov    %eax,(%esp)
 842262f:	e8 f2 1c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8422634:	83 f0 01             	xor    $0x1,%eax
 8422637:	84 c0                	test   %al,%al
 8422639:	74 3d                	je     8422678 <_ZN21DB_InsertQueueSizeLog8dispatchEiiP6Stream+0xd0>
 842263b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8422642:	00 
 8422643:	c7 44 24 08 d8 5a 00 	movl   $0x5ad8,0x8(%esp)
 842264a:	00 
 842264b:	c7 44 24 04 20 c6 c5 	movl   $0x8c5c620,0x4(%esp)
 8422652:	08 
 8422653:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8422656:	89 04 24             	mov    %eax,(%esp)
 8422659:	e8 ba d0 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842265e:	c7 44 24 04 10 d3 c4 	movl   $0x8c4d310,0x4(%esp)
 8422665:	08 
 8422666:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8422669:	89 04 24             	mov    %eax,(%esp)
 842266c:	e8 17 d1 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8422671:	b8 00 00 00 00       	mov    $0x0,%eax
 8422676:	eb 05                	jmp    842267d <_ZN21DB_InsertQueueSizeLog8dispatchEiiP6Stream+0xd5>
 8422678:	b8 01 00 00 00       	mov    $0x1,%eax
 842267d:	c9                   	leave
 842267e:	c3                   	ret
 842267f:	90                   	nop

```

```c
// DB_InsertQueueSizeLog::dispatch @ 0x84225a8

/* DB_InsertQueueSizeLog::dispatch(int, int, Stream*) */

bool DB_InsertQueueSizeLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_28;
  int local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_24 = 0;
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(local_10,"inSert into dnf_dbq_log(occ_time,channel_no,dbq) values(NOW(),%d,%d)",
                   local_28,local_24);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_20,"virtual bool DB_InsertQueueSizeLog::dispatch(int, int, Stream*)",
                       0x5ad8,5);
    cMyTrace::operator()(local_20,"DB_InsertQueueSizeLog, exec ERROR");
  }
  return cVar1 == '\x01';
}

```

