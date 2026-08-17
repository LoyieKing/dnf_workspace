# expert_extraction__CAlchemistExtraction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _check_error

```asm
// === 084a35f2 expert_extraction::CAlchemistExtraction::_check_error  [0x084a35f2-0x84a3715] ===
 84a35f2:	55                   	push   %ebp
 84a35f3:	89 e5                	mov    %esp,%ebp
 84a35f5:	53                   	push   %ebx
 84a35f6:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 84a35fc:	8b 55 10             	mov    0x10(%ebp),%edx
 84a35ff:	8b 45 14             	mov    0x14(%ebp),%eax
 84a3602:	66 89 95 64 ff ff ff 	mov    %dx,-0x9c(%ebp)
 84a3609:	66 89 85 60 ff ff ff 	mov    %ax,-0xa0(%ebp)
 84a3610:	0f bf 9d 64 ff ff ff 	movswl -0x9c(%ebp),%ebx
 84a3617:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a361a:	89 04 24             	mov    %eax,(%esp)
 84a361d:	e8 5c 6c c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a3622:	8d 55 a7             	lea    -0x59(%ebp),%edx
 84a3625:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a3629:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a3630:	00 
 84a3631:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3635:	89 14 24             	mov    %edx,(%esp)
 84a3638:	e8 db 82 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a363d:	83 ec 04             	sub    $0x4,%esp
 84a3640:	8b 45 a9             	mov    -0x57(%ebp),%eax
 84a3643:	89 c3                	mov    %eax,%ebx
 84a3645:	e8 51 8b c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a364a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a364e:	89 04 24             	mov    %eax,(%esp)
 84a3651:	e8 dc c3 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a3656:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a3659:	0f bf 9d 60 ff ff ff 	movswl -0xa0(%ebp),%ebx
 84a3660:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3663:	89 04 24             	mov    %eax,(%esp)
 84a3666:	e8 13 6c c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a366b:	8d 95 6a ff ff ff    	lea    -0x96(%ebp),%edx
 84a3671:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a3675:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a367c:	00 
 84a367d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3681:	89 14 24             	mov    %edx,(%esp)
 84a3684:	e8 8f 82 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a3689:	83 ec 04             	sub    $0x4,%esp
 84a368c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84a3692:	89 c3                	mov    %eax,%ebx
 84a3694:	e8 02 8b c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3699:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a369d:	89 04 24             	mov    %eax,(%esp)
 84a36a0:	e8 8d c3 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a36a5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a36a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a36ab:	8b 80 34 03 00 00    	mov    0x334(%eax),%eax
 84a36b1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a36b4:	e8 e2 8a c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a36b9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84a36c0:	00 
 84a36c1:	89 04 24             	mov    %eax,(%esp)
 84a36c4:	e8 29 7f d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 84a36c9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84a36cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a36d0:	89 04 24             	mov    %eax,(%esp)
 84a36d3:	e8 de 0d 00 00       	call   84a44b6 <_ZN17STExpertJobScript35GetAlchemistExtractionPossibleLevelEi>
 84a36d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a36db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a36de:	89 04 24             	mov    %eax,(%esp)
 84a36e1:	e8 08 dc c4 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 84a36e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a36e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a36ed:	75 0e                	jne    84a36fd <_ZN17expert_extraction20CAlchemistExtraction12_check_errorEP5CUserss+0x10b>
 84a36ef:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a36f2:	89 04 24             	mov    %eax,(%esp)
 84a36f5:	e8 5a d5 c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a36fa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a36fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3700:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84a3703:	7e 07                	jle    84a370c <_ZN17expert_extraction20CAlchemistExtraction12_check_errorEP5CUserss+0x11a>
 84a3705:	b8 0d 00 00 00       	mov    $0xd,%eax
 84a370a:	eb 05                	jmp    84a3711 <_ZN17expert_extraction20CAlchemistExtraction12_check_errorEP5CUserss+0x11f>
 84a370c:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3711:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84a3714:	c9                   	leave
 84a3715:	c3                   	ret

```

