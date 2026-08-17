# secretshop__IBuyRule

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CheckLimit

```asm
// === 085fb7e4 secretshop::IBuyRule::CheckLimit  [0x085fb7e4-0x85fb885] ===
 85fb7e4:	55                   	push   %ebp
 85fb7e5:	89 e5                	mov    %esp,%ebp
 85fb7e7:	83 ec 28             	sub    $0x28,%esp
 85fb7ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb7ed:	8b 55 10             	mov    0x10(%ebp),%edx
 85fb7f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb7f4:	89 04 24             	mov    %eax,(%esp)
 85fb7f7:	e8 a4 5a 4b 00       	call   8ab12a0 <_ZN10secretshop8RETAILER11GetSaleInfoEi>
 85fb7fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fb7ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb802:	8d 50 0c             	lea    0xc(%eax),%edx
 85fb805:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb808:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb80c:	89 14 24             	mov    %edx,(%esp)
 85fb80f:	e8 30 5b 4b 00       	call   8ab1344 <_ZN10secretshop7SHOPPER10GetBuyInfoEi>
 85fb814:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fb817:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85fb81b:	75 07                	jne    85fb824 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x40>
 85fb81d:	b8 00 00 00 00       	mov    $0x0,%eax
 85fb822:	eb 5f                	jmp    85fb883 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x9f>
 85fb824:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85fb828:	74 32                	je     85fb85c <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x78>
 85fb82a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb82d:	8b 50 0c             	mov    0xc(%eax),%edx
 85fb830:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb833:	8b 40 04             	mov    0x4(%eax),%eax
 85fb836:	03 45 14             	add    0x14(%ebp),%eax
 85fb839:	39 c2                	cmp    %eax,%edx
 85fb83b:	7d 07                	jge    85fb844 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x60>
 85fb83d:	b8 00 00 00 00       	mov    $0x0,%eax
 85fb842:	eb 3f                	jmp    85fb883 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x9f>
 85fb844:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb847:	8b 50 0c             	mov    0xc(%eax),%edx
 85fb84a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb84d:	8b 40 04             	mov    0x4(%eax),%eax
 85fb850:	03 45 14             	add    0x14(%ebp),%eax
 85fb853:	29 c2                	sub    %eax,%edx
 85fb855:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb858:	89 10                	mov    %edx,(%eax)
 85fb85a:	eb 22                	jmp    85fb87e <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x9a>
 85fb85c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb85f:	8b 40 0c             	mov    0xc(%eax),%eax
 85fb862:	3b 45 14             	cmp    0x14(%ebp),%eax
 85fb865:	7d 07                	jge    85fb86e <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x8a>
 85fb867:	b8 00 00 00 00       	mov    $0x0,%eax
 85fb86c:	eb 15                	jmp    85fb883 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi+0x9f>
 85fb86e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb871:	8b 40 0c             	mov    0xc(%eax),%eax
 85fb874:	89 c2                	mov    %eax,%edx
 85fb876:	2b 55 14             	sub    0x14(%ebp),%edx
 85fb879:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb87c:	89 10                	mov    %edx,(%eax)
 85fb87e:	b8 01 00 00 00       	mov    $0x1,%eax
 85fb883:	c9                   	leave
 85fb884:	c3                   	ret
 85fb885:	90                   	nop

```

