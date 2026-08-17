# WongWork__CDeathTower__CStage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## checkClearStage

```asm
// === 08461b3e WongWork::CDeathTower::CStage::checkClearStage  [0x08461b3e-0x8461c25] ===
 8461b3e:	55                   	push   %ebp
 8461b3f:	89 e5                	mov    %esp,%ebp
 8461b41:	56                   	push   %esi
 8461b42:	53                   	push   %ebx
 8461b43:	81 ec 70 03 00 00    	sub    $0x370,%esp
 8461b49:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 8461b4f:	89 04 24             	mov    %eax,(%esp)
 8461b52:	e8 71 f6 ce ff       	call   81511c8 <_ZN11map_monsterC1Ev>
 8461b57:	8b 45 08             	mov    0x8(%ebp),%eax
 8461b5a:	8d 50 18             	lea    0x18(%eax),%edx
 8461b5d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8461b60:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461b64:	89 04 24             	mov    %eax,(%esp)
 8461b67:	e8 9c 0a cf ff       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8461b6c:	83 ec 04             	sub    $0x4,%esp
 8461b6f:	eb 48                	jmp    8461bb9 <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv+0x7b>
 8461b71:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8461b74:	89 04 24             	mov    %eax,(%esp)
 8461b77:	e8 d0 0a cf ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 8461b7c:	83 c0 04             	add    $0x4,%eax
 8461b7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461b83:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 8461b89:	89 04 24             	mov    %eax,(%esp)
 8461b8c:	e8 a9 01 cf ff       	call   8151d3a <_ZN11map_monsteraSERKS_>
 8461b91:	8b 85 d0 fc ff ff    	mov    -0x330(%ebp),%eax
 8461b97:	83 f8 64             	cmp    $0x64,%eax
 8461b9a:	75 12                	jne    8461bae <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv+0x70>
 8461b9c:	0f b6 85 b7 fc ff ff 	movzbl -0x349(%ebp),%eax
 8461ba3:	84 c0                	test   %al,%al
 8461ba5:	75 07                	jne    8461bae <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv+0x70>
 8461ba7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8461bac:	eb 5e                	jmp    8461c0c <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv+0xce>
 8461bae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8461bb1:	89 04 24             	mov    %eax,(%esp)
 8461bb4:	e8 75 0a cf ff       	call   815262e <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEv>
 8461bb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8461bbc:	8d 50 18             	lea    0x18(%eax),%edx
 8461bbf:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8461bc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461bc6:	89 04 24             	mov    %eax,(%esp)
 8461bc9:	e8 b8 08 cf ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8461bce:	83 ec 04             	sub    $0x4,%esp
 8461bd1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8461bd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461bd8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8461bdb:	89 04 24             	mov    %eax,(%esp)
 8461bde:	e8 c9 08 cf ff       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 8461be3:	84 c0                	test   %al,%al
 8461be5:	75 8a                	jne    8461b71 <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv+0x33>
 8461be7:	bb 01 00 00 00       	mov    $0x1,%ebx
 8461bec:	eb 1e                	jmp    8461c0c <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv+0xce>
 8461bee:	89 d3                	mov    %edx,%ebx
 8461bf0:	89 c6                	mov    %eax,%esi
 8461bf2:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 8461bf8:	89 04 24             	mov    %eax,(%esp)
 8461bfb:	e8 ae f9 ce ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8461c00:	89 f0                	mov    %esi,%eax
 8461c02:	89 da                	mov    %ebx,%edx
 8461c04:	89 04 24             	mov    %eax,(%esp)
 8461c07:	e8 44 1b 68 00       	call   8ae3750 <_Unwind_Resume>
 8461c0c:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 8461c12:	89 04 24             	mov    %eax,(%esp)
 8461c15:	e8 94 f9 ce ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8461c1a:	89 d8                	mov    %ebx,%eax
 8461c1c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8461c1f:	83 c4 00             	add    $0x0,%esp
 8461c22:	5b                   	pop    %ebx
 8461c23:	5e                   	pop    %esi
 8461c24:	5d                   	pop    %ebp
 8461c25:	c3                   	ret

```

```c
// WongWork::CDeathTower::CStage::checkClearStage @ 0x8461b3e

/* WongWork::CDeathTower::CStage::checkClearStage() */

undefined4 WongWork::CDeathTower::CStage::checkClearStage(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  map_monster local_360 [19];
  char local_34d;
  int local_334;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_10 [4];
  
  map_monster::map_monster(local_360);
                    /* try { // try from 08461b67 to 08461bcd has its CatchHandler @ 08461bee */
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_14);
  do {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar3 = 1;
LAB_08461c0c:
      map_monster::~map_monster(local_360);
      return uVar3;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_14);
    map_monster::operator=(local_360,(map_monster *)(iVar2 + 4));
    if ((local_334 == 100) && (local_34d == '\0')) {
      uVar3 = 0;
      goto LAB_08461c0c;
    }
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_14);
  } while( true );
}

```

---

## consistMap

