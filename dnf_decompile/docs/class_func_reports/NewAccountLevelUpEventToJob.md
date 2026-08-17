# NewAccountLevelUpEventToJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## EndEvent

```asm
// === 081b824c NewAccountLevelUpEventToJob::EndEvent  [0x081b824c-0x81b829d] ===
 81b824c:	55                   	push   %ebp
 81b824d:	89 e5                	mov    %esp,%ebp
 81b824f:	83 ec 28             	sub    $0x28,%esp
 81b8252:	8b 45 08             	mov    0x8(%ebp),%eax
 81b8255:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b825c:	00 
 81b825d:	89 04 24             	mov    %eax,(%esp)
 81b8260:	e8 7d 02 f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b8265:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b826c:	00 
 81b826d:	c7 44 24 08 2b 00 00 	movl   $0x2b,0x8(%esp)
 81b8274:	00 
 81b8275:	c7 44 24 04 a0 c8 bb 	movl   $0x8bbc8a0,0x4(%esp)
 81b827c:	08 
 81b827d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b8280:	89 04 24             	mov    %eax,(%esp)
 81b8283:	e8 90 74 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b8288:	c7 44 24 04 84 bb bb 	movl   $0x8bbbb84,0x4(%esp)
 81b828f:	08 
 81b8290:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b8293:	89 04 24             	mov    %eax,(%esp)
 81b8296:	e8 ed 74 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b829b:	c9                   	leave
 81b829c:	c3                   	ret
 81b829d:	90                   	nop

```

```c
// NewAccountLevelUpEventToJob::EndEvent @ 0x81b824c

/* NewAccountLevelUpEventToJob::EndEvent() */

void __thiscall NewAccountLevelUpEventToJob::EndEvent(NewAccountLevelUpEventToJob *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void NewAccountLevelUpEventToJob::EndEvent()",0x2b,0);
  cMyTrace::operator()(local_1c,"NewAccountLevelUpEvent Event End!");
  return;
}

```

---

## NewAccountLevelUpEventToJob

```asm
// === 081b8170 NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob  [0x081b8170-0x81b818b] ===
 81b8170:	55                   	push   %ebp
 81b8171:	89 e5                	mov    %esp,%ebp
 81b8173:	83 ec 18             	sub    $0x18,%esp
 81b8176:	8b 45 08             	mov    0x8(%ebp),%eax
 81b8179:	89 04 24             	mov    %eax,(%esp)
 81b817c:	e8 ab 2c f5 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81b8181:	8b 45 08             	mov    0x8(%ebp),%eax
 81b8184:	c7 00 48 c9 bb 08    	movl   $0x8bbc948,(%eax)
 81b818a:	c9                   	leave
 81b818b:	c3                   	ret

```

```c
// NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob @ 0x81b8170

/* NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob() */

void __thiscall
NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob(NewAccountLevelUpEventToJob *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__NewAccountLevelUpEventToJob_08bbc948;
  return;
}

```

---

## StartAction

```asm
// === 081b8246 NewAccountLevelUpEventToJob::StartAction  [0x081b8246-0x81b824b] ===
 81b8246:	55                   	push   %ebp
 81b8247:	89 e5                	mov    %esp,%ebp
 81b8249:	5d                   	pop    %ebp
 81b824a:	c3                   	ret
 81b824b:	90                   	nop

```

```c
// NewAccountLevelUpEventToJob::StartAction @ 0x81b8246

/* NewAccountLevelUpEventToJob::StartAction() */

void NewAccountLevelUpEventToJob::StartAction(void)

{
  return;
}

```

---

## StartEvent

```asm
// === 081b81da NewAccountLevelUpEventToJob::StartEvent  [0x081b81da-0x81b81f5] ===
 81b81da:	55                   	push   %ebp
 81b81db:	89 e5                	mov    %esp,%ebp
 81b81dd:	83 ec 18             	sub    $0x18,%esp
 81b81e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81b81e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b81ea:	00 
 81b81eb:	89 04 24             	mov    %eax,(%esp)
 81b81ee:	e8 ef 02 f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b81f3:	c9                   	leave
 81b81f4:	c3                   	ret
 81b81f5:	90                   	nop

```

```c
// NewAccountLevelUpEventToJob::StartEvent @ 0x81b81da

/* NewAccountLevelUpEventToJob::StartEvent() */

void __thiscall NewAccountLevelUpEventToJob::StartEvent(NewAccountLevelUpEventToJob *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}

```

