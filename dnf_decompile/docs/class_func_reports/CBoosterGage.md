# CBoosterGage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 17

---

## AddAvatarItem

```asm
// === 080dcbd6 CBoosterGage::AddAvatarItem  [0x080dcbd6-0x80dcd8b] ===
 80dcbd6:	55                   	push   %ebp
 80dcbd7:	89 e5                	mov    %esp,%ebp
 80dcbd9:	56                   	push   %esi
 80dcbda:	53                   	push   %ebx
 80dcbdb:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 80dcbe1:	8b 5d 10             	mov    0x10(%ebp),%ebx
 80dcbe4:	8b 4d 20             	mov    0x20(%ebp),%ecx
 80dcbe7:	8b 55 24             	mov    0x24(%ebp),%edx
 80dcbea:	8b 45 28             	mov    0x28(%ebp),%eax
 80dcbed:	88 5d 94             	mov    %bl,-0x6c(%ebp)
 80dcbf0:	88 4d 90             	mov    %cl,-0x70(%ebp)
 80dcbf3:	88 55 8c             	mov    %dl,-0x74(%ebp)
 80dcbf6:	88 45 88             	mov    %al,-0x78(%ebp)
 80dcbf9:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 80dcc00:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 80dcc07:	80 7d 94 00          	cmpb   $0x0,-0x6c(%ebp)
 80dcc0b:	74 19                	je     80dcc26 <_ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi+0x50>
 80dcc0d:	e8 89 f5 fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80dcc12:	0f b6 80 7e 87 00 00 	movzbl 0x877e(%eax),%eax
 80dcc19:	0f b6 c0             	movzbl %al,%eax
 80dcc1c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80dcc1f:	c7 45 30 16 00 00 00 	movl   $0x16,0x30(%ebp)
 80dcc26:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80dcc2d:	e9 3c 01 00 00       	jmp    80dcd6e <_ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi+0x198>
 80dcc32:	0f b6 75 90          	movzbl -0x70(%ebp),%esi
 80dcc36:	8b 45 18             	mov    0x18(%ebp),%eax
 80dcc39:	8b 40 02             	mov    0x2(%eax),%eax
 80dcc3c:	89 c3                	mov    %eax,%ebx
 80dcc3e:	8b 45 14             	mov    0x14(%ebp),%eax
 80dcc41:	89 04 24             	mov    %eax,(%esp)
 80dcc44:	e8 45 d6 ff ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80dcc49:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 80dcc50:	00 
 80dcc51:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 80dcc58:	00 
 80dcc59:	8b 55 30             	mov    0x30(%ebp),%edx
 80dcc5c:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 80dcc60:	8b 55 2c             	mov    0x2c(%ebp),%edx
 80dcc63:	89 54 24 18          	mov    %edx,0x18(%esp)
 80dcc67:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 80dcc6e:	ff 
 80dcc6f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80dcc76:	00 
 80dcc77:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80dcc7b:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80dcc7e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dcc82:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80dcc86:	89 04 24             	mov    %eax,(%esp)
 80dcc89:	e8 10 cf 42 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 80dcc8e:	89 45 9c             	mov    %eax,-0x64(%ebp)
 80dcc91:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80dcc94:	83 f8 ff             	cmp    $0xffffffff,%eax
 80dcc97:	75 2c                	jne    80dccc5 <_ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi+0xef>
 80dcc99:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dcc9c:	89 44 24 10          	mov    %eax,0x10(%esp)
 80dcca0:	8b 45 2c             	mov    0x2c(%ebp),%eax
 80dcca3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80dcca7:	8b 45 18             	mov    0x18(%ebp),%eax
 80dccaa:	89 44 24 08          	mov    %eax,0x8(%esp)
 80dccae:	8b 45 14             	mov    0x14(%ebp),%eax
 80dccb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dccb5:	8b 45 08             	mov    0x8(%ebp),%eax
 80dccb8:	89 04 24             	mov    %eax,(%esp)
 80dccbb:	e8 16 fa ff ff       	call   80dc6d6 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci>
 80dccc0:	e9 a5 00 00 00       	jmp    80dcd6a <_ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi+0x194>
 80dccc5:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80dcccc:	e8 7f 0a fa ff       	call   807d750 <time@plt>
 80dccd1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80dccd4:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 80dccd7:	8b 45 14             	mov    0x14(%ebp),%eax
 80dccda:	89 04 24             	mov    %eax,(%esp)
 80dccdd:	e8 9c d5 ff ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 80dcce2:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 80dcce5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80dcce9:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 80dccf0:	00 
 80dccf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dccf5:	89 14 24             	mov    %edx,(%esp)
 80dccf8:	e8 1b ec 41 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 80dccfd:	83 ec 04             	sub    $0x4,%esp
 80dcd00:	8b 5d aa             	mov    -0x56(%ebp),%ebx
 80dcd03:	8b 45 14             	mov    0x14(%ebp),%eax
 80dcd06:	89 04 24             	mov    %eax,(%esp)
 80dcd09:	e8 70 d5 ff ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 80dcd0e:	89 04 24             	mov    %eax,(%esp)
 80dcd11:	e8 60 08 00 00       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 80dcd16:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80dcd19:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dcd1d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80dcd21:	89 04 24             	mov    %eax,(%esp)
 80dcd24:	e8 27 cb 21 00       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 80dcd29:	8b 55 34             	mov    0x34(%ebp),%edx
 80dcd2c:	89 02                	mov    %eax,(%edx)
 80dcd2e:	8b 45 18             	mov    0x18(%ebp),%eax
 80dcd31:	89 04 24             	mov    %eax,(%esp)
 80dcd34:	e8 a9 b4 26 00       	call   83481e2 <_ZNK10Inven_Item12GetItemSpaceEv>
 80dcd39:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80dcd3c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80dcd3f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80dcd42:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dcd46:	8d 55 9c             	lea    -0x64(%ebp),%edx
 80dcd49:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dcd4d:	89 04 24             	mov    %eax,(%esp)
 80dcd50:	e8 44 0a 00 00       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 80dcd55:	83 ec 04             	sub    $0x4,%esp
 80dcd58:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80dcd5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dcd5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dcd62:	89 04 24             	mov    %eax,(%esp)
 80dcd65:	e8 9c 08 00 00       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 80dcd6a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80dcd6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80dcd71:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80dcd74:	0f 9c c0             	setl   %al
 80dcd77:	84 c0                	test   %al,%al
 80dcd79:	0f 85 b3 fe ff ff    	jne    80dcc32 <_ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi+0x5c>
 80dcd7f:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80dcd82:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80dcd85:	83 c4 00             	add    $0x0,%esp
 80dcd88:	5b                   	pop    %ebx
 80dcd89:	5e                   	pop    %esi
 80dcd8a:	5d                   	pop    %ebp
 80dcd8b:	c3                   	ret

```

```c
// CBoosterGage::AddAvatarItem @ 0x80dcbd6

/* CBoosterGage::AddAvatarItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   >&, bool, CUser*, Inven_Item const&, int, bool, char, char, char const*, eAvatarItemAddReason,
   int&) */

int __thiscall
CBoosterGage::AddAvatarItem
          (CBoosterGage *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1
          ,char param_2,CUserCharacInfo *param_3,Inven_Item *param_4,int param_5,undefined1 param_6,
          undefined4 param_7,undefined4 param_8,char *param_9,undefined4 param_11,
          undefined4 *param_12)

{
  int iVar1;
  CInventory *pCVar2;
  CAvatarItemMgr *this_00;
  undefined4 uVar3;
  int local_68;
  undefined1 local_61 [7];
  int local_5a;
  int local_24 [2];
  undefined4 local_1c;
  uint local_18;
  int local_14;
  time_t local_10;
  
  local_68 = 0;
  local_18 = 1;
  if (param_2 != '\0') {
    iVar1 = G_CDataManager();
    local_18 = (uint)*(byte *)(iVar1 + 0x877e);
    param_11 = 0x16;
  }
  for (local_14 = 0; local_14 < (int)local_18; local_14 = local_14 + 1) {
    uVar3 = *(undefined4 *)(param_4 + 2);
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(param_3);
    local_68 = CInventory::AddAvatarItem
                         (pCVar2,uVar3,param_5,param_6,0,0xffffffff,param_9,param_11,0,0);
    if (local_68 == -1) {
      make_postar(this,(CUser *)param_3,param_4,param_9,param_5);
    }
    else {
      local_10 = time((time_t *)0x0);
      iVar1 = CUserCharacInfo::getCurCharacInvenR(param_3);
      CInventory::GetInvenSlot((int)local_61,iVar1);
      iVar1 = local_5a;
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_3);
      this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar2);
      uVar3 = WongWork::CAvatarItemMgr::GetRemainDate(this_00,iVar1,local_10);
      *param_12 = uVar3;
      local_1c = Inven_Item::GetItemSpace(param_4);
      std::make_pair<int&,int>(local_24,&local_68);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (param_1,(pair *)local_24);
    }
  }
  return local_68;
}

```

---

## InsertCreatureItem

