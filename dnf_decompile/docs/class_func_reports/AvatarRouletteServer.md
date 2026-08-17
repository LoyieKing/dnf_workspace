# AvatarRouletteServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## AvatarRouletteServer

```asm
// === 0817f354 AvatarRouletteServer::AvatarRouletteServer  [0x0817f354-0x817f371] ===
 817f354:	55                   	push   %ebp
 817f355:	89 e5                	mov    %esp,%ebp
 817f357:	83 ec 18             	sub    $0x18,%esp
 817f35a:	8b 45 08             	mov    0x8(%ebp),%eax
 817f35d:	89 04 24             	mov    %eax,(%esp)
 817f360:	e8 81 13 00 00       	call   81806e6 <_ZNSt3mapImS_IiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEES4_ImESaIS6_IKmSA_EEEC1Ev>
 817f365:	8b 45 08             	mov    0x8(%ebp),%eax
 817f368:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 817f36f:	c9                   	leave
 817f370:	c3                   	ret
 817f371:	90                   	nop

```

```c
// AvatarRouletteServer::AvatarRouletteServer @ 0x817f354

/* AvatarRouletteServer::AvatarRouletteServer() */

void __thiscall AvatarRouletteServer::AvatarRouletteServer(AvatarRouletteServer *this)

{
  std::
  map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
  ::map((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
         *)this);
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

```

---

## Init

