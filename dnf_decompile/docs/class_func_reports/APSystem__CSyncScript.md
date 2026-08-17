# APSystem__CSyncScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## InsertDescTable

```asm
// === 0812268c APSystem::CSyncScript::InsertDescTable  [0x0812268c-0x8122a4c] ===
 812268c:	55                   	push   %ebp
 812268d:	89 e5                	mov    %esp,%ebp
 812268f:	57                   	push   %edi
 8122690:	56                   	push   %esi
 8122691:	53                   	push   %ebx
 8122692:	81 ec fc 04 00 00    	sub    $0x4fc,%esp
 8122698:	e8 fe 9a fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 812269d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81226a4:	00 
 81226a5:	89 04 24             	mov    %eax,(%esp)
 81226a8:	e8 21 04 00 00       	call   8122ace <_ZN12CDataManager26GetActionPointEtcParameterEb>
 81226ad:	83 c0 18             	add    $0x18,%eax
 81226b0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81226b3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81226b6:	89 04 24             	mov    %eax,(%esp)
 81226b9:	e8 12 3f 5e 00       	call   87065d0 <_ZNSsC1Ev>
 81226be:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81226c1:	89 04 24             	mov    %eax,(%esp)
 81226c4:	e8 07 3f 5e 00       	call   87065d0 <_ZNSsC1Ev>
 81226c9:	c7 44 24 04 f8 d4 b5 	movl   $0x8b5d4f8,0x4(%esp)
 81226d0:	08 
 81226d1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81226d4:	89 04 24             	mov    %eax,(%esp)
 81226d7:	e8 44 60 5e 00       	call   8708720 <_ZNSsaSEPKc>
 81226dc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81226df:	89 04 24             	mov    %eax,(%esp)
 81226e2:	e8 9f 06 00 00       	call   8122d86 <_ZNKSt3mapItPKN8APSystem14CActionPointExESt4lessItESaISt4pairIKtS3_EEE4sizeEv>
 81226e7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81226ea:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81226ed:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81226f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81226f4:	89 04 24             	mov    %eax,(%esp)
 81226f7:	e8 9e 06 00 00       	call   8122d9a <_ZNKSt3mapItPKN8APSystem14CActionPointExESt4lessItESaISt4pairIKtS3_EEE5beginEv>
 81226fc:	83 ec 04             	sub    $0x4,%esp
 81226ff:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8122706:	e9 5c 02 00 00       	jmp    8122967 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x2db>
 812270b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 812270e:	89 04 24             	mov    %eax,(%esp)
 8122711:	e8 20 06 00 00       	call   8122d36 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtPKN8APSystem14CActionPointExEEEptEv>
 8122716:	8b 40 04             	mov    0x4(%eax),%eax
 8122719:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812271c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8122720:	0f 84 1f 02 00 00    	je     8122945 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x2b9>
 8122726:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8122729:	89 04 24             	mov    %eax,(%esp)
 812272c:	e8 9f 3e 5e 00       	call   87065d0 <_ZNSsC1Ev>
 8122731:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8122734:	0f b7 00             	movzwl (%eax),%eax
 8122737:	0f b7 c0             	movzwl %ax,%eax
 812273a:	89 44 24 08          	mov    %eax,0x8(%esp)
 812273e:	c7 44 24 04 5b d5 b5 	movl   $0x8b5d55b,0x4(%esp)
 8122745:	08 
 8122746:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 812274c:	89 04 24             	mov    %eax,(%esp)
 812274f:	e8 ec bc f5 ff       	call   807e440 <sprintf@plt>
 8122754:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8122757:	8b 40 02             	mov    0x2(%eax),%eax
 812275a:	89 44 24 08          	mov    %eax,0x8(%esp)
 812275e:	c7 44 24 04 5b d5 b5 	movl   $0x8b5d55b,0x4(%esp)
 8122765:	08 
 8122766:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 812276c:	89 04 24             	mov    %eax,(%esp)
 812276f:	e8 cc bc f5 ff       	call   807e440 <sprintf@plt>
 8122774:	8d b5 24 fb ff ff    	lea    -0x4dc(%ebp),%esi
 812277a:	b8 00 00 00 00       	mov    $0x0,%eax
 812277f:	ba 00 01 00 00       	mov    $0x100,%edx
 8122784:	89 f7                	mov    %esi,%edi
 8122786:	89 d1                	mov    %edx,%ecx
 8122788:	f3 ab                	rep stos %eax,%es:(%edi)
 812278a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812278d:	83 c0 24             	add    $0x24,%eax
 8122790:	89 04 24             	mov    %eax,(%esp)
 8122793:	e8 58 3d 5e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8122798:	8d 95 24 fb ff ff    	lea    -0x4dc(%ebp),%edx
 812279e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81227a2:	89 04 24             	mov    %eax,(%esp)
 81227a5:	e8 5e 66 fe ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 81227aa:	83 f0 01             	xor    $0x1,%eax
 81227ad:	84 c0                	test   %al,%al
 81227af:	74 7f                	je     8122830 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x1a4>
 81227b1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81227b4:	83 c0 24             	add    $0x24,%eax
 81227b7:	89 04 24             	mov    %eax,(%esp)
 81227ba:	e8 31 3d 5e 00       	call   87064f0 <_ZNKSs5c_strEv>
 81227bf:	89 c7                	mov    %eax,%edi
 81227c1:	e8 1a 66 fe ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 81227c6:	89 c6                	mov    %eax,%esi
 81227c8:	e8 ff 65 fe ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 81227cd:	89 c3                	mov    %eax,%ebx
 81227cf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81227d6:	00 
 81227d7:	c7 44 24 08 09 04 00 	movl   $0x409,0x8(%esp)
 81227de:	00 
 81227df:	c7 44 24 04 a0 e1 b5 	movl   $0x8b5e1a0,0x4(%esp)
 81227e6:	08 
 81227e7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81227ea:	89 04 24             	mov    %eax,(%esp)
 81227ed:	e8 26 cf 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81227f2:	c7 44 24 18 09 04 00 	movl   $0x409,0x18(%esp)
 81227f9:	00 
 81227fa:	c7 44 24 14 a0 e1 b5 	movl   $0x8b5e1a0,0x14(%esp)
 8122801:	08 
 8122802:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8122806:	89 74 24 0c          	mov    %esi,0xc(%esp)
 812280a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 812280e:	c7 44 24 04 5e d5 b5 	movl   $0x8b5d55e,0x4(%esp)
 8122815:	08 
 8122816:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8122819:	89 04 24             	mov    %eax,(%esp)
 812281c:	e8 67 cf 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8122821:	bb 00 00 00 00       	mov    $0x0,%ebx
 8122826:	be 00 00 00 00       	mov    $0x0,%esi
 812282b:	e9 00 01 00 00       	jmp    8122930 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x2a4>
 8122830:	c7 44 24 04 7b d5 b5 	movl   $0x8b5d57b,0x4(%esp)
 8122837:	08 
 8122838:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812283b:	89 04 24             	mov    %eax,(%esp)
 812283e:	e8 ed 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 8122843:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8122849:	89 44 24 04          	mov    %eax,0x4(%esp)
 812284d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8122850:	89 04 24             	mov    %eax,(%esp)
 8122853:	e8 d8 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 8122858:	c7 44 24 04 7d d5 b5 	movl   $0x8b5d57d,0x4(%esp)
 812285f:	08 
 8122860:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8122863:	89 04 24             	mov    %eax,(%esp)
 8122866:	e8 c5 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 812286b:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8122871:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122875:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8122878:	89 04 24             	mov    %eax,(%esp)
 812287b:	e8 b0 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 8122880:	c7 44 24 04 7d d5 b5 	movl   $0x8b5d57d,0x4(%esp)
 8122887:	08 
 8122888:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812288b:	89 04 24             	mov    %eax,(%esp)
 812288e:	e8 9d 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 8122893:	c7 44 24 04 80 d5 b5 	movl   $0x8b5d580,0x4(%esp)
 812289a:	08 
 812289b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812289e:	89 04 24             	mov    %eax,(%esp)
 81228a1:	e8 8a 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 81228a6:	8d 85 24 fb ff ff    	lea    -0x4dc(%ebp),%eax
 81228ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81228b0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81228b3:	89 04 24             	mov    %eax,(%esp)
 81228b6:	e8 75 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 81228bb:	c7 44 24 04 80 d5 b5 	movl   $0x8b5d580,0x4(%esp)
 81228c2:	08 
 81228c3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81228c6:	89 04 24             	mov    %eax,(%esp)
 81228c9:	e8 62 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 81228ce:	c7 44 24 04 82 d5 b5 	movl   $0x8b5d582,0x4(%esp)
 81228d5:	08 
 81228d6:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81228d9:	89 04 24             	mov    %eax,(%esp)
 81228dc:	e8 4f 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 81228e1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81228e4:	83 e8 01             	sub    $0x1,%eax
 81228e7:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81228ea:	7e 13                	jle    81228ff <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x273>
 81228ec:	c7 44 24 04 84 d5 b5 	movl   $0x8b5d584,0x4(%esp)
 81228f3:	08 
 81228f4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81228f7:	89 04 24             	mov    %eax,(%esp)
 81228fa:	e8 31 57 5e 00       	call   8708030 <_ZNSspLEPKc>
 81228ff:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8122902:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122906:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8122909:	89 04 24             	mov    %eax,(%esp)
 812290c:	e8 df 58 5e 00       	call   87081f0 <_ZNSspLERKSs>
 8122911:	be 01 00 00 00       	mov    $0x1,%esi
 8122916:	eb 18                	jmp    8122930 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x2a4>
 8122918:	89 d3                	mov    %edx,%ebx
 812291a:	89 c6                	mov    %eax,%esi
 812291c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 812291f:	89 04 24             	mov    %eax,(%esp)
 8122922:	e8 b9 52 5e 00       	call   8707be0 <_ZNSsD1Ev>
 8122927:	89 f0                	mov    %esi,%eax
 8122929:	89 da                	mov    %ebx,%edx
 812292b:	e9 c8 00 00 00       	jmp    81229f8 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x36c>
 8122930:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8122933:	89 04 24             	mov    %eax,(%esp)
 8122936:	e8 a5 52 5e 00       	call   8707be0 <_ZNSsD1Ev>
 812293b:	85 f6                	test   %esi,%esi
 812293d:	0f 84 ca 00 00 00    	je     8122a0d <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x381>
 8122943:	eb 01                	jmp    8122946 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x2ba>
 8122945:	90                   	nop
 8122946:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8122949:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8122950:	00 
 8122951:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8122954:	89 54 24 04          	mov    %edx,0x4(%esp)
 8122958:	89 04 24             	mov    %eax,(%esp)
 812295b:	e8 9a 04 00 00       	call   8122dfa <_ZNSt23_Rb_tree_const_iteratorISt4pairIKtPKN8APSystem14CActionPointExEEEppEi>
 8122960:	83 ec 04             	sub    $0x4,%esp
 8122963:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8122967:	8d 45 bc             	lea    -0x44(%ebp),%eax
 812296a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 812296d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8122971:	89 04 24             	mov    %eax,(%esp)
 8122974:	e8 47 04 00 00       	call   8122dc0 <_ZNKSt3mapItPKN8APSystem14CActionPointExESt4lessItESaISt4pairIKtS3_EEE3endEv>
 8122979:	83 ec 04             	sub    $0x4,%esp
 812297c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 812297f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8122983:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8122986:	89 04 24             	mov    %eax,(%esp)
 8122989:	e8 58 04 00 00       	call   8122de6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKtPKN8APSystem14CActionPointExEEEneERKS7_>
 812298e:	84 c0                	test   %al,%al
 8122990:	0f 85 75 fd ff ff    	jne    812270b <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x7f>
 8122996:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 812299b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81229a2:	00 
 81229a3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81229aa:	00 
 81229ab:	89 04 24             	mov    %eax,(%esp)
 81229ae:	e8 8b 28 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81229b3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81229b6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81229b9:	89 04 24             	mov    %eax,(%esp)
 81229bc:	e8 2f 3b 5e 00       	call   87064f0 <_ZNKSs5c_strEv>
 81229c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81229c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81229c8:	89 04 24             	mov    %eax,(%esp)
 81229cb:	e8 f0 17 2d 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81229d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81229d7:	00 
 81229d8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81229db:	89 04 24             	mov    %eax,(%esp)
 81229de:	e8 43 19 2d 00       	call   83f4326 <_ZN5MySQL4execEb>
 81229e3:	83 f0 01             	xor    $0x1,%eax
 81229e6:	84 c0                	test   %al,%al
 81229e8:	74 07                	je     81229f1 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x365>
 81229ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 81229ef:	eb 1c                	jmp    8122a0d <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x381>
 81229f1:	bb 01 00 00 00       	mov    $0x1,%ebx
 81229f6:	eb 15                	jmp    8122a0d <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x381>
 81229f8:	89 d3                	mov    %edx,%ebx
 81229fa:	89 c6                	mov    %eax,%esi
 81229fc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81229ff:	89 04 24             	mov    %eax,(%esp)
 8122a02:	e8 d9 51 5e 00       	call   8707be0 <_ZNSsD1Ev>
 8122a07:	89 f0                	mov    %esi,%eax
 8122a09:	89 da                	mov    %ebx,%edx
 8122a0b:	eb 0d                	jmp    8122a1a <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x38e>
 8122a0d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8122a10:	89 04 24             	mov    %eax,(%esp)
 8122a13:	e8 c8 51 5e 00       	call   8707be0 <_ZNSsD1Ev>
 8122a18:	eb 1b                	jmp    8122a35 <_ZN8APSystem11CSyncScript15InsertDescTableEv+0x3a9>
 8122a1a:	89 d3                	mov    %edx,%ebx
 8122a1c:	89 c6                	mov    %eax,%esi
 8122a1e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8122a21:	89 04 24             	mov    %eax,(%esp)
 8122a24:	e8 b7 51 5e 00       	call   8707be0 <_ZNSsD1Ev>
 8122a29:	89 f0                	mov    %esi,%eax
 8122a2b:	89 da                	mov    %ebx,%edx
 8122a2d:	89 04 24             	mov    %eax,(%esp)
 8122a30:	e8 1b 0d 9c 00       	call   8ae3750 <_Unwind_Resume>
 8122a35:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8122a38:	89 04 24             	mov    %eax,(%esp)
 8122a3b:	e8 a0 51 5e 00       	call   8707be0 <_ZNSsD1Ev>
 8122a40:	89 d8                	mov    %ebx,%eax
 8122a42:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8122a45:	83 c4 00             	add    $0x0,%esp
 8122a48:	5b                   	pop    %ebx
 8122a49:	5e                   	pop    %esi
 8122a4a:	5f                   	pop    %edi
 8122a4b:	5d                   	pop    %ebp
 8122a4c:	c3                   	ret

```

