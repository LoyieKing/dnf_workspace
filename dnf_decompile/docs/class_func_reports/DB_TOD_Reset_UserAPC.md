# DB_TOD_Reset_UserAPC

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## GetAPCUserInfo

```asm
// === 08440548 DB_TOD_Reset_UserAPC::GetAPCUserInfo  [0x08440548-0x8440f3d] ===
 8440548:	55                   	push   %ebp
 8440549:	89 e5                	mov    %esp,%ebp
 844054b:	57                   	push   %edi
 844054c:	56                   	push   %esi
 844054d:	53                   	push   %ebx
 844054e:	81 ec fc 0e 00 00    	sub    $0xefc,%esp
 8440554:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8440559:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8440560:	00 
 8440561:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8440568:	00 
 8440569:	89 04 24             	mov    %eax,(%esp)
 844056c:	e8 cd 4c fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8440571:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8440574:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8440579:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8440580:	00 
 8440581:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8440588:	00 
 8440589:	89 04 24             	mov    %eax,(%esp)
 844058c:	e8 ad 4c fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8440591:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8440594:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8440599:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84405a0:	00 
 84405a1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84405a8:	00 
 84405a9:	89 04 24             	mov    %eax,(%esp)
 84405ac:	e8 8d 4c fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84405b1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84405b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84405b7:	8b 00                	mov    (%eax),%eax
 84405b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84405bd:	c7 44 24 04 2c 60 c5 	movl   $0x8c5602c,0x4(%esp)
 84405c4:	08 
 84405c5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84405c8:	89 04 24             	mov    %eax,(%esp)
 84405cb:	e8 f0 3b fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84405d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84405d7:	00 
 84405d8:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84405db:	89 04 24             	mov    %eax,(%esp)
 84405de:	e8 43 3d fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84405e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84405ea:	00 
 84405eb:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84405ee:	89 04 24             	mov    %eax,(%esp)
 84405f1:	e8 30 3d fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84405f6:	83 f0 01             	xor    $0x1,%eax
 84405f9:	84 c0                	test   %al,%al
 84405fb:	75 12                	jne    844060f <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0xc7>
 84405fd:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8440600:	89 04 24             	mov    %eax,(%esp)
 8440603:	e8 b4 3e fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8440608:	83 f0 01             	xor    $0x1,%eax
 844060b:	84 c0                	test   %al,%al
 844060d:	74 07                	je     8440616 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0xce>
 844060f:	b8 01 00 00 00       	mov    $0x1,%eax
 8440614:	eb 05                	jmp    844061b <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0xd3>
 8440616:	b8 00 00 00 00       	mov    $0x0,%eax
 844061b:	84 c0                	test   %al,%al
 844061d:	74 0a                	je     8440629 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0xe1>
 844061f:	b8 00 00 00 00       	mov    $0x0,%eax
 8440624:	e9 0a 09 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440629:	8b 45 bc             	mov    -0x44(%ebp),%eax
 844062c:	89 04 24             	mov    %eax,(%esp)
 844062f:	e8 38 1d ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8440634:	83 f8 01             	cmp    $0x1,%eax
 8440637:	0f 95 c0             	setne  %al
 844063a:	84 c0                	test   %al,%al
 844063c:	74 0a                	je     8440648 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x100>
 844063e:	b8 00 00 00 00       	mov    $0x0,%eax
 8440643:	e9 eb 08 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440648:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 844064f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440652:	8d 50 04             	lea    0x4(%eax),%edx
 8440655:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8440658:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 844065c:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 8440663:	00 
 8440664:	89 54 24 08          	mov    %edx,0x8(%esp)
 8440668:	89 44 24 04          	mov    %eax,0x4(%esp)
 844066c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 844066f:	89 04 24             	mov    %eax,(%esp)
 8440672:	e8 73 c7 ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8440677:	83 f0 01             	xor    $0x1,%eax
 844067a:	84 c0                	test   %al,%al
 844067c:	74 0a                	je     8440688 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x140>
 844067e:	b8 00 00 00 00       	mov    $0x0,%eax
 8440683:	e9 ab 08 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440688:	8b 45 0c             	mov    0xc(%ebp),%eax
 844068b:	8d 50 24             	lea    0x24(%eax),%edx
 844068e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8440691:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 8440695:	89 54 24 08          	mov    %edx,0x8(%esp)
 8440699:	89 44 24 04          	mov    %eax,0x4(%esp)
 844069d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84406a0:	89 04 24             	mov    %eax,(%esp)
 84406a3:	e8 92 d0 00 00       	call   844d73a <_ZN5MySQL8get_byteEiRi>
 84406a8:	83 f0 01             	xor    $0x1,%eax
 84406ab:	84 c0                	test   %al,%al
 84406ad:	74 0a                	je     84406b9 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x171>
 84406af:	b8 00 00 00 00       	mov    $0x0,%eax
 84406b4:	e9 7a 08 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 84406b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84406bc:	8d 50 28             	lea    0x28(%eax),%edx
 84406bf:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84406c2:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 84406c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84406ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 84406ce:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84406d1:	89 04 24             	mov    %eax,(%esp)
 84406d4:	e8 61 d0 00 00       	call   844d73a <_ZN5MySQL8get_byteEiRi>
 84406d9:	83 f0 01             	xor    $0x1,%eax
 84406dc:	84 c0                	test   %al,%al
 84406de:	74 0a                	je     84406ea <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x1a2>
 84406e0:	b8 00 00 00 00       	mov    $0x0,%eax
 84406e5:	e9 49 08 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 84406ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84406ed:	8d 50 2c             	lea    0x2c(%eax),%edx
 84406f0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84406f3:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 84406f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84406fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84406ff:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8440702:	89 04 24             	mov    %eax,(%esp)
 8440705:	e8 30 d0 00 00       	call   844d73a <_ZN5MySQL8get_byteEiRi>
 844070a:	83 f0 01             	xor    $0x1,%eax
 844070d:	84 c0                	test   %al,%al
 844070f:	74 0a                	je     844071b <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x1d3>
 8440711:	b8 00 00 00 00       	mov    $0x0,%eax
 8440716:	e9 18 08 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 844071b:	8b 45 0c             	mov    0xc(%ebp),%eax
 844071e:	05 b8 00 00 00       	add    $0xb8,%eax
 8440723:	89 c2                	mov    %eax,%edx
 8440725:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8440728:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 844072c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8440730:	89 44 24 04          	mov    %eax,0x4(%esp)
 8440734:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8440737:	89 04 24             	mov    %eax,(%esp)
 844073a:	e8 b3 1b ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 844073f:	83 f0 01             	xor    $0x1,%eax
 8440742:	84 c0                	test   %al,%al
 8440744:	74 0a                	je     8440750 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x208>
 8440746:	b8 00 00 00 00       	mov    $0x0,%eax
 844074b:	e9 e3 07 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440750:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440753:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 8440759:	85 c0                	test   %eax,%eax
 844075b:	0f 84 4f 01 00 00    	je     84408b0 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x368>
 8440761:	e8 1b ba c8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8440766:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 844076c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 844076f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440772:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 8440778:	89 44 24 08          	mov    %eax,0x8(%esp)
 844077c:	c7 44 24 04 80 60 c5 	movl   $0x8c56080,0x4(%esp)
 8440783:	08 
 8440784:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8440787:	89 04 24             	mov    %eax,(%esp)
 844078a:	e8 31 3a fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844078f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440796:	00 
 8440797:	8b 45 c0             	mov    -0x40(%ebp),%eax
 844079a:	89 04 24             	mov    %eax,(%esp)
 844079d:	e8 84 3b fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84407a2:	83 f0 01             	xor    $0x1,%eax
 84407a5:	84 c0                	test   %al,%al
 84407a7:	75 12                	jne    84407bb <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x273>
 84407a9:	8b 45 c0             	mov    -0x40(%ebp),%eax
 84407ac:	89 04 24             	mov    %eax,(%esp)
 84407af:	e8 08 3d fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84407b4:	83 f0 01             	xor    $0x1,%eax
 84407b7:	84 c0                	test   %al,%al
 84407b9:	74 07                	je     84407c2 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x27a>
 84407bb:	b8 01 00 00 00       	mov    $0x1,%eax
 84407c0:	eb 05                	jmp    84407c7 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x27f>
 84407c2:	b8 00 00 00 00       	mov    $0x0,%eax
 84407c7:	84 c0                	test   %al,%al
 84407c9:	74 55                	je     8440820 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x2d8>
 84407cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84407ce:	8b 98 b8 00 00 00    	mov    0xb8(%eax),%ebx
 84407d4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84407db:	00 
 84407dc:	c7 44 24 08 46 9f 00 	movl   $0x9f46,0x8(%esp)
 84407e3:	00 
 84407e4:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 84407eb:	08 
 84407ec:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 84407f2:	89 04 24             	mov    %eax,(%esp)
 84407f5:	e8 1e ef 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84407fa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84407fd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8440801:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8440805:	c7 44 24 04 b4 60 c5 	movl   $0x8c560b4,0x4(%esp)
 844080c:	08 
 844080d:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8440813:	89 04 24             	mov    %eax,(%esp)
 8440816:	e8 6d ef 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844081b:	e9 90 00 00 00       	jmp    84408b0 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x368>
 8440820:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8440823:	89 04 24             	mov    %eax,(%esp)
 8440826:	e8 41 1b ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844082b:	85 c0                	test   %eax,%eax
 844082d:	0f 95 c0             	setne  %al
 8440830:	84 c0                	test   %al,%al
 8440832:	74 7c                	je     84408b0 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x368>
 8440834:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440837:	83 c0 30             	add    $0x30,%eax
 844083a:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 8440841:	00 
 8440842:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440846:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844084d:	00 
 844084e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8440851:	89 04 24             	mov    %eax,(%esp)
 8440854:	e8 91 c5 ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8440859:	83 f0 01             	xor    $0x1,%eax
 844085c:	84 c0                	test   %al,%al
 844085e:	74 50                	je     84408b0 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x368>
 8440860:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440863:	8b 98 b8 00 00 00    	mov    0xb8(%eax),%ebx
 8440869:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440870:	00 
 8440871:	c7 44 24 08 4e 9f 00 	movl   $0x9f4e,0x8(%esp)
 8440878:	00 
 8440879:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 8440880:	08 
 8440881:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8440887:	89 04 24             	mov    %eax,(%esp)
 844088a:	e8 89 ee 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844088f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8440892:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8440896:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844089a:	c7 44 24 04 b4 60 c5 	movl   $0x8c560b4,0x4(%esp)
 84408a1:	08 
 84408a2:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84408a8:	89 04 24             	mov    %eax,(%esp)
 84408ab:	e8 d8 ee 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84408b0:	c7 45 cc 73 00 00 00 	movl   $0x73,-0x34(%ebp)
 84408b7:	c7 44 24 08 64 05 00 	movl   $0x564,0x8(%esp)
 84408be:	00 
 84408bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84408c6:	00 
 84408c7:	8d 85 0c f1 ff ff    	lea    -0xef4(%ebp),%eax
 84408cd:	89 04 24             	mov    %eax,(%esp)
 84408d0:	e8 eb d3 c3 ff       	call   807dcc0 <memset@plt>
 84408d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84408d8:	8b 00                	mov    (%eax),%eax
 84408da:	c7 44 24 0c 73 00 00 	movl   $0x73,0xc(%esp)
 84408e1:	00 
 84408e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84408e6:	c7 44 24 04 c0 2f c5 	movl   $0x8c52fc0,0x4(%esp)
 84408ed:	08 
 84408ee:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84408f1:	89 04 24             	mov    %eax,(%esp)
 84408f4:	e8 c7 38 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84408f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440900:	00 
 8440901:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440904:	89 04 24             	mov    %eax,(%esp)
 8440907:	e8 1a 3a fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844090c:	83 f0 01             	xor    $0x1,%eax
 844090f:	84 c0                	test   %al,%al
 8440911:	74 4f                	je     8440962 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x41a>
 8440913:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440916:	8b 18                	mov    (%eax),%ebx
 8440918:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844091f:	00 
 8440920:	c7 44 24 08 5d 9f 00 	movl   $0x9f5d,0x8(%esp)
 8440927:	00 
 8440928:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 844092f:	08 
 8440930:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8440936:	89 04 24             	mov    %eax,(%esp)
 8440939:	e8 da ed 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844093e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8440942:	c7 44 24 04 30 30 c5 	movl   $0x8c53030,0x4(%esp)
 8440949:	08 
 844094a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8440950:	89 04 24             	mov    %eax,(%esp)
 8440953:	e8 30 ee 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440958:	b8 00 00 00 00       	mov    $0x0,%eax
 844095d:	e9 d1 05 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440962:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440965:	89 04 24             	mov    %eax,(%esp)
 8440968:	e8 ff 19 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844096d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8440970:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8440977:	e9 5f 02 00 00       	jmp    8440bdb <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x693>
 844097c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 844097f:	89 04 24             	mov    %eax,(%esp)
 8440982:	e8 35 3b fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8440987:	83 f0 01             	xor    $0x1,%eax
 844098a:	84 c0                	test   %al,%al
 844098c:	74 4a                	je     84409d8 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x490>
 844098e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440991:	8b 18                	mov    (%eax),%ebx
 8440993:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844099a:	00 
 844099b:	c7 44 24 08 67 9f 00 	movl   $0x9f67,0x8(%esp)
 84409a2:	00 
 84409a3:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 84409aa:	08 
 84409ab:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84409b1:	89 04 24             	mov    %eax,(%esp)
 84409b4:	e8 5f ed 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84409b9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84409bd:	c7 44 24 04 30 30 c5 	movl   $0x8c53030,0x4(%esp)
 84409c4:	08 
 84409c5:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84409cb:	89 04 24             	mov    %eax,(%esp)
 84409ce:	e8 b5 ed 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84409d3:	e9 14 02 00 00       	jmp    8440bec <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x6a4>
 84409d8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84409db:	8d 8d 0c f1 ff ff    	lea    -0xef4(%ebp),%ecx
 84409e1:	89 d0                	mov    %edx,%eax
 84409e3:	01 c0                	add    %eax,%eax
 84409e5:	01 d0                	add    %edx,%eax
 84409e7:	c1 e0 02             	shl    $0x2,%eax
 84409ea:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84409ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 84409f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84409f8:	00 
 84409f9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84409fc:	89 04 24             	mov    %eax,(%esp)
 84409ff:	e8 28 5f cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8440a04:	83 f0 01             	xor    $0x1,%eax
 8440a07:	84 c0                	test   %al,%al
 8440a09:	74 4f                	je     8440a5a <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x512>
 8440a0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440a0e:	8b 18                	mov    (%eax),%ebx
 8440a10:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440a17:	00 
 8440a18:	c7 44 24 08 6d 9f 00 	movl   $0x9f6d,0x8(%esp)
 8440a1f:	00 
 8440a20:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 8440a27:	08 
 8440a28:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8440a2e:	89 04 24             	mov    %eax,(%esp)
 8440a31:	e8 e2 ec 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8440a36:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8440a3a:	c7 44 24 04 74 30 c5 	movl   $0x8c53074,0x4(%esp)
 8440a41:	08 
 8440a42:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8440a48:	89 04 24             	mov    %eax,(%esp)
 8440a4b:	e8 38 ed 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440a50:	b8 00 00 00 00       	mov    $0x0,%eax
 8440a55:	e9 d9 04 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440a5a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8440a5d:	8d 8d 0c f1 ff ff    	lea    -0xef4(%ebp),%ecx
 8440a63:	89 d0                	mov    %edx,%eax
 8440a65:	01 c0                	add    %eax,%eax
 8440a67:	01 d0                	add    %edx,%eax
 8440a69:	c1 e0 02             	shl    $0x2,%eax
 8440a6c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8440a6f:	83 c0 04             	add    $0x4,%eax
 8440a72:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440a76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440a7d:	00 
 8440a7e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440a81:	89 04 24             	mov    %eax,(%esp)
 8440a84:	e8 a3 5e cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8440a89:	83 f0 01             	xor    $0x1,%eax
 8440a8c:	84 c0                	test   %al,%al
 8440a8e:	74 4f                	je     8440adf <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x597>
 8440a90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440a93:	8b 18                	mov    (%eax),%ebx
 8440a95:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440a9c:	00 
 8440a9d:	c7 44 24 08 73 9f 00 	movl   $0x9f73,0x8(%esp)
 8440aa4:	00 
 8440aa5:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 8440aac:	08 
 8440aad:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8440ab3:	89 04 24             	mov    %eax,(%esp)
 8440ab6:	e8 5d ec 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8440abb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8440abf:	c7 44 24 04 bc 30 c5 	movl   $0x8c530bc,0x4(%esp)
 8440ac6:	08 
 8440ac7:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8440acd:	89 04 24             	mov    %eax,(%esp)
 8440ad0:	e8 b3 ec 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440ad5:	b8 00 00 00 00       	mov    $0x0,%eax
 8440ada:	e9 54 04 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440adf:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8440ae2:	8d 8d 0c f1 ff ff    	lea    -0xef4(%ebp),%ecx
 8440ae8:	89 d0                	mov    %edx,%eax
 8440aea:	01 c0                	add    %eax,%eax
 8440aec:	01 d0                	add    %edx,%eax
 8440aee:	c1 e0 02             	shl    $0x2,%eax
 8440af1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8440af4:	83 c0 08             	add    $0x8,%eax
 8440af7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440afb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8440b02:	00 
 8440b03:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440b06:	89 04 24             	mov    %eax,(%esp)
 8440b09:	e8 1e 5e cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8440b0e:	83 f0 01             	xor    $0x1,%eax
 8440b11:	84 c0                	test   %al,%al
 8440b13:	74 49                	je     8440b5e <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x616>
 8440b15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440b18:	8b 18                	mov    (%eax),%ebx
 8440b1a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440b21:	00 
 8440b22:	c7 44 24 08 79 9f 00 	movl   $0x9f79,0x8(%esp)
 8440b29:	00 
 8440b2a:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 8440b31:	08 
 8440b32:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8440b35:	89 04 24             	mov    %eax,(%esp)
 8440b38:	e8 db eb 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8440b3d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8440b41:	c7 44 24 04 04 31 c5 	movl   $0x8c53104,0x4(%esp)
 8440b48:	08 
 8440b49:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8440b4c:	89 04 24             	mov    %eax,(%esp)
 8440b4f:	e8 34 ec 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440b54:	b8 00 00 00 00       	mov    $0x0,%eax
 8440b59:	e9 d5 03 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440b5e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8440b61:	89 d0                	mov    %edx,%eax
 8440b63:	01 c0                	add    %eax,%eax
 8440b65:	01 d0                	add    %edx,%eax
 8440b67:	c1 e0 02             	shl    $0x2,%eax
 8440b6a:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8440b6d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8440b70:	2d dc 0e 00 00       	sub    $0xedc,%eax
 8440b75:	8b 00                	mov    (%eax),%eax
 8440b77:	85 c0                	test   %eax,%eax
 8440b79:	78 5c                	js     8440bd7 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x68f>
 8440b7b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8440b7e:	89 d0                	mov    %edx,%eax
 8440b80:	01 c0                	add    %eax,%eax
 8440b82:	01 d0                	add    %edx,%eax
 8440b84:	c1 e0 02             	shl    $0x2,%eax
 8440b87:	8d 7d e8             	lea    -0x18(%ebp),%edi
 8440b8a:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8440b8d:	2d dc 0e 00 00       	sub    $0xedc,%eax
 8440b92:	8b 00                	mov    (%eax),%eax
 8440b94:	83 f8 09             	cmp    $0x9,%eax
 8440b97:	7f 3e                	jg     8440bd7 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x68f>
 8440b99:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8440b9c:	89 d0                	mov    %edx,%eax
 8440b9e:	01 c0                	add    %eax,%eax
 8440ba0:	01 d0                	add    %edx,%eax
 8440ba2:	c1 e0 02             	shl    $0x2,%eax
 8440ba5:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8440ba8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8440bab:	2d dc 0e 00 00       	sub    $0xedc,%eax
 8440bb0:	8b 08                	mov    (%eax),%ecx
 8440bb2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8440bb5:	89 d0                	mov    %edx,%eax
 8440bb7:	01 c0                	add    %eax,%eax
 8440bb9:	01 d0                	add    %edx,%eax
 8440bbb:	c1 e0 02             	shl    $0x2,%eax
 8440bbe:	8d 7d e8             	lea    -0x18(%ebp),%edi
 8440bc1:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8440bc4:	2d d8 0e 00 00       	sub    $0xed8,%eax
 8440bc9:	8b 00                	mov    (%eax),%eax
 8440bcb:	89 c2                	mov    %eax,%edx
 8440bcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440bd0:	83 c1 10             	add    $0x10,%ecx
 8440bd3:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 8440bd7:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8440bdb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8440bde:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8440be1:	0f 9c c0             	setl   %al
 8440be4:	84 c0                	test   %al,%al
 8440be6:	0f 85 90 fd ff ff    	jne    844097c <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x434>
 8440bec:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8440bf3:	e9 c7 00 00 00       	jmp    8440cbf <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x777>
 8440bf8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8440bfb:	89 d0                	mov    %edx,%eax
 8440bfd:	01 c0                	add    %eax,%eax
 8440bff:	01 d0                	add    %edx,%eax
 8440c01:	c1 e0 02             	shl    $0x2,%eax
 8440c04:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8440c07:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8440c0a:	2d d4 0e 00 00       	sub    $0xed4,%eax
 8440c0f:	8b 00                	mov    (%eax),%eax
 8440c11:	85 c0                	test   %eax,%eax
 8440c13:	0f 84 a2 00 00 00    	je     8440cbb <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x773>
 8440c19:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8440c1c:	89 d0                	mov    %edx,%eax
 8440c1e:	01 c0                	add    %eax,%eax
 8440c20:	01 d0                	add    %edx,%eax
 8440c22:	c1 e0 02             	shl    $0x2,%eax
 8440c25:	8d 7d e8             	lea    -0x18(%ebp),%edi
 8440c28:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8440c2b:	2d d4 0e 00 00       	sub    $0xed4,%eax
 8440c30:	8b 00                	mov    (%eax),%eax
 8440c32:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440c36:	c7 44 24 04 4c 31 c5 	movl   $0x8c5314c,0x4(%esp)
 8440c3d:	08 
 8440c3e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440c41:	89 04 24             	mov    %eax,(%esp)
 8440c44:	e8 77 35 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440c49:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440c50:	00 
 8440c51:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440c54:	89 04 24             	mov    %eax,(%esp)
 8440c57:	e8 ca 36 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8440c5c:	84 c0                	test   %al,%al
 8440c5e:	74 16                	je     8440c76 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x72e>
 8440c60:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440c63:	89 04 24             	mov    %eax,(%esp)
 8440c66:	e8 51 38 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8440c6b:	84 c0                	test   %al,%al
 8440c6d:	74 07                	je     8440c76 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x72e>
 8440c6f:	b8 01 00 00 00       	mov    $0x1,%eax
 8440c74:	eb 05                	jmp    8440c7b <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x733>
 8440c76:	b8 00 00 00 00       	mov    $0x0,%eax
 8440c7b:	84 c0                	test   %al,%al
 8440c7d:	74 3c                	je     8440cbb <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x773>
 8440c7f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8440c82:	89 d0                	mov    %edx,%eax
 8440c84:	01 c0                	add    %eax,%eax
 8440c86:	01 d0                	add    %edx,%eax
 8440c88:	c1 e0 02             	shl    $0x2,%eax
 8440c8b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8440c8e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8440c91:	2d dc 0e 00 00       	sub    $0xedc,%eax
 8440c96:	8b 00                	mov    (%eax),%eax
 8440c98:	83 c0 10             	add    $0x10,%eax
 8440c9b:	c1 e0 02             	shl    $0x2,%eax
 8440c9e:	03 45 0c             	add    0xc(%ebp),%eax
 8440ca1:	83 c0 0c             	add    $0xc,%eax
 8440ca4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440ca8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8440caf:	00 
 8440cb0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440cb3:	89 04 24             	mov    %eax,(%esp)
 8440cb6:	e8 f3 15 ca ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8440cbb:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8440cbf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440cc2:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8440cc5:	0f 9c c0             	setl   %al
 8440cc8:	84 c0                	test   %al,%al
 8440cca:	0f 85 28 ff ff ff    	jne    8440bf8 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x6b0>
 8440cd0:	8d 95 ae fb ff ff    	lea    -0x452(%ebp),%edx
 8440cd6:	bb 7a 03 00 00       	mov    $0x37a,%ebx
 8440cdb:	b8 00 00 00 00       	mov    $0x0,%eax
 8440ce0:	89 d1                	mov    %edx,%ecx
 8440ce2:	83 e1 02             	and    $0x2,%ecx
 8440ce5:	85 c9                	test   %ecx,%ecx
 8440ce7:	74 09                	je     8440cf2 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x7aa>
 8440ce9:	66 89 02             	mov    %ax,(%edx)
 8440cec:	83 c2 02             	add    $0x2,%edx
 8440cef:	83 eb 02             	sub    $0x2,%ebx
 8440cf2:	89 d9                	mov    %ebx,%ecx
 8440cf4:	c1 e9 02             	shr    $0x2,%ecx
 8440cf7:	89 d7                	mov    %edx,%edi
 8440cf9:	f3 ab                	rep stos %eax,%es:(%edi)
 8440cfb:	89 fa                	mov    %edi,%edx
 8440cfd:	89 d9                	mov    %ebx,%ecx
 8440cff:	83 e1 02             	and    $0x2,%ecx
 8440d02:	85 c9                	test   %ecx,%ecx
 8440d04:	74 06                	je     8440d0c <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x7c4>
 8440d06:	66 89 02             	mov    %ax,(%edx)
 8440d09:	83 c2 02             	add    $0x2,%edx
 8440d0c:	89 d9                	mov    %ebx,%ecx
 8440d0e:	83 e1 01             	and    $0x1,%ecx
 8440d11:	85 c9                	test   %ecx,%ecx
 8440d13:	74 05                	je     8440d1a <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x7d2>
 8440d15:	88 02                	mov    %al,(%edx)
 8440d17:	83 c2 01             	add    $0x1,%edx
 8440d1a:	c7 85 28 ff ff ff 7a 	movl   $0x37a,-0xd8(%ebp)
 8440d21:	03 00 00 
 8440d24:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8440d2a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8440d2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440d30:	8b 00                	mov    (%eax),%eax
 8440d32:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440d36:	c7 44 24 04 9c 2e c5 	movl   $0x8c52e9c,0x4(%esp)
 8440d3d:	08 
 8440d3e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440d41:	89 04 24             	mov    %eax,(%esp)
 8440d44:	e8 77 34 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440d49:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440d50:	00 
 8440d51:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440d54:	89 04 24             	mov    %eax,(%esp)
 8440d57:	e8 ca 35 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8440d5c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440d5f:	89 04 24             	mov    %eax,(%esp)
 8440d62:	e8 55 37 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8440d67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8440d6e:	00 
 8440d6f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440d72:	89 04 24             	mov    %eax,(%esp)
 8440d75:	e8 64 46 ce ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8440d7a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8440d7d:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8440d83:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8440d87:	8d 85 ae fb ff ff    	lea    -0x452(%ebp),%eax
 8440d8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440d91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8440d98:	00 
 8440d99:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440d9c:	89 04 24             	mov    %eax,(%esp)
 8440d9f:	e8 76 45 ce ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8440da4:	88 45 db             	mov    %al,-0x25(%ebp)
 8440da7:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 8440dab:	83 f0 01             	xor    $0x1,%eax
 8440dae:	84 c0                	test   %al,%al
 8440db0:	74 49                	je     8440dfb <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x8b3>
 8440db2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440db5:	8b 18                	mov    (%eax),%ebx
 8440db7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440dbe:	00 
 8440dbf:	c7 44 24 08 9d 9f 00 	movl   $0x9f9d,0x8(%esp)
 8440dc6:	00 
 8440dc7:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 8440dce:	08 
 8440dcf:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8440dd2:	89 04 24             	mov    %eax,(%esp)
 8440dd5:	e8 3e e9 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8440dda:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8440dde:	c7 44 24 04 64 5c c4 	movl   $0x8c45c64,0x4(%esp)
 8440de5:	08 
 8440de6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8440de9:	89 04 24             	mov    %eax,(%esp)
 8440dec:	e8 97 e9 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440df1:	b8 00 00 00 00       	mov    $0x0,%eax
 8440df6:	e9 38 01 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440dfb:	8d 85 70 f6 ff ff    	lea    -0x990(%ebp),%eax
 8440e01:	89 c3                	mov    %eax,%ebx
 8440e03:	be 15 00 00 00       	mov    $0x15,%esi
 8440e08:	eb 0e                	jmp    8440e18 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x8d0>
 8440e0a:	89 1c 24             	mov    %ebx,(%esp)
 8440e0d:	e8 42 aa c8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8440e12:	83 c3 3d             	add    $0x3d,%ebx
 8440e15:	83 ee 01             	sub    $0x1,%esi
 8440e18:	83 fe ff             	cmp    $0xffffffff,%esi
 8440e1b:	0f 95 c0             	setne  %al
 8440e1e:	84 c0                	test   %al,%al
 8440e20:	75 e8                	jne    8440e0a <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x8c2>
 8440e22:	8d 85 70 f6 ff ff    	lea    -0x990(%ebp),%eax
 8440e28:	8d 90 62 02 00 00    	lea    0x262(%eax),%edx
 8440e2e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8440e31:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8440e35:	8d 85 ae fb ff ff    	lea    -0x452(%ebp),%eax
 8440e3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440e3f:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8440e45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8440e49:	89 14 24             	mov    %edx,(%esp)
 8440e4c:	e8 b1 12 27 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8440e51:	83 f0 01             	xor    $0x1,%eax
 8440e54:	84 c0                	test   %al,%al
 8440e56:	74 0a                	je     8440e62 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x91a>
 8440e58:	b8 00 00 00 00       	mov    $0x0,%eax
 8440e5d:	e9 d1 00 00 00       	jmp    8440f33 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9eb>
 8440e62:	8b 95 d4 f8 ff ff    	mov    -0x72c(%ebp),%edx
 8440e68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440e6b:	89 50 74             	mov    %edx,0x74(%eax)
 8440e6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440e71:	8b 00                	mov    (%eax),%eax
 8440e73:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440e77:	c7 44 24 04 e8 60 c5 	movl   $0x8c560e8,0x4(%esp)
 8440e7e:	08 
 8440e7f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440e82:	89 04 24             	mov    %eax,(%esp)
 8440e85:	e8 36 33 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440e8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440e91:	00 
 8440e92:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440e95:	89 04 24             	mov    %eax,(%esp)
 8440e98:	e8 89 34 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8440e9d:	84 c0                	test   %al,%al
 8440e9f:	74 57                	je     8440ef8 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9b0>
 8440ea1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440ea4:	89 04 24             	mov    %eax,(%esp)
 8440ea7:	e8 10 36 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8440eac:	84 c0                	test   %al,%al
 8440eae:	74 7e                	je     8440f2e <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9e6>
 8440eb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440eb3:	05 b4 00 00 00       	add    $0xb4,%eax
 8440eb8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440ebc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8440ec3:	00 
 8440ec4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440ec7:	89 04 24             	mov    %eax,(%esp)
 8440eca:	e8 5d 5a cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8440ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8440ed2:	05 a4 00 00 00       	add    $0xa4,%eax
 8440ed7:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 8440ede:	00 
 8440edf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440ee3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440eea:	00 
 8440eeb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440eee:	89 04 24             	mov    %eax,(%esp)
 8440ef1:	e8 f4 be ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8440ef6:	eb 36                	jmp    8440f2e <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo+0x9e6>
 8440ef8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440eff:	00 
 8440f00:	c7 44 24 08 bf 9f 00 	movl   $0x9fbf,0x8(%esp)
 8440f07:	00 
 8440f08:	c7 44 24 04 60 b9 c5 	movl   $0x8c5b960,0x4(%esp)
 8440f0f:	08 
 8440f10:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8440f13:	89 04 24             	mov    %eax,(%esp)
 8440f16:	e8 fd e7 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8440f1b:	c7 44 24 04 48 61 c5 	movl   $0x8c56148,0x4(%esp)
 8440f22:	08 
 8440f23:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8440f26:	89 04 24             	mov    %eax,(%esp)
 8440f29:	e8 5a e8 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440f2e:	b8 01 00 00 00       	mov    $0x1,%eax
 8440f33:	81 c4 fc 0e 00 00    	add    $0xefc,%esp
 8440f39:	5b                   	pop    %ebx
 8440f3a:	5e                   	pop    %esi
 8440f3b:	5f                   	pop    %edi
 8440f3c:	5d                   	pop    %ebp
 8440f3d:	c3                   	ret

```