```asm
// === 0817f706 AvatarRouletteServer::Init  [0x0817f706-0x817fb09] ===
 817f706:	55                   	push   %ebp
 817f707:	89 e5                	mov    %esp,%ebp
 817f709:	57                   	push   %edi
 817f70a:	56                   	push   %esi
 817f70b:	53                   	push   %ebx
 817f70c:	83 ec 6c             	sub    $0x6c,%esp
 817f70f:	c7 04 24 1c 01 00 00 	movl   $0x11c,(%esp)
 817f716:	e8 35 4d 5a 00       	call   8724450 <_Znwj>
 817f71b:	89 c3                	mov    %eax,%ebx
 817f71d:	89 d8                	mov    %ebx,%eax
 817f71f:	89 04 24             	mov    %eax,(%esp)
 817f722:	e8 71 24 79 00       	call   8911b98 <_ZN14AvatarRouletteC1Ev>
 817f727:	eb 18                	jmp    817f741 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3b>
 817f729:	89 d6                	mov    %edx,%esi
 817f72b:	89 c7                	mov    %eax,%edi
 817f72d:	89 1c 24             	mov    %ebx,(%esp)
 817f730:	e8 bb 4d 5a 00       	call   87244f0 <_ZdlPv>
 817f735:	89 f8                	mov    %edi,%eax
 817f737:	89 f2                	mov    %esi,%edx
 817f739:	89 04 24             	mov    %eax,(%esp)
 817f73c:	e8 0f 40 96 00       	call   8ae3750 <_Unwind_Resume>
 817f741:	89 da                	mov    %ebx,%edx
 817f743:	8b 45 08             	mov    0x8(%ebp),%eax
 817f746:	89 50 18             	mov    %edx,0x18(%eax)
 817f749:	8b 45 08             	mov    0x8(%ebp),%eax
 817f74c:	8b 40 18             	mov    0x18(%eax),%eax
 817f74f:	8b 55 0c             	mov    0xc(%ebp),%edx
 817f752:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f756:	89 04 24             	mov    %eax,(%esp)
 817f759:	e8 f0 26 79 00       	call   8911e4e <_ZN14AvatarRoulette4swapEPS_>
 817f75e:	8b 45 08             	mov    0x8(%ebp),%eax
 817f761:	8b 40 18             	mov    0x18(%eax),%eax
 817f764:	8b 50 0c             	mov    0xc(%eax),%edx
 817f767:	8b 45 08             	mov    0x8(%ebp),%eax
 817f76a:	8b 40 18             	mov    0x18(%eax),%eax
 817f76d:	8b 40 10             	mov    0x10(%eax),%eax
 817f770:	01 c2                	add    %eax,%edx
 817f772:	8b 45 08             	mov    0x8(%ebp),%eax
 817f775:	89 50 1c             	mov    %edx,0x1c(%eax)
 817f778:	c6 45 bb 01          	movb   $0x1,-0x45(%ebp)
 817f77c:	e8 00 ca f4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 817f781:	0f b6 80 10 03 00 00 	movzbl 0x310(%eax),%eax
 817f788:	84 c0                	test   %al,%al
 817f78a:	0f 84 6c 03 00 00    	je     817fafc <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3f6>
 817f790:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 817f797:	e9 51 03 00 00       	jmp    817faed <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3e7>
 817f79c:	8b 45 08             	mov    0x8(%ebp),%eax
 817f79f:	8b 48 18             	mov    0x18(%eax),%ecx
 817f7a2:	8b 55 bc             	mov    -0x44(%ebp),%edx
 817f7a5:	89 d0                	mov    %edx,%eax
 817f7a7:	01 c0                	add    %eax,%eax
 817f7a9:	01 d0                	add    %edx,%eax
 817f7ab:	c1 e0 02             	shl    $0x2,%eax
 817f7ae:	83 c0 10             	add    $0x10,%eax
 817f7b1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817f7b4:	83 c0 04             	add    $0x4,%eax
 817f7b7:	89 45 c0             	mov    %eax,-0x40(%ebp)
 817f7ba:	8b 45 c0             	mov    -0x40(%ebp),%eax
 817f7bd:	89 04 24             	mov    %eax,(%esp)
 817f7c0:	e8 9b 0f 00 00       	call   8180760 <_ZNKSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4sizeEv>
 817f7c5:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 817f7cc:	8b 45 c0             	mov    -0x40(%ebp),%eax
 817f7cf:	89 04 24             	mov    %eax,(%esp)
 817f7d2:	e8 89 0f 00 00       	call   8180760 <_ZNKSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4sizeEv>
 817f7d7:	89 45 c8             	mov    %eax,-0x38(%ebp)
 817f7da:	e9 f9 02 00 00       	jmp    817fad8 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3d2>
 817f7df:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817f7e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f7e6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 817f7e9:	89 04 24             	mov    %eax,(%esp)
 817f7ec:	e8 91 0f 00 00       	call   8180782 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EEixEj>
 817f7f1:	89 45 cc             	mov    %eax,-0x34(%ebp)
 817f7f4:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 817f7fb:	e9 c5 02 00 00       	jmp    817fac5 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3bf>
 817f800:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817f803:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f807:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817f80a:	89 04 24             	mov    %eax,(%esp)
 817f80d:	e8 8a 0f 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817f812:	8b 00                	mov    (%eax),%eax
 817f814:	89 c3                	mov    %eax,%ebx
 817f816:	e8 80 c9 f4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 817f81b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 817f81f:	89 04 24             	mov    %eax,(%esp)
 817f822:	e8 0b 02 1e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 817f827:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 817f82a:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 817f82e:	75 48                	jne    817f878 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x172>
 817f830:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817f833:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f837:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817f83a:	89 04 24             	mov    %eax,(%esp)
 817f83d:	e8 5a 0f 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817f842:	8b 00                	mov    (%eax),%eax
 817f844:	89 44 24 14          	mov    %eax,0x14(%esp)
 817f848:	c7 44 24 10 08 ba b8 	movl   $0x8b8ba08,0x10(%esp)
 817f84f:	08 
 817f850:	c7 44 24 0c 80 00 00 	movl   $0x80,0xc(%esp)
 817f857:	00 
 817f858:	c7 44 24 08 00 c8 b8 	movl   $0x8b8c800,0x8(%esp)
 817f85f:	08 
 817f860:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 817f867:	08 
 817f868:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817f86f:	e8 96 43 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817f874:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 817f878:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817f87b:	8b 00                	mov    (%eax),%eax
 817f87d:	83 c0 10             	add    $0x10,%eax
 817f880:	8b 10                	mov    (%eax),%edx
 817f882:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817f885:	89 04 24             	mov    %eax,(%esp)
 817f888:	ff d2                	call   *%edx
 817f88a:	83 f0 01             	xor    $0x1,%eax
 817f88d:	84 c0                	test   %al,%al
 817f88f:	74 48                	je     817f8d9 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x1d3>
 817f891:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817f894:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f898:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817f89b:	89 04 24             	mov    %eax,(%esp)
 817f89e:	e8 f9 0e 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817f8a3:	8b 00                	mov    (%eax),%eax
 817f8a5:	89 44 24 14          	mov    %eax,0x14(%esp)
 817f8a9:	c7 44 24 10 34 ba b8 	movl   $0x8b8ba34,0x10(%esp)
 817f8b0:	08 
 817f8b1:	c7 44 24 0c 86 00 00 	movl   $0x86,0xc(%esp)
 817f8b8:	00 
 817f8b9:	c7 44 24 08 00 c8 b8 	movl   $0x8b8c800,0x8(%esp)
 817f8c0:	08 
 817f8c1:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 817f8c8:	08 
 817f8c9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817f8d0:	e8 35 43 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817f8d5:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 817f8d9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817f8dc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817f8df:	8b 45 bc             	mov    -0x44(%ebp),%eax
 817f8e2:	0f be d0             	movsbl %al,%edx
 817f8e5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817f8e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f8ec:	89 04 24             	mov    %eax,(%esp)
 817f8ef:	e8 34 de 38 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 817f8f4:	83 f0 01             	xor    $0x1,%eax
 817f8f7:	84 c0                	test   %al,%al
 817f8f9:	74 4f                	je     817f94a <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x244>
 817f8fb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817f8fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f902:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817f905:	89 04 24             	mov    %eax,(%esp)
 817f908:	e8 8f 0e 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817f90d:	8b 00                	mov    (%eax),%eax
 817f90f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 817f912:	89 54 24 18          	mov    %edx,0x18(%esp)
 817f916:	89 44 24 14          	mov    %eax,0x14(%esp)
 817f91a:	c7 44 24 10 60 ba b8 	movl   $0x8b8ba60,0x10(%esp)
 817f921:	08 
 817f922:	c7 44 24 0c 8d 00 00 	movl   $0x8d,0xc(%esp)
 817f929:	00 
 817f92a:	c7 44 24 08 00 c8 b8 	movl   $0x8b8c800,0x8(%esp)
 817f931:	08 
 817f932:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 817f939:	08 
 817f93a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817f941:	e8 c4 42 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817f946:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 817f94a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817f94d:	8b 00                	mov    (%eax),%eax
 817f94f:	83 c0 0c             	add    $0xc,%eax
 817f952:	8b 10                	mov    (%eax),%edx
 817f954:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817f957:	89 04 24             	mov    %eax,(%esp)
 817f95a:	ff d2                	call   *%edx
 817f95c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 817f95f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817f962:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 817f965:	74 56                	je     817f9bd <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x2b7>
 817f967:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817f96a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f96e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817f971:	89 04 24             	mov    %eax,(%esp)
 817f974:	e8 23 0e 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817f979:	8b 00                	mov    (%eax),%eax
 817f97b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 817f97e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 817f982:	8b 55 dc             	mov    -0x24(%ebp),%edx
 817f985:	89 54 24 18          	mov    %edx,0x18(%esp)
 817f989:	89 44 24 14          	mov    %eax,0x14(%esp)
 817f98d:	c7 44 24 10 9c ba b8 	movl   $0x8b8ba9c,0x10(%esp)
 817f994:	08 
 817f995:	c7 44 24 0c 95 00 00 	movl   $0x95,0xc(%esp)
 817f99c:	00 
 817f99d:	c7 44 24 08 00 c8 b8 	movl   $0x8b8c800,0x8(%esp)
 817f9a4:	08 
 817f9a5:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 817f9ac:	08 
 817f9ad:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817f9b4:	e8 51 42 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817f9b9:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 817f9bd:	83 7d d0 08          	cmpl   $0x8,-0x30(%ebp)
 817f9c1:	0f 84 f9 00 00 00    	je     817fac0 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3ba>
 817f9c7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817f9ca:	89 04 24             	mov    %eax,(%esp)
 817f9cd:	e8 82 12 f9 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 817f9d2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 817f9d5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 817f9dc:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 817f9e0:	77 6c                	ja     817fa4e <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x348>
 817f9e2:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 817f9e6:	74 66                	je     817fa4e <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x348>
 817f9e8:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 817f9ef:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817f9f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f9f6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817f9f9:	89 04 24             	mov    %eax,(%esp)
 817f9fc:	e8 9b 0d 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817fa01:	8b 00                	mov    (%eax),%eax
 817fa03:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 817fa06:	89 54 24 20          	mov    %edx,0x20(%esp)
 817fa0a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 817fa0d:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 817fa11:	8b 55 e0             	mov    -0x20(%ebp),%edx
 817fa14:	89 54 24 18          	mov    %edx,0x18(%esp)
 817fa18:	89 44 24 14          	mov    %eax,0x14(%esp)
 817fa1c:	c7 44 24 10 d4 ba b8 	movl   $0x8b8bad4,0x10(%esp)
 817fa23:	08 
 817fa24:	c7 44 24 0c a3 00 00 	movl   $0xa3,0xc(%esp)
 817fa2b:	00 
 817fa2c:	c7 44 24 08 00 c8 b8 	movl   $0x8b8c800,0x8(%esp)
 817fa33:	08 
 817fa34:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 817fa3b:	08 
 817fa3c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817fa43:	e8 c2 41 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817fa48:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 817fa4c:	eb 73                	jmp    817fac1 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3bb>
 817fa4e:	83 7d c4 01          	cmpl   $0x1,-0x3c(%ebp)
 817fa52:	76 6d                	jbe    817fac1 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3bb>
 817fa54:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 817fa58:	74 67                	je     817fac1 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3bb>
 817fa5a:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 817fa61:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817fa64:	89 44 24 04          	mov    %eax,0x4(%esp)
 817fa68:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817fa6b:	89 04 24             	mov    %eax,(%esp)
 817fa6e:	e8 29 0d 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817fa73:	8b 00                	mov    (%eax),%eax
 817fa75:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 817fa78:	89 54 24 20          	mov    %edx,0x20(%esp)
 817fa7c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 817fa7f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 817fa83:	8b 55 e0             	mov    -0x20(%ebp),%edx
 817fa86:	89 54 24 18          	mov    %edx,0x18(%esp)
 817fa8a:	89 44 24 14          	mov    %eax,0x14(%esp)
 817fa8e:	c7 44 24 10 d4 ba b8 	movl   $0x8b8bad4,0x10(%esp)
 817fa95:	08 
 817fa96:	c7 44 24 0c a9 00 00 	movl   $0xa9,0xc(%esp)
 817fa9d:	00 
 817fa9e:	c7 44 24 08 00 c8 b8 	movl   $0x8b8c800,0x8(%esp)
 817faa5:	08 
 817faa6:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 817faad:	08 
 817faae:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817fab5:	e8 50 41 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817faba:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 817fabe:	eb 01                	jmp    817fac1 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x3bb>
 817fac0:	90                   	nop
 817fac1:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 817fac5:	83 7d d0 08          	cmpl   $0x8,-0x30(%ebp)
 817fac9:	0f 9e c0             	setle  %al
 817facc:	84 c0                	test   %al,%al
 817face:	0f 85 2c fd ff ff    	jne    817f800 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0xfa>
 817fad4:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 817fad8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817fadb:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 817fade:	0f 92 c0             	setb   %al
 817fae1:	84 c0                	test   %al,%al
 817fae3:	0f 85 f6 fc ff ff    	jne    817f7df <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0xd9>
 817fae9:	83 45 bc 01          	addl   $0x1,-0x44(%ebp)
 817faed:	83 7d bc 0a          	cmpl   $0xa,-0x44(%ebp)
 817faf1:	0f 9e c0             	setle  %al
 817faf4:	84 c0                	test   %al,%al
 817faf6:	0f 85 a0 fc ff ff    	jne    817f79c <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette+0x96>
 817fafc:	b8 01 00 00 00       	mov    $0x1,%eax
 817fb01:	83 c4 6c             	add    $0x6c,%esp
 817fb04:	5b                   	pop    %ebx
 817fb05:	5e                   	pop    %esi
 817fb06:	5f                   	pop    %edi
 817fb07:	5d                   	pop    %ebp
 817fb08:	c3                   	ret
 817fb09:	90                   	nop

```

