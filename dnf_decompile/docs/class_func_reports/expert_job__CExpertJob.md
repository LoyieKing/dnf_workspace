# expert_job__CExpertJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GetSuccessRate

```asm
// === 0849b2e8 expert_job::CExpertJob::GetSuccessRate  [0x0849b2e8-0x849b461] ===
 849b2e8:	55                   	push   %ebp
 849b2e9:	89 e5                	mov    %esp,%ebp
 849b2eb:	53                   	push   %ebx
 849b2ec:	83 ec 44             	sub    $0x44,%esp
 849b2ef:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 849b2f6:	8b 45 10             	mov    0x10(%ebp),%eax
 849b2f9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 849b2ff:	8b 45 08             	mov    0x8(%ebp),%eax
 849b302:	89 04 24             	mov    %eax,(%esp)
 849b305:	e8 8a 45 d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849b30a:	89 c3                	mov    %eax,%ebx
 849b30c:	e8 8a 0e c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849b311:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849b315:	89 04 24             	mov    %eax,(%esp)
 849b318:	e8 d5 02 d9 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 849b31d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849b320:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 849b324:	75 0a                	jne    849b330 <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi+0x48>
 849b326:	b8 00 00 00 00       	mov    $0x0,%eax
 849b32b:	e9 2d 01 00 00       	jmp    849b45d <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi+0x175>
 849b330:	8b 45 0c             	mov    0xc(%ebp),%eax
 849b333:	89 04 24             	mov    %eax,(%esp)
 849b336:	e8 0d 59 c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849b33b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 849b33e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849b341:	8d 88 30 02 00 00    	lea    0x230(%eax),%ecx
 849b347:	8d 45 d8             	lea    -0x28(%ebp),%eax
 849b34a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 849b34d:	89 54 24 08          	mov    %edx,0x8(%esp)
 849b351:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 849b355:	89 04 24             	mov    %eax,(%esp)
 849b358:	e8 91 1f c3 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 849b35d:	83 ec 04             	sub    $0x4,%esp
 849b360:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849b363:	8d 90 30 02 00 00    	lea    0x230(%eax),%edx
 849b369:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849b36c:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b370:	89 04 24             	mov    %eax,(%esp)
 849b373:	e8 a2 1f c3 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 849b378:	83 ec 04             	sub    $0x4,%esp
 849b37b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849b37e:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b382:	8d 45 d8             	lea    -0x28(%ebp),%eax
 849b385:	89 04 24             	mov    %eax,(%esp)
 849b388:	e8 63 c5 c2 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 849b38d:	84 c0                	test   %al,%al
 849b38f:	74 0a                	je     849b39b <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi+0xb3>
 849b391:	b8 00 00 00 00       	mov    $0x0,%eax
 849b396:	e9 c2 00 00 00       	jmp    849b45d <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi+0x175>
 849b39b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 849b39e:	89 04 24             	mov    %eax,(%esp)
 849b3a1:	e8 9a 1f c3 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 849b3a6:	8b 58 04             	mov    0x4(%eax),%ebx
 849b3a9:	8b 45 08             	mov    0x8(%ebp),%eax
 849b3ac:	89 04 24             	mov    %eax,(%esp)
 849b3af:	e8 72 9c ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849b3b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b3b8:	8b 45 08             	mov    0x8(%ebp),%eax
 849b3bb:	89 04 24             	mov    %eax,(%esp)
 849b3be:	e8 b9 08 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849b3c3:	89 da                	mov    %ebx,%edx
 849b3c5:	29 c2                	sub    %eax,%edx
 849b3c7:	89 d0                	mov    %edx,%eax
 849b3c9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 849b3cc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849b3cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b3d3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849b3d6:	89 04 24             	mov    %eax,(%esp)
 849b3d9:	e8 88 3f 00 00       	call   849f366 <_ZN17STExpertJobScript15GetCompoundRateEi>
 849b3de:	89 45 ec             	mov    %eax,-0x14(%ebp)
 849b3e1:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 849b3e5:	75 07                	jne    849b3ee <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi+0x106>
 849b3e7:	b8 00 00 00 00       	mov    $0x0,%eax
 849b3ec:	eb 6f                	jmp    849b45d <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi+0x175>
 849b3ee:	8b 45 08             	mov    0x8(%ebp),%eax
 849b3f1:	89 04 24             	mov    %eax,(%esp)
 849b3f4:	e8 85 ee c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849b3f9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849b3fc:	8b 45 08             	mov    0x8(%ebp),%eax
 849b3ff:	89 04 24             	mov    %eax,(%esp)
 849b402:	e8 1f 9c ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849b407:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b40b:	8b 45 08             	mov    0x8(%ebp),%eax
 849b40e:	89 04 24             	mov    %eax,(%esp)
 849b411:	e8 66 08 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849b416:	89 c3                	mov    %eax,%ebx
 849b418:	8b 45 08             	mov    0x8(%ebp),%eax
 849b41b:	89 04 24             	mov    %eax,(%esp)
 849b41e:	e8 71 44 d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849b423:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849b427:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b42b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849b42e:	89 04 24             	mov    %eax,(%esp)
 849b431:	e8 24 15 07 00       	call   850c95a <_ZNK10CInventory33GetExpertJobCompoundRateVariationE20ENUM_EXPERT_JOB_TYPEi>
 849b436:	d9 5d f4             	fstps  -0xc(%ebp)
 849b439:	d9 45 f4             	flds   -0xc(%ebp)
 849b43c:	d9 7d d6             	fnstcw -0x2a(%ebp)
 849b43f:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 849b443:	b4 0c                	mov    $0xc,%ah
 849b445:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 849b449:	d9 6d d4             	fldcw  -0x2c(%ebp)
 849b44c:	db 5d d0             	fistpl -0x30(%ebp)
 849b44f:	d9 6d d6             	fldcw  -0x2a(%ebp)
 849b452:	8b 55 d0             	mov    -0x30(%ebp),%edx
 849b455:	8b 45 10             	mov    0x10(%ebp),%eax
 849b458:	89 10                	mov    %edx,(%eax)
 849b45a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849b45d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 849b460:	c9                   	leave
 849b461:	c3                   	ret

```