```asm
// === 08460634 WongWork::CDeathTower::CStage::consistMap  [0x08460634-0x84614eb] ===
 8460634:	55                   	push   %ebp
 8460635:	89 e5                	mov    %esp,%ebp
 8460637:	57                   	push   %edi
 8460638:	56                   	push   %esi
 8460639:	53                   	push   %ebx
 846063a:	81 ec bc 0f 00 00    	sub    $0xfbc,%esp
 8460640:	8b 45 10             	mov    0x10(%ebp),%eax
 8460643:	89 04 24             	mov    %eax,(%esp)
 8460646:	e8 2b 41 cd ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 846064b:	8b 55 08             	mov    0x8(%ebp),%edx
 846064e:	89 42 10             	mov    %eax,0x10(%edx)
 8460651:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 8460657:	89 04 24             	mov    %eax,(%esp)
 846065a:	e8 1f 1e c8 ff       	call   80e247e <_ZNSt6vectorIjSaIjEEC1Ev>
 846065f:	e8 37 bb c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8460664:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 846066a:	89 04 24             	mov    %eax,(%esp)
 846066d:	e8 0e 02 cf ff       	call   8150880 <_ZNK16CAICharacterList10getAPCountEv>
 8460672:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460676:	8d 85 68 f5 ff ff    	lea    -0xa98(%ebp),%eax
 846067c:	89 04 24             	mov    %eax,(%esp)
 846067f:	e8 58 86 dd ff       	call   8238cdc <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1ERKS6_>
 8460684:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 846068b:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460691:	89 04 24             	mov    %eax,(%esp)
 8460694:	e8 2f 0b cf ff       	call   81511c8 <_ZN11map_monsterC1Ev>
 8460699:	8b 45 10             	mov    0x10(%ebp),%eax
 846069c:	89 04 24             	mov    %eax,(%esp)
 846069f:	e8 58 02 cf ff       	call   81508fc <_ZNK4CMap15getAICharactersEv>
 84606a4:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84606a7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84606aa:	89 04 24             	mov    %eax,(%esp)
 84606ad:	e8 2c 20 cf ff       	call   81526de <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE5emptyEv>
 84606b2:	83 f0 01             	xor    $0x1,%eax
 84606b5:	84 c0                	test   %al,%al
 84606b7:	0f 84 83 02 00 00    	je     8460940 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x30c>
 84606bd:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 84606c4:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 84606ca:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84606cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84606d1:	89 04 24             	mov    %eax,(%esp)
 84606d4:	e8 49 20 cf ff       	call   8152722 <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE5beginEv>
 84606d9:	83 ec 04             	sub    $0x4,%esp
 84606dc:	8d 85 28 f5 ff ff    	lea    -0xad8(%ebp),%eax
 84606e2:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84606e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84606e9:	89 04 24             	mov    %eax,(%esp)
 84606ec:	e8 5d 20 cf ff       	call   815274e <_ZNKSt6vectorI27STAICharacterMapArrangeDataSaIS0_EE3endEv>
 84606f1:	83 ec 04             	sub    $0x4,%esp
 84606f4:	e9 27 02 00 00       	jmp    8460920 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x2ec>
 84606f9:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 84606ff:	89 04 24             	mov    %eax,(%esp)
 8460702:	e8 b5 20 cf ff       	call   81527bc <_ZNK9__gnu_cxx17__normal_iteratorIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEdeEv>
 8460707:	89 45 d0             	mov    %eax,-0x30(%ebp)
 846070a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 846070d:	8b 00                	mov    (%eax),%eax
 846070f:	89 c3                	mov    %eax,%ebx
 8460711:	e8 85 ba c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8460716:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 846071c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8460720:	89 04 24             	mov    %eax,(%esp)
 8460723:	e8 aa a2 ee ff       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 8460728:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 846072b:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 846072f:	75 0a                	jne    846073b <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x107>
 8460731:	bb 00 00 00 00       	mov    $0x0,%ebx
 8460736:	e9 3f 0d 00 00       	jmp    846147a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe46>
 846073b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 846073e:	89 04 24             	mov    %eax,(%esp)
 8460741:	e8 0a 01 cf ff       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 8460746:	89 85 8c f5 ff ff    	mov    %eax,-0xa74(%ebp)
 846074c:	8d 85 8c f5 ff ff    	lea    -0xa74(%ebp),%eax
 8460752:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460756:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 846075c:	89 04 24             	mov    %eax,(%esp)
 846075f:	e8 62 20 cf ff       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 8460764:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8460767:	89 04 24             	mov    %eax,(%esp)
 846076a:	e8 f7 00 cf ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 846076f:	85 c0                	test   %eax,%eax
 8460771:	0f 95 c0             	setne  %al
 8460774:	84 c0                	test   %al,%al
 8460776:	0f 84 be 00 00 00    	je     846083a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x206>
 846077c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 846077f:	89 04 24             	mov    %eax,(%esp)
 8460782:	e8 df 00 cf ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 8460787:	89 85 90 f5 ff ff    	mov    %eax,-0xa70(%ebp)
 846078d:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 8460793:	8d 95 90 f5 ff ff    	lea    -0xa70(%ebp),%edx
 8460799:	89 54 24 08          	mov    %edx,0x8(%esp)
 846079d:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 84607a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84607a7:	89 04 24             	mov    %eax,(%esp)
 84607aa:	e8 3f cb c6 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84607af:	83 ec 04             	sub    $0x4,%esp
 84607b2:	8d 85 94 f5 ff ff    	lea    -0xa6c(%ebp),%eax
 84607b8:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 84607be:	89 54 24 04          	mov    %edx,0x4(%esp)
 84607c2:	89 04 24             	mov    %eax,(%esp)
 84607c5:	e8 50 cb c6 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84607ca:	83 ec 04             	sub    $0x4,%esp
 84607cd:	8d 85 94 f5 ff ff    	lea    -0xa6c(%ebp),%eax
 84607d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84607d7:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 84607dd:	89 04 24             	mov    %eax,(%esp)
 84607e0:	e8 e3 9b c7 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84607e5:	84 c0                	test   %al,%al
 84607e7:	74 51                	je     846083a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x206>
 84607e9:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 84607ef:	89 04 24             	mov    %eax,(%esp)
 84607f2:	e8 49 cb c6 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84607f7:	89 c3                	mov    %eax,%ebx
 84607f9:	8d 85 24 f5 ff ff    	lea    -0xadc(%ebp),%eax
 84607ff:	89 04 24             	mov    %eax,(%esp)
 8460802:	e8 39 cb c6 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8460807:	8b 40 04             	mov    0x4(%eax),%eax
 846080a:	83 e8 01             	sub    $0x1,%eax
 846080d:	89 85 98 f5 ff ff    	mov    %eax,-0xa68(%ebp)
 8460813:	c7 85 9c f5 ff ff 00 	movl   $0x0,-0xa64(%ebp)
 846081a:	00 00 00 
 846081d:	8d 85 98 f5 ff ff    	lea    -0xa68(%ebp),%eax
 8460823:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460827:	8d 85 9c f5 ff ff    	lea    -0xa64(%ebp),%eax
 846082d:	89 04 24             	mov    %eax,(%esp)
 8460830:	e8 e3 d9 c2 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8460835:	8b 00                	mov    (%eax),%eax
 8460837:	89 43 04             	mov    %eax,0x4(%ebx)
 846083a:	c7 44 24 08 4c 03 00 	movl   $0x34c,0x8(%esp)
 8460841:	00 
 8460842:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8460849:	00 
 846084a:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460850:	89 04 24             	mov    %eax,(%esp)
 8460853:	e8 68 d4 c1 ff       	call   807dcc0 <memset@plt>
 8460858:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 846085b:	89 85 b0 f0 ff ff    	mov    %eax,-0xf50(%ebp)
 8460861:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8460864:	8b 00                	mov    (%eax),%eax
 8460866:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 846086c:	8b 45 08             	mov    0x8(%ebp),%eax
 846086f:	8b 40 48             	mov    0x48(%eax),%eax
 8460872:	89 85 b4 f0 ff ff    	mov    %eax,-0xf4c(%ebp)
 8460878:	8d 50 01             	lea    0x1(%eax),%edx
 846087b:	8b 45 08             	mov    0x8(%ebp),%eax
 846087e:	89 50 48             	mov    %edx,0x48(%eax)
 8460881:	c6 85 b8 f0 ff ff 05 	movb   $0x5,-0xf48(%ebp)
 8460888:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 846088b:	89 04 24             	mov    %eax,(%esp)
 846088e:	e8 c7 ff ce ff       	call   815085a <_ZNK12CAICharacter8getLevelEv>
 8460893:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 8460899:	8b 45 d0             	mov    -0x30(%ebp),%eax
 846089c:	8b 40 10             	mov    0x10(%eax),%eax
 846089f:	89 85 dc f0 ff ff    	mov    %eax,-0xf24(%ebp)
 84608a5:	c6 85 c1 f0 ff ff 00 	movb   $0x0,-0xf3f(%ebp)
 84608ac:	c6 85 c2 f0 ff ff 00 	movb   $0x0,-0xf3e(%ebp)
 84608b3:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 84608b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84608bd:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 84608c3:	89 04 24             	mov    %eax,(%esp)
 84608c6:	e8 1f 12 cf ff       	call   8151aea <_ZN11map_monsterC1ERKS_>
 84608cb:	8b 45 08             	mov    0x8(%ebp),%eax
 84608ce:	8d 50 0c             	lea    0xc(%eax),%edx
 84608d1:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 84608d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84608db:	89 14 24             	mov    %edx,(%esp)
 84608de:	e8 2f 0d cf ff       	call   8151612 <_ZN7MapInfo7Add_MobE11map_monster>
 84608e3:	eb 1b                	jmp    8460900 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x2cc>
 84608e5:	89 d3                	mov    %edx,%ebx
 84608e7:	89 c6                	mov    %eax,%esi
 84608e9:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 84608ef:	89 04 24             	mov    %eax,(%esp)
 84608f2:	e8 b7 0c cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 84608f7:	89 f0                	mov    %esi,%eax
 84608f9:	89 da                	mov    %ebx,%edx
 84608fb:	e9 62 0b 00 00       	jmp    8461462 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe2e>
 8460900:	8d 85 a0 f5 ff ff    	lea    -0xa60(%ebp),%eax
 8460906:	89 04 24             	mov    %eax,(%esp)
 8460909:	e8 a0 0c cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 846090e:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8460912:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 8460918:	89 04 24             	mov    %eax,(%esp)
 846091b:	e8 86 1e cf ff       	call   81527a6 <_ZN9__gnu_cxx17__normal_iteratorIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEppEv>
 8460920:	8d 85 28 f5 ff ff    	lea    -0xad8(%ebp),%eax
 8460926:	89 44 24 04          	mov    %eax,0x4(%esp)
 846092a:	8d 85 2c f5 ff ff    	lea    -0xad4(%ebp),%eax
 8460930:	89 04 24             	mov    %eax,(%esp)
 8460933:	e8 42 1e cf ff       	call   815277a <_ZN9__gnu_cxxneIPK27STAICharacterMapArrangeDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8460938:	84 c0                	test   %al,%al
 846093a:	0f 85 b9 fd ff ff    	jne    84606f9 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xc5>
 8460940:	8b 45 10             	mov    0x10(%ebp),%eax
 8460943:	89 04 24             	mov    %eax,(%esp)
 8460946:	e8 a5 ff ce ff       	call   81508f0 <_ZNK4CMap17getAPCRandomPointEv>
 846094b:	89 85 64 f5 ff ff    	mov    %eax,-0xa9c(%ebp)
 8460951:	8b 85 64 f5 ff ff    	mov    -0xa9c(%ebp),%eax
 8460957:	85 c0                	test   %eax,%eax
 8460959:	0f 84 c9 03 00 00    	je     8460d28 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x6f4>
 846095f:	c7 45 c4 40 00 00 00 	movl   $0x40,-0x3c(%ebp)
 8460966:	e9 97 03 00 00       	jmp    8460d02 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x6ce>
 846096b:	8b 85 64 f5 ff ff    	mov    -0xa9c(%ebp),%eax
 8460971:	89 04 24             	mov    %eax,(%esp)
 8460974:	e8 0e 12 25 00       	call   86b1b87 <_Z12get_rand_inti>
 8460979:	83 c0 01             	add    $0x1,%eax
 846097c:	89 c3                	mov    %eax,%ebx
 846097e:	e8 18 b8 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8460983:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 8460989:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 846098d:	89 04 24             	mov    %eax,(%esp)
 8460990:	e8 5f a1 ee ff       	call   834aaf4 <_ZN16CAICharacterList7getByAPEj>
 8460995:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8460998:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 846099c:	75 0a                	jne    84609a8 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x374>
 846099e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84609a3:	e9 d2 0a 00 00       	jmp    846147a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe46>
 84609a8:	8d 85 ec f8 ff ff    	lea    -0x714(%ebp),%eax
 84609ae:	8d 95 80 f5 ff ff    	lea    -0xa80(%ebp),%edx
 84609b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84609b8:	89 04 24             	mov    %eax,(%esp)
 84609bb:	e8 ca 20 c8 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 84609c0:	83 ec 04             	sub    $0x4,%esp
 84609c3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84609c6:	89 04 24             	mov    %eax,(%esp)
 84609c9:	e8 82 fe ce ff       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 84609ce:	89 85 f4 f8 ff ff    	mov    %eax,-0x70c(%ebp)
 84609d4:	8d 85 f8 f8 ff ff    	lea    -0x708(%ebp),%eax
 84609da:	8d 95 80 f5 ff ff    	lea    -0xa80(%ebp),%edx
 84609e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84609e4:	89 04 24             	mov    %eax,(%esp)
 84609e7:	e8 9e 20 c8 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 84609ec:	83 ec 04             	sub    $0x4,%esp
 84609ef:	8d 85 fc f8 ff ff    	lea    -0x704(%ebp),%eax
 84609f5:	8d 95 80 f5 ff ff    	lea    -0xa80(%ebp),%edx
 84609fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84609ff:	89 04 24             	mov    %eax,(%esp)
 8460a02:	e8 47 2e c8 ff       	call   80e384e <_ZNSt6vectorIjSaIjEE5beginEv>
 8460a07:	83 ec 04             	sub    $0x4,%esp
 8460a0a:	8d 85 f0 f8 ff ff    	lea    -0x710(%ebp),%eax
 8460a10:	8d 95 f4 f8 ff ff    	lea    -0x70c(%ebp),%edx
 8460a16:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8460a1a:	8b 95 f8 f8 ff ff    	mov    -0x708(%ebp),%edx
 8460a20:	89 54 24 08          	mov    %edx,0x8(%esp)
 8460a24:	8b 95 fc f8 ff ff    	mov    -0x704(%ebp),%edx
 8460a2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460a2e:	89 04 24             	mov    %eax,(%esp)
 8460a31:	e8 35 1c cf ff       	call   815266b <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEEjET_S7_S7_RKT0_>
 8460a36:	83 ec 04             	sub    $0x4,%esp
 8460a39:	8d 85 ec f8 ff ff    	lea    -0x714(%ebp),%eax
 8460a3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460a43:	8d 85 f0 f8 ff ff    	lea    -0x710(%ebp),%eax
 8460a49:	89 04 24             	mov    %eax,(%esp)
 8460a4c:	e8 9f 08 cb ff       	call   81112f0 <_ZN9__gnu_cxxneIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8460a51:	84 c0                	test   %al,%al
 8460a53:	0f 84 c6 00 00 00    	je     8460b1f <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x4eb>
 8460a59:	8d 85 00 f9 ff ff    	lea    -0x700(%ebp),%eax
 8460a5f:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 8460a65:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460a69:	89 04 24             	mov    %eax,(%esp)
 8460a6c:	e8 2f 15 cf ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 8460a71:	83 ec 04             	sub    $0x4,%esp
 8460a74:	8d 85 00 f9 ff ff    	lea    -0x700(%ebp),%eax
 8460a7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460a7e:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 8460a84:	89 04 24             	mov    %eax,(%esp)
 8460a87:	e8 3a 15 cf ff       	call   8151fc6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 8460a8c:	8d 85 04 f9 ff ff    	lea    -0x6fc(%ebp),%eax
 8460a92:	8d 95 64 f5 ff ff    	lea    -0xa9c(%ebp),%edx
 8460a98:	89 54 24 08          	mov    %edx,0x8(%esp)
 8460a9c:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 8460aa2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460aa6:	89 04 24             	mov    %eax,(%esp)
 8460aa9:	e8 42 1d cf ff       	call   81527f0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE11upper_boundERS3_>
 8460aae:	83 ec 04             	sub    $0x4,%esp
 8460ab1:	8d 85 04 f9 ff ff    	lea    -0x6fc(%ebp),%eax
 8460ab7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460abb:	8d 85 18 f5 ff ff    	lea    -0xae8(%ebp),%eax
 8460ac1:	89 04 24             	mov    %eax,(%esp)
 8460ac4:	e8 fd 14 cf ff       	call   8151fc6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 8460ac9:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8460ad0:	eb 22                	jmp    8460af4 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x4c0>
 8460ad2:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 8460ad8:	89 04 24             	mov    %eax,(%esp)
 8460adb:	e8 30 64 c6 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 8460ae0:	8b 40 04             	mov    0x4(%eax),%eax
 8460ae3:	01 45 dc             	add    %eax,-0x24(%ebp)
 8460ae6:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 8460aec:	89 04 24             	mov    %eax,(%esp)
 8460aef:	e8 8e 14 cf ff       	call   8151f82 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEppEv>
 8460af4:	8d 85 18 f5 ff ff    	lea    -0xae8(%ebp),%eax
 8460afa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460afe:	8d 85 1c f5 ff ff    	lea    -0xae4(%ebp),%eax
 8460b04:	89 04 24             	mov    %eax,(%esp)
 8460b07:	e8 f0 63 c6 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 8460b0c:	84 c0                	test   %al,%al
 8460b0e:	75 c2                	jne    8460ad2 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x49e>
 8460b10:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8460b14:	0f 85 e7 01 00 00    	jne    8460d01 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x6cd>
 8460b1a:	e9 09 02 00 00       	jmp    8460d28 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x6f4>
 8460b1f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8460b22:	89 04 24             	mov    %eax,(%esp)
 8460b25:	e8 26 fd ce ff       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 8460b2a:	89 85 08 f9 ff ff    	mov    %eax,-0x6f8(%ebp)
 8460b30:	8d 85 08 f9 ff ff    	lea    -0x6f8(%ebp),%eax
 8460b36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460b3a:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 8460b40:	89 04 24             	mov    %eax,(%esp)
 8460b43:	e8 7e 1c cf ff       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 8460b48:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8460b4b:	89 04 24             	mov    %eax,(%esp)
 8460b4e:	e8 13 fd ce ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 8460b53:	89 85 0c f9 ff ff    	mov    %eax,-0x6f4(%ebp)
 8460b59:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 8460b5f:	8d 95 0c f9 ff ff    	lea    -0x6f4(%ebp),%edx
 8460b65:	89 54 24 08          	mov    %edx,0x8(%esp)
 8460b69:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 8460b6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460b73:	89 04 24             	mov    %eax,(%esp)
 8460b76:	e8 73 c7 c6 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8460b7b:	83 ec 04             	sub    $0x4,%esp
 8460b7e:	8d 85 10 f9 ff ff    	lea    -0x6f0(%ebp),%eax
 8460b84:	8d 95 68 f5 ff ff    	lea    -0xa98(%ebp),%edx
 8460b8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460b8e:	89 04 24             	mov    %eax,(%esp)
 8460b91:	e8 84 c7 c6 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8460b96:	83 ec 04             	sub    $0x4,%esp
 8460b99:	8d 85 10 f9 ff ff    	lea    -0x6f0(%ebp),%eax
 8460b9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460ba3:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 8460ba9:	89 04 24             	mov    %eax,(%esp)
 8460bac:	e8 17 98 c7 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8460bb1:	84 c0                	test   %al,%al
 8460bb3:	74 51                	je     8460c06 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x5d2>
 8460bb5:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 8460bbb:	89 04 24             	mov    %eax,(%esp)
 8460bbe:	e8 7d c7 c6 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8460bc3:	89 c3                	mov    %eax,%ebx
 8460bc5:	8d 85 20 f5 ff ff    	lea    -0xae0(%ebp),%eax
 8460bcb:	89 04 24             	mov    %eax,(%esp)
 8460bce:	e8 6d c7 c6 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8460bd3:	8b 40 04             	mov    0x4(%eax),%eax
 8460bd6:	83 e8 01             	sub    $0x1,%eax
 8460bd9:	89 85 14 f9 ff ff    	mov    %eax,-0x6ec(%ebp)
 8460bdf:	c7 85 18 f9 ff ff 00 	movl   $0x0,-0x6e8(%ebp)
 8460be6:	00 00 00 
 8460be9:	8d 85 14 f9 ff ff    	lea    -0x6ec(%ebp),%eax
 8460bef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460bf3:	8d 85 18 f9 ff ff    	lea    -0x6e8(%ebp),%eax
 8460bf9:	89 04 24             	mov    %eax,(%esp)
 8460bfc:	e8 17 d6 c2 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8460c01:	8b 00                	mov    (%eax),%eax
 8460c03:	89 43 04             	mov    %eax,0x4(%ebx)
 8460c06:	8b 9d 64 f5 ff ff    	mov    -0xa9c(%ebp),%ebx
 8460c0c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8460c0f:	89 04 24             	mov    %eax,(%esp)
 8460c12:	e8 4f fc ce ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 8460c17:	89 da                	mov    %ebx,%edx
 8460c19:	29 c2                	sub    %eax,%edx
 8460c1b:	89 d0                	mov    %edx,%eax
 8460c1d:	89 85 64 f5 ff ff    	mov    %eax,-0xa9c(%ebp)
 8460c23:	c7 44 24 08 4c 03 00 	movl   $0x34c,0x8(%esp)
 8460c2a:	00 
 8460c2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8460c32:	00 
 8460c33:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460c39:	89 04 24             	mov    %eax,(%esp)
 8460c3c:	e8 7f d0 c1 ff       	call   807dcc0 <memset@plt>
 8460c41:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8460c44:	89 85 b0 f0 ff ff    	mov    %eax,-0xf50(%ebp)
 8460c4a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8460c4d:	89 04 24             	mov    %eax,(%esp)
 8460c50:	e8 fb fb ce ff       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 8460c55:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 8460c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8460c5e:	8b 40 48             	mov    0x48(%eax),%eax
 8460c61:	89 85 b4 f0 ff ff    	mov    %eax,-0xf4c(%ebp)
 8460c67:	8d 50 01             	lea    0x1(%eax),%edx
 8460c6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8460c6d:	89 50 48             	mov    %edx,0x48(%eax)
 8460c70:	c6 85 b8 f0 ff ff 05 	movb   $0x5,-0xf48(%ebp)
 8460c77:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8460c7a:	89 04 24             	mov    %eax,(%esp)
 8460c7d:	e8 d8 fb ce ff       	call   815085a <_ZNK12CAICharacter8getLevelEv>
 8460c82:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 8460c88:	c7 85 dc f0 ff ff 64 	movl   $0x64,-0xf24(%ebp)
 8460c8f:	00 00 00 
 8460c92:	c6 85 c1 f0 ff ff 00 	movb   $0x0,-0xf3f(%ebp)
 8460c99:	c6 85 c2 f0 ff ff 00 	movb   $0x0,-0xf3e(%ebp)
 8460ca0:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460ca6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460caa:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 8460cb0:	89 04 24             	mov    %eax,(%esp)
 8460cb3:	e8 32 0e cf ff       	call   8151aea <_ZN11map_monsterC1ERKS_>
 8460cb8:	8b 45 08             	mov    0x8(%ebp),%eax
 8460cbb:	8d 50 0c             	lea    0xc(%eax),%edx
 8460cbe:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 8460cc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460cc8:	89 14 24             	mov    %edx,(%esp)
 8460ccb:	e8 42 09 cf ff       	call   8151612 <_ZN7MapInfo7Add_MobE11map_monster>
 8460cd0:	eb 1b                	jmp    8460ced <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x6b9>
 8460cd2:	89 d3                	mov    %edx,%ebx
 8460cd4:	89 c6                	mov    %eax,%esi
 8460cd6:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 8460cdc:	89 04 24             	mov    %eax,(%esp)
 8460cdf:	e8 ca 08 cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8460ce4:	89 f0                	mov    %esi,%eax
 8460ce6:	89 da                	mov    %ebx,%edx
 8460ce8:	e9 75 07 00 00       	jmp    8461462 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe2e>
 8460ced:	8d 85 1c f9 ff ff    	lea    -0x6e4(%ebp),%eax
 8460cf3:	89 04 24             	mov    %eax,(%esp)
 8460cf6:	e8 b3 08 cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8460cfb:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8460cff:	eb 01                	jmp    8460d02 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x6ce>
 8460d01:	90                   	nop
 8460d02:	e8 94 b4 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8460d07:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 8460d0d:	89 04 24             	mov    %eax,(%esp)
 8460d10:	e8 5d fb ce ff       	call   8150872 <_ZN16CAICharacterList8getMinAPEv>
 8460d15:	8b 95 64 f5 ff ff    	mov    -0xa9c(%ebp),%edx
 8460d1b:	39 d0                	cmp    %edx,%eax
 8460d1d:	0f 9e c0             	setle  %al
 8460d20:	84 c0                	test   %al,%al
 8460d22:	0f 85 43 fc ff ff    	jne    846096b <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x337>
 8460d28:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8460d2f:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 8460d35:	89 04 24             	mov    %eax,(%esp)
 8460d38:	e8 6f d4 c2 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8460d3d:	8d 85 50 f5 ff ff    	lea    -0xab0(%ebp),%eax
 8460d43:	8b 55 10             	mov    0x10(%ebp),%edx
 8460d46:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460d4a:	89 04 24             	mov    %eax,(%esp)
 8460d4d:	e8 44 3a cd ff       	call   8134796 <_ZNK4CMap16get_monster_listEv>
 8460d52:	83 ec 04             	sub    $0x4,%esp
 8460d55:	8d 85 68 fc ff ff    	lea    -0x398(%ebp),%eax
 8460d5b:	8d 95 50 f5 ff ff    	lea    -0xab0(%ebp),%edx
 8460d61:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460d65:	89 04 24             	mov    %eax,(%esp)
 8460d68:	e8 af 1a cf ff       	call   815281c <_ZNSt4listI11_mapMonsterSaIS0_EE5beginEv>
 8460d6d:	83 ec 04             	sub    $0x4,%esp
 8460d70:	8d 85 68 fc ff ff    	lea    -0x398(%ebp),%eax
 8460d76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460d7a:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 8460d80:	89 04 24             	mov    %eax,(%esp)
 8460d83:	e8 ba 1a cf ff       	call   8152842 <_ZNSt20_List_const_iteratorI11_mapMonsterEC1ERKSt14_List_iteratorIS0_E>
 8460d88:	e9 f4 01 00 00       	jmp    8460f81 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x94d>
 8460d8d:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 8460d93:	89 04 24             	mov    %eax,(%esp)
 8460d96:	e8 d9 8a cd ff       	call   8139874 <_ZNKSt20_List_const_iteratorI11_mapMonsterEdeEv>
 8460d9b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8460d9e:	c7 44 24 08 4c 03 00 	movl   $0x34c,0x8(%esp)
 8460da5:	00 
 8460da6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8460dad:	00 
 8460dae:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460db4:	89 04 24             	mov    %eax,(%esp)
 8460db7:	e8 04 cf c1 ff       	call   807dcc0 <memset@plt>
 8460dbc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8460dbf:	89 85 b0 f0 ff ff    	mov    %eax,-0xf50(%ebp)
 8460dc5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460dc8:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8460dcc:	84 c0                	test   %al,%al
 8460dce:	74 54                	je     8460e24 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x7f0>
 8460dd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8460dd3:	89 04 24             	mov    %eax,(%esp)
 8460dd6:	e8 e5 8c 00 00       	call   8469ac0 <_ZNK8WongWork11CDeathTower11CDungeonMgr16getStandardLevelEv>
 8460ddb:	89 c2                	mov    %eax,%edx
 8460ddd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460de0:	8b 40 08             	mov    0x8(%eax),%eax
 8460de3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8460de6:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 8460dec:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 8460df3:	3c c7                	cmp    $0xc7,%al
 8460df5:	77 0e                	ja     8460e05 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x7d1>
 8460df7:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 8460dfe:	0f b6 c0             	movzbl %al,%eax
 8460e01:	85 c0                	test   %eax,%eax
 8460e03:	7e 12                	jle    8460e17 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x7e3>
 8460e05:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 8460e0c:	3c c8                	cmp    $0xc8,%al
 8460e0e:	76 0c                	jbe    8460e1c <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x7e8>
 8460e10:	b8 c8 ff ff ff       	mov    $0xffffffc8,%eax
 8460e15:	eb 05                	jmp    8460e1c <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x7e8>
 8460e17:	b8 01 00 00 00       	mov    $0x1,%eax
 8460e1c:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 8460e22:	eb 0c                	jmp    8460e30 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x7fc>
 8460e24:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460e27:	8b 40 08             	mov    0x8(%eax),%eax
 8460e2a:	88 85 c0 f0 ff ff    	mov    %al,-0xf40(%ebp)
 8460e30:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460e33:	8b 00                	mov    (%eax),%eax
 8460e35:	83 f8 ff             	cmp    $0xffffffff,%eax
 8460e38:	75 26                	jne    8460e60 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x82c>
 8460e3a:	0f b6 85 c0 f0 ff ff 	movzbl -0xf40(%ebp),%eax
 8460e41:	0f b6 d8             	movzbl %al,%ebx
 8460e44:	e8 52 b3 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8460e49:	8b 40 08             	mov    0x8(%eax),%eax
 8460e4c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8460e50:	89 04 24             	mov    %eax,(%esp)
 8460e53:	e8 c8 f0 ee ff       	call   834ff20 <_ZN15CMonsterManager19get_levelrandom_mobEi>
 8460e58:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 8460e5e:	eb 0b                	jmp    8460e6b <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x837>
 8460e60:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460e63:	8b 00                	mov    (%eax),%eax
 8460e65:	89 85 bc f0 ff ff    	mov    %eax,-0xf44(%ebp)
 8460e6b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460e6e:	8b 40 10             	mov    0x10(%eax),%eax
 8460e71:	88 85 c1 f0 ff ff    	mov    %al,-0xf3f(%ebp)
 8460e77:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460e7a:	8b 40 14             	mov    0x14(%eax),%eax
 8460e7d:	88 85 c2 f0 ff ff    	mov    %al,-0xf3e(%ebp)
 8460e83:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460e86:	8b 40 18             	mov    0x18(%eax),%eax
 8460e89:	88 85 b8 f0 ff ff    	mov    %al,-0xf48(%ebp)
 8460e8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8460e92:	8b 40 48             	mov    0x48(%eax),%eax
 8460e95:	89 85 b4 f0 ff ff    	mov    %eax,-0xf4c(%ebp)
 8460e9b:	8d 50 01             	lea    0x1(%eax),%edx
 8460e9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8460ea1:	89 50 48             	mov    %edx,0x48(%eax)
 8460ea4:	0f b6 85 b8 f0 ff ff 	movzbl -0xf48(%ebp),%eax
 8460eab:	84 c0                	test   %al,%al
 8460ead:	75 1c                	jne    8460ecb <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x897>
 8460eaf:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460eb5:	89 04 24             	mov    %eax,(%esp)
 8460eb8:	e8 c5 02 cf ff       	call   8151182 <_ZN11map_monster14isNamedMonsterEv>
 8460ebd:	83 f0 01             	xor    $0x1,%eax
 8460ec0:	84 c0                	test   %al,%al
 8460ec2:	74 07                	je     8460ecb <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x897>
 8460ec4:	b8 01 00 00 00       	mov    $0x1,%eax
 8460ec9:	eb 05                	jmp    8460ed0 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x89c>
 8460ecb:	b8 00 00 00 00       	mov    $0x0,%eax
 8460ed0:	84 c0                	test   %al,%al
 8460ed2:	74 1b                	je     8460eef <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x8bb>
 8460ed4:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460eda:	83 c0 04             	add    $0x4,%eax
 8460edd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460ee1:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 8460ee7:	89 04 24             	mov    %eax,(%esp)
 8460eea:	e8 37 02 cb ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8460eef:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460ef2:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 8460ef6:	88 85 c3 f0 ff ff    	mov    %al,-0xf3d(%ebp)
 8460efc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460eff:	8b 40 20             	mov    0x20(%eax),%eax
 8460f02:	88 85 c4 f0 ff ff    	mov    %al,-0xf3c(%ebp)
 8460f08:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8460f0b:	8b 40 28             	mov    0x28(%eax),%eax
 8460f0e:	89 85 dc f0 ff ff    	mov    %eax,-0xf24(%ebp)
 8460f14:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8460f1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460f1e:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 8460f24:	89 04 24             	mov    %eax,(%esp)
 8460f27:	e8 be 0b cf ff       	call   8151aea <_ZN11map_monsterC1ERKS_>
 8460f2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8460f2f:	8d 50 0c             	lea    0xc(%eax),%edx
 8460f32:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 8460f38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460f3c:	89 14 24             	mov    %edx,(%esp)
 8460f3f:	e8 ce 06 cf ff       	call   8151612 <_ZN7MapInfo7Add_MobE11map_monster>
 8460f44:	eb 1b                	jmp    8460f61 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x92d>
 8460f46:	89 d3                	mov    %edx,%ebx
 8460f48:	89 c6                	mov    %eax,%esi
 8460f4a:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 8460f50:	89 04 24             	mov    %eax,(%esp)
 8460f53:	e8 56 06 cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8460f58:	89 f0                	mov    %esi,%eax
 8460f5a:	89 da                	mov    %ebx,%edx
 8460f5c:	e9 b1 04 00 00       	jmp    8461412 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xdde>
 8460f61:	8d 85 74 fc ff ff    	lea    -0x38c(%ebp),%eax
 8460f67:	89 04 24             	mov    %eax,(%esp)
 8460f6a:	e8 3f 06 cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8460f6f:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 8460f75:	89 04 24             	mov    %eax,(%esp)
 8460f78:	e8 e3 88 cd ff       	call   8139860 <_ZNSt20_List_const_iteratorI11_mapMonsterEppEv>
 8460f7d:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8460f81:	8d 85 70 fc ff ff    	lea    -0x390(%ebp),%eax
 8460f87:	8d 95 50 f5 ff ff    	lea    -0xab0(%ebp),%edx
 8460f8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8460f91:	89 04 24             	mov    %eax,(%esp)
 8460f94:	e8 73 aa cd ff       	call   813ba0c <_ZNSt4listI11_mapMonsterSaIS0_EE3endEv>
 8460f99:	83 ec 04             	sub    $0x4,%esp
 8460f9c:	8d 85 70 fc ff ff    	lea    -0x390(%ebp),%eax
 8460fa2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460fa6:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 8460fac:	89 04 24             	mov    %eax,(%esp)
 8460faf:	e8 8e 18 cf ff       	call   8152842 <_ZNSt20_List_const_iteratorI11_mapMonsterEC1ERKSt14_List_iteratorIS0_E>
 8460fb4:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 8460fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8460fbe:	8d 85 4c f5 ff ff    	lea    -0xab4(%ebp),%eax
 8460fc4:	89 04 24             	mov    %eax,(%esp)
 8460fc7:	e8 06 4e cd ff       	call   8135dd2 <_ZNKSt20_List_const_iteratorI11_mapMonsterEneERKS1_>
 8460fcc:	84 c0                	test   %al,%al
 8460fce:	0f 85 b9 fd ff ff    	jne    8460d8d <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0x759>
 8460fd4:	8d 85 3c f5 ff ff    	lea    -0xac4(%ebp),%eax
 8460fda:	89 04 24             	mov    %eax,(%esp)
 8460fdd:	e8 ac f8 ce ff       	call   815088e <_ZN8_mapItemC1Ev>
 8460fe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8460fe5:	89 04 24             	mov    %eax,(%esp)
 8460fe8:	e8 ff 8a 00 00       	call   8469aec <_ZNK8WongWork11CDeathTower11CDungeonMgr28getSpecialPassiveObjectItemsEv>
 8460fed:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8460ff0:	8d 85 98 f4 ff ff    	lea    -0xb68(%ebp),%eax
 8460ff6:	89 04 24             	mov    %eax,(%esp)
 8460ff9:	e8 08 97 ce ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 8460ffe:	8d 85 50 f4 ff ff    	lea    -0xbb0(%ebp),%eax
 8461004:	89 04 24             	mov    %eax,(%esp)
 8461007:	e8 fa 96 ce ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 846100c:	8b 45 0c             	mov    0xc(%ebp),%eax
 846100f:	89 04 24             	mov    %eax,(%esp)
 8461012:	e8 bf 8a 00 00       	call   8469ad6 <_ZNK8WongWork11CDeathTower11CDungeonMgr18getObjectDropItemsEv>
 8461017:	89 85 84 f4 ff ff    	mov    %eax,-0xb7c(%ebp)
 846101d:	8d 85 34 f5 ff ff    	lea    -0xacc(%ebp),%eax
 8461023:	8b 55 10             	mov    0x10(%ebp),%edx
 8461026:	89 54 24 04          	mov    %edx,0x4(%esp)
 846102a:	89 04 24             	mov    %eax,(%esp)
 846102d:	e8 94 f8 ce ff       	call   81508c6 <_ZNK4CMap13get_item_listEv>
 8461032:	83 ec 04             	sub    $0x4,%esp
 8461035:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 846103b:	8d 95 34 f5 ff ff    	lea    -0xacc(%ebp),%edx
 8461041:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461045:	89 04 24             	mov    %eax,(%esp)
 8461048:	e8 05 18 cf ff       	call   8152852 <_ZNSt4listI8_mapItemSaIS0_EE5beginEv>
 846104d:	83 ec 04             	sub    $0x4,%esp
 8461050:	e9 eb 02 00 00       	jmp    8461340 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd0c>
 8461055:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 846105b:	89 04 24             	mov    %eax,(%esp)
 846105e:	e8 4d 18 cf ff       	call   81528b0 <_ZNKSt14_List_iteratorI8_mapItemEdeEv>
 8461063:	8b 10                	mov    (%eax),%edx
 8461065:	89 95 3c f5 ff ff    	mov    %edx,-0xac4(%ebp)
 846106b:	8b 50 04             	mov    0x4(%eax),%edx
 846106e:	89 95 40 f5 ff ff    	mov    %edx,-0xac0(%ebp)
 8461074:	8b 50 08             	mov    0x8(%eax),%edx
 8461077:	89 95 44 f5 ff ff    	mov    %edx,-0xabc(%ebp)
 846107d:	8b 40 0c             	mov    0xc(%eax),%eax
 8461080:	89 85 48 f5 ff ff    	mov    %eax,-0xab8(%ebp)
 8461086:	8b 85 3c f5 ff ff    	mov    -0xac4(%ebp),%eax
 846108c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461090:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8461093:	89 04 24             	mov    %eax,(%esp)
 8461096:	e8 23 18 cf ff       	call   81528be <_ZNKSt6vectorI21stDungeonAssignItem_tSaIS0_EE2atEj>
 846109b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 846109e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84610a1:	8b 00                	mov    (%eax),%eax
 84610a3:	83 f8 ff             	cmp    $0xffffffff,%eax
 84610a6:	74 0d                	je     84610b5 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xa81>
 84610a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84610ab:	8b 00                	mov    (%eax),%eax
 84610ad:	88 85 d0 f4 ff ff    	mov    %al,-0xb30(%ebp)
 84610b3:	eb 46                	jmp    84610fb <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xac7>
 84610b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84610b8:	89 04 24             	mov    %eax,(%esp)
 84610bb:	e8 00 8a 00 00       	call   8469ac0 <_ZNK8WongWork11CDeathTower11CDungeonMgr16getStandardLevelEv>
 84610c0:	85 c0                	test   %eax,%eax
 84610c2:	7e 12                	jle    84610d6 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xaa2>
 84610c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84610c7:	89 04 24             	mov    %eax,(%esp)
 84610ca:	e8 f1 89 00 00       	call   8469ac0 <_ZNK8WongWork11CDeathTower11CDungeonMgr16getStandardLevelEv>
 84610cf:	3d c8 00 00 00       	cmp    $0xc8,%eax
 84610d4:	7e 07                	jle    84610dd <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xaa9>
 84610d6:	b8 01 00 00 00       	mov    $0x1,%eax
 84610db:	eb 05                	jmp    84610e2 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xaae>
 84610dd:	b8 00 00 00 00       	mov    $0x0,%eax
 84610e2:	84 c0                	test   %al,%al
 84610e4:	0f 85 55 02 00 00    	jne    846133f <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd0b>
 84610ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84610ed:	89 04 24             	mov    %eax,(%esp)
 84610f0:	e8 cb 89 00 00       	call   8469ac0 <_ZNK8WongWork11CDeathTower11CDungeonMgr16getStandardLevelEv>
 84610f5:	88 85 d0 f4 ff ff    	mov    %al,-0xb30(%ebp)
 84610fb:	8d 85 e0 f4 ff ff    	lea    -0xb20(%ebp),%eax
 8461101:	89 04 24             	mov    %eax,(%esp)
 8461104:	e8 fd 99 ce ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 8461109:	8b 85 40 f5 ff ff    	mov    -0xac0(%ebp),%eax
 846110f:	88 85 d1 f4 ff ff    	mov    %al,-0xb2f(%ebp)
 8461115:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8461118:	83 c0 04             	add    $0x4,%eax
 846111b:	89 85 cc f4 ff ff    	mov    %eax,-0xb34(%ebp)
 8461121:	e8 75 b0 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8461126:	89 04 24             	mov    %eax,(%esp)
 8461129:	e8 bc 95 ce ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 846112e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8461135:	00 
 8461136:	89 04 24             	mov    %eax,(%esp)
 8461139:	e8 92 96 ce ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 846113e:	8b 10                	mov    (%eax),%edx
 8461140:	83 c2 0c             	add    $0xc,%edx
 8461143:	8b 0a                	mov    (%edx),%ecx
 8461145:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 846114b:	89 54 24 08          	mov    %edx,0x8(%esp)
 846114f:	8d 95 98 f4 ff ff    	lea    -0xb68(%ebp),%edx
 8461155:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461159:	89 04 24             	mov    %eax,(%esp)
 846115c:	ff d1                	call   *%ecx
 846115e:	e8 38 b0 c6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8461163:	89 04 24             	mov    %eax,(%esp)
 8461166:	e8 7f 95 ce ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 846116b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8461172:	00 
 8461173:	89 04 24             	mov    %eax,(%esp)
 8461176:	e8 55 96 ce ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 846117b:	8b 10                	mov    (%eax),%edx
 846117d:	83 c2 0c             	add    $0xc,%edx
 8461180:	8b 0a                	mov    (%edx),%ecx
 8461182:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 8461188:	89 54 24 08          	mov    %edx,0x8(%esp)
 846118c:	8d 95 50 f4 ff ff    	lea    -0xbb0(%ebp),%edx
 8461192:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461196:	89 04 24             	mov    %eax,(%esp)
 8461199:	ff d1                	call   *%ecx
 846119b:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 84611a1:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 84611a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84611ab:	89 04 24             	mov    %eax,(%esp)
 84611ae:	e8 51 9b ce ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 84611b3:	83 ec 04             	sub    $0x4,%esp
 84611b6:	8d 85 10 f5 ff ff    	lea    -0xaf0(%ebp),%eax
 84611bc:	8d 95 e0 f4 ff ff    	lea    -0xb20(%ebp),%edx
 84611c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84611c6:	89 04 24             	mov    %eax,(%esp)
 84611c9:	e8 1c 17 cf ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 84611ce:	83 ec 04             	sub    $0x4,%esp
 84611d1:	e9 13 01 00 00       	jmp    84612e9 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xcb5>
 84611d6:	8d 85 fc f3 ff ff    	lea    -0xc04(%ebp),%eax
 84611dc:	89 04 24             	mov    %eax,(%esp)
 84611df:	e8 e8 00 cf ff       	call   81512cc <_ZN8map_itemC1Ev>
 84611e4:	c6 85 fc f3 ff ff 01 	movb   $0x1,-0xc04(%ebp)
 84611eb:	8b 45 08             	mov    0x8(%ebp),%eax
 84611ee:	8b 40 4c             	mov    0x4c(%eax),%eax
 84611f1:	89 85 00 f4 ff ff    	mov    %eax,-0xc00(%ebp)
 84611f7:	8d 50 01             	lea    0x1(%eax),%edx
 84611fa:	8b 45 08             	mov    0x8(%ebp),%eax
 84611fd:	89 50 4c             	mov    %edx,0x4c(%eax)
 8461200:	8b 85 48 f5 ff ff    	mov    -0xab8(%ebp),%eax
 8461206:	88 85 fd f3 ff ff    	mov    %al,-0xc03(%ebp)
 846120c:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 8461212:	89 04 24             	mov    %eax,(%esp)
 8461215:	e8 0e 9b ce ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 846121a:	8b 10                	mov    (%eax),%edx
 846121c:	89 95 0c f4 ff ff    	mov    %edx,-0xbf4(%ebp)
 8461222:	8b 50 04             	mov    0x4(%eax),%edx
 8461225:	89 95 10 f4 ff ff    	mov    %edx,-0xbf0(%ebp)
 846122b:	8b 50 08             	mov    0x8(%eax),%edx
 846122e:	89 95 14 f4 ff ff    	mov    %edx,-0xbec(%ebp)
 8461234:	8b 50 0c             	mov    0xc(%eax),%edx
 8461237:	89 95 18 f4 ff ff    	mov    %edx,-0xbe8(%ebp)
 846123d:	8b 50 10             	mov    0x10(%eax),%edx
 8461240:	89 95 1c f4 ff ff    	mov    %edx,-0xbe4(%ebp)
 8461246:	8b 50 14             	mov    0x14(%eax),%edx
 8461249:	89 95 20 f4 ff ff    	mov    %edx,-0xbe0(%ebp)
 846124f:	8b 50 18             	mov    0x18(%eax),%edx
 8461252:	89 95 24 f4 ff ff    	mov    %edx,-0xbdc(%ebp)
 8461258:	8b 50 1c             	mov    0x1c(%eax),%edx
 846125b:	89 95 28 f4 ff ff    	mov    %edx,-0xbd8(%ebp)
 8461261:	8b 50 20             	mov    0x20(%eax),%edx
 8461264:	89 95 2c f4 ff ff    	mov    %edx,-0xbd4(%ebp)
 846126a:	8b 50 24             	mov    0x24(%eax),%edx
 846126d:	89 95 30 f4 ff ff    	mov    %edx,-0xbd0(%ebp)
 8461273:	8b 50 28             	mov    0x28(%eax),%edx
 8461276:	89 95 34 f4 ff ff    	mov    %edx,-0xbcc(%ebp)
 846127c:	8b 50 2c             	mov    0x2c(%eax),%edx
 846127f:	89 95 38 f4 ff ff    	mov    %edx,-0xbc8(%ebp)
 8461285:	8b 50 30             	mov    0x30(%eax),%edx
 8461288:	89 95 3c f4 ff ff    	mov    %edx,-0xbc4(%ebp)
 846128e:	8b 50 34             	mov    0x34(%eax),%edx
 8461291:	89 95 40 f4 ff ff    	mov    %edx,-0xbc0(%ebp)
 8461297:	8b 50 38             	mov    0x38(%eax),%edx
 846129a:	89 95 44 f4 ff ff    	mov    %edx,-0xbbc(%ebp)
 84612a0:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 84612a4:	88 85 48 f4 ff ff    	mov    %al,-0xbb8(%ebp)
 84612aa:	8b 45 08             	mov    0x8(%ebp),%eax
 84612ad:	83 c0 0c             	add    $0xc,%eax
 84612b0:	89 85 a4 f0 ff ff    	mov    %eax,-0xf5c(%ebp)
 84612b6:	8d 54 24 04          	lea    0x4(%esp),%edx
 84612ba:	8d 9d fc f3 ff ff    	lea    -0xc04(%ebp),%ebx
 84612c0:	b8 15 00 00 00       	mov    $0x15,%eax
 84612c5:	89 d7                	mov    %edx,%edi
 84612c7:	89 de                	mov    %ebx,%esi
 84612c9:	89 c1                	mov    %eax,%ecx
 84612cb:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84612cd:	8b 85 a4 f0 ff ff    	mov    -0xf5c(%ebp),%eax
 84612d3:	89 04 24             	mov    %eax,(%esp)
 84612d6:	e8 05 05 cf ff       	call   81517e0 <_ZN7MapInfo8Add_ItemE8map_item>
 84612db:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 84612e1:	89 04 24             	mov    %eax,(%esp)
 84612e4:	e8 53 16 cf ff       	call   815293c <_ZN9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 84612e9:	8d 85 10 f5 ff ff    	lea    -0xaf0(%ebp),%eax
 84612ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84612f3:	8d 85 14 f5 ff ff    	lea    -0xaec(%ebp),%eax
 84612f9:	89 04 24             	mov    %eax,(%esp)
 84612fc:	e8 0f 16 cf ff       	call   8152910 <_ZN9__gnu_cxxneIP10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8461301:	84 c0                	test   %al,%al
 8461303:	0f 85 cd fe ff ff    	jne    84611d6 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xba2>
 8461309:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 846130f:	89 04 24             	mov    %eax,(%esp)
 8461312:	e8 3b 16 cf ff       	call   8152952 <_ZNSt14_List_iteratorI8_mapItemEppEv>
 8461317:	8d 85 e0 f4 ff ff    	lea    -0xb20(%ebp),%eax
 846131d:	89 04 24             	mov    %eax,(%esp)
 8461320:	e8 27 98 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 8461325:	eb 19                	jmp    8461340 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd0c>
 8461327:	89 d3                	mov    %edx,%ebx
 8461329:	89 c6                	mov    %eax,%esi
 846132b:	8d 85 e0 f4 ff ff    	lea    -0xb20(%ebp),%eax
 8461331:	89 04 24             	mov    %eax,(%esp)
 8461334:	e8 13 98 ce ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 8461339:	89 f0                	mov    %esi,%eax
 846133b:	89 da                	mov    %ebx,%edx
 846133d:	eb 6b                	jmp    84613aa <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd76>
 846133f:	90                   	nop
 8461340:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8461343:	8d 95 34 f5 ff ff    	lea    -0xacc(%ebp),%edx
 8461349:	89 54 24 04          	mov    %edx,0x4(%esp)
 846134d:	89 04 24             	mov    %eax,(%esp)
 8461350:	e8 23 15 cf ff       	call   8152878 <_ZNSt4listI8_mapItemSaIS0_EE3endEv>
 8461355:	83 ec 04             	sub    $0x4,%esp
 8461358:	8d 45 c0             	lea    -0x40(%ebp),%eax
 846135b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846135f:	8d 85 30 f5 ff ff    	lea    -0xad0(%ebp),%eax
 8461365:	89 04 24             	mov    %eax,(%esp)
 8461368:	e8 2f 15 cf ff       	call   815289c <_ZNKSt14_List_iteratorI8_mapItemEneERKS1_>
 846136d:	84 c0                	test   %al,%al
 846136f:	74 17                	je     8461388 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd54>
 8461371:	8b 45 14             	mov    0x14(%ebp),%eax
 8461374:	8b 00                	mov    (%eax),%eax
 8461376:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 846137c:	83 f8 01             	cmp    $0x1,%eax
 846137f:	74 07                	je     8461388 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd54>
 8461381:	b8 01 00 00 00       	mov    $0x1,%eax
 8461386:	eb 05                	jmp    846138d <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd59>
 8461388:	b8 00 00 00 00       	mov    $0x0,%eax
 846138d:	84 c0                	test   %al,%al
 846138f:	0f 85 c0 fc ff ff    	jne    8461055 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xa21>
 8461395:	bb 01 00 00 00       	mov    $0x1,%ebx
 846139a:	8d 85 34 f5 ff ff    	lea    -0xacc(%ebp),%eax
 84613a0:	89 04 24             	mov    %eax,(%esp)
 84613a3:	e8 0a f5 ce ff       	call   81508b2 <_ZNSt4listI8_mapItemSaIS0_EED1Ev>
 84613a8:	eb 30                	jmp    84613da <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xda6>
 84613aa:	89 d3                	mov    %edx,%ebx
 84613ac:	89 c6                	mov    %eax,%esi
 84613ae:	8d 85 34 f5 ff ff    	lea    -0xacc(%ebp),%eax
 84613b4:	89 04 24             	mov    %eax,(%esp)
 84613b7:	e8 f6 f4 ce ff       	call   81508b2 <_ZNSt4listI8_mapItemSaIS0_EED1Ev>
 84613bc:	89 f0                	mov    %esi,%eax
 84613be:	89 da                	mov    %ebx,%edx
 84613c0:	eb 00                	jmp    84613c2 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xd8e>
 84613c2:	89 d3                	mov    %edx,%ebx
 84613c4:	89 c6                	mov    %eax,%esi
 84613c6:	8d 85 50 f4 ff ff    	lea    -0xbb0(%ebp),%eax
 84613cc:	89 04 24             	mov    %eax,(%esp)
 84613cf:	e8 1c 97 ce ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 84613d4:	89 f0                	mov    %esi,%eax
 84613d6:	89 da                	mov    %ebx,%edx
 84613d8:	eb 10                	jmp    84613ea <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xdb6>
 84613da:	8d 85 50 f4 ff ff    	lea    -0xbb0(%ebp),%eax
 84613e0:	89 04 24             	mov    %eax,(%esp)
 84613e3:	e8 08 97 ce ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 84613e8:	eb 18                	jmp    8461402 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xdce>
 84613ea:	89 d3                	mov    %edx,%ebx
 84613ec:	89 c6                	mov    %eax,%esi
 84613ee:	8d 85 98 f4 ff ff    	lea    -0xb68(%ebp),%eax
 84613f4:	89 04 24             	mov    %eax,(%esp)
 84613f7:	e8 f4 96 ce ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 84613fc:	89 f0                	mov    %esi,%eax
 84613fe:	89 da                	mov    %ebx,%edx
 8461400:	eb 10                	jmp    8461412 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xdde>
 8461402:	8d 85 98 f4 ff ff    	lea    -0xb68(%ebp),%eax
 8461408:	89 04 24             	mov    %eax,(%esp)
 846140b:	e8 e0 96 ce ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 8461410:	eb 18                	jmp    846142a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xdf6>
 8461412:	89 d3                	mov    %edx,%ebx
 8461414:	89 c6                	mov    %eax,%esi
 8461416:	8d 85 50 f5 ff ff    	lea    -0xab0(%ebp),%eax
 846141c:	89 04 24             	mov    %eax,(%esp)
 846141f:	e8 5e 33 cd ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 8461424:	89 f0                	mov    %esi,%eax
 8461426:	89 da                	mov    %ebx,%edx
 8461428:	eb 10                	jmp    846143a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe06>
 846142a:	8d 85 50 f5 ff ff    	lea    -0xab0(%ebp),%eax
 8461430:	89 04 24             	mov    %eax,(%esp)
 8461433:	e8 4a 33 cd ff       	call   8134782 <_ZNSt4listI11_mapMonsterSaIS0_EED1Ev>
 8461438:	eb 18                	jmp    8461452 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe1e>
 846143a:	89 d3                	mov    %edx,%ebx
 846143c:	89 c6                	mov    %eax,%esi
 846143e:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 8461444:	89 04 24             	mov    %eax,(%esp)
 8461447:	e8 8e 29 c2 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 846144c:	89 f0                	mov    %esi,%eax
 846144e:	89 da                	mov    %ebx,%edx
 8461450:	eb 10                	jmp    8461462 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe2e>
 8461452:	8d 85 58 f5 ff ff    	lea    -0xaa8(%ebp),%eax
 8461458:	89 04 24             	mov    %eax,(%esp)
 846145b:	e8 7a 29 c2 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8461460:	eb 18                	jmp    846147a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe46>
 8461462:	89 d3                	mov    %edx,%ebx
 8461464:	89 c6                	mov    %eax,%esi
 8461466:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 846146c:	89 04 24             	mov    %eax,(%esp)
 846146f:	e8 3a 01 cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8461474:	89 f0                	mov    %esi,%eax
 8461476:	89 da                	mov    %ebx,%edx
 8461478:	eb 10                	jmp    846148a <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe56>
 846147a:	8d 85 b0 f0 ff ff    	lea    -0xf50(%ebp),%eax
 8461480:	89 04 24             	mov    %eax,(%esp)
 8461483:	e8 26 01 cf ff       	call   81515ae <_ZN11map_monsterD1Ev>
 8461488:	eb 18                	jmp    84614a2 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe6e>
 846148a:	89 d3                	mov    %edx,%ebx
 846148c:	89 c6                	mov    %eax,%esi
 846148e:	8d 85 68 f5 ff ff    	lea    -0xa98(%ebp),%eax
 8461494:	89 04 24             	mov    %eax,(%esp)
 8461497:	e8 2a 56 c6 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 846149c:	89 f0                	mov    %esi,%eax
 846149e:	89 da                	mov    %ebx,%edx
 84614a0:	eb 10                	jmp    84614b2 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe7e>
 84614a2:	8d 85 68 f5 ff ff    	lea    -0xa98(%ebp),%eax
 84614a8:	89 04 24             	mov    %eax,(%esp)
 84614ab:	e8 16 56 c6 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84614b0:	eb 1e                	jmp    84614d0 <_ZN8WongWork11CDeathTower6CStage10consistMapERKNS0_11CDungeonMgrEPK4CMapPS0_+0xe9c>
 84614b2:	89 d3                	mov    %edx,%ebx
 84614b4:	89 c6                	mov    %eax,%esi
 84614b6:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 84614bc:	89 04 24             	mov    %eax,(%esp)
 84614bf:	e8 ce 0f c8 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 84614c4:	89 f0                	mov    %esi,%eax
 84614c6:	89 da                	mov    %ebx,%edx
 84614c8:	89 04 24             	mov    %eax,(%esp)
 84614cb:	e8 80 22 68 00       	call   8ae3750 <_Unwind_Resume>
 84614d0:	8d 85 80 f5 ff ff    	lea    -0xa80(%ebp),%eax
 84614d6:	89 04 24             	mov    %eax,(%esp)
 84614d9:	e8 b4 0f c8 ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 84614de:	89 d8                	mov    %ebx,%eax
 84614e0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84614e3:	83 c4 00             	add    $0x0,%esp
 84614e6:	5b                   	pop    %ebx
 84614e7:	5e                   	pop    %esi
 84614e8:	5f                   	pop    %edi
 84614e9:	5d                   	pop    %ebp
 84614ea:	c3                   	ret
 84614eb:	90                   	nop

```

