# Dispatcher_UseRenameCard

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e7652 Dispatcher_UseRenameCard::check_error  [0x081e7652-0x81e76f9] ===
 81e7652:	55                   	push   %ebp
 81e7653:	89 e5                	mov    %esp,%ebp
 81e7655:	83 ec 28             	sub    $0x28,%esp
 81e7658:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e765b:	89 04 24             	mov    %eax,(%esp)
 81e765e:	e8 29 2d ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e7663:	83 f8 03             	cmp    $0x3,%eax
 81e7666:	0f 95 c0             	setne  %al
 81e7669:	84 c0                	test   %al,%al
 81e766b:	74 0a                	je     81e7677 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0x25>
 81e766d:	b8 13 00 00 00       	mov    $0x13,%eax
 81e7672:	e9 81 00 00 00       	jmp    81e76f8 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0xa6>
 81e7677:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e767a:	89 04 24             	mov    %eax,(%esp)
 81e767d:	e8 7c 2c ef ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81e7682:	84 c0                	test   %al,%al
 81e7684:	74 07                	je     81e768d <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0x3b>
 81e7686:	b8 13 00 00 00       	mov    $0x13,%eax
 81e768b:	eb 6b                	jmp    81e76f8 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0xa6>
 81e768d:	e8 15 2d ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e7692:	89 04 24             	mov    %eax,(%esp)
 81e7695:	e8 86 f4 f2 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81e769a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e769d:	83 7d ec 0f          	cmpl   $0xf,-0x14(%ebp)
 81e76a1:	74 06                	je     81e76a9 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0x57>
 81e76a3:	83 7d ec 10          	cmpl   $0x10,-0x14(%ebp)
 81e76a7:	75 07                	jne    81e76b0 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0x5e>
 81e76a9:	b8 13 00 00 00       	mov    $0x13,%eax
 81e76ae:	eb 48                	jmp    81e76f8 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0xa6>
 81e76b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e76b3:	89 04 24             	mov    %eax,(%esp)
 81e76b6:	e8 77 8d f3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81e76bb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e76be:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81e76c2:	75 07                	jne    81e76cb <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0x79>
 81e76c4:	b8 13 00 00 00       	mov    $0x13,%eax
 81e76c9:	eb 2d                	jmp    81e76f8 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0xa6>
 81e76cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e76ce:	8b 00                	mov    (%eax),%eax
 81e76d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e76d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e76d7:	89 04 24             	mov    %eax,(%esp)
 81e76da:	e8 07 85 04 00       	call   822fbe6 <_ZN5CUser20IsWaitingStateCharacEj>
 81e76df:	83 f0 01             	xor    $0x1,%eax
 81e76e2:	84 c0                	test   %al,%al
 81e76e4:	74 07                	je     81e76ed <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0x9b>
 81e76e6:	b8 12 00 00 00       	mov    $0x12,%eax
 81e76eb:	eb 0b                	jmp    81e76f8 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE+0xa6>
 81e76ed:	8b 45 10             	mov    0x10(%ebp),%eax
 81e76f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e76f3:	b8 00 00 00 00       	mov    $0x0,%eax
 81e76f8:	c9                   	leave
 81e76f9:	c3                   	ret

```

```c
// Dispatcher_UseRenameCard::check_error @ 0x81e7652

