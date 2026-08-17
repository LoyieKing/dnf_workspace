# Inter_LoadDimensionInout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d83d2 Inter_LoadDimensionInout::dispatch_sig  [0x084d83d2-0x84d8607] ===
 84d83d2:	55                   	push   %ebp
 84d83d3:	89 e5                	mov    %esp,%ebp
 84d83d5:	53                   	push   %ebx
 84d83d6:	83 ec 24             	sub    $0x24,%esp
 84d83d9:	c6 45 ea 00          	movb   $0x0,-0x16(%ebp)
 84d83dd:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 84d83e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d83e4:	89 04 24             	mov    %eax,(%esp)
 84d83e7:	e8 a0 1f c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d83ec:	85 c0                	test   %eax,%eax
 84d83ee:	0f 94 c0             	sete   %al
 84d83f1:	84 c0                	test   %al,%al
 84d83f3:	74 0a                	je     84d83ff <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x2d>
 84d83f5:	b8 f3 3e 00 00       	mov    $0x3ef3,%eax
 84d83fa:	e9 03 02 00 00       	jmp    84d8602 <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x230>
 84d83ff:	8b 45 10             	mov    0x10(%ebp),%eax
 84d8402:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d8405:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d8408:	8b 00                	mov    (%eax),%eax
 84d840a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d840e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8411:	89 04 24             	mov    %eax,(%esp)
 84d8414:	e8 f9 5a 17 00       	call   864df12 <_ZNK5CUser14get_charac_idxEj>
 84d8419:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d841c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84d8420:	79 0a                	jns    84d842c <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x5a>
 84d8422:	b8 f9 3e 00 00       	mov    $0x3ef9,%eax
 84d8427:	e9 d6 01 00 00       	jmp    84d8602 <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x230>
 84d842c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d842f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d8432:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8438:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d843c:	89 14 24             	mov    %edx,(%esp)
 84d843f:	e8 74 87 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d8444:	8b 10                	mov    (%eax),%edx
 84d8446:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d8449:	8b 00                	mov    (%eax),%eax
 84d844b:	39 c2                	cmp    %eax,%edx
 84d844d:	0f 95 c0             	setne  %al
 84d8450:	84 c0                	test   %al,%al
 84d8452:	74 0a                	je     84d845e <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x8c>
 84d8454:	b8 fb 3e 00 00       	mov    $0x3efb,%eax
 84d8459:	e9 a4 01 00 00       	jmp    84d8602 <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x230>
 84d845e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8461:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d8464:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d846a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d846e:	89 14 24             	mov    %edx,(%esp)
 84d8471:	e8 42 87 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d8476:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84d8479:	8b 12                	mov    (%edx),%edx
 84d847b:	89 10                	mov    %edx,(%eax)
 84d847d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d8484:	eb 75                	jmp    84d84fb <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x129>
 84d8486:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8489:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d848c:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8492:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8496:	89 14 24             	mov    %edx,(%esp)
 84d8499:	e8 1a 87 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d849e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d84a1:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 84d84a4:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 84d84a7:	0f b6 4c 0b 04       	movzbl 0x4(%ebx,%ecx,1),%ecx
 84d84ac:	88 8c 10 b9 0e 00 00 	mov    %cl,0xeb9(%eax,%edx,1)
 84d84b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d84b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d84b9:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d84bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d84c3:	89 14 24             	mov    %edx,(%esp)
 84d84c6:	e8 ed 86 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d84cb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d84ce:	0f b6 9c 10 b9 0e 00 	movzbl 0xeb9(%eax,%edx,1),%ebx
 84d84d5:	00 
 84d84d6:	e8 c0 3c bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84d84db:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d84de:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d84e2:	89 04 24             	mov    %eax,(%esp)
 84d84e5:	e8 28 31 d5 ff       	call   822b612 <_ZN12CDataManager18get_dimensionInoutEi>
 84d84ea:	38 c3                	cmp    %al,%bl
 84d84ec:	0f 95 c0             	setne  %al
 84d84ef:	84 c0                	test   %al,%al
 84d84f1:	74 04                	je     84d84f7 <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x125>
 84d84f3:	c6 45 ea 01          	movb   $0x1,-0x16(%ebp)
 84d84f7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d84fb:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 84d84ff:	0f 9e c0             	setle  %al
 84d8502:	84 c0                	test   %al,%al
 84d8504:	75 80                	jne    84d8486 <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0xb4>
 84d8506:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8509:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d850c:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8512:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8516:	89 14 24             	mov    %edx,(%esp)
 84d8519:	e8 9a 86 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d851e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84d8521:	0f b6 52 0c          	movzbl 0xc(%edx),%edx
 84d8525:	88 90 c2 0e 00 00    	mov    %dl,0xec2(%eax)
 84d852b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d852e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d8531:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8537:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d853b:	89 14 24             	mov    %edx,(%esp)
 84d853e:	e8 75 86 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d8543:	0f b6 98 c2 0e 00 00 	movzbl 0xec2(%eax),%ebx
 84d854a:	e8 4c 3c bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84d854f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d8556:	00 
 84d8557:	89 04 24             	mov    %eax,(%esp)
 84d855a:	e8 d9 30 d5 ff       	call   822b638 <_ZN12CDataManager21get_limit_inout_countE15ENUM_BLOOD_TYPE>
 84d855f:	38 c3                	cmp    %al,%bl
 84d8561:	0f 95 c0             	setne  %al
 84d8564:	84 c0                	test   %al,%al
 84d8566:	74 04                	je     84d856c <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x19a>
 84d8568:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 84d856c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d856f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d8572:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8578:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d857c:	89 14 24             	mov    %edx,(%esp)
 84d857f:	e8 34 86 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d8584:	c6 80 b8 0e 00 00 00 	movb   $0x0,0xeb8(%eax)
 84d858b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d858e:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d8591:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 84d8597:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d859b:	89 14 24             	mov    %edx,(%esp)
 84d859e:	e8 15 86 cc ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 84d85a3:	c6 80 bf 0e 00 00 00 	movb   $0x0,0xebf(%eax)
 84d85aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d85ad:	89 04 24             	mov    %eax,(%esp)
 84d85b0:	e8 7d 7e c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d85b5:	85 c0                	test   %eax,%eax
 84d85b7:	0f 95 c0             	setne  %al
 84d85ba:	84 c0                	test   %al,%al
 84d85bc:	74 3f                	je     84d85fd <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x22b>
 84d85be:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d85c1:	89 04 24             	mov    %eax,(%esp)
 84d85c4:	e8 6f 9d c8 ff       	call   8162338 <_ZN15CUserCharacInfo16IsFirstTimeLoginEv>
 84d85c9:	84 c0                	test   %al,%al
 84d85cb:	74 30                	je     84d85fd <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x22b>
 84d85cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d85d0:	89 04 24             	mov    %eax,(%esp)
 84d85d3:	e8 e0 1c c0 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84d85d8:	83 f8 3b             	cmp    $0x3b,%eax
 84d85db:	0f 9f c0             	setg   %al
 84d85de:	84 c0                	test   %al,%al
 84d85e0:	74 1b                	je     84d85fd <_ZN24Inter_LoadDimensionInout12dispatch_sigEP5CUserPci+0x22b>
 84d85e2:	0f b6 55 eb          	movzbl -0x15(%ebp),%edx
 84d85e6:	0f b6 45 ea          	movzbl -0x16(%ebp),%eax
 84d85ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d85ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d85f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d85f5:	89 04 24             	mov    %eax,(%esp)
 84d85f8:	e8 15 e6 17 00       	call   8656c12 <_ZN5CUser20DimensionInoutUpdateEbb>
 84d85fd:	b8 00 00 00 00       	mov    $0x0,%eax
 84d8602:	83 c4 24             	add    $0x24,%esp
 84d8605:	5b                   	pop    %ebx
 84d8606:	5d                   	pop    %ebp
 84d8607:	c3                   	ret

