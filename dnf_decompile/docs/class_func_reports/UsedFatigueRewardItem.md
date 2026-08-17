# UsedFatigueRewardItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## find

```asm
// === 081a28e4 UsedFatigueRewardItem::find  [0x081a28e4-0x81a2a67] ===
 81a28e4:	55                   	push   %ebp
 81a28e5:	89 e5                	mov    %esp,%ebp
 81a28e7:	83 ec 28             	sub    $0x28,%esp
 81a28ea:	8b 45 08             	mov    0x8(%ebp),%eax
 81a28ed:	8d 50 08             	lea    0x8(%eax),%edx
 81a28f0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a28f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a28f7:	89 04 24             	mov    %eax,(%esp)
 81a28fa:	e8 a7 1c 00 00       	call   81a45a6 <_ZNSt6vectorIN21UsedFatigueRewardItem4DataESaIS1_EE3endEv>
 81a28ff:	83 ec 04             	sub    $0x4,%esp
 81a2902:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2905:	8d 50 08             	lea    0x8(%eax),%edx
 81a2908:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a290b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a290f:	89 04 24             	mov    %eax,(%esp)
 81a2912:	e8 b5 1c 00 00       	call   81a45cc <_ZNSt6vectorIN21UsedFatigueRewardItem4DataESaIS1_EE5beginEv>
 81a2917:	83 ec 04             	sub    $0x4,%esp
 81a291a:	e9 27 01 00 00       	jmp    81a2a46 <_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE+0x162>
 81a291f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2922:	89 04 24             	mov    %eax,(%esp)
 81a2925:	e8 0a 1d 00 00       	call   81a4634 <_ZNK9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a292a:	0f b7 00             	movzwl (%eax),%eax
 81a292d:	98                   	cwtl
 81a292e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81a2931:	7c 1b                	jl     81a294e <_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE+0x6a>
 81a2933:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2936:	89 04 24             	mov    %eax,(%esp)
 81a2939:	e8 f6 1c 00 00       	call   81a4634 <_ZNK9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a293e:	0f b7 00             	movzwl (%eax),%eax
 81a2941:	98                   	cwtl
 81a2942:	3b 45 10             	cmp    0x10(%ebp),%eax
 81a2945:	7d 07                	jge    81a294e <_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE+0x6a>
 81a2947:	b8 01 00 00 00       	mov    $0x1,%eax
 81a294c:	eb 05                	jmp    81a2953 <_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE+0x6f>
 81a294e:	b8 00 00 00 00       	mov    $0x0,%eax
 81a2953:	84 c0                	test   %al,%al
 81a2955:	0f 84 e0 00 00 00    	je     81a2a3b <_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE+0x157>
 81a295b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a295e:	89 04 24             	mov    %eax,(%esp)
 81a2961:	e8 ce 1c 00 00       	call   81a4634 <_ZNK9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a2966:	0f b7 10             	movzwl (%eax),%edx
 81a2969:	8b 45 14             	mov    0x14(%ebp),%eax
 81a296c:	66 89 10             	mov    %dx,(%eax)
 81a296f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2972:	89 04 24             	mov    %eax,(%esp)
 81a2975:	e8 ba 1c 00 00       	call   81a4634 <_ZNK9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a297a:	8b 90 14 01 00 00    	mov    0x114(%eax),%edx
 81a2980:	8b 45 14             	mov    0x14(%ebp),%eax
 81a2983:	89 90 14 01 00 00    	mov    %edx,0x114(%eax)
 81a2989:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a298c:	89 04 24             	mov    %eax,(%esp)
 81a298f:	e8 a0 1c 00 00       	call   81a4634 <_ZNK9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a2994:	0f b7 50 02          	movzwl 0x2(%eax),%edx
 81a2998:	8b 45 14             	mov    0x14(%ebp),%eax
 81a299b:	66 89 50 02          	mov    %dx,0x2(%eax)
 81a299f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a29a2:	89 04 24             	mov    %eax,(%esp)
 81a29a5:	e8 8a 1c 00 00       	call   81a4634 <_ZNK9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a29aa:	05 03 01 00 00       	add    $0x103,%eax
 81a29af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a29b6:	00 
 81a29b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a29bb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81a29c2:	00 
 81a29c3:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81a29ca:	e8 2f 2e 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81a29cf:	8b 55 14             	mov    0x14(%ebp),%edx
 81a29d2:	81 c2 03 01 00 00    	add    $0x103,%edx
 81a29d8:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81a29df:	00 
 81a29e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a29e4:	89 14 24             	mov    %edx,(%esp)
 81a29e7:	e8 e4 ae ed ff       	call   807d8d0 <strncpy@plt>
 81a29ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a29ef:	89 04 24             	mov    %eax,(%esp)
 81a29f2:	e8 3d 1c 00 00       	call   81a4634 <_ZNK9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a29f7:	83 c0 04             	add    $0x4,%eax
 81a29fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a2a01:	00 
 81a2a02:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a2a06:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81a2a0d:	00 
 81a2a0e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81a2a15:	e8 e4 2d 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81a2a1a:	8b 55 14             	mov    0x14(%ebp),%edx
 81a2a1d:	83 c2 04             	add    $0x4,%edx
 81a2a20:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81a2a27:	00 
 81a2a28:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2a2c:	89 14 24             	mov    %edx,(%esp)
 81a2a2f:	e8 9c ae ed ff       	call   807d8d0 <strncpy@plt>
 81a2a34:	b8 01 00 00 00       	mov    $0x1,%eax
 81a2a39:	eb 2a                	jmp    81a2a65 <_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE+0x181>
 81a2a3b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2a3e:	89 04 24             	mov    %eax,(%esp)
 81a2a41:	e8 d6 1b 00 00       	call   81a461c <_ZN9__gnu_cxx17__normal_iteratorIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEppEv>
 81a2a46:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a2a49:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2a4d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a2a50:	89 04 24             	mov    %eax,(%esp)
 81a2a53:	e8 97 1b 00 00       	call   81a45ef <_ZN9__gnu_cxxneIPN21UsedFatigueRewardItem4DataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81a2a58:	84 c0                	test   %al,%al
 81a2a5a:	0f 85 bf fe ff ff    	jne    81a291f <_ZN21UsedFatigueRewardItem4findEiiRNS_4DataE+0x3b>
 81a2a60:	b8 00 00 00 00       	mov    $0x0,%eax
 81a2a65:	c9                   	leave
 81a2a66:	c3                   	ret
 81a2a67:	90                   	nop

```

