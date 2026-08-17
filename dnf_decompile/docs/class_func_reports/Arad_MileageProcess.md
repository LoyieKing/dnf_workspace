# Arad_MileageProcess

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## BuyFail

```asm
// === 0819e50e Arad_MileageProcess::BuyFail  [0x0819e50e-0x819e648] ===
 819e50e:	55                   	push   %ebp
 819e50f:	89 e5                	mov    %esp,%ebp
 819e511:	56                   	push   %esi
 819e512:	53                   	push   %ebx
 819e513:	83 ec 40             	sub    $0x40,%esp
 819e516:	8b 45 10             	mov    0x10(%ebp),%eax
 819e519:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 819e51d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e520:	89 04 24             	mov    %eax,(%esp)
 819e523:	e8 24 f8 3e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 819e528:	c7 45 f0 0b 00 00 00 	movl   $0xb,-0x10(%ebp)
 819e52f:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 819e533:	c7 44 24 08 43 00 00 	movl   $0x43,0x8(%esp)
 819e53a:	00 
 819e53b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e542:	00 
 819e543:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e546:	89 04 24             	mov    %eax,(%esp)
 819e549:	e8 ae d3 f2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819e54e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819e555:	00 
 819e556:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e559:	89 04 24             	mov    %eax,(%esp)
 819e55c:	e8 bf d3 f2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819e561:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819e568:	00 
 819e569:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e56c:	89 04 24             	mov    %eax,(%esp)
 819e56f:	e8 ac d3 f2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819e574:	0f bf 45 d4          	movswl -0x2c(%ebp),%eax
 819e578:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e57c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e57f:	89 04 24             	mov    %eax,(%esp)
 819e582:	e8 1d b9 f3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 819e587:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 819e58b:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e58f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e592:	89 04 24             	mov    %eax,(%esp)
 819e595:	e8 86 d3 f2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819e59a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 819e59d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e5a1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e5a4:	89 04 24             	mov    %eax,(%esp)
 819e5a7:	e8 90 d3 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e5ac:	8b 45 14             	mov    0x14(%ebp),%eax
 819e5af:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e5b3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e5b6:	89 04 24             	mov    %eax,(%esp)
 819e5b9:	e8 7e d3 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e5be:	8b 45 18             	mov    0x18(%ebp),%eax
 819e5c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e5c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e5c8:	89 04 24             	mov    %eax,(%esp)
 819e5cb:	e8 6c d3 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e5d0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 819e5d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e5d7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e5da:	89 04 24             	mov    %eax,(%esp)
 819e5dd:	e8 5a d3 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e5e2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 819e5e9:	ff 
 819e5ea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e5ed:	89 04 24             	mov    %eax,(%esp)
 819e5f0:	e8 47 d3 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e5f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e5fc:	00 
 819e5fd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e600:	89 04 24             	mov    %eax,(%esp)
 819e603:	e8 50 d3 f2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 819e608:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e60b:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e60f:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e612:	89 04 24             	mov    %eax,(%esp)
 819e615:	e8 a0 9f 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 819e61a:	eb 1b                	jmp    819e637 <_ZN19Arad_MileageProcess7BuyFailEP5CUsersiii+0x129>
 819e61c:	89 d3                	mov    %edx,%ebx
 819e61e:	89 c6                	mov    %eax,%esi
 819e620:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e623:	89 04 24             	mov    %eax,(%esp)
 819e626:	e8 55 f8 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819e62b:	89 f0                	mov    %esi,%eax
 819e62d:	89 da                	mov    %ebx,%edx
 819e62f:	89 04 24             	mov    %eax,(%esp)
 819e632:	e8 19 51 94 00       	call   8ae3750 <_Unwind_Resume>
 819e637:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819e63a:	89 04 24             	mov    %eax,(%esp)
 819e63d:	e8 3e f8 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819e642:	83 c4 40             	add    $0x40,%esp
 819e645:	5b                   	pop    %ebx
 819e646:	5e                   	pop    %esi
 819e647:	5d                   	pop    %ebp
 819e648:	c3                   	ret

```