```c
// WongWork::CDeathTower::CStage::consistMap @ 0x8460634

/* WARNING: Type propagation algorithm not settling */
/* WongWork::CDeathTower::CStage::consistMap(WongWork::CDeathTower::CDungeonMgr const&, CMap const*,
   WongWork::CDeathTower*) */

undefined4 __thiscall
WongWork::CDeathTower::CStage::consistMap
          (CStage *this,CDungeonMgr *param_1,CMap *param_2,CDeathTower *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  map *pmVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  byte bVar14;
  int local_fd4 [2];
  int aiStack_fc0 [27];
  int local_f54;
  int local_f50;
  char local_f4c;
  uint local_f48;
  byte local_f44;
  undefined1 local_f43;
  undefined1 local_f42;
  undefined1 local_f41;
  undefined1 local_f40;
  uint local_f28;
  undefined4 local_c08;
  int local_c04;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined4 local_bdc;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined4 local_bd0;
  undefined4 local_bcc;
  undefined4 local_bc8;
  undefined4 local_bc4;
  undefined4 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4 [52];
  undefined4 local_b80;
  undefined1 local_b6c [52];
  int *local_b38;
  undefined1 local_b34;
  undefined1 local_b33;
  undefined1 local_b24 [48];
  undefined1 local_af4 [4];
  undefined1 local_af0 [4];
  undefined1 local_aec [4];
  undefined1 local_ae8 [4];
  undefined1 local_ae4 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_ae0 [4];
  __normal_iterator local_adc [4];
  __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
  local_ad8 [4];
  undefined1 local_ad4 [4];
  undefined1 local_ad0 [8];
  int local_ac8;
  int local_ac4;
  int local_ac0;
  int local_abc;
  undefined1 local_ab8 [4];
  undefined1 local_ab4 [8];
  undefined1 local_aac [12];
  int local_aa0;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a9c [24];
  vector<unsigned_int,std::allocator<unsigned_int>> local_a84 [12];
  uint local_a78;
  undefined4 local_a74;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_a70 [4];
  int local_a6c [2];
  map_monster local_a64 [844];
  undefined1 local_718 [4];
  undefined1 local_714 [4];
  undefined4 local_710;
  int local_70c;
  undefined4 local_708;
  undefined1 local_704 [4];
  undefined1 local_700 [4];
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined1 local_6f4 [4];
  int local_6f0 [2];
  undefined1 local_6e8 [844];
  undefined1 local_39c [4];
  undefined1 local_398 [4];
  undefined1 local_394 [4];
  undefined1 local_390 [844];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  CAICharacter *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  
  bVar14 = 0;
  piVar12 = (int *)&stack0xfffff034;
  uVar4 = CMap::get_index(param_2);
  *(undefined4 *)(this + 0x10) = uVar4;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_a84);
                    /* try { // try from 0846065f to 08460683 has its CatchHandler @ 084614b2 */
  iVar5 = G_CDataManager();
  pmVar6 = (map *)CAICharacterList::getAPCount(*(CAICharacterList **)(iVar5 + 0x869c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_a9c,pmVar6);
  local_40 = 0;
                    /* try { // try from 08460694 to 08460698 has its CatchHandler @ 0846148a */
  map_monster::map_monster((map_monster *)&local_f54);
  local_3c = CMap::getAICharacters(param_2);
                    /* try { // try from 084606ad to 084608ca has its CatchHandler @ 08461462 */
  cVar2 = std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::
          empty();
  if (cVar2 != '\x01') {
    local_40 = 0;
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::begin();
    std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::end();
    while (bVar3 = __gnu_cxx::operator!=(local_ad8,local_adc), bVar3) {
      local_34 = (uint *)__gnu_cxx::
                         __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
                         ::operator*(local_ad8);
      uVar10 = *local_34;
      iVar5 = G_CDataManager();
      local_30 = (CAICharacter *)
                 CAICharacterList::get(*(CAICharacterList **)(iVar5 + 0x869c),uVar10);
      if (local_30 == (CAICharacter *)0x0) {
        uVar4 = 0;
        goto LAB_0846147a;
      }
      local_a78 = CAICharacter::getIdx(local_30);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(local_a84,&local_a78);
      iVar5 = CAICharacter::getAppearancePoint(local_30);
      if (iVar5 != 0) {
        local_a74 = CAICharacter::getAppearancePoint(local_30);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)local_ae0);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_a70);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          (local_ae0,(_Rb_tree_iterator *)local_a70);
        if (cVar2 != '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_ae0);
          local_a6c[0] = *(int *)(iVar7 + 4) + -1;
          local_a6c[1] = 0;
          piVar8 = std::max<int>(local_a6c + 1,local_a6c);
          *(int *)(iVar5 + 4) = *piVar8;
        }
      }
      memset(&local_f54,0,0x34c);
      local_f54 = local_40;
      local_f48 = *local_34;
      local_f50 = *(int *)(this + 0x48);
      *(int *)(this + 0x48) = local_f50 + 1;
      local_f4c = '\x05';
      local_f44 = CAICharacter::getLevel(local_30);
      local_f28 = local_34[4];
      local_f43 = 0;
      local_f42 = 0;
      map_monster::map_monster(local_a64,(map_monster *)&local_f54);
                    /* try { // try from 084608de to 084608e2 has its CatchHandler @ 084608e5 */
      MapInfo::Add_Mob();
                    /* try { // try from 08460909 to 08460cb7 has its CatchHandler @ 08461462 */
      map_monster::~map_monster(local_a64);
      local_40 = local_40 + 1;
      __gnu_cxx::
      __normal_iterator<STAICharacterMapArrangeData_const*,std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>>
      ::operator++(local_ad8);
    }
  }
  local_aa0 = CMap::getAPCRandomPoint(param_2);
  piVar8 = (int *)&stack0xfffff034;
  if (local_aa0 != 0) {
    local_40 = 0x40;
    piVar12 = (int *)&stack0xfffff034;
    do {
      while( true ) {
        piVar12[-1] = 0x8460d07;
        iVar5 = G_CDataManager();
        *piVar12 = *(undefined4 *)(iVar5 + 0x869c);
        piVar12[-1] = 0x8460d15;
        iVar5 = CAICharacterList::getMinAP((CAICharacterList *)*piVar12);
        piVar8 = piVar12;
        if (local_aa0 < iVar5) goto LAB_08460d28;
        *piVar12 = local_aa0;
        piVar12[-1] = 0x8460979;
        iVar5 = get_rand_int(*piVar12);
        piVar12[-1] = 0x8460983;
        iVar7 = G_CDataManager();
        uVar4 = *(undefined4 *)(iVar7 + 0x869c);
        piVar12[1] = iVar5 + 1;
        *piVar12 = uVar4;
        piVar12[-1] = 0x8460995;
        local_2c = CAICharacterList::getByAP((CAICharacterList *)*piVar12,piVar12[1]);
        if (local_2c == 0) {
          uVar4 = 0;
          goto LAB_0846147a;
        }
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)local_718;
        piVar12[-1] = 0x84609c0;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        *piVar12 = local_2c;
        piVar12[-1] = 0x84609ce;
        local_710 = CAICharacter::getIdx((CAICharacter *)*piVar12);
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_70c;
        piVar12[-1] = 0x84609ec;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        piVar12[1] = (int)local_a84;
        *piVar12 = (int)&local_708;
        piVar12[-1] = 0x8460a07;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
        piVar12[3] = (int)&local_710;
        piVar12[2] = local_70c;
        piVar12[1] = local_708;
        *piVar12 = (int)local_714;
        piVar12[-1] = 0x8460a36;
        std::
        find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
                  ();
        piVar11 = piVar12 + -1;
        *piVar12 = (int)local_718;
        piVar12[-1] = (int)local_714;
        piVar12[-2] = 0x8460a51;
        bVar3 = __gnu_cxx::operator!=
                          ((__normal_iterator *)piVar12[-1],(__normal_iterator *)*piVar12);
        if (bVar3) break;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460b2a;
        local_6fc = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        *piVar12 = (int)&local_6fc;
        piVar12[-1] = (int)local_a84;
        piVar12[-2] = 0x8460b48;
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)piVar12[-1],(uint *)*piVar12
                  );
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460b53;
        local_6f8 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        piVar12[1] = (int)&local_6f8;
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x8460b7b;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                  ((int *)piVar12[-1]);
        *piVar12 = (int)local_a9c;
        piVar12[-1] = (int)local_6f4;
        piVar12[-2] = 0x8460b96;
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                  ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                   piVar12[-1]);
        *piVar12 = (int)local_6f4;
        piVar12[-1] = (int)local_ae4;
        piVar12[-2] = 0x8460bb1;
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_iterator *)*piVar12);
        if (cVar2 != '\0') {
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x8460bc3;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          piVar12[-1] = (int)local_ae4;
          piVar12[-2] = 0x8460bd3;
          iVar7 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)piVar12[-1]);
          local_6f0[0] = *(int *)(iVar7 + 4) + -1;
          local_6f0[1] = 0;
          *piVar12 = (int)local_6f0;
          piVar12[-1] = (int)(local_6f0 + 1);
          piVar12[-2] = 0x8460c01;
          piVar8 = std::max<int>((int *)piVar12[-1],(int *)*piVar12);
          *(int *)(iVar5 + 4) = *piVar8;
        }
        iVar5 = local_aa0;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460c17;
        iVar7 = CAICharacter::getAppearancePoint((CAICharacter *)piVar12[-1]);
        local_aa0 = iVar5 - iVar7;
        piVar12[1] = 0x34c;
        *piVar12 = 0;
        piVar12[-1] = (int)&local_f54;
        piVar12[-2] = 0x8460c41;
        memset((void *)piVar12[-1],*piVar12,piVar12[1]);
        local_f54 = local_40;
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460c55;
        local_f48 = CAICharacter::getIdx((CAICharacter *)piVar12[-1]);
        local_f50 = *(int *)(this + 0x48);
        *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
        local_f4c = '\x05';
        piVar12[-1] = local_2c;
        piVar12[-2] = 0x8460c82;
        local_f44 = CAICharacter::getLevel((CAICharacter *)piVar12[-1]);
        local_f28 = 100;
        local_f43 = 0;
        local_f42 = 0;
        *piVar12 = (int)&local_f54;
        piVar12[-1] = (int)local_6e8;
        piVar12[-2] = 0x8460cb8;
        map_monster::map_monster((map_monster *)piVar12[-1],(map_monster *)*piVar12);
        *piVar12 = (int)local_6e8;
        piVar12[-1] = (int)(this + 0xc);
                    /* try { // try from 08460ccb to 08460ccf has its CatchHandler @ 08460cd2 */
        piVar12[-2] = 0x8460cd0;
        MapInfo::Add_Mob();
        piVar12[-1] = (int)local_6e8;
                    /* try { // try from 08460cf6 to 08460d3c has its CatchHandler @ 08461462 */
        piVar12[-2] = 0x8460cfb;
        map_monster::~map_monster((map_monster *)piVar12[-1]);
        local_40 = local_40 + 1;
        piVar12 = piVar12 + -1;
      }
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_704;
      piVar12[-2] = 0x8460a71;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                );
      *piVar12 = (int)local_704;
      piVar12[-1] = (int)local_ae8;
      piVar12[-2] = 0x8460a8c;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      piVar12[1] = (int)&local_aa0;
      *piVar12 = (int)local_a9c;
      piVar12[-1] = (int)local_700;
      piVar12[-2] = 0x8460aae;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::upper_bound
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)piVar12[-1]
                 ,(int *)*piVar12);
      *piVar12 = (int)local_700;
      piVar12[-1] = (int)local_aec;
      piVar12[-2] = 0x8460ac9;
      std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                 (_Rb_tree_iterator *)*piVar12);
      local_28 = 0;
      while( true ) {
        *piVar12 = (int)local_aec;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x8460b0c;
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1],
                           (_Rb_tree_const_iterator *)*piVar12);
        if (cVar2 == '\0') break;
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x8460ae0;
        iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
        local_28 = local_28 + *(int *)(iVar5 + 4);
        piVar12[-1] = (int)local_ae8;
        piVar12[-2] = 0x8460af4;
        std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)piVar12[-1]);
      }
      piVar12 = piVar12 + -1;
      piVar8 = piVar11;
    } while (local_28 != 0);
  }
LAB_08460d28:
  piVar12 = piVar8;
  local_40 = 0;
  *piVar12 = (int)local_aac;
  piVar12[-1] = 0x8460d3d;
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)*piVar12);
  piVar12[1] = (int)param_2;
  *piVar12 = (int)local_ab4;
                    /* try { // try from 08460d4d to 08460d51 has its CatchHandler @ 0846143a */
  piVar12[-1] = 0x8460d52;
  CMap::get_monster_list();
  piVar12[1] = (int)local_ab4;
  *piVar12 = (int)local_39c;
                    /* try { // try from 08460d68 to 08460f2b has its CatchHandler @ 08461412 */
  piVar12[-1] = 0x8460d6d;
  std::list<_mapMonster,std::allocator<_mapMonster>>::begin();
  piVar12[1] = (int)local_39c;
  *piVar12 = (int)local_ab8;
  piVar12[-1] = 0x8460d88;
  std::_List_const_iterator<_mapMonster>::_List_const_iterator
            ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
  while( true ) {
    piVar12[1] = (int)local_ab4;
    *piVar12 = (int)local_394;
    piVar12[-1] = 0x8460f99;
    std::list<_mapMonster,std::allocator<_mapMonster>>::end();
    piVar12[1] = (int)local_394;
    *piVar12 = (int)local_398;
    piVar12[-1] = 0x8460fb4;
    std::_List_const_iterator<_mapMonster>::_List_const_iterator
              ((_List_const_iterator<_mapMonster> *)*piVar12,(_List_iterator *)piVar12[1]);
    piVar12[1] = (int)local_398;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x8460fcc;
    cVar2 = std::_List_const_iterator<_mapMonster>::operator!=
                      ((_List_const_iterator<_mapMonster> *)*piVar12,
                       (_List_const_iterator *)piVar12[1]);
    if (cVar2 == '\0') break;
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x8460d9b;
    local_24 = (uint *)std::_List_const_iterator<_mapMonster>::operator*
                                 ((_List_const_iterator<_mapMonster> *)*piVar12);
    piVar12[2] = 0x34c;
    piVar12[1] = 0;
    *piVar12 = (int)&local_f54;
    piVar12[-1] = 0x8460dbc;
    memset((void *)*piVar12,piVar12[1],piVar12[2]);
    local_f54 = local_40;
    if ((char)local_24[1] == '\0') {
      local_f44 = (byte)local_24[2];
    }
    else {
      *piVar12 = (int)param_1;
      piVar12[-1] = 0x8460ddb;
      cVar2 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
      local_f44 = cVar2 + (char)local_24[2];
      if ((local_f44 < 200) && (local_f44 == 0)) {
        local_f44 = 1;
      }
      else if (200 < local_f44) {
        local_f44 = 200;
      }
    }
    if (*local_24 == 0xffffffff) {
      uVar10 = (uint)local_f44;
      piVar12[-1] = 0x8460e49;
      iVar5 = G_CDataManager();
      uVar4 = *(undefined4 *)(iVar5 + 8);
      piVar12[1] = uVar10;
      *piVar12 = uVar4;
      piVar12[-1] = 0x8460e58;
      local_f48 = CMonsterManager::get_levelrandom_mob(*piVar12);
    }
    else {
      local_f48 = *local_24;
    }
    local_f43 = (char)local_24[4];
    local_f42 = (char)local_24[5];
    uVar10 = local_24[6];
    local_f4c = (char)uVar10;
    local_f50 = *(int *)(this + 0x48);
    *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
    if ((char)uVar10 == '\0') {
      *piVar12 = (int)&local_f54;
      piVar12[-1] = 0x8460ebd;
      cVar2 = map_monster::isNamedMonster((map_monster *)*piVar12);
      if (cVar2 == '\x01') goto LAB_08460ecb;
      bVar3 = true;
    }
    else {
LAB_08460ecb:
      bVar3 = false;
    }
    if (bVar3) {
      piVar12[1] = (int)&local_f50;
      *piVar12 = (int)local_aac;
      piVar12[-1] = 0x8460eef;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)*piVar12,(int *)piVar12[1]);
    }
    local_f41 = (char)local_24[7];
    local_f40 = (char)local_24[8];
    local_f28 = local_24[10];
    piVar12[1] = (int)&local_f54;
    *piVar12 = (int)local_390;
    piVar12[-1] = 0x8460f2c;
    map_monster::map_monster((map_monster *)*piVar12,(map_monster *)piVar12[1]);
    piVar12[1] = (int)local_390;
    *piVar12 = (int)(this + 0xc);
                    /* try { // try from 08460f3f to 08460f43 has its CatchHandler @ 08460f46 */
    piVar12[-1] = 0x8460f44;
    MapInfo::Add_Mob();
    *piVar12 = (int)local_390;
                    /* try { // try from 08460f6a to 08460ffd has its CatchHandler @ 08461412 */
    piVar12[-1] = 0x8460f6f;
    map_monster::~map_monster((map_monster *)*piVar12);
    *piVar12 = (int)local_ab8;
    piVar12[-1] = 0x8460f7d;
    std::_List_const_iterator<_mapMonster>::operator++
              ((_List_const_iterator<_mapMonster> *)*piVar12);
    local_40 = local_40 + 1;
  }
  *piVar12 = (int)&local_ac8;
  piVar12[-1] = 0x8460fe2;
  _mapItem::_mapItem((_mapItem *)*piVar12);
  *piVar12 = (int)param_1;
  piVar12[-1] = 0x8460fed;
  local_38 = CDungeonMgr::getSpecialPassiveObjectItems((CDungeonMgr *)*piVar12);
  *piVar12 = (int)local_b6c;
  piVar12[-1] = 0x8460ffe;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = (int)local_bb4;
                    /* try { // try from 08461007 to 0846100b has its CatchHandler @ 084613ea */
  piVar12[-1] = 0x846100c;
  stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
  *piVar12 = (int)param_1;
  piVar12[-1] = 0x8461017;
  local_b80 = CDungeonMgr::getObjectDropItems((CDungeonMgr *)*piVar12);
  piVar12[1] = (int)param_2;
  *piVar12 = (int)local_ad0;
                    /* try { // try from 0846102d to 08461031 has its CatchHandler @ 084613c2 */
  piVar12[-1] = 0x8461032;
  CMap::get_item_list();
  piVar12[1] = (int)local_ad0;
  *piVar12 = (int)local_ad4;
                    /* try { // try from 08461048 to 08461108 has its CatchHandler @ 084613aa */
  piVar12[-1] = 0x846104d;
  std::list<_mapItem,std::allocator<_mapItem>>::begin();
  do {
    piVar12[1] = (int)local_ad0;
    *piVar12 = (int)local_44;
                    /* try { // try from 08461350 to 08461354 has its CatchHandler @ 084613aa */
    piVar12[-1] = 0x8461355;
    std::list<_mapItem,std::allocator<_mapItem>>::end();
    piVar12[1] = (int)local_44;
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x846136d;
    cVar2 = std::_List_iterator<_mapItem>::operator!=
                      ((_List_iterator<_mapItem> *)*piVar12,(_List_iterator *)piVar12[1]);
    if ((cVar2 == '\0') || (*(int *)(*(int *)param_3 + 0xcd8) == 1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      uVar4 = 1;
      *piVar12 = (int)local_ad0;
                    /* try { // try from 084613a3 to 084613a7 has its CatchHandler @ 084613c2 */
      piVar12[-1] = 0x84613a8;
      std::list<_mapItem,std::allocator<_mapItem>>::~list
                ((list<_mapItem,std::allocator<_mapItem>> *)*piVar12);
      *piVar12 = (int)local_bb4;
                    /* try { // try from 084613e3 to 084613e7 has its CatchHandler @ 084613ea */
      piVar12[-1] = 0x84613e8;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_b6c;
                    /* try { // try from 0846140b to 0846140f has its CatchHandler @ 08461412 */
      piVar12[-1] = 0x8461410;
      stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)*piVar12);
      *piVar12 = (int)local_ab4;
                    /* try { // try from 08461433 to 08461437 has its CatchHandler @ 0846143a */
      piVar12[-1] = 0x8461438;
      std::list<_mapMonster,std::allocator<_mapMonster>>::~list
                ((list<_mapMonster,std::allocator<_mapMonster>> *)*piVar12);
      *piVar12 = (int)local_aac;
                    /* try { // try from 0846145b to 0846145f has its CatchHandler @ 08461462 */
      piVar12[-1] = 0x8461460;
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)*piVar12);
LAB_0846147a:
      *piVar12 = (int)&local_f54;
                    /* try { // try from 08461483 to 08461487 has its CatchHandler @ 0846148a */
      piVar12[-1] = 0x8461488;
      map_monster::~map_monster((map_monster *)*piVar12);
      *piVar12 = (int)local_a9c;
                    /* try { // try from 084614ab to 084614af has its CatchHandler @ 084614b2 */
      piVar12[-1] = 0x84614b0;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)*piVar12);
      *piVar12 = (int)local_a84;
      piVar12[-1] = 0x84614de;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)*piVar12);
      return uVar4;
    }
    *piVar12 = (int)local_ad4;
    piVar12[-1] = 0x8461063;
    piVar8 = (int *)std::_List_iterator<_mapItem>::operator*((_List_iterator<_mapItem> *)*piVar12);
    local_ac8 = *piVar8;
    local_ac4 = piVar8[1];
    local_ac0 = piVar8[2];
    local_abc = piVar8[3];
    piVar12[1] = *piVar8;
    *piVar12 = local_38;
    piVar12[-1] = 0x846109b;
    local_20 = (int *)std::vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>::at
                                ((vector<stDungeonAssignItem_t,std::allocator<stDungeonAssignItem_t>>
                                  *)*piVar12,piVar12[1]);
    if (*local_20 != -1) {
      local_b34 = (char)*local_20;
      goto LAB_084610fb;
    }
    *piVar12 = (int)param_1;
    piVar12[-1] = 0x84610c0;
    iVar5 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
    if (iVar5 < 1) {
LAB_084610d6:
      bVar3 = true;
    }
    else {
      *piVar12 = (int)param_1;
      piVar12[-1] = 0x84610cf;
      iVar5 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
      if (200 < iVar5) goto LAB_084610d6;
      bVar3 = false;
    }
    if (!bVar3) {
      *piVar12 = (int)param_1;
      piVar12[-1] = 0x84610f5;
      local_b34 = CDungeonMgr::getStandardLevel((CDungeonMgr *)*piVar12);
LAB_084610fb:
      *piVar12 = (int)local_b24;
      piVar12[-1] = 0x8461109;
      stGenerateResult_t::stGenerateResult_t((stGenerateResult_t *)*piVar12);
      local_b33 = (undefined1)local_ac4;
      local_b38 = local_20 + 1;
                    /* try { // try from 08461121 to 08461300 has its CatchHandler @ 08461327 */
      piVar12[-1] = 0x8461126;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x846112e;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 1;
      *piVar12 = uVar4;
      piVar12[-1] = 0x846113e;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_b6c;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x846115e;
      (*pcVar1)();
      piVar12[-1] = 0x8461163;
      uVar4 = G_CDataManager();
      *piVar12 = uVar4;
      piVar12[-1] = 0x846116b;
      uVar4 = CDataManager::getItemGenerator((CDataManager *)*piVar12);
      piVar12[1] = 4;
      *piVar12 = uVar4;
      piVar12[-1] = 0x846117b;
      piVar8 = (int *)CItemGeneratorMgr::getGenerator();
      pcVar1 = *(code **)(*piVar8 + 0xc);
      piVar12[2] = (int)local_b24;
      piVar12[1] = (int)local_bb4;
      *piVar12 = (int)piVar8;
      piVar12[-1] = 0x846119b;
      (*pcVar1)();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af0;
      piVar12[-1] = 0x84611b3;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      piVar12[1] = (int)local_b24;
      *piVar12 = (int)local_af4;
      piVar12[-1] = 0x84611ce;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      while( true ) {
        piVar12[1] = (int)local_af4;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x8461301;
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar12,(__normal_iterator *)piVar12[1])
        ;
        if (!bVar3) break;
        *piVar12 = (int)&local_c08;
        piVar12[-1] = 0x84611e4;
        map_item::map_item((map_item *)*piVar12);
        local_c08._0_1_ = 1;
        local_c04 = *(int *)(this + 0x4c);
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
        local_c08._1_1_ = (char)local_abc;
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x846121a;
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                            *)*piVar12);
        local_bf8 = *puVar9;
        local_bf4 = puVar9[1];
        local_bf0 = puVar9[2];
        local_bec = puVar9[3];
        local_be8 = puVar9[4];
        local_be4 = puVar9[5];
        local_be0 = puVar9[6];
        local_bdc = puVar9[7];
        local_bd8 = puVar9[8];
        local_bd4 = puVar9[9];
        local_bd0 = puVar9[10];
        local_bcc = puVar9[0xb];
        local_bc8 = puVar9[0xc];
        local_bc4 = puVar9[0xd];
        local_bc0 = puVar9[0xe];
        local_bbc = *(undefined1 *)(puVar9 + 0xf);
        piVar8 = &local_c08;
        piVar13 = piVar12 + 1;
        for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar13 = *piVar8;
          piVar8 = piVar8 + (uint)bVar14 * -2 + 1;
          piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
        }
        *piVar12 = (int)(this + 0xc);
        piVar12[-1] = 0x84612db;
        MapInfo::Add_Item();
        *piVar12 = (int)local_af0;
        piVar12[-1] = 0x84612e9;
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++((__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                      *)*piVar12);
      }
      *piVar12 = (int)local_ad4;
      piVar12[-1] = 0x8461317;
      std::_List_iterator<_mapItem>::operator++((_List_iterator<_mapItem> *)*piVar12);
      *piVar12 = (int)local_b24;
                    /* try { // try from 08461320 to 08461324 has its CatchHandler @ 084613aa */
      piVar12[-1] = 0x8461325;
      stGenerateResult_t::~stGenerateResult_t((stGenerateResult_t *)*piVar12);
    }
  } while( true );
}

```

