# Dispatcher_PcRoomRentItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081e5762 Dispatcher_PcRoomRentItem::check_error  [0x081e5762-0x81e583d] ===
 81e5762:	55                   	push   %ebp
 81e5763:	89 e5                	mov    %esp,%ebp
 81e5765:	83 ec 28             	sub    $0x28,%esp
 81e5768:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e576b:	89 04 24             	mov    %eax,(%esp)
 81e576e:	e8 19 4c ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e5773:	83 f8 03             	cmp    $0x3,%eax
 81e5776:	75 0f                	jne    81e5787 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x25>
 81e5778:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e577b:	89 04 24             	mov    %eax,(%esp)
 81e577e:	e8 af ac f3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81e5783:	85 c0                	test   %eax,%eax
 81e5785:	75 07                	jne    81e578e <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x2c>
 81e5787:	b8 01 00 00 00       	mov    $0x1,%eax
 81e578c:	eb 05                	jmp    81e5793 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x31>
 81e578e:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5793:	84 c0                	test   %al,%al
 81e5795:	74 0a                	je     81e57a1 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x3f>
 81e5797:	b8 03 00 00 00       	mov    $0x3,%eax
 81e579c:	e9 9b 00 00 00       	jmp    81e583c <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0xda>
 81e57a1:	8b 45 10             	mov    0x10(%ebp),%eax
 81e57a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e57a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e57aa:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e57ae:	84 c0                	test   %al,%al
 81e57b0:	7e 0b                	jle    81e57bd <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x5b>
 81e57b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e57b5:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e57b9:	3c 02                	cmp    $0x2,%al
 81e57bb:	7e 07                	jle    81e57c4 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x62>
 81e57bd:	b8 08 00 00 00       	mov    $0x8,%eax
 81e57c2:	eb 78                	jmp    81e583c <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0xda>
 81e57c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e57c7:	89 04 24             	mov    %eax,(%esp)
 81e57ca:	e8 f3 b5 f2 ff       	call   8110dc2 <_ZN5CUser11GetPCRoomNoEv>
 81e57cf:	85 c0                	test   %eax,%eax
 81e57d1:	75 12                	jne    81e57e5 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x83>
 81e57d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e57d6:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e57da:	3c 01                	cmp    $0x1,%al
 81e57dc:	75 07                	jne    81e57e5 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x83>
 81e57de:	b8 01 00 00 00       	mov    $0x1,%eax
 81e57e3:	eb 05                	jmp    81e57ea <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x88>
 81e57e5:	b8 00 00 00 00       	mov    $0x0,%eax
 81e57ea:	84 c0                	test   %al,%al
 81e57ec:	74 07                	je     81e57f5 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0x93>
 81e57ee:	b8 08 00 00 00       	mov    $0x8,%eax
 81e57f3:	eb 47                	jmp    81e583c <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0xda>
 81e57f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e57f8:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e57fc:	3c 02                	cmp    $0x2,%al
 81e57fe:	75 37                	jne    81e5837 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0xd5>
 81e5800:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e5805:	c7 44 24 04 5e 00 00 	movl   $0x5e,0x4(%esp)
 81e580c:	00 
 81e580d:	89 04 24             	mov    %eax,(%esp)
 81e5810:	e8 83 01 f3 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e5815:	8b 10                	mov    (%eax),%edx
 81e5817:	83 c2 34             	add    $0x34,%edx
 81e581a:	8b 12                	mov    (%edx),%edx
 81e581c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e5823:	00 
 81e5824:	89 04 24             	mov    %eax,(%esp)
 81e5827:	ff d2                	call   *%edx
 81e5829:	83 f0 01             	xor    $0x1,%eax
 81e582c:	84 c0                	test   %al,%al
 81e582e:	74 07                	je     81e5837 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0xd5>
 81e5830:	b8 08 00 00 00       	mov    $0x8,%eax
 81e5835:	eb 05                	jmp    81e583c <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE+0xda>
 81e5837:	b8 00 00 00 00       	mov    $0x0,%eax
 81e583c:	c9                   	leave
 81e583d:	c3                   	ret

```

```c
// Dispatcher_PcRoomRentItem::check_error @ 0x81e5762

