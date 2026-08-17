# WindowsExeFileFamily

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CompleteLoadingWindowsExeFiles

```asm
// === 08574736 WindowsExeFileFamily::CompleteLoadingWindowsExeFiles  [0x08574736-0x8574acd] ===
 8574736:	55                   	push   %ebp
 8574737:	89 e5                	mov    %esp,%ebp
 8574739:	57                   	push   %edi
 857473a:	56                   	push   %esi
 857473b:	53                   	push   %ebx
 857473c:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8574742:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8574745:	89 04 24             	mov    %eax,(%esp)
 8574748:	e8 59 1f 00 00       	call   85766a6 <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEC1Ev>
 857474d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8574750:	89 04 24             	mov    %eax,(%esp)
 8574753:	e8 08 1d 00 00       	call   8576460 <_ZN9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEC1Ev>
 8574758:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 857475b:	89 04 24             	mov    %eax,(%esp)
 857475e:	e8 bb 20 00 00       	call   857681e <_ZNSt6vectorIP11IntervalSetSaIS1_EEC1Ev>
 8574763:	8d 5d 84             	lea    -0x7c(%ebp),%ebx
 8574766:	89 df                	mov    %ebx,%edi
 8574768:	be 02 00 00 00       	mov    $0x2,%esi
 857476d:	eb 0e                	jmp    857477d <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x47>
 857476f:	89 3c 24             	mov    %edi,(%esp)
 8574772:	e8 25 17 00 00       	call   8575e9c <_ZN11IntervalSetC1Ev>
 8574777:	83 c7 0c             	add    $0xc,%edi
 857477a:	83 ee 01             	sub    $0x1,%esi
 857477d:	83 fe ff             	cmp    $0xffffffff,%esi
 8574780:	0f 95 c0             	setne  %al
 8574783:	84 c0                	test   %al,%al
 8574785:	75 e8                	jne    857476f <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x39>
 8574787:	eb 3f                	jmp    85747c8 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x92>
 8574789:	89 d7                	mov    %edx,%edi
 857478b:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8574791:	85 db                	test   %ebx,%ebx
 8574793:	74 26                	je     85747bb <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x85>
 8574795:	b8 02 00 00 00       	mov    $0x2,%eax
 857479a:	29 f0                	sub    %esi,%eax
 857479c:	89 c2                	mov    %eax,%edx
 857479e:	89 d0                	mov    %edx,%eax
 85747a0:	01 c0                	add    %eax,%eax
 85747a2:	01 d0                	add    %edx,%eax
 85747a4:	c1 e0 02             	shl    $0x2,%eax
 85747a7:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 85747aa:	39 de                	cmp    %ebx,%esi
 85747ac:	74 0d                	je     85747bb <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x85>
 85747ae:	83 ee 0c             	sub    $0xc,%esi
 85747b1:	89 34 24             	mov    %esi,(%esp)
 85747b4:	e8 f7 16 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 85747b9:	eb ef                	jmp    85747aa <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x74>
 85747bb:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 85747c1:	89 fa                	mov    %edi,%edx
 85747c3:	e9 d3 02 00 00       	jmp    8574a9b <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x365>
 85747c8:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85747cb:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85747ce:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85747d1:	83 c0 0c             	add    $0xc,%eax
 85747d4:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85747d7:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85747da:	83 c0 18             	add    $0x18,%eax
 85747dd:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85747e0:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 85747e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85747e7:	8d 50 0c             	lea    0xc(%eax),%edx
 85747ea:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85747f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85747f4:	89 04 24             	mov    %eax,(%esp)
 85747f7:	e8 b8 1e 00 00       	call   85766b4 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE5beginEv>
 85747fc:	83 ec 04             	sub    $0x4,%esp
 85747ff:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8574805:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8574808:	e9 2e 01 00 00       	jmp    857493b <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x205>
 857480d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8574810:	89 04 24             	mov    %eax,(%esp)
 8574813:	e8 28 1f 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574818:	8b 00                	mov    (%eax),%eax
 857481a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857481d:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8574820:	89 04 24             	mov    %eax,(%esp)
 8574823:	e8 3e eb ff ff       	call   8573366 <_ZN11IntervalSet5ClearEv>
 8574828:	8b 45 dc             	mov    -0x24(%ebp),%eax
 857482b:	8d 50 08             	lea    0x8(%eax),%edx
 857482e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8574834:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574838:	89 04 24             	mov    %eax,(%esp)
 857483b:	e8 2e 1c 00 00       	call   857646e <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE5beginEv>
 8574840:	83 ec 04             	sub    $0x4,%esp
 8574843:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8574849:	89 45 c0             	mov    %eax,-0x40(%ebp)
 857484c:	eb 4d                	jmp    857489b <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x165>
 857484e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8574851:	89 04 24             	mov    %eax,(%esp)
 8574854:	e8 a1 1c 00 00       	call   85764fa <_ZNK9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEdeEv>
 8574859:	8b 00                	mov    (%eax),%eax
 857485b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 857485e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8574861:	8b 40 08             	mov    0x8(%eax),%eax
 8574864:	89 c2                	mov    %eax,%edx
 8574866:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8574869:	8b 00                	mov    (%eax),%eax
 857486b:	89 54 24 08          	mov    %edx,0x8(%esp)
 857486f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574873:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8574876:	89 04 24             	mov    %eax,(%esp)
 8574879:	e8 e0 15 00 00       	call   8575e5e <_ZN8IntervalC1Ell>
 857487e:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8574881:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8574884:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574888:	89 04 24             	mov    %eax,(%esp)
 857488b:	e8 ea ea ff ff       	call   857337a <_ZN11IntervalSet11AddIntervalERK8Interval>
 8574890:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8574893:	89 04 24             	mov    %eax,(%esp)
 8574896:	e8 49 1c 00 00       	call   85764e4 <_ZN9__gnu_cxx17__normal_iteratorIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEppEv>
 857489b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 857489e:	8d 50 08             	lea    0x8(%eax),%edx
 85748a1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85748a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85748a8:	89 04 24             	mov    %eax,(%esp)
 85748ab:	e8 e2 1b 00 00       	call   8576492 <_ZNSt6vectorIP25WindowsExeConstantSectionSaIS1_EE3endEv>
 85748b0:	83 ec 04             	sub    $0x4,%esp
 85748b3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85748b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85748ba:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85748bd:	89 04 24             	mov    %eax,(%esp)
 85748c0:	e8 f3 1b 00 00       	call   85764b8 <_ZN9__gnu_cxxneIPP25WindowsExeConstantSectionSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85748c5:	84 c0                	test   %al,%al
 85748c7:	75 85                	jne    857484e <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x118>
 85748c9:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 85748cd:	74 18                	je     85748e7 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x1b1>
 85748cf:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85748d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85748d6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85748d9:	89 04 24             	mov    %eax,(%esp)
 85748dc:	e8 ae 1f 00 00       	call   857688f <_Z10swap_valueIP11IntervalSetEvRT_S3_>
 85748e1:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 85748e5:	eb 49                	jmp    8574930 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x1fa>
 85748e7:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 85748ea:	8b 55 b0             	mov    -0x50(%ebp),%edx
 85748ed:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85748f0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85748f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85748f8:	89 04 24             	mov    %eax,(%esp)
 85748fb:	e8 b2 e8 ff ff       	call   85731b2 <_Z20IntersectIntervalSetP11IntervalSetRKS_S2_>
 8574900:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8574903:	89 04 24             	mov    %eax,(%esp)
 8574906:	e8 b5 1a 00 00       	call   85763c0 <_ZNKSt6vectorI8IntervalSaIS0_EE4sizeEv>
 857490b:	85 c0                	test   %eax,%eax
 857490d:	0f 94 c0             	sete   %al
 8574910:	84 c0                	test   %al,%al
 8574912:	74 0a                	je     857491e <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x1e8>
 8574914:	be 00 00 00 00       	mov    $0x0,%esi
 8574919:	e9 63 01 00 00       	jmp    8574a81 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x34b>
 857491e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8574921:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574925:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8574928:	89 04 24             	mov    %eax,(%esp)
 857492b:	e8 5f 1f 00 00       	call   857688f <_Z10swap_valueIP11IntervalSetEvRT_S3_>
 8574930:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8574933:	89 04 24             	mov    %eax,(%esp)
 8574936:	e8 ef 1d 00 00       	call   857672a <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEppEv>
 857493b:	8b 45 08             	mov    0x8(%ebp),%eax
 857493e:	8d 50 0c             	lea    0xc(%eax),%edx
 8574941:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8574944:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574948:	89 04 24             	mov    %eax,(%esp)
 857494b:	e8 88 1d 00 00       	call   85766d8 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE3endEv>
 8574950:	83 ec 04             	sub    $0x4,%esp
 8574953:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8574956:	89 44 24 04          	mov    %eax,0x4(%esp)
 857495a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 857495d:	89 04 24             	mov    %eax,(%esp)
 8574960:	e8 99 1d 00 00       	call   85766fe <_ZN9__gnu_cxxneIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8574965:	84 c0                	test   %al,%al
 8574967:	0f 85 a0 fe ff ff    	jne    857480d <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0xd7>
 857496d:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8574970:	89 04 24             	mov    %eax,(%esp)
 8574973:	e8 48 1a 00 00       	call   85763c0 <_ZNKSt6vectorI8IntervalSaIS0_EE4sizeEv>
 8574978:	85 c0                	test   %eax,%eax
 857497a:	0f 94 c0             	sete   %al
 857497d:	84 c0                	test   %al,%al
 857497f:	74 0a                	je     857498b <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x255>
 8574981:	be 00 00 00 00       	mov    $0x0,%esi
 8574986:	e9 f6 00 00 00       	jmp    8574a81 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x34b>
 857498b:	8b 55 b0             	mov    -0x50(%ebp),%edx
 857498e:	8b 45 08             	mov    0x8(%ebp),%eax
 8574991:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574995:	89 04 24             	mov    %eax,(%esp)
 8574998:	e8 27 15 00 00       	call   8575ec4 <_ZN11IntervalSetaSERKS_>
 857499d:	8b 45 08             	mov    0x8(%ebp),%eax
 85749a0:	89 04 24             	mov    %eax,(%esp)
 85749a3:	e8 34 ec ff ff       	call   85735dc <_ZN11IntervalSet4SortEv>
 85749a8:	8b 45 08             	mov    0x8(%ebp),%eax
 85749ab:	8d 50 0c             	lea    0xc(%eax),%edx
 85749ae:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85749b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85749b8:	89 04 24             	mov    %eax,(%esp)
 85749bb:	e8 f4 1c 00 00       	call   85766b4 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE5beginEv>
 85749c0:	83 ec 04             	sub    $0x4,%esp
 85749c3:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 85749c9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85749cc:	eb 2d                	jmp    85749fb <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x2c5>
 85749ce:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85749d1:	89 04 24             	mov    %eax,(%esp)
 85749d4:	e8 67 1d 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 85749d9:	8b 00                	mov    (%eax),%eax
 85749db:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85749de:	8b 45 08             	mov    0x8(%ebp),%eax
 85749e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85749e5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85749e8:	89 04 24             	mov    %eax,(%esp)
 85749eb:	e8 d6 f7 ff ff       	call   85741c6 <_ZN14WindowsExeFile36MakeCommonWindowsExeConstantSectionsERK11IntervalSet>
 85749f0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85749f3:	89 04 24             	mov    %eax,(%esp)
 85749f6:	e8 2f 1d 00 00       	call   857672a <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEppEv>
 85749fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85749fe:	8d 50 0c             	lea    0xc(%eax),%edx
 8574a01:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8574a04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574a08:	89 04 24             	mov    %eax,(%esp)
 8574a0b:	e8 c8 1c 00 00       	call   85766d8 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE3endEv>
 8574a10:	83 ec 04             	sub    $0x4,%esp
 8574a13:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8574a16:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574a1a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8574a1d:	89 04 24             	mov    %eax,(%esp)
 8574a20:	e8 d9 1c 00 00       	call   85766fe <_ZN9__gnu_cxxneIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8574a25:	84 c0                	test   %al,%al
 8574a27:	75 a5                	jne    85749ce <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x298>
 8574a29:	8b 45 08             	mov    0x8(%ebp),%eax
 8574a2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8574a33:	00 
 8574a34:	89 04 24             	mov    %eax,(%esp)
 8574a37:	e8 a0 19 00 00       	call   85763dc <_ZNSt6vectorI8IntervalSaIS0_EEixEj>
 8574a3c:	8b 00                	mov    (%eax),%eax
 8574a3e:	89 c2                	mov    %eax,%edx
 8574a40:	8b 45 08             	mov    0x8(%ebp),%eax
 8574a43:	89 90 20 01 00 00    	mov    %edx,0x120(%eax)
 8574a49:	8b 45 08             	mov    0x8(%ebp),%eax
 8574a4c:	c7 80 1c 01 00 00 00 	movl   $0x0,0x11c(%eax)
 8574a53:	00 00 00 
 8574a56:	be 01 00 00 00       	mov    $0x1,%esi
 8574a5b:	eb 24                	jmp    8574a81 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x34b>
 8574a5d:	89 d6                	mov    %edx,%esi
 8574a5f:	89 c7                	mov    %eax,%edi
 8574a61:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8574a64:	8d 58 24             	lea    0x24(%eax),%ebx
 8574a67:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8574a6a:	39 c3                	cmp    %eax,%ebx
 8574a6c:	74 0d                	je     8574a7b <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x345>
 8574a6e:	83 eb 0c             	sub    $0xc,%ebx
 8574a71:	89 1c 24             	mov    %ebx,(%esp)
 8574a74:	e8 37 14 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 8574a79:	eb ec                	jmp    8574a67 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x331>
 8574a7b:	89 f8                	mov    %edi,%eax
 8574a7d:	89 f2                	mov    %esi,%edx
 8574a7f:	eb 1a                	jmp    8574a9b <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x365>
 8574a81:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8574a84:	8d 58 24             	lea    0x24(%eax),%ebx
 8574a87:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8574a8a:	39 c3                	cmp    %eax,%ebx
 8574a8c:	74 28                	je     8574ab6 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x380>
 8574a8e:	83 eb 0c             	sub    $0xc,%ebx
 8574a91:	89 1c 24             	mov    %ebx,(%esp)
 8574a94:	e8 17 14 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 8574a99:	eb ec                	jmp    8574a87 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv+0x351>
 8574a9b:	89 d3                	mov    %edx,%ebx
 8574a9d:	89 c6                	mov    %eax,%esi
 8574a9f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8574aa2:	89 04 24             	mov    %eax,(%esp)
 8574aa5:	e8 88 1d 00 00       	call   8576832 <_ZNSt6vectorIP11IntervalSetSaIS1_EED1Ev>
 8574aaa:	89 f0                	mov    %esi,%eax
 8574aac:	89 da                	mov    %ebx,%edx
 8574aae:	89 04 24             	mov    %eax,(%esp)
 8574ab1:	e8 9a ec 56 00       	call   8ae3750 <_Unwind_Resume>
 8574ab6:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8574ab9:	89 04 24             	mov    %eax,(%esp)
 8574abc:	e8 71 1d 00 00       	call   8576832 <_ZNSt6vectorIP11IntervalSetSaIS1_EED1Ev>
 8574ac1:	89 f0                	mov    %esi,%eax
 8574ac3:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8574ac6:	83 c4 00             	add    $0x0,%esp
 8574ac9:	5b                   	pop    %ebx
 8574aca:	5e                   	pop    %esi
 8574acb:	5f                   	pop    %edi
 8574acc:	5d                   	pop    %ebp
 8574acd:	c3                   	ret

```

