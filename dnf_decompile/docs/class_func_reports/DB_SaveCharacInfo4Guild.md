# DB_SaveCharacInfo4Guild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841b624 DB_SaveCharacInfo4Guild::dispatch  [0x0841b624-0x841b6df] ===
 841b624:	55                   	push   %ebp
 841b625:	89 e5                	mov    %esp,%ebp
 841b627:	53                   	push   %ebx
 841b628:	83 ec 34             	sub    $0x34,%esp
 841b62b:	8b 45 14             	mov    0x14(%ebp),%eax
 841b62e:	89 04 24             	mov    %eax,(%esp)
 841b631:	e8 8a 5b 03 00       	call   84511c0 <_ZN6Stream12GetOutBufferI25SIG_SAVE_CHARACINFO4GUILDEEPT_v>
 841b636:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841b639:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b63e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b645:	00 
 841b646:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 841b64d:	00 
 841b64e:	89 04 24             	mov    %eax,(%esp)
 841b651:	e8 e8 9b fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b656:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841b659:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b65e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b665:	00 
 841b666:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b66d:	00 
 841b66e:	89 04 24             	mov    %eax,(%esp)
 841b671:	e8 c8 9b fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b676:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841b679:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b67c:	8b 58 08             	mov    0x8(%eax),%ebx
 841b67f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b682:	8b 08                	mov    (%eax),%ecx
 841b684:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b687:	8b 50 10             	mov    0x10(%eax),%edx
 841b68a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b68d:	8b 40 0c             	mov    0xc(%eax),%eax
 841b690:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841b694:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841b698:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841b69c:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b6a0:	c7 44 24 04 94 b3 c4 	movl   $0x8c4b394,0x4(%esp)
 841b6a7:	08 
 841b6a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b6ab:	89 04 24             	mov    %eax,(%esp)
 841b6ae:	e8 0d 8b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b6b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b6ba:	00 
 841b6bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b6be:	89 04 24             	mov    %eax,(%esp)
 841b6c1:	e8 60 8c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b6c6:	83 f0 01             	xor    $0x1,%eax
 841b6c9:	84 c0                	test   %al,%al
 841b6cb:	74 07                	je     841b6d4 <_ZN23DB_SaveCharacInfo4Guild8dispatchEiiP6Stream+0xb0>
 841b6cd:	b8 00 00 00 00       	mov    $0x0,%eax
 841b6d2:	eb 05                	jmp    841b6d9 <_ZN23DB_SaveCharacInfo4Guild8dispatchEiiP6Stream+0xb5>
 841b6d4:	b8 01 00 00 00       	mov    $0x1,%eax
 841b6d9:	83 c4 34             	add    $0x34,%esp
 841b6dc:	5b                   	pop    %ebx
 841b6dd:	5d                   	pop    %ebp
 841b6de:	c3                   	ret
 841b6df:	90                   	nop

```

```c
// DB_SaveCharacInfo4Guild::dispatch @ 0x841b624

/* DB_SaveCharacInfo4Guild::dispatch(int, int, Stream*) */

bool DB_SaveCharacInfo4Guild::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_CHARACINFO4GUILD *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_CHARACINFO4GUILD>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(this,
                   "upDate guild_member set grow_type=%d,lev=%d where guild_id=%d and charac_no=%d",
                   *(undefined4 *)(pSVar2 + 0xc),*(undefined4 *)(pSVar2 + 0x10),
                   *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 8));
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