```c
// expert_job::CExpertJob::GetSuccessRate @ 0x849b2e8

/* expert_job::CExpertJob::GetSuccessRate(CUser*, CStackableItem const*, int&) */

int expert_job::CExpertJob::GetSuccessRate(CUser *param_1,CStackableItem *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longdouble lVar6;
  _Rb_tree_iterator<std::pair<int_const,int>> local_2c [4];
  undefined4 local_28;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  int local_20;
  STExpertJobScript *local_1c;
  int local_18;
  CInventory *local_14;
  
  local_20 = 0;
  *param_3 = 0;
  CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  local_1c = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar2);
  if (local_1c == (STExpertJobScript *)0x0) {
    local_18 = 0;
  }
  else {
    local_28 = CItem::get_index((CItem *)param_2);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_2c)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      (local_2c,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_2c);
      iVar2 = *(int *)(iVar2 + 4);
      iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
      local_20 = CUser::GetCurExpertJobLevel(param_1,iVar3);
      local_20 = iVar2 - local_20;
      local_18 = STExpertJobScript::GetCompoundRate(local_1c,local_20);
      if (local_18 == 0) {
        local_18 = 0;
      }
      else {
        local_14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        uVar4 = CUser::GetCurExpertJobLevel(param_1,iVar2);
        uVar5 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
        lVar6 = (longdouble)CInventory::GetExpertJobCompoundRateVariation(local_14,uVar5,uVar4);
        *param_3 = (int)ROUND((float)lVar6);
      }
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}

```

---

## IncreaseExpertJobExp