```c
// APSystem::CSyncScript::InsertDescTable @ 0x812268c

/* APSystem::CSyncScript::InsertDescTable() */

undefined4 APSystem::CSyncScript::InsertDescTable(void)

{
  bool bVar1;
  char cVar2;
  CDataManager *this;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 unaff_EBX;
  byte bVar8;
  char local_4e0 [1024];
  char local_e0 [68];
  char local_9c [68];
  string local_58 [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  local_54 [4];
  string local_50 [4];
  string local_4c [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  local_48 [4];
  cMyTrace local_44 [16];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
  local_34 [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  *local_30;
  int local_2c;
  MySQL *local_28;
  int local_24;
  ushort *local_20;
  
  bVar8 = 0;
  this = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::GetActionPointEtcParameter(this,false);
  local_30 = (map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
              *)(iVar3 + 0x18);
  std::string::string(local_4c);
                    /* try { // try from 081226c4 to 081226c8 has its CatchHandler @ 08122a1a */
  std::string::string(local_50);
                    /* try { // try from 081226d7 to 08122730 has its CatchHandler @ 081229f8 */
  std::string::operator=
            (local_4c,
             "inSert into charac_action_point_desc (action_index, action_group_index, action_group_name) values "
            );
  local_2c = std::
             map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
             ::size(local_30);
  std::
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  ::begin(local_54);
  local_24 = 0;
  while( true ) {
    std::
    map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
    ::end(local_48);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
                          *)local_54,(_Rb_tree_const_iterator *)local_48);
    if (cVar2 == '\0') break;
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
                          *)local_54);
    local_20 = *(ushort **)(iVar3 + 4);
    if (local_20 != (ushort *)0x0) {
      std::string::string(local_58);
      sprintf(local_9c,"%u",(uint)*local_20);
      sprintf(local_e0,"%u",*(undefined4 *)(local_20 + 1));
      pcVar7 = local_4e0;
      for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
      }
                    /* try { // try from 08122793 to 08122910 has its CatchHandler @ 08122918 */
      pcVar7 = (char *)std::string::c_str((string *)(local_20 + 0x12));
      cVar2 = CodePage::script2Database(pcVar7,local_4e0);
      if (cVar2 == '\x01') {
        std::string::operator+=(local_58,"(");
        std::string::operator+=(local_58,local_9c);
        std::string::operator+=(local_58,", ");
        std::string::operator+=(local_58,local_e0);
        std::string::operator+=(local_58,", ");
        std::string::operator+=(local_58,"\'");
        std::string::operator+=(local_58,local_4e0);
        std::string::operator+=(local_58,"\'");
        std::string::operator+=(local_58,")");
        if (local_24 < local_2c + -1) {
          std::string::operator+=(local_58,",");
        }
        std::string::operator+=(local_4c,local_58);
        bVar1 = true;
      }
      else {
        uVar4 = std::string::c_str((string *)(local_20 + 0x12));
        uVar5 = CodePage::database();
        uVar6 = CodePage::script();
        cMyTrace::cMyTrace(local_44,"static bool APSystem::CSyncScript::InsertDescTable()",0x409,5);
        cMyTrace::operator()
                  (local_44,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar4,
                   "static bool APSystem::CSyncScript::InsertDescTable()",0x409);
        unaff_EBX = 0;
        bVar1 = false;
      }
                    /* try { // try from 08122936 to 081229e2 has its CatchHandler @ 081229f8 */
      std::string::~string(local_58);
      if (!bVar1) goto LAB_08122a0d;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>::
    operator++(local_34,(int)local_54);
    local_24 = local_24 + 1;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pcVar7 = (char *)std::string::c_str(local_4c);
  MySQL::set_query(local_28,pcVar7);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    unaff_EBX = 1;
  }
  else {
    unaff_EBX = 0;
  }
LAB_08122a0d:
                    /* try { // try from 08122a13 to 08122a17 has its CatchHandler @ 08122a1a */
  std::string::~string(local_50);
  std::string::~string(local_4c);
  return unaff_EBX;
}

```

