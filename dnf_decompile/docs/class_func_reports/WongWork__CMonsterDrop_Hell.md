# WongWork__CMonsterDrop_Hell

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _getGenItemProbIdx

```asm
// === 08535a88 WongWork::CMonsterDrop_Hell::_getGenItemProbIdx  [0x08535a88-0x8535b07] ===
 8535a88:	55                   	push   %ebp
 8535a89:	89 e5                	mov    %esp,%ebp
 8535a8b:	83 ec 28             	sub    $0x28,%esp
 8535a8e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8535a95:	eb 31                	jmp    8535ac8 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi+0x40>
 8535a97:	8b 45 08             	mov    0x8(%ebp),%eax
 8535a9a:	8d 50 24             	lea    0x24(%eax),%edx
 8535a9d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535aa0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535aa4:	89 14 24             	mov    %edx,(%esp)
 8535aa7:	e8 f4 55 00 00       	call   853b0a0 <_ZNSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EEixEj>
 8535aac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8535aaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8535ab2:	8b 00                	mov    (%eax),%eax
 8535ab4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8535ab7:	7f 0b                	jg     8535ac4 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi+0x3c>
 8535ab9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8535abc:	8b 40 04             	mov    0x4(%eax),%eax
 8535abf:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8535ac2:	7d 1e                	jge    8535ae2 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi+0x5a>
 8535ac4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8535ac8:	8b 45 08             	mov    0x8(%ebp),%eax
 8535acb:	83 c0 24             	add    $0x24,%eax
 8535ace:	89 04 24             	mov    %eax,(%esp)
 8535ad1:	e8 a8 55 00 00       	call   853b07e <_ZNKSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EE4sizeEv>
 8535ad6:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8535ad9:	0f 97 c0             	seta   %al
 8535adc:	84 c0                	test   %al,%al
 8535ade:	75 b7                	jne    8535a97 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi+0xf>
 8535ae0:	eb 01                	jmp    8535ae3 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi+0x5b>
 8535ae2:	90                   	nop
 8535ae3:	8b 45 08             	mov    0x8(%ebp),%eax
 8535ae6:	83 c0 24             	add    $0x24,%eax
 8535ae9:	89 04 24             	mov    %eax,(%esp)
 8535aec:	e8 8d 55 00 00       	call   853b07e <_ZNKSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EE4sizeEv>
 8535af1:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8535af4:	0f 96 c0             	setbe  %al
 8535af7:	84 c0                	test   %al,%al
 8535af9:	74 07                	je     8535b02 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi+0x7a>
 8535afb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8535b00:	eb 03                	jmp    8535b05 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi+0x7d>
 8535b02:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535b05:	c9                   	leave
 8535b06:	c3                   	ret
 8535b07:	90                   	nop

```

```c
// WongWork::CMonsterDrop_Hell::_getGenItemProbIdx @ 0x8535a88

/* WongWork::CMonsterDrop_Hell::_getGenItemProbIdx(int) */

uint __thiscall WongWork::CMonsterDrop_Hell::_getGenItemProbIdx(CMonsterDrop_Hell *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                  ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                          *)(this + 0x24)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                                         *)(this + 0x24),local_14), param_1 < *piVar1 ||
          (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
          ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                  *)(this + 0x24));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}

```

---

## generateSpecificItem

