# DB_InsertAutoPunishFirstUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842d6ce DB_InsertAutoPunishFirstUser::dispatch  [0x0842d6ce-0x842dd7b] ===
 842d6ce:	55                   	push   %ebp
 842d6cf:	89 e5                	mov    %esp,%ebp
 842d6d1:	57                   	push   %edi
 842d6d2:	56                   	push   %esi
 842d6d3:	53                   	push   %ebx
 842d6d4:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 842d6da:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 842d6e1:	8b 45 14             	mov    0x14(%ebp),%eax
 842d6e4:	89 04 24             	mov    %eax,(%esp)
 842d6e7:	e8 06 51 02 00       	call   84527f2 <_ZN6Stream12GetOutBufferI33SIG_INSERT_AUTO_PUNISH_FIRST_USEREEPT_v>
 842d6ec:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 842d6ef:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842d6f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842d6fb:	00 
 842d6fc:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842d703:	00 
 842d704:	89 04 24             	mov    %eax,(%esp)
 842d707:	e8 32 7b fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842d70c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 842d70f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d712:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 842d716:	0f b7 c0             	movzwl %ax,%eax
 842d719:	89 85 68 fe ff ff    	mov    %eax,-0x198(%ebp)
 842d71f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d722:	8b 40 20             	mov    0x20(%eax),%eax
 842d725:	89 85 6c fe ff ff    	mov    %eax,-0x194(%ebp)
 842d72b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d72e:	8b 78 1c             	mov    0x1c(%eax),%edi
 842d731:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d734:	8b 70 18             	mov    0x18(%eax),%esi
 842d737:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d73a:	8b 58 14             	mov    0x14(%eax),%ebx
 842d73d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d740:	83 c0 04             	add    $0x4,%eax
 842d743:	89 85 70 fe ff ff    	mov    %eax,-0x190(%ebp)
 842d749:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d74c:	8b 00                	mov    (%eax),%eax
 842d74e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842d755:	00 
 842d756:	89 04 24             	mov    %eax,(%esp)
 842d759:	e8 ed b8 cd ff       	call   810904b <_Z14NumberToStringji>
 842d75e:	8b 95 68 fe ff ff    	mov    -0x198(%ebp),%edx
 842d764:	89 54 24 20          	mov    %edx,0x20(%esp)
 842d768:	8b 95 6c fe ff ff    	mov    -0x194(%ebp),%edx
 842d76e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 842d772:	89 7c 24 18          	mov    %edi,0x18(%esp)
 842d776:	89 74 24 14          	mov    %esi,0x14(%esp)
 842d77a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842d77e:	8b bd 70 fe ff ff    	mov    -0x190(%ebp),%edi
 842d784:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 842d788:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d78c:	c7 44 24 04 4c 07 c5 	movl   $0x8c5074c,0x4(%esp)
 842d793:	08 
 842d794:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d797:	89 04 24             	mov    %eax,(%esp)
 842d79a:	e8 21 6a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842d79f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842d7a6:	00 
 842d7a7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d7aa:	89 04 24             	mov    %eax,(%esp)
 842d7ad:	e8 74 6b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842d7b2:	83 f0 01             	xor    $0x1,%eax
 842d7b5:	84 c0                	test   %al,%al
 842d7b7:	0f 84 d6 00 00 00    	je     842d893 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x1c5>
 842d7bd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d7c0:	8b 40 1c             	mov    0x1c(%eax),%eax
 842d7c3:	89 85 74 fe ff ff    	mov    %eax,-0x18c(%ebp)
 842d7c9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d7cc:	8b 78 14             	mov    0x14(%eax),%edi
 842d7cf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d7d2:	8b 00                	mov    (%eax),%eax
 842d7d4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842d7db:	00 
 842d7dc:	89 04 24             	mov    %eax,(%esp)
 842d7df:	e8 67 b8 cd ff       	call   810904b <_Z14NumberToStringji>
 842d7e4:	89 c2                	mov    %eax,%edx
 842d7e6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d7e9:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 842d7ed:	0f b7 f0             	movzwl %ax,%esi
 842d7f0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d7f3:	8b 58 20             	mov    0x20(%eax),%ebx
 842d7f6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d7f9:	8b 48 18             	mov    0x18(%eax),%ecx
 842d7fc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d7ff:	83 c0 04             	add    $0x4,%eax
 842d802:	89 85 64 fe ff ff    	mov    %eax,-0x19c(%ebp)
 842d808:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 842d80e:	89 44 24 20          	mov    %eax,0x20(%esp)
 842d812:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 842d816:	89 54 24 18          	mov    %edx,0x18(%esp)
 842d81a:	89 74 24 14          	mov    %esi,0x14(%esp)
 842d81e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842d822:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 842d826:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
 842d82c:	89 54 24 08          	mov    %edx,0x8(%esp)
 842d830:	c7 44 24 04 dc 07 c5 	movl   $0x8c507dc,0x4(%esp)
 842d837:	08 
 842d838:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d83b:	89 04 24             	mov    %eax,(%esp)
 842d83e:	e8 7d 69 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842d843:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842d84a:	00 
 842d84b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842d84e:	89 04 24             	mov    %eax,(%esp)
 842d851:	e8 d0 6a fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842d856:	83 f0 01             	xor    $0x1,%eax
 842d859:	84 c0                	test   %al,%al
 842d85b:	74 36                	je     842d893 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x1c5>
 842d85d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 842d864:	00 
 842d865:	c7 44 24 08 fb 70 00 	movl   $0x70fb,0x8(%esp)
 842d86c:	00 
 842d86d:	c7 44 24 04 c0 c3 c5 	movl   $0x8c5c3c0,0x4(%esp)
 842d874:	08 
 842d875:	8d 45 c0             	lea    -0x40(%ebp),%eax
 842d878:	89 04 24             	mov    %eax,(%esp)
 842d87b:	e8 98 1e 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842d880:	c7 44 24 04 74 08 c5 	movl   $0x8c50874,0x4(%esp)
 842d887:	08 
 842d888:	8d 45 c0             	lea    -0x40(%ebp),%eax
 842d88b:	89 04 24             	mov    %eax,(%esp)
 842d88e:	e8 f5 1e 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842d893:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842d898:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842d89f:	00 
 842d8a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842d8a7:	00 
 842d8a8:	89 04 24             	mov    %eax,(%esp)
 842d8ab:	e8 8e 79 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842d8b0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842d8b3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d8b6:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 842d8ba:	66 83 f8 02          	cmp    $0x2,%ax
 842d8be:	75 0a                	jne    842d8ca <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x1fc>
 842d8c0:	b8 01 00 00 00       	mov    $0x1,%eax
 842d8c5:	e9 a7 04 00 00       	jmp    842dd71 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x6a3>
 842d8ca:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d8cd:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 842d8d1:	66 83 f8 07          	cmp    $0x7,%ax
 842d8d5:	75 0a                	jne    842d8e1 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x213>
 842d8d7:	b8 01 00 00 00       	mov    $0x1,%eax
 842d8dc:	e9 90 04 00 00       	jmp    842dd71 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x6a3>
 842d8e1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d8e4:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 842d8e8:	66 83 f8 08          	cmp    $0x8,%ax
 842d8ec:	75 0a                	jne    842d8f8 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x22a>
 842d8ee:	b8 01 00 00 00       	mov    $0x1,%eax
 842d8f3:	e9 79 04 00 00       	jmp    842dd71 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x6a3>
 842d8f8:	c7 45 d0 03 00 00 00 	movl   $0x3,-0x30(%ebp)
 842d8ff:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d902:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 842d906:	66 83 f8 0a          	cmp    $0xa,%ax
 842d90a:	75 07                	jne    842d913 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x245>
 842d90c:	c7 45 d0 0c 00 00 00 	movl   $0xc,-0x30(%ebp)
 842d913:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d916:	8b 40 28             	mov    0x28(%eax),%eax
 842d919:	89 85 64 fe ff ff    	mov    %eax,-0x19c(%ebp)
 842d91f:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 842d924:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 842d92a:	f7 e2                	mul    %edx
 842d92c:	89 d0                	mov    %edx,%eax
 842d92e:	c1 e8 03             	shr    $0x3,%eax
 842d931:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842d934:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d937:	8b 48 28             	mov    0x28(%eax),%ecx
 842d93a:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 842d93f:	89 c8                	mov    %ecx,%eax
 842d941:	f7 e2                	mul    %edx
 842d943:	89 d0                	mov    %edx,%eax
 842d945:	c1 e8 03             	shr    $0x3,%eax
 842d948:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842d94b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842d94e:	89 d0                	mov    %edx,%eax
 842d950:	c1 e0 02             	shl    $0x2,%eax
 842d953:	01 d0                	add    %edx,%eax
 842d955:	01 c0                	add    %eax,%eax
 842d957:	89 ca                	mov    %ecx,%edx
 842d959:	29 c2                	sub    %eax,%edx
 842d95b:	89 d0                	mov    %edx,%eax
 842d95d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842d960:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d963:	8b 40 28             	mov    0x28(%eax),%eax
 842d966:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842d969:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842d96d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 842d970:	89 54 24 08          	mov    %edx,0x8(%esp)
 842d974:	89 44 24 04          	mov    %eax,0x4(%esp)
 842d978:	c7 04 24 98 08 c5 08 	movl   $0x8c50898,(%esp)
 842d97f:	e8 dc 01 c5 ff       	call   807db60 <printf@plt>
 842d984:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 842d988:	75 4d                	jne    842d9d7 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x309>
 842d98a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d98d:	8b 00                	mov    (%eax),%eax
 842d98f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842d996:	00 
 842d997:	89 04 24             	mov    %eax,(%esp)
 842d99a:	e8 ac b6 cd ff       	call   810904b <_Z14NumberToStringji>
 842d99f:	89 c2                	mov    %eax,%edx
 842d9a1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842d9a5:	74 07                	je     842d9ae <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x2e0>
 842d9a7:	b8 01 00 00 00       	mov    $0x1,%eax
 842d9ac:	eb 05                	jmp    842d9b3 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x2e5>
 842d9ae:	b8 02 00 00 00       	mov    $0x2,%eax
 842d9b3:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 842d9b6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842d9ba:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842d9be:	89 44 24 08          	mov    %eax,0x8(%esp)
 842d9c2:	c7 44 24 04 dc 08 c5 	movl   $0x8c508dc,0x4(%esp)
 842d9c9:	08 
 842d9ca:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842d9cd:	89 04 24             	mov    %eax,(%esp)
 842d9d0:	e8 eb 67 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842d9d5:	eb 52                	jmp    842da29 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x35b>
 842d9d7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842d9da:	8b 00                	mov    (%eax),%eax
 842d9dc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842d9e3:	00 
 842d9e4:	89 04 24             	mov    %eax,(%esp)
 842d9e7:	e8 5f b6 cd ff       	call   810904b <_Z14NumberToStringji>
 842d9ec:	89 c2                	mov    %eax,%edx
 842d9ee:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842d9f2:	74 07                	je     842d9fb <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x32d>
 842d9f4:	b8 01 00 00 00       	mov    $0x1,%eax
 842d9f9:	eb 05                	jmp    842da00 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x332>
 842d9fb:	b8 02 00 00 00       	mov    $0x2,%eax
 842da00:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 842da03:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 842da07:	89 54 24 10          	mov    %edx,0x10(%esp)
 842da0b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842da0f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842da12:	89 44 24 08          	mov    %eax,0x8(%esp)
 842da16:	c7 44 24 04 6c 09 c5 	movl   $0x8c5096c,0x4(%esp)
 842da1d:	08 
 842da1e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842da21:	89 04 24             	mov    %eax,(%esp)
 842da24:	e8 97 67 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842da29:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842da30:	00 
 842da31:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842da34:	89 04 24             	mov    %eax,(%esp)
 842da37:	e8 ea 68 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842da3c:	83 f0 01             	xor    $0x1,%eax
 842da3f:	84 c0                	test   %al,%al
 842da41:	75 11                	jne    842da54 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x386>
 842da43:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842da46:	89 04 24             	mov    %eax,(%esp)
 842da49:	e8 c2 68 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842da4e:	09 d0                	or     %edx,%eax
 842da50:	85 c0                	test   %eax,%eax
 842da52:	75 07                	jne    842da5b <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x38d>
 842da54:	b8 01 00 00 00       	mov    $0x1,%eax
 842da59:	eb 05                	jmp    842da60 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x392>
 842da5b:	b8 00 00 00 00       	mov    $0x0,%eax
 842da60:	84 c0                	test   %al,%al
 842da62:	0f 84 c5 00 00 00    	je     842db2d <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x45f>
 842da68:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 842da6c:	75 4b                	jne    842dab9 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x3eb>
 842da6e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842da72:	74 07                	je     842da7b <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x3ad>
 842da74:	bb 01 00 00 00       	mov    $0x1,%ebx
 842da79:	eb 05                	jmp    842da80 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x3b2>
 842da7b:	bb 02 00 00 00       	mov    $0x2,%ebx
 842da80:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842da83:	8b 00                	mov    (%eax),%eax
 842da85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842da8c:	00 
 842da8d:	89 04 24             	mov    %eax,(%esp)
 842da90:	e8 b6 b5 cd ff       	call   810904b <_Z14NumberToStringji>
 842da95:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842da99:	8b 55 d0             	mov    -0x30(%ebp),%edx
 842da9c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842daa0:	89 44 24 08          	mov    %eax,0x8(%esp)
 842daa4:	c7 44 24 04 08 0a c5 	movl   $0x8c50a08,0x4(%esp)
 842daab:	08 
 842daac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842daaf:	89 04 24             	mov    %eax,(%esp)
 842dab2:	e8 09 67 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842dab7:	eb 50                	jmp    842db09 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x43b>
 842dab9:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842dabd:	74 07                	je     842dac6 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x3f8>
 842dabf:	bb 01 00 00 00       	mov    $0x1,%ebx
 842dac4:	eb 05                	jmp    842dacb <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x3fd>
 842dac6:	bb 02 00 00 00       	mov    $0x2,%ebx
 842dacb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842dace:	8b 00                	mov    (%eax),%eax
 842dad0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842dad7:	00 
 842dad8:	89 04 24             	mov    %eax,(%esp)
 842dadb:	e8 6b b5 cd ff       	call   810904b <_Z14NumberToStringji>
 842dae0:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 842dae4:	8b 55 e0             	mov    -0x20(%ebp),%edx
 842dae7:	89 54 24 10          	mov    %edx,0x10(%esp)
 842daeb:	8b 55 d0             	mov    -0x30(%ebp),%edx
 842daee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842daf2:	89 44 24 08          	mov    %eax,0x8(%esp)
 842daf6:	c7 44 24 04 b0 0a c5 	movl   $0x8c50ab0,0x4(%esp)
 842dafd:	08 
 842dafe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842db01:	89 04 24             	mov    %eax,(%esp)
 842db04:	e8 b7 66 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842db09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842db10:	00 
 842db11:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842db14:	89 04 24             	mov    %eax,(%esp)
 842db17:	e8 0a 68 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842db1c:	83 f0 01             	xor    $0x1,%eax
 842db1f:	84 c0                	test   %al,%al
 842db21:	74 0a                	je     842db2d <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x45f>
 842db23:	b8 00 00 00 00       	mov    $0x0,%eax
 842db28:	e9 44 02 00 00       	jmp    842dd71 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x6a3>
 842db2d:	8d 95 85 fe ff ff    	lea    -0x17b(%ebp),%edx
 842db33:	bb ff 00 00 00       	mov    $0xff,%ebx
 842db38:	b8 00 00 00 00       	mov    $0x0,%eax
 842db3d:	89 d1                	mov    %edx,%ecx
 842db3f:	83 e1 01             	and    $0x1,%ecx
 842db42:	85 c9                	test   %ecx,%ecx
 842db44:	74 08                	je     842db4e <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x480>
 842db46:	88 02                	mov    %al,(%edx)
 842db48:	83 c2 01             	add    $0x1,%edx
 842db4b:	83 eb 01             	sub    $0x1,%ebx
 842db4e:	89 d1                	mov    %edx,%ecx
 842db50:	83 e1 02             	and    $0x2,%ecx
 842db53:	85 c9                	test   %ecx,%ecx
 842db55:	74 09                	je     842db60 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x492>
 842db57:	66 89 02             	mov    %ax,(%edx)
 842db5a:	83 c2 02             	add    $0x2,%edx
 842db5d:	83 eb 02             	sub    $0x2,%ebx
 842db60:	89 d9                	mov    %ebx,%ecx
 842db62:	c1 e9 02             	shr    $0x2,%ecx
 842db65:	89 d7                	mov    %edx,%edi
 842db67:	f3 ab                	rep stos %eax,%es:(%edi)
 842db69:	89 fa                	mov    %edi,%edx
 842db6b:	89 d9                	mov    %ebx,%ecx
 842db6d:	83 e1 02             	and    $0x2,%ecx
 842db70:	85 c9                	test   %ecx,%ecx
 842db72:	74 06                	je     842db7a <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x4ac>
 842db74:	66 89 02             	mov    %ax,(%edx)
 842db77:	83 c2 02             	add    $0x2,%edx
 842db7a:	89 d9                	mov    %ebx,%ecx
 842db7c:	83 e1 01             	and    $0x1,%ecx
 842db7f:	85 c9                	test   %ecx,%ecx
 842db81:	74 05                	je     842db88 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x4ba>
 842db83:	88 02                	mov    %al,(%edx)
 842db85:	83 c2 01             	add    $0x1,%edx
 842db88:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842db8b:	8b 50 1c             	mov    0x1c(%eax),%edx
 842db8e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842db91:	8b 40 14             	mov    0x14(%eax),%eax
 842db94:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842db98:	89 44 24 08          	mov    %eax,0x8(%esp)
 842db9c:	c7 44 24 04 60 0b c5 	movl   $0x8c50b60,0x4(%esp)
 842dba3:	08 
 842dba4:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 842dbaa:	89 04 24             	mov    %eax,(%esp)
 842dbad:	e8 8e 08 c5 ff       	call   807e440 <sprintf@plt>
 842dbb2:	c7 45 b6 00 00 00 00 	movl   $0x0,-0x4a(%ebp)
 842dbb9:	c7 45 ba 00 00 00 00 	movl   $0x0,-0x46(%ebp)
 842dbc0:	66 c7 45 be 00 00    	movw   $0x0,-0x42(%ebp)
 842dbc6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 842dbcd:	e8 cc e0 c9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 842dbd2:	89 45 b0             	mov    %eax,-0x50(%ebp)
 842dbd5:	8d 45 84             	lea    -0x7c(%ebp),%eax
 842dbd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 842dbdc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 842dbdf:	89 04 24             	mov    %eax,(%esp)
 842dbe2:	e8 79 07 c5 ff       	call   807e360 <localtime_r@plt>
 842dbe7:	8d 45 84             	lea    -0x7c(%ebp),%eax
 842dbea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842dbee:	c7 44 24 08 97 0b c5 	movl   $0x8c50b97,0x8(%esp)
 842dbf5:	08 
 842dbf6:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 842dbfd:	00 
 842dbfe:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 842dc01:	89 04 24             	mov    %eax,(%esp)
 842dc04:	e8 b7 ff c4 ff       	call   807dbc0 <strftime@plt>
 842dc09:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 842dc0d:	75 5c                	jne    842dc6b <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x59d>
 842dc0f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842dc13:	74 07                	je     842dc1c <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x54e>
 842dc15:	bb 01 00 00 00       	mov    $0x1,%ebx
 842dc1a:	eb 05                	jmp    842dc21 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x553>
 842dc1c:	bb 02 00 00 00       	mov    $0x2,%ebx
 842dc21:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842dc24:	8b 00                	mov    (%eax),%eax
 842dc26:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842dc2d:	00 
 842dc2e:	89 04 24             	mov    %eax,(%esp)
 842dc31:	e8 15 b4 cd ff       	call   810904b <_Z14NumberToStringji>
 842dc36:	8d 95 85 fe ff ff    	lea    -0x17b(%ebp),%edx
 842dc3c:	89 54 24 18          	mov    %edx,0x18(%esp)
 842dc40:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 842dc44:	8b 55 d0             	mov    -0x30(%ebp),%edx
 842dc47:	89 54 24 10          	mov    %edx,0x10(%esp)
 842dc4b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842dc4f:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 842dc52:	89 44 24 08          	mov    %eax,0x8(%esp)
 842dc56:	c7 44 24 04 9c 0b c5 	movl   $0x8c50b9c,0x4(%esp)
 842dc5d:	08 
 842dc5e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842dc61:	89 04 24             	mov    %eax,(%esp)
 842dc64:	e8 57 65 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842dc69:	eb 61                	jmp    842dccc <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x5fe>
 842dc6b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842dc6f:	74 07                	je     842dc78 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x5aa>
 842dc71:	bb 01 00 00 00       	mov    $0x1,%ebx
 842dc76:	eb 05                	jmp    842dc7d <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x5af>
 842dc78:	bb 02 00 00 00       	mov    $0x2,%ebx
 842dc7d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842dc80:	8b 00                	mov    (%eax),%eax
 842dc82:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842dc89:	00 
 842dc8a:	89 04 24             	mov    %eax,(%esp)
 842dc8d:	e8 b9 b3 cd ff       	call   810904b <_Z14NumberToStringji>
 842dc92:	8d 95 85 fe ff ff    	lea    -0x17b(%ebp),%edx
 842dc98:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 842dc9c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 842dca0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 842dca3:	89 54 24 14          	mov    %edx,0x14(%esp)
 842dca7:	8b 55 d0             	mov    -0x30(%ebp),%edx
 842dcaa:	89 54 24 10          	mov    %edx,0x10(%esp)
 842dcae:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842dcb2:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 842dcb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 842dcb9:	c7 44 24 04 70 0c c5 	movl   $0x8c50c70,0x4(%esp)
 842dcc0:	08 
 842dcc1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842dcc4:	89 04 24             	mov    %eax,(%esp)
 842dcc7:	e8 f4 64 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842dccc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842dcd3:	00 
 842dcd4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842dcd7:	89 04 24             	mov    %eax,(%esp)
 842dcda:	e8 47 66 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842dcdf:	83 f0 01             	xor    $0x1,%eax
 842dce2:	84 c0                	test   %al,%al
 842dce4:	74 0a                	je     842dcf0 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x622>
 842dce6:	b8 00 00 00 00       	mov    $0x0,%eax
 842dceb:	e9 81 00 00 00       	jmp    842dd71 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x6a3>
 842dcf0:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 842dcf4:	74 0c                	je     842dd02 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x634>
 842dcf6:	83 7d d0 04          	cmpl   $0x4,-0x30(%ebp)
 842dcfa:	75 70                	jne    842dd6c <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x69e>
 842dcfc:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842dd00:	75 6a                	jne    842dd6c <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x69e>
 842dd02:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 842dd06:	74 07                	je     842dd0f <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x641>
 842dd08:	bb 01 00 00 00       	mov    $0x1,%ebx
 842dd0d:	eb 05                	jmp    842dd14 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x646>
 842dd0f:	bb 02 00 00 00       	mov    $0x2,%ebx
 842dd14:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842dd17:	8b 00                	mov    (%eax),%eax
 842dd19:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842dd20:	00 
 842dd21:	89 04 24             	mov    %eax,(%esp)
 842dd24:	e8 22 b3 cd ff       	call   810904b <_Z14NumberToStringji>
 842dd29:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842dd2d:	8b 55 d0             	mov    -0x30(%ebp),%edx
 842dd30:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842dd34:	89 44 24 08          	mov    %eax,0x8(%esp)
 842dd38:	c7 44 24 04 4c 0d c5 	movl   $0x8c50d4c,0x4(%esp)
 842dd3f:	08 
 842dd40:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842dd43:	89 04 24             	mov    %eax,(%esp)
 842dd46:	e8 75 64 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842dd4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842dd52:	00 
 842dd53:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842dd56:	89 04 24             	mov    %eax,(%esp)
 842dd59:	e8 c8 65 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842dd5e:	83 f0 01             	xor    $0x1,%eax
 842dd61:	84 c0                	test   %al,%al
 842dd63:	74 07                	je     842dd6c <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x69e>
 842dd65:	b8 00 00 00 00       	mov    $0x0,%eax
 842dd6a:	eb 05                	jmp    842dd71 <_ZN28DB_InsertAutoPunishFirstUser8dispatchEiiP6Stream+0x6a3>
 842dd6c:	b8 01 00 00 00       	mov    $0x1,%eax
 842dd71:	81 c4 cc 01 00 00    	add    $0x1cc,%esp
 842dd77:	5b                   	pop    %ebx
 842dd78:	5e                   	pop    %esi
 842dd79:	5f                   	pop    %edi
 842dd7a:	5d                   	pop    %ebp
 842dd7b:	c3                   	ret

