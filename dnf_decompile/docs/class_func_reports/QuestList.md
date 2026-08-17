# QuestList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 16

---

## Check_Quest

```asm
// === 08355474 QuestList::Check_Quest  [0x08355474-0x835556b] ===
 8355474:	55                   	push   %ebp
 8355475:	89 e5                	mov    %esp,%ebp
 8355477:	83 ec 38             	sub    $0x38,%esp
 835547a:	8b 45 10             	mov    0x10(%ebp),%eax
 835547d:	8b 00                	mov    (%eax),%eax
 835547f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8355482:	8b 45 10             	mov    0x10(%ebp),%eax
 8355485:	8b 40 04             	mov    0x4(%eax),%eax
 8355488:	89 45 e0             	mov    %eax,-0x20(%ebp)
 835548b:	8b 45 10             	mov    0x10(%ebp),%eax
 835548e:	8b 40 08             	mov    0x8(%eax),%eax
 8355491:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8355494:	8b 45 10             	mov    0x10(%ebp),%eax
 8355497:	8b 40 0c             	mov    0xc(%eax),%eax
 835549a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 835549d:	8b 45 10             	mov    0x10(%ebp),%eax
 83554a0:	8b 40 10             	mov    0x10(%eax),%eax
 83554a3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 83554a6:	8b 45 10             	mov    0x10(%ebp),%eax
 83554a9:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 83554ad:	88 45 f3             	mov    %al,-0xd(%ebp)
 83554b0:	8b 45 10             	mov    0x10(%ebp),%eax
 83554b3:	8b 40 18             	mov    0x18(%eax),%eax
 83554b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83554b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83554bc:	89 04 24             	mov    %eax,(%esp)
 83554bf:	e8 1e 61 ed ff       	call   822b5e2 <_ZNK5Quest11exposeQuestEv>
 83554c4:	83 f0 01             	xor    $0x1,%eax
 83554c7:	84 c0                	test   %al,%al
 83554c9:	74 0a                	je     83554d5 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0x61>
 83554cb:	b8 00 00 00 00       	mov    $0x0,%eax
 83554d0:	e9 94 00 00 00       	jmp    8355569 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xf5>
 83554d5:	8b 45 10             	mov    0x10(%ebp),%eax
 83554d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83554dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 83554df:	89 04 24             	mov    %eax,(%esp)
 83554e2:	e8 9f d8 ff ff       	call   8352d86 <_ZNK5Quest14check_possibleERK18stSelectQuestParam>
 83554e7:	83 f0 01             	xor    $0x1,%eax
 83554ea:	84 c0                	test   %al,%al
 83554ec:	74 07                	je     83554f5 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0x81>
 83554ee:	b8 00 00 00 00       	mov    $0x0,%eax
 83554f3:	eb 74                	jmp    8355569 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xf5>
 83554f5:	8b 45 14             	mov    0x14(%ebp),%eax
 83554f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 83554fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83554ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355503:	8b 45 08             	mov    0x8(%ebp),%eax
 8355506:	89 04 24             	mov    %eax,(%esp)
 8355509:	e8 ba fa ff ff       	call   8354fc8 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE>
 835550e:	83 f0 01             	xor    $0x1,%eax
 8355511:	84 c0                	test   %al,%al
 8355513:	74 07                	je     835551c <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xa8>
 8355515:	b8 00 00 00 00       	mov    $0x0,%eax
 835551a:	eb 4d                	jmp    8355569 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xf5>
 835551c:	8b 45 14             	mov    0x14(%ebp),%eax
 835551f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8355523:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8355526:	89 44 24 04          	mov    %eax,0x4(%esp)
 835552a:	8b 45 08             	mov    0x8(%ebp),%eax
 835552d:	89 04 24             	mov    %eax,(%esp)
 8355530:	e8 e9 fb ff ff       	call   835511e <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE>
 8355535:	83 f0 01             	xor    $0x1,%eax
 8355538:	84 c0                	test   %al,%al
 835553a:	74 07                	je     8355543 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xcf>
 835553c:	b8 00 00 00 00       	mov    $0x0,%eax
 8355541:	eb 26                	jmp    8355569 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xf5>
 8355543:	0f be 45 f3          	movsbl -0xd(%ebp),%eax
 8355547:	89 44 24 04          	mov    %eax,0x4(%esp)
 835554b:	8b 45 0c             	mov    0xc(%ebp),%eax
 835554e:	89 04 24             	mov    %eax,(%esp)
 8355551:	e8 6c d7 ff ff       	call   8352cc2 <_ZN5Quest16check_power_sideEc>
 8355556:	83 f0 01             	xor    $0x1,%eax
 8355559:	84 c0                	test   %al,%al
 835555b:	74 07                	je     8355564 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xf0>
 835555d:	b8 00 00 00 00       	mov    $0x0,%eax
 8355562:	eb 05                	jmp    8355569 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE+0xf5>
 8355564:	b8 01 00 00 00       	mov    $0x1,%eax
 8355569:	c9                   	leave
 835556a:	c3                   	ret
 835556b:	90                   	nop

```

```c
// QuestList::Check_Quest @ 0x8355474

/* QuestList::Check_Quest(Quest*, stSelectQuestParam&, WongWork::CQuestClear const&) */

undefined4 __thiscall
QuestList::Check_Quest
          (QuestList *this,Quest *param_1,stSelectQuestParam *param_2,CQuestClear *param_3)

{
  stSelectQuestParam sVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  sVar1 = param_2[0x14];
  iVar2 = *(int *)(param_2 + 0x18);
  cVar3 = Quest::exposeQuest(param_1);
  if (cVar3 == '\x01') {
    cVar3 = Quest::check_possible(param_1,param_2);
    if (cVar3 == '\x01') {
      cVar3 = check_ahead_quest(this,iVar2,param_3);
      if (cVar3 == '\x01') {
        cVar3 = check_anti_quest(this,iVar2,param_3);
        if (cVar3 == '\x01') {
          cVar3 = Quest::check_power_side(param_1,(char)sVar1);
          if (cVar3 == '\x01') {
            uVar4 = 1;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## GetDailyQuestList

```asm
// === 0835589e QuestList::GetDailyQuestList  [0x0835589e-0x8355a0f] ===
 835589e:	55                   	push   %ebp
 835589f:	89 e5                	mov    %esp,%ebp
 83558a1:	83 ec 58             	sub    $0x58,%esp
 83558a4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83558a7:	89 04 24             	mov    %eax,(%esp)
 83558aa:	e8 71 9a 03 00       	call   838f320 <_ZNSt14_List_iteratorIiEC1Ev>
 83558af:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83558b6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83558b9:	89 04 24             	mov    %eax,(%esp)
 83558bc:	e8 c9 c3 03 00       	call   8391c8a <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiiEES3_EC1Ev>
 83558c1:	8b 45 08             	mov    0x8(%ebp),%eax
 83558c4:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 83558ca:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83558cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 83558d1:	89 04 24             	mov    %eax,(%esp)
 83558d4:	e8 ef 1a ee ff       	call   82373c8 <_ZNSt4listIiSaIiEE5beginEv>
 83558d9:	83 ec 04             	sub    $0x4,%esp
 83558dc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83558df:	89 45 dc             	mov    %eax,-0x24(%ebp)
 83558e2:	e9 f2 00 00 00       	jmp    83559d9 <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0x13b>
 83558e7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83558ea:	89 04 24             	mov    %eax,(%esp)
 83558ed:	e8 38 1b ee ff       	call   823742a <_ZNKSt14_List_iteratorIiEdeEv>
 83558f2:	8b 00                	mov    (%eax),%eax
 83558f4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83558f7:	8b 45 08             	mov    0x8(%ebp),%eax
 83558fa:	8d 88 bc 00 00 00    	lea    0xbc(%eax),%ecx
 8355900:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8355903:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8355906:	89 54 24 08          	mov    %edx,0x8(%esp)
 835590a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 835590e:	89 04 24             	mov    %eax,(%esp)
 8355911:	e8 b2 9a 03 00       	call   838f3c8 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE11equal_rangeERS3_>
 8355916:	83 ec 04             	sub    $0x4,%esp
 8355919:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 835591c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355920:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8355923:	89 04 24             	mov    %eax,(%esp)
 8355926:	e8 e1 c3 03 00       	call   8391d0c <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiiEES3_EaSISt17_Rb_tree_iteratorIS2_ES7_EERS4_OS_IT_T0_E>
 835592b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 835592e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8355931:	eb 6c                	jmp    835599f <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0x101>
 8355933:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8355936:	89 04 24             	mov    %eax,(%esp)
 8355939:	e8 d2 15 d7 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 835593e:	8b 40 04             	mov    0x4(%eax),%eax
 8355941:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8355944:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8355947:	89 44 24 04          	mov    %eax,0x4(%esp)
 835594b:	8b 45 08             	mov    0x8(%ebp),%eax
 835594e:	89 04 24             	mov    %eax,(%esp)
 8355951:	e8 06 01 00 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 8355956:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8355959:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 835595d:	74 1f                	je     835597e <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0xe0>
 835595f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8355962:	8b 40 08             	mov    0x8(%eax),%eax
 8355965:	83 f8 03             	cmp    $0x3,%eax
 8355968:	75 17                	jne    8355981 <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0xe3>
 835596a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 835596d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355971:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355974:	89 04 24             	mov    %eax,(%esp)
 8355977:	e8 32 72 f1 ff       	call   826cbae <_ZNSt4listIiSaIiEE9push_backERKi>
 835597c:	eb 04                	jmp    8355982 <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0xe4>
 835597e:	90                   	nop
 835597f:	eb 01                	jmp    8355982 <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0xe4>
 8355981:	90                   	nop
 8355982:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8355985:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 835598c:	00 
 835598d:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8355990:	89 54 24 04          	mov    %edx,0x4(%esp)
 8355994:	89 04 24             	mov    %eax,(%esp)
 8355997:	e8 ba d1 fe ff       	call   8342b56 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEppEi>
 835599c:	83 ec 04             	sub    $0x4,%esp
 835599f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83559a2:	83 c0 04             	add    $0x4,%eax
 83559a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83559a9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83559ac:	89 04 24             	mov    %eax,(%esp)
 83559af:	e8 48 15 d7 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 83559b4:	84 c0                	test   %al,%al
 83559b6:	0f 85 77 ff ff ff    	jne    8355933 <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0x95>
 83559bc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83559bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83559c6:	00 
 83559c7:	8d 55 dc             	lea    -0x24(%ebp),%edx
 83559ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 83559ce:	89 04 24             	mov    %eax,(%esp)
 83559d1:	e8 fc c1 03 00       	call   8391bd2 <_ZNSt14_List_iteratorIiEppEi>
 83559d6:	83 ec 04             	sub    $0x4,%esp
 83559d9:	8b 45 08             	mov    0x8(%ebp),%eax
 83559dc:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 83559e2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83559e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 83559e9:	89 04 24             	mov    %eax,(%esp)
 83559ec:	e8 4d 6a f1 ff       	call   826c43e <_ZNSt4listIiSaIiEE3endEv>
 83559f1:	83 ec 04             	sub    $0x4,%esp
 83559f4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83559f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 83559fb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83559fe:	89 04 24             	mov    %eax,(%esp)
 8355a01:	e8 5c 6a f1 ff       	call   826c462 <_ZNKSt14_List_iteratorIiEneERKS0_>
 8355a06:	84 c0                	test   %al,%al
 8355a08:	0f 85 d9 fe ff ff    	jne    83558e7 <_ZN9QuestList17GetDailyQuestListERSt4listIiSaIiEE+0x49>
 8355a0e:	c9                   	leave
 8355a0f:	c3                   	ret

```

```c
// QuestList::GetDailyQuestList @ 0x835589e

/* QuestList::GetDailyQuestList(std::list<int, std::allocator<int> >&) */

void __thiscall QuestList::GetDailyQuestList(QuestList *this,list *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  _Rb_tree_const_iterator a_Stack_34 [4];
  int local_30;
  undefined4 local_2c;
  _List_iterator<int> local_28 [4];
  _List_iterator local_24 [4];
  int local_20 [2];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_18 [4];
  _List_iterator<int> local_14 [4];
  int local_10;
  
  std::_List_iterator<int>::_List_iterator(local_28);
  local_10 = 0;
  std::
  pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
  ::pair((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
          *)&local_38);
  std::list<int,std::allocator<int>>::begin();
  while( true ) {
    std::list<int,std::allocator<int>>::end();
    cVar1 = std::_List_iterator<int>::operator!=(local_28,local_24);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)std::_List_iterator<int>::operator*(local_28);
    local_2c = *puVar2;
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::equal_range
              (local_20);
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
    ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
                 *)&local_38,(pair *)local_20);
    local_3c = local_38;
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_3c,
                              a_Stack_34), cVar1 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_3c);
      local_30 = *(int *)(iVar3 + 4);
      local_10 = find_quest((int)this);
      if ((local_10 != 0) && (*(int *)(local_10 + 8) == 3)) {
        std::list<int,std::allocator<int>>::push_back
                  ((list<int,std::allocator<int>> *)param_1,&local_30);
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++(local_18,(int)&local_3c);
    }
    std::_List_iterator<int>::operator++(local_14,(int)local_28);
  }
  return;
}

```

---

## GetTrainingQuestList

```asm
// === 08355a10 QuestList::GetTrainingQuestList  [0x08355a10-0x8355a5b] ===
 8355a10:	55                   	push   %ebp
 8355a11:	89 e5                	mov    %esp,%ebp
 8355a13:	53                   	push   %ebx
 8355a14:	83 ec 24             	sub    $0x24,%esp
 8355a17:	8b 45 10             	mov    0x10(%ebp),%eax
 8355a1a:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8355a1e:	66 83 7d f4 46       	cmpw   $0x46,-0xc(%ebp)
 8355a23:	7f 2d                	jg     8355a52 <_ZN9QuestList20GetTrainingQuestListERSt6vectorIiSaIiEEs+0x42>
 8355a25:	66 83 7d f4 00       	cmpw   $0x0,-0xc(%ebp)
 8355a2a:	7e 29                	jle    8355a55 <_ZN9QuestList20GetTrainingQuestListERSt6vectorIiSaIiEEs+0x45>
 8355a2c:	0f bf 5d f4          	movswl -0xc(%ebp),%ebx
 8355a30:	e8 66 67 d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8355a35:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8355a39:	89 04 24             	mov    %eax,(%esp)
 8355a3c:	e8 bd e6 00 00       	call   83640fe <_ZN12CDataManager21getDailyTrainingQuestEi>
 8355a41:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355a45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355a48:	89 04 24             	mov    %eax,(%esp)
 8355a4b:	e8 82 75 d7 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8355a50:	eb 04                	jmp    8355a56 <_ZN9QuestList20GetTrainingQuestListERSt6vectorIiSaIiEEs+0x46>
 8355a52:	90                   	nop
 8355a53:	eb 01                	jmp    8355a56 <_ZN9QuestList20GetTrainingQuestListERSt6vectorIiSaIiEEs+0x46>
 8355a55:	90                   	nop
 8355a56:	83 c4 24             	add    $0x24,%esp
 8355a59:	5b                   	pop    %ebx
 8355a5a:	5d                   	pop    %ebp
 8355a5b:	c3                   	ret

```

```c
// QuestList::GetTrainingQuestList @ 0x8355a10

/* QuestList::GetTrainingQuestList(std::vector<int, std::allocator<int> >&, short) */

void __thiscall QuestList::GetTrainingQuestList(QuestList *this,vector *param_1,short param_2)

{
  CDataManager *this_00;
  vector *pvVar1;
  
  if ((param_2 < 0x47) && (0 < param_2)) {
    this_00 = (CDataManager *)G_CDataManager();
    pvVar1 = (vector *)CDataManager::getDailyTrainingQuest(this_00,(int)param_2);
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)param_1,pvVar1);
  }
  return;
}

```

---

## QuestList

```asm
// === 083538f0 QuestList::QuestList  [0x083538f0-0x8353a9f] ===
 83538f0:	55                   	push   %ebp
 83538f1:	89 e5                	mov    %esp,%ebp
 83538f3:	56                   	push   %esi
 83538f4:	53                   	push   %ebx
 83538f5:	83 ec 10             	sub    $0x10,%esp
 83538f8:	8b 45 08             	mov    0x8(%ebp),%eax
 83538fb:	89 04 24             	mov    %eax,(%esp)
 83538fe:	e8 d5 d7 03 00       	call   83910d8 <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 8353903:	8b 45 08             	mov    0x8(%ebp),%eax
 8353906:	83 c0 14             	add    $0x14,%eax
 8353909:	89 04 24             	mov    %eax,(%esp)
 835390c:	e8 29 45 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8353911:	8b 45 08             	mov    0x8(%ebp),%eax
 8353914:	83 c0 2c             	add    $0x2c,%eax
 8353917:	89 04 24             	mov    %eax,(%esp)
 835391a:	e8 1b 45 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 835391f:	8b 45 08             	mov    0x8(%ebp),%eax
 8353922:	83 c0 44             	add    $0x44,%eax
 8353925:	89 04 24             	mov    %eax,(%esp)
 8353928:	e8 0d 45 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 835392d:	8b 45 08             	mov    0x8(%ebp),%eax
 8353930:	83 c0 5c             	add    $0x5c,%eax
 8353933:	89 04 24             	mov    %eax,(%esp)
 8353936:	e8 ff 44 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 835393b:	8b 45 08             	mov    0x8(%ebp),%eax
 835393e:	83 c0 74             	add    $0x74,%eax
 8353941:	89 04 24             	mov    %eax,(%esp)
 8353944:	e8 f1 44 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8353949:	8b 45 08             	mov    0x8(%ebp),%eax
 835394c:	05 8c 00 00 00       	add    $0x8c,%eax
 8353951:	89 04 24             	mov    %eax,(%esp)
 8353954:	e8 e1 44 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8353959:	8b 45 08             	mov    0x8(%ebp),%eax
 835395c:	05 a4 00 00 00       	add    $0xa4,%eax
 8353961:	89 04 24             	mov    %eax,(%esp)
 8353964:	e8 d1 44 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8353969:	8b 45 08             	mov    0x8(%ebp),%eax
 835396c:	05 bc 00 00 00       	add    $0xbc,%eax
 8353971:	89 04 24             	mov    %eax,(%esp)
 8353974:	e8 c1 44 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8353979:	8b 45 08             	mov    0x8(%ebp),%eax
 835397c:	05 d4 00 00 00       	add    $0xd4,%eax
 8353981:	89 04 24             	mov    %eax,(%esp)
 8353984:	e8 23 a8 d3 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8353989:	8b 45 08             	mov    0x8(%ebp),%eax
 835398c:	05 e0 00 00 00       	add    $0xe0,%eax
 8353991:	89 04 24             	mov    %eax,(%esp)
 8353994:	e8 3d 1e ee ff       	call   82357d6 <_ZNSt4listIiSaIiEEC1Ev>
 8353999:	e9 fb 00 00 00       	jmp    8353a99 <_ZN9QuestListC1Ev+0x1a9>
 835399e:	89 d3                	mov    %edx,%ebx
 83539a0:	89 c6                	mov    %eax,%esi
 83539a2:	8b 45 08             	mov    0x8(%ebp),%eax
 83539a5:	05 d4 00 00 00       	add    $0xd4,%eax
 83539aa:	89 04 24             	mov    %eax,(%esp)
 83539ad:	e8 28 04 d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 83539b2:	89 f0                	mov    %esi,%eax
 83539b4:	89 da                	mov    %ebx,%edx
 83539b6:	eb 00                	jmp    83539b8 <_ZN9QuestListC1Ev+0xc8>
 83539b8:	89 d3                	mov    %edx,%ebx
 83539ba:	89 c6                	mov    %eax,%esi
 83539bc:	8b 45 08             	mov    0x8(%ebp),%eax
 83539bf:	05 bc 00 00 00       	add    $0xbc,%eax
 83539c4:	89 04 24             	mov    %eax,(%esp)
 83539c7:	e8 7c 16 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 83539cc:	89 f0                	mov    %esi,%eax
 83539ce:	89 da                	mov    %ebx,%edx
 83539d0:	eb 00                	jmp    83539d2 <_ZN9QuestListC1Ev+0xe2>
 83539d2:	89 d3                	mov    %edx,%ebx
 83539d4:	89 c6                	mov    %eax,%esi
 83539d6:	8b 45 08             	mov    0x8(%ebp),%eax
 83539d9:	05 a4 00 00 00       	add    $0xa4,%eax
 83539de:	89 04 24             	mov    %eax,(%esp)
 83539e1:	e8 62 16 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 83539e6:	89 f0                	mov    %esi,%eax
 83539e8:	89 da                	mov    %ebx,%edx
 83539ea:	eb 00                	jmp    83539ec <_ZN9QuestListC1Ev+0xfc>
 83539ec:	89 d3                	mov    %edx,%ebx
 83539ee:	89 c6                	mov    %eax,%esi
 83539f0:	8b 45 08             	mov    0x8(%ebp),%eax
 83539f3:	05 8c 00 00 00       	add    $0x8c,%eax
 83539f8:	89 04 24             	mov    %eax,(%esp)
 83539fb:	e8 48 16 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353a00:	89 f0                	mov    %esi,%eax
 8353a02:	89 da                	mov    %ebx,%edx
 8353a04:	eb 00                	jmp    8353a06 <_ZN9QuestListC1Ev+0x116>
 8353a06:	89 d3                	mov    %edx,%ebx
 8353a08:	89 c6                	mov    %eax,%esi
 8353a0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8353a0d:	83 c0 74             	add    $0x74,%eax
 8353a10:	89 04 24             	mov    %eax,(%esp)
 8353a13:	e8 30 16 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353a18:	89 f0                	mov    %esi,%eax
 8353a1a:	89 da                	mov    %ebx,%edx
 8353a1c:	eb 00                	jmp    8353a1e <_ZN9QuestListC1Ev+0x12e>
 8353a1e:	89 d3                	mov    %edx,%ebx
 8353a20:	89 c6                	mov    %eax,%esi
 8353a22:	8b 45 08             	mov    0x8(%ebp),%eax
 8353a25:	83 c0 5c             	add    $0x5c,%eax
 8353a28:	89 04 24             	mov    %eax,(%esp)
 8353a2b:	e8 18 16 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353a30:	89 f0                	mov    %esi,%eax
 8353a32:	89 da                	mov    %ebx,%edx
 8353a34:	eb 00                	jmp    8353a36 <_ZN9QuestListC1Ev+0x146>
 8353a36:	89 d3                	mov    %edx,%ebx
 8353a38:	89 c6                	mov    %eax,%esi
 8353a3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8353a3d:	83 c0 44             	add    $0x44,%eax
 8353a40:	89 04 24             	mov    %eax,(%esp)
 8353a43:	e8 00 16 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353a48:	89 f0                	mov    %esi,%eax
 8353a4a:	89 da                	mov    %ebx,%edx
 8353a4c:	eb 00                	jmp    8353a4e <_ZN9QuestListC1Ev+0x15e>
 8353a4e:	89 d3                	mov    %edx,%ebx
 8353a50:	89 c6                	mov    %eax,%esi
 8353a52:	8b 45 08             	mov    0x8(%ebp),%eax
 8353a55:	83 c0 2c             	add    $0x2c,%eax
 8353a58:	89 04 24             	mov    %eax,(%esp)
 8353a5b:	e8 e8 15 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353a60:	89 f0                	mov    %esi,%eax
 8353a62:	89 da                	mov    %ebx,%edx
 8353a64:	eb 00                	jmp    8353a66 <_ZN9QuestListC1Ev+0x176>
 8353a66:	89 d3                	mov    %edx,%ebx
 8353a68:	89 c6                	mov    %eax,%esi
 8353a6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8353a6d:	83 c0 14             	add    $0x14,%eax
 8353a70:	89 04 24             	mov    %eax,(%esp)
 8353a73:	e8 d0 15 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353a78:	89 f0                	mov    %esi,%eax
 8353a7a:	89 da                	mov    %ebx,%edx
 8353a7c:	eb 00                	jmp    8353a7e <_ZN9QuestListC1Ev+0x18e>
 8353a7e:	89 d3                	mov    %edx,%ebx
 8353a80:	89 c6                	mov    %eax,%esi
 8353a82:	8b 45 08             	mov    0x8(%ebp),%eax
 8353a85:	89 04 24             	mov    %eax,(%esp)
 8353a88:	e8 3f 6c 02 00       	call   837a6cc <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8353a8d:	89 f0                	mov    %esi,%eax
 8353a8f:	89 da                	mov    %ebx,%edx
 8353a91:	89 04 24             	mov    %eax,(%esp)
 8353a94:	e8 b7 fc 78 00       	call   8ae3750 <_Unwind_Resume>
 8353a99:	83 c4 10             	add    $0x10,%esp
 8353a9c:	5b                   	pop    %ebx
 8353a9d:	5e                   	pop    %esi
 8353a9e:	5d                   	pop    %ebp
 8353a9f:	c3                   	ret