---

## dropItem

```asm
// === 084616a8 WongWork::CDeathTower::CStage::dropItem  [0x084616a8-0x8461707] ===
 84616a8:	55                   	push   %ebp
 84616a9:	89 e5                	mov    %esp,%ebp
 84616ab:	57                   	push   %edi
 84616ac:	56                   	push   %esi
 84616ad:	53                   	push   %ebx
 84616ae:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 84616b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84616b7:	8b 40 4c             	mov    0x4c(%eax),%eax
 84616ba:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84616bd:	8d 50 01             	lea    0x1(%eax),%edx
 84616c0:	8b 45 08             	mov    0x8(%ebp),%eax
 84616c3:	89 50 4c             	mov    %edx,0x4c(%eax)
 84616c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84616c9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84616cc:	89 50 04             	mov    %edx,0x4(%eax)
 84616cf:	8b 45 08             	mov    0x8(%ebp),%eax
 84616d2:	83 c0 0c             	add    $0xc,%eax
 84616d5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84616d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84616db:	8d 54 24 04          	lea    0x4(%esp),%edx
 84616df:	89 c3                	mov    %eax,%ebx
 84616e1:	b8 15 00 00 00       	mov    $0x15,%eax
 84616e6:	89 d7                	mov    %edx,%edi
 84616e8:	89 de                	mov    %ebx,%esi
 84616ea:	89 c1                	mov    %eax,%ecx
 84616ec:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84616ee:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84616f1:	89 04 24             	mov    %eax,(%esp)
 84616f4:	e8 e7 00 cf ff       	call   81517e0 <_ZN7MapInfo8Add_ItemE8map_item>
 84616f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84616fc:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 8461702:	5b                   	pop    %ebx
 8461703:	5e                   	pop    %esi
 8461704:	5f                   	pop    %edi
 8461705:	5d                   	pop    %ebp
 8461706:	c3                   	ret
 8461707:	90                   	nop

```

