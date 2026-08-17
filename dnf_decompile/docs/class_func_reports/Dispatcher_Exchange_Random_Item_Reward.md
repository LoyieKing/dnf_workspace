# Dispatcher_Exchange_Random_Item_Reward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081de52c Dispatcher_Exchange_Random_Item_Reward::process  [0x081de52c-0x81de72b] ===
 81de52c:	55                   	push   %ebp
 81de52d:	89 e5                	mov    %esp,%ebp
 81de52f:	56                   	push   %esi
 81de530:	53                   	push   %ebx
 81de531:	83 ec 50             	sub    $0x50,%esp
 81de534:	8b 45 10             	mov    0x10(%ebp),%eax
 81de537:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81de53a:	8b 45 14             	mov    0x14(%ebp),%eax
 81de53d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81de540:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de543:	89 04 24             	mov    %eax,(%esp)
 81de546:	e8 41 be ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81de54b:	83 f8 03             	cmp    $0x3,%eax
 81de54e:	0f 95 c0             	setne  %al
 81de551:	84 c0                	test   %al,%al
 81de553:	74 14                	je     81de569 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x3d>
 81de555:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de558:	c7 40 04 07 00 00 00 	movl   $0x7,0x4(%eax)
 81de55f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de564:	e9 b9 01 00 00       	jmp    81de722 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1f6>
 81de569:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81de56c:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81de570:	0f b7 d8             	movzwl %ax,%ebx
 81de573:	e8 23 dc ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81de578:	89 04 24             	mov    %eax,(%esp)
 81de57b:	e8 e2 25 f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81de580:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81de584:	89 04 24             	mov    %eax,(%esp)
 81de587:	e8 de d3 f2 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 81de58c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de58f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81de593:	75 14                	jne    81de5a9 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x7d>
 81de595:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de598:	c7 40 04 b2 00 00 00 	movl   $0xb2,0x4(%eax)
 81de59f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de5a4:	e9 79 01 00 00       	jmp    81de722 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1f6>
 81de5a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de5ac:	8b 00                	mov    (%eax),%eax
 81de5ae:	83 c0 08             	add    $0x8,%eax
 81de5b1:	8b 10                	mov    (%eax),%edx
 81de5b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de5b6:	89 04 24             	mov    %eax,(%esp)
 81de5b9:	ff d2                	call   *%edx
 81de5bb:	83 f0 01             	xor    $0x1,%eax
 81de5be:	84 c0                	test   %al,%al
 81de5c0:	74 14                	je     81de5d6 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0xaa>
 81de5c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de5c5:	c7 40 04 b2 00 00 00 	movl   $0xb2,0x4(%eax)
 81de5cc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de5d1:	e9 4c 01 00 00       	jmp    81de722 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1f6>
 81de5d6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de5d9:	89 04 24             	mov    %eax,(%esp)
 81de5dc:	e8 f5 63 f5 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 81de5e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81de5e4:	8d 50 10             	lea    0x10(%eax),%edx
 81de5e7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de5ea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81de5ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 81de5f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de5f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de5f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de5fc:	89 04 24             	mov    %eax,(%esp)
 81de5ff:	e8 2c 05 f3 ff       	call   810eb30 <_ZN13EventClassify25CExchangeRandomItemReward24verifyMaterialItemByRuleEP5CUserRSt6vectorIiSaIiEERS3_ISt4pairIiiESaIS8_EE>
 81de604:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81de607:	89 42 04             	mov    %eax,0x4(%edx)
 81de60a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de60d:	8b 40 04             	mov    0x4(%eax),%eax
 81de610:	85 c0                	test   %eax,%eax
 81de612:	74 0a                	je     81de61e <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0xf2>
 81de614:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de619:	e9 f9 00 00 00       	jmp    81de717 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1eb>
 81de61e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81de621:	89 04 24             	mov    %eax,(%esp)
 81de624:	e8 ad 63 f5 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 81de629:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81de62c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de630:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de633:	89 04 24             	mov    %eax,(%esp)
 81de636:	e8 05 08 f3 ff       	call   810ee40 <_ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE>
 81de63b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81de63e:	89 42 04             	mov    %eax,0x4(%edx)
 81de641:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de644:	8b 40 04             	mov    0x4(%eax),%eax
 81de647:	85 c0                	test   %eax,%eax
 81de649:	74 0a                	je     81de655 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x129>
 81de64b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de650:	e9 9a 00 00 00       	jmp    81de6ef <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1c3>
 81de655:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de658:	83 c0 0c             	add    $0xc,%eax
 81de65b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81de65f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de662:	89 44 24 08          	mov    %eax,0x8(%esp)
 81de666:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de669:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de66d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de670:	89 04 24             	mov    %eax,(%esp)
 81de673:	e8 66 08 f3 ff       	call   810eede <_ZN13EventClassify25CExchangeRandomItemReward22deleteUsedMaterialItemEP5CUserRSt6vectorISt4pairIiiESaIS5_EES8_>
 81de678:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81de67b:	89 42 04             	mov    %eax,0x4(%edx)
 81de67e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de681:	8b 40 04             	mov    0x4(%eax),%eax
 81de684:	85 c0                	test   %eax,%eax
 81de686:	74 07                	je     81de68f <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x163>
 81de688:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de68d:	eb 60                	jmp    81de6ef <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1c3>
 81de68f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de692:	8d 50 09             	lea    0x9(%eax),%edx
 81de695:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de698:	83 c0 18             	add    $0x18,%eax
 81de69b:	89 54 24 10          	mov    %edx,0x10(%esp)
 81de69f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81de6a3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81de6a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81de6aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de6ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de6b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de6b4:	89 04 24             	mov    %eax,(%esp)
 81de6b7:	e8 b2 0b f3 ff       	call   810f26e <_ZN13EventClassify25CExchangeRandomItemReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEERh>
 81de6bc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81de6bf:	89 42 04             	mov    %eax,0x4(%edx)
 81de6c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de6c5:	8b 40 04             	mov    0x4(%eax),%eax
 81de6c8:	85 c0                	test   %eax,%eax
 81de6ca:	74 07                	je     81de6d3 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1a7>
 81de6cc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de6d1:	eb 1c                	jmp    81de6ef <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1c3>
 81de6d3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81de6d8:	eb 15                	jmp    81de6ef <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1c3>
 81de6da:	89 d3                	mov    %edx,%ebx
 81de6dc:	89 c6                	mov    %eax,%esi
 81de6de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81de6e1:	89 04 24             	mov    %eax,(%esp)
 81de6e4:	e8 01 63 f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81de6e9:	89 f0                	mov    %esi,%eax
 81de6eb:	89 da                	mov    %ebx,%edx
 81de6ed:	eb 0d                	jmp    81de6fc <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1d0>
 81de6ef:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81de6f2:	89 04 24             	mov    %eax,(%esp)
 81de6f5:	e8 f0 62 f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81de6fa:	eb 1b                	jmp    81de717 <_ZN38Dispatcher_Exchange_Random_Item_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1eb>
 81de6fc:	89 d3                	mov    %edx,%ebx
 81de6fe:	89 c6                	mov    %eax,%esi
 81de700:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de703:	89 04 24             	mov    %eax,(%esp)
 81de706:	e8 df 62 f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81de70b:	89 f0                	mov    %esi,%eax
 81de70d:	89 da                	mov    %ebx,%edx
 81de70f:	89 04 24             	mov    %eax,(%esp)
 81de712:	e8 39 50 90 00       	call   8ae3750 <_Unwind_Resume>
 81de717:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de71a:	89 04 24             	mov    %eax,(%esp)
 81de71d:	e8 c8 62 f5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81de722:	89 d8                	mov    %ebx,%eax
 81de724:	83 c4 50             	add    $0x50,%esp
 81de727:	5b                   	pop    %ebx
 81de728:	5e                   	pop    %esi
 81de729:	5d                   	pop    %ebp
 81de72a:	c3                   	ret
 81de72b:	90                   	nop

