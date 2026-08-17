# DB_RemoveFeaturedGoodsIdx

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841b41a DB_RemoveFeaturedGoodsIdx::dispatch  [0x0841b41a-0x841b4bd] ===
 841b41a:	55                   	push   %ebp
 841b41b:	89 e5                	mov    %esp,%ebp
 841b41d:	56                   	push   %esi
 841b41e:	53                   	push   %ebx
 841b41f:	83 ec 30             	sub    $0x30,%esp
 841b422:	8b 45 14             	mov    0x14(%ebp),%eax
 841b425:	89 04 24             	mov    %eax,(%esp)
 841b428:	e8 eb 5c 03 00       	call   8451118 <_ZN6Stream12GetOutBufferI28SIG_REMOVE_FEATURED_GOODSIDXEEPT_v>
 841b42d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841b430:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b435:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b43c:	00 
 841b43d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 841b444:	00 
 841b445:	89 04 24             	mov    %eax,(%esp)
 841b448:	e8 f1 9d fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b44d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841b450:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b453:	8b 70 0c             	mov    0xc(%eax),%esi
 841b456:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b459:	8b 58 08             	mov    0x8(%eax),%ebx
 841b45c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b45f:	8b 00                	mov    (%eax),%eax
 841b461:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841b468:	00 
 841b469:	89 04 24             	mov    %eax,(%esp)
 841b46c:	e8 da db ce ff       	call   810904b <_Z14NumberToStringji>
 841b471:	89 74 24 10          	mov    %esi,0x10(%esp)
 841b475:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 841b479:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b47d:	c7 44 24 04 1c b2 c4 	movl   $0x8c4b21c,0x4(%esp)
 841b484:	08 
 841b485:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841b488:	89 04 24             	mov    %eax,(%esp)
 841b48b:	e8 30 8d fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b490:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b497:	00 
 841b498:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841b49b:	89 04 24             	mov    %eax,(%esp)
 841b49e:	e8 83 8e fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b4a3:	83 f0 01             	xor    $0x1,%eax
 841b4a6:	84 c0                	test   %al,%al
 841b4a8:	74 07                	je     841b4b1 <_ZN25DB_RemoveFeaturedGoodsIdx8dispatchEiiP6Stream+0x97>
 841b4aa:	b8 00 00 00 00       	mov    $0x0,%eax
 841b4af:	eb 05                	jmp    841b4b6 <_ZN25DB_RemoveFeaturedGoodsIdx8dispatchEiiP6Stream+0x9c>
 841b4b1:	b8 01 00 00 00       	mov    $0x1,%eax
 841b4b6:	83 c4 30             	add    $0x30,%esp
 841b4b9:	5b                   	pop    %ebx
 841b4ba:	5e                   	pop    %esi
 841b4bb:	5d                   	pop    %ebp
 841b4bc:	c3                   	ret
 841b4bd:	90                   	nop

```

```c
// DB_RemoveFeaturedGoodsIdx::dispatch @ 0x841b41a

/* DB_RemoveFeaturedGoodsIdx::dispatch(int, int, Stream*) */

bool DB_RemoveFeaturedGoodsIdx::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  SIG_REMOVE_FEATURED_GOODSIDX *pSVar4;
  MySQL *this;
  undefined4 uVar5;
  Stream *in_stack_00000010;
  
  pSVar4 = Stream::GetOutBuffer<SIG_REMOVE_FEATURED_GOODSIDX>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(undefined4 *)(pSVar4 + 0xc);
  uVar2 = *(undefined4 *)(pSVar4 + 8);
  uVar5 = NumberToString(*(uint *)pSVar4,0);
  MySQL::set_query(this,"deLete from dnf_event_entry where m_id=%s and event_id=%d and server_id=%d"
                   ,uVar5,uVar2,uVar1);
  cVar3 = MySQL::exec(this,true);
  return cVar3 == '\x01';
}

```