```

```c
// QuestList::QuestList @ 0x83538f0

/* QuestList::QuestList() */

void __thiscall QuestList::QuestList(QuestList *this)

{
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  hash_map((hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> *)
           this);
                    /* try { // try from 0835390c to 08353910 has its CatchHandler @ 08353a7e */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x14));
                    /* try { // try from 0835391a to 0835391e has its CatchHandler @ 08353a66 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x2c));
                    /* try { // try from 08353928 to 0835392c has its CatchHandler @ 08353a4e */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x44));
                    /* try { // try from 08353936 to 0835393a has its CatchHandler @ 08353a36 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x5c));
                    /* try { // try from 08353944 to 08353948 has its CatchHandler @ 08353a1e */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x74));
                    /* try { // try from 08353954 to 08353958 has its CatchHandler @ 08353a06 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x8c));
                    /* try { // try from 08353964 to 08353968 has its CatchHandler @ 083539ec */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xa4));
                    /* try { // try from 08353974 to 08353978 has its CatchHandler @ 083539d2 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xbc));
                    /* try { // try from 08353984 to 08353988 has its CatchHandler @ 083539b8 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xd4));
                    /* try { // try from 08353994 to 08353998 has its CatchHandler @ 0835399e */
  std::list<int,std::allocator<int>>::list((list<int,std::allocator<int>> *)(this + 0xe0));
  return;
}

```

---

## allowable_questlist_as_npc

```asm
// === 0835556c QuestList::allowable_questlist_as_npc  [0x0835556c-0x8355725] ===
 835556c:	55                   	push   %ebp
 835556d:	89 e5                	mov    %esp,%ebp
 835556f:	83 ec 58             	sub    $0x58,%esp
 8355572:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8355575:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8355578:	8d 45 e0             	lea    -0x20(%ebp),%eax
 835557b:	89 04 24             	mov    %eax,(%esp)
 835557e:	e8 9d 9d 03 00       	call   838f320 <_ZNSt14_List_iteratorIiEC1Ev>
 8355583:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 835558a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 835558d:	89 04 24             	mov    %eax,(%esp)
 8355590:	e8 f5 c6 03 00       	call   8391c8a <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiiEES3_EC1Ev>
 8355595:	8b 45 08             	mov    0x8(%ebp),%eax
 8355598:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 835559e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83555a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83555a5:	89 04 24             	mov    %eax,(%esp)
 83555a8:	e8 1b 1e ee ff       	call   82373c8 <_ZNSt4listIiSaIiEE5beginEv>
 83555ad:	83 ec 04             	sub    $0x4,%esp
 83555b0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83555b3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 83555b6:	e9 33 01 00 00       	jmp    83556ee <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x182>
 83555bb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 83555be:	89 04 24             	mov    %eax,(%esp)
 83555c1:	e8 64 1e ee ff       	call   823742a <_ZNKSt14_List_iteratorIiEdeEv>
 83555c6:	8b 00                	mov    (%eax),%eax
 83555c8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 83555cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83555ce:	8d 55 dc             	lea    -0x24(%ebp),%edx
 83555d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 83555d5:	8b 55 10             	mov    0x10(%ebp),%edx
 83555d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 83555dc:	89 04 24             	mov    %eax,(%esp)
 83555df:	e8 c8 c6 03 00       	call   8391cac <_ZNKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE11equal_rangeERS3_>
 83555e4:	83 ec 04             	sub    $0x4,%esp
 83555e7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83555ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 83555ee:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83555f1:	89 04 24             	mov    %eax,(%esp)
 83555f4:	e8 df c6 03 00       	call   8391cd8 <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiiEES3_EaSEOS4_>
 83555f9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 83555fc:	89 45 d0             	mov    %eax,-0x30(%ebp)
 83555ff:	e9 b0 00 00 00       	jmp    83556b4 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x148>
 8355604:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8355607:	89 04 24             	mov    %eax,(%esp)
 835560a:	e8 01 19 d7 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 835560f:	8b 50 04             	mov    0x4(%eax),%edx
 8355612:	8b 45 14             	mov    0x14(%ebp),%eax
 8355615:	89 50 18             	mov    %edx,0x18(%eax)
 8355618:	8b 45 14             	mov    0x14(%ebp),%eax
 835561b:	8b 40 18             	mov    0x18(%eax),%eax
 835561e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355622:	8b 45 08             	mov    0x8(%ebp),%eax
 8355625:	89 04 24             	mov    %eax,(%esp)
 8355628:	e8 2f 04 00 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 835562d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8355630:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8355634:	74 6c                	je     83556a2 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x136>
 8355636:	8b 45 18             	mov    0x18(%ebp),%eax
 8355639:	89 44 24 0c          	mov    %eax,0xc(%esp)
 835563d:	8b 45 14             	mov    0x14(%ebp),%eax
 8355640:	89 44 24 08          	mov    %eax,0x8(%esp)
 8355644:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8355647:	89 44 24 04          	mov    %eax,0x4(%esp)
 835564b:	8b 45 08             	mov    0x8(%ebp),%eax
 835564e:	89 04 24             	mov    %eax,(%esp)
 8355651:	e8 1e fe ff ff       	call   8355474 <_ZN9QuestList11Check_QuestEP5QuestR18stSelectQuestParamRKN8WongWork11CQuestClearE>
 8355656:	83 f0 01             	xor    $0x1,%eax
 8355659:	84 c0                	test   %al,%al
 835565b:	75 48                	jne    83556a5 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x139>
 835565d:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8355661:	83 f0 01             	xor    $0x1,%eax
 8355664:	84 c0                	test   %al,%al
 8355666:	74 23                	je     835568b <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x11f>
 8355668:	8b 45 14             	mov    0x14(%ebp),%eax
 835566b:	8b 40 18             	mov    0x18(%eax),%eax
 835566e:	8b 55 18             	mov    0x18(%ebp),%edx
 8355671:	89 54 24 08          	mov    %edx,0x8(%esp)
 8355675:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355679:	8b 45 08             	mov    0x8(%ebp),%eax
 835567c:	89 04 24             	mov    %eax,(%esp)
 835567f:	e8 00 fc ff ff       	call   8355284 <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE>
 8355684:	83 f0 01             	xor    $0x1,%eax
 8355687:	84 c0                	test   %al,%al
 8355689:	75 1d                	jne    83556a8 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x13c>
 835568b:	8b 45 14             	mov    0x14(%ebp),%eax
 835568e:	83 c0 18             	add    $0x18,%eax
 8355691:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355695:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355698:	89 04 24             	mov    %eax,(%esp)
 835569b:	e8 0e 75 f1 ff       	call   826cbae <_ZNSt4listIiSaIiEE9push_backERKi>
 83556a0:	eb 07                	jmp    83556a9 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x13d>
 83556a2:	90                   	nop
 83556a3:	eb 04                	jmp    83556a9 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x13d>
 83556a5:	90                   	nop
 83556a6:	eb 01                	jmp    83556a9 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x13d>
 83556a8:	90                   	nop
 83556a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83556ac:	89 04 24             	mov    %eax,(%esp)
 83556af:	e8 ce c8 df ff       	call   8151f82 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEppEv>
 83556b4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83556b7:	83 c0 04             	add    $0x4,%eax
 83556ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 83556be:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83556c1:	89 04 24             	mov    %eax,(%esp)
 83556c4:	e8 33 18 d7 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 83556c9:	84 c0                	test   %al,%al
 83556cb:	0f 85 33 ff ff ff    	jne    8355604 <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x98>
 83556d1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83556d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83556db:	00 
 83556dc:	8d 55 e0             	lea    -0x20(%ebp),%edx
 83556df:	89 54 24 04          	mov    %edx,0x4(%esp)
 83556e3:	89 04 24             	mov    %eax,(%esp)
 83556e6:	e8 e7 c4 03 00       	call   8391bd2 <_ZNSt14_List_iteratorIiEppEi>
 83556eb:	83 ec 04             	sub    $0x4,%esp
 83556ee:	8b 45 08             	mov    0x8(%ebp),%eax
 83556f1:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 83556f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 83556fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 83556fe:	89 04 24             	mov    %eax,(%esp)
 8355701:	e8 38 6d f1 ff       	call   826c43e <_ZNSt4listIiSaIiEE3endEv>
 8355706:	83 ec 04             	sub    $0x4,%esp
 8355709:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 835570c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355710:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8355713:	89 04 24             	mov    %eax,(%esp)
 8355716:	e8 47 6d f1 ff       	call   826c462 <_ZNKSt14_List_iteratorIiEneERKS0_>
 835571b:	84 c0                	test   %al,%al
 835571d:	0f 85 98 fe ff ff    	jne    83555bb <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb+0x4f>
 8355723:	c9                   	leave
 8355724:	c3                   	ret
 8355725:	90                   	nop

```

```c
// QuestList::allowable_questlist_as_npc @ 0x835556c

/* QuestList::allowable_questlist_as_npc(std::list<int, std::allocator<int> >&, std::multimap<int,
   int, std::less<int>, std::allocator<std::pair<int const, int> > > const&, stSelectQuestParam&,
   WongWork::CQuestClear const&, bool) */

void __thiscall
QuestList::allowable_questlist_as_npc
          (QuestList *this,list *param_1,multimap *param_2,stSelectQuestParam *param_3,
          CQuestClear *param_4,bool param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  _Rb_tree_const_iterator a_Stack_2c [4];
  undefined4 local_28;
  _List_iterator<int> local_24 [4];
  _List_iterator local_20 [4];
  int local_1c [2];
  _List_iterator<int> local_14 [4];
  Quest *local_10;
  
  std::_List_iterator<int>::_List_iterator(local_24);
  local_10 = (Quest *)0x0;
  std::
  pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
  ::pair((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
          *)&local_30);
  std::list<int,std::allocator<int>>::begin();
  while( true ) {
    std::list<int,std::allocator<int>>::end();
    cVar1 = std::_List_iterator<int>::operator!=(local_24,local_20);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)std::_List_iterator<int>::operator*(local_24);
    local_28 = *puVar2;
    std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::equal_range
              (local_1c);
    std::
    pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
    ::operator=((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
                 *)&local_30,(pair *)local_1c);
    local_34 = local_30;
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34,
                              a_Stack_2c), cVar1 != '\0') {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar3 + 4);
      local_10 = (Quest *)find_quest((int)this);
      if (((local_10 != (Quest *)0x0) &&
          (cVar1 = Check_Quest(this,local_10,param_3,param_4), cVar1 == '\x01')) &&
         ((param_5 || (cVar1 = check_clear(this,*(int *)(param_3 + 0x18),param_4), cVar1 == '\x01'))
         )) {
        std::list<int,std::allocator<int>>::push_back
                  ((list<int,std::allocator<int>> *)param_1,(int *)(param_3 + 0x18));
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34);
    }
    std::_List_iterator<int>::operator++(local_14,(int)local_24);
  }
  return;
}

```

---

## check_ahead_quest

```asm
// === 08354fc8 QuestList::check_ahead_quest  [0x08354fc8-0x835511d] ===
 8354fc8:	55                   	push   %ebp
 8354fc9:	89 e5                	mov    %esp,%ebp
 8354fcb:	83 ec 48             	sub    $0x48,%esp
 8354fce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8354fd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354fd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8354fd8:	89 04 24             	mov    %eax,(%esp)
 8354fdb:	e8 7c 0a 00 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 8354fe0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8354fe3:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8354fe7:	75 3d                	jne    8355026 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x5e>
 8354fe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8354fec:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354ff0:	c7 44 24 10 91 04 c3 	movl   $0x8c30491,0x10(%esp)
 8354ff7:	08 
 8354ff8:	c7 44 24 0c b7 14 00 	movl   $0x14b7,0xc(%esp)
 8354fff:	00 
 8355000:	c7 44 24 08 60 45 c3 	movl   $0x8c34560,0x8(%esp)
 8355007:	08 
 8355008:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 835500f:	08 
 8355010:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8355017:	e8 ee eb 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 835501c:	b8 00 00 00 00       	mov    $0x0,%eax
 8355021:	e9 f6 00 00 00       	jmp    835511c <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x154>
 8355026:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8355029:	83 c0 2c             	add    $0x2c,%eax
 835502c:	89 04 24             	mov    %eax,(%esp)
 835502f:	e8 d6 cb 03 00       	call   8391c0a <_ZNKSt6vectorIS_IiSaIiEESaIS1_EE5emptyEv>
 8355034:	84 c0                	test   %al,%al
 8355036:	74 0a                	je     8355042 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x7a>
 8355038:	b8 01 00 00 00       	mov    $0x1,%eax
 835503d:	e9 da 00 00 00       	jmp    835511c <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x154>
 8355042:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8355045:	89 04 24             	mov    %eax,(%esp)
 8355048:	e8 e5 a1 e2 ff       	call   817f232 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1Ev>
 835504d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8355050:	83 c0 2c             	add    $0x2c,%eax
 8355053:	89 04 24             	mov    %eax,(%esp)
 8355056:	e8 f3 cb 03 00       	call   8391c4e <_ZNKSt6vectorIS_IiSaIiEESaIS1_EE4sizeEv>
 835505b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 835505e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8355065:	e9 9c 00 00 00       	jmp    8355106 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x13e>
 835506a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 835506d:	8d 50 2c             	lea    0x2c(%eax),%edx
 8355070:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8355073:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355077:	89 14 24             	mov    %edx,(%esp)
 835507a:	e8 f1 cb 03 00       	call   8391c70 <_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEj>
 835507f:	89 04 24             	mov    %eax,(%esp)
 8355082:	e8 39 91 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8355087:	89 45 ec             	mov    %eax,-0x14(%ebp)
 835508a:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 835508e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8355095:	eb 4c                	jmp    83550e3 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x11b>
 8355097:	8b 45 dc             	mov    -0x24(%ebp),%eax
 835509a:	8d 50 2c             	lea    0x2c(%eax),%edx
 835509d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83550a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83550a4:	89 14 24             	mov    %edx,(%esp)
 83550a7:	e8 c4 cb 03 00       	call   8391c70 <_ZNSt6vectorIS_IiSaIiEESaIS1_EEixEj>
 83550ac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 83550af:	89 54 24 04          	mov    %edx,0x4(%esp)
 83550b3:	89 04 24             	mov    %eax,(%esp)
 83550b6:	e8 21 91 d3 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 83550bb:	8b 00                	mov    (%eax),%eax
 83550bd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 83550c0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 83550c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83550c7:	8b 45 10             	mov    0x10(%ebp),%eax
 83550ca:	89 04 24             	mov    %eax,(%esp)
 83550cd:	e8 0e 6a d3 ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 83550d2:	83 f0 01             	xor    $0x1,%eax
 83550d5:	84 c0                	test   %al,%al
 83550d7:	74 06                	je     83550df <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x117>
 83550d9:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 83550dd:	eb 11                	jmp    83550f0 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x128>
 83550df:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83550e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83550e6:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 83550e9:	0f 92 c0             	setb   %al
 83550ec:	84 c0                	test   %al,%al
 83550ee:	75 a7                	jne    8355097 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0xcf>
 83550f0:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 83550f4:	83 f0 01             	xor    $0x1,%eax
 83550f7:	84 c0                	test   %al,%al
 83550f9:	74 07                	je     8355102 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x13a>
 83550fb:	b8 01 00 00 00       	mov    $0x1,%eax
 8355100:	eb 1a                	jmp    835511c <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0x154>
 8355102:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8355106:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8355109:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 835510c:	0f 92 c0             	setb   %al
 835510f:	84 c0                	test   %al,%al
 8355111:	0f 85 53 ff ff ff    	jne    835506a <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE+0xa2>
 8355117:	b8 00 00 00 00       	mov    $0x0,%eax
 835511c:	c9                   	leave
 835511d:	c3                   	ret

```

```c
// QuestList::check_ahead_quest @ 0x8354fc8

/* QuestList::check_ahead_quest(int, WongWork::CQuestClear const&) */

undefined4 __thiscall QuestList::check_ahead_quest(QuestList *this,int param_1,CQuestClear *param_2)

