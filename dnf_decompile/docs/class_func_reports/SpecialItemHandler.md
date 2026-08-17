# SpecialItemHandler

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## SpecialItemHandler

```asm
// === 0827bcec SpecialItemHandler::SpecialItemHandler  [0x0827bcec-0x827be09] ===
 827bcec:	55                   	push   %ebp
 827bced:	89 e5                	mov    %esp,%ebp
 827bcef:	83 ec 10             	sub    $0x10,%esp
 827bcf2:	8b 45 08             	mov    0x8(%ebp),%eax
 827bcf5:	8b 55 0c             	mov    0xc(%ebp),%edx
 827bcf8:	89 10                	mov    %edx,(%eax)
 827bcfa:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 827bd01:	eb 1d                	jmp    827bd20 <_ZN18SpecialItemHandlerC1EPN8WongWork9CCeraShopE+0x34>
 827bd03:	8b 45 fc             	mov    -0x4(%ebp),%eax
 827bd06:	8b 55 08             	mov    0x8(%ebp),%edx
 827bd09:	c7 44 c2 04 00 00 00 	movl   $0x0,0x4(%edx,%eax,8)
 827bd10:	00 
 827bd11:	8b 55 08             	mov    0x8(%ebp),%edx
 827bd14:	c7 44 c2 08 00 00 00 	movl   $0x0,0x8(%edx,%eax,8)
 827bd1b:	00 
 827bd1c:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 827bd20:	83 7d fc 0d          	cmpl   $0xd,-0x4(%ebp)
 827bd24:	0f 9e c0             	setle  %al
 827bd27:	84 c0                	test   %al,%al
 827bd29:	75 d8                	jne    827bd03 <_ZN18SpecialItemHandlerC1EPN8WongWork9CCeraShopE+0x17>
 827bd2b:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd2e:	c7 40 0c 8a be 27 08 	movl   $0x827be8a,0xc(%eax)
 827bd35:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd38:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 827bd3f:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd42:	c7 40 3c e6 be 27 08 	movl   $0x827bee6,0x3c(%eax)
 827bd49:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd4c:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 827bd53:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd56:	c7 40 5c 90 bf 27 08 	movl   $0x827bf90,0x5c(%eax)
 827bd5d:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd60:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 827bd67:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd6a:	c7 40 44 c2 c0 27 08 	movl   $0x827c0c2,0x44(%eax)
 827bd71:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd74:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 827bd7b:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd7e:	c7 40 2c 04 c2 27 08 	movl   $0x827c204,0x2c(%eax)
 827bd85:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd88:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 827bd8f:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd92:	c7 40 34 4a ca 27 08 	movl   $0x827ca4a,0x34(%eax)
 827bd99:	8b 45 08             	mov    0x8(%ebp),%eax
 827bd9c:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 827bda3:	8b 45 08             	mov    0x8(%ebp),%eax
 827bda6:	c7 40 64 fc cc 27 08 	movl   $0x827ccfc,0x64(%eax)
 827bdad:	8b 45 08             	mov    0x8(%ebp),%eax
 827bdb0:	c7 40 68 00 00 00 00 	movl   $0x0,0x68(%eax)
 827bdb7:	8b 45 08             	mov    0x8(%ebp),%eax
 827bdba:	c7 40 4c d0 cd 27 08 	movl   $0x827cdd0,0x4c(%eax)
 827bdc1:	8b 45 08             	mov    0x8(%ebp),%eax
 827bdc4:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 827bdcb:	8b 45 08             	mov    0x8(%ebp),%eax
 827bdce:	c7 40 54 7e ce 27 08 	movl   $0x827ce7e,0x54(%eax)
 827bdd5:	8b 45 08             	mov    0x8(%ebp),%eax
 827bdd8:	c7 40 58 00 00 00 00 	movl   $0x0,0x58(%eax)
 827bddf:	8b 45 08             	mov    0x8(%ebp),%eax
 827bde2:	c7 40 14 dc d3 27 08 	movl   $0x827d3dc,0x14(%eax)
 827bde9:	8b 45 08             	mov    0x8(%ebp),%eax
 827bdec:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 827bdf3:	8b 45 08             	mov    0x8(%ebp),%eax
 827bdf6:	c7 40 6c 4e de 27 08 	movl   $0x827de4e,0x6c(%eax)
 827bdfd:	8b 45 08             	mov    0x8(%ebp),%eax
 827be00:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 827be07:	c9                   	leave
 827be08:	c3                   	ret
 827be09:	90                   	nop

```

```c
// SpecialItemHandler::SpecialItemHandler @ 0x827bcec

/* SpecialItemHandler::SpecialItemHandler(WongWork::CCeraShop*) */

void __thiscall SpecialItemHandler::SpecialItemHandler(SpecialItemHandler *this,CCeraShop *param_1)

{
  int local_8;
  
  *(CCeraShop **)this = param_1;
  for (local_8 = 0; local_8 < 0xe; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 8 + 4) = 0;
    *(undefined4 *)(this + local_8 * 8 + 8) = 0;
  }
  *(code **)(this + 0xc) = respond_special_item_cargo;
  *(undefined4 *)(this + 0x10) = 0;
  *(code **)(this + 0x3c) = respond_special_item_cargo_abs;
  *(undefined4 *)(this + 0x40) = 0;
  *(code **)(this + 0x5c) = respond_special_item_inventory_upgrade;
  *(undefined4 *)(this + 0x60) = 0;
  *(code **)(this + 0x44) = respond_special_item_charac_slot_extend;
  *(undefined4 *)(this + 0x48) = 0;
  *(code **)(this + 0x2c) = respond_special_item_package;
  *(undefined4 *)(this + 0x30) = 0;
  *(code **)(this + 0x34) = respond_special_item_booster;
  *(undefined4 *)(this + 0x38) = 0;
  *(code **)(this + 100) = respond_special_item_booster_selection;
  *(undefined4 *)(this + 0x68) = 0;
  *(code **)(this + 0x4c) = respond_special_item_skill_confirm;
  *(undefined4 *)(this + 0x50) = 0;
  *(code **)(this + 0x54) = respond_special_item_skill_tree_style;
  *(undefined4 *)(this + 0x58) = 0;
  *(code **)(this + 0x14) = respond_special_item_premium;
  *(undefined4 *)(this + 0x18) = 0;
  *(code **)(this + 0x6c) = respond_special_item_cerapoint_giftcard;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}

```

---

## execute

```asm
// === 0827be0a SpecialItemHandler::execute  [0x0827be0a-0x827be89] ===
 827be0a:	55                   	push   %ebp
 827be0b:	89 e5                	mov    %esp,%ebp
 827be0d:	83 ec 18             	sub    $0x18,%esp
 827be10:	83 7d 0c 0d          	cmpl   $0xd,0xc(%ebp)
 827be14:	7e 07                	jle    827be1d <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x13>
 827be16:	b8 00 00 00 00       	mov    $0x0,%eax
 827be1b:	eb 6a                	jmp    827be87 <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x7d>
 827be1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 827be20:	8b 45 08             	mov    0x8(%ebp),%eax
 827be23:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 827be27:	83 e0 01             	and    $0x1,%eax
 827be2a:	84 c0                	test   %al,%al
 827be2c:	74 23                	je     827be51 <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x47>
 827be2e:	8b 55 0c             	mov    0xc(%ebp),%edx
 827be31:	8b 45 08             	mov    0x8(%ebp),%eax
 827be34:	8b 44 d0 08          	mov    0x8(%eax,%edx,8),%eax
 827be38:	03 45 08             	add    0x8(%ebp),%eax
 827be3b:	8b 08                	mov    (%eax),%ecx
 827be3d:	8b 55 0c             	mov    0xc(%ebp),%edx
 827be40:	8b 45 08             	mov    0x8(%ebp),%eax
 827be43:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 827be47:	83 e8 01             	sub    $0x1,%eax
 827be4a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 827be4d:	8b 00                	mov    (%eax),%eax
 827be4f:	eb 0a                	jmp    827be5b <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x51>
 827be51:	8b 55 0c             	mov    0xc(%ebp),%edx
 827be54:	8b 45 08             	mov    0x8(%ebp),%eax
 827be57:	8b 44 d0 04          	mov    0x4(%eax,%edx,8),%eax
 827be5b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 827be5e:	8b 55 08             	mov    0x8(%ebp),%edx
 827be61:	8b 54 ca 08          	mov    0x8(%edx,%ecx,8),%edx
 827be65:	03 55 08             	add    0x8(%ebp),%edx
 827be68:	8b 4d 14             	mov    0x14(%ebp),%ecx
 827be6b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 827be6f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 827be72:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827be76:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 827be79:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827be7d:	89 14 24             	mov    %edx,(%esp)
 827be80:	ff d0                	call   *%eax
 827be82:	b8 01 00 00 00       	mov    $0x1,%eax
 827be87:	c9                   	leave
 827be88:	c3                   	ret
 827be89:	90                   	nop

```

```c
// SpecialItemHandler::execute @ 0x827be0a

/* SpecialItemHandler::execute(int, STSpecailItem_Param const&, STSpecailItem_Result&) */

undefined4 __thiscall
SpecialItemHandler::execute
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_1 < 0xe) {
    if ((*(uint *)(this + param_1 * 8 + 4) & 1) == 0) {
      pcVar2 = *(code **)(this + param_1 * 8 + 4);
    }
    else {
      pcVar2 = *(code **)(*(int *)(this + *(int *)(this + param_1 * 8 + 8)) +
                         *(int *)(this + param_1 * 8 + 4) + -1);
    }
    (*pcVar2)(this + *(int *)(this + param_1 * 8 + 8),param_1,param_2,param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## respond_special_item_booster

```asm
// === 0827ca4a SpecialItemHandler::respond_special_item_booster  [0x0827ca4a-0x827ccfb] ===
 827ca4a:	55                   	push   %ebp
 827ca4b:	89 e5                	mov    %esp,%ebp
 827ca4d:	57                   	push   %edi
 827ca4e:	56                   	push   %esi
 827ca4f:	53                   	push   %ebx
 827ca50:	83 ec 7c             	sub    $0x7c,%esp
 827ca53:	8b 45 10             	mov    0x10(%ebp),%eax
 827ca56:	8b 00                	mov    (%eax),%eax
 827ca58:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827ca5b:	8b 45 10             	mov    0x10(%ebp),%eax
 827ca5e:	8b 40 04             	mov    0x4(%eax),%eax
 827ca61:	89 45 c8             	mov    %eax,-0x38(%ebp)
 827ca64:	8b 45 10             	mov    0x10(%ebp),%eax
 827ca67:	8b 40 0c             	mov    0xc(%eax),%eax
 827ca6a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 827ca6d:	8b 45 10             	mov    0x10(%ebp),%eax
 827ca70:	8b 40 10             	mov    0x10(%eax),%eax
 827ca73:	89 45 d0             	mov    %eax,-0x30(%ebp)
 827ca76:	8b 45 10             	mov    0x10(%ebp),%eax
 827ca79:	8b 40 14             	mov    0x14(%eax),%eax
 827ca7c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 827ca7f:	8b 45 10             	mov    0x10(%ebp),%eax
 827ca82:	8b 40 18             	mov    0x18(%eax),%eax
 827ca85:	89 45 d8             	mov    %eax,-0x28(%ebp)
 827ca88:	8b 55 c8             	mov    -0x38(%ebp),%edx
 827ca8b:	8b 45 08             	mov    0x8(%ebp),%eax
 827ca8e:	8b 00                	mov    (%eax),%eax
 827ca90:	89 54 24 04          	mov    %edx,0x4(%esp)
 827ca94:	89 04 24             	mov    %eax,(%esp)
 827ca97:	e8 4a b4 0a 00       	call   8327ee6 <_ZN8WongWork9CCeraShop15setOriginalItemEi>
 827ca9c:	8b 45 08             	mov    0x8(%ebp),%eax
 827ca9f:	8b 00                	mov    (%eax),%eax
 827caa1:	8b 55 c8             	mov    -0x38(%ebp),%edx
 827caa4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 827caa8:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 827caaf:	00 
 827cab0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 827cab3:	89 54 24 04          	mov    %edx,0x4(%esp)
 827cab7:	89 04 24             	mov    %eax,(%esp)
 827caba:	e8 95 a9 0a 00       	call   8327454 <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm>
 827cabf:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 827cac6:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 827cac9:	e8 cd f6 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827cace:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827cad2:	89 04 24             	mov    %eax,(%esp)
 827cad5:	e8 58 2f 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 827cada:	89 45 e0             	mov    %eax,-0x20(%ebp)
 827cadd:	8d 45 b0             	lea    -0x50(%ebp),%eax
 827cae0:	89 04 24             	mov    %eax,(%esp)
 827cae3:	e8 c0 4f e9 ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 827cae8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 827caeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 827caef:	8b 45 e0             	mov    -0x20(%ebp),%eax
 827caf2:	89 04 24             	mov    %eax,(%esp)
 827caf5:	e8 64 2c 29 00       	call   850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>
 827cafa:	8d 45 bc             	lea    -0x44(%ebp),%eax
 827cafd:	8d 55 b0             	lea    -0x50(%ebp),%edx
 827cb00:	89 54 24 04          	mov    %edx,0x4(%esp)
 827cb04:	89 04 24             	mov    %eax,(%esp)
 827cb07:	e8 0e 50 e9 ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 827cb0c:	83 ec 04             	sub    $0x4,%esp
 827cb0f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 827cb12:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cb16:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cb19:	89 04 24             	mov    %eax,(%esp)
 827cb1c:	e8 1d 50 e9 ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 827cb21:	8d 45 c0             	lea    -0x40(%ebp),%eax
 827cb24:	8d 55 b0             	lea    -0x50(%ebp),%edx
 827cb27:	89 54 24 04          	mov    %edx,0x4(%esp)
 827cb2b:	89 04 24             	mov    %eax,(%esp)
 827cb2e:	e8 25 50 e9 ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 827cb33:	83 ec 04             	sub    $0x4,%esp
 827cb36:	8d 45 c0             	lea    -0x40(%ebp),%eax
 827cb39:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cb3d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 827cb40:	89 04 24             	mov    %eax,(%esp)
 827cb43:	e8 f6 4f e9 ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 827cb48:	e9 ea 00 00 00       	jmp    827cc37 <_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1ed>
 827cb4d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cb50:	89 04 24             	mov    %eax,(%esp)
 827cb53:	e8 68 50 e9 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 827cb58:	8b 00                	mov    (%eax),%eax
 827cb5a:	89 c3                	mov    %eax,%ebx
 827cb5c:	e8 3a f6 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827cb61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827cb65:	89 04 24             	mov    %eax,(%esp)
 827cb68:	e8 c5 2e 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 827cb6d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827cb70:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 827cb74:	74 19                	je     827cb8f <_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x145>
 827cb76:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827cb79:	8b 00                	mov    (%eax),%eax
 827cb7b:	83 c0 60             	add    $0x60,%eax
 827cb7e:	8b 10                	mov    (%eax),%edx
 827cb80:	8b 45 c8             	mov    -0x38(%ebp),%eax
 827cb83:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cb87:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827cb8a:	89 04 24             	mov    %eax,(%esp)
 827cb8d:	ff d2                	call   *%edx
 827cb8f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cb92:	89 04 24             	mov    %eax,(%esp)
 827cb95:	e8 26 50 e9 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 827cb9a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 827cb9e:	0f b6 f8             	movzbl %al,%edi
 827cba1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cba4:	89 04 24             	mov    %eax,(%esp)
 827cba7:	e8 14 50 e9 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 827cbac:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 827cbb0:	0f b6 f0             	movzbl %al,%esi
 827cbb3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cbb6:	89 04 24             	mov    %eax,(%esp)
 827cbb9:	e8 02 50 e9 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 827cbbe:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 827cbc2:	0f b7 d8             	movzwl %ax,%ebx
 827cbc5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cbc8:	89 04 24             	mov    %eax,(%esp)
 827cbcb:	e8 f0 4f e9 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 827cbd0:	8b 10                	mov    (%eax),%edx
 827cbd2:	8b 45 08             	mov    0x8(%ebp),%eax
 827cbd5:	8b 00                	mov    (%eax),%eax
 827cbd7:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 827cbde:	00 
 827cbdf:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 827cbe2:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 827cbe6:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 827cbe9:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 827cbed:	89 7c 24 14          	mov    %edi,0x14(%esp)
 827cbf1:	89 74 24 10          	mov    %esi,0x10(%esp)
 827cbf5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 827cbf9:	89 54 24 08          	mov    %edx,0x8(%esp)
 827cbfd:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 827cc00:	89 54 24 04          	mov    %edx,0x4(%esp)
 827cc04:	89 04 24             	mov    %eax,(%esp)
 827cc07:	e8 96 9b 0a 00       	call   83267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>
 827cc0c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 827cc10:	74 1a                	je     827cc2c <_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1e2>
 827cc12:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827cc15:	8b 00                	mov    (%eax),%eax
 827cc17:	83 c0 60             	add    $0x60,%eax
 827cc1a:	8b 10                	mov    (%eax),%edx
 827cc1c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827cc23:	00 
 827cc24:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827cc27:	89 04 24             	mov    %eax,(%esp)
 827cc2a:	ff d2                	call   *%edx
 827cc2c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cc2f:	89 04 24             	mov    %eax,(%esp)
 827cc32:	e8 73 4f e9 ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 827cc37:	8d 45 a8             	lea    -0x58(%ebp),%eax
 827cc3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cc3e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827cc41:	89 04 24             	mov    %eax,(%esp)
 827cc44:	e8 e4 af fb ff       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 827cc49:	84 c0                	test   %al,%al
 827cc4b:	0f 85 fc fe ff ff    	jne    827cb4d <_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x103>
 827cc51:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 827cc54:	e8 42 f5 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827cc59:	8b 40 0c             	mov    0xc(%eax),%eax
 827cc5c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827cc60:	89 04 24             	mov    %eax,(%esp)
 827cc63:	e8 a4 d4 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827cc68:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 827cc6b:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 827cc6f:	74 4c                	je     827ccbd <_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x273>
 827cc71:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827cc74:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cc78:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827cc7b:	89 04 24             	mov    %eax,(%esp)
 827cc7e:	e8 f5 0b 3d 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 827cc83:	83 f0 01             	xor    $0x1,%eax
 827cc86:	84 c0                	test   %al,%al
 827cc88:	74 33                	je     827ccbd <_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x273>
 827cc8a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827cc8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cc91:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827cc94:	89 04 24             	mov    %eax,(%esp)
 827cc97:	e8 b2 0b 3d 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 827cc9c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827cca3:	00 
 827cca4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 827cca7:	89 44 24 08          	mov    %eax,0x8(%esp)
 827ccab:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827ccae:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ccb2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827ccb5:	89 04 24             	mov    %eax,(%esp)
 827ccb8:	e8 73 8d 0a 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 827ccbd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827ccc0:	89 04 24             	mov    %eax,(%esp)
 827ccc3:	e8 8a 31 3d 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 827ccc8:	eb 1b                	jmp    827cce5 <_ZN18SpecialItemHandler28respond_special_item_boosterEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x29b>
 827ccca:	89 d3                	mov    %edx,%ebx
 827cccc:	89 c6                	mov    %eax,%esi
 827ccce:	8d 45 b0             	lea    -0x50(%ebp),%eax
 827ccd1:	89 04 24             	mov    %eax,(%esp)
 827ccd4:	e8 e3 4d e9 ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 827ccd9:	89 f0                	mov    %esi,%eax
 827ccdb:	89 da                	mov    %ebx,%edx
 827ccdd:	89 04 24             	mov    %eax,(%esp)
 827cce0:	e8 6b 6a 86 00       	call   8ae3750 <_Unwind_Resume>
 827cce5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 827cce8:	89 04 24             	mov    %eax,(%esp)
 827cceb:	e8 cc 4d e9 ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 827ccf0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 827ccf3:	83 c4 00             	add    $0x0,%esp
 827ccf6:	5b                   	pop    %ebx
 827ccf7:	5e                   	pop    %esi
 827ccf8:	5f                   	pop    %edi
 827ccf9:	5d                   	pop    %ebp
 827ccfa:	c3                   	ret
 827ccfb:	90                   	nop

