# DisPatcher_BuyItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## _onBuyItemEvent

```asm
// === 081bed44 DisPatcher_BuyItem::_onBuyItemEvent  [0x081bed44-0x81bed49] ===
 81bed44:	55                   	push   %ebp
 81bed45:	89 e5                	mov    %esp,%ebp
 81bed47:	5d                   	pop    %ebp
 81bed48:	c3                   	ret
 81bed49:	90                   	nop

```

```c
// DisPatcher_BuyItem::_onBuyItemEvent @ 0x81bed44

/* DisPatcher_BuyItem::_onBuyItemEvent(BuyItemParam const&, CUser*) */

void DisPatcher_BuyItem::_onBuyItemEvent(BuyItemParam *param_1,CUser *param_2)

{
  return;
}

```

---

## check_error

```asm
// === 081be46a DisPatcher_BuyItem::check_error  [0x081be46a-0x81be657] ===
 81be46a:	55                   	push   %ebp
 81be46b:	89 e5                	mov    %esp,%ebp
 81be46d:	56                   	push   %esi
 81be46e:	53                   	push   %ebx
 81be46f:	83 ec 30             	sub    $0x30,%esp
 81be472:	8b 45 10             	mov    0x10(%ebp),%eax
 81be475:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81be478:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be47b:	8b 70 0d             	mov    0xd(%eax),%esi
 81be47e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be481:	8b 58 15             	mov    0x15(%eax),%ebx
 81be484:	e8 12 dd f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81be489:	89 74 24 08          	mov    %esi,0x8(%esp)
 81be48d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81be491:	89 04 24             	mov    %eax,(%esp)
 81be494:	e8 4d 47 1a 00       	call   8362be6 <_ZN12CDataManager18checkValidShopItemEjm>
 81be499:	83 f0 01             	xor    $0x1,%eax
 81be49c:	84 c0                	test   %al,%al
 81be49e:	74 71                	je     81be511 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0xa7>
 81be4a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be4a3:	8b 40 15             	mov    0x15(%eax),%eax
 81be4a6:	89 c3                	mov    %eax,%ebx
 81be4a8:	e8 ee dc f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81be4ad:	8b 80 bc 8c 00 00    	mov    0x8cbc(%eax),%eax
 81be4b3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81be4b7:	89 04 24             	mov    %eax,(%esp)
 81be4ba:	e8 c3 4b 35 00       	call   8513082 <_ZNK9CItemShop13IsOneADayShopEi>
 81be4bf:	84 c0                	test   %al,%al
 81be4c1:	74 0a                	je     81be4cd <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x63>
 81be4c3:	b8 11 00 00 00       	mov    $0x11,%eax
 81be4c8:	e9 83 01 00 00       	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be4cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be4d0:	89 04 24             	mov    %eax,(%esp)
 81be4d3:	e8 82 b4 f3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81be4d8:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81be4df:	00 
 81be4e0:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81be4e7:	00 
 81be4e8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81be4ef:	00 
 81be4f0:	c7 44 24 08 c9 03 00 	movl   $0x3c9,0x8(%esp)
 81be4f7:	00 
 81be4f8:	8b 55 0c             	mov    0xc(%ebp),%edx
 81be4fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be4ff:	89 04 24             	mov    %eax,(%esp)
 81be502:	e8 77 a7 f3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81be507:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81be50c:	e9 3f 01 00 00       	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be511:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be514:	89 04 24             	mov    %eax,(%esp)
 81be517:	e8 e2 bd f1 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81be51c:	84 c0                	test   %al,%al
 81be51e:	74 0a                	je     81be52a <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0xc0>
 81be520:	b8 13 00 00 00       	mov    $0x13,%eax
 81be525:	e9 26 01 00 00       	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be52a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be52d:	89 04 24             	mov    %eax,(%esp)
 81be530:	e8 fd 1e f6 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81be535:	85 c0                	test   %eax,%eax
 81be537:	0f 94 c0             	sete   %al
 81be53a:	84 c0                	test   %al,%al
 81be53c:	74 0a                	je     81be548 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0xde>
 81be53e:	b8 13 00 00 00       	mov    $0x13,%eax
 81be543:	e9 08 01 00 00       	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be548:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be54b:	89 04 24             	mov    %eax,(%esp)
 81be54e:	e8 e9 17 07 00       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 81be553:	84 c0                	test   %al,%al
 81be555:	74 0a                	je     81be561 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0xf7>
 81be557:	b8 13 00 00 00       	mov    $0x13,%eax
 81be55c:	e9 ef 00 00 00       	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be561:	e8 80 40 fa ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81be566:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 81be56d:	00 
 81be56e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81be575:	00 
 81be576:	8b 55 0c             	mov    0xc(%ebp),%edx
 81be579:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be57d:	89 04 24             	mov    %eax,(%esp)
 81be580:	e8 33 01 fb ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81be585:	84 c0                	test   %al,%al
 81be587:	74 0a                	je     81be593 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x129>
 81be589:	b8 d1 00 00 00       	mov    $0xd1,%eax
 81be58e:	e9 bd 00 00 00       	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be593:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be596:	89 04 24             	mov    %eax,(%esp)
 81be599:	e8 ee bd f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81be59e:	83 f8 08             	cmp    $0x8,%eax
 81be5a1:	0f 95 c0             	setne  %al
 81be5a4:	84 c0                	test   %al,%al
 81be5a6:	74 2a                	je     81be5d2 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x168>
 81be5a8:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81be5ad:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 81be5b4:	00 
 81be5b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81be5b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be5bc:	89 04 24             	mov    %eax,(%esp)
 81be5bf:	e8 3e a4 0c 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81be5c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81be5c7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81be5cb:	74 05                	je     81be5d2 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x168>
 81be5cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81be5d0:	eb 7e                	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be5d2:	e8 11 66 40 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81be5d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81be5da:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be5de:	89 04 24             	mov    %eax,(%esp)
 81be5e1:	e8 78 c7 40 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81be5e6:	84 c0                	test   %al,%al
 81be5e8:	74 07                	je     81be5f1 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x187>
 81be5ea:	b8 3c 00 00 00       	mov    $0x3c,%eax
 81be5ef:	eb 5f                	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be5f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be5f4:	8b 40 15             	mov    0x15(%eax),%eax
 81be5f7:	89 c3                	mov    %eax,%ebx
 81be5f9:	e8 9d db f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81be5fe:	8b 80 bc 8c 00 00    	mov    0x8cbc(%eax),%eax
 81be604:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81be608:	89 04 24             	mov    %eax,(%esp)
 81be60b:	e8 72 4a 35 00       	call   8513082 <_ZNK9CItemShop13IsOneADayShopEi>
 81be610:	84 c0                	test   %al,%al
 81be612:	74 37                	je     81be64b <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e1>
 81be614:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81be619:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 81be620:	00 
 81be621:	89 04 24             	mov    %eax,(%esp)
 81be624:	e8 6f 73 f5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81be629:	8b 10                	mov    (%eax),%edx
 81be62b:	83 c2 34             	add    $0x34,%edx
 81be62e:	8b 12                	mov    (%edx),%edx
 81be630:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81be637:	00 
 81be638:	89 04 24             	mov    %eax,(%esp)
 81be63b:	ff d2                	call   *%edx
 81be63d:	83 f0 01             	xor    $0x1,%eax
 81be640:	84 c0                	test   %al,%al
 81be642:	74 07                	je     81be64b <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e1>
 81be644:	b8 11 00 00 00       	mov    $0x11,%eax
 81be649:	eb 05                	jmp    81be650 <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE+0x1e6>
 81be64b:	b8 00 00 00 00       	mov    $0x0,%eax
 81be650:	83 c4 30             	add    $0x30,%esp
 81be653:	5b                   	pop    %ebx
 81be654:	5e                   	pop    %esi
 81be655:	5d                   	pop    %ebp
 81be656:	c3                   	ret
 81be657:	90                   	nop

```

```c
// DisPatcher_BuyItem::check_error @ 0x81be46a

/* DisPatcher_BuyItem::check_error(CUser*, MSG_BASE&) */

int __thiscall
DisPatcher_BuyItem::check_error(DisPatcher_BuyItem *this,CUser *param_1,MSG_BASE *param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this_00;
  int iVar4;
  CHackAnalyzer *pCVar5;
  ServiceRestrictManager *pSVar6;
  CPrivateStoreMgr *this_01;
  int *piVar7;
  
  uVar1 = *(ulong *)(param_2 + 0xd);
  uVar2 = *(uint *)(param_2 + 0x15);
  this_00 = (CDataManager *)G_CDataManager();
  cVar3 = CDataManager::checkValidShopItem(this_00,uVar2,uVar1);
  if (cVar3 == '\x01') {
    cVar3 = CUser::CheckInTrade(param_1);
    if (cVar3 == '\0') {
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar4 == 0) {
        iVar4 = 0x13;
      }
      else {
        cVar3 = CUser::isHackUser(param_1);
        if (cVar3 == '\0') {
          pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_1,1,3);
          if (cVar3 == '\0') {
            iVar4 = CUser::get_state(param_1);
            if ((iVar4 == 8) ||
               (iVar4 = CSecu_ProtectionField::Check
                                  (GlobalData::s_pSecuProtectionField,param_1,0x22), iVar4 == 0)) {
              this_01 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
              cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_01,param_1);
              if (cVar3 == '\0') {
                iVar4 = G_CDataManager();
                cVar3 = CItemShop::IsOneADayShop(*(int *)(iVar4 + 0x8cbc));
                if (cVar3 != '\0') {
                  piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6d);
                  cVar3 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
                  if (cVar3 != '\x01') {
                    return 0x11;
                  }
                }
                iVar4 = 0;
              }
              else {
                iVar4 = 0x3c;
              }
            }
          }
          else {
            iVar4 = 0xd1;
          }
        }
        else {
          iVar4 = 0x13;
        }
      }
    }
    else {
      iVar4 = 0x13;
    }
  }
  else {
    iVar4 = G_CDataManager();
    cVar3 = CItemShop::IsOneADayShop(*(int *)(iVar4 + 0x8cbc));
    if (cVar3 == '\0') {
      pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x3c9,1,0,0);
      iVar4 = -1;
    }
    else {
      iVar4 = 0x11;
    }
  }
  return iVar4;
}

```

---

## get_data