/* Dispatcher_UseRenameCard::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_UseRenameCard::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this;
  uint *puVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    cVar1 = CUser::CheckInTrade((CUser *)param_2);
    if (cVar1 == '\0') {
      this = (GameWorld *)G_GameWorld();
      iVar2 = GameWorld::GetChannelType(this);
      if ((iVar2 == 0xf) || (iVar2 == 0x10)) {
        uVar3 = 0x13;
      }
      else {
        puVar4 = (uint *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        if (puVar4 == (uint *)0x0) {
          uVar3 = 0x13;
        }
        else {
          cVar1 = CUser::IsWaitingStateCharac((CUser *)param_2,*puVar4);
          if (cVar1 == '\x01') {
            uVar3 = 0;
          }
          else {
            uVar3 = 0x12;
          }
        }
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}

```

---

## getItem

```asm
// === 081e756c Dispatcher_UseRenameCard::getItem  [0x081e756c-0x81e7651] ===
 81e756c:	55                   	push   %ebp
 81e756d:	89 e5                	mov    %esp,%ebp
 81e756f:	56                   	push   %esi
 81e7570:	53                   	push   %ebx
 81e7571:	83 ec 60             	sub    $0x60,%esp
 81e7574:	8b 45 14             	mov    0x14(%ebp),%eax
 81e7577:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 81e757b:	0f bf 45 f4          	movswl -0xc(%ebp),%eax
 81e757f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7583:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7586:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e758a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e758d:	89 04 24             	mov    %eax,(%esp)
 81e7590:	e8 ad f3 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81e7595:	84 c0                	test   %al,%al
 81e7597:	74 0a                	je     81e75a3 <_ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item+0x37>
 81e7599:	b8 01 00 00 00       	mov    $0x1,%eax
 81e759e:	e9 a5 00 00 00       	jmp    81e7648 <_ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item+0xdc>
 81e75a3:	0f bf 75 f4          	movswl -0xc(%ebp),%esi
 81e75a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e75aa:	89 04 24             	mov    %eax,(%esp)
 81e75ad:	e8 cc 2c ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e75b2:	8b 5d 18             	mov    0x18(%ebp),%ebx
 81e75b5:	8d 55 a8             	lea    -0x58(%ebp),%edx
 81e75b8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e75bc:	8b 4d 10             	mov    0x10(%ebp),%ecx
 81e75bf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81e75c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e75c7:	89 14 24             	mov    %edx,(%esp)
 81e75ca:	e8 49 43 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e75cf:	83 ec 04             	sub    $0x4,%esp
 81e75d2:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81e75d5:	89 03                	mov    %eax,(%ebx)
 81e75d7:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81e75da:	89 43 04             	mov    %eax,0x4(%ebx)
 81e75dd:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81e75e0:	89 43 08             	mov    %eax,0x8(%ebx)
 81e75e3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81e75e6:	89 43 0c             	mov    %eax,0xc(%ebx)
 81e75e9:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e75ec:	89 43 10             	mov    %eax,0x10(%ebx)
 81e75ef:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81e75f2:	89 43 14             	mov    %eax,0x14(%ebx)
 81e75f5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81e75f8:	89 43 18             	mov    %eax,0x18(%ebx)
 81e75fb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81e75fe:	89 43 1c             	mov    %eax,0x1c(%ebx)
 81e7601:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81e7604:	89 43 20             	mov    %eax,0x20(%ebx)
 81e7607:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e760a:	89 43 24             	mov    %eax,0x24(%ebx)
 81e760d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e7610:	89 43 28             	mov    %eax,0x28(%ebx)
 81e7613:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e7616:	89 43 2c             	mov    %eax,0x2c(%ebx)
 81e7619:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e761c:	89 43 30             	mov    %eax,0x30(%ebx)
 81e761f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e7622:	89 43 34             	mov    %eax,0x34(%ebx)
 81e7625:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e7628:	89 43 38             	mov    %eax,0x38(%ebx)
 81e762b:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 81e762f:	88 43 3c             	mov    %al,0x3c(%ebx)
 81e7632:	8b 45 18             	mov    0x18(%ebp),%eax
 81e7635:	8b 40 02             	mov    0x2(%eax),%eax
 81e7638:	85 c0                	test   %eax,%eax
 81e763a:	75 07                	jne    81e7643 <_ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item+0xd7>
 81e763c:	b8 01 00 00 00       	mov    $0x1,%eax
 81e7641:	eb 05                	jmp    81e7648 <_ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item+0xdc>
 81e7643:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7648:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81e764b:	83 c4 00             	add    $0x0,%esp
 81e764e:	5b                   	pop    %ebx
 81e764f:	5e                   	pop    %esi
 81e7650:	5d                   	pop    %ebp
 81e7651:	c3                   	ret

```

```c
// Dispatcher_UseRenameCard::getItem @ 0x81e756c

/* Dispatcher_UseRenameCard::getItem(CUser const&, int, short, Inven_Item&) const */

