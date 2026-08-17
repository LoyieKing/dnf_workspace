# WongWork__CSpecialMonsterDrop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _generateRandomItem

```asm
// === 08536882 WongWork::CSpecialMonsterDrop::_generateRandomItem  [0x08536882-0x8536da7] ===
 8536882:	55                   	push   %ebp
 8536883:	89 e5                	mov    %esp,%ebp
 8536885:	57                   	push   %edi
 8536886:	56                   	push   %esi
 8536887:	53                   	push   %ebx
 8536888:	81 ec 1c 02 00 00    	sub    $0x21c,%esp
 853688e:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8536891:	8b 75 10             	mov    0x10(%ebp),%esi
 8536894:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8536897:	8b 4d 18             	mov    0x18(%ebp),%ecx
 853689a:	8b 55 1c             	mov    0x1c(%ebp),%edx
 853689d:	8b 45 24             	mov    0x24(%ebp),%eax
 85368a0:	89 85 14 fe ff ff    	mov    %eax,-0x1ec(%ebp)
 85368a6:	89 f8                	mov    %edi,%eax
 85368a8:	88 85 34 fe ff ff    	mov    %al,-0x1cc(%ebp)
 85368ae:	89 f0                	mov    %esi,%eax
 85368b0:	88 85 30 fe ff ff    	mov    %al,-0x1d0(%ebp)
 85368b6:	88 9d 2c fe ff ff    	mov    %bl,-0x1d4(%ebp)
 85368bc:	88 8d 28 fe ff ff    	mov    %cl,-0x1d8(%ebp)
 85368c2:	88 95 24 fe ff ff    	mov    %dl,-0x1dc(%ebp)
 85368c8:	0f b6 8d 14 fe ff ff 	movzbl -0x1ec(%ebp),%ecx
 85368cf:	88 8d 20 fe ff ff    	mov    %cl,-0x1e0(%ebp)
 85368d5:	0f b6 85 2c fe ff ff 	movzbl -0x1d4(%ebp),%eax
 85368dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85368e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85368e3:	89 04 24             	mov    %eax,(%esp)
 85368e6:	e8 83 0a 00 00       	call   853736e <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi>
 85368eb:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85368ee:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 85368f2:	0f 88 a3 04 00 00    	js     8536d9b <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x519>
 85368f8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85368fb:	8b 55 08             	mov    0x8(%ebp),%edx
 85368fe:	83 c2 24             	add    $0x24,%edx
 8536901:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536905:	89 14 24             	mov    %edx,(%esp)
 8536908:	e8 e7 4c 00 00       	call   853b5f4 <_ZNSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 853690d:	8b 10                	mov    (%eax),%edx
 853690f:	89 55 9c             	mov    %edx,-0x64(%ebp)
 8536912:	8b 50 04             	mov    0x4(%eax),%edx
 8536915:	89 55 a0             	mov    %edx,-0x60(%ebp)
 8536918:	8b 50 08             	mov    0x8(%eax),%edx
 853691b:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 853691e:	8b 50 0c             	mov    0xc(%eax),%edx
 8536921:	89 55 a8             	mov    %edx,-0x58(%ebp)
 8536924:	8b 50 10             	mov    0x10(%eax),%edx
 8536927:	89 55 ac             	mov    %edx,-0x54(%ebp)
 853692a:	8b 50 14             	mov    0x14(%eax),%edx
 853692d:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8536930:	8b 40 18             	mov    0x18(%eax),%eax
 8536933:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8536936:	80 ad 24 fe ff ff 01 	subb   $0x1,-0x1dc(%ebp)
 853693d:	c7 45 bc 01 00 00 00 	movl   $0x1,-0x44(%ebp)
 8536944:	e9 41 04 00 00       	jmp    8536d8a <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x508>
 8536949:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 853694e:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8536951:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8536954:	b9 00 00 00 00       	mov    $0x0,%ecx
 8536959:	b8 18 00 00 00       	mov    $0x18,%eax
 853695e:	89 c3                	mov    %eax,%ebx
 8536960:	83 e3 fc             	and    $0xfffffffc,%ebx
 8536963:	b8 00 00 00 00       	mov    $0x0,%eax
 8536968:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 853696b:	83 c0 04             	add    $0x4,%eax
 853696e:	39 d8                	cmp    %ebx,%eax
 8536970:	72 f6                	jb     8536968 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0xe6>
 8536972:	01 c2                	add    %eax,%edx
 8536974:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8536977:	89 d0                	mov    %edx,%eax
 8536979:	01 c0                	add    %eax,%eax
 853697b:	01 d0                	add    %edx,%eax
 853697d:	c1 e0 03             	shl    $0x3,%eax
 8536980:	83 c0 30             	add    $0x30,%eax
 8536983:	03 45 08             	add    0x8(%ebp),%eax
 8536986:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8536989:	83 7d bc 02          	cmpl   $0x2,-0x44(%ebp)
 853698d:	0f 85 8d 00 00 00    	jne    8536a20 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x19e>
 8536993:	e8 03 58 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536998:	89 04 24             	mov    %eax,(%esp)
 853699b:	e8 5c 29 fb ff       	call   84e92fc <_ZN12CDataManager30GetAutoMarketContitionsControlEv>
 85369a0:	8b 55 b8             	mov    -0x48(%ebp),%edx
 85369a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85369a7:	89 04 24             	mov    %eax,(%esp)
 85369aa:	e8 39 21 dc ff       	call   82f8ae8 <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi>
 85369af:	d9 5d c0             	fstps  -0x40(%ebp)
 85369b2:	d9 ee                	fldz
 85369b4:	dd 5d e0             	fstpl  -0x20(%ebp)
 85369b7:	d9 45 c0             	flds   -0x40(%ebp)
 85369ba:	d9 ee                	fldz
 85369bc:	d9 c9                	fxch   %st(1)
 85369be:	da e9                	fucompp
 85369c0:	df e0                	fnstsw %ax
 85369c2:	9e                   	sahf
 85369c3:	7a 02                	jp     85369c7 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x145>
 85369c5:	74 0c                	je     85369d3 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x151>
 85369c7:	d9 e8                	fld1
 85369c9:	d8 75 c0             	fdivs  -0x40(%ebp)
 85369cc:	d9 e8                	fld1
 85369ce:	de e9                	fsubrp %st,%st(1)
 85369d0:	dd 5d e0             	fstpl  -0x20(%ebp)
 85369d3:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85369d6:	89 d0                	mov    %edx,%eax
 85369d8:	01 c0                	add    %eax,%eax
 85369da:	01 d0                	add    %edx,%eax
 85369dc:	c1 e0 03             	shl    $0x3,%eax
 85369df:	83 c0 30             	add    $0x30,%eax
 85369e2:	03 45 08             	add    0x8(%ebp),%eax
 85369e5:	89 c3                	mov    %eax,%ebx
 85369e7:	e8 af 57 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85369ec:	89 04 24             	mov    %eax,(%esp)
 85369ef:	e8 08 29 fb ff       	call   84e92fc <_ZN12CDataManager30GetAutoMarketContitionsControlEv>
 85369f4:	dd 45 e0             	fldl   -0x20(%ebp)
 85369f7:	dd 5c 24 10          	fstpl  0x10(%esp)
 85369fb:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 8536a02:	00 
 8536a03:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8536a06:	89 54 24 08          	mov    %edx,0x8(%esp)
 8536a0a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8536a0e:	89 04 24             	mov    %eax,(%esp)
 8536a11:	e8 76 22 dc ff       	call   82f8c8c <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id>
 8536a16:	84 c0                	test   %al,%al
 8536a18:	74 06                	je     8536a20 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x19e>
 8536a1a:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8536a1d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8536a20:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8536a23:	8b 44 85 a4          	mov    -0x5c(%ebp,%eax,4),%eax
 8536a27:	89 85 1c fe ff ff    	mov    %eax,-0x1e4(%ebp)
 8536a2d:	db 85 1c fe ff ff    	fildl  -0x1e4(%ebp)
 8536a33:	d8 4d c0             	fmuls  -0x40(%ebp)
 8536a36:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8536a39:	0f b6 9d 28 fe ff ff 	movzbl -0x1d8(%ebp),%ebx
 8536a40:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8536a43:	89 d0                	mov    %edx,%eax
 8536a45:	c1 e0 02             	shl    $0x2,%eax
 8536a48:	01 d0                	add    %edx,%eax
 8536a4a:	01 d8                	add    %ebx,%eax
 8536a4c:	83 c0 3c             	add    $0x3c,%eax
 8536a4f:	d9 44 81 08          	flds   0x8(%ecx,%eax,4)
 8536a53:	de c9                	fmulp  %st,%st(1)
 8536a55:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 8536a58:	0f be 95 30 fe ff ff 	movsbl -0x1d0(%ebp),%edx
 8536a5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8536a62:	c1 e1 02             	shl    $0x2,%ecx
 8536a65:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8536a68:	83 c2 54             	add    $0x54,%edx
 8536a6b:	d9 44 90 0c          	flds   0xc(%eax,%edx,4)
 8536a6f:	de c9                	fmulp  %st,%st(1)
 8536a71:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 8536a74:	0f b6 95 24 fe ff ff 	movzbl -0x1dc(%ebp),%edx
 8536a7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8536a7e:	c1 e1 02             	shl    $0x2,%ecx
 8536a81:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8536a84:	83 c2 28             	add    $0x28,%edx
 8536a87:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 8536a8b:	de c9                	fmulp  %st,%st(1)
 8536a8d:	d9 bd 1a fe ff ff    	fnstcw -0x1e6(%ebp)
 8536a93:	0f b7 85 1a fe ff ff 	movzwl -0x1e6(%ebp),%eax
 8536a9a:	b4 0c                	mov    $0xc,%ah
 8536a9c:	66 89 85 18 fe ff ff 	mov    %ax,-0x1e8(%ebp)
 8536aa3:	d9 ad 18 fe ff ff    	fldcw  -0x1e8(%ebp)
 8536aa9:	db 5d c8             	fistpl -0x38(%ebp)
 8536aac:	d9 ad 1a fe ff ff    	fldcw  -0x1e6(%ebp)
 8536ab2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8536ab5:	89 c1                	mov    %eax,%ecx
 8536ab7:	0f af 4d 28          	imul   0x28(%ebp),%ecx
 8536abb:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8536ac0:	89 c8                	mov    %ecx,%eax
 8536ac2:	f7 ea                	imul   %edx
 8536ac4:	c1 fa 05             	sar    $0x5,%edx
 8536ac7:	89 c8                	mov    %ecx,%eax
 8536ac9:	c1 f8 1f             	sar    $0x1f,%eax
 8536acc:	89 d1                	mov    %edx,%ecx
 8536ace:	29 c1                	sub    %eax,%ecx
 8536ad0:	89 c8                	mov    %ecx,%eax
 8536ad2:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8536ad5:	8b 45 08             	mov    0x8(%ebp),%eax
 8536ad8:	83 c0 08             	add    $0x8,%eax
 8536adb:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 8536ae2:	00 
 8536ae3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8536aea:	00 
 8536aeb:	89 04 24             	mov    %eax,(%esp)
 8536aee:	e8 b1 c9 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8536af3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8536af6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8536af9:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 8536afc:	0f 8c 7d 02 00 00    	jl     8536d7f <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x4fd>
 8536b02:	8b 45 08             	mov    0x8(%ebp),%eax
 8536b05:	83 c0 08             	add    $0x8,%eax
 8536b08:	c7 44 24 08 40 42 0f 	movl   $0xf4240,0x8(%esp)
 8536b0f:	00 
 8536b10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8536b17:	00 
 8536b18:	89 04 24             	mov    %eax,(%esp)
 8536b1b:	e8 84 c9 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8536b20:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8536b23:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8536b26:	8d 50 0c             	lea    0xc(%eax),%edx
 8536b29:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8536b2c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8536b30:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8536b33:	89 44 24 08          	mov    %eax,0x8(%esp)
 8536b37:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8536b3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536b3e:	89 14 24             	mov    %edx,(%esp)
 8536b41:	e8 9e a0 01 00       	call   8550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>
 8536b46:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8536b49:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 8536b4c:	e8 4a 56 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536b51:	89 04 24             	mov    %eax,(%esp)
 8536b54:	e8 91 3b c1 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 8536b59:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8536b5c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8536b60:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8536b64:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8536b6b:	00 
 8536b6c:	89 04 24             	mov    %eax,(%esp)
 8536b6f:	e8 52 d7 ff ff       	call   85342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>
 8536b74:	0f b6 9d 20 fe ff ff 	movzbl -0x1e0(%ebp),%ebx
 8536b7b:	0f b6 8d 28 fe ff ff 	movzbl -0x1d8(%ebp),%ecx
 8536b82:	0f b6 95 34 fe ff ff 	movzbl -0x1cc(%ebp),%edx
 8536b89:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8536b8c:	8b 75 08             	mov    0x8(%ebp),%esi
 8536b8f:	81 c6 40 03 00 00    	add    $0x340,%esi
 8536b95:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8536b99:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8536b9d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8536ba1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8536ba4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8536ba8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536bac:	89 34 24             	mov    %esi,(%esp)
 8536baf:	e8 1a e4 ff ff       	call   8534fce <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE>
 8536bb4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8536bb7:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 8536bbb:	0f 84 c1 01 00 00    	je     8536d82 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x500>
 8536bc1:	e8 d5 55 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536bc6:	8b 40 0c             	mov    0xc(%eax),%eax
 8536bc9:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8536bcc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8536bd0:	89 04 24             	mov    %eax,(%esp)
 8536bd3:	e8 b2 b2 fd ff       	call   8511e8a <_ZN9CItemList9find_itemEi>
 8536bd8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8536bdb:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8536bdf:	0f 84 a0 01 00 00    	je     8536d85 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x503>
 8536be5:	83 7d bc 02          	cmpl   $0x2,-0x44(%ebp)
 8536be9:	0f 85 e3 00 00 00    	jne    8536cd2 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x450>
 8536bef:	8d 95 47 fe ff ff    	lea    -0x1b9(%ebp),%edx
 8536bf5:	bb 00 01 00 00       	mov    $0x100,%ebx
 8536bfa:	b8 00 00 00 00       	mov    $0x0,%eax
 8536bff:	89 d1                	mov    %edx,%ecx
 8536c01:	83 e1 01             	and    $0x1,%ecx
 8536c04:	85 c9                	test   %ecx,%ecx
 8536c06:	74 08                	je     8536c10 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x38e>
 8536c08:	88 02                	mov    %al,(%edx)
 8536c0a:	83 c2 01             	add    $0x1,%edx
 8536c0d:	83 eb 01             	sub    $0x1,%ebx
 8536c10:	89 d1                	mov    %edx,%ecx
 8536c12:	83 e1 02             	and    $0x2,%ecx
 8536c15:	85 c9                	test   %ecx,%ecx
 8536c17:	74 09                	je     8536c22 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x3a0>
 8536c19:	66 89 02             	mov    %ax,(%edx)
 8536c1c:	83 c2 02             	add    $0x2,%edx
 8536c1f:	83 eb 02             	sub    $0x2,%ebx
 8536c22:	89 d9                	mov    %ebx,%ecx
 8536c24:	c1 e9 02             	shr    $0x2,%ecx
 8536c27:	89 d7                	mov    %edx,%edi
 8536c29:	f3 ab                	rep stos %eax,%es:(%edi)
 8536c2b:	89 fa                	mov    %edi,%edx
 8536c2d:	89 d9                	mov    %ebx,%ecx
 8536c2f:	83 e1 02             	and    $0x2,%ecx
 8536c32:	85 c9                	test   %ecx,%ecx
 8536c34:	74 06                	je     8536c3c <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x3ba>
 8536c36:	66 89 02             	mov    %ax,(%edx)
 8536c39:	83 c2 02             	add    $0x2,%edx
 8536c3c:	89 d9                	mov    %ebx,%ecx
 8536c3e:	83 e1 01             	and    $0x1,%ecx
 8536c41:	85 c9                	test   %ecx,%ecx
 8536c43:	74 05                	je     8536c4a <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x3c8>
 8536c45:	88 02                	mov    %al,(%edx)
 8536c47:	83 c2 01             	add    $0x1,%edx
 8536c4a:	0f b6 b5 24 fe ff ff 	movzbl -0x1dc(%ebp),%esi
 8536c51:	0f b6 9d 28 fe ff ff 	movzbl -0x1d8(%ebp),%ebx
 8536c58:	0f b6 8d 2c fe ff ff 	movzbl -0x1d4(%ebp),%ecx
 8536c5f:	0f be 95 30 fe ff ff 	movsbl -0x1d0(%ebp),%edx
 8536c66:	0f b6 85 34 fe ff ff 	movzbl -0x1cc(%ebp),%eax
 8536c6d:	8b 7d c8             	mov    -0x38(%ebp),%edi
 8536c70:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 8536c74:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8536c77:	89 7c 24 28          	mov    %edi,0x28(%esp)
 8536c7b:	8b 7d 28             	mov    0x28(%ebp),%edi
 8536c7e:	89 7c 24 24          	mov    %edi,0x24(%esp)
 8536c82:	8b 7d 20             	mov    0x20(%ebp),%edi
 8536c85:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8536c89:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8536c8d:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8536c91:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8536c95:	89 54 24 10          	mov    %edx,0x10(%esp)
 8536c99:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8536c9d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8536ca0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8536ca4:	c7 44 24 04 bc 96 c9 	movl   $0x8c996bc,0x4(%esp)
 8536cab:	08 
 8536cac:	8d 85 47 fe ff ff    	lea    -0x1b9(%ebp),%eax
 8536cb2:	89 04 24             	mov    %eax,(%esp)
 8536cb5:	e8 86 77 b4 ff       	call   807e440 <sprintf@plt>
 8536cba:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8536cbd:	8d 50 0c             	lea    0xc(%eax),%edx
 8536cc0:	8d 85 47 fe ff ff    	lea    -0x1b9(%ebp),%eax
 8536cc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536cca:	89 14 24             	mov    %edx,(%esp)
 8536ccd:	e8 1e a2 01 00       	call   8550ef0 <_ZN10CLuckPoint16sendItemDropRateEPKc>
 8536cd2:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 8536cd8:	89 04 24             	mov    %eax,(%esp)
 8536cdb:	e8 74 4b b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8536ce0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8536ce3:	89 85 49 ff ff ff    	mov    %eax,-0xb7(%ebp)
 8536ce9:	e8 ad 54 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8536cee:	8b 40 0c             	mov    0xc(%eax),%eax
 8536cf1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8536cf8:	00 
 8536cf9:	8d 95 47 ff ff ff    	lea    -0xb9(%ebp),%edx
 8536cff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8536d03:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8536d0a:	00 
 8536d0b:	89 04 24             	mov    %eax,(%esp)
 8536d0e:	e8 a5 b2 fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8536d13:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8536d16:	89 04 24             	mov    %eax,(%esp)
 8536d19:	e8 40 39 c4 ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 8536d1e:	89 c6                	mov    %eax,%esi
 8536d20:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8536d23:	89 04 24             	mov    %eax,(%esp)
 8536d26:	e8 29 9f bd ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 8536d2b:	89 c3                	mov    %eax,%ebx
 8536d2d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8536d30:	89 04 24             	mov    %eax,(%esp)
 8536d33:	e8 9e a5 bb ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8536d38:	89 c2                	mov    %eax,%edx
 8536d3a:	0f b6 85 48 ff ff ff 	movzbl -0xb8(%ebp),%eax
 8536d41:	0f b6 c0             	movzbl %al,%eax
 8536d44:	8b 4d 2c             	mov    0x2c(%ebp),%ecx
 8536d47:	83 c1 0c             	add    $0xc,%ecx
 8536d4a:	89 74 24 10          	mov    %esi,0x10(%esp)
 8536d4e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8536d52:	89 54 24 08          	mov    %edx,0x8(%esp)
 8536d56:	89 44 24 04          	mov    %eax,0x4(%esp)
 8536d5a:	89 0c 24             	mov    %ecx,(%esp)
 8536d5d:	e8 b2 9d 01 00       	call   8550b14 <_ZN10CLuckPoint12UseLuckPointEiiii>
 8536d62:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8536d65:	8d 95 47 ff ff ff    	lea    -0xb9(%ebp),%edx
 8536d6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8536d6f:	89 04 24             	mov    %eax,(%esp)
 8536d72:	e8 eb 04 d0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8536d77:	8b 45 30             	mov    0x30(%ebp),%eax
 8536d7a:	c6 00 01             	movb   $0x1,(%eax)
 8536d7d:	eb 07                	jmp    8536d86 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x504>
 8536d7f:	90                   	nop
 8536d80:	eb 04                	jmp    8536d86 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x504>
 8536d82:	90                   	nop
 8536d83:	eb 01                	jmp    8536d86 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x504>
 8536d85:	90                   	nop
 8536d86:	83 45 bc 01          	addl   $0x1,-0x44(%ebp)
 8536d8a:	83 7d bc 04          	cmpl   $0x4,-0x44(%ebp)
 8536d8e:	0f 9e c0             	setle  %al
 8536d91:	84 c0                	test   %al,%al
 8536d93:	0f 85 b0 fb ff ff    	jne    8536949 <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0xc7>
 8536d99:	eb 01                	jmp    8536d9c <_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb+0x51a>
 8536d9b:	90                   	nop
 8536d9c:	81 c4 1c 02 00 00    	add    $0x21c,%esp
 8536da2:	5b                   	pop    %ebx
 8536da3:	5e                   	pop    %esi
 8536da4:	5f                   	pop    %edi
 8536da5:	5d                   	pop    %ebp
 8536da6:	c3                   	ret
 8536da7:	90                   	nop

```