```asm
// === 080dcd8c CBoosterGage::InsertCreatureItem  [0x080dcd8c-0x80dcf55] ===
 80dcd8c:	55                   	push   %ebp
 80dcd8d:	89 e5                	mov    %esp,%ebp
 80dcd8f:	56                   	push   %esi
 80dcd90:	53                   	push   %ebx
 80dcd91:	83 c4 80             	add    $0xffffff80,%esp
 80dcd94:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80dcd97:	8b 55 20             	mov    0x20(%ebp),%edx
 80dcd9a:	8b 45 24             	mov    0x24(%ebp),%eax
 80dcd9d:	88 4d d4             	mov    %cl,-0x2c(%ebp)
 80dcda0:	88 55 d0             	mov    %dl,-0x30(%ebp)
 80dcda3:	88 45 cc             	mov    %al,-0x34(%ebp)
 80dcda6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80dcdad:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 80dcdb4:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 80dcdb8:	74 19                	je     80dcdd3 <_ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc+0x47>
 80dcdba:	e8 dc f3 fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80dcdbf:	0f b6 80 7e 87 00 00 	movzbl 0x877e(%eax),%eax
 80dcdc6:	0f b6 c0             	movzbl %al,%eax
 80dcdc9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80dcdcc:	c7 45 1c 3a 00 00 00 	movl   $0x3a,0x1c(%ebp)
 80dcdd3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80dcdda:	e9 58 01 00 00       	jmp    80dcf37 <_ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc+0x1ab>
 80dcddf:	0f b6 75 cc          	movzbl -0x34(%ebp),%esi
 80dcde3:	0f b6 5d d0          	movzbl -0x30(%ebp),%ebx
 80dcde7:	8b 45 14             	mov    0x14(%ebp),%eax
 80dcdea:	89 04 24             	mov    %eax,(%esp)
 80dcded:	e8 9c d4 ff ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80dcdf2:	89 c2                	mov    %eax,%edx
 80dcdf4:	89 74 24 4c          	mov    %esi,0x4c(%esp)
 80dcdf8:	89 5c 24 48          	mov    %ebx,0x48(%esp)
 80dcdfc:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dcdff:	89 44 24 44          	mov    %eax,0x44(%esp)
 80dce03:	8b 45 18             	mov    0x18(%ebp),%eax
 80dce06:	8b 08                	mov    (%eax),%ecx
 80dce08:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80dce0c:	8b 48 04             	mov    0x4(%eax),%ecx
 80dce0f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80dce13:	8b 48 08             	mov    0x8(%eax),%ecx
 80dce16:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80dce1a:	8b 48 0c             	mov    0xc(%eax),%ecx
 80dce1d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80dce21:	8b 48 10             	mov    0x10(%eax),%ecx
 80dce24:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 80dce28:	8b 48 14             	mov    0x14(%eax),%ecx
 80dce2b:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 80dce2f:	8b 48 18             	mov    0x18(%eax),%ecx
 80dce32:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 80dce36:	8b 48 1c             	mov    0x1c(%eax),%ecx
 80dce39:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 80dce3d:	8b 48 20             	mov    0x20(%eax),%ecx
 80dce40:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 80dce44:	8b 48 24             	mov    0x24(%eax),%ecx
 80dce47:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 80dce4b:	8b 48 28             	mov    0x28(%eax),%ecx
 80dce4e:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 80dce52:	8b 48 2c             	mov    0x2c(%eax),%ecx
 80dce55:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 80dce59:	8b 48 30             	mov    0x30(%eax),%ecx
 80dce5c:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 80dce60:	8b 48 34             	mov    0x34(%eax),%ecx
 80dce63:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 80dce67:	8b 48 38             	mov    0x38(%eax),%ecx
 80dce6a:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 80dce6e:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 80dce72:	88 44 24 40          	mov    %al,0x40(%esp)
 80dce76:	89 14 24             	mov    %edx,(%esp)
 80dce79:	e8 08 5f 42 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 80dce7e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80dce81:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dce84:	85 c0                	test   %eax,%eax
 80dce86:	79 31                	jns    80dceb9 <_ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc+0x12d>
 80dce88:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 80dce8f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80dce96:	00 
 80dce97:	8b 45 30             	mov    0x30(%ebp),%eax
 80dce9a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80dce9e:	8b 45 18             	mov    0x18(%ebp),%eax
 80dcea1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80dcea5:	8b 45 14             	mov    0x14(%ebp),%eax
 80dcea8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dceac:	8b 45 08             	mov    0x8(%ebp),%eax
 80dceaf:	89 04 24             	mov    %eax,(%esp)
 80dceb2:	e8 1f f8 ff ff       	call   80dc6d6 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci>
 80dceb7:	eb 7a                	jmp    80dcf33 <_ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc+0x1a7>
 80dceb9:	8b 75 1c             	mov    0x1c(%ebp),%esi
 80dcebc:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 80dcebf:	8b 45 14             	mov    0x14(%ebp),%eax
 80dcec2:	89 04 24             	mov    %eax,(%esp)
 80dcec5:	e8 c4 d3 ff ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80dceca:	89 04 24             	mov    %eax,(%esp)
 80dcecd:	e8 96 06 00 00       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 80dced2:	8b 55 2c             	mov    0x2c(%ebp),%edx
 80dced5:	89 54 24 14          	mov    %edx,0x14(%esp)
 80dced9:	8b 55 28             	mov    0x28(%ebp),%edx
 80dcedc:	89 54 24 10          	mov    %edx,0x10(%esp)
 80dcee0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80dcee4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80dcee8:	8b 55 18             	mov    0x18(%ebp),%edx
 80dceeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dceef:	89 04 24             	mov    %eax,(%esp)
 80dcef2:	e8 0d e3 25 00       	call   833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>
 80dcef7:	8b 45 18             	mov    0x18(%ebp),%eax
 80dcefa:	89 04 24             	mov    %eax,(%esp)
 80dcefd:	e8 e0 b2 26 00       	call   83481e2 <_ZNK10Inven_Item12GetItemSpaceEv>
 80dcf02:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80dcf05:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dcf08:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80dcf0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dcf0f:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80dcf12:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dcf16:	89 04 24             	mov    %eax,(%esp)
 80dcf19:	e8 7b 08 00 00       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 80dcf1e:	83 ec 04             	sub    $0x4,%esp
 80dcf21:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dcf24:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dcf28:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dcf2b:	89 04 24             	mov    %eax,(%esp)
 80dcf2e:	e8 d3 06 00 00       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 80dcf33:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80dcf37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dcf3a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80dcf3d:	0f 9c c0             	setl   %al
 80dcf40:	84 c0                	test   %al,%al
 80dcf42:	0f 85 97 fe ff ff    	jne    80dcddf <_ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc+0x53>
 80dcf48:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dcf4b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80dcf4e:	83 c4 00             	add    $0x0,%esp
 80dcf51:	5b                   	pop    %ebx
 80dcf52:	5e                   	pop    %esi
 80dcf53:	5d                   	pop    %ebp
 80dcf54:	c3                   	ret
 80dcf55:	90                   	nop

```

```c
// CBoosterGage::InsertCreatureItem @ 0x80dcd8c

/* CBoosterGage::InsertCreatureItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool, bool, int, int, char const*) */

int __thiscall
CBoosterGage::InsertCreatureItem
          (CBoosterGage *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1
          ,char param_2,CUserCharacInfo *param_3,Inven_Item *param_4,int param_6,undefined1 param_7,
          undefined1 param_8,int param_9,int param_10,char *param_11)

{
  int iVar1;
  undefined4 uVar2;
  CInventory *this_00;
  CCreatureMgr *this_01;
  int local_24;
  int local_20 [2];
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  local_24 = 0;
  local_14 = 1;
  if (param_2 != '\0') {
    iVar1 = G_CDataManager();
    local_14 = (uint)*(byte *)(iVar1 + 0x877e);
    param_6 = 0x3a;
  }
  for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
    uVar2 = CUserCharacInfo::getCurCharacInvenW(param_3);
    iVar1 = CInventory::insertItemIntoInventory
                      (uVar2,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4),
                       *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                       *(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                       *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                       *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                       *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                       *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                       *(undefined4 *)(param_4 + 0x38),param_4[0x3c],param_6,param_7,param_8);
    if (iVar1 < 0) {
      local_24 = -1;
      make_postar(this,(CUser *)param_3,param_4,param_11,0);
    }
    else {
      local_24 = iVar1;
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(param_3);
      this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
      user_creature::CCreatureMgr::InsertCreatureItem
                (this_01,param_4,iVar1,param_6,param_9,param_10);
      local_18 = Inven_Item::GetItemSpace(param_4);
      std::make_pair<int&,int>(local_20,&local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (param_1,(pair *)local_20);
    }
  }
  return local_24;
}

```

---

## ResetDaily

```asm
// === 080dd322 CBoosterGage::ResetDaily  [0x080dd322-0x80dd33f] ===
 80dd322:	55                   	push   %ebp
 80dd323:	89 e5                	mov    %esp,%ebp
 80dd325:	83 ec 18             	sub    $0x18,%esp
 80dd328:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd32b:	89 04 24             	mov    %eax,(%esp)
 80dd32e:	e8 91 b8 fe ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 80dd333:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd336:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80dd33d:	c9                   	leave
 80dd33e:	c3                   	ret
 80dd33f:	90                   	nop

```

```c
// CBoosterGage::ResetDaily @ 0x80dd322

/* CBoosterGage::ResetDaily() */

void __thiscall CBoosterGage::ResetDaily(CBoosterGage *this)

{
  charac_expand::CData::alter((CData *)this);
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## _reset

```asm
// === 080dd468 CBoosterGage::_reset  [0x080dd468-0x80dd476] ===
 80dd468:	55                   	push   %ebp
 80dd469:	89 e5                	mov    %esp,%ebp
 80dd46b:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd46e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80dd475:	5d                   	pop    %ebp
 80dd476:	c3                   	ret

```

```c
// CBoosterGage::_reset @ 0x80dd468

/* CBoosterGage::_reset() */