undefined4 __thiscall
Dispatcher_UseRenameCard::getItem
          (Dispatcher_UseRenameCard *this,CUser *param_1,int param_2,short param_3,
          Inven_Item *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Inven_Item local_20;
  short local_10;
  
  local_10 = param_3;
  cVar1 = CUser::CheckItemLock(param_1,param_2,(int)param_3);
  if (cVar1 == '\0') {
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)&local_5c,iVar3);
    *(undefined4 *)param_4 = local_5c;
    *(undefined4 *)(param_4 + 4) = local_58;
    *(undefined4 *)(param_4 + 8) = local_54;
    *(undefined4 *)(param_4 + 0xc) = local_50;
    *(undefined4 *)(param_4 + 0x10) = local_4c;
    *(undefined4 *)(param_4 + 0x14) = local_48;
    *(undefined4 *)(param_4 + 0x18) = local_44;
    *(undefined4 *)(param_4 + 0x1c) = local_40;
    *(undefined4 *)(param_4 + 0x20) = local_3c;
    *(undefined4 *)(param_4 + 0x24) = local_38;
    *(undefined4 *)(param_4 + 0x28) = local_34;
    *(undefined4 *)(param_4 + 0x2c) = local_30;
    *(undefined4 *)(param_4 + 0x30) = local_2c;
    *(undefined4 *)(param_4 + 0x34) = local_28;
    *(undefined4 *)(param_4 + 0x38) = local_24;
    param_4[0x3c] = local_20;
    if (*(int *)(param_4 + 2) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081e731a Dispatcher_UseRenameCard::process  [0x081e731a-0x81e756b] ===
 81e731a:	55                   	push   %ebp
 81e731b:	89 e5                	mov    %esp,%ebp
 81e731d:	53                   	push   %ebx
 81e731e:	81 ec 84 00 00 00    	sub    $0x84,%esp
 81e7324:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7327:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e732a:	8b 45 14             	mov    0x14(%ebp),%eax
 81e732d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e7330:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7333:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7337:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e733a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e733e:	8b 45 08             	mov    0x8(%ebp),%eax
 81e7341:	89 04 24             	mov    %eax,(%esp)
 81e7344:	e8 09 03 00 00       	call   81e7652 <_ZN24Dispatcher_UseRenameCard11check_errorEP5CUserR8MSG_BASE>
 81e7349:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81e734c:	89 42 04             	mov    %eax,0x4(%edx)
 81e734f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e7352:	8b 40 04             	mov    0x4(%eax),%eax
 81e7355:	85 c0                	test   %eax,%eax
 81e7357:	74 2a                	je     81e7383 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x69>
 81e7359:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e735c:	8b 40 04             	mov    0x4(%eax),%eax
 81e735f:	0f b6 c0             	movzbl %al,%eax
 81e7362:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7366:	c7 44 24 04 fe 01 00 	movl   $0x1fe,0x4(%esp)
 81e736d:	00 
 81e736e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7371:	89 04 24             	mov    %eax,(%esp)
 81e7374:	e8 c9 4b 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e7379:	b8 00 00 00 00       	mov    $0x0,%eax
 81e737e:	e9 e0 01 00 00       	jmp    81e7563 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81e7383:	8d 45 a7             	lea    -0x59(%ebp),%eax
 81e7386:	89 04 24             	mov    %eax,(%esp)
 81e7389:	e8 c6 44 ee ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81e738e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e7391:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e7395:	98                   	cwtl
 81e7396:	8d 55 a7             	lea    -0x59(%ebp),%edx
 81e7399:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e739d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e73a1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e73a8:	00 
 81e73a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e73ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e73b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81e73b3:	89 04 24             	mov    %eax,(%esp)
 81e73b6:	e8 b1 01 00 00       	call   81e756c <_ZNK24Dispatcher_UseRenameCard7getItemERK5CUserisR10Inven_Item>
 81e73bb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e73be:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81e73c2:	74 27                	je     81e73eb <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0xd1>
 81e73c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e73c7:	0f b6 c0             	movzbl %al,%eax
 81e73ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e73ce:	c7 44 24 04 fe 01 00 	movl   $0x1fe,0x4(%esp)
 81e73d5:	00 
 81e73d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e73d9:	89 04 24             	mov    %eax,(%esp)
 81e73dc:	e8 61 4b 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e73e1:	b8 00 00 00 00       	mov    $0x0,%eax
 81e73e6:	e9 78 01 00 00       	jmp    81e7563 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81e73eb:	8b 45 a9             	mov    -0x57(%ebp),%eax
 81e73ee:	89 c3                	mov    %eax,%ebx
 81e73f0:	e8 a6 4d ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e73f5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e73f9:	89 04 24             	mov    %eax,(%esp)
 81e73fc:	e8 31 86 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e7401:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e7404:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81e7408:	75 0a                	jne    81e7414 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0xfa>
 81e740a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e740f:	e9 4f 01 00 00       	jmp    81e7563 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81e7414:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7417:	89 04 24             	mov    %eax,(%esp)
 81e741a:	e8 db 9e f0 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81e741f:	83 f0 01             	xor    $0x1,%eax
 81e7422:	84 c0                	test   %al,%al
 81e7424:	74 0a                	je     81e7430 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x116>
 81e7426:	b8 00 00 00 00       	mov    $0x0,%eax
 81e742b:	e9 33 01 00 00       	jmp    81e7563 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81e7430:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7433:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e7436:	c7 44 24 04 33 00 00 	movl   $0x33,0x4(%esp)
 81e743d:	00 
 81e743e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e7441:	89 04 24             	mov    %eax,(%esp)
 81e7444:	e8 0f 56 04 00       	call   822ca58 <_ZNK14CStackableItem21verifyStackableActionEN15StackableAction4TypeE>
 81e7449:	83 f0 01             	xor    $0x1,%eax
 81e744c:	84 c0                	test   %al,%al
 81e744e:	74 27                	je     81e7477 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x15d>
 81e7450:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e7453:	0f b6 c0             	movzbl %al,%eax
 81e7456:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e745a:	c7 44 24 04 fe 01 00 	movl   $0x1fe,0x4(%esp)
 81e7461:	00 
 81e7462:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7465:	89 04 24             	mov    %eax,(%esp)
 81e7468:	e8 d5 4a 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e746d:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7472:	e9 ec 00 00 00       	jmp    81e7563 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81e7477:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 81e747e:	00 
 81e747f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7482:	89 04 24             	mov    %eax,(%esp)
 81e7485:	e8 38 8b 04 00       	call   822ffc2 <_ZN5CUser18SetCharacViewStateEi>
 81e748a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e748d:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e7491:	0f bf d8             	movswl %ax,%ebx
 81e7494:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7497:	89 04 24             	mov    %eax,(%esp)
 81e749a:	e8 ef 2d ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e749f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e74a6:	00 
 81e74a7:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81e74ae:	00 
 81e74af:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e74b6:	00 
 81e74b7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e74bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e74c2:	00 
 81e74c3:	89 04 24             	mov    %eax,(%esp)
 81e74c6:	e8 41 cb 31 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e74cb:	83 f0 01             	xor    $0x1,%eax
 81e74ce:	84 c0                	test   %al,%al
 81e74d0:	74 5b                	je     81e752d <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x213>
 81e74d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e74d9:	00 
 81e74da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e74dd:	89 04 24             	mov    %eax,(%esp)
 81e74e0:	e8 dd 8a 04 00       	call   822ffc2 <_ZN5CUser18SetCharacViewStateEi>
 81e74e5:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81e74ec:	00 
 81e74ed:	c7 44 24 04 fe 01 00 	movl   $0x1fe,0x4(%esp)
 81e74f4:	00 
 81e74f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e74f8:	89 04 24             	mov    %eax,(%esp)
 81e74fb:	e8 42 4a 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e7500:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7503:	89 04 24             	mov    %eax,(%esp)
 81e7506:	e8 63 2e ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e750b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e750f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e7516:	00 
 81e7517:	c7 44 24 04 c0 0b bd 	movl   $0x8bd0bc0,0x4(%esp)
 81e751e:	08 
 81e751f:	c7 04 24 2e 63 00 00 	movl   $0x632e,(%esp)
 81e7526:	e8 ac 93 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e752b:	eb 36                	jmp    81e7563 <_ZN24Dispatcher_UseRenameCard7processEP5CUserR8MSG_BASER9ParamBase+0x249>
 81e752d:	c7 44 24 04 fe 01 00 	movl   $0x1fe,0x4(%esp)
 81e7534:	00 
 81e7535:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7538:	89 04 24             	mov    %eax,(%esp)
 81e753b:	e8 60 49 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e7540:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7547:	00 
 81e7548:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e754b:	89 04 24             	mov    %eax,(%esp)
 81e754e:	e8 9b fa 49 00       	call   8686fee <_ZN5CUser24ReturnToSelectCharacListEb>
 81e7553:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7556:	89 04 24             	mov    %eax,(%esp)
 81e7559:	e8 e2 a1 46 00       	call   8651740 <_ZN5CUser16UpdateCharacViewEv>
 81e755e:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7563:	81 c4 84 00 00 00    	add    $0x84,%esp
 81e7569:	5b                   	pop    %ebx
 81e756a:	5d                   	pop    %ebp
 81e756b:	c3                   	ret

```

```c
// Dispatcher_UseRenameCard::process @ 0x81e731a

/* Dispatcher_UseRenameCard::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseRenameCard::process
          (Dispatcher_UseRenameCard *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CInventory *pCVar4;
  uint uVar5;
  Inven_Item local_5d [2];
  int local_5b;
  MSG_BASE *local_20;
  ParamBase *local_1c;
  uint local_18;
  CStackableItem *local_14;
  CStackableItem *local_10;
  
  local_20 = param_2;
  local_1c = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_1c + 4) = uVar3;
  if (*(int *)(local_1c + 4) == 0) {
    Inven_Item::Inven_Item(local_5d);
    local_18 = getItem(this,param_1,1,*(short *)(local_20 + 0xe),local_5d);
    if (local_18 == 0) {
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = (CStackableItem *)CDataManager::find_item(this_00,local_5b);
      if (local_14 == (CStackableItem *)0x0) {
        uVar3 = 0;
      }
      else {
        cVar2 = CItem::is_stackable((CItem *)local_14);
        if (cVar2 == '\x01') {
          local_10 = local_14;
          cVar2 = CStackableItem::verifyStackableAction(local_14,0x33);
          if (cVar2 == '\x01') {
            CUser::SetCharacViewState(param_1,0xff);
            sVar1 = *(short *)(local_20 + 0xe);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar2 = CInventory::delete_item(pCVar4,1,(int)sVar1,1,3,1);
            if (cVar2 == '\x01') {
              CUser::SendCmdOkPacket(param_1,0x1fe);
              CUser::ReturnToSelectCharacList(param_1,true);
              CUser::UpdateCharacView(param_1);
              uVar3 = 0;
            }
            else {
              CUser::SetCharacViewState(param_1,0);
              CUser::SendCmdErrorPacket(param_1,0x1fe,0x11);
              uVar5 = CUser::get_acc_id(param_1);
              uVar3 = LineFunc(0x632e,
                               "virtual int Dispatcher_UseRenameCard::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar5);
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x1fe,local_18 & 0xff);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1fe,local_18 & 0xff);
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fe,*(uint *)(local_1c + 4) & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081e72c4 Dispatcher_UseRenameCard::read  [0x081e72c4-0x81e7319] ===
 81e72c4:	55                   	push   %ebp
 81e72c5:	89 e5                	mov    %esp,%ebp
 81e72c7:	83 ec 28             	sub    $0x28,%esp
 81e72ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81e72cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e72d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e72d3:	83 c0 0e             	add    $0xe,%eax
 81e72d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e72da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e72dd:	89 04 24             	mov    %eax,(%esp)
 81e72e0:	e8 db 5c 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e72e5:	83 f0 01             	xor    $0x1,%eax
 81e72e8:	84 c0                	test   %al,%al
 81e72ea:	74 26                	je     81e7312 <_ZN24Dispatcher_UseRenameCard4readER9PacketBufR8MSG_BASE+0x4e>
 81e72ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e72f3:	00 
 81e72f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e72fb:	00 
 81e72fc:	c7 44 24 04 20 0c bd 	movl   $0x8bd0c20,0x4(%esp)
 81e7303:	08 
 81e7304:	c7 04 24 f3 62 00 00 	movl   $0x62f3,(%esp)
 81e730b:	e8 c7 95 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e7310:	eb 05                	jmp    81e7317 <_ZN24Dispatcher_UseRenameCard4readER9PacketBufR8MSG_BASE+0x53>
 81e7312:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7317:	c9                   	leave
 81e7318:	c3                   	ret
 81e7319:	90                   	nop

```

```c
// Dispatcher_UseRenameCard::read @ 0x81e72c4

/* Dispatcher_UseRenameCard::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseRenameCard::read(Dispatcher_UseRenameCard *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x62f3,"virtual int Dispatcher_UseRenameCard::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

