# Dispatcher_Shop_Coin_Event

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ea622 Dispatcher_Shop_Coin_Event::dispatch_sig  [0x081ea622-0x81ea8ff] ===
 81ea622:	55                   	push   %ebp
 81ea623:	89 e5                	mov    %esp,%ebp
 81ea625:	56                   	push   %esi
 81ea626:	53                   	push   %ebx
 81ea627:	83 ec 40             	sub    $0x40,%esp
 81ea62a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea62d:	89 04 24             	mov    %eax,(%esp)
 81ea630:	e8 57 fd ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ea635:	83 f8 02             	cmp    $0x2,%eax
 81ea638:	0f 9e c0             	setle  %al
 81ea63b:	84 c0                	test   %al,%al
 81ea63d:	74 0a                	je     81ea649 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81ea63f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ea644:	e9 ad 02 00 00       	jmp    81ea8f6 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x2d4>
 81ea649:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 81ea650:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81ea655:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81ea65c:	00 
 81ea65d:	89 04 24             	mov    %eax,(%esp)
 81ea660:	e8 33 b3 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81ea665:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ea668:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81ea66c:	74 25                	je     81ea693 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x71>
 81ea66e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ea671:	8b 00                	mov    (%eax),%eax
 81ea673:	83 c0 34             	add    $0x34,%eax
 81ea676:	8b 10                	mov    (%eax),%edx
 81ea678:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ea67b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ea682:	00 
 81ea683:	89 04 24             	mov    %eax,(%esp)
 81ea686:	ff d2                	call   *%edx
 81ea688:	84 c0                	test   %al,%al
 81ea68a:	74 07                	je     81ea693 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x71>
 81ea68c:	b8 01 00 00 00       	mov    $0x1,%eax
 81ea691:	eb 05                	jmp    81ea698 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x76>
 81ea693:	b8 00 00 00 00       	mov    $0x0,%eax
 81ea698:	84 c0                	test   %al,%al
 81ea69a:	74 16                	je     81ea6b2 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x90>
 81ea69c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea6a3:	00 
 81ea6a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ea6a7:	89 04 24             	mov    %eax,(%esp)
 81ea6aa:	e8 67 06 f2 ff       	call   810ad16 <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi>
 81ea6af:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ea6b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea6b5:	89 04 24             	mov    %eax,(%esp)
 81ea6b8:	e8 79 27 f4 ff       	call   812ce36 <_ZNK5CUser22IsHavePremiumAdvantageEv>
 81ea6bd:	84 c0                	test   %al,%al
 81ea6bf:	74 1b                	je     81ea6dc <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0xba>
 81ea6c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea6c4:	89 04 24             	mov    %eax,(%esp)
 81ea6c7:	e8 5c 27 f4 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 81ea6cc:	89 04 24             	mov    %eax,(%esp)
 81ea6cf:	e8 ea 3d 04 00       	call   822e4be <_ZNK8WongWork12CUserPremium16GetAdvantageCoinEv>
 81ea6d4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81ea6d7:	01 d0                	add    %edx,%eax
 81ea6d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ea6dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea6df:	89 04 24             	mov    %eax,(%esp)
 81ea6e2:	e8 97 fb ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ea6e7:	89 04 24             	mov    %eax,(%esp)
 81ea6ea:	e8 9b 2f 04 00       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 81ea6ef:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81ea6f2:	7d 0f                	jge    81ea703 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0xe1>
 81ea6f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea6f7:	89 04 24             	mov    %eax,(%esp)
 81ea6fa:	e8 17 51 04 00       	call   822f816 <_ZN15CUserCharacInfo11GetOpencoinEv>
 81ea6ff:	3c 01                	cmp    $0x1,%al
 81ea701:	75 07                	jne    81ea70a <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0xe8>
 81ea703:	b8 01 00 00 00       	mov    $0x1,%eax
 81ea708:	eb 05                	jmp    81ea70f <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0xed>
 81ea70a:	b8 00 00 00 00       	mov    $0x0,%eax
 81ea70f:	84 c0                	test   %al,%al
 81ea711:	0f 84 b4 00 00 00    	je     81ea7cb <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x1a9>
 81ea717:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea71a:	89 04 24             	mov    %eax,(%esp)
 81ea71d:	e8 2a 36 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ea722:	c7 44 24 08 d2 00 00 	movl   $0xd2,0x8(%esp)
 81ea729:	00 
 81ea72a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea731:	00 
 81ea732:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea735:	89 04 24             	mov    %eax,(%esp)
 81ea738:	e8 bf 11 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ea73d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea744:	00 
 81ea745:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea748:	89 04 24             	mov    %eax,(%esp)
 81ea74b:	e8 d0 11 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ea750:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ea757:	00 
 81ea758:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea75b:	89 04 24             	mov    %eax,(%esp)
 81ea75e:	e8 bd 11 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ea763:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea76a:	00 
 81ea76b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea76e:	89 04 24             	mov    %eax,(%esp)
 81ea771:	e8 e2 11 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ea776:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea779:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea77d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea780:	89 04 24             	mov    %eax,(%esp)
 81ea783:	e8 32 de 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ea788:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea78b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea792:	00 
 81ea793:	89 04 24             	mov    %eax,(%esp)
 81ea796:	e8 35 50 04 00       	call   822f7d0 <_ZN15CUserCharacInfo11SetOpencoinEc>
 81ea79b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ea7a0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea7a3:	89 04 24             	mov    %eax,(%esp)
 81ea7a6:	e8 d5 36 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ea7ab:	e9 46 01 00 00       	jmp    81ea8f6 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x2d4>
 81ea7b0:	89 d3                	mov    %edx,%ebx
 81ea7b2:	89 c6                	mov    %eax,%esi
 81ea7b4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ea7b7:	89 04 24             	mov    %eax,(%esp)
 81ea7ba:	e8 c1 36 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ea7bf:	89 f0                	mov    %esi,%eax
 81ea7c1:	89 da                	mov    %ebx,%edx
 81ea7c3:	89 04 24             	mov    %eax,(%esp)
 81ea7c6:	e8 85 8f 8f 00       	call   8ae3750 <_Unwind_Resume>
 81ea7cb:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81ea7ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea7d1:	89 04 24             	mov    %eax,(%esp)
 81ea7d4:	e8 a5 fa ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ea7d9:	89 04 24             	mov    %eax,(%esp)
 81ea7dc:	e8 a9 2e 04 00       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 81ea7e1:	89 da                	mov    %ebx,%edx
 81ea7e3:	29 c2                	sub    %eax,%edx
 81ea7e5:	89 d0                	mov    %edx,%eax
 81ea7e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ea7ea:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81ea7ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea7f0:	89 04 24             	mov    %eax,(%esp)
 81ea7f3:	e8 96 fa ee ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81ea7f8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ea7fc:	89 04 24             	mov    %eax,(%esp)
 81ea7ff:	e8 78 2e 04 00       	call   822d67c <_ZN10CInventory7SetCoinEj>
 81ea804:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea807:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea80e:	00 
 81ea80f:	89 04 24             	mov    %eax,(%esp)
 81ea812:	e8 b9 4f 04 00       	call   822f7d0 <_ZN15CUserCharacInfo11SetOpencoinEc>
 81ea817:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea81a:	89 04 24             	mov    %eax,(%esp)
 81ea81d:	e8 5c fa ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ea822:	89 04 24             	mov    %eax,(%esp)
 81ea825:	e8 60 2e 04 00       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 81ea82a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ea82d:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 81ea833:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 81ea83a:	00 
 81ea83b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ea83e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ea842:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea846:	89 0c 24             	mov    %ecx,(%esp)
 81ea849:	e8 42 93 49 00       	call   8683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>
 81ea84e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea851:	89 04 24             	mov    %eax,(%esp)
 81ea854:	e8 f3 34 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ea859:	c7 44 24 08 d2 00 00 	movl   $0xd2,0x8(%esp)
 81ea860:	00 
 81ea861:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea868:	00 
 81ea869:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea86c:	89 04 24             	mov    %eax,(%esp)
 81ea86f:	e8 88 10 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ea874:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea87b:	00 
 81ea87c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea87f:	89 04 24             	mov    %eax,(%esp)
 81ea882:	e8 99 10 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ea887:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ea88a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea88e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea891:	89 04 24             	mov    %eax,(%esp)
 81ea894:	e8 87 10 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ea899:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ea8a0:	00 
 81ea8a1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea8a4:	89 04 24             	mov    %eax,(%esp)
 81ea8a7:	e8 ac 10 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ea8ac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea8af:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea8b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea8b6:	89 04 24             	mov    %eax,(%esp)
 81ea8b9:	e8 fc dc 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ea8be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea8c1:	89 04 24             	mov    %eax,(%esp)
 81ea8c4:	e8 3f bf 46 00       	call   8656808 <_ZN5CUser8SendCoinEv>
 81ea8c9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ea8ce:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea8d1:	89 04 24             	mov    %eax,(%esp)
 81ea8d4:	e8 a7 35 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ea8d9:	eb 1b                	jmp    81ea8f6 <_ZN26Dispatcher_Shop_Coin_Event12dispatch_sigEP5CUserR9PacketBuf+0x2d4>
 81ea8db:	89 d3                	mov    %edx,%ebx
 81ea8dd:	89 c6                	mov    %eax,%esi
 81ea8df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ea8e2:	89 04 24             	mov    %eax,(%esp)
 81ea8e5:	e8 96 35 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ea8ea:	89 f0                	mov    %esi,%eax
 81ea8ec:	89 da                	mov    %ebx,%edx
 81ea8ee:	89 04 24             	mov    %eax,(%esp)
 81ea8f1:	e8 5a 8e 8f 00       	call   8ae3750 <_Unwind_Resume>
 81ea8f6:	89 d8                	mov    %ebx,%eax
 81ea8f8:	83 c4 40             	add    $0x40,%esp
 81ea8fb:	5b                   	pop    %ebx
 81ea8fc:	5e                   	pop    %esi
 81ea8fd:	5d                   	pop    %ebp
 81ea8fe:	c3                   	ret
 81ea8ff:	90                   	nop