```c
// AvatarRouletteServer::Init @ 0x817f706

/* AvatarRouletteServer::Init(AvatarRoulette*) */

undefined4 __thiscall AvatarRouletteServer::Init(AvatarRouletteServer *this,AvatarRoulette *param_1)

{
  char cVar1;
  AvatarRoulette *this_00;
  int iVar2;
  vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
  *this_01;
  uint uVar3;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *this_02;
  int *piVar4;
  CDataManager *this_03;
  CItem *this_04;
  undefined4 *puVar5;
  uint uVar6;
  int local_48;
  uint local_40;
  uint local_34;
  
  this_00 = operator_new(0x11c);
                    /* try { // try from 0817f722 to 0817f726 has its CatchHandler @ 0817f729 */
  AvatarRoulette::AvatarRoulette(this_00);
  *(AvatarRoulette **)(this + 0x18) = this_00;
  AvatarRoulette::swap(*(AvatarRoulette **)(this + 0x18),param_1);
  *(int *)(this + 0x1c) =
       *(int *)(*(int *)(this + 0x18) + 0xc) + *(int *)(*(int *)(this + 0x18) + 0x10);
  iVar2 = G_CEnvironment();
  if (*(char *)(iVar2 + 0x310) != '\0') {
    for (local_48 = 0; local_48 < 0xb; local_48 = local_48 + 1) {
      this_01 = (vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                 *)(*(int *)(this + 0x18) + local_48 * 0xc + 0x14);
      std::
      vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
      ::size(this_01);
      local_40 = 0;
      uVar3 = std::
              vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
              ::size(this_01);
      for (; local_40 < uVar3; local_40 = local_40 + 1) {
        this_02 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                   *)std::
                     vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                     ::operator[](this_01,local_40);
        for (local_34 = 0; (int)local_34 < 9; local_34 = local_34 + 1) {
          piVar4 = (int *)std::
                          vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                          ::operator[](this_02,local_34);
          iVar2 = *piVar4;
          this_03 = (CDataManager *)G_CDataManager();
          this_04 = (CItem *)CDataManager::find_item(this_03,iVar2);
          if (this_04 == (CItem *)0x0) {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x80,
                       "AvatarRouletteServer not exist item_no(%d)",*puVar5);
          }
          cVar1 = (**(code **)(*(int *)this_04 + 0x10))(this_04);
          if (cVar1 != '\x01') {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x86,
                       "AvatarRouletteServer no avatar item_no(%d)",*puVar5);
          }
          cVar1 = CItem::check_job_type(this_04,(char)local_48);
          if (cVar1 != '\x01') {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x8d,
                       "AvatarRouletteServer item_no(%d) check_job_type(%d)==false",*puVar5,local_48
                      );
          }
          uVar6 = (**(code **)(*(int *)this_04 + 0xc))(this_04);
          if (uVar6 != local_34) {
            puVar5 = (undefined4 *)
                     std::
                     vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                     ::operator[](this_02,local_34);
            LogManager::logFormat
                      (1,"localjapan/Arad_AvatarRoulette.cpp",
                       "bool AvatarRouletteServer::Init(AvatarRoulette*)",0x95,
                       "AvatarRouletteServer item_no(%d) GetItemType(%d)!=%d",*puVar5,uVar6,local_34
                      );
          }
          if (local_34 != 8) {
            iVar2 = CItem::get_grade(this_04);
            if ((local_40 < 2) && (iVar2 != 2)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                       ::operator[](this_02,local_34);
              LogManager::logFormat
                        (1,"localjapan/Arad_AvatarRoulette.cpp",
                         "bool AvatarRouletteServer::Init(AvatarRoulette*)",0xa3,
                         "AvatarRouletteServer item_no(%d) get_grade(%d)!=%d, line_num(%d)",*puVar5,
                         iVar2,2,local_40);
            }
            else if ((1 < local_40) && (iVar2 != 1)) {
              puVar5 = (undefined4 *)
                       std::
                       vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                       ::operator[](this_02,local_34);
              LogManager::logFormat
                        (1,"localjapan/Arad_AvatarRoulette.cpp",
                         "bool AvatarRouletteServer::Init(AvatarRoulette*)",0xa9,
                         "AvatarRouletteServer item_no(%d) get_grade(%d)!=%d, line_num(%d)",*puVar5,
                         iVar2,1,local_40);
            }
          }
        }
      }
    }
  }
  return 1;
}

```

---

## InitAddCharacSkill