```asm
// === 08535726 WongWork::CMonsterDrop_Hell::generateSpecificItem  [0x08535726-0x8535947] ===
 8535726:	55                   	push   %ebp
 8535727:	89 e5                	mov    %esp,%ebp
 8535729:	56                   	push   %esi
 853572a:	53                   	push   %ebx
 853572b:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8535731:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535734:	83 c0 34             	add    $0x34,%eax
 8535737:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 853573a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853573d:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8535741:	0f b6 c0             	movzbl %al,%eax
 8535744:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535748:	8b 45 08             	mov    0x8(%ebp),%eax
 853574b:	89 04 24             	mov    %eax,(%esp)
 853574e:	e8 35 03 00 00       	call   8535a88 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi>
 8535753:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8535756:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 853575a:	0f 88 d4 01 00 00    	js     8535934 <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x20e>
 8535760:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8535763:	8b 55 08             	mov    0x8(%ebp),%edx
 8535766:	83 c2 24             	add    $0x24,%edx
 8535769:	89 44 24 04          	mov    %eax,0x4(%esp)
 853576d:	89 14 24             	mov    %edx,(%esp)
 8535770:	e8 2b 59 00 00       	call   853b0a0 <_ZNSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EEixEj>
 8535775:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8535778:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 853577b:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 853577f:	0f b6 d0             	movzbl %al,%edx
 8535782:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8535785:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8535789:	8b 45 0c             	mov    0xc(%ebp),%eax
 853578c:	8b 00                	mov    (%eax),%eax
 853578e:	89 d1                	mov    %edx,%ecx
 8535790:	0f af c8             	imul   %eax,%ecx
 8535793:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8535798:	89 c8                	mov    %ecx,%eax
 853579a:	f7 ea                	imul   %edx
 853579c:	c1 fa 05             	sar    $0x5,%edx
 853579f:	89 c8                	mov    %ecx,%eax
 85357a1:	c1 f8 1f             	sar    $0x1f,%eax
 85357a4:	89 d1                	mov    %edx,%ecx
 85357a6:	29 c1                	sub    %eax,%ecx
 85357a8:	89 c8                	mov    %ecx,%eax
 85357aa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85357ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85357b0:	83 c0 08             	add    $0x8,%eax
 85357b3:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 85357ba:	00 
 85357bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85357c2:	00 
 85357c3:	89 04 24             	mov    %eax,(%esp)
 85357c6:	e8 d9 dc ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85357cb:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 85357ce:	0f 9f c0             	setg   %al
 85357d1:	84 c0                	test   %al,%al
 85357d3:	0f 85 5e 01 00 00    	jne    8535937 <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x211>
 85357d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85357dc:	83 c0 08             	add    $0x8,%eax
 85357df:	c7 44 24 08 40 42 0f 	movl   $0xf4240,0x8(%esp)
 85357e6:	00 
 85357e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85357ee:	00 
 85357ef:	89 04 24             	mov    %eax,(%esp)
 85357f2:	e8 ad dc ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 85357f7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85357fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85357fd:	0f b6 40 42          	movzbl 0x42(%eax),%eax
 8535801:	0f be c0             	movsbl %al,%eax
 8535804:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8535807:	8b 55 e8             	mov    -0x18(%ebp),%edx
 853580a:	89 d0                	mov    %edx,%eax
 853580c:	01 c0                	add    %eax,%eax
 853580e:	01 d0                	add    %edx,%eax
 8535810:	c1 e0 03             	shl    $0x3,%eax
 8535813:	83 c0 30             	add    $0x30,%eax
 8535816:	03 45 08             	add    0x8(%ebp),%eax
 8535819:	8b 55 10             	mov    0x10(%ebp),%edx
 853581c:	8d 4a 0c             	lea    0xc(%edx),%ecx
 853581f:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8535826:	00 
 8535827:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 853582a:	89 54 24 08          	mov    %edx,0x8(%esp)
 853582e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535832:	89 0c 24             	mov    %ecx,(%esp)
 8535835:	e8 aa b3 01 00       	call   8550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>
 853583a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 853583d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8535840:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8535844:	0f b6 c0             	movzbl %al,%eax
 8535847:	8b 55 08             	mov    0x8(%ebp),%edx
 853584a:	81 c2 54 02 00 00    	add    $0x254,%edx
 8535850:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8535854:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8535857:	89 44 24 08          	mov    %eax,0x8(%esp)
 853585b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8535862:	00 
 8535863:	89 14 24             	mov    %edx,(%esp)
 8535866:	e8 39 f1 ff ff       	call   85349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>
 853586b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 853586e:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8535872:	0f 84 c2 00 00 00    	je     853593a <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x214>
 8535878:	e8 1e 69 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853587d:	8b 40 0c             	mov    0xc(%eax),%eax
 8535880:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8535883:	89 54 24 04          	mov    %edx,0x4(%esp)
 8535887:	89 04 24             	mov    %eax,(%esp)
 853588a:	e8 fb c5 fd ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 853588f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8535892:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8535896:	0f 84 a1 00 00 00    	je     853593d <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x217>
 853589c:	8d 45 97             	lea    -0x69(%ebp),%eax
 853589f:	89 04 24             	mov    %eax,(%esp)
 85358a2:	e8 ad 5f b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85358a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85358aa:	89 45 99             	mov    %eax,-0x67(%ebp)
 85358ad:	e8 e9 68 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85358b2:	8b 40 0c             	mov    0xc(%eax),%eax
 85358b5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85358bc:	00 
 85358bd:	8d 55 97             	lea    -0x69(%ebp),%edx
 85358c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 85358c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85358cb:	00 
 85358cc:	89 04 24             	mov    %eax,(%esp)
 85358cf:	e8 e4 c6 fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 85358d4:	8b 45 10             	mov    0x10(%ebp),%eax
 85358d7:	89 04 24             	mov    %eax,(%esp)
 85358da:	e8 7f 4d c4 ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 85358df:	89 c6                	mov    %eax,%esi
 85358e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85358e4:	89 04 24             	mov    %eax,(%esp)
 85358e7:	e8 68 b3 bd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 85358ec:	89 c3                	mov    %eax,%ebx
 85358ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85358f1:	89 04 24             	mov    %eax,(%esp)
 85358f4:	e8 dd b9 bb ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85358f9:	89 c2                	mov    %eax,%edx
 85358fb:	0f b6 45 98          	movzbl -0x68(%ebp),%eax
 85358ff:	0f b6 c0             	movzbl %al,%eax
 8535902:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8535905:	83 c1 0c             	add    $0xc,%ecx
 8535908:	89 74 24 10          	mov    %esi,0x10(%esp)
 853590c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8535910:	89 54 24 08          	mov    %edx,0x8(%esp)
 8535914:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535918:	89 0c 24             	mov    %ecx,(%esp)
 853591b:	e8 f4 b1 01 00       	call   8550b14 <_ZN10CLuckPoint12UseLuckPointEiiii>
 8535920:	8b 45 10             	mov    0x10(%ebp),%eax
 8535923:	8d 55 97             	lea    -0x69(%ebp),%edx
 8535926:	89 54 24 04          	mov    %edx,0x4(%esp)
 853592a:	89 04 24             	mov    %eax,(%esp)
 853592d:	e8 30 19 d0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8535932:	eb 0a                	jmp    853593e <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x218>
 8535934:	90                   	nop
 8535935:	eb 07                	jmp    853593e <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x218>
 8535937:	90                   	nop
 8535938:	eb 04                	jmp    853593e <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x218>
 853593a:	90                   	nop
 853593b:	eb 01                	jmp    853593e <_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x218>
 853593d:	90                   	nop
 853593e:	81 c4 90 00 00 00    	add    $0x90,%esp
 8535944:	5b                   	pop    %ebx
 8535945:	5e                   	pop    %esi
 8535946:	5d                   	pop    %ebp
 8535947:	c3                   	ret

```