```c
// UsedFatigueRewardItem::find @ 0x81a28e4

/* UsedFatigueRewardItem::find(int, int, UsedFatigueRewardItem::Data&) */

undefined4 __thiscall
UsedFatigueRewardItem::find(UsedFatigueRewardItem *this,int param_1,int param_2,Data *param_3)

{
  bool bVar1;
  short *psVar2;
  undefined2 *puVar3;
  int iVar4;
  char *pcVar5;
  __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>::end();
  std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>::begin();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) {
      return 0;
    }
    psVar2 = (short *)__gnu_cxx::
                      __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
                      ::operator->(local_14);
    if ((*psVar2 < param_1) ||
       (psVar2 = (short *)__gnu_cxx::
                          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
                          ::operator->(local_14), param_2 <= *psVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
    ::operator++(local_14);
  }
  puVar3 = (undefined2 *)
           __gnu_cxx::
           __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
           ::operator->(local_14);
  *(undefined2 *)param_3 = *puVar3;
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  *(undefined4 *)(param_3 + 0x114) = *(undefined4 *)(iVar4 + 0x114);
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(iVar4 + 2);
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  pcVar5 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              (char *)(iVar4 + 0x103),(bool *)0x0);
  strncpy((char *)(param_3 + 0x103),pcVar5,0x14);
  iVar4 = __gnu_cxx::
          __normal_iterator<UsedFatigueRewardItem::Data*,std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>>
          ::operator->(local_14);
  pcVar5 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              (char *)(iVar4 + 4),(bool *)0x0);
  strncpy((char *)(param_3 + 4),pcVar5,0xff);
  return 1;
}

```

---

## parsing