```asm
// === 081be658 DisPatcher_BuyItem::get_data  [0x081be658-0x81beaaf] ===
 81be658:	55                   	push   %ebp
 81be659:	89 e5                	mov    %esp,%ebp
 81be65b:	56                   	push   %esi
 81be65c:	53                   	push   %ebx
 81be65d:	83 ec 20             	sub    $0x20,%esp
 81be660:	8b 45 10             	mov    0x10(%ebp),%eax
 81be663:	8b 40 0d             	mov    0xd(%eax),%eax
 81be666:	89 c3                	mov    %eax,%ebx
 81be668:	e8 2e db f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81be66d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81be671:	89 04 24             	mov    %eax,(%esp)
 81be674:	e8 b9 13 1a 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81be679:	8b 55 14             	mov    0x14(%ebp),%edx
 81be67c:	89 82 a8 00 00 00    	mov    %eax,0xa8(%edx)
 81be682:	8b 45 14             	mov    0x14(%ebp),%eax
 81be685:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be68b:	85 c0                	test   %eax,%eax
 81be68d:	75 0a                	jne    81be699 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x41>
 81be68f:	b8 11 00 00 00       	mov    $0x11,%eax
 81be694:	e9 0f 04 00 00       	jmp    81beaa8 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x450>
 81be699:	8b 45 14             	mov    0x14(%ebp),%eax
 81be69c:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be6a2:	89 04 24             	mov    %eax,(%esp)
 81be6a5:	e8 4a f0 34 00       	call   850d6f4 <_ZNK5CItem15GetNeedMaterialEv>
 81be6aa:	8b 4d 14             	mov    0x14(%ebp),%ecx
 81be6ad:	8b 50 04             	mov    0x4(%eax),%edx
 81be6b0:	8b 00                	mov    (%eax),%eax
 81be6b2:	89 81 98 00 00 00    	mov    %eax,0x98(%ecx)
 81be6b8:	89 91 9c 00 00 00    	mov    %edx,0x9c(%ecx)
 81be6be:	8b 45 14             	mov    0x14(%ebp),%eax
 81be6c1:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 81be6c7:	83 f8 ff             	cmp    $0xffffffff,%eax
 81be6ca:	0f 84 95 00 00 00    	je     81be765 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x10d>
 81be6d0:	8b 45 14             	mov    0x14(%ebp),%eax
 81be6d3:	8d 70 41             	lea    0x41(%eax),%esi
 81be6d6:	8b 45 14             	mov    0x14(%ebp),%eax
 81be6d9:	8b 98 98 00 00 00    	mov    0x98(%eax),%ebx
 81be6df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be6e2:	89 04 24             	mov    %eax,(%esp)
 81be6e5:	e8 94 bb f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81be6ea:	89 74 24 08          	mov    %esi,0x8(%esp)
 81be6ee:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81be6f2:	89 04 24             	mov    %eax,(%esp)
 81be6f5:	e8 32 d8 33 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 81be6fa:	8b 55 14             	mov    0x14(%ebp),%edx
 81be6fd:	89 82 a4 00 00 00    	mov    %eax,0xa4(%edx)
 81be703:	8b 45 14             	mov    0x14(%ebp),%eax
 81be706:	8b 98 98 00 00 00    	mov    0x98(%eax),%ebx
 81be70c:	e8 8a da f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81be711:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81be715:	89 04 24             	mov    %eax,(%esp)
 81be718:	e8 15 13 1a 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81be71d:	8b 55 14             	mov    0x14(%ebp),%edx
 81be720:	89 82 ac 00 00 00    	mov    %eax,0xac(%edx)
 81be726:	8b 45 14             	mov    0x14(%ebp),%eax
 81be729:	8b 80 ac 00 00 00    	mov    0xac(%eax),%eax
 81be72f:	85 c0                	test   %eax,%eax
 81be731:	74 18                	je     81be74b <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0xf3>
 81be733:	8b 45 14             	mov    0x14(%ebp),%eax
 81be736:	8b 80 ac 00 00 00    	mov    0xac(%eax),%eax
 81be73c:	89 04 24             	mov    %eax,(%esp)
 81be73f:	e8 b6 2b f3 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81be744:	83 f0 01             	xor    $0x1,%eax
 81be747:	84 c0                	test   %al,%al
 81be749:	74 07                	je     81be752 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0xfa>
 81be74b:	b8 01 00 00 00       	mov    $0x1,%eax
 81be750:	eb 05                	jmp    81be757 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0xff>
 81be752:	b8 00 00 00 00       	mov    $0x0,%eax
 81be757:	84 c0                	test   %al,%al
 81be759:	74 0a                	je     81be765 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x10d>
 81be75b:	b8 01 00 00 00       	mov    $0x1,%eax
 81be760:	e9 43 03 00 00       	jmp    81beaa8 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x450>
 81be765:	8b 45 14             	mov    0x14(%ebp),%eax
 81be768:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be76e:	89 04 24             	mov    %eax,(%esp)
 81be771:	e8 d4 e0 06 00       	call   822c84a <_ZNK5CItem9get_priceEv>
 81be776:	89 c2                	mov    %eax,%edx
 81be778:	8b 45 14             	mov    0x14(%ebp),%eax
 81be77b:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 81be781:	8b 45 14             	mov    0x14(%ebp),%eax
 81be784:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be78a:	89 04 24             	mov    %eax,(%esp)
 81be78d:	e8 c4 e0 06 00       	call   822c856 <_ZNK5CItem12GetCashPriceEv>
 81be792:	89 c2                	mov    %eax,%edx
 81be794:	8b 45 14             	mov    0x14(%ebp),%eax
 81be797:	89 90 84 00 00 00    	mov    %edx,0x84(%eax)
 81be79d:	8b 45 14             	mov    0x14(%ebp),%eax
 81be7a0:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be7a6:	89 04 24             	mov    %eax,(%esp)
 81be7a9:	e8 b4 e0 06 00       	call   822c862 <_ZNK5CItem13GetMedalPriceEv>
 81be7ae:	89 c2                	mov    %eax,%edx
 81be7b0:	8b 45 14             	mov    0x14(%ebp),%eax
 81be7b3:	89 90 88 00 00 00    	mov    %edx,0x88(%eax)
 81be7b9:	8b 45 14             	mov    0x14(%ebp),%eax
 81be7bc:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be7c2:	89 04 24             	mov    %eax,(%esp)
 81be7c5:	e8 74 e0 06 00       	call   822c83e <_ZNK5CItem19GetFinishPointPriceEv>
 81be7ca:	89 c2                	mov    %eax,%edx
 81be7cc:	8b 45 14             	mov    0x14(%ebp),%eax
 81be7cf:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 81be7d5:	8b 45 14             	mov    0x14(%ebp),%eax
 81be7d8:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be7de:	8b 00                	mov    (%eax),%eax
 81be7e0:	83 c0 28             	add    $0x28,%eax
 81be7e3:	8b 10                	mov    (%eax),%edx
 81be7e5:	8b 45 14             	mov    0x14(%ebp),%eax
 81be7e8:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be7ee:	89 04 24             	mov    %eax,(%esp)
 81be7f1:	ff d2                	call   *%edx
 81be7f3:	89 c2                	mov    %eax,%edx
 81be7f5:	8b 45 14             	mov    0x14(%ebp),%eax
 81be7f8:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 81be7fe:	8b 45 14             	mov    0x14(%ebp),%eax
 81be801:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be807:	8b 00                	mov    (%eax),%eax
 81be809:	83 c0 2c             	add    $0x2c,%eax
 81be80c:	8b 10                	mov    (%eax),%edx
 81be80e:	8b 45 14             	mov    0x14(%ebp),%eax
 81be811:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be817:	89 04 24             	mov    %eax,(%esp)
 81be81a:	ff d2                	call   *%edx
 81be81c:	89 c2                	mov    %eax,%edx
 81be81e:	8b 45 14             	mov    0x14(%ebp),%eax
 81be821:	89 90 94 00 00 00    	mov    %edx,0x94(%eax)
 81be827:	8b 45 14             	mov    0x14(%ebp),%eax
 81be82a:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81be830:	89 04 24             	mov    %eax,(%esp)
 81be833:	e8 c2 2a f3 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81be838:	84 c0                	test   %al,%al
 81be83a:	0f 84 19 01 00 00    	je     81be959 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x301>
 81be840:	8b 45 10             	mov    0x10(%ebp),%eax
 81be843:	8b 40 11             	mov    0x11(%eax),%eax
 81be846:	85 c0                	test   %eax,%eax
 81be848:	75 0a                	jne    81be854 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x1fc>
 81be84a:	b8 01 00 00 00       	mov    $0x1,%eax
 81be84f:	e9 54 02 00 00       	jmp    81beaa8 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x450>
 81be854:	8b 45 10             	mov    0x10(%ebp),%eax
 81be857:	8b 40 11             	mov    0x11(%eax),%eax
 81be85a:	83 f8 01             	cmp    $0x1,%eax
 81be85d:	0f 86 1a 01 00 00    	jbe    81be97d <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x325>
 81be863:	8b 45 14             	mov    0x14(%ebp),%eax
 81be866:	89 44 24 08          	mov    %eax,0x8(%esp)
 81be86a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be86d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be871:	8b 45 08             	mov    0x8(%ebp),%eax
 81be874:	89 04 24             	mov    %eax,(%esp)
 81be877:	e8 34 02 00 00       	call   81beab0 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam>
 81be87c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81be87f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81be882:	8b 45 10             	mov    0x10(%ebp),%eax
 81be885:	8b 40 11             	mov    0x11(%eax),%eax
 81be888:	39 c2                	cmp    %eax,%edx
 81be88a:	73 0a                	jae    81be896 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x23e>
 81be88c:	b8 0a 00 00 00       	mov    $0xa,%eax
 81be891:	e9 12 02 00 00       	jmp    81beaa8 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x450>
 81be896:	8b 45 14             	mov    0x14(%ebp),%eax
 81be899:	8b 90 80 00 00 00    	mov    0x80(%eax),%edx
 81be89f:	8b 45 10             	mov    0x10(%ebp),%eax
 81be8a2:	8b 40 11             	mov    0x11(%eax),%eax
 81be8a5:	0f af d0             	imul   %eax,%edx
 81be8a8:	8b 45 14             	mov    0x14(%ebp),%eax
 81be8ab:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 81be8b1:	8b 45 14             	mov    0x14(%ebp),%eax
 81be8b4:	8b 90 84 00 00 00    	mov    0x84(%eax),%edx
 81be8ba:	8b 45 10             	mov    0x10(%ebp),%eax
 81be8bd:	8b 40 11             	mov    0x11(%eax),%eax
 81be8c0:	0f af d0             	imul   %eax,%edx
 81be8c3:	8b 45 14             	mov    0x14(%ebp),%eax
 81be8c6:	89 90 84 00 00 00    	mov    %edx,0x84(%eax)
 81be8cc:	8b 45 14             	mov    0x14(%ebp),%eax
 81be8cf:	8b 90 88 00 00 00    	mov    0x88(%eax),%edx
 81be8d5:	8b 45 10             	mov    0x10(%ebp),%eax
 81be8d8:	8b 40 11             	mov    0x11(%eax),%eax
 81be8db:	0f af d0             	imul   %eax,%edx
 81be8de:	8b 45 14             	mov    0x14(%ebp),%eax
 81be8e1:	89 90 88 00 00 00    	mov    %edx,0x88(%eax)
 81be8e7:	8b 45 14             	mov    0x14(%ebp),%eax
 81be8ea:	8b 90 8c 00 00 00    	mov    0x8c(%eax),%edx
 81be8f0:	8b 45 10             	mov    0x10(%ebp),%eax
 81be8f3:	8b 40 11             	mov    0x11(%eax),%eax
 81be8f6:	0f af d0             	imul   %eax,%edx
 81be8f9:	8b 45 14             	mov    0x14(%ebp),%eax
 81be8fc:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 81be902:	8b 45 14             	mov    0x14(%ebp),%eax
 81be905:	8b 90 90 00 00 00    	mov    0x90(%eax),%edx
 81be90b:	8b 45 10             	mov    0x10(%ebp),%eax
 81be90e:	8b 40 11             	mov    0x11(%eax),%eax
 81be911:	0f af d0             	imul   %eax,%edx
 81be914:	8b 45 14             	mov    0x14(%ebp),%eax
 81be917:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 81be91d:	8b 45 14             	mov    0x14(%ebp),%eax
 81be920:	8b 90 94 00 00 00    	mov    0x94(%eax),%edx
 81be926:	8b 45 10             	mov    0x10(%ebp),%eax
 81be929:	8b 40 11             	mov    0x11(%eax),%eax
 81be92c:	0f af d0             	imul   %eax,%edx
 81be92f:	8b 45 14             	mov    0x14(%ebp),%eax
 81be932:	89 90 94 00 00 00    	mov    %edx,0x94(%eax)
 81be938:	8b 45 14             	mov    0x14(%ebp),%eax
 81be93b:	8b 80 9c 00 00 00    	mov    0x9c(%eax),%eax
 81be941:	89 c2                	mov    %eax,%edx
 81be943:	8b 45 10             	mov    0x10(%ebp),%eax
 81be946:	8b 40 11             	mov    0x11(%eax),%eax
 81be949:	0f af c2             	imul   %edx,%eax
 81be94c:	89 c2                	mov    %eax,%edx
 81be94e:	8b 45 14             	mov    0x14(%ebp),%eax
 81be951:	89 90 9c 00 00 00    	mov    %edx,0x9c(%eax)
 81be957:	eb 24                	jmp    81be97d <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x325>
 81be959:	8b 45 10             	mov    0x10(%ebp),%eax
 81be95c:	8b 58 11             	mov    0x11(%eax),%ebx
 81be95f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be962:	89 04 24             	mov    %eax,(%esp)
 81be965:	e8 8a 14 07 00       	call   822fdf4 <_ZN5CUser15GetSeedFromDateEv>
 81be96a:	39 c3                	cmp    %eax,%ebx
 81be96c:	0f 95 c0             	setne  %al
 81be96f:	84 c0                	test   %al,%al
 81be971:	74 0a                	je     81be97d <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x325>
 81be973:	b8 01 00 00 00       	mov    $0x1,%eax
 81be978:	e9 2b 01 00 00       	jmp    81beaa8 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x450>
 81be97d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be980:	89 04 24             	mov    %eax,(%esp)
 81be983:	e8 f6 b8 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81be988:	89 04 24             	mov    %eax,(%esp)
 81be98b:	e8 46 5e f7 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81be990:	8b 55 14             	mov    0x14(%ebp),%edx
 81be993:	8b 92 80 00 00 00    	mov    0x80(%edx),%edx
 81be999:	39 d0                	cmp    %edx,%eax
 81be99b:	0f 8c a0 00 00 00    	jl     81bea41 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3e9>
 81be9a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be9a4:	89 04 24             	mov    %eax,(%esp)
 81be9a7:	e8 ce f5 f3 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 81be9ac:	8b 55 14             	mov    0x14(%ebp),%edx
 81be9af:	8b 92 84 00 00 00    	mov    0x84(%edx),%edx
 81be9b5:	39 d0                	cmp    %edx,%eax
 81be9b7:	0f 82 84 00 00 00    	jb     81bea41 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3e9>
 81be9bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be9c0:	89 04 24             	mov    %eax,(%esp)
 81be9c3:	e8 b4 b7 fb ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 81be9c8:	8b 55 14             	mov    0x14(%ebp),%edx
 81be9cb:	8b 92 88 00 00 00    	mov    0x88(%edx),%edx
 81be9d1:	39 d0                	cmp    %edx,%eax
 81be9d3:	72 6c                	jb     81bea41 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3e9>
 81be9d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be9d8:	89 04 24             	mov    %eax,(%esp)
 81be9db:	e8 84 6d 48 00       	call   8645764 <_ZN15CUserCharacInfo14GetFinishPointEv>
 81be9e0:	89 c2                	mov    %eax,%edx
 81be9e2:	8b 45 14             	mov    0x14(%ebp),%eax
 81be9e5:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 81be9eb:	39 c2                	cmp    %eax,%edx
 81be9ed:	72 52                	jb     81bea41 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3e9>
 81be9ef:	8b 45 14             	mov    0x14(%ebp),%eax
 81be9f2:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 81be9f8:	83 f8 ff             	cmp    $0xffffffff,%eax
 81be9fb:	74 13                	je     81bea10 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3b8>
 81be9fd:	8b 45 14             	mov    0x14(%ebp),%eax
 81bea00:	8b 50 48             	mov    0x48(%eax),%edx
 81bea03:	8b 45 14             	mov    0x14(%ebp),%eax
 81bea06:	8b 80 9c 00 00 00    	mov    0x9c(%eax),%eax
 81bea0c:	39 c2                	cmp    %eax,%edx
 81bea0e:	7c 31                	jl     81bea41 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3e9>
 81bea10:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bea13:	89 04 24             	mov    %eax,(%esp)
 81bea16:	e8 93 17 07 00       	call   82301ae <_ZN5CUser21GetGuildPowerWarPointEv>
 81bea1b:	8b 55 14             	mov    0x14(%ebp),%edx
 81bea1e:	8b 92 90 00 00 00    	mov    0x90(%edx),%edx
 81bea24:	39 d0                	cmp    %edx,%eax
 81bea26:	72 19                	jb     81bea41 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3e9>
 81bea28:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bea2b:	89 04 24             	mov    %eax,(%esp)
 81bea2e:	e8 95 0f 07 00       	call   822f9c8 <_ZN15CUserCharacInfo20GetUserPowerWarPointEv>
 81bea33:	8b 55 14             	mov    0x14(%ebp),%edx
 81bea36:	8b 92 94 00 00 00    	mov    0x94(%edx),%edx
 81bea3c:	66 39 d0             	cmp    %dx,%ax
 81bea3f:	7d 07                	jge    81bea48 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3f0>
 81bea41:	b8 01 00 00 00       	mov    $0x1,%eax
 81bea46:	eb 05                	jmp    81bea4d <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x3f5>
 81bea48:	b8 00 00 00 00       	mov    $0x0,%eax
 81bea4d:	84 c0                	test   %al,%al
 81bea4f:	74 07                	je     81bea58 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x400>
 81bea51:	b8 0a 00 00 00       	mov    $0xa,%eax
 81bea56:	eb 50                	jmp    81beaa8 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x450>
 81bea58:	8b 45 14             	mov    0x14(%ebp),%eax
 81bea5b:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bea61:	8b 00                	mov    (%eax),%eax
 81bea63:	83 c0 28             	add    $0x28,%eax
 81bea66:	8b 10                	mov    (%eax),%edx
 81bea68:	8b 45 14             	mov    0x14(%ebp),%eax
 81bea6b:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bea71:	89 04 24             	mov    %eax,(%esp)
 81bea74:	ff d2                	call   *%edx
 81bea76:	85 c0                	test   %eax,%eax
 81bea78:	74 19                	je     81bea93 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x43b>
 81bea7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bea7d:	89 04 24             	mov    %eax,(%esp)
 81bea80:	e8 ed 16 07 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 81bea85:	83 f0 01             	xor    $0x1,%eax
 81bea88:	84 c0                	test   %al,%al
 81bea8a:	74 07                	je     81bea93 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x43b>
 81bea8c:	b8 01 00 00 00       	mov    $0x1,%eax
 81bea91:	eb 05                	jmp    81bea98 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x440>
 81bea93:	b8 00 00 00 00       	mov    $0x0,%eax
 81bea98:	84 c0                	test   %al,%al
 81bea9a:	74 07                	je     81beaa3 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x44b>
 81bea9c:	b8 24 00 00 00       	mov    $0x24,%eax
 81beaa1:	eb 05                	jmp    81beaa8 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam+0x450>
 81beaa3:	b8 00 00 00 00       	mov    $0x0,%eax
 81beaa8:	83 c4 20             	add    $0x20,%esp
 81beaab:	5b                   	pop    %ebx
 81beaac:	5e                   	pop    %esi
 81beaad:	5d                   	pop    %ebp
 81beaae:	c3                   	ret
 81beaaf:	90                   	nop

```

