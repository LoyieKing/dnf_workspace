# DB_MailBox_Req_Send

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## InsertLetter

```asm
// === 0841f15a DB_MailBox_Req_Send::InsertLetter  [0x0841f15a-0x841f2f9] ===
 841f15a:	55                   	push   %ebp
 841f15b:	89 e5                	mov    %esp,%ebp
 841f15d:	57                   	push   %edi
 841f15e:	53                   	push   %ebx
 841f15f:	81 ec 60 02 00 00    	sub    $0x260,%esp
 841f165:	8b 45 18             	mov    0x18(%ebp),%eax
 841f168:	89 04 24             	mov    %eax,(%esp)
 841f16b:	e8 40 f2 c5 ff       	call   807e3b0 <strlen@plt>
 841f170:	3d aa 00 00 00       	cmp    $0xaa,%eax
 841f175:	76 53                	jbe    841f1ca <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0x70>
 841f177:	8b 45 18             	mov    0x18(%ebp),%eax
 841f17a:	89 04 24             	mov    %eax,(%esp)
 841f17d:	e8 2e f2 c5 ff       	call   807e3b0 <strlen@plt>
 841f182:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 841f186:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f189:	89 44 24 18          	mov    %eax,0x18(%esp)
 841f18d:	8b 45 10             	mov    0x10(%ebp),%eax
 841f190:	89 44 24 14          	mov    %eax,0x14(%esp)
 841f194:	c7 44 24 10 20 c2 c4 	movl   $0x8c4c220,0x10(%esp)
 841f19b:	08 
 841f19c:	c7 44 24 0c bc 54 00 	movl   $0x54bc,0xc(%esp)
 841f1a3:	00 
 841f1a4:	c7 44 24 08 00 c9 c5 	movl   $0x8c5c900,0x8(%esp)
 841f1ab:	08 
 841f1ac:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841f1b3:	08 
 841f1b4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 841f1bb:	e8 4a 4a 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 841f1c0:	b8 00 00 00 00       	mov    $0x0,%eax
 841f1c5:	e9 26 01 00 00       	jmp    841f2f0 <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0x196>
 841f1ca:	8d 95 bc fd ff ff    	lea    -0x244(%ebp),%edx
 841f1d0:	b8 00 00 00 00       	mov    $0x0,%eax
 841f1d5:	b9 7f 00 00 00       	mov    $0x7f,%ecx
 841f1da:	89 d7                	mov    %edx,%edi
 841f1dc:	f3 ab                	rep stos %eax,%es:(%edi)
 841f1de:	89 fa                	mov    %edi,%edx
 841f1e0:	66 89 02             	mov    %ax,(%edx)
 841f1e3:	83 c2 02             	add    $0x2,%edx
 841f1e6:	88 02                	mov    %al,(%edx)
 841f1e8:	83 c2 01             	add    $0x1,%edx
 841f1eb:	8b 45 18             	mov    0x18(%ebp),%eax
 841f1ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f1f2:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 841f1f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f1fc:	8b 45 08             	mov    0x8(%ebp),%eax
 841f1ff:	89 04 24             	mov    %eax,(%esp)
 841f202:	e8 a3 56 fd ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 841f207:	8d 55 bb             	lea    -0x45(%ebp),%edx
 841f20a:	bb 3d 00 00 00       	mov    $0x3d,%ebx
 841f20f:	b8 00 00 00 00       	mov    $0x0,%eax
 841f214:	89 d1                	mov    %edx,%ecx
 841f216:	83 e1 01             	and    $0x1,%ecx
 841f219:	85 c9                	test   %ecx,%ecx
 841f21b:	74 08                	je     841f225 <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0xcb>
 841f21d:	88 02                	mov    %al,(%edx)
 841f21f:	83 c2 01             	add    $0x1,%edx
 841f222:	83 eb 01             	sub    $0x1,%ebx
 841f225:	89 d1                	mov    %edx,%ecx
 841f227:	83 e1 02             	and    $0x2,%ecx
 841f22a:	85 c9                	test   %ecx,%ecx
 841f22c:	74 09                	je     841f237 <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0xdd>
 841f22e:	66 89 02             	mov    %ax,(%edx)
 841f231:	83 c2 02             	add    $0x2,%edx
 841f234:	83 eb 02             	sub    $0x2,%ebx
 841f237:	89 d9                	mov    %ebx,%ecx
 841f239:	c1 e9 02             	shr    $0x2,%ecx
 841f23c:	89 d7                	mov    %edx,%edi
 841f23e:	f3 ab                	rep stos %eax,%es:(%edi)
 841f240:	89 fa                	mov    %edi,%edx
 841f242:	89 d9                	mov    %ebx,%ecx
 841f244:	83 e1 02             	and    $0x2,%ecx
 841f247:	85 c9                	test   %ecx,%ecx
 841f249:	74 06                	je     841f251 <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0xf7>
 841f24b:	66 89 02             	mov    %ax,(%edx)
 841f24e:	83 c2 02             	add    $0x2,%edx
 841f251:	89 d9                	mov    %ebx,%ecx
 841f253:	83 e1 01             	and    $0x1,%ecx
 841f256:	85 c9                	test   %ecx,%ecx
 841f258:	74 05                	je     841f25f <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0x105>
 841f25a:	88 02                	mov    %al,(%edx)
 841f25c:	83 c2 01             	add    $0x1,%edx
 841f25f:	8b 45 14             	mov    0x14(%ebp),%eax
 841f262:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f266:	8d 45 bb             	lea    -0x45(%ebp),%eax
 841f269:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f26d:	8b 45 08             	mov    0x8(%ebp),%eax
 841f270:	89 04 24             	mov    %eax,(%esp)
 841f273:	e8 32 56 fd ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 841f278:	8b 45 24             	mov    0x24(%ebp),%eax
 841f27b:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 841f27f:	8b 45 20             	mov    0x20(%ebp),%eax
 841f282:	89 44 24 18          	mov    %eax,0x18(%esp)
 841f286:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 841f28c:	89 44 24 14          	mov    %eax,0x14(%esp)
 841f290:	8d 45 bb             	lea    -0x45(%ebp),%eax
 841f293:	89 44 24 10          	mov    %eax,0x10(%esp)
 841f297:	8b 45 10             	mov    0x10(%ebp),%eax
 841f29a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841f29e:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f2a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f2a5:	c7 44 24 04 5c c2 c4 	movl   $0x8c4c25c,0x4(%esp)
 841f2ac:	08 
 841f2ad:	8b 45 08             	mov    0x8(%ebp),%eax
 841f2b0:	89 04 24             	mov    %eax,(%esp)
 841f2b3:	e8 08 4f fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841f2b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f2bf:	00 
 841f2c0:	8b 45 08             	mov    0x8(%ebp),%eax
 841f2c3:	89 04 24             	mov    %eax,(%esp)
 841f2c6:	e8 5b 50 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841f2cb:	83 f0 01             	xor    $0x1,%eax
 841f2ce:	84 c0                	test   %al,%al
 841f2d0:	74 07                	je     841f2d9 <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0x17f>
 841f2d2:	b8 00 00 00 00       	mov    $0x0,%eax
 841f2d7:	eb 17                	jmp    841f2f0 <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT+0x196>
 841f2d9:	8b 45 08             	mov    0x8(%ebp),%eax
 841f2dc:	89 04 24             	mov    %eax,(%esp)
 841f2df:	e8 f0 a7 fd ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 841f2e4:	89 c2                	mov    %eax,%edx
 841f2e6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841f2e9:	89 10                	mov    %edx,(%eax)
 841f2eb:	b8 01 00 00 00       	mov    $0x1,%eax
 841f2f0:	81 c4 60 02 00 00    	add    $0x260,%esp
 841f2f6:	5b                   	pop    %ebx
 841f2f7:	5f                   	pop    %edi
 841f2f8:	5d                   	pop    %ebp
 841f2f9:	c3                   	ret

```

