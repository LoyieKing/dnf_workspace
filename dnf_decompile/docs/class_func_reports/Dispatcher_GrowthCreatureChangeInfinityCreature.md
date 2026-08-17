# Dispatcher_GrowthCreatureChangeInfinityCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## check_error

```asm
// === 081e86a6 Dispatcher_GrowthCreatureChangeInfinityCreature::check_error  [0x081e86a6-0x81e86fb] ===
 81e86a6:	55                   	push   %ebp
 81e86a7:	89 e5                	mov    %esp,%ebp
 81e86a9:	83 ec 28             	sub    $0x28,%esp
 81e86ac:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e86b0:	75 07                	jne    81e86b9 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE+0x13>
 81e86b2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e86b7:	eb 41                	jmp    81e86fa <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE+0x54>
 81e86b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e86bc:	89 04 24             	mov    %eax,(%esp)
 81e86bf:	e8 c8 1c ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e86c4:	83 f8 03             	cmp    $0x3,%eax
 81e86c7:	0f 95 c0             	setne  %al
 81e86ca:	84 c0                	test   %al,%al
 81e86cc:	74 07                	je     81e86d5 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE+0x2f>
 81e86ce:	b8 13 00 00 00       	mov    $0x13,%eax
 81e86d3:	eb 25                	jmp    81e86fa <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE+0x54>
 81e86d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e86d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e86dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81e86df:	89 04 24             	mov    %eax,(%esp)
 81e86e2:	e8 15 00 00 00       	call   81e86fc <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature17check_error_eventEP5CUser>
 81e86e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e86ea:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e86ee:	74 05                	je     81e86f5 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE+0x4f>
 81e86f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e86f3:	eb 05                	jmp    81e86fa <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE+0x54>
 81e86f5:	b8 00 00 00 00       	mov    $0x0,%eax
 81e86fa:	c9                   	leave
 81e86fb:	c3                   	ret

```

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::check_error @ 0x81e86a6

/* Dispatcher_GrowthCreatureChangeInfinityCreature::check_error(CUser*, MSG_BASE&) */

int Dispatcher_GrowthCreatureChangeInfinityCreature::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  
  if (param_2 == (MSG_BASE *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = CUser::get_state((CUser *)param_2);
    if (iVar1 == 3) {
      iVar1 = check_error_event((Dispatcher_GrowthCreatureChangeInfinityCreature *)param_1,
                                (CUser *)param_2);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x13;
    }
  }
  return iVar1;
}

```

---

## check_error_event

```asm
// === 081e86fc Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event  [0x081e86fc-0x81e8767] ===
 81e86fc:	55                   	push   %ebp
 81e86fd:	89 e5                	mov    %esp,%ebp
 81e86ff:	83 ec 28             	sub    $0x28,%esp
 81e8702:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8707:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 81e870e:	00 
 81e870f:	89 04 24             	mov    %eax,(%esp)
 81e8712:	e8 81 d2 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8717:	8b 10                	mov    (%eax),%edx
 81e8719:	83 c2 34             	add    $0x34,%edx
 81e871c:	8b 12                	mov    (%edx),%edx
 81e871e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8725:	00 
 81e8726:	89 04 24             	mov    %eax,(%esp)
 81e8729:	ff d2                	call   *%edx
 81e872b:	84 c0                	test   %al,%al
 81e872d:	74 32                	je     81e8761 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature17check_error_eventEP5CUser+0x65>
 81e872f:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8734:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 81e873b:	00 
 81e873c:	89 04 24             	mov    %eax,(%esp)
 81e873f:	e8 54 d2 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8744:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e8747:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e874b:	74 14                	je     81e8761 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature17check_error_eventEP5CUser+0x65>
 81e874d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8750:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8754:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8757:	89 04 24             	mov    %eax,(%esp)
 81e875a:	e8 1b e7 fc ff       	call   81b6e7a <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser>
 81e875f:	eb 05                	jmp    81e8766 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature17check_error_eventEP5CUser+0x6a>
 81e8761:	b8 01 00 00 00       	mov    $0x1,%eax
 81e8766:	c9                   	leave
 81e8767:	c3                   	ret

```

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event @ 0x81e86fc

/* Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event(CUser*) */

undefined4 __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event
          (Dispatcher_GrowthCreatureChangeInfinityCreature *this,CUser *param_1)

{
  char cVar1;
  int *piVar2;
  GiveGrowCreatureEvent *this_00;
  undefined4 uVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if ((cVar1 != '\0') &&
     (this_00 = (GiveGrowCreatureEvent *)
                CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67),
     this_00 != (GiveGrowCreatureEvent *)0x0)) {
    uVar3 = GiveGrowCreatureEvent::CheckEventInfo(this_00,param_1);
    return uVar3;
  }
  return 1;
}

```