```c
// DisPatcher_BuyItem::get_data @ 0x81be658

/* DisPatcher_BuyItem::get_data(CUser*, MSG_BUY_ITEM&, BuyItemParam&) */

undefined4 __thiscall
DisPatcher_BuyItem::get_data
          (DisPatcher_BuyItem *this,CUser *param_1,MSG_BUY_ITEM *param_2,BuyItemParam *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  CInventory *pCVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = *(int *)(param_2 + 0xd);
  pCVar4 = (CDataManager *)G_CDataManager();
  uVar5 = CDataManager::find_item(pCVar4,iVar10);
  *(undefined4 *)(param_3 + 0xa8) = uVar5;
  if (*(int *)(param_3 + 0xa8) == 0) {
    return 0x11;
  }
  puVar6 = (undefined4 *)CItem::GetNeedMaterial(*(CItem **)(param_3 + 0xa8));
  uVar5 = puVar6[1];
  *(undefined4 *)(param_3 + 0x98) = *puVar6;
  *(undefined4 *)(param_3 + 0x9c) = uVar5;
  if (*(int *)(param_3 + 0x98) != -1) {
    iVar10 = *(int *)(param_3 + 0x98);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar5 = CInventory::GetInvenData(pCVar7,iVar10,(Inven_Item *)(param_3 + 0x41));
    *(undefined4 *)(param_3 + 0xa4) = uVar5;
    iVar10 = *(int *)(param_3 + 0x98);
    pCVar4 = (CDataManager *)G_CDataManager();
    uVar5 = CDataManager::find_item(pCVar4,iVar10);
    *(undefined4 *)(param_3 + 0xac) = uVar5;
    if ((*(int *)(param_3 + 0xac) == 0) ||
       (cVar2 = CItem::is_stackable(*(CItem **)(param_3 + 0xac)), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
  }
  uVar5 = CItem::get_price(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x80) = uVar5;
  uVar5 = CItem::GetCashPrice(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x84) = uVar5;
  uVar5 = CItem::GetMedalPrice(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x88) = uVar5;
  uVar5 = CItem::GetFinishPointPrice(*(CItem **)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x8c) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x28))(*(undefined4 *)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x90) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x2c))(*(undefined4 *)(param_3 + 0xa8));
  *(undefined4 *)(param_3 + 0x94) = uVar5;
  cVar2 = CItem::is_stackable(*(CItem **)(param_3 + 0xa8));
  if (cVar2 == '\0') {
    iVar10 = *(int *)(param_2 + 0x11);
    iVar9 = CUser::GetSeedFromDate(param_1);
    if (iVar10 != iVar9) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0x11) == 0) {
      return 1;
    }
    if (1 < *(uint *)(param_2 + 0x11)) {
      uVar8 = get_nMaxBuyableCount(this,param_1,param_3);
      if (uVar8 < *(uint *)(param_2 + 0x11)) {
        return 10;
      }
      *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x84) = *(int *)(param_3 + 0x84) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x88) = *(int *)(param_3 + 0x88) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x8c) = *(int *)(param_3 + 0x8c) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x90) = *(int *)(param_3 + 0x90) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x94) = *(int *)(param_3 + 0x94) * *(int *)(param_2 + 0x11);
      *(int *)(param_3 + 0x9c) = *(int *)(param_2 + 0x11) * *(int *)(param_3 + 0x9c);
    }
  }
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar10 = CInventory::get_money(pCVar7);
  if (((((iVar10 < *(int *)(param_3 + 0x80)) ||
        (uVar8 = CUser::GetCera(param_1), uVar8 < *(uint *)(param_3 + 0x84))) ||
       (uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1),
       uVar8 < *(uint *)(param_3 + 0x88))) ||
      (uVar8 = CUserCharacInfo::GetFinishPoint((CUserCharacInfo *)param_1),
      uVar8 < *(uint *)(param_3 + 0x8c))) ||
     (((*(int *)(param_3 + 0x98) != -1 && (*(int *)(param_3 + 0x48) < *(int *)(param_3 + 0x9c))) ||
      ((uVar8 = CUser::GetGuildPowerWarPoint(param_1), uVar8 < *(uint *)(param_3 + 0x90) ||
       (sVar3 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)param_1),
       sVar3 < (short)*(undefined4 *)(param_3 + 0x94))))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar10 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x28))(*(undefined4 *)(param_3 + 0xa8));
    if ((iVar10 == 0) || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0x24;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  return 10;
}

```

