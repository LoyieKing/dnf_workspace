# DB_MailBox_Req_Delete

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841f084 DB_MailBox_Req_Delete::dispatch  [0x0841f084-0x841f159] ===
 841f084:	55                   	push   %ebp
 841f085:	89 e5                	mov    %esp,%ebp
 841f087:	83 ec 28             	sub    $0x28,%esp
 841f08a:	8b 45 14             	mov    0x14(%ebp),%eax
 841f08d:	89 04 24             	mov    %eax,(%esp)
 841f090:	e8 15 29 03 00       	call   84519aa <_ZN6Stream12GetOutBufferI20SIG_MAILBOX_DEL_MAILEEPT_v>
 841f095:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841f098:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841f09d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841f0a4:	00 
 841f0a5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841f0ac:	00 
 841f0ad:	89 04 24             	mov    %eax,(%esp)
 841f0b0:	e8 89 61 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841f0b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841f0b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f0bb:	8b 00                	mov    (%eax),%eax
 841f0bd:	85 c0                	test   %eax,%eax
 841f0bf:	75 0a                	jne    841f0cb <_ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream+0x47>
 841f0c1:	b8 00 00 00 00       	mov    $0x0,%eax
 841f0c6:	e9 8d 00 00 00       	jmp    841f158 <_ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream+0xd4>
 841f0cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f0ce:	8b 00                	mov    (%eax),%eax
 841f0d0:	83 f8 01             	cmp    $0x1,%eax
 841f0d3:	75 29                	jne    841f0fe <_ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream+0x7a>
 841f0d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f0d8:	8b 50 04             	mov    0x4(%eax),%edx
 841f0db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f0de:	8b 40 54             	mov    0x54(%eax),%eax
 841f0e1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841f0e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f0e9:	c7 44 24 04 90 c1 c4 	movl   $0x8c4c190,0x4(%esp)
 841f0f0:	08 
 841f0f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841f0f4:	89 04 24             	mov    %eax,(%esp)
 841f0f7:	e8 c4 50 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841f0fc:	eb 34                	jmp    841f132 <_ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream+0xae>
 841f0fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f101:	c7 44 24 04 40 c2 43 	movl   $0x943c240,0x4(%esp)
 841f108:	09 
 841f109:	89 04 24             	mov    %eax,(%esp)
 841f10c:	e8 57 08 fe ff       	call   83ff968 <_Z15getList2inQueryPjPc>
 841f111:	8b 55 f0             	mov    -0x10(%ebp),%edx
 841f114:	8b 52 54             	mov    0x54(%edx),%edx
 841f117:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841f11b:	89 54 24 08          	mov    %edx,0x8(%esp)
 841f11f:	c7 44 24 04 d8 c1 c4 	movl   $0x8c4c1d8,0x4(%esp)
 841f126:	08 
 841f127:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841f12a:	89 04 24             	mov    %eax,(%esp)
 841f12d:	e8 8e 50 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841f132:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f139:	00 
 841f13a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841f13d:	89 04 24             	mov    %eax,(%esp)
 841f140:	e8 e1 51 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841f145:	83 f0 01             	xor    $0x1,%eax
 841f148:	84 c0                	test   %al,%al
 841f14a:	74 07                	je     841f153 <_ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream+0xcf>
 841f14c:	b8 00 00 00 00       	mov    $0x0,%eax
 841f151:	eb 05                	jmp    841f158 <_ZN21DB_MailBox_Req_Delete8dispatchEiiP6Stream+0xd4>
 841f153:	b8 01 00 00 00       	mov    $0x1,%eax
 841f158:	c9                   	leave
 841f159:	c3                   	ret

```

```c
// DB_MailBox_Req_Delete::dispatch @ 0x841f084

/* DB_MailBox_Req_Delete::dispatch(int, int, Stream*) */

undefined4 DB_MailBox_Req_Delete::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_MAILBOX_DEL_MAIL *pSVar2;
  MySQL *this;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<SIG_MAILBOX_DEL_MAIL>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (*(int *)pSVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)pSVar2 == 1) {
      MySQL::set_query(this,"upDate postal set delete_flag=%d,receive_time=now() where postal_id=%d"
                       ,*(undefined4 *)(pSVar2 + 0x54),*(undefined4 *)(pSVar2 + 4));
    }
    else {
      uVar3 = getList2inQuery((uint *)pSVar2,dispatch(int,int,Stream*)::strQuery);
      MySQL::set_query(this,"upDate postal set delete_flag=%d,receive_time=now() where postal_id %s"
                       ,*(undefined4 *)(pSVar2 + 0x54),uVar3);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