void __thiscall CBoosterGage::_reset(CBoosterGage *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## _saveData

```asm
// === 080dd340 CBoosterGage::_saveData  [0x080dd340-0x80dd467] ===
 80dd340:	55                   	push   %ebp
 80dd341:	89 e5                	mov    %esp,%ebp
 80dd343:	56                   	push   %esi
 80dd344:	53                   	push   %ebx
 80dd345:	83 ec 20             	sub    $0x20,%esp
 80dd348:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80dd34d:	c7 44 24 08 93 01 00 	movl   $0x193,0x8(%esp)
 80dd354:	00 
 80dd355:	c7 44 24 04 3d a3 b2 	movl   $0x8b2a33d,0x4(%esp)
 80dd35c:	08 
 80dd35d:	89 04 24             	mov    %eax,(%esp)
 80dd360:	e8 21 27 1b 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80dd365:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80dd36c:	00 
 80dd36d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dd371:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80dd374:	89 04 24             	mov    %eax,(%esp)
 80dd377:	e8 aa b8 fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80dd37c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80dd37f:	89 04 24             	mov    %eax,(%esp)
 80dd382:	e8 bf b8 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80dd387:	c7 44 24 04 d8 02 00 	movl   $0x2d8,0x4(%esp)
 80dd38e:	00 
 80dd38f:	89 04 24             	mov    %eax,(%esp)
 80dd392:	e8 bf b8 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80dd397:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd39a:	89 04 24             	mov    %eax,(%esp)
 80dd39d:	e8 f4 b8 fe ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 80dd3a2:	89 c3                	mov    %eax,%ebx
 80dd3a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80dd3a7:	89 04 24             	mov    %eax,(%esp)
 80dd3aa:	e8 97 b8 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80dd3af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80dd3b3:	89 04 24             	mov    %eax,(%esp)
 80dd3b6:	e8 9b b8 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80dd3bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80dd3be:	89 04 24             	mov    %eax,(%esp)
 80dd3c1:	e8 88 b8 fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80dd3c6:	89 04 24             	mov    %eax,(%esp)
 80dd3c9:	e8 0e 04 00 00       	call   80dd7dc <_ZN12CStreamGuard11GetInBufferI21SIG_BOOSTER_GAGE_DATAEEPT_v>
 80dd3ce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80dd3d1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80dd3d5:	75 07                	jne    80dd3de <_ZN12CBoosterGage9_saveDataEP5CUser+0x9e>
 80dd3d7:	bb 00 00 00 00       	mov    $0x0,%ebx
 80dd3dc:	eb 75                	jmp    80dd453 <_ZN12CBoosterGage9_saveDataEP5CUser+0x113>
 80dd3de:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 80dd3e5:	00 
 80dd3e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80dd3ed:	00 
 80dd3ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dd3f1:	89 04 24             	mov    %eax,(%esp)
 80dd3f4:	e8 c7 08 fa ff       	call   807dcc0 <memset@plt>
 80dd3f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd3fc:	89 04 24             	mov    %eax,(%esp)
 80dd3ff:	e8 6a cf ff ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80dd404:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80dd407:	89 02                	mov    %eax,(%edx)
 80dd409:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd40c:	8b 50 08             	mov    0x8(%eax),%edx
 80dd40f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dd412:	89 50 04             	mov    %edx,0x4(%eax)
 80dd415:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80dd41a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80dd41d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dd421:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80dd428:	00 
 80dd429:	89 04 24             	mov    %eax,(%esp)
 80dd42c:	e8 ad 3b 49 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80dd431:	bb 01 00 00 00       	mov    $0x1,%ebx
 80dd436:	eb 1b                	jmp    80dd453 <_ZN12CBoosterGage9_saveDataEP5CUser+0x113>
 80dd438:	89 d3                	mov    %edx,%ebx
 80dd43a:	89 c6                	mov    %eax,%esi
 80dd43c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80dd43f:	89 04 24             	mov    %eax,(%esp)
 80dd442:	e8 8b f4 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80dd447:	89 f0                	mov    %esi,%eax
 80dd449:	89 da                	mov    %ebx,%edx
 80dd44b:	89 04 24             	mov    %eax,(%esp)
 80dd44e:	e8 fd 62 a0 00       	call   8ae3750 <_Unwind_Resume>
 80dd453:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80dd456:	89 04 24             	mov    %eax,(%esp)
 80dd459:	e8 74 f4 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80dd45e:	89 d8                	mov    %ebx,%eax
 80dd460:	83 c4 20             	add    $0x20,%esp
 80dd463:	5b                   	pop    %ebx
 80dd464:	5e                   	pop    %esi
 80dd465:	5d                   	pop    %ebp
 80dd466:	c3                   	ret
 80dd467:	90                   	nop

```

```c
// CBoosterGage::_saveData @ 0x80dd340

/* CBoosterGage::_saveData(CUser*) */

bool __thiscall CBoosterGage::_saveData(CBoosterGage *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_BOOSTER_GAGE_DATA *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BoosterGage.cpp",0x193);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080dd392 to 080dd430 has its CatchHandler @ 080dd438 */
  CStreamGuard::operator<<(pCVar2,0x2d8);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BOOSTER_GAGE_DATA>(pCVar2);
  bVar5 = local_10 != (SIG_BOOSTER_GAGE_DATA *)0x0;
  if (bVar5) {
    memset(local_10,0,8);
    uVar4 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar4;
    *(undefined4 *)(local_10 + 4) = *(undefined4 *)(this + 8);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}

```

---

## cal_booster_gage

```asm
// === 080dd134 CBoosterGage::cal_booster_gage  [0x080dd134-0x80dd141] ===
 80dd134:	55                   	push   %ebp
 80dd135:	89 e5                	mov    %esp,%ebp
 80dd137:	83 ec 10             	sub    $0x10,%esp
 80dd13a:	b8 00 00 00 00       	mov    $0x0,%eax
 80dd13f:	c9                   	leave
 80dd140:	c3                   	ret
 80dd141:	90                   	nop

```

```c
// CBoosterGage::cal_booster_gage @ 0x80dd134

/* CBoosterGage::cal_booster_gage(unsigned long, CUser*) */

undefined4 CBoosterGage::cal_booster_gage(ulong param_1,CUser *param_2)

{
  return 0;
}

```

---

## check_max_booster_gage

```asm
// === 080dd0da CBoosterGage::check_max_booster_gage  [0x080dd0da-0x80dd133] ===
 80dd0da:	55                   	push   %ebp
 80dd0db:	89 e5                	mov    %esp,%ebp
 80dd0dd:	53                   	push   %ebx
 80dd0de:	83 ec 24             	sub    $0x24,%esp
 80dd0e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd0e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dd0e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd0eb:	89 04 24             	mov    %eax,(%esp)
 80dd0ee:	e8 a9 f5 ff ff       	call   80dc69c <_ZN12CBoosterGage17get_booster_pointEm>
 80dd0f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80dd0f6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80dd0fa:	75 07                	jne    80dd103 <_ZN12CBoosterGage22check_max_booster_gageEm+0x29>
 80dd0fc:	b8 00 00 00 00       	mov    $0x0,%eax
 80dd101:	eb 2a                	jmp    80dd12d <_ZN12CBoosterGage22check_max_booster_gageEm+0x53>
 80dd103:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd106:	8b 58 08             	mov    0x8(%eax),%ebx
 80dd109:	e8 8d f0 fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80dd10e:	0f b6 80 7c 87 00 00 	movzbl 0x877c(%eax),%eax
 80dd115:	0f b6 c0             	movzbl %al,%eax
 80dd118:	39 c3                	cmp    %eax,%ebx
 80dd11a:	0f 9d c0             	setge  %al
 80dd11d:	84 c0                	test   %al,%al
 80dd11f:	74 07                	je     80dd128 <_ZN12CBoosterGage22check_max_booster_gageEm+0x4e>
 80dd121:	b8 01 00 00 00       	mov    $0x1,%eax
 80dd126:	eb 05                	jmp    80dd12d <_ZN12CBoosterGage22check_max_booster_gageEm+0x53>
 80dd128:	b8 00 00 00 00       	mov    $0x0,%eax
 80dd12d:	83 c4 24             	add    $0x24,%esp
 80dd130:	5b                   	pop    %ebx
 80dd131:	5d                   	pop    %ebp
 80dd132:	c3                   	ret
 80dd133:	90                   	nop

```

```c
// CBoosterGage::check_max_booster_gage @ 0x80dd0da

/* CBoosterGage::check_max_booster_gage(unsigned long) */

undefined4 __thiscall CBoosterGage::check_max_booster_gage(CBoosterGage *this,ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = get_booster_point(this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(this + 8);
    iVar3 = G_CDataManager();
    if (iVar1 < (int)(uint)*(byte *)(iVar3 + 0x877c)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## getData

```asm
// === 080dd24e CBoosterGage::getData  [0x080dd24e-0x80dd283] ===
 80dd24e:	55                   	push   %ebp
 80dd24f:	89 e5                	mov    %esp,%ebp
 80dd251:	83 ec 28             	sub    $0x28,%esp
 80dd254:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd257:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80dd25a:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 80dd261:	00 
 80dd262:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80dd269:	00 
 80dd26a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dd26d:	89 04 24             	mov    %eax,(%esp)
 80dd270:	e8 4b 0a fa ff       	call   807dcc0 <memset@plt>
 80dd275:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd278:	8b 50 08             	mov    0x8(%eax),%edx
 80dd27b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dd27e:	89 50 04             	mov    %edx,0x4(%eax)
 80dd281:	c9                   	leave
 80dd282:	c3                   	ret
 80dd283:	90                   	nop

```

```c
// CBoosterGage::getData @ 0x80dd24e

/* CBoosterGage::getData(char*) const */

void __thiscall CBoosterGage::getData(CBoosterGage *this,char *param_1)

{
  memset(param_1,0,8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 8);
  return;
}

```

---

## get_booster_point

```asm
// === 080dc69c CBoosterGage::get_booster_point  [0x080dc69c-0x80dc6d5] ===
 80dc69c:	55                   	push   %ebp
 80dc69d:	89 e5                	mov    %esp,%ebp
 80dc69f:	83 ec 28             	sub    $0x28,%esp
 80dc6a2:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 80dc6a6:	e8 f0 fa fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80dc6ab:	8d 90 70 87 00 00    	lea    0x8770(%eax),%edx
 80dc6b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dc6b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dc6b8:	89 14 24             	mov    %edx,(%esp)
 80dc6bb:	e8 14 0e 00 00       	call   80dd4d4 <_ZN15BoosterGageData15getBoosterPointEm>
 80dc6c0:	88 45 f7             	mov    %al,-0x9(%ebp)
 80dc6c3:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 80dc6c7:	75 07                	jne    80dc6d0 <_ZN12CBoosterGage17get_booster_pointEm+0x34>
 80dc6c9:	b8 00 00 00 00       	mov    $0x0,%eax
 80dc6ce:	eb 04                	jmp    80dc6d4 <_ZN12CBoosterGage17get_booster_pointEm+0x38>
 80dc6d0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 80dc6d4:	c9                   	leave
 80dc6d5:	c3                   	ret

```

```c
// CBoosterGage::get_booster_point @ 0x80dc69c

/* CBoosterGage::get_booster_point(unsigned long) */

char __thiscall CBoosterGage::get_booster_point(CBoosterGage *this,ulong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = G_CDataManager();
  cVar1 = BoosterGageData::getBoosterPoint((BoosterGageData *)(iVar2 + 0x8770),param_1);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  return cVar1;
}

```

---

## inc_total_gage

```asm
// === 080dc640 CBoosterGage::inc_total_gage  [0x080dc640-0x80dc663] ===
 80dc640:	55                   	push   %ebp
 80dc641:	89 e5                	mov    %esp,%ebp
 80dc643:	83 ec 18             	sub    $0x18,%esp
 80dc646:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc649:	89 04 24             	mov    %eax,(%esp)
 80dc64c:	e8 73 c5 fe ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 80dc651:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc654:	8b 40 08             	mov    0x8(%eax),%eax
 80dc657:	89 c2                	mov    %eax,%edx
 80dc659:	03 55 0c             	add    0xc(%ebp),%edx
 80dc65c:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc65f:	89 50 08             	mov    %edx,0x8(%eax)
 80dc662:	c9                   	leave
 80dc663:	c3                   	ret

```

```c
// CBoosterGage::inc_total_gage @ 0x80dc640

/* CBoosterGage::inc_total_gage(int) */

void __thiscall CBoosterGage::inc_total_gage(CBoosterGage *this,int param_1)

{
  charac_expand::CData::alter((CData *)this);
  *(int *)(this + 8) = *(int *)(this + 8) + param_1;
  return;
}

```

---

## insertItemIntoInventory

```asm
// === 080dcf56 CBoosterGage::insertItemIntoInventory  [0x080dcf56-0x80dd0d9] ===
 80dcf56:	55                   	push   %ebp
 80dcf57:	89 e5                	mov    %esp,%ebp
 80dcf59:	53                   	push   %ebx
 80dcf5a:	81 ec 84 00 00 00    	sub    $0x84,%esp
 80dcf60:	8b 55 10             	mov    0x10(%ebp),%edx
 80dcf63:	8b 45 20             	mov    0x20(%ebp),%eax
 80dcf66:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 80dcf69:	88 45 d0             	mov    %al,-0x30(%ebp)
 80dcf6c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80dcf73:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 80dcf7a:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 80dcf7e:	74 19                	je     80dcf99 <_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb+0x43>
 80dcf80:	e8 16 f2 fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80dcf85:	0f b6 80 7e 87 00 00 	movzbl 0x877e(%eax),%eax
 80dcf8c:	0f b6 c0             	movzbl %al,%eax
 80dcf8f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80dcf92:	c7 45 1c 3a 00 00 00 	movl   $0x3a,0x1c(%ebp)
 80dcf99:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80dcfa0:	e9 1b 01 00 00       	jmp    80dd0c0 <_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb+0x16a>
 80dcfa5:	0f b6 5d d0          	movzbl -0x30(%ebp),%ebx
 80dcfa9:	8b 45 14             	mov    0x14(%ebp),%eax
 80dcfac:	89 04 24             	mov    %eax,(%esp)
 80dcfaf:	e8 da d2 ff ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80dcfb4:	89 c2                	mov    %eax,%edx
 80dcfb6:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 80dcfbd:	00 
 80dcfbe:	89 5c 24 48          	mov    %ebx,0x48(%esp)
 80dcfc2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dcfc5:	89 44 24 44          	mov    %eax,0x44(%esp)
 80dcfc9:	8b 45 18             	mov    0x18(%ebp),%eax
 80dcfcc:	8b 08                	mov    (%eax),%ecx
 80dcfce:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80dcfd2:	8b 48 04             	mov    0x4(%eax),%ecx
 80dcfd5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80dcfd9:	8b 48 08             	mov    0x8(%eax),%ecx
 80dcfdc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80dcfe0:	8b 48 0c             	mov    0xc(%eax),%ecx
 80dcfe3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80dcfe7:	8b 48 10             	mov    0x10(%eax),%ecx
 80dcfea:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 80dcfee:	8b 48 14             	mov    0x14(%eax),%ecx
 80dcff1:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 80dcff5:	8b 48 18             	mov    0x18(%eax),%ecx
 80dcff8:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 80dcffc:	8b 48 1c             	mov    0x1c(%eax),%ecx
 80dcfff:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 80dd003:	8b 48 20             	mov    0x20(%eax),%ecx
 80dd006:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 80dd00a:	8b 48 24             	mov    0x24(%eax),%ecx
 80dd00d:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 80dd011:	8b 48 28             	mov    0x28(%eax),%ecx
 80dd014:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 80dd018:	8b 48 2c             	mov    0x2c(%eax),%ecx
 80dd01b:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 80dd01f:	8b 48 30             	mov    0x30(%eax),%ecx
 80dd022:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 80dd026:	8b 48 34             	mov    0x34(%eax),%ecx
 80dd029:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 80dd02d:	8b 48 38             	mov    0x38(%eax),%ecx
 80dd030:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 80dd034:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 80dd038:	88 44 24 40          	mov    %al,0x40(%esp)
 80dd03c:	89 14 24             	mov    %edx,(%esp)
 80dd03f:	e8 42 5d 42 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 80dd044:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80dd047:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dd04a:	85 c0                	test   %eax,%eax
 80dd04c:	79 32                	jns    80dd080 <_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb+0x12a>
 80dd04e:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 80dd055:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80dd05c:	00 
 80dd05d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80dd064:	00 
 80dd065:	8b 45 18             	mov    0x18(%ebp),%eax
 80dd068:	89 44 24 08          	mov    %eax,0x8(%esp)
 80dd06c:	8b 45 14             	mov    0x14(%ebp),%eax
 80dd06f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dd073:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd076:	89 04 24             	mov    %eax,(%esp)
 80dd079:	e8 58 f6 ff ff       	call   80dc6d6 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci>
 80dd07e:	eb 3c                	jmp    80dd0bc <_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb+0x166>
 80dd080:	8b 45 18             	mov    0x18(%ebp),%eax
 80dd083:	89 04 24             	mov    %eax,(%esp)
 80dd086:	e8 57 b1 26 00       	call   83481e2 <_ZNK10Inven_Item12GetItemSpaceEv>
 80dd08b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80dd08e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd091:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80dd094:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dd098:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80dd09b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dd09f:	89 04 24             	mov    %eax,(%esp)
 80dd0a2:	e8 f2 06 00 00       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 80dd0a7:	83 ec 04             	sub    $0x4,%esp
 80dd0aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd0ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dd0b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd0b4:	89 04 24             	mov    %eax,(%esp)
 80dd0b7:	e8 4a 05 00 00       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 80dd0bc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80dd0c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dd0c3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80dd0c6:	0f 9c c0             	setl   %al
 80dd0c9:	84 c0                	test   %al,%al
 80dd0cb:	0f 85 d4 fe ff ff    	jne    80dcfa5 <_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb+0x4f>
 80dd0d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dd0d4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80dd0d7:	c9                   	leave
 80dd0d8:	c3                   	ret
 80dd0d9:	90                   	nop

```

```c
// CBoosterGage::insertItemIntoInventory @ 0x80dcf56

/* CBoosterGage::insertItemIntoInventory(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool)
    */

int __thiscall
CBoosterGage::insertItemIntoInventory
          (CBoosterGage *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1
          ,char param_2,CUserCharacInfo *param_3,Inven_Item *param_4,undefined4 param_6,
          undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  int local_20 [2];
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  local_24 = 0;
  local_14 = 1;
  if (param_2 != '\0') {
    iVar1 = G_CDataManager();
    local_14 = (uint)*(byte *)(iVar1 + 0x877e);
    param_6 = 0x3a;
  }
  for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
    uVar2 = CUserCharacInfo::getCurCharacInvenW(param_3);
    local_24 = CInventory::insertItemIntoInventory
                         (uVar2,*(undefined4 *)param_4,*(undefined4 *)(param_4 + 4),
                          *(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc),
                          *(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                          *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                          *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                          *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                          *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                          *(undefined4 *)(param_4 + 0x38),param_4[0x3c],param_6,param_7,1);
    if (local_24 < 0) {
      local_24 = -1;
      make_postar(this,(CUser *)param_3,param_4,(char *)0x0,0);
    }
    else {
      local_18 = Inven_Item::GetItemSpace(param_4);
      std::make_pair<int&,int>(local_20,&local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (param_1,(pair *)local_20);
    }
  }
  return local_24;
}

```

---

## loadData

```asm
// === 080dd284 CBoosterGage::loadData  [0x080dd284-0x80dd321] ===
 80dd284:	55                   	push   %ebp
 80dd285:	89 e5                	mov    %esp,%ebp
 80dd287:	56                   	push   %esi
 80dd288:	53                   	push   %ebx
 80dd289:	83 ec 20             	sub    $0x20,%esp
 80dd28c:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd28f:	8b 00                	mov    (%eax),%eax
 80dd291:	83 c0 1c             	add    $0x1c,%eax
 80dd294:	8b 10                	mov    (%eax),%edx
 80dd296:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd299:	89 04 24             	mov    %eax,(%esp)
 80dd29c:	ff d2                	call   *%edx
 80dd29e:	8b 45 10             	mov    0x10(%ebp),%eax
 80dd2a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80dd2a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dd2a7:	8b 50 04             	mov    0x4(%eax),%edx
 80dd2aa:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd2ad:	89 50 08             	mov    %edx,0x8(%eax)
 80dd2b0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 80dd2b7:	e8 e2 e9 fe ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 80dd2bc:	89 c6                	mov    %eax,%esi
 80dd2be:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd2c1:	89 04 24             	mov    %eax,(%esp)
 80dd2c4:	e8 db 02 00 00       	call   80dd5a4 <_ZN5CUser22GetAccountLastPlayTimeEv>
 80dd2c9:	89 c3                	mov    %eax,%ebx
 80dd2cb:	e8 b1 ee fe ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80dd2d0:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 80dd2d6:	89 74 24 08          	mov    %esi,0x8(%esp)
 80dd2da:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80dd2de:	89 04 24             	mov    %eax,(%esp)
 80dd2e1:	e8 c2 ed 38 00       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 80dd2e6:	84 c0                	test   %al,%al
 80dd2e8:	74 2c                	je     80dd316 <_ZN12CBoosterGage8loadDataEP5CUserPc+0x92>
 80dd2ea:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd2ed:	8b 00                	mov    (%eax),%eax
 80dd2ef:	83 c0 0c             	add    $0xc,%eax
 80dd2f2:	8b 10                	mov    (%eax),%edx
 80dd2f4:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd2f7:	89 04 24             	mov    %eax,(%esp)
 80dd2fa:	ff d2                	call   *%edx
 80dd2fc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80dd303:	00 
 80dd304:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd307:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dd30b:	8b 45 08             	mov    0x8(%ebp),%eax
 80dd30e:	89 04 24             	mov    %eax,(%esp)
 80dd311:	e8 30 ff ff ff       	call   80dd246 <_ZN12CBoosterGage9send_dataEP5CUseri>
 80dd316:	b8 01 00 00 00       	mov    $0x1,%eax
 80dd31b:	83 c4 20             	add    $0x20,%esp
 80dd31e:	5b                   	pop    %ebx
 80dd31f:	5e                   	pop    %esi
 80dd320:	5d                   	pop    %ebp
 80dd321:	c3                   	ret

```

```c
// CBoosterGage::loadData @ 0x80dd284

/* CBoosterGage::loadData(CUser*, char*) */

undefined4 __thiscall CBoosterGage::loadData(CBoosterGage *this,CUser *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 4);
  lVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar3 = CUser::GetAccountLastPlayTime(param_1);
  iVar4 = G_CEnvironment();
  cVar1 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),lVar3,lVar2);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0xc))(this);
    send_data((CUser *)this,(int)param_1);
  }
  return 1;
}