---

## get_nMaxBuyableCount

```asm
// === 081beab0 DisPatcher_BuyItem::get_nMaxBuyableCount  [0x081beab0-0x81bec5d] ===
 81beab0:	55                   	push   %ebp
 81beab1:	89 e5                	mov    %esp,%ebp
 81beab3:	83 ec 48             	sub    $0x48,%esp
 81beab6:	c7 45 dc ff ff ff 7f 	movl   $0x7fffffff,-0x24(%ebp)
 81beabd:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81beac4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81beacb:	8b 45 10             	mov    0x10(%ebp),%eax
 81beace:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 81bead4:	85 c0                	test   %eax,%eax
 81bead6:	74 35                	je     81beb0d <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x5d>
 81bead8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81beadb:	89 04 24             	mov    %eax,(%esp)
 81beade:	e8 a5 b6 fb ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 81beae3:	8b 55 10             	mov    0x10(%ebp),%edx
 81beae6:	8b 92 80 00 00 00    	mov    0x80(%edx),%edx
 81beaec:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81beaef:	ba 00 00 00 00       	mov    $0x0,%edx
 81beaf4:	f7 75 d4             	divl   -0x2c(%ebp)
 81beaf7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81beafa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81beafd:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81beb00:	7d 05                	jge    81beb07 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x57>
 81beb02:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81beb05:	eb 03                	jmp    81beb0a <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x5a>
 81beb07:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81beb0a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81beb0d:	8b 45 10             	mov    0x10(%ebp),%eax
 81beb10:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 81beb16:	85 c0                	test   %eax,%eax
 81beb18:	74 35                	je     81beb4f <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x9f>
 81beb1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81beb1d:	89 04 24             	mov    %eax,(%esp)
 81beb20:	e8 55 f4 f3 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 81beb25:	8b 55 10             	mov    0x10(%ebp),%edx
 81beb28:	8b 92 84 00 00 00    	mov    0x84(%edx),%edx
 81beb2e:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81beb31:	ba 00 00 00 00       	mov    $0x0,%edx
 81beb36:	f7 75 d4             	divl   -0x2c(%ebp)
 81beb39:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81beb3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81beb3f:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81beb42:	7d 05                	jge    81beb49 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x99>
 81beb44:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81beb47:	eb 03                	jmp    81beb4c <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x9c>
 81beb49:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81beb4c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81beb4f:	8b 45 10             	mov    0x10(%ebp),%eax
 81beb52:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 81beb58:	85 c0                	test   %eax,%eax
 81beb5a:	74 35                	je     81beb91 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0xe1>
 81beb5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81beb5f:	89 04 24             	mov    %eax,(%esp)
 81beb62:	e8 15 b6 fb ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 81beb67:	8b 55 10             	mov    0x10(%ebp),%edx
 81beb6a:	8b 92 88 00 00 00    	mov    0x88(%edx),%edx
 81beb70:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81beb73:	ba 00 00 00 00       	mov    $0x0,%edx
 81beb78:	f7 75 d4             	divl   -0x2c(%ebp)
 81beb7b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81beb7e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81beb81:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81beb84:	7d 05                	jge    81beb8b <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0xdb>
 81beb86:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81beb89:	eb 03                	jmp    81beb8e <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0xde>
 81beb8b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81beb8e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81beb91:	8b 45 10             	mov    0x10(%ebp),%eax
 81beb94:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 81beb9a:	85 c0                	test   %eax,%eax
 81beb9c:	74 35                	je     81bebd3 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x123>
 81beb9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81beba1:	89 04 24             	mov    %eax,(%esp)
 81beba4:	e8 bb 6b 48 00       	call   8645764 <_ZN15CUserCharacInfo14GetFinishPointEv>
 81beba9:	8b 55 10             	mov    0x10(%ebp),%edx
 81bebac:	8b 92 8c 00 00 00    	mov    0x8c(%edx),%edx
 81bebb2:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81bebb5:	ba 00 00 00 00       	mov    $0x0,%edx
 81bebba:	f7 75 d4             	divl   -0x2c(%ebp)
 81bebbd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81bebc0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bebc3:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81bebc6:	7d 05                	jge    81bebcd <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x11d>
 81bebc8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bebcb:	eb 03                	jmp    81bebd0 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x120>
 81bebcd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bebd0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81bebd3:	8b 45 10             	mov    0x10(%ebp),%eax
 81bebd6:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 81bebdc:	85 c0                	test   %eax,%eax
 81bebde:	74 35                	je     81bec15 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x165>
 81bebe0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bebe3:	89 04 24             	mov    %eax,(%esp)
 81bebe6:	e8 c3 15 07 00       	call   82301ae <_ZN5CUser21GetGuildPowerWarPointEv>
 81bebeb:	8b 55 10             	mov    0x10(%ebp),%edx
 81bebee:	8b 92 90 00 00 00    	mov    0x90(%edx),%edx
 81bebf4:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81bebf7:	ba 00 00 00 00       	mov    $0x0,%edx
 81bebfc:	f7 75 d4             	divl   -0x2c(%ebp)
 81bebff:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81bec02:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bec05:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81bec08:	7d 05                	jge    81bec0f <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x15f>
 81bec0a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bec0d:	eb 03                	jmp    81bec12 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x162>
 81bec0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bec12:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81bec15:	8b 45 10             	mov    0x10(%ebp),%eax
 81bec18:	8b 80 94 00 00 00    	mov    0x94(%eax),%eax
 81bec1e:	85 c0                	test   %eax,%eax
 81bec20:	74 36                	je     81bec58 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x1a8>
 81bec22:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bec25:	89 04 24             	mov    %eax,(%esp)
 81bec28:	e8 9b 0d 07 00       	call   822f9c8 <_ZN15CUserCharacInfo20GetUserPowerWarPointEv>
 81bec2d:	98                   	cwtl
 81bec2e:	8b 55 10             	mov    0x10(%ebp),%edx
 81bec31:	8b 92 94 00 00 00    	mov    0x94(%edx),%edx
 81bec37:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 81bec3a:	ba 00 00 00 00       	mov    $0x0,%edx
 81bec3f:	f7 75 d4             	divl   -0x2c(%ebp)
 81bec42:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81bec45:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bec48:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81bec4b:	7d 05                	jge    81bec52 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x1a2>
 81bec4d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bec50:	eb 03                	jmp    81bec55 <_ZN18DisPatcher_BuyItem20get_nMaxBuyableCountEP5CUserR12BuyItemParam+0x1a5>
 81bec52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81bec55:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81bec58:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81bec5b:	c9                   	leave
 81bec5c:	c3                   	ret
 81bec5d:	90                   	nop

```