```

```c
// Inter_LoadDimensionInout::dispatch_sig @ 0x84d83d2

/* Inter_LoadDimensionInout::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDimensionInout::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  CDataManager *pCVar9;
  bool local_1a;
  int local_10;
  
  local_1a = false;
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 0) {
    uVar5 = 0x3ef3;
  }
  else {
    uVar6 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3);
    if ((int)uVar6 < 0) {
      uVar5 = 0x3ef9;
    }
    else {
      piVar7 = (int *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                 (param_2 + 0x796e8),uVar6);
      if (*piVar7 == *(int *)param_3) {
        puVar8 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8)
                            ,uVar6);
        *puVar8 = *(undefined4 *)param_3;
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_2 + 0x796e8),uVar6);
          *(undefined1 *)(iVar4 + 0xeb9 + local_10) = *(undefined1 *)(param_3 + 4 + local_10);
          iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_2 + 0x796e8),uVar6);
          cVar1 = *(char *)(iVar4 + 0xeb9 + local_10);
          pCVar9 = (CDataManager *)G_CDataManager();
          cVar2 = CDataManager::get_dimensionInout(pCVar9,local_10);
          if (cVar1 != cVar2) {
            local_1a = true;
          }
        }
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        *(undefined1 *)(iVar4 + 0xec2) = *(undefined1 *)(param_3 + 0xc);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        cVar1 = *(char *)(iVar4 + 0xec2);
        pCVar9 = (CDataManager *)G_CDataManager();
        cVar2 = CDataManager::get_limit_inout_count(pCVar9,2);
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        *(undefined1 *)(iVar4 + 0xeb8) = 0;
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                           uVar6);
        *(undefined1 *)(iVar4 + 0xebf) = 0;
        iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
        if (((iVar4 != 0) &&
            (cVar3 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2), cVar3 != '\0'))
           && (iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2), 0x3b < iVar4))
        {
          CUser::DimensionInoutUpdate((CUser *)param_2,local_1a,cVar1 != cVar2);
        }
        uVar5 = 0;
      }
      else {
        uVar5 = 0x3efb;
      }
    }
  }
  return uVar5;
}

```