```

---

## log_booster_gage_bonus_reward

```asm
// === 080dc9ca CBoosterGage::log_booster_gage_bonus_reward  [0x080dc9ca-0x80dcbd5] ===
 80dc9ca:	55                   	push   %ebp
 80dc9cb:	89 e5                	mov    %esp,%ebp
 80dc9cd:	57                   	push   %edi
 80dc9ce:	56                   	push   %esi
 80dc9cf:	53                   	push   %ebx
 80dc9d0:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 80dc9d6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80dc9d9:	89 04 24             	mov    %eax,(%esp)
 80dc9dc:	e8 ef 9b 62 00       	call   87065d0 <_ZNSsC1Ev>
 80dc9e1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80dc9e4:	89 04 24             	mov    %eax,(%esp)
 80dc9e7:	e8 e4 c3 62 00       	call   8708dd0 <_ZNSs5clearEv>
 80dc9ec:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80dc9ef:	8b 55 10             	mov    0x10(%ebp),%edx
 80dc9f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dc9f6:	89 04 24             	mov    %eax,(%esp)
 80dc9f9:	e8 da 0c 00 00       	call   80dd6d8 <_ZNKSt6vectorISt4pairI10Inven_ItembESaIS2_EE5beginEv>
 80dc9fe:	83 ec 04             	sub    $0x4,%esp
 80dca01:	e9 16 01 00 00       	jmp    80dcb1c <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x152>
 80dca06:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80dca09:	89 04 24             	mov    %eax,(%esp)
 80dca0c:	e8 4b 0d 00 00       	call   80dd75c <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairI10Inven_ItembESt6vectorIS3_SaIS3_EEEdeEv>
 80dca11:	8b 10                	mov    (%eax),%edx
 80dca13:	89 55 8a             	mov    %edx,-0x76(%ebp)
 80dca16:	8b 50 04             	mov    0x4(%eax),%edx
 80dca19:	89 55 8e             	mov    %edx,-0x72(%ebp)
 80dca1c:	8b 50 08             	mov    0x8(%eax),%edx
 80dca1f:	89 55 92             	mov    %edx,-0x6e(%ebp)
 80dca22:	8b 50 0c             	mov    0xc(%eax),%edx
 80dca25:	89 55 96             	mov    %edx,-0x6a(%ebp)
 80dca28:	8b 50 10             	mov    0x10(%eax),%edx
 80dca2b:	89 55 9a             	mov    %edx,-0x66(%ebp)
 80dca2e:	8b 50 14             	mov    0x14(%eax),%edx
 80dca31:	89 55 9e             	mov    %edx,-0x62(%ebp)
 80dca34:	8b 50 18             	mov    0x18(%eax),%edx
 80dca37:	89 55 a2             	mov    %edx,-0x5e(%ebp)
 80dca3a:	8b 50 1c             	mov    0x1c(%eax),%edx
 80dca3d:	89 55 a6             	mov    %edx,-0x5a(%ebp)
 80dca40:	8b 50 20             	mov    0x20(%eax),%edx
 80dca43:	89 55 aa             	mov    %edx,-0x56(%ebp)
 80dca46:	8b 50 24             	mov    0x24(%eax),%edx
 80dca49:	89 55 ae             	mov    %edx,-0x52(%ebp)
 80dca4c:	8b 50 28             	mov    0x28(%eax),%edx
 80dca4f:	89 55 b2             	mov    %edx,-0x4e(%ebp)
 80dca52:	8b 50 2c             	mov    0x2c(%eax),%edx
 80dca55:	89 55 b6             	mov    %edx,-0x4a(%ebp)
 80dca58:	8b 50 30             	mov    0x30(%eax),%edx
 80dca5b:	89 55 ba             	mov    %edx,-0x46(%ebp)
 80dca5e:	8b 50 34             	mov    0x34(%eax),%edx
 80dca61:	89 55 be             	mov    %edx,-0x42(%ebp)
 80dca64:	8b 50 38             	mov    0x38(%eax),%edx
 80dca67:	89 55 c2             	mov    %edx,-0x3e(%ebp)
 80dca6a:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
 80dca6e:	66 89 45 c6          	mov    %ax,-0x3a(%ebp)
 80dca72:	8d 95 8b fe ff ff    	lea    -0x175(%ebp),%edx
 80dca78:	bb ff 00 00 00       	mov    $0xff,%ebx
 80dca7d:	b8 00 00 00 00       	mov    $0x0,%eax
 80dca82:	89 d1                	mov    %edx,%ecx
 80dca84:	83 e1 01             	and    $0x1,%ecx
 80dca87:	85 c9                	test   %ecx,%ecx
 80dca89:	74 08                	je     80dca93 <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xc9>
 80dca8b:	88 02                	mov    %al,(%edx)
 80dca8d:	83 c2 01             	add    $0x1,%edx
 80dca90:	83 eb 01             	sub    $0x1,%ebx
 80dca93:	89 d1                	mov    %edx,%ecx
 80dca95:	83 e1 02             	and    $0x2,%ecx
 80dca98:	85 c9                	test   %ecx,%ecx
 80dca9a:	74 09                	je     80dcaa5 <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xdb>
 80dca9c:	66 89 02             	mov    %ax,(%edx)
 80dca9f:	83 c2 02             	add    $0x2,%edx
 80dcaa2:	83 eb 02             	sub    $0x2,%ebx
 80dcaa5:	89 d9                	mov    %ebx,%ecx
 80dcaa7:	c1 e9 02             	shr    $0x2,%ecx
 80dcaaa:	89 d7                	mov    %edx,%edi
 80dcaac:	f3 ab                	rep stos %eax,%es:(%edi)
 80dcaae:	89 fa                	mov    %edi,%edx
 80dcab0:	89 d9                	mov    %ebx,%ecx
 80dcab2:	83 e1 02             	and    $0x2,%ecx
 80dcab5:	85 c9                	test   %ecx,%ecx
 80dcab7:	74 06                	je     80dcabf <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0xf5>
 80dcab9:	66 89 02             	mov    %ax,(%edx)
 80dcabc:	83 c2 02             	add    $0x2,%edx
 80dcabf:	89 d9                	mov    %ebx,%ecx
 80dcac1:	83 e1 01             	and    $0x1,%ecx
 80dcac4:	85 c9                	test   %ecx,%ecx
 80dcac6:	74 05                	je     80dcacd <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x103>
 80dcac8:	88 02                	mov    %al,(%edx)
 80dcaca:	83 c2 01             	add    $0x1,%edx
 80dcacd:	8b 45 8c             	mov    -0x74(%ebp),%eax
 80dcad0:	89 44 24 08          	mov    %eax,0x8(%esp)
 80dcad4:	c7 44 24 04 03 a3 b2 	movl   $0x8b2a303,0x4(%esp)
 80dcadb:	08 
 80dcadc:	8d 85 8b fe ff ff    	lea    -0x175(%ebp),%eax
 80dcae2:	89 04 24             	mov    %eax,(%esp)
 80dcae5:	e8 56 19 fa ff       	call   807e440 <sprintf@plt>
 80dcaea:	8d 85 8b fe ff ff    	lea    -0x175(%ebp),%eax
 80dcaf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dcaf4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80dcaf7:	89 04 24             	mov    %eax,(%esp)
 80dcafa:	e8 31 b5 62 00       	call   8708030 <_ZNSspLEPKc>
 80dcaff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80dcb02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80dcb09:	00 
 80dcb0a:	8d 55 c8             	lea    -0x38(%ebp),%edx
 80dcb0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dcb11:	89 04 24             	mov    %eax,(%esp)
 80dcb14:	e8 4d 0c 00 00       	call   80dd766 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairI10Inven_ItembESt6vectorIS3_SaIS3_EEEppEi>
 80dcb19:	83 ec 04             	sub    $0x4,%esp
 80dcb1c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80dcb1f:	8b 55 10             	mov    0x10(%ebp),%edx
 80dcb22:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dcb26:	89 04 24             	mov    %eax,(%esp)
 80dcb29:	e8 d6 0b 00 00       	call   80dd704 <_ZNKSt6vectorISt4pairI10Inven_ItembESaIS2_EE3endEv>
 80dcb2e:	83 ec 04             	sub    $0x4,%esp
 80dcb31:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80dcb34:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dcb38:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80dcb3b:	89 04 24             	mov    %eax,(%esp)
 80dcb3e:	e8 ed 0b 00 00       	call   80dd730 <_ZN9__gnu_cxxneIPKSt4pairI10Inven_ItembESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 80dcb43:	84 c0                	test   %al,%al
 80dcb45:	0f 85 bb fe ff ff    	jne    80dca06 <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x3c>
 80dcb4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dcb4e:	89 04 24             	mov    %eax,(%esp)
 80dcb51:	e8 f8 f0 fe ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80dcb56:	89 c6                	mov    %eax,%esi
 80dcb58:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80dcb5b:	89 04 24             	mov    %eax,(%esp)
 80dcb5e:	e8 8d 99 62 00       	call   87064f0 <_ZNKSs5c_strEv>
 80dcb63:	89 c3                	mov    %eax,%ebx
 80dcb65:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80dcb6c:	00 
 80dcb6d:	c7 44 24 08 7c 00 00 	movl   $0x7c,0x8(%esp)
 80dcb74:	00 
 80dcb75:	c7 44 24 04 80 af b2 	movl   $0x8b2af80,0x4(%esp)
 80dcb7c:	08 
 80dcb7d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80dcb80:	89 04 24             	mov    %eax,(%esp)
 80dcb83:	e8 90 2b 47 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80dcb88:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80dcb8c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80dcb90:	c7 44 24 04 08 a3 b2 	movl   $0x8b2a308,0x4(%esp)
 80dcb97:	08 
 80dcb98:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80dcb9b:	89 04 24             	mov    %eax,(%esp)
 80dcb9e:	e8 e5 2b 47 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80dcba3:	eb 1b                	jmp    80dcbc0 <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE+0x1f6>
 80dcba5:	89 d3                	mov    %edx,%ebx
 80dcba7:	89 c6                	mov    %eax,%esi
 80dcba9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80dcbac:	89 04 24             	mov    %eax,(%esp)
 80dcbaf:	e8 2c b0 62 00       	call   8707be0 <_ZNSsD1Ev>
 80dcbb4:	89 f0                	mov    %esi,%eax
 80dcbb6:	89 da                	mov    %ebx,%edx
 80dcbb8:	89 04 24             	mov    %eax,(%esp)
 80dcbbb:	e8 90 6b a0 00       	call   8ae3750 <_Unwind_Resume>
 80dcbc0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80dcbc3:	89 04 24             	mov    %eax,(%esp)
 80dcbc6:	e8 15 b0 62 00       	call   8707be0 <_ZNSsD1Ev>
 80dcbcb:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80dcbce:	83 c4 00             	add    $0x0,%esp
 80dcbd1:	5b                   	pop    %ebx
 80dcbd2:	5e                   	pop    %esi
 80dcbd3:	5f                   	pop    %edi
 80dcbd4:	5d                   	pop    %ebp
 80dcbd5:	c3                   	ret