```

```c
// Dispatcher_Shop_Coin_Event::dispatch_sig @ 0x81ea622

/* Dispatcher_Shop_Coin_Event::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Shop_Coin_Event::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  CUserPremium *this;
  CInventory *pCVar6;
  undefined4 uVar7;
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  uint local_18;
  CCoinEventPerDay *local_14;
  int local_10;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (2 < iVar5) {
    local_18 = 1;
    local_14 = (CCoinEventPerDay *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,4);
    if ((local_14 == (CCoinEventPerDay *)0x0) ||
       (cVar4 = (**(code **)(*(int *)local_14 + 0x34))(local_14,0), cVar4 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = CCoinEventPerDay::GetCoinNoPerDay(local_14,1);
    }
    cVar4 = CUser::IsHavePremiumAdvantage((CUser *)param_2);
    if (cVar4 != '\0') {
      this = (CUserPremium *)CUser::GetPremiumInfo((CUser *)param_2);
      iVar5 = WongWork::CUserPremium::GetAdvantageCoin(this);
      local_18 = iVar5 + local_18;
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    iVar5 = CInventory::GetCoin(pCVar6);
    if ((iVar5 < (int)local_18) &&
       (cVar4 = CUserCharacInfo::GetOpencoin((CUserCharacInfo *)param_2), cVar4 != '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar2 = local_18;
    if (bVar1) {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081ea738 to 081ea787 has its CatchHandler @ 081ea7b0 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xd2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      CUserCharacInfo::SetOpencoin((CUserCharacInfo *)param_2,'\x01');
      PacketGuard::~PacketGuard(local_30);
    }
    else {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      local_10 = CInventory::GetCoin(pCVar6);
      uVar3 = local_18;
      local_10 = uVar2 - local_10;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      CInventory::SetCoin(pCVar6,uVar3);
      CUserCharacInfo::SetOpencoin((CUserCharacInfo *)param_2,'\x01');
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      uVar7 = CInventory::GetCoin(pCVar6);
      cUserHistoryLog::CoinAdd((cUserHistoryLog *)(param_2 + 0x79700),uVar7,local_10,4);
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081ea86f to 081ea8c8 has its CatchHandler @ 081ea8db */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      CUser::SendCoin((CUser *)param_2);
      PacketGuard::~PacketGuard(local_24);
    }
  }
  return 0;
}

```