```c
// WongWork::CDeathTower::CStage::dropItem @ 0x84616a8

/* WongWork::CDeathTower::CStage::dropItem(map_item&) */

int __thiscall WongWork::CDeathTower::CStage::dropItem(CStage *this,map_item *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_98 [26];
  CStage *local_30;
  int local_20;
  
  local_20 = *(int *)(this + 0x4c);
  *(int *)(this + 0x4c) = local_20 + 1;
  *(int *)(param_1 + 4) = local_20;
  local_30 = this + 0xc;
  puVar2 = local_98;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    puVar2 = puVar2 + 1;
  }
  MapInfo::Add_Item(local_30);
  return local_20;
}

```

---

## killMonster

```asm
// === 08461708 WongWork::CDeathTower::CStage::killMonster  [0x08461708-0x84617d9] ===
 8461708:	55                   	push   %ebp
 8461709:	89 e5                	mov    %esp,%ebp
 846170b:	83 ec 38             	sub    $0x38,%esp
 846170e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8461715:	8b 45 08             	mov    0x8(%ebp),%eax
 8461718:	8d 48 18             	lea    0x18(%eax),%ecx
 846171b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846171e:	8d 55 0c             	lea    0xc(%ebp),%edx
 8461721:	89 54 24 08          	mov    %edx,0x8(%esp)
 8461725:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8461729:	89 04 24             	mov    %eax,(%esp)
 846172c:	e8 29 0d cf ff       	call   815245a <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8461731:	83 ec 04             	sub    $0x4,%esp
 8461734:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8461737:	89 44 24 04          	mov    %eax,0x4(%esp)
 846173b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 846173e:	89 04 24             	mov    %eax,(%esp)
 8461741:	e8 9a 12 cf ff       	call   81529e0 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 8461746:	8b 45 08             	mov    0x8(%ebp),%eax
 8461749:	8d 50 18             	lea    0x18(%eax),%edx
 846174c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 846174f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461753:	89 04 24             	mov    %eax,(%esp)
 8461756:	e8 2b 0d cf ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 846175b:	83 ec 04             	sub    $0x4,%esp
 846175e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8461761:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461765:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8461768:	89 04 24             	mov    %eax,(%esp)
 846176b:	e8 70 12 cf ff       	call   81529e0 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 8461770:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8461773:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461777:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 846177a:	89 04 24             	mov    %eax,(%esp)
 846177d:	e8 a4 86 00 00       	call   8469e26 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEeqERKS4_>
 8461782:	84 c0                	test   %al,%al
 8461784:	74 07                	je     846178d <_ZN8WongWork11CDeathTower6CStage11killMonsterEiR11map_monster+0x85>
 8461786:	b8 00 00 00 00       	mov    $0x0,%eax
 846178b:	eb 4a                	jmp    84617d7 <_ZN8WongWork11CDeathTower6CStage11killMonsterEiR11map_monster+0xcf>
 846178d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8461790:	89 04 24             	mov    %eax,(%esp)
 8461793:	e8 6c 12 cf ff       	call   8152a04 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEptEv>
 8461798:	83 c0 04             	add    $0x4,%eax
 846179b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846179f:	8b 45 10             	mov    0x10(%ebp),%eax
 84617a2:	89 04 24             	mov    %eax,(%esp)
 84617a5:	e8 90 05 cf ff       	call   8151d3a <_ZN11map_monsteraSERKS_>
 84617aa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84617ad:	89 04 24             	mov    %eax,(%esp)
 84617b0:	e8 4f 12 cf ff       	call   8152a04 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi11map_monsterEEptEv>
 84617b5:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 84617b9:	0f b6 c0             	movzbl %al,%eax
 84617bc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84617bf:	8b 45 08             	mov    0x8(%ebp),%eax
 84617c2:	8d 50 18             	lea    0x18(%eax),%edx
 84617c5:	8d 45 0c             	lea    0xc(%ebp),%eax
 84617c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84617cc:	89 14 24             	mov    %edx,(%esp)
 84617cf:	e8 3e 12 cf ff       	call   8152a12 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5eraseERS4_>
 84617d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84617d7:	c9                   	leave
 84617d8:	c3                   	ret
 84617d9:	90                   	nop

```