```asm
// === 0849ae40 expert_job::CExpertJob::IncreaseExpertJobExp  [0x0849ae40-0x849b2e7] ===
 849ae40:	55                   	push   %ebp
 849ae41:	89 e5                	mov    %esp,%ebp
 849ae43:	57                   	push   %edi
 849ae44:	56                   	push   %esi
 849ae45:	53                   	push   %ebx
 849ae46:	83 ec 7c             	sub    $0x7c,%esp
 849ae49:	8b 45 08             	mov    0x8(%ebp),%eax
 849ae4c:	89 04 24             	mov    %eax,(%esp)
 849ae4f:	e8 de 55 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849ae54:	85 c0                	test   %eax,%eax
 849ae56:	0f 95 c0             	setne  %al
 849ae59:	84 c0                	test   %al,%al
 849ae5b:	0f 84 7b 04 00 00    	je     849b2dc <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x49c>
 849ae61:	8b 45 08             	mov    0x8(%ebp),%eax
 849ae64:	89 04 24             	mov    %eax,(%esp)
 849ae67:	e8 28 4a d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849ae6c:	89 c3                	mov    %eax,%ebx
 849ae6e:	e8 28 13 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849ae73:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849ae77:	89 04 24             	mov    %eax,(%esp)
 849ae7a:	e8 73 07 d9 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 849ae7f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 849ae82:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 849ae86:	0f 84 50 04 00 00    	je     849b2dc <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x49c>
 849ae8c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849ae8f:	89 04 24             	mov    %eax,(%esp)
 849ae92:	e8 81 48 00 00       	call   849f718 <_ZNKSt6vectorI12ExpertJobExpSaIS0_EE4sizeEv>
 849ae97:	8d 50 ff             	lea    -0x1(%eax),%edx
 849ae9a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849ae9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 849aea1:	89 04 24             	mov    %eax,(%esp)
 849aea4:	e8 91 48 00 00       	call   849f73a <_ZNSt6vectorI12ExpertJobExpSaIS0_EEixEj>
 849aea9:	8b 00                	mov    (%eax),%eax
 849aeab:	89 45 c8             	mov    %eax,-0x38(%ebp)
 849aeae:	8b 45 c8             	mov    -0x38(%ebp),%eax
 849aeb1:	3b 45 0c             	cmp    0xc(%ebp),%eax
 849aeb4:	7d 06                	jge    849aebc <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x7c>
 849aeb6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 849aeb9:	89 45 0c             	mov    %eax,0xc(%ebp)
 849aebc:	c6 45 cf 00          	movb   $0x0,-0x31(%ebp)
 849aec0:	8b 45 08             	mov    0x8(%ebp),%eax
 849aec3:	89 04 24             	mov    %eax,(%esp)
 849aec6:	e8 5b a1 ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849aecb:	89 44 24 04          	mov    %eax,0x4(%esp)
 849aecf:	8b 45 08             	mov    0x8(%ebp),%eax
 849aed2:	89 04 24             	mov    %eax,(%esp)
 849aed5:	e8 a2 0d 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849aeda:	89 45 d0             	mov    %eax,-0x30(%ebp)
 849aedd:	8b 45 0c             	mov    0xc(%ebp),%eax
 849aee0:	89 44 24 04          	mov    %eax,0x4(%esp)
 849aee4:	8b 45 08             	mov    0x8(%ebp),%eax
 849aee7:	89 04 24             	mov    %eax,(%esp)
 849aeea:	e8 8d 0d 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849aeef:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 849aef2:	e8 a4 12 c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849aef7:	89 04 24             	mov    %eax,(%esp)
 849aefa:	e8 17 46 00 00       	call   849f516 <_ZN12CDataManager21GetExpertJobEtcScriptEv>
 849aeff:	89 45 d8             	mov    %eax,-0x28(%ebp)
 849af02:	8b 45 d0             	mov    -0x30(%ebp),%eax
 849af05:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 849af08:	74 79                	je     849af83 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x143>
 849af0a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 849af0d:	88 45 bf             	mov    %al,-0x41(%ebp)
 849af10:	8b 55 d8             	mov    -0x28(%ebp),%edx
 849af13:	8d 45 b8             	lea    -0x48(%ebp),%eax
 849af16:	8d 4d bf             	lea    -0x41(%ebp),%ecx
 849af19:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 849af1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 849af21:	89 04 24             	mov    %eax,(%esp)
 849af24:	e8 1d 4e 00 00       	call   849fd46 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE4findERS3_>
 849af29:	83 ec 04             	sub    $0x4,%esp
 849af2c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 849af2f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 849af32:	89 54 24 04          	mov    %edx,0x4(%esp)
 849af36:	89 04 24             	mov    %eax,(%esp)
 849af39:	e8 42 52 fb ff       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 849af3e:	83 ec 04             	sub    $0x4,%esp
 849af41:	8d 45 c0             	lea    -0x40(%ebp),%eax
 849af44:	89 44 24 04          	mov    %eax,0x4(%esp)
 849af48:	8d 45 b8             	lea    -0x48(%ebp),%eax
 849af4b:	89 04 24             	mov    %eax,(%esp)
 849af4e:	e8 53 52 fb ff       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 849af53:	84 c0                	test   %al,%al
 849af55:	74 7a                	je     849afd1 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x191>
 849af57:	8d 45 b8             	lea    -0x48(%ebp),%eax
 849af5a:	89 04 24             	mov    %eax,(%esp)
 849af5d:	e8 58 52 fb ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 849af62:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 849af66:	0f bf d8             	movswl %ax,%ebx
 849af69:	8b 45 08             	mov    0x8(%ebp),%eax
 849af6c:	89 04 24             	mov    %eax,(%esp)
 849af6f:	e8 44 f3 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 849af74:	39 c3                	cmp    %eax,%ebx
 849af76:	0f 9e c0             	setle  %al
 849af79:	84 c0                	test   %al,%al
 849af7b:	74 54                	je     849afd1 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x191>
 849af7d:	c6 45 cf 01          	movb   $0x1,-0x31(%ebp)
 849af81:	eb 4e                	jmp    849afd1 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x191>
 849af83:	8b 45 0c             	mov    0xc(%ebp),%eax
 849af86:	89 44 24 04          	mov    %eax,0x4(%esp)
 849af8a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849af8d:	89 04 24             	mov    %eax,(%esp)
 849af90:	e8 8b 44 00 00       	call   849f420 <_ZN17STExpertJobScript18isBoundaryExpValueEi>
 849af95:	84 c0                	test   %al,%al
 849af97:	74 25                	je     849afbe <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x17e>
 849af99:	8b 45 08             	mov    0x8(%ebp),%eax
 849af9c:	89 04 24             	mov    %eax,(%esp)
 849af9f:	e8 14 f3 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 849afa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 849afa8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 849afab:	89 04 24             	mov    %eax,(%esp)
 849afae:	e8 c9 44 00 00       	call   849f47c <_ZN20STExpertJobEtcScript21isExpertJobLimitLevelEi>
 849afb3:	84 c0                	test   %al,%al
 849afb5:	74 07                	je     849afbe <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x17e>
 849afb7:	b8 01 00 00 00       	mov    $0x1,%eax
 849afbc:	eb 05                	jmp    849afc3 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x183>
 849afbe:	b8 00 00 00 00       	mov    $0x0,%eax
 849afc3:	84 c0                	test   %al,%al
 849afc5:	74 0a                	je     849afd1 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x191>
 849afc7:	83 7d d0 0b          	cmpl   $0xb,-0x30(%ebp)
 849afcb:	74 04                	je     849afd1 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x191>
 849afcd:	c6 45 cf 01          	movb   $0x1,-0x31(%ebp)
 849afd1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 849afd4:	83 e8 01             	sub    $0x1,%eax
 849afd7:	89 c2                	mov    %eax,%edx
 849afd9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849afdc:	89 54 24 04          	mov    %edx,0x4(%esp)
 849afe0:	89 04 24             	mov    %eax,(%esp)
 849afe3:	e8 52 47 00 00       	call   849f73a <_ZNSt6vectorI12ExpertJobExpSaIS0_EEixEj>
 849afe8:	8b 00                	mov    (%eax),%eax
 849afea:	89 45 dc             	mov    %eax,-0x24(%ebp)
 849afed:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 849aff1:	83 f0 01             	xor    $0x1,%eax
 849aff4:	84 c0                	test   %al,%al
 849aff6:	74 0e                	je     849b006 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x1c6>
 849aff8:	8b 45 0c             	mov    0xc(%ebp),%eax
 849affb:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 849affe:	7e 06                	jle    849b006 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x1c6>
 849b000:	8b 45 dc             	mov    -0x24(%ebp),%eax
 849b003:	89 45 0c             	mov    %eax,0xc(%ebp)
 849b006:	80 7d cf 00          	cmpb   $0x0,-0x31(%ebp)
 849b00a:	75 10                	jne    849b01c <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x1dc>
 849b00c:	8b 45 08             	mov    0x8(%ebp),%eax
 849b00f:	89 04 24             	mov    %eax,(%esp)
 849b012:	e8 0f a0 ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849b017:	3b 45 0c             	cmp    0xc(%ebp),%eax
 849b01a:	74 07                	je     849b023 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x1e3>
 849b01c:	b8 01 00 00 00       	mov    $0x1,%eax
 849b021:	eb 05                	jmp    849b028 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x1e8>
 849b023:	b8 00 00 00 00       	mov    $0x0,%eax
 849b028:	84 c0                	test   %al,%al
 849b02a:	0f 84 ac 02 00 00    	je     849b2dc <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x49c>
 849b030:	8b 45 08             	mov    0x8(%ebp),%eax
 849b033:	8b 55 0c             	mov    0xc(%ebp),%edx
 849b036:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b03a:	89 04 24             	mov    %eax,(%esp)
 849b03d:	e8 28 45 00 00       	call   849f56a <_ZN15CUserCharacInfo24SetCurCharacExpertJobExpEi>
 849b042:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b045:	89 04 24             	mov    %eax,(%esp)
 849b048:	e8 ff 2c 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849b04d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b050:	89 04 24             	mov    %eax,(%esp)
 849b053:	e8 8e 08 c3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849b058:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 849b05f:	00 
 849b060:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849b067:	00 
 849b068:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b06b:	89 04 24             	mov    %eax,(%esp)
 849b06e:	e8 89 08 c3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849b073:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849b07a:	00 
 849b07b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b07e:	89 04 24             	mov    %eax,(%esp)
 849b081:	e8 9a 08 c3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849b086:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849b08d:	00 
 849b08e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b091:	89 04 24             	mov    %eax,(%esp)
 849b094:	e8 0b ee c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849b099:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b09c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849b0a3:	00 
 849b0a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b0a8:	8b 45 08             	mov    0x8(%ebp),%eax
 849b0ab:	89 04 24             	mov    %eax,(%esp)
 849b0ae:	e8 9b f3 1b 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 849b0b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849b0ba:	00 
 849b0bb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b0be:	89 04 24             	mov    %eax,(%esp)
 849b0c1:	e8 92 08 c3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849b0c6:	80 7d cf 00          	cmpb   $0x0,-0x31(%ebp)
 849b0ca:	0f 84 d2 01 00 00    	je     849b2a2 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x462>
 849b0d0:	8b 45 08             	mov    0x8(%ebp),%eax
 849b0d3:	89 04 24             	mov    %eax,(%esp)
 849b0d6:	e8 4b 9f ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849b0db:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b0df:	8b 45 08             	mov    0x8(%ebp),%eax
 849b0e2:	89 04 24             	mov    %eax,(%esp)
 849b0e5:	e8 92 0b 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849b0ea:	89 45 e0             	mov    %eax,-0x20(%ebp)
 849b0ed:	8b 45 08             	mov    0x8(%ebp),%eax
 849b0f0:	89 04 24             	mov    %eax,(%esp)
 849b0f3:	e8 9c 47 d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849b0f8:	89 c3                	mov    %eax,%ebx
 849b0fa:	8b 45 08             	mov    0x8(%ebp),%eax
 849b0fd:	89 04 24             	mov    %eax,(%esp)
 849b100:	e8 b3 f1 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 849b105:	8b 55 e0             	mov    -0x20(%ebp),%edx
 849b108:	89 54 24 10          	mov    %edx,0x10(%esp)
 849b10c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 849b110:	89 44 24 08          	mov    %eax,0x8(%esp)
 849b114:	c7 44 24 04 a1 b9 c7 	movl   $0x8c7b9a1,0x4(%esp)
 849b11b:	08 
 849b11c:	8b 45 08             	mov    0x8(%ebp),%eax
 849b11f:	89 04 24             	mov    %eax,(%esp)
 849b122:	e8 d7 17 1e 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 849b127:	e8 7b f2 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 849b12c:	8b 55 08             	mov    0x8(%ebp),%edx
 849b12f:	89 54 24 08          	mov    %edx,0x8(%esp)
 849b133:	8d 55 ac             	lea    -0x54(%ebp),%edx
 849b136:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b13a:	89 04 24             	mov    %eax,(%esp)
 849b13d:	e8 1a 98 c9 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 849b142:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 849b149:	e9 d2 00 00 00       	jmp    849b220 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x3e0>
 849b14e:	8b 45 08             	mov    0x8(%ebp),%eax
 849b151:	89 04 24             	mov    %eax,(%esp)
 849b154:	e8 cd 9e ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849b159:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b15d:	8b 45 08             	mov    0x8(%ebp),%eax
 849b160:	89 04 24             	mov    %eax,(%esp)
 849b163:	e8 14 0b 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849b168:	89 c6                	mov    %eax,%esi
 849b16a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849b16d:	8d 50 0c             	lea    0xc(%eax),%edx
 849b170:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849b173:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b177:	89 14 24             	mov    %edx,(%esp)
 849b17a:	e8 25 f7 c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 849b17f:	8b 38                	mov    (%eax),%edi
 849b181:	8b 45 08             	mov    0x8(%ebp),%eax
 849b184:	89 04 24             	mov    %eax,(%esp)
 849b187:	e8 94 2d c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 849b18c:	89 c3                	mov    %eax,%ebx
 849b18e:	8b 45 08             	mov    0x8(%ebp),%eax
 849b191:	89 04 24             	mov    %eax,(%esp)
 849b194:	e8 a7 3f d9 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 849b199:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 849b1a0:	00 
 849b1a1:	89 74 24 0c          	mov    %esi,0xc(%esp)
 849b1a5:	89 7c 24 08          	mov    %edi,0x8(%esp)
 849b1a9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849b1ad:	89 04 24             	mov    %eax,(%esp)
 849b1b0:	e8 07 8f 16 00       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 849b1b5:	8b 45 08             	mov    0x8(%ebp),%eax
 849b1b8:	89 04 24             	mov    %eax,(%esp)
 849b1bb:	e8 66 9e ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849b1c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b1c4:	8b 45 08             	mov    0x8(%ebp),%eax
 849b1c7:	89 04 24             	mov    %eax,(%esp)
 849b1ca:	e8 ad 0a 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849b1cf:	89 c6                	mov    %eax,%esi
 849b1d1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849b1d4:	8d 50 0c             	lea    0xc(%eax),%edx
 849b1d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849b1da:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b1de:	89 14 24             	mov    %edx,(%esp)
 849b1e1:	e8 be f6 c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 849b1e6:	8b 38                	mov    (%eax),%edi
 849b1e8:	8b 45 08             	mov    0x8(%ebp),%eax
 849b1eb:	89 04 24             	mov    %eax,(%esp)
 849b1ee:	e8 2d 2d c6 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 849b1f3:	89 c3                	mov    %eax,%ebx
 849b1f5:	8b 45 08             	mov    0x8(%ebp),%eax
 849b1f8:	89 04 24             	mov    %eax,(%esp)
 849b1fb:	e8 40 3f d9 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 849b200:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 849b207:	00 
 849b208:	89 74 24 0c          	mov    %esi,0xc(%esp)
 849b20c:	89 7c 24 08          	mov    %edi,0x8(%esp)
 849b210:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849b214:	89 04 24             	mov    %eax,(%esp)
 849b217:	e8 a0 8e 16 00       	call   86040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>
 849b21c:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 849b220:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849b223:	83 c0 0c             	add    $0xc,%eax
 849b226:	89 04 24             	mov    %eax,(%esp)
 849b229:	e8 e6 25 c4 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 849b22e:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 849b231:	0f 97 c0             	seta   %al
 849b234:	84 c0                	test   %al,%al
 849b236:	0f 85 12 ff ff ff    	jne    849b14e <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x30e>
 849b23c:	8b 45 08             	mov    0x8(%ebp),%eax
 849b23f:	89 04 24             	mov    %eax,(%esp)
 849b242:	e8 23 12 1d 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 849b247:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849b24a:	89 04 24             	mov    %eax,(%esp)
 849b24d:	e8 fa 2a 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849b252:	8d 5d a0             	lea    -0x60(%ebp),%ebx
 849b255:	8b 45 08             	mov    0x8(%ebp),%eax
 849b258:	89 04 24             	mov    %eax,(%esp)
 849b25b:	e8 46 f6 cf ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 849b260:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849b264:	89 04 24             	mov    %eax,(%esp)
 849b267:	e8 3c 09 21 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 849b26c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849b26f:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b273:	8b 45 08             	mov    0x8(%ebp),%eax
 849b276:	89 04 24             	mov    %eax,(%esp)
 849b279:	e8 3c d3 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849b27e:	eb 15                	jmp    849b295 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x455>
 849b280:	89 d3                	mov    %edx,%ebx
 849b282:	89 c6                	mov    %eax,%esi
 849b284:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849b287:	89 04 24             	mov    %eax,(%esp)
 849b28a:	e8 f1 2b 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849b28f:	89 f0                	mov    %esi,%eax
 849b291:	89 da                	mov    %ebx,%edx
 849b293:	eb 21                	jmp    849b2b6 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x476>
 849b295:	8d 45 a0             	lea    -0x60(%ebp),%eax
 849b298:	89 04 24             	mov    %eax,(%esp)
 849b29b:	e8 e0 2b 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849b2a0:	eb 2f                	jmp    849b2d1 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x491>
 849b2a2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b2a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b2a9:	8b 45 08             	mov    0x8(%ebp),%eax
 849b2ac:	89 04 24             	mov    %eax,(%esp)
 849b2af:	e8 06 d3 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849b2b4:	eb 1b                	jmp    849b2d1 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x491>
 849b2b6:	89 d3                	mov    %edx,%ebx
 849b2b8:	89 c6                	mov    %eax,%esi
 849b2ba:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b2bd:	89 04 24             	mov    %eax,(%esp)
 849b2c0:	e8 bb 2b 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849b2c5:	89 f0                	mov    %esi,%eax
 849b2c7:	89 da                	mov    %ebx,%edx
 849b2c9:	89 04 24             	mov    %eax,(%esp)
 849b2cc:	e8 7f 84 64 00       	call   8ae3750 <_Unwind_Resume>
 849b2d1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849b2d4:	89 04 24             	mov    %eax,(%esp)
 849b2d7:	e8 a4 2b 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849b2dc:	8d 65 f4             	lea    -0xc(%ebp),%esp
 849b2df:	83 c4 00             	add    $0x0,%esp
 849b2e2:	5b                   	pop    %ebx
 849b2e3:	5e                   	pop    %esi
 849b2e4:	5f                   	pop    %edi
 849b2e5:	5d                   	pop    %ebp
 849b2e6:	c3                   	ret
 849b2e7:	90                   	nop

```

