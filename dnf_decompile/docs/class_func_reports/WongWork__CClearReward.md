# WongWork__CClearReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## _generateRandomItem

```asm
// === 085387c0 WongWork::CClearReward::_generateRandomItem  [0x085387c0-0x8538a91] ===
 85387c0:	55                   	push   %ebp
 85387c1:	89 e5                	mov    %esp,%ebp
 85387c3:	53                   	push   %ebx
 85387c4:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 85387ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85387cd:	8b 50 08             	mov    0x8(%eax),%edx
 85387d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85387d3:	0f b6 00             	movzbl (%eax),%eax
 85387d6:	0f b6 c0             	movzbl %al,%eax
 85387d9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85387dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85387e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85387e4:	89 04 24             	mov    %eax,(%esp)
 85387e7:	e8 a8 fe ff ff       	call   8538694 <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE>
 85387ec:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85387ef:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 85387f3:	0f 88 85 02 00 00    	js     8538a7e <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2be>
 85387f9:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 85387fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85387ff:	8d 58 60             	lea    0x60(%eax),%ebx
 8538802:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538805:	8b 40 08             	mov    0x8(%eax),%eax
 8538808:	89 c2                	mov    %eax,%edx
 853880a:	89 d0                	mov    %edx,%eax
 853880c:	01 c0                	add    %eax,%eax
 853880e:	01 d0                	add    %edx,%eax
 8538810:	c1 e0 02             	shl    $0x2,%eax
 8538813:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8538816:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 853881a:	89 04 24             	mov    %eax,(%esp)
 853881d:	e8 36 35 00 00       	call   853bd58 <_ZNSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EEixEj>
 8538822:	8b 10                	mov    (%eax),%edx
 8538824:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8538827:	8b 50 04             	mov    0x4(%eax),%edx
 853882a:	89 55 c8             	mov    %edx,-0x38(%ebp)
 853882d:	8b 40 08             	mov    0x8(%eax),%eax
 8538830:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8538833:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8538836:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 853883c:	db 85 74 ff ff ff    	fildl  -0x8c(%ebp)
 8538842:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538845:	d9 40 04             	flds   0x4(%eax)
 8538848:	de c9                	fmulp  %st,%st(1)
 853884a:	d9 bd 72 ff ff ff    	fnstcw -0x8e(%ebp)
 8538850:	0f b7 85 72 ff ff ff 	movzwl -0x8e(%ebp),%eax
 8538857:	b4 0c                	mov    $0xc,%ah
 8538859:	66 89 85 70 ff ff ff 	mov    %ax,-0x90(%ebp)
 8538860:	d9 ad 70 ff ff ff    	fldcw  -0x90(%ebp)
 8538866:	db 9d 74 ff ff ff    	fistpl -0x8c(%ebp)
 853886c:	d9 ad 72 ff ff ff    	fldcw  -0x8e(%ebp)
 8538872:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8538878:	8b 45 0c             	mov    0xc(%ebp),%eax
 853887b:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 853887f:	0f b6 c8             	movzbl %al,%ecx
 8538882:	8b 45 08             	mov    0x8(%ebp),%eax
 8538885:	83 c1 30             	add    $0x30,%ecx
 8538888:	8b 44 88 04          	mov    0x4(%eax,%ecx,4),%eax
 853888c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 853888f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8538892:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8538895:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 853889a:	89 c8                	mov    %ecx,%eax
 853889c:	f7 ea                	imul   %edx
 853889e:	c1 fa 05             	sar    $0x5,%edx
 85388a1:	89 c8                	mov    %ecx,%eax
 85388a3:	c1 f8 1f             	sar    $0x1f,%eax
 85388a6:	29 c2                	sub    %eax,%edx
 85388a8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85388ab:	0f af c2             	imul   %edx,%eax
 85388ae:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85388b1:	db 45 d4             	fildl  -0x2c(%ebp)
 85388b4:	d9 e8                	fld1
 85388b6:	d8 65 18             	fsubs  0x18(%ebp)
 85388b9:	de c9                	fmulp  %st,%st(1)
 85388bb:	d9 ad 70 ff ff ff    	fldcw  -0x90(%ebp)
 85388c1:	db 5d d4             	fistpl -0x2c(%ebp)
 85388c4:	d9 ad 72 ff ff ff    	fldcw  -0x8e(%ebp)
 85388ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85388cd:	83 c0 08             	add    $0x8,%eax
 85388d0:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 85388d7:	00 
 85388d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85388df:	00 
 85388e0:	89 04 24             	mov    %eax,(%esp)
 85388e3:	e8 bc ab ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85388e8:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 85388eb:	0f 9d c0             	setge  %al
 85388ee:	84 c0                	test   %al,%al
 85388f0:	0f 85 8b 01 00 00    	jne    8538a81 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2c1>
 85388f6:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85388fd:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 8538904:	8b 45 08             	mov    0x8(%ebp),%eax
 8538907:	83 c0 08             	add    $0x8,%eax
 853890a:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 8538911:	00 
 8538912:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8538919:	00 
 853891a:	89 04 24             	mov    %eax,(%esp)
 853891d:	e8 82 ab ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8538922:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8538925:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 853892c:	eb 23                	jmp    8538951 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x191>
 853892e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8538931:	8b 45 08             	mov    0x8(%ebp),%eax
 8538934:	83 c2 2c             	add    $0x2c,%edx
 8538937:	8b 04 90             	mov    (%eax,%edx,4),%eax
 853893a:	01 45 d8             	add    %eax,-0x28(%ebp)
 853893d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538940:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8538943:	7d 08                	jge    853894d <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x18d>
 8538945:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8538948:	89 45 dc             	mov    %eax,-0x24(%ebp)
 853894b:	eb 0f                	jmp    853895c <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x19c>
 853894d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8538951:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8538955:	0f 9e c0             	setle  %al
 8538958:	84 c0                	test   %al,%al
 853895a:	75 d2                	jne    853892e <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x16e>
 853895c:	8b 45 08             	mov    0x8(%ebp),%eax
 853895f:	83 c0 08             	add    $0x8,%eax
 8538962:	c7 44 24 08 40 42 0f 	movl   $0xf4240,0x8(%esp)
 8538969:	00 
 853896a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8538971:	00 
 8538972:	89 04 24             	mov    %eax,(%esp)
 8538975:	e8 2a ab ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 853897a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 853897d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538980:	8b 55 08             	mov    0x8(%ebp),%edx
 8538983:	8d 8a fc 00 00 00    	lea    0xfc(%edx),%ecx
 8538989:	8b 55 14             	mov    0x14(%ebp),%edx
 853898c:	83 c2 0c             	add    $0xc,%edx
 853898f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8538993:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8538996:	89 44 24 08          	mov    %eax,0x8(%esp)
 853899a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 853899e:	89 14 24             	mov    %edx,(%esp)
 85389a1:	e8 3e 82 01 00       	call   8550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>
 85389a6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85389a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85389ac:	89 04 24             	mov    %eax,(%esp)
 85389af:	e8 66 1a 00 00       	call   853a41a <_ZN8WongWork14CItemGenerator16getGeneratorTypeEv>
 85389b4:	89 c3                	mov    %eax,%ebx
 85389b6:	e8 e0 37 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85389bb:	89 04 24             	mov    %eax,(%esp)
 85389be:	e8 27 1d c1 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 85389c3:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85389c6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85389ca:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85389cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 85389d1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85389d5:	89 04 24             	mov    %eax,(%esp)
 85389d8:	e8 e9 b8 ff ff       	call   85342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>
 85389dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85389e0:	0f b6 00             	movzbl (%eax),%eax
 85389e3:	0f b6 c0             	movzbl %al,%eax
 85389e6:	8b 55 08             	mov    0x8(%ebp),%edx
 85389e9:	81 c2 a8 02 00 00    	add    $0x2a8,%edx
 85389ef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85389f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85389f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85389fa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85389fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538a01:	89 14 24             	mov    %edx,(%esp)
 8538a04:	e8 9b bf ff ff       	call   85349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>
 8538a09:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8538a0c:	83 7d ec ff          	cmpl   $0xffffffff,-0x14(%ebp)
 8538a10:	74 72                	je     8538a84 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2c4>
 8538a12:	e8 84 37 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538a17:	8b 40 0c             	mov    0xc(%eax),%eax
 8538a1a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8538a1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538a21:	89 04 24             	mov    %eax,(%esp)
 8538a24:	e8 61 94 fd ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8538a29:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8538a2c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8538a30:	74 55                	je     8538a87 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2c7>
 8538a32:	8d 45 87             	lea    -0x79(%ebp),%eax
 8538a35:	89 04 24             	mov    %eax,(%esp)
 8538a38:	e8 17 2e b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8538a3d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8538a40:	89 45 89             	mov    %eax,-0x77(%ebp)
 8538a43:	e8 53 37 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538a48:	8b 40 0c             	mov    0xc(%eax),%eax
 8538a4b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8538a52:	00 
 8538a53:	8d 55 87             	lea    -0x79(%ebp),%edx
 8538a56:	89 54 24 08          	mov    %edx,0x8(%esp)
 8538a5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8538a61:	00 
 8538a62:	89 04 24             	mov    %eax,(%esp)
 8538a65:	e8 4e 95 fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8538a6a:	8b 45 14             	mov    0x14(%ebp),%eax
 8538a6d:	8d 55 87             	lea    -0x79(%ebp),%edx
 8538a70:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538a74:	89 04 24             	mov    %eax,(%esp)
 8538a77:	e8 e6 e7 cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8538a7c:	eb 0a                	jmp    8538a88 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2c8>
 8538a7e:	90                   	nop
 8538a7f:	eb 07                	jmp    8538a88 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2c8>
 8538a81:	90                   	nop
 8538a82:	eb 04                	jmp    8538a88 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2c8>
 8538a84:	90                   	nop
 8538a85:	eb 01                	jmp    8538a88 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf+0x2c8>
 8538a87:	90                   	nop
 8538a88:	81 c4 a4 00 00 00    	add    $0xa4,%esp
 8538a8e:	5b                   	pop    %ebx
 8538a8f:	5d                   	pop    %ebp
 8538a90:	c3                   	ret
 8538a91:	90                   	nop

```

```c
// WongWork::CClearReward::_generateRandomItem @ 0x85387c0

/* WongWork::CClearReward::_generateRandomItem(WongWork::stGenerateRefClearReward_t const&, int,
   WongWork::stGenerateResult_t&, float) */

void __thiscall
WongWork::CClearReward::_generateRandomItem
          (CClearReward *this,stGenerateRefClearReward_t *param_1,int param_2,
          stGenerateResult_t *param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CItemGeneratorMgr *pCVar4;
  Inven_Item local_7d [2];
  int local_7b;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_34 = _getGenItemProbIdx(this,*param_1,*(undefined4 *)(param_1 + 8));
  if (-1 < (int)local_34) {
    puVar1 = (undefined4 *)
             std::
             vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
             ::operator[]((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                           *)(this + *(int *)(param_1 + 8) * 0xc + 0x60),local_34);
    local_40 = *puVar1;
    local_3c = puVar1[1];
    local_38 = puVar1[2];
    local_30 = (int)ROUND((1.0 - param_4) *
                          (float)(((int)ROUND(*(float *)(param_1 + 4) * (float)local_38) +
                                  *(int *)(this + ((byte)param_1[1] + 0x30) * 4 + 4)) *
                                 (param_2 / 100)));
    iVar2 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,10000);
    if (iVar2 < local_30) {
      local_2c = 0;
      local_28 = 1;
      local_24 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),2,10000);
      for (local_10 = 1; local_10 < 5; local_10 = local_10 + 1) {
        local_2c = local_2c + *(int *)(this + (local_10 + 0x2c) * 4);
        if (local_24 < local_2c) {
          local_28 = local_10;
          break;
        }
      }
      local_20 = CGenerateRandomNumber::generateNumber
                           ((CGenerateRandomNumber *)(this + 8),3,1000000);
      local_1c = CLuckPoint::GetItemRarity
                           ((CLuckPoint *)(param_3 + 0xc),(int *)(this + 0xfc),local_20,local_28);
      uVar3 = CItemGenerator::getGeneratorType((CItemGenerator *)this);
      this_00 = (CDataManager *)G_CDataManager();
      pCVar4 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(this_00);
      CItemGeneratorMgr::onTryGenerateRandomItem(pCVar4,uVar3,local_28,local_1c);
      local_18 = CItemGenRateTable::chooseItem
                           ((CItemGenRateTable *)(this + 0x2a8),local_28,local_1c,*param_1);
      if (local_18 != -1) {
        iVar2 = G_CDataManager();
        local_14 = CItemList::find_item(*(CItemList **)(iVar2 + 0xc),local_18);
        if (local_14 != 0) {
          Inven_Item::Inven_Item(local_7d);
          local_7b = local_18;
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_7d,1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_3,local_7d);
        }
      }
    }
  }
  return;
}

```

---

## _generateSpecificItem

```asm
// === 08538bf8 WongWork::CClearReward::_generateSpecificItem  [0x08538bf8-0x8538c83] ===
 8538bf8:	55                   	push   %ebp
 8538bf9:	89 e5                	mov    %esp,%ebp
 8538bfb:	83 ec 68             	sub    $0x68,%esp
 8538bfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8538c01:	83 c0 08             	add    $0x8,%eax
 8538c04:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8538c0b:	00 
 8538c0c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8538c13:	00 
 8538c14:	89 04 24             	mov    %eax,(%esp)
 8538c17:	e8 88 a8 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8538c1c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8538c1f:	8b 52 0c             	mov    0xc(%edx),%edx
 8538c22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538c26:	89 14 24             	mov    %edx,(%esp)
 8538c29:	e8 2e 3d e1 ff       	call   834c95c <_ZNK8CDungeon14get_clear_itemEi>
 8538c2e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8538c31:	83 7d f4 fe          	cmpl   $0xfffffffe,-0xc(%ebp)
 8538c35:	74 4a                	je     8538c81 <_ZN8WongWork12CClearReward21_generateSpecificItemERKNS_26stGenerateRefClearReward_tERNS_18stGenerateResult_tE+0x89>
 8538c37:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8538c3a:	89 04 24             	mov    %eax,(%esp)
 8538c3d:	e8 12 2c b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8538c42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8538c45:	89 45 b9             	mov    %eax,-0x47(%ebp)
 8538c48:	e8 4e 35 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538c4d:	8b 40 0c             	mov    0xc(%eax),%eax
 8538c50:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8538c57:	00 
 8538c58:	8d 55 b7             	lea    -0x49(%ebp),%edx
 8538c5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8538c5f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8538c66:	00 
 8538c67:	89 04 24             	mov    %eax,(%esp)
 8538c6a:	e8 49 93 fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8538c6f:	8b 45 10             	mov    0x10(%ebp),%eax
 8538c72:	8d 55 b7             	lea    -0x49(%ebp),%edx
 8538c75:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538c79:	89 04 24             	mov    %eax,(%esp)
 8538c7c:	e8 e1 e5 cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8538c81:	c9                   	leave
 8538c82:	c3                   	ret
 8538c83:	90                   	nop

```

