# DB_UpdateMemberPlayInfoPcRoom

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08439be2 DB_UpdateMemberPlayInfoPcRoom::dispatch  [0x08439be2-0x8439c6b] ===
 8439be2:	55                   	push   %ebp
 8439be3:	89 e5                	mov    %esp,%ebp
 8439be5:	83 ec 28             	sub    $0x28,%esp
 8439be8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8439bed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8439bf4:	00 
 8439bf5:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8439bfc:	00 
 8439bfd:	89 04 24             	mov    %eax,(%esp)
 8439c00:	e8 39 b6 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8439c05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8439c08:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8439c0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439c0f:	8b 45 14             	mov    0x14(%ebp),%eax
 8439c12:	89 04 24             	mov    %eax,(%esp)
 8439c15:	e8 7c 2b 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8439c1a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8439c1d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8439c24:	00 
 8439c25:	89 04 24             	mov    %eax,(%esp)
 8439c28:	e8 1e f4 cc ff       	call   810904b <_Z14NumberToStringji>
 8439c2d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439c31:	c7 44 24 04 48 49 c5 	movl   $0x8c54948,0x4(%esp)
 8439c38:	08 
 8439c39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439c3c:	89 04 24             	mov    %eax,(%esp)
 8439c3f:	e8 7c a5 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439c44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439c4b:	00 
 8439c4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439c4f:	89 04 24             	mov    %eax,(%esp)
 8439c52:	e8 cf a6 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439c57:	83 f0 01             	xor    $0x1,%eax
 8439c5a:	84 c0                	test   %al,%al
 8439c5c:	74 07                	je     8439c65 <_ZN29DB_UpdateMemberPlayInfoPcRoom8dispatchEiiP6Stream+0x83>
 8439c5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8439c63:	eb 05                	jmp    8439c6a <_ZN29DB_UpdateMemberPlayInfoPcRoom8dispatchEiiP6Stream+0x88>
 8439c65:	b8 01 00 00 00       	mov    $0x1,%eax
 8439c6a:	c9                   	leave
 8439c6b:	c3                   	ret

```

```c
// DB_UpdateMemberPlayInfoPcRoom::dispatch @ 0x8439be2

/* DB_UpdateMemberPlayInfoPcRoom::dispatch(int, int, Stream*) */

bool DB_UpdateMemberPlayInfoPcRoom::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_play_info set pcbang_flag=1 where occ_date=now() and m_id=%s",
                   uVar2);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}

```

