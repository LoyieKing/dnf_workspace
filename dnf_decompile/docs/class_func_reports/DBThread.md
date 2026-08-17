# DBThread

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DBThread

```asm
// === 083ff5f2 DBThread::DBThread  [0x083ff5f2-0x83ff647] ===
 83ff5f2:	55                   	push   %ebp
 83ff5f3:	89 e5                	mov    %esp,%ebp
 83ff5f5:	56                   	push   %esi
 83ff5f6:	53                   	push   %ebx
 83ff5f7:	83 ec 10             	sub    $0x10,%esp
 83ff5fa:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff5fd:	89 04 24             	mov    %eax,(%esp)
 83ff600:	e8 33 15 23 00       	call   8630b38 <_ZN15ThreadInterfaceC1Ev>
 83ff605:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff608:	c7 00 20 fd c5 08    	movl   $0x8c5fd20,(%eax)
 83ff60e:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff611:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 83ff615:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff618:	83 c0 10             	add    $0x10,%eax
 83ff61b:	89 04 24             	mov    %eax,(%esp)
 83ff61e:	e8 c9 d4 1e 00       	call   85ecaec <_ZN13CQueryCounterC1Ev>
 83ff623:	eb 1b                	jmp    83ff640 <_ZN8DBThreadC1Ev+0x4e>
 83ff625:	89 d3                	mov    %edx,%ebx
 83ff627:	89 c6                	mov    %eax,%esi
 83ff629:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff62c:	89 04 24             	mov    %eax,(%esp)
 83ff62f:	e8 12 15 23 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 83ff634:	89 f0                	mov    %esi,%eax
 83ff636:	89 da                	mov    %ebx,%edx
 83ff638:	89 04 24             	mov    %eax,(%esp)
 83ff63b:	e8 10 41 6e 00       	call   8ae3750 <_Unwind_Resume>
 83ff640:	83 c4 10             	add    $0x10,%esp
 83ff643:	5b                   	pop    %ebx
 83ff644:	5e                   	pop    %esi
 83ff645:	5d                   	pop    %ebp
 83ff646:	c3                   	ret
 83ff647:	90                   	nop

```

```c
// DBThread::DBThread @ 0x83ff5f2

/* DBThread::DBThread() */

void __thiscall DBThread::DBThread(DBThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08c5fd20;
  this[0xc] = (DBThread)0x0;
                    /* try { // try from 083ff61e to 083ff622 has its CatchHandler @ 083ff625 */
  CQueryCounter::CQueryCounter((CQueryCounter *)(this + 0x10));
  return;
}

```

---

## dispatch