```c
// expert_extraction::CAlchemistExtraction::_check_error @ 0x84a35f2

/* expert_extraction::CAlchemistExtraction::_check_error(CUser*, short, short) */

undefined4
expert_extraction::CAlchemistExtraction::_check_error(CUser *param_1,short param_2,short param_3)

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
  local_18 = *(undefined4 *)(local_20 + 0x334);
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::GetExpertJobScript(iVar1);
  local_14 = STExpertJobScript::GetAlchemistExtractionPossibleLevel(iVar1);
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
// === 084a3716 expert_extraction::CAlchemistExtraction::check_error  [0x084a3716-0x84a37c5] ===
 84a3716:	55                   	push   %ebp
 84a3717:	89 e5                	mov    %esp,%ebp
 84a3719:	53                   	push   %ebx
 84a371a:	83 ec 44             	sub    $0x44,%esp
 84a371d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84a3720:	8b 55 14             	mov    0x14(%ebp),%edx
 84a3723:	8b 45 18             	mov    0x18(%ebp),%eax
 84a3726:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 84a3729:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 84a372d:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 84a3731:	0f bf 5d dc          	movswl -0x24(%ebp),%ebx
 84a3735:	0f bf 4d e0          	movswl -0x20(%ebp),%ecx
 84a3739:	0f be 55 e4          	movsbl -0x1c(%ebp),%edx
 84a373d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3740:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84a3744:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84a3748:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a374c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a374f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3753:	89 04 24             	mov    %eax,(%esp)
 84a3756:	e8 03 f3 ff ff       	call   84a2a5e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss>
 84a375b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a375e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a3762:	74 05                	je     84a3769 <_ZN17expert_extraction20CAlchemistExtraction11check_errorEP5CUsercss+0x53>
 84a3764:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3767:	eb 56                	jmp    84a37bf <_ZN17expert_extraction20CAlchemistExtraction11check_errorEP5CUsercss+0xa9>
 84a3769:	8b 45 08             	mov    0x8(%ebp),%eax
 84a376c:	8b 00                	mov    (%eax),%eax
 84a376e:	83 c0 14             	add    $0x14,%eax
 84a3771:	8b 08                	mov    (%eax),%ecx
 84a3773:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3776:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a3779:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a377d:	89 04 24             	mov    %eax,(%esp)
 84a3780:	ff d1                	call   *%ecx
 84a3782:	83 f0 01             	xor    $0x1,%eax
 84a3785:	84 c0                	test   %al,%al
 84a3787:	74 07                	je     84a3790 <_ZN17expert_extraction20CAlchemistExtraction11check_errorEP5CUsercss+0x7a>
 84a3789:	b8 04 00 00 00       	mov    $0x4,%eax
 84a378e:	eb 2f                	jmp    84a37bf <_ZN17expert_extraction20CAlchemistExtraction11check_errorEP5CUsercss+0xa9>
 84a3790:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3793:	8b 00                	mov    (%eax),%eax
 84a3795:	83 c0 1c             	add    $0x1c,%eax
 84a3798:	8b 08                	mov    (%eax),%ecx
 84a379a:	0f bf 55 dc          	movswl -0x24(%ebp),%edx
 84a379e:	0f bf 45 e0          	movswl -0x20(%ebp),%eax
 84a37a2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a37a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a37aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a37ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a37b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a37b4:	89 04 24             	mov    %eax,(%esp)
 84a37b7:	ff d1                	call   *%ecx
 84a37b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a37bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a37bf:	83 c4 44             	add    $0x44,%esp
 84a37c2:	5b                   	pop    %ebx
 84a37c3:	5d                   	pop    %ebp
 84a37c4:	c3                   	ret
 84a37c5:	90                   	nop

```

