# DB_InsertServerLoadStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08436ad4 DB_InsertServerLoadStatistic::dispatch  [0x08436ad4-0x8436b9f] ===
 8436ad4:	55                   	push   %ebp
 8436ad5:	89 e5                	mov    %esp,%ebp
 8436ad7:	57                   	push   %edi
 8436ad8:	56                   	push   %esi
 8436ad9:	53                   	push   %ebx
 8436ada:	83 ec 3c             	sub    $0x3c,%esp
 8436add:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8436ae2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8436ae9:	00 
 8436aea:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8436af1:	00 
 8436af2:	89 04 24             	mov    %eax,(%esp)
 8436af5:	e8 44 e7 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8436afa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8436afd:	8b 45 14             	mov    0x14(%ebp),%eax
 8436b00:	89 04 24             	mov    %eax,(%esp)
 8436b03:	e8 90 c8 01 00       	call   8453398 <_ZN6Stream12GetOutBufferI32SIG_INSERT_SERVER_LOAD_STATISTICEEPT_v>
 8436b08:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8436b0b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436b0e:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8436b12:	0f bf f8             	movswl %ax,%edi
 8436b15:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436b18:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8436b1c:	0f bf f0             	movswl %ax,%esi
 8436b1f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436b22:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8436b26:	0f bf d8             	movswl %ax,%ebx
 8436b29:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436b2c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8436b30:	0f bf c8             	movswl %ax,%ecx
 8436b33:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436b36:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8436b3a:	0f be d0             	movsbl %al,%edx
 8436b3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436b40:	0f b6 00             	movzbl (%eax),%eax
 8436b43:	0f be c0             	movsbl %al,%eax
 8436b46:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8436b4a:	89 74 24 18          	mov    %esi,0x18(%esp)
 8436b4e:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8436b52:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8436b56:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8436b5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436b5e:	c7 44 24 04 c0 37 c5 	movl   $0x8c537c0,0x4(%esp)
 8436b65:	08 
 8436b66:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436b69:	89 04 24             	mov    %eax,(%esp)
 8436b6c:	e8 4f d6 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436b71:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436b78:	00 
 8436b79:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436b7c:	89 04 24             	mov    %eax,(%esp)
 8436b7f:	e8 a2 d7 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436b84:	83 f0 01             	xor    $0x1,%eax
 8436b87:	84 c0                	test   %al,%al
 8436b89:	74 07                	je     8436b92 <_ZN28DB_InsertServerLoadStatistic8dispatchEiiP6Stream+0xbe>
 8436b8b:	b8 00 00 00 00       	mov    $0x0,%eax
 8436b90:	eb 05                	jmp    8436b97 <_ZN28DB_InsertServerLoadStatistic8dispatchEiiP6Stream+0xc3>
 8436b92:	b8 01 00 00 00       	mov    $0x1,%eax
 8436b97:	83 c4 3c             	add    $0x3c,%esp
 8436b9a:	5b                   	pop    %ebx
 8436b9b:	5e                   	pop    %esi
 8436b9c:	5f                   	pop    %edi
 8436b9d:	5d                   	pop    %ebp
 8436b9e:	c3                   	ret
 8436b9f:	90                   	nop

```

```c
// DB_InsertServerLoadStatistic::dispatch @ 0x8436ad4

/* DB_InsertServerLoadStatistic::dispatch(int, int, Stream*) */

bool DB_InsertServerLoadStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_INSERT_SERVER_LOAD_STATISTIC *pSVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar2 = Stream::GetOutBuffer<SIG_INSERT_SERVER_LOAD_STATISTIC>(in_stack_00000010);
  MySQL::set_query(this,
                   "inSert into log_gameserver_load_stat set occ_time=now(), server_id=%d, channel_no=%d, dbq_cnt=%d, logdbq_cnt=%d, netq_cnt=%d, packetq_cnt=%d"
                   ,(int)(char)*pSVar2,(int)(char)pSVar2[1],(int)*(short *)(pSVar2 + 2),
                   (int)*(short *)(pSVar2 + 4),(int)*(short *)(pSVar2 + 6),
                   (int)*(short *)(pSVar2 + 8));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

