# DB_SaveCharacInformNotice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844c170 DB_SaveCharacInformNotice::dispatch  [0x0844c170-0x844c303] ===
 844c170:	55                   	push   %ebp
 844c171:	89 e5                	mov    %esp,%ebp
 844c173:	57                   	push   %edi
 844c174:	53                   	push   %ebx
 844c175:	81 ec 30 01 00 00    	sub    $0x130,%esp
 844c17b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844c180:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844c187:	00 
 844c188:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844c18f:	00 
 844c190:	89 04 24             	mov    %eax,(%esp)
 844c193:	e8 a6 90 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844c198:	89 45 ec             	mov    %eax,-0x14(%ebp)
 844c19b:	8b 45 14             	mov    0x14(%ebp),%eax
 844c19e:	89 04 24             	mov    %eax,(%esp)
 844c1a1:	e8 d0 86 00 00       	call   8454876 <_ZN6Stream12GetOutBufferI29SIG_SAVE_CHARAC_INFORM_NOTICEEEPT_v>
 844c1a6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844c1a9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 844c1ad:	75 0a                	jne    844c1b9 <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x49>
 844c1af:	b8 00 00 00 00       	mov    $0x0,%eax
 844c1b4:	e9 41 01 00 00       	jmp    844c2fa <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x18a>
 844c1b9:	8d 95 eb fe ff ff    	lea    -0x115(%ebp),%edx
 844c1bf:	bb 01 01 00 00       	mov    $0x101,%ebx
 844c1c4:	b8 00 00 00 00       	mov    $0x0,%eax
 844c1c9:	89 d1                	mov    %edx,%ecx
 844c1cb:	83 e1 01             	and    $0x1,%ecx
 844c1ce:	85 c9                	test   %ecx,%ecx
 844c1d0:	74 08                	je     844c1da <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x6a>
 844c1d2:	88 02                	mov    %al,(%edx)
 844c1d4:	83 c2 01             	add    $0x1,%edx
 844c1d7:	83 eb 01             	sub    $0x1,%ebx
 844c1da:	89 d1                	mov    %edx,%ecx
 844c1dc:	83 e1 02             	and    $0x2,%ecx
 844c1df:	85 c9                	test   %ecx,%ecx
 844c1e1:	74 09                	je     844c1ec <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x7c>
 844c1e3:	66 89 02             	mov    %ax,(%edx)
 844c1e6:	83 c2 02             	add    $0x2,%edx
 844c1e9:	83 eb 02             	sub    $0x2,%ebx
 844c1ec:	89 d9                	mov    %ebx,%ecx
 844c1ee:	c1 e9 02             	shr    $0x2,%ecx
 844c1f1:	89 d7                	mov    %edx,%edi
 844c1f3:	f3 ab                	rep stos %eax,%es:(%edi)
 844c1f5:	89 fa                	mov    %edi,%edx
 844c1f7:	89 d9                	mov    %ebx,%ecx
 844c1f9:	83 e1 02             	and    $0x2,%ecx
 844c1fc:	85 c9                	test   %ecx,%ecx
 844c1fe:	74 06                	je     844c206 <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x96>
 844c200:	66 89 02             	mov    %ax,(%edx)
 844c203:	83 c2 02             	add    $0x2,%edx
 844c206:	89 d9                	mov    %ebx,%ecx
 844c208:	83 e1 01             	and    $0x1,%ecx
 844c20b:	85 c9                	test   %ecx,%ecx
 844c20d:	74 05                	je     844c214 <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0xa4>
 844c20f:	88 02                	mov    %al,(%edx)
 844c211:	83 c2 01             	add    $0x1,%edx
 844c214:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844c217:	83 c0 04             	add    $0x4,%eax
 844c21a:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c21e:	8d 85 eb fe ff ff    	lea    -0x115(%ebp),%eax
 844c224:	89 44 24 04          	mov    %eax,0x4(%esp)
 844c228:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c22b:	89 04 24             	mov    %eax,(%esp)
 844c22e:	e8 77 86 fa ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 844c233:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844c236:	8b 00                	mov    (%eax),%eax
 844c238:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844c23c:	8d 85 eb fe ff ff    	lea    -0x115(%ebp),%eax
 844c242:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c246:	c7 44 24 04 74 98 c5 	movl   $0x8c59874,0x4(%esp)
 844c24d:	08 
 844c24e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c251:	89 04 24             	mov    %eax,(%esp)
 844c254:	e8 67 7f fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c259:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c260:	00 
 844c261:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c264:	89 04 24             	mov    %eax,(%esp)
 844c267:	e8 ba 80 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c26c:	88 45 f7             	mov    %al,-0x9(%ebp)
 844c26f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 844c273:	83 f0 01             	xor    $0x1,%eax
 844c276:	84 c0                	test   %al,%al
 844c278:	74 07                	je     844c281 <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x111>
 844c27a:	b8 00 00 00 00       	mov    $0x0,%eax
 844c27f:	eb 79                	jmp    844c2fa <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x18a>
 844c281:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c284:	89 04 24             	mov    %eax,(%esp)
 844c287:	e8 84 80 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 844c28c:	09 d0                	or     %edx,%eax
 844c28e:	85 c0                	test   %eax,%eax
 844c290:	0f 94 c0             	sete   %al
 844c293:	84 c0                	test   %al,%al
 844c295:	74 5e                	je     844c2f5 <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x185>
 844c297:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844c29a:	8b 00                	mov    (%eax),%eax
 844c29c:	8d 95 eb fe ff ff    	lea    -0x115(%ebp),%edx
 844c2a2:	89 54 24 14          	mov    %edx,0x14(%esp)
 844c2a6:	c7 44 24 10 ba 98 c5 	movl   $0x8c598ba,0x10(%esp)
 844c2ad:	08 
 844c2ae:	c7 44 24 0c ba 98 c5 	movl   $0x8c598ba,0xc(%esp)
 844c2b5:	08 
 844c2b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c2ba:	c7 44 24 04 bc 98 c5 	movl   $0x8c598bc,0x4(%esp)
 844c2c1:	08 
 844c2c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c2c5:	89 04 24             	mov    %eax,(%esp)
 844c2c8:	e8 f3 7e fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c2cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c2d4:	00 
 844c2d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844c2d8:	89 04 24             	mov    %eax,(%esp)
 844c2db:	e8 46 80 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c2e0:	88 45 f7             	mov    %al,-0x9(%ebp)
 844c2e3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 844c2e7:	83 f0 01             	xor    $0x1,%eax
 844c2ea:	84 c0                	test   %al,%al
 844c2ec:	74 07                	je     844c2f5 <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x185>
 844c2ee:	b8 00 00 00 00       	mov    $0x0,%eax
 844c2f3:	eb 05                	jmp    844c2fa <_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream+0x18a>
 844c2f5:	b8 01 00 00 00       	mov    $0x1,%eax
 844c2fa:	81 c4 30 01 00 00    	add    $0x130,%esp
 844c300:	5b                   	pop    %ebx
 844c301:	5f                   	pop    %edi
 844c302:	5d                   	pop    %ebp
 844c303:	c3                   	ret