```c
// expert_extraction::CAlchemistExtraction::check_error @ 0x84a3716

/* expert_extraction::CAlchemistExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CAlchemistExtraction::check_error
          (CAlchemistExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

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
// === 084a3182 expert_extraction::CAlchemistExtraction::extraction  [0x084a3182-0x84a355b] ===
 84a3182:	55                   	push   %ebp
 84a3183:	89 e5                	mov    %esp,%ebp
 84a3185:	53                   	push   %ebx
 84a3186:	81 ec 14 01 00 00    	sub    $0x114,%esp
 84a318c:	8b 45 10             	mov    0x10(%ebp),%eax
 84a318f:	66 89 85 44 ff ff ff 	mov    %ax,-0xbc(%ebp)
 84a3196:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3199:	89 04 24             	mov    %eax,(%esp)
 84a319c:	e8 dd 70 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a31a1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84a31a4:	0f bf 95 44 ff ff ff 	movswl -0xbc(%ebp),%edx
 84a31ab:	8d 85 53 ff ff ff    	lea    -0xad(%ebp),%eax
 84a31b1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a31b5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a31bc:	00 
 84a31bd:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84a31c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a31c4:	89 04 24             	mov    %eax,(%esp)
 84a31c7:	e8 4c 87 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a31cc:	83 ec 04             	sub    $0x4,%esp
 84a31cf:	8b 85 55 ff ff ff    	mov    -0xab(%ebp),%eax
 84a31d5:	89 c3                	mov    %eax,%ebx
 84a31d7:	e8 bf 8f c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a31dc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a31e0:	89 04 24             	mov    %eax,(%esp)
 84a31e3:	e8 4a c8 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a31e8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84a31eb:	e8 ab 8f c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a31f0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84a31f7:	00 
 84a31f8:	89 04 24             	mov    %eax,(%esp)
 84a31fb:	e8 f2 83 d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 84a3200:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84a3203:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84a3206:	89 04 24             	mov    %eax,(%esp)
 84a3209:	e8 04 14 00 00       	call   84a4612 <_ZN17STExpertJobScript32GetAlchemistExtractionResultInfoEv>
 84a320e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a3211:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84a3214:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3218:	8b 45 08             	mov    0x8(%ebp),%eax
 84a321b:	89 04 24             	mov    %eax,(%esp)
 84a321e:	e8 39 03 00 00       	call   84a355c <_ZN17expert_extraction20CAlchemistExtraction29get_alchemist_extraction_typeEPK10CEquipItem>
 84a3223:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a3226:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 84a322a:	75 3d                	jne    84a3269 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0xe7>
 84a322c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a322f:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a3233:	c7 44 24 10 a0 cc c7 	movl   $0x8c7cca0,0x10(%esp)
 84a323a:	08 
 84a323b:	c7 44 24 0c e0 00 00 	movl   $0xe0,0xc(%esp)
 84a3242:	00 
 84a3243:	c7 44 24 08 80 dc c7 	movl   $0x8c7dc80,0x8(%esp)
 84a324a:	08 
 84a324b:	c7 44 24 04 d9 cc c7 	movl   $0x8c7ccd9,0x4(%esp)
 84a3252:	08 
 84a3253:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84a325a:	e8 ab 09 63 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84a325f:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3264:	e9 ed 02 00 00       	jmp    84a3556 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a3269:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84a326c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a326f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 84a3272:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a3275:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a3278:	83 e8 01             	sub    $0x1,%eax
 84a327b:	89 45 90             	mov    %eax,-0x70(%ebp)
 84a327e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3281:	8b 40 04             	mov    0x4(%eax),%eax
 84a3284:	8d 55 90             	lea    -0x70(%ebp),%edx
 84a3287:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a328b:	89 04 24             	mov    %eax,(%esp)
 84a328e:	e8 2b 88 c2 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 84a3293:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a3296:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84a329a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84a329d:	89 d0                	mov    %edx,%eax
 84a329f:	01 c0                	add    %eax,%eax
 84a32a1:	01 d0                	add    %edx,%eax
 84a32a3:	c1 e0 02             	shl    $0x2,%eax
 84a32a6:	03 45 dc             	add    -0x24(%ebp),%eax
 84a32a9:	83 c0 0c             	add    $0xc,%eax
 84a32ac:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a32af:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a32b2:	89 04 24             	mov    %eax,(%esp)
 84a32b5:	e8 fc 3d d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a32ba:	85 c0                	test   %eax,%eax
 84a32bc:	0f 94 c0             	sete   %al
 84a32bf:	84 c0                	test   %al,%al
 84a32c1:	74 51                	je     84a3314 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x192>
 84a32c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a32c6:	89 04 24             	mov    %eax,(%esp)
 84a32c9:	e8 e8 3d d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a32ce:	89 c3                	mov    %eax,%ebx
 84a32d0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a32d7:	00 
 84a32d8:	c7 44 24 08 ec 00 00 	movl   $0xec,0x8(%esp)
 84a32df:	00 
 84a32e0:	c7 44 24 04 80 dc c7 	movl   $0x8c7dc80,0x4(%esp)
 84a32e7:	08 
 84a32e8:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84a32eb:	89 04 24             	mov    %eax,(%esp)
 84a32ee:	e8 25 c4 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a32f3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a32f7:	c7 44 24 04 e8 cc c7 	movl   $0x8c7cce8,0x4(%esp)
 84a32fe:	08 
 84a32ff:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84a3302:	89 04 24             	mov    %eax,(%esp)
 84a3305:	e8 7e c4 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a330a:	b8 00 00 00 00       	mov    $0x0,%eax
 84a330f:	e9 42 02 00 00       	jmp    84a3556 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a3314:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3317:	89 04 24             	mov    %eax,(%esp)
 84a331a:	e8 97 3d d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a331f:	85 c0                	test   %eax,%eax
 84a3321:	74 0d                	je     84a3330 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ae>
 84a3323:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84a3327:	75 07                	jne    84a3330 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ae>
 84a3329:	b8 01 00 00 00       	mov    $0x1,%eax
 84a332e:	eb 05                	jmp    84a3335 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1b3>
 84a3330:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3335:	84 c0                	test   %al,%al
 84a3337:	74 58                	je     84a3391 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x20f>
 84a3339:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a333c:	89 04 24             	mov    %eax,(%esp)
 84a333f:	e8 72 3d d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a3344:	89 c3                	mov    %eax,%ebx
 84a3346:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a334d:	00 
 84a334e:	c7 44 24 08 f1 00 00 	movl   $0xf1,0x8(%esp)
 84a3355:	00 
 84a3356:	c7 44 24 04 80 dc c7 	movl   $0x8c7dc80,0x4(%esp)
 84a335d:	08 
 84a335e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84a3361:	89 04 24             	mov    %eax,(%esp)
 84a3364:	e8 af c3 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a3369:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a336c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a3370:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a3374:	c7 44 24 04 1c cd c7 	movl   $0x8c7cd1c,0x4(%esp)
 84a337b:	08 
 84a337c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84a337f:	89 04 24             	mov    %eax,(%esp)
 84a3382:	e8 01 c4 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a3387:	b8 00 00 00 00       	mov    $0x0,%eax
 84a338c:	e9 c5 01 00 00       	jmp    84a3556 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a3391:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84a3398:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a339f:	e9 48 01 00 00       	jmp    84a34ec <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x36a>
 84a33a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a33a7:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84a33aa:	7d 28                	jge    84a33d4 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x252>
 84a33ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a33af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a33b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a33b6:	89 04 24             	mov    %eax,(%esp)
 84a33b9:	e8 d2 12 00 00       	call   84a4690 <_ZNSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 84a33be:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84a33c2:	0f b7 c0             	movzwl %ax,%eax
 84a33c5:	03 45 f0             	add    -0x10(%ebp),%eax
 84a33c8:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84a33cb:	7c 07                	jl     84a33d4 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x252>
 84a33cd:	b8 01 00 00 00       	mov    $0x1,%eax
 84a33d2:	eb 05                	jmp    84a33d9 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x257>
 84a33d4:	b8 00 00 00 00       	mov    $0x0,%eax
 84a33d9:	84 c0                	test   %al,%al
 84a33db:	0f 84 eb 00 00 00    	je     84a34cc <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x34a>
 84a33e1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a33e4:	8b 00                	mov    (%eax),%eax
 84a33e6:	83 c0 18             	add    $0x18,%eax
 84a33e9:	8b 10                	mov    (%eax),%edx
 84a33eb:	8b 85 53 ff ff ff    	mov    -0xad(%ebp),%eax
 84a33f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a33f5:	8b 85 57 ff ff ff    	mov    -0xa9(%ebp),%eax
 84a33fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a33ff:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 84a3405:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a3409:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 84a340f:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a3413:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 84a3419:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a341d:	8b 85 67 ff ff ff    	mov    -0x99(%ebp),%eax
 84a3423:	89 44 24 18          	mov    %eax,0x18(%esp)
 84a3427:	8b 85 6b ff ff ff    	mov    -0x95(%ebp),%eax
 84a342d:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84a3431:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 84a3437:	89 44 24 20          	mov    %eax,0x20(%esp)
 84a343b:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 84a3441:	89 44 24 24          	mov    %eax,0x24(%esp)
 84a3445:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 84a344b:	89 44 24 28          	mov    %eax,0x28(%esp)
 84a344f:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 84a3455:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84a3459:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 84a345f:	89 44 24 30          	mov    %eax,0x30(%esp)
 84a3463:	8b 45 83             	mov    -0x7d(%ebp),%eax
 84a3466:	89 44 24 34          	mov    %eax,0x34(%esp)
 84a346a:	8b 45 87             	mov    -0x79(%ebp),%eax
 84a346d:	89 44 24 38          	mov    %eax,0x38(%esp)
 84a3471:	8b 45 8b             	mov    -0x75(%ebp),%eax
 84a3474:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84a3478:	0f b6 45 8f          	movzbl -0x71(%ebp),%eax
 84a347c:	88 44 24 40          	mov    %al,0x40(%esp)
 84a3480:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3483:	89 04 24             	mov    %eax,(%esp)
 84a3486:	ff d2                	call   *%edx
 84a3488:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84a348b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a348e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3492:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3495:	89 04 24             	mov    %eax,(%esp)
 84a3498:	e8 f3 11 00 00       	call   84a4690 <_ZNSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 84a349d:	89 c2                	mov    %eax,%edx
 84a349f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a34a2:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 84a34a5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84a34a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a34ad:	89 04 24             	mov    %eax,(%esp)
 84a34b0:	e8 e4 a2 c3 ff       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 84a34b5:	83 ec 04             	sub    $0x4,%esp
 84a34b8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a34bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a34bf:	8b 45 14             	mov    0x14(%ebp),%eax
 84a34c2:	89 04 24             	mov    %eax,(%esp)
 84a34c5:	e8 3c a1 c3 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 84a34ca:	eb 39                	jmp    84a3505 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x383>
 84a34cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a34cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a34d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a34d6:	89 04 24             	mov    %eax,(%esp)
 84a34d9:	e8 b2 11 00 00       	call   84a4690 <_ZNSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EEixEj>
 84a34de:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84a34e2:	0f b7 c0             	movzwl %ax,%eax
 84a34e5:	01 45 f0             	add    %eax,-0x10(%ebp)
 84a34e8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a34ec:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a34ef:	89 04 24             	mov    %eax,(%esp)
 84a34f2:	e8 bf 3b d9 ff       	call   82370b6 <_ZNKSt6vectorIN17STExpertJobScript23stMonsterCardBindResultESaIS1_EE4sizeEv>
 84a34f7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84a34fa:	0f 97 c0             	seta   %al
 84a34fd:	84 c0                	test   %al,%al
 84a34ff:	0f 85 9f fe ff ff    	jne    84a33a4 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x222>
 84a3505:	8b 45 14             	mov    0x14(%ebp),%eax
 84a3508:	89 04 24             	mov    %eax,(%esp)
 84a350b:	e8 8a dc c6 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 84a3510:	84 c0                	test   %al,%al
 84a3512:	74 3d                	je     84a3551 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3cf>
 84a3514:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a351b:	00 
 84a351c:	c7 44 24 08 02 01 00 	movl   $0x102,0x8(%esp)
 84a3523:	00 
 84a3524:	c7 44 24 04 80 dc c7 	movl   $0x8c7dc80,0x4(%esp)
 84a352b:	08 
 84a352c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84a352f:	89 04 24             	mov    %eax,(%esp)
 84a3532:	e8 e1 c1 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a3537:	c7 44 24 04 58 cd c7 	movl   $0x8c7cd58,0x4(%esp)
 84a353e:	08 
 84a353f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84a3542:	89 04 24             	mov    %eax,(%esp)
 84a3545:	e8 3e c2 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a354a:	b8 00 00 00 00       	mov    $0x0,%eax
 84a354f:	eb 05                	jmp    84a3556 <_ZN17expert_extraction20CAlchemistExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a3551:	b8 01 00 00 00       	mov    $0x1,%eax
 84a3556:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84a3559:	c9                   	leave
 84a355a:	c3                   	ret
 84a355b:	90                   	nop

```