```asm
// === 081a25d2 UsedFatigueRewardItem::parsing  [0x081a25d2-0x81a28e3] ===
 81a25d2:	55                   	push   %ebp
 81a25d3:	89 e5                	mov    %esp,%ebp
 81a25d5:	56                   	push   %esi
 81a25d6:	53                   	push   %ebx
 81a25d7:	81 ec 90 01 00 00    	sub    $0x190,%esp
 81a25dd:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a25e0:	89 04 24             	mov    %eax,(%esp)
 81a25e3:	e8 8c 8e fd ff       	call   817b474 <_ZN11Arad_ScriptC1Ev>
 81a25e8:	c7 44 24 08 02 c7 ba 	movl   $0x8bac702,0x8(%esp)
 81a25ef:	08 
 81a25f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a25f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a25f7:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a25fa:	89 04 24             	mov    %eax,(%esp)
 81a25fd:	e8 4e 93 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a2602:	83 f0 01             	xor    $0x1,%eax
 81a2605:	84 c0                	test   %al,%al
 81a2607:	74 0a                	je     81a2613 <_ZN21UsedFatigueRewardItem7parsingEPc+0x41>
 81a2609:	bb a1 00 00 00       	mov    $0xa1,%ebx
 81a260e:	e9 ba 02 00 00       	jmp    81a28cd <_ZN21UsedFatigueRewardItem7parsingEPc+0x2fb>
 81a2613:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2616:	89 04 24             	mov    %eax,(%esp)
 81a2619:	e8 5e 1c 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a261e:	85 c0                	test   %eax,%eax
 81a2620:	0f 94 c0             	sete   %al
 81a2623:	84 c0                	test   %al,%al
 81a2625:	74 0a                	je     81a2631 <_ZN21UsedFatigueRewardItem7parsingEPc+0x5f>
 81a2627:	bb a4 00 00 00       	mov    $0xa4,%ebx
 81a262c:	e9 9c 02 00 00       	jmp    81a28cd <_ZN21UsedFatigueRewardItem7parsingEPc+0x2fb>
 81a2631:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2634:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 81a2638:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81a263b:	89 04 24             	mov    %eax,(%esp)
 81a263e:	e8 8d da 53 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81a2643:	c7 44 24 08 09 c7 ba 	movl   $0x8bac709,0x8(%esp)
 81a264a:	08 
 81a264b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a2652:	00 
 81a2653:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2656:	89 04 24             	mov    %eax,(%esp)
 81a2659:	e8 48 a0 fd ff       	call   817c6a6 <_ZN11Arad_Script9GetStringEiPc>
 81a265e:	8d 55 eb             	lea    -0x15(%ebp),%edx
 81a2661:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2665:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2669:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a266c:	89 04 24             	mov    %eax,(%esp)
 81a266f:	e8 bc 4f 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81a2674:	eb 18                	jmp    81a268e <_ZN21UsedFatigueRewardItem7parsingEPc+0xbc>
 81a2676:	89 d3                	mov    %edx,%ebx
 81a2678:	89 c6                	mov    %eax,%esi
 81a267a:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81a267d:	89 04 24             	mov    %eax,(%esp)
 81a2680:	e8 6b da 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81a2685:	89 f0                	mov    %esi,%eax
 81a2687:	89 da                	mov    %ebx,%edx
 81a2689:	e9 24 02 00 00       	jmp    81a28b2 <_ZN21UsedFatigueRewardItem7parsingEPc+0x2e0>
 81a268e:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81a2691:	89 04 24             	mov    %eax,(%esp)
 81a2694:	e8 57 da 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81a2699:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a269c:	89 04 24             	mov    %eax,(%esp)
 81a269f:	e8 2c da 53 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81a26a4:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a26a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a26ab:	c7 44 24 04 0e c7 ba 	movl   $0x8bac70e,0x4(%esp)
 81a26b2:	08 
 81a26b3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a26b6:	89 04 24             	mov    %eax,(%esp)
 81a26b9:	e8 72 4f 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81a26be:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a26c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a26c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a26c8:	89 04 24             	mov    %eax,(%esp)
 81a26cb:	e8 a3 eb fc ff       	call   8171273 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_>
 81a26d0:	89 c3                	mov    %eax,%ebx
 81a26d2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a26d5:	89 04 24             	mov    %eax,(%esp)
 81a26d8:	e8 03 55 56 00       	call   8707be0 <_ZNSsD1Ev>
 81a26dd:	eb 2d                	jmp    81a270c <_ZN21UsedFatigueRewardItem7parsingEPc+0x13a>
 81a26df:	89 d3                	mov    %edx,%ebx
 81a26e1:	89 c6                	mov    %eax,%esi
 81a26e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a26e6:	89 04 24             	mov    %eax,(%esp)
 81a26e9:	e8 f2 54 56 00       	call   8707be0 <_ZNSsD1Ev>
 81a26ee:	89 f0                	mov    %esi,%eax
 81a26f0:	89 da                	mov    %ebx,%edx
 81a26f2:	eb 00                	jmp    81a26f4 <_ZN21UsedFatigueRewardItem7parsingEPc+0x122>
 81a26f4:	89 d3                	mov    %edx,%ebx
 81a26f6:	89 c6                	mov    %eax,%esi
 81a26f8:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a26fb:	89 04 24             	mov    %eax,(%esp)
 81a26fe:	e8 ed d9 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81a2703:	89 f0                	mov    %esi,%eax
 81a2705:	89 da                	mov    %ebx,%edx
 81a2707:	e9 84 01 00 00       	jmp    81a2890 <_ZN21UsedFatigueRewardItem7parsingEPc+0x2be>
 81a270c:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a270f:	89 04 24             	mov    %eax,(%esp)
 81a2712:	e8 d9 d9 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81a2717:	84 db                	test   %bl,%bl
 81a2719:	74 07                	je     81a2722 <_ZN21UsedFatigueRewardItem7parsingEPc+0x150>
 81a271b:	8b 45 08             	mov    0x8(%ebp),%eax
 81a271e:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 81a2722:	c7 44 24 08 13 c7 ba 	movl   $0x8bac713,0x8(%esp)
 81a2729:	08 
 81a272a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a272d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2731:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2734:	89 04 24             	mov    %eax,(%esp)
 81a2737:	e8 14 92 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a273c:	83 f0 01             	xor    $0x1,%eax
 81a273f:	84 c0                	test   %al,%al
 81a2741:	74 0a                	je     81a274d <_ZN21UsedFatigueRewardItem7parsingEPc+0x17b>
 81a2743:	bb ac 00 00 00       	mov    $0xac,%ebx
 81a2748:	e9 58 01 00 00       	jmp    81a28a5 <_ZN21UsedFatigueRewardItem7parsingEPc+0x2d3>
 81a274d:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2750:	89 04 24             	mov    %eax,(%esp)
 81a2753:	e8 24 1b 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a2758:	85 c0                	test   %eax,%eax
 81a275a:	0f 94 c0             	sete   %al
 81a275d:	84 c0                	test   %al,%al
 81a275f:	74 0a                	je     81a276b <_ZN21UsedFatigueRewardItem7parsingEPc+0x199>
 81a2761:	bb af 00 00 00       	mov    $0xaf,%ebx
 81a2766:	e9 3a 01 00 00       	jmp    81a28a5 <_ZN21UsedFatigueRewardItem7parsingEPc+0x2d3>
 81a276b:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 81a2771:	89 04 24             	mov    %eax,(%esp)
 81a2774:	e8 27 19 00 00       	call   81a40a0 <_ZN21UsedFatigueRewardItem4DataC1Ev>
 81a2779:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a2780:	e9 eb 00 00 00       	jmp    81a2870 <_ZN21UsedFatigueRewardItem7parsingEPc+0x29e>
 81a2785:	c7 44 24 08 1f c7 ba 	movl   $0x8bac71f,0x8(%esp)
 81a278c:	08 
 81a278d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2790:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2794:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2797:	89 04 24             	mov    %eax,(%esp)
 81a279a:	e8 e1 9f fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a279f:	66 89 85 78 fe ff ff 	mov    %ax,-0x188(%ebp)
 81a27a6:	c7 44 24 08 27 c7 ba 	movl   $0x8bac727,0x8(%esp)
 81a27ad:	08 
 81a27ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a27b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a27b5:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a27b8:	89 04 24             	mov    %eax,(%esp)
 81a27bb:	e8 c0 9f fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a27c0:	66 89 85 7a fe ff ff 	mov    %ax,-0x186(%ebp)
 81a27c7:	c7 44 24 08 e3 c6 ba 	movl   $0x8bac6e3,0x8(%esp)
 81a27ce:	08 
 81a27cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a27d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a27d6:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a27d9:	89 04 24             	mov    %eax,(%esp)
 81a27dc:	e8 9f 9f fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a27e1:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81a27e4:	c7 44 24 08 32 c7 ba 	movl   $0x8bac732,0x8(%esp)
 81a27eb:	08 
 81a27ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a27ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a27f3:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a27f6:	89 04 24             	mov    %eax,(%esp)
 81a27f9:	e8 a8 9e fd ff       	call   817c6a6 <_ZN11Arad_Script9GetStringEiPc>
 81a27fe:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 81a2805:	00 
 81a2806:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a280a:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 81a2810:	83 c0 04             	add    $0x4,%eax
 81a2813:	89 04 24             	mov    %eax,(%esp)
 81a2816:	e8 b5 b0 ed ff       	call   807d8d0 <strncpy@plt>
 81a281b:	c7 44 24 08 3a c7 ba 	movl   $0x8bac73a,0x8(%esp)
 81a2822:	08 
 81a2823:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2826:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a282a:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a282d:	89 04 24             	mov    %eax,(%esp)
 81a2830:	e8 71 9e fd ff       	call   817c6a6 <_ZN11Arad_Script9GetStringEiPc>
 81a2835:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81a283c:	00 
 81a283d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2841:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 81a2847:	05 03 01 00 00       	add    $0x103,%eax
 81a284c:	89 04 24             	mov    %eax,(%esp)
 81a284f:	e8 7c b0 ed ff       	call   807d8d0 <strncpy@plt>
 81a2854:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2857:	8d 50 08             	lea    0x8(%eax),%edx
 81a285a:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 81a2860:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2864:	89 14 24             	mov    %edx,(%esp)
 81a2867:	e8 c4 1c 00 00       	call   81a4530 <_ZNSt6vectorIN21UsedFatigueRewardItem4DataESaIS1_EE9push_backERKS1_>
 81a286c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a2870:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2873:	89 04 24             	mov    %eax,(%esp)
 81a2876:	e8 01 1a 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a287b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a287e:	0f 9f c0             	setg   %al
 81a2881:	84 c0                	test   %al,%al
 81a2883:	0f 85 fc fe ff ff    	jne    81a2785 <_ZN21UsedFatigueRewardItem7parsingEPc+0x1b3>
 81a2889:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a288e:	eb 15                	jmp    81a28a5 <_ZN21UsedFatigueRewardItem7parsingEPc+0x2d3>
 81a2890:	89 d3                	mov    %edx,%ebx
 81a2892:	89 c6                	mov    %eax,%esi
 81a2894:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a2897:	89 04 24             	mov    %eax,(%esp)
 81a289a:	e8 41 53 56 00       	call   8707be0 <_ZNSsD1Ev>
 81a289f:	89 f0                	mov    %esi,%eax
 81a28a1:	89 da                	mov    %ebx,%edx
 81a28a3:	eb 0d                	jmp    81a28b2 <_ZN21UsedFatigueRewardItem7parsingEPc+0x2e0>
 81a28a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a28a8:	89 04 24             	mov    %eax,(%esp)
 81a28ab:	e8 30 53 56 00       	call   8707be0 <_ZNSsD1Ev>
 81a28b0:	eb 1b                	jmp    81a28cd <_ZN21UsedFatigueRewardItem7parsingEPc+0x2fb>
 81a28b2:	89 d3                	mov    %edx,%ebx
 81a28b4:	89 c6                	mov    %eax,%esi
 81a28b6:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a28b9:	89 04 24             	mov    %eax,(%esp)
 81a28bc:	e8 63 8d fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a28c1:	89 f0                	mov    %esi,%eax
 81a28c3:	89 da                	mov    %ebx,%edx
 81a28c5:	89 04 24             	mov    %eax,(%esp)
 81a28c8:	e8 83 0e 94 00       	call   8ae3750 <_Unwind_Resume>
 81a28cd:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a28d0:	89 04 24             	mov    %eax,(%esp)
 81a28d3:	e8 4c 8d fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a28d8:	89 d8                	mov    %ebx,%eax
 81a28da:	81 c4 90 01 00 00    	add    $0x190,%esp
 81a28e0:	5b                   	pop    %ebx
 81a28e1:	5e                   	pop    %esi
 81a28e2:	5d                   	pop    %ebp
 81a28e3:	c3                   	ret

```