```c
// expert_job::CExpertJob::IncreaseExpertJobExp @ 0x849ae40

/* expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int) */

void expert_job::CExpertJob::IncreaseExpertJobExp(CUser *param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  CDataManager *this;
  undefined4 uVar6;
  undefined4 uVar7;
  GameWorld *this_00;
  undefined4 *puVar8;
  undefined4 uVar9;
  SkillSlot *pSVar10;
  uint uVar11;
  UserQuest *this_01;
  PacketGuard local_64 [12];
  PacketGuard local_58 [12];
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_4c [7];
  undefined1 local_45;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_44 [4];
  vector<ExpertJobExp,std::allocator<ExpertJobExp>> *local_40;
  int local_3c;
  char local_35;
  int local_34;
  int local_30;
  STExpertJobEtcScript *local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 == 0) {
    return;
  }
  CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar4 = G_CDataManager();
  local_40 = (vector<ExpertJobExp,std::allocator<ExpertJobExp>> *)
             CDataManager::GetExpertJobScript(iVar4);
  if (local_40 == (vector<ExpertJobExp,std::allocator<ExpertJobExp>> *)0x0) {
    return;
  }
  iVar4 = std::vector<ExpertJobExp,std::allocator<ExpertJobExp>>::size(local_40);
  piVar5 = (int *)std::vector<ExpertJobExp,std::allocator<ExpertJobExp>>::operator[]
                            (local_40,iVar4 - 1);
  local_3c = *piVar5;
  if (local_3c < param_2) {
    param_2 = local_3c;
  }
  local_35 = '\0';
  iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
  local_34 = CUser::GetCurExpertJobLevel(param_1,iVar4);
  local_30 = CUser::GetCurExpertJobLevel(param_1,param_2);
  this = (CDataManager *)G_CDataManager();
  local_2c = (STExpertJobEtcScript *)CDataManager::GetExpertJobEtcScript(this);
  if (local_34 != local_30) {
    local_45 = (undefined1)local_30;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::find((uchar *)local_4c);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_44);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      (local_4c,(_Rb_tree_iterator *)local_44);
    if (cVar3 != '\0') {
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_4c);
      sVar1 = *(short *)(iVar4 + 2);
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if (sVar1 <= iVar4) {
        local_35 = '\x01';
      }
    }
    goto LAB_0849afd1;
  }
  cVar3 = STExpertJobScript::isBoundaryExpValue((STExpertJobScript *)local_40,param_2);
  if (cVar3 == '\0') {
LAB_0849afbe:
    bVar2 = false;
  }
  else {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar3 = STExpertJobEtcScript::isExpertJobLimitLevel(local_2c,iVar4);
    if (cVar3 == '\0') goto LAB_0849afbe;
    bVar2 = true;
  }
  if ((bVar2) && (local_34 != 0xb)) {
    local_35 = '\x01';
  }
LAB_0849afd1:
  piVar5 = (int *)std::vector<ExpertJobExp,std::allocator<ExpertJobExp>>::operator[]
                            (local_40,local_34 - 1);
  local_28 = *piVar5;
  if ((local_35 != '\x01') && (local_28 < param_2)) {
    param_2 = local_28;
  }
  if ((local_35 == '\0') &&
     (iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1),
     iVar4 == param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUserCharacInfo::SetCurCharacExpertJobExp((CUserCharacInfo *)param_1,param_2);
    PacketGuard::PacketGuard(local_58);
                    /* try { // try from 0849b053 to 0849b251 has its CatchHandler @ 0849b2b6 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_58,1);
    CUser::make_basic_info(param_1,(char *)local_58,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
    if (local_35 == '\0') {
      CUser::Send(param_1,local_58);
    }
    else {
      iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
      local_24 = CUser::GetCurExpertJobLevel(param_1,iVar4);
      uVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      uVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      CUser::LogHistory(param_1,"ExpertJobLv+,%d,%d,%d",uVar7,uVar6,local_24);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_58,param_1);
      local_20 = 0;
      while (uVar11 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_40 + 0xc)), local_20 < uVar11) {
        iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        uVar7 = CUser::GetCurExpertJobLevel(param_1,iVar4);
        puVar8 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_40 + 0xc),local_20);
        uVar6 = *puVar8;
        uVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::growtype_skill(pSVar10,uVar9,uVar6,uVar7,0);
        iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        uVar7 = CUser::GetCurExpertJobLevel(param_1,iVar4);
        puVar8 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_40 + 0xc),local_20);
        uVar6 = *puVar8;
        uVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::growtype_skill(pSVar10,uVar9,uVar6,uVar7,1);
        local_20 = local_20 + 1;
      }
      CUser::send_skill_info(param_1);
      PacketGuard::PacketGuard(local_64);
      this_01 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0849b267 to 0849b27d has its CatchHandler @ 0849b280 */
      UserQuest::get_quest_info(this_01,(char *)local_64);
      CUser::Send(param_1,local_64);
                    /* try { // try from 0849b29b to 0849b2b3 has its CatchHandler @ 0849b2b6 */
      PacketGuard::~PacketGuard(local_64);
    }
    PacketGuard::~PacketGuard(local_58);
  }
  return;
}

```