```c
// expert_extraction::CAlchemistExtraction::extraction @ 0x84a3182

/* expert_extraction::CAlchemistExtraction::extraction(CUser*, short, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
expert_extraction::CAlchemistExtraction::extraction
          (CAlchemistExtraction *this,CUser *param_1,short param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 local_b1;
  undefined2 uStack_af;
  undefined2 uStack_ad;
  undefined2 uStack_ab;
  undefined4 local_a9;
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
  undefined1 local_75;
  ulong local_74;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  int local_50 [2];
  undefined4 local_48;
  cMyTrace local_44 [16];
  int local_34;
  CEquipItem *local_30;
  STExpertJobScript *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
  *local_18;
  int local_14;
  uint local_10;
  
  local_34 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_b1,local_34);
  iVar3 = CONCAT22(uStack_ad,uStack_af);
  this_00 = (CDataManager *)G_CDataManager();
  local_30 = (CEquipItem *)CDataManager::find_item(this_00,iVar3);
  iVar3 = G_CDataManager();
  local_2c = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
  local_28 = STExpertJobScript::GetAlchemistExtractionResultInfo(local_2c);
  local_24 = get_alchemist_extraction_type(this,local_30);
  if (local_24 == 3) {
    LogManager::logFormat
              (1,"Extraction.cpp",
               "virtual bool expert_extraction::CAlchemistExtraction::extraction(CUser*, short int, IntPairVector&)"
               ,0xe0,"CAlchemistExtraction::extraction ERROR : result_type(%d)",3);
    uVar4 = 0;
  }
  else {
    local_20 = *(int *)(local_28 + local_24 * 4);
    local_74 = local_20 - 1;
    local_1c = CMTRand::randInt(*(CMTRand **)(this + 4),&local_74);
    local_1c = local_1c + 1;
    local_18 = (vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                *)(local_24 * 0xc + local_28 + 0xc);
    iVar3 = std::
            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
            ::size(local_18);
    if (iVar3 == 0) {
      uVar4 = std::
              vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
              ::size(local_18);
      cMyTrace::cMyTrace(local_70,
                         "virtual bool expert_extraction::CAlchemistExtraction::extraction(CUser*, short int, IntPairVector&)"
                         ,0xec,5);
      cMyTrace::operator()(local_70,"CAlchemistExtraction::extraction ERROR : size(%d)",uVar4);
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
        cMyTrace::cMyTrace(local_60,
                           "virtual bool expert_extraction::CAlchemistExtraction::extraction(CUser*, short int, IntPairVector&)"
                           ,0xf1,5);
        cMyTrace::operator()
                  (local_60,"CAlchemistExtraction::extraction ERROR : size(%d), sum(%d)",uVar4,
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
            if ((int)((uint)*(ushort *)(iVar3 + 4) + local_14) < local_1c) goto LAB_084a33d4;
            bVar1 = true;
          }
          else {
LAB_084a33d4:
            bVar1 = false;
          }
          if (bVar1) {
            local_48 = (**(code **)(*(int *)this + 0x18))
                                 (this,CONCAT22(uStack_af,local_b1),CONCAT22(uStack_ab,uStack_ad),
                                  local_a9,local_a5,local_a1,local_9d,local_99,local_95,local_91,
                                  local_8d,local_89,local_85,local_81,local_7d,local_79,local_75);
            piVar5 = (int *)std::
                            vector<STExpertJobScript::stMonsterCardBindResult,std::allocator<STExpertJobScript::stMonsterCardBindResult>>
                            ::operator[](local_18,local_10);
            std::make_pair<int&,int>(local_50,piVar5);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                       (pair *)local_50);
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
          cMyTrace::cMyTrace(local_44,
                             "virtual bool expert_extraction::CAlchemistExtraction::extraction(CUser*, short int, IntPairVector&)"
                             ,0x102,5);
          cMyTrace::operator()(local_44,"CAlchemistExtraction::extraction ERROR : result is empty");
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}

```

