# ARAD__ARAD_ITEM

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## arad_make_item

```asm
// === 08197375 ARAD::ARAD_ITEM::arad_make_item  [0x08197375-0x81973f9] ===
 8197375:	55                   	push   %ebp
 8197376:	89 e5                	mov    %esp,%ebp
 8197378:	53                   	push   %ebx
 8197379:	83 ec 24             	sub    $0x24,%esp
 819737c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8197380:	74 0c                	je     819738e <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item+0x19>
 8197382:	83 7d 08 ff          	cmpl   $0xffffffff,0x8(%ebp)
 8197386:	74 06                	je     819738e <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item+0x19>
 8197388:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819738c:	75 07                	jne    8197395 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item+0x20>
 819738e:	b8 00 00 00 00       	mov    $0x0,%eax
 8197393:	eb 5f                	jmp    81973f4 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item+0x7f>
 8197395:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8197398:	e8 fe 4d f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819739d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81973a1:	89 04 24             	mov    %eax,(%esp)
 81973a4:	e8 89 86 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81973a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81973ac:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81973b0:	75 07                	jne    81973b9 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item+0x44>
 81973b2:	b8 00 00 00 00       	mov    $0x0,%eax
 81973b7:	eb 3b                	jmp    81973f4 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item+0x7f>
 81973b9:	8b 45 10             	mov    0x10(%ebp),%eax
 81973bc:	89 04 24             	mov    %eax,(%esp)
 81973bf:	e8 14 44 f3 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 81973c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81973c7:	8b 00                	mov    (%eax),%eax
 81973c9:	83 c0 08             	add    $0x8,%eax
 81973cc:	8b 10                	mov    (%eax),%edx
 81973ce:	8b 45 10             	mov    0x10(%ebp),%eax
 81973d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81973d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81973d8:	89 04 24             	mov    %eax,(%esp)
 81973db:	ff d2                	call   *%edx
 81973dd:	8b 45 10             	mov    0x10(%ebp),%eax
 81973e0:	8b 55 08             	mov    0x8(%ebp),%edx
 81973e3:	89 50 02             	mov    %edx,0x2(%eax)
 81973e6:	8b 45 10             	mov    0x10(%ebp),%eax
 81973e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 81973ec:	89 50 07             	mov    %edx,0x7(%eax)
 81973ef:	b8 01 00 00 00       	mov    $0x1,%eax
 81973f4:	83 c4 24             	add    $0x24,%esp
 81973f7:	5b                   	pop    %ebx
 81973f8:	5d                   	pop    %ebp
 81973f9:	c3                   	ret

```