```asm
// === 0817f386 AvatarRouletteServer::InitAddCharacSkill  [0x0817f386-0x817f705] ===
 817f386:	55                   	push   %ebp
 817f387:	89 e5                	mov    %esp,%ebp
 817f389:	56                   	push   %esi
 817f38a:	53                   	push   %ebx
 817f38b:	81 ec 20 09 00 00    	sub    $0x920,%esp
 817f391:	e8 eb cd f4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 817f396:	0f b6 80 10 03 00 00 	movzbl 0x310(%eax),%eax
 817f39d:	84 c0                	test   %al,%al
 817f39f:	0f 84 4f 03 00 00    	je     817f6f4 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x36e>
 817f3a5:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 817f3ac:	e9 34 03 00 00       	jmp    817f6e5 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x35f>
 817f3b1:	8b 45 08             	mov    0x8(%ebp),%eax
 817f3b4:	8b 48 18             	mov    0x18(%eax),%ecx
 817f3b7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 817f3ba:	89 d0                	mov    %edx,%eax
 817f3bc:	01 c0                	add    %eax,%eax
 817f3be:	01 d0                	add    %edx,%eax
 817f3c0:	c1 e0 02             	shl    $0x2,%eax
 817f3c3:	83 c0 10             	add    $0x10,%eax
 817f3c6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817f3c9:	83 c0 04             	add    $0x4,%eax
 817f3cc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817f3cf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817f3d2:	89 04 24             	mov    %eax,(%esp)
 817f3d5:	e8 86 13 00 00       	call   8180760 <_ZNKSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4sizeEv>
 817f3da:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 817f3e1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817f3e4:	89 04 24             	mov    %eax,(%esp)
 817f3e7:	e8 74 13 00 00       	call   8180760 <_ZNKSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4sizeEv>
 817f3ec:	89 45 e0             	mov    %eax,-0x20(%ebp)
 817f3ef:	e9 dc 02 00 00       	jmp    817f6d0 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x34a>
 817f3f4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817f3f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f3fb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817f3fe:	89 04 24             	mov    %eax,(%esp)
 817f401:	e8 7c 13 00 00       	call   8180782 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EEixEj>
 817f406:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 817f409:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 817f410:	e9 a8 02 00 00       	jmp    817f6bd <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x337>
 817f415:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 817f419:	0f 85 9a 02 00 00    	jne    817f6b9 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x333>
 817f41f:	83 7d d4 09          	cmpl   $0x9,-0x2c(%ebp)
 817f423:	74 0a                	je     817f42f <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0xa9>
 817f425:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 817f429:	0f 85 8a 02 00 00    	jne    817f6b9 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x333>
 817f42f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 817f432:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f436:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817f439:	89 04 24             	mov    %eax,(%esp)
 817f43c:	e8 5b 13 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817f441:	8b 00                	mov    (%eax),%eax
 817f443:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f447:	c7 04 24 00 ac 4f 09 	movl   $0x94fac00,(%esp)
 817f44e:	e8 fb b8 73 00       	call   88bad4e <_ZNK16STScriptFileList11GetFileNameEi>
 817f453:	89 45 ec             	mov    %eax,-0x14(%ebp)
 817f456:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 817f45a:	0f 84 59 02 00 00    	je     817f6b9 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x333>
 817f460:	8d 85 fc f6 ff ff    	lea    -0x904(%ebp),%eax
 817f466:	89 04 24             	mov    %eax,(%esp)
 817f469:	e8 14 e7 80 00       	call   898db82 <_ZN17STEquipmentScriptC1Ev>
 817f46e:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 817f475:	ff 
 817f476:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 817f47d:	00 
 817f47e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817f485:	00 
 817f486:	8b 45 ec             	mov    -0x14(%ebp),%eax
 817f489:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f48d:	8d 85 fc f6 ff ff    	lea    -0x904(%ebp),%eax
 817f493:	89 04 24             	mov    %eax,(%esp)
 817f496:	e8 50 26 81 00       	call   8991aeb <_Z21ImportEquipmentScriptP17STEquipmentScriptPKcbii>
 817f49b:	83 f0 01             	xor    $0x1,%eax
 817f49e:	84 c0                	test   %al,%al
 817f4a0:	74 42                	je     817f4e4 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x15e>
 817f4a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 817f4a5:	89 44 24 14          	mov    %eax,0x14(%esp)
 817f4a9:	c7 44 24 10 a4 b9 b8 	movl   $0x8b8b9a4,0x10(%esp)
 817f4b0:	08 
 817f4b1:	c7 44 24 0c 39 00 00 	movl   $0x39,0xc(%esp)
 817f4b8:	00 
 817f4b9:	c7 44 24 08 40 c8 b8 	movl   $0x8b8c840,0x8(%esp)
 817f4c0:	08 
 817f4c1:	c7 44 24 04 e4 b9 b8 	movl   $0x8b8b9e4,0x4(%esp)
 817f4c8:	08 
 817f4c9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817f4d0:	e8 35 47 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817f4d5:	be 00 00 00 00       	mov    $0x0,%esi
 817f4da:	bb 00 00 00 00       	mov    $0x0,%ebx
 817f4df:	e9 c3 01 00 00       	jmp    817f6a7 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x321>
 817f4e4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817f4e7:	89 04 24             	mov    %eax,(%esp)
 817f4ea:	e8 bf 12 00 00       	call   81807ae <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEEC1Ev>
 817f4ef:	8d 85 fc f6 ff ff    	lea    -0x904(%ebp),%eax
 817f4f5:	05 24 04 00 00       	add    $0x424,%eax
 817f4fa:	89 04 24             	mov    %eax,(%esp)
 817f4fd:	e8 26 13 00 00       	call   8180828 <_ZNKSt6vectorI24STAvatarAbilityVariationSaIS0_EE4sizeEv>
 817f502:	89 45 f0             	mov    %eax,-0x10(%ebp)
 817f505:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 817f50c:	e9 0c 01 00 00       	jmp    817f61d <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x297>
 817f511:	8d 45 9c             	lea    -0x64(%ebp),%eax
 817f514:	89 04 24             	mov    %eax,(%esp)
 817f517:	e8 8c 0e 00 00       	call   81803a8 <_ZN12LevelUpSkillC1Ev>
 817f51c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817f51f:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f523:	8d 85 fc f6 ff ff    	lea    -0x904(%ebp),%eax
 817f529:	05 24 04 00 00       	add    $0x424,%eax
 817f52e:	89 04 24             	mov    %eax,(%esp)
 817f531:	e8 14 13 00 00       	call   818084a <_ZNSt6vectorI24STAvatarAbilityVariationSaIS0_EEixEj>
 817f536:	8b 50 0c             	mov    0xc(%eax),%edx
 817f539:	89 55 9c             	mov    %edx,-0x64(%ebp)
 817f53c:	8b 50 10             	mov    0x10(%eax),%edx
 817f53f:	89 55 a0             	mov    %edx,-0x60(%ebp)
 817f542:	8b 40 14             	mov    0x14(%eax),%eax
 817f545:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 817f548:	8d 45 c0             	lea    -0x40(%ebp),%eax
 817f54b:	8d 55 a8             	lea    -0x58(%ebp),%edx
 817f54e:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f552:	89 04 24             	mov    %eax,(%esp)
 817f555:	e8 36 13 00 00       	call   8180890 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 817f55a:	83 ec 04             	sub    $0x4,%esp
 817f55d:	8b 45 9c             	mov    -0x64(%ebp),%eax
 817f560:	89 45 c8             	mov    %eax,-0x38(%ebp)
 817f563:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 817f566:	8d 55 c8             	lea    -0x38(%ebp),%edx
 817f569:	89 54 24 08          	mov    %edx,0x8(%esp)
 817f56d:	8d 55 a8             	lea    -0x58(%ebp),%edx
 817f570:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f574:	89 04 24             	mov    %eax,(%esp)
 817f577:	e8 e8 12 00 00       	call   8180864 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 817f57c:	83 ec 04             	sub    $0x4,%esp
 817f57f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 817f582:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f586:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 817f589:	89 04 24             	mov    %eax,(%esp)
 817f58c:	e8 25 13 00 00       	call   81808b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI12LevelUpSkillSaIS3_EEEEeqERKS7_>
 817f591:	84 c0                	test   %al,%al
 817f593:	74 57                	je     817f5ec <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x266>
 817f595:	8d 45 90             	lea    -0x70(%ebp),%eax
 817f598:	89 04 24             	mov    %eax,(%esp)
 817f59b:	e8 62 0e 00 00       	call   8180402 <_ZNSt6vectorI12LevelUpSkillSaIS0_EEC1Ev>
 817f5a0:	8b 45 9c             	mov    -0x64(%ebp),%eax
 817f5a3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 817f5a6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 817f5a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f5ad:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817f5b0:	89 04 24             	mov    %eax,(%esp)
 817f5b3:	e8 28 13 00 00       	call   81808e0 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEEixERS7_>
 817f5b8:	8d 55 90             	lea    -0x70(%ebp),%edx
 817f5bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f5bf:	89 04 24             	mov    %eax,(%esp)
 817f5c2:	e8 ad 0e 00 00       	call   8180474 <_ZNSt6vectorI12LevelUpSkillSaIS0_EEaSERKS2_>
 817f5c7:	eb 18                	jmp    817f5e1 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x25b>
 817f5c9:	89 d3                	mov    %edx,%ebx
 817f5cb:	89 c6                	mov    %eax,%esi
 817f5cd:	8d 45 90             	lea    -0x70(%ebp),%eax
 817f5d0:	89 04 24             	mov    %eax,(%esp)
 817f5d3:	e8 3e 0e 00 00       	call   8180416 <_ZNSt6vectorI12LevelUpSkillSaIS0_EED1Ev>
 817f5d8:	89 f0                	mov    %esi,%eax
 817f5da:	89 da                	mov    %ebx,%edx
 817f5dc:	e9 81 00 00 00       	jmp    817f662 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x2dc>
 817f5e1:	8d 45 90             	lea    -0x70(%ebp),%eax
 817f5e4:	89 04 24             	mov    %eax,(%esp)
 817f5e7:	e8 2a 0e 00 00       	call   8180416 <_ZNSt6vectorI12LevelUpSkillSaIS0_EED1Ev>
 817f5ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817f5ef:	89 45 a0             	mov    %eax,-0x60(%ebp)
 817f5f2:	8b 45 9c             	mov    -0x64(%ebp),%eax
 817f5f5:	89 45 d0             	mov    %eax,-0x30(%ebp)
 817f5f8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 817f5fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f5ff:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817f602:	89 04 24             	mov    %eax,(%esp)
 817f605:	e8 d6 12 00 00       	call   81808e0 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEEixERS7_>
 817f60a:	8d 55 9c             	lea    -0x64(%ebp),%edx
 817f60d:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f611:	89 04 24             	mov    %eax,(%esp)
 817f614:	e8 13 14 00 00       	call   8180a2c <_ZNSt6vectorI12LevelUpSkillSaIS0_EE9push_backERKS0_>
 817f619:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 817f61d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817f620:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 817f623:	0f 9c c0             	setl   %al
 817f626:	84 c0                	test   %al,%al
 817f628:	0f 85 e3 fe ff ff    	jne    817f511 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x18b>
 817f62e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 817f631:	89 44 24 04          	mov    %eax,0x4(%esp)
 817f635:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817f638:	89 04 24             	mov    %eax,(%esp)
 817f63b:	e8 5c 11 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817f640:	89 c2                	mov    %eax,%edx
 817f642:	8b 45 08             	mov    0x8(%ebp),%eax
 817f645:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f649:	89 04 24             	mov    %eax,(%esp)
 817f64c:	e8 65 14 00 00       	call   8180ab6 <_ZNSt3mapImS_IiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEES4_ImESaIS6_IKmSA_EEEixERSC_>
 817f651:	8d 55 a8             	lea    -0x58(%ebp),%edx
 817f654:	89 54 24 04          	mov    %edx,0x4(%esp)
 817f658:	89 04 24             	mov    %eax,(%esp)
 817f65b:	e8 a2 15 00 00       	call   8180c02 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEEaSERKSA_>
 817f660:	eb 15                	jmp    817f677 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x2f1>
 817f662:	89 d3                	mov    %edx,%ebx
 817f664:	89 c6                	mov    %eax,%esi
 817f666:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817f669:	89 04 24             	mov    %eax,(%esp)
 817f66c:	e8 7d 0d 00 00       	call   81803ee <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEED1Ev>
 817f671:	89 f0                	mov    %esi,%eax
 817f673:	89 da                	mov    %ebx,%edx
 817f675:	eb 12                	jmp    817f689 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x303>
 817f677:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817f67a:	89 04 24             	mov    %eax,(%esp)
 817f67d:	e8 6c 0d 00 00       	call   81803ee <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEED1Ev>
 817f682:	bb 01 00 00 00       	mov    $0x1,%ebx
 817f687:	eb 1e                	jmp    817f6a7 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x321>
 817f689:	89 d3                	mov    %edx,%ebx
 817f68b:	89 c6                	mov    %eax,%esi
 817f68d:	8d 85 fc f6 ff ff    	lea    -0x904(%ebp),%eax
 817f693:	89 04 24             	mov    %eax,(%esp)
 817f696:	e8 fd eb 80 00       	call   898e298 <_ZN17STEquipmentScriptD1Ev>
 817f69b:	89 f0                	mov    %esi,%eax
 817f69d:	89 da                	mov    %ebx,%edx
 817f69f:	89 04 24             	mov    %eax,(%esp)
 817f6a2:	e8 a9 40 96 00       	call   8ae3750 <_Unwind_Resume>
 817f6a7:	8d 85 fc f6 ff ff    	lea    -0x904(%ebp),%eax
 817f6ad:	89 04 24             	mov    %eax,(%esp)
 817f6b0:	e8 e3 eb 80 00       	call   898e298 <_ZN17STEquipmentScriptD1Ev>
 817f6b5:	85 db                	test   %ebx,%ebx
 817f6b7:	74 40                	je     817f6f9 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x373>
 817f6b9:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 817f6bd:	83 7d e8 08          	cmpl   $0x8,-0x18(%ebp)
 817f6c1:	0f 9e c0             	setle  %al
 817f6c4:	84 c0                	test   %al,%al
 817f6c6:	0f 85 49 fd ff ff    	jne    817f415 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x8f>
 817f6cc:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 817f6d0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817f6d3:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 817f6d6:	0f 92 c0             	setb   %al
 817f6d9:	84 c0                	test   %al,%al
 817f6db:	0f 85 13 fd ff ff    	jne    817f3f4 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x6e>
 817f6e1:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 817f6e5:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 817f6e9:	0f 9e c0             	setle  %al
 817f6ec:	84 c0                	test   %al,%al
 817f6ee:	0f 85 bd fc ff ff    	jne    817f3b1 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv+0x2b>
 817f6f4:	be 01 00 00 00       	mov    $0x1,%esi
 817f6f9:	89 f0                	mov    %esi,%eax
 817f6fb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 817f6fe:	83 c4 00             	add    $0x0,%esp
 817f701:	5b                   	pop    %ebx
 817f702:	5e                   	pop    %esi
 817f703:	5d                   	pop    %ebp
 817f704:	c3                   	ret
 817f705:	90                   	nop

```