---

## process

```asm
// === 081e85ac Dispatcher_GrowthCreatureChangeInfinityCreature::process  [0x081e85ac-0x81e8639] ===
 81e85ac:	55                   	push   %ebp
 81e85ad:	89 e5                	mov    %esp,%ebp
 81e85af:	83 ec 28             	sub    $0x28,%esp
 81e85b2:	8b 45 14             	mov    0x14(%ebp),%eax
 81e85b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e85b8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e85bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e85bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e85c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e85c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81e85c9:	89 04 24             	mov    %eax,(%esp)
 81e85cc:	e8 d5 00 00 00       	call   81e86a6 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE>
 81e85d1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e85d4:	89 42 04             	mov    %eax,0x4(%edx)
 81e85d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e85da:	8b 40 04             	mov    0x4(%eax),%eax
 81e85dd:	85 c0                	test   %eax,%eax
 81e85df:	7e 07                	jle    81e85e8 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature7processEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81e85e1:	b8 00 00 00 00       	mov    $0x0,%eax
 81e85e6:	eb 4f                	jmp    81e8637 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature7processEP5CUserR8MSG_BASER9ParamBase+0x8b>
 81e85e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e85eb:	8b 40 04             	mov    0x4(%eax),%eax
 81e85ee:	85 c0                	test   %eax,%eax
 81e85f0:	79 28                	jns    81e861a <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 81e85f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e85f5:	8b 40 04             	mov    0x4(%eax),%eax
 81e85f8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e85ff:	00 
 81e8600:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e8604:	c7 44 24 04 60 09 bd 	movl   $0x8bd0960,0x4(%esp)
 81e860b:	08 
 81e860c:	c7 04 24 e2 64 00 00 	movl   $0x64e2,(%esp)
 81e8613:	e8 bf 82 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e8618:	eb 1d                	jmp    81e8637 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature7processEP5CUserR8MSG_BASER9ParamBase+0x8b>
 81e861a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e861d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8621:	8b 45 08             	mov    0x8(%ebp),%eax
 81e8624:	89 04 24             	mov    %eax,(%esp)
 81e8627:	e8 0e 00 00 00       	call   81e863a <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature13process_eventEP5CUser>
 81e862c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e862f:	89 42 04             	mov    %eax,0x4(%edx)
 81e8632:	b8 00 00 00 00       	mov    $0x0,%eax
 81e8637:	c9                   	leave
 81e8638:	c3                   	ret
 81e8639:	90                   	nop

```

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::process @ 0x81e85ac

/* Dispatcher_GrowthCreatureChangeInfinityCreature::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::process
          (Dispatcher_GrowthCreatureChangeInfinityCreature *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x64e2,
                       "virtual int Dispatcher_GrowthCreatureChangeInfinityCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar1 = process_event(this,param_1);
      *(undefined4 *)(param_3 + 4) = uVar1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## process_event

```asm
// === 081e863a Dispatcher_GrowthCreatureChangeInfinityCreature::process_event  [0x081e863a-0x81e86a5] ===
 81e863a:	55                   	push   %ebp
 81e863b:	89 e5                	mov    %esp,%ebp
 81e863d:	83 ec 28             	sub    $0x28,%esp
 81e8640:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8645:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 81e864c:	00 
 81e864d:	89 04 24             	mov    %eax,(%esp)
 81e8650:	e8 43 d3 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8655:	8b 10                	mov    (%eax),%edx
 81e8657:	83 c2 34             	add    $0x34,%edx
 81e865a:	8b 12                	mov    (%edx),%edx
 81e865c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8663:	00 
 81e8664:	89 04 24             	mov    %eax,(%esp)
 81e8667:	ff d2                	call   *%edx
 81e8669:	84 c0                	test   %al,%al
 81e866b:	74 32                	je     81e869f <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature13process_eventEP5CUser+0x65>
 81e866d:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8672:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 81e8679:	00 
 81e867a:	89 04 24             	mov    %eax,(%esp)
 81e867d:	e8 16 d3 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8682:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e8685:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e8689:	74 14                	je     81e869f <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature13process_eventEP5CUser+0x65>
 81e868b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e868e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8692:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8695:	89 04 24             	mov    %eax,(%esp)
 81e8698:	e8 d9 e8 fc ff       	call   81b6f76 <_ZN21GiveGrowCreatureEvent12processEventER5CUser>
 81e869d:	eb 05                	jmp    81e86a4 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature13process_eventEP5CUser+0x6a>
 81e869f:	b8 00 00 00 00       	mov    $0x0,%eax
 81e86a4:	c9                   	leave
 81e86a5:	c3                   	ret

```

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::process_event @ 0x81e863a

/* Dispatcher_GrowthCreatureChangeInfinityCreature::process_event(CUser*) */