```

```c
// SpecialItemHandler::respond_special_item_booster @ 0x827ca4a

/* SpecialItemHandler::respond_special_item_booster(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_booster
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  uchar uVar1;
  uchar uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  CDataManager *pCVar6;
  int *piVar7;
  int iVar8;
  ulong *puVar9;
  int iVar10;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_5c [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_58 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_54 [12];
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  CUser *local_40;
  int local_3c;
  vector *local_38;
  stCeraShopItemParam_t *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  CStackableItem *local_24;
  int *local_20;
  
  local_40 = *(CUser **)param_3;
  local_3c = *(int *)(param_3 + 4);
  local_38 = *(vector **)(param_3 + 0xc);
  local_34 = *(stCeraShopItemParam_t **)(param_3 + 0x10);
  local_30 = *(int *)(param_3 + 0x14);
  local_2c = *(int *)(param_3 + 0x18);
  WongWork::CCeraShop::setOriginalItem(*(CCeraShop **)param_1,local_3c);
  WongWork::CCeraShop::_onBuySpecialItem(*(CCeraShop **)param_1,local_40,6,local_3c);
  iVar8 = local_3c;
  local_28 = 0;
  pCVar6 = (CDataManager *)G_CDataManager();
  local_24 = (CStackableItem *)CDataManager::find_item(pCVar6,iVar8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            (local_54);
                    /* try { // try from 0827caf5 to 0827ccc7 has its CatchHandler @ 0827ccca */
  CStackableItem::getBoosterItem(local_24,(vector *)local_54);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin();
  __gnu_cxx::
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_58,local_48);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
  __gnu_cxx::
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_5c,local_44);
  while( true ) {
    bVar4 = __gnu_cxx::operator!=(local_58,local_5c);
    iVar8 = local_3c;
    if (!bVar4) break;
    piVar7 = (int *)__gnu_cxx::
                    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                    ::operator->(local_58);
    iVar8 = *piVar7;
    pCVar6 = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(pCVar6,iVar8);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0x60))(local_20,local_3c);
    }
    iVar8 = __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_58);
    uVar1 = *(uchar *)(iVar8 + 0xd);
    iVar8 = __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_58);
    uVar2 = *(uchar *)(iVar8 + 0xe);
    iVar8 = __gnu_cxx::
            __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
            ::operator->(local_58);
    uVar3 = *(ushort *)(iVar8 + 8);
    puVar9 = (ulong *)__gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_58);
    WongWork::CCeraShop::_processAdditionalItem
              (*(CCeraShop **)param_1,local_40,*puVar9,uVar3,uVar2,uVar1,local_38,local_34,'\0');
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 0x60))(local_20,0);
    }
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::operator++(local_58);
  }
  iVar10 = G_CDataManager();
  local_30 = CItemList::GetRestrictCode(*(CItemList **)(iVar10 + 0xc),iVar8);
  if (local_30 != 0) {
    cVar5 = CUser::IsRestrictedGoods(local_40,local_30);
    if (cVar5 != '\x01') {
      CUser::SetRestrictedGoods(local_40,local_30);
      WongWork::CCeraShop::SaveFeaturedIdx(local_40,local_30,local_2c,0);
    }
  }
  CUser::SaveInventory(local_40);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
            (local_54);
  return;
}

```

---

## respond_special_item_booster_selection

```asm
// === 0827ccfc SpecialItemHandler::respond_special_item_booster_selection  [0x0827ccfc-0x827cdb5] ===
 827ccfc:	55                   	push   %ebp
 827ccfd:	89 e5                	mov    %esp,%ebp
 827ccff:	57                   	push   %edi
 827cd00:	56                   	push   %esi
 827cd01:	53                   	push   %ebx
 827cd02:	83 ec 5c             	sub    $0x5c,%esp
 827cd05:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd08:	8b 00                	mov    (%eax),%eax
 827cd0a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 827cd0d:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd10:	8b 40 04             	mov    0x4(%eax),%eax
 827cd13:	89 45 d0             	mov    %eax,-0x30(%ebp)
 827cd16:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd19:	8b 40 0c             	mov    0xc(%eax),%eax
 827cd1c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 827cd1f:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd22:	8b 40 10             	mov    0x10(%eax),%eax
 827cd25:	89 45 d8             	mov    %eax,-0x28(%ebp)
 827cd28:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd2b:	8b 40 14             	mov    0x14(%eax),%eax
 827cd2e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 827cd31:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd34:	8b 40 18             	mov    0x18(%eax),%eax
 827cd37:	89 45 e0             	mov    %eax,-0x20(%ebp)
 827cd3a:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd3d:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 827cd41:	88 45 e5             	mov    %al,-0x1b(%ebp)
 827cd44:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd47:	0f b6 40 1d          	movzbl 0x1d(%eax),%eax
 827cd4b:	88 45 e6             	mov    %al,-0x1a(%ebp)
 827cd4e:	8b 45 10             	mov    0x10(%ebp),%eax
 827cd51:	0f b6 40 1e          	movzbl 0x1e(%eax),%eax
 827cd55:	88 45 e7             	mov    %al,-0x19(%ebp)
 827cd58:	0f be 7d e7          	movsbl -0x19(%ebp),%edi
 827cd5c:	0f be 75 e6          	movsbl -0x1a(%ebp),%esi
 827cd60:	0f b6 5d e5          	movzbl -0x1b(%ebp),%ebx
 827cd64:	8b 4d 14             	mov    0x14(%ebp),%ecx
 827cd67:	8b 55 d0             	mov    -0x30(%ebp),%edx
 827cd6a:	8b 45 08             	mov    0x8(%ebp),%eax
 827cd6d:	8b 00                	mov    (%eax),%eax
 827cd6f:	89 7c 24 28          	mov    %edi,0x28(%esp)
 827cd73:	89 74 24 24          	mov    %esi,0x24(%esp)
 827cd77:	8b 75 d8             	mov    -0x28(%ebp),%esi
 827cd7a:	89 74 24 20          	mov    %esi,0x20(%esp)
 827cd7e:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 827cd81:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 827cd85:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 827cd89:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827cd8c:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 827cd90:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 827cd94:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 827cd97:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 827cd9b:	89 54 24 08          	mov    %edx,0x8(%esp)
 827cd9f:	8b 55 cc             	mov    -0x34(%ebp),%edx
 827cda2:	89 54 24 04          	mov    %edx,0x4(%esp)
 827cda6:	89 04 24             	mov    %eax,(%esp)
 827cda9:	e8 e6 aa 0a 00       	call   8327894 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc>
 827cdae:	83 c4 5c             	add    $0x5c,%esp
 827cdb1:	5b                   	pop    %ebx
 827cdb2:	5e                   	pop    %esi
 827cdb3:	5f                   	pop    %edi
 827cdb4:	5d                   	pop    %ebp
 827cdb5:	c3                   	ret

```

```c
// SpecialItemHandler::respond_special_item_booster_selection @ 0x827ccfc

/* SpecialItemHandler::respond_special_item_booster_selection(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_booster_selection
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  WongWork::CCeraShop::_processBoosterSelect
            (*(CUser **)this,*(int *)param_2,*(int *)(param_2 + 4),*(int **)(param_2 + 0x14),
             (long)param_3,SUB41(*(undefined4 *)(param_2 + 0x18),0),
             (vector *)(uint)(byte)param_2[0x1c],*(stCeraShopItemParam_t **)(param_2 + 0xc),
             (char)*(undefined4 *)(param_2 + 0x10),(char)param_2[0x1d]);
  return;
}

```

---

## respond_special_item_cargo

```asm
// === 0827be8a SpecialItemHandler::respond_special_item_cargo  [0x0827be8a-0x827bee5] ===
 827be8a:	55                   	push   %ebp
 827be8b:	89 e5                	mov    %esp,%ebp
 827be8d:	53                   	push   %ebx
 827be8e:	83 ec 14             	sub    $0x14,%esp
 827be91:	8b 45 10             	mov    0x10(%ebp),%eax
 827be94:	8b 58 08             	mov    0x8(%eax),%ebx
 827be97:	8b 45 10             	mov    0x10(%ebp),%eax
 827be9a:	8b 00                	mov    (%eax),%eax
 827be9c:	89 04 24             	mov    %eax,(%esp)
 827be9f:	e8 f0 5b ed ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 827bea4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827bea8:	89 04 24             	mov    %eax,(%esp)
 827beab:	e8 a6 07 29 00       	call   850c656 <_ZN6CCargo12UpgradeCargoEi>
 827beb0:	83 f0 01             	xor    $0x1,%eax
 827beb3:	84 c0                	test   %al,%al
 827beb5:	74 0b                	je     827bec2 <_ZN18SpecialItemHandler26respond_special_item_cargoEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x38>
 827beb7:	8b 45 14             	mov    0x14(%ebp),%eax
 827beba:	c7 00 17 00 00 00    	movl   $0x17,(%eax)
 827bec0:	eb 1d                	jmp    827bedf <_ZN18SpecialItemHandler26respond_special_item_cargoEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x55>
 827bec2:	8b 45 10             	mov    0x10(%ebp),%eax
 827bec5:	8b 10                	mov    (%eax),%edx
 827bec7:	8b 45 08             	mov    0x8(%ebp),%eax
 827beca:	8b 00                	mov    (%eax),%eax
 827becc:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 827becf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827bed3:	89 54 24 04          	mov    %edx,0x4(%esp)
 827bed7:	89 04 24             	mov    %eax,(%esp)
 827beda:	e8 47 b8 0a 00       	call   8327726 <_ZN8WongWork9CCeraShop23_sendCargoUpgradePacketEP5CUseri>
 827bedf:	83 c4 14             	add    $0x14,%esp
 827bee2:	5b                   	pop    %ebx
 827bee3:	5d                   	pop    %ebp
 827bee4:	c3                   	ret
 827bee5:	90                   	nop

```

```c
// SpecialItemHandler::respond_special_item_cargo @ 0x827be8a

/* SpecialItemHandler::respond_special_item_cargo(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_cargo
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  int iVar1;
  char cVar2;
  CCargo *this_00;
  
  iVar1 = *(int *)(param_2 + 8);
  this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(*(CUserCharacInfo **)param_2);
  cVar2 = CCargo::UpgradeCargo(this_00,iVar1);
  if (cVar2 == '\x01') {
    WongWork::CCeraShop::_sendCargoUpgradePacket(*(CCeraShop **)this,*(CUser **)param_2,param_1);
  }
  else {
    *(undefined4 *)param_3 = 0x17;
  }
  return;
}

```

---

## respond_special_item_cargo_abs

```asm
// === 0827bee6 SpecialItemHandler::respond_special_item_cargo_abs  [0x0827bee6-0x827bf8f] ===
 827bee6:	55                   	push   %ebp
 827bee7:	89 e5                	mov    %esp,%ebp
 827bee9:	53                   	push   %ebx
 827beea:	83 ec 14             	sub    $0x14,%esp
 827beed:	8b 45 10             	mov    0x10(%ebp),%eax
 827bef0:	8b 00                	mov    (%eax),%eax
 827bef2:	89 04 24             	mov    %eax,(%esp)
 827bef5:	e8 8a 5b ed ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 827befa:	89 04 24             	mov    %eax,(%esp)
 827befd:	e8 06 18 fb ff       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 827bf02:	8b 55 10             	mov    0x10(%ebp),%edx
 827bf05:	8b 52 08             	mov    0x8(%edx),%edx
 827bf08:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 827bf0b:	8b 45 10             	mov    0x10(%ebp),%eax
 827bf0e:	8b 00                	mov    (%eax),%eax
 827bf10:	89 04 24             	mov    %eax,(%esp)
 827bf13:	e8 6c 5b ed ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 827bf18:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827bf1c:	89 04 24             	mov    %eax,(%esp)
 827bf1f:	e8 74 07 29 00       	call   850c698 <_ZNK6CCargo12isUpgradableEi>
 827bf24:	83 f0 01             	xor    $0x1,%eax
 827bf27:	84 c0                	test   %al,%al
 827bf29:	74 0b                	je     827bf36 <_ZN18SpecialItemHandler30respond_special_item_cargo_absEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x50>
 827bf2b:	8b 45 14             	mov    0x14(%ebp),%eax
 827bf2e:	c7 00 12 00 00 00    	movl   $0x12,(%eax)
 827bf34:	eb 54                	jmp    827bf8a <_ZN18SpecialItemHandler30respond_special_item_cargo_absEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0xa4>
 827bf36:	8b 45 10             	mov    0x10(%ebp),%eax
 827bf39:	8b 00                	mov    (%eax),%eax
 827bf3b:	89 04 24             	mov    %eax,(%esp)
 827bf3e:	e8 41 5b ed ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 827bf43:	89 04 24             	mov    %eax,(%esp)
 827bf46:	e8 bd 17 fb ff       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 827bf4b:	8b 55 10             	mov    0x10(%ebp),%edx
 827bf4e:	8b 52 08             	mov    0x8(%edx),%edx
 827bf51:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 827bf54:	8b 45 10             	mov    0x10(%ebp),%eax
 827bf57:	8b 00                	mov    (%eax),%eax
 827bf59:	89 04 24             	mov    %eax,(%esp)
 827bf5c:	e8 33 5b ed ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 827bf61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827bf65:	89 04 24             	mov    %eax,(%esp)
 827bf68:	e8 e9 06 29 00       	call   850c656 <_ZN6CCargo12UpgradeCargoEi>
 827bf6d:	8b 45 10             	mov    0x10(%ebp),%eax
 827bf70:	8b 10                	mov    (%eax),%edx
 827bf72:	8b 45 08             	mov    0x8(%ebp),%eax
 827bf75:	8b 00                	mov    (%eax),%eax
 827bf77:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 827bf7a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827bf7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 827bf82:	89 04 24             	mov    %eax,(%esp)
 827bf85:	e8 9c b7 0a 00       	call   8327726 <_ZN8WongWork9CCeraShop23_sendCargoUpgradePacketEP5CUseri>
 827bf8a:	83 c4 14             	add    $0x14,%esp
 827bf8d:	5b                   	pop    %ebx
 827bf8e:	5d                   	pop    %ebp
 827bf8f:	c3                   	ret

```

```c
// SpecialItemHandler::respond_special_item_cargo_abs @ 0x827bee6

/* SpecialItemHandler::respond_special_item_cargo_abs(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_cargo_abs
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  int iVar1;
  char cVar2;
  CCargo *pCVar3;
  int iVar4;
  
  pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)param_2);
  iVar4 = CCargo::GetCapacity(pCVar3);
  iVar1 = *(int *)(param_2 + 8);
  pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)param_2);
  cVar2 = CCargo::isUpgradable(pCVar3,iVar4 + iVar1);
  if (cVar2 == '\x01') {
    pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)param_2);
    iVar4 = CCargo::GetCapacity(pCVar3);
    iVar1 = *(int *)(param_2 + 8);
    pCVar3 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(*(CUserCharacInfo **)param_2);
    CCargo::UpgradeCargo(pCVar3,iVar4 + iVar1);
    WongWork::CCeraShop::_sendCargoUpgradePacket(*(CCeraShop **)this,*(CUser **)param_2,param_1);
  }
  else {
    *(undefined4 *)param_3 = 0x12;
  }
  return;
}

```

---

## respond_special_item_cerapoint_giftcard

```asm
// === 0827de4e SpecialItemHandler::respond_special_item_cerapoint_giftcard  [0x0827de4e-0x827de9d] ===
 827de4e:	55                   	push   %ebp
 827de4f:	89 e5                	mov    %esp,%ebp
 827de51:	53                   	push   %ebx
 827de52:	83 ec 24             	sub    $0x24,%esp
 827de55:	a1 34 f7 41 09       	mov    0x941f734,%eax
 827de5a:	8b 00                	mov    (%eax),%eax
 827de5c:	83 c0 0c             	add    $0xc,%eax
 827de5f:	8b 18                	mov    (%eax),%ebx
 827de61:	8b 45 10             	mov    0x10(%ebp),%eax
 827de64:	8b 40 08             	mov    0x8(%eax),%eax
 827de67:	89 c1                	mov    %eax,%ecx
 827de69:	8b 45 10             	mov    0x10(%ebp),%eax
 827de6c:	8b 10                	mov    (%eax),%edx
 827de6e:	a1 34 f7 41 09       	mov    0x941f734,%eax
 827de73:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827de7a:	00 
 827de7b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827de82:	00 
 827de83:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 827de8a:	00 
 827de8b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827de8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 827de93:	89 04 24             	mov    %eax,(%esp)
 827de96:	ff d3                	call   *%ebx
 827de98:	83 c4 24             	add    $0x24,%esp
 827de9b:	5b                   	pop    %ebx
 827de9c:	5d                   	pop    %ebp
 827de9d:	c3                   	ret

```

```c
// SpecialItemHandler::respond_special_item_cerapoint_giftcard @ 0x827de4e

/* SpecialItemHandler::respond_special_item_cerapoint_giftcard(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_cerapoint_giftcard
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  (**(code **)(*GlobalData::s_pIPGHelper + 0xc))
            (GlobalData::s_pIPGHelper,*(undefined4 *)param_3,*(undefined4 *)(param_3 + 8),2,0,0);
  return;
}

```

---

## respond_special_item_charac_slot_extend

```asm
// === 0827c0c2 SpecialItemHandler::respond_special_item_charac_slot_extend  [0x0827c0c2-0x827c203] ===
 827c0c2:	55                   	push   %ebp
 827c0c3:	89 e5                	mov    %esp,%ebp
 827c0c5:	56                   	push   %esi
 827c0c6:	53                   	push   %ebx
 827c0c7:	83 ec 20             	sub    $0x20,%esp
 827c0ca:	8b 45 10             	mov    0x10(%ebp),%eax
 827c0cd:	8b 40 08             	mov    0x8(%eax),%eax
 827c0d0:	0f b6 d0             	movzbl %al,%edx
 827c0d3:	8b 45 10             	mov    0x10(%ebp),%eax
 827c0d6:	8b 00                	mov    (%eax),%eax
 827c0d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c0dc:	89 04 24             	mov    %eax,(%esp)
 827c0df:	e8 3a 1e 00 00       	call   827df1e <_ZN5CUser18incCharacSlotLimitEh>
 827c0e4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 827c0e9:	c7 44 24 08 8d 00 00 	movl   $0x8d,0x8(%esp)
 827c0f0:	00 
 827c0f1:	c7 44 24 04 43 7e c0 	movl   $0x8c07e43,0x4(%esp)
 827c0f8:	08 
 827c0f9:	89 04 24             	mov    %eax,(%esp)
 827c0fc:	e8 85 39 01 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 827c101:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 827c108:	00 
 827c109:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c10d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827c110:	89 04 24             	mov    %eax,(%esp)
 827c113:	e8 0e cb e4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 827c118:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827c11b:	89 04 24             	mov    %eax,(%esp)
 827c11e:	e8 23 cb e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827c123:	c7 44 24 04 8a 02 00 	movl   $0x28a,0x4(%esp)
 827c12a:	00 
 827c12b:	89 04 24             	mov    %eax,(%esp)
 827c12e:	e8 23 cb e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827c133:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827c136:	89 04 24             	mov    %eax,(%esp)
 827c139:	e8 08 cb e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827c13e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 827c145:	ff 
 827c146:	89 04 24             	mov    %eax,(%esp)
 827c149:	e8 08 cb e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827c14e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827c151:	89 04 24             	mov    %eax,(%esp)
 827c154:	e8 f5 ca e4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 827c159:	89 04 24             	mov    %eax,(%esp)
 827c15c:	e8 3f af fb ff       	call   82370a0 <_ZN12CStreamGuard11GetInBufferI22SIG_EXTEND_CHARAC_SLOTEEPT_v>
 827c161:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827c164:	8b 45 10             	mov    0x10(%ebp),%eax
 827c167:	8b 00                	mov    (%eax),%eax
 827c169:	89 04 24             	mov    %eax,(%esp)
 827c16c:	e8 fd e1 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 827c171:	8b 55 f4             	mov    -0xc(%ebp),%edx
 827c174:	89 02                	mov    %eax,(%edx)
 827c176:	8b 45 10             	mov    0x10(%ebp),%eax
 827c179:	8b 00                	mov    (%eax),%eax
 827c17b:	89 04 24             	mov    %eax,(%esp)
 827c17e:	e8 ed 46 fb ff       	call   8230870 <_ZNK5CUser18getSlotEffectCountEv>
 827c183:	8b 55 f4             	mov    -0xc(%ebp),%edx
 827c186:	88 42 04             	mov    %al,0x4(%edx)
 827c189:	8b 45 10             	mov    0x10(%ebp),%eax
 827c18c:	8b 00                	mov    (%eax),%eax
 827c18e:	89 04 24             	mov    %eax,(%esp)
 827c191:	e8 ca 46 fb ff       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 827c196:	8b 55 f4             	mov    -0xc(%ebp),%edx
 827c199:	88 42 05             	mov    %al,0x5(%edx)
 827c19c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 827c1a1:	8d 55 ec             	lea    -0x14(%ebp),%edx
 827c1a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 827c1a8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 827c1af:	00 
 827c1b0:	89 04 24             	mov    %eax,(%esp)
 827c1b3:	e8 26 4e 2f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 827c1b8:	8b 45 10             	mov    0x10(%ebp),%eax
 827c1bb:	8b 10                	mov    (%eax),%edx
 827c1bd:	8b 45 08             	mov    0x8(%ebp),%eax
 827c1c0:	8b 00                	mov    (%eax),%eax
 827c1c2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 827c1c5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827c1c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c1cd:	89 04 24             	mov    %eax,(%esp)
 827c1d0:	e8 9f b4 0a 00       	call   8327674 <_ZN8WongWork9CCeraShop27_sendCharacSlotExtendPacketEP5CUseri>
 827c1d5:	eb 1b                	jmp    827c1f2 <_ZN18SpecialItemHandler39respond_special_item_charac_slot_extendEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x130>
 827c1d7:	89 d3                	mov    %edx,%ebx
 827c1d9:	89 c6                	mov    %eax,%esi
 827c1db:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827c1de:	89 04 24             	mov    %eax,(%esp)
 827c1e1:	e8 ec 06 3a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 827c1e6:	89 f0                	mov    %esi,%eax
 827c1e8:	89 da                	mov    %ebx,%edx
 827c1ea:	89 04 24             	mov    %eax,(%esp)
 827c1ed:	e8 5e 75 86 00       	call   8ae3750 <_Unwind_Resume>
 827c1f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827c1f5:	89 04 24             	mov    %eax,(%esp)
 827c1f8:	e8 d5 06 3a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 827c1fd:	83 c4 20             	add    $0x20,%esp
 827c200:	5b                   	pop    %ebx
 827c201:	5e                   	pop    %esi
 827c202:	5d                   	pop    %ebp
 827c203:	c3                   	ret

```

```c
// SpecialItemHandler::respond_special_item_charac_slot_extend @ 0x827c0c2

/* SpecialItemHandler::respond_special_item_charac_slot_extend(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_charac_slot_extend
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  SIG_EXTEND_CHARAC_SLOT SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_EXTEND_CHARAC_SLOT *local_10;
  
  CUser::incCharacSlotLimit(*(CUser **)param_3,(uchar)*(undefined4 *)(param_3 + 8));
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"SpecialItemHandler.cpp",0x8d);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0827c12e to 0827c1d4 has its CatchHandler @ 0827c1d7 */
  CStreamGuard::operator<<(pCVar3,0x28a);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,-1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_EXTEND_CHARAC_SLOT>(pCVar3);
  uVar4 = CUser::get_acc_id(*(CUser **)param_3);
  *(undefined4 *)local_10 = uVar4;
  SVar1 = (SIG_EXTEND_CHARAC_SLOT)CUser::getSlotEffectCount(*(CUser **)param_3);
  local_10[4] = SVar1;
  SVar1 = (SIG_EXTEND_CHARAC_SLOT)CUser::getCharacSlotLimit(*(CUser **)param_3);
  local_10[5] = SVar1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  WongWork::CCeraShop::_sendCharacSlotExtendPacket
            (*(CCeraShop **)param_1,*(CUser **)param_3,(int)param_2);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## respond_special_item_gift_ticket