---

## IsLearnRecipe

```asm
// === 0849b590 expert_job::CExpertJob::IsLearnRecipe  [0x0849b590-0x849b733] ===
 849b590:	55                   	push   %ebp
 849b591:	89 e5                	mov    %esp,%ebp
 849b593:	53                   	push   %ebx
 849b594:	83 ec 54             	sub    $0x54,%esp
 849b597:	8b 45 08             	mov    0x8(%ebp),%eax
 849b59a:	89 04 24             	mov    %eax,(%esp)
 849b59d:	e8 f2 42 d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849b5a2:	89 c3                	mov    %eax,%ebx
 849b5a4:	e8 f2 0b c3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849b5a9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849b5ad:	89 04 24             	mov    %eax,(%esp)
 849b5b0:	e8 3d 00 d9 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 849b5b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849b5b8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849b5bc:	75 51                	jne    849b60f <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem+0x7f>
 849b5be:	8b 45 08             	mov    0x8(%ebp),%eax
 849b5c1:	89 04 24             	mov    %eax,(%esp)
 849b5c4:	e8 85 06 c3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849b5c9:	89 c3                	mov    %eax,%ebx
 849b5cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849b5d2:	00 
 849b5d3:	c7 44 24 08 3f 01 00 	movl   $0x13f,0x8(%esp)
 849b5da:	00 
 849b5db:	c7 44 24 04 c0 ca c7 	movl   $0x8c7cac0,0x4(%esp)
 849b5e2:	08 
 849b5e3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 849b5e6:	89 04 24             	mov    %eax,(%esp)
 849b5e9:	e8 2a 41 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849b5ee:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849b5f2:	c7 44 24 04 b8 b9 c7 	movl   $0x8c7b9b8,0x4(%esp)
 849b5f9:	08 
 849b5fa:	8d 45 c0             	lea    -0x40(%ebp),%eax
 849b5fd:	89 04 24             	mov    %eax,(%esp)
 849b600:	e8 83 41 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849b605:	b8 00 00 00 00       	mov    $0x0,%eax
 849b60a:	e9 1f 01 00 00       	jmp    849b72e <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem+0x19e>
 849b60f:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 849b616:	8b 45 0c             	mov    0xc(%ebp),%eax
 849b619:	89 04 24             	mov    %eax,(%esp)
 849b61c:	e8 27 56 c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849b621:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b625:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849b628:	89 04 24             	mov    %eax,(%esp)
 849b62b:	e8 f6 00 e9 ff       	call   832b726 <_ZN17STExpertJobScript18GetRecipeInfoIndexEm>
 849b630:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849b633:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849b636:	c1 e8 1f             	shr    $0x1f,%eax
 849b639:	84 c0                	test   %al,%al
 849b63b:	74 51                	je     849b68e <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem+0xfe>
 849b63d:	8b 45 08             	mov    0x8(%ebp),%eax
 849b640:	89 04 24             	mov    %eax,(%esp)
 849b643:	e8 06 06 c3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849b648:	89 c3                	mov    %eax,%ebx
 849b64a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849b651:	00 
 849b652:	c7 44 24 08 46 01 00 	movl   $0x146,0x8(%esp)
 849b659:	00 
 849b65a:	c7 44 24 04 c0 ca c7 	movl   $0x8c7cac0,0x4(%esp)
 849b661:	08 
 849b662:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849b665:	89 04 24             	mov    %eax,(%esp)
 849b668:	e8 ab 40 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849b66d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849b671:	c7 44 24 04 f0 b9 c7 	movl   $0x8c7b9f0,0x4(%esp)
 849b678:	08 
 849b679:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849b67c:	89 04 24             	mov    %eax,(%esp)
 849b67f:	e8 04 41 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849b684:	b8 00 00 00 00       	mov    $0x0,%eax
 849b689:	e9 a0 00 00 00       	jmp    849b72e <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem+0x19e>
 849b68e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849b695:	00 
 849b696:	8b 45 08             	mov    0x8(%ebp),%eax
 849b699:	89 04 24             	mov    %eax,(%esp)
 849b69c:	e8 e3 1e c4 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 849b6a1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 849b6a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 849b6a8:	89 04 24             	mov    %eax,(%esp)
 849b6ab:	e8 56 fc e8 ff       	call   832b306 <_ZNK10expert_job16CCharacExpertJob10get_recipeEi>
 849b6b0:	83 f0 01             	xor    $0x1,%eax
 849b6b3:	84 c0                	test   %al,%al
 849b6b5:	74 72                	je     849b729 <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem+0x199>
 849b6b7:	8b 45 08             	mov    0x8(%ebp),%eax
 849b6ba:	89 04 24             	mov    %eax,(%esp)
 849b6bd:	e8 ac ec c3 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 849b6c2:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 849b6c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b6cc:	89 14 24             	mov    %edx,(%esp)
 849b6cf:	e8 72 dc c6 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 849b6d4:	83 f0 01             	xor    $0x1,%eax
 849b6d7:	84 c0                	test   %al,%al
 849b6d9:	74 4e                	je     849b729 <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem+0x199>
 849b6db:	8b 45 08             	mov    0x8(%ebp),%eax
 849b6de:	89 04 24             	mov    %eax,(%esp)
 849b6e1:	e8 68 05 c3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849b6e6:	89 c3                	mov    %eax,%ebx
 849b6e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849b6ef:	00 
 849b6f0:	c7 44 24 08 4e 01 00 	movl   $0x14e,0x8(%esp)
 849b6f7:	00 
 849b6f8:	c7 44 24 04 c0 ca c7 	movl   $0x8c7cac0,0x4(%esp)
 849b6ff:	08 
 849b700:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849b703:	89 04 24             	mov    %eax,(%esp)
 849b706:	e8 0d 40 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849b70b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849b70f:	c7 44 24 04 28 ba c7 	movl   $0x8c7ba28,0x4(%esp)
 849b716:	08 
 849b717:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849b71a:	89 04 24             	mov    %eax,(%esp)
 849b71d:	e8 66 40 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849b722:	b8 00 00 00 00       	mov    $0x0,%eax
 849b727:	eb 05                	jmp    849b72e <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem+0x19e>
 849b729:	b8 01 00 00 00       	mov    $0x1,%eax
 849b72e:	83 c4 54             	add    $0x54,%esp
 849b731:	5b                   	pop    %ebx
 849b732:	5d                   	pop    %ebp
 849b733:	c3                   	ret

```