```c
// DB_MailBox_Req_Send::InsertLetter @ 0x841f15a

/* DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, char const*, char const*, int&, long,
   ENUM_LETTER_STAT) */

undefined4
DB_MailBox_Req_Send::InsertLetter
          (MySQL *param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,
          undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_248 [511];
  char local_49;
  char local_48 [60];
  
  bVar9 = 0;
  sVar2 = strlen(param_5);
  if (sVar2 < 0xab) {
    pcVar6 = local_248;
    for (iVar4 = 0x7f; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    MySQL::escape_string(param_1,local_248,param_5);
    pcVar6 = &local_49;
    uVar7 = 0x3d;
    bVar8 = ((uint)pcVar6 & 1) != 0;
    if (bVar8) {
      local_49 = '\0';
      pcVar6 = local_48;
      uVar7 = 0x3c;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar8) {
      *pcVar6 = '\0';
    }
    MySQL::escape_string(param_1,&local_49,param_4);
    MySQL::set_query(param_1,
                     "inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,\'%s\',\'%s\',from_unixtime(%d),%d)"
                     ,param_2,param_3,&local_49,local_248,param_7,param_8);
    cVar1 = MySQL::exec(param_1,true);
    if (cVar1 == '\x01') {
      uVar3 = WongWork::DBCommon::GetIdentity(param_1);
      *param_6 = uVar3;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    sVar2 = strlen(param_5);
    LogManager::logFormat
              (1,"DBThread.cpp",
               "static bool DB_MailBox_Req_Send::InsertLetter(MySQL*, int, int, const char*, const char*, int&, time_t, ENUM_LETTER_STAT)"
               ,0x54bc,"send_charac_no : %d, recv_charac_no : %d, letter_size : %d",param_3,param_2,
               sVar2);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## dispatch

```asm
// === 0841f84e DB_MailBox_Req_Send::dispatch  [0x0841f84e-0x841f8d3] ===
 841f84e:	55                   	push   %ebp
 841f84f:	89 e5                	mov    %esp,%ebp
 841f851:	83 ec 28             	sub    $0x28,%esp
 841f854:	8b 45 14             	mov    0x14(%ebp),%eax
 841f857:	89 04 24             	mov    %eax,(%esp)
 841f85a:	e8 9f 21 03 00       	call   84519fe <_ZN6Stream12GetOutBufferI25SIG_MAILBOX_SEND_NEW_MAILEEPT_v>
 841f85f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841f862:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f865:	8b 90 5f 01 00 00    	mov    0x15f(%eax),%edx
 841f86b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841f870:	89 54 24 08          	mov    %edx,0x8(%esp)
 841f874:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841f87b:	00 
 841f87c:	89 04 24             	mov    %eax,(%esp)
 841f87f:	e8 ba 59 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841f884:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841f887:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f88a:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f88e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841f891:	89 04 24             	mov    %eax,(%esp)
 841f894:	e8 61 fa ff ff       	call   841f2fa <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL>
 841f899:	83 f0 01             	xor    $0x1,%eax
 841f89c:	84 c0                	test   %al,%al
 841f89e:	74 07                	je     841f8a7 <_ZN19DB_MailBox_Req_Send8dispatchEiiP6Stream+0x59>
 841f8a0:	b8 00 00 00 00       	mov    $0x0,%eax
 841f8a5:	eb 2a                	jmp    841f8d1 <_ZN19DB_MailBox_Req_Send8dispatchEiiP6Stream+0x83>
 841f8a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f8aa:	8b 90 5f 01 00 00    	mov    0x15f(%eax),%edx
 841f8b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841f8b3:	8b 40 22             	mov    0x22(%eax),%eax
 841f8b6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841f8ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f8be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841f8c5:	00 
 841f8c6:	8b 45 10             	mov    0x10(%ebp),%eax
 841f8c9:	89 04 24             	mov    %eax,(%esp)
 841f8cc:	e8 89 fe ff ff       	call   841f75a <_ZN19DB_MailBox_Req_Send10sendResultEiii17ENUM_SERVER_GROUP>
 841f8d1:	c9                   	leave
 841f8d2:	c3                   	ret
 841f8d3:	90                   	nop