```asm
// === 0827cdb6 SpecialItemHandler::respond_special_item_gift_ticket  [0x0827cdb6-0x827cdcf] ===
 827cdb6:	55                   	push   %ebp
 827cdb7:	89 e5                	mov    %esp,%ebp
 827cdb9:	83 ec 10             	sub    $0x10,%esp
 827cdbc:	8b 45 10             	mov    0x10(%ebp),%eax
 827cdbf:	8b 00                	mov    (%eax),%eax
 827cdc1:	89 45 f8             	mov    %eax,-0x8(%ebp)
 827cdc4:	8b 45 10             	mov    0x10(%ebp),%eax
 827cdc7:	8b 40 08             	mov    0x8(%eax),%eax
 827cdca:	89 45 fc             	mov    %eax,-0x4(%ebp)
 827cdcd:	c9                   	leave
 827cdce:	c3                   	ret
 827cdcf:	90                   	nop

```

```c
// SpecialItemHandler::respond_special_item_gift_ticket @ 0x827cdb6

/* SpecialItemHandler::respond_special_item_gift_ticket(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_gift_ticket
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  return;
}

```

---

## respond_special_item_inventory_upgrade

```asm
// === 0827bf90 SpecialItemHandler::respond_special_item_inventory_upgrade  [0x0827bf90-0x827c0c1] ===
 827bf90:	55                   	push   %ebp
 827bf91:	89 e5                	mov    %esp,%ebp
 827bf93:	57                   	push   %edi
 827bf94:	56                   	push   %esi
 827bf95:	53                   	push   %ebx
 827bf96:	83 ec 2c             	sub    $0x2c,%esp
 827bf99:	8b 45 10             	mov    0x10(%ebp),%eax
 827bf9c:	8b 00                	mov    (%eax),%eax
 827bf9e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827bfa1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827bfa4:	89 04 24             	mov    %eax,(%esp)
 827bfa7:	e8 d2 e2 e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827bfac:	89 04 24             	mov    %eax,(%esp)
 827bfaf:	e8 48 17 fb ff       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 827bfb4:	83 f8 0f             	cmp    $0xf,%eax
 827bfb7:	0f 9f c0             	setg   %al
 827bfba:	84 c0                	test   %al,%al
 827bfbc:	74 0e                	je     827bfcc <_ZN18SpecialItemHandler38respond_special_item_inventory_upgradeEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x3c>
 827bfbe:	8b 45 14             	mov    0x14(%ebp),%eax
 827bfc1:	c7 00 12 00 00 00    	movl   $0x12,(%eax)
 827bfc7:	e9 ee 00 00 00       	jmp    827c0ba <_ZN18SpecialItemHandler38respond_special_item_inventory_upgradeEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x12a>
 827bfcc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827bfcf:	89 04 24             	mov    %eax,(%esp)
 827bfd2:	e8 a7 e2 e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827bfd7:	89 04 24             	mov    %eax,(%esp)
 827bfda:	e8 1d 17 fb ff       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 827bfdf:	8b 55 10             	mov    0x10(%ebp),%edx
 827bfe2:	8b 52 08             	mov    0x8(%edx),%edx
 827bfe5:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 827bfe8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827bfeb:	89 04 24             	mov    %eax,(%esp)
 827bfee:	e8 8b e2 e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827bff3:	89 04 24             	mov    %eax,(%esp)
 827bff6:	e8 01 17 fb ff       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 827bffb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 827bffe:	81 c2 00 97 07 00    	add    $0x79700,%edx
 827c004:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827c00b:	00 
 827c00c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827c010:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c014:	89 14 24             	mov    %edx,(%esp)
 827c017:	e8 a0 7c 40 00       	call   8683cbc <_ZN15cUserHistoryLog15ExpandInventoryEiii>
 827c01c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c01f:	89 04 24             	mov    %eax,(%esp)
 827c022:	e8 57 e2 e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827c027:	89 04 24             	mov    %eax,(%esp)
 827c02a:	e8 cd 16 fb ff       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 827c02f:	8b 55 10             	mov    0x10(%ebp),%edx
 827c032:	8b 52 08             	mov    0x8(%edx),%edx
 827c035:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 827c038:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c03b:	89 04 24             	mov    %eax,(%esp)
 827c03e:	e8 3b e2 e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827c043:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827c047:	89 04 24             	mov    %eax,(%esp)
 827c04a:	e8 9f 16 fb ff       	call   822d6ee <_ZN10CInventory22set_inventory_capacityEi>
 827c04f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c052:	89 04 24             	mov    %eax,(%esp)
 827c055:	e8 24 e2 e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827c05a:	89 04 24             	mov    %eax,(%esp)
 827c05d:	e8 9a 16 fb ff       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 827c062:	89 c7                	mov    %eax,%edi
 827c064:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c067:	89 04 24             	mov    %eax,(%esp)
 827c06a:	e8 df fb e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827c06f:	89 c6                	mov    %eax,%esi
 827c071:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c074:	89 04 24             	mov    %eax,(%esp)
 827c077:	e8 1a cc e4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 827c07c:	89 c3                	mov    %eax,%ebx
 827c07e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c081:	89 04 24             	mov    %eax,(%esp)
 827c084:	e8 07 fc e4 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 827c089:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 827c08d:	89 74 24 08          	mov    %esi,0x8(%esp)
 827c091:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827c095:	89 04 24             	mov    %eax,(%esp)
 827c098:	e8 75 8c 1c 00       	call   8444d12 <_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji>
 827c09d:	8b 45 10             	mov    0x10(%ebp),%eax
 827c0a0:	8b 10                	mov    (%eax),%edx
 827c0a2:	8b 45 08             	mov    0x8(%ebp),%eax
 827c0a5:	8b 00                	mov    (%eax),%eax
 827c0a7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 827c0aa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827c0ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c0b2:	89 04 24             	mov    %eax,(%esp)
 827c0b5:	e8 04 b5 0a 00       	call   83275be <_ZN8WongWork9CCeraShop27_sendInventoryUpgradePacketEP5CUseri>
 827c0ba:	83 c4 2c             	add    $0x2c,%esp
 827c0bd:	5b                   	pop    %ebx
 827c0be:	5e                   	pop    %esi
 827c0bf:	5f                   	pop    %edi
 827c0c0:	5d                   	pop    %ebp
 827c0c1:	c3                   	ret

```

```c
// SpecialItemHandler::respond_special_item_inventory_upgrade @ 0x827bf90

/* SpecialItemHandler::respond_special_item_inventory_upgrade(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
SpecialItemHandler::respond_special_item_inventory_upgrade
          (SpecialItemHandler *this,int param_1,STSpecailItem_Param *param_2,
          STSpecailItem_Result *param_3)

{
  CUserCharacInfo *this_00;
  CInventory *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  this_00 = *(CUserCharacInfo **)param_2;
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
  iVar2 = CInventory::get_inventory_capacity(pCVar1);
  if (iVar2 < 0x10) {
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    iVar3 = CInventory::get_inventory_capacity(pCVar1);
    iVar2 = *(int *)(param_2 + 8);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    iVar4 = CInventory::get_inventory_capacity(pCVar1);
    cUserHistoryLog::ExpandInventory((cUserHistoryLog *)(this_00 + 0x79700),iVar4,iVar3 + iVar2,0);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    iVar3 = CInventory::get_inventory_capacity(pCVar1);
    iVar2 = *(int *)(param_2 + 8);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    CInventory::set_inventory_capacity(pCVar1,iVar3 + iVar2);
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
    uVar5 = CInventory::get_inventory_capacity(pCVar1);
    uVar6 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar7 = CUser::GetUID((CUser *)this_00);
    uVar8 = CUser::GetServerGroup((CUser *)this_00);
    DB_UpdateInventoryCapacity::makeRequest(uVar8,uVar7,uVar6,uVar5);
    WongWork::CCeraShop::_sendInventoryUpgradePacket(*(CCeraShop **)this,*(CUser **)param_2,param_1)
    ;
  }
  else {
    *(undefined4 *)param_3 = 0x12;
  }
  return;
}

```

---

## respond_special_item_package

