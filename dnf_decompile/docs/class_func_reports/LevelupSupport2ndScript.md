# LevelupSupport2ndScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## LevelupSupport2ndScript

```asm
// === 08ab54be LevelupSupport2ndScript::LevelupSupport2ndScript  [0x08ab54be-0x8ab552f] ===
 8ab54be:	55                   	push   %ebp
 8ab54bf:	89 e5                	mov    %esp,%ebp
 8ab54c1:	56                   	push   %esi
 8ab54c2:	53                   	push   %ebx
 8ab54c3:	83 ec 10             	sub    $0x10,%esp
 8ab54c6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab54c9:	83 c0 04             	add    $0x4,%eax
 8ab54cc:	89 04 24             	mov    %eax,(%esp)
 8ab54cf:	e8 a8 07 00 00       	call   8ab5c7c <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEEC1Ev>
 8ab54d4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab54d7:	83 c0 1c             	add    $0x1c,%eax
 8ab54da:	89 04 24             	mov    %eax,(%esp)
 8ab54dd:	e8 ee 10 c5 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab54e2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab54e5:	83 c0 20             	add    $0x20,%eax
 8ab54e8:	89 04 24             	mov    %eax,(%esp)
 8ab54eb:	e8 e0 10 c5 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab54f0:	eb 36                	jmp    8ab5528 <_ZN23LevelupSupport2ndScriptC1Ev+0x6a>
 8ab54f2:	89 d3                	mov    %edx,%ebx
 8ab54f4:	89 c6                	mov    %eax,%esi
 8ab54f6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab54f9:	83 c0 1c             	add    $0x1c,%eax
 8ab54fc:	89 04 24             	mov    %eax,(%esp)
 8ab54ff:	e8 dc 26 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab5504:	89 f0                	mov    %esi,%eax
 8ab5506:	89 da                	mov    %ebx,%edx
 8ab5508:	eb 00                	jmp    8ab550a <_ZN23LevelupSupport2ndScriptC1Ev+0x4c>
 8ab550a:	89 d3                	mov    %edx,%ebx
 8ab550c:	89 c6                	mov    %eax,%esi
 8ab550e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab5511:	83 c0 04             	add    $0x4,%eax
 8ab5514:	89 04 24             	mov    %eax,(%esp)
 8ab5517:	e8 70 05 00 00       	call   8ab5a8c <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab551c:	89 f0                	mov    %esi,%eax
 8ab551e:	89 da                	mov    %ebx,%edx
 8ab5520:	89 04 24             	mov    %eax,(%esp)
 8ab5523:	e8 28 e2 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab5528:	83 c4 10             	add    $0x10,%esp
 8ab552b:	5b                   	pop    %ebx
 8ab552c:	5e                   	pop    %esi
 8ab552d:	5d                   	pop    %ebp
 8ab552e:	c3                   	ret
 8ab552f:	90                   	nop

```

```c
// LevelupSupport2ndScript::LevelupSupport2ndScript @ 0x8ab54be

/* LevelupSupport2ndScript::LevelupSupport2ndScript() */

void __thiscall LevelupSupport2ndScript::LevelupSupport2ndScript(LevelupSupport2ndScript *this)

{
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::map((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
         *)(this + 4));
                    /* try { // try from 08ab54dd to 08ab54e1 has its CatchHandler @ 08ab550a */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 08ab54eb to 08ab54ef has its CatchHandler @ 08ab54f2 */
  std::string::string((string *)(this + 0x20));
  return;
}

```

---

## clearScript