```c
// WindowsExeFileFamily::CompleteLoadingWindowsExeFiles @ 0x8574736

/* WindowsExeFileFamily::CompleteLoadingWindowsExeFiles() */

undefined4 __thiscall
WindowsExeFileFamily::CompleteLoadingWindowsExeFiles(WindowsExeFileFamily *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  IntervalSet *pIVar4;
  int iVar5;
  undefined4 uVar6;
  IntervalSet local_80 [12];
  IntervalSet aIStack_74 [12];
  IntervalSet aIStack_68 [12];
  IntervalSet *local_5c;
  IntervalSet *local_58;
  IntervalSet *local_54;
  vector<IntervalSet*,std::allocator<IntervalSet*>> local_50 [12];
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  local_44 [4];
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  Interval local_34 [8];
  __normal_iterator local_2c [4];
  WindowsExeFile *local_28;
  long *local_24;
  char local_1d;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_40);
  __gnu_cxx::
  __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
  ::__normal_iterator(local_44);
  std::vector<IntervalSet*,std::allocator<IntervalSet*>>::vector(local_50);
  pIVar4 = local_80;
  for (iVar5 = 2; iVar5 != -1; iVar5 = iVar5 + -1) {
                    /* try { // try from 08574772 to 08574776 has its CatchHandler @ 08574789 */
    IntervalSet::IntervalSet(pIVar4);
    pIVar4 = pIVar4 + 0xc;
  }
  local_54 = local_80;
  local_58 = aIStack_74;
  local_5c = aIStack_68;
  local_1d = '\x01';
                    /* try { // try from 085747f7 to 08574a24 has its CatchHandler @ 08574a5d */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
  do {
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_40,local_3c);
    if (!bVar1) {
      iVar5 = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)local_54);
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        IntervalSet::operator=((IntervalSet *)this,local_54);
        IntervalSet::Sort((IntervalSet *)this);
        std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
        while( true ) {
          std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
          bVar1 = __gnu_cxx::operator!=(local_40,local_2c);
          if (!bVar1) break;
          puVar3 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
                   ::operator*(local_40);
          local_28 = (WindowsExeFile *)*puVar3;
          WindowsExeFile::MakeCommonWindowsExeConstantSections(local_28,(IntervalSet *)this);
          __gnu_cxx::
          __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
          ::operator++(local_40);
        }
        puVar3 = (undefined4 *)
                 std::vector<Interval,std::allocator<Interval>>::operator[]
                           ((vector<Interval,std::allocator<Interval>> *)this,0);
        *(undefined4 *)(this + 0x120) = *puVar3;
        *(undefined4 *)(this + 0x11c) = 0;
        uVar6 = 1;
      }
LAB_08574a81:
      pIVar4 = (IntervalSet *)&local_5c;
      while (pIVar4 != local_80) {
        pIVar4 = pIVar4 + -0xc;
                    /* try { // try from 08574a94 to 08574a98 has its CatchHandler @ 08574a9b */
        IntervalSet::~IntervalSet(pIVar4);
      }
      std::vector<IntervalSet*,std::allocator<IntervalSet*>>::~vector(local_50);
      return uVar6;
    }
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
             ::operator*(local_40);
    local_28 = (WindowsExeFile *)*puVar3;
    IntervalSet::Clear(local_58);
    std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::begin();
    while( true ) {
      std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>::end();
      bVar1 = __gnu_cxx::operator!=(local_44,local_38);
      if (!bVar1) break;
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
                      ::operator*(local_44);
      local_24 = (long *)*piVar2;
      Interval::Interval(local_34,*local_24,local_24[2]);
      IntervalSet::AddInterval(local_58,local_34);
      __gnu_cxx::
      __normal_iterator<WindowsExeConstantSection**,std::vector<WindowsExeConstantSection*,std::allocator<WindowsExeConstantSection*>>>
      ::operator++(local_44);
    }
    if (local_1d == '\0') {
      IntersectIntervalSet(local_5c,local_54,local_58);
      iVar5 = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)local_5c);
      if (iVar5 == 0) {
        uVar6 = 0;
        goto LAB_08574a81;
      }
      swap_value<IntervalSet*>(&local_54,&local_5c);
    }
    else {
      swap_value<IntervalSet*>(&local_54,&local_58);
      local_1d = '\0';
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::operator++(local_40);
  } while( true );
}

```

