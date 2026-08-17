# CDelivery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CDelivery

```asm
// === 08116386 CDelivery::CDelivery  [0x08116386-0x8116399] ===
 8116386:	55                   	push   %ebp
 8116387:	89 e5                	mov    %esp,%ebp
 8116389:	83 ec 18             	sub    $0x18,%esp
 811638c:	8b 45 08             	mov    0x8(%ebp),%eax
 811638f:	89 04 24             	mov    %eax,(%esp)
 8116392:	e8 3b 17 00 00       	call   8117ad2 <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEEC1Ev>
 8116397:	c9                   	leave
 8116398:	c3                   	ret
 8116399:	90                   	nop

```

```c
// CDelivery::CDelivery @ 0x8116386

/* CDelivery::CDelivery() */

void __thiscall CDelivery::CDelivery(CDelivery *this)

{
  std::
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  ::map((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
         *)this);
  return;
}

```

---

## attach

```asm
// === 081163fa CDelivery::attach  [0x081163fa-0x81165f9] ===
 81163fa:	55                   	push   %ebp
 81163fb:	89 e5                	mov    %esp,%ebp
 81163fd:	53                   	push   %ebx
 81163fe:	83 ec 44             	sub    $0x44,%esp
 8116401:	8b 45 0c             	mov    0xc(%ebp),%eax
 8116404:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116408:	8b 45 08             	mov    0x8(%ebp),%eax
 811640b:	89 04 24             	mov    %eax,(%esp)
 811640e:	e8 c9 ff ff ff       	call   81163dc <_ZN9CDelivery12checkAddressEi>
 8116413:	83 f0 01             	xor    $0x1,%eax
 8116416:	84 c0                	test   %al,%al
 8116418:	0f 85 d2 01 00 00    	jne    81165f0 <_ZN9CDelivery6attachEiP10CEventBase+0x1f6>
 811641e:	8b 55 08             	mov    0x8(%ebp),%edx
 8116421:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8116424:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8116427:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 811642b:	89 54 24 04          	mov    %edx,0x4(%esp)
 811642f:	89 04 24             	mov    %eax,(%esp)
 8116432:	e8 29 17 00 00       	call   8117b60 <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 8116437:	83 ec 04             	sub    $0x4,%esp
 811643a:	8b 55 08             	mov    0x8(%ebp),%edx
 811643d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8116440:	89 54 24 04          	mov    %edx,0x4(%esp)
 8116444:	89 04 24             	mov    %eax,(%esp)
 8116447:	e8 40 17 00 00       	call   8117b8c <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 811644c:	83 ec 04             	sub    $0x4,%esp
 811644f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8116452:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116456:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8116459:	89 04 24             	mov    %eax,(%esp)
 811645c:	e8 51 17 00 00       	call   8117bb2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt4listIP10CEventBaseSaIS4_EEEEneERKS8_>
 8116461:	84 c0                	test   %al,%al
 8116463:	0f 84 64 01 00 00    	je     81165cd <_ZN9CDelivery6attachEiP10CEventBase+0x1d3>
 8116469:	bb 00 00 00 00       	mov    $0x0,%ebx
 811646e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8116471:	89 04 24             	mov    %eax,(%esp)
 8116474:	e8 4d 17 00 00       	call   8117bc6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt4listIP10CEventBaseSaIS4_EEEEptEv>
 8116479:	8d 50 04             	lea    0x4(%eax),%edx
 811647c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 811647f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8116483:	89 54 24 04          	mov    %edx,0x4(%esp)
 8116487:	89 04 24             	mov    %eax,(%esp)
 811648a:	e8 44 17 00 00       	call   8117bd3 <_ZN5boost15foreach_detail_7containISt4listIP10CEventBaseSaIS4_EEEENS0_8auto_anyIPT_EERS8_PN4mpl_5bool_ILb0EEE>
 811648f:	83 ec 04             	sub    $0x4,%esp
 8116492:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8116495:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8116498:	8b 45 e8             	mov    -0x18(%ebp),%eax
 811649b:	89 04 24             	mov    %eax,(%esp)
 811649e:	e8 77 6a fb ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 81164a3:	84 c0                	test   %al,%al
 81164a5:	0f 85 22 01 00 00    	jne    81165cd <_ZN9CDelivery6attachEiP10CEventBase+0x1d3>
 81164ab:	ba 00 00 00 00       	mov    $0x0,%edx
 81164b0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81164b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81164b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81164be:	00 
 81164bf:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81164c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81164c6:	89 04 24             	mov    %eax,(%esp)
 81164c9:	e8 36 17 00 00       	call   8117c04 <_ZN5boost15foreach_detail_5beginISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISC_SD_EEPS9_>
 81164ce:	83 ec 04             	sub    $0x4,%esp
 81164d1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81164d4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81164d7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81164da:	89 04 24             	mov    %eax,(%esp)
 81164dd:	e8 38 6a fb ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 81164e2:	84 c0                	test   %al,%al
 81164e4:	0f 85 e3 00 00 00    	jne    81165cd <_ZN9CDelivery6attachEiP10CEventBase+0x1d3>
 81164ea:	ba 00 00 00 00       	mov    $0x0,%edx
 81164ef:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81164f2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81164f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81164fd:	00 
 81164fe:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8116501:	89 54 24 04          	mov    %edx,0x4(%esp)
 8116505:	89 04 24             	mov    %eax,(%esp)
 8116508:	e8 40 17 00 00       	call   8117c4d <_ZN5boost15foreach_detail_3endISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISC_SD_EEPS9_>
 811650d:	83 ec 04             	sub    $0x4,%esp
 8116510:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8116513:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8116516:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8116519:	89 04 24             	mov    %eax,(%esp)
 811651c:	e8 f9 69 fb ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 8116521:	84 c0                	test   %al,%al
 8116523:	0f 85 a4 00 00 00    	jne    81165cd <_ZN9CDelivery6attachEiP10CEventBase+0x1d3>
 8116529:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 811652d:	eb 61                	jmp    8116590 <_ZN9CDelivery6attachEiP10CEventBase+0x196>
 811652f:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8116532:	89 04 24             	mov    %eax,(%esp)
 8116535:	e8 ea 69 fb ff       	call   80ccf24 <_ZN5boost15foreach_detail_9set_falseERb>
 811653a:	84 c0                	test   %al,%al
 811653c:	75 37                	jne    8116575 <_ZN9CDelivery6attachEiP10CEventBase+0x17b>
 811653e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8116545:	00 
 8116546:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8116549:	89 04 24             	mov    %eax,(%esp)
 811654c:	e8 91 17 00 00       	call   8117ce2 <_ZN5boost15foreach_detail_5derefISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEENS0_17foreach_referenceIT_T0_E4typeERKNS0_13auto_any_baseEPNS0_9type2typeISB_SC_EE>
 8116551:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8116554:	eb 14                	jmp    811656a <_ZN9CDelivery6attachEiP10CEventBase+0x170>
 8116556:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8116559:	8b 10                	mov    (%eax),%edx
 811655b:	8b 45 10             	mov    0x10(%ebp),%eax
 811655e:	39 c2                	cmp    %eax,%edx
 8116560:	0f 84 8d 00 00 00    	je     81165f3 <_ZN9CDelivery6attachEiP10CEventBase+0x1f9>
 8116566:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 811656a:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 811656e:	83 f0 01             	xor    $0x1,%eax
 8116571:	84 c0                	test   %al,%al
 8116573:	75 e1                	jne    8116556 <_ZN9CDelivery6attachEiP10CEventBase+0x15c>
 8116575:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8116579:	84 c0                	test   %al,%al
 811657b:	74 13                	je     8116590 <_ZN9CDelivery6attachEiP10CEventBase+0x196>
 811657d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8116584:	00 
 8116585:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8116588:	89 04 24             	mov    %eax,(%esp)
 811658b:	e8 37 17 00 00       	call   8117cc7 <_ZN5boost15foreach_detail_4nextISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEEvRKNS0_13auto_any_baseEPNS0_9type2typeIT_T0_EE>
 8116590:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8116594:	84 c0                	test   %al,%al
 8116596:	74 28                	je     81165c0 <_ZN9CDelivery6attachEiP10CEventBase+0x1c6>
 8116598:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 811659f:	00 
 81165a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81165a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81165a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81165aa:	89 04 24             	mov    %eax,(%esp)
 81165ad:	e8 e4 16 00 00       	call   8117c96 <_ZN5boost15foreach_detail_4doneISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEEbRKNS0_13auto_any_baseESC_PNS0_9type2typeIT_T0_EE>
 81165b2:	83 f0 01             	xor    $0x1,%eax
 81165b5:	84 c0                	test   %al,%al
 81165b7:	74 07                	je     81165c0 <_ZN9CDelivery6attachEiP10CEventBase+0x1c6>
 81165b9:	b8 01 00 00 00       	mov    $0x1,%eax
 81165be:	eb 05                	jmp    81165c5 <_ZN9CDelivery6attachEiP10CEventBase+0x1cb>
 81165c0:	b8 00 00 00 00       	mov    $0x0,%eax
 81165c5:	84 c0                	test   %al,%al
 81165c7:	0f 85 62 ff ff ff    	jne    811652f <_ZN9CDelivery6attachEiP10CEventBase+0x135>
 81165cd:	8b 45 08             	mov    0x8(%ebp),%eax
 81165d0:	8d 55 0c             	lea    0xc(%ebp),%edx
 81165d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81165d7:	89 04 24             	mov    %eax,(%esp)
 81165da:	e8 49 17 00 00       	call   8117d28 <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEEixERS8_>
 81165df:	8d 55 10             	lea    0x10(%ebp),%edx
 81165e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81165e6:	89 04 24             	mov    %eax,(%esp)
 81165e9:	e8 86 18 00 00       	call   8117e74 <_ZNSt4listIP10CEventBaseSaIS1_EE9push_backERKS1_>
 81165ee:	eb 04                	jmp    81165f4 <_ZN9CDelivery6attachEiP10CEventBase+0x1fa>
 81165f0:	90                   	nop
 81165f1:	eb 01                	jmp    81165f4 <_ZN9CDelivery6attachEiP10CEventBase+0x1fa>
 81165f3:	90                   	nop
 81165f4:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81165f7:	c9                   	leave
 81165f8:	c3                   	ret
 81165f9:	90                   	nop

```