/* Dispatcher_PcRoomRentItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PcRoomRentItem::check_error
          (Dispatcher_PcRoomRentItem *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 3;
  }
  else if (((char)param_2[0xe] < '\x01') || ('\x02' < (char)param_2[0xe])) {
    uVar4 = 8;
  }
  else {
    iVar3 = CUser::GetPCRoomNo(param_1);
    if ((iVar3 == 0) && (param_2[0xe] == (MSG_BASE)0x1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 8;
    }
    else {
      if (param_2[0xe] == (MSG_BASE)0x2) {
        piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5e);
        cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
        if (cVar2 != '\x01') {
          return 8;
        }
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## giveDimensionItems

```asm
// === 081e583e Dispatcher_PcRoomRentItem::giveDimensionItems  [0x081e583e-0x81e5933] ===
 81e583e:	55                   	push   %ebp
 81e583f:	89 e5                	mov    %esp,%ebp
 81e5841:	57                   	push   %edi
 81e5842:	56                   	push   %esi
 81e5843:	53                   	push   %ebx
 81e5844:	83 ec 3c             	sub    $0x3c,%esp
 81e5847:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e584b:	0f 84 d1 00 00 00    	je     81e5922 <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xe4>
 81e5851:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5854:	8b 40 0c             	mov    0xc(%eax),%eax
 81e5857:	83 f8 02             	cmp    $0x2,%eax
 81e585a:	0f 85 c5 00 00 00    	jne    81e5925 <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xe7>
 81e5860:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81e5867:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81e586e:	00 
 81e586f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e5872:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5876:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5879:	89 04 24             	mov    %eax,(%esp)
 81e587c:	e8 76 b9 08 00       	call   82711f7 <_ZN7pc_room17GetSelectionIndexER5CUserRii>
 81e5881:	83 f0 01             	xor    $0x1,%eax
 81e5884:	84 c0                	test   %al,%al
 81e5886:	0f 85 9c 00 00 00    	jne    81e5928 <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xea>
 81e588c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e588f:	89 04 24             	mov    %eax,(%esp)
 81e5892:	e8 fd b3 f2 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81e5897:	0f be f8             	movsbl %al,%edi
 81e589a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e589d:	89 04 24             	mov    %eax,(%esp)
 81e58a0:	e8 7b 86 f1 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81e58a5:	89 c3                	mov    %eax,%ebx
 81e58a7:	8b 75 dc             	mov    -0x24(%ebp),%esi
 81e58aa:	e8 ec 68 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e58af:	05 34 4b 00 00       	add    $0x4b34,%eax
 81e58b4:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81e58b8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e58bc:	89 74 24 04          	mov    %esi,0x4(%esp)
 81e58c0:	89 04 24             	mov    %eax,(%esp)
 81e58c3:	e8 d2 06 73 00       	call   8915f9a <_ZN29DimensionActivationRewardData18getRewardGiveItemsEiii>
 81e58c8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e58cb:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81e58cf:	74 5a                	je     81e592b <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xed>
 81e58d1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81e58d8:	eb 31                	jmp    81e590b <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xcd>
 81e58da:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e58dd:	89 04 24             	mov    %eax,(%esp)
 81e58e0:	e8 49 97 04 00       	call   822f02e <_ZN20InstanceRentalSystem9RentInput10RentInElemC1Ev>
 81e58e5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e58e8:	88 45 d4             	mov    %al,-0x2c(%ebp)
 81e58eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e58ee:	88 45 d5             	mov    %al,-0x2b(%ebp)
 81e58f1:	c6 45 d7 01          	movb   $0x1,-0x29(%ebp)
 81e58f5:	8b 45 10             	mov    0x10(%ebp),%eax
 81e58f8:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81e58fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e58ff:	89 04 24             	mov    %eax,(%esp)
 81e5902:	e8 5d 1b 05 00       	call   8237464 <_ZNSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE9push_backERKS2_>
 81e5907:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 81e590b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e590e:	89 04 24             	mov    %eax,(%esp)
 81e5911:	e8 40 1d 05 00       	call   8237656 <_ZNKSt6vectorI19EventRewardItemInfoSaIS0_EE4sizeEv>
 81e5916:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81e5919:	0f 9f c0             	setg   %al
 81e591c:	84 c0                	test   %al,%al
 81e591e:	75 ba                	jne    81e58da <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0x9c>
 81e5920:	eb 0a                	jmp    81e592c <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xee>
 81e5922:	90                   	nop
 81e5923:	eb 07                	jmp    81e592c <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xee>
 81e5925:	90                   	nop
 81e5926:	eb 04                	jmp    81e592c <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xee>
 81e5928:	90                   	nop
 81e5929:	eb 01                	jmp    81e592c <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE+0xee>
 81e592b:	90                   	nop
 81e592c:	83 c4 3c             	add    $0x3c,%esp
 81e592f:	5b                   	pop    %ebx
 81e5930:	5e                   	pop    %esi
 81e5931:	5f                   	pop    %edi
 81e5932:	5d                   	pop    %ebp
 81e5933:	c3                   	ret

```

```c
// Dispatcher_PcRoomRentItem::giveDimensionItems @ 0x81e583e

/* Dispatcher_PcRoomRentItem::giveDimensionItems(CUser*, InstanceRentalSystem::RentInput&) */

