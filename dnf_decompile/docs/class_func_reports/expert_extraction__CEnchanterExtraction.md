# expert_extraction__CEnchanterExtraction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _check_error

```asm
// === 084a3b92 expert_extraction::CEnchanterExtraction::_check_error  [0x084a3b92-0x84a3cb5] ===
 84a3b92:	55                   	push   %ebp
 84a3b93:	89 e5                	mov    %esp,%ebp
 84a3b95:	53                   	push   %ebx
 84a3b96:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 84a3b9c:	8b 55 10             	mov    0x10(%ebp),%edx
 84a3b9f:	8b 45 14             	mov    0x14(%ebp),%eax
 84a3ba2:	66 89 95 64 ff ff ff 	mov    %dx,-0x9c(%ebp)
 84a3ba9:	66 89 85 60 ff ff ff 	mov    %ax,-0xa0(%ebp)
 84a3bb0:	0f bf 9d 64 ff ff ff 	movswl -0x9c(%ebp),%ebx
 84a3bb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3bba:	89 04 24             	mov    %eax,(%esp)
 84a3bbd:	e8 bc 66 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a3bc2:	8d 55 a7             	lea    -0x59(%ebp),%edx
 84a3bc5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a3bc9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a3bd0:	00 
 84a3bd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3bd5:	89 14 24             	mov    %edx,(%esp)
 84a3bd8:	e8 3b 7d 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a3bdd:	83 ec 04             	sub    $0x4,%esp
 84a3be0:	8b 45 a9             	mov    -0x57(%ebp),%eax
 84a3be3:	89 c3                	mov    %eax,%ebx
 84a3be5:	e8 b1 85 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3bea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a3bee:	89 04 24             	mov    %eax,(%esp)
 84a3bf1:	e8 3c be eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a3bf6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a3bf9:	0f bf 9d 60 ff ff ff 	movswl -0xa0(%ebp),%ebx
 84a3c00:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3c03:	89 04 24             	mov    %eax,(%esp)
 84a3c06:	e8 73 66 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a3c0b:	8d 95 6a ff ff ff    	lea    -0x96(%ebp),%edx
 84a3c11:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a3c15:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a3c1c:	00 
 84a3c1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3c21:	89 14 24             	mov    %edx,(%esp)
 84a3c24:	e8 ef 7c 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a3c29:	83 ec 04             	sub    $0x4,%esp
 84a3c2c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84a3c32:	89 c3                	mov    %eax,%ebx
 84a3c34:	e8 62 85 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3c39:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a3c3d:	89 04 24             	mov    %eax,(%esp)
 84a3c40:	e8 ed bd eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a3c45:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a3c48:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a3c4b:	8b 80 38 03 00 00    	mov    0x338(%eax),%eax
 84a3c51:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a3c54:	e8 42 85 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3c59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a3c60:	00 
 84a3c61:	89 04 24             	mov    %eax,(%esp)
 84a3c64:	e8 89 79 d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 84a3c69:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84a3c6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3c70:	89 04 24             	mov    %eax,(%esp)
 84a3c73:	e8 b2 08 00 00       	call   84a452a <_ZN17STExpertJobScript35GetEnchanterExtractionPossibleLevelEi>
 84a3c78:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a3c7b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a3c7e:	89 04 24             	mov    %eax,(%esp)
 84a3c81:	e8 68 d6 c4 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 84a3c86:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a3c89:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a3c8d:	75 0e                	jne    84a3c9d <_ZN17expert_extraction20CEnchanterExtraction12_check_errorEP5CUserss+0x10b>
 84a3c8f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a3c92:	89 04 24             	mov    %eax,(%esp)
 84a3c95:	e8 ba cf c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a3c9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a3c9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3ca0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84a3ca3:	7e 07                	jle    84a3cac <_ZN17expert_extraction20CEnchanterExtraction12_check_errorEP5CUserss+0x11a>
 84a3ca5:	b8 0d 00 00 00       	mov    $0xd,%eax
 84a3caa:	eb 05                	jmp    84a3cb1 <_ZN17expert_extraction20CEnchanterExtraction12_check_errorEP5CUserss+0x11f>
 84a3cac:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3cb1:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84a3cb4:	c9                   	leave
 84a3cb5:	c3                   	ret

```