```c
// CDelivery::attach @ 0x81163fa

/* CDelivery::attach(int, CEventBase*) */

void __thiscall CDelivery::attach(CDelivery *this,int param_1,CEventBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  list<CEventBase*,std::allocator<CEventBase*>> *this_00;
  bool local_31;
  _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
  local_30 [4];
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  local_2c [4];
  list local_28 [4];
  auto_any_base local_24 [4];
  auto_any_base local_20 [4];
  type2type *local_1c;
  auto_any_base *local_18;
  auto_any_base *local_14;
  int *local_10;
  
  cVar1 = checkAddress(this,param_1);
  if (cVar1 == '\x01') {
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::find((int *)local_30);
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
            ::operator!=(local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar1 != '\0') {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
              ::operator->(local_30);
      boost::foreach_detail_::contain<std::list<CEventBase*,std::allocator<CEventBase*>>>
                (local_28,(bool_ *)(iVar3 + 4));
      local_1c = (type2type *)local_28;
      bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool
                        ((auto_any_base *)local_1c);
      if (!bVar2) {
        boost::foreach_detail_::
        begin<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                  (local_24,local_1c,(bool_ *)0x0);
        local_18 = local_24;
        bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
        if (!bVar2) {
          boost::foreach_detail_::
          end<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                    (local_20,local_1c,(bool_ *)0x0);
          local_14 = local_20;
          bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_14);
          if (!bVar2) {
            local_31 = true;
            while( true ) {
              if ((local_31 == false) ||
                 (bVar2 = boost::foreach_detail_::
                          done<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                                    (local_18,local_14,(type2type *)0x0), bVar2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              cVar1 = boost::foreach_detail_::set_false(&local_31);
              if (cVar1 == '\0') {
                local_10 = (int *)boost::foreach_detail_::
                                  deref<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                                            (local_18,(type2type *)0x0);
                while (local_31 != true) {
                  if ((CEventBase *)*local_10 == param_2) {
                    return;
                  }
                  local_31 = true;
                }
              }
              if (local_31 != false) {
                boost::foreach_detail_::
                next<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                          (local_18,(type2type *)0x0);
              }
            }
          }
        }
      }
    }
    this_00 = (list<CEventBase*,std::allocator<CEventBase*>> *)
              std::
              map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
              ::operator[]((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
                            *)this,&param_1);
    std::list<CEventBase*,std::allocator<CEventBase*>>::push_back(this_00,&param_2);
  }
  return;
}

```