```c
// secretshop::IBuyRule::CheckLimit @ 0x85fb7e4

/* secretshop::IBuyRule::CheckLimit(secretshop::SECRET_SHOP_INFO&, int, int, int&) */

undefined4 __thiscall
secretshop::IBuyRule::CheckLimit
          (IBuyRule *this,SECRET_SHOP_INFO *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = RETAILER::GetSaleInfo((int)param_1);
  iVar2 = SHOPPER::GetBuyInfo((int)(param_1 + 0xc));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0xc) < param_3) {
        return 0;
      }
      *param_4 = *(int *)(iVar1 + 0xc) - param_3;
    }
    else {
      if (*(int *)(iVar1 + 0xc) < *(int *)(iVar2 + 4) + param_3) {
        return 0;
      }
      *param_4 = *(int *)(iVar1 + 0xc) - (*(int *)(iVar2 + 4) + param_3);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## InsertItemIntoInventory

```asm
// === 085fb6c8 secretshop::IBuyRule::InsertItemIntoInventory  [0x085fb6c8-0x85fb7e3] ===
 85fb6c8:	55                   	push   %ebp
 85fb6c9:	89 e5                	mov    %esp,%ebp
 85fb6cb:	83 ec 68             	sub    $0x68,%esp
 85fb6ce:	e8 c8 0a ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85fb6d3:	8b 55 10             	mov    0x10(%ebp),%edx
 85fb6d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb6da:	89 04 24             	mov    %eax,(%esp)
 85fb6dd:	e8 50 43 d6 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85fb6e2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fb6e5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85fb6e9:	75 0a                	jne    85fb6f5 <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item+0x2d>
 85fb6eb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85fb6f0:	e9 ed 00 00 00       	jmp    85fb7e2 <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item+0x11a>
 85fb6f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb6f8:	8b 00                	mov    (%eax),%eax
 85fb6fa:	83 c0 08             	add    $0x8,%eax
 85fb6fd:	8b 10                	mov    (%eax),%edx
 85fb6ff:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb702:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb706:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb709:	89 04 24             	mov    %eax,(%esp)
 85fb70c:	ff d2                	call   *%edx
 85fb70e:	8b 55 10             	mov    0x10(%ebp),%edx
 85fb711:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb714:	89 50 02             	mov    %edx,0x2(%eax)
 85fb717:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb71a:	89 04 24             	mov    %eax,(%esp)
 85fb71d:	e8 d8 5b af ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85fb722:	84 c0                	test   %al,%al
 85fb724:	74 09                	je     85fb72f <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item+0x67>
 85fb726:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb729:	8b 55 14             	mov    0x14(%ebp),%edx
 85fb72c:	89 50 07             	mov    %edx,0x7(%eax)
 85fb72f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb732:	89 04 24             	mov    %eax,(%esp)
 85fb735:	e8 54 eb ad ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85fb73a:	89 c2                	mov    %eax,%edx
 85fb73c:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 85fb743:	00 
 85fb744:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 85fb74b:	00 
 85fb74c:	c7 44 24 44 2c 00 00 	movl   $0x2c,0x44(%esp)
 85fb753:	00 
 85fb754:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb757:	8b 08                	mov    (%eax),%ecx
 85fb759:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85fb75d:	8b 48 04             	mov    0x4(%eax),%ecx
 85fb760:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fb764:	8b 48 08             	mov    0x8(%eax),%ecx
 85fb767:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85fb76b:	8b 48 0c             	mov    0xc(%eax),%ecx
 85fb76e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85fb772:	8b 48 10             	mov    0x10(%eax),%ecx
 85fb775:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85fb779:	8b 48 14             	mov    0x14(%eax),%ecx
 85fb77c:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 85fb780:	8b 48 18             	mov    0x18(%eax),%ecx
 85fb783:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85fb787:	8b 48 1c             	mov    0x1c(%eax),%ecx
 85fb78a:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85fb78e:	8b 48 20             	mov    0x20(%eax),%ecx
 85fb791:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85fb795:	8b 48 24             	mov    0x24(%eax),%ecx
 85fb798:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85fb79c:	8b 48 28             	mov    0x28(%eax),%ecx
 85fb79f:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 85fb7a3:	8b 48 2c             	mov    0x2c(%eax),%ecx
 85fb7a6:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 85fb7aa:	8b 48 30             	mov    0x30(%eax),%ecx
 85fb7ad:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 85fb7b1:	8b 48 34             	mov    0x34(%eax),%ecx
 85fb7b4:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 85fb7b8:	8b 48 38             	mov    0x38(%eax),%ecx
 85fb7bb:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 85fb7bf:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fb7c3:	88 44 24 40          	mov    %al,0x40(%esp)
 85fb7c7:	89 14 24             	mov    %edx,(%esp)
 85fb7ca:	e8 b7 75 f0 ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 85fb7cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fb7d2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85fb7d6:	79 07                	jns    85fb7df <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item+0x117>
 85fb7d8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85fb7dd:	eb 03                	jmp    85fb7e2 <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item+0x11a>
 85fb7df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb7e2:	c9                   	leave
 85fb7e3:	c3                   	ret

```

```c
// secretshop::IBuyRule::InsertItemIntoInventory @ 0x85fb6c8

/* secretshop::IBuyRule::InsertItemIntoInventory(CUser*, int, int, Inven_Item&) */

int __thiscall
secretshop::IBuyRule::InsertItemIntoInventory
          (IBuyRule *this,CUser *param_1,int param_2,int param_3,Inven_Item *param_4)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  int iVar2;
  undefined4 uVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2);
  if (this_01 == (CItem *)0x0) {
    iVar2 = -1;
  }
  else {
    (**(code **)(*(int *)this_01 + 8))(this_01,param_4);
    *(int *)(param_4 + 2) = param_2;
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 != '\0') {
      *(int *)(param_4 + 7) = param_3;
    }
    uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar2 = CInventory::insertItemIntoInventory
                      (uVar3,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4),
                       *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                       *(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                       *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                       *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                       *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                       *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                       *(undefined4 *)(param_4 + 0x38),param_4[0x3c],0x2c,1,0);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

