# CLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 17

---

## CLog

```asm
// === 0854e558 CLog::CLog  [0x0854e558-0x854e69b] ===
 854e558:	55                   	push   %ebp
 854e559:	89 e5                	mov    %esp,%ebp
 854e55b:	57                   	push   %edi
 854e55c:	56                   	push   %esi
 854e55d:	53                   	push   %ebx
 854e55e:	83 ec 1c             	sub    $0x1c,%esp
 854e561:	8b 45 08             	mov    0x8(%ebp),%eax
 854e564:	89 c3                	mov    %eax,%ebx
 854e566:	be 09 00 00 00       	mov    $0x9,%esi
 854e56b:	eb 0e                	jmp    854e57b <_ZN4CLogC1Ev+0x23>
 854e56d:	89 1c 24             	mov    %ebx,(%esp)
 854e570:	e8 9d ce b7 ff       	call   80cb412 <_ZN5MutexC1Ev>
 854e575:	83 c3 18             	add    $0x18,%ebx
 854e578:	83 ee 01             	sub    $0x1,%esi
 854e57b:	83 fe ff             	cmp    $0xffffffff,%esi
 854e57e:	0f 95 c0             	setne  %al
 854e581:	84 c0                	test   %al,%al
 854e583:	75 e8                	jne    854e56d <_ZN4CLogC1Ev+0x15>
 854e585:	8b 45 08             	mov    0x8(%ebp),%eax
 854e588:	c7 80 08 01 00 00 00 	movl   $0x0,0x108(%eax)
 854e58f:	00 00 00 
 854e592:	8b 45 08             	mov    0x8(%ebp),%eax
 854e595:	8b 90 08 01 00 00    	mov    0x108(%eax),%edx
 854e59b:	8b 45 08             	mov    0x8(%ebp),%eax
 854e59e:	89 90 04 01 00 00    	mov    %edx,0x104(%eax)
 854e5a4:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5a7:	8b 90 04 01 00 00    	mov    0x104(%eax),%edx
 854e5ad:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5b0:	89 90 fc 00 00 00    	mov    %edx,0xfc(%eax)
 854e5b6:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5b9:	8b 90 fc 00 00 00    	mov    0xfc(%eax),%edx
 854e5bf:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5c2:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
 854e5c8:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5cb:	8b 90 f8 00 00 00    	mov    0xf8(%eax),%edx
 854e5d1:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5d4:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
 854e5da:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5dd:	8b 90 f4 00 00 00    	mov    0xf4(%eax),%edx
 854e5e3:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5e6:	89 90 f0 00 00 00    	mov    %edx,0xf0(%eax)
 854e5ec:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5ef:	8b 90 f0 00 00 00    	mov    0xf0(%eax),%edx
 854e5f5:	8b 45 08             	mov    0x8(%ebp),%eax
 854e5f8:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 854e5fe:	8b 45 08             	mov    0x8(%ebp),%eax
 854e601:	c7 80 0c 01 00 00 00 	movl   $0x0,0x10c(%eax)
 854e608:	00 00 00 
 854e60b:	8b 45 08             	mov    0x8(%ebp),%eax
 854e60e:	c7 80 50 02 00 00 00 	movl   $0x0,0x250(%eax)
 854e615:	00 00 00 
 854e618:	8b 45 08             	mov    0x8(%ebp),%eax
 854e61b:	05 58 02 00 00       	add    $0x258,%eax
 854e620:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 854e627:	00 
 854e628:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854e62f:	00 
 854e630:	89 04 24             	mov    %eax,(%esp)
 854e633:	e8 88 f6 b2 ff       	call   807dcc0 <memset@plt>
 854e638:	8b 45 08             	mov    0x8(%ebp),%eax
 854e63b:	05 10 01 00 00       	add    $0x110,%eax
 854e640:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 854e647:	00 
 854e648:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854e64f:	00 
 854e650:	89 04 24             	mov    %eax,(%esp)
 854e653:	e8 68 f6 b2 ff       	call   807dcc0 <memset@plt>
 854e658:	e8 7e fd ff ff       	call   854e3db <_ZL17setLogWriterWiredv>
 854e65d:	eb 34                	jmp    854e693 <_ZN4CLogC1Ev+0x13b>
 854e65f:	89 d6                	mov    %edx,%esi
 854e661:	89 c7                	mov    %eax,%edi
 854e663:	8b 45 08             	mov    0x8(%ebp),%eax
 854e666:	85 c0                	test   %eax,%eax
 854e668:	74 1d                	je     854e687 <_ZN4CLogC1Ev+0x12f>
 854e66a:	8b 45 08             	mov    0x8(%ebp),%eax
 854e66d:	8d 98 f0 00 00 00    	lea    0xf0(%eax),%ebx
 854e673:	8b 45 08             	mov    0x8(%ebp),%eax
 854e676:	39 c3                	cmp    %eax,%ebx
 854e678:	74 0d                	je     854e687 <_ZN4CLogC1Ev+0x12f>
 854e67a:	83 eb 18             	sub    $0x18,%ebx
 854e67d:	89 1c 24             	mov    %ebx,(%esp)
 854e680:	e8 a9 cd b7 ff       	call   80cb42e <_ZN5MutexD1Ev>
 854e685:	eb ec                	jmp    854e673 <_ZN4CLogC1Ev+0x11b>
 854e687:	89 f8                	mov    %edi,%eax
 854e689:	89 f2                	mov    %esi,%edx
 854e68b:	89 04 24             	mov    %eax,(%esp)
 854e68e:	e8 bd 50 59 00       	call   8ae3750 <_Unwind_Resume>
 854e693:	83 c4 1c             	add    $0x1c,%esp
 854e696:	5b                   	pop    %ebx
 854e697:	5e                   	pop    %esi
 854e698:	5f                   	pop    %edi
 854e699:	5d                   	pop    %ebp
 854e69a:	c3                   	ret
 854e69b:	90                   	nop

```

```c
// CLog::CLog @ 0x854e558

/* CLog::CLog() */

void __thiscall CLog::CLog(CLog *this)

{
  CLog *this_00;
  int iVar1;
  
  this_00 = this;
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    Mutex::Mutex((Mutex *)this_00);
    this_00 = this_00 + 0x18;
  }
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(this + 0x108);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0x104);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xfc);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0xf8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xf4);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  memset(this + 600,0,0x100);
  memset(this + 0x110,0,0x100);
                    /* try { // try from 0854e658 to 0854e65c has its CatchHandler @ 0854e65f */
  setLogWriterWired();
  return;
}

```

---

## checkDay

```asm
// === 0854f594 CLog::checkDay  [0x0854f594-0x854f691] ===
 854f594:	55                   	push   %ebp
 854f595:	89 e5                	mov    %esp,%ebp
 854f597:	83 ec 28             	sub    $0x28,%esp
 854f59a:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 854f59e:	0f 84 82 00 00 00    	je     854f626 <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci+0x92>
 854f5a4:	8b 45 14             	mov    0x14(%ebp),%eax
 854f5a7:	0f b6 50 03          	movzbl 0x3(%eax),%edx
 854f5ab:	0f b6 45 0f          	movzbl 0xf(%ebp),%eax
 854f5af:	38 c2                	cmp    %al,%dl
 854f5b1:	75 1c                	jne    854f5cf <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci+0x3b>
 854f5b3:	0f b6 45 10          	movzbl 0x10(%ebp),%eax
 854f5b7:	0f be d0             	movsbl %al,%edx
 854f5ba:	8b 45 14             	mov    0x14(%ebp),%eax
 854f5bd:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 854f5c1:	0f be c0             	movsbl %al,%eax
 854f5c4:	03 45 20             	add    0x20(%ebp),%eax
 854f5c7:	39 c2                	cmp    %eax,%edx
 854f5c9:	0f 8c bb 00 00 00    	jl     854f68a <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci+0xf6>
 854f5cf:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 854f5d6:	00 
 854f5d7:	8d 45 0c             	lea    0xc(%ebp),%eax
 854f5da:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f5de:	8b 45 14             	mov    0x14(%ebp),%eax
 854f5e1:	89 04 24             	mov    %eax,(%esp)
 854f5e4:	e8 b7 e2 b2 ff       	call   807d8a0 <memcpy@plt>
 854f5e9:	8b 45 18             	mov    0x18(%ebp),%eax
 854f5ec:	8b 00                	mov    (%eax),%eax
 854f5ee:	89 04 24             	mov    %eax,(%esp)
 854f5f1:	e8 aa e8 b2 ff       	call   807dea0 <fclose@plt>
 854f5f6:	8b 45 20             	mov    0x20(%ebp),%eax
 854f5f9:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f5fd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854f600:	89 44 24 10          	mov    %eax,0x10(%esp)
 854f604:	8b 45 18             	mov    0x18(%ebp),%eax
 854f607:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854f60b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f60e:	8b 55 10             	mov    0x10(%ebp),%edx
 854f611:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f615:	89 54 24 08          	mov    %edx,0x8(%esp)
 854f619:	8b 45 08             	mov    0x8(%ebp),%eax
 854f61c:	89 04 24             	mov    %eax,(%esp)
 854f61f:	e8 4c f6 ff ff       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854f624:	eb 64                	jmp    854f68a <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci+0xf6>
 854f626:	8b 45 14             	mov    0x14(%ebp),%eax
 854f629:	0f b6 50 03          	movzbl 0x3(%eax),%edx
 854f62d:	0f b6 45 0f          	movzbl 0xf(%ebp),%eax
 854f631:	38 c2                	cmp    %al,%dl
 854f633:	74 55                	je     854f68a <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci+0xf6>
 854f635:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 854f63c:	00 
 854f63d:	8d 45 0c             	lea    0xc(%ebp),%eax
 854f640:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f644:	8b 45 14             	mov    0x14(%ebp),%eax
 854f647:	89 04 24             	mov    %eax,(%esp)
 854f64a:	e8 51 e2 b2 ff       	call   807d8a0 <memcpy@plt>
 854f64f:	8b 45 18             	mov    0x18(%ebp),%eax
 854f652:	8b 00                	mov    (%eax),%eax
 854f654:	89 04 24             	mov    %eax,(%esp)
 854f657:	e8 44 e8 b2 ff       	call   807dea0 <fclose@plt>
 854f65c:	8b 45 20             	mov    0x20(%ebp),%eax
 854f65f:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f663:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854f666:	89 44 24 10          	mov    %eax,0x10(%esp)
 854f66a:	8b 45 18             	mov    0x18(%ebp),%eax
 854f66d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854f671:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f674:	8b 55 10             	mov    0x10(%ebp),%edx
 854f677:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f67b:	89 54 24 08          	mov    %edx,0x8(%esp)
 854f67f:	8b 45 08             	mov    0x8(%ebp),%eax
 854f682:	89 04 24             	mov    %eax,(%esp)
 854f685:	e8 e6 f5 ff ff       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854f68a:	b8 01 00 00 00       	mov    $0x1,%eax
 854f68f:	c9                   	leave
 854f690:	c3                   	ret
 854f691:	90                   	nop

```

