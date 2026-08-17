# CCharacList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CCharacList

```asm
// === 083493ea CCharacList::CCharacList  [0x083493ea-0x834945d] ===
 83493ea:	55                   	push   %ebp
 83493eb:	89 e5                	mov    %esp,%ebp
 83493ed:	57                   	push   %edi
 83493ee:	56                   	push   %esi
 83493ef:	53                   	push   %ebx
 83493f0:	83 ec 2c             	sub    $0x2c,%esp
 83493f3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 83493f6:	89 df                	mov    %ebx,%edi
 83493f8:	be 0a 00 00 00       	mov    $0xa,%esi
 83493fd:	eb 11                	jmp    8349410 <_ZN11CCharacListC1Ev+0x26>
 83493ff:	89 3c 24             	mov    %edi,(%esp)
 8349402:	e8 85 ee ff ff       	call   834828c <_ZN10CCharacterC1Ev>
 8349407:	81 c7 dc 07 00 00    	add    $0x7dc,%edi
 834940d:	83 ee 01             	sub    $0x1,%esi
 8349410:	83 fe ff             	cmp    $0xffffffff,%esi
 8349413:	0f 95 c0             	setne  %al
 8349416:	84 c0                	test   %al,%al
 8349418:	75 e5                	jne    83493ff <_ZN11CCharacListC1Ev+0x15>
 834941a:	eb 3a                	jmp    8349456 <_ZN11CCharacListC1Ev+0x6c>
 834941c:	89 d7                	mov    %edx,%edi
 834941e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8349421:	85 db                	test   %ebx,%ebx
 8349423:	74 24                	je     8349449 <_ZN11CCharacListC1Ev+0x5f>
 8349425:	b8 0a 00 00 00       	mov    $0xa,%eax
 834942a:	29 f0                	sub    %esi,%eax
 834942c:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 8349432:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8349435:	39 de                	cmp    %ebx,%esi
 8349437:	74 10                	je     8349449 <_ZN11CCharacListC1Ev+0x5f>
 8349439:	81 ee dc 07 00 00    	sub    $0x7dc,%esi
 834943f:	89 34 24             	mov    %esi,(%esp)
 8349442:	e8 e3 ef ff ff       	call   834842a <_ZN10CCharacterD1Ev>
 8349447:	eb ec                	jmp    8349435 <_ZN11CCharacListC1Ev+0x4b>
 8349449:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834944c:	89 fa                	mov    %edi,%edx
 834944e:	89 04 24             	mov    %eax,(%esp)
 8349451:	e8 fa a2 79 00       	call   8ae3750 <_Unwind_Resume>
 8349456:	83 c4 2c             	add    $0x2c,%esp
 8349459:	5b                   	pop    %ebx
 834945a:	5e                   	pop    %esi
 834945b:	5f                   	pop    %edi
 834945c:	5d                   	pop    %ebp
 834945d:	c3                   	ret

```

```c
// CCharacList::CCharacList @ 0x83493ea

/* CCharacList::CCharacList() */

void __thiscall CCharacList::CCharacList(CCharacList *this)

{
  int iVar1;
  
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08349402 to 08349406 has its CatchHandler @ 0834941c */
    CCharacter::CCharacter((CCharacter *)this);
    this = this + 0x7dc;
  }
  return;
}

```

---

## destroy

```asm
// === 083494da CCharacList::destroy  [0x083494da-0x8349513] ===
 83494da:	55                   	push   %ebp
 83494db:	89 e5                	mov    %esp,%ebp
 83494dd:	83 ec 28             	sub    $0x28,%esp
 83494e0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83494e7:	eb 1e                	jmp    8349507 <_ZN11CCharacList7destroyEv+0x2d>
 83494e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83494ec:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 83494f2:	03 45 08             	add    0x8(%ebp),%eax
 83494f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83494f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83494fb:	89 04 24             	mov    %eax,(%esp)
 83494fe:	e8 c1 f0 ff ff       	call   83485c4 <_ZN10CCharacter7destroyEv>
 8349503:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8349507:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
 834950b:	0f 9e c0             	setle  %al
 834950e:	84 c0                	test   %al,%al
 8349510:	75 d7                	jne    83494e9 <_ZN11CCharacList7destroyEv+0xf>
 8349512:	c9                   	leave
 8349513:	c3                   	ret

```

