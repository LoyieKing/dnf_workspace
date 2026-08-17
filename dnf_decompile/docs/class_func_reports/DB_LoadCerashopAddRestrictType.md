# DB_LoadCerashopAddRestrictType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 080e1aca DB_LoadCerashopAddRestrictType::dispatch  [0x080e1aca-0x80e1ff5] ===
 80e1aca:	55                   	push   %ebp
 80e1acb:	89 e5                	mov    %esp,%ebp
 80e1acd:	56                   	push   %esi
 80e1ace:	53                   	push   %ebx
 80e1acf:	83 ec 50             	sub    $0x50,%esp
 80e1ad2:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 80e1ad9:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 80e1ae0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e1ae3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1ae7:	8b 45 14             	mov    0x14(%ebp),%eax
 80e1aea:	89 04 24             	mov    %eax,(%esp)
 80e1aed:	e8 a4 ac 53 00       	call   861c796 <_ZN6StreamrsERj>
 80e1af2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 80e1af5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1af9:	8b 45 14             	mov    0x14(%ebp),%eax
 80e1afc:	89 04 24             	mov    %eax,(%esp)
 80e1aff:	e8 92 ac 53 00       	call   861c796 <_ZN6StreamrsERj>
 80e1b04:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 80e1b09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80e1b10:	00 
 80e1b11:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1b18:	00 
 80e1b19:	89 04 24             	mov    %eax,(%esp)
 80e1b1c:	e8 1d 37 31 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 80e1b21:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80e1b24:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 80e1b28:	75 0a                	jne    80e1b34 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x6a>
 80e1b2a:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1b2f:	e9 b9 04 00 00       	jmp    80e1fed <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x523>
 80e1b34:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80e1b37:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e1b3b:	c7 44 24 04 7c cd b2 	movl   $0x8b2cd7c,0x4(%esp)
 80e1b42:	08 
 80e1b43:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1b46:	89 04 24             	mov    %eax,(%esp)
 80e1b49:	e8 72 26 31 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80e1b4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1b55:	00 
 80e1b56:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1b59:	89 04 24             	mov    %eax,(%esp)
 80e1b5c:	e8 c5 27 31 00       	call   83f4326 <_ZN5MySQL4execEb>
 80e1b61:	83 f0 01             	xor    $0x1,%eax
 80e1b64:	84 c0                	test   %al,%al
 80e1b66:	74 0a                	je     80e1b72 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0xa8>
 80e1b68:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1b6d:	e9 7b 04 00 00       	jmp    80e1fed <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x523>
 80e1b72:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1b75:	89 04 24             	mov    %eax,(%esp)
 80e1b78:	e8 ef 07 00 00       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 80e1b7d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80e1b80:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 80e1b84:	0f 8e ee 01 00 00    	jle    80e1d78 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x2ae>
 80e1b8a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80e1b8f:	c7 44 24 08 bc 01 00 	movl   $0x1bc,0x8(%esp)
 80e1b96:	00 
 80e1b97:	c7 44 24 04 5f cd b2 	movl   $0x8b2cd5f,0x4(%esp)
 80e1b9e:	08 
 80e1b9f:	89 04 24             	mov    %eax,(%esp)
 80e1ba2:	e8 df de 1a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80e1ba7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80e1bae:	00 
 80e1baf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1bb3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80e1bb6:	89 04 24             	mov    %eax,(%esp)
 80e1bb9:	e8 68 70 fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80e1bbe:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80e1bc1:	89 04 24             	mov    %eax,(%esp)
 80e1bc4:	e8 7d 70 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1bc9:	c7 44 24 04 41 03 00 	movl   $0x341,0x4(%esp)
 80e1bd0:	00 
 80e1bd1:	89 04 24             	mov    %eax,(%esp)
 80e1bd4:	e8 7d 70 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e1bd9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80e1bdc:	89 04 24             	mov    %eax,(%esp)
 80e1bdf:	e8 62 70 fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1be4:	8b 55 10             	mov    0x10(%ebp),%edx
 80e1be7:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e1beb:	89 04 24             	mov    %eax,(%esp)
 80e1bee:	e8 63 70 fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e1bf3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80e1bf6:	89 04 24             	mov    %eax,(%esp)
 80e1bf9:	e8 50 70 fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80e1bfe:	89 04 24             	mov    %eax,(%esp)
 80e1c01:	e8 32 0d 00 00       	call   80e2938 <_ZN12CStreamGuard11GetInBufferI35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPEEEPT_v>
 80e1c06:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80e1c09:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80e1c0c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e1c0f:	89 10                	mov    %edx,(%eax)
 80e1c11:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e1c14:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80e1c1b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80e1c22:	e9 ef 00 00 00       	jmp    80e1d16 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x24c>
 80e1c27:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1c2a:	89 04 24             	mov    %eax,(%esp)
 80e1c2d:	e8 8a 28 31 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 80e1c32:	83 f0 01             	xor    $0x1,%eax
 80e1c35:	84 c0                	test   %al,%al
 80e1c37:	74 0f                	je     80e1c48 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x17e>
 80e1c39:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1c3e:	be 00 00 00 00       	mov    $0x0,%esi
 80e1c43:	e9 1d 01 00 00       	jmp    80e1d65 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x29b>
 80e1c48:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80e1c4f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80e1c52:	89 d0                	mov    %edx,%eax
 80e1c54:	01 c0                	add    %eax,%eax
 80e1c56:	01 d0                	add    %edx,%eax
 80e1c58:	c1 e0 02             	shl    $0x2,%eax
 80e1c5b:	03 45 e0             	add    -0x20(%ebp),%eax
 80e1c5e:	8d 50 08             	lea    0x8(%eax),%edx
 80e1c61:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80e1c64:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80e1c68:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1c6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1c70:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1c73:	89 04 24             	mov    %eax,(%esp)
 80e1c76:	e8 33 06 00 00       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 80e1c7b:	83 f0 01             	xor    $0x1,%eax
 80e1c7e:	84 c0                	test   %al,%al
 80e1c80:	74 0f                	je     80e1c91 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x1c7>
 80e1c82:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1c87:	be 00 00 00 00       	mov    $0x0,%esi
 80e1c8c:	e9 d4 00 00 00       	jmp    80e1d65 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x29b>
 80e1c91:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80e1c94:	89 d0                	mov    %edx,%eax
 80e1c96:	01 c0                	add    %eax,%eax
 80e1c98:	01 d0                	add    %edx,%eax
 80e1c9a:	c1 e0 02             	shl    $0x2,%eax
 80e1c9d:	03 45 e0             	add    -0x20(%ebp),%eax
 80e1ca0:	8d 50 0c             	lea    0xc(%eax),%edx
 80e1ca3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80e1ca6:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80e1caa:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1cae:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1cb2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1cb5:	89 04 24             	mov    %eax,(%esp)
 80e1cb8:	e8 f1 05 00 00       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 80e1cbd:	83 f0 01             	xor    $0x1,%eax
 80e1cc0:	84 c0                	test   %al,%al
 80e1cc2:	74 0f                	je     80e1cd3 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x209>
 80e1cc4:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1cc9:	be 00 00 00 00       	mov    $0x0,%esi
 80e1cce:	e9 92 00 00 00       	jmp    80e1d65 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x29b>
 80e1cd3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80e1cd6:	89 d0                	mov    %edx,%eax
 80e1cd8:	01 c0                	add    %eax,%eax
 80e1cda:	01 d0                	add    %edx,%eax
 80e1cdc:	c1 e0 02             	shl    $0x2,%eax
 80e1cdf:	03 45 e0             	add    -0x20(%ebp),%eax
 80e1ce2:	8d 50 10             	lea    0x10(%eax),%edx
 80e1ce5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80e1ce8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80e1cec:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1cf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1cf4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80e1cf7:	89 04 24             	mov    %eax,(%esp)
 80e1cfa:	e8 af 05 00 00       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 80e1cff:	83 f0 01             	xor    $0x1,%eax
 80e1d02:	84 c0                	test   %al,%al
 80e1d04:	74 0c                	je     80e1d12 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x248>
 80e1d06:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1d0b:	be 00 00 00 00       	mov    $0x0,%esi
 80e1d10:	eb 53                	jmp    80e1d65 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x29b>
 80e1d12:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80e1d16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e1d19:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 80e1d1c:	0f 9c c0             	setl   %al
 80e1d1f:	84 c0                	test   %al,%al
 80e1d21:	0f 85 00 ff ff ff    	jne    80e1c27 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x15d>
 80e1d27:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80e1d2c:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 80e1d2f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1d33:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1d3a:	00 
 80e1d3b:	89 04 24             	mov    %eax,(%esp)
 80e1d3e:	e8 9b f2 48 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80e1d43:	be 01 00 00 00       	mov    $0x1,%esi
 80e1d48:	eb 1b                	jmp    80e1d65 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x29b>
 80e1d4a:	89 d3                	mov    %edx,%ebx
 80e1d4c:	89 c6                	mov    %eax,%esi
 80e1d4e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80e1d51:	89 04 24             	mov    %eax,(%esp)
 80e1d54:	e8 79 ab 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e1d59:	89 f0                	mov    %esi,%eax
 80e1d5b:	89 da                	mov    %ebx,%edx
 80e1d5d:	89 04 24             	mov    %eax,(%esp)
 80e1d60:	e8 eb 19 a0 00       	call   8ae3750 <_Unwind_Resume>
 80e1d65:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80e1d68:	89 04 24             	mov    %eax,(%esp)
 80e1d6b:	e8 62 ab 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e1d70:	85 f6                	test   %esi,%esi
 80e1d72:	0f 84 75 02 00 00    	je     80e1fed <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x523>
 80e1d78:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 80e1d7d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80e1d84:	00 
 80e1d85:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80e1d8c:	00 
 80e1d8d:	89 04 24             	mov    %eax,(%esp)
 80e1d90:	e8 a9 34 31 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 80e1d95:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80e1d98:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 80e1d9c:	75 0a                	jne    80e1da8 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x2de>
 80e1d9e:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1da3:	e9 45 02 00 00       	jmp    80e1fed <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x523>
 80e1da8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80e1dab:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e1daf:	c7 44 24 04 f4 cd b2 	movl   $0x8b2cdf4,0x4(%esp)
 80e1db6:	08 
 80e1db7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1dba:	89 04 24             	mov    %eax,(%esp)
 80e1dbd:	e8 fe 23 31 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80e1dc2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1dc9:	00 
 80e1dca:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1dcd:	89 04 24             	mov    %eax,(%esp)
 80e1dd0:	e8 51 25 31 00       	call   83f4326 <_ZN5MySQL4execEb>
 80e1dd5:	83 f0 01             	xor    $0x1,%eax
 80e1dd8:	84 c0                	test   %al,%al
 80e1dda:	74 0a                	je     80e1de6 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x31c>
 80e1ddc:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1de1:	e9 07 02 00 00       	jmp    80e1fed <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x523>
 80e1de6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1de9:	89 04 24             	mov    %eax,(%esp)
 80e1dec:	e8 7b 05 00 00       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 80e1df1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80e1df4:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 80e1df8:	0f 8e ea 01 00 00    	jle    80e1fe8 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x51e>
 80e1dfe:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80e1e03:	c7 44 24 08 da 01 00 	movl   $0x1da,0x8(%esp)
 80e1e0a:	00 
 80e1e0b:	c7 44 24 04 5f cd b2 	movl   $0x8b2cd5f,0x4(%esp)
 80e1e12:	08 
 80e1e13:	89 04 24             	mov    %eax,(%esp)
 80e1e16:	e8 6b dc 1a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80e1e1b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80e1e22:	00 
 80e1e23:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1e27:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e1e2a:	89 04 24             	mov    %eax,(%esp)
 80e1e2d:	e8 f4 6d fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80e1e32:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e1e35:	89 04 24             	mov    %eax,(%esp)
 80e1e38:	e8 09 6e fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1e3d:	c7 44 24 04 41 03 00 	movl   $0x341,0x4(%esp)
 80e1e44:	00 
 80e1e45:	89 04 24             	mov    %eax,(%esp)
 80e1e48:	e8 09 6e fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e1e4d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e1e50:	89 04 24             	mov    %eax,(%esp)
 80e1e53:	e8 ee 6d fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e1e58:	8b 55 10             	mov    0x10(%ebp),%edx
 80e1e5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e1e5f:	89 04 24             	mov    %eax,(%esp)
 80e1e62:	e8 ef 6d fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e1e67:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e1e6a:	89 04 24             	mov    %eax,(%esp)
 80e1e6d:	e8 dc 6d fe ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 80e1e72:	89 04 24             	mov    %eax,(%esp)
 80e1e75:	e8 be 0a 00 00       	call   80e2938 <_ZN12CStreamGuard11GetInBufferI35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPEEEPT_v>
 80e1e7a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80e1e7d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80e1e80:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e1e83:	89 10                	mov    %edx,(%eax)
 80e1e85:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e1e88:	c7 40 04 01 00 00 00 	movl   $0x1,0x4(%eax)
 80e1e8f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80e1e96:	e9 ef 00 00 00       	jmp    80e1f8a <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x4c0>
 80e1e9b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1e9e:	89 04 24             	mov    %eax,(%esp)
 80e1ea1:	e8 16 26 31 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 80e1ea6:	83 f0 01             	xor    $0x1,%eax
 80e1ea9:	84 c0                	test   %al,%al
 80e1eab:	74 0f                	je     80e1ebc <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x3f2>
 80e1ead:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1eb2:	be 00 00 00 00       	mov    $0x0,%esi
 80e1eb7:	e9 1d 01 00 00       	jmp    80e1fd9 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x50f>
 80e1ebc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e1ec3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e1ec6:	89 d0                	mov    %edx,%eax
 80e1ec8:	01 c0                	add    %eax,%eax
 80e1eca:	01 d0                	add    %edx,%eax
 80e1ecc:	c1 e0 02             	shl    $0x2,%eax
 80e1ecf:	03 45 ec             	add    -0x14(%ebp),%eax
 80e1ed2:	8d 50 08             	lea    0x8(%eax),%edx
 80e1ed5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1ed8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e1edc:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1ee0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1ee4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1ee7:	89 04 24             	mov    %eax,(%esp)
 80e1eea:	e8 bf 03 00 00       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 80e1eef:	83 f0 01             	xor    $0x1,%eax
 80e1ef2:	84 c0                	test   %al,%al
 80e1ef4:	74 0f                	je     80e1f05 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x43b>
 80e1ef6:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1efb:	be 00 00 00 00       	mov    $0x0,%esi
 80e1f00:	e9 d4 00 00 00       	jmp    80e1fd9 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x50f>
 80e1f05:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e1f08:	89 d0                	mov    %edx,%eax
 80e1f0a:	01 c0                	add    %eax,%eax
 80e1f0c:	01 d0                	add    %edx,%eax
 80e1f0e:	c1 e0 02             	shl    $0x2,%eax
 80e1f11:	03 45 ec             	add    -0x14(%ebp),%eax
 80e1f14:	8d 50 0c             	lea    0xc(%eax),%edx
 80e1f17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1f1a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e1f1e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1f22:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1f26:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1f29:	89 04 24             	mov    %eax,(%esp)
 80e1f2c:	e8 7d 03 00 00       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 80e1f31:	83 f0 01             	xor    $0x1,%eax
 80e1f34:	84 c0                	test   %al,%al
 80e1f36:	74 0f                	je     80e1f47 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x47d>
 80e1f38:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1f3d:	be 00 00 00 00       	mov    $0x0,%esi
 80e1f42:	e9 92 00 00 00       	jmp    80e1fd9 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x50f>
 80e1f47:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e1f4a:	89 d0                	mov    %edx,%eax
 80e1f4c:	01 c0                	add    %eax,%eax
 80e1f4e:	01 d0                	add    %edx,%eax
 80e1f50:	c1 e0 02             	shl    $0x2,%eax
 80e1f53:	03 45 ec             	add    -0x14(%ebp),%eax
 80e1f56:	8d 50 10             	lea    0x10(%eax),%edx
 80e1f59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1f5c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e1f60:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1f64:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1f68:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1f6b:	89 04 24             	mov    %eax,(%esp)
 80e1f6e:	e8 3b 03 00 00       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 80e1f73:	83 f0 01             	xor    $0x1,%eax
 80e1f76:	84 c0                	test   %al,%al
 80e1f78:	74 0c                	je     80e1f86 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x4bc>
 80e1f7a:	bb 00 00 00 00       	mov    $0x0,%ebx
 80e1f7f:	be 00 00 00 00       	mov    $0x0,%esi
 80e1f84:	eb 53                	jmp    80e1fd9 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x50f>
 80e1f86:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80e1f8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e1f8d:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 80e1f90:	0f 9c c0             	setl   %al
 80e1f93:	84 c0                	test   %al,%al
 80e1f95:	0f 85 00 ff ff ff    	jne    80e1e9b <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x3d1>
 80e1f9b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80e1fa0:	8d 55 bc             	lea    -0x44(%ebp),%edx
 80e1fa3:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1fa7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1fae:	00 
 80e1faf:	89 04 24             	mov    %eax,(%esp)
 80e1fb2:	e8 27 f0 48 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80e1fb7:	be 01 00 00 00       	mov    $0x1,%esi
 80e1fbc:	eb 1b                	jmp    80e1fd9 <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x50f>
 80e1fbe:	89 d3                	mov    %edx,%ebx
 80e1fc0:	89 c6                	mov    %eax,%esi
 80e1fc2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e1fc5:	89 04 24             	mov    %eax,(%esp)
 80e1fc8:	e8 05 a9 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e1fcd:	89 f0                	mov    %esi,%eax
 80e1fcf:	89 da                	mov    %ebx,%edx
 80e1fd1:	89 04 24             	mov    %eax,(%esp)
 80e1fd4:	e8 77 17 a0 00       	call   8ae3750 <_Unwind_Resume>
 80e1fd9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80e1fdc:	89 04 24             	mov    %eax,(%esp)
 80e1fdf:	e8 ee a8 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e1fe4:	85 f6                	test   %esi,%esi
 80e1fe6:	74 05                	je     80e1fed <_ZN30DB_LoadCerashopAddRestrictType8dispatchEiiP6Stream+0x523>
 80e1fe8:	bb 01 00 00 00       	mov    $0x1,%ebx
 80e1fed:	89 d8                	mov    %ebx,%eax
 80e1fef:	83 c4 50             	add    $0x50,%esp
 80e1ff2:	5b                   	pop    %ebx
 80e1ff3:	5e                   	pop    %esi
 80e1ff4:	5d                   	pop    %ebp
 80e1ff5:	c3                   	ret