```asm
// === 0827c204 SpecialItemHandler::respond_special_item_package  [0x0827c204-0x827ca49] ===
 827c204:	55                   	push   %ebp
 827c205:	89 e5                	mov    %esp,%ebp
 827c207:	57                   	push   %edi
 827c208:	56                   	push   %esi
 827c209:	53                   	push   %ebx
 827c20a:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 827c210:	8b 45 10             	mov    0x10(%ebp),%eax
 827c213:	8b 00                	mov    (%eax),%eax
 827c215:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 827c218:	8b 45 10             	mov    0x10(%ebp),%eax
 827c21b:	8b 40 04             	mov    0x4(%eax),%eax
 827c21e:	89 45 b8             	mov    %eax,-0x48(%ebp)
 827c221:	8b 45 10             	mov    0x10(%ebp),%eax
 827c224:	8b 40 0c             	mov    0xc(%eax),%eax
 827c227:	89 45 bc             	mov    %eax,-0x44(%ebp)
 827c22a:	8b 45 10             	mov    0x10(%ebp),%eax
 827c22d:	8b 40 10             	mov    0x10(%eax),%eax
 827c230:	89 45 c0             	mov    %eax,-0x40(%ebp)
 827c233:	8b 45 10             	mov    0x10(%ebp),%eax
 827c236:	8b 40 14             	mov    0x14(%eax),%eax
 827c239:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827c23c:	8b 45 10             	mov    0x10(%ebp),%eax
 827c23f:	8b 40 18             	mov    0x18(%eax),%eax
 827c242:	89 45 c8             	mov    %eax,-0x38(%ebp)
 827c245:	83 7d b8 1b          	cmpl   $0x1b,-0x48(%ebp)
 827c249:	0f 85 09 01 00 00    	jne    827c358 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x154>
 827c24f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 827c254:	c7 44 24 08 c3 00 00 	movl   $0xc3,0x8(%esp)
 827c25b:	00 
 827c25c:	c7 44 24 04 43 7e c0 	movl   $0x8c07e43,0x4(%esp)
 827c263:	08 
 827c264:	89 04 24             	mov    %eax,(%esp)
 827c267:	e8 1a 38 01 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 827c26c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 827c273:	00 
 827c274:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c278:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827c27b:	89 04 24             	mov    %eax,(%esp)
 827c27e:	e8 a3 c9 e4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 827c283:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827c286:	89 04 24             	mov    %eax,(%esp)
 827c289:	e8 b8 c9 e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827c28e:	c7 44 24 04 b4 00 00 	movl   $0xb4,0x4(%esp)
 827c295:	00 
 827c296:	89 04 24             	mov    %eax,(%esp)
 827c299:	e8 b8 c9 e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827c29e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827c2a1:	89 04 24             	mov    %eax,(%esp)
 827c2a4:	e8 9d c9 e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827c2a9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 827c2b0:	ff 
 827c2b1:	89 04 24             	mov    %eax,(%esp)
 827c2b4:	e8 9d c9 e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827c2b9:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827c2bc:	89 04 24             	mov    %eax,(%esp)
 827c2bf:	e8 8a c9 e4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 827c2c4:	89 04 24             	mov    %eax,(%esp)
 827c2c7:	e8 d6 1c 00 00       	call   827dfa2 <_ZN12CStreamGuard11GetInBufferI28SIG_SAVE_CRAZY_LEVELUP_EVENTEEPT_v>
 827c2cc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 827c2cf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827c2d2:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 827c2d9:	00 
 827c2da:	c7 44 24 04 5a 7e c0 	movl   $0x8c07e5a,0x4(%esp)
 827c2e1:	08 
 827c2e2:	89 04 24             	mov    %eax,(%esp)
 827c2e5:	e8 b6 15 e0 ff       	call   807d8a0 <memcpy@plt>
 827c2ea:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c2ed:	89 04 24             	mov    %eax,(%esp)
 827c2f0:	e8 79 e0 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 827c2f5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 827c2f8:	89 42 05             	mov    %eax,0x5(%edx)
 827c2fb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 827c302:	ff 
 827c303:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c306:	89 04 24             	mov    %eax,(%esp)
 827c309:	e8 92 1c 3d 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 827c30e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 827c311:	89 42 09             	mov    %eax,0x9(%edx)
 827c314:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 827c319:	8d 55 8c             	lea    -0x74(%ebp),%edx
 827c31c:	89 54 24 08          	mov    %edx,0x8(%esp)
 827c320:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 827c327:	00 
 827c328:	89 04 24             	mov    %eax,(%esp)
 827c32b:	e8 ae 4c 2f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 827c330:	eb 1b                	jmp    827c34d <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x149>
 827c332:	89 d3                	mov    %edx,%ebx
 827c334:	89 c6                	mov    %eax,%esi
 827c336:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827c339:	89 04 24             	mov    %eax,(%esp)
 827c33c:	e8 91 05 3a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 827c341:	89 f0                	mov    %esi,%eax
 827c343:	89 da                	mov    %ebx,%edx
 827c345:	89 04 24             	mov    %eax,(%esp)
 827c348:	e8 03 74 86 00       	call   8ae3750 <_Unwind_Resume>
 827c34d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827c350:	89 04 24             	mov    %eax,(%esp)
 827c353:	e8 7a 05 3a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 827c358:	8b 45 08             	mov    0x8(%ebp),%eax
 827c35b:	8b 00                	mov    (%eax),%eax
 827c35d:	8b 55 b8             	mov    -0x48(%ebp),%edx
 827c360:	89 54 24 0c          	mov    %edx,0xc(%esp)
 827c364:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 827c36b:	00 
 827c36c:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 827c36f:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c373:	89 04 24             	mov    %eax,(%esp)
 827c376:	e8 d9 b0 0a 00       	call   8327454 <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm>
 827c37b:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 827c382:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 827c385:	e8 11 fe e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827c38a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827c38e:	89 04 24             	mov    %eax,(%esp)
 827c391:	e8 9c 36 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 827c396:	89 45 d0             	mov    %eax,-0x30(%ebp)
 827c399:	8b 45 d0             	mov    -0x30(%ebp),%eax
 827c39c:	05 1c 02 00 00       	add    $0x21c,%eax
 827c3a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c3a5:	8d 45 94             	lea    -0x6c(%ebp),%eax
 827c3a8:	89 04 24             	mov    %eax,(%esp)
 827c3ab:	e8 08 1c 00 00       	call   827dfb8 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EEC1ERKS2_>
 827c3b0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c3b3:	83 c0 0c             	add    $0xc,%eax
 827c3b6:	89 04 24             	mov    %eax,(%esp)
 827c3b9:	e8 ae 1c 00 00       	call   827e06c <_ZNKSt6vectorI23tagPackageItemSelectionSaIS0_EE5emptyEv>
 827c3be:	83 f0 01             	xor    $0x1,%eax
 827c3c1:	84 c0                	test   %al,%al
 827c3c3:	0f 84 44 03 00 00    	je     827c70d <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x509>
 827c3c9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 827c3cc:	05 34 02 00 00       	add    $0x234,%eax
 827c3d1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 827c3d4:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c3d7:	83 c0 0c             	add    $0xc,%eax
 827c3da:	89 04 24             	mov    %eax,(%esp)
 827c3dd:	e8 e4 ed ef ff       	call   817b1c6 <_ZNKSt6vectorI23tagPackageItemSelectionSaIS0_EE4sizeEv>
 827c3e2:	83 f8 01             	cmp    $0x1,%eax
 827c3e5:	0f 97 c0             	seta   %al
 827c3e8:	84 c0                	test   %al,%al
 827c3ea:	0f 84 07 01 00 00    	je     827c4f7 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x2f3>
 827c3f0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c3f3:	8d 50 0c             	lea    0xc(%eax),%edx
 827c3f6:	8d 45 84             	lea    -0x7c(%ebp),%eax
 827c3f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c3fd:	89 04 24             	mov    %eax,(%esp)
 827c400:	e8 d9 eb ef ff       	call   817afde <_ZNSt6vectorI23tagPackageItemSelectionSaIS0_EE5beginEv>
 827c405:	83 ec 04             	sub    $0x4,%esp
 827c408:	e9 b8 00 00 00       	jmp    827c4c5 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x2c1>
 827c40d:	8d 45 84             	lea    -0x7c(%ebp),%eax
 827c410:	89 04 24             	mov    %eax,(%esp)
 827c413:	e8 c4 1c 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c418:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 827c41c:	0f b7 c0             	movzwl %ax,%eax
 827c41f:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 827c425:	8d 45 84             	lea    -0x7c(%ebp),%eax
 827c428:	89 04 24             	mov    %eax,(%esp)
 827c42b:	e8 ac 1c 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c430:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 827c434:	0f b7 f8             	movzwl %ax,%edi
 827c437:	8d 45 84             	lea    -0x7c(%ebp),%eax
 827c43a:	89 04 24             	mov    %eax,(%esp)
 827c43d:	e8 9a 1c 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c442:	8b 30                	mov    (%eax),%esi
 827c444:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 827c44b:	ff 
 827c44c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c44f:	89 04 24             	mov    %eax,(%esp)
 827c452:	e8 49 1b 3d 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 827c457:	89 c3                	mov    %eax,%ebx
 827c459:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c45c:	89 04 24             	mov    %eax,(%esp)
 827c45f:	e8 0a df e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 827c464:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827c46b:	00 
 827c46c:	89 04 24             	mov    %eax,(%esp)
 827c46f:	e8 d7 cb e8 ff       	call   810904b <_Z14NumberToStringji>
 827c474:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 827c47a:	89 54 24 24          	mov    %edx,0x24(%esp)
 827c47e:	89 7c 24 20          	mov    %edi,0x20(%esp)
 827c482:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 827c486:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 827c48a:	89 44 24 14          	mov    %eax,0x14(%esp)
 827c48e:	c7 44 24 10 60 7e c0 	movl   $0x8c07e60,0x10(%esp)
 827c495:	08 
 827c496:	c7 44 24 0c db 00 00 	movl   $0xdb,0xc(%esp)
 827c49d:	00 
 827c49e:	c7 44 24 08 a0 8f c0 	movl   $0x8c08fa0,0x8(%esp)
 827c4a5:	08 
 827c4a6:	c7 44 24 04 43 7e c0 	movl   $0x8c07e43,0x4(%esp)
 827c4ad:	08 
 827c4ae:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 827c4b5:	e8 50 77 85 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 827c4ba:	8d 45 84             	lea    -0x7c(%ebp),%eax
 827c4bd:	89 04 24             	mov    %eax,(%esp)
 827c4c0:	e8 21 1c 00 00       	call   827e0e6 <_ZN9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEppEv>
 827c4c5:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c4c8:	8d 50 0c             	lea    0xc(%eax),%edx
 827c4cb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 827c4ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c4d2:	89 04 24             	mov    %eax,(%esp)
 827c4d5:	e8 98 e5 ef ff       	call   817aa72 <_ZNSt6vectorI23tagPackageItemSelectionSaIS0_EE3endEv>
 827c4da:	83 ec 04             	sub    $0x4,%esp
 827c4dd:	8d 45 a0             	lea    -0x60(%ebp),%eax
 827c4e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c4e4:	8d 45 84             	lea    -0x7c(%ebp),%eax
 827c4e7:	89 04 24             	mov    %eax,(%esp)
 827c4ea:	e8 c1 1b 00 00       	call   827e0b0 <_ZN9__gnu_cxxneIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 827c4ef:	84 c0                	test   %al,%al
 827c4f1:	0f 85 16 ff ff ff    	jne    827c40d <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x209>
 827c4f7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c4fa:	8d 50 0c             	lea    0xc(%eax),%edx
 827c4fd:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c500:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c504:	89 04 24             	mov    %eax,(%esp)
 827c507:	e8 d2 ea ef ff       	call   817afde <_ZNSt6vectorI23tagPackageItemSelectionSaIS0_EE5beginEv>
 827c50c:	83 ec 04             	sub    $0x4,%esp
 827c50f:	e9 c7 01 00 00       	jmp    827c6db <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x4d7>
 827c514:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c517:	89 04 24             	mov    %eax,(%esp)
 827c51a:	e8 bd 1b 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c51f:	8b 00                	mov    (%eax),%eax
 827c521:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 827c524:	0f 94 c0             	sete   %al
 827c527:	84 c0                	test   %al,%al
 827c529:	0f 84 a1 01 00 00    	je     827c6d0 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x4cc>
 827c52f:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c532:	89 04 24             	mov    %eax,(%esp)
 827c535:	e8 a2 1b 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c53a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 827c53e:	0f b7 d8             	movzwl %ax,%ebx
 827c541:	8b 45 d8             	mov    -0x28(%ebp),%eax
 827c544:	89 04 24             	mov    %eax,(%esp)
 827c547:	e8 7c bb fb ff       	call   82380c8 <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EE4sizeEv>
 827c54c:	39 c3                	cmp    %eax,%ebx
 827c54e:	73 3f                	jae    827c58f <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x38b>
 827c550:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c553:	89 04 24             	mov    %eax,(%esp)
 827c556:	e8 81 1b 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c55b:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 827c55f:	0f b7 d8             	movzwl %ax,%ebx
 827c562:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c565:	89 04 24             	mov    %eax,(%esp)
 827c568:	e8 6f 1b 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c56d:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 827c571:	0f b7 c0             	movzwl %ax,%eax
 827c574:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c578:	8b 45 d8             	mov    -0x28(%ebp),%eax
 827c57b:	89 04 24             	mov    %eax,(%esp)
 827c57e:	e8 79 1b 00 00       	call   827e0fc <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EEixEj>
 827c583:	89 04 24             	mov    %eax,(%esp)
 827c586:	e8 8f ac fb ff       	call   823721a <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE4sizeEv>
 827c58b:	39 c3                	cmp    %eax,%ebx
 827c58d:	72 07                	jb     827c596 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x392>
 827c58f:	b8 01 00 00 00       	mov    $0x1,%eax
 827c594:	eb 05                	jmp    827c59b <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x397>
 827c596:	b8 00 00 00 00       	mov    $0x0,%eax
 827c59b:	84 c0                	test   %al,%al
 827c59d:	0f 84 b2 00 00 00    	je     827c655 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x451>
 827c5a3:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c5a6:	89 04 24             	mov    %eax,(%esp)
 827c5a9:	e8 2e 1b 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c5ae:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 827c5b2:	0f b7 c0             	movzwl %ax,%eax
 827c5b5:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 827c5bb:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c5be:	89 04 24             	mov    %eax,(%esp)
 827c5c1:	e8 16 1b 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c5c6:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 827c5ca:	0f b7 f8             	movzwl %ax,%edi
 827c5cd:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c5d0:	89 04 24             	mov    %eax,(%esp)
 827c5d3:	e8 04 1b 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c5d8:	8b 30                	mov    (%eax),%esi
 827c5da:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 827c5e1:	ff 
 827c5e2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c5e5:	89 04 24             	mov    %eax,(%esp)
 827c5e8:	e8 b3 19 3d 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 827c5ed:	89 c3                	mov    %eax,%ebx
 827c5ef:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c5f2:	89 04 24             	mov    %eax,(%esp)
 827c5f5:	e8 74 dd e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 827c5fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827c601:	00 
 827c602:	89 04 24             	mov    %eax,(%esp)
 827c605:	e8 41 ca e8 ff       	call   810904b <_Z14NumberToStringji>
 827c60a:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 827c610:	89 54 24 24          	mov    %edx,0x24(%esp)
 827c614:	89 7c 24 20          	mov    %edi,0x20(%esp)
 827c618:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 827c61c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 827c620:	89 44 24 14          	mov    %eax,0x14(%esp)
 827c624:	c7 44 24 10 9c 7e c0 	movl   $0x8c07e9c,0x10(%esp)
 827c62b:	08 
 827c62c:	c7 44 24 0c e7 00 00 	movl   $0xe7,0xc(%esp)
 827c633:	00 
 827c634:	c7 44 24 08 a0 8f c0 	movl   $0x8c08fa0,0x8(%esp)
 827c63b:	08 
 827c63c:	c7 44 24 04 43 7e c0 	movl   $0x8c07e43,0x4(%esp)
 827c643:	08 
 827c644:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 827c64b:	e8 ba 75 85 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 827c650:	e9 b8 00 00 00       	jmp    827c70d <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x509>
 827c655:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c658:	89 04 24             	mov    %eax,(%esp)
 827c65b:	e8 7c 1a 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c660:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 827c664:	0f b7 d8             	movzwl %ax,%ebx
 827c667:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c66a:	89 04 24             	mov    %eax,(%esp)
 827c66d:	e8 6a 1a 00 00       	call   827e0dc <_ZNK9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEptEv>
 827c672:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 827c676:	0f b7 c0             	movzwl %ax,%eax
 827c679:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c67d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 827c680:	89 04 24             	mov    %eax,(%esp)
 827c683:	e8 74 1a 00 00       	call   827e0fc <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EEixEj>
 827c688:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827c68c:	89 04 24             	mov    %eax,(%esp)
 827c68f:	e8 a2 ab fb ff       	call   8237236 <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE2atEj>
 827c694:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c698:	8d 45 94             	lea    -0x6c(%ebp),%eax
 827c69b:	89 04 24             	mov    %eax,(%esp)
 827c69e:	e8 73 1a 00 00       	call   827e116 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EE9push_backERKS0_>
 827c6a3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c6a6:	8d 48 0c             	lea    0xc(%eax),%ecx
 827c6a9:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 827c6af:	8b 55 88             	mov    -0x78(%ebp),%edx
 827c6b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 827c6b6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 827c6ba:	89 04 24             	mov    %eax,(%esp)
 827c6bd:	e8 c8 1a 00 00       	call   827e18a <_ZNSt6vectorI23tagPackageItemSelectionSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 827c6c2:	83 ec 04             	sub    $0x4,%esp
 827c6c5:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827c6cb:	89 45 88             	mov    %eax,-0x78(%ebp)
 827c6ce:	eb 0b                	jmp    827c6db <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x4d7>
 827c6d0:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c6d3:	89 04 24             	mov    %eax,(%esp)
 827c6d6:	e8 0b 1a 00 00       	call   827e0e6 <_ZN9__gnu_cxx17__normal_iteratorIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEppEv>
 827c6db:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c6de:	8d 50 0c             	lea    0xc(%eax),%edx
 827c6e1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 827c6e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c6e8:	89 04 24             	mov    %eax,(%esp)
 827c6eb:	e8 82 e3 ef ff       	call   817aa72 <_ZNSt6vectorI23tagPackageItemSelectionSaIS0_EE3endEv>
 827c6f0:	83 ec 04             	sub    $0x4,%esp
 827c6f3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 827c6f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c6fa:	8d 45 88             	lea    -0x78(%ebp),%eax
 827c6fd:	89 04 24             	mov    %eax,(%esp)
 827c700:	e8 ab 19 00 00       	call   827e0b0 <_ZN9__gnu_cxxneIP23tagPackageItemSelectionSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 827c705:	84 c0                	test   %al,%al
 827c707:	0f 85 07 fe ff ff    	jne    827c514 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x310>
 827c70d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 827c710:	8d 55 94             	lea    -0x6c(%ebp),%edx
 827c713:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c717:	89 04 24             	mov    %eax,(%esp)
 827c71a:	e8 51 1b 00 00       	call   827e270 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EE5beginEv>
 827c71f:	83 ec 04             	sub    $0x4,%esp
 827c722:	8d 45 a8             	lea    -0x58(%ebp),%eax
 827c725:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c729:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c72c:	89 04 24             	mov    %eax,(%esp)
 827c72f:	e8 60 1b 00 00       	call   827e294 <_ZN9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 827c734:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827c737:	8d 55 94             	lea    -0x6c(%ebp),%edx
 827c73a:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c73e:	89 04 24             	mov    %eax,(%esp)
 827c741:	e8 68 1b 00 00       	call   827e2ae <_ZNSt6vectorI22STStackablePackageDataSaIS0_EE3endEv>
 827c746:	83 ec 04             	sub    $0x4,%esp
 827c749:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827c74c:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c750:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 827c756:	89 04 24             	mov    %eax,(%esp)
 827c759:	e8 36 1b 00 00       	call   827e294 <_ZN9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 827c75e:	e9 1f 02 00 00       	jmp    827c982 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x77e>
 827c763:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 827c767:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827c76a:	89 04 24             	mov    %eax,(%esp)
 827c76d:	e8 28 4a e9 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 827c772:	83 f0 01             	xor    $0x1,%eax
 827c775:	84 c0                	test   %al,%al
 827c777:	0f 84 bd 00 00 00    	je     827c83a <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x636>
 827c77d:	8b 55 c0             	mov    -0x40(%ebp),%edx
 827c780:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827c786:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c78a:	89 04 24             	mov    %eax,(%esp)
 827c78d:	e8 20 0e e6 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 827c792:	83 ec 04             	sub    $0x4,%esp
 827c795:	8b 55 c0             	mov    -0x40(%ebp),%edx
 827c798:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 827c79e:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c7a2:	89 04 24             	mov    %eax,(%esp)
 827c7a5:	e8 2c 0e e6 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 827c7aa:	83 ec 04             	sub    $0x4,%esp
 827c7ad:	eb 6b                	jmp    827c81a <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x616>
 827c7af:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827c7b5:	89 04 24             	mov    %eax,(%esp)
 827c7b8:	e8 31 55 e9 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 827c7bd:	8b 00                	mov    (%eax),%eax
 827c7bf:	89 c3                	mov    %eax,%ebx
 827c7c1:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c7c4:	89 04 24             	mov    %eax,(%esp)
 827c7c7:	e8 4a 1b 00 00       	call   827e316 <_ZNK9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEptEv>
 827c7cc:	8b 00                	mov    (%eax),%eax
 827c7ce:	39 c3                	cmp    %eax,%ebx
 827c7d0:	0f 94 c0             	sete   %al
 827c7d3:	84 c0                	test   %al,%al
 827c7d5:	74 35                	je     827c80c <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x608>
 827c7d7:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827c7dd:	89 04 24             	mov    %eax,(%esp)
 827c7e0:	e8 09 55 e9 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 827c7e5:	8b 40 04             	mov    0x4(%eax),%eax
 827c7e8:	88 45 df             	mov    %al,-0x21(%ebp)
 827c7eb:	8b 55 c0             	mov    -0x40(%ebp),%edx
 827c7ee:	8d 45 b0             	lea    -0x50(%ebp),%eax
 827c7f1:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 827c7f7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 827c7fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c7ff:	89 04 24             	mov    %eax,(%esp)
 827c802:	e8 19 1b 00 00       	call   827e320 <_ZNSt6vectorISt4pairIiiESaIS1_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS1_S3_EE>
 827c807:	83 ec 04             	sub    $0x4,%esp
 827c80a:	eb 2e                	jmp    827c83a <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x636>
 827c80c:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827c812:	89 04 24             	mov    %eax,(%esp)
 827c815:	e8 f0 49 e9 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 827c81a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 827c820:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c824:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 827c82a:	89 04 24             	mov    %eax,(%esp)
 827c82d:	e8 ac 49 e9 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 827c832:	84 c0                	test   %al,%al
 827c834:	0f 85 75 ff ff ff    	jne    827c7af <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x5ab>
 827c83a:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c83d:	89 04 24             	mov    %eax,(%esp)
 827c840:	e8 d1 1a 00 00       	call   827e316 <_ZNK9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEptEv>
 827c845:	8b 00                	mov    (%eax),%eax
 827c847:	89 c3                	mov    %eax,%ebx
 827c849:	e8 4d f9 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827c84e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827c852:	89 04 24             	mov    %eax,(%esp)
 827c855:	e8 d8 31 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 827c85a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 827c85d:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 827c861:	74 19                	je     827c87c <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x678>
 827c863:	8b 45 e0             	mov    -0x20(%ebp),%eax
 827c866:	8b 00                	mov    (%eax),%eax
 827c868:	83 c0 60             	add    $0x60,%eax
 827c86b:	8b 10                	mov    (%eax),%edx
 827c86d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 827c870:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c874:	8b 45 e0             	mov    -0x20(%ebp),%eax
 827c877:	89 04 24             	mov    %eax,(%esp)
 827c87a:	ff d2                	call   *%edx
 827c87c:	0f b6 75 df          	movzbl -0x21(%ebp),%esi
 827c880:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c883:	89 04 24             	mov    %eax,(%esp)
 827c886:	e8 8b 1a 00 00       	call   827e316 <_ZNK9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEptEv>
 827c88b:	8b 40 04             	mov    0x4(%eax),%eax
 827c88e:	0f b7 d8             	movzwl %ax,%ebx
 827c891:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c894:	89 04 24             	mov    %eax,(%esp)
 827c897:	e8 7a 1a 00 00       	call   827e316 <_ZNK9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEptEv>
 827c89c:	8b 10                	mov    (%eax),%edx
 827c89e:	8b 45 08             	mov    0x8(%ebp),%eax
 827c8a1:	8b 00                	mov    (%eax),%eax
 827c8a3:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 827c8aa:	00 
 827c8ab:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 827c8ae:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 827c8b2:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 827c8b5:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 827c8b9:	c7 44 24 14 ff 00 00 	movl   $0xff,0x14(%esp)
 827c8c0:	00 
 827c8c1:	89 74 24 10          	mov    %esi,0x10(%esp)
 827c8c5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 827c8c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 827c8cd:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 827c8d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 827c8d4:	89 04 24             	mov    %eax,(%esp)
 827c8d7:	e8 c6 9e 0a 00       	call   83267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>
 827c8dc:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 827c8e0:	74 1a                	je     827c8fc <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x6f8>
 827c8e2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 827c8e5:	8b 00                	mov    (%eax),%eax
 827c8e7:	83 c0 60             	add    $0x60,%eax
 827c8ea:	8b 10                	mov    (%eax),%edx
 827c8ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827c8f3:	00 
 827c8f4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 827c8f7:	89 04 24             	mov    %eax,(%esp)
 827c8fa:	ff d2                	call   *%edx
 827c8fc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 827c903:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c906:	89 04 24             	mov    %eax,(%esp)
 827c909:	e8 08 1a 00 00       	call   827e316 <_ZNK9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEptEv>
 827c90e:	8b 00                	mov    (%eax),%eax
 827c910:	3d 49 97 28 00       	cmp    $0x289749,%eax
 827c915:	74 46                	je     827c95d <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x759>
 827c917:	3d 2d 98 28 00       	cmp    $0x28982d,%eax
 827c91c:	74 23                	je     827c941 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x73d>
 827c91e:	3d 80 03 00 00       	cmp    $0x380,%eax
 827c923:	75 52                	jne    827c977 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x773>
 827c925:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 827c92c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827c933:	00 
 827c934:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c937:	89 04 24             	mov    %eax,(%esp)
 827c93a:	e8 e7 9e 3f 00       	call   8676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>
 827c93f:	eb 36                	jmp    827c977 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x773>
 827c941:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 827c948:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827c94f:	00 
 827c950:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c953:	89 04 24             	mov    %eax,(%esp)
 827c956:	e8 cb 9e 3f 00       	call   8676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>
 827c95b:	eb 1a                	jmp    827c977 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x773>
 827c95d:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 827c964:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827c96b:	00 
 827c96c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827c96f:	89 04 24             	mov    %eax,(%esp)
 827c972:	e8 af 9e 3f 00       	call   8676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>
 827c977:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c97a:	89 04 24             	mov    %eax,(%esp)
 827c97d:	e8 7e 19 00 00       	call   827e300 <_ZN9__gnu_cxx17__normal_iteratorIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEppEv>
 827c982:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 827c988:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c98c:	8d 45 80             	lea    -0x80(%ebp),%eax
 827c98f:	89 04 24             	mov    %eax,(%esp)
 827c992:	e8 3d 19 00 00       	call   827e2d4 <_ZN9__gnu_cxxneIPK22STStackablePackageDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 827c997:	84 c0                	test   %al,%al
 827c999:	0f 85 c4 fd ff ff    	jne    827c763 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x55f>
 827c99f:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 827c9a2:	e8 f4 f7 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827c9a7:	8b 40 0c             	mov    0xc(%eax),%eax
 827c9aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827c9ae:	89 04 24             	mov    %eax,(%esp)
 827c9b1:	e8 56 d7 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827c9b6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827c9b9:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 827c9bd:	74 4c                	je     827ca0b <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x807>
 827c9bf:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827c9c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c9c6:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c9c9:	89 04 24             	mov    %eax,(%esp)
 827c9cc:	e8 a7 0e 3d 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 827c9d1:	83 f0 01             	xor    $0x1,%eax
 827c9d4:	84 c0                	test   %al,%al
 827c9d6:	74 33                	je     827ca0b <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x807>
 827c9d8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827c9db:	89 44 24 04          	mov    %eax,0x4(%esp)
 827c9df:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827c9e2:	89 04 24             	mov    %eax,(%esp)
 827c9e5:	e8 64 0e 3d 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 827c9ea:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827c9f1:	00 
 827c9f2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 827c9f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 827c9f9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827c9fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ca00:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827ca03:	89 04 24             	mov    %eax,(%esp)
 827ca06:	e8 25 90 0a 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 827ca0b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 827ca0e:	89 04 24             	mov    %eax,(%esp)
 827ca11:	e8 3c 34 3d 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 827ca16:	eb 1b                	jmp    827ca33 <_ZN18SpecialItemHandler28respond_special_item_packageEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x82f>
 827ca18:	89 d3                	mov    %edx,%ebx
 827ca1a:	89 c6                	mov    %eax,%esi
 827ca1c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 827ca1f:	89 04 24             	mov    %eax,(%esp)
 827ca22:	e8 1d 15 00 00       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 827ca27:	89 f0                	mov    %esi,%eax
 827ca29:	89 da                	mov    %ebx,%edx
 827ca2b:	89 04 24             	mov    %eax,(%esp)
 827ca2e:	e8 1d 6d 86 00       	call   8ae3750 <_Unwind_Resume>
 827ca33:	8d 45 94             	lea    -0x6c(%ebp),%eax
 827ca36:	89 04 24             	mov    %eax,(%esp)
 827ca39:	e8 06 15 00 00       	call   827df44 <_ZNSt6vectorI22STStackablePackageDataSaIS0_EED1Ev>
 827ca3e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 827ca41:	83 c4 00             	add    $0x0,%esp
 827ca44:	5b                   	pop    %ebx
 827ca45:	5e                   	pop    %esi
 827ca46:	5f                   	pop    %edi
 827ca47:	5d                   	pop    %ebp
 827ca48:	c3                   	ret
 827ca49:	90                   	nop

```