---

## get_alchemist_extraction_type

```asm
// === 084a355c expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type  [0x084a355c-0x84a3595] ===
 84a355c:	55                   	push   %ebp
 84a355d:	89 e5                	mov    %esp,%ebp
 84a355f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3562:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 84a3568:	83 e8 0a             	sub    $0xa,%eax
 84a356b:	83 f8 0b             	cmp    $0xb,%eax
 84a356e:	77 1e                	ja     84a358e <_ZN17expert_extraction20CAlchemistExtraction29get_alchemist_extraction_typeEPK10CEquipItem+0x32>
 84a3570:	8b 04 85 94 cd c7 08 	mov    0x8c7cd94(,%eax,4),%eax
 84a3577:	ff e0                	jmp    *%eax
 84a3579:	b8 02 00 00 00       	mov    $0x2,%eax
 84a357e:	eb 13                	jmp    84a3593 <_ZN17expert_extraction20CAlchemistExtraction29get_alchemist_extraction_typeEPK10CEquipItem+0x37>
 84a3580:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3585:	eb 0c                	jmp    84a3593 <_ZN17expert_extraction20CAlchemistExtraction29get_alchemist_extraction_typeEPK10CEquipItem+0x37>
 84a3587:	b8 01 00 00 00       	mov    $0x1,%eax
 84a358c:	eb 05                	jmp    84a3593 <_ZN17expert_extraction20CAlchemistExtraction29get_alchemist_extraction_typeEPK10CEquipItem+0x37>
 84a358e:	b8 03 00 00 00       	mov    $0x3,%eax
 84a3593:	5d                   	pop    %ebp
 84a3594:	c3                   	ret
 84a3595:	90                   	nop

```