```c
// WongWork::CMonsterDrop_Hell::generateSpecificItem @ 0x8535726

/* WongWork::CMonsterDrop_Hell::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop_Hell::generateSpecificItem
          (CMonsterDrop_Hell *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  int iVar1;
  int iVar2;
  Inven_Item local_6d;
  byte local_6c;
  int local_6b;
  stGenerateRefData_t *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  CItem *local_10;
  
  local_30 = param_1 + 0x34;
  local_2c = _getGenItemProbIdx(this,(uint)(byte)param_1[0x35]);
  if (-1 < (int)local_2c) {
    local_28 = std::
               vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
               ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                             *)(this + 0x24),local_2c);
    local_24 = (*(int *)(local_28 + 8 + (uint)(byte)local_30[2] * 4) * *(int *)param_1) / 100;
    iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,1000);
    if (iVar1 <= local_24) {
      local_20 = CGenerateRandomNumber::generateNumber
                           ((CGenerateRandomNumber *)(this + 8),1,1000000);
      local_1c = (int)(char)param_1[0x42];
      local_18 = CLuckPoint::GetItemRarity
                           ((CLuckPoint *)(param_2 + 0xc),(int *)(this + local_1c * 0x18 + 0x30),
                            local_20,2);
      local_14 = CItemGenRateTable::chooseItem
                           ((CItemGenRateTable *)(this + 0x254),2,local_18,local_30[1]);
      if (local_14 != -1) {
        iVar1 = G_CDataManager();
        local_10 = (CItem *)CItemList::find_item(*(CItemList **)(iVar1 + 0xc),local_14);
        if (local_10 != (CItem *)0x0) {
          Inven_Item::Inven_Item(&local_6d);
          local_6b = local_14;
          iVar1 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar1 + 0xc),1,&local_6d,1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2);
          iVar1 = CItem::get_grade(local_10);
          iVar2 = CItem::get_rarity(local_10);
          CLuckPoint::UseLuckPoint((int)(param_2 + 0xc),(uint)local_6c,iVar2,iVar1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,&local_6d);
        }
      }
    }
  }
  return;
}

```

---

## hellPartySpecificItem

```asm
// === 08535b08 WongWork::CMonsterDrop_Hell::hellPartySpecificItem  [0x08535b08-0x8535cf7] ===
 8535b08:	55                   	push   %ebp
 8535b09:	89 e5                	mov    %esp,%ebp
 8535b0b:	53                   	push   %ebx
 8535b0c:	83 ec 34             	sub    $0x34,%esp
 8535b0f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8535b16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535b19:	8b 40 38             	mov    0x38(%eax),%eax
 8535b1c:	89 c3                	mov    %eax,%ebx
 8535b1e:	e8 78 66 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8535b23:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 8535b29:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8535b2d:	89 04 24             	mov    %eax,(%esp)
 8535b30:	e8 9d 4e e1 ff       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 8535b35:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8535b38:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8535b3c:	74 6c                	je     8535baa <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xa2>
 8535b3e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8535b41:	89 04 24             	mov    %eax,(%esp)
 8535b44:	e8 9f 42 00 00       	call   8539de8 <_ZNK12CAICharacter13IsHellMonsterEv>
 8535b49:	84 c0                	test   %al,%al
 8535b4b:	74 09                	je     8535b56 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x4e>
 8535b4d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8535b54:	eb 0d                	jmp    8535b63 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x5b>
 8535b56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535b59:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 8535b5d:	0f be c0             	movsbl %al,%eax
 8535b60:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8535b63:	8b 45 10             	mov    0x10(%ebp),%eax
 8535b66:	89 44 24 08          	mov    %eax,0x8(%esp)
 8535b6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535b6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535b71:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8535b74:	89 04 24             	mov    %eax,(%esp)
 8535b77:	e8 be 45 e1 ff       	call   834a13a <_ZNK12CAICharacter23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>
 8535b7c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8535b7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535b82:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 8535b86:	0f b6 d0             	movzbl %al,%edx
 8535b89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535b8c:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8535b90:	0f b6 c0             	movzbl %al,%eax
 8535b93:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8535b97:	89 54 24 08          	mov    %edx,0x8(%esp)
 8535b9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535b9f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8535ba2:	89 04 24             	mov    %eax,(%esp)
 8535ba5:	e8 b4 45 e1 ff       	call   834a15e <_ZNK12CAICharacter22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>
 8535baa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535bad:	83 c0 34             	add    $0x34,%eax
 8535bb0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8535bb3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8535bb6:	8b 58 04             	mov    0x4(%eax),%ebx
 8535bb9:	e8 dd 65 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8535bbe:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8535bc2:	89 04 24             	mov    %eax,(%esp)
 8535bc5:	e8 ba a1 e2 ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 8535bca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8535bcd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8535bd1:	0f 84 d5 00 00 00    	je     8535cac <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1a4>
 8535bd7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535bda:	89 04 24             	mov    %eax,(%esp)
 8535bdd:	e8 12 42 00 00       	call   8539df4 <_ZNK8CMonster13IsHellMonsterEv>
 8535be2:	84 c0                	test   %al,%al
 8535be4:	74 09                	je     8535bef <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xe7>
 8535be6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8535bed:	eb 0d                	jmp    8535bfc <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xf4>
 8535bef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535bf2:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 8535bf6:	0f be c0             	movsbl %al,%eax
 8535bf9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8535bfc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535bff:	89 04 24             	mov    %eax,(%esp)
 8535c02:	e8 bf 8a dd ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 8535c07:	05 ac 03 00 00       	add    $0x3ac,%eax
 8535c0c:	89 04 24             	mov    %eax,(%esp)
 8535c0f:	e8 88 ef f7 ff       	call   84b4b9c <_ZNKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE5emptyEv>
 8535c14:	83 f0 01             	xor    $0x1,%eax
 8535c17:	84 c0                	test   %al,%al
 8535c19:	74 19                	je     8535c34 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x12c>
 8535c1b:	8b 45 10             	mov    0x10(%ebp),%eax
 8535c1e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8535c22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535c25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535c29:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535c2c:	89 04 24             	mov    %eax,(%esp)
 8535c2f:	e8 42 9c e1 ff       	call   834f876 <_ZNK8CMonster23generateIndependentItemERKN8WongWork19stGenerateRefData_tERSt6vectorI10Inven_ItemSaIS5_EE>
 8535c34:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8535c37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535c3a:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 8535c3e:	0f b6 d0             	movzbl %al,%edx
 8535c41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535c44:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8535c48:	0f b6 c0             	movzbl %al,%eax
 8535c4b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8535c4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8535c53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535c57:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535c5a:	89 04 24             	mov    %eax,(%esp)
 8535c5d:	e8 44 9c e1 ff       	call   834f8a6 <_ZNK8CMonster22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE>
 8535c62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535c65:	89 04 24             	mov    %eax,(%esp)
 8535c68:	e8 59 8a dd ff       	call   830e6c6 <_ZNK8CMonster16getMonsterScriptEv>
 8535c6d:	83 c0 70             	add    $0x70,%eax
 8535c70:	89 04 24             	mov    %eax,(%esp)
 8535c73:	e8 9e 59 00 00       	call   853b616 <_ZNKSt6vectorI13CatchItemInfoSaIS0_EE5emptyEv>
 8535c78:	83 f0 01             	xor    $0x1,%eax
 8535c7b:	84 c0                	test   %al,%al
 8535c7d:	74 12                	je     8535c91 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x189>
 8535c7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535c82:	0f b6 40 45          	movzbl 0x45(%eax),%eax
 8535c86:	84 c0                	test   %al,%al
 8535c88:	74 07                	je     8535c91 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x189>
 8535c8a:	b8 01 00 00 00       	mov    $0x1,%eax
 8535c8f:	eb 05                	jmp    8535c96 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x18e>
 8535c91:	b8 00 00 00 00       	mov    $0x0,%eax
 8535c96:	84 c0                	test   %al,%al
 8535c98:	74 12                	je     8535cac <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1a4>
 8535c9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8535c9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535ca1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535ca4:	89 04 24             	mov    %eax,(%esp)
 8535ca7:	e8 3c 9c e1 ff       	call   834f8e8 <_ZNK8CMonster24generateCatchMonsterItemERSt6vectorI10Inven_ItemSaIS1_EE>
 8535cac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535caf:	0f b6 40 40          	movzbl 0x40(%eax),%eax
 8535cb3:	84 c0                	test   %al,%al
 8535cb5:	74 3a                	je     8535cf1 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1e9>
 8535cb7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8535cbe:	eb 24                	jmp    8535ce4 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1dc>
 8535cc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8535cc3:	8b 00                	mov    (%eax),%eax
 8535cc5:	83 c0 0c             	add    $0xc,%eax
 8535cc8:	8b 10                	mov    (%eax),%edx
 8535cca:	8b 45 10             	mov    0x10(%ebp),%eax
 8535ccd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8535cd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8535cd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535cd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8535cdb:	89 04 24             	mov    %eax,(%esp)
 8535cde:	ff d2                	call   *%edx
 8535ce0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8535ce4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8535ce7:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8535cea:	0f 9c c0             	setl   %al
 8535ced:	84 c0                	test   %al,%al
 8535cef:	75 cf                	jne    8535cc0 <_ZN8WongWork17CMonsterDrop_Hell21hellPartySpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x1b8>
 8535cf1:	83 c4 34             	add    $0x34,%esp
 8535cf4:	5b                   	pop    %ebx
 8535cf5:	5d                   	pop    %ebp
 8535cf6:	c3                   	ret
 8535cf7:	90                   	nop

```