```c
// DisPatcher_BuyItem::get_nMaxBuyableCount @ 0x81beab0

/* DisPatcher_BuyItem::get_nMaxBuyableCount(CUser*, BuyItemParam&) */

uint __thiscall
DisPatcher_BuyItem::get_nMaxBuyableCount
          (DisPatcher_BuyItem *this,CUser *param_1,BuyItemParam *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint local_28;
  
  local_28 = 0x7fffffff;
  if (*(int *)(param_2 + 0x80) != 0) {
    local_28 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    local_28 = local_28 / *(uint *)(param_2 + 0x80);
    if (0x7fffffff < (int)local_28) {
      local_28 = 0x7fffffff;
    }
  }
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x84) != 0) {
    uVar3 = CUser::GetCera(param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x84);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x84))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x88) != 0) {
    uVar3 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x88);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x88))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x8c) != 0) {
    uVar3 = CUserCharacInfo::GetFinishPoint((CUserCharacInfo *)param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x8c);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x8c))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x90) != 0) {
    uVar3 = CUser::GetGuildPowerWarPoint(param_1);
    uVar1 = uVar3 / *(uint *)(param_2 + 0x90);
    if ((int)local_28 < (int)(uVar3 / *(uint *)(param_2 + 0x90))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  uVar1 = local_28;
  if (*(int *)(param_2 + 0x94) != 0) {
    sVar2 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)param_1);
    uVar1 = (uint)(int)sVar2 / *(uint *)(param_2 + 0x94);
    if ((int)local_28 < (int)((uint)(int)sVar2 / *(uint *)(param_2 + 0x94))) {
      uVar1 = local_28;
    }
  }
  local_28 = uVar1;
  return local_28;
}

```

---

## process

