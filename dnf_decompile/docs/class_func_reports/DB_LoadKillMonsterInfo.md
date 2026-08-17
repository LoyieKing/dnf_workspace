# DB_LoadKillMonsterInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## LoadMonsterInfo

```asm
// === 0844159a DB_LoadKillMonsterInfo::LoadMonsterInfo  [0x0844159a-0x84419ab] ===
 844159a:	55                   	push   %ebp
 844159b:	89 e5                	mov    %esp,%ebp
 844159d:	53                   	push   %ebx
 844159e:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 84415a4:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 84415a8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84415ad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84415b4:	00 
 84415b5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84415bc:	00 
 84415bd:	89 04 24             	mov    %eax,(%esp)
 84415c0:	e8 79 3c fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84415c5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84415c8:	c7 45 ec 05 00 00 00 	movl   $0x5,-0x14(%ebp)
 84415cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84415d2:	8b 80 c8 af 00 00    	mov    0xafc8(%eax),%eax
 84415d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84415dc:	c7 44 24 04 ac 65 c5 	movl   $0x8c565ac,0x4(%esp)
 84415e3:	08 
 84415e4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84415e7:	89 04 24             	mov    %eax,(%esp)
 84415ea:	e8 d1 2b fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84415ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84415f6:	00 
 84415f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84415fa:	89 04 24             	mov    %eax,(%esp)
 84415fd:	e8 24 2d fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8441602:	88 45 e7             	mov    %al,-0x19(%ebp)
 8441605:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8441609:	83 f0 01             	xor    $0x1,%eax
 844160c:	84 c0                	test   %al,%al
 844160e:	74 4d                	je     844165d <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0xc3>
 8441610:	8b 45 0c             	mov    0xc(%ebp),%eax
 8441613:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 8441619:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8441620:	00 
 8441621:	c7 44 24 08 63 a0 00 	movl   $0xa063,0x8(%esp)
 8441628:	00 
 8441629:	c7 44 24 04 e0 b7 c5 	movl   $0x8c5b7e0,0x4(%esp)
 8441630:	08 
 8441631:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8441634:	89 04 24             	mov    %eax,(%esp)
 8441637:	e8 dc e0 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844163c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8441640:	c7 44 24 04 0c 66 c5 	movl   $0x8c5660c,0x4(%esp)
 8441647:	08 
 8441648:	8d 45 84             	lea    -0x7c(%ebp),%eax
 844164b:	89 04 24             	mov    %eax,(%esp)
 844164e:	e8 35 e1 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8441653:	b8 00 00 00 00       	mov    $0x0,%eax
 8441658:	e9 45 03 00 00       	jmp    84419a2 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x408>
 844165d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441660:	89 04 24             	mov    %eax,(%esp)
 8441663:	e8 04 0d ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8441668:	85 c0                	test   %eax,%eax
 844166a:	0f 94 c0             	sete   %al
 844166d:	84 c0                	test   %al,%al
 844166f:	0f 84 98 00 00 00    	je     844170d <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x173>
 8441675:	8b 45 0c             	mov    0xc(%ebp),%eax
 8441678:	8b 80 c8 af 00 00    	mov    0xafc8(%eax),%eax
 844167e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441682:	c7 44 24 04 58 66 c5 	movl   $0x8c56658,0x4(%esp)
 8441689:	08 
 844168a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844168d:	89 04 24             	mov    %eax,(%esp)
 8441690:	e8 2b 2b fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441695:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844169c:	00 
 844169d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84416a0:	89 04 24             	mov    %eax,(%esp)
 84416a3:	e8 7e 2c fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84416a8:	88 45 e7             	mov    %al,-0x19(%ebp)
 84416ab:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 84416af:	83 f0 01             	xor    $0x1,%eax
 84416b2:	84 c0                	test   %al,%al
 84416b4:	74 4d                	je     8441703 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x169>
 84416b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84416b9:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 84416bf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84416c6:	00 
 84416c7:	c7 44 24 08 70 a0 00 	movl   $0xa070,0x8(%esp)
 84416ce:	00 
 84416cf:	c7 44 24 04 e0 b7 c5 	movl   $0x8c5b7e0,0x4(%esp)
 84416d6:	08 
 84416d7:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84416da:	89 04 24             	mov    %eax,(%esp)
 84416dd:	e8 36 e0 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84416e2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84416e6:	c7 44 24 04 94 66 c5 	movl   $0x8c56694,0x4(%esp)
 84416ed:	08 
 84416ee:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84416f1:	89 04 24             	mov    %eax,(%esp)
 84416f4:	e8 8f e0 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84416f9:	b8 00 00 00 00       	mov    $0x0,%eax
 84416fe:	e9 9f 02 00 00       	jmp    84419a2 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x408>
 8441703:	b8 01 00 00 00       	mov    $0x1,%eax
 8441708:	e9 95 02 00 00       	jmp    84419a2 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x408>
 844170d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441710:	89 04 24             	mov    %eax,(%esp)
 8441713:	e8 a4 2d fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8441718:	88 45 e7             	mov    %al,-0x19(%ebp)
 844171b:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 844171f:	83 f0 01             	xor    $0x1,%eax
 8441722:	84 c0                	test   %al,%al
 8441724:	74 4d                	je     8441773 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x1d9>
 8441726:	8b 45 0c             	mov    0xc(%ebp),%eax
 8441729:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 844172f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8441736:	00 
 8441737:	c7 44 24 08 7a a0 00 	movl   $0xa07a,0x8(%esp)
 844173e:	00 
 844173f:	c7 44 24 04 e0 b7 c5 	movl   $0x8c5b7e0,0x4(%esp)
 8441746:	08 
 8441747:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 844174a:	89 04 24             	mov    %eax,(%esp)
 844174d:	e8 c6 df 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8441752:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8441756:	c7 44 24 04 e0 66 c5 	movl   $0x8c566e0,0x4(%esp)
 844175d:	08 
 844175e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8441761:	89 04 24             	mov    %eax,(%esp)
 8441764:	e8 1f e0 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8441769:	b8 00 00 00 00       	mov    $0x0,%eax
 844176e:	e9 2f 02 00 00       	jmp    84419a2 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x408>
 8441773:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844177a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844177d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441781:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441784:	89 04 24             	mov    %eax,(%esp)
 8441787:	e8 52 3c ce ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 844178c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844178f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8441793:	0f 84 91 00 00 00    	je     844182a <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x290>
 8441799:	8b 45 0c             	mov    0xc(%ebp),%eax
 844179c:	89 c2                	mov    %eax,%edx
 844179e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84417a1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84417a5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84417ac:	00 
 84417ad:	c7 44 24 0c 4c 1d 00 	movl   $0x1d4c,0xc(%esp)
 84417b4:	00 
 84417b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84417b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84417bd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84417c0:	89 04 24             	mov    %eax,(%esp)
 84417c3:	e8 b1 a4 fb ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 84417c8:	88 45 e7             	mov    %al,-0x19(%ebp)
 84417cb:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 84417cf:	83 f0 01             	xor    $0x1,%eax
 84417d2:	84 c0                	test   %al,%al
 84417d4:	74 58                	je     844182e <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x294>
 84417d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84417d9:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 84417df:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84417e6:	00 
 84417e7:	c7 44 24 08 87 a0 00 	movl   $0xa087,0x8(%esp)
 84417ee:	00 
 84417ef:	c7 44 24 04 e0 b7 c5 	movl   $0x8c5b7e0,0x4(%esp)
 84417f6:	08 
 84417f7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84417fa:	89 04 24             	mov    %eax,(%esp)
 84417fd:	e8 16 df 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8441802:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8441806:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441809:	89 44 24 08          	mov    %eax,0x8(%esp)
 844180d:	c7 44 24 04 2c 67 c5 	movl   $0x8c5672c,0x4(%esp)
 8441814:	08 
 8441815:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8441818:	89 04 24             	mov    %eax,(%esp)
 844181b:	e8 68 df 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8441820:	b8 00 00 00 00       	mov    $0x0,%eax
 8441825:	e9 78 01 00 00       	jmp    84419a2 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x408>
 844182a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 844182e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441831:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441835:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441838:	89 04 24             	mov    %eax,(%esp)
 844183b:	e8 9e 3b ce ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8441840:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8441843:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8441847:	0f 84 96 00 00 00    	je     84418e3 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x349>
 844184d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8441850:	05 4c 1d 00 00       	add    $0x1d4c,%eax
 8441855:	89 c2                	mov    %eax,%edx
 8441857:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844185a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 844185e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8441865:	00 
 8441866:	c7 44 24 0c 30 75 00 	movl   $0x7530,0xc(%esp)
 844186d:	00 
 844186e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8441872:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441876:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441879:	89 04 24             	mov    %eax,(%esp)
 844187c:	e8 f8 a3 fb ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 8441881:	88 45 e7             	mov    %al,-0x19(%ebp)
 8441884:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8441888:	83 f0 01             	xor    $0x1,%eax
 844188b:	84 c0                	test   %al,%al
 844188d:	74 58                	je     84418e7 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x34d>
 844188f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8441892:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 8441898:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844189f:	00 
 84418a0:	c7 44 24 08 9b a0 00 	movl   $0xa09b,0x8(%esp)
 84418a7:	00 
 84418a8:	c7 44 24 04 e0 b7 c5 	movl   $0x8c5b7e0,0x4(%esp)
 84418af:	08 
 84418b0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84418b3:	89 04 24             	mov    %eax,(%esp)
 84418b6:	e8 5d de 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84418bb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84418bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84418c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84418c6:	c7 44 24 04 2c 67 c5 	movl   $0x8c5672c,0x4(%esp)
 84418cd:	08 
 84418ce:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84418d1:	89 04 24             	mov    %eax,(%esp)
 84418d4:	e8 af de 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84418d9:	b8 00 00 00 00       	mov    $0x0,%eax
 84418de:	e9 bf 00 00 00       	jmp    84419a2 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x408>
 84418e3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84418e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84418ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84418ee:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84418f1:	89 04 24             	mov    %eax,(%esp)
 84418f4:	e8 e5 3a ce ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 84418f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84418fc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8441900:	0f 84 93 00 00 00    	je     8441999 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x3ff>
 8441906:	8b 45 0c             	mov    0xc(%ebp),%eax
 8441909:	05 7c 92 00 00       	add    $0x927c,%eax
 844190e:	89 c2                	mov    %eax,%edx
 8441910:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441913:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8441917:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 844191e:	00 
 844191f:	c7 44 24 0c 4c 1d 00 	movl   $0x1d4c,0xc(%esp)
 8441926:	00 
 8441927:	89 54 24 08          	mov    %edx,0x8(%esp)
 844192b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844192f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8441932:	89 04 24             	mov    %eax,(%esp)
 8441935:	e8 3f a3 fb ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 844193a:	88 45 e7             	mov    %al,-0x19(%ebp)
 844193d:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8441941:	83 f0 01             	xor    $0x1,%eax
 8441944:	84 c0                	test   %al,%al
 8441946:	74 55                	je     844199d <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x403>
 8441948:	8b 45 0c             	mov    0xc(%ebp),%eax
 844194b:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 8441951:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8441958:	00 
 8441959:	c7 44 24 08 af a0 00 	movl   $0xa0af,0x8(%esp)
 8441960:	00 
 8441961:	c7 44 24 04 e0 b7 c5 	movl   $0x8c5b7e0,0x4(%esp)
 8441968:	08 
 8441969:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844196c:	89 04 24             	mov    %eax,(%esp)
 844196f:	e8 a4 dd 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8441974:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8441978:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844197b:	89 44 24 08          	mov    %eax,0x8(%esp)
 844197f:	c7 44 24 04 2c 67 c5 	movl   $0x8c5672c,0x4(%esp)
 8441986:	08 
 8441987:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844198a:	89 04 24             	mov    %eax,(%esp)
 844198d:	e8 f6 dd 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8441992:	b8 00 00 00 00       	mov    $0x0,%eax
 8441997:	eb 09                	jmp    84419a2 <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO+0x408>
 8441999:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 844199d:	b8 01 00 00 00       	mov    $0x1,%eax
 84419a2:	81 c4 a4 00 00 00    	add    $0xa4,%esp
 84419a8:	5b                   	pop    %ebx
 84419a9:	5d                   	pop    %ebp
 84419aa:	c3                   	ret
 84419ab:	90                   	nop

```