```c
// expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type @ 0x84a355c

/* expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type(CEquipItem const*) */

undefined4 __thiscall
expert_extraction::CAlchemistExtraction::get_alchemist_extraction_type
          (CAlchemistExtraction *this,CEquipItem *param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x234)) {
  case 10:
    uVar1 = 2;
    break;
  default:
    uVar1 = 3;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar1 = 0;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## get_extraction_count

```asm
// === 084a3596 expert_extraction::CAlchemistExtraction::get_extraction_count  [0x084a3596-0x84a35f1] ===
 84a3596:	55                   	push   %ebp
 84a3597:	89 e5                	mov    %esp,%ebp
 84a3599:	53                   	push   %ebx
 84a359a:	83 ec 24             	sub    $0x24,%esp
 84a359d:	8b 45 0e             	mov    0xe(%ebp),%eax
 84a35a0:	89 c3                	mov    %eax,%ebx
 84a35a2:	e8 f4 8b c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a35a7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a35ab:	89 04 24             	mov    %eax,(%esp)
 84a35ae:	e8 7f c4 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a35b3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a35b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a35b9:	89 04 24             	mov    %eax,(%esp)
 84a35bc:	e8 93 d6 c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a35c1:	89 c1                	mov    %eax,%ecx
 84a35c3:	ba 67 66 66 66       	mov    $0x66666667,%edx
 84a35c8:	89 c8                	mov    %ecx,%eax
 84a35ca:	f7 ea                	imul   %edx
 84a35cc:	d1 fa                	sar    $1,%edx
 84a35ce:	89 c8                	mov    %ecx,%eax
 84a35d0:	c1 f8 1f             	sar    $0x1f,%eax
 84a35d3:	89 d1                	mov    %edx,%ecx
 84a35d5:	29 c1                	sub    %eax,%ecx
 84a35d7:	89 c8                	mov    %ecx,%eax
 84a35d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a35dc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a35e0:	75 07                	jne    84a35e9 <_ZN17expert_extraction20CAlchemistExtraction20get_extraction_countE10Inven_Item+0x53>
 84a35e2:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 84a35e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a35ec:	83 c4 24             	add    $0x24,%esp
 84a35ef:	5b                   	pop    %ebx
 84a35f0:	5d                   	pop    %ebp
 84a35f1:	c3                   	ret

```

```c
// expert_extraction::CAlchemistExtraction::get_extraction_count @ 0x84a3596

/* expert_extraction::CAlchemistExtraction::get_extraction_count(Inven_Item) */

int __thiscall
expert_extraction::CAlchemistExtraction::get_extraction_count(undefined4 this,undefined8 param_2)

{
  CDataManager *this_00;
  CItem *this_01;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2._2_4_);
  local_10 = CItem::get_grade(this_01);
  local_10 = local_10 / 5;
  if (local_10 == 0) {
    local_10 = 1;
  }
  return local_10;
}

```

