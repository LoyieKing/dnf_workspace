# CAICharacterList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## _add

```asm
// === 0834a61c CAICharacterList::_add  [0x0834a61c-0x834a9d1] ===
 834a61c:	55                   	push   %ebp
 834a61d:	89 e5                	mov    %esp,%ebp
 834a61f:	56                   	push   %esi
 834a620:	53                   	push   %ebx
 834a621:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 834a627:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a62a:	89 04 24             	mov    %eax,(%esp)
 834a62d:	e8 1e 62 e0 ff       	call   8150850 <_ZNK12CAICharacter6getIdxEv>
 834a632:	89 45 94             	mov    %eax,-0x6c(%ebp)
 834a635:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834a638:	8d 55 0c             	lea    0xc(%ebp),%edx
 834a63b:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a63f:	8d 55 94             	lea    -0x6c(%ebp),%edx
 834a642:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a646:	89 04 24             	mov    %eax,(%esp)
 834a649:	e8 bb e2 03 00       	call   8388909 <_ZSt9make_pairIjRP12CAICharacterESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 834a64e:	83 ec 04             	sub    $0x4,%esp
 834a651:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834a654:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a658:	8d 45 84             	lea    -0x7c(%ebp),%eax
 834a65b:	89 04 24             	mov    %eax,(%esp)
 834a65e:	e8 ed e2 03 00       	call   8388950 <_ZNSt4pairIKiP12CAICharacterEC1IjS2_EEOS_IT_T0_E>
 834a663:	8b 55 08             	mov    0x8(%ebp),%edx
 834a666:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 834a66c:	8d 4d 84             	lea    -0x7c(%ebp),%ecx
 834a66f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834a673:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a677:	89 04 24             	mov    %eax,(%esp)
 834a67a:	e8 03 e3 03 00       	call   8388982 <_ZNSt3mapIiP12CAICharacterSt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 834a67f:	83 ec 04             	sub    $0x4,%esp
 834a682:	0f b6 45 80          	movzbl -0x80(%ebp),%eax
 834a686:	83 f0 01             	xor    $0x1,%eax
 834a689:	84 c0                	test   %al,%al
 834a68b:	74 0a                	je     834a697 <_ZN16CAICharacterList4_addEP12CAICharacter+0x7b>
 834a68d:	b8 00 00 00 00       	mov    $0x0,%eax
 834a692:	e9 30 03 00 00       	jmp    834a9c7 <_ZN16CAICharacterList4_addEP12CAICharacter+0x3ab>
 834a697:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a69a:	89 04 24             	mov    %eax,(%esp)
 834a69d:	e8 b8 61 e0 ff       	call   815085a <_ZNK12CAICharacter8getLevelEv>
 834a6a2:	83 e8 05             	sub    $0x5,%eax
 834a6a5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834a6a8:	eb 64                	jmp    834a70e <_ZN16CAICharacterList4_addEP12CAICharacter+0xf2>
 834a6aa:	83 7d f4 62          	cmpl   $0x62,-0xc(%ebp)
 834a6ae:	76 36                	jbe    834a6e6 <_ZN16CAICharacterList4_addEP12CAICharacter+0xca>
 834a6b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 834a6b7:	00 
 834a6b8:	c7 44 24 08 37 05 00 	movl   $0x537,0x8(%esp)
 834a6bf:	00 
 834a6c0:	c7 44 24 04 c0 49 c3 	movl   $0x8c349c0,0x4(%esp)
 834a6c7:	08 
 834a6c8:	8d 45 98             	lea    -0x68(%ebp),%eax
 834a6cb:	89 04 24             	mov    %eax,(%esp)
 834a6ce:	e8 45 50 20 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 834a6d3:	c7 44 24 04 b4 f8 c2 	movl   $0x8c2f8b4,0x4(%esp)
 834a6da:	08 
 834a6db:	8d 45 98             	lea    -0x68(%ebp),%eax
 834a6de:	89 04 24             	mov    %eax,(%esp)
 834a6e1:	e8 a2 50 20 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 834a6e6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834a6e9:	89 d0                	mov    %edx,%eax
 834a6eb:	01 c0                	add    %eax,%eax
 834a6ed:	01 d0                	add    %edx,%eax
 834a6ef:	c1 e0 02             	shl    $0x2,%eax
 834a6f2:	83 c0 10             	add    $0x10,%eax
 834a6f5:	03 45 08             	add    0x8(%ebp),%eax
 834a6f8:	8d 50 08             	lea    0x8(%eax),%edx
 834a6fb:	8d 45 0c             	lea    0xc(%ebp),%eax
 834a6fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a702:	89 14 24             	mov    %edx,(%esp)
 834a705:	e8 a4 e2 03 00       	call   83889ae <_ZNSt6vectorIP12CAICharacterSaIS1_EE9push_backERKS1_>
 834a70a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834a70e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a711:	89 04 24             	mov    %eax,(%esp)
 834a714:	e8 41 61 e0 ff       	call   815085a <_ZNK12CAICharacter8getLevelEv>
 834a719:	83 c0 05             	add    $0x5,%eax
 834a71c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 834a71f:	0f 97 c0             	seta   %al
 834a722:	84 c0                	test   %al,%al
 834a724:	75 84                	jne    834a6aa <_ZN16CAICharacterList4_addEP12CAICharacter+0x8e>
 834a726:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a729:	89 04 24             	mov    %eax,(%esp)
 834a72c:	e8 35 61 e0 ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 834a731:	85 c0                	test   %eax,%eax
 834a733:	0f 95 c0             	setne  %al
 834a736:	84 c0                	test   %al,%al
 834a738:	0f 84 54 02 00 00    	je     834a992 <_ZN16CAICharacterList4_addEP12CAICharacter+0x376>
 834a73e:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a741:	89 04 24             	mov    %eax,(%esp)
 834a744:	e8 1d 61 e0 ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 834a749:	89 45 a8             	mov    %eax,-0x58(%ebp)
 834a74c:	8b 45 08             	mov    0x8(%ebp),%eax
 834a74f:	8d 88 c0 04 00 00    	lea    0x4c0(%eax),%ecx
 834a755:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834a75b:	8d 55 a8             	lea    -0x58(%ebp),%edx
 834a75e:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a762:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834a766:	89 04 24             	mov    %eax,(%esp)
 834a769:	e8 b4 e2 03 00       	call   8388a22 <_ZNSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 834a76e:	83 ec 04             	sub    $0x4,%esp
 834a771:	8b 45 08             	mov    0x8(%ebp),%eax
 834a774:	8d 90 c0 04 00 00    	lea    0x4c0(%eax),%edx
 834a77a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834a77d:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a781:	89 04 24             	mov    %eax,(%esp)
 834a784:	e8 c5 e2 03 00       	call   8388a4e <_ZNSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 834a789:	83 ec 04             	sub    $0x4,%esp
 834a78c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 834a78f:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a793:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834a799:	89 04 24             	mov    %eax,(%esp)
 834a79c:	e8 d3 e2 03 00       	call   8388a74 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEneERKS8_>
 834a7a1:	84 c0                	test   %al,%al
 834a7a3:	74 25                	je     834a7ca <_ZN16CAICharacterList4_addEP12CAICharacter+0x1ae>
 834a7a5:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 834a7ab:	89 04 24             	mov    %eax,(%esp)
 834a7ae:	e8 d5 e2 03 00       	call   8388a88 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEptEv>
 834a7b3:	8d 50 04             	lea    0x4(%eax),%edx
 834a7b6:	8d 45 0c             	lea    0xc(%ebp),%eax
 834a7b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a7bd:	89 14 24             	mov    %edx,(%esp)
 834a7c0:	e8 e9 e1 03 00       	call   83889ae <_ZNSt6vectorIP12CAICharacterSaIS1_EE9push_backERKS1_>
 834a7c5:	e9 f4 00 00 00       	jmp    834a8be <_ZN16CAICharacterList4_addEP12CAICharacter+0x2a2>
 834a7ca:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 834a7d0:	89 04 24             	mov    %eax,(%esp)
 834a7d3:	e8 c4 cc 03 00       	call   838749c <_ZNSt6vectorIP12CAICharacterSaIS1_EEC1Ev>
 834a7d8:	8d 45 0c             	lea    0xc(%ebp),%eax
 834a7db:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a7df:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 834a7e5:	89 04 24             	mov    %eax,(%esp)
 834a7e8:	e8 c1 e1 03 00       	call   83889ae <_ZNSt6vectorIP12CAICharacterSaIS1_EE9push_backERKS1_>
 834a7ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a7f0:	89 04 24             	mov    %eax,(%esp)
 834a7f3:	e8 6e 60 e0 ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 834a7f8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 834a7fb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834a7fe:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 834a804:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a808:	8d 55 d8             	lea    -0x28(%ebp),%edx
 834a80b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a80f:	89 04 24             	mov    %eax,(%esp)
 834a812:	e8 7e e2 03 00       	call   8388a95 <_ZSt9make_pairIiRSt6vectorIP12CAICharacterSaIS2_EEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 834a817:	83 ec 04             	sub    $0x4,%esp
 834a81a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834a81d:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a821:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834a824:	89 04 24             	mov    %eax,(%esp)
 834a827:	e8 b6 e2 03 00       	call   8388ae2 <_ZNSt4pairIKiSt6vectorIP12CAICharacterSaIS3_EEEC1IiS5_EEOS_IT_T0_E>
 834a82c:	8b 45 08             	mov    0x8(%ebp),%eax
 834a82f:	8d 88 c0 04 00 00    	lea    0x4c0(%eax),%ecx
 834a835:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834a838:	8d 55 b8             	lea    -0x48(%ebp),%edx
 834a83b:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a83f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834a843:	89 04 24             	mov    %eax,(%esp)
 834a846:	e8 d1 e2 03 00       	call   8388b1c <_ZNSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE6insertERKS9_>
 834a84b:	83 ec 04             	sub    $0x4,%esp
 834a84e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834a851:	89 04 24             	mov    %eax,(%esp)
 834a854:	e8 2d c4 02 00       	call   8376c86 <_ZNSt4pairIKiSt6vectorIP12CAICharacterSaIS3_EEED1Ev>
 834a859:	eb 2a                	jmp    834a885 <_ZN16CAICharacterList4_addEP12CAICharacter+0x269>
 834a85b:	89 d3                	mov    %edx,%ebx
 834a85d:	89 c6                	mov    %eax,%esi
 834a85f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834a862:	89 04 24             	mov    %eax,(%esp)
 834a865:	e8 1c c4 02 00       	call   8376c86 <_ZNSt4pairIKiSt6vectorIP12CAICharacterSaIS3_EEED1Ev>
 834a86a:	89 f0                	mov    %esi,%eax
 834a86c:	89 da                	mov    %ebx,%edx
 834a86e:	eb 00                	jmp    834a870 <_ZN16CAICharacterList4_addEP12CAICharacter+0x254>
 834a870:	89 d3                	mov    %edx,%ebx
 834a872:	89 c6                	mov    %eax,%esi
 834a874:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834a877:	89 04 24             	mov    %eax,(%esp)
 834a87a:	e8 f1 c3 02 00       	call   8376c70 <_ZNSt4pairIiSt6vectorIP12CAICharacterSaIS2_EEED1Ev>
 834a87f:	89 f0                	mov    %esi,%eax
 834a881:	89 da                	mov    %ebx,%edx
 834a883:	eb 0d                	jmp    834a892 <_ZN16CAICharacterList4_addEP12CAICharacter+0x276>
 834a885:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834a888:	89 04 24             	mov    %eax,(%esp)
 834a88b:	e8 e0 c3 02 00       	call   8376c70 <_ZNSt4pairIiSt6vectorIP12CAICharacterSaIS2_EEED1Ev>
 834a890:	eb 1e                	jmp    834a8b0 <_ZN16CAICharacterList4_addEP12CAICharacter+0x294>
 834a892:	89 d3                	mov    %edx,%ebx
 834a894:	89 c6                	mov    %eax,%esi
 834a896:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 834a89c:	89 04 24             	mov    %eax,(%esp)
 834a89f:	e8 0c cc 03 00       	call   83874b0 <_ZNSt6vectorIP12CAICharacterSaIS1_EED1Ev>
 834a8a4:	89 f0                	mov    %esi,%eax
 834a8a6:	89 da                	mov    %ebx,%edx
 834a8a8:	89 04 24             	mov    %eax,(%esp)
 834a8ab:	e8 a0 8e 79 00       	call   8ae3750 <_Unwind_Resume>
 834a8b0:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 834a8b6:	89 04 24             	mov    %eax,(%esp)
 834a8b9:	e8 f2 cb 03 00       	call   83874b0 <_ZNSt6vectorIP12CAICharacterSaIS1_EED1Ev>
 834a8be:	8b 45 08             	mov    0x8(%ebp),%eax
 834a8c1:	8b 98 bc 04 00 00    	mov    0x4bc(%eax),%ebx
 834a8c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a8ca:	89 04 24             	mov    %eax,(%esp)
 834a8cd:	e8 94 5f e0 ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 834a8d2:	39 c3                	cmp    %eax,%ebx
 834a8d4:	73 0b                	jae    834a8e1 <_ZN16CAICharacterList4_addEP12CAICharacter+0x2c5>
 834a8d6:	8b 45 08             	mov    0x8(%ebp),%eax
 834a8d9:	8b 80 bc 04 00 00    	mov    0x4bc(%eax),%eax
 834a8df:	eb 0b                	jmp    834a8ec <_ZN16CAICharacterList4_addEP12CAICharacter+0x2d0>
 834a8e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a8e4:	89 04 24             	mov    %eax,(%esp)
 834a8e7:	e8 7a 5f e0 ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 834a8ec:	8b 55 08             	mov    0x8(%ebp),%edx
 834a8ef:	89 82 bc 04 00 00    	mov    %eax,0x4bc(%edx)
 834a8f5:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 834a8fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a8ff:	89 04 24             	mov    %eax,(%esp)
 834a902:	e8 5f 5f e0 ff       	call   8150866 <_ZNK12CAICharacter18getAppearancePointEv>
 834a907:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834a90a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834a90d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 834a910:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a914:	8d 55 f0             	lea    -0x10(%ebp),%edx
 834a917:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a91b:	89 04 24             	mov    %eax,(%esp)
 834a91e:	e8 1e e4 e6 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 834a923:	83 ec 04             	sub    $0x4,%esp
 834a926:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834a929:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a92d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834a930:	89 04 24             	mov    %eax,(%esp)
 834a933:	e8 e8 c3 d7 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 834a938:	8b 45 08             	mov    0x8(%ebp),%eax
 834a93b:	8d 88 20 05 00 00    	lea    0x520(%eax),%ecx
 834a941:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 834a947:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834a94a:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a94e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834a952:	89 04 24             	mov    %eax,(%esp)
 834a955:	e8 f6 c3 d7 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 834a95a:	83 ec 04             	sub    $0x4,%esp
 834a95d:	0f b6 85 74 ff ff ff 	movzbl -0x8c(%ebp),%eax
 834a964:	83 f0 01             	xor    $0x1,%eax
 834a967:	84 c0                	test   %al,%al
 834a969:	74 27                	je     834a992 <_ZN16CAICharacterList4_addEP12CAICharacter+0x376>
 834a96b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 834a971:	89 04 24             	mov    %eax,(%esp)
 834a974:	e8 c7 29 d8 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 834a979:	89 c3                	mov    %eax,%ebx
 834a97b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 834a981:	89 04 24             	mov    %eax,(%esp)
 834a984:	e8 b7 29 d8 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 834a989:	8b 40 04             	mov    0x4(%eax),%eax
 834a98c:	83 c0 01             	add    $0x1,%eax
 834a98f:	89 43 04             	mov    %eax,0x4(%ebx)
 834a992:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a995:	89 04 24             	mov    %eax,(%esp)
 834a998:	e8 f1 90 02 00       	call   8373a8e <_ZNK12CAICharacter9getRarityEv>
 834a99d:	89 c2                	mov    %eax,%edx
 834a99f:	89 d0                	mov    %edx,%eax
 834a9a1:	01 c0                	add    %eax,%eax
 834a9a3:	01 d0                	add    %edx,%eax
 834a9a5:	c1 e0 02             	shl    $0x2,%eax
 834a9a8:	05 d0 04 00 00       	add    $0x4d0,%eax
 834a9ad:	03 45 08             	add    0x8(%ebp),%eax
 834a9b0:	8d 50 08             	lea    0x8(%eax),%edx
 834a9b3:	8d 45 0c             	lea    0xc(%ebp),%eax
 834a9b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a9ba:	89 14 24             	mov    %edx,(%esp)
 834a9bd:	e8 ec df 03 00       	call   83889ae <_ZNSt6vectorIP12CAICharacterSaIS1_EE9push_backERKS1_>
 834a9c2:	b8 01 00 00 00       	mov    $0x1,%eax
 834a9c7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 834a9ca:	83 c4 00             	add    $0x0,%esp
 834a9cd:	5b                   	pop    %ebx
 834a9ce:	5e                   	pop    %esi
 834a9cf:	5d                   	pop    %ebp
 834a9d0:	c3                   	ret
 834a9d1:	90                   	nop

```

