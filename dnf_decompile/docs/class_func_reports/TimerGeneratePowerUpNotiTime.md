# TimerGeneratePowerUpNotiTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## dispatch_sig

```asm
// === 0863835a TimerGeneratePowerUpNotiTime::dispatch_sig  [0x0863835a-0x863847d] ===
 863835a:	55                   	push   %ebp
 863835b:	89 e5                	mov    %esp,%ebp
 863835d:	53                   	push   %ebx
 863835e:	83 ec 34             	sub    $0x34,%esp
 8638361:	e8 35 3e a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8638366:	05 48 a6 00 00       	add    $0xa648,%eax
 863836b:	89 04 24             	mov    %eax,(%esp)
 863836e:	e8 4d 5e a5 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8638373:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8638376:	a1 50 be 40 09       	mov    0x940be50,%eax
 863837b:	89 04 24             	mov    %eax,(%esp)
 863837e:	e8 29 3a 00 00       	call   863bdac <_ZN13CPowerManager20GetPowerUpRemainTimeEv>
 8638383:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8638386:	a1 50 be 40 09       	mov    0x940be50,%eax
 863838b:	89 04 24             	mov    %eax,(%esp)
 863838e:	e8 25 3a 00 00       	call   863bdb8 <_ZN13CPowerManager21GetPowerUpTimerPeriodEv>
 8638393:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8638396:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 863839a:	a1 50 be 40 09       	mov    0x940be50,%eax
 863839f:	89 04 24             	mov    %eax,(%esp)
 86383a2:	e8 69 75 e4 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 86383a7:	84 c0                	test   %al,%al
 86383a9:	74 0d                	je     86383b8 <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x5e>
 86383ab:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 86383af:	74 07                	je     86383b8 <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x5e>
 86383b1:	b8 01 00 00 00       	mov    $0x1,%eax
 86383b6:	eb 05                	jmp    86383bd <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x63>
 86383b8:	b8 00 00 00 00       	mov    $0x0,%eax
 86383bd:	84 c0                	test   %al,%al
 86383bf:	0f 84 9c 00 00 00    	je     8638461 <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x107>
 86383c5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86383c8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 86383cb:	0f 8d 90 00 00 00    	jge    8638461 <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x107>
 86383d1:	83 6d e8 05          	subl   $0x5,-0x18(%ebp)
 86383d5:	a1 50 be 40 09       	mov    0x940be50,%eax
 86383da:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86383dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86383e1:	89 04 24             	mov    %eax,(%esp)
 86383e4:	e8 d5 04 c3 ff       	call   82688be <_ZN13CPowerManager20SetPowerUpRemainTimeEi>
 86383e9:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 86383ec:	e8 aa 3d a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86383f1:	05 48 a6 00 00       	add    $0xa648,%eax
 86383f6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86383fa:	89 04 24             	mov    %eax,(%esp)
 86383fd:	e8 da 5d a5 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8638402:	8b 00                	mov    (%eax),%eax
 8638404:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638407:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863840a:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 863840d:	7c 52                	jl     8638461 <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x107>
 863840f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638412:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638416:	8b 45 08             	mov    0x8(%ebp),%eax
 8638419:	89 04 24             	mov    %eax,(%esp)
 863841c:	e8 a1 00 00 00       	call   86384c2 <_ZN28TimerGeneratePowerUpNotiTime14send_noti_timeEi>
 8638421:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8638425:	a1 50 be 40 09       	mov    0x940be50,%eax
 863842a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 863842d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638431:	89 04 24             	mov    %eax,(%esp)
 8638434:	e8 93 04 c3 ff       	call   82688cc <_ZN13CPowerManager21SetPowerUpTimerPeriodEi>
 8638439:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863843c:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 863843f:	7c 20                	jl     8638461 <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x107>
 8638441:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8638448:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 863844c:	a1 50 be 40 09       	mov    0x940be50,%eax
 8638451:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8638458:	00 
 8638459:	89 04 24             	mov    %eax,(%esp)
 863845c:	e8 6b 04 c3 ff       	call   82688cc <_ZN13CPowerManager21SetPowerUpTimerPeriodEi>
 8638461:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8638465:	74 0c                	je     8638473 <_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij+0x119>
 8638467:	c7 04 24 05 00 00 00 	movl   $0x5,(%esp)
 863846e:	e8 0b 00 00 00       	call   863847e <_ZN28TimerGeneratePowerUpNotiTime15registNextTimerEl>
 8638473:	b8 01 00 00 00       	mov    $0x1,%eax
 8638478:	83 c4 34             	add    $0x34,%esp
 863847b:	5b                   	pop    %ebx
 863847c:	5d                   	pop    %ebp
 863847d:	c3                   	ret

```