```c
// CCharacList::destroy @ 0x83494da

/* CCharacList::destroy() */

void __thiscall CCharacList::destroy(CCharacList *this)

{
  int local_14;
  
  for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
    CCharacter::destroy((CCharacter *)(this + local_14 * 0x7dc));
  }
  return;
}

```

---

## init

```asm
// === 08349514 CCharacList::init  [0x08349514-0x8349671] ===
 8349514:	55                   	push   %ebp
 8349515:	89 e5                	mov    %esp,%ebp
 8349517:	56                   	push   %esi
 8349518:	53                   	push   %ebx
 8349519:	81 ec 50 0c 00 00    	sub    $0xc50,%esp
 834951f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8349526:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8349529:	89 04 24             	mov    %eax,(%esp)
 834952c:	e8 a7 a7 f6 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 8349531:	8d 85 cc f3 ff ff    	lea    -0xc34(%ebp),%eax
 8349537:	89 04 24             	mov    %eax,(%esp)
 834953a:	e8 09 ee 01 00       	call   8368348 <_ZN17STCharacterScriptC1Ev>
 834953f:	8d 85 c4 f3 ff ff    	lea    -0xc3c(%ebp),%eax
 8349545:	c7 44 24 04 40 e9 4f 	movl   $0x94fe940,0x4(%esp)
 834954c:	09 
 834954d:	89 04 24             	mov    %eax,(%esp)
 8349550:	e8 9d cb d9 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8349555:	83 ec 04             	sub    $0x4,%esp
 8349558:	8b 85 c4 f3 ff ff    	mov    -0xc3c(%ebp),%eax
 834955e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8349561:	e9 9a 00 00 00       	jmp    8349600 <_ZN11CCharacList4initEv+0xec>
 8349566:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8349569:	89 04 24             	mov    %eax,(%esp)
 834956c:	e8 47 cc d9 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 8349571:	83 c0 04             	add    $0x4,%eax
 8349574:	89 04 24             	mov    %eax,(%esp)
 8349577:	e8 74 cf 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 834957c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834957f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8349583:	0f 84 a9 00 00 00    	je     8349632 <_ZN11CCharacList4initEv+0x11e>
 8349589:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834958c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8349590:	8d 85 cc f3 ff ff    	lea    -0xc34(%ebp),%eax
 8349596:	89 04 24             	mov    %eax,(%esp)
 8349599:	e8 68 38 6c 00       	call   8a0ce06 <_Z21ImportCharacterScriptP17STCharacterScriptPKc>
 834959e:	83 f0 01             	xor    $0x1,%eax
 83495a1:	84 c0                	test   %al,%al
 83495a3:	74 1d                	je     83495c2 <_ZN11CCharacList4initEv+0xae>
 83495a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83495a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83495ac:	c7 04 24 2f f8 c2 08 	movl   $0x8c2f82f,(%esp)
 83495b3:	e8 a8 45 d3 ff       	call   807db60 <printf@plt>
 83495b8:	bb 00 00 00 00       	mov    $0x0,%ebx
 83495bd:	e9 96 00 00 00       	jmp    8349658 <_ZN11CCharacList4initEv+0x144>
 83495c2:	8b 85 cc f3 ff ff    	mov    -0xc34(%ebp),%eax
 83495c8:	69 c0 dc 07 00 00    	imul   $0x7dc,%eax,%eax
 83495ce:	03 45 08             	add    0x8(%ebp),%eax
 83495d1:	8d 95 cc f3 ff ff    	lea    -0xc34(%ebp),%edx
 83495d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 83495db:	89 04 24             	mov    %eax,(%esp)
 83495de:	e8 b1 f2 ff ff       	call   8348894 <_ZN10CCharacter8set_dataEP17STCharacterScript>
 83495e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83495e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83495ed:	00 
 83495ee:	8d 55 e8             	lea    -0x18(%ebp),%edx
 83495f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 83495f5:	89 04 24             	mov    %eax,(%esp)
 83495f8:	e8 e7 80 ff ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 83495fd:	83 ec 04             	sub    $0x4,%esp
 8349600:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8349603:	c7 44 24 04 40 e9 4f 	movl   $0x94fe940,0x4(%esp)
 834960a:	09 
 834960b:	89 04 24             	mov    %eax,(%esp)
 834960e:	e8 05 cb d9 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8349613:	83 ec 04             	sub    $0x4,%esp
 8349616:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8349619:	89 44 24 04          	mov    %eax,0x4(%esp)
 834961d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8349620:	89 04 24             	mov    %eax,(%esp)
 8349623:	e8 16 cb d9 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 8349628:	84 c0                	test   %al,%al
 834962a:	0f 85 36 ff ff ff    	jne    8349566 <_ZN11CCharacList4initEv+0x52>
 8349630:	eb 01                	jmp    8349633 <_ZN11CCharacList4initEv+0x11f>
 8349632:	90                   	nop
 8349633:	bb 01 00 00 00       	mov    $0x1,%ebx
 8349638:	eb 1e                	jmp    8349658 <_ZN11CCharacList4initEv+0x144>
 834963a:	89 d3                	mov    %edx,%ebx
 834963c:	89 c6                	mov    %eax,%esi
 834963e:	8d 85 cc f3 ff ff    	lea    -0xc34(%ebp),%eax
 8349644:	89 04 24             	mov    %eax,(%esp)
 8349647:	e8 16 cd 02 00       	call   8376362 <_ZN17STCharacterScriptD1Ev>
 834964c:	89 f0                	mov    %esi,%eax
 834964e:	89 da                	mov    %ebx,%edx
 8349650:	89 04 24             	mov    %eax,(%esp)
 8349653:	e8 f8 a0 79 00       	call   8ae3750 <_Unwind_Resume>
 8349658:	8d 85 cc f3 ff ff    	lea    -0xc34(%ebp),%eax
 834965e:	89 04 24             	mov    %eax,(%esp)
 8349661:	e8 fc cc 02 00       	call   8376362 <_ZN17STCharacterScriptD1Ev>
 8349666:	89 d8                	mov    %ebx,%eax
 8349668:	8d 65 f8             	lea    -0x8(%ebp),%esp
 834966b:	83 c4 00             	add    $0x0,%esp
 834966e:	5b                   	pop    %ebx
 834966f:	5e                   	pop    %esi
 8349670:	5d                   	pop    %ebp
 8349671:	c3                   	ret

```