---

## checkAddress

```asm
// === 081163dc CDelivery::checkAddress  [0x081163dc-0x81163f9] ===
 81163dc:	55                   	push   %ebp
 81163dd:	89 e5                	mov    %esp,%ebp
 81163df:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81163e3:	7e 0d                	jle    81163f2 <_ZN9CDelivery12checkAddressEi+0x16>
 81163e5:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 81163e9:	7f 07                	jg     81163f2 <_ZN9CDelivery12checkAddressEi+0x16>
 81163eb:	b8 01 00 00 00       	mov    $0x1,%eax
 81163f0:	eb 05                	jmp    81163f7 <_ZN9CDelivery12checkAddressEi+0x1b>
 81163f2:	b8 00 00 00 00       	mov    $0x0,%eax
 81163f7:	5d                   	pop    %ebp
 81163f8:	c3                   	ret
 81163f9:	90                   	nop

```

```c
// CDelivery::checkAddress @ 0x81163dc

/* CDelivery::checkAddress(int) */

undefined4 __thiscall CDelivery::checkAddress(CDelivery *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (2 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## detach

```asm
// === 081165fa CDelivery::detach  [0x081165fa-0x8116681] ===
 81165fa:	55                   	push   %ebp
 81165fb:	89 e5                	mov    %esp,%ebp
 81165fd:	83 ec 28             	sub    $0x28,%esp
 8116600:	8b 45 0c             	mov    0xc(%ebp),%eax
 8116603:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116607:	8b 45 08             	mov    0x8(%ebp),%eax
 811660a:	89 04 24             	mov    %eax,(%esp)
 811660d:	e8 ca fd ff ff       	call   81163dc <_ZN9CDelivery12checkAddressEi>
 8116612:	83 f0 01             	xor    $0x1,%eax
 8116615:	84 c0                	test   %al,%al
 8116617:	75 66                	jne    811667f <_ZN9CDelivery6detachEiP10CEventBase+0x85>
 8116619:	8b 55 08             	mov    0x8(%ebp),%edx
 811661c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 811661f:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8116622:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8116626:	89 54 24 04          	mov    %edx,0x4(%esp)
 811662a:	89 04 24             	mov    %eax,(%esp)
 811662d:	e8 2e 15 00 00       	call   8117b60 <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 8116632:	83 ec 04             	sub    $0x4,%esp
 8116635:	8b 55 08             	mov    0x8(%ebp),%edx
 8116638:	8d 45 f4             	lea    -0xc(%ebp),%eax
 811663b:	89 54 24 04          	mov    %edx,0x4(%esp)
 811663f:	89 04 24             	mov    %eax,(%esp)
 8116642:	e8 45 15 00 00       	call   8117b8c <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 8116647:	83 ec 04             	sub    $0x4,%esp
 811664a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 811664d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116651:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8116654:	89 04 24             	mov    %eax,(%esp)
 8116657:	e8 56 15 00 00       	call   8117bb2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt4listIP10CEventBaseSaIS4_EEEEneERKS8_>
 811665c:	84 c0                	test   %al,%al
 811665e:	74 20                	je     8116680 <_ZN9CDelivery6detachEiP10CEventBase+0x86>
 8116660:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8116663:	89 04 24             	mov    %eax,(%esp)
 8116666:	e8 5b 15 00 00       	call   8117bc6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt4listIP10CEventBaseSaIS4_EEEEptEv>
 811666b:	8d 50 04             	lea    0x4(%eax),%edx
 811666e:	8d 45 10             	lea    0x10(%ebp),%eax
 8116671:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116675:	89 14 24             	mov    %edx,(%esp)
 8116678:	e8 2d 18 00 00       	call   8117eaa <_ZNSt4listIP10CEventBaseSaIS1_EE6removeERKS1_>
 811667d:	eb 01                	jmp    8116680 <_ZN9CDelivery6detachEiP10CEventBase+0x86>
 811667f:	90                   	nop
 8116680:	c9                   	leave
 8116681:	c3                   	ret