---

## StartEvent_081b81f6

```asm
// === 081b81f6 NewAccountLevelUpEventToJob::StartEvent  [0x081b81f6-0x81b8245] ===
 81b81f6:	55                   	push   %ebp
 81b81f7:	89 e5                	mov    %esp,%ebp
 81b81f9:	83 ec 28             	sub    $0x28,%esp
 81b81fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81b81ff:	8b 00                	mov    (%eax),%eax
 81b8201:	83 c0 08             	add    $0x8,%eax
 81b8204:	8b 10                	mov    (%eax),%edx
 81b8206:	8b 45 08             	mov    0x8(%ebp),%eax
 81b8209:	89 04 24             	mov    %eax,(%esp)
 81b820c:	ff d2                	call   *%edx
 81b820e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b8215:	00 
 81b8216:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81b821d:	00 
 81b821e:	c7 44 24 04 e0 c8 bb 	movl   $0x8bbc8e0,0x4(%esp)
 81b8225:	08 
 81b8226:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b8229:	89 04 24             	mov    %eax,(%esp)
 81b822c:	e8 e7 74 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b8231:	c7 44 24 04 60 bb bb 	movl   $0x8bbbb60,0x4(%esp)
 81b8238:	08 
 81b8239:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b823c:	89 04 24             	mov    %eax,(%esp)
 81b823f:	e8 44 75 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b8244:	c9                   	leave
 81b8245:	c3                   	ret

```

```c
// NewAccountLevelUpEventToJob::StartEvent @ 0x81b81f6

/* NewAccountLevelUpEventToJob::StartEvent(Word_Param) */

void NewAccountLevelUpEventToJob::StartEvent(int *param_1)

{
  cMyTrace local_1c [24];
  
  (**(code **)(*param_1 + 8))(param_1);
  cMyTrace::cMyTrace(local_1c,"virtual void NewAccountLevelUpEventToJob::StartEvent(Word_Param)",
                     0x18,0);
  cMyTrace::operator()(local_1c,"NewAccountLevelUpEvent Event Start!");
  return;
}

```

---

## processLevelUpToJob

