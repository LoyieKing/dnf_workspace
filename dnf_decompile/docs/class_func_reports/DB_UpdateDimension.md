# DB_UpdateDimension

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843230a DB_UpdateDimension::dispatch  [0x0843230a-0x8432645] ===
 843230a:	55                   	push   %ebp
 843230b:	89 e5                	mov    %esp,%ebp
 843230d:	57                   	push   %edi
 843230e:	56                   	push   %esi
 843230f:	53                   	push   %ebx
 8432310:	83 ec 6c             	sub    $0x6c,%esp
 8432313:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8432318:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843231f:	00 
 8432320:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8432327:	00 
 8432328:	89 04 24             	mov    %eax,(%esp)
 843232b:	e8 0e 2f fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8432330:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8432333:	8b 45 14             	mov    0x14(%ebp),%eax
 8432336:	89 04 24             	mov    %eax,(%esp)
 8432339:	e8 0e 0c 02 00       	call   8452f4c <_ZN6Stream12GetOutBufferI20SIG_UPDATE_DIMENSIONEEPT_v>
 843233e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8432341:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432344:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8432348:	84 c0                	test   %al,%al
 843234a:	0f 84 ea 01 00 00    	je     843253a <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x230>
 8432350:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432353:	8b 00                	mov    (%eax),%eax
 8432355:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8432358:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843235b:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 843235f:	0f be f8             	movsbl %al,%edi
 8432362:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432365:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8432369:	0f be f0             	movsbl %al,%esi
 843236c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843236f:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 8432373:	0f be d8             	movsbl %al,%ebx
 8432376:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432379:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 843237d:	0f be c8             	movsbl %al,%ecx
 8432380:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432383:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8432387:	0f be d0             	movsbl %al,%edx
 843238a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843238d:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8432391:	0f be c0             	movsbl %al,%eax
 8432394:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8432397:	8b 45 cc             	mov    -0x34(%ebp),%eax
 843239a:	89 44 24 20          	mov    %eax,0x20(%esp)
 843239e:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84323a2:	89 74 24 18          	mov    %esi,0x18(%esp)
 84323a6:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84323aa:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84323ae:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84323b2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84323b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84323b9:	c7 44 24 04 c8 20 c5 	movl   $0x8c520c8,0x4(%esp)
 84323c0:	08 
 84323c1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84323c4:	89 04 24             	mov    %eax,(%esp)
 84323c7:	e8 f4 1d fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84323cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84323d3:	00 
 84323d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84323d7:	89 04 24             	mov    %eax,(%esp)
 84323da:	e8 47 1f fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84323df:	83 f0 01             	xor    $0x1,%eax
 84323e2:	84 c0                	test   %al,%al
 84323e4:	75 11                	jne    84323f7 <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0xed>
 84323e6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84323e9:	89 04 24             	mov    %eax,(%esp)
 84323ec:	e8 1f 1f fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84323f1:	09 d0                	or     %edx,%eax
 84323f3:	85 c0                	test   %eax,%eax
 84323f5:	75 07                	jne    84323fe <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0xf4>
 84323f7:	b8 01 00 00 00       	mov    $0x1,%eax
 84323fc:	eb 05                	jmp    8432403 <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0xf9>
 84323fe:	b8 00 00 00 00       	mov    $0x0,%eax
 8432403:	84 c0                	test   %al,%al
 8432405:	0f 84 2f 01 00 00    	je     843253a <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x230>
 843240b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843240e:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8432412:	0f be c0             	movsbl %al,%eax
 8432415:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8432418:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843241b:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 843241f:	0f be f8             	movsbl %al,%edi
 8432422:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432425:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 8432429:	0f be f0             	movsbl %al,%esi
 843242c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843242f:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8432433:	0f be d8             	movsbl %al,%ebx
 8432436:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432439:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 843243d:	0f be c8             	movsbl %al,%ecx
 8432440:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432443:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8432447:	0f be d0             	movsbl %al,%edx
 843244a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843244d:	8b 00                	mov    (%eax),%eax
 843244f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8432452:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8432455:	89 44 24 20          	mov    %eax,0x20(%esp)
 8432459:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 843245d:	89 74 24 18          	mov    %esi,0x18(%esp)
 8432461:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8432465:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8432469:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843246d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8432470:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432474:	c7 44 24 04 c4 1f c5 	movl   $0x8c51fc4,0x4(%esp)
 843247b:	08 
 843247c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843247f:	89 04 24             	mov    %eax,(%esp)
 8432482:	e8 39 1d fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8432487:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843248e:	00 
 843248f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432492:	89 04 24             	mov    %eax,(%esp)
 8432495:	e8 8c 1e fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 843249a:	83 f0 01             	xor    $0x1,%eax
 843249d:	84 c0                	test   %al,%al
 843249f:	0f 84 95 00 00 00    	je     843253a <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x230>
 84324a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84324a8:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84324ac:	0f be c0             	movsbl %al,%eax
 84324af:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84324b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84324b5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84324b9:	0f be f8             	movsbl %al,%edi
 84324bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84324bf:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 84324c3:	0f be f0             	movsbl %al,%esi
 84324c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84324c9:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 84324cd:	0f be d8             	movsbl %al,%ebx
 84324d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84324d3:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 84324d7:	0f be c8             	movsbl %al,%ecx
 84324da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84324dd:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84324e1:	0f be d0             	movsbl %al,%edx
 84324e4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84324e7:	8b 00                	mov    (%eax),%eax
 84324e9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84324ec:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84324ef:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84324f3:	89 7c 24 28          	mov    %edi,0x28(%esp)
 84324f7:	89 74 24 24          	mov    %esi,0x24(%esp)
 84324fb:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 84324ff:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8432503:	89 54 24 18          	mov    %edx,0x18(%esp)
 8432507:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 843250a:	89 44 24 14          	mov    %eax,0x14(%esp)
 843250e:	c7 44 24 10 4c 21 c5 	movl   $0x8c5214c,0x10(%esp)
 8432515:	08 
 8432516:	c7 44 24 0c 72 79 00 	movl   $0x7972,0xc(%esp)
 843251d:	00 
 843251e:	c7 44 24 08 60 c1 c5 	movl   $0x8c5c160,0x8(%esp)
 8432525:	08 
 8432526:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843252d:	08 
 843252e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8432535:	e8 d0 16 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 843253a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843253d:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 8432541:	84 c0                	test   %al,%al
 8432543:	0f 84 f0 00 00 00    	je     8432639 <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x32f>
 8432549:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843254c:	8b 10                	mov    (%eax),%edx
 843254e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432551:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 8432555:	0f be c0             	movsbl %al,%eax
 8432558:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843255c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432560:	c7 44 24 04 b4 21 c5 	movl   $0x8c521b4,0x4(%esp)
 8432567:	08 
 8432568:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843256b:	89 04 24             	mov    %eax,(%esp)
 843256e:	e8 4d 1c fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8432573:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843257a:	00 
 843257b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843257e:	89 04 24             	mov    %eax,(%esp)
 8432581:	e8 a0 1d fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8432586:	83 f0 01             	xor    $0x1,%eax
 8432589:	84 c0                	test   %al,%al
 843258b:	75 11                	jne    843259e <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x294>
 843258d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432590:	89 04 24             	mov    %eax,(%esp)
 8432593:	e8 78 1d fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8432598:	09 d0                	or     %edx,%eax
 843259a:	85 c0                	test   %eax,%eax
 843259c:	75 07                	jne    84325a5 <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x29b>
 843259e:	b8 01 00 00 00       	mov    $0x1,%eax
 84325a3:	eb 05                	jmp    84325aa <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x2a0>
 84325a5:	b8 00 00 00 00       	mov    $0x0,%eax
 84325aa:	84 c0                	test   %al,%al
 84325ac:	0f 84 87 00 00 00    	je     8432639 <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x32f>
 84325b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84325b5:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84325b9:	0f be d0             	movsbl %al,%edx
 84325bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84325bf:	8b 00                	mov    (%eax),%eax
 84325c1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84325c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84325c9:	c7 44 24 04 84 20 c5 	movl   $0x8c52084,0x4(%esp)
 84325d0:	08 
 84325d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84325d4:	89 04 24             	mov    %eax,(%esp)
 84325d7:	e8 e4 1b fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84325dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84325e3:	00 
 84325e4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84325e7:	89 04 24             	mov    %eax,(%esp)
 84325ea:	e8 37 1d fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84325ef:	83 f0 01             	xor    $0x1,%eax
 84325f2:	84 c0                	test   %al,%al
 84325f4:	74 43                	je     8432639 <_ZN18DB_UpdateDimension8dispatchEiiP6Stream+0x32f>
 84325f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84325f9:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84325fd:	0f be d0             	movsbl %al,%edx
 8432600:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432603:	8b 00                	mov    (%eax),%eax
 8432605:	89 54 24 18          	mov    %edx,0x18(%esp)
 8432609:	89 44 24 14          	mov    %eax,0x14(%esp)
 843260d:	c7 44 24 10 f4 21 c5 	movl   $0x8c521f4,0x10(%esp)
 8432614:	08 
 8432615:	c7 44 24 0c 7e 79 00 	movl   $0x797e,0xc(%esp)
 843261c:	00 
 843261d:	c7 44 24 08 60 c1 c5 	movl   $0x8c5c160,0x8(%esp)
 8432624:	08 
 8432625:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843262c:	08 
 843262d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8432634:	e8 d1 15 6a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8432639:	b8 01 00 00 00       	mov    $0x1,%eax
 843263e:	83 c4 6c             	add    $0x6c,%esp
 8432641:	5b                   	pop    %ebx
 8432642:	5e                   	pop    %esi
 8432643:	5f                   	pop    %edi
 8432644:	5d                   	pop    %ebp
 8432645:	c3                   	ret