```c
// CLog::checkDay @ 0x854f594

/* CLog::checkDay(TimeLog_, TimeLog_*, _IO_FILE*&, char*, int) */

undefined4
CLog::checkDay(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
              undefined4 *param_5,undefined4 param_6,int param_7)

{
  if (param_7 == 0) {
    if (*(char *)((int)param_4 + 3) != param_2._3_1_) {
      memcpy(param_4,&param_2,8);
      fclose((FILE *)*param_5);
      openLogFile(param_1,param_2,param_3,param_5,param_6,param_7);
    }
  }
  else if ((*(char *)((int)param_4 + 3) != param_2._3_1_) ||
          (*(char *)((int)param_4 + 4) + param_7 <= (int)(char)param_3)) {
    memcpy(param_4,&param_2,8);
    fclose((FILE *)*param_5);
    openLogFile(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  return 1;
}

```

---

## getTime

```asm
// === 0854f692 CLog::getTime  [0x0854f692-0x854f717] ===
 854f692:	55                   	push   %ebp
 854f693:	89 e5                	mov    %esp,%ebp
 854f695:	83 ec 58             	sub    $0x58,%esp
 854f698:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 854f69f:	e8 ac e0 b2 ff       	call   807d750 <time@plt>
 854f6a4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f6a7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 854f6aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f6ae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854f6b1:	89 04 24             	mov    %eax,(%esp)
 854f6b4:	e8 a7 ec b2 ff       	call   807e360 <localtime_r@plt>
 854f6b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854f6bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f6bf:	8b 40 14             	mov    0x14(%eax),%eax
 854f6c2:	66 05 6c 07          	add    $0x76c,%ax
 854f6c6:	89 c2                	mov    %eax,%edx
 854f6c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f6cb:	66 89 10             	mov    %dx,(%eax)
 854f6ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f6d1:	8b 40 10             	mov    0x10(%eax),%eax
 854f6d4:	83 c0 01             	add    $0x1,%eax
 854f6d7:	89 c2                	mov    %eax,%edx
 854f6d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f6dc:	88 50 02             	mov    %dl,0x2(%eax)
 854f6df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f6e2:	8b 40 0c             	mov    0xc(%eax),%eax
 854f6e5:	89 c2                	mov    %eax,%edx
 854f6e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f6ea:	88 50 03             	mov    %dl,0x3(%eax)
 854f6ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f6f0:	8b 40 08             	mov    0x8(%eax),%eax
 854f6f3:	89 c2                	mov    %eax,%edx
 854f6f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f6f8:	88 50 04             	mov    %dl,0x4(%eax)
 854f6fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f6fe:	8b 40 04             	mov    0x4(%eax),%eax
 854f701:	89 c2                	mov    %eax,%edx
 854f703:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f706:	88 50 05             	mov    %dl,0x5(%eax)
 854f709:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f70c:	8b 00                	mov    (%eax),%eax
 854f70e:	89 c2                	mov    %eax,%edx
 854f710:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f713:	88 50 06             	mov    %dl,0x6(%eax)
 854f716:	c9                   	leave
 854f717:	c3                   	ret

```

```c
// CLog::getTime @ 0x854f692

/* CLog::getTime(TimeLog_*) */

void __thiscall CLog::getTime(CLog *this,TimeLog_ *param_1)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime_r(local_14,&local_40);
  *(short *)param_1 = (short)ptVar1->tm_year + 0x76c;
  param_1[2] = (char)ptVar1->tm_mon + '\x01';
  param_1[3] = (char)ptVar1->tm_mday;
  param_1[4] = (char)ptVar1->tm_hour;
  param_1[5] = (char)ptVar1->tm_min;
  param_1[6] = (char)ptVar1->tm_sec;
  return;
}

```

---

## initiate

```asm
// === 0854e88c CLog::initiate  [0x0854e88c-0x854ec6f] ===
 854e88c:	55                   	push   %ebp
 854e88d:	89 e5                	mov    %esp,%ebp
 854e88f:	81 ec 88 00 00 00    	sub    $0x88,%esp
 854e895:	8d 45 a0             	lea    -0x60(%ebp),%eax
 854e898:	89 44 24 04          	mov    %eax,0x4(%esp)
 854e89c:	8b 45 0c             	mov    0xc(%ebp),%eax
 854e89f:	89 04 24             	mov    %eax,(%esp)
 854e8a2:	e8 f3 82 bb ff       	call   8106b9a <stat>
 854e8a7:	c1 e8 1f             	shr    $0x1f,%eax
 854e8aa:	84 c0                	test   %al,%al
 854e8ac:	74 32                	je     854e8e0 <_ZN4CLog8initiateEPcS0_i+0x54>
 854e8ae:	c7 44 24 04 fd 01 00 	movl   $0x1fd,0x4(%esp)
 854e8b5:	00 
 854e8b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 854e8b9:	89 04 24             	mov    %eax,(%esp)
 854e8bc:	e8 3f ef b2 ff       	call   807d800 <mkdir@plt>
 854e8c1:	c1 e8 1f             	shr    $0x1f,%eax
 854e8c4:	84 c0                	test   %al,%al
 854e8c6:	74 18                	je     854e8e0 <_ZN4CLog8initiateEPcS0_i+0x54>
 854e8c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 854e8cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 854e8cf:	c7 04 24 50 ed c9 08 	movl   $0x8c9ed50,(%esp)
 854e8d6:	e8 85 f2 b2 ff       	call   807db60 <printf@plt>
 854e8db:	e9 8d 03 00 00       	jmp    854ec6d <_ZN4CLog8initiateEPcS0_i+0x3e1>
 854e8e0:	8b 45 08             	mov    0x8(%ebp),%eax
 854e8e3:	8b 55 14             	mov    0x14(%ebp),%edx
 854e8e6:	89 90 50 02 00 00    	mov    %edx,0x250(%eax)
 854e8ec:	8b 45 08             	mov    0x8(%ebp),%eax
 854e8ef:	c7 80 54 02 00 00 01 	movl   $0x1,0x254(%eax)
 854e8f6:	00 00 00 
 854e8f9:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 854e8fd:	74 22                	je     854e921 <_ZN4CLog8initiateEPcS0_i+0x95>
 854e8ff:	8b 45 08             	mov    0x8(%ebp),%eax
 854e902:	8d 90 58 02 00 00    	lea    0x258(%eax),%edx
 854e908:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 854e90f:	00 
 854e910:	8b 45 10             	mov    0x10(%ebp),%eax
 854e913:	89 44 24 04          	mov    %eax,0x4(%esp)
 854e917:	89 14 24             	mov    %edx,(%esp)
 854e91a:	e8 81 ef b2 ff       	call   807d8a0 <memcpy@plt>
 854e91f:	eb 20                	jmp    854e941 <_ZN4CLog8initiateEPcS0_i+0xb5>
 854e921:	8b 45 08             	mov    0x8(%ebp),%eax
 854e924:	05 58 02 00 00       	add    $0x258,%eax
 854e929:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 854e930:	00 
 854e931:	c7 44 24 04 72 ed c9 	movl   $0x8c9ed72,0x4(%esp)
 854e938:	08 
 854e939:	89 04 24             	mov    %eax,(%esp)
 854e93c:	e8 5f ef b2 ff       	call   807d8a0 <memcpy@plt>
 854e941:	8b 45 08             	mov    0x8(%ebp),%eax
 854e944:	05 10 02 00 00       	add    $0x210,%eax
 854e949:	89 04 24             	mov    %eax,(%esp)
 854e94c:	e8 d7 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e951:	8b 45 08             	mov    0x8(%ebp),%eax
 854e954:	05 18 02 00 00       	add    $0x218,%eax
 854e959:	89 04 24             	mov    %eax,(%esp)
 854e95c:	e8 c7 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e961:	8b 45 08             	mov    0x8(%ebp),%eax
 854e964:	05 20 02 00 00       	add    $0x220,%eax
 854e969:	89 04 24             	mov    %eax,(%esp)
 854e96c:	e8 b7 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e971:	8b 45 08             	mov    0x8(%ebp),%eax
 854e974:	05 28 02 00 00       	add    $0x228,%eax
 854e979:	89 04 24             	mov    %eax,(%esp)
 854e97c:	e8 a7 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e981:	8b 45 08             	mov    0x8(%ebp),%eax
 854e984:	05 30 02 00 00       	add    $0x230,%eax
 854e989:	89 04 24             	mov    %eax,(%esp)
 854e98c:	e8 97 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e991:	8b 45 08             	mov    0x8(%ebp),%eax
 854e994:	05 38 02 00 00       	add    $0x238,%eax
 854e999:	89 04 24             	mov    %eax,(%esp)
 854e99c:	e8 87 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e9a1:	8b 45 08             	mov    0x8(%ebp),%eax
 854e9a4:	05 40 02 00 00       	add    $0x240,%eax
 854e9a9:	89 04 24             	mov    %eax,(%esp)
 854e9ac:	e8 77 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e9b1:	8b 45 08             	mov    0x8(%ebp),%eax
 854e9b4:	05 48 02 00 00       	add    $0x248,%eax
 854e9b9:	89 04 24             	mov    %eax,(%esp)
 854e9bc:	e8 67 f8 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854e9c1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 854e9c5:	75 6e                	jne    854ea35 <_ZN4CLog8initiateEPcS0_i+0x1a9>
 854e9c7:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854e9cd:	8b 45 08             	mov    0x8(%ebp),%eax
 854e9d0:	89 90 f0 00 00 00    	mov    %edx,0xf0(%eax)
 854e9d6:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854e9dc:	8b 45 08             	mov    0x8(%ebp),%eax
 854e9df:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
 854e9e5:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854e9eb:	8b 45 08             	mov    0x8(%ebp),%eax
 854e9ee:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
 854e9f4:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854e9fa:	8b 45 08             	mov    0x8(%ebp),%eax
 854e9fd:	89 90 fc 00 00 00    	mov    %edx,0xfc(%eax)
 854ea03:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854ea09:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea0c:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 854ea12:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854ea18:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea1b:	89 90 08 01 00 00    	mov    %edx,0x108(%eax)
 854ea21:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854ea27:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea2a:	89 90 0c 01 00 00    	mov    %edx,0x10c(%eax)
 854ea30:	e9 38 02 00 00       	jmp    854ec6d <_ZN4CLog8initiateEPcS0_i+0x3e1>
 854ea35:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea38:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 854ea3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ea41:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ea45:	89 14 24             	mov    %edx,(%esp)
 854ea48:	e8 a3 f4 b2 ff       	call   807def0 <strcpy@plt>
 854ea4d:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea50:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854ea56:	8b 55 08             	mov    0x8(%ebp),%edx
 854ea59:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 854ea5f:	89 44 24 14          	mov    %eax,0x14(%esp)
 854ea63:	c7 44 24 10 76 ed c9 	movl   $0x8c9ed76,0x10(%esp)
 854ea6a:	08 
 854ea6b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854ea6f:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea72:	8b 90 14 02 00 00    	mov    0x214(%eax),%edx
 854ea78:	8b 80 10 02 00 00    	mov    0x210(%eax),%eax
 854ea7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ea82:	89 54 24 08          	mov    %edx,0x8(%esp)
 854ea86:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea89:	89 04 24             	mov    %eax,(%esp)
 854ea8c:	e8 df 01 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854ea91:	8b 45 08             	mov    0x8(%ebp),%eax
 854ea94:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854ea9a:	8b 55 08             	mov    0x8(%ebp),%edx
 854ea9d:	81 c2 f4 00 00 00    	add    $0xf4,%edx
 854eaa3:	89 44 24 14          	mov    %eax,0x14(%esp)
 854eaa7:	c7 44 24 10 7b ed c9 	movl   $0x8c9ed7b,0x10(%esp)
 854eaae:	08 
 854eaaf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854eab3:	8b 45 08             	mov    0x8(%ebp),%eax
 854eab6:	8b 90 1c 02 00 00    	mov    0x21c(%eax),%edx
 854eabc:	8b 80 18 02 00 00    	mov    0x218(%eax),%eax
 854eac2:	89 44 24 04          	mov    %eax,0x4(%esp)
 854eac6:	89 54 24 08          	mov    %edx,0x8(%esp)
 854eaca:	8b 45 08             	mov    0x8(%ebp),%eax
 854eacd:	89 04 24             	mov    %eax,(%esp)
 854ead0:	e8 9b 01 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854ead5:	8b 45 08             	mov    0x8(%ebp),%eax
 854ead8:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854eade:	8b 55 08             	mov    0x8(%ebp),%edx
 854eae1:	81 c2 f8 00 00 00    	add    $0xf8,%edx
 854eae7:	89 44 24 14          	mov    %eax,0x14(%esp)
 854eaeb:	c7 44 24 10 82 ed c9 	movl   $0x8c9ed82,0x10(%esp)
 854eaf2:	08 
 854eaf3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854eaf7:	8b 45 08             	mov    0x8(%ebp),%eax
 854eafa:	8b 90 24 02 00 00    	mov    0x224(%eax),%edx
 854eb00:	8b 80 20 02 00 00    	mov    0x220(%eax),%eax
 854eb06:	89 44 24 04          	mov    %eax,0x4(%esp)
 854eb0a:	89 54 24 08          	mov    %edx,0x8(%esp)
 854eb0e:	8b 45 08             	mov    0x8(%ebp),%eax
 854eb11:	89 04 24             	mov    %eax,(%esp)
 854eb14:	e8 57 01 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854eb19:	8b 45 08             	mov    0x8(%ebp),%eax
 854eb1c:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854eb22:	8b 55 08             	mov    0x8(%ebp),%edx
 854eb25:	81 c2 fc 00 00 00    	add    $0xfc,%edx
 854eb2b:	89 44 24 14          	mov    %eax,0x14(%esp)
 854eb2f:	c7 44 24 10 89 ed c9 	movl   $0x8c9ed89,0x10(%esp)
 854eb36:	08 
 854eb37:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854eb3b:	8b 45 08             	mov    0x8(%ebp),%eax
 854eb3e:	8b 90 2c 02 00 00    	mov    0x22c(%eax),%edx
 854eb44:	8b 80 28 02 00 00    	mov    0x228(%eax),%eax
 854eb4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 854eb4e:	89 54 24 08          	mov    %edx,0x8(%esp)
 854eb52:	8b 45 08             	mov    0x8(%ebp),%eax
 854eb55:	89 04 24             	mov    %eax,(%esp)
 854eb58:	e8 13 01 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854eb5d:	8b 45 08             	mov    0x8(%ebp),%eax
 854eb60:	8b 80 54 02 00 00    	mov    0x254(%eax),%eax
 854eb66:	8b 55 08             	mov    0x8(%ebp),%edx
 854eb69:	81 c2 00 01 00 00    	add    $0x100,%edx
 854eb6f:	89 44 24 14          	mov    %eax,0x14(%esp)
 854eb73:	c7 44 24 10 90 ed c9 	movl   $0x8c9ed90,0x10(%esp)
 854eb7a:	08 
 854eb7b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854eb7f:	8b 45 08             	mov    0x8(%ebp),%eax
 854eb82:	8b 90 34 02 00 00    	mov    0x234(%eax),%edx
 854eb88:	8b 80 30 02 00 00    	mov    0x230(%eax),%eax
 854eb8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 854eb92:	89 54 24 08          	mov    %edx,0x8(%esp)
 854eb96:	8b 45 08             	mov    0x8(%ebp),%eax
 854eb99:	89 04 24             	mov    %eax,(%esp)
 854eb9c:	e8 cf 00 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854eba1:	8b 45 08             	mov    0x8(%ebp),%eax
 854eba4:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854ebaa:	8b 55 08             	mov    0x8(%ebp),%edx
 854ebad:	81 c2 08 01 00 00    	add    $0x108,%edx
 854ebb3:	89 44 24 14          	mov    %eax,0x14(%esp)
 854ebb7:	c7 44 24 10 99 ed c9 	movl   $0x8c9ed99,0x10(%esp)
 854ebbe:	08 
 854ebbf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854ebc3:	8b 45 08             	mov    0x8(%ebp),%eax
 854ebc6:	8b 90 44 02 00 00    	mov    0x244(%eax),%edx
 854ebcc:	8b 80 40 02 00 00    	mov    0x240(%eax),%eax
 854ebd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ebd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 854ebda:	8b 45 08             	mov    0x8(%ebp),%eax
 854ebdd:	89 04 24             	mov    %eax,(%esp)
 854ebe0:	e8 8b 00 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854ebe5:	8b 45 08             	mov    0x8(%ebp),%eax
 854ebe8:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854ebee:	8b 55 08             	mov    0x8(%ebp),%edx
 854ebf1:	81 c2 04 01 00 00    	add    $0x104,%edx
 854ebf7:	89 44 24 14          	mov    %eax,0x14(%esp)
 854ebfb:	c7 44 24 10 9f ed c9 	movl   $0x8c9ed9f,0x10(%esp)
 854ec02:	08 
 854ec03:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854ec07:	8b 45 08             	mov    0x8(%ebp),%eax
 854ec0a:	8b 90 3c 02 00 00    	mov    0x23c(%eax),%edx
 854ec10:	8b 80 38 02 00 00    	mov    0x238(%eax),%eax
 854ec16:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ec1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 854ec1e:	8b 45 08             	mov    0x8(%ebp),%eax
 854ec21:	89 04 24             	mov    %eax,(%esp)
 854ec24:	e8 47 00 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854ec29:	8b 45 08             	mov    0x8(%ebp),%eax
 854ec2c:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854ec32:	8b 55 08             	mov    0x8(%ebp),%edx
 854ec35:	81 c2 0c 01 00 00    	add    $0x10c,%edx
 854ec3b:	89 44 24 14          	mov    %eax,0x14(%esp)
 854ec3f:	c7 44 24 10 a4 ed c9 	movl   $0x8c9eda4,0x10(%esp)
 854ec46:	08 
 854ec47:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854ec4b:	8b 45 08             	mov    0x8(%ebp),%eax
 854ec4e:	8b 90 4c 02 00 00    	mov    0x24c(%eax),%edx
 854ec54:	8b 80 48 02 00 00    	mov    0x248(%eax),%eax
 854ec5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ec5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 854ec62:	8b 45 08             	mov    0x8(%ebp),%eax
 854ec65:	89 04 24             	mov    %eax,(%esp)
 854ec68:	e8 03 00 00 00       	call   854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>
 854ec6d:	c9                   	leave
 854ec6e:	c3                   	ret
 854ec6f:	90                   	nop

```