```asm
// === 081bdc7e DisPatcher_BuyItem::process  [0x081bdc7e-0x81be209] ===
 81bdc7e:	55                   	push   %ebp
 81bdc7f:	89 e5                	mov    %esp,%ebp
 81bdc81:	57                   	push   %edi
 81bdc82:	56                   	push   %esi
 81bdc83:	53                   	push   %ebx
 81bdc84:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 81bdc8a:	8b 45 10             	mov    0x10(%ebp),%eax
 81bdc8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bdc91:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdc94:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bdc98:	8b 45 08             	mov    0x8(%ebp),%eax
 81bdc9b:	89 04 24             	mov    %eax,(%esp)
 81bdc9e:	e8 c7 07 00 00       	call   81be46a <_ZN18DisPatcher_BuyItem11check_errorEP5CUserR8MSG_BASE>
 81bdca3:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81bdca6:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81bdcaa:	7e 27                	jle    81bdcd3 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x55>
 81bdcac:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81bdcaf:	0f b6 c0             	movzbl %al,%eax
 81bdcb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bdcb6:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81bdcbd:	00 
 81bdcbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdcc1:	89 04 24             	mov    %eax,(%esp)
 81bdcc4:	e8 79 e2 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bdcc9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81bdcce:	e9 2c 05 00 00       	jmp    81be1ff <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x581>
 81bdcd3:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81bdcd7:	79 4b                	jns    81bdd24 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0xa6>
 81bdcd9:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81bdce0:	00 
 81bdce1:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81bdce8:	00 
 81bdce9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdcec:	89 04 24             	mov    %eax,(%esp)
 81bdcef:	e8 4e e2 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bdcf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdcf7:	89 04 24             	mov    %eax,(%esp)
 81bdcfa:	e8 6f c6 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81bdcff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81bdd03:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bdd0a:	00 
 81bdd0b:	c7 44 24 04 80 62 bd 	movl   $0x8bd6280,0x4(%esp)
 81bdd12:	08 
 81bdd13:	c7 04 24 a1 01 00 00 	movl   $0x1a1,(%esp)
 81bdd1a:	e8 b8 2b 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bdd1f:	e9 db 04 00 00       	jmp    81be1ff <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x581>
 81bdd24:	8b 45 14             	mov    0x14(%ebp),%eax
 81bdd27:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81bdd2a:	8b 45 10             	mov    0x10(%ebp),%eax
 81bdd2d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81bdd30:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bdd33:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81bdd37:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81bdd3a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bdd3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdd41:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bdd45:	8b 45 08             	mov    0x8(%ebp),%eax
 81bdd48:	89 04 24             	mov    %eax,(%esp)
 81bdd4b:	e8 08 09 00 00       	call   81be658 <_ZN18DisPatcher_BuyItem8get_dataEP5CUserR12MSG_BUY_ITEMR12BuyItemParam>
 81bdd50:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81bdd53:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81bdd57:	0f 95 c0             	setne  %al
 81bdd5a:	84 c0                	test   %al,%al
 81bdd5c:	74 27                	je     81bdd85 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x107>
 81bdd5e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81bdd61:	0f b6 c0             	movzbl %al,%eax
 81bdd64:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bdd68:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81bdd6f:	00 
 81bdd70:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdd73:	89 04 24             	mov    %eax,(%esp)
 81bdd76:	e8 c7 e1 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bdd7b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81bdd80:	e9 7a 04 00 00       	jmp    81be1ff <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x581>
 81bdd85:	c7 45 dc a7 f2 29 00 	movl   $0x29f2a7,-0x24(%ebp)
 81bdd8c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bdd8f:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 81bdd95:	3d a7 f2 29 00       	cmp    $0x29f2a7,%eax
 81bdd9a:	0f 85 8f 00 00 00    	jne    81bde2f <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x1b1>
 81bdda0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdda3:	89 04 24             	mov    %eax,(%esp)
 81bdda6:	e8 e1 c5 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81bddab:	83 f8 03             	cmp    $0x3,%eax
 81bddae:	0f 94 c0             	sete   %al
 81bddb1:	84 c0                	test   %al,%al
 81bddb3:	74 29                	je     81bddde <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x160>
 81bddb5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bddbc:	00 
 81bddbd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bddc4:	00 
 81bddc5:	c7 44 24 04 80 62 bd 	movl   $0x8bd6280,0x4(%esp)
 81bddcc:	08 
 81bddcd:	c7 04 24 b4 01 00 00 	movl   $0x1b4,(%esp)
 81bddd4:	e8 fe 2a 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bddd9:	e9 21 04 00 00       	jmp    81be1ff <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x581>
 81bddde:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdde1:	89 04 24             	mov    %eax,(%esp)
 81bdde4:	e8 ab 20 07 00       	call   822fe94 <_ZN5CUser17getBossTowerIndexEv>
 81bdde9:	0f bf d8             	movswl %ax,%ebx
 81bddec:	e8 9d e3 f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81bddf1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bddf5:	89 04 24             	mov    %eax,(%esp)
 81bddf8:	e8 fd 7b 0d 00       	call   82959fa <_ZN12CGameManager12getBossTowerEi>
 81bddfd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81bde00:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81bde04:	75 29                	jne    81bde2f <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x1b1>
 81bde06:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bde0d:	00 
 81bde0e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bde15:	00 
 81bde16:	c7 44 24 04 80 62 bd 	movl   $0x8bd6280,0x4(%esp)
 81bde1d:	08 
 81bde1e:	c7 04 24 b8 01 00 00 	movl   $0x1b8,(%esp)
 81bde25:	e8 ad 2a 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bde2a:	e9 d0 03 00 00       	jmp    81be1ff <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x581>
 81bde2f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81bde32:	8b 50 0d             	mov    0xd(%eax),%edx
 81bde35:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde38:	89 50 06             	mov    %edx,0x6(%eax)
 81bde3b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde3e:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bde44:	8b 00                	mov    (%eax),%eax
 81bde46:	83 c0 08             	add    $0x8,%eax
 81bde49:	8b 10                	mov    (%eax),%edx
 81bde4b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde4e:	8d 48 04             	lea    0x4(%eax),%ecx
 81bde51:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde54:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bde5a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81bde5e:	89 04 24             	mov    %eax,(%esp)
 81bde61:	ff d2                	call   *%edx
 81bde63:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde66:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bde6c:	8b 00                	mov    (%eax),%eax
 81bde6e:	83 c0 14             	add    $0x14,%eax
 81bde71:	8b 10                	mov    (%eax),%edx
 81bde73:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde76:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bde7c:	89 04 24             	mov    %eax,(%esp)
 81bde7f:	ff d2                	call   *%edx
 81bde81:	83 f0 01             	xor    $0x1,%eax
 81bde84:	84 c0                	test   %al,%al
 81bde86:	74 2c                	je     81bdeb4 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x236>
 81bde88:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde8b:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bde91:	8b 00                	mov    (%eax),%eax
 81bde93:	83 c0 10             	add    $0x10,%eax
 81bde96:	8b 10                	mov    (%eax),%edx
 81bde98:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bde9b:	8b 80 a8 00 00 00    	mov    0xa8(%eax),%eax
 81bdea1:	89 04 24             	mov    %eax,(%esp)
 81bdea4:	ff d2                	call   *%edx
 81bdea6:	83 f0 01             	xor    $0x1,%eax
 81bdea9:	84 c0                	test   %al,%al
 81bdeab:	74 07                	je     81bdeb4 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x236>
 81bdead:	b8 01 00 00 00       	mov    $0x1,%eax
 81bdeb2:	eb 05                	jmp    81bdeb9 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x23b>
 81bdeb4:	b8 00 00 00 00       	mov    $0x0,%eax
 81bdeb9:	84 c0                	test   %al,%al
 81bdebb:	74 0e                	je     81bdecb <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x24d>
 81bdebd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81bdec0:	8b 40 11             	mov    0x11(%eax),%eax
 81bdec3:	89 c2                	mov    %eax,%edx
 81bdec5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bdec8:	89 50 0b             	mov    %edx,0xb(%eax)
 81bdecb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdece:	89 04 24             	mov    %eax,(%esp)
 81bded1:	e8 b8 c3 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81bded6:	89 c2                	mov    %eax,%edx
 81bded8:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 81bdedf:	00 
 81bdee0:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81bdee7:	00 
 81bdee8:	c7 44 24 44 00 00 00 	movl   $0x0,0x44(%esp)
 81bdeef:	00 
 81bdef0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bdef3:	8b 48 04             	mov    0x4(%eax),%ecx
 81bdef6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81bdefa:	8b 48 08             	mov    0x8(%eax),%ecx
 81bdefd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81bdf01:	8b 48 0c             	mov    0xc(%eax),%ecx
 81bdf04:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81bdf08:	8b 48 10             	mov    0x10(%eax),%ecx
 81bdf0b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81bdf0f:	8b 48 14             	mov    0x14(%eax),%ecx
 81bdf12:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81bdf16:	8b 48 18             	mov    0x18(%eax),%ecx
 81bdf19:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81bdf1d:	8b 48 1c             	mov    0x1c(%eax),%ecx
 81bdf20:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81bdf24:	8b 48 20             	mov    0x20(%eax),%ecx
 81bdf27:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81bdf2b:	8b 48 24             	mov    0x24(%eax),%ecx
 81bdf2e:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 81bdf32:	8b 48 28             	mov    0x28(%eax),%ecx
 81bdf35:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 81bdf39:	8b 48 2c             	mov    0x2c(%eax),%ecx
 81bdf3c:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 81bdf40:	8b 48 30             	mov    0x30(%eax),%ecx
 81bdf43:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 81bdf47:	8b 48 34             	mov    0x34(%eax),%ecx
 81bdf4a:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 81bdf4e:	8b 48 38             	mov    0x38(%eax),%ecx
 81bdf51:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 81bdf55:	8b 48 3c             	mov    0x3c(%eax),%ecx
 81bdf58:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 81bdf5c:	0f b6 40 40          	movzbl 0x40(%eax),%eax
 81bdf60:	88 44 24 40          	mov    %al,0x40(%esp)
 81bdf64:	89 14 24             	mov    %edx,(%esp)
 81bdf67:	e8 1a 4e 34 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81bdf6c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81bdf6f:	89 82 a0 00 00 00    	mov    %eax,0xa0(%edx)
 81bdf75:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bdf78:	8b 80 a0 00 00 00    	mov    0xa0(%eax),%eax
 81bdf7e:	85 c0                	test   %eax,%eax
 81bdf80:	79 25                	jns    81bdfa7 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x329>
 81bdf82:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81bdf89:	00 
 81bdf8a:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81bdf91:	00 
 81bdf92:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdf95:	89 04 24             	mov    %eax,(%esp)
 81bdf98:	e8 a5 df 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bdf9d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81bdfa2:	e9 58 02 00 00       	jmp    81be1ff <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x581>
 81bdfa7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81bdfaa:	8b 40 06             	mov    0x6(%eax),%eax
 81bdfad:	89 c3                	mov    %eax,%ebx
 81bdfaf:	e8 e7 e1 f0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81bdfb4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bdfb8:	89 04 24             	mov    %eax,(%esp)
 81bdfbb:	e8 72 1a 1a 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81bdfc0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81bdfc3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81bdfc7:	75 25                	jne    81bdfee <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x370>
 81bdfc9:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81bdfd0:	00 
 81bdfd1:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81bdfd8:	00 
 81bdfd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdfdc:	89 04 24             	mov    %eax,(%esp)
 81bdfdf:	e8 5e df 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bdfe4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81bdfe9:	e9 11 02 00 00       	jmp    81be1ff <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x581>
 81bdfee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81bdff1:	8b 00                	mov    (%eax),%eax
 81bdff3:	83 c0 14             	add    $0x14,%eax
 81bdff6:	8b 10                	mov    (%eax),%edx
 81bdff8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81bdffb:	89 04 24             	mov    %eax,(%esp)
 81bdffe:	ff d2                	call   *%edx
 81be000:	84 c0                	test   %al,%al
 81be002:	74 1e                	je     81be022 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x3a4>
 81be004:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81be007:	8b 00                	mov    (%eax),%eax
 81be009:	83 c0 0c             	add    $0xc,%eax
 81be00c:	8b 10                	mov    (%eax),%edx
 81be00e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81be011:	89 04 24             	mov    %eax,(%esp)
 81be014:	ff d2                	call   *%edx
 81be016:	83 f8 16             	cmp    $0x16,%eax
 81be019:	75 07                	jne    81be022 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x3a4>
 81be01b:	b8 01 00 00 00       	mov    $0x1,%eax
 81be020:	eb 05                	jmp    81be027 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x3a9>
 81be022:	b8 00 00 00 00       	mov    $0x0,%eax
 81be027:	84 c0                	test   %al,%al
 81be029:	74 62                	je     81be08d <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x40f>
 81be02b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81be02e:	89 04 24             	mov    %eax,(%esp)
 81be031:	e8 d0 32 f3 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 81be036:	89 c6                	mov    %eax,%esi
 81be038:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81be03b:	89 04 24             	mov    %eax,(%esp)
 81be03e:	e8 1d 2c f5 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 81be043:	89 c3                	mov    %eax,%ebx
 81be045:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be048:	8b b8 a0 00 00 00    	mov    0xa0(%eax),%edi
 81be04e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be051:	83 c0 04             	add    $0x4,%eax
 81be054:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81be057:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be05a:	89 04 24             	mov    %eax,(%esp)
 81be05d:	e8 2c c2 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81be062:	89 04 24             	mov    %eax,(%esp)
 81be065:	e8 fe f4 f1 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 81be06a:	89 74 24 14          	mov    %esi,0x14(%esp)
 81be06e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81be072:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81be079:	00 
 81be07a:	89 7c 24 08          	mov    %edi,0x8(%esp)
 81be07e:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81be081:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be085:	89 04 24             	mov    %eax,(%esp)
 81be088:	e8 77 d1 17 00       	call   833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>
 81be08d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be090:	8b b8 94 00 00 00    	mov    0x94(%eax),%edi
 81be096:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be099:	8b b0 90 00 00 00    	mov    0x90(%eax),%esi
 81be09f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be0a2:	8b 98 a8 00 00 00    	mov    0xa8(%eax),%ebx
 81be0a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be0ab:	89 04 24             	mov    %eax,(%esp)
 81be0ae:	e8 dd db f0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81be0b3:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81be0b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be0bd:	89 14 24             	mov    %edx,(%esp)
 81be0c0:	e8 f3 f2 f5 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81be0c5:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81be0c9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81be0cd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81be0d1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81be0d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be0d8:	89 04 24             	mov    %eax,(%esp)
 81be0db:	e8 44 0e 2b 00       	call   846ef24 <_ZN17CGuildServerProxy9OnBuyItemEP5CUserPK5CItemjj>
 81be0e0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be0e3:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 81be0e9:	89 c3                	mov    %eax,%ebx
 81be0eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be0ee:	89 04 24             	mov    %eax,(%esp)
 81be0f1:	e8 98 c1 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81be0f6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81be0fd:	00 
 81be0fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81be105:	00 
 81be106:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81be10a:	89 04 24             	mov    %eax,(%esp)
 81be10d:	e8 3a 14 34 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81be112:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be115:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 81be11b:	83 f8 ff             	cmp    $0xffffffff,%eax
 81be11e:	74 45                	je     81be165 <_ZN18DisPatcher_BuyItem7processEP5CUserR8MSG_BASER9ParamBase+0x4e7>
 81be120:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be123:	8b b0 9c 00 00 00    	mov    0x9c(%eax),%esi
 81be129:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be12c:	8b 98 a4 00 00 00    	mov    0xa4(%eax),%ebx
 81be132:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be135:	89 04 24             	mov    %eax,(%esp)
 81be138:	e8 51 c1 f1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81be13d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81be144:	00 
 81be145:	c7 44 24 10 1a 00 00 	movl   $0x1a,0x10(%esp)
 81be14c:	00 
 81be14d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81be151:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81be155:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81be15c:	00 
 81be15d:	89 04 24             	mov    %eax,(%esp)
 81be160:	e8 a7 5e 34 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81be165:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be168:	89 44 24 08          	mov    %eax,0x8(%esp)
 81be16c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be16f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be173:	8b 45 08             	mov    0x8(%ebp),%eax
 81be176:	89 04 24             	mov    %eax,(%esp)
 81be179:	e8 c6 0b 00 00       	call   81bed44 <_ZN18DisPatcher_BuyItem15_onBuyItemEventERK12BuyItemParamP5CUser>
 81be17e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be181:	89 44 24 08          	mov    %eax,0x8(%esp)
 81be185:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be188:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be18c:	8b 45 08             	mov    0x8(%ebp),%eax
 81be18f:	89 04 24             	mov    %eax,(%esp)
 81be192:	e8 c7 0a 00 00       	call   81bec5e <_ZN18DisPatcher_BuyItem17statistic_processEP5CUserR12BuyItemParam>
 81be197:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be19a:	8b 48 0b             	mov    0xb(%eax),%ecx
 81be19d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be1a0:	8b 40 06             	mov    0x6(%eax),%eax
 81be1a3:	89 c2                	mov    %eax,%edx
 81be1a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be1a8:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 81be1ae:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81be1b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be1b6:	89 04 24             	mov    %eax,(%esp)
 81be1b9:	e8 36 c0 2f 00       	call   84ba1f4 <_ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii>
 81be1be:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be1c1:	8b 50 0b             	mov    0xb(%eax),%edx
 81be1c4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be1c7:	8b 40 06             	mov    0x6(%eax),%eax
 81be1ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 81be1ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be1d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be1d5:	89 04 24             	mov    %eax,(%esp)
 81be1d8:	e8 a7 49 4d 00       	call   8692b84 <_ZN5CUser20SendAradEventItemLogEmi>
 81be1dd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81be1e0:	8d 50 04             	lea    0x4(%eax),%edx
 81be1e3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81be1e6:	8b 40 15             	mov    0x15(%eax),%eax
 81be1e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81be1ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be1f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be1f4:	89 04 24             	mov    %eax,(%esp)
 81be1f7:	e8 40 64 4a 00       	call   866463c <_ZN5CUser20eventDeliveryBuyItemEiRK10Inven_Item>
 81be1fc:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81be1ff:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 81be205:	5b                   	pop    %ebx
 81be206:	5e                   	pop    %esi
 81be207:	5f                   	pop    %edi
 81be208:	5d                   	pop    %ebp
 81be209:	c3                   	ret

```

