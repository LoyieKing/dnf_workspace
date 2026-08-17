# EventClassify__CUsedFatigueGiveItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## getIsCharacEvent

```asm
// === 081107ea EventClassify::CUsedFatigueGiveItem::getIsCharacEvent  [0x081107ea-0x8110813] ===
 81107ea:	55                   	push   %ebp
 81107eb:	89 e5                	mov    %esp,%ebp
 81107ed:	8b 45 08             	mov    0x8(%ebp),%eax
 81107f0:	8b 40 1c             	mov    0x1c(%eax),%eax
 81107f3:	85 c0                	test   %eax,%eax
 81107f5:	75 07                	jne    81107fe <_ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb+0x14>
 81107f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81107fc:	eb 14                	jmp    8110812 <_ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb+0x28>
 81107fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8110801:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110804:	0f b6 50 14          	movzbl 0x14(%eax),%edx
 8110808:	8b 45 0c             	mov    0xc(%ebp),%eax
 811080b:	88 10                	mov    %dl,(%eax)
 811080d:	b8 01 00 00 00       	mov    $0x1,%eax
 8110812:	5d                   	pop    %ebp
 8110813:	c3                   	ret

```

```c
// EventClassify::CUsedFatigueGiveItem::getIsCharacEvent @ 0x81107ea

/* EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(bool&) const */

bool __thiscall
EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(CUsedFatigueGiveItem *this,bool *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1c);
  if (iVar1 != 0) {
    *param_1 = *(bool *)(*(int *)(this + 0x1c) + 0x14);
  }
  return iVar1 != 0;
}

```

---

## get_db_table_name

```asm
// === 081105e8 EventClassify::CUsedFatigueGiveItem::get_db_table_name  [0x081105e8-0x81105f5] ===
 81105e8:	55                   	push   %ebp
 81105e9:	89 e5                	mov    %esp,%ebp
 81105eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81105ee:	8b 40 1c             	mov    0x1c(%eax),%eax
 81105f1:	83 c0 08             	add    $0x8,%eax
 81105f4:	5d                   	pop    %ebp
 81105f5:	c3                   	ret

```

```c
// EventClassify::CUsedFatigueGiveItem::get_db_table_name @ 0x81105e8

/* EventClassify::CUsedFatigueGiveItem::get_db_table_name() */

int __thiscall EventClassify::CUsedFatigueGiveItem::get_db_table_name(CUsedFatigueGiveItem *this)

{
  return *(int *)(this + 0x1c) + 8;
}

```

---

## is_eventing

```asm
// === 0811056e EventClassify::CUsedFatigueGiveItem::is_eventing  [0x0811056e-0x81105bd] ===
 811056e:	55                   	push   %ebp
 811056f:	89 e5                	mov    %esp,%ebp
 8110571:	83 ec 18             	sub    $0x18,%esp
 8110574:	8b 45 08             	mov    0x8(%ebp),%eax
 8110577:	89 04 24             	mov    %eax,(%esp)
 811057a:	e8 97 aa ff ff       	call   810b016 <_ZN13EventClassify12CEventEntity11is_eventingEv>
 811057f:	84 c0                	test   %al,%al
 8110581:	74 34                	je     81105b7 <_ZN13EventClassify20CUsedFatigueGiveItem11is_eventingEv+0x49>
 8110583:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8110588:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 811058f:	00 
 8110590:	89 04 24             	mov    %eax,(%esp)
 8110593:	e8 00 54 00 00       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8110598:	8b 10                	mov    (%eax),%edx
 811059a:	83 c2 34             	add    $0x34,%edx
 811059d:	8b 12                	mov    (%edx),%edx
 811059f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81105a6:	00 
 81105a7:	89 04 24             	mov    %eax,(%esp)
 81105aa:	ff d2                	call   *%edx
 81105ac:	84 c0                	test   %al,%al
 81105ae:	74 07                	je     81105b7 <_ZN13EventClassify20CUsedFatigueGiveItem11is_eventingEv+0x49>
 81105b0:	b8 01 00 00 00       	mov    $0x1,%eax
 81105b5:	eb 05                	jmp    81105bc <_ZN13EventClassify20CUsedFatigueGiveItem11is_eventingEv+0x4e>
 81105b7:	b8 00 00 00 00       	mov    $0x0,%eax
 81105bc:	c9                   	leave
 81105bd:	c3                   	ret

```