```c
// AvatarRouletteServer::InitAddCharacSkill @ 0x817f386

/* AvatarRouletteServer::InitAddCharacSkill() */

undefined4 __thiscall AvatarRouletteServer::InitAddCharacSkill(AvatarRouletteServer *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector<LevelUpSkill,std::allocator<LevelUpSkill>> *pvVar4;
  ulong *puVar5;
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  *this_00;
  undefined4 unaff_ESI;
  STEquipmentScript local_908 [1060];
  vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> avStack_4e4 [1136];
  vector<LevelUpSkill,std::allocator<LevelUpSkill>> local_74 [12];
  int local_68;
  uint local_64;
  undefined4 local_60;
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_5c [24];
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_44 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
  local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
  *local_2c;
  uint local_28;
  uint local_24;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *local_20;
  uint local_1c;
  char *local_18;
  int local_14;
  uint local_10;
  
  iVar3 = G_CEnvironment();
  if (*(char *)(iVar3 + 0x310) != '\0') {
    for (local_30 = 0; local_30 < 0xb; local_30 = local_30 + 1) {
      local_2c = (vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                  *)(*(int *)(this + 0x18) + local_30 * 0xc + 0x14);
      std::
      vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
      ::size(local_2c);
      local_28 = 0;
      local_24 = std::
                 vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                 ::size(local_2c);
      for (; local_28 < local_24; local_28 = local_28 + 1) {
        local_20 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                    *)std::
                      vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                      ::operator[](local_2c,local_28);
        for (local_1c = 0; (int)local_1c < 9; local_1c = local_1c + 1) {
          if ((local_1c == 3) && ((local_30 == 9 || (local_30 == 0)))) {
            std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>::
            operator[](local_20,3);
            local_18 = (char *)STScriptFileList::GetFileName(0x94fac00);
            if (local_18 != (char *)0x0) {
              STEquipmentScript::STEquipmentScript(local_908);
                    /* try { // try from 0817f496 to 0817f4ee has its CatchHandler @ 0817f689 */
              cVar2 = ImportEquipmentScript(local_908,local_18,false,0,-1);
              if (cVar2 == '\x01') {
                std::
                map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                ::map(local_5c);
                local_14 = std::
                           vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>
                           ::size(avStack_4e4);
                for (local_10 = 0; (int)local_10 < local_14; local_10 = local_10 + 1) {
                  LevelUpSkill::LevelUpSkill((LevelUpSkill *)&local_68);
                  iVar3 = std::
                          vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>
                          ::operator[](avStack_4e4,local_10);
                  local_68 = *(int *)(iVar3 + 0xc);
                  local_64 = *(undefined4 *)(iVar3 + 0x10);
                  local_60 = *(undefined4 *)(iVar3 + 0x14);
                    /* try { // try from 0817f555 to 0817f59f has its CatchHandler @ 0817f662 */
                  std::
                  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                  ::end(local_44);
                  local_3c = local_68;
                  std::
                  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                  ::find((int *)local_40);
                  cVar2 = std::
                          _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
                          ::operator==(local_40,(_Rb_tree_iterator *)local_44);
                  if (cVar2 != '\0') {
                    std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::vector(local_74);
                    local_38 = local_68;
                    /* try { // try from 0817f5b3 to 0817f5c6 has its CatchHandler @ 0817f5c9 */
                    pvVar4 = (vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                             std::
                             map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                             ::operator[](local_5c,&local_38);
                    std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::operator=
                              (pvVar4,(vector *)local_74);
                    /* try { // try from 0817f5e7 to 0817f65f has its CatchHandler @ 0817f662 */
                    std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::~vector(local_74);
                  }
                  local_64 = local_10;
                  local_34 = local_68;
                  pvVar4 = (vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                           std::
                           map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                           ::operator[](local_5c,&local_34);
                  std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::push_back
                            (pvVar4,(LevelUpSkill *)&local_68);
                }
                puVar5 = (ulong *)std::
                                  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                                  ::operator[](local_20,local_1c);
                this_00 = (map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                           *)std::
                             map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                             ::operator[]((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                                           *)this,puVar5);
                std::
                map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                ::operator=(this_00,(map *)local_5c);
                    /* try { // try from 0817f67d to 0817f681 has its CatchHandler @ 0817f689 */
                std::
                map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                ::~map(local_5c);
                bVar1 = true;
              }
              else {
                LogManager::logFormat
                          (1,"localjapan/Arad_AvatarRoulette.cpp",
                           "bool AvatarRouletteServer::InitAddCharacSkill()",0x39,
                           "InitAddCharacSkill() - ImportEquipmentScript() fail file - %s",local_18)
                ;
                unaff_ESI = 0;
                bVar1 = false;
              }
              STEquipmentScript::~STEquipmentScript(local_908);
              if (!bVar1) {
                return unaff_ESI;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

```

---

## Pickup