```c
// DisPatcher_BuyItem::process @ 0x81bdc7e

/* DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_BuyItem::process
          (DisPatcher_BuyItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  CDataManager *this_00;
  CItem *pCVar8;
  int iVar9;
  int iVar10;
  CInventory *pCVar11;
  CCreatureMgr *this_01;
  CGuildServerProxy *this_02;
  
  uVar5 = check_error(this,param_1,param_2);
  if (0 < (int)uVar5) {
    CUser::SendCmdErrorPacket(param_1,0x15,uVar5 & 0xff);
    return 0xffffffff;
  }
  if ((int)uVar5 < 0) {
    CUser::SendCmdErrorPacket(param_1,0x15,0x15);
    uVar5 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x1a1,"virtual int DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)",
                     0,uVar5);
    return uVar6;
  }
  uVar5 = get_data(this,param_1,(MSG_BUY_ITEM *)param_2,(BuyItemParam *)param_3);
  if (uVar5 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x15,uVar5 & 0xff);
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 0x98) == 0x29f2a7) {
    iVar7 = CUser::get_state(param_1);
    if (iVar7 == 3) {
      uVar6 = LineFunc(0x1b4,
                       "virtual int DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)",0,0)
      ;
      return uVar6;
    }
    CUser::getBossTowerIndex(param_1);
    iVar7 = G_CGameManager();
    iVar7 = CGameManager::getBossTower(iVar7);
    if (iVar7 == 0) {
      uVar6 = LineFunc(0x1b8,
                       "virtual int DisPatcher_BuyItem::process(CUser*, MSG_BASE&, ParamBase&)",0,0)
      ;
      return uVar6;
    }
  }
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_2 + 0xd);
  (**(code **)(**(int **)(param_3 + 0xa8) + 8))(*(undefined4 *)(param_3 + 0xa8),param_3 + 4);
  cVar4 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x14))(*(undefined4 *)(param_3 + 0xa8));
  if ((cVar4 == '\x01') ||
     (cVar4 = (**(code **)(**(int **)(param_3 + 0xa8) + 0x10))(*(undefined4 *)(param_3 + 0xa8)),
     cVar4 == '\x01')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    *(undefined4 *)(param_3 + 0xb) = *(undefined4 *)(param_2 + 0x11);
  }
  uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  uVar6 = CInventory::insertItemIntoInventory
                    (uVar6,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8),
                     *(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0x10),
                     *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),
                     *(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x20),
                     *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),
                     *(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),
                     *(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x38),
                     *(undefined4 *)(param_3 + 0x3c),param_3[0x40],0,1,0);
  *(undefined4 *)(param_3 + 0xa0) = uVar6;
  if (-1 < *(int *)(param_3 + 0xa0)) {
    iVar7 = *(int *)(param_3 + 6);
    this_00 = (CDataManager *)G_CDataManager();
    pCVar8 = (CItem *)CDataManager::find_item(this_00,iVar7);
    if (pCVar8 != (CItem *)0x0) {
      cVar4 = (**(code **)(*(int *)pCVar8 + 0x14))(pCVar8);
      if ((cVar4 == '\0') || (iVar7 = (**(code **)(*(int *)pCVar8 + 0xc))(pCVar8), iVar7 != 0x16)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar9 = CItem::getExpirationDate(pCVar8);
        iVar10 = CItem::getUsablePeriod(pCVar8);
        iVar7 = *(int *)(param_3 + 0xa0);
        pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar11);
        user_creature::CCreatureMgr::InsertCreatureItem
                  (this_01,(Inven_Item *)(param_3 + 4),iVar7,0,iVar10,iVar9);
      }
      uVar5 = *(uint *)(param_3 + 0x94);
      uVar1 = *(uint *)(param_3 + 0x90);
      pCVar8 = *(CItem **)(param_3 + 0xa8);
      uVar6 = CUser::GetServerGroup(param_1);
      this_02 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar6);
      CGuildServerProxy::OnBuyItem(this_02,param_1,pCVar8,uVar1,uVar5);
      uVar6 = *(undefined4 *)(param_3 + 0x80);
      pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::use_money(pCVar11,uVar6,0,1);
      if (*(int *)(param_3 + 0x98) != -1) {
        uVar6 = *(undefined4 *)(param_3 + 0x9c);
        uVar2 = *(undefined4 *)(param_3 + 0xa4);
        pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::delete_item(pCVar11,1,uVar2,uVar6,0x1a,1);
      }
      _onBuyItemEvent((BuyItemParam *)this,(CUser *)param_3);
      statistic_process(this,param_1,(BuyItemParam *)param_3);
      HistoryLog::WriteBuyItem
                (*(_IO_FILE **)(param_1 + 0x796f8),*(int *)(param_3 + 6),*(int *)(param_3 + 0xb));
      CUser::SendAradEventItemLog(param_1,*(ulong *)(param_3 + 6),*(int *)(param_3 + 0xb));
      CUser::eventDeliveryBuyItem(param_1,*(int *)(param_2 + 0x15),(Inven_Item *)(param_3 + 4));
      return 0;
    }
    CUser::SendCmdErrorPacket(param_1,0x15,0x13);
    return 0xffffffff;
  }
  CUser::SendCmdErrorPacket(param_1,0x15,4);
  return 0xffffffff;
}

```

---

## read

```asm
// === 081bdba8 DisPatcher_BuyItem::read  [0x081bdba8-0x81bdc7d] ===
 81bdba8:	55                   	push   %ebp
 81bdba9:	89 e5                	mov    %esp,%ebp
 81bdbab:	83 ec 18             	sub    $0x18,%esp
 81bdbae:	8b 45 10             	mov    0x10(%ebp),%eax
 81bdbb1:	83 c0 0d             	add    $0xd,%eax
 81bdbb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bdbb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdbbb:	89 04 24             	mov    %eax,(%esp)
 81bdbbe:	e8 bb f6 3c 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81bdbc3:	83 f0 01             	xor    $0x1,%eax
 81bdbc6:	84 c0                	test   %al,%al
 81bdbc8:	74 29                	je     81bdbf3 <_ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b>
 81bdbca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bdbd1:	00 
 81bdbd2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bdbd9:	00 
 81bdbda:	c7 44 24 04 e0 62 bd 	movl   $0x8bd62e0,0x4(%esp)
 81bdbe1:	08 
 81bdbe2:	c7 04 24 88 01 00 00 	movl   $0x188,(%esp)
 81bdbe9:	e8 e9 2c 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bdbee:	e9 89 00 00 00       	jmp    81bdc7c <_ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd4>
 81bdbf3:	8b 45 10             	mov    0x10(%ebp),%eax
 81bdbf6:	83 c0 11             	add    $0x11,%eax
 81bdbf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bdbfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdc00:	89 04 24             	mov    %eax,(%esp)
 81bdc03:	e8 38 f6 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81bdc08:	83 f0 01             	xor    $0x1,%eax
 81bdc0b:	84 c0                	test   %al,%al
 81bdc0d:	74 26                	je     81bdc35 <_ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8d>
 81bdc0f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bdc16:	00 
 81bdc17:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bdc1e:	00 
 81bdc1f:	c7 44 24 04 e0 62 bd 	movl   $0x8bd62e0,0x4(%esp)
 81bdc26:	08 
 81bdc27:	c7 04 24 8b 01 00 00 	movl   $0x18b,(%esp)
 81bdc2e:	e8 a4 2c 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bdc33:	eb 47                	jmp    81bdc7c <_ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd4>
 81bdc35:	8b 45 10             	mov    0x10(%ebp),%eax
 81bdc38:	83 c0 15             	add    $0x15,%eax
 81bdc3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bdc3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bdc42:	89 04 24             	mov    %eax,(%esp)
 81bdc45:	e8 f6 f5 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81bdc4a:	83 f0 01             	xor    $0x1,%eax
 81bdc4d:	84 c0                	test   %al,%al
 81bdc4f:	74 26                	je     81bdc77 <_ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcf>
 81bdc51:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bdc58:	00 
 81bdc59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bdc60:	00 
 81bdc61:	c7 44 24 04 e0 62 bd 	movl   $0x8bd62e0,0x4(%esp)
 81bdc68:	08 
 81bdc69:	c7 04 24 8e 01 00 00 	movl   $0x18e,(%esp)
 81bdc70:	e8 62 2c 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bdc75:	eb 05                	jmp    81bdc7c <_ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd4>
 81bdc77:	b8 00 00 00 00       	mov    $0x0,%eax
 81bdc7c:	c9                   	leave
 81bdc7d:	c3                   	ret

```