```c
// WongWork::CSpecialMonsterDrop::_generateRandomItem @ 0x8536882

/* WongWork::CSpecialMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned
   char, unsigned char, int, unsigned char, int, WongWork::stGenerateResult_t&, bool&) */

void __thiscall
WongWork::CSpecialMonsterDrop::_generateRandomItem
          (CSpecialMonsterDrop *this,uchar param_1,char param_2,uchar param_3,uchar param_4,
          uchar param_5,int param_6,uchar param_7,int param_8,stGenerateResult_t *param_9,
          bool *param_10)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  CDataManager *pCVar4;
  CAutoMarketConditionsControl *this_00;
  int iVar5;
  int *piVar6;
  CItemGeneratorMgr *pCVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  longdouble lVar13;
  char local_1bd;
  char local_1bc [255];
  Inven_Item local_bd;
  byte local_bc;
  int local_bb;
  CSpecialMonsterDrop local_80 [24];
  undefined4 local_68;
  undefined4 local_64;
  int local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int local_48;
  float local_44;
  CSpecialMonsterDrop *local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  CItem *local_28;
  double local_24;
  
  bVar12 = 0;
  local_4c = _getGenItemProbIdx(this,(uint)param_3);
  if (-1 < (int)local_4c) {
    puVar2 = (undefined4 *)
             std::
             vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
             ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                           *)(this + 0x24),local_4c);
    local_68 = *puVar2;
    local_64 = puVar2[1];
    local_60[0] = puVar2[2];
    local_60[1] = puVar2[3];
    local_60[2] = puVar2[4];
    local_60[3] = puVar2[5];
    local_50 = puVar2[6];
    for (local_48 = 1; local_48 < 5; local_48 = local_48 + 1) {
      local_44 = 1.0;
      uVar3 = 0;
      do {
        *(undefined4 *)(local_80 + uVar3) = 0;
        uVar3 = uVar3 + 4;
      } while (uVar3 < 0x18);
      local_40 = this + local_48 * 0x18 + 0x30;
      if (local_48 == 2) {
        pCVar4 = (CDataManager *)G_CDataManager();
        this_00 = (CAutoMarketConditionsControl *)
                  CDataManager::GetAutoMarketContitionsControl(pCVar4);
        lVar13 = (longdouble)CAutoMarketConditionsControl::GetItemDropRate(this_00,local_4c);
        local_44 = (float)lVar13;
        local_24 = 0.0;
        if (local_44 != 0.0) {
          local_24 = (double)(1.0 / local_44 - 1.0);
        }
        iVar5 = local_48 * 0x18;
        pCVar4 = (CDataManager *)G_CDataManager();
        piVar6 = (int *)CDataManager::GetAutoMarketContitionsControl(pCVar4);
        cVar1 = CAutoMarketConditionsControl::ChangeItemRarity
                          (piVar6,(int *)(this + iVar5 + 0x30),(int)local_80,
                           (double)CONCAT44(SUB84(local_24,0),6));
        if (cVar1 != '\0') {
          local_40 = local_80;
        }
      }
      local_3c = ((int)ROUND(*(float *)(this + (local_48 * 4 + (uint)(byte)(param_5 - 1) + 0x28) * 4
                                               + 8) *
                             *(float *)(this + (local_48 * 4 + (int)param_2 + 0x54) * 4 + 0xc) *
                             *(float *)(this + (local_48 * 5 + (uint)param_4 + 0x3c) * 4 + 8) *
                             (float)local_60[local_48] * local_44) * param_8) / 100;
      local_38 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,10000);
      if (local_38 <= local_3c) {
        local_34 = CGenerateRandomNumber::generateNumber
                             ((CGenerateRandomNumber *)(this + 8),1,1000000);
        local_30 = CLuckPoint::GetItemRarity
                             ((CLuckPoint *)(param_9 + 0xc),(int *)local_40,local_34,local_48);
        iVar5 = local_48;
        pCVar4 = (CDataManager *)G_CDataManager();
        pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar4);
        CItemGeneratorMgr::onTryGenerateRandomItem(pCVar7,0,iVar5,local_30);
        local_2c = CSecialIMonsterDropItemGenRateTable::chooseItem
                             ((CSecialIMonsterDropItemGenRateTable *)(this + 0x340),local_48,
                              local_30,param_1,param_4,param_7);
        if (local_2c != -1) {
          iVar5 = G_CDataManager();
          local_28 = (CItem *)CItemList::find_item(*(CItemList **)(iVar5 + 0xc),local_2c);
          if (local_28 != (CItem *)0x0) {
            if (local_48 == 2) {
              pcVar10 = &local_1bd;
              uVar3 = 0x100;
              bVar11 = ((uint)pcVar10 & 1) != 0;
              if (bVar11) {
                local_1bd = '\0';
                pcVar10 = local_1bc;
                uVar3 = 0xff;
              }
              if (((uint)pcVar10 & 2) != 0) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10 = pcVar10 + 2;
                uVar3 = uVar3 - 2;
              }
              for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10[2] = '\0';
                pcVar10[3] = '\0';
                pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
              }
              if ((uVar3 & 2) != 0) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10 = pcVar10 + 2;
              }
              if (bVar11) {
                *pcVar10 = '\0';
              }
              sprintf(&local_1bd,
                      "special monster drop rate : item_id(%d), mon_lv(%d), role(%d), dungeon_lv(%d), dungeon_diff(%d), member_cnt(%d), bourgeois_rate(%d), drop_rate(%d), rand_value(%d), drop_value(%d)"
                      ,local_2c,(uint)param_1,(int)param_2,(uint)param_3,(uint)param_4,
                      (uint)(byte)(param_5 - 1),param_6,param_8,local_38,local_3c);
              CLuckPoint::sendItemDropRate((CLuckPoint *)(param_9 + 0xc),&local_1bd);
            }
            Inven_Item::Inven_Item(&local_bd);
            local_bb = local_2c;
            iVar5 = G_CDataManager();
            CItemList::create_item(*(CItemList **)(iVar5 + 0xc),1,&local_bd,1);
            std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_9);
            iVar5 = CItem::get_grade(local_28);
            iVar8 = CItem::get_rarity(local_28);
            CLuckPoint::UseLuckPoint((int)(param_9 + 0xc),(uint)local_bc,iVar8,iVar5);
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_9,&local_bd);
            *param_10 = true;
          }
        }
      }
    }
  }
  return;
}

```

