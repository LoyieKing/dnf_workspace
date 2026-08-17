# DB_ReqSaveCrazyLevelupEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842527a DB_ReqSaveCrazyLevelupEvent::dispatch  [0x0842527a-0x8425373] ===
 842527a:	55                   	push   %ebp
 842527b:	89 e5                	mov    %esp,%ebp
 842527d:	56                   	push   %esi
 842527e:	53                   	push   %ebx
 842527f:	83 ec 30             	sub    $0x30,%esp
 8425282:	8b 45 14             	mov    0x14(%ebp),%eax
 8425285:	89 04 24             	mov    %eax,(%esp)
 8425288:	e8 b5 cc 02 00       	call   8451f42 <_ZN6Stream12GetOutBufferI28SIG_SAVE_CRAZY_LEVELUP_EVENTEEPT_v>
 842528d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8425290:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8425295:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842529c:	00 
 842529d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84252a4:	00 
 84252a5:	89 04 24             	mov    %eax,(%esp)
 84252a8:	e8 91 ff fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84252ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84252b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84252b3:	8b 70 09             	mov    0x9(%eax),%esi
 84252b6:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 84252b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84252bc:	8b 40 05             	mov    0x5(%eax),%eax
 84252bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84252c6:	00 
 84252c7:	89 04 24             	mov    %eax,(%esp)
 84252ca:	e8 7c 3d ce ff       	call   810904b <_Z14NumberToStringji>
 84252cf:	89 74 24 10          	mov    %esi,0x10(%esp)
 84252d3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84252d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84252db:	c7 44 24 04 14 e4 c4 	movl   $0x8c4e414,0x4(%esp)
 84252e2:	08 
 84252e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84252e6:	89 04 24             	mov    %eax,(%esp)
 84252e9:	e8 d2 ee fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84252ee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84252f5:	00 
 84252f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84252f9:	89 04 24             	mov    %eax,(%esp)
 84252fc:	e8 25 f0 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8425301:	83 f0 01             	xor    $0x1,%eax
 8425304:	84 c0                	test   %al,%al
 8425306:	74 5f                	je     8425367 <_ZN27DB_ReqSaveCrazyLevelupEvent8dispatchEiiP6Stream+0xed>
 8425308:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842530b:	8b 70 09             	mov    0x9(%eax),%esi
 842530e:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8425311:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8425314:	8b 40 05             	mov    0x5(%eax),%eax
 8425317:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842531e:	00 
 842531f:	89 04 24             	mov    %eax,(%esp)
 8425322:	e8 24 3d ce ff       	call   810904b <_Z14NumberToStringji>
 8425327:	89 74 24 10          	mov    %esi,0x10(%esp)
 842532b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842532f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8425333:	c7 44 24 04 78 e4 c4 	movl   $0x8c4e478,0x4(%esp)
 842533a:	08 
 842533b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842533e:	89 04 24             	mov    %eax,(%esp)
 8425341:	e8 7a ee fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8425346:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842534d:	00 
 842534e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8425351:	89 04 24             	mov    %eax,(%esp)
 8425354:	e8 cd ef fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8425359:	83 f0 01             	xor    $0x1,%eax
 842535c:	84 c0                	test   %al,%al
 842535e:	74 07                	je     8425367 <_ZN27DB_ReqSaveCrazyLevelupEvent8dispatchEiiP6Stream+0xed>
 8425360:	b8 00 00 00 00       	mov    $0x0,%eax
 8425365:	eb 05                	jmp    842536c <_ZN27DB_ReqSaveCrazyLevelupEvent8dispatchEiiP6Stream+0xf2>
 8425367:	b8 01 00 00 00       	mov    $0x1,%eax
 842536c:	83 c4 30             	add    $0x30,%esp
 842536f:	5b                   	pop    %ebx
 8425370:	5e                   	pop    %esi
 8425371:	5d                   	pop    %ebp
 8425372:	c3                   	ret
 8425373:	90                   	nop

```

```c
// DB_ReqSaveCrazyLevelupEvent::dispatch @ 0x842527a

/* DB_ReqSaveCrazyLevelupEvent::dispatch(int, int, Stream*) */

undefined4 DB_ReqSaveCrazyLevelupEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  SIG_SAVE_CRAZY_LEVELUP_EVENT *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_CRAZY_LEVELUP_EVENT>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar1 = *(undefined4 *)(pSVar3 + 9);
  uVar4 = NumberToString(*(uint *)(pSVar3 + 5),0);
  MySQL::set_query(this,
                   "inSert into log_fighter_event(m_id,event_id,charac_no,occ_time,occ_cnt) values(%s,\'%s\',%d,now(),1)"
                   ,uVar4,pSVar3,uVar1);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 != '\x01') {
    uVar1 = *(undefined4 *)(pSVar3 + 9);
    uVar4 = NumberToString(*(uint *)(pSVar3 + 5),0);
    MySQL::set_query(this,
                     "upDate log_fighter_event set occ_time=now(),occ_cnt=occ_cnt+1 where m_id=%s and event_id=\'%s\' and charac_no=%d"
                     ,uVar4,pSVar3,uVar1);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