```c
// CLog::initiate @ 0x854e88c

/* CLog::initiate(char*, char*, int) */

void __thiscall CLog::initiate(CLog *this,char *param_1,char *param_2,int param_3)

{
  int iVar1;
  stat local_64;
  
  iVar1 = stat(param_1,&local_64);
  if ((iVar1 < 0) && (iVar1 = mkdir(param_1,0x1fd), iVar1 < 0)) {
    printf("Fail To Make Directory, PATH[%s]\n",param_1);
    return;
  }
  *(int *)(this + 0x250) = param_3;
  *(undefined4 *)(this + 0x254) = 1;
  if (param_2 == (char *)0x0) {
    memcpy(this + 600,&DAT_08c9ed72,4);
  }
  else {
    memcpy(this + 600,param_2,0x100);
  }
  TimeLog_::setTime((TimeLog_ *)(this + 0x210));
  TimeLog_::setTime((TimeLog_ *)(this + 0x218));
  TimeLog_::setTime((TimeLog_ *)(this + 0x220));
  TimeLog_::setTime((TimeLog_ *)(this + 0x228));
  TimeLog_::setTime((TimeLog_ *)(this + 0x230));
  TimeLog_::setTime((TimeLog_ *)(this + 0x238));
  TimeLog_::setTime((TimeLog_ *)(this + 0x240));
  TimeLog_::setTime((TimeLog_ *)(this + 0x248));
  if (param_1 == (char *)0x0) {
    *(undefined4 *)(this + 0xf0) = stdout;
    *(undefined4 *)(this + 0xf4) = stdout;
    *(undefined4 *)(this + 0xf8) = stdout;
    *(undefined4 *)(this + 0xfc) = stdout;
    *(undefined4 *)(this + 0x100) = stdout;
    *(undefined4 *)(this + 0x108) = stdout;
    *(undefined4 *)(this + 0x10c) = stdout;
  }
  else {
    strcpy((char *)(this + 0x110),param_1);
    openLogFile(this,*(undefined4 *)(this + 0x210),*(undefined4 *)(this + 0x214),this + 0xf0,
                &DAT_08c9ed76,*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x218),*(undefined4 *)(this + 0x21c),this + 0xf4,
                ".error",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x220),*(undefined4 *)(this + 0x224),this + 0xf8,
                ".debug",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x228),*(undefined4 *)(this + 0x22c),this + 0xfc,
                ".money",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x230),*(undefined4 *)(this + 0x234),this + 0x100,
                ".history",*(undefined4 *)(this + 0x254));
    openLogFile(this,*(undefined4 *)(this + 0x240),*(undefined4 *)(this + 0x244),this + 0x108,
                ".init",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x238),*(undefined4 *)(this + 0x23c),this + 0x104,
                &DAT_08c9ed9f,*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x248),*(undefined4 *)(this + 0x24c),this + 0x10c,
                ".snap",*(undefined4 *)(this + 0x250));
  }
  return;
}

```

---

## logConsole

```asm
// === 0854f414 CLog::logConsole  [0x0854f414-0x854f4bf] ===
 854f414:	55                   	push   %ebp
 854f415:	89 e5                	mov    %esp,%ebp
 854f417:	53                   	push   %ebx
 854f418:	81 ec 34 20 00 00    	sub    $0x2034,%esp
 854f41e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 854f422:	75 0a                	jne    854f42e <_ZN4CLog10logConsoleEPKcz+0x1a>
 854f424:	b8 00 00 00 00       	mov    $0x0,%eax
 854f429:	e9 89 00 00 00       	jmp    854f4b7 <_ZN4CLog10logConsoleEPKcz+0xa3>
 854f42e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854f431:	89 04 24             	mov    %eax,(%esp)
 854f434:	e8 ef ed ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854f439:	8d 45 10             	lea    0x10(%ebp),%eax
 854f43c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 854f43f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 854f442:	89 44 24 08          	mov    %eax,0x8(%esp)
 854f446:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f449:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f44d:	8d 85 ec df ff ff    	lea    -0x2014(%ebp),%eax
 854f453:	89 04 24             	mov    %eax,(%esp)
 854f456:	e8 75 e3 b2 ff       	call   807d7d0 <vsprintf@plt>
 854f45b:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 854f45f:	0f be c8             	movsbl %al,%ecx
 854f462:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 854f466:	0f be d0             	movsbl %al,%edx
 854f469:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854f46d:	0f be c0             	movsbl %al,%eax
 854f470:	8d 9d ec df ff ff    	lea    -0x2014(%ebp),%ebx
 854f476:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 854f47a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 854f47e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854f482:	89 44 24 08          	mov    %eax,0x8(%esp)
 854f486:	c7 44 24 04 d0 ed c9 	movl   $0x8c9edd0,0x4(%esp)
 854f48d:	08 
 854f48e:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854f494:	89 04 24             	mov    %eax,(%esp)
 854f497:	e8 a4 ef b2 ff       	call   807e440 <sprintf@plt>
 854f49c:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854f4a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f4a6:	c7 04 24 e4 ed c9 08 	movl   $0x8c9ede4,(%esp)
 854f4ad:	e8 ae e6 b2 ff       	call   807db60 <printf@plt>
 854f4b2:	b8 01 00 00 00       	mov    $0x1,%eax
 854f4b7:	81 c4 34 20 00 00    	add    $0x2034,%esp
 854f4bd:	5b                   	pop    %ebx
 854f4be:	5d                   	pop    %ebp
 854f4bf:	c3                   	ret

```