```asm
// === 081b82a4 NewAccountLevelUpEventToJob::processLevelUpToJob  [0x081b82a4-0x81b87b8] ===
 81b82a4:	55                   	push   %ebp
 81b82a5:	89 e5                	mov    %esp,%ebp
 81b82a7:	57                   	push   %edi
 81b82a8:	56                   	push   %esi
 81b82a9:	53                   	push   %ebx
 81b82aa:	81 ec ec 01 00 00    	sub    $0x1ec,%esp
 81b82b0:	8b 45 10             	mov    0x10(%ebp),%eax
 81b82b3:	88 85 44 fe ff ff    	mov    %al,-0x1bc(%ebp)
 81b82b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b82bc:	89 04 24             	mov    %eax,(%esp)
 81b82bf:	e8 d0 89 f5 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81b82c4:	0f be f0             	movsbl %al,%esi
 81b82c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b82ca:	89 04 24             	mov    %eax,(%esp)
 81b82cd:	e8 4e 5c f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b82d2:	89 c3                	mov    %eax,%ebx
 81b82d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b82d7:	89 04 24             	mov    %eax,(%esp)
 81b82da:	e8 d9 1f f2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81b82df:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81b82e3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81b82e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b82eb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81b82ee:	89 04 24             	mov    %eax,(%esp)
 81b82f1:	e8 a0 05 00 00       	call   81b8896 <_ZN25LevelUpRewardItemTableKeyC1Eiii>
 81b82f6:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81b82f9:	89 04 24             	mov    %eax,(%esp)
 81b82fc:	e8 ff 08 00 00       	call   81b8c00 <_ZNSt6vectorI21LevelUpRewardItemDataSaIS0_EEC1Ev>
 81b8301:	80 bd 44 fe ff ff 00 	cmpb   $0x0,-0x1bc(%ebp)
 81b8308:	74 32                	je     81b833c <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x98>
 81b830a:	e8 8c 3e f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b830f:	8d 90 f8 b5 00 00    	lea    0xb5f8(%eax),%edx
 81b8315:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81b8318:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b831c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81b831f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b8323:	89 14 24             	mov    %edx,(%esp)
 81b8326:	e8 2f 06 00 00       	call   81b895a <_ZN25stLevelUpRewardItemScript20get_data_when_growupERK25LevelUpRewardItemTableKeyRSt6vectorI21LevelUpRewardItemDataSaIS4_EE>
 81b832b:	83 f0 01             	xor    $0x1,%eax
 81b832e:	84 c0                	test   %al,%al
 81b8330:	74 59                	je     81b838b <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0xe7>
 81b8332:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b8337:	e9 65 04 00 00       	jmp    81b87a1 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x4fd>
 81b833c:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b833f:	89 04 24             	mov    %eax,(%esp)
 81b8342:	e8 75 05 00 00       	call   81b88bc <_ZN21LevelUpRewardItemDataC1Ev>
 81b8347:	e8 4f 3e f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b834c:	8d 90 f8 b5 00 00    	lea    0xb5f8(%eax),%edx
 81b8352:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b8355:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b8359:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81b835c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b8360:	89 14 24             	mov    %edx,(%esp)
 81b8363:	e8 76 06 00 00       	call   81b89de <_ZN25stLevelUpRewardItemScript8get_dataERK25LevelUpRewardItemTableKeyR21LevelUpRewardItemData>
 81b8368:	83 f0 01             	xor    $0x1,%eax
 81b836b:	84 c0                	test   %al,%al
 81b836d:	74 0a                	je     81b8379 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0xd5>
 81b836f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b8374:	e9 28 04 00 00       	jmp    81b87a1 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x4fd>
 81b8379:	8d 45 98             	lea    -0x68(%ebp),%eax
 81b837c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b8380:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81b8383:	89 04 24             	mov    %eax,(%esp)
 81b8386:	e8 c7 06 00 00       	call   81b8a52 <_ZNSt6vectorI21LevelUpRewardItemDataSaIS0_EE9push_backERKS0_>
 81b838b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b838e:	89 04 24             	mov    %eax,(%esp)
 81b8391:	e8 c6 9a 4d 00       	call   8691e5c <_ZN5CUser32getCharacLevelUpGift_AccountOnceEv>
 81b8396:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81b8399:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81b839c:	89 04 24             	mov    %eax,(%esp)
 81b839f:	e8 ce 08 00 00       	call   81b8c72 <_ZNKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 81b83a4:	83 f0 01             	xor    $0x1,%eax
 81b83a7:	84 c0                	test   %al,%al
 81b83a9:	0f 84 ea 00 00 00    	je     81b8499 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x1f5>
 81b83af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b83b2:	89 04 24             	mov    %eax,(%esp)
 81b83b5:	e8 66 5b f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b83ba:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81b83bd:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81b83c0:	8d 45 94             	lea    -0x6c(%ebp),%eax
 81b83c3:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 81b83c6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b83ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b83ce:	89 04 24             	mov    %eax,(%esp)
 81b83d1:	e8 b0 08 00 00       	call   81b8c86 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE11lower_boundERS3_>
 81b83d6:	83 ec 04             	sub    $0x4,%esp
 81b83d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b83dc:	89 04 24             	mov    %eax,(%esp)
 81b83df:	e8 3c 5b f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b83e4:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81b83e7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81b83ea:	8d 45 90             	lea    -0x70(%ebp),%eax
 81b83ed:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 81b83f0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b83f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b83f8:	89 04 24             	mov    %eax,(%esp)
 81b83fb:	e8 b2 08 00 00       	call   81b8cb2 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE11upper_boundERS3_>
 81b8400:	83 ec 04             	sub    $0x4,%esp
 81b8403:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81b8406:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81b8409:	eb 74                	jmp    81b847f <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x1db>
 81b840b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81b840e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b8411:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b8415:	89 04 24             	mov    %eax,(%esp)
 81b8418:	e8 c1 08 00 00       	call   81b8cde <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 81b841d:	83 ec 04             	sub    $0x4,%esp
 81b8420:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81b8423:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b8427:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81b842a:	89 04 24             	mov    %eax,(%esp)
 81b842d:	e8 96 1f f2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 81b8432:	84 c0                	test   %al,%al
 81b8434:	74 2c                	je     81b8462 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x1be>
 81b8436:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81b8439:	89 04 24             	mov    %eax,(%esp)
 81b843c:	e8 ff 4e f1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 81b8441:	8b 58 04             	mov    0x4(%eax),%ebx
 81b8444:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b8447:	89 04 24             	mov    %eax,(%esp)
 81b844a:	e8 69 1e f2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81b844f:	39 c3                	cmp    %eax,%ebx
 81b8451:	0f 94 c0             	sete   %al
 81b8454:	84 c0                	test   %al,%al
 81b8456:	74 0a                	je     81b8462 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x1be>
 81b8458:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b845d:	e9 3f 03 00 00       	jmp    81b87a1 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x4fd>
 81b8462:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81b8465:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81b846c:	00 
 81b846d:	8d 55 8c             	lea    -0x74(%ebp),%edx
 81b8470:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b8474:	89 04 24             	mov    %eax,(%esp)
 81b8477:	e8 88 08 00 00       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 81b847c:	83 ec 04             	sub    $0x4,%esp
 81b847f:	8d 45 90             	lea    -0x70(%ebp),%eax
 81b8482:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b8486:	8d 45 8c             	lea    -0x74(%ebp),%eax
 81b8489:	89 04 24             	mov    %eax,(%esp)
 81b848c:	e8 37 1f f2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 81b8491:	84 c0                	test   %al,%al
 81b8493:	0f 85 72 ff ff ff    	jne    81b840b <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x167>
 81b8499:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b849c:	89 04 24             	mov    %eax,(%esp)
 81b849f:	e8 14 1e f2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81b84a4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81b84a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b84aa:	89 04 24             	mov    %eax,(%esp)
 81b84ad:	e8 6e 5a f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b84b2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81b84b5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b84b8:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81b84bb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b84bf:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81b84c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b84c6:	89 04 24             	mov    %eax,(%esp)
 81b84c9:	e8 73 08 00 00       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 81b84ce:	83 ec 04             	sub    $0x4,%esp
 81b84d1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81b84d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b84d8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81b84db:	89 04 24             	mov    %eax,(%esp)
 81b84de:	e8 3d e8 f0 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 81b84e3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81b84e6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81b84e9:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 81b84ec:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b84f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b84f4:	89 04 24             	mov    %eax,(%esp)
 81b84f7:	e8 90 08 00 00       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 81b84fc:	83 ec 04             	sub    $0x4,%esp
 81b84ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b8502:	89 04 24             	mov    %eax,(%esp)
 81b8505:	e8 ae 1d f2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81b850a:	98                   	cwtl
 81b850b:	89 85 40 fe ff ff    	mov    %eax,-0x1c0(%ebp)
 81b8511:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b8514:	89 04 24             	mov    %eax,(%esp)
 81b8517:	e8 04 5a f4 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81b851c:	0f bf f8             	movswl %ax,%edi
 81b851f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b8522:	89 04 24             	mov    %eax,(%esp)
 81b8525:	e8 24 37 f1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81b852a:	89 c6                	mov    %eax,%esi
 81b852c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b852f:	89 04 24             	mov    %eax,(%esp)
 81b8532:	e8 45 24 49 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 81b8537:	0f bf d8             	movswl %ax,%ebx
 81b853a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b853d:	89 04 24             	mov    %eax,(%esp)
 81b8540:	e8 29 1e f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81b8545:	8b 95 40 fe ff ff    	mov    -0x1c0(%ebp),%edx
 81b854b:	89 54 24 10          	mov    %edx,0x10(%esp)
 81b854f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81b8553:	89 74 24 08          	mov    %esi,0x8(%esp)
 81b8557:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81b855b:	89 04 24             	mov    %eax,(%esp)
 81b855e:	e8 03 1a 29 00       	call   8449f66 <_ZN39DB_EventAccountCharacterLevelUpOnceGift11makeRequestEjsiss>
 81b8563:	8d 95 4b fe ff ff    	lea    -0x1b5(%ebp),%edx
 81b8569:	bb 00 01 00 00       	mov    $0x100,%ebx
 81b856e:	b8 00 00 00 00       	mov    $0x0,%eax
 81b8573:	89 d1                	mov    %edx,%ecx
 81b8575:	83 e1 01             	and    $0x1,%ecx
 81b8578:	85 c9                	test   %ecx,%ecx
 81b857a:	74 08                	je     81b8584 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x2e0>
 81b857c:	88 02                	mov    %al,(%edx)
 81b857e:	83 c2 01             	add    $0x1,%edx
 81b8581:	83 eb 01             	sub    $0x1,%ebx
 81b8584:	89 d1                	mov    %edx,%ecx
 81b8586:	83 e1 02             	and    $0x2,%ecx
 81b8589:	85 c9                	test   %ecx,%ecx
 81b858b:	74 09                	je     81b8596 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x2f2>
 81b858d:	66 89 02             	mov    %ax,(%edx)
 81b8590:	83 c2 02             	add    $0x2,%edx
 81b8593:	83 eb 02             	sub    $0x2,%ebx
 81b8596:	89 d9                	mov    %ebx,%ecx
 81b8598:	c1 e9 02             	shr    $0x2,%ecx
 81b859b:	89 d7                	mov    %edx,%edi
 81b859d:	f3 ab                	rep stos %eax,%es:(%edi)
 81b859f:	89 fa                	mov    %edi,%edx
 81b85a1:	89 d9                	mov    %ebx,%ecx
 81b85a3:	83 e1 02             	and    $0x2,%ecx
 81b85a6:	85 c9                	test   %ecx,%ecx
 81b85a8:	74 06                	je     81b85b0 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x30c>
 81b85aa:	66 89 02             	mov    %ax,(%edx)
 81b85ad:	83 c2 02             	add    $0x2,%edx
 81b85b0:	89 d9                	mov    %ebx,%ecx
 81b85b2:	83 e1 01             	and    $0x1,%ecx
 81b85b5:	85 c9                	test   %ecx,%ecx
 81b85b7:	74 05                	je     81b85be <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x31a>
 81b85b9:	88 02                	mov    %al,(%edx)
 81b85bb:	83 c2 01             	add    $0x1,%edx
 81b85be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b85c1:	89 04 24             	mov    %eax,(%esp)
 81b85c4:	e8 ef 1c f2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81b85c9:	89 c3                	mov    %eax,%ebx
 81b85cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b85d2:	00 
 81b85d3:	c7 44 24 08 a6 bb bb 	movl   $0x8bbbba6,0x8(%esp)
 81b85da:	08 
 81b85db:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81b85e2:	00 
 81b85e3:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81b85ea:	e8 0f d2 8e 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81b85ef:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81b85f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b85f7:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 81b85fe:	00 
 81b85ff:	8d 85 4b fe ff ff    	lea    -0x1b5(%ebp),%eax
 81b8605:	89 04 24             	mov    %eax,(%esp)
 81b8608:	e8 0f 42 3d 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81b860d:	8d 45 88             	lea    -0x78(%ebp),%eax
 81b8610:	8d 55 a0             	lea    -0x60(%ebp),%edx
 81b8613:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b8617:	89 04 24             	mov    %eax,(%esp)
 81b861a:	e8 99 07 00 00       	call   81b8db8 <_ZNSt6vectorI21LevelUpRewardItemDataSaIS0_EE5beginEv>
 81b861f:	83 ec 04             	sub    $0x4,%esp
 81b8622:	e9 29 01 00 00       	jmp    81b8750 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x4ac>
 81b8627:	8d 45 88             	lea    -0x78(%ebp),%eax
 81b862a:	89 04 24             	mov    %eax,(%esp)
 81b862d:	e8 12 08 00 00       	call   81b8e44 <_ZNK9__gnu_cxx17__normal_iteratorIP21LevelUpRewardItemDataSt6vectorIS1_SaIS1_EEEdeEv>
 81b8632:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81b8635:	8d 85 4b ff ff ff    	lea    -0xb5(%ebp),%eax
 81b863b:	89 04 24             	mov    %eax,(%esp)
 81b863e:	e8 11 32 f1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81b8643:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b8646:	8b 00                	mov    (%eax),%eax
 81b8648:	89 85 4d ff ff ff    	mov    %eax,-0xb3(%ebp)
 81b864e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81b8651:	8b 58 04             	mov    0x4(%eax),%ebx
 81b8654:	e8 42 3b f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b8659:	8b 40 0c             	mov    0xc(%eax),%eax
 81b865c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81b8660:	8d 95 4b ff ff ff    	lea    -0xb5(%ebp),%edx
 81b8666:	89 54 24 08          	mov    %edx,0x8(%esp)
 81b866a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b8671:	00 
 81b8672:	89 04 24             	mov    %eax,(%esp)
 81b8675:	e8 3e 99 35 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 81b867a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b867d:	89 04 24             	mov    %eax,(%esp)
 81b8680:	e8 f7 22 49 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 81b8685:	89 c6                	mov    %eax,%esi
 81b8687:	8d 85 4b fe ff ff    	lea    -0x1b5(%ebp),%eax
 81b868d:	89 04 24             	mov    %eax,(%esp)
 81b8690:	e8 1b 5d ec ff       	call   807e3b0 <strlen@plt>
 81b8695:	89 c7                	mov    %eax,%edi
 81b8697:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b869a:	89 04 24             	mov    %eax,(%esp)
 81b869d:	e8 ac 35 f1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81b86a2:	89 c3                	mov    %eax,%ebx
 81b86a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b86ab:	00 
 81b86ac:	c7 44 24 08 ba bb bb 	movl   $0x8bbbbba,0x8(%esp)
 81b86b3:	08 
 81b86b4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81b86bb:	00 
 81b86bc:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81b86c3:	e8 36 d1 8e 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81b86c8:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81b86cf:	00 
 81b86d0:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81b86d7:	00 
 81b86d8:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81b86dc:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81b86e3:	00 
 81b86e4:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81b86e8:	8d 95 4b fe ff ff    	lea    -0x1b5(%ebp),%edx
 81b86ee:	89 54 24 10          	mov    %edx,0x10(%esp)
 81b86f2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81b86f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81b86fd:	00 
 81b86fe:	8d 95 4b ff ff ff    	lea    -0xb5(%ebp),%edx
 81b8704:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b8708:	89 04 24             	mov    %eax,(%esp)
 81b870b:	e8 d8 ce 39 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 81b8710:	85 c0                	test   %eax,%eax
 81b8712:	0f 95 c0             	setne  %al
 81b8715:	84 c0                	test   %al,%al
 81b8717:	74 2c                	je     81b8745 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x4a1>
 81b8719:	c7 44 24 10 d0 bb bb 	movl   $0x8bbbbd0,0x10(%esp)
 81b8720:	08 
 81b8721:	c7 44 24 0c 7f 00 00 	movl   $0x7f,0xc(%esp)
 81b8728:	00 
 81b8729:	c7 44 24 08 40 c8 bb 	movl   $0x8bbc840,0x8(%esp)
 81b8730:	08 
 81b8731:	c7 44 24 04 fc bb bb 	movl   $0x8bbbbfc,0x4(%esp)
 81b8738:	08 
 81b8739:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81b8740:	e8 c5 b4 91 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81b8745:	8d 45 88             	lea    -0x78(%ebp),%eax
 81b8748:	89 04 24             	mov    %eax,(%esp)
 81b874b:	e8 de 06 00 00       	call   81b8e2e <_ZN9__gnu_cxx17__normal_iteratorIP21LevelUpRewardItemDataSt6vectorIS1_SaIS1_EEEppEv>
 81b8750:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81b8753:	8d 55 a0             	lea    -0x60(%ebp),%edx
 81b8756:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b875a:	89 04 24             	mov    %eax,(%esp)
 81b875d:	e8 7a 06 00 00       	call   81b8ddc <_ZNSt6vectorI21LevelUpRewardItemDataSaIS0_EE3endEv>
 81b8762:	83 ec 04             	sub    $0x4,%esp
 81b8765:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81b8768:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b876c:	8d 45 88             	lea    -0x78(%ebp),%eax
 81b876f:	89 04 24             	mov    %eax,(%esp)
 81b8772:	e8 8b 06 00 00       	call   81b8e02 <_ZN9__gnu_cxxneIP21LevelUpRewardItemDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 81b8777:	84 c0                	test   %al,%al
 81b8779:	0f 85 a8 fe ff ff    	jne    81b8627 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x383>
 81b877f:	bb 01 00 00 00       	mov    $0x1,%ebx
 81b8784:	eb 1b                	jmp    81b87a1 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb+0x4fd>
 81b8786:	89 d3                	mov    %edx,%ebx
 81b8788:	89 c6                	mov    %eax,%esi
 81b878a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81b878d:	89 04 24             	mov    %eax,(%esp)
 81b8790:	e8 7f 04 00 00       	call   81b8c14 <_ZNSt6vectorI21LevelUpRewardItemDataSaIS0_EED1Ev>
 81b8795:	89 f0                	mov    %esi,%eax
 81b8797:	89 da                	mov    %ebx,%edx
 81b8799:	89 04 24             	mov    %eax,(%esp)
 81b879c:	e8 af af 92 00       	call   8ae3750 <_Unwind_Resume>
 81b87a1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81b87a4:	89 04 24             	mov    %eax,(%esp)
 81b87a7:	e8 68 04 00 00       	call   81b8c14 <_ZNSt6vectorI21LevelUpRewardItemDataSaIS0_EED1Ev>
 81b87ac:	89 d8                	mov    %ebx,%eax
 81b87ae:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81b87b1:	83 c4 00             	add    $0x0,%esp
 81b87b4:	5b                   	pop    %ebx
 81b87b5:	5e                   	pop    %esi
 81b87b6:	5f                   	pop    %edi
 81b87b7:	5d                   	pop    %ebp
 81b87b8:	c3                   	ret

```