```c
// WongWork::CClearReward::_generateSpecificItem @ 0x8538bf8

/* WongWork::CClearReward::_generateSpecificItem(WongWork::stGenerateRefClearReward_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CClearReward::_generateSpecificItem
          (CClearReward *this,stGenerateRefClearReward_t *param_1,stGenerateResult_t *param_2)

{
  int iVar1;
  Inven_Item local_4d [2];
  int local_4b;
  int local_10;
  
  iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),4,100);
  local_10 = CDungeon::get_clear_item(*(CDungeon **)(param_1 + 0xc),iVar1);
  if (local_10 != -2) {
    Inven_Item::Inven_Item(local_4d);
    local_4b = local_10;
    iVar1 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar1 + 0xc),1,local_4d,1);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_4d);
  }
  return;
}

```

---

## _getGenItemProbIdx

```asm
// === 08538694 WongWork::CClearReward::_getGenItemProbIdx  [0x08538694-0x8538739] ===
 8538694:	55                   	push   %ebp
 8538695:	89 e5                	mov    %esp,%ebp
 8538697:	83 ec 28             	sub    $0x28,%esp
 853869a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85386a1:	eb 40                	jmp    85386e3 <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE+0x4f>
 85386a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85386a6:	8d 48 60             	lea    0x60(%eax),%ecx
 85386a9:	8b 55 10             	mov    0x10(%ebp),%edx
 85386ac:	89 d0                	mov    %edx,%eax
 85386ae:	01 c0                	add    %eax,%eax
 85386b0:	01 d0                	add    %edx,%eax
 85386b2:	c1 e0 02             	shl    $0x2,%eax
 85386b5:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 85386b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85386bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85386bf:	89 14 24             	mov    %edx,(%esp)
 85386c2:	e8 91 36 00 00       	call   853bd58 <_ZNSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EEixEj>
 85386c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85386ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85386cd:	8b 00                	mov    (%eax),%eax
 85386cf:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85386d2:	7f 0b                	jg     85386df <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE+0x4b>
 85386d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85386d7:	8b 40 04             	mov    0x4(%eax),%eax
 85386da:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85386dd:	7d 2a                	jge    8538709 <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE+0x75>
 85386df:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85386e3:	8b 55 10             	mov    0x10(%ebp),%edx
 85386e6:	89 d0                	mov    %edx,%eax
 85386e8:	01 c0                	add    %eax,%eax
 85386ea:	01 d0                	add    %edx,%eax
 85386ec:	c1 e0 02             	shl    $0x2,%eax
 85386ef:	83 c0 60             	add    $0x60,%eax
 85386f2:	03 45 08             	add    0x8(%ebp),%eax
 85386f5:	89 04 24             	mov    %eax,(%esp)
 85386f8:	e8 39 36 00 00       	call   853bd36 <_ZNKSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EE4sizeEv>
 85386fd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8538700:	0f 97 c0             	seta   %al
 8538703:	84 c0                	test   %al,%al
 8538705:	75 9c                	jne    85386a3 <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE+0xf>
 8538707:	eb 01                	jmp    853870a <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE+0x76>
 8538709:	90                   	nop
 853870a:	8b 55 10             	mov    0x10(%ebp),%edx
 853870d:	89 d0                	mov    %edx,%eax
 853870f:	01 c0                	add    %eax,%eax
 8538711:	01 d0                	add    %edx,%eax
 8538713:	c1 e0 02             	shl    $0x2,%eax
 8538716:	83 c0 60             	add    $0x60,%eax
 8538719:	03 45 08             	add    0x8(%ebp),%eax
 853871c:	89 04 24             	mov    %eax,(%esp)
 853871f:	e8 12 36 00 00       	call   853bd36 <_ZNKSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EE4sizeEv>
 8538724:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8538727:	0f 96 c0             	setbe  %al
 853872a:	84 c0                	test   %al,%al
 853872c:	74 07                	je     8538735 <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE+0xa1>
 853872e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8538733:	eb 03                	jmp    8538738 <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE+0xa4>
 8538735:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8538738:	c9                   	leave
 8538739:	c3                   	ret

```

```c
// WongWork::CClearReward::_getGenItemProbIdx @ 0x8538694

/* WongWork::CClearReward::_getGenItemProbIdx(int, WongWork::eClearRewardDropProb_t) */

uint __thiscall
WongWork::CClearReward::_getGenItemProbIdx(CClearReward *this,int param_1,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                  ::size((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                          *)(this + param_3 * 0xc + 0x60)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                                         *)(this + param_3 * 0xc + 0x60),local_14),
          param_1 < *piVar1 || (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
          ::size((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                  *)(this + param_3 * 0xc + 0x60));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}

```

---

## generateGoldCardBlankItem

```asm
// === 08539166 WongWork::CClearReward::generateGoldCardBlankItem  [0x08539166-0x85392bf] ===
 8539166:	55                   	push   %ebp
 8539167:	89 e5                	mov    %esp,%ebp
 8539169:	53                   	push   %ebx
 853916a:	83 ec 34             	sub    $0x34,%esp
 853916d:	8b 45 08             	mov    0x8(%ebp),%eax
 8539170:	05 40 3b 02 00       	add    $0x23b40,%eax
 8539175:	89 04 24             	mov    %eax,(%esp)
 8539178:	e8 f5 2b 00 00       	call   853bd72 <_ZNKSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE5emptyEv>
 853917d:	84 c0                	test   %al,%al
 853917f:	74 0a                	je     853918b <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0x25>
 8539181:	b8 00 00 00 00       	mov    $0x0,%eax
 8539186:	e9 2f 01 00 00       	jmp    85392ba <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0x154>
 853918b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8539192:	8b 45 08             	mov    0x8(%ebp),%eax
 8539195:	8b 80 3c 3b 02 00    	mov    0x23b3c(%eax),%eax
 853919b:	89 04 24             	mov    %eax,(%esp)
 853919e:	e8 e4 89 17 00       	call   86b1b87 <_Z12get_rand_inti>
 85391a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85391a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85391a9:	8d 90 40 3b 02 00    	lea    0x23b40(%eax),%edx
 85391af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85391b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85391b6:	89 04 24             	mov    %eax,(%esp)
 85391b9:	e8 f8 2b 00 00       	call   853bdb6 <_ZNSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE5beginEv>
 85391be:	83 ec 04             	sub    $0x4,%esp
 85391c1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85391c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85391c8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85391cb:	89 04 24             	mov    %eax,(%esp)
 85391ce:	e8 07 2c 00 00       	call   853bdda <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 85391d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85391d6:	8d 90 40 3b 02 00    	lea    0x23b40(%eax),%edx
 85391dc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85391df:	89 54 24 04          	mov    %edx,0x4(%esp)
 85391e3:	89 04 24             	mov    %eax,(%esp)
 85391e6:	e8 09 2c 00 00       	call   853bdf4 <_ZNSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE3endEv>
 85391eb:	83 ec 04             	sub    $0x4,%esp
 85391ee:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85391f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85391f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85391f8:	89 04 24             	mov    %eax,(%esp)
 85391fb:	e8 da 2b 00 00       	call   853bdda <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 8539200:	e9 96 00 00 00       	jmp    853929b <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0x135>
 8539205:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8539208:	89 04 24             	mov    %eax,(%esp)
 853920b:	e8 4c 2c 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 8539210:	8b 10                	mov    (%eax),%edx
 8539212:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8539215:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8539218:	89 45 f0             	mov    %eax,-0x10(%ebp)
 853921b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 853921e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8539221:	7d 6d                	jge    8539290 <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0x12a>
 8539223:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8539226:	89 04 24             	mov    %eax,(%esp)
 8539229:	e8 2e 2c 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 853922e:	8b 40 04             	mov    0x4(%eax),%eax
 8539231:	83 f8 ff             	cmp    $0xffffffff,%eax
 8539234:	0f 94 c0             	sete   %al
 8539237:	84 c0                	test   %al,%al
 8539239:	74 07                	je     8539242 <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0xdc>
 853923b:	b8 00 00 00 00       	mov    $0x0,%eax
 8539240:	eb 78                	jmp    85392ba <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0x154>
 8539242:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8539245:	89 04 24             	mov    %eax,(%esp)
 8539248:	e8 0f 2c 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 853924d:	8b 50 04             	mov    0x4(%eax),%edx
 8539250:	8b 45 0c             	mov    0xc(%ebp),%eax
 8539253:	89 50 02             	mov    %edx,0x2(%eax)
 8539256:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8539259:	89 04 24             	mov    %eax,(%esp)
 853925c:	e8 fb 2b 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 8539261:	8b 40 08             	mov    0x8(%eax),%eax
 8539264:	89 c3                	mov    %eax,%ebx
 8539266:	e8 30 2f b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853926b:	8b 40 0c             	mov    0xc(%eax),%eax
 853926e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8539272:	8b 55 0c             	mov    0xc(%ebp),%edx
 8539275:	89 54 24 08          	mov    %edx,0x8(%esp)
 8539279:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8539280:	00 
 8539281:	89 04 24             	mov    %eax,(%esp)
 8539284:	e8 2f 8d fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8539289:	b8 01 00 00 00       	mov    $0x1,%eax
 853928e:	eb 2a                	jmp    85392ba <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0x154>
 8539290:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8539293:	89 04 24             	mov    %eax,(%esp)
 8539296:	e8 ab 2b 00 00       	call   853be46 <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEppEv>
 853929b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 853929e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85392a2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85392a5:	89 04 24             	mov    %eax,(%esp)
 85392a8:	e8 6d 2b 00 00       	call   853be1a <_ZN9__gnu_cxxneIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 85392ad:	84 c0                	test   %al,%al
 85392af:	0f 85 50 ff ff ff    	jne    8539205 <_ZN8WongWork12CClearReward25generateGoldCardBlankItemER10Inven_Item+0x9f>
 85392b5:	b8 00 00 00 00       	mov    $0x0,%eax
 85392ba:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85392bd:	c9                   	leave
 85392be:	c3                   	ret
 85392bf:	90                   	nop

```

```c
// WongWork::CClearReward::generateGoldCardBlankItem @ 0x8539166

/* WongWork::CClearReward::generateGoldCardBlankItem(Inven_Item&) */

undefined4 __thiscall
WongWork::CClearReward::generateGoldCardBlankItem(CClearReward *this,Inven_Item *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
  local_24 [4];
  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  cVar2 = std::
          vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
          ::empty();
  if (cVar2 == '\0') {
    local_14 = 0;
    local_10 = get_rand_int(*(int *)(this + 0x23b3c));
    std::
    vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
    ::begin();
    __gnu_cxx::
    __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
    ::__normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t*>(local_20,local_1c);
    std::
    vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
    ::end();
    __gnu_cxx::
    __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
    ::__normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t*>(local_24,local_18);
    while (bVar3 = __gnu_cxx::operator!=(local_20,local_24), bVar3) {
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                      ::operator->(local_20);
      local_14 = *piVar4 + local_14;
      if (local_10 < local_14) {
        iVar5 = __gnu_cxx::
                __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                ::operator->(local_20);
        if (*(int *)(iVar5 + 4) != -1) {
          iVar5 = __gnu_cxx::
                  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                  ::operator->(local_20);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(iVar5 + 4);
          iVar5 = __gnu_cxx::
                  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                  ::operator->(local_20);
          uVar1 = *(undefined4 *)(iVar5 + 8);
          iVar5 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar5 + 0xc),1,param_1,uVar1);
          return 1;
        }
        return 0;
      }
      __gnu_cxx::
      __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
      ::operator++(local_20);
    }
  }
  return 0;
}

```

---

## generatePcRoomCardBlankItem

```asm
// === 0853900c WongWork::CClearReward::generatePcRoomCardBlankItem  [0x0853900c-0x8539165] ===
 853900c:	55                   	push   %ebp
 853900d:	89 e5                	mov    %esp,%ebp
 853900f:	53                   	push   %ebx
 8539010:	83 ec 34             	sub    $0x34,%esp
 8539013:	8b 45 08             	mov    0x8(%ebp),%eax
 8539016:	05 78 3b 02 00       	add    $0x23b78,%eax
 853901b:	89 04 24             	mov    %eax,(%esp)
 853901e:	e8 4f 2d 00 00       	call   853bd72 <_ZNKSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE5emptyEv>
 8539023:	84 c0                	test   %al,%al
 8539025:	74 0a                	je     8539031 <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0x25>
 8539027:	b8 00 00 00 00       	mov    $0x0,%eax
 853902c:	e9 2f 01 00 00       	jmp    8539160 <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0x154>
 8539031:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8539038:	8b 45 08             	mov    0x8(%ebp),%eax
 853903b:	8b 80 74 3b 02 00    	mov    0x23b74(%eax),%eax
 8539041:	89 04 24             	mov    %eax,(%esp)
 8539044:	e8 3e 8b 17 00       	call   86b1b87 <_Z12get_rand_inti>
 8539049:	89 45 f4             	mov    %eax,-0xc(%ebp)
 853904c:	8b 45 08             	mov    0x8(%ebp),%eax
 853904f:	8d 90 78 3b 02 00    	lea    0x23b78(%eax),%edx
 8539055:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8539058:	89 54 24 04          	mov    %edx,0x4(%esp)
 853905c:	89 04 24             	mov    %eax,(%esp)
 853905f:	e8 52 2d 00 00       	call   853bdb6 <_ZNSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE5beginEv>
 8539064:	83 ec 04             	sub    $0x4,%esp
 8539067:	8d 45 e8             	lea    -0x18(%ebp),%eax
 853906a:	89 44 24 04          	mov    %eax,0x4(%esp)
 853906e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8539071:	89 04 24             	mov    %eax,(%esp)
 8539074:	e8 61 2d 00 00       	call   853bdda <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 8539079:	8b 45 08             	mov    0x8(%ebp),%eax
 853907c:	8d 90 78 3b 02 00    	lea    0x23b78(%eax),%edx
 8539082:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8539085:	89 54 24 04          	mov    %edx,0x4(%esp)
 8539089:	89 04 24             	mov    %eax,(%esp)
 853908c:	e8 63 2d 00 00       	call   853bdf4 <_ZNSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE3endEv>
 8539091:	83 ec 04             	sub    $0x4,%esp
 8539094:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8539097:	89 44 24 04          	mov    %eax,0x4(%esp)
 853909b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 853909e:	89 04 24             	mov    %eax,(%esp)
 85390a1:	e8 34 2d 00 00       	call   853bdda <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 85390a6:	e9 96 00 00 00       	jmp    8539141 <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0x135>
 85390ab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85390ae:	89 04 24             	mov    %eax,(%esp)
 85390b1:	e8 a6 2d 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 85390b6:	8b 10                	mov    (%eax),%edx
 85390b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85390bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85390be:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85390c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85390c4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85390c7:	7d 6d                	jge    8539136 <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0x12a>
 85390c9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85390cc:	89 04 24             	mov    %eax,(%esp)
 85390cf:	e8 88 2d 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 85390d4:	8b 40 04             	mov    0x4(%eax),%eax
 85390d7:	83 f8 ff             	cmp    $0xffffffff,%eax
 85390da:	0f 94 c0             	sete   %al
 85390dd:	84 c0                	test   %al,%al
 85390df:	74 07                	je     85390e8 <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0xdc>
 85390e1:	b8 00 00 00 00       	mov    $0x0,%eax
 85390e6:	eb 78                	jmp    8539160 <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0x154>
 85390e8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85390eb:	89 04 24             	mov    %eax,(%esp)
 85390ee:	e8 69 2d 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 85390f3:	8b 50 04             	mov    0x4(%eax),%edx
 85390f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85390f9:	89 50 02             	mov    %edx,0x2(%eax)
 85390fc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85390ff:	89 04 24             	mov    %eax,(%esp)
 8539102:	e8 55 2d 00 00       	call   853be5c <_ZNK9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEptEv>
 8539107:	8b 40 08             	mov    0x8(%eax),%eax
 853910a:	89 c3                	mov    %eax,%ebx
 853910c:	e8 8a 30 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8539111:	8b 40 0c             	mov    0xc(%eax),%eax
 8539114:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8539118:	8b 55 0c             	mov    0xc(%ebp),%edx
 853911b:	89 54 24 08          	mov    %edx,0x8(%esp)
 853911f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8539126:	00 
 8539127:	89 04 24             	mov    %eax,(%esp)
 853912a:	e8 89 8e fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 853912f:	b8 01 00 00 00       	mov    $0x1,%eax
 8539134:	eb 2a                	jmp    8539160 <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0x154>
 8539136:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8539139:	89 04 24             	mov    %eax,(%esp)
 853913c:	e8 05 2d 00 00       	call   853be46 <_ZN9__gnu_cxx17__normal_iteratorIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEppEv>
 8539141:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8539144:	89 44 24 04          	mov    %eax,0x4(%esp)
 8539148:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 853914b:	89 04 24             	mov    %eax,(%esp)
 853914e:	e8 c7 2c 00 00       	call   853be1a <_ZN9__gnu_cxxneIPKN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8539153:	84 c0                	test   %al,%al
 8539155:	0f 85 50 ff ff ff    	jne    85390ab <_ZN8WongWork12CClearReward27generatePcRoomCardBlankItemER10Inven_Item+0x9f>
 853915b:	b8 00 00 00 00       	mov    $0x0,%eax
 8539160:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8539163:	c9                   	leave
 8539164:	c3                   	ret
 8539165:	90                   	nop

```