```

---

## LogCubeStatistic

```asm
// === 085fb8b2 secretshop::IBuyRule::LogCubeStatistic  [0x085fb8b2-0x85fb8ef] ===
 85fb8b2:	55                   	push   %ebp
 85fb8b3:	89 e5                	mov    %esp,%ebp
 85fb8b5:	56                   	push   %esi
 85fb8b6:	53                   	push   %ebx
 85fb8b7:	83 ec 20             	sub    $0x20,%esp
 85fb8ba:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb8bd:	8b 70 04             	mov    0x4(%eax),%esi
 85fb8c0:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb8c3:	8b 18                	mov    (%eax),%ebx
 85fb8c5:	e8 86 25 01 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 85fb8ca:	c7 44 24 10 6a 00 00 	movl   $0x6a,0x10(%esp)
 85fb8d1:	00 
 85fb8d2:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fb8d5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fb8d9:	89 74 24 08          	mov    %esi,0x8(%esp)
 85fb8dd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85fb8e1:	89 04 24             	mov    %eax,(%esp)
 85fb8e4:	e8 cf 26 01 00       	call   860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>
 85fb8e9:	83 c4 20             	add    $0x20,%esp
 85fb8ec:	5b                   	pop    %ebx
 85fb8ed:	5e                   	pop    %esi
 85fb8ee:	5d                   	pop    %ebp
 85fb8ef:	c3                   	ret

```

```c
// secretshop::IBuyRule::LogCubeStatistic @ 0x85fb8b2

/* secretshop::IBuyRule::LogCubeStatistic(CUser*, std::pair<int, int>&) */

void __thiscall secretshop::IBuyRule::LogCubeStatistic(IBuyRule *this,CUser *param_1,pair *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCubeStatistic *pCVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)param_2;
  pCVar3 = (CCubeStatistic *)GetInstanceCubeStatistic();
  CCubeStatistic::collectCubeStatistics(pCVar3,uVar2,uVar1,param_1,0x6a);
  return;
}

```

---

## LogValueStatistic

```asm
// === 085fb886 secretshop::IBuyRule::LogValueStatistic  [0x085fb886-0x85fb8b1] ===
 85fb886:	55                   	push   %ebp
 85fb887:	89 e5                	mov    %esp,%ebp
 85fb889:	83 ec 18             	sub    $0x18,%esp
 85fb88c:	e8 5e 1d 01 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 85fb891:	8b 55 10             	mov    0x10(%ebp),%edx
 85fb894:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fb898:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fb89b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fb89f:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 85fb8a6:	00 
 85fb8a7:	89 04 24             	mov    %eax,(%esp)
 85fb8aa:	e8 d3 1d 01 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 85fb8af:	c9                   	leave
 85fb8b0:	c3                   	ret
 85fb8b1:	90                   	nop

```

```c
// secretshop::IBuyRule::LogValueStatistic @ 0x85fb886

/* secretshop::IBuyRule::LogValueStatistic(CUser*, unsigned int) */

void __thiscall secretshop::IBuyRule::LogValueStatistic(IBuyRule *this,CUser *param_1,uint param_2)

{
  CValueStatistic *pCVar1;
  
  pCVar1 = (CValueStatistic *)GetInstanceValueStatistic();
  CValueStatistic::AddValueStatistic(pCVar1,0xd,param_1,param_2);
  return;
}