```c
// expert_extraction::CEnchanterExtraction::_check_error @ 0x84a3b92

/* expert_extraction::CEnchanterExtraction::_check_error(CUser*, short, short) */

undefined4
expert_extraction::CEnchanterExtraction::_check_error(CUser *param_1,short param_2,short param_3)

{
  int iVar1;
  CDataManager *pCVar2;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  undefined1 local_9a [2];
  int local_98;
  undefined1 local_5d [2];
  int local_5b;
  int local_20;
  CItem *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  iVar1 = CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::GetInvenSlot((int)local_5d,iVar1);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_20 = CDataManager::find_item(pCVar2,local_5b);
  iVar1 = CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::GetInvenSlot((int)local_9a,iVar1);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_1c = (CItem *)CDataManager::find_item(pCVar2,local_98);
  local_18 = *(undefined4 *)(local_20 + 0x338);
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::GetExpertJobScript(iVar1);
  local_14 = STExpertJobScript::GetEnchanterExtractionPossibleLevel(iVar1);
  local_10 = CItem::getUsableLevel(local_1c);
  if (local_10 == 0) {
    local_10 = CItem::get_grade(local_1c);
  }
  if (local_14 < local_10) {
    uVar3 = 0xd;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## check_error

```asm
// === 084a3cb6 expert_extraction::CEnchanterExtraction::check_error  [0x084a3cb6-0x84a3d65] ===
 84a3cb6:	55                   	push   %ebp
 84a3cb7:	89 e5                	mov    %esp,%ebp
 84a3cb9:	53                   	push   %ebx
 84a3cba:	83 ec 44             	sub    $0x44,%esp
 84a3cbd:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84a3cc0:	8b 55 14             	mov    0x14(%ebp),%edx
 84a3cc3:	8b 45 18             	mov    0x18(%ebp),%eax
 84a3cc6:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 84a3cc9:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 84a3ccd:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 84a3cd1:	0f bf 5d dc          	movswl -0x24(%ebp),%ebx
 84a3cd5:	0f bf 4d e0          	movswl -0x20(%ebp),%ecx
 84a3cd9:	0f be 55 e4          	movsbl -0x1c(%ebp),%edx
 84a3cdd:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3ce0:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84a3ce4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84a3ce8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a3cec:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a3cef:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3cf3:	89 04 24             	mov    %eax,(%esp)
 84a3cf6:	e8 63 ed ff ff       	call   84a2a5e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss>
 84a3cfb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a3cfe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a3d02:	74 05                	je     84a3d09 <_ZN17expert_extraction20CEnchanterExtraction11check_errorEP5CUsercss+0x53>
 84a3d04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3d07:	eb 56                	jmp    84a3d5f <_ZN17expert_extraction20CEnchanterExtraction11check_errorEP5CUsercss+0xa9>
 84a3d09:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3d0c:	8b 00                	mov    (%eax),%eax
 84a3d0e:	83 c0 14             	add    $0x14,%eax
 84a3d11:	8b 08                	mov    (%eax),%ecx
 84a3d13:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3d16:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a3d19:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3d1d:	89 04 24             	mov    %eax,(%esp)
 84a3d20:	ff d1                	call   *%ecx
 84a3d22:	83 f0 01             	xor    $0x1,%eax
 84a3d25:	84 c0                	test   %al,%al
 84a3d27:	74 07                	je     84a3d30 <_ZN17expert_extraction20CEnchanterExtraction11check_errorEP5CUsercss+0x7a>
 84a3d29:	b8 04 00 00 00       	mov    $0x4,%eax
 84a3d2e:	eb 2f                	jmp    84a3d5f <_ZN17expert_extraction20CEnchanterExtraction11check_errorEP5CUsercss+0xa9>
 84a3d30:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3d33:	8b 00                	mov    (%eax),%eax
 84a3d35:	83 c0 1c             	add    $0x1c,%eax
 84a3d38:	8b 08                	mov    (%eax),%ecx
 84a3d3a:	0f bf 55 dc          	movswl -0x24(%ebp),%edx
 84a3d3e:	0f bf 45 e0          	movswl -0x20(%ebp),%eax
 84a3d42:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a3d46:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a3d4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3d4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3d51:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3d54:	89 04 24             	mov    %eax,(%esp)
 84a3d57:	ff d1                	call   *%ecx
 84a3d59:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a3d5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3d5f:	83 c4 44             	add    $0x44,%esp
 84a3d62:	5b                   	pop    %ebx
 84a3d63:	5d                   	pop    %ebp
 84a3d64:	c3                   	ret
 84a3d65:	90                   	nop