```asm
// === 08ab5964 LevelupSupport2ndScript::clearScript  [0x08ab5964-0x8ab59e7] ===
 8ab5964:	55                   	push   %ebp
 8ab5965:	89 e5                	mov    %esp,%ebp
 8ab5967:	53                   	push   %ebx
 8ab5968:	83 ec 24             	sub    $0x24,%esp
 8ab596b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab596e:	8d 50 04             	lea    0x4(%eax),%edx
 8ab5971:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab5974:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab5978:	89 04 24             	mov    %eax,(%esp)
 8ab597b:	e8 ec 04 00 00       	call   8ab5e6c <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 8ab5980:	83 ec 04             	sub    $0x4,%esp
 8ab5983:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab5986:	8d 50 04             	lea    0x4(%eax),%edx
 8ab5989:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab598c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab5990:	89 04 24             	mov    %eax,(%esp)
 8ab5993:	e8 f2 24 69 ff       	call   8147e8a <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab5998:	83 ec 04             	sub    $0x4,%esp
 8ab599b:	eb 22                	jmp    8ab59bf <_ZN23LevelupSupport2ndScript11clearScriptEv+0x5b>
 8ab599d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab59a0:	89 04 24             	mov    %eax,(%esp)
 8ab59a3:	e8 1c 25 69 ff       	call   8147ec4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS4_EEEEptEv>
 8ab59a8:	8b 58 04             	mov    0x4(%eax),%ebx
 8ab59ab:	85 db                	test   %ebx,%ebx
 8ab59ad:	74 10                	je     8ab59bf <_ZN23LevelupSupport2ndScript11clearScriptEv+0x5b>
 8ab59af:	89 1c 24             	mov    %ebx,(%esp)
 8ab59b2:	e8 53 03 00 00       	call   8ab5d0a <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EED1Ev>
 8ab59b7:	89 1c 24             	mov    %ebx,(%esp)
 8ab59ba:	e8 31 eb c6 ff       	call   87244f0 <_ZdlPv>
 8ab59bf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ab59c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab59c6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ab59c9:	89 04 24             	mov    %eax,(%esp)
 8ab59cc:	e8 b9 03 00 00       	call   8ab5d8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS4_EEEEneERKS9_>
 8ab59d1:	84 c0                	test   %al,%al
 8ab59d3:	75 c8                	jne    8ab599d <_ZN23LevelupSupport2ndScript11clearScriptEv+0x39>
 8ab59d5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab59d8:	83 c0 04             	add    $0x4,%eax
 8ab59db:	89 04 24             	mov    %eax,(%esp)
 8ab59de:	e8 67 24 69 ff       	call   8147e4a <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5clearEv>
 8ab59e3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ab59e6:	c9                   	leave
 8ab59e7:	c3                   	ret

```

```c
// LevelupSupport2ndScript::clearScript @ 0x8ab5964

/* LevelupSupport2ndScript::clearScript() */

void __thiscall LevelupSupport2ndScript::clearScript(LevelupSupport2ndScript *this)

{
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *this_00;
  char cVar1;
  int iVar2;
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_14 [4];
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_10 [8];
  
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::begin(local_10);
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
                          *)local_10);
    this_00 = *(vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                **)(iVar2 + 4);
    if (this_00 !=
        (vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
         *)0x0) {
      std::
      vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>::
      ~vector(this_00);
      operator_delete(this_00);
    }
  }
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
           *)(this + 4));
  return;
}

```

---

## loadScript