```c
// WongWork::CDeathTower::CStage::killMonster @ 0x8461708

/* WongWork::CDeathTower::CStage::killMonster(int, map_monster&) */

uint __thiscall
WongWork::CDeathTower::CStage::killMonster(CStage *this,int param_1,map_monster *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_18 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  uint local_10;
  
  local_10 = 0;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_1c);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_20,local_1c);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_14);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_18,(_Rb_tree_iterator *)local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator==
                    (local_20,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_20);
    map_monster::operator=(param_2,(map_monster *)(iVar2 + 4));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_20);
    local_10 = (uint)*(byte *)(iVar2 + 0x14);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::erase
              ((int *)(this + 0x18));
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

```

---

## makeStagePacket

```asm
// === 08461828 WongWork::CDeathTower::CStage::makeStagePacket  [0x08461828-0x8461b3d] ===
 8461828:	55                   	push   %ebp
 8461829:	89 e5                	mov    %esp,%ebp
 846182b:	57                   	push   %edi
 846182c:	56                   	push   %esi
 846182d:	53                   	push   %ebx
 846182e:	81 ec cc 03 00 00    	sub    $0x3cc,%esp
 8461834:	8b 45 08             	mov    0x8(%ebp),%eax
 8461837:	89 04 24             	mov    %eax,(%esp)
 846183a:	e8 c3 82 00 00       	call   8469b02 <_ZN8WongWork11CDeathTower6CStage15getCurrentStageEv>
 846183f:	89 c2                	mov    %eax,%edx
 8461841:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461844:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461848:	89 04 24             	mov    %eax,(%esp)
 846184b:	e8 54 86 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8461850:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8461857:	e8 2b 03 25 00       	call   86b1b87 <_Z12get_rand_inti>
 846185c:	8b 55 0c             	mov    0xc(%ebp),%edx
 846185f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461863:	89 14 24             	mov    %edx,(%esp)
 8461866:	e8 d1 a0 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846186b:	8b 45 08             	mov    0x8(%ebp),%eax
 846186e:	8b 50 10             	mov    0x10(%eax),%edx
 8461871:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461874:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461878:	89 04 24             	mov    %eax,(%esp)
 846187b:	e8 24 86 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8461880:	8b 45 08             	mov    0x8(%ebp),%eax
 8461883:	83 c0 18             	add    $0x18,%eax
 8461886:	89 04 24             	mov    %eax,(%esp)
 8461889:	e8 d8 10 cf ff       	call   8152966 <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 846188e:	89 c2                	mov    %eax,%edx
 8461890:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461893:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461897:	89 04 24             	mov    %eax,(%esp)
 846189a:	e8 81 a0 c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 846189f:	8b 45 08             	mov    0x8(%ebp),%eax
 84618a2:	8d 50 18             	lea    0x18(%eax),%edx
 84618a5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84618a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84618ac:	89 04 24             	mov    %eax,(%esp)
 84618af:	e8 54 0d cf ff       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 84618b4:	83 ec 04             	sub    $0x4,%esp
 84618b7:	e9 ff 00 00 00       	jmp    84619bb <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard+0x193>
 84618bc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84618bf:	89 04 24             	mov    %eax,(%esp)
 84618c2:	e8 85 0d cf ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 84618c7:	83 c0 04             	add    $0x4,%eax
 84618ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 84618ce:	8d 85 38 fc ff ff    	lea    -0x3c8(%ebp),%eax
 84618d4:	89 04 24             	mov    %eax,(%esp)
 84618d7:	e8 0e 02 cf ff       	call   8151aea <_ZN11map_monsterC1ERKS_>
 84618dc:	8b 95 38 fc ff ff    	mov    -0x3c8(%ebp),%edx
 84618e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84618e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84618e9:	89 04 24             	mov    %eax,(%esp)
 84618ec:	e8 4b a0 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84618f1:	8b 85 3c fc ff ff    	mov    -0x3c4(%ebp),%eax
 84618f7:	0f bf d0             	movswl %ax,%edx
 84618fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84618fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461901:	89 04 24             	mov    %eax,(%esp)
 8461904:	e8 9b 85 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8461909:	8b 95 44 fc ff ff    	mov    -0x3bc(%ebp),%edx
 846190f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461912:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461916:	89 04 24             	mov    %eax,(%esp)
 8461919:	e8 1e a0 c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 846191e:	0f b6 85 48 fc ff ff 	movzbl -0x3b8(%ebp),%eax
 8461925:	0f b6 d0             	movzbl %al,%edx
 8461928:	8b 45 0c             	mov    0xc(%ebp),%eax
 846192b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846192f:	89 04 24             	mov    %eax,(%esp)
 8461932:	e8 e9 9f c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8461937:	0f b6 85 40 fc ff ff 	movzbl -0x3c0(%ebp),%eax
 846193e:	0f be d0             	movsbl %al,%edx
 8461941:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461944:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461948:	89 04 24             	mov    %eax,(%esp)
 846194b:	e8 d0 9f c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8461950:	0f b6 85 4b fc ff ff 	movzbl -0x3b5(%ebp),%eax
 8461957:	0f b6 d0             	movzbl %al,%edx
 846195a:	8b 45 0c             	mov    0xc(%ebp),%eax
 846195d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461961:	89 04 24             	mov    %eax,(%esp)
 8461964:	e8 b7 9f c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8461969:	0f b6 85 4c fc ff ff 	movzbl -0x3b4(%ebp),%eax
 8461970:	0f b6 d0             	movzbl %al,%edx
 8461973:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461976:	89 54 24 04          	mov    %edx,0x4(%esp)
 846197a:	89 04 24             	mov    %eax,(%esp)
 846197d:	e8 9e 9f c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8461982:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8461985:	89 04 24             	mov    %eax,(%esp)
 8461988:	e8 a1 0c cf ff       	call   815262e <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEv>
 846198d:	eb 1e                	jmp    84619ad <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard+0x185>
 846198f:	89 d3                	mov    %edx,%ebx
 8461991:	89 c6                	mov    %eax,%esi
 8461993:	8d 85 38 fc ff ff    	lea    -0x3c8(%ebp),%eax
 8461999:	89 04 24             	mov    %eax,(%esp)
 846199c:	e8 0d fc ce ff       	call   81515ae <_ZN11map_monsterD1Ev>
 84619a1:	89 f0                	mov    %esi,%eax
 84619a3:	89 da                	mov    %ebx,%edx
 84619a5:	89 04 24             	mov    %eax,(%esp)
 84619a8:	e8 a3 1d 68 00       	call   8ae3750 <_Unwind_Resume>
 84619ad:	8d 85 38 fc ff ff    	lea    -0x3c8(%ebp),%eax
 84619b3:	89 04 24             	mov    %eax,(%esp)
 84619b6:	e8 f3 fb ce ff       	call   81515ae <_ZN11map_monsterD1Ev>
 84619bb:	8b 45 08             	mov    0x8(%ebp),%eax
 84619be:	8d 50 18             	lea    0x18(%eax),%edx
 84619c1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84619c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84619c8:	89 04 24             	mov    %eax,(%esp)
 84619cb:	e8 b6 0a cf ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 84619d0:	83 ec 04             	sub    $0x4,%esp
 84619d3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84619d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84619da:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84619dd:	89 04 24             	mov    %eax,(%esp)
 84619e0:	e8 c7 0a cf ff       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 84619e5:	84 c0                	test   %al,%al
 84619e7:	0f 85 cf fe ff ff    	jne    84618bc <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard+0x94>
 84619ed:	8b 45 08             	mov    0x8(%ebp),%eax
 84619f0:	83 c0 30             	add    $0x30,%eax
 84619f3:	89 04 24             	mov    %eax,(%esp)
 84619f6:	e8 7f 0f cf ff       	call   815297a <_ZNKSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 84619fb:	89 c2                	mov    %eax,%edx
 84619fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461a00:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461a04:	89 04 24             	mov    %eax,(%esp)
 8461a07:	e8 14 9f c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8461a0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8461a0f:	8d 50 30             	lea    0x30(%eax),%edx
 8461a12:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461a15:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461a19:	89 04 24             	mov    %eax,(%esp)
 8461a1c:	e8 6d 0f cf ff       	call   815298e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8461a21:	83 ec 04             	sub    $0x4,%esp
 8461a24:	e9 d8 00 00 00       	jmp    8461b01 <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard+0x2d9>
 8461a29:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461a2c:	89 04 24             	mov    %eax,(%esp)
 8461a2f:	e8 80 0f cf ff       	call   81529b4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEptEv>
 8461a34:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8461a37:	8d 58 04             	lea    0x4(%eax),%ebx
 8461a3a:	b8 15 00 00 00       	mov    $0x15,%eax
 8461a3f:	89 d7                	mov    %edx,%edi
 8461a41:	89 de                	mov    %ebx,%esi
 8461a43:	89 c1                	mov    %eax,%ecx
 8461a45:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8461a47:	0f b6 45 85          	movzbl -0x7b(%ebp),%eax
 8461a4b:	0f be d0             	movsbl %al,%edx
 8461a4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461a51:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461a55:	89 04 24             	mov    %eax,(%esp)
 8461a58:	e8 c3 9e c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8461a5d:	8b 55 88             	mov    -0x78(%ebp),%edx
 8461a60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461a63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461a67:	89 04 24             	mov    %eax,(%esp)
 8461a6a:	e8 35 84 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8461a6f:	8b 45 96             	mov    -0x6a(%ebp),%eax
 8461a72:	89 c2                	mov    %eax,%edx
 8461a74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461a77:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461a7b:	89 04 24             	mov    %eax,(%esp)
 8461a7e:	e8 b9 9e c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8461a83:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8461a86:	83 c0 10             	add    $0x10,%eax
 8461a89:	89 04 24             	mov    %eax,(%esp)
 8461a8c:	e8 a9 5d c9 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8461a91:	8b 55 0c             	mov    0xc(%ebp),%edx
 8461a94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461a98:	89 14 24             	mov    %edx,(%esp)
 8461a9b:	e8 9c 9e c6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8461aa0:	0f b7 45 9f          	movzwl -0x61(%ebp),%eax
 8461aa4:	0f b7 d0             	movzwl %ax,%edx
 8461aa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461aaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461aae:	89 04 24             	mov    %eax,(%esp)
 8461ab1:	e8 ee 83 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8461ab6:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8461ab9:	83 c0 21             	add    $0x21,%eax
 8461abc:	89 04 24             	mov    %eax,(%esp)
 8461abf:	e8 6e ec ce ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8461ac4:	0f b6 d0             	movzbl %al,%edx
 8461ac7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461aca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461ace:	89 04 24             	mov    %eax,(%esp)
 8461ad1:	e8 4a 9e c6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8461ad6:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8461ad9:	83 c0 21             	add    $0x21,%eax
 8461adc:	89 04 24             	mov    %eax,(%esp)
 8461adf:	e8 8e ec ce ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8461ae4:	0f b7 d0             	movzwl %ax,%edx
 8461ae7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461aea:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461aee:	89 04 24             	mov    %eax,(%esp)
 8461af1:	e8 ae 83 c7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8461af6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461af9:	89 04 24             	mov    %eax,(%esp)
 8461afc:	e8 c1 0e cf ff       	call   81529c2 <_ZNSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEppEv>
 8461b01:	8b 45 08             	mov    0x8(%ebp),%eax
 8461b04:	8d 50 30             	lea    0x30(%eax),%edx
 8461b07:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8461b0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8461b0e:	89 04 24             	mov    %eax,(%esp)
 8461b11:	e8 48 0a cf ff       	call   815255e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8461b16:	83 ec 04             	sub    $0x4,%esp
 8461b19:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8461b1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461b20:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461b23:	89 04 24             	mov    %eax,(%esp)
 8461b26:	e8 59 0a cf ff       	call   8152584 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEneERKS4_>
 8461b2b:	84 c0                	test   %al,%al
 8461b2d:	0f 85 f6 fe ff ff    	jne    8461a29 <_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard+0x201>
 8461b33:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8461b36:	83 c4 00             	add    $0x0,%esp
 8461b39:	5b                   	pop    %ebx
 8461b3a:	5e                   	pop    %esi
 8461b3b:	5f                   	pop    %edi
 8461b3c:	5d                   	pop    %ebp
 8461b3d:	c3                   	ret

```