```c
// CAICharacterList::_add @ 0x834a61c

/* CAICharacterList::_add(CAICharacter*) */

undefined4 __thiscall CAICharacterList::_add(CAICharacterList *this,CAICharacter *param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  vector<CAICharacter*,std::allocator<CAICharacter*>> local_a0 [12];
  _Rb_tree_iterator<std::pair<int_const,int>> local_94 [4];
  char local_90;
  _Rb_tree_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  local_8c [4];
  pair local_88 [4];
  char local_84;
  pair<int_const,CAICharacter*> local_80 [8];
  uint local_78 [2];
  CAICharacter *local_70;
  cMyTrace local_6c [16];
  undefined4 local_5c;
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_58 [4];
  pair local_54 [8];
  pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>> local_4c [16];
  pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>> local_3c [16];
  undefined4 local_2c;
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  local_70 = (CAICharacter *)CAICharacter::getIdx(param_1);
  std::make_pair<unsigned_int,CAICharacter*&>(local_78,&local_70);
  std::pair<int_const,CAICharacter*>::pair<unsigned_int,CAICharacter*>(local_80,(pair *)local_78);
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::
  insert(local_88);
  if (local_84 == '\x01') {
    iVar4 = CAICharacter::getLevel(param_1);
    local_10 = iVar4 - 5;
    while( true ) {
      iVar4 = CAICharacter::getLevel(param_1);
      if (iVar4 + 5U <= local_10) break;
      if (0x62 < local_10) {
        cMyTrace::cMyTrace(local_6c,"bool CAICharacterList::_add(CAICharacter*)",0x537,0);
        cMyTrace::operator()(local_6c,"aiCharacter Script file load failed");
      }
      std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back
                ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)
                 (this + local_10 * 0xc + 0x18),&param_1);
      local_10 = local_10 + 1;
    }
    iVar4 = CAICharacter::getAppearancePoint(param_1);
    if (iVar4 != 0) {
      local_5c = CAICharacter::getAppearancePoint(param_1);
      std::
      map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
      ::find((int *)local_8c);
      std::
      map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
      ::end(local_58);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
              ::operator!=(local_8c,(_Rb_tree_iterator *)local_58);
      if (cVar2 == '\0') {
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::vector(local_a0);
                    /* try { // try from 0834a7e8 to 0834a816 has its CatchHandler @ 0834a892 */
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back(local_a0,&param_1);
        local_2c = CAICharacter::getAppearancePoint(param_1);
        std::make_pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>&>
                  ((int *)local_3c,(vector *)&local_2c);
                    /* try { // try from 0834a827 to 0834a82b has its CatchHandler @ 0834a870 */
        std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>::
        pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>(local_4c,local_3c);
                    /* try { // try from 0834a846 to 0834a84a has its CatchHandler @ 0834a85b */
        std::
        map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
        ::insert(local_54);
                    /* try { // try from 0834a854 to 0834a858 has its CatchHandler @ 0834a870 */
        std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>::~pair
                  (local_4c);
                    /* try { // try from 0834a88b to 0834a88f has its CatchHandler @ 0834a892 */
        std::pair<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>::~pair(local_3c);
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::~vector(local_a0);
      }
      else {
        iVar4 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                ::operator->(local_8c);
        std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back
                  ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4),&param_1);
      }
      uVar1 = *(uint *)(this + 0x4bc);
      uVar5 = CAICharacter::getAppearancePoint(param_1);
      if (uVar1 < uVar5) {
        uVar3 = *(undefined4 *)(this + 0x4bc);
      }
      else {
        uVar3 = CAICharacter::getAppearancePoint(param_1);
      }
      *(undefined4 *)(this + 0x4bc) = uVar3;
      local_18 = 1;
      local_14 = CAICharacter::getAppearancePoint(param_1);
      std::make_pair<int,int>(local_20,&local_14);
      std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_94);
      if (local_90 != '\x01') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_94);
        *(int *)(iVar4 + 4) = *(int *)(iVar6 + 4) + 1;
      }
    }
    iVar4 = CAICharacter::getRarity(param_1);
    std::vector<CAICharacter*,std::allocator<CAICharacter*>>::push_back
              ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(this + iVar4 * 0xc + 0x4d8),
               &param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## destroy

```asm
// === 0834a59a CAICharacterList::destroy  [0x0834a59a-0x834a61b] ===
 834a59a:	55                   	push   %ebp
 834a59b:	89 e5                	mov    %esp,%ebp
 834a59d:	53                   	push   %ebx
 834a59e:	83 ec 24             	sub    $0x24,%esp
 834a5a1:	8b 55 08             	mov    0x8(%ebp),%edx
 834a5a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834a5a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a5ab:	89 04 24             	mov    %eax,(%esp)
 834a5ae:	e8 cb e2 03 00       	call   838887e <_ZNSt3mapIiP12CAICharacterSt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 834a5b3:	83 ec 04             	sub    $0x4,%esp
 834a5b6:	8b 55 08             	mov    0x8(%ebp),%edx
 834a5b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834a5bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a5c0:	89 04 24             	mov    %eax,(%esp)
 834a5c3:	e8 dc e2 03 00       	call   83888a4 <_ZNSt3mapIiP12CAICharacterSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 834a5c8:	83 ec 04             	sub    $0x4,%esp
 834a5cb:	eb 33                	jmp    834a600 <_ZN16CAICharacterList7destroyEv+0x66>
 834a5cd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834a5d0:	89 04 24             	mov    %eax,(%esp)
 834a5d3:	e8 24 e3 03 00       	call   83888fc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP12CAICharacterEEdeEv>
 834a5d8:	8b 40 04             	mov    0x4(%eax),%eax
 834a5db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834a5de:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 834a5e1:	85 db                	test   %ebx,%ebx
 834a5e3:	74 10                	je     834a5f5 <_ZN16CAICharacterList7destroyEv+0x5b>
 834a5e5:	89 1c 24             	mov    %ebx,(%esp)
 834a5e8:	e8 45 95 02 00       	call   8373b32 <_ZN12CAICharacterD1Ev>
 834a5ed:	89 1c 24             	mov    %ebx,(%esp)
 834a5f0:	e8 fb 9e 3d 00       	call   87244f0 <_ZdlPv>
 834a5f5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834a5f8:	89 04 24             	mov    %eax,(%esp)
 834a5fb:	e8 de e2 03 00       	call   83888de <_ZNSt17_Rb_tree_iteratorISt4pairIKiP12CAICharacterEEppEv>
 834a600:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834a603:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a607:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834a60a:	89 04 24             	mov    %eax,(%esp)
 834a60d:	e8 b8 e2 03 00       	call   83888ca <_ZNKSt17_Rb_tree_iteratorISt4pairIKiP12CAICharacterEEneERKS5_>
 834a612:	84 c0                	test   %al,%al
 834a614:	75 b7                	jne    834a5cd <_ZN16CAICharacterList7destroyEv+0x33>
 834a616:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 834a619:	c9                   	leave
 834a61a:	c3                   	ret
 834a61b:	90                   	nop