```

```c
// CDelivery::detach @ 0x81165fa

/* CDelivery::detach(int, CEventBase*) */

void CDelivery::detach(int param_1,CEventBase *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
  local_14 [4];
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  local_10 [12];
  
  cVar1 = checkAddress((CDelivery *)param_1,(int)param_2);
  if (cVar1 == '\x01') {
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::find((int *)local_14);
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
            ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
              ::operator->(local_14);
      std::list<CEventBase*,std::allocator<CEventBase*>>::remove
                ((list<CEventBase*,std::allocator<CEventBase*>> *)(iVar2 + 4),
                 (CEventBase **)&stack0x0000000c);
    }
  }
  return;
}

```

---

## notify

```asm
// === 08116682 CDelivery::notify  [0x08116682-0x8116873] ===
 8116682:	55                   	push   %ebp
 8116683:	89 e5                	mov    %esp,%ebp
 8116685:	53                   	push   %ebx
 8116686:	83 ec 44             	sub    $0x44,%esp
 8116689:	8b 45 0c             	mov    0xc(%ebp),%eax
 811668c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116690:	8b 45 08             	mov    0x8(%ebp),%eax
 8116693:	89 04 24             	mov    %eax,(%esp)
 8116696:	e8 41 fd ff ff       	call   81163dc <_ZN9CDelivery12checkAddressEi>
 811669b:	83 f0 01             	xor    $0x1,%eax
 811669e:	84 c0                	test   %al,%al
 81166a0:	0f 85 c7 01 00 00    	jne    811686d <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1eb>
 81166a6:	8b 55 08             	mov    0x8(%ebp),%edx
 81166a9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81166ac:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81166af:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81166b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81166b7:	89 04 24             	mov    %eax,(%esp)
 81166ba:	e8 a1 14 00 00       	call   8117b60 <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 81166bf:	83 ec 04             	sub    $0x4,%esp
 81166c2:	8b 55 08             	mov    0x8(%ebp),%edx
 81166c5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81166c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81166cc:	89 04 24             	mov    %eax,(%esp)
 81166cf:	e8 b8 14 00 00       	call   8117b8c <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 81166d4:	83 ec 04             	sub    $0x4,%esp
 81166d7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81166da:	89 44 24 04          	mov    %eax,0x4(%esp)
 81166de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81166e1:	89 04 24             	mov    %eax,(%esp)
 81166e4:	e8 c9 14 00 00       	call   8117bb2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt4listIP10CEventBaseSaIS4_EEEEneERKS8_>
 81166e9:	84 c0                	test   %al,%al
 81166eb:	0f 84 7d 01 00 00    	je     811686e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1ec>
 81166f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81166f6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81166f9:	89 04 24             	mov    %eax,(%esp)
 81166fc:	e8 c5 14 00 00       	call   8117bc6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt4listIP10CEventBaseSaIS4_EEEEptEv>
 8116701:	8d 50 04             	lea    0x4(%eax),%edx
 8116704:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8116707:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 811670b:	89 54 24 04          	mov    %edx,0x4(%esp)
 811670f:	89 04 24             	mov    %eax,(%esp)
 8116712:	e8 bc 14 00 00       	call   8117bd3 <_ZN5boost15foreach_detail_7containISt4listIP10CEventBaseSaIS4_EEEENS0_8auto_anyIPT_EERS8_PN4mpl_5bool_ILb0EEE>
 8116717:	83 ec 04             	sub    $0x4,%esp
 811671a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 811671d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8116720:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8116723:	89 04 24             	mov    %eax,(%esp)
 8116726:	e8 ef 67 fb ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 811672b:	84 c0                	test   %al,%al
 811672d:	0f 85 3b 01 00 00    	jne    811686e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1ec>
 8116733:	ba 00 00 00 00       	mov    $0x0,%edx
 8116738:	8d 45 e0             	lea    -0x20(%ebp),%eax
 811673b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 811673f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8116746:	00 
 8116747:	8b 55 e8             	mov    -0x18(%ebp),%edx
 811674a:	89 54 24 04          	mov    %edx,0x4(%esp)
 811674e:	89 04 24             	mov    %eax,(%esp)
 8116751:	e8 ae 14 00 00       	call   8117c04 <_ZN5boost15foreach_detail_5beginISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISC_SD_EEPS9_>
 8116756:	83 ec 04             	sub    $0x4,%esp
 8116759:	8d 45 e0             	lea    -0x20(%ebp),%eax
 811675c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 811675f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8116762:	89 04 24             	mov    %eax,(%esp)
 8116765:	e8 b0 67 fb ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 811676a:	84 c0                	test   %al,%al
 811676c:	0f 85 fc 00 00 00    	jne    811686e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1ec>
 8116772:	ba 00 00 00 00       	mov    $0x0,%edx
 8116777:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811677a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 811677e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8116785:	00 
 8116786:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8116789:	89 54 24 04          	mov    %edx,0x4(%esp)
 811678d:	89 04 24             	mov    %eax,(%esp)
 8116790:	e8 b8 14 00 00       	call   8117c4d <_ZN5boost15foreach_detail_3endISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISC_SD_EEPS9_>
 8116795:	83 ec 04             	sub    $0x4,%esp
 8116798:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 811679b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 811679e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81167a1:	89 04 24             	mov    %eax,(%esp)
 81167a4:	e8 71 67 fb ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 81167a9:	84 c0                	test   %al,%al
 81167ab:	0f 85 bd 00 00 00    	jne    811686e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1ec>
 81167b1:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 81167b5:	eb 77                	jmp    811682e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1ac>
 81167b7:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 81167ba:	89 04 24             	mov    %eax,(%esp)
 81167bd:	e8 62 67 fb ff       	call   80ccf24 <_ZN5boost15foreach_detail_9set_falseERb>
 81167c2:	84 c0                	test   %al,%al
 81167c4:	75 4d                	jne    8116813 <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x191>
 81167c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81167cd:	00 
 81167ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81167d1:	89 04 24             	mov    %eax,(%esp)
 81167d4:	e8 09 15 00 00       	call   8117ce2 <_ZN5boost15foreach_detail_5derefISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEENS0_17foreach_referenceIT_T0_E4typeERKNS0_13auto_any_baseEPNS0_9type2typeISB_SC_EE>
 81167d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81167dc:	eb 2a                	jmp    8116808 <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x186>
 81167de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81167e1:	8b 00                	mov    (%eax),%eax
 81167e3:	85 c0                	test   %eax,%eax
 81167e5:	74 1d                	je     8116804 <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x182>
 81167e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81167ea:	8b 00                	mov    (%eax),%eax
 81167ec:	8b 00                	mov    (%eax),%eax
 81167ee:	83 c0 30             	add    $0x30,%eax
 81167f1:	8b 08                	mov    (%eax),%ecx
 81167f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81167f6:	8b 00                	mov    (%eax),%eax
 81167f8:	8b 55 10             	mov    0x10(%ebp),%edx
 81167fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81167ff:	89 04 24             	mov    %eax,(%esp)
 8116802:	ff d1                	call   *%ecx
 8116804:	c6 45 d3 01          	movb   $0x1,-0x2d(%ebp)
 8116808:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 811680c:	83 f0 01             	xor    $0x1,%eax
 811680f:	84 c0                	test   %al,%al
 8116811:	75 cb                	jne    81167de <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x15c>
 8116813:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8116817:	84 c0                	test   %al,%al
 8116819:	74 13                	je     811682e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1ac>
 811681b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8116822:	00 
 8116823:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8116826:	89 04 24             	mov    %eax,(%esp)
 8116829:	e8 99 14 00 00       	call   8117cc7 <_ZN5boost15foreach_detail_4nextISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEEvRKNS0_13auto_any_baseEPNS0_9type2typeIT_T0_EE>
 811682e:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8116832:	84 c0                	test   %al,%al
 8116834:	74 28                	je     811685e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1dc>
 8116836:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 811683d:	00 
 811683e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8116841:	89 44 24 04          	mov    %eax,0x4(%esp)
 8116845:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8116848:	89 04 24             	mov    %eax,(%esp)
 811684b:	e8 46 14 00 00       	call   8117c96 <_ZN5boost15foreach_detail_4doneISt4listIP10CEventBaseSaIS4_EEN4mpl_5bool_ILb0EEEEEbRKNS0_13auto_any_baseESC_PNS0_9type2typeIT_T0_EE>
 8116850:	83 f0 01             	xor    $0x1,%eax
 8116853:	84 c0                	test   %al,%al
 8116855:	74 07                	je     811685e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1dc>
 8116857:	b8 01 00 00 00       	mov    $0x1,%eax
 811685c:	eb 05                	jmp    8116863 <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1e1>
 811685e:	b8 00 00 00 00       	mov    $0x0,%eax
 8116863:	84 c0                	test   %al,%al
 8116865:	0f 85 4c ff ff ff    	jne    81167b7 <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x135>
 811686b:	eb 01                	jmp    811686e <_ZN9CDelivery6notifyEiR11DeliveryMsg+0x1ec>
 811686d:	90                   	nop
 811686e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8116871:	c9                   	leave
 8116872:	c3                   	ret
 8116873:	90                   	nop