```

```c
// CBoosterGage::log_booster_gage_bonus_reward @ 0x80dc9ca

/* CBoosterGage::log_booster_gage_bonus_reward(CUser*, std::vector<std::pair<Inven_Item, bool>,
   std::allocator<std::pair<Inven_Item, bool> > > const&) */

void CBoosterGage::log_booster_gage_bonus_reward(CUser *param_1,vector *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  char local_179;
  char local_178 [254];
  undefined2 local_7a;
  undefined2 uStack_78;
  undefined2 local_76;
  undefined2 uStack_74;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined2 local_3e;
  __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_3c [4];
  string local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_30 [4];
  cMyTrace local_2c [28];
  
  bVar8 = 0;
  std::string::string(local_38);
                    /* try { // try from 080dc9e7 to 080dcba2 has its CatchHandler @ 080dcba5 */
  std::string::clear(local_38);
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
  while( true ) {
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_3c,local_34);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
             ::operator*(local_3c);
    local_7a = (undefined2)*puVar2;
    uStack_78 = (undefined2)((uint)*puVar2 >> 0x10);
    local_76 = (undefined2)puVar2[1];
    uStack_74 = (undefined2)((uint)puVar2[1] >> 0x10);
    local_72 = puVar2[2];
    local_6e = puVar2[3];
    local_6a = puVar2[4];
    local_66 = puVar2[5];
    local_62 = puVar2[6];
    local_5e = puVar2[7];
    local_5a = puVar2[8];
    local_56 = puVar2[9];
    local_52 = puVar2[10];
    local_4e = puVar2[0xb];
    local_4a = puVar2[0xc];
    local_46 = puVar2[0xd];
    local_42 = puVar2[0xe];
    local_3e = *(undefined2 *)(puVar2 + 0xf);
    pcVar6 = &local_179;
    uVar7 = 0xff;
    bVar1 = ((uint)pcVar6 & 1) != 0;
    if (bVar1) {
      local_179 = '\0';
      pcVar6 = local_178;
      uVar7 = 0xfe;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar1) {
      *pcVar6 = '\0';
    }
    sprintf(&local_179,"%d ",CONCAT22(local_76,uStack_78));
    std::string::operator+=(local_38,&local_179);
    __gnu_cxx::
    __normal_iterator<std::pair<Inven_Item,bool>const*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
    ::operator++(local_30,(int)local_3c);
  }
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  uVar4 = std::string::c_str(local_38);
  cMyTrace::cMyTrace(local_2c,
                     "void CBoosterGage::log_booster_gage_bonus_reward(CUser*, const MULTIBOX_REWARD_LIST&)"
                     ,0x7c,0);
  cMyTrace::operator()(local_2c,"BOOSTER_GAGE : REWARD ITEM (%s) x 2 : CHARAC_NO (%u)",uVar4,uVar3);
  std::string::~string(local_38);
  return;
}