{
  char cVar1;
  undefined4 uVar2;
  vector<int,std::allocator<int>> *pvVar3;
  uint *puVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_2c [4];
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  uint local_10;
  
  local_28 = find_quest((int)this);
  if (local_28 == 0) {
    LogManager::logFormat
              (1,"data_manager.cpp",
               "bool QuestList::check_ahead_quest(int, const WongWork::CQuestClear&)",0x14b7,
               "find_quest(%d)",param_1);
    uVar2 = 0;
  }
  else {
    cVar1 = std::
            vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
            ::empty();
    if (cVar1 == '\0') {
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
                (local_2c);
      local_20 = std::
                 vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 ::size((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                         *)(local_28 + 0x2c));
      for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
        pvVar3 = (vector<int,std::allocator<int>> *)
                 std::
                 vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                 ::operator[]((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                               *)(local_28 + 0x2c),local_1c);
        local_18 = std::vector<int,std::allocator<int>>::size(pvVar3);
        local_11 = '\0';
        for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
          pvVar3 = (vector<int,std::allocator<int>> *)
                   std::
                   vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                   ::operator[]((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
                                 *)(local_28 + 0x2c),local_1c);
          puVar4 = (uint *)std::vector<int,std::allocator<int>>::operator[](pvVar3,local_10);
          local_24 = *puVar4;
          cVar1 = WongWork::CQuestClear::isClearedQuest(param_2,local_24);
          if (cVar1 != '\x01') {
            local_11 = '\x01';
            break;
          }
        }
        if (local_11 != '\x01') {
          return 1;
        }
      }
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

## check_anti_quest

```asm
// === 0835511e QuestList::check_anti_quest  [0x0835511e-0x8355283] ===
 835511e:	55                   	push   %ebp
 835511f:	89 e5                	mov    %esp,%ebp
 8355121:	83 ec 68             	sub    $0x68,%esp
 8355124:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355127:	89 44 24 04          	mov    %eax,0x4(%esp)
 835512b:	8b 45 08             	mov    0x8(%ebp),%eax
 835512e:	89 04 24             	mov    %eax,(%esp)
 8355131:	e8 26 09 00 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 8355136:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8355139:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 835513d:	75 3d                	jne    835517c <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0x5e>
 835513f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355142:	89 44 24 14          	mov    %eax,0x14(%esp)
 8355146:	c7 44 24 10 91 04 c3 	movl   $0x8c30491,0x10(%esp)
 835514d:	08 
 835514e:	c7 44 24 0c 0a 15 00 	movl   $0x150a,0xc(%esp)
 8355155:	00 
 8355156:	c7 44 24 08 00 45 c3 	movl   $0x8c34500,0x8(%esp)
 835515d:	08 
 835515e:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8355165:	08 
 8355166:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 835516d:	e8 98 ea 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8355172:	b8 00 00 00 00       	mov    $0x0,%eax
 8355177:	e9 05 01 00 00       	jmp    8355281 <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0x163>
 835517c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 835517f:	89 04 24             	mov    %eax,(%esp)
 8355182:	e8 ab a0 e2 ff       	call   817f232 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1Ev>
 8355187:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835518a:	8d 50 38             	lea    0x38(%eax),%edx
 835518d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8355190:	89 54 24 04          	mov    %edx,0x4(%esp)
 8355194:	89 04 24             	mov    %eax,(%esp)
 8355197:	e8 ac 90 d3 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 835519c:	83 ec 04             	sub    $0x4,%esp
 835519f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83551a2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 83551a5:	e9 a0 00 00 00       	jmp    835524a <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0x12c>
 83551aa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83551ad:	89 04 24             	mov    %eax,(%esp)
 83551b0:	e8 17 96 d3 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 83551b5:	8b 00                	mov    (%eax),%eax
 83551b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83551ba:	81 7d f4 2f 75 00 00 	cmpl   $0x752f,-0xc(%ebp)
 83551c1:	7e 4d                	jle    8355210 <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0xf2>
 83551c3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83551ca:	00 
 83551cb:	c7 44 24 08 1a 15 00 	movl   $0x151a,0x8(%esp)
 83551d2:	00 
 83551d3:	c7 44 24 04 00 45 c3 	movl   $0x8c34500,0x4(%esp)
 83551da:	08 
 83551db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83551de:	89 04 24             	mov    %eax,(%esp)
 83551e1:	e8 32 a5 1f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83551e6:	c7 44 24 0c 1a 15 00 	movl   $0x151a,0xc(%esp)
 83551ed:	00 
 83551ee:	c7 44 24 08 00 45 c3 	movl   $0x8c34500,0x8(%esp)
 83551f5:	08 
 83551f6:	c7 44 24 04 91 03 c3 	movl   $0x8c30391,0x4(%esp)
 83551fd:	08 
 83551fe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8355201:	89 04 24             	mov    %eax,(%esp)
 8355204:	e8 7f a5 1f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8355209:	b8 00 00 00 00       	mov    $0x0,%eax
 835520e:	eb 71                	jmp    8355281 <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0x163>
 8355210:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8355213:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355217:	8b 45 10             	mov    0x10(%ebp),%eax
 835521a:	89 04 24             	mov    %eax,(%esp)
 835521d:	e8 be 68 d3 ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 8355222:	84 c0                	test   %al,%al
 8355224:	74 07                	je     835522d <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0x10f>
 8355226:	b8 00 00 00 00       	mov    $0x0,%eax
 835522b:	eb 54                	jmp    8355281 <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0x163>
 835522d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8355230:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8355237:	00 
 8355238:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 835523b:	89 54 24 04          	mov    %edx,0x4(%esp)
 835523f:	89 04 24             	mov    %eax,(%esp)
 8355242:	e8 bf c6 fe ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 8355247:	83 ec 04             	sub    $0x4,%esp
 835524a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 835524d:	8d 50 38             	lea    0x38(%eax),%edx
 8355250:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8355253:	89 54 24 04          	mov    %edx,0x4(%esp)
 8355257:	89 04 24             	mov    %eax,(%esp)
 835525a:	e8 0d 90 d3 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 835525f:	83 ec 04             	sub    $0x4,%esp
 8355262:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8355265:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355269:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 835526c:	89 04 24             	mov    %eax,(%esp)
 835526f:	e8 ee 51 d9 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8355274:	84 c0                	test   %al,%al
 8355276:	0f 85 2e ff ff ff    	jne    83551aa <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE+0x8c>
 835527c:	b8 01 00 00 00       	mov    $0x1,%eax
 8355281:	c9                   	leave
 8355282:	c3                   	ret
 8355283:	90                   	nop

```

```c
// QuestList::check_anti_quest @ 0x835511e

/* QuestList::check_anti_quest(int, WongWork::CQuestClear const&) */

undefined4 __thiscall QuestList::check_anti_quest(QuestList *this,int param_1,CQuestClear *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator local_2c [4];
  cMyTrace local_28 [16];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_18 [4];
  int local_14;
  uint local_10;
  
  local_14 = find_quest((int)this);
  if (local_14 == 0) {
    LogManager::logFormat
              (1,"data_manager.cpp",
               "bool QuestList::check_anti_quest(int, const WongWork::CQuestClear&)",0x150a,
               "find_quest(%d)",param_1);
    uVar3 = 0;
  }
  else {
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
              (local_30);
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_30,local_2c);
      if (!bVar2) break;
      puVar4 = (uint *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                       operator*(local_30);
      local_10 = *puVar4;
      if (29999 < (int)local_10) {
        cMyTrace::cMyTrace(local_28,
                           "bool QuestList::check_anti_quest(int, const WongWork::CQuestClear&)",
                           0x151a,5);
        cMyTrace::operator()
                  (local_28,"[%s][%d]",
                   "bool QuestList::check_anti_quest(int, const WongWork::CQuestClear&)",0x151a);
        return 0;
      }
      cVar1 = WongWork::CQuestClear::isClearedQuest(param_2,local_10);
      if (cVar1 != '\0') {
        return 0;
      }
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_30);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## check_clear

```asm
// === 08355284 QuestList::check_clear  [0x08355284-0x8355303] ===
 8355284:	55                   	push   %ebp
 8355285:	89 e5                	mov    %esp,%ebp
 8355287:	83 ec 28             	sub    $0x28,%esp
 835528a:	81 7d 0c 2f 75 00 00 	cmpl   $0x752f,0xc(%ebp)
 8355291:	7e 4d                	jle    83552e0 <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE+0x5c>
 8355293:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 835529a:	00 
 835529b:	c7 44 24 08 2f 15 00 	movl   $0x152f,0x8(%esp)
 83552a2:	00 
 83552a3:	c7 44 24 04 c0 44 c3 	movl   $0x8c344c0,0x4(%esp)
 83552aa:	08 
 83552ab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83552ae:	89 04 24             	mov    %eax,(%esp)
 83552b1:	e8 62 a4 1f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83552b6:	c7 44 24 0c 2f 15 00 	movl   $0x152f,0xc(%esp)
 83552bd:	00 
 83552be:	c7 44 24 08 c0 44 c3 	movl   $0x8c344c0,0x8(%esp)
 83552c5:	08 
 83552c6:	c7 44 24 04 91 03 c3 	movl   $0x8c30391,0x4(%esp)
 83552cd:	08 
 83552ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83552d1:	89 04 24             	mov    %eax,(%esp)
 83552d4:	e8 af a4 1f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83552d9:	b8 00 00 00 00       	mov    $0x0,%eax
 83552de:	eb 22                	jmp    8355302 <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE+0x7e>
 83552e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83552e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83552e7:	8b 45 10             	mov    0x10(%ebp),%eax
 83552ea:	89 04 24             	mov    %eax,(%esp)
 83552ed:	e8 ee 67 d3 ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 83552f2:	84 c0                	test   %al,%al
 83552f4:	74 07                	je     83552fd <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE+0x79>
 83552f6:	b8 00 00 00 00       	mov    $0x0,%eax
 83552fb:	eb 05                	jmp    8355302 <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE+0x7e>
 83552fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8355302:	c9                   	leave
 8355303:	c3                   	ret

```

```c
// QuestList::check_clear @ 0x8355284

/* QuestList::check_clear(int, WongWork::CQuestClear const&) */

undefined4 __thiscall QuestList::check_clear(QuestList *this,int param_1,CQuestClear *param_2)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [24];
  
  if (param_1 < 30000) {
    cVar1 = WongWork::CQuestClear::isClearedQuest(param_2,param_1);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_1c,"bool QuestList::check_clear(int, const WongWork::CQuestClear&)",
                       0x152f,5);
    cMyTrace::operator()
              (local_1c,"[%s][%d]","bool QuestList::check_clear(int, const WongWork::CQuestClear&)",
               0x152f);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## destroy

```asm
// === 08353c86 QuestList::destroy  [0x08353c86-0x8353d97] ===
 8353c86:	55                   	push   %ebp
 8353c87:	89 e5                	mov    %esp,%ebp
 8353c89:	53                   	push   %ebx
 8353c8a:	83 ec 34             	sub    $0x34,%esp
 8353c8d:	8b 55 08             	mov    0x8(%ebp),%edx
 8353c90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8353c93:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353c97:	89 04 24             	mov    %eax,(%esp)
 8353c9a:	e8 0d d5 03 00       	call   83911ac <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 8353c9f:	83 ec 04             	sub    $0x4,%esp
 8353ca2:	8b 55 08             	mov    0x8(%ebp),%edx
 8353ca5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8353ca8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353cac:	89 04 24             	mov    %eax,(%esp)
 8353caf:	e8 1e d5 03 00       	call   83911d2 <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8353cb4:	83 ec 04             	sub    $0x4,%esp
 8353cb7:	eb 33                	jmp    8353cec <_ZN9QuestList7destroyEv+0x66>
 8353cb9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8353cbc:	89 04 24             	mov    %eax,(%esp)
 8353cbf:	e8 e0 d5 03 00       	call   83912a4 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5QuestEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEdeEv>
 8353cc4:	8b 40 04             	mov    0x4(%eax),%eax
 8353cc7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8353cca:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8353ccd:	85 db                	test   %ebx,%ebx
 8353ccf:	74 10                	je     8353ce1 <_ZN9QuestList7destroyEv+0x5b>
 8353cd1:	89 1c 24             	mov    %ebx,(%esp)
 8353cd4:	e8 07 6a 02 00       	call   837a6e0 <_ZN5QuestD1Ev>
 8353cd9:	89 1c 24             	mov    %ebx,(%esp)
 8353cdc:	e8 0f 08 3d 00       	call   87244f0 <_ZdlPv>
 8353ce1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8353ce4:	89 04 24             	mov    %eax,(%esp)
 8353ce7:	e8 20 d5 03 00       	call   839120c <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5QuestEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 8353cec:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8353cef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8353cf3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8353cf6:	89 04 24             	mov    %eax,(%esp)
 8353cf9:	e8 fa d4 03 00       	call   83911f8 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5QuestEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8353cfe:	84 c0                	test   %al,%al
 8353d00:	75 b7                	jne    8353cb9 <_ZN9QuestList7destroyEv+0x33>
 8353d02:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d05:	89 04 24             	mov    %eax,(%esp)
 8353d08:	e8 a5 d5 03 00       	call   83912b2 <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 8353d0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d10:	83 c0 14             	add    $0x14,%eax
 8353d13:	89 04 24             	mov    %eax,(%esp)
 8353d16:	e8 33 41 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d1e:	83 c0 2c             	add    $0x2c,%eax
 8353d21:	89 04 24             	mov    %eax,(%esp)
 8353d24:	e8 25 41 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d29:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d2c:	83 c0 44             	add    $0x44,%eax
 8353d2f:	89 04 24             	mov    %eax,(%esp)
 8353d32:	e8 17 41 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d37:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d3a:	05 bc 00 00 00       	add    $0xbc,%eax
 8353d3f:	89 04 24             	mov    %eax,(%esp)
 8353d42:	e8 07 41 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d47:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d4a:	83 c0 5c             	add    $0x5c,%eax
 8353d4d:	89 04 24             	mov    %eax,(%esp)
 8353d50:	e8 f9 40 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d55:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d58:	83 c0 74             	add    $0x74,%eax
 8353d5b:	89 04 24             	mov    %eax,(%esp)
 8353d5e:	e8 eb 40 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d63:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d66:	05 8c 00 00 00       	add    $0x8c,%eax
 8353d6b:	89 04 24             	mov    %eax,(%esp)
 8353d6e:	e8 db 40 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d73:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d76:	05 e0 00 00 00       	add    $0xe0,%eax
 8353d7b:	89 04 24             	mov    %eax,(%esp)
 8353d7e:	e8 35 1a ee ff       	call   82357b8 <_ZNSt4listIiSaIiEE5clearEv>
 8353d83:	8b 45 08             	mov    0x8(%ebp),%eax
 8353d86:	05 a4 00 00 00       	add    $0xa4,%eax
 8353d8b:	89 04 24             	mov    %eax,(%esp)
 8353d8e:	e8 bb 40 03 00       	call   8387e4e <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8353d93:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8353d96:	c9                   	leave
 8353d97:	c3                   	ret

```

```c
// QuestList::destroy @ 0x8353c86

/* QuestList::destroy() */

void __thiscall QuestList::destroy(QuestList *this)

{
  Quest *this_00;
  char cVar1;
  int iVar2;
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_20 [8];
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_18 [8];
  Quest *local_10;
  
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  begin(local_18);
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  end(local_20);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                          *)local_18,(_Hashtable_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
            ::operator*((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                         *)local_18);
    this_00 = *(Quest **)(iVar2 + 4);
    local_10 = this_00;
    if (this_00 != (Quest *)0x0) {
      Quest::~Quest(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                  *)local_18);
  }
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  clear((hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> *)this)
  ;
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x14));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x2c));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x44));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xbc));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x5c));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x74));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x8c));
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)(this + 0xe0));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xa4));
  return;
}

```

---

## find_quest

```asm
// === 08355a5c QuestList::find_quest  [0x08355a5c-0x8355ad7] ===
 8355a5c:	55                   	push   %ebp
 8355a5d:	89 e5                	mov    %esp,%ebp
 8355a5f:	83 ec 38             	sub    $0x38,%esp
 8355a62:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8355a65:	89 04 24             	mov    %eax,(%esp)
 8355a68:	e8 f3 c2 03 00       	call   8391d60 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5QuestEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 8355a6d:	8b 55 08             	mov    0x8(%ebp),%edx
 8355a70:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8355a73:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8355a76:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8355a7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8355a7e:	89 04 24             	mov    %eax,(%esp)
 8355a81:	e8 e0 c2 03 00       	call   8391d66 <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 8355a86:	83 ec 04             	sub    $0x4,%esp
 8355a89:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8355a8c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8355a8f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8355a92:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8355a95:	8b 55 08             	mov    0x8(%ebp),%edx
 8355a98:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8355a9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8355a9f:	89 04 24             	mov    %eax,(%esp)
 8355aa2:	e8 2b b7 03 00       	call   83911d2 <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8355aa7:	83 ec 04             	sub    $0x4,%esp
 8355aaa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8355aad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355ab1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8355ab4:	89 04 24             	mov    %eax,(%esp)
 8355ab7:	e8 3c b7 03 00       	call   83911f8 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5QuestEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8355abc:	84 c0                	test   %al,%al
 8355abe:	74 10                	je     8355ad0 <_ZN9QuestList10find_questEi+0x74>
 8355ac0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8355ac3:	89 04 24             	mov    %eax,(%esp)
 8355ac6:	e8 c7 c2 03 00       	call   8391d92 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP5QuestEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 8355acb:	8b 40 04             	mov    0x4(%eax),%eax
 8355ace:	eb 05                	jmp    8355ad5 <_ZN9QuestList10find_questEi+0x79>
 8355ad0:	b8 00 00 00 00       	mov    $0x0,%eax
 8355ad5:	c9                   	leave
 8355ad6:	c3                   	ret
 8355ad7:	90                   	nop

```

```c
// QuestList::find_quest @ 0x8355a5c

/* QuestList::find_quest(int) */

undefined4 QuestList::find_quest(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
  ::_Hashtable_iterator();
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  find(&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
          ::operator!=((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                          *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getQuestNPCList

```asm
// === 08355ad8 QuestList::getQuestNPCList  [0x08355ad8-0x8355b2f] ===
 8355ad8:	55                   	push   %ebp
 8355ad9:	89 e5                	mov    %esp,%ebp
 8355adb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355ade:	83 f8 08             	cmp    $0x8,%eax
 8355ae1:	77 45                	ja     8355b28 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x50>
 8355ae3:	8b 04 85 a0 04 c3 08 	mov    0x8c304a0(,%eax,4),%eax
 8355aea:	ff e0                	jmp    *%eax
 8355aec:	8b 45 08             	mov    0x8(%ebp),%eax
 8355aef:	83 c0 14             	add    $0x14,%eax
 8355af2:	eb 39                	jmp    8355b2d <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x55>
 8355af4:	8b 45 08             	mov    0x8(%ebp),%eax
 8355af7:	83 c0 5c             	add    $0x5c,%eax
 8355afa:	eb 31                	jmp    8355b2d <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x55>
 8355afc:	8b 45 08             	mov    0x8(%ebp),%eax
 8355aff:	83 c0 74             	add    $0x74,%eax
 8355b02:	eb 29                	jmp    8355b2d <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x55>
 8355b04:	8b 45 08             	mov    0x8(%ebp),%eax
 8355b07:	83 c0 44             	add    $0x44,%eax
 8355b0a:	eb 21                	jmp    8355b2d <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x55>
 8355b0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8355b0f:	83 c0 2c             	add    $0x2c,%eax
 8355b12:	eb 19                	jmp    8355b2d <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x55>
 8355b14:	8b 45 08             	mov    0x8(%ebp),%eax
 8355b17:	05 8c 00 00 00       	add    $0x8c,%eax
 8355b1c:	eb 0f                	jmp    8355b2d <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x55>
 8355b1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8355b21:	05 a4 00 00 00       	add    $0xa4,%eax
 8355b26:	eb 05                	jmp    8355b2d <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE+0x55>
 8355b28:	b8 00 00 00 00       	mov    $0x0,%eax
 8355b2d:	5d                   	pop    %ebp
 8355b2e:	c3                   	ret
 8355b2f:	90                   	nop

```

```c
// QuestList::getQuestNPCList @ 0x8355ad8

/* QuestList::getQuestNPCList(ENUM_QUEST_GRADE) */

QuestList * __thiscall QuestList::getQuestNPCList(QuestList *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    this = this + 0x14;
    break;
  case 1:
    this = this + 0x5c;
    break;
  case 2:
    this = this + 0x74;
    break;
  default:
    this = (QuestList *)0x0;
    break;
  case 4:
    this = this + 0x44;
    break;
  case 5:
    this = this + 0x2c;
    break;
  case 6:
    this = this + 0x8c;
    break;
  case 8:
    this = this + 0xa4;
  }
  return this;
}

