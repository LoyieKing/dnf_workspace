# CWorldMapList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## find_world_map

```asm
// === 083647a2 CWorldMapList::find_world_map  [0x083647a2-0x8364817] ===
 83647a2:	55                   	push   %ebp
 83647a3:	89 e5                	mov    %esp,%ebp
 83647a5:	83 ec 38             	sub    $0x38,%esp
 83647a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83647ab:	89 04 24             	mov    %eax,(%esp)
 83647ae:	e8 31 0c 03 00       	call   83953e4 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP9CWorldMapEEC1Ev>
 83647b3:	8b 55 08             	mov    0x8(%ebp),%edx
 83647b6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83647b9:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 83647bc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83647c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 83647c4:	89 04 24             	mov    %eax,(%esp)
 83647c7:	e8 26 0c 03 00       	call   83953f2 <_ZNKSt3mapIiP9CWorldMapSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 83647cc:	83 ec 04             	sub    $0x4,%esp
 83647cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83647d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83647d5:	8b 55 08             	mov    0x8(%ebp),%edx
 83647d8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83647db:	89 54 24 04          	mov    %edx,0x4(%esp)
 83647df:	89 04 24             	mov    %eax,(%esp)
 83647e2:	e8 37 0c 03 00       	call   839541e <_ZNKSt3mapIiP9CWorldMapSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 83647e7:	83 ec 04             	sub    $0x4,%esp
 83647ea:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83647ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 83647f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83647f4:	89 04 24             	mov    %eax,(%esp)
 83647f7:	e8 48 0c 03 00       	call   8395444 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP9CWorldMapEEeqERKS5_>
 83647fc:	84 c0                	test   %al,%al
 83647fe:	74 07                	je     8364807 <_ZNK13CWorldMapList14find_world_mapEi+0x65>
 8364800:	b8 00 00 00 00       	mov    $0x0,%eax
 8364805:	eb 0e                	jmp    8364815 <_ZNK13CWorldMapList14find_world_mapEi+0x73>
 8364807:	8d 45 f0             	lea    -0x10(%ebp),%eax
 836480a:	89 04 24             	mov    %eax,(%esp)
 836480d:	e8 46 0c 03 00       	call   8395458 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP9CWorldMapEEptEv>
 8364812:	8b 40 04             	mov    0x4(%eax),%eax
 8364815:	c9                   	leave
 8364816:	c3                   	ret
 8364817:	90                   	nop

```