```c
// SpecialItemHandler::respond_special_item_package @ 0x827c204

/* SpecialItemHandler::respond_special_item_package(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_package
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uchar uVar3;
  char cVar4;
  bool bVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  undefined4 uVar8;
  CDataManager *pCVar9;
  uint uVar10;
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> *pvVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  STStackablePackageData *pSVar15;
  int *piVar16;
  int iVar17;
  ulong *puVar18;
  int iVar19;
  undefined4 local_a0 [4];
  __normal_iterator local_90 [4];
  undefined4 local_8c;
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_88 [4];
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  local_84 [4];
  __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
  local_80 [4];
  undefined4 local_7c;
  CStreamGuard local_78 [8];
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> local_70 [12];
  __normal_iterator local_64 [4];
  __normal_iterator local_60 [4];
  __normal_iterator local_5c [4];
  __normal_iterator local_58 [4];
  undefined1 local_54 [4];
  CUser *local_50;
  int local_4c;
  vector *local_48;
  stCeraShopItemParam_t *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  SIG_SAVE_CRAZY_LEVELUP_EVENT *local_30;
  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
  *local_2c;
  uchar local_25;
  int *local_24;
  undefined4 local_20;
  
  local_50 = *(CUser **)param_3;
  local_4c = *(int *)(param_3 + 4);
  local_48 = *(vector **)(param_3 + 0xc);
  local_44 = *(stCeraShopItemParam_t **)(param_3 + 0x10);
  local_40 = *(int *)(param_3 + 0x14);
  local_3c = *(int *)(param_3 + 0x18);
  if (local_4c == 0x1b) {
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"SpecialItemHandler.cpp",0xc3);
    CStreamGuard::CStreamGuard(local_78,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
                    /* try { // try from 0827c299 to 0827c32f has its CatchHandler @ 0827c332 */
    CStreamGuard::operator<<(pCVar7,0xb4);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
    CStreamGuard::operator<<(pCVar7,-1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_78);
    local_30 = CStreamGuard::GetInBuffer<SIG_SAVE_CRAZY_LEVELUP_EVENT>(pCVar7);
    memcpy(local_30,&DAT_08c07e5a,5);
    uVar8 = CUser::get_acc_id(local_50);
    *(undefined4 *)(local_30 + 5) = uVar8;
    uVar8 = CUser::get_charac_no(local_50,-1);
    *(undefined4 *)(local_30 + 9) = uVar8;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_78);
    CStreamGuard::~CStreamGuard(local_78);
  }
  WongWork::CCeraShop::_onBuySpecialItem(*(CCeraShop **)param_1,local_50,5,local_4c);
  iVar17 = local_4c;
  local_38 = 0;
  pCVar9 = (CDataManager *)G_CDataManager();
  local_34 = CDataManager::find_item(pCVar9,iVar17);
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::vector
            (local_70,(vector *)(local_34 + 0x21c));
                    /* try { // try from 0827c3b9 to 0827ca15 has its CatchHandler @ 0827ca18 */
  cVar4 = std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::empty();
  if (cVar4 != '\x01') {
    local_2c = (vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                *)(local_34 + 0x234);
    uVar10 = std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::size
                       ((vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>> *)
                        (local_44 + 0xc));
    if (1 < uVar10) {
      std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::begin();
      while( true ) {
        std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::end();
        bVar5 = __gnu_cxx::operator!=(local_80,local_64);
        if (!bVar5) break;
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->(local_80);
        uVar1 = *(ushort *)(iVar17 + 6);
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->(local_80);
        uVar2 = *(ushort *)(iVar17 + 4);
        puVar12 = (undefined4 *)
                  __gnu_cxx::
                  __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                  ::operator->(local_80);
        uVar8 = *puVar12;
        uVar13 = CUser::get_charac_no(local_50,-1);
        uVar10 = CUser::get_acc_id(local_50);
        uVar14 = NumberToString(uVar10,0);
        LogManager::logFormat
                  (1,"SpecialItemHandler.cpp",
                   "void SpecialItemHandler::respond_special_item_package(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                   ,0xdb,"kdd372418Log::Package Selection item error (%s,%d,%d,%d,%d)",uVar14,uVar13
                   ,uVar8,(uint)uVar2,(uint)uVar1);
        __gnu_cxx::
        __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
        ::operator++(local_80);
      }
    }
    std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::begin();
    while( true ) {
      std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::end();
      bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_7c,local_60);
      if (!bVar5) break;
      piVar16 = (int *)__gnu_cxx::
                       __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                       ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                     *)&local_7c);
      if (*piVar16 == local_4c) {
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                               *)&local_7c);
        uVar1 = *(ushort *)(iVar17 + 4);
        uVar10 = std::
                 vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                 ::size(local_2c);
        if (uVar1 < uVar10) {
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          uVar1 = *(ushort *)(iVar17 + 6);
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          pvVar11 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                    std::
                    vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                    ::operator[](local_2c,(uint)*(ushort *)(iVar17 + 4));
          uVar10 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::size
                             (pvVar11);
          if (uVar10 <= uVar1) goto LAB_0827c58f;
          bVar5 = false;
        }
        else {
LAB_0827c58f:
          bVar5 = true;
        }
        if (bVar5) {
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          uVar1 = *(ushort *)(iVar17 + 6);
          iVar17 = __gnu_cxx::
                   __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                   ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                 *)&local_7c);
          uVar2 = *(ushort *)(iVar17 + 4);
          puVar12 = (undefined4 *)
                    __gnu_cxx::
                    __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                    ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                                  *)&local_7c);
          uVar8 = *puVar12;
          uVar13 = CUser::get_charac_no(local_50,-1);
          uVar10 = CUser::get_acc_id(local_50);
          uVar14 = NumberToString(uVar10,0);
          LogManager::logFormat
                    (1,"SpecialItemHandler.cpp",
                     "void SpecialItemHandler::respond_special_item_package(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                     ,0xe7,"Package Selection error (%s,%d,%d,%d,%d)",uVar14,uVar13,uVar8,
                     (uint)uVar2,(uint)uVar1);
          break;
        }
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                               *)&local_7c);
        uVar1 = *(ushort *)(iVar17 + 6);
        iVar17 = __gnu_cxx::
                 __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                 ::operator->((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                               *)&local_7c);
        pvVar11 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                  std::
                  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                  ::operator[](local_2c,(uint)*(ushort *)(iVar17 + 4));
        pSVar15 = (STStackablePackageData *)
                  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::at
                            (pvVar11,(uint)uVar1);
        std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::push_back
                  (local_70,pSVar15);
        std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::erase
                  (local_a0,local_44 + 0xc,local_7c);
        local_7c = local_a0[0];
      }
      else {
        __gnu_cxx::
        __normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
        ::operator++((__normal_iterator<tagPackageItemSelection*,std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>>
                      *)&local_7c);
      }
    }
  }
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::begin();
  __gnu_cxx::
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  ::__normal_iterator<STStackablePackageData*>(local_84,local_5c);
  std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::end();
  __gnu_cxx::
  __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
  ::__normal_iterator<STStackablePackageData*>(local_88,local_58);
  do {
    bVar5 = __gnu_cxx::operator!=(local_84,local_88);
    iVar17 = local_4c;
    if (!bVar5) {
      iVar19 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar19 + 0xc),iVar17);
      if (local_40 != 0) {
        cVar4 = CUser::IsRestrictedGoods(local_50,local_40);
        if (cVar4 != '\x01') {
          CUser::SetRestrictedGoods(local_50,local_40);
          WongWork::CCeraShop::SaveFeaturedIdx(local_50,local_40,local_3c,0);
        }
      }
      CUser::SaveInventory(local_50);
      std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::~vector(local_70);
      return;
    }
    local_25 = '\0';
    cVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar4 != '\x01') {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      while( true ) {
        bVar5 = __gnu_cxx::operator!=((__normal_iterator *)&local_8c,local_90);
        if (!bVar5) break;
        piVar16 = (int *)__gnu_cxx::
                         __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                         ::operator->((__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                       *)&local_8c);
        iVar17 = *piVar16;
        piVar16 = (int *)__gnu_cxx::
                         __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                         ::operator->(local_84);
        if (iVar17 == *piVar16) {
          iVar17 = __gnu_cxx::
                   __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                   ::operator->((__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                                 *)&local_8c);
          local_25 = (uchar)*(undefined4 *)(iVar17 + 4);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::erase
                    (local_54,local_44,local_8c);
          break;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++((__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      *)&local_8c);
      }
    }
    piVar16 = (int *)__gnu_cxx::
                     __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                     ::operator->(local_84);
    iVar17 = *piVar16;
    pCVar9 = (CDataManager *)G_CDataManager();
    local_24 = (int *)CDataManager::find_item(pCVar9,iVar17);
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 0x60))(local_24,local_4c);
    }
    uVar3 = local_25;
    iVar17 = __gnu_cxx::
             __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
             ::operator->(local_84);
    uVar8 = *(undefined4 *)(iVar17 + 4);
    puVar18 = (ulong *)__gnu_cxx::
                       __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                       ::operator->(local_84);
    WongWork::CCeraShop::_processAdditionalItem
              (*(CCeraShop **)param_1,local_50,*puVar18,(ushort)uVar8,uVar3,0xff,local_48,local_44,
               '\0');
    if (local_24 != (int *)0x0) {
      (**(code **)(*local_24 + 0x60))(local_24,0);
    }
    local_20 = 0;
    piVar16 = (int *)__gnu_cxx::
                     __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
                     ::operator->(local_84);
    iVar17 = *piVar16;
    if (iVar17 == 0x289749) {
      local_20 = 2;
      CUser::SendRandomBoxStatistic(2,0);
    }
    else if (iVar17 == 0x28982d) {
      local_20 = 1;
      CUser::SendRandomBoxStatistic(1,0);
    }
    else if (iVar17 == 0x380) {
      local_20 = 0;
      CUser::SendRandomBoxStatistic(0,0);
    }
    __gnu_cxx::
    __normal_iterator<STStackablePackageData_const*,std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>
    ::operator++(local_84);
  } while( true );
}

```