```c
// EventClassify::CUsedFatigueGiveItem::is_eventing @ 0x811056e

/* EventClassify::CUsedFatigueGiveItem::is_eventing() */

undefined4 __thiscall EventClassify::CUsedFatigueGiveItem::is_eventing(CUsedFatigueGiveItem *this)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = CEventEntity::is_eventing((CEventEntity *)this);
  if (cVar1 != '\0') {
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x65);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

```

---

## sendEventItemFromFatigue

```asm
// === 081105f6 EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue  [0x081105f6-0x8110755] ===
 81105f6:	55                   	push   %ebp
 81105f7:	89 e5                	mov    %esp,%ebp
 81105f9:	56                   	push   %esi
 81105fa:	53                   	push   %ebx
 81105fb:	83 ec 30             	sub    $0x30,%esp
 81105fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8110601:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110604:	8b 40 10             	mov    0x10(%eax),%eax
 8110607:	85 c0                	test   %eax,%eax
 8110609:	0f 84 39 01 00 00    	je     8110748 <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x152>
 811060f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110612:	89 04 24             	mov    %eax,(%esp)
 8110615:	e8 52 08 00 00       	call   8110e6c <_ZNK5CUser35GetCurCharacUsedGiftFatigueQuantityEv>
 811061a:	85 c0                	test   %eax,%eax
 811061c:	0f 94 c0             	sete   %al
 811061f:	84 c0                	test   %al,%al
 8110621:	0f 85 24 01 00 00    	jne    811074b <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x155>
 8110627:	8b 45 0c             	mov    0xc(%ebp),%eax
 811062a:	89 04 24             	mov    %eax,(%esp)
 811062d:	e8 3a 08 00 00       	call   8110e6c <_ZNK5CUser35GetCurCharacUsedGiftFatigueQuantityEv>
 8110632:	2b 45 10             	sub    0x10(%ebp),%eax
 8110635:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8110638:	8b 45 08             	mov    0x8(%ebp),%eax
 811063b:	8b 40 1c             	mov    0x1c(%eax),%eax
 811063e:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110641:	85 c0                	test   %eax,%eax
 8110643:	0f 88 e4 00 00 00    	js     811072d <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x137>
 8110649:	8b 45 08             	mov    0x8(%ebp),%eax
 811064c:	8b 40 1c             	mov    0x1c(%eax),%eax
 811064f:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110652:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8110655:	0f 87 d2 00 00 00    	ja     811072d <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x137>
 811065b:	e9 ef 00 00 00       	jmp    811074f <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x159>
 8110660:	8b 45 08             	mov    0x8(%ebp),%eax
 8110663:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110666:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110669:	85 c0                	test   %eax,%eax
 811066b:	78 12                	js     811067f <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x89>
 811066d:	8b 45 08             	mov    0x8(%ebp),%eax
 8110670:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110673:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110676:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8110679:	0f 86 cf 00 00 00    	jbe    811074e <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x158>
 811067f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8110683:	8b 45 08             	mov    0x8(%ebp),%eax
 8110686:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110689:	8b 40 10             	mov    0x10(%eax),%eax
 811068c:	89 c1                	mov    %eax,%ecx
 811068e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8110691:	ba 00 00 00 00       	mov    $0x0,%edx
 8110696:	f7 f1                	div    %ecx
 8110698:	89 d0                	mov    %edx,%eax
 811069a:	85 c0                	test   %eax,%eax
 811069c:	0f 85 8b 00 00 00    	jne    811072d <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x137>
 81106a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81106a5:	8b 40 1c             	mov    0x1c(%eax),%eax
 81106a8:	83 c0 20             	add    $0x20,%eax
 81106ab:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81106b2:	00 
 81106b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81106b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81106ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 81106be:	8d 45 ef             	lea    -0x11(%ebp),%eax
 81106c1:	89 04 24             	mov    %eax,(%esp)
 81106c4:	e8 69 c8 ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 81106c9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81106cc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81106d0:	74 5b                	je     811072d <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x137>
 81106d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81106d5:	8b 40 1c             	mov    0x1c(%eax),%eax
 81106d8:	8b 70 40             	mov    0x40(%eax),%esi
 81106db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81106de:	89 04 24             	mov    %eax,(%esp)
 81106e1:	e8 68 b5 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81106e6:	89 c3                	mov    %eax,%ebx
 81106e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81106eb:	89 04 24             	mov    %eax,(%esp)
 81106ee:	e8 7b 9c fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81106f3:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81106f7:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81106fb:	89 44 24 14          	mov    %eax,0x14(%esp)
 81106ff:	c7 44 24 10 d8 c4 b4 	movl   $0x8b4c4d8,0x10(%esp)
 8110706:	08 
 8110707:	c7 44 24 0c 3f 08 00 	movl   $0x83f,0xc(%esp)
 811070e:	00 
 811070f:	c7 44 24 08 00 d2 b4 	movl   $0x8b4d200,0x8(%esp)
 8110716:	08 
 8110717:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 811071e:	08 
 811071f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8110726:	e8 df 34 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 811072b:	eb 22                	jmp    811074f <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x159>
 811072d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110730:	89 04 24             	mov    %eax,(%esp)
 8110733:	e8 34 07 00 00       	call   8110e6c <_ZNK5CUser35GetCurCharacUsedGiftFatigueQuantityEv>
 8110738:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 811073b:	0f 97 c0             	seta   %al
 811073e:	84 c0                	test   %al,%al
 8110740:	0f 85 1a ff ff ff    	jne    8110660 <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x6a>
 8110746:	eb 07                	jmp    811074f <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x159>
 8110748:	90                   	nop
 8110749:	eb 04                	jmp    811074f <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x159>
 811074b:	90                   	nop
 811074c:	eb 01                	jmp    811074f <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj+0x159>
 811074e:	90                   	nop
 811074f:	83 c4 30             	add    $0x30,%esp
 8110752:	5b                   	pop    %ebx
 8110753:	5e                   	pop    %esi
 8110754:	5d                   	pop    %ebp
 8110755:	c3                   	ret

```