```

---

## insert_NPC

```asm
// === 08354f02 QuestList::insert_NPC  [0x08354f02-0x8354fc7] ===
 8354f02:	55                   	push   %ebp
 8354f03:	89 e5                	mov    %esp,%ebp
 8354f05:	83 ec 38             	sub    $0x38,%esp
 8354f08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8354f0b:	85 c0                	test   %eax,%eax
 8354f0d:	0f 84 af 00 00 00    	je     8354fc2 <_ZN9QuestList10insert_NPCEi+0xc0>
 8354f13:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8354f16:	89 04 24             	mov    %eax,(%esp)
 8354f19:	e8 02 a4 03 00       	call   838f320 <_ZNSt14_List_iteratorIiEC1Ev>
 8354f1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8354f21:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 8354f27:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8354f2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354f2e:	89 04 24             	mov    %eax,(%esp)
 8354f31:	e8 92 24 ee ff       	call   82373c8 <_ZNSt4listIiSaIiEE5beginEv>
 8354f36:	83 ec 04             	sub    $0x4,%esp
 8354f39:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8354f3c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8354f3f:	eb 36                	jmp    8354f77 <_ZN9QuestList10insert_NPCEi+0x75>
 8354f41:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8354f44:	89 04 24             	mov    %eax,(%esp)
 8354f47:	e8 de 24 ee ff       	call   823742a <_ZNKSt14_List_iteratorIiEdeEv>
 8354f4c:	8b 10                	mov    (%eax),%edx
 8354f4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8354f51:	39 c2                	cmp    %eax,%edx
 8354f53:	0f 94 c0             	sete   %al
 8354f56:	84 c0                	test   %al,%al
 8354f58:	75 6b                	jne    8354fc5 <_ZN9QuestList10insert_NPCEi+0xc3>
 8354f5a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8354f5d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8354f64:	00 
 8354f65:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8354f68:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354f6c:	89 04 24             	mov    %eax,(%esp)
 8354f6f:	e8 5e cc 03 00       	call   8391bd2 <_ZNSt14_List_iteratorIiEppEi>
 8354f74:	83 ec 04             	sub    $0x4,%esp
 8354f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8354f7a:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 8354f80:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8354f83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354f87:	89 04 24             	mov    %eax,(%esp)
 8354f8a:	e8 af 74 f1 ff       	call   826c43e <_ZNSt4listIiSaIiEE3endEv>
 8354f8f:	83 ec 04             	sub    $0x4,%esp
 8354f92:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8354f95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354f99:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8354f9c:	89 04 24             	mov    %eax,(%esp)
 8354f9f:	e8 be 74 f1 ff       	call   826c462 <_ZNKSt14_List_iteratorIiEneERKS0_>
 8354fa4:	84 c0                	test   %al,%al
 8354fa6:	75 99                	jne    8354f41 <_ZN9QuestList10insert_NPCEi+0x3f>
 8354fa8:	8b 45 08             	mov    0x8(%ebp),%eax
 8354fab:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 8354fb1:	8d 45 0c             	lea    0xc(%ebp),%eax
 8354fb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354fb8:	89 14 24             	mov    %edx,(%esp)
 8354fbb:	e8 ee 7b f1 ff       	call   826cbae <_ZNSt4listIiSaIiEE9push_backERKi>
 8354fc0:	eb 04                	jmp    8354fc6 <_ZN9QuestList10insert_NPCEi+0xc4>
 8354fc2:	90                   	nop
 8354fc3:	eb 01                	jmp    8354fc6 <_ZN9QuestList10insert_NPCEi+0xc4>
 8354fc5:	90                   	nop
 8354fc6:	c9                   	leave
 8354fc7:	c3                   	ret

```

```c
// QuestList::insert_NPC @ 0x8354f02

/* QuestList::insert_NPC(int) */

void __thiscall QuestList::insert_NPC(QuestList *this,int param_1)

{
  char cVar1;
  int *piVar2;
  _List_iterator<int> local_18 [4];
  _List_iterator local_14 [4];
  _List_iterator<int> local_10 [12];
  
  if (param_1 != 0) {
    std::_List_iterator<int>::_List_iterator(local_18);
    std::list<int,std::allocator<int>>::begin();
    while( true ) {
      std::list<int,std::allocator<int>>::end();
      cVar1 = std::_List_iterator<int>::operator!=(local_18,local_14);
      if (cVar1 == '\0') break;
      piVar2 = (int *)std::_List_iterator<int>::operator*(local_18);
      if (*piVar2 == param_1) {
        return;
      }
      std::_List_iterator<int>::operator++(local_10,(int)local_18);
    }
    std::list<int,std::allocator<int>>::push_back
              ((list<int,std::allocator<int>> *)(this + 0xe0),&param_1);
  }
  return;
}