```

```c
// DB_LoadCerashopAddRestrictType::dispatch @ 0x80e1aca

/* DB_LoadCerashopAddRestrictType::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadCerashopAddRestrictType::dispatch
          (DB_LoadCerashopAddRestrictType *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 unaff_EBX;
  undefined4 uVar6;
  CStreamGuard local_48 [8];
  CStreamGuard local_40 [8];
  uint local_38;
  uint local_34;
  MySQL *local_30;
  int local_2c;
  MySQL *local_28;
  SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *local_24;
  int local_20;
  int local_1c;
  SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *local_18;
  int local_14;
  int local_10;
  
  local_34 = 0;
  local_38 = 0;
  Stream::operator>>(param_3,&local_34);
  Stream::operator>>(param_3,&local_38);
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_30 == (MySQL *)0x0) {
    uVar6 = 0;
  }
  else {
    MySQL::set_query(local_30,
                     "seLect ipg_no, count, next_date from account_cerashop_restrict where m_id = %u and end_date > UNIX_TIMESTAMP() limit 10"
                     ,local_34);
    cVar3 = MySQL::exec(local_30,true);
    if (cVar3 == '\x01') {
      local_2c = MySQL::get_n_rows(local_30);
      if (0 < local_2c) {
        pSVar4 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",0x1bc);
        CStreamGuard::CStreamGuard(local_40,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
                    /* try { // try from 080e1bd4 to 080e1d42 has its CatchHandler @ 080e1d4a */
        CStreamGuard::operator<<(pCVar5,0x341);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_40);
        CStreamGuard::operator<<(pCVar5,param_2);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_40);
        local_24 = CStreamGuard::GetInBuffer<SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>(pCVar5);
        *(int *)local_24 = local_2c;
        *(undefined4 *)(local_24 + 4) = 0;
        for (local_20 = 0; local_20 < local_2c; local_20 = local_20 + 1) {
          cVar3 = MySQL::fetch(local_30);
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
          local_1c = 1;
          cVar3 = MySQL::get_int(local_30,0,(uint *)(local_24 + local_20 * 0xc + 8));
          iVar2 = local_1c;
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
          local_1c = local_1c + 1;
          cVar3 = MySQL::get_int(local_30,iVar2,(uint *)(local_24 + local_20 * 0xc + 0xc));
          iVar2 = local_1c;
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
          local_1c = local_1c + 1;
          cVar3 = MySQL::get_int(local_30,iVar2,(uint *)(local_24 + local_20 * 0xc + 0x10));
          if (cVar3 != '\x01') {
            unaff_EBX = 0;
            bVar1 = false;
            goto LAB_080e1d65;
          }
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_40);
        bVar1 = true;