```asm
// === 083ff786 DBThread::dispatch  [0x083ff786-0x83ff967] ===
 83ff786:	55                   	push   %ebp
 83ff787:	89 e5                	mov    %esp,%ebp
 83ff789:	57                   	push   %edi
 83ff78a:	56                   	push   %esi
 83ff78b:	53                   	push   %ebx
 83ff78c:	83 ec 6c             	sub    $0x6c,%esp
 83ff78f:	c7 04 24 54 0d 00 00 	movl   $0xd54,(%esp)
 83ff796:	e8 b5 4c 32 00       	call   8724450 <_Znwj>
 83ff79b:	89 c3                	mov    %eax,%ebx
 83ff79d:	89 d8                	mov    %ebx,%eax
 83ff79f:	89 04 24             	mov    %eax,(%esp)
 83ff7a2:	e8 1f c8 ff ff       	call   83fbfc6 <_ZN6DBTaskC1Ev>
 83ff7a7:	eb 18                	jmp    83ff7c1 <_ZN8DBThread8dispatchEPv+0x3b>
 83ff7a9:	89 d6                	mov    %edx,%esi
 83ff7ab:	89 c7                	mov    %eax,%edi
 83ff7ad:	89 1c 24             	mov    %ebx,(%esp)
 83ff7b0:	e8 3b 4d 32 00       	call   87244f0 <_ZdlPv>
 83ff7b5:	89 f8                	mov    %edi,%eax
 83ff7b7:	89 f2                	mov    %esi,%edx
 83ff7b9:	89 04 24             	mov    %eax,(%esp)
 83ff7bc:	e8 8f 3f 6e 00       	call   8ae3750 <_Unwind_Resume>
 83ff7c1:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 83ff7c4:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 83ff7c8:	75 30                	jne    83ff7fa <_ZN8DBThread8dispatchEPv+0x74>
 83ff7ca:	c7 44 24 04 14 68 c3 	movl   $0x8c36814,0x4(%esp)
 83ff7d1:	08 
 83ff7d2:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 83ff7d9:	e8 22 db 2f 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 83ff7de:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 83ff7e5:	08 
 83ff7e6:	89 04 24             	mov    %eax,(%esp)
 83ff7e9:	e8 72 c0 2f 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 83ff7ee:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 83ff7f5:	e8 40 cd 18 00       	call   858c53a <_ZN6OS_API4ExitEi>
 83ff7fa:	c7 45 d8 02 00 00 00 	movl   $0x2,-0x28(%ebp)
 83ff801:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff804:	89 04 24             	mov    %eax,(%esp)
 83ff807:	e8 6e ff ff ff       	call   83ff77a <_ZN8DBThread7isLogDBEv>
 83ff80c:	84 c0                	test   %al,%al
 83ff80e:	74 09                	je     83ff819 <_ZN8DBThread8dispatchEPv+0x93>
 83ff810:	c7 45 d8 04 00 00 00 	movl   $0x4,-0x28(%ebp)
 83ff817:	eb 07                	jmp    83ff820 <_ZN8DBThread8dispatchEPv+0x9a>
 83ff819:	c7 45 d8 02 00 00 00 	movl   $0x2,-0x28(%ebp)
 83ff820:	c7 44 24 04 20 4e 00 	movl   $0x4e20,0x4(%esp)
 83ff827:	00 
 83ff828:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83ff82b:	89 04 24             	mov    %eax,(%esp)
 83ff82e:	e8 03 e6 04 00       	call   844de36 <_ZN15message_counter15CMessageCounterC1Ei>
 83ff833:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 83ff83a:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 83ff841:	e8 2e 01 17 00       	call   856f974 <_ZN15message_counter13CTimeInterval6CreateEv>
 83ff846:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83ff849:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 83ff850:	e9 ac 00 00 00       	jmp    83ff901 <_ZN8DBThread8dispatchEPv+0x17b>
 83ff855:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 83ff85c:	e8 3d c4 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 83ff861:	89 45 dc             	mov    %eax,-0x24(%ebp)
 83ff864:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83ff867:	8b 00                	mov    (%eax),%eax
 83ff869:	8b 10                	mov    (%eax),%edx
 83ff86b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83ff86e:	89 04 24             	mov    %eax,(%esp)
 83ff871:	ff d2                	call   *%edx
 83ff873:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 83ff87a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 83ff87d:	89 44 24 08          	mov    %eax,0x8(%esp)
 83ff881:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83ff884:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff888:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 83ff88b:	89 04 24             	mov    %eax,(%esp)
 83ff88e:	e8 35 f9 ff ff       	call   83ff1c8 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi>
 83ff893:	83 f0 01             	xor    $0x1,%eax
 83ff896:	84 c0                	test   %al,%al
 83ff898:	75 7b                	jne    83ff915 <_ZN8DBThread8dispatchEPv+0x18f>
 83ff89a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 83ff89d:	85 c0                	test   %eax,%eax
 83ff89f:	74 60                	je     83ff901 <_ZN8DBThread8dispatchEPv+0x17b>
 83ff8a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83ff8a4:	8b 00                	mov    (%eax),%eax
 83ff8a6:	83 c0 04             	add    $0x4,%eax
 83ff8a9:	8b 10                	mov    (%eax),%edx
 83ff8ab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83ff8ae:	89 04 24             	mov    %eax,(%esp)
 83ff8b1:	ff d2                	call   *%edx
 83ff8b3:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 83ff8b6:	89 44 24 10          	mov    %eax,0x10(%esp)
 83ff8ba:	89 54 24 14          	mov    %edx,0x14(%esp)
 83ff8be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83ff8c5:	00 
 83ff8c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83ff8cd:	00 
 83ff8ce:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83ff8d2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83ff8d5:	89 04 24             	mov    %eax,(%esp)
 83ff8d8:	e8 e7 00 17 00       	call   856f9c4 <_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx>
 83ff8dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 83ff8e0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 83ff8e3:	89 d1                	mov    %edx,%ecx
 83ff8e5:	29 c1                	sub    %eax,%ecx
 83ff8e7:	89 c8                	mov    %ecx,%eax
 83ff8e9:	3d 58 02 00 00       	cmp    $0x258,%eax
 83ff8ee:	7e 11                	jle    83ff901 <_ZN8DBThread8dispatchEPv+0x17b>
 83ff8f0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83ff8f3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 83ff8f6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83ff8f9:	89 04 24             	mov    %eax,(%esp)
 83ff8fc:	e8 af 02 17 00       	call   856fbb0 <_ZN15message_counter15CMessageCounter8WriteLogEv>
 83ff901:	0f b6 05 64 bd 40 09 	movzbl 0x940bd64,%eax
 83ff908:	83 f0 01             	xor    $0x1,%eax
 83ff90b:	84 c0                	test   %al,%al
 83ff90d:	0f 85 42 ff ff ff    	jne    83ff855 <_ZN8DBThread8dispatchEPv+0xcf>
 83ff913:	eb 01                	jmp    83ff916 <_ZN8DBThread8dispatchEPv+0x190>
 83ff915:	90                   	nop
 83ff916:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83ff919:	89 04 24             	mov    %eax,(%esp)
 83ff91c:	e8 8f 00 17 00       	call   856f9b0 <_ZN15message_counter13CTimeInterval7DestoryEPS0_>
 83ff921:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 83ff924:	85 db                	test   %ebx,%ebx
 83ff926:	74 2d                	je     83ff955 <_ZN8DBThread8dispatchEPv+0x1cf>
 83ff928:	89 1c 24             	mov    %ebx,(%esp)
 83ff92b:	e8 aa c6 ff ff       	call   83fbfda <_ZN6DBTaskD1Ev>
 83ff930:	89 1c 24             	mov    %ebx,(%esp)
 83ff933:	e8 b8 4b 32 00       	call   87244f0 <_ZdlPv>
 83ff938:	eb 1b                	jmp    83ff955 <_ZN8DBThread8dispatchEPv+0x1cf>
 83ff93a:	89 d3                	mov    %edx,%ebx
 83ff93c:	89 c6                	mov    %eax,%esi
 83ff93e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83ff941:	89 04 24             	mov    %eax,(%esp)
 83ff944:	e8 c5 06 05 00       	call   845000e <_ZN15message_counter15CMessageCounterD1Ev>
 83ff949:	89 f0                	mov    %esi,%eax
 83ff94b:	89 da                	mov    %ebx,%edx
 83ff94d:	89 04 24             	mov    %eax,(%esp)
 83ff950:	e8 fb 3d 6e 00       	call   8ae3750 <_Unwind_Resume>
 83ff955:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83ff958:	89 04 24             	mov    %eax,(%esp)
 83ff95b:	e8 ae 06 05 00       	call   845000e <_ZN15message_counter15CMessageCounterD1Ev>
 83ff960:	83 c4 6c             	add    $0x6c,%esp
 83ff963:	5b                   	pop    %ebx
 83ff964:	5e                   	pop    %esi
 83ff965:	5f                   	pop    %edi
 83ff966:	5d                   	pop    %ebp
 83ff967:	c3                   	ret

```