```c
// WongWork::CClearReward::generatePcRoomCardBlankItem @ 0x853900c

/* WongWork::CClearReward::generatePcRoomCardBlankItem(Inven_Item&) */

undefined4 __thiscall
WongWork::CClearReward::generatePcRoomCardBlankItem(CClearReward *this,Inven_Item *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
  local_24 [4];
  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  cVar2 = std::
          vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
          ::empty();
  if (cVar2 == '\0') {
    local_14 = 0;
    local_10 = get_rand_int(*(int *)(this + 0x23b74));
    std::
    vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
    ::begin();
    __gnu_cxx::
    __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
    ::__normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t*>(local_20,local_1c);
    std::
    vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
    ::end();
    __gnu_cxx::
    __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
    ::__normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t*>(local_24,local_18);
    while (bVar3 = __gnu_cxx::operator!=(local_20,local_24), bVar3) {
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                      ::operator->(local_20);
      local_14 = *piVar4 + local_14;
      if (local_10 < local_14) {
        iVar5 = __gnu_cxx::
                __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                ::operator->(local_20);
        if (*(int *)(iVar5 + 4) != -1) {
          iVar5 = __gnu_cxx::
                  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                  ::operator->(local_20);
          *(undefined4 *)(param_1 + 2) = *(undefined4 *)(iVar5 + 4);
          iVar5 = __gnu_cxx::
                  __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
                  ::operator->(local_20);
          uVar1 = *(undefined4 *)(iVar5 + 8);
          iVar5 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar5 + 0xc),1,param_1,uVar1);
          return 1;
        }
        return 0;
      }
      __gnu_cxx::
      __normal_iterator<WongWork::CClearReward::stGoldCardBlankItemInfo_t_const*,std::vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>>
      ::operator++(local_20);
    }
  }
  return 0;
}

```

---

## generatePremiumGoldCardItem

```asm
// === 08538a92 WongWork::CClearReward::generatePremiumGoldCardItem  [0x08538a92-0x8538bf7] ===
 8538a92:	55                   	push   %ebp
 8538a93:	89 e5                	mov    %esp,%ebp
 8538a95:	53                   	push   %ebx
 8538a96:	83 ec 74             	sub    $0x74,%esp
 8538a99:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 8538aa0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8538aa7:	8b 45 14             	mov    0x14(%ebp),%eax
 8538aaa:	85 c0                	test   %eax,%eax
 8538aac:	79 60                	jns    8538b0e <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x7c>
 8538aae:	8b 45 08             	mov    0x8(%ebp),%eax
 8538ab1:	83 c0 08             	add    $0x8,%eax
 8538ab4:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 8538abb:	00 
 8538abc:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8538ac3:	00 
 8538ac4:	89 04 24             	mov    %eax,(%esp)
 8538ac7:	e8 d8 a9 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8538acc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8538acf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8538ad6:	eb 29                	jmp    8538b01 <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x6f>
 8538ad8:	e8 be 36 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538add:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8538ae0:	81 c2 64 12 00 00    	add    $0x1264,%edx
 8538ae6:	8b 44 90 14          	mov    0x14(%eax,%edx,4),%eax
 8538aea:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8538aed:	0f 9d c0             	setge  %al
 8538af0:	84 c0                	test   %al,%al
 8538af2:	74 09                	je     8538afd <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x6b>
 8538af4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8538af7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8538afa:	90                   	nop
 8538afb:	eb 17                	jmp    8538b14 <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x82>
 8538afd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8538b01:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 8538b05:	0f 9e c0             	setle  %al
 8538b08:	84 c0                	test   %al,%al
 8538b0a:	75 cc                	jne    8538ad8 <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x46>
 8538b0c:	eb 06                	jmp    8538b14 <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x82>
 8538b0e:	8b 45 14             	mov    0x14(%ebp),%eax
 8538b11:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8538b14:	8b 45 08             	mov    0x8(%ebp),%eax
 8538b17:	89 04 24             	mov    %eax,(%esp)
 8538b1a:	e8 fb 18 00 00       	call   853a41a <_ZN8WongWork14CItemGenerator16getGeneratorTypeEv>
 8538b1f:	89 c3                	mov    %eax,%ebx
 8538b21:	e8 75 36 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538b26:	89 04 24             	mov    %eax,(%esp)
 8538b29:	e8 bc 1b c1 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 8538b2e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8538b31:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8538b35:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8538b38:	89 54 24 08          	mov    %edx,0x8(%esp)
 8538b3c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8538b40:	89 04 24             	mov    %eax,(%esp)
 8538b43:	e8 7e b7 ff ff       	call   85342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>
 8538b48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538b4b:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 8538b4f:	0f b6 c0             	movzbl %al,%eax
 8538b52:	8b 55 08             	mov    0x8(%ebp),%edx
 8538b55:	81 c2 a8 02 00 00    	add    $0x2a8,%edx
 8538b5b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8538b5f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8538b62:	89 44 24 08          	mov    %eax,0x8(%esp)
 8538b66:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538b69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538b6d:	89 14 24             	mov    %edx,(%esp)
 8538b70:	e8 2f be ff ff       	call   85349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>
 8538b75:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8538b78:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 8538b7c:	75 06                	jne    8538b84 <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0xf2>
 8538b7e:	8b 45 18             	mov    0x18(%ebp),%eax
 8538b81:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8538b84:	e8 12 36 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538b89:	8b 40 0c             	mov    0xc(%eax),%eax
 8538b8c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8538b8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538b93:	89 04 24             	mov    %eax,(%esp)
 8538b96:	e8 ef 92 fd ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8538b9b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8538b9e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8538ba2:	74 4c                	je     8538bf0 <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x15e>
 8538ba4:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8538ba7:	89 04 24             	mov    %eax,(%esp)
 8538baa:	e8 a5 2c b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8538baf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8538bb2:	89 45 a5             	mov    %eax,-0x5b(%ebp)
 8538bb5:	e8 e1 35 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538bba:	8b 40 0c             	mov    0xc(%eax),%eax
 8538bbd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8538bc4:	00 
 8538bc5:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 8538bc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8538bcc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8538bd3:	00 
 8538bd4:	89 04 24             	mov    %eax,(%esp)
 8538bd7:	e8 dc 93 fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8538bdc:	8b 45 10             	mov    0x10(%ebp),%eax
 8538bdf:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 8538be2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538be6:	89 04 24             	mov    %eax,(%esp)
 8538be9:	e8 74 e6 cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8538bee:	eb 01                	jmp    8538bf1 <_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj+0x15f>
 8538bf0:	90                   	nop
 8538bf1:	83 c4 74             	add    $0x74,%esp
 8538bf4:	5b                   	pop    %ebx
 8538bf5:	5d                   	pop    %ebp
 8538bf6:	c3                   	ret
 8538bf7:	90                   	nop

```

```c
// WongWork::CClearReward::generatePremiumGoldCardItem @ 0x8538a92

/* WongWork::CClearReward::generatePremiumGoldCardItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&, ENUM_RARITY, unsigned int) */

void __thiscall
WongWork::CClearReward::generatePremiumGoldCardItem
          (CClearReward *this,int param_1,vector<Inven_Item,std::allocator<Inven_Item>> *param_2,
          int param_4,int param_5)

{
  undefined4 uVar1;
  CDataManager *this_00;
  CItemGeneratorMgr *pCVar2;
  int iVar3;
  Inven_Item local_61 [2];
  int local_5f;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = 2;
  local_20 = 0;
  if (param_4 < 0) {
    local_14 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),3,10000);
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      iVar3 = G_CDataManager();
      if (local_14 <= *(int *)(iVar3 + 0x14 + (local_10 + 0x1264) * 4)) {
        local_20 = local_10;
        break;
      }
    }
  }
  else {
    local_20 = param_4;
  }
  uVar1 = CItemGenerator::getGeneratorType((CItemGenerator *)this);
  this_00 = (CDataManager *)G_CDataManager();
  pCVar2 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(this_00);
  CItemGeneratorMgr::onTryGenerateRandomItem(pCVar2,uVar1,local_24,local_20);
  local_1c = CItemGenRateTable::chooseItem
                       ((CItemGenRateTable *)(this + 0x2a8),local_24,local_20,
                        *(undefined1 *)(param_1 + 0x34));
  if (local_1c == -1) {
    local_1c = param_5;
  }
  iVar3 = G_CDataManager();
  local_18 = CItemList::find_item(*(CItemList **)(iVar3 + 0xc),local_1c);
  if (local_18 != 0) {
    Inven_Item::Inven_Item(local_61);
    local_5f = local_1c;
    iVar3 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar3 + 0xc),1,local_61,1);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(param_2,local_61);
  }
  return;
}

```

---

## generateRandomItem

```asm
// === 0853873a WongWork::CClearReward::generateRandomItem  [0x0853873a-0x85387bf] ===
 853873a:	55                   	push   %ebp
 853873b:	89 e5                	mov    %esp,%ebp
 853873d:	83 ec 28             	sub    $0x28,%esp
 8538740:	8b 45 08             	mov    0x8(%ebp),%eax
 8538743:	83 c0 08             	add    $0x8,%eax
 8538746:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 853874d:	00 
 853874e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8538755:	00 
 8538756:	89 04 24             	mov    %eax,(%esp)
 8538759:	e8 46 ad ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 853875e:	8b 55 08             	mov    0x8(%ebp),%edx
 8538761:	8b 92 a8 00 00 00    	mov    0xa8(%edx),%edx
 8538767:	39 d0                	cmp    %edx,%eax
 8538769:	0f 9c c0             	setl   %al
 853876c:	84 c0                	test   %al,%al
 853876e:	74 31                	je     85387a1 <_ZN8WongWork12CClearReward18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x67>
 8538770:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538773:	8b 50 04             	mov    0x4(%eax),%edx
 8538776:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538779:	8b 00                	mov    (%eax),%eax
 853877b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 853877e:	83 c1 34             	add    $0x34,%ecx
 8538781:	89 54 24 10          	mov    %edx,0x10(%esp)
 8538785:	8b 55 10             	mov    0x10(%ebp),%edx
 8538788:	89 54 24 0c          	mov    %edx,0xc(%esp)
 853878c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8538790:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8538794:	8b 45 08             	mov    0x8(%ebp),%eax
 8538797:	89 04 24             	mov    %eax,(%esp)
 853879a:	e8 21 00 00 00       	call   85387c0 <_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf>
 853879f:	eb 1c                	jmp    85387bd <_ZN8WongWork12CClearReward18generateRandomItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x83>
 85387a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85387a4:	8d 50 34             	lea    0x34(%eax),%edx
 85387a7:	8b 45 10             	mov    0x10(%ebp),%eax
 85387aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 85387ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 85387b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85387b5:	89 04 24             	mov    %eax,(%esp)
 85387b8:	e8 3b 04 00 00       	call   8538bf8 <_ZN8WongWork12CClearReward21_generateSpecificItemERKNS_26stGenerateRefClearReward_tERNS_18stGenerateResult_tE>
 85387bd:	c9                   	leave
 85387be:	c3                   	ret
 85387bf:	90                   	nop

```

```c
// WongWork::CClearReward::generateRandomItem @ 0x853873a

/* WongWork::CClearReward::generateRandomItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CClearReward::generateRandomItem
          (CClearReward *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  int iVar1;
  
  iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),1,10000);
  if (iVar1 < *(int *)(this + 0xa8)) {
    _generateRandomItem(this,(stGenerateRefClearReward_t *)(param_1 + 0x34),*(int *)param_1,param_2,
                        *(float *)(param_1 + 4));
  }
  else {
    _generateSpecificItem(this,(stGenerateRefClearReward_t *)(param_1 + 0x34),param_2);
  }
  return;
}

```

---

## generateSpecificItem

