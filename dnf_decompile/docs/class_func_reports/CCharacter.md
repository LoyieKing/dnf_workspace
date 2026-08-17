# CCharacter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CCharacter

```asm
// === 0834828c CCharacter::CCharacter  [0x0834828c-0x8348429] ===
 834828c:	55                   	push   %ebp
 834828d:	89 e5                	mov    %esp,%ebp
 834828f:	57                   	push   %edi
 8348290:	56                   	push   %esi
 8348291:	53                   	push   %ebx
 8348292:	83 ec 2c             	sub    $0x2c,%esp
 8348295:	8b 45 08             	mov    0x8(%ebp),%eax
 8348298:	89 04 24             	mov    %eax,(%esp)
 834829b:	e8 b4 ff ff ff       	call   8348254 <_ZN15_Additioal_infoC1Ev>
 83482a0:	8b 45 08             	mov    0x8(%ebp),%eax
 83482a3:	83 c0 52             	add    $0x52,%eax
 83482a6:	89 c3                	mov    %eax,%ebx
 83482a8:	be 05 00 00 00       	mov    $0x5,%esi
 83482ad:	eb 0e                	jmp    83482bd <_ZN10CCharacterC1Ev+0x31>
 83482af:	89 1c 24             	mov    %ebx,(%esp)
 83482b2:	e8 9d ff ff ff       	call   8348254 <_ZN15_Additioal_infoC1Ev>
 83482b7:	83 c3 52             	add    $0x52,%ebx
 83482ba:	83 ee 01             	sub    $0x1,%esi
 83482bd:	83 fe ff             	cmp    $0xffffffff,%esi
 83482c0:	0f 95 c0             	setne  %al
 83482c3:	84 c0                	test   %al,%al
 83482c5:	75 e8                	jne    83482af <_ZN10CCharacterC1Ev+0x23>
 83482c7:	8b 45 08             	mov    0x8(%ebp),%eax
 83482ca:	8d b0 40 02 00 00    	lea    0x240(%eax),%esi
 83482d0:	89 f7                	mov    %esi,%edi
 83482d2:	bb 06 00 00 00       	mov    $0x6,%ebx
 83482d7:	eb 0e                	jmp    83482e7 <_ZN10CCharacterC1Ev+0x5b>
 83482d9:	89 3c 24             	mov    %edi,(%esp)
 83482dc:	e8 f5 c6 de ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 83482e1:	83 c7 0c             	add    $0xc,%edi
 83482e4:	83 eb 01             	sub    $0x1,%ebx
 83482e7:	83 fb ff             	cmp    $0xffffffff,%ebx
 83482ea:	0f 95 c0             	setne  %al
 83482ed:	84 c0                	test   %al,%al
 83482ef:	75 e8                	jne    83482d9 <_ZN10CCharacterC1Ev+0x4d>
 83482f1:	eb 3c                	jmp    834832f <_ZN10CCharacterC1Ev+0xa3>
 83482f3:	89 d7                	mov    %edx,%edi
 83482f5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 83482f8:	85 f6                	test   %esi,%esi
 83482fa:	74 26                	je     8348322 <_ZN10CCharacterC1Ev+0x96>
 83482fc:	b8 06 00 00 00       	mov    $0x6,%eax
 8348301:	29 d8                	sub    %ebx,%eax
 8348303:	89 c2                	mov    %eax,%edx
 8348305:	89 d0                	mov    %edx,%eax
 8348307:	01 c0                	add    %eax,%eax
 8348309:	01 d0                	add    %edx,%eax
 834830b:	c1 e0 02             	shl    $0x2,%eax
 834830e:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8348311:	39 f3                	cmp    %esi,%ebx
 8348313:	74 0d                	je     8348322 <_ZN10CCharacterC1Ev+0x96>
 8348315:	83 eb 0c             	sub    $0xc,%ebx
 8348318:	89 1c 24             	mov    %ebx,(%esp)
 834831b:	e8 ca c6 de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8348320:	eb ef                	jmp    8348311 <_ZN10CCharacterC1Ev+0x85>
 8348322:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8348325:	89 fa                	mov    %edi,%edx
 8348327:	89 04 24             	mov    %eax,(%esp)
 834832a:	e8 21 b4 79 00       	call   8ae3750 <_Unwind_Resume>
 834832f:	8b 45 08             	mov    0x8(%ebp),%eax
 8348332:	8d b0 94 02 00 00    	lea    0x294(%eax),%esi
 8348338:	89 f7                	mov    %esi,%edi
 834833a:	bb 06 00 00 00       	mov    $0x6,%ebx
 834833f:	eb 11                	jmp    8348352 <_ZN10CCharacterC1Ev+0xc6>
 8348341:	89 3c 24             	mov    %edi,(%esp)
 8348344:	e8 eb b5 02 00       	call   8373934 <_ZN20STSecondGrowTypeInfoC1Ev>
 8348349:	81 c7 c0 00 00 00    	add    $0xc0,%edi
 834834f:	83 eb 01             	sub    $0x1,%ebx
 8348352:	83 fb ff             	cmp    $0xffffffff,%ebx
 8348355:	0f 95 c0             	setne  %al
 8348358:	84 c0                	test   %al,%al
 834835a:	75 e5                	jne    8348341 <_ZN10CCharacterC1Ev+0xb5>
 834835c:	eb 39                	jmp    8348397 <_ZN10CCharacterC1Ev+0x10b>
 834835e:	89 d7                	mov    %edx,%edi
 8348360:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8348363:	85 f6                	test   %esi,%esi
 8348365:	74 29                	je     8348390 <_ZN10CCharacterC1Ev+0x104>
 8348367:	b8 06 00 00 00       	mov    $0x6,%eax
 834836c:	29 d8                	sub    %ebx,%eax
 834836e:	89 c2                	mov    %eax,%edx
 8348370:	89 d0                	mov    %edx,%eax
 8348372:	01 c0                	add    %eax,%eax
 8348374:	01 d0                	add    %edx,%eax
 8348376:	c1 e0 06             	shl    $0x6,%eax
 8348379:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 834837c:	39 f3                	cmp    %esi,%ebx
 834837e:	74 10                	je     8348390 <_ZN10CCharacterC1Ev+0x104>
 8348380:	81 eb c0 00 00 00    	sub    $0xc0,%ebx
 8348386:	89 1c 24             	mov    %ebx,(%esp)
 8348389:	e8 96 df 02 00       	call   8376324 <_ZN20STSecondGrowTypeInfoD1Ev>
 834838e:	eb ec                	jmp    834837c <_ZN10CCharacterC1Ev+0xf0>
 8348390:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8348393:	89 fa                	mov    %edi,%edx
 8348395:	eb 4b                	jmp    83483e2 <_ZN10CCharacterC1Ev+0x156>
 8348397:	8b 45 08             	mov    0x8(%ebp),%eax
 834839a:	89 04 24             	mov    %eax,(%esp)
 834839d:	e8 8c 01 00 00       	call   834852e <_ZN10CCharacter5clearEv>
 83483a2:	eb 7e                	jmp    8348422 <_ZN10CCharacterC1Ev+0x196>
 83483a4:	89 d6                	mov    %edx,%esi
 83483a6:	89 c7                	mov    %eax,%edi
 83483a8:	8b 45 08             	mov    0x8(%ebp),%eax
 83483ab:	05 94 02 00 00       	add    $0x294,%eax
 83483b0:	85 c0                	test   %eax,%eax
 83483b2:	74 2a                	je     83483de <_ZN10CCharacterC1Ev+0x152>
 83483b4:	8b 45 08             	mov    0x8(%ebp),%eax
 83483b7:	05 94 02 00 00       	add    $0x294,%eax
 83483bc:	8d 98 40 05 00 00    	lea    0x540(%eax),%ebx
 83483c2:	8b 45 08             	mov    0x8(%ebp),%eax
 83483c5:	05 94 02 00 00       	add    $0x294,%eax
 83483ca:	39 c3                	cmp    %eax,%ebx
 83483cc:	74 10                	je     83483de <_ZN10CCharacterC1Ev+0x152>
 83483ce:	81 eb c0 00 00 00    	sub    $0xc0,%ebx
 83483d4:	89 1c 24             	mov    %ebx,(%esp)
 83483d7:	e8 48 df 02 00       	call   8376324 <_ZN20STSecondGrowTypeInfoD1Ev>
 83483dc:	eb e4                	jmp    83483c2 <_ZN10CCharacterC1Ev+0x136>
 83483de:	89 f8                	mov    %edi,%eax
 83483e0:	89 f2                	mov    %esi,%edx
 83483e2:	89 d6                	mov    %edx,%esi
 83483e4:	89 c7                	mov    %eax,%edi
 83483e6:	8b 45 08             	mov    0x8(%ebp),%eax
 83483e9:	05 40 02 00 00       	add    $0x240,%eax
 83483ee:	85 c0                	test   %eax,%eax
 83483f0:	74 24                	je     8348416 <_ZN10CCharacterC1Ev+0x18a>
 83483f2:	8b 45 08             	mov    0x8(%ebp),%eax
 83483f5:	05 40 02 00 00       	add    $0x240,%eax
 83483fa:	8d 58 54             	lea    0x54(%eax),%ebx
 83483fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8348400:	05 40 02 00 00       	add    $0x240,%eax
 8348405:	39 c3                	cmp    %eax,%ebx
 8348407:	74 0d                	je     8348416 <_ZN10CCharacterC1Ev+0x18a>
 8348409:	83 eb 0c             	sub    $0xc,%ebx
 834840c:	89 1c 24             	mov    %ebx,(%esp)
 834840f:	e8 d6 c5 de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8348414:	eb e7                	jmp    83483fd <_ZN10CCharacterC1Ev+0x171>
 8348416:	89 f8                	mov    %edi,%eax
 8348418:	89 f2                	mov    %esi,%edx
 834841a:	89 04 24             	mov    %eax,(%esp)
 834841d:	e8 2e b3 79 00       	call   8ae3750 <_Unwind_Resume>
 8348422:	83 c4 2c             	add    $0x2c,%esp
 8348425:	5b                   	pop    %ebx
 8348426:	5e                   	pop    %esi
 8348427:	5f                   	pop    %edi
 8348428:	5d                   	pop    %ebp
 8348429:	c3                   	ret

```