```

---

## make_postar

```asm
// === 080dc6d6 CBoosterGage::make_postar  [0x080dc6d6-0x80dc9c9] ===
 80dc6d6:	55                   	push   %ebp
 80dc6d7:	89 e5                	mov    %esp,%ebp
 80dc6d9:	57                   	push   %edi
 80dc6da:	56                   	push   %esi
 80dc6db:	53                   	push   %ebx
 80dc6dc:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 80dc6e2:	8d 95 c3 fe ff ff    	lea    -0x13d(%ebp),%edx
 80dc6e8:	bb 00 01 00 00       	mov    $0x100,%ebx
 80dc6ed:	b8 00 00 00 00       	mov    $0x0,%eax
 80dc6f2:	89 d1                	mov    %edx,%ecx
 80dc6f4:	83 e1 01             	and    $0x1,%ecx
 80dc6f7:	85 c9                	test   %ecx,%ecx
 80dc6f9:	74 08                	je     80dc703 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x2d>
 80dc6fb:	88 02                	mov    %al,(%edx)
 80dc6fd:	83 c2 01             	add    $0x1,%edx
 80dc700:	83 eb 01             	sub    $0x1,%ebx
 80dc703:	89 d1                	mov    %edx,%ecx
 80dc705:	83 e1 02             	and    $0x2,%ecx
 80dc708:	85 c9                	test   %ecx,%ecx
 80dc70a:	74 09                	je     80dc715 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x3f>
 80dc70c:	66 89 02             	mov    %ax,(%edx)
 80dc70f:	83 c2 02             	add    $0x2,%edx
 80dc712:	83 eb 02             	sub    $0x2,%ebx
 80dc715:	89 d9                	mov    %ebx,%ecx
 80dc717:	c1 e9 02             	shr    $0x2,%ecx
 80dc71a:	89 d7                	mov    %edx,%edi
 80dc71c:	f3 ab                	rep stos %eax,%es:(%edi)
 80dc71e:	89 fa                	mov    %edi,%edx
 80dc720:	89 d9                	mov    %ebx,%ecx
 80dc722:	83 e1 02             	and    $0x2,%ecx
 80dc725:	85 c9                	test   %ecx,%ecx
 80dc727:	74 06                	je     80dc72f <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x59>
 80dc729:	66 89 02             	mov    %ax,(%edx)
 80dc72c:	83 c2 02             	add    $0x2,%edx
 80dc72f:	89 d9                	mov    %ebx,%ecx
 80dc731:	83 e1 01             	and    $0x1,%ecx
 80dc734:	85 c9                	test   %ecx,%ecx
 80dc736:	74 05                	je     80dc73d <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x67>
 80dc738:	88 02                	mov    %al,(%edx)
 80dc73a:	83 c2 01             	add    $0x1,%edx
 80dc73d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80dc740:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80dc747:	00 
 80dc748:	c7 44 24 08 36 04 00 	movl   $0x436,0x8(%esp)
 80dc74f:	00 
 80dc750:	c7 44 24 04 60 a6 3f 	movl   $0x93fa660,0x4(%esp)
 80dc757:	09 
 80dc758:	89 04 24             	mov    %eax,(%esp)
 80dc75b:	e8 08 9f fe ff       	call   80c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 80dc760:	83 ec 04             	sub    $0x4,%esp
 80dc763:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80dc766:	89 04 24             	mov    %eax,(%esp)
 80dc769:	e8 82 9d 62 00       	call   87064f0 <_ZNKSs5c_strEv>
 80dc76e:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 80dc775:	00 
 80dc776:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dc77a:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 80dc77d:	89 04 24             	mov    %eax,(%esp)
 80dc780:	e8 4b 11 fa ff       	call   807d8d0 <strncpy@plt>
 80dc785:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80dc788:	89 04 24             	mov    %eax,(%esp)
 80dc78b:	e8 50 b4 62 00       	call   8707be0 <_ZNSsD1Ev>
 80dc790:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80dc793:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80dc79a:	00 
 80dc79b:	c7 44 24 08 37 04 00 	movl   $0x437,0x8(%esp)
 80dc7a2:	00 
 80dc7a3:	c7 44 24 04 60 a6 3f 	movl   $0x93fa660,0x4(%esp)
 80dc7aa:	09 
 80dc7ab:	89 04 24             	mov    %eax,(%esp)
 80dc7ae:	e8 b5 9e fe ff       	call   80c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>
 80dc7b3:	83 ec 04             	sub    $0x4,%esp
 80dc7b6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80dc7b9:	89 04 24             	mov    %eax,(%esp)
 80dc7bc:	e8 2f 9d 62 00       	call   87064f0 <_ZNKSs5c_strEv>
 80dc7c1:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 80dc7c8:	00 
 80dc7c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dc7cd:	8d 85 c3 fe ff ff    	lea    -0x13d(%ebp),%eax
 80dc7d3:	89 04 24             	mov    %eax,(%esp)
 80dc7d6:	e8 f5 10 fa ff       	call   807d8d0 <strncpy@plt>
 80dc7db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80dc7de:	89 04 24             	mov    %eax,(%esp)
 80dc7e1:	e8 fa b3 62 00       	call   8707be0 <_ZNSsD1Ev>
 80dc7e6:	8b 45 10             	mov    0x10(%ebp),%eax
 80dc7e9:	8b 40 02             	mov    0x2(%eax),%eax
 80dc7ec:	89 c3                	mov    %eax,%ebx
 80dc7ee:	e8 a8 f9 fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80dc7f3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80dc7f7:	89 04 24             	mov    %eax,(%esp)
 80dc7fa:	e8 33 32 28 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80dc7ff:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80dc802:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 80dc806:	0f 84 b2 01 00 00    	je     80dc9be <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x2e8>
 80dc80c:	eb 36                	jmp    80dc844 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x16e>
 80dc80e:	89 d3                	mov    %edx,%ebx
 80dc810:	89 c6                	mov    %eax,%esi
 80dc812:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80dc815:	89 04 24             	mov    %eax,(%esp)
 80dc818:	e8 c3 b3 62 00       	call   8707be0 <_ZNSsD1Ev>
 80dc81d:	89 f0                	mov    %esi,%eax
 80dc81f:	89 da                	mov    %ebx,%edx
 80dc821:	89 04 24             	mov    %eax,(%esp)
 80dc824:	e8 27 6f a0 00       	call   8ae3750 <_Unwind_Resume>
 80dc829:	89 d3                	mov    %edx,%ebx
 80dc82b:	89 c6                	mov    %eax,%esi
 80dc82d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80dc830:	89 04 24             	mov    %eax,(%esp)
 80dc833:	e8 a8 b3 62 00       	call   8707be0 <_ZNSsD1Ev>
 80dc838:	89 f0                	mov    %esi,%eax
 80dc83a:	89 da                	mov    %ebx,%edx
 80dc83c:	89 04 24             	mov    %eax,(%esp)
 80dc83f:	e8 0c 6f a0 00       	call   8ae3750 <_Unwind_Resume>
 80dc844:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dc847:	8b 00                	mov    (%eax),%eax
 80dc849:	83 c0 10             	add    $0x10,%eax
 80dc84c:	8b 10                	mov    (%eax),%edx
 80dc84e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dc851:	89 04 24             	mov    %eax,(%esp)
 80dc854:	ff d2                	call   *%edx
 80dc856:	84 c0                	test   %al,%al
 80dc858:	0f 84 97 00 00 00    	je     80dc8f5 <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x21f>
 80dc85e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80dc865:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 80dc869:	74 23                	je     80dc88e <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x1b8>
 80dc86b:	81 7d 18 6d 01 00 00 	cmpl   $0x16d,0x18(%ebp)
 80dc872:	74 1a                	je     80dc88e <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x1b8>
 80dc874:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 80dc87b:	e8 1e f4 fe ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 80dc880:	8b 55 18             	mov    0x18(%ebp),%edx
 80dc883:	69 d2 80 51 01 00    	imul   $0x15180,%edx,%edx
 80dc889:	01 d0                	add    %edx,%eax
 80dc88b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80dc88e:	8d 85 c3 fe ff ff    	lea    -0x13d(%ebp),%eax
 80dc894:	89 04 24             	mov    %eax,(%esp)
 80dc897:	e8 14 1b fa ff       	call   807e3b0 <strlen@plt>
 80dc89c:	89 c6                	mov    %eax,%esi
 80dc89e:	8b 45 10             	mov    0x10(%ebp),%eax
 80dc8a1:	8b 40 02             	mov    0x2(%eax),%eax
 80dc8a4:	89 c3                	mov    %eax,%ebx
 80dc8a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dc8a9:	89 04 24             	mov    %eax,(%esp)
 80dc8ac:	e8 9d f3 fe ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80dc8b1:	89 74 24 20          	mov    %esi,0x20(%esp)
 80dc8b5:	8d 95 c3 fe ff ff    	lea    -0x13d(%ebp),%edx
 80dc8bb:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 80dc8bf:	8b 55 14             	mov    0x14(%ebp),%edx
 80dc8c2:	89 54 24 18          	mov    %edx,0x18(%esp)
 80dc8c6:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 80dc8cd:	ff 
 80dc8ce:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 80dc8d5:	00 
 80dc8d6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80dc8d9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80dc8dd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80dc8e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dc8e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dc8e8:	89 04 24             	mov    %eax,(%esp)
 80dc8eb:	e8 c0 98 47 00       	call   85561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>
 80dc8f0:	e9 ca 00 00 00       	jmp    80dc9bf <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x2e9>
 80dc8f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dc8f8:	8b 00                	mov    (%eax),%eax
 80dc8fa:	83 c0 14             	add    $0x14,%eax
 80dc8fd:	8b 10                	mov    (%eax),%edx
 80dc8ff:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80dc902:	89 04 24             	mov    %eax,(%esp)
 80dc905:	ff d2                	call   *%edx
 80dc907:	84 c0                	test   %al,%al
 80dc909:	74 41                	je     80dc94c <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x276>
 80dc90b:	8d 85 c3 fe ff ff    	lea    -0x13d(%ebp),%eax
 80dc911:	89 04 24             	mov    %eax,(%esp)
 80dc914:	e8 97 1a fa ff       	call   807e3b0 <strlen@plt>
 80dc919:	89 c3                	mov    %eax,%ebx
 80dc91b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dc91e:	89 04 24             	mov    %eax,(%esp)
 80dc921:	e8 28 f3 fe ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80dc926:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 80dc92a:	8d 95 c3 fe ff ff    	lea    -0x13d(%ebp),%edx
 80dc930:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80dc934:	8b 55 10             	mov    0x10(%ebp),%edx
 80dc937:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dc93b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dc93f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dc942:	89 04 24             	mov    %eax,(%esp)
 80dc945:	e8 d8 9a 47 00       	call   8556422 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci>
 80dc94a:	eb 73                	jmp    80dc9bf <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x2e9>
 80dc94c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dc94f:	89 04 24             	mov    %eax,(%esp)
 80dc952:	e8 39 f3 fe ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80dc957:	89 c3                	mov    %eax,%ebx
 80dc959:	8d 85 c3 fe ff ff    	lea    -0x13d(%ebp),%eax
 80dc95f:	89 04 24             	mov    %eax,(%esp)
 80dc962:	e8 49 1a fa ff       	call   807e3b0 <strlen@plt>
 80dc967:	89 c6                	mov    %eax,%esi
 80dc969:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dc96c:	89 04 24             	mov    %eax,(%esp)
 80dc96f:	e8 da f2 fe ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80dc974:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 80dc97b:	00 
 80dc97c:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 80dc983:	00 
 80dc984:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 80dc988:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 80dc98f:	00 
 80dc990:	89 74 24 14          	mov    %esi,0x14(%esp)
 80dc994:	8d 95 c3 fe ff ff    	lea    -0x13d(%ebp),%edx
 80dc99a:	89 54 24 10          	mov    %edx,0x10(%esp)
 80dc99e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80dc9a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80dc9a9:	00 
 80dc9aa:	8b 45 10             	mov    0x10(%ebp),%eax
 80dc9ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dc9b1:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 80dc9b4:	89 04 24             	mov    %eax,(%esp)
 80dc9b7:	e8 2c 8c 47 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 80dc9bc:	eb 01                	jmp    80dc9bf <_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci+0x2e9>
 80dc9be:	90                   	nop
 80dc9bf:	8d 65 f4             	lea    -0xc(%ebp),%esp
 80dc9c2:	83 c4 00             	add    $0x0,%esp
 80dc9c5:	5b                   	pop    %ebx
 80dc9c6:	5e                   	pop    %esi
 80dc9c7:	5f                   	pop    %edi
 80dc9c8:	5d                   	pop    %ebp
 80dc9c9:	c3                   	ret