```c
// DB_LoadKillMonsterInfo::LoadMonsterInfo @ 0x844159a

/* DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*) */

undefined4 __thiscall
DB_LoadKillMonsterInfo::LoadMonsterInfo
          (DB_LoadKillMonsterInfo *this,SIG_LOAD_KILL_MONSTER_INFO *param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [19];
  char local_1d;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_1d = 0;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_18 = 5;
  MySQL::set_query(local_1c,
                   "seLect boss_info, named_info, apc_boss_info from charac_kill_monster_info where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 45000));
  local_1d = MySQL::exec(local_1c,true);
  if (local_1d == '\x01') {
    iVar2 = MySQL::get_n_rows(local_1c);
    if (iVar2 == 0) {
      MySQL::set_query(local_1c,"inSert into charac_kill_monster_info (charac_no) values(%u)",
                       *(undefined4 *)(param_1 + 45000));
      local_1d = MySQL::exec(local_1c,true);
      if (local_1d == '\x01') {
        uVar1 = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 45000);
        cMyTrace::cMyTrace(local_70,
                           "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                           ,0xa070,5);
        cMyTrace::operator()
                  (local_70,
                   "DB_LoadKillMonsterInfo::LoadMonsterInfo insert, exec() ERROR charac_no=%u",uVar1
                  );
        uVar1 = 0;
      }
    }
    else {
      local_1d = MySQL::fetch(local_1c);
      if (local_1d == '\x01') {
        local_14 = 0;
        local_10 = MySQL::get_binary_length(local_1c,0);
        iVar2 = local_14;
        if (local_10 == 0) {
          local_14 = local_14 + 1;
        }
        else {
          local_14 = local_14 + 1;
          local_1d = get_compressed_blob_data(local_1c,iVar2,(char *)param_1,0x1d4c,0);
          if (local_1d != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 45000);
            cMyTrace::cMyTrace(local_50,
                               "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                               ,0xa087,5);
            cMyTrace::operator()
                      (local_50,
                       "DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u"
                       ,local_14,uVar1);
            return 0;
          }
        }
        local_10 = MySQL::get_binary_length(local_1c,local_14);
        iVar2 = local_14;
        if (local_10 == 0) {
          local_14 = local_14 + 1;
        }
        else {
          local_14 = local_14 + 1;
          local_1d = get_compressed_blob_data(local_1c,iVar2,(char *)(param_1 + 0x1d4c),30000,0);
          if (local_1d != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 45000);
            cMyTrace::cMyTrace(local_40,
                               "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                               ,0xa09b,5);
            cMyTrace::operator()
                      (local_40,
                       "DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u"
                       ,local_14,uVar1);
            return 0;
          }
        }
        local_10 = MySQL::get_binary_length(local_1c,local_14);
        iVar2 = local_14;
        if (local_10 != 0) {
          local_14 = local_14 + 1;
          local_1d = get_compressed_blob_data(local_1c,iVar2,(char *)(param_1 + 0x927c),0x1d4c,0);
          if (local_1d != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 45000);
            cMyTrace::cMyTrace(local_30,
                               "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                               ,0xa0af,5);
            cMyTrace::operator()
                      (local_30,
                       "DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u"
                       ,local_14,uVar1);
            return 0;
          }
        }
        uVar1 = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 45000);
        cMyTrace::cMyTrace(local_60,
                           "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                           ,0xa07a,5);
        cMyTrace::operator()
                  (local_60,
                   "DB_LoadKillMonsterInfo::LoadMonsterInfo select, fetch() ERROR charac_no=%u",
                   uVar1);
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 45000);
    cMyTrace::cMyTrace(local_80,
                       "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)",
                       0xa063,5);
    cMyTrace::operator()
              (local_80,"DB_LoadKillMonsterInfo::LoadMonsterInfo select, exec() ERROR charac_no=%u",
               uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## SendResult

```asm
// === 084419ac DB_LoadKillMonsterInfo::SendResult  [0x084419ac-0x8441a8d] ===
 84419ac:	55                   	push   %ebp
 84419ad:	89 e5                	mov    %esp,%ebp
 84419af:	56                   	push   %esi
 84419b0:	53                   	push   %ebx
 84419b1:	83 ec 20             	sub    $0x20,%esp
 84419b4:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 84419b9:	c7 44 24 08 c1 a0 00 	movl   $0xa0c1,0x8(%esp)
 84419c0:	00 
 84419c1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84419c8:	08 
 84419c9:	89 04 24             	mov    %eax,(%esp)
 84419cc:	e8 91 e8 e4 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 84419d1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84419d8:	00 
 84419d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84419dd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84419e0:	89 04 24             	mov    %eax,(%esp)
 84419e3:	e8 3e 72 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84419e8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84419eb:	89 04 24             	mov    %eax,(%esp)
 84419ee:	e8 53 72 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84419f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 84419f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84419fa:	89 04 24             	mov    %eax,(%esp)
 84419fd:	e8 54 72 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8441a02:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441a05:	89 04 24             	mov    %eax,(%esp)
 8441a08:	e8 39 72 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8441a0d:	8b 55 10             	mov    0x10(%ebp),%edx
 8441a10:	89 54 24 04          	mov    %edx,0x4(%esp)
 8441a14:	89 04 24             	mov    %eax,(%esp)
 8441a17:	e8 3a 72 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8441a1c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441a1f:	89 04 24             	mov    %eax,(%esp)
 8441a22:	e8 27 72 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8441a27:	c7 44 24 08 cc af 00 	movl   $0xafcc,0x8(%esp)
 8441a2e:	00 
 8441a2f:	8b 55 14             	mov    0x14(%ebp),%edx
 8441a32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8441a36:	89 04 24             	mov    %eax,(%esp)
 8441a39:	e8 14 cc c9 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8441a3e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8441a43:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8441a46:	89 54 24 08          	mov    %edx,0x8(%esp)
 8441a4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8441a51:	00 
 8441a52:	89 04 24             	mov    %eax,(%esp)
 8441a55:	e8 84 f5 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8441a5a:	bb 01 00 00 00       	mov    $0x1,%ebx
 8441a5f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441a62:	89 04 24             	mov    %eax,(%esp)
 8441a65:	e8 68 ae 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8441a6a:	89 d8                	mov    %ebx,%eax
 8441a6c:	83 c4 20             	add    $0x20,%esp
 8441a6f:	5b                   	pop    %ebx
 8441a70:	5e                   	pop    %esi
 8441a71:	5d                   	pop    %ebp
 8441a72:	c3                   	ret
 8441a73:	89 d3                	mov    %edx,%ebx
 8441a75:	89 c6                	mov    %eax,%esi
 8441a77:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8441a7a:	89 04 24             	mov    %eax,(%esp)
 8441a7d:	e8 50 ae 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8441a82:	89 f0                	mov    %esi,%eax
 8441a84:	89 da                	mov    %ebx,%edx
 8441a86:	89 04 24             	mov    %eax,(%esp)
 8441a89:	e8 c2 1c 6a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_LoadKillMonsterInfo::SendResult @ 0x84419ac