```

```c
// Dispatcher_Exchange_Random_Item_Reward::process @ 0x81de52c

/* Dispatcher_Exchange_Random_Item_Reward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Exchange_Random_Item_Reward::process
          (Dispatcher_Exchange_Random_Item_Reward *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  uint uVar4;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_24 [12];
  MSG_BASE *local_18;
  ParamBase *local_14;
  CExchangeRandomItemReward *local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    uVar4 = (uint)*(ushort *)(local_18 + 0xe);
    this_00 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::get_event_script_mng(this_00);
    local_10 = (CExchangeRandomItemReward *)EventClassify::CEventScriptMng::get_event_entity(iVar2);
    if (local_10 == (CExchangeRandomItemReward *)0x0) {
      *(undefined4 *)(local_14 + 4) = 0xb2;
    }
    else {
      cVar1 = (**(code **)(*(int *)local_10 + 8))(local_10,uVar4);
      if (cVar1 == '\x01') {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_24);
                    /* try { // try from 081de5ff to 081de628 has its CatchHandler @ 081de6fc */
        uVar3 = EventClassify::CExchangeRandomItemReward::verifyMaterialItemByRule
                          (local_10,param_1,(vector *)(local_18 + 0x10),(vector *)local_24);
        *(undefined4 *)(local_14 + 4) = uVar3;
        if (*(int *)(local_14 + 4) == 0) {
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 081de636 to 081de6bb has its CatchHandler @ 081de6da */
          uVar3 = EventClassify::CExchangeRandomItemReward::getRewardItem
                            (local_10,(vector *)local_30);
          *(undefined4 *)(local_14 + 4) = uVar3;
          if (*(int *)(local_14 + 4) == 0) {
            uVar3 = EventClassify::CExchangeRandomItemReward::deleteUsedMaterialItem
                              (local_10,param_1,(vector *)local_24,(vector *)(local_14 + 0xc));
            *(undefined4 *)(local_14 + 4) = uVar3;
            if (*(int *)(local_14 + 4) == 0) {
              uVar3 = EventClassify::CExchangeRandomItemReward::sendRandomItemReward
                                (local_10,param_1,(vector *)local_30,(vector *)(local_14 + 0x18),
                                 (uchar *)(local_14 + 9));
              *(undefined4 *)(local_14 + 4) = uVar3;
            }
          }
                    /* try { // try from 081de6f5 to 081de6f9 has its CatchHandler @ 081de6fc */
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_24);
      }
      else {
        *(undefined4 *)(local_14 + 4) = 0xb2;
      }
    }
  }
  else {
    *(undefined4 *)(local_14 + 4) = 7;
  }
  return 0;
}