---

## _getGenItemProbIdx

```asm
// === 0853736e WongWork::CSpecialMonsterDrop::_getGenItemProbIdx  [0x0853736e-0x85373ed] ===
 853736e:	55                   	push   %ebp
 853736f:	89 e5                	mov    %esp,%ebp
 8537371:	83 ec 28             	sub    $0x28,%esp
 8537374:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 853737b:	eb 31                	jmp    85373ae <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi+0x40>
 853737d:	8b 45 08             	mov    0x8(%ebp),%eax
 8537380:	8d 50 24             	lea    0x24(%eax),%edx
 8537383:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8537386:	89 44 24 04          	mov    %eax,0x4(%esp)
 853738a:	89 14 24             	mov    %edx,(%esp)
 853738d:	e8 62 42 00 00       	call   853b5f4 <_ZNSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 8537392:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8537395:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8537398:	8b 00                	mov    (%eax),%eax
 853739a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 853739d:	7f 0b                	jg     85373aa <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi+0x3c>
 853739f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85373a2:	8b 40 04             	mov    0x4(%eax),%eax
 85373a5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85373a8:	7d 1e                	jge    85373c8 <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi+0x5a>
 85373aa:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85373ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85373b1:	83 c0 24             	add    $0x24,%eax
 85373b4:	89 04 24             	mov    %eax,(%esp)
 85373b7:	e8 16 42 00 00       	call   853b5d2 <_ZNKSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 85373bc:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85373bf:	0f 97 c0             	seta   %al
 85373c2:	84 c0                	test   %al,%al
 85373c4:	75 b7                	jne    853737d <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi+0xf>
 85373c6:	eb 01                	jmp    85373c9 <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi+0x5b>
 85373c8:	90                   	nop
 85373c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85373cc:	83 c0 24             	add    $0x24,%eax
 85373cf:	89 04 24             	mov    %eax,(%esp)
 85373d2:	e8 fb 41 00 00       	call   853b5d2 <_ZNKSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 85373d7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85373da:	0f 96 c0             	setbe  %al
 85373dd:	84 c0                	test   %al,%al
 85373df:	74 07                	je     85373e8 <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi+0x7a>
 85373e1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85373e6:	eb 03                	jmp    85373eb <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi+0x7d>
 85373e8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85373eb:	c9                   	leave
 85373ec:	c3                   	ret
 85373ed:	90                   	nop

```