LAB_080e1d65:
        CStreamGuard::~CStreamGuard(local_40);
        if (!bVar1) {
          return unaff_EBX;
        }
      }
      local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
      if (local_28 == (MySQL *)0x0) {
        uVar6 = 0;
      }
      else {
        MySQL::set_query(local_28,
                         "seLect ipg_no, count, next_date from charac_cerashop_restrict where charac_no = %u and end_date > UNIX_TIMESTAMP() limit 10"
                         ,local_38);
        cVar3 = MySQL::exec(local_28,true);
        if (cVar3 == '\x01') {
          local_2c = MySQL::get_n_rows(local_28);
          if (0 < local_2c) {
            pSVar4 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",
                                         0x1da);
            CStreamGuard::CStreamGuard(local_48,pSVar4,true);
            pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
                    /* try { // try from 080e1e48 to 080e1fb6 has its CatchHandler @ 080e1fbe */
            CStreamGuard::operator<<(pCVar5,0x341);
            pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_48);
            CStreamGuard::operator<<(pCVar5,param_2);
            pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_48);
            local_18 = CStreamGuard::GetInBuffer<SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE>(pCVar5);
            *(int *)local_18 = local_2c;
            *(undefined4 *)(local_18 + 4) = 1;
            for (local_14 = 0; local_14 < local_2c; local_14 = local_14 + 1) {
              cVar3 = MySQL::fetch(local_28);
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
              local_10 = 1;
              cVar3 = MySQL::get_int(local_28,0,(uint *)(local_18 + local_14 * 0xc + 8));
              iVar2 = local_10;
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
              local_10 = local_10 + 1;
              cVar3 = MySQL::get_int(local_28,iVar2,(uint *)(local_18 + local_14 * 0xc + 0xc));
              iVar2 = local_10;
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
              local_10 = local_10 + 1;
              cVar3 = MySQL::get_int(local_28,iVar2,(uint *)(local_18 + local_14 * 0xc + 0x10));
              if (cVar3 != '\x01') {
                unaff_EBX = 0;
                bVar1 = false;
                goto LAB_080e1fd9;
              }
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_48);
            bVar1 = true;