```c
// Arad_MileageProcess::BuyFail @ 0x819e50e

/* Arad_MileageProcess::BuyFail(CUser*, short, int, int, int) */

void __thiscall
Arad_MileageProcess::BuyFail
          (Arad_MileageProcess *this,CUser *param_1,short param_2,int param_3,int param_4,
          int param_5)

{
  PacketGuard local_20 [12];
  int local_14;
  char local_d;
  
  PacketGuard::PacketGuard(local_20);
  local_14 = 0xb;
  local_d = '\0';
                    /* try { // try from 0819e549 to 0819e619 has its CatchHandler @ 0819e61c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x43);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(int)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)local_d);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,-1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

---

## BuyMileageItem

```asm
// === 0819dd4e Arad_MileageProcess::BuyMileageItem  [0x0819dd4e-0x819e21f] ===
 819dd4e:	55                   	push   %ebp
 819dd4f:	89 e5                	mov    %esp,%ebp
 819dd51:	57                   	push   %edi
 819dd52:	56                   	push   %esi
 819dd53:	53                   	push   %ebx
 819dd54:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 819dd5a:	8b 4d 18             	mov    0x18(%ebp),%ecx
 819dd5d:	8b 55 28             	mov    0x28(%ebp),%edx
 819dd60:	8b 45 2c             	mov    0x2c(%ebp),%eax
 819dd63:	66 89 8d 74 ff ff ff 	mov    %cx,-0x8c(%ebp)
 819dd6a:	88 95 70 ff ff ff    	mov    %dl,-0x90(%ebp)
 819dd70:	88 85 6c ff ff ff    	mov    %al,-0x94(%ebp)
 819dd76:	e8 20 e4 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819dd7b:	8b 55 10             	mov    0x10(%ebp),%edx
 819dd7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 819dd82:	89 04 24             	mov    %eax,(%esp)
 819dd85:	e8 5a 20 1c 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 819dd8a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 819dd8d:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 819dd91:	75 0a                	jne    819dd9d <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x4f>
 819dd93:	bb 15 00 00 00       	mov    $0x15,%ebx
 819dd98:	e9 76 04 00 00       	jmp    819e213 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x4c5>
 819dd9d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 819dda4:	8d 45 83             	lea    -0x7d(%ebp),%eax
 819dda7:	89 04 24             	mov    %eax,(%esp)
 819ddaa:	e8 a5 da f2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 819ddaf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 819ddb2:	89 04 24             	mov    %eax,(%esp)
 819ddb5:	e8 82 c2 fd ff       	call   817a03c <_ZNK14CCeraShopGoods16GetSubGroupIndexEv>
 819ddba:	83 f8 01             	cmp    $0x1,%eax
 819ddbd:	0f 95 c0             	setne  %al
 819ddc0:	84 c0                	test   %al,%al
 819ddc2:	74 50                	je     819de14 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0xc6>
 819ddc4:	8b 5d 14             	mov    0x14(%ebp),%ebx
 819ddc7:	e8 cf e3 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819ddcc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819ddd0:	89 04 24             	mov    %eax,(%esp)
 819ddd3:	e8 5a 1c 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 819ddd8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 819dddb:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 819dddf:	75 0a                	jne    819ddeb <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x9d>
 819dde1:	bb 15 00 00 00       	mov    $0x15,%ebx
 819dde6:	e9 28 04 00 00       	jmp    819e213 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x4c5>
 819ddeb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 819ddee:	8b 00                	mov    (%eax),%eax
 819ddf0:	83 c0 08             	add    $0x8,%eax
 819ddf3:	8b 10                	mov    (%eax),%edx
 819ddf5:	8d 45 83             	lea    -0x7d(%ebp),%eax
 819ddf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ddfc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 819ddff:	89 04 24             	mov    %eax,(%esp)
 819de02:	ff d2                	call   *%edx
 819de04:	8b 45 14             	mov    0x14(%ebp),%eax
 819de07:	89 45 85             	mov    %eax,-0x7b(%ebp)
 819de0a:	0f b7 85 74 ff ff ff 	movzwl -0x8c(%ebp),%eax
 819de11:	89 45 8a             	mov    %eax,-0x76(%ebp)
 819de14:	8b 45 0c             	mov    0xc(%ebp),%eax
 819de17:	89 04 24             	mov    %eax,(%esp)
 819de1a:	e8 75 2c 4b 00       	call   8650a94 <_ZN5CUser10GetMileageEv>
 819de1f:	3b 45 30             	cmp    0x30(%ebp),%eax
 819de22:	0f 9c c0             	setl   %al
 819de25:	84 c0                	test   %al,%al
 819de27:	74 0a                	je     819de33 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0xe5>
 819de29:	bb ed 03 00 00       	mov    $0x3ed,%ebx
 819de2e:	e9 e0 03 00 00       	jmp    819e213 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x4c5>
 819de33:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 819de3a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 819de41:	8d 45 c0             	lea    -0x40(%ebp),%eax
 819de44:	89 04 24             	mov    %eax,(%esp)
 819de47:	e8 46 ce fa ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 819de4c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 819de4f:	89 04 24             	mov    %eax,(%esp)
 819de52:	e8 e5 c1 fd ff       	call   817a03c <_ZNK14CCeraShopGoods16GetSubGroupIndexEv>
 819de57:	89 45 dc             	mov    %eax,-0x24(%ebp)
 819de5a:	83 7d dc 09          	cmpl   $0x9,-0x24(%ebp)
 819de5e:	0f 87 d7 02 00 00    	ja     819e13b <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x3ed>
 819de64:	8b 45 dc             	mov    -0x24(%ebp),%eax
 819de67:	c1 e0 02             	shl    $0x2,%eax
 819de6a:	8b 80 04 67 ba 08    	mov    0x8ba6704(%eax),%eax
 819de70:	ff e0                	jmp    *%eax
 819de72:	0f be bd 6c ff ff ff 	movsbl -0x94(%ebp),%edi
 819de79:	0f be b5 70 ff ff ff 	movsbl -0x90(%ebp),%esi
 819de80:	8b 5d 14             	mov    0x14(%ebp),%ebx
 819de83:	8b 45 0c             	mov    0xc(%ebp),%eax
 819de86:	89 04 24             	mov    %eax,(%esp)
 819de89:	e8 00 c4 f3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 819de8e:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 819de95:	00 
 819de96:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 819de9d:	00 
 819de9e:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 819dea5:	00 
 819dea6:	8b 55 3c             	mov    0x3c(%ebp),%edx
 819dea9:	89 54 24 18          	mov    %edx,0x18(%esp)
 819dead:	89 7c 24 14          	mov    %edi,0x14(%esp)
 819deb1:	89 74 24 10          	mov    %esi,0x10(%esp)
 819deb5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819debc:	00 
 819debd:	8b 55 24             	mov    0x24(%ebp),%edx
 819dec0:	89 54 24 08          	mov    %edx,0x8(%esp)
 819dec4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819dec8:	89 04 24             	mov    %eax,(%esp)
 819decb:	e8 ce bc 36 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 819ded0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 819ded3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 819ded7:	0f 89 93 00 00 00    	jns    819df70 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x222>
 819dedd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819dee4:	00 
 819dee5:	c7 44 24 08 e0 66 ba 	movl   $0x8ba66e0,0x8(%esp)
 819deec:	08 
 819deed:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 819def4:	00 
 819def5:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 819defc:	e8 fd 78 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 819df01:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 819df04:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819df07:	89 04 24             	mov    %eax,(%esp)
 819df0a:	e8 a1 04 ee ff       	call   807e3b0 <strlen@plt>
 819df0f:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 819df15:	0f be bd 6c ff ff ff 	movsbl -0x94(%ebp),%edi
 819df1c:	0f be b5 70 ff ff ff 	movsbl -0x90(%ebp),%esi
 819df23:	8b 5d 14             	mov    0x14(%ebp),%ebx
 819df26:	8b 45 0c             	mov    0xc(%ebp),%eax
 819df29:	89 04 24             	mov    %eax,(%esp)
 819df2c:	e8 1d dd f2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 819df31:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 819df37:	89 54 24 20          	mov    %edx,0x20(%esp)
 819df3b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 819df3e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 819df42:	8b 55 3c             	mov    0x3c(%ebp),%edx
 819df45:	89 54 24 18          	mov    %edx,0x18(%esp)
 819df49:	89 7c 24 14          	mov    %edi,0x14(%esp)
 819df4d:	89 74 24 10          	mov    %esi,0x10(%esp)
 819df51:	8b 55 24             	mov    0x24(%ebp),%edx
 819df54:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819df58:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819df5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 819df60:	8b 45 0c             	mov    0xc(%ebp),%eax
 819df63:	89 04 24             	mov    %eax,(%esp)
 819df66:	e8 ab 8f 3b 00       	call   8556f16 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i>
 819df6b:	e9 cb 01 00 00       	jmp    819e13b <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x3ed>
 819df70:	8b 45 e0             	mov    -0x20(%ebp),%eax
 819df73:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819df77:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819df7e:	00 
 819df7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819df86:	00 
 819df87:	8b 45 0c             	mov    0xc(%ebp),%eax
 819df8a:	89 04 24             	mov    %eax,(%esp)
 819df8d:	e8 c8 e6 4d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 819df92:	e9 a4 01 00 00       	jmp    819e13b <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x3ed>
 819df97:	0f b7 95 74 ff ff ff 	movzwl -0x8c(%ebp),%edx
 819df9e:	8b 45 08             	mov    0x8(%ebp),%eax
 819dfa1:	8b 00                	mov    (%eax),%eax
 819dfa3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 819dfaa:	00 
 819dfab:	89 54 24 08          	mov    %edx,0x8(%esp)
 819dfaf:	8b 55 0c             	mov    0xc(%ebp),%edx
 819dfb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 819dfb6:	89 04 24             	mov    %eax,(%esp)
 819dfb9:	e8 ca 7a 18 00       	call   8325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>
 819dfbe:	e9 78 01 00 00       	jmp    819e13b <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x3ed>
 819dfc3:	8b 45 08             	mov    0x8(%ebp),%eax
 819dfc6:	8b 00                	mov    (%eax),%eax
 819dfc8:	8b 55 40             	mov    0x40(%ebp),%edx
 819dfcb:	89 54 24 60          	mov    %edx,0x60(%esp)
 819dfcf:	8d 55 c0             	lea    -0x40(%ebp),%edx
 819dfd2:	89 54 24 5c          	mov    %edx,0x5c(%esp)
 819dfd6:	c7 44 24 58 01 00 00 	movl   $0x1,0x58(%esp)
 819dfdd:	00 
 819dfde:	c7 44 24 54 00 00 00 	movl   $0x0,0x54(%esp)
 819dfe5:	00 
 819dfe6:	8b 55 20             	mov    0x20(%ebp),%edx
 819dfe9:	89 54 24 50          	mov    %edx,0x50(%esp)
 819dfed:	8d 55 cc             	lea    -0x34(%ebp),%edx
 819dff0:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 819dff4:	8b 55 1c             	mov    0x1c(%ebp),%edx
 819dff7:	89 54 24 48          	mov    %edx,0x48(%esp)
 819dffb:	8b 55 83             	mov    -0x7d(%ebp),%edx
 819dffe:	89 54 24 08          	mov    %edx,0x8(%esp)
 819e002:	8b 55 87             	mov    -0x79(%ebp),%edx
 819e005:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819e009:	8b 55 8b             	mov    -0x75(%ebp),%edx
 819e00c:	89 54 24 10          	mov    %edx,0x10(%esp)
 819e010:	8b 55 8f             	mov    -0x71(%ebp),%edx
 819e013:	89 54 24 14          	mov    %edx,0x14(%esp)
 819e017:	8b 55 93             	mov    -0x6d(%ebp),%edx
 819e01a:	89 54 24 18          	mov    %edx,0x18(%esp)
 819e01e:	8b 55 97             	mov    -0x69(%ebp),%edx
 819e021:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 819e025:	8b 55 9b             	mov    -0x65(%ebp),%edx
 819e028:	89 54 24 20          	mov    %edx,0x20(%esp)
 819e02c:	8b 55 9f             	mov    -0x61(%ebp),%edx
 819e02f:	89 54 24 24          	mov    %edx,0x24(%esp)
 819e033:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 819e036:	89 54 24 28          	mov    %edx,0x28(%esp)
 819e03a:	8b 55 a7             	mov    -0x59(%ebp),%edx
 819e03d:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 819e041:	8b 55 ab             	mov    -0x55(%ebp),%edx
 819e044:	89 54 24 30          	mov    %edx,0x30(%esp)
 819e048:	8b 55 af             	mov    -0x51(%ebp),%edx
 819e04b:	89 54 24 34          	mov    %edx,0x34(%esp)
 819e04f:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 819e052:	89 54 24 38          	mov    %edx,0x38(%esp)
 819e056:	8b 55 b7             	mov    -0x49(%ebp),%edx
 819e059:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 819e05d:	8b 55 bb             	mov    -0x45(%ebp),%edx
 819e060:	89 54 24 40          	mov    %edx,0x40(%esp)
 819e064:	0f b6 55 bf          	movzbl -0x41(%ebp),%edx
 819e068:	88 54 24 44          	mov    %dl,0x44(%esp)
 819e06c:	8b 55 0c             	mov    0xc(%ebp),%edx
 819e06f:	89 54 24 04          	mov    %edx,0x4(%esp)
 819e073:	89 04 24             	mov    %eax,(%esp)
 819e076:	e8 a7 7a 18 00       	call   8325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>
 819e07b:	e9 bb 00 00 00       	jmp    819e13b <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x3ed>
 819e080:	8b 45 d8             	mov    -0x28(%ebp),%eax
 819e083:	89 04 24             	mov    %eax,(%esp)
 819e086:	e8 7b 32 f5 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 819e08b:	89 c3                	mov    %eax,%ebx
 819e08d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 819e090:	89 04 24             	mov    %eax,(%esp)
 819e093:	e8 c8 2b f7 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 819e098:	8b 55 08             	mov    0x8(%ebp),%edx
 819e09b:	8b 12                	mov    (%edx),%edx
 819e09d:	89 5c 24 58          	mov    %ebx,0x58(%esp)
 819e0a1:	89 44 24 54          	mov    %eax,0x54(%esp)
 819e0a5:	c7 44 24 50 01 00 00 	movl   $0x1,0x50(%esp)
 819e0ac:	00 
 819e0ad:	8d 45 cc             	lea    -0x34(%ebp),%eax
 819e0b0:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 819e0b4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 819e0b7:	89 44 24 48          	mov    %eax,0x48(%esp)
 819e0bb:	8b 45 83             	mov    -0x7d(%ebp),%eax
 819e0be:	89 44 24 08          	mov    %eax,0x8(%esp)
 819e0c2:	8b 45 87             	mov    -0x79(%ebp),%eax
 819e0c5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819e0c9:	8b 45 8b             	mov    -0x75(%ebp),%eax
 819e0cc:	89 44 24 10          	mov    %eax,0x10(%esp)
 819e0d0:	8b 45 8f             	mov    -0x71(%ebp),%eax
 819e0d3:	89 44 24 14          	mov    %eax,0x14(%esp)
 819e0d7:	8b 45 93             	mov    -0x6d(%ebp),%eax
 819e0da:	89 44 24 18          	mov    %eax,0x18(%esp)
 819e0de:	8b 45 97             	mov    -0x69(%ebp),%eax
 819e0e1:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 819e0e5:	8b 45 9b             	mov    -0x65(%ebp),%eax
 819e0e8:	89 44 24 20          	mov    %eax,0x20(%esp)
 819e0ec:	8b 45 9f             	mov    -0x61(%ebp),%eax
 819e0ef:	89 44 24 24          	mov    %eax,0x24(%esp)
 819e0f3:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 819e0f6:	89 44 24 28          	mov    %eax,0x28(%esp)
 819e0fa:	8b 45 a7             	mov    -0x59(%ebp),%eax
 819e0fd:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 819e101:	8b 45 ab             	mov    -0x55(%ebp),%eax
 819e104:	89 44 24 30          	mov    %eax,0x30(%esp)
 819e108:	8b 45 af             	mov    -0x51(%ebp),%eax
 819e10b:	89 44 24 34          	mov    %eax,0x34(%esp)
 819e10f:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 819e112:	89 44 24 38          	mov    %eax,0x38(%esp)
 819e116:	8b 45 b7             	mov    -0x49(%ebp),%eax
 819e119:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 819e11d:	8b 45 bb             	mov    -0x45(%ebp),%eax
 819e120:	89 44 24 40          	mov    %eax,0x40(%esp)
 819e124:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 819e128:	88 44 24 44          	mov    %al,0x44(%esp)
 819e12c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e12f:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e133:	89 14 24             	mov    %edx,(%esp)
 819e136:	e8 2b 7c 18 00       	call   8325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>
 819e13b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 819e13e:	85 c0                	test   %eax,%eax
 819e140:	0f 85 a2 00 00 00    	jne    819e1e8 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x49a>
 819e146:	8b 55 d0             	mov    -0x30(%ebp),%edx
 819e149:	0f b7 85 74 ff ff ff 	movzwl -0x8c(%ebp),%eax
 819e150:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 819e153:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 819e157:	8b 4d 38             	mov    0x38(%ebp),%ecx
 819e15a:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 819e15e:	8b 4d 34             	mov    0x34(%ebp),%ecx
 819e161:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 819e165:	8b 4d 30             	mov    0x30(%ebp),%ecx
 819e168:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 819e16c:	89 54 24 10          	mov    %edx,0x10(%esp)
 819e170:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819e174:	8b 45 10             	mov    0x10(%ebp),%eax
 819e177:	89 44 24 08          	mov    %eax,0x8(%esp)
 819e17b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e17e:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e182:	8b 45 08             	mov    0x8(%ebp),%eax
 819e185:	89 04 24             	mov    %eax,(%esp)
 819e188:	e8 93 00 00 00       	call   819e220 <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE>
 819e18d:	0f b7 95 74 ff ff ff 	movzwl -0x8c(%ebp),%edx
 819e194:	8b 45 08             	mov    0x8(%ebp),%eax
 819e197:	8b 00                	mov    (%eax),%eax
 819e199:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 819e1a0:	00 
 819e1a1:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 819e1a8:	00 
 819e1a9:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 819e1b0:	00 
 819e1b1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 819e1b5:	c7 44 24 18 f4 66 ba 	movl   $0x8ba66f4,0x18(%esp)
 819e1bc:	08 
 819e1bd:	8b 55 3c             	mov    0x3c(%ebp),%edx
 819e1c0:	89 54 24 14          	mov    %edx,0x14(%esp)
 819e1c4:	8b 55 30             	mov    0x30(%ebp),%edx
 819e1c7:	89 54 24 10          	mov    %edx,0x10(%esp)
 819e1cb:	8b 55 dc             	mov    -0x24(%ebp),%edx
 819e1ce:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819e1d2:	8b 55 10             	mov    0x10(%ebp),%edx
 819e1d5:	89 54 24 08          	mov    %edx,0x8(%esp)
 819e1d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 819e1dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 819e1e0:	89 04 24             	mov    %eax,(%esp)
 819e1e3:	e8 36 b7 fd ff       	call   817991e <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc>
 819e1e8:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 819e1eb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 819e1ee:	89 04 24             	mov    %eax,(%esp)
 819e1f1:	e8 b0 ca fa ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 819e1f6:	eb 1b                	jmp    819e213 <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE+0x4c5>
 819e1f8:	89 d3                	mov    %edx,%ebx
 819e1fa:	89 c6                	mov    %eax,%esi
 819e1fc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 819e1ff:	89 04 24             	mov    %eax,(%esp)
 819e202:	e8 9f ca fa ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 819e207:	89 f0                	mov    %esi,%eax
 819e209:	89 da                	mov    %ebx,%edx
 819e20b:	89 04 24             	mov    %eax,(%esp)
 819e20e:	e8 3d 55 94 00       	call   8ae3750 <_Unwind_Resume>
 819e213:	89 d8                	mov    %ebx,%eax
 819e215:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 819e21b:	5b                   	pop    %ebx
 819e21c:	5e                   	pop    %esi
 819e21d:	5f                   	pop    %edi
 819e21e:	5d                   	pop    %ebp
 819e21f:	c3                   	ret