```c
// NewAccountLevelUpEventToJob::processLevelUpToJob @ 0x81b82a4

/* NewAccountLevelUpEventToJob::processLevelUpToJob(CUser&, bool) */

undefined4 __thiscall
NewAccountLevelUpEventToJob::processLevelUpToJob
          (NewAccountLevelUpEventToJob *this,CUser *param_1,bool param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  bool bVar14;
  byte bVar15;
  char local_1b9;
  char local_1b8 [255];
  Inven_Item local_b9 [2];
  undefined4 local_b7;
  __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
  local_7c [4];
  undefined4 local_78;
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_74 [4];
  undefined4 local_70;
  LevelUpRewardItemData local_6c [8];
  vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>> local_64 [12];
  LevelUpRewardItemTableKey local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  pair local_44 [4];
  pair<int_const,int> local_40 [8];
  int local_38 [2];
  undefined4 local_30;
  int local_2c;
  __normal_iterator local_28 [4];
  multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *local_24;
  undefined4 *local_20;
  
  bVar15 = 0;
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  LevelUpRewardItemTableKey::LevelUpRewardItemTableKey(local_58,iVar6,iVar5,(int)cVar1);
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::vector(local_64);
  if (param_2) {
                    /* try { // try from 081b830a to 081b8776 has its CatchHandler @ 081b8786 */
    iVar5 = G_CDataManager();
    cVar1 = stLevelUpRewardItemScript::get_data_when_growup
                      ((stLevelUpRewardItemScript *)(iVar5 + 0xb5f8),local_58,(vector *)local_64);
    if (cVar1 != '\x01') {
      uVar13 = 0;
      goto LAB_081b87a1;
    }
  }
  else {
    LevelUpRewardItemData::LevelUpRewardItemData(local_6c);
    iVar5 = G_CDataManager();
    cVar1 = stLevelUpRewardItemScript::get_data
                      ((stLevelUpRewardItemScript *)(iVar5 + 0xb5f8),local_58,local_6c);
    if (cVar1 != '\x01') {
      uVar13 = 0;
      goto LAB_081b87a1;
    }
    std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::push_back
              (local_64,local_6c);
  }
  local_24 = (multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             CUser::getCharacLevelUpGift_AccountOnce(param_1);
  cVar1 = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    (local_24);
  if (cVar1 != '\x01') {
    local_54 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::lower_bound
              ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
               &local_70,(int *)local_24);
    local_50 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
              (local_74,(int *)local_24);
    local_78 = local_70;
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_78,
                         (_Rb_tree_iterator *)local_74);
      if (cVar1 == '\0') break;
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_4c);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_78,
                         (_Rb_tree_iterator *)local_4c);
      if (cVar1 != '\0') {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_78);
        iVar5 = *(int *)(iVar5 + 4);
        iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        if (iVar5 == iVar6) {
          uVar13 = 0;
          goto LAB_081b87a1;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_48,(int)&local_78);
    }
  }
  local_30 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_2c = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  std::make_pair<int,int>(local_38,&local_2c);
  std::pair<int_const,int>::pair<int,int>(local_40,(pair *)local_38);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_44);
  sVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  sVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  sVar4 = CUser::GetServerGroupToPvP(param_1);
  uVar7 = CUser::get_acc_id(param_1);
  DB_EventAccountCharacterLevelUpOnceGift::makeRequest(uVar7,sVar4,iVar5,sVar3,sVar2);
  pcVar12 = &local_1b9;
  uVar7 = 0x100;
  bVar14 = ((uint)pcVar12 & 1) != 0;
  if (bVar14) {
    local_1b9 = '\0';
    pcVar12 = local_1b8;
    uVar7 = 0xff;
  }
  if (((uint)pcVar12 & 2) != 0) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12 = pcVar12 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + ((uint)bVar15 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12 = pcVar12 + 2;
  }
  if (bVar14) {
    *pcVar12 = '\0';
  }
  uVar13 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pcVar12 = (char *)RDARScriptStringManager::findString
                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                               "game_server_msg_286",(bool *)0x0);
  OS_API::snprintf(&local_1b9,0xff,pcVar12,uVar13);
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::begin();
  while( true ) {
    std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::end();
    bVar14 = __gnu_cxx::operator!=(local_7c,local_28);
    if (!bVar14) break;
    local_20 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
               ::operator*(local_7c);
    Inven_Item::Inven_Item(local_b9);
    local_b7 = *local_20;
    uVar13 = local_20[1];
    iVar5 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar5 + 0xc),0,local_b9,uVar13);
    uVar13 = CUser::GetServerGroupToPvP(param_1);
    sVar8 = strlen(&local_1b9);
    uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar10 = RDARScriptStringManager::findString
                       ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_285",
                        (bool *)0x0);
    iVar5 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar10,local_b9,0,uVar9,&local_1b9,sVar8,0,uVar13,0,0);
    if (iVar5 != 0) {
      LogManager::logFormat
                (1,"NewAccountLevelUpEventToJob.cpp",
                 "bool NewAccountLevelUpEventToJob::processLevelUpToJob(CUser&, bool)",0x7f,
                 "NewAccountLevelUpEventToJob Event Start!");
    }
    __gnu_cxx::
    __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
    ::operator++(local_7c);
  }
  uVar13 = 1;
LAB_081b87a1:
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::~vector(local_64);
  return uVar13;
}

```

