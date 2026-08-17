# AradBonusItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## find

```asm
// === 081a252c AradBonusItem::find  [0x081a252c-0x81a25d1] ===
 81a252c:	55                   	push   %ebp
 81a252d:	89 e5                	mov    %esp,%ebp
 81a252f:	83 ec 38             	sub    $0x38,%esp
 81a2532:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2535:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81a2538:	8b 45 08             	mov    0x8(%ebp),%eax
 81a253b:	8d 48 04             	lea    0x4(%eax),%ecx
 81a253e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a2541:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81a2544:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2548:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a254c:	89 04 24             	mov    %eax,(%esp)
 81a254f:	e8 68 1f 00 00       	call   81a44bc <_ZNSt3mapIiN13AradBonusItem4DataESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 81a2554:	83 ec 04             	sub    $0x4,%esp
 81a2557:	8b 45 08             	mov    0x8(%ebp),%eax
 81a255a:	8d 50 04             	lea    0x4(%eax),%edx
 81a255d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a2560:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a2564:	89 04 24             	mov    %eax,(%esp)
 81a2567:	e8 7c 1f 00 00       	call   81a44e8 <_ZNSt3mapIiN13AradBonusItem4DataESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81a256c:	83 ec 04             	sub    $0x4,%esp
 81a256f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a2572:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2576:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a2579:	89 04 24             	mov    %eax,(%esp)
 81a257c:	e8 8d 1f 00 00       	call   81a450e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13AradBonusItem4DataEEEneERKS5_>
 81a2581:	84 c0                	test   %al,%al
 81a2583:	74 45                	je     81a25ca <_ZN13AradBonusItem4findEjRNS_4DataE+0x9e>
 81a2585:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a2588:	89 04 24             	mov    %eax,(%esp)
 81a258b:	e8 92 1f 00 00       	call   81a4522 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13AradBonusItem4DataEEEptEv>
 81a2590:	8b 50 04             	mov    0x4(%eax),%edx
 81a2593:	89 55 ec             	mov    %edx,-0x14(%ebp)
 81a2596:	8b 50 08             	mov    0x8(%eax),%edx
 81a2599:	89 55 f0             	mov    %edx,-0x10(%ebp)
 81a259c:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 81a25a0:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 81a25a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a25a7:	39 45 10             	cmp    %eax,0x10(%ebp)
 81a25aa:	74 17                	je     81a25c3 <_ZN13AradBonusItem4findEjRNS_4DataE+0x97>
 81a25ac:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81a25b3:	00 
 81a25b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a25b8:	8b 45 10             	mov    0x10(%ebp),%eax
 81a25bb:	89 04 24             	mov    %eax,(%esp)
 81a25be:	e8 dd b2 ed ff       	call   807d8a0 <memcpy@plt>
 81a25c3:	b8 01 00 00 00       	mov    $0x1,%eax
 81a25c8:	eb 05                	jmp    81a25cf <_ZN13AradBonusItem4findEjRNS_4DataE+0xa3>
 81a25ca:	b8 00 00 00 00       	mov    $0x0,%eax
 81a25cf:	c9                   	leave
 81a25d0:	c3                   	ret
 81a25d1:	90                   	nop

```

