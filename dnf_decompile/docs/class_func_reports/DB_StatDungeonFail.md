# DB_StatDungeonFail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841b6e0 DB_StatDungeonFail::dispatch  [0x0841b6e0-0x841ba95] ===
 841b6e0:	55                   	push   %ebp
 841b6e1:	89 e5                	mov    %esp,%ebp
 841b6e3:	81 ec 88 00 00 00    	sub    $0x88,%esp
 841b6e9:	e8 b9 ec cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b6ee:	89 04 24             	mov    %eax,(%esp)
 841b6f1:	e8 3c 25 03 00       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 841b6f6:	89 04 24             	mov    %eax,(%esp)
 841b6f9:	e8 fe 1d 03 00       	call   844d4fc <_ZN23StatisticsShusiaService4lockEv>
 841b6fe:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b703:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b70a:	00 
 841b70b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841b712:	00 
 841b713:	89 04 24             	mov    %eax,(%esp)
 841b716:	e8 23 9b fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b71b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 841b71e:	e8 84 ec cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b723:	89 04 24             	mov    %eax,(%esp)
 841b726:	e8 07 25 03 00       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 841b72b:	8d 50 18             	lea    0x18(%eax),%edx
 841b72e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841b731:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b735:	89 04 24             	mov    %eax,(%esp)
 841b738:	e8 63 68 d3 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 841b73d:	83 ec 04             	sub    $0x4,%esp
 841b740:	e8 62 ec cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b745:	89 04 24             	mov    %eax,(%esp)
 841b748:	e8 e5 24 03 00       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 841b74d:	8d 50 18             	lea    0x18(%eax),%edx
 841b750:	8d 45 90             	lea    -0x70(%ebp),%eax
 841b753:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b757:	89 04 24             	mov    %eax,(%esp)
 841b75a:	e8 bb 1b cb ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 841b75f:	83 ec 04             	sub    $0x4,%esp
 841b762:	e9 ed 00 00 00       	jmp    841b854 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x174>
 841b767:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841b76a:	89 04 24             	mov    %eax,(%esp)
 841b76d:	e8 08 82 d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841b772:	8b 00                	mov    (%eax),%eax
 841b774:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841b777:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841b77a:	89 04 24             	mov    %eax,(%esp)
 841b77d:	e8 f8 81 d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841b782:	8b 40 04             	mov    0x4(%eax),%eax
 841b785:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841b788:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b78b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b78f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841b792:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b796:	c7 44 24 04 e4 b3 c4 	movl   $0x8c4b3e4,0x4(%esp)
 841b79d:	08 
 841b79e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841b7a1:	89 04 24             	mov    %eax,(%esp)
 841b7a4:	e8 17 8a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b7a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b7b0:	00 
 841b7b1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841b7b4:	89 04 24             	mov    %eax,(%esp)
 841b7b7:	e8 6a 8b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b7bc:	88 45 e6             	mov    %al,-0x1a(%ebp)
 841b7bf:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 841b7c3:	83 f0 01             	xor    $0x1,%eax
 841b7c6:	84 c0                	test   %al,%al
 841b7c8:	74 7f                	je     841b849 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x169>
 841b7ca:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841b7cd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b7d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841b7d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b7d8:	c7 44 24 04 38 b4 c4 	movl   $0x8c4b438,0x4(%esp)
 841b7df:	08 
 841b7e0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841b7e3:	89 04 24             	mov    %eax,(%esp)
 841b7e6:	e8 d5 89 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b7eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b7f2:	00 
 841b7f3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841b7f6:	89 04 24             	mov    %eax,(%esp)
 841b7f9:	e8 28 8b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b7fe:	88 45 e7             	mov    %al,-0x19(%ebp)
 841b801:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 841b805:	83 f0 01             	xor    $0x1,%eax
 841b808:	84 c0                	test   %al,%al
 841b80a:	74 3d                	je     841b849 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x169>
 841b80c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841b813:	00 
 841b814:	c7 44 24 08 8f 4e 00 	movl   $0x4e8f,0x8(%esp)
 841b81b:	00 
 841b81c:	c7 44 24 04 40 cb c5 	movl   $0x8c5cb40,0x4(%esp)
 841b823:	08 
 841b824:	8d 45 98             	lea    -0x68(%ebp),%eax
 841b827:	89 04 24             	mov    %eax,(%esp)
 841b82a:	e8 e9 3e 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841b82f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841b832:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b836:	c7 44 24 04 90 b4 c4 	movl   $0x8c4b490,0x4(%esp)
 841b83d:	08 
 841b83e:	8d 45 98             	lea    -0x68(%ebp),%eax
 841b841:	89 04 24             	mov    %eax,(%esp)
 841b844:	e8 3f 3f 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841b849:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841b84c:	89 04 24             	mov    %eax,(%esp)
 841b84f:	e8 f2 ee cb ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 841b854:	8d 45 90             	lea    -0x70(%ebp),%eax
 841b857:	89 44 24 04          	mov    %eax,0x4(%esp)
 841b85b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841b85e:	89 04 24             	mov    %eax,(%esp)
 841b861:	e8 62 eb cb ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 841b866:	84 c0                	test   %al,%al
 841b868:	0f 85 f9 fe ff ff    	jne    841b767 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x87>
 841b86e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841b873:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841b87a:	00 
 841b87b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841b882:	00 
 841b883:	89 04 24             	mov    %eax,(%esp)
 841b886:	e8 b3 99 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841b88b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 841b88e:	e8 14 eb cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b893:	89 04 24             	mov    %eax,(%esp)
 841b896:	e8 97 23 03 00       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 841b89b:	8d 50 30             	lea    0x30(%eax),%edx
 841b89e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841b8a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b8a5:	89 04 24             	mov    %eax,(%esp)
 841b8a8:	e8 f3 66 d3 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 841b8ad:	83 ec 04             	sub    $0x4,%esp
 841b8b0:	e8 f2 ea cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841b8b5:	89 04 24             	mov    %eax,(%esp)
 841b8b8:	e8 75 23 03 00       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 841b8bd:	8d 50 30             	lea    0x30(%eax),%edx
 841b8c0:	8d 45 88             	lea    -0x78(%ebp),%eax
 841b8c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 841b8c7:	89 04 24             	mov    %eax,(%esp)
 841b8ca:	e8 4b 1a cb ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 841b8cf:	83 ec 04             	sub    $0x4,%esp
 841b8d2:	e9 74 01 00 00       	jmp    841ba4b <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x36b>
 841b8d7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841b8da:	89 04 24             	mov    %eax,(%esp)
 841b8dd:	e8 98 80 d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841b8e2:	8b 00                	mov    (%eax),%eax
 841b8e4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841b8e7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841b8ea:	89 04 24             	mov    %eax,(%esp)
 841b8ed:	e8 88 80 d7 ff       	call   819397a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEdeEv>
 841b8f2:	8b 40 04             	mov    0x4(%eax),%eax
 841b8f5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841b8f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b8fb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b8ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b902:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b906:	c7 44 24 04 b4 b4 c4 	movl   $0x8c4b4b4,0x4(%esp)
 841b90d:	08 
 841b90e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b911:	89 04 24             	mov    %eax,(%esp)
 841b914:	e8 a7 88 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b919:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b920:	00 
 841b921:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b924:	89 04 24             	mov    %eax,(%esp)
 841b927:	e8 fa 89 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b92c:	88 45 f6             	mov    %al,-0xa(%ebp)
 841b92f:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 841b933:	83 f0 01             	xor    $0x1,%eax
 841b936:	84 c0                	test   %al,%al
 841b938:	0f 84 be 00 00 00    	je     841b9fc <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x31c>
 841b93e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841b945:	00 
 841b946:	c7 44 24 08 a9 4e 00 	movl   $0x4ea9,0x8(%esp)
 841b94d:	00 
 841b94e:	c7 44 24 04 40 cb c5 	movl   $0x8c5cb40,0x4(%esp)
 841b955:	08 
 841b956:	8d 45 a8             	lea    -0x58(%ebp),%eax
 841b959:	89 04 24             	mov    %eax,(%esp)
 841b95c:	e8 b7 3d 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841b961:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b964:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b968:	c7 44 24 04 0c b5 c4 	movl   $0x8c4b50c,0x4(%esp)
 841b96f:	08 
 841b970:	8d 45 a8             	lea    -0x58(%ebp),%eax
 841b973:	89 04 24             	mov    %eax,(%esp)
 841b976:	e8 0d 3e 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841b97b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b97e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841b982:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841b985:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b989:	c7 44 24 04 38 b5 c4 	movl   $0x8c4b538,0x4(%esp)
 841b990:	08 
 841b991:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b994:	89 04 24             	mov    %eax,(%esp)
 841b997:	e8 24 88 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841b99c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841b9a3:	00 
 841b9a4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841b9a7:	89 04 24             	mov    %eax,(%esp)
 841b9aa:	e8 77 89 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841b9af:	88 45 f7             	mov    %al,-0x9(%ebp)
 841b9b2:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 841b9b6:	83 f0 01             	xor    $0x1,%eax
 841b9b9:	84 c0                	test   %al,%al
 841b9bb:	74 3f                	je     841b9fc <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x31c>
 841b9bd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841b9c4:	00 
 841b9c5:	c7 44 24 08 af 4e 00 	movl   $0x4eaf,0x8(%esp)
 841b9cc:	00 
 841b9cd:	c7 44 24 04 40 cb c5 	movl   $0x8c5cb40,0x4(%esp)
 841b9d4:	08 
 841b9d5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841b9d8:	89 04 24             	mov    %eax,(%esp)
 841b9db:	e8 38 3d 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841b9e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841b9e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 841b9e7:	c7 44 24 04 94 b5 c4 	movl   $0x8c4b594,0x4(%esp)
 841b9ee:	08 
 841b9ef:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841b9f2:	89 04 24             	mov    %eax,(%esp)
 841b9f5:	e8 8e 3d 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841b9fa:	eb 44                	jmp    841ba40 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x360>
 841b9fc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841ba03:	00 
 841ba04:	c7 44 24 08 b3 4e 00 	movl   $0x4eb3,0x8(%esp)
 841ba0b:	00 
 841ba0c:	c7 44 24 04 40 cb c5 	movl   $0x8c5cb40,0x4(%esp)
 841ba13:	08 
 841ba14:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841ba17:	89 04 24             	mov    %eax,(%esp)
 841ba1a:	e8 f9 3c 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841ba1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841ba22:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841ba26:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841ba29:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ba2d:	c7 44 24 04 bc b5 c4 	movl   $0x8c4b5bc,0x4(%esp)
 841ba34:	08 
 841ba35:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841ba38:	89 04 24             	mov    %eax,(%esp)
 841ba3b:	e8 48 3d 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841ba40:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841ba43:	89 04 24             	mov    %eax,(%esp)
 841ba46:	e8 fb ec cb ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 841ba4b:	8d 45 88             	lea    -0x78(%ebp),%eax
 841ba4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 841ba52:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841ba55:	89 04 24             	mov    %eax,(%esp)
 841ba58:	e8 6b e9 cb ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 841ba5d:	84 c0                	test   %al,%al
 841ba5f:	0f 85 72 fe ff ff    	jne    841b8d7 <_ZN18DB_StatDungeonFail8dispatchEiiP6Stream+0x1f7>
 841ba65:	e8 3d e9 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841ba6a:	89 04 24             	mov    %eax,(%esp)
 841ba6d:	e8 c0 21 03 00       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 841ba72:	89 04 24             	mov    %eax,(%esp)
 841ba75:	e8 96 1a 03 00       	call   844d510 <_ZN23StatisticsShusiaService6unlockEv>
 841ba7a:	e8 28 e9 cb ff       	call   80da3a7 <_Z11G_GameWorldv>
 841ba7f:	89 04 24             	mov    %eax,(%esp)
 841ba82:	e8 ab 21 03 00       	call   844dc32 <_ZN9GameWorld26getStatisticsShusiaServiceEv>
 841ba87:	89 04 24             	mov    %eax,(%esp)
 841ba8a:	e8 c5 06 1f 00       	call   860c154 <_ZN23StatisticsShusiaService5resetEv>
 841ba8f:	b8 01 00 00 00       	mov    $0x1,%eax
 841ba94:	c9                   	leave
 841ba95:	c3                   	ret