```c
// WongWork::CDeathTower::CStage::makeStagePacket @ 0x8461828

/* WongWork::CDeathTower::CStage::makeStagePacket(PacketGuard&) */

void __thiscall WongWork::CDeathTower::CStage::makeStagePacket(CStage *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_3cc [2];
  char local_3c4;
  int local_3c0;
  byte local_3bc;
  byte local_3b9;
  byte local_3b8;
  undefined4 local_80;
  int local_7c;
  Inven_Item aIStack_70 [2];
  int local_6e;
  ushort local_65;
  stAmplifyOption_t asStack_5f [51];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_2c [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_28 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_24 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar7 = 0;
  iVar2 = getCurrentStage(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar2);
  iVar2 = get_rand_int(0);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x10));
  iVar2 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x18));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_28);
  while( true ) {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
    map_monster::map_monster((map_monster *)local_3cc,(map_monster *)(iVar2 + 4));
                    /* try { // try from 084618ec to 0846198c has its CatchHandler @ 0846198f */
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_3cc[0]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)(short)local_3cc[1]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_3c0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_3bc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)local_3c4);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_3b9);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_3b8);
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
    map_monster::~map_monster((map_monster *)local_3cc);
  }
  iVar2 = std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::size
                    ((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>
                      *)(this + 0x30));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::begin
            (local_2c);
  while( true ) {
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_2c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_2c);
    puVar5 = (undefined4 *)(iVar2 + 4);
    puVar6 = &local_80;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)local_80._1_1_);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_7c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_6e);
    iVar2 = Inven_Item::get_add_info(aIStack_70);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)local_65);
    uVar3 = stAmplifyOption_t::getAbilityType(asStack_5f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar3 & 0xff);
    uVar3 = stAmplifyOption_t::getAbilityValue(asStack_5f);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
    std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_2c);
  }
  return;
}

```

---

## moveNextStage

```asm
// === 084617da WongWork::CDeathTower::CStage::moveNextStage  [0x084617da-0x8461827] ===
 84617da:	55                   	push   %ebp
 84617db:	89 e5                	mov    %esp,%ebp
 84617dd:	83 ec 18             	sub    $0x18,%esp
 84617e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84617e3:	89 04 24             	mov    %eax,(%esp)
 84617e6:	e8 53 03 00 00       	call   8461b3e <_ZN8WongWork11CDeathTower6CStage15checkClearStageEv>
 84617eb:	83 f0 01             	xor    $0x1,%eax
 84617ee:	84 c0                	test   %al,%al
 84617f0:	75 0a                	jne    84617fc <_ZN8WongWork11CDeathTower6CStage13moveNextStageEj+0x22>
 84617f2:	8b 45 08             	mov    0x8(%ebp),%eax
 84617f5:	8b 00                	mov    (%eax),%eax
 84617f7:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84617fa:	72 07                	jb     8461803 <_ZN8WongWork11CDeathTower6CStage13moveNextStageEj+0x29>
 84617fc:	b8 01 00 00 00       	mov    $0x1,%eax
 8461801:	eb 05                	jmp    8461808 <_ZN8WongWork11CDeathTower6CStage13moveNextStageEj+0x2e>
 8461803:	b8 00 00 00 00       	mov    $0x0,%eax
 8461808:	84 c0                	test   %al,%al
 846180a:	74 07                	je     8461813 <_ZN8WongWork11CDeathTower6CStage13moveNextStageEj+0x39>
 846180c:	b8 00 00 00 00       	mov    $0x0,%eax
 8461811:	eb 12                	jmp    8461825 <_ZN8WongWork11CDeathTower6CStage13moveNextStageEj+0x4b>
 8461813:	8b 45 08             	mov    0x8(%ebp),%eax
 8461816:	8b 00                	mov    (%eax),%eax
 8461818:	8d 50 01             	lea    0x1(%eax),%edx
 846181b:	8b 45 08             	mov    0x8(%ebp),%eax
 846181e:	89 10                	mov    %edx,(%eax)
 8461820:	b8 01 00 00 00       	mov    $0x1,%eax
 8461825:	c9                   	leave
 8461826:	c3                   	ret
 8461827:	90                   	nop

```