```asm
// === 08538c84 WongWork::CClearReward::generateSpecificItem  [0x08538c84-0x8538e63] ===
 8538c84:	55                   	push   %ebp
 8538c85:	89 e5                	mov    %esp,%ebp
 8538c87:	53                   	push   %ebx
 8538c88:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8538c8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538c91:	83 c0 34             	add    $0x34,%eax
 8538c94:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8538c97:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538c9a:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8538c9e:	0f b6 c0             	movzbl %al,%eax
 8538ca1:	8d 50 ff             	lea    -0x1(%eax),%edx
 8538ca4:	8b 45 08             	mov    0x8(%ebp),%eax
 8538ca7:	83 c2 38             	add    $0x38,%edx
 8538caa:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8538cae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538cb1:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8538cb5:	0f b6 d0             	movzbl %al,%edx
 8538cb8:	8b 45 08             	mov    0x8(%ebp),%eax
 8538cbb:	83 c2 34             	add    $0x34,%edx
 8538cbe:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 8538cc2:	de c9                	fmulp  %st,%st(1)
 8538cc4:	d9 5d 8c             	fstps  -0x74(%ebp)
 8538cc7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538cca:	8b 58 04             	mov    0x4(%eax),%ebx
 8538ccd:	e8 c9 34 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538cd2:	83 c0 68             	add    $0x68,%eax
 8538cd5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8538cd9:	89 04 24             	mov    %eax,(%esp)
 8538cdc:	e8 ab 35 55 00       	call   8a8c28c <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex>
 8538ce1:	d9 e8                	fld1
 8538ce3:	de c1                	faddp  %st,%st(1)
 8538ce5:	d8 4d 8c             	fmuls  -0x74(%ebp)
 8538ce8:	d9 5d e0             	fstps  -0x20(%ebp)
 8538ceb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538cee:	0f b6 00             	movzbl (%eax),%eax
 8538cf1:	0f b6 d0             	movzbl %al,%edx
 8538cf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8538cf7:	8b 40 04             	mov    0x4(%eax),%eax
 8538cfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538cfe:	89 04 24             	mov    %eax,(%esp)
 8538d01:	e8 1e a7 ff ff       	call   8533424 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh>
 8538d06:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8538d09:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8538d0c:	8b 00                	mov    (%eax),%eax
 8538d0e:	69 c8 af 00 00 00    	imul   $0xaf,%eax,%ecx
 8538d14:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8538d19:	89 c8                	mov    %ecx,%eax
 8538d1b:	f7 ea                	imul   %edx
 8538d1d:	c1 fa 06             	sar    $0x6,%edx
 8538d20:	89 c8                	mov    %ecx,%eax
 8538d22:	c1 f8 1f             	sar    $0x1f,%eax
 8538d25:	89 d1                	mov    %edx,%ecx
 8538d27:	29 c1                	sub    %eax,%ecx
 8538d29:	89 c8                	mov    %ecx,%eax
 8538d2b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8538d2e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538d31:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8538d35:	0f b7 d0             	movzwl %ax,%edx
 8538d38:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538d3b:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8538d3f:	0f b7 c0             	movzwl %ax,%eax
 8538d42:	8d 0c 00             	lea    (%eax,%eax,1),%ecx
 8538d45:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538d48:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8538d4c:	0f b7 c0             	movzwl %ax,%eax
 8538d4f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8538d52:	01 c0                	add    %eax,%eax
 8538d54:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8538d57:	0f af 45 e8          	imul   -0x18(%ebp),%eax
 8538d5b:	89 c2                	mov    %eax,%edx
 8538d5d:	c1 ea 1f             	shr    $0x1f,%edx
 8538d60:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8538d63:	d1 f8                	sar    $1,%eax
 8538d65:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8538d68:	db 45 94             	fildl  -0x6c(%ebp)
 8538d6b:	d8 4d e0             	fmuls  -0x20(%ebp)
 8538d6e:	d9 7d 92             	fnstcw -0x6e(%ebp)
 8538d71:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 8538d75:	b4 0c                	mov    $0xc,%ah
 8538d77:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 8538d7b:	d9 6d 90             	fldcw  -0x70(%ebp)
 8538d7e:	db 5d ec             	fistpl -0x14(%ebp)
 8538d81:	d9 6d 92             	fldcw  -0x6e(%ebp)
 8538d84:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8538d8b:	e9 b3 00 00 00       	jmp    8538e43 <_ZN8WongWork12CClearReward20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1bf>
 8538d90:	db 45 ec             	fildl  -0x14(%ebp)
 8538d93:	d9 05 d8 a6 c9 08    	flds   0x8c9a6d8
 8538d99:	de f9                	fdivrp %st,%st(1)
 8538d9b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538d9e:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8538da2:	0f b6 c0             	movzbl %al,%eax
 8538da5:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8538da8:	db 45 94             	fildl  -0x6c(%ebp)
 8538dab:	de f9                	fdivrp %st,%st(1)
 8538dad:	d8 4d e0             	fmuls  -0x20(%ebp)
 8538db0:	d9 7d 92             	fnstcw -0x6e(%ebp)
 8538db3:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 8538db7:	b4 0c                	mov    $0xc,%ah
 8538db9:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 8538dbd:	d9 6d 90             	fldcw  -0x70(%ebp)
 8538dc0:	db 5d 94             	fistpl -0x6c(%ebp)
 8538dc3:	d9 6d 92             	fldcw  -0x6e(%ebp)
 8538dc6:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 8538dc9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8538dcc:	8b 40 04             	mov    0x4(%eax),%eax
 8538dcf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8538dd2:	8b 52 04             	mov    0x4(%edx),%edx
 8538dd5:	f7 da                	neg    %edx
 8538dd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538ddb:	89 14 24             	mov    %edx,(%esp)
 8538dde:	e8 ad 0f 00 00       	call   8539d90 <_Z14GetRandomRangeii>
 8538de3:	83 c0 64             	add    $0x64,%eax
 8538de6:	89 d9                	mov    %ebx,%ecx
 8538de8:	0f af c8             	imul   %eax,%ecx
 8538deb:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8538df0:	89 c8                	mov    %ecx,%eax
 8538df2:	f7 ea                	imul   %edx
 8538df4:	c1 fa 05             	sar    $0x5,%edx
 8538df7:	89 c8                	mov    %ecx,%eax
 8538df9:	c1 f8 1f             	sar    $0x1f,%eax
 8538dfc:	89 d1                	mov    %edx,%ecx
 8538dfe:	29 c1                	sub    %eax,%ecx
 8538e00:	89 c8                	mov    %ecx,%eax
 8538e02:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8538e05:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8538e08:	89 04 24             	mov    %eax,(%esp)
 8538e0b:	e8 44 2a b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8538e10:	c6 45 a0 02          	movb   $0x2,-0x60(%ebp)
 8538e14:	c7 45 a1 00 00 00 00 	movl   $0x0,-0x5f(%ebp)
 8538e1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8538e1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538e22:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8538e25:	89 04 24             	mov    %eax,(%esp)
 8538e28:	e8 57 2a b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8538e2d:	8b 45 10             	mov    0x10(%ebp),%eax
 8538e30:	8d 55 9f             	lea    -0x61(%ebp),%edx
 8538e33:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538e37:	89 04 24             	mov    %eax,(%esp)
 8538e3a:	e8 23 e4 cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8538e3f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8538e43:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8538e46:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8538e4a:	0f b6 c0             	movzbl %al,%eax
 8538e4d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8538e50:	0f 9f c0             	setg   %al
 8538e53:	84 c0                	test   %al,%al
 8538e55:	0f 85 35 ff ff ff    	jne    8538d90 <_ZN8WongWork12CClearReward20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x10c>
 8538e5b:	81 c4 84 00 00 00    	add    $0x84,%esp
 8538e61:	5b                   	pop    %ebx
 8538e62:	5d                   	pop    %ebp
 8538e63:	c3                   	ret

```

```c
// WongWork::CClearReward::generateSpecificItem @ 0x8538c84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CClearReward::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CClearReward::generateSpecificItem
          (CClearReward *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longdouble lVar5;
  Inven_Item local_65;
  undefined1 local_64;
  undefined4 local_63;
  stGenerateRefData_t *local_28;
  float local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_28 = param_1 + 0x34;
  fVar1 = *(float *)(this + ((byte)param_1[0x36] + 0x37) * 4 + 0xc);
  fVar2 = *(float *)(this + ((byte)param_1[0x35] + 0x34) * 4 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  iVar4 = G_CDataManager();
  lVar5 = (longdouble)
          ServerParameterScript::GetExpBonusWeight((ServerParameterScript *)(iVar4 + 0x68),uVar3);
  local_24 = (float)(((longdouble)1 + lVar5) * (longdouble)(fVar2 * fVar1));
  local_20 = (int *)CGeneratorCommonData::getGoldGenTable
                              (*(CGeneratorCommonData **)(this + 4),(uchar)*local_28);
  local_1c = (*local_20 * 0xaf) / 1000;
  local_18 = (int)ROUND((float)((int)(((uint)*(ushort *)(local_28 + 8) +
                                      ((uint)*(ushort *)(local_28 + 0xe) * 2 +
                                      (uint)*(ushort *)(local_28 + 10)) * 2) * local_1c) / 2) *
                        local_24);
  for (local_14 = 0; local_14 < (int)(uint)(byte)local_28[2]; local_14 = local_14 + 1) {
    fVar1 = (((float)local_18 / _DAT_08c9a6d8) / (float)(byte)local_28[2]) * local_24;
    iVar4 = GetRandomRange(-local_20[1],local_20[1]);
    local_10 = ((int)ROUND(fVar1) * (iVar4 + 100)) / 100;
    Inven_Item::Inven_Item(&local_65);
    local_64 = 2;
    local_63 = 0;
    Inven_Item::set_add_info(&local_65,local_10);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,&local_65);
  }
  return;
}

```

---

## getGoldCardCommission

```asm
// === 085385b2 WongWork::CClearReward::getGoldCardCommission  [0x085385b2-0x85385c7] ===
 85385b2:	55                   	push   %ebp
 85385b3:	89 e5                	mov    %esp,%ebp
 85385b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85385b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85385bb:	81 c2 04 8e 00 00    	add    $0x8e04,%edx
 85385c1:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 85385c5:	5d                   	pop    %ebp
 85385c6:	c3                   	ret
 85385c7:	90                   	nop

```

```c
// WongWork::CClearReward::getGoldCardCommission @ 0x85385b2

/* WongWork::CClearReward::getGoldCardCommission(int) */

undefined4 __thiscall WongWork::CClearReward::getGoldCardCommission(CClearReward *this,int param_1)

{
  return *(undefined4 *)(this + (param_1 + 0x8e04) * 4 + 4);
}

```

---

## loadScript

