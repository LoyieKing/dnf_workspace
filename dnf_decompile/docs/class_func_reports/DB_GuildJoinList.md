# DB_GuildJoinList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843d87c DB_GuildJoinList::dispatch  [0x0843d87c-0x843dd7b] ===
 843d87c:	55                   	push   %ebp
 843d87d:	89 e5                	mov    %esp,%ebp
 843d87f:	56                   	push   %esi
 843d880:	53                   	push   %ebx
 843d881:	83 ec 40             	sub    $0x40,%esp
 843d884:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843d889:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843d890:	00 
 843d891:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 843d898:	00 
 843d899:	89 04 24             	mov    %eax,(%esp)
 843d89c:	e8 9d 79 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843d8a1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843d8a4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843d8a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843d8b0:	00 
 843d8b1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843d8b8:	00 
 843d8b9:	89 04 24             	mov    %eax,(%esp)
 843d8bc:	e8 7d 79 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843d8c1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843d8c4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843d8c9:	c7 44 24 08 43 92 00 	movl   $0x9243,0x8(%esp)
 843d8d0:	00 
 843d8d1:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843d8d8:	08 
 843d8d9:	89 04 24             	mov    %eax,(%esp)
 843d8dc:	e8 a5 21 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843d8e1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843d8e8:	00 
 843d8e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d8ed:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843d8f0:	89 04 24             	mov    %eax,(%esp)
 843d8f3:	e8 2e b3 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843d8f8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843d8fb:	89 04 24             	mov    %eax,(%esp)
 843d8fe:	e8 43 b3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d903:	c7 44 24 04 1a 02 00 	movl   $0x21a,0x4(%esp)
 843d90a:	00 
 843d90b:	89 04 24             	mov    %eax,(%esp)
 843d90e:	e8 43 b3 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d913:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843d916:	89 04 24             	mov    %eax,(%esp)
 843d919:	e8 28 b3 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d91e:	8b 55 10             	mov    0x10(%ebp),%edx
 843d921:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d925:	89 04 24             	mov    %eax,(%esp)
 843d928:	e8 29 b3 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d92d:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 843d934:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843d937:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d93b:	8b 45 14             	mov    0x14(%ebp),%eax
 843d93e:	89 04 24             	mov    %eax,(%esp)
 843d941:	e8 50 ee 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843d946:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 843d94d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 843d950:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d954:	8b 45 14             	mov    0x14(%ebp),%eax
 843d957:	89 04 24             	mov    %eax,(%esp)
 843d95a:	e8 65 ec 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 843d95f:	8b 55 cc             	mov    -0x34(%ebp),%edx
 843d962:	8b 45 d0             	mov    -0x30(%ebp),%eax
 843d965:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843d969:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d96d:	c7 44 24 04 ac 54 c5 	movl   $0x8c554ac,0x4(%esp)
 843d974:	08 
 843d975:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843d978:	89 04 24             	mov    %eax,(%esp)
 843d97b:	e8 40 68 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843d980:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d987:	00 
 843d988:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843d98b:	89 04 24             	mov    %eax,(%esp)
 843d98e:	e8 93 69 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843d993:	83 f0 01             	xor    $0x1,%eax
 843d996:	84 c0                	test   %al,%al
 843d998:	74 0a                	je     843d9a4 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x128>
 843d99a:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d99f:	e9 c3 03 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843d9a4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 843d9a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d9ab:	c7 44 24 04 f4 54 c5 	movl   $0x8c554f4,0x4(%esp)
 843d9b2:	08 
 843d9b3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843d9b6:	89 04 24             	mov    %eax,(%esp)
 843d9b9:	e8 02 68 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843d9be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d9c5:	00 
 843d9c6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843d9c9:	89 04 24             	mov    %eax,(%esp)
 843d9cc:	e8 55 69 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843d9d1:	83 f0 01             	xor    $0x1,%eax
 843d9d4:	84 c0                	test   %al,%al
 843d9d6:	74 0a                	je     843d9e2 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x166>
 843d9d8:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d9dd:	e9 85 03 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843d9e2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843d9e5:	89 04 24             	mov    %eax,(%esp)
 843d9e8:	e8 61 b2 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843d9ed:	89 04 24             	mov    %eax,(%esp)
 843d9f0:	e8 9b 61 01 00       	call   8453b90 <_ZN12CStreamGuard11GetInBufferI19SIG_GUILD_JOIN_LISTEEPT_v>
 843d9f5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843d9f8:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 843d9ff:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 843da06:	e8 45 fd c3 ff       	call   807d750 <time@plt>
 843da0b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843da0e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843da11:	89 04 24             	mov    %eax,(%esp)
 843da14:	e8 53 49 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843da19:	83 f8 32             	cmp    $0x32,%eax
 843da1c:	77 0d                	ja     843da2b <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x1af>
 843da1e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843da21:	89 04 24             	mov    %eax,(%esp)
 843da24:	e8 43 49 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843da29:	eb 05                	jmp    843da30 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x1b4>
 843da2b:	b8 32 00 00 00       	mov    $0x32,%eax
 843da30:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843da33:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843da36:	8b 55 ec             	mov    -0x14(%ebp),%edx
 843da39:	89 10                	mov    %edx,(%eax)
 843da3b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843da42:	e9 f0 00 00 00       	jmp    843db37 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x2bb>
 843da47:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843da4a:	89 04 24             	mov    %eax,(%esp)
 843da4d:	e8 6a 6a fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843da52:	83 f0 01             	xor    $0x1,%eax
 843da55:	84 c0                	test   %al,%al
 843da57:	74 0a                	je     843da63 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x1e7>
 843da59:	bb 00 00 00 00       	mov    $0x0,%ebx
 843da5e:	e9 04 03 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843da63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843da66:	c1 e0 02             	shl    $0x2,%eax
 843da69:	89 c2                	mov    %eax,%edx
 843da6b:	c1 e2 04             	shl    $0x4,%edx
 843da6e:	01 d0                	add    %edx,%eax
 843da70:	03 45 e4             	add    -0x1c(%ebp),%eax
 843da73:	83 c0 04             	add    $0x4,%eax
 843da76:	89 44 24 08          	mov    %eax,0x8(%esp)
 843da7a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843da81:	00 
 843da82:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843da85:	89 04 24             	mov    %eax,(%esp)
 843da88:	e8 65 48 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843da8d:	83 f0 01             	xor    $0x1,%eax
 843da90:	84 c0                	test   %al,%al
 843da92:	74 0a                	je     843da9e <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x222>
 843da94:	bb 00 00 00 00       	mov    $0x0,%ebx
 843da99:	e9 c9 02 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843da9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843daa1:	c1 e0 02             	shl    $0x2,%eax
 843daa4:	89 c2                	mov    %eax,%edx
 843daa6:	c1 e2 04             	shl    $0x4,%edx
 843daa9:	01 d0                	add    %edx,%eax
 843daab:	83 c0 20             	add    $0x20,%eax
 843daae:	03 45 e4             	add    -0x1c(%ebp),%eax
 843dab1:	83 c0 0a             	add    $0xa,%eax
 843dab4:	c7 44 24 0c 1a 00 00 	movl   $0x1a,0xc(%esp)
 843dabb:	00 
 843dabc:	89 44 24 08          	mov    %eax,0x8(%esp)
 843dac0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843dac7:	00 
 843dac8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843dacb:	89 04 24             	mov    %eax,(%esp)
 843dace:	e8 17 f3 ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843dad3:	83 f0 01             	xor    $0x1,%eax
 843dad6:	84 c0                	test   %al,%al
 843dad8:	74 0a                	je     843dae4 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x268>
 843dada:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dadf:	e9 83 02 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dae4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843dae7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843daeb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843daf2:	00 
 843daf3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843daf6:	89 04 24             	mov    %eax,(%esp)
 843daf9:	e8 2e 8e cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843dafe:	83 f0 01             	xor    $0x1,%eax
 843db01:	84 c0                	test   %al,%al
 843db03:	74 0a                	je     843db0f <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x293>
 843db05:	bb 00 00 00 00       	mov    $0x0,%ebx
 843db0a:	e9 58 02 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843db0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843db12:	8b 55 c8             	mov    -0x38(%ebp),%edx
 843db15:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 843db18:	89 cb                	mov    %ecx,%ebx
 843db1a:	29 d3                	sub    %edx,%ebx
 843db1c:	89 da                	mov    %ebx,%edx
 843db1e:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 843db21:	c1 e0 02             	shl    $0x2,%eax
 843db24:	89 c3                	mov    %eax,%ebx
 843db26:	c1 e3 04             	shl    $0x4,%ebx
 843db29:	01 d8                	add    %ebx,%eax
 843db2b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 843db2e:	83 c0 44             	add    $0x44,%eax
 843db31:	89 10                	mov    %edx,(%eax)
 843db33:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 843db37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843db3a:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 843db3d:	0f 9c c0             	setl   %al
 843db40:	84 c0                	test   %al,%al
 843db42:	0f 85 ff fe ff ff    	jne    843da47 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x1cb>
 843db48:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 843db4f:	e9 c4 01 00 00       	jmp    843dd18 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x49c>
 843db54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843db57:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843db5a:	c1 e0 02             	shl    $0x2,%eax
 843db5d:	89 c1                	mov    %eax,%ecx
 843db5f:	c1 e1 04             	shl    $0x4,%ecx
 843db62:	01 c8                	add    %ecx,%eax
 843db64:	8d 04 02             	lea    (%edx,%eax,1),%eax
 843db67:	83 c0 04             	add    $0x4,%eax
 843db6a:	8b 00                	mov    (%eax),%eax
 843db6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 843db70:	c7 44 24 04 4c 55 c5 	movl   $0x8c5554c,0x4(%esp)
 843db77:	08 
 843db78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843db7b:	89 04 24             	mov    %eax,(%esp)
 843db7e:	e8 3d 66 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843db83:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843db8a:	00 
 843db8b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843db8e:	89 04 24             	mov    %eax,(%esp)
 843db91:	e8 90 67 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843db96:	83 f0 01             	xor    $0x1,%eax
 843db99:	84 c0                	test   %al,%al
 843db9b:	74 0a                	je     843dba7 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x32b>
 843db9d:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dba2:	e9 c0 01 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dba7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843dbaa:	89 04 24             	mov    %eax,(%esp)
 843dbad:	e8 ba 47 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843dbb2:	85 c0                	test   %eax,%eax
 843dbb4:	0f 94 c0             	sete   %al
 843dbb7:	84 c0                	test   %al,%al
 843dbb9:	0f 85 54 01 00 00    	jne    843dd13 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x497>
 843dbbf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843dbc2:	89 04 24             	mov    %eax,(%esp)
 843dbc5:	e8 f2 68 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843dbca:	83 f0 01             	xor    $0x1,%eax
 843dbcd:	84 c0                	test   %al,%al
 843dbcf:	74 0a                	je     843dbdb <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x35f>
 843dbd1:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dbd6:	e9 8c 01 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dbdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843dbde:	c1 e0 02             	shl    $0x2,%eax
 843dbe1:	89 c2                	mov    %eax,%edx
 843dbe3:	c1 e2 04             	shl    $0x4,%edx
 843dbe6:	01 d0                	add    %edx,%eax
 843dbe8:	03 45 e4             	add    -0x1c(%ebp),%eax
 843dbeb:	83 c0 08             	add    $0x8,%eax
 843dbee:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 843dbf5:	00 
 843dbf6:	89 44 24 08          	mov    %eax,0x8(%esp)
 843dbfa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843dc01:	00 
 843dc02:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843dc05:	89 04 24             	mov    %eax,(%esp)
 843dc08:	e8 dd f1 ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843dc0d:	83 f0 01             	xor    $0x1,%eax
 843dc10:	84 c0                	test   %al,%al
 843dc12:	74 0a                	je     843dc1e <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x3a2>
 843dc14:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dc19:	e9 49 01 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dc1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843dc21:	c1 e0 02             	shl    $0x2,%eax
 843dc24:	89 c2                	mov    %eax,%edx
 843dc26:	c1 e2 04             	shl    $0x4,%edx
 843dc29:	01 d0                	add    %edx,%eax
 843dc2b:	83 c0 20             	add    $0x20,%eax
 843dc2e:	03 45 e4             	add    -0x1c(%ebp),%eax
 843dc31:	83 c0 09             	add    $0x9,%eax
 843dc34:	89 44 24 08          	mov    %eax,0x8(%esp)
 843dc38:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843dc3f:	00 
 843dc40:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843dc43:	89 04 24             	mov    %eax,(%esp)
 843dc46:	e8 09 02 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 843dc4b:	83 f0 01             	xor    $0x1,%eax
 843dc4e:	84 c0                	test   %al,%al
 843dc50:	74 0a                	je     843dc5c <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x3e0>
 843dc52:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dc57:	e9 0b 01 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dc5c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843dc5f:	c1 e0 02             	shl    $0x2,%eax
 843dc62:	89 c2                	mov    %eax,%edx
 843dc64:	c1 e2 04             	shl    $0x4,%edx
 843dc67:	01 d0                	add    %edx,%eax
 843dc69:	83 c0 20             	add    $0x20,%eax
 843dc6c:	03 45 e4             	add    -0x1c(%ebp),%eax
 843dc6f:	83 c0 06             	add    $0x6,%eax
 843dc72:	89 44 24 08          	mov    %eax,0x8(%esp)
 843dc76:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843dc7d:	00 
 843dc7e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843dc81:	89 04 24             	mov    %eax,(%esp)
 843dc84:	e8 cb 01 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 843dc89:	83 f0 01             	xor    $0x1,%eax
 843dc8c:	84 c0                	test   %al,%al
 843dc8e:	74 0a                	je     843dc9a <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x41e>
 843dc90:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dc95:	e9 cd 00 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dc9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843dc9d:	c1 e0 02             	shl    $0x2,%eax
 843dca0:	89 c2                	mov    %eax,%edx
 843dca2:	c1 e2 04             	shl    $0x4,%edx
 843dca5:	01 d0                	add    %edx,%eax
 843dca7:	83 c0 20             	add    $0x20,%eax
 843dcaa:	03 45 e4             	add    -0x1c(%ebp),%eax
 843dcad:	83 c0 07             	add    $0x7,%eax
 843dcb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 843dcb4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843dcbb:	00 
 843dcbc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843dcbf:	89 04 24             	mov    %eax,(%esp)
 843dcc2:	e8 8d 01 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 843dcc7:	83 f0 01             	xor    $0x1,%eax
 843dcca:	84 c0                	test   %al,%al
 843dccc:	74 0a                	je     843dcd8 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x45c>
 843dcce:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dcd3:	e9 8f 00 00 00       	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dcd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843dcdb:	c1 e0 02             	shl    $0x2,%eax
 843dcde:	89 c2                	mov    %eax,%edx
 843dce0:	c1 e2 04             	shl    $0x4,%edx
 843dce3:	01 d0                	add    %edx,%eax
 843dce5:	83 c0 20             	add    $0x20,%eax
 843dce8:	03 45 e4             	add    -0x1c(%ebp),%eax
 843dceb:	83 c0 08             	add    $0x8,%eax
 843dcee:	89 44 24 08          	mov    %eax,0x8(%esp)
 843dcf2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843dcf9:	00 
 843dcfa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843dcfd:	89 04 24             	mov    %eax,(%esp)
 843dd00:	e8 4f 01 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 843dd05:	83 f0 01             	xor    $0x1,%eax
 843dd08:	84 c0                	test   %al,%al
 843dd0a:	74 08                	je     843dd14 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x498>
 843dd0c:	bb 00 00 00 00       	mov    $0x0,%ebx
 843dd11:	eb 54                	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dd13:	90                   	nop
 843dd14:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 843dd18:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843dd1b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 843dd1e:	0f 9c c0             	setl   %al
 843dd21:	84 c0                	test   %al,%al
 843dd23:	0f 85 2b fe ff ff    	jne    843db54 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x2d8>
 843dd29:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843dd2e:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 843dd31:	89 54 24 08          	mov    %edx,0x8(%esp)
 843dd35:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843dd3c:	00 
 843dd3d:	89 04 24             	mov    %eax,(%esp)
 843dd40:	e8 99 32 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843dd45:	bb 01 00 00 00       	mov    $0x1,%ebx
 843dd4a:	eb 1b                	jmp    843dd67 <_ZN16DB_GuildJoinList8dispatchEiiP6Stream+0x4eb>
 843dd4c:	89 d3                	mov    %edx,%ebx
 843dd4e:	89 c6                	mov    %eax,%esi
 843dd50:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843dd53:	89 04 24             	mov    %eax,(%esp)
 843dd56:	e8 77 eb 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843dd5b:	89 f0                	mov    %esi,%eax
 843dd5d:	89 da                	mov    %ebx,%edx
 843dd5f:	89 04 24             	mov    %eax,(%esp)
 843dd62:	e8 e9 59 6a 00       	call   8ae3750 <_Unwind_Resume>
 843dd67:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843dd6a:	89 04 24             	mov    %eax,(%esp)
 843dd6d:	e8 60 eb 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843dd72:	89 d8                	mov    %ebx,%eax
 843dd74:	83 c4 40             	add    $0x40,%esp
 843dd77:	5b                   	pop    %ebx
 843dd78:	5e                   	pop    %esi
 843dd79:	5d                   	pop    %ebp
 843dd7a:	c3                   	ret
 843dd7b:	90                   	nop