```c
// WongWork::CMonsterDrop_Hell::hellPartySpecificItem @ 0x8535b08

/* WongWork::CMonsterDrop_Hell::hellPartySpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop_Hell::hellPartySpecificItem
          (CMonsterDrop_Hell *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CAICharacter *this_00;
  CMonster *this_01;
  int local_20;
  int local_10;
  
  local_20 = 0;
  uVar1 = *(uint *)(param_1 + 0x38);
  iVar4 = G_CDataManager();
  this_00 = (CAICharacter *)CAICharacterList::get(*(CAICharacterList **)(iVar4 + 0x869c),uVar1);
  if (this_00 != (CAICharacter *)0x0) {
    cVar3 = CAICharacter::IsHellMonster(this_00);
    if (cVar3 == '\0') {
      local_20 = (int)(char)param_1[0x3d];
    }
    else {
      local_20 = 0;
    }
    CAICharacter::generateIndependentItem(this_00,param_1,(vector *)param_2);
    CAICharacter::generateDropAvatarItem
              (this_00,(uchar)param_1[0x36],(uchar)param_1[0x3e],(vector *)param_2);
  }
  iVar4 = G_CDataManager();
  this_01 = (CMonster *)CDataManager::find_monster(iVar4);
  if (this_01 != (CMonster *)0x0) {
    cVar3 = CMonster::IsHellMonster(this_01);
    if (cVar3 == '\0') {
      local_20 = (int)(char)param_1[0x3d];
    }
    else {
      local_20 = 0;
    }
    CMonster::getMonsterScript(this_01);
    cVar3 = std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
            empty();
    if (cVar3 != '\x01') {
      CMonster::generateIndependentItem(this_01,param_1,(vector *)param_2);
    }
    CMonster::generateDropAvatarItem
              (this_01,(uchar)param_1[0x36],(uchar)param_1[0x3e],(vector *)param_2);
    CMonster::getMonsterScript(this_01);
    cVar3 = std::vector<CatchItemInfo,std::allocator<CatchItemInfo>>::empty();
    if ((cVar3 == '\x01') || (param_1[0x45] == (stGenerateRefData_t)0x0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      CMonster::generateCatchMonsterItem(this_01,(vector *)param_2);
    }
  }
  if (param_1[0x40] != (stGenerateRefData_t)0x0) {
    for (local_10 = 0; local_10 < local_20; local_10 = local_10 + 1) {
      (**(code **)(*(int *)this + 0xc))(this,param_1,param_2);
    }
  }
  return;
}

```

---

## loadScript