void __thiscall
Dispatcher_PcRoomRentItem::giveDimensionItems
          (Dispatcher_PcRoomRentItem *this,CUser *param_1,RentInput *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RentInElem local_30;
  undefined1 local_2f;
  undefined1 local_2d;
  int local_28;
  vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *local_24;
  int local_20;
  
  if ((param_1 != (CUser *)0x0) && (*(int *)(param_2 + 0xc) == 2)) {
    local_28 = 0;
    cVar1 = pc_room::GetSelectionIndex(param_1,&local_28,2);
    if (cVar1 == '\x01') {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar4 = local_28;
      iVar3 = G_CDataManager();
      local_24 = (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)
                 DimensionActivationRewardData::getRewardGiveItems
                           ((DimensionActivationRewardData *)(iVar3 + 0x4b34),iVar4,iVar2,(int)cVar1
                           );
      if (local_24 != (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)0x0) {
        local_20 = 0;
        while (iVar4 = std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::size
                                 (local_24), local_20 < iVar4) {
          InstanceRentalSystem::RentInput::RentInElem::RentInElem(&local_30);
          local_30 = SUB41(local_28,0);
          local_2f = (undefined1)local_20;
          local_2d = 1;
          std::
          vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
          ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                       *)param_2,&local_30);
          local_20 = local_20 + 1;
        }
      }
    }
  }
  return;
}

```

---

## process

```asm
// === 081e52c0 Dispatcher_PcRoomRentItem::process  [0x081e52c0-0x81e542d] ===
 81e52c0:	55                   	push   %ebp
 81e52c1:	89 e5                	mov    %esp,%ebp
 81e52c3:	56                   	push   %esi
 81e52c4:	53                   	push   %ebx
 81e52c5:	83 ec 40             	sub    $0x40,%esp
 81e52c8:	8b 45 14             	mov    0x14(%ebp),%eax
 81e52cb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e52ce:	8b 45 10             	mov    0x10(%ebp),%eax
 81e52d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e52d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e52d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e52dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81e52df:	89 04 24             	mov    %eax,(%esp)
 81e52e2:	e8 7b 04 00 00       	call   81e5762 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE>
 81e52e7:	89 c2                	mov    %eax,%edx
 81e52e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e52ec:	89 50 04             	mov    %edx,0x4(%eax)
 81e52ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e52f2:	8b 40 04             	mov    0x4(%eax),%eax
 81e52f5:	85 c0                	test   %eax,%eax
 81e52f7:	74 0a                	je     81e5303 <_ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase+0x43>
 81e52f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e52fe:	e9 22 01 00 00       	jmp    81e5425 <_ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase+0x165>
 81e5303:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5306:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e5309:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e530c:	89 04 24             	mov    %eax,(%esp)
 81e530f:	e8 44 9d 04 00       	call   822f058 <_ZN20InstanceRentalSystem9RentInputC1Ev>
 81e5314:	c6 45 e8 01          	movb   $0x1,-0x18(%ebp)
 81e5318:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e531b:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e531f:	0f be c0             	movsbl %al,%eax
 81e5322:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e5325:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81e532c:	eb 3d                	jmp    81e536b <_ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase+0xab>
 81e532e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e5331:	89 04 24             	mov    %eax,(%esp)
 81e5334:	e8 f5 9c 04 00       	call   822f02e <_ZN20InstanceRentalSystem9RentInput10RentInElemC1Ev>
 81e5339:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e533c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e533f:	0f b6 44 50 0f       	movzbl 0xf(%eax,%edx,2),%eax
 81e5344:	88 45 d0             	mov    %al,-0x30(%ebp)
 81e5347:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e534a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e534d:	0f b6 44 50 10       	movzbl 0x10(%eax,%edx,2),%eax
 81e5352:	88 45 d1             	mov    %al,-0x2f(%ebp)
 81e5355:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e5358:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e535c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e535f:	89 04 24             	mov    %eax,(%esp)
 81e5362:	e8 fd 20 05 00       	call   8237464 <_ZNSt6vectorIN20InstanceRentalSystem9RentInput10RentInElemESaIS2_EE9push_backERKS2_>
 81e5367:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81e536b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e536e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e5372:	0f be c0             	movsbl %al,%eax
 81e5375:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81e5378:	0f 9f c0             	setg   %al
 81e537b:	84 c0                	test   %al,%al
 81e537d:	75 af                	jne    81e532e <_ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 81e537f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e5382:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e5386:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5389:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e538d:	8b 45 08             	mov    0x8(%ebp),%eax
 81e5390:	89 04 24             	mov    %eax,(%esp)
 81e5393:	e8 a6 04 00 00       	call   81e583e <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE>
 81e5398:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e539b:	8d 50 08             	lea    0x8(%eax),%edx
 81e539e:	a1 38 f7 41 09       	mov    0x941f738,%eax
 81e53a3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e53a7:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81e53aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e53ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e53b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e53b5:	89 04 24             	mov    %eax,(%esp)
 81e53b8:	e8 cb ae 08 00       	call   8270288 <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE>
 81e53bd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e53c0:	89 42 04             	mov    %eax,0x4(%edx)
 81e53c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e53c6:	8b 40 04             	mov    0x4(%eax),%eax
 81e53c9:	85 c0                	test   %eax,%eax
 81e53cb:	75 2b                	jne    81e53f8 <_ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase+0x138>
 81e53cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e53d0:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e53d4:	0f be c0             	movsbl %al,%eax
 81e53d7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e53da:	83 c2 08             	add    $0x8,%edx
 81e53dd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e53e4:	00 
 81e53e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e53e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e53ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e53f0:	89 04 24             	mov    %eax,(%esp)
 81e53f3:	e8 44 1a 49 00       	call   8676e3c <_ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib>
 81e53f8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e53fd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e5400:	89 04 24             	mov    %eax,(%esp)
 81e5403:	e8 aa fe 04 00       	call   82352b2 <_ZN20InstanceRentalSystem9RentInputD1Ev>
 81e5408:	eb 1b                	jmp    81e5425 <_ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase+0x165>
 81e540a:	89 d3                	mov    %edx,%ebx
 81e540c:	89 c6                	mov    %eax,%esi
 81e540e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e5411:	89 04 24             	mov    %eax,(%esp)
 81e5414:	e8 99 fe 04 00       	call   82352b2 <_ZN20InstanceRentalSystem9RentInputD1Ev>
 81e5419:	89 f0                	mov    %esi,%eax
 81e541b:	89 da                	mov    %ebx,%edx
 81e541d:	89 04 24             	mov    %eax,(%esp)
 81e5420:	e8 2b e3 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e5425:	89 d8                	mov    %ebx,%eax
 81e5427:	83 c4 40             	add    $0x40,%esp
 81e542a:	5b                   	pop    %ebx
 81e542b:	5e                   	pop    %esi
 81e542c:	5d                   	pop    %ebp
 81e542d:	c3                   	ret