```c
// ARAD::ARAD_ITEM::arad_make_item @ 0x8197375

/* ARAD::ARAD_ITEM::arad_make_item(unsigned long, int, Inven_Item&) */

undefined4 ARAD::ARAD_ITEM::arad_make_item(ulong param_1,int param_2,Inven_Item *param_3)

{
  undefined4 uVar1;
  CDataManager *this;
  int *piVar2;
  
  if (((param_1 == 0) || (param_1 == 0xffffffff)) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    this = (CDataManager *)G_CDataManager();
    piVar2 = (int *)CDataManager::find_item(this,param_1);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      Inven_Item::reset(param_3);
      (**(code **)(*piVar2 + 8))(piVar2,param_3);
      *(ulong *)(param_3 + 2) = param_1;
      *(int *)(param_3 + 7) = param_2;
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## arad_process_item

```asm
// === 081973fa ARAD::ARAD_ITEM::arad_process_item  [0x081973fa-0x819763b] ===
 81973fa:	55                   	push   %ebp
 81973fb:	89 e5                	mov    %esp,%ebp
 81973fd:	56                   	push   %esi
 81973fe:	53                   	push   %ebx
 81973ff:	83 c4 80             	add    $0xffffff80,%esp
 8197402:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8197406:	74 0a                	je     8197412 <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x18>
 8197408:	8b 45 0c             	mov    0xc(%ebp),%eax
 819740b:	8b 40 02             	mov    0x2(%eax),%eax
 819740e:	85 c0                	test   %eax,%eax
 8197410:	75 0a                	jne    819741c <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x22>
 8197412:	bb 00 00 00 00       	mov    $0x0,%ebx
 8197417:	e9 17 02 00 00       	jmp    8197633 <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x239>
 819741c:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 8197423:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 819742a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819742d:	89 04 24             	mov    %eax,(%esp)
 8197430:	e8 5d 38 fb ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8197435:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 819743c:	e8 5d 48 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8197441:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8197444:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197447:	8b 40 02             	mov    0x2(%eax),%eax
 819744a:	89 c3                	mov    %eax,%ebx
 819744c:	e8 4a 4d f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8197451:	8b 40 0c             	mov    0xc(%eax),%eax
 8197454:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8197458:	89 04 24             	mov    %eax,(%esp)
 819745b:	e8 ac 2c fe ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8197460:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8197463:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8197466:	89 04 24             	mov    %eax,(%esp)
 8197469:	e8 d6 2d fe ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 819746e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197471:	8b 40 02             	mov    0x2(%eax),%eax
 8197474:	89 c2                	mov    %eax,%edx
 8197476:	a1 44 f7 41 09       	mov    0x941f744,%eax
 819747b:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 8197482:	00 
 8197483:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 819748a:	00 
 819748b:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8197492:	00 
 8197493:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 819749a:	00 
 819749b:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 819749e:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81974a2:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 81974a5:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81974a9:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 81974b0:	00 
 81974b1:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81974b4:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81974b8:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 81974bb:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81974bf:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81974c2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81974c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81974ca:	8b 55 08             	mov    0x8(%ebp),%edx
 81974cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81974d1:	89 04 24             	mov    %eax,(%esp)
 81974d4:	e8 a5 e3 18 00       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 81974d9:	83 f0 01             	xor    $0x1,%eax
 81974dc:	84 c0                	test   %al,%al
 81974de:	0f 84 aa 00 00 00    	je     819758e <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x194>
 81974e4:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 81974e8:	74 32                	je     819751c <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x122>
 81974ea:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81974ed:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81974f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81974f8:	00 
 81974f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8197500:	00 
 8197501:	8b 45 08             	mov    0x8(%ebp),%eax
 8197504:	89 04 24             	mov    %eax,(%esp)
 8197507:	e8 4e 51 4e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 819750c:	8b 45 08             	mov    0x8(%ebp),%eax
 819750f:	89 04 24             	mov    %eax,(%esp)
 8197512:	e8 3b 89 4b 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 8197517:	e9 c8 00 00 00       	jmp    81975e4 <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x1ea>
 819751c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8197523:	00 
 8197524:	c7 44 24 08 81 cb b9 	movl   $0x8b9cb81,0x8(%esp)
 819752b:	08 
 819752c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8197533:	00 
 8197534:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 819753b:	e8 be e2 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8197540:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8197543:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8197546:	89 04 24             	mov    %eax,(%esp)
 8197549:	e8 62 6e ee ff       	call   807e3b0 <strlen@plt>
 819754e:	89 c3                	mov    %eax,%ebx
 8197550:	8b 45 08             	mov    0x8(%ebp),%eax
 8197553:	89 04 24             	mov    %eax,(%esp)
 8197556:	e8 f3 46 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 819755b:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 819755f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8197562:	89 54 24 14          	mov    %edx,0x14(%esp)
 8197566:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 819756d:	00 
 819756e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8197572:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8197579:	00 
 819757a:	8b 45 0c             	mov    0xc(%ebp),%eax
 819757d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197581:	8b 45 08             	mov    0x8(%ebp),%eax
 8197584:	89 04 24             	mov    %eax,(%esp)
 8197587:	e8 3c e5 3b 00       	call   8555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>
 819758c:	eb 56                	jmp    81975e4 <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x1ea>
 819758e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197591:	8b 70 07             	mov    0x7(%eax),%esi
 8197594:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197597:	8b 58 02             	mov    0x2(%eax),%ebx
 819759a:	8b 45 08             	mov    0x8(%ebp),%eax
 819759d:	89 04 24             	mov    %eax,(%esp)
 81975a0:	e8 a9 46 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81975a5:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81975a9:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81975ad:	89 44 24 14          	mov    %eax,0x14(%esp)
 81975b1:	c7 44 24 10 98 cb b9 	movl   $0x8b9cb98,0x10(%esp)
 81975b8:	08 
 81975b9:	c7 44 24 0c 87 01 00 	movl   $0x187,0xc(%esp)
 81975c0:	00 
 81975c1:	c7 44 24 08 00 da b9 	movl   $0x8b9da00,0x8(%esp)
 81975c8:	08 
 81975c9:	c7 44 24 04 60 cb b9 	movl   $0x8b9cb60,0x4(%esp)
 81975d0:	08 
 81975d1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81975d8:	e8 2d c6 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81975dd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81975e2:	eb 1c                	jmp    8197600 <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x206>
 81975e4:	bb 01 00 00 00       	mov    $0x1,%ebx
 81975e9:	eb 15                	jmp    8197600 <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x206>
 81975eb:	89 d3                	mov    %edx,%ebx
 81975ed:	89 c6                	mov    %eax,%esi
 81975ef:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81975f2:	89 04 24             	mov    %eax,(%esp)
 81975f5:	e8 02 2d fe ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 81975fa:	89 f0                	mov    %esi,%eax
 81975fc:	89 da                	mov    %ebx,%edx
 81975fe:	eb 0d                	jmp    819760d <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x213>
 8197600:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8197603:	89 04 24             	mov    %eax,(%esp)
 8197606:	e8 f1 2c fe ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 819760b:	eb 1b                	jmp    8197628 <_ZN4ARAD9ARAD_ITEM17arad_process_itemEP5CUserRK10Inven_Item+0x22e>
 819760d:	89 d3                	mov    %edx,%ebx
 819760f:	89 c6                	mov    %eax,%esi
 8197611:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8197614:	89 04 24             	mov    %eax,(%esp)
 8197617:	e8 8a 36 fb ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 819761c:	89 f0                	mov    %esi,%eax
 819761e:	89 da                	mov    %ebx,%edx
 8197620:	89 04 24             	mov    %eax,(%esp)
 8197623:	e8 28 c1 94 00       	call   8ae3750 <_Unwind_Resume>
 8197628:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819762b:	89 04 24             	mov    %eax,(%esp)
 819762e:	e8 73 36 fb ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8197633:	89 d8                	mov    %ebx,%eax
 8197635:	83 ec 80             	sub    $0xffffff80,%esp
 8197638:	5b                   	pop    %ebx
 8197639:	5e                   	pop    %esi
 819763a:	5d                   	pop    %ebp
 819763b:	c3                   	ret