---

## GenerateChecksum

```asm
// === 08574cf0 WindowsExeFileFamily::GenerateChecksum  [0x08574cf0-0x8574e3d] ===
 8574cf0:	55                   	push   %ebp
 8574cf1:	89 e5                	mov    %esp,%ebp
 8574cf3:	83 ec 78             	sub    $0x78,%esp
 8574cf6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8574cf9:	89 04 24             	mov    %eax,(%esp)
 8574cfc:	e8 a5 19 00 00       	call   85766a6 <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEC1Ev>
 8574d01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574d04:	89 04 24             	mov    %eax,(%esp)
 8574d07:	e8 0e 59 b1 ff       	call   808a61a <_ZN20CodeHackChecksumData5ClearEv>
 8574d0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8574d0f:	83 c0 18             	add    $0x18,%eax
 8574d12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574d16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574d19:	89 04 24             	mov    %eax,(%esp)
 8574d1c:	e8 8d 5a b1 ff       	call   808a7ae <_ZN18CodeHackChecksumEx11SetFileNameEPKc>
 8574d21:	8b 45 08             	mov    0x8(%ebp),%eax
 8574d24:	83 c0 18             	add    $0x18,%eax
 8574d27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574d2b:	8b 45 10             	mov    0x10(%ebp),%eax
 8574d2e:	89 04 24             	mov    %eax,(%esp)
 8574d31:	e8 74 5c b1 ff       	call   808a9aa <_ZN20CodeHackCheckRangeEx11SetFileNameEPKc>
 8574d36:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8574d39:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8574d3d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8574d40:	89 44 24 08          	mov    %eax,0x8(%esp)
 8574d44:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8574d47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574d4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8574d4e:	89 04 24             	mov    %eax,(%esp)
 8574d51:	e8 38 fe ff ff       	call   8574b8e <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_>
 8574d56:	84 c0                	test   %al,%al
 8574d58:	0f 84 d9 00 00 00    	je     8574e37 <_ZN20WindowsExeFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x147>
 8574d5e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8574d61:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8574d64:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8574d67:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8574d6a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8574d6d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8574d70:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8574d73:	89 81 04 01 00 00    	mov    %eax,0x104(%ecx)
 8574d79:	89 91 08 01 00 00    	mov    %edx,0x108(%ecx)
 8574d7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8574d82:	8d 50 0c             	lea    0xc(%eax),%edx
 8574d85:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8574d88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574d8c:	89 04 24             	mov    %eax,(%esp)
 8574d8f:	e8 20 19 00 00       	call   85766b4 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE5beginEv>
 8574d94:	83 ec 04             	sub    $0x4,%esp
 8574d97:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8574d9a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8574d9d:	eb 66                	jmp    8574e05 <_ZN20WindowsExeFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x115>
 8574d9f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8574da2:	89 04 24             	mov    %eax,(%esp)
 8574da5:	e8 96 19 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574daa:	8b 00                	mov    (%eax),%eax
 8574dac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8574daf:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8574db2:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8574db5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8574db8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8574dbc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8574dc0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8574dc4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8574dc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574dcb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8574dce:	89 04 24             	mov    %eax,(%esp)
 8574dd1:	e8 fe f5 ff ff       	call   85743d4 <_ZN14WindowsExeFile16GenerateChecksumEP16CodeHackChecksumlmm>
 8574dd6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8574dd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574ddd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574de0:	89 04 24             	mov    %eax,(%esp)
 8574de3:	e8 f0 59 b1 ff       	call   808a7d8 <_ZN18CodeHackChecksumEx21SetCodeHackCheckRangeERK18CodeHackCheckRange>
 8574de8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574deb:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8574dee:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574df2:	89 04 24             	mov    %eax,(%esp)
 8574df5:	e8 4e 58 b1 ff       	call   808a648 <_ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum>
 8574dfa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8574dfd:	89 04 24             	mov    %eax,(%esp)
 8574e00:	e8 25 19 00 00       	call   857672a <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEppEv>
 8574e05:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e08:	8d 50 0c             	lea    0xc(%eax),%edx
 8574e0b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574e0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574e12:	89 04 24             	mov    %eax,(%esp)
 8574e15:	e8 be 18 00 00       	call   85766d8 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE3endEv>
 8574e1a:	83 ec 04             	sub    $0x4,%esp
 8574e1d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574e20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574e24:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8574e27:	89 04 24             	mov    %eax,(%esp)
 8574e2a:	e8 cf 18 00 00       	call   85766fe <_ZN9__gnu_cxxneIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8574e2f:	84 c0                	test   %al,%al
 8574e31:	0f 85 68 ff ff ff    	jne    8574d9f <_ZN20WindowsExeFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xaf>
 8574e37:	b8 01 00 00 00       	mov    $0x1,%eax
 8574e3c:	c9                   	leave
 8574e3d:	c3                   	ret

```