```c
// CCharacter::CCharacter @ 0x834828c

/* CCharacter::CCharacter() */

void __thiscall CCharacter::CCharacter(CCharacter *this)

{
  _Additioal_info *this_00;
  int iVar1;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *this_01;
  STSecondGrowTypeInfo *this_02;
  
  _Additioal_info::_Additioal_info((_Additioal_info *)this);
  this_00 = (_Additioal_info *)this;
  for (iVar1 = 5; this_00 = this_00 + 0x52, iVar1 != -1; iVar1 = iVar1 + -1) {
    _Additioal_info::_Additioal_info(this_00);
  }
  this_01 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x240);
  for (iVar1 = 6; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 083482dc to 083482e0 has its CatchHandler @ 083482f3 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
  this_02 = (STSecondGrowTypeInfo *)(this + 0x294);
  for (iVar1 = 6; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08348344 to 08348348 has its CatchHandler @ 0834835e */
    STSecondGrowTypeInfo::STSecondGrowTypeInfo(this_02);
    this_02 = this_02 + 0xc0;
  }
                    /* try { // try from 0834839d to 083483a1 has its CatchHandler @ 083483a4 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 0834852e CCharacter::clear  [0x0834852e-0x83485c3] ===
 834852e:	55                   	push   %ebp
 834852f:	89 e5                	mov    %esp,%ebp
 8348531:	83 ec 28             	sub    $0x28,%esp
 8348534:	8b 45 08             	mov    0x8(%ebp),%eax
 8348537:	89 04 24             	mov    %eax,(%esp)
 834853a:	e8 29 fd ff ff       	call   8348268 <_ZN15_Additioal_info5clearEv>
 834853f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8348546:	eb 1b                	jmp    8348563 <_ZN10CCharacter5clearEv+0x35>
 8348548:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834854b:	6b c0 52             	imul   $0x52,%eax,%eax
 834854e:	83 c0 50             	add    $0x50,%eax
 8348551:	03 45 08             	add    0x8(%ebp),%eax
 8348554:	83 c0 02             	add    $0x2,%eax
 8348557:	89 04 24             	mov    %eax,(%esp)
 834855a:	e8 09 fd ff ff       	call   8348268 <_ZN15_Additioal_info5clearEv>
 834855f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8348563:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 8348567:	0f 9e c0             	setle  %al
 834856a:	84 c0                	test   %al,%al
 834856c:	75 da                	jne    8348548 <_ZN10CCharacter5clearEv+0x1a>
 834856e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8348575:	eb 3f                	jmp    83485b6 <_ZN10CCharacter5clearEv+0x88>
 8348577:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834857a:	89 d0                	mov    %edx,%eax
 834857c:	01 c0                	add    %eax,%eax
 834857e:	01 d0                	add    %edx,%eax
 8348580:	c1 e0 02             	shl    $0x2,%eax
 8348583:	05 40 02 00 00       	add    $0x240,%eax
 8348588:	03 45 08             	add    0x8(%ebp),%eax
 834858b:	89 04 24             	mov    %eax,(%esp)
 834858e:	e8 af 1d e3 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8348593:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8348596:	89 d0                	mov    %edx,%eax
 8348598:	01 c0                	add    %eax,%eax
 834859a:	01 d0                	add    %edx,%eax
 834859c:	c1 e0 06             	shl    $0x6,%eax
 834859f:	05 90 02 00 00       	add    $0x290,%eax
 83485a4:	03 45 08             	add    0x8(%ebp),%eax
 83485a7:	83 c0 04             	add    $0x4,%eax
 83485aa:	89 04 24             	mov    %eax,(%esp)
 83485ad:	e8 6c b4 02 00       	call   8373a1e <_ZN20STSecondGrowTypeInfo5clearEv>
 83485b2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83485b6:	83 7d f4 06          	cmpl   $0x6,-0xc(%ebp)
 83485ba:	0f 9e c0             	setle  %al
 83485bd:	84 c0                	test   %al,%al
 83485bf:	75 b6                	jne    8348577 <_ZN10CCharacter5clearEv+0x49>
 83485c1:	c9                   	leave
 83485c2:	c3                   	ret
 83485c3:	90                   	nop

```

```c
// CCharacter::clear @ 0x834852e

/* CCharacter::clear() */

void __thiscall CCharacter::clear(CCharacter *this)

{
  int local_14;
  int local_10;
  
  _Additioal_info::clear((_Additioal_info *)this);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    _Additioal_info::clear((_Additioal_info *)(this + local_14 * 0x52 + 0x52));
  }
  for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_10 * 0xc + 0x240));
    STSecondGrowTypeInfo::clear((STSecondGrowTypeInfo *)(this + local_10 * 0xc0 + 0x294));
  }
  return;
}

```

---

## destroy

```asm
// === 083485c4 CCharacter::destroy  [0x083485c4-0x83485d7] ===
 83485c4:	55                   	push   %ebp
 83485c5:	89 e5                	mov    %esp,%ebp
 83485c7:	83 ec 18             	sub    $0x18,%esp
 83485ca:	8b 45 08             	mov    0x8(%ebp),%eax
 83485cd:	89 04 24             	mov    %eax,(%esp)
 83485d0:	e8 59 ff ff ff       	call   834852e <_ZN10CCharacter5clearEv>
 83485d5:	c9                   	leave
 83485d6:	c3                   	ret
 83485d7:	90                   	nop

```

```c
// CCharacter::destroy @ 0x83485c4

/* CCharacter::destroy() */

void __thiscall CCharacter::destroy(CCharacter *this)

{
  clear(this);
  return;
}

```

---

## get_give_skill

```asm
// === 08348798 CCharacter::get_give_skill  [0x08348798-0x834883d] ===
 8348798:	55                   	push   %ebp
 8348799:	89 e5                	mov    %esp,%ebp
 834879b:	83 ec 28             	sub    $0x28,%esp
 834879e:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 83487a2:	75 41                	jne    83487e5 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj+0x4d>
 83487a4:	8b 45 14             	mov    0x14(%ebp),%eax
 83487a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83487ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 83487ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 83487b2:	8b 45 08             	mov    0x8(%ebp),%eax
 83487b5:	89 04 24             	mov    %eax,(%esp)
 83487b8:	e8 1b fe ff ff       	call   83485d8 <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE>
 83487bd:	88 45 f7             	mov    %al,-0x9(%ebp)
 83487c0:	8b 45 14             	mov    0x14(%ebp),%eax
 83487c3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83487c7:	8b 45 10             	mov    0x10(%ebp),%eax
 83487ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 83487ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 83487d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83487d5:	8b 45 08             	mov    0x8(%ebp),%eax
 83487d8:	89 04 24             	mov    %eax,(%esp)
 83487db:	e8 b4 fe ff ff       	call   8348694 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE>
 83487e0:	88 45 f7             	mov    %al,-0x9(%ebp)
 83487e3:	eb 53                	jmp    8348838 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj+0xa0>
 83487e5:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 83487e9:	75 1e                	jne    8348809 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj+0x71>
 83487eb:	8b 45 14             	mov    0x14(%ebp),%eax
 83487ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 83487f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83487f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83487f9:	8b 45 08             	mov    0x8(%ebp),%eax
 83487fc:	89 04 24             	mov    %eax,(%esp)
 83487ff:	e8 d4 fd ff ff       	call   83485d8 <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE>
 8348804:	88 45 f7             	mov    %al,-0x9(%ebp)
 8348807:	eb 2f                	jmp    8348838 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj+0xa0>
 8348809:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 834880d:	75 25                	jne    8348834 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj+0x9c>
 834880f:	8b 45 14             	mov    0x14(%ebp),%eax
 8348812:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8348816:	8b 45 10             	mov    0x10(%ebp),%eax
 8348819:	89 44 24 08          	mov    %eax,0x8(%esp)
 834881d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348820:	89 44 24 04          	mov    %eax,0x4(%esp)
 8348824:	8b 45 08             	mov    0x8(%ebp),%eax
 8348827:	89 04 24             	mov    %eax,(%esp)
 834882a:	e8 65 fe ff ff       	call   8348694 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE>
 834882f:	88 45 f7             	mov    %al,-0x9(%ebp)
 8348832:	eb 04                	jmp    8348838 <_ZNK10CCharacter14get_give_skillEiiRSt6vectorISt4pairIiiESaIS2_EEj+0xa0>
 8348834:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8348838:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 834883c:	c9                   	leave
 834883d:	c3                   	ret

```

```c
// CCharacter::get_give_skill @ 0x8348798

/* CCharacter::get_give_skill(int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, unsigned int) const */

undefined1 __thiscall
CCharacter::get_give_skill(CCharacter *this,int param_1,int param_2,vector *param_3,uint param_4)

{
  undefined1 local_d;
  
  if (param_4 == 0) {
    get_give_skill_firstGrowtype(this,param_1,param_3);
    local_d = get_give_skill_secondGrowtype(this,param_1,param_2,param_3);
  }
  else if (param_4 == 1) {
    local_d = get_give_skill_firstGrowtype(this,param_1,param_3);
  }
  else if (param_4 == 2) {
    local_d = get_give_skill_secondGrowtype(this,param_1,param_2,param_3);
  }
  else {
    local_d = 0;
  }
  return local_d;
}

```

---

## get_give_skill_firstGrowtype

```asm
// === 083485d8 CCharacter::get_give_skill_firstGrowtype  [0x083485d8-0x8348693] ===
 83485d8:	55                   	push   %ebp
 83485d9:	89 e5                	mov    %esp,%ebp
 83485db:	83 ec 28             	sub    $0x28,%esp
 83485de:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 83485e2:	78 06                	js     83485ea <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE+0x12>
 83485e4:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 83485e8:	7e 0a                	jle    83485f4 <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE+0x1c>
 83485ea:	b8 00 00 00 00       	mov    $0x0,%eax
 83485ef:	e9 9e 00 00 00       	jmp    8348692 <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE+0xba>
 83485f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83485f7:	8d 50 01             	lea    0x1(%eax),%edx
 83485fa:	89 d0                	mov    %edx,%eax
 83485fc:	01 c0                	add    %eax,%eax
 83485fe:	01 d0                	add    %edx,%eax
 8348600:	c1 e0 02             	shl    $0x2,%eax
 8348603:	05 40 02 00 00       	add    $0x240,%eax
 8348608:	89 c2                	mov    %eax,%edx
 834860a:	03 55 08             	add    0x8(%ebp),%edx
 834860d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8348610:	89 54 24 04          	mov    %edx,0x4(%esp)
 8348614:	89 04 24             	mov    %eax,(%esp)
 8348617:	e8 04 8c dc ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 834861c:	83 ec 04             	sub    $0x4,%esp
 834861f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348622:	8d 50 01             	lea    0x1(%eax),%edx
 8348625:	89 d0                	mov    %edx,%eax
 8348627:	01 c0                	add    %eax,%eax
 8348629:	01 d0                	add    %edx,%eax
 834862b:	c1 e0 02             	shl    $0x2,%eax
 834862e:	05 40 02 00 00       	add    $0x240,%eax
 8348633:	89 c2                	mov    %eax,%edx
 8348635:	03 55 08             	add    0x8(%ebp),%edx
 8348638:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834863b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834863f:	89 04 24             	mov    %eax,(%esp)
 8348642:	e8 05 8c dc ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8348647:	83 ec 04             	sub    $0x4,%esp
 834864a:	eb 2b                	jmp    8348677 <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE+0x9f>
 834864c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834864f:	89 04 24             	mov    %eax,(%esp)
 8348652:	e8 63 d5 ee ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 8348657:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834865a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834865d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8348661:	8b 45 10             	mov    0x10(%ebp),%eax
 8348664:	89 04 24             	mov    %eax,(%esp)
 8348667:	e8 04 74 fc ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 834866c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834866f:	89 04 24             	mov    %eax,(%esp)
 8348672:	e8 59 56 ef ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8348677:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834867a:	89 44 24 04          	mov    %eax,0x4(%esp)
 834867e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8348681:	89 04 24             	mov    %eax,(%esp)
 8348684:	e8 5c b2 e4 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8348689:	84 c0                	test   %al,%al
 834868b:	75 bf                	jne    834864c <_ZNK10CCharacter28get_give_skill_firstGrowtypeEiRSt6vectorISt4pairIiiESaIS2_EE+0x74>
 834868d:	b8 01 00 00 00       	mov    $0x1,%eax
 8348692:	c9                   	leave
 8348693:	c3                   	ret

```