```c
// CLog::logConsole @ 0x854f414

/* CLog::logConsole(char const*, ...) */

bool __thiscall CLog::logConsole(CLog *this,char *param_1,...)

{
  char local_2018 [4096];
  char local_1018 [4096];
  undefined1 *local_18;
  TimeLog_ local_14 [4];
  char local_10;
  char local_f;
  char local_e;
  
  if (this != (CLog *)0x0) {
    TimeLog_::setTime(local_14);
    local_18 = &stack0x0000000c;
    vsprintf(local_2018,param_1,local_18);
    sprintf(local_1018,"[%02d:%02d:%02d] %s",(int)local_10,(int)local_f,(int)local_e,local_2018);
    printf("%s\r\n",local_1018);
  }
  return this != (CLog *)0x0;
}

```

---

## logCritical

```asm
// === 0854f222 CLog::logCritical  [0x0854f222-0x854f281] ===
 854f222:	55                   	push   %ebp
 854f223:	89 e5                	mov    %esp,%ebp
 854f225:	83 ec 38             	sub    $0x38,%esp
 854f228:	8d 45 10             	lea    0x10(%ebp),%eax
 854f22b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f22e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854f231:	8b 55 08             	mov    0x8(%ebp),%edx
 854f234:	8d 8a 38 02 00 00    	lea    0x238(%edx),%ecx
 854f23a:	8b 55 08             	mov    0x8(%ebp),%edx
 854f23d:	81 c2 04 01 00 00    	add    $0x104,%edx
 854f243:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 854f24a:	00 
 854f24b:	89 44 24 18          	mov    %eax,0x18(%esp)
 854f24f:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f252:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f256:	c7 44 24 10 9f ed c9 	movl   $0x8c9ed9f,0x10(%esp)
 854f25d:	08 
 854f25e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854f265:	00 
 854f266:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 854f26a:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f26e:	8b 45 08             	mov    0x8(%ebp),%eax
 854f271:	89 04 24             	mov    %eax,(%esp)
 854f274:	e8 37 fb ff ff       	call   854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>
 854f279:	88 45 f7             	mov    %al,-0x9(%ebp)
 854f27c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 854f280:	c9                   	leave
 854f281:	c3                   	ret

```

```c
// CLog::logCritical @ 0x854f222

/* CLog::logCritical(char const*, ...) */

undefined1 __thiscall CLog::logCritical(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0x104),this + 0x238,false,".cri",param_1,
                    &stack0x0000000c,true);
  return uVar1;
}

```

---

## logDebug

```asm
// === 0854f40a CLog::logDebug  [0x0854f40a-0x854f413] ===
 854f40a:	55                   	push   %ebp
 854f40b:	89 e5                	mov    %esp,%ebp
 854f40d:	b8 01 00 00 00       	mov    $0x1,%eax
 854f412:	5d                   	pop    %ebp
 854f413:	c3                   	ret

```

```c
// CLog::logDebug @ 0x854f40a

/* CLog::logDebug(char const*, ...) */

undefined4 CLog::logDebug(char *param_1,...)

{
  return 1;
}

```

---

## logError

```asm
// === 0854f1c2 CLog::logError  [0x0854f1c2-0x854f221] ===
 854f1c2:	55                   	push   %ebp
 854f1c3:	89 e5                	mov    %esp,%ebp
 854f1c5:	83 ec 38             	sub    $0x38,%esp
 854f1c8:	8d 45 10             	lea    0x10(%ebp),%eax
 854f1cb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f1ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854f1d1:	8b 55 08             	mov    0x8(%ebp),%edx
 854f1d4:	8d 8a 18 02 00 00    	lea    0x218(%edx),%ecx
 854f1da:	8b 55 08             	mov    0x8(%ebp),%edx
 854f1dd:	81 c2 f4 00 00 00    	add    $0xf4,%edx
 854f1e3:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 854f1ea:	00 
 854f1eb:	89 44 24 18          	mov    %eax,0x18(%esp)
 854f1ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f1f2:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f1f6:	c7 44 24 10 7b ed c9 	movl   $0x8c9ed7b,0x10(%esp)
 854f1fd:	08 
 854f1fe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854f205:	00 
 854f206:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 854f20a:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f20e:	8b 45 08             	mov    0x8(%ebp),%eax
 854f211:	89 04 24             	mov    %eax,(%esp)
 854f214:	e8 97 fb ff ff       	call   854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>
 854f219:	88 45 f7             	mov    %al,-0x9(%ebp)
 854f21c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 854f220:	c9                   	leave
 854f221:	c3                   	ret

```

```c
// CLog::logError @ 0x854f1c2

/* CLog::logError(char const*, ...) */

undefined1 __thiscall CLog::logError(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0xf4),this + 0x218,false,".error",param_1,
                    &stack0x0000000c,true);
  return uVar1;
}

```

---

## logHistory

```asm
// === 0854f2e2 CLog::logHistory  [0x0854f2e2-0x854f409] ===
 854f2e2:	55                   	push   %ebp
 854f2e3:	89 e5                	mov    %esp,%ebp
 854f2e5:	81 ec 38 10 00 00    	sub    $0x1038,%esp
 854f2eb:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 854f2ef:	75 0a                	jne    854f2fb <_ZN4CLog10logHistoryEPKcPc+0x19>
 854f2f1:	b8 00 00 00 00       	mov    $0x0,%eax
 854f2f6:	e9 0d 01 00 00       	jmp    854f408 <_ZN4CLog10logHistoryEPKcPc+0x126>
 854f2fb:	8b 45 08             	mov    0x8(%ebp),%eax
 854f2fe:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 854f304:	85 c0                	test   %eax,%eax
 854f306:	75 0a                	jne    854f312 <_ZN4CLog10logHistoryEPKcPc+0x30>
 854f308:	b8 00 00 00 00       	mov    $0x0,%eax
 854f30d:	e9 f6 00 00 00       	jmp    854f408 <_ZN4CLog10logHistoryEPKcPc+0x126>
 854f312:	8b 45 08             	mov    0x8(%ebp),%eax
 854f315:	8b 90 00 01 00 00    	mov    0x100(%eax),%edx
 854f31b:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854f320:	39 c2                	cmp    %eax,%edx
 854f322:	74 64                	je     854f388 <_ZN4CLog10logHistoryEPKcPc+0xa6>
 854f324:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854f327:	89 04 24             	mov    %eax,(%esp)
 854f32a:	e8 f9 ee ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854f32f:	8b 45 08             	mov    0x8(%ebp),%eax
 854f332:	8b 80 54 02 00 00    	mov    0x254(%eax),%eax
 854f338:	8b 55 08             	mov    0x8(%ebp),%edx
 854f33b:	8d 8a 00 01 00 00    	lea    0x100(%edx),%ecx
 854f341:	8b 55 08             	mov    0x8(%ebp),%edx
 854f344:	81 c2 30 02 00 00    	add    $0x230,%edx
 854f34a:	89 44 24 18          	mov    %eax,0x18(%esp)
 854f34e:	c7 44 24 14 90 ed c9 	movl   $0x8c9ed90,0x14(%esp)
 854f355:	08 
 854f356:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 854f35a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854f35e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 854f361:	8b 55 ec             	mov    -0x14(%ebp),%edx
 854f364:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f368:	89 54 24 08          	mov    %edx,0x8(%esp)
 854f36c:	8b 45 08             	mov    0x8(%ebp),%eax
 854f36f:	89 04 24             	mov    %eax,(%esp)
 854f372:	e8 1d 02 00 00       	call   854f594 <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci>
 854f377:	83 f0 01             	xor    $0x1,%eax
 854f37a:	84 c0                	test   %al,%al
 854f37c:	74 0a                	je     854f388 <_ZN4CLog10logHistoryEPKcPc+0xa6>
 854f37e:	b8 00 00 00 00       	mov    $0x0,%eax
 854f383:	e9 80 00 00 00       	jmp    854f408 <_ZN4CLog10logHistoryEPKcPc+0x126>
 854f388:	8b 45 10             	mov    0x10(%ebp),%eax
 854f38b:	89 44 24 08          	mov    %eax,0x8(%esp)
 854f38f:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f392:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f396:	8d 85 e8 ef ff ff    	lea    -0x1018(%ebp),%eax
 854f39c:	89 04 24             	mov    %eax,(%esp)
 854f39f:	e8 2c e4 b2 ff       	call   807d7d0 <vsprintf@plt>
 854f3a4:	8d 85 e8 ef ff ff    	lea    -0x1018(%ebp),%eax
 854f3aa:	89 04 24             	mov    %eax,(%esp)
 854f3ad:	e8 fe ef b2 ff       	call   807e3b0 <strlen@plt>
 854f3b2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f3b5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 854f3bc:	eb 04                	jmp    854f3c2 <_ZN4CLog10logHistoryEPKcPc+0xe0>
 854f3be:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 854f3c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f3c5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 854f3c8:	0f 9c c0             	setl   %al
 854f3cb:	84 c0                	test   %al,%al
 854f3cd:	75 ef                	jne    854f3be <_ZN4CLog10logHistoryEPKcPc+0xdc>
 854f3cf:	8b 45 08             	mov    0x8(%ebp),%eax
 854f3d2:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 854f3d8:	8d 95 e8 ef ff ff    	lea    -0x1018(%ebp),%edx
 854f3de:	89 54 24 08          	mov    %edx,0x8(%esp)
 854f3e2:	c7 44 24 04 e4 ed c9 	movl   $0x8c9ede4,0x4(%esp)
 854f3e9:	08 
 854f3ea:	89 04 24             	mov    %eax,(%esp)
 854f3ed:	e8 9e e6 b2 ff       	call   807da90 <fprintf@plt>
 854f3f2:	8b 45 08             	mov    0x8(%ebp),%eax
 854f3f5:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 854f3fb:	89 04 24             	mov    %eax,(%esp)
 854f3fe:	e8 cd f4 b2 ff       	call   807e8d0 <fflush@plt>
 854f403:	b8 01 00 00 00       	mov    $0x1,%eax
 854f408:	c9                   	leave
 854f409:	c3                   	ret

```

