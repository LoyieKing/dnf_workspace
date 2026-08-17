# item_lock__CItemLockTimer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## DecreaseItemLockTimer

```asm
// === 085414f0 item_lock::CItemLockTimer::DecreaseItemLockTimer  [0x085414f0-0x8541501] ===
 85414f0:	55                   	push   %ebp
 85414f1:	89 e5                	mov    %esp,%ebp
 85414f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85414f6:	8b 00                	mov    (%eax),%eax
 85414f8:	8d 50 ff             	lea    -0x1(%eax),%edx
 85414fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85414fe:	89 10                	mov    %edx,(%eax)
 8541500:	5d                   	pop    %ebp
 8541501:	c3                   	ret

```

```c
// item_lock::CItemLockTimer::DecreaseItemLockTimer @ 0x85414f0

/* item_lock::CItemLockTimer::DecreaseItemLockTimer() */

void __thiscall item_lock::CItemLockTimer::DecreaseItemLockTimer(CItemLockTimer *this)

{
  *(int *)this = *(int *)this + -1;
  return;
}

```

---

## IncreaseItemLockTimer

```asm
// === 0854147c item_lock::CItemLockTimer::IncreaseItemLockTimer  [0x0854147c-0x85414ef] ===
 854147c:	55                   	push   %ebp
 854147d:	89 e5                	mov    %esp,%ebp
 854147f:	56                   	push   %esi
 8541480:	53                   	push   %ebx
 8541481:	83 ec 20             	sub    $0x20,%esp
 8541484:	8b 45 08             	mov    0x8(%ebp),%eax
 8541487:	8b 00                	mov    (%eax),%eax
 8541489:	85 c0                	test   %eax,%eax
 854148b:	75 4f                	jne    85414dc <_ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x60>
 854148d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541490:	89 04 24             	mov    %eax,(%esp)
 8541493:	e8 b6 a7 b8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8541498:	89 c6                	mov    %eax,%esi
 854149a:	8b 45 0c             	mov    0xc(%ebp),%eax
 854149d:	89 04 24             	mov    %eax,(%esp)
 85414a0:	e8 f1 77 b8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85414a5:	89 c3                	mov    %eax,%ebx
 85414a7:	e8 d0 4f bb ff       	call   80f647c <_Z12G_TimerQueuev>
 85414ac:	89 74 24 18          	mov    %esi,0x18(%esp)
 85414b0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85414b7:	00 
 85414b8:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 85414bf:	00 
 85414c0:	c7 44 24 0c 88 00 00 	movl   $0x88,0xc(%esp)
 85414c7:	00 
 85414c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85414cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85414d3:	00 
 85414d4:	89 04 24             	mov    %eax,(%esp)
 85414d7:	e8 3a f9 0e 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 85414dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85414df:	8b 00                	mov    (%eax),%eax
 85414e1:	8d 50 01             	lea    0x1(%eax),%edx
 85414e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85414e7:	89 10                	mov    %edx,(%eax)
 85414e9:	83 c4 20             	add    $0x20,%esp
 85414ec:	5b                   	pop    %ebx
 85414ed:	5e                   	pop    %esi
 85414ee:	5d                   	pop    %ebp
 85414ef:	c3                   	ret

```

```c
// item_lock::CItemLockTimer::IncreaseItemLockTimer @ 0x854147c

/* item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*) */

void __thiscall
item_lock::CItemLockTimer::IncreaseItemLockTimer(CItemLockTimer *this,CUser *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (*(int *)this == 0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar2 = CUser::GetUID(param_1);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,0,uVar2,0x88,0x3c,0,uVar1);
  }
  *(int *)this = *(int *)this + 1;
  return;
}

```

---

## NextItemLockTimer

```asm
// === 08541502 item_lock::CItemLockTimer::NextItemLockTimer  [0x08541502-0x8541569] ===
 8541502:	55                   	push   %ebp
 8541503:	89 e5                	mov    %esp,%ebp
 8541505:	56                   	push   %esi
 8541506:	53                   	push   %ebx
 8541507:	83 ec 20             	sub    $0x20,%esp
 854150a:	8b 45 08             	mov    0x8(%ebp),%eax
 854150d:	8b 00                	mov    (%eax),%eax
 854150f:	85 c0                	test   %eax,%eax
 8541511:	74 4f                	je     8541562 <_ZN9item_lock14CItemLockTimer17NextItemLockTimerEP5CUser+0x60>
 8541513:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541516:	89 04 24             	mov    %eax,(%esp)
 8541519:	e8 30 a7 b8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 854151e:	89 c6                	mov    %eax,%esi
 8541520:	8b 45 0c             	mov    0xc(%ebp),%eax
 8541523:	89 04 24             	mov    %eax,(%esp)
 8541526:	e8 6b 77 b8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 854152b:	89 c3                	mov    %eax,%ebx
 854152d:	e8 4a 4f bb ff       	call   80f647c <_Z12G_TimerQueuev>
 8541532:	89 74 24 18          	mov    %esi,0x18(%esp)
 8541536:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 854153d:	00 
 854153e:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8541545:	00 
 8541546:	c7 44 24 0c 88 00 00 	movl   $0x88,0xc(%esp)
 854154d:	00 
 854154e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8541552:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8541559:	00 
 854155a:	89 04 24             	mov    %eax,(%esp)
 854155d:	e8 b4 f8 0e 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8541562:	83 c4 20             	add    $0x20,%esp
 8541565:	5b                   	pop    %ebx
 8541566:	5e                   	pop    %esi
 8541567:	5d                   	pop    %ebp
 8541568:	c3                   	ret
 8541569:	90                   	nop

```

```c
// item_lock::CItemLockTimer::NextItemLockTimer @ 0x8541502

/* item_lock::CItemLockTimer::NextItemLockTimer(CUser*) */

void __thiscall item_lock::CItemLockTimer::NextItemLockTimer(CItemLockTimer *this,CUser *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (*(int *)this != 0) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar2 = CUser::GetUID(param_1);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,0,uVar2,0x88,0x3c,0,uVar1);
  }
  return;
}

```

