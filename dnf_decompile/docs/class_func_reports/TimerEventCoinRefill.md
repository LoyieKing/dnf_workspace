# TimerEventCoinRefill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086364c4 TimerEventCoinRefill::dispatch_sig  [0x086364c4-0x8636554] ===
 86364c4:	55                   	push   %ebp
 86364c5:	89 e5                	mov    %esp,%ebp
 86364c7:	83 ec 38             	sub    $0x38,%esp
 86364ca:	a1 30 f7 41 09       	mov    0x941f730,%eax
 86364cf:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 86364d6:	00 
 86364d7:	89 04 24             	mov    %eax,(%esp)
 86364da:	e8 b9 f4 ad ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 86364df:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86364e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86364e5:	8b 00                	mov    (%eax),%eax
 86364e7:	83 c0 34             	add    $0x34,%eax
 86364ea:	8b 10                	mov    (%eax),%edx
 86364ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86364ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86364f6:	00 
 86364f7:	89 04 24             	mov    %eax,(%esp)
 86364fa:	ff d2                	call   *%edx
 86364fc:	84 c0                	test   %al,%al
 86364fe:	74 4e                	je     863654e <_ZN20TimerEventCoinRefill12dispatch_sigEiij+0x8a>
 8636500:	e8 a2 3e aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8636505:	89 04 24             	mov    %eax,(%esp)
 8636508:	e8 15 66 09 00       	call   86ccb22 <_ZN9GameWorld13ResetAllCoinsEv>
 863650d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8636514:	00 
 8636515:	c7 44 24 08 dc 0a 00 	movl   $0xadc,0x8(%esp)
 863651c:	00 
 863651d:	c7 44 24 04 00 83 ce 	movl   $0x8ce8300,0x4(%esp)
 8636524:	08 
 8636525:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636528:	89 04 24             	mov    %eax,(%esp)
 863652b:	e8 e8 91 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8636530:	c7 44 24 04 e1 6e ce 	movl   $0x8ce6ee1,0x4(%esp)
 8636537:	08 
 8636538:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 863653b:	89 04 24             	mov    %eax,(%esp)
 863653e:	e8 45 92 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8636543:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636546:	89 04 24             	mov    %eax,(%esp)
 8636549:	e8 b0 5c cf ff       	call   832c1fe <_ZNK16CCoinRefillEvent21registNextRefillTimerEv>
 863654e:	b8 01 00 00 00       	mov    $0x1,%eax
 8636553:	c9                   	leave
 8636554:	c3                   	ret

```

```c
// TimerEventCoinRefill::dispatch_sig @ 0x86364c4

/* TimerEventCoinRefill::dispatch_sig(int, int, unsigned int) */

undefined4 TimerEventCoinRefill::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  cMyTrace local_20 [16];
  CCoinRefillEvent *local_10;
  
  local_10 = (CCoinRefillEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xd);
  cVar1 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
  if (cVar1 != '\0') {
    G_GameWorld();
    GameWorld::ResetAllCoins();
    cMyTrace::cMyTrace(local_20,
                       "virtual bool TimerEventCoinRefill::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0xadc,0);
    cMyTrace::operator()(local_20,"Coin refilled by event!");
    CCoinRefillEvent::registNextRefillTimer(local_10);
  }
  return 1;
}

```