```c
// CWorldMapList::find_world_map @ 0x83647a2

/* CWorldMapList::find_world_map(int) const */

undefined4 CWorldMapList::find_world_map(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_20 [3];
  int local_14;
  map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>> local_10 [12];
  
  std::_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>> *)&local_14);
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::find
            (local_20);
  local_14 = local_20[0];
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>>::operator==
                    ((_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>> *)&local_14,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,CWorldMap*>> *)&local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## insert_world_map

```asm
// === 08364694 CWorldMapList::insert_world_map  [0x08364694-0x83647a1] ===
 8364694:	55                   	push   %ebp
 8364695:	89 e5                	mov    %esp,%ebp
 8364697:	83 ec 68             	sub    $0x68,%esp
 836469a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 836469d:	89 04 24             	mov    %eax,(%esp)
 83646a0:	e8 45 30 02 00       	call   83876ea <_ZNSt17_Rb_tree_iteratorISt4pairIKiP9CWorldMapEEC1Ev>
 83646a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83646a8:	89 04 24             	mov    %eax,(%esp)
 83646ab:	e8 fc ff 00 00       	call   83746ac <_ZN9CWorldMap9get_indexEv>
 83646b0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 83646b3:	8b 55 08             	mov    0x8(%ebp),%edx
 83646b6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83646b9:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 83646bc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83646c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 83646c4:	89 04 24             	mov    %eax,(%esp)
 83646c7:	e8 36 0c 03 00       	call   8395302 <_ZNSt3mapIiP9CWorldMapSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 83646cc:	83 ec 04             	sub    $0x4,%esp
 83646cf:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83646d2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 83646d5:	8b 55 08             	mov    0x8(%ebp),%edx
 83646d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83646db:	89 54 24 04          	mov    %edx,0x4(%esp)
 83646df:	89 04 24             	mov    %eax,(%esp)
 83646e2:	e8 11 30 02 00       	call   83876f8 <_ZNSt3mapIiP9CWorldMapSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 83646e7:	83 ec 04             	sub    $0x4,%esp
 83646ea:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83646ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 83646f1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83646f4:	89 04 24             	mov    %eax,(%esp)
 83646f7:	e8 32 0c 03 00       	call   839532e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP9CWorldMapEEeqERKS5_>
 83646fc:	84 c0                	test   %al,%al
 83646fe:	74 5f                	je     836475f <_ZN13CWorldMapList16insert_world_mapEP9CWorldMap+0xcb>
 8364700:	8b 45 0c             	mov    0xc(%ebp),%eax
 8364703:	89 04 24             	mov    %eax,(%esp)
 8364706:	e8 a1 ff 00 00       	call   83746ac <_ZN9CWorldMap9get_indexEv>
 836470b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 836470e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8364711:	8d 55 0c             	lea    0xc(%ebp),%edx
 8364714:	89 54 24 08          	mov    %edx,0x8(%esp)
 8364718:	8d 55 f4             	lea    -0xc(%ebp),%edx
 836471b:	89 54 24 04          	mov    %edx,0x4(%esp)
 836471f:	89 04 24             	mov    %eax,(%esp)
 8364722:	e8 1b 0c 03 00       	call   8395342 <_ZSt9make_pairIiRP9CWorldMapESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8364727:	83 ec 04             	sub    $0x4,%esp
 836472a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 836472d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364731:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8364734:	89 04 24             	mov    %eax,(%esp)
 8364737:	e8 4c 0c 03 00       	call   8395388 <_ZNSt4pairIKiP9CWorldMapEC1IiS2_EEOS_IT_T0_E>
 836473c:	8b 55 08             	mov    0x8(%ebp),%edx
 836473f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8364742:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8364745:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8364749:	89 54 24 04          	mov    %edx,0x4(%esp)
 836474d:	89 04 24             	mov    %eax,(%esp)
 8364750:	e8 63 0c 03 00       	call   83953b8 <_ZNSt3mapIiP9CWorldMapSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8364755:	83 ec 04             	sub    $0x4,%esp
 8364758:	b8 01 00 00 00       	mov    $0x1,%eax
 836475d:	eb 40                	jmp    836479f <_ZN13CWorldMapList16insert_world_mapEP9CWorldMap+0x10b>
 836475f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8364762:	89 04 24             	mov    %eax,(%esp)
 8364765:	e8 42 ff 00 00       	call   83746ac <_ZN9CWorldMap9get_indexEv>
 836476a:	89 44 24 14          	mov    %eax,0x14(%esp)
 836476e:	c7 44 24 10 b4 31 c3 	movl   $0x8c331b4,0x10(%esp)
 8364775:	08 
 8364776:	c7 44 24 0c e9 2b 00 	movl   $0x2be9,0xc(%esp)
 836477d:	00 
 836477e:	c7 44 24 08 00 42 c3 	movl   $0x8c34200,0x8(%esp)
 8364785:	08 
 8364786:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 836478d:	08 
 836478e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8364795:	e8 70 f4 76 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 836479a:	b8 00 00 00 00       	mov    $0x0,%eax
 836479f:	c9                   	leave
 83647a0:	c3                   	ret
 83647a1:	90                   	nop

```

```c
// CWorldMapList::insert_world_map @ 0x8364694

/* CWorldMapList::insert_world_map(CWorldMap*) */

bool __thiscall CWorldMapList::insert_world_map(CWorldMapList *this,CWorldMap *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_40 [3];
  int local_34;
  undefined4 local_30;
  map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>> local_2c [4];
  pair local_28 [8];
  pair<int_const,CWorldMap*> local_20 [8];
  int local_18 [2];
  CWorldMap *local_10 [3];
  
  std::_Rb_tree_iterator<std::pair<int_const,CWorldMap*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,CWorldMap*>> *)&local_34);
  local_30 = CWorldMap::get_index(param_1);
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::find
            (local_40);
  local_34 = local_40[0];
  std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::end
            (local_2c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWorldMap*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,CWorldMap*>> *)&local_34,
                     (_Rb_tree_iterator *)local_2c);
  if (cVar1 == '\0') {
    uVar2 = CWorldMap::get_index(param_1);
    LogManager::logFormat
              (1,"data_manager.cpp","bool CWorldMapList::insert_world_map(CWorldMap*)",0x2be9,
               "Already registed world map index detected : %d",uVar2);
  }
  else {
    local_10[0] = (CWorldMap *)CWorldMap::get_index(param_1);
    std::make_pair<int,CWorldMap*&>(local_18,local_10);
    std::pair<int_const,CWorldMap*>::pair<int,CWorldMap*>(local_20,(pair *)local_18);
    std::map<int,CWorldMap*,std::less<int>,std::allocator<std::pair<int_const,CWorldMap*>>>::insert
              (local_28);
  }
  return cVar1 != '\0';
}