LAB_080e1fd9:
            CStreamGuard::~CStreamGuard(local_48);
            if (!bVar1) {
              return unaff_EBX;
            }
          }
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

---

## makeRequest

```asm
// === 080e1ff6 DB_LoadCerashopAddRestrictType::makeRequest  [0x080e1ff6-0x80e2103] ===
 80e1ff6:	55                   	push   %ebp
 80e1ff7:	89 e5                	mov    %esp,%ebp
 80e1ff9:	56                   	push   %esi
 80e1ffa:	53                   	push   %ebx
 80e1ffb:	83 ec 20             	sub    $0x20,%esp
 80e1ffe:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 80e2003:	c7 44 24 08 f4 01 00 	movl   $0x1f4,0x8(%esp)
 80e200a:	00 
 80e200b:	c7 44 24 04 5f cd b2 	movl   $0x8b2cd5f,0x4(%esp)
 80e2012:	08 
 80e2013:	89 04 24             	mov    %eax,(%esp)
 80e2016:	e8 6b da 1a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 80e201b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80e2022:	00 
 80e2023:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e2027:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e202a:	89 04 24             	mov    %eax,(%esp)
 80e202d:	e8 f4 6b fe ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 80e2032:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e2035:	89 04 24             	mov    %eax,(%esp)
 80e2038:	e8 09 6c fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e203d:	c7 44 24 04 41 03 00 	movl   $0x341,0x4(%esp)
 80e2044:	00 
 80e2045:	89 04 24             	mov    %eax,(%esp)
 80e2048:	e8 09 6c fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e204d:	8b 45 08             	mov    0x8(%ebp),%eax
 80e2050:	89 04 24             	mov    %eax,(%esp)
 80e2053:	e8 3e 6c fe ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 80e2058:	89 c3                	mov    %eax,%ebx
 80e205a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e205d:	89 04 24             	mov    %eax,(%esp)
 80e2060:	e8 e1 6b fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e2065:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e2069:	89 04 24             	mov    %eax,(%esp)
 80e206c:	e8 e5 6b fe ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 80e2071:	8b 45 08             	mov    0x8(%ebp),%eax
 80e2074:	89 04 24             	mov    %eax,(%esp)
 80e2077:	e8 f2 82 ff ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80e207c:	89 c3                	mov    %eax,%ebx
 80e207e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e2081:	89 04 24             	mov    %eax,(%esp)
 80e2084:	e8 bd 6b fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e2089:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e208d:	89 04 24             	mov    %eax,(%esp)
 80e2090:	e8 fd 01 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e2095:	8b 45 08             	mov    0x8(%ebp),%eax
 80e2098:	89 04 24             	mov    %eax,(%esp)
 80e209b:	e8 ae 9b fe ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80e20a0:	89 c3                	mov    %eax,%ebx
 80e20a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e20a5:	89 04 24             	mov    %eax,(%esp)
 80e20a8:	e8 99 6b fe ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 80e20ad:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80e20b1:	89 04 24             	mov    %eax,(%esp)
 80e20b4:	e8 d9 01 00 00       	call   80e2292 <_ZN12CStreamGuardlsEj>
 80e20b9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 80e20be:	8d 55 f0             	lea    -0x10(%ebp),%edx
 80e20c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e20c5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80e20cc:	00 
 80e20cd:	89 04 24             	mov    %eax,(%esp)
 80e20d0:	e8 09 ef 48 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 80e20d5:	eb 1b                	jmp    80e20f2 <_ZN30DB_LoadCerashopAddRestrictType11makeRequestEP5CUser+0xfc>
 80e20d7:	89 d3                	mov    %edx,%ebx
 80e20d9:	89 c6                	mov    %eax,%esi
 80e20db:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e20de:	89 04 24             	mov    %eax,(%esp)
 80e20e1:	e8 ec a7 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e20e6:	89 f0                	mov    %esi,%eax
 80e20e8:	89 da                	mov    %ebx,%edx
 80e20ea:	89 04 24             	mov    %eax,(%esp)
 80e20ed:	e8 5e 16 a0 00       	call   8ae3750 <_Unwind_Resume>
 80e20f2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e20f5:	89 04 24             	mov    %eax,(%esp)
 80e20f8:	e8 d5 a7 53 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 80e20fd:	83 c4 20             	add    $0x20,%esp
 80e2100:	5b                   	pop    %ebx
 80e2101:	5e                   	pop    %esi
 80e2102:	5d                   	pop    %ebp
 80e2103:	c3                   	ret

```

```c
// DB_LoadCerashopAddRestrictType::makeRequest @ 0x80e1ff6

/* DB_LoadCerashopAddRestrictType::makeRequest(CUser*) */

void DB_LoadCerashopAddRestrictType::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"CerashopAddRestrictType.cpp",500);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080e2048 to 080e20d4 has its CatchHandler @ 080e20d7 */
  CStreamGuard::operator<<(pCVar2,0x341);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = CUser::get_acc_id(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

