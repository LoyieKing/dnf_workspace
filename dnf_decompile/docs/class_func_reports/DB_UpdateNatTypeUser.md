# DB_UpdateNatTypeUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c7f6 DB_UpdateNatTypeUser::dispatch  [0x0841c7f6-0x841c881] ===
 841c7f6:	55                   	push   %ebp
 841c7f7:	89 e5                	mov    %esp,%ebp
 841c7f9:	83 ec 38             	sub    $0x38,%esp
 841c7fc:	8b 45 14             	mov    0x14(%ebp),%eax
 841c7ff:	89 04 24             	mov    %eax,(%esp)
 841c802:	e8 ff 4c 03 00       	call   8451506 <_ZN6Stream12GetOutBufferI17SIG_NAT_TYPE_USEREEPT_v>
 841c807:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841c80a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c80f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c816:	00 
 841c817:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841c81e:	00 
 841c81f:	89 04 24             	mov    %eax,(%esp)
 841c822:	e8 17 8a fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c827:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841c82a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c82d:	8b 48 04             	mov    0x4(%eax),%ecx
 841c830:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c833:	8b 10                	mov    (%eax),%edx
 841c835:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c838:	8b 40 08             	mov    0x8(%eax),%eax
 841c83b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841c83f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841c843:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c847:	c7 44 24 04 1c bb c4 	movl   $0x8c4bb1c,0x4(%esp)
 841c84e:	08 
 841c84f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c852:	89 04 24             	mov    %eax,(%esp)
 841c855:	e8 66 79 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841c85a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c861:	00 
 841c862:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c865:	89 04 24             	mov    %eax,(%esp)
 841c868:	e8 b9 7a fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841c86d:	83 f0 01             	xor    $0x1,%eax
 841c870:	84 c0                	test   %al,%al
 841c872:	74 07                	je     841c87b <_ZN20DB_UpdateNatTypeUser8dispatchEiiP6Stream+0x85>
 841c874:	b8 00 00 00 00       	mov    $0x0,%eax
 841c879:	eb 05                	jmp    841c880 <_ZN20DB_UpdateNatTypeUser8dispatchEiiP6Stream+0x8a>
 841c87b:	b8 01 00 00 00       	mov    $0x1,%eax
 841c880:	c9                   	leave
 841c881:	c3                   	ret

```

```c
// DB_UpdateNatTypeUser::dispatch @ 0x841c7f6

/* DB_UpdateNatTypeUser::dispatch(int, int, Stream*) */

bool DB_UpdateNatTypeUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_NAT_TYPE_USER *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_NAT_TYPE_USER>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(this,
                   "inSert into log_nat_stat(occ_time,nat_type,nat_cnt) values(from_unixtime(%d),%d,%d)"
                   ,*(undefined4 *)(pSVar2 + 8),*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