```c
// AradBonusItem::find @ 0x81a252c

/* AradBonusItem::find(unsigned int, AradBonusItem::Data&) */

undefined4 __thiscall AradBonusItem::find(AradBonusItem *this,uint param_1,Data *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,AradBonusItem::Data>> local_24 [4];
  uint local_20;
  map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  local_20 = param_1;
  std::
  map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
  ::find((int *)local_24);
  std::
  map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,AradBonusItem::Data>>::operator!=
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,AradBonusItem::Data>>::operator->(local_24);
    local_18 = *(undefined4 *)(iVar2 + 4);
    local_14 = *(undefined4 *)(iVar2 + 8);
    local_10 = *(undefined2 *)(iVar2 + 0xc);
    if (param_2 != (Data *)&local_18) {
      memcpy(param_2,(Data *)&local_18,10);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## parsing

```asm
// === 081a238a AradBonusItem::parsing  [0x081a238a-0x81a252b] ===
 81a238a:	55                   	push   %ebp
 81a238b:	89 e5                	mov    %esp,%ebp
 81a238d:	56                   	push   %esi
 81a238e:	53                   	push   %ebx
 81a238f:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 81a2395:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a239b:	89 04 24             	mov    %eax,(%esp)
 81a239e:	e8 d1 90 fd ff       	call   817b474 <_ZN11Arad_ScriptC1Ev>
 81a23a3:	c7 44 24 08 d8 c6 ba 	movl   $0x8bac6d8,0x8(%esp)
 81a23aa:	08 
 81a23ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a23ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a23b2:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a23b8:	89 04 24             	mov    %eax,(%esp)
 81a23bb:	e8 90 95 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a23c0:	83 f0 01             	xor    $0x1,%eax
 81a23c3:	84 c0                	test   %al,%al
 81a23c5:	74 0a                	je     81a23d1 <_ZN13AradBonusItem7parsingEPc+0x47>
 81a23c7:	bb 79 00 00 00       	mov    $0x79,%ebx
 81a23cc:	e9 40 01 00 00       	jmp    81a2511 <_ZN13AradBonusItem7parsingEPc+0x187>
 81a23d1:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a23d7:	89 04 24             	mov    %eax,(%esp)
 81a23da:	e8 9d 1e 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a23df:	85 c0                	test   %eax,%eax
 81a23e1:	0f 94 c0             	sete   %al
 81a23e4:	84 c0                	test   %al,%al
 81a23e6:	74 0a                	je     81a23f2 <_ZN13AradBonusItem7parsingEPc+0x68>
 81a23e8:	bb 7c 00 00 00       	mov    $0x7c,%ebx
 81a23ed:	e9 1f 01 00 00       	jmp    81a2511 <_ZN13AradBonusItem7parsingEPc+0x187>
 81a23f2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81a23f5:	89 04 24             	mov    %eax,(%esp)
 81a23f8:	e8 81 1c 00 00       	call   81a407e <_ZN13AradBonusItem4DataC1Ev>
 81a23fd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a2404:	e9 c7 00 00 00       	jmp    81a24d0 <_ZN13AradBonusItem7parsingEPc+0x146>
 81a2409:	c7 44 24 08 e3 c6 ba 	movl   $0x8bac6e3,0x8(%esp)
 81a2410:	08 
 81a2411:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2414:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2418:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a241e:	89 04 24             	mov    %eax,(%esp)
 81a2421:	e8 5a a3 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a2426:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81a2429:	c7 44 24 08 eb c6 ba 	movl   $0x8bac6eb,0x8(%esp)
 81a2430:	08 
 81a2431:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2434:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2438:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a243e:	89 04 24             	mov    %eax,(%esp)
 81a2441:	e8 3a a3 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a2446:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 81a244a:	c7 44 24 08 f6 c6 ba 	movl   $0x8bac6f6,0x8(%esp)
 81a2451:	08 
 81a2452:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2455:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2459:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a245f:	89 04 24             	mov    %eax,(%esp)
 81a2462:	e8 19 a3 fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a2467:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81a246a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a246d:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81a2470:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2474:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81a2477:	83 c2 04             	add    $0x4,%edx
 81a247a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a247e:	89 04 24             	mov    %eax,(%esp)
 81a2481:	e8 8b 1f 00 00       	call   81a4411 <_ZSt9make_pairIRjRN13AradBonusItem4DataEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 81a2486:	83 ec 04             	sub    $0x4,%esp
 81a2489:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a248c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2490:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81a2493:	89 04 24             	mov    %eax,(%esp)
 81a2496:	e8 b5 1f 00 00       	call   81a4450 <_ZNSt4pairIKiN13AradBonusItem4DataEEC1IjS2_EEOS_IT_T0_E>
 81a249b:	8b 45 08             	mov    0x8(%ebp),%eax
 81a249e:	8d 48 04             	lea    0x4(%eax),%ecx
 81a24a1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81a24a4:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81a24a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a24ab:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a24af:	89 04 24             	mov    %eax,(%esp)
 81a24b2:	e8 d9 1f 00 00       	call   81a4490 <_ZNSt3mapIiN13AradBonusItem4DataESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 81a24b7:	83 ec 04             	sub    $0x4,%esp
 81a24ba:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 81a24be:	83 f0 01             	xor    $0x1,%eax
 81a24c1:	84 c0                	test   %al,%al
 81a24c3:	74 07                	je     81a24cc <_ZN13AradBonusItem7parsingEPc+0x142>
 81a24c5:	bb 88 00 00 00       	mov    $0x88,%ebx
 81a24ca:	eb 45                	jmp    81a2511 <_ZN13AradBonusItem7parsingEPc+0x187>
 81a24cc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a24d0:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a24d6:	89 04 24             	mov    %eax,(%esp)
 81a24d9:	e8 9e 1d 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a24de:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a24e1:	0f 9f c0             	setg   %al
 81a24e4:	84 c0                	test   %al,%al
 81a24e6:	0f 85 1d ff ff ff    	jne    81a2409 <_ZN13AradBonusItem7parsingEPc+0x7f>
 81a24ec:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a24f1:	eb 1e                	jmp    81a2511 <_ZN13AradBonusItem7parsingEPc+0x187>
 81a24f3:	89 d3                	mov    %edx,%ebx
 81a24f5:	89 c6                	mov    %eax,%esi
 81a24f7:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a24fd:	89 04 24             	mov    %eax,(%esp)
 81a2500:	e8 1f 91 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a2505:	89 f0                	mov    %esi,%eax
 81a2507:	89 da                	mov    %ebx,%edx
 81a2509:	89 04 24             	mov    %eax,(%esp)
 81a250c:	e8 3f 12 94 00       	call   8ae3750 <_Unwind_Resume>
 81a2511:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a2517:	89 04 24             	mov    %eax,(%esp)
 81a251a:	e8 05 91 fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a251f:	89 d8                	mov    %ebx,%eax
 81a2521:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a2524:	83 c4 00             	add    $0x0,%esp
 81a2527:	5b                   	pop    %ebx
 81a2528:	5e                   	pop    %esi
 81a2529:	5d                   	pop    %ebp
 81a252a:	c3                   	ret
 81a252b:	90                   	nop