```

```c
// DB_MailBox_Req_Send::dispatch @ 0x841f84e

/* DB_MailBox_Req_Send::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_Send::dispatch(DB_MailBox_Req_Send *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_MAILBOX_SEND_NEW_MAIL *pSVar2;
  MySQL *pMVar3;
  undefined4 uVar4;
  
  pSVar2 = Stream::GetOutBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(param_3);
  pMVar3 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,*(undefined4 *)(pSVar2 + 0x15f));
  cVar1 = insertMailData(pMVar3,pSVar2);
  if (cVar1 == '\x01') {
    uVar4 = sendResult(param_2,0,*(undefined4 *)(pSVar2 + 0x22),*(undefined4 *)(pSVar2 + 0x15f));
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## insertMailData

```asm
// === 0841f2fa DB_MailBox_Req_Send::insertMailData  [0x0841f2fa-0x841f759] ===
 841f2fa:	55                   	push   %ebp
 841f2fb:	89 e5                	mov    %esp,%ebp
 841f2fd:	57                   	push   %edi
 841f2fe:	56                   	push   %esi
 841f2ff:	53                   	push   %ebx
 841f300:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 841f306:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 841f30d:	e8 8c c9 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 841f312:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841f315:	8d 45 ac             	lea    -0x54(%ebp),%eax
 841f318:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f31c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 841f31f:	89 04 24             	mov    %eax,(%esp)
 841f322:	e8 39 f0 c5 ff       	call   807e360 <localtime_r@plt>
 841f327:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841f32a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841f32d:	8b 40 08             	mov    0x8(%eax),%eax
 841f330:	8d 50 01             	lea    0x1(%eax),%edx
 841f333:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841f336:	89 50 08             	mov    %edx,0x8(%eax)
 841f339:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841f33c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 841f343:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841f346:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 841f34c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841f34f:	89 04 24             	mov    %eax,(%esp)
 841f352:	e8 c9 f4 c5 ff       	call   807e820 <mktime@plt>
 841f357:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841f35a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f35d:	0f b6 80 67 01 00 00 	movzbl 0x167(%eax),%eax
 841f364:	84 c0                	test   %al,%al
 841f366:	74 13                	je     841f37b <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x81>
 841f368:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f36b:	8b 80 5b 01 00 00    	mov    0x15b(%eax),%eax
 841f371:	2d 80 c6 13 00       	sub    $0x13c680,%eax
 841f376:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841f379:	eb 56                	jmp    841f3d1 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0xd7>
 841f37b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f37e:	8b 80 5b 01 00 00    	mov    0x15b(%eax),%eax
 841f384:	83 f8 0e             	cmp    $0xe,%eax
 841f387:	77 1d                	ja     841f3a6 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0xac>
 841f389:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841f38c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f38f:	8b 80 5b 01 00 00    	mov    0x15b(%eax),%eax
 841f395:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 841f39b:	89 d1                	mov    %edx,%ecx
 841f39d:	29 c1                	sub    %eax,%ecx
 841f39f:	89 c8                	mov    %ecx,%eax
 841f3a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841f3a4:	eb 2b                	jmp    841f3d1 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0xd7>
 841f3a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f3a9:	8b 80 5b 01 00 00    	mov    0x15b(%eax),%eax
 841f3af:	83 f8 0f             	cmp    $0xf,%eax
 841f3b2:	76 1d                	jbe    841f3d1 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0xd7>
 841f3b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f3b7:	8b 80 5b 01 00 00    	mov    0x15b(%eax),%eax
 841f3bd:	69 d0 80 51 01 00    	imul   $0x15180,%eax,%edx
 841f3c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841f3c6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841f3c9:	2d 80 c6 13 00       	sub    $0x13c680,%eax
 841f3ce:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841f3d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f3d4:	8b 80 63 01 00 00    	mov    0x163(%eax),%eax
 841f3da:	85 c0                	test   %eax,%eax
 841f3dc:	74 4d                	je     841f42b <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x131>
 841f3de:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f3e1:	8b 90 63 01 00 00    	mov    0x163(%eax),%edx
 841f3e7:	a1 30 c2 43 09       	mov    0x943c230,%eax
 841f3ec:	39 c2                	cmp    %eax,%edx
 841f3ee:	74 3b                	je     841f42b <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x131>
 841f3f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f3f3:	8b 80 63 01 00 00    	mov    0x163(%eax),%eax
 841f3f9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841f3fd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841f404:	00 
 841f405:	c7 44 24 04 e4 c2 c4 	movl   $0x8c4c2e4,0x4(%esp)
 841f40c:	08 
 841f40d:	8b 45 08             	mov    0x8(%ebp),%eax
 841f410:	89 04 24             	mov    %eax,(%esp)
 841f413:	e8 a8 4d fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841f418:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f41f:	00 
 841f420:	8b 45 08             	mov    0x8(%ebp),%eax
 841f423:	89 04 24             	mov    %eax,(%esp)
 841f426:	e8 fb 4e fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841f42b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f42e:	8b 80 63 01 00 00    	mov    0x163(%eax),%eax
 841f434:	a3 30 c2 43 09       	mov    %eax,0x943c230
 841f439:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f43c:	8b 80 63 01 00 00    	mov    0x163(%eax),%eax
 841f442:	89 45 d8             	mov    %eax,-0x28(%ebp)
 841f445:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f448:	0f b7 40 59          	movzwl 0x59(%eax),%eax
 841f44c:	66 85 c0             	test   %ax,%ax
 841f44f:	0f 84 a4 00 00 00    	je     841f4f9 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x1ff>
 841f455:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841f458:	85 c0                	test   %eax,%eax
 841f45a:	0f 85 99 00 00 00    	jne    841f4f9 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x1ff>
 841f460:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f463:	8d 70 5b             	lea    0x5b(%eax),%esi
 841f466:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 841f469:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f46c:	8b 40 1e             	mov    0x1e(%eax),%eax
 841f46f:	89 c2                	mov    %eax,%edx
 841f471:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f474:	8b 40 22             	mov    0x22(%eax),%eax
 841f477:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 841f47e:	00 
 841f47f:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 841f482:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 841f486:	8d 5d d8             	lea    -0x28(%ebp),%ebx
 841f489:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841f48d:	89 74 24 10          	mov    %esi,0x10(%esp)
 841f491:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 841f495:	89 54 24 08          	mov    %edx,0x8(%esp)
 841f499:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f49d:	8b 45 08             	mov    0x8(%ebp),%eax
 841f4a0:	89 04 24             	mov    %eax,(%esp)
 841f4a3:	e8 b2 fc ff ff       	call   841f15a <_ZN19DB_MailBox_Req_Send12InsertLetterEP5MySQLiiPKcS3_Ril16ENUM_LETTER_STAT>
 841f4a8:	83 f0 01             	xor    $0x1,%eax
 841f4ab:	84 c0                	test   %al,%al
 841f4ad:	74 2c                	je     841f4db <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x1e1>
 841f4af:	c7 44 24 10 14 c3 c4 	movl   $0x8c4c314,0x10(%esp)
 841f4b6:	08 
 841f4b7:	c7 44 24 0c 0c 55 00 	movl   $0x550c,0xc(%esp)
 841f4be:	00 
 841f4bf:	c7 44 24 08 a0 c8 c5 	movl   $0x8c5c8a0,0x8(%esp)
 841f4c6:	08 
 841f4c7:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841f4ce:	08 
 841f4cf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 841f4d6:	e8 2f 47 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 841f4db:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f4de:	8b 40 2b             	mov    0x2b(%eax),%eax
 841f4e1:	85 c0                	test   %eax,%eax
 841f4e3:	75 14                	jne    841f4f9 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x1ff>
 841f4e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f4e8:	8b 40 26             	mov    0x26(%eax),%eax
 841f4eb:	85 c0                	test   %eax,%eax
 841f4ed:	75 0a                	jne    841f4f9 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x1ff>
 841f4ef:	b8 01 00 00 00       	mov    $0x1,%eax
 841f4f4:	e9 56 02 00 00       	jmp    841f74f <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x455>
 841f4f9:	8d 95 55 ff ff ff    	lea    -0xab(%ebp),%edx
 841f4ff:	bb 57 00 00 00       	mov    $0x57,%ebx
 841f504:	b8 00 00 00 00       	mov    $0x0,%eax
 841f509:	89 d1                	mov    %edx,%ecx
 841f50b:	83 e1 01             	and    $0x1,%ecx
 841f50e:	85 c9                	test   %ecx,%ecx
 841f510:	74 08                	je     841f51a <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x220>
 841f512:	88 02                	mov    %al,(%edx)
 841f514:	83 c2 01             	add    $0x1,%edx
 841f517:	83 eb 01             	sub    $0x1,%ebx
 841f51a:	89 d1                	mov    %edx,%ecx
 841f51c:	83 e1 02             	and    $0x2,%ecx
 841f51f:	85 c9                	test   %ecx,%ecx
 841f521:	74 09                	je     841f52c <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x232>
 841f523:	66 89 02             	mov    %ax,(%edx)
 841f526:	83 c2 02             	add    $0x2,%edx
 841f529:	83 eb 02             	sub    $0x2,%ebx
 841f52c:	89 d9                	mov    %ebx,%ecx
 841f52e:	c1 e9 02             	shr    $0x2,%ecx
 841f531:	89 d7                	mov    %edx,%edi
 841f533:	f3 ab                	rep stos %eax,%es:(%edi)
 841f535:	89 fa                	mov    %edi,%edx
 841f537:	89 d9                	mov    %ebx,%ecx
 841f539:	83 e1 02             	and    $0x2,%ecx
 841f53c:	85 c9                	test   %ecx,%ecx
 841f53e:	74 06                	je     841f546 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x24c>
 841f540:	66 89 02             	mov    %ax,(%edx)
 841f543:	83 c2 02             	add    $0x2,%edx
 841f546:	89 d9                	mov    %ebx,%ecx
 841f548:	83 e1 01             	and    $0x1,%ecx
 841f54b:	85 c9                	test   %ecx,%ecx
 841f54d:	74 05                	je     841f554 <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL+0x25a>
 841f54f:	88 02                	mov    %al,(%edx)
 841f551:	83 c2 01             	add    $0x1,%edx
 841f554:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f557:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f55b:	8d 85 55 ff ff ff    	lea    -0xab(%ebp),%eax
 841f561:	89 04 24             	mov    %eax,(%esp)
 841f564:	e8 87 e9 c5 ff       	call   807def0 <strcpy@plt>
 841f569:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f56c:	0f b6 40 57          	movzbl 0x57(%eax),%eax
 841f570:	0f b6 c0             	movzbl %al,%eax
 841f573:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 841f579:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f57c:	0f b6 40 55          	movzbl 0x55(%eax),%eax
 841f580:	0f b6 c0             	movzbl %al,%eax
 841f583:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 841f589:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f58c:	83 c0 47             	add    $0x47,%eax
 841f58f:	c7 44 24 0c 0e 00 00 	movl   $0xe,0xc(%esp)
 841f596:	00 
 841f597:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f59b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f5a2:	00 
 841f5a3:	8b 45 08             	mov    0x8(%ebp),%eax
 841f5a6:	89 04 24             	mov    %eax,(%esp)
 841f5a9:	e8 7c 4f fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 841f5ae:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 841f5b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f5b7:	83 c0 3a             	add    $0x3a,%eax
 841f5ba:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 841f5c1:	00 
 841f5c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f5c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841f5cd:	00 
 841f5ce:	8b 45 08             	mov    0x8(%ebp),%eax
 841f5d1:	89 04 24             	mov    %eax,(%esp)
 841f5d4:	e8 51 4f fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 841f5d9:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 841f5df:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f5e2:	8b 40 36             	mov    0x36(%eax),%eax
 841f5e5:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 841f5eb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841f5ee:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 841f5f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f5f7:	0f b6 40 56          	movzbl 0x56(%eax),%eax
 841f5fb:	0f b6 c0             	movzbl %al,%eax
 841f5fe:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 841f604:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f607:	0f b6 40 58          	movzbl 0x58(%eax),%eax
 841f60b:	0f b6 c0             	movzbl %al,%eax
 841f60e:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 841f614:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f617:	8b 40 26             	mov    0x26(%eax),%eax
 841f61a:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 841f620:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f623:	0f b7 40 45          	movzwl 0x45(%eax),%eax
 841f627:	0f b7 c0             	movzwl %ax,%eax
 841f62a:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 841f630:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f633:	0f b6 40 44          	movzbl 0x44(%eax),%eax
 841f637:	0f b6 c0             	movzbl %al,%eax
 841f63a:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 841f640:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f643:	0f b6 40 33          	movzbl 0x33(%eax),%eax
 841f647:	0f b6 c0             	movzbl %al,%eax
 841f64a:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 841f650:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f653:	0f b7 40 34          	movzwl 0x34(%eax),%eax
 841f657:	0f b7 c0             	movzwl %ax,%eax
 841f65a:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 841f660:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f663:	8b 78 2f             	mov    0x2f(%eax),%edi
 841f666:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f669:	8b 70 2b             	mov    0x2b(%eax),%esi
 841f66c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f66f:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 841f673:	0f b6 d8             	movzbl %al,%ebx
 841f676:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f679:	8b 48 22             	mov    0x22(%eax),%ecx
 841f67c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841f67f:	8b 50 1e             	mov    0x1e(%eax),%edx
 841f682:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 841f688:	89 44 24 54          	mov    %eax,0x54(%esp)
 841f68c:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 841f692:	89 44 24 50          	mov    %eax,0x50(%esp)
 841f696:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 841f69c:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 841f6a0:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 841f6a6:	89 44 24 48          	mov    %eax,0x48(%esp)
 841f6aa:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 841f6b0:	89 44 24 44          	mov    %eax,0x44(%esp)
 841f6b4:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 841f6ba:	89 44 24 40          	mov    %eax,0x40(%esp)
 841f6be:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 841f6c4:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 841f6c8:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 841f6ce:	89 44 24 38          	mov    %eax,0x38(%esp)
 841f6d2:	8d 85 55 ff ff ff    	lea    -0xab(%ebp),%eax
 841f6d8:	89 44 24 34          	mov    %eax,0x34(%esp)
 841f6dc:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 841f6e2:	89 44 24 30          	mov    %eax,0x30(%esp)
 841f6e6:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 841f6ec:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 841f6f0:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 841f6f6:	89 44 24 28          	mov    %eax,0x28(%esp)
 841f6fa:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 841f700:	89 44 24 24          	mov    %eax,0x24(%esp)
 841f704:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 841f70a:	89 44 24 20          	mov    %eax,0x20(%esp)
 841f70e:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 841f712:	89 74 24 18          	mov    %esi,0x18(%esp)
 841f716:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 841f71a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841f71e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841f722:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841f725:	89 44 24 08          	mov    %eax,0x8(%esp)
 841f729:	c7 44 24 04 2c c3 c4 	movl   $0x8c4c32c,0x4(%esp)
 841f730:	08 
 841f731:	8b 45 08             	mov    0x8(%ebp),%eax
 841f734:	89 04 24             	mov    %eax,(%esp)
 841f737:	e8 84 4a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841f73c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f743:	00 
 841f744:	8b 45 08             	mov    0x8(%ebp),%eax
 841f747:	89 04 24             	mov    %eax,(%esp)
 841f74a:	e8 d7 4b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841f74f:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 841f755:	5b                   	pop    %ebx
 841f756:	5e                   	pop    %esi
 841f757:	5f                   	pop    %edi
 841f758:	5d                   	pop    %ebp
 841f759:	c3                   	ret

```

```c
// DB_MailBox_Req_Send::insertMailData @ 0x841f2fa

/* DB_MailBox_Req_Send::insertMailData(MySQL*, SIG_MAILBOX_SEND_NEW_MAIL const*) */