```

---

## load_list

```asm
// === 08353d98 QuestList::load_list  [0x08353d98-0x8354f01] ===
 8353d98:	55                   	push   %ebp
 8353d99:	89 e5                	mov    %esp,%ebp
 8353d9b:	57                   	push   %edi
 8353d9c:	56                   	push   %esi
 8353d9d:	53                   	push   %ebx
 8353d9e:	81 ec 6c 07 00 00    	sub    $0x76c,%esp
 8353da4:	8d 85 f4 fb ff ff    	lea    -0x40c(%ebp),%eax
 8353daa:	89 04 24             	mov    %eax,(%esp)
 8353dad:	e8 26 ff f5 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 8353db2:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8353db8:	89 04 24             	mov    %eax,(%esp)
 8353dbb:	e8 22 a7 01 00       	call   836e4e2 <_ZN11QuestScriptC1Ev>
 8353dc0:	c7 85 f0 fb ff ff 00 	movl   $0x0,-0x410(%ebp)
 8353dc7:	00 00 00 
 8353dca:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 8353dd0:	89 04 24             	mov    %eax,(%esp)
 8353dd3:	e8 ee d4 03 00       	call   83912c6 <_ZN9__gnu_cxx17__normal_iteratorIP15MonsterKillItemSt6vectorIS1_SaIS1_EEEC1Ev>
 8353dd8:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8353ddf:	e8 d0 8d 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 8353de4:	89 04 24             	mov    %eax,(%esp)
 8353de7:	e8 ca e7 2c 00       	call   86225b6 <_ZN11sync_script11CSyncScript23truncate_quest_categoryEv>
 8353dec:	8d 85 c4 f8 ff ff    	lea    -0x73c(%ebp),%eax
 8353df2:	c7 44 24 04 80 04 50 	movl   $0x9500480,0x4(%esp)
 8353df9:	09 
 8353dfa:	89 04 24             	mov    %eax,(%esp)
 8353dfd:	e8 f0 22 d9 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8353e02:	83 ec 04             	sub    $0x4,%esp
 8353e05:	8b 85 c4 f8 ff ff    	mov    -0x73c(%ebp),%eax
 8353e0b:	89 85 f4 fb ff ff    	mov    %eax,-0x40c(%ebp)
 8353e11:	e9 15 0e 00 00       	jmp    8354c2b <_ZN9QuestList9load_listEv+0xe93>
 8353e16:	8d 85 f4 fb ff ff    	lea    -0x40c(%ebp),%eax
 8353e1c:	89 04 24             	mov    %eax,(%esp)
 8353e1f:	e8 94 23 d9 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8353e24:	83 c0 04             	add    $0x4,%eax
 8353e27:	89 04 24             	mov    %eax,(%esp)
 8353e2a:	e8 c1 26 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 8353e2f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8353e32:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8353e36:	0f 84 2a 0e 00 00    	je     8354c66 <_ZN9QuestList9load_listEv+0xece>
 8353e3c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8353e3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8353e43:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8353e49:	89 04 24             	mov    %eax,(%esp)
 8353e4c:	e8 c2 d9 70 00       	call   8a61813 <_Z17importQuestScriptP11QuestScriptPKc>
 8353e51:	83 f0 01             	xor    $0x1,%eax
 8353e54:	84 c0                	test   %al,%al
 8353e56:	74 3d                	je     8353e95 <_ZN9QuestList9load_listEv+0xfd>
 8353e58:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8353e5b:	89 44 24 14          	mov    %eax,0x14(%esp)
 8353e5f:	c7 44 24 10 c8 01 c3 	movl   $0x8c301c8,0x10(%esp)
 8353e66:	08 
 8353e67:	c7 44 24 0c 57 13 00 	movl   $0x1357,0xc(%esp)
 8353e6e:	00 
 8353e6f:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8353e76:	08 
 8353e77:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8353e7e:	08 
 8353e7f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8353e86:	e8 7f fd 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8353e8b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8353e90:	e9 51 10 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8353e95:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8353e9b:	05 dc 02 00 00       	add    $0x2dc,%eax
 8353ea0:	89 04 24             	mov    %eax,(%esp)
 8353ea3:	e8 5e 34 dd ff       	call   8127306 <_ZNKSt6vectorI14_DailyScheduleSaIS0_EE4sizeEv>
 8353ea8:	85 c0                	test   %eax,%eax
 8353eaa:	0f 95 c0             	setne  %al
 8353ead:	84 c0                	test   %al,%al
 8353eaf:	74 1d                	je     8353ece <_ZN9QuestList9load_listEv+0x136>
 8353eb1:	a1 84 f7 41 09       	mov    0x941f784,%eax
 8353eb6:	8d 95 cc f8 ff ff    	lea    -0x734(%ebp),%edx
 8353ebc:	81 c2 dc 02 00 00    	add    $0x2dc,%edx
 8353ec2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353ec6:	89 04 24             	mov    %eax,(%esp)
 8353ec9:	e8 6e 1d dd ff       	call   8125c3c <_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE>
 8353ece:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8353ed4:	05 44 01 00 00       	add    $0x144,%eax
 8353ed9:	89 04 24             	mov    %eax,(%esp)
 8353edc:	e8 db cf 03 00       	call   8390ebc <_ZNKSt6vectorI15MonsterKillItemSaIS0_EE5emptyEv>
 8353ee1:	83 f0 01             	xor    $0x1,%eax
 8353ee4:	84 c0                	test   %al,%al
 8353ee6:	0f 84 9e 01 00 00    	je     835408a <_ZN9QuestList9load_listEv+0x2f2>
 8353eec:	8d 85 c4 f8 ff ff    	lea    -0x73c(%ebp),%eax
 8353ef2:	8d 95 cc f8 ff ff    	lea    -0x734(%ebp),%edx
 8353ef8:	81 c2 44 01 00 00    	add    $0x144,%edx
 8353efe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8353f02:	89 04 24             	mov    %eax,(%esp)
 8353f05:	e8 ca d3 03 00       	call   83912d4 <_ZNSt6vectorI15MonsterKillItemSaIS0_EE5beginEv>
 8353f0a:	83 ec 04             	sub    $0x4,%esp
 8353f0d:	8b 85 c4 f8 ff ff    	mov    -0x73c(%ebp),%eax
 8353f13:	89 85 ec fb ff ff    	mov    %eax,-0x414(%ebp)
 8353f19:	e9 2b 01 00 00       	jmp    8354049 <_ZN9QuestList9load_listEv+0x2b1>
 8353f1e:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 8353f24:	89 04 24             	mov    %eax,(%esp)
 8353f27:	e8 52 d4 03 00       	call   839137e <_ZNK9__gnu_cxx17__normal_iteratorIP15MonsterKillItemSt6vectorIS1_SaIS1_EEEdeEv>
 8353f2c:	8b 58 10             	mov    0x10(%eax),%ebx
 8353f2f:	e8 67 82 d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8353f34:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8353f38:	89 04 24             	mov    %eax,(%esp)
 8353f3b:	e8 f2 ba 00 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8353f40:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8353f43:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8353f47:	75 52                	jne    8353f9b <_ZN9QuestList9load_listEv+0x203>
 8353f49:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 8353f4f:	89 04 24             	mov    %eax,(%esp)
 8353f52:	e8 27 d4 03 00       	call   839137e <_ZNK9__gnu_cxx17__normal_iteratorIP15MonsterKillItemSt6vectorIS1_SaIS1_EEEdeEv>
 8353f57:	8b 40 10             	mov    0x10(%eax),%eax
 8353f5a:	89 44 24 18          	mov    %eax,0x18(%esp)
 8353f5e:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8353f61:	89 44 24 14          	mov    %eax,0x14(%esp)
 8353f65:	c7 44 24 10 e0 01 c3 	movl   $0x8c301e0,0x10(%esp)
 8353f6c:	08 
 8353f6d:	c7 44 24 0c 6f 13 00 	movl   $0x136f,0xc(%esp)
 8353f74:	00 
 8353f75:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8353f7c:	08 
 8353f7d:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8353f84:	08 
 8353f85:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8353f8c:	e8 79 fc 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8353f91:	bb 00 00 00 00       	mov    $0x0,%ebx
 8353f96:	e9 4b 0f 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8353f9b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8353f9e:	89 04 24             	mov    %eax,(%esp)
 8353fa1:	e8 54 d3 d9 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8353fa6:	83 f0 01             	xor    $0x1,%eax
 8353fa9:	84 c0                	test   %al,%al
 8353fab:	75 17                	jne    8353fc4 <_ZN9QuestList9load_listEv+0x22c>
 8353fad:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8353fb0:	8b 00                	mov    (%eax),%eax
 8353fb2:	83 c0 0c             	add    $0xc,%eax
 8353fb5:	8b 10                	mov    (%eax),%edx
 8353fb7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8353fba:	89 04 24             	mov    %eax,(%esp)
 8353fbd:	ff d2                	call   *%edx
 8353fbf:	83 f8 08             	cmp    $0x8,%eax
 8353fc2:	74 07                	je     8353fcb <_ZN9QuestList9load_listEv+0x233>
 8353fc4:	b8 01 00 00 00       	mov    $0x1,%eax
 8353fc9:	eb 05                	jmp    8353fd0 <_ZN9QuestList9load_listEv+0x238>
 8353fcb:	b8 00 00 00 00       	mov    $0x0,%eax
 8353fd0:	84 c0                	test   %al,%al
 8353fd2:	74 52                	je     8354026 <_ZN9QuestList9load_listEv+0x28e>
 8353fd4:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 8353fda:	89 04 24             	mov    %eax,(%esp)
 8353fdd:	e8 9c d3 03 00       	call   839137e <_ZNK9__gnu_cxx17__normal_iteratorIP15MonsterKillItemSt6vectorIS1_SaIS1_EEEdeEv>
 8353fe2:	8b 40 10             	mov    0x10(%eax),%eax
 8353fe5:	89 44 24 18          	mov    %eax,0x18(%esp)
 8353fe9:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8353fec:	89 44 24 14          	mov    %eax,0x14(%esp)
 8353ff0:	c7 44 24 10 1c 02 c3 	movl   $0x8c3021c,0x10(%esp)
 8353ff7:	08 
 8353ff8:	c7 44 24 0c 75 13 00 	movl   $0x1375,0xc(%esp)
 8353fff:	00 
 8354000:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354007:	08 
 8354008:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 835400f:	08 
 8354010:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354017:	e8 ee fb 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 835401c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354021:	e9 c0 0e 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354026:	8d 85 00 fc ff ff    	lea    -0x400(%ebp),%eax
 835402c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8354033:	00 
 8354034:	8d 95 ec fb ff ff    	lea    -0x414(%ebp),%edx
 835403a:	89 54 24 04          	mov    %edx,0x4(%esp)
 835403e:	89 04 24             	mov    %eax,(%esp)
 8354041:	e8 04 d3 03 00       	call   839134a <_ZN9__gnu_cxx17__normal_iteratorIP15MonsterKillItemSt6vectorIS1_SaIS1_EEEppEi>
 8354046:	83 ec 04             	sub    $0x4,%esp
 8354049:	8d 85 fc fb ff ff    	lea    -0x404(%ebp),%eax
 835404f:	8d 95 cc f8 ff ff    	lea    -0x734(%ebp),%edx
 8354055:	81 c2 44 01 00 00    	add    $0x144,%edx
 835405b:	89 54 24 04          	mov    %edx,0x4(%esp)
 835405f:	89 04 24             	mov    %eax,(%esp)
 8354062:	e8 91 d2 03 00       	call   83912f8 <_ZNSt6vectorI15MonsterKillItemSaIS0_EE3endEv>
 8354067:	83 ec 04             	sub    $0x4,%esp
 835406a:	8d 85 fc fb ff ff    	lea    -0x404(%ebp),%eax
 8354070:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354074:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 835407a:	89 04 24             	mov    %eax,(%esp)
 835407d:	e8 9c d2 03 00       	call   839131e <_ZN9__gnu_cxxneIP15MonsterKillItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8354082:	84 c0                	test   %al,%al
 8354084:	0f 85 94 fe ff ff    	jne    8353f1e <_ZN9QuestList9load_listEv+0x186>
 835408a:	8b 85 44 fa ff ff    	mov    -0x5bc(%ebp),%eax
 8354090:	83 f8 02             	cmp    $0x2,%eax
 8354093:	74 0f                	je     83540a4 <_ZN9QuestList9load_listEv+0x30c>
 8354095:	8b 85 44 fa ff ff    	mov    -0x5bc(%ebp),%eax
 835409b:	83 f8 06             	cmp    $0x6,%eax
 835409e:	0f 85 5c 03 00 00    	jne    8354400 <_ZN9QuestList9load_listEv+0x668>
 83540a4:	c7 45 c4 04 00 00 00 	movl   $0x4,-0x3c(%ebp)
 83540ab:	8b 85 44 fa ff ff    	mov    -0x5bc(%ebp),%eax
 83540b1:	83 f8 06             	cmp    $0x6,%eax
 83540b4:	75 07                	jne    83540bd <_ZN9QuestList9load_listEv+0x325>
 83540b6:	c7 45 c4 05 00 00 00 	movl   $0x5,-0x3c(%ebp)
 83540bd:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 83540c3:	05 80 01 00 00       	add    $0x180,%eax
 83540c8:	89 04 24             	mov    %eax,(%esp)
 83540cb:	e8 f0 a0 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83540d0:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 83540d3:	ba 00 00 00 00       	mov    $0x0,%edx
 83540d8:	f7 f1                	div    %ecx
 83540da:	89 d0                	mov    %edx,%eax
 83540dc:	85 c0                	test   %eax,%eax
 83540de:	75 2c                	jne    835410c <_ZN9QuestList9load_listEv+0x374>
 83540e0:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 83540e6:	05 80 01 00 00       	add    $0x180,%eax
 83540eb:	89 04 24             	mov    %eax,(%esp)
 83540ee:	e8 cd a0 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83540f3:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 83540f6:	89 95 b4 f8 ff ff    	mov    %edx,-0x74c(%ebp)
 83540fc:	ba 00 00 00 00       	mov    $0x0,%edx
 8354101:	f7 b5 b4 f8 ff ff    	divl   -0x74c(%ebp)
 8354107:	83 f8 03             	cmp    $0x3,%eax
 835410a:	76 07                	jbe    8354113 <_ZN9QuestList9load_listEv+0x37b>
 835410c:	b8 01 00 00 00       	mov    $0x1,%eax
 8354111:	eb 05                	jmp    8354118 <_ZN9QuestList9load_listEv+0x380>
 8354113:	b8 00 00 00 00       	mov    $0x0,%eax
 8354118:	84 c0                	test   %al,%al
 835411a:	74 5e                	je     835417a <_ZN9QuestList9load_listEv+0x3e2>
 835411c:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354122:	05 80 01 00 00       	add    $0x180,%eax
 8354127:	89 04 24             	mov    %eax,(%esp)
 835412a:	e8 91 a0 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 835412f:	8b 95 44 fa ff ff    	mov    -0x5bc(%ebp),%edx
 8354135:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8354139:	89 54 24 18          	mov    %edx,0x18(%esp)
 835413d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8354140:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354144:	c7 44 24 10 60 02 c3 	movl   $0x8c30260,0x10(%esp)
 835414b:	08 
 835414c:	c7 44 24 0c 83 13 00 	movl   $0x1383,0xc(%esp)
 8354153:	00 
 8354154:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 835415b:	08 
 835415c:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354163:	08 
 8354164:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 835416b:	e8 9a fa 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354170:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354175:	e9 6c 0d 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 835417a:	8d 85 04 fc ff ff    	lea    -0x3fc(%ebp),%eax
 8354180:	8d 95 cc f8 ff ff    	lea    -0x734(%ebp),%edx
 8354186:	81 c2 80 01 00 00    	add    $0x180,%edx
 835418c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354190:	89 04 24             	mov    %eax,(%esp)
 8354193:	e8 b0 a0 d3 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8354198:	83 ec 04             	sub    $0x4,%esp
 835419b:	8d 85 04 fc ff ff    	lea    -0x3fc(%ebp),%eax
 83541a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83541a5:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 83541ab:	89 04 24             	mov    %eax,(%esp)
 83541ae:	e8 39 58 da ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 83541b3:	8d 85 08 fc ff ff    	lea    -0x3f8(%ebp),%eax
 83541b9:	8d 95 cc f8 ff ff    	lea    -0x734(%ebp),%edx
 83541bf:	81 c2 80 01 00 00    	add    $0x180,%edx
 83541c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 83541c9:	89 04 24             	mov    %eax,(%esp)
 83541cc:	e8 9b a0 d3 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 83541d1:	83 ec 04             	sub    $0x4,%esp
 83541d4:	8d 85 08 fc ff ff    	lea    -0x3f8(%ebp),%eax
 83541da:	89 44 24 04          	mov    %eax,0x4(%esp)
 83541de:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 83541e4:	89 04 24             	mov    %eax,(%esp)
 83541e7:	e8 00 58 da ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 83541ec:	c7 85 de fb ff ff 00 	movl   $0x0,-0x422(%ebp)
 83541f3:	00 00 00 
 83541f6:	66 c7 85 e2 fb ff ff 	movw   $0x0,-0x41e(%ebp)
 83541fd:	00 00 
 83541ff:	e9 d7 01 00 00       	jmp    83543db <_ZN9QuestList9load_listEv+0x643>
 8354204:	8d 85 0c fc ff ff    	lea    -0x3f4(%ebp),%eax
 835420a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8354211:	00 
 8354212:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 8354218:	89 54 24 04          	mov    %edx,0x4(%esp)
 835421c:	89 04 24             	mov    %eax,(%esp)
 835421f:	e8 8e f6 e3 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8354224:	83 ec 04             	sub    $0x4,%esp
 8354227:	8d 85 0c fc ff ff    	lea    -0x3f4(%ebp),%eax
 835422d:	89 04 24             	mov    %eax,(%esp)
 8354230:	e8 e7 57 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8354235:	8b 00                	mov    (%eax),%eax
 8354237:	89 45 c8             	mov    %eax,-0x38(%ebp)
 835423a:	8d 85 10 fc ff ff    	lea    -0x3f0(%ebp),%eax
 8354240:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8354247:	00 
 8354248:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 835424e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354252:	89 04 24             	mov    %eax,(%esp)
 8354255:	e8 58 f6 e3 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 835425a:	83 ec 04             	sub    $0x4,%esp
 835425d:	8d 85 10 fc ff ff    	lea    -0x3f0(%ebp),%eax
 8354263:	89 04 24             	mov    %eax,(%esp)
 8354266:	e8 b1 57 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 835426b:	8b 00                	mov    (%eax),%eax
 835426d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8354270:	8d 85 14 fc ff ff    	lea    -0x3ec(%ebp),%eax
 8354276:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 835427d:	00 
 835427e:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 8354284:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354288:	89 04 24             	mov    %eax,(%esp)
 835428b:	e8 22 f6 e3 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8354290:	83 ec 04             	sub    $0x4,%esp
 8354293:	8d 85 14 fc ff ff    	lea    -0x3ec(%ebp),%eax
 8354299:	89 04 24             	mov    %eax,(%esp)
 835429c:	e8 7b 57 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 83542a1:	8b 00                	mov    (%eax),%eax
 83542a3:	89 45 d0             	mov    %eax,-0x30(%ebp)
 83542a6:	8b 85 44 fa ff ff    	mov    -0x5bc(%ebp),%eax
 83542ac:	83 f8 06             	cmp    $0x6,%eax
 83542af:	0f 85 99 00 00 00    	jne    835434e <_ZN9QuestList9load_listEv+0x5b6>
 83542b5:	8d 85 18 fc ff ff    	lea    -0x3e8(%ebp),%eax
 83542bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83542c2:	00 
 83542c3:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 83542c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 83542cd:	89 04 24             	mov    %eax,(%esp)
 83542d0:	e8 dd f5 e3 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 83542d5:	83 ec 04             	sub    $0x4,%esp
 83542d8:	8d 85 18 fc ff ff    	lea    -0x3e8(%ebp),%eax
 83542de:	89 04 24             	mov    %eax,(%esp)
 83542e1:	e8 36 57 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 83542e6:	8b 00                	mov    (%eax),%eax
 83542e8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83542eb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83542ee:	83 f8 0a             	cmp    $0xa,%eax
 83542f1:	77 16                	ja     8354309 <_ZN9QuestList9load_listEv+0x571>
 83542f3:	ba 01 00 00 00       	mov    $0x1,%edx
 83542f8:	89 d3                	mov    %edx,%ebx
 83542fa:	89 c1                	mov    %eax,%ecx
 83542fc:	d3 e3                	shl    %cl,%ebx
 83542fe:	89 d8                	mov    %ebx,%eax
 8354300:	25 0e 04 00 00       	and    $0x40e,%eax
 8354305:	85 c0                	test   %eax,%eax
 8354307:	75 44                	jne    835434d <_ZN9QuestList9load_listEv+0x5b5>
 8354309:	8b 45 d8             	mov    -0x28(%ebp),%eax
 835430c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8354310:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8354313:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354317:	c7 44 24 10 b0 02 c3 	movl   $0x8c302b0,0x10(%esp)
 835431e:	08 
 835431f:	c7 44 24 0c 9d 13 00 	movl   $0x139d,0xc(%esp)
 8354326:	00 
 8354327:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 835432e:	08 
 835432f:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354336:	08 
 8354337:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 835433e:	e8 c7 f8 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354343:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354348:	e9 99 0b 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 835434d:	90                   	nop
 835434e:	8d 85 1c fc ff ff    	lea    -0x3e4(%ebp),%eax
 8354354:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 835435b:	00 
 835435c:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 8354362:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354366:	89 04 24             	mov    %eax,(%esp)
 8354369:	e8 44 f5 e3 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 835436e:	83 ec 04             	sub    $0x4,%esp
 8354371:	8d 85 1c fc ff ff    	lea    -0x3e4(%ebp),%eax
 8354377:	89 04 24             	mov    %eax,(%esp)
 835437a:	e8 9d 56 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 835437f:	8b 00                	mov    (%eax),%eax
 8354381:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8354384:	81 7d d4 ff 01 00 00 	cmpl   $0x1ff,-0x2c(%ebp)
 835438b:	7e 4e                	jle    83543db <_ZN9QuestList9load_listEv+0x643>
 835438d:	8b 85 44 fa ff ff    	mov    -0x5bc(%ebp),%eax
 8354393:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8354396:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 835439a:	89 44 24 18          	mov    %eax,0x18(%esp)
 835439e:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83543a1:	89 44 24 14          	mov    %eax,0x14(%esp)
 83543a5:	c7 44 24 10 e4 02 c3 	movl   $0x8c302e4,0x10(%esp)
 83543ac:	08 
 83543ad:	c7 44 24 0c a4 13 00 	movl   $0x13a4,0xc(%esp)
 83543b4:	00 
 83543b5:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 83543bc:	08 
 83543bd:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 83543c4:	08 
 83543c5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83543cc:	e8 39 f8 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83543d1:	bb 00 00 00 00       	mov    $0x0,%ebx
 83543d6:	e9 0b 0b 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 83543db:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 83543e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83543e5:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 83543eb:	89 04 24             	mov    %eax,(%esp)
 83543ee:	e8 33 56 da ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 83543f3:	84 c0                	test   %al,%al
 83543f5:	0f 85 09 fe ff ff    	jne    8354204 <_ZN9QuestList9load_listEv+0x46c>
 83543fb:	e9 fb 02 00 00       	jmp    83546fb <_ZN9QuestList9load_listEv+0x963>
 8354400:	8b 85 44 fa ff ff    	mov    -0x5bc(%ebp),%eax
 8354406:	85 c0                	test   %eax,%eax
 8354408:	75 7c                	jne    8354486 <_ZN9QuestList9load_listEv+0x6ee>
 835440a:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354410:	05 80 01 00 00       	add    $0x180,%eax
 8354415:	89 04 24             	mov    %eax,(%esp)
 8354418:	e8 a3 9d d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 835441d:	83 e0 01             	and    $0x1,%eax
 8354420:	84 c0                	test   %al,%al
 8354422:	0f 84 d3 02 00 00    	je     83546fb <_ZN9QuestList9load_listEv+0x963>
 8354428:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 835442e:	05 80 01 00 00       	add    $0x180,%eax
 8354433:	89 04 24             	mov    %eax,(%esp)
 8354436:	e8 85 9d d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 835443b:	8b 95 44 fa ff ff    	mov    -0x5bc(%ebp),%edx
 8354441:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8354445:	89 54 24 18          	mov    %edx,0x18(%esp)
 8354449:	8b 45 bc             	mov    -0x44(%ebp),%eax
 835444c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354450:	c7 44 24 10 60 02 c3 	movl   $0x8c30260,0x10(%esp)
 8354457:	08 
 8354458:	c7 44 24 0c ba 13 00 	movl   $0x13ba,0xc(%esp)
 835445f:	00 
 8354460:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354467:	08 
 8354468:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 835446f:	08 
 8354470:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354477:	e8 8e f7 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 835447c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354481:	e9 60 0a 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354486:	8b 85 44 fa ff ff    	mov    -0x5bc(%ebp),%eax
 835448c:	83 f8 01             	cmp    $0x1,%eax
 835448f:	0f 85 66 02 00 00    	jne    83546fb <_ZN9QuestList9load_listEv+0x963>
 8354495:	8b 85 48 fa ff ff    	mov    -0x5b8(%ebp),%eax
 835449b:	83 f8 04             	cmp    $0x4,%eax
 835449e:	75 7f                	jne    835451f <_ZN9QuestList9load_listEv+0x787>
 83544a0:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 83544a6:	05 80 01 00 00       	add    $0x180,%eax
 83544ab:	89 04 24             	mov    %eax,(%esp)
 83544ae:	e8 0d 9d d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83544b3:	83 f8 02             	cmp    $0x2,%eax
 83544b6:	0f 95 c0             	setne  %al
 83544b9:	84 c0                	test   %al,%al
 83544bb:	0f 84 3a 02 00 00    	je     83546fb <_ZN9QuestList9load_listEv+0x963>
 83544c1:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 83544c7:	05 80 01 00 00       	add    $0x180,%eax
 83544cc:	89 04 24             	mov    %eax,(%esp)
 83544cf:	e8 ec 9c d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83544d4:	8b 95 44 fa ff ff    	mov    -0x5bc(%ebp),%edx
 83544da:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 83544de:	89 54 24 18          	mov    %edx,0x18(%esp)
 83544e2:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83544e5:	89 44 24 14          	mov    %eax,0x14(%esp)
 83544e9:	c7 44 24 10 60 02 c3 	movl   $0x8c30260,0x10(%esp)
 83544f0:	08 
 83544f1:	c7 44 24 0c c4 13 00 	movl   $0x13c4,0xc(%esp)
 83544f8:	00 
 83544f9:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354500:	08 
 8354501:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354508:	08 
 8354509:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354510:	e8 f5 f6 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354515:	bb 00 00 00 00       	mov    $0x0,%ebx
 835451a:	e9 c7 09 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 835451f:	8b 85 48 fa ff ff    	mov    -0x5b8(%ebp),%eax
 8354525:	83 f8 06             	cmp    $0x6,%eax
 8354528:	0f 85 a2 00 00 00    	jne    83545d0 <_ZN9QuestList9load_listEv+0x838>
 835452e:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354534:	05 80 01 00 00       	add    $0x180,%eax
 8354539:	89 04 24             	mov    %eax,(%esp)
 835453c:	e8 7f 9c d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8354541:	83 f8 02             	cmp    $0x2,%eax
 8354544:	74 1f                	je     8354565 <_ZN9QuestList9load_listEv+0x7cd>
 8354546:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 835454c:	05 80 01 00 00       	add    $0x180,%eax
 8354551:	89 04 24             	mov    %eax,(%esp)
 8354554:	e8 67 9c d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8354559:	83 f8 03             	cmp    $0x3,%eax
 835455c:	74 07                	je     8354565 <_ZN9QuestList9load_listEv+0x7cd>
 835455e:	b8 01 00 00 00       	mov    $0x1,%eax
 8354563:	eb 05                	jmp    835456a <_ZN9QuestList9load_listEv+0x7d2>
 8354565:	b8 00 00 00 00       	mov    $0x0,%eax
 835456a:	84 c0                	test   %al,%al
 835456c:	0f 84 89 01 00 00    	je     83546fb <_ZN9QuestList9load_listEv+0x963>
 8354572:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354578:	05 80 01 00 00       	add    $0x180,%eax
 835457d:	89 04 24             	mov    %eax,(%esp)
 8354580:	e8 3b 9c d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8354585:	8b 95 44 fa ff ff    	mov    -0x5bc(%ebp),%edx
 835458b:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 835458f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8354593:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8354596:	89 44 24 14          	mov    %eax,0x14(%esp)
 835459a:	c7 44 24 10 60 02 c3 	movl   $0x8c30260,0x10(%esp)
 83545a1:	08 
 83545a2:	c7 44 24 0c cc 13 00 	movl   $0x13cc,0xc(%esp)
 83545a9:	00 
 83545aa:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 83545b1:	08 
 83545b2:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 83545b9:	08 
 83545ba:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83545c1:	e8 44 f6 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83545c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 83545cb:	e9 16 09 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 83545d0:	8b 85 48 fa ff ff    	mov    -0x5b8(%ebp),%eax
 83545d6:	83 f8 03             	cmp    $0x3,%eax
 83545d9:	7e 25                	jle    8354600 <_ZN9QuestList9load_listEv+0x868>
 83545db:	8b 85 48 fa ff ff    	mov    -0x5b8(%ebp),%eax
 83545e1:	83 f8 05             	cmp    $0x5,%eax
 83545e4:	74 1a                	je     8354600 <_ZN9QuestList9load_listEv+0x868>
 83545e6:	8b 85 48 fa ff ff    	mov    -0x5b8(%ebp),%eax
 83545ec:	83 f8 06             	cmp    $0x6,%eax
 83545ef:	0f 8e 8a 00 00 00    	jle    835467f <_ZN9QuestList9load_listEv+0x8e7>
 83545f5:	8b 85 48 fa ff ff    	mov    -0x5b8(%ebp),%eax
 83545fb:	83 f8 0b             	cmp    $0xb,%eax
 83545fe:	7f 7f                	jg     835467f <_ZN9QuestList9load_listEv+0x8e7>
 8354600:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354606:	05 80 01 00 00       	add    $0x180,%eax
 835460b:	89 04 24             	mov    %eax,(%esp)
 835460e:	e8 ad 9b d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8354613:	83 f8 03             	cmp    $0x3,%eax
 8354616:	0f 95 c0             	setne  %al
 8354619:	84 c0                	test   %al,%al
 835461b:	0f 84 d9 00 00 00    	je     83546fa <_ZN9QuestList9load_listEv+0x962>
 8354621:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354627:	05 80 01 00 00       	add    $0x180,%eax
 835462c:	89 04 24             	mov    %eax,(%esp)
 835462f:	e8 8c 9b d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8354634:	8b 95 44 fa ff ff    	mov    -0x5bc(%ebp),%edx
 835463a:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 835463e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8354642:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8354645:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354649:	c7 44 24 10 60 02 c3 	movl   $0x8c30260,0x10(%esp)
 8354650:	08 
 8354651:	c7 44 24 0c d4 13 00 	movl   $0x13d4,0xc(%esp)
 8354658:	00 
 8354659:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354660:	08 
 8354661:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354668:	08 
 8354669:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354670:	e8 95 f5 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354675:	bb 00 00 00 00       	mov    $0x0,%ebx
 835467a:	e9 67 08 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 835467f:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354685:	05 80 01 00 00       	add    $0x180,%eax
 835468a:	89 04 24             	mov    %eax,(%esp)
 835468d:	e8 2e 9b d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8354692:	83 f8 04             	cmp    $0x4,%eax
 8354695:	0f 95 c0             	setne  %al
 8354698:	84 c0                	test   %al,%al
 835469a:	74 5f                	je     83546fb <_ZN9QuestList9load_listEv+0x963>
 835469c:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 83546a2:	05 80 01 00 00       	add    $0x180,%eax
 83546a7:	89 04 24             	mov    %eax,(%esp)
 83546aa:	e8 11 9b d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 83546af:	8b 95 44 fa ff ff    	mov    -0x5bc(%ebp),%edx
 83546b5:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 83546b9:	89 54 24 18          	mov    %edx,0x18(%esp)
 83546bd:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83546c0:	89 44 24 14          	mov    %eax,0x14(%esp)
 83546c4:	c7 44 24 10 60 02 c3 	movl   $0x8c30260,0x10(%esp)
 83546cb:	08 
 83546cc:	c7 44 24 0c dc 13 00 	movl   $0x13dc,0xc(%esp)
 83546d3:	00 
 83546d4:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 83546db:	08 
 83546dc:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 83546e3:	08 
 83546e4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83546eb:	e8 1a f5 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83546f0:	bb 00 00 00 00       	mov    $0x0,%ebx
 83546f5:	e9 ec 07 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 83546fa:	90                   	nop
 83546fb:	8b 85 1c fa ff ff    	mov    -0x5e4(%ebp),%eax
 8354701:	83 f8 ff             	cmp    $0xffffffff,%eax
 8354704:	0f 84 96 00 00 00    	je     83547a0 <_ZN9QuestList9load_listEv+0xa08>
 835470a:	8b 9d 24 fa ff ff    	mov    -0x5dc(%ebp),%ebx
 8354710:	e8 86 7a d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8354715:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8354719:	89 04 24             	mov    %eax,(%esp)
 835471c:	e8 f3 b2 00 00       	call   835fa14 <_ZNK12CDataManager8find_mapEi>
 8354721:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8354724:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8354728:	75 47                	jne    8354771 <_ZN9QuestList9load_listEv+0x9d9>
 835472a:	8b 85 24 fa ff ff    	mov    -0x5dc(%ebp),%eax
 8354730:	89 44 24 18          	mov    %eax,0x18(%esp)
 8354734:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8354737:	89 44 24 14          	mov    %eax,0x14(%esp)
 835473b:	c7 44 24 10 34 03 c3 	movl   $0x8c30334,0x10(%esp)
 8354742:	08 
 8354743:	c7 44 24 0c e9 13 00 	movl   $0x13e9,0xc(%esp)
 835474a:	00 
 835474b:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354752:	08 
 8354753:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 835475a:	08 
 835475b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354762:	e8 a3 f4 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354767:	bb 00 00 00 00       	mov    $0x0,%ebx
 835476c:	e9 75 07 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354771:	8b 9d 1c fa ff ff    	mov    -0x5e4(%ebp),%ebx
 8354777:	e8 1f 7a d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 835477c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8354780:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8354783:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354787:	89 04 24             	mov    %eax,(%esp)
 835478a:	e8 5f d9 00 00       	call   83620ee <_ZNK12CDataManager9VerifyMapERK4CMapi>
 835478f:	83 f0 01             	xor    $0x1,%eax
 8354792:	84 c0                	test   %al,%al
 8354794:	74 0a                	je     83547a0 <_ZN9QuestList9load_listEv+0xa08>
 8354796:	bb 00 00 00 00       	mov    $0x0,%ebx
 835479b:	e9 46 07 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 83547a0:	e8 0f 84 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 83547a5:	8d 95 cc f8 ff ff    	lea    -0x734(%ebp),%edx
 83547ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 83547af:	89 04 24             	mov    %eax,(%esp)
 83547b2:	e8 83 dc 2c 00       	call   862243a <_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript>
 83547b7:	83 f0 01             	xor    $0x1,%eax
 83547ba:	84 c0                	test   %al,%al
 83547bc:	74 1d                	je     83547db <_ZN9QuestList9load_listEv+0xa43>
 83547be:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83547c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83547c5:	c7 04 24 70 03 c3 08 	movl   $0x8c30370,(%esp)
 83547cc:	e8 8f 93 d2 ff       	call   807db60 <printf@plt>
 83547d1:	bb 00 00 00 00       	mov    $0x0,%ebx
 83547d6:	e9 0b 07 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 83547db:	c7 04 24 50 01 00 00 	movl   $0x150,(%esp)
 83547e2:	e8 69 fc 3c 00       	call   8724450 <_Znwj>
 83547e7:	89 c3                	mov    %eax,%ebx
 83547e9:	89 d8                	mov    %ebx,%eax
 83547eb:	89 04 24             	mov    %eax,(%esp)
 83547ee:	e8 35 62 02 00       	call   837aa28 <_ZN5QuestC1Ev>
 83547f3:	eb 15                	jmp    835480a <_ZN9QuestList9load_listEv+0xa72>
 83547f5:	89 d6                	mov    %edx,%esi
 83547f7:	89 c7                	mov    %eax,%edi
 83547f9:	89 1c 24             	mov    %ebx,(%esp)
 83547fc:	e8 ef fc 3c 00       	call   87244f0 <_ZdlPv>
 8354801:	89 f8                	mov    %edi,%eax
 8354803:	89 f2                	mov    %esi,%edx
 8354805:	e9 be 06 00 00       	jmp    8354ec8 <_ZN9QuestList9load_listEv+0x1130>
 835480a:	89 d8                	mov    %ebx,%eax
 835480c:	89 85 f0 fb ff ff    	mov    %eax,-0x410(%ebp)
 8354812:	8b 85 f0 fb ff ff    	mov    -0x410(%ebp),%eax
 8354818:	85 c0                	test   %eax,%eax
 835481a:	75 56                	jne    8354872 <_ZN9QuestList9load_listEv+0xada>
 835481c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8354823:	00 
 8354824:	c7 44 24 08 ff 13 00 	movl   $0x13ff,0x8(%esp)
 835482b:	00 
 835482c:	c7 44 24 04 a5 45 c3 	movl   $0x8c345a5,0x4(%esp)
 8354833:	08 
 8354834:	8d 85 20 fc ff ff    	lea    -0x3e0(%ebp),%eax
 835483a:	89 04 24             	mov    %eax,(%esp)
 835483d:	e8 d6 ae 1f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8354842:	c7 44 24 0c ff 13 00 	movl   $0x13ff,0xc(%esp)
 8354849:	00 
 835484a:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354851:	08 
 8354852:	c7 44 24 04 91 03 c3 	movl   $0x8c30391,0x4(%esp)
 8354859:	08 
 835485a:	8d 85 20 fc ff ff    	lea    -0x3e0(%ebp),%eax
 8354860:	89 04 24             	mov    %eax,(%esp)
 8354863:	e8 20 af 1f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8354868:	bb 00 00 00 00       	mov    $0x0,%ebx
 835486d:	e9 74 06 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354872:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354878:	89 44 24 04          	mov    %eax,0x4(%esp)
 835487c:	8d 85 30 fc ff ff    	lea    -0x3d0(%ebp),%eax
 8354882:	89 04 24             	mov    %eax,(%esp)
 8354885:	e8 3e 65 02 00       	call   837adc8 <_ZN11QuestScriptC1ERKS_>
 835488a:	8b 85 f0 fb ff ff    	mov    -0x410(%ebp),%eax
 8354890:	8d 95 30 fc ff ff    	lea    -0x3d0(%ebp),%edx
 8354896:	89 54 24 04          	mov    %edx,0x4(%esp)
 835489a:	89 04 24             	mov    %eax,(%esp)
 835489d:	e8 9c da ff ff       	call   835233e <_ZN5Quest9set_questE11QuestScript>
 83548a2:	eb 1b                	jmp    83548bf <_ZN9QuestList9load_listEv+0xb27>
 83548a4:	89 d3                	mov    %edx,%ebx
 83548a6:	89 c6                	mov    %eax,%esi
 83548a8:	8d 85 30 fc ff ff    	lea    -0x3d0(%ebp),%eax
 83548ae:	89 04 24             	mov    %eax,(%esp)
 83548b1:	e8 3a a2 01 00       	call   836eaf0 <_ZN11QuestScriptD1Ev>
 83548b6:	89 f0                	mov    %esi,%eax
 83548b8:	89 da                	mov    %ebx,%edx
 83548ba:	e9 09 06 00 00       	jmp    8354ec8 <_ZN9QuestList9load_listEv+0x1130>
 83548bf:	8d 85 30 fc ff ff    	lea    -0x3d0(%ebp),%eax
 83548c5:	89 04 24             	mov    %eax,(%esp)
 83548c8:	e8 23 a2 01 00       	call   836eaf0 <_ZN11QuestScriptD1Ev>
 83548cd:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 83548d3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83548da:	00 
 83548db:	8d 95 f4 fb ff ff    	lea    -0x40c(%ebp),%edx
 83548e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83548e5:	89 04 24             	mov    %eax,(%esp)
 83548e8:	e8 f7 cd fe ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 83548ed:	83 ec 04             	sub    $0x4,%esp
 83548f0:	8b 85 b0 f9 ff ff    	mov    -0x650(%ebp),%eax
 83548f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 83548fa:	8b 45 08             	mov    0x8(%ebp),%eax
 83548fd:	89 04 24             	mov    %eax,(%esp)
 8354900:	e8 fd 05 00 00       	call   8354f02 <_ZN9QuestList10insert_NPCEi>
 8354905:	8d 85 f0 fb ff ff    	lea    -0x410(%ebp),%eax
 835490b:	89 44 24 08          	mov    %eax,0x8(%esp)
 835490f:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354915:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354919:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 835491f:	89 04 24             	mov    %eax,(%esp)
 8354922:	e8 51 d2 03 00       	call   8391b78 <_ZNSt4pairIKiP5QuestEC1IRiRS2_EEOT_OT0_>
 8354927:	8b 55 08             	mov    0x8(%ebp),%edx
 835492a:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8354930:	8d 8d 4c ff ff ff    	lea    -0xb4(%ebp),%ecx
 8354936:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 835493a:	89 54 24 04          	mov    %edx,0x4(%esp)
 835493e:	89 04 24             	mov    %eax,(%esp)
 8354941:	e8 60 d2 03 00       	call   8391ba6 <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 8354946:	83 ec 04             	sub    $0x4,%esp
 8354949:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 835494f:	83 f8 04             	cmp    $0x4,%eax
 8354952:	75 51                	jne    83549a5 <_ZN9QuestList9load_listEv+0xc0d>
 8354954:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 835495a:	89 44 24 08          	mov    %eax,0x8(%esp)
 835495e:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354964:	05 e4 00 00 00       	add    $0xe4,%eax
 8354969:	89 44 24 04          	mov    %eax,0x4(%esp)
 835496d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8354973:	89 04 24             	mov    %eax,(%esp)
 8354976:	e8 45 61 fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 835497b:	8b 45 08             	mov    0x8(%ebp),%eax
 835497e:	8d 48 44             	lea    0x44(%eax),%ecx
 8354981:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8354987:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 835498d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8354991:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8354995:	89 04 24             	mov    %eax,(%esp)
 8354998:	e8 ef 43 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 835499d:	83 ec 04             	sub    $0x4,%esp
 83549a0:	e9 60 02 00 00       	jmp    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 83549a5:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 83549ab:	83 f8 05             	cmp    $0x5,%eax
 83549ae:	75 51                	jne    8354a01 <_ZN9QuestList9load_listEv+0xc69>
 83549b0:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 83549b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 83549ba:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 83549c0:	05 e4 00 00 00       	add    $0xe4,%eax
 83549c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83549c9:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 83549cf:	89 04 24             	mov    %eax,(%esp)
 83549d2:	e8 e9 60 fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 83549d7:	8b 45 08             	mov    0x8(%ebp),%eax
 83549da:	8d 48 2c             	lea    0x2c(%eax),%ecx
 83549dd:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 83549e3:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 83549e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 83549ed:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83549f1:	89 04 24             	mov    %eax,(%esp)
 83549f4:	e8 93 43 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 83549f9:	83 ec 04             	sub    $0x4,%esp
 83549fc:	e9 04 02 00 00       	jmp    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 8354a01:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 8354a07:	85 c0                	test   %eax,%eax
 8354a09:	75 51                	jne    8354a5c <_ZN9QuestList9load_listEv+0xcc4>
 8354a0b:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354a11:	89 44 24 08          	mov    %eax,0x8(%esp)
 8354a15:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354a1b:	05 e4 00 00 00       	add    $0xe4,%eax
 8354a20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354a24:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8354a2a:	89 04 24             	mov    %eax,(%esp)
 8354a2d:	e8 8e 60 fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 8354a32:	8b 45 08             	mov    0x8(%ebp),%eax
 8354a35:	8d 48 14             	lea    0x14(%eax),%ecx
 8354a38:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8354a3e:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 8354a44:	89 54 24 08          	mov    %edx,0x8(%esp)
 8354a48:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8354a4c:	89 04 24             	mov    %eax,(%esp)
 8354a4f:	e8 38 43 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8354a54:	83 ec 04             	sub    $0x4,%esp
 8354a57:	e9 a9 01 00 00       	jmp    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 8354a5c:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 8354a62:	83 f8 02             	cmp    $0x2,%eax
 8354a65:	75 51                	jne    8354ab8 <_ZN9QuestList9load_listEv+0xd20>
 8354a67:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354a6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8354a71:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354a77:	05 e4 00 00 00       	add    $0xe4,%eax
 8354a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354a80:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8354a86:	89 04 24             	mov    %eax,(%esp)
 8354a89:	e8 32 60 fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 8354a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8354a91:	8d 48 74             	lea    0x74(%eax),%ecx
 8354a94:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8354a9a:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 8354aa0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8354aa4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8354aa8:	89 04 24             	mov    %eax,(%esp)
 8354aab:	e8 dc 42 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8354ab0:	83 ec 04             	sub    $0x4,%esp
 8354ab3:	e9 4d 01 00 00       	jmp    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 8354ab8:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 8354abe:	83 f8 06             	cmp    $0x6,%eax
 8354ac1:	75 4b                	jne    8354b0e <_ZN9QuestList9load_listEv+0xd76>
 8354ac3:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354ac9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8354acd:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354ad3:	05 e4 00 00 00       	add    $0xe4,%eax
 8354ad8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354adc:	8d 45 88             	lea    -0x78(%ebp),%eax
 8354adf:	89 04 24             	mov    %eax,(%esp)
 8354ae2:	e8 d9 5f fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 8354ae7:	8b 45 08             	mov    0x8(%ebp),%eax
 8354aea:	8d 88 8c 00 00 00    	lea    0x8c(%eax),%ecx
 8354af0:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8354af3:	8d 55 88             	lea    -0x78(%ebp),%edx
 8354af6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8354afa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8354afe:	89 04 24             	mov    %eax,(%esp)
 8354b01:	e8 86 42 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8354b06:	83 ec 04             	sub    $0x4,%esp
 8354b09:	e9 f7 00 00 00       	jmp    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 8354b0e:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 8354b14:	83 f8 03             	cmp    $0x3,%eax
 8354b17:	75 4b                	jne    8354b64 <_ZN9QuestList9load_listEv+0xdcc>
 8354b19:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354b1f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8354b23:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354b29:	05 e4 00 00 00       	add    $0xe4,%eax
 8354b2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354b32:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8354b35:	89 04 24             	mov    %eax,(%esp)
 8354b38:	e8 83 5f fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 8354b3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8354b40:	8d 88 bc 00 00 00    	lea    0xbc(%eax),%ecx
 8354b46:	8d 45 90             	lea    -0x70(%ebp),%eax
 8354b49:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8354b4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8354b50:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8354b54:	89 04 24             	mov    %eax,(%esp)
 8354b57:	e8 30 42 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8354b5c:	83 ec 04             	sub    $0x4,%esp
 8354b5f:	e9 a1 00 00 00       	jmp    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 8354b64:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 8354b6a:	83 f8 01             	cmp    $0x1,%eax
 8354b6d:	75 45                	jne    8354bb4 <_ZN9QuestList9load_listEv+0xe1c>
 8354b6f:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354b75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8354b79:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354b7f:	05 e4 00 00 00       	add    $0xe4,%eax
 8354b84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354b88:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8354b8b:	89 04 24             	mov    %eax,(%esp)
 8354b8e:	e8 2d 5f fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 8354b93:	8b 45 08             	mov    0x8(%ebp),%eax
 8354b96:	8d 48 5c             	lea    0x5c(%eax),%ecx
 8354b99:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8354b9c:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8354b9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8354ba3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8354ba7:	89 04 24             	mov    %eax,(%esp)
 8354baa:	e8 dd 41 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8354baf:	83 ec 04             	sub    $0x4,%esp
 8354bb2:	eb 51                	jmp    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 8354bb4:	8b 85 a0 f9 ff ff    	mov    -0x660(%ebp),%eax
 8354bba:	83 f8 08             	cmp    $0x8,%eax
 8354bbd:	75 46                	jne    8354c05 <_ZN9QuestList9load_listEv+0xe6d>
 8354bbf:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354bc5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8354bc9:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354bcf:	05 e4 00 00 00       	add    $0xe4,%eax
 8354bd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354bd8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8354bdb:	89 04 24             	mov    %eax,(%esp)
 8354bde:	e8 dd 5e fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 8354be3:	8b 45 08             	mov    0x8(%ebp),%eax
 8354be6:	8d 88 a4 00 00 00    	lea    0xa4(%eax),%ecx
 8354bec:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8354bef:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8354bf2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8354bf6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8354bfa:	89 04 24             	mov    %eax,(%esp)
 8354bfd:	e8 8a 41 e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8354c02:	83 ec 04             	sub    $0x4,%esp
 8354c05:	0f b6 85 24 fb ff ff 	movzbl -0x4dc(%ebp),%eax
 8354c0c:	3c ff                	cmp    $0xff,%al
 8354c0e:	74 1b                	je     8354c2b <_ZN9QuestList9load_listEv+0xe93>
 8354c10:	8b 45 08             	mov    0x8(%ebp),%eax
 8354c13:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 8354c19:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354c1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354c23:	89 14 24             	mov    %edx,(%esp)
 8354c26:	e8 fb c4 db ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8354c2b:	8d 85 f8 fb ff ff    	lea    -0x408(%ebp),%eax
 8354c31:	c7 44 24 04 80 04 50 	movl   $0x9500480,0x4(%esp)
 8354c38:	09 
 8354c39:	89 04 24             	mov    %eax,(%esp)
 8354c3c:	e8 d7 14 d9 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8354c41:	83 ec 04             	sub    $0x4,%esp
 8354c44:	8d 85 f8 fb ff ff    	lea    -0x408(%ebp),%eax
 8354c4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354c4e:	8d 85 f4 fb ff ff    	lea    -0x40c(%ebp),%eax
 8354c54:	89 04 24             	mov    %eax,(%esp)
 8354c57:	e8 e2 14 d9 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8354c5c:	84 c0                	test   %al,%al
 8354c5e:	0f 85 b2 f1 ff ff    	jne    8353e16 <_ZN9QuestList9load_listEv+0x7e>
 8354c64:	eb 01                	jmp    8354c67 <_ZN9QuestList9load_listEv+0xecf>
 8354c66:	90                   	nop
 8354c67:	8b 45 08             	mov    0x8(%ebp),%eax
 8354c6a:	05 d4 00 00 00       	add    $0xd4,%eax
 8354c6f:	89 04 24             	mov    %eax,(%esp)
 8354c72:	e8 e9 7c dc ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 8354c77:	83 f0 01             	xor    $0x1,%eax
 8354c7a:	84 c0                	test   %al,%al
 8354c7c:	0f 84 00 02 00 00    	je     8354e82 <_ZN9QuestList9load_listEv+0x10ea>
 8354c82:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8354c89:	8b 45 08             	mov    0x8(%ebp),%eax
 8354c8c:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 8354c92:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8354c95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354c99:	89 04 24             	mov    %eax,(%esp)
 8354c9c:	e8 a7 95 d3 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8354ca1:	83 ec 04             	sub    $0x4,%esp
 8354ca4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8354ca7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354cab:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 8354cb1:	89 04 24             	mov    %eax,(%esp)
 8354cb4:	e8 33 4d da ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8354cb9:	e9 8c 01 00 00       	jmp    8354e4a <_ZN9QuestList9load_listEv+0x10b2>
 8354cbe:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 8354cc4:	89 04 24             	mov    %eax,(%esp)
 8354cc7:	e8 50 4d da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8354ccc:	8b 00                	mov    (%eax),%eax
 8354cce:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8354cd1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8354cd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354cd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8354cdb:	89 04 24             	mov    %eax,(%esp)
 8354cde:	e8 79 0d 00 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 8354ce3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8354ce6:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8354cea:	0f 84 4b 01 00 00    	je     8354e3b <_ZN9QuestList9load_listEv+0x10a3>
 8354cf0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8354cf3:	0f b6 80 08 01 00 00 	movzbl 0x108(%eax),%eax
 8354cfa:	3c ff                	cmp    $0xff,%al
 8354cfc:	75 3d                	jne    8354d3b <_ZN9QuestList9load_listEv+0xfa3>
 8354cfe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8354d01:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354d05:	c7 44 24 10 9c 03 c3 	movl   $0x8c3039c,0x10(%esp)
 8354d0c:	08 
 8354d0d:	c7 44 24 0c 5c 14 00 	movl   $0x145c,0xc(%esp)
 8354d14:	00 
 8354d15:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354d1c:	08 
 8354d1d:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354d24:	08 
 8354d25:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354d2c:	e8 d9 ee 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354d31:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354d36:	e9 ab 01 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354d3b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8354d3e:	05 0c 01 00 00       	add    $0x10c,%eax
 8354d43:	89 04 24             	mov    %eax,(%esp)
 8354d46:	e8 15 19 3b 00       	call   8706660 <_ZNKSs4sizeEv>
 8354d4b:	85 c0                	test   %eax,%eax
 8354d4d:	0f 94 c0             	sete   %al
 8354d50:	84 c0                	test   %al,%al
 8354d52:	74 3d                	je     8354d91 <_ZN9QuestList9load_listEv+0xff9>
 8354d54:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8354d57:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354d5b:	c7 44 24 10 c0 03 c3 	movl   $0x8c303c0,0x10(%esp)
 8354d62:	08 
 8354d63:	c7 44 24 0c 62 14 00 	movl   $0x1462,0xc(%esp)
 8354d6a:	00 
 8354d6b:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354d72:	08 
 8354d73:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354d7a:	08 
 8354d7b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354d82:	e8 83 ee 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354d87:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354d8c:	e9 55 01 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354d91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8354d94:	05 10 01 00 00       	add    $0x110,%eax
 8354d99:	89 04 24             	mov    %eax,(%esp)
 8354d9c:	e8 bf 18 3b 00       	call   8706660 <_ZNKSs4sizeEv>
 8354da1:	85 c0                	test   %eax,%eax
 8354da3:	0f 94 c0             	sete   %al
 8354da6:	84 c0                	test   %al,%al
 8354da8:	74 3d                	je     8354de7 <_ZN9QuestList9load_listEv+0x104f>
 8354daa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8354dad:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354db1:	c7 44 24 10 f4 03 c3 	movl   $0x8c303f4,0x10(%esp)
 8354db8:	08 
 8354db9:	c7 44 24 0c 67 14 00 	movl   $0x1467,0xc(%esp)
 8354dc0:	00 
 8354dc1:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354dc8:	08 
 8354dc9:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354dd0:	08 
 8354dd1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354dd8:	e8 2d ee 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354ddd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354de2:	e9 ff 00 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354de7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8354dea:	05 14 01 00 00       	add    $0x114,%eax
 8354def:	89 04 24             	mov    %eax,(%esp)
 8354df2:	e8 c9 93 d3 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8354df7:	83 e0 01             	and    $0x1,%eax
 8354dfa:	84 c0                	test   %al,%al
 8354dfc:	74 3e                	je     8354e3c <_ZN9QuestList9load_listEv+0x10a4>
 8354dfe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8354e01:	89 44 24 14          	mov    %eax,0x14(%esp)
 8354e05:	c7 44 24 10 2c 04 c3 	movl   $0x8c3042c,0x10(%esp)
 8354e0c:	08 
 8354e0d:	c7 44 24 0c 6c 14 00 	movl   $0x146c,0xc(%esp)
 8354e14:	00 
 8354e15:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354e1c:	08 
 8354e1d:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354e24:	08 
 8354e25:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354e2c:	e8 d9 ed 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354e31:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354e36:	e9 ab 00 00 00       	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354e3b:	90                   	nop
 8354e3c:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 8354e42:	89 04 24             	mov    %eax,(%esp)
 8354e45:	e8 bc 4b da ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 8354e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8354e4d:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 8354e53:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8354e56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8354e5a:	89 04 24             	mov    %eax,(%esp)
 8354e5d:	e8 0a 94 d3 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8354e62:	83 ec 04             	sub    $0x4,%esp
 8354e65:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8354e68:	89 44 24 04          	mov    %eax,0x4(%esp)
 8354e6c:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 8354e72:	89 04 24             	mov    %eax,(%esp)
 8354e75:	e8 ae e5 e3 ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 8354e7a:	84 c0                	test   %al,%al
 8354e7c:	0f 85 3c fe ff ff    	jne    8354cbe <_ZN9QuestList9load_listEv+0xf26>
 8354e82:	e8 ad 6c d3 ff       	call   808bb34 <_ZN8WongWork11CQuestClear10syncScriptEv>
 8354e87:	83 f0 01             	xor    $0x1,%eax
 8354e8a:	84 c0                	test   %al,%al
 8354e8c:	74 33                	je     8354ec1 <_ZN9QuestList9load_listEv+0x1129>
 8354e8e:	c7 44 24 10 68 04 c3 	movl   $0x8c30468,0x10(%esp)
 8354e95:	08 
 8354e96:	c7 44 24 0c 96 14 00 	movl   $0x1496,0xc(%esp)
 8354e9d:	00 
 8354e9e:	c7 44 24 08 a5 45 c3 	movl   $0x8c345a5,0x8(%esp)
 8354ea5:	08 
 8354ea6:	c7 44 24 04 0a f9 c2 	movl   $0x8c2f90a,0x4(%esp)
 8354ead:	08 
 8354eae:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8354eb5:	e8 50 ed 77 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8354eba:	bb 00 00 00 00       	mov    $0x0,%ebx
 8354ebf:	eb 25                	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354ec1:	bb 01 00 00 00       	mov    $0x1,%ebx
 8354ec6:	eb 1e                	jmp    8354ee6 <_ZN9QuestList9load_listEv+0x114e>
 8354ec8:	89 d3                	mov    %edx,%ebx
 8354eca:	89 c6                	mov    %eax,%esi
 8354ecc:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354ed2:	89 04 24             	mov    %eax,(%esp)
 8354ed5:	e8 16 9c 01 00       	call   836eaf0 <_ZN11QuestScriptD1Ev>
 8354eda:	89 f0                	mov    %esi,%eax
 8354edc:	89 da                	mov    %ebx,%edx
 8354ede:	89 04 24             	mov    %eax,(%esp)
 8354ee1:	e8 6a e8 78 00       	call   8ae3750 <_Unwind_Resume>
 8354ee6:	8d 85 cc f8 ff ff    	lea    -0x734(%ebp),%eax
 8354eec:	89 04 24             	mov    %eax,(%esp)
 8354eef:	e8 fc 9b 01 00       	call   836eaf0 <_ZN11QuestScriptD1Ev>
 8354ef4:	89 d8                	mov    %ebx,%eax
 8354ef6:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8354ef9:	83 c4 00             	add    $0x0,%esp
 8354efc:	5b                   	pop    %ebx
 8354efd:	5e                   	pop    %esi
 8354efe:	5f                   	pop    %edi
 8354eff:	5d                   	pop    %ebp
 8354f00:	c3                   	ret
 8354f01:	90                   	nop