```asm
// === 08535344 WongWork::CMonsterDrop_Hell::loadScript  [0x08535344-0x8535725] ===
 8535344:	55                   	push   %ebp
 8535345:	89 e5                	mov    %esp,%ebp
 8535347:	56                   	push   %esi
 8535348:	53                   	push   %ebx
 8535349:	83 c4 80             	add    $0xffffff80,%esp
 853534c:	8b 45 0c             	mov    0xc(%ebp),%eax
 853534f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535353:	c7 04 24 00 95 c9 08 	movl   $0x8c99500,(%esp)
 853535a:	e8 ca 69 38 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 853535f:	83 f0 01             	xor    $0x1,%eax
 8535362:	84 c0                	test   %al,%al
 8535364:	74 0a                	je     8535370 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x2c>
 8535366:	bb 02 03 00 00       	mov    $0x302,%ebx
 853536b:	e9 ad 03 00 00       	jmp    853571d <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3d9>
 8535370:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8535373:	89 04 24             	mov    %eax,(%esp)
 8535376:	e8 55 12 1d 00       	call   87065d0 <_ZNSsC1Ev>
 853537b:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8535382:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 8535386:	eb 01                	jmp    8535389 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x45>
 8535388:	90                   	nop
 8535389:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8535390:	00 
 8535391:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8535394:	89 04 24             	mov    %eax,(%esp)
 8535397:	e8 c3 74 38 00       	call   88bc85f <_Z8ScanTypeRSsb>
 853539c:	83 f0 01             	xor    $0x1,%eax
 853539f:	84 c0                	test   %al,%al
 85353a1:	0f 85 23 03 00 00    	jne    85356ca <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x386>
 85353a7:	c7 44 24 04 aa 95 c9 	movl   $0x8c995aa,0x4(%esp)
 85353ae:	08 
 85353af:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85353b2:	89 04 24             	mov    %eax,(%esp)
 85353b5:	e8 e7 b5 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85353ba:	84 c0                	test   %al,%al
 85353bc:	0f 84 98 00 00 00    	je     853545a <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x116>
 85353c2:	8d 45 b7             	lea    -0x49(%ebp),%eax
 85353c5:	89 04 24             	mov    %eax,(%esp)
 85353c8:	e8 ae 6f 38 00       	call   88bc37b <_Z7ScanIntPb>
 85353cd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85353d0:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 85353d4:	83 f0 01             	xor    $0x1,%eax
 85353d7:	84 c0                	test   %al,%al
 85353d9:	74 0a                	je     85353e5 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0xa1>
 85353db:	bb 11 03 00 00       	mov    $0x311,%ebx
 85353e0:	e9 2d 03 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 85353e5:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 85353ec:	eb 57                	jmp    8535445 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x101>
 85353ee:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85353f5:	eb 3f                	jmp    8535436 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0xf2>
 85353f7:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 85353fa:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 85353fd:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8535400:	89 04 24             	mov    %eax,(%esp)
 8535403:	e8 73 6f 38 00       	call   88bc37b <_Z7ScanIntPb>
 8535408:	89 c2                	mov    %eax,%edx
 853540a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 853540d:	89 d8                	mov    %ebx,%eax
 853540f:	01 c0                	add    %eax,%eax
 8535411:	01 d8                	add    %ebx,%eax
 8535413:	01 c0                	add    %eax,%eax
 8535415:	01 f0                	add    %esi,%eax
 8535417:	83 c0 0c             	add    $0xc,%eax
 853541a:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 853541d:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 8535421:	83 f0 01             	xor    $0x1,%eax
 8535424:	84 c0                	test   %al,%al
 8535426:	74 0a                	je     8535432 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0xee>
 8535428:	bb 19 03 00 00       	mov    $0x319,%ebx
 853542d:	e9 e0 02 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 8535432:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8535436:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 853543a:	0f 9e c0             	setle  %al
 853543d:	84 c0                	test   %al,%al
 853543f:	75 b6                	jne    85353f7 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0xb3>
 8535441:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8535445:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8535448:	83 c0 01             	add    $0x1,%eax
 853544b:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 853544e:	0f 9f c0             	setg   %al
 8535451:	84 c0                	test   %al,%al
 8535453:	75 99                	jne    85353ee <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0xaa>
 8535455:	e9 2f ff ff ff       	jmp    8535389 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x45>
 853545a:	c7 44 24 04 c5 95 c9 	movl   $0x8c995c5,0x4(%esp)
 8535461:	08 
 8535462:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8535465:	89 04 24             	mov    %eax,(%esp)
 8535468:	e8 34 b5 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853546d:	84 c0                	test   %al,%al
 853546f:	0f 84 8a 00 00 00    	je     85354ff <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x1bb>
 8535475:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8535478:	b9 00 00 00 00       	mov    $0x0,%ecx
 853547d:	b8 1c 00 00 00       	mov    $0x1c,%eax
 8535482:	89 c3                	mov    %eax,%ebx
 8535484:	83 e3 fc             	and    $0xfffffffc,%ebx
 8535487:	b8 00 00 00 00       	mov    $0x0,%eax
 853548c:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 853548f:	83 c0 04             	add    $0x4,%eax
 8535492:	39 d8                	cmp    %ebx,%eax
 8535494:	72 f6                	jb     853548c <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x148>
 8535496:	01 c2                	add    %eax,%edx
 8535498:	8d 45 b7             	lea    -0x49(%ebp),%eax
 853549b:	89 04 24             	mov    %eax,(%esp)
 853549e:	e8 d8 6e 38 00       	call   88bc37b <_Z7ScanIntPb>
 85354a3:	8b 55 08             	mov    0x8(%ebp),%edx
 85354a6:	8d 4a 18             	lea    0x18(%edx),%ecx
 85354a9:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85354ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 85354b0:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85354b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85354b7:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85354ba:	89 54 24 10          	mov    %edx,0x10(%esp)
 85354be:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85354c1:	89 54 24 14          	mov    %edx,0x14(%esp)
 85354c5:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85354c8:	89 54 24 18          	mov    %edx,0x18(%esp)
 85354cc:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85354cf:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85354d3:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85354d6:	89 54 24 20          	mov    %edx,0x20(%esp)
 85354da:	89 44 24 04          	mov    %eax,0x4(%esp)
 85354de:	89 0c 24             	mov    %ecx,(%esp)
 85354e1:	e8 06 5b 00 00       	call   853afec <_ZNSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EE6resizeEjS2_>
 85354e6:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 85354ea:	83 f0 01             	xor    $0x1,%eax
 85354ed:	84 c0                	test   %al,%al
 85354ef:	0f 84 93 fe ff ff    	je     8535388 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x44>
 85354f5:	bb 20 03 00 00       	mov    $0x320,%ebx
 85354fa:	e9 13 02 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 85354ff:	c7 44 24 04 d8 95 c9 	movl   $0x8c995d8,0x4(%esp)
 8535506:	08 
 8535507:	8d 45 b8             	lea    -0x48(%ebp),%eax
 853550a:	89 04 24             	mov    %eax,(%esp)
 853550d:	e8 8f b4 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8535512:	84 c0                	test   %al,%al
 8535514:	0f 84 d6 00 00 00    	je     85355f0 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x2ac>
 853551a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8535521:	e9 a9 00 00 00       	jmp    85355cf <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x28b>
 8535526:	8b 45 08             	mov    0x8(%ebp),%eax
 8535529:	8d 50 18             	lea    0x18(%eax),%edx
 853552c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 853552f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535533:	89 14 24             	mov    %edx,(%esp)
 8535536:	e8 65 5b 00 00       	call   853b0a0 <_ZNSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EEixEj>
 853553b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 853553e:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8535541:	89 04 24             	mov    %eax,(%esp)
 8535544:	e8 32 6e 38 00       	call   88bc37b <_Z7ScanIntPb>
 8535549:	8b 55 ec             	mov    -0x14(%ebp),%edx
 853554c:	89 02                	mov    %eax,(%edx)
 853554e:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 8535552:	83 f0 01             	xor    $0x1,%eax
 8535555:	84 c0                	test   %al,%al
 8535557:	74 0a                	je     8535563 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x21f>
 8535559:	bb 28 03 00 00       	mov    $0x328,%ebx
 853555e:	e9 af 01 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 8535563:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8535566:	89 04 24             	mov    %eax,(%esp)
 8535569:	e8 0d 6e 38 00       	call   88bc37b <_Z7ScanIntPb>
 853556e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8535571:	89 42 04             	mov    %eax,0x4(%edx)
 8535574:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 8535578:	83 f0 01             	xor    $0x1,%eax
 853557b:	84 c0                	test   %al,%al
 853557d:	74 0a                	je     8535589 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x245>
 853557f:	bb 2a 03 00 00       	mov    $0x32a,%ebx
 8535584:	e9 89 01 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 8535589:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8535590:	eb 2e                	jmp    85355c0 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x27c>
 8535592:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8535595:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8535598:	89 04 24             	mov    %eax,(%esp)
 853559b:	e8 db 6d 38 00       	call   88bc37b <_Z7ScanIntPb>
 85355a0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85355a3:	89 44 9a 08          	mov    %eax,0x8(%edx,%ebx,4)
 85355a7:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 85355ab:	83 f0 01             	xor    $0x1,%eax
 85355ae:	84 c0                	test   %al,%al
 85355b0:	74 0a                	je     85355bc <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x278>
 85355b2:	bb 32 03 00 00       	mov    $0x332,%ebx
 85355b7:	e9 56 01 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 85355bc:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85355c0:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 85355c4:	0f 9e c0             	setle  %al
 85355c7:	84 c0                	test   %al,%al
 85355c9:	75 c7                	jne    8535592 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x24e>
 85355cb:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85355cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85355d2:	83 c0 18             	add    $0x18,%eax
 85355d5:	89 04 24             	mov    %eax,(%esp)
 85355d8:	e8 a1 5a 00 00       	call   853b07e <_ZNKSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EE4sizeEv>
 85355dd:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 85355e0:	0f 97 c0             	seta   %al
 85355e3:	84 c0                	test   %al,%al
 85355e5:	0f 85 3b ff ff ff    	jne    8535526 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x1e2>
 85355eb:	e9 99 fd ff ff       	jmp    8535389 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x45>
 85355f0:	c7 44 24 04 f7 95 c9 	movl   $0x8c995f7,0x4(%esp)
 85355f7:	08 
 85355f8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85355fb:	89 04 24             	mov    %eax,(%esp)
 85355fe:	e8 9e b3 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8535603:	84 c0                	test   %al,%al
 8535605:	0f 84 b8 00 00 00    	je     85356c3 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x37f>
 853560b:	8b 45 08             	mov    0x8(%ebp),%eax
 853560e:	c6 80 c0 00 00 00 00 	movb   $0x0,0xc0(%eax)
 8535615:	8b 45 08             	mov    0x8(%ebp),%eax
 8535618:	c6 80 c1 00 00 00 00 	movb   $0x0,0xc1(%eax)
 853561f:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8535626:	e9 81 00 00 00       	jmp    85356ac <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x368>
 853562b:	8d 45 b7             	lea    -0x49(%ebp),%eax
 853562e:	89 04 24             	mov    %eax,(%esp)
 8535631:	e8 45 6d 38 00       	call   88bc37b <_Z7ScanIntPb>
 8535636:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8535639:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 853563d:	83 f0 01             	xor    $0x1,%eax
 8535640:	84 c0                	test   %al,%al
 8535642:	74 0a                	je     853564e <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x30a>
 8535644:	bb 3f 03 00 00       	mov    $0x33f,%ebx
 8535649:	e9 c4 00 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 853564e:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8535651:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8535654:	89 04 24             	mov    %eax,(%esp)
 8535657:	e8 1f 6d 38 00       	call   88bc37b <_Z7ScanIntPb>
 853565c:	89 c2                	mov    %eax,%edx
 853565e:	8b 45 08             	mov    0x8(%ebp),%eax
 8535661:	8d 4b 60             	lea    0x60(%ebx),%ecx
 8535664:	88 14 48             	mov    %dl,(%eax,%ecx,2)
 8535667:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 853566b:	83 f0 01             	xor    $0x1,%eax
 853566e:	84 c0                	test   %al,%al
 8535670:	74 0a                	je     853567c <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x338>
 8535672:	bb 43 03 00 00       	mov    $0x343,%ebx
 8535677:	e9 96 00 00 00       	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 853567c:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 853567f:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8535682:	89 04 24             	mov    %eax,(%esp)
 8535685:	e8 f1 6c 38 00       	call   88bc37b <_Z7ScanIntPb>
 853568a:	89 c2                	mov    %eax,%edx
 853568c:	8b 45 08             	mov    0x8(%ebp),%eax
 853568f:	8d 4b 60             	lea    0x60(%ebx),%ecx
 8535692:	88 54 48 01          	mov    %dl,0x1(%eax,%ecx,2)
 8535696:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 853569a:	83 f0 01             	xor    $0x1,%eax
 853569d:	84 c0                	test   %al,%al
 853569f:	74 07                	je     85356a8 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x364>
 85356a1:	bb 47 03 00 00       	mov    $0x347,%ebx
 85356a6:	eb 6a                	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 85356a8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85356ac:	81 7d f4 c8 00 00 00 	cmpl   $0xc8,-0xc(%ebp)
 85356b3:	0f 9e c0             	setle  %al
 85356b6:	84 c0                	test   %al,%al
 85356b8:	0f 85 6d ff ff ff    	jne    853562b <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x2e7>
 85356be:	e9 c6 fc ff ff       	jmp    8535389 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x45>
 85356c3:	bb 4b 03 00 00       	mov    $0x34b,%ebx
 85356c8:	eb 48                	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 85356ca:	90                   	nop
 85356cb:	8b 45 08             	mov    0x8(%ebp),%eax
 85356ce:	8d 90 c0 00 00 00    	lea    0xc0(%eax),%edx
 85356d4:	8b 45 08             	mov    0x8(%ebp),%eax
 85356d7:	05 54 02 00 00       	add    $0x254,%eax
 85356dc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85356e3:	00 
 85356e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85356e8:	89 04 24             	mov    %eax,(%esp)
 85356eb:	e8 7c ef ff ff       	call   853466c <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb>
 85356f0:	bb 00 00 00 00       	mov    $0x0,%ebx
 85356f5:	eb 1b                	jmp    8535712 <_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc+0x3ce>
 85356f7:	89 d3                	mov    %edx,%ebx
 85356f9:	89 c6                	mov    %eax,%esi
 85356fb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85356fe:	89 04 24             	mov    %eax,(%esp)
 8535701:	e8 da 24 1d 00       	call   8707be0 <_ZNSsD1Ev>
 8535706:	89 f0                	mov    %esi,%eax
 8535708:	89 da                	mov    %ebx,%edx
 853570a:	89 04 24             	mov    %eax,(%esp)
 853570d:	e8 3e e0 5a 00       	call   8ae3750 <_Unwind_Resume>
 8535712:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8535715:	89 04 24             	mov    %eax,(%esp)
 8535718:	e8 c3 24 1d 00       	call   8707be0 <_ZNSsD1Ev>
 853571d:	89 d8                	mov    %ebx,%eax
 853571f:	83 ec 80             	sub    $0xffffff80,%esp
 8535722:	5b                   	pop    %ebx
 8535723:	5e                   	pop    %esi
 8535724:	5d                   	pop    %ebp
 8535725:	c3                   	ret

```

