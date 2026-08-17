# Inter_TriggerEventStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ce5f4 Inter_TriggerEventStart::dispatch_sig  [0x084ce5f4-0x84ce645] ===
 84ce5f4:	55                   	push   %ebp
 84ce5f5:	89 e5                	mov    %esp,%ebp
 84ce5f7:	83 ec 28             	sub    $0x28,%esp
 84ce5fa:	8b 45 10             	mov    0x10(%ebp),%eax
 84ce5fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ce600:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84ce605:	85 c0                	test   %eax,%eax
 84ce607:	74 35                	je     84ce63e <_ZN23Inter_TriggerEventStart12dispatch_sigEP5CUserPci+0x4a>
 84ce609:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce60c:	8b 40 0a             	mov    0xa(%eax),%eax
 84ce60f:	89 c2                	mov    %eax,%edx
 84ce611:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84ce616:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 84ce619:	8b 49 0e             	mov    0xe(%ecx),%ecx
 84ce61c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84ce620:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce624:	89 04 24             	mov    %eax,(%esp)
 84ce627:	e8 9a 76 c4 ff       	call   8115cc6 <_ZN13CEventManager17TriggerEventStartEi10Word_Param>
 84ce62c:	84 c0                	test   %al,%al
 84ce62e:	74 07                	je     84ce637 <_ZN23Inter_TriggerEventStart12dispatch_sigEP5CUserPci+0x43>
 84ce630:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce635:	eb 05                	jmp    84ce63c <_ZN23Inter_TriggerEventStart12dispatch_sigEP5CUserPci+0x48>
 84ce637:	b8 8b 2a 00 00       	mov    $0x2a8b,%eax
 84ce63c:	eb 05                	jmp    84ce643 <_ZN23Inter_TriggerEventStart12dispatch_sigEP5CUserPci+0x4f>
 84ce63e:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce643:	c9                   	leave
 84ce644:	c3                   	ret
 84ce645:	90                   	nop

```

```c
// Inter_TriggerEventStart::dispatch_sig @ 0x84ce5f4

/* Inter_TriggerEventStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TriggerEventStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (GlobalData::s_event_manager == (CEventManager *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CEventManager::TriggerEventStart
                      (GlobalData::s_event_manager,*(undefined4 *)(param_3 + 10),
                       *(undefined4 *)(param_3 + 0xe));
    if (cVar1 == '\0') {
      uVar2 = 0x2a8b;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