```

---

## read

```asm
// === 081de406 Dispatcher_Exchange_Random_Item_Reward::read  [0x081de406-0x81de52b] ===
 81de406:	55                   	push   %ebp
 81de407:	89 e5                	mov    %esp,%ebp
 81de409:	83 ec 28             	sub    $0x28,%esp
 81de40c:	8b 45 10             	mov    0x10(%ebp),%eax
 81de40f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81de412:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de415:	83 c0 0e             	add    $0xe,%eax
 81de418:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de41c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de41f:	89 04 24             	mov    %eax,(%esp)
 81de422:	e8 89 ec 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81de427:	83 f0 01             	xor    $0x1,%eax
 81de42a:	84 c0                	test   %al,%al
 81de42c:	74 29                	je     81de457 <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0x51>
 81de42e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81de435:	00 
 81de436:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81de43d:	00 
 81de43e:	c7 44 24 04 60 1d bd 	movl   $0x8bd1d60,0x4(%esp)
 81de445:	08 
 81de446:	c7 04 24 c8 4f 00 00 	movl   $0x4fc8,(%esp)
 81de44d:	e8 85 24 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81de452:	e9 d3 00 00 00       	jmp    81de52a <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0x124>
 81de457:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 81de45b:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81de45e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de462:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de465:	89 04 24             	mov    %eax,(%esp)
 81de468:	e8 03 eb 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81de46d:	83 f0 01             	xor    $0x1,%eax
 81de470:	84 c0                	test   %al,%al
 81de472:	74 29                	je     81de49d <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0x97>
 81de474:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81de47b:	00 
 81de47c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81de483:	00 
 81de484:	c7 44 24 04 60 1d bd 	movl   $0x8bd1d60,0x4(%esp)
 81de48b:	08 
 81de48c:	c7 04 24 cc 4f 00 00 	movl   $0x4fcc,(%esp)
 81de493:	e8 3f 24 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81de498:	e9 8d 00 00 00       	jmp    81de52a <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0x124>
 81de49d:	66 c7 45 e8 00 00    	movw   $0x0,-0x18(%ebp)
 81de4a3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81de4aa:	eb 68                	jmp    81de514 <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0x10e>
 81de4ac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81de4af:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de4b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de4b6:	89 04 24             	mov    %eax,(%esp)
 81de4b9:	e8 f2 eb 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81de4be:	83 f0 01             	xor    $0x1,%eax
 81de4c1:	84 c0                	test   %al,%al
 81de4c3:	74 26                	je     81de4eb <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0xe5>
 81de4c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81de4cc:	00 
 81de4cd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81de4d4:	00 
 81de4d5:	c7 44 24 04 60 1d bd 	movl   $0x8bd1d60,0x4(%esp)
 81de4dc:	08 
 81de4dd:	c7 04 24 d2 4f 00 00 	movl   $0x4fd2,(%esp)
 81de4e4:	e8 ee 23 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81de4e9:	eb 3f                	jmp    81de52a <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0x124>
 81de4eb:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 81de4ef:	0f b7 c0             	movzwl %ax,%eax
 81de4f2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81de4f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81de4f8:	8d 50 10             	lea    0x10(%eax),%edx
 81de4fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81de4fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de502:	89 14 24             	mov    %edx,(%esp)
 81de505:	e8 e4 fc ea ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 81de50a:	66 c7 45 e8 00 00    	movw   $0x0,-0x18(%ebp)
 81de510:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81de514:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 81de518:	0f b6 c0             	movzbl %al,%eax
 81de51b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81de51e:	0f 97 c0             	seta   %al
 81de521:	84 c0                	test   %al,%al
 81de523:	75 87                	jne    81de4ac <_ZN38Dispatcher_Exchange_Random_Item_Reward4readER9PacketBufR8MSG_BASE+0xa6>
 81de525:	b8 00 00 00 00       	mov    $0x0,%eax
 81de52a:	c9                   	leave
 81de52b:	c3                   	ret