```c
// WongWork::CSpecialMonsterDrop::_getGenItemProbIdx @ 0x853736e

/* WongWork::CSpecialMonsterDrop::_getGenItemProbIdx(int) */

uint __thiscall
WongWork::CSpecialMonsterDrop::_getGenItemProbIdx(CSpecialMonsterDrop *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                  ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                                         *)(this + 0x24),local_14), param_1 < *piVar1 ||
          (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
          ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                  *)(this + 0x24));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}

```

---

## loadScript

```asm
// === 085373ee WongWork::CSpecialMonsterDrop::loadScript  [0x085373ee-0x8537937] ===
 85373ee:	55                   	push   %ebp
 85373ef:	89 e5                	mov    %esp,%ebp
 85373f1:	56                   	push   %esi
 85373f2:	53                   	push   %ebx
 85373f3:	81 ec 90 00 00 00    	sub    $0x90,%esp
 85373f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85373fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8537400:	c7 04 24 00 95 c9 08 	movl   $0x8c99500,(%esp)
 8537407:	e8 1d 49 38 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 853740c:	83 f0 01             	xor    $0x1,%eax
 853740f:	84 c0                	test   %al,%al
 8537411:	74 0a                	je     853741d <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x2f>
 8537413:	bb fb 05 00 00       	mov    $0x5fb,%ebx
 8537418:	e9 0f 05 00 00       	jmp    853792c <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x53e>
 853741d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8537420:	89 04 24             	mov    %eax,(%esp)
 8537423:	e8 a8 f1 1c 00       	call   87065d0 <_ZNSsC1Ev>
 8537428:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 853742f:	c6 45 a3 00          	movb   $0x0,-0x5d(%ebp)
 8537433:	eb 01                	jmp    8537436 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x48>
 8537435:	90                   	nop
 8537436:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 853743d:	00 
 853743e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8537441:	89 04 24             	mov    %eax,(%esp)
 8537444:	e8 16 54 38 00       	call   88bc85f <_Z8ScanTypeRSsb>
 8537449:	83 f0 01             	xor    $0x1,%eax
 853744c:	84 c0                	test   %al,%al
 853744e:	0f 85 8d 04 00 00    	jne    85378e1 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x4f3>
 8537454:	c7 44 24 04 c5 95 c9 	movl   $0x8c995c5,0x4(%esp)
 853745b:	08 
 853745c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 853745f:	89 04 24             	mov    %eax,(%esp)
 8537462:	e8 3a 95 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537467:	84 c0                	test   %al,%al
 8537469:	0f 84 8a 00 00 00    	je     85374f9 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x10b>
 853746f:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8537472:	b9 00 00 00 00       	mov    $0x0,%ecx
 8537477:	b8 1c 00 00 00       	mov    $0x1c,%eax
 853747c:	89 c3                	mov    %eax,%ebx
 853747e:	83 e3 fc             	and    $0xfffffffc,%ebx
 8537481:	b8 00 00 00 00       	mov    $0x0,%eax
 8537486:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 8537489:	83 c0 04             	add    $0x4,%eax
 853748c:	39 d8                	cmp    %ebx,%eax
 853748e:	72 f6                	jb     8537486 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x98>
 8537490:	01 c2                	add    %eax,%edx
 8537492:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8537495:	89 04 24             	mov    %eax,(%esp)
 8537498:	e8 de 4e 38 00       	call   88bc37b <_Z7ScanIntPb>
 853749d:	8b 55 08             	mov    0x8(%ebp),%edx
 85374a0:	8d 4a 18             	lea    0x18(%edx),%ecx
 85374a3:	8b 55 a8             	mov    -0x58(%ebp),%edx
 85374a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85374aa:	8b 55 ac             	mov    -0x54(%ebp),%edx
 85374ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85374b1:	8b 55 b0             	mov    -0x50(%ebp),%edx
 85374b4:	89 54 24 10          	mov    %edx,0x10(%esp)
 85374b8:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 85374bb:	89 54 24 14          	mov    %edx,0x14(%esp)
 85374bf:	8b 55 b8             	mov    -0x48(%ebp),%edx
 85374c2:	89 54 24 18          	mov    %edx,0x18(%esp)
 85374c6:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85374c9:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85374cd:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85374d0:	89 54 24 20          	mov    %edx,0x20(%esp)
 85374d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85374d8:	89 0c 24             	mov    %ecx,(%esp)
 85374db:	e8 84 44 00 00       	call   853b964 <_ZNSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EE6resizeEjS2_>
 85374e0:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 85374e4:	83 f0 01             	xor    $0x1,%eax
 85374e7:	84 c0                	test   %al,%al
 85374e9:	0f 84 46 ff ff ff    	je     8537435 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x47>
 85374ef:	bb 09 06 00 00       	mov    $0x609,%ebx
 85374f4:	e9 28 04 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 85374f9:	c7 44 24 04 6f 97 c9 	movl   $0x8c9976f,0x4(%esp)
 8537500:	08 
 8537501:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8537504:	89 04 24             	mov    %eax,(%esp)
 8537507:	e8 95 94 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853750c:	84 c0                	test   %al,%al
 853750e:	0f 84 d6 00 00 00    	je     85375ea <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x1fc>
 8537514:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 853751b:	e9 a9 00 00 00       	jmp    85375c9 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x1db>
 8537520:	8b 45 08             	mov    0x8(%ebp),%eax
 8537523:	8d 50 18             	lea    0x18(%eax),%edx
 8537526:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8537529:	89 44 24 04          	mov    %eax,0x4(%esp)
 853752d:	89 14 24             	mov    %edx,(%esp)
 8537530:	e8 bf 40 00 00       	call   853b5f4 <_ZNSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 8537535:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8537538:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 853753b:	89 04 24             	mov    %eax,(%esp)
 853753e:	e8 38 4e 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537543:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8537546:	89 02                	mov    %eax,(%edx)
 8537548:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 853754c:	83 f0 01             	xor    $0x1,%eax
 853754f:	84 c0                	test   %al,%al
 8537551:	74 0a                	je     853755d <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x16f>
 8537553:	bb 11 06 00 00       	mov    $0x611,%ebx
 8537558:	e9 c4 03 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 853755d:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8537560:	89 04 24             	mov    %eax,(%esp)
 8537563:	e8 13 4e 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537568:	8b 55 cc             	mov    -0x34(%ebp),%edx
 853756b:	89 42 04             	mov    %eax,0x4(%edx)
 853756e:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 8537572:	83 f0 01             	xor    $0x1,%eax
 8537575:	84 c0                	test   %al,%al
 8537577:	74 0a                	je     8537583 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x195>
 8537579:	bb 13 06 00 00       	mov    $0x613,%ebx
 853757e:	e9 9e 03 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 8537583:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 853758a:	eb 2e                	jmp    85375ba <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x1cc>
 853758c:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 853758f:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8537592:	89 04 24             	mov    %eax,(%esp)
 8537595:	e8 e1 4d 38 00       	call   88bc37b <_Z7ScanIntPb>
 853759a:	8b 55 cc             	mov    -0x34(%ebp),%edx
 853759d:	89 44 9a 08          	mov    %eax,0x8(%edx,%ebx,4)
 85375a1:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 85375a5:	83 f0 01             	xor    $0x1,%eax
 85375a8:	84 c0                	test   %al,%al
 85375aa:	74 0a                	je     85375b6 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x1c8>
 85375ac:	bb 17 06 00 00       	mov    $0x617,%ebx
 85375b1:	e9 6b 03 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 85375b6:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 85375ba:	83 7d d0 04          	cmpl   $0x4,-0x30(%ebp)
 85375be:	0f 9e c0             	setle  %al
 85375c1:	84 c0                	test   %al,%al
 85375c3:	75 c7                	jne    853758c <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x19e>
 85375c5:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 85375c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85375cc:	83 c0 18             	add    $0x18,%eax
 85375cf:	89 04 24             	mov    %eax,(%esp)
 85375d2:	e8 fb 3f 00 00       	call   853b5d2 <_ZNKSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 85375d7:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 85375da:	0f 97 c0             	seta   %al
 85375dd:	84 c0                	test   %al,%al
 85375df:	0f 85 3b ff ff ff    	jne    8537520 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x132>
 85375e5:	e9 4c fe ff ff       	jmp    8537436 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x48>
 85375ea:	c7 44 24 04 aa 95 c9 	movl   $0x8c995aa,0x4(%esp)
 85375f1:	08 
 85375f2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85375f5:	89 04 24             	mov    %eax,(%esp)
 85375f8:	e8 a4 93 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85375fd:	84 c0                	test   %al,%al
 85375ff:	74 70                	je     8537671 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x283>
 8537601:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 8537608:	eb 57                	jmp    8537661 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x273>
 853760a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8537611:	eb 3f                	jmp    8537652 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x264>
 8537613:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8537616:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8537619:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 853761c:	89 04 24             	mov    %eax,(%esp)
 853761f:	e8 57 4d 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537624:	89 c2                	mov    %eax,%edx
 8537626:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8537629:	89 d8                	mov    %ebx,%eax
 853762b:	01 c0                	add    %eax,%eax
 853762d:	01 d8                	add    %ebx,%eax
 853762f:	01 c0                	add    %eax,%eax
 8537631:	01 f0                	add    %esi,%eax
 8537633:	83 c0 0c             	add    $0xc,%eax
 8537636:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 8537639:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 853763d:	83 f0 01             	xor    $0x1,%eax
 8537640:	84 c0                	test   %al,%al
 8537642:	74 0a                	je     853764e <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x260>
 8537644:	bb 23 06 00 00       	mov    $0x623,%ebx
 8537649:	e9 d3 02 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 853764e:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8537652:	83 7d d8 05          	cmpl   $0x5,-0x28(%ebp)
 8537656:	0f 9e c0             	setle  %al
 8537659:	84 c0                	test   %al,%al
 853765b:	75 b6                	jne    8537613 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x225>
 853765d:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8537661:	83 7d d4 04          	cmpl   $0x4,-0x2c(%ebp)
 8537665:	0f 9e c0             	setle  %al
 8537668:	84 c0                	test   %al,%al
 853766a:	75 9e                	jne    853760a <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x21c>
 853766c:	e9 c5 fd ff ff       	jmp    8537436 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x48>
 8537671:	c7 44 24 04 7b 97 c9 	movl   $0x8c9977b,0x4(%esp)
 8537678:	08 
 8537679:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 853767c:	89 04 24             	mov    %eax,(%esp)
 853767f:	e8 1d 93 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537684:	84 c0                	test   %al,%al
 8537686:	74 6e                	je     85376f6 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x308>
 8537688:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 853768f:	eb 55                	jmp    85376e6 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x2f8>
 8537691:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8537698:	eb 3d                	jmp    85376d7 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x2e9>
 853769a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 853769d:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 85376a0:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 85376a3:	89 04 24             	mov    %eax,(%esp)
 85376a6:	e8 3a 4e 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 85376ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85376ae:	8d 14 b5 00 00 00 00 	lea    0x0(,%esi,4),%edx
 85376b5:	01 da                	add    %ebx,%edx
 85376b7:	83 c2 28             	add    $0x28,%edx
 85376ba:	d9 5c 90 08          	fstps  0x8(%eax,%edx,4)
 85376be:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 85376c2:	83 f0 01             	xor    $0x1,%eax
 85376c5:	84 c0                	test   %al,%al
 85376c7:	74 0a                	je     85376d3 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x2e5>
 85376c9:	bb 2e 06 00 00       	mov    $0x62e,%ebx
 85376ce:	e9 4e 02 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 85376d3:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85376d7:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 85376db:	0f 9e c0             	setle  %al
 85376de:	84 c0                	test   %al,%al
 85376e0:	75 b8                	jne    853769a <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x2ac>
 85376e2:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85376e6:	83 7d dc 04          	cmpl   $0x4,-0x24(%ebp)
 85376ea:	0f 9e c0             	setle  %al
 85376ed:	84 c0                	test   %al,%al
 85376ef:	75 a0                	jne    8537691 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x2a3>
 85376f1:	e9 40 fd ff ff       	jmp    8537436 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x48>
 85376f6:	c7 44 24 04 9c 97 c9 	movl   $0x8c9979c,0x4(%esp)
 85376fd:	08 
 85376fe:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8537701:	89 04 24             	mov    %eax,(%esp)
 8537704:	e8 98 92 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537709:	84 c0                	test   %al,%al
 853770b:	74 6e                	je     853777b <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x38d>
 853770d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8537714:	eb 55                	jmp    853776b <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x37d>
 8537716:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 853771d:	eb 3d                	jmp    853775c <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x36e>
 853771f:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8537722:	8b 75 e8             	mov    -0x18(%ebp),%esi
 8537725:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8537728:	89 04 24             	mov    %eax,(%esp)
 853772b:	e8 b5 4d 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 8537730:	8b 55 08             	mov    0x8(%ebp),%edx
 8537733:	89 d8                	mov    %ebx,%eax
 8537735:	c1 e0 02             	shl    $0x2,%eax
 8537738:	01 d8                	add    %ebx,%eax
 853773a:	01 f0                	add    %esi,%eax
 853773c:	83 c0 3c             	add    $0x3c,%eax
 853773f:	d9 5c 82 08          	fstps  0x8(%edx,%eax,4)
 8537743:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 8537747:	83 f0 01             	xor    $0x1,%eax
 853774a:	84 c0                	test   %al,%al
 853774c:	74 0a                	je     8537758 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x36a>
 853774e:	bb 3d 06 00 00       	mov    $0x63d,%ebx
 8537753:	e9 c9 01 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 8537758:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 853775c:	83 7d e8 04          	cmpl   $0x4,-0x18(%ebp)
 8537760:	0f 9e c0             	setle  %al
 8537763:	84 c0                	test   %al,%al
 8537765:	75 b8                	jne    853771f <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x331>
 8537767:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 853776b:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 853776f:	0f 9e c0             	setle  %al
 8537772:	84 c0                	test   %al,%al
 8537774:	75 a0                	jne    8537716 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x328>
 8537776:	e9 bb fc ff ff       	jmp    8537436 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x48>
 853777b:	c7 44 24 04 c0 97 c9 	movl   $0x8c997c0,0x4(%esp)
 8537782:	08 
 8537783:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8537786:	89 04 24             	mov    %eax,(%esp)
 8537789:	e8 13 92 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 853778e:	84 c0                	test   %al,%al
 8537790:	74 6e                	je     8537800 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x412>
 8537792:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8537799:	eb 55                	jmp    85377f0 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x402>
 853779b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85377a2:	eb 3d                	jmp    85377e1 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x3f3>
 85377a4:	8b 75 ec             	mov    -0x14(%ebp),%esi
 85377a7:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 85377aa:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 85377ad:	89 04 24             	mov    %eax,(%esp)
 85377b0:	e8 30 4d 38 00       	call   88bc4e5 <_Z9ScanFloatPb>
 85377b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85377b8:	8d 14 b5 00 00 00 00 	lea    0x0(,%esi,4),%edx
 85377bf:	01 da                	add    %ebx,%edx
 85377c1:	83 c2 54             	add    $0x54,%edx
 85377c4:	d9 5c 90 0c          	fstps  0xc(%eax,%edx,4)
 85377c8:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 85377cc:	83 f0 01             	xor    $0x1,%eax
 85377cf:	84 c0                	test   %al,%al
 85377d1:	74 0a                	je     85377dd <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x3ef>
 85377d3:	bb 48 06 00 00       	mov    $0x648,%ebx
 85377d8:	e9 44 01 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 85377dd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85377e1:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 85377e5:	0f 9e c0             	setle  %al
 85377e8:	84 c0                	test   %al,%al
 85377ea:	75 b8                	jne    85377a4 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x3b6>
 85377ec:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85377f0:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 85377f4:	0f 9e c0             	setle  %al
 85377f7:	84 c0                	test   %al,%al
 85377f9:	75 a0                	jne    853779b <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x3ad>
 85377fb:	e9 36 fc ff ff       	jmp    8537436 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x48>
 8537800:	c7 44 24 04 f7 95 c9 	movl   $0x8c995f7,0x4(%esp)
 8537807:	08 
 8537808:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 853780b:	89 04 24             	mov    %eax,(%esp)
 853780e:	e8 8e 91 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8537813:	84 c0                	test   %al,%al
 8537815:	0f 84 bf 00 00 00    	je     85378da <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x4ec>
 853781b:	8b 45 08             	mov    0x8(%ebp),%eax
 853781e:	c6 80 ac 01 00 00 00 	movb   $0x0,0x1ac(%eax)
 8537825:	8b 45 08             	mov    0x8(%ebp),%eax
 8537828:	c6 80 ad 01 00 00 00 	movb   $0x0,0x1ad(%eax)
 853782f:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8537836:	e9 88 00 00 00       	jmp    85378c3 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x4d5>
 853783b:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 853783e:	89 04 24             	mov    %eax,(%esp)
 8537841:	e8 35 4b 38 00       	call   88bc37b <_Z7ScanIntPb>
 8537846:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8537849:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 853784d:	83 f0 01             	xor    $0x1,%eax
 8537850:	84 c0                	test   %al,%al
 8537852:	74 0a                	je     853785e <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x470>
 8537854:	bb 55 06 00 00       	mov    $0x655,%ebx
 8537859:	e9 c3 00 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 853785e:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 8537861:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8537864:	89 04 24             	mov    %eax,(%esp)
 8537867:	e8 0f 4b 38 00       	call   88bc37b <_Z7ScanIntPb>
 853786c:	89 c2                	mov    %eax,%edx
 853786e:	8b 45 08             	mov    0x8(%ebp),%eax
 8537871:	8d 8b d0 00 00 00    	lea    0xd0(%ebx),%ecx
 8537877:	88 54 48 0c          	mov    %dl,0xc(%eax,%ecx,2)
 853787b:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 853787f:	83 f0 01             	xor    $0x1,%eax
 8537882:	84 c0                	test   %al,%al
 8537884:	74 0a                	je     8537890 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x4a2>
 8537886:	bb 59 06 00 00       	mov    $0x659,%ebx
 853788b:	e9 91 00 00 00       	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 8537890:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 8537893:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 8537896:	89 04 24             	mov    %eax,(%esp)
 8537899:	e8 dd 4a 38 00       	call   88bc37b <_Z7ScanIntPb>
 853789e:	89 c2                	mov    %eax,%edx
 85378a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85378a3:	8d 8b d0 00 00 00    	lea    0xd0(%ebx),%ecx
 85378a9:	88 54 48 0d          	mov    %dl,0xd(%eax,%ecx,2)
 85378ad:	0f b6 45 a3          	movzbl -0x5d(%ebp),%eax
 85378b1:	83 f0 01             	xor    $0x1,%eax
 85378b4:	84 c0                	test   %al,%al
 85378b6:	74 07                	je     85378bf <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x4d1>
 85378b8:	bb 5d 06 00 00       	mov    $0x65d,%ebx
 85378bd:	eb 62                	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 85378bf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85378c3:	81 7d f4 c8 00 00 00 	cmpl   $0xc8,-0xc(%ebp)
 85378ca:	0f 9e c0             	setle  %al
 85378cd:	84 c0                	test   %al,%al
 85378cf:	0f 85 66 ff ff ff    	jne    853783b <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x44d>
 85378d5:	e9 5c fb ff ff       	jmp    8537436 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x48>
 85378da:	bb 61 06 00 00       	mov    $0x661,%ebx
 85378df:	eb 40                	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 85378e1:	90                   	nop
 85378e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85378e5:	8d 90 ac 01 00 00    	lea    0x1ac(%eax),%edx
 85378eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85378ee:	05 40 03 00 00       	add    $0x340,%eax
 85378f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85378f7:	89 04 24             	mov    %eax,(%esp)
 85378fa:	e8 d1 d3 ff ff       	call   8534cd0 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE>
 85378ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 8537904:	eb 1b                	jmp    8537921 <_ZN8WongWork19CSpecialMonsterDrop10loadScriptEPKc+0x533>
 8537906:	89 d3                	mov    %edx,%ebx
 8537908:	89 c6                	mov    %eax,%esi
 853790a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 853790d:	89 04 24             	mov    %eax,(%esp)
 8537910:	e8 cb 02 1d 00       	call   8707be0 <_ZNSsD1Ev>
 8537915:	89 f0                	mov    %esi,%eax
 8537917:	89 da                	mov    %ebx,%edx
 8537919:	89 04 24             	mov    %eax,(%esp)
 853791c:	e8 2f be 5a 00       	call   8ae3750 <_Unwind_Resume>
 8537921:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8537924:	89 04 24             	mov    %eax,(%esp)
 8537927:	e8 b4 02 1d 00       	call   8707be0 <_ZNSsD1Ev>
 853792c:	89 d8                	mov    %ebx,%eax
 853792e:	81 c4 90 00 00 00    	add    $0x90,%esp
 8537934:	5b                   	pop    %ebx
 8537935:	5e                   	pop    %esi
 8537936:	5d                   	pop    %ebp
 8537937:	c3                   	ret

```