```

```c
// Dispatcher_PcRoomRentItem::process @ 0x81e52c0

/* Dispatcher_PcRoomRentItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PcRoomRentItem::process
          (Dispatcher_PcRoomRentItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  MSG_BASE local_34;
  MSG_BASE local_33;
  RentInput local_2c [12];
  int local_20;
  undefined1 local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_18 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar1;
  if (*(int *)(local_18 + 4) == 0) {
    local_14 = param_2;
    InstanceRentalSystem::RentInput::RentInput(local_2c);
    local_1c = 1;
    local_20 = (int)(char)local_14[0xe];
    for (local_10 = 0; local_10 < (char)local_14[0xd]; local_10 = local_10 + 1) {
      InstanceRentalSystem::RentInput::RentInElem::RentInElem((RentInElem *)&local_34);
      local_34 = local_14[local_10 * 2 + 0xf];
      local_33 = local_14[local_10 * 2 + 0x10];
                    /* try { // try from 081e5362 to 081e53f7 has its CatchHandler @ 081e540a */
      std::
      vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
      ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                   *)local_2c,(RentInElem *)&local_34);
    }
    giveDimensionItems(this,param_1,local_2c);
    uVar1 = InstanceRentalSystem::Rent
                      (GlobalData::s_rentalSystem,param_1,local_2c,(RentOutput *)(local_18 + 8));
    *(undefined4 *)(local_18 + 4) = uVar1;
    if (*(int *)(local_18 + 4) == 0) {
      CUser::UpdateCurrentCharacRentalInfo
                (param_1,(RentOutput *)(local_18 + 8),(int)(char)local_14[0xe],false);
    }
    InstanceRentalSystem::RentInput::~RentInput(local_2c);
  }
  return 0;
}