```asm
// === 085392c0 WongWork::CClearReward::loadScript  [0x085392c0-0x8539c3d] ===
 85392c0:	55                   	push   %ebp
 85392c1:	89 e5                	mov    %esp,%ebp
 85392c3:	56                   	push   %esi
 85392c4:	53                   	push   %ebx
 85392c5:	81 ec 90 00 00 00    	sub    $0x90,%esp
 85392cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85392ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85392d2:	c7 04 24 00 95 c9 08 	movl   $0x8c99500,(%esp)
 85392d9:	e8 4b 2a 38 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 85392de:	83 f0 01             	xor    $0x1,%eax
 85392e1:	84 c0                	test   %al,%al
 85392e3:	74 0a                	je     85392ef <_ZN8WongWork12CClearReward10loadScriptEPKc+0x2f>
 85392e5:	bb 43 09 00 00       	mov    $0x943,%ebx
 85392ea:	e9 42 09 00 00       	jmp    8539c31 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x971>
 85392ef:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85392f2:	89 04 24             	mov    %eax,(%esp)
 85392f5:	e8 d6 d2 1c 00       	call   87065d0 <_ZNSsC1Ev>
 85392fa:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8539301:	c6 45 ab 00          	movb   $0x0,-0x55(%ebp)
 8539305:	eb 07                	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 8539307:	90                   	nop
 8539308:	eb 04                	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 853930a:	90                   	nop
 853930b:	eb 01                	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 853930d:	90                   	nop
 853930e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8539315:	00 
 8539316:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539319:	89 04 24             	mov    %eax,(%esp)
 853931c:	e8 3e 35 38 00       	call   88bc85f <_Z8ScanTypeRSsb>
 8539321:	83 f0 01             	xor    $0x1,%eax
 8539324:	84 c0                	test   %al,%al
 8539326:	0f 85 b2 08 00 00    	jne    8539bde <_ZN8WongWork12CClearReward10loadScriptEPKc+0x91e>
 853932c:	c7 44 24 04 c5 95 c9 	movl   $0x8c995c5,0x4(%esp)
 8539333:	08 
 8539334:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539337:	89 04 24             	mov    %eax,(%esp)
 853933a:	e8 62 76 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853933f:	84 c0                	test   %al,%al
 8539341:	0f 84 8e 00 00 00    	je     85393d5 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x115>
 8539347:	8d 45 ab             	lea    -0x55(%ebp),%eax
 853934a:	89 04 24             	mov    %eax,(%esp)
 853934d:	e8 29 30 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539352:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8539355:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539359:	83 f0 01             	xor    $0x1,%eax
 853935c:	84 c0                	test   %al,%al
 853935e:	74 0a                	je     853936a <_ZN8WongWork12CClearReward10loadScriptEPKc+0xaa>
 8539360:	bb 51 09 00 00       	mov    $0x951,%ebx
 8539365:	e9 bc 08 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 853936a:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8539371:	eb 52                	jmp    85393c5 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x105>
 8539373:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 853937a:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8539381:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8539388:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 853938b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 853938e:	89 d0                	mov    %edx,%eax
 8539390:	01 c0                	add    %eax,%eax
 8539392:	01 d0                	add    %edx,%eax
 8539394:	c1 e0 02             	shl    $0x2,%eax
 8539397:	83 c0 10             	add    $0x10,%eax
 853939a:	03 45 08             	add    0x8(%ebp),%eax
 853939d:	8d 50 08             	lea    0x8(%eax),%edx
 85393a0:	8b 45 b0             	mov    -0x50(%ebp),%eax
 85393a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85393a7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85393aa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85393ae:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85393b1:	89 44 24 10          	mov    %eax,0x10(%esp)
 85393b5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85393b9:	89 14 24             	mov    %edx,(%esp)
 85393bc:	e8 a5 2a 00 00       	call   853be66 <_ZNSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EE6resizeEjS2_>
 85393c1:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 85393c5:	83 7d c4 05          	cmpl   $0x5,-0x3c(%ebp)
 85393c9:	0f 9e c0             	setle  %al
 85393cc:	84 c0                	test   %al,%al
 85393ce:	75 a3                	jne    8539373 <_ZN8WongWork12CClearReward10loadScriptEPKc+0xb3>
 85393d0:	e9 39 ff ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 85393d5:	c7 44 24 04 6f 97 c9 	movl   $0x8c9976f,0x4(%esp)
 85393dc:	08 
 85393dd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85393e0:	89 04 24             	mov    %eax,(%esp)
 85393e3:	e8 b9 75 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85393e8:	84 c0                	test   %al,%al
 85393ea:	0f 84 0c 02 00 00    	je     85395fc <_ZN8WongWork12CClearReward10loadScriptEPKc+0x33c>
 85393f0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85393f3:	89 04 24             	mov    %eax,(%esp)
 85393f6:	e8 d5 d1 1c 00       	call   87065d0 <_ZNSsC1Ev>
 85393fb:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85393fe:	89 04 24             	mov    %eax,(%esp)
 8539401:	e8 9c 33 38 00       	call   88bc7a2 <_Z7ScanStrPSs>
 8539406:	83 f0 01             	xor    $0x1,%eax
 8539409:	84 c0                	test   %al,%al
 853940b:	74 0a                	je     8539417 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x157>
 853940d:	be 00 00 00 00       	mov    $0x0,%esi
 8539412:	e9 c4 01 00 00       	jmp    85395db <_ZN8WongWork12CClearReward10loadScriptEPKc+0x31b>
 8539417:	c7 44 24 04 2e 98 c9 	movl   $0x8c9982e,0x4(%esp)
 853941e:	08 
 853941f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8539422:	89 04 24             	mov    %eax,(%esp)
 8539425:	e8 77 75 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853942a:	84 c0                	test   %al,%al
 853942c:	74 0c                	je     853943a <_ZN8WongWork12CClearReward10loadScriptEPKc+0x17a>
 853942e:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8539435:	e9 b2 00 00 00       	jmp    85394ec <_ZN8WongWork12CClearReward10loadScriptEPKc+0x22c>
 853943a:	c7 44 24 04 36 98 c9 	movl   $0x8c99836,0x4(%esp)
 8539441:	08 
 8539442:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8539445:	89 04 24             	mov    %eax,(%esp)
 8539448:	e8 54 75 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853944d:	84 c0                	test   %al,%al
 853944f:	74 0c                	je     853945d <_ZN8WongWork12CClearReward10loadScriptEPKc+0x19d>
 8539451:	c7 45 c8 01 00 00 00 	movl   $0x1,-0x38(%ebp)
 8539458:	e9 8f 00 00 00       	jmp    85394ec <_ZN8WongWork12CClearReward10loadScriptEPKc+0x22c>
 853945d:	c7 44 24 04 3c 98 c9 	movl   $0x8c9983c,0x4(%esp)
 8539464:	08 
 8539465:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8539468:	89 04 24             	mov    %eax,(%esp)
 853946b:	e8 31 75 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8539470:	84 c0                	test   %al,%al
 8539472:	74 09                	je     853947d <_ZN8WongWork12CClearReward10loadScriptEPKc+0x1bd>
 8539474:	c7 45 c8 02 00 00 00 	movl   $0x2,-0x38(%ebp)
 853947b:	eb 6f                	jmp    85394ec <_ZN8WongWork12CClearReward10loadScriptEPKc+0x22c>
 853947d:	c7 44 24 04 43 98 c9 	movl   $0x8c99843,0x4(%esp)
 8539484:	08 
 8539485:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8539488:	89 04 24             	mov    %eax,(%esp)
 853948b:	e8 11 75 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8539490:	84 c0                	test   %al,%al
 8539492:	74 09                	je     853949d <_ZN8WongWork12CClearReward10loadScriptEPKc+0x1dd>
 8539494:	c7 45 c8 03 00 00 00 	movl   $0x3,-0x38(%ebp)
 853949b:	eb 4f                	jmp    85394ec <_ZN8WongWork12CClearReward10loadScriptEPKc+0x22c>
 853949d:	c7 44 24 04 52 98 c9 	movl   $0x8c99852,0x4(%esp)
 85394a4:	08 
 85394a5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85394a8:	89 04 24             	mov    %eax,(%esp)
 85394ab:	e8 f1 74 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85394b0:	84 c0                	test   %al,%al
 85394b2:	74 09                	je     85394bd <_ZN8WongWork12CClearReward10loadScriptEPKc+0x1fd>
 85394b4:	c7 45 c8 04 00 00 00 	movl   $0x4,-0x38(%ebp)
 85394bb:	eb 2f                	jmp    85394ec <_ZN8WongWork12CClearReward10loadScriptEPKc+0x22c>
 85394bd:	c7 44 24 04 5f 98 c9 	movl   $0x8c9985f,0x4(%esp)
 85394c4:	08 
 85394c5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85394c8:	89 04 24             	mov    %eax,(%esp)
 85394cb:	e8 d1 74 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85394d0:	84 c0                	test   %al,%al
 85394d2:	74 09                	je     85394dd <_ZN8WongWork12CClearReward10loadScriptEPKc+0x21d>
 85394d4:	c7 45 c8 05 00 00 00 	movl   $0x5,-0x38(%ebp)
 85394db:	eb 0f                	jmp    85394ec <_ZN8WongWork12CClearReward10loadScriptEPKc+0x22c>
 85394dd:	bb 69 09 00 00       	mov    $0x969,%ebx
 85394e2:	be 01 00 00 00       	mov    $0x1,%esi
 85394e7:	e9 ef 00 00 00       	jmp    85395db <_ZN8WongWork12CClearReward10loadScriptEPKc+0x31b>
 85394ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85394ef:	8d 48 18             	lea    0x18(%eax),%ecx
 85394f2:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85394f5:	89 d0                	mov    %edx,%eax
 85394f7:	01 c0                	add    %eax,%eax
 85394f9:	01 d0                	add    %edx,%eax
 85394fb:	c1 e0 02             	shl    $0x2,%eax
 85394fe:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8539501:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8539504:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 853950b:	e9 93 00 00 00       	jmp    85395a3 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x2e3>
 8539510:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8539513:	89 44 24 04          	mov    %eax,0x4(%esp)
 8539517:	8b 45 cc             	mov    -0x34(%ebp),%eax
 853951a:	89 04 24             	mov    %eax,(%esp)
 853951d:	e8 36 28 00 00       	call   853bd58 <_ZNSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EEixEj>
 8539522:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8539525:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539528:	89 04 24             	mov    %eax,(%esp)
 853952b:	e8 4b 2e 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539530:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8539533:	89 02                	mov    %eax,(%edx)
 8539535:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539539:	83 f0 01             	xor    $0x1,%eax
 853953c:	84 c0                	test   %al,%al
 853953e:	74 0f                	je     853954f <_ZN8WongWork12CClearReward10loadScriptEPKc+0x28f>
 8539540:	bb 6f 09 00 00       	mov    $0x96f,%ebx
 8539545:	be 01 00 00 00       	mov    $0x1,%esi
 853954a:	e9 8c 00 00 00       	jmp    85395db <_ZN8WongWork12CClearReward10loadScriptEPKc+0x31b>
 853954f:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539552:	89 04 24             	mov    %eax,(%esp)
 8539555:	e8 21 2e 38 00       	call   88bc37b <_Z7ScanIntPb>
 853955a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 853955d:	89 42 04             	mov    %eax,0x4(%edx)
 8539560:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539564:	83 f0 01             	xor    $0x1,%eax
 8539567:	84 c0                	test   %al,%al
 8539569:	74 0c                	je     8539577 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x2b7>
 853956b:	bb 71 09 00 00       	mov    $0x971,%ebx
 8539570:	be 01 00 00 00       	mov    $0x1,%esi
 8539575:	eb 64                	jmp    85395db <_ZN8WongWork12CClearReward10loadScriptEPKc+0x31b>
 8539577:	8d 45 ab             	lea    -0x55(%ebp),%eax
 853957a:	89 04 24             	mov    %eax,(%esp)
 853957d:	e8 f9 2d 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539582:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8539585:	89 42 08             	mov    %eax,0x8(%edx)
 8539588:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 853958c:	83 f0 01             	xor    $0x1,%eax
 853958f:	84 c0                	test   %al,%al
 8539591:	74 0c                	je     853959f <_ZN8WongWork12CClearReward10loadScriptEPKc+0x2df>
 8539593:	bb 73 09 00 00       	mov    $0x973,%ebx
 8539598:	be 01 00 00 00       	mov    $0x1,%esi
 853959d:	eb 3c                	jmp    85395db <_ZN8WongWork12CClearReward10loadScriptEPKc+0x31b>
 853959f:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 85395a3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85395a6:	89 04 24             	mov    %eax,(%esp)
 85395a9:	e8 88 27 00 00       	call   853bd36 <_ZNKSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EE4sizeEv>
 85395ae:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 85395b1:	0f 97 c0             	seta   %al
 85395b4:	84 c0                	test   %al,%al
 85395b6:	0f 85 54 ff ff ff    	jne    8539510 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x250>
 85395bc:	be 02 00 00 00       	mov    $0x2,%esi
 85395c1:	eb 18                	jmp    85395db <_ZN8WongWork12CClearReward10loadScriptEPKc+0x31b>
 85395c3:	89 d3                	mov    %edx,%ebx
 85395c5:	89 c6                	mov    %eax,%esi
 85395c7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85395ca:	89 04 24             	mov    %eax,(%esp)
 85395cd:	e8 0e e6 1c 00       	call   8707be0 <_ZNSsD1Ev>
 85395d2:	89 f0                	mov    %esi,%eax
 85395d4:	89 da                	mov    %ebx,%edx
 85395d6:	e9 30 06 00 00       	jmp    8539c0b <_ZN8WongWork12CClearReward10loadScriptEPKc+0x94b>
 85395db:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85395de:	89 04 24             	mov    %eax,(%esp)
 85395e1:	e8 fa e5 1c 00       	call   8707be0 <_ZNSsD1Ev>
 85395e6:	85 f6                	test   %esi,%esi
 85395e8:	0f 84 19 fd ff ff    	je     8539307 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x47>
 85395ee:	83 fe 01             	cmp    $0x1,%esi
 85395f1:	0f 84 2f 06 00 00    	je     8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 85395f7:	e9 f4 fd ff ff       	jmp    85393f0 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x130>
 85395fc:	c7 44 24 04 6c 98 c9 	movl   $0x8c9986c,0x4(%esp)
 8539603:	08 
 8539604:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539607:	89 04 24             	mov    %eax,(%esp)
 853960a:	e8 92 73 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853960f:	84 c0                	test   %al,%al
 8539611:	74 56                	je     8539669 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x3a9>
 8539613:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539616:	89 04 24             	mov    %eax,(%esp)
 8539619:	e8 5d 2d 38 00       	call   88bc37b <_Z7ScanIntPb>
 853961e:	8b 55 08             	mov    0x8(%ebp),%edx
 8539621:	89 82 a8 00 00 00    	mov    %eax,0xa8(%edx)
 8539627:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 853962b:	83 f0 01             	xor    $0x1,%eax
 853962e:	84 c0                	test   %al,%al
 8539630:	74 0a                	je     853963c <_ZN8WongWork12CClearReward10loadScriptEPKc+0x37c>
 8539632:	bb 7a 09 00 00       	mov    $0x97a,%ebx
 8539637:	e9 ea 05 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 853963c:	8d 45 ab             	lea    -0x55(%ebp),%eax
 853963f:	89 04 24             	mov    %eax,(%esp)
 8539642:	e8 34 2d 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539647:	8b 55 08             	mov    0x8(%ebp),%edx
 853964a:	89 82 ac 00 00 00    	mov    %eax,0xac(%edx)
 8539650:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539654:	83 f0 01             	xor    $0x1,%eax
 8539657:	84 c0                	test   %al,%al
 8539659:	0f 84 ab fc ff ff    	je     853930a <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4a>
 853965f:	bb 7c 09 00 00       	mov    $0x97c,%ebx
 8539664:	e9 bd 05 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539669:	c7 44 24 04 7d 98 c9 	movl   $0x8c9987d,0x4(%esp)
 8539670:	08 
 8539671:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539674:	89 04 24             	mov    %eax,(%esp)
 8539677:	e8 25 73 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853967c:	84 c0                	test   %al,%al
 853967e:	74 49                	je     85396c9 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x409>
 8539680:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 8539687:	eb 30                	jmp    85396b9 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x3f9>
 8539689:	8b 75 d8             	mov    -0x28(%ebp),%esi
 853968c:	8d 45 ab             	lea    -0x55(%ebp),%eax
 853968f:	89 04 24             	mov    %eax,(%esp)
 8539692:	e8 e4 2c 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539697:	8b 55 08             	mov    0x8(%ebp),%edx
 853969a:	8d 4e 2c             	lea    0x2c(%esi),%ecx
 853969d:	89 04 8a             	mov    %eax,(%edx,%ecx,4)
 85396a0:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 85396a4:	83 f0 01             	xor    $0x1,%eax
 85396a7:	84 c0                	test   %al,%al
 85396a9:	74 0a                	je     85396b5 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x3f5>
 85396ab:	bb 84 09 00 00       	mov    $0x984,%ebx
 85396b0:	e9 71 05 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 85396b5:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85396b9:	83 7d d8 04          	cmpl   $0x4,-0x28(%ebp)
 85396bd:	0f 9e c0             	setle  %al
 85396c0:	84 c0                	test   %al,%al
 85396c2:	75 c5                	jne    8539689 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x3c9>
 85396c4:	e9 45 fc ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 85396c9:	c7 44 24 04 aa 95 c9 	movl   $0x8c995aa,0x4(%esp)
 85396d0:	08 
 85396d1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85396d4:	89 04 24             	mov    %eax,(%esp)
 85396d7:	e8 c5 72 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85396dc:	84 c0                	test   %al,%al
 85396de:	74 4a                	je     853972a <_ZN8WongWork12CClearReward10loadScriptEPKc+0x46a>
 85396e0:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85396e7:	eb 31                	jmp    853971a <_ZN8WongWork12CClearReward10loadScriptEPKc+0x45a>
 85396e9:	8b 75 dc             	mov    -0x24(%ebp),%esi
 85396ec:	8d 45 ab             	lea    -0x55(%ebp),%eax
 85396ef:	89 04 24             	mov    %eax,(%esp)
 85396f2:	e8 84 2c 38 00       	call   88bc37b <_Z7ScanIntPb>
 85396f7:	8b 55 08             	mov    0x8(%ebp),%edx
 85396fa:	8d 4e 3c             	lea    0x3c(%esi),%ecx
 85396fd:	89 44 8a 0c          	mov    %eax,0xc(%edx,%ecx,4)
 8539701:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539705:	83 f0 01             	xor    $0x1,%eax
 8539708:	84 c0                	test   %al,%al
 853970a:	74 0a                	je     8539716 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x456>
 853970c:	bb 8d 09 00 00       	mov    $0x98d,%ebx
 8539711:	e9 10 05 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539716:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 853971a:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 853971e:	0f 9e c0             	setle  %al
 8539721:	84 c0                	test   %al,%al
 8539723:	75 c4                	jne    85396e9 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x429>
 8539725:	e9 e4 fb ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 853972a:	c7 44 24 04 9c 97 c9 	movl   $0x8c9979c,0x4(%esp)
 8539731:	08 
 8539732:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539735:	89 04 24             	mov    %eax,(%esp)
 8539738:	e8 64 72 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853973d:	84 c0                	test   %al,%al
 853973f:	74 4a                	je     853978b <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4cb>
 8539741:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8539748:	eb 31                	jmp    853977b <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4bb>
 853974a:	8b 75 e0             	mov    -0x20(%ebp),%esi
 853974d:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539750:	89 04 24             	mov    %eax,(%esp)
 8539753:	e8 23 2c 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539758:	8b 55 08             	mov    0x8(%ebp),%edx
 853975b:	8d 4e 30             	lea    0x30(%esi),%ecx
 853975e:	89 44 8a 04          	mov    %eax,0x4(%edx,%ecx,4)
 8539762:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539766:	83 f0 01             	xor    $0x1,%eax
 8539769:	84 c0                	test   %al,%al
 853976b:	74 0a                	je     8539777 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4b7>
 853976d:	bb 9a 09 00 00       	mov    $0x99a,%ebx
 8539772:	e9 af 04 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539777:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 853977b:	83 7d e0 04          	cmpl   $0x4,-0x20(%ebp)
 853977f:	0f 9e c0             	setle  %al
 8539782:	84 c0                	test   %al,%al
 8539784:	75 c4                	jne    853974a <_ZN8WongWork12CClearReward10loadScriptEPKc+0x48a>
 8539786:	e9 83 fb ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 853978b:	c7 44 24 04 7b 97 c9 	movl   $0x8c9977b,0x4(%esp)
 8539792:	08 
 8539793:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539796:	89 04 24             	mov    %eax,(%esp)
 8539799:	e8 03 72 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853979e:	84 c0                	test   %al,%al
 85397a0:	74 4a                	je     85397ec <_ZN8WongWork12CClearReward10loadScriptEPKc+0x52c>
 85397a2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85397a9:	eb 31                	jmp    85397dc <_ZN8WongWork12CClearReward10loadScriptEPKc+0x51c>
 85397ab:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 85397ae:	8d 45 ab             	lea    -0x55(%ebp),%eax
 85397b1:	89 04 24             	mov    %eax,(%esp)
 85397b4:	e8 2c 2d 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 85397b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85397bc:	8d 56 38             	lea    0x38(%esi),%edx
 85397bf:	d9 5c 90 0c          	fstps  0xc(%eax,%edx,4)
 85397c3:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 85397c7:	83 f0 01             	xor    $0x1,%eax
 85397ca:	84 c0                	test   %al,%al
 85397cc:	74 0a                	je     85397d8 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x518>
 85397ce:	bb a3 09 00 00       	mov    $0x9a3,%ebx
 85397d3:	e9 4e 04 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 85397d8:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85397dc:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 85397e0:	0f 9e c0             	setle  %al
 85397e3:	84 c0                	test   %al,%al
 85397e5:	75 c4                	jne    85397ab <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4eb>
 85397e7:	e9 22 fb ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 85397ec:	c7 44 24 04 94 98 c9 	movl   $0x8c99894,0x4(%esp)
 85397f3:	08 
 85397f4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85397f7:	89 04 24             	mov    %eax,(%esp)
 85397fa:	e8 a2 71 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85397ff:	84 c0                	test   %al,%al
 8539801:	74 4a                	je     853984d <_ZN8WongWork12CClearReward10loadScriptEPKc+0x58d>
 8539803:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 853980a:	eb 31                	jmp    853983d <_ZN8WongWork12CClearReward10loadScriptEPKc+0x57d>
 853980c:	8b 75 e8             	mov    -0x18(%ebp),%esi
 853980f:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539812:	89 04 24             	mov    %eax,(%esp)
 8539815:	e8 cb 2c 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 853981a:	8b 45 08             	mov    0x8(%ebp),%eax
 853981d:	8d 56 34             	lea    0x34(%esi),%edx
 8539820:	d9 5c 90 08          	fstps  0x8(%eax,%edx,4)
 8539824:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539828:	83 f0 01             	xor    $0x1,%eax
 853982b:	84 c0                	test   %al,%al
 853982d:	74 0a                	je     8539839 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x579>
 853982f:	bb b0 09 00 00       	mov    $0x9b0,%ebx
 8539834:	e9 ed 03 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539839:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 853983d:	83 7d e8 04          	cmpl   $0x4,-0x18(%ebp)
 8539841:	0f 9e c0             	setle  %al
 8539844:	84 c0                	test   %al,%al
 8539846:	75 c4                	jne    853980c <_ZN8WongWork12CClearReward10loadScriptEPKc+0x54c>
 8539848:	e9 c1 fa ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 853984d:	c7 44 24 04 f7 95 c9 	movl   $0x8c995f7,0x4(%esp)
 8539854:	08 
 8539855:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539858:	89 04 24             	mov    %eax,(%esp)
 853985b:	e8 41 71 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8539860:	84 c0                	test   %al,%al
 8539862:	0f 84 c2 00 00 00    	je     853992a <_ZN8WongWork12CClearReward10loadScriptEPKc+0x66a>
 8539868:	8b 45 08             	mov    0x8(%ebp),%eax
 853986b:	c6 80 14 01 00 00 00 	movb   $0x0,0x114(%eax)
 8539872:	8b 45 08             	mov    0x8(%ebp),%eax
 8539875:	c6 80 15 01 00 00 00 	movb   $0x0,0x115(%eax)
 853987c:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 8539883:	e9 8b 00 00 00       	jmp    8539913 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x653>
 8539888:	8d 45 ab             	lea    -0x55(%ebp),%eax
 853988b:	89 04 24             	mov    %eax,(%esp)
 853988e:	e8 e8 2a 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539893:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8539896:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 853989a:	83 f0 01             	xor    $0x1,%eax
 853989d:	84 c0                	test   %al,%al
 853989f:	74 0a                	je     85398ab <_ZN8WongWork12CClearReward10loadScriptEPKc+0x5eb>
 85398a1:	bb bc 09 00 00       	mov    $0x9bc,%ebx
 85398a6:	e9 7b 03 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 85398ab:	8b 75 bc             	mov    -0x44(%ebp),%esi
 85398ae:	8d 45 ab             	lea    -0x55(%ebp),%eax
 85398b1:	89 04 24             	mov    %eax,(%esp)
 85398b4:	e8 c2 2a 38 00       	call   88bc37b <_Z7ScanIntPb>
 85398b9:	89 c2                	mov    %eax,%edx
 85398bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85398be:	8d 8e 88 00 00 00    	lea    0x88(%esi),%ecx
 85398c4:	88 54 48 04          	mov    %dl,0x4(%eax,%ecx,2)
 85398c8:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 85398cc:	83 f0 01             	xor    $0x1,%eax
 85398cf:	84 c0                	test   %al,%al
 85398d1:	74 0a                	je     85398dd <_ZN8WongWork12CClearReward10loadScriptEPKc+0x61d>
 85398d3:	bb c0 09 00 00       	mov    $0x9c0,%ebx
 85398d8:	e9 49 03 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 85398dd:	8b 75 bc             	mov    -0x44(%ebp),%esi
 85398e0:	8d 45 ab             	lea    -0x55(%ebp),%eax
 85398e3:	89 04 24             	mov    %eax,(%esp)
 85398e6:	e8 90 2a 38 00       	call   88bc37b <_Z7ScanIntPb>
 85398eb:	89 c2                	mov    %eax,%edx
 85398ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85398f0:	8d 8e 88 00 00 00    	lea    0x88(%esi),%ecx
 85398f6:	88 54 48 05          	mov    %dl,0x5(%eax,%ecx,2)
 85398fa:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 85398fe:	83 f0 01             	xor    $0x1,%eax
 8539901:	84 c0                	test   %al,%al
 8539903:	74 0a                	je     853990f <_ZN8WongWork12CClearReward10loadScriptEPKc+0x64f>
 8539905:	bb c4 09 00 00       	mov    $0x9c4,%ebx
 853990a:	e9 17 03 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 853990f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8539913:	81 7d ec c8 00 00 00 	cmpl   $0xc8,-0x14(%ebp)
 853991a:	0f 9e c0             	setle  %al
 853991d:	84 c0                	test   %al,%al
 853991f:	0f 85 63 ff ff ff    	jne    8539888 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x5c8>
 8539925:	e9 e4 f9 ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 853992a:	c7 44 24 04 bd 98 c9 	movl   $0x8c998bd,0x4(%esp)
 8539931:	08 
 8539932:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539935:	89 04 24             	mov    %eax,(%esp)
 8539938:	e8 64 70 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853993d:	84 c0                	test   %al,%al
 853993f:	74 52                	je     8539993 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x6d3>
 8539941:	eb 01                	jmp    8539944 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x684>
 8539943:	90                   	nop
 8539944:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539947:	89 04 24             	mov    %eax,(%esp)
 853994a:	e8 2c 2a 38 00       	call   88bc37b <_Z7ScanIntPb>
 853994f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8539952:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539956:	83 f0 01             	xor    $0x1,%eax
 8539959:	84 c0                	test   %al,%al
 853995b:	74 06                	je     8539963 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x6a3>
 853995d:	90                   	nop
 853995e:	e9 ab f9 ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 8539963:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8539966:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539969:	89 04 24             	mov    %eax,(%esp)
 853996c:	e8 0a 2a 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539971:	8b 55 08             	mov    0x8(%ebp),%edx
 8539974:	8d 8e 04 8e 00 00    	lea    0x8e04(%esi),%ecx
 853997a:	89 44 8a 04          	mov    %eax,0x4(%edx,%ecx,4)
 853997e:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539982:	83 f0 01             	xor    $0x1,%eax
 8539985:	84 c0                	test   %al,%al
 8539987:	74 ba                	je     8539943 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x683>
 8539989:	bb d1 09 00 00       	mov    $0x9d1,%ebx
 853998e:	e9 93 02 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539993:	c7 44 24 04 d4 98 c9 	movl   $0x8c998d4,0x4(%esp)
 853999a:	08 
 853999b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 853999e:	89 04 24             	mov    %eax,(%esp)
 85399a1:	e8 fb 6f b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85399a6:	84 c0                	test   %al,%al
 85399a8:	74 2d                	je     85399d7 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x717>
 85399aa:	8d 45 ab             	lea    -0x55(%ebp),%eax
 85399ad:	89 04 24             	mov    %eax,(%esp)
 85399b0:	e8 30 2b 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 85399b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85399b8:	d9 98 38 3b 02 00    	fstps  0x23b38(%eax)
 85399be:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 85399c2:	83 f0 01             	xor    $0x1,%eax
 85399c5:	84 c0                	test   %al,%al
 85399c7:	0f 84 40 f9 ff ff    	je     853930d <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4d>
 85399cd:	bb d8 09 00 00       	mov    $0x9d8,%ebx
 85399d2:	e9 4f 02 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 85399d7:	c7 44 24 04 ec 98 c9 	movl   $0x8c998ec,0x4(%esp)
 85399de:	08 
 85399df:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85399e2:	89 04 24             	mov    %eax,(%esp)
 85399e5:	e8 b7 6f b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85399ea:	84 c0                	test   %al,%al
 85399ec:	0f 84 a6 00 00 00    	je     8539a98 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x7d8>
 85399f2:	8b 45 08             	mov    0x8(%ebp),%eax
 85399f5:	c7 80 74 3b 02 00 00 	movl   $0x0,0x23b74(%eax)
 85399fc:	00 00 00 
 85399ff:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539a02:	89 04 24             	mov    %eax,(%esp)
 8539a05:	e8 71 29 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539a0a:	89 45 98             	mov    %eax,-0x68(%ebp)
 8539a0d:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539a11:	83 f0 01             	xor    $0x1,%eax
 8539a14:	84 c0                	test   %al,%al
 8539a16:	74 06                	je     8539a1e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x75e>
 8539a18:	90                   	nop
 8539a19:	e9 f0 f8 ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 8539a1e:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539a21:	89 04 24             	mov    %eax,(%esp)
 8539a24:	e8 52 29 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539a29:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8539a2c:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539a30:	83 f0 01             	xor    $0x1,%eax
 8539a33:	84 c0                	test   %al,%al
 8539a35:	74 0a                	je     8539a41 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x781>
 8539a37:	bb e6 09 00 00       	mov    $0x9e6,%ebx
 8539a3c:	e9 e5 01 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539a41:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539a44:	89 04 24             	mov    %eax,(%esp)
 8539a47:	e8 2f 29 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539a4c:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8539a4f:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539a53:	83 f0 01             	xor    $0x1,%eax
 8539a56:	84 c0                	test   %al,%al
 8539a58:	74 0a                	je     8539a64 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x7a4>
 8539a5a:	bb e9 09 00 00       	mov    $0x9e9,%ebx
 8539a5f:	e9 c2 01 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539a64:	8b 45 08             	mov    0x8(%ebp),%eax
 8539a67:	8d 90 78 3b 02 00    	lea    0x23b78(%eax),%edx
 8539a6d:	8d 45 98             	lea    -0x68(%ebp),%eax
 8539a70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8539a74:	89 14 24             	mov    %edx,(%esp)
 8539a77:	e8 74 24 00 00       	call   853bef0 <_ZNSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE9push_backERKS2_>
 8539a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8539a7f:	8b 90 74 3b 02 00    	mov    0x23b74(%eax),%edx
 8539a85:	8b 45 98             	mov    -0x68(%ebp),%eax
 8539a88:	01 c2                	add    %eax,%edx
 8539a8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8539a8d:	89 90 74 3b 02 00    	mov    %edx,0x23b74(%eax)
 8539a93:	e9 67 ff ff ff       	jmp    85399ff <_ZN8WongWork12CClearReward10loadScriptEPKc+0x73f>
 8539a98:	c7 44 24 04 08 99 c9 	movl   $0x8c99908,0x4(%esp)
 8539a9f:	08 
 8539aa0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539aa3:	89 04 24             	mov    %eax,(%esp)
 8539aa6:	e8 f6 6e b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8539aab:	84 c0                	test   %al,%al
 8539aad:	74 67                	je     8539b16 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x856>
 8539aaf:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539ab2:	89 04 24             	mov    %eax,(%esp)
 8539ab5:	e8 c1 28 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539aba:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8539abd:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539ac1:	83 f0 01             	xor    $0x1,%eax
 8539ac4:	84 c0                	test   %al,%al
 8539ac6:	74 06                	je     8539ace <_ZN8WongWork12CClearReward10loadScriptEPKc+0x80e>
 8539ac8:	90                   	nop
 8539ac9:	e9 40 f8 ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 8539ace:	83 7d f0 09          	cmpl   $0x9,-0x10(%ebp)
 8539ad2:	76 0a                	jbe    8539ade <_ZN8WongWork12CClearReward10loadScriptEPKc+0x81e>
 8539ad4:	bb f6 09 00 00       	mov    $0x9f6,%ebx
 8539ad9:	e9 48 01 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539ade:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539ae1:	89 04 24             	mov    %eax,(%esp)
 8539ae4:	e8 92 28 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539ae9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8539aec:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539af0:	83 f0 01             	xor    $0x1,%eax
 8539af3:	84 c0                	test   %al,%al
 8539af5:	74 0a                	je     8539b01 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x841>
 8539af7:	bb f9 09 00 00       	mov    $0x9f9,%ebx
 8539afc:	e9 25 01 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539b01:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8539b04:	8b 45 08             	mov    0x8(%ebp),%eax
 8539b07:	8d 8a d0 8e 00 00    	lea    0x8ed0(%edx),%ecx
 8539b0d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8539b10:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 8539b14:	eb 99                	jmp    8539aaf <_ZN8WongWork12CClearReward10loadScriptEPKc+0x7ef>
 8539b16:	c7 44 24 04 2d 99 c9 	movl   $0x8c9992d,0x4(%esp)
 8539b1d:	08 
 8539b1e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539b21:	89 04 24             	mov    %eax,(%esp)
 8539b24:	e8 78 6e b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8539b29:	84 c0                	test   %al,%al
 8539b2b:	0f 84 a6 00 00 00    	je     8539bd7 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x917>
 8539b31:	8b 45 08             	mov    0x8(%ebp),%eax
 8539b34:	c7 80 3c 3b 02 00 00 	movl   $0x0,0x23b3c(%eax)
 8539b3b:	00 00 00 
 8539b3e:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539b41:	89 04 24             	mov    %eax,(%esp)
 8539b44:	e8 32 28 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539b49:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8539b4c:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539b50:	83 f0 01             	xor    $0x1,%eax
 8539b53:	84 c0                	test   %al,%al
 8539b55:	74 06                	je     8539b5d <_ZN8WongWork12CClearReward10loadScriptEPKc+0x89d>
 8539b57:	90                   	nop
 8539b58:	e9 b1 f7 ff ff       	jmp    853930e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x4e>
 8539b5d:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539b60:	89 04 24             	mov    %eax,(%esp)
 8539b63:	e8 13 28 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539b68:	89 45 90             	mov    %eax,-0x70(%ebp)
 8539b6b:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539b6f:	83 f0 01             	xor    $0x1,%eax
 8539b72:	84 c0                	test   %al,%al
 8539b74:	74 0a                	je     8539b80 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x8c0>
 8539b76:	bb 08 0a 00 00       	mov    $0xa08,%ebx
 8539b7b:	e9 a6 00 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539b80:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539b83:	89 04 24             	mov    %eax,(%esp)
 8539b86:	e8 f0 27 38 00       	call   88bc37b <_Z7ScanIntPb>
 8539b8b:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8539b8e:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8539b92:	83 f0 01             	xor    $0x1,%eax
 8539b95:	84 c0                	test   %al,%al
 8539b97:	74 0a                	je     8539ba3 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x8e3>
 8539b99:	bb 0b 0a 00 00       	mov    $0xa0b,%ebx
 8539b9e:	e9 83 00 00 00       	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539ba3:	8b 45 08             	mov    0x8(%ebp),%eax
 8539ba6:	8d 90 40 3b 02 00    	lea    0x23b40(%eax),%edx
 8539bac:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8539baf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8539bb3:	89 14 24             	mov    %edx,(%esp)
 8539bb6:	e8 35 23 00 00       	call   853bef0 <_ZNSt6vectorIN8WongWork12CClearReward25stGoldCardBlankItemInfo_tESaIS2_EE9push_backERKS2_>
 8539bbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8539bbe:	8b 90 3c 3b 02 00    	mov    0x23b3c(%eax),%edx
 8539bc4:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8539bc7:	01 c2                	add    %eax,%edx
 8539bc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8539bcc:	89 90 3c 3b 02 00    	mov    %edx,0x23b3c(%eax)
 8539bd2:	e9 67 ff ff ff       	jmp    8539b3e <_ZN8WongWork12CClearReward10loadScriptEPKc+0x87e>
 8539bd7:	bb 41 0a 00 00       	mov    $0xa41,%ebx
 8539bdc:	eb 48                	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539bde:	90                   	nop
 8539bdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8539be2:	8d 90 14 01 00 00    	lea    0x114(%eax),%edx
 8539be8:	8b 45 08             	mov    0x8(%ebp),%eax
 8539beb:	05 a8 02 00 00       	add    $0x2a8,%eax
 8539bf0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8539bf7:	00 
 8539bf8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8539bfc:	89 04 24             	mov    %eax,(%esp)
 8539bff:	e8 68 aa ff ff       	call   853466c <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb>
 8539c04:	bb 00 00 00 00       	mov    $0x0,%ebx
 8539c09:	eb 1b                	jmp    8539c26 <_ZN8WongWork12CClearReward10loadScriptEPKc+0x966>
 8539c0b:	89 d3                	mov    %edx,%ebx
 8539c0d:	89 c6                	mov    %eax,%esi
 8539c0f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539c12:	89 04 24             	mov    %eax,(%esp)
 8539c15:	e8 c6 df 1c 00       	call   8707be0 <_ZNSsD1Ev>
 8539c1a:	89 f0                	mov    %esi,%eax
 8539c1c:	89 da                	mov    %ebx,%edx
 8539c1e:	89 04 24             	mov    %eax,(%esp)
 8539c21:	e8 2a 9b 5a 00       	call   8ae3750 <_Unwind_Resume>
 8539c26:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8539c29:	89 04 24             	mov    %eax,(%esp)
 8539c2c:	e8 af df 1c 00       	call   8707be0 <_ZNSsD1Ev>
 8539c31:	89 d8                	mov    %ebx,%eax
 8539c33:	81 c4 90 00 00 00    	add    $0x90,%esp
 8539c39:	5b                   	pop    %ebx
 8539c3a:	5e                   	pop    %esi
 8539c3b:	5d                   	pop    %ebp
 8539c3c:	c3                   	ret
 8539c3d:	90                   	nop

```