```c
// DBThread::dispatch @ 0x83ff786

/* DBThread::dispatch(void*) */

void DBThread::dispatch(void *param_1)

{
  char cVar1;
  DBTask *pDVar2;
  ostream *this;
  uint uVar3;
  int local_50;
  CMessageCounter local_4c [28];
  DBTask *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  CTimeInterval *local_20;
  
  pDVar2 = operator_new(0xd54);
                    /* try { // try from 083ff7a2 to 083ff7a6 has its CatchHandler @ 083ff7a9 */
  DBTask::DBTask(pDVar2);
  local_30 = pDVar2;
  if (pDVar2 == (DBTask *)0x0) {
    this = std::operator<<((ostream *)&std::cerr,"[DBThread::dispatch] Memory allocation fail!");
    std::ostream::operator<<(this,std::endl<char,std::char_traits<char>>);
    OS_API::Exit(0);
  }
  local_2c = 2;
  cVar1 = isLogDB(param_1);
  if (cVar1 == '\0') {
    local_2c = 2;
  }
  else {
    local_2c = 4;
  }
  message_counter::CMessageCounter::CMessageCounter(local_4c,20000);
  local_28 = 0;
  local_24 = 0;
                    /* try { // try from 083ff841 to 083ff92f has its CatchHandler @ 083ff93a */
  local_20 = (CTimeInterval *)message_counter::CTimeInterval::Create();
  local_50 = 0;
  while (GlobalData::s_server_stop != '\x01') {
    local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    (*(code *)**(undefined4 **)local_20)(local_20);
    local_50 = 0;
    cVar1 = DBTask::HandleEvents(local_30,local_2c,&local_50);
    if (cVar1 != '\x01') break;
    if (local_50 != 0) {
      uVar3 = (**(code **)(*(int *)local_20 + 4))(local_20);
      message_counter::CMessageCounter::IncreaseMessage
                ((uint)local_4c,(uchar)local_50,0,(ulonglong)uVar3 << 0x20);
      if (600 < local_28 - local_24) {
        local_24 = local_28;
        message_counter::CMessageCounter::WriteLog(local_4c);
      }
    }
  }
  message_counter::CTimeInterval::Destory(local_20);
  pDVar2 = local_30;
  if (local_30 != (DBTask *)0x0) {
    DBTask::~DBTask(local_30);
    operator_delete(pDVar2);
  }
  message_counter::CMessageCounter::~CMessageCounter(local_4c);
  return;
}

```

