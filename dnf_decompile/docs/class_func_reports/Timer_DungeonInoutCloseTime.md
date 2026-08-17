# Timer_DungeonInoutCloseTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863a1d0 Timer_DungeonInoutCloseTime::dispatch_sig  [0x0863a1d0-0x863a42f] ===
 863a1d0:	55                   	push   %ebp
 863a1d1:	89 e5                	mov    %esp,%ebp
 863a1d3:	53                   	push   %ebx
 863a1d4:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 863a1da:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863a1e1:	e8 b8 1a a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 863a1e6:	89 45 ac             	mov    %eax,-0x54(%ebp)
 863a1e9:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 863a1ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a1f3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 863a1f6:	89 04 24             	mov    %eax,(%esp)
 863a1f9:	e8 62 41 a4 ff       	call   807e360 <localtime_r@plt>
 863a1fe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 863a201:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863a204:	8b 40 08             	mov    0x8(%eax),%eax
 863a207:	89 45 ec             	mov    %eax,-0x14(%ebp)
 863a20a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863a20d:	8b 40 04             	mov    0x4(%eax),%eax
 863a210:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863a213:	8b 45 14             	mov    0x14(%ebp),%eax
 863a216:	89 45 a8             	mov    %eax,-0x58(%ebp)
 863a219:	8b 45 a8             	mov    -0x58(%ebp),%eax
 863a21c:	85 c0                	test   %eax,%eax
 863a21e:	75 0a                	jne    863a22a <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x5a>
 863a220:	b8 00 00 00 00       	mov    $0x0,%eax
 863a225:	e9 00 02 00 00       	jmp    863a42a <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x25a>
 863a22a:	e8 6c 1f a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 863a22f:	8d 88 30 01 00 00    	lea    0x130(%eax),%ecx
 863a235:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 863a238:	8d 55 a8             	lea    -0x58(%ebp),%edx
 863a23b:	89 54 24 08          	mov    %edx,0x8(%esp)
 863a23f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 863a243:	89 04 24             	mov    %eax,(%esp)
 863a246:	e8 b9 30 00 00       	call   863d304 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 863a24b:	83 ec 04             	sub    $0x4,%esp
 863a24e:	e8 48 1f a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 863a253:	8d 90 30 01 00 00    	lea    0x130(%eax),%edx
 863a259:	8d 45 b0             	lea    -0x50(%ebp),%eax
 863a25c:	89 54 24 04          	mov    %edx,0x4(%esp)
 863a260:	89 04 24             	mov    %eax,(%esp)
 863a263:	e8 c8 30 00 00       	call   863d330 <_ZNSt3mapIi18STDungeonInoutTimeSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 863a268:	83 ec 04             	sub    $0x4,%esp
 863a26b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 863a26e:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a272:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 863a275:	89 04 24             	mov    %eax,(%esp)
 863a278:	e8 d9 30 00 00       	call   863d356 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEneERKS4_>
 863a27d:	84 c0                	test   %al,%al
 863a27f:	0f 84 a0 01 00 00    	je     863a425 <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x255>
 863a285:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863a288:	8d 50 01             	lea    0x1(%eax),%edx
 863a28b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863a28e:	89 50 08             	mov    %edx,0x8(%eax)
 863a291:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 863a294:	89 04 24             	mov    %eax,(%esp)
 863a297:	e8 ce 30 00 00       	call   863d36a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi18STDungeonInoutTimeEEptEv>
 863a29c:	8b 50 0c             	mov    0xc(%eax),%edx
 863a29f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863a2a2:	89 50 04             	mov    %edx,0x4(%eax)
 863a2a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863a2a8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 863a2ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 863a2b1:	89 04 24             	mov    %eax,(%esp)
 863a2b4:	e8 67 45 a4 ff       	call   807e820 <mktime@plt>
 863a2b9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 863a2bc:	8b 45 ac             	mov    -0x54(%ebp),%eax
 863a2bf:	8b 55 e8             	mov    -0x18(%ebp),%edx
 863a2c2:	89 d1                	mov    %edx,%ecx
 863a2c4:	29 c1                	sub    %eax,%ecx
 863a2c6:	89 c8                	mov    %ecx,%eax
 863a2c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863a2cb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863a2cf:	79 40                	jns    863a311 <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x141>
 863a2d1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863a2d8:	00 
 863a2d9:	c7 44 24 08 a3 14 00 	movl   $0x14a3,0x8(%esp)
 863a2e0:	00 
 863a2e1:	c7 44 24 04 60 80 ce 	movl   $0x8ce8060,0x4(%esp)
 863a2e8:	08 
 863a2e9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 863a2ec:	89 04 24             	mov    %eax,(%esp)
 863a2ef:	e8 24 54 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863a2f4:	c7 44 24 04 e6 6f ce 	movl   $0x8ce6fe6,0x4(%esp)
 863a2fb:	08 
 863a2fc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 863a2ff:	89 04 24             	mov    %eax,(%esp)
 863a302:	e8 81 54 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863a307:	b8 00 00 00 00       	mov    $0x0,%eax
 863a30c:	e9 19 01 00 00       	jmp    863a42a <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x25a>
 863a311:	8b 45 a8             	mov    -0x58(%ebp),%eax
 863a314:	89 c3                	mov    %eax,%ebx
 863a316:	e8 61 c1 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863a31b:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 863a31f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863a326:	00 
 863a327:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863a32a:	89 54 24 10          	mov    %edx,0x10(%esp)
 863a32e:	c7 44 24 0c 93 00 00 	movl   $0x93,0xc(%esp)
 863a335:	00 
 863a336:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a33d:	00 
 863a33e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863a345:	00 
 863a346:	89 04 24             	mov    %eax,(%esp)
 863a349:	e8 c8 6a ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863a34e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863a355:	00 
 863a356:	c7 44 24 08 b1 14 00 	movl   $0x14b1,0x8(%esp)
 863a35d:	00 
 863a35e:	c7 44 24 04 60 80 ce 	movl   $0x8ce8060,0x4(%esp)
 863a365:	08 
 863a366:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 863a369:	89 04 24             	mov    %eax,(%esp)
 863a36c:	e8 a7 53 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863a371:	c7 44 24 04 84 70 ce 	movl   $0x8ce7084,0x4(%esp)
 863a378:	08 
 863a379:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 863a37c:	89 04 24             	mov    %eax,(%esp)
 863a37f:	e8 04 54 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863a384:	a1 50 be 40 09       	mov    0x940be50,%eax
 863a389:	89 04 24             	mov    %eax,(%esp)
 863a38c:	e8 7f 55 e4 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 863a391:	83 f0 01             	xor    $0x1,%eax
 863a394:	84 c0                	test   %al,%al
 863a396:	74 1b                	je     863a3b3 <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x1e3>
 863a398:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 863a39d:	89 04 24             	mov    %eax,(%esp)
 863a3a0:	e8 9f 6b cb ff       	call   82f0f44 <_ZN16village_attacked18CVillageMonsterMgr7OnEventEv>
 863a3a5:	83 f0 01             	xor    $0x1,%eax
 863a3a8:	84 c0                	test   %al,%al
 863a3aa:	74 07                	je     863a3b3 <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x1e3>
 863a3ac:	b8 01 00 00 00       	mov    $0x1,%eax
 863a3b1:	eb 05                	jmp    863a3b8 <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x1e8>
 863a3b3:	b8 00 00 00 00       	mov    $0x0,%eax
 863a3b8:	84 c0                	test   %al,%al
 863a3ba:	74 69                	je     863a425 <_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij+0x255>
 863a3bc:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 863a3bf:	e8 d7 1d a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 863a3c4:	83 c0 68             	add    $0x68,%eax
 863a3c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863a3ce:	00 
 863a3cf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 863a3d3:	89 04 24             	mov    %eax,(%esp)
 863a3d6:	e8 b1 e2 c2 ff       	call   826868c <_ZN21ServerParameterScript14setDungeonOpenEib>
 863a3db:	8b 5d a8             	mov    -0x58(%ebp),%ebx
 863a3de:	e8 c4 ff a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863a3e3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 863a3e7:	89 04 24             	mov    %eax,(%esp)
 863a3ea:	e8 d5 e8 08 00       	call   86c8cc4 <_ZN9GameWorld30send_all_dungeon_inout_messageEi>
 863a3ef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863a3f6:	00 
 863a3f7:	c7 44 24 08 b8 14 00 	movl   $0x14b8,0x8(%esp)
 863a3fe:	00 
 863a3ff:	c7 44 24 04 60 80 ce 	movl   $0x8ce8060,0x4(%esp)
 863a406:	08 
 863a407:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863a40a:	89 04 24             	mov    %eax,(%esp)
 863a40d:	e8 06 53 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863a412:	c7 44 24 04 b4 70 ce 	movl   $0x8ce70b4,0x4(%esp)
 863a419:	08 
 863a41a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 863a41d:	89 04 24             	mov    %eax,(%esp)
 863a420:	e8 63 53 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863a425:	b8 01 00 00 00       	mov    $0x1,%eax
 863a42a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 863a42d:	c9                   	leave
 863a42e:	c3                   	ret
 863a42f:	90                   	nop