```c
// DB_TOD_Reset_UserAPC::GetAPCUserInfo @ 0x8440548

/* WARNING: Removing unreachable block (ram,0x08440d15) */
/* DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&) */

undefined4 __thiscall
DB_TOD_Reset_UserAPC::GetAPCUserInfo(DB_TOD_Reset_UserAPC *this,_APCInfo *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  Inven_Item *this_00;
  bool bVar6;
  byte bVar7;
  int local_ef8 [345];
  Inven_Item local_994 [610];
  char local_732 [2];
  undefined4 local_730;
  char local_456 [890];
  uint local_dc;
  cMyTrace local_d8 [16];
  cMyTrace local_c8 [16];
  cMyTrace local_b8 [16];
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  cMyTrace local_88 [16];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  MySQL *local_48;
  MySQL *local_44;
  MySQL *local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  char local_29;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  bVar7 = 0;
  local_48 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_44 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_40 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_48,
                   "seLect charac_name,lev,job,grow_type,guild_id from charac_info where charac_no=%d"
                   ,*(undefined4 *)param_1);
  MySQL::exec(local_48,true);
  cVar1 = MySQL::exec(local_48,true);
  if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_48), cVar1 == '\x01')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    uVar2 = 0;
  }
  else {
    iVar3 = MySQL::get_n_rows(local_48);
    if (iVar3 == 1) {
      local_3c = 1;
      cVar1 = MySQL::get_str(local_48,0,(char *)(param_1 + 4),0x1e);
      iVar3 = local_3c;
      if (cVar1 == '\x01') {
        local_3c = local_3c + 1;
        cVar1 = MySQL::get_byte(local_48,iVar3,(int *)(param_1 + 0x24));
        iVar3 = local_3c;
        if (cVar1 == '\x01') {
          local_3c = local_3c + 1;
          cVar1 = MySQL::get_byte(local_48,iVar3,(int *)(param_1 + 0x28));
          iVar3 = local_3c;
          if (cVar1 == '\x01') {
            local_3c = local_3c + 1;
            cVar1 = MySQL::get_byte(local_48,iVar3,(int *)(param_1 + 0x2c));
            iVar3 = local_3c;
            if (cVar1 == '\x01') {
              local_3c = local_3c + 1;
              cVar1 = MySQL::get_uint(local_48,iVar3,(uint *)(param_1 + 0xb8));
              if (cVar1 == '\x01') {
                if (*(int *)(param_1 + 0xb8) != 0) {
                  iVar3 = G_CEnvironment();
                  local_28 = *(undefined4 *)(iVar3 + 0x378);
                  MySQL::set_query(local_44,"seLect guild_name from guild_info where guild_id=%d",
                                   *(undefined4 *)(param_1 + 0xb8));
                  cVar1 = MySQL::exec(local_44,true);
                  if ((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_44), cVar1 == '\x01')) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if (bVar6) {
                    uVar2 = *(undefined4 *)(param_1 + 0xb8);
                    cMyTrace::cMyTrace(local_d8,
                                       "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",0x9f46
                                       ,5);
                    cMyTrace::operator()
                              (local_d8,"TOD:select guild db fail, guild_id:%d, server_id:%d",uVar2,
                               local_28);
                  }
                  else {
                    iVar3 = MySQL::get_n_rows(local_44);
                    if ((iVar3 != 0) &&
                       (cVar1 = MySQL::get_str(local_44,0,(char *)(param_1 + 0x30),0x16),
                       cVar1 != '\x01')) {
                      uVar2 = *(undefined4 *)(param_1 + 0xb8);
                      cMyTrace::cMyTrace(local_c8,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f4e,5);
                      cMyTrace::operator()
                                (local_c8,"TOD:select guild db fail, guild_id:%d, server_id:%d",
                                 uVar2,local_28);
                    }
                  }
                }
                local_38 = 0x73;
                memset(local_ef8,0,0x564);
                MySQL::set_query(local_40,
                                 "seLect slot,it_id,clear_avatar_id from user_items where charac_no=%u and expire_date>now() and stat=0 limit %d"
                                 ,*(undefined4 *)param_1,0x73);
                cVar1 = MySQL::exec(local_40,true);
                if (cVar1 == '\x01') {
                  local_34 = MySQL::get_n_rows(local_40);
                  for (local_24 = 0; local_24 < local_34; local_24 = local_24 + 1) {
                    cVar1 = MySQL::fetch(local_40);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_a8,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f67,5);
                      cMyTrace::operator()
                                (local_a8,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u"
                                 ,uVar2);
                      break;
                    }
                    cVar1 = MySQL::get_int(local_40,0,local_ef8 + local_24 * 3);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_98,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f6d,5);
                      cMyTrace::operator()
                                (local_98,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(0) ERROR charac_no=%u"
                                 ,uVar2);
                      return 0;
                    }
                    cVar1 = MySQL::get_int(local_40,1,local_ef8 + local_24 * 3 + 1);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_88,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f73,5);
                      cMyTrace::operator()
                                (local_88,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(1) ERROR charac_no=%u"
                                 ,uVar2);
                      return 0;
                    }
                    cVar1 = MySQL::get_int(local_40,2,local_ef8 + local_24 * 3 + 2);
                    if (cVar1 != '\x01') {
                      uVar2 = *(undefined4 *)param_1;
                      cMyTrace::cMyTrace(local_78,
                                         "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                         0x9f79,5);
                      cMyTrace::operator()
                                (local_78,
                                 "DB_LoadPowerWarStatueInfo::GetAvatarInfo, get_int(2) ERROR charac_no=%u"
                                 ,uVar2);
                      return 0;
                    }
                    if ((-1 < local_ef8[local_24 * 3]) && (local_ef8[local_24 * 3] < 10)) {
                      *(int *)(param_1 + (local_ef8[local_24 * 3] + 0x10) * 4 + 0xc) =
                           local_ef8[local_24 * 3 + 1];
                    }
                  }
                  for (local_20 = 0; local_20 < local_34; local_20 = local_20 + 1) {
                    if (local_ef8[local_20 * 3 + 2] != 0) {
                      MySQL::set_query(local_40,"seLect it_id from user_items where ui_id=%d",
                                       local_ef8[local_20 * 3 + 2]);
                      cVar1 = MySQL::exec(local_40,true);
                      if ((cVar1 == '\0') || (cVar1 = MySQL::fetch(local_40), cVar1 == '\0')) {
                        bVar6 = false;
                      }
                      else {
                        bVar6 = true;
                      }
                      if (bVar6) {
                        MySQL::get_int(local_40,0,
                                       (uint *)(param_1 + (local_ef8[local_20 * 3] + 0x10) * 4 + 0xc
                                               ));
                      }
                    }
                  }
                  pcVar4 = local_456;
                  uVar5 = 0x37a;
                  bVar6 = ((uint)pcVar4 & 2) != 0;
                  if (bVar6) {
                    local_456[0] = '\0';
                    local_456[1] = '\0';
                    pcVar4 = local_456 + 2;
                    uVar5 = 0x378;
                  }
                  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    pcVar4[0] = '\0';
                    pcVar4[1] = '\0';
                    pcVar4[2] = '\0';
                    pcVar4[3] = '\0';
                    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
                  }
                  if (!bVar6) {
                    pcVar4[0] = '\0';
                    pcVar4[1] = '\0';
                  }
                  local_dc = 0x37a;
                  local_30 = 0x37a;
                  MySQL::set_query(local_40,"seLect equipslot from inventory where charac_no=%u",
                                   *(undefined4 *)param_1);
                  MySQL::exec(local_40,true);
                  MySQL::fetch(local_40);
                  local_30 = MySQL::get_binary_length(local_40,0);
                  local_29 = MySQL::get_binary(local_40,0,local_456,local_dc);
                  if (local_29 == '\x01') {
                    this_00 = local_994;
                    local_29 = 1;
                    for (iVar3 = 0x15; iVar3 != -1; iVar3 = iVar3 + -1) {
                      Inven_Item::Inven_Item(this_00);
                      this_00 = this_00 + 0x3d;
                    }
                    cVar1 = uncompress_zip(local_732,&local_dc,local_456,local_30);
                    if (cVar1 == '\x01') {
                      *(undefined4 *)(param_1 + 0x74) = local_730;
                      MySQL::set_query(local_40,
                                       "seLect it_id,name from creature_items where slot=238 and charac_no=%u and expire_date > now()"
                                       ,*(undefined4 *)param_1);
                      cVar1 = MySQL::exec(local_40,true);
                      if (cVar1 == '\0') {
                        cMyTrace::cMyTrace(local_58,
                                           "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",
                                           0x9fbf,5);
                        cMyTrace::operator()(local_58,"TOD: read DB creature_items error");
                      }
                      else {
                        cVar1 = MySQL::fetch(local_40);
                        if (cVar1 != '\0') {
                          MySQL::get_int(local_40,0,(int *)(param_1 + 0xb4));
                          MySQL::get_str(local_40,1,(char *)(param_1 + 0xa4),0xc);
                        }
                      }
                      uVar2 = 1;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = *(undefined4 *)param_1;
                    cMyTrace::cMyTrace(local_68,
                                       "bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)",0x9f9d
                                       ,5);
                    cMyTrace::operator()
                              (local_68,
                               "DB_LoadInventory::GetUserInven, get_binary(3) ERROR charac_no=%u",
                               uVar2);
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = *(undefined4 *)param_1;
                  cMyTrace::cMyTrace(local_b8,"bool DB_TOD_Reset_UserAPC::GetAPCUserInfo(_APCInfo&)"
                                     ,0x9f5d,5);
                  cMyTrace::operator()
                            (local_b8,
                             "DB_LoadPowerWarStatueInfo::GetAvatarInfo, exec() ERROR charac_no=%u",
                             uVar2);
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 084400c8 DB_TOD_Reset_UserAPC::dispatch  [0x084400c8-0x84403a9] ===
 84400c8:	55                   	push   %ebp
 84400c9:	89 e5                	mov    %esp,%ebp
 84400cb:	56                   	push   %esi
 84400cc:	53                   	push   %ebx
 84400cd:	83 ec 60             	sub    $0x60,%esp
 84400d0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84400d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84400dc:	00 
 84400dd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84400e4:	00 
 84400e5:	89 04 24             	mov    %eax,(%esp)
 84400e8:	e8 51 51 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84400ed:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84400f0:	c7 44 24 04 f0 5d c5 	movl   $0x8c55df0,0x4(%esp)
 84400f7:	08 
 84400f8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84400fb:	89 04 24             	mov    %eax,(%esp)
 84400fe:	e8 bd 40 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440103:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844010a:	00 
 844010b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844010e:	89 04 24             	mov    %eax,(%esp)
 8440111:	e8 10 42 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8440116:	83 f0 01             	xor    $0x1,%eax
 8440119:	84 c0                	test   %al,%al
 844011b:	74 40                	je     844015d <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x95>
 844011d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440124:	00 
 8440125:	c7 44 24 08 a7 9e 00 	movl   $0x9ea7,0x8(%esp)
 844012c:	00 
 844012d:	c7 44 24 04 a0 b9 c5 	movl   $0x8c5b9a0,0x4(%esp)
 8440134:	08 
 8440135:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8440138:	89 04 24             	mov    %eax,(%esp)
 844013b:	e8 d8 f5 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8440140:	c7 44 24 04 28 5e c5 	movl   $0x8c55e28,0x4(%esp)
 8440147:	08 
 8440148:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 844014b:	89 04 24             	mov    %eax,(%esp)
 844014e:	e8 35 f6 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440153:	bb 00 00 00 00       	mov    $0x0,%ebx
 8440158:	e9 44 02 00 00       	jmp    84403a1 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x2d9>
 844015d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8440162:	c7 44 24 08 ab 9e 00 	movl   $0x9eab,0x8(%esp)
 8440169:	00 
 844016a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8440171:	08 
 8440172:	89 04 24             	mov    %eax,(%esp)
 8440175:	e8 0c f9 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844017a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8440181:	00 
 8440182:	89 44 24 04          	mov    %eax,0x4(%esp)
 8440186:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8440189:	89 04 24             	mov    %eax,(%esp)
 844018c:	e8 95 8a c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8440191:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8440194:	89 04 24             	mov    %eax,(%esp)
 8440197:	e8 aa 8a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844019c:	8b 55 0c             	mov    0xc(%ebp),%edx
 844019f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84401a3:	89 04 24             	mov    %eax,(%esp)
 84401a6:	e8 ab 8a c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84401ab:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84401ae:	89 04 24             	mov    %eax,(%esp)
 84401b1:	e8 90 8a c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84401b6:	8b 55 10             	mov    0x10(%ebp),%edx
 84401b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84401bd:	89 04 24             	mov    %eax,(%esp)
 84401c0:	e8 91 8a c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84401c5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84401c8:	89 04 24             	mov    %eax,(%esp)
 84401cb:	e8 7e 8a c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84401d0:	89 04 24             	mov    %eax,(%esp)
 84401d3:	e8 e0 3a 01 00       	call   8453cb8 <_ZN12CStreamGuard11GetInBufferI25SIG_TOD_RELOADED_USER_APCEEPT_v>
 84401d8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84401db:	c7 44 24 08 58 07 00 	movl   $0x758,0x8(%esp)
 84401e2:	00 
 84401e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84401ea:	00 
 84401eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84401ee:	89 04 24             	mov    %eax,(%esp)
 84401f1:	e8 ca da c3 ff       	call   807dcc0 <memset@plt>
 84401f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84401f9:	89 04 24             	mov    %eax,(%esp)
 84401fc:	e8 6b 21 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8440201:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8440204:	83 7d ec 0a          	cmpl   $0xa,-0x14(%ebp)
 8440208:	74 47                	je     8440251 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x189>
 844020a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440211:	00 
 8440212:	c7 44 24 08 b5 9e 00 	movl   $0x9eb5,0x8(%esp)
 8440219:	00 
 844021a:	c7 44 24 04 a0 b9 c5 	movl   $0x8c5b9a0,0x4(%esp)
 8440221:	08 
 8440222:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8440225:	89 04 24             	mov    %eax,(%esp)
 8440228:	e8 eb f4 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844022d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8440230:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440234:	c7 44 24 04 3f 5e c5 	movl   $0x8c55e3f,0x4(%esp)
 844023b:	08 
 844023c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 844023f:	89 04 24             	mov    %eax,(%esp)
 8440242:	e8 41 f5 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8440247:	bb 00 00 00 00       	mov    $0x0,%ebx
 844024c:	e9 45 01 00 00       	jmp    8440396 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x2ce>
 8440251:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8440258:	e9 80 00 00 00       	jmp    84402dd <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x215>
 844025d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440260:	89 04 24             	mov    %eax,(%esp)
 8440263:	e8 54 42 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8440268:	83 f0 01             	xor    $0x1,%eax
 844026b:	84 c0                	test   %al,%al
 844026d:	74 47                	je     84402b6 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x1ee>
 844026f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8440276:	00 
 8440277:	c7 44 24 08 bd 9e 00 	movl   $0x9ebd,0x8(%esp)
 844027e:	00 
 844027f:	c7 44 24 04 a0 b9 c5 	movl   $0x8c5b9a0,0x4(%esp)
 8440286:	08 
 8440287:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844028a:	89 04 24             	mov    %eax,(%esp)
 844028d:	e8 86 f4 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8440292:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8440295:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440299:	c7 44 24 04 55 5e c5 	movl   $0x8c55e55,0x4(%esp)
 84402a0:	08 
 84402a1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84402a4:	89 04 24             	mov    %eax,(%esp)
 84402a7:	e8 dc f4 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84402ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 84402b1:	e9 e0 00 00 00       	jmp    8440396 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x2ce>
 84402b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84402b9:	69 c0 bc 00 00 00    	imul   $0xbc,%eax,%eax
 84402bf:	03 45 e8             	add    -0x18(%ebp),%eax
 84402c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84402c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84402cd:	00 
 84402ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84402d1:	89 04 24             	mov    %eax,(%esp)
 84402d4:	e8 d5 1f ca ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 84402d9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84402dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84402e0:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 84402e3:	7d 0d                	jge    84402f2 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x22a>
 84402e5:	83 7d f0 09          	cmpl   $0x9,-0x10(%ebp)
 84402e9:	7f 07                	jg     84402f2 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x22a>
 84402eb:	b8 01 00 00 00       	mov    $0x1,%eax
 84402f0:	eb 05                	jmp    84402f7 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x22f>
 84402f2:	b8 00 00 00 00       	mov    $0x0,%eax
 84402f7:	84 c0                	test   %al,%al
 84402f9:	0f 85 5e ff ff ff    	jne    844025d <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x195>
 84402ff:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8440306:	eb 32                	jmp    844033a <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x272>
 8440308:	8b 55 f4             	mov    -0xc(%ebp),%edx
 844030b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844030e:	69 d2 bc 00 00 00    	imul   $0xbc,%edx,%edx
 8440314:	8b 04 02             	mov    (%edx,%eax,1),%eax
 8440317:	85 c0                	test   %eax,%eax
 8440319:	74 1b                	je     8440336 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x26e>
 844031b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844031e:	69 c0 bc 00 00 00    	imul   $0xbc,%eax,%eax
 8440324:	03 45 e8             	add    -0x18(%ebp),%eax
 8440327:	89 44 24 04          	mov    %eax,0x4(%esp)
 844032b:	8b 45 08             	mov    0x8(%ebp),%eax
 844032e:	89 04 24             	mov    %eax,(%esp)
 8440331:	e8 12 02 00 00       	call   8440548 <_ZN20DB_TOD_Reset_UserAPC14GetAPCUserInfoER8_APCInfo>
 8440336:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 844033a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844033d:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8440340:	7d 0d                	jge    844034f <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x287>
 8440342:	83 7d f4 09          	cmpl   $0x9,-0xc(%ebp)
 8440346:	7f 07                	jg     844034f <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x287>
 8440348:	b8 01 00 00 00       	mov    $0x1,%eax
 844034d:	eb 05                	jmp    8440354 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x28c>
 844034f:	b8 00 00 00 00       	mov    $0x0,%eax
 8440354:	84 c0                	test   %al,%al
 8440356:	75 b0                	jne    8440308 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x240>
 8440358:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844035d:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8440360:	89 54 24 08          	mov    %edx,0x8(%esp)
 8440364:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844036b:	00 
 844036c:	89 04 24             	mov    %eax,(%esp)
 844036f:	e8 6a 0c 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8440374:	bb 01 00 00 00       	mov    $0x1,%ebx
 8440379:	eb 1b                	jmp    8440396 <_ZN20DB_TOD_Reset_UserAPC8dispatchEiiP6Stream+0x2ce>
 844037b:	89 d3                	mov    %edx,%ebx
 844037d:	89 c6                	mov    %eax,%esi
 844037f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8440382:	89 04 24             	mov    %eax,(%esp)
 8440385:	e8 48 c5 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844038a:	89 f0                	mov    %esi,%eax
 844038c:	89 da                	mov    %ebx,%edx
 844038e:	89 04 24             	mov    %eax,(%esp)
 8440391:	e8 ba 33 6a 00       	call   8ae3750 <_Unwind_Resume>
 8440396:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8440399:	89 04 24             	mov    %eax,(%esp)
 844039c:	e8 31 c5 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84403a1:	89 d8                	mov    %ebx,%eax
 84403a3:	83 c4 60             	add    $0x60,%esp
 84403a6:	5b                   	pop    %ebx
 84403a7:	5e                   	pop    %esi
 84403a8:	5d                   	pop    %ebp
 84403a9:	c3                   	ret

```