```c
// TimerGeneratePowerUpNotiTime::dispatch_sig @ 0x863835a

/* TimerGeneratePowerUpNotiTime::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGeneratePowerUpNotiTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar4 = G_CDataManager();
  iVar4 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(iVar4 + 0xa648));
  iVar5 = CPowerManager::GetPowerUpRemainTime(GlobalData::s_power_manager);
  uVar6 = CPowerManager::GetPowerUpTimerPeriod(GlobalData::s_power_manager);
  bVar2 = true;
  cVar3 = CPowerManager::IsPowerWarEventOn();
  if ((cVar3 == '\0') || (iVar4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && ((int)uVar6 < iVar4)) {
    CPowerManager::SetPowerUpRemainTime(GlobalData::s_power_manager,iVar5 + -5);
    iVar7 = G_CDataManager();
    piVar8 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(iVar7 + 0xa648),uVar6);
    if (iVar5 + -5 <= *piVar8) {
      send_noti_time((TimerGeneratePowerUpNotiTime *)param_1,*piVar8);
      CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,uVar6 + 1);
      if (iVar4 <= (int)(uVar6 + 1)) {
        bVar2 = false;
        CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,0);
      }
    }
  }
  if (bVar2) {
    registNextTimer(5);
  }
  return 1;
}

```

---

## registNextTimer

```asm
// === 0863847e TimerGeneratePowerUpNotiTime::registNextTimer  [0x0863847e-0x86384c1] ===
 863847e:	55                   	push   %ebp
 863847f:	89 e5                	mov    %esp,%ebp
 8638481:	83 ec 28             	sub    $0x28,%esp
 8638484:	e8 f3 df ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8638489:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8638490:	00 
 8638491:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8638498:	00 
 8638499:	8b 55 08             	mov    0x8(%ebp),%edx
 863849c:	89 54 24 10          	mov    %edx,0x10(%esp)
 86384a0:	c7 44 24 0c 7d 00 00 	movl   $0x7d,0xc(%esp)
 86384a7:	00 
 86384a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86384af:	00 
 86384b0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86384b7:	00 
 86384b8:	89 04 24             	mov    %eax,(%esp)
 86384bb:	e8 56 89 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86384c0:	c9                   	leave
 86384c1:	c3                   	ret

```

```c
// TimerGeneratePowerUpNotiTime::registNextTimer @ 0x863847e

/* TimerGeneratePowerUpNotiTime::registNextTimer(long) */

void TimerGeneratePowerUpNotiTime::registNextTimer(long param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x7d,param_1,0,0);
  return;
}

```

---

## send_noti_time

```asm
// === 086384c2 TimerGeneratePowerUpNotiTime::send_noti_time  [0x086384c2-0x863855f] ===
 86384c2:	55                   	push   %ebp
 86384c3:	89 e5                	mov    %esp,%ebp
 86384c5:	56                   	push   %esi
 86384c6:	53                   	push   %ebx
 86384c7:	83 ec 20             	sub    $0x20,%esp
 86384ca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86384cd:	89 04 24             	mov    %eax,(%esp)
 86384d0:	e8 77 58 f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86384d5:	c7 44 24 08 dc 00 00 	movl   $0xdc,0x8(%esp)
 86384dc:	00 
 86384dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86384e4:	00 
 86384e5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86384e8:	89 04 24             	mov    %eax,(%esp)
 86384eb:	e8 0c 34 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86384f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86384f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86384f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86384fa:	89 04 24             	mov    %eax,(%esp)
 86384fd:	e8 3a 34 a9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8638502:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8638509:	00 
 863850a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863850d:	89 04 24             	mov    %eax,(%esp)
 8638510:	e8 43 34 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8638515:	e8 8d 1e aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 863851a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 863851d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8638521:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8638528:	00 
 8638529:	89 04 24             	mov    %eax,(%esp)
 863852c:	e8 17 fa 08 00       	call   86c7f48 <_ZN9GameWorld12send_to_villEiR11PacketGuard>
 8638531:	eb 1b                	jmp    863854e <_ZN28TimerGeneratePowerUpNotiTime14send_noti_timeEi+0x8c>
 8638533:	89 d3                	mov    %edx,%ebx
 8638535:	89 c6                	mov    %eax,%esi
 8638537:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863853a:	89 04 24             	mov    %eax,(%esp)
 863853d:	e8 3e 59 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8638542:	89 f0                	mov    %esi,%eax
 8638544:	89 da                	mov    %ebx,%edx
 8638546:	89 04 24             	mov    %eax,(%esp)
 8638549:	e8 02 b2 4a 00       	call   8ae3750 <_Unwind_Resume>
 863854e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638551:	89 04 24             	mov    %eax,(%esp)
 8638554:	e8 27 59 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8638559:	83 c4 20             	add    $0x20,%esp
 863855c:	5b                   	pop    %ebx
 863855d:	5e                   	pop    %esi
 863855e:	5d                   	pop    %ebp
 863855f:	c3                   	ret

```

```c
// TimerGeneratePowerUpNotiTime::send_noti_time @ 0x86384c2

/* TimerGeneratePowerUpNotiTime::send_noti_time(int) */

void __thiscall
TimerGeneratePowerUpNotiTime::send_noti_time(TimerGeneratePowerUpNotiTime *this,int param_1)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086384eb to 08638530 has its CatchHandler @ 08638533 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xdc);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_vill(this_00,7,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