```c
// EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue @ 0x81105f6

/* EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue(CUser*, unsigned int) */

void __thiscall
EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue
          (CUsedFatigueGiveItem *this,CUser *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  CEventActionMng local_15;
  uint local_14;
  int local_10;
  
  if ((*(int *)(*(int *)(this + 0x1c) + 0x10) != 0) &&
     (iVar2 = CUser::GetCurCharacUsedGiftFatigueQuantity(param_1), iVar2 != 0)) {
    iVar2 = CUser::GetCurCharacUsedGiftFatigueQuantity(param_1);
    local_14 = iVar2 - param_2;
    if ((*(int *)(*(int *)(this + 0x1c) + 0x1c) < 0) ||
       (local_14 < *(uint *)(*(int *)(this + 0x1c) + 0x1c))) {
      do {
        uVar5 = CUser::GetCurCharacUsedGiftFatigueQuantity(param_1);
        if (uVar5 <= local_14) {
          return;
        }
        if ((-1 < *(int *)(*(int *)(this + 0x1c) + 0x1c)) &&
           (*(uint *)(*(int *)(this + 0x1c) + 0x1c) <= local_14)) {
          return;
        }
        local_14 = local_14 + 1;
      } while ((local_14 % *(uint *)(*(int *)(this + 0x1c) + 0x10) != 0) ||
              (local_10 = CEventActionMng::process_action_send_mail
                                    (&local_15,param_1,
                                     (Action_SendMail *)(*(int *)(this + 0x1c) + 0x20),true),
              local_10 == 0));
      uVar1 = *(undefined4 *)(*(int *)(this + 0x1c) + 0x40);
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = CUser::get_acc_id(param_1);
      LogManager::logFormat
                (1,"EventClassify.cpp",
                 "void EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue(CUser*, unsigned int)"
                 ,0x83f,
                 "CUsedFatigueGiveItem::sendEventItemFromFatigue(m_id:%d, charac_no:%d, reward:%d)",
                 uVar4,uVar3,uVar1);
    }
  }
  return;
}

```

---

## set_event_data

```asm
// === 081105be EventClassify::CUsedFatigueGiveItem::set_event_data  [0x081105be-0x81105e7] ===
 81105be:	55                   	push   %ebp
 81105bf:	89 e5                	mov    %esp,%ebp
 81105c1:	83 ec 18             	sub    $0x18,%esp
 81105c4:	8b 45 08             	mov    0x8(%ebp),%eax
 81105c7:	8b 00                	mov    (%eax),%eax
 81105c9:	83 c0 18             	add    $0x18,%eax
 81105cc:	8b 08                	mov    (%eax),%ecx
 81105ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81105d1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81105d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81105d8:	89 04 24             	mov    %eax,(%esp)
 81105db:	ff d1                	call   *%ecx
 81105dd:	8b 55 10             	mov    0x10(%ebp),%edx
 81105e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81105e3:	89 50 1c             	mov    %edx,0x1c(%eax)
 81105e6:	c9                   	leave
 81105e7:	c3                   	ret

```