/* DB_LoadKillMonsterInfo::SendResult(int, int, SIG_LOAD_KILL_MONSTER_INFO*) */

undefined4 __thiscall
DB_LoadKillMonsterInfo::SendResult
          (DB_LoadKillMonsterInfo *this,int param_1,int param_2,SIG_LOAD_KILL_MONSTER_INFO *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0xa0c1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084419fd to 08441a59 has its CatchHandler @ 08441a73 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0xafcc);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 084414e0 DB_LoadKillMonsterInfo::dispatch  [0x084414e0-0x8441599] ===
 84414e0:	55                   	push   %ebp
 84414e1:	89 e5                	mov    %esp,%ebp
 84414e3:	53                   	push   %ebx
 84414e4:	83 ec 34             	sub    $0x34,%esp
 84414e7:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 84414eb:	8b 45 14             	mov    0x14(%ebp),%eax
 84414ee:	89 04 24             	mov    %eax,(%esp)
 84414f1:	e8 80 28 01 00       	call   8453d76 <_ZN6Stream12GetOutBufferI26SIG_LOAD_KILL_MONSTER_INFOEEPT_v>
 84414f6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84414f9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84414fd:	75 0a                	jne    8441509 <_ZN22DB_LoadKillMonsterInfo8dispatchEiiP6Stream+0x29>
 84414ff:	b8 00 00 00 00       	mov    $0x0,%eax
 8441504:	e9 8b 00 00 00       	jmp    8441594 <_ZN22DB_LoadKillMonsterInfo8dispatchEiiP6Stream+0xb4>
 8441509:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844150c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441510:	8b 45 08             	mov    0x8(%ebp),%eax
 8441513:	89 04 24             	mov    %eax,(%esp)
 8441516:	e8 7f 00 00 00       	call   844159a <_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO>
 844151b:	83 f0 01             	xor    $0x1,%eax
 844151e:	84 c0                	test   %al,%al
 8441520:	74 4a                	je     844156c <_ZN22DB_LoadKillMonsterInfo8dispatchEiiP6Stream+0x8c>
 8441522:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441525:	8b 98 c8 af 00 00    	mov    0xafc8(%eax),%ebx
 844152b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8441532:	00 
 8441533:	c7 44 24 08 4b a0 00 	movl   $0xa04b,0x8(%esp)
 844153a:	00 
 844153b:	c7 44 24 04 40 b8 c5 	movl   $0x8c5b840,0x4(%esp)
 8441542:	08 
 8441543:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8441546:	89 04 24             	mov    %eax,(%esp)
 8441549:	e8 ca e1 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844154e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8441552:	c7 44 24 04 70 65 c5 	movl   $0x8c56570,0x4(%esp)
 8441559:	08 
 844155a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844155d:	89 04 24             	mov    %eax,(%esp)
 8441560:	e8 23 e2 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8441565:	b8 00 00 00 00       	mov    $0x0,%eax
 844156a:	eb 28                	jmp    8441594 <_ZN22DB_LoadKillMonsterInfo8dispatchEiiP6Stream+0xb4>
 844156c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844156f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8441573:	8b 45 10             	mov    0x10(%ebp),%eax
 8441576:	89 44 24 08          	mov    %eax,0x8(%esp)
 844157a:	8b 45 0c             	mov    0xc(%ebp),%eax
 844157d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441581:	8b 45 08             	mov    0x8(%ebp),%eax
 8441584:	89 04 24             	mov    %eax,(%esp)
 8441587:	e8 20 04 00 00       	call   84419ac <_ZN22DB_LoadKillMonsterInfo10SendResultEiiP26SIG_LOAD_KILL_MONSTER_INFO>
 844158c:	88 45 f3             	mov    %al,-0xd(%ebp)
 844158f:	b8 01 00 00 00       	mov    $0x1,%eax
 8441594:	83 c4 34             	add    $0x34,%esp
 8441597:	5b                   	pop    %ebx
 8441598:	5d                   	pop    %ebp
 8441599:	c3                   	ret

```

```c
// DB_LoadKillMonsterInfo::dispatch @ 0x84414e0

/* DB_LoadKillMonsterInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadKillMonsterInfo::dispatch
          (DB_LoadKillMonsterInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_24 [19];
  undefined1 local_11;
  SIG_LOAD_KILL_MONSTER_INFO *local_10;
  
  local_11 = 0;
  local_10 = Stream::GetOutBuffer<SIG_LOAD_KILL_MONSTER_INFO>(param_3);
  if (local_10 == (SIG_LOAD_KILL_MONSTER_INFO *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = LoadMonsterInfo(this,local_10);
    if (cVar1 == '\x01') {
      SendResult(this,param_1,param_2,local_10);
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined4 *)(local_10 + 45000);
      cMyTrace::cMyTrace(local_24,"virtual bool DB_LoadKillMonsterInfo::dispatch(int, int, Stream*)"
                         ,0xa04b,5);
      cMyTrace::operator()
                (local_24,"DB_LoadKillMonsterInfo::LoadMonsterInfo ERROR charac_no=%u",uVar2);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