```

```c
// QuestList::load_list @ 0x8353d98

/* QuestList::load_list() */

undefined4 __thiscall QuestList::load_list(QuestList *this)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  CSyncScript *pCVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  CDataManager *pCVar8;
  Quest *this_00;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_740 [2];
  QuestScript local_738 [212];
  int local_664;
  int local_654 [27];
  int local_5e8;
  undefined4 local_5e0;
  int local_5c0;
  int local_5bc;
  vector<int,std::allocator<int>> avStack_5b8 [216];
  char local_4e0;
  vector<_DailySchedule,std::allocator<_DailySchedule>> avStack_45c [48];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_42c [6];
  undefined4 local_426;
  undefined2 local_422;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_420 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_41c [4];
  undefined4 local_418;
  Quest *local_414;
  undefined4 local_410;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_40c [4]
  ;
  __normal_iterator local_408 [4];
  __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
  local_404 [4];
  __normal_iterator local_400 [4];
  __normal_iterator local_3fc [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3f8 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3f4 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3f0 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3ec [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3e8 [4];
  cMyTrace local_3e4 [16];
  QuestScript local_3d4 [780];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_c8 [4];
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_c4 [12];
  pair<int_const,Quest*> local_b8 [8];
  pair local_b0 [4];
  pair<int_const,int> local_ac [8];
  pair local_a4 [4];
  pair<int_const,int> local_a0 [8];
  pair local_98 [4];
  pair<int_const,int> local_94 [8];
  pair local_8c [4];
  pair<int_const,int> local_88 [8];
  pair local_80 [4];
  pair<int_const,int> local_7c [8];
  pair local_74 [4];
  pair<int_const,int> local_70 [8];
  pair local_68 [4];
  pair<int_const,int> local_64 [8];
  pair local_5c [4];
  pair<int_const,int> local_58 [8];
  __normal_iterator local_50 [4];
  __normal_iterator local_4c [4];
  char *local_48;
  CItem *local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  CMap *local_28;
  undefined4 local_24;
  int local_20;
  
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_410);
  QuestScript::QuestScript(local_738);
  local_414 = (Quest *)0x0;
  __gnu_cxx::
  __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>::
  __normal_iterator((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                     *)&local_418);
  local_44 = (CItem *)0x0;
                    /* try { // try from 08353ddf to 083547e6 has its CatchHandler @ 08354ec8 */
  pCVar4 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::truncate_quest_category(pCVar4);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_740);
  local_410 = local_740[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_40c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_410,
                       (_Rb_tree_iterator *)local_40c);
    if (cVar1 == '\0') break;
    iVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_410);
    local_48 = (char *)std::string::c_str((string *)(iVar10 + 4));
    if (local_48 == (char *)0x0) break;
    cVar1 = importQuestScript(local_738,local_48);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"data_manager.cpp","bool QuestList::load_list()",0x1357,
                 "Quest Script Error: %s\n",local_48);
      uVar11 = 0;
      goto LAB_08354ee6;
    }
    iVar10 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size(avStack_45c);
    if (iVar10 != 0) {
      CDailyScheduleManager::AddDailSchedule
                (GlobalData::s_DailyScheduleManager,(vector *)avStack_45c);
    }
    cVar1 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::empty();
    if (cVar1 != '\x01') {
      std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::begin();
      local_418 = local_740[0];
      while( true ) {
        std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::end();
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_418,local_408);
        if (!bVar3) break;
        iVar10 = __gnu_cxx::
                 __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                 ::operator*((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                              *)&local_418);
        iVar10 = *(int *)(iVar10 + 0x10);
        pCVar8 = (CDataManager *)G_CDataManager();
        local_44 = (CItem *)CDataManager::find_item(pCVar8,iVar10);
        if (local_44 == (CItem *)0x0) {
          iVar10 = __gnu_cxx::
                   __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                   ::operator*((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                                *)&local_418);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x136f,
                     "Quest Script Error: %s - Monster Kill Item %d is not Exist\n",local_48,
                     *(undefined4 *)(iVar10 + 0x10));
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        cVar1 = CItem::is_stackable(local_44);
        if ((cVar1 == '\x01') &&
           (iVar10 = (**(code **)(*(int *)local_44 + 0xc))(local_44), iVar10 == 8)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar10 = __gnu_cxx::
                   __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                   ::operator*((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                                *)&local_418);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x1375,
                     "Quest Script Error: %s - Monster Kill Item %d is not Quest Item\n",local_48,
                     *(undefined4 *)(iVar10 + 0x10));
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        __gnu_cxx::
        __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
        ::operator++(local_404,(int)&local_418);
      }
    }
    if ((local_5c0 == 2) || (local_5c0 == 6)) {
      local_40 = 4;
      if (local_5c0 == 6) {
        local_40 = 5;
      }
      uVar5 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
      if ((uVar5 % local_40 == 0) &&
         (uVar5 = std::vector<int,std::allocator<int>>::size(avStack_5b8), uVar5 / local_40 < 4)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        LogManager::logFormat
                  (1,"data_manager.cpp","bool QuestList::load_list()",0x1383,
                   "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                   ,local_48,local_5c0,uVar11);
        uVar11 = 0;
        goto LAB_08354ee6;
      }
      std::vector<int,std::allocator<int>>::begin();
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
      __normal_iterator<int*>(local_41c,local_400);
      std::vector<int,std::allocator<int>>::end();
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
      __normal_iterator<int*>(local_420,local_3fc);
      local_426 = 0;
      local_422 = 0;
      while (bVar3 = __gnu_cxx::operator!=(local_41c,local_420), bVar3) {
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3f8,(int)local_41c);
        puVar9 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                 operator*(local_3f8);
        local_3c = *puVar9;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3f4,(int)local_41c);
        puVar9 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                 operator*(local_3f4);
        local_38 = *puVar9;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3f0,(int)local_41c);
        puVar9 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                 operator*(local_3f0);
        local_34 = *puVar9;
        if (local_5c0 == 6) {
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_3ec,(int)local_41c);
          puVar6 = (uint *)__gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_3ec);
          local_2c = *puVar6;
          if ((10 < local_2c) || ((1 << ((byte)local_2c & 0x1f) & 0x40eU) == 0)) {
            LogManager::logFormat
                      (1,"data_manager.cpp","bool QuestList::load_list()",0x139d,
                       "Quest Script Error: %s - Unknown enemy type(%d)\n",local_48,local_2c);
            uVar11 = 0;
            goto LAB_08354ee6;
          }
        }
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3e8,(int)local_41c);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_3e8);
        local_30 = *piVar7;
        if (0x1ff < local_30) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13a4,
                     "Quest Script Error: %s - Quest Data Type is %d, But Trigger Size is Wrong(%d)\n"
                     ,local_48,local_5c0,local_30);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
    }
    else if (local_5c0 == 0) {
      bVar2 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
      if ((bVar2 & 1) != 0) {
        uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        LogManager::logFormat
                  (1,"data_manager.cpp","bool QuestList::load_list()",0x13ba,
                   "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                   ,local_48,local_5c0,uVar11);
        uVar11 = 0;
        goto LAB_08354ee6;
      }
    }
    else if (local_5c0 == 1) {
      if (local_5bc == 4) {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if (iVar10 != 2) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13c4,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      else if (local_5bc == 6) {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if ((iVar10 == 2) ||
           (iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8), iVar10 == 3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13cc,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      else if (((local_5bc < 4) || (local_5bc == 5)) || ((6 < local_5bc && (local_5bc < 0xc)))) {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if (iVar10 != 3) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13d4,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      else {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if (iVar10 != 4) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13dc,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
    }
    if (local_5e8 != -1) {
      iVar10 = G_CDataManager();
      local_28 = (CMap *)CDataManager::find_map(iVar10);
      iVar10 = local_5e8;
      if (local_28 == (CMap *)0x0) {
        LogManager::logFormat
                  (1,"data_manager.cpp","bool QuestList::load_list()",0x13e9,
                   "Quest Script Error: %s - NPC wrong npc appear map index %d.",local_48,local_5e0)
        ;
        uVar11 = 0;
        goto LAB_08354ee6;
      }
      pCVar8 = (CDataManager *)G_CDataManager();
      cVar1 = CDataManager::VerifyMap(pCVar8,local_28,iVar10);
      if (cVar1 != '\x01') {
        uVar11 = 0;
        goto LAB_08354ee6;
      }
    }
    pCVar4 = (CSyncScript *)sync_script::GetInstanceSyncScript();
    cVar1 = sync_script::CSyncScript::insert_quest_category(pCVar4,local_738);
    if (cVar1 != '\x01') {
      printf("insert_quest_category Error: %s\n",local_48);
      uVar11 = 0;
      goto LAB_08354ee6;
    }
    this_00 = operator_new(0x150);
                    /* try { // try from 083547ee to 083547f2 has its CatchHandler @ 083547f5 */
    Quest::Quest(this_00);
    local_414 = this_00;
    if (this_00 == (Quest *)0x0) {
                    /* try { // try from 0835483d to 08354889 has its CatchHandler @ 08354ec8 */
      cMyTrace::cMyTrace(local_3e4,"bool QuestList::load_list()",0x13ff,5);
      cMyTrace::operator()(local_3e4,"[%s][%d]","bool QuestList::load_list()",0x13ff);
      uVar11 = 0;
      goto LAB_08354ee6;
    }
    QuestScript::QuestScript(local_3d4,local_738);
                    /* try { // try from 0835489d to 083548a1 has its CatchHandler @ 083548a4 */
    Quest::set_quest(local_414,local_3d4);
                    /* try { // try from 083548c8 to 08354eb9 has its CatchHandler @ 08354ec8 */
    QuestScript::~QuestScript(local_3d4);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_c8,(int)&local_410);
    insert_NPC(this,local_654[0]);
    std::pair<int_const,Quest*>::pair<int&,Quest*&>(local_b8,(int *)local_738,&local_414);
    __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
    insert(local_c4,this);
    if (local_664 == 4) {
      std::pair<int_const,int>::pair<int&,int&>(local_ac,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_b0);
    }
    else if (local_664 == 5) {
      std::pair<int_const,int>::pair<int&,int&>(local_a0,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_a4);
    }
    else if (local_664 == 0) {
      std::pair<int_const,int>::pair<int&,int&>(local_94,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_98);
    }
    else if (local_664 == 2) {
      std::pair<int_const,int>::pair<int&,int&>(local_88,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_8c);
    }
    else if (local_664 == 6) {
      std::pair<int_const,int>::pair<int&,int&>(local_7c,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_80);
    }
    else if (local_664 == 3) {
      std::pair<int_const,int>::pair<int&,int&>(local_70,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_74);
    }
    else if (local_664 == 1) {
      std::pair<int_const,int>::pair<int&,int&>(local_64,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_68);
    }
    else if (local_664 == 8) {
      std::pair<int_const,int>::pair<int&,int&>(local_58,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_5c);
    }
    if (local_4e0 != -1) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0xd4),(int *)local_738);
    }
  }
  cVar1 = std::vector<int,std::allocator<int>>::empty();
  if (cVar1 != '\x01') {
    local_20 = 0;
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_42c,local_50);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar3 = __gnu_cxx::operator!=(local_42c,local_4c);
      if (!bVar3) break;
      puVar9 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_42c);
      local_24 = *puVar9;
      local_20 = find_quest((int)this);
      if (local_20 != 0) {
        if (*(char *)(local_20 + 0x108) == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x145c,
                     "Mail Quest Error (quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        iVar10 = std::string::size((string *)(local_20 + 0x10c));
        if (iVar10 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x1462,
                     "Mail Quest Error! mail title err(quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        iVar10 = std::string::size((string *)(local_20 + 0x110));
        if (iVar10 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x1467,
                     "Mail Quest Error! mail contents err(quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        bVar2 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(local_20 + 0x114));
        if ((bVar2 & 1) != 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x146c,
                     "Mail Quest Error! mail enclose item err(quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_42c);
    }
  }
  cVar1 = WongWork::CQuestClear::syncScript();
  if (cVar1 == '\x01') {
    uVar11 = 1;
  }
  else {
    LogManager::logFormat
              (1,"data_manager.cpp","bool QuestList::load_list()",0x1496,
               "WongWork::CQuestClear::syncScript() fail");
    uVar11 = 0;
  }
LAB_08354ee6:
  QuestScript::~QuestScript(local_738);
  return uVar11;
}

```

---

## select_mail_quest

```asm
// === 08355304 QuestList::select_mail_quest  [0x08355304-0x8355473] ===
 8355304:	55                   	push   %ebp
 8355305:	89 e5                	mov    %esp,%ebp
 8355307:	83 ec 38             	sub    $0x38,%esp
 835530a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8355311:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355314:	89 04 24             	mov    %eax,(%esp)
 8355317:	e8 9c 04 ee ff       	call   82357b8 <_ZNSt4listIiSaIiEE5clearEv>
 835531c:	8b 45 08             	mov    0x8(%ebp),%eax
 835531f:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 8355325:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8355328:	89 54 24 04          	mov    %edx,0x4(%esp)
 835532c:	89 04 24             	mov    %eax,(%esp)
 835532f:	e8 14 8f d3 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8355334:	83 ec 04             	sub    $0x4,%esp
 8355337:	8d 45 ec             	lea    -0x14(%ebp),%eax
 835533a:	89 44 24 04          	mov    %eax,0x4(%esp)
 835533e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8355341:	89 04 24             	mov    %eax,(%esp)
 8355344:	e8 a3 46 da ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8355349:	e9 d4 00 00 00       	jmp    8355422 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x11e>
 835534e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8355351:	89 04 24             	mov    %eax,(%esp)
 8355354:	e8 c3 46 da ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8355359:	8b 00                	mov    (%eax),%eax
 835535b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 835535e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8355361:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355365:	8b 45 08             	mov    0x8(%ebp),%eax
 8355368:	89 04 24             	mov    %eax,(%esp)
 835536b:	e8 ec 06 00 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 8355370:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8355373:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8355377:	0f 84 8d 00 00 00    	je     835540a <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x106>
 835537d:	8b 45 14             	mov    0x14(%ebp),%eax
 8355380:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355384:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8355387:	89 04 24             	mov    %eax,(%esp)
 835538a:	e8 f7 d9 ff ff       	call   8352d86 <_ZNK5Quest14check_possibleERK18stSelectQuestParam>
 835538f:	83 f0 01             	xor    $0x1,%eax
 8355392:	84 c0                	test   %al,%al
 8355394:	75 77                	jne    835540d <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x109>
 8355396:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8355399:	8b 55 10             	mov    0x10(%ebp),%edx
 835539c:	89 54 24 08          	mov    %edx,0x8(%esp)
 83553a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83553a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83553a7:	89 04 24             	mov    %eax,(%esp)
 83553aa:	e8 d5 fe ff ff       	call   8355284 <_ZN9QuestList11check_clearEiRKN8WongWork11CQuestClearE>
 83553af:	83 f0 01             	xor    $0x1,%eax
 83553b2:	84 c0                	test   %al,%al
 83553b4:	75 5a                	jne    8355410 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x10c>
 83553b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83553b9:	8b 55 10             	mov    0x10(%ebp),%edx
 83553bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 83553c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83553c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83553c7:	89 04 24             	mov    %eax,(%esp)
 83553ca:	e8 f9 fb ff ff       	call   8354fc8 <_ZN9QuestList17check_ahead_questEiRKN8WongWork11CQuestClearE>
 83553cf:	83 f0 01             	xor    $0x1,%eax
 83553d2:	84 c0                	test   %al,%al
 83553d4:	75 3d                	jne    8355413 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x10f>
 83553d6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83553d9:	8b 55 10             	mov    0x10(%ebp),%edx
 83553dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 83553e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83553e4:	8b 45 08             	mov    0x8(%ebp),%eax
 83553e7:	89 04 24             	mov    %eax,(%esp)
 83553ea:	e8 2f fd ff ff       	call   835511e <_ZN9QuestList16check_anti_questEiRKN8WongWork11CQuestClearE>
 83553ef:	83 f0 01             	xor    $0x1,%eax
 83553f2:	84 c0                	test   %al,%al
 83553f4:	75 20                	jne    8355416 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x112>
 83553f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83553f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83553fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355400:	89 04 24             	mov    %eax,(%esp)
 8355403:	e8 a6 77 f1 ff       	call   826cbae <_ZNSt4listIiSaIiEE9push_backERKi>
 8355408:	eb 0d                	jmp    8355417 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x113>
 835540a:	90                   	nop
 835540b:	eb 0a                	jmp    8355417 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x113>
 835540d:	90                   	nop
 835540e:	eb 07                	jmp    8355417 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x113>
 8355410:	90                   	nop
 8355411:	eb 04                	jmp    8355417 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x113>
 8355413:	90                   	nop
 8355414:	eb 01                	jmp    8355417 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x113>
 8355416:	90                   	nop
 8355417:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 835541a:	89 04 24             	mov    %eax,(%esp)
 835541d:	e8 e4 45 da ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 8355422:	8b 45 08             	mov    0x8(%ebp),%eax
 8355425:	8d 90 d4 00 00 00    	lea    0xd4(%eax),%edx
 835542b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 835542e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8355432:	89 04 24             	mov    %eax,(%esp)
 8355435:	e8 32 8e d3 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 835543a:	83 ec 04             	sub    $0x4,%esp
 835543d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8355440:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355444:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8355447:	89 04 24             	mov    %eax,(%esp)
 835544a:	e8 d9 df e3 ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 835544f:	84 c0                	test   %al,%al
 8355451:	0f 85 f7 fe ff ff    	jne    835534e <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x4a>
 8355457:	8b 45 0c             	mov    0xc(%ebp),%eax
 835545a:	89 04 24             	mov    %eax,(%esp)
 835545d:	e8 54 1f ee ff       	call   82373b6 <_ZNKSt4listIiSaIiEE5emptyEv>
 8355462:	84 c0                	test   %al,%al
 8355464:	74 07                	je     835546d <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x169>
 8355466:	b8 00 00 00 00       	mov    $0x0,%eax
 835546b:	eb 05                	jmp    8355472 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam+0x16e>
 835546d:	b8 01 00 00 00       	mov    $0x1,%eax
 8355472:	c9                   	leave
 8355473:	c3                   	ret

```

```c
// QuestList::select_mail_quest @ 0x8355304

/* QuestList::select_mail_quest(std::list<int, std::allocator<int> >&, WongWork::CQuestClear const&,
   stSelectQuestParam const&) */

bool __thiscall
QuestList::select_mail_quest
          (QuestList *this,list *param_1,CQuestClear *param_2,stSelectQuestParam *param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_20 [4];
  int local_1c;
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  Quest *local_10;
  
  local_10 = (Quest *)0x0;
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)param_1);
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_20,local_18);
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_14);
    if (!bVar1) break;
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_20);
    local_1c = *piVar3;
    local_10 = (Quest *)find_quest((int)this);
    if ((((local_10 != (Quest *)0x0) &&
         (cVar2 = Quest::check_possible(local_10,param_3), cVar2 == '\x01')) &&
        (cVar2 = check_clear(this,local_1c,param_2), cVar2 == '\x01')) &&
       ((cVar2 = check_ahead_quest(this,local_1c,param_2), cVar2 == '\x01' &&
        (cVar2 = check_anti_quest(this,local_1c,param_2), cVar2 == '\x01')))) {
      std::list<int,std::allocator<int>>::push_back
                ((list<int,std::allocator<int>> *)param_1,&local_1c);
    }
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_20);
  }
  cVar2 = std::list<int,std::allocator<int>>::empty((list<int,std::allocator<int>> *)param_1);
  return cVar2 == '\0';
}

