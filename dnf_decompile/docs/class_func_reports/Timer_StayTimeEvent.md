# Timer_StayTimeEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863b928 Timer_StayTimeEvent::dispatch_sig  [0x0863b928-0x863b9d9] ===
 863b928:	55                   	push   %ebp
 863b929:	89 e5                	mov    %esp,%ebp
 863b92b:	53                   	push   %ebx
 863b92c:	83 ec 24             	sub    $0x24,%esp
 863b92f:	a1 30 f7 41 09       	mov    0x941f730,%eax
 863b934:	c7 44 24 04 9f 00 00 	movl   $0x9f,0x4(%esp)
 863b93b:	00 
 863b93c:	89 04 24             	mov    %eax,(%esp)
 863b93f:	e8 54 a0 ad ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 863b944:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863b947:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863b94b:	74 25                	je     863b972 <_ZN19Timer_StayTimeEvent12dispatch_sigEiij+0x4a>
 863b94d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b950:	8b 00                	mov    (%eax),%eax
 863b952:	83 c0 34             	add    $0x34,%eax
 863b955:	8b 10                	mov    (%eax),%edx
 863b957:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b95a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b961:	00 
 863b962:	89 04 24             	mov    %eax,(%esp)
 863b965:	ff d2                	call   *%edx
 863b967:	84 c0                	test   %al,%al
 863b969:	74 07                	je     863b972 <_ZN19Timer_StayTimeEvent12dispatch_sigEiij+0x4a>
 863b96b:	b8 01 00 00 00       	mov    $0x1,%eax
 863b970:	eb 05                	jmp    863b977 <_ZN19Timer_StayTimeEvent12dispatch_sigEiij+0x4f>
 863b972:	b8 00 00 00 00       	mov    $0x0,%eax
 863b977:	84 c0                	test   %al,%al
 863b979:	74 54                	je     863b9cf <_ZN19Timer_StayTimeEvent12dispatch_sigEiij+0xa7>
 863b97b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 863b982:	e8 c9 1d a4 ff       	call   807d750 <time@plt>
 863b987:	89 c3                	mov    %eax,%ebx
 863b989:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b98c:	89 04 24             	mov    %eax,(%esp)
 863b98f:	e8 28 05 b3 ff       	call   816bebc <_ZN14CEventStayTime17getRewardStayTimeEv>
 863b994:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863b998:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b99c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863b99f:	89 04 24             	mov    %eax,(%esp)
 863b9a2:	e8 5b 06 00 00       	call   863c002 <_ZN14CEventStayTime17RewardGoGoFighterC1Eil>
 863b9a7:	e8 fb e9 a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863b9ac:	89 c1                	mov    %eax,%ecx
 863b9ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863b9b1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863b9b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b9b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 863b9bc:	89 0c 24             	mov    %ecx,(%esp)
 863b9bf:	e8 f8 19 00 00       	call   863d3bc <_ZN9GameWorld15ProcessAllUsersIN14CEventStayTime17RewardGoGoFighterEEEvT_>
 863b9c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b9c7:	89 04 24             	mov    %eax,(%esp)
 863b9ca:	e8 2b 05 b3 ff       	call   816befa <_ZN14CEventStayTime15RegistNextTimerEv>
 863b9cf:	b8 01 00 00 00       	mov    $0x1,%eax
 863b9d4:	83 c4 24             	add    $0x24,%esp
 863b9d7:	5b                   	pop    %ebx
 863b9d8:	5d                   	pop    %ebp
 863b9d9:	c3                   	ret

```

```c
// Timer_StayTimeEvent::dispatch_sig @ 0x863b928

/* Timer_StayTimeEvent::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_StayTimeEvent::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  time_t tVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  CEventStayTime *local_10;
  
  local_10 = (CEventStayTime *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9f);
  if (local_10 != (CEventStayTime *)0x0) {
    cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0863b977;
    }
  }
  bVar1 = false;
LAB_0863b977:
  if (bVar1) {
    tVar3 = time((time_t *)0x0);
    iVar4 = CEventStayTime::getRewardStayTime(local_10);
    CEventStayTime::RewardGoGoFighter::RewardGoGoFighter((RewardGoGoFighter *)&local_18,iVar4,tVar3)
    ;
    uVar5 = G_GameWorld();
    GameWorld::ProcessAllUsers<CEventStayTime::RewardGoGoFighter>(uVar5,local_18,local_14);
    CEventStayTime::RegistNextTimer(local_10);
  }
  return 1;
}

```