```

---

## load_list

```asm
// === 08364506 CWorldMapList::load_list  [0x08364506-0x8364693] ===
 8364506:	55                   	push   %ebp
 8364507:	89 e5                	mov    %esp,%ebp
 8364509:	57                   	push   %edi
 836450a:	56                   	push   %esi
 836450b:	53                   	push   %ebx
 836450c:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8364512:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8364519:	8d 45 80             	lea    -0x80(%ebp),%eax
 836451c:	89 04 24             	mov    %eax,(%esp)
 836451f:	e8 e4 59 00 00       	call   8369f08 <_ZN14WorldMapScriptC1Ev>
 8364524:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 836452b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 836452e:	89 04 24             	mov    %eax,(%esp)
 8364531:	e8 a2 f7 f4 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 8364536:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 836453c:	c7 44 24 04 00 10 50 	movl   $0x9501000,0x4(%esp)
 8364543:	09 
 8364544:	89 04 24             	mov    %eax,(%esp)
 8364547:	e8 a6 1b d8 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 836454c:	83 ec 04             	sub    $0x4,%esp
 836454f:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8364555:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8364558:	e9 c9 00 00 00       	jmp    8364626 <_ZN13CWorldMapList9load_listEv+0x120>
 836455d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8364560:	89 04 24             	mov    %eax,(%esp)
 8364563:	e8 50 1c d8 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8364568:	83 c0 04             	add    $0x4,%eax
 836456b:	89 04 24             	mov    %eax,(%esp)
 836456e:	e8 7d 1f 3a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8364573:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8364576:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 836457a:	0f 84 d8 00 00 00    	je     8364658 <_ZN13CWorldMapList9load_listEv+0x152>
 8364580:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8364583:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364587:	8d 45 80             	lea    -0x80(%ebp),%eax
 836458a:	89 04 24             	mov    %eax,(%esp)
 836458d:	e8 f6 bd 74 00       	call   8ab0388 <_Z20importWorldMapScriptP14WorldMapScriptPKc>
 8364592:	83 f0 01             	xor    $0x1,%eax
 8364595:	84 c0                	test   %al,%al
 8364597:	74 1d                	je     83645b6 <_ZN13CWorldMapList9load_listEv+0xb0>
 8364599:	8b 45 e0             	mov    -0x20(%ebp),%eax
 836459c:	89 44 24 04          	mov    %eax,0x4(%esp)
 83645a0:	c7 04 24 97 31 c3 08 	movl   $0x8c33197,(%esp)
 83645a7:	e8 b4 95 d1 ff       	call   807db60 <printf@plt>
 83645ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 83645b1:	e9 c5 00 00 00       	jmp    836467b <_ZN13CWorldMapList9load_listEv+0x175>
 83645b6:	c7 04 24 40 00 00 00 	movl   $0x40,(%esp)
 83645bd:	e8 8e fe 3b 00       	call   8724450 <_Znwj>
 83645c2:	89 c3                	mov    %eax,%ebx
 83645c4:	89 d8                	mov    %ebx,%eax
 83645c6:	89 04 24             	mov    %eax,(%esp)
 83645c9:	e8 1c b1 01 00       	call   837f6ea <_ZN9CWorldMapC1Ev>
 83645ce:	eb 12                	jmp    83645e2 <_ZN13CWorldMapList9load_listEv+0xdc>
 83645d0:	89 d6                	mov    %edx,%esi
 83645d2:	89 c7                	mov    %eax,%edi
 83645d4:	89 1c 24             	mov    %ebx,(%esp)
 83645d7:	e8 14 ff 3b 00       	call   87244f0 <_ZdlPv>
 83645dc:	89 f8                	mov    %edi,%eax
 83645de:	89 f2                	mov    %esi,%edx
 83645e0:	eb 7e                	jmp    8364660 <_ZN13CWorldMapList9load_listEv+0x15a>
 83645e2:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 83645e5:	8d 45 80             	lea    -0x80(%ebp),%eax
 83645e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83645ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83645ef:	89 04 24             	mov    %eax,(%esp)
 83645f2:	e8 23 fc ff ff       	call   836421a <_ZN9CWorldMap13set_world_mapEP14WorldMapScript>
 83645f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83645fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 83645fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8364601:	89 04 24             	mov    %eax,(%esp)
 8364604:	e8 8b 00 00 00       	call   8364694 <_ZN13CWorldMapList16insert_world_mapEP9CWorldMap>
 8364609:	8d 45 dc             	lea    -0x24(%ebp),%eax
 836460c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8364613:	00 
 8364614:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8364617:	89 54 24 04          	mov    %edx,0x4(%esp)
 836461b:	89 04 24             	mov    %eax,(%esp)
 836461e:	e8 c1 d0 fd ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 8364623:	83 ec 04             	sub    $0x4,%esp
 8364626:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8364629:	c7 44 24 04 00 10 50 	movl   $0x9501000,0x4(%esp)
 8364630:	09 
 8364631:	89 04 24             	mov    %eax,(%esp)
 8364634:	e8 df 1a d8 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8364639:	83 ec 04             	sub    $0x4,%esp
 836463c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 836463f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8364643:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8364646:	89 04 24             	mov    %eax,(%esp)
 8364649:	e8 f0 1a d8 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 836464e:	84 c0                	test   %al,%al
 8364650:	0f 85 07 ff ff ff    	jne    836455d <_ZN13CWorldMapList9load_listEv+0x57>
 8364656:	eb 01                	jmp    8364659 <_ZN13CWorldMapList9load_listEv+0x153>
 8364658:	90                   	nop
 8364659:	bb 01 00 00 00       	mov    $0x1,%ebx
 836465e:	eb 1b                	jmp    836467b <_ZN13CWorldMapList9load_listEv+0x175>
 8364660:	89 d3                	mov    %edx,%ebx
 8364662:	89 c6                	mov    %eax,%esi
 8364664:	8d 45 80             	lea    -0x80(%ebp),%eax
 8364667:	89 04 24             	mov    %eax,(%esp)
 836466a:	e8 3f af 01 00       	call   837f5ae <_ZN14WorldMapScriptD1Ev>
 836466f:	89 f0                	mov    %esi,%eax
 8364671:	89 da                	mov    %ebx,%edx
 8364673:	89 04 24             	mov    %eax,(%esp)
 8364676:	e8 d5 f0 77 00       	call   8ae3750 <_Unwind_Resume>
 836467b:	8d 45 80             	lea    -0x80(%ebp),%eax
 836467e:	89 04 24             	mov    %eax,(%esp)
 8364681:	e8 28 af 01 00       	call   837f5ae <_ZN14WorldMapScriptD1Ev>
 8364686:	89 d8                	mov    %ebx,%eax
 8364688:	8d 65 f4             	lea    -0xc(%ebp),%esp
 836468b:	83 c4 00             	add    $0x0,%esp
 836468e:	5b                   	pop    %ebx
 836468f:	5e                   	pop    %esi
 8364690:	5f                   	pop    %edi
 8364691:	5d                   	pop    %ebp
 8364692:	c3                   	ret
 8364693:	90                   	nop