```c
// WongWork::CSpecialMonsterDrop::loadScript @ 0x85373ee

/* WongWork::CSpecialMonsterDrop::loadScript(char const*) */

undefined4 __thiscall
WongWork::CSpecialMonsterDrop::loadScript(CSpecialMonsterDrop *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CSpecialMonsterDrop CVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longdouble lVar8;
  bool local_61;
  string local_60;
  undefined4 local_5c [7];
  int local_40;
  uint local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_60);
    local_40 = 0;
    local_61 = false;
    do {
      while( true ) {
                    /* try { // try from 08537444 to 085378fe has its CatchHandler @ 08537906 */
        cVar2 = ScanType((string *)&local_60,true);
        if (cVar2 != '\x01') {
          CSecialIMonsterDropItemGenRateTable::generateTable
                    ((CSecialIMonsterDropItemGenRateTable *)(this + 0x340),
                     (stGenItemRange_t *)(this + 0x1ac));
          uVar7 = 0;
          goto LAB_08537921;
        }
        bVar3 = std::operator==(&local_60,"[drop prob count]");
        if (bVar3) break;
        bVar3 = std::operator==(&local_60,"[drop prob]");
        if (bVar3) {
          local_3c = 0;
          while (uVar5 = std::
                         vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                         ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                                 *)(this + 0x18)), local_3c < uVar5) {
            local_38 = (undefined4 *)
                       std::
                       vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                       ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                                     *)(this + 0x18),local_3c);
            uVar7 = ScanInt(&local_61);
            *local_38 = uVar7;
            if (local_61 != true) {
              uVar7 = 0x611;
              goto LAB_08537921;
            }
            uVar7 = ScanInt(&local_61);
            local_38[1] = uVar7;
            if (local_61 != true) {
              uVar7 = 0x613;
              goto LAB_08537921;
            }
            for (local_34 = 0; iVar6 = local_34, local_34 < 5; local_34 = local_34 + 1) {
              uVar7 = ScanInt(&local_61);
              local_38[iVar6 + 2] = uVar7;
              if (local_61 != true) {
                uVar7 = 0x617;
                goto LAB_08537921;
              }
            }
            local_3c = local_3c + 1;
          }
        }
        else {
          bVar3 = std::operator==(&local_60,"[basis of rarity dicision]");
          if (bVar3) {
            for (local_30 = 1; local_30 < 5; local_30 = local_30 + 1) {
              for (local_2c = 0; iVar1 = local_2c, iVar6 = local_30, local_2c < 6;
                  local_2c = local_2c + 1) {
                uVar7 = ScanInt(&local_61);
                *(undefined4 *)(this + (iVar6 * 6 + iVar1) * 4 + 0x30) = uVar7;
                if (local_61 != true) {
                  uVar7 = 0x623;
                  goto LAB_08537921;
                }
              }
            }
          }
          else {
            bVar3 = std::operator==(&local_60,"[party member drop bonusrate]");
            if (bVar3) {
              for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
                for (local_24 = 0; iVar1 = local_24, iVar6 = local_28, local_24 < 4;
                    local_24 = local_24 + 1) {
                  lVar8 = (longdouble)ScanFloat(&local_61);
                  *(float *)(this + (iVar6 * 4 + iVar1 + 0x28) * 4 + 8) = (float)lVar8;
                  if (local_61 != true) {
                    uVar7 = 0x62e;
                    goto LAB_08537921;
                  }
                }
              }
            }
            else {
              bVar3 = std::operator==(&local_60,"[dungeon difficulty drop bonusrate]");
              if (bVar3) {
                for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
                  for (local_1c = 0; iVar1 = local_1c, iVar6 = local_20, local_1c < 5;
                      local_1c = local_1c + 1) {
                    lVar8 = (longdouble)ScanFloat(&local_61);
                    *(float *)(this + (iVar6 * 5 + iVar1 + 0x3c) * 4 + 8) = (float)lVar8;
                    if (local_61 != true) {
                      uVar7 = 0x63d;
                      goto LAB_08537921;
                    }
                  }
                }
              }
              else {
                bVar3 = std::operator==(&local_60,"[monster type drop bonusrate]");
                if (bVar3) {
                  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
                    for (local_14 = 0; iVar1 = local_14, iVar6 = local_18, local_14 < 4;
                        local_14 = local_14 + 1) {
                      lVar8 = (longdouble)ScanFloat(&local_61);
                      *(float *)(this + (iVar6 * 4 + iVar1 + 0x54) * 4 + 0xc) = (float)lVar8;
                      if (local_61 != true) {
                        uVar7 = 0x648;
                        goto LAB_08537921;
                      }
                    }
                  }
                }
                else {
                  bVar3 = std::operator==(&local_60,"[item drop ref table]");
                  if (!bVar3) {
                    uVar7 = 0x661;
                    goto LAB_08537921;
                  }
                  this[0x1ac] = (CSpecialMonsterDrop)0x0;
                  this[0x1ad] = (CSpecialMonsterDrop)0x0;
                  for (local_10 = 1; local_10 < 0xc9; local_10 = local_10 + 1) {
                    iVar6 = ScanInt(&local_61);
                    local_40 = iVar6;
                    if (local_61 != true) {
                      uVar7 = 0x655;
                      goto LAB_08537921;
                    }
                    CVar4 = (CSpecialMonsterDrop)ScanInt(&local_61);
                    iVar1 = local_40;
                    this[(iVar6 + 0xd0) * 2 + 0xc] = CVar4;
                    if (local_61 != true) {
                      uVar7 = 0x659;
                      goto LAB_08537921;
                    }
                    CVar4 = (CSpecialMonsterDrop)ScanInt(&local_61);
                    this[(iVar1 + 0xd0) * 2 + 0xd] = CVar4;
                    if (local_61 != true) {
                      uVar7 = 0x65d;
                      goto LAB_08537921;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar5 = 0;
      do {
        *(undefined4 *)((int)local_5c + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x1c);
      uVar7 = ScanInt(&local_61);
      std::
      vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
      ::resize(this + 0x18,uVar7,local_5c[0],local_5c[1],local_5c[2],local_5c[3],local_5c[4],
               local_5c[5],local_5c[6]);
    } while (local_61 == true);
    uVar7 = 0x609;
LAB_08537921:
    std::string::~string((string *)&local_60);
  }
  else {
    uVar7 = 0x5fb;
  }
  return uVar7;
}

```