```

```c
// Arad_MileageProcess::BuyMileageItem @ 0x819dd4e

/* Arad_MileageProcess::BuyMileageItem(CUser*, int, unsigned long, unsigned short, int, long, int,
   char, char, int, int, int, char const*, WongWork::CCeraShop::stCeraShopItemParam_t&) */

int __thiscall
Arad_MileageProcess::BuyMileageItem
          (Arad_MileageProcess *this,CUser *param_1,int param_2,ulong param_3,ushort param_4,
          int param_5,long param_6,int param_7,char param_8,char param_9,int param_10,int param_11,
          int param_12,char *param_13,stCeraShopItemParam_t *param_14)

{
  int iVar1;
  CDataManager *this_00;
  CInventory *pCVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 local_81;
  undefined4 uStack_7f;
  undefined1 uStack_7b;
  uint uStack_7a;
  undefined1 uStack_76;
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
  undefined4 local_49;
  undefined1 local_45;
  vector<Inven_Item,std::allocator<Inven_Item>> local_44 [12];
  int local_38;
  int local_34;
  CCeraShopGoods *local_30;
  CItem *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  
  iVar1 = G_CDataManager();
  local_30 = (CCeraShopGoods *)CDataManager::FindGoods(iVar1);
  if (local_30 == (CCeraShopGoods *)0x0) {
    iVar1 = 0x15;
  }
  else {
    local_2c = (CItem *)0x0;
    Inven_Item::Inven_Item((Inven_Item *)&local_81);
    iVar1 = CCeraShopGoods::GetSubGroupIndex(local_30);
    uStack_7f = CONCAT22(uStack_7f._2_2_,(undefined2)uStack_7f);
    if (iVar1 != 1) {
      this_00 = (CDataManager *)G_CDataManager();
      local_2c = (CItem *)CDataManager::find_item(this_00,param_3);
      if (local_2c == (CItem *)0x0) {
        return 0x15;
      }
      (**(code **)(*(int *)local_2c + 8))(local_2c,&local_81);
      uStack_7a = (uint)param_4;
      uStack_7f = param_3;
    }
    iVar1 = CUser::GetMileage(param_1);
    if (iVar1 < param_10) {
      iVar1 = 0x3ed;
    }
    else {
      local_34 = 0;
      local_38 = 0;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_44);
      local_28 = CCeraShopGoods::GetSubGroupIndex(local_30);
      switch(local_28) {
      case 0:
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0819decb to 0819e1e7 has its CatchHandler @ 0819e1f8 */
        local_24 = CInventory::AddAvatarItem
                             (pCVar2,param_3,param_7,0,(int)param_8,(int)param_9,param_13,0,0,0);
        if (local_24 < 0) {
          local_20 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_104",(bool *)0x0);
          sVar3 = strlen(local_20);
          iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
                    (param_1,iVar1,param_3,param_7,param_8,param_9,param_13,local_20,sVar3);
        }
        else {
          CUser::SendUpdateItemList(param_1,1,1,local_24);
        }
        break;
      case 1:
        WongWork::CCeraShop::_processCoin(*(CUser **)this,(ushort)param_1,SUB21(param_4,0));
        break;
      case 2:
      case 7:
      case 9:
        WongWork::CCeraShop::_processItem
                  (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_7f,local_81),
                   CONCAT13((undefined1)uStack_7a,CONCAT12(uStack_7b,uStack_7f._2_2_)),
                   CONCAT13(uStack_76,uStack_7a._1_3_),local_75,local_71,local_6d,local_69,local_65,
                   local_61,local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,param_5,
                   &local_38,param_6,0,1,local_44,param_14);
        break;
      case 3:
        uVar4 = CItem::getExpirationDate(local_2c);
        uVar5 = CItem::getUsablePeriod(local_2c);
        WongWork::CCeraShop::_processCreature
                  (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_7f,local_81),
                   CONCAT13((undefined1)uStack_7a,CONCAT12(uStack_7b,uStack_7f._2_2_)),
                   CONCAT13(uStack_76,uStack_7a._1_3_),local_75,local_71,local_6d,local_69,local_65,
                   local_61,local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,&local_34
                   ,&local_38,1,uVar5,uVar4);
      }
      if (local_38 == 0) {
        BuySuccess(this,param_1,param_2,(uint)param_4,local_34,param_10,param_11,param_12,
                   (vector *)local_44);
        ItemVendingMachine::BillingRecord
                  (*(CUser **)this,(int)param_1,param_2,local_28,(char *)param_10,param_13,0x8ba66f4
                   ,(ulonglong)param_4,'\0');
      }
      iVar1 = local_38;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_44);
    }
  }
  return iVar1;
}