---

## isLogDB

```asm
// === 083ff77a DBThread::isLogDB  [0x083ff77a-0x83ff785] ===
 83ff77a:	55                   	push   %ebp
 83ff77b:	89 e5                	mov    %esp,%ebp
 83ff77d:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff780:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 83ff784:	5d                   	pop    %ebp
 83ff785:	c3                   	ret

```

```c
// DBThread::isLogDB @ 0x83ff77a

/* DBThread::isLogDB() */

DBThread __thiscall DBThread::isLogDB(DBThread *this)

{
  return this[0xc];
}

```

---

## setLogDB

```asm
// === 083ff6c8 DBThread::setLogDB  [0x083ff6c8-0x83ff779] ===
 83ff6c8:	55                   	push   %ebp
 83ff6c9:	89 e5                	mov    %esp,%ebp
 83ff6cb:	83 ec 38             	sub    $0x38,%esp
 83ff6ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 83ff6d1:	88 45 e4             	mov    %al,-0x1c(%ebp)
 83ff6d4:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff6d7:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 83ff6db:	88 50 0c             	mov    %dl,0xc(%eax)
 83ff6de:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff6e1:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 83ff6e5:	0f b6 c0             	movzbl %al,%eax
 83ff6e8:	8b 55 08             	mov    0x8(%ebp),%edx
 83ff6eb:	83 c2 10             	add    $0x10,%edx
 83ff6ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff6f2:	89 14 24             	mov    %edx,(%esp)
 83ff6f5:	e8 40 df 04 00       	call   844d63a <_ZN13CQueryCounter8setLogDBEb>
 83ff6fa:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83ff701:	eb 6a                	jmp    83ff76d <_ZN8DBThread8setLogDBEb+0xa5>
 83ff703:	8b 55 f0             	mov    -0x10(%ebp),%edx
 83ff706:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83ff70b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83ff712:	00 
 83ff713:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ff717:	89 04 24             	mov    %eax,(%esp)
 83ff71a:	e8 1f 5b ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83ff71f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83ff722:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff725:	89 04 24             	mov    %eax,(%esp)
 83ff728:	e8 4d 00 00 00       	call   83ff77a <_ZN8DBThread7isLogDBEv>
 83ff72d:	84 c0                	test   %al,%al
 83ff72f:	74 1d                	je     83ff74e <_ZN8DBThread8setLogDBEb+0x86>
 83ff731:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 83ff735:	75 32                	jne    83ff769 <_ZN8DBThread8setLogDBEb+0xa1>
 83ff737:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff73a:	83 c0 10             	add    $0x10,%eax
 83ff73d:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff741:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ff744:	89 04 24             	mov    %eax,(%esp)
 83ff747:	e8 d0 5b ff ff       	call   83f531c <_ZN5MySQL15SetQueryCounterEP13CQueryCounter>
 83ff74c:	eb 1b                	jmp    83ff769 <_ZN8DBThread8setLogDBEb+0xa1>
 83ff74e:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 83ff752:	74 15                	je     83ff769 <_ZN8DBThread8setLogDBEb+0xa1>
 83ff754:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff757:	83 c0 10             	add    $0x10,%eax
 83ff75a:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff75e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ff761:	89 04 24             	mov    %eax,(%esp)
 83ff764:	e8 b3 5b ff ff       	call   83f531c <_ZN5MySQL15SetQueryCounterEP13CQueryCounter>
 83ff769:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83ff76d:	83 7d f0 10          	cmpl   $0x10,-0x10(%ebp)
 83ff771:	0f 9e c0             	setle  %al
 83ff774:	84 c0                	test   %al,%al
 83ff776:	75 8b                	jne    83ff703 <_ZN8DBThread8setLogDBEb+0x3b>
 83ff778:	c9                   	leave
 83ff779:	c3                   	ret

```

