# DB_ForbidUserToPlay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08421af4 DB_ForbidUserToPlay::dispatch  [0x08421af4-0x8421bcb] ===
 8421af4:	55                   	push   %ebp
 8421af5:	89 e5                	mov    %esp,%ebp
 8421af7:	83 ec 38             	sub    $0x38,%esp
 8421afa:	8b 45 14             	mov    0x14(%ebp),%eax
 8421afd:	89 04 24             	mov    %eax,(%esp)
 8421b00:	e8 49 00 03 00       	call   8451b4e <_ZN6Stream12GetOutBufferI23SIG_FORBID_USER_TO_PLAYEEPT_v>
 8421b05:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8421b08:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8421b0d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8421b14:	00 
 8421b15:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8421b1c:	00 
 8421b1d:	89 04 24             	mov    %eax,(%esp)
 8421b20:	e8 19 37 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8421b25:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8421b28:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8421b2f:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8421b33:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8421b3a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8421b3d:	8b 00                	mov    (%eax),%eax
 8421b3f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8421b42:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8421b45:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8421b49:	88 45 f3             	mov    %al,-0xd(%ebp)
 8421b4c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8421b4f:	8b 40 05             	mov    0x5(%eax),%eax
 8421b52:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8421b55:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8421b59:	83 f0 01             	xor    $0x1,%eax
 8421b5c:	84 c0                	test   %al,%al
 8421b5e:	75 06                	jne    8421b66 <_ZN19DB_ForbidUserToPlay8dispatchEiiP6Stream+0x72>
 8421b60:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8421b64:	75 1c                	jne    8421b82 <_ZN19DB_ForbidUserToPlay8dispatchEiiP6Stream+0x8e>
 8421b66:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8421b69:	89 44 24 08          	mov    %eax,0x8(%esp)
 8421b6d:	c7 44 24 04 c0 cf c4 	movl   $0x8c4cfc0,0x4(%esp)
 8421b74:	08 
 8421b75:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8421b78:	89 04 24             	mov    %eax,(%esp)
 8421b7b:	e8 40 26 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8421b80:	eb 21                	jmp    8421ba3 <_ZN19DB_ForbidUserToPlay8dispatchEiiP6Stream+0xaf>
 8421b82:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8421b85:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8421b89:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8421b8c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8421b90:	c7 44 24 04 18 d0 c4 	movl   $0x8c4d018,0x4(%esp)
 8421b97:	08 
 8421b98:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8421b9b:	89 04 24             	mov    %eax,(%esp)
 8421b9e:	e8 1d 26 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8421ba3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421baa:	00 
 8421bab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8421bae:	89 04 24             	mov    %eax,(%esp)
 8421bb1:	e8 70 27 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8421bb6:	83 f0 01             	xor    $0x1,%eax
 8421bb9:	84 c0                	test   %al,%al
 8421bbb:	74 07                	je     8421bc4 <_ZN19DB_ForbidUserToPlay8dispatchEiiP6Stream+0xd0>
 8421bbd:	b8 00 00 00 00       	mov    $0x0,%eax
 8421bc2:	eb 05                	jmp    8421bc9 <_ZN19DB_ForbidUserToPlay8dispatchEiiP6Stream+0xd5>
 8421bc4:	b8 01 00 00 00       	mov    $0x1,%eax
 8421bc9:	c9                   	leave
 8421bca:	c3                   	ret
 8421bcb:	90                   	nop

```

```c
// DB_ForbidUserToPlay::dispatch @ 0x8421af4

/* DB_ForbidUserToPlay::dispatch(int, int, Stream*) */

bool DB_ForbidUserToPlay::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_FORBID_USER_TO_PLAY *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_FORBID_USER_TO_PLAY>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if ((pSVar2[4] == (SIG_FORBID_USER_TO_PLAY)0x1) && (*(int *)(pSVar2 + 5) != 0)) {
    MySQL::set_query(this,
                     "upDate charac_stat set forbidden_to_play=1, forbidden_due_to = date_add(now(), interval %d day) where charac_no = %d"
                     ,*(int *)(pSVar2 + 5),*(undefined4 *)pSVar2);
  }
  else {
    MySQL::set_query(this,
                     "upDate charac_stat set forbidden_to_play=0, forbidden_due_to= 0 where charac_no = %d"
                     ,*(undefined4 *)pSVar2);
  }
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