```

```c
// DB_GuildJoinList::dispatch @ 0x843d87c

/* DB_GuildJoinList::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GuildJoinList::dispatch(DB_GuildJoinList *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_3c;
  int local_38;
  uint local_34;
  CStreamGuard local_30 [8];
  MySQL *local_28;
  MySQL *local_24;
  SIG_GUILD_JOIN_LIST *local_20;
  time_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9243);
  CStreamGuard::CStreamGuard(local_30,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0843d90e to 0843dd44 has its CatchHandler @ 0843dd4c */
  CStreamGuard::operator<<(pCVar3,0x21a);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
  CStreamGuard::operator<<(pCVar3,param_2);
  local_34 = 0;
  Stream::operator>>(param_3,&local_34);
  local_38 = 0;
  Stream::operator>>(param_3,&local_38);
  iVar5 = local_38;
  MySQL::set_query(local_28,"delete from guild_join_list where guild_id=%d and server_group != %d",
                   local_34,local_38);
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    MySQL::set_query(local_28,
                     "seLect charac_no,memo,unix_timestamp(occ_time) from guild_join_list where guild_id=%d"
                     ,local_34,iVar5);
    cVar1 = MySQL::exec(local_28,true);
    if (cVar1 == '\x01') {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
      local_20 = CStreamGuard::GetInBuffer<SIG_GUILD_JOIN_LIST>(pCVar3);
      local_3c = 0;
      local_1c = time((time_t *)0x0);
      uVar4 = MySQL::get_n_rows(local_28);
      if (uVar4 < 0x33) {
        local_18 = MySQL::get_n_rows(local_28);
      }
      else {
        local_18 = 0x32;
      }
      *(int *)local_20 = local_18;
      for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
        cVar1 = MySQL::fetch(local_28);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        cVar1 = MySQL::get_uint(local_28,0,(uint *)(local_20 + local_14 * 0x44 + 4));
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        cVar1 = MySQL::get_str(local_28,1,(char *)(local_20 + local_14 * 0x44 + 0x2a),0x1a);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        cVar1 = MySQL::get_int(local_28,2,&local_3c);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        *(time_t *)(local_20 + local_14 * 0x44 + 0x44) = local_1c - local_3c;
      }
      for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
        MySQL::set_query(local_24,
                         "seLect charac_name,lev,job,grow_type,sex from charac_info where charac_no=%d"
                         ,*(undefined4 *)(local_20 + local_10 * 0x44 + 4));
        cVar1 = MySQL::exec(local_24,true);
        if (cVar1 != '\x01') {
          uVar6 = 0;
          goto LAB_0843dd67;
        }
        iVar5 = MySQL::get_n_rows(local_24);
        if (iVar5 != 0) {
          cVar1 = MySQL::fetch(local_24);
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_str(local_24,0,(char *)(local_20 + local_10 * 0x44 + 8),0x1e);
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,1,(char *)(local_20 + local_10 * 0x44 + 0x29));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,2,(char *)(local_20 + local_10 * 0x44 + 0x26));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,3,(char *)(local_20 + local_10 * 0x44 + 0x27));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
          cVar1 = MySQL::get_byte(local_24,4,(char *)(local_20 + local_10 * 0x44 + 0x28));
          if (cVar1 != '\x01') {
            uVar6 = 0;
            goto LAB_0843dd67;
          }
        }
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
LAB_0843dd67:
  CStreamGuard::~CStreamGuard(local_30);
  return uVar6;
}