```c
// WindowsExeFileFamily::GenerateChecksum @ 0x8574cf0

/* WindowsExeFileFamily::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*) */

undefined4 __thiscall
WindowsExeFileFamily::GenerateChecksum
          (WindowsExeFileFamily *this,CodeHackChecksumEx *param_1,CodeHackCheckRangeEx *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  CodeHackChecksum local_4c [32];
  ulong local_2c;
  ulong local_28;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_24 [4];
  ulong local_20;
  ulong local_1c;
  long local_18;
  __normal_iterator local_14 [4];
  WindowsExeFile *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_24);
  CodeHackChecksumData::Clear((CodeHackChecksumData *)param_1);
  CodeHackChecksumEx::SetFileName(param_1,(char *)(this + 0x18));
  CodeHackCheckRangeEx::SetFileName(param_2,(char *)(this + 0x18));
  cVar1 = GenerateRange(this,&local_18,&local_1c,&local_20);
  if (cVar1 != '\0') {
    local_2c = local_1c;
    local_28 = local_20;
    *(ulong *)(param_2 + 0x104) = local_1c;
    *(ulong *)(param_2 + 0x108) = local_20;
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
    while( true ) {
      std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
      bVar2 = __gnu_cxx::operator!=(local_24,local_14);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_24);
      local_10 = (WindowsExeFile *)*puVar3;
      WindowsExeFile::GenerateChecksum(local_10,local_4c,local_18,local_1c,local_20);
      CodeHackChecksumEx::SetCodeHackCheckRange(param_1,(CodeHackCheckRange *)&local_2c);
      CodeHackChecksumData::AddCodeHackChecksum((CodeHackChecksumData *)param_1,local_4c);
      __gnu_cxx::
      __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
      ::operator++(local_24);
    }
  }
  return 1;
}

```

---

## GenerateRange