```

---

## BuySuccess

```asm
// === 0819e220 Arad_MileageProcess::BuySuccess  [0x0819e220-0x819e50d] ===
 819e220:	55                   	push   %ebp
 819e221:	89 e5                	mov    %esp,%ebp
 819e223:	56                   	push   %esi
 819e224:	53                   	push   %ebx
 819e225:	83 ec 40             	sub    $0x40,%esp
 819e228:	8b 45 1c             	mov    0x1c(%ebp),%eax
 819e22b:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e22f:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e232:	89 04 24             	mov    %eax,(%esp)
 819e235:	e8 d6 27 4b 00       	call   8650a10 <_ZN5CUser10UseMileageEi>
 819e23a:	c7 45 f0 0b 00 00 00 	movl   $0xb,-0x10(%ebp)
 819e241:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 819e245:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e248:	89 04 24             	mov    %eax,(%esp)
 819e24b:	e8 fc fa 3e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 819e250:	c7 44 24 08 43 00 00 	movl   $0x43,0x8(%esp)
 819e257:	00 
 819e258:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e25f:	00 
 819e260:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e263:	89 04 24             	mov    %eax,(%esp)
 819e266:	e8 91 d6 f2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819e26b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e272:	00 
 819e273:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e276:	89 04 24             	mov    %eax,(%esp)
 819e279:	e8 a2 d6 f2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819e27e:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 819e282:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e286:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e289:	89 04 24             	mov    %eax,(%esp)
 819e28c:	e8 8f d6 f2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819e291:	8b 45 f0             	mov    -0x10(%ebp),%eax
 819e294:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e298:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e29b:	89 04 24             	mov    %eax,(%esp)
 819e29e:	e8 99 d6 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e2a3:	8b 45 10             	mov    0x10(%ebp),%eax
 819e2a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e2aa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e2ad:	89 04 24             	mov    %eax,(%esp)
 819e2b0:	e8 87 d6 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e2b5:	8b 45 14             	mov    0x14(%ebp),%eax
 819e2b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e2bc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e2bf:	89 04 24             	mov    %eax,(%esp)
 819e2c2:	e8 75 d6 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e2c7:	8b 45 20             	mov    0x20(%ebp),%eax
 819e2ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e2ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e2d1:	89 04 24             	mov    %eax,(%esp)
 819e2d4:	e8 63 d6 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e2d9:	8b 45 18             	mov    0x18(%ebp),%eax
 819e2dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e2e0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e2e3:	89 04 24             	mov    %eax,(%esp)
 819e2e6:	e8 51 d6 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e2eb:	8b 45 28             	mov    0x28(%ebp),%eax
 819e2ee:	89 04 24             	mov    %eax,(%esp)
 819e2f1:	e8 68 c3 fd ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 819e2f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e2fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e2fd:	89 04 24             	mov    %eax,(%esp)
 819e300:	e8 9f bb f3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 819e305:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819e308:	8b 55 28             	mov    0x28(%ebp),%edx
 819e30b:	89 54 24 04          	mov    %edx,0x4(%esp)
 819e30f:	89 04 24             	mov    %eax,(%esp)
 819e312:	e8 ed c9 fa ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 819e317:	83 ec 04             	sub    $0x4,%esp
 819e31a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819e31d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e321:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819e324:	89 04 24             	mov    %eax,(%esp)
 819e327:	e8 c0 47 fb ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 819e32c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819e32f:	8b 55 28             	mov    0x28(%ebp),%edx
 819e332:	89 54 24 04          	mov    %edx,0x4(%esp)
 819e336:	89 04 24             	mov    %eax,(%esp)
 819e339:	e8 ac 45 fb ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 819e33e:	83 ec 04             	sub    $0x4,%esp
 819e341:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819e344:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e348:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819e34b:	89 04 24             	mov    %eax,(%esp)
 819e34e:	e8 99 47 fb ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 819e353:	eb 45                	jmp    819e39a <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE+0x17a>
 819e355:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819e358:	89 04 24             	mov    %eax,(%esp)
 819e35b:	e8 1c c3 fd ff       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 819e360:	8b 40 02             	mov    0x2(%eax),%eax
 819e363:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e367:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e36a:	89 04 24             	mov    %eax,(%esp)
 819e36d:	e8 ca d5 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e372:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819e375:	89 04 24             	mov    %eax,(%esp)
 819e378:	e8 ff c2 fd ff       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 819e37d:	8b 40 07             	mov    0x7(%eax),%eax
 819e380:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e384:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e387:	89 04 24             	mov    %eax,(%esp)
 819e38a:	e8 ad d5 f2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819e38f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819e392:	89 04 24             	mov    %eax,(%esp)
 819e395:	e8 98 47 fb ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 819e39a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819e39d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e3a1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819e3a4:	89 04 24             	mov    %eax,(%esp)
 819e3a7:	e8 5a 47 fb ff       	call   8152b06 <_ZN9__gnu_cxxneIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 819e3ac:	84 c0                	test   %al,%al
 819e3ae:	75 a5                	jne    819e355 <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE+0x135>
 819e3b0:	8b 45 20             	mov    0x20(%ebp),%eax
 819e3b3:	3b 45 24             	cmp    0x24(%ebp),%eax
 819e3b6:	0f 85 fa 00 00 00    	jne    819e4b6 <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE+0x296>
 819e3bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819e3c3:	00 
 819e3c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e3c7:	89 04 24             	mov    %eax,(%esp)
 819e3ca:	e8 5b 24 4b 00       	call   865082a <_ZN5CUser12SendCashDataEb>
 819e3cf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e3d2:	89 04 24             	mov    %eax,(%esp)
 819e3d5:	e8 72 f9 3e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 819e3da:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 819e3e1:	00 
 819e3e2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819e3e9:	00 
 819e3ea:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e3ed:	89 04 24             	mov    %eax,(%esp)
 819e3f0:	e8 07 d5 f2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819e3f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 819e3fc:	00 
 819e3fd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e400:	89 04 24             	mov    %eax,(%esp)
 819e403:	e8 18 d5 f2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819e408:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 819e40f:	00 
 819e410:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e413:	89 04 24             	mov    %eax,(%esp)
 819e416:	e8 89 ba f3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 819e41b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e41e:	89 04 24             	mov    %eax,(%esp)
 819e421:	e8 58 be f3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 819e426:	8d 55 c8             	lea    -0x38(%ebp),%edx
 819e429:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819e42d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 819e434:	00 
 819e435:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e43c:	00 
 819e43d:	89 04 24             	mov    %eax,(%esp)
 819e440:	e8 77 e2 35 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 819e445:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e448:	89 04 24             	mov    %eax,(%esp)
 819e44b:	e8 2e be f3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 819e450:	8d 55 c8             	lea    -0x38(%ebp),%edx
 819e453:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819e457:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 819e45e:	00 
 819e45f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e466:	00 
 819e467:	89 04 24             	mov    %eax,(%esp)
 819e46a:	e8 4d e2 35 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 819e46f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e476:	00 
 819e477:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e47a:	89 04 24             	mov    %eax,(%esp)
 819e47d:	e8 d6 d4 f2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 819e482:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e485:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e489:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e48c:	89 04 24             	mov    %eax,(%esp)
 819e48f:	e8 26 a1 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 819e494:	eb 15                	jmp    819e4ab <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE+0x28b>
 819e496:	89 d3                	mov    %edx,%ebx
 819e498:	89 c6                	mov    %eax,%esi
 819e49a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e49d:	89 04 24             	mov    %eax,(%esp)
 819e4a0:	e8 db f9 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819e4a5:	89 f0                	mov    %esi,%eax
 819e4a7:	89 da                	mov    %ebx,%edx
 819e4a9:	eb 32                	jmp    819e4dd <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE+0x2bd>
 819e4ab:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819e4ae:	89 04 24             	mov    %eax,(%esp)
 819e4b1:	e8 ca f9 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819e4b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819e4bd:	00 
 819e4be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e4c1:	89 04 24             	mov    %eax,(%esp)
 819e4c4:	e8 8f d4 f2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 819e4c9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e4cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 819e4d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 819e4d3:	89 04 24             	mov    %eax,(%esp)
 819e4d6:	e8 df a0 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 819e4db:	eb 1b                	jmp    819e4f8 <_ZN19Arad_MileageProcess10BuySuccessEP5CUseriiiiiiRSt6vectorI10Inven_ItemSaIS3_EE+0x2d8>
 819e4dd:	89 d3                	mov    %edx,%ebx
 819e4df:	89 c6                	mov    %eax,%esi
 819e4e1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e4e4:	89 04 24             	mov    %eax,(%esp)
 819e4e7:	e8 94 f9 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819e4ec:	89 f0                	mov    %esi,%eax
 819e4ee:	89 da                	mov    %ebx,%edx
 819e4f0:	89 04 24             	mov    %eax,(%esp)
 819e4f3:	e8 58 52 94 00       	call   8ae3750 <_Unwind_Resume>
 819e4f8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819e4fb:	89 04 24             	mov    %eax,(%esp)
 819e4fe:	e8 7d f9 3e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819e503:	8d 65 f8             	lea    -0x8(%ebp),%esp
 819e506:	83 c4 00             	add    $0x0,%esp
 819e509:	5b                   	pop    %ebx
 819e50a:	5e                   	pop    %esi
 819e50b:	5d                   	pop    %ebp
 819e50c:	c3                   	ret
 819e50d:	90                   	nop

