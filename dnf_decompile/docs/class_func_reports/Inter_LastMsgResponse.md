# Inter_LastMsgResponse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d0598 Inter_LastMsgResponse::dispatch_sig  [0x084d0598-0x84d0647] ===
 84d0598:	55                   	push   %ebp
 84d0599:	89 e5                	mov    %esp,%ebp
 84d059b:	56                   	push   %esi
 84d059c:	53                   	push   %ebx
 84d059d:	83 ec 20             	sub    $0x20,%esp
 84d05a0:	e8 16 6a dd ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 84d05a5:	89 04 24             	mov    %eax,(%esp)
 84d05a8:	e8 3d cc 01 00       	call   84ed1ea <_ZN15CShutdowManager29IncrementLastMsgResponseCountEv>
 84d05ad:	e8 09 6a dd ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 84d05b2:	89 04 24             	mov    %eax,(%esp)
 84d05b5:	e8 50 cc 01 00       	call   84ed20a <_ZN15CShutdowManager23GetLastMsgResponseCountEv>
 84d05ba:	89 c6                	mov    %eax,%esi
 84d05bc:	e8 fa 69 dd ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 84d05c1:	89 04 24             	mov    %eax,(%esp)
 84d05c4:	e8 35 cc 01 00       	call   84ed1fe <_ZN15CShutdowManager15GetLastMsgCountEv>
 84d05c9:	89 c3                	mov    %eax,%ebx
 84d05cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d05d2:	00 
 84d05d3:	c7 44 24 08 b2 2e 00 	movl   $0x2eb2,0x8(%esp)
 84d05da:	00 
 84d05db:	c7 44 24 04 c0 cc c8 	movl   $0x8c8ccc0,0x4(%esp)
 84d05e2:	08 
 84d05e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d05e6:	89 04 24             	mov    %eax,(%esp)
 84d05e9:	e8 2a f1 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d05ee:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d05f2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d05f6:	c7 44 24 04 ca 8b c8 	movl   $0x8c88bca,0x4(%esp)
 84d05fd:	08 
 84d05fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0601:	89 04 24             	mov    %eax,(%esp)
 84d0604:	e8 7f f1 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d0609:	e8 ad 69 dd ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 84d060e:	89 04 24             	mov    %eax,(%esp)
 84d0611:	e8 e8 cb 01 00       	call   84ed1fe <_ZN15CShutdowManager15GetLastMsgCountEv>
 84d0616:	89 c3                	mov    %eax,%ebx
 84d0618:	e8 9e 69 dd ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 84d061d:	89 04 24             	mov    %eax,(%esp)
 84d0620:	e8 e5 cb 01 00       	call   84ed20a <_ZN15CShutdowManager23GetLastMsgResponseCountEv>
 84d0625:	39 c3                	cmp    %eax,%ebx
 84d0627:	0f 9e c0             	setle  %al
 84d062a:	84 c0                	test   %al,%al
 84d062c:	74 0d                	je     84d063b <_ZN21Inter_LastMsgResponse12dispatch_sigEP5CUserPci+0xa3>
 84d062e:	e8 88 69 dd ff       	call   82a6fbb <_Z25GetInstanceShutdowManagerv>
 84d0633:	89 04 24             	mov    %eax,(%esp)
 84d0636:	e8 81 30 dd ff       	call   82a36bc <_ZN15CShutdowManager15OnAllUserLogoutEv>
 84d063b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d0640:	83 c4 20             	add    $0x20,%esp
 84d0643:	5b                   	pop    %ebx
 84d0644:	5e                   	pop    %esi
 84d0645:	5d                   	pop    %ebp
 84d0646:	c3                   	ret
 84d0647:	90                   	nop

```

```c
// Inter_LastMsgResponse::dispatch_sig @ 0x84d0598

/* Inter_LastMsgResponse::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LastMsgResponse::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CShutdowManager *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  cMyTrace local_1c [16];
  
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  CShutdowManager::IncrementLastMsgResponseCount(pCVar1);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  uVar2 = CShutdowManager::GetLastMsgResponseCount(pCVar1);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  uVar3 = CShutdowManager::GetLastMsgCount(pCVar1);
  cMyTrace::cMyTrace(local_1c,"virtual int Inter_LastMsgResponse::dispatch_sig(CUser*, char*, int)",
                     0x2eb2,0);
  cMyTrace::operator()(local_1c,"last msg (%d) response(%d)\n",uVar3,uVar2);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  iVar4 = CShutdowManager::GetLastMsgCount(pCVar1);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  iVar5 = CShutdowManager::GetLastMsgResponseCount(pCVar1);
  if (iVar4 <= iVar5) {
    pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
    CShutdowManager::OnAllUserLogout(pCVar1);
  }
  return 0;
}

```

