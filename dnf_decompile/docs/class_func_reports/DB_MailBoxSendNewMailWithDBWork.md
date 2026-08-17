# DB_MailBoxSendNewMailWithDBWork

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084272de DB_MailBoxSendNewMailWithDBWork::dispatch  [0x084272de-0x84276af] ===
 84272de:	55                   	push   %ebp
 84272df:	89 e5                	mov    %esp,%ebp
 84272e1:	56                   	push   %esi
 84272e2:	53                   	push   %ebx
 84272e3:	81 ec a0 01 00 00    	sub    $0x1a0,%esp
 84272e9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84272ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84272f5:	00 
 84272f6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84272fd:	00 
 84272fe:	89 04 24             	mov    %eax,(%esp)
 8427301:	e8 38 df fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8427306:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8427309:	8b 45 14             	mov    0x14(%ebp),%eax
 842730c:	89 04 24             	mov    %eax,(%esp)
 842730f:	e8 2a ae 02 00       	call   845213e <_ZN6Stream12GetOutBufferI37SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORKEEPT_v>
 8427314:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8427317:	c7 44 24 08 68 01 00 	movl   $0x168,0x8(%esp)
 842731e:	00 
 842731f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8427326:	00 
 8427327:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 842732d:	89 04 24             	mov    %eax,(%esp)
 8427330:	e8 8b 69 c5 ff       	call   807dcc0 <memset@plt>
 8427335:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8427338:	83 c0 04             	add    $0x4,%eax
 842733b:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8427342:	00 
 8427343:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427347:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 842734d:	89 04 24             	mov    %eax,(%esp)
 8427350:	e8 7b 65 c5 ff       	call   807d8d0 <strncpy@plt>
 8427355:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8427358:	8b 40 24             	mov    0x24(%eax),%eax
 842735b:	89 85 8e fe ff ff    	mov    %eax,-0x172(%ebp)
 8427361:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8427364:	8b 40 28             	mov    0x28(%eax),%eax
 8427367:	89 85 8a fe ff ff    	mov    %eax,-0x176(%ebp)
 842736d:	c7 85 92 fe ff ff 00 	movl   $0x0,-0x16e(%ebp)
 8427374:	00 00 00 
 8427377:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842737a:	0f b6 80 a2 01 00 00 	movzbl 0x1a2(%eax),%eax
 8427381:	88 85 c3 fe ff ff    	mov    %al,-0x13d(%ebp)
 8427387:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842738a:	05 a2 00 00 00       	add    $0xa2,%eax
 842738f:	85 c0                	test   %eax,%eax
 8427391:	74 4f                	je     84273e2 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x104>
 8427393:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8427396:	0f b7 80 a0 00 00 00 	movzwl 0xa0(%eax),%eax
 842739d:	66 85 c0             	test   %ax,%ax
 84273a0:	74 40                	je     84273e2 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x104>
 84273a2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84273a5:	0f b7 80 a0 00 00 00 	movzwl 0xa0(%eax),%eax
 84273ac:	66 89 85 c5 fe ff ff 	mov    %ax,-0x13b(%ebp)
 84273b3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84273b6:	0f b7 80 a0 00 00 00 	movzwl 0xa0(%eax),%eax
 84273bd:	0f b7 c0             	movzwl %ax,%eax
 84273c0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84273c3:	81 c2 a2 00 00 00    	add    $0xa2,%edx
 84273c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84273cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84273d1:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 84273d7:	83 c0 5b             	add    $0x5b,%eax
 84273da:	89 04 24             	mov    %eax,(%esp)
 84273dd:	e8 ee 64 c5 ff       	call   807d8d0 <strncpy@plt>
 84273e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84273e5:	8b 00                	mov    (%eax),%eax
 84273e7:	85 c0                	test   %eax,%eax
 84273e9:	0f 85 cd 00 00 00    	jne    84274bc <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x1de>
 84273ef:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84273f2:	83 c0 2c             	add    $0x2c,%eax
 84273f5:	89 04 24             	mov    %eax,(%esp)
 84273f8:	e8 11 8a fd ff       	call   83ffe0e <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT>
 84273fd:	83 f0 01             	xor    $0x1,%eax
 8427400:	84 c0                	test   %al,%al
 8427402:	74 2c                	je     8427430 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x152>
 8427404:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842740b:	e8 f0 e3 2f 00       	call   8725800 <__cxa_allocate_exception>
 8427410:	89 c2                	mov    %eax,%edx
 8427412:	c7 02 71 68 00 00    	movl   $0x6871,(%edx)
 8427418:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842741f:	00 
 8427420:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8427427:	09 
 8427428:	89 04 24             	mov    %eax,(%esp)
 842742b:	e8 20 d8 2f 00       	call   8724c50 <__cxa_throw>
 8427430:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427433:	89 04 24             	mov    %eax,(%esp)
 8427436:	e8 99 26 fd ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 842743b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 842743e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8427442:	75 2c                	jne    8427470 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x192>
 8427444:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842744b:	e8 b0 e3 2f 00       	call   8725800 <__cxa_allocate_exception>
 8427450:	89 c2                	mov    %eax,%edx
 8427452:	c7 02 74 68 00 00    	movl   $0x6874,(%edx)
 8427458:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842745f:	00 
 8427460:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8427467:	09 
 8427468:	89 04 24             	mov    %eax,(%esp)
 842746b:	e8 e0 d7 2f 00       	call   8724c50 <__cxa_throw>
 8427470:	c6 85 96 fe ff ff 00 	movb   $0x0,-0x16a(%ebp)
 8427477:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842747a:	8b 40 30             	mov    0x30(%eax),%eax
 842747d:	89 85 97 fe ff ff    	mov    %eax,-0x169(%ebp)
 8427483:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8427486:	0f b6 40 35          	movzbl 0x35(%eax),%eax
 842748a:	0f b6 c0             	movzbl %al,%eax
 842748d:	66 89 85 a0 fe ff ff 	mov    %ax,-0x160(%ebp)
 8427494:	c6 85 9f fe ff ff 00 	movb   $0x0,-0x161(%ebp)
 842749b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842749e:	89 85 9b fe ff ff    	mov    %eax,-0x165(%ebp)
 84274a4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84274a7:	8b 40 54             	mov    0x54(%eax),%eax
 84274aa:	89 85 a2 fe ff ff    	mov    %eax,-0x15e(%ebp)
 84274b0:	c6 85 c2 fe ff ff 01 	movb   $0x1,-0x13e(%ebp)
 84274b7:	e9 ce 00 00 00       	jmp    842758a <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x2ac>
 84274bc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84274bf:	8b 00                	mov    (%eax),%eax
 84274c1:	83 f8 01             	cmp    $0x1,%eax
 84274c4:	0f 85 c0 00 00 00    	jne    842758a <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x2ac>
 84274ca:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84274cd:	83 c0 2c             	add    $0x2c,%eax
 84274d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84274d4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84274d7:	89 04 24             	mov    %eax,(%esp)
 84274da:	e8 49 85 ff ff       	call   841fa28 <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM>
 84274df:	83 f0 01             	xor    $0x1,%eax
 84274e2:	84 c0                	test   %al,%al
 84274e4:	74 2c                	je     8427512 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x234>
 84274e6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84274ed:	e8 0e e3 2f 00       	call   8725800 <__cxa_allocate_exception>
 84274f2:	89 c2                	mov    %eax,%edx
 84274f4:	c7 02 83 68 00 00    	movl   $0x6883,(%edx)
 84274fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8427501:	00 
 8427502:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8427509:	09 
 842750a:	89 04 24             	mov    %eax,(%esp)
 842750d:	e8 3e d7 2f 00       	call   8724c50 <__cxa_throw>
 8427512:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427515:	89 04 24             	mov    %eax,(%esp)
 8427518:	e8 b7 25 fd ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 842751d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8427520:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8427524:	75 2c                	jne    8427552 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x274>
 8427526:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 842752d:	e8 ce e2 2f 00       	call   8725800 <__cxa_allocate_exception>
 8427532:	89 c2                	mov    %eax,%edx
 8427534:	c7 02 86 68 00 00    	movl   $0x6886,(%edx)
 842753a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8427541:	00 
 8427542:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8427549:	09 
 842754a:	89 04 24             	mov    %eax,(%esp)
 842754d:	e8 fe d6 2f 00       	call   8724c50 <__cxa_throw>
 8427552:	c6 85 96 fe ff ff 00 	movb   $0x0,-0x16a(%ebp)
 8427559:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842755c:	8b 40 34             	mov    0x34(%eax),%eax
 842755f:	89 85 97 fe ff ff    	mov    %eax,-0x169(%ebp)
 8427565:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8427568:	0f b7 40 40          	movzwl 0x40(%eax),%eax
 842756c:	66 89 85 a0 fe ff ff 	mov    %ax,-0x160(%ebp)
 8427573:	c6 85 9f fe ff ff 00 	movb   $0x0,-0x161(%ebp)
 842757a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842757d:	89 85 9b fe ff ff    	mov    %eax,-0x165(%ebp)
 8427583:	c6 85 c4 fe ff ff 01 	movb   $0x1,-0x13c(%ebp)
 842758a:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 8427590:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427594:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8427597:	89 04 24             	mov    %eax,(%esp)
 842759a:	e8 5b 7d ff ff       	call   841f2fa <_ZN19DB_MailBox_Req_Send14insertMailDataEP5MySQLPK25SIG_MAILBOX_SEND_NEW_MAIL>
 842759f:	83 f0 01             	xor    $0x1,%eax
 84275a2:	84 c0                	test   %al,%al
 84275a4:	74 2c                	je     84275d2 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x2f4>
 84275a6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84275ad:	e8 4e e2 2f 00       	call   8725800 <__cxa_allocate_exception>
 84275b2:	89 c2                	mov    %eax,%edx
 84275b4:	c7 02 91 68 00 00    	movl   $0x6891,(%edx)
 84275ba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84275c1:	00 
 84275c2:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84275c9:	09 
 84275ca:	89 04 24             	mov    %eax,(%esp)
 84275cd:	e8 7e d6 2f 00       	call   8724c50 <__cxa_throw>
 84275d2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84275d5:	8b 40 24             	mov    0x24(%eax),%eax
 84275d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84275df:	00 
 84275e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84275e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84275eb:	00 
 84275ec:	8b 45 10             	mov    0x10(%ebp),%eax
 84275ef:	89 04 24             	mov    %eax,(%esp)
 84275f2:	e8 63 81 ff ff       	call   841f75a <_ZN19DB_MailBox_Req_Send10sendResultEiii17ENUM_SERVER_GROUP>
 84275f7:	83 f0 01             	xor    $0x1,%eax
 84275fa:	84 c0                	test   %al,%al
 84275fc:	0f 84 9f 00 00 00    	je     84276a1 <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x3c3>
 8427602:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8427609:	e8 f2 e1 2f 00       	call   8725800 <__cxa_allocate_exception>
 842760e:	89 c2                	mov    %eax,%edx
 8427610:	c7 02 94 68 00 00    	movl   $0x6894,(%edx)
 8427616:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842761d:	00 
 842761e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8427625:	09 
 8427626:	89 04 24             	mov    %eax,(%esp)
 8427629:	e8 22 d6 2f 00       	call   8724c50 <__cxa_throw>
 842762e:	83 fa 01             	cmp    $0x1,%edx
 8427631:	74 08                	je     842763b <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x35d>
 8427633:	89 04 24             	mov    %eax,(%esp)
 8427636:	e8 15 c1 6b 00       	call   8ae3750 <_Unwind_Resume>
 842763b:	89 04 24             	mov    %eax,(%esp)
 842763e:	e8 9d e6 2f 00       	call   8725ce0 <__cxa_begin_catch>
 8427643:	8b 00                	mov    (%eax),%eax
 8427645:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8427648:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842764f:	00 
 8427650:	c7 44 24 08 99 68 00 	movl   $0x6899,0x8(%esp)
 8427657:	00 
 8427658:	c7 44 24 04 80 c4 c5 	movl   $0x8c5c480,0x4(%esp)
 842765f:	08 
 8427660:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8427663:	89 04 24             	mov    %eax,(%esp)
 8427666:	e8 ad 80 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842766b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842766e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427672:	c7 44 24 04 ee 68 c3 	movl   $0x8c368ee,0x4(%esp)
 8427679:	08 
 842767a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 842767d:	89 04 24             	mov    %eax,(%esp)
 8427680:	e8 03 81 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8427685:	eb 15                	jmp    842769c <_ZN31DB_MailBoxSendNewMailWithDBWork8dispatchEiiP6Stream+0x3be>
 8427687:	89 d3                	mov    %edx,%ebx
 8427689:	89 c6                	mov    %eax,%esi
 842768b:	e8 a0 e5 2f 00       	call   8725c30 <__cxa_end_catch>
 8427690:	89 f0                	mov    %esi,%eax
 8427692:	89 da                	mov    %ebx,%edx
 8427694:	89 04 24             	mov    %eax,(%esp)
 8427697:	e8 b4 c0 6b 00       	call   8ae3750 <_Unwind_Resume>
 842769c:	e8 8f e5 2f 00       	call   8725c30 <__cxa_end_catch>
 84276a1:	b8 01 00 00 00       	mov    $0x1,%eax
 84276a6:	81 c4 a0 01 00 00    	add    $0x1a0,%esp
 84276ac:	5b                   	pop    %ebx
 84276ad:	5e                   	pop    %esi
 84276ae:	5d                   	pop    %ebp
 84276af:	c3                   	ret

