# DB_InsertPartyType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842c906 DB_InsertPartyType::dispatch  [0x0842c906-0x842ca05] ===
 842c906:	55                   	push   %ebp
 842c907:	89 e5                	mov    %esp,%ebp
 842c909:	57                   	push   %edi
 842c90a:	56                   	push   %esi
 842c90b:	53                   	push   %ebx
 842c90c:	83 ec 5c             	sub    $0x5c,%esp
 842c90f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842c914:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842c91b:	00 
 842c91c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842c923:	00 
 842c924:	89 04 24             	mov    %eax,(%esp)
 842c927:	e8 12 89 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842c92c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842c92f:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 842c936:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842c93d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 842c944:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 842c94b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 842c952:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842c959:	eb 1e                	jmp    842c979 <_ZN18DB_InsertPartyType8dispatchEiiP6Stream+0x73>
 842c95b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842c95e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 842c961:	c1 e2 02             	shl    $0x2,%edx
 842c964:	01 d0                	add    %edx,%eax
 842c966:	89 44 24 04          	mov    %eax,0x4(%esp)
 842c96a:	8b 45 14             	mov    0x14(%ebp),%eax
 842c96d:	89 04 24             	mov    %eax,(%esp)
 842c970:	e8 4f fc 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842c975:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 842c979:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 842c97d:	0f 9e c0             	setle  %al
 842c980:	84 c0                	test   %al,%al
 842c982:	75 d7                	jne    842c95b <_ZN18DB_InsertPartyType8dispatchEiiP6Stream+0x55>
 842c984:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842c987:	89 45 c0             	mov    %eax,-0x40(%ebp)
 842c98a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 842c98d:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 842c990:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 842c993:	8b 75 d0             	mov    -0x30(%ebp),%esi
 842c996:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 842c999:	e8 e3 f7 c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842c99e:	89 04 24             	mov    %eax,(%esp)
 842c9a1:	e8 24 e1 d1 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 842c9a6:	8b 55 c0             	mov    -0x40(%ebp),%edx
 842c9a9:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 842c9ad:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 842c9b0:	89 54 24 18          	mov    %edx,0x18(%esp)
 842c9b4:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842c9b8:	89 74 24 10          	mov    %esi,0x10(%esp)
 842c9bc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842c9c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 842c9c4:	c7 44 24 04 ac 03 c5 	movl   $0x8c503ac,0x4(%esp)
 842c9cb:	08 
 842c9cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842c9cf:	89 04 24             	mov    %eax,(%esp)
 842c9d2:	e8 e9 77 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842c9d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842c9de:	00 
 842c9df:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842c9e2:	89 04 24             	mov    %eax,(%esp)
 842c9e5:	e8 3c 79 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842c9ea:	83 f0 01             	xor    $0x1,%eax
 842c9ed:	84 c0                	test   %al,%al
 842c9ef:	74 07                	je     842c9f8 <_ZN18DB_InsertPartyType8dispatchEiiP6Stream+0xf2>
 842c9f1:	b8 00 00 00 00       	mov    $0x0,%eax
 842c9f6:	eb 05                	jmp    842c9fd <_ZN18DB_InsertPartyType8dispatchEiiP6Stream+0xf7>
 842c9f8:	b8 01 00 00 00       	mov    $0x1,%eax
 842c9fd:	83 c4 5c             	add    $0x5c,%esp
 842ca00:	5b                   	pop    %ebx
 842ca01:	5e                   	pop    %esi
 842ca02:	5f                   	pop    %edi
 842ca03:	5d                   	pop    %ebp
 842ca04:	c3                   	ret
 842ca05:	90                   	nop

```

```c
// DB_InsertPartyType::dispatch @ 0x842c906

/* DB_InsertPartyType::dispatch(int, int, Stream*) */

bool DB_InsertPartyType::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  CEnvironment *this;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  int local_38 [5];
  MySQL *local_24;
  int local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  for (local_20 = 0; iVar5 = local_38[4], iVar4 = local_38[3], iVar3 = local_38[2],
      iVar2 = local_38[1], iVar1 = local_38[0], local_20 < 5; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,local_38 + local_20);
  }
  this = (CEnvironment *)G_CEnvironment();
  uVar7 = CEnvironment::get_channel_no(this);
  MySQL::set_query(local_24,
                   "inSert into log_party_type(channel_no,occ_date,guild_count,member_count,helped_count,normal_count,member_helped_count) values(%d,now(),%d,%d,%d,%d,%d)"
                   ,uVar7,iVar1,iVar2,iVar3,iVar4,iVar5);
  cVar6 = MySQL::exec(local_24,true);
  return cVar6 == '\x01';
}

```