```

```c
// Arad_MileageProcess::BuySuccess @ 0x819e220

/* Arad_MileageProcess::BuySuccess(CUser*, int, int, int, int, int, int, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) */

void __thiscall
Arad_MileageProcess::BuySuccess
          (Arad_MileageProcess *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,vector *param_8)

{
  bool bVar1;
  int iVar2;
  CInventory *pCVar3;
  PacketGuard local_3c [12];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_30 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_2c [4];
  PacketGuard local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  char local_d;
  
  CUser::UseMileage(param_1,param_5);
  local_14 = 0xb;
  local_d = '\0';
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0819e266 to 0819e3d9 has its CatchHandler @ 0819e4dd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x43);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)local_d);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_6);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_4);
  iVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar2);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_2c,local_1c);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
  __gnu_cxx::__normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  ::__normal_iterator<Inven_Item*>(local_30,local_18);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_2c,local_30);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
            ::operator->(local_2c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(iVar2 + 2));
    iVar2 = __gnu_cxx::
            __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
            ::operator->(local_2c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(iVar2 + 7));
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    operator++(local_2c);
  }
  if (param_6 == param_7) {
    CUser::SendCashData(param_1,false);
    PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0819e3f0 to 0819e493 has its CatchHandler @ 0819e496 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,2);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar3,1,0,local_3c);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::MakeItemPacket(pCVar3,1,2,local_3c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
                    /* try { // try from 0819e4b1 to 0819e4da has its CatchHandler @ 0819e4dd */
    PacketGuard::~PacketGuard(local_3c);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  PacketGuard::~PacketGuard(local_28);
  return;
}