```

```c
// DB_MailBoxSendNewMailWithDBWork::dispatch @ 0x84272de

/* DB_MailBoxSendNewMailWithDBWork::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBoxSendNewMailWithDBWork::dispatch
          (DB_MailBoxSendNewMailWithDBWork *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  SIG_MAILBOX_SEND_NEW_MAIL local_198 [30];
  int local_17a;
  int local_176;
  undefined4 local_172;
  undefined1 local_16e;
  int local_16d;
  int local_169;
  undefined1 local_165;
  ushort local_164;
  int local_162;
  undefined1 local_142;
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK local_141;
  undefined1 local_140;
  undefined2 local_13f;
  char acStack_13d [285];
  MySQL *local_20;
  SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *local_1c;
  int local_18;
  int local_14;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_1c = Stream::GetOutBuffer<SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK>(param_3);
  memset(local_198,0,0x168);
  strncpy((char *)local_198,(char *)(local_1c + 4),0x1d);
  local_176 = *(int *)(local_1c + 0x24);
  local_17a = *(int *)(local_1c + 0x28);
  local_172 = 0;
  local_141 = local_1c[0x1a2];
  if ((local_1c != (SIG_MAILBOX_SEND_NEW_MAIL_WITH_DBWORK *)0xffffff5e) &&
     (*(short *)(local_1c + 0xa0) != 0)) {
    local_13f = *(undefined2 *)(local_1c + 0xa0);
    strncpy(acStack_13d,(char *)(local_1c + 0xa2),(uint)*(ushort *)(local_1c + 0xa0));
  }
  if (*(int *)local_1c == 0) {
                    /* try { // try from 084273f8 to 0842762d has its CatchHandler @ 0842762e */
    cVar1 = DB_AvatarItemInsert::InsertAvatarItem((SIG_AVATAR_INSERT *)(local_1c + 0x2c));
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6871;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_169 = WongWork::DBCommon::GetIdentity(local_20);
    local_18 = local_169;
    if (local_169 == 0) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6874;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_16e = 0;
    local_16d = *(int *)(local_1c + 0x30);
    local_164 = (ushort)(byte)local_1c[0x35];
    local_165 = 0;
    local_162 = *(int *)(local_1c + 0x54);
    local_142 = 1;
  }
  else if (*(int *)local_1c == 1) {
    cVar1 = DB_InsertCreatureItem::insertCreatureItem
                      (local_20,(SIG_CREATURE_ITEM *)(local_1c + 0x2c));
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_169 = WongWork::DBCommon::GetIdentity(local_20);
    local_14 = local_169;
    if (local_169 == 0) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x6886;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    local_16e = 0;
    local_16d = *(int *)(local_1c + 0x34);
    local_164 = *(ushort *)(local_1c + 0x40);
    local_165 = 0;
    local_140 = 1;
  }
  cVar1 = DB_MailBox_Req_Send::insertMailData(local_20,local_198);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x6891;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = DB_MailBox_Req_Send::sendResult(param_2,0,*(int *)(local_1c + 0x24),0);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x6894;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