```

```c
// CBoosterGage::make_postar @ 0x80dc6d6

/* CBoosterGage::make_postar(CUser*, Inven_Item const&, char const*, int) */

void __thiscall
CBoosterGage::make_postar
          (CBoosterGage *this,CUser *param_1,Inven_Item *param_2,char *param_3,int param_4)

{
  char cVar1;
  CDataManager *this_00;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  char local_141;
  char local_140 [255];
  char local_41 [21];
  string local_2c [4];
  string local_28 [4];
  int *local_24;
  int local_20;
  
  pcVar8 = &local_141;
  uVar9 = 0x100;
  bVar10 = ((uint)pcVar8 & 1) != 0;
  if (bVar10) {
    local_141 = '\0';
    pcVar8 = local_140;
    uVar9 = 0xff;
  }
  if (((uint)pcVar8 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
    uVar9 = uVar9 - 2;
  }
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  if ((uVar9 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
  }
  if (bVar10) {
    *pcVar8 = '\0';
  }
  np_server_xml::CServerXml::GetServerString((int)local_2c,(bool *)g_ServerString_);
                    /* try { // try from 080dc769 to 080dc76d has its CatchHandler @ 080dc80e */
  pcVar8 = (char *)std::string::c_str(local_2c);
  strncpy(local_41,pcVar8,0x14);
  std::string::~string(local_2c);
  np_server_xml::CServerXml::GetServerString((int)local_28,(bool *)g_ServerString_);
                    /* try { // try from 080dc7bc to 080dc7c0 has its CatchHandler @ 080dc829 */
  pcVar8 = (char *)std::string::c_str(local_28);
  strncpy(&local_141,pcVar8,0xff);
  std::string::~string(local_28);
  iVar4 = *(int *)(param_2 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = (int *)CDataManager::find_item(this_00,iVar4);
  if (local_24 != (int *)0x0) {
    cVar1 = (**(code **)(*local_24 + 0x10))(local_24);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*local_24 + 0x14))(local_24);
      if (cVar1 == '\0') {
        uVar5 = CUser::GetServerGroup(param_1);
        sVar2 = strlen(&local_141);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_41,param_2,0,uVar6,&local_141,sVar2,0,uVar5,0,0);
      }
      else {
        sVar2 = strlen(&local_141);
        iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(param_1,iVar4,param_2,&local_141,sVar2);
      }
    }
    else {
      local_20 = 0;
      if ((param_4 != 0) && (param_4 != 0x16d)) {
        local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20 = local_20 + param_4 * 0x15180;
      }
      sVar2 = strlen(&local_141);
      iVar4 = *(int *)(param_2 + 2);
      iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail
                (param_1,iVar3,iVar4,local_20,'\0',-1,param_3,&local_141,sVar2);
    }
  }
  return;
}

