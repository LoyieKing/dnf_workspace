# DB_LoadGameOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842f7f4 DB_LoadGameOption::dispatch  [0x0842f7f4-0x842fd41] ===
 842f7f4:	55                   	push   %ebp
 842f7f5:	89 e5                	mov    %esp,%ebp
 842f7f7:	57                   	push   %edi
 842f7f8:	56                   	push   %esi
 842f7f9:	53                   	push   %ebx
 842f7fa:	81 ec 6c 03 00 00    	sub    $0x36c,%esp
 842f800:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842f805:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842f80c:	00 
 842f80d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842f814:	00 
 842f815:	89 04 24             	mov    %eax,(%esp)
 842f818:	e8 21 5a fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842f81d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 842f820:	8b 45 14             	mov    0x14(%ebp),%eax
 842f823:	89 04 24             	mov    %eax,(%esp)
 842f826:	e8 2d 33 02 00       	call   8452b58 <_ZN6Stream12GetOutBufferI24SIG_REQ_LOAD_GAME_OPTIONEEPT_v>
 842f82b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 842f82e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842f831:	8b 00                	mov    (%eax),%eax
 842f833:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f83a:	00 
 842f83b:	89 04 24             	mov    %eax,(%esp)
 842f83e:	e8 08 98 cd ff       	call   810904b <_Z14NumberToStringji>
 842f843:	89 c3                	mov    %eax,%ebx
 842f845:	e8 db c5 fc ff       	call   83fbe25 <_Z22get_member_game_optionv>
 842f84a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842f84e:	89 44 24 08          	mov    %eax,0x8(%esp)
 842f852:	c7 44 24 04 14 16 c5 	movl   $0x8c51614,0x4(%esp)
 842f859:	08 
 842f85a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842f85d:	89 04 24             	mov    %eax,(%esp)
 842f860:	e8 5b 49 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842f865:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842f86c:	00 
 842f86d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842f870:	89 04 24             	mov    %eax,(%esp)
 842f873:	e8 ae 4a fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842f878:	83 f0 01             	xor    $0x1,%eax
 842f87b:	84 c0                	test   %al,%al
 842f87d:	74 0a                	je     842f889 <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x95>
 842f87f:	bb 00 00 00 00       	mov    $0x0,%ebx
 842f884:	e9 ac 04 00 00       	jmp    842fd35 <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x541>
 842f889:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842f88c:	89 04 24             	mov    %eax,(%esp)
 842f88f:	e8 d8 2a cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842f894:	85 c0                	test   %eax,%eax
 842f896:	0f 94 c0             	sete   %al
 842f899:	84 c0                	test   %al,%al
 842f89b:	0f 84 04 01 00 00    	je     842f9a5 <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x1b1>
 842f8a1:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842f8a6:	c7 44 24 08 c2 74 00 	movl   $0x74c2,0x8(%esp)
 842f8ad:	00 
 842f8ae:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842f8b5:	08 
 842f8b6:	89 04 24             	mov    %eax,(%esp)
 842f8b9:	e8 c8 01 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842f8be:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842f8c5:	00 
 842f8c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 842f8ca:	8d 45 8c             	lea    -0x74(%ebp),%eax
 842f8cd:	89 04 24             	mov    %eax,(%esp)
 842f8d0:	e8 51 93 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842f8d5:	8d 45 8c             	lea    -0x74(%ebp),%eax
 842f8d8:	89 04 24             	mov    %eax,(%esp)
 842f8db:	e8 66 93 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f8e0:	c7 44 24 04 2f 01 00 	movl   $0x12f,0x4(%esp)
 842f8e7:	00 
 842f8e8:	89 04 24             	mov    %eax,(%esp)
 842f8eb:	e8 66 93 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f8f0:	8d 45 8c             	lea    -0x74(%ebp),%eax
 842f8f3:	89 04 24             	mov    %eax,(%esp)
 842f8f6:	e8 4b 93 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842f8fb:	8b 55 10             	mov    0x10(%ebp),%edx
 842f8fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 842f902:	89 04 24             	mov    %eax,(%esp)
 842f905:	e8 4c 93 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842f90a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 842f90d:	89 04 24             	mov    %eax,(%esp)
 842f910:	e8 39 93 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842f915:	89 04 24             	mov    %eax,(%esp)
 842f918:	e8 8f 32 02 00       	call   8452bac <_ZN12CStreamGuard11GetInBufferI20SIG_LOAD_GAME_OPTIONEEPT_v>
 842f91d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 842f920:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f923:	89 04 24             	mov    %eax,(%esp)
 842f926:	e8 09 b2 df ff       	call   822ab34 <_ZN10CETCOption5clearEv>
 842f92b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f92e:	83 c0 48             	add    $0x48,%eax
 842f931:	89 04 24             	mov    %eax,(%esp)
 842f934:	e8 73 b2 df ff       	call   822abac <_ZN20CQuickChattingOption5clearEv>
 842f939:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f93c:	05 74 01 00 00       	add    $0x174,%eax
 842f941:	89 04 24             	mov    %eax,(%esp)
 842f944:	e8 63 b2 df ff       	call   822abac <_ZN20CQuickChattingOption5clearEv>
 842f949:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842f94c:	05 a0 02 00 00       	add    $0x2a0,%eax
 842f951:	89 04 24             	mov    %eax,(%esp)
 842f954:	e8 b9 65 cb ff       	call   80e5f12 <_ZN23CChattingEmoticonConfig5clearEv>
 842f959:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842f95e:	8d 55 8c             	lea    -0x74(%ebp),%edx
 842f961:	89 54 24 08          	mov    %edx,0x8(%esp)
 842f965:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842f96c:	00 
 842f96d:	89 04 24             	mov    %eax,(%esp)
 842f970:	e8 69 16 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842f975:	bb 01 00 00 00       	mov    $0x1,%ebx
 842f97a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 842f97d:	89 04 24             	mov    %eax,(%esp)
 842f980:	e8 4d cf 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f985:	e9 ab 03 00 00       	jmp    842fd35 <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x541>
 842f98a:	89 d3                	mov    %edx,%ebx
 842f98c:	89 c6                	mov    %eax,%esi
 842f98e:	8d 45 8c             	lea    -0x74(%ebp),%eax
 842f991:	89 04 24             	mov    %eax,(%esp)
 842f994:	e8 39 cf 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842f999:	89 f0                	mov    %esi,%eax
 842f99b:	89 da                	mov    %ebx,%edx
 842f99d:	89 04 24             	mov    %eax,(%esp)
 842f9a0:	e8 ab 3d 6b 00       	call   8ae3750 <_Unwind_Resume>
 842f9a5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842f9a8:	89 04 24             	mov    %eax,(%esp)
 842f9ab:	e8 0c 4b fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842f9b0:	88 45 d7             	mov    %al,-0x29(%ebp)
 842f9b3:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 842f9b7:	83 f0 01             	xor    $0x1,%eax
 842f9ba:	84 c0                	test   %al,%al
 842f9bc:	74 5b                	je     842fa19 <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x225>
 842f9be:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842f9c1:	8b 00                	mov    (%eax),%eax
 842f9c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842f9ca:	00 
 842f9cb:	89 04 24             	mov    %eax,(%esp)
 842f9ce:	e8 78 96 cd ff       	call   810904b <_Z14NumberToStringji>
 842f9d3:	89 c3                	mov    %eax,%ebx
 842f9d5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842f9dc:	00 
 842f9dd:	c7 44 24 08 dd 74 00 	movl   $0x74dd,0x8(%esp)
 842f9e4:	00 
 842f9e5:	c7 44 24 04 60 c2 c5 	movl   $0x8c5c260,0x4(%esp)
 842f9ec:	08 
 842f9ed:	8d 45 9c             	lea    -0x64(%ebp),%eax
 842f9f0:	89 04 24             	mov    %eax,(%esp)
 842f9f3:	e8 20 fd 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842f9f8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 842f9fc:	c7 44 24 04 58 16 c5 	movl   $0x8c51658,0x4(%esp)
 842fa03:	08 
 842fa04:	8d 45 9c             	lea    -0x64(%ebp),%eax
 842fa07:	89 04 24             	mov    %eax,(%esp)
 842fa0a:	e8 79 fd 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842fa0f:	bb 00 00 00 00       	mov    $0x0,%ebx
 842fa14:	e9 1c 03 00 00       	jmp    842fd35 <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x541>
 842fa19:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842fa1e:	c7 44 24 08 e1 74 00 	movl   $0x74e1,0x8(%esp)
 842fa25:	00 
 842fa26:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842fa2d:	08 
 842fa2e:	89 04 24             	mov    %eax,(%esp)
 842fa31:	e8 50 00 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842fa36:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842fa3d:	00 
 842fa3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 842fa42:	8d 45 94             	lea    -0x6c(%ebp),%eax
 842fa45:	89 04 24             	mov    %eax,(%esp)
 842fa48:	e8 d9 91 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842fa4d:	8d 45 94             	lea    -0x6c(%ebp),%eax
 842fa50:	89 04 24             	mov    %eax,(%esp)
 842fa53:	e8 ee 91 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842fa58:	c7 44 24 04 2f 01 00 	movl   $0x12f,0x4(%esp)
 842fa5f:	00 
 842fa60:	89 04 24             	mov    %eax,(%esp)
 842fa63:	e8 ee 91 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842fa68:	8d 45 94             	lea    -0x6c(%ebp),%eax
 842fa6b:	89 04 24             	mov    %eax,(%esp)
 842fa6e:	e8 d3 91 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842fa73:	8b 55 10             	mov    0x10(%ebp),%edx
 842fa76:	89 54 24 04          	mov    %edx,0x4(%esp)
 842fa7a:	89 04 24             	mov    %eax,(%esp)
 842fa7d:	e8 d4 91 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842fa82:	8d 45 94             	lea    -0x6c(%ebp),%eax
 842fa85:	89 04 24             	mov    %eax,(%esp)
 842fa88:	e8 c1 91 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842fa8d:	89 04 24             	mov    %eax,(%esp)
 842fa90:	e8 17 31 02 00       	call   8452bac <_ZN12CStreamGuard11GetInBufferI20SIG_LOAD_GAME_OPTIONEEPT_v>
 842fa95:	89 45 d8             	mov    %eax,-0x28(%ebp)
 842fa98:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842fa9b:	89 04 24             	mov    %eax,(%esp)
 842fa9e:	e8 91 b0 df ff       	call   822ab34 <_ZN10CETCOption5clearEv>
 842faa3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842faa6:	83 c0 48             	add    $0x48,%eax
 842faa9:	89 04 24             	mov    %eax,(%esp)
 842faac:	e8 fb b0 df ff       	call   822abac <_ZN20CQuickChattingOption5clearEv>
 842fab1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842fab4:	05 74 01 00 00       	add    $0x174,%eax
 842fab9:	89 04 24             	mov    %eax,(%esp)
 842fabc:	e8 eb b0 df ff       	call   822abac <_ZN20CQuickChattingOption5clearEv>
 842fac1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842fac4:	05 a0 02 00 00       	add    $0x2a0,%eax
 842fac9:	89 04 24             	mov    %eax,(%esp)
 842facc:	e8 41 64 cb ff       	call   80e5f12 <_ZN23CChattingEmoticonConfig5clearEv>
 842fad1:	8d 95 a8 fc ff ff    	lea    -0x358(%ebp),%edx
 842fad7:	b8 00 00 00 00       	mov    $0x0,%eax
 842fadc:	b9 18 00 00 00       	mov    $0x18,%ecx
 842fae1:	89 d7                	mov    %edx,%edi
 842fae3:	f3 ab                	rep stos %eax,%es:(%edi)
 842fae5:	89 fa                	mov    %edi,%edx
 842fae7:	66 89 02             	mov    %ax,(%edx)
 842faea:	83 c2 02             	add    $0x2,%edx
 842faed:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 842faf4:	00 
 842faf5:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 842fafb:	89 44 24 08          	mov    %eax,0x8(%esp)
 842faff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842fb06:	00 
 842fb07:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842fb0a:	89 04 24             	mov    %eax,(%esp)
 842fb0d:	e8 08 58 cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 842fb12:	88 45 d7             	mov    %al,-0x29(%ebp)
 842fb15:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 842fb19:	83 f0 01             	xor    $0x1,%eax
 842fb1c:	84 c0                	test   %al,%al
 842fb1e:	74 5b                	je     842fb7b <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x387>
 842fb20:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842fb23:	8b 00                	mov    (%eax),%eax
 842fb25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842fb2c:	00 
 842fb2d:	89 04 24             	mov    %eax,(%esp)
 842fb30:	e8 16 95 cd ff       	call   810904b <_Z14NumberToStringji>
 842fb35:	89 c3                	mov    %eax,%ebx
 842fb37:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842fb3e:	00 
 842fb3f:	c7 44 24 08 f9 74 00 	movl   $0x74f9,0x8(%esp)
 842fb46:	00 
 842fb47:	c7 44 24 04 60 c2 c5 	movl   $0x8c5c260,0x4(%esp)
 842fb4e:	08 
 842fb4f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842fb52:	89 04 24             	mov    %eax,(%esp)
 842fb55:	e8 be fb 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842fb5a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 842fb5e:	c7 44 24 04 8c 16 c5 	movl   $0x8c5168c,0x4(%esp)
 842fb65:	08 
 842fb66:	8d 45 ac             	lea    -0x54(%ebp),%eax
 842fb69:	89 04 24             	mov    %eax,(%esp)
 842fb6c:	e8 17 fc 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842fb71:	bb 00 00 00 00       	mov    $0x0,%ebx
 842fb76:	e9 af 01 00 00       	jmp    842fd2a <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x536>
 842fb7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842fb82:	00 
 842fb83:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842fb86:	89 04 24             	mov    %eax,(%esp)
 842fb89:	e8 50 58 cf ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 842fb8e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842fb91:	c7 45 88 48 00 00 00 	movl   $0x48,-0x78(%ebp)
 842fb98:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842fb9b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 842fb9e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842fba2:	8d 95 a8 fc ff ff    	lea    -0x358(%ebp),%edx
 842fba8:	89 54 24 08          	mov    %edx,0x8(%esp)
 842fbac:	8d 55 88             	lea    -0x78(%ebp),%edx
 842fbaf:	89 54 24 04          	mov    %edx,0x4(%esp)
 842fbb3:	89 04 24             	mov    %eax,(%esp)
 842fbb6:	e8 47 25 28 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 842fbbb:	83 f0 01             	xor    $0x1,%eax
 842fbbe:	84 c0                	test   %al,%al
 842fbc0:	74 0a                	je     842fbcc <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x3d8>
 842fbc2:	bb 00 00 00 00       	mov    $0x0,%ebx
 842fbc7:	e9 5e 01 00 00       	jmp    842fd2a <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x536>
 842fbcc:	8d 9d a8 fc ff ff    	lea    -0x358(%ebp),%ebx
 842fbd2:	b8 00 00 00 00       	mov    $0x0,%eax
 842fbd7:	ba b7 00 00 00       	mov    $0xb7,%edx
 842fbdc:	89 df                	mov    %ebx,%edi
 842fbde:	89 d1                	mov    %edx,%ecx
 842fbe0:	f3 ab                	rep stos %eax,%es:(%edi)
 842fbe2:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 842fbe9:	00 
 842fbea:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 842fbf0:	89 44 24 08          	mov    %eax,0x8(%esp)
 842fbf4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842fbfb:	00 
 842fbfc:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842fbff:	89 04 24             	mov    %eax,(%esp)
 842fc02:	e8 13 57 cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 842fc07:	88 45 d7             	mov    %al,-0x29(%ebp)
 842fc0a:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 842fc0e:	83 f0 01             	xor    $0x1,%eax
 842fc11:	84 c0                	test   %al,%al
 842fc13:	74 49                	je     842fc5e <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x46a>
 842fc15:	8b 45 d0             	mov    -0x30(%ebp),%eax
 842fc18:	8b 18                	mov    (%eax),%ebx
 842fc1a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 842fc21:	00 
 842fc22:	c7 44 24 08 15 75 00 	movl   $0x7515,0x8(%esp)
 842fc29:	00 
 842fc2a:	c7 44 24 04 60 c2 c5 	movl   $0x8c5c260,0x4(%esp)
 842fc31:	08 
 842fc32:	8d 45 bc             	lea    -0x44(%ebp),%eax
 842fc35:	89 04 24             	mov    %eax,(%esp)
 842fc38:	e8 db fa 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 842fc3d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 842fc41:	c7 44 24 04 bc 16 c5 	movl   $0x8c516bc,0x4(%esp)
 842fc48:	08 
 842fc49:	8d 45 bc             	lea    -0x44(%ebp),%eax
 842fc4c:	89 04 24             	mov    %eax,(%esp)
 842fc4f:	e8 34 fb 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 842fc54:	bb 00 00 00 00       	mov    $0x0,%ebx
 842fc59:	e9 cc 00 00 00       	jmp    842fd2a <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x536>
 842fc5e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842fc65:	00 
 842fc66:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842fc69:	89 04 24             	mov    %eax,(%esp)
 842fc6c:	e8 6d 57 cf ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 842fc71:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842fc74:	c7 45 84 58 02 00 00 	movl   $0x258,-0x7c(%ebp)
 842fc7b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842fc7e:	83 c0 48             	add    $0x48,%eax
 842fc81:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842fc84:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842fc88:	8d 95 a8 fc ff ff    	lea    -0x358(%ebp),%edx
 842fc8e:	89 54 24 08          	mov    %edx,0x8(%esp)
 842fc92:	8d 55 84             	lea    -0x7c(%ebp),%edx
 842fc95:	89 54 24 04          	mov    %edx,0x4(%esp)
 842fc99:	89 04 24             	mov    %eax,(%esp)
 842fc9c:	e8 61 24 28 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 842fca1:	83 f0 01             	xor    $0x1,%eax
 842fca4:	84 c0                	test   %al,%al
 842fca6:	74 07                	je     842fcaf <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x4bb>
 842fca8:	bb 00 00 00 00       	mov    $0x0,%ebx
 842fcad:	eb 7b                	jmp    842fd2a <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x536>
 842fcaf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 842fcb2:	05 a0 02 00 00       	add    $0x2a0,%eax
 842fcb7:	c7 44 24 10 16 00 00 	movl   $0x16,0x10(%esp)
 842fcbe:	00 
 842fcbf:	c7 44 24 0c 10 02 00 	movl   $0x210,0xc(%esp)
 842fcc6:	00 
 842fcc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 842fccb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842fcd2:	00 
 842fcd3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 842fcd6:	89 04 24             	mov    %eax,(%esp)
 842fcd9:	e8 9b bf fc ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 842fcde:	83 f0 01             	xor    $0x1,%eax
 842fce1:	84 c0                	test   %al,%al
 842fce3:	74 07                	je     842fcec <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x4f8>
 842fce5:	bb 00 00 00 00       	mov    $0x0,%ebx
 842fcea:	eb 3e                	jmp    842fd2a <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x536>
 842fcec:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842fcf1:	8d 55 94             	lea    -0x6c(%ebp),%edx
 842fcf4:	89 54 24 08          	mov    %edx,0x8(%esp)
 842fcf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842fcff:	00 
 842fd00:	89 04 24             	mov    %eax,(%esp)
 842fd03:	e8 d6 12 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842fd08:	bb 01 00 00 00       	mov    $0x1,%ebx
 842fd0d:	eb 1b                	jmp    842fd2a <_ZN17DB_LoadGameOption8dispatchEiiP6Stream+0x536>
 842fd0f:	89 d3                	mov    %edx,%ebx
 842fd11:	89 c6                	mov    %eax,%esi
 842fd13:	8d 45 94             	lea    -0x6c(%ebp),%eax
 842fd16:	89 04 24             	mov    %eax,(%esp)
 842fd19:	e8 b4 cb 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842fd1e:	89 f0                	mov    %esi,%eax
 842fd20:	89 da                	mov    %ebx,%edx
 842fd22:	89 04 24             	mov    %eax,(%esp)
 842fd25:	e8 26 3a 6b 00       	call   8ae3750 <_Unwind_Resume>
 842fd2a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 842fd2d:	89 04 24             	mov    %eax,(%esp)
 842fd30:	e8 9d cb 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842fd35:	89 d8                	mov    %ebx,%eax
 842fd37:	81 c4 6c 03 00 00    	add    $0x36c,%esp
 842fd3d:	5b                   	pop    %ebx
 842fd3e:	5e                   	pop    %esi
 842fd3f:	5f                   	pop    %edi
 842fd40:	5d                   	pop    %ebp
 842fd41:	c3                   	ret