```c
// UsedFatigueRewardItem::parsing @ 0x81a25d2

/* UsedFatigueRewardItem::parsing(char*) */

undefined4 __thiscall UsedFatigueRewardItem::parsing(UsedFatigueRewardItem *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined2 local_18c;
  undefined2 local_18a;
  char acStack_188 [255];
  char acStack_89 [17];
  undefined4 local_78;
  Arad_Script local_74 [84];
  string local_20;
  allocator<char> local_19;
  string local_18;
  allocator<char> local_11;
  int local_10;
  
  Arad_Script::Arad_Script(local_74);
                    /* try { // try from 081a25fd to 081a2601 has its CatchHandler @ 081a28b2 */
  cVar1 = Arad_Script::Load(local_74,param_1,"on_off");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_74);
    if (iVar2 == 0) {
      uVar4 = 0xa4;
    }
    else {
      this[4] = (UsedFatigueRewardItem)0x0;
      std::allocator<char>::allocator();
                    /* try { // try from 081a2659 to 081a2673 has its CatchHandler @ 081a2676 */
      pcVar3 = (char *)Arad_Script::GetString(local_74,0,"flag");
      std::string::string((string *)&local_20,pcVar3,(allocator *)&local_19);
      std::allocator<char>::~allocator(&local_19);
      std::allocator<char>::allocator();
                    /* try { // try from 081a26b9 to 081a26bd has its CatchHandler @ 081a26f4 */
      std::string::string((string *)&local_18,"true",(allocator *)&local_11);
                    /* try { // try from 081a26cb to 081a26cf has its CatchHandler @ 081a26df */
      cVar1 = std::operator==(&local_20,&local_18);
                    /* try { // try from 081a26d8 to 081a26dc has its CatchHandler @ 081a26f4 */
      std::string::~string((string *)&local_18);
      std::allocator<char>::~allocator(&local_11);
      if (cVar1 != '\0') {
        this[4] = (UsedFatigueRewardItem)0x1;
      }
                    /* try { // try from 081a2737 to 081a286b has its CatchHandler @ 081a2890 */
      cVar1 = Arad_Script::Load(local_74,param_1,"item_reward");
      if (cVar1 == '\x01') {
        iVar2 = Arad_Script::GetRowNum(local_74);
        if (iVar2 == 0) {
          uVar4 = 0xaf;
        }
        else {
          Data::Data((Data *)&local_18c);
          local_10 = 0;
          while( true ) {
            iVar2 = Arad_Script::GetRowNum(local_74);
            if (iVar2 <= local_10) break;
            local_18c = Arad_Script::GetInt(local_74,local_10,"fatigue");
            local_18a = Arad_Script::GetInt(local_74,local_10,"item_count");
            local_78 = Arad_Script::GetInt(local_74,local_10,"item_id");
            pcVar3 = (char *)Arad_Script::GetString(local_74,local_10,"message");
            strncpy(acStack_188,pcVar3,0xff);
            pcVar3 = (char *)Arad_Script::GetString(local_74,local_10,"title");
            strncpy(acStack_89,pcVar3,0x10);
            std::vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>::
            push_back((vector<UsedFatigueRewardItem::Data,std::allocator<UsedFatigueRewardItem::Data>>
                       *)(this + 8),(Data *)&local_18c);
            local_10 = local_10 + 1;
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0xac;
      }
                    /* try { // try from 081a28ab to 081a28af has its CatchHandler @ 081a28b2 */
      std::string::~string((string *)&local_20);
    }
  }
  else {
    uVar4 = 0xa1;
  }
  Arad_Script::~Arad_Script(local_74);
  return uVar4;
}

```