```c
// EventClassify::CUsedFatigueGiveItem::set_event_data @ 0x81105be

/* EventClassify::CUsedFatigueGiveItem::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CUsedFatigueGiveItem::set_event_data
          (CUsedFatigueGiveItem *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

---

## verifyApplyUser

```asm
// === 08110756 EventClassify::CUsedFatigueGiveItem::verifyApplyUser  [0x08110756-0x81107e9] ===
 8110756:	55                   	push   %ebp
 8110757:	89 e5                	mov    %esp,%ebp
 8110759:	53                   	push   %ebx
 811075a:	83 ec 14             	sub    $0x14,%esp
 811075d:	8b 45 08             	mov    0x8(%ebp),%eax
 8110760:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110763:	8b 40 18             	mov    0x18(%eax),%eax
 8110766:	85 c0                	test   %eax,%eax
 8110768:	78 1f                	js     8110789 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x33>
 811076a:	8b 45 08             	mov    0x8(%ebp),%eax
 811076d:	8b 40 1c             	mov    0x1c(%eax),%eax
 8110770:	8b 58 18             	mov    0x18(%eax),%ebx
 8110773:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110776:	89 04 24             	mov    %eax,(%esp)
 8110779:	e8 a2 d7 fe ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 811077e:	39 c3                	cmp    %eax,%ebx
 8110780:	74 07                	je     8110789 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x33>
 8110782:	b8 01 00 00 00       	mov    $0x1,%eax
 8110787:	eb 05                	jmp    811078e <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x38>
 8110789:	b8 00 00 00 00       	mov    $0x0,%eax
 811078e:	84 c0                	test   %al,%al
 8110790:	74 07                	je     8110799 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x43>
 8110792:	b8 00 00 00 00       	mov    $0x0,%eax
 8110797:	eb 4a                	jmp    81107e3 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x8d>
 8110799:	8b 45 08             	mov    0x8(%ebp),%eax
 811079c:	89 04 24             	mov    %eax,(%esp)
 811079f:	e8 48 07 00 00       	call   8110eec <_ZNK13EventClassify20CUsedFatigueGiveItem13get_user_typeEv>
 81107a4:	0f b6 c0             	movzbl %al,%eax
 81107a7:	85 c0                	test   %eax,%eax
 81107a9:	74 07                	je     81107b2 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x5c>
 81107ab:	83 f8 01             	cmp    $0x1,%eax
 81107ae:	74 09                	je     81107b9 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x63>
 81107b0:	eb 2c                	jmp    81107de <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x88>
 81107b2:	b8 01 00 00 00       	mov    $0x1,%eax
 81107b7:	eb 2a                	jmp    81107e3 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x8d>
 81107b9:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 81107c0:	00 
 81107c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81107c4:	89 04 24             	mov    %eax,(%esp)
 81107c7:	e8 42 58 fd ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 81107cc:	84 c0                	test   %al,%al
 81107ce:	74 07                	je     81107d7 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x81>
 81107d0:	b8 01 00 00 00       	mov    $0x1,%eax
 81107d5:	eb 0c                	jmp    81107e3 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x8d>
 81107d7:	b8 00 00 00 00       	mov    $0x0,%eax
 81107dc:	eb 05                	jmp    81107e3 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser+0x8d>
 81107de:	b8 00 00 00 00       	mov    $0x0,%eax
 81107e3:	83 c4 14             	add    $0x14,%esp
 81107e6:	5b                   	pop    %ebx
 81107e7:	5d                   	pop    %ebp
 81107e8:	c3                   	ret
 81107e9:	90                   	nop

```

```c
// EventClassify::CUsedFatigueGiveItem::verifyApplyUser @ 0x8110756

/* EventClassify::CUsedFatigueGiveItem::verifyApplyUser(CUser*) */

undefined4 __thiscall
EventClassify::CUsedFatigueGiveItem::verifyApplyUser(CUsedFatigueGiveItem *this,CUser *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (-1 < *(int *)(*(int *)(this + 0x1c) + 0x18)) {
    iVar1 = *(int *)(*(int *)(this + 0x1c) + 0x18);
    iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar1 != iVar4) {
      bVar2 = true;
      goto LAB_0811078e;
    }
  }
  bVar2 = false;
LAB_0811078e:
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    cVar3 = get_user_type(this);
    if (cVar3 == '\0') {
      uVar5 = 1;
    }
    else if (cVar3 == '\x01') {
      cVar3 = CUser::isAffectedPremium(param_1,0xc);
      if (cVar3 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