```c
// CCharacter::get_give_skill_firstGrowtype @ 0x83485d8

/* CCharacter::get_give_skill_firstGrowtype(int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) const */

undefined4 __thiscall
CCharacter::get_give_skill_firstGrowtype(CCharacter *this,int param_1,vector *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  pair *local_10;
  
  if ((param_1 < 0) || (5 < param_1)) {
    uVar2 = 0;
  }
  else {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    while( true ) {
      bVar1 = __gnu_cxx::operator!=(local_14,local_18);
      if (!bVar1) break;
      local_10 = (pair *)__gnu_cxx::
                         __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                         ::operator*(local_14);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,local_10);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_14);
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## get_give_skill_secondGrowtype

```asm
// === 08348694 CCharacter::get_give_skill_secondGrowtype  [0x08348694-0x8348797] ===
 8348694:	55                   	push   %ebp
 8348695:	89 e5                	mov    %esp,%ebp
 8348697:	83 ec 28             	sub    $0x28,%esp
 834869a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 834869e:	78 06                	js     83486a6 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0x12>
 83486a0:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 83486a4:	7e 0a                	jle    83486b0 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0x1c>
 83486a6:	b8 00 00 00 00       	mov    $0x0,%eax
 83486ab:	e9 e6 00 00 00       	jmp    8348796 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0x102>
 83486b0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 83486b4:	7e 06                	jle    83486bc <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0x28>
 83486b6:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 83486ba:	7e 0a                	jle    83486c6 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0x32>
 83486bc:	b8 01 00 00 00       	mov    $0x1,%eax
 83486c1:	e9 d0 00 00 00       	jmp    8348796 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0x102>
 83486c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83486c9:	8d 48 01             	lea    0x1(%eax),%ecx
 83486cc:	8b 45 10             	mov    0x10(%ebp),%eax
 83486cf:	83 e8 01             	sub    $0x1,%eax
 83486d2:	89 c2                	mov    %eax,%edx
 83486d4:	01 d2                	add    %edx,%edx
 83486d6:	01 c2                	add    %eax,%edx
 83486d8:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 83486df:	89 c2                	mov    %eax,%edx
 83486e1:	89 c8                	mov    %ecx,%eax
 83486e3:	01 c0                	add    %eax,%eax
 83486e5:	01 c8                	add    %ecx,%eax
 83486e7:	c1 e0 06             	shl    $0x6,%eax
 83486ea:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83486ed:	05 30 03 00 00       	add    $0x330,%eax
 83486f2:	03 45 08             	add    0x8(%ebp),%eax
 83486f5:	8d 50 08             	lea    0x8(%eax),%edx
 83486f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83486fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 83486ff:	89 04 24             	mov    %eax,(%esp)
 8348702:	e8 19 8b dc ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8348707:	83 ec 04             	sub    $0x4,%esp
 834870a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834870d:	8d 48 01             	lea    0x1(%eax),%ecx
 8348710:	8b 45 10             	mov    0x10(%ebp),%eax
 8348713:	83 e8 01             	sub    $0x1,%eax
 8348716:	89 c2                	mov    %eax,%edx
 8348718:	01 d2                	add    %edx,%edx
 834871a:	01 c2                	add    %eax,%edx
 834871c:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 8348723:	89 c2                	mov    %eax,%edx
 8348725:	89 c8                	mov    %ecx,%eax
 8348727:	01 c0                	add    %eax,%eax
 8348729:	01 c8                	add    %ecx,%eax
 834872b:	c1 e0 06             	shl    $0x6,%eax
 834872e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348731:	05 30 03 00 00       	add    $0x330,%eax
 8348736:	03 45 08             	add    0x8(%ebp),%eax
 8348739:	8d 50 08             	lea    0x8(%eax),%edx
 834873c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834873f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8348743:	89 04 24             	mov    %eax,(%esp)
 8348746:	e8 01 8b dc ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 834874b:	83 ec 04             	sub    $0x4,%esp
 834874e:	eb 2b                	jmp    834877b <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0xe7>
 8348750:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8348753:	89 04 24             	mov    %eax,(%esp)
 8348756:	e8 5f d4 ee ff       	call   8235bba <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 834875b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834875e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8348761:	89 44 24 04          	mov    %eax,0x4(%esp)
 8348765:	8b 45 14             	mov    0x14(%ebp),%eax
 8348768:	89 04 24             	mov    %eax,(%esp)
 834876b:	e8 00 73 fc ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 8348770:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8348773:	89 04 24             	mov    %eax,(%esp)
 8348776:	e8 55 55 ef ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 834877b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834877e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8348782:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8348785:	89 04 24             	mov    %eax,(%esp)
 8348788:	e8 58 b1 e4 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 834878d:	84 c0                	test   %al,%al
 834878f:	75 bf                	jne    8348750 <_ZNK10CCharacter29get_give_skill_secondGrowtypeEiiRSt6vectorISt4pairIiiESaIS2_EE+0xbc>
 8348791:	b8 01 00 00 00       	mov    $0x1,%eax
 8348796:	c9                   	leave
 8348797:	c3                   	ret

```

```c
// CCharacter::get_give_skill_secondGrowtype @ 0x8348694

/* CCharacter::get_give_skill_secondGrowtype(int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) const */