```c
// DisPatcher_BuyItem::read @ 0x81bdba8

/* DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_BuyItem::read(DisPatcher_BuyItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x18e,"virtual int DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x18b,"virtual int DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x188,"virtual int DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081be20a DisPatcher_BuyItem::send  [0x081be20a-0x81be469] ===
 81be20a:	55                   	push   %ebp
 81be20b:	89 e5                	mov    %esp,%ebp
 81be20d:	56                   	push   %esi
 81be20e:	53                   	push   %ebx
 81be20f:	83 ec 30             	sub    $0x30,%esp
 81be212:	8b 45 10             	mov    0x10(%ebp),%eax
 81be215:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81be218:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be21b:	89 04 24             	mov    %eax,(%esp)
 81be21e:	e8 29 fb 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81be223:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81be22a:	00 
 81be22b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81be232:	00 
 81be233:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be236:	89 04 24             	mov    %eax,(%esp)
 81be239:	e8 be d6 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81be23e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81be245:	00 
 81be246:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be249:	89 04 24             	mov    %eax,(%esp)
 81be24c:	e8 cf d6 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81be251:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be254:	89 04 24             	mov    %eax,(%esp)
 81be257:	e8 22 c0 f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81be25c:	89 04 24             	mov    %eax,(%esp)
 81be25f:	e8 72 65 f7 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81be264:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be268:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be26b:	89 04 24             	mov    %eax,(%esp)
 81be26e:	e8 c9 d6 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be273:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be276:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 81be27c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81be283:	00 
 81be284:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be288:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be28b:	89 04 24             	mov    %eax,(%esp)
 81be28e:	e8 33 1a 49 00       	call   864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>
 81be293:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be297:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be29a:	89 04 24             	mov    %eax,(%esp)
 81be29d:	e8 9a d6 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be2a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be2a5:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 81be2ab:	89 c2                	mov    %eax,%edx
 81be2ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be2b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81be2b4:	89 04 24             	mov    %eax,(%esp)
 81be2b7:	e8 64 73 48 00       	call   8645620 <_ZN15CUserCharacInfo14UseFinishPointEi>
 81be2bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be2c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be2c3:	89 04 24             	mov    %eax,(%esp)
 81be2c6:	e8 71 d6 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be2cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be2ce:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 81be2d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be2d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be2db:	89 04 24             	mov    %eax,(%esp)
 81be2de:	e8 e3 be fb ff       	call   817a1c6 <_ZN5CUser7UseCeraEj>
 81be2e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be2e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be2ea:	89 04 24             	mov    %eax,(%esp)
 81be2ed:	e8 4a d6 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be2f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be2f5:	8b 80 a0 00 00 00    	mov    0xa0(%eax),%eax
 81be2fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be2ff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be302:	89 04 24             	mov    %eax,(%esp)
 81be305:	e8 9a bb f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81be30a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be30d:	8b 40 06             	mov    0x6(%eax),%eax
 81be310:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be314:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be317:	89 04 24             	mov    %eax,(%esp)
 81be31a:	e8 1d d6 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be31f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be322:	8b 40 0b             	mov    0xb(%eax),%eax
 81be325:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be329:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be32c:	89 04 24             	mov    %eax,(%esp)
 81be32f:	e8 08 d6 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be334:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be337:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81be33b:	0f b7 c0             	movzwl %ax,%eax
 81be33e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be342:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be345:	89 04 24             	mov    %eax,(%esp)
 81be348:	e8 57 bb f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81be34d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be350:	83 c0 15             	add    $0x15,%eax
 81be353:	89 04 24             	mov    %eax,(%esp)
 81be356:	e8 d7 23 f9 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 81be35b:	0f b6 c0             	movzbl %al,%eax
 81be35e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be362:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be365:	89 04 24             	mov    %eax,(%esp)
 81be368:	e8 b3 d5 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81be36d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be370:	83 c0 15             	add    $0x15,%eax
 81be373:	89 04 24             	mov    %eax,(%esp)
 81be376:	e8 f7 23 f9 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 81be37b:	0f b7 c0             	movzwl %ax,%eax
 81be37e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be382:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be385:	89 04 24             	mov    %eax,(%esp)
 81be388:	e8 17 bb f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81be38d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be390:	83 c0 04             	add    $0x4,%eax
 81be393:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be397:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be39a:	89 04 24             	mov    %eax,(%esp)
 81be39d:	e8 ec 25 f9 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 81be3a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be3a5:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 81be3ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be3af:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be3b2:	89 04 24             	mov    %eax,(%esp)
 81be3b5:	e8 82 d5 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be3ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81be3bd:	8b 98 a4 00 00 00    	mov    0xa4(%eax),%ebx
 81be3c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be3c6:	89 04 24             	mov    %eax,(%esp)
 81be3c9:	e8 b0 be f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81be3ce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81be3d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81be3d9:	00 
 81be3da:	89 04 24             	mov    %eax,(%esp)
 81be3dd:	e8 fc dd 33 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81be3e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81be3e5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81be3e9:	75 15                	jne    81be400 <_ZN18DisPatcher_BuyItem4sendEP5CUserR9ParamBase+0x1f6>
 81be3eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81be3f2:	00 
 81be3f3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be3f6:	89 04 24             	mov    %eax,(%esp)
 81be3f9:	e8 3e d5 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be3fe:	eb 15                	jmp    81be415 <_ZN18DisPatcher_BuyItem4sendEP5CUserR9ParamBase+0x20b>
 81be400:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81be403:	8b 40 07             	mov    0x7(%eax),%eax
 81be406:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be40a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be40d:	89 04 24             	mov    %eax,(%esp)
 81be410:	e8 27 d5 f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81be415:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81be41c:	00 
 81be41d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be420:	89 04 24             	mov    %eax,(%esp)
 81be423:	e8 30 d5 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81be428:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be42b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81be42f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81be432:	89 04 24             	mov    %eax,(%esp)
 81be435:	e8 80 a1 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81be43a:	eb 1b                	jmp    81be457 <_ZN18DisPatcher_BuyItem4sendEP5CUserR9ParamBase+0x24d>
 81be43c:	89 d3                	mov    %edx,%ebx
 81be43e:	89 c6                	mov    %eax,%esi
 81be440:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be443:	89 04 24             	mov    %eax,(%esp)
 81be446:	e8 35 fa 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81be44b:	89 f0                	mov    %esi,%eax
 81be44d:	89 da                	mov    %ebx,%edx
 81be44f:	89 04 24             	mov    %eax,(%esp)
 81be452:	e8 f9 52 92 00       	call   8ae3750 <_Unwind_Resume>
 81be457:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81be45a:	89 04 24             	mov    %eax,(%esp)
 81be45d:	e8 1e fa 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81be462:	83 c4 30             	add    $0x30,%esp
 81be465:	5b                   	pop    %ebx
 81be466:	5e                   	pop    %esi
 81be467:	5d                   	pop    %ebp
 81be468:	c3                   	ret
 81be469:	90                   	nop

```

```c
// DisPatcher_BuyItem::send @ 0x81be20a

/* DisPatcher_BuyItem::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_BuyItem::send(DisPatcher_BuyItem *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *pCVar1;
  int iVar2;
  uint uVar3;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081be239 to 081be439 has its CatchHandler @ 081be43c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x15);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar2 = CInventory::get_money(pCVar1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  iVar2 = CUser::UseWinPoint(param_1,*(undefined4 *)(local_14 + 0x88),0);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  iVar2 = CUserCharacInfo::UseFinishPoint((CUserCharacInfo *)param_1,*(int *)(local_14 + 0x8c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  iVar2 = CUser::UseCera(param_1,*(uint *)(local_14 + 0x84));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,iVar2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xa0));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 6));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xb));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0xf));
  uVar3 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_14 + 0x15));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,uVar3 & 0xff);
  uVar3 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_14 + 0x15));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar3 & 0xffff);
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_20,(Inven_Item *)(local_14 + 4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x98));
  iVar2 = *(int *)(local_14 + 0xa4);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenRef(pCVar1,1,iVar2);
  if (local_10 == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_10 + 7));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

---

## statistic_process

```asm
// === 081bec5e DisPatcher_BuyItem::statistic_process  [0x081bec5e-0x81bed43] ===
 81bec5e:	55                   	push   %ebp
 81bec5f:	89 e5                	mov    %esp,%ebp
 81bec61:	57                   	push   %edi
 81bec62:	56                   	push   %esi
 81bec63:	53                   	push   %ebx
 81bec64:	83 ec 3c             	sub    $0x3c,%esp
 81bec67:	8b 45 10             	mov    0x10(%ebp),%eax
 81bec6a:	05 b0 00 00 00       	add    $0xb0,%eax
 81bec6f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81bec72:	8b 45 10             	mov    0x10(%ebp),%eax
 81bec75:	8b 40 0b             	mov    0xb(%eax),%eax
 81bec78:	0f bf f0             	movswl %ax,%esi
 81bec7b:	8b 45 10             	mov    0x10(%ebp),%eax
 81bec7e:	8b 98 a8 00 00 00    	mov    0xa8(%eax),%ebx
 81bec84:	8b 45 10             	mov    0x10(%ebp),%eax
 81bec87:	8d 78 04             	lea    0x4(%eax),%edi
 81bec8a:	e8 4e 2e f9 ff       	call   8151add <_Z7G_Storev>
 81bec8f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81bec92:	89 54 24 14          	mov    %edx,0x14(%esp)
 81bec96:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81bec9d:	00 
 81bec9e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81beca2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81beca6:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81becaa:	89 04 24             	mov    %eax,(%esp)
 81becad:	e8 ee a1 45 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 81becb2:	8b 45 10             	mov    0x10(%ebp),%eax
 81becb5:	8b 80 b0 00 00 00    	mov    0xb0(%eax),%eax
 81becbb:	89 c3                	mov    %eax,%ebx
 81becbd:	e8 2d e9 44 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 81becc2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81becc6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81becc9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81beccd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 81becd4:	00 
 81becd5:	89 04 24             	mov    %eax,(%esp)
 81becd8:	e8 a5 e9 44 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 81becdd:	8b 45 10             	mov    0x10(%ebp),%eax
 81bece0:	8b 98 80 00 00 00    	mov    0x80(%eax),%ebx
 81bece6:	e8 04 e9 44 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 81beceb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81becef:	8b 55 0c             	mov    0xc(%ebp),%edx
 81becf2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81becf6:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 81becfd:	00 
 81becfe:	89 04 24             	mov    %eax,(%esp)
 81bed01:	e8 7c e9 44 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 81bed06:	8b 45 10             	mov    0x10(%ebp),%eax
 81bed09:	8b b0 9c 00 00 00    	mov    0x9c(%eax),%esi
 81bed0f:	8b 45 10             	mov    0x10(%ebp),%eax
 81bed12:	8b 98 98 00 00 00    	mov    0x98(%eax),%ebx
 81bed18:	e8 33 f1 44 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 81bed1d:	c7 44 24 10 6a 00 00 	movl   $0x6a,0x10(%esp)
 81bed24:	00 
 81bed25:	8b 55 0c             	mov    0xc(%ebp),%edx
 81bed28:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81bed2c:	89 74 24 08          	mov    %esi,0x8(%esp)
 81bed30:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bed34:	89 04 24             	mov    %eax,(%esp)
 81bed37:	e8 7c f2 44 00       	call   860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>
 81bed3c:	83 c4 3c             	add    $0x3c,%esp
 81bed3f:	5b                   	pop    %ebx
 81bed40:	5e                   	pop    %esi
 81bed41:	5f                   	pop    %edi
 81bed42:	5d                   	pop    %ebp
 81bed43:	c3                   	ret

```

```c
// DisPatcher_BuyItem::statistic_process @ 0x81bec5e

/* DisPatcher_BuyItem::statistic_process(CUser*, BuyItemParam&) */

void __thiscall
DisPatcher_BuyItem::statistic_process(DisPatcher_BuyItem *this,CUser *param_1,BuyItemParam *param_2)

{
  undefined4 uVar1;
  CItem *pCVar2;
  undefined4 uVar3;
  Store *this_00;
  CValueStatistic *pCVar4;
  CCubeStatistic *pCVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  pCVar2 = *(CItem **)(param_2 + 0xa8);
  this_00 = (Store *)G_Store();
  Store::GetSellItemPrice
            (this_00,(Inven_Item *)(param_2 + 4),pCVar2,(short)uVar1,false,(int *)(param_2 + 0xb0));
  uVar1 = *(undefined4 *)(param_2 + 0xb0);
  pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
  CValueStatistic::AddValueStatistic(pCVar4,6,param_1,uVar1);
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  pCVar4 = (CValueStatistic *)GetInstanceValueStatistic();
  CValueStatistic::AddValueStatistic(pCVar4,0xd,param_1,uVar1);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  pCVar5 = (CCubeStatistic *)GetInstanceCubeStatistic();
  CCubeStatistic::collectCubeStatistics(pCVar5,uVar3,uVar1,param_1,0x6a);
  return;
}

```