```asm
// === 0817fb28 AvatarRouletteServer::Pickup  [0x0817fb28-0x817fed3] ===
 817fb28:	55                   	push   %ebp
 817fb29:	89 e5                	mov    %esp,%ebp
 817fb2b:	57                   	push   %edi
 817fb2c:	56                   	push   %esi
 817fb2d:	53                   	push   %ebx
 817fb2e:	83 ec 7c             	sub    $0x7c,%esp
 817fb31:	8b 45 08             	mov    0x8(%ebp),%eax
 817fb34:	8b 40 1c             	mov    0x1c(%eax),%eax
 817fb37:	89 04 24             	mov    %eax,(%esp)
 817fb3a:	e8 48 20 53 00       	call   86b1b87 <_Z12get_rand_inti>
 817fb3f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 817fb42:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 817fb49:	8b 45 08             	mov    0x8(%ebp),%eax
 817fb4c:	8b 40 18             	mov    0x18(%eax),%eax
 817fb4f:	8b 40 0c             	mov    0xc(%eax),%eax
 817fb52:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 817fb55:	7e 1d                	jle    817fb74 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x4c>
 817fb57:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 817fb5e:	e8 24 20 53 00       	call   86b1b87 <_Z12get_rand_inti>
 817fb63:	89 c2                	mov    %eax,%edx
 817fb65:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fb68:	88 50 0b             	mov    %dl,0xb(%eax)
 817fb6b:	c7 45 d4 02 00 00 00 	movl   $0x2,-0x2c(%ebp)
 817fb72:	eb 2e                	jmp    817fba2 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x7a>
 817fb74:	8b 45 08             	mov    0x8(%ebp),%eax
 817fb77:	8b 40 18             	mov    0x18(%eax),%eax
 817fb7a:	83 c0 14             	add    $0x14,%eax
 817fb7d:	89 04 24             	mov    %eax,(%esp)
 817fb80:	e8 db 0b 00 00       	call   8180760 <_ZNKSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4sizeEv>
 817fb85:	83 e8 02             	sub    $0x2,%eax
 817fb88:	89 04 24             	mov    %eax,(%esp)
 817fb8b:	e8 f7 1f 53 00       	call   86b1b87 <_Z12get_rand_inti>
 817fb90:	83 c0 02             	add    $0x2,%eax
 817fb93:	89 c2                	mov    %eax,%edx
 817fb95:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fb98:	88 50 0b             	mov    %dl,0xb(%eax)
 817fb9b:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 817fba2:	8b 45 10             	mov    0x10(%ebp),%eax
 817fba5:	85 c0                	test   %eax,%eax
 817fba7:	78 08                	js     817fbb1 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x89>
 817fba9:	8b 45 10             	mov    0x10(%ebp),%eax
 817fbac:	83 f8 0a             	cmp    $0xa,%eax
 817fbaf:	7e 0a                	jle    817fbbb <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x93>
 817fbb1:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fbb6:	e9 0b 03 00 00       	jmp    817fec6 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x39e>
 817fbbb:	8b 45 08             	mov    0x8(%ebp),%eax
 817fbbe:	8b 48 18             	mov    0x18(%eax),%ecx
 817fbc1:	8b 55 10             	mov    0x10(%ebp),%edx
 817fbc4:	89 d0                	mov    %edx,%eax
 817fbc6:	01 c0                	add    %eax,%eax
 817fbc8:	01 d0                	add    %edx,%eax
 817fbca:	c1 e0 02             	shl    $0x2,%eax
 817fbcd:	83 c0 10             	add    $0x10,%eax
 817fbd0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817fbd3:	83 c0 04             	add    $0x4,%eax
 817fbd6:	89 04 24             	mov    %eax,(%esp)
 817fbd9:	e8 82 0b 00 00       	call   8180760 <_ZNKSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EE4sizeEv>
 817fbde:	8b 55 0c             	mov    0xc(%ebp),%edx
 817fbe1:	0f b6 52 0b          	movzbl 0xb(%edx),%edx
 817fbe5:	0f be d2             	movsbl %dl,%edx
 817fbe8:	39 d0                	cmp    %edx,%eax
 817fbea:	0f 96 c0             	setbe  %al
 817fbed:	84 c0                	test   %al,%al
 817fbef:	74 0a                	je     817fbfb <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0xd3>
 817fbf1:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fbf6:	e9 cb 02 00 00       	jmp    817fec6 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x39e>
 817fbfb:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fbfe:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 817fc02:	0f be c8             	movsbl %al,%ecx
 817fc05:	8b 45 08             	mov    0x8(%ebp),%eax
 817fc08:	8b 70 18             	mov    0x18(%eax),%esi
 817fc0b:	8b 55 10             	mov    0x10(%ebp),%edx
 817fc0e:	89 d0                	mov    %edx,%eax
 817fc10:	01 c0                	add    %eax,%eax
 817fc12:	01 d0                	add    %edx,%eax
 817fc14:	c1 e0 02             	shl    $0x2,%eax
 817fc17:	83 c0 10             	add    $0x10,%eax
 817fc1a:	8d 04 06             	lea    (%esi,%eax,1),%eax
 817fc1d:	83 c0 04             	add    $0x4,%eax
 817fc20:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 817fc24:	89 04 24             	mov    %eax,(%esp)
 817fc27:	e8 56 0b 00 00       	call   8180782 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EEixEj>
 817fc2c:	89 04 24             	mov    %eax,(%esp)
 817fc2f:	e8 ec 0f 00 00       	call   8180c20 <_ZNKSt6vectorISt4pairImiESaIS1_EE4sizeEv>
 817fc34:	8b 55 14             	mov    0x14(%ebp),%edx
 817fc37:	39 d0                	cmp    %edx,%eax
 817fc39:	0f 96 c0             	setbe  %al
 817fc3c:	84 c0                	test   %al,%al
 817fc3e:	74 0a                	je     817fc4a <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x122>
 817fc40:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fc45:	e9 7c 02 00 00       	jmp    817fec6 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x39e>
 817fc4a:	8b 75 14             	mov    0x14(%ebp),%esi
 817fc4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fc50:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 817fc54:	0f be c8             	movsbl %al,%ecx
 817fc57:	8b 45 08             	mov    0x8(%ebp),%eax
 817fc5a:	8b 78 18             	mov    0x18(%eax),%edi
 817fc5d:	8b 55 10             	mov    0x10(%ebp),%edx
 817fc60:	89 d0                	mov    %edx,%eax
 817fc62:	01 c0                	add    %eax,%eax
 817fc64:	01 d0                	add    %edx,%eax
 817fc66:	c1 e0 02             	shl    $0x2,%eax
 817fc69:	83 c0 10             	add    $0x10,%eax
 817fc6c:	8d 04 07             	lea    (%edi,%eax,1),%eax
 817fc6f:	83 c0 04             	add    $0x4,%eax
 817fc72:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 817fc76:	89 04 24             	mov    %eax,(%esp)
 817fc79:	e8 04 0b 00 00       	call   8180782 <_ZNSt6vectorIS_ISt4pairImiESaIS1_EESaIS3_EEixEj>
 817fc7e:	89 74 24 04          	mov    %esi,0x4(%esp)
 817fc82:	89 04 24             	mov    %eax,(%esp)
 817fc85:	e8 12 0b 00 00       	call   818079c <_ZNSt6vectorISt4pairImiESaIS1_EEixEj>
 817fc8a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817fc8d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817fc90:	8b 00                	mov    (%eax),%eax
 817fc92:	89 c2                	mov    %eax,%edx
 817fc94:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fc97:	89 50 04             	mov    %edx,0x4(%eax)
 817fc9a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817fc9d:	8b 40 04             	mov    0x4(%eax),%eax
 817fca0:	89 c2                	mov    %eax,%edx
 817fca2:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fca5:	88 50 0a             	mov    %dl,0xa(%eax)
 817fca8:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fcab:	8b 70 04             	mov    0x4(%eax),%esi
 817fcae:	e8 e8 c4 f4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 817fcb3:	89 74 24 04          	mov    %esi,0x4(%esp)
 817fcb7:	89 04 24             	mov    %eax,(%esp)
 817fcba:	e8 73 fd 1d 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 817fcbf:	89 45 dc             	mov    %eax,-0x24(%ebp)
 817fcc2:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 817fcc6:	75 0a                	jne    817fcd2 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x1aa>
 817fcc8:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fccd:	e9 f4 01 00 00       	jmp    817fec6 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x39e>
 817fcd2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817fcd5:	8b 00                	mov    (%eax),%eax
 817fcd7:	83 c0 10             	add    $0x10,%eax
 817fcda:	8b 10                	mov    (%eax),%edx
 817fcdc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817fcdf:	89 04 24             	mov    %eax,(%esp)
 817fce2:	ff d2                	call   *%edx
 817fce4:	83 f0 01             	xor    $0x1,%eax
 817fce7:	84 c0                	test   %al,%al
 817fce9:	74 0a                	je     817fcf5 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x1cd>
 817fceb:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fcf0:	e9 d1 01 00 00       	jmp    817fec6 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x39e>
 817fcf5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817fcf8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 817fcfb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817fcfe:	89 04 24             	mov    %eax,(%esp)
 817fd01:	e8 b6 06 00 00       	call   81803bc <_ZNK10CEquipItem19getAvatarOptionSizeEv>
 817fd06:	89 04 24             	mov    %eax,(%esp)
 817fd09:	e8 79 1e 53 00       	call   86b1b87 <_Z12get_rand_inti>
 817fd0e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 817fd11:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817fd14:	89 c2                	mov    %eax,%edx
 817fd16:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fd19:	88 50 08             	mov    %dl,0x8(%eax)
 817fd1c:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 817fd20:	0f 85 94 01 00 00    	jne    817feba <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x392>
 817fd26:	8b 45 10             	mov    0x10(%ebp),%eax
 817fd29:	83 f8 09             	cmp    $0x9,%eax
 817fd2c:	74 0b                	je     817fd39 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x211>
 817fd2e:	8b 45 10             	mov    0x10(%ebp),%eax
 817fd31:	85 c0                	test   %eax,%eax
 817fd33:	0f 85 81 01 00 00    	jne    817feba <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x392>
 817fd39:	8b 55 08             	mov    0x8(%ebp),%edx
 817fd3c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 817fd3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 817fd43:	89 04 24             	mov    %eax,(%esp)
 817fd46:	e8 1d 0f 00 00       	call   8180c68 <_ZNSt3mapImS_IiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEES4_ImESaIS6_IKmSA_EEE3endEv>
 817fd4b:	83 ec 04             	sub    $0x4,%esp
 817fd4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fd51:	8b 40 04             	mov    0x4(%eax),%eax
 817fd54:	89 45 c0             	mov    %eax,-0x40(%ebp)
 817fd57:	8b 55 08             	mov    0x8(%ebp),%edx
 817fd5a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 817fd5d:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 817fd60:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 817fd64:	89 54 24 04          	mov    %edx,0x4(%esp)
 817fd68:	89 04 24             	mov    %eax,(%esp)
 817fd6b:	e8 cc 0e 00 00       	call   8180c3c <_ZNSt3mapImS_IiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEES4_ImESaIS6_IKmSA_EEE4findERSC_>
 817fd70:	83 ec 04             	sub    $0x4,%esp
 817fd73:	8d 45 b8             	lea    -0x48(%ebp),%eax
 817fd76:	89 44 24 04          	mov    %eax,0x4(%esp)
 817fd7a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 817fd7d:	89 04 24             	mov    %eax,(%esp)
 817fd80:	e8 09 0f 00 00       	call   8180c8e <_ZNKSt17_Rb_tree_iteratorISt4pairIKmSt3mapIiSt6vectorI12LevelUpSkillSaIS4_EESt4lessIiESaIS0_IKiS6_EEEEEeqERKSE_>
 817fd85:	84 c0                	test   %al,%al
 817fd87:	74 0a                	je     817fd93 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x26b>
 817fd89:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fd8e:	e9 33 01 00 00       	jmp    817fec6 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x39e>
 817fd93:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fd96:	8b 40 04             	mov    0x4(%eax),%eax
 817fd99:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 817fd9c:	8b 45 08             	mov    0x8(%ebp),%eax
 817fd9f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 817fda2:	89 54 24 04          	mov    %edx,0x4(%esp)
 817fda6:	89 04 24             	mov    %eax,(%esp)
 817fda9:	e8 08 0d 00 00       	call   8180ab6 <_ZNSt3mapImS_IiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEES4_ImESaIS6_IKmSA_EEEixERSC_>
 817fdae:	89 44 24 04          	mov    %eax,0x4(%esp)
 817fdb2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 817fdb5:	89 04 24             	mov    %eax,(%esp)
 817fdb8:	e8 e5 0e 00 00       	call   8180ca2 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEEC1ERKSA_>
 817fdbd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 817fdc0:	8d 55 a0             	lea    -0x60(%ebp),%edx
 817fdc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 817fdc7:	89 04 24             	mov    %eax,(%esp)
 817fdca:	e8 c1 0a 00 00       	call   8180890 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 817fdcf:	83 ec 04             	sub    $0x4,%esp
 817fdd2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 817fdd5:	8d 55 10             	lea    0x10(%ebp),%edx
 817fdd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 817fddc:	8d 55 a0             	lea    -0x60(%ebp),%edx
 817fddf:	89 54 24 04          	mov    %edx,0x4(%esp)
 817fde3:	89 04 24             	mov    %eax,(%esp)
 817fde6:	e8 79 0a 00 00       	call   8180864 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 817fdeb:	83 ec 04             	sub    $0x4,%esp
 817fdee:	8d 45 c8             	lea    -0x38(%ebp),%eax
 817fdf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 817fdf5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 817fdf8:	89 04 24             	mov    %eax,(%esp)
 817fdfb:	e8 b6 0a 00 00       	call   81808b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI12LevelUpSkillSaIS3_EEEEeqERKS7_>
 817fe00:	84 c0                	test   %al,%al
 817fe02:	74 0f                	je     817fe13 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x2eb>
 817fe04:	bb 00 00 00 00       	mov    $0x0,%ebx
 817fe09:	be 00 00 00 00       	mov    $0x0,%esi
 817fe0e:	e9 98 00 00 00       	jmp    817feab <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x383>
 817fe13:	8d 45 10             	lea    0x10(%ebp),%eax
 817fe16:	89 44 24 04          	mov    %eax,0x4(%esp)
 817fe1a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 817fe1d:	89 04 24             	mov    %eax,(%esp)
 817fe20:	e8 bb 0a 00 00       	call   81808e0 <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEEixERS7_>
 817fe25:	89 44 24 04          	mov    %eax,0x4(%esp)
 817fe29:	8d 45 94             	lea    -0x6c(%ebp),%eax
 817fe2c:	89 04 24             	mov    %eax,(%esp)
 817fe2f:	e8 88 0e 00 00       	call   8180cbc <_ZNSt6vectorI12LevelUpSkillSaIS0_EEC1ERKS2_>
 817fe34:	8d 45 94             	lea    -0x6c(%ebp),%eax
 817fe37:	89 04 24             	mov    %eax,(%esp)
 817fe3a:	e8 31 0f 00 00       	call   8180d70 <_ZNKSt6vectorI12LevelUpSkillSaIS0_EE4sizeEv>
 817fe3f:	89 04 24             	mov    %eax,(%esp)
 817fe42:	e8 40 1d 53 00       	call   86b1b87 <_Z12get_rand_inti>
 817fe47:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 817fe4a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817fe4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 817fe51:	8d 45 94             	lea    -0x6c(%ebp),%eax
 817fe54:	89 04 24             	mov    %eax,(%esp)
 817fe57:	e8 36 0f 00 00       	call   8180d92 <_ZNSt6vectorI12LevelUpSkillSaIS0_EEixEj>
 817fe5c:	8b 40 04             	mov    0x4(%eax),%eax
 817fe5f:	89 c2                	mov    %eax,%edx
 817fe61:	8b 45 0c             	mov    0xc(%ebp),%eax
 817fe64:	88 50 08             	mov    %dl,0x8(%eax)
 817fe67:	8d 45 94             	lea    -0x6c(%ebp),%eax
 817fe6a:	89 04 24             	mov    %eax,(%esp)
 817fe6d:	e8 a4 05 00 00       	call   8180416 <_ZNSt6vectorI12LevelUpSkillSaIS0_EED1Ev>
 817fe72:	eb 15                	jmp    817fe89 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x361>
 817fe74:	89 d3                	mov    %edx,%ebx
 817fe76:	89 c6                	mov    %eax,%esi
 817fe78:	8d 45 94             	lea    -0x6c(%ebp),%eax
 817fe7b:	89 04 24             	mov    %eax,(%esp)
 817fe7e:	e8 93 05 00 00       	call   8180416 <_ZNSt6vectorI12LevelUpSkillSaIS0_EED1Ev>
 817fe83:	89 f0                	mov    %esi,%eax
 817fe85:	89 da                	mov    %ebx,%edx
 817fe87:	eb 07                	jmp    817fe90 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x368>
 817fe89:	be 01 00 00 00       	mov    $0x1,%esi
 817fe8e:	eb 1b                	jmp    817feab <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x383>
 817fe90:	89 d3                	mov    %edx,%ebx
 817fe92:	89 c6                	mov    %eax,%esi
 817fe94:	8d 45 a0             	lea    -0x60(%ebp),%eax
 817fe97:	89 04 24             	mov    %eax,(%esp)
 817fe9a:	e8 4f 05 00 00       	call   81803ee <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEED1Ev>
 817fe9f:	89 f0                	mov    %esi,%eax
 817fea1:	89 da                	mov    %ebx,%edx
 817fea3:	89 04 24             	mov    %eax,(%esp)
 817fea6:	e8 a5 38 96 00       	call   8ae3750 <_Unwind_Resume>
 817feab:	8d 45 a0             	lea    -0x60(%ebp),%eax
 817feae:	89 04 24             	mov    %eax,(%esp)
 817feb1:	e8 38 05 00 00       	call   81803ee <_ZNSt3mapIiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEED1Ev>
 817feb6:	85 f6                	test   %esi,%esi
 817feb8:	74 0c                	je     817fec6 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii+0x39e>
 817feba:	8b 45 0c             	mov    0xc(%ebp),%eax
 817febd:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 817fec1:	bb 01 00 00 00       	mov    $0x1,%ebx
 817fec6:	89 d8                	mov    %ebx,%eax
 817fec8:	8d 65 f4             	lea    -0xc(%ebp),%esp
 817fecb:	83 c4 00             	add    $0x0,%esp
 817fece:	5b                   	pop    %ebx
 817fecf:	5e                   	pop    %esi
 817fed0:	5f                   	pop    %edi
 817fed1:	5d                   	pop    %ebp
 817fed2:	c3                   	ret
 817fed3:	90                   	nop

```

