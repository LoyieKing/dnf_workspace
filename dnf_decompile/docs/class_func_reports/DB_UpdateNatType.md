# DB_UpdateNatType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c74e DB_UpdateNatType::dispatch  [0x0841c74e-0x841c7f5] ===
 841c74e:	55                   	push   %ebp
 841c74f:	89 e5                	mov    %esp,%ebp
 841c751:	56                   	push   %esi
 841c752:	53                   	push   %ebx
 841c753:	83 ec 30             	sub    $0x30,%esp
 841c756:	8b 45 14             	mov    0x14(%ebp),%eax
 841c759:	89 04 24             	mov    %eax,(%esp)
 841c75c:	e8 51 4d 03 00       	call   84514b2 <_ZN6Stream12GetOutBufferI12SIG_NAT_TYPEEEPT_v>
 841c761:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841c764:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c769:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c770:	00 
 841c771:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841c778:	00 
 841c779:	89 04 24             	mov    %eax,(%esp)
 841c77c:	e8 bd 8a fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c781:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841c784:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c787:	8b 70 08             	mov    0x8(%eax),%esi
 841c78a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c78d:	8b 58 0c             	mov    0xc(%eax),%ebx
 841c790:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c793:	8b 48 04             	mov    0x4(%eax),%ecx
 841c796:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c799:	8b 10                	mov    (%eax),%edx
 841c79b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c79e:	8b 40 10             	mov    0x10(%eax),%eax
 841c7a1:	89 74 24 18          	mov    %esi,0x18(%esp)
 841c7a5:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841c7a9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841c7ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841c7b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c7b5:	c7 44 24 04 a4 ba c4 	movl   $0x8c4baa4,0x4(%esp)
 841c7bc:	08 
 841c7bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c7c0:	89 04 24             	mov    %eax,(%esp)
 841c7c3:	e8 f8 79 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841c7c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c7cf:	00 
 841c7d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c7d3:	89 04 24             	mov    %eax,(%esp)
 841c7d6:	e8 4b 7b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841c7db:	83 f0 01             	xor    $0x1,%eax
 841c7de:	84 c0                	test   %al,%al
 841c7e0:	74 07                	je     841c7e9 <_ZN16DB_UpdateNatType8dispatchEiiP6Stream+0x9b>
 841c7e2:	b8 00 00 00 00       	mov    $0x0,%eax
 841c7e7:	eb 05                	jmp    841c7ee <_ZN16DB_UpdateNatType8dispatchEiiP6Stream+0xa0>
 841c7e9:	b8 01 00 00 00       	mov    $0x1,%eax
 841c7ee:	83 c4 30             	add    $0x30,%esp
 841c7f1:	5b                   	pop    %ebx
 841c7f2:	5e                   	pop    %esi
 841c7f3:	5d                   	pop    %ebp
 841c7f4:	c3                   	ret
 841c7f5:	90                   	nop

```

```c
// DB_UpdateNatType::dispatch @ 0x841c74e

/* DB_UpdateNatType::dispatch(int, int, Stream*) */

bool DB_UpdateNatType::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_NAT_TYPE *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_NAT_TYPE>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(this,
                   "inSert into log_nat_daily(occ_time,nat_type,nat_type_other,success_cnt,fail_cnt) values(from_unixtime(%d),%d,%d,%d,%d)"
                   ,*(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4)
                   ,*(undefined4 *)(pSVar2 + 0xc),*(undefined4 *)(pSVar2 + 8));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