---

## respond_special_item_premium

```asm
// === 0827d3dc SpecialItemHandler::respond_special_item_premium  [0x0827d3dc-0x827de4d] ===
 827d3dc:	55                   	push   %ebp
 827d3dd:	89 e5                	mov    %esp,%ebp
 827d3df:	56                   	push   %esi
 827d3e0:	53                   	push   %ebx
 827d3e1:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 827d3e7:	e8 a2 ed e4 ff       	call   80cc18e <_Z14G_CGameManagerv>
 827d3ec:	89 04 24             	mov    %eax,(%esp)
 827d3ef:	e8 94 ba 01 00       	call   8298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>
 827d3f4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 827d3f7:	8b 45 10             	mov    0x10(%ebp),%eax
 827d3fa:	8b 00                	mov    (%eax),%eax
 827d3fc:	89 45 c0             	mov    %eax,-0x40(%ebp)
 827d3ff:	8b 45 10             	mov    0x10(%ebp),%eax
 827d402:	8b 40 04             	mov    0x4(%eax),%eax
 827d405:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 827d40b:	8b 45 10             	mov    0x10(%ebp),%eax
 827d40e:	8b 40 14             	mov    0x14(%eax),%eax
 827d411:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827d414:	8b 45 10             	mov    0x10(%ebp),%eax
 827d417:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 827d41b:	88 45 cb             	mov    %al,-0x35(%ebp)
 827d41e:	8b 45 10             	mov    0x10(%ebp),%eax
 827d421:	8b 40 18             	mov    0x18(%eax),%eax
 827d424:	89 45 cc             	mov    %eax,-0x34(%ebp)
 827d427:	8b 45 cc             	mov    -0x34(%ebp),%eax
 827d42a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 827d42d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 827d430:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 827d436:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 827d43c:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 827d442:	89 54 24 08          	mov    %edx,0x8(%esp)
 827d446:	c7 44 24 04 98 b1 48 	movl   $0x948b198,0x4(%esp)
 827d44d:	09 
 827d44e:	89 04 24             	mov    %eax,(%esp)
 827d451:	e8 b0 0f 00 00       	call   827e406 <_ZNSt3mapIm17STPremiumItemDataSt4lessImESaISt4pairIKmS0_EEE4findERS4_>
 827d456:	83 ec 04             	sub    $0x4,%esp
 827d459:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 827d45f:	c7 44 24 04 98 b1 48 	movl   $0x948b198,0x4(%esp)
 827d466:	09 
 827d467:	89 04 24             	mov    %eax,(%esp)
 827d46a:	e8 c3 0f 00 00       	call   827e432 <_ZNSt3mapIm17STPremiumItemDataSt4lessImESaISt4pairIKmS0_EEE3endEv>
 827d46f:	83 ec 04             	sub    $0x4,%esp
 827d472:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 827d478:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d47c:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 827d482:	89 04 24             	mov    %eax,(%esp)
 827d485:	e8 ce 0f 00 00       	call   827e458 <_ZNKSt17_Rb_tree_iteratorISt4pairIKm17STPremiumItemDataEEeqERKS4_>
 827d48a:	84 c0                	test   %al,%al
 827d48c:	74 3b                	je     827d4c9 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0xed>
 827d48e:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827d494:	89 44 24 14          	mov    %eax,0x14(%esp)
 827d498:	c7 44 24 10 54 7f c0 	movl   $0x8c07f54,0x10(%esp)
 827d49f:	08 
 827d4a0:	c7 44 24 0c ff 02 00 	movl   $0x2ff,0xc(%esp)
 827d4a7:	00 
 827d4a8:	c7 44 24 08 20 8e c0 	movl   $0x8c08e20,0x8(%esp)
 827d4af:	08 
 827d4b0:	c7 44 24 04 43 7e c0 	movl   $0x8c07e43,0x4(%esp)
 827d4b7:	08 
 827d4b8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 827d4bf:	e8 46 67 85 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 827d4c4:	e9 7b 09 00 00       	jmp    827de44 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0xa68>
 827d4c9:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 827d4cf:	89 04 24             	mov    %eax,(%esp)
 827d4d2:	e8 95 0f 00 00       	call   827e46c <_ZNKSt17_Rb_tree_iteratorISt4pairIKm17STPremiumItemDataEEptEv>
 827d4d7:	8b 40 04             	mov    0x4(%eax),%eax
 827d4da:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 827d4dd:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 827d4e3:	89 04 24             	mov    %eax,(%esp)
 827d4e6:	e8 81 0f 00 00       	call   827e46c <_ZNKSt17_Rb_tree_iteratorISt4pairIKm17STPremiumItemDataEEptEv>
 827d4eb:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 827d4ef:	0f be c0             	movsbl %al,%eax
 827d4f2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 827d4f5:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 827d4fb:	89 04 24             	mov    %eax,(%esp)
 827d4fe:	e8 69 0f 00 00       	call   827e46c <_ZNKSt17_Rb_tree_iteratorISt4pairIKm17STPremiumItemDataEEptEv>
 827d503:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 827d507:	0f b6 c0             	movzbl %al,%eax
 827d50a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 827d50d:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 827d513:	89 04 24             	mov    %eax,(%esp)
 827d516:	e8 51 0f 00 00       	call   827e46c <_ZNKSt17_Rb_tree_iteratorISt4pairIKm17STPremiumItemDataEEptEv>
 827d51b:	8b 40 0c             	mov    0xc(%eax),%eax
 827d51e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 827d521:	8b 45 10             	mov    0x10(%ebp),%eax
 827d524:	8b 50 20             	mov    0x20(%eax),%edx
 827d527:	8b 45 10             	mov    0x10(%ebp),%eax
 827d52a:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 827d52e:	0f b6 c0             	movzbl %al,%eax
 827d531:	89 54 24 08          	mov    %edx,0x8(%esp)
 827d535:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d539:	8b 45 d8             	mov    -0x28(%ebp),%eax
 827d53c:	89 04 24             	mov    %eax,(%esp)
 827d53f:	e8 ac fa ff ff       	call   827cff0 <_ZN23premium_helper_function16cal_premium_termEibi>
 827d544:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827d547:	83 7d d4 5c          	cmpl   $0x5c,-0x2c(%ebp)
 827d54b:	0f 87 fa 06 00 00    	ja     827dc4b <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x86f>
 827d551:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827d554:	c1 e0 02             	shl    $0x2,%eax
 827d557:	8b 80 6c 80 c0 08    	mov    0x8c0806c(%eax),%eax
 827d55d:	ff e0                	jmp    *%eax
 827d55f:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827d563:	e9 20 07 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d568:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827d56e:	3d c8 00 00 00       	cmp    $0xc8,%eax
 827d573:	75 09                	jne    827d57e <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1a2>
 827d575:	c7 45 e4 1e 00 00 00 	movl   $0x1e,-0x1c(%ebp)
 827d57c:	eb 40                	jmp    827d5be <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1e2>
 827d57e:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827d584:	3d cb 00 00 00       	cmp    $0xcb,%eax
 827d589:	75 09                	jne    827d594 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1b8>
 827d58b:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 827d592:	eb 2a                	jmp    827d5be <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1e2>
 827d594:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827d59a:	3d cc 00 00 00       	cmp    $0xcc,%eax
 827d59f:	75 09                	jne    827d5aa <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1ce>
 827d5a1:	c7 45 e4 07 00 00 00 	movl   $0x7,-0x1c(%ebp)
 827d5a8:	eb 14                	jmp    827d5be <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1e2>
 827d5aa:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827d5b0:	3d cd 00 00 00       	cmp    $0xcd,%eax
 827d5b5:	75 07                	jne    827d5be <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x1e2>
 827d5b7:	c7 45 e4 0e 00 00 00 	movl   $0xe,-0x1c(%ebp)
 827d5be:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d5c1:	89 04 24             	mov    %eax,(%esp)
 827d5c4:	e8 b5 cc e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827d5c9:	89 04 24             	mov    %eax,(%esp)
 827d5cc:	e8 b9 00 fb ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 827d5d1:	83 f8 02             	cmp    $0x2,%eax
 827d5d4:	0f 96 c0             	setbe  %al
 827d5d7:	84 c0                	test   %al,%al
 827d5d9:	0f 84 93 06 00 00    	je     827dc72 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x896>
 827d5df:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d5e2:	89 04 24             	mov    %eax,(%esp)
 827d5e5:	e8 94 cc e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827d5ea:	89 04 24             	mov    %eax,(%esp)
 827d5ed:	e8 98 00 fb ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 827d5f2:	89 c3                	mov    %eax,%ebx
 827d5f4:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d5f7:	89 04 24             	mov    %eax,(%esp)
 827d5fa:	e8 7f cc e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827d5ff:	89 04 24             	mov    %eax,(%esp)
 827d602:	e8 27 f1 f2 ff       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 827d607:	01 c3                	add    %eax,%ebx
 827d609:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d60c:	89 04 24             	mov    %eax,(%esp)
 827d60f:	e8 6a cc e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827d614:	89 04 24             	mov    %eax,(%esp)
 827d617:	e8 5e 36 e9 ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 827d61c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 827d61f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 827d622:	c7 45 ec 03 00 00 00 	movl   $0x3,-0x14(%ebp)
 827d629:	8b 45 ec             	mov    -0x14(%ebp),%eax
 827d62c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 827d62f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 827d632:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 827d637:	7e 0b                	jle    827d644 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x268>
 827d639:	b8 a0 86 01 00       	mov    $0x186a0,%eax
 827d63e:	2b 45 e8             	sub    -0x18(%ebp),%eax
 827d641:	89 45 ec             	mov    %eax,-0x14(%ebp)
 827d644:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 827d648:	0f 8e 27 06 00 00    	jle    827dc75 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x899>
 827d64e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d651:	89 04 24             	mov    %eax,(%esp)
 827d654:	e8 35 cc e5 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 827d659:	8b 55 ec             	mov    -0x14(%ebp),%edx
 827d65c:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d660:	89 04 24             	mov    %eax,(%esp)
 827d663:	e8 4c 22 28 00       	call   84ff8b4 <_ZN10CInventory15UpdateDailyCoinEi>
 827d668:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d66b:	89 04 24             	mov    %eax,(%esp)
 827d66e:	e8 0b cc e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827d673:	89 04 24             	mov    %eax,(%esp)
 827d676:	e8 0f 00 fb ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 827d67b:	8b 55 c0             	mov    -0x40(%ebp),%edx
 827d67e:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 827d684:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 827d68b:	00 
 827d68c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 827d68f:	89 54 24 08          	mov    %edx,0x8(%esp)
 827d693:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d697:	89 0c 24             	mov    %ecx,(%esp)
 827d69a:	e8 f1 64 40 00       	call   8683b90 <_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason>
 827d69f:	e9 e4 05 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d6a4:	e8 cf 19 21 00       	call   848f078 <_ZN8WongWork9CEventMgr22GetPremiumServiceBonusEv>
 827d6a9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 827d6ac:	01 d0                	add    %edx,%eax
 827d6ae:	83 c0 01             	add    $0x1,%eax
 827d6b1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827d6b4:	e9 cf 05 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d6b9:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 827d6c0:	00 
 827d6c1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d6c4:	89 04 24             	mov    %eax,(%esp)
 827d6c7:	e8 42 89 e6 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 827d6cc:	83 f0 01             	xor    $0x1,%eax
 827d6cf:	84 c0                	test   %al,%al
 827d6d1:	74 1e                	je     827d6f1 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x315>
 827d6d3:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 827d6da:	00 
 827d6db:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d6de:	89 04 24             	mov    %eax,(%esp)
 827d6e1:	e8 28 89 e6 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 827d6e6:	84 c0                	test   %al,%al
 827d6e8:	74 07                	je     827d6f1 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x315>
 827d6ea:	b8 01 00 00 00       	mov    $0x1,%eax
 827d6ef:	eb 05                	jmp    827d6f6 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x31a>
 827d6f1:	b8 00 00 00 00       	mov    $0x0,%eax
 827d6f6:	84 c0                	test   %al,%al
 827d6f8:	0f 84 7a 05 00 00    	je     827dc78 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x89c>
 827d6fe:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d701:	89 04 24             	mov    %eax,(%esp)
 827d704:	e8 1f f7 ea ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 827d709:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 827d710:	00 
 827d711:	89 04 24             	mov    %eax,(%esp)
 827d714:	e8 39 08 43 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 827d719:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827d71c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827d71f:	8b 00                	mov    (%eax),%eax
 827d721:	83 f8 0e             	cmp    $0xe,%eax
 827d724:	0f 85 51 05 00 00    	jne    827dc7b <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x89f>
 827d72a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827d72d:	8b 40 08             	mov    0x8(%eax),%eax
 827d730:	89 45 d0             	mov    %eax,-0x30(%ebp)
 827d733:	8b 45 d0             	mov    -0x30(%ebp),%eax
 827d736:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 827d73c:	e9 47 05 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d741:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 827d748:	00 
 827d749:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d74c:	89 04 24             	mov    %eax,(%esp)
 827d74f:	e8 ba 88 e6 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 827d754:	84 c0                	test   %al,%al
 827d756:	0f 84 22 05 00 00    	je     827dc7e <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8a2>
 827d75c:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827d762:	89 c3                	mov    %eax,%ebx
 827d764:	e8 32 ea e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827d769:	8b 40 0c             	mov    0xc(%eax),%eax
 827d76c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d770:	89 04 24             	mov    %eax,(%esp)
 827d773:	e8 94 c9 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827d778:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827d77b:	c7 45 d4 0d 00 00 00 	movl   $0xd,-0x2c(%ebp)
 827d782:	e9 01 05 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d787:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827d78a:	e8 0c ea e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827d78f:	8b 40 0c             	mov    0xc(%eax),%eax
 827d792:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d796:	89 04 24             	mov    %eax,(%esp)
 827d799:	e8 6e c9 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827d79e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827d7a1:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827d7a5:	e9 de 04 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d7aa:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827d7ad:	e8 e9 e9 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827d7b2:	8b 40 0c             	mov    0xc(%eax),%eax
 827d7b5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d7b9:	89 04 24             	mov    %eax,(%esp)
 827d7bc:	e8 4b c9 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827d7c1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827d7c4:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827d7c8:	e9 bb 04 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d7cd:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827d7d0:	e8 c6 e9 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827d7d5:	8b 40 0c             	mov    0xc(%eax),%eax
 827d7d8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d7dc:	89 04 24             	mov    %eax,(%esp)
 827d7df:	e8 28 c9 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827d7e4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827d7e7:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827d7eb:	e9 98 04 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d7f0:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 827d7f4:	75 7e                	jne    827d874 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x498>
 827d7f6:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 827d7fa:	74 78                	je     827d874 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x498>
 827d7fc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827d7ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d803:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d806:	89 04 24             	mov    %eax,(%esp)
 827d809:	e8 6a 00 3d 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 827d80e:	83 f0 01             	xor    $0x1,%eax
 827d811:	84 c0                	test   %al,%al
 827d813:	74 5f                	je     827d874 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x498>
 827d815:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827d818:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d81c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d81f:	89 04 24             	mov    %eax,(%esp)
 827d822:	e8 27 00 3d 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 827d827:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 827d82e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 827d831:	89 d0                	mov    %edx,%eax
 827d833:	c1 e0 03             	shl    $0x3,%eax
 827d836:	01 d0                	add    %edx,%eax
 827d838:	c1 e0 05             	shl    $0x5,%eax
 827d83b:	8b 80 9c 3a 48 09    	mov    0x9483a9c(%eax),%eax
 827d841:	83 f8 01             	cmp    $0x1,%eax
 827d844:	75 0e                	jne    827d854 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x478>
 827d846:	e8 36 e9 e4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 827d84b:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 827d851:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827d854:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827d857:	89 44 24 0c          	mov    %eax,0xc(%esp)
 827d85b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 827d85e:	89 44 24 08          	mov    %eax,0x8(%esp)
 827d862:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827d865:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d869:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d86c:	89 04 24             	mov    %eax,(%esp)
 827d86f:	e8 bc 81 0a 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 827d874:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827d877:	e8 1f e9 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827d87c:	8b 40 0c             	mov    0xc(%eax),%eax
 827d87f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d883:	89 04 24             	mov    %eax,(%esp)
 827d886:	e8 81 c8 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827d88b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827d88e:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827d892:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d895:	89 04 24             	mov    %eax,(%esp)
 827d898:	e8 b1 e3 e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827d89d:	89 c6                	mov    %eax,%esi
 827d89f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d8a2:	89 04 24             	mov    %eax,(%esp)
 827d8a5:	e8 7e 37 e8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 827d8aa:	89 c3                	mov    %eax,%ebx
 827d8ac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827d8b3:	00 
 827d8b4:	c7 44 24 08 a5 03 00 	movl   $0x3a5,0x8(%esp)
 827d8bb:	00 
 827d8bc:	c7 44 24 04 20 8e c0 	movl   $0x8c08e20,0x4(%esp)
 827d8c3:	08 
 827d8c4:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 827d8ca:	89 04 24             	mov    %eax,(%esp)
 827d8cd:	e8 46 1e 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827d8d2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827d8d6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827d8da:	c7 44 24 04 88 7f c0 	movl   $0x8c07f88,0x4(%esp)
 827d8e1:	08 
 827d8e2:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 827d8e8:	89 04 24             	mov    %eax,(%esp)
 827d8eb:	e8 98 1e 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827d8f0:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 827d8f4:	0f 84 87 03 00 00    	je     827dc81 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8a5>
 827d8fa:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d8fd:	89 04 24             	mov    %eax,(%esp)
 827d900:	e8 f5 05 00 00       	call   827defa <_ZN15CUserCharacInfo17IsEndLetheAtLoginEv>
 827d905:	83 f0 01             	xor    $0x1,%eax
 827d908:	84 c0                	test   %al,%al
 827d90a:	74 34                	je     827d940 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x564>
 827d90c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827d913:	00 
 827d914:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d917:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d91b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 827d91e:	89 04 24             	mov    %eax,(%esp)
 827d921:	e8 c2 6d 34 00       	call   85c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>
 827d926:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 827d92d:	00 
 827d92e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d931:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d935:	8b 45 bc             	mov    -0x44(%ebp),%eax
 827d938:	89 04 24             	mov    %eax,(%esp)
 827d93b:	e8 a8 6d 34 00       	call   85c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>
 827d940:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d943:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 827d949:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827d950:	00 
 827d951:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d954:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d958:	89 14 24             	mov    %edx,(%esp)
 827d95b:	e8 28 88 40 00       	call   8686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>
 827d960:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d963:	89 04 24             	mov    %eax,(%esp)
 827d966:	e8 b5 05 e8 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 827d96b:	89 c3                	mov    %eax,%ebx
 827d96d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d970:	89 04 24             	mov    %eax,(%esp)
 827d973:	e8 b8 17 fb ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 827d978:	8d 50 46             	lea    0x46(%eax),%edx
 827d97b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d97e:	05 00 97 07 00       	add    $0x79700,%eax
 827d983:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827d98a:	00 
 827d98b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827d992:	00 
 827d993:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827d997:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d99b:	89 04 24             	mov    %eax,(%esp)
 827d99e:	e8 2b 84 40 00       	call   8685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>
 827d9a3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d9a6:	89 04 24             	mov    %eax,(%esp)
 827d9a9:	e8 72 05 e8 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 827d9ae:	89 c3                	mov    %eax,%ebx
 827d9b0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d9b3:	89 04 24             	mov    %eax,(%esp)
 827d9b6:	e8 75 17 fb ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 827d9bb:	8d 90 de 01 00 00    	lea    0x1de(%eax),%edx
 827d9c1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827d9c4:	05 00 97 07 00       	add    $0x79700,%eax
 827d9c9:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827d9d0:	00 
 827d9d1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827d9d8:	00 
 827d9d9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827d9dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d9e1:	89 04 24             	mov    %eax,(%esp)
 827d9e4:	e8 e5 83 40 00       	call   8685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>
 827d9e9:	e9 9a 02 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827d9ee:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827d9f1:	e8 a5 e7 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827d9f6:	8b 40 0c             	mov    0xc(%eax),%eax
 827d9f9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d9fd:	89 04 24             	mov    %eax,(%esp)
 827da00:	e8 07 c7 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827da05:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827da08:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827da0c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827da0f:	89 04 24             	mov    %eax,(%esp)
 827da12:	e8 37 e2 e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827da17:	89 c6                	mov    %eax,%esi
 827da19:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827da1c:	89 04 24             	mov    %eax,(%esp)
 827da1f:	e8 04 36 e8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 827da24:	89 c3                	mov    %eax,%ebx
 827da26:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827da2d:	00 
 827da2e:	c7 44 24 08 cb 03 00 	movl   $0x3cb,0x8(%esp)
 827da35:	00 
 827da36:	c7 44 24 04 20 8e c0 	movl   $0x8c08e20,0x4(%esp)
 827da3d:	08 
 827da3e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 827da44:	89 04 24             	mov    %eax,(%esp)
 827da47:	e8 cc 1c 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827da4c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827da50:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827da54:	c7 44 24 04 c8 7f c0 	movl   $0x8c07fc8,0x4(%esp)
 827da5b:	08 
 827da5c:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 827da62:	89 04 24             	mov    %eax,(%esp)
 827da65:	e8 1e 1d 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827da6a:	e9 19 02 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827da6f:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827da72:	e8 24 e7 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827da77:	8b 40 0c             	mov    0xc(%eax),%eax
 827da7a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827da7e:	89 04 24             	mov    %eax,(%esp)
 827da81:	e8 86 c6 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827da86:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827da89:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827da8d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827da90:	89 04 24             	mov    %eax,(%esp)
 827da93:	e8 b6 e1 e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827da98:	89 c6                	mov    %eax,%esi
 827da9a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827da9d:	89 04 24             	mov    %eax,(%esp)
 827daa0:	e8 83 35 e8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 827daa5:	89 c3                	mov    %eax,%ebx
 827daa7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827daae:	00 
 827daaf:	c7 44 24 08 d3 03 00 	movl   $0x3d3,0x8(%esp)
 827dab6:	00 
 827dab7:	c7 44 24 04 20 8e c0 	movl   $0x8c08e20,0x4(%esp)
 827dabe:	08 
 827dabf:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827dac2:	89 04 24             	mov    %eax,(%esp)
 827dac5:	e8 4e 1c 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827daca:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827dace:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827dad2:	c7 44 24 04 00 80 c0 	movl   $0x8c08000,0x4(%esp)
 827dad9:	08 
 827dada:	8d 45 8c             	lea    -0x74(%ebp),%eax
 827dadd:	89 04 24             	mov    %eax,(%esp)
 827dae0:	e8 a3 1c 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827dae5:	c7 44 24 04 57 00 00 	movl   $0x57,0x4(%esp)
 827daec:	00 
 827daed:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827daf0:	89 04 24             	mov    %eax,(%esp)
 827daf3:	e8 16 85 e6 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 827daf8:	84 c0                	test   %al,%al
 827dafa:	0f 84 84 01 00 00    	je     827dc84 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8a8>
 827db00:	8b 45 08             	mov    0x8(%ebp),%eax
 827db03:	8b 00                	mov    (%eax),%eax
 827db05:	c7 44 24 08 57 00 00 	movl   $0x57,0x8(%esp)
 827db0c:	00 
 827db0d:	8b 55 c0             	mov    -0x40(%ebp),%edx
 827db10:	89 54 24 04          	mov    %edx,0x4(%esp)
 827db14:	89 04 24             	mov    %eax,(%esp)
 827db17:	e8 9a a0 0a 00       	call   8327bb6 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri>
 827db1c:	e9 67 01 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827db21:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827db24:	e8 72 e6 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827db29:	8b 40 0c             	mov    0xc(%eax),%eax
 827db2c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827db30:	89 04 24             	mov    %eax,(%esp)
 827db33:	e8 d4 c5 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827db38:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827db3b:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827db3f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827db42:	89 04 24             	mov    %eax,(%esp)
 827db45:	e8 04 e1 e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827db4a:	89 c6                	mov    %eax,%esi
 827db4c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827db4f:	89 04 24             	mov    %eax,(%esp)
 827db52:	e8 d1 34 e8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 827db57:	89 c3                	mov    %eax,%ebx
 827db59:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827db60:	00 
 827db61:	c7 44 24 08 db 03 00 	movl   $0x3db,0x8(%esp)
 827db68:	00 
 827db69:	c7 44 24 04 20 8e c0 	movl   $0x8c08e20,0x4(%esp)
 827db70:	08 
 827db71:	8d 45 9c             	lea    -0x64(%ebp),%eax
 827db74:	89 04 24             	mov    %eax,(%esp)
 827db77:	e8 9c 1b 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827db7c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827db80:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827db84:	c7 44 24 04 00 80 c0 	movl   $0x8c08000,0x4(%esp)
 827db8b:	08 
 827db8c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 827db8f:	89 04 24             	mov    %eax,(%esp)
 827db92:	e8 f1 1b 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827db97:	c7 44 24 04 53 00 00 	movl   $0x53,0x4(%esp)
 827db9e:	00 
 827db9f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dba2:	89 04 24             	mov    %eax,(%esp)
 827dba5:	e8 64 84 e6 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 827dbaa:	84 c0                	test   %al,%al
 827dbac:	0f 84 d5 00 00 00    	je     827dc87 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ab>
 827dbb2:	8b 45 08             	mov    0x8(%ebp),%eax
 827dbb5:	8b 00                	mov    (%eax),%eax
 827dbb7:	c7 44 24 08 53 00 00 	movl   $0x53,0x8(%esp)
 827dbbe:	00 
 827dbbf:	8b 55 c0             	mov    -0x40(%ebp),%edx
 827dbc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 827dbc6:	89 04 24             	mov    %eax,(%esp)
 827dbc9:	e8 e8 9f 0a 00       	call   8327bb6 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri>
 827dbce:	e9 b5 00 00 00       	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dbd3:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 827dbd6:	e8 c0 e5 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827dbdb:	8b 40 0c             	mov    0xc(%eax),%eax
 827dbde:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827dbe2:	89 04 24             	mov    %eax,(%esp)
 827dbe5:	e8 22 c5 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827dbea:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827dbed:	c6 45 cb 01          	movb   $0x1,-0x35(%ebp)
 827dbf1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dbf4:	89 04 24             	mov    %eax,(%esp)
 827dbf7:	e8 52 e0 e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827dbfc:	89 c6                	mov    %eax,%esi
 827dbfe:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dc01:	89 04 24             	mov    %eax,(%esp)
 827dc04:	e8 1f 34 e8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 827dc09:	89 c3                	mov    %eax,%ebx
 827dc0b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827dc12:	00 
 827dc13:	c7 44 24 08 e5 03 00 	movl   $0x3e5,0x8(%esp)
 827dc1a:	00 
 827dc1b:	c7 44 24 04 20 8e c0 	movl   $0x8c08e20,0x4(%esp)
 827dc22:	08 
 827dc23:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827dc26:	89 04 24             	mov    %eax,(%esp)
 827dc29:	e8 ea 1a 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827dc2e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827dc32:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827dc36:	c7 44 24 04 38 80 c0 	movl   $0x8c08038,0x4(%esp)
 827dc3d:	08 
 827dc3e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 827dc41:	89 04 24             	mov    %eax,(%esp)
 827dc44:	e8 3f 1b 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827dc49:	eb 3d                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc4b:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 827dc4f:	75 37                	jne    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc51:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 827dc57:	89 c3                	mov    %eax,%ebx
 827dc59:	e8 3d e5 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827dc5e:	8b 40 0c             	mov    0xc(%eax),%eax
 827dc61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827dc65:	89 04 24             	mov    %eax,(%esp)
 827dc68:	e8 9f c4 ef ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 827dc6d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 827dc70:	eb 16                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc72:	90                   	nop
 827dc73:	eb 13                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc75:	90                   	nop
 827dc76:	eb 10                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc78:	90                   	nop
 827dc79:	eb 0d                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc7b:	90                   	nop
 827dc7c:	eb 0a                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc7e:	90                   	nop
 827dc7f:	eb 07                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc81:	90                   	nop
 827dc82:	eb 04                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc84:	90                   	nop
 827dc85:	eb 01                	jmp    827dc88 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x8ac>
 827dc87:	90                   	nop
 827dc88:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 827dc8c:	74 53                	je     827dce1 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x905>
 827dc8e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827dc91:	89 44 24 04          	mov    %eax,0x4(%esp)
 827dc95:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dc98:	89 04 24             	mov    %eax,(%esp)
 827dc9b:	e8 d8 fb 3c 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 827dca0:	83 f0 01             	xor    $0x1,%eax
 827dca3:	84 c0                	test   %al,%al
 827dca5:	74 3a                	je     827dce1 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x905>
 827dca7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827dcaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 827dcae:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dcb1:	89 04 24             	mov    %eax,(%esp)
 827dcb4:	e8 95 fb 3c 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 827dcb9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827dcbc:	89 04 24             	mov    %eax,(%esp)
 827dcbf:	e8 31 f4 ff ff       	call   827d0f5 <_ZN23premium_helper_function17get_target_serverEi>
 827dcc4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 827dcc8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 827dccb:	89 44 24 08          	mov    %eax,0x8(%esp)
 827dccf:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 827dcd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 827dcd6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dcd9:	89 04 24             	mov    %eax,(%esp)
 827dcdc:	e8 4f 7d 0a 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 827dce1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 827dce4:	89 d0                	mov    %edx,%eax
 827dce6:	c1 e0 03             	shl    $0x3,%eax
 827dce9:	01 d0                	add    %edx,%eax
 827dceb:	c1 e0 05             	shl    $0x5,%eax
 827dcee:	0f b6 80 80 3a 48 09 	movzbl 0x9483a80(%eax),%eax
 827dcf5:	84 c0                	test   %al,%al
 827dcf7:	74 19                	je     827dd12 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x936>
 827dcf9:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dcfc:	89 04 24             	mov    %eax,(%esp)
 827dcff:	e8 fc 87 3d 00       	call   8656500 <_ZN5CUser12CheckFatigueEv>
 827dd04:	83 f0 01             	xor    $0x1,%eax
 827dd07:	84 c0                	test   %al,%al
 827dd09:	74 07                	je     827dd12 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x936>
 827dd0b:	b8 01 00 00 00       	mov    $0x1,%eax
 827dd10:	eb 05                	jmp    827dd17 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x93b>
 827dd12:	b8 00 00 00 00       	mov    $0x0,%eax
 827dd17:	84 c0                	test   %al,%al
 827dd19:	74 13                	je     827dd2e <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x952>
 827dd1b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827dd22:	00 
 827dd23:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dd26:	89 04 24             	mov    %eax,(%esp)
 827dd29:	e8 d0 1a 3d 00       	call   864f7fe <_ZN5CUser20gainCurCharacFatigueEi>
 827dd2e:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
 827dd35:	00 00 00 
 827dd38:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 827dd3c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 827dd3f:	89 54 24 18          	mov    %edx,0x18(%esp)
 827dd43:	89 44 24 14          	mov    %eax,0x14(%esp)
 827dd47:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827dd4a:	89 44 24 10          	mov    %eax,0x10(%esp)
 827dd4e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 827dd51:	89 44 24 0c          	mov    %eax,0xc(%esp)
 827dd55:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 827dd5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 827dd5f:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 827dd65:	89 44 24 04          	mov    %eax,0x4(%esp)
 827dd69:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dd6c:	89 04 24             	mov    %eax,(%esp)
 827dd6f:	e8 b0 f2 ff ff       	call   827d024 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi>
 827dd74:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 827dd7a:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 827dd80:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 827dd83:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 827dd87:	89 54 24 0c          	mov    %edx,0xc(%esp)
 827dd8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 827dd8f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827dd92:	89 44 24 04          	mov    %eax,0x4(%esp)
 827dd96:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dd99:	89 04 24             	mov    %eax,(%esp)
 827dd9c:	e8 86 f3 ff ff       	call   827d127 <_ZN23premium_helper_function7send_dbEP5CUserilli>
 827dda1:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
 827dda7:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 827ddad:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827ddb0:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 827ddb7:	00 
 827ddb8:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 827ddbb:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 827ddbf:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 827ddc3:	89 54 24 08          	mov    %edx,0x8(%esp)
 827ddc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ddcb:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827ddce:	89 04 24             	mov    %eax,(%esp)
 827ddd1:	e8 12 1a 43 00       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 827ddd6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827ddd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 827dddd:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827dde0:	89 04 24             	mov    %eax,(%esp)
 827dde3:	e8 4a 1e 43 00       	call   86afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>
 827dde8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827ddeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ddef:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827ddf2:	89 04 24             	mov    %eax,(%esp)
 827ddf5:	e8 a3 f4 ff ff       	call   827d29d <_ZN23premium_helper_function9is_notifyEP5CUseri>
 827ddfa:	83 f0 01             	xor    $0x1,%eax
 827ddfd:	84 c0                	test   %al,%al
 827ddff:	74 31                	je     827de32 <_ZN18SpecialItemHandler28respond_special_item_premiumEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0xa56>
 827de01:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 827de07:	89 c2                	mov    %eax,%edx
 827de09:	2b 55 d0             	sub    -0x30(%ebp),%edx
 827de0c:	8b 45 08             	mov    0x8(%ebp),%eax
 827de0f:	8b 00                	mov    (%eax),%eax
 827de11:	89 54 24 10          	mov    %edx,0x10(%esp)
 827de15:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 827de18:	89 54 24 0c          	mov    %edx,0xc(%esp)
 827de1c:	8b 55 0c             	mov    0xc(%ebp),%edx
 827de1f:	89 54 24 08          	mov    %edx,0x8(%esp)
 827de23:	8b 55 c0             	mov    -0x40(%ebp),%edx
 827de26:	89 54 24 04          	mov    %edx,0x4(%esp)
 827de2a:	89 04 24             	mov    %eax,(%esp)
 827de2d:	e8 aa 99 0a 00       	call   83277dc <_ZN8WongWork9CCeraShop18_sendPremiumPacketEP5CUseriii>
 827de32:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 827de35:	89 44 24 04          	mov    %eax,0x4(%esp)
 827de39:	8b 45 c0             	mov    -0x40(%ebp),%eax
 827de3c:	89 04 24             	mov    %eax,(%esp)
 827de3f:	e8 9b f4 ff ff       	call   827d2df <_ZN23premium_helper_function9write_logEP5CUseri>
 827de44:	8d 65 f8             	lea    -0x8(%ebp),%esp
 827de47:	83 c4 00             	add    $0x0,%esp
 827de4a:	5b                   	pop    %ebx
 827de4b:	5e                   	pop    %esi
 827de4c:	5d                   	pop    %ebp
 827de4d:	c3                   	ret

```