```c
// CCharacList::init @ 0x8349514

/* CCharacList::init() */

undefined4 __thiscall CCharacList::init(CCharacList *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c40 [2];
  int local_c38 [775];
  undefined4 local_1c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_14 [4];
  char *local_10;
  
  local_10 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_1c);
  STCharacterScript::STCharacterScript((STCharacterScript *)local_c38);
                    /* try { // try from 08349550 to 08349612 has its CatchHandler @ 0834963a */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_c40);
  local_1c = local_c40[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_1c);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = ImportCharacterScript((STCharacterScript *)local_c38,local_10);
    if (cVar1 != '\x01') {
      printf("Charac Script Error: %s\n",local_10);
      uVar3 = 0;
      goto LAB_08349658;
    }
    CCharacter::set_data((CCharacter *)(this + local_c38[0] * 0x7dc),(STCharacterScript *)local_c38)
    ;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_14,(int)&local_1c);
  }
  uVar3 = 1;
LAB_08349658:
  STCharacterScript::~STCharacterScript((STCharacterScript *)local_c38);
  return uVar3;
}

```

---

## ~CCharacList

```asm
// === 0834945e CCharacList::~CCharacList  [0x0834945e-0x83494d9] ===
 834945e:	55                   	push   %ebp
 834945f:	89 e5                	mov    %esp,%ebp
 8349461:	57                   	push   %edi
 8349462:	56                   	push   %esi
 8349463:	53                   	push   %ebx
 8349464:	83 ec 1c             	sub    $0x1c,%esp
 8349467:	8b 45 08             	mov    0x8(%ebp),%eax
 834946a:	89 04 24             	mov    %eax,(%esp)
 834946d:	e8 68 00 00 00       	call   83494da <_ZN11CCharacList7destroyEv>
 8349472:	eb 37                	jmp    83494ab <_ZN11CCharacListD1Ev+0x4d>
 8349474:	89 d6                	mov    %edx,%esi
 8349476:	89 c7                	mov    %eax,%edi
 8349478:	8b 45 08             	mov    0x8(%ebp),%eax
 834947b:	85 c0                	test   %eax,%eax
 834947d:	74 20                	je     834949f <_ZN11CCharacListD1Ev+0x41>
 834947f:	8b 45 08             	mov    0x8(%ebp),%eax
 8349482:	8d 98 74 56 00 00    	lea    0x5674(%eax),%ebx
 8349488:	8b 45 08             	mov    0x8(%ebp),%eax
 834948b:	39 c3                	cmp    %eax,%ebx
 834948d:	74 10                	je     834949f <_ZN11CCharacListD1Ev+0x41>
 834948f:	81 eb dc 07 00 00    	sub    $0x7dc,%ebx
 8349495:	89 1c 24             	mov    %ebx,(%esp)
 8349498:	e8 8d ef ff ff       	call   834842a <_ZN10CCharacterD1Ev>
 834949d:	eb e9                	jmp    8349488 <_ZN11CCharacListD1Ev+0x2a>
 834949f:	89 f8                	mov    %edi,%eax
 83494a1:	89 f2                	mov    %esi,%edx
 83494a3:	89 04 24             	mov    %eax,(%esp)
 83494a6:	e8 a5 a2 79 00       	call   8ae3750 <_Unwind_Resume>
 83494ab:	8b 45 08             	mov    0x8(%ebp),%eax
 83494ae:	85 c0                	test   %eax,%eax
 83494b0:	74 20                	je     83494d2 <_ZN11CCharacListD1Ev+0x74>
 83494b2:	8b 45 08             	mov    0x8(%ebp),%eax
 83494b5:	8d 98 74 56 00 00    	lea    0x5674(%eax),%ebx
 83494bb:	8b 45 08             	mov    0x8(%ebp),%eax
 83494be:	39 c3                	cmp    %eax,%ebx
 83494c0:	74 10                	je     83494d2 <_ZN11CCharacListD1Ev+0x74>
 83494c2:	81 eb dc 07 00 00    	sub    $0x7dc,%ebx
 83494c8:	89 1c 24             	mov    %ebx,(%esp)
 83494cb:	e8 5a ef ff ff       	call   834842a <_ZN10CCharacterD1Ev>
 83494d0:	eb e9                	jmp    83494bb <_ZN11CCharacListD1Ev+0x5d>
 83494d2:	83 c4 1c             	add    $0x1c,%esp
 83494d5:	5b                   	pop    %ebx
 83494d6:	5e                   	pop    %esi
 83494d7:	5f                   	pop    %edi
 83494d8:	5d                   	pop    %ebp
 83494d9:	c3                   	ret

```

```c
// CCharacList::~CCharacList @ 0x834945e

/* CCharacList::~CCharacList() */

void __thiscall CCharacList::~CCharacList(CCharacList *this)

{
  CCharacter *this_00;
  
                    /* try { // try from 0834946d to 08349471 has its CatchHandler @ 08349474 */
  destroy(this);
  if (this != (CCharacList *)0x0) {
    this_00 = (CCharacter *)(this + 0x5674);
    while (this_00 != (CCharacter *)this) {
      this_00 = this_00 + -0x7dc;
      CCharacter::~CCharacter(this_00);
    }
  }
  return;
}

```