```c
// AvatarRouletteServer::Pickup @ 0x817fb28

/* AvatarRouletteServer::Pickup(AvatarRouletteServer::PickedAvatarInfo&, int, int) */

undefined4 __thiscall
AvatarRouletteServer::Pickup
          (AvatarRouletteServer *this,PickedAvatarInfo *param_1,int param_2,int param_3)

{
  PickedAvatarInfo PVar1;
  char cVar2;
  uint uVar3;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *pvVar4;
  CDataManager *this_00;
  int iVar5;
  map *pmVar6;
  vector *pvVar7;
  undefined4 unaff_EBX;
  undefined4 uVar8;
  vector<LevelUpSkill,std::allocator<LevelUpSkill>> local_70 [12];
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_64 [24];
  map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
  local_4c [4];
  _Rb_tree_iterator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>
  local_48 [4];
  undefined4 local_44;
  ulong local_40;
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
  local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  CEquipItem *local_28;
  CEquipItem *local_24;
  uint local_20;
  
  local_34 = get_rand_int(*(int *)(this + 0x1c));
  local_30 = 0;
  if (local_34 < *(int *)(*(int *)(this + 0x18) + 0xc)) {
    PVar1 = (PickedAvatarInfo)get_rand_int(2);
    param_1[0xb] = PVar1;
    local_30 = 2;
  }
  else {
    iVar5 = std::
            vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            ::size((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    *)(*(int *)(this + 0x18) + 0x14));
    cVar2 = get_rand_int(iVar5 + -2);
    param_1[0xb] = (PickedAvatarInfo)(cVar2 + '\x02');
    local_30 = 1;
  }
  if ((param_2 < 0) || (10 < param_2)) {
    uVar8 = 0;
  }
  else {
    uVar3 = std::
            vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            ::size((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    *)(*(int *)(this + 0x18) + param_2 * 0xc + 0x14));
    if ((uint)(int)(char)param_1[0xb] < uVar3) {
      pvVar4 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *)
               std::
               vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
               ::operator[]((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                             *)(*(int *)(this + 0x18) + param_2 * 0xc + 0x14),
                            (int)(char)param_1[0xb]);
      uVar3 = std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
              ::size(pvVar4);
      iVar5 = param_3;
      if ((uint)param_3 < uVar3) {
        pvVar4 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                  *)std::
                    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    ::operator[]((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                                  *)(*(int *)(this + 0x18) + param_2 * 0xc + 0x14),
                                 (int)(char)param_1[0xb]);
        local_2c = (undefined4 *)
                   std::
                   vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                   ::operator[](pvVar4,iVar5);
        *(undefined4 *)(param_1 + 4) = *local_2c;
        param_1[10] = SUB41(local_2c[1],0);
        iVar5 = *(int *)(param_1 + 4);
        this_00 = (CDataManager *)G_CDataManager();
        local_28 = (CEquipItem *)CDataManager::find_item(this_00,iVar5);
        if (local_28 == (CEquipItem *)0x0) {
          uVar8 = 0;
        }
        else {
          cVar2 = (**(code **)(*(int *)local_28 + 0x10))(local_28);
          if (cVar2 == '\x01') {
            local_24 = local_28;
            iVar5 = CEquipItem::getAvatarOptionSize(local_28);
            local_20 = get_rand_int(iVar5);
            param_1[8] = SUB41(local_20,0);
            if ((param_3 == 3) && ((param_2 == 9 || (param_2 == 0)))) {
              std::
              map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
              ::end(local_4c);
              local_44 = *(undefined4 *)(param_1 + 4);
              std::
              map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
              ::find((ulong *)local_48);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>
                      ::operator==(local_48,(_Rb_tree_iterator *)local_4c);
              if (cVar2 != '\0') {
                return 0;
              }
              local_40 = *(ulong *)(param_1 + 4);
              pmVar6 = (map *)std::
                              map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                              ::operator[]((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                                            *)this,&local_40);
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::map(local_64,pmVar6);
                    /* try { // try from 0817fdca to 0817fe33 has its CatchHandler @ 0817fe90 */
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::end(local_3c);
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::find((int *)local_38);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
                      ::operator==(local_38,(_Rb_tree_iterator *)local_3c);
              if (cVar2 == '\0') {
                pvVar7 = (vector *)
                         std::
                         map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                         ::operator[](local_64,&param_2);
                std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::vector(local_70,pvVar7);
                iVar5 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::size(local_70);
                    /* try { // try from 0817fe42 to 0817fe46 has its CatchHandler @ 0817fe74 */
                local_20 = get_rand_int(iVar5);
                iVar5 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::operator[]
                                  (local_70,local_20);
                param_1[8] = SUB41(*(undefined4 *)(iVar5 + 4),0);
                    /* try { // try from 0817fe6d to 0817fe71 has its CatchHandler @ 0817fe90 */
                std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::~vector(local_70);
              }
              else {
                unaff_EBX = 0;
              }
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::~map(local_64);
              if (cVar2 != '\0') {
                return unaff_EBX;
              }
            }
            param_1[9] = (PickedAvatarInfo)0x0;
            uVar8 = 1;
          }
          else {
            uVar8 = 0;
          }
        }
      }
      else {
        uVar8 = 0;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}

```