```c
// CLog::logHistory @ 0x854f2e2

/* CLog::logHistory(char const*, char*) */

undefined4 __thiscall CLog::logHistory(CLog *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char local_101c [4096];
  undefined4 local_1c;
  undefined4 local_18;
  size_t local_14;
  int local_10;
  
  if (this == (CLog *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(this + 0x100) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(this + 0x100) != stdout) {
      TimeLog_::setTime((TimeLog_ *)&local_1c);
      cVar1 = checkDay(this,local_1c,local_18,this + 0x230,this + 0x100,".history",
                       *(undefined4 *)(this + 0x254));
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    vsprintf(local_101c,param_1,param_2);
    local_14 = strlen(local_101c);
    for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
    }
    fprintf(*(FILE **)(this + 0x100),"%s\r\n",local_101c);
    fflush(*(FILE **)(this + 0x100));
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## logInit

```asm
// === 0854f520 CLog::logInit  [0x0854f520-0x854f593] ===
 854f520:	55                   	push   %ebp
 854f521:	89 e5                	mov    %esp,%ebp
 854f523:	56                   	push   %esi
 854f524:	53                   	push   %ebx
 854f525:	83 ec 40             	sub    $0x40,%esp
 854f528:	8b 55 0c             	mov    0xc(%ebp),%edx
 854f52b:	8b 45 10             	mov    0x10(%ebp),%eax
 854f52e:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 854f531:	88 45 e0             	mov    %al,-0x20(%ebp)
 854f534:	8d 45 18             	lea    0x18(%ebp),%eax
 854f537:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f53a:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
 854f53e:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 854f542:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854f545:	8b 5d 08             	mov    0x8(%ebp),%ebx
 854f548:	8d b3 40 02 00 00    	lea    0x240(%ebx),%esi
 854f54e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 854f551:	81 c3 08 01 00 00    	add    $0x108,%ebx
 854f557:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 854f55b:	89 54 24 18          	mov    %edx,0x18(%esp)
 854f55f:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f563:	8b 45 14             	mov    0x14(%ebp),%eax
 854f566:	89 44 24 10          	mov    %eax,0x10(%esp)
 854f56a:	c7 44 24 0c 99 ed c9 	movl   $0x8c9ed99,0xc(%esp)
 854f571:	08 
 854f572:	89 74 24 08          	mov    %esi,0x8(%esp)
 854f576:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854f57a:	8b 45 08             	mov    0x8(%ebp),%eax
 854f57d:	89 04 24             	mov    %eax,(%esp)
 854f580:	e8 d1 f9 ff ff       	call   854ef56 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb>
 854f585:	88 45 f7             	mov    %al,-0x9(%ebp)
 854f588:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 854f58c:	83 c4 40             	add    $0x40,%esp
 854f58f:	5b                   	pop    %ebx
 854f590:	5e                   	pop    %esi
 854f591:	5d                   	pop    %ebp
 854f592:	c3                   	ret
 854f593:	90                   	nop

```

```c
// CLog::logInit @ 0x854f520

/* CLog::logInit(bool, bool, char const*, ...) */

undefined1 __thiscall CLog::logInit(CLog *this,bool param_1,bool param_2,char *param_3,...)

{
  undefined1 uVar1;
  
  uVar1 = logToInitFile(this,(_IO_FILE **)(this + 0x108),this + 0x240,".init",param_3,
                        &stack0x00000014,param_1,param_2);
  return uVar1;
}

```

---

## logMoney

```asm
// === 0854f282 CLog::logMoney  [0x0854f282-0x854f2e1] ===
 854f282:	55                   	push   %ebp
 854f283:	89 e5                	mov    %esp,%ebp
 854f285:	83 ec 38             	sub    $0x38,%esp
 854f288:	8d 45 10             	lea    0x10(%ebp),%eax
 854f28b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f28e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854f291:	8b 55 08             	mov    0x8(%ebp),%edx
 854f294:	8d 8a 28 02 00 00    	lea    0x228(%edx),%ecx
 854f29a:	8b 55 08             	mov    0x8(%ebp),%edx
 854f29d:	81 c2 fc 00 00 00    	add    $0xfc,%edx
 854f2a3:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 854f2aa:	00 
 854f2ab:	89 44 24 18          	mov    %eax,0x18(%esp)
 854f2af:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f2b2:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f2b6:	c7 44 24 10 89 ed c9 	movl   $0x8c9ed89,0x10(%esp)
 854f2bd:	08 
 854f2be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854f2c5:	00 
 854f2c6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 854f2ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f2ce:	8b 45 08             	mov    0x8(%ebp),%eax
 854f2d1:	89 04 24             	mov    %eax,(%esp)
 854f2d4:	e8 d7 fa ff ff       	call   854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>
 854f2d9:	88 45 f7             	mov    %al,-0x9(%ebp)
 854f2dc:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 854f2e0:	c9                   	leave
 854f2e1:	c3                   	ret

```

```c
// CLog::logMoney @ 0x854f282

/* CLog::logMoney(char const*, ...) */

undefined1 __thiscall CLog::logMoney(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0xfc),this + 0x228,false,".money",param_1,
                    &stack0x0000000c,true);
  return uVar1;
}

```

---

## logNotice

```asm
// === 0854f162 CLog::logNotice  [0x0854f162-0x854f1c1] ===
 854f162:	55                   	push   %ebp
 854f163:	89 e5                	mov    %esp,%ebp
 854f165:	83 ec 38             	sub    $0x38,%esp
 854f168:	8d 45 10             	lea    0x10(%ebp),%eax
 854f16b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f16e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854f171:	8b 55 08             	mov    0x8(%ebp),%edx
 854f174:	8d 8a 10 02 00 00    	lea    0x210(%edx),%ecx
 854f17a:	8b 55 08             	mov    0x8(%ebp),%edx
 854f17d:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 854f183:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 854f18a:	00 
 854f18b:	89 44 24 18          	mov    %eax,0x18(%esp)
 854f18f:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f192:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f196:	c7 44 24 10 76 ed c9 	movl   $0x8c9ed76,0x10(%esp)
 854f19d:	08 
 854f19e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854f1a5:	00 
 854f1a6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 854f1aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f1ae:	8b 45 08             	mov    0x8(%ebp),%eax
 854f1b1:	89 04 24             	mov    %eax,(%esp)
 854f1b4:	e8 f7 fb ff ff       	call   854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>
 854f1b9:	88 45 f7             	mov    %al,-0x9(%ebp)
 854f1bc:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 854f1c0:	c9                   	leave
 854f1c1:	c3                   	ret

```

```c
// CLog::logNotice @ 0x854f162

/* CLog::logNotice(char const*, ...) */

undefined1 __thiscall CLog::logNotice(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0xf0),this + 0x210,false,".log",param_1,
                    &stack0x0000000c,true);
  return uVar1;
}

```

---

## logSnapShot

```asm
// === 0854f4c0 CLog::logSnapShot  [0x0854f4c0-0x854f51f] ===
 854f4c0:	55                   	push   %ebp
 854f4c1:	89 e5                	mov    %esp,%ebp
 854f4c3:	83 ec 38             	sub    $0x38,%esp
 854f4c6:	8d 45 10             	lea    0x10(%ebp),%eax
 854f4c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f4cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854f4cf:	8b 55 08             	mov    0x8(%ebp),%edx
 854f4d2:	8d 8a 48 02 00 00    	lea    0x248(%edx),%ecx
 854f4d8:	8b 55 08             	mov    0x8(%ebp),%edx
 854f4db:	81 c2 0c 01 00 00    	add    $0x10c,%edx
 854f4e1:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 854f4e8:	00 
 854f4e9:	89 44 24 18          	mov    %eax,0x18(%esp)
 854f4ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f4f0:	89 44 24 14          	mov    %eax,0x14(%esp)
 854f4f4:	c7 44 24 10 a4 ed c9 	movl   $0x8c9eda4,0x10(%esp)
 854f4fb:	08 
 854f4fc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854f503:	00 
 854f504:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 854f508:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f50c:	8b 45 08             	mov    0x8(%ebp),%eax
 854f50f:	89 04 24             	mov    %eax,(%esp)
 854f512:	e8 99 f8 ff ff       	call   854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>
 854f517:	88 45 f7             	mov    %al,-0x9(%ebp)
 854f51a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 854f51e:	c9                   	leave
 854f51f:	c3                   	ret

```

```c
// CLog::logSnapShot @ 0x854f4c0

/* CLog::logSnapShot(char const*, ...) */

undefined1 __thiscall CLog::logSnapShot(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0x10c),this + 0x248,false,".snap",param_1,
                    &stack0x0000000c,false);
  return uVar1;
}