undefined4 __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::process_event
          (Dispatcher_GrowthCreatureChangeInfinityCreature *this,CUser *param_1)

{
  char cVar1;
  int *piVar2;
  GiveGrowCreatureEvent *this_00;
  undefined4 uVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if ((cVar1 != '\0') &&
     (this_00 = (GiveGrowCreatureEvent *)
                CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67),
     this_00 != (GiveGrowCreatureEvent *)0x0)) {
    uVar3 = GiveGrowCreatureEvent::processEvent(this_00,param_1);
    return uVar3;
  }
  return 0;
}

```

---

## read

```asm
// === 081e85a2 Dispatcher_GrowthCreatureChangeInfinityCreature::read  [0x081e85a2-0x81e85ab] ===
 81e85a2:	55                   	push   %ebp
 81e85a3:	89 e5                	mov    %esp,%ebp
 81e85a5:	b8 00 00 00 00       	mov    $0x0,%eax
 81e85aa:	5d                   	pop    %ebp
 81e85ab:	c3                   	ret

```

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::read @ 0x81e85a2

/* Dispatcher_GrowthCreatureChangeInfinityCreature::read(PacketBuf&, MSG_BASE&) */

undefined4
Dispatcher_GrowthCreatureChangeInfinityCreature::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081e8768 Dispatcher_GrowthCreatureChangeInfinityCreature::send  [0x081e8768-0x81e8813] ===
 81e8768:	55                   	push   %ebp
 81e8769:	89 e5                	mov    %esp,%ebp
 81e876b:	83 ec 28             	sub    $0x28,%esp
 81e876e:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8771:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e8774:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e8777:	8b 40 04             	mov    0x4(%eax),%eax
 81e877a:	85 c0                	test   %eax,%eax
 81e877c:	75 42                	jne    81e87c0 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4sendEP5CUserR9ParamBase+0x58>
 81e877e:	c7 44 24 04 00 02 00 	movl   $0x200,0x4(%esp)
 81e8785:	00 
 81e8786:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8789:	89 04 24             	mov    %eax,(%esp)
 81e878c:	e8 0f 37 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e8791:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8796:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 81e879d:	00 
 81e879e:	89 04 24             	mov    %eax,(%esp)
 81e87a1:	e8 f2 d1 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e87a6:	8b 10                	mov    (%eax),%edx
 81e87a8:	83 c2 34             	add    $0x34,%edx
 81e87ab:	8b 12                	mov    (%edx),%edx
 81e87ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e87b4:	00 
 81e87b5:	89 04 24             	mov    %eax,(%esp)
 81e87b8:	ff d2                	call   *%edx
 81e87ba:	84 c0                	test   %al,%al
 81e87bc:	75 24                	jne    81e87e2 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4sendEP5CUserR9ParamBase+0x7a>
 81e87be:	eb 52                	jmp    81e8812 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4sendEP5CUserR9ParamBase+0xaa>
 81e87c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e87c3:	8b 40 04             	mov    0x4(%eax),%eax
 81e87c6:	0f b6 c0             	movzbl %al,%eax
 81e87c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e87cd:	c7 44 24 04 00 02 00 	movl   $0x200,0x4(%esp)
 81e87d4:	00 
 81e87d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e87d8:	89 04 24             	mov    %eax,(%esp)
 81e87db:	e8 62 37 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e87e0:	eb 30                	jmp    81e8812 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4sendEP5CUserR9ParamBase+0xaa>
 81e87e2:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e87e7:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 81e87ee:	00 
 81e87ef:	89 04 24             	mov    %eax,(%esp)
 81e87f2:	e8 a1 d1 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e87f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e87fa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e87fe:	74 12                	je     81e8812 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature4sendEP5CUserR9ParamBase+0xaa>
 81e8800:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8803:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8807:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e880a:	89 04 24             	mov    %eax,(%esp)
 81e880d:	e8 5e e3 fc ff       	call   81b6b70 <_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser>
 81e8812:	c9                   	leave
 81e8813:	c3                   	ret

```

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::send @ 0x81e8768

/* Dispatcher_GrowthCreatureChangeInfinityCreature::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::send
          (Dispatcher_GrowthCreatureChangeInfinityCreature *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  int *piVar2;
  GiveGrowCreatureEvent *this_00;
  
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x200);
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if ((cVar1 != '\0') &&
       (this_00 = (GiveGrowCreatureEvent *)
                  CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67),
       this_00 != (GiveGrowCreatureEvent *)0x0)) {
      GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(this_00,param_1);
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x200,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