```

---

## select_quest

```asm
// === 08355726 QuestList::select_quest  [0x08355726-0x835589d] ===
 8355726:	55                   	push   %ebp
 8355727:	89 e5                	mov    %esp,%ebp
 8355729:	83 ec 28             	sub    $0x28,%esp
 835572c:	8b 45 0c             	mov    0xc(%ebp),%eax
 835572f:	89 04 24             	mov    %eax,(%esp)
 8355732:	e8 81 00 ee ff       	call   82357b8 <_ZNSt4listIiSaIiEE5clearEv>
 8355737:	8b 45 08             	mov    0x8(%ebp),%eax
 835573a:	8d 50 14             	lea    0x14(%eax),%edx
 835573d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8355744:	00 
 8355745:	8b 45 14             	mov    0x14(%ebp),%eax
 8355748:	89 44 24 10          	mov    %eax,0x10(%esp)
 835574c:	8b 45 10             	mov    0x10(%ebp),%eax
 835574f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8355753:	89 54 24 08          	mov    %edx,0x8(%esp)
 8355757:	8b 45 0c             	mov    0xc(%ebp),%eax
 835575a:	89 44 24 04          	mov    %eax,0x4(%esp)
 835575e:	8b 45 08             	mov    0x8(%ebp),%eax
 8355761:	89 04 24             	mov    %eax,(%esp)
 8355764:	e8 03 fe ff ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 8355769:	8b 45 08             	mov    0x8(%ebp),%eax
 835576c:	8d 50 2c             	lea    0x2c(%eax),%edx
 835576f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8355776:	00 
 8355777:	8b 45 14             	mov    0x14(%ebp),%eax
 835577a:	89 44 24 10          	mov    %eax,0x10(%esp)
 835577e:	8b 45 10             	mov    0x10(%ebp),%eax
 8355781:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8355785:	89 54 24 08          	mov    %edx,0x8(%esp)
 8355789:	8b 45 0c             	mov    0xc(%ebp),%eax
 835578c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355790:	8b 45 08             	mov    0x8(%ebp),%eax
 8355793:	89 04 24             	mov    %eax,(%esp)
 8355796:	e8 d1 fd ff ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 835579b:	8b 45 08             	mov    0x8(%ebp),%eax
 835579e:	8d 50 44             	lea    0x44(%eax),%edx
 83557a1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 83557a8:	00 
 83557a9:	8b 45 14             	mov    0x14(%ebp),%eax
 83557ac:	89 44 24 10          	mov    %eax,0x10(%esp)
 83557b0:	8b 45 10             	mov    0x10(%ebp),%eax
 83557b3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83557b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 83557bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83557be:	89 44 24 04          	mov    %eax,0x4(%esp)
 83557c2:	8b 45 08             	mov    0x8(%ebp),%eax
 83557c5:	89 04 24             	mov    %eax,(%esp)
 83557c8:	e8 9f fd ff ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 83557cd:	8b 45 08             	mov    0x8(%ebp),%eax
 83557d0:	8d 90 bc 00 00 00    	lea    0xbc(%eax),%edx
 83557d6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 83557dd:	00 
 83557de:	8b 45 14             	mov    0x14(%ebp),%eax
 83557e1:	89 44 24 10          	mov    %eax,0x10(%esp)
 83557e5:	8b 45 10             	mov    0x10(%ebp),%eax
 83557e8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83557ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 83557f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83557f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83557f7:	8b 45 08             	mov    0x8(%ebp),%eax
 83557fa:	89 04 24             	mov    %eax,(%esp)
 83557fd:	e8 6a fd ff ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 8355802:	8b 45 08             	mov    0x8(%ebp),%eax
 8355805:	8d 50 5c             	lea    0x5c(%eax),%edx
 8355808:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 835580f:	00 
 8355810:	8b 45 14             	mov    0x14(%ebp),%eax
 8355813:	89 44 24 10          	mov    %eax,0x10(%esp)
 8355817:	8b 45 10             	mov    0x10(%ebp),%eax
 835581a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 835581e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8355822:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355825:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355829:	8b 45 08             	mov    0x8(%ebp),%eax
 835582c:	89 04 24             	mov    %eax,(%esp)
 835582f:	e8 38 fd ff ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 8355834:	8b 45 08             	mov    0x8(%ebp),%eax
 8355837:	8d 50 74             	lea    0x74(%eax),%edx
 835583a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8355841:	00 
 8355842:	8b 45 14             	mov    0x14(%ebp),%eax
 8355845:	89 44 24 10          	mov    %eax,0x10(%esp)
 8355849:	8b 45 10             	mov    0x10(%ebp),%eax
 835584c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8355850:	89 54 24 08          	mov    %edx,0x8(%esp)
 8355854:	8b 45 0c             	mov    0xc(%ebp),%eax
 8355857:	89 44 24 04          	mov    %eax,0x4(%esp)
 835585b:	8b 45 08             	mov    0x8(%ebp),%eax
 835585e:	89 04 24             	mov    %eax,(%esp)
 8355861:	e8 06 fd ff ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 8355866:	8b 45 08             	mov    0x8(%ebp),%eax
 8355869:	8d 90 8c 00 00 00    	lea    0x8c(%eax),%edx
 835586f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8355876:	00 
 8355877:	8b 45 14             	mov    0x14(%ebp),%eax
 835587a:	89 44 24 10          	mov    %eax,0x10(%esp)
 835587e:	8b 45 10             	mov    0x10(%ebp),%eax
 8355881:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8355885:	89 54 24 08          	mov    %edx,0x8(%esp)
 8355889:	8b 45 0c             	mov    0xc(%ebp),%eax
 835588c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8355890:	8b 45 08             	mov    0x8(%ebp),%eax
 8355893:	89 04 24             	mov    %eax,(%esp)
 8355896:	e8 d1 fc ff ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 835589b:	c9                   	leave
 835589c:	c3                   	ret
 835589d:	90                   	nop