```asm
// === 08ab55a4 LevelupSupport2ndScript::loadScript  [0x08ab55a4-0x8ab5963] ===
 8ab55a4:	55                   	push   %ebp
 8ab55a5:	89 e5                	mov    %esp,%ebp
 8ab55a7:	57                   	push   %edi
 8ab55a8:	56                   	push   %esi
 8ab55a9:	53                   	push   %ebx
 8ab55aa:	83 ec 6c             	sub    $0x6c,%esp
 8ab55ad:	c7 44 24 04 d2 ca e2 	movl   $0x8e2cad2,0x4(%esp)
 8ab55b4:	08 
 8ab55b5:	c7 04 24 96 ca e2 08 	movl   $0x8e2ca96,(%esp)
 8ab55bc:	e8 68 67 e0 ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8ab55c1:	83 f0 01             	xor    $0x1,%eax
 8ab55c4:	84 c0                	test   %al,%al
 8ab55c6:	74 0a                	je     8ab55d2 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x2e>
 8ab55c8:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8ab55cd:	e9 84 03 00 00       	jmp    8ab5956 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x3b2>
 8ab55d2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab55d5:	89 04 24             	mov    %eax,(%esp)
 8ab55d8:	e8 f3 0f c5 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab55dd:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 8ab55e1:	c6 45 ba 00          	movb   $0x0,-0x46(%ebp)
 8ab55e5:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8ab55ec:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab55ef:	89 04 24             	mov    %eax,(%esp)
 8ab55f2:	e8 ff 06 00 00       	call   8ab5cf6 <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EEC1Ev>
 8ab55f7:	eb 04                	jmp    8ab55fd <_ZN23LevelupSupport2ndScript10loadScriptEv+0x59>
 8ab55f9:	90                   	nop
 8ab55fa:	eb 01                	jmp    8ab55fd <_ZN23LevelupSupport2ndScript10loadScriptEv+0x59>
 8ab55fc:	90                   	nop
 8ab55fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab5604:	00 
 8ab5605:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5608:	89 04 24             	mov    %eax,(%esp)
 8ab560b:	e8 4f 72 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab5610:	83 f0 01             	xor    $0x1,%eax
 8ab5613:	84 c0                	test   %al,%al
 8ab5615:	0f 85 dd 02 00 00    	jne    8ab58f8 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x354>
 8ab561b:	c7 44 24 04 eb ca e2 	movl   $0x8e2caeb,0x4(%esp)
 8ab5622:	08 
 8ab5623:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5626:	89 04 24             	mov    %eax,(%esp)
 8ab5629:	e8 73 b3 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab562e:	84 c0                	test   %al,%al
 8ab5630:	74 4b                	je     8ab567d <_ZN23LevelupSupport2ndScript10loadScriptEv+0xd9>
 8ab5632:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ab5635:	89 04 24             	mov    %eax,(%esp)
 8ab5638:	e8 93 0f c5 ff       	call   87065d0 <_ZNSsC1Ev>
 8ab563d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ab5640:	89 04 24             	mov    %eax,(%esp)
 8ab5643:	e8 5a 71 e0 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ab5648:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ab564b:	89 04 24             	mov    %eax,(%esp)
 8ab564e:	e8 bc 65 f0 ff       	call   89bbc0f <_Z26getCharacterJobToEnumValueRSs>
 8ab5653:	8b 55 08             	mov    0x8(%ebp),%edx
 8ab5656:	89 02                	mov    %eax,(%edx)
 8ab5658:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ab565b:	89 04 24             	mov    %eax,(%esp)
 8ab565e:	e8 7d 25 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab5663:	eb 98                	jmp    8ab55fd <_ZN23LevelupSupport2ndScript10loadScriptEv+0x59>
 8ab5665:	89 d3                	mov    %edx,%ebx
 8ab5667:	89 c6                	mov    %eax,%esi
 8ab5669:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ab566c:	89 04 24             	mov    %eax,(%esp)
 8ab566f:	e8 6c 25 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab5674:	89 f0                	mov    %esi,%eax
 8ab5676:	89 da                	mov    %ebx,%edx
 8ab5678:	e9 91 02 00 00       	jmp    8ab590e <_ZN23LevelupSupport2ndScript10loadScriptEv+0x36a>
 8ab567d:	c7 44 24 04 9d ca e2 	movl   $0x8e2ca9d,0x4(%esp)
 8ab5684:	08 
 8ab5685:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5688:	89 04 24             	mov    %eax,(%esp)
 8ab568b:	e8 11 b3 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab5690:	84 c0                	test   %al,%al
 8ab5692:	0f 84 08 02 00 00    	je     8ab58a0 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x2fc>
 8ab5698:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab569f:	00 
 8ab56a0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab56a3:	89 04 24             	mov    %eax,(%esp)
 8ab56a6:	e8 b4 71 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab56ab:	83 f0 01             	xor    $0x1,%eax
 8ab56ae:	84 c0                	test   %al,%al
 8ab56b0:	0f 85 45 02 00 00    	jne    8ab58fb <_ZN23LevelupSupport2ndScript10loadScriptEv+0x357>
 8ab56b6:	c7 44 24 04 a4 ca e2 	movl   $0x8e2caa4,0x4(%esp)
 8ab56bd:	08 
 8ab56be:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab56c1:	89 04 24             	mov    %eax,(%esp)
 8ab56c4:	e8 d8 b2 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab56c9:	84 c0                	test   %al,%al
 8ab56cb:	74 0f                	je     8ab56dc <_ZN23LevelupSupport2ndScript10loadScriptEv+0x138>
 8ab56cd:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ab56d4:	e8 a2 6c e0 ff       	call   88bc37b <_Z7ScanIntPb>
 8ab56d9:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ab56dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab56e3:	00 
 8ab56e4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab56e7:	89 04 24             	mov    %eax,(%esp)
 8ab56ea:	e8 70 71 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab56ef:	83 f0 01             	xor    $0x1,%eax
 8ab56f2:	84 c0                	test   %al,%al
 8ab56f4:	0f 85 04 02 00 00    	jne    8ab58fe <_ZN23LevelupSupport2ndScript10loadScriptEv+0x35a>
 8ab56fa:	c7 44 24 04 ac ca e2 	movl   $0x8e2caac,0x4(%esp)
 8ab5701:	08 
 8ab5702:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5705:	89 04 24             	mov    %eax,(%esp)
 8ab5708:	e8 94 b2 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab570d:	84 c0                	test   %al,%al
 8ab570f:	74 69                	je     8ab577a <_ZN23LevelupSupport2ndScript10loadScriptEv+0x1d6>
 8ab5711:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8ab5718:	00 
 8ab5719:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8ab571c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ab5720:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5723:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab5727:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8ab572a:	89 04 24             	mov    %eax,(%esp)
 8ab572d:	e8 7d 77 e0 ff       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 8ab5732:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ab5735:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 8ab5739:	84 c0                	test   %al,%al
 8ab573b:	75 3c                	jne    8ab5779 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x1d5>
 8ab573d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ab5744:	e8 32 6c e0 ff       	call   88bc37b <_Z7ScanIntPb>
 8ab5749:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ab574c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ab574f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ab5753:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ab5756:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab575a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ab575d:	89 04 24             	mov    %eax,(%esp)
 8ab5760:	e8 f9 02 00 00       	call   8ab5a5e <_ZN23LevelupSupport2ndScript8ItemInfoC1Eii>
 8ab5765:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ab5768:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab576c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab576f:	89 04 24             	mov    %eax,(%esp)
 8ab5772:	e8 f1 05 00 00       	call   8ab5d68 <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EE9push_backEOS1_>
 8ab5777:	eb 98                	jmp    8ab5711 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x16d>
 8ab5779:	90                   	nop
 8ab577a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ab5781:	00 
 8ab5782:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5785:	89 04 24             	mov    %eax,(%esp)
 8ab5788:	e8 d2 70 e0 ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ab578d:	83 f0 01             	xor    $0x1,%eax
 8ab5790:	84 c0                	test   %al,%al
 8ab5792:	0f 85 69 01 00 00    	jne    8ab5901 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x35d>
 8ab5798:	c7 44 24 04 b5 ca e2 	movl   $0x8e2cab5,0x4(%esp)
 8ab579f:	08 
 8ab57a0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab57a3:	89 04 24             	mov    %eax,(%esp)
 8ab57a6:	e8 f6 b1 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab57ab:	84 c0                	test   %al,%al
 8ab57ad:	0f 84 46 fe ff ff    	je     8ab55f9 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x55>
 8ab57b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab57b6:	8d 50 04             	lea    0x4(%eax),%edx
 8ab57b9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab57bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab57c0:	89 04 24             	mov    %eax,(%esp)
 8ab57c3:	e8 c2 26 69 ff       	call   8147e8a <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8ab57c8:	83 ec 04             	sub    $0x4,%esp
 8ab57cb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab57ce:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab57d1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ab57d4:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8ab57d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab57db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab57df:	89 04 24             	mov    %eax,(%esp)
 8ab57e2:	e8 77 26 69 ff       	call   8147e5e <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8ab57e7:	83 ec 04             	sub    $0x4,%esp
 8ab57ea:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ab57ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab57f1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ab57f4:	89 04 24             	mov    %eax,(%esp)
 8ab57f7:	e8 8e 05 00 00       	call   8ab5d8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS4_EEEEneERKS9_>
 8ab57fc:	84 c0                	test   %al,%al
 8ab57fe:	74 1d                	je     8ab581d <_ZN23LevelupSupport2ndScript10loadScriptEv+0x279>
 8ab5800:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ab5803:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab5807:	c7 04 24 bd ca e2 08 	movl   $0x8e2cabd,(%esp)
 8ab580e:	e8 4d 83 5c ff       	call   807db60 <printf@plt>
 8ab5813:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 8ab5818:	e9 06 01 00 00       	jmp    8ab5923 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x37f>
 8ab581d:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 8ab5824:	e8 27 ec c6 ff       	call   8724450 <_Znwj>
 8ab5829:	89 c3                	mov    %eax,%ebx
 8ab582b:	89 d8                	mov    %ebx,%eax
 8ab582d:	89 04 24             	mov    %eax,(%esp)
 8ab5830:	e8 c1 04 00 00       	call   8ab5cf6 <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EEC1Ev>
 8ab5835:	eb 15                	jmp    8ab584c <_ZN23LevelupSupport2ndScript10loadScriptEv+0x2a8>
 8ab5837:	89 d6                	mov    %edx,%esi
 8ab5839:	89 c7                	mov    %eax,%edi
 8ab583b:	89 1c 24             	mov    %ebx,(%esp)
 8ab583e:	e8 ad ec c6 ff       	call   87244f0 <_ZdlPv>
 8ab5843:	89 f8                	mov    %edi,%eax
 8ab5845:	89 f2                	mov    %esi,%edx
 8ab5847:	e9 c2 00 00 00       	jmp    8ab590e <_ZN23LevelupSupport2ndScript10loadScriptEv+0x36a>
 8ab584c:	89 d8                	mov    %ebx,%eax
 8ab584e:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8ab5851:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8ab5854:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8ab5857:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ab585b:	89 04 24             	mov    %eax,(%esp)
 8ab585e:	e8 3b 05 00 00       	call   8ab5d9e <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EE4swapEOS3_>
 8ab5863:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8ab5866:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ab586a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ab586d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ab5871:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ab5874:	89 04 24             	mov    %eax,(%esp)
 8ab5877:	e8 96 05 00 00       	call   8ab5e12 <_ZNSt4pairIKiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS3_EEEC1IRiRS6_EEOT_OT0_>
 8ab587c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab587f:	8d 48 04             	lea    0x4(%eax),%ecx
 8ab5882:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ab5885:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8ab5888:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ab588c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ab5890:	89 04 24             	mov    %eax,(%esp)
 8ab5893:	e8 a8 05 00 00       	call   8ab5e40 <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE6insertERKSA_>
 8ab5898:	83 ec 04             	sub    $0x4,%esp
 8ab589b:	e9 5d fd ff ff       	jmp    8ab55fd <_ZN23LevelupSupport2ndScript10loadScriptEv+0x59>
 8ab58a0:	c7 44 24 04 f6 ca e2 	movl   $0x8e2caf6,0x4(%esp)
 8ab58a7:	08 
 8ab58a8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab58ab:	89 04 24             	mov    %eax,(%esp)
 8ab58ae:	e8 ee b0 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab58b3:	84 c0                	test   %al,%al
 8ab58b5:	74 13                	je     8ab58ca <_ZN23LevelupSupport2ndScript10loadScriptEv+0x326>
 8ab58b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab58ba:	83 c0 1c             	add    $0x1c,%eax
 8ab58bd:	89 04 24             	mov    %eax,(%esp)
 8ab58c0:	e8 dd 6e e0 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ab58c5:	e9 33 fd ff ff       	jmp    8ab55fd <_ZN23LevelupSupport2ndScript10loadScriptEv+0x59>
 8ab58ca:	c7 44 24 04 03 cb e2 	movl   $0x8e2cb03,0x4(%esp)
 8ab58d1:	08 
 8ab58d2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab58d5:	89 04 24             	mov    %eax,(%esp)
 8ab58d8:	e8 c4 b0 5c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ab58dd:	84 c0                	test   %al,%al
 8ab58df:	0f 84 17 fd ff ff    	je     8ab55fc <_ZN23LevelupSupport2ndScript10loadScriptEv+0x58>
 8ab58e5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab58e8:	83 c0 20             	add    $0x20,%eax
 8ab58eb:	89 04 24             	mov    %eax,(%esp)
 8ab58ee:	e8 af 6e e0 ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ab58f3:	e9 05 fd ff ff       	jmp    8ab55fd <_ZN23LevelupSupport2ndScript10loadScriptEv+0x59>
 8ab58f8:	90                   	nop
 8ab58f9:	eb 07                	jmp    8ab5902 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x35e>
 8ab58fb:	90                   	nop
 8ab58fc:	eb 04                	jmp    8ab5902 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x35e>
 8ab58fe:	90                   	nop
 8ab58ff:	eb 01                	jmp    8ab5902 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x35e>
 8ab5901:	90                   	nop
 8ab5902:	e8 4d 67 e0 ff       	call   88bc054 <_Z20unloadRDARScriptFilev>
 8ab5907:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ab590c:	eb 15                	jmp    8ab5923 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x37f>
 8ab590e:	89 d3                	mov    %edx,%ebx
 8ab5910:	89 c6                	mov    %eax,%esi
 8ab5912:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab5915:	89 04 24             	mov    %eax,(%esp)
 8ab5918:	e8 ed 03 00 00       	call   8ab5d0a <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EED1Ev>
 8ab591d:	89 f0                	mov    %esi,%eax
 8ab591f:	89 da                	mov    %ebx,%edx
 8ab5921:	eb 0d                	jmp    8ab5930 <_ZN23LevelupSupport2ndScript10loadScriptEv+0x38c>
 8ab5923:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ab5926:	89 04 24             	mov    %eax,(%esp)
 8ab5929:	e8 dc 03 00 00       	call   8ab5d0a <_ZNSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS1_EED1Ev>
 8ab592e:	eb 1b                	jmp    8ab594b <_ZN23LevelupSupport2ndScript10loadScriptEv+0x3a7>
 8ab5930:	89 d3                	mov    %edx,%ebx
 8ab5932:	89 c6                	mov    %eax,%esi
 8ab5934:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab5937:	89 04 24             	mov    %eax,(%esp)
 8ab593a:	e8 a1 22 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab593f:	89 f0                	mov    %esi,%eax
 8ab5941:	89 da                	mov    %ebx,%edx
 8ab5943:	89 04 24             	mov    %eax,(%esp)
 8ab5946:	e8 05 de 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab594b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ab594e:	89 04 24             	mov    %eax,(%esp)
 8ab5951:	e8 8a 22 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab5956:	89 d8                	mov    %ebx,%eax
 8ab5958:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ab595b:	83 c4 00             	add    $0x0,%esp
 8ab595e:	5b                   	pop    %ebx
 8ab595f:	5e                   	pop    %esi
 8ab5960:	5f                   	pop    %edi
 8ab5961:	5d                   	pop    %ebp
 8ab5962:	c3                   	ret
 8ab5963:	90                   	nop

```