```

---

## read

```asm
// === 081e512e Dispatcher_PcRoomRentItem::read  [0x081e512e-0x81e52bf] ===
 81e512e:	55                   	push   %ebp
 81e512f:	89 e5                	mov    %esp,%ebp
 81e5131:	83 ec 28             	sub    $0x28,%esp
 81e5134:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5137:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e513a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e513d:	83 c0 0e             	add    $0xe,%eax
 81e5140:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5144:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5147:	89 04 24             	mov    %eax,(%esp)
 81e514a:	e8 d3 7d 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e514f:	83 f0 01             	xor    $0x1,%eax
 81e5152:	84 c0                	test   %al,%al
 81e5154:	74 29                	je     81e517f <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x51>
 81e5156:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e515d:	00 
 81e515e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e5165:	00 
 81e5166:	c7 44 24 04 e0 0f bd 	movl   $0x8bd0fe0,0x4(%esp)
 81e516d:	08 
 81e516e:	c7 04 24 3c 5e 00 00 	movl   $0x5e3c,(%esp)
 81e5175:	e8 5d b7 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e517a:	e9 3f 01 00 00       	jmp    81e52be <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x190>
 81e517f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5182:	83 c0 0d             	add    $0xd,%eax
 81e5185:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5189:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e518c:	89 04 24             	mov    %eax,(%esp)
 81e518f:	e8 8e 7d 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e5194:	83 f0 01             	xor    $0x1,%eax
 81e5197:	84 c0                	test   %al,%al
 81e5199:	74 29                	je     81e51c4 <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x96>
 81e519b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e51a2:	00 
 81e51a3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e51aa:	00 
 81e51ab:	c7 44 24 04 e0 0f bd 	movl   $0x8bd0fe0,0x4(%esp)
 81e51b2:	08 
 81e51b3:	c7 04 24 40 5e 00 00 	movl   $0x5e40,(%esp)
 81e51ba:	e8 18 b7 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e51bf:	e9 fa 00 00 00       	jmp    81e52be <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x190>
 81e51c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e51c7:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e51cb:	84 c0                	test   %al,%al
 81e51cd:	7e 0b                	jle    81e51da <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0xac>
 81e51cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e51d2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e51d6:	3c 01                	cmp    $0x1,%al
 81e51d8:	7e 29                	jle    81e5203 <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0xd5>
 81e51da:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e51e1:	00 
 81e51e2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e51e9:	00 
 81e51ea:	c7 44 24 04 e0 0f bd 	movl   $0x8bd0fe0,0x4(%esp)
 81e51f1:	08 
 81e51f2:	c7 04 24 43 5e 00 00 	movl   $0x5e43,(%esp)
 81e51f9:	e8 d9 b6 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e51fe:	e9 bb 00 00 00       	jmp    81e52be <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x190>
 81e5203:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81e520a:	e9 92 00 00 00       	jmp    81e52a1 <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x173>
 81e520f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5212:	01 c0                	add    %eax,%eax
 81e5214:	03 45 f0             	add    -0x10(%ebp),%eax
 81e5217:	83 c0 0f             	add    $0xf,%eax
 81e521a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e521e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5221:	89 04 24             	mov    %eax,(%esp)
 81e5224:	e8 f9 7c 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e5229:	83 f0 01             	xor    $0x1,%eax
 81e522c:	84 c0                	test   %al,%al
 81e522e:	74 26                	je     81e5256 <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x128>
 81e5230:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e5237:	00 
 81e5238:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e523f:	00 
 81e5240:	c7 44 24 04 e0 0f bd 	movl   $0x8bd0fe0,0x4(%esp)
 81e5247:	08 
 81e5248:	c7 04 24 48 5e 00 00 	movl   $0x5e48,(%esp)
 81e524f:	e8 83 b6 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e5254:	eb 68                	jmp    81e52be <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x190>
 81e5256:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5259:	01 c0                	add    %eax,%eax
 81e525b:	03 45 f0             	add    -0x10(%ebp),%eax
 81e525e:	83 c0 10             	add    $0x10,%eax
 81e5261:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5265:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5268:	89 04 24             	mov    %eax,(%esp)
 81e526b:	e8 b2 7c 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e5270:	83 f0 01             	xor    $0x1,%eax
 81e5273:	84 c0                	test   %al,%al
 81e5275:	74 26                	je     81e529d <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x16f>
 81e5277:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e527e:	00 
 81e527f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e5286:	00 
 81e5287:	c7 44 24 04 e0 0f bd 	movl   $0x8bd0fe0,0x4(%esp)
 81e528e:	08 
 81e528f:	c7 04 24 4a 5e 00 00 	movl   $0x5e4a,(%esp)
 81e5296:	e8 3c b6 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e529b:	eb 21                	jmp    81e52be <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0x190>
 81e529d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81e52a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e52a4:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e52a8:	0f be c0             	movsbl %al,%eax
 81e52ab:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81e52ae:	0f 9f c0             	setg   %al
 81e52b1:	84 c0                	test   %al,%al
 81e52b3:	0f 85 56 ff ff ff    	jne    81e520f <_ZN25Dispatcher_PcRoomRentItem4readER9PacketBufR8MSG_BASE+0xe1>
 81e52b9:	b8 00 00 00 00       	mov    $0x0,%eax
 81e52be:	c9                   	leave
 81e52bf:	c3                   	ret

```

```c
// Dispatcher_PcRoomRentItem::read @ 0x81e512e

/* Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PcRoomRentItem::read
          (Dispatcher_PcRoomRentItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      if (((char)param_2[0xd] < '\x01') || ('\x01' < (char)param_2[0xd])) {
        uVar2 = LineFunc(0x5e43,"virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
      else {
        for (local_10 = 0; local_10 < (char)param_2[0xd]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 2 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x5e48,
                             "virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 2 + 0x10));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x5e4a,
                             "virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
        }
        uVar2 = 0;
      }
    }
    else {
      uVar2 = LineFunc(0x5e40,"virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x5e3c,"virtual int Dispatcher_PcRoomRentItem::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e542e Dispatcher_PcRoomRentItem::send  [0x081e542e-0x81e5761] ===
 81e542e:	55                   	push   %ebp
 81e542f:	89 e5                	mov    %esp,%ebp
 81e5431:	56                   	push   %esi
 81e5432:	53                   	push   %ebx
 81e5433:	83 ec 50             	sub    $0x50,%esp
 81e5436:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5439:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e543c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e543f:	83 c0 08             	add    $0x8,%eax
 81e5442:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e5445:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 81e5449:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e544c:	89 04 24             	mov    %eax,(%esp)
 81e544f:	e8 f8 88 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e5454:	c7 44 24 08 ee 01 00 	movl   $0x1ee,0x8(%esp)
 81e545b:	00 
 81e545c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5463:	00 
 81e5464:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e5467:	89 04 24             	mov    %eax,(%esp)
 81e546a:	e8 8d 64 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e546f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e5472:	8b 40 04             	mov    0x4(%eax),%eax
 81e5475:	85 c0                	test   %eax,%eax
 81e5477:	0f 85 04 01 00 00    	jne    81e5581 <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x153>
 81e547d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5484:	00 
 81e5485:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e5488:	89 04 24             	mov    %eax,(%esp)
 81e548b:	e8 90 64 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5490:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e5493:	83 c0 0c             	add    $0xc,%eax
 81e5496:	89 04 24             	mov    %eax,(%esp)
 81e5499:	e8 3a 20 05 00       	call   82374d8 <_ZNKSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS1_EE4sizeEv>
 81e549e:	0f be c0             	movsbl %al,%eax
 81e54a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e54a5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e54a8:	89 04 24             	mov    %eax,(%esp)
 81e54ab:	e8 70 64 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e54b0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e54b3:	8d 50 0c             	lea    0xc(%eax),%edx
 81e54b6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e54b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e54bd:	89 04 24             	mov    %eax,(%esp)
 81e54c0:	e8 2f 20 05 00       	call   82374f4 <_ZNSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS1_EE5beginEv>
 81e54c5:	83 ec 04             	sub    $0x4,%esp
 81e54c8:	e9 80 00 00 00       	jmp    81e554d <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x11f>
 81e54cd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e54d0:	89 04 24             	mov    %eax,(%esp)
 81e54d3:	e8 a8 20 05 00       	call   8237580 <_ZNK9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem15DeletedRentItemESt6vectorIS2_SaIS2_EEEdeEv>
 81e54d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e54db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e54de:	0f b6 00             	movzbl (%eax),%eax
 81e54e1:	84 c0                	test   %al,%al
 81e54e3:	74 33                	je     81e5518 <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0xea>
 81e54e5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81e54ec:	00 
 81e54ed:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e54f0:	89 04 24             	mov    %eax,(%esp)
 81e54f3:	e8 28 64 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e54f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e54fb:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81e54ff:	66 83 f8 09          	cmp    $0x9,%ax
 81e5503:	7e 26                	jle    81e552b <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0xfd>
 81e5505:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5508:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81e550c:	66 83 f8 15          	cmp    $0x15,%ax
 81e5510:	7f 19                	jg     81e552b <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0xfd>
 81e5512:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 81e5516:	eb 13                	jmp    81e552b <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0xfd>
 81e5518:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e551f:	00 
 81e5520:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e5523:	89 04 24             	mov    %eax,(%esp)
 81e5526:	e8 f5 63 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e552b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e552e:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81e5532:	98                   	cwtl
 81e5533:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5537:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e553a:	89 04 24             	mov    %eax,(%esp)
 81e553d:	e8 62 49 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e5542:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e5545:	89 04 24             	mov    %eax,(%esp)
 81e5548:	e8 1d 20 05 00       	call   823756a <_ZN9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem15DeletedRentItemESt6vectorIS2_SaIS2_EEEppEv>
 81e554d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e5550:	8d 50 0c             	lea    0xc(%eax),%edx
 81e5553:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e5556:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e555a:	89 04 24             	mov    %eax,(%esp)
 81e555d:	e8 b6 1f 05 00       	call   8237518 <_ZNSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS1_EE3endEv>
 81e5562:	83 ec 04             	sub    $0x4,%esp
 81e5565:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e5568:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e556c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e556f:	89 04 24             	mov    %eax,(%esp)
 81e5572:	e8 c7 1f 05 00       	call   823753e <_ZN9__gnu_cxxneIPN20InstanceRentalSystem15DeletedRentItemESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81e5577:	84 c0                	test   %al,%al
 81e5579:	0f 85 4e ff ff ff    	jne    81e54cd <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x9f>
 81e557f:	eb 2b                	jmp    81e55ac <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x17e>
 81e5581:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e5588:	00 
 81e5589:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e558c:	89 04 24             	mov    %eax,(%esp)
 81e558f:	e8 8c 63 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5594:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e5597:	8b 40 04             	mov    0x4(%eax),%eax
 81e559a:	0f b6 c0             	movzbl %al,%eax
 81e559d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e55a1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e55a4:	89 04 24             	mov    %eax,(%esp)
 81e55a7:	e8 74 63 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e55ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e55b3:	00 
 81e55b4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e55b7:	89 04 24             	mov    %eax,(%esp)
 81e55ba:	e8 99 63 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e55bf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e55c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e55c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e55c9:	89 04 24             	mov    %eax,(%esp)
 81e55cc:	e8 e9 2f 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e55d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e55d4:	8b 40 04             	mov    0x4(%eax),%eax
 81e55d7:	85 c0                	test   %eax,%eax
 81e55d9:	0f 85 38 01 00 00    	jne    81e5717 <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x2e9>
 81e55df:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e55e2:	89 04 24             	mov    %eax,(%esp)
 81e55e5:	e8 62 87 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e55ea:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81e55f1:	00 
 81e55f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e55f9:	00 
 81e55fa:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e55fd:	89 04 24             	mov    %eax,(%esp)
 81e5600:	e8 f7 62 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e5605:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e560c:	00 
 81e560d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e5610:	89 04 24             	mov    %eax,(%esp)
 81e5613:	e8 08 63 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5618:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e561b:	89 04 24             	mov    %eax,(%esp)
 81e561e:	e8 67 1f 05 00       	call   823758a <_ZNKSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE4sizeEv>
 81e5623:	98                   	cwtl
 81e5624:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5628:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e562b:	89 04 24             	mov    %eax,(%esp)
 81e562e:	e8 71 48 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e5633:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81e5636:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e5639:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e563d:	89 04 24             	mov    %eax,(%esp)
 81e5640:	e8 61 1f 05 00       	call   82375a6 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE5beginEv>
 81e5645:	83 ec 04             	sub    $0x4,%esp
 81e5648:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e564b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e564f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81e5652:	89 04 24             	mov    %eax,(%esp)
 81e5655:	e8 70 1f 05 00       	call   82375ca <_ZN9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEC1IPS2_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISB_SA_E7__valueES7_E6__typeEEE>
 81e565a:	eb 49                	jmp    81e56a5 <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x277>
 81e565c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81e565f:	89 04 24             	mov    %eax,(%esp)
 81e5662:	e8 e5 1f 05 00       	call   823764c <_ZNK9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEdeEv>
 81e5667:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e566a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e566d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81e5671:	0f bf d8             	movswl %ax,%ebx
 81e5674:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5677:	89 04 24             	mov    %eax,(%esp)
 81e567a:	e8 ff 4b ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e567f:	8d 55 bc             	lea    -0x44(%ebp),%edx
 81e5682:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e5686:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e568a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5691:	00 
 81e5692:	89 04 24             	mov    %eax,(%esp)
 81e5695:	e8 22 70 31 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 81e569a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81e569d:	89 04 24             	mov    %eax,(%esp)
 81e56a0:	e8 91 1f 05 00       	call   8237636 <_ZN9__gnu_cxx17__normal_iteratorIPKN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEppEv>
 81e56a5:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81e56a8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e56ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e56af:	89 04 24             	mov    %eax,(%esp)
 81e56b2:	e8 2d 1f 05 00       	call   82375e4 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE3endEv>
 81e56b7:	83 ec 04             	sub    $0x4,%esp
 81e56ba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e56bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e56c1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81e56c4:	89 04 24             	mov    %eax,(%esp)
 81e56c7:	e8 3e 1f 05 00       	call   823760a <_ZN9__gnu_cxxneIPKN20InstanceRentalSystem10RentalInfoEPS2_St6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS9_IT0_SB_EE>
 81e56cc:	84 c0                	test   %al,%al
 81e56ce:	75 8c                	jne    81e565c <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x22e>
 81e56d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e56d7:	00 
 81e56d8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e56db:	89 04 24             	mov    %eax,(%esp)
 81e56de:	e8 75 62 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e56e3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e56e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e56ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e56ed:	89 04 24             	mov    %eax,(%esp)
 81e56f0:	e8 c5 2e 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e56f5:	eb 15                	jmp    81e570c <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x2de>
 81e56f7:	89 d3                	mov    %edx,%ebx
 81e56f9:	89 c6                	mov    %eax,%esi
 81e56fb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e56fe:	89 04 24             	mov    %eax,(%esp)
 81e5701:	e8 7a 87 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5706:	89 f0                	mov    %esi,%eax
 81e5708:	89 da                	mov    %ebx,%edx
 81e570a:	eb 26                	jmp    81e5732 <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x304>
 81e570c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81e570f:	89 04 24             	mov    %eax,(%esp)
 81e5712:	e8 69 87 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5717:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 81e571b:	74 30                	je     81e574d <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x31f>
 81e571d:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81e5724:	00 
 81e5725:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5728:	89 04 24             	mov    %eax,(%esp)
 81e572b:	e8 e4 85 47 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 81e5730:	eb 1b                	jmp    81e574d <_ZN25Dispatcher_PcRoomRentItem4sendEP5CUserR9ParamBase+0x31f>
 81e5732:	89 d3                	mov    %edx,%ebx
 81e5734:	89 c6                	mov    %eax,%esi
 81e5736:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e5739:	89 04 24             	mov    %eax,(%esp)
 81e573c:	e8 3f 87 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5741:	89 f0                	mov    %esi,%eax
 81e5743:	89 da                	mov    %ebx,%edx
 81e5745:	89 04 24             	mov    %eax,(%esp)
 81e5748:	e8 03 e0 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e574d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e5750:	89 04 24             	mov    %eax,(%esp)
 81e5753:	e8 28 87 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5758:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81e575b:	83 c4 00             	add    $0x0,%esp
 81e575e:	5b                   	pop    %ebx
 81e575f:	5e                   	pop    %esi
 81e5760:	5d                   	pop    %ebp
 81e5761:	c3                   	ret

```

```c
// Dispatcher_PcRoomRentItem::send @ 0x81e542e

/* Dispatcher_PcRoomRentItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PcRoomRentItem::send(Dispatcher_PcRoomRentItem *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  CInventory *pCVar4;
  __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_4c [4];
  PacketGuard local_48 [12];
  __normal_iterator<InstanceRentalSystem::DeletedRentItem*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
  local_3c [4];
  PacketGuard local_38 [12];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator local_24 [4];
  ParamBase *local_20;
  ParamBase *local_1c;
  char local_15;
  char *local_14;
  int local_10;
  
  local_20 = param_2;
  local_1c = param_2 + 8;
  local_15 = '\0';
  PacketGuard::PacketGuard(local_38);
                    /* try { // try from 081e546a to 081e55e9 has its CatchHandler @ 081e5732 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x1ee);
  if (*(int *)(local_20 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
    cVar1 = std::
            vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
            ::size((vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
                    *)(local_1c + 0xc));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,(int)cVar1);
    std::
    vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
    ::begin();
    while( true ) {
      std::
      vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_3c,local_2c);
      if (!bVar2) break;
      local_14 = (char *)__gnu_cxx::
                         __normal_iterator<InstanceRentalSystem::DeletedRentItem*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
                         ::operator*(local_3c);
      if (*local_14 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,3);
        if ((9 < *(short *)(local_14 + 2)) && (*(short *)(local_14 + 2) < 0x16)) {
          local_15 = '\x01';
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,(int)*(short *)(local_14 + 2));
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::DeletedRentItem*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
      ::operator++(local_3c);
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*(uint *)(local_20 + 4) & 0xff);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
  CUser::Send(param_1,local_38);
  if (*(int *)(local_20 + 4) == 0) {
    PacketGuard::PacketGuard(local_48);
                    /* try { // try from 081e5600 to 081e56f4 has its CatchHandler @ 081e56f7 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
    sVar3 = std::
            vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
            ::size((vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
                    *)local_1c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,(int)sVar3);
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    begin();
    __gnu_cxx::
    __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
    ::__normal_iterator<InstanceRentalSystem::RentalInfo*>(local_4c,local_28);
    while( true ) {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::end();
      bVar2 = __gnu_cxx::operator!=(local_4c,local_24);
      if (!bVar2) break;
      local_10 = __gnu_cxx::
                 __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                 ::operator*(local_4c);
      sVar3 = *(short *)(local_10 + 2);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar4,1,(int)sVar3,local_48);
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
      ::operator++(local_4c);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send(param_1,local_48);
                    /* try { // try from 081e5712 to 081e572f has its CatchHandler @ 081e5732 */
    PacketGuard::~PacketGuard(local_48);
  }
  if (local_15 != '\0') {
    CUser::send_equip(param_1,10);
  }
  PacketGuard::~PacketGuard(local_38);
  return;
}

```