```asm
// === 08574b8e WindowsExeFileFamily::GenerateRange  [0x08574b8e-0x8574cef] ===
 8574b8e:	55                   	push   %ebp
 8574b8f:	89 e5                	mov    %esp,%ebp
 8574b91:	53                   	push   %ebx
 8574b92:	83 ec 24             	sub    $0x24,%esp
 8574b95:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8574b99:	8b 45 08             	mov    0x8(%ebp),%eax
 8574b9c:	89 04 24             	mov    %eax,(%esp)
 8574b9f:	e8 5c 1f 00 00       	call   8576b00 <_ZNKSt6vectorI8IntervalSaIS0_EE5emptyEv>
 8574ba4:	84 c0                	test   %al,%al
 8574ba6:	74 0a                	je     8574bb2 <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_+0x24>
 8574ba8:	b8 00 00 00 00       	mov    $0x0,%eax
 8574bad:	e9 38 01 00 00       	jmp    8574cea <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_+0x15c>
 8574bb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8574bb5:	8b 98 24 01 00 00    	mov    0x124(%eax),%ebx
 8574bbb:	e8 e0 90 b0 ff       	call   807dca0 <rand@plt>
 8574bc0:	8b 55 08             	mov    0x8(%ebp),%edx
 8574bc3:	8b 92 28 01 00 00    	mov    0x128(%edx),%edx
 8574bc9:	8d 4a 01             	lea    0x1(%edx),%ecx
 8574bcc:	ba 00 00 00 00       	mov    $0x0,%edx
 8574bd1:	f7 f1                	div    %ecx
 8574bd3:	89 d0                	mov    %edx,%eax
 8574bd5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8574bd8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8574bdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8574bde:	8b 90 1c 01 00 00    	mov    0x11c(%eax),%edx
 8574be4:	8b 45 08             	mov    0x8(%ebp),%eax
 8574be7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574beb:	89 04 24             	mov    %eax,(%esp)
 8574bee:	e8 e9 17 00 00       	call   85763dc <_ZNSt6vectorI8IntervalSaIS0_EEixEj>
 8574bf3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8574bf6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8574bf9:	8b 10                	mov    (%eax),%edx
 8574bfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8574bfe:	8b 40 04             	mov    0x4(%eax),%eax
 8574c01:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8574c04:	89 c2                	mov    %eax,%edx
 8574c06:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c09:	8b 80 20 01 00 00    	mov    0x120(%eax),%eax
 8574c0f:	03 45 ec             	add    -0x14(%ebp),%eax
 8574c12:	39 c2                	cmp    %eax,%edx
 8574c14:	77 26                	ja     8574c3c <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_+0xae>
 8574c16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8574c19:	8b 10                	mov    (%eax),%edx
 8574c1b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8574c1e:	8b 40 04             	mov    0x4(%eax),%eax
 8574c21:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8574c24:	89 c2                	mov    %eax,%edx
 8574c26:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c29:	8b 80 20 01 00 00    	mov    0x120(%eax),%eax
 8574c2f:	89 d1                	mov    %edx,%ecx
 8574c31:	29 c1                	sub    %eax,%ecx
 8574c33:	89 c8                	mov    %ecx,%eax
 8574c35:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8574c38:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8574c3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c3f:	8b 80 1c 01 00 00    	mov    0x11c(%eax),%eax
 8574c45:	89 c2                	mov    %eax,%edx
 8574c47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574c4a:	89 10                	mov    %edx,(%eax)
 8574c4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c4f:	8b 90 20 01 00 00    	mov    0x120(%eax),%edx
 8574c55:	8b 45 10             	mov    0x10(%ebp),%eax
 8574c58:	89 10                	mov    %edx,(%eax)
 8574c5a:	8b 45 14             	mov    0x14(%ebp),%eax
 8574c5d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8574c60:	89 10                	mov    %edx,(%eax)
 8574c62:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8574c66:	74 66                	je     8574cce <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_+0x140>
 8574c68:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c6b:	8b 80 1c 01 00 00    	mov    0x11c(%eax),%eax
 8574c71:	8d 50 01             	lea    0x1(%eax),%edx
 8574c74:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c77:	89 90 1c 01 00 00    	mov    %edx,0x11c(%eax)
 8574c7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c80:	89 04 24             	mov    %eax,(%esp)
 8574c83:	e8 38 17 00 00       	call   85763c0 <_ZNKSt6vectorI8IntervalSaIS0_EE4sizeEv>
 8574c88:	8b 55 08             	mov    0x8(%ebp),%edx
 8574c8b:	8b 92 1c 01 00 00    	mov    0x11c(%edx),%edx
 8574c91:	39 d0                	cmp    %edx,%eax
 8574c93:	0f 96 c0             	setbe  %al
 8574c96:	84 c0                	test   %al,%al
 8574c98:	74 0d                	je     8574ca7 <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_+0x119>
 8574c9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8574c9d:	c7 80 1c 01 00 00 00 	movl   $0x0,0x11c(%eax)
 8574ca4:	00 00 00 
 8574ca7:	8b 45 08             	mov    0x8(%ebp),%eax
 8574caa:	8b 90 1c 01 00 00    	mov    0x11c(%eax),%edx
 8574cb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8574cb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574cb7:	89 04 24             	mov    %eax,(%esp)
 8574cba:	e8 1d 17 00 00       	call   85763dc <_ZNSt6vectorI8IntervalSaIS0_EEixEj>
 8574cbf:	8b 00                	mov    (%eax),%eax
 8574cc1:	89 c2                	mov    %eax,%edx
 8574cc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8574cc6:	89 90 20 01 00 00    	mov    %edx,0x120(%eax)
 8574ccc:	eb 17                	jmp    8574ce5 <_ZN20WindowsExeFileFamily13GenerateRangeEPlPmS1_+0x157>
 8574cce:	8b 45 08             	mov    0x8(%ebp),%eax
 8574cd1:	8b 80 20 01 00 00    	mov    0x120(%eax),%eax
 8574cd7:	89 c2                	mov    %eax,%edx
 8574cd9:	03 55 ec             	add    -0x14(%ebp),%edx
 8574cdc:	8b 45 08             	mov    0x8(%ebp),%eax
 8574cdf:	89 90 20 01 00 00    	mov    %edx,0x120(%eax)
 8574ce5:	b8 01 00 00 00       	mov    $0x1,%eax
 8574cea:	83 c4 24             	add    $0x24,%esp
 8574ced:	5b                   	pop    %ebx
 8574cee:	5d                   	pop    %ebp
 8574cef:	c3                   	ret

```

```c
// WindowsExeFileFamily::GenerateRange @ 0x8574b8e

/* WindowsExeFileFamily::GenerateRange(long*, unsigned long*, unsigned long*) */

undefined4 __thiscall
WindowsExeFileFamily::GenerateRange
          (WindowsExeFileFamily *this,long *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  ulong local_18;
  
  cVar3 = std::vector<Interval,std::allocator<Interval>>::empty();
  if (cVar3 == '\0') {
    iVar1 = *(int *)(this + 0x124);
    uVar5 = rand();
    local_18 = iVar1 + uVar5 % (*(int *)(this + 0x128) + 1U);
    piVar6 = (int *)std::vector<Interval,std::allocator<Interval>>::operator[]
                              ((vector<Interval,std::allocator<Interval>> *)this,
                               *(uint *)(this + 0x11c));
    bVar2 = (uint)(*piVar6 + piVar6[1]) <= *(int *)(this + 0x120) + local_18;
    if (bVar2) {
      local_18 = (*piVar6 + piVar6[1]) - *(int *)(this + 0x120);
    }
    *param_1 = *(long *)(this + 0x11c);
    *param_2 = *(ulong *)(this + 0x120);
    *param_3 = local_18;
    if (bVar2) {
      *(int *)(this + 0x11c) = *(int *)(this + 0x11c) + 1;
      uVar5 = std::vector<Interval,std::allocator<Interval>>::size
                        ((vector<Interval,std::allocator<Interval>> *)this);
      if (uVar5 <= *(uint *)(this + 0x11c)) {
        *(undefined4 *)(this + 0x11c) = 0;
      }
      puVar7 = (undefined4 *)
               std::vector<Interval,std::allocator<Interval>>::operator[]
                         ((vector<Interval,std::allocator<Interval>> *)this,*(uint *)(this + 0x11c))
      ;
      *(undefined4 *)(this + 0x120) = *puVar7;
    }
    else {
      *(ulong *)(this + 0x120) = *(int *)(this + 0x120) + local_18;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## IsDifferentFileData

```asm
// === 08574ace WindowsExeFileFamily::IsDifferentFileData  [0x08574ace-0x8574b8d] ===
 8574ace:	55                   	push   %ebp
 8574acf:	89 e5                	mov    %esp,%ebp
 8574ad1:	83 ec 38             	sub    $0x38,%esp
 8574ad4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8574ad7:	89 04 24             	mov    %eax,(%esp)
 8574ada:	e8 c7 1b 00 00       	call   85766a6 <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEC1Ev>
 8574adf:	8b 45 08             	mov    0x8(%ebp),%eax
 8574ae2:	8d 50 0c             	lea    0xc(%eax),%edx
 8574ae5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8574ae8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574aec:	89 04 24             	mov    %eax,(%esp)
 8574aef:	e8 c0 1b 00 00       	call   85766b4 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE5beginEv>
 8574af4:	83 ec 04             	sub    $0x4,%esp
 8574af7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8574afa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8574afd:	eb 55                	jmp    8574b54 <_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile+0x86>
 8574aff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8574b02:	89 04 24             	mov    %eax,(%esp)
 8574b05:	e8 36 1c 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574b0a:	8b 00                	mov    (%eax),%eax
 8574b0c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8574b0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8574b12:	8b 10                	mov    (%eax),%edx
 8574b14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574b17:	8b 00                	mov    (%eax),%eax
 8574b19:	39 c2                	cmp    %eax,%edx
 8574b1b:	75 2c                	jne    8574b49 <_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile+0x7b>
 8574b1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574b20:	8b 08                	mov    (%eax),%ecx
 8574b22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574b25:	8b 50 04             	mov    0x4(%eax),%edx
 8574b28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8574b2b:	8b 40 04             	mov    0x4(%eax),%eax
 8574b2e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8574b32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574b36:	89 04 24             	mov    %eax,(%esp)
 8574b39:	e8 52 91 b0 ff       	call   807dc90 <memcmp@plt>
 8574b3e:	85 c0                	test   %eax,%eax
 8574b40:	75 07                	jne    8574b49 <_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile+0x7b>
 8574b42:	b8 00 00 00 00       	mov    $0x0,%eax
 8574b47:	eb 42                	jmp    8574b8b <_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile+0xbd>
 8574b49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8574b4c:	89 04 24             	mov    %eax,(%esp)
 8574b4f:	e8 d6 1b 00 00       	call   857672a <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEppEv>
 8574b54:	8b 45 08             	mov    0x8(%ebp),%eax
 8574b57:	8d 50 0c             	lea    0xc(%eax),%edx
 8574b5a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574b5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574b61:	89 04 24             	mov    %eax,(%esp)
 8574b64:	e8 6f 1b 00 00       	call   85766d8 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE3endEv>
 8574b69:	83 ec 04             	sub    $0x4,%esp
 8574b6c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574b6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574b73:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8574b76:	89 04 24             	mov    %eax,(%esp)
 8574b79:	e8 80 1b 00 00       	call   85766fe <_ZN9__gnu_cxxneIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8574b7e:	84 c0                	test   %al,%al
 8574b80:	0f 85 79 ff ff ff    	jne    8574aff <_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile+0x31>
 8574b86:	b8 01 00 00 00       	mov    $0x1,%eax
 8574b8b:	c9                   	leave
 8574b8c:	c3                   	ret
 8574b8d:	90                   	nop

