# DB_MercenaryLogInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08446196 DB_MercenaryLogInfo::dispatch  [0x08446196-0x844633f] ===
 8446196:	55                   	push   %ebp
 8446197:	89 e5                	mov    %esp,%ebp
 8446199:	57                   	push   %edi
 844619a:	56                   	push   %esi
 844619b:	53                   	push   %ebx
 844619c:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 84461a2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84461a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84461ae:	00 
 84461af:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84461b6:	00 
 84461b7:	89 04 24             	mov    %eax,(%esp)
 84461ba:	e8 7f f0 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84461bf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84461c2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84461c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84461c9:	8b 45 14             	mov    0x14(%ebp),%eax
 84461cc:	89 04 24             	mov    %eax,(%esp)
 84461cf:	e8 c2 65 1d 00       	call   861c796 <_ZN6StreamrsERj>
 84461d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84461d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84461db:	8b 45 14             	mov    0x14(%ebp),%eax
 84461de:	89 04 24             	mov    %eax,(%esp)
 84461e1:	e8 de 63 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 84461e6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84461e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84461ed:	8b 45 14             	mov    0x14(%ebp),%eax
 84461f0:	89 04 24             	mov    %eax,(%esp)
 84461f3:	e8 cc 63 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 84461f8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84461fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84461ff:	8b 45 14             	mov    0x14(%ebp),%eax
 8446202:	89 04 24             	mov    %eax,(%esp)
 8446205:	e8 ba 63 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 844620a:	8d 45 c7             	lea    -0x39(%ebp),%eax
 844620d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446211:	8b 45 14             	mov    0x14(%ebp),%eax
 8446214:	89 04 24             	mov    %eax,(%esp)
 8446217:	e8 d4 62 1d 00       	call   861c4f0 <_ZN6StreamrsERc>
 844621c:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 844621f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446223:	8b 45 14             	mov    0x14(%ebp),%eax
 8446226:	89 04 24             	mov    %eax,(%esp)
 8446229:	e8 c2 62 1d 00       	call   861c4f0 <_ZN6StreamrsERc>
 844622e:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8446231:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446235:	8b 45 14             	mov    0x14(%ebp),%eax
 8446238:	89 04 24             	mov    %eax,(%esp)
 844623b:	e8 b0 62 1d 00       	call   861c4f0 <_ZN6StreamrsERc>
 8446240:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8446243:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446247:	8b 45 14             	mov    0x14(%ebp),%eax
 844624a:	89 04 24             	mov    %eax,(%esp)
 844624d:	e8 72 63 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8446252:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8446255:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446259:	8b 45 14             	mov    0x14(%ebp),%eax
 844625c:	89 04 24             	mov    %eax,(%esp)
 844625f:	e8 60 63 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8446264:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8446267:	89 44 24 04          	mov    %eax,0x4(%esp)
 844626b:	8b 45 14             	mov    0x14(%ebp),%eax
 844626e:	89 04 24             	mov    %eax,(%esp)
 8446271:	e8 4e 63 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8446276:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 8446279:	8b 7d cc             	mov    -0x34(%ebp),%edi
 844627c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 844627f:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8446282:	0f b6 45 c5          	movzbl -0x3b(%ebp),%eax
 8446286:	0f be c0             	movsbl %al,%eax
 8446289:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 844628c:	0f b6 45 c6          	movzbl -0x3a(%ebp),%eax
 8446290:	0f be c0             	movsbl %al,%eax
 8446293:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8446296:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 844629a:	0f be c0             	movsbl %al,%eax
 844629d:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84462a0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84462a3:	89 55 b0             	mov    %edx,-0x50(%ebp)
 84462a6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84462a9:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84462ac:	8b 75 dc             	mov    -0x24(%ebp),%esi
 84462af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84462b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84462b9:	00 
 84462ba:	89 04 24             	mov    %eax,(%esp)
 84462bd:	e8 89 2d cc ff       	call   810904b <_Z14NumberToStringji>
 84462c2:	89 5c 24 2c          	mov    %ebx,0x2c(%esp)
 84462c6:	89 7c 24 28          	mov    %edi,0x28(%esp)
 84462ca:	8b 55 a0             	mov    -0x60(%ebp),%edx
 84462cd:	89 54 24 24          	mov    %edx,0x24(%esp)
 84462d1:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 84462d4:	89 54 24 20          	mov    %edx,0x20(%esp)
 84462d8:	8b 55 a8             	mov    -0x58(%ebp),%edx
 84462db:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84462df:	8b 55 ac             	mov    -0x54(%ebp),%edx
 84462e2:	89 54 24 18          	mov    %edx,0x18(%esp)
 84462e6:	8b 55 b0             	mov    -0x50(%ebp),%edx
 84462e9:	89 54 24 14          	mov    %edx,0x14(%esp)
 84462ed:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84462f0:	89 54 24 10          	mov    %edx,0x10(%esp)
 84462f4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84462f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84462fc:	c7 44 24 04 1c 7b c5 	movl   $0x8c57b1c,0x4(%esp)
 8446303:	08 
 8446304:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8446307:	89 04 24             	mov    %eax,(%esp)
 844630a:	e8 b1 de fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844630f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446316:	00 
 8446317:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844631a:	89 04 24             	mov    %eax,(%esp)
 844631d:	e8 04 e0 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446322:	83 f0 01             	xor    $0x1,%eax
 8446325:	84 c0                	test   %al,%al
 8446327:	74 07                	je     8446330 <_ZN19DB_MercenaryLogInfo8dispatchEiiP6Stream+0x19a>
 8446329:	b8 00 00 00 00       	mov    $0x0,%eax
 844632e:	eb 05                	jmp    8446335 <_ZN19DB_MercenaryLogInfo8dispatchEiiP6Stream+0x19f>
 8446330:	b8 01 00 00 00       	mov    $0x1,%eax
 8446335:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 844633b:	5b                   	pop    %ebx
 844633c:	5e                   	pop    %esi
 844633d:	5f                   	pop    %edi
 844633e:	5d                   	pop    %ebp
 844633f:	c3                   	ret