---

## TruncateDescTable

```asm
// === 0812262a APSystem::CSyncScript::TruncateDescTable  [0x0812262a-0x812268b] ===
 812262a:	55                   	push   %ebp
 812262b:	89 e5                	mov    %esp,%ebp
 812262d:	83 ec 28             	sub    $0x28,%esp
 8122630:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8122635:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812263c:	00 
 812263d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8122644:	00 
 8122645:	89 04 24             	mov    %eax,(%esp)
 8122648:	e8 f1 2b 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 812264d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8122650:	c7 44 24 04 d0 d4 b5 	movl   $0x8b5d4d0,0x4(%esp)
 8122657:	08 
 8122658:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812265b:	89 04 24             	mov    %eax,(%esp)
 812265e:	e8 5d 1b 2d 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8122663:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812266a:	00 
 812266b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 812266e:	89 04 24             	mov    %eax,(%esp)
 8122671:	e8 b0 1c 2d 00       	call   83f4326 <_ZN5MySQL4execEb>
 8122676:	83 f0 01             	xor    $0x1,%eax
 8122679:	84 c0                	test   %al,%al
 812267b:	74 07                	je     8122684 <_ZN8APSystem11CSyncScript17TruncateDescTableEv+0x5a>
 812267d:	b8 00 00 00 00       	mov    $0x0,%eax
 8122682:	eb 05                	jmp    8122689 <_ZN8APSystem11CSyncScript17TruncateDescTableEv+0x5f>
 8122684:	b8 01 00 00 00       	mov    $0x1,%eax
 8122689:	c9                   	leave
 812268a:	c3                   	ret
 812268b:	90                   	nop

```

```c
// APSystem::CSyncScript::TruncateDescTable @ 0x812262a

/* APSystem::CSyncScript::TruncateDescTable() */

bool APSystem::CSyncScript::TruncateDescTable(void)

{
  char cVar1;
  MySQL *this;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this,"trUncate table charac_action_point_desc");
  cVar1 = MySQL::exec(this,true);
  return cVar1 == '\x01';
}

```