```

```c
// DB_SaveCharacInformNotice::dispatch @ 0x844c170

/* DB_SaveCharacInformNotice::dispatch(int, int, Stream*) */

undefined4 DB_SaveCharacInformNotice::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  char local_119;
  char local_118 [256];
  MySQL *local_18;
  SIG_SAVE_CHARAC_INFORM_NOTICE *local_14;
  char local_d;
  
  bVar7 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_14 = Stream::GetOutBuffer<SIG_SAVE_CHARAC_INFORM_NOTICE>(in_stack_00000010);
  if (local_14 == (SIG_SAVE_CHARAC_INFORM_NOTICE *)0x0) {
    uVar2 = 0;
  }
  else {
    pcVar4 = &local_119;
    uVar5 = 0x101;
    bVar6 = ((uint)pcVar4 & 1) != 0;
    if (bVar6) {
      local_119 = '\0';
      pcVar4 = local_118;
      uVar5 = 0x100;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    if ((uVar5 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar6) {
      *pcVar4 = '\0';
    }
    MySQL::escape_string(local_18,&local_119,(char *)(local_14 + 4));
    MySQL::set_query(local_18,
                     "upDate charac_option set charac_inform_notice=\'%s\' where charac_no=%u",
                     &local_119,*(undefined4 *)local_14);
    local_d = MySQL::exec(local_18,true);
    if (local_d == '\x01') {
      lVar8 = MySQL::getAffectedRowCount(local_18);
      if (lVar8 == 0) {
        MySQL::set_query(local_18,
                         "inSert into charac_option(charac_no, options, best_clear_time, blue_marble_enter_count, charac_inform_notice) values (%u, \'%s\', \'%s\', 0, \'%s\')"
                         ,*(undefined4 *)local_14,&DAT_08c598ba,&DAT_08c598ba,&local_119);
        cVar1 = MySQL::exec(local_18,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