```

---

## send_data

```asm
// === 080dd246 CBoosterGage::send_data  [0x080dd246-0x80dd24d] ===
 80dd246:	55                   	push   %ebp
 80dd247:	89 e5                	mov    %esp,%ebp
 80dd249:	83 ec 10             	sub    $0x10,%esp
 80dd24c:	c9                   	leave
 80dd24d:	c3                   	ret

```

```c
// CBoosterGage::send_data @ 0x80dd246

/* CBoosterGage::send_data(CUser*, int) */

void CBoosterGage::send_data(CUser *param_1,int param_2)

{
  return;
}

```

---

## send_error_state_packet

```asm
// === 080dd142 CBoosterGage::send_error_state_packet  [0x080dd142-0x80dd245] ===
 80dd142:	55                   	push   %ebp
 80dd143:	89 e5                	mov    %esp,%ebp
 80dd145:	56                   	push   %esi
 80dd146:	53                   	push   %ebx
 80dd147:	83 ec 30             	sub    $0x30,%esp
 80dd14a:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 80dd151:	00 
 80dd152:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd155:	89 04 24             	mov    %eax,(%esp)
 80dd158:	e8 27 04 00 00       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 80dd15d:	8b 55 10             	mov    0x10(%ebp),%edx
 80dd160:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dd164:	89 04 24             	mov    %eax,(%esp)
 80dd167:	e8 6e ff ff ff       	call   80dd0da <_ZN12CBoosterGage22check_max_booster_gageEm>
 80dd16c:	88 45 f3             	mov    %al,-0xd(%ebp)
 80dd16f:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 80dd176:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 80dd17a:	74 18                	je     80dd194 <_ZN12CBoosterGage23send_error_state_packetEP5CUserm+0x52>
 80dd17c:	e8 1a f0 fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80dd181:	0f b6 80 7e 87 00 00 	movzbl 0x877e(%eax),%eax
 80dd188:	0f b6 c0             	movzbl %al,%eax
 80dd18b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80dd18e:	0f af c2             	imul   %edx,%eax
 80dd191:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80dd194:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd197:	89 04 24             	mov    %eax,(%esp)
 80dd19a:	e8 ad 0b 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80dd19f:	c7 44 24 08 d3 00 00 	movl   $0xd3,0x8(%esp)
 80dd1a6:	00 
 80dd1a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80dd1ae:	00 
 80dd1af:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd1b2:	89 04 24             	mov    %eax,(%esp)
 80dd1b5:	e8 42 e7 fe ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80dd1ba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80dd1c1:	00 
 80dd1c2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd1c5:	89 04 24             	mov    %eax,(%esp)
 80dd1c8:	e8 53 e7 fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80dd1cd:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 80dd1d4:	00 
 80dd1d5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd1d8:	89 04 24             	mov    %eax,(%esp)
 80dd1db:	e8 40 e7 fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80dd1e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80dd1e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dd1e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd1ea:	89 04 24             	mov    %eax,(%esp)
 80dd1ed:	e8 2e e7 fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80dd1f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80dd1f9:	00 
 80dd1fa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd1fd:	89 04 24             	mov    %eax,(%esp)
 80dd200:	e8 53 e7 fe ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80dd205:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd208:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dd20c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80dd20f:	89 04 24             	mov    %eax,(%esp)
 80dd212:	e8 a3 b3 56 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80dd217:	eb 1b                	jmp    80dd234 <_ZN12CBoosterGage23send_error_state_packetEP5CUserm+0xf2>
 80dd219:	89 d3                	mov    %edx,%ebx
 80dd21b:	89 c6                	mov    %eax,%esi
 80dd21d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd220:	89 04 24             	mov    %eax,(%esp)
 80dd223:	e8 58 0c 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80dd228:	89 f0                	mov    %esi,%eax
 80dd22a:	89 da                	mov    %ebx,%edx
 80dd22c:	89 04 24             	mov    %eax,(%esp)
 80dd22f:	e8 1c 65 a0 00       	call   8ae3750 <_Unwind_Resume>
 80dd234:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80dd237:	89 04 24             	mov    %eax,(%esp)
 80dd23a:	e8 41 0c 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80dd23f:	83 c4 30             	add    $0x30,%esp
 80dd242:	5b                   	pop    %ebx
 80dd243:	5e                   	pop    %esi
 80dd244:	5d                   	pop    %ebp
 80dd245:	c3                   	ret

```

```c
// CBoosterGage::send_error_state_packet @ 0x80dd142

/* CBoosterGage::send_error_state_packet(CUser*, unsigned long) */

void __thiscall
CBoosterGage::send_error_state_packet(CBoosterGage *this,CUser *param_1,ulong param_2)

{
  CBoosterGage *this_00;
  int iVar1;
  PacketGuard local_20 [15];
  char local_11;
  int local_10;
  
  this_00 = (CBoosterGage *)CUser::GetCharacExpandData(param_1,0x11);
  local_11 = check_max_booster_gage(this_00,param_2);
  local_10 = 2;
  if (local_11 != '\0') {
    iVar1 = G_CDataManager();
    local_10 = (uint)*(byte *)(iVar1 + 0x877e) * local_10;
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 080dd1b5 to 080dd216 has its CatchHandler @ 080dd219 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xd3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0x13);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

---

## sub_total_gage

```asm
// === 080dc664 CBoosterGage::sub_total_gage  [0x080dc664-0x80dc69b] ===
 80dc664:	55                   	push   %ebp
 80dc665:	89 e5                	mov    %esp,%ebp
 80dc667:	83 ec 18             	sub    $0x18,%esp
 80dc66a:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc66d:	89 04 24             	mov    %eax,(%esp)
 80dc670:	e8 4f c5 fe ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 80dc675:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc678:	8b 40 08             	mov    0x8(%eax),%eax
 80dc67b:	89 c2                	mov    %eax,%edx
 80dc67d:	2b 55 0c             	sub    0xc(%ebp),%edx
 80dc680:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc683:	89 50 08             	mov    %edx,0x8(%eax)
 80dc686:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc689:	8b 40 08             	mov    0x8(%eax),%eax
 80dc68c:	85 c0                	test   %eax,%eax
 80dc68e:	79 0a                	jns    80dc69a <_ZN12CBoosterGage14sub_total_gageEi+0x36>
 80dc690:	8b 45 08             	mov    0x8(%ebp),%eax
 80dc693:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80dc69a:	c9                   	leave
 80dc69b:	c3                   	ret

```

```c
// CBoosterGage::sub_total_gage @ 0x80dc664

/* CBoosterGage::sub_total_gage(int) */

void __thiscall CBoosterGage::sub_total_gage(CBoosterGage *this,int param_1)

{
  charac_expand::CData::alter((CData *)this);
  *(int *)(this + 8) = *(int *)(this + 8) - param_1;
  if (*(int *)(this + 8) < 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}

```