```c
// LevelupSupport2ndScript::loadScript @ 0x8ab55a4

/* LevelupSupport2ndScript::loadScript() */

undefined4 __thiscall LevelupSupport2ndScript::loadScript(LevelupSupport2ndScript *this)

{
  char cVar1;
  bool bVar2;
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *this_00;
  undefined4 uVar3;
  int *piVar4;
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *local_64;
  string local_60 [4];
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  local_5c [12];
  int local_50;
  bool local_4a;
  bool local_49;
  string local_48;
  ItemInfo local_44 [8];
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
  local_38 [4];
  pair local_34 [8];
  pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>
  local_2c [8];
  int local_24;
  int local_20;
  
  cVar1 = loadRDARScriptFile("Event/","tw_LevelupSupport2nd.evt");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_48);
    local_49 = false;
    local_4a = false;
    local_50 = 0;
                    /* try { // try from 08ab55f2 to 08ab55f6 has its CatchHandler @ 08ab5930 */
    std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
    ::vector(local_5c);
                    /* try { // try from 08ab560b to 08ab563c has its CatchHandler @ 08ab590e */
    while (cVar1 = ScanType((string *)&local_48,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_48,"[job type]");
      if (bVar2) {
        std::string::string(local_60);
                    /* try { // try from 08ab5643 to 08ab5652 has its CatchHandler @ 08ab5665 */
        ScanStr(local_60);
        uVar3 = getCharacterJobToEnumValue(local_60);
        *(undefined4 *)this = uVar3;
                    /* try { // try from 08ab565e to 08ab5662 has its CatchHandler @ 08ab590e */
        std::string::~string(local_60);
      }
      else {
                    /* try { // try from 08ab568b to 08ab5828 has its CatchHandler @ 08ab590e */
        bVar2 = std::operator==(&local_48,"[step]");
        if (bVar2) {
          cVar1 = ScanType((string *)&local_48,true);
          if (cVar1 != '\x01') break;
          bVar2 = std::operator==(&local_48,"[level]");
          if (bVar2) {
            local_50 = ScanInt((bool *)0x0);
          }
          cVar1 = ScanType((string *)&local_48,true);
          if (cVar1 != '\x01') break;
          bVar2 = std::operator==(&local_48,"[reward]");
          if (bVar2) {
            while (local_24 = ScanTypeOrInt(&local_49,(string *)&local_48,&local_4a,true),
                  local_49 == false) {
              local_20 = ScanInt((bool *)0x0);
              ItemInfo::ItemInfo(local_44,local_24,local_20);
              std::
              vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
              ::push_back(local_5c,local_44);
            }
          }
          cVar1 = ScanType((string *)&local_48,true);
          if (cVar1 != '\x01') break;
          bVar2 = std::operator==(&local_48,"[/step]");
          if (bVar2) {
            std::
            map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
            ::end(local_3c);
            piVar4 = &local_50;
            std::
            map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
            ::find((int *)local_38);
            cVar1 = std::
                    _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
                    ::operator!=(local_38,(_Rb_tree_iterator *)local_3c);
            if (cVar1 != '\0') {
              printf("duplicate [level] %d",local_50,piVar4);
              uVar3 = 0xffffffff;
              goto LAB_08ab5923;
            }
            this_00 = operator_new(0xc);
                    /* try { // try from 08ab5830 to 08ab5834 has its CatchHandler @ 08ab5837 */
            std::
            vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
            ::vector(this_00);
            local_64 = this_00;
                    /* try { // try from 08ab585e to 08ab5906 has its CatchHandler @ 08ab590e */
            std::
            vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
            ::swap(this_00,(vector *)local_5c);
            std::
            pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>
            ::
            pair<int&,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*&>
                      (local_2c,&local_50,(vector **)&local_64);
            std::
            map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
            ::insert(local_34);
          }
        }
        else {
          bVar2 = std::operator==(&local_48,"[mail title]");
          if (bVar2) {
            ScanStr((string *)(this + 0x1c));
          }
          else {
            bVar2 = std::operator==(&local_48,"[mail content]");
            if (bVar2) {
              ScanStr((string *)(this + 0x20));
            }
          }
        }
      }
    }
    unloadRDARScriptFile();
    uVar3 = 0;
LAB_08ab5923:
                    /* try { // try from 08ab5929 to 08ab592d has its CatchHandler @ 08ab5930 */
    std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
    ::~vector(local_5c);
    std::string::~string((string *)&local_48);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## ~LevelupSupport2ndScript

```asm
// === 08ab5530 LevelupSupport2ndScript::~LevelupSupport2ndScript  [0x08ab5530-0x8ab55a3] ===
 8ab5530:	55                   	push   %ebp
 8ab5531:	89 e5                	mov    %esp,%ebp
 8ab5533:	56                   	push   %esi
 8ab5534:	53                   	push   %ebx
 8ab5535:	83 ec 10             	sub    $0x10,%esp
 8ab5538:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab553b:	83 c0 20             	add    $0x20,%eax
 8ab553e:	89 04 24             	mov    %eax,(%esp)
 8ab5541:	e8 9a 26 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab5546:	eb 18                	jmp    8ab5560 <_ZN23LevelupSupport2ndScriptD1Ev+0x30>
 8ab5548:	89 d3                	mov    %edx,%ebx
 8ab554a:	89 c6                	mov    %eax,%esi
 8ab554c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab554f:	83 c0 1c             	add    $0x1c,%eax
 8ab5552:	89 04 24             	mov    %eax,(%esp)
 8ab5555:	e8 86 26 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab555a:	89 f0                	mov    %esi,%eax
 8ab555c:	89 da                	mov    %ebx,%edx
 8ab555e:	eb 10                	jmp    8ab5570 <_ZN23LevelupSupport2ndScriptD1Ev+0x40>
 8ab5560:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab5563:	83 c0 1c             	add    $0x1c,%eax
 8ab5566:	89 04 24             	mov    %eax,(%esp)
 8ab5569:	e8 72 26 c5 ff       	call   8707be0 <_ZNSsD1Ev>
 8ab556e:	eb 1e                	jmp    8ab558e <_ZN23LevelupSupport2ndScriptD1Ev+0x5e>
 8ab5570:	89 d3                	mov    %edx,%ebx
 8ab5572:	89 c6                	mov    %eax,%esi
 8ab5574:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab5577:	83 c0 04             	add    $0x4,%eax
 8ab557a:	89 04 24             	mov    %eax,(%esp)
 8ab557d:	e8 0a 05 00 00       	call   8ab5a8c <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab5582:	89 f0                	mov    %esi,%eax
 8ab5584:	89 da                	mov    %ebx,%edx
 8ab5586:	89 04 24             	mov    %eax,(%esp)
 8ab5589:	e8 c2 e1 02 00       	call   8ae3750 <_Unwind_Resume>
 8ab558e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ab5591:	83 c0 04             	add    $0x4,%eax
 8ab5594:	89 04 24             	mov    %eax,(%esp)
 8ab5597:	e8 f0 04 00 00       	call   8ab5a8c <_ZNSt3mapIiPSt6vectorIN23LevelupSupport2ndScript8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEED1Ev>
 8ab559c:	83 c4 10             	add    $0x10,%esp
 8ab559f:	5b                   	pop    %ebx
 8ab55a0:	5e                   	pop    %esi
 8ab55a1:	5d                   	pop    %ebp
 8ab55a2:	c3                   	ret
 8ab55a3:	90                   	nop

```

```c
// LevelupSupport2ndScript::~LevelupSupport2ndScript @ 0x8ab5530

/* LevelupSupport2ndScript::~LevelupSupport2ndScript() */

void __thiscall LevelupSupport2ndScript::~LevelupSupport2ndScript(LevelupSupport2ndScript *this)

{
                    /* try { // try from 08ab5541 to 08ab5545 has its CatchHandler @ 08ab5548 */
  std::string::~string((string *)(this + 0x20));
                    /* try { // try from 08ab5569 to 08ab556d has its CatchHandler @ 08ab5570 */
  std::string::~string((string *)(this + 0x1c));
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::~map((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
          *)(this + 4));
  return;
}

```