```

```c
// WindowsExeFileFamily::IsDifferentFileData @ 0x8574ace

/* WindowsExeFileFamily::IsDifferentFileData(WindowsExeFile*) */

undefined4 __thiscall
WindowsExeFileFamily::IsDifferentFileData(WindowsExeFileFamily *this,WindowsExeFile *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int *local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_18);
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
  while( true ) {
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 1;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
                      ::operator*(local_18);
    local_10 = (int *)*local_10;
    if ((*local_10 == *(int *)param_1) &&
       (iVar2 = memcmp((void *)local_10[1],*(void **)(param_1 + 4),*(size_t *)param_1), iVar2 == 0))
    break;
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::operator++(local_18);
  }
  return 0;
}

```

---

## LoadWindowsExeFile

```asm
// === 0857463e WindowsExeFileFamily::LoadWindowsExeFile  [0x0857463e-0x8574735] ===
 857463e:	55                   	push   %ebp
 857463f:	89 e5                	mov    %esp,%ebp
 8574641:	57                   	push   %edi
 8574642:	56                   	push   %esi
 8574643:	53                   	push   %ebx
 8574644:	83 ec 2c             	sub    $0x2c,%esp
 8574647:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 857464e:	e8 fd fd 1a 00       	call   8724450 <_Znwj>
 8574653:	89 c3                	mov    %eax,%ebx
 8574655:	89 d8                	mov    %ebx,%eax
 8574657:	89 04 24             	mov    %eax,(%esp)
 857465a:	e8 5f f0 ff ff       	call   85736be <_ZN14WindowsExeFileC1Ev>
 857465f:	eb 18                	jmp    8574679 <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0x3b>
 8574661:	89 d6                	mov    %edx,%esi
 8574663:	89 c7                	mov    %eax,%edi
 8574665:	89 1c 24             	mov    %ebx,(%esp)
 8574668:	e8 83 fe 1a 00       	call   87244f0 <_ZdlPv>
 857466d:	89 f8                	mov    %edi,%eax
 857466f:	89 f2                	mov    %esi,%edx
 8574671:	89 04 24             	mov    %eax,(%esp)
 8574674:	e8 d7 f0 56 00       	call   8ae3750 <_Unwind_Resume>
 8574679:	89 d8                	mov    %ebx,%eax
 857467b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 857467e:	8b 45 08             	mov    0x8(%ebp),%eax
 8574681:	83 c0 0c             	add    $0xc,%eax
 8574684:	89 04 24             	mov    %eax,(%esp)
 8574687:	e8 da 20 00 00       	call   8576766 <_ZNKSt6vectorIP14WindowsExeFileSaIS1_EE5emptyEv>
 857468c:	84 c0                	test   %al,%al
 857468e:	74 15                	je     85746a5 <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0x67>
 8574690:	8b 45 08             	mov    0x8(%ebp),%eax
 8574693:	8d 50 18             	lea    0x18(%eax),%edx
 8574696:	8b 45 10             	mov    0x10(%ebp),%eax
 8574699:	89 44 24 04          	mov    %eax,0x4(%esp)
 857469d:	89 14 24             	mov    %edx,(%esp)
 85746a0:	e8 38 5f b1 ff       	call   808a5dd <_Z13StrCpyMaxPathPcPKc>
 85746a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85746a8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85746ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 85746af:	89 04 24             	mov    %eax,(%esp)
 85746b2:	e8 27 fa ff ff       	call   85740de <_ZN14WindowsExeFile18LoadWindowsExeFileEPKc>
 85746b7:	83 f0 01             	xor    $0x1,%eax
 85746ba:	84 c0                	test   %al,%al
 85746bc:	74 1e                	je     85746dc <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0x9e>
 85746be:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85746c1:	85 db                	test   %ebx,%ebx
 85746c3:	74 10                	je     85746d5 <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0x97>
 85746c5:	89 1c 24             	mov    %ebx,(%esp)
 85746c8:	e8 4d f0 ff ff       	call   857371a <_ZN14WindowsExeFileD1Ev>
 85746cd:	89 1c 24             	mov    %ebx,(%esp)
 85746d0:	e8 1b fe 1a 00       	call   87244f0 <_ZdlPv>
 85746d5:	b8 00 00 00 00       	mov    $0x0,%eax
 85746da:	eb 51                	jmp    857472d <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0xef>
 85746dc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85746df:	89 44 24 04          	mov    %eax,0x4(%esp)
 85746e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85746e6:	89 04 24             	mov    %eax,(%esp)
 85746e9:	e8 e0 03 00 00       	call   8574ace <_ZN20WindowsExeFileFamily19IsDifferentFileDataEP14WindowsExeFile>
 85746ee:	83 f0 01             	xor    $0x1,%eax
 85746f1:	84 c0                	test   %al,%al
 85746f3:	74 1e                	je     8574713 <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0xd5>
 85746f5:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85746f8:	85 db                	test   %ebx,%ebx
 85746fa:	74 10                	je     857470c <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0xce>
 85746fc:	89 1c 24             	mov    %ebx,(%esp)
 85746ff:	e8 16 f0 ff ff       	call   857371a <_ZN14WindowsExeFileD1Ev>
 8574704:	89 1c 24             	mov    %ebx,(%esp)
 8574707:	e8 e4 fd 1a 00       	call   87244f0 <_ZdlPv>
 857470c:	b8 01 00 00 00       	mov    $0x1,%eax
 8574711:	eb 1a                	jmp    857472d <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_+0xef>
 8574713:	8b 45 08             	mov    0x8(%ebp),%eax
 8574716:	8d 50 0c             	lea    0xc(%eax),%edx
 8574719:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 857471c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574720:	89 14 24             	mov    %edx,(%esp)
 8574723:	e8 82 20 00 00       	call   85767aa <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE9push_backERKS1_>
 8574728:	b8 01 00 00 00       	mov    $0x1,%eax
 857472d:	83 c4 2c             	add    $0x2c,%esp
 8574730:	5b                   	pop    %ebx
 8574731:	5e                   	pop    %esi
 8574732:	5f                   	pop    %edi
 8574733:	5d                   	pop    %ebp
 8574734:	c3                   	ret
 8574735:	90                   	nop

