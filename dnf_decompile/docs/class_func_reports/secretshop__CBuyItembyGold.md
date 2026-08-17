# secretshop__CBuyItembyGold

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## BuyItem

```asm
// === 085fb8f0 secretshop::CBuyItembyGold::BuyItem  [0x085fb8f0-0x85fbb61] ===
 85fb8f0:	55                   	push   %ebp
 85fb8f1:	89 e5                	mov    %esp,%ebp
 85fb8f3:	53                   	push   %ebx
 85fb8f4:	81 ec 84 00 00 00    	sub    $0x84,%esp
 85fb8fa:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb8fd:	8b 55 14             	mov    0x14(%ebp),%edx
 85fb900:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb904:	89 04 24             	mov    %eax,(%esp)
 85fb907:	e8 94 59 4b 00       	call   8ab12a0 <_ZN10secretshop8RETAILER11GetSaleInfoEi>
 85fb90c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85fb90f:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 85fb914:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 85fb91b:	00 
 85fb91c:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fb91f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb923:	89 04 24             	mov    %eax,(%esp)
 85fb926:	e8 d7 d0 c8 ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 85fb92b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85fb92e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85fb932:	74 27                	je     85fb95b <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x6b>
 85fb934:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fb937:	0f b6 c0             	movzbl %al,%eax
 85fb93a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fb93e:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fb945:	00 
 85fb946:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb949:	89 04 24             	mov    %eax,(%esp)
 85fb94c:	e8 f1 05 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fb951:	b8 00 00 00 00       	mov    $0x0,%eax
 85fb956:	e9 fe 01 00 00       	jmp    85fbb59 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x269>
 85fb95b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85fb95f:	75 25                	jne    85fb986 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x96>
 85fb961:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 85fb968:	00 
 85fb969:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fb970:	00 
 85fb971:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb974:	89 04 24             	mov    %eax,(%esp)
 85fb977:	e8 c6 05 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fb97c:	b8 00 00 00 00       	mov    $0x0,%eax
 85fb981:	e9 d3 01 00 00       	jmp    85fbb59 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x269>
 85fb986:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85fb98d:	8b 45 08             	mov    0x8(%ebp),%eax
 85fb990:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85fb993:	89 54 24 10          	mov    %edx,0x10(%esp)
 85fb997:	8b 55 18             	mov    0x18(%ebp),%edx
 85fb99a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fb99e:	8b 55 14             	mov    0x14(%ebp),%edx
 85fb9a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fb9a5:	8b 55 10             	mov    0x10(%ebp),%edx
 85fb9a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb9ac:	89 04 24             	mov    %eax,(%esp)
 85fb9af:	e8 30 fe ff ff       	call   85fb7e4 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi>
 85fb9b4:	83 f0 01             	xor    $0x1,%eax
 85fb9b7:	84 c0                	test   %al,%al
 85fb9b9:	74 25                	je     85fb9e0 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0xf0>
 85fb9bb:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 85fb9c2:	00 
 85fb9c3:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fb9ca:	00 
 85fb9cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb9ce:	89 04 24             	mov    %eax,(%esp)
 85fb9d1:	e8 6c 05 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fb9d6:	b8 00 00 00 00       	mov    $0x0,%eax
 85fb9db:	e9 79 01 00 00       	jmp    85fbb59 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x269>
 85fb9e0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85fb9e3:	8b 40 08             	mov    0x8(%eax),%eax
 85fb9e6:	0f af 45 18          	imul   0x18(%ebp),%eax
 85fb9ea:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fb9ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb9f0:	89 04 24             	mov    %eax,(%esp)
 85fb9f3:	e8 90 e7 b7 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 85fb9f8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85fb9fb:	0f 9c c0             	setl   %al
 85fb9fe:	84 c0                	test   %al,%al
 85fba00:	74 25                	je     85fba27 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x137>
 85fba02:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 85fba09:	00 
 85fba0a:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fba11:	00 
 85fba12:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fba15:	89 04 24             	mov    %eax,(%esp)
 85fba18:	e8 25 05 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fba1d:	b8 00 00 00 00       	mov    $0x0,%eax
 85fba22:	e9 32 01 00 00       	jmp    85fbb59 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x269>
 85fba27:	8d 45 a7             	lea    -0x59(%ebp),%eax
 85fba2a:	89 04 24             	mov    %eax,(%esp)
 85fba2d:	e8 22 fe ac ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85fba32:	8b 45 08             	mov    0x8(%ebp),%eax
 85fba35:	8d 55 a7             	lea    -0x59(%ebp),%edx
 85fba38:	89 54 24 10          	mov    %edx,0x10(%esp)
 85fba3c:	8b 55 18             	mov    0x18(%ebp),%edx
 85fba3f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fba43:	8b 55 14             	mov    0x14(%ebp),%edx
 85fba46:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fba4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fba4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fba51:	89 04 24             	mov    %eax,(%esp)
 85fba54:	e8 6f fc ff ff       	call   85fb6c8 <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item>
 85fba59:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fba5c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85fba60:	79 25                	jns    85fba87 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x197>
 85fba62:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85fba69:	00 
 85fba6a:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fba71:	00 
 85fba72:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fba75:	89 04 24             	mov    %eax,(%esp)
 85fba78:	e8 c5 04 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fba7d:	b8 00 00 00 00       	mov    $0x0,%eax
 85fba82:	e9 d2 00 00 00       	jmp    85fbb59 <_ZN10secretshop14CBuyItembyGold7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x269>
 85fba87:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fba8a:	89 04 24             	mov    %eax,(%esp)
 85fba8d:	e8 fc e7 ad ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85fba92:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85fba99:	00 
 85fba9a:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 85fbaa1:	00 
 85fbaa2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85fbaa5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbaa9:	89 04 24             	mov    %eax,(%esp)
 85fbaac:	e8 9b 3a f0 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 85fbab1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85fbab4:	8b 45 08             	mov    0x8(%ebp),%eax
 85fbab7:	89 54 24 18          	mov    %edx,0x18(%esp)
 85fbabb:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85fbac2:	00 
 85fbac3:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 85fbaca:	ff 
 85fbacb:	8d 55 a7             	lea    -0x59(%ebp),%edx
 85fbace:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fbad2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fbad5:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbad9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fbadc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbae0:	89 04 24             	mov    %eax,(%esp)
 85fbae3:	e8 76 fa ff ff       	call   85fb55e <_ZN10secretshop8IBuyRule21SendSecretShopBuyItemEP5CUseriR10Inven_Itemiii>
 85fbae8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85fbaeb:	8b 45 08             	mov    0x8(%ebp),%eax
 85fbaee:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbaf2:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fbaf5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbaf9:	89 04 24             	mov    %eax,(%esp)
 85fbafc:	e8 85 fd ff ff       	call   85fb886 <_ZN10secretshop8IBuyRule17LogValueStatisticEP5CUserj>
 85fbb01:	8b 45 10             	mov    0x10(%ebp),%eax
 85fbb04:	8d 50 0c             	lea    0xc(%eax),%edx
 85fbb07:	8b 45 18             	mov    0x18(%ebp),%eax
 85fbb0a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fbb0e:	8b 45 14             	mov    0x14(%ebp),%eax
 85fbb11:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fbb15:	89 14 24             	mov    %edx,(%esp)
 85fbb18:	e8 cb 58 4b 00       	call   8ab13e8 <_ZN10secretshop7SHOPPER7BuyItemEii>
 85fbb1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbb20:	89 04 24             	mov    %eax,(%esp)
 85fbb23:	e8 68 10 08 00       	call   867cb90 <_ZN5CUser23getDungeonIdxAfterClearEv>
 85fbb28:	89 c3                	mov    %eax,%ebx
 85fbb2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbb2d:	89 04 24             	mov    %eax,(%esp)
 85fbb30:	e8 71 ca 08 00       	call   86885a6 <_ZN5CUser17GetSecretShopDataEv>
 85fbb35:	8b 10                	mov    (%eax),%edx
 85fbb37:	8b 45 08             	mov    0x8(%ebp),%eax
 85fbb3a:	8b 40 04             	mov    0x4(%eax),%eax
 85fbb3d:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85fbb40:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85fbb44:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85fbb48:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbb4c:	89 04 24             	mov    %eax,(%esp)
 85fbb4f:	e8 b4 15 00 00       	call   85fd108 <_ZN10secretshop20CSecretShopStatistic11RecordPriceEiii>
 85fbb54:	b8 01 00 00 00       	mov    $0x1,%eax
 85fbb59:	81 c4 84 00 00 00    	add    $0x84,%esp
 85fbb5f:	5b                   	pop    %ebx
 85fbb60:	5d                   	pop    %ebp
 85fbb61:	c3                   	ret

```

