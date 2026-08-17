# DB_UpdateCoolTimeItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08430570 DB_UpdateCoolTimeItem::dispatch  [0x08430570-0x8430675] ===
 8430570:	55                   	push   %ebp
 8430571:	89 e5                	mov    %esp,%ebp
 8430573:	83 ec 28             	sub    $0x28,%esp
 8430576:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843057b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8430582:	00 
 8430583:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843058a:	00 
 843058b:	89 04 24             	mov    %eax,(%esp)
 843058e:	e8 ab 4c fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8430593:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8430596:	8b 45 14             	mov    0x14(%ebp),%eax
 8430599:	89 04 24             	mov    %eax,(%esp)
 843059c:	e8 c5 27 02 00       	call   8452d66 <_ZN6Stream12GetOutBufferI38SIG_SAVE_AND_LOAD_CONTINUOUS_ITEM_INFOEEPT_v>
 84305a1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84305a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84305a7:	83 c0 04             	add    $0x4,%eax
 84305aa:	c7 44 24 0c 94 01 00 	movl   $0x194,0xc(%esp)
 84305b1:	00 
 84305b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84305b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84305bd:	00 
 84305be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84305c1:	89 04 24             	mov    %eax,(%esp)
 84305c4:	e8 61 3f fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84305c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84305cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84305cf:	8b 00                	mov    (%eax),%eax
 84305d1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84305d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84305d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84305dc:	c7 44 24 04 28 19 c5 	movl   $0x8c51928,0x4(%esp)
 84305e3:	08 
 84305e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84305e7:	89 04 24             	mov    %eax,(%esp)
 84305ea:	e8 d1 3b fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84305ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84305f6:	00 
 84305f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84305fa:	89 04 24             	mov    %eax,(%esp)
 84305fd:	e8 24 3d fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430602:	83 f0 01             	xor    $0x1,%eax
 8430605:	84 c0                	test   %al,%al
 8430607:	75 11                	jne    843061a <_ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream+0xaa>
 8430609:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843060c:	89 04 24             	mov    %eax,(%esp)
 843060f:	e8 fc 3c fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8430614:	09 d0                	or     %edx,%eax
 8430616:	85 c0                	test   %eax,%eax
 8430618:	75 07                	jne    8430621 <_ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream+0xb1>
 843061a:	b8 01 00 00 00       	mov    $0x1,%eax
 843061f:	eb 05                	jmp    8430626 <_ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream+0xb6>
 8430621:	b8 00 00 00 00       	mov    $0x0,%eax
 8430626:	84 c0                	test   %al,%al
 8430628:	74 44                	je     843066e <_ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream+0xfe>
 843062a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843062d:	8b 00                	mov    (%eax),%eax
 843062f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8430632:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8430636:	89 44 24 08          	mov    %eax,0x8(%esp)
 843063a:	c7 44 24 04 6c 19 c5 	movl   $0x8c5196c,0x4(%esp)
 8430641:	08 
 8430642:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8430645:	89 04 24             	mov    %eax,(%esp)
 8430648:	e8 73 3b fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843064d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8430654:	00 
 8430655:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8430658:	89 04 24             	mov    %eax,(%esp)
 843065b:	e8 c6 3c fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430660:	83 f0 01             	xor    $0x1,%eax
 8430663:	84 c0                	test   %al,%al
 8430665:	74 07                	je     843066e <_ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream+0xfe>
 8430667:	b8 00 00 00 00       	mov    $0x0,%eax
 843066c:	eb 05                	jmp    8430673 <_ZN21DB_UpdateCoolTimeItem8dispatchEiiP6Stream+0x103>
 843066e:	b8 01 00 00 00       	mov    $0x1,%eax
 8430673:	c9                   	leave
 8430674:	c3                   	ret
 8430675:	90                   	nop

```

```c
// DB_UpdateCoolTimeItem::dispatch @ 0x8430570

/* DB_UpdateCoolTimeItem::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCoolTimeItem::dispatch(int param_1,int param_2,Stream *param_3)

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
  MySQL::set_query(this,"upDate charac_item_stat set cooltime_item=\'%s\' where charac_no=%u",uVar4,
                   *(undefined4 *)pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into charac_item_stat(charac_no, cooltime_item) values(%u, \'%s\')",
                     *(undefined4 *)pSVar3,uVar4);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