```

```c
// ARAD::ARAD_ITEM::arad_process_item @ 0x81973fa

/* ARAD::ARAD_ITEM::arad_process_item(CUser*, Inven_Item const&) */

undefined4 ARAD::ARAD_ITEM::arad_process_item(CUser *param_1,Inven_Item *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  stCeraShopItemParam_t local_44 [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_2c [12];
  int local_20;
  int local_1c;
  long local_18;
  int local_14;
  char *local_10;
  
  if ((param_1 == (CUser *)0x0) || (*(int *)(param_2 + 2) == 0)) {
    uVar8 = 0;
  }
  else {
    local_1c = -1;
    local_20 = 0;
    std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_2c);
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar1 = *(int *)(param_2 + 2);
                    /* try { // try from 0819744c to 0819746d has its CatchHandler @ 0819760d */
    iVar4 = G_CDataManager();
    local_14 = CItemList::GetRestrictCode(*(CItemList **)(iVar4 + 0xc),iVar1);
    WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_44);
                    /* try { // try from 081974d4 to 081975dc has its CatchHandler @ 081975eb */
    cVar3 = WongWork::CCeraShop::ProcessSpecialItem
                      (GlobalData::s_pCeraShop,param_1,*(int *)(param_2 + 2),local_14,&local_20,
                       local_18,true,(vector *)local_2c,local_44,'\0','\0',false,1);
    if (cVar3 == '\x01') {
      uVar8 = *(undefined4 *)(param_2 + 7);
      uVar2 = *(undefined4 *)(param_2 + 2);
      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"localjapan/Arad_Function_Set.cpp",
                 "bool ARAD::ARAD_ITEM::arad_process_item(CUser*, const Inven_Item&)",0x187,
                 "Error process Item (charac:%u, item:%u, count:%d)",uVar7,uVar2,uVar8);
      uVar8 = 0;
    }
    else {
      if (local_1c == -1) {
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_104",(bool *)0x0);
        sVar5 = strlen(local_10);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewMail(param_1,param_2,0,uVar6,true,local_10,sVar5);
      }
      else {
        CUser::SendUpdateItemList(param_1,1,0,local_1c);
        CUser::SaveInventory(param_1);
      }
      uVar8 = 1;
    }
                    /* try { // try from 08197606 to 0819760a has its CatchHandler @ 0819760d */
    WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_44);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_2c);
  }
  return uVar8;
}

