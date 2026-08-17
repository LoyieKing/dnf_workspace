# DB_SaveGameOption_ChattingEmoticon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08430412 DB_SaveGameOption_ChattingEmoticon::dispatch  [0x08430412-0x843056f] ===
 8430412:	55                   	push   %ebp
 8430413:	89 e5                	mov    %esp,%ebp
 8430415:	56                   	push   %esi
 8430416:	53                   	push   %ebx
 8430417:	83 ec 30             	sub    $0x30,%esp
 843041a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843041f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8430426:	00 
 8430427:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 843042e:	00 
 843042f:	89 04 24             	mov    %eax,(%esp)
 8430432:	e8 07 4e fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8430437:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843043a:	8b 45 14             	mov    0x14(%ebp),%eax
 843043d:	89 04 24             	mov    %eax,(%esp)
 8430440:	e8 cd 28 02 00       	call   8452d12 <_ZN6Stream12GetOutBufferI26SIG_SAVE_CHATTING_EMOTICONEEPT_v>
 8430445:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8430448:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843044f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8430452:	83 c0 04             	add    $0x4,%eax
 8430455:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8430458:	89 54 24 10          	mov    %edx,0x10(%esp)
 843045c:	c7 44 24 0c 10 02 00 	movl   $0x210,0xc(%esp)
 8430463:	00 
 8430464:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430468:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843046f:	00 
 8430470:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8430473:	89 04 24             	mov    %eax,(%esp)
 8430476:	e8 8b b8 fc ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 843047b:	83 f0 01             	xor    $0x1,%eax
 843047e:	84 c0                	test   %al,%al
 8430480:	74 0a                	je     843048c <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0x7a>
 8430482:	b8 00 00 00 00       	mov    $0x0,%eax
 8430487:	e9 dd 00 00 00       	jmp    8430569 <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0x157>
 843048c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843048f:	8b 00                	mov    (%eax),%eax
 8430491:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8430498:	00 
 8430499:	89 04 24             	mov    %eax,(%esp)
 843049c:	e8 aa 8b cd ff       	call   810904b <_Z14NumberToStringji>
 84304a1:	89 c3                	mov    %eax,%ebx
 84304a3:	8b 75 ec             	mov    -0x14(%ebp),%esi
 84304a6:	e8 7a b9 fc ff       	call   83fbe25 <_Z22get_member_game_optionv>
 84304ab:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84304af:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84304b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84304b7:	c7 44 24 04 bc 18 c5 	movl   $0x8c518bc,0x4(%esp)
 84304be:	08 
 84304bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84304c2:	89 04 24             	mov    %eax,(%esp)
 84304c5:	e8 f6 3c fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84304ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84304d1:	00 
 84304d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84304d5:	89 04 24             	mov    %eax,(%esp)
 84304d8:	e8 49 3e fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84304dd:	83 f0 01             	xor    $0x1,%eax
 84304e0:	84 c0                	test   %al,%al
 84304e2:	75 11                	jne    84304f5 <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0xe3>
 84304e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84304e7:	89 04 24             	mov    %eax,(%esp)
 84304ea:	e8 21 3e fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84304ef:	09 d0                	or     %edx,%eax
 84304f1:	85 c0                	test   %eax,%eax
 84304f3:	75 07                	jne    84304fc <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0xea>
 84304f5:	b8 01 00 00 00       	mov    $0x1,%eax
 84304fa:	eb 05                	jmp    8430501 <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0xef>
 84304fc:	b8 00 00 00 00       	mov    $0x0,%eax
 8430501:	84 c0                	test   %al,%al
 8430503:	74 5f                	je     8430564 <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0x152>
 8430505:	8b 75 ec             	mov    -0x14(%ebp),%esi
 8430508:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843050b:	8b 00                	mov    (%eax),%eax
 843050d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8430514:	00 
 8430515:	89 04 24             	mov    %eax,(%esp)
 8430518:	e8 2e 8b cd ff       	call   810904b <_Z14NumberToStringji>
 843051d:	89 c3                	mov    %eax,%ebx
 843051f:	e8 01 b9 fc ff       	call   83fbe25 <_Z22get_member_game_optionv>
 8430524:	89 74 24 10          	mov    %esi,0x10(%esp)
 8430528:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843052c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430530:	c7 44 24 04 f0 18 c5 	movl   $0x8c518f0,0x4(%esp)
 8430537:	08 
 8430538:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843053b:	89 04 24             	mov    %eax,(%esp)
 843053e:	e8 7d 3c fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430543:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843054a:	00 
 843054b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843054e:	89 04 24             	mov    %eax,(%esp)
 8430551:	e8 d0 3d fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430556:	83 f0 01             	xor    $0x1,%eax
 8430559:	84 c0                	test   %al,%al
 843055b:	74 07                	je     8430564 <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0x152>
 843055d:	b8 00 00 00 00       	mov    $0x0,%eax
 8430562:	eb 05                	jmp    8430569 <_ZN34DB_SaveGameOption_ChattingEmoticon8dispatchEiiP6Stream+0x157>
 8430564:	b8 01 00 00 00       	mov    $0x1,%eax
 8430569:	83 c4 30             	add    $0x30,%esp
 843056c:	5b                   	pop    %ebx
 843056d:	5e                   	pop    %esi
 843056e:	5d                   	pop    %ebp
 843056f:	c3                   	ret

```

```c
// DB_SaveGameOption_ChattingEmoticon::dispatch @ 0x8430412

/* DB_SaveGameOption_ChattingEmoticon::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_ChattingEmoticon::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  char *local_18;
  MySQL *local_14;
  SIG_SAVE_CHATTING_EMOTICON *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_10 = Stream::GetOutBuffer<SIG_SAVE_CHATTING_EMOTICON>(in_stack_00000010);
  local_18 = (char *)0x0;
  cVar3 = put_compressed_blob_data(local_14,0,(char *)(local_10 + 4),0x210,&local_18);
  if (cVar3 != '\x01') {
    return 0;
  }
  uVar4 = NumberToString(*(uint *)local_10,0);
  pcVar2 = local_18;
  uVar5 = get_member_game_option();
  MySQL::set_query(local_14,"upDate %s set shortcut_emoticon=\'%s\' where m_id=%s",uVar5,pcVar2,
                   uVar4);
  cVar3 = MySQL::exec(local_14,true);
  if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  pcVar2 = local_18;
  if (bVar1) {
    uVar4 = NumberToString(*(uint *)local_10,0);
    uVar5 = get_member_game_option();
    MySQL::set_query(local_14,"inSert into %s(m_id, shortcut_emoticon) values(%s,\'%s\')",uVar5,
                     uVar4,pcVar2);
    cVar3 = MySQL::exec(local_14,true);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