```

```c
// CAICharacterList::destroy @ 0x834a59a

/* CAICharacterList::destroy() */

void CAICharacterList::destroy(void)

{
  CAICharacter *this;
  char cVar1;
  int iVar2;
  map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>
  local_18 [4];
  map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>
  local_14 [4];
  CAICharacter *local_10;
  
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::
  begin(local_14);
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::end
            (local_18);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CAICharacter*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CAICharacter*>> *)local_14,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CAICharacter*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,CAICharacter*>> *)local_14);
    this = *(CAICharacter **)(iVar2 + 4);
    local_10 = this;
    if (this != (CAICharacter *)0x0) {
      CAICharacter::~CAICharacter(this);
      operator_delete(this);
    }
    std::_Rb_tree_iterator<std::pair<int_const,CAICharacter*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CAICharacter*>> *)local_14);
  }
  return;
}

```

---

## get

```asm
// === 0834a9d2 CAICharacterList::get  [0x0834a9d2-0x834aa5f] ===
 834a9d2:	55                   	push   %ebp
 834a9d3:	89 e5                	mov    %esp,%ebp
 834a9d5:	83 ec 38             	sub    $0x38,%esp
 834a9d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a9db:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834a9de:	8b 55 08             	mov    0x8(%ebp),%edx
 834a9e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834a9e4:	8d 4d ec             	lea    -0x14(%ebp),%ecx
 834a9e7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834a9eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a9ef:	89 04 24             	mov    %eax,(%esp)
 834a9f2:	e8 51 e1 03 00       	call   8388b48 <_ZNSt3mapIiP12CAICharacterSt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 834a9f7:	83 ec 04             	sub    $0x4,%esp
 834a9fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834a9fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834aa01:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834aa04:	89 04 24             	mov    %eax,(%esp)
 834aa07:	e8 68 e1 03 00       	call   8388b74 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP12CAICharacterEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 834aa0c:	8b 55 08             	mov    0x8(%ebp),%edx
 834aa0f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834aa12:	89 54 24 04          	mov    %edx,0x4(%esp)
 834aa16:	89 04 24             	mov    %eax,(%esp)
 834aa19:	e8 86 de 03 00       	call   83888a4 <_ZNSt3mapIiP12CAICharacterSt4lessIiESaISt4pairIKiS1_EEE3endEv>
 834aa1e:	83 ec 04             	sub    $0x4,%esp
 834aa21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834aa24:	89 44 24 04          	mov    %eax,0x4(%esp)
 834aa28:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834aa2b:	89 04 24             	mov    %eax,(%esp)
 834aa2e:	e8 41 e1 03 00       	call   8388b74 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiP12CAICharacterEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 834aa33:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834aa36:	89 44 24 04          	mov    %eax,0x4(%esp)
 834aa3a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834aa3d:	89 04 24             	mov    %eax,(%esp)
 834aa40:	e8 3f e1 03 00       	call   8388b84 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP12CAICharacterEEneERKS5_>
 834aa45:	84 c0                	test   %al,%al
 834aa47:	74 10                	je     834aa59 <_ZN16CAICharacterList3getEj+0x87>
 834aa49:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834aa4c:	89 04 24             	mov    %eax,(%esp)
 834aa4f:	e8 44 e1 03 00       	call   8388b98 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiP12CAICharacterEEptEv>
 834aa54:	8b 40 04             	mov    0x4(%eax),%eax
 834aa57:	eb 05                	jmp    834aa5e <_ZN16CAICharacterList3getEj+0x8c>
 834aa59:	b8 00 00 00 00       	mov    $0x0,%eax
 834aa5e:	c9                   	leave
 834aa5f:	c3                   	ret

