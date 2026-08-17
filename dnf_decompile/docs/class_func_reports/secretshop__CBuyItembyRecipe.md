# secretshop__CBuyItembyRecipe

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## BuyItem

```asm
// === 085fbb62 secretshop::CBuyItembyRecipe::BuyItem  [0x085fbb62-0x85fbe2d] ===
 85fbb62:	55                   	push   %ebp
 85fbb63:	89 e5                	mov    %esp,%ebp
 85fbb65:	53                   	push   %ebx
 85fbb66:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 85fbb6c:	8b 45 10             	mov    0x10(%ebp),%eax
 85fbb6f:	8b 55 14             	mov    0x14(%ebp),%edx
 85fbb72:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbb76:	89 04 24             	mov    %eax,(%esp)
 85fbb79:	e8 22 57 4b 00       	call   8ab12a0 <_ZN10secretshop8RETAILER11GetSaleInfoEi>
 85fbb7e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85fbb81:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 85fbb86:	c7 44 24 08 43 00 00 	movl   $0x43,0x8(%esp)
 85fbb8d:	00 
 85fbb8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fbb91:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbb95:	89 04 24             	mov    %eax,(%esp)
 85fbb98:	e8 65 ce c8 ff       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 85fbb9d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85fbba0:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85fbba4:	74 27                	je     85fbbcd <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x6b>
 85fbba6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85fbba9:	0f b6 c0             	movzbl %al,%eax
 85fbbac:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fbbb0:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fbbb7:	00 
 85fbbb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbbbb:	89 04 24             	mov    %eax,(%esp)
 85fbbbe:	e8 7f 03 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fbbc3:	b8 00 00 00 00       	mov    $0x0,%eax
 85fbbc8:	e9 58 02 00 00       	jmp    85fbe25 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x2c3>
 85fbbcd:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85fbbd1:	75 25                	jne    85fbbf8 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x96>
 85fbbd3:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 85fbbda:	00 
 85fbbdb:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fbbe2:	00 
 85fbbe3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbbe6:	89 04 24             	mov    %eax,(%esp)
 85fbbe9:	e8 54 03 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fbbee:	b8 00 00 00 00       	mov    $0x0,%eax
 85fbbf3:	e9 2d 02 00 00       	jmp    85fbe25 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x2c3>
 85fbbf8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85fbbff:	8b 45 08             	mov    0x8(%ebp),%eax
 85fbc02:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85fbc05:	89 54 24 10          	mov    %edx,0x10(%esp)
 85fbc09:	8b 55 18             	mov    0x18(%ebp),%edx
 85fbc0c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fbc10:	8b 55 14             	mov    0x14(%ebp),%edx
 85fbc13:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbc17:	8b 55 10             	mov    0x10(%ebp),%edx
 85fbc1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbc1e:	89 04 24             	mov    %eax,(%esp)
 85fbc21:	e8 be fb ff ff       	call   85fb7e4 <_ZN10secretshop8IBuyRule10CheckLimitERNS_16SECRET_SHOP_INFOEiiRi>
 85fbc26:	83 f0 01             	xor    $0x1,%eax
 85fbc29:	84 c0                	test   %al,%al
 85fbc2b:	74 25                	je     85fbc52 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0xf0>
 85fbc2d:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 85fbc34:	00 
 85fbc35:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fbc3c:	00 
 85fbc3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbc40:	89 04 24             	mov    %eax,(%esp)
 85fbc43:	e8 fa 02 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fbc48:	b8 00 00 00 00       	mov    $0x0,%eax
 85fbc4d:	e9 d3 01 00 00       	jmp    85fbe25 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x2c3>
 85fbc52:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85fbc55:	89 04 24             	mov    %eax,(%esp)
 85fbc58:	e8 31 a0 bb ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 85fbc5d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85fbc60:	8b 40 10             	mov    0x10(%eax),%eax
 85fbc63:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85fbc66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85fbc69:	8b 40 14             	mov    0x14(%eax),%eax
 85fbc6c:	0f af 45 18          	imul   0x18(%ebp),%eax
 85fbc70:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85fbc73:	8d 45 9b             	lea    -0x65(%ebp),%eax
 85fbc76:	89 04 24             	mov    %eax,(%esp)
 85fbc79:	e8 d6 fb ac ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85fbc7e:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 85fbc81:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbc84:	89 04 24             	mov    %eax,(%esp)
 85fbc87:	e8 f2 e5 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85fbc8c:	8d 55 9b             	lea    -0x65(%ebp),%edx
 85fbc8f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbc93:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85fbc97:	89 04 24             	mov    %eax,(%esp)
 85fbc9a:	e8 8d 02 f0 ff       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 85fbc9f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85fbca2:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 85fbca6:	74 0a                	je     85fbcb2 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x150>
 85fbca8:	8b 55 a2             	mov    -0x5e(%ebp),%edx
 85fbcab:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85fbcae:	39 c2                	cmp    %eax,%edx
 85fbcb0:	7d 25                	jge    85fbcd7 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x175>
 85fbcb2:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 85fbcb9:	00 
 85fbcba:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fbcc1:	00 
 85fbcc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbcc5:	89 04 24             	mov    %eax,(%esp)
 85fbcc8:	e8 75 02 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fbccd:	b8 00 00 00 00       	mov    $0x0,%eax
 85fbcd2:	e9 4e 01 00 00       	jmp    85fbe25 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x2c3>
 85fbcd7:	8d 85 5e ff ff ff    	lea    -0xa2(%ebp),%eax
 85fbcdd:	89 04 24             	mov    %eax,(%esp)
 85fbce0:	e8 6f fb ac ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85fbce5:	8b 45 08             	mov    0x8(%ebp),%eax
 85fbce8:	8d 95 5e ff ff ff    	lea    -0xa2(%ebp),%edx
 85fbcee:	89 54 24 10          	mov    %edx,0x10(%esp)
 85fbcf2:	8b 55 18             	mov    0x18(%ebp),%edx
 85fbcf5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fbcf9:	8b 55 14             	mov    0x14(%ebp),%edx
 85fbcfc:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbd00:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fbd03:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbd07:	89 04 24             	mov    %eax,(%esp)
 85fbd0a:	e8 b9 f9 ff ff       	call   85fb6c8 <_ZN10secretshop8IBuyRule23InsertItemIntoInventoryEP5CUseriiR10Inven_Item>
 85fbd0f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fbd12:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85fbd16:	79 25                	jns    85fbd3d <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x1db>
 85fbd18:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85fbd1f:	00 
 85fbd20:	c7 44 24 04 29 01 00 	movl   $0x129,0x4(%esp)
 85fbd27:	00 
 85fbd28:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbd2b:	89 04 24             	mov    %eax,(%esp)
 85fbd2e:	e8 0f 02 08 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 85fbd33:	b8 00 00 00 00       	mov    $0x0,%eax
 85fbd38:	e9 e8 00 00 00       	jmp    85fbe25 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x2c3>
 85fbd3d:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 85fbd40:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbd43:	89 04 24             	mov    %eax,(%esp)
 85fbd46:	e8 43 e5 ad ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85fbd4b:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85fbd52:	00 
 85fbd53:	c7 44 24 10 1a 00 00 	movl   $0x1a,0x10(%esp)
 85fbd5a:	00 
 85fbd5b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85fbd5f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85fbd62:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbd66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85fbd6d:	00 
 85fbd6e:	89 04 24             	mov    %eax,(%esp)
 85fbd71:	e8 96 82 f0 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85fbd76:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fbd79:	89 04 24             	mov    %eax,(%esp)
 85fbd7c:	e8 fd e4 ad ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85fbd81:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85fbd84:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbd88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85fbd8f:	00 
 85fbd90:	89 04 24             	mov    %eax,(%esp)
 85fbd93:	e8 46 04 f0 ff       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 85fbd98:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fbd9b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85fbd9f:	75 09                	jne    85fbdaa <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x248>
 85fbda1:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85fbda8:	eb 09                	jmp    85fbdb3 <_ZN10secretshop16CBuyItembyRecipe7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x251>
 85fbdaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fbdad:	8b 40 07             	mov    0x7(%eax),%eax
 85fbdb0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85fbdb3:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 85fbdb6:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 85fbdb9:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85fbdbc:	8b 45 08             	mov    0x8(%ebp),%eax
 85fbdbf:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 85fbdc3:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85fbdc7:	89 54 24 10          	mov    %edx,0x10(%esp)
 85fbdcb:	8d 95 5e ff ff ff    	lea    -0xa2(%ebp),%edx
 85fbdd1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fbdd5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85fbdd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbddc:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fbddf:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbde3:	89 04 24             	mov    %eax,(%esp)
 85fbde6:	e8 73 f7 ff ff       	call   85fb55e <_ZN10secretshop8IBuyRule21SendSecretShopBuyItemEP5CUseriR10Inven_Itemiii>
 85fbdeb:	8b 45 08             	mov    0x8(%ebp),%eax
 85fbdee:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85fbdf1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fbdf5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fbdf8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fbdfc:	89 04 24             	mov    %eax,(%esp)
 85fbdff:	e8 ae fa ff ff       	call   85fb8b2 <_ZN10secretshop8IBuyRule16LogCubeStatisticEP5CUserRSt4pairIiiE>
 85fbe04:	8b 45 10             	mov    0x10(%ebp),%eax
 85fbe07:	8d 50 0c             	lea    0xc(%eax),%edx
 85fbe0a:	8b 45 18             	mov    0x18(%ebp),%eax
 85fbe0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fbe11:	8b 45 14             	mov    0x14(%ebp),%eax
 85fbe14:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fbe18:	89 14 24             	mov    %edx,(%esp)
 85fbe1b:	e8 c8 55 4b 00       	call   8ab13e8 <_ZN10secretshop7SHOPPER7BuyItemEii>
 85fbe20:	b8 01 00 00 00       	mov    $0x1,%eax
 85fbe25:	81 c4 c4 00 00 00    	add    $0xc4,%esp
 85fbe2b:	5b                   	pop    %ebx
 85fbe2c:	5d                   	pop    %ebp
 85fbe2d:	c3                   	ret

```