```

```c
// DB_UpdateDimension::dispatch @ 0x843230a

/* DB_UpdateDimension::dispatch(int, int, Stream*) */

undefined4 DB_UpdateDimension::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_DIMENSION *pSVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_DIMENSION>(in_stack_00000010);
  if (pSVar3[0xd] != (SIG_UPDATE_DIMENSION)0x0) {
    MySQL::set_query(this,
                     "upDate charac_dimension_inout set dungeon1=%d, dungeon2=%d, dungeon3=%d,  dungeon4=%d, dungeon5=%d, dungeon6=%d where charac_no=%u"
                     ,(int)(char)pSVar3[4],(int)(char)pSVar3[5],(int)(char)pSVar3[6],
                     (int)(char)pSVar3[7],(int)(char)pSVar3[8],(int)(char)pSVar3[9],
                     *(undefined4 *)pSVar3);
    cVar2 = MySQL::exec(this,true);
    if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      MySQL::set_query(this,
                       "inSert into charac_dimension_inout(charac_no,dungeon1,dungeon2,dungeon3,dungeon4,dungeon5,dungeon6) values(%u,%d,%d,%d,%d,%d,%d)"
                       ,*(undefined4 *)pSVar3,(int)(char)pSVar3[4],(int)(char)pSVar3[5],
                       (int)(char)pSVar3[6],(int)(char)pSVar3[7],(int)(char)pSVar3[8],
                       (int)(char)pSVar3[9]);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_UpdateDimension::dispatch(int, int, Stream*)",
                   0x7972,
                   "DIMENSION_LOG : INOUT CNT INSERT DB ERROR!! values(characno:%u,dungeon1:%d,2:%d,3:%d,4:%d,5:%d,6:%d)"
                   ,*(undefined4 *)pSVar3,(int)(char)pSVar3[4],(int)(char)pSVar3[5],
                   (int)(char)pSVar3[6],(int)(char)pSVar3[7],(int)(char)pSVar3[8],
                   (int)(char)pSVar3[9]);
      }
    }
  }
  if (pSVar3[0xe] != (SIG_UPDATE_DIMENSION)0x0) {
    MySQL::set_query(this,"upDate charac_blood_inout set dungeon1=%d where charac_no=%u",
                     (int)(char)pSVar3[0xc],*(undefined4 *)pSVar3);
    cVar2 = MySQL::exec(this,true);
    if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(this), lVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      MySQL::set_query(this,"inSert into charac_blood_inout(charac_no,dungeon1) values(%u,%d)",
                       *(undefined4 *)pSVar3,(int)(char)pSVar3[0xc]);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_UpdateDimension::dispatch(int, int, Stream*)",
                   0x797e,"BLOOD_LOG : INOUT CNT INSERT DB ERROR!! values(charac_no:%u,dungeon1:%d)"
                   ,*(undefined4 *)pSVar3,(int)(char)pSVar3[0xc]);
      }
    }
    return 1;
  }
  return 1;
}

```