```

---

## logToFile

```asm
// === 0854edb0 CLog::logToFile  [0x0854edb0-0x854ef55] ===
 854edb0:	55                   	push   %ebp
 854edb1:	89 e5                	mov    %esp,%ebp
 854edb3:	53                   	push   %ebx
 854edb4:	81 ec 44 20 00 00    	sub    $0x2044,%esp
 854edba:	8b 55 14             	mov    0x14(%ebp),%edx
 854edbd:	8b 45 24             	mov    0x24(%ebp),%eax
 854edc0:	88 95 e4 df ff ff    	mov    %dl,-0x201c(%ebp)
 854edc6:	88 85 e0 df ff ff    	mov    %al,-0x2020(%ebp)
 854edcc:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 854edd0:	75 0a                	jne    854eddc <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x2c>
 854edd2:	b8 00 00 00 00       	mov    $0x0,%eax
 854edd7:	e9 70 01 00 00       	jmp    854ef4c <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x19c>
 854eddc:	8b 45 0c             	mov    0xc(%ebp),%eax
 854eddf:	8b 00                	mov    (%eax),%eax
 854ede1:	85 c0                	test   %eax,%eax
 854ede3:	75 0a                	jne    854edef <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x3f>
 854ede5:	b8 00 00 00 00       	mov    $0x0,%eax
 854edea:	e9 5d 01 00 00       	jmp    854ef4c <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x19c>
 854edef:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854edf2:	89 04 24             	mov    %eax,(%esp)
 854edf5:	e8 2e f4 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854edfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 854edfd:	8b 10                	mov    (%eax),%edx
 854edff:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854ee04:	39 c2                	cmp    %eax,%edx
 854ee06:	74 4c                	je     854ee54 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0xa4>
 854ee08:	8b 45 08             	mov    0x8(%ebp),%eax
 854ee0b:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854ee11:	89 44 24 18          	mov    %eax,0x18(%esp)
 854ee15:	8b 45 18             	mov    0x18(%ebp),%eax
 854ee18:	89 44 24 14          	mov    %eax,0x14(%esp)
 854ee1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ee1f:	89 44 24 10          	mov    %eax,0x10(%esp)
 854ee23:	8b 45 10             	mov    0x10(%ebp),%eax
 854ee26:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854ee2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854ee2d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854ee30:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ee34:	89 54 24 08          	mov    %edx,0x8(%esp)
 854ee38:	8b 45 08             	mov    0x8(%ebp),%eax
 854ee3b:	89 04 24             	mov    %eax,(%esp)
 854ee3e:	e8 51 07 00 00       	call   854f594 <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci>
 854ee43:	83 f0 01             	xor    $0x1,%eax
 854ee46:	84 c0                	test   %al,%al
 854ee48:	74 0a                	je     854ee54 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0xa4>
 854ee4a:	b8 00 00 00 00       	mov    $0x0,%eax
 854ee4f:	e9 f8 00 00 00       	jmp    854ef4c <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x19c>
 854ee54:	8b 45 20             	mov    0x20(%ebp),%eax
 854ee57:	89 44 24 08          	mov    %eax,0x8(%esp)
 854ee5b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854ee5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ee62:	8d 85 f0 df ff ff    	lea    -0x2010(%ebp),%eax
 854ee68:	89 04 24             	mov    %eax,(%esp)
 854ee6b:	e8 60 e9 b2 ff       	call   807d7d0 <vsprintf@plt>
 854ee70:	80 bd e0 df ff ff 00 	cmpb   $0x0,-0x2020(%ebp)
 854ee77:	74 62                	je     854eedb <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x12b>
 854ee79:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 854ee7d:	0f be c8             	movsbl %al,%ecx
 854ee80:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 854ee84:	0f be d0             	movsbl %al,%edx
 854ee87:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854ee8b:	0f be c0             	movsbl %al,%eax
 854ee8e:	8d 9d f0 df ff ff    	lea    -0x2010(%ebp),%ebx
 854ee94:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 854ee98:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 854ee9c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854eea0:	89 44 24 08          	mov    %eax,0x8(%esp)
 854eea4:	c7 44 24 04 d0 ed c9 	movl   $0x8c9edd0,0x4(%esp)
 854eeab:	08 
 854eeac:	8d 85 f0 ef ff ff    	lea    -0x1010(%ebp),%eax
 854eeb2:	89 04 24             	mov    %eax,(%esp)
 854eeb5:	e8 86 f5 b2 ff       	call   807e440 <sprintf@plt>
 854eeba:	8b 45 0c             	mov    0xc(%ebp),%eax
 854eebd:	8b 00                	mov    (%eax),%eax
 854eebf:	8d 95 f0 ef ff ff    	lea    -0x1010(%ebp),%edx
 854eec5:	89 54 24 08          	mov    %edx,0x8(%esp)
 854eec9:	c7 44 24 04 e4 ed c9 	movl   $0x8c9ede4,0x4(%esp)
 854eed0:	08 
 854eed1:	89 04 24             	mov    %eax,(%esp)
 854eed4:	e8 b7 eb b2 ff       	call   807da90 <fprintf@plt>
 854eed9:	eb 1f                	jmp    854eefa <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x14a>
 854eedb:	8b 45 0c             	mov    0xc(%ebp),%eax
 854eede:	8b 00                	mov    (%eax),%eax
 854eee0:	8d 95 f0 df ff ff    	lea    -0x2010(%ebp),%edx
 854eee6:	89 54 24 08          	mov    %edx,0x8(%esp)
 854eeea:	c7 44 24 04 e4 ed c9 	movl   $0x8c9ede4,0x4(%esp)
 854eef1:	08 
 854eef2:	89 04 24             	mov    %eax,(%esp)
 854eef5:	e8 96 eb b2 ff       	call   807da90 <fprintf@plt>
 854eefa:	8b 45 0c             	mov    0xc(%ebp),%eax
 854eefd:	8b 00                	mov    (%eax),%eax
 854eeff:	89 04 24             	mov    %eax,(%esp)
 854ef02:	e8 c9 f9 b2 ff       	call   807e8d0 <fflush@plt>
 854ef07:	80 bd e4 df ff ff 00 	cmpb   $0x0,-0x201c(%ebp)
 854ef0e:	74 37                	je     854ef47 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x197>
 854ef10:	80 bd e0 df ff ff 00 	cmpb   $0x0,-0x2020(%ebp)
 854ef17:	74 18                	je     854ef31 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x181>
 854ef19:	8d 85 f0 ef ff ff    	lea    -0x1010(%ebp),%eax
 854ef1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ef23:	c7 04 24 e4 ed c9 08 	movl   $0x8c9ede4,(%esp)
 854ef2a:	e8 31 ec b2 ff       	call   807db60 <printf@plt>
 854ef2f:	eb 16                	jmp    854ef47 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b+0x197>
 854ef31:	8d 85 f0 df ff ff    	lea    -0x2010(%ebp),%eax
 854ef37:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ef3b:	c7 04 24 e4 ed c9 08 	movl   $0x8c9ede4,(%esp)
 854ef42:	e8 19 ec b2 ff       	call   807db60 <printf@plt>
 854ef47:	b8 01 00 00 00       	mov    $0x1,%eax
 854ef4c:	81 c4 44 20 00 00    	add    $0x2044,%esp
 854ef52:	5b                   	pop    %ebx
 854ef53:	5d                   	pop    %ebp
 854ef54:	c3                   	ret
 854ef55:	90                   	nop

```

```c
// CLog::logToFile @ 0x854edb0

/* CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool) */

undefined4 __thiscall
CLog::logToFile(CLog *this,_IO_FILE **param_1,TimeLog_ *param_2,bool param_3,char *param_4,
               char *param_5,char *param_6,bool param_7)