```c
// expert_job::CExpertJob::IsLearnRecipe @ 0x849b590

/* expert_job::CExpertJob::IsLearnRecipe(CUser*, CStackableItem const*) */

undefined4 expert_job::CExpertJob::IsLearnRecipe(CUser *param_1,CStackableItem *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CCharacExpertJob *this;
  uint uVar4;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  ulong local_14;
  int local_10;
  
  CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  local_14 = CDataManager::GetExpertJobScript(iVar2);
  if (local_14 == 0) {
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_44,
                       "static bool expert_job::CExpertJob::IsLearnRecipe(CUser*, const CStackableItem*)"
                       ,0x13f,0);
    cMyTrace::operator()(local_44,"EXPERT_JOB_ERROR : GetExpertJobScript() charac_no(%d)",uVar3);
    uVar3 = 0;
  }
  else {
    local_10 = 0xffffffff;
    CItem::get_index((CItem *)param_2);
    local_10 = STExpertJobScript::GetRecipeInfoIndex(local_14);
    if (local_10 < 0) {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_34,
                         "static bool expert_job::CExpertJob::IsLearnRecipe(CUser*, const CStackableItem*)"
                         ,0x146,0);
      cMyTrace::operator()(local_34,"EXPERT_JOB_ERROR : GetRecipeInfoIndex() charac_no(%d)",uVar3);
      uVar3 = 0;
    }
    else {
      this = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
      cVar1 = CCharacExpertJob::get_recipe(this,local_10);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id(param_1);
        cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar4);
        if (cVar1 != '\x01') {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_24,
                             "static bool expert_job::CExpertJob::IsLearnRecipe(CUser*, const CStackableItem*)"
                             ,0x14e,0);
          cMyTrace::operator()(local_24,"EXPERT_JOB_ERROR : get_recipe() charac_no(%d)",uVar3);
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

---

## IsSuccess

```asm
// === 0849b462 expert_job::CExpertJob::IsSuccess  [0x0849b462-0x849b58f] ===
 849b462:	55                   	push   %ebp
 849b463:	89 e5                	mov    %esp,%ebp
 849b465:	53                   	push   %ebx
 849b466:	83 ec 44             	sub    $0x44,%esp
 849b469:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 849b470:	8d 45 ec             	lea    -0x14(%ebp),%eax
 849b473:	89 44 24 08          	mov    %eax,0x8(%esp)
 849b477:	8b 45 0c             	mov    0xc(%ebp),%eax
 849b47a:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b47e:	8b 45 08             	mov    0x8(%ebp),%eax
 849b481:	89 04 24             	mov    %eax,(%esp)
 849b484:	e8 5f fe ff ff       	call   849b2e8 <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi>
 849b489:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849b48c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849b490:	75 0a                	jne    849b49c <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi+0x3a>
 849b492:	b8 00 00 00 00       	mov    $0x0,%eax
 849b497:	e9 ed 00 00 00       	jmp    849b589 <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi+0x127>
 849b49c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849b49f:	8b 50 04             	mov    0x4(%eax),%edx
 849b4a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849b4a5:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
 849b4a8:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 849b4af:	e8 d3 66 21 00       	call   86b1b87 <_Z12get_rand_inti>
 849b4b4:	39 c3                	cmp    %eax,%ebx
 849b4b6:	0f 9f c0             	setg   %al
 849b4b9:	84 c0                	test   %al,%al
 849b4bb:	0f 84 c3 00 00 00    	je     849b584 <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi+0x122>
 849b4c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849b4c4:	8b 50 0c             	mov    0xc(%eax),%edx
 849b4c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849b4ca:	8b 40 08             	mov    0x8(%eax),%eax
 849b4cd:	89 d1                	mov    %edx,%ecx
 849b4cf:	29 c1                	sub    %eax,%ecx
 849b4d1:	89 c8                	mov    %ecx,%eax
 849b4d3:	83 c0 01             	add    $0x1,%eax
 849b4d6:	89 04 24             	mov    %eax,(%esp)
 849b4d9:	e8 a9 66 21 00       	call   86b1b87 <_Z12get_rand_inti>
 849b4de:	8b 55 f0             	mov    -0x10(%ebp),%edx
 849b4e1:	8b 52 08             	mov    0x8(%edx),%edx
 849b4e4:	8d 14 10             	lea    (%eax,%edx,1),%edx
 849b4e7:	8b 45 10             	mov    0x10(%ebp),%eax
 849b4ea:	89 10                	mov    %edx,(%eax)
 849b4ec:	8b 45 08             	mov    0x8(%ebp),%eax
 849b4ef:	89 04 24             	mov    %eax,(%esp)
 849b4f2:	e8 87 ed c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849b4f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849b4fa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849b4fd:	89 04 24             	mov    %eax,(%esp)
 849b500:	e8 47 3e 00 00       	call   849f34c <_ZN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpC1Ev>
 849b505:	8b 45 08             	mov    0x8(%ebp),%eax
 849b508:	89 04 24             	mov    %eax,(%esp)
 849b50b:	e8 16 9b ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849b510:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b514:	8b 45 08             	mov    0x8(%ebp),%eax
 849b517:	89 04 24             	mov    %eax,(%esp)
 849b51a:	e8 5d 07 1f 00       	call   868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>
 849b51f:	89 c3                	mov    %eax,%ebx
 849b521:	8b 45 08             	mov    0x8(%ebp),%eax
 849b524:	89 04 24             	mov    %eax,(%esp)
 849b527:	e8 68 43 d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849b52c:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 849b52f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849b533:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849b537:	89 44 24 04          	mov    %eax,0x4(%esp)
 849b53b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849b53e:	89 04 24             	mov    %eax,(%esp)
 849b541:	e8 00 17 07 00       	call   850cc46 <_ZNK10CInventory24GetExpertJobAddtionalExpE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpE>
 849b546:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 849b54d:	e8 35 66 21 00       	call   86b1b87 <_Z12get_rand_inti>
 849b552:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 849b555:	db 45 d4             	fildl  -0x2c(%ebp)
 849b558:	d9 45 e4             	flds   -0x1c(%ebp)
 849b55b:	da e9                	fucompp
 849b55d:	df e0                	fnstsw %ax
 849b55f:	f6 c4 45             	test   $0x45,%ah
 849b562:	0f 94 c0             	sete   %al
 849b565:	84 c0                	test   %al,%al
 849b567:	74 14                	je     849b57d <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi+0x11b>
 849b569:	8b 45 10             	mov    0x10(%ebp),%eax
 849b56c:	8b 00                	mov    (%eax),%eax
 849b56e:	89 c2                	mov    %eax,%edx
 849b570:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849b573:	8d 04 02             	lea    (%edx,%eax,1),%eax
 849b576:	89 c2                	mov    %eax,%edx
 849b578:	8b 45 10             	mov    0x10(%ebp),%eax
 849b57b:	89 10                	mov    %edx,(%eax)
 849b57d:	b8 01 00 00 00       	mov    $0x1,%eax
 849b582:	eb 05                	jmp    849b589 <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi+0x127>
 849b584:	b8 00 00 00 00       	mov    $0x0,%eax
 849b589:	83 c4 44             	add    $0x44,%esp
 849b58c:	5b                   	pop    %ebx
 849b58d:	5d                   	pop    %ebp
 849b58e:	c3                   	ret
 849b58f:	90                   	nop