---

## setDropRatio

```asm
// === 085359e8 WongWork::CSpecialMonsterDrop::setDropRatio  [0x085359e8-0x8535a87] ===
 85359e8:	55                   	push   %ebp
 85359e9:	89 e5                	mov    %esp,%ebp
 85359eb:	53                   	push   %ebx
 85359ec:	83 ec 34             	sub    $0x34,%esp
 85359ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85359f2:	8d 50 18             	lea    0x18(%eax),%edx
 85359f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85359f8:	83 c0 24             	add    $0x24,%eax
 85359fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85359ff:	89 04 24             	mov    %eax,(%esp)
 8535a02:	e8 43 59 00 00       	call   853b34a <_ZNSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EEaSERKS4_>
 8535a07:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8535a0e:	eb 59                	jmp    8535a69 <_ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf+0x81>
 8535a10:	8b 45 08             	mov    0x8(%ebp),%eax
 8535a13:	8d 50 24             	lea    0x24(%eax),%edx
 8535a16:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8535a19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8535a1d:	89 14 24             	mov    %edx,(%esp)
 8535a20:	e8 cf 5b 00 00       	call   853b5f4 <_ZNSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EEixEj>
 8535a25:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8535a28:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8535a2f:	eb 29                	jmp    8535a5a <_ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf+0x72>
 8535a31:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8535a34:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8535a37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8535a3a:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8535a3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8535a41:	db 45 e4             	fildl  -0x1c(%ebp)
 8535a44:	d8 4d 0c             	fmuls  0xc(%ebp)
 8535a47:	d9 1c 24             	fstps  (%esp)
 8535a4a:	e8 96 51 00 00       	call   853abe5 <_Z10roundFloatf>
 8535a4f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8535a52:	89 44 9a 08          	mov    %eax,0x8(%edx,%ebx,4)
 8535a56:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8535a5a:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8535a5e:	0f 9e c0             	setle  %al
 8535a61:	84 c0                	test   %al,%al
 8535a63:	75 cc                	jne    8535a31 <_ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf+0x49>
 8535a65:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8535a69:	8b 45 08             	mov    0x8(%ebp),%eax
 8535a6c:	83 c0 24             	add    $0x24,%eax
 8535a6f:	89 04 24             	mov    %eax,(%esp)
 8535a72:	e8 5b 5b 00 00       	call   853b5d2 <_ZNKSt6vectorIN8WongWork19CSpecialMonsterDrop15stGenItemProb_tESaIS2_EE4sizeEv>
 8535a77:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8535a7a:	0f 97 c0             	seta   %al
 8535a7d:	84 c0                	test   %al,%al
 8535a7f:	75 8f                	jne    8535a10 <_ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf+0x28>
 8535a81:	83 c4 34             	add    $0x34,%esp
 8535a84:	5b                   	pop    %ebx
 8535a85:	5d                   	pop    %ebp
 8535a86:	c3                   	ret
 8535a87:	90                   	nop

```

```c
// WongWork::CSpecialMonsterDrop::setDropRatio @ 0x85359e8

/* WongWork::CSpecialMonsterDrop::setDropRatio(float) */

void __thiscall WongWork::CSpecialMonsterDrop::setDropRatio(CSpecialMonsterDrop *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_18;
  int local_10;
  
  std::
  vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
  ::operator=((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
               *)(this + 0x24),(vector *)(this + 0x18));
  local_18 = 0;
  while( true ) {
    uVar3 = std::
            vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
            ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                    *)(this + 0x24));
    if (uVar3 <= local_18) break;
    iVar1 = std::
            vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
            ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24),local_18);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      uVar2 = roundFloat((float)*(int *)(iVar1 + 8 + local_10 * 4) * param_1);
      *(undefined4 *)(iVar1 + 8 + local_10 * 4) = uVar2;
    }
    local_18 = local_18 + 1;
  }
  return;
}

```