{
  char cVar1;
  undefined4 uVar2;
  char local_2014 [4096];
  char local_1014 [4096];
  undefined4 local_14;
  undefined4 local_10;
  
  if (this == (CLog *)0x0) {
    uVar2 = 0;
  }
  else if (*param_1 == (_IO_FILE *)0x0) {
    uVar2 = 0;
  }
  else {
    TimeLog_::setTime((TimeLog_ *)&local_14);
    if ((*param_1 != stdout) &&
       (cVar1 = checkDay(this,local_14,local_10,param_2,param_1,param_4,
                         *(undefined4 *)(this + 0x250)), cVar1 != '\x01')) {
      return 0;
    }
    vsprintf(local_2014,param_5,param_6);
    if (param_7) {
      sprintf(local_1014,"[%02d:%02d:%02d] %s",(int)(char)local_10,(int)local_10._1_1_,
              (int)local_10._2_1_,local_2014);
      fprintf(*param_1,"%s\r\n",local_1014);
    }
    else {
      fprintf(*param_1,"%s\r\n",local_2014);
    }
    fflush(*param_1);
    if (param_3) {
      if (param_7) {
        printf("%s\r\n",local_1014);
      }
      else {
        printf("%s\r\n",local_2014);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## logToInitFile

```asm
// === 0854ef56 CLog::logToInitFile  [0x0854ef56-0x854f161] ===
 854ef56:	55                   	push   %ebp
 854ef57:	89 e5                	mov    %esp,%ebp
 854ef59:	53                   	push   %ebx
 854ef5a:	81 ec 54 20 00 00    	sub    $0x2054,%esp
 854ef60:	8b 55 20             	mov    0x20(%ebp),%edx
 854ef63:	8b 45 24             	mov    0x24(%ebp),%eax
 854ef66:	88 95 d4 df ff ff    	mov    %dl,-0x202c(%ebp)
 854ef6c:	88 85 d0 df ff ff    	mov    %al,-0x2030(%ebp)
 854ef72:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 854ef76:	75 0a                	jne    854ef82 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x2c>
 854ef78:	b8 00 00 00 00       	mov    $0x0,%eax
 854ef7d:	e9 d6 01 00 00       	jmp    854f158 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x202>
 854ef82:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ef85:	8b 00                	mov    (%eax),%eax
 854ef87:	85 c0                	test   %eax,%eax
 854ef89:	75 0a                	jne    854ef95 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x3f>
 854ef8b:	b8 00 00 00 00       	mov    $0x0,%eax
 854ef90:	e9 c3 01 00 00       	jmp    854f158 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x202>
 854ef95:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 854ef9c:	00 
 854ef9d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854efa4:	00 
 854efa5:	8d 85 e0 ef ff ff    	lea    -0x1020(%ebp),%eax
 854efab:	89 04 24             	mov    %eax,(%esp)
 854efae:	e8 0d ed b2 ff       	call   807dcc0 <memset@plt>
 854efb3:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 854efba:	00 
 854efbb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854efc2:	00 
 854efc3:	8d 85 e0 df ff ff    	lea    -0x2020(%ebp),%eax
 854efc9:	89 04 24             	mov    %eax,(%esp)
 854efcc:	e8 ef ec b2 ff       	call   807dcc0 <memset@plt>
 854efd1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854efd4:	89 04 24             	mov    %eax,(%esp)
 854efd7:	e8 4c f2 ff ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 854efdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 854efdf:	8b 10                	mov    (%eax),%edx
 854efe1:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854efe6:	39 c2                	cmp    %eax,%edx
 854efe8:	74 4c                	je     854f036 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0xe0>
 854efea:	8b 45 08             	mov    0x8(%ebp),%eax
 854efed:	8b 80 50 02 00 00    	mov    0x250(%eax),%eax
 854eff3:	89 44 24 18          	mov    %eax,0x18(%esp)
 854eff7:	8b 45 14             	mov    0x14(%ebp),%eax
 854effa:	89 44 24 14          	mov    %eax,0x14(%esp)
 854effe:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f001:	89 44 24 10          	mov    %eax,0x10(%esp)
 854f005:	8b 45 10             	mov    0x10(%ebp),%eax
 854f008:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854f00c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854f00f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854f012:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f016:	89 54 24 08          	mov    %edx,0x8(%esp)
 854f01a:	8b 45 08             	mov    0x8(%ebp),%eax
 854f01d:	89 04 24             	mov    %eax,(%esp)
 854f020:	e8 6f 05 00 00       	call   854f594 <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci>
 854f025:	83 f0 01             	xor    $0x1,%eax
 854f028:	84 c0                	test   %al,%al
 854f02a:	74 0a                	je     854f036 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0xe0>
 854f02c:	b8 00 00 00 00       	mov    $0x0,%eax
 854f031:	e9 22 01 00 00       	jmp    854f158 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x202>
 854f036:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854f039:	89 44 24 08          	mov    %eax,0x8(%esp)
 854f03d:	8b 45 18             	mov    0x18(%ebp),%eax
 854f040:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f044:	8d 85 e0 df ff ff    	lea    -0x2020(%ebp),%eax
 854f04a:	89 04 24             	mov    %eax,(%esp)
 854f04d:	e8 7e e7 b2 ff       	call   807d7d0 <vsprintf@plt>
 854f052:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 854f059:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 854f060:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 854f067:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 854f06e:	80 bd d0 df ff ff 00 	cmpb   $0x0,-0x2030(%ebp)
 854f075:	74 1d                	je     854f094 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x13e>
 854f077:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 854f07e:	00 
 854f07f:	c7 44 24 04 e4 ed c9 	movl   $0x8c9ede4,0x4(%esp)
 854f086:	08 
 854f087:	8d 45 e0             	lea    -0x20(%ebp),%eax
 854f08a:	89 04 24             	mov    %eax,(%esp)
 854f08d:	e8 0e e8 b2 ff       	call   807d8a0 <memcpy@plt>
 854f092:	eb 1b                	jmp    854f0af <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x159>
 854f094:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 854f09b:	00 
 854f09c:	c7 44 24 04 4b ed c9 	movl   $0x8c9ed4b,0x4(%esp)
 854f0a3:	08 
 854f0a4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 854f0a7:	89 04 24             	mov    %eax,(%esp)
 854f0aa:	e8 f1 e7 b2 ff       	call   807d8a0 <memcpy@plt>
 854f0af:	8d 85 e0 df ff ff    	lea    -0x2020(%ebp),%eax
 854f0b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f0b9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 854f0bc:	89 04 24             	mov    %eax,(%esp)
 854f0bf:	e8 9c ea b2 ff       	call   807db60 <printf@plt>
 854f0c4:	80 bd d4 df ff ff 00 	cmpb   $0x0,-0x202c(%ebp)
 854f0cb:	74 43                	je     854f110 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x1ba>
 854f0cd:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 854f0d1:	0f be c8             	movsbl %al,%ecx
 854f0d4:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 854f0d8:	0f be d0             	movsbl %al,%edx
 854f0db:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854f0df:	0f be c0             	movsbl %al,%eax
 854f0e2:	8d 9d e0 df ff ff    	lea    -0x2020(%ebp),%ebx
 854f0e8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 854f0ec:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 854f0f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854f0f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 854f0f8:	c7 44 24 04 d0 ed c9 	movl   $0x8c9edd0,0x4(%esp)
 854f0ff:	08 
 854f100:	8d 85 e0 ef ff ff    	lea    -0x1020(%ebp),%eax
 854f106:	89 04 24             	mov    %eax,(%esp)
 854f109:	e8 32 f3 b2 ff       	call   807e440 <sprintf@plt>
 854f10e:	eb 18                	jmp    854f128 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb+0x1d2>
 854f110:	8d 85 e0 df ff ff    	lea    -0x2020(%ebp),%eax
 854f116:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f11a:	8d 85 e0 ef ff ff    	lea    -0x1020(%ebp),%eax
 854f120:	89 04 24             	mov    %eax,(%esp)
 854f123:	e8 c8 ed b2 ff       	call   807def0 <strcpy@plt>
 854f128:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f12b:	8b 00                	mov    (%eax),%eax
 854f12d:	8d 95 e0 ef ff ff    	lea    -0x1020(%ebp),%edx
 854f133:	89 54 24 08          	mov    %edx,0x8(%esp)
 854f137:	8d 55 e0             	lea    -0x20(%ebp),%edx
 854f13a:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f13e:	89 04 24             	mov    %eax,(%esp)
 854f141:	e8 4a e9 b2 ff       	call   807da90 <fprintf@plt>
 854f146:	8b 45 0c             	mov    0xc(%ebp),%eax
 854f149:	8b 00                	mov    (%eax),%eax
 854f14b:	89 04 24             	mov    %eax,(%esp)
 854f14e:	e8 7d f7 b2 ff       	call   807e8d0 <fflush@plt>
 854f153:	b8 01 00 00 00       	mov    $0x1,%eax
 854f158:	81 c4 54 20 00 00    	add    $0x2054,%esp
 854f15e:	5b                   	pop    %ebx
 854f15f:	5d                   	pop    %ebp
 854f160:	c3                   	ret
 854f161:	90                   	nop

```

```c
// CLog::logToInitFile @ 0x854ef56

/* CLog::logToInitFile(_IO_FILE*&, TimeLog_&, char*, char const*, char*, bool, bool) */

undefined4 __thiscall
CLog::logToInitFile(CLog *this,_IO_FILE **param_1,TimeLog_ *param_2,char *param_3,char *param_4,
                   char *param_5,bool param_6,bool param_7)

{
  char cVar1;
  undefined4 uVar2;
  char local_2024 [4096];
  char local_1024 [4096];
  char local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  if (this == (CLog *)0x0) {
    uVar2 = 0;
  }
  else if (*param_1 == (_IO_FILE *)0x0) {
    uVar2 = 0;
  }
  else {
    memset(local_1024,0,0x1000);
    memset(local_2024,0,0x1000);
    TimeLog_::setTime((TimeLog_ *)&local_14);
    if ((*param_1 != stdout) &&
       (cVar1 = checkDay(this,local_14,local_10,param_2,param_1,param_3,
                         *(undefined4 *)(this + 0x250)), cVar1 != '\x01')) {
      return 0;
    }
    vsprintf(local_2024,param_4,param_5);
    local_24[0] = '\0';
    local_24[1] = '\0';
    local_24[2] = '\0';
    local_24[3] = '\0';
    local_24[4] = '\0';
    local_24[5] = '\0';
    local_24[6] = '\0';
    local_24[7] = '\0';
    local_24[8] = '\0';
    local_24[9] = '\0';
    local_24[10] = '\0';
    local_24[0xb] = '\0';
    local_24[0xc] = '\0';
    local_24[0xd] = '\0';
    local_24[0xe] = '\0';
    local_24[0xf] = '\0';
    if (param_7) {
      memcpy(local_24,&DAT_08c9ede4,5);
    }
    else {
      memcpy(local_24,&DAT_08c9ed4b,3);
    }
    printf(local_24,local_2024);
    if (param_6) {
      sprintf(local_1024,"[%02d:%02d:%02d] %s",(int)(char)local_10,(int)local_10._1_1_,
              (int)local_10._2_1_,local_2024);
    }
    else {
      strcpy(local_1024,local_2024);
    }
    fprintf(*param_1,local_24,local_1024);
    fflush(*param_1);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## openLogFile

```asm
// === 0854ec70 CLog::openLogFile  [0x0854ec70-0x854edaf] ===
 854ec70:	55                   	push   %ebp
 854ec71:	89 e5                	mov    %esp,%ebp
 854ec73:	56                   	push   %esi
 854ec74:	53                   	push   %ebx
 854ec75:	81 ec 20 20 00 00    	sub    $0x2020,%esp
 854ec7b:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 854ec7f:	74 4f                	je     854ecd0 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci+0x60>
 854ec81:	0f b6 45 10          	movzbl 0x10(%ebp),%eax
 854ec85:	0f be d8             	movsbl %al,%ebx
 854ec88:	0f b6 45 0f          	movzbl 0xf(%ebp),%eax
 854ec8c:	0f be c8             	movsbl %al,%ecx
 854ec8f:	0f b6 45 0e          	movzbl 0xe(%ebp),%eax
 854ec93:	0f be d0             	movsbl %al,%edx
 854ec96:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 854ec9a:	98                   	cwtl
 854ec9b:	8b 75 08             	mov    0x8(%ebp),%esi
 854ec9e:	81 c6 58 02 00 00    	add    $0x258,%esi
 854eca4:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 854eca8:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 854ecac:	89 54 24 10          	mov    %edx,0x10(%esp)
 854ecb0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854ecb4:	89 74 24 08          	mov    %esi,0x8(%esp)
 854ecb8:	c7 44 24 04 aa ed c9 	movl   $0x8c9edaa,0x4(%esp)
 854ecbf:	08 
 854ecc0:	8d 85 f8 df ff ff    	lea    -0x2008(%ebp),%eax
 854ecc6:	89 04 24             	mov    %eax,(%esp)
 854ecc9:	e8 72 f7 b2 ff       	call   807e440 <sprintf@plt>
 854ecce:	eb 42                	jmp    854ed12 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci+0xa2>
 854ecd0:	0f b6 45 0f          	movzbl 0xf(%ebp),%eax
 854ecd4:	0f be c8             	movsbl %al,%ecx
 854ecd7:	0f b6 45 0e          	movzbl 0xe(%ebp),%eax
 854ecdb:	0f be d0             	movsbl %al,%edx
 854ecde:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 854ece2:	98                   	cwtl
 854ece3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 854ece6:	81 c3 58 02 00 00    	add    $0x258,%ebx
 854ecec:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 854ecf0:	89 54 24 10          	mov    %edx,0x10(%esp)
 854ecf4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854ecf8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854ecfc:	c7 44 24 04 be ed c9 	movl   $0x8c9edbe,0x4(%esp)
 854ed03:	08 
 854ed04:	8d 85 f8 df ff ff    	lea    -0x2008(%ebp),%eax
 854ed0a:	89 04 24             	mov    %eax,(%esp)
 854ed0d:	e8 2e f7 b2 ff       	call   807e440 <sprintf@plt>
 854ed12:	8b 45 08             	mov    0x8(%ebp),%eax
 854ed15:	05 10 01 00 00       	add    $0x110,%eax
 854ed1a:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 854ed21:	00 
 854ed22:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ed26:	8d 85 f8 ef ff ff    	lea    -0x1008(%ebp),%eax
 854ed2c:	89 04 24             	mov    %eax,(%esp)
 854ed2f:	e8 9c eb b2 ff       	call   807d8d0 <strncpy@plt>
 854ed34:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 854ed3b:	00 
 854ed3c:	8d 85 f8 df ff ff    	lea    -0x2008(%ebp),%eax
 854ed42:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ed46:	8d 85 f8 ef ff ff    	lea    -0x1008(%ebp),%eax
 854ed4c:	89 04 24             	mov    %eax,(%esp)
 854ed4f:	e8 4c f4 b2 ff       	call   807e1a0 <strncat@plt>
 854ed54:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 854ed5b:	00 
 854ed5c:	8b 45 18             	mov    0x18(%ebp),%eax
 854ed5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ed63:	8d 85 f8 ef ff ff    	lea    -0x1008(%ebp),%eax
 854ed69:	89 04 24             	mov    %eax,(%esp)
 854ed6c:	e8 2f f4 b2 ff       	call   807e1a0 <strncat@plt>
 854ed71:	c7 44 24 04 cd ed c9 	movl   $0x8c9edcd,0x4(%esp)
 854ed78:	08 
 854ed79:	8d 85 f8 ef ff ff    	lea    -0x1008(%ebp),%eax
 854ed7f:	89 04 24             	mov    %eax,(%esp)
 854ed82:	e8 e9 f9 b2 ff       	call   807e770 <fopen@plt>
 854ed87:	8b 55 14             	mov    0x14(%ebp),%edx
 854ed8a:	89 02                	mov    %eax,(%edx)
 854ed8c:	8b 45 14             	mov    0x14(%ebp),%eax
 854ed8f:	8b 00                	mov    (%eax),%eax
 854ed91:	85 c0                	test   %eax,%eax
 854ed93:	0f 94 c0             	sete   %al
 854ed96:	84 c0                	test   %al,%al
 854ed98:	74 0b                	je     854eda5 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci+0x135>
 854ed9a:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 854eda0:	8b 45 14             	mov    0x14(%ebp),%eax
 854eda3:	89 10                	mov    %edx,(%eax)
 854eda5:	81 c4 20 20 00 00    	add    $0x2020,%esp
 854edab:	5b                   	pop    %ebx
 854edac:	5e                   	pop    %esi
 854edad:	5d                   	pop    %ebp
 854edae:	c3                   	ret
 854edaf:	90                   	nop

```

```c
// CLog::openLogFile @ 0x854ec70

/* CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int) */

void CLog::openLogFile(int param_1,undefined4 param_2,char param_3,int *param_4,char *param_5,
                      int param_6)

{
  FILE *pFVar1;
  char local_200c [4096];
  char local_100c [4096];
  
  if (param_6 == 0) {
    sprintf(local_200c,"%s%04d%02d%02d",param_1 + 600,(int)(short)param_2,(int)param_2._2_1_,
            (int)param_2._3_1_);
  }
  else {
    sprintf(local_200c,"%s%04d%02d%02d-%02d",param_1 + 600,(int)(short)param_2,(int)param_2._2_1_,
            (int)param_2._3_1_,(int)param_3);
  }
  strncpy(local_100c,(char *)(param_1 + 0x110),0x1000);
  strncat(local_100c,local_200c,0x1000);
  strncat(local_100c,param_5,0x1000);
  pFVar1 = fopen(local_100c,"ab");
  *param_4 = (int)pFVar1;
  if (*param_4 == 0) {
    *param_4 = stdout;
  }
  return;
}

```

---

## ~CLog

```asm
// === 0854e69c CLog::~CLog  [0x0854e69c-0x854e88b] ===
 854e69c:	55                   	push   %ebp
 854e69d:	89 e5                	mov    %esp,%ebp
 854e69f:	57                   	push   %edi
 854e6a0:	56                   	push   %esi
 854e6a1:	53                   	push   %ebx
 854e6a2:	83 ec 1c             	sub    $0x1c,%esp
 854e6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 854e6a8:	8b 80 f0 00 00 00    	mov    0xf0(%eax),%eax
 854e6ae:	85 c0                	test   %eax,%eax
 854e6b0:	74 30                	je     854e6e2 <_ZN4CLogD1Ev+0x46>
 854e6b2:	8b 45 08             	mov    0x8(%ebp),%eax
 854e6b5:	8b 90 f0 00 00 00    	mov    0xf0(%eax),%edx
 854e6bb:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854e6c0:	39 c2                	cmp    %eax,%edx
 854e6c2:	74 11                	je     854e6d5 <_ZN4CLogD1Ev+0x39>
 854e6c4:	8b 45 08             	mov    0x8(%ebp),%eax
 854e6c7:	8b 80 f0 00 00 00    	mov    0xf0(%eax),%eax
 854e6cd:	89 04 24             	mov    %eax,(%esp)
 854e6d0:	e8 cb f7 b2 ff       	call   807dea0 <fclose@plt>
 854e6d5:	8b 45 08             	mov    0x8(%ebp),%eax
 854e6d8:	c7 80 f0 00 00 00 00 	movl   $0x0,0xf0(%eax)
 854e6df:	00 00 00 
 854e6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 854e6e5:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
 854e6eb:	85 c0                	test   %eax,%eax
 854e6ed:	74 30                	je     854e71f <_ZN4CLogD1Ev+0x83>
 854e6ef:	8b 45 08             	mov    0x8(%ebp),%eax
 854e6f2:	8b 90 f4 00 00 00    	mov    0xf4(%eax),%edx
 854e6f8:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854e6fd:	39 c2                	cmp    %eax,%edx
 854e6ff:	74 11                	je     854e712 <_ZN4CLogD1Ev+0x76>
 854e701:	8b 45 08             	mov    0x8(%ebp),%eax
 854e704:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
 854e70a:	89 04 24             	mov    %eax,(%esp)
 854e70d:	e8 8e f7 b2 ff       	call   807dea0 <fclose@plt>
 854e712:	8b 45 08             	mov    0x8(%ebp),%eax
 854e715:	c7 80 f4 00 00 00 00 	movl   $0x0,0xf4(%eax)
 854e71c:	00 00 00 
 854e71f:	8b 45 08             	mov    0x8(%ebp),%eax
 854e722:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
 854e728:	85 c0                	test   %eax,%eax
 854e72a:	74 30                	je     854e75c <_ZN4CLogD1Ev+0xc0>
 854e72c:	8b 45 08             	mov    0x8(%ebp),%eax
 854e72f:	8b 90 f8 00 00 00    	mov    0xf8(%eax),%edx
 854e735:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854e73a:	39 c2                	cmp    %eax,%edx
 854e73c:	74 11                	je     854e74f <_ZN4CLogD1Ev+0xb3>
 854e73e:	8b 45 08             	mov    0x8(%ebp),%eax
 854e741:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
 854e747:	89 04 24             	mov    %eax,(%esp)
 854e74a:	e8 51 f7 b2 ff       	call   807dea0 <fclose@plt>
 854e74f:	8b 45 08             	mov    0x8(%ebp),%eax
 854e752:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
 854e759:	00 00 00 
 854e75c:	8b 45 08             	mov    0x8(%ebp),%eax
 854e75f:	8b 80 fc 00 00 00    	mov    0xfc(%eax),%eax
 854e765:	85 c0                	test   %eax,%eax
 854e767:	74 23                	je     854e78c <_ZN4CLogD1Ev+0xf0>
 854e769:	8b 45 08             	mov    0x8(%ebp),%eax
 854e76c:	8b 90 fc 00 00 00    	mov    0xfc(%eax),%edx
 854e772:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854e777:	39 c2                	cmp    %eax,%edx
 854e779:	74 11                	je     854e78c <_ZN4CLogD1Ev+0xf0>
 854e77b:	8b 45 08             	mov    0x8(%ebp),%eax
 854e77e:	8b 80 fc 00 00 00    	mov    0xfc(%eax),%eax
 854e784:	89 04 24             	mov    %eax,(%esp)
 854e787:	e8 14 f7 b2 ff       	call   807dea0 <fclose@plt>
 854e78c:	8b 45 08             	mov    0x8(%ebp),%eax
 854e78f:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 854e795:	85 c0                	test   %eax,%eax
 854e797:	74 23                	je     854e7bc <_ZN4CLogD1Ev+0x120>
 854e799:	8b 45 08             	mov    0x8(%ebp),%eax
 854e79c:	8b 90 00 01 00 00    	mov    0x100(%eax),%edx
 854e7a2:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854e7a7:	39 c2                	cmp    %eax,%edx
 854e7a9:	74 11                	je     854e7bc <_ZN4CLogD1Ev+0x120>
 854e7ab:	8b 45 08             	mov    0x8(%ebp),%eax
 854e7ae:	8b 80 00 01 00 00    	mov    0x100(%eax),%eax
 854e7b4:	89 04 24             	mov    %eax,(%esp)
 854e7b7:	e8 e4 f6 b2 ff       	call   807dea0 <fclose@plt>
 854e7bc:	8b 45 08             	mov    0x8(%ebp),%eax
 854e7bf:	8b 80 08 01 00 00    	mov    0x108(%eax),%eax
 854e7c5:	85 c0                	test   %eax,%eax
 854e7c7:	74 23                	je     854e7ec <_ZN4CLogD1Ev+0x150>
 854e7c9:	8b 45 08             	mov    0x8(%ebp),%eax
 854e7cc:	8b 90 08 01 00 00    	mov    0x108(%eax),%edx
 854e7d2:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854e7d7:	39 c2                	cmp    %eax,%edx
 854e7d9:	74 11                	je     854e7ec <_ZN4CLogD1Ev+0x150>
 854e7db:	8b 45 08             	mov    0x8(%ebp),%eax
 854e7de:	8b 80 08 01 00 00    	mov    0x108(%eax),%eax
 854e7e4:	89 04 24             	mov    %eax,(%esp)
 854e7e7:	e8 b4 f6 b2 ff       	call   807dea0 <fclose@plt>
 854e7ec:	8b 45 08             	mov    0x8(%ebp),%eax
 854e7ef:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 854e7f5:	85 c0                	test   %eax,%eax
 854e7f7:	74 66                	je     854e85f <_ZN4CLogD1Ev+0x1c3>
 854e7f9:	8b 45 08             	mov    0x8(%ebp),%eax
 854e7fc:	8b 90 0c 01 00 00    	mov    0x10c(%eax),%edx
 854e802:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 854e807:	39 c2                	cmp    %eax,%edx
 854e809:	74 11                	je     854e81c <_ZN4CLogD1Ev+0x180>
 854e80b:	8b 45 08             	mov    0x8(%ebp),%eax
 854e80e:	8b 80 0c 01 00 00    	mov    0x10c(%eax),%eax
 854e814:	89 04 24             	mov    %eax,(%esp)
 854e817:	e8 84 f6 b2 ff       	call   807dea0 <fclose@plt>
 854e81c:	8b 45 08             	mov    0x8(%ebp),%eax
 854e81f:	c7 80 0c 01 00 00 00 	movl   $0x0,0x10c(%eax)
 854e826:	00 00 00 
 854e829:	eb 34                	jmp    854e85f <_ZN4CLogD1Ev+0x1c3>
 854e82b:	89 d6                	mov    %edx,%esi
 854e82d:	89 c7                	mov    %eax,%edi
 854e82f:	8b 45 08             	mov    0x8(%ebp),%eax
 854e832:	85 c0                	test   %eax,%eax
 854e834:	74 1d                	je     854e853 <_ZN4CLogD1Ev+0x1b7>
 854e836:	8b 45 08             	mov    0x8(%ebp),%eax
 854e839:	8d 98 f0 00 00 00    	lea    0xf0(%eax),%ebx
 854e83f:	8b 45 08             	mov    0x8(%ebp),%eax
 854e842:	39 c3                	cmp    %eax,%ebx
 854e844:	74 0d                	je     854e853 <_ZN4CLogD1Ev+0x1b7>
 854e846:	83 eb 18             	sub    $0x18,%ebx
 854e849:	89 1c 24             	mov    %ebx,(%esp)
 854e84c:	e8 dd cb b7 ff       	call   80cb42e <_ZN5MutexD1Ev>
 854e851:	eb ec                	jmp    854e83f <_ZN4CLogD1Ev+0x1a3>
 854e853:	89 f8                	mov    %edi,%eax
 854e855:	89 f2                	mov    %esi,%edx
 854e857:	89 04 24             	mov    %eax,(%esp)
 854e85a:	e8 f1 4e 59 00       	call   8ae3750 <_Unwind_Resume>
 854e85f:	8b 45 08             	mov    0x8(%ebp),%eax
 854e862:	85 c0                	test   %eax,%eax
 854e864:	74 1d                	je     854e883 <_ZN4CLogD1Ev+0x1e7>
 854e866:	8b 45 08             	mov    0x8(%ebp),%eax
 854e869:	8d 98 f0 00 00 00    	lea    0xf0(%eax),%ebx
 854e86f:	8b 45 08             	mov    0x8(%ebp),%eax
 854e872:	39 c3                	cmp    %eax,%ebx
 854e874:	74 0d                	je     854e883 <_ZN4CLogD1Ev+0x1e7>
 854e876:	83 eb 18             	sub    $0x18,%ebx
 854e879:	89 1c 24             	mov    %ebx,(%esp)
 854e87c:	e8 ad cb b7 ff       	call   80cb42e <_ZN5MutexD1Ev>
 854e881:	eb ec                	jmp    854e86f <_ZN4CLogD1Ev+0x1d3>
 854e883:	83 c4 1c             	add    $0x1c,%esp
 854e886:	5b                   	pop    %ebx
 854e887:	5e                   	pop    %esi
 854e888:	5f                   	pop    %edi
 854e889:	5d                   	pop    %ebp
 854e88a:	c3                   	ret
 854e88b:	90                   	nop

```

```c
// CLog::~CLog @ 0x854e69c

/* CLog::~CLog() */

void __thiscall CLog::~CLog(CLog *this)

{
  Mutex *this_00;
  
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0xf0) != stdout) {
                    /* try { // try from 0854e6d0 to 0854e81b has its CatchHandler @ 0854e82b */
      fclose(*(FILE **)(this + 0xf0));
    }
    *(undefined4 *)(this + 0xf0) = 0;
  }
  if (*(int *)(this + 0xf4) != 0) {
    if (*(int *)(this + 0xf4) != stdout) {
      fclose(*(FILE **)(this + 0xf4));
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (*(int *)(this + 0xf8) != 0) {
    if (*(int *)(this + 0xf8) != stdout) {
      fclose(*(FILE **)(this + 0xf8));
    }
    *(undefined4 *)(this + 0xf8) = 0;
  }
  if ((*(int *)(this + 0xfc) != 0) && (*(int *)(this + 0xfc) != stdout)) {
    fclose(*(FILE **)(this + 0xfc));
  }
  if ((*(int *)(this + 0x100) != 0) && (*(int *)(this + 0x100) != stdout)) {
    fclose(*(FILE **)(this + 0x100));
  }
  if ((*(int *)(this + 0x108) != 0) && (*(int *)(this + 0x108) != stdout)) {
    fclose(*(FILE **)(this + 0x108));
  }
  if (*(int *)(this + 0x10c) != 0) {
    if (*(int *)(this + 0x10c) != stdout) {
      fclose(*(FILE **)(this + 0x10c));
    }
    *(undefined4 *)(this + 0x10c) = 0;
  }
  if (this != (CLog *)0x0) {
    this_00 = (Mutex *)(this + 0xf0);
    while (this_00 != (Mutex *)this) {
      this_00 = this_00 + -0x18;
      Mutex::~Mutex(this_00);
    }
  }
  return;
}

```