undefined4 __thiscall
CCharacter::get_give_skill_secondGrowtype(CCharacter *this,int param_1,int param_2,vector *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  pair *local_10;
  
  if ((param_1 < 0) || (5 < param_1)) {
    uVar2 = 0;
  }
  else if ((param_2 < 1) || (2 < param_2)) {
    uVar2 = 1;
  }
  else {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    while( true ) {
      bVar1 = __gnu_cxx::operator!=(local_14,local_18);
      if (!bVar1) break;
      local_10 = (pair *)__gnu_cxx::
                         __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                         ::operator*(local_14);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_10);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_14);
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## get_growtype_stat

```asm
// === 0834883e CCharacter::get_growtype_stat  [0x0834883e-0x8348893] ===
 834883e:	55                   	push   %ebp
 834883f:	89 e5                	mov    %esp,%ebp
 8348841:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8348845:	7f 06                	jg     834884d <_ZNK10CCharacter17get_growtype_statEii+0xf>
 8348847:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 834884b:	7e 07                	jle    8348854 <_ZNK10CCharacter17get_growtype_statEii+0x16>
 834884d:	b8 00 00 00 00       	mov    $0x0,%eax
 8348852:	eb 3d                	jmp    8348891 <_ZNK10CCharacter17get_growtype_statEii+0x53>
 8348854:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8348858:	75 11                	jne    834886b <_ZNK10CCharacter17get_growtype_statEii+0x2d>
 834885a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834885d:	6b c0 52             	imul   $0x52,%eax,%eax
 8348860:	83 c0 50             	add    $0x50,%eax
 8348863:	03 45 08             	add    0x8(%ebp),%eax
 8348866:	83 c0 02             	add    $0x2,%eax
 8348869:	eb 26                	jmp    8348891 <_ZNK10CCharacter17get_growtype_statEii+0x53>
 834886b:	8b 45 0c             	mov    0xc(%ebp),%eax
 834886e:	8d 50 01             	lea    0x1(%eax),%edx
 8348871:	8b 45 10             	mov    0x10(%ebp),%eax
 8348874:	83 e8 01             	sub    $0x1,%eax
 8348877:	6b c8 52             	imul   $0x52,%eax,%ecx
 834887a:	89 d0                	mov    %edx,%eax
 834887c:	01 c0                	add    %eax,%eax
 834887e:	01 d0                	add    %edx,%eax
 8348880:	c1 e0 06             	shl    $0x6,%eax
 8348883:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8348886:	05 90 02 00 00       	add    $0x290,%eax
 834888b:	03 45 08             	add    0x8(%ebp),%eax
 834888e:	83 c0 04             	add    $0x4,%eax
 8348891:	5d                   	pop    %ebp
 8348892:	c3                   	ret
 8348893:	90                   	nop

```

```c
// CCharacter::get_growtype_stat @ 0x834883e

/* CCharacter::get_growtype_stat(int, int) const */

CCharacter * __thiscall CCharacter::get_growtype_stat(CCharacter *this,int param_1,int param_2)

{
  CCharacter *pCVar1;
  
  if ((param_1 < 6) && (param_2 < 3)) {
    if (param_2 == 0) {
      pCVar1 = this + param_1 * 0x52 + 0x52;
    }
    else {
      pCVar1 = this + (param_2 + -1) * 0x52 + (param_1 + 1) * 0xc0 + 0x294;
    }
  }
  else {
    pCVar1 = (CCharacter *)0x0;
  }
  return pCVar1;
}

```

---

## set_data

```asm
// === 08348894 CCharacter::set_data  [0x08348894-0x83493e9] ===
 8348894:	55                   	push   %ebp
 8348895:	89 e5                	mov    %esp,%ebp
 8348897:	57                   	push   %edi
 8348898:	56                   	push   %esi
 8348899:	53                   	push   %ebx
 834889a:	83 ec 5c             	sub    $0x5c,%esp
 834889d:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 83488a4:	e9 a5 05 00 00       	jmp    8348e4e <_ZN10CCharacter8set_dataEP17STCharacterScript+0x5ba>
 83488a9:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 83488ad:	0f 85 1f 02 00 00    	jne    8348ad2 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x23e>
 83488b3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83488b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 83488b9:	6b c0 57             	imul   $0x57,%eax,%eax
 83488bc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83488bf:	83 c0 24             	add    $0x24,%eax
 83488c2:	8b 10                	mov    (%eax),%edx
 83488c4:	8b 45 08             	mov    0x8(%ebp),%eax
 83488c7:	89 10                	mov    %edx,(%eax)
 83488c9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83488cc:	8b 55 0c             	mov    0xc(%ebp),%edx
 83488cf:	6b c0 57             	imul   $0x57,%eax,%eax
 83488d2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83488d5:	83 c0 28             	add    $0x28,%eax
 83488d8:	8b 10                	mov    (%eax),%edx
 83488da:	8b 45 08             	mov    0x8(%ebp),%eax
 83488dd:	89 50 04             	mov    %edx,0x4(%eax)
 83488e0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83488e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 83488e6:	6b c0 57             	imul   $0x57,%eax,%eax
 83488e9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83488ec:	83 c0 20             	add    $0x20,%eax
 83488ef:	0f b7 50 0c          	movzwl 0xc(%eax),%edx
 83488f3:	8b 45 08             	mov    0x8(%ebp),%eax
 83488f6:	66 89 50 08          	mov    %dx,0x8(%eax)
 83488fa:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83488fd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348900:	6b c0 57             	imul   $0x57,%eax,%eax
 8348903:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348906:	83 c0 20             	add    $0x20,%eax
 8348909:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 834890d:	8b 45 08             	mov    0x8(%ebp),%eax
 8348910:	66 89 50 0a          	mov    %dx,0xa(%eax)
 8348914:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348917:	8b 55 0c             	mov    0xc(%ebp),%edx
 834891a:	6b c0 57             	imul   $0x57,%eax,%eax
 834891d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348920:	83 c0 20             	add    $0x20,%eax
 8348923:	0f b7 50 10          	movzwl 0x10(%eax),%edx
 8348927:	8b 45 08             	mov    0x8(%ebp),%eax
 834892a:	66 89 50 0c          	mov    %dx,0xc(%eax)
 834892e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348931:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348934:	6b c0 57             	imul   $0x57,%eax,%eax
 8348937:	8d 04 02             	lea    (%edx,%eax,1),%eax
 834893a:	83 c0 20             	add    $0x20,%eax
 834893d:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 8348941:	8b 45 08             	mov    0x8(%ebp),%eax
 8348944:	66 89 50 0e          	mov    %dx,0xe(%eax)
 8348948:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 834894f:	eb 2e                	jmp    834897f <_ZN10CCharacter8set_dataEP17STCharacterScript+0xeb>
 8348951:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 8348954:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8348957:	8b 5d c8             	mov    -0x38(%ebp),%ebx
 834895a:	8b 45 0c             	mov    0xc(%ebp),%eax
 834895d:	83 c3 08             	add    $0x8,%ebx
 8348960:	01 db                	add    %ebx,%ebx
 8348962:	6b d2 57             	imul   $0x57,%edx,%edx
 8348965:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8348968:	01 d0                	add    %edx,%eax
 834896a:	83 c0 20             	add    $0x20,%eax
 834896d:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 8348971:	8b 45 08             	mov    0x8(%ebp),%eax
 8348974:	83 c1 08             	add    $0x8,%ecx
 8348977:	66 89 14 48          	mov    %dx,(%eax,%ecx,2)
 834897b:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 834897f:	83 7d c8 03          	cmpl   $0x3,-0x38(%ebp)
 8348983:	0f 9e c0             	setle  %al
 8348986:	84 c0                	test   %al,%al
 8348988:	75 c7                	jne    8348951 <_ZN10CCharacter8set_dataEP17STCharacterScript+0xbd>
 834898a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8348991:	eb 2f                	jmp    83489c2 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x12e>
 8348993:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8348996:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8348999:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 834899c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834899f:	83 c3 08             	add    $0x8,%ebx
 83489a2:	01 db                	add    %ebx,%ebx
 83489a4:	6b d2 57             	imul   $0x57,%edx,%edx
 83489a7:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83489aa:	01 d0                	add    %edx,%eax
 83489ac:	83 c0 20             	add    $0x20,%eax
 83489af:	0f b7 50 0c          	movzwl 0xc(%eax),%edx
 83489b3:	8b 45 08             	mov    0x8(%ebp),%eax
 83489b6:	83 c1 08             	add    $0x8,%ecx
 83489b9:	66 89 54 48 08       	mov    %dx,0x8(%eax,%ecx,2)
 83489be:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 83489c2:	83 7d cc 10          	cmpl   $0x10,-0x34(%ebp)
 83489c6:	0f 9e c0             	setle  %al
 83489c9:	84 c0                	test   %al,%al
 83489cb:	75 c6                	jne    8348993 <_ZN10CCharacter8set_dataEP17STCharacterScript+0xff>
 83489cd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83489d0:	8b 55 0c             	mov    0xc(%ebp),%edx
 83489d3:	6b c0 57             	imul   $0x57,%eax,%eax
 83489d6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83489d9:	83 c0 50             	add    $0x50,%eax
 83489dc:	8b 50 0e             	mov    0xe(%eax),%edx
 83489df:	8b 45 08             	mov    0x8(%ebp),%eax
 83489e2:	89 50 3a             	mov    %edx,0x3a(%eax)
 83489e5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83489e8:	8b 55 0c             	mov    0xc(%ebp),%edx
 83489eb:	6b c0 57             	imul   $0x57,%eax,%eax
 83489ee:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83489f1:	83 c0 50             	add    $0x50,%eax
 83489f4:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 83489f8:	8b 45 08             	mov    0x8(%ebp),%eax
 83489fb:	66 89 50 3e          	mov    %dx,0x3e(%eax)
 83489ff:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348a02:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348a05:	6b c0 57             	imul   $0x57,%eax,%eax
 8348a08:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348a0b:	83 c0 60             	add    $0x60,%eax
 8348a0e:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 8348a12:	8b 45 08             	mov    0x8(%ebp),%eax
 8348a15:	66 89 50 40          	mov    %dx,0x40(%eax)
 8348a19:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348a1c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348a1f:	6b c0 57             	imul   $0x57,%eax,%eax
 8348a22:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348a25:	83 c0 60             	add    $0x60,%eax
 8348a28:	8b 50 06             	mov    0x6(%eax),%edx
 8348a2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8348a2e:	89 50 42             	mov    %edx,0x42(%eax)
 8348a31:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348a34:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348a37:	6b c0 57             	imul   $0x57,%eax,%eax
 8348a3a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348a3d:	83 c0 60             	add    $0x60,%eax
 8348a40:	0f b7 50 0a          	movzwl 0xa(%eax),%edx
 8348a44:	8b 45 08             	mov    0x8(%ebp),%eax
 8348a47:	66 89 50 46          	mov    %dx,0x46(%eax)
 8348a4b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348a4e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348a51:	6b c0 57             	imul   $0x57,%eax,%eax
 8348a54:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348a57:	83 c0 60             	add    $0x60,%eax
 8348a5a:	0f b7 50 0c          	movzwl 0xc(%eax),%edx
 8348a5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8348a61:	66 89 50 48          	mov    %dx,0x48(%eax)
 8348a65:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348a68:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348a6b:	6b c0 57             	imul   $0x57,%eax,%eax
 8348a6e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348a71:	83 c0 60             	add    $0x60,%eax
 8348a74:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 8348a78:	8b 45 08             	mov    0x8(%ebp),%eax
 8348a7b:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 8348a7f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348a82:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348a85:	6b c0 57             	imul   $0x57,%eax,%eax
 8348a88:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348a8b:	83 c0 60             	add    $0x60,%eax
 8348a8e:	0f b7 50 10          	movzwl 0x10(%eax),%edx
 8348a92:	8b 45 08             	mov    0x8(%ebp),%eax
 8348a95:	66 89 50 4c          	mov    %dx,0x4c(%eax)
 8348a99:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348a9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348a9f:	6b c0 57             	imul   $0x57,%eax,%eax
 8348aa2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348aa5:	83 c0 60             	add    $0x60,%eax
 8348aa8:	8b 50 12             	mov    0x12(%eax),%edx
 8348aab:	8b 45 08             	mov    0x8(%ebp),%eax
 8348aae:	89 50 4e             	mov    %edx,0x4e(%eax)
 8348ab1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348ab4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348ab7:	6b c0 57             	imul   $0x57,%eax,%eax
 8348aba:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348abd:	83 c0 70             	add    $0x70,%eax
 8348ac0:	0f b6 50 06          	movzbl 0x6(%eax),%edx
 8348ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 8348ac7:	88 90 d4 07 00 00    	mov    %dl,0x7d4(%eax)
 8348acd:	e9 41 03 00 00       	jmp    8348e13 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x57f>
 8348ad2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348ad5:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348ad8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348adb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348ade:	6b c0 57             	imul   $0x57,%eax,%eax
 8348ae1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348ae4:	83 c0 24             	add    $0x24,%eax
 8348ae7:	8b 00                	mov    (%eax),%eax
 8348ae9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348aec:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348aef:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348af2:	83 c2 50             	add    $0x50,%edx
 8348af5:	89 42 02             	mov    %eax,0x2(%edx)
 8348af8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348afb:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348afe:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b01:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348b04:	6b c0 57             	imul   $0x57,%eax,%eax
 8348b07:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348b0a:	83 c0 28             	add    $0x28,%eax
 8348b0d:	8b 00                	mov    (%eax),%eax
 8348b0f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348b12:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348b15:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348b18:	83 c2 50             	add    $0x50,%edx
 8348b1b:	89 42 06             	mov    %eax,0x6(%edx)
 8348b1e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b21:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348b24:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b27:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348b2a:	6b c0 57             	imul   $0x57,%eax,%eax
 8348b2d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348b30:	83 c0 20             	add    $0x20,%eax
 8348b33:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8348b37:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348b3a:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348b3d:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348b40:	83 c2 50             	add    $0x50,%edx
 8348b43:	66 89 42 0a          	mov    %ax,0xa(%edx)
 8348b47:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b4a:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348b4d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b50:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348b53:	6b c0 57             	imul   $0x57,%eax,%eax
 8348b56:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348b59:	83 c0 20             	add    $0x20,%eax
 8348b5c:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8348b60:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348b63:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348b66:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348b69:	83 c2 50             	add    $0x50,%edx
 8348b6c:	66 89 42 0c          	mov    %ax,0xc(%edx)
 8348b70:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b73:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348b76:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b79:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348b7c:	6b c0 57             	imul   $0x57,%eax,%eax
 8348b7f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348b82:	83 c0 20             	add    $0x20,%eax
 8348b85:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 8348b89:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348b8c:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348b8f:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348b92:	83 c2 50             	add    $0x50,%edx
 8348b95:	66 89 42 0e          	mov    %ax,0xe(%edx)
 8348b99:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348b9c:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348b9f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348ba2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348ba5:	6b c0 57             	imul   $0x57,%eax,%eax
 8348ba8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348bab:	83 c0 20             	add    $0x20,%eax
 8348bae:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8348bb2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348bb5:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348bb8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348bbb:	83 c2 50             	add    $0x50,%edx
 8348bbe:	66 89 42 10          	mov    %ax,0x10(%edx)
 8348bc2:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8348bc9:	eb 43                	jmp    8348c0e <_ZN10CCharacter8set_dataEP17STCharacterScript+0x37a>
 8348bcb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348bce:	8d 50 ff             	lea    -0x1(%eax),%edx
 8348bd1:	8b 75 d0             	mov    -0x30(%ebp),%esi
 8348bd4:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8348bd7:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 8348bda:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348bdd:	83 c3 08             	add    $0x8,%ebx
 8348be0:	01 db                	add    %ebx,%ebx
 8348be2:	6b c9 57             	imul   $0x57,%ecx,%ecx
 8348be5:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 8348be8:	01 c8                	add    %ecx,%eax
 8348bea:	83 c0 20             	add    $0x20,%eax
 8348bed:	0f b7 58 04          	movzwl 0x4(%eax),%ebx
 8348bf1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348bf4:	89 d0                	mov    %edx,%eax
 8348bf6:	c1 e0 02             	shl    $0x2,%eax
 8348bf9:	01 d0                	add    %edx,%eax
 8348bfb:	c1 e0 03             	shl    $0x3,%eax
 8348bfe:	01 d0                	add    %edx,%eax
 8348c00:	01 f0                	add    %esi,%eax
 8348c02:	83 c0 30             	add    $0x30,%eax
 8348c05:	66 89 5c 41 02       	mov    %bx,0x2(%ecx,%eax,2)
 8348c0a:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8348c0e:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 8348c12:	0f 9e c0             	setle  %al
 8348c15:	84 c0                	test   %al,%al
 8348c17:	75 b2                	jne    8348bcb <_ZN10CCharacter8set_dataEP17STCharacterScript+0x337>
 8348c19:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8348c20:	eb 43                	jmp    8348c65 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x3d1>
 8348c22:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348c25:	8d 50 ff             	lea    -0x1(%eax),%edx
 8348c28:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8348c2b:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8348c2e:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8348c31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348c34:	83 c3 08             	add    $0x8,%ebx
 8348c37:	01 db                	add    %ebx,%ebx
 8348c39:	6b c9 57             	imul   $0x57,%ecx,%ecx
 8348c3c:	8d 0c 0b             	lea    (%ebx,%ecx,1),%ecx
 8348c3f:	01 c8                	add    %ecx,%eax
 8348c41:	83 c0 20             	add    $0x20,%eax
 8348c44:	0f b7 58 0c          	movzwl 0xc(%eax),%ebx
 8348c48:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348c4b:	89 d0                	mov    %edx,%eax
 8348c4d:	c1 e0 02             	shl    $0x2,%eax
 8348c50:	01 d0                	add    %edx,%eax
 8348c52:	c1 e0 03             	shl    $0x3,%eax
 8348c55:	01 d0                	add    %edx,%eax
 8348c57:	01 f0                	add    %esi,%eax
 8348c59:	83 c0 30             	add    $0x30,%eax
 8348c5c:	66 89 5c 41 0a       	mov    %bx,0xa(%ecx,%eax,2)
 8348c61:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8348c65:	83 7d d4 10          	cmpl   $0x10,-0x2c(%ebp)
 8348c69:	0f 9e c0             	setle  %al
 8348c6c:	84 c0                	test   %al,%al
 8348c6e:	75 b2                	jne    8348c22 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x38e>
 8348c70:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348c73:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348c76:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348c79:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348c7c:	6b c0 57             	imul   $0x57,%eax,%eax
 8348c7f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348c82:	83 c0 50             	add    $0x50,%eax
 8348c85:	8b 40 0e             	mov    0xe(%eax),%eax
 8348c88:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348c8b:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348c8e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348c91:	81 c2 8c 00 00 00    	add    $0x8c,%edx
 8348c97:	89 02                	mov    %eax,(%edx)
 8348c99:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348c9c:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348c9f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348ca2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348ca5:	6b c0 57             	imul   $0x57,%eax,%eax
 8348ca8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348cab:	83 c0 50             	add    $0x50,%eax
 8348cae:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8348cb2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348cb5:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348cb8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348cbb:	83 ea 80             	sub    $0xffffff80,%edx
 8348cbe:	66 89 42 10          	mov    %ax,0x10(%edx)
 8348cc2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348cc5:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348cc8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348ccb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348cce:	6b c0 57             	imul   $0x57,%eax,%eax
 8348cd1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348cd4:	83 c0 60             	add    $0x60,%eax
 8348cd7:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8348cdb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348cde:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348ce1:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348ce4:	81 c2 90 00 00 00    	add    $0x90,%edx
 8348cea:	66 89 42 02          	mov    %ax,0x2(%edx)
 8348cee:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348cf1:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348cf4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348cf7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348cfa:	6b c0 57             	imul   $0x57,%eax,%eax
 8348cfd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348d00:	83 c0 60             	add    $0x60,%eax
 8348d03:	8b 40 06             	mov    0x6(%eax),%eax
 8348d06:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348d09:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348d0c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348d0f:	81 c2 94 00 00 00    	add    $0x94,%edx
 8348d15:	89 02                	mov    %eax,(%edx)
 8348d17:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348d1a:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348d1d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348d20:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348d23:	6b c0 57             	imul   $0x57,%eax,%eax
 8348d26:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348d29:	83 c0 60             	add    $0x60,%eax
 8348d2c:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8348d30:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348d33:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348d36:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348d39:	81 c2 90 00 00 00    	add    $0x90,%edx
 8348d3f:	66 89 42 08          	mov    %ax,0x8(%edx)
 8348d43:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348d46:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348d49:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348d4c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348d4f:	6b c0 57             	imul   $0x57,%eax,%eax
 8348d52:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348d55:	83 c0 60             	add    $0x60,%eax
 8348d58:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8348d5c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348d5f:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348d62:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348d65:	81 c2 90 00 00 00    	add    $0x90,%edx
 8348d6b:	66 89 42 0a          	mov    %ax,0xa(%edx)
 8348d6f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348d72:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348d75:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348d78:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348d7b:	6b c0 57             	imul   $0x57,%eax,%eax
 8348d7e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348d81:	83 c0 60             	add    $0x60,%eax
 8348d84:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8348d88:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348d8b:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348d8e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348d91:	81 c2 90 00 00 00    	add    $0x90,%edx
 8348d97:	66 89 42 0c          	mov    %ax,0xc(%edx)
 8348d9b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348d9e:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348da1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348da4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348da7:	6b c0 57             	imul   $0x57,%eax,%eax
 8348daa:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348dad:	83 c0 60             	add    $0x60,%eax
 8348db0:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 8348db4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348db7:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348dba:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348dbd:	81 c2 90 00 00 00    	add    $0x90,%edx
 8348dc3:	66 89 42 0e          	mov    %ax,0xe(%edx)
 8348dc7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348dca:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8348dcd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348dd0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348dd3:	6b c0 57             	imul   $0x57,%eax,%eax
 8348dd6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348dd9:	83 c0 60             	add    $0x60,%eax
 8348ddc:	8b 40 12             	mov    0x12(%eax),%eax
 8348ddf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8348de2:	6b d3 52             	imul   $0x52,%ebx,%edx
 8348de5:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8348de8:	81 c2 a0 00 00 00    	add    $0xa0,%edx
 8348dee:	89 02                	mov    %eax,(%edx)
 8348df0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348df3:	8d 48 ff             	lea    -0x1(%eax),%ecx
 8348df6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8348df9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8348dfc:	6b c0 57             	imul   $0x57,%eax,%eax
 8348dff:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8348e02:	83 c0 70             	add    $0x70,%eax
 8348e05:	0f b6 50 06          	movzbl 0x6(%eax),%edx
 8348e09:	8b 45 08             	mov    0x8(%ebp),%eax
 8348e0c:	88 94 08 d5 07 00 00 	mov    %dl,0x7d5(%eax,%ecx,1)
 8348e13:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8348e16:	89 d0                	mov    %edx,%eax
 8348e18:	01 c0                	add    %eax,%eax
 8348e1a:	01 d0                	add    %edx,%eax
 8348e1c:	c1 e0 02             	shl    $0x2,%eax
 8348e1f:	05 80 02 00 00       	add    $0x280,%eax
 8348e24:	03 45 0c             	add    0xc(%ebp),%eax
 8348e27:	8d 48 08             	lea    0x8(%eax),%ecx
 8348e2a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8348e2d:	89 d0                	mov    %edx,%eax
 8348e2f:	01 c0                	add    %eax,%eax
 8348e31:	01 d0                	add    %edx,%eax
 8348e33:	c1 e0 02             	shl    $0x2,%eax
 8348e36:	05 40 02 00 00       	add    $0x240,%eax
 8348e3b:	03 45 08             	add    0x8(%ebp),%eax
 8348e3e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8348e42:	89 04 24             	mov    %eax,(%esp)
 8348e45:	e8 42 62 fc ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 8348e4a:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8348e4e:	83 7d c4 06          	cmpl   $0x6,-0x3c(%ebp)
 8348e52:	0f 9e c0             	setle  %al
 8348e55:	84 c0                	test   %al,%al
 8348e57:	0f 85 4c fa ff ff    	jne    83488a9 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x15>
 8348e5d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8348e64:	e9 69 05 00 00       	jmp    83493d2 <_ZN10CCharacter8set_dataEP17STCharacterScript+0xb3e>
 8348e69:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8348e70:	e9 4a 05 00 00       	jmp    83493bf <_ZN10CCharacter8set_dataEP17STCharacterScript+0xb2b>
 8348e75:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8348e78:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8348e7b:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8348e7e:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8348e81:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8348e84:	6b db 57             	imul   $0x57,%ebx,%ebx
 8348e87:	c1 e6 08             	shl    $0x8,%esi
 8348e8a:	01 f3                	add    %esi,%ebx
 8348e8c:	01 d9                	add    %ebx,%ecx
 8348e8e:	81 c1 d0 03 00 00    	add    $0x3d0,%ecx
 8348e94:	8b 09                	mov    (%ecx),%ecx
 8348e96:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8348e99:	6b f0 52             	imul   $0x52,%eax,%esi
 8348e9c:	89 d0                	mov    %edx,%eax
 8348e9e:	01 c0                	add    %eax,%eax
 8348ea0:	01 d0                	add    %edx,%eax
 8348ea2:	c1 e0 06             	shl    $0x6,%eax
 8348ea5:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8348ea8:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8348eab:	05 94 02 00 00       	add    $0x294,%eax
 8348eb0:	89 08                	mov    %ecx,(%eax)
 8348eb2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8348eb5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8348eb8:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8348ebb:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8348ebe:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8348ec1:	6b db 57             	imul   $0x57,%ebx,%ebx
 8348ec4:	c1 e6 08             	shl    $0x8,%esi
 8348ec7:	01 f3                	add    %esi,%ebx
 8348ec9:	01 d9                	add    %ebx,%ecx
 8348ecb:	81 c1 d4 03 00 00    	add    $0x3d4,%ecx
 8348ed1:	8b 09                	mov    (%ecx),%ecx
 8348ed3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8348ed6:	6b f0 52             	imul   $0x52,%eax,%esi
 8348ed9:	89 d0                	mov    %edx,%eax
 8348edb:	01 c0                	add    %eax,%eax
 8348edd:	01 d0                	add    %edx,%eax
 8348edf:	c1 e0 06             	shl    $0x6,%eax
 8348ee2:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8348ee5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8348ee8:	05 98 02 00 00       	add    $0x298,%eax
 8348eed:	89 08                	mov    %ecx,(%eax)
 8348eef:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8348ef2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8348ef5:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8348ef8:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8348efb:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8348efe:	6b db 57             	imul   $0x57,%ebx,%ebx
 8348f01:	c1 e6 08             	shl    $0x8,%esi
 8348f04:	01 f3                	add    %esi,%ebx
 8348f06:	01 d9                	add    %ebx,%ecx
 8348f08:	81 c1 d0 03 00 00    	add    $0x3d0,%ecx
 8348f0e:	0f b7 49 08          	movzwl 0x8(%ecx),%ecx
 8348f12:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8348f15:	6b f0 52             	imul   $0x52,%eax,%esi
 8348f18:	89 d0                	mov    %edx,%eax
 8348f1a:	01 c0                	add    %eax,%eax
 8348f1c:	01 d0                	add    %edx,%eax
 8348f1e:	c1 e0 06             	shl    $0x6,%eax
 8348f21:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8348f24:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8348f27:	05 90 02 00 00       	add    $0x290,%eax
 8348f2c:	66 89 48 0c          	mov    %cx,0xc(%eax)
 8348f30:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8348f33:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8348f36:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8348f39:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8348f3c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8348f3f:	6b db 57             	imul   $0x57,%ebx,%ebx
 8348f42:	c1 e6 08             	shl    $0x8,%esi
 8348f45:	01 f3                	add    %esi,%ebx
 8348f47:	01 d9                	add    %ebx,%ecx
 8348f49:	81 c1 d0 03 00 00    	add    $0x3d0,%ecx
 8348f4f:	0f b7 49 0a          	movzwl 0xa(%ecx),%ecx
 8348f53:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8348f56:	6b f0 52             	imul   $0x52,%eax,%esi
 8348f59:	89 d0                	mov    %edx,%eax
 8348f5b:	01 c0                	add    %eax,%eax
 8348f5d:	01 d0                	add    %edx,%eax
 8348f5f:	c1 e0 06             	shl    $0x6,%eax
 8348f62:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8348f65:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8348f68:	05 90 02 00 00       	add    $0x290,%eax
 8348f6d:	66 89 48 0e          	mov    %cx,0xe(%eax)
 8348f71:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8348f74:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8348f77:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8348f7a:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8348f7d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8348f80:	6b db 57             	imul   $0x57,%ebx,%ebx
 8348f83:	c1 e6 08             	shl    $0x8,%esi
 8348f86:	01 f3                	add    %esi,%ebx
 8348f88:	01 d9                	add    %ebx,%ecx
 8348f8a:	81 c1 d0 03 00 00    	add    $0x3d0,%ecx
 8348f90:	0f b7 49 0c          	movzwl 0xc(%ecx),%ecx
 8348f94:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8348f97:	6b f0 52             	imul   $0x52,%eax,%esi
 8348f9a:	89 d0                	mov    %edx,%eax
 8348f9c:	01 c0                	add    %eax,%eax
 8348f9e:	01 d0                	add    %edx,%eax
 8348fa0:	c1 e0 06             	shl    $0x6,%eax
 8348fa3:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8348fa6:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8348fa9:	05 90 02 00 00       	add    $0x290,%eax
 8348fae:	66 89 48 10          	mov    %cx,0x10(%eax)
 8348fb2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8348fb5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8348fb8:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8348fbb:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8348fbe:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8348fc1:	6b db 57             	imul   $0x57,%ebx,%ebx
 8348fc4:	c1 e6 08             	shl    $0x8,%esi
 8348fc7:	01 f3                	add    %esi,%ebx
 8348fc9:	01 d9                	add    %ebx,%ecx
 8348fcb:	81 c1 d0 03 00 00    	add    $0x3d0,%ecx
 8348fd1:	0f b7 49 0e          	movzwl 0xe(%ecx),%ecx
 8348fd5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8348fd8:	6b f0 52             	imul   $0x52,%eax,%esi
 8348fdb:	89 d0                	mov    %edx,%eax
 8348fdd:	01 c0                	add    %eax,%eax
 8348fdf:	01 d0                	add    %edx,%eax
 8348fe1:	c1 e0 06             	shl    $0x6,%eax
 8348fe4:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8348fe7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8348fea:	05 90 02 00 00       	add    $0x290,%eax
 8348fef:	66 89 48 12          	mov    %cx,0x12(%eax)
 8348ff3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8348ffa:	eb 65                	jmp    8349061 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x7cd>
 8348ffc:	8b 7d d8             	mov    -0x28(%ebp),%edi
 8348fff:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8349002:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8349005:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8349008:	8b 45 d8             	mov    -0x28(%ebp),%eax
 834900b:	89 45 ac             	mov    %eax,-0x54(%ebp)
 834900e:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8349011:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8349014:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8349017:	83 c0 08             	add    $0x8,%eax
 834901a:	8d 14 00             	lea    (%eax,%eax,1),%edx
 834901d:	6b c1 57             	imul   $0x57,%ecx,%eax
 8349020:	01 c2                	add    %eax,%edx
 8349022:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8349025:	c1 e0 08             	shl    $0x8,%eax
 8349028:	8d 04 02             	lea    (%edx,%eax,1),%eax
 834902b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834902e:	05 d0 03 00 00       	add    $0x3d0,%eax
 8349033:	0f b7 18             	movzwl (%eax),%ebx
 8349036:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8349039:	89 f0                	mov    %esi,%eax
 834903b:	c1 e0 02             	shl    $0x2,%eax
 834903e:	01 f0                	add    %esi,%eax
 8349040:	c1 e0 03             	shl    $0x3,%eax
 8349043:	01 f0                	add    %esi,%eax
 8349045:	89 fa                	mov    %edi,%edx
 8349047:	01 d2                	add    %edx,%edx
 8349049:	01 fa                	add    %edi,%edx
 834904b:	c1 e2 05             	shl    $0x5,%edx
 834904e:	01 d0                	add    %edx,%eax
 8349050:	03 45 a8             	add    -0x58(%ebp),%eax
 8349053:	05 50 01 00 00       	add    $0x150,%eax
 8349058:	66 89 5c 41 04       	mov    %bx,0x4(%ecx,%eax,2)
 834905d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8349061:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 8349065:	0f 9e c0             	setle  %al
 8349068:	84 c0                	test   %al,%al
 834906a:	75 90                	jne    8348ffc <_ZN10CCharacter8set_dataEP17STCharacterScript+0x768>
 834906c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8349073:	eb 66                	jmp    83490db <_ZN10CCharacter8set_dataEP17STCharacterScript+0x847>
 8349075:	8b 7d d8             	mov    -0x28(%ebp),%edi
 8349078:	8b 75 dc             	mov    -0x24(%ebp),%esi
 834907b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834907e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8349081:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8349084:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8349087:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 834908a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834908d:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8349090:	83 c0 08             	add    $0x8,%eax
 8349093:	8d 14 00             	lea    (%eax,%eax,1),%edx
 8349096:	6b c1 57             	imul   $0x57,%ecx,%eax
 8349099:	01 c2                	add    %eax,%edx
 834909b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 834909e:	c1 e0 08             	shl    $0x8,%eax
 83490a1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83490a4:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83490a7:	05 d0 03 00 00       	add    $0x3d0,%eax
 83490ac:	0f b7 58 08          	movzwl 0x8(%eax),%ebx
 83490b0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 83490b3:	89 f0                	mov    %esi,%eax
 83490b5:	c1 e0 02             	shl    $0x2,%eax
 83490b8:	01 f0                	add    %esi,%eax
 83490ba:	c1 e0 03             	shl    $0x3,%eax
 83490bd:	01 f0                	add    %esi,%eax
 83490bf:	89 fa                	mov    %edi,%edx
 83490c1:	01 d2                	add    %edx,%edx
 83490c3:	01 fa                	add    %edi,%edx
 83490c5:	c1 e2 05             	shl    $0x5,%edx
 83490c8:	01 d0                	add    %edx,%eax
 83490ca:	03 45 b0             	add    -0x50(%ebp),%eax
 83490cd:	05 50 01 00 00       	add    $0x150,%eax
 83490d2:	66 89 5c 41 0c       	mov    %bx,0xc(%ecx,%eax,2)
 83490d7:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 83490db:	83 7d e4 10          	cmpl   $0x10,-0x1c(%ebp)
 83490df:	0f 9e c0             	setle  %al
 83490e2:	84 c0                	test   %al,%al
 83490e4:	75 8f                	jne    8349075 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x7e1>
 83490e6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 83490e9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83490ec:	8b 75 d8             	mov    -0x28(%ebp),%esi
 83490ef:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 83490f2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83490f5:	6b db 57             	imul   $0x57,%ebx,%ebx
 83490f8:	c1 e6 08             	shl    $0x8,%esi
 83490fb:	01 f3                	add    %esi,%ebx
 83490fd:	01 d9                	add    %ebx,%ecx
 83490ff:	81 c1 00 04 00 00    	add    $0x400,%ecx
 8349105:	8b 49 0a             	mov    0xa(%ecx),%ecx
 8349108:	8b 5d 08             	mov    0x8(%ebp),%ebx
 834910b:	6b f0 52             	imul   $0x52,%eax,%esi
 834910e:	89 d0                	mov    %edx,%eax
 8349110:	01 c0                	add    %eax,%eax
 8349112:	01 d0                	add    %edx,%eax
 8349114:	c1 e0 06             	shl    $0x6,%eax
 8349117:	8d 04 06             	lea    (%esi,%eax,1),%eax
 834911a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834911d:	05 c0 02 00 00       	add    $0x2c0,%eax
 8349122:	89 48 0e             	mov    %ecx,0xe(%eax)
 8349125:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8349128:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834912b:	8b 75 d8             	mov    -0x28(%ebp),%esi
 834912e:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8349131:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8349134:	6b db 57             	imul   $0x57,%ebx,%ebx
 8349137:	c1 e6 08             	shl    $0x8,%esi
 834913a:	01 f3                	add    %esi,%ebx
 834913c:	01 d9                	add    %ebx,%ecx
 834913e:	81 c1 00 04 00 00    	add    $0x400,%ecx
 8349144:	0f b7 49 0e          	movzwl 0xe(%ecx),%ecx
 8349148:	8b 5d 08             	mov    0x8(%ebp),%ebx
 834914b:	6b f0 52             	imul   $0x52,%eax,%esi
 834914e:	89 d0                	mov    %edx,%eax
 8349150:	01 c0                	add    %eax,%eax
 8349152:	01 d0                	add    %edx,%eax
 8349154:	c1 e0 06             	shl    $0x6,%eax
 8349157:	8d 04 06             	lea    (%esi,%eax,1),%eax
 834915a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834915d:	05 c0 02 00 00       	add    $0x2c0,%eax
 8349162:	66 89 48 12          	mov    %cx,0x12(%eax)
 8349166:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8349169:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834916c:	8b 75 d8             	mov    -0x28(%ebp),%esi
 834916f:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8349172:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8349175:	6b db 57             	imul   $0x57,%ebx,%ebx
 8349178:	c1 e6 08             	shl    $0x8,%esi
 834917b:	01 f3                	add    %esi,%ebx
 834917d:	01 d9                	add    %ebx,%ecx
 834917f:	81 c1 10 04 00 00    	add    $0x410,%ecx
 8349185:	0f b7 09             	movzwl (%ecx),%ecx
 8349188:	8b 5d 08             	mov    0x8(%ebp),%ebx
 834918b:	6b f0 52             	imul   $0x52,%eax,%esi
 834918e:	89 d0                	mov    %edx,%eax
 8349190:	01 c0                	add    %eax,%eax
 8349192:	01 d0                	add    %edx,%eax
 8349194:	c1 e0 06             	shl    $0x6,%eax
 8349197:	8d 04 06             	lea    (%esi,%eax,1),%eax
 834919a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834919d:	05 d0 02 00 00       	add    $0x2d0,%eax
 83491a2:	66 89 48 04          	mov    %cx,0x4(%eax)
 83491a6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 83491a9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83491ac:	8b 75 d8             	mov    -0x28(%ebp),%esi
 83491af:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 83491b2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83491b5:	6b db 57             	imul   $0x57,%ebx,%ebx
 83491b8:	c1 e6 08             	shl    $0x8,%esi
 83491bb:	01 f3                	add    %esi,%ebx
 83491bd:	01 d9                	add    %ebx,%ecx
 83491bf:	81 c1 10 04 00 00    	add    $0x410,%ecx
 83491c5:	8b 49 02             	mov    0x2(%ecx),%ecx
 83491c8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 83491cb:	6b f0 52             	imul   $0x52,%eax,%esi
 83491ce:	89 d0                	mov    %edx,%eax
 83491d0:	01 c0                	add    %eax,%eax
 83491d2:	01 d0                	add    %edx,%eax
 83491d4:	c1 e0 06             	shl    $0x6,%eax
 83491d7:	8d 04 06             	lea    (%esi,%eax,1),%eax
 83491da:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83491dd:	05 d0 02 00 00       	add    $0x2d0,%eax
 83491e2:	89 48 06             	mov    %ecx,0x6(%eax)
 83491e5:	8b 55 d8             	mov    -0x28(%ebp),%edx
 83491e8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83491eb:	8b 75 d8             	mov    -0x28(%ebp),%esi
 83491ee:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 83491f1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83491f4:	6b db 57             	imul   $0x57,%ebx,%ebx
 83491f7:	c1 e6 08             	shl    $0x8,%esi
 83491fa:	01 f3                	add    %esi,%ebx
 83491fc:	01 d9                	add    %ebx,%ecx
 83491fe:	81 c1 10 04 00 00    	add    $0x410,%ecx
 8349204:	0f b7 49 06          	movzwl 0x6(%ecx),%ecx
 8349208:	8b 5d 08             	mov    0x8(%ebp),%ebx
 834920b:	6b f0 52             	imul   $0x52,%eax,%esi
 834920e:	89 d0                	mov    %edx,%eax
 8349210:	01 c0                	add    %eax,%eax
 8349212:	01 d0                	add    %edx,%eax
 8349214:	c1 e0 06             	shl    $0x6,%eax
 8349217:	8d 04 06             	lea    (%esi,%eax,1),%eax
 834921a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834921d:	05 d0 02 00 00       	add    $0x2d0,%eax
 8349222:	66 89 48 0a          	mov    %cx,0xa(%eax)
 8349226:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8349229:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834922c:	8b 75 d8             	mov    -0x28(%ebp),%esi
 834922f:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8349232:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8349235:	6b db 57             	imul   $0x57,%ebx,%ebx
 8349238:	c1 e6 08             	shl    $0x8,%esi
 834923b:	01 f3                	add    %esi,%ebx
 834923d:	01 d9                	add    %ebx,%ecx
 834923f:	81 c1 10 04 00 00    	add    $0x410,%ecx
 8349245:	0f b7 49 08          	movzwl 0x8(%ecx),%ecx
 8349249:	8b 5d 08             	mov    0x8(%ebp),%ebx
 834924c:	6b f0 52             	imul   $0x52,%eax,%esi
 834924f:	89 d0                	mov    %edx,%eax
 8349251:	01 c0                	add    %eax,%eax
 8349253:	01 d0                	add    %edx,%eax
 8349255:	c1 e0 06             	shl    $0x6,%eax
 8349258:	8d 04 06             	lea    (%esi,%eax,1),%eax
 834925b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834925e:	05 d0 02 00 00       	add    $0x2d0,%eax
 8349263:	66 89 48 0c          	mov    %cx,0xc(%eax)
 8349267:	8b 55 d8             	mov    -0x28(%ebp),%edx
 834926a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834926d:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8349270:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8349273:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8349276:	6b db 57             	imul   $0x57,%ebx,%ebx
 8349279:	c1 e6 08             	shl    $0x8,%esi
 834927c:	01 f3                	add    %esi,%ebx
 834927e:	01 d9                	add    %ebx,%ecx
 8349280:	81 c1 10 04 00 00    	add    $0x410,%ecx
 8349286:	0f b7 49 0a          	movzwl 0xa(%ecx),%ecx
 834928a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 834928d:	6b f0 52             	imul   $0x52,%eax,%esi
 8349290:	89 d0                	mov    %edx,%eax
 8349292:	01 c0                	add    %eax,%eax
 8349294:	01 d0                	add    %edx,%eax
 8349296:	c1 e0 06             	shl    $0x6,%eax
 8349299:	8d 04 06             	lea    (%esi,%eax,1),%eax
 834929c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834929f:	05 d0 02 00 00       	add    $0x2d0,%eax
 83492a4:	66 89 48 0e          	mov    %cx,0xe(%eax)
 83492a8:	8b 55 d8             	mov    -0x28(%ebp),%edx
 83492ab:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83492ae:	8b 75 d8             	mov    -0x28(%ebp),%esi
 83492b1:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 83492b4:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83492b7:	6b db 57             	imul   $0x57,%ebx,%ebx
 83492ba:	c1 e6 08             	shl    $0x8,%esi
 83492bd:	01 f3                	add    %esi,%ebx
 83492bf:	01 d9                	add    %ebx,%ecx
 83492c1:	81 c1 10 04 00 00    	add    $0x410,%ecx
 83492c7:	0f b7 49 0c          	movzwl 0xc(%ecx),%ecx
 83492cb:	8b 5d 08             	mov    0x8(%ebp),%ebx
 83492ce:	6b f0 52             	imul   $0x52,%eax,%esi
 83492d1:	89 d0                	mov    %edx,%eax
 83492d3:	01 c0                	add    %eax,%eax
 83492d5:	01 d0                	add    %edx,%eax
 83492d7:	c1 e0 06             	shl    $0x6,%eax
 83492da:	8d 04 06             	lea    (%esi,%eax,1),%eax
 83492dd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83492e0:	05 d0 02 00 00       	add    $0x2d0,%eax
 83492e5:	66 89 48 10          	mov    %cx,0x10(%eax)
 83492e9:	8b 55 d8             	mov    -0x28(%ebp),%edx
 83492ec:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83492ef:	8b 75 d8             	mov    -0x28(%ebp),%esi
 83492f2:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 83492f5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83492f8:	6b db 57             	imul   $0x57,%ebx,%ebx
 83492fb:	c1 e6 08             	shl    $0x8,%esi
 83492fe:	01 f3                	add    %esi,%ebx
 8349300:	01 d9                	add    %ebx,%ecx
 8349302:	81 c1 10 04 00 00    	add    $0x410,%ecx
 8349308:	8b 49 0e             	mov    0xe(%ecx),%ecx
 834930b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 834930e:	6b f0 52             	imul   $0x52,%eax,%esi
 8349311:	89 d0                	mov    %edx,%eax
 8349313:	01 c0                	add    %eax,%eax
 8349315:	01 d0                	add    %edx,%eax
 8349317:	c1 e0 06             	shl    $0x6,%eax
 834931a:	8d 04 06             	lea    (%esi,%eax,1),%eax
 834931d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8349320:	05 d0 02 00 00       	add    $0x2d0,%eax
 8349325:	89 48 12             	mov    %ecx,0x12(%eax)
 8349328:	8b 55 d8             	mov    -0x28(%ebp),%edx
 834932b:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 834932e:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8349331:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8349334:	8b 45 0c             	mov    0xc(%ebp),%eax
 8349337:	6b c9 57             	imul   $0x57,%ecx,%ecx
 834933a:	c1 e6 08             	shl    $0x8,%esi
 834933d:	01 f1                	add    %esi,%ecx
 834933f:	01 c8                	add    %ecx,%eax
 8349341:	05 20 04 00 00       	add    $0x420,%eax
 8349346:	0f b6 48 02          	movzbl 0x2(%eax),%ecx
 834934a:	8b 75 08             	mov    0x8(%ebp),%esi
 834934d:	89 d0                	mov    %edx,%eax
 834934f:	01 c0                	add    %eax,%eax
 8349351:	01 d0                	add    %edx,%eax
 8349353:	c1 e0 06             	shl    $0x6,%eax
 8349356:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8349359:	01 d8                	add    %ebx,%eax
 834935b:	05 40 03 00 00       	add    $0x340,%eax
 8349360:	88 48 10             	mov    %cl,0x10(%eax)
 8349363:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8349366:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8349369:	89 d0                	mov    %edx,%eax
 834936b:	01 c0                	add    %eax,%eax
 834936d:	01 d0                	add    %edx,%eax
 834936f:	c1 e0 02             	shl    $0x2,%eax
 8349372:	89 ca                	mov    %ecx,%edx
 8349374:	c1 e2 08             	shl    $0x8,%edx
 8349377:	01 d0                	add    %edx,%eax
 8349379:	05 80 04 00 00       	add    $0x480,%eax
 834937e:	89 c3                	mov    %eax,%ebx
 8349380:	03 5d 0c             	add    0xc(%ebp),%ebx
 8349383:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8349386:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8349389:	89 c2                	mov    %eax,%edx
 834938b:	01 d2                	add    %edx,%edx
 834938d:	01 c2                	add    %eax,%edx
 834938f:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 8349396:	89 c2                	mov    %eax,%edx
 8349398:	89 c8                	mov    %ecx,%eax
 834939a:	01 c0                	add    %eax,%eax
 834939c:	01 c8                	add    %ecx,%eax
 834939e:	c1 e0 06             	shl    $0x6,%eax
 83493a1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83493a4:	05 30 03 00 00       	add    $0x330,%eax
 83493a9:	03 45 08             	add    0x8(%ebp),%eax
 83493ac:	83 c0 08             	add    $0x8,%eax
 83493af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83493b3:	89 04 24             	mov    %eax,(%esp)
 83493b6:	e8 d1 5c fc ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 83493bb:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 83493bf:	83 7d dc 01          	cmpl   $0x1,-0x24(%ebp)
 83493c3:	0f 9e c0             	setle  %al
 83493c6:	84 c0                	test   %al,%al
 83493c8:	0f 85 a7 fa ff ff    	jne    8348e75 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x5e1>
 83493ce:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 83493d2:	83 7d d8 06          	cmpl   $0x6,-0x28(%ebp)
 83493d6:	0f 9e c0             	setle  %al
 83493d9:	84 c0                	test   %al,%al
 83493db:	0f 85 88 fa ff ff    	jne    8348e69 <_ZN10CCharacter8set_dataEP17STCharacterScript+0x5d5>
 83493e1:	83 c4 5c             	add    $0x5c,%esp
 83493e4:	5b                   	pop    %ebx
 83493e5:	5e                   	pop    %esi
 83493e6:	5f                   	pop    %edi
 83493e7:	5d                   	pop    %ebp
 83493e8:	c3                   	ret
 83493e9:	90                   	nop

```

```c
// CCharacter::set_data @ 0x8348894

/* CCharacter::set_data(STCharacterScript*) */

void __thiscall CCharacter::set_data(CCharacter *this,STCharacterScript *param_1)

{
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  for (local_40 = 0; local_40 < 7; local_40 = local_40 + 1) {
    if (local_40 == 0) {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0x28);
      *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 0x2c);
      *(undefined2 *)(this + 10) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0x30);
      *(undefined2 *)(this + 0xe) = *(undefined2 *)(param_1 + 0x32);
      for (local_3c = 0; local_3c < 4; local_3c = local_3c + 1) {
        *(undefined2 *)(this + (local_3c + 8) * 2) =
             *(undefined2 *)(param_1 + (local_3c + 8) * 2 + 0x24);
      }
      for (local_38 = 0; local_38 < 0x11; local_38 = local_38 + 1) {
        *(undefined2 *)(this + (local_38 + 8) * 2 + 8) =
             *(undefined2 *)(param_1 + (local_38 + 8) * 2 + 0x2c);
      }
      *(undefined4 *)(this + 0x3a) = *(undefined4 *)(param_1 + 0x5e);
      *(undefined2 *)(this + 0x3e) = *(undefined2 *)(param_1 + 0x62);
      *(undefined2 *)(this + 0x40) = *(undefined2 *)(param_1 + 100);
      *(undefined4 *)(this + 0x42) = *(undefined4 *)(param_1 + 0x66);
      *(undefined2 *)(this + 0x46) = *(undefined2 *)(param_1 + 0x6a);
      *(undefined2 *)(this + 0x48) = *(undefined2 *)(param_1 + 0x6c);
      *(undefined2 *)(this + 0x4a) = *(undefined2 *)(param_1 + 0x6e);
      *(undefined2 *)(this + 0x4c) = *(undefined2 *)(param_1 + 0x70);
      *(undefined4 *)(this + 0x4e) = *(undefined4 *)(param_1 + 0x72);
      this[0x7d4] = *(CCharacter *)(param_1 + 0x76);
    }
    else {
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x52) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x24);
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x56) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x28);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x5a) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x2c);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x5c) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x2e);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x5e) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x30);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x60) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x32);
      for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
        *(undefined2 *)(this + (local_40 + -1) * 0x52 + local_34 * 2 + 0x62) =
             *(undefined2 *)(param_1 + (local_34 + 8) * 2 + local_40 * 0x57 + 0x24);
      }
      for (local_30 = 0; local_30 < 0x11; local_30 = local_30 + 1) {
        *(undefined2 *)(this + (local_40 + -1) * 0x52 + local_30 * 2 + 0x6a) =
             *(undefined2 *)(param_1 + (local_30 + 8) * 2 + local_40 * 0x57 + 0x2c);
      }
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x8c) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x5e);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x90) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x62);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x92) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 100);
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0x94) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x66);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x98) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x6a);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x9a) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x6c);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x9c) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x6e);
      *(undefined2 *)(this + (local_40 + -1) * 0x52 + 0x9e) =
           *(undefined2 *)(param_1 + local_40 * 0x57 + 0x70);
      *(undefined4 *)(this + (local_40 + -1) * 0x52 + 0xa0) =
           *(undefined4 *)(param_1 + local_40 * 0x57 + 0x72);
      this[local_40 + 0x7d4] = *(CCharacter *)(param_1 + local_40 * 0x57 + 0x76);
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               (this + local_40 * 0xc + 0x240),(vector *)(param_1 + local_40 * 0xc + 0x288));
  }
  for (local_2c = 0; local_2c < 7; local_2c = local_2c + 1) {
    for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x294) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3d0);
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x298) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3d4);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x29c) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3d8);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x29e) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3da);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2a0) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3dc);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2a2) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x3de);
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        *(undefined2 *)(this + (local_28 * 0x29 + local_2c * 0x60) * 2 + local_24 * 2 + 0x2a4) =
             *(undefined2 *)
              (param_1 + (local_24 + 8) * 2 + local_28 * 0x57 + local_2c * 0x100 + 0x3d0);
      }
      for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
        *(undefined2 *)(this + (local_28 * 0x29 + local_2c * 0x60) * 2 + local_20 * 2 + 0x2ac) =
             *(undefined2 *)
              (param_1 + (local_20 + 8) * 2 + local_28 * 0x57 + local_2c * 0x100 + 0x3d8);
      }
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2ce) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x40a);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2d2) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x40e);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2d4) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x410);
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2d6) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x412);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2da) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x416);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2dc) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x418);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2de) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x41a);
      *(undefined2 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2e0) =
           *(undefined2 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x41c);
      *(undefined4 *)(this + local_28 * 0x52 + local_2c * 0xc0 + 0x2e2) =
           *(undefined4 *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x41e);
      this[local_28 + local_2c * 0xc0 + 0x350] =
           *(CCharacter *)(param_1 + local_28 * 0x57 + local_2c * 0x100 + 0x422);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                 (this + local_28 * 0xc + local_2c * 0xc0 + 0x338),
                 (vector *)(param_1 + local_28 * 0xc + local_2c * 0x100 + 0x480));
    }
  }
  return;
}

```

---

## ~CCharacter

```asm
// === 0834842a CCharacter::~CCharacter  [0x0834842a-0x834852d] ===
 834842a:	55                   	push   %ebp
 834842b:	89 e5                	mov    %esp,%ebp
 834842d:	57                   	push   %edi
 834842e:	56                   	push   %esi
 834842f:	53                   	push   %ebx
 8348430:	83 ec 1c             	sub    $0x1c,%esp
 8348433:	8b 45 08             	mov    0x8(%ebp),%eax
 8348436:	89 04 24             	mov    %eax,(%esp)
 8348439:	e8 86 01 00 00       	call   83485c4 <_ZN10CCharacter7destroyEv>
 834843e:	eb 40                	jmp    8348480 <_ZN10CCharacterD1Ev+0x56>
 8348440:	89 d6                	mov    %edx,%esi
 8348442:	89 c7                	mov    %eax,%edi
 8348444:	8b 45 08             	mov    0x8(%ebp),%eax
 8348447:	05 94 02 00 00       	add    $0x294,%eax
 834844c:	85 c0                	test   %eax,%eax
 834844e:	74 2a                	je     834847a <_ZN10CCharacterD1Ev+0x50>
 8348450:	8b 45 08             	mov    0x8(%ebp),%eax
 8348453:	05 94 02 00 00       	add    $0x294,%eax
 8348458:	8d 98 40 05 00 00    	lea    0x540(%eax),%ebx
 834845e:	8b 45 08             	mov    0x8(%ebp),%eax
 8348461:	05 94 02 00 00       	add    $0x294,%eax
 8348466:	39 c3                	cmp    %eax,%ebx
 8348468:	74 10                	je     834847a <_ZN10CCharacterD1Ev+0x50>
 834846a:	81 eb c0 00 00 00    	sub    $0xc0,%ebx
 8348470:	89 1c 24             	mov    %ebx,(%esp)
 8348473:	e8 ac de 02 00       	call   8376324 <_ZN20STSecondGrowTypeInfoD1Ev>
 8348478:	eb e4                	jmp    834845e <_ZN10CCharacterD1Ev+0x34>
 834847a:	89 f8                	mov    %edi,%eax
 834847c:	89 f2                	mov    %esi,%edx
 834847e:	eb 36                	jmp    83484b6 <_ZN10CCharacterD1Ev+0x8c>
 8348480:	8b 45 08             	mov    0x8(%ebp),%eax
 8348483:	05 94 02 00 00       	add    $0x294,%eax
 8348488:	85 c0                	test   %eax,%eax
 834848a:	74 6a                	je     83484f6 <_ZN10CCharacterD1Ev+0xcc>
 834848c:	8b 45 08             	mov    0x8(%ebp),%eax
 834848f:	05 94 02 00 00       	add    $0x294,%eax
 8348494:	8d 98 40 05 00 00    	lea    0x540(%eax),%ebx
 834849a:	8b 45 08             	mov    0x8(%ebp),%eax
 834849d:	05 94 02 00 00       	add    $0x294,%eax
 83484a2:	39 c3                	cmp    %eax,%ebx
 83484a4:	74 50                	je     83484f6 <_ZN10CCharacterD1Ev+0xcc>
 83484a6:	81 eb c0 00 00 00    	sub    $0xc0,%ebx
 83484ac:	89 1c 24             	mov    %ebx,(%esp)
 83484af:	e8 70 de 02 00       	call   8376324 <_ZN20STSecondGrowTypeInfoD1Ev>
 83484b4:	eb e4                	jmp    834849a <_ZN10CCharacterD1Ev+0x70>
 83484b6:	89 d6                	mov    %edx,%esi
 83484b8:	89 c7                	mov    %eax,%edi
 83484ba:	8b 45 08             	mov    0x8(%ebp),%eax
 83484bd:	05 40 02 00 00       	add    $0x240,%eax
 83484c2:	85 c0                	test   %eax,%eax
 83484c4:	74 24                	je     83484ea <_ZN10CCharacterD1Ev+0xc0>
 83484c6:	8b 45 08             	mov    0x8(%ebp),%eax
 83484c9:	05 40 02 00 00       	add    $0x240,%eax
 83484ce:	8d 58 54             	lea    0x54(%eax),%ebx
 83484d1:	8b 45 08             	mov    0x8(%ebp),%eax
 83484d4:	05 40 02 00 00       	add    $0x240,%eax
 83484d9:	39 c3                	cmp    %eax,%ebx
 83484db:	74 0d                	je     83484ea <_ZN10CCharacterD1Ev+0xc0>
 83484dd:	83 eb 0c             	sub    $0xc,%ebx
 83484e0:	89 1c 24             	mov    %ebx,(%esp)
 83484e3:	e8 02 c5 de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 83484e8:	eb e7                	jmp    83484d1 <_ZN10CCharacterD1Ev+0xa7>
 83484ea:	89 f8                	mov    %edi,%eax
 83484ec:	89 f2                	mov    %esi,%edx
 83484ee:	89 04 24             	mov    %eax,(%esp)
 83484f1:	e8 5a b2 79 00       	call   8ae3750 <_Unwind_Resume>
 83484f6:	8b 45 08             	mov    0x8(%ebp),%eax
 83484f9:	05 40 02 00 00       	add    $0x240,%eax
 83484fe:	85 c0                	test   %eax,%eax
 8348500:	74 24                	je     8348526 <_ZN10CCharacterD1Ev+0xfc>
 8348502:	8b 45 08             	mov    0x8(%ebp),%eax
 8348505:	05 40 02 00 00       	add    $0x240,%eax
 834850a:	8d 58 54             	lea    0x54(%eax),%ebx
 834850d:	8b 45 08             	mov    0x8(%ebp),%eax
 8348510:	05 40 02 00 00       	add    $0x240,%eax
 8348515:	39 c3                	cmp    %eax,%ebx
 8348517:	74 0d                	je     8348526 <_ZN10CCharacterD1Ev+0xfc>
 8348519:	83 eb 0c             	sub    $0xc,%ebx
 834851c:	89 1c 24             	mov    %ebx,(%esp)
 834851f:	e8 c6 c4 de ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8348524:	eb e7                	jmp    834850d <_ZN10CCharacterD1Ev+0xe3>
 8348526:	83 c4 1c             	add    $0x1c,%esp
 8348529:	5b                   	pop    %ebx
 834852a:	5e                   	pop    %esi
 834852b:	5f                   	pop    %edi
 834852c:	5d                   	pop    %ebp
 834852d:	c3                   	ret

```

```c
// CCharacter::~CCharacter @ 0x834842a

/* CCharacter::~CCharacter() */

void __thiscall CCharacter::~CCharacter(CCharacter *this)

{
  STSecondGrowTypeInfo *this_00;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *this_01;
  
                    /* try { // try from 08348439 to 0834843d has its CatchHandler @ 08348440 */
  destroy(this);
  if (this != (CCharacter *)0xfffffd6c) {
    this_00 = (STSecondGrowTypeInfo *)(this + 0x7d4);
    while (this_00 != (STSecondGrowTypeInfo *)(this + 0x294)) {
      this_00 = this_00 + -0xc0;
                    /* try { // try from 083484af to 083484b3 has its CatchHandler @ 083484b6 */
      STSecondGrowTypeInfo::~STSecondGrowTypeInfo(this_00);
    }
  }
  if (this != (CCharacter *)0xfffffdc0) {
    this_01 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x294);
    while (this_01 !=
           (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x240)) {
      this_01 = this_01 + -0xc;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(this_01);
    }
  }
  return;
}

```