```

```c
// WindowsExeFileFamily::LoadWindowsExeFile @ 0x857463e

/* WindowsExeFileFamily::LoadWindowsExeFile(char const*, char const*) */

undefined4 __thiscall
WindowsExeFileFamily::LoadWindowsExeFile(WindowsExeFileFamily *this,char *param_1,char *param_2)

{
  char cVar1;
  WindowsExeFile *pWVar2;
  undefined4 uVar3;
  WindowsExeFile *local_20 [4];
  
  pWVar2 = operator_new(0x20);
                    /* try { // try from 0857465a to 0857465e has its CatchHandler @ 08574661 */
  WindowsExeFile::WindowsExeFile(pWVar2);
  local_20[0] = pWVar2;
  cVar1 = std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::empty();
  if (cVar1 != '\0') {
    StrCpyMaxPath((char *)(this + 0x18),param_2);
  }
  cVar1 = WindowsExeFile::LoadWindowsExeFile(local_20[0],param_1);
  pWVar2 = local_20[0];
  if (cVar1 == '\x01') {
    cVar1 = IsDifferentFileData(this,local_20[0]);
    pWVar2 = local_20[0];
    if (cVar1 == '\x01') {
      std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::push_back
                ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc),local_20);
      uVar3 = 1;
    }
    else {
      if (local_20[0] != (WindowsExeFile *)0x0) {
        WindowsExeFile::~WindowsExeFile(local_20[0]);
        operator_delete(pWVar2);
      }
      uVar3 = 1;
    }
  }
  else {
    if (local_20[0] != (WindowsExeFile *)0x0) {
      WindowsExeFile::~WindowsExeFile(local_20[0]);
      operator_delete(pWVar2);
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## SetCheckingOption

```asm
// === 08574620 WindowsExeFileFamily::SetCheckingOption  [0x08574620-0x857463d] ===
 8574620:	55                   	push   %ebp
 8574621:	89 e5                	mov    %esp,%ebp
 8574623:	8b 45 08             	mov    0x8(%ebp),%eax
 8574626:	8b 55 0c             	mov    0xc(%ebp),%edx
 8574629:	89 90 24 01 00 00    	mov    %edx,0x124(%eax)
 857462f:	8b 45 08             	mov    0x8(%ebp),%eax
 8574632:	8b 55 10             	mov    0x10(%ebp),%edx
 8574635:	89 90 28 01 00 00    	mov    %edx,0x128(%eax)
 857463b:	5d                   	pop    %ebp
 857463c:	c3                   	ret
 857463d:	90                   	nop

```

```c
// WindowsExeFileFamily::SetCheckingOption @ 0x8574620

/* WindowsExeFileFamily::SetCheckingOption(unsigned long, unsigned long) */

void __thiscall
WindowsExeFileFamily::SetCheckingOption(WindowsExeFileFamily *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 0x124) = param_1;
  *(ulong *)(this + 0x128) = param_2;
  return;
}

```

---

## WindowsExeFileFamily

```asm
// === 0857446a WindowsExeFileFamily::WindowsExeFileFamily  [0x0857446a-0x85744ff] ===
 857446a:	55                   	push   %ebp
 857446b:	89 e5                	mov    %esp,%ebp
 857446d:	56                   	push   %esi
 857446e:	53                   	push   %ebx
 857446f:	83 ec 10             	sub    $0x10,%esp
 8574472:	8b 45 08             	mov    0x8(%ebp),%eax
 8574475:	89 04 24             	mov    %eax,(%esp)
 8574478:	e8 1f 1a 00 00       	call   8575e9c <_ZN11IntervalSetC1Ev>
 857447d:	8b 45 08             	mov    0x8(%ebp),%eax
 8574480:	83 c0 0c             	add    $0xc,%eax
 8574483:	89 04 24             	mov    %eax,(%esp)
 8574486:	e8 a9 21 00 00       	call   8576634 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EEC1Ev>
 857448b:	8b 45 08             	mov    0x8(%ebp),%eax
 857448e:	83 c0 18             	add    $0x18,%eax
 8574491:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 8574498:	00 
 8574499:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85744a0:	00 
 85744a1:	89 04 24             	mov    %eax,(%esp)
 85744a4:	e8 17 98 b0 ff       	call   807dcc0 <memset@plt>
 85744a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85744ac:	c7 80 1c 01 00 00 00 	movl   $0x0,0x11c(%eax)
 85744b3:	00 00 00 
 85744b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85744b9:	c7 80 20 01 00 00 00 	movl   $0x0,0x120(%eax)
 85744c0:	00 00 00 
 85744c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85744c6:	c7 80 24 01 00 00 00 	movl   $0x0,0x124(%eax)
 85744cd:	00 00 00 
 85744d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85744d3:	c7 80 28 01 00 00 00 	movl   $0x0,0x128(%eax)
 85744da:	00 00 00 
 85744dd:	83 c4 10             	add    $0x10,%esp
 85744e0:	5b                   	pop    %ebx
 85744e1:	5e                   	pop    %esi
 85744e2:	5d                   	pop    %ebp
 85744e3:	c3                   	ret
 85744e4:	89 d3                	mov    %edx,%ebx
 85744e6:	89 c6                	mov    %eax,%esi
 85744e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85744eb:	89 04 24             	mov    %eax,(%esp)
 85744ee:	e8 bd 19 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 85744f3:	89 f0                	mov    %esi,%eax
 85744f5:	89 da                	mov    %ebx,%edx
 85744f7:	89 04 24             	mov    %eax,(%esp)
 85744fa:	e8 51 f2 56 00       	call   8ae3750 <_Unwind_Resume>
 85744ff:	90                   	nop

```

```c
// WindowsExeFileFamily::WindowsExeFileFamily @ 0x857446a

/* WindowsExeFileFamily::WindowsExeFileFamily() */

void __thiscall WindowsExeFileFamily::WindowsExeFileFamily(WindowsExeFileFamily *this)

{
  IntervalSet::IntervalSet((IntervalSet *)this);
                    /* try { // try from 08574486 to 0857448a has its CatchHandler @ 085744e4 */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::vector
            ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc));
  memset(this + 0x18,0,0x104);
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  return;
}

```

---

## ~WindowsExeFileFamily

```asm
// === 08574500 WindowsExeFileFamily::~WindowsExeFileFamily  [0x08574500-0x857461f] ===
 8574500:	55                   	push   %ebp
 8574501:	89 e5                	mov    %esp,%ebp
 8574503:	56                   	push   %esi
 8574504:	53                   	push   %ebx
 8574505:	83 ec 30             	sub    $0x30,%esp
 8574508:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857450b:	89 04 24             	mov    %eax,(%esp)
 857450e:	e8 93 21 00 00       	call   85766a6 <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEC1Ev>
 8574513:	8b 45 08             	mov    0x8(%ebp),%eax
 8574516:	8d 50 0c             	lea    0xc(%eax),%edx
 8574519:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 857451c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574520:	89 04 24             	mov    %eax,(%esp)
 8574523:	e8 8c 21 00 00       	call   85766b4 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE5beginEv>
 8574528:	83 ec 04             	sub    $0x4,%esp
 857452b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857452e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8574531:	eb 53                	jmp    8574586 <_ZN20WindowsExeFileFamilyD1Ev+0x86>
 8574533:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8574536:	89 04 24             	mov    %eax,(%esp)
 8574539:	e8 02 22 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 857453e:	8b 00                	mov    (%eax),%eax
 8574540:	85 c0                	test   %eax,%eax
 8574542:	0f 95 c0             	setne  %al
 8574545:	84 c0                	test   %al,%al
 8574547:	74 32                	je     857457b <_ZN20WindowsExeFileFamilyD1Ev+0x7b>
 8574549:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857454c:	89 04 24             	mov    %eax,(%esp)
 857454f:	e8 ec 21 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574554:	8b 18                	mov    (%eax),%ebx
 8574556:	85 db                	test   %ebx,%ebx
 8574558:	74 10                	je     857456a <_ZN20WindowsExeFileFamilyD1Ev+0x6a>
 857455a:	89 1c 24             	mov    %ebx,(%esp)
 857455d:	e8 b8 f1 ff ff       	call   857371a <_ZN14WindowsExeFileD1Ev>
 8574562:	89 1c 24             	mov    %ebx,(%esp)
 8574565:	e8 86 ff 1a 00       	call   87244f0 <_ZdlPv>
 857456a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857456d:	89 04 24             	mov    %eax,(%esp)
 8574570:	e8 cb 21 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 8574575:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 857457b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857457e:	89 04 24             	mov    %eax,(%esp)
 8574581:	e8 a4 21 00 00       	call   857672a <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEppEv>
 8574586:	8b 45 08             	mov    0x8(%ebp),%eax
 8574589:	8d 50 0c             	lea    0xc(%eax),%edx
 857458c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857458f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574593:	89 04 24             	mov    %eax,(%esp)
 8574596:	e8 3d 21 00 00       	call   85766d8 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE3endEv>
 857459b:	83 ec 04             	sub    $0x4,%esp
 857459e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85745a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85745a5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85745a8:	89 04 24             	mov    %eax,(%esp)
 85745ab:	e8 4e 21 00 00       	call   85766fe <_ZN9__gnu_cxxneIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85745b0:	84 c0                	test   %al,%al
 85745b2:	0f 85 7b ff ff ff    	jne    8574533 <_ZN20WindowsExeFileFamilyD1Ev+0x33>
 85745b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85745bb:	83 c0 0c             	add    $0xc,%eax
 85745be:	89 04 24             	mov    %eax,(%esp)
 85745c1:	e8 84 21 00 00       	call   857674a <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE5clearEv>
 85745c6:	eb 18                	jmp    85745e0 <_ZN20WindowsExeFileFamilyD1Ev+0xe0>
 85745c8:	89 d3                	mov    %edx,%ebx
 85745ca:	89 c6                	mov    %eax,%esi
 85745cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85745cf:	83 c0 0c             	add    $0xc,%eax
 85745d2:	89 04 24             	mov    %eax,(%esp)
 85745d5:	e8 6e 20 00 00       	call   8576648 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EED1Ev>
 85745da:	89 f0                	mov    %esi,%eax
 85745dc:	89 da                	mov    %ebx,%edx
 85745de:	eb 10                	jmp    85745f0 <_ZN20WindowsExeFileFamilyD1Ev+0xf0>
 85745e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85745e3:	83 c0 0c             	add    $0xc,%eax
 85745e6:	89 04 24             	mov    %eax,(%esp)
 85745e9:	e8 5a 20 00 00       	call   8576648 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EED1Ev>
 85745ee:	eb 1b                	jmp    857460b <_ZN20WindowsExeFileFamilyD1Ev+0x10b>
 85745f0:	89 d3                	mov    %edx,%ebx
 85745f2:	89 c6                	mov    %eax,%esi
 85745f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85745f7:	89 04 24             	mov    %eax,(%esp)
 85745fa:	e8 b1 18 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 85745ff:	89 f0                	mov    %esi,%eax
 8574601:	89 da                	mov    %ebx,%edx
 8574603:	89 04 24             	mov    %eax,(%esp)
 8574606:	e8 45 f1 56 00       	call   8ae3750 <_Unwind_Resume>
 857460b:	8b 45 08             	mov    0x8(%ebp),%eax
 857460e:	89 04 24             	mov    %eax,(%esp)
 8574611:	e8 9a 18 00 00       	call   8575eb0 <_ZN11IntervalSetD1Ev>
 8574616:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8574619:	83 c4 00             	add    $0x0,%esp
 857461c:	5b                   	pop    %ebx
 857461d:	5e                   	pop    %esi
 857461e:	5d                   	pop    %ebp
 857461f:	c3                   	ret

```

```c
// WindowsExeFileFamily::~WindowsExeFileFamily @ 0x8574500

/* WindowsExeFileFamily::~WindowsExeFileFamily() */

void __thiscall WindowsExeFileFamily::~WindowsExeFileFamily(WindowsExeFileFamily *this)

{
  WindowsExeFile *this_00;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_14 [4];
  __normal_iterator local_10 [4];
  
  __gnu_cxx::
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>::
  __normal_iterator(local_14);
                    /* try { // try from 08574523 to 085745c5 has its CatchHandler @ 085745c8 */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
  while( true ) {
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
                    ::operator*(local_14);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_14);
      this_00 = (WindowsExeFile *)*puVar3;
      if (this_00 != (WindowsExeFile *)0x0) {
        WindowsExeFile::~WindowsExeFile(this_00);
        operator_delete(this_00);
      }
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_14);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::operator++(local_14);
  }
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::clear
            ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc));
                    /* try { // try from 085745e9 to 085745ed has its CatchHandler @ 085745f0 */
  std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::~vector
            ((vector<WindowsExeFile*,std::allocator<WindowsExeFile*>> *)(this + 0xc));
  IntervalSet::~IntervalSet((IntervalSet *)this);
  return;
}

```