```

```c
// expert_job::CExpertJob::IsSuccess @ 0x849b462

/* expert_job::CExpertJob::IsSuccess(CUser*, CStackableItem const*, int&) */

undefined4 expert_job::CExpertJob::IsSuccess(CUser *param_1,CStackableItem *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  CInventory *local_10;
  
  local_18 = 0;
  local_14 = GetSuccessRate(param_1,param_2,&local_18);
  if (local_14 == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = *(int *)(local_14 + 4) + local_18;
    iVar2 = get_rand_int(100);
    if (iVar2 < iVar3) {
      iVar3 = get_rand_int((*(int *)(local_14 + 0xc) - *(int *)(local_14 + 8)) + 1);
      *param_3 = iVar3 + *(int *)(local_14 + 8);
      local_10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      STItemScript::SEXPERTJOB::stExpertJobAdditionalExp::stExpertJobAdditionalExp
                ((stExpertJobAdditionalExp *)&local_20);
      iVar3 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetCurExpertJobLevel(param_1,iVar3);
      uVar4 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      CInventory::GetExpertJobAddtionalExp(local_10,uVar4,uVar1,&local_20);
      iVar3 = get_rand_int(100);
      if ((float)iVar3 < local_20) {
        *param_3 = *param_3 + local_1c;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

