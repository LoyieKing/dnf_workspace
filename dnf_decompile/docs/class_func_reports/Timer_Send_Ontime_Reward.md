# Timer_Send_Ontime_Reward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863ab4c Timer_Send_Ontime_Reward::RegistNextTimer  [0x0863ab4c-0x863ab91] ===
 863ab4c:	55                   	push   %ebp
 863ab4d:	89 e5                	mov    %esp,%ebp
 863ab4f:	83 ec 28             	sub    $0x28,%esp
 863ab52:	e8 25 b9 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863ab57:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863ab5e:	00 
 863ab5f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863ab66:	00 
 863ab67:	c7 44 24 10 0a 00 00 	movl   $0xa,0x10(%esp)
 863ab6e:	00 
 863ab6f:	c7 44 24 0c 9b 00 00 	movl   $0x9b,0xc(%esp)
 863ab76:	00 
 863ab77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863ab7e:	00 
 863ab7f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863ab86:	00 
 863ab87:	89 04 24             	mov    %eax,(%esp)
 863ab8a:	e8 87 62 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863ab8f:	c9                   	leave
 863ab90:	c3                   	ret
 863ab91:	90                   	nop

```

```c
// Timer_Send_Ontime_Reward::RegistNextTimer @ 0x863ab4c

/* Timer_Send_Ontime_Reward::RegistNextTimer() */

void Timer_Send_Ontime_Reward::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x9b,10,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863aa90 Timer_Send_Ontime_Reward::dispatch_sig  [0x0863aa90-0x863ab4b] ===
 863aa90:	55                   	push   %ebp
 863aa91:	89 e5                	mov    %esp,%ebp
 863aa93:	83 ec 38             	sub    $0x38,%esp
 863aa96:	a1 30 f7 41 09       	mov    0x941f730,%eax
 863aa9b:	c7 44 24 04 33 00 00 	movl   $0x33,0x4(%esp)
 863aaa2:	00 
 863aaa3:	89 04 24             	mov    %eax,(%esp)
 863aaa6:	e8 ed ae ad ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 863aaab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863aaae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863aab2:	74 25                	je     863aad9 <_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij+0x49>
 863aab4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863aab7:	8b 00                	mov    (%eax),%eax
 863aab9:	83 c0 34             	add    $0x34,%eax
 863aabc:	8b 10                	mov    (%eax),%edx
 863aabe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863aac1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863aac8:	00 
 863aac9:	89 04 24             	mov    %eax,(%esp)
 863aacc:	ff d2                	call   *%edx
 863aace:	84 c0                	test   %al,%al
 863aad0:	74 07                	je     863aad9 <_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij+0x49>
 863aad2:	b8 01 00 00 00       	mov    $0x1,%eax
 863aad7:	eb 05                	jmp    863aade <_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij+0x4e>
 863aad9:	b8 00 00 00 00       	mov    $0x0,%eax
 863aade:	84 c0                	test   %al,%al
 863aae0:	74 21                	je     863ab03 <_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij+0x73>
 863aae2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863aae5:	89 04 24             	mov    %eax,(%esp)
 863aae8:	e8 59 12 b8 ff       	call   81bbd46 <_ZN12COnTimeEvent27process_send_reward_to_userEv>
 863aaed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863aaf0:	89 04 24             	mov    %eax,(%esp)
 863aaf3:	e8 ce 0e b8 ff       	call   81bb9c6 <_ZN12COnTimeEvent28get_ontime_reward_user_countEv>
 863aaf8:	85 c0                	test   %eax,%eax
 863aafa:	0f 95 c0             	setne  %al
 863aafd:	84 c0                	test   %al,%al
 863aaff:	75 3f                	jne    863ab40 <_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij+0xb0>
 863ab01:	eb 42                	jmp    863ab45 <_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij+0xb5>
 863ab03:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 863ab0a:	00 
 863ab0b:	c7 44 24 08 38 16 00 	movl   $0x1638,0x8(%esp)
 863ab12:	00 
 863ab13:	c7 44 24 04 c0 7f ce 	movl   $0x8ce7fc0,0x4(%esp)
 863ab1a:	08 
 863ab1b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863ab1e:	89 04 24             	mov    %eax,(%esp)
 863ab21:	e8 f2 4b f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863ab26:	c7 44 24 04 08 71 ce 	movl   $0x8ce7108,0x4(%esp)
 863ab2d:	08 
 863ab2e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863ab31:	89 04 24             	mov    %eax,(%esp)
 863ab34:	e8 4f 4c f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863ab39:	b8 00 00 00 00       	mov    $0x0,%eax
 863ab3e:	eb 0a                	jmp    863ab4a <_ZN24Timer_Send_Ontime_Reward12dispatch_sigEiij+0xba>
 863ab40:	e8 07 00 00 00       	call   863ab4c <_ZN24Timer_Send_Ontime_Reward15RegistNextTimerEv>
 863ab45:	b8 01 00 00 00       	mov    $0x1,%eax
 863ab4a:	c9                   	leave
 863ab4b:	c3                   	ret

```

```c
// Timer_Send_Ontime_Reward::dispatch_sig @ 0x863aa90

/* Timer_Send_Ontime_Reward::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_Send_Ontime_Reward::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_20 [16];
  COnTimeEvent *local_10;
  
  local_10 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if ((local_10 == (COnTimeEvent *)0x0) ||
     (cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    COnTimeEvent::process_send_reward_to_user(local_10);
    iVar3 = COnTimeEvent::get_ontime_reward_user_count(local_10);
    if (iVar3 != 0) {
      RegistNextTimer();
    }
    uVar4 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_20,
                       "virtual bool Timer_Send_Ontime_Reward::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x1638,5);
    cMyTrace::operator()(local_20,"[ON_TIME_EVENT] Timer_Send_Ontime_Reward() error");
    uVar4 = 0;
  }
  return uVar4;
}

```