```c
// WongWork::CClearReward::loadScript @ 0x85392c0

/* WongWork::CClearReward::loadScript(char const*) */

undefined4 __thiscall WongWork::CClearReward::loadScript(CClearReward *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CClearReward CVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  int iVar7;
  longdouble lVar8;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  string local_60;
  bool local_59;
  string local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
  *local_38;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_58);
    local_48 = 0;
    local_59 = false;
LAB_0853930e:
    do {
                    /* try { // try from 0853931c to 085393fa has its CatchHandler @ 08539c0b */
      cVar2 = ScanType((string *)&local_58,true);
      if (cVar2 != '\x01') {
        CItemGenRateTable::generateTable
                  ((CItemGenRateTable *)(this + 0x2a8),(stGenItemRange_t *)(this + 0x114),false);
        unaff_EBX = 0;
        goto LAB_08539c26;
      }
      bVar3 = std::operator==(&local_58,"[drop prob count]");
      if (bVar3) {
        local_44 = ScanInt(&local_59);
        if (local_59 != true) {
          unaff_EBX = 0x951;
          goto LAB_08539c26;
        }
        for (local_40 = 0; local_40 < 6; local_40 = local_40 + 1) {
          local_54 = 0;
          local_50 = 0;
          local_4c = 0;
          std::
          vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
          ::resize(this + local_40 * 0xc + 0x18,local_44,0,0,0);
        }
        goto LAB_0853930e;
      }
      bVar3 = std::operator==(&local_58,"[drop prob]");
      if (bVar3) {
        do {
          std::string::string((string *)&local_60);
                    /* try { // try from 08539401 to 08539581 has its CatchHandler @ 085395c3 */
          cVar2 = ScanStr((string *)&local_60);
          if (cVar2 == '\x01') {
            bVar3 = std::operator==(&local_60,"default");
            if (bVar3) {
              local_3c = 0;
            }
            else {
              bVar3 = std::operator==(&local_60,"event");
              if (bVar3) {
                local_3c = 1;
              }
              else {
                bVar3 = std::operator==(&local_60,"event2");
                if (bVar3) {
                  local_3c = 2;
                }
                else {
                  bVar3 = std::operator==(&local_60,"pcroom default");
                  if (bVar3) {
                    local_3c = 3;
                  }
                  else {
                    bVar3 = std::operator==(&local_60,"pcroom event");
                    if (bVar3) {
                      local_3c = 4;
                    }
                    else {
                      bVar3 = std::operator==(&local_60,"pcroom bonus");
                      if (!bVar3) {
                        unaff_EBX = 0x969;
                        iVar7 = 1;
                        goto LAB_085395db;
                      }
                      local_3c = 5;
                    }
                  }
                }
              }
            }
            local_38 = (vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                        *)(this + local_3c * 0xc + 0x18);
            local_34 = 0;
            while (uVar6 = std::
                           vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                           ::size(local_38), local_34 < uVar6) {
              local_30 = (undefined4 *)
                         std::
                         vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                         ::operator[](local_38,local_34);
              uVar5 = ScanInt(&local_59);
              *local_30 = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x96f;
                iVar7 = 1;
                goto LAB_085395db;
              }
              uVar5 = ScanInt(&local_59);
              local_30[1] = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x971;
                iVar7 = 1;
                goto LAB_085395db;
              }
              uVar5 = ScanInt(&local_59);
              local_30[2] = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x973;
                iVar7 = 1;
                goto LAB_085395db;
              }
              local_34 = local_34 + 1;
            }
            iVar7 = 2;
          }
          else {
            iVar7 = 0;
          }
LAB_085395db:
                    /* try { // try from 085395e1 to 08539c03 has its CatchHandler @ 08539c0b */
          std::string::~string((string *)&local_60);
          if (iVar7 == 0) goto LAB_0853930e;
          if (iVar7 == 1) goto LAB_08539c26;
        } while( true );
      }
      bVar3 = std::operator==(&local_58,"[drop kind prob]");
      if (!bVar3) {
        bVar3 = std::operator==(&local_58,"[drop item type prob]");
        if (bVar3) {
          for (local_2c = 1; iVar7 = local_2c, local_2c < 5; local_2c = local_2c + 1) {
            uVar5 = ScanInt(&local_59);
            *(undefined4 *)(this + (iVar7 + 0x2c) * 4) = uVar5;
            if (local_59 != true) {
              unaff_EBX = 0x984;
              goto LAB_08539c26;
            }
          }
        }
        else {
          bVar3 = std::operator==(&local_58,"[basis of rarity dicision]");
          if (bVar3) {
            for (local_28 = 0; iVar7 = local_28, local_28 < 6; local_28 = local_28 + 1) {
              uVar5 = ScanInt(&local_59);
              *(undefined4 *)(this + (iVar7 + 0x3c) * 4 + 0xc) = uVar5;
              if (local_59 != true) {
                unaff_EBX = 0x98d;
                goto LAB_08539c26;
              }
            }
          }
          else {
            bVar3 = std::operator==(&local_58,"[dungeon difficulty drop bonusrate]");
            if (bVar3) {
              for (local_24 = 0; iVar7 = local_24, local_24 < 5; local_24 = local_24 + 1) {
                uVar5 = ScanInt(&local_59);
                *(undefined4 *)(this + (iVar7 + 0x30) * 4 + 4) = uVar5;
                if (local_59 != true) {
                  unaff_EBX = 0x99a;
                  goto LAB_08539c26;
                }
              }
            }
            else {
              bVar3 = std::operator==(&local_58,"[party member drop bonusrate]");
              if (bVar3) {
                for (local_20 = 0; iVar7 = local_20, local_20 < 4; local_20 = local_20 + 1) {
                  lVar8 = (longdouble)ScanFloat(&local_59);
                  *(float *)(this + (iVar7 + 0x38) * 4 + 0xc) = (float)lVar8;
                  if (local_59 != true) {
                    unaff_EBX = 0x9a3;
                    goto LAB_08539c26;
                  }
                }
              }
              else {
                bVar3 = std::operator==(&local_58,"[dungeon difficulty gold drop bonusrate]");
                if (bVar3) {
                  for (local_1c = 0; iVar7 = local_1c, local_1c < 5; local_1c = local_1c + 1) {
                    lVar8 = (longdouble)ScanFloat(&local_59);
                    *(float *)(this + (iVar7 + 0x34) * 4 + 8) = (float)lVar8;
                    if (local_59 != true) {
                      unaff_EBX = 0x9b0;
                      goto LAB_08539c26;
                    }
                  }
                }
                else {
                  bVar3 = std::operator==(&local_58,"[item drop ref table]");
                  if (bVar3) {
                    this[0x114] = (CClearReward)0x0;
                    this[0x115] = (CClearReward)0x0;
                    for (local_18 = 1; local_18 < 0xc9; local_18 = local_18 + 1) {
                      iVar7 = ScanInt(&local_59);
                      local_48 = iVar7;
                      if (local_59 != true) {
                        unaff_EBX = 0x9bc;
                        goto LAB_08539c26;
                      }
                      CVar4 = (CClearReward)ScanInt(&local_59);
                      iVar1 = local_48;
                      this[(iVar7 + 0x88) * 2 + 4] = CVar4;
                      if (local_59 != true) {
                        unaff_EBX = 0x9c0;
                        goto LAB_08539c26;
                      }
                      CVar4 = (CClearReward)ScanInt(&local_59);
                      this[(iVar1 + 0x88) * 2 + 5] = CVar4;
                      if (local_59 != true) {
                        unaff_EBX = 0x9c4;
                        goto LAB_08539c26;
                      }
                    }
                  }
                  else {
                    bVar3 = std::operator==(&local_58,"[gold card cost table]");
                    if (bVar3) {
                      while (iVar7 = ScanInt(&local_59), local_48 = iVar7, local_59 == true) {
                        uVar5 = ScanInt(&local_59);
                        *(undefined4 *)(this + (iVar7 + 0x8e04) * 4 + 4) = uVar5;
                        if (local_59 != true) {
                          unaff_EBX = 0x9d1;
                          goto LAB_08539c26;
                        }
                      }
                    }
                    else {
                      bVar3 = std::operator==(&local_58,"[gold card create rate]");
                      if (bVar3) {
                        lVar8 = (longdouble)ScanFloat(&local_59);
                        *(float *)(this + 0x23b38) = (float)lVar8;
                        if (local_59 != true) {
                          unaff_EBX = 0x9d8;
                          goto LAB_08539c26;
                        }
                      }
                      else {
                        bVar3 = std::operator==(&local_58,"[pcroom card blank item]");
                        if (bVar3) {
                          *(undefined4 *)(this + 0x23b74) = 0;
                          while (local_6c = ScanInt(&local_59), local_59 == true) {
                            local_68 = ScanInt(&local_59);
                            if (local_59 != true) {
                              unaff_EBX = 0x9e6;
                              goto LAB_08539c26;
                            }
                            local_64 = ScanInt(&local_59);
                            if (local_59 != true) {
                              unaff_EBX = 0x9e9;
                              goto LAB_08539c26;
                            }
                            std::
                            vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                            ::push_back((vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                                         *)(this + 0x23b78),(stGoldCardBlankItemInfo_t *)&local_6c);
                            *(int *)(this + 0x23b74) = *(int *)(this + 0x23b74) + local_6c;
                          }
                        }
                        else {
                          bVar3 = std::operator==(&local_58,"[reward item rate per map max count]");
                          if (bVar3) {
                            while (local_14 = ScanInt(&local_59), local_59 == true) {
                              if (9 < local_14) {
                                unaff_EBX = 0x9f6;
                                goto LAB_08539c26;
                              }
                              local_10 = ScanInt(&local_59);
                              if (local_59 != true) {
                                unaff_EBX = 0x9f9;
                                goto LAB_08539c26;
                              }
                              *(undefined4 *)(this + (local_14 + 0x8ed0) * 4 + 0xc) = local_10;
                            }
                          }
                          else {
                            bVar3 = std::operator==(&local_58,"[gold card blank item]");
                            if (!bVar3) {
                              unaff_EBX = 0xa41;
                              goto LAB_08539c26;
                            }
                            *(undefined4 *)(this + 0x23b3c) = 0;
                            while (local_78 = ScanInt(&local_59), local_59 == true) {
                              local_74 = ScanInt(&local_59);
                              if (local_59 != true) {
                                unaff_EBX = 0xa08;
                                goto LAB_08539c26;
                              }
                              local_70 = ScanInt(&local_59);
                              if (local_59 != true) {
                                unaff_EBX = 0xa0b;
                                goto LAB_08539c26;
                              }
                              std::
                              vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                              ::push_back((vector<WongWork::CClearReward::stGoldCardBlankItemInfo_t,std::allocator<WongWork::CClearReward::stGoldCardBlankItemInfo_t>>
                                           *)(this + 0x23b40),(stGoldCardBlankItemInfo_t *)&local_78
                                         );
                              *(int *)(this + 0x23b3c) = *(int *)(this + 0x23b3c) + local_78;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0853930e;
      }
      uVar5 = ScanInt(&local_59);
      *(undefined4 *)(this + 0xa8) = uVar5;
      if (local_59 != true) {
        unaff_EBX = 0x97a;
        goto LAB_08539c26;
      }
      uVar5 = ScanInt(&local_59);
      *(undefined4 *)(this + 0xac) = uVar5;
    } while (local_59 == true);
    unaff_EBX = 0x97c;
LAB_08539c26:
    std::string::~string((string *)&local_58);
  }
  else {
    unaff_EBX = 0x943;
  }
  return unaff_EBX;
}

```