```

```c
// DB_MercenaryLogInfo::dispatch @ 0x8446196

/* DB_MercenaryLogInfo::dispatch(int, int, Stream*) */

bool DB_MercenaryLogInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  char local_3f;
  char local_3e;
  char local_3d;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_30);
  Stream::operator>>(in_stack_00000010,&local_3d);
  Stream::operator>>(in_stack_00000010,&local_3e);
  Stream::operator>>(in_stack_00000010,&local_3f);
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_38);
  Stream::operator>>(in_stack_00000010,&local_3c);
  uVar2 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "inSert into log_mercenary(m_id,charac_no,start_time,finish_time,type,period,area,gold,item_id,rarity) values(%s,%u,from_unixtime(%d),from_unixtime(%d),%d,%d,%d,%d,%d,%d)"
                   ,uVar2,local_28,local_2c,local_30,(int)local_3d,(int)local_3e,(int)local_3f,
                   local_34,local_38,local_3c);
  cVar1 = MySQL::exec(local_20,true);
  return cVar1 == '\x01';
}

```

---

## makeRequest

```asm
// === 08446340 DB_MercenaryLogInfo::makeRequest  [0x08446340-0x8446515] ===
 8446340:	55                   	push   %ebp
 8446341:	89 e5                	mov    %esp,%ebp
 8446343:	56                   	push   %esi
 8446344:	53                   	push   %ebx
 8446345:	83 ec 30             	sub    $0x30,%esp
 8446348:	8b 4d 18             	mov    0x18(%ebp),%ecx
 844634b:	8b 55 1c             	mov    0x1c(%ebp),%edx
 844634e:	8b 45 20             	mov    0x20(%ebp),%eax
 8446351:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 8446354:	88 55 e0             	mov    %dl,-0x20(%ebp)
 8446357:	88 45 dc             	mov    %al,-0x24(%ebp)
 844635a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844635f:	c7 44 24 08 d0 ad 00 	movl   $0xadd0,0x8(%esp)
 8446366:	00 
 8446367:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844636e:	08 
 844636f:	89 04 24             	mov    %eax,(%esp)
 8446372:	e8 0f 97 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8446377:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844637e:	00 
 844637f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446383:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446386:	89 04 24             	mov    %eax,(%esp)
 8446389:	e8 98 28 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844638e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446391:	89 04 24             	mov    %eax,(%esp)
 8446394:	e8 ad 28 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446399:	c7 44 24 04 b8 02 00 	movl   $0x2b8,0x4(%esp)
 84463a0:	00 
 84463a1:	89 04 24             	mov    %eax,(%esp)
 84463a4:	e8 ad 28 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84463a9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84463ac:	89 04 24             	mov    %eax,(%esp)
 84463af:	e8 92 28 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84463b4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84463bb:	ff 
 84463bc:	89 04 24             	mov    %eax,(%esp)
 84463bf:	e8 92 28 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84463c4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84463c7:	89 04 24             	mov    %eax,(%esp)
 84463ca:	e8 77 28 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84463cf:	8b 55 08             	mov    0x8(%ebp),%edx
 84463d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84463d6:	89 04 24             	mov    %eax,(%esp)
 84463d9:	e8 b4 be c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84463de:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84463e1:	89 04 24             	mov    %eax,(%esp)
 84463e4:	e8 5d 28 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84463e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84463ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 84463f0:	89 04 24             	mov    %eax,(%esp)
 84463f3:	e8 9a be c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84463f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84463fb:	89 04 24             	mov    %eax,(%esp)
 84463fe:	e8 43 28 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446403:	8b 55 10             	mov    0x10(%ebp),%edx
 8446406:	89 54 24 04          	mov    %edx,0x4(%esp)
 844640a:	89 04 24             	mov    %eax,(%esp)
 844640d:	e8 80 be c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8446412:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446415:	89 04 24             	mov    %eax,(%esp)
 8446418:	e8 29 28 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844641d:	8b 55 14             	mov    0x14(%ebp),%edx
 8446420:	89 54 24 04          	mov    %edx,0x4(%esp)
 8446424:	89 04 24             	mov    %eax,(%esp)
 8446427:	e8 66 be c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844642c:	0f be 5d e4          	movsbl -0x1c(%ebp),%ebx
 8446430:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446433:	89 04 24             	mov    %eax,(%esp)
 8446436:	e8 0b 28 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844643b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844643f:	89 04 24             	mov    %eax,(%esp)
 8446442:	e8 bd ab cb ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 8446447:	0f be 5d e0          	movsbl -0x20(%ebp),%ebx
 844644b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844644e:	89 04 24             	mov    %eax,(%esp)
 8446451:	e8 f0 27 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446456:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844645a:	89 04 24             	mov    %eax,(%esp)
 844645d:	e8 a2 ab cb ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 8446462:	0f be 5d dc          	movsbl -0x24(%ebp),%ebx
 8446466:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446469:	89 04 24             	mov    %eax,(%esp)
 844646c:	e8 d5 27 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446471:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8446475:	89 04 24             	mov    %eax,(%esp)
 8446478:	e8 87 ab cb ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 844647d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446480:	89 04 24             	mov    %eax,(%esp)
 8446483:	e8 be 27 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8446488:	8b 55 24             	mov    0x24(%ebp),%edx
 844648b:	89 54 24 04          	mov    %edx,0x4(%esp)
 844648f:	89 04 24             	mov    %eax,(%esp)
 8446492:	e8 bf 27 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8446497:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844649a:	89 04 24             	mov    %eax,(%esp)
 844649d:	e8 a4 27 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84464a2:	8b 55 28             	mov    0x28(%ebp),%edx
 84464a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84464a9:	89 04 24             	mov    %eax,(%esp)
 84464ac:	e8 a5 27 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84464b1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84464b4:	89 04 24             	mov    %eax,(%esp)
 84464b7:	e8 8a 27 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84464bc:	8b 55 2c             	mov    0x2c(%ebp),%edx
 84464bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84464c3:	89 04 24             	mov    %eax,(%esp)
 84464c6:	e8 8b 27 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84464cb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84464d0:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84464d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84464d7:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84464de:	00 
 84464df:	89 04 24             	mov    %eax,(%esp)
 84464e2:	e8 f7 aa 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84464e7:	eb 1b                	jmp    8446504 <_ZN19DB_MercenaryLogInfo11makeRequestEjjjjccciii+0x1c4>
 84464e9:	89 d3                	mov    %edx,%ebx
 84464eb:	89 c6                	mov    %eax,%esi
 84464ed:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84464f0:	89 04 24             	mov    %eax,(%esp)
 84464f3:	e8 da 63 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84464f8:	89 f0                	mov    %esi,%eax
 84464fa:	89 da                	mov    %ebx,%edx
 84464fc:	89 04 24             	mov    %eax,(%esp)
 84464ff:	e8 4c d2 69 00       	call   8ae3750 <_Unwind_Resume>
 8446504:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8446507:	89 04 24             	mov    %eax,(%esp)
 844650a:	e8 c3 63 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844650f:	83 c4 30             	add    $0x30,%esp
 8446512:	5b                   	pop    %ebx
 8446513:	5e                   	pop    %esi
 8446514:	5d                   	pop    %ebp
 8446515:	c3                   	ret

```

```c
// DB_MercenaryLogInfo::makeRequest @ 0x8446340

/* DB_MercenaryLogInfo::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char,
   char, char, int, int, int) */

void DB_MercenaryLogInfo::makeRequest
               (uint param_1,uint param_2,uint param_3,uint param_4,char param_5,char param_6,
               char param_7,int param_8,int param_9,int param_10)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xadd0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084463a4 to 084464e6 has its CatchHandler @ 084464e9 */
  CStreamGuard::operator<<(pCVar2,0x2b8);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_7);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_8);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