```c
// secretshop::CBuyItembyGold::BuyItem @ 0x85fb8f0

/* secretshop::CBuyItembyGold::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int) */

undefined4 __thiscall
secretshop::CBuyItembyGold::BuyItem
          (CBuyItembyGold *this,CUser *param_1,SECRET_SHOP_INFO *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *pCVar4;
  int *piVar5;
  Inven_Item local_5d [61];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_1c = RETAILER::GetSaleInfo((int)param_2);
  local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x42);
  if (local_18 == 0) {
    if (local_1c == 0) {
      CUser::SendCmdErrorPacket(param_1,0x129,0x11);
      uVar2 = 0;
    }
    else {
      local_20 = 0;
      cVar1 = IBuyRule::CheckLimit((IBuyRule *)this,param_2,param_3,param_4,&local_20);
      if (cVar1 == '\x01') {
        local_14 = *(int *)(local_1c + 8) * param_4;
        iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        if (iVar3 < (int)local_14) {
          CUser::SendCmdErrorPacket(param_1,0x129,10);
          uVar2 = 0;
        }
        else {
          Inven_Item::Inven_Item(local_5d);
          local_10 = IBuyRule::InsertItemIntoInventory
                               ((IBuyRule *)this,param_1,param_3,param_4,local_5d);
          if (local_10 < 0) {
            CUser::SendCmdErrorPacket(param_1,0x129,4);
            uVar2 = 0;
          }
          else {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::use_money(pCVar4,local_14,0x27,1);
            IBuyRule::SendSecretShopBuyItem
                      ((IBuyRule *)this,param_1,local_10,local_5d,-1,0,local_20);
            IBuyRule::LogValueStatistic((IBuyRule *)this,param_1,local_14);
            SHOPPER::BuyItem((SHOPPER *)(param_2 + 0xc),param_3,param_4);
            iVar3 = CUser::getDungeonIdxAfterClear(param_1);
            piVar5 = (int *)CUser::GetSecretShopData(param_1);
            CSecretShopStatistic::RecordPrice
                      (*(CSecretShopStatistic **)(this + 4),*piVar5,iVar3,local_14);
            uVar2 = 1;
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x129,0x5f);
        uVar2 = 0;
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x129,local_18 & 0xff);
    uVar2 = 0;
  }
  return uVar2;
}

```