```

---

## SendSecretShopBuyItem

```asm
// === 085fb55e secretshop::IBuyRule::SendSecretShopBuyItem  [0x085fb55e-0x85fb6c7] ===
 85fb55e:	55                   	push   %ebp
 85fb55f:	89 e5                	mov    %esp,%ebp
 85fb561:	56                   	push   %esi
 85fb562:	53                   	push   %ebx
 85fb563:	83 ec 20             	sub    $0x20,%esp
 85fb566:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb569:	89 04 24             	mov    %eax,(%esp)
 85fb56c:	e8 db 27 f9 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85fb571:	c7 44 24 08 29 01 00 	movl   $0x129,0x8(%esp)
 85fb578:	00 
 85fb579:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85fb580:	00 
 85fb581:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb584:	89 04 24             	mov    %eax,(%esp)
 85fb587:	e8 70 03 ad ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85fb58c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85fb593:	00 
 85fb594:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb597:	89 04 24             	mov    %eax,(%esp)
 85fb59a:	e8 81 03 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85fb59f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb5a2:	89 04 24             	mov    %eax,(%esp)
 85fb5a5:	e8 d4 ec ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85fb5aa:	89 04 24             	mov    %eax,(%esp)
 85fb5ad:	e8 24 92 b3 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 85fb5b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb5b6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb5b9:	89 04 24             	mov    %eax,(%esp)
 85fb5bc:	e8 7b 03 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb5c1:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb5c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb5c8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb5cb:	89 04 24             	mov    %eax,(%esp)
 85fb5ce:	e8 d1 e8 ad ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85fb5d3:	8b 45 14             	mov    0x14(%ebp),%eax
 85fb5d6:	8b 40 02             	mov    0x2(%eax),%eax
 85fb5d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb5dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb5e0:	89 04 24             	mov    %eax,(%esp)
 85fb5e3:	e8 54 03 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb5e8:	8b 45 14             	mov    0x14(%ebp),%eax
 85fb5eb:	8b 40 07             	mov    0x7(%eax),%eax
 85fb5ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb5f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb5f5:	89 04 24             	mov    %eax,(%esp)
 85fb5f8:	e8 3f 03 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb5fd:	8b 45 14             	mov    0x14(%ebp),%eax
 85fb600:	83 c0 11             	add    $0x11,%eax
 85fb603:	89 04 24             	mov    %eax,(%esp)
 85fb606:	e8 27 51 b5 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 85fb60b:	0f b6 c0             	movzbl %al,%eax
 85fb60e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb612:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb615:	89 04 24             	mov    %eax,(%esp)
 85fb618:	e8 03 03 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85fb61d:	8b 45 14             	mov    0x14(%ebp),%eax
 85fb620:	83 c0 11             	add    $0x11,%eax
 85fb623:	89 04 24             	mov    %eax,(%esp)
 85fb626:	e8 47 51 b5 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 85fb62b:	0f b7 c0             	movzwl %ax,%eax
 85fb62e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb632:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb635:	89 04 24             	mov    %eax,(%esp)
 85fb638:	e8 67 e8 ad ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85fb63d:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb640:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb644:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb647:	89 04 24             	mov    %eax,(%esp)
 85fb64a:	e8 ed 02 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb64f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85fb652:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb656:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb659:	89 04 24             	mov    %eax,(%esp)
 85fb65c:	e8 db 02 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb661:	8b 45 20             	mov    0x20(%ebp),%eax
 85fb664:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb668:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb66b:	89 04 24             	mov    %eax,(%esp)
 85fb66e:	e8 c9 02 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb673:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85fb67a:	00 
 85fb67b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb67e:	89 04 24             	mov    %eax,(%esp)
 85fb681:	e8 d2 02 ad ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85fb686:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb689:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb68d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb690:	89 04 24             	mov    %eax,(%esp)
 85fb693:	e8 22 cf 04 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85fb698:	eb 1b                	jmp    85fb6b5 <_ZN10secretshop8IBuyRule21SendSecretShopBuyItemEP5CUseriR10Inven_Itemiii+0x157>
 85fb69a:	89 d3                	mov    %edx,%ebx
 85fb69c:	89 c6                	mov    %eax,%esi
 85fb69e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb6a1:	89 04 24             	mov    %eax,(%esp)
 85fb6a4:	e8 d7 27 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fb6a9:	89 f0                	mov    %esi,%eax
 85fb6ab:	89 da                	mov    %ebx,%edx
 85fb6ad:	89 04 24             	mov    %eax,(%esp)
 85fb6b0:	e8 9b 80 4e 00       	call   8ae3750 <_Unwind_Resume>
 85fb6b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb6b8:	89 04 24             	mov    %eax,(%esp)
 85fb6bb:	e8 c0 27 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fb6c0:	83 c4 20             	add    $0x20,%esp
 85fb6c3:	5b                   	pop    %ebx
 85fb6c4:	5e                   	pop    %esi
 85fb6c5:	5d                   	pop    %ebp
 85fb6c6:	c3                   	ret
 85fb6c7:	90                   	nop

```

```c
// secretshop::IBuyRule::SendSecretShopBuyItem @ 0x85fb55e

/* secretshop::IBuyRule::SendSecretShopBuyItem(CUser*, int, Inven_Item&, int, int, int) */

void __thiscall
secretshop::IBuyRule::SendSecretShopBuyItem
          (IBuyRule *this,CUser *param_1,int param_2,Inven_Item *param_3,int param_4,int param_5,
          int param_6)

{
  CInventory *this_00;
  int iVar1;
  uint uVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085fb587 to 085fb697 has its CatchHandler @ 085fb69a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x129);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar1 = CInventory::get_money(this_00);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_3 + 2));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_3 + 7));
  uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar2 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_6);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