```

```c
// DB_LoadGameOption::dispatch @ 0x842f7f4

/* DB_LoadGameOption::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadGameOption::dispatch(DB_LoadGameOption *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  char *pcVar8;
  byte bVar9;
  char local_35c [732];
  uint local_80 [2];
  CStreamGuard local_78 [8];
  CStreamGuard local_70 [8];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  MySQL *local_38;
  SIG_REQ_LOAD_GAME_OPTION *local_34;
  char local_2d;
  SIG_LOAD_GAME_OPTION *local_2c;
  SIG_LOAD_GAME_OPTION *local_28;
  uint local_24;
  uint local_20;
  
  bVar9 = 0;
  local_38 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_34 = Stream::GetOutBuffer<SIG_REQ_LOAD_GAME_OPTION>(param_3);
  uVar3 = NumberToString(*(uint *)local_34,0);
  uVar4 = get_member_game_option();
  MySQL::set_query(local_38,"seLect option_1,option_3,shortcut_emoticon from %s where m_id = %s",
                   uVar4,uVar3);
  cVar2 = MySQL::exec(local_38,true);
  if (cVar2 == '\x01') {
    iVar5 = MySQL::get_n_rows(local_38);
    if (iVar5 == 0) {
      pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x74c2);
      CStreamGuard::CStreamGuard(local_78,pSVar6,true);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
                    /* try { // try from 0842f8eb to 0842f974 has its CatchHandler @ 0842f98a */
      CStreamGuard::operator<<(pCVar7,0x12f);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
      CStreamGuard::operator<<(pCVar7,param_2);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_78);
      local_28 = CStreamGuard::GetInBuffer<SIG_LOAD_GAME_OPTION>(pCVar7);
      CETCOption::clear((CETCOption *)local_28);
      CQuickChattingOption::clear((CQuickChattingOption *)(local_28 + 0x48));
      CQuickChattingOption::clear((CQuickChattingOption *)(local_28 + 0x174));
      CChattingEmoticonConfig::clear((CChattingEmoticonConfig *)(local_28 + 0x2a0));
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_78);
      uVar3 = 1;
      CStreamGuard::~CStreamGuard(local_78);
    }
    else {
      local_2d = MySQL::fetch(local_38);
      if (local_2d == '\x01') {
        pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x74e1);
        CStreamGuard::CStreamGuard(local_70,pSVar6,true);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_70);
                    /* try { // try from 0842fa63 to 0842fd07 has its CatchHandler @ 0842fd0f */
        CStreamGuard::operator<<(pCVar7,0x12f);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_70);
        CStreamGuard::operator<<(pCVar7,param_2);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_70);
        local_2c = CStreamGuard::GetInBuffer<SIG_LOAD_GAME_OPTION>(pCVar7);
        CETCOption::clear((CETCOption *)local_2c);
        CQuickChattingOption::clear((CQuickChattingOption *)(local_2c + 0x48));
        CQuickChattingOption::clear((CQuickChattingOption *)(local_2c + 0x174));
        CChattingEmoticonConfig::clear((CChattingEmoticonConfig *)(local_2c + 0x2a0));
        pcVar8 = local_35c;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        }
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        local_2d = MySQL::get_binary(local_38,0,local_35c,0x62);
        if (local_2d == '\x01') {
          local_24 = MySQL::get_binary_length(local_38,0);
          local_80[1] = 0x48;
          cVar2 = uncompress_zip((char *)local_2c,local_80 + 1,local_35c,local_24);
          if (cVar2 == '\x01') {
            pcVar8 = local_35c;
            for (iVar5 = 0xb7; iVar5 != 0; iVar5 = iVar5 + -1) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8[2] = '\0';
              pcVar8[3] = '\0';
              pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
            }
            local_2d = MySQL::get_binary(local_38,1,local_35c,0x2dc);
            if (local_2d == '\x01') {
              local_20 = MySQL::get_binary_length(local_38,1);
              local_80[0] = 600;
              cVar2 = uncompress_zip((char *)(local_2c + 0x48),local_80,local_35c,local_20);
              if (cVar2 == '\x01') {
                cVar2 = get_compressed_blob_data(local_38,2,(char *)(local_2c + 0x2a0),0x210,0x16);
                if (cVar2 == '\x01') {
                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_70);
                  uVar3 = 1;
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar1 = *(uint *)local_34;
              cMyTrace::cMyTrace(local_48,
                                 "virtual bool DB_LoadGameOption::dispatch(int, int, Stream*)",
                                 0x7515,5);
              cMyTrace::operator()(local_48,"DB_LoadGameOption, get_binary(1) ERROR m_id=%u",uVar1);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = NumberToString(*(uint *)local_34,0);
          cMyTrace::cMyTrace(local_58,"virtual bool DB_LoadGameOption::dispatch(int, int, Stream*)",
                             0x74f9,5);
          cMyTrace::operator()(local_58,"DB_LoadGameOption, get_binary(0) ERROR m_id=%s",uVar3);
          uVar3 = 0;
        }
        CStreamGuard::~CStreamGuard(local_70);
      }
      else {
        uVar3 = NumberToString(*(uint *)local_34,0);
        cMyTrace::cMyTrace(local_68,"virtual bool DB_LoadGameOption::dispatch(int, int, Stream*)",
                           0x74dd,5);
        cMyTrace::operator()(local_68,"DB_LoadGameOption::dispatch, fetch ERROR m_id=%s",uVar3);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