undefined4 DB_MailBox_Req_Send::insertMailData(MySQL *param_1,SIG_MAILBOX_SEND_NEW_MAIL *param_2)

{
  SIG_MAILBOX_SEND_NEW_MAIL SVar1;
  SIG_MAILBOX_SEND_NEW_MAIL SVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_af;
  char local_ae [86];
  tm local_58;
  int local_2c;
  time_t local_28;
  tm *local_24;
  time_t local_20;
  
  bVar10 = 0;
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_28,&local_58);
  local_24->tm_hour = local_24->tm_hour + 1;
  local_24->tm_min = 0;
  local_24->tm_sec = 0;
  local_20 = mktime(local_24);
  if (param_2[0x167] == (SIG_MAILBOX_SEND_NEW_MAIL)0x0) {
    if (*(uint *)(param_2 + 0x15b) < 0xf) {
      local_20 = local_20 + *(int *)(param_2 + 0x15b) * -0x15180;
    }
    else if (0xf < *(uint *)(param_2 + 0x15b)) {
      local_20 = *(int *)(param_2 + 0x15b) * 0x15180 + local_20 + -0x13c680;
    }
  }
  else {
    local_20 = *(int *)(param_2 + 0x15b) + -0x13c680;
  }
  if ((*(int *)(param_2 + 0x163) != 0) &&
     (*(int *)(param_2 + 0x163) !=
      insertMailData(MySQL*,SIG_MAILBOX_SEND_NEW_MAIL_const*)::last_letter_id)) {
    MySQL::set_query(param_1,"upDate letter set stat =%d where letter_id = %d",1,
                     *(undefined4 *)(param_2 + 0x163));
    MySQL::exec(param_1,true);
  }
  insertMailData(MySQL*,SIG_MAILBOX_SEND_NEW_MAIL_const*)::last_letter_id =
       *(int *)(param_2 + 0x163);
  local_2c = *(int *)(param_2 + 0x163);
  if ((*(short *)(param_2 + 0x59) != 0) && (local_2c == 0)) {
    cVar3 = InsertLetter(param_1,*(undefined4 *)(param_2 + 0x22),*(undefined4 *)(param_2 + 0x1e),
                         param_2,param_2 + 0x5b,&local_2c,local_20,1);
    if (cVar3 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "static bool DB_MailBox_Req_Send::insertMailData(MySQL*, const SIG_MAILBOX_SEND_NEW_MAIL*)"
                 ,0x550c,"InsertLetter() error");
    }
    if ((*(int *)(param_2 + 0x2b) == 0) && (*(int *)(param_2 + 0x26) == 0)) {
      return 1;
    }
  }
  pcVar7 = &local_af;
  uVar8 = 0x57;
  bVar9 = ((uint)pcVar7 & 1) != 0;
  if (bVar9) {
    local_af = '\0';
    pcVar7 = local_ae;
    uVar8 = 0x56;
  }
  if (((uint)pcVar7 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
    uVar8 = uVar8 - 2;
  }
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
  }
  if ((uVar8 & 2) != 0) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7 = pcVar7 + 2;
  }
  if (!bVar9) {
    *pcVar7 = '\0';
  }
  strcpy(&local_af,(char *)param_2);
  SVar1 = param_2[0x57];
  SVar2 = param_2[0x55];
  uVar4 = MySQL::blob_to_str(param_1,1,param_2 + 0x47,0xe);
  uVar5 = MySQL::blob_to_str(param_1,0,param_2 + 0x3a,10);
  MySQL::set_query(param_1,
                   "inSert into postal(occ_time,send_charac_no,receive_charac_no,seal_flag,item_id,add_info,endurance,upgrade,amplify_option,amplify_value,gold,send_charac_name,creature_flag,avata_flag,letter_id,extend_info,item_guid,random_option,seperate_upgrade,unlimit_flag) values(from_unixtime(%d),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\'%s\',%d,%d,%d,%d,\'%s\',\'%s\',%d,%d)"
                   ,local_20,*(undefined4 *)(param_2 + 0x1e),*(undefined4 *)(param_2 + 0x22),
                   (uint)(byte)param_2[0x2a],*(undefined4 *)(param_2 + 0x2b),
                   *(undefined4 *)(param_2 + 0x2f),(uint)*(ushort *)(param_2 + 0x34),
                   (uint)(byte)param_2[0x33],(uint)(byte)param_2[0x44],
                   (uint)*(ushort *)(param_2 + 0x45),*(undefined4 *)(param_2 + 0x26),&local_af,
                   (uint)(byte)param_2[0x58],(uint)(byte)param_2[0x56],local_2c,
                   *(undefined4 *)(param_2 + 0x36),uVar5,uVar4,(uint)(byte)SVar2,(uint)(byte)SVar1);
  uVar4 = MySQL::exec(param_1,true);
  return uVar4;
}