```

```c
// Timer_DungeonInoutCloseTime::dispatch_sig @ 0x863a1d0

/* Timer_DungeonInoutCloseTime::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DungeonInoutCloseTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  TimerQueue *pTVar4;
  int iVar5;
  GameWorld *this;
  int in_stack_00000010;
  tm local_8c;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> local_60 [4];
  int local_5c;
  int local_58;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_54 [4];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  tm *local_20;
  time_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_58 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = localtime_r(&local_58,&local_8c);
  local_18 = local_20->tm_hour;
  local_14 = local_20->tm_min;
  local_5c = in_stack_00000010;
  if (in_stack_00000010 == 0) {
    return 0;
  }
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::find((int *)local_60);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_54);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                    (local_60,(_Rb_tree_iterator *)local_54);
  if (cVar2 != '\0') {
    local_20->tm_hour = local_18 + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_60);
    local_20->tm_min = *(int *)(iVar3 + 0xc);
    local_20->tm_sec = 0;
    local_1c = mktime(local_20);
    iVar3 = local_5c;
    local_10 = local_1c - local_58;
    if (local_10 < 0) {
      cMyTrace::cMyTrace(local_50,
                         "virtual bool Timer_DungeonInoutCloseTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x14a3,0);
      cMyTrace::operator()(local_50,"ULTIMATE_LOG : TIMER OFF!!");
      return 0;
    }
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x93,local_10,0,iVar3);
    cMyTrace::cMyTrace(local_40,
                       "virtual bool Timer_DungeonInoutCloseTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x14b1,0);
    cMyTrace::operator()(local_40,"ULTIMATE_LOG : ULTIMATE DUNGEON OPEN TIMER ON!!");
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\x01') ||
       (cVar2 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr),
       cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar3 = local_5c;
    if (bVar1) {
      iVar5 = G_CDataManager();
      ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar5 + 0x68),iVar3,false);
      this = (GameWorld *)G_GameWorld();
      GameWorld::send_all_dungeon_inout_message(this,local_5c);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool Timer_DungeonInoutCloseTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x14b8,0);
      cMyTrace::operator()(local_30,"ULTIMATE_LOG : ULTIMATE DUNGEON CLOSE!!");
    }
  }
  return 1;
}

```