```c
// DB_TOD_Reset_UserAPC::dispatch @ 0x84400c8

/* DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*) */

undefined4 DB_TOD_Reset_UserAPC::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_58 [8];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  MySQL *local_20;
  SIG_TOD_RELOADED_USER_APC *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_20,"seLect charac_no from charac_tower_despair_apc limit 10");
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9eab);
    CStreamGuard::CStreamGuard(local_58,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
                    /* try { // try from 084401a6 to 08440373 has its CatchHandler @ 0844037b */
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_58);
    CStreamGuard::operator<<(pCVar4,(int)param_3);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_1c = CStreamGuard::GetInBuffer<SIG_TOD_RELOADED_USER_APC>(pCVar4);
    memset(local_1c,0,0x758);
    local_18 = MySQL::get_n_rows(local_20);
    if (local_18 == 10) {
      local_14 = 0;
LAB_084402dd:
      if ((local_14 < local_18) && (local_14 < 10)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cVar2 = MySQL::fetch(local_20);
        if (cVar2 == '\x01') goto LAB_084402b6;
        cMyTrace::cMyTrace(local_30,"virtual bool DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)"
                           ,0x9ebd,5);
        cMyTrace::operator()(local_30,"TOD : db->fetch(), int i=%d",local_14);
        uVar5 = 0;
      }
      else {
        local_10 = 0;
        while( true ) {
          if ((local_10 < local_18) && (local_10 < 10)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
          if (*(int *)(local_1c + local_10 * 0xbc) != 0) {
            GetAPCUserInfo((DB_TOD_Reset_UserAPC *)param_1,(_APCInfo *)(local_1c + local_10 * 0xbc))
            ;
          }
          local_10 = local_10 + 1;
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_58);
        uVar5 = 1;
      }
      goto LAB_08440396;
    }
    cMyTrace::cMyTrace(local_40,"virtual bool DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)",
                       0x9eb5,5);
    cMyTrace::operator()(local_40,"TOD : get_n_rows() %d",local_18);
    uVar5 = 0;
LAB_08440396:
    CStreamGuard::~CStreamGuard(local_58);
  }
  else {
    cMyTrace::cMyTrace(local_50,"virtual bool DB_TOD_Reset_UserAPC::dispatch(int, int, Stream*)",
                       0x9ea7,5);
    cMyTrace::operator()(local_50,"TOD : load apc from DB");
    uVar5 = 0;
  }
  return uVar5;
LAB_084402b6:
  MySQL::get_int(local_20,0,(uint *)(local_1c + local_14 * 0xbc));
  local_14 = local_14 + 1;
  goto LAB_084402dd;
}

```