```

---

## arad_secret_shop_event_buff

```asm
// === 08196dd3 ARAD::ARAD_ITEM::arad_secret_shop_event_buff  [0x08196dd3-0x8196ed6] ===
 8196dd3:	55                   	push   %ebp
 8196dd4:	89 e5                	mov    %esp,%ebp
 8196dd6:	56                   	push   %esi
 8196dd7:	53                   	push   %ebx
 8196dd8:	83 ec 20             	sub    $0x20,%esp
 8196ddb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196dde:	89 04 24             	mov    %eax,(%esp)
 8196de1:	e8 66 6f 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8196de6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196de9:	89 04 24             	mov    %eax,(%esp)
 8196dec:	e8 f5 4a f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8196df1:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8196df8:	00 
 8196df9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8196e00:	00 
 8196e01:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196e04:	89 04 24             	mov    %eax,(%esp)
 8196e07:	e8 f0 4a f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8196e0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8196e13:	00 
 8196e14:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196e17:	89 04 24             	mov    %eax,(%esp)
 8196e1a:	e8 01 4b f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8196e1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8196e22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8196e26:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196e29:	89 04 24             	mov    %eax,(%esp)
 8196e2c:	e8 0b 4b f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8196e31:	c7 44 24 04 08 07 00 	movl   $0x708,0x4(%esp)
 8196e38:	00 
 8196e39:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196e3c:	89 04 24             	mov    %eax,(%esp)
 8196e3f:	e8 f8 4a f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8196e44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8196e4b:	00 
 8196e4c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196e4f:	89 04 24             	mov    %eax,(%esp)
 8196e52:	e8 01 4b f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8196e57:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196e5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8196e5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8196e61:	89 04 24             	mov    %eax,(%esp)
 8196e64:	e8 51 17 4b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8196e69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8196e70:	00 
 8196e71:	8b 45 08             	mov    0x8(%ebp),%eax
 8196e74:	89 04 24             	mov    %eax,(%esp)
 8196e77:	e8 42 a5 4e 00       	call   86813be <_ZN5CUser8get_areaEb>
 8196e7c:	89 c3                	mov    %eax,%ebx
 8196e7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8196e81:	89 04 24             	mov    %eax,(%esp)
 8196e84:	e8 db e6 4a 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8196e89:	0f be f0             	movsbl %al,%esi
 8196e8c:	e8 16 35 f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8196e91:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8196e94:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8196e98:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8196e9c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8196ea0:	89 04 24             	mov    %eax,(%esp)
 8196ea3:	e8 c0 12 53 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 8196ea8:	eb 1b                	jmp    8196ec5 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_buffEP5CUserm+0xf2>
 8196eaa:	89 d3                	mov    %edx,%ebx
 8196eac:	89 c6                	mov    %eax,%esi
 8196eae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196eb1:	89 04 24             	mov    %eax,(%esp)
 8196eb4:	e8 c7 6f 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8196eb9:	89 f0                	mov    %esi,%eax
 8196ebb:	89 da                	mov    %ebx,%edx
 8196ebd:	89 04 24             	mov    %eax,(%esp)
 8196ec0:	e8 8b c8 94 00       	call   8ae3750 <_Unwind_Resume>
 8196ec5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8196ec8:	89 04 24             	mov    %eax,(%esp)
 8196ecb:	e8 b0 6f 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8196ed0:	83 c4 20             	add    $0x20,%esp
 8196ed3:	5b                   	pop    %ebx
 8196ed4:	5e                   	pop    %esi
 8196ed5:	5d                   	pop    %ebp
 8196ed6:	c3                   	ret

```

```c
// ARAD::ARAD_ITEM::arad_secret_shop_event_buff @ 0x8196dd3

/* ARAD::ARAD_ITEM::arad_secret_shop_event_buff(CUser*, unsigned long) */