---

## sendNewAccountLevelUpToJobData

```asm
// === 081b829e NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData  [0x081b829e-0x81b82a3] ===
 81b829e:	55                   	push   %ebp
 81b829f:	89 e5                	mov    %esp,%ebp
 81b82a1:	5d                   	pop    %ebp
 81b82a2:	c3                   	ret
 81b82a3:	90                   	nop

```

```c
// NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData @ 0x81b829e

/* NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData(CUser&) */

void NewAccountLevelUpEventToJob::sendNewAccountLevelUpToJobData(CUser *param_1)

{
  return;
}

```

---

## ~NewAccountLevelUpEventToJob

```asm
// === 081b818c NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob  [0x081b818c-0x81b81bb] ===
 81b818c:	55                   	push   %ebp
 81b818d:	89 e5                	mov    %esp,%ebp
 81b818f:	83 ec 18             	sub    $0x18,%esp
 81b8192:	8b 45 08             	mov    0x8(%ebp),%eax
 81b8195:	c7 00 48 c9 bb 08    	movl   $0x8bbc948,(%eax)
 81b819b:	8b 45 08             	mov    0x8(%ebp),%eax
 81b819e:	89 04 24             	mov    %eax,(%esp)
 81b81a1:	e8 ac 2c f5 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81b81a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81b81ab:	84 c0                	test   %al,%al
 81b81ad:	74 0b                	je     81b81ba <_ZN27NewAccountLevelUpEventToJobD1Ev+0x2e>
 81b81af:	8b 45 08             	mov    0x8(%ebp),%eax
 81b81b2:	89 04 24             	mov    %eax,(%esp)
 81b81b5:	e8 36 c3 56 00       	call   87244f0 <_ZdlPv>
 81b81ba:	c9                   	leave
 81b81bb:	c3                   	ret

```