```

```c
// DB_InsertAutoPunishFirstUser::dispatch @ 0x842d6ce

/* DB_InsertAutoPunishFirstUser::dispatch(int, int, Stream*) */

undefined4 DB_InsertAutoPunishFirstUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  SIG_INSERT_AUTO_PUNISH_FIRST_USER *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  Stream *in_stack_00000010;
  char *pcVar13;
  char local_17f;
  char local_17e [254];
  tm local_80;
  time_t local_54;
  char local_4e [10];
  cMyTrace local_44 [16];
  int local_34;
  SIG_INSERT_AUTO_PUNISH_FIRST_USER *local_30;
  MySQL *local_2c;
  MySQL *local_28;
  uint local_24;
  uint local_20;
  
  bVar11 = 0;
  local_34 = 0;
  local_30 = Stream::GetOutBuffer<SIG_INSERT_AUTO_PUNISH_FIRST_USER>(in_stack_00000010);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar1 = *(ushort *)(local_30 + 0x24);
  pcVar13 = *(char **)(local_30 + 0x20);
  uVar9 = *(uint *)(local_30 + 0x1c);
  uVar7 = *(uint *)(local_30 + 0x18);
  uVar2 = *(uint *)(local_30 + 0x14);
  pSVar4 = local_30 + 4;
  uVar5 = NumberToString(*(uint *)local_30,0);
  MySQL::set_query(local_2c,
                   "inSert into auto_punish_first_user(m_id,occ_time,ip,hack_type,cnt,hack_sub_type,hack_sub_cnt,punish_flag) values(%s,now(),\'%s\',%d,%d,%d,%d,%d)"
                   ,uVar5,pSVar4,uVar2,uVar7,uVar9,pcVar13,(uint)uVar1);
  cVar3 = MySQL::exec(local_2c,true);
  if (cVar3 != '\x01') {
    uVar9 = *(uint *)(local_30 + 0x1c);
    pcVar13 = *(char **)(local_30 + 0x14);
    uVar5 = NumberToString(*(uint *)local_30,0);
    MySQL::set_query(local_2c,
                     "upDate auto_punish_first_user set occ_time=now(),ip=\'%s\',cnt=%d, hack_sub_cnt=%d, punish_flag=%d where m_id=%s and hack_type=%d and hack_sub_type=%d"
                     ,local_30 + 4,*(uint *)(local_30 + 0x18),*(uint *)(local_30 + 0x20),
                     (uint)*(ushort *)(local_30 + 0x24),uVar5,pcVar13,uVar9);
    cVar3 = MySQL::exec(local_2c,true);
    if (cVar3 != '\x01') {
      cMyTrace::cMyTrace(local_44,
                         "virtual bool DB_InsertAutoPunishFirstUser::dispatch(int, int, Stream*)",
                         0x70fb,0);
      cMyTrace::operator()(local_44,"upDate auto_punish_first_user Fail");
    }
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (*(short *)(local_30 + 0x24) == 2) {
    return 1;
  }
  if (*(short *)(local_30 + 0x24) == 7) {
    return 1;
  }
  if (*(short *)(local_30 + 0x24) != 8) {
    local_34 = 3;
    if (*(short *)(local_30 + 0x24) == 10) {
      local_34 = 0xc;
    }
    local_24 = *(uint *)(local_30 + 0x28) / 10;
    local_20 = *(uint *)(local_30 + 0x28) % 10;
    printf("[ON!!] request->etcValue_ : %d , dwPunishDay(%d), dwApplyFlag(%d)\n",
           *(uint *)(local_30 + 0x28),local_24,local_20);
    if (local_24 == 0) {
      uVar5 = NumberToString(*(uint *)local_30,0);
      if (local_20 == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      MySQL::set_query(local_28,
                       "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', apply_flag=%d where m_id=%s and punish_type=%d"
                       ,uVar6,uVar5,local_34);
    }
    else {
      uVar5 = NumberToString(*(uint *)local_30,0);
      if (local_20 == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 1;
      }
      MySQL::set_query(local_28,
                       "upDate member_punish_info set occ_time=now(), start_time=now(), end_time= adddate(now(),interval %d day), apply_flag=%d where m_id=%s and punish_type=%d"
                       ,local_24,uVar6,uVar5,local_34);
    }
    cVar3 = MySQL::exec(local_28,true);
    if ((cVar3 == '\x01') && (lVar12 = MySQL::getAffectedRowCount(local_28), lVar12 != 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      if (local_24 == 0) {
        if (local_20 == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        uVar6 = NumberToString(*(uint *)local_30,0);
        MySQL::set_query(local_28,
                         "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), \'9999-12-31 23:59:59\', 0, %d)"
                         ,uVar6,local_34,uVar5);
      }
      else {
        if (local_20 == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        uVar6 = NumberToString(*(uint *)local_30,0);
        MySQL::set_query(local_28,
                         "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), adddate(now(),interval %d day), 0, %d)"
                         ,uVar6,local_34,local_24,uVar5);
      }
      cVar3 = MySQL::exec(local_28,true);
      if (cVar3 != '\x01') {
        return 0;
      }
    }
    pcVar8 = &local_17f;
    uVar9 = 0xff;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_17f = '\0';
      pcVar8 = local_17e;
      uVar9 = 0xfe;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (!bVar10) {
      *pcVar8 = '\0';
    }
    sprintf(&local_17f,"{Auto 1st Information-Mail}|*|ARS 1st Punish / %d / %d",
            *(uint *)(local_30 + 0x14),*(uint *)(local_30 + 0x1c));
    local_4e[0] = '\0';
    local_4e[1] = '\0';
    local_4e[2] = '\0';
    local_4e[3] = '\0';
    local_4e[4] = '\0';
    local_4e[5] = '\0';
    local_4e[6] = '\0';
    local_4e[7] = '\0';
    local_4e[8] = '\0';
    local_4e[9] = '\0';
    local_54 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_54,&local_80);
    strftime(local_4e,10,"%Y",&local_80);
    if (local_24 == 0) {
      if (local_20 == 0) {
        uVar9 = 2;
      }
      else {
        uVar9 = 1;
      }
      uVar5 = NumberToString(*(uint *)local_30,0);
      pcVar8 = &local_17f;
      MySQL::set_query(local_28,
                       "inSert into member_punish_info_history_%s(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), \'9999-12-31 23:59:59\', \'ARS\', %d, \'%s\')"
                       ,local_4e,uVar5,local_34,uVar9,pcVar8);
    }
    else {
      if (local_20 == 0) {
        pcVar8 = (char *)0x2;
      }
      else {
        pcVar8 = (char *)0x1;
      }
      uVar5 = NumberToString(*(uint *)local_30,0);
      pcVar13 = &local_17f;
      uVar9 = local_24;
      MySQL::set_query(local_28,
                       "inSert into member_punish_info_history_%s(m_id, punish_type, occ_time, punish_value, start_time, end_time, admin_id, apply_flag, reason) values(%s, %d, now(), 6, now(), adddate(now(),interval %d day), \'ARS\', %d, \'%s\')"
                       ,local_4e,uVar5,local_34,local_24,pcVar8,pcVar13);
    }
    cVar3 = MySQL::exec(local_28,true);
    if (cVar3 == '\x01') {
      if ((local_34 == 3) || ((local_34 == 4 && (local_20 == 0)))) {
        if (local_20 == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        uVar6 = NumberToString(*(uint *)local_30,0);
        MySQL::set_query(local_28,
                         "inSert into member_punish_info_ars_mail (m_id, punish_type, apply_flag, occ_time) values(%s, %d, %d, now())"
                         ,uVar6,local_34,uVar5,uVar9,pcVar8,pcVar13);
        cVar3 = MySQL::exec(local_28,true);
        if (cVar3 != '\x01') {
          return 0;
        }
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    return uVar5;
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 0842dd7c DB_InsertAutoPunishFirstUser::makeRequest  [0x0842dd7c-0x842deb3] ===
 842dd7c:	55                   	push   %ebp
 842dd7d:	89 e5                	mov    %esp,%ebp
 842dd7f:	56                   	push   %esi
 842dd80:	53                   	push   %ebx
 842dd81:	83 ec 30             	sub    $0x30,%esp
 842dd84:	8b 45 20             	mov    0x20(%ebp),%eax
 842dd87:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 842dd8b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842dd90:	c7 44 24 08 3e 72 00 	movl   $0x723e,0x8(%esp)
 842dd97:	00 
 842dd98:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842dd9f:	08 
 842dda0:	89 04 24             	mov    %eax,(%esp)
 842dda3:	e8 de 1c e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842dda8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842ddaf:	00 
 842ddb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ddb4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ddb7:	89 04 24             	mov    %eax,(%esp)
 842ddba:	e8 67 ae c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842ddbf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ddc2:	89 04 24             	mov    %eax,(%esp)
 842ddc5:	e8 7c ae c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842ddca:	c7 44 24 04 0a 01 00 	movl   $0x10a,0x4(%esp)
 842ddd1:	00 
 842ddd2:	89 04 24             	mov    %eax,(%esp)
 842ddd5:	e8 7c ae c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ddda:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842dddd:	89 04 24             	mov    %eax,(%esp)
 842dde0:	e8 61 ae c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842dde5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 842ddec:	ff 
 842dded:	89 04 24             	mov    %eax,(%esp)
 842ddf0:	e8 61 ae c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842ddf5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ddf8:	89 04 24             	mov    %eax,(%esp)
 842ddfb:	e8 4e ae c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842de00:	89 04 24             	mov    %eax,(%esp)
 842de03:	e8 3e 4a 02 00       	call   8452846 <_ZN12CStreamGuard11GetInBufferI33SIG_INSERT_AUTO_PUNISH_FIRST_USEREEPT_v>
 842de08:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842de0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de0e:	8b 55 08             	mov    0x8(%ebp),%edx
 842de11:	89 10                	mov    %edx,(%eax)
 842de13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de16:	8d 50 04             	lea    0x4(%eax),%edx
 842de19:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 842de20:	00 
 842de21:	8b 45 0c             	mov    0xc(%ebp),%eax
 842de24:	89 44 24 04          	mov    %eax,0x4(%esp)
 842de28:	89 14 24             	mov    %edx,(%esp)
 842de2b:	e8 a0 fa c4 ff       	call   807d8d0 <strncpy@plt>
 842de30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de33:	8b 55 10             	mov    0x10(%ebp),%edx
 842de36:	89 50 14             	mov    %edx,0x14(%eax)
 842de39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de3c:	8b 55 14             	mov    0x14(%ebp),%edx
 842de3f:	89 50 18             	mov    %edx,0x18(%eax)
 842de42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de45:	8b 55 18             	mov    0x18(%ebp),%edx
 842de48:	89 50 1c             	mov    %edx,0x1c(%eax)
 842de4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de4e:	8b 55 1c             	mov    0x1c(%ebp),%edx
 842de51:	89 50 20             	mov    %edx,0x20(%eax)
 842de54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de57:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 842de5b:	66 89 50 24          	mov    %dx,0x24(%eax)
 842de5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842de62:	8b 55 24             	mov    0x24(%ebp),%edx
 842de65:	89 50 28             	mov    %edx,0x28(%eax)
 842de68:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842de6d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842de70:	89 54 24 08          	mov    %edx,0x8(%esp)
 842de74:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842de7b:	00 
 842de7c:	89 04 24             	mov    %eax,(%esp)
 842de7f:	e8 5a 31 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842de84:	eb 1b                	jmp    842dea1 <_ZN28DB_InsertAutoPunishFirstUser11makeRequestEjPKcjjjjtj+0x125>
 842de86:	89 d3                	mov    %edx,%ebx
 842de88:	89 c6                	mov    %eax,%esi
 842de8a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842de8d:	89 04 24             	mov    %eax,(%esp)
 842de90:	e8 3d ea 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842de95:	89 f0                	mov    %esi,%eax
 842de97:	89 da                	mov    %ebx,%edx
 842de99:	89 04 24             	mov    %eax,(%esp)
 842de9c:	e8 af 58 6b 00       	call   8ae3750 <_Unwind_Resume>
 842dea1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842dea4:	89 04 24             	mov    %eax,(%esp)
 842dea7:	e8 26 ea 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842deac:	83 c4 30             	add    $0x30,%esp
 842deaf:	5b                   	pop    %ebx
 842deb0:	5e                   	pop    %esi
 842deb1:	5d                   	pop    %ebp
 842deb2:	c3                   	ret
 842deb3:	90                   	nop

```

```c
// DB_InsertAutoPunishFirstUser::makeRequest @ 0x842dd7c

/* DB_InsertAutoPunishFirstUser::makeRequest(unsigned int, char const*, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned short, unsigned int) */

void DB_InsertAutoPunishFirstUser::makeRequest
               (uint param_1,char *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               ushort param_7,uint param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_INSERT_AUTO_PUNISH_FIRST_USER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x723e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842ddd5 to 0842de83 has its CatchHandler @ 0842de86 */
  CStreamGuard::operator<<(pCVar2,0x10a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_AUTO_PUNISH_FIRST_USER>(pCVar2);
  *(uint *)local_10 = param_1;
  strncpy((char *)(local_10 + 4),param_2,0x10);
  *(uint *)(local_10 + 0x14) = param_3;
  *(uint *)(local_10 + 0x18) = param_4;
  *(uint *)(local_10 + 0x1c) = param_5;
  *(uint *)(local_10 + 0x20) = param_6;
  *(ushort *)(local_10 + 0x24) = param_7;
  *(uint *)(local_10 + 0x28) = param_8;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

