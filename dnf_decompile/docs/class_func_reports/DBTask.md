# DBTask

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DBProcess

```asm
// === 083ff3f4 DBTask::DBProcess  [0x083ff3f4-0x83ff5f1] ===
 83ff3f4:	55                   	push   %ebp
 83ff3f5:	89 e5                	mov    %esp,%ebp
 83ff3f7:	53                   	push   %ebx
 83ff3f8:	83 ec 54             	sub    $0x54,%esp
 83ff3fb:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 83ff402:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83ff405:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff409:	8b 45 0c             	mov    0xc(%ebp),%eax
 83ff40c:	89 04 24             	mov    %eax,(%esp)
 83ff40f:	e8 b0 d1 21 00       	call   861c5c4 <_ZN6StreamrsERi>
 83ff414:	88 45 f3             	mov    %al,-0xd(%ebp)
 83ff417:	8b 55 cc             	mov    -0x34(%ebp),%edx
 83ff41a:	8b 45 10             	mov    0x10(%ebp),%eax
 83ff41d:	89 10                	mov    %edx,(%eax)
 83ff41f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 83ff423:	83 f0 01             	xor    $0x1,%eax
 83ff426:	84 c0                	test   %al,%al
 83ff428:	74 50                	je     83ff47a <_ZN6DBTask9DBProcessEP6StreamRi+0x86>
 83ff42a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83ff431:	00 
 83ff432:	c7 44 24 08 4d 09 00 	movl   $0x94d,0x8(%esp)
 83ff439:	00 
 83ff43a:	c7 44 24 04 60 da c5 	movl   $0x8c5da60,0x4(%esp)
 83ff441:	08 
 83ff442:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83ff445:	89 04 24             	mov    %eax,(%esp)
 83ff448:	e8 cb 02 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83ff44d:	c7 44 24 0c 4d 09 00 	movl   $0x94d,0xc(%esp)
 83ff454:	00 
 83ff455:	c7 44 24 08 60 da c5 	movl   $0x8c5da60,0x8(%esp)
 83ff45c:	08 
 83ff45d:	c7 44 24 04 21 67 c3 	movl   $0x8c36721,0x4(%esp)
 83ff464:	08 
 83ff465:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83ff468:	89 04 24             	mov    %eax,(%esp)
 83ff46b:	e8 18 03 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83ff470:	b8 00 00 00 00       	mov    $0x0,%eax
 83ff475:	e9 71 01 00 00       	jmp    83ff5eb <_ZN6DBTask9DBProcessEP6StreamRi+0x1f7>
 83ff47a:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83ff481:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83ff484:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff488:	8b 45 0c             	mov    0xc(%ebp),%eax
 83ff48b:	89 04 24             	mov    %eax,(%esp)
 83ff48e:	e8 31 d1 21 00       	call   861c5c4 <_ZN6StreamrsERi>
 83ff493:	88 45 f3             	mov    %al,-0xd(%ebp)
 83ff496:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 83ff49a:	83 f0 01             	xor    $0x1,%eax
 83ff49d:	84 c0                	test   %al,%al
 83ff49f:	74 50                	je     83ff4f1 <_ZN6DBTask9DBProcessEP6StreamRi+0xfd>
 83ff4a1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83ff4a8:	00 
 83ff4a9:	c7 44 24 08 5f 09 00 	movl   $0x95f,0x8(%esp)
 83ff4b0:	00 
 83ff4b1:	c7 44 24 04 60 da c5 	movl   $0x8c5da60,0x4(%esp)
 83ff4b8:	08 
 83ff4b9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83ff4bc:	89 04 24             	mov    %eax,(%esp)
 83ff4bf:	e8 54 02 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83ff4c4:	c7 44 24 0c 5f 09 00 	movl   $0x95f,0xc(%esp)
 83ff4cb:	00 
 83ff4cc:	c7 44 24 08 60 da c5 	movl   $0x8c5da60,0x8(%esp)
 83ff4d3:	08 
 83ff4d4:	c7 44 24 04 21 67 c3 	movl   $0x8c36721,0x4(%esp)
 83ff4db:	08 
 83ff4dc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83ff4df:	89 04 24             	mov    %eax,(%esp)
 83ff4e2:	e8 a1 02 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83ff4e7:	b8 00 00 00 00       	mov    $0x0,%eax
 83ff4ec:	e9 fa 00 00 00       	jmp    83ff5eb <_ZN6DBTask9DBProcessEP6StreamRi+0x1f7>
 83ff4f1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83ff4f4:	85 c0                	test   %eax,%eax
 83ff4f6:	79 40                	jns    83ff538 <_ZN6DBTask9DBProcessEP6StreamRi+0x144>
 83ff4f8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83ff4fb:	3d 53 03 00 00       	cmp    $0x353,%eax
 83ff500:	7e 36                	jle    83ff538 <_ZN6DBTask9DBProcessEP6StreamRi+0x144>
 83ff502:	c7 44 24 10 d0 67 c3 	movl   $0x8c367d0,0x10(%esp)
 83ff509:	08 
 83ff50a:	c7 44 24 0c 67 09 00 	movl   $0x967,0xc(%esp)
 83ff511:	00 
 83ff512:	c7 44 24 08 60 da c5 	movl   $0x8c5da60,0x8(%esp)
 83ff519:	08 
 83ff51a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 83ff521:	08 
 83ff522:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83ff529:	e8 dc 46 6d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83ff52e:	b8 00 00 00 00       	mov    $0x0,%eax
 83ff533:	e9 b3 00 00 00       	jmp    83ff5eb <_ZN6DBTask9DBProcessEP6StreamRi+0x1f7>
 83ff538:	8b 55 cc             	mov    -0x34(%ebp),%edx
 83ff53b:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff53e:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 83ff542:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83ff545:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83ff549:	75 3a                	jne    83ff585 <_ZN6DBTask9DBProcessEP6StreamRi+0x191>
 83ff54b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83ff54e:	89 44 24 14          	mov    %eax,0x14(%esp)
 83ff552:	c7 44 24 10 e8 67 c3 	movl   $0x8c367e8,0x10(%esp)
 83ff559:	08 
 83ff55a:	c7 44 24 0c 70 09 00 	movl   $0x970,0xc(%esp)
 83ff561:	00 
 83ff562:	c7 44 24 08 60 da c5 	movl   $0x8c5da60,0x8(%esp)
 83ff569:	08 
 83ff56a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 83ff571:	08 
 83ff572:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83ff579:	e8 8c 46 6d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83ff57e:	b8 00 00 00 00       	mov    $0x0,%eax
 83ff583:	eb 66                	jmp    83ff5eb <_ZN6DBTask9DBProcessEP6StreamRi+0x1f7>
 83ff585:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff588:	8b 00                	mov    (%eax),%eax
 83ff58a:	83 f8 02             	cmp    $0x2,%eax
 83ff58d:	75 14                	jne    83ff5a3 <_ZN6DBTask9DBProcessEP6StreamRi+0x1af>
 83ff58f:	8b 55 c8             	mov    -0x38(%ebp),%edx
 83ff592:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83ff597:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ff59b:	89 04 24             	mov    %eax,(%esp)
 83ff59e:	e8 77 05 d9 ff       	call   818fb1a <_ZN5DBMgr10setUserIdxEi>
 83ff5a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ff5a6:	8b 00                	mov    (%eax),%eax
 83ff5a8:	8b 18                	mov    (%eax),%ebx
 83ff5aa:	8b 55 c8             	mov    -0x38(%ebp),%edx
 83ff5ad:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83ff5b0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83ff5b3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 83ff5b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 83ff5bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff5bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ff5c2:	89 04 24             	mov    %eax,(%esp)
 83ff5c5:	ff d3                	call   *%ebx
 83ff5c7:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff5ca:	8b 00                	mov    (%eax),%eax
 83ff5cc:	83 f8 02             	cmp    $0x2,%eax
 83ff5cf:	75 15                	jne    83ff5e6 <_ZN6DBTask9DBProcessEP6StreamRi+0x1f2>
 83ff5d1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83ff5d6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 83ff5dd:	ff 
 83ff5de:	89 04 24             	mov    %eax,(%esp)
 83ff5e1:	e8 34 05 d9 ff       	call   818fb1a <_ZN5DBMgr10setUserIdxEi>
 83ff5e6:	b8 01 00 00 00       	mov    $0x1,%eax
 83ff5eb:	83 c4 54             	add    $0x54,%esp
 83ff5ee:	5b                   	pop    %ebx
 83ff5ef:	5d                   	pop    %ebp
 83ff5f0:	c3                   	ret
 83ff5f1:	90                   	nop

```

```c
// DBTask::DBProcess @ 0x83ff3f4

/* DBTask::DBProcess(Stream*, int&) */

undefined4 __thiscall DBTask::DBProcess(DBTask *this,Stream *param_1,int *param_2)

{
  undefined4 uVar1;
  int local_3c;
  int local_38;
  cMyTrace local_34 [16];
  cMyTrace local_24 [19];
  char local_11;
  undefined4 *local_10;
  
  local_38 = 0;
  local_11 = Stream::operator>>(param_1,&local_38);
  *param_2 = local_38;
  if (local_11 == '\x01') {
    local_3c = 0;
    local_11 = Stream::operator>>(param_1,&local_3c);
    if (local_11 == '\x01') {
      if ((local_38 < 0) && (0x353 < local_38)) {
        LogManager::logFormat
                  (1,"DBThread.cpp","bool DBTask::DBProcess(Stream*, int&)",0x967,
                   "Invalid signal received");
        uVar1 = 0;
      }
      else {
        local_10 = *(undefined4 **)(this + local_38 * 4 + 4);
        if (local_10 == (undefined4 *)0x0) {
          LogManager::logFormat
                    (1,"DBThread.cpp","bool DBTask::DBProcess(Stream*, int&)",0x970,
                     "Can\'t find the db dispatcher : signal(%d)",local_38);
          uVar1 = 0;
        }
        else {
          if (*(int *)this == 2) {
            DBMgr::setUserIdx(GlobalData::s_db_mgr,local_3c);
          }
          (**(code **)*local_10)(local_10,local_38,local_3c,param_1);
          if (*(int *)this == 2) {
            DBMgr::setUserIdx(GlobalData::s_db_mgr,-1);
          }
          uVar1 = 1;
        }
      }
    }
    else {
      cMyTrace::cMyTrace(local_24,"bool DBTask::DBProcess(Stream*, int&)",0x95f,5);
      cMyTrace::operator()(local_24,"[%s][%d]","bool DBTask::DBProcess(Stream*, int&)",0x95f);
      uVar1 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_34,"bool DBTask::DBProcess(Stream*, int&)",0x94d,5);
    cMyTrace::operator()(local_34,"[%s][%d]","bool DBTask::DBProcess(Stream*, int&)",0x94d);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## DBTask

```asm
// === 083fbfc6 DBTask::DBTask  [0x083fbfc6-0x83fbfd9] ===
 83fbfc6:	55                   	push   %ebp
 83fbfc7:	89 e5                	mov    %esp,%ebp
 83fbfc9:	83 ec 18             	sub    $0x18,%esp
 83fbfcc:	8b 45 08             	mov    0x8(%ebp),%eax
 83fbfcf:	89 04 24             	mov    %eax,(%esp)
 83fbfd2:	e8 17 00 00 00       	call   83fbfee <_ZN6DBTask16RegistDispatcherEv>
 83fbfd7:	c9                   	leave
 83fbfd8:	c3                   	ret
 83fbfd9:	90                   	nop

```

```c
// DBTask::DBTask @ 0x83fbfc6

/* DBTask::DBTask() */

void __thiscall DBTask::DBTask(DBTask *this)

{
  RegistDispatcher(this);
  return;
}

```

---

## HandleEvents

```asm
// === 083ff1c8 DBTask::HandleEvents  [0x083ff1c8-0x83ff3f3] ===
 83ff1c8:	55                   	push   %ebp
 83ff1c9:	89 e5                	mov    %esp,%ebp
 83ff1cb:	56                   	push   %esi
 83ff1cc:	53                   	push   %ebx
 83ff1cd:	83 ec 60             	sub    $0x60,%esp
 83ff1d0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 83ff1d5:	8b 55 0c             	mov    0xc(%ebp),%edx
 83ff1d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ff1dc:	89 04 24             	mov    %eax,(%esp)
 83ff1df:	e8 ca 1e 17 00       	call   85710ae <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE>
 83ff1e4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83ff1e7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 83ff1eb:	75 16                	jne    83ff203 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x3b>
 83ff1ed:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 83ff1f4:	e8 01 d3 18 00       	call   858c4fa <_ZN6OS_API6uSleepEj>
 83ff1f9:	b8 01 00 00 00       	mov    $0x1,%eax
 83ff1fe:	e9 e9 01 00 00       	jmp    83ff3ec <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x224>
 83ff203:	8b 55 0c             	mov    0xc(%ebp),%edx
 83ff206:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff209:	89 10                	mov    %edx,(%eax)
 83ff20b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83ff20e:	89 04 24             	mov    %eax,(%esp)
 83ff211:	e8 be cb 21 00       	call   861bdd4 <_ZN6Stream6lengthEv>
 83ff216:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83ff219:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83ff21c:	8b 40 20             	mov    0x20(%eax),%eax
 83ff21f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83ff222:	8b 45 10             	mov    0x10(%ebp),%eax
 83ff225:	89 44 24 08          	mov    %eax,0x8(%esp)
 83ff229:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83ff22c:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ff230:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff233:	89 04 24             	mov    %eax,(%esp)
 83ff236:	e8 b9 01 00 00       	call   83ff3f4 <_ZN6DBTask9DBProcessEP6StreamRi>
 83ff23b:	8b 45 10             	mov    0x10(%ebp),%eax
 83ff23e:	8b 00                	mov    (%eax),%eax
 83ff240:	83 f8 3f             	cmp    $0x3f,%eax
 83ff243:	75 58                	jne    83ff29d <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0xd5>
 83ff245:	8b 75 0c             	mov    0xc(%ebp),%esi
 83ff248:	8b 45 0c             	mov    0xc(%ebp),%eax
 83ff24b:	89 04 24             	mov    %eax,(%esp)
 83ff24e:	e8 61 e5 04 00       	call   844d7b4 <_ZN11MsgQueueMgr14get_queue_nameENS_9QUEUE_IDXE>
 83ff253:	89 c3                	mov    %eax,%ebx
 83ff255:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83ff25c:	00 
 83ff25d:	c7 44 24 08 e6 08 00 	movl   $0x8e6,0x8(%esp)
 83ff264:	00 
 83ff265:	c7 44 24 04 a0 da c5 	movl   $0x8c5daa0,0x4(%esp)
 83ff26c:	08 
 83ff26d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83ff270:	89 04 24             	mov    %eax,(%esp)
 83ff273:	e8 a0 04 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83ff278:	89 74 24 0c          	mov    %esi,0xc(%esp)
 83ff27c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83ff280:	c7 44 24 04 2c 67 c3 	movl   $0x8c3672c,0x4(%esp)
 83ff287:	08 
 83ff288:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83ff28b:	89 04 24             	mov    %eax,(%esp)
 83ff28e:	e8 f5 04 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83ff293:	b8 00 00 00 00       	mov    $0x0,%eax
 83ff298:	e9 4f 01 00 00       	jmp    83ff3ec <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x224>
 83ff29d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ff2a0:	83 f8 01             	cmp    $0x1,%eax
 83ff2a3:	74 12                	je     83ff2b7 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0xef>
 83ff2a5:	83 f8 02             	cmp    $0x2,%eax
 83ff2a8:	0f 84 d6 00 00 00    	je     83ff384 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x1bc>
 83ff2ae:	85 c0                	test   %eax,%eax
 83ff2b0:	74 6d                	je     83ff31f <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x157>
 83ff2b2:	e9 30 01 00 00       	jmp    83ff3e7 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x21f>
 83ff2b7:	81 7d f0 ff 0f 00 00 	cmpl   $0xfff,-0x10(%ebp)
 83ff2be:	7e 46                	jle    83ff306 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x13e>
 83ff2c0:	8b 45 10             	mov    0x10(%ebp),%eax
 83ff2c3:	8b 18                	mov    (%eax),%ebx
 83ff2c5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83ff2cc:	00 
 83ff2cd:	c7 44 24 08 f2 08 00 	movl   $0x8f2,0x8(%esp)
 83ff2d4:	00 
 83ff2d5:	c7 44 24 04 a0 da c5 	movl   $0x8c5daa0,0x4(%esp)
 83ff2dc:	08 
 83ff2dd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83ff2e0:	89 04 24             	mov    %eax,(%esp)
 83ff2e3:	e8 30 04 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83ff2e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83ff2eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83ff2ef:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83ff2f3:	c7 44 24 04 50 67 c3 	movl   $0x8c36750,0x4(%esp)
 83ff2fa:	08 
 83ff2fb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83ff2fe:	89 04 24             	mov    %eax,(%esp)
 83ff301:	e8 82 04 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83ff306:	a1 a8 bd 40 09       	mov    0x940bda8,%eax
 83ff30b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83ff30e:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ff312:	89 04 24             	mov    %eax,(%esp)
 83ff315:	e8 ea 0c e9 ff       	call   8290004 <_ZN15SmallStreamPool4FreeEP6Stream>
 83ff31a:	e9 c8 00 00 00       	jmp    83ff3e7 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x21f>
 83ff31f:	81 7d f0 ff 3f 00 00 	cmpl   $0x3fff,-0x10(%ebp)
 83ff326:	7e 46                	jle    83ff36e <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x1a6>
 83ff328:	8b 45 10             	mov    0x10(%ebp),%eax
 83ff32b:	8b 18                	mov    (%eax),%ebx
 83ff32d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83ff334:	00 
 83ff335:	c7 44 24 08 fd 08 00 	movl   $0x8fd,0x8(%esp)
 83ff33c:	00 
 83ff33d:	c7 44 24 04 a0 da c5 	movl   $0x8c5daa0,0x4(%esp)
 83ff344:	08 
 83ff345:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83ff348:	89 04 24             	mov    %eax,(%esp)
 83ff34b:	e8 c8 03 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83ff350:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83ff353:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83ff357:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83ff35b:	c7 44 24 04 7c 67 c3 	movl   $0x8c3677c,0x4(%esp)
 83ff362:	08 
 83ff363:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83ff366:	89 04 24             	mov    %eax,(%esp)
 83ff369:	e8 1a 04 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83ff36e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 83ff373:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83ff376:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ff37a:	89 04 24             	mov    %eax,(%esp)
 83ff37d:	e8 a6 07 e9 ff       	call   828fb28 <_ZN10StreamPool4FreeEP6Stream>
 83ff382:	eb 63                	jmp    83ff3e7 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x21f>
 83ff384:	81 7d f0 ff ff 03 00 	cmpl   $0x3ffff,-0x10(%ebp)
 83ff38b:	7e 46                	jle    83ff3d3 <_ZN6DBTask12HandleEventsEN11MsgQueueMgr9QUEUE_IDXERi+0x20b>
 83ff38d:	8b 45 10             	mov    0x10(%ebp),%eax
 83ff390:	8b 18                	mov    (%eax),%ebx
 83ff392:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83ff399:	00 
 83ff39a:	c7 44 24 08 08 09 00 	movl   $0x908,0x8(%esp)
 83ff3a1:	00 
 83ff3a2:	c7 44 24 04 a0 da c5 	movl   $0x8c5daa0,0x4(%esp)
 83ff3a9:	08 
 83ff3aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83ff3ad:	89 04 24             	mov    %eax,(%esp)
 83ff3b0:	e8 63 03 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83ff3b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83ff3b8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83ff3bc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83ff3c0:	c7 44 24 04 a8 67 c3 	movl   $0x8c367a8,0x4(%esp)
 83ff3c7:	08 
 83ff3c8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83ff3cb:	89 04 24             	mov    %eax,(%esp)
 83ff3ce:	e8 b5 03 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83ff3d3:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 83ff3d8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83ff3db:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ff3df:	89 04 24             	mov    %eax,(%esp)
 83ff3e2:	e8 1d 0f e9 ff       	call   8290304 <_ZN13BigStreamPool4FreeEP6Stream>
 83ff3e7:	b8 01 00 00 00       	mov    $0x1,%eax
 83ff3ec:	83 c4 60             	add    $0x60,%esp
 83ff3ef:	5b                   	pop    %ebx
 83ff3f0:	5e                   	pop    %esi
 83ff3f1:	5d                   	pop    %ebp
 83ff3f2:	c3                   	ret
 83ff3f3:	90                   	nop

```

```c
// DBTask::HandleEvents @ 0x83ff1c8

/* DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&) */

undefined4 __thiscall DBTask::HandleEvents(DBTask *this,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  Stream *local_18;
  int local_14;
  int local_10;
  
  local_18 = (Stream *)MsgQueueMgr::get(GlobalData::s_msgq_mgr,param_2);
  if (local_18 == (Stream *)0x0) {
    OS_API::uSleep(100);
    uVar2 = 1;
  }
  else {
    *(undefined4 *)this = param_2;
    local_14 = Stream::length(local_18);
    local_10 = *(int *)(local_18 + 0x20);
    DBProcess(this,local_18,param_3);
    if (*param_3 == 0x3f) {
      uVar2 = MsgQueueMgr::get_queue_name(param_2);
      cMyTrace::cMyTrace(local_58,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",0x8e6,0)
      ;
      cMyTrace::operator()(local_58,"Terminate Server db queue: %s(%d)\n",uVar2,param_2);
      uVar2 = 0;
    }
    else {
      if (local_10 == 1) {
        if (0xfff < local_14) {
          iVar1 = *param_3;
          cMyTrace::cMyTrace(local_48,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",
                             0x8f2,5);
          cMyTrace::operator()(local_48,"Small Stream Size over code(%d), size(%u)",iVar1,local_14);
        }
        SmallStreamPool::Free(GlobalData::s_small_stream_pool,local_18);
      }
      else if (local_10 == 2) {
        if (0x3ffff < local_14) {
          iVar1 = *param_3;
          cMyTrace::cMyTrace(local_28,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",
                             0x908,5);
          cMyTrace::operator()(local_28,"Big Stream Size over code(%d), size(%u)",iVar1,local_14);
        }
        BigStreamPool::Free(GlobalData::s_big_stream_pool,local_18);
      }
      else if (local_10 == 0) {
        if (0x3fff < local_14) {
          iVar1 = *param_3;
          cMyTrace::cMyTrace(local_38,"bool DBTask::HandleEvents(MsgQueueMgr::QUEUE_IDX, int&)",
                             0x8fd,5);
          cMyTrace::operator()
                    (local_38,"Default Stream Size over code(%d), size(%u)",iVar1,local_14);
        }
        StreamPool::Free(GlobalData::s_stream_pool,local_18);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## RegistDispatcher

```asm
// === 083fbfee DBTask::RegistDispatcher  [0x083fbfee-0x83ff155] ===
 83fbfee:	55                   	push   %ebp
 83fbfef:	89 e5                	mov    %esp,%ebp
 83fbff1:	57                   	push   %edi
 83fbff2:	56                   	push   %esi
 83fbff3:	53                   	push   %ebx
 83fbff4:	83 ec 3c             	sub    $0x3c,%esp
 83fbff7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 83fbffe:	eb 12                	jmp    83fc012 <_ZN6DBTask16RegistDispatcherEv+0x24>
 83fc000:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 83fc003:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc006:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 83fc00d:	00 
 83fc00e:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 83fc012:	81 7d e4 53 03 00 00 	cmpl   $0x353,-0x1c(%ebp)
 83fc019:	0f 9e c0             	setle  %al
 83fc01c:	84 c0                	test   %al,%al
 83fc01e:	75 e0                	jne    83fc000 <_ZN6DBTask16RegistDispatcherEv+0x12>
 83fc020:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc027:	e8 24 84 32 00       	call   8724450 <_Znwj>
 83fc02c:	89 c3                	mov    %eax,%ebx
 83fc02e:	89 d8                	mov    %ebx,%eax
 83fc030:	89 04 24             	mov    %eax,(%esp)
 83fc033:	e8 56 34 01 00       	call   840f48e <_ZN8DB_LoginC1Ev>
 83fc038:	89 d8                	mov    %ebx,%eax
 83fc03a:	89 c2                	mov    %eax,%edx
 83fc03c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc03f:	89 50 10             	mov    %edx,0x10(%eax)
 83fc042:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc049:	e8 02 84 32 00       	call   8724450 <_Znwj>
 83fc04e:	89 c3                	mov    %eax,%ebx
 83fc050:	89 d8                	mov    %ebx,%eax
 83fc052:	89 04 24             	mov    %eax,(%esp)
 83fc055:	e8 68 4c 00 00       	call   8400cc2 <_ZN15DB_CreateCharacC1Ev>
 83fc05a:	89 d8                	mov    %ebx,%eax
 83fc05c:	89 c2                	mov    %eax,%edx
 83fc05e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc061:	89 50 14             	mov    %edx,0x14(%eax)
 83fc064:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc06b:	e8 e0 83 32 00       	call   8724450 <_Znwj>
 83fc070:	89 c3                	mov    %eax,%ebx
 83fc072:	89 d8                	mov    %ebx,%eax
 83fc074:	89 04 24             	mov    %eax,(%esp)
 83fc077:	e8 52 6b 00 00       	call   8402bce <_ZN15DB_DeleteCharacC1Ev>
 83fc07c:	89 d8                	mov    %ebx,%eax
 83fc07e:	89 c2                	mov    %eax,%edx
 83fc080:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc083:	89 50 18             	mov    %edx,0x18(%eax)
 83fc086:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc08d:	e8 be 83 32 00       	call   8724450 <_Znwj>
 83fc092:	89 c3                	mov    %eax,%ebx
 83fc094:	89 d8                	mov    %ebx,%eax
 83fc096:	89 04 24             	mov    %eax,(%esp)
 83fc099:	e8 be 17 05 00       	call   844d85c <_ZN19DB_UpdateCharacViewC1Ev>
 83fc09e:	89 d8                	mov    %ebx,%eax
 83fc0a0:	89 c2                	mov    %eax,%edx
 83fc0a2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc0a5:	89 50 1c             	mov    %edx,0x1c(%eax)
 83fc0a8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc0af:	e8 9c 83 32 00       	call   8724450 <_Znwj>
 83fc0b4:	89 c3                	mov    %eax,%ebx
 83fc0b6:	89 d8                	mov    %ebx,%eax
 83fc0b8:	89 04 24             	mov    %eax,(%esp)
 83fc0bb:	e8 06 18 05 00       	call   844d8c6 <_ZN13DB_LoadCharacC1Ev>
 83fc0c0:	89 d8                	mov    %ebx,%eax
 83fc0c2:	89 c2                	mov    %eax,%edx
 83fc0c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc0c7:	89 50 20             	mov    %edx,0x20(%eax)
 83fc0ca:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc0d1:	e8 7a 83 32 00       	call   8724450 <_Znwj>
 83fc0d6:	89 c3                	mov    %eax,%ebx
 83fc0d8:	89 d8                	mov    %ebx,%eax
 83fc0da:	89 04 24             	mov    %eax,(%esp)
 83fc0dd:	e8 22 e5 00 00       	call   840a604 <_ZN16DB_LoadInventoryC1Ev>
 83fc0e2:	89 d8                	mov    %ebx,%eax
 83fc0e4:	89 c2                	mov    %eax,%edx
 83fc0e6:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc0e9:	89 50 24             	mov    %edx,0x24(%eax)
 83fc0ec:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc0f3:	e8 58 83 32 00       	call   8724450 <_Znwj>
 83fc0f8:	89 c3                	mov    %eax,%ebx
 83fc0fa:	89 d8                	mov    %ebx,%eax
 83fc0fc:	89 04 24             	mov    %eax,(%esp)
 83fc0ff:	e8 2c 18 05 00       	call   844d930 <_ZN12DB_LoadQuestC1Ev>
 83fc104:	89 d8                	mov    %ebx,%eax
 83fc106:	89 c2                	mov    %eax,%edx
 83fc108:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc10b:	89 50 2c             	mov    %edx,0x2c(%eax)
 83fc10e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc115:	e8 36 83 32 00       	call   8724450 <_Znwj>
 83fc11a:	89 c3                	mov    %eax,%ebx
 83fc11c:	89 d8                	mov    %ebx,%eax
 83fc11e:	89 04 24             	mov    %eax,(%esp)
 83fc121:	e8 54 1c 05 00       	call   844dd7a <_ZN8APSystem18DB_LoadActionPointC1Ev>
 83fc126:	89 d8                	mov    %ebx,%eax
 83fc128:	89 c2                	mov    %eax,%edx
 83fc12a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc12d:	89 50 48             	mov    %edx,0x48(%eax)
 83fc130:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc137:	e8 14 83 32 00       	call   8724450 <_Znwj>
 83fc13c:	89 c3                	mov    %eax,%ebx
 83fc13e:	89 d8                	mov    %ebx,%eax
 83fc140:	89 04 24             	mov    %eax,(%esp)
 83fc143:	e8 4e 1c 05 00       	call   844dd96 <_ZN8APSystem20DB_UpdateActionPointC1Ev>
 83fc148:	89 d8                	mov    %ebx,%eax
 83fc14a:	89 c2                	mov    %eax,%edx
 83fc14c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc14f:	89 50 50             	mov    %edx,0x50(%eax)
 83fc152:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc159:	e8 f2 82 32 00       	call   8724450 <_Znwj>
 83fc15e:	89 c3                	mov    %eax,%ebx
 83fc160:	89 d8                	mov    %ebx,%eax
 83fc162:	89 04 24             	mov    %eax,(%esp)
 83fc165:	e8 48 1c 05 00       	call   844ddb2 <_ZN8APSystem18DB_LoadRewardMedalC1Ev>
 83fc16a:	89 d8                	mov    %ebx,%eax
 83fc16c:	89 c2                	mov    %eax,%edx
 83fc16e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc171:	89 50 54             	mov    %edx,0x54(%eax)
 83fc174:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc17b:	e8 d0 82 32 00       	call   8724450 <_Znwj>
 83fc180:	89 c3                	mov    %eax,%ebx
 83fc182:	89 d8                	mov    %ebx,%eax
 83fc184:	89 04 24             	mov    %eax,(%esp)
 83fc187:	e8 42 1c 05 00       	call   844ddce <_ZN8APSystem20DB_UpdateRewardMedalC1Ev>
 83fc18c:	89 d8                	mov    %ebx,%eax
 83fc18e:	89 c2                	mov    %eax,%edx
 83fc190:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc193:	89 50 58             	mov    %edx,0x58(%eax)
 83fc196:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc19d:	e8 ae 82 32 00       	call   8724450 <_Znwj>
 83fc1a2:	89 c3                	mov    %eax,%ebx
 83fc1a4:	89 d8                	mov    %ebx,%eax
 83fc1a6:	89 04 24             	mov    %eax,(%esp)
 83fc1a9:	e8 d6 79 00 00       	call   8403b84 <_ZN10DB_LoadEtcC1Ev>
 83fc1ae:	89 d8                	mov    %ebx,%eax
 83fc1b0:	89 c2                	mov    %eax,%edx
 83fc1b2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc1b5:	89 90 84 00 00 00    	mov    %edx,0x84(%eax)
 83fc1bb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc1c2:	e8 89 82 32 00       	call   8724450 <_Znwj>
 83fc1c7:	89 c3                	mov    %eax,%ebx
 83fc1c9:	89 d8                	mov    %ebx,%eax
 83fc1cb:	89 04 24             	mov    %eax,(%esp)
 83fc1ce:	e8 5b 9a 01 00       	call   8415c2e <_ZN13DB_SaveCharacC1Ev>
 83fc1d3:	89 d8                	mov    %ebx,%eax
 83fc1d5:	89 c2                	mov    %eax,%edx
 83fc1d7:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc1da:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 83fc1e0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc1e7:	e8 64 82 32 00       	call   8724450 <_Znwj>
 83fc1ec:	89 c3                	mov    %eax,%ebx
 83fc1ee:	89 d8                	mov    %ebx,%eax
 83fc1f0:	89 04 24             	mov    %eax,(%esp)
 83fc1f3:	e8 4a a8 01 00       	call   8416a42 <_ZN12DB_SaveInvenC1Ev>
 83fc1f8:	89 d8                	mov    %ebx,%eax
 83fc1fa:	89 c2                	mov    %eax,%edx
 83fc1fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc1ff:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 83fc205:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc20c:	e8 3f 82 32 00       	call   8724450 <_Znwj>
 83fc211:	89 c3                	mov    %eax,%ebx
 83fc213:	89 d8                	mov    %ebx,%eax
 83fc215:	89 04 24             	mov    %eax,(%esp)
 83fc218:	e8 53 b5 01 00       	call   8417770 <_ZN12DB_SaveSkillC1Ev>
 83fc21d:	89 d8                	mov    %ebx,%eax
 83fc21f:	89 c2                	mov    %eax,%edx
 83fc221:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc224:	89 90 94 00 00 00    	mov    %edx,0x94(%eax)
 83fc22a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc231:	e8 1a 82 32 00       	call   8724450 <_Znwj>
 83fc236:	89 c3                	mov    %eax,%ebx
 83fc238:	89 d8                	mov    %ebx,%eax
 83fc23a:	89 04 24             	mov    %eax,(%esp)
 83fc23d:	e8 cc af 01 00       	call   841720e <_ZN10DB_SavePvpC1Ev>
 83fc242:	89 d8                	mov    %ebx,%eax
 83fc244:	89 c2                	mov    %eax,%edx
 83fc246:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc249:	89 90 98 00 00 00    	mov    %edx,0x98(%eax)
 83fc24f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc256:	e8 f5 81 32 00       	call   8724450 <_Znwj>
 83fc25b:	89 c3                	mov    %eax,%ebx
 83fc25d:	89 d8                	mov    %ebx,%eax
 83fc25f:	89 04 24             	mov    %eax,(%esp)
 83fc262:	e8 0d c9 01 00       	call   8418b74 <_ZN14DB_UpdateQuestC1Ev>
 83fc267:	89 d8                	mov    %ebx,%eax
 83fc269:	89 c2                	mov    %eax,%edx
 83fc26b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc26e:	89 90 a8 00 00 00    	mov    %edx,0xa8(%eax)
 83fc274:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc27b:	e8 d0 81 32 00       	call   8724450 <_Znwj>
 83fc280:	89 c3                	mov    %eax,%ebx
 83fc282:	89 d8                	mov    %ebx,%eax
 83fc284:	89 04 24             	mov    %eax,(%esp)
 83fc287:	e8 a4 be 01 00       	call   8418130 <_ZN17DB_UpdateGrowTypeC1Ev>
 83fc28c:	89 d8                	mov    %ebx,%eax
 83fc28e:	89 c2                	mov    %eax,%edx
 83fc290:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc293:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 83fc299:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc2a0:	e8 ab 81 32 00       	call   8724450 <_Znwj>
 83fc2a5:	89 c3                	mov    %eax,%ebx
 83fc2a7:	89 d8                	mov    %ebx,%eax
 83fc2a9:	89 04 24             	mov    %eax,(%esp)
 83fc2ac:	e8 53 17 05 00       	call   844da04 <_ZN14DB_UpdateLoginC1Ev>
 83fc2b1:	89 d8                	mov    %ebx,%eax
 83fc2b3:	89 c2                	mov    %eax,%edx
 83fc2b5:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc2b8:	89 90 b0 00 00 00    	mov    %edx,0xb0(%eax)
 83fc2be:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc2c5:	e8 86 81 32 00       	call   8724450 <_Znwj>
 83fc2ca:	89 c3                	mov    %eax,%ebx
 83fc2cc:	89 d8                	mov    %ebx,%eax
 83fc2ce:	89 04 24             	mov    %eax,(%esp)
 83fc2d1:	e8 02 c1 01 00       	call   84183d8 <_ZN15DB_UpdateLogoutC1Ev>
 83fc2d6:	89 d8                	mov    %ebx,%eax
 83fc2d8:	89 c2                	mov    %eax,%edx
 83fc2da:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc2dd:	89 90 b4 00 00 00    	mov    %edx,0xb4(%eax)
 83fc2e3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc2ea:	e8 61 81 32 00       	call   8724450 <_Znwj>
 83fc2ef:	89 c3                	mov    %eax,%ebx
 83fc2f1:	89 d8                	mov    %ebx,%eax
 83fc2f3:	89 04 24             	mov    %eax,(%esp)
 83fc2f6:	e8 4f bc 01 00       	call   8417f4a <_ZN16DB_UpdateChannelC1Ev>
 83fc2fb:	89 d8                	mov    %ebx,%eax
 83fc2fd:	89 c2                	mov    %eax,%edx
 83fc2ff:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc302:	89 90 bc 00 00 00    	mov    %edx,0xbc(%eax)
 83fc308:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc30f:	e8 3c 81 32 00       	call   8724450 <_Znwj>
 83fc314:	89 c3                	mov    %eax,%ebx
 83fc316:	89 d8                	mov    %ebx,%eax
 83fc318:	89 04 24             	mov    %eax,(%esp)
 83fc31b:	e8 72 65 00 00       	call   8402892 <_ZN16DB_DeleteChannelC1Ev>
 83fc320:	89 d8                	mov    %ebx,%eax
 83fc322:	89 c2                	mov    %eax,%edx
 83fc324:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc327:	89 90 c0 00 00 00    	mov    %edx,0xc0(%eax)
 83fc32d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc334:	e8 17 81 32 00       	call   8724450 <_Znwj>
 83fc339:	89 c3                	mov    %eax,%ebx
 83fc33b:	89 d8                	mov    %ebx,%eax
 83fc33d:	89 04 24             	mov    %eax,(%esp)
 83fc340:	e8 07 73 00 00       	call   840364c <_ZN16DB_InsertChannelC1Ev>
 83fc345:	89 d8                	mov    %ebx,%eax
 83fc347:	89 c2                	mov    %eax,%edx
 83fc349:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc34c:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 83fc352:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc359:	e8 f2 80 32 00       	call   8724450 <_Znwj>
 83fc35e:	89 c3                	mov    %eax,%ebx
 83fc360:	89 d8                	mov    %ebx,%eax
 83fc362:	89 04 24             	mov    %eax,(%esp)
 83fc365:	e8 e6 39 00 00       	call   83ffd50 <_ZN19DB_AvatarItemInsertC1Ev>
 83fc36a:	89 d8                	mov    %ebx,%eax
 83fc36c:	89 c2                	mov    %eax,%edx
 83fc36e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc371:	89 90 c8 00 00 00    	mov    %edx,0xc8(%eax)
 83fc377:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc37e:	e8 cd 80 32 00       	call   8724450 <_Znwj>
 83fc383:	89 c3                	mov    %eax,%ebx
 83fc385:	89 d8                	mov    %ebx,%eax
 83fc387:	89 04 24             	mov    %eax,(%esp)
 83fc38a:	e8 b3 38 00 00       	call   83ffc42 <_ZN16DB_AvatarItemDelC1Ev>
 83fc38f:	89 d8                	mov    %ebx,%eax
 83fc391:	89 c2                	mov    %eax,%edx
 83fc393:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc396:	89 90 d0 00 00 00    	mov    %edx,0xd0(%eax)
 83fc39c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc3a3:	e8 a8 80 32 00       	call   8724450 <_Znwj>
 83fc3a8:	89 c3                	mov    %eax,%ebx
 83fc3aa:	89 d8                	mov    %ebx,%eax
 83fc3ac:	89 04 24             	mov    %eax,(%esp)
 83fc3af:	e8 6a 3f 00 00       	call   840031e <_ZN17DB_AvatarItemMoveC1Ev>
 83fc3b4:	89 d8                	mov    %ebx,%eax
 83fc3b6:	89 c2                	mov    %eax,%edx
 83fc3b8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc3bb:	89 90 cc 00 00 00    	mov    %edx,0xcc(%eax)
 83fc3c1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc3c8:	e8 83 80 32 00       	call   8724450 <_Znwj>
 83fc3cd:	89 c3                	mov    %eax,%ebx
 83fc3cf:	89 d8                	mov    %ebx,%eax
 83fc3d1:	89 04 24             	mov    %eax,(%esp)
 83fc3d4:	e8 df 36 00 00       	call   83ffab8 <_ZN21DB_AvatarExtendPeriodC1Ev>
 83fc3d9:	89 d8                	mov    %ebx,%eax
 83fc3db:	89 c2                	mov    %eax,%edx
 83fc3dd:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc3e0:	89 90 d4 00 00 00    	mov    %edx,0xd4(%eax)
 83fc3e6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc3ed:	e8 5e 80 32 00       	call   8724450 <_Znwj>
 83fc3f2:	89 c3                	mov    %eax,%ebx
 83fc3f4:	89 d8                	mov    %ebx,%eax
 83fc3f6:	89 04 24             	mov    %eax,(%esp)
 83fc3f9:	e8 f4 13 05 00       	call   844d7f2 <_ZN20DB_AvatarChangeOwnerC1Ev>
 83fc3fe:	89 d8                	mov    %ebx,%eax
 83fc400:	89 c2                	mov    %eax,%edx
 83fc402:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc405:	89 90 d8 00 00 00    	mov    %edx,0xd8(%eax)
 83fc40b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc412:	e8 39 80 32 00       	call   8724450 <_Znwj>
 83fc417:	89 c3                	mov    %eax,%ebx
 83fc419:	89 d8                	mov    %ebx,%eax
 83fc41b:	89 04 24             	mov    %eax,(%esp)
 83fc41e:	e8 87 1c 05 00       	call   844e0aa <_ZN19DB_AvatarChangeStatC1Ev>
 83fc423:	89 d8                	mov    %ebx,%eax
 83fc425:	89 c2                	mov    %eax,%edx
 83fc427:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc42a:	89 90 dc 00 00 00    	mov    %edx,0xdc(%eax)
 83fc430:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc437:	e8 14 80 32 00       	call   8724450 <_Znwj>
 83fc43c:	89 c3                	mov    %eax,%ebx
 83fc43e:	89 d8                	mov    %ebx,%eax
 83fc440:	89 04 24             	mov    %eax,(%esp)
 83fc443:	e8 52 15 05 00       	call   844d99a <_ZN11DB_SaveRankC1Ev>
 83fc448:	89 d8                	mov    %ebx,%eax
 83fc44a:	89 c2                	mov    %eax,%edx
 83fc44c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc44f:	89 90 9c 00 00 00    	mov    %edx,0x9c(%eax)
 83fc455:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc45c:	e8 ef 7f 32 00       	call   8724450 <_Znwj>
 83fc461:	89 c3                	mov    %eax,%ebx
 83fc463:	89 d8                	mov    %ebx,%eax
 83fc465:	89 04 24             	mov    %eax,(%esp)
 83fc468:	e8 e1 75 00 00       	call   8403a4e <_ZN15DB_InsertTicketC1Ev>
 83fc46d:	89 d8                	mov    %ebx,%eax
 83fc46f:	89 c2                	mov    %eax,%edx
 83fc471:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc474:	89 90 a4 00 00 00    	mov    %edx,0xa4(%eax)
 83fc47a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc481:	e8 ca 7f 32 00       	call   8724450 <_Znwj>
 83fc486:	89 c3                	mov    %eax,%ebx
 83fc488:	89 d8                	mov    %ebx,%eax
 83fc48a:	89 04 24             	mov    %eax,(%esp)
 83fc48d:	e8 e0 d0 01 00       	call   8419572 <_ZN13DB_LoadTicketC1Ev>
 83fc492:	89 d8                	mov    %ebx,%eax
 83fc494:	89 c2                	mov    %eax,%edx
 83fc496:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc499:	89 50 30             	mov    %edx,0x30(%eax)
 83fc49c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc4a3:	e8 a8 7f 32 00       	call   8724450 <_Znwj>
 83fc4a8:	89 c3                	mov    %eax,%ebx
 83fc4aa:	89 d8                	mov    %ebx,%eax
 83fc4ac:	89 04 24             	mov    %eax,(%esp)
 83fc4af:	e8 9e d3 01 00       	call   8419852 <_ZN19DB_LoadDungeonClearC1Ev>
 83fc4b4:	89 d8                	mov    %ebx,%eax
 83fc4b6:	89 c2                	mov    %eax,%edx
 83fc4b8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc4bb:	89 50 34             	mov    %edx,0x34(%eax)
 83fc4be:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc4c5:	e8 86 7f 32 00       	call   8724450 <_Znwj>
 83fc4ca:	89 c3                	mov    %eax,%ebx
 83fc4cc:	89 d8                	mov    %ebx,%eax
 83fc4ce:	89 04 24             	mov    %eax,(%esp)
 83fc4d1:	e8 16 db 01 00       	call   8419fec <_ZN19DB_SaveDungeonClearC1Ev>
 83fc4d6:	89 d8                	mov    %ebx,%eax
 83fc4d8:	89 c2                	mov    %eax,%edx
 83fc4da:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc4dd:	89 90 a0 00 00 00    	mov    %edx,0xa0(%eax)
 83fc4e3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc4ea:	e8 61 7f 32 00       	call   8724450 <_Znwj>
 83fc4ef:	89 c3                	mov    %eax,%ebx
 83fc4f1:	89 d8                	mov    %ebx,%eax
 83fc4f3:	89 04 24             	mov    %eax,(%esp)
 83fc4f6:	e8 89 dd 01 00       	call   841a284 <_ZN18DB_TerminateServerC1Ev>
 83fc4fb:	89 d8                	mov    %ebx,%eax
 83fc4fd:	89 c2                	mov    %eax,%edx
 83fc4ff:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc502:	89 90 00 01 00 00    	mov    %edx,0x100(%eax)
 83fc508:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc50f:	e8 3c 7f 32 00       	call   8724450 <_Znwj>
 83fc514:	89 c3                	mov    %eax,%ebx
 83fc516:	89 d8                	mov    %ebx,%eax
 83fc518:	89 04 24             	mov    %eax,(%esp)
 83fc51b:	e8 f2 b4 01 00       	call   8417a12 <_ZN15DB_StatBreakJarC1Ev>
 83fc520:	89 d8                	mov    %ebx,%eax
 83fc522:	89 c2                	mov    %eax,%edx
 83fc524:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc527:	89 90 e0 00 00 00    	mov    %edx,0xe0(%eax)
 83fc52d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc534:	e8 17 7f 32 00       	call   8724450 <_Znwj>
 83fc539:	89 c3                	mov    %eax,%ebx
 83fc53b:	89 d8                	mov    %ebx,%eax
 83fc53d:	89 04 24             	mov    %eax,(%esp)
 83fc540:	e8 3d b6 01 00       	call   8417b82 <_ZN18DB_StatCompositionC1Ev>
 83fc545:	89 d8                	mov    %ebx,%eax
 83fc547:	89 c2                	mov    %eax,%edx
 83fc549:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc54c:	89 90 e4 00 00 00    	mov    %edx,0xe4(%eax)
 83fc552:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc559:	e8 f2 7e 32 00       	call   8724450 <_Znwj>
 83fc55e:	89 c3                	mov    %eax,%ebx
 83fc560:	89 d8                	mov    %ebx,%eax
 83fc562:	89 04 24             	mov    %eax,(%esp)
 83fc565:	e8 9a b5 01 00       	call   8417b04 <_ZN14DB_StatCoinUseC1Ev>
 83fc56a:	89 d8                	mov    %ebx,%eax
 83fc56c:	89 c2                	mov    %eax,%edx
 83fc56e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc571:	89 90 e8 00 00 00    	mov    %edx,0xe8(%eax)
 83fc577:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc57e:	e8 cd 7e 32 00       	call   8724450 <_Znwj>
 83fc583:	89 c3                	mov    %eax,%ebx
 83fc585:	89 d8                	mov    %ebx,%eax
 83fc587:	89 04 24             	mov    %eax,(%esp)
 83fc58a:	e8 c9 b8 01 00       	call   8417e58 <_ZN14DB_StatPvpPlayC1Ev>
 83fc58f:	89 d8                	mov    %ebx,%eax
 83fc591:	89 c2                	mov    %eax,%edx
 83fc593:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc596:	89 90 ec 00 00 00    	mov    %edx,0xec(%eax)
 83fc59c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc5a3:	e8 a8 7e 32 00       	call   8724450 <_Znwj>
 83fc5a8:	89 c3                	mov    %eax,%ebx
 83fc5aa:	89 d8                	mov    %ebx,%eax
 83fc5ac:	89 04 24             	mov    %eax,(%esp)
 83fc5af:	e8 b2 b7 01 00       	call   8417d66 <_ZN15DB_StatGameRankC1Ev>
 83fc5b4:	89 d8                	mov    %ebx,%eax
 83fc5b6:	89 c2                	mov    %eax,%edx
 83fc5b8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc5bb:	89 90 f0 00 00 00    	mov    %edx,0xf0(%eax)
 83fc5c1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc5c8:	e8 83 7e 32 00       	call   8724450 <_Znwj>
 83fc5cd:	89 c3                	mov    %eax,%ebx
 83fc5cf:	89 d8                	mov    %ebx,%eax
 83fc5d1:	89 04 24             	mov    %eax,(%esp)
 83fc5d4:	e8 9b b6 01 00       	call   8417c74 <_ZN19DB_StatDungeonClearC1Ev>
 83fc5d9:	89 d8                	mov    %ebx,%eax
 83fc5db:	89 c2                	mov    %eax,%edx
 83fc5dd:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc5e0:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
 83fc5e6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc5ed:	e8 5e 7e 32 00       	call   8724450 <_Znwj>
 83fc5f2:	89 c3                	mov    %eax,%ebx
 83fc5f4:	89 d8                	mov    %ebx,%eax
 83fc5f6:	89 04 24             	mov    %eax,(%esp)
 83fc5f9:	e8 c8 1a 05 00       	call   844e0c6 <_ZN18DB_CrashDownReportC1Ev>
 83fc5fe:	89 d8                	mov    %ebx,%eax
 83fc600:	89 c2                	mov    %eax,%edx
 83fc602:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc605:	89 90 44 01 00 00    	mov    %edx,0x144(%eax)
 83fc60b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc612:	e8 39 7e 32 00       	call   8724450 <_Znwj>
 83fc617:	89 c3                	mov    %eax,%ebx
 83fc619:	89 d8                	mov    %ebx,%eax
 83fc61b:	89 04 24             	mov    %eax,(%esp)
 83fc61e:	e8 bf 1a 05 00       	call   844e0e2 <_ZN23DB_SaveFeaturedGoodsIdxC1Ev>
 83fc623:	89 d8                	mov    %ebx,%eax
 83fc625:	89 c2                	mov    %eax,%edx
 83fc627:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc62a:	89 90 4c 01 00 00    	mov    %edx,0x14c(%eax)
 83fc630:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc637:	e8 14 7e 32 00       	call   8724450 <_Znwj>
 83fc63c:	89 c3                	mov    %eax,%ebx
 83fc63e:	89 d8                	mov    %ebx,%eax
 83fc640:	89 04 24             	mov    %eax,(%esp)
 83fc643:	e8 b6 1a 05 00       	call   844e0fe <_ZN25DB_RemoveFeaturedGoodsIdxC1Ev>
 83fc648:	89 d8                	mov    %ebx,%eax
 83fc64a:	89 c2                	mov    %eax,%edx
 83fc64c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc64f:	89 90 50 01 00 00    	mov    %edx,0x150(%eax)
 83fc655:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc65c:	e8 ef 7d 32 00       	call   8724450 <_Znwj>
 83fc661:	89 c3                	mov    %eax,%ebx
 83fc663:	89 d8                	mov    %ebx,%eax
 83fc665:	89 04 24             	mov    %eax,(%esp)
 83fc668:	e8 01 14 05 00       	call   844da6e <_ZN16DB_GenCeraTicketC1Ev>
 83fc66d:	89 d8                	mov    %ebx,%eax
 83fc66f:	89 c2                	mov    %eax,%edx
 83fc671:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc674:	89 90 28 01 00 00    	mov    %edx,0x128(%eax)
 83fc67a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc681:	e8 ca 7d 32 00       	call   8724450 <_Znwj>
 83fc686:	89 c3                	mov    %eax,%ebx
 83fc688:	89 d8                	mov    %ebx,%eax
 83fc68a:	89 04 24             	mov    %eax,(%esp)
 83fc68d:	e8 46 14 05 00       	call   844dad8 <_ZN16DB_SaveEventItemC1Ev>
 83fc692:	89 d8                	mov    %ebx,%eax
 83fc694:	89 c2                	mov    %eax,%edx
 83fc696:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc699:	89 90 34 01 00 00    	mov    %edx,0x134(%eax)
 83fc69f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc6a6:	e8 a5 7d 32 00       	call   8724450 <_Znwj>
 83fc6ab:	89 c3                	mov    %eax,%ebx
 83fc6ad:	89 d8                	mov    %ebx,%eax
 83fc6af:	89 04 24             	mov    %eax,(%esp)
 83fc6b2:	e8 8b 14 05 00       	call   844db42 <_ZN18DB_RemoveEventItemC1Ev>
 83fc6b7:	89 d8                	mov    %ebx,%eax
 83fc6b9:	89 c2                	mov    %eax,%edx
 83fc6bb:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc6be:	89 90 38 01 00 00    	mov    %edx,0x138(%eax)
 83fc6c4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc6cb:	e8 80 7d 32 00       	call   8724450 <_Znwj>
 83fc6d0:	89 c3                	mov    %eax,%ebx
 83fc6d2:	89 d8                	mov    %ebx,%eax
 83fc6d4:	89 04 24             	mov    %eax,(%esp)
 83fc6d7:	e8 d0 14 05 00       	call   844dbac <_ZN20DB_FatigueResetTimerC1Ev>
 83fc6dc:	89 d8                	mov    %ebx,%eax
 83fc6de:	89 c2                	mov    %eax,%edx
 83fc6e0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc6e3:	89 90 3c 01 00 00    	mov    %edx,0x13c(%eax)
 83fc6e9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc6f0:	e8 5b 7d 32 00       	call   8724450 <_Znwj>
 83fc6f5:	89 c3                	mov    %eax,%ebx
 83fc6f7:	89 d8                	mov    %ebx,%eax
 83fc6f9:	89 04 24             	mov    %eax,(%esp)
 83fc6fc:	e8 19 1a 05 00       	call   844e11a <_ZN26DB_SuicideWhenQueueIsEmptyC1Ev>
 83fc701:	89 d8                	mov    %ebx,%eax
 83fc703:	89 c2                	mov    %eax,%edx
 83fc705:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc708:	89 90 48 01 00 00    	mov    %edx,0x148(%eax)
 83fc70e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc715:	e8 36 7d 32 00       	call   8724450 <_Znwj>
 83fc71a:	89 c3                	mov    %eax,%ebx
 83fc71c:	89 d8                	mov    %ebx,%eax
 83fc71e:	89 04 24             	mov    %eax,(%esp)
 83fc721:	e8 10 1a 05 00       	call   844e136 <_ZN18DB_SavePremiumInfoC1Ev>
 83fc726:	89 d8                	mov    %ebx,%eax
 83fc728:	89 c2                	mov    %eax,%edx
 83fc72a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc72d:	89 90 54 01 00 00    	mov    %edx,0x154(%eax)
 83fc733:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc73a:	e8 11 7d 32 00       	call   8724450 <_Znwj>
 83fc73f:	89 c3                	mov    %eax,%ebx
 83fc741:	89 d8                	mov    %ebx,%eax
 83fc743:	89 04 24             	mov    %eax,(%esp)
 83fc746:	e8 07 1a 05 00       	call   844e152 <_ZN23DB_SaveCharacInfo4GuildC1Ev>
 83fc74b:	89 d8                	mov    %ebx,%eax
 83fc74d:	89 c2                	mov    %eax,%edx
 83fc74f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc752:	89 90 90 01 00 00    	mov    %edx,0x190(%eax)
 83fc758:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc75f:	e8 ec 7c 32 00       	call   8724450 <_Znwj>
 83fc764:	89 c3                	mov    %eax,%ebx
 83fc766:	89 d8                	mov    %ebx,%eax
 83fc768:	89 04 24             	mov    %eax,(%esp)
 83fc76b:	e8 fe 19 05 00       	call   844e16e <_ZN18DB_StatDungeonFailC1Ev>
 83fc770:	89 d8                	mov    %ebx,%eax
 83fc772:	89 c2                	mov    %eax,%edx
 83fc774:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc777:	89 90 a0 01 00 00    	mov    %edx,0x1a0(%eax)
 83fc77d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc784:	e8 c7 7c 32 00       	call   8724450 <_Znwj>
 83fc789:	89 c3                	mov    %eax,%ebx
 83fc78b:	89 d8                	mov    %ebx,%eax
 83fc78d:	89 04 24             	mov    %eax,(%esp)
 83fc790:	e8 f5 19 05 00       	call   844e18a <_ZN15DB_StatPVPPlay2C1Ev>
 83fc795:	89 d8                	mov    %ebx,%eax
 83fc797:	89 c2                	mov    %eax,%edx
 83fc799:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc79c:	89 90 a4 01 00 00    	mov    %edx,0x1a4(%eax)
 83fc7a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc7a9:	e8 a2 7c 32 00       	call   8724450 <_Znwj>
 83fc7ae:	89 c3                	mov    %eax,%ebx
 83fc7b0:	89 d8                	mov    %ebx,%eax
 83fc7b2:	89 04 24             	mov    %eax,(%esp)
 83fc7b5:	e8 ec 19 05 00       	call   844e1a6 <_ZN23DB_StatUseShusiaServiceC1Ev>
 83fc7ba:	89 d8                	mov    %ebx,%eax
 83fc7bc:	89 c2                	mov    %eax,%edx
 83fc7be:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc7c1:	89 90 a8 01 00 00    	mov    %edx,0x1a8(%eax)
 83fc7c7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc7ce:	e8 7d 7c 32 00       	call   8724450 <_Znwj>
 83fc7d3:	89 c3                	mov    %eax,%ebx
 83fc7d5:	89 d8                	mov    %ebx,%eax
 83fc7d7:	89 04 24             	mov    %eax,(%esp)
 83fc7da:	e8 e3 19 05 00       	call   844e1c2 <_ZN22DB_UpdateDetailChannelC1Ev>
 83fc7df:	89 d8                	mov    %ebx,%eax
 83fc7e1:	89 c2                	mov    %eax,%edx
 83fc7e3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc7e6:	89 90 ac 01 00 00    	mov    %edx,0x1ac(%eax)
 83fc7ec:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc7f3:	e8 58 7c 32 00       	call   8724450 <_Znwj>
 83fc7f8:	89 c3                	mov    %eax,%ebx
 83fc7fa:	89 d8                	mov    %ebx,%eax
 83fc7fc:	89 04 24             	mov    %eax,(%esp)
 83fc7ff:	e8 da 19 05 00       	call   844e1de <_ZN23DB_SaveChannelUserLevelC1Ev>
 83fc804:	89 d8                	mov    %ebx,%eax
 83fc806:	89 c2                	mov    %eax,%edx
 83fc808:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc80b:	89 90 b0 01 00 00    	mov    %edx,0x1b0(%eax)
 83fc811:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc818:	e8 33 7c 32 00       	call   8724450 <_Znwj>
 83fc81d:	89 c3                	mov    %eax,%ebx
 83fc81f:	89 d8                	mov    %ebx,%eax
 83fc821:	89 04 24             	mov    %eax,(%esp)
 83fc824:	e8 d1 19 05 00       	call   844e1fa <_ZN19DB_SavePrivateStoreC1Ev>
 83fc829:	89 d8                	mov    %ebx,%eax
 83fc82b:	89 c2                	mov    %eax,%edx
 83fc82d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc830:	89 90 e0 01 00 00    	mov    %edx,0x1e0(%eax)
 83fc836:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc83d:	e8 0e 7c 32 00       	call   8724450 <_Znwj>
 83fc842:	89 c3                	mov    %eax,%ebx
 83fc844:	89 d8                	mov    %ebx,%eax
 83fc846:	89 04 24             	mov    %eax,(%esp)
 83fc849:	e8 c8 19 05 00       	call   844e216 <_ZN19DB_LoadPrivateStoreC1Ev>
 83fc84e:	89 d8                	mov    %ebx,%eax
 83fc850:	89 c2                	mov    %eax,%edx
 83fc852:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc855:	89 90 e4 01 00 00    	mov    %edx,0x1e4(%eax)
 83fc85b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc862:	e8 e9 7b 32 00       	call   8724450 <_Znwj>
 83fc867:	89 c3                	mov    %eax,%ebx
 83fc869:	89 d8                	mov    %ebx,%eax
 83fc86b:	89 04 24             	mov    %eax,(%esp)
 83fc86e:	e8 bf 19 05 00       	call   844e232 <_ZN18DB_SaveGamechannelC1Ev>
 83fc873:	89 d8                	mov    %ebx,%eax
 83fc875:	89 c2                	mov    %eax,%edx
 83fc877:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc87a:	89 90 e8 01 00 00    	mov    %edx,0x1e8(%eax)
 83fc880:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc887:	e8 c4 7b 32 00       	call   8724450 <_Znwj>
 83fc88c:	89 c3                	mov    %eax,%ebx
 83fc88e:	89 d8                	mov    %ebx,%eax
 83fc890:	89 04 24             	mov    %eax,(%esp)
 83fc893:	e8 b6 19 05 00       	call   844e24e <_ZN29DB_UpdateQueryCountTimerLogdbC1Ev>
 83fc898:	89 d8                	mov    %ebx,%eax
 83fc89a:	89 c2                	mov    %eax,%edx
 83fc89c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc89f:	89 90 f0 01 00 00    	mov    %edx,0x1f0(%eax)
 83fc8a5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc8ac:	e8 9f 7b 32 00       	call   8724450 <_Znwj>
 83fc8b1:	89 c3                	mov    %eax,%ebx
 83fc8b3:	89 d8                	mov    %ebx,%eax
 83fc8b5:	89 04 24             	mov    %eax,(%esp)
 83fc8b8:	e8 ad 19 05 00       	call   844e26a <_ZN26DB_UpdateQueryCountTimerDbC1Ev>
 83fc8bd:	89 d8                	mov    %ebx,%eax
 83fc8bf:	89 c2                	mov    %eax,%edx
 83fc8c1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc8c4:	89 90 f4 01 00 00    	mov    %edx,0x1f4(%eax)
 83fc8ca:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc8d1:	e8 7a 7b 32 00       	call   8724450 <_Znwj>
 83fc8d6:	89 c3                	mov    %eax,%ebx
 83fc8d8:	89 d8                	mov    %ebx,%eax
 83fc8da:	89 04 24             	mov    %eax,(%esp)
 83fc8dd:	e8 a4 19 05 00       	call   844e286 <_ZN26DB_UpdateQueryCountDbLogdbC1Ev>
 83fc8e2:	89 d8                	mov    %ebx,%eax
 83fc8e4:	89 c2                	mov    %eax,%edx
 83fc8e6:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc8e9:	89 90 f8 01 00 00    	mov    %edx,0x1f8(%eax)
 83fc8ef:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc8f6:	e8 55 7b 32 00       	call   8724450 <_Znwj>
 83fc8fb:	89 c3                	mov    %eax,%ebx
 83fc8fd:	89 d8                	mov    %ebx,%eax
 83fc8ff:	89 04 24             	mov    %eax,(%esp)
 83fc902:	e8 9b 19 05 00       	call   844e2a2 <_ZN16DB_UpdateNatTypeC1Ev>
 83fc907:	89 d8                	mov    %ebx,%eax
 83fc909:	89 c2                	mov    %eax,%edx
 83fc90b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc90e:	89 90 10 02 00 00    	mov    %edx,0x210(%eax)
 83fc914:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc91b:	e8 30 7b 32 00       	call   8724450 <_Znwj>
 83fc920:	89 c3                	mov    %eax,%ebx
 83fc922:	89 d8                	mov    %ebx,%eax
 83fc924:	89 04 24             	mov    %eax,(%esp)
 83fc927:	e8 92 19 05 00       	call   844e2be <_ZN20DB_UpdateNatTypeUserC1Ev>
 83fc92c:	89 d8                	mov    %ebx,%eax
 83fc92e:	89 c2                	mov    %eax,%edx
 83fc930:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc933:	89 90 14 02 00 00    	mov    %edx,0x214(%eax)
 83fc939:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc940:	e8 0b 7b 32 00       	call   8724450 <_Znwj>
 83fc945:	89 c3                	mov    %eax,%ebx
 83fc947:	89 d8                	mov    %ebx,%eax
 83fc949:	89 04 24             	mov    %eax,(%esp)
 83fc94c:	e8 89 19 05 00       	call   844e2da <_ZN28DB_MailBox_Req_CheckReceiverC1Ev>
 83fc951:	89 d8                	mov    %ebx,%eax
 83fc953:	89 c2                	mov    %eax,%edx
 83fc955:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc958:	89 90 fc 01 00 00    	mov    %edx,0x1fc(%eax)
 83fc95e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc965:	e8 e6 7a 32 00       	call   8724450 <_Znwj>
 83fc96a:	89 c3                	mov    %eax,%ebx
 83fc96c:	89 d8                	mov    %ebx,%eax
 83fc96e:	89 04 24             	mov    %eax,(%esp)
 83fc971:	e8 80 19 05 00       	call   844e2f6 <_ZN19DB_MailBox_Req_ListC1Ev>
 83fc976:	89 d8                	mov    %ebx,%eax
 83fc978:	89 c2                	mov    %eax,%edx
 83fc97a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc97d:	89 90 00 02 00 00    	mov    %edx,0x200(%eax)
 83fc983:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc98a:	e8 c1 7a 32 00       	call   8724450 <_Znwj>
 83fc98f:	89 c3                	mov    %eax,%ebx
 83fc991:	89 d8                	mov    %ebx,%eax
 83fc993:	89 04 24             	mov    %eax,(%esp)
 83fc996:	e8 77 19 05 00       	call   844e312 <_ZN21DB_MailBox_Req_DeleteC1Ev>
 83fc99b:	89 d8                	mov    %ebx,%eax
 83fc99d:	89 c2                	mov    %eax,%edx
 83fc99f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc9a2:	89 90 08 02 00 00    	mov    %edx,0x208(%eax)
 83fc9a8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc9af:	e8 9c 7a 32 00       	call   8724450 <_Znwj>
 83fc9b4:	89 c3                	mov    %eax,%ebx
 83fc9b6:	89 d8                	mov    %ebx,%eax
 83fc9b8:	89 04 24             	mov    %eax,(%esp)
 83fc9bb:	e8 6e 19 05 00       	call   844e32e <_ZN19DB_MailBox_Req_SendC1Ev>
 83fc9c0:	89 d8                	mov    %ebx,%eax
 83fc9c2:	89 c2                	mov    %eax,%edx
 83fc9c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc9c7:	89 90 04 02 00 00    	mov    %edx,0x204(%eax)
 83fc9cd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc9d4:	e8 77 7a 32 00       	call   8724450 <_Znwj>
 83fc9d9:	89 c3                	mov    %eax,%ebx
 83fc9db:	89 d8                	mov    %ebx,%eax
 83fc9dd:	89 04 24             	mov    %eax,(%esp)
 83fc9e0:	e8 65 19 05 00       	call   844e34a <_ZN21DB_InsertCreatureItemC1Ev>
 83fc9e5:	89 d8                	mov    %ebx,%eax
 83fc9e7:	89 c2                	mov    %eax,%edx
 83fc9e9:	8b 45 08             	mov    0x8(%ebp),%eax
 83fc9ec:	89 90 20 02 00 00    	mov    %edx,0x220(%eax)
 83fc9f2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fc9f9:	e8 52 7a 32 00       	call   8724450 <_Znwj>
 83fc9fe:	89 c3                	mov    %eax,%ebx
 83fca00:	89 d8                	mov    %ebx,%eax
 83fca02:	89 04 24             	mov    %eax,(%esp)
 83fca05:	e8 5c 19 05 00       	call   844e366 <_ZN25DB_UpdateCreatureItemListC1Ev>
 83fca0a:	89 d8                	mov    %ebx,%eax
 83fca0c:	89 c2                	mov    %eax,%edx
 83fca0e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fca11:	89 90 28 02 00 00    	mov    %edx,0x228(%eax)
 83fca17:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fca1e:	e8 2d 7a 32 00       	call   8724450 <_Znwj>
 83fca23:	89 c3                	mov    %eax,%ebx
 83fca25:	89 d8                	mov    %ebx,%eax
 83fca27:	89 04 24             	mov    %eax,(%esp)
 83fca2a:	e8 53 19 05 00       	call   844e382 <_ZN21DB_UpdateCreatureItemC1Ev>
 83fca2f:	89 d8                	mov    %ebx,%eax
 83fca31:	89 c2                	mov    %eax,%edx
 83fca33:	8b 45 08             	mov    0x8(%ebp),%eax
 83fca36:	89 90 2c 02 00 00    	mov    %edx,0x22c(%eax)
 83fca3c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fca43:	e8 08 7a 32 00       	call   8724450 <_Znwj>
 83fca48:	89 c3                	mov    %eax,%ebx
 83fca4a:	89 d8                	mov    %ebx,%eax
 83fca4c:	89 04 24             	mov    %eax,(%esp)
 83fca4f:	e8 4a 19 05 00       	call   844e39e <_ZN19DB_SwapCreatureItemC1Ev>
 83fca54:	89 d8                	mov    %ebx,%eax
 83fca56:	89 c2                	mov    %eax,%edx
 83fca58:	8b 45 08             	mov    0x8(%ebp),%eax
 83fca5b:	89 90 34 02 00 00    	mov    %edx,0x234(%eax)
 83fca61:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fca68:	e8 e3 79 32 00       	call   8724450 <_Znwj>
 83fca6d:	89 c3                	mov    %eax,%ebx
 83fca6f:	89 d8                	mov    %ebx,%eax
 83fca71:	89 04 24             	mov    %eax,(%esp)
 83fca74:	e8 41 19 05 00       	call   844e3ba <_ZN22DB_GatheringParyStatusC1Ev>
 83fca79:	89 d8                	mov    %ebx,%eax
 83fca7b:	89 c2                	mov    %eax,%edx
 83fca7d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fca80:	89 90 3c 02 00 00    	mov    %edx,0x23c(%eax)
 83fca86:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fca8d:	e8 be 79 32 00       	call   8724450 <_Znwj>
 83fca92:	89 c3                	mov    %eax,%ebx
 83fca94:	89 d8                	mov    %ebx,%eax
 83fca96:	89 04 24             	mov    %eax,(%esp)
 83fca99:	e8 38 19 05 00       	call   844e3d6 <_ZN19DB_ForbidUserToPlayC1Ev>
 83fca9e:	89 d8                	mov    %ebx,%eax
 83fcaa0:	89 c2                	mov    %eax,%edx
 83fcaa2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcaa5:	89 90 50 02 00 00    	mov    %edx,0x250(%eax)
 83fcaab:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcab2:	e8 99 79 32 00       	call   8724450 <_Znwj>
 83fcab7:	89 c3                	mov    %eax,%ebx
 83fcab9:	89 d8                	mov    %ebx,%eax
 83fcabb:	89 04 24             	mov    %eax,(%esp)
 83fcabe:	e8 2f 19 05 00       	call   844e3f2 <_ZN12DB_LastMsgDbC1Ev>
 83fcac3:	89 d8                	mov    %ebx,%eax
 83fcac5:	89 c2                	mov    %eax,%edx
 83fcac7:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcaca:	89 90 58 02 00 00    	mov    %edx,0x258(%eax)
 83fcad0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcad7:	e8 74 79 32 00       	call   8724450 <_Znwj>
 83fcadc:	89 c3                	mov    %eax,%ebx
 83fcade:	89 d8                	mov    %ebx,%eax
 83fcae0:	89 04 24             	mov    %eax,(%esp)
 83fcae3:	e8 26 19 05 00       	call   844e40e <_ZN15DB_LastMsgLogDbC1Ev>
 83fcae8:	89 d8                	mov    %ebx,%eax
 83fcaea:	89 c2                	mov    %eax,%edx
 83fcaec:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcaef:	89 90 5c 02 00 00    	mov    %edx,0x25c(%eax)
 83fcaf5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcafc:	e8 4f 79 32 00       	call   8724450 <_Znwj>
 83fcb01:	89 c3                	mov    %eax,%ebx
 83fcb03:	89 d8                	mov    %ebx,%eax
 83fcb05:	89 04 24             	mov    %eax,(%esp)
 83fcb08:	e8 1d 19 05 00       	call   844e42a <_ZN20DB_SaveClientHackLogC1Ev>
 83fcb0d:	89 d8                	mov    %ebx,%eax
 83fcb0f:	89 c2                	mov    %eax,%edx
 83fcb11:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcb14:	89 90 6c 02 00 00    	mov    %edx,0x26c(%eax)
 83fcb1a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcb21:	e8 2a 79 32 00       	call   8724450 <_Znwj>
 83fcb26:	89 c3                	mov    %eax,%ebx
 83fcb28:	89 d8                	mov    %ebx,%eax
 83fcb2a:	89 04 24             	mov    %eax,(%esp)
 83fcb2d:	e8 14 19 05 00       	call   844e446 <_ZN21DB_InsertQueueSizeLogC1Ev>
 83fcb32:	89 d8                	mov    %ebx,%eax
 83fcb34:	89 c2                	mov    %eax,%edx
 83fcb36:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcb39:	89 90 70 02 00 00    	mov    %edx,0x270(%eax)
 83fcb3f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcb46:	e8 05 79 32 00       	call   8724450 <_Znwj>
 83fcb4b:	89 c3                	mov    %eax,%ebx
 83fcb4d:	89 d8                	mov    %ebx,%eax
 83fcb4f:	89 04 24             	mov    %eax,(%esp)
 83fcb52:	e8 0b 19 05 00       	call   844e462 <_ZN32DB_SaveSameMIDOtherCharLoginHackC1Ev>
 83fcb57:	89 d8                	mov    %ebx,%eax
 83fcb59:	89 c2                	mov    %eax,%edx
 83fcb5b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcb5e:	89 90 78 02 00 00    	mov    %edx,0x278(%eax)
 83fcb64:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcb6b:	e8 e0 78 32 00       	call   8724450 <_Znwj>
 83fcb70:	89 c3                	mov    %eax,%ebx
 83fcb72:	89 d8                	mov    %ebx,%eax
 83fcb74:	89 04 24             	mov    %eax,(%esp)
 83fcb77:	e8 02 19 05 00       	call   844e47e <_ZN15DB_SaveProxyLogC1Ev>
 83fcb7c:	89 d8                	mov    %ebx,%eax
 83fcb7e:	89 c2                	mov    %eax,%edx
 83fcb80:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcb83:	89 90 7c 02 00 00    	mov    %edx,0x27c(%eax)
 83fcb89:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcb90:	e8 bb 78 32 00       	call   8724450 <_Znwj>
 83fcb95:	89 c3                	mov    %eax,%ebx
 83fcb97:	89 d8                	mov    %ebx,%eax
 83fcb99:	89 04 24             	mov    %eax,(%esp)
 83fcb9c:	e8 f9 18 05 00       	call   844e49a <_ZN23DB_SaveGoldZeroTradeLogC1Ev>
 83fcba1:	89 d8                	mov    %ebx,%eax
 83fcba3:	89 c2                	mov    %eax,%edx
 83fcba5:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcba8:	89 90 88 02 00 00    	mov    %edx,0x288(%eax)
 83fcbae:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcbb5:	e8 96 78 32 00       	call   8724450 <_Znwj>
 83fcbba:	89 c3                	mov    %eax,%ebx
 83fcbbc:	89 d8                	mov    %ebx,%eax
 83fcbbe:	89 04 24             	mov    %eax,(%esp)
 83fcbc1:	e8 f0 18 05 00       	call   844e4b6 <_ZN16DB_MouseRegisterC1Ev>
 83fcbc6:	89 d8                	mov    %ebx,%eax
 83fcbc8:	89 c2                	mov    %eax,%edx
 83fcbca:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcbcd:	89 90 90 02 00 00    	mov    %edx,0x290(%eax)
 83fcbd3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcbda:	e8 71 78 32 00       	call   8724450 <_Znwj>
 83fcbdf:	89 c3                	mov    %eax,%ebx
 83fcbe1:	89 d8                	mov    %ebx,%eax
 83fcbe3:	89 04 24             	mov    %eax,(%esp)
 83fcbe6:	e8 e7 18 05 00       	call   844e4d2 <_ZN23DB_PassPadUpdateFailCntC1Ev>
 83fcbeb:	89 d8                	mov    %ebx,%eax
 83fcbed:	89 c2                	mov    %eax,%edx
 83fcbef:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcbf2:	89 90 94 02 00 00    	mov    %edx,0x294(%eax)
 83fcbf8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcbff:	e8 4c 78 32 00       	call   8724450 <_Znwj>
 83fcc04:	89 c3                	mov    %eax,%ebx
 83fcc06:	89 d8                	mov    %ebx,%eax
 83fcc08:	89 04 24             	mov    %eax,(%esp)
 83fcc0b:	e8 de 18 05 00       	call   844e4ee <_ZN25DB_PassPadUpdateCancelCntC1Ev>
 83fcc10:	89 d8                	mov    %ebx,%eax
 83fcc12:	89 c2                	mov    %eax,%edx
 83fcc14:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcc17:	89 90 98 02 00 00    	mov    %edx,0x298(%eax)
 83fcc1d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcc24:	e8 27 78 32 00       	call   8724450 <_Znwj>
 83fcc29:	89 c3                	mov    %eax,%ebx
 83fcc2b:	89 d8                	mov    %ebx,%eax
 83fcc2d:	89 04 24             	mov    %eax,(%esp)
 83fcc30:	e8 d5 18 05 00       	call   844e50a <_ZN34DB_UpdateDungeonDataStatisticLogdbC1Ev>
 83fcc35:	89 d8                	mov    %ebx,%eax
 83fcc37:	89 c2                	mov    %eax,%edx
 83fcc39:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcc3c:	89 90 c0 02 00 00    	mov    %edx,0x2c0(%eax)
 83fcc42:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcc49:	e8 02 78 32 00       	call   8724450 <_Znwj>
 83fcc4e:	89 c3                	mov    %eax,%ebx
 83fcc50:	89 d8                	mov    %ebx,%eax
 83fcc52:	89 04 24             	mov    %eax,(%esp)
 83fcc55:	e8 cc 18 05 00       	call   844e526 <_ZN16DB_BillingRecordC1Ev>
 83fcc5a:	89 d8                	mov    %ebx,%eax
 83fcc5c:	89 c2                	mov    %eax,%edx
 83fcc5e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcc61:	89 90 c4 02 00 00    	mov    %edx,0x2c4(%eax)
 83fcc67:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcc6e:	e8 dd 77 32 00       	call   8724450 <_Znwj>
 83fcc73:	89 c3                	mov    %eax,%ebx
 83fcc75:	89 d8                	mov    %ebx,%eax
 83fcc77:	89 04 24             	mov    %eax,(%esp)
 83fcc7a:	e8 c3 18 05 00       	call   844e542 <_ZN16DB_ReqBlackCountC1Ev>
 83fcc7f:	89 d8                	mov    %ebx,%eax
 83fcc81:	89 c2                	mov    %eax,%edx
 83fcc83:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcc86:	89 90 d0 02 00 00    	mov    %edx,0x2d0(%eax)
 83fcc8c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcc93:	e8 b8 77 32 00       	call   8724450 <_Znwj>
 83fcc98:	89 c3                	mov    %eax,%ebx
 83fcc9a:	89 d8                	mov    %ebx,%eax
 83fcc9c:	89 04 24             	mov    %eax,(%esp)
 83fcc9f:	e8 ba 18 05 00       	call   844e55e <_ZN27DB_ReqSaveCrazyLevelupEventC1Ev>
 83fcca4:	89 d8                	mov    %ebx,%eax
 83fcca6:	89 c2                	mov    %eax,%edx
 83fcca8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fccab:	89 90 d4 02 00 00    	mov    %edx,0x2d4(%eax)
 83fccb1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fccb8:	e8 93 77 32 00       	call   8724450 <_Znwj>
 83fccbd:	89 c3                	mov    %eax,%ebx
 83fccbf:	89 d8                	mov    %ebx,%eax
 83fccc1:	89 04 24             	mov    %eax,(%esp)
 83fccc4:	e8 b1 18 05 00       	call   844e57a <_ZN24DB_ReqSaveHackUserPunishC1Ev>
 83fccc9:	89 d8                	mov    %ebx,%eax
 83fcccb:	89 c2                	mov    %eax,%edx
 83fcccd:	8b 45 08             	mov    0x8(%ebp),%eax
 83fccd0:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 83fccd6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fccdd:	e8 6e 77 32 00       	call   8724450 <_Znwj>
 83fcce2:	89 c3                	mov    %eax,%ebx
 83fcce4:	89 d8                	mov    %ebx,%eax
 83fcce6:	89 04 24             	mov    %eax,(%esp)
 83fcce9:	e8 a8 18 05 00       	call   844e596 <_ZN21DB_InsertUserPlayTimeC1Ev>
 83fccee:	89 d8                	mov    %ebx,%eax
 83fccf0:	89 c2                	mov    %eax,%edx
 83fccf2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fccf5:	89 90 dc 02 00 00    	mov    %edx,0x2dc(%eax)
 83fccfb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcd02:	e8 49 77 32 00       	call   8724450 <_Znwj>
 83fcd07:	89 c3                	mov    %eax,%ebx
 83fcd09:	89 d8                	mov    %ebx,%eax
 83fcd0b:	89 04 24             	mov    %eax,(%esp)
 83fcd0e:	e8 9f 18 05 00       	call   844e5b2 <_ZN22DB_UpdateHappyBeanInfoC1Ev>
 83fcd13:	89 d8                	mov    %ebx,%eax
 83fcd15:	89 c2                	mov    %eax,%edx
 83fcd17:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcd1a:	89 90 f0 02 00 00    	mov    %edx,0x2f0(%eax)
 83fcd20:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcd27:	e8 24 77 32 00       	call   8724450 <_Znwj>
 83fcd2c:	89 c3                	mov    %eax,%ebx
 83fcd2e:	89 d8                	mov    %ebx,%eax
 83fcd30:	89 04 24             	mov    %eax,(%esp)
 83fcd33:	e8 96 18 05 00       	call   844e5ce <_ZN23DB_InsertQueryCounterDbC1Ev>
 83fcd38:	89 d8                	mov    %ebx,%eax
 83fcd3a:	89 c2                	mov    %eax,%edx
 83fcd3c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcd3f:	89 90 fc 02 00 00    	mov    %edx,0x2fc(%eax)
 83fcd45:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcd4c:	e8 ff 76 32 00       	call   8724450 <_Znwj>
 83fcd51:	89 c3                	mov    %eax,%ebx
 83fcd53:	89 d8                	mov    %ebx,%eax
 83fcd55:	89 04 24             	mov    %eax,(%esp)
 83fcd58:	e8 8d 18 05 00       	call   844e5ea <_ZN26DB_InsertQueryCounterLogdbC1Ev>
 83fcd5d:	89 d8                	mov    %ebx,%eax
 83fcd5f:	89 c2                	mov    %eax,%edx
 83fcd61:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcd64:	89 90 00 03 00 00    	mov    %edx,0x300(%eax)
 83fcd6a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcd71:	e8 da 76 32 00       	call   8724450 <_Znwj>
 83fcd76:	89 c3                	mov    %eax,%ebx
 83fcd78:	89 d8                	mov    %ebx,%eax
 83fcd7a:	89 04 24             	mov    %eax,(%esp)
 83fcd7d:	e8 84 18 05 00       	call   844e606 <_ZN20DB_ReqItemUpgradeLogC1Ev>
 83fcd82:	89 d8                	mov    %ebx,%eax
 83fcd84:	89 c2                	mov    %eax,%edx
 83fcd86:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcd89:	89 90 04 03 00 00    	mov    %edx,0x304(%eax)
 83fcd8f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcd96:	e8 b5 76 32 00       	call   8724450 <_Znwj>
 83fcd9b:	89 c3                	mov    %eax,%ebx
 83fcd9d:	89 d8                	mov    %ebx,%eax
 83fcd9f:	89 04 24             	mov    %eax,(%esp)
 83fcda2:	e8 7b 18 05 00       	call   844e622 <_ZN19DB_ChangeLetterStatC1Ev>
 83fcda7:	89 d8                	mov    %ebx,%eax
 83fcda9:	89 c2                	mov    %eax,%edx
 83fcdab:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcdae:	89 90 0c 03 00 00    	mov    %edx,0x30c(%eax)
 83fcdb4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcdbb:	e8 90 76 32 00       	call   8724450 <_Znwj>
 83fcdc0:	89 c3                	mov    %eax,%ebx
 83fcdc2:	89 d8                	mov    %ebx,%eax
 83fcdc4:	89 04 24             	mov    %eax,(%esp)
 83fcdc7:	e8 72 18 05 00       	call   844e63e <_ZN22DB_ReqChangeCharacNameC1Ev>
 83fcdcc:	89 d8                	mov    %ebx,%eax
 83fcdce:	89 c2                	mov    %eax,%edx
 83fcdd0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcdd3:	89 90 10 03 00 00    	mov    %edx,0x310(%eax)
 83fcdd9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcde0:	e8 6b 76 32 00       	call   8724450 <_Znwj>
 83fcde5:	89 c3                	mov    %eax,%ebx
 83fcde7:	89 d8                	mov    %ebx,%eax
 83fcde9:	89 04 24             	mov    %eax,(%esp)
 83fcdec:	e8 69 18 05 00       	call   844e65a <_ZN21DB_ReqQueryCharacInfoC1Ev>
 83fcdf1:	89 d8                	mov    %ebx,%eax
 83fcdf3:	89 c2                	mov    %eax,%edx
 83fcdf5:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcdf8:	89 90 14 03 00 00    	mov    %edx,0x314(%eax)
 83fcdfe:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fce05:	e8 46 76 32 00       	call   8724450 <_Znwj>
 83fce0a:	89 c3                	mov    %eax,%ebx
 83fce0c:	89 d8                	mov    %ebx,%eax
 83fce0e:	89 04 24             	mov    %eax,(%esp)
 83fce11:	e8 60 18 05 00       	call   844e676 <_ZN31DB_MailBoxSendNewMailWithDBWorkC1Ev>
 83fce16:	89 d8                	mov    %ebx,%eax
 83fce18:	89 c2                	mov    %eax,%edx
 83fce1a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fce1d:	89 90 18 03 00 00    	mov    %edx,0x318(%eax)
 83fce23:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fce2a:	e8 21 76 32 00       	call   8724450 <_Znwj>
 83fce2f:	89 c3                	mov    %eax,%ebx
 83fce31:	89 d8                	mov    %ebx,%eax
 83fce33:	89 04 24             	mov    %eax,(%esp)
 83fce36:	e8 57 18 05 00       	call   844e692 <_ZN31DB_ReportMannerlessUser_UpgradeC1Ev>
 83fce3b:	89 d8                	mov    %ebx,%eax
 83fce3d:	89 c2                	mov    %eax,%edx
 83fce3f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fce42:	89 90 2c 03 00 00    	mov    %edx,0x32c(%eax)
 83fce48:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fce4f:	e8 fc 75 32 00       	call   8724450 <_Znwj>
 83fce54:	89 c3                	mov    %eax,%ebx
 83fce56:	89 d8                	mov    %ebx,%eax
 83fce58:	89 04 24             	mov    %eax,(%esp)
 83fce5b:	e8 4e 18 05 00       	call   844e6ae <_ZN23DB_ReportMannerlessUserC1Ev>
 83fce60:	89 d8                	mov    %ebx,%eax
 83fce62:	89 c2                	mov    %eax,%edx
 83fce64:	8b 45 08             	mov    0x8(%ebp),%eax
 83fce67:	89 90 30 03 00 00    	mov    %edx,0x330(%eax)
 83fce6d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fce74:	e8 d7 75 32 00       	call   8724450 <_Znwj>
 83fce79:	89 c3                	mov    %eax,%ebx
 83fce7b:	89 d8                	mov    %ebx,%eax
 83fce7d:	89 04 24             	mov    %eax,(%esp)
 83fce80:	e8 45 18 05 00       	call   844e6ca <_ZN27DB_UpdateClientCrashDownLogC1Ev>
 83fce85:	89 d8                	mov    %ebx,%eax
 83fce87:	89 c2                	mov    %eax,%edx
 83fce89:	8b 45 08             	mov    0x8(%ebp),%eax
 83fce8c:	89 90 34 03 00 00    	mov    %edx,0x334(%eax)
 83fce92:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fce99:	e8 b2 75 32 00       	call   8724450 <_Znwj>
 83fce9e:	89 c3                	mov    %eax,%ebx
 83fcea0:	89 d8                	mov    %ebx,%eax
 83fcea2:	89 04 24             	mov    %eax,(%esp)
 83fcea5:	e8 3c 18 05 00       	call   844e6e6 <_ZN21DB_TimerStatisticsLogC1Ev>
 83fceaa:	89 d8                	mov    %ebx,%eax
 83fceac:	89 c2                	mov    %eax,%edx
 83fceae:	8b 45 08             	mov    0x8(%ebp),%eax
 83fceb1:	89 90 38 03 00 00    	mov    %edx,0x338(%eax)
 83fceb7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcebe:	e8 8d 75 32 00       	call   8724450 <_Znwj>
 83fcec3:	89 c3                	mov    %eax,%ebx
 83fcec5:	89 d8                	mov    %ebx,%eax
 83fcec7:	89 04 24             	mov    %eax,(%esp)
 83fceca:	e8 33 18 05 00       	call   844e702 <_ZN19DB_SaveUserHandicapC1Ev>
 83fcecf:	89 d8                	mov    %ebx,%eax
 83fced1:	89 c2                	mov    %eax,%edx
 83fced3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fced6:	89 90 3c 03 00 00    	mov    %edx,0x33c(%eax)
 83fcedc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcee3:	e8 68 75 32 00       	call   8724450 <_Znwj>
 83fcee8:	89 c3                	mov    %eax,%ebx
 83fceea:	89 d8                	mov    %ebx,%eax
 83fceec:	89 04 24             	mov    %eax,(%esp)
 83fceef:	e8 2a 18 05 00       	call   844e71e <_ZN21DB_ForceSaveSimpleSSOC1Ev>
 83fcef4:	89 d8                	mov    %ebx,%eax
 83fcef6:	89 c2                	mov    %eax,%edx
 83fcef8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcefb:	89 90 40 03 00 00    	mov    %edx,0x340(%eax)
 83fcf01:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcf08:	e8 43 75 32 00       	call   8724450 <_Znwj>
 83fcf0d:	89 c3                	mov    %eax,%ebx
 83fcf0f:	89 d8                	mov    %ebx,%eax
 83fcf11:	89 04 24             	mov    %eax,(%esp)
 83fcf14:	e8 21 18 05 00       	call   844e73a <_ZN22DB_CountOfHumanCertifyC1Ev>
 83fcf19:	89 d8                	mov    %ebx,%eax
 83fcf1b:	89 c2                	mov    %eax,%edx
 83fcf1d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcf20:	89 90 48 04 00 00    	mov    %edx,0x448(%eax)
 83fcf26:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcf2d:	e8 1e 75 32 00       	call   8724450 <_Znwj>
 83fcf32:	89 c3                	mov    %eax,%ebx
 83fcf34:	89 d8                	mov    %ebx,%eax
 83fcf36:	89 04 24             	mov    %eax,(%esp)
 83fcf39:	e8 18 18 05 00       	call   844e756 <_ZN18DB_UpdateGiftCountC1Ev>
 83fcf3e:	89 d8                	mov    %ebx,%eax
 83fcf40:	89 c2                	mov    %eax,%edx
 83fcf42:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcf45:	89 90 48 03 00 00    	mov    %edx,0x348(%eax)
 83fcf4b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcf52:	e8 f9 74 32 00       	call   8724450 <_Znwj>
 83fcf57:	89 c3                	mov    %eax,%ebx
 83fcf59:	89 d8                	mov    %ebx,%eax
 83fcf5b:	89 04 24             	mov    %eax,(%esp)
 83fcf5e:	e8 0f 18 05 00       	call   844e772 <_ZN25DB_UpdateMemberDoubtTradeC1Ev>
 83fcf63:	89 d8                	mov    %ebx,%eax
 83fcf65:	89 c2                	mov    %eax,%edx
 83fcf67:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcf6a:	89 90 44 03 00 00    	mov    %edx,0x344(%eax)
 83fcf70:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcf77:	e8 d4 74 32 00       	call   8724450 <_Znwj>
 83fcf7c:	89 c3                	mov    %eax,%ebx
 83fcf7e:	89 d8                	mov    %ebx,%eax
 83fcf80:	89 04 24             	mov    %eax,(%esp)
 83fcf83:	e8 06 18 05 00       	call   844e78e <_ZN27DB_UpdateItemDropStatisticsC1Ev>
 83fcf88:	89 d8                	mov    %ebx,%eax
 83fcf8a:	89 c2                	mov    %eax,%edx
 83fcf8c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcf8f:	89 90 4c 03 00 00    	mov    %edx,0x34c(%eax)
 83fcf95:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcf9c:	e8 af 74 32 00       	call   8724450 <_Znwj>
 83fcfa1:	89 c3                	mov    %eax,%ebx
 83fcfa3:	89 d8                	mov    %ebx,%eax
 83fcfa5:	89 04 24             	mov    %eax,(%esp)
 83fcfa8:	e8 fd 17 05 00       	call   844e7aa <_ZN17DB_UpdatePvPGradeC1Ev>
 83fcfad:	89 d8                	mov    %ebx,%eax
 83fcfaf:	89 c2                	mov    %eax,%edx
 83fcfb1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcfb4:	89 90 54 03 00 00    	mov    %edx,0x354(%eax)
 83fcfba:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcfc1:	e8 8a 74 32 00       	call   8724450 <_Znwj>
 83fcfc6:	89 c3                	mov    %eax,%ebx
 83fcfc8:	89 d8                	mov    %ebx,%eax
 83fcfca:	89 04 24             	mov    %eax,(%esp)
 83fcfcd:	e8 f4 17 05 00       	call   844e7c6 <_ZN23DB_InsertValueStatisticC1Ev>
 83fcfd2:	89 d8                	mov    %ebx,%eax
 83fcfd4:	89 c2                	mov    %eax,%edx
 83fcfd6:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcfd9:	89 90 58 03 00 00    	mov    %edx,0x358(%eax)
 83fcfdf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fcfe6:	e8 65 74 32 00       	call   8724450 <_Znwj>
 83fcfeb:	89 c3                	mov    %eax,%ebx
 83fcfed:	89 d8                	mov    %ebx,%eax
 83fcfef:	89 04 24             	mov    %eax,(%esp)
 83fcff2:	e8 eb 17 05 00       	call   844e7e2 <_ZN24DB_InsertDungeonEntranceC1Ev>
 83fcff7:	89 d8                	mov    %ebx,%eax
 83fcff9:	89 c2                	mov    %eax,%edx
 83fcffb:	8b 45 08             	mov    0x8(%ebp),%eax
 83fcffe:	89 90 84 03 00 00    	mov    %edx,0x384(%eax)
 83fd004:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd00b:	e8 40 74 32 00       	call   8724450 <_Znwj>
 83fd010:	89 c3                	mov    %eax,%ebx
 83fd012:	89 d8                	mov    %ebx,%eax
 83fd014:	89 04 24             	mov    %eax,(%esp)
 83fd017:	e8 e2 17 05 00       	call   844e7fe <_ZN29DB_InsertDungeonEntrance_hourC1Ev>
 83fd01c:	89 d8                	mov    %ebx,%eax
 83fd01e:	89 c2                	mov    %eax,%edx
 83fd020:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd023:	89 90 88 03 00 00    	mov    %edx,0x388(%eax)
 83fd029:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd030:	e8 1b 74 32 00       	call   8724450 <_Znwj>
 83fd035:	89 c3                	mov    %eax,%ebx
 83fd037:	89 d8                	mov    %ebx,%eax
 83fd039:	89 04 24             	mov    %eax,(%esp)
 83fd03c:	e8 d9 17 05 00       	call   844e81a <_ZN26DB_GetDeathTowerBestRecordC1Ev>
 83fd041:	89 d8                	mov    %ebx,%eax
 83fd043:	89 c2                	mov    %eax,%edx
 83fd045:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd048:	89 90 8c 03 00 00    	mov    %edx,0x38c(%eax)
 83fd04e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd055:	e8 f6 73 32 00       	call   8724450 <_Znwj>
 83fd05a:	89 c3                	mov    %eax,%ebx
 83fd05c:	89 d8                	mov    %ebx,%eax
 83fd05e:	89 04 24             	mov    %eax,(%esp)
 83fd061:	e8 d0 17 05 00       	call   844e836 <_ZN29DB_UpdateDeathTowerBestRecordC1Ev>
 83fd066:	89 d8                	mov    %ebx,%eax
 83fd068:	89 c2                	mov    %eax,%edx
 83fd06a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd06d:	89 90 90 03 00 00    	mov    %edx,0x390(%eax)
 83fd073:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd07a:	e8 d1 73 32 00       	call   8724450 <_Znwj>
 83fd07f:	89 c3                	mov    %eax,%ebx
 83fd081:	89 d8                	mov    %ebx,%eax
 83fd083:	89 04 24             	mov    %eax,(%esp)
 83fd086:	e8 c7 17 05 00       	call   844e852 <_ZN26DB_DeathTowerLoadTopRankerC1Ev>
 83fd08b:	89 d8                	mov    %ebx,%eax
 83fd08d:	89 c2                	mov    %eax,%edx
 83fd08f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd092:	89 90 94 03 00 00    	mov    %edx,0x394(%eax)
 83fd098:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd09f:	e8 ac 73 32 00       	call   8724450 <_Znwj>
 83fd0a4:	89 c3                	mov    %eax,%ebx
 83fd0a6:	89 d8                	mov    %ebx,%eax
 83fd0a8:	89 04 24             	mov    %eax,(%esp)
 83fd0ab:	e8 be 17 05 00       	call   844e86e <_ZN23DB_CheckDoubleGuildNameC1Ev>
 83fd0b0:	89 d8                	mov    %ebx,%eax
 83fd0b2:	89 c2                	mov    %eax,%edx
 83fd0b4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd0b7:	89 90 b0 03 00 00    	mov    %edx,0x3b0(%eax)
 83fd0bd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd0c4:	e8 87 73 32 00       	call   8724450 <_Znwj>
 83fd0c9:	89 c3                	mov    %eax,%ebx
 83fd0cb:	89 d8                	mov    %ebx,%eax
 83fd0cd:	89 04 24             	mov    %eax,(%esp)
 83fd0d0:	e8 b5 17 05 00       	call   844e88a <_ZN26DB_CheckDoubleGuildAddressC1Ev>
 83fd0d5:	89 d8                	mov    %ebx,%eax
 83fd0d7:	89 c2                	mov    %eax,%edx
 83fd0d9:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd0dc:	89 90 b4 03 00 00    	mov    %edx,0x3b4(%eax)
 83fd0e2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd0e9:	e8 62 73 32 00       	call   8724450 <_Znwj>
 83fd0ee:	89 c3                	mov    %eax,%ebx
 83fd0f0:	89 d8                	mov    %ebx,%eax
 83fd0f2:	89 04 24             	mov    %eax,(%esp)
 83fd0f5:	e8 ac 17 05 00       	call   844e8a6 <_ZN23DB_ArrangeUserLoginInfoC1Ev>
 83fd0fa:	89 d8                	mov    %ebx,%eax
 83fd0fc:	89 c2                	mov    %eax,%edx
 83fd0fe:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd101:	89 90 bc 03 00 00    	mov    %edx,0x3bc(%eax)
 83fd107:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd10e:	e8 3d 73 32 00       	call   8724450 <_Znwj>
 83fd113:	89 c3                	mov    %eax,%ebx
 83fd115:	89 d8                	mov    %ebx,%eax
 83fd117:	89 04 24             	mov    %eax,(%esp)
 83fd11a:	e8 a3 17 05 00       	call   844e8c2 <_ZN20DB_SecurityCardIssueC1Ev>
 83fd11f:	89 d8                	mov    %ebx,%eax
 83fd121:	89 c2                	mov    %eax,%edx
 83fd123:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd126:	89 90 f8 03 00 00    	mov    %edx,0x3f8(%eax)
 83fd12c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd133:	e8 18 73 32 00       	call   8724450 <_Znwj>
 83fd138:	89 c3                	mov    %eax,%ebx
 83fd13a:	89 d8                	mov    %ebx,%eax
 83fd13c:	89 04 24             	mov    %eax,(%esp)
 83fd13f:	e8 9a 17 05 00       	call   844e8de <_ZN21DB_SecurityCardDisuseC1Ev>
 83fd144:	89 d8                	mov    %ebx,%eax
 83fd146:	89 c2                	mov    %eax,%edx
 83fd148:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd14b:	89 90 fc 03 00 00    	mov    %edx,0x3fc(%eax)
 83fd151:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd158:	e8 f3 72 32 00       	call   8724450 <_Znwj>
 83fd15d:	89 c3                	mov    %eax,%ebx
 83fd15f:	89 d8                	mov    %ebx,%eax
 83fd161:	89 04 24             	mov    %eax,(%esp)
 83fd164:	e8 91 17 05 00       	call   844e8fa <_ZN23DB_SecurityCardActivateC1Ev>
 83fd169:	89 d8                	mov    %ebx,%eax
 83fd16b:	89 c2                	mov    %eax,%edx
 83fd16d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd170:	89 90 00 04 00 00    	mov    %edx,0x400(%eax)
 83fd176:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd17d:	e8 ce 72 32 00       	call   8724450 <_Znwj>
 83fd182:	89 c3                	mov    %eax,%ebx
 83fd184:	89 d8                	mov    %ebx,%eax
 83fd186:	89 04 24             	mov    %eax,(%esp)
 83fd189:	e8 88 17 05 00       	call   844e916 <_ZN33DB_SecurityCardUpdateValidityTimeC1Ev>
 83fd18e:	89 d8                	mov    %ebx,%eax
 83fd190:	89 c2                	mov    %eax,%edx
 83fd192:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd195:	89 90 04 04 00 00    	mov    %edx,0x404(%eax)
 83fd19b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd1a2:	e8 a9 72 32 00       	call   8724450 <_Znwj>
 83fd1a7:	89 c3                	mov    %eax,%ebx
 83fd1a9:	89 d8                	mov    %ebx,%eax
 83fd1ab:	89 04 24             	mov    %eax,(%esp)
 83fd1ae:	e8 7f 17 05 00       	call   844e932 <_ZN28DB_SecurityCardUpdateFailCntC1Ev>
 83fd1b3:	89 d8                	mov    %ebx,%eax
 83fd1b5:	89 c2                	mov    %eax,%edx
 83fd1b7:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd1ba:	89 90 08 04 00 00    	mov    %edx,0x408(%eax)
 83fd1c0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd1c7:	e8 84 72 32 00       	call   8724450 <_Znwj>
 83fd1cc:	89 c3                	mov    %eax,%ebx
 83fd1ce:	89 d8                	mov    %ebx,%eax
 83fd1d0:	89 04 24             	mov    %eax,(%esp)
 83fd1d3:	e8 76 17 05 00       	call   844e94e <_ZN30DB_SecurityCardUpdateCancelCntC1Ev>
 83fd1d8:	89 d8                	mov    %ebx,%eax
 83fd1da:	89 c2                	mov    %eax,%edx
 83fd1dc:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd1df:	89 90 0c 04 00 00    	mov    %edx,0x40c(%eax)
 83fd1e5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd1ec:	e8 5f 72 32 00       	call   8724450 <_Znwj>
 83fd1f1:	89 c3                	mov    %eax,%ebx
 83fd1f3:	89 d8                	mov    %ebx,%eax
 83fd1f5:	89 04 24             	mov    %eax,(%esp)
 83fd1f8:	e8 6d 17 05 00       	call   844e96a <_ZN25DB_SecurityCardRetransferC1Ev>
 83fd1fd:	89 d8                	mov    %ebx,%eax
 83fd1ff:	89 c2                	mov    %eax,%edx
 83fd201:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd204:	89 90 e4 04 00 00    	mov    %edx,0x4e4(%eax)
 83fd20a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd211:	e8 3a 72 32 00       	call   8724450 <_Znwj>
 83fd216:	89 c3                	mov    %eax,%ebx
 83fd218:	89 d8                	mov    %ebx,%eax
 83fd21a:	89 04 24             	mov    %eax,(%esp)
 83fd21d:	e8 64 17 05 00       	call   844e986 <_ZN18DB_InsertPartyTypeC1Ev>
 83fd222:	89 d8                	mov    %ebx,%eax
 83fd224:	89 c2                	mov    %eax,%edx
 83fd226:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd229:	89 90 10 04 00 00    	mov    %edx,0x410(%eax)
 83fd22f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd236:	e8 15 72 32 00       	call   8724450 <_Znwj>
 83fd23b:	89 c3                	mov    %eax,%ebx
 83fd23d:	89 d8                	mov    %ebx,%eax
 83fd23f:	89 04 24             	mov    %eax,(%esp)
 83fd242:	e8 5b 17 05 00       	call   844e9a2 <_ZN22DB_InsertPVPPlayerRateC1Ev>
 83fd247:	89 d8                	mov    %ebx,%eax
 83fd249:	89 c2                	mov    %eax,%edx
 83fd24b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd24e:	89 90 14 04 00 00    	mov    %edx,0x414(%eax)
 83fd254:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd25b:	e8 f0 71 32 00       	call   8724450 <_Znwj>
 83fd260:	89 c3                	mov    %eax,%ebx
 83fd262:	89 d8                	mov    %ebx,%eax
 83fd264:	89 04 24             	mov    %eax,(%esp)
 83fd267:	e8 52 17 05 00       	call   844e9be <_ZN15DB_InsertPVPMapC1Ev>
 83fd26c:	89 d8                	mov    %ebx,%eax
 83fd26e:	89 c2                	mov    %eax,%edx
 83fd270:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd273:	89 90 18 04 00 00    	mov    %edx,0x418(%eax)
 83fd279:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd280:	e8 cb 71 32 00       	call   8724450 <_Znwj>
 83fd285:	89 c3                	mov    %eax,%ebx
 83fd287:	89 d8                	mov    %ebx,%eax
 83fd289:	89 04 24             	mov    %eax,(%esp)
 83fd28c:	e8 49 17 05 00       	call   844e9da <_ZN17DB_LoadDnfHackLogC1Ev>
 83fd291:	89 d8                	mov    %ebx,%eax
 83fd293:	89 c2                	mov    %eax,%edx
 83fd295:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd298:	89 90 1c 04 00 00    	mov    %edx,0x41c(%eax)
 83fd29e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd2a5:	e8 a6 71 32 00       	call   8724450 <_Znwj>
 83fd2aa:	89 c3                	mov    %eax,%ebx
 83fd2ac:	89 d8                	mov    %ebx,%eax
 83fd2ae:	89 04 24             	mov    %eax,(%esp)
 83fd2b1:	e8 40 17 05 00       	call   844e9f6 <_ZN25DB_InsertLevelDungeonPlayC1Ev>
 83fd2b6:	89 d8                	mov    %ebx,%eax
 83fd2b8:	89 c2                	mov    %eax,%edx
 83fd2ba:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd2bd:	89 90 20 04 00 00    	mov    %edx,0x420(%eax)
 83fd2c3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd2ca:	e8 81 71 32 00       	call   8724450 <_Znwj>
 83fd2cf:	89 c3                	mov    %eax,%ebx
 83fd2d1:	89 d8                	mov    %ebx,%eax
 83fd2d3:	89 04 24             	mov    %eax,(%esp)
 83fd2d6:	e8 37 17 05 00       	call   844ea12 <_ZN29DB_ReloadAutoPunishRuleBackIPC1Ev>
 83fd2db:	89 d8                	mov    %ebx,%eax
 83fd2dd:	89 c2                	mov    %eax,%edx
 83fd2df:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd2e2:	89 90 24 04 00 00    	mov    %edx,0x424(%eax)
 83fd2e8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd2ef:	e8 5c 71 32 00       	call   8724450 <_Znwj>
 83fd2f4:	89 c3                	mov    %eax,%ebx
 83fd2f6:	89 d8                	mov    %ebx,%eax
 83fd2f8:	89 04 24             	mov    %eax,(%esp)
 83fd2fb:	e8 2e 17 05 00       	call   844ea2e <_ZN31DB_ReloadAutoPunishRuleHackTypeC1Ev>
 83fd300:	89 d8                	mov    %ebx,%eax
 83fd302:	89 c2                	mov    %eax,%edx
 83fd304:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd307:	89 90 28 04 00 00    	mov    %edx,0x428(%eax)
 83fd30d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd314:	e8 37 71 32 00       	call   8724450 <_Znwj>
 83fd319:	89 c3                	mov    %eax,%ebx
 83fd31b:	89 d8                	mov    %ebx,%eax
 83fd31d:	89 04 24             	mov    %eax,(%esp)
 83fd320:	e8 25 17 05 00       	call   844ea4a <_ZN28DB_InsertAutoPunishFirstUserC1Ev>
 83fd325:	89 d8                	mov    %ebx,%eax
 83fd327:	89 c2                	mov    %eax,%edx
 83fd329:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd32c:	89 90 2c 04 00 00    	mov    %edx,0x42c(%eax)
 83fd332:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd339:	e8 12 71 32 00       	call   8724450 <_Znwj>
 83fd33e:	89 c3                	mov    %eax,%ebx
 83fd340:	89 d8                	mov    %ebx,%eax
 83fd342:	89 04 24             	mov    %eax,(%esp)
 83fd345:	e8 1c 17 05 00       	call   844ea66 <_ZN29DB_InsertAutoPunishSecondUserC1Ev>
 83fd34a:	89 d8                	mov    %ebx,%eax
 83fd34c:	89 c2                	mov    %eax,%edx
 83fd34e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd351:	89 90 30 04 00 00    	mov    %edx,0x430(%eax)
 83fd357:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd35e:	e8 ed 70 32 00       	call   8724450 <_Znwj>
 83fd363:	89 c3                	mov    %eax,%ebx
 83fd365:	89 d8                	mov    %ebx,%eax
 83fd367:	89 04 24             	mov    %eax,(%esp)
 83fd36a:	e8 13 17 05 00       	call   844ea82 <_ZN17DB_BlackIPMonitorC1Ev>
 83fd36f:	89 d8                	mov    %ebx,%eax
 83fd371:	89 c2                	mov    %eax,%edx
 83fd373:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd376:	89 90 4c 05 00 00    	mov    %edx,0x54c(%eax)
 83fd37c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd383:	e8 c8 70 32 00       	call   8724450 <_Znwj>
 83fd388:	89 c3                	mov    %eax,%ebx
 83fd38a:	89 d8                	mov    %ebx,%eax
 83fd38c:	89 04 24             	mov    %eax,(%esp)
 83fd38f:	e8 0a 17 05 00       	call   844ea9e <_ZN20DB_SaveCleanpadPointC1Ev>
 83fd394:	89 d8                	mov    %ebx,%eax
 83fd396:	89 c2                	mov    %eax,%edx
 83fd398:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd39b:	89 90 54 05 00 00    	mov    %edx,0x554(%eax)
 83fd3a1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd3a8:	e8 a3 70 32 00       	call   8724450 <_Znwj>
 83fd3ad:	89 c3                	mov    %eax,%ebx
 83fd3af:	89 d8                	mov    %ebx,%eax
 83fd3b1:	89 04 24             	mov    %eax,(%esp)
 83fd3b4:	e8 01 17 05 00       	call   844eaba <_ZN25DB_BlackIPMonitorPartLoadC1Ev>
 83fd3b9:	89 d8                	mov    %ebx,%eax
 83fd3bb:	89 c2                	mov    %eax,%edx
 83fd3bd:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd3c0:	89 90 58 05 00 00    	mov    %edx,0x558(%eax)
 83fd3c6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd3cd:	e8 7e 70 32 00       	call   8724450 <_Znwj>
 83fd3d2:	89 c3                	mov    %eax,%ebx
 83fd3d4:	89 d8                	mov    %ebx,%eax
 83fd3d6:	89 04 24             	mov    %eax,(%esp)
 83fd3d9:	e8 f8 16 05 00       	call   844ead6 <_ZN30DB_Insert0712WinterEventCouponC1Ev>
 83fd3de:	89 d8                	mov    %ebx,%eax
 83fd3e0:	89 c2                	mov    %eax,%edx
 83fd3e2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd3e5:	89 90 4c 04 00 00    	mov    %edx,0x44c(%eax)
 83fd3eb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd3f2:	e8 59 70 32 00       	call   8724450 <_Znwj>
 83fd3f7:	89 c3                	mov    %eax,%ebx
 83fd3f9:	89 d8                	mov    %ebx,%eax
 83fd3fb:	89 04 24             	mov    %eax,(%esp)
 83fd3fe:	e8 d3 16 05 00       	call   844ead6 <_ZN30DB_Insert0712WinterEventCouponC1Ev>
 83fd403:	89 d8                	mov    %ebx,%eax
 83fd405:	89 c2                	mov    %eax,%edx
 83fd407:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd40a:	89 90 50 04 00 00    	mov    %edx,0x450(%eax)
 83fd410:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd417:	e8 34 70 32 00       	call   8724450 <_Znwj>
 83fd41c:	89 c3                	mov    %eax,%ebx
 83fd41e:	89 d8                	mov    %ebx,%eax
 83fd420:	89 04 24             	mov    %eax,(%esp)
 83fd423:	e8 ca 16 05 00       	call   844eaf2 <_ZN25DB_InsertArchieveEventLogC1Ev>
 83fd428:	89 d8                	mov    %ebx,%eax
 83fd42a:	89 c2                	mov    %eax,%edx
 83fd42c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd42f:	89 90 60 04 00 00    	mov    %edx,0x460(%eax)
 83fd435:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd43c:	e8 0f 70 32 00       	call   8724450 <_Znwj>
 83fd441:	89 c3                	mov    %eax,%ebx
 83fd443:	89 d8                	mov    %ebx,%eax
 83fd445:	89 04 24             	mov    %eax,(%esp)
 83fd448:	e8 c1 16 05 00       	call   844eb0e <_ZN19DB_InsertDungeonExpC1Ev>
 83fd44d:	89 d8                	mov    %ebx,%eax
 83fd44f:	89 c2                	mov    %eax,%edx
 83fd451:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd454:	89 90 5c 04 00 00    	mov    %edx,0x45c(%eax)
 83fd45a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd461:	e8 ea 6f 32 00       	call   8724450 <_Znwj>
 83fd466:	89 c3                	mov    %eax,%ebx
 83fd468:	89 d8                	mov    %ebx,%eax
 83fd46a:	89 04 24             	mov    %eax,(%esp)
 83fd46d:	e8 b8 16 05 00       	call   844eb2a <_ZN17DB_WriteGeoRejectC1Ev>
 83fd472:	89 d8                	mov    %ebx,%eax
 83fd474:	89 c2                	mov    %eax,%edx
 83fd476:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd479:	89 90 70 04 00 00    	mov    %edx,0x470(%eax)
 83fd47f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd486:	e8 c5 6f 32 00       	call   8724450 <_Znwj>
 83fd48b:	89 c3                	mov    %eax,%ebx
 83fd48d:	89 d8                	mov    %ebx,%eax
 83fd48f:	89 04 24             	mov    %eax,(%esp)
 83fd492:	e8 af 16 05 00       	call   844eb46 <_ZN26DB_InsertUnlimitSupportLogC1Ev>
 83fd497:	89 d8                	mov    %ebx,%eax
 83fd499:	89 c2                	mov    %eax,%edx
 83fd49b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd49e:	89 90 8c 04 00 00    	mov    %edx,0x48c(%eax)
 83fd4a4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd4ab:	e8 a0 6f 32 00       	call   8724450 <_Znwj>
 83fd4b0:	89 c3                	mov    %eax,%ebx
 83fd4b2:	89 d8                	mov    %ebx,%eax
 83fd4b4:	89 04 24             	mov    %eax,(%esp)
 83fd4b7:	e8 a6 16 05 00       	call   844eb62 <_ZN20DB_LoadCleanPadPointC1Ev>
 83fd4bc:	89 d8                	mov    %ebx,%eax
 83fd4be:	89 c2                	mov    %eax,%edx
 83fd4c0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd4c3:	89 90 a0 04 00 00    	mov    %edx,0x4a0(%eax)
 83fd4c9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd4d0:	e8 7b 6f 32 00       	call   8724450 <_Znwj>
 83fd4d5:	89 c3                	mov    %eax,%ebx
 83fd4d7:	89 d8                	mov    %ebx,%eax
 83fd4d9:	89 04 24             	mov    %eax,(%esp)
 83fd4dc:	e8 9d 16 05 00       	call   844eb7e <_ZN20DB_UpdateSchoolPointC1Ev>
 83fd4e1:	89 d8                	mov    %ebx,%eax
 83fd4e3:	89 c2                	mov    %eax,%edx
 83fd4e5:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd4e8:	89 90 a8 04 00 00    	mov    %edx,0x4a8(%eax)
 83fd4ee:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd4f5:	e8 56 6f 32 00       	call   8724450 <_Znwj>
 83fd4fa:	89 c3                	mov    %eax,%ebx
 83fd4fc:	89 d8                	mov    %ebx,%eax
 83fd4fe:	89 04 24             	mov    %eax,(%esp)
 83fd501:	e8 94 16 05 00       	call   844eb9a <_ZN18DB_SaveAccountInfoC1Ev>
 83fd506:	89 d8                	mov    %ebx,%eax
 83fd508:	89 c2                	mov    %eax,%edx
 83fd50a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd50d:	89 90 44 05 00 00    	mov    %edx,0x544(%eax)
 83fd513:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd51a:	e8 31 6f 32 00       	call   8724450 <_Znwj>
 83fd51f:	89 c3                	mov    %eax,%ebx
 83fd521:	89 d8                	mov    %ebx,%eax
 83fd523:	89 04 24             	mov    %eax,(%esp)
 83fd526:	e8 8b 16 05 00       	call   844ebb6 <_ZN24DB_GoblinPadUpdateRewardC1Ev>
 83fd52b:	89 d8                	mov    %ebx,%eax
 83fd52d:	89 c2                	mov    %eax,%edx
 83fd52f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd532:	89 90 b0 04 00 00    	mov    %edx,0x4b0(%eax)
 83fd538:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd53f:	e8 0c 6f 32 00       	call   8724450 <_Znwj>
 83fd544:	89 c3                	mov    %eax,%ebx
 83fd546:	89 d8                	mov    %ebx,%eax
 83fd548:	89 04 24             	mov    %eax,(%esp)
 83fd54b:	e8 82 16 05 00       	call   844ebd2 <_ZN30DB_GoblinPadUpdateValidityTimeC1Ev>
 83fd550:	89 d8                	mov    %ebx,%eax
 83fd552:	89 c2                	mov    %eax,%edx
 83fd554:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd557:	89 90 b4 04 00 00    	mov    %edx,0x4b4(%eax)
 83fd55d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd564:	e8 e7 6e 32 00       	call   8724450 <_Znwj>
 83fd569:	89 c3                	mov    %eax,%ebx
 83fd56b:	89 d8                	mov    %ebx,%eax
 83fd56d:	89 04 24             	mov    %eax,(%esp)
 83fd570:	e8 79 16 05 00       	call   844ebee <_ZN17DB_LoadGameOptionC1Ev>
 83fd575:	89 d8                	mov    %ebx,%eax
 83fd577:	89 c2                	mov    %eax,%edx
 83fd579:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd57c:	89 90 bc 04 00 00    	mov    %edx,0x4bc(%eax)
 83fd582:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd589:	e8 c2 6e 32 00       	call   8724450 <_Znwj>
 83fd58e:	89 c3                	mov    %eax,%ebx
 83fd590:	89 d8                	mov    %ebx,%eax
 83fd592:	89 04 24             	mov    %eax,(%esp)
 83fd595:	e8 70 16 05 00       	call   844ec0a <_ZN19DB_SaveGameOption_1C1Ev>
 83fd59a:	89 d8                	mov    %ebx,%eax
 83fd59c:	89 c2                	mov    %eax,%edx
 83fd59e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd5a1:	89 90 c4 04 00 00    	mov    %edx,0x4c4(%eax)
 83fd5a7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd5ae:	e8 9d 6e 32 00       	call   8724450 <_Znwj>
 83fd5b3:	89 c3                	mov    %eax,%ebx
 83fd5b5:	89 d8                	mov    %ebx,%eax
 83fd5b7:	89 04 24             	mov    %eax,(%esp)
 83fd5ba:	e8 67 16 05 00       	call   844ec26 <_ZN19DB_SaveGameOption_2C1Ev>
 83fd5bf:	89 d8                	mov    %ebx,%eax
 83fd5c1:	89 c2                	mov    %eax,%edx
 83fd5c3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd5c6:	89 90 c8 04 00 00    	mov    %edx,0x4c8(%eax)
 83fd5cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd5d3:	e8 78 6e 32 00       	call   8724450 <_Znwj>
 83fd5d8:	89 c3                	mov    %eax,%ebx
 83fd5da:	89 d8                	mov    %ebx,%eax
 83fd5dc:	89 04 24             	mov    %eax,(%esp)
 83fd5df:	e8 5e 16 05 00       	call   844ec42 <_ZN22DB_SaveCharacterOptionC1Ev>
 83fd5e4:	89 d8                	mov    %ebx,%eax
 83fd5e6:	89 c2                	mov    %eax,%edx
 83fd5e8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd5eb:	89 90 d8 0a 00 00    	mov    %edx,0xad8(%eax)
 83fd5f1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd5f8:	e8 53 6e 32 00       	call   8724450 <_Znwj>
 83fd5fd:	89 c3                	mov    %eax,%ebx
 83fd5ff:	89 d8                	mov    %ebx,%eax
 83fd601:	89 04 24             	mov    %eax,(%esp)
 83fd604:	e8 55 16 05 00       	call   844ec5e <_ZN21DB_UpdateCoolTimeItemC1Ev>
 83fd609:	89 d8                	mov    %ebx,%eax
 83fd60b:	89 c2                	mov    %eax,%edx
 83fd60d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd610:	89 90 cc 04 00 00    	mov    %edx,0x4cc(%eax)
 83fd616:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd61d:	e8 2e 6e 32 00       	call   8724450 <_Znwj>
 83fd622:	89 c3                	mov    %eax,%ebx
 83fd624:	89 d8                	mov    %ebx,%eax
 83fd626:	89 04 24             	mov    %eax,(%esp)
 83fd629:	e8 4c 16 05 00       	call   844ec7a <_ZN19DB_UpdateEffectItemC1Ev>
 83fd62e:	89 d8                	mov    %ebx,%eax
 83fd630:	89 c2                	mov    %eax,%edx
 83fd632:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd635:	89 90 e0 04 00 00    	mov    %edx,0x4e0(%eax)
 83fd63b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd642:	e8 09 6e 32 00       	call   8724450 <_Znwj>
 83fd647:	89 c3                	mov    %eax,%ebx
 83fd649:	89 d8                	mov    %ebx,%eax
 83fd64b:	89 04 24             	mov    %eax,(%esp)
 83fd64e:	e8 43 16 05 00       	call   844ec96 <_ZN24DB_UpdateAvatarJewelSlotC1Ev>
 83fd653:	89 d8                	mov    %ebx,%eax
 83fd655:	89 c2                	mov    %eax,%edx
 83fd657:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd65a:	89 90 e8 04 00 00    	mov    %edx,0x4e8(%eax)
 83fd660:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd667:	e8 e4 6d 32 00       	call   8724450 <_Znwj>
 83fd66c:	89 c3                	mov    %eax,%ebx
 83fd66e:	89 d8                	mov    %ebx,%eax
 83fd670:	89 04 24             	mov    %eax,(%esp)
 83fd673:	e8 3a 16 05 00       	call   844ecb2 <_ZN18DB_UpdatePvPResultC1Ev>
 83fd678:	89 d8                	mov    %ebx,%eax
 83fd67a:	89 c2                	mov    %eax,%edx
 83fd67c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd67f:	89 90 d8 04 00 00    	mov    %edx,0x4d8(%eax)
 83fd685:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd68c:	e8 bf 6d 32 00       	call   8724450 <_Znwj>
 83fd691:	89 c3                	mov    %eax,%ebx
 83fd693:	89 d8                	mov    %ebx,%eax
 83fd695:	89 04 24             	mov    %eax,(%esp)
 83fd698:	e8 31 16 05 00       	call   844ecce <_ZN24DB_UpdatePvPLastPlayTimeC1Ev>
 83fd69d:	89 d8                	mov    %ebx,%eax
 83fd69f:	89 c2                	mov    %eax,%edx
 83fd6a1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd6a4:	89 90 dc 04 00 00    	mov    %edx,0x4dc(%eax)
 83fd6aa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd6b1:	e8 9a 6d 32 00       	call   8724450 <_Znwj>
 83fd6b6:	89 c3                	mov    %eax,%ebx
 83fd6b8:	89 d8                	mov    %ebx,%eax
 83fd6ba:	89 04 24             	mov    %eax,(%esp)
 83fd6bd:	e8 28 16 05 00       	call   844ecea <_ZN22DB_LoadBloodBestRecordC1Ev>
 83fd6c2:	89 d8                	mov    %ebx,%eax
 83fd6c4:	89 c2                	mov    %eax,%edx
 83fd6c6:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd6c9:	89 90 00 05 00 00    	mov    %edx,0x500(%eax)
 83fd6cf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd6d6:	e8 75 6d 32 00       	call   8724450 <_Znwj>
 83fd6db:	89 c3                	mov    %eax,%ebx
 83fd6dd:	89 d8                	mov    %ebx,%eax
 83fd6df:	89 04 24             	mov    %eax,(%esp)
 83fd6e2:	e8 1f 16 05 00       	call   844ed06 <_ZN24DB_UpdateBloodBestRecordC1Ev>
 83fd6e7:	89 d8                	mov    %ebx,%eax
 83fd6e9:	89 c2                	mov    %eax,%edx
 83fd6eb:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd6ee:	89 90 04 05 00 00    	mov    %edx,0x504(%eax)
 83fd6f4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd6fb:	e8 50 6d 32 00       	call   8724450 <_Znwj>
 83fd700:	89 c3                	mov    %eax,%ebx
 83fd702:	89 d8                	mov    %ebx,%eax
 83fd704:	89 04 24             	mov    %eax,(%esp)
 83fd707:	e8 16 16 05 00       	call   844ed22 <_ZN27DB_LoadBreakAwayPreventDataC1Ev>
 83fd70c:	89 d8                	mov    %ebx,%eax
 83fd70e:	89 c2                	mov    %eax,%edx
 83fd710:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd713:	89 90 08 05 00 00    	mov    %edx,0x508(%eax)
 83fd719:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd720:	e8 2b 6d 32 00       	call   8724450 <_Znwj>
 83fd725:	89 c3                	mov    %eax,%ebx
 83fd727:	89 d8                	mov    %ebx,%eax
 83fd729:	89 04 24             	mov    %eax,(%esp)
 83fd72c:	e8 0d 16 05 00       	call   844ed3e <_ZN26DB_LoadBreakAwayRewardDataC1Ev>
 83fd731:	89 d8                	mov    %ebx,%eax
 83fd733:	89 c2                	mov    %eax,%edx
 83fd735:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd738:	89 90 0c 05 00 00    	mov    %edx,0x50c(%eax)
 83fd73e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd745:	e8 06 6d 32 00       	call   8724450 <_Znwj>
 83fd74a:	89 c3                	mov    %eax,%ebx
 83fd74c:	89 d8                	mov    %ebx,%eax
 83fd74e:	89 04 24             	mov    %eax,(%esp)
 83fd751:	e8 04 16 05 00       	call   844ed5a <_ZN29DB_UpdateBreakAwayAccruedCeraC1Ev>
 83fd756:	89 d8                	mov    %ebx,%eax
 83fd758:	89 c2                	mov    %eax,%edx
 83fd75a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd75d:	89 90 1c 05 00 00    	mov    %edx,0x51c(%eax)
 83fd763:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd76a:	e8 e1 6c 32 00       	call   8724450 <_Znwj>
 83fd76f:	89 c3                	mov    %eax,%ebx
 83fd771:	89 d8                	mov    %ebx,%eax
 83fd773:	89 04 24             	mov    %eax,(%esp)
 83fd776:	e8 fb 15 05 00       	call   844ed76 <_ZN24DB_UpdateBreakAwayUvListC1Ev>
 83fd77b:	89 d8                	mov    %ebx,%eax
 83fd77d:	89 c2                	mov    %eax,%edx
 83fd77f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd782:	89 90 20 05 00 00    	mov    %edx,0x520(%eax)
 83fd788:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd78f:	e8 bc 6c 32 00       	call   8724450 <_Znwj>
 83fd794:	89 c3                	mov    %eax,%ebx
 83fd796:	89 d8                	mov    %ebx,%eax
 83fd798:	89 04 24             	mov    %eax,(%esp)
 83fd79b:	e8 f2 15 05 00       	call   844ed92 <_ZN27DB_UpdateBreakAwayRuckPointC1Ev>
 83fd7a0:	89 d8                	mov    %ebx,%eax
 83fd7a2:	89 c2                	mov    %eax,%edx
 83fd7a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd7a7:	89 90 28 05 00 00    	mov    %edx,0x528(%eax)
 83fd7ad:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd7b4:	e8 97 6c 32 00       	call   8724450 <_Znwj>
 83fd7b9:	89 c3                	mov    %eax,%ebx
 83fd7bb:	89 d8                	mov    %ebx,%eax
 83fd7bd:	89 04 24             	mov    %eax,(%esp)
 83fd7c0:	e8 e9 15 05 00       	call   844edae <_ZN30DB_UpdateBreakAwayClearAddInfoC1Ev>
 83fd7c5:	89 d8                	mov    %ebx,%eax
 83fd7c7:	89 c2                	mov    %eax,%edx
 83fd7c9:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd7cc:	89 90 14 05 00 00    	mov    %edx,0x514(%eax)
 83fd7d2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd7d9:	e8 72 6c 32 00       	call   8724450 <_Znwj>
 83fd7de:	89 c3                	mov    %eax,%ebx
 83fd7e0:	89 d8                	mov    %ebx,%eax
 83fd7e2:	89 04 24             	mov    %eax,(%esp)
 83fd7e5:	e8 e0 15 05 00       	call   844edca <_ZN33DB_UpdateBreakAwayDungeonClearCntC1Ev>
 83fd7ea:	89 d8                	mov    %ebx,%eax
 83fd7ec:	89 c2                	mov    %eax,%edx
 83fd7ee:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd7f1:	89 90 18 05 00 00    	mov    %edx,0x518(%eax)
 83fd7f7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd7fe:	e8 4d 6c 32 00       	call   8724450 <_Znwj>
 83fd803:	89 c3                	mov    %eax,%ebx
 83fd805:	89 d8                	mov    %ebx,%eax
 83fd807:	89 04 24             	mov    %eax,(%esp)
 83fd80a:	e8 d7 15 05 00       	call   844ede6 <_ZN15DB_UpdateGMDataC1Ev>
 83fd80f:	89 d8                	mov    %ebx,%eax
 83fd811:	89 c2                	mov    %eax,%edx
 83fd813:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd816:	89 90 2c 05 00 00    	mov    %edx,0x52c(%eax)
 83fd81c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd823:	e8 28 6c 32 00       	call   8724450 <_Znwj>
 83fd828:	89 c3                	mov    %eax,%ebx
 83fd82a:	89 d8                	mov    %ebx,%eax
 83fd82c:	89 04 24             	mov    %eax,(%esp)
 83fd82f:	e8 ce 15 05 00       	call   844ee02 <_ZN16DB_LoadDimensionC1Ev>
 83fd834:	89 d8                	mov    %ebx,%eax
 83fd836:	89 c2                	mov    %eax,%edx
 83fd838:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd83b:	89 90 3c 05 00 00    	mov    %edx,0x53c(%eax)
 83fd841:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd848:	e8 03 6c 32 00       	call   8724450 <_Znwj>
 83fd84d:	89 c3                	mov    %eax,%ebx
 83fd84f:	89 d8                	mov    %ebx,%eax
 83fd851:	89 04 24             	mov    %eax,(%esp)
 83fd854:	e8 c5 15 05 00       	call   844ee1e <_ZN18DB_UpdateDimensionC1Ev>
 83fd859:	89 d8                	mov    %ebx,%eax
 83fd85b:	89 c2                	mov    %eax,%edx
 83fd85d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd860:	89 90 40 05 00 00    	mov    %edx,0x540(%eax)
 83fd866:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd86d:	e8 de 6b 32 00       	call   8724450 <_Znwj>
 83fd872:	89 c3                	mov    %eax,%ebx
 83fd874:	89 d8                	mov    %ebx,%eax
 83fd876:	89 04 24             	mov    %eax,(%esp)
 83fd879:	e8 bc 15 05 00       	call   844ee3a <_ZN29DB_InsertCirculationStatisticC1Ev>
 83fd87e:	89 d8                	mov    %ebx,%eax
 83fd880:	89 c2                	mov    %eax,%edx
 83fd882:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd885:	89 90 48 05 00 00    	mov    %edx,0x548(%eax)
 83fd88b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd892:	e8 b9 6b 32 00       	call   8724450 <_Znwj>
 83fd897:	89 c3                	mov    %eax,%ebx
 83fd899:	89 d8                	mov    %ebx,%eax
 83fd89b:	89 04 24             	mov    %eax,(%esp)
 83fd89e:	e8 b3 15 05 00       	call   844ee56 <_ZN34DB_LoadAutoMarketConditionsControlC1Ev>
 83fd8a3:	89 d8                	mov    %ebx,%eax
 83fd8a5:	89 c2                	mov    %eax,%edx
 83fd8a7:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd8aa:	89 90 6c 05 00 00    	mov    %edx,0x56c(%eax)
 83fd8b0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd8b7:	e8 94 6b 32 00       	call   8724450 <_Znwj>
 83fd8bc:	89 c3                	mov    %eax,%ebx
 83fd8be:	89 d8                	mov    %ebx,%eax
 83fd8c0:	89 04 24             	mov    %eax,(%esp)
 83fd8c3:	e8 aa 15 05 00       	call   844ee72 <_ZN36DB_UpdateAutoMarketConditionsControlC1Ev>
 83fd8c8:	89 d8                	mov    %ebx,%eax
 83fd8ca:	89 c2                	mov    %eax,%edx
 83fd8cc:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd8cf:	89 90 70 05 00 00    	mov    %edx,0x570(%eax)
 83fd8d5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd8dc:	e8 6f 6b 32 00       	call   8724450 <_Znwj>
 83fd8e1:	89 c3                	mov    %eax,%ebx
 83fd8e3:	89 d8                	mov    %ebx,%eax
 83fd8e5:	89 04 24             	mov    %eax,(%esp)
 83fd8e8:	e8 a1 15 05 00       	call   844ee8e <_ZN25DB_UpdateOneDayLetheSkillC1Ev>
 83fd8ed:	89 d8                	mov    %ebx,%eax
 83fd8ef:	89 c2                	mov    %eax,%edx
 83fd8f1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd8f4:	89 90 74 05 00 00    	mov    %edx,0x574(%eax)
 83fd8fa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd901:	e8 4a 6b 32 00       	call   8724450 <_Znwj>
 83fd906:	89 c3                	mov    %eax,%ebx
 83fd908:	89 d8                	mov    %ebx,%eax
 83fd90a:	89 04 24             	mov    %eax,(%esp)
 83fd90d:	e8 98 15 05 00       	call   844eeaa <_ZN32DB_UpdateVendingMachineStatisticC1Ev>
 83fd912:	89 d8                	mov    %ebx,%eax
 83fd914:	89 c2                	mov    %eax,%edx
 83fd916:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd919:	89 90 90 05 00 00    	mov    %edx,0x590(%eax)
 83fd91f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd926:	e8 25 6b 32 00       	call   8724450 <_Znwj>
 83fd92b:	89 c3                	mov    %eax,%ebx
 83fd92d:	89 d8                	mov    %ebx,%eax
 83fd92f:	89 04 24             	mov    %eax,(%esp)
 83fd932:	e8 8f 15 05 00       	call   844eec6 <_ZN27DB_LoadPowerWarStatueRankerC1Ev>
 83fd937:	89 d8                	mov    %ebx,%eax
 83fd939:	89 c2                	mov    %eax,%edx
 83fd93b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd93e:	89 90 98 05 00 00    	mov    %edx,0x598(%eax)
 83fd944:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd94b:	e8 00 6b 32 00       	call   8724450 <_Znwj>
 83fd950:	89 c3                	mov    %eax,%ebx
 83fd952:	89 d8                	mov    %ebx,%eax
 83fd954:	89 04 24             	mov    %eax,(%esp)
 83fd957:	e8 86 15 05 00       	call   844eee2 <_ZN25DB_LoadPowerWarStatueInfoC1Ev>
 83fd95c:	89 d8                	mov    %ebx,%eax
 83fd95e:	89 c2                	mov    %eax,%edx
 83fd960:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd963:	89 90 9c 05 00 00    	mov    %edx,0x59c(%eax)
 83fd969:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd970:	e8 db 6a 32 00       	call   8724450 <_Znwj>
 83fd975:	89 c3                	mov    %eax,%ebx
 83fd977:	89 d8                	mov    %ebx,%eax
 83fd979:	89 04 24             	mov    %eax,(%esp)
 83fd97c:	e8 7d 15 05 00       	call   844eefe <_ZN34DB_BlackipPrivateSecurityValuationC1Ev>
 83fd981:	89 d8                	mov    %ebx,%eax
 83fd983:	89 c2                	mov    %eax,%edx
 83fd985:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd988:	89 90 94 05 00 00    	mov    %edx,0x594(%eax)
 83fd98e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd995:	e8 b6 6a 32 00       	call   8724450 <_Znwj>
 83fd99a:	89 c3                	mov    %eax,%ebx
 83fd99c:	89 d8                	mov    %ebx,%eax
 83fd99e:	89 04 24             	mov    %eax,(%esp)
 83fd9a1:	e8 74 15 05 00       	call   844ef1a <_ZN22DB_UpdateServerMessageC1Ev>
 83fd9a6:	89 d8                	mov    %ebx,%eax
 83fd9a8:	89 c2                	mov    %eax,%edx
 83fd9aa:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd9ad:	89 90 b4 05 00 00    	mov    %edx,0x5b4(%eax)
 83fd9b3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd9ba:	e8 91 6a 32 00       	call   8724450 <_Znwj>
 83fd9bf:	89 c3                	mov    %eax,%ebx
 83fd9c1:	89 d8                	mov    %ebx,%eax
 83fd9c3:	89 04 24             	mov    %eax,(%esp)
 83fd9c6:	e8 6b 15 05 00       	call   844ef36 <_ZN20DB_LoadServerMessageC1Ev>
 83fd9cb:	89 d8                	mov    %ebx,%eax
 83fd9cd:	89 c2                	mov    %eax,%edx
 83fd9cf:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd9d2:	89 90 b8 05 00 00    	mov    %edx,0x5b8(%eax)
 83fd9d8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fd9df:	e8 6c 6a 32 00       	call   8724450 <_Znwj>
 83fd9e4:	89 c3                	mov    %eax,%ebx
 83fd9e6:	89 d8                	mov    %ebx,%eax
 83fd9e8:	89 04 24             	mov    %eax,(%esp)
 83fd9eb:	e8 62 15 05 00       	call   844ef52 <_ZN21DB_UpdateCharacterDayC1Ev>
 83fd9f0:	89 d8                	mov    %ebx,%eax
 83fd9f2:	89 c2                	mov    %eax,%edx
 83fd9f4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fd9f7:	89 90 bc 05 00 00    	mov    %edx,0x5bc(%eax)
 83fd9fd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fda04:	e8 47 6a 32 00       	call   8724450 <_Znwj>
 83fda09:	89 c3                	mov    %eax,%ebx
 83fda0b:	89 d8                	mov    %ebx,%eax
 83fda0d:	89 04 24             	mov    %eax,(%esp)
 83fda10:	e8 59 15 05 00       	call   844ef6e <_ZN24DB_UpdateNPCRelationshipC1Ev>
 83fda15:	89 d8                	mov    %ebx,%eax
 83fda17:	89 c2                	mov    %eax,%edx
 83fda19:	8b 45 08             	mov    0x8(%ebp),%eax
 83fda1c:	89 90 c0 05 00 00    	mov    %edx,0x5c0(%eax)
 83fda22:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fda29:	e8 22 6a 32 00       	call   8724450 <_Znwj>
 83fda2e:	89 c3                	mov    %eax,%ebx
 83fda30:	89 d8                	mov    %ebx,%eax
 83fda32:	89 04 24             	mov    %eax,(%esp)
 83fda35:	e8 50 15 05 00       	call   844ef8a <_ZN25DB_SecurityCardAddCertCntC1Ev>
 83fda3a:	89 d8                	mov    %ebx,%eax
 83fda3c:	89 c2                	mov    %eax,%edx
 83fda3e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fda41:	89 90 f4 05 00 00    	mov    %edx,0x5f4(%eax)
 83fda47:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fda4e:	e8 fd 69 32 00       	call   8724450 <_Znwj>
 83fda53:	89 c3                	mov    %eax,%ebx
 83fda55:	89 d8                	mov    %ebx,%eax
 83fda57:	89 04 24             	mov    %eax,(%esp)
 83fda5a:	e8 47 15 05 00       	call   844efa6 <_ZN16DB_LoadExpertJobC1Ev>
 83fda5f:	89 d8                	mov    %ebx,%eax
 83fda61:	89 c2                	mov    %eax,%edx
 83fda63:	8b 45 08             	mov    0x8(%ebp),%eax
 83fda66:	89 90 04 06 00 00    	mov    %edx,0x604(%eax)
 83fda6c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fda73:	e8 d8 69 32 00       	call   8724450 <_Znwj>
 83fda78:	89 c3                	mov    %eax,%ebx
 83fda7a:	89 d8                	mov    %ebx,%eax
 83fda7c:	89 04 24             	mov    %eax,(%esp)
 83fda7f:	e8 3e 15 05 00       	call   844efc2 <_ZN16DB_SaveExpertJobC1Ev>
 83fda84:	89 d8                	mov    %ebx,%eax
 83fda86:	89 c2                	mov    %eax,%edx
 83fda88:	8b 45 08             	mov    0x8(%ebp),%eax
 83fda8b:	89 90 08 06 00 00    	mov    %edx,0x608(%eax)
 83fda91:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fda98:	e8 b3 69 32 00       	call   8724450 <_Znwj>
 83fda9d:	89 c3                	mov    %eax,%ebx
 83fda9f:	89 d8                	mov    %ebx,%eax
 83fdaa1:	89 04 24             	mov    %eax,(%esp)
 83fdaa4:	e8 35 15 05 00       	call   844efde <_ZN27DB_UpdateExpertJobStatisticC1Ev>
 83fdaa9:	89 d8                	mov    %ebx,%eax
 83fdaab:	89 c2                	mov    %eax,%edx
 83fdaad:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdab0:	89 90 0c 06 00 00    	mov    %edx,0x60c(%eax)
 83fdab6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdabd:	e8 8e 69 32 00       	call   8724450 <_Znwj>
 83fdac2:	89 c3                	mov    %eax,%ebx
 83fdac4:	89 d8                	mov    %ebx,%eax
 83fdac6:	89 04 24             	mov    %eax,(%esp)
 83fdac9:	e8 2c 15 05 00       	call   844effa <_ZN28DB_InsertServerLoadStatisticC1Ev>
 83fdace:	89 d8                	mov    %ebx,%eax
 83fdad0:	89 c2                	mov    %eax,%edx
 83fdad2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdad5:	89 90 10 06 00 00    	mov    %edx,0x610(%eax)
 83fdadb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdae2:	e8 69 69 32 00       	call   8724450 <_Znwj>
 83fdae7:	89 c3                	mov    %eax,%ebx
 83fdae9:	89 d8                	mov    %ebx,%eax
 83fdaeb:	89 04 24             	mov    %eax,(%esp)
 83fdaee:	e8 23 15 05 00       	call   844f016 <_ZN17DB_FindFactoryHubC1Ev>
 83fdaf3:	89 d8                	mov    %ebx,%eax
 83fdaf5:	89 c2                	mov    %eax,%edx
 83fdaf7:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdafa:	89 90 2c 06 00 00    	mov    %edx,0x62c(%eax)
 83fdb00:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdb07:	e8 44 69 32 00       	call   8724450 <_Znwj>
 83fdb0c:	89 c3                	mov    %eax,%ebx
 83fdb0e:	89 d8                	mov    %ebx,%eax
 83fdb10:	89 04 24             	mov    %eax,(%esp)
 83fdb13:	e8 1a 15 05 00       	call   844f032 <_ZN13DB_HackIPSaveC1Ev>
 83fdb18:	89 d8                	mov    %ebx,%eax
 83fdb1a:	89 c2                	mov    %eax,%edx
 83fdb1c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdb1f:	89 90 44 06 00 00    	mov    %edx,0x644(%eax)
 83fdb25:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdb2c:	e8 1f 69 32 00       	call   8724450 <_Znwj>
 83fdb31:	89 c3                	mov    %eax,%ebx
 83fdb33:	89 d8                	mov    %ebx,%eax
 83fdb35:	89 04 24             	mov    %eax,(%esp)
 83fdb38:	e8 11 15 05 00       	call   844f04e <_ZN28DB_CancelRestingUserRestrictC1Ev>
 83fdb3d:	89 d8                	mov    %ebx,%eax
 83fdb3f:	89 c2                	mov    %eax,%edx
 83fdb41:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdb44:	89 90 58 06 00 00    	mov    %edx,0x658(%eax)
 83fdb4a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdb51:	e8 fa 68 32 00       	call   8724450 <_Znwj>
 83fdb56:	89 c3                	mov    %eax,%ebx
 83fdb58:	89 d8                	mov    %ebx,%eax
 83fdb5a:	89 04 24             	mov    %eax,(%esp)
 83fdb5d:	e8 08 15 05 00       	call   844f06a <_ZN19DB_SaveBloodDungeonC1Ev>
 83fdb62:	89 d8                	mov    %ebx,%eax
 83fdb64:	89 c2                	mov    %eax,%edx
 83fdb66:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdb69:	89 90 60 06 00 00    	mov    %edx,0x660(%eax)
 83fdb6f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdb76:	e8 d5 68 32 00       	call   8724450 <_Znwj>
 83fdb7b:	89 c3                	mov    %eax,%ebx
 83fdb7d:	89 d8                	mov    %ebx,%eax
 83fdb7f:	89 04 24             	mov    %eax,(%esp)
 83fdb82:	e8 ff 14 05 00       	call   844f086 <_ZN19DB_LoadPowerWarInfoC1Ev>
 83fdb87:	89 d8                	mov    %ebx,%eax
 83fdb89:	89 c2                	mov    %eax,%edx
 83fdb8b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdb8e:	89 90 70 06 00 00    	mov    %edx,0x670(%eax)
 83fdb94:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdb9b:	e8 b0 68 32 00       	call   8724450 <_Znwj>
 83fdba0:	89 c3                	mov    %eax,%ebx
 83fdba2:	89 d8                	mov    %ebx,%eax
 83fdba4:	89 04 24             	mov    %eax,(%esp)
 83fdba7:	e8 f6 14 05 00       	call   844f0a2 <_ZN20DB_SecuServiceRewardC1Ev>
 83fdbac:	89 d8                	mov    %ebx,%eax
 83fdbae:	89 c2                	mov    %eax,%edx
 83fdbb0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdbb3:	89 90 78 06 00 00    	mov    %edx,0x678(%eax)
 83fdbb9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdbc0:	e8 8b 68 32 00       	call   8724450 <_Znwj>
 83fdbc5:	89 c3                	mov    %eax,%ebx
 83fdbc7:	89 d8                	mov    %ebx,%eax
 83fdbc9:	89 04 24             	mov    %eax,(%esp)
 83fdbcc:	e8 ed 14 05 00       	call   844f0be <_ZN24DB_Find_Factory_Hub_UserC1Ev>
 83fdbd1:	89 d8                	mov    %ebx,%eax
 83fdbd3:	89 c2                	mov    %eax,%edx
 83fdbd5:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdbd8:	89 90 84 06 00 00    	mov    %edx,0x684(%eax)
 83fdbde:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdbe5:	e8 66 68 32 00       	call   8724450 <_Znwj>
 83fdbea:	89 c3                	mov    %eax,%ebx
 83fdbec:	89 d8                	mov    %ebx,%eax
 83fdbee:	89 04 24             	mov    %eax,(%esp)
 83fdbf1:	e8 e4 14 05 00       	call   844f0da <_ZN25DB_SaveConditionEventInfoC1Ev>
 83fdbf6:	89 d8                	mov    %ebx,%eax
 83fdbf8:	89 c2                	mov    %eax,%edx
 83fdbfa:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdbfd:	89 90 80 06 00 00    	mov    %edx,0x680(%eax)
 83fdc03:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdc0a:	e8 41 68 32 00       	call   8724450 <_Znwj>
 83fdc0f:	89 c3                	mov    %eax,%ebx
 83fdc11:	89 d8                	mov    %ebx,%eax
 83fdc13:	89 04 24             	mov    %eax,(%esp)
 83fdc16:	e8 db 14 05 00       	call   844f0f6 <_ZN30DB_DeletePowerWarStatueMessageC1Ev>
 83fdc1b:	89 d8                	mov    %ebx,%eax
 83fdc1d:	89 c2                	mov    %eax,%edx
 83fdc1f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdc22:	89 90 98 06 00 00    	mov    %edx,0x698(%eax)
 83fdc28:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdc2f:	e8 1c 68 32 00       	call   8724450 <_Znwj>
 83fdc34:	89 c3                	mov    %eax,%ebx
 83fdc36:	89 d8                	mov    %ebx,%eax
 83fdc38:	89 04 24             	mov    %eax,(%esp)
 83fdc3b:	e8 d2 14 05 00       	call   844f112 <_ZN18DB_LoadNoCacheDataC1Ev>
 83fdc40:	89 d8                	mov    %ebx,%eax
 83fdc42:	89 c2                	mov    %eax,%edx
 83fdc44:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdc47:	89 90 a0 06 00 00    	mov    %edx,0x6a0(%eax)
 83fdc4d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdc54:	e8 f7 67 32 00       	call   8724450 <_Znwj>
 83fdc59:	89 c3                	mov    %eax,%ebx
 83fdc5b:	89 d8                	mov    %ebx,%eax
 83fdc5d:	89 04 24             	mov    %eax,(%esp)
 83fdc60:	e8 c9 14 05 00       	call   844f12e <_ZN17DB_UpdateItemLockC1Ev>
 83fdc65:	89 d8                	mov    %ebx,%eax
 83fdc67:	89 c2                	mov    %eax,%edx
 83fdc69:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdc6c:	89 90 e4 06 00 00    	mov    %edx,0x6e4(%eax)
 83fdc72:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdc79:	e8 d2 67 32 00       	call   8724450 <_Znwj>
 83fdc7e:	89 c3                	mov    %eax,%ebx
 83fdc80:	89 d8                	mov    %ebx,%eax
 83fdc82:	89 04 24             	mov    %eax,(%esp)
 83fdc85:	e8 c0 14 05 00       	call   844f14a <_ZN25DB_UpdateCreatureItemLockC1Ev>
 83fdc8a:	89 d8                	mov    %ebx,%eax
 83fdc8c:	89 c2                	mov    %eax,%edx
 83fdc8e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdc91:	89 90 08 07 00 00    	mov    %edx,0x708(%eax)
 83fdc97:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdc9e:	e8 ad 67 32 00       	call   8724450 <_Znwj>
 83fdca3:	89 c3                	mov    %eax,%ebx
 83fdca5:	89 d8                	mov    %ebx,%eax
 83fdca7:	89 04 24             	mov    %eax,(%esp)
 83fdcaa:	e8 b7 14 05 00       	call   844f166 <_ZN23DB_UpdateAvatarItemLockC1Ev>
 83fdcaf:	89 d8                	mov    %ebx,%eax
 83fdcb1:	89 c2                	mov    %eax,%edx
 83fdcb3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdcb6:	89 90 0c 07 00 00    	mov    %edx,0x70c(%eax)
 83fdcbc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdcc3:	e8 88 67 32 00       	call   8724450 <_Znwj>
 83fdcc8:	89 c3                	mov    %eax,%ebx
 83fdcca:	89 d8                	mov    %ebx,%eax
 83fdccc:	89 04 24             	mov    %eax,(%esp)
 83fdccf:	e8 ae 14 05 00       	call   844f182 <_ZN29DB_UpdateMemberPlayInfoPcRoomC1Ev>
 83fdcd4:	89 d8                	mov    %ebx,%eax
 83fdcd6:	89 c2                	mov    %eax,%edx
 83fdcd8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdcdb:	89 90 10 07 00 00    	mov    %edx,0x710(%eax)
 83fdce1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdce8:	e8 63 67 32 00       	call   8724450 <_Znwj>
 83fdced:	89 c3                	mov    %eax,%ebx
 83fdcef:	89 d8                	mov    %ebx,%eax
 83fdcf1:	89 04 24             	mov    %eax,(%esp)
 83fdcf4:	e8 a5 14 05 00       	call   844f19e <_ZN30DB_UpdateCompoundEmblemStaticsC1Ev>
 83fdcf9:	89 d8                	mov    %ebx,%eax
 83fdcfb:	89 c2                	mov    %eax,%edx
 83fdcfd:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdd00:	89 90 14 07 00 00    	mov    %edx,0x714(%eax)
 83fdd06:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdd0d:	e8 3e 67 32 00       	call   8724450 <_Znwj>
 83fdd12:	89 c3                	mov    %eax,%ebx
 83fdd14:	89 d8                	mov    %ebx,%eax
 83fdd16:	89 04 24             	mov    %eax,(%esp)
 83fdd19:	e8 9c 14 05 00       	call   844f1ba <_ZN29DB_AccountHack_CheckMyAccountC1Ev>
 83fdd1e:	89 d8                	mov    %ebx,%eax
 83fdd20:	89 c2                	mov    %eax,%edx
 83fdd22:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdd25:	89 90 30 06 00 00    	mov    %edx,0x630(%eax)
 83fdd2b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdd32:	e8 19 67 32 00       	call   8724450 <_Znwj>
 83fdd37:	89 c3                	mov    %eax,%ebx
 83fdd39:	89 d8                	mov    %ebx,%eax
 83fdd3b:	89 04 24             	mov    %eax,(%esp)
 83fdd3e:	e8 93 14 05 00       	call   844f1d6 <_ZN32DB_SecuServiceUpdateValidityTimeC1Ev>
 83fdd43:	89 d8                	mov    %ebx,%eax
 83fdd45:	89 c2                	mov    %eax,%edx
 83fdd47:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdd4a:	89 90 28 07 00 00    	mov    %edx,0x728(%eax)
 83fdd50:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdd57:	e8 f4 66 32 00       	call   8724450 <_Znwj>
 83fdd5c:	89 c3                	mov    %eax,%ebx
 83fdd5e:	89 d8                	mov    %ebx,%eax
 83fdd60:	89 04 24             	mov    %eax,(%esp)
 83fdd63:	e8 8a 14 05 00       	call   844f1f2 <_ZN29DB_AutoPunishedSecondUserDataC1Ev>
 83fdd68:	89 d8                	mov    %ebx,%eax
 83fdd6a:	89 c2                	mov    %eax,%edx
 83fdd6c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdd6f:	89 90 2c 07 00 00    	mov    %edx,0x72c(%eax)
 83fdd75:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdd7c:	e8 cf 66 32 00       	call   8724450 <_Znwj>
 83fdd81:	89 c3                	mov    %eax,%ebx
 83fdd83:	89 d8                	mov    %ebx,%eax
 83fdd85:	89 04 24             	mov    %eax,(%esp)
 83fdd88:	e8 81 14 05 00       	call   844f20e <_ZN30DB_SaveProperDungeonClearCountC1Ev>
 83fdd8d:	89 d8                	mov    %ebx,%eax
 83fdd8f:	89 c2                	mov    %eax,%edx
 83fdd91:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdd94:	89 90 54 07 00 00    	mov    %edx,0x754(%eax)
 83fdd9a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdda1:	e8 aa 66 32 00       	call   8724450 <_Znwj>
 83fdda6:	89 c3                	mov    %eax,%ebx
 83fdda8:	89 d8                	mov    %ebx,%eax
 83fddaa:	89 04 24             	mov    %eax,(%esp)
 83fddad:	e8 78 14 05 00       	call   844f22a <_ZN15DB_LoadPvPBuddyC1Ev>
 83fddb2:	89 d8                	mov    %ebx,%eax
 83fddb4:	89 c2                	mov    %eax,%edx
 83fddb6:	8b 45 08             	mov    0x8(%ebp),%eax
 83fddb9:	89 90 58 07 00 00    	mov    %edx,0x758(%eax)
 83fddbf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fddc6:	e8 85 66 32 00       	call   8724450 <_Znwj>
 83fddcb:	89 c3                	mov    %eax,%ebx
 83fddcd:	89 d8                	mov    %ebx,%eax
 83fddcf:	89 04 24             	mov    %eax,(%esp)
 83fddd2:	e8 6f 14 05 00       	call   844f246 <_ZN17DB_InsertPvPBuddyC1Ev>
 83fddd7:	89 d8                	mov    %ebx,%eax
 83fddd9:	89 c2                	mov    %eax,%edx
 83fdddb:	8b 45 08             	mov    0x8(%ebp),%eax
 83fddde:	89 90 70 07 00 00    	mov    %edx,0x770(%eax)
 83fdde4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fddeb:	e8 60 66 32 00       	call   8724450 <_Znwj>
 83fddf0:	89 c3                	mov    %eax,%ebx
 83fddf2:	89 d8                	mov    %ebx,%eax
 83fddf4:	89 04 24             	mov    %eax,(%esp)
 83fddf7:	e8 66 14 05 00       	call   844f262 <_ZN17DB_DeletePvPBuddyC1Ev>
 83fddfc:	89 d8                	mov    %ebx,%eax
 83fddfe:	89 c2                	mov    %eax,%edx
 83fde00:	8b 45 08             	mov    0x8(%ebp),%eax
 83fde03:	89 90 74 07 00 00    	mov    %edx,0x774(%eax)
 83fde09:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fde10:	e8 3b 66 32 00       	call   8724450 <_Znwj>
 83fde15:	89 c3                	mov    %eax,%ebx
 83fde17:	89 d8                	mov    %ebx,%eax
 83fde19:	89 04 24             	mov    %eax,(%esp)
 83fde1c:	e8 5d 14 05 00       	call   844f27e <_ZN17DB_UpdatePvPBuddyC1Ev>
 83fde21:	89 d8                	mov    %ebx,%eax
 83fde23:	89 c2                	mov    %eax,%edx
 83fde25:	8b 45 08             	mov    0x8(%ebp),%eax
 83fde28:	89 90 78 07 00 00    	mov    %edx,0x778(%eax)
 83fde2e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fde35:	e8 16 66 32 00       	call   8724450 <_Znwj>
 83fde3a:	89 c3                	mov    %eax,%ebx
 83fde3c:	89 d8                	mov    %ebx,%eax
 83fde3e:	89 04 24             	mov    %eax,(%esp)
 83fde41:	e8 54 14 05 00       	call   844f29a <_ZN14DB_DeleteGuildC1Ev>
 83fde46:	89 d8                	mov    %ebx,%eax
 83fde48:	89 c2                	mov    %eax,%edx
 83fde4a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fde4d:	89 90 80 07 00 00    	mov    %edx,0x780(%eax)
 83fde53:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fde5a:	e8 f1 65 32 00       	call   8724450 <_Znwj>
 83fde5f:	89 c3                	mov    %eax,%ebx
 83fde61:	89 d8                	mov    %ebx,%eax
 83fde63:	89 04 24             	mov    %eax,(%esp)
 83fde66:	e8 4b 14 05 00       	call   844f2b6 <_ZN23DB_LoadPvPLiveEventDataC1Ev>
 83fde6b:	89 d8                	mov    %ebx,%eax
 83fde6d:	89 c2                	mov    %eax,%edx
 83fde6f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fde72:	89 90 84 07 00 00    	mov    %edx,0x784(%eax)
 83fde78:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fde7f:	e8 cc 65 32 00       	call   8724450 <_Znwj>
 83fde84:	89 c3                	mov    %eax,%ebx
 83fde86:	89 d8                	mov    %ebx,%eax
 83fde88:	89 04 24             	mov    %eax,(%esp)
 83fde8b:	e8 42 14 05 00       	call   844f2d2 <_ZN25DB_UpdatePvPLiveEventDataC1Ev>
 83fde90:	89 d8                	mov    %ebx,%eax
 83fde92:	89 c2                	mov    %eax,%edx
 83fde94:	8b 45 08             	mov    0x8(%ebp),%eax
 83fde97:	89 90 88 07 00 00    	mov    %edx,0x788(%eax)
 83fde9d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdea4:	e8 a7 65 32 00       	call   8724450 <_Znwj>
 83fdea9:	89 c3                	mov    %eax,%ebx
 83fdeab:	89 d8                	mov    %ebx,%eax
 83fdead:	89 04 24             	mov    %eax,(%esp)
 83fdeb0:	e8 39 14 05 00       	call   844f2ee <_ZN30DB_LoadOnlinePreliminaryMemberC1Ev>
 83fdeb5:	89 d8                	mov    %ebx,%eax
 83fdeb7:	89 c2                	mov    %eax,%edx
 83fdeb9:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdebc:	89 90 9c 07 00 00    	mov    %edx,0x79c(%eax)
 83fdec2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdec9:	e8 82 65 32 00       	call   8724450 <_Znwj>
 83fdece:	89 c3                	mov    %eax,%ebx
 83fded0:	89 d8                	mov    %ebx,%eax
 83fded2:	89 04 24             	mov    %eax,(%esp)
 83fded5:	e8 30 14 05 00       	call   844f30a <_ZN32DB_UpdateOnlinePreliminaryMemberC1Ev>
 83fdeda:	89 d8                	mov    %ebx,%eax
 83fdedc:	89 c2                	mov    %eax,%edx
 83fdede:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdee1:	89 90 a0 07 00 00    	mov    %edx,0x7a0(%eax)
 83fdee7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdeee:	e8 5d 65 32 00       	call   8724450 <_Znwj>
 83fdef3:	89 c3                	mov    %eax,%ebx
 83fdef5:	89 d8                	mov    %ebx,%eax
 83fdef7:	89 04 24             	mov    %eax,(%esp)
 83fdefa:	e8 27 14 05 00       	call   844f326 <_ZN28DB_LoadOnlinePreliminaryTeamC1Ev>
 83fdeff:	89 d8                	mov    %ebx,%eax
 83fdf01:	89 c2                	mov    %eax,%edx
 83fdf03:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdf06:	89 90 a4 07 00 00    	mov    %edx,0x7a4(%eax)
 83fdf0c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdf13:	e8 38 65 32 00       	call   8724450 <_Znwj>
 83fdf18:	89 c3                	mov    %eax,%ebx
 83fdf1a:	89 d8                	mov    %ebx,%eax
 83fdf1c:	89 04 24             	mov    %eax,(%esp)
 83fdf1f:	e8 1e 14 05 00       	call   844f342 <_ZN30DB_UpdateOnlinePreliminaryTeamC1Ev>
 83fdf24:	89 d8                	mov    %ebx,%eax
 83fdf26:	89 c2                	mov    %eax,%edx
 83fdf28:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdf2b:	89 90 a8 07 00 00    	mov    %edx,0x7a8(%eax)
 83fdf31:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdf38:	e8 13 65 32 00       	call   8724450 <_Znwj>
 83fdf3d:	89 c3                	mov    %eax,%ebx
 83fdf3f:	89 d8                	mov    %ebx,%eax
 83fdf41:	89 04 24             	mov    %eax,(%esp)
 83fdf44:	e8 15 14 05 00       	call   844f35e <_ZN41DB_UpdateOnlinePreliminaryMemberMatchListC1Ev>
 83fdf49:	89 d8                	mov    %ebx,%eax
 83fdf4b:	89 c2                	mov    %eax,%edx
 83fdf4d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdf50:	89 90 b0 07 00 00    	mov    %edx,0x7b0(%eax)
 83fdf56:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdf5d:	e8 ee 64 32 00       	call   8724450 <_Znwj>
 83fdf62:	89 c3                	mov    %eax,%ebx
 83fdf64:	89 d8                	mov    %ebx,%eax
 83fdf66:	89 04 24             	mov    %eax,(%esp)
 83fdf69:	e8 0c 14 05 00       	call   844f37a <_ZN37DB_LoadOnlinePreliminaryTeamMatchListC1Ev>
 83fdf6e:	89 d8                	mov    %ebx,%eax
 83fdf70:	89 c2                	mov    %eax,%edx
 83fdf72:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdf75:	89 90 b4 07 00 00    	mov    %edx,0x7b4(%eax)
 83fdf7b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdf82:	e8 c9 64 32 00       	call   8724450 <_Znwj>
 83fdf87:	89 c3                	mov    %eax,%ebx
 83fdf89:	89 d8                	mov    %ebx,%eax
 83fdf8b:	89 04 24             	mov    %eax,(%esp)
 83fdf8e:	e8 03 14 05 00       	call   844f396 <_ZN39DB_UpdateOnlinePreliminaryTeamMatchListC1Ev>
 83fdf93:	89 d8                	mov    %ebx,%eax
 83fdf95:	89 c2                	mov    %eax,%edx
 83fdf97:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdf9a:	89 90 b8 07 00 00    	mov    %edx,0x7b8(%eax)
 83fdfa0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdfa7:	e8 a4 64 32 00       	call   8724450 <_Znwj>
 83fdfac:	89 c3                	mov    %eax,%ebx
 83fdfae:	89 d8                	mov    %ebx,%eax
 83fdfb0:	89 04 24             	mov    %eax,(%esp)
 83fdfb3:	e8 fa 13 05 00       	call   844f3b2 <_ZN21DB_SaveRedeemItemListC1Ev>
 83fdfb8:	89 d8                	mov    %ebx,%eax
 83fdfba:	89 c2                	mov    %eax,%edx
 83fdfbc:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdfbf:	89 90 d4 07 00 00    	mov    %edx,0x7d4(%eax)
 83fdfc5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdfcc:	e8 7f 64 32 00       	call   8724450 <_Znwj>
 83fdfd1:	89 c3                	mov    %eax,%ebx
 83fdfd3:	89 d8                	mov    %ebx,%eax
 83fdfd5:	89 04 24             	mov    %eax,(%esp)
 83fdfd8:	e8 f1 13 05 00       	call   844f3ce <_ZN21DB_CreateAccountCargoC1Ev>
 83fdfdd:	89 d8                	mov    %ebx,%eax
 83fdfdf:	89 c2                	mov    %eax,%edx
 83fdfe1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fdfe4:	89 90 bc 07 00 00    	mov    %edx,0x7bc(%eax)
 83fdfea:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fdff1:	e8 5a 64 32 00       	call   8724450 <_Znwj>
 83fdff6:	89 c3                	mov    %eax,%ebx
 83fdff8:	89 d8                	mov    %ebx,%eax
 83fdffa:	89 04 24             	mov    %eax,(%esp)
 83fdffd:	e8 e8 13 05 00       	call   844f3ea <_ZN22DB_UpgradeAccountCargoC1Ev>
 83fe002:	89 d8                	mov    %ebx,%eax
 83fe004:	89 c2                	mov    %eax,%edx
 83fe006:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe009:	89 90 c0 07 00 00    	mov    %edx,0x7c0(%eax)
 83fe00f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe016:	e8 35 64 32 00       	call   8724450 <_Znwj>
 83fe01b:	89 c3                	mov    %eax,%ebx
 83fe01d:	89 d8                	mov    %ebx,%eax
 83fe01f:	89 04 24             	mov    %eax,(%esp)
 83fe022:	e8 df 13 05 00       	call   844f406 <_ZN21DB_DeleteAccountCargoC1Ev>
 83fe027:	89 d8                	mov    %ebx,%eax
 83fe029:	89 c2                	mov    %eax,%edx
 83fe02b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe02e:	89 90 c4 07 00 00    	mov    %edx,0x7c4(%eax)
 83fe034:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe03b:	e8 10 64 32 00       	call   8724450 <_Znwj>
 83fe040:	89 c3                	mov    %eax,%ebx
 83fe042:	89 d8                	mov    %ebx,%eax
 83fe044:	89 04 24             	mov    %eax,(%esp)
 83fe047:	e8 d6 13 05 00       	call   844f422 <_ZN19DB_LoadAccountCargoC1Ev>
 83fe04c:	89 d8                	mov    %ebx,%eax
 83fe04e:	89 c2                	mov    %eax,%edx
 83fe050:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe053:	89 90 cc 07 00 00    	mov    %edx,0x7cc(%eax)
 83fe059:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe060:	e8 eb 63 32 00       	call   8724450 <_Znwj>
 83fe065:	89 c3                	mov    %eax,%ebx
 83fe067:	89 d8                	mov    %ebx,%eax
 83fe069:	89 04 24             	mov    %eax,(%esp)
 83fe06c:	e8 cd 13 05 00       	call   844f43e <_ZN19DB_SaveAccountCargoC1Ev>
 83fe071:	89 d8                	mov    %ebx,%eax
 83fe073:	89 c2                	mov    %eax,%edx
 83fe075:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe078:	89 90 c8 07 00 00    	mov    %edx,0x7c8(%eax)
 83fe07e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe085:	e8 c6 63 32 00       	call   8724450 <_Znwj>
 83fe08a:	89 c3                	mov    %eax,%ebx
 83fe08c:	89 d8                	mov    %ebx,%eax
 83fe08e:	89 04 24             	mov    %eax,(%esp)
 83fe091:	e8 c4 13 05 00       	call   844f45a <_ZN14DB_SaveMileageC1Ev>
 83fe096:	89 d8                	mov    %ebx,%eax
 83fe098:	89 c2                	mov    %eax,%edx
 83fe09a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe09d:	89 90 f4 07 00 00    	mov    %edx,0x7f4(%eax)
 83fe0a3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe0aa:	e8 a1 63 32 00       	call   8724450 <_Znwj>
 83fe0af:	89 c3                	mov    %eax,%ebx
 83fe0b1:	89 d8                	mov    %ebx,%eax
 83fe0b3:	89 04 24             	mov    %eax,(%esp)
 83fe0b6:	e8 bb 13 05 00       	call   844f476 <_ZN14DB_LoadMileageC1Ev>
 83fe0bb:	89 d8                	mov    %ebx,%eax
 83fe0bd:	89 c2                	mov    %eax,%edx
 83fe0bf:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe0c2:	89 90 f8 07 00 00    	mov    %edx,0x7f8(%eax)
 83fe0c8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe0cf:	e8 7c 63 32 00       	call   8724450 <_Znwj>
 83fe0d4:	89 c3                	mov    %eax,%ebx
 83fe0d6:	89 d8                	mov    %ebx,%eax
 83fe0d8:	89 04 24             	mov    %eax,(%esp)
 83fe0db:	e8 0a fd 04 00       	call   844ddea <_ZN12advancealtar7DB_LoadC1Ev>
 83fe0e0:	89 d8                	mov    %ebx,%eax
 83fe0e2:	89 c2                	mov    %eax,%edx
 83fe0e4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe0e7:	89 50 68             	mov    %edx,0x68(%eax)
 83fe0ea:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe0f1:	e8 5a 63 32 00       	call   8724450 <_Znwj>
 83fe0f6:	89 c3                	mov    %eax,%ebx
 83fe0f8:	89 d8                	mov    %ebx,%eax
 83fe0fa:	89 04 24             	mov    %eax,(%esp)
 83fe0fd:	e8 04 fd 04 00       	call   844de06 <_ZN12advancealtar9DB_UpdateC1Ev>
 83fe102:	89 d8                	mov    %ebx,%eax
 83fe104:	89 c2                	mov    %eax,%edx
 83fe106:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe109:	89 50 6c             	mov    %edx,0x6c(%eax)
 83fe10c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe113:	e8 38 63 32 00       	call   8724450 <_Znwj>
 83fe118:	89 c3                	mov    %eax,%ebx
 83fe11a:	89 d8                	mov    %ebx,%eax
 83fe11c:	89 04 24             	mov    %eax,(%esp)
 83fe11f:	e8 6e 13 05 00       	call   844f492 <_ZN25DB_Multi_MailBox_Req_SendC1Ev>
 83fe124:	89 d8                	mov    %ebx,%eax
 83fe126:	89 c2                	mov    %eax,%edx
 83fe128:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe12b:	89 90 d8 07 00 00    	mov    %edx,0x7d8(%eax)
 83fe131:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe138:	e8 13 63 32 00       	call   8724450 <_Znwj>
 83fe13d:	89 c3                	mov    %eax,%ebx
 83fe13f:	89 d8                	mov    %ebx,%eax
 83fe141:	89 04 24             	mov    %eax,(%esp)
 83fe144:	e8 65 13 05 00       	call   844f4ae <_ZN28DB_ReqQueryCharacInfoMailboxC1Ev>
 83fe149:	89 d8                	mov    %ebx,%eax
 83fe14b:	89 c2                	mov    %eax,%edx
 83fe14d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe150:	89 90 dc 07 00 00    	mov    %edx,0x7dc(%eax)
 83fe156:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe15d:	e8 ee 62 32 00       	call   8724450 <_Znwj>
 83fe162:	89 c3                	mov    %eax,%ebx
 83fe164:	89 d8                	mov    %ebx,%eax
 83fe166:	89 04 24             	mov    %eax,(%esp)
 83fe169:	e8 5c 13 05 00       	call   844f4ca <_ZN21DB_GuildExpBookDeleteC1Ev>
 83fe16e:	89 d8                	mov    %ebx,%eax
 83fe170:	89 c2                	mov    %eax,%edx
 83fe172:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe175:	89 90 28 08 00 00    	mov    %edx,0x828(%eax)
 83fe17b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe182:	e8 c9 62 32 00       	call   8724450 <_Znwj>
 83fe187:	89 c3                	mov    %eax,%ebx
 83fe189:	89 d8                	mov    %ebx,%eax
 83fe18b:	89 04 24             	mov    %eax,(%esp)
 83fe18e:	e8 53 13 05 00       	call   844f4e6 <_ZN27DB_InsertPoliceSaveChattingC1Ev>
 83fe193:	89 d8                	mov    %ebx,%eax
 83fe195:	89 c2                	mov    %eax,%edx
 83fe197:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe19a:	89 90 34 08 00 00    	mov    %edx,0x834(%eax)
 83fe1a0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe1a7:	e8 a4 62 32 00       	call   8724450 <_Znwj>
 83fe1ac:	89 c3                	mov    %eax,%ebx
 83fe1ae:	89 d8                	mov    %ebx,%eax
 83fe1b0:	89 04 24             	mov    %eax,(%esp)
 83fe1b3:	e8 4a 13 05 00       	call   844f502 <_ZN31DB_UpdateChuseokPackagePurchaseC1Ev>
 83fe1b8:	89 d8                	mov    %ebx,%eax
 83fe1ba:	89 c2                	mov    %eax,%edx
 83fe1bc:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe1bf:	89 90 50 08 00 00    	mov    %edx,0x850(%eax)
 83fe1c5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe1cc:	e8 7f 62 32 00       	call   8724450 <_Znwj>
 83fe1d1:	89 c3                	mov    %eax,%ebx
 83fe1d3:	89 d8                	mov    %ebx,%eax
 83fe1d5:	89 04 24             	mov    %eax,(%esp)
 83fe1d8:	e8 41 13 05 00       	call   844f51e <_ZN17DB_CheckJoinGuildC1Ev>
 83fe1dd:	89 d8                	mov    %ebx,%eax
 83fe1df:	89 c2                	mov    %eax,%edx
 83fe1e1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe1e4:	89 90 5c 08 00 00    	mov    %edx,0x85c(%eax)
 83fe1ea:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe1f1:	e8 5a 62 32 00       	call   8724450 <_Znwj>
 83fe1f6:	89 c3                	mov    %eax,%ebx
 83fe1f8:	89 d8                	mov    %ebx,%eax
 83fe1fa:	89 04 24             	mov    %eax,(%esp)
 83fe1fd:	e8 38 13 05 00       	call   844f53a <_ZN19DB_RequestJoinGuildC1Ev>
 83fe202:	89 d8                	mov    %ebx,%eax
 83fe204:	89 c2                	mov    %eax,%edx
 83fe206:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe209:	89 90 60 08 00 00    	mov    %edx,0x860(%eax)
 83fe20f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe216:	e8 35 62 32 00       	call   8724450 <_Znwj>
 83fe21b:	89 c3                	mov    %eax,%ebx
 83fe21d:	89 d8                	mov    %ebx,%eax
 83fe21f:	89 04 24             	mov    %eax,(%esp)
 83fe222:	e8 2f 13 05 00       	call   844f556 <_ZN16DB_JoinGuildInfoC1Ev>
 83fe227:	89 d8                	mov    %ebx,%eax
 83fe229:	89 c2                	mov    %eax,%edx
 83fe22b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe22e:	89 90 68 08 00 00    	mov    %edx,0x868(%eax)
 83fe234:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe23b:	e8 10 62 32 00       	call   8724450 <_Znwj>
 83fe240:	89 c3                	mov    %eax,%ebx
 83fe242:	89 d8                	mov    %ebx,%eax
 83fe244:	89 04 24             	mov    %eax,(%esp)
 83fe247:	e8 26 13 05 00       	call   844f572 <_ZN18DB_CancelJoinGuildC1Ev>
 83fe24c:	89 d8                	mov    %ebx,%eax
 83fe24e:	89 c2                	mov    %eax,%edx
 83fe250:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe253:	89 90 64 08 00 00    	mov    %edx,0x864(%eax)
 83fe259:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe260:	e8 eb 61 32 00       	call   8724450 <_Znwj>
 83fe265:	89 c3                	mov    %eax,%ebx
 83fe267:	89 d8                	mov    %ebx,%eax
 83fe269:	89 04 24             	mov    %eax,(%esp)
 83fe26c:	e8 1d 13 05 00       	call   844f58e <_ZN16DB_GuildJoinListC1Ev>
 83fe271:	89 d8                	mov    %ebx,%eax
 83fe273:	89 c2                	mov    %eax,%edx
 83fe275:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe278:	89 90 6c 08 00 00    	mov    %edx,0x86c(%eax)
 83fe27e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe285:	e8 c6 61 32 00       	call   8724450 <_Znwj>
 83fe28a:	89 c3                	mov    %eax,%ebx
 83fe28c:	89 d8                	mov    %ebx,%eax
 83fe28e:	89 04 24             	mov    %eax,(%esp)
 83fe291:	e8 14 13 05 00       	call   844f5aa <_ZN16DB_DenyJoinGuildC1Ev>
 83fe296:	89 d8                	mov    %ebx,%eax
 83fe298:	89 c2                	mov    %eax,%edx
 83fe29a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe29d:	89 90 74 08 00 00    	mov    %edx,0x874(%eax)
 83fe2a3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe2aa:	e8 a1 61 32 00       	call   8724450 <_Znwj>
 83fe2af:	89 c3                	mov    %eax,%ebx
 83fe2b1:	89 d8                	mov    %ebx,%eax
 83fe2b3:	89 04 24             	mov    %eax,(%esp)
 83fe2b6:	e8 0b 13 05 00       	call   844f5c6 <_ZN29DB_UpdateReturnUserFirstLoginC1Ev>
 83fe2bb:	89 d8                	mov    %ebx,%eax
 83fe2bd:	89 c2                	mov    %eax,%edx
 83fe2bf:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe2c2:	89 90 80 08 00 00    	mov    %edx,0x880(%eax)
 83fe2c8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe2cf:	e8 7c 61 32 00       	call   8724450 <_Znwj>
 83fe2d4:	89 c3                	mov    %eax,%ebx
 83fe2d6:	89 d8                	mov    %ebx,%eax
 83fe2d8:	89 04 24             	mov    %eax,(%esp)
 83fe2db:	e8 02 13 05 00       	call   844f5e2 <_ZN30DB_InsertAccountFirstLoginFlagC1Ev>
 83fe2e0:	89 d8                	mov    %ebx,%eax
 83fe2e2:	89 c2                	mov    %eax,%edx
 83fe2e4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe2e7:	89 90 7c 09 00 00    	mov    %edx,0x97c(%eax)
 83fe2ed:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe2f4:	e8 57 61 32 00       	call   8724450 <_Znwj>
 83fe2f9:	89 c3                	mov    %eax,%ebx
 83fe2fb:	89 d8                	mov    %ebx,%eax
 83fe2fd:	89 04 24             	mov    %eax,(%esp)
 83fe300:	e8 f9 12 05 00       	call   844f5fe <_ZN31DB_SaveGameOption_QuickChattingC1Ev>
 83fe305:	89 d8                	mov    %ebx,%eax
 83fe307:	89 c2                	mov    %eax,%edx
 83fe309:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe30c:	89 90 e8 08 00 00    	mov    %edx,0x8e8(%eax)
 83fe312:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe319:	e8 32 61 32 00       	call   8724450 <_Znwj>
 83fe31e:	89 c3                	mov    %eax,%ebx
 83fe320:	89 d8                	mov    %ebx,%eax
 83fe322:	89 04 24             	mov    %eax,(%esp)
 83fe325:	e8 f0 12 05 00       	call   844f61a <_ZN30DB_UpdatePurchaseCashItemBonusC1Ev>
 83fe32a:	89 d8                	mov    %ebx,%eax
 83fe32c:	89 c2                	mov    %eax,%edx
 83fe32e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe331:	89 90 f4 08 00 00    	mov    %edx,0x8f4(%eax)
 83fe337:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe33e:	e8 0d 61 32 00       	call   8724450 <_Znwj>
 83fe343:	89 c3                	mov    %eax,%ebx
 83fe345:	89 d8                	mov    %ebx,%eax
 83fe347:	89 04 24             	mov    %eax,(%esp)
 83fe34a:	e8 e7 12 05 00       	call   844f636 <_ZN23DB_UpdateItemCountValueC1Ev>
 83fe34f:	89 d8                	mov    %ebx,%eax
 83fe351:	89 c2                	mov    %eax,%edx
 83fe353:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe356:	89 90 04 09 00 00    	mov    %edx,0x904(%eax)
 83fe35c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe363:	e8 e8 60 32 00       	call   8724450 <_Znwj>
 83fe368:	89 c3                	mov    %eax,%ebx
 83fe36a:	89 d8                	mov    %ebx,%eax
 83fe36c:	89 04 24             	mov    %eax,(%esp)
 83fe36f:	e8 de 12 05 00       	call   844f652 <_ZN23DB_UpdateLimitItemUsageC1Ev>
 83fe374:	89 d8                	mov    %ebx,%eax
 83fe376:	89 c2                	mov    %eax,%edx
 83fe378:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe37b:	89 90 08 09 00 00    	mov    %edx,0x908(%eax)
 83fe381:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe388:	e8 c3 60 32 00       	call   8724450 <_Znwj>
 83fe38d:	89 c3                	mov    %eax,%ebx
 83fe38f:	89 d8                	mov    %ebx,%eax
 83fe391:	89 04 24             	mov    %eax,(%esp)
 83fe394:	e8 d5 12 05 00       	call   844f66e <_ZN13DB_LogBuyItemC1Ev>
 83fe399:	89 d8                	mov    %ebx,%eax
 83fe39b:	89 c2                	mov    %eax,%edx
 83fe39d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe3a0:	89 90 48 09 00 00    	mov    %edx,0x948(%eax)
 83fe3a6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe3ad:	e8 9e 60 32 00       	call   8724450 <_Znwj>
 83fe3b2:	89 c3                	mov    %eax,%ebx
 83fe3b4:	89 d8                	mov    %ebx,%eax
 83fe3b6:	89 04 24             	mov    %eax,(%esp)
 83fe3b9:	e8 cc 12 05 00       	call   844f68a <_ZN20DB_UpdateRevengeDataC1Ev>
 83fe3be:	89 d8                	mov    %ebx,%eax
 83fe3c0:	89 c2                	mov    %eax,%edx
 83fe3c2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe3c5:	89 90 14 09 00 00    	mov    %edx,0x914(%eax)
 83fe3cb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe3d2:	e8 79 60 32 00       	call   8724450 <_Znwj>
 83fe3d7:	89 c3                	mov    %eax,%ebx
 83fe3d9:	89 d8                	mov    %ebx,%eax
 83fe3db:	89 04 24             	mov    %eax,(%esp)
 83fe3de:	e8 c3 12 05 00       	call   844f6a6 <_ZN37DB_UpdateGoblinPadAdvicePwdRewardTimeC1Ev>
 83fe3e3:	89 d8                	mov    %ebx,%eax
 83fe3e5:	89 c2                	mov    %eax,%edx
 83fe3e7:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe3ea:	89 90 20 09 00 00    	mov    %edx,0x920(%eax)
 83fe3f0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe3f7:	e8 54 60 32 00       	call   8724450 <_Znwj>
 83fe3fc:	89 c3                	mov    %eax,%ebx
 83fe3fe:	89 d8                	mov    %ebx,%eax
 83fe400:	89 04 24             	mov    %eax,(%esp)
 83fe403:	e8 ba 12 05 00       	call   844f6c2 <_ZN23DB_UpdateCharacPlayTimeC1Ev>
 83fe408:	89 d8                	mov    %ebx,%eax
 83fe40a:	89 c2                	mov    %eax,%edx
 83fe40c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe40f:	89 90 3c 09 00 00    	mov    %edx,0x93c(%eax)
 83fe415:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe41c:	e8 2f 60 32 00       	call   8724450 <_Znwj>
 83fe421:	89 c3                	mov    %eax,%ebx
 83fe423:	89 d8                	mov    %ebx,%eax
 83fe425:	89 04 24             	mov    %eax,(%esp)
 83fe428:	e8 b1 12 05 00       	call   844f6de <_ZN22DB_SaveExpandEquipslotC1Ev>
 83fe42d:	89 d8                	mov    %ebx,%eax
 83fe42f:	89 c2                	mov    %eax,%edx
 83fe431:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe434:	89 90 b8 09 00 00    	mov    %edx,0x9b8(%eax)
 83fe43a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe441:	e8 0a 60 32 00       	call   8724450 <_Znwj>
 83fe446:	89 c3                	mov    %eax,%ebx
 83fe448:	89 d8                	mov    %ebx,%eax
 83fe44a:	89 04 24             	mov    %eax,(%esp)
 83fe44d:	e8 a8 12 05 00       	call   844f6fa <_ZN21DB_UpdateFairPvPScoreC1Ev>
 83fe452:	89 d8                	mov    %ebx,%eax
 83fe454:	89 c2                	mov    %eax,%edx
 83fe456:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe459:	89 90 88 09 00 00    	mov    %edx,0x988(%eax)
 83fe45f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe466:	e8 e5 5f 32 00       	call   8724450 <_Znwj>
 83fe46b:	89 c3                	mov    %eax,%ebx
 83fe46d:	89 d8                	mov    %ebx,%eax
 83fe46f:	89 04 24             	mov    %eax,(%esp)
 83fe472:	e8 9f 12 05 00       	call   844f716 <_ZN21DB_SavePvPMissionListC1Ev>
 83fe477:	89 d8                	mov    %ebx,%eax
 83fe479:	89 c2                	mov    %eax,%edx
 83fe47b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe47e:	89 90 90 09 00 00    	mov    %edx,0x990(%eax)
 83fe484:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe48b:	e8 c0 5f 32 00       	call   8724450 <_Znwj>
 83fe490:	89 c3                	mov    %eax,%ebx
 83fe492:	89 d8                	mov    %ebx,%eax
 83fe494:	89 04 24             	mov    %eax,(%esp)
 83fe497:	e8 96 12 05 00       	call   844f732 <_ZN21DB_InsertResponseTimeC1Ev>
 83fe49c:	89 d8                	mov    %ebx,%eax
 83fe49e:	89 c2                	mov    %eax,%edx
 83fe4a0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe4a3:	89 90 b4 09 00 00    	mov    %edx,0x9b4(%eax)
 83fe4a9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe4b0:	e8 9b 5f 32 00       	call   8724450 <_Znwj>
 83fe4b5:	89 c3                	mov    %eax,%ebx
 83fe4b7:	89 d8                	mov    %ebx,%eax
 83fe4b9:	89 04 24             	mov    %eax,(%esp)
 83fe4bc:	e8 8d 12 05 00       	call   844f74e <_ZN24DB_UpdateItemMakingSkillC1Ev>
 83fe4c1:	89 d8                	mov    %ebx,%eax
 83fe4c3:	89 c2                	mov    %eax,%edx
 83fe4c5:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe4c8:	89 90 bc 09 00 00    	mov    %edx,0x9bc(%eax)
 83fe4ce:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe4d5:	e8 76 5f 32 00       	call   8724450 <_Znwj>
 83fe4da:	89 c3                	mov    %eax,%ebx
 83fe4dc:	89 d8                	mov    %ebx,%eax
 83fe4de:	89 04 24             	mov    %eax,(%esp)
 83fe4e1:	e8 84 12 05 00       	call   844f76a <_ZN28DB_TOD_Random_Select_UserAPCC1Ev>
 83fe4e6:	89 d8                	mov    %ebx,%eax
 83fe4e8:	89 c2                	mov    %eax,%edx
 83fe4ea:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe4ed:	89 90 d8 09 00 00    	mov    %edx,0x9d8(%eax)
 83fe4f3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe4fa:	e8 51 5f 32 00       	call   8724450 <_Znwj>
 83fe4ff:	89 c3                	mov    %eax,%ebx
 83fe501:	89 d8                	mov    %ebx,%eax
 83fe503:	89 04 24             	mov    %eax,(%esp)
 83fe506:	e8 7b 12 05 00       	call   844f786 <_ZN20DB_TOD_Reset_UserAPCC1Ev>
 83fe50b:	89 d8                	mov    %ebx,%eax
 83fe50d:	89 c2                	mov    %eax,%edx
 83fe50f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe512:	89 90 e0 09 00 00    	mov    %edx,0x9e0(%eax)
 83fe518:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe51f:	e8 2c 5f 32 00       	call   8724450 <_Znwj>
 83fe524:	89 c3                	mov    %eax,%ebx
 83fe526:	89 d8                	mov    %ebx,%eax
 83fe528:	89 04 24             	mov    %eax,(%esp)
 83fe52b:	e8 72 12 05 00       	call   844f7a2 <_ZN23DB_TOD_Update_UserStateC1Ev>
 83fe530:	89 d8                	mov    %ebx,%eax
 83fe532:	89 c2                	mov    %eax,%edx
 83fe534:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe537:	89 90 e4 09 00 00    	mov    %edx,0x9e4(%eax)
 83fe53d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe544:	e8 07 5f 32 00       	call   8724450 <_Znwj>
 83fe549:	89 c3                	mov    %eax,%ebx
 83fe54b:	89 d8                	mov    %ebx,%eax
 83fe54d:	89 04 24             	mov    %eax,(%esp)
 83fe550:	e8 69 12 05 00       	call   844f7be <_ZN34DB_UpdateQuestShopBuyingStatusListC1Ev>
 83fe555:	89 d8                	mov    %ebx,%eax
 83fe557:	89 c2                	mov    %eax,%edx
 83fe559:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe55c:	89 90 e8 09 00 00    	mov    %edx,0x9e8(%eax)
 83fe562:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe569:	e8 e2 5e 32 00       	call   8724450 <_Znwj>
 83fe56e:	89 c3                	mov    %eax,%ebx
 83fe570:	89 d8                	mov    %ebx,%eax
 83fe572:	89 04 24             	mov    %eax,(%esp)
 83fe575:	e8 60 12 05 00       	call   844f7da <_ZN26DB_UpdateAddItemCountValueC1Ev>
 83fe57a:	89 d8                	mov    %ebx,%eax
 83fe57c:	89 c2                	mov    %eax,%edx
 83fe57e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe581:	89 90 04 0a 00 00    	mov    %edx,0xa04(%eax)
 83fe587:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe58e:	e8 bd 5e 32 00       	call   8724450 <_Znwj>
 83fe593:	89 c3                	mov    %eax,%ebx
 83fe595:	89 d8                	mov    %ebx,%eax
 83fe597:	89 04 24             	mov    %eax,(%esp)
 83fe59a:	e8 57 12 05 00       	call   844f7f6 <_ZN22DB_SaveKillMonsterInfoC1Ev>
 83fe59f:	89 d8                	mov    %ebx,%eax
 83fe5a1:	89 c2                	mov    %eax,%edx
 83fe5a3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe5a6:	89 90 08 0a 00 00    	mov    %edx,0xa08(%eax)
 83fe5ac:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe5b3:	e8 98 5e 32 00       	call   8724450 <_Znwj>
 83fe5b8:	89 c3                	mov    %eax,%ebx
 83fe5ba:	89 d8                	mov    %ebx,%eax
 83fe5bc:	89 04 24             	mov    %eax,(%esp)
 83fe5bf:	e8 4e 12 05 00       	call   844f812 <_ZN22DB_LoadKillMonsterInfoC1Ev>
 83fe5c4:	89 d8                	mov    %ebx,%eax
 83fe5c6:	89 c2                	mov    %eax,%edx
 83fe5c8:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe5cb:	89 90 0c 0a 00 00    	mov    %edx,0xa0c(%eax)
 83fe5d1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe5d8:	e8 73 5e 32 00       	call   8724450 <_Znwj>
 83fe5dd:	89 c3                	mov    %eax,%ebx
 83fe5df:	89 d8                	mov    %ebx,%eax
 83fe5e1:	89 04 24             	mov    %eax,(%esp)
 83fe5e4:	e8 45 12 05 00       	call   844f82e <_ZN16DB_SaveTitleBookC1Ev>
 83fe5e9:	89 d8                	mov    %ebx,%eax
 83fe5eb:	89 c2                	mov    %eax,%edx
 83fe5ed:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe5f0:	89 90 18 0a 00 00    	mov    %edx,0xa18(%eax)
 83fe5f6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe5fd:	e8 4e 5e 32 00       	call   8724450 <_Znwj>
 83fe602:	89 c3                	mov    %eax,%ebx
 83fe604:	89 d8                	mov    %ebx,%eax
 83fe606:	89 04 24             	mov    %eax,(%esp)
 83fe609:	e8 3c 12 05 00       	call   844f84a <_ZN18DB_SaveAchievementC1Ev>
 83fe60e:	89 d8                	mov    %ebx,%eax
 83fe610:	89 c2                	mov    %eax,%edx
 83fe612:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe615:	89 90 1c 0a 00 00    	mov    %edx,0xa1c(%eax)
 83fe61b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe622:	e8 29 5e 32 00       	call   8724450 <_Znwj>
 83fe627:	89 c3                	mov    %eax,%ebx
 83fe629:	89 d8                	mov    %ebx,%eax
 83fe62b:	89 04 24             	mov    %eax,(%esp)
 83fe62e:	e8 33 12 05 00       	call   844f866 <_ZN28DB_UpdateUserFatigueQuantityC1Ev>
 83fe633:	89 d8                	mov    %ebx,%eax
 83fe635:	89 c2                	mov    %eax,%edx
 83fe637:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe63a:	89 90 20 0a 00 00    	mov    %edx,0xa20(%eax)
 83fe640:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe647:	e8 04 5e 32 00       	call   8724450 <_Znwj>
 83fe64c:	89 c3                	mov    %eax,%ebx
 83fe64e:	89 d8                	mov    %ebx,%eax
 83fe650:	89 04 24             	mov    %eax,(%esp)
 83fe653:	e8 2a 12 05 00       	call   844f882 <_ZN32DB_UpdateUserGiftFatigueQuantityC1Ev>
 83fe658:	89 d8                	mov    %ebx,%eax
 83fe65a:	89 c2                	mov    %eax,%edx
 83fe65c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe65f:	89 90 24 0a 00 00    	mov    %edx,0xa24(%eax)
 83fe665:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe66c:	e8 df 5d 32 00       	call   8724450 <_Znwj>
 83fe671:	89 c3                	mov    %eax,%ebx
 83fe673:	89 d8                	mov    %ebx,%eax
 83fe675:	89 04 24             	mov    %eax,(%esp)
 83fe678:	e8 21 12 05 00       	call   844f89e <_ZN23DB_SaveCharacSlotExtendC1Ev>
 83fe67d:	89 d8                	mov    %ebx,%eax
 83fe67f:	89 c2                	mov    %eax,%edx
 83fe681:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe684:	89 90 2c 0a 00 00    	mov    %edx,0xa2c(%eax)
 83fe68a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe691:	e8 ba 5d 32 00       	call   8724450 <_Znwj>
 83fe696:	89 c3                	mov    %eax,%ebx
 83fe698:	89 d8                	mov    %ebx,%eax
 83fe69a:	89 04 24             	mov    %eax,(%esp)
 83fe69d:	e8 18 12 05 00       	call   844f8ba <_ZN27DB_SaveGiveAvengerTitleFlagC1Ev>
 83fe6a2:	89 d8                	mov    %ebx,%eax
 83fe6a4:	89 c2                	mov    %eax,%edx
 83fe6a6:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe6a9:	89 90 38 0a 00 00    	mov    %edx,0xa38(%eax)
 83fe6af:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe6b6:	e8 95 5d 32 00       	call   8724450 <_Znwj>
 83fe6bb:	89 c3                	mov    %eax,%ebx
 83fe6bd:	89 d8                	mov    %ebx,%eax
 83fe6bf:	89 04 24             	mov    %eax,(%esp)
 83fe6c2:	e8 0f 12 05 00       	call   844f8d6 <_ZN22DB_SelectLevelUpRewardC1Ev>
 83fe6c7:	89 d8                	mov    %ebx,%eax
 83fe6c9:	89 c2                	mov    %eax,%edx
 83fe6cb:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe6ce:	89 90 3c 0a 00 00    	mov    %edx,0xa3c(%eax)
 83fe6d4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe6db:	e8 70 5d 32 00       	call   8724450 <_Znwj>
 83fe6e0:	89 c3                	mov    %eax,%ebx
 83fe6e2:	89 d8                	mov    %ebx,%eax
 83fe6e4:	89 04 24             	mov    %eax,(%esp)
 83fe6e7:	e8 da 0e 05 00       	call   844f5c6 <_ZN29DB_UpdateReturnUserFirstLoginC1Ev>
 83fe6ec:	89 d8                	mov    %ebx,%eax
 83fe6ee:	89 c2                	mov    %eax,%edx
 83fe6f0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe6f3:	89 90 80 08 00 00    	mov    %edx,0x880(%eax)
 83fe6f9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe700:	e8 4b 5d 32 00       	call   8724450 <_Znwj>
 83fe705:	89 c3                	mov    %eax,%ebx
 83fe707:	89 d8                	mov    %ebx,%eax
 83fe709:	89 04 24             	mov    %eax,(%esp)
 83fe70c:	e8 e1 11 05 00       	call   844f8f2 <_ZN31DB_InsertRandomOptionItemInformC1Ev>
 83fe711:	89 d8                	mov    %ebx,%eax
 83fe713:	89 c2                	mov    %eax,%edx
 83fe715:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe718:	89 90 68 0a 00 00    	mov    %edx,0xa68(%eax)
 83fe71e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe725:	e8 26 5d 32 00       	call   8724450 <_Znwj>
 83fe72a:	89 c3                	mov    %eax,%ebx
 83fe72c:	89 d8                	mov    %ebx,%eax
 83fe72e:	89 04 24             	mov    %eax,(%esp)
 83fe731:	e8 d8 11 05 00       	call   844f90e <_ZN27DB_StatisticCeraShopGiftLogC1Ev>
 83fe736:	89 d8                	mov    %ebx,%eax
 83fe738:	89 c2                	mov    %eax,%edx
 83fe73a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe73d:	89 90 74 0a 00 00    	mov    %edx,0xa74(%eax)
 83fe743:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe74a:	e8 01 5d 32 00       	call   8724450 <_Znwj>
 83fe74f:	89 c3                	mov    %eax,%ebx
 83fe751:	89 d8                	mov    %ebx,%eax
 83fe753:	89 04 24             	mov    %eax,(%esp)
 83fe756:	e8 cf 11 05 00       	call   844f92a <_ZN17DB_GetUserRegdateC1Ev>
 83fe75b:	89 d8                	mov    %ebx,%eax
 83fe75d:	89 c2                	mov    %eax,%edx
 83fe75f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe762:	89 90 88 0a 00 00    	mov    %edx,0xa88(%eax)
 83fe768:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe76f:	e8 dc 5c 32 00       	call   8724450 <_Znwj>
 83fe774:	89 c3                	mov    %eax,%ebx
 83fe776:	89 d8                	mov    %ebx,%eax
 83fe778:	89 04 24             	mov    %eax,(%esp)
 83fe77b:	e8 c6 11 05 00       	call   844f946 <_ZN26DB_UpdateOntimeLastRecvIdxC1Ev>
 83fe780:	89 d8                	mov    %ebx,%eax
 83fe782:	89 c2                	mov    %eax,%edx
 83fe784:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe787:	89 90 60 0a 00 00    	mov    %edx,0xa60(%eax)
 83fe78d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe794:	e8 b7 5c 32 00       	call   8724450 <_Znwj>
 83fe799:	89 c3                	mov    %eax,%ebx
 83fe79b:	89 d8                	mov    %ebx,%eax
 83fe79d:	89 04 24             	mov    %eax,(%esp)
 83fe7a0:	e8 bd 11 05 00       	call   844f962 <_ZN28DB_InsertOnTimeRewardUserLogC1Ev>
 83fe7a5:	89 d8                	mov    %ebx,%eax
 83fe7a7:	89 c2                	mov    %eax,%edx
 83fe7a9:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe7ac:	89 90 64 0a 00 00    	mov    %edx,0xa64(%eax)
 83fe7b2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe7b9:	e8 92 5c 32 00       	call   8724450 <_Znwj>
 83fe7be:	89 c3                	mov    %eax,%ebx
 83fe7c0:	89 d8                	mov    %ebx,%eax
 83fe7c2:	89 04 24             	mov    %eax,(%esp)
 83fe7c5:	e8 b4 11 05 00       	call   844f97e <_ZN18DB_CheckCharacNameC1Ev>
 83fe7ca:	89 d8                	mov    %ebx,%eax
 83fe7cc:	89 c2                	mov    %eax,%edx
 83fe7ce:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe7d1:	89 90 8c 0a 00 00    	mov    %edx,0xa8c(%eax)
 83fe7d7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe7de:	e8 6d 5c 32 00       	call   8724450 <_Znwj>
 83fe7e3:	89 c3                	mov    %eax,%ebx
 83fe7e5:	89 d8                	mov    %ebx,%eax
 83fe7e7:	89 04 24             	mov    %eax,(%esp)
 83fe7ea:	e8 ab 11 05 00       	call   844f99a <_ZN32DB_MailBox_Req_System_Multi_MailC1Ev>
 83fe7ef:	89 d8                	mov    %ebx,%eax
 83fe7f1:	89 c2                	mov    %eax,%edx
 83fe7f3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe7f6:	89 90 94 0a 00 00    	mov    %edx,0xa94(%eax)
 83fe7fc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe803:	e8 48 5c 32 00       	call   8724450 <_Znwj>
 83fe808:	89 c3                	mov    %eax,%ebx
 83fe80a:	89 d8                	mov    %ebx,%eax
 83fe80c:	89 04 24             	mov    %eax,(%esp)
 83fe80f:	e8 a2 11 05 00       	call   844f9b6 <_ZN18DB_CheckSecuRewardC1Ev>
 83fe814:	89 d8                	mov    %ebx,%eax
 83fe816:	89 c2                	mov    %eax,%edx
 83fe818:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe81b:	89 90 b0 0a 00 00    	mov    %edx,0xab0(%eax)
 83fe821:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe828:	e8 23 5c 32 00       	call   8724450 <_Znwj>
 83fe82d:	89 c3                	mov    %eax,%ebx
 83fe82f:	89 d8                	mov    %ebx,%eax
 83fe831:	89 04 24             	mov    %eax,(%esp)
 83fe834:	e8 99 11 05 00       	call   844f9d2 <_ZN26DB_UpdateFatigueAttendanceC1Ev>
 83fe839:	89 d8                	mov    %ebx,%eax
 83fe83b:	89 c2                	mov    %eax,%edx
 83fe83d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe840:	89 90 b4 0a 00 00    	mov    %edx,0xab4(%eax)
 83fe846:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe84d:	e8 fe 5b 32 00       	call   8724450 <_Znwj>
 83fe852:	89 c3                	mov    %eax,%ebx
 83fe854:	89 d8                	mov    %ebx,%eax
 83fe856:	89 04 24             	mov    %eax,(%esp)
 83fe859:	e8 90 11 05 00       	call   844f9ee <_ZN27DB_UpdateInGameEventHistoryC1Ev>
 83fe85e:	89 d8                	mov    %ebx,%eax
 83fe860:	89 c2                	mov    %eax,%edx
 83fe862:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe865:	89 90 b8 0a 00 00    	mov    %edx,0xab8(%eax)
 83fe86b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe872:	e8 d9 5b 32 00       	call   8724450 <_Znwj>
 83fe877:	89 c3                	mov    %eax,%ebx
 83fe879:	89 d8                	mov    %ebx,%eax
 83fe87b:	89 04 24             	mov    %eax,(%esp)
 83fe87e:	e8 87 11 05 00       	call   844fa0a <_ZN26DB_UpdateInventoryCapacityC1Ev>
 83fe883:	89 d8                	mov    %ebx,%eax
 83fe885:	89 c2                	mov    %eax,%edx
 83fe887:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe88a:	89 90 bc 0a 00 00    	mov    %edx,0xabc(%eax)
 83fe890:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe897:	e8 b4 5b 32 00       	call   8724450 <_Znwj>
 83fe89c:	89 c3                	mov    %eax,%ebx
 83fe89e:	89 d8                	mov    %ebx,%eax
 83fe8a0:	89 04 24             	mov    %eax,(%esp)
 83fe8a3:	e8 7e 11 05 00       	call   844fa26 <_ZN25DB_UpdateAuraAvatarOptionC1Ev>
 83fe8a8:	89 d8                	mov    %ebx,%eax
 83fe8aa:	89 c2                	mov    %eax,%edx
 83fe8ac:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe8af:	89 90 c0 0a 00 00    	mov    %edx,0xac0(%eax)
 83fe8b5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe8bc:	e8 8f 5b 32 00       	call   8724450 <_Znwj>
 83fe8c1:	89 c3                	mov    %eax,%ebx
 83fe8c3:	89 d8                	mov    %ebx,%eax
 83fe8c5:	89 04 24             	mov    %eax,(%esp)
 83fe8c8:	e8 75 11 05 00       	call   844fa42 <_ZN24DB_InsertCeraItemHistoryC1Ev>
 83fe8cd:	89 d8                	mov    %ebx,%eax
 83fe8cf:	89 c2                	mov    %eax,%edx
 83fe8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe8d4:	89 90 c8 0a 00 00    	mov    %edx,0xac8(%eax)
 83fe8da:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe8e1:	e8 6a 5b 32 00       	call   8724450 <_Znwj>
 83fe8e6:	89 c3                	mov    %eax,%ebx
 83fe8e8:	89 d8                	mov    %ebx,%eax
 83fe8ea:	89 04 24             	mov    %eax,(%esp)
 83fe8ed:	e8 6c 11 05 00       	call   844fa5e <_ZN22DB_UpdateAvatarHistoryC1Ev>
 83fe8f2:	89 d8                	mov    %ebx,%eax
 83fe8f4:	89 c2                	mov    %eax,%edx
 83fe8f6:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe8f9:	89 90 c4 0a 00 00    	mov    %edx,0xac4(%eax)
 83fe8ff:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe906:	e8 45 5b 32 00       	call   8724450 <_Znwj>
 83fe90b:	89 c3                	mov    %eax,%ebx
 83fe90d:	89 d8                	mov    %ebx,%eax
 83fe90f:	89 04 24             	mov    %eax,(%esp)
 83fe912:	e8 63 11 05 00       	call   844fa7a <_ZN25DB_SaveItemDictionaryFlagC1Ev>
 83fe917:	89 d8                	mov    %ebx,%eax
 83fe919:	89 c2                	mov    %eax,%edx
 83fe91b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe91e:	89 90 cc 0a 00 00    	mov    %edx,0xacc(%eax)
 83fe924:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe92b:	e8 20 5b 32 00       	call   8724450 <_Znwj>
 83fe930:	89 c3                	mov    %eax,%ebx
 83fe932:	89 d8                	mov    %ebx,%eax
 83fe934:	89 04 24             	mov    %eax,(%esp)
 83fe937:	e8 5a 11 05 00       	call   844fa96 <_ZN20DB_SaveMercenaryDataC1Ev>
 83fe93c:	89 d8                	mov    %ebx,%eax
 83fe93e:	89 c2                	mov    %eax,%edx
 83fe940:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe943:	89 90 d0 0a 00 00    	mov    %edx,0xad0(%eax)
 83fe949:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe950:	e8 fb 5a 32 00       	call   8724450 <_Znwj>
 83fe955:	89 c3                	mov    %eax,%ebx
 83fe957:	89 d8                	mov    %ebx,%eax
 83fe959:	89 04 24             	mov    %eax,(%esp)
 83fe95c:	e8 51 11 05 00       	call   844fab2 <_ZN14DB_HadesPunishC1Ev>
 83fe961:	89 d8                	mov    %ebx,%eax
 83fe963:	89 c2                	mov    %eax,%edx
 83fe965:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe968:	89 90 dc 0a 00 00    	mov    %edx,0xadc(%eax)
 83fe96e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe975:	e8 d6 5a 32 00       	call   8724450 <_Znwj>
 83fe97a:	89 c3                	mov    %eax,%ebx
 83fe97c:	89 d8                	mov    %ebx,%eax
 83fe97e:	89 04 24             	mov    %eax,(%esp)
 83fe981:	e8 48 11 05 00       	call   844face <_ZN23DB_Check3rdPartyConcentC1Ev>
 83fe986:	89 d8                	mov    %ebx,%eax
 83fe988:	89 c2                	mov    %eax,%edx
 83fe98a:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe98d:	89 90 e0 0a 00 00    	mov    %edx,0xae0(%eax)
 83fe993:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe99a:	e8 b1 5a 32 00       	call   8724450 <_Znwj>
 83fe99f:	89 c3                	mov    %eax,%ebx
 83fe9a1:	89 d8                	mov    %ebx,%eax
 83fe9a3:	89 04 24             	mov    %eax,(%esp)
 83fe9a6:	e8 3f 11 05 00       	call   844faea <_ZN19DB_MercenaryLogInfoC1Ev>
 83fe9ab:	89 d8                	mov    %ebx,%eax
 83fe9ad:	89 c2                	mov    %eax,%edx
 83fe9af:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe9b2:	89 90 e4 0a 00 00    	mov    %edx,0xae4(%eax)
 83fe9b8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe9bf:	e8 8c 5a 32 00       	call   8724450 <_Znwj>
 83fe9c4:	89 c3                	mov    %eax,%ebx
 83fe9c6:	89 d8                	mov    %ebx,%eax
 83fe9c8:	89 04 24             	mov    %eax,(%esp)
 83fe9cb:	e8 36 11 05 00       	call   844fb06 <_ZN18DB_SelectCharacMidC1Ev>
 83fe9d0:	89 d8                	mov    %ebx,%eax
 83fe9d2:	89 c2                	mov    %eax,%edx
 83fe9d4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe9d7:	89 90 e8 0a 00 00    	mov    %edx,0xae8(%eax)
 83fe9dd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fe9e4:	e8 67 5a 32 00       	call   8724450 <_Znwj>
 83fe9e9:	89 c3                	mov    %eax,%ebx
 83fe9eb:	89 d8                	mov    %ebx,%eax
 83fe9ed:	89 04 24             	mov    %eax,(%esp)
 83fe9f0:	e8 2d 11 05 00       	call   844fb22 <_ZN21DB_AvatarOptionChangeC1Ev>
 83fe9f5:	89 d8                	mov    %ebx,%eax
 83fe9f7:	89 c2                	mov    %eax,%edx
 83fe9f9:	8b 45 08             	mov    0x8(%ebp),%eax
 83fe9fc:	89 90 10 0b 00 00    	mov    %edx,0xb10(%eax)
 83fea02:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fea09:	e8 42 5a 32 00       	call   8724450 <_Znwj>
 83fea0e:	89 c3                	mov    %eax,%ebx
 83fea10:	89 d8                	mov    %ebx,%eax
 83fea12:	89 04 24             	mov    %eax,(%esp)
 83fea15:	e8 24 11 05 00       	call   844fb3e <_ZN20DB_SaveObjectBringUpC1Ev>
 83fea1a:	89 d8                	mov    %ebx,%eax
 83fea1c:	89 c2                	mov    %eax,%edx
 83fea1e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fea21:	89 90 2c 0b 00 00    	mov    %edx,0xb2c(%eax)
 83fea27:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fea2e:	e8 1d 5a 32 00       	call   8724450 <_Znwj>
 83fea33:	89 c3                	mov    %eax,%ebx
 83fea35:	89 d8                	mov    %ebx,%eax
 83fea37:	89 04 24             	mov    %eax,(%esp)
 83fea3a:	e8 1b 11 05 00       	call   844fb5a <_ZN34DB_SaveGameOption_ChattingEmoticonC1Ev>
 83fea3f:	89 d8                	mov    %ebx,%eax
 83fea41:	89 c2                	mov    %eax,%edx
 83fea43:	8b 45 08             	mov    0x8(%ebp),%eax
 83fea46:	89 90 60 0b 00 00    	mov    %edx,0xb60(%eax)
 83fea4c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fea53:	e8 f8 59 32 00       	call   8724450 <_Znwj>
 83fea58:	89 c3                	mov    %eax,%ebx
 83fea5a:	89 d8                	mov    %ebx,%eax
 83fea5c:	89 04 24             	mov    %eax,(%esp)
 83fea5f:	e8 12 11 05 00       	call   844fb76 <_ZN24DB_UpdateBoosterGageDataC1Ev>
 83fea64:	89 d8                	mov    %ebx,%eax
 83fea66:	89 c2                	mov    %eax,%edx
 83fea68:	8b 45 08             	mov    0x8(%ebp),%eax
 83fea6b:	89 90 64 0b 00 00    	mov    %edx,0xb64(%eax)
 83fea71:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fea78:	e8 d3 59 32 00       	call   8724450 <_Znwj>
 83fea7d:	89 c3                	mov    %eax,%ebx
 83fea7f:	89 d8                	mov    %ebx,%eax
 83fea81:	89 04 24             	mov    %eax,(%esp)
 83fea84:	e8 09 11 05 00       	call   844fb92 <_ZN29CLocalChina_DB_BreakAwayResetC1Ev>
 83fea89:	89 d8                	mov    %ebx,%eax
 83fea8b:	89 c2                	mov    %eax,%edx
 83fea8d:	8b 45 08             	mov    0x8(%ebp),%eax
 83fea90:	89 90 78 0b 00 00    	mov    %edx,0xb78(%eax)
 83fea96:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fea9d:	e8 ae 59 32 00       	call   8724450 <_Znwj>
 83feaa2:	89 c3                	mov    %eax,%ebx
 83feaa4:	89 d8                	mov    %ebx,%eax
 83feaa6:	89 04 24             	mov    %eax,(%esp)
 83feaa9:	e8 00 11 05 00       	call   844fbae <_ZN32CLocalChina_DB_LastDay_BreakAwayC1Ev>
 83feaae:	89 d8                	mov    %ebx,%eax
 83feab0:	89 c2                	mov    %eax,%edx
 83feab2:	8b 45 08             	mov    0x8(%ebp),%eax
 83feab5:	89 90 7c 0b 00 00    	mov    %edx,0xb7c(%eax)
 83feabb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83feac2:	e8 89 59 32 00       	call   8724450 <_Znwj>
 83feac7:	89 c3                	mov    %eax,%ebx
 83feac9:	89 d8                	mov    %ebx,%eax
 83feacb:	89 04 24             	mov    %eax,(%esp)
 83feace:	e8 f7 10 05 00       	call   844fbca <_ZN33CLocalGlobal_DB_STATICS_BOSSTOWERC1Ev>
 83fead3:	89 d8                	mov    %ebx,%eax
 83fead5:	89 c2                	mov    %eax,%edx
 83fead7:	8b 45 08             	mov    0x8(%ebp),%eax
 83feada:	89 90 84 0b 00 00    	mov    %edx,0xb84(%eax)
 83feae0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83feae7:	e8 64 59 32 00       	call   8724450 <_Znwj>
 83feaec:	89 c3                	mov    %eax,%ebx
 83feaee:	89 d8                	mov    %ebx,%eax
 83feaf0:	89 04 24             	mov    %eax,(%esp)
 83feaf3:	e8 ee 10 05 00       	call   844fbe6 <_ZN30DB_UpdateCeraShopPurchaseCountC1Ev>
 83feaf8:	89 d8                	mov    %ebx,%eax
 83feafa:	89 c2                	mov    %eax,%edx
 83feafc:	8b 45 08             	mov    0x8(%ebp),%eax
 83feaff:	89 90 68 0b 00 00    	mov    %edx,0xb68(%eax)
 83feb05:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 83feb0c:	e8 3f 59 32 00       	call   8724450 <_Znwj>
 83feb11:	89 c3                	mov    %eax,%ebx
 83feb13:	89 d8                	mov    %ebx,%eax
 83feb15:	89 04 24             	mov    %eax,(%esp)
 83feb18:	e8 1b d1 04 00       	call   844bc38 <_ZN25DB_AradDatabaseDispatcherC1Ev>
 83feb1d:	eb 15                	jmp    83feb34 <_ZN6DBTask16RegistDispatcherEv+0x2b46>
 83feb1f:	89 d6                	mov    %edx,%esi
 83feb21:	89 c7                	mov    %eax,%edi
 83feb23:	89 1c 24             	mov    %ebx,(%esp)
 83feb26:	e8 c5 59 32 00       	call   87244f0 <_ZdlPv>
 83feb2b:	89 f8                	mov    %edi,%eax
 83feb2d:	89 f2                	mov    %esi,%edx
 83feb2f:	e9 a9 05 00 00       	jmp    83ff0dd <_ZN6DBTask16RegistDispatcherEv+0x30ef>
 83feb34:	89 d8                	mov    %ebx,%eax
 83feb36:	89 c2                	mov    %eax,%edx
 83feb38:	8b 45 08             	mov    0x8(%ebp),%eax
 83feb3b:	89 90 74 0b 00 00    	mov    %edx,0xb74(%eax)
 83feb41:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83feb48:	e8 03 59 32 00       	call   8724450 <_Znwj>
 83feb4d:	89 c3                	mov    %eax,%ebx
 83feb4f:	89 d8                	mov    %ebx,%eax
 83feb51:	89 04 24             	mov    %eax,(%esp)
 83feb54:	e8 a9 10 05 00       	call   844fc02 <_ZN18DB_LoadPuUserCheckC1Ev>
 83feb59:	89 d8                	mov    %ebx,%eax
 83feb5b:	89 c2                	mov    %eax,%edx
 83feb5d:	8b 45 08             	mov    0x8(%ebp),%eax
 83feb60:	89 90 88 0b 00 00    	mov    %edx,0xb88(%eax)
 83feb66:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83feb6d:	e8 de 58 32 00       	call   8724450 <_Znwj>
 83feb72:	89 c3                	mov    %eax,%ebx
 83feb74:	89 d8                	mov    %ebx,%eax
 83feb76:	89 04 24             	mov    %eax,(%esp)
 83feb79:	e8 a0 10 05 00       	call   844fc1e <_ZN18DB_SavePuUserCheckC1Ev>
 83feb7e:	89 d8                	mov    %ebx,%eax
 83feb80:	89 c2                	mov    %eax,%edx
 83feb82:	8b 45 08             	mov    0x8(%ebp),%eax
 83feb85:	89 90 8c 0b 00 00    	mov    %edx,0xb8c(%eax)
 83feb8b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83feb92:	e8 b9 58 32 00       	call   8724450 <_Znwj>
 83feb97:	89 c3                	mov    %eax,%ebx
 83feb99:	89 d8                	mov    %ebx,%eax
 83feb9b:	89 04 24             	mov    %eax,(%esp)
 83feb9e:	e8 97 10 05 00       	call   844fc3a <_ZN12advancealtar24DB_StatisticAdvanceAltarC1Ev>
 83feba3:	89 d8                	mov    %ebx,%eax
 83feba5:	89 c2                	mov    %eax,%edx
 83feba7:	8b 45 08             	mov    0x8(%ebp),%eax
 83febaa:	89 90 f0 0c 00 00    	mov    %edx,0xcf0(%eax)
 83febb0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83febb7:	e8 94 58 32 00       	call   8724450 <_Znwj>
 83febbc:	89 c3                	mov    %eax,%ebx
 83febbe:	89 d8                	mov    %ebx,%eax
 83febc0:	89 04 24             	mov    %eax,(%esp)
 83febc3:	e8 8e 10 05 00       	call   844fc56 <_ZN17DB_CheckAddFriendC1Ev>
 83febc8:	89 d8                	mov    %ebx,%eax
 83febca:	89 c2                	mov    %eax,%edx
 83febcc:	8b 45 08             	mov    0x8(%ebp),%eax
 83febcf:	89 90 fc 0c 00 00    	mov    %edx,0xcfc(%eax)
 83febd5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83febdc:	e8 6f 58 32 00       	call   8724450 <_Znwj>
 83febe1:	89 c3                	mov    %eax,%ebx
 83febe3:	89 d8                	mov    %ebx,%eax
 83febe5:	89 04 24             	mov    %eax,(%esp)
 83febe8:	e8 85 10 05 00       	call   844fc72 <_ZN19DB_SaveInformNoticeC1Ev>
 83febed:	89 d8                	mov    %ebx,%eax
 83febef:	89 c2                	mov    %eax,%edx
 83febf1:	8b 45 08             	mov    0x8(%ebp),%eax
 83febf4:	89 90 d8 0b 00 00    	mov    %edx,0xbd8(%eax)
 83febfa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fec01:	e8 4a 58 32 00       	call   8724450 <_Znwj>
 83fec06:	89 c3                	mov    %eax,%ebx
 83fec08:	89 d8                	mov    %ebx,%eax
 83fec0a:	89 04 24             	mov    %eax,(%esp)
 83fec0d:	e8 7c 10 05 00       	call   844fc8e <_ZN28DB_NoticeIngameAdvertisementC1Ev>
 83fec12:	89 d8                	mov    %ebx,%eax
 83fec14:	89 c2                	mov    %eax,%edx
 83fec16:	8b 45 08             	mov    0x8(%ebp),%eax
 83fec19:	89 90 e4 0b 00 00    	mov    %edx,0xbe4(%eax)
 83fec1f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fec26:	e8 25 58 32 00       	call   8724450 <_Znwj>
 83fec2b:	89 c3                	mov    %eax,%ebx
 83fec2d:	89 d8                	mov    %ebx,%eax
 83fec2f:	89 04 24             	mov    %eax,(%esp)
 83fec32:	e8 73 10 05 00       	call   844fcaa <_ZN25DB_RequestCharacSkillInfoC1Ev>
 83fec37:	89 d8                	mov    %ebx,%eax
 83fec39:	89 c2                	mov    %eax,%edx
 83fec3b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fec3e:	89 90 f8 0b 00 00    	mov    %edx,0xbf8(%eax)
 83fec44:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fec4b:	e8 00 58 32 00       	call   8724450 <_Znwj>
 83fec50:	89 c3                	mov    %eax,%ebx
 83fec52:	89 d8                	mov    %ebx,%eax
 83fec54:	89 04 24             	mov    %eax,(%esp)
 83fec57:	e8 6a 10 05 00       	call   844fcc6 <_ZN23DB_RequestTagCharacInfoC1Ev>
 83fec5c:	89 d8                	mov    %ebx,%eax
 83fec5e:	89 c2                	mov    %eax,%edx
 83fec60:	8b 45 08             	mov    0x8(%ebp),%eax
 83fec63:	89 90 fc 0b 00 00    	mov    %edx,0xbfc(%eax)
 83fec69:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fec70:	e8 db 57 32 00       	call   8724450 <_Znwj>
 83fec75:	89 c3                	mov    %eax,%ebx
 83fec77:	89 d8                	mov    %ebx,%eax
 83fec79:	89 04 24             	mov    %eax,(%esp)
 83fec7c:	e8 61 10 05 00       	call   844fce2 <_ZN26DB_SavePcRoomPlayTimeEventC1Ev>
 83fec81:	89 d8                	mov    %ebx,%eax
 83fec83:	89 c2                	mov    %eax,%edx
 83fec85:	8b 45 08             	mov    0x8(%ebp),%eax
 83fec88:	89 90 00 0c 00 00    	mov    %edx,0xc00(%eax)
 83fec8e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fec95:	e8 b6 57 32 00       	call   8724450 <_Znwj>
 83fec9a:	89 c3                	mov    %eax,%ebx
 83fec9c:	89 d8                	mov    %ebx,%eax
 83fec9e:	89 04 24             	mov    %eax,(%esp)
 83feca1:	e8 58 10 05 00       	call   844fcfe <_ZN20DB_SaveBestClearTimeC1Ev>
 83feca6:	89 d8                	mov    %ebx,%eax
 83feca8:	89 c2                	mov    %eax,%edx
 83fecaa:	8b 45 08             	mov    0x8(%ebp),%eax
 83fecad:	89 90 04 0c 00 00    	mov    %edx,0xc04(%eax)
 83fecb3:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fecba:	e8 91 57 32 00       	call   8724450 <_Znwj>
 83fecbf:	89 c3                	mov    %eax,%ebx
 83fecc1:	89 d8                	mov    %ebx,%eax
 83fecc3:	89 04 24             	mov    %eax,(%esp)
 83fecc6:	e8 4f 10 05 00       	call   844fd1a <_ZN18DB_AuctionSubMoneyC1Ev>
 83feccb:	89 d8                	mov    %ebx,%eax
 83feccd:	89 c2                	mov    %eax,%edx
 83feccf:	8b 45 08             	mov    0x8(%ebp),%eax
 83fecd2:	89 90 28 0c 00 00    	mov    %edx,0xc28(%eax)
 83fecd8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fecdf:	e8 6c 57 32 00       	call   8724450 <_Znwj>
 83fece4:	89 c3                	mov    %eax,%ebx
 83fece6:	89 d8                	mov    %ebx,%eax
 83fece8:	89 04 24             	mov    %eax,(%esp)
 83feceb:	e8 46 10 05 00       	call   844fd36 <_ZN29DB_UpdateBlueMarbleEnterCountC1Ev>
 83fecf0:	89 d8                	mov    %ebx,%eax
 83fecf2:	89 c2                	mov    %eax,%edx
 83fecf4:	8b 45 08             	mov    0x8(%ebp),%eax
 83fecf7:	89 90 34 0c 00 00    	mov    %edx,0xc34(%eax)
 83fecfd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fed04:	e8 47 57 32 00       	call   8724450 <_Znwj>
 83fed09:	89 c3                	mov    %eax,%ebx
 83fed0b:	89 d8                	mov    %ebx,%eax
 83fed0d:	89 04 24             	mov    %eax,(%esp)
 83fed10:	e8 3d 10 05 00       	call   844fd52 <_ZN24DB_InsertAttendanceEventC1Ev>
 83fed15:	89 d8                	mov    %ebx,%eax
 83fed17:	89 c2                	mov    %eax,%edx
 83fed19:	8b 45 08             	mov    0x8(%ebp),%eax
 83fed1c:	89 90 3c 0c 00 00    	mov    %edx,0xc3c(%eax)
 83fed22:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fed29:	e8 22 57 32 00       	call   8724450 <_Znwj>
 83fed2e:	89 c3                	mov    %eax,%ebx
 83fed30:	89 d8                	mov    %ebx,%eax
 83fed32:	89 04 24             	mov    %eax,(%esp)
 83fed35:	e8 34 10 05 00       	call   844fd6e <_ZN19DB_UpdateBingoEventC1Ev>
 83fed3a:	89 d8                	mov    %ebx,%eax
 83fed3c:	89 c2                	mov    %eax,%edx
 83fed3e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fed41:	89 90 80 0c 00 00    	mov    %edx,0xc80(%eax)
 83fed47:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fed4e:	e8 fd 56 32 00       	call   8724450 <_Znwj>
 83fed53:	89 c3                	mov    %eax,%ebx
 83fed55:	89 d8                	mov    %ebx,%eax
 83fed57:	89 04 24             	mov    %eax,(%esp)
 83fed5a:	e8 2b 10 05 00       	call   844fd8a <_ZN24DB_EventSaveGrowthWeaponC1Ev>
 83fed5f:	89 d8                	mov    %ebx,%eax
 83fed61:	89 c2                	mov    %eax,%edx
 83fed63:	8b 45 08             	mov    0x8(%ebp),%eax
 83fed66:	89 90 50 0c 00 00    	mov    %edx,0xc50(%eax)
 83fed6c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fed73:	e8 d8 56 32 00       	call   8724450 <_Znwj>
 83fed78:	89 c3                	mov    %eax,%ebx
 83fed7a:	89 d8                	mov    %ebx,%eax
 83fed7c:	89 04 24             	mov    %eax,(%esp)
 83fed7f:	e8 22 10 05 00       	call   844fda6 <_ZN32DB_EventUpdateGrowthWeaponCharacC1Ev>
 83fed84:	89 d8                	mov    %ebx,%eax
 83fed86:	89 c2                	mov    %eax,%edx
 83fed88:	8b 45 08             	mov    0x8(%ebp),%eax
 83fed8b:	89 90 54 0c 00 00    	mov    %edx,0xc54(%eax)
 83fed91:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fed98:	e8 b3 56 32 00       	call   8724450 <_Znwj>
 83fed9d:	89 c3                	mov    %eax,%ebx
 83fed9f:	89 d8                	mov    %ebx,%eax
 83feda1:	89 04 24             	mov    %eax,(%esp)
 83feda4:	e8 19 10 05 00       	call   844fdc2 <_ZN35DB_EventUpdateGrowthWeaponTimepieceC1Ev>
 83feda9:	89 d8                	mov    %ebx,%eax
 83fedab:	89 c2                	mov    %eax,%edx
 83fedad:	8b 45 08             	mov    0x8(%ebp),%eax
 83fedb0:	89 90 58 0c 00 00    	mov    %edx,0xc58(%eax)
 83fedb6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fedbd:	e8 8e 56 32 00       	call   8724450 <_Znwj>
 83fedc2:	89 c3                	mov    %eax,%ebx
 83fedc4:	89 d8                	mov    %ebx,%eax
 83fedc6:	89 04 24             	mov    %eax,(%esp)
 83fedc9:	e8 10 10 05 00       	call   844fdde <_ZN25DB_EventGrowthWeaponResetC1Ev>
 83fedce:	89 d8                	mov    %ebx,%eax
 83fedd0:	89 c2                	mov    %eax,%edx
 83fedd2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fedd5:	89 90 5c 0c 00 00    	mov    %edx,0xc5c(%eax)
 83feddb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fede2:	e8 69 56 32 00       	call   8724450 <_Znwj>
 83fede7:	89 c3                	mov    %eax,%ebx
 83fede9:	89 d8                	mov    %ebx,%eax
 83fedeb:	89 04 24             	mov    %eax,(%esp)
 83fedee:	e8 07 10 05 00       	call   844fdfa <_ZN28DB_EventSaveGiveGrowCreatureC1Ev>
 83fedf3:	89 d8                	mov    %ebx,%eax
 83fedf5:	89 c2                	mov    %eax,%edx
 83fedf7:	8b 45 08             	mov    0x8(%ebp),%eax
 83fedfa:	89 90 60 0c 00 00    	mov    %edx,0xc60(%eax)
 83fee00:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fee07:	e8 44 56 32 00       	call   8724450 <_Znwj>
 83fee0c:	89 c3                	mov    %eax,%ebx
 83fee0e:	89 d8                	mov    %ebx,%eax
 83fee10:	89 04 24             	mov    %eax,(%esp)
 83fee13:	e8 fe 0f 05 00       	call   844fe16 <_ZN30DB_EventUpdateGiveGrowCreatureC1Ev>
 83fee18:	89 d8                	mov    %ebx,%eax
 83fee1a:	89 c2                	mov    %eax,%edx
 83fee1c:	8b 45 08             	mov    0x8(%ebp),%eax
 83fee1f:	89 90 64 0c 00 00    	mov    %edx,0xc64(%eax)
 83fee25:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fee2c:	e8 1f 56 32 00       	call   8724450 <_Znwj>
 83fee31:	89 c3                	mov    %eax,%ebx
 83fee33:	89 d8                	mov    %ebx,%eax
 83fee35:	89 04 24             	mov    %eax,(%esp)
 83fee38:	e8 f5 0f 05 00       	call   844fe32 <_ZN39DB_EventAccountCharacterLevelUpOnceGiftC1Ev>
 83fee3d:	89 d8                	mov    %ebx,%eax
 83fee3f:	89 c2                	mov    %eax,%edx
 83fee41:	8b 45 08             	mov    0x8(%ebp),%eax
 83fee44:	89 90 68 0c 00 00    	mov    %edx,0xc68(%eax)
 83fee4a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fee51:	e8 fa 55 32 00       	call   8724450 <_Znwj>
 83fee56:	89 c3                	mov    %eax,%ebx
 83fee58:	89 d8                	mov    %ebx,%eax
 83fee5a:	89 04 24             	mov    %eax,(%esp)
 83fee5d:	e8 ec 0f 05 00       	call   844fe4e <_ZN20DB_AvatarColorChangeC1Ev>
 83fee62:	89 d8                	mov    %ebx,%eax
 83fee64:	89 c2                	mov    %eax,%edx
 83fee66:	8b 45 08             	mov    0x8(%ebp),%eax
 83fee69:	89 90 6c 0c 00 00    	mov    %edx,0xc6c(%eax)
 83fee6f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fee76:	e8 d5 55 32 00       	call   8724450 <_Znwj>
 83fee7b:	89 c3                	mov    %eax,%ebx
 83fee7d:	89 d8                	mov    %ebx,%eax
 83fee7f:	89 04 24             	mov    %eax,(%esp)
 83fee82:	e8 e3 0f 05 00       	call   844fe6a <_ZN20DB_TestTradeRestrictC1Ev>
 83fee87:	89 d8                	mov    %ebx,%eax
 83fee89:	89 c2                	mov    %eax,%edx
 83fee8b:	8b 45 08             	mov    0x8(%ebp),%eax
 83fee8e:	89 90 74 0c 00 00    	mov    %edx,0xc74(%eax)
 83fee94:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fee9b:	e8 b0 55 32 00       	call   8724450 <_Znwj>
 83feea0:	89 c3                	mov    %eax,%ebx
 83feea2:	89 d8                	mov    %ebx,%eax
 83feea4:	89 04 24             	mov    %eax,(%esp)
 83feea7:	e8 da 0f 05 00       	call   844fe86 <_ZN19DB_UpdateComboSkillC1Ev>
 83feeac:	89 d8                	mov    %ebx,%eax
 83feeae:	89 c2                	mov    %eax,%edx
 83feeb0:	8b 45 08             	mov    0x8(%ebp),%eax
 83feeb3:	89 90 78 0c 00 00    	mov    %edx,0xc78(%eax)
 83feeb9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83feec0:	e8 8b 55 32 00       	call   8724450 <_Znwj>
 83feec5:	89 c3                	mov    %eax,%ebx
 83feec7:	89 d8                	mov    %ebx,%eax
 83feec9:	89 04 24             	mov    %eax,(%esp)
 83feecc:	e8 d1 0f 05 00       	call   844fea2 <_ZN25DB_SaveCharacInformNoticeC1Ev>
 83feed1:	89 d8                	mov    %ebx,%eax
 83feed3:	89 c2                	mov    %eax,%edx
 83feed5:	8b 45 08             	mov    0x8(%ebp),%eax
 83feed8:	89 90 48 0c 00 00    	mov    %edx,0xc48(%eax)
 83feede:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83feee5:	e8 66 55 32 00       	call   8724450 <_Znwj>
 83feeea:	89 c3                	mov    %eax,%ebx
 83feeec:	89 d8                	mov    %ebx,%eax
 83feeee:	89 04 24             	mov    %eax,(%esp)
 83feef1:	e8 c8 0f 05 00       	call   844febe <_ZN31DB_UpdateSeriaRoomAnimationDecoC1Ev>
 83feef6:	89 d8                	mov    %ebx,%eax
 83feef8:	89 c2                	mov    %eax,%edx
 83feefa:	8b 45 08             	mov    0x8(%ebp),%eax
 83feefd:	89 90 7c 0c 00 00    	mov    %edx,0xc7c(%eax)
 83fef03:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fef0a:	e8 41 55 32 00       	call   8724450 <_Znwj>
 83fef0f:	89 c3                	mov    %eax,%ebx
 83fef11:	89 d8                	mov    %ebx,%eax
 83fef13:	89 04 24             	mov    %eax,(%esp)
 83fef16:	e8 bf 0f 05 00       	call   844feda <_ZN25DB_LoadCharacHotKeyOptionC1Ev>
 83fef1b:	89 d8                	mov    %ebx,%eax
 83fef1d:	89 c2                	mov    %eax,%edx
 83fef1f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fef22:	89 90 84 0c 00 00    	mov    %edx,0xc84(%eax)
 83fef28:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fef2f:	e8 1c 55 32 00       	call   8724450 <_Znwj>
 83fef34:	89 c3                	mov    %eax,%ebx
 83fef36:	89 d8                	mov    %ebx,%eax
 83fef38:	89 04 24             	mov    %eax,(%esp)
 83fef3b:	e8 b6 0f 05 00       	call   844fef6 <_ZN25DB_LogIngameAdvertisementC1Ev>
 83fef40:	89 d8                	mov    %ebx,%eax
 83fef42:	89 c2                	mov    %eax,%edx
 83fef44:	8b 45 08             	mov    0x8(%ebp),%eax
 83fef47:	89 90 b4 0c 00 00    	mov    %edx,0xcb4(%eax)
 83fef4d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fef54:	e8 f7 54 32 00       	call   8724450 <_Znwj>
 83fef59:	89 c3                	mov    %eax,%ebx
 83fef5b:	89 d8                	mov    %ebx,%eax
 83fef5d:	89 04 24             	mov    %eax,(%esp)
 83fef60:	e8 ad 0f 05 00       	call   844ff12 <_ZN19DB_LogCeraShopErrorC1Ev>
 83fef65:	89 d8                	mov    %ebx,%eax
 83fef67:	89 c2                	mov    %eax,%edx
 83fef69:	8b 45 08             	mov    0x8(%ebp),%eax
 83fef6c:	89 90 bc 0c 00 00    	mov    %edx,0xcbc(%eax)
 83fef72:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fef79:	e8 d2 54 32 00       	call   8724450 <_Znwj>
 83fef7e:	89 c3                	mov    %eax,%ebx
 83fef80:	89 d8                	mov    %ebx,%eax
 83fef82:	89 04 24             	mov    %eax,(%esp)
 83fef85:	e8 a4 0f 05 00       	call   844ff2e <_ZN29DB_GetPremiumSelectedCubeInfoC1Ev>
 83fef8a:	89 d8                	mov    %ebx,%eax
 83fef8c:	89 c2                	mov    %eax,%edx
 83fef8e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fef91:	89 90 cc 0c 00 00    	mov    %edx,0xccc(%eax)
 83fef97:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fef9e:	e8 ad 54 32 00       	call   8724450 <_Znwj>
 83fefa3:	89 c3                	mov    %eax,%ebx
 83fefa5:	89 d8                	mov    %ebx,%eax
 83fefa7:	89 04 24             	mov    %eax,(%esp)
 83fefaa:	e8 9b 0f 05 00       	call   844ff4a <_ZN22DB_InsertEventStageLogC1Ev>
 83fefaf:	89 d8                	mov    %ebx,%eax
 83fefb1:	89 c2                	mov    %eax,%edx
 83fefb3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fefb6:	89 90 d0 0c 00 00    	mov    %edx,0xcd0(%eax)
 83fefbc:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 83fefc3:	e8 88 54 32 00       	call   8724450 <_Znwj>
 83fefc8:	89 c3                	mov    %eax,%ebx
 83fefca:	89 d8                	mov    %ebx,%eax
 83fefcc:	89 04 24             	mov    %eax,(%esp)
 83fefcf:	e8 00 da 04 00       	call   844c9d4 <_ZN19DB_DispatcherTaiwanC1Ev>
 83fefd4:	eb 15                	jmp    83fefeb <_ZN6DBTask16RegistDispatcherEv+0x2ffd>
 83fefd6:	89 d6                	mov    %edx,%esi
 83fefd8:	89 c7                	mov    %eax,%edi
 83fefda:	89 1c 24             	mov    %ebx,(%esp)
 83fefdd:	e8 0e 55 32 00       	call   87244f0 <_ZdlPv>
 83fefe2:	89 f8                	mov    %edi,%eax
 83fefe4:	89 f2                	mov    %esi,%edx
 83fefe6:	e9 f2 00 00 00       	jmp    83ff0dd <_ZN6DBTask16RegistDispatcherEv+0x30ef>
 83fefeb:	89 d8                	mov    %ebx,%eax
 83fefed:	89 c2                	mov    %eax,%edx
 83fefef:	8b 45 08             	mov    0x8(%ebp),%eax
 83feff2:	89 90 3c 0d 00 00    	mov    %edx,0xd3c(%eax)
 83feff8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fefff:	e8 4c 54 32 00       	call   8724450 <_Znwj>
 83ff004:	89 c3                	mov    %eax,%ebx
 83ff006:	89 d8                	mov    %ebx,%eax
 83ff008:	89 04 24             	mov    %eax,(%esp)
 83ff00b:	e8 56 0f 05 00       	call   844ff66 <_ZN30DB_SaveCerashopAddRestrictTypeC1Ev>
 83ff010:	89 d8                	mov    %ebx,%eax
 83ff012:	89 c2                	mov    %eax,%edx
 83ff014:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff017:	89 90 04 0d 00 00    	mov    %edx,0xd04(%eax)
 83ff01d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83ff024:	e8 27 54 32 00       	call   8724450 <_Znwj>
 83ff029:	89 c3                	mov    %eax,%ebx
 83ff02b:	89 d8                	mov    %ebx,%eax
 83ff02d:	89 04 24             	mov    %eax,(%esp)
 83ff030:	e8 4d 0f 05 00       	call   844ff82 <_ZN30DB_LoadCerashopAddRestrictTypeC1Ev>
 83ff035:	89 d8                	mov    %ebx,%eax
 83ff037:	89 c2                	mov    %eax,%edx
 83ff039:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff03c:	89 90 08 0d 00 00    	mov    %edx,0xd08(%eax)
 83ff042:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83ff049:	e8 02 54 32 00       	call   8724450 <_Znwj>
 83ff04e:	89 c3                	mov    %eax,%ebx
 83ff050:	89 d8                	mov    %ebx,%eax
 83ff052:	89 04 24             	mov    %eax,(%esp)
 83ff055:	e8 44 0f 05 00       	call   844ff9e <_ZN35DB_InsertAccountFirstLoginDailyFlagC1Ev>
 83ff05a:	89 d8                	mov    %ebx,%eax
 83ff05c:	89 c2                	mov    %eax,%edx
 83ff05e:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff061:	89 90 0c 0d 00 00    	mov    %edx,0xd0c(%eax)
 83ff067:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83ff06e:	e8 dd 53 32 00       	call   8724450 <_Znwj>
 83ff073:	89 c3                	mov    %eax,%ebx
 83ff075:	89 d8                	mov    %ebx,%eax
 83ff077:	89 04 24             	mov    %eax,(%esp)
 83ff07a:	e8 3b 0f 05 00       	call   844ffba <_ZN26DB_SaveEventLevelupSupportC1Ev>
 83ff07f:	89 d8                	mov    %ebx,%eax
 83ff081:	89 c2                	mov    %eax,%edx
 83ff083:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff086:	89 90 40 0d 00 00    	mov    %edx,0xd40(%eax)
 83ff08c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83ff093:	e8 b8 53 32 00       	call   8724450 <_Znwj>
 83ff098:	89 c3                	mov    %eax,%ebx
 83ff09a:	89 d8                	mov    %ebx,%eax
 83ff09c:	89 04 24             	mov    %eax,(%esp)
 83ff09f:	e8 32 0f 05 00       	call   844ffd6 <_ZN26DB_LoadEventLevelupSupportC1Ev>
 83ff0a4:	89 d8                	mov    %ebx,%eax
 83ff0a6:	89 c2                	mov    %eax,%edx
 83ff0a8:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff0ab:	89 90 44 0d 00 00    	mov    %edx,0xd44(%eax)
 83ff0b1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83ff0b8:	e8 93 53 32 00       	call   8724450 <_Znwj>
 83ff0bd:	89 c3                	mov    %eax,%ebx
 83ff0bf:	89 d8                	mov    %ebx,%eax
 83ff0c1:	89 04 24             	mov    %eax,(%esp)
 83ff0c4:	e8 29 0f 05 00       	call   844fff2 <_ZN23DB_SelectAllowProxyUserC1Ev>
 83ff0c9:	89 d8                	mov    %ebx,%eax
 83ff0cb:	89 c2                	mov    %eax,%edx
 83ff0cd:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff0d0:	89 90 4c 0d 00 00    	mov    %edx,0xd4c(%eax)
 83ff0d6:	bb 01 00 00 00       	mov    $0x1,%ebx
 83ff0db:	eb 6f                	jmp    83ff14c <_ZN6DBTask16RegistDispatcherEv+0x315e>
 83ff0dd:	89 04 24             	mov    %eax,(%esp)
 83ff0e0:	e8 fb 6b 32 00       	call   8725ce0 <__cxa_begin_catch>
 83ff0e5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83ff0ec:	00 
 83ff0ed:	c7 44 24 08 b2 08 00 	movl   $0x8b2,0x8(%esp)
 83ff0f4:	00 
 83ff0f5:	c7 44 24 04 e0 da c5 	movl   $0x8c5dae0,0x4(%esp)
 83ff0fc:	08 
 83ff0fd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83ff100:	89 04 24             	mov    %eax,(%esp)
 83ff103:	e8 10 06 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83ff108:	c7 44 24 0c b2 08 00 	movl   $0x8b2,0xc(%esp)
 83ff10f:	00 
 83ff110:	c7 44 24 08 e0 da c5 	movl   $0x8c5dae0,0x8(%esp)
 83ff117:	08 
 83ff118:	c7 44 24 04 21 67 c3 	movl   $0x8c36721,0x4(%esp)
 83ff11f:	08 
 83ff120:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83ff123:	89 04 24             	mov    %eax,(%esp)
 83ff126:	e8 5d 06 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83ff12b:	bb 00 00 00 00       	mov    $0x0,%ebx
 83ff130:	e8 fb 6a 32 00       	call   8725c30 <__cxa_end_catch>
 83ff135:	eb 15                	jmp    83ff14c <_ZN6DBTask16RegistDispatcherEv+0x315e>
 83ff137:	89 d3                	mov    %edx,%ebx
 83ff139:	89 c6                	mov    %eax,%esi
 83ff13b:	e8 f0 6a 32 00       	call   8725c30 <__cxa_end_catch>
 83ff140:	89 f0                	mov    %esi,%eax
 83ff142:	89 da                	mov    %ebx,%edx
 83ff144:	89 04 24             	mov    %eax,(%esp)
 83ff147:	e8 04 46 6e 00       	call   8ae3750 <_Unwind_Resume>
 83ff14c:	89 d8                	mov    %ebx,%eax
 83ff14e:	83 c4 3c             	add    $0x3c,%esp
 83ff151:	5b                   	pop    %ebx
 83ff152:	5e                   	pop    %esi
 83ff153:	5f                   	pop    %edi
 83ff154:	5d                   	pop    %ebp
 83ff155:	c3                   	ret

```

```c
// DBTask::RegistDispatcher @ 0x83fbfee

/* DBTask::RegistDispatcher() */

undefined4 __thiscall DBTask::RegistDispatcher(DBTask *this)

{
  DB_Login *this_00;
  DB_CreateCharac *this_01;
  DB_DeleteCharac *this_02;
  DB_UpdateCharacView *this_03;
  DB_LoadCharac *this_04;
  DB_LoadInventory *this_05;
  DB_LoadQuest *this_06;
  DB_LoadActionPoint *this_07;
  DB_UpdateActionPoint *this_08;
  DB_LoadRewardMedal *this_09;
  DB_UpdateRewardMedal *this_10;
  DB_LoadEtc *this_11;
  DB_SaveCharac *this_12;
  DB_SaveInven *this_13;
  DB_SaveSkill *this_14;
  DB_SavePvp *this_15;
  DB_UpdateQuest *this_16;
  DB_UpdateGrowType *this_17;
  DB_UpdateLogin *this_18;
  DB_UpdateLogout *this_19;
  DB_UpdateChannel *this_20;
  DB_DeleteChannel *this_21;
  DB_InsertChannel *this_22;
  DB_AvatarItemInsert *this_23;
  DB_AvatarItemDel *this_24;
  DB_AvatarItemMove *this_25;
  DB_AvatarExtendPeriod *this_26;
  DB_AvatarChangeOwner *this_27;
  DB_AvatarChangeStat *this_28;
  DB_SaveRank *this_29;
  DB_InsertTicket *this_30;
  DB_LoadTicket *this_31;
  DB_LoadDungeonClear *this_32;
  DB_SaveDungeonClear *this_33;
  DB_TerminateServer *this_34;
  DB_StatBreakJar *this_35;
  DB_StatComposition *this_36;
  DB_StatCoinUse *this_37;
  DB_StatPvpPlay *this_38;
  DB_StatGameRank *this_39;
  DB_StatDungeonClear *this_40;
  DB_CrashDownReport *this_41;
  DB_SaveFeaturedGoodsIdx *this_42;
  DB_RemoveFeaturedGoodsIdx *this_43;
  DB_GenCeraTicket *this_44;
  DB_SaveEventItem *this_45;
  DB_RemoveEventItem *this_46;
  DB_FatigueResetTimer *this_47;
  DB_SuicideWhenQueueIsEmpty *this_48;
  DB_SavePremiumInfo *this_49;
  DB_SaveCharacInfo4Guild *this_50;
  DB_StatDungeonFail *this_51;
  DB_StatPVPPlay2 *this_52;
  DB_StatUseShusiaService *this_53;
  DB_UpdateDetailChannel *this_54;
  DB_SaveChannelUserLevel *this_55;
  DB_SavePrivateStore *this_56;
  DB_LoadPrivateStore *this_57;
  DB_SaveGamechannel *this_58;
  DB_UpdateQueryCountTimerLogdb *this_59;
  DB_UpdateQueryCountTimerDb *this_60;
  DB_UpdateQueryCountDbLogdb *this_61;
  DB_UpdateNatType *this_62;
  DB_UpdateNatTypeUser *this_63;
  DB_MailBox_Req_CheckReceiver *this_64;
  DB_MailBox_Req_List *this_65;
  DB_MailBox_Req_Delete *this_66;
  DB_MailBox_Req_Send *this_67;
  DB_InsertCreatureItem *this_68;
  DB_UpdateCreatureItemList *this_69;
  DB_UpdateCreatureItem *this_70;
  DB_SwapCreatureItem *this_71;
  DB_GatheringParyStatus *this_72;
  DB_ForbidUserToPlay *this_73;
  DB_LastMsgDb *this_74;
  DB_LastMsgLogDb *this_75;
  DB_SaveClientHackLog *this_76;
  DB_InsertQueueSizeLog *this_77;
  DB_SaveSameMIDOtherCharLoginHack *this_78;
  DB_SaveProxyLog *this_79;
  DB_SaveGoldZeroTradeLog *this_80;
  DB_MouseRegister *this_81;
  DB_PassPadUpdateFailCnt *this_82;
  DB_PassPadUpdateCancelCnt *this_83;
  DB_UpdateDungeonDataStatisticLogdb *this_84;
  DB_BillingRecord *this_85;
  DB_ReqBlackCount *this_86;
  DB_ReqSaveCrazyLevelupEvent *this_87;
  DB_ReqSaveHackUserPunish *this_88;
  DB_InsertUserPlayTime *this_89;
  DB_UpdateHappyBeanInfo *this_90;
  DB_InsertQueryCounterDb *this_91;
  DB_InsertQueryCounterLogdb *this_92;
  DB_ReqItemUpgradeLog *this_93;
  DB_ChangeLetterStat *this_94;
  DB_ReqChangeCharacName *this_95;
  DB_ReqQueryCharacInfo *this_96;
  DB_MailBoxSendNewMailWithDBWork *this_97;
  DB_ReportMannerlessUser_Upgrade *this_98;
  DB_ReportMannerlessUser *this_99;
  DB_UpdateClientCrashDownLog *this_x00100;
  DB_TimerStatisticsLog *this_x00101;
  DB_SaveUserHandicap *this_x00102;
  DB_ForceSaveSimpleSSO *this_x00103;
  DB_CountOfHumanCertify *this_x00104;
  DB_UpdateGiftCount *this_x00105;
  DB_UpdateMemberDoubtTrade *this_x00106;
  DB_UpdateItemDropStatistics *this_x00107;
  DB_UpdatePvPGrade *this_x00108;
  DB_InsertValueStatistic *this_x00109;
  DB_InsertDungeonEntrance *this_x00110;
  DB_InsertDungeonEntrance_hour *this_x00111;
  DB_GetDeathTowerBestRecord *this_x00112;
  DB_UpdateDeathTowerBestRecord *this_x00113;
  DB_DeathTowerLoadTopRanker *this_x00114;
  DB_CheckDoubleGuildName *this_x00115;
  DB_CheckDoubleGuildAddress *this_x00116;
  DB_ArrangeUserLoginInfo *this_x00117;
  DB_SecurityCardIssue *this_x00118;
  DB_SecurityCardDisuse *this_x00119;
  DB_SecurityCardActivate *this_x00120;
  DB_SecurityCardUpdateValidityTime *this_x00121;
  DB_SecurityCardUpdateFailCnt *this_x00122;
  DB_SecurityCardUpdateCancelCnt *this_x00123;
  DB_SecurityCardRetransfer *this_x00124;
  DB_InsertPartyType *this_x00125;
  DB_InsertPVPPlayerRate *this_x00126;
  DB_InsertPVPMap *this_x00127;
  DB_LoadDnfHackLog *this_x00128;
  DB_InsertLevelDungeonPlay *this_x00129;
  DB_ReloadAutoPunishRuleBackIP *this_x00130;
  DB_ReloadAutoPunishRuleHackType *this_x00131;
  DB_InsertAutoPunishFirstUser *this_x00132;
  DB_InsertAutoPunishSecondUser *this_x00133;
  DB_BlackIPMonitor *this_x00134;
  DB_SaveCleanpadPoint *this_x00135;
  DB_BlackIPMonitorPartLoad *this_x00136;
  DB_Insert0712WinterEventCoupon *pDVar1;
  DB_InsertArchieveEventLog *this_x00137;
  DB_InsertDungeonExp *this_x00138;
  DB_WriteGeoReject *this_x00139;
  DB_InsertUnlimitSupportLog *this_x00140;
  DB_LoadCleanPadPoint *this_x00141;
  DB_UpdateSchoolPoint *this_x00142;
  DB_SaveAccountInfo *this_x00143;
  DB_GoblinPadUpdateReward *this_x00144;
  DB_GoblinPadUpdateValidityTime *this_x00145;
  DB_LoadGameOption *this_x00146;
  DB_SaveGameOption_1 *this_x00147;
  DB_SaveGameOption_2 *this_x00148;
  DB_SaveCharacterOption *this_x00149;
  DB_UpdateCoolTimeItem *this_x00150;
  DB_UpdateEffectItem *this_x00151;
  DB_UpdateAvatarJewelSlot *this_x00152;
  DB_UpdatePvPResult *this_x00153;
  DB_UpdatePvPLastPlayTime *this_x00154;
  DB_LoadBloodBestRecord *this_x00155;
  DB_UpdateBloodBestRecord *this_x00156;
  DB_LoadBreakAwayPreventData *this_x00157;
  DB_LoadBreakAwayRewardData *this_x00158;
  DB_UpdateBreakAwayAccruedCera *this_x00159;
  DB_UpdateBreakAwayUvList *this_x00160;
  DB_UpdateBreakAwayRuckPoint *this_x00161;
  DB_UpdateBreakAwayClearAddInfo *this_x00162;
  DB_UpdateBreakAwayDungeonClearCnt *this_x00163;
  DB_UpdateGMData *this_x00164;
  DB_LoadDimension *this_x00165;
  DB_UpdateDimension *this_x00166;
  DB_InsertCirculationStatistic *this_x00167;
  DB_LoadAutoMarketConditionsControl *this_x00168;
  DB_UpdateAutoMarketConditionsControl *this_x00169;
  DB_UpdateOneDayLetheSkill *this_x00170;
  DB_UpdateVendingMachineStatistic *this_x00171;
  DB_LoadPowerWarStatueRanker *this_x00172;
  DB_LoadPowerWarStatueInfo *this_x00173;
  DB_BlackipPrivateSecurityValuation *this_x00174;
  DB_UpdateServerMessage *this_x00175;
  DB_LoadServerMessage *this_x00176;
  DB_UpdateCharacterDay *this_x00177;
  DB_UpdateNPCRelationship *this_x00178;
  DB_SecurityCardAddCertCnt *this_x00179;
  DB_LoadExpertJob *this_x00180;
  DB_SaveExpertJob *this_x00181;
  DB_UpdateExpertJobStatistic *this_x00182;
  DB_InsertServerLoadStatistic *this_x00183;
  DB_FindFactoryHub *this_x00184;
  DB_HackIPSave *this_x00185;
  DB_CancelRestingUserRestrict *this_x00186;
  DB_SaveBloodDungeon *this_x00187;
  DB_LoadPowerWarInfo *this_x00188;
  DB_SecuServiceReward *this_x00189;
  DB_Find_Factory_Hub_User *this_x00190;
  DB_SaveConditionEventInfo *this_x00191;
  DB_DeletePowerWarStatueMessage *this_x00192;
  DB_LoadNoCacheData *this_x00193;
  DB_UpdateItemLock *this_x00194;
  DB_UpdateCreatureItemLock *this_x00195;
  DB_UpdateAvatarItemLock *this_x00196;
  DB_UpdateMemberPlayInfoPcRoom *this_x00197;
  DB_UpdateCompoundEmblemStatics *this_x00198;
  DB_AccountHack_CheckMyAccount *this_x00199;
  DB_SecuServiceUpdateValidityTime *this_x00200;
  DB_AutoPunishedSecondUserData *this_x00201;
  DB_SaveProperDungeonClearCount *this_x00202;
  DB_LoadPvPBuddy *this_x00203;
  DB_InsertPvPBuddy *this_x00204;
  DB_DeletePvPBuddy *this_x00205;
  DB_UpdatePvPBuddy *this_x00206;
  DB_DeleteGuild *this_x00207;
  DB_LoadPvPLiveEventData *this_x00208;
  DB_UpdatePvPLiveEventData *this_x00209;
  DB_LoadOnlinePreliminaryMember *this_x00210;
  DB_UpdateOnlinePreliminaryMember *this_x00211;
  DB_LoadOnlinePreliminaryTeam *this_x00212;
  DB_UpdateOnlinePreliminaryTeam *this_x00213;
  DB_UpdateOnlinePreliminaryMemberMatchList *this_x00214;
  DB_LoadOnlinePreliminaryTeamMatchList *this_x00215;
  DB_UpdateOnlinePreliminaryTeamMatchList *this_x00216;
  DB_SaveRedeemItemList *this_x00217;
  DB_CreateAccountCargo *this_x00218;
  DB_UpgradeAccountCargo *this_x00219;
  DB_DeleteAccountCargo *this_x00220;
  DB_LoadAccountCargo *this_x00221;
  DB_SaveAccountCargo *this_x00222;
  DB_SaveMileage *this_x00223;
  DB_LoadMileage *this_x00224;
  DB_Load *this_x00225;
  DB_Update *this_x00226;
  DB_Multi_MailBox_Req_Send *this_x00227;
  DB_ReqQueryCharacInfoMailbox *this_x00228;
  DB_GuildExpBookDelete *this_x00229;
  DB_InsertPoliceSaveChatting *this_x00230;
  DB_UpdateChuseokPackagePurchase *this_x00231;
  DB_CheckJoinGuild *this_x00232;
  DB_RequestJoinGuild *this_x00233;
  DB_JoinGuildInfo *this_x00234;
  DB_CancelJoinGuild *this_x00235;
  DB_GuildJoinList *this_x00236;
  DB_DenyJoinGuild *this_x00237;
  DB_UpdateReturnUserFirstLogin *pDVar2;
  DB_InsertAccountFirstLoginFlag *this_x00238;
  DB_SaveGameOption_QuickChatting *this_x00239;
  DB_UpdatePurchaseCashItemBonus *this_x00240;
  DB_UpdateItemCountValue *this_x00241;
  DB_UpdateLimitItemUsage *this_x00242;
  DB_LogBuyItem *this_x00243;
  DB_UpdateRevengeData *this_x00244;
  DB_UpdateGoblinPadAdvicePwdRewardTime *this_x00245;
  DB_UpdateCharacPlayTime *this_x00246;
  DB_SaveExpandEquipslot *this_x00247;
  DB_UpdateFairPvPScore *this_x00248;
  DB_SavePvPMissionList *this_x00249;
  DB_InsertResponseTime *this_x00250;
  DB_UpdateItemMakingSkill *this_x00251;
  DB_TOD_Random_Select_UserAPC *this_x00252;
  DB_TOD_Reset_UserAPC *this_x00253;
  DB_TOD_Update_UserState *this_x00254;
  DB_UpdateQuestShopBuyingStatusList *this_x00255;
  DB_UpdateAddItemCountValue *this_x00256;
  DB_SaveKillMonsterInfo *this_x00257;
  DB_LoadKillMonsterInfo *this_x00258;
  DB_SaveTitleBook *this_x00259;
  DB_SaveAchievement *this_x00260;
  DB_UpdateUserFatigueQuantity *this_x00261;
  DB_UpdateUserGiftFatigueQuantity *this_x00262;
  DB_SaveCharacSlotExtend *this_x00263;
  DB_SaveGiveAvengerTitleFlag *this_x00264;
  DB_SelectLevelUpReward *this_x00265;
  DB_InsertRandomOptionItemInform *this_x00266;
  DB_StatisticCeraShopGiftLog *this_x00267;
  DB_GetUserRegdate *this_x00268;
  DB_UpdateOntimeLastRecvIdx *this_x00269;
  DB_InsertOnTimeRewardUserLog *this_x00270;
  DB_CheckCharacName *this_x00271;
  DB_MailBox_Req_System_Multi_Mail *this_x00272;
  DB_CheckSecuReward *this_x00273;
  DB_UpdateFatigueAttendance *this_x00274;
  DB_UpdateInGameEventHistory *this_x00275;
  DB_UpdateInventoryCapacity *this_x00276;
  DB_UpdateAuraAvatarOption *this_x00277;
  DB_InsertCeraItemHistory *this_x00278;
  DB_UpdateAvatarHistory *this_x00279;
  DB_SaveItemDictionaryFlag *this_x00280;
  DB_SaveMercenaryData *this_x00281;
  DB_HadesPunish *this_x00282;
  DB_Check3rdPartyConcent *this_x00283;
  DB_MercenaryLogInfo *this_x00284;
  DB_SelectCharacMid *this_x00285;
  DB_AvatarOptionChange *this_x00286;
  DB_SaveObjectBringUp *this_x00287;
  DB_SaveGameOption_ChattingEmoticon *this_x00288;
  DB_UpdateBoosterGageData *this_x00289;
  CLocalChina_DB_BreakAwayReset *this_x00290;
  CLocalChina_DB_LastDay_BreakAway *this_x00291;
  CLocalGlobal_DB_STATICS_BOSSTOWER *this_x00292;
  DB_UpdateCeraShopPurchaseCount *this_x00293;
  DB_AradDatabaseDispatcher *this_x00294;
  DB_LoadPuUserCheck *this_x00295;
  DB_SavePuUserCheck *this_x00296;
  DB_StatisticAdvanceAltar *this_x00297;
  DB_CheckAddFriend *this_x00298;
  DB_SaveInformNotice *this_x00299;
  DB_NoticeIngameAdvertisement *this_x00300;
  DB_RequestCharacSkillInfo *this_x00301;
  DB_RequestTagCharacInfo *this_x00302;
  DB_SavePcRoomPlayTimeEvent *this_x00303;
  DB_SaveBestClearTime *this_x00304;
  DB_AuctionSubMoney *this_x00305;
  DB_UpdateBlueMarbleEnterCount *this_x00306;
  DB_InsertAttendanceEvent *this_x00307;
  DB_UpdateBingoEvent *this_x00308;
  DB_EventSaveGrowthWeapon *this_x00309;
  DB_EventUpdateGrowthWeaponCharac *this_x00310;
  DB_EventUpdateGrowthWeaponTimepiece *this_x00311;
  DB_EventGrowthWeaponReset *this_x00312;
  DB_EventSaveGiveGrowCreature *this_x00313;
  DB_EventUpdateGiveGrowCreature *this_x00314;
  DB_EventAccountCharacterLevelUpOnceGift *this_x00315;
  DB_AvatarColorChange *this_x00316;
  DB_TestTradeRestrict *this_x00317;
  DB_UpdateComboSkill *this_x00318;
  DB_SaveCharacInformNotice *this_x00319;
  DB_UpdateSeriaRoomAnimationDeco *this_x00320;
  DB_LoadCharacHotKeyOption *this_x00321;
  DB_LogIngameAdvertisement *this_x00322;
  DB_LogCeraShopError *this_x00323;
  DB_GetPremiumSelectedCubeInfo *this_x00324;
  DB_InsertEventStageLog *this_x00325;
  DB_DispatcherTaiwan *this_x00326;
  DB_SaveCerashopAddRestrictType *this_x00327;
  DB_LoadCerashopAddRestrictType *this_x00328;
  DB_InsertAccountFirstLoginDailyFlag *this_x00329;
  DB_SaveEventLevelupSupport *this_x00330;
  DB_LoadEventLevelupSupport *this_x00331;
  DB_SelectAllowProxyUser *this_x00332;
  int local_20;
  
  for (local_20 = 0; local_20 < 0x354; local_20 = local_20 + 1) {
    *(undefined4 *)(this + local_20 * 4 + 4) = 0;
  }
                    /* try { // try from 083fc027 to 083feb10 has its CatchHandler @ 083ff0dd */
  this_00 = operator_new(4);
  DB_Login::DB_Login(this_00);
  *(DB_Login **)(this + 0x10) = this_00;
  this_01 = operator_new(4);
  DB_CreateCharac::DB_CreateCharac(this_01);
  *(DB_CreateCharac **)(this + 0x14) = this_01;
  this_02 = operator_new(4);
  DB_DeleteCharac::DB_DeleteCharac(this_02);
  *(DB_DeleteCharac **)(this + 0x18) = this_02;
  this_03 = operator_new(4);
  DB_UpdateCharacView::DB_UpdateCharacView(this_03);
  *(DB_UpdateCharacView **)(this + 0x1c) = this_03;
  this_04 = operator_new(4);
  DB_LoadCharac::DB_LoadCharac(this_04);
  *(DB_LoadCharac **)(this + 0x20) = this_04;
  this_05 = operator_new(4);
  DB_LoadInventory::DB_LoadInventory(this_05);
  *(DB_LoadInventory **)(this + 0x24) = this_05;
  this_06 = operator_new(4);
  DB_LoadQuest::DB_LoadQuest(this_06);
  *(DB_LoadQuest **)(this + 0x2c) = this_06;
  this_07 = operator_new(4);
  APSystem::DB_LoadActionPoint::DB_LoadActionPoint(this_07);
  *(DB_LoadActionPoint **)(this + 0x48) = this_07;
  this_08 = operator_new(4);
  APSystem::DB_UpdateActionPoint::DB_UpdateActionPoint(this_08);
  *(DB_UpdateActionPoint **)(this + 0x50) = this_08;
  this_09 = operator_new(4);
  APSystem::DB_LoadRewardMedal::DB_LoadRewardMedal(this_09);
  *(DB_LoadRewardMedal **)(this + 0x54) = this_09;
  this_10 = operator_new(4);
  APSystem::DB_UpdateRewardMedal::DB_UpdateRewardMedal(this_10);
  *(DB_UpdateRewardMedal **)(this + 0x58) = this_10;
  this_11 = operator_new(4);
  DB_LoadEtc::DB_LoadEtc(this_11);
  *(DB_LoadEtc **)(this + 0x84) = this_11;
  this_12 = operator_new(4);
  DB_SaveCharac::DB_SaveCharac(this_12);
  *(DB_SaveCharac **)(this + 0x8c) = this_12;
  this_13 = operator_new(4);
  DB_SaveInven::DB_SaveInven(this_13);
  *(DB_SaveInven **)(this + 0x90) = this_13;
  this_14 = operator_new(4);
  DB_SaveSkill::DB_SaveSkill(this_14);
  *(DB_SaveSkill **)(this + 0x94) = this_14;
  this_15 = operator_new(4);
  DB_SavePvp::DB_SavePvp(this_15);
  *(DB_SavePvp **)(this + 0x98) = this_15;
  this_16 = operator_new(4);
  DB_UpdateQuest::DB_UpdateQuest(this_16);
  *(DB_UpdateQuest **)(this + 0xa8) = this_16;
  this_17 = operator_new(4);
  DB_UpdateGrowType::DB_UpdateGrowType(this_17);
  *(DB_UpdateGrowType **)(this + 0xac) = this_17;
  this_18 = operator_new(4);
  DB_UpdateLogin::DB_UpdateLogin(this_18);
  *(DB_UpdateLogin **)(this + 0xb0) = this_18;
  this_19 = operator_new(4);
  DB_UpdateLogout::DB_UpdateLogout(this_19);
  *(DB_UpdateLogout **)(this + 0xb4) = this_19;
  this_20 = operator_new(4);
  DB_UpdateChannel::DB_UpdateChannel(this_20);
  *(DB_UpdateChannel **)(this + 0xbc) = this_20;
  this_21 = operator_new(4);
  DB_DeleteChannel::DB_DeleteChannel(this_21);
  *(DB_DeleteChannel **)(this + 0xc0) = this_21;
  this_22 = operator_new(4);
  DB_InsertChannel::DB_InsertChannel(this_22);
  *(DB_InsertChannel **)(this + 0xb8) = this_22;
  this_23 = operator_new(4);
  DB_AvatarItemInsert::DB_AvatarItemInsert(this_23);
  *(DB_AvatarItemInsert **)(this + 200) = this_23;
  this_24 = operator_new(4);
  DB_AvatarItemDel::DB_AvatarItemDel(this_24);
  *(DB_AvatarItemDel **)(this + 0xd0) = this_24;
  this_25 = operator_new(4);
  DB_AvatarItemMove::DB_AvatarItemMove(this_25);
  *(DB_AvatarItemMove **)(this + 0xcc) = this_25;
  this_26 = operator_new(4);
  DB_AvatarExtendPeriod::DB_AvatarExtendPeriod(this_26);
  *(DB_AvatarExtendPeriod **)(this + 0xd4) = this_26;
  this_27 = operator_new(4);
  DB_AvatarChangeOwner::DB_AvatarChangeOwner(this_27);
  *(DB_AvatarChangeOwner **)(this + 0xd8) = this_27;
  this_28 = operator_new(4);
  DB_AvatarChangeStat::DB_AvatarChangeStat(this_28);
  *(DB_AvatarChangeStat **)(this + 0xdc) = this_28;
  this_29 = operator_new(4);
  DB_SaveRank::DB_SaveRank(this_29);
  *(DB_SaveRank **)(this + 0x9c) = this_29;
  this_30 = operator_new(4);
  DB_InsertTicket::DB_InsertTicket(this_30);
  *(DB_InsertTicket **)(this + 0xa4) = this_30;
  this_31 = operator_new(4);
  DB_LoadTicket::DB_LoadTicket(this_31);
  *(DB_LoadTicket **)(this + 0x30) = this_31;
  this_32 = operator_new(4);
  DB_LoadDungeonClear::DB_LoadDungeonClear(this_32);
  *(DB_LoadDungeonClear **)(this + 0x34) = this_32;
  this_33 = operator_new(4);
  DB_SaveDungeonClear::DB_SaveDungeonClear(this_33);
  *(DB_SaveDungeonClear **)(this + 0xa0) = this_33;
  this_34 = operator_new(4);
  DB_TerminateServer::DB_TerminateServer(this_34);
  *(DB_TerminateServer **)(this + 0x100) = this_34;
  this_35 = operator_new(4);
  DB_StatBreakJar::DB_StatBreakJar(this_35);
  *(DB_StatBreakJar **)(this + 0xe0) = this_35;
  this_36 = operator_new(4);
  DB_StatComposition::DB_StatComposition(this_36);
  *(DB_StatComposition **)(this + 0xe4) = this_36;
  this_37 = operator_new(4);
  DB_StatCoinUse::DB_StatCoinUse(this_37);
  *(DB_StatCoinUse **)(this + 0xe8) = this_37;
  this_38 = operator_new(4);
  DB_StatPvpPlay::DB_StatPvpPlay(this_38);
  *(DB_StatPvpPlay **)(this + 0xec) = this_38;
  this_39 = operator_new(4);
  DB_StatGameRank::DB_StatGameRank(this_39);
  *(DB_StatGameRank **)(this + 0xf0) = this_39;
  this_40 = operator_new(4);
  DB_StatDungeonClear::DB_StatDungeonClear(this_40);
  *(DB_StatDungeonClear **)(this + 0xf4) = this_40;
  this_41 = operator_new(4);
  DB_CrashDownReport::DB_CrashDownReport(this_41);
  *(DB_CrashDownReport **)(this + 0x144) = this_41;
  this_42 = operator_new(4);
  DB_SaveFeaturedGoodsIdx::DB_SaveFeaturedGoodsIdx(this_42);
  *(DB_SaveFeaturedGoodsIdx **)(this + 0x14c) = this_42;
  this_43 = operator_new(4);
  DB_RemoveFeaturedGoodsIdx::DB_RemoveFeaturedGoodsIdx(this_43);
  *(DB_RemoveFeaturedGoodsIdx **)(this + 0x150) = this_43;
  this_44 = operator_new(4);
  DB_GenCeraTicket::DB_GenCeraTicket(this_44);
  *(DB_GenCeraTicket **)(this + 0x128) = this_44;
  this_45 = operator_new(4);
  DB_SaveEventItem::DB_SaveEventItem(this_45);
  *(DB_SaveEventItem **)(this + 0x134) = this_45;
  this_46 = operator_new(4);
  DB_RemoveEventItem::DB_RemoveEventItem(this_46);
  *(DB_RemoveEventItem **)(this + 0x138) = this_46;
  this_47 = operator_new(4);
  DB_FatigueResetTimer::DB_FatigueResetTimer(this_47);
  *(DB_FatigueResetTimer **)(this + 0x13c) = this_47;
  this_48 = operator_new(4);
  DB_SuicideWhenQueueIsEmpty::DB_SuicideWhenQueueIsEmpty(this_48);
  *(DB_SuicideWhenQueueIsEmpty **)(this + 0x148) = this_48;
  this_49 = operator_new(4);
  DB_SavePremiumInfo::DB_SavePremiumInfo(this_49);
  *(DB_SavePremiumInfo **)(this + 0x154) = this_49;
  this_50 = operator_new(4);
  DB_SaveCharacInfo4Guild::DB_SaveCharacInfo4Guild(this_50);
  *(DB_SaveCharacInfo4Guild **)(this + 400) = this_50;
  this_51 = operator_new(4);
  DB_StatDungeonFail::DB_StatDungeonFail(this_51);
  *(DB_StatDungeonFail **)(this + 0x1a0) = this_51;
  this_52 = operator_new(4);
  DB_StatPVPPlay2::DB_StatPVPPlay2(this_52);
  *(DB_StatPVPPlay2 **)(this + 0x1a4) = this_52;
  this_53 = operator_new(4);
  DB_StatUseShusiaService::DB_StatUseShusiaService(this_53);
  *(DB_StatUseShusiaService **)(this + 0x1a8) = this_53;
  this_54 = operator_new(4);
  DB_UpdateDetailChannel::DB_UpdateDetailChannel(this_54);
  *(DB_UpdateDetailChannel **)(this + 0x1ac) = this_54;
  this_55 = operator_new(4);
  DB_SaveChannelUserLevel::DB_SaveChannelUserLevel(this_55);
  *(DB_SaveChannelUserLevel **)(this + 0x1b0) = this_55;
  this_56 = operator_new(4);
  DB_SavePrivateStore::DB_SavePrivateStore(this_56);
  *(DB_SavePrivateStore **)(this + 0x1e0) = this_56;
  this_57 = operator_new(4);
  DB_LoadPrivateStore::DB_LoadPrivateStore(this_57);
  *(DB_LoadPrivateStore **)(this + 0x1e4) = this_57;
  this_58 = operator_new(4);
  DB_SaveGamechannel::DB_SaveGamechannel(this_58);
  *(DB_SaveGamechannel **)(this + 0x1e8) = this_58;
  this_59 = operator_new(4);
  DB_UpdateQueryCountTimerLogdb::DB_UpdateQueryCountTimerLogdb(this_59);
  *(DB_UpdateQueryCountTimerLogdb **)(this + 0x1f0) = this_59;
  this_60 = operator_new(4);
  DB_UpdateQueryCountTimerDb::DB_UpdateQueryCountTimerDb(this_60);
  *(DB_UpdateQueryCountTimerDb **)(this + 500) = this_60;
  this_61 = operator_new(4);
  DB_UpdateQueryCountDbLogdb::DB_UpdateQueryCountDbLogdb(this_61);
  *(DB_UpdateQueryCountDbLogdb **)(this + 0x1f8) = this_61;
  this_62 = operator_new(4);
  DB_UpdateNatType::DB_UpdateNatType(this_62);
  *(DB_UpdateNatType **)(this + 0x210) = this_62;
  this_63 = operator_new(4);
  DB_UpdateNatTypeUser::DB_UpdateNatTypeUser(this_63);
  *(DB_UpdateNatTypeUser **)(this + 0x214) = this_63;
  this_64 = operator_new(4);
  DB_MailBox_Req_CheckReceiver::DB_MailBox_Req_CheckReceiver(this_64);
  *(DB_MailBox_Req_CheckReceiver **)(this + 0x1fc) = this_64;
  this_65 = operator_new(4);
  DB_MailBox_Req_List::DB_MailBox_Req_List(this_65);
  *(DB_MailBox_Req_List **)(this + 0x200) = this_65;
  this_66 = operator_new(4);
  DB_MailBox_Req_Delete::DB_MailBox_Req_Delete(this_66);
  *(DB_MailBox_Req_Delete **)(this + 0x208) = this_66;
  this_67 = operator_new(4);
  DB_MailBox_Req_Send::DB_MailBox_Req_Send(this_67);
  *(DB_MailBox_Req_Send **)(this + 0x204) = this_67;
  this_68 = operator_new(4);
  DB_InsertCreatureItem::DB_InsertCreatureItem(this_68);
  *(DB_InsertCreatureItem **)(this + 0x220) = this_68;
  this_69 = operator_new(4);
  DB_UpdateCreatureItemList::DB_UpdateCreatureItemList(this_69);
  *(DB_UpdateCreatureItemList **)(this + 0x228) = this_69;
  this_70 = operator_new(4);
  DB_UpdateCreatureItem::DB_UpdateCreatureItem(this_70);
  *(DB_UpdateCreatureItem **)(this + 0x22c) = this_70;
  this_71 = operator_new(4);
  DB_SwapCreatureItem::DB_SwapCreatureItem(this_71);
  *(DB_SwapCreatureItem **)(this + 0x234) = this_71;
  this_72 = operator_new(4);
  DB_GatheringParyStatus::DB_GatheringParyStatus(this_72);
  *(DB_GatheringParyStatus **)(this + 0x23c) = this_72;
  this_73 = operator_new(4);
  DB_ForbidUserToPlay::DB_ForbidUserToPlay(this_73);
  *(DB_ForbidUserToPlay **)(this + 0x250) = this_73;
  this_74 = operator_new(4);
  DB_LastMsgDb::DB_LastMsgDb(this_74);
  *(DB_LastMsgDb **)(this + 600) = this_74;
  this_75 = operator_new(4);
  DB_LastMsgLogDb::DB_LastMsgLogDb(this_75);
  *(DB_LastMsgLogDb **)(this + 0x25c) = this_75;
  this_76 = operator_new(4);
  DB_SaveClientHackLog::DB_SaveClientHackLog(this_76);
  *(DB_SaveClientHackLog **)(this + 0x26c) = this_76;
  this_77 = operator_new(4);
  DB_InsertQueueSizeLog::DB_InsertQueueSizeLog(this_77);
  *(DB_InsertQueueSizeLog **)(this + 0x270) = this_77;
  this_78 = operator_new(4);
  DB_SaveSameMIDOtherCharLoginHack::DB_SaveSameMIDOtherCharLoginHack(this_78);
  *(DB_SaveSameMIDOtherCharLoginHack **)(this + 0x278) = this_78;
  this_79 = operator_new(4);
  DB_SaveProxyLog::DB_SaveProxyLog(this_79);
  *(DB_SaveProxyLog **)(this + 0x27c) = this_79;
  this_80 = operator_new(4);
  DB_SaveGoldZeroTradeLog::DB_SaveGoldZeroTradeLog(this_80);
  *(DB_SaveGoldZeroTradeLog **)(this + 0x288) = this_80;
  this_81 = operator_new(4);
  DB_MouseRegister::DB_MouseRegister(this_81);
  *(DB_MouseRegister **)(this + 0x290) = this_81;
  this_82 = operator_new(4);
  DB_PassPadUpdateFailCnt::DB_PassPadUpdateFailCnt(this_82);
  *(DB_PassPadUpdateFailCnt **)(this + 0x294) = this_82;
  this_83 = operator_new(4);
  DB_PassPadUpdateCancelCnt::DB_PassPadUpdateCancelCnt(this_83);
  *(DB_PassPadUpdateCancelCnt **)(this + 0x298) = this_83;
  this_84 = operator_new(4);
  DB_UpdateDungeonDataStatisticLogdb::DB_UpdateDungeonDataStatisticLogdb(this_84);
  *(DB_UpdateDungeonDataStatisticLogdb **)(this + 0x2c0) = this_84;
  this_85 = operator_new(4);
  DB_BillingRecord::DB_BillingRecord(this_85);
  *(DB_BillingRecord **)(this + 0x2c4) = this_85;
  this_86 = operator_new(4);
  DB_ReqBlackCount::DB_ReqBlackCount(this_86);
  *(DB_ReqBlackCount **)(this + 0x2d0) = this_86;
  this_87 = operator_new(4);
  DB_ReqSaveCrazyLevelupEvent::DB_ReqSaveCrazyLevelupEvent(this_87);
  *(DB_ReqSaveCrazyLevelupEvent **)(this + 0x2d4) = this_87;
  this_88 = operator_new(4);
  DB_ReqSaveHackUserPunish::DB_ReqSaveHackUserPunish(this_88);
  *(DB_ReqSaveHackUserPunish **)(this + 0x2d8) = this_88;
  this_89 = operator_new(4);
  DB_InsertUserPlayTime::DB_InsertUserPlayTime(this_89);
  *(DB_InsertUserPlayTime **)(this + 0x2dc) = this_89;
  this_90 = operator_new(4);
  DB_UpdateHappyBeanInfo::DB_UpdateHappyBeanInfo(this_90);
  *(DB_UpdateHappyBeanInfo **)(this + 0x2f0) = this_90;
  this_91 = operator_new(4);
  DB_InsertQueryCounterDb::DB_InsertQueryCounterDb(this_91);
  *(DB_InsertQueryCounterDb **)(this + 0x2fc) = this_91;
  this_92 = operator_new(4);
  DB_InsertQueryCounterLogdb::DB_InsertQueryCounterLogdb(this_92);
  *(DB_InsertQueryCounterLogdb **)(this + 0x300) = this_92;
  this_93 = operator_new(4);
  DB_ReqItemUpgradeLog::DB_ReqItemUpgradeLog(this_93);
  *(DB_ReqItemUpgradeLog **)(this + 0x304) = this_93;
  this_94 = operator_new(4);
  DB_ChangeLetterStat::DB_ChangeLetterStat(this_94);
  *(DB_ChangeLetterStat **)(this + 0x30c) = this_94;
  this_95 = operator_new(4);
  DB_ReqChangeCharacName::DB_ReqChangeCharacName(this_95);
  *(DB_ReqChangeCharacName **)(this + 0x310) = this_95;
  this_96 = operator_new(4);
  DB_ReqQueryCharacInfo::DB_ReqQueryCharacInfo(this_96);
  *(DB_ReqQueryCharacInfo **)(this + 0x314) = this_96;
  this_97 = operator_new(4);
  DB_MailBoxSendNewMailWithDBWork::DB_MailBoxSendNewMailWithDBWork(this_97);
  *(DB_MailBoxSendNewMailWithDBWork **)(this + 0x318) = this_97;
  this_98 = operator_new(4);
  DB_ReportMannerlessUser_Upgrade::DB_ReportMannerlessUser_Upgrade(this_98);
  *(DB_ReportMannerlessUser_Upgrade **)(this + 0x32c) = this_98;
  this_99 = operator_new(4);
  DB_ReportMannerlessUser::DB_ReportMannerlessUser(this_99);
  *(DB_ReportMannerlessUser **)(this + 0x330) = this_99;
  this_x00100 = operator_new(4);
  DB_UpdateClientCrashDownLog::DB_UpdateClientCrashDownLog(this_x00100);
  *(DB_UpdateClientCrashDownLog **)(this + 0x334) = this_x00100;
  this_x00101 = operator_new(4);
  DB_TimerStatisticsLog::DB_TimerStatisticsLog(this_x00101);
  *(DB_TimerStatisticsLog **)(this + 0x338) = this_x00101;
  this_x00102 = operator_new(4);
  DB_SaveUserHandicap::DB_SaveUserHandicap(this_x00102);
  *(DB_SaveUserHandicap **)(this + 0x33c) = this_x00102;
  this_x00103 = operator_new(4);
  DB_ForceSaveSimpleSSO::DB_ForceSaveSimpleSSO(this_x00103);
  *(DB_ForceSaveSimpleSSO **)(this + 0x340) = this_x00103;
  this_x00104 = operator_new(4);
  DB_CountOfHumanCertify::DB_CountOfHumanCertify(this_x00104);
  *(DB_CountOfHumanCertify **)(this + 0x448) = this_x00104;
  this_x00105 = operator_new(4);
  DB_UpdateGiftCount::DB_UpdateGiftCount(this_x00105);
  *(DB_UpdateGiftCount **)(this + 0x348) = this_x00105;
  this_x00106 = operator_new(4);
  DB_UpdateMemberDoubtTrade::DB_UpdateMemberDoubtTrade(this_x00106);
  *(DB_UpdateMemberDoubtTrade **)(this + 0x344) = this_x00106;
  this_x00107 = operator_new(4);
  DB_UpdateItemDropStatistics::DB_UpdateItemDropStatistics(this_x00107);
  *(DB_UpdateItemDropStatistics **)(this + 0x34c) = this_x00107;
  this_x00108 = operator_new(4);
  DB_UpdatePvPGrade::DB_UpdatePvPGrade(this_x00108);
  *(DB_UpdatePvPGrade **)(this + 0x354) = this_x00108;
  this_x00109 = operator_new(4);
  DB_InsertValueStatistic::DB_InsertValueStatistic(this_x00109);
  *(DB_InsertValueStatistic **)(this + 0x358) = this_x00109;
  this_x00110 = operator_new(4);
  DB_InsertDungeonEntrance::DB_InsertDungeonEntrance(this_x00110);
  *(DB_InsertDungeonEntrance **)(this + 900) = this_x00110;
  this_x00111 = operator_new(4);
  DB_InsertDungeonEntrance_hour::DB_InsertDungeonEntrance_hour(this_x00111);
  *(DB_InsertDungeonEntrance_hour **)(this + 0x388) = this_x00111;
  this_x00112 = operator_new(4);
  DB_GetDeathTowerBestRecord::DB_GetDeathTowerBestRecord(this_x00112);
  *(DB_GetDeathTowerBestRecord **)(this + 0x38c) = this_x00112;
  this_x00113 = operator_new(4);
  DB_UpdateDeathTowerBestRecord::DB_UpdateDeathTowerBestRecord(this_x00113);
  *(DB_UpdateDeathTowerBestRecord **)(this + 0x390) = this_x00113;
  this_x00114 = operator_new(4);
  DB_DeathTowerLoadTopRanker::DB_DeathTowerLoadTopRanker(this_x00114);
  *(DB_DeathTowerLoadTopRanker **)(this + 0x394) = this_x00114;
  this_x00115 = operator_new(4);
  DB_CheckDoubleGuildName::DB_CheckDoubleGuildName(this_x00115);
  *(DB_CheckDoubleGuildName **)(this + 0x3b0) = this_x00115;
  this_x00116 = operator_new(4);
  DB_CheckDoubleGuildAddress::DB_CheckDoubleGuildAddress(this_x00116);
  *(DB_CheckDoubleGuildAddress **)(this + 0x3b4) = this_x00116;
  this_x00117 = operator_new(4);
  DB_ArrangeUserLoginInfo::DB_ArrangeUserLoginInfo(this_x00117);
  *(DB_ArrangeUserLoginInfo **)(this + 0x3bc) = this_x00117;
  this_x00118 = operator_new(4);
  DB_SecurityCardIssue::DB_SecurityCardIssue(this_x00118);
  *(DB_SecurityCardIssue **)(this + 0x3f8) = this_x00118;
  this_x00119 = operator_new(4);
  DB_SecurityCardDisuse::DB_SecurityCardDisuse(this_x00119);
  *(DB_SecurityCardDisuse **)(this + 0x3fc) = this_x00119;
  this_x00120 = operator_new(4);
  DB_SecurityCardActivate::DB_SecurityCardActivate(this_x00120);
  *(DB_SecurityCardActivate **)(this + 0x400) = this_x00120;
  this_x00121 = operator_new(4);
  DB_SecurityCardUpdateValidityTime::DB_SecurityCardUpdateValidityTime(this_x00121);
  *(DB_SecurityCardUpdateValidityTime **)(this + 0x404) = this_x00121;
  this_x00122 = operator_new(4);
  DB_SecurityCardUpdateFailCnt::DB_SecurityCardUpdateFailCnt(this_x00122);
  *(DB_SecurityCardUpdateFailCnt **)(this + 0x408) = this_x00122;
  this_x00123 = operator_new(4);
  DB_SecurityCardUpdateCancelCnt::DB_SecurityCardUpdateCancelCnt(this_x00123);
  *(DB_SecurityCardUpdateCancelCnt **)(this + 0x40c) = this_x00123;
  this_x00124 = operator_new(4);
  DB_SecurityCardRetransfer::DB_SecurityCardRetransfer(this_x00124);
  *(DB_SecurityCardRetransfer **)(this + 0x4e4) = this_x00124;
  this_x00125 = operator_new(4);
  DB_InsertPartyType::DB_InsertPartyType(this_x00125);
  *(DB_InsertPartyType **)(this + 0x410) = this_x00125;
  this_x00126 = operator_new(4);
  DB_InsertPVPPlayerRate::DB_InsertPVPPlayerRate(this_x00126);
  *(DB_InsertPVPPlayerRate **)(this + 0x414) = this_x00126;
  this_x00127 = operator_new(4);
  DB_InsertPVPMap::DB_InsertPVPMap(this_x00127);
  *(DB_InsertPVPMap **)(this + 0x418) = this_x00127;
  this_x00128 = operator_new(4);
  DB_LoadDnfHackLog::DB_LoadDnfHackLog(this_x00128);
  *(DB_LoadDnfHackLog **)(this + 0x41c) = this_x00128;
  this_x00129 = operator_new(4);
  DB_InsertLevelDungeonPlay::DB_InsertLevelDungeonPlay(this_x00129);
  *(DB_InsertLevelDungeonPlay **)(this + 0x420) = this_x00129;
  this_x00130 = operator_new(4);
  DB_ReloadAutoPunishRuleBackIP::DB_ReloadAutoPunishRuleBackIP(this_x00130);
  *(DB_ReloadAutoPunishRuleBackIP **)(this + 0x424) = this_x00130;
  this_x00131 = operator_new(4);
  DB_ReloadAutoPunishRuleHackType::DB_ReloadAutoPunishRuleHackType(this_x00131);
  *(DB_ReloadAutoPunishRuleHackType **)(this + 0x428) = this_x00131;
  this_x00132 = operator_new(4);
  DB_InsertAutoPunishFirstUser::DB_InsertAutoPunishFirstUser(this_x00132);
  *(DB_InsertAutoPunishFirstUser **)(this + 0x42c) = this_x00132;
  this_x00133 = operator_new(4);
  DB_InsertAutoPunishSecondUser::DB_InsertAutoPunishSecondUser(this_x00133);
  *(DB_InsertAutoPunishSecondUser **)(this + 0x430) = this_x00133;
  this_x00134 = operator_new(4);
  DB_BlackIPMonitor::DB_BlackIPMonitor(this_x00134);
  *(DB_BlackIPMonitor **)(this + 0x54c) = this_x00134;
  this_x00135 = operator_new(4);
  DB_SaveCleanpadPoint::DB_SaveCleanpadPoint(this_x00135);
  *(DB_SaveCleanpadPoint **)(this + 0x554) = this_x00135;
  this_x00136 = operator_new(4);
  DB_BlackIPMonitorPartLoad::DB_BlackIPMonitorPartLoad(this_x00136);
  *(DB_BlackIPMonitorPartLoad **)(this + 0x558) = this_x00136;
  pDVar1 = operator_new(4);
  DB_Insert0712WinterEventCoupon::DB_Insert0712WinterEventCoupon(pDVar1);
  *(DB_Insert0712WinterEventCoupon **)(this + 0x44c) = pDVar1;
  pDVar1 = operator_new(4);
  DB_Insert0712WinterEventCoupon::DB_Insert0712WinterEventCoupon(pDVar1);
  *(DB_Insert0712WinterEventCoupon **)(this + 0x450) = pDVar1;
  this_x00137 = operator_new(4);
  DB_InsertArchieveEventLog::DB_InsertArchieveEventLog(this_x00137);
  *(DB_InsertArchieveEventLog **)(this + 0x460) = this_x00137;
  this_x00138 = operator_new(4);
  DB_InsertDungeonExp::DB_InsertDungeonExp(this_x00138);
  *(DB_InsertDungeonExp **)(this + 0x45c) = this_x00138;
  this_x00139 = operator_new(4);
  DB_WriteGeoReject::DB_WriteGeoReject(this_x00139);
  *(DB_WriteGeoReject **)(this + 0x470) = this_x00139;
  this_x00140 = operator_new(4);
  DB_InsertUnlimitSupportLog::DB_InsertUnlimitSupportLog(this_x00140);
  *(DB_InsertUnlimitSupportLog **)(this + 0x48c) = this_x00140;
  this_x00141 = operator_new(4);
  DB_LoadCleanPadPoint::DB_LoadCleanPadPoint(this_x00141);
  *(DB_LoadCleanPadPoint **)(this + 0x4a0) = this_x00141;
  this_x00142 = operator_new(4);
  DB_UpdateSchoolPoint::DB_UpdateSchoolPoint(this_x00142);
  *(DB_UpdateSchoolPoint **)(this + 0x4a8) = this_x00142;
  this_x00143 = operator_new(4);
  DB_SaveAccountInfo::DB_SaveAccountInfo(this_x00143);
  *(DB_SaveAccountInfo **)(this + 0x544) = this_x00143;
  this_x00144 = operator_new(4);
  DB_GoblinPadUpdateReward::DB_GoblinPadUpdateReward(this_x00144);
  *(DB_GoblinPadUpdateReward **)(this + 0x4b0) = this_x00144;
  this_x00145 = operator_new(4);
  DB_GoblinPadUpdateValidityTime::DB_GoblinPadUpdateValidityTime(this_x00145);
  *(DB_GoblinPadUpdateValidityTime **)(this + 0x4b4) = this_x00145;
  this_x00146 = operator_new(4);
  DB_LoadGameOption::DB_LoadGameOption(this_x00146);
  *(DB_LoadGameOption **)(this + 0x4bc) = this_x00146;
  this_x00147 = operator_new(4);
  DB_SaveGameOption_1::DB_SaveGameOption_1(this_x00147);
  *(DB_SaveGameOption_1 **)(this + 0x4c4) = this_x00147;
  this_x00148 = operator_new(4);
  DB_SaveGameOption_2::DB_SaveGameOption_2(this_x00148);
  *(DB_SaveGameOption_2 **)(this + 0x4c8) = this_x00148;
  this_x00149 = operator_new(4);
  DB_SaveCharacterOption::DB_SaveCharacterOption(this_x00149);
  *(DB_SaveCharacterOption **)(this + 0xad8) = this_x00149;
  this_x00150 = operator_new(4);
  DB_UpdateCoolTimeItem::DB_UpdateCoolTimeItem(this_x00150);
  *(DB_UpdateCoolTimeItem **)(this + 0x4cc) = this_x00150;
  this_x00151 = operator_new(4);
  DB_UpdateEffectItem::DB_UpdateEffectItem(this_x00151);
  *(DB_UpdateEffectItem **)(this + 0x4e0) = this_x00151;
  this_x00152 = operator_new(4);
  DB_UpdateAvatarJewelSlot::DB_UpdateAvatarJewelSlot(this_x00152);
  *(DB_UpdateAvatarJewelSlot **)(this + 0x4e8) = this_x00152;
  this_x00153 = operator_new(4);
  DB_UpdatePvPResult::DB_UpdatePvPResult(this_x00153);
  *(DB_UpdatePvPResult **)(this + 0x4d8) = this_x00153;
  this_x00154 = operator_new(4);
  DB_UpdatePvPLastPlayTime::DB_UpdatePvPLastPlayTime(this_x00154);
  *(DB_UpdatePvPLastPlayTime **)(this + 0x4dc) = this_x00154;
  this_x00155 = operator_new(4);
  DB_LoadBloodBestRecord::DB_LoadBloodBestRecord(this_x00155);
  *(DB_LoadBloodBestRecord **)(this + 0x500) = this_x00155;
  this_x00156 = operator_new(4);
  DB_UpdateBloodBestRecord::DB_UpdateBloodBestRecord(this_x00156);
  *(DB_UpdateBloodBestRecord **)(this + 0x504) = this_x00156;
  this_x00157 = operator_new(4);
  DB_LoadBreakAwayPreventData::DB_LoadBreakAwayPreventData(this_x00157);
  *(DB_LoadBreakAwayPreventData **)(this + 0x508) = this_x00157;
  this_x00158 = operator_new(4);
  DB_LoadBreakAwayRewardData::DB_LoadBreakAwayRewardData(this_x00158);
  *(DB_LoadBreakAwayRewardData **)(this + 0x50c) = this_x00158;
  this_x00159 = operator_new(4);
  DB_UpdateBreakAwayAccruedCera::DB_UpdateBreakAwayAccruedCera(this_x00159);
  *(DB_UpdateBreakAwayAccruedCera **)(this + 0x51c) = this_x00159;
  this_x00160 = operator_new(4);
  DB_UpdateBreakAwayUvList::DB_UpdateBreakAwayUvList(this_x00160);
  *(DB_UpdateBreakAwayUvList **)(this + 0x520) = this_x00160;
  this_x00161 = operator_new(4);
  DB_UpdateBreakAwayRuckPoint::DB_UpdateBreakAwayRuckPoint(this_x00161);
  *(DB_UpdateBreakAwayRuckPoint **)(this + 0x528) = this_x00161;
  this_x00162 = operator_new(4);
  DB_UpdateBreakAwayClearAddInfo::DB_UpdateBreakAwayClearAddInfo(this_x00162);
  *(DB_UpdateBreakAwayClearAddInfo **)(this + 0x514) = this_x00162;
  this_x00163 = operator_new(4);
  DB_UpdateBreakAwayDungeonClearCnt::DB_UpdateBreakAwayDungeonClearCnt(this_x00163);
  *(DB_UpdateBreakAwayDungeonClearCnt **)(this + 0x518) = this_x00163;
  this_x00164 = operator_new(4);
  DB_UpdateGMData::DB_UpdateGMData(this_x00164);
  *(DB_UpdateGMData **)(this + 0x52c) = this_x00164;
  this_x00165 = operator_new(4);
  DB_LoadDimension::DB_LoadDimension(this_x00165);
  *(DB_LoadDimension **)(this + 0x53c) = this_x00165;
  this_x00166 = operator_new(4);
  DB_UpdateDimension::DB_UpdateDimension(this_x00166);
  *(DB_UpdateDimension **)(this + 0x540) = this_x00166;
  this_x00167 = operator_new(4);
  DB_InsertCirculationStatistic::DB_InsertCirculationStatistic(this_x00167);
  *(DB_InsertCirculationStatistic **)(this + 0x548) = this_x00167;
  this_x00168 = operator_new(4);
  DB_LoadAutoMarketConditionsControl::DB_LoadAutoMarketConditionsControl(this_x00168);
  *(DB_LoadAutoMarketConditionsControl **)(this + 0x56c) = this_x00168;
  this_x00169 = operator_new(4);
  DB_UpdateAutoMarketConditionsControl::DB_UpdateAutoMarketConditionsControl(this_x00169);
  *(DB_UpdateAutoMarketConditionsControl **)(this + 0x570) = this_x00169;
  this_x00170 = operator_new(4);
  DB_UpdateOneDayLetheSkill::DB_UpdateOneDayLetheSkill(this_x00170);
  *(DB_UpdateOneDayLetheSkill **)(this + 0x574) = this_x00170;
  this_x00171 = operator_new(4);
  DB_UpdateVendingMachineStatistic::DB_UpdateVendingMachineStatistic(this_x00171);
  *(DB_UpdateVendingMachineStatistic **)(this + 0x590) = this_x00171;
  this_x00172 = operator_new(4);
  DB_LoadPowerWarStatueRanker::DB_LoadPowerWarStatueRanker(this_x00172);
  *(DB_LoadPowerWarStatueRanker **)(this + 0x598) = this_x00172;
  this_x00173 = operator_new(4);
  DB_LoadPowerWarStatueInfo::DB_LoadPowerWarStatueInfo(this_x00173);
  *(DB_LoadPowerWarStatueInfo **)(this + 0x59c) = this_x00173;
  this_x00174 = operator_new(4);
  DB_BlackipPrivateSecurityValuation::DB_BlackipPrivateSecurityValuation(this_x00174);
  *(DB_BlackipPrivateSecurityValuation **)(this + 0x594) = this_x00174;
  this_x00175 = operator_new(4);
  DB_UpdateServerMessage::DB_UpdateServerMessage(this_x00175);
  *(DB_UpdateServerMessage **)(this + 0x5b4) = this_x00175;
  this_x00176 = operator_new(4);
  DB_LoadServerMessage::DB_LoadServerMessage(this_x00176);
  *(DB_LoadServerMessage **)(this + 0x5b8) = this_x00176;
  this_x00177 = operator_new(4);
  DB_UpdateCharacterDay::DB_UpdateCharacterDay(this_x00177);
  *(DB_UpdateCharacterDay **)(this + 0x5bc) = this_x00177;
  this_x00178 = operator_new(4);
  DB_UpdateNPCRelationship::DB_UpdateNPCRelationship(this_x00178);
  *(DB_UpdateNPCRelationship **)(this + 0x5c0) = this_x00178;
  this_x00179 = operator_new(4);
  DB_SecurityCardAddCertCnt::DB_SecurityCardAddCertCnt(this_x00179);
  *(DB_SecurityCardAddCertCnt **)(this + 0x5f4) = this_x00179;
  this_x00180 = operator_new(4);
  DB_LoadExpertJob::DB_LoadExpertJob(this_x00180);
  *(DB_LoadExpertJob **)(this + 0x604) = this_x00180;
  this_x00181 = operator_new(4);
  DB_SaveExpertJob::DB_SaveExpertJob(this_x00181);
  *(DB_SaveExpertJob **)(this + 0x608) = this_x00181;
  this_x00182 = operator_new(4);
  DB_UpdateExpertJobStatistic::DB_UpdateExpertJobStatistic(this_x00182);
  *(DB_UpdateExpertJobStatistic **)(this + 0x60c) = this_x00182;
  this_x00183 = operator_new(4);
  DB_InsertServerLoadStatistic::DB_InsertServerLoadStatistic(this_x00183);
  *(DB_InsertServerLoadStatistic **)(this + 0x610) = this_x00183;
  this_x00184 = operator_new(4);
  DB_FindFactoryHub::DB_FindFactoryHub(this_x00184);
  *(DB_FindFactoryHub **)(this + 0x62c) = this_x00184;
  this_x00185 = operator_new(4);
  DB_HackIPSave::DB_HackIPSave(this_x00185);
  *(DB_HackIPSave **)(this + 0x644) = this_x00185;
  this_x00186 = operator_new(4);
  DB_CancelRestingUserRestrict::DB_CancelRestingUserRestrict(this_x00186);
  *(DB_CancelRestingUserRestrict **)(this + 0x658) = this_x00186;
  this_x00187 = operator_new(4);
  DB_SaveBloodDungeon::DB_SaveBloodDungeon(this_x00187);
  *(DB_SaveBloodDungeon **)(this + 0x660) = this_x00187;
  this_x00188 = operator_new(4);
  DB_LoadPowerWarInfo::DB_LoadPowerWarInfo(this_x00188);
  *(DB_LoadPowerWarInfo **)(this + 0x670) = this_x00188;
  this_x00189 = operator_new(4);
  DB_SecuServiceReward::DB_SecuServiceReward(this_x00189);
  *(DB_SecuServiceReward **)(this + 0x678) = this_x00189;
  this_x00190 = operator_new(4);
  DB_Find_Factory_Hub_User::DB_Find_Factory_Hub_User(this_x00190);
  *(DB_Find_Factory_Hub_User **)(this + 0x684) = this_x00190;
  this_x00191 = operator_new(4);
  DB_SaveConditionEventInfo::DB_SaveConditionEventInfo(this_x00191);
  *(DB_SaveConditionEventInfo **)(this + 0x680) = this_x00191;
  this_x00192 = operator_new(4);
  DB_DeletePowerWarStatueMessage::DB_DeletePowerWarStatueMessage(this_x00192);
  *(DB_DeletePowerWarStatueMessage **)(this + 0x698) = this_x00192;
  this_x00193 = operator_new(4);
  DB_LoadNoCacheData::DB_LoadNoCacheData(this_x00193);
  *(DB_LoadNoCacheData **)(this + 0x6a0) = this_x00193;
  this_x00194 = operator_new(4);
  DB_UpdateItemLock::DB_UpdateItemLock(this_x00194);
  *(DB_UpdateItemLock **)(this + 0x6e4) = this_x00194;
  this_x00195 = operator_new(4);
  DB_UpdateCreatureItemLock::DB_UpdateCreatureItemLock(this_x00195);
  *(DB_UpdateCreatureItemLock **)(this + 0x708) = this_x00195;
  this_x00196 = operator_new(4);
  DB_UpdateAvatarItemLock::DB_UpdateAvatarItemLock(this_x00196);
  *(DB_UpdateAvatarItemLock **)(this + 0x70c) = this_x00196;
  this_x00197 = operator_new(4);
  DB_UpdateMemberPlayInfoPcRoom::DB_UpdateMemberPlayInfoPcRoom(this_x00197);
  *(DB_UpdateMemberPlayInfoPcRoom **)(this + 0x710) = this_x00197;
  this_x00198 = operator_new(4);
  DB_UpdateCompoundEmblemStatics::DB_UpdateCompoundEmblemStatics(this_x00198);
  *(DB_UpdateCompoundEmblemStatics **)(this + 0x714) = this_x00198;
  this_x00199 = operator_new(4);
  DB_AccountHack_CheckMyAccount::DB_AccountHack_CheckMyAccount(this_x00199);
  *(DB_AccountHack_CheckMyAccount **)(this + 0x630) = this_x00199;
  this_x00200 = operator_new(4);
  DB_SecuServiceUpdateValidityTime::DB_SecuServiceUpdateValidityTime(this_x00200);
  *(DB_SecuServiceUpdateValidityTime **)(this + 0x728) = this_x00200;
  this_x00201 = operator_new(4);
  DB_AutoPunishedSecondUserData::DB_AutoPunishedSecondUserData(this_x00201);
  *(DB_AutoPunishedSecondUserData **)(this + 0x72c) = this_x00201;
  this_x00202 = operator_new(4);
  DB_SaveProperDungeonClearCount::DB_SaveProperDungeonClearCount(this_x00202);
  *(DB_SaveProperDungeonClearCount **)(this + 0x754) = this_x00202;
  this_x00203 = operator_new(4);
  DB_LoadPvPBuddy::DB_LoadPvPBuddy(this_x00203);
  *(DB_LoadPvPBuddy **)(this + 0x758) = this_x00203;
  this_x00204 = operator_new(4);
  DB_InsertPvPBuddy::DB_InsertPvPBuddy(this_x00204);
  *(DB_InsertPvPBuddy **)(this + 0x770) = this_x00204;
  this_x00205 = operator_new(4);
  DB_DeletePvPBuddy::DB_DeletePvPBuddy(this_x00205);
  *(DB_DeletePvPBuddy **)(this + 0x774) = this_x00205;
  this_x00206 = operator_new(4);
  DB_UpdatePvPBuddy::DB_UpdatePvPBuddy(this_x00206);
  *(DB_UpdatePvPBuddy **)(this + 0x778) = this_x00206;
  this_x00207 = operator_new(4);
  DB_DeleteGuild::DB_DeleteGuild(this_x00207);
  *(DB_DeleteGuild **)(this + 0x780) = this_x00207;
  this_x00208 = operator_new(4);
  DB_LoadPvPLiveEventData::DB_LoadPvPLiveEventData(this_x00208);
  *(DB_LoadPvPLiveEventData **)(this + 0x784) = this_x00208;
  this_x00209 = operator_new(4);
  DB_UpdatePvPLiveEventData::DB_UpdatePvPLiveEventData(this_x00209);
  *(DB_UpdatePvPLiveEventData **)(this + 0x788) = this_x00209;
  this_x00210 = operator_new(4);
  DB_LoadOnlinePreliminaryMember::DB_LoadOnlinePreliminaryMember(this_x00210);
  *(DB_LoadOnlinePreliminaryMember **)(this + 0x79c) = this_x00210;
  this_x00211 = operator_new(4);
  DB_UpdateOnlinePreliminaryMember::DB_UpdateOnlinePreliminaryMember(this_x00211);
  *(DB_UpdateOnlinePreliminaryMember **)(this + 0x7a0) = this_x00211;
  this_x00212 = operator_new(4);
  DB_LoadOnlinePreliminaryTeam::DB_LoadOnlinePreliminaryTeam(this_x00212);
  *(DB_LoadOnlinePreliminaryTeam **)(this + 0x7a4) = this_x00212;
  this_x00213 = operator_new(4);
  DB_UpdateOnlinePreliminaryTeam::DB_UpdateOnlinePreliminaryTeam(this_x00213);
  *(DB_UpdateOnlinePreliminaryTeam **)(this + 0x7a8) = this_x00213;
  this_x00214 = operator_new(4);
  DB_UpdateOnlinePreliminaryMemberMatchList::DB_UpdateOnlinePreliminaryMemberMatchList(this_x00214);
  *(DB_UpdateOnlinePreliminaryMemberMatchList **)(this + 0x7b0) = this_x00214;
  this_x00215 = operator_new(4);
  DB_LoadOnlinePreliminaryTeamMatchList::DB_LoadOnlinePreliminaryTeamMatchList(this_x00215);
  *(DB_LoadOnlinePreliminaryTeamMatchList **)(this + 0x7b4) = this_x00215;
  this_x00216 = operator_new(4);
  DB_UpdateOnlinePreliminaryTeamMatchList::DB_UpdateOnlinePreliminaryTeamMatchList(this_x00216);
  *(DB_UpdateOnlinePreliminaryTeamMatchList **)(this + 0x7b8) = this_x00216;
  this_x00217 = operator_new(4);
  DB_SaveRedeemItemList::DB_SaveRedeemItemList(this_x00217);
  *(DB_SaveRedeemItemList **)(this + 0x7d4) = this_x00217;
  this_x00218 = operator_new(4);
  DB_CreateAccountCargo::DB_CreateAccountCargo(this_x00218);
  *(DB_CreateAccountCargo **)(this + 0x7bc) = this_x00218;
  this_x00219 = operator_new(4);
  DB_UpgradeAccountCargo::DB_UpgradeAccountCargo(this_x00219);
  *(DB_UpgradeAccountCargo **)(this + 0x7c0) = this_x00219;
  this_x00220 = operator_new(4);
  DB_DeleteAccountCargo::DB_DeleteAccountCargo(this_x00220);
  *(DB_DeleteAccountCargo **)(this + 0x7c4) = this_x00220;
  this_x00221 = operator_new(4);
  DB_LoadAccountCargo::DB_LoadAccountCargo(this_x00221);
  *(DB_LoadAccountCargo **)(this + 0x7cc) = this_x00221;
  this_x00222 = operator_new(4);
  DB_SaveAccountCargo::DB_SaveAccountCargo(this_x00222);
  *(DB_SaveAccountCargo **)(this + 0x7c8) = this_x00222;
  this_x00223 = operator_new(4);
  DB_SaveMileage::DB_SaveMileage(this_x00223);
  *(DB_SaveMileage **)(this + 0x7f4) = this_x00223;
  this_x00224 = operator_new(4);
  DB_LoadMileage::DB_LoadMileage(this_x00224);
  *(DB_LoadMileage **)(this + 0x7f8) = this_x00224;
  this_x00225 = operator_new(4);
  advancealtar::DB_Load::DB_Load(this_x00225);
  *(DB_Load **)(this + 0x68) = this_x00225;
  this_x00226 = operator_new(4);
  advancealtar::DB_Update::DB_Update(this_x00226);
  *(DB_Update **)(this + 0x6c) = this_x00226;
  this_x00227 = operator_new(4);
  DB_Multi_MailBox_Req_Send::DB_Multi_MailBox_Req_Send(this_x00227);
  *(DB_Multi_MailBox_Req_Send **)(this + 0x7d8) = this_x00227;
  this_x00228 = operator_new(4);
  DB_ReqQueryCharacInfoMailbox::DB_ReqQueryCharacInfoMailbox(this_x00228);
  *(DB_ReqQueryCharacInfoMailbox **)(this + 0x7dc) = this_x00228;
  this_x00229 = operator_new(4);
  DB_GuildExpBookDelete::DB_GuildExpBookDelete(this_x00229);
  *(DB_GuildExpBookDelete **)(this + 0x828) = this_x00229;
  this_x00230 = operator_new(4);
  DB_InsertPoliceSaveChatting::DB_InsertPoliceSaveChatting(this_x00230);
  *(DB_InsertPoliceSaveChatting **)(this + 0x834) = this_x00230;
  this_x00231 = operator_new(4);
  DB_UpdateChuseokPackagePurchase::DB_UpdateChuseokPackagePurchase(this_x00231);
  *(DB_UpdateChuseokPackagePurchase **)(this + 0x850) = this_x00231;
  this_x00232 = operator_new(4);
  DB_CheckJoinGuild::DB_CheckJoinGuild(this_x00232);
  *(DB_CheckJoinGuild **)(this + 0x85c) = this_x00232;
  this_x00233 = operator_new(4);
  DB_RequestJoinGuild::DB_RequestJoinGuild(this_x00233);
  *(DB_RequestJoinGuild **)(this + 0x860) = this_x00233;
  this_x00234 = operator_new(4);
  DB_JoinGuildInfo::DB_JoinGuildInfo(this_x00234);
  *(DB_JoinGuildInfo **)(this + 0x868) = this_x00234;
  this_x00235 = operator_new(4);
  DB_CancelJoinGuild::DB_CancelJoinGuild(this_x00235);
  *(DB_CancelJoinGuild **)(this + 0x864) = this_x00235;
  this_x00236 = operator_new(4);
  DB_GuildJoinList::DB_GuildJoinList(this_x00236);
  *(DB_GuildJoinList **)(this + 0x86c) = this_x00236;
  this_x00237 = operator_new(4);
  DB_DenyJoinGuild::DB_DenyJoinGuild(this_x00237);
  *(DB_DenyJoinGuild **)(this + 0x874) = this_x00237;
  pDVar2 = operator_new(4);
  DB_UpdateReturnUserFirstLogin::DB_UpdateReturnUserFirstLogin(pDVar2);
  *(DB_UpdateReturnUserFirstLogin **)(this + 0x880) = pDVar2;
  this_x00238 = operator_new(4);
  DB_InsertAccountFirstLoginFlag::DB_InsertAccountFirstLoginFlag(this_x00238);
  *(DB_InsertAccountFirstLoginFlag **)(this + 0x97c) = this_x00238;
  this_x00239 = operator_new(4);
  DB_SaveGameOption_QuickChatting::DB_SaveGameOption_QuickChatting(this_x00239);
  *(DB_SaveGameOption_QuickChatting **)(this + 0x8e8) = this_x00239;
  this_x00240 = operator_new(4);
  DB_UpdatePurchaseCashItemBonus::DB_UpdatePurchaseCashItemBonus(this_x00240);
  *(DB_UpdatePurchaseCashItemBonus **)(this + 0x8f4) = this_x00240;
  this_x00241 = operator_new(4);
  DB_UpdateItemCountValue::DB_UpdateItemCountValue(this_x00241);
  *(DB_UpdateItemCountValue **)(this + 0x904) = this_x00241;
  this_x00242 = operator_new(4);
  DB_UpdateLimitItemUsage::DB_UpdateLimitItemUsage(this_x00242);
  *(DB_UpdateLimitItemUsage **)(this + 0x908) = this_x00242;
  this_x00243 = operator_new(4);
  DB_LogBuyItem::DB_LogBuyItem(this_x00243);
  *(DB_LogBuyItem **)(this + 0x948) = this_x00243;
  this_x00244 = operator_new(4);
  DB_UpdateRevengeData::DB_UpdateRevengeData(this_x00244);
  *(DB_UpdateRevengeData **)(this + 0x914) = this_x00244;
  this_x00245 = operator_new(4);
  DB_UpdateGoblinPadAdvicePwdRewardTime::DB_UpdateGoblinPadAdvicePwdRewardTime(this_x00245);
  *(DB_UpdateGoblinPadAdvicePwdRewardTime **)(this + 0x920) = this_x00245;
  this_x00246 = operator_new(4);
  DB_UpdateCharacPlayTime::DB_UpdateCharacPlayTime(this_x00246);
  *(DB_UpdateCharacPlayTime **)(this + 0x93c) = this_x00246;
  this_x00247 = operator_new(4);
  DB_SaveExpandEquipslot::DB_SaveExpandEquipslot(this_x00247);
  *(DB_SaveExpandEquipslot **)(this + 0x9b8) = this_x00247;
  this_x00248 = operator_new(4);
  DB_UpdateFairPvPScore::DB_UpdateFairPvPScore(this_x00248);
  *(DB_UpdateFairPvPScore **)(this + 0x988) = this_x00248;
  this_x00249 = operator_new(4);
  DB_SavePvPMissionList::DB_SavePvPMissionList(this_x00249);
  *(DB_SavePvPMissionList **)(this + 0x990) = this_x00249;
  this_x00250 = operator_new(4);
  DB_InsertResponseTime::DB_InsertResponseTime(this_x00250);
  *(DB_InsertResponseTime **)(this + 0x9b4) = this_x00250;
  this_x00251 = operator_new(4);
  DB_UpdateItemMakingSkill::DB_UpdateItemMakingSkill(this_x00251);
  *(DB_UpdateItemMakingSkill **)(this + 0x9bc) = this_x00251;
  this_x00252 = operator_new(4);
  DB_TOD_Random_Select_UserAPC::DB_TOD_Random_Select_UserAPC(this_x00252);
  *(DB_TOD_Random_Select_UserAPC **)(this + 0x9d8) = this_x00252;
  this_x00253 = operator_new(4);
  DB_TOD_Reset_UserAPC::DB_TOD_Reset_UserAPC(this_x00253);
  *(DB_TOD_Reset_UserAPC **)(this + 0x9e0) = this_x00253;
  this_x00254 = operator_new(4);
  DB_TOD_Update_UserState::DB_TOD_Update_UserState(this_x00254);
  *(DB_TOD_Update_UserState **)(this + 0x9e4) = this_x00254;
  this_x00255 = operator_new(4);
  DB_UpdateQuestShopBuyingStatusList::DB_UpdateQuestShopBuyingStatusList(this_x00255);
  *(DB_UpdateQuestShopBuyingStatusList **)(this + 0x9e8) = this_x00255;
  this_x00256 = operator_new(4);
  DB_UpdateAddItemCountValue::DB_UpdateAddItemCountValue(this_x00256);
  *(DB_UpdateAddItemCountValue **)(this + 0xa04) = this_x00256;
  this_x00257 = operator_new(4);
  DB_SaveKillMonsterInfo::DB_SaveKillMonsterInfo(this_x00257);
  *(DB_SaveKillMonsterInfo **)(this + 0xa08) = this_x00257;
  this_x00258 = operator_new(4);
  DB_LoadKillMonsterInfo::DB_LoadKillMonsterInfo(this_x00258);
  *(DB_LoadKillMonsterInfo **)(this + 0xa0c) = this_x00258;
  this_x00259 = operator_new(4);
  DB_SaveTitleBook::DB_SaveTitleBook(this_x00259);
  *(DB_SaveTitleBook **)(this + 0xa18) = this_x00259;
  this_x00260 = operator_new(4);
  DB_SaveAchievement::DB_SaveAchievement(this_x00260);
  *(DB_SaveAchievement **)(this + 0xa1c) = this_x00260;
  this_x00261 = operator_new(4);
  DB_UpdateUserFatigueQuantity::DB_UpdateUserFatigueQuantity(this_x00261);
  *(DB_UpdateUserFatigueQuantity **)(this + 0xa20) = this_x00261;
  this_x00262 = operator_new(4);
  DB_UpdateUserGiftFatigueQuantity::DB_UpdateUserGiftFatigueQuantity(this_x00262);
  *(DB_UpdateUserGiftFatigueQuantity **)(this + 0xa24) = this_x00262;
  this_x00263 = operator_new(4);
  DB_SaveCharacSlotExtend::DB_SaveCharacSlotExtend(this_x00263);
  *(DB_SaveCharacSlotExtend **)(this + 0xa2c) = this_x00263;
  this_x00264 = operator_new(4);
  DB_SaveGiveAvengerTitleFlag::DB_SaveGiveAvengerTitleFlag(this_x00264);
  *(DB_SaveGiveAvengerTitleFlag **)(this + 0xa38) = this_x00264;
  this_x00265 = operator_new(4);
  DB_SelectLevelUpReward::DB_SelectLevelUpReward(this_x00265);
  *(DB_SelectLevelUpReward **)(this + 0xa3c) = this_x00265;
  pDVar2 = operator_new(4);
  DB_UpdateReturnUserFirstLogin::DB_UpdateReturnUserFirstLogin(pDVar2);
  *(DB_UpdateReturnUserFirstLogin **)(this + 0x880) = pDVar2;
  this_x00266 = operator_new(4);
  DB_InsertRandomOptionItemInform::DB_InsertRandomOptionItemInform(this_x00266);
  *(DB_InsertRandomOptionItemInform **)(this + 0xa68) = this_x00266;
  this_x00267 = operator_new(4);
  DB_StatisticCeraShopGiftLog::DB_StatisticCeraShopGiftLog(this_x00267);
  *(DB_StatisticCeraShopGiftLog **)(this + 0xa74) = this_x00267;
  this_x00268 = operator_new(4);
  DB_GetUserRegdate::DB_GetUserRegdate(this_x00268);
  *(DB_GetUserRegdate **)(this + 0xa88) = this_x00268;
  this_x00269 = operator_new(4);
  DB_UpdateOntimeLastRecvIdx::DB_UpdateOntimeLastRecvIdx(this_x00269);
  *(DB_UpdateOntimeLastRecvIdx **)(this + 0xa60) = this_x00269;
  this_x00270 = operator_new(4);
  DB_InsertOnTimeRewardUserLog::DB_InsertOnTimeRewardUserLog(this_x00270);
  *(DB_InsertOnTimeRewardUserLog **)(this + 0xa64) = this_x00270;
  this_x00271 = operator_new(4);
  DB_CheckCharacName::DB_CheckCharacName(this_x00271);
  *(DB_CheckCharacName **)(this + 0xa8c) = this_x00271;
  this_x00272 = operator_new(4);
  DB_MailBox_Req_System_Multi_Mail::DB_MailBox_Req_System_Multi_Mail(this_x00272);
  *(DB_MailBox_Req_System_Multi_Mail **)(this + 0xa94) = this_x00272;
  this_x00273 = operator_new(4);
  DB_CheckSecuReward::DB_CheckSecuReward(this_x00273);
  *(DB_CheckSecuReward **)(this + 0xab0) = this_x00273;
  this_x00274 = operator_new(4);
  DB_UpdateFatigueAttendance::DB_UpdateFatigueAttendance(this_x00274);
  *(DB_UpdateFatigueAttendance **)(this + 0xab4) = this_x00274;
  this_x00275 = operator_new(4);
  DB_UpdateInGameEventHistory::DB_UpdateInGameEventHistory(this_x00275);
  *(DB_UpdateInGameEventHistory **)(this + 0xab8) = this_x00275;
  this_x00276 = operator_new(4);
  DB_UpdateInventoryCapacity::DB_UpdateInventoryCapacity(this_x00276);
  *(DB_UpdateInventoryCapacity **)(this + 0xabc) = this_x00276;
  this_x00277 = operator_new(4);
  DB_UpdateAuraAvatarOption::DB_UpdateAuraAvatarOption(this_x00277);
  *(DB_UpdateAuraAvatarOption **)(this + 0xac0) = this_x00277;
  this_x00278 = operator_new(4);
  DB_InsertCeraItemHistory::DB_InsertCeraItemHistory(this_x00278);
  *(DB_InsertCeraItemHistory **)(this + 0xac8) = this_x00278;
  this_x00279 = operator_new(4);
  DB_UpdateAvatarHistory::DB_UpdateAvatarHistory(this_x00279);
  *(DB_UpdateAvatarHistory **)(this + 0xac4) = this_x00279;
  this_x00280 = operator_new(4);
  DB_SaveItemDictionaryFlag::DB_SaveItemDictionaryFlag(this_x00280);
  *(DB_SaveItemDictionaryFlag **)(this + 0xacc) = this_x00280;
  this_x00281 = operator_new(4);
  DB_SaveMercenaryData::DB_SaveMercenaryData(this_x00281);
  *(DB_SaveMercenaryData **)(this + 0xad0) = this_x00281;
  this_x00282 = operator_new(4);
  DB_HadesPunish::DB_HadesPunish(this_x00282);
  *(DB_HadesPunish **)(this + 0xadc) = this_x00282;
  this_x00283 = operator_new(4);
  DB_Check3rdPartyConcent::DB_Check3rdPartyConcent(this_x00283);
  *(DB_Check3rdPartyConcent **)(this + 0xae0) = this_x00283;
  this_x00284 = operator_new(4);
  DB_MercenaryLogInfo::DB_MercenaryLogInfo(this_x00284);
  *(DB_MercenaryLogInfo **)(this + 0xae4) = this_x00284;
  this_x00285 = operator_new(4);
  DB_SelectCharacMid::DB_SelectCharacMid(this_x00285);
  *(DB_SelectCharacMid **)(this + 0xae8) = this_x00285;
  this_x00286 = operator_new(4);
  DB_AvatarOptionChange::DB_AvatarOptionChange(this_x00286);
  *(DB_AvatarOptionChange **)(this + 0xb10) = this_x00286;
  this_x00287 = operator_new(4);
  DB_SaveObjectBringUp::DB_SaveObjectBringUp(this_x00287);
  *(DB_SaveObjectBringUp **)(this + 0xb2c) = this_x00287;
  this_x00288 = operator_new(4);
  DB_SaveGameOption_ChattingEmoticon::DB_SaveGameOption_ChattingEmoticon(this_x00288);
  *(DB_SaveGameOption_ChattingEmoticon **)(this + 0xb60) = this_x00288;
  this_x00289 = operator_new(4);
  DB_UpdateBoosterGageData::DB_UpdateBoosterGageData(this_x00289);
  *(DB_UpdateBoosterGageData **)(this + 0xb64) = this_x00289;
  this_x00290 = operator_new(4);
  CLocalChina_DB_BreakAwayReset::CLocalChina_DB_BreakAwayReset(this_x00290);
  *(CLocalChina_DB_BreakAwayReset **)(this + 0xb78) = this_x00290;
  this_x00291 = operator_new(4);
  CLocalChina_DB_LastDay_BreakAway::CLocalChina_DB_LastDay_BreakAway(this_x00291);
  *(CLocalChina_DB_LastDay_BreakAway **)(this + 0xb7c) = this_x00291;
  this_x00292 = operator_new(4);
  CLocalGlobal_DB_STATICS_BOSSTOWER::CLocalGlobal_DB_STATICS_BOSSTOWER(this_x00292);
  *(CLocalGlobal_DB_STATICS_BOSSTOWER **)(this + 0xb84) = this_x00292;
  this_x00293 = operator_new(4);
  DB_UpdateCeraShopPurchaseCount::DB_UpdateCeraShopPurchaseCount(this_x00293);
  *(DB_UpdateCeraShopPurchaseCount **)(this + 0xb68) = this_x00293;
  this_x00294 = operator_new(0x1c);
                    /* try { // try from 083feb18 to 083feb1c has its CatchHandler @ 083feb1f */
  DB_AradDatabaseDispatcher::DB_AradDatabaseDispatcher(this_x00294);
  *(DB_AradDatabaseDispatcher **)(this + 0xb74) = this_x00294;
                    /* try { // try from 083feb48 to 083fefc7 has its CatchHandler @ 083ff0dd */
  this_x00295 = operator_new(4);
  DB_LoadPuUserCheck::DB_LoadPuUserCheck(this_x00295);
  *(DB_LoadPuUserCheck **)(this + 0xb88) = this_x00295;
  this_x00296 = operator_new(4);
  DB_SavePuUserCheck::DB_SavePuUserCheck(this_x00296);
  *(DB_SavePuUserCheck **)(this + 0xb8c) = this_x00296;
  this_x00297 = operator_new(4);
  advancealtar::DB_StatisticAdvanceAltar::DB_StatisticAdvanceAltar(this_x00297);
  *(DB_StatisticAdvanceAltar **)(this + 0xcf0) = this_x00297;
  this_x00298 = operator_new(4);
  DB_CheckAddFriend::DB_CheckAddFriend(this_x00298);
  *(DB_CheckAddFriend **)(this + 0xcfc) = this_x00298;
  this_x00299 = operator_new(4);
  DB_SaveInformNotice::DB_SaveInformNotice(this_x00299);
  *(DB_SaveInformNotice **)(this + 0xbd8) = this_x00299;
  this_x00300 = operator_new(4);
  DB_NoticeIngameAdvertisement::DB_NoticeIngameAdvertisement(this_x00300);
  *(DB_NoticeIngameAdvertisement **)(this + 0xbe4) = this_x00300;
  this_x00301 = operator_new(4);
  DB_RequestCharacSkillInfo::DB_RequestCharacSkillInfo(this_x00301);
  *(DB_RequestCharacSkillInfo **)(this + 0xbf8) = this_x00301;
  this_x00302 = operator_new(4);
  DB_RequestTagCharacInfo::DB_RequestTagCharacInfo(this_x00302);
  *(DB_RequestTagCharacInfo **)(this + 0xbfc) = this_x00302;
  this_x00303 = operator_new(4);
  DB_SavePcRoomPlayTimeEvent::DB_SavePcRoomPlayTimeEvent(this_x00303);
  *(DB_SavePcRoomPlayTimeEvent **)(this + 0xc00) = this_x00303;
  this_x00304 = operator_new(4);
  DB_SaveBestClearTime::DB_SaveBestClearTime(this_x00304);
  *(DB_SaveBestClearTime **)(this + 0xc04) = this_x00304;
  this_x00305 = operator_new(4);
  DB_AuctionSubMoney::DB_AuctionSubMoney(this_x00305);
  *(DB_AuctionSubMoney **)(this + 0xc28) = this_x00305;
  this_x00306 = operator_new(4);
  DB_UpdateBlueMarbleEnterCount::DB_UpdateBlueMarbleEnterCount(this_x00306);
  *(DB_UpdateBlueMarbleEnterCount **)(this + 0xc34) = this_x00306;
  this_x00307 = operator_new(4);
  DB_InsertAttendanceEvent::DB_InsertAttendanceEvent(this_x00307);
  *(DB_InsertAttendanceEvent **)(this + 0xc3c) = this_x00307;
  this_x00308 = operator_new(4);
  DB_UpdateBingoEvent::DB_UpdateBingoEvent(this_x00308);
  *(DB_UpdateBingoEvent **)(this + 0xc80) = this_x00308;
  this_x00309 = operator_new(4);
  DB_EventSaveGrowthWeapon::DB_EventSaveGrowthWeapon(this_x00309);
  *(DB_EventSaveGrowthWeapon **)(this + 0xc50) = this_x00309;
  this_x00310 = operator_new(4);
  DB_EventUpdateGrowthWeaponCharac::DB_EventUpdateGrowthWeaponCharac(this_x00310);
  *(DB_EventUpdateGrowthWeaponCharac **)(this + 0xc54) = this_x00310;
  this_x00311 = operator_new(4);
  DB_EventUpdateGrowthWeaponTimepiece::DB_EventUpdateGrowthWeaponTimepiece(this_x00311);
  *(DB_EventUpdateGrowthWeaponTimepiece **)(this + 0xc58) = this_x00311;
  this_x00312 = operator_new(4);
  DB_EventGrowthWeaponReset::DB_EventGrowthWeaponReset(this_x00312);
  *(DB_EventGrowthWeaponReset **)(this + 0xc5c) = this_x00312;
  this_x00313 = operator_new(4);
  DB_EventSaveGiveGrowCreature::DB_EventSaveGiveGrowCreature(this_x00313);
  *(DB_EventSaveGiveGrowCreature **)(this + 0xc60) = this_x00313;
  this_x00314 = operator_new(4);
  DB_EventUpdateGiveGrowCreature::DB_EventUpdateGiveGrowCreature(this_x00314);
  *(DB_EventUpdateGiveGrowCreature **)(this + 0xc64) = this_x00314;
  this_x00315 = operator_new(4);
  DB_EventAccountCharacterLevelUpOnceGift::DB_EventAccountCharacterLevelUpOnceGift(this_x00315);
  *(DB_EventAccountCharacterLevelUpOnceGift **)(this + 0xc68) = this_x00315;
  this_x00316 = operator_new(4);
  DB_AvatarColorChange::DB_AvatarColorChange(this_x00316);
  *(DB_AvatarColorChange **)(this + 0xc6c) = this_x00316;
  this_x00317 = operator_new(4);
  DB_TestTradeRestrict::DB_TestTradeRestrict(this_x00317);
  *(DB_TestTradeRestrict **)(this + 0xc74) = this_x00317;
  this_x00318 = operator_new(4);
  DB_UpdateComboSkill::DB_UpdateComboSkill(this_x00318);
  *(DB_UpdateComboSkill **)(this + 0xc78) = this_x00318;
  this_x00319 = operator_new(4);
  DB_SaveCharacInformNotice::DB_SaveCharacInformNotice(this_x00319);
  *(DB_SaveCharacInformNotice **)(this + 0xc48) = this_x00319;
  this_x00320 = operator_new(4);
  DB_UpdateSeriaRoomAnimationDeco::DB_UpdateSeriaRoomAnimationDeco(this_x00320);
  *(DB_UpdateSeriaRoomAnimationDeco **)(this + 0xc7c) = this_x00320;
  this_x00321 = operator_new(4);
  DB_LoadCharacHotKeyOption::DB_LoadCharacHotKeyOption(this_x00321);
  *(DB_LoadCharacHotKeyOption **)(this + 0xc84) = this_x00321;
  this_x00322 = operator_new(4);
  DB_LogIngameAdvertisement::DB_LogIngameAdvertisement(this_x00322);
  *(DB_LogIngameAdvertisement **)(this + 0xcb4) = this_x00322;
  this_x00323 = operator_new(4);
  DB_LogCeraShopError::DB_LogCeraShopError(this_x00323);
  *(DB_LogCeraShopError **)(this + 0xcbc) = this_x00323;
  this_x00324 = operator_new(4);
  DB_GetPremiumSelectedCubeInfo::DB_GetPremiumSelectedCubeInfo(this_x00324);
  *(DB_GetPremiumSelectedCubeInfo **)(this + 0xccc) = this_x00324;
  this_x00325 = operator_new(4);
  DB_InsertEventStageLog::DB_InsertEventStageLog(this_x00325);
  *(DB_InsertEventStageLog **)(this + 0xcd0) = this_x00325;
  this_x00326 = operator_new(0x1c);
                    /* try { // try from 083fefcf to 083fefd3 has its CatchHandler @ 083fefd6 */
  DB_DispatcherTaiwan::DB_DispatcherTaiwan(this_x00326);
  *(DB_DispatcherTaiwan **)(this + 0xd3c) = this_x00326;
                    /* try { // try from 083fefff to 083ff0bc has its CatchHandler @ 083ff0dd */
  this_x00327 = operator_new(4);
  DB_SaveCerashopAddRestrictType::DB_SaveCerashopAddRestrictType(this_x00327);
  *(DB_SaveCerashopAddRestrictType **)(this + 0xd04) = this_x00327;
  this_x00328 = operator_new(4);
  DB_LoadCerashopAddRestrictType::DB_LoadCerashopAddRestrictType(this_x00328);
  *(DB_LoadCerashopAddRestrictType **)(this + 0xd08) = this_x00328;
  this_x00329 = operator_new(4);
  DB_InsertAccountFirstLoginDailyFlag::DB_InsertAccountFirstLoginDailyFlag(this_x00329);
  *(DB_InsertAccountFirstLoginDailyFlag **)(this + 0xd0c) = this_x00329;
  this_x00330 = operator_new(4);
  DB_SaveEventLevelupSupport::DB_SaveEventLevelupSupport(this_x00330);
  *(DB_SaveEventLevelupSupport **)(this + 0xd40) = this_x00330;
  this_x00331 = operator_new(4);
  DB_LoadEventLevelupSupport::DB_LoadEventLevelupSupport(this_x00331);
  *(DB_LoadEventLevelupSupport **)(this + 0xd44) = this_x00331;
  this_x00332 = operator_new(4);
  DB_SelectAllowProxyUser::DB_SelectAllowProxyUser(this_x00332);
  *(DB_SelectAllowProxyUser **)(this + 0xd4c) = this_x00332;
  return 1;
}

```

---

## UnregistDispatcher

```asm
// === 083ff156 DBTask::UnregistDispatcher  [0x083ff156-0x83ff1c7] ===
 83ff156:	55                   	push   %ebp
 83ff157:	89 e5                	mov    %esp,%ebp
 83ff159:	83 ec 28             	sub    $0x28,%esp
 83ff15c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83ff163:	eb 4e                	jmp    83ff1b3 <_ZN6DBTask18UnregistDispatcherEv+0x5d>
 83ff165:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83ff168:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff16b:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 83ff16f:	85 c0                	test   %eax,%eax
 83ff171:	74 3c                	je     83ff1af <_ZN6DBTask18UnregistDispatcherEv+0x59>
 83ff173:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83ff176:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff179:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 83ff17d:	85 c0                	test   %eax,%eax
 83ff17f:	74 20                	je     83ff1a1 <_ZN6DBTask18UnregistDispatcherEv+0x4b>
 83ff181:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83ff184:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff187:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 83ff18b:	8b 00                	mov    (%eax),%eax
 83ff18d:	83 c0 08             	add    $0x8,%eax
 83ff190:	8b 08                	mov    (%eax),%ecx
 83ff192:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83ff195:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff198:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 83ff19c:	89 04 24             	mov    %eax,(%esp)
 83ff19f:	ff d1                	call   *%ecx
 83ff1a1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83ff1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83ff1a7:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 83ff1ae:	00 
 83ff1af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83ff1b3:	81 7d f4 53 03 00 00 	cmpl   $0x353,-0xc(%ebp)
 83ff1ba:	0f 9e c0             	setle  %al
 83ff1bd:	84 c0                	test   %al,%al
 83ff1bf:	75 a4                	jne    83ff165 <_ZN6DBTask18UnregistDispatcherEv+0xf>
 83ff1c1:	b8 01 00 00 00       	mov    $0x1,%eax
 83ff1c6:	c9                   	leave
 83ff1c7:	c3                   	ret

```

```c
// DBTask::UnregistDispatcher @ 0x83ff156

/* DBTask::UnregistDispatcher() */

undefined4 __thiscall DBTask::UnregistDispatcher(DBTask *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x354; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4 + 4) != 0) {
      if (*(int *)(this + local_10 * 4 + 4) != 0) {
        (**(code **)(**(int **)(this + local_10 * 4 + 4) + 8))
                  (*(undefined4 *)(this + local_10 * 4 + 4));
      }
      *(undefined4 *)(this + local_10 * 4 + 4) = 0;
    }
  }
  return 1;
}

```

---

## ~DBTask

```asm
// === 083fbfda DBTask::~DBTask  [0x083fbfda-0x83fbfed] ===
 83fbfda:	55                   	push   %ebp
 83fbfdb:	89 e5                	mov    %esp,%ebp
 83fbfdd:	83 ec 18             	sub    $0x18,%esp
 83fbfe0:	8b 45 08             	mov    0x8(%ebp),%eax
 83fbfe3:	89 04 24             	mov    %eax,(%esp)
 83fbfe6:	e8 6b 31 00 00       	call   83ff156 <_ZN6DBTask18UnregistDispatcherEv>
 83fbfeb:	c9                   	leave
 83fbfec:	c3                   	ret
 83fbfed:	90                   	nop

```

```c
// DBTask::~DBTask @ 0x83fbfda

/* DBTask::~DBTask() */

void __thiscall DBTask::~DBTask(DBTask *this)

{
  UnregistDispatcher(this);
  return;
}

```