```c
// WongWork::CDeathTower::CStage::moveNextStage @ 0x84617da

/* WongWork::CDeathTower::CStage::moveNextStage(unsigned int) */

bool __thiscall WongWork::CDeathTower::CStage::moveNextStage(CStage *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = checkClearStage();
  if ((cVar2 == '\x01') && (*(uint *)this < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    *(int *)this = *(int *)this + 1;
  }
  return !bVar1;
}

```

---

## onFinishStage

```asm
// === 08461c40 WongWork::CDeathTower::CStage::onFinishStage  [0x08461c40-0x8461c59] ===
 8461c40:	55                   	push   %ebp
 8461c41:	89 e5                	mov    %esp,%ebp
 8461c43:	83 ec 18             	sub    $0x18,%esp
 8461c46:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8461c4d:	e8 5a 3c ce ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8461c52:	8b 55 08             	mov    0x8(%ebp),%edx
 8461c55:	89 42 08             	mov    %eax,0x8(%edx)
 8461c58:	c9                   	leave
 8461c59:	c3                   	ret

```

```c
// WongWork::CDeathTower::CStage::onFinishStage @ 0x8461c40

/* WongWork::CDeathTower::CStage::onFinishStage() */

void __thiscall WongWork::CDeathTower::CStage::onFinishStage(CStage *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 8) = uVar1;
  return;
}

```

---

## onStartStage

```asm
// === 08461c26 WongWork::CDeathTower::CStage::onStartStage  [0x08461c26-0x8461c3f] ===
 8461c26:	55                   	push   %ebp
 8461c27:	89 e5                	mov    %esp,%ebp
 8461c29:	83 ec 18             	sub    $0x18,%esp
 8461c2c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8461c33:	e8 74 3c ce ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 8461c38:	8b 55 08             	mov    0x8(%ebp),%edx
 8461c3b:	89 42 04             	mov    %eax,0x4(%edx)
 8461c3e:	c9                   	leave
 8461c3f:	c3                   	ret

```

```c
// WongWork::CDeathTower::CStage::onStartStage @ 0x8461c26

/* WongWork::CDeathTower::CStage::onStartStage() */

void __thiscall WongWork::CDeathTower::CStage::onStartStage(CStage *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

```

---

## peekItem

```asm
// === 08461534 WongWork::CDeathTower::CStage::peekItem  [0x08461534-0x84615e3] ===
 8461534:	55                   	push   %ebp
 8461535:	89 e5                	mov    %esp,%ebp
 8461537:	57                   	push   %edi
 8461538:	56                   	push   %esi
 8461539:	53                   	push   %ebx
 846153a:	83 ec 2c             	sub    $0x2c,%esp
 846153d:	8b 45 08             	mov    0x8(%ebp),%eax
 8461540:	8d 48 30             	lea    0x30(%eax),%ecx
 8461543:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8461546:	8d 55 0c             	lea    0xc(%ebp),%edx
 8461549:	89 54 24 08          	mov    %edx,0x8(%esp)
 846154d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8461551:	89 04 24             	mov    %eax,(%esp)
 8461554:	e8 d9 0f cf ff       	call   8152532 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8461559:	83 ec 04             	sub    $0x4,%esp
 846155c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846155f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461563:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461566:	89 04 24             	mov    %eax,(%esp)
 8461569:	e8 34 1a cf ff       	call   8152fa2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 846156e:	8b 45 08             	mov    0x8(%ebp),%eax
 8461571:	8d 50 30             	lea    0x30(%eax),%edx
 8461574:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8461577:	89 54 24 04          	mov    %edx,0x4(%esp)
 846157b:	89 04 24             	mov    %eax,(%esp)
 846157e:	e8 db 0f cf ff       	call   815255e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8461583:	83 ec 04             	sub    $0x4,%esp
 8461586:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8461589:	89 44 24 04          	mov    %eax,0x4(%esp)
 846158d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8461590:	89 04 24             	mov    %eax,(%esp)
 8461593:	e8 0a 1a cf ff       	call   8152fa2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 8461598:	8d 45 e0             	lea    -0x20(%ebp),%eax
 846159b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846159f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84615a2:	89 04 24             	mov    %eax,(%esp)
 84615a5:	e8 68 88 00 00       	call   8469e12 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEeqERKS4_>
 84615aa:	84 c0                	test   %al,%al
 84615ac:	74 07                	je     84615b5 <_ZN8WongWork11CDeathTower6CStage8peekItemEiR8map_item+0x81>
 84615ae:	b8 00 00 00 00       	mov    $0x0,%eax
 84615b3:	eb 23                	jmp    84615d8 <_ZN8WongWork11CDeathTower6CStage8peekItemEiR8map_item+0xa4>
 84615b5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84615b8:	89 04 24             	mov    %eax,(%esp)
 84615bb:	e8 06 1a cf ff       	call   8152fc6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEptEv>
 84615c0:	8b 55 10             	mov    0x10(%ebp),%edx
 84615c3:	8d 58 04             	lea    0x4(%eax),%ebx
 84615c6:	b8 15 00 00 00       	mov    $0x15,%eax
 84615cb:	89 d7                	mov    %edx,%edi
 84615cd:	89 de                	mov    %ebx,%esi
 84615cf:	89 c1                	mov    %eax,%ecx
 84615d1:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84615d3:	b8 01 00 00 00       	mov    $0x1,%eax
 84615d8:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84615db:	83 c4 00             	add    $0x0,%esp
 84615de:	5b                   	pop    %ebx
 84615df:	5e                   	pop    %esi
 84615e0:	5f                   	pop    %edi
 84615e1:	5d                   	pop    %ebp
 84615e2:	c3                   	ret
 84615e3:	90                   	nop

```

```c
// WongWork::CDeathTower::CStage::peekItem @ 0x8461534

/* WongWork::CDeathTower::CStage::peekItem(int, map_item&) */

undefined4 __thiscall
WongWork::CDeathTower::CStage::peekItem(CStage *this,int param_1,map_item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_2c [4];
  _Rb_tree_iterator local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_24 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar6 = 0;
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            ((int *)local_28);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_2c,local_28);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_20)
  ;
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_24,(_Rb_tree_iterator *)local_20);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator==
                    (local_2c,(_Rb_tree_const_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator->(local_2c);
    puVar5 = (undefined4 *)(iVar3 + 4);
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar5;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## pickupItem

```asm
// === 084615e4 WongWork::CDeathTower::CStage::pickupItem  [0x084615e4-0x84616a7] ===
 84615e4:	55                   	push   %ebp
 84615e5:	89 e5                	mov    %esp,%ebp
 84615e7:	57                   	push   %edi
 84615e8:	56                   	push   %esi
 84615e9:	53                   	push   %ebx
 84615ea:	83 ec 2c             	sub    $0x2c,%esp
 84615ed:	8b 45 08             	mov    0x8(%ebp),%eax
 84615f0:	8d 48 30             	lea    0x30(%eax),%ecx
 84615f3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84615f6:	8d 55 0c             	lea    0xc(%ebp),%edx
 84615f9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84615fd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8461601:	89 04 24             	mov    %eax,(%esp)
 8461604:	e8 29 0f cf ff       	call   8152532 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8461609:	83 ec 04             	sub    $0x4,%esp
 846160c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 846160f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461613:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461616:	89 04 24             	mov    %eax,(%esp)
 8461619:	e8 84 19 cf ff       	call   8152fa2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 846161e:	8b 45 08             	mov    0x8(%ebp),%eax
 8461621:	8d 50 30             	lea    0x30(%eax),%edx
 8461624:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8461627:	89 54 24 04          	mov    %edx,0x4(%esp)
 846162b:	89 04 24             	mov    %eax,(%esp)
 846162e:	e8 2b 0f cf ff       	call   815255e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8461633:	83 ec 04             	sub    $0x4,%esp
 8461636:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8461639:	89 44 24 04          	mov    %eax,0x4(%esp)
 846163d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8461640:	89 04 24             	mov    %eax,(%esp)
 8461643:	e8 5a 19 cf ff       	call   8152fa2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 8461648:	8d 45 e0             	lea    -0x20(%ebp),%eax
 846164b:	89 44 24 04          	mov    %eax,0x4(%esp)
 846164f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461652:	89 04 24             	mov    %eax,(%esp)
 8461655:	e8 b8 87 00 00       	call   8469e12 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEeqERKS4_>
 846165a:	84 c0                	test   %al,%al
 846165c:	74 07                	je     8461665 <_ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item+0x81>
 846165e:	b8 00 00 00 00       	mov    $0x0,%eax
 8461663:	eb 38                	jmp    846169d <_ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item+0xb9>
 8461665:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8461668:	89 04 24             	mov    %eax,(%esp)
 846166b:	e8 56 19 cf ff       	call   8152fc6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi8map_itemEEptEv>
 8461670:	8b 55 10             	mov    0x10(%ebp),%edx
 8461673:	8d 58 04             	lea    0x4(%eax),%ebx
 8461676:	b8 15 00 00 00       	mov    $0x15,%eax
 846167b:	89 d7                	mov    %edx,%edi
 846167d:	89 de                	mov    %ebx,%esi
 846167f:	89 c1                	mov    %eax,%ecx
 8461681:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8461683:	8b 45 08             	mov    0x8(%ebp),%eax
 8461686:	8d 50 30             	lea    0x30(%eax),%edx
 8461689:	8d 45 0c             	lea    0xc(%ebp),%eax
 846168c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8461690:	89 14 24             	mov    %edx,(%esp)
 8461693:	e8 80 15 cf ff       	call   8152c18 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5eraseERS4_>
 8461698:	b8 01 00 00 00       	mov    $0x1,%eax
 846169d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84616a0:	83 c4 00             	add    $0x0,%esp
 84616a3:	5b                   	pop    %ebx
 84616a4:	5e                   	pop    %esi
 84616a5:	5f                   	pop    %edi
 84616a6:	5d                   	pop    %ebp
 84616a7:	c3                   	ret

```

```c
// WongWork::CDeathTower::CStage::pickupItem @ 0x84615e4

/* WongWork::CDeathTower::CStage::pickupItem(int, map_item&) */

undefined4 __thiscall
WongWork::CDeathTower::CStage::pickupItem(CStage *this,int param_1,map_item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_2c [4];
  _Rb_tree_iterator local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_24 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar6 = 0;
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            ((int *)local_28);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_2c,local_28);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_20)
  ;
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_24,(_Rb_tree_iterator *)local_20);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator==
                    (local_2c,(_Rb_tree_const_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator->(local_2c);
    puVar5 = (undefined4 *)(iVar3 + 4);
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar5;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
              ((int *)(this + 0x30));
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## reset

```asm
// === 084614ec WongWork::CDeathTower::CStage::reset  [0x084614ec-0x8461533] ===
 84614ec:	55                   	push   %ebp
 84614ed:	89 e5                	mov    %esp,%ebp
 84614ef:	83 ec 18             	sub    $0x18,%esp
 84614f2:	8b 45 08             	mov    0x8(%ebp),%eax
 84614f5:	83 c0 0c             	add    $0xc,%eax
 84614f8:	89 04 24             	mov    %eax,(%esp)
 84614fb:	e8 ae ff ce ff       	call   81514ae <_ZN7MapInfo5ClearEv>
 8461500:	c7 04 24 60 ea 00 00 	movl   $0xea60,(%esp)
 8461507:	e8 7b 06 25 00       	call   86b1b87 <_Z12get_rand_inti>
 846150c:	8b 55 08             	mov    0x8(%ebp),%edx
 846150f:	89 42 48             	mov    %eax,0x48(%edx)
 8461512:	c7 04 24 60 ea 00 00 	movl   $0xea60,(%esp)
 8461519:	e8 69 06 25 00       	call   86b1b87 <_Z12get_rand_inti>
 846151e:	8b 55 08             	mov    0x8(%ebp),%edx
 8461521:	89 42 4c             	mov    %eax,0x4c(%edx)
 8461524:	8b 45 08             	mov    0x8(%ebp),%eax
 8461527:	c7 80 f8 00 00 00 00 	movl   $0x0,0xf8(%eax)
 846152e:	00 00 00 
 8461531:	c9                   	leave
 8461532:	c3                   	ret
 8461533:	90                   	nop

```

```c
// WongWork::CDeathTower::CStage::reset @ 0x84614ec

/* WongWork::CDeathTower::CStage::reset() */

void __thiscall WongWork::CDeathTower::CStage::reset(CStage *this)

{
  undefined4 uVar1;
  
  MapInfo::Clear((MapInfo *)(this + 0xc));
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0x48) = uVar1;
  uVar1 = get_rand_int(60000);
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}

```

---

## setState

```asm
// === 08461c5a WongWork::CDeathTower::CStage::setState  [0x08461c5a-0x8461cb3] ===
 8461c5a:	55                   	push   %ebp
 8461c5b:	89 e5                	mov    %esp,%ebp
 8461c5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8461c60:	83 f8 01             	cmp    $0x1,%eax
 8461c63:	74 07                	je     8461c6c <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x12>
 8461c65:	83 f8 02             	cmp    $0x2,%eax
 8461c68:	74 16                	je     8461c80 <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x26>
 8461c6a:	eb 29                	jmp    8461c95 <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x3b>
 8461c6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8461c6f:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
 8461c75:	85 c0                	test   %eax,%eax
 8461c77:	74 23                	je     8461c9c <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x42>
 8461c79:	b8 00 00 00 00       	mov    $0x0,%eax
 8461c7e:	eb 31                	jmp    8461cb1 <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x57>
 8461c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8461c83:	8b 80 f8 00 00 00    	mov    0xf8(%eax),%eax
 8461c89:	83 f8 01             	cmp    $0x1,%eax
 8461c8c:	74 11                	je     8461c9f <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x45>
 8461c8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8461c93:	eb 1c                	jmp    8461cb1 <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x57>
 8461c95:	b8 00 00 00 00       	mov    $0x0,%eax
 8461c9a:	eb 15                	jmp    8461cb1 <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x57>
 8461c9c:	90                   	nop
 8461c9d:	eb 01                	jmp    8461ca0 <_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE+0x46>
 8461c9f:	90                   	nop
 8461ca0:	8b 45 08             	mov    0x8(%ebp),%eax
 8461ca3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8461ca6:	89 90 f8 00 00 00    	mov    %edx,0xf8(%eax)
 8461cac:	b8 01 00 00 00       	mov    $0x1,%eax
 8461cb1:	5d                   	pop    %ebp
 8461cb2:	c3                   	ret
 8461cb3:	90                   	nop

```

```c
// WongWork::CDeathTower::CStage::setState @ 0x8461c5a

/* WongWork::CDeathTower::CStage::setState(WongWork::CDeathTower::ENUM_STAGE_STATE) */

undefined4 __thiscall WongWork::CDeathTower::CStage::setState(CStage *this,int param_2)

{
  if (param_2 == 1) {
    if (*(int *)(this + 0xf8) != 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    if (*(int *)(this + 0xf8) != 1) {
      return 0;
    }
  }
  *(int *)(this + 0xf8) = param_2;
  return 1;
}

```