```

```c
// QuestList::select_quest @ 0x8355726

/* QuestList::select_quest(std::list<int, std::allocator<int> >&, stSelectQuestParam&,
   WongWork::CQuestClear const&) */

void __thiscall
QuestList::select_quest
          (QuestList *this,list *param_1,stSelectQuestParam *param_2,CQuestClear *param_3)

{
  std::list<int,std::allocator<int>>::clear((list<int,std::allocator<int>> *)param_1);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x14),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x2c),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x44),param_2,param_3,true);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0xbc),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x5c),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x74),param_2,param_3,false);
  allowable_questlist_as_npc(this,param_1,(multimap *)(this + 0x8c),param_2,param_3,false);
  return;
}

```

---

## ~QuestList

```asm
// === 08353aa0 QuestList::~QuestList  [0x08353aa0-0x8353c85] ===
 8353aa0:	55                   	push   %ebp
 8353aa1:	89 e5                	mov    %esp,%ebp
 8353aa3:	56                   	push   %esi
 8353aa4:	53                   	push   %ebx
 8353aa5:	83 ec 10             	sub    $0x10,%esp
 8353aa8:	8b 45 08             	mov    0x8(%ebp),%eax
 8353aab:	89 04 24             	mov    %eax,(%esp)
 8353aae:	e8 d3 01 00 00       	call   8353c86 <_ZN9QuestList7destroyEv>
 8353ab3:	eb 1a                	jmp    8353acf <_ZN9QuestListD1Ev+0x2f>
 8353ab5:	89 d3                	mov    %edx,%ebx
 8353ab7:	89 c6                	mov    %eax,%esi
 8353ab9:	8b 45 08             	mov    0x8(%ebp),%eax
 8353abc:	05 e0 00 00 00       	add    $0xe0,%eax
 8353ac1:	89 04 24             	mov    %eax,(%esp)
 8353ac4:	e8 1f 73 ed ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 8353ac9:	89 f0                	mov    %esi,%eax
 8353acb:	89 da                	mov    %ebx,%edx
 8353acd:	eb 12                	jmp    8353ae1 <_ZN9QuestListD1Ev+0x41>
 8353acf:	8b 45 08             	mov    0x8(%ebp),%eax
 8353ad2:	05 e0 00 00 00       	add    $0xe0,%eax
 8353ad7:	89 04 24             	mov    %eax,(%esp)
 8353ada:	e8 09 73 ed ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 8353adf:	eb 1a                	jmp    8353afb <_ZN9QuestListD1Ev+0x5b>
 8353ae1:	89 d3                	mov    %edx,%ebx
 8353ae3:	89 c6                	mov    %eax,%esi
 8353ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 8353ae8:	05 d4 00 00 00       	add    $0xd4,%eax
 8353aed:	89 04 24             	mov    %eax,(%esp)
 8353af0:	e8 e5 02 d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8353af5:	89 f0                	mov    %esi,%eax
 8353af7:	89 da                	mov    %ebx,%edx
 8353af9:	eb 12                	jmp    8353b0d <_ZN9QuestListD1Ev+0x6d>
 8353afb:	8b 45 08             	mov    0x8(%ebp),%eax
 8353afe:	05 d4 00 00 00       	add    $0xd4,%eax
 8353b03:	89 04 24             	mov    %eax,(%esp)
 8353b06:	e8 cf 02 d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8353b0b:	eb 1a                	jmp    8353b27 <_ZN9QuestListD1Ev+0x87>
 8353b0d:	89 d3                	mov    %edx,%ebx
 8353b0f:	89 c6                	mov    %eax,%esi
 8353b11:	8b 45 08             	mov    0x8(%ebp),%eax
 8353b14:	05 bc 00 00 00       	add    $0xbc,%eax
 8353b19:	89 04 24             	mov    %eax,(%esp)
 8353b1c:	e8 27 15 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353b21:	89 f0                	mov    %esi,%eax
 8353b23:	89 da                	mov    %ebx,%edx
 8353b25:	eb 12                	jmp    8353b39 <_ZN9QuestListD1Ev+0x99>
 8353b27:	8b 45 08             	mov    0x8(%ebp),%eax
 8353b2a:	05 bc 00 00 00       	add    $0xbc,%eax
 8353b2f:	89 04 24             	mov    %eax,(%esp)
 8353b32:	e8 11 15 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353b37:	eb 1a                	jmp    8353b53 <_ZN9QuestListD1Ev+0xb3>
 8353b39:	89 d3                	mov    %edx,%ebx
 8353b3b:	89 c6                	mov    %eax,%esi
 8353b3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8353b40:	05 a4 00 00 00       	add    $0xa4,%eax
 8353b45:	89 04 24             	mov    %eax,(%esp)
 8353b48:	e8 fb 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353b4d:	89 f0                	mov    %esi,%eax
 8353b4f:	89 da                	mov    %ebx,%edx
 8353b51:	eb 12                	jmp    8353b65 <_ZN9QuestListD1Ev+0xc5>
 8353b53:	8b 45 08             	mov    0x8(%ebp),%eax
 8353b56:	05 a4 00 00 00       	add    $0xa4,%eax
 8353b5b:	89 04 24             	mov    %eax,(%esp)
 8353b5e:	e8 e5 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353b63:	eb 1a                	jmp    8353b7f <_ZN9QuestListD1Ev+0xdf>
 8353b65:	89 d3                	mov    %edx,%ebx
 8353b67:	89 c6                	mov    %eax,%esi
 8353b69:	8b 45 08             	mov    0x8(%ebp),%eax
 8353b6c:	05 8c 00 00 00       	add    $0x8c,%eax
 8353b71:	89 04 24             	mov    %eax,(%esp)
 8353b74:	e8 cf 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353b79:	89 f0                	mov    %esi,%eax
 8353b7b:	89 da                	mov    %ebx,%edx
 8353b7d:	eb 12                	jmp    8353b91 <_ZN9QuestListD1Ev+0xf1>
 8353b7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8353b82:	05 8c 00 00 00       	add    $0x8c,%eax
 8353b87:	89 04 24             	mov    %eax,(%esp)
 8353b8a:	e8 b9 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353b8f:	eb 18                	jmp    8353ba9 <_ZN9QuestListD1Ev+0x109>
 8353b91:	89 d3                	mov    %edx,%ebx
 8353b93:	89 c6                	mov    %eax,%esi
 8353b95:	8b 45 08             	mov    0x8(%ebp),%eax
 8353b98:	83 c0 74             	add    $0x74,%eax
 8353b9b:	89 04 24             	mov    %eax,(%esp)
 8353b9e:	e8 a5 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353ba3:	89 f0                	mov    %esi,%eax
 8353ba5:	89 da                	mov    %ebx,%edx
 8353ba7:	eb 10                	jmp    8353bb9 <_ZN9QuestListD1Ev+0x119>
 8353ba9:	8b 45 08             	mov    0x8(%ebp),%eax
 8353bac:	83 c0 74             	add    $0x74,%eax
 8353baf:	89 04 24             	mov    %eax,(%esp)
 8353bb2:	e8 91 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353bb7:	eb 18                	jmp    8353bd1 <_ZN9QuestListD1Ev+0x131>
 8353bb9:	89 d3                	mov    %edx,%ebx
 8353bbb:	89 c6                	mov    %eax,%esi
 8353bbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8353bc0:	83 c0 5c             	add    $0x5c,%eax
 8353bc3:	89 04 24             	mov    %eax,(%esp)
 8353bc6:	e8 7d 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353bcb:	89 f0                	mov    %esi,%eax
 8353bcd:	89 da                	mov    %ebx,%edx
 8353bcf:	eb 10                	jmp    8353be1 <_ZN9QuestListD1Ev+0x141>
 8353bd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8353bd4:	83 c0 5c             	add    $0x5c,%eax
 8353bd7:	89 04 24             	mov    %eax,(%esp)
 8353bda:	e8 69 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353bdf:	eb 18                	jmp    8353bf9 <_ZN9QuestListD1Ev+0x159>
 8353be1:	89 d3                	mov    %edx,%ebx
 8353be3:	89 c6                	mov    %eax,%esi
 8353be5:	8b 45 08             	mov    0x8(%ebp),%eax
 8353be8:	83 c0 44             	add    $0x44,%eax
 8353beb:	89 04 24             	mov    %eax,(%esp)
 8353bee:	e8 55 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353bf3:	89 f0                	mov    %esi,%eax
 8353bf5:	89 da                	mov    %ebx,%edx
 8353bf7:	eb 10                	jmp    8353c09 <_ZN9QuestListD1Ev+0x169>
 8353bf9:	8b 45 08             	mov    0x8(%ebp),%eax
 8353bfc:	83 c0 44             	add    $0x44,%eax
 8353bff:	89 04 24             	mov    %eax,(%esp)
 8353c02:	e8 41 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353c07:	eb 18                	jmp    8353c21 <_ZN9QuestListD1Ev+0x181>
 8353c09:	89 d3                	mov    %edx,%ebx
 8353c0b:	89 c6                	mov    %eax,%esi
 8353c0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8353c10:	83 c0 2c             	add    $0x2c,%eax
 8353c13:	89 04 24             	mov    %eax,(%esp)
 8353c16:	e8 2d 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353c1b:	89 f0                	mov    %esi,%eax
 8353c1d:	89 da                	mov    %ebx,%edx
 8353c1f:	eb 10                	jmp    8353c31 <_ZN9QuestListD1Ev+0x191>
 8353c21:	8b 45 08             	mov    0x8(%ebp),%eax
 8353c24:	83 c0 2c             	add    $0x2c,%eax
 8353c27:	89 04 24             	mov    %eax,(%esp)
 8353c2a:	e8 19 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353c2f:	eb 18                	jmp    8353c49 <_ZN9QuestListD1Ev+0x1a9>
 8353c31:	89 d3                	mov    %edx,%ebx
 8353c33:	89 c6                	mov    %eax,%esi
 8353c35:	8b 45 08             	mov    0x8(%ebp),%eax
 8353c38:	83 c0 14             	add    $0x14,%eax
 8353c3b:	89 04 24             	mov    %eax,(%esp)
 8353c3e:	e8 05 14 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353c43:	89 f0                	mov    %esi,%eax
 8353c45:	89 da                	mov    %ebx,%edx
 8353c47:	eb 10                	jmp    8353c59 <_ZN9QuestListD1Ev+0x1b9>
 8353c49:	8b 45 08             	mov    0x8(%ebp),%eax
 8353c4c:	83 c0 14             	add    $0x14,%eax
 8353c4f:	89 04 24             	mov    %eax,(%esp)
 8353c52:	e8 f1 13 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8353c57:	eb 1b                	jmp    8353c74 <_ZN9QuestListD1Ev+0x1d4>
 8353c59:	89 d3                	mov    %edx,%ebx
 8353c5b:	89 c6                	mov    %eax,%esi
 8353c5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8353c60:	89 04 24             	mov    %eax,(%esp)
 8353c63:	e8 64 6a 02 00       	call   837a6cc <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8353c68:	89 f0                	mov    %esi,%eax
 8353c6a:	89 da                	mov    %ebx,%edx
 8353c6c:	89 04 24             	mov    %eax,(%esp)
 8353c6f:	e8 dc fa 78 00       	call   8ae3750 <_Unwind_Resume>
 8353c74:	8b 45 08             	mov    0x8(%ebp),%eax
 8353c77:	89 04 24             	mov    %eax,(%esp)
 8353c7a:	e8 4d 6a 02 00       	call   837a6cc <_ZN9__gnu_cxx8hash_mapIiP5QuestNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 8353c7f:	83 c4 10             	add    $0x10,%esp
 8353c82:	5b                   	pop    %ebx
 8353c83:	5e                   	pop    %esi
 8353c84:	5d                   	pop    %ebp
 8353c85:	c3                   	ret

```

```c
// QuestList::~QuestList @ 0x8353aa0

/* QuestList::~QuestList() */

void __thiscall QuestList::~QuestList(QuestList *this)

{
                    /* try { // try from 08353aae to 08353ab2 has its CatchHandler @ 08353ab5 */
  destroy(this);
                    /* try { // try from 08353ada to 08353ade has its CatchHandler @ 08353ae1 */
  std::list<int,std::allocator<int>>::~list((list<int,std::allocator<int>> *)(this + 0xe0));
                    /* try { // try from 08353b06 to 08353b0a has its CatchHandler @ 08353b0d */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xd4));
                    /* try { // try from 08353b32 to 08353b36 has its CatchHandler @ 08353b39 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xbc));
                    /* try { // try from 08353b5e to 08353b62 has its CatchHandler @ 08353b65 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0xa4));
                    /* try { // try from 08353b8a to 08353b8e has its CatchHandler @ 08353b91 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x8c));
                    /* try { // try from 08353bb2 to 08353bb6 has its CatchHandler @ 08353bb9 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x74));
                    /* try { // try from 08353bda to 08353bde has its CatchHandler @ 08353be1 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x5c));
                    /* try { // try from 08353c02 to 08353c06 has its CatchHandler @ 08353c09 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x44));
                    /* try { // try from 08353c2a to 08353c2e has its CatchHandler @ 08353c31 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x2c));
                    /* try { // try from 08353c52 to 08353c56 has its CatchHandler @ 08353c59 */
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
             (this + 0x14));
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  ~hash_map((hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> *)
            this);
  return;
}

```