```

```c
// CAICharacterList::get @ 0x834a9d2

/* CAICharacterList::get(unsigned int) */

undefined4 __thiscall CAICharacterList::get(CAICharacterList *this,uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  uint local_18;
  _Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>> local_14 [4];
  map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>
  local_10 [12];
  
  local_18 = param_1;
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::
  find((int *)local_1c);
  std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::_Rb_tree_const_iterator
            (local_20,local_1c);
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::end
            (local_10);
  std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::_Rb_tree_const_iterator
            (local_14,(_Rb_tree_iterator *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::operator!=
                    (local_20,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::operator->(local_20);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getByAP

```asm
// === 0834aaf4 CAICharacterList::getByAP  [0x0834aaf4-0x834acc3] ===
 834aaf4:	55                   	push   %ebp
 834aaf5:	89 e5                	mov    %esp,%ebp
 834aaf7:	53                   	push   %ebx
 834aaf8:	83 ec 44             	sub    $0x44,%esp
 834aafb:	8b 45 08             	mov    0x8(%ebp),%eax
 834aafe:	05 c0 04 00 00       	add    $0x4c0,%eax
 834ab03:	89 04 24             	mov    %eax,(%esp)
 834ab06:	e8 27 e1 03 00       	call   8388c32 <_ZNKSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE5emptyEv>
 834ab0b:	84 c0                	test   %al,%al
 834ab0d:	74 0a                	je     834ab19 <_ZN16CAICharacterList7getByAPEj+0x25>
 834ab0f:	b8 00 00 00 00       	mov    $0x0,%eax
 834ab14:	e9 a5 01 00 00       	jmp    834acbe <_ZN16CAICharacterList7getByAPEj+0x1ca>
 834ab19:	8b 45 0c             	mov    0xc(%ebp),%eax
 834ab1c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834ab1f:	8b 45 08             	mov    0x8(%ebp),%eax
 834ab22:	8d 88 c0 04 00 00    	lea    0x4c0(%eax),%ecx
 834ab28:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834ab2b:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834ab2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 834ab32:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834ab36:	89 04 24             	mov    %eax,(%esp)
 834ab39:	e8 08 e1 03 00       	call   8388c46 <_ZNSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE11lower_boundERS8_>
 834ab3e:	83 ec 04             	sub    $0x4,%esp
 834ab41:	8d 45 d8             	lea    -0x28(%ebp),%eax
 834ab44:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ab48:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ab4b:	89 04 24             	mov    %eax,(%esp)
 834ab4e:	e8 1f e1 03 00       	call   8388c72 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEC1ERKSt17_Rb_tree_iteratorIS7_E>
 834ab53:	8b 45 08             	mov    0x8(%ebp),%eax
 834ab56:	8d 90 c0 04 00 00    	lea    0x4c0(%eax),%edx
 834ab5c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834ab5f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ab63:	89 04 24             	mov    %eax,(%esp)
 834ab66:	e8 e3 de 03 00       	call   8388a4e <_ZNSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 834ab6b:	83 ec 04             	sub    $0x4,%esp
 834ab6e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834ab71:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ab75:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834ab78:	89 04 24             	mov    %eax,(%esp)
 834ab7b:	e8 f2 e0 03 00       	call   8388c72 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEC1ERKSt17_Rb_tree_iteratorIS7_E>
 834ab80:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834ab83:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ab87:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ab8a:	89 04 24             	mov    %eax,(%esp)
 834ab8d:	e8 f0 e0 03 00       	call   8388c82 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEeqERKS8_>
 834ab92:	84 c0                	test   %al,%al
 834ab94:	74 3e                	je     834abd4 <_ZN16CAICharacterList7getByAPEj+0xe0>
 834ab96:	8b 45 08             	mov    0x8(%ebp),%eax
 834ab99:	8d 90 c0 04 00 00    	lea    0x4c0(%eax),%edx
 834ab9f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834aba2:	89 54 24 04          	mov    %edx,0x4(%esp)
 834aba6:	89 04 24             	mov    %eax,(%esp)
 834aba9:	e8 a0 de 03 00       	call   8388a4e <_ZNSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 834abae:	83 ec 04             	sub    $0x4,%esp
 834abb1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834abb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 834abb8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834abbb:	89 04 24             	mov    %eax,(%esp)
 834abbe:	e8 af e0 03 00       	call   8388c72 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEC1ERKSt17_Rb_tree_iteratorIS7_E>
 834abc3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 834abc6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834abc9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834abcc:	89 04 24             	mov    %eax,(%esp)
 834abcf:	e8 c2 e0 03 00       	call   8388c96 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEmmEv>
 834abd4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834abd7:	89 04 24             	mov    %eax,(%esp)
 834abda:	e8 d5 e0 03 00       	call   8388cb4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEptEv>
 834abdf:	8b 00                	mov    (%eax),%eax
 834abe1:	3b 45 0c             	cmp    0xc(%ebp),%eax
 834abe4:	76 4a                	jbe    834ac30 <_ZN16CAICharacterList7getByAPEj+0x13c>
 834abe6:	8b 45 08             	mov    0x8(%ebp),%eax
 834abe9:	8d 90 c0 04 00 00    	lea    0x4c0(%eax),%edx
 834abef:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834abf2:	89 54 24 04          	mov    %edx,0x4(%esp)
 834abf6:	89 04 24             	mov    %eax,(%esp)
 834abf9:	e8 c4 e0 03 00       	call   8388cc2 <_ZNSt3mapIiSt6vectorIP12CAICharacterSaIS2_EESt4lessIiESaISt4pairIKiS4_EEE5beginEv>
 834abfe:	83 ec 04             	sub    $0x4,%esp
 834ac01:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834ac04:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ac08:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834ac0b:	89 04 24             	mov    %eax,(%esp)
 834ac0e:	e8 5f e0 03 00       	call   8388c72 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEC1ERKSt17_Rb_tree_iteratorIS7_E>
 834ac13:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834ac16:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ac1a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ac1d:	89 04 24             	mov    %eax,(%esp)
 834ac20:	e8 c3 e0 03 00       	call   8388ce8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEneERKS8_>
 834ac25:	84 c0                	test   %al,%al
 834ac27:	74 07                	je     834ac30 <_ZN16CAICharacterList7getByAPEj+0x13c>
 834ac29:	b8 01 00 00 00       	mov    $0x1,%eax
 834ac2e:	eb 05                	jmp    834ac35 <_ZN16CAICharacterList7getByAPEj+0x141>
 834ac30:	b8 00 00 00 00       	mov    $0x0,%eax
 834ac35:	84 c0                	test   %al,%al
 834ac37:	74 0b                	je     834ac44 <_ZN16CAICharacterList7getByAPEj+0x150>
 834ac39:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ac3c:	89 04 24             	mov    %eax,(%esp)
 834ac3f:	e8 52 e0 03 00       	call   8388c96 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEmmEv>
 834ac44:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ac47:	89 04 24             	mov    %eax,(%esp)
 834ac4a:	e8 65 e0 03 00       	call   8388cb4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEptEv>
 834ac4f:	83 c0 04             	add    $0x4,%eax
 834ac52:	89 04 24             	mov    %eax,(%esp)
 834ac55:	e8 90 df 03 00       	call   8388bea <_ZNKSt6vectorIP12CAICharacterSaIS1_EE4sizeEv>
 834ac5a:	83 f8 01             	cmp    $0x1,%eax
 834ac5d:	0f 94 c0             	sete   %al
 834ac60:	84 c0                	test   %al,%al
 834ac62:	74 1e                	je     834ac82 <_ZN16CAICharacterList7getByAPEj+0x18e>
 834ac64:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ac67:	89 04 24             	mov    %eax,(%esp)
 834ac6a:	e8 45 e0 03 00       	call   8388cb4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEptEv>
 834ac6f:	83 c0 04             	add    $0x4,%eax
 834ac72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 834ac79:	00 
 834ac7a:	89 04 24             	mov    %eax,(%esp)
 834ac7d:	e8 7a e0 03 00       	call   8388cfc <_ZNKSt6vectorIP12CAICharacterSaIS1_EE2atEj>
 834ac82:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ac85:	89 04 24             	mov    %eax,(%esp)
 834ac88:	e8 27 e0 03 00       	call   8388cb4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEptEv>
 834ac8d:	83 c0 04             	add    $0x4,%eax
 834ac90:	89 04 24             	mov    %eax,(%esp)
 834ac93:	e8 52 df 03 00       	call   8388bea <_ZNKSt6vectorIP12CAICharacterSaIS1_EE4sizeEv>
 834ac98:	89 04 24             	mov    %eax,(%esp)
 834ac9b:	e8 e7 6e 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834aca0:	89 c3                	mov    %eax,%ebx
 834aca2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834aca5:	89 04 24             	mov    %eax,(%esp)
 834aca8:	e8 07 e0 03 00       	call   8388cb4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIP12CAICharacterSaIS4_EEEEptEv>
 834acad:	83 c0 04             	add    $0x4,%eax
 834acb0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 834acb4:	89 04 24             	mov    %eax,(%esp)
 834acb7:	e8 40 e0 03 00       	call   8388cfc <_ZNKSt6vectorIP12CAICharacterSaIS1_EE2atEj>
 834acbc:	8b 00                	mov    (%eax),%eax
 834acbe:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 834acc1:	c9                   	leave
 834acc2:	c3                   	ret
 834acc3:	90                   	nop

```

```c
// CAICharacterList::getByAP @ 0x834aaf4

/* CAICharacterList::getByAP(unsigned int) */

undefined4 __thiscall CAICharacterList::getByAP(CAICharacterList *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_2c [4];
  uint local_28;
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  local_24 [4];
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_20 [4];
  undefined4 local_1c;
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  local_14 [4];
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  local_10 [8];
  
  cVar2 = std::
          map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
          ::empty((map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
                   *)(this + 0x4c0));
  if (cVar2 != '\0') {
    return 0;
  }
  local_28 = param_1;
  std::
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  ::lower_bound(local_2c,(int *)(this + 0x4c0));
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  ::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
              *)&local_30,(_Rb_tree_iterator *)local_2c);
  std::
  map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
  ::end(local_20);
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
  ::_Rb_tree_const_iterator(local_24,(_Rb_tree_iterator *)local_20);
  cVar2 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30,(_Rb_tree_const_iterator *)local_24);
  if (cVar2 != '\0') {
    std::
    map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
    ::end(local_18);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::_Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                *)&local_1c,(_Rb_tree_iterator *)local_18);
    local_30 = local_1c;
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::operator--((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                  *)&local_30);
  }
  puVar3 = (uint *)std::
                   _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                   ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                                 *)&local_30);
  if (param_1 < *puVar3) {
    std::
    map<int,std::vector<CAICharacter*,std::allocator<CAICharacter*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>>
    ::begin(local_10);
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::_Rb_tree_const_iterator(local_14,(_Rb_tree_iterator *)local_10);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                          *)&local_30,(_Rb_tree_const_iterator *)local_14);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0834ac35;
    }
  }
  bVar1 = false;
LAB_0834ac35:
  if (bVar1) {
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
    ::operator--((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                  *)&local_30);
  }
  iVar4 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30);
  iVar4 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::size
                    ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4));
  if (iVar4 == 1) {
    iVar4 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                          *)&local_30);
    std::vector<CAICharacter*,std::allocator<CAICharacter*>>::at
              ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4),0);
  }
  iVar4 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30);
  iVar4 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::size
                    ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4));
  uVar5 = get_rand_int(iVar4);
  iVar4 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
          ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<CAICharacter*,std::allocator<CAICharacter*>>>>
                        *)&local_30);
  puVar6 = (undefined4 *)
           std::vector<CAICharacter*,std::allocator<CAICharacter*>>::at
                     ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)(iVar4 + 4),uVar5);
  return *puVar6;
}

```

---

## getByLevel

```asm
// === 0834aa60 CAICharacterList::getByLevel  [0x0834aa60-0x834aaf3] ===
 834aa60:	55                   	push   %ebp
 834aa61:	89 e5                	mov    %esp,%ebp
 834aa63:	83 ec 28             	sub    $0x28,%esp
 834aa66:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 834aa6d:	e8 15 71 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834aa72:	03 45 0c             	add    0xc(%ebp),%eax
 834aa75:	83 e8 05             	sub    $0x5,%eax
 834aa78:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834aa7b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 834aa7f:	74 06                	je     834aa87 <_ZN16CAICharacterList10getByLevelEj+0x27>
 834aa81:	83 7d f0 62          	cmpl   $0x62,-0x10(%ebp)
 834aa85:	76 07                	jbe    834aa8e <_ZN16CAICharacterList10getByLevelEj+0x2e>
 834aa87:	b8 00 00 00 00       	mov    $0x0,%eax
 834aa8c:	eb 64                	jmp    834aaf2 <_ZN16CAICharacterList10getByLevelEj+0x92>
 834aa8e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 834aa91:	89 d0                	mov    %edx,%eax
 834aa93:	01 c0                	add    %eax,%eax
 834aa95:	01 d0                	add    %edx,%eax
 834aa97:	c1 e0 02             	shl    $0x2,%eax
 834aa9a:	83 c0 10             	add    $0x10,%eax
 834aa9d:	03 45 08             	add    0x8(%ebp),%eax
 834aaa0:	83 c0 08             	add    $0x8,%eax
 834aaa3:	89 04 24             	mov    %eax,(%esp)
 834aaa6:	e8 fb e0 03 00       	call   8388ba6 <_ZNKSt6vectorIP12CAICharacterSaIS1_EE5emptyEv>
 834aaab:	84 c0                	test   %al,%al
 834aaad:	74 07                	je     834aab6 <_ZN16CAICharacterList10getByLevelEj+0x56>
 834aaaf:	b8 00 00 00 00       	mov    $0x0,%eax
 834aab4:	eb 3c                	jmp    834aaf2 <_ZN16CAICharacterList10getByLevelEj+0x92>
 834aab6:	8b 45 08             	mov    0x8(%ebp),%eax
 834aab9:	8d 48 18             	lea    0x18(%eax),%ecx
 834aabc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 834aabf:	89 d0                	mov    %edx,%eax
 834aac1:	01 c0                	add    %eax,%eax
 834aac3:	01 d0                	add    %edx,%eax
 834aac5:	c1 e0 02             	shl    $0x2,%eax
 834aac8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 834aacb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834aace:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834aad1:	89 04 24             	mov    %eax,(%esp)
 834aad4:	e8 11 e1 03 00       	call   8388bea <_ZNKSt6vectorIP12CAICharacterSaIS1_EE4sizeEv>
 834aad9:	89 04 24             	mov    %eax,(%esp)
 834aadc:	e8 a6 70 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834aae1:	89 44 24 04          	mov    %eax,0x4(%esp)
 834aae5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834aae8:	89 04 24             	mov    %eax,(%esp)
 834aaeb:	e8 16 e1 03 00       	call   8388c06 <_ZNSt6vectorIP12CAICharacterSaIS1_EE2atEj>
 834aaf0:	8b 00                	mov    (%eax),%eax
 834aaf2:	c9                   	leave
 834aaf3:	c3                   	ret

```

```c
// CAICharacterList::getByLevel @ 0x834aa60

/* CAICharacterList::getByLevel(unsigned int) */

undefined4 __thiscall CAICharacterList::getByLevel(CAICharacterList *this,uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar2 = get_rand_int(10);
  uVar3 = (iVar2 + param_1) - 5;
  if ((uVar3 == 0) || (0x62 < uVar3)) {
    uVar4 = 0;
  }
  else {
    cVar1 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::empty();
    if (cVar1 == '\0') {
      iVar2 = std::vector<CAICharacter*,std::allocator<CAICharacter*>>::size
                        ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)
                         (this + uVar3 * 0xc + 0x18));
      uVar5 = get_rand_int(iVar2);
      puVar6 = (undefined4 *)
               std::vector<CAICharacter*,std::allocator<CAICharacter*>>::at
                         ((vector<CAICharacter*,std::allocator<CAICharacter*>> *)
                          (this + uVar3 * 0xc + 0x18),uVar5);
      uVar4 = *puVar6;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## init

```asm
// === 0834a28c CAICharacterList::init  [0x0834a28c-0x834a599] ===
 834a28c:	55                   	push   %ebp
 834a28d:	89 e5                	mov    %esp,%ebp
 834a28f:	57                   	push   %edi
 834a290:	56                   	push   %esi
 834a291:	53                   	push   %ebx
 834a292:	81 ec 6c 10 00 00    	sub    $0x106c,%esp
 834a298:	e8 17 29 2d 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 834a29d:	89 04 24             	mov    %eax,(%esp)
 834a2a0:	e8 69 c0 2d 00       	call   862630e <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv>
 834a2a5:	83 f0 01             	xor    $0x1,%eax
 834a2a8:	84 c0                	test   %al,%al
 834a2aa:	74 16                	je     834a2c2 <_ZN16CAICharacterList4initEv+0x36>
 834a2ac:	c7 04 24 48 f8 c2 08 	movl   $0x8c2f848,(%esp)
 834a2b3:	e8 b8 42 d3 ff       	call   807e570 <puts@plt>
 834a2b8:	bb 00 00 00 00       	mov    $0x0,%ebx
 834a2bd:	e9 ca 02 00 00       	jmp    834a58c <_ZN16CAICharacterList4initEv+0x300>
 834a2c2:	8b 45 08             	mov    0x8(%ebp),%eax
 834a2c5:	c7 80 bc 04 00 00 ff 	movl   $0x7fffffff,0x4bc(%eax)
 834a2cc:	ff ff 7f 
 834a2cf:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 834a2d6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834a2d9:	89 04 24             	mov    %eax,(%esp)
 834a2dc:	e8 f7 99 f6 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 834a2e1:	8d 85 b4 ef ff ff    	lea    -0x104c(%ebp),%eax
 834a2e7:	89 04 24             	mov    %eax,(%esp)
 834a2ea:	e8 89 e7 57 00       	call   88c8a78 <_ZN25STAICharacterCommonScriptC1Ev>
 834a2ef:	8d 85 a4 ef ff ff    	lea    -0x105c(%ebp),%eax
 834a2f5:	c7 44 24 04 20 6a 4f 	movl   $0x94f6a20,0x4(%esp)
 834a2fc:	09 
 834a2fd:	89 04 24             	mov    %eax,(%esp)
 834a300:	e8 ed bd d9 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 834a305:	83 ec 04             	sub    $0x4,%esp
 834a308:	8b 85 a4 ef ff ff    	mov    -0x105c(%ebp),%eax
 834a30e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 834a311:	e9 10 02 00 00       	jmp    834a526 <_ZN16CAICharacterList4initEv+0x29a>
 834a316:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834a319:	89 04 24             	mov    %eax,(%esp)
 834a31c:	e8 97 be d9 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 834a321:	83 c0 04             	add    $0x4,%eax
 834a324:	89 04 24             	mov    %eax,(%esp)
 834a327:	e8 c4 c1 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 834a32c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834a32f:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 834a333:	0f 84 1f 02 00 00    	je     834a558 <_ZN16CAICharacterList4initEv+0x2cc>
 834a339:	8d 85 b4 ef ff ff    	lea    -0x104c(%ebp),%eax
 834a33f:	89 04 24             	mov    %eax,(%esp)
 834a342:	e8 4b f2 57 00       	call   88c9592 <_ZN25STAICharacterCommonScript5clearEv>
 834a347:	c7 04 24 74 00 00 00 	movl   $0x74,(%esp)
 834a34e:	e8 fd a0 3d 00       	call   8724450 <_Znwj>
 834a353:	89 c3                	mov    %eax,%ebx
 834a355:	89 d8                	mov    %ebx,%eax
 834a357:	89 04 24             	mov    %eax,(%esp)
 834a35a:	e8 3b 97 02 00       	call   8373a9a <_ZN12CAICharacterC1Ev>
 834a35f:	eb 15                	jmp    834a376 <_ZN16CAICharacterList4initEv+0xea>
 834a361:	89 d6                	mov    %edx,%esi
 834a363:	89 c7                	mov    %eax,%edi
 834a365:	89 1c 24             	mov    %ebx,(%esp)
 834a368:	e8 83 a1 3d 00       	call   87244f0 <_ZdlPv>
 834a36d:	89 f8                	mov    %edi,%eax
 834a36f:	89 f2                	mov    %esi,%edx
 834a371:	e9 ea 01 00 00       	jmp    834a560 <_ZN16CAICharacterList4initEv+0x2d4>
 834a376:	89 5d d8             	mov    %ebx,-0x28(%ebp)
 834a379:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834a380:	00 
 834a381:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834a384:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a388:	8d 85 b4 ef ff ff    	lea    -0x104c(%ebp),%eax
 834a38e:	89 04 24             	mov    %eax,(%esp)
 834a391:	e8 36 f9 57 00       	call   88c9ccc <_Z29importAICharacterCommonScriptP25STAICharacterCommonScriptPKcb>
 834a396:	83 f0 01             	xor    $0x1,%eax
 834a399:	84 c0                	test   %al,%al
 834a39b:	74 34                	je     834a3d1 <_ZN16CAICharacterList4initEv+0x145>
 834a39d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834a3a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a3a4:	c7 04 24 6d f8 c2 08 	movl   $0x8c2f86d,(%esp)
 834a3ab:	e8 b0 37 d3 ff       	call   807db60 <printf@plt>
 834a3b0:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 834a3b3:	85 db                	test   %ebx,%ebx
 834a3b5:	74 10                	je     834a3c7 <_ZN16CAICharacterList4initEv+0x13b>
 834a3b7:	89 1c 24             	mov    %ebx,(%esp)
 834a3ba:	e8 73 97 02 00       	call   8373b32 <_ZN12CAICharacterD1Ev>
 834a3bf:	89 1c 24             	mov    %ebx,(%esp)
 834a3c2:	e8 29 a1 3d 00       	call   87244f0 <_ZdlPv>
 834a3c7:	bb 00 00 00 00       	mov    $0x0,%ebx
 834a3cc:	e9 ad 01 00 00       	jmp    834a57e <_ZN16CAICharacterList4initEv+0x2f2>
 834a3d1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834a3d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a3d8:	c7 04 24 20 6a 4f 09 	movl   $0x94f6a20,(%esp)
 834a3df:	e8 72 0a 57 00       	call   88bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>
 834a3e4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834a3e7:	e8 c8 27 2d 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 834a3ec:	8d 95 b4 ef ff ff    	lea    -0x104c(%ebp),%edx
 834a3f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a3f6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 834a3f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a3fd:	89 04 24             	mov    %eax,(%esp)
 834a400:	e8 8d bf 2d 00       	call   8626392 <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript>
 834a405:	83 f0 01             	xor    $0x1,%eax
 834a408:	84 c0                	test   %al,%al
 834a40a:	74 1d                	je     834a429 <_ZN16CAICharacterList4initEv+0x19d>
 834a40c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834a40f:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a413:	c7 04 24 8c f8 c2 08 	movl   $0x8c2f88c,(%esp)
 834a41a:	e8 41 37 d3 ff       	call   807db60 <printf@plt>
 834a41f:	bb 00 00 00 00       	mov    $0x0,%ebx
 834a424:	e9 55 01 00 00       	jmp    834a57e <_ZN16CAICharacterList4initEv+0x2f2>
 834a429:	e8 6d 1d d8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 834a42e:	05 90 a8 00 00       	add    $0xa890,%eax
 834a433:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834a436:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 834a43d:	eb 73                	jmp    834a4b2 <_ZN16CAICharacterList4initEv+0x226>
 834a43f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834a442:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a446:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834a449:	89 04 24             	mov    %eax,(%esp)
 834a44c:	e8 9f e3 03 00       	call   83887f0 <_ZNSt6vectorI21stIndependentDropInfoSaIS0_EEixEj>
 834a451:	8b 00                	mov    (%eax),%eax
 834a453:	83 f8 01             	cmp    $0x1,%eax
 834a456:	75 21                	jne    834a479 <_ZN16CAICharacterList4initEv+0x1ed>
 834a458:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834a45b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a45f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834a462:	89 04 24             	mov    %eax,(%esp)
 834a465:	e8 86 e3 03 00       	call   83887f0 <_ZNSt6vectorI21stIndependentDropInfoSaIS0_EEixEj>
 834a46a:	8b 40 04             	mov    0x4(%eax),%eax
 834a46d:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 834a470:	75 07                	jne    834a479 <_ZN16CAICharacterList4initEv+0x1ed>
 834a472:	b8 01 00 00 00       	mov    $0x1,%eax
 834a477:	eb 05                	jmp    834a47e <_ZN16CAICharacterList4initEv+0x1f2>
 834a479:	b8 00 00 00 00       	mov    $0x0,%eax
 834a47e:	84 c0                	test   %al,%al
 834a480:	74 2c                	je     834a4ae <_ZN16CAICharacterList4initEv+0x222>
 834a482:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834a485:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a489:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834a48c:	89 04 24             	mov    %eax,(%esp)
 834a48f:	e8 5c e3 03 00       	call   83887f0 <_ZNSt6vectorI21stIndependentDropInfoSaIS0_EEixEj>
 834a494:	83 c0 08             	add    $0x8,%eax
 834a497:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a49b:	8d 85 b4 ef ff ff    	lea    -0x104c(%ebp),%eax
 834a4a1:	05 2c 0f 00 00       	add    $0xf2c,%eax
 834a4a6:	89 04 24             	mov    %eax,(%esp)
 834a4a9:	e8 5c e3 03 00       	call   838880a <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE9push_backERKS0_>
 834a4ae:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 834a4b2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834a4b5:	89 04 24             	mov    %eax,(%esp)
 834a4b8:	e8 11 e3 03 00       	call   83887ce <_ZNKSt6vectorI21stIndependentDropInfoSaIS0_EE4sizeEv>
 834a4bd:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 834a4c0:	0f 9f c0             	setg   %al
 834a4c3:	84 c0                	test   %al,%al
 834a4c5:	0f 85 74 ff ff ff    	jne    834a43f <_ZN16CAICharacterList4initEv+0x1b3>
 834a4cb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834a4ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a4d2:	c7 04 24 20 6a 4f 09 	movl   $0x94f6a20,(%esp)
 834a4d9:	e8 78 09 57 00       	call   88bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>
 834a4de:	8d 95 b4 ef ff ff    	lea    -0x104c(%ebp),%edx
 834a4e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a4e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a4ec:	8b 45 d8             	mov    -0x28(%ebp),%eax
 834a4ef:	89 04 24             	mov    %eax,(%esp)
 834a4f2:	e8 6f fb ff ff       	call   834a066 <_ZN12CAICharacter3setEiRK25STAICharacterCommonScript>
 834a4f7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 834a4fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a4fe:	8b 45 08             	mov    0x8(%ebp),%eax
 834a501:	89 04 24             	mov    %eax,(%esp)
 834a504:	e8 13 01 00 00       	call   834a61c <_ZN16CAICharacterList4_addEP12CAICharacter>
 834a509:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834a50c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834a513:	00 
 834a514:	8d 55 c8             	lea    -0x38(%ebp),%edx
 834a517:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a51b:	89 04 24             	mov    %eax,(%esp)
 834a51e:	e8 c1 71 ff ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 834a523:	83 ec 04             	sub    $0x4,%esp
 834a526:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834a529:	c7 44 24 04 20 6a 4f 	movl   $0x94f6a20,0x4(%esp)
 834a530:	09 
 834a531:	89 04 24             	mov    %eax,(%esp)
 834a534:	e8 df bb d9 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 834a539:	83 ec 04             	sub    $0x4,%esp
 834a53c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834a53f:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a543:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834a546:	89 04 24             	mov    %eax,(%esp)
 834a549:	e8 f0 bb d9 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 834a54e:	84 c0                	test   %al,%al
 834a550:	0f 85 c0 fd ff ff    	jne    834a316 <_ZN16CAICharacterList4initEv+0x8a>
 834a556:	eb 01                	jmp    834a559 <_ZN16CAICharacterList4initEv+0x2cd>
 834a558:	90                   	nop
 834a559:	bb 01 00 00 00       	mov    $0x1,%ebx
 834a55e:	eb 1e                	jmp    834a57e <_ZN16CAICharacterList4initEv+0x2f2>
 834a560:	89 d3                	mov    %edx,%ebx
 834a562:	89 c6                	mov    %eax,%esi
 834a564:	8d 85 b4 ef ff ff    	lea    -0x104c(%ebp),%eax
 834a56a:	89 04 24             	mov    %eax,(%esp)
 834a56d:	e8 ca ea 57 00       	call   88c903c <_ZN25STAICharacterCommonScriptD1Ev>
 834a572:	89 f0                	mov    %esi,%eax
 834a574:	89 da                	mov    %ebx,%edx
 834a576:	89 04 24             	mov    %eax,(%esp)
 834a579:	e8 d2 91 79 00       	call   8ae3750 <_Unwind_Resume>
 834a57e:	8d 85 b4 ef ff ff    	lea    -0x104c(%ebp),%eax
 834a584:	89 04 24             	mov    %eax,(%esp)
 834a587:	e8 b0 ea 57 00       	call   88c903c <_ZN25STAICharacterCommonScriptD1Ev>
 834a58c:	89 d8                	mov    %ebx,%eax
 834a58e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 834a591:	83 c4 00             	add    $0x0,%esp
 834a594:	5b                   	pop    %ebx
 834a595:	5e                   	pop    %esi
 834a596:	5f                   	pop    %edi
 834a597:	5d                   	pop    %ebp
 834a598:	c3                   	ret
 834a599:	90                   	nop

```

```c
// CAICharacterList::init @ 0x834a28c

/* CAICharacterList::init() */

undefined4 __thiscall CAICharacterList::init(CAICharacterList *this)

{
  bool bVar1;
  char cVar2;
  CSyncScript *pCVar3;
  int iVar4;
  CAICharacter *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_1060 [4];
  STAICharacterCommonScript local_1050 [3884];
  vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> avStack_124 [232];
  undefined4 local_3c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_34 [4];
  char *local_30;
  CAICharacter *local_2c;
  int local_28;
  vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *local_24;
  uint local_20;
  
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar2 = sync_script::CSyncScript::truncate_aicharacter_info_table(pCVar3);
  if (cVar2 == '\x01') {
    *(undefined4 *)(this + 0x4bc) = 0x7fffffff;
    local_30 = (char *)0x0;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
    STAICharacterCommonScript::STAICharacterCommonScript(local_1050);
                    /* try { // try from 0834a300 to 0834a352 has its CatchHandler @ 0834a560 */
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                *)local_1060);
    local_3c = local_1060[0];
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_38);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c,
                         (_Rb_tree_iterator *)local_38);
      if (cVar2 == '\0') break;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
      local_30 = (char *)std::string::c_str((string *)(iVar4 + 4));
      if (local_30 == (char *)0x0) break;
      STAICharacterCommonScript::clear(local_1050);
      pCVar5 = operator_new(0x74);
                    /* try { // try from 0834a35a to 0834a35e has its CatchHandler @ 0834a361 */
      CAICharacter::CAICharacter(pCVar5);
      local_2c = pCVar5;
                    /* try { // try from 0834a391 to 0834a538 has its CatchHandler @ 0834a560 */
      cVar2 = importAICharacterCommonScript(local_1050,local_30,false);
      if (cVar2 != '\x01') {
        printf("AI charac Script Error: %s\n",local_30);
        pCVar5 = local_2c;
        if (local_2c != (CAICharacter *)0x0) {
          CAICharacter::~CAICharacter(local_2c);
          operator_delete(pCVar5);
        }
        uVar7 = 0;
        goto LAB_0834a57e;
      }
      local_28 = STScriptFileList::FindIndexByFullScan
                           ((STScriptFileList *)g_aiCharacterScriptFileList,local_30);
      pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar2 = sync_script::CSyncScript::insert_aicharacter_info_to_db(pCVar3,local_28,local_1050);
      if (cVar2 != '\x01') {
        printf("insert_aicharacter_category Error: %s\n",local_30);
        uVar7 = 0;
        goto LAB_0834a57e;
      }
      iVar4 = G_CDataManager();
      local_24 = (vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *)
                 (iVar4 + 0xa890);
      local_20 = 0;
      while (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::size
                               (local_24), (int)local_20 < iVar4) {
        piVar6 = (int *)std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                        operator[](local_24,local_20);
        if ((*piVar6 == 1) &&
           (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                    operator[](local_24,local_20), *(int *)(iVar4 + 4) == local_28)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                  operator[](local_24,local_20);
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
          push_back(avStack_124,(stMonsterIndependentDrop_t *)(iVar4 + 8));
        }
        local_20 = local_20 + 1;
      }
      iVar4 = STScriptFileList::FindIndexByFullScan
                        ((STScriptFileList *)g_aiCharacterScriptFileList,local_30);
      CAICharacter::set(local_2c,iVar4,local_1050);
      _add(this,local_2c);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_34,(int)&local_3c);
    }
    uVar7 = 1;
LAB_0834a57e:
    STAICharacterCommonScript::~STAICharacterCommonScript(local_1050);
  }
  else {
    puts("Fail truncate_aicharacter_info_table");
    uVar7 = 0;
  }
  return uVar7;
}

```

