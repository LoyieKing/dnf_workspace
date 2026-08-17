# DB_SaveGameOption_QuickChatting

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08430250 DB_SaveGameOption_QuickChatting::dispatch  [0x08430250-0x8430411] ===
 8430250:	55                   	push   %ebp
 8430251:	89 e5                	mov    %esp,%ebp
 8430253:	57                   	push   %edi
 8430254:	56                   	push   %esi
 8430255:	53                   	push   %ebx
 8430256:	81 ec 1c 03 00 00    	sub    $0x31c,%esp
 843025c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8430261:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8430268:	00 
 8430269:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8430270:	00 
 8430271:	89 04 24             	mov    %eax,(%esp)
 8430274:	e8 c5 4f fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8430279:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843027c:	8b 45 14             	mov    0x14(%ebp),%eax
 843027f:	89 04 24             	mov    %eax,(%esp)
 8430282:	e8 37 2a 02 00       	call   8452cbe <_ZN6Stream12GetOutBufferI30SIG_SAVE_GAME_OPTION_QUICKCHATEEPT_v>
 8430287:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843028a:	8d 9d 00 fd ff ff    	lea    -0x300(%ebp),%ebx
 8430290:	b8 00 00 00 00       	mov    $0x0,%eax
 8430295:	ba b7 00 00 00       	mov    $0xb7,%edx
 843029a:	89 df                	mov    %ebx,%edi
 843029c:	89 d1                	mov    %edx,%ecx
 843029e:	f3 ab                	rep stos %eax,%es:(%edi)
 84302a0:	c7 45 dc dc 02 00 00 	movl   $0x2dc,-0x24(%ebp)
 84302a7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84302aa:	83 c0 04             	add    $0x4,%eax
 84302ad:	c7 44 24 0c 58 02 00 	movl   $0x258,0xc(%esp)
 84302b4:	00 
 84302b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84302b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84302bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84302c0:	8d 85 00 fd ff ff    	lea    -0x300(%ebp),%eax
 84302c6:	89 04 24             	mov    %eax,(%esp)
 84302c9:	e8 51 1d 28 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 84302ce:	83 f0 01             	xor    $0x1,%eax
 84302d1:	84 c0                	test   %al,%al
 84302d3:	74 0a                	je     84302df <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x8f>
 84302d5:	b8 00 00 00 00       	mov    $0x0,%eax
 84302da:	e9 27 01 00 00       	jmp    8430406 <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x1b6>
 84302df:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84302e2:	8b 00                	mov    (%eax),%eax
 84302e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84302eb:	00 
 84302ec:	89 04 24             	mov    %eax,(%esp)
 84302ef:	e8 57 8d cd ff       	call   810904b <_Z14NumberToStringji>
 84302f4:	89 c6                	mov    %eax,%esi
 84302f6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84302f9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84302fd:	8d 85 00 fd ff ff    	lea    -0x300(%ebp),%eax
 8430303:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430307:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843030e:	00 
 843030f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8430312:	89 04 24             	mov    %eax,(%esp)
 8430315:	e8 10 42 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 843031a:	89 c3                	mov    %eax,%ebx
 843031c:	e8 04 bb fc ff       	call   83fbe25 <_Z22get_member_game_optionv>
 8430321:	89 74 24 10          	mov    %esi,0x10(%esp)
 8430325:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8430329:	89 44 24 08          	mov    %eax,0x8(%esp)
 843032d:	c7 44 24 04 60 18 c5 	movl   $0x8c51860,0x4(%esp)
 8430334:	08 
 8430335:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8430338:	89 04 24             	mov    %eax,(%esp)
 843033b:	e8 80 3e fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430340:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8430347:	00 
 8430348:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843034b:	89 04 24             	mov    %eax,(%esp)
 843034e:	e8 d3 3f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430353:	83 f0 01             	xor    $0x1,%eax
 8430356:	84 c0                	test   %al,%al
 8430358:	75 11                	jne    843036b <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x11b>
 843035a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843035d:	89 04 24             	mov    %eax,(%esp)
 8430360:	e8 ab 3f fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8430365:	09 d0                	or     %edx,%eax
 8430367:	85 c0                	test   %eax,%eax
 8430369:	75 07                	jne    8430372 <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x122>
 843036b:	b8 01 00 00 00       	mov    $0x1,%eax
 8430370:	eb 05                	jmp    8430377 <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x127>
 8430372:	b8 00 00 00 00       	mov    $0x0,%eax
 8430377:	84 c0                	test   %al,%al
 8430379:	0f 84 82 00 00 00    	je     8430401 <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x1b1>
 843037f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8430382:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8430386:	8d 85 00 fd ff ff    	lea    -0x300(%ebp),%eax
 843038c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430390:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8430397:	00 
 8430398:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843039b:	89 04 24             	mov    %eax,(%esp)
 843039e:	e8 87 41 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84303a3:	89 c6                	mov    %eax,%esi
 84303a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84303a8:	8b 00                	mov    (%eax),%eax
 84303aa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84303b1:	00 
 84303b2:	89 04 24             	mov    %eax,(%esp)
 84303b5:	e8 91 8c cd ff       	call   810904b <_Z14NumberToStringji>
 84303ba:	89 c3                	mov    %eax,%ebx
 84303bc:	e8 64 ba fc ff       	call   83fbe25 <_Z22get_member_game_optionv>
 84303c1:	89 74 24 10          	mov    %esi,0x10(%esp)
 84303c5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84303c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84303cd:	c7 44 24 04 8c 18 c5 	movl   $0x8c5188c,0x4(%esp)
 84303d4:	08 
 84303d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84303d8:	89 04 24             	mov    %eax,(%esp)
 84303db:	e8 e0 3d fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84303e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84303e7:	00 
 84303e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84303eb:	89 04 24             	mov    %eax,(%esp)
 84303ee:	e8 33 3f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84303f3:	83 f0 01             	xor    $0x1,%eax
 84303f6:	84 c0                	test   %al,%al
 84303f8:	74 07                	je     8430401 <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x1b1>
 84303fa:	b8 00 00 00 00       	mov    $0x0,%eax
 84303ff:	eb 05                	jmp    8430406 <_ZN31DB_SaveGameOption_QuickChatting8dispatchEiiP6Stream+0x1b6>
 8430401:	b8 01 00 00 00       	mov    $0x1,%eax
 8430406:	81 c4 1c 03 00 00    	add    $0x31c,%esp
 843040c:	5b                   	pop    %ebx
 843040d:	5e                   	pop    %esi
 843040e:	5f                   	pop    %edi
 843040f:	5d                   	pop    %ebp
 8430410:	c3                   	ret
 8430411:	90                   	nop