```

---

## GiveMileage

```asm
// === 0819dc9c Arad_MileageProcess::GiveMileage  [0x0819dc9c-0x819dd4d] ===
 819dc9c:	55                   	push   %ebp
 819dc9d:	89 e5                	mov    %esp,%ebp
 819dc9f:	83 ec 38             	sub    $0x38,%esp
 819dca2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 819dca6:	0f 84 9f 00 00 00    	je     819dd4b <_ZN19Arad_MileageProcess11GiveMileageEP5CUserii+0xaf>
 819dcac:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 819dcb3:	e8 42 a2 ff ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 819dcb8:	89 04 24             	mov    %eax,(%esp)
 819dcbb:	e8 e6 09 00 00       	call   819e6a6 <_ZN4ARAD16Arad_DataManager18getAradMileageDataEv>
 819dcc0:	8b 55 10             	mov    0x10(%ebp),%edx
 819dcc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 819dcc7:	89 04 24             	mov    %eax,(%esp)
 819dcca:	e8 99 59 00 00       	call   81a3668 <_ZN17Arad_Mileage_Data4findEi>
 819dccf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819dcd2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 819dcd6:	78 11                	js     819dce9 <_ZN19Arad_MileageProcess11GiveMileageEP5CUserii+0x4d>
 819dcd8:	81 7d f0 e8 03 00 00 	cmpl   $0x3e8,-0x10(%ebp)
 819dcdf:	7f 08                	jg     819dce9 <_ZN19Arad_MileageProcess11GiveMileageEP5CUserii+0x4d>
 819dce1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 819dce4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819dce7:	eb 18                	jmp    819dd01 <_ZN19Arad_MileageProcess11GiveMileageEP5CUserii+0x65>
 819dce9:	e8 0c a2 ff ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 819dcee:	89 04 24             	mov    %eax,(%esp)
 819dcf1:	e8 b0 09 00 00       	call   819e6a6 <_ZN4ARAD16Arad_DataManager18getAradMileageDataEv>
 819dcf6:	89 04 24             	mov    %eax,(%esp)
 819dcf9:	e8 f2 59 00 00       	call   81a36f0 <_ZN17Arad_Mileage_Data13default_valueEv>
 819dcfe:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819dd01:	db 45 14             	fildl  0x14(%ebp)
 819dd04:	db 45 ec             	fildl  -0x14(%ebp)
 819dd07:	d9 05 30 73 ba 08    	flds   0x8ba7330
 819dd0d:	de f9                	fdivrp %st,%st(1)
 819dd0f:	de c9                	fmulp  %st,%st(1)
 819dd11:	dd 1c 24             	fstpl  (%esp)
 819dd14:	e8 57 fe ed ff       	call   807db70 <floor@plt>
 819dd19:	d9 7d e6             	fnstcw -0x1a(%ebp)
 819dd1c:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 819dd20:	b4 0c                	mov    $0xc,%ah
 819dd22:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 819dd26:	d9 6d e4             	fldcw  -0x1c(%ebp)
 819dd29:	db 5d f4             	fistpl -0xc(%ebp)
 819dd2c:	d9 6d e6             	fldcw  -0x1a(%ebp)
 819dd2f:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 819dd36:	00 
 819dd37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819dd3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 819dd3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819dd41:	89 04 24             	mov    %eax,(%esp)
 819dd44:	e8 0b 2c 4b 00       	call   8650954 <_ZN5CUser10AddMileageEi14eCoinAddReason>
 819dd49:	eb 01                	jmp    819dd4c <_ZN19Arad_MileageProcess11GiveMileageEP5CUserii+0xb0>
 819dd4b:	90                   	nop
 819dd4c:	c9                   	leave
 819dd4d:	c3                   	ret

```

```c
// Arad_MileageProcess::GiveMileage @ 0x819dc9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Arad_MileageProcess::GiveMileage(CUser*, int, int) */

void __thiscall
Arad_MileageProcess::GiveMileage(Arad_MileageProcess *this,CUser *param_1,int param_2,int param_3)

{
  Arad_DataManager *pAVar1;
  Arad_Mileage_Data *pAVar2;
  double dVar3;
  undefined4 local_18;
  
  if (param_1 != (CUser *)0x0) {
    pAVar1 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
    pAVar2 = (Arad_Mileage_Data *)ARAD::Arad_DataManager::getAradMileageData(pAVar1);
    local_18 = Arad_Mileage_Data::find(pAVar2,param_2);
    if ((local_18 < 0) || (1000 < local_18)) {
      pAVar1 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
      pAVar2 = (Arad_Mileage_Data *)ARAD::Arad_DataManager::getAradMileageData(pAVar1);
      local_18 = Arad_Mileage_Data::default_value(pAVar2);
    }
    dVar3 = floor((double)(((float)local_18 / _DAT_08ba7330) * (float)param_3));
    CUser::AddMileage(param_1,(int)ROUND(dVar3),3);
  }
  return;
}

```