```c
// WongWork::CMonsterDrop_Hell::loadScript @ 0x8535344

/* WongWork::CMonsterDrop_Hell::loadScript(char const*) */

undefined4 __thiscall WongWork::CMonsterDrop_Hell::loadScript(CMonsterDrop_Hell *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CMonsterDrop_Hell CVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  bool local_4d;
  string local_4c;
  undefined4 local_48 [7];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_4c);
    local_2c = 0;
    local_4d = false;
    do {
      while( true ) {
        while( true ) {
                    /* try { // try from 08535397 to 085356ef has its CatchHandler @ 085356f7 */
          cVar2 = ScanType((string *)&local_4c,true);
          if (cVar2 != '\x01') {
            CItemGenRateTable::generateTable
                      ((CItemGenRateTable *)(this + 0x254),(stGenItemRange_t *)(this + 0xc0),true);
            uVar7 = 0;
            goto LAB_08535712;
          }
          bVar3 = std::operator==(&local_4c,"[basis of rarity dicision]");
          if (!bVar3) break;
          local_28 = ScanInt(&local_4d);
          if (local_4d != true) {
            uVar7 = 0x311;
            goto LAB_08535712;
          }
          for (local_24 = 1; local_24 < local_28 + 1; local_24 = local_24 + 1) {
            for (local_20 = 0; iVar1 = local_20, iVar6 = local_24, local_20 < 6;
                local_20 = local_20 + 1) {
              uVar7 = ScanInt(&local_4d);
              *(undefined4 *)(this + (iVar6 * 6 + iVar1) * 4 + 0x30) = uVar7;
              if (local_4d != true) {
                uVar7 = 0x319;
                goto LAB_08535712;
              }
            }
          }
        }
        bVar3 = std::operator==(&local_4c,"[drop prob count]");
        if (bVar3) break;
        bVar3 = std::operator==(&local_4c,"[dungeon difficulty drop prob]");
        if (bVar3) {
          local_1c = 0;
          while (uVar5 = std::
                         vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                         ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                                 *)(this + 0x18)), local_1c < uVar5) {
            local_18 = (undefined4 *)
                       std::
                       vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                       ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                                     *)(this + 0x18),local_1c);
            uVar7 = ScanInt(&local_4d);
            *local_18 = uVar7;
            if (local_4d != true) {
              uVar7 = 0x328;
              goto LAB_08535712;
            }
            uVar7 = ScanInt(&local_4d);
            local_18[1] = uVar7;
            if (local_4d != true) {
              uVar7 = 0x32a;
              goto LAB_08535712;
            }
            for (local_14 = 0; iVar6 = local_14, local_14 < 5; local_14 = local_14 + 1) {
              uVar7 = ScanInt(&local_4d);
              local_18[iVar6 + 2] = uVar7;
              if (local_4d != true) {
                uVar7 = 0x332;
                goto LAB_08535712;
              }
            }
            local_1c = local_1c + 1;
          }
        }
        else {
          bVar3 = std::operator==(&local_4c,"[item drop ref table]");
          if (!bVar3) {
            uVar7 = 0x34b;
            goto LAB_08535712;
          }
          this[0xc0] = (CMonsterDrop_Hell)0x0;
          this[0xc1] = (CMonsterDrop_Hell)0x0;
          for (local_10 = 1; local_10 < 0xc9; local_10 = local_10 + 1) {
            iVar6 = ScanInt(&local_4d);
            local_2c = iVar6;
            if (local_4d != true) {
              uVar7 = 0x33f;
              goto LAB_08535712;
            }
            CVar4 = (CMonsterDrop_Hell)ScanInt(&local_4d);
            iVar1 = local_2c;
            this[(iVar6 + 0x60) * 2] = CVar4;
            if (local_4d != true) {
              uVar7 = 0x343;
              goto LAB_08535712;
            }
            CVar4 = (CMonsterDrop_Hell)ScanInt(&local_4d);
            this[(iVar1 + 0x60) * 2 + 1] = CVar4;
            if (local_4d != true) {
              uVar7 = 0x347;
              goto LAB_08535712;
            }
          }
        }
      }
      uVar5 = 0;
      do {
        *(undefined4 *)((int)local_48 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x1c);
      uVar7 = ScanInt(&local_4d);
      std::
      vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
      ::resize(this + 0x18,uVar7,local_48[0],local_48[1],local_48[2],local_48[3],local_48[4],
               local_48[5],local_48[6]);
    } while (local_4d == true);
    uVar7 = 800;
LAB_08535712:
    std::string::~string((string *)&local_4c);
  }
  else {
    uVar7 = 0x302;
  }
  return uVar7;
}

```