```

```c
// Dispatcher_Exchange_Random_Item_Reward::read @ 0x81de406

/* Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Exchange_Random_Item_Reward::read
          (Dispatcher_Exchange_Random_Item_Reward *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ushort local_1c;
  byte local_19;
  uint local_18;
  MSG_BASE *local_14;
  uint local_10;
  
  local_14 = param_2;
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    local_19 = 0;
    cVar1 = PacketBuf::get_byte(param_1,&local_19);
    if (cVar1 == '\x01') {
      for (local_10 = 0; local_1c = 0, local_10 < local_19; local_10 = local_10 + 1) {
        cVar1 = PacketBuf::get_short(param_1,&local_1c);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x4fd2,
                           "virtual int Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        local_18 = (uint)local_1c;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)(local_14 + 0x10),(int *)&local_18);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4fcc,
                       "virtual int Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4fc8,
                     "virtual int Dispatcher_Exchange_Random_Item_Reward::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081de72c Dispatcher_Exchange_Random_Item_Reward::send  [0x081de72c-0x81de9d9] ===
 81de72c:	55                   	push   %ebp
 81de72d:	89 e5                	mov    %esp,%ebp
 81de72f:	56                   	push   %esi
 81de730:	53                   	push   %ebx
 81de731:	83 ec 30             	sub    $0x30,%esp
 81de734:	8b 45 10             	mov    0x10(%ebp),%eax
 81de737:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81de73a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de73d:	89 04 24             	mov    %eax,(%esp)
 81de740:	e8 07 f6 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81de745:	c7 44 24 08 c1 01 00 	movl   $0x1c1,0x8(%esp)
 81de74c:	00 
 81de74d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81de754:	00 
 81de755:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de758:	89 04 24             	mov    %eax,(%esp)
 81de75b:	e8 9c d1 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81de760:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de763:	8b 40 04             	mov    0x4(%eax),%eax
 81de766:	85 c0                	test   %eax,%eax
 81de768:	0f 85 ec 01 00 00    	jne    81de95a <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0x22e>
 81de76e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81de775:	00 
 81de776:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de779:	89 04 24             	mov    %eax,(%esp)
 81de77c:	e8 9f d1 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81de781:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de784:	83 c0 0c             	add    $0xc,%eax
 81de787:	89 04 24             	mov    %eax,(%esp)
 81de78a:	e8 85 f0 ef ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81de78f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de793:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de796:	89 04 24             	mov    %eax,(%esp)
 81de799:	e8 82 d1 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81de79e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de7a1:	83 c0 0c             	add    $0xc,%eax
 81de7a4:	89 04 24             	mov    %eax,(%esp)
 81de7a7:	e8 68 f0 ef ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81de7ac:	85 c0                	test   %eax,%eax
 81de7ae:	0f 95 c0             	setne  %al
 81de7b1:	84 c0                	test   %al,%al
 81de7b3:	0f 84 8c 00 00 00    	je     81de845 <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0x119>
 81de7b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de7bc:	8d 50 0c             	lea    0xc(%eax),%edx
 81de7bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81de7c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81de7c6:	89 04 24             	mov    %eax,(%esp)
 81de7c9:	e8 e4 ed ef ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 81de7ce:	83 ec 04             	sub    $0x4,%esp
 81de7d1:	eb 44                	jmp    81de817 <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0xeb>
 81de7d3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81de7d6:	89 04 24             	mov    %eax,(%esp)
 81de7d9:	e8 10 35 f3 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 81de7de:	8b 00                	mov    (%eax),%eax
 81de7e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de7e4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de7e7:	89 04 24             	mov    %eax,(%esp)
 81de7ea:	e8 4d d1 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81de7ef:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81de7f2:	89 04 24             	mov    %eax,(%esp)
 81de7f5:	e8 f4 34 f3 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 81de7fa:	8b 40 04             	mov    0x4(%eax),%eax
 81de7fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de801:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de804:	89 04 24             	mov    %eax,(%esp)
 81de807:	e8 30 d1 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81de80c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81de80f:	89 04 24             	mov    %eax,(%esp)
 81de812:	e8 f3 29 f3 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 81de817:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de81a:	8d 50 0c             	lea    0xc(%eax),%edx
 81de81d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81de820:	89 54 24 04          	mov    %edx,0x4(%esp)
 81de824:	89 04 24             	mov    %eax,(%esp)
 81de827:	e8 aa ed ef ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 81de82c:	83 ec 04             	sub    $0x4,%esp
 81de82f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81de832:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de836:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81de839:	89 04 24             	mov    %eax,(%esp)
 81de83c:	e8 9d 29 f3 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81de841:	84 c0                	test   %al,%al
 81de843:	75 8e                	jne    81de7d3 <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0xa7>
 81de845:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de848:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 81de84c:	0f b6 c0             	movzbl %al,%eax
 81de84f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de853:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de856:	89 04 24             	mov    %eax,(%esp)
 81de859:	e8 c2 d0 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81de85e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de861:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 81de865:	84 c0                	test   %al,%al
 81de867:	0f 84 15 01 00 00    	je     81de982 <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0x256>
 81de86d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de870:	8d 50 18             	lea    0x18(%eax),%edx
 81de873:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de876:	89 54 24 04          	mov    %edx,0x4(%esp)
 81de87a:	89 04 24             	mov    %eax,(%esp)
 81de87d:	e8 c6 f9 ea ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 81de882:	83 ec 04             	sub    $0x4,%esp
 81de885:	e9 9c 00 00 00       	jmp    81de926 <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0x1fa>
 81de88a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de88d:	89 04 24             	mov    %eax,(%esp)
 81de890:	e8 37 ff ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81de895:	8b 00                	mov    (%eax),%eax
 81de897:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de89b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de89e:	89 04 24             	mov    %eax,(%esp)
 81de8a1:	e8 fe b5 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81de8a6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de8a9:	89 04 24             	mov    %eax,(%esp)
 81de8ac:	e8 db c0 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81de8b1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de8b4:	89 04 24             	mov    %eax,(%esp)
 81de8b7:	e8 10 ff ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81de8bc:	8b 00                	mov    (%eax),%eax
 81de8be:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de8c2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de8c5:	89 04 24             	mov    %eax,(%esp)
 81de8c8:	e8 6f d0 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81de8cd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de8d0:	89 04 24             	mov    %eax,(%esp)
 81de8d3:	e8 b4 c0 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81de8d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de8db:	89 04 24             	mov    %eax,(%esp)
 81de8de:	e8 e9 fe ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81de8e3:	8b 00                	mov    (%eax),%eax
 81de8e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de8e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de8ec:	89 04 24             	mov    %eax,(%esp)
 81de8ef:	e8 48 d0 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81de8f4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de8f7:	89 04 24             	mov    %eax,(%esp)
 81de8fa:	e8 8d c0 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81de8ff:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de902:	89 04 24             	mov    %eax,(%esp)
 81de905:	e8 c2 fe ea ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 81de90a:	8b 00                	mov    (%eax),%eax
 81de90c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de910:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de913:	89 04 24             	mov    %eax,(%esp)
 81de916:	e8 89 b5 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81de91b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de91e:	89 04 24             	mov    %eax,(%esp)
 81de921:	e8 66 c0 f0 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 81de926:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de929:	8d 50 18             	lea    0x18(%eax),%edx
 81de92c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81de92f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81de933:	89 04 24             	mov    %eax,(%esp)
 81de936:	e8 31 f9 ea ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81de93b:	83 ec 04             	sub    $0x4,%esp
 81de93e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81de941:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de945:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81de948:	89 04 24             	mov    %eax,(%esp)
 81de94b:	e8 12 bb f0 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 81de950:	84 c0                	test   %al,%al
 81de952:	0f 85 32 ff ff ff    	jne    81de88a <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0x15e>
 81de958:	eb 28                	jmp    81de982 <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0x256>
 81de95a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81de961:	00 
 81de962:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de965:	89 04 24             	mov    %eax,(%esp)
 81de968:	e8 b3 cf ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81de96d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81de970:	8b 40 04             	mov    0x4(%eax),%eax
 81de973:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de977:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de97a:	89 04 24             	mov    %eax,(%esp)
 81de97d:	e8 9e cf ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81de982:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81de989:	00 
 81de98a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de98d:	89 04 24             	mov    %eax,(%esp)
 81de990:	e8 c3 cf ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81de995:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de998:	89 44 24 04          	mov    %eax,0x4(%esp)
 81de99c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81de99f:	89 04 24             	mov    %eax,(%esp)
 81de9a2:	e8 13 9c 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81de9a7:	eb 1b                	jmp    81de9c4 <_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase+0x298>
 81de9a9:	89 d3                	mov    %edx,%ebx
 81de9ab:	89 c6                	mov    %eax,%esi
 81de9ad:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de9b0:	89 04 24             	mov    %eax,(%esp)
 81de9b3:	e8 c8 f4 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81de9b8:	89 f0                	mov    %esi,%eax
 81de9ba:	89 da                	mov    %ebx,%edx
 81de9bc:	89 04 24             	mov    %eax,(%esp)
 81de9bf:	e8 8c 4d 90 00       	call   8ae3750 <_Unwind_Resume>
 81de9c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81de9c7:	89 04 24             	mov    %eax,(%esp)
 81de9ca:	e8 b1 f4 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81de9cf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81de9d2:	83 c4 00             	add    $0x0,%esp
 81de9d5:	5b                   	pop    %ebx
 81de9d6:	5e                   	pop    %esi
 81de9d7:	5d                   	pop    %ebp
 81de9d8:	c3                   	ret
 81de9d9:	90                   	nop

```

```c
// Dispatcher_Exchange_Random_Item_Reward::send @ 0x81de72c

/* Dispatcher_Exchange_Random_Item_Reward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Exchange_Random_Item_Reward::send
          (Dispatcher_Exchange_Random_Item_Reward *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_2c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  PacketGuard local_24 [12];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081de75b to 081de9a6 has its CatchHandler @ 081de9a9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1c1);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_10 + 0xc));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,iVar2);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_10 + 0xc));
    if (iVar2 != 0) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar1 = __gnu_cxx::operator!=(local_28,local_18);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_28);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar3);
        iVar2 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_28);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(iVar2 + 4));
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_28);
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(byte)local_10[9]);
    if (local_10[9] != (ParamBase)0x0) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_2c,local_14);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(param_1,local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