```c
// NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob @ 0x81b818c

/* WARNING: Removing unreachable block (ram,0x081b81af) */
/* NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob() */

void __thiscall
NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob(NewAccountLevelUpEventToJob *this)

{
  *(undefined ***)this = &PTR__NewAccountLevelUpEventToJob_08bbc948;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~NewAccountLevelUpEventToJob_081b81bc

```asm
// === 081b81bc NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob  [0x081b81bc-0x81b81d9] ===
 81b81bc:	55                   	push   %ebp
 81b81bd:	89 e5                	mov    %esp,%ebp
 81b81bf:	83 ec 18             	sub    $0x18,%esp
 81b81c2:	8b 45 08             	mov    0x8(%ebp),%eax
 81b81c5:	89 04 24             	mov    %eax,(%esp)
 81b81c8:	e8 bf ff ff ff       	call   81b818c <_ZN27NewAccountLevelUpEventToJobD1Ev>
 81b81cd:	8b 45 08             	mov    0x8(%ebp),%eax
 81b81d0:	89 04 24             	mov    %eax,(%esp)
 81b81d3:	e8 18 c3 56 00       	call   87244f0 <_ZdlPv>
 81b81d8:	c9                   	leave
 81b81d9:	c3                   	ret

```

```c
// NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob @ 0x81b81bc

/* NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob() */

void __thiscall
NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob(NewAccountLevelUpEventToJob *this)

{
  ~NewAccountLevelUpEventToJob(this);
  operator_delete(this);
  return;
}

```