---

## setDropRatio

```asm
// === 08535948 WongWork::CMonsterDrop_Hell::setDropRatio  [0x08535948-0x85359e7] ===
 8535948:	55                   	push   %ebp
 8535949:	89 e5                	mov    %esp,%ebp
 853594b:	53                   	push   %ebx
 853594c:	83 ec 34             	sub    $0x34,%esp
 853594f:	8b 45 08             	mov    0x8(%ebp),%eax
 8535952:	8d 50 18             	lea    0x18(%eax),%edx
 8535955:	8b 45 08             	mov    0x8(%ebp),%eax
 8535958:	83 c0 24             	add    $0x24,%eax
 853595b:	89 54 24 04          	mov    %edx,0x4(%esp)
 853595f:	89 04 24             	mov    %eax,(%esp)
 8535962:	e8 5b 57 00 00       	call   853b0c2 <_ZNSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EEaSERKS4_>
 8535967:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 853596e:	eb 59                	jmp    85359c9 <_ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf+0x81>
 8535970:	8b 45 08             	mov    0x8(%ebp),%eax
 8535973:	8d 50 24             	lea    0x24(%eax),%edx
 8535976:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8535979:	89 44 24 04          	mov    %eax,0x4(%esp)
 853597d:	89 14 24             	mov    %edx,(%esp)
 8535980:	e8 1b 57 00 00       	call   853b0a0 <_ZNSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EEixEj>
 8535985:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8535988:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 853598f:	eb 29                	jmp    85359ba <_ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf+0x72>
 8535991:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8535994:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8535997:	8b 45 f0             	mov    -0x10(%ebp),%eax
 853599a:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 853599e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85359a1:	db 45 e4             	fildl  -0x1c(%ebp)
 85359a4:	d8 4d 0c             	fmuls  0xc(%ebp)
 85359a7:	d9 1c 24             	fstps  (%esp)
 85359aa:	e8 36 52 00 00       	call   853abe5 <_Z10roundFloatf>
 85359af:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85359b2:	89 44 9a 08          	mov    %eax,0x8(%edx,%ebx,4)
 85359b6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85359ba:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 85359be:	0f 9e c0             	setle  %al
 85359c1:	84 c0                	test   %al,%al
 85359c3:	75 cc                	jne    8535991 <_ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf+0x49>
 85359c5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85359c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85359cc:	83 c0 24             	add    $0x24,%eax
 85359cf:	89 04 24             	mov    %eax,(%esp)
 85359d2:	e8 a7 56 00 00       	call   853b07e <_ZNKSt6vectorIN8WongWork17CMonsterDrop_Hell15stGenItemProb_tESaIS2_EE4sizeEv>
 85359d7:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85359da:	0f 97 c0             	seta   %al
 85359dd:	84 c0                	test   %al,%al
 85359df:	75 8f                	jne    8535970 <_ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf+0x28>
 85359e1:	83 c4 34             	add    $0x34,%esp
 85359e4:	5b                   	pop    %ebx
 85359e5:	5d                   	pop    %ebp
 85359e6:	c3                   	ret
 85359e7:	90                   	nop

```

```c
// WongWork::CMonsterDrop_Hell::setDropRatio @ 0x8535948

/* WongWork::CMonsterDrop_Hell::setDropRatio(float) */

void __thiscall WongWork::CMonsterDrop_Hell::setDropRatio(CMonsterDrop_Hell *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_18;
  int local_10;
  
  std::
  vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
  ::operator=((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
               *)(this + 0x24),(vector *)(this + 0x18));
  local_18 = 0;
  while( true ) {
    uVar3 = std::
            vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
            ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                    *)(this + 0x24));
    if (uVar3 <= local_18) break;
    iVar1 = std::
            vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
            ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                          *)(this + 0x24),local_18);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      uVar2 = roundFloat((float)*(int *)(iVar1 + 8 + local_10 * 4) * param_1);
      *(undefined4 *)(iVar1 + 8 + local_10 * 4) = uVar2;
    }
    local_18 = local_18 + 1;
  }
  return;
}

```