```c
// SpecialItemHandler::respond_special_item_premium @ 0x827d3dc

/* SpecialItemHandler::respond_special_item_premium(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_premium
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  bool bVar1;
  char cVar2;
  CGameManager *this;
  int iVar3;
  CInventory *pCVar4;
  uint uVar5;
  CUserPremium *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long local_ac;
  _Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>> local_a8 [4];
  int local_a4;
  int local_a0;
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  local_9c [4];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  CPremiumLetheManager *local_48;
  CUser *local_44;
  int local_40;
  STSpecailItem_Result local_39;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_48 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
  local_44 = *(CUser **)param_3;
  local_a0 = *(int *)(param_3 + 4);
  local_40 = *(int *)(param_3 + 0x14);
  local_39 = param_3[0x1c];
  local_a4 = *(int *)(param_3 + 0x18);
  local_38 = local_a4;
  local_34 = local_a4;
  std::
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  ::find((ulong *)local_a8);
  std::
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  ::end(local_9c);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator==
                    (local_a8,(_Rb_tree_iterator *)local_9c);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_30 = *(int *)(iVar3 + 4);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_2c = (int)*(char *)(iVar3 + 8);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_28 = (uint)*(byte *)(iVar3 + 9);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator->
                      (local_a8);
    local_24 = *(int *)(iVar3 + 0xc);
    local_20 = premium_helper_function::cal_premium_term
                         (local_2c,(bool)param_3[0x1f],*(int *)(param_3 + 0x20));
    iVar8 = local_24;
    iVar3 = local_a0;
    switch(local_30) {
    default:
      if (local_40 == 0) {
        iVar8 = G_CDataManager();
        local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),iVar3);
      }
      break;
    case 1:
    case 3:
      iVar3 = WongWork::CEventMgr::GetPremiumServiceBonus();
      local_20 = iVar3 + local_20 + 1;
      break;
    case 8:
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0xd:
      cVar2 = CUser::isAffectedPremium(local_44,0xd);
      if ((cVar2 == '\x01') || (cVar2 = CUser::isAffectedPremium(local_44,0xe), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        this_00 = (CUserPremium *)CUser::GetPremiumInfo(local_44);
        local_14 = (int *)WongWork::CUserPremium::GetPremiumInfo(this_00,0xe);
        if (*local_14 == 0xe) {
          local_a4 = local_14[2];
          local_34 = local_a4;
        }
      }
      break;
    case 0xe:
      cVar2 = CUser::isAffectedPremium(local_44,0xd);
      iVar3 = local_a0;
      if (cVar2 != '\0') {
        iVar8 = G_CDataManager();
        local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),iVar3);
        local_30 = 0xd;
      }
      break;
    case 0xf:
      if (local_a0 == 200) {
        local_20 = 0x1e;
      }
      else if (local_a0 == 0xcb) {
        local_20 = 3;
      }
      else if (local_a0 == 0xcc) {
        local_20 = 7;
      }
      else if (local_a0 == 0xcd) {
        local_20 = 0xe;
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
      uVar5 = CInventory::GetCoin(pCVar4);
      if (uVar5 < 3) {
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
        iVar3 = CInventory::GetCoin(pCVar4);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
        iVar8 = CInventory::GetPayCoin(pCVar4);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
        local_1c = CInventory::GetEventCoin(pCVar4);
        local_1c = iVar3 + iVar8 + local_1c;
        local_18 = 3;
        if (100000 < local_1c + 3) {
          local_18 = 100000 - local_1c;
        }
        if (0 < local_18) {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)local_44);
          CInventory::UpdateDailyCoin(pCVar4,local_18);
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_44);
          uVar6 = CInventory::GetCoin(pCVar4);
          cUserHistoryLog::CoinAdd((cUserHistoryLog *)(local_44 + 0x79700),uVar6,local_18,4);
        }
      }
      break;
    case 0x16:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0x1b:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0x1d:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      break;
    case 0x21:
      if (((local_28 == 0) && (local_40 != 0)) &&
         (cVar2 = CUser::IsRestrictedGoods(local_44,local_40), cVar2 != '\x01')) {
        CUser::SetRestrictedGoods(local_44,local_40);
        local_10 = 0;
        if (*(int *)(g_SPremiumInfo + local_30 * 0x120 + 0x5c) == 1) {
          iVar3 = G_CEnvironment();
          local_10 = *(int *)(iVar3 + 0x378);
        }
        WongWork::CCeraShop::SaveFeaturedIdx(local_44,local_40,local_38,local_10);
      }
      iVar3 = local_24;
      iVar8 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar8 + 0xc),iVar3);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_98,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3a5,0);
      cMyTrace::operator()
                (local_98,"ONE_DAY_LETHE : BUY_RESTRICTED_PREMIUM, char(%s), char_no(%d)",uVar7,
                 uVar6);
      if (local_48 != (CPremiumLetheManager *)0x0) {
        cVar2 = CUserCharacInfo::IsEndLetheAtLogin((CUserCharacInfo *)local_44);
        if (cVar2 != '\x01') {
          CPremiumLetheManager::BackupSkill(local_48,local_44,0);
          CPremiumLetheManager::BackupSkill(local_48,local_44,1);
        }
        cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(local_44 + 0x79700),local_44,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)local_44);
        iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)local_44);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(local_44 + 0x79700),iVar3 + 0x46,uVar6,0,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)local_44);
        iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)local_44);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(local_44 + 0x79700),iVar3 + 0x1de,uVar6,1,0);
      }
      break;
    case 0x4f:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_88,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3cb,0);
      cMyTrace::operator()
                (local_88,"GROWTH_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
      break;
    case 0x53:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_78,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3d3,0);
      cMyTrace::operator()
                (local_78,"EMOTICON_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
      cVar2 = CUser::isAffectedPremium(local_44,0x57);
      if (cVar2 != '\0') {
        WongWork::CCeraShop::_ClosePremium(*(CCeraShop **)param_1,local_44,0x57);
      }
      break;
    case 0x57:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_68,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3db,0);
      cMyTrace::operator()
                (local_68,"EMOTICON_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
      cVar2 = CUser::isAffectedPremium(local_44,0x53);
      if (cVar2 != '\0') {
        WongWork::CCeraShop::_ClosePremium(*(CCeraShop **)param_1,local_44,0x53);
      }
      break;
    case 0x5c:
      iVar3 = G_CDataManager();
      local_40 = CItemList::GetRestrictCode(*(CItemList **)(iVar3 + 0xc),iVar8);
      local_39 = (STSpecailItem_Result)0x1;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_44);
      uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_44);
      cMyTrace::cMyTrace(local_58,
                         "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                         ,0x3e5,0);
      cMyTrace::operator()
                (local_58,"CUBE_CONTRACT : BUY_PREMIUM, char(%s), char_no(%d)",uVar7,uVar6);
    }
    if ((local_40 != 0) && (cVar2 = CUser::IsRestrictedGoods(local_44,local_40), cVar2 != '\x01')) {
      CUser::SetRestrictedGoods(local_44,local_40);
      iVar3 = premium_helper_function::get_target_server(local_30);
      WongWork::CCeraShop::SaveFeaturedIdx(local_44,local_40,local_38,iVar3);
    }
    if ((g_SPremiumInfo[local_30 * 0x120 + 0x40] == '\0') ||
       (cVar2 = CUser::CheckFatigue(local_44), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::gainCurCharacFatigue(local_44,1);
    }
    local_ac = 0;
    premium_helper_function::cal_end_time
              (local_44,&local_a4,&local_ac,local_34,local_30,(bool)local_39,local_20);
    premium_helper_function::send_db(local_44,local_30,local_a4,local_ac,local_40);
    WongWork::CHandlePremium::handleSetUserPremium(local_44,local_30,local_a4,local_ac,local_40,1);
    WongWork::CHandlePremium::handlePremiumEffect(local_44,local_30);
    cVar2 = premium_helper_function::is_notify(local_44,local_30);
    if (cVar2 != '\x01') {
      WongWork::CCeraShop::_sendPremiumPacket
                (*(CCeraShop **)param_1,local_44,(int)param_2,local_30,local_ac - local_34);
    }
    premium_helper_function::write_log(local_44,local_30);
  }
  else {
    LogManager::logFormat
              (1,"SpecialItemHandler.cpp",
               "void SpecialItemHandler::respond_special_item_premium(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
               ,0x2ff,"PREMIUM_ERROR : NO PREMIUM ITEM!! : ITEM_ID (%u)",local_a0);
  }
  return;
}

```