```

---

## sendResult

```asm
// === 0841f75a DB_MailBox_Req_Send::sendResult  [0x0841f75a-0x841f84d] ===
 841f75a:	55                   	push   %ebp
 841f75b:	89 e5                	mov    %esp,%ebp
 841f75d:	56                   	push   %esi
 841f75e:	53                   	push   %ebx
 841f75f:	83 ec 20             	sub    $0x20,%esp
 841f762:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841f767:	c7 44 24 08 9f 55 00 	movl   $0x559f,0x8(%esp)
 841f76e:	00 
 841f76f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841f776:	08 
 841f777:	89 04 24             	mov    %eax,(%esp)
 841f77a:	e8 07 03 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841f77f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841f786:	00 
 841f787:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f78b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841f78e:	89 04 24             	mov    %eax,(%esp)
 841f791:	e8 90 94 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841f796:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841f799:	89 04 24             	mov    %eax,(%esp)
 841f79c:	e8 a5 94 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841f7a1:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 841f7a8:	00 
 841f7a9:	89 04 24             	mov    %eax,(%esp)
 841f7ac:	e8 a5 94 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841f7b1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841f7b4:	89 04 24             	mov    %eax,(%esp)
 841f7b7:	e8 8a 94 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841f7bc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 841f7c3:	ff 
 841f7c4:	89 04 24             	mov    %eax,(%esp)
 841f7c7:	e8 8a 94 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841f7cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841f7cf:	89 04 24             	mov    %eax,(%esp)
 841f7d2:	e8 77 94 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 841f7d7:	89 04 24             	mov    %eax,(%esp)
 841f7da:	e8 af 87 d7 ff       	call   8197f8e <_ZN12CStreamGuard11GetInBufferI25SIG_MAILBOX_SEND_NEW_MAILEEPT_v>
 841f7df:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841f7e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841f7e5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 841f7eb:	8b 55 10             	mov    0x10(%ebp),%edx
 841f7ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841f7f1:	89 50 04             	mov    %edx,0x4(%eax)
 841f7f4:	8b 55 14             	mov    0x14(%ebp),%edx
 841f7f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841f7fa:	89 50 08             	mov    %edx,0x8(%eax)
 841f7fd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841f802:	8d 55 ec             	lea    -0x14(%ebp),%edx
 841f805:	89 54 24 08          	mov    %edx,0x8(%esp)
 841f809:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f810:	00 
 841f811:	89 04 24             	mov    %eax,(%esp)
 841f814:	e8 c5 17 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841f819:	bb 01 00 00 00       	mov    $0x1,%ebx
 841f81e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841f821:	89 04 24             	mov    %eax,(%esp)
 841f824:	e8 a9 d0 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841f829:	89 d8                	mov    %ebx,%eax
 841f82b:	83 c4 20             	add    $0x20,%esp
 841f82e:	5b                   	pop    %ebx
 841f82f:	5e                   	pop    %esi
 841f830:	5d                   	pop    %ebp
 841f831:	c3                   	ret
 841f832:	89 d3                	mov    %edx,%ebx
 841f834:	89 c6                	mov    %eax,%esi
 841f836:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841f839:	89 04 24             	mov    %eax,(%esp)
 841f83c:	e8 91 d0 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841f841:	89 f0                	mov    %esi,%eax
 841f843:	89 da                	mov    %ebx,%edx
 841f845:	89 04 24             	mov    %eax,(%esp)
 841f848:	e8 03 3f 6c 00       	call   8ae3750 <_Unwind_Resume>
 841f84d:	90                   	nop

```

```c
// DB_MailBox_Req_Send::sendResult @ 0x841f75a

/* DB_MailBox_Req_Send::sendResult(int, int, int, ENUM_SERVER_GROUP) */

undefined4
DB_MailBox_Req_Send::sendResult
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x559f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0841f7ac to 0841f818 has its CatchHandler @ 0841f832 */
  CStreamGuard::operator<<(pCVar2,0x80);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)(local_10 + 4) = param_3;
  *(undefined4 *)(local_10 + 8) = param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

