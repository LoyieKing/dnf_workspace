# Inter_TriggerEventEnd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ce646 Inter_TriggerEventEnd::dispatch_sig  [0x084ce646-0x84ce6d1] ===
 84ce646:	55                   	push   %ebp
 84ce647:	89 e5                	mov    %esp,%ebp
 84ce649:	53                   	push   %ebx
 84ce64a:	83 ec 34             	sub    $0x34,%esp
 84ce64d:	8b 45 10             	mov    0x10(%ebp),%eax
 84ce650:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ce653:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce656:	8b 58 0a             	mov    0xa(%eax),%ebx
 84ce659:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84ce660:	00 
 84ce661:	c7 44 24 08 96 2a 00 	movl   $0x2a96,0x8(%esp)
 84ce668:	00 
 84ce669:	c7 44 24 04 40 d0 c8 	movl   $0x8c8d040,0x4(%esp)
 84ce670:	08 
 84ce671:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ce674:	89 04 24             	mov    %eax,(%esp)
 84ce677:	e8 9c 10 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84ce67c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ce680:	c7 44 24 04 1c 89 c8 	movl   $0x8c8891c,0x4(%esp)
 84ce687:	08 
 84ce688:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ce68b:	89 04 24             	mov    %eax,(%esp)
 84ce68e:	e8 f5 10 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84ce693:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84ce698:	85 c0                	test   %eax,%eax
 84ce69a:	74 2b                	je     84ce6c7 <_ZN21Inter_TriggerEventEnd12dispatch_sigEP5CUserPci+0x81>
 84ce69c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce69f:	8b 40 0a             	mov    0xa(%eax),%eax
 84ce6a2:	89 c2                	mov    %eax,%edx
 84ce6a4:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84ce6a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce6ad:	89 04 24             	mov    %eax,(%esp)
 84ce6b0:	e8 ab 76 c4 ff       	call   8115d60 <_ZN13CEventManager15TriggerEventEndEi>
 84ce6b5:	84 c0                	test   %al,%al
 84ce6b7:	74 07                	je     84ce6c0 <_ZN21Inter_TriggerEventEnd12dispatch_sigEP5CUserPci+0x7a>
 84ce6b9:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce6be:	eb 05                	jmp    84ce6c5 <_ZN21Inter_TriggerEventEnd12dispatch_sigEP5CUserPci+0x7f>
 84ce6c0:	b8 9a 2a 00 00       	mov    $0x2a9a,%eax
 84ce6c5:	eb 05                	jmp    84ce6cc <_ZN21Inter_TriggerEventEnd12dispatch_sigEP5CUserPci+0x86>
 84ce6c7:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce6cc:	83 c4 34             	add    $0x34,%esp
 84ce6cf:	5b                   	pop    %ebx
 84ce6d0:	5d                   	pop    %ebp
 84ce6d1:	c3                   	ret

```

```c
// Inter_TriggerEventEnd::dispatch_sig @ 0x84ce646

/* Inter_TriggerEventEnd::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TriggerEventEnd::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  uVar2 = *(undefined4 *)(param_3 + 10);
  cMyTrace::cMyTrace(local_20,"virtual int Inter_TriggerEventEnd::dispatch_sig(CUser*, char*, int)",
                     0x2a96,0);
  cMyTrace::operator()
            (local_20,"Inter_TriggerEventEnd::dispatch_sig\tevent code(%d), parameter(%d)",uVar2);
  if (GlobalData::s_event_manager == (CEventManager *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CEventManager::TriggerEventEnd(GlobalData::s_event_manager,*(int *)(local_10 + 10));
    if (cVar1 == '\0') {
      uVar2 = 0x2a9a;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