```

```c
// CWorldMapList::load_list @ 0x8364506

/* CWorldMapList::load_list() */

undefined4 __thiscall CWorldMapList::load_list(CWorldMapList *this)

{
  char cVar1;
  int iVar2;
  CWorldMap *this_00;
  undefined4 uVar3;
  undefined4 local_90 [3];
  WorldMapScript local_84 [84];
  undefined4 local_30;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_2c [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_28 [4];
  char *local_24;
  CWorldMap *local_20;
  
  local_24 = (char *)0x0;
  WorldMapScript::WorldMapScript(local_84);
  local_20 = (CWorldMap *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_30);
                    /* try { // try from 08364547 to 083645c1 has its CatchHandler @ 08364660 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_90);
  local_30 = local_90[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_2c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_30,
                       (_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_30);
    local_24 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_24 == (char *)0x0) break;
    cVar1 = importWorldMapScript(local_84,local_24);
    if (cVar1 != '\x01') {
      printf("World Map Script Error: %s\n",local_24);
      uVar3 = 0;
      goto LAB_0836467b;
    }
    this_00 = operator_new(0x40);
                    /* try { // try from 083645c9 to 083645cd has its CatchHandler @ 083645d0 */
    CWorldMap::CWorldMap(this_00);
    local_20 = this_00;
                    /* try { // try from 083645f2 to 08364638 has its CatchHandler @ 08364660 */
    CWorldMap::set_world_map(this_00,local_84);
    insert_world_map(this,local_20);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_28,(int)&local_30);
  }
  uVar3 = 1;
LAB_0836467b:
  WorldMapScript::~WorldMapScript(local_84);
  return uVar3;
}

```