---

## power_war_dungeon_gold_clear_reward

```asm
// === 08538e64 WongWork::CClearReward::power_war_dungeon_gold_clear_reward  [0x08538e64-0x853900b] ===
 8538e64:	55                   	push   %ebp
 8538e65:	89 e5                	mov    %esp,%ebp
 8538e67:	53                   	push   %ebx
 8538e68:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8538e6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8538e71:	83 c0 34             	add    $0x34,%eax
 8538e74:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8538e77:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538e7a:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8538e7e:	0f b6 c0             	movzbl %al,%eax
 8538e81:	8d 50 ff             	lea    -0x1(%eax),%edx
 8538e84:	8b 45 08             	mov    0x8(%ebp),%eax
 8538e87:	83 c2 38             	add    $0x38,%edx
 8538e8a:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8538e8e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538e91:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8538e95:	0f b6 d0             	movzbl %al,%edx
 8538e98:	8b 45 08             	mov    0x8(%ebp),%eax
 8538e9b:	83 c2 34             	add    $0x34,%edx
 8538e9e:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 8538ea2:	de c9                	fmulp  %st,%st(1)
 8538ea4:	d9 5d 8c             	fstps  -0x74(%ebp)
 8538ea7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538eaa:	8b 58 04             	mov    0x4(%eax),%ebx
 8538ead:	e8 e9 32 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8538eb2:	83 c0 68             	add    $0x68,%eax
 8538eb5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8538eb9:	89 04 24             	mov    %eax,(%esp)
 8538ebc:	e8 cb 33 55 00       	call   8a8c28c <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex>
 8538ec1:	d9 e8                	fld1
 8538ec3:	de c1                	faddp  %st,%st(1)
 8538ec5:	d8 4d 8c             	fmuls  -0x74(%ebp)
 8538ec8:	d9 5d e4             	fstps  -0x1c(%ebp)
 8538ecb:	8b 45 14             	mov    0x14(%ebp),%eax
 8538ece:	0f b6 d0             	movzbl %al,%edx
 8538ed1:	8b 45 08             	mov    0x8(%ebp),%eax
 8538ed4:	8b 40 04             	mov    0x4(%eax),%eax
 8538ed7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538edb:	89 04 24             	mov    %eax,(%esp)
 8538ede:	e8 41 a5 ff ff       	call   8533424 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh>
 8538ee3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8538ee6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8538ee9:	8b 00                	mov    (%eax),%eax
 8538eeb:	69 c8 af 00 00 00    	imul   $0xaf,%eax,%ecx
 8538ef1:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8538ef6:	89 c8                	mov    %ecx,%eax
 8538ef8:	f7 ea                	imul   %edx
 8538efa:	c1 fa 06             	sar    $0x6,%edx
 8538efd:	89 c8                	mov    %ecx,%eax
 8538eff:	c1 f8 1f             	sar    $0x1f,%eax
 8538f02:	89 d1                	mov    %edx,%ecx
 8538f04:	29 c1                	sub    %eax,%ecx
 8538f06:	89 c8                	mov    %ecx,%eax
 8538f08:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8538f0b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538f0e:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8538f12:	0f b7 d0             	movzwl %ax,%edx
 8538f15:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538f18:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8538f1c:	0f b7 c0             	movzwl %ax,%eax
 8538f1f:	8d 0c 00             	lea    (%eax,%eax,1),%ecx
 8538f22:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538f25:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8538f29:	0f b7 c0             	movzwl %ax,%eax
 8538f2c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8538f2f:	01 c0                	add    %eax,%eax
 8538f31:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8538f34:	0f af 45 ec          	imul   -0x14(%ebp),%eax
 8538f38:	89 c2                	mov    %eax,%edx
 8538f3a:	c1 ea 1f             	shr    $0x1f,%edx
 8538f3d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8538f40:	d1 f8                	sar    $1,%eax
 8538f42:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8538f45:	db 45 94             	fildl  -0x6c(%ebp)
 8538f48:	d8 4d e4             	fmuls  -0x1c(%ebp)
 8538f4b:	d9 7d 92             	fnstcw -0x6e(%ebp)
 8538f4e:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 8538f52:	b4 0c                	mov    $0xc,%ah
 8538f54:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 8538f58:	d9 6d 90             	fldcw  -0x70(%ebp)
 8538f5b:	db 5d f0             	fistpl -0x10(%ebp)
 8538f5e:	d9 6d 92             	fldcw  -0x6e(%ebp)
 8538f61:	db 45 f0             	fildl  -0x10(%ebp)
 8538f64:	d9 05 d8 a6 c9 08    	flds   0x8c9a6d8
 8538f6a:	de f9                	fdivrp %st,%st(1)
 8538f6c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8538f6f:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8538f73:	0f b6 c0             	movzbl %al,%eax
 8538f76:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8538f79:	db 45 94             	fildl  -0x6c(%ebp)
 8538f7c:	de f9                	fdivrp %st,%st(1)
 8538f7e:	d8 4d e4             	fmuls  -0x1c(%ebp)
 8538f81:	d9 6d 90             	fldcw  -0x70(%ebp)
 8538f84:	db 5d 94             	fistpl -0x6c(%ebp)
 8538f87:	d9 6d 92             	fldcw  -0x6e(%ebp)
 8538f8a:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 8538f8d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8538f90:	8b 40 04             	mov    0x4(%eax),%eax
 8538f93:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8538f96:	8b 52 04             	mov    0x4(%edx),%edx
 8538f99:	f7 da                	neg    %edx
 8538f9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538f9f:	89 14 24             	mov    %edx,(%esp)
 8538fa2:	e8 e9 0d 00 00       	call   8539d90 <_Z14GetRandomRangeii>
 8538fa7:	83 c0 64             	add    $0x64,%eax
 8538faa:	89 d9                	mov    %ebx,%ecx
 8538fac:	0f af c8             	imul   %eax,%ecx
 8538faf:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8538fb4:	89 c8                	mov    %ecx,%eax
 8538fb6:	f7 ea                	imul   %edx
 8538fb8:	c1 fa 05             	sar    $0x5,%edx
 8538fbb:	89 c8                	mov    %ecx,%eax
 8538fbd:	c1 f8 1f             	sar    $0x1f,%eax
 8538fc0:	89 d1                	mov    %edx,%ecx
 8538fc2:	29 c1                	sub    %eax,%ecx
 8538fc4:	89 c8                	mov    %ecx,%eax
 8538fc6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8538fc9:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8538fcc:	89 04 24             	mov    %eax,(%esp)
 8538fcf:	e8 80 28 b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8538fd4:	c6 45 a4 02          	movb   $0x2,-0x5c(%ebp)
 8538fd8:	c7 45 a5 00 00 00 00 	movl   $0x0,-0x5b(%ebp)
 8538fdf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8538fe2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8538fe6:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8538fe9:	89 04 24             	mov    %eax,(%esp)
 8538fec:	e8 93 28 b9 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8538ff1:	8b 45 10             	mov    0x10(%ebp),%eax
 8538ff4:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 8538ff7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8538ffb:	89 04 24             	mov    %eax,(%esp)
 8538ffe:	e8 5f e2 cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8539003:	81 c4 84 00 00 00    	add    $0x84,%esp
 8539009:	5b                   	pop    %ebx
 853900a:	5d                   	pop    %ebp
 853900b:	c3                   	ret

```