```

```c
// expert_extraction::CEnchanterExtraction::check_error @ 0x84a3cb6

/* expert_extraction::CEnchanterExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CEnchanterExtraction::check_error
          (CEnchanterExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CExtraction::check_error((CExtraction *)this,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    cVar1 = (**(code **)(*(int *)this + 0x14))(this,param_1);
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(*(int *)this + 0x1c))(this,param_1,(int)param_3,(int)param_4);
    }
    else {
      iVar2 = 4;
    }
  }
  return iVar2;
}

```

---

## extraction

```asm
// === 084a37c6 expert_extraction::CEnchanterExtraction::extraction  [0x084a37c6-0x84a3b33] ===
 84a37c6:	55                   	push   %ebp
 84a37c7:	89 e5                	mov    %esp,%ebp
 84a37c9:	53                   	push   %ebx
 84a37ca:	81 ec 14 01 00 00    	sub    $0x114,%esp
 84a37d0:	8b 45 10             	mov    0x10(%ebp),%eax
 84a37d3:	66 89 85 44 ff ff ff 	mov    %ax,-0xbc(%ebp)
 84a37da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a37dd:	89 04 24             	mov    %eax,(%esp)
 84a37e0:	e8 99 6a c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a37e5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84a37e8:	0f bf 95 44 ff ff ff 	movswl -0xbc(%ebp),%edx
 84a37ef:	8d 85 57 ff ff ff    	lea    -0xa9(%ebp),%eax
 84a37f5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a37f9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a3800:	00 
 84a3801:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84a3804:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3808:	89 04 24             	mov    %eax,(%esp)
 84a380b:	e8 08 81 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a3810:	83 ec 04             	sub    $0x4,%esp
 84a3813:	8b 85 59 ff ff ff    	mov    -0xa7(%ebp),%eax
 84a3819:	89 c3                	mov    %eax,%ebx
 84a381b:	e8 7b 89 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3820:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a3824:	89 04 24             	mov    %eax,(%esp)
 84a3827:	e8 06 c2 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a382c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84a382f:	e8 67 89 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3834:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a383b:	00 
 84a383c:	89 04 24             	mov    %eax,(%esp)
 84a383f:	e8 ae 7d d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 84a3844:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a3847:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a384a:	89 04 24             	mov    %eax,(%esp)
 84a384d:	e8 dc 0d 00 00       	call   84a462e <_ZN17STExpertJobScript32GetEnchanterExtractionResultInfoEv>
 84a3852:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a3855:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a3858:	8b 00                	mov    (%eax),%eax
 84a385a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a385d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a3860:	83 e8 01             	sub    $0x1,%eax
 84a3863:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84a3866:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3869:	8b 40 04             	mov    0x4(%eax),%eax
 84a386c:	8d 55 94             	lea    -0x6c(%ebp),%edx
 84a386f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3873:	89 04 24             	mov    %eax,(%esp)
 84a3876:	e8 43 82 c2 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 84a387b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a387e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84a3882:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a3885:	83 c0 04             	add    $0x4,%eax
 84a3888:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a388b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a388e:	89 04 24             	mov    %eax,(%esp)
 84a3891:	e8 20 38 d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a3896:	85 c0                	test   %eax,%eax
 84a3898:	0f 94 c0             	sete   %al
 84a389b:	84 c0                	test   %al,%al
 84a389d:	74 51                	je     84a38f0 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x12a>
 84a389f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a38a2:	89 04 24             	mov    %eax,(%esp)
 84a38a5:	e8 0c 38 d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a38aa:	89 c3                	mov    %eax,%ebx
 84a38ac:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a38b3:	00 
 84a38b4:	c7 44 24 08 69 01 00 	movl   $0x169,0x8(%esp)
 84a38bb:	00 
 84a38bc:	c7 44 24 04 00 dc c7 	movl   $0x8c7dc00,0x4(%esp)
 84a38c3:	08 
 84a38c4:	8d 45 98             	lea    -0x68(%ebp),%eax
 84a38c7:	89 04 24             	mov    %eax,(%esp)
 84a38ca:	e8 49 be 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a38cf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a38d3:	c7 44 24 04 c4 cd c7 	movl   $0x8c7cdc4,0x4(%esp)
 84a38da:	08 
 84a38db:	8d 45 98             	lea    -0x68(%ebp),%eax
 84a38de:	89 04 24             	mov    %eax,(%esp)
 84a38e1:	e8 a2 be 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a38e6:	b8 00 00 00 00       	mov    $0x0,%eax
 84a38eb:	e9 3f 02 00 00       	jmp    84a3b2f <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x369>
 84a38f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a38f3:	89 04 24             	mov    %eax,(%esp)
 84a38f6:	e8 bb 37 d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a38fb:	85 c0                	test   %eax,%eax
 84a38fd:	74 0d                	je     84a390c <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x146>
 84a38ff:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84a3903:	75 07                	jne    84a390c <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x146>
 84a3905:	b8 01 00 00 00       	mov    $0x1,%eax
 84a390a:	eb 05                	jmp    84a3911 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x14b>
 84a390c:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3911:	84 c0                	test   %al,%al
 84a3913:	74 58                	je     84a396d <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1a7>
 84a3915:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3918:	89 04 24             	mov    %eax,(%esp)
 84a391b:	e8 96 37 d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a3920:	89 c3                	mov    %eax,%ebx
 84a3922:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a3929:	00 
 84a392a:	c7 44 24 08 6e 01 00 	movl   $0x16e,0x8(%esp)
 84a3931:	00 
 84a3932:	c7 44 24 04 00 dc c7 	movl   $0x8c7dc00,0x4(%esp)
 84a3939:	08 
 84a393a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84a393d:	89 04 24             	mov    %eax,(%esp)
 84a3940:	e8 d3 bd 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a3945:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a3948:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a394c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a3950:	c7 44 24 04 f8 cd c7 	movl   $0x8c7cdf8,0x4(%esp)
 84a3957:	08 
 84a3958:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84a395b:	89 04 24             	mov    %eax,(%esp)
 84a395e:	e8 25 be 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a3963:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3968:	e9 c2 01 00 00       	jmp    84a3b2f <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x369>
 84a396d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84a3974:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a397b:	e9 45 01 00 00       	jmp    84a3ac5 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x2ff>
 84a3980:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a3983:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84a3986:	7d 28                	jge    84a39b0 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ea>
 84a3988:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a398b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a398f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3992:	89 04 24             	mov    %eax,(%esp)
 84a3995:	e8 f6 0c 00 00       	call   84a4690 <_ZNSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 84a399a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84a399e:	0f b7 c0             	movzwl %ax,%eax
 84a39a1:	03 45 f0             	add    -0x10(%ebp),%eax
 84a39a4:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84a39a7:	7c 07                	jl     84a39b0 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ea>
 84a39a9:	b8 01 00 00 00       	mov    $0x1,%eax
 84a39ae:	eb 05                	jmp    84a39b5 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ef>
 84a39b0:	b8 00 00 00 00       	mov    $0x0,%eax
 84a39b5:	84 c0                	test   %al,%al
 84a39b7:	0f 84 e8 00 00 00    	je     84a3aa5 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x2df>
 84a39bd:	8b 45 08             	mov    0x8(%ebp),%eax
 84a39c0:	8b 00                	mov    (%eax),%eax
 84a39c2:	83 c0 18             	add    $0x18,%eax
 84a39c5:	8b 10                	mov    (%eax),%edx
 84a39c7:	8b 85 57 ff ff ff    	mov    -0xa9(%ebp),%eax
 84a39cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a39d1:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 84a39d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a39db:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 84a39e1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a39e5:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 84a39eb:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a39ef:	8b 85 67 ff ff ff    	mov    -0x99(%ebp),%eax
 84a39f5:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a39f9:	8b 85 6b ff ff ff    	mov    -0x95(%ebp),%eax
 84a39ff:	89 44 24 18          	mov    %eax,0x18(%esp)
 84a3a03:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 84a3a09:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84a3a0d:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 84a3a13:	89 44 24 20          	mov    %eax,0x20(%esp)
 84a3a17:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 84a3a1d:	89 44 24 24          	mov    %eax,0x24(%esp)
 84a3a21:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 84a3a27:	89 44 24 28          	mov    %eax,0x28(%esp)
 84a3a2b:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 84a3a31:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84a3a35:	8b 45 83             	mov    -0x7d(%ebp),%eax
 84a3a38:	89 44 24 30          	mov    %eax,0x30(%esp)
 84a3a3c:	8b 45 87             	mov    -0x79(%ebp),%eax
 84a3a3f:	89 44 24 34          	mov    %eax,0x34(%esp)
 84a3a43:	8b 45 8b             	mov    -0x75(%ebp),%eax
 84a3a46:	89 44 24 38          	mov    %eax,0x38(%esp)
 84a3a4a:	8b 45 8f             	mov    -0x71(%ebp),%eax
 84a3a4d:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84a3a51:	0f b6 45 93          	movzbl -0x6d(%ebp),%eax
 84a3a55:	88 44 24 40          	mov    %al,0x40(%esp)
 84a3a59:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3a5c:	89 04 24             	mov    %eax,(%esp)
 84a3a5f:	ff d2                	call   *%edx
 84a3a61:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84a3a64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3a6b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3a6e:	89 04 24             	mov    %eax,(%esp)
 84a3a71:	e8 1a 0c 00 00       	call   84a4690 <_ZNSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 84a3a76:	89 c2                	mov    %eax,%edx
 84a3a78:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84a3a7b:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 84a3a7e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84a3a82:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3a86:	89 04 24             	mov    %eax,(%esp)
 84a3a89:	e8 0b 9d c3 ff       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 84a3a8e:	83 ec 04             	sub    $0x4,%esp
 84a3a91:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84a3a94:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3a98:	8b 45 14             	mov    0x14(%ebp),%eax
 84a3a9b:	89 04 24             	mov    %eax,(%esp)
 84a3a9e:	e8 63 9b c3 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 84a3aa3:	eb 39                	jmp    84a3ade <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x318>
 84a3aa5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3aa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3aac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3aaf:	89 04 24             	mov    %eax,(%esp)
 84a3ab2:	e8 d9 0b 00 00       	call   84a4690 <_ZNSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 84a3ab7:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84a3abb:	0f b7 c0             	movzwl %ax,%eax
 84a3abe:	01 45 f0             	add    %eax,-0x10(%ebp)
 84a3ac1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a3ac5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3ac8:	89 04 24             	mov    %eax,(%esp)
 84a3acb:	e8 e6 35 d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a3ad0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84a3ad3:	0f 97 c0             	seta   %al
 84a3ad6:	84 c0                	test   %al,%al
 84a3ad8:	0f 85 a2 fe ff ff    	jne    84a3980 <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ba>
 84a3ade:	8b 45 14             	mov    0x14(%ebp),%eax
 84a3ae1:	89 04 24             	mov    %eax,(%esp)
 84a3ae4:	e8 b1 d6 c6 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 84a3ae9:	84 c0                	test   %al,%al
 84a3aeb:	74 3d                	je     84a3b2a <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x364>
 84a3aed:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a3af4:	00 
 84a3af5:	c7 44 24 08 7f 01 00 	movl   $0x17f,0x8(%esp)
 84a3afc:	00 
 84a3afd:	c7 44 24 04 00 dc c7 	movl   $0x8c7dc00,0x4(%esp)
 84a3b04:	08 
 84a3b05:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a3b08:	89 04 24             	mov    %eax,(%esp)
 84a3b0b:	e8 08 bc 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a3b10:	c7 44 24 04 34 ce c7 	movl   $0x8c7ce34,0x4(%esp)
 84a3b17:	08 
 84a3b18:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84a3b1b:	89 04 24             	mov    %eax,(%esp)
 84a3b1e:	e8 65 bc 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a3b23:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3b28:	eb 05                	jmp    84a3b2f <_ZN17expert_extraction20CEnchanterExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x369>
 84a3b2a:	b8 01 00 00 00       	mov    $0x1,%eax
 84a3b2f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84a3b32:	c9                   	leave
 84a3b33:	c3                   	ret

```

```c
// expert_extraction::CEnchanterExtraction::extraction @ 0x84a37c6

/* expert_extraction::CEnchanterExtraction::extraction(CUser*, short, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
expert_extraction::CEnchanterExtraction::extraction
          (CEnchanterExtraction *this,CUser *param_1,short param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 local_ad;
  undefined2 uStack_ab;
  undefined2 uStack_a9;
  undefined2 uStack_a7;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined1 local_71;
  ulong local_70;
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  int local_4c [2];
  undefined4 local_44;
  cMyTrace local_40 [16];
  int local_30;
  undefined4 local_2c;
  STExpertJobScript *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
  *local_18;
  int local_14;
  uint local_10;
  
  local_30 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_ad,local_30);
  iVar3 = CONCAT22(uStack_a9,uStack_ab);
  this_00 = (CDataManager *)G_CDataManager();
  local_2c = CDataManager::find_item(this_00,iVar3);
  iVar3 = G_CDataManager();
  local_28 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
  local_24 = (int *)STExpertJobScript::GetEnchanterExtractionResultInfo(local_28);
  local_20 = *local_24;
  local_70 = local_20 - 1;
  local_1c = CMTRand::randInt(*(CMTRand **)(this + 4),&local_70);
  local_1c = local_1c + 1;
  local_18 = (vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              *)(local_24 + 1);
  iVar3 = std::
          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
          ::size(local_18);
  if (iVar3 == 0) {
    uVar4 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_18);
    cMyTrace::cMyTrace(local_6c,
                       "virtual bool expert_extraction::CEnchanterExtraction::extraction(CUser*, short int, IntPairVector&)"
                       ,0x169,5);
    cMyTrace::operator()(local_6c,"CEnchanterExtraction::extraction ERROR : size(%d)",uVar4);
    uVar4 = 0;
  }
  else {
    iVar3 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_18);
    if ((iVar3 == 0) || (local_20 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = std::
              vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              ::size(local_18);
      cMyTrace::cMyTrace(local_5c,
                         "virtual bool expert_extraction::CEnchanterExtraction::extraction(CUser*, short int, IntPairVector&)"
                         ,0x16e,5);
      cMyTrace::operator()
                (local_5c,"CEnchanterExtraction::extraction ERROR : size(%d), sum(%d)",uVar4,
                 local_20);
      uVar4 = 0;
    }
    else {
      local_14 = 0;
      local_10 = 0;
      while( true ) {
        uVar6 = std::
                vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                ::size(local_18);
        if (uVar6 <= local_10) break;
        if (local_14 < local_1c) {
          iVar3 = std::
                  vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                  ::operator[](local_18,local_10);
          if ((int)((uint)*(ushort *)(iVar3 + 4) + local_14) < local_1c) goto LAB_084a39b0;
          bVar1 = true;
        }
        else {
LAB_084a39b0:
          bVar1 = false;
        }
        if (bVar1) {
          local_44 = (**(code **)(*(int *)this + 0x18))
                               (this,CONCAT22(uStack_ab,local_ad),CONCAT22(uStack_a7,uStack_a9),
                                local_a5,local_a1,local_9d,local_99,local_95,local_91,local_8d,
                                local_89,local_85,local_81,local_7d,local_79,local_75,local_71);
          piVar5 = (int *)std::
                          vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                          ::operator[](local_18,local_10);
          std::make_pair<int&,int>(local_4c,piVar5);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                     (pair *)local_4c);
          break;
        }
        iVar3 = std::
                vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                ::operator[](local_18,local_10);
        local_14 = local_14 + (uint)*(ushort *)(iVar3 + 4);
        local_10 = local_10 + 1;
      }
      cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
      if (cVar2 == '\0') {
        uVar4 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_40,
                           "virtual bool expert_extraction::CEnchanterExtraction::extraction(CUser*, short int, IntPairVector&)"
                           ,0x17f,5);
        cMyTrace::operator()(local_40,"CEnchanterExtraction::extraction ERROR : result is empty");
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```

---

## get_extraction_count

```asm
// === 084a3b34 expert_extraction::CEnchanterExtraction::get_extraction_count  [0x084a3b34-0x84a3b91] ===
 84a3b34:	55                   	push   %ebp
 84a3b35:	89 e5                	mov    %esp,%ebp
 84a3b37:	53                   	push   %ebx
 84a3b38:	83 ec 24             	sub    $0x24,%esp
 84a3b3b:	8b 45 0e             	mov    0xe(%ebp),%eax
 84a3b3e:	89 c3                	mov    %eax,%ebx
 84a3b40:	e8 56 86 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3b45:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a3b49:	89 04 24             	mov    %eax,(%esp)
 84a3b4c:	e8 e1 be eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a3b51:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a3b54:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a3b57:	89 04 24             	mov    %eax,(%esp)
 84a3b5a:	e8 f5 d0 c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a3b5f:	89 c1                	mov    %eax,%ecx
 84a3b61:	ba 67 66 66 66       	mov    $0x66666667,%edx
 84a3b66:	89 c8                	mov    %ecx,%eax
 84a3b68:	f7 ea                	imul   %edx
 84a3b6a:	c1 fa 02             	sar    $0x2,%edx
 84a3b6d:	89 c8                	mov    %ecx,%eax
 84a3b6f:	c1 f8 1f             	sar    $0x1f,%eax
 84a3b72:	89 d1                	mov    %edx,%ecx
 84a3b74:	29 c1                	sub    %eax,%ecx
 84a3b76:	89 c8                	mov    %ecx,%eax
 84a3b78:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a3b7b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a3b7f:	75 07                	jne    84a3b88 <_ZN17expert_extraction20CEnchanterExtraction20get_extraction_countE10Inven_Item+0x54>
 84a3b81:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 84a3b88:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3b8b:	83 c4 24             	add    $0x24,%esp
 84a3b8e:	5b                   	pop    %ebx
 84a3b8f:	5d                   	pop    %ebp
 84a3b90:	c3                   	ret
 84a3b91:	90                   	nop

```

```c
// expert_extraction::CEnchanterExtraction::get_extraction_count @ 0x84a3b34

/* expert_extraction::CEnchanterExtraction::get_extraction_count(Inven_Item) */

int __thiscall
expert_extraction::CEnchanterExtraction::get_extraction_count(undefined4 this,undefined8 param_2)

{
  CDataManager *this_00;
  CItem *this_01;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2._2_4_);
  local_10 = CItem::get_grade(this_01);
  local_10 = local_10 / 10;
  if (local_10 == 0) {
    local_10 = 1;
  }
  return local_10;
}

```

