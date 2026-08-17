# Timer_EventManagement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863abd4 Timer_EventManagement::RegistNextTimer  [0x0863abd4-0x863ac17] ===
 863abd4:	55                   	push   %ebp
 863abd5:	89 e5                	mov    %esp,%ebp
 863abd7:	83 ec 28             	sub    $0x28,%esp
 863abda:	e8 9d b8 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863abdf:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863abe6:	00 
 863abe7:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863abee:	00 
 863abef:	8b 55 08             	mov    0x8(%ebp),%edx
 863abf2:	89 54 24 10          	mov    %edx,0x10(%esp)
 863abf6:	c7 44 24 0c 9c 00 00 	movl   $0x9c,0xc(%esp)
 863abfd:	00 
 863abfe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863ac05:	00 
 863ac06:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863ac0d:	00 
 863ac0e:	89 04 24             	mov    %eax,(%esp)
 863ac11:	e8 00 62 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863ac16:	c9                   	leave
 863ac17:	c3                   	ret

```

```c
// Timer_EventManagement::RegistNextTimer @ 0x863abd4

/* Timer_EventManagement::RegistNextTimer(int) */

void Timer_EventManagement::RegistNextTimer(int param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x9c,param_1,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863ab92 Timer_EventManagement::dispatch_sig  [0x0863ab92-0x863abd3] ===
 863ab92:	55                   	push   %ebp
 863ab93:	89 e5                	mov    %esp,%ebp
 863ab95:	53                   	push   %ebx
 863ab96:	83 ec 14             	sub    $0x14,%esp
 863ab99:	e8 e3 15 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 863ab9e:	8b 98 7c 03 00 00    	mov    0x37c(%eax),%ebx
 863aba4:	e8 f2 15 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 863aba9:	89 04 24             	mov    %eax,(%esp)
 863abac:	e8 b1 5f ad ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 863abb1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 863abb5:	89 04 24             	mov    %eax,(%esp)
 863abb8:	e8 15 1a ad ff       	call   810c5d2 <_ZN13EventClassify15CEventScriptMng18update_time_valuesEi>
 863abbd:	c7 04 24 3c 00 00 00 	movl   $0x3c,(%esp)
 863abc4:	e8 0b 00 00 00       	call   863abd4 <_ZN21Timer_EventManagement15RegistNextTimerEi>
 863abc9:	b8 01 00 00 00       	mov    $0x1,%eax
 863abce:	83 c4 14             	add    $0x14,%esp
 863abd1:	5b                   	pop    %ebx
 863abd2:	5d                   	pop    %ebp
 863abd3:	c3                   	ret

```

```c
// Timer_EventManagement::dispatch_sig @ 0x863ab92

/* Timer_EventManagement::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_EventManagement::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  CDataManager *this;
  CEventScriptMng *this_00;
  
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x37c);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  EventClassify::CEventScriptMng::update_time_values(this_00,iVar1);
  RegistNextTimer(0x3c);
  return 1;
}

```

