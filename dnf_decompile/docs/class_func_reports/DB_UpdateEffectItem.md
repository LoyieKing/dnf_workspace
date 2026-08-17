# DB_UpdateEffectItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08430676 DB_UpdateEffectItem::dispatch  [0x08430676-0x843077b] ===
 8430676:	55                   	push   %ebp
 8430677:	89 e5                	mov    %esp,%ebp
 8430679:	83 ec 28             	sub    $0x28,%esp
 843067c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8430681:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8430688:	00 
 8430689:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8430690:	00 
 8430691:	89 04 24             	mov    %eax,(%esp)
 8430694:	e8 a5 4b fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8430699:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843069c:	8b 45 14             	mov    0x14(%ebp),%eax
 843069f:	89 04 24             	mov    %eax,(%esp)
 84306a2:	e8 bf 26 02 00       	call   8452d66 <_ZN6Stream12GetOutBufferI38SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFOEEPT_v>
 84306a7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84306aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84306ad:	83 c0 04             	add    $0x4,%eax
 84306b0:	c7 44 24 0c 94 01 00 	movl   $0x194,0xc(%esp)
 84306b7:	00 
 84306b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84306bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84306c3:	00 
 84306c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84306c7:	89 04 24             	mov    %eax,(%esp)
 84306ca:	e8 5b 3e fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84306cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84306d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84306d5:	8b 00                	mov    (%eax),%eax
 84306d7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84306db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84306de:	89 44 24 08          	mov    %eax,0x8(%esp)
 84306e2:	c7 44 24 04 b4 19 c5 	movl   $0x8c519b4,0x4(%esp)
 84306e9:	08 
 84306ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84306ed:	89 04 24             	mov    %eax,(%esp)
 84306f0:	e8 cb 3a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84306f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84306fc:	00 
 84306fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8430700:	89 04 24             	mov    %eax,(%esp)
 8430703:	e8 1e 3c fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430708:	83 f0 01             	xor    $0x1,%eax
 843070b:	84 c0                	test   %al,%al
 843070d:	75 11                	jne    8430720 <_ZN19DB_UpdateEffectItem8dispatchEiiP6Stream+0xaa>
 843070f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8430712:	89 04 24             	mov    %eax,(%esp)
 8430715:	e8 f6 3b fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843071a:	09 d0                	or     %edx,%eax
 843071c:	85 c0                	test   %eax,%eax
 843071e:	75 07                	jne    8430727 <_ZN19DB_UpdateEffectItem8dispatchEiiP6Stream+0xb1>
 8430720:	b8 01 00 00 00       	mov    $0x1,%eax
 8430725:	eb 05                	jmp    843072c <_ZN19DB_UpdateEffectItem8dispatchEiiP6Stream+0xb6>
 8430727:	b8 00 00 00 00       	mov    $0x0,%eax
 843072c:	84 c0                	test   %al,%al
 843072e:	74 44                	je     8430774 <_ZN19DB_UpdateEffectItem8dispatchEiiP6Stream+0xfe>
 8430730:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8430733:	8b 00                	mov    (%eax),%eax
 8430735:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8430738:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843073c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430740:	c7 44 24 04 f4 19 c5 	movl   $0x8c519f4,0x4(%esp)
 8430747:	08 
 8430748:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843074b:	89 04 24             	mov    %eax,(%esp)
 843074e:	e8 6d 3a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430753:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843075a:	00 
 843075b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843075e:	89 04 24             	mov    %eax,(%esp)
 8430761:	e8 c0 3b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430766:	83 f0 01             	xor    $0x1,%eax
 8430769:	84 c0                	test   %al,%al
 843076b:	74 07                	je     8430774 <_ZN19DB_UpdateEffectItem8dispatchEiiP6Stream+0xfe>
 843076d:	b8 00 00 00 00       	mov    $0x0,%eax
 8430772:	eb 05                	jmp    8430779 <_ZN19DB_UpdateEffectItem8dispatchEiiP6Stream+0x103>
 8430774:	b8 01 00 00 00       	mov    $0x1,%eax
 8430779:	c9                   	leave
 843077a:	c3                   	ret
 843077b:	90                   	nop

```

```c
// DB_UpdateEffectItem::dispatch @ 0x8430676

/* DB_UpdateEffectItem::dispatch(int, int, Stream*) */

undefined4 DB_UpdateEffectItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFO *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFO>(in_stack_00000010);
  uVar4 = MySQL::blob_to_str(this,0,pSVar3 + 4,0x194);
  MySQL::set_query(this,"upDate charac_item_stat set effect_item=\'%s\' where charac_no=%u",uVar4,
                   *(undefined4 *)pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,"inSert into charac_item_stat(charac_no, effect_item) values(%u, \'%s\')",
                     *(undefined4 *)pSVar3,uVar4);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

