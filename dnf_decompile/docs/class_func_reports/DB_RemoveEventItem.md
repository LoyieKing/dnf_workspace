# DB_RemoveEventItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841ab30 DB_RemoveEventItem::dispatch  [0x0841ab30-0x841abbb] ===
 841ab30:	55                   	push   %ebp
 841ab31:	89 e5                	mov    %esp,%ebp
 841ab33:	83 ec 28             	sub    $0x28,%esp
 841ab36:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841ab3b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841ab42:	00 
 841ab43:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841ab4a:	00 
 841ab4b:	89 04 24             	mov    %eax,(%esp)
 841ab4e:	e8 eb a6 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841ab53:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841ab56:	8b 45 14             	mov    0x14(%ebp),%eax
 841ab59:	89 04 24             	mov    %eax,(%esp)
 841ab5c:	e8 0f 65 03 00       	call   8451070 <_ZN6Stream12GetOutBufferI20SIG_REMOVE_EVENTITEMEEPT_v>
 841ab61:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841ab64:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 841ab6b:	eb 38                	jmp    841aba5 <_ZN18DB_RemoveEventItem8dispatchEiiP6Stream+0x75>
 841ab6d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 841ab70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841ab73:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 841ab77:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ab7b:	c7 44 24 04 84 ad c4 	movl   $0x8c4ad84,0x4(%esp)
 841ab82:	08 
 841ab83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841ab86:	89 04 24             	mov    %eax,(%esp)
 841ab89:	e8 32 96 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841ab8e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841ab95:	00 
 841ab96:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841ab99:	89 04 24             	mov    %eax,(%esp)
 841ab9c:	e8 85 97 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841aba1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 841aba5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841aba8:	8b 00                	mov    (%eax),%eax
 841abaa:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 841abad:	0f 9f c0             	setg   %al
 841abb0:	84 c0                	test   %al,%al
 841abb2:	75 b9                	jne    841ab6d <_ZN18DB_RemoveEventItem8dispatchEiiP6Stream+0x3d>
 841abb4:	b8 01 00 00 00       	mov    $0x1,%eax
 841abb9:	c9                   	leave
 841abba:	c3                   	ret
 841abbb:	90                   	nop

```

```c
// DB_RemoveEventItem::dispatch @ 0x841ab30

/* DB_RemoveEventItem::dispatch(int, int, Stream*) */

undefined4 DB_RemoveEventItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_REMOVE_EVENTITEM *pSVar1;
  Stream *in_stack_00000010;
  int local_10;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar1 = Stream::GetOutBuffer<SIG_REMOVE_EVENTITEM>(in_stack_00000010);
  for (local_10 = 0; local_10 < *(int *)pSVar1; local_10 = local_10 + 1) {
    MySQL::set_query(this,
                     "upDate charac_event_items set delete_flag=1,delete_time=now() where id=%u",
                     *(undefined4 *)(pSVar1 + local_10 * 4 + 4));
    MySQL::exec(this,true);
  }
  return 1;
}

```