```c
// WongWork::CClearReward::power_war_dungeon_gold_clear_reward @ 0x8538e64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CClearReward::power_war_dungeon_gold_clear_reward(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&, int) */

void __thiscall
WongWork::CClearReward::power_war_dungeon_gold_clear_reward
          (CClearReward *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longdouble lVar5;
  Inven_Item local_61;
  undefined1 local_60;
  undefined4 local_5f;
  stGenerateRefData_t *local_24;
  float local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = param_1 + 0x34;
  fVar1 = *(float *)(this + ((byte)param_1[0x36] + 0x37) * 4 + 0xc);
  fVar2 = *(float *)(this + ((byte)param_1[0x35] + 0x34) * 4 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  iVar4 = G_CDataManager();
  lVar5 = (longdouble)
          ServerParameterScript::GetExpBonusWeight((ServerParameterScript *)(iVar4 + 0x68),uVar3);
  local_20 = (float)(((longdouble)1 + lVar5) * (longdouble)(fVar2 * fVar1));
  local_1c = (int *)CGeneratorCommonData::getGoldGenTable
                              (*(CGeneratorCommonData **)(this + 4),(uchar)param_3);
  local_18 = (*local_1c * 0xaf) / 1000;
  local_14 = (int)ROUND((float)((int)(((uint)*(ushort *)(local_24 + 8) +
                                      ((uint)*(ushort *)(local_24 + 0xe) * 2 +
                                      (uint)*(ushort *)(local_24 + 10)) * 2) * local_18) / 2) *
                        local_20);
  fVar1 = (((float)local_14 / _DAT_08c9a6d8) / (float)(byte)local_24[2]) * local_20;
  iVar4 = GetRandomRange(-local_1c[1],local_1c[1]);
  local_10 = ((int)ROUND(fVar1) * (iVar4 + 100)) / 100;
  Inven_Item::Inven_Item(&local_61);
  local_60 = 2;
  local_5f = 0;
  Inven_Item::set_add_info(&local_61,local_10);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,&local_61);
  return;
}

```

---

## setDropRatio

```asm
// === 085385c8 WongWork::CClearReward::setDropRatio  [0x085385c8-0x8538693] ===
 85385c8:	55                   	push   %ebp
 85385c9:	89 e5                	mov    %esp,%ebp
 85385cb:	83 ec 38             	sub    $0x38,%esp
 85385ce:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85385d5:	e9 a9 00 00 00       	jmp    8538683 <_ZN8WongWork12CClearReward12setDropRatioEf+0xbb>
 85385da:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85385dd:	89 d0                	mov    %edx,%eax
 85385df:	01 c0                	add    %eax,%eax
 85385e1:	01 d0                	add    %edx,%eax
 85385e3:	c1 e0 02             	shl    $0x2,%eax
 85385e6:	83 c0 10             	add    $0x10,%eax
 85385e9:	03 45 08             	add    0x8(%ebp),%eax
 85385ec:	8d 48 08             	lea    0x8(%eax),%ecx
 85385ef:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85385f2:	89 d0                	mov    %edx,%eax
 85385f4:	01 c0                	add    %eax,%eax
 85385f6:	01 d0                	add    %edx,%eax
 85385f8:	c1 e0 02             	shl    $0x2,%eax
 85385fb:	83 c0 60             	add    $0x60,%eax
 85385fe:	03 45 08             	add    0x8(%ebp),%eax
 8538601:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8538605:	89 04 24             	mov    %eax,(%esp)
 8538608:	e8 b7 34 00 00       	call   853bac4 <_ZNSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EEaSERKS4_>
 853860d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8538614:	eb 45                	jmp    853865b <_ZN8WongWork12CClearReward12setDropRatioEf+0x93>
 8538616:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8538619:	89 d0                	mov    %edx,%eax
 853861b:	01 c0                	add    %eax,%eax
 853861d:	01 d0                	add    %edx,%eax
 853861f:	c1 e0 02             	shl    $0x2,%eax
 8538622:	83 c0 60             	add    $0x60,%eax
 8538625:	03 45 08             	add    0x8(%ebp),%eax
 8538628:	8b 55 f0             	mov    -0x10(%ebp),%edx
 853862b:	89 54 24 04          	mov    %edx,0x4(%esp)
 853862f:	89 04 24             	mov    %eax,(%esp)
 8538632:	e8 21 37 00 00       	call   853bd58 <_ZNSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EEixEj>
 8538637:	89 45 f4             	mov    %eax,-0xc(%ebp)
 853863a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 853863d:	8b 40 08             	mov    0x8(%eax),%eax
 8538640:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8538643:	db 45 e4             	fildl  -0x1c(%ebp)
 8538646:	d8 4d 0c             	fmuls  0xc(%ebp)
 8538649:	d9 1c 24             	fstps  (%esp)
 853864c:	e8 94 25 00 00       	call   853abe5 <_Z10roundFloatf>
 8538651:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8538654:	89 42 08             	mov    %eax,0x8(%edx)
 8538657:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 853865b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 853865e:	89 d0                	mov    %edx,%eax
 8538660:	01 c0                	add    %eax,%eax
 8538662:	01 d0                	add    %edx,%eax
 8538664:	c1 e0 02             	shl    $0x2,%eax
 8538667:	83 c0 60             	add    $0x60,%eax
 853866a:	03 45 08             	add    0x8(%ebp),%eax
 853866d:	89 04 24             	mov    %eax,(%esp)
 8538670:	e8 c1 36 00 00       	call   853bd36 <_ZNKSt6vectorIN8WongWork12CClearReward15stGenItemProb_tESaIS2_EE4sizeEv>
 8538675:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8538678:	0f 97 c0             	seta   %al
 853867b:	84 c0                	test   %al,%al
 853867d:	75 97                	jne    8538616 <_ZN8WongWork12CClearReward12setDropRatioEf+0x4e>
 853867f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8538683:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 8538687:	0f 9e c0             	setle  %al
 853868a:	84 c0                	test   %al,%al
 853868c:	0f 85 48 ff ff ff    	jne    85385da <_ZN8WongWork12CClearReward12setDropRatioEf+0x12>
 8538692:	c9                   	leave
 8538693:	c3                   	ret

```

```c
// WongWork::CClearReward::setDropRatio @ 0x85385c8

/* WongWork::CClearReward::setDropRatio(float) */

void __thiscall WongWork::CClearReward::setDropRatio(CClearReward *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    std::
    vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
    ::operator=((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                 *)(this + local_18 * 0xc + 0x60),(vector *)(this + local_18 * 0xc + 0x18));
    local_14 = 0;
    while( true ) {
      uVar3 = std::
              vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
              ::size((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                      *)(this + local_18 * 0xc + 0x60));
      if (uVar3 <= local_14) break;
      iVar1 = std::
              vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
              ::operator[]((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                            *)(this + local_18 * 0xc + 0x60),local_14);
      uVar2 = roundFloat((float)*(int *)(iVar1 + 8) * param_1);
      *(undefined4 *)(iVar1 + 8) = uVar2;
      local_14 = local_14 + 1;
    }
  }
  return;
}

```