```c
// secretshop::CBuyItembyRecipe::BuyItem @ 0x85fbb62

/* secretshop::CBuyItembyRecipe::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int) */

undefined4 __thiscall
secretshop::CBuyItembyRecipe::BuyItem
          (CBuyItembyRecipe *this,CUser *param_1,SECRET_SHOP_INFO *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  Inven_Item local_a6 [61];
  Inven_Item local_69 [7];
  int local_62;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = RETAILER::GetSaleInfo((int)param_2);
  local_1c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x43);
  if (local_1c == 0) {
    if (local_20 == 0) {
      CUser::SendCmdErrorPacket(param_1,0x129,0x11);
      uVar3 = 0;
    }
    else {
      local_24 = 0;
      cVar2 = IBuyRule::CheckLimit((IBuyRule *)this,param_2,param_3,param_4,&local_24);
      if (cVar2 == '\x01') {
        std::pair<int,int>::pair((pair<int,int> *)&local_2c);
        local_2c = *(int *)(local_20 + 0x10);
        local_28 = *(int *)(local_20 + 0x14) * param_4;
        Inven_Item::Inven_Item(local_69);
        iVar1 = local_2c;
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_18 = CInventory::GetInvenData(pCVar4,iVar1,local_69);
        if ((local_18 == -1) || (local_62 < local_28)) {
          CUser::SendCmdErrorPacket(param_1,0x129,10);
          uVar3 = 0;
        }
        else {
          Inven_Item::Inven_Item(local_a6);
          local_14 = IBuyRule::InsertItemIntoInventory
                               ((IBuyRule *)this,param_1,param_3,param_4,local_a6);
          iVar1 = local_28;
          if (local_14 < 0) {
            CUser::SendCmdErrorPacket(param_1,0x129,4);
            uVar3 = 0;
          }
          else {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar4,1,local_18,iVar1,0x1a,1);
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_10 = CInventory::GetInvenRef(pCVar4,1,local_18);
            if (local_10 == 0) {
              local_28 = 0;
            }
            else {
              local_28 = *(int *)(local_10 + 7);
            }
            IBuyRule::SendSecretShopBuyItem
                      ((IBuyRule *)this,param_1,local_14,local_a6,local_2c,local_28,local_24);
            IBuyRule::LogCubeStatistic((IBuyRule *)this,param_1,(pair *)&local_2c);
            SHOPPER::BuyItem((SHOPPER *)(param_2 + 0xc),param_3,param_4);
            uVar3 = 1;
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x129,0x5f);
        uVar3 = 0;
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x129,local_1c & 0xff);
    uVar3 = 0;
  }
  return uVar3;
}

```

