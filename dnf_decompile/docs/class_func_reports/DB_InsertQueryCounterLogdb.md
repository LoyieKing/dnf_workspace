# DB_InsertQueryCounterLogdb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08425cde DB_InsertQueryCounterLogdb::dispatch  [0x08425cde-0x8425dbd] ===
 8425cde:	55                   	push   %ebp
 8425cdf:	89 e5                	mov    %esp,%ebp
 8425ce1:	53                   	push   %ebx
 8425ce2:	81 ec 24 60 00 00    	sub    $0x6024,%esp
 8425ce8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8425cef:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8425cf6:	8d 85 eb 9f ff ff    	lea    -0x6015(%ebp),%eax
 8425cfc:	ba 01 60 00 00       	mov    $0x6001,%edx
 8425d01:	89 54 24 08          	mov    %edx,0x8(%esp)
 8425d05:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8425d0c:	00 
 8425d0d:	89 04 24             	mov    %eax,(%esp)
 8425d10:	e8 ab 7f c5 ff       	call   807dcc0 <memset@plt>
 8425d15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425d18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425d1c:	8b 45 14             	mov    0x14(%ebp),%eax
 8425d1f:	89 04 24             	mov    %eax,(%esp)
 8425d22:	e8 9d 68 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8425d27:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8425d2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425d2e:	8b 45 14             	mov    0x14(%ebp),%eax
 8425d31:	89 04 24             	mov    %eax,(%esp)
 8425d34:	e8 8b 68 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8425d39:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8425d3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8425d40:	8d 85 eb 9f ff ff    	lea    -0x6015(%ebp),%eax
 8425d46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425d4a:	8b 45 14             	mov    0x14(%ebp),%eax
 8425d4d:	89 04 24             	mov    %eax,(%esp)
 8425d50:	e8 a5 6a 1f 00       	call   861c7fa <_ZN6Stream10get_binaryEPvi>
 8425d55:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8425d5a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8425d61:	00 
 8425d62:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8425d69:	00 
 8425d6a:	89 04 24             	mov    %eax,(%esp)
 8425d6d:	e8 cc f4 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8425d72:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8425d75:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8425d78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425d7b:	89 04 24             	mov    %eax,(%esp)
 8425d7e:	e8 7f e4 e7 ff       	call   82a4202 <_ZN5MySQL15GetQueryCounterEv>
 8425d83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8425d8a:	00 
 8425d8b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8425d8f:	8d 95 eb 9f ff ff    	lea    -0x6015(%ebp),%edx
 8425d95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425d99:	89 04 24             	mov    %eax,(%esp)
 8425d9c:	e8 0d 78 1c 00       	call   85ed5ae <_ZN13CQueryCounter13RegisterQueryEPKcii>
 8425da1:	83 f0 01             	xor    $0x1,%eax
 8425da4:	84 c0                	test   %al,%al
 8425da6:	74 07                	je     8425daf <_ZN26DB_InsertQueryCounterLogdb8dispatchEiiP6Stream+0xd1>
 8425da8:	b8 00 00 00 00       	mov    $0x0,%eax
 8425dad:	eb 05                	jmp    8425db4 <_ZN26DB_InsertQueryCounterLogdb8dispatchEiiP6Stream+0xd6>
 8425daf:	b8 01 00 00 00       	mov    $0x1,%eax
 8425db4:	81 c4 24 60 00 00    	add    $0x6024,%esp
 8425dba:	5b                   	pop    %ebx
 8425dbb:	5d                   	pop    %ebp
 8425dbc:	c3                   	ret
 8425dbd:	90                   	nop

```

```c
// DB_InsertQueryCounterLogdb::dispatch @ 0x8425cde

/* DB_InsertQueryCounterLogdb::dispatch(int, int, Stream*) */

bool DB_InsertQueryCounterLogdb::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  Stream *in_stack_00000010;
  undefined1 local_6019 [24577];
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  memset(local_6019,0,0x6001);
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::get_binary(in_stack_00000010,local_6019,local_18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  iVar1 = local_14;
  pcVar3 = (char *)MySQL::GetQueryCounter(local_10);
  cVar2 = CQueryCounter::RegisterQuery(pcVar3,(int)local_6019,iVar1);
  return cVar2 == '\x01';
}

```