```

---

## makeRequest

```asm
// === 0843dd7c DB_GuildJoinList::makeRequest  [0x0843dd7c-0x843de6b] ===
 843dd7c:	55                   	push   %ebp
 843dd7d:	89 e5                	mov    %esp,%ebp
 843dd7f:	56                   	push   %esi
 843dd80:	53                   	push   %ebx
 843dd81:	83 ec 20             	sub    $0x20,%esp
 843dd84:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843dd89:	c7 44 24 08 99 92 00 	movl   $0x9299,0x8(%esp)
 843dd90:	00 
 843dd91:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843dd98:	08 
 843dd99:	89 04 24             	mov    %eax,(%esp)
 843dd9c:	e8 e5 1c e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843dda1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843dda8:	00 
 843dda9:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ddad:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ddb0:	89 04 24             	mov    %eax,(%esp)
 843ddb3:	e8 6e ae c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843ddb8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ddbb:	89 04 24             	mov    %eax,(%esp)
 843ddbe:	e8 83 ae c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ddc3:	c7 44 24 04 1a 02 00 	movl   $0x21a,0x4(%esp)
 843ddca:	00 
 843ddcb:	89 04 24             	mov    %eax,(%esp)
 843ddce:	e8 83 ae c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843ddd3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ddd6:	89 04 24             	mov    %eax,(%esp)
 843ddd9:	e8 68 ae c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ddde:	8b 55 08             	mov    0x8(%ebp),%edx
 843dde1:	89 54 24 04          	mov    %edx,0x4(%esp)
 843dde5:	89 04 24             	mov    %eax,(%esp)
 843dde8:	e8 69 ae c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843dded:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ddf0:	89 04 24             	mov    %eax,(%esp)
 843ddf3:	e8 4e ae c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ddf8:	8b 55 0c             	mov    0xc(%ebp),%edx
 843ddfb:	89 54 24 04          	mov    %edx,0x4(%esp)
 843ddff:	89 04 24             	mov    %eax,(%esp)
 843de02:	e8 8b 44 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843de07:	8b 5d 10             	mov    0x10(%ebp),%ebx
 843de0a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843de0d:	89 04 24             	mov    %eax,(%esp)
 843de10:	e8 31 ae c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843de15:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 843de19:	89 04 24             	mov    %eax,(%esp)
 843de1c:	e8 35 ae c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843de21:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843de26:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843de29:	89 54 24 08          	mov    %edx,0x8(%esp)
 843de2d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843de34:	00 
 843de35:	89 04 24             	mov    %eax,(%esp)
 843de38:	e8 a1 31 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843de3d:	eb 1b                	jmp    843de5a <_ZN16DB_GuildJoinList11makeRequestEij17ENUM_SERVER_GROUP+0xde>
 843de3f:	89 d3                	mov    %edx,%ebx
 843de41:	89 c6                	mov    %eax,%esi
 843de43:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843de46:	89 04 24             	mov    %eax,(%esp)
 843de49:	e8 84 ea 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843de4e:	89 f0                	mov    %esi,%eax
 843de50:	89 da                	mov    %ebx,%edx
 843de52:	89 04 24             	mov    %eax,(%esp)
 843de55:	e8 f6 58 6a 00       	call   8ae3750 <_Unwind_Resume>
 843de5a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843de5d:	89 04 24             	mov    %eax,(%esp)
 843de60:	e8 6d ea 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843de65:	83 c4 20             	add    $0x20,%esp
 843de68:	5b                   	pop    %ebx
 843de69:	5e                   	pop    %esi
 843de6a:	5d                   	pop    %ebp
 843de6b:	c3                   	ret

```

```c
// DB_GuildJoinList::makeRequest @ 0x843dd7c

/* DB_GuildJoinList::makeRequest(int, unsigned int, ENUM_SERVER_GROUP) */

void DB_GuildJoinList::makeRequest(int param_1,uint param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9299);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843ddce to 0843de3c has its CatchHandler @ 0843de3f */
  CStreamGuard::operator<<(pCVar2,0x21a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