```c
// DBThread::setLogDB @ 0x83ff6c8

/* DBThread::setLogDB(bool) */

void __thiscall DBThread::setLogDB(DBThread *this,bool param_1)

{
  char cVar1;
  MySQL *this_00;
  int local_14;
  
  this[0xc] = (DBThread)param_1;
  CQueryCounter::setLogDB((CQueryCounter *)(this + 0x10),(bool)this[0xc]);
  for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,local_14,0);
    cVar1 = isLogDB(this);
    if (cVar1 == '\0') {
      if (local_14 != 4) {
        MySQL::SetQueryCounter(this_00,(CQueryCounter *)(this + 0x10));
      }
    }
    else if (local_14 == 4) {
      MySQL::SetQueryCounter(this_00,(CQueryCounter *)(this + 0x10));
    }
  }
  return;
}

```

---

## ~DBThread

```asm
// === 083ff648 DBThread::~DBThread  [0x083ff648-0x83ff6a9] ===
 83ff648:	55                   	push   %ebp
 83ff649:	89 e5                	mov    %esp,%ebp
 83ff64b:	56                   	push   %esi
 83ff64c:	53                   	push   %ebx
 83ff64d:	83 ec 10             	sub    $0x10,%esp
 83ff650:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff653:	c7 00 20 fd c5 08    	movl   $0x8c5fd20,(%eax)
 83ff659:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff65c:	83 c0 10             	add    $0x10,%eax
 83ff65f:	89 04 24             	mov    %eax,(%esp)
 83ff662:	e8 23 d5 1e 00       	call   85ecb8a <_ZN13CQueryCounterD1Ev>
 83ff667:	eb 1b                	jmp    83ff684 <_ZN8DBThreadD1Ev+0x3c>
 83ff669:	89 d3                	mov    %edx,%ebx
 83ff66b:	89 c6                	mov    %eax,%esi
 83ff66d:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff670:	89 04 24             	mov    %eax,(%esp)
 83ff673:	e8 ce 14 23 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 83ff678:	89 f0                	mov    %esi,%eax
 83ff67a:	89 da                	mov    %ebx,%edx
 83ff67c:	89 04 24             	mov    %eax,(%esp)
 83ff67f:	e8 cc 40 6e 00       	call   8ae3750 <_Unwind_Resume>
 83ff684:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff687:	89 04 24             	mov    %eax,(%esp)
 83ff68a:	e8 b7 14 23 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 83ff68f:	b8 00 00 00 00       	mov    $0x0,%eax
 83ff694:	84 c0                	test   %al,%al
 83ff696:	74 0b                	je     83ff6a3 <_ZN8DBThreadD1Ev+0x5b>
 83ff698:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff69b:	89 04 24             	mov    %eax,(%esp)
 83ff69e:	e8 4d 4e 32 00       	call   87244f0 <_ZdlPv>
 83ff6a3:	83 c4 10             	add    $0x10,%esp
 83ff6a6:	5b                   	pop    %ebx
 83ff6a7:	5e                   	pop    %esi
 83ff6a8:	5d                   	pop    %ebp
 83ff6a9:	c3                   	ret

```

```c
// DBThread::~DBThread @ 0x83ff648

/* WARNING: Removing unreachable block (ram,0x083ff698) */
/* DBThread::~DBThread() */

void __thiscall DBThread::~DBThread(DBThread *this)

{
  *(undefined ***)this = &PTR_stop_08c5fd20;
                    /* try { // try from 083ff662 to 083ff666 has its CatchHandler @ 083ff669 */
  CQueryCounter::~CQueryCounter((CQueryCounter *)(this + 0x10));
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}

```

---

## ~DBThread_083ff6aa

```asm
// === 083ff6aa DBThread::~DBThread  [0x083ff6aa-0x83ff6c7] ===
 83ff6aa:	55                   	push   %ebp
 83ff6ab:	89 e5                	mov    %esp,%ebp
 83ff6ad:	83 ec 18             	sub    $0x18,%esp
 83ff6b0:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff6b3:	89 04 24             	mov    %eax,(%esp)
 83ff6b6:	e8 8d ff ff ff       	call   83ff648 <_ZN8DBThreadD1Ev>
 83ff6bb:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff6be:	89 04 24             	mov    %eax,(%esp)
 83ff6c1:	e8 2a 4e 32 00       	call   87244f0 <_ZdlPv>
 83ff6c6:	c9                   	leave
 83ff6c7:	c3                   	ret

```

```c
// DBThread::~DBThread @ 0x83ff6aa

/* DBThread::~DBThread() */

void __thiscall DBThread::~DBThread(DBThread *this)

{
  ~DBThread(this);
  operator_delete(this);
  return;
}

```