```

```c
// CDelivery::notify @ 0x8116682

/* CDelivery::notify(int, DeliveryMsg&) */

void __thiscall CDelivery::notify(CDelivery *this,int param_1,DeliveryMsg *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool local_31;
  _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
  local_30 [4];
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  local_2c [4];
  list local_28 [4];
  auto_any_base local_24 [4];
  auto_any_base local_20 [4];
  type2type *local_1c;
  auto_any_base *local_18;
  auto_any_base *local_14;
  int *local_10;
  
  cVar1 = checkAddress(this,param_1);
  if (cVar1 == '\x01') {
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::find((int *)local_30);
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
            ::operator!=(local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar1 != '\0') {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
              ::operator->(local_30);
      boost::foreach_detail_::contain<std::list<CEventBase*,std::allocator<CEventBase*>>>
                (local_28,(bool_ *)(iVar3 + 4));
      local_1c = (type2type *)local_28;
      bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool
                        ((auto_any_base *)local_1c);
      if (!bVar2) {
        boost::foreach_detail_::
        begin<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                  (local_24,local_1c,(bool_ *)0x0);
        local_18 = local_24;
        bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
        if (!bVar2) {
          boost::foreach_detail_::
          end<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                    (local_20,local_1c,(bool_ *)0x0);
          local_14 = local_20;
          bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_14);
          if (!bVar2) {
            local_31 = true;
            while( true ) {
              if ((local_31 == false) ||
                 (bVar2 = boost::foreach_detail_::
                          done<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                                    (local_18,local_14,(type2type *)0x0), bVar2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              cVar1 = boost::foreach_detail_::set_false(&local_31);
              if (cVar1 == '\0') {
                local_10 = (int *)boost::foreach_detail_::
                                  deref<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                                            (local_18,(type2type *)0x0);
                while (local_31 != true) {
                  if (*local_10 != 0) {
                    (**(code **)(*(int *)*local_10 + 0x30))(*local_10,param_2);
                  }
                  local_31 = true;
                }
              }
              if (local_31 != false) {
                boost::foreach_detail_::
                next<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                          (local_18,(type2type *)0x0);
              }
            }
          }
        }
      }
    }
  }
  return;
}

```

---

## ~CDelivery

```asm
// === 0811639a CDelivery::~CDelivery  [0x0811639a-0x81163db] ===
 811639a:	55                   	push   %ebp
 811639b:	89 e5                	mov    %esp,%ebp
 811639d:	56                   	push   %esi
 811639e:	53                   	push   %ebx
 811639f:	83 ec 10             	sub    $0x10,%esp
 81163a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81163a5:	89 04 24             	mov    %eax,(%esp)
 81163a8:	e8 9f 17 00 00       	call   8117b4c <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE5clearEv>
 81163ad:	eb 1b                	jmp    81163ca <_ZN9CDeliveryD1Ev+0x30>
 81163af:	89 d3                	mov    %edx,%ebx
 81163b1:	89 c6                	mov    %eax,%esi
 81163b3:	8b 45 08             	mov    0x8(%ebp),%eax
 81163b6:	89 04 24             	mov    %eax,(%esp)
 81163b9:	e8 0a 15 00 00       	call   81178c8 <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 81163be:	89 f0                	mov    %esi,%eax
 81163c0:	89 da                	mov    %ebx,%edx
 81163c2:	89 04 24             	mov    %eax,(%esp)
 81163c5:	e8 86 d3 9c 00       	call   8ae3750 <_Unwind_Resume>
 81163ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81163cd:	89 04 24             	mov    %eax,(%esp)
 81163d0:	e8 f3 14 00 00       	call   81178c8 <_ZNSt3mapIiSt4listIP10CEventBaseSaIS2_EESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 81163d5:	83 c4 10             	add    $0x10,%esp
 81163d8:	5b                   	pop    %ebx
 81163d9:	5e                   	pop    %esi
 81163da:	5d                   	pop    %ebp
 81163db:	c3                   	ret

```

```c
// CDelivery::~CDelivery @ 0x811639a

/* CDelivery::~CDelivery() */

void __thiscall CDelivery::~CDelivery(CDelivery *this)

{
                    /* try { // try from 081163a8 to 081163ac has its CatchHandler @ 081163af */
  std::
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  ::clear((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
           *)this);
  std::
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  ::~map((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
          *)this);
  return;
}

```