```

```c
// DB_StatDungeonFail::dispatch @ 0x841b6e0

/* DB_StatDungeonFail::dispatch(int, int, Stream*) */

undefined4 DB_StatDungeonFail::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  GameWorld *pGVar2;
  StatisticsShusiaService *pSVar3;
  undefined4 *puVar4;
  int iVar5;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_7c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_78 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_74 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_70 [4];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  MySQL *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_1e;
  char local_1d;
  MySQL *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_e;
  char local_d;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  pSVar3 = (StatisticsShusiaService *)GameWorld::getStatisticsShusiaService(pGVar2);
  StatisticsShusiaService::lock(pSVar3);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_70);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_74);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70,
                       (_Rb_tree_iterator *)local_74);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70);
    local_28 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70);
    local_24 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_2c,
                     "inSert into dungeon_fail(occ_date,lev,occ_count) values(cast(now() as date),%d,%d)"
                     ,local_28,local_24);
    local_1e = MySQL::exec(local_2c,true);
    if (local_1e != '\x01') {
      MySQL::set_query(local_2c,
                       "upDate dungeon_fail set occ_count = occ_count + %d where occ_date = now() and lev = %d"
                       ,local_24,local_28);
      local_1d = MySQL::exec(local_2c,true);
      if (local_1d != '\x01') {
        cMyTrace::cMyTrace(local_6c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                           0x4e8f,5);
        cMyTrace::operator()(local_6c,"upDate dungeon_fail failed at %d",local_28);
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_70);
  }
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_78);
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::getStatisticsShusiaService(pGVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_7c);
  do {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78,
                       (_Rb_tree_iterator *)local_7c);
    if (cVar1 == '\0') {
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsShusiaService *)GameWorld::getStatisticsShusiaService(pGVar2);
      StatisticsShusiaService::unlock(pSVar3);
      pGVar2 = (GameWorld *)G_GameWorld();
      pSVar3 = (StatisticsShusiaService *)GameWorld::getStatisticsShusiaService(pGVar2);
      StatisticsShusiaService::reset(pSVar3);
      return 1;
    }
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78);
    local_18 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78);
    local_14 = *(undefined4 *)(iVar5 + 4);
    MySQL::set_query(local_1c,
                     "inSert into re_stamina_shusia(occ_date,lev,occ_count) values(cast(now() as date),%d,%d)"
                     ,local_18,local_14);
    local_e = MySQL::exec(local_1c,true);
    if (local_e == '\x01') {
LAB_0841b9fc:
      cMyTrace::cMyTrace(local_3c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                         0x4eb3,5);
      cMyTrace::operator()(local_3c,"re_stamina_shusia : %d SHUSIA USAGE %d",local_18,local_14);
    }
    else {
      cMyTrace::cMyTrace(local_5c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                         0x4ea9,5);
      cMyTrace::operator()(local_5c,"inSert into re_stamina_shusia failed at %d",local_18);
      MySQL::set_query(local_1c,
                       "upDate re_stamina_shusia set occ_count = occ_count + %d where occ_date = now() and lev = %d"
                       ,local_14,local_18);
      local_d = MySQL::exec(local_1c,true);
      if (local_d == '\x01') goto LAB_0841b9fc;
      cMyTrace::cMyTrace(local_4c,"virtual bool DB_StatDungeonFail::dispatch(int, int, Stream*)",
                         0x4eaf,5);
      cMyTrace::operator()(local_4c,"upDate re_stamina_shusia failed at %d",local_18);
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_78);
  } while( true );
}

```