---

## isAvatarPottery

```asm
// === 0817fb0a AvatarRouletteServer::isAvatarPottery  [0x0817fb0a-0x817fb27] ===
 817fb0a:	55                   	push   %ebp
 817fb0b:	89 e5                	mov    %esp,%ebp
 817fb0d:	8b 45 08             	mov    0x8(%ebp),%eax
 817fb10:	8b 40 18             	mov    0x18(%eax),%eax
 817fb13:	8b 00                	mov    (%eax),%eax
 817fb15:	3b 45 0c             	cmp    0xc(%ebp),%eax
 817fb18:	75 07                	jne    817fb21 <_ZN20AvatarRouletteServer15isAvatarPotteryEm+0x17>
 817fb1a:	b8 01 00 00 00       	mov    $0x1,%eax
 817fb1f:	eb 05                	jmp    817fb26 <_ZN20AvatarRouletteServer15isAvatarPotteryEm+0x1c>
 817fb21:	b8 00 00 00 00       	mov    $0x0,%eax
 817fb26:	5d                   	pop    %ebp
 817fb27:	c3                   	ret

```

```c
// AvatarRouletteServer::isAvatarPottery @ 0x817fb0a

/* AvatarRouletteServer::isAvatarPottery(unsigned long) */

bool __thiscall AvatarRouletteServer::isAvatarPottery(AvatarRouletteServer *this,ulong param_1)

{
  return **(ulong **)(this + 0x18) == param_1;
}

```

---

## ~AvatarRouletteServer

```asm
// === 0817f372 AvatarRouletteServer::~AvatarRouletteServer  [0x0817f372-0x817f385] ===
 817f372:	55                   	push   %ebp
 817f373:	89 e5                	mov    %esp,%ebp
 817f375:	83 ec 18             	sub    $0x18,%esp
 817f378:	8b 45 08             	mov    0x8(%ebp),%eax
 817f37b:	89 04 24             	mov    %eax,(%esp)
 817f37e:	e8 57 10 00 00       	call   81803da <_ZNSt3mapImS_IiSt6vectorI12LevelUpSkillSaIS1_EESt4lessIiESaISt4pairIKiS3_EEES4_ImESaIS6_IKmSA_EEED1Ev>
 817f383:	c9                   	leave
 817f384:	c3                   	ret
 817f385:	90                   	nop

```

```c
// AvatarRouletteServer::~AvatarRouletteServer @ 0x817f372

/* AvatarRouletteServer::~AvatarRouletteServer() */

void __thiscall AvatarRouletteServer::~AvatarRouletteServer(AvatarRouletteServer *this)

{
  std::
  map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
  ::~map((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
          *)this);
  return;
}

```