```

```c
// AradBonusItem::parsing @ 0x81a238a

/* AradBonusItem::parsing(char*) */

undefined4 __thiscall AradBonusItem::parsing(AradBonusItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Arad_Script local_98 [84];
  pair local_44 [4];
  char local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  pair<int_const,AradBonusItem::Data> local_30 [16];
  uint local_20 [4];
  int local_10;
  
  Arad_Script::Arad_Script(local_98);
                    /* try { // try from 081a23bb to 081a24b6 has its CatchHandler @ 081a24f3 */
  cVar1 = Arad_Script::Load(local_98,param_1,"bonus_item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_98);
    if (iVar2 == 0) {
      uVar3 = 0x7c;
    }
    else {
      Data::Data((Data *)&local_3c);
      local_10 = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_98);
        if (iVar2 <= local_10) break;
        local_38 = Arad_Script::GetInt(local_98,local_10,"item_id");
        local_34 = Arad_Script::GetInt(local_98,local_10,"bonus_type");
        local_3c = Arad_Script::GetInt(local_98,local_10,"bonus_value");
        std::make_pair<unsigned_int&,AradBonusItem::Data&>(local_20,(Data *)&local_38);
        std::pair<int_const,AradBonusItem::Data>::pair<unsigned_int,AradBonusItem::Data>
                  (local_30,(pair *)local_20);
        std::
        map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
        ::insert(local_44);
        if (local_40 != '\x01') {
          uVar3 = 0x88;
          goto LAB_081a2511;
        }
        local_10 = local_10 + 1;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x79;
  }
LAB_081a2511:
  Arad_Script::~Arad_Script(local_98);
  return uVar3;
}

```