void ARAD::ARAD_ITEM::arad_secret_shop_event_buff(CUser *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08196dec to 08196ea7 has its CatchHandler @ 08196eaa */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x100);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0x708);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  iVar2 = CUser::get_area(param_1,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this,(int)cVar1,iVar2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## arad_secret_shop_event_item

```asm
// === 08196ed7 ARAD::ARAD_ITEM::arad_secret_shop_event_item  [0x08196ed7-0x8197374] ===
 8196ed7:	55                   	push   %ebp
 8196ed8:	89 e5                	mov    %esp,%ebp
 8196eda:	56                   	push   %esi
 8196edb:	53                   	push   %ebx
 8196edc:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 8196ee2:	8b 45 10             	mov    0x10(%ebp),%eax
 8196ee5:	05 68 01 00 00       	add    $0x168,%eax
 8196eea:	89 04 24             	mov    %eax,(%esp)
 8196eed:	e8 b2 10 00 00       	call   8197fa4 <_ZNKSt6vectorI10CRabbitBoxSaIS0_EE5emptyEv>
 8196ef2:	84 c0                	test   %al,%al
 8196ef4:	0f 85 6d 04 00 00    	jne    8197367 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x490>
 8196efa:	8b 45 10             	mov    0x10(%ebp),%eax
 8196efd:	89 04 24             	mov    %eax,(%esp)
 8196f00:	e8 43 9d f7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8196f05:	3d 4b be 28 00       	cmp    $0x28be4b,%eax
 8196f0a:	0f 94 c0             	sete   %al
 8196f0d:	84 c0                	test   %al,%al
 8196f0f:	0f 85 55 04 00 00    	jne    819736a <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x493>
 8196f15:	8b 45 10             	mov    0x10(%ebp),%eax
 8196f18:	89 04 24             	mov    %eax,(%esp)
 8196f1b:	e8 28 9d f7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8196f20:	3d 6a be 28 00       	cmp    $0x28be6a,%eax
 8196f25:	0f 94 c0             	sete   %al
 8196f28:	84 c0                	test   %al,%al
 8196f2a:	0f 84 fa 00 00 00    	je     819702a <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x153>
 8196f30:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196f33:	89 04 24             	mov    %eax,(%esp)
 8196f36:	e8 11 6e 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8196f3b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196f3e:	89 04 24             	mov    %eax,(%esp)
 8196f41:	e8 a0 49 f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8196f46:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8196f4d:	00 
 8196f4e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8196f55:	00 
 8196f56:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196f59:	89 04 24             	mov    %eax,(%esp)
 8196f5c:	e8 9b 49 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8196f61:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8196f68:	00 
 8196f69:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196f6c:	89 04 24             	mov    %eax,(%esp)
 8196f6f:	e8 ac 49 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8196f74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8196f77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8196f7b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196f7e:	89 04 24             	mov    %eax,(%esp)
 8196f81:	e8 b6 49 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8196f86:	c7 44 24 04 08 07 00 	movl   $0x708,0x4(%esp)
 8196f8d:	00 
 8196f8e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196f91:	89 04 24             	mov    %eax,(%esp)
 8196f94:	e8 a3 49 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8196f99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8196fa0:	00 
 8196fa1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196fa4:	89 04 24             	mov    %eax,(%esp)
 8196fa7:	e8 ac 49 f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8196fac:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8196faf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8196fb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8196fb6:	89 04 24             	mov    %eax,(%esp)
 8196fb9:	e8 fc 15 4b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8196fbe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8196fc5:	00 
 8196fc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8196fc9:	89 04 24             	mov    %eax,(%esp)
 8196fcc:	e8 ed a3 4e 00       	call   86813be <_ZN5CUser8get_areaEb>
 8196fd1:	89 c3                	mov    %eax,%ebx
 8196fd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8196fd6:	89 04 24             	mov    %eax,(%esp)
 8196fd9:	e8 86 e5 4a 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8196fde:	0f be f0             	movsbl %al,%esi
 8196fe1:	e8 c1 33 f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8196fe6:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8196fe9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8196fed:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8196ff1:	89 74 24 04          	mov    %esi,0x4(%esp)
 8196ff5:	89 04 24             	mov    %eax,(%esp)
 8196ff8:	e8 6b 11 53 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 8196ffd:	eb 1b                	jmp    819701a <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x143>
 8196fff:	89 d3                	mov    %edx,%ebx
 8197001:	89 c6                	mov    %eax,%esi
 8197003:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8197006:	89 04 24             	mov    %eax,(%esp)
 8197009:	e8 72 6e 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819700e:	89 f0                	mov    %esi,%eax
 8197010:	89 da                	mov    %ebx,%edx
 8197012:	89 04 24             	mov    %eax,(%esp)
 8197015:	e8 36 c7 94 00       	call   8ae3750 <_Unwind_Resume>
 819701a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 819701d:	89 04 24             	mov    %eax,(%esp)
 8197020:	e8 5b 6e 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8197025:	e9 41 03 00 00       	jmp    819736b <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x494>
 819702a:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 8197031:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8197034:	89 04 24             	mov    %eax,(%esp)
 8197037:	e8 e2 0d 00 00       	call   8197e1e <_ZN10CRabbitBoxC1Ev>
 819703c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819703f:	89 04 24             	mov    %eax,(%esp)
 8197042:	e8 a1 0f 00 00       	call   8197fe8 <_ZN9__gnu_cxx17__normal_iteratorIP10CRabbitBoxSt6vectorIS1_SaIS1_EEEC1Ev>
 8197047:	8b 45 10             	mov    0x10(%ebp),%eax
 819704a:	8d 90 68 01 00 00    	lea    0x168(%eax),%edx
 8197050:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8197056:	89 54 24 04          	mov    %edx,0x4(%esp)
 819705a:	89 04 24             	mov    %eax,(%esp)
 819705d:	e8 94 0f 00 00       	call   8197ff6 <_ZNSt6vectorI10CRabbitBoxSaIS0_EE5beginEv>
 8197062:	83 ec 04             	sub    $0x4,%esp
 8197065:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 819706b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 819706e:	e9 b8 01 00 00       	jmp    819722b <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x354>
 8197073:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8197076:	89 04 24             	mov    %eax,(%esp)
 8197079:	e8 04 10 00 00       	call   8198082 <_ZNK9__gnu_cxx17__normal_iteratorIP10CRabbitBoxSt6vectorIS1_SaIS1_EEEdeEv>
 819707e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197082:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8197085:	89 04 24             	mov    %eax,(%esp)
 8197088:	e8 35 0e 00 00       	call   8197ec2 <_ZN10CRabbitBoxaSERKS_>
 819708d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8197090:	89 04 24             	mov    %eax,(%esp)
 8197093:	e8 06 0e 00 00       	call   8197e9e <_ZNK10CRabbitBox12getItemIndexEv>
 8197098:	89 c3                	mov    %eax,%ebx
 819709a:	e8 fc 50 f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819709f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81970a3:	89 04 24             	mov    %eax,(%esp)
 81970a6:	e8 87 89 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81970ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81970ae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81970b2:	0f 84 67 01 00 00    	je     819721f <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x348>
 81970b8:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 81970be:	89 04 24             	mov    %eax,(%esp)
 81970c1:	e8 8e 47 f3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81970c6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81970c9:	89 04 24             	mov    %eax,(%esp)
 81970cc:	e8 cd 0d 00 00       	call   8197e9e <_ZNK10CRabbitBox12getItemIndexEv>
 81970d1:	89 45 81             	mov    %eax,-0x7f(%ebp)
 81970d4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81970d7:	89 04 24             	mov    %eax,(%esp)
 81970da:	e8 cb 0d 00 00       	call   8197eaa <_ZNK10CRabbitBox12getItemCountEv>
 81970df:	89 45 86             	mov    %eax,-0x7a(%ebp)
 81970e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81970e5:	8b 00                	mov    (%eax),%eax
 81970e7:	83 c0 08             	add    $0x8,%eax
 81970ea:	8b 10                	mov    (%eax),%edx
 81970ec:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 81970f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81970f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81970f9:	89 04 24             	mov    %eax,(%esp)
 81970fc:	ff d2                	call   *%edx
 81970fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8197101:	89 04 24             	mov    %eax,(%esp)
 8197104:	e8 85 31 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8197109:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8197110:	00 
 8197111:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8197118:	00 
 8197119:	c7 44 24 44 0d 00 00 	movl   $0xd,0x44(%esp)
 8197120:	00 
 8197121:	8b 95 7f ff ff ff    	mov    -0x81(%ebp),%edx
 8197127:	89 54 24 04          	mov    %edx,0x4(%esp)
 819712b:	8b 55 83             	mov    -0x7d(%ebp),%edx
 819712e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8197132:	8b 55 87             	mov    -0x79(%ebp),%edx
 8197135:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8197139:	8b 55 8b             	mov    -0x75(%ebp),%edx
 819713c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8197140:	8b 55 8f             	mov    -0x71(%ebp),%edx
 8197143:	89 54 24 14          	mov    %edx,0x14(%esp)
 8197147:	8b 55 93             	mov    -0x6d(%ebp),%edx
 819714a:	89 54 24 18          	mov    %edx,0x18(%esp)
 819714e:	8b 55 97             	mov    -0x69(%ebp),%edx
 8197151:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8197155:	8b 55 9b             	mov    -0x65(%ebp),%edx
 8197158:	89 54 24 20          	mov    %edx,0x20(%esp)
 819715c:	8b 55 9f             	mov    -0x61(%ebp),%edx
 819715f:	89 54 24 24          	mov    %edx,0x24(%esp)
 8197163:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 8197166:	89 54 24 28          	mov    %edx,0x28(%esp)
 819716a:	8b 55 a7             	mov    -0x59(%ebp),%edx
 819716d:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8197171:	8b 55 ab             	mov    -0x55(%ebp),%edx
 8197174:	89 54 24 30          	mov    %edx,0x30(%esp)
 8197178:	8b 55 af             	mov    -0x51(%ebp),%edx
 819717b:	89 54 24 34          	mov    %edx,0x34(%esp)
 819717f:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8197182:	89 54 24 38          	mov    %edx,0x38(%esp)
 8197186:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8197189:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 819718d:	0f b6 55 bb          	movzbl -0x45(%ebp),%edx
 8197191:	88 54 24 40          	mov    %dl,0x40(%esp)
 8197195:	89 04 24             	mov    %eax,(%esp)
 8197198:	e8 e9 bb 36 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 819719d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81971a0:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 81971a4:	0f 95 c0             	setne  %al
 81971a7:	84 c0                	test   %al,%al
 81971a9:	74 2e                	je     81971d9 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x302>
 81971ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81971ae:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81971b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81971b9:	00 
 81971ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81971c1:	00 
 81971c2:	8b 45 08             	mov    0x8(%ebp),%eax
 81971c5:	89 04 24             	mov    %eax,(%esp)
 81971c8:	e8 8d 54 4e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81971cd:	83 f0 01             	xor    $0x1,%eax
 81971d0:	84 c0                	test   %al,%al
 81971d2:	74 4c                	je     8197220 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x349>
 81971d4:	e9 81 01 00 00       	jmp    819735a <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x483>
 81971d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81971dc:	89 04 24             	mov    %eax,(%esp)
 81971df:	e8 6a 4a f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81971e4:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81971eb:	00 
 81971ec:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81971f3:	00 
 81971f4:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81971fb:	00 
 81971fc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8197200:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8197207:	00 
 8197208:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 819720e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8197212:	8b 45 08             	mov    0x8(%ebp),%eax
 8197215:	89 04 24             	mov    %eax,(%esp)
 8197218:	e8 ab e8 3b 00       	call   8555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>
 819721d:	eb 01                	jmp    8197220 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x349>
 819721f:	90                   	nop
 8197220:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8197223:	89 04 24             	mov    %eax,(%esp)
 8197226:	e8 41 0e 00 00       	call   819806c <_ZN9__gnu_cxx17__normal_iteratorIP10CRabbitBoxSt6vectorIS1_SaIS1_EEEppEv>
 819722b:	8b 45 10             	mov    0x10(%ebp),%eax
 819722e:	8d 90 68 01 00 00    	lea    0x168(%eax),%edx
 8197234:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8197237:	89 54 24 04          	mov    %edx,0x4(%esp)
 819723b:	89 04 24             	mov    %eax,(%esp)
 819723e:	e8 d7 0d 00 00       	call   819801a <_ZNSt6vectorI10CRabbitBoxSaIS0_EE3endEv>
 8197243:	83 ec 04             	sub    $0x4,%esp
 8197246:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8197249:	89 44 24 04          	mov    %eax,0x4(%esp)
 819724d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8197250:	89 04 24             	mov    %eax,(%esp)
 8197253:	e8 e8 0d 00 00       	call   8198040 <_ZN9__gnu_cxxneIP10CRabbitBoxSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8197258:	84 c0                	test   %al,%al
 819725a:	0f 85 13 fe ff ff    	jne    8197073 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x19c>
 8197260:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8197263:	89 04 24             	mov    %eax,(%esp)
 8197266:	e8 e1 6a 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 819726b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819726e:	89 04 24             	mov    %eax,(%esp)
 8197271:	e8 70 46 f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8197276:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 819727d:	00 
 819727e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8197285:	00 
 8197286:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8197289:	89 04 24             	mov    %eax,(%esp)
 819728c:	e8 6b 46 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8197291:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8197298:	00 
 8197299:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819729c:	89 04 24             	mov    %eax,(%esp)
 819729f:	e8 7c 46 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81972a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81972a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81972ab:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81972ae:	89 04 24             	mov    %eax,(%esp)
 81972b1:	e8 86 46 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81972b6:	c7 44 24 04 08 07 00 	movl   $0x708,0x4(%esp)
 81972bd:	00 
 81972be:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81972c1:	89 04 24             	mov    %eax,(%esp)
 81972c4:	e8 73 46 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81972c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81972d0:	00 
 81972d1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81972d4:	89 04 24             	mov    %eax,(%esp)
 81972d7:	e8 7c 46 f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81972dc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81972e3:	00 
 81972e4:	8b 45 08             	mov    0x8(%ebp),%eax
 81972e7:	89 04 24             	mov    %eax,(%esp)
 81972ea:	e8 cf a0 4e 00       	call   86813be <_ZN5CUser8get_areaEb>
 81972ef:	89 c3                	mov    %eax,%ebx
 81972f1:	8b 45 08             	mov    0x8(%ebp),%eax
 81972f4:	89 04 24             	mov    %eax,(%esp)
 81972f7:	e8 68 e2 4a 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81972fc:	0f be f0             	movsbl %al,%esi
 81972ff:	e8 a3 30 f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8197304:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8197307:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819730b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819730f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8197313:	89 04 24             	mov    %eax,(%esp)
 8197316:	e8 4d 0e 53 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 819731b:	eb 15                	jmp    8197332 <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x45b>
 819731d:	89 d3                	mov    %edx,%ebx
 819731f:	89 c6                	mov    %eax,%esi
 8197321:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8197324:	89 04 24             	mov    %eax,(%esp)
 8197327:	e8 54 6b 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819732c:	89 f0                	mov    %esi,%eax
 819732e:	89 da                	mov    %ebx,%edx
 8197330:	eb 0d                	jmp    819733f <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x468>
 8197332:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8197335:	89 04 24             	mov    %eax,(%esp)
 8197338:	e8 43 6b 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819733d:	eb 1b                	jmp    819735a <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x483>
 819733f:	89 d3                	mov    %edx,%ebx
 8197341:	89 c6                	mov    %eax,%esi
 8197343:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8197346:	89 04 24             	mov    %eax,(%esp)
 8197349:	e8 0c 0b 00 00       	call   8197e5a <_ZN10CRabbitBoxD1Ev>
 819734e:	89 f0                	mov    %esi,%eax
 8197350:	89 da                	mov    %ebx,%edx
 8197352:	89 04 24             	mov    %eax,(%esp)
 8197355:	e8 f6 c3 94 00       	call   8ae3750 <_Unwind_Resume>
 819735a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819735d:	89 04 24             	mov    %eax,(%esp)
 8197360:	e8 f5 0a 00 00       	call   8197e5a <_ZN10CRabbitBoxD1Ev>
 8197365:	eb 04                	jmp    819736b <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x494>
 8197367:	90                   	nop
 8197368:	eb 01                	jmp    819736b <_ZN4ARAD9ARAD_ITEM27arad_secret_shop_event_itemEP5CUsermP14CStackableItem+0x494>
 819736a:	90                   	nop
 819736b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 819736e:	83 c4 00             	add    $0x0,%esp
 8197371:	5b                   	pop    %ebx
 8197372:	5e                   	pop    %esi
 8197373:	5d                   	pop    %ebp
 8197374:	c3                   	ret

```

```c
// ARAD::ARAD_ITEM::arad_secret_shop_event_item @ 0x8196ed7

/* ARAD::ARAD_ITEM::arad_secret_shop_event_item(CUser*, unsigned long, CStackableItem*) */

void ARAD::ARAD_ITEM::arad_secret_shop_event_item
               (CUser *param_1,ulong param_2,CStackableItem *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  GameWorld *pGVar4;
  CRabbitBox *pCVar5;
  CDataManager *this;
  undefined4 uVar6;
  uint uVar7;
  undefined2 local_85;
  undefined2 uStack_83;
  undefined2 uStack_81;
  undefined1 uStack_7f;
  undefined4 uStack_7e;
  undefined1 uStack_7a;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined1 local_49;
  PacketGuard local_48 [12];
  PacketGuard local_3c [12];
  __normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>> local_30 [4];
  CRabbitBox local_2c [20];
  __normal_iterator local_18 [4];
  int local_14;
  int *local_10;
  
  cVar1 = std::vector<CRabbitBox,std::allocator<CRabbitBox>>::empty();
  if ((cVar1 == '\0') && (iVar3 = CItem::get_index((CItem *)param_3), iVar3 != 0x28be4b)) {
    iVar3 = CItem::get_index((CItem *)param_3);
    if (iVar3 == 0x28be6a) {
      PacketGuard::PacketGuard(local_48);
                    /* try { // try from 08196f41 to 08196ffc has its CatchHandler @ 08196fff */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x100);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,param_2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0x708);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
      CUser::Send(param_1,local_48);
      iVar3 = CUser::get_area(param_1,false);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(pGVar4,(int)cVar1,iVar3,local_48);
      PacketGuard::~PacketGuard(local_48);
    }
    else {
      local_14 = -1;
      CRabbitBox::CRabbitBox(local_2c);
      __gnu_cxx::__normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>::
      __normal_iterator(local_30);
                    /* try { // try from 0819705d to 0819726a has its CatchHandler @ 0819733f */
      std::vector<CRabbitBox,std::allocator<CRabbitBox>>::begin();
      while( true ) {
        std::vector<CRabbitBox,std::allocator<CRabbitBox>>::end();
        bVar2 = __gnu_cxx::operator!=(local_30,local_18);
        if (!bVar2) break;
        pCVar5 = (CRabbitBox *)
                 __gnu_cxx::
                 __normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>::
                 operator*(local_30);
        CRabbitBox::operator=(local_2c,pCVar5);
        iVar3 = CRabbitBox::getItemIndex(local_2c);
        this = (CDataManager *)G_CDataManager();
        local_10 = (int *)CDataManager::find_item(this,iVar3);
        if (local_10 != (int *)0x0) {
          Inven_Item::Inven_Item((Inven_Item *)&local_85);
          uVar6 = CRabbitBox::getItemIndex(local_2c);
          uStack_83 = (undefined2)uVar6;
          uStack_81 = (undefined2)((uint)uVar6 >> 0x10);
          uStack_7e = CRabbitBox::getItemCount(local_2c);
          (**(code **)(*local_10 + 8))(local_10,&local_85);
          uVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_14 = CInventory::insertItemIntoInventory
                               (uVar6,CONCAT22(uStack_83,local_85),
                                CONCAT13((undefined1)uStack_7e,CONCAT12(uStack_7f,uStack_81)),
                                CONCAT13(uStack_7a,uStack_7e._1_3_),local_79,local_75,local_71,
                                local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,
                                local_51,local_4d,local_49,0xd,1,0);
          if (local_14 == -1) {
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            WongWork::CMailBoxHelper::ReqDBSendNewMail
                      (param_1,(Inven_Item *)&local_85,0,uVar7,true,(char *)0x0,0);
          }
          else {
            cVar1 = CUser::SendUpdateItemList(param_1,1,0,local_14);
            if (cVar1 != '\x01') goto LAB_0819735a;
          }
        }
        __gnu_cxx::__normal_iterator<CRabbitBox*,std::vector<CRabbitBox,std::allocator<CRabbitBox>>>
        ::operator++(local_30);
      }
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08197271 to 0819731a has its CatchHandler @ 0819731d */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x100);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,param_2);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,0x708);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      iVar3 = CUser::get_area(param_1,false);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      pGVar4 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(pGVar4,(int)cVar1,iVar3,local_3c);
                    /* try { // try from 08197338 to 0819733c has its CatchHandler @ 0819733f */
      PacketGuard::~PacketGuard(local_3c);
LAB_0819735a:
      CRabbitBox::~CRabbitBox(local_2c);
    }
  }
  return;
}

```

