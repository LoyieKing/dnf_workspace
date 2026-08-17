# DB_UpdateAvatarItemLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08439b4e DB_UpdateAvatarItemLock::dispatch  [0x08439b4e-0x8439be1] ===
 8439b4e:	55                   	push   %ebp
 8439b4f:	89 e5                	mov    %esp,%ebp
 8439b51:	83 ec 28             	sub    $0x28,%esp
 8439b54:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8439b59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8439b60:	00 
 8439b61:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8439b68:	00 
 8439b69:	89 04 24             	mov    %eax,(%esp)
 8439b6c:	e8 cd b6 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8439b71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8439b74:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439b77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439b7b:	8b 45 14             	mov    0x14(%ebp),%eax
 8439b7e:	89 04 24             	mov    %eax,(%esp)
 8439b81:	e8 3e 2a 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8439b86:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8439b89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439b8d:	8b 45 14             	mov    0x14(%ebp),%eax
 8439b90:	89 04 24             	mov    %eax,(%esp)
 8439b93:	e8 2c 2a 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8439b98:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8439b9b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8439b9e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8439ba2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439ba6:	c7 44 24 04 10 49 c5 	movl   $0x8c54910,0x4(%esp)
 8439bad:	08 
 8439bae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439bb1:	89 04 24             	mov    %eax,(%esp)
 8439bb4:	e8 07 a6 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439bb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439bc0:	00 
 8439bc1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439bc4:	89 04 24             	mov    %eax,(%esp)
 8439bc7:	e8 5a a7 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439bcc:	83 f0 01             	xor    $0x1,%eax
 8439bcf:	84 c0                	test   %al,%al
 8439bd1:	74 07                	je     8439bda <_ZN23DB_UpdateAvatarItemLock8dispatchEiiP6Stream+0x8c>
 8439bd3:	b8 00 00 00 00       	mov    $0x0,%eax
 8439bd8:	eb 05                	jmp    8439bdf <_ZN23DB_UpdateAvatarItemLock8dispatchEiiP6Stream+0x91>
 8439bda:	b8 01 00 00 00       	mov    $0x1,%eax
 8439bdf:	c9                   	leave
 8439be0:	c3                   	ret
 8439be1:	90                   	nop

```

```c
// DB_UpdateAvatarItemLock::dispatch @ 0x8439b4e

/* DB_UpdateAvatarItemLock::dispatch(int, int, Stream*) */

bool DB_UpdateAvatarItemLock::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  MySQL::set_query(local_10,"upDate user_items set item_lock_key=%d where ui_id=%d",local_18,
                   local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