---

## respond_special_item_skill_confirm

```asm
// === 0827cdd0 SpecialItemHandler::respond_special_item_skill_confirm  [0x0827cdd0-0x827ce7d] ===
 827cdd0:	55                   	push   %ebp
 827cdd1:	89 e5                	mov    %esp,%ebp
 827cdd3:	57                   	push   %edi
 827cdd4:	56                   	push   %esi
 827cdd5:	53                   	push   %ebx
 827cdd6:	83 ec 4c             	sub    $0x4c,%esp
 827cdd9:	e8 b0 f3 e4 ff       	call   80cc18e <_Z14G_CGameManagerv>
 827cdde:	89 04 24             	mov    %eax,(%esp)
 827cde1:	e8 a2 c0 01 00       	call   8298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>
 827cde6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 827cde9:	8b 45 10             	mov    0x10(%ebp),%eax
 827cdec:	8b 00                	mov    (%eax),%eax
 827cdee:	89 04 24             	mov    %eax,(%esp)
 827cdf1:	e8 46 25 fb ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 827cdf6:	89 c7                	mov    %eax,%edi
 827cdf8:	8b 45 10             	mov    0x10(%ebp),%eax
 827cdfb:	8b 00                	mov    (%eax),%eax
 827cdfd:	89 04 24             	mov    %eax,(%esp)
 827ce00:	e8 49 ee e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827ce05:	89 c6                	mov    %eax,%esi
 827ce07:	8b 45 10             	mov    0x10(%ebp),%eax
 827ce0a:	8b 00                	mov    (%eax),%eax
 827ce0c:	89 04 24             	mov    %eax,(%esp)
 827ce0f:	e8 14 42 e8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 827ce14:	89 c3                	mov    %eax,%ebx
 827ce16:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827ce1d:	00 
 827ce1e:	c7 44 24 08 e1 01 00 	movl   $0x1e1,0x8(%esp)
 827ce25:	00 
 827ce26:	c7 44 24 04 20 8f c0 	movl   $0x8c08f20,0x4(%esp)
 827ce2d:	08 
 827ce2e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827ce31:	89 04 24             	mov    %eax,(%esp)
 827ce34:	e8 df 28 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827ce39:	89 7c 24 10          	mov    %edi,0x10(%esp)
 827ce3d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827ce41:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827ce45:	c7 44 24 04 c8 7e c0 	movl   $0x8c07ec8,0x4(%esp)
 827ce4c:	08 
 827ce4d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827ce50:	89 04 24             	mov    %eax,(%esp)
 827ce53:	e8 30 29 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827ce58:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 827ce5c:	74 16                	je     827ce74 <_ZN18SpecialItemHandler34respond_special_item_skill_confirmEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0xa4>
 827ce5e:	8b 45 10             	mov    0x10(%ebp),%eax
 827ce61:	8b 00                	mov    (%eax),%eax
 827ce63:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ce67:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 827ce6a:	89 04 24             	mov    %eax,(%esp)
 827ce6d:	e8 fe 6e 34 00       	call   85c3d70 <_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser>
 827ce72:	eb 01                	jmp    827ce75 <_ZN18SpecialItemHandler34respond_special_item_skill_confirmEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0xa5>
 827ce74:	90                   	nop
 827ce75:	83 c4 4c             	add    $0x4c,%esp
 827ce78:	5b                   	pop    %ebx
 827ce79:	5e                   	pop    %esi
 827ce7a:	5f                   	pop    %edi
 827ce7b:	5d                   	pop    %ebp
 827ce7c:	c3                   	ret
 827ce7d:	90                   	nop

```

```c
// SpecialItemHandler::respond_special_item_skill_confirm @ 0x827cdd0

/* SpecialItemHandler::respond_special_item_skill_confirm(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_skill_confirm
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  CGameManager *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_30 [16];
  CPremiumLetheManager *local_20;
  
  this = (CGameManager *)G_CGameManager();
  local_20 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
  uVar1 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)param_3);
  uVar2 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)param_3);
  uVar3 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)param_3);
  cMyTrace::cMyTrace(local_30,
                     "void SpecialItemHandler::respond_special_item_skill_confirm(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                     ,0x1e1,0);
  cMyTrace::operator()
            (local_30,"ONE_DAY_LETHE : BUY_SKILL_CONFIRM_TICKET, char(%s), char_no(%d), style(%d)",
             uVar3,uVar2,uVar1);
  if (local_20 != (CPremiumLetheManager *)0x0) {
    CPremiumLetheManager::ConfirmSkillReq(local_20,*(CUser **)param_3);
  }
  return;
}

```

---

## respond_special_item_skill_tree_style

```asm
// === 0827ce7e SpecialItemHandler::respond_special_item_skill_tree_style  [0x0827ce7e-0x827cfef] ===
 827ce7e:	55                   	push   %ebp
 827ce7f:	89 e5                	mov    %esp,%ebp
 827ce81:	56                   	push   %esi
 827ce82:	53                   	push   %ebx
 827ce83:	83 ec 40             	sub    $0x40,%esp
 827ce86:	e8 03 f3 e4 ff       	call   80cc18e <_Z14G_CGameManagerv>
 827ce8b:	89 04 24             	mov    %eax,(%esp)
 827ce8e:	e8 f5 bf 01 00       	call   8298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>
 827ce93:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827ce96:	8b 45 10             	mov    0x10(%ebp),%eax
 827ce99:	8b 00                	mov    (%eax),%eax
 827ce9b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827ce9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827cea1:	89 04 24             	mov    %eax,(%esp)
 827cea4:	e8 a5 ed e4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 827cea9:	89 c6                	mov    %eax,%esi
 827ceab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827ceae:	89 04 24             	mov    %eax,(%esp)
 827ceb1:	e8 72 41 e8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 827ceb6:	89 c3                	mov    %eax,%ebx
 827ceb8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 827cebf:	00 
 827cec0:	c7 44 24 08 f3 01 00 	movl   $0x1f3,0x8(%esp)
 827cec7:	00 
 827cec8:	c7 44 24 04 a0 8e c0 	movl   $0x8c08ea0,0x4(%esp)
 827cecf:	08 
 827ced0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 827ced3:	89 04 24             	mov    %eax,(%esp)
 827ced6:	e8 3d 28 2d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 827cedb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 827cedf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 827cee3:	c7 44 24 04 14 7f c0 	movl   $0x8c07f14,0x4(%esp)
 827ceea:	08 
 827ceeb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 827ceee:	89 04 24             	mov    %eax,(%esp)
 827cef1:	e8 92 28 2d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 827cef6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827cef9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827cf00:	00 
 827cf01:	89 04 24             	mov    %eax,(%esp)
 827cf04:	e8 ff 23 fb ff       	call   822f308 <_ZN15CUserCharacInfo26SetCurCharacSkillTreeIndexEc>
 827cf09:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827cf0c:	89 04 24             	mov    %eax,(%esp)
 827cf0f:	e8 5c 63 3d 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 827cf14:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827cf1b:	00 
 827cf1c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 827cf23:	00 
 827cf24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827cf27:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cf2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827cf2e:	89 04 24             	mov    %eax,(%esp)
 827cf31:	e8 e8 72 34 00       	call   85c421e <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND>
 827cf36:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cf39:	89 04 24             	mov    %eax,(%esp)
 827cf3c:	e8 0b 0e 31 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 827cf41:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 827cf48:	00 
 827cf49:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827cf50:	00 
 827cf51:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cf54:	89 04 24             	mov    %eax,(%esp)
 827cf57:	e8 a0 e9 e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 827cf5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827cf63:	00 
 827cf64:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cf67:	89 04 24             	mov    %eax,(%esp)
 827cf6a:	e8 b1 e9 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 827cf6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827cf76:	00 
 827cf77:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cf7a:	89 04 24             	mov    %eax,(%esp)
 827cf7d:	e8 22 cf e5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 827cf82:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cf85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827cf8c:	00 
 827cf8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cf91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827cf94:	89 04 24             	mov    %eax,(%esp)
 827cf97:	e8 b2 d4 3d 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 827cf9c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827cfa3:	00 
 827cfa4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cfa7:	89 04 24             	mov    %eax,(%esp)
 827cfaa:	e8 a9 e9 e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 827cfaf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cfb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 827cfb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827cfb9:	89 04 24             	mov    %eax,(%esp)
 827cfbc:	e8 f9 b5 3c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 827cfc1:	eb 1b                	jmp    827cfde <_ZN18SpecialItemHandler37respond_special_item_skill_tree_styleEiRK19STSpecailItem_ParamR20STSpecailItem_Result+0x160>
 827cfc3:	89 d3                	mov    %edx,%ebx
 827cfc5:	89 c6                	mov    %eax,%esi
 827cfc7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cfca:	89 04 24             	mov    %eax,(%esp)
 827cfcd:	e8 ae 0e 31 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 827cfd2:	89 f0                	mov    %esi,%eax
 827cfd4:	89 da                	mov    %ebx,%edx
 827cfd6:	89 04 24             	mov    %eax,(%esp)
 827cfd9:	e8 72 67 86 00       	call   8ae3750 <_Unwind_Resume>
 827cfde:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 827cfe1:	89 04 24             	mov    %eax,(%esp)
 827cfe4:	e8 97 0e 31 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 827cfe9:	83 c4 40             	add    $0x40,%esp
 827cfec:	5b                   	pop    %ebx
 827cfed:	5e                   	pop    %esi
 827cfee:	5d                   	pop    %ebp
 827cfef:	c3                   	ret

```

```c
// SpecialItemHandler::respond_special_item_skill_tree_style @ 0x827ce7e

/* SpecialItemHandler::respond_special_item_skill_tree_style(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_skill_tree_style
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  CGameManager *this;
  undefined4 uVar1;
  undefined4 uVar2;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  CPremiumLetheManager *local_14;
  CUserCharacInfo *local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_14 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this);
  local_10 = *(CUserCharacInfo **)param_3;
  uVar1 = CUserCharacInfo::getCurCharacNo(local_10);
  uVar2 = CUserCharacInfo::getCurCharacName(local_10);
  cMyTrace::cMyTrace(local_24,
                     "void SpecialItemHandler::respond_special_item_skill_tree_style(int, const STSpecailItem_Param&, STSpecailItem_Result&)"
                     ,499,0);
  cMyTrace::operator()
            (local_24,"SKILL_TREE_STYLE : BUY_SKILL_TREE_STYLE, char(%s), char_no(%d)",uVar2,uVar1);
  CUserCharacInfo::SetCurCharacSkillTreeIndex(local_10,'\0');
  CUser::UpdateData((CUser *)local_10);
  CPremiumLetheManager::InitSkill(local_14,local_10,1,1);
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0827cf57 to 0827cfc0 has its CatchHandler @ 0827cfc3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
  CUser::make_basic_info((CUser *)local_10,(char *)local_30,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send((CUser *)local_10,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}

```

