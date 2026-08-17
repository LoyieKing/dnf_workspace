# DB_UpdateCreatureItemLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08439aba DB_UpdateCreatureItemLock::dispatch  [0x08439aba-0x8439b4d] ===
 8439aba:	55                   	push   %ebp
 8439abb:	89 e5                	mov    %esp,%ebp
 8439abd:	83 ec 28             	sub    $0x28,%esp
 8439ac0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8439ac5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8439acc:	00 
 8439acd:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8439ad4:	00 
 8439ad5:	89 04 24             	mov    %eax,(%esp)
 8439ad8:	e8 61 b7 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8439add:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8439ae0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439ae3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439ae7:	8b 45 14             	mov    0x14(%ebp),%eax
 8439aea:	89 04 24             	mov    %eax,(%esp)
 8439aed:	e8 d2 2a 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8439af2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439af5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439af9:	8b 45 14             	mov    0x14(%ebp),%eax
 8439afc:	89 04 24             	mov    %eax,(%esp)
 8439aff:	e8 c0 2a 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8439b04:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8439b07:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8439b0a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8439b0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439b12:	c7 44 24 04 d4 48 c5 	movl   $0x8c548d4,0x4(%esp)
 8439b19:	08 
 8439b1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439b1d:	89 04 24             	mov    %eax,(%esp)
 8439b20:	e8 9b a6 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439b25:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439b2c:	00 
 8439b2d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439b30:	89 04 24             	mov    %eax,(%esp)
 8439b33:	e8 ee a7 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439b38:	83 f0 01             	xor    $0x1,%eax
 8439b3b:	84 c0                	test   %al,%al
 8439b3d:	74 07                	je     8439b46 <_ZN25DB_UpdateCreatureItemLock8dispatchEiiP6Stream+0x8c>
 8439b3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8439b44:	eb 05                	jmp    8439b4b <_ZN25DB_UpdateCreatureItemLock8dispatchEiiP6Stream+0x91>
 8439b46:	b8 01 00 00 00       	mov    $0x1,%eax
 8439b4b:	c9                   	leave
 8439b4c:	c3                   	ret
 8439b4d:	90                   	nop

```

```c
// DB_UpdateCreatureItemLock::dispatch @ 0x8439aba

/* DB_UpdateCreatureItemLock::dispatch(int, int, Stream*) */

bool DB_UpdateCreatureItemLock::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  MySQL::set_query(local_10,"upDate creature_items set item_lock_key=%d where ui_id=%d",local_18,
                   local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

