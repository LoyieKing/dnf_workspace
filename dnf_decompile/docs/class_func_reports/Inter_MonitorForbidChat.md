# Inter_MonitorForbidChat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d0466 Inter_MonitorForbidChat::dispatch_sig  [0x084d0466-0x84d0597] ===
 84d0466:	55                   	push   %ebp
 84d0467:	89 e5                	mov    %esp,%ebp
 84d0469:	53                   	push   %ebx
 84d046a:	83 ec 64             	sub    $0x64,%esp
 84d046d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d0474:	00 
 84d0475:	c7 44 24 08 96 2e 00 	movl   $0x2e96,0x8(%esp)
 84d047c:	00 
 84d047d:	c7 44 24 04 20 cd c8 	movl   $0x8c8cd20,0x4(%esp)
 84d0484:	08 
 84d0485:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d0488:	89 04 24             	mov    %eax,(%esp)
 84d048b:	e8 88 f2 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d0490:	c7 44 24 04 68 8b c8 	movl   $0x8c88b68,0x4(%esp)
 84d0497:	08 
 84d0498:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d049b:	89 04 24             	mov    %eax,(%esp)
 84d049e:	e8 e5 f2 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d04a3:	8b 45 10             	mov    0x10(%ebp),%eax
 84d04a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d04a9:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 84d04b0:	00 
 84d04b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d04b8:	00 
 84d04b9:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 84d04bc:	89 04 24             	mov    %eax,(%esp)
 84d04bf:	e8 fc d7 ba ff       	call   807dcc0 <memset@plt>
 84d04c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d04c7:	8b 40 0e             	mov    0xe(%eax),%eax
 84d04ca:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d04cd:	83 c2 12             	add    $0x12,%edx
 84d04d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d04d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d04d8:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 84d04db:	89 04 24             	mov    %eax,(%esp)
 84d04de:	e8 ed d3 ba ff       	call   807d8d0 <strncpy@plt>
 84d04e3:	e8 bf 9e c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d04e8:	8d 55 b6             	lea    -0x4a(%ebp),%edx
 84d04eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d04ef:	89 04 24             	mov    %eax,(%esp)
 84d04f2:	e8 11 d4 1f 00       	call   86cd908 <_ZN9GameWorld15IsForbiddenChatEPKc>
 84d04f7:	83 f0 01             	xor    $0x1,%eax
 84d04fa:	84 c0                	test   %al,%al
 84d04fc:	0f 84 8a 00 00 00    	je     84d058c <_ZN23Inter_MonitorForbidChat12dispatch_sigEP5CUserPci+0x126>
 84d0502:	e8 a0 9e c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d0507:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d050e:	00 
 84d050f:	8d 55 b6             	lea    -0x4a(%ebp),%edx
 84d0512:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0516:	89 04 24             	mov    %eax,(%esp)
 84d0519:	e8 4a d0 1f 00       	call   86cd568 <_ZN9GameWorld17InsertUserToIDMapEPKcj>
 84d051e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0521:	8b 40 0a             	mov    0xa(%eax),%eax
 84d0524:	89 c3                	mov    %eax,%ebx
 84d0526:	e8 7c 9e c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d052b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d052f:	8d 55 b6             	lea    -0x4a(%ebp),%edx
 84d0532:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0536:	89 04 24             	mov    %eax,(%esp)
 84d0539:	e8 16 db 1f 00       	call   86ce054 <_ZN9GameWorld11DisableChatEPKci>
 84d053e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0541:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d0544:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d054b:	00 
 84d054c:	c7 44 24 08 a2 2e 00 	movl   $0x2ea2,0x8(%esp)
 84d0553:	00 
 84d0554:	c7 44 24 04 20 cd c8 	movl   $0x8c8cd20,0x4(%esp)
 84d055b:	08 
 84d055c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d055f:	89 04 24             	mov    %eax,(%esp)
 84d0562:	e8 b1 f1 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d0567:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d056b:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 84d056e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d0572:	c7 44 24 04 94 8b c8 	movl   $0x8c88b94,0x4(%esp)
 84d0579:	08 
 84d057a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d057d:	89 04 24             	mov    %eax,(%esp)
 84d0580:	e8 03 f2 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d0585:	b8 00 00 00 00       	mov    $0x0,%eax
 84d058a:	eb 05                	jmp    84d0591 <_ZN23Inter_MonitorForbidChat12dispatch_sigEP5CUserPci+0x12b>
 84d058c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d0591:	83 c4 64             	add    $0x64,%esp
 84d0594:	5b                   	pop    %ebx
 84d0595:	5d                   	pop    %ebp
 84d0596:	c3                   	ret
 84d0597:	90                   	nop

```

```c
// Inter_MonitorForbidChat::dispatch_sig @ 0x84d0466

/* Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorForbidChat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  GameWorld *pGVar4;
  char local_4e [30];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  cMyTrace::cMyTrace(local_30,
                     "virtual int Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int)",0x2e96,
                     0);
  cMyTrace::operator()(local_30,"Inter_MonitorForbidChat::dispatch_sig recv\n");
  local_10 = param_3;
  memset(local_4e,0,0x1e);
  strncpy(local_4e,(char *)(local_10 + 0x12),*(size_t *)(local_10 + 0xe));
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsForbiddenChat(pGVar4,local_4e);
  if (cVar3 != '\x01') {
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::InsertUserToIDMap(pGVar4,local_4e,0);
    iVar1 = *(int *)(local_10 + 10);
    pGVar4 = (GameWorld *)G_GameWorld();
    GameWorld::DisableChat(pGVar4,local_4e,iVar1);
    uVar2 = *(undefined4 *)(local_10 + 10);
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_MonitorForbidChat::dispatch_sig(CUser*, char*, int)",
                       0x2ea2,0);
    cMyTrace::operator()
              (local_20,"Inter_MonitorForbidChat::dispatch_sig %s for %d secs\n",local_4e,uVar2);
  }
  return 0;
}

```