```

```c
// DB_SaveGameOption_QuickChatting::dispatch @ 0x8430250

/* DB_SaveGameOption_QuickChatting::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_QuickChatting::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_304 [732];
  uint local_28;
  MySQL *local_24;
  SIG_SAVE_GAME_OPTION_QUICKCHAT *local_20;
  
  bVar8 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_20 = Stream::GetOutBuffer<SIG_SAVE_GAME_OPTION_QUICKCHAT>(in_stack_00000010);
  pcVar7 = local_304;
  for (iVar6 = 0xb7; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
  }
  local_28 = 0x2dc;
  cVar2 = compress_zip(local_304,&local_28,(char *)(local_20 + 4),600);
  if (cVar2 == '\x01') {
    uVar3 = NumberToString(*(uint *)local_20,0);
    uVar4 = MySQL::blob_to_str(local_24,1,local_304,local_28);
    uVar5 = get_member_game_option();
    MySQL::set_query(local_24,"upDate %s set option_3=\'%s\' where m_id=%s",uVar5,uVar4,uVar3);
    cVar2 = MySQL::exec(local_24,true);
    if ((cVar2 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_24), lVar9 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = MySQL::blob_to_str(local_24,0,local_304,local_28);
      uVar4 = NumberToString(*(uint *)local_20,0);
      uVar5 = get_member_game_option();
      MySQL::set_query(local_24,"inSert into %s(m_id, option_3) values(%s,\'%s\')",uVar5,uVar4,uVar3
                      );
      cVar2 = MySQL::exec(local_24,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

```

