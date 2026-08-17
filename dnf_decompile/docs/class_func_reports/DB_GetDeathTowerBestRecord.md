# DB_GetDeathTowerBestRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08429ad0 DB_GetDeathTowerBestRecord::dispatch  [0x08429ad0-0x842a047] ===
 8429ad0:	55                   	push   %ebp
 8429ad1:	89 e5                	mov    %esp,%ebp
 8429ad3:	56                   	push   %esi
 8429ad4:	53                   	push   %ebx
 8429ad5:	83 ec 30             	sub    $0x30,%esp
 8429ad8:	8b 45 08             	mov    0x8(%ebp),%eax
 8429adb:	8b 55 14             	mov    0x14(%ebp),%edx
 8429ade:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8429ae2:	8b 55 10             	mov    0x10(%ebp),%edx
 8429ae5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8429ae9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8429aec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8429af0:	89 04 24             	mov    %eax,(%esp)
 8429af3:	e8 84 24 fd ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8429af8:	83 f0 01             	xor    $0x1,%eax
 8429afb:	84 c0                	test   %al,%al
 8429afd:	74 0a                	je     8429b09 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x39>
 8429aff:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429b04:	e9 35 05 00 00       	jmp    842a03e <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x56e>
 8429b09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8429b0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429b10:	8b 45 14             	mov    0x14(%ebp),%eax
 8429b13:	89 04 24             	mov    %eax,(%esp)
 8429b16:	e8 7b 2c 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8429b1b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8429b20:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8429b27:	00 
 8429b28:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8429b2f:	00 
 8429b30:	89 04 24             	mov    %eax,(%esp)
 8429b33:	e8 06 b7 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8429b38:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8429b3b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8429b3e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8429b45:	00 
 8429b46:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429b4a:	c7 44 24 04 4c f7 c4 	movl   $0x8c4f74c,0x4(%esp)
 8429b51:	08 
 8429b52:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429b55:	89 04 24             	mov    %eax,(%esp)
 8429b58:	e8 63 a6 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8429b5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8429b64:	00 
 8429b65:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429b68:	89 04 24             	mov    %eax,(%esp)
 8429b6b:	e8 b6 a7 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8429b70:	83 f0 01             	xor    $0x1,%eax
 8429b73:	84 c0                	test   %al,%al
 8429b75:	75 0f                	jne    8429b86 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0xb6>
 8429b77:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429b7a:	89 04 24             	mov    %eax,(%esp)
 8429b7d:	e8 ea 87 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8429b82:	85 c0                	test   %eax,%eax
 8429b84:	75 07                	jne    8429b8d <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0xbd>
 8429b86:	b8 01 00 00 00       	mov    $0x1,%eax
 8429b8b:	eb 05                	jmp    8429b92 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0xc2>
 8429b8d:	b8 00 00 00 00       	mov    $0x0,%eax
 8429b92:	84 c0                	test   %al,%al
 8429b94:	74 0a                	je     8429ba0 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0xd0>
 8429b96:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429b9b:	e9 9e 04 00 00       	jmp    842a03e <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x56e>
 8429ba0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8429ba5:	c7 44 24 08 b2 6b 00 	movl   $0x6bb2,0x8(%esp)
 8429bac:	00 
 8429bad:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8429bb4:	08 
 8429bb5:	89 04 24             	mov    %eax,(%esp)
 8429bb8:	e8 c9 5e e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8429bbd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8429bc4:	00 
 8429bc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8429bc9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8429bcc:	89 04 24             	mov    %eax,(%esp)
 8429bcf:	e8 52 f0 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8429bd4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8429bd7:	89 04 24             	mov    %eax,(%esp)
 8429bda:	e8 67 f0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8429bdf:	c7 44 24 04 e2 00 00 	movl   $0xe2,0x4(%esp)
 8429be6:	00 
 8429be7:	89 04 24             	mov    %eax,(%esp)
 8429bea:	e8 67 f0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8429bef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8429bf2:	89 04 24             	mov    %eax,(%esp)
 8429bf5:	e8 4c f0 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8429bfa:	8b 55 10             	mov    0x10(%ebp),%edx
 8429bfd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8429c01:	89 04 24             	mov    %eax,(%esp)
 8429c04:	e8 4d f0 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8429c09:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8429c0c:	89 04 24             	mov    %eax,(%esp)
 8429c0f:	e8 3a f0 c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8429c14:	89 04 24             	mov    %eax,(%esp)
 8429c17:	e8 f0 87 02 00       	call   845240c <_ZN12CStreamGuard11GetInBufferI31SIG_DEATH_TOWER_GET_BEST_RECORDEEPT_v>
 8429c1c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8429c1f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429c22:	89 04 24             	mov    %eax,(%esp)
 8429c25:	e8 42 87 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8429c2a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8429c2d:	89 02                	mov    %eax,(%edx)
 8429c2f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8429c32:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8429c35:	89 50 04             	mov    %edx,0x4(%eax)
 8429c38:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8429c3f:	e9 98 03 00 00       	jmp    8429fdc <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x50c>
 8429c44:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429c47:	89 04 24             	mov    %eax,(%esp)
 8429c4a:	e8 6d a8 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8429c4f:	83 f0 01             	xor    $0x1,%eax
 8429c52:	84 c0                	test   %al,%al
 8429c54:	74 0a                	je     8429c60 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x190>
 8429c56:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429c5b:	e9 d3 03 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429c60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429c63:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429c69:	03 45 f0             	add    -0x10(%ebp),%eax
 8429c6c:	83 c0 0c             	add    $0xc,%eax
 8429c6f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429c73:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8429c7a:	00 
 8429c7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429c7e:	89 04 24             	mov    %eax,(%esp)
 8429c81:	e8 0a cd ce ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8429c86:	83 f0 01             	xor    $0x1,%eax
 8429c89:	84 c0                	test   %al,%al
 8429c8b:	74 0a                	je     8429c97 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x1c7>
 8429c8d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429c92:	e9 9c 03 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429c97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429c9a:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429ca0:	03 45 f0             	add    -0x10(%ebp),%eax
 8429ca3:	83 c0 10             	add    $0x10,%eax
 8429ca6:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 8429cad:	00 
 8429cae:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429cb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8429cb9:	00 
 8429cba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429cbd:	89 04 24             	mov    %eax,(%esp)
 8429cc0:	e8 55 b6 cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8429cc5:	83 f0 01             	xor    $0x1,%eax
 8429cc8:	84 c0                	test   %al,%al
 8429cca:	74 0a                	je     8429cd6 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x206>
 8429ccc:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429cd1:	e9 5d 03 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429cd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429cd9:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429cdf:	83 c0 60             	add    $0x60,%eax
 8429ce2:	03 45 f0             	add    -0x10(%ebp),%eax
 8429ce5:	83 c0 0c             	add    $0xc,%eax
 8429ce8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429cec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8429cf3:	00 
 8429cf4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429cf7:	89 04 24             	mov    %eax,(%esp)
 8429cfa:	e8 f3 85 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429cff:	83 f0 01             	xor    $0x1,%eax
 8429d02:	84 c0                	test   %al,%al
 8429d04:	74 0a                	je     8429d10 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x240>
 8429d06:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429d0b:	e9 23 03 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429d10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429d13:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429d19:	83 c0 60             	add    $0x60,%eax
 8429d1c:	03 45 f0             	add    -0x10(%ebp),%eax
 8429d1f:	83 c0 10             	add    $0x10,%eax
 8429d22:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429d26:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8429d2d:	00 
 8429d2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429d31:	89 04 24             	mov    %eax,(%esp)
 8429d34:	e8 b9 85 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429d39:	83 f0 01             	xor    $0x1,%eax
 8429d3c:	84 c0                	test   %al,%al
 8429d3e:	74 0a                	je     8429d4a <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x27a>
 8429d40:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429d45:	e9 e9 02 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429d4a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8429d4d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8429d50:	69 d2 b0 01 00 00    	imul   $0x1b0,%edx,%edx
 8429d56:	66 c7 44 02 0e 01 00 	movw   $0x1,0xe(%edx,%eax,1)
 8429d5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429d60:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429d66:	83 c0 6c             	add    $0x6c,%eax
 8429d69:	03 45 f0             	add    -0x10(%ebp),%eax
 8429d6c:	83 c0 10             	add    $0x10,%eax
 8429d6f:	c7 44 24 0c 2e 00 00 	movl   $0x2e,0xc(%esp)
 8429d76:	00 
 8429d77:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429d7b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8429d82:	00 
 8429d83:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429d86:	89 04 24             	mov    %eax,(%esp)
 8429d89:	e8 8c b5 cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8429d8e:	83 f0 01             	xor    $0x1,%eax
 8429d91:	84 c0                	test   %al,%al
 8429d93:	74 0a                	je     8429d9f <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x2cf>
 8429d95:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429d9a:	e9 94 02 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429d9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429da2:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429da8:	05 cc 00 00 00       	add    $0xcc,%eax
 8429dad:	03 45 f0             	add    -0x10(%ebp),%eax
 8429db0:	83 c0 0c             	add    $0xc,%eax
 8429db3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429db7:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8429dbe:	00 
 8429dbf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429dc2:	89 04 24             	mov    %eax,(%esp)
 8429dc5:	e8 28 85 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429dca:	83 f0 01             	xor    $0x1,%eax
 8429dcd:	84 c0                	test   %al,%al
 8429dcf:	74 0a                	je     8429ddb <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x30b>
 8429dd1:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429dd6:	e9 58 02 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429ddb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429dde:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429de4:	05 cc 00 00 00       	add    $0xcc,%eax
 8429de9:	03 45 f0             	add    -0x10(%ebp),%eax
 8429dec:	83 c0 10             	add    $0x10,%eax
 8429def:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429df3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8429dfa:	00 
 8429dfb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429dfe:	89 04 24             	mov    %eax,(%esp)
 8429e01:	e8 ec 84 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429e06:	83 f0 01             	xor    $0x1,%eax
 8429e09:	84 c0                	test   %al,%al
 8429e0b:	74 0a                	je     8429e17 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x347>
 8429e0d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429e12:	e9 1c 02 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429e17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429e1a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8429e1d:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429e23:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8429e26:	83 c0 6c             	add    $0x6c,%eax
 8429e29:	66 c7 40 0e 02 00    	movw   $0x2,0xe(%eax)
 8429e2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429e32:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429e38:	05 d8 00 00 00       	add    $0xd8,%eax
 8429e3d:	03 45 f0             	add    -0x10(%ebp),%eax
 8429e40:	83 c0 10             	add    $0x10,%eax
 8429e43:	c7 44 24 0c 45 00 00 	movl   $0x45,0xc(%esp)
 8429e4a:	00 
 8429e4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429e4f:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8429e56:	00 
 8429e57:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429e5a:	89 04 24             	mov    %eax,(%esp)
 8429e5d:	e8 b8 b4 cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8429e62:	83 f0 01             	xor    $0x1,%eax
 8429e65:	84 c0                	test   %al,%al
 8429e67:	74 0a                	je     8429e73 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x3a3>
 8429e69:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429e6e:	e9 c0 01 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429e73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429e76:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429e7c:	05 38 01 00 00       	add    $0x138,%eax
 8429e81:	03 45 f0             	add    -0x10(%ebp),%eax
 8429e84:	83 c0 0c             	add    $0xc,%eax
 8429e87:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429e8b:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8429e92:	00 
 8429e93:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429e96:	89 04 24             	mov    %eax,(%esp)
 8429e99:	e8 54 84 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429e9e:	83 f0 01             	xor    $0x1,%eax
 8429ea1:	84 c0                	test   %al,%al
 8429ea3:	74 0a                	je     8429eaf <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x3df>
 8429ea5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429eaa:	e9 84 01 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429eaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429eb2:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429eb8:	05 38 01 00 00       	add    $0x138,%eax
 8429ebd:	03 45 f0             	add    -0x10(%ebp),%eax
 8429ec0:	83 c0 10             	add    $0x10,%eax
 8429ec3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429ec7:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8429ece:	00 
 8429ecf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429ed2:	89 04 24             	mov    %eax,(%esp)
 8429ed5:	e8 18 84 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429eda:	83 f0 01             	xor    $0x1,%eax
 8429edd:	84 c0                	test   %al,%al
 8429edf:	74 0a                	je     8429eeb <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x41b>
 8429ee1:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429ee6:	e9 48 01 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429eeb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429eee:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8429ef1:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429ef7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8429efa:	05 d8 00 00 00       	add    $0xd8,%eax
 8429eff:	66 c7 40 0e 03 00    	movw   $0x3,0xe(%eax)
 8429f05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429f08:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429f0e:	05 44 01 00 00       	add    $0x144,%eax
 8429f13:	03 45 f0             	add    -0x10(%ebp),%eax
 8429f16:	83 c0 10             	add    $0x10,%eax
 8429f19:	c7 44 24 0c 5c 00 00 	movl   $0x5c,0xc(%esp)
 8429f20:	00 
 8429f21:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429f25:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8429f2c:	00 
 8429f2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429f30:	89 04 24             	mov    %eax,(%esp)
 8429f33:	e8 e2 b3 cf ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8429f38:	83 f0 01             	xor    $0x1,%eax
 8429f3b:	84 c0                	test   %al,%al
 8429f3d:	74 0a                	je     8429f49 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x479>
 8429f3f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429f44:	e9 ea 00 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429f49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429f4c:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429f52:	05 a4 01 00 00       	add    $0x1a4,%eax
 8429f57:	03 45 f0             	add    -0x10(%ebp),%eax
 8429f5a:	83 c0 0c             	add    $0xc,%eax
 8429f5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429f61:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 8429f68:	00 
 8429f69:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429f6c:	89 04 24             	mov    %eax,(%esp)
 8429f6f:	e8 7e 83 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429f74:	83 f0 01             	xor    $0x1,%eax
 8429f77:	84 c0                	test   %al,%al
 8429f79:	74 0a                	je     8429f85 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x4b5>
 8429f7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429f80:	e9 ae 00 00 00       	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429f85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429f88:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429f8e:	05 a4 01 00 00       	add    $0x1a4,%eax
 8429f93:	03 45 f0             	add    -0x10(%ebp),%eax
 8429f96:	83 c0 10             	add    $0x10,%eax
 8429f99:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429f9d:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8429fa4:	00 
 8429fa5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429fa8:	89 04 24             	mov    %eax,(%esp)
 8429fab:	e8 42 83 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8429fb0:	83 f0 01             	xor    $0x1,%eax
 8429fb3:	84 c0                	test   %al,%al
 8429fb5:	74 07                	je     8429fbe <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x4ee>
 8429fb7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429fbc:	eb 75                	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 8429fbe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8429fc1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8429fc4:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 8429fca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8429fcd:	05 44 01 00 00       	add    $0x144,%eax
 8429fd2:	66 c7 40 0e 04 00    	movw   $0x4,0xe(%eax)
 8429fd8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8429fdc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8429fdf:	89 04 24             	mov    %eax,(%esp)
 8429fe2:	e8 85 83 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8429fe7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8429fea:	0f 97 c0             	seta   %al
 8429fed:	84 c0                	test   %al,%al
 8429fef:	0f 85 4f fc ff ff    	jne    8429c44 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x174>
 8429ff5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8429ffa:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8429ffd:	89 54 24 08          	mov    %edx,0x8(%esp)
 842a001:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842a008:	00 
 842a009:	89 04 24             	mov    %eax,(%esp)
 842a00c:	e8 cd 6f 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842a011:	bb 01 00 00 00       	mov    $0x1,%ebx
 842a016:	eb 1b                	jmp    842a033 <_ZN26DB_GetDeathTowerBestRecord8dispatchEiiP6Stream+0x563>
 842a018:	89 d3                	mov    %edx,%ebx
 842a01a:	89 c6                	mov    %eax,%esi
 842a01c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842a01f:	89 04 24             	mov    %eax,(%esp)
 842a022:	e8 ab 28 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a027:	89 f0                	mov    %esi,%eax
 842a029:	89 da                	mov    %ebx,%edx
 842a02b:	89 04 24             	mov    %eax,(%esp)
 842a02e:	e8 1d 97 6b 00       	call   8ae3750 <_Unwind_Resume>
 842a033:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842a036:	89 04 24             	mov    %eax,(%esp)
 842a039:	e8 94 28 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a03e:	89 d8                	mov    %ebx,%eax
 842a040:	83 c4 30             	add    $0x30,%esp
 842a043:	5b                   	pop    %ebx
 842a044:	5e                   	pop    %esi
 842a045:	5d                   	pop    %ebp
 842a046:	c3                   	ret
 842a047:	90                   	nop

```

```c
// DB_GetDeathTowerBestRecord::dispatch @ 0x8429ad0

/* DB_GetDeathTowerBestRecord::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_GetDeathTowerBestRecord::dispatch
          (DB_GetDeathTowerBestRecord *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  undefined4 uVar7;
  CStreamGuard local_24 [8];
  uint local_1c;
  MySQL *local_18;
  SIG_DEATH_TOWER_GET_BEST_RECORD *local_14;
  uint local_10;
  
  pSVar4 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  Stream::operator>>(param_3,&local_1c);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar4);
  MySQL::set_query(local_18,
                   "seLect tower_index, \t\tmember_info_1,stage_1,play_time_1, \t\tmember_info_2,stage_2,play_time_2, \t\tmember_info_3,stage_3,play_time_3, \t\tmember_info_4,stage_4,play_time_4 \t\tfrom charac_tower_record where charac_no=%d limit %d"
                   ,local_1c,5);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (iVar3 = MySQL::get_n_rows(local_18), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = 0;
  }
  else {
    pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6bb2);
    CStreamGuard::CStreamGuard(local_24,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 08429bea to 0842a010 has its CatchHandler @ 0842a018 */
    CStreamGuard::operator<<(pCVar5,0xe2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar5,param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_24);
    local_14 = CStreamGuard::GetInBuffer<SIG_DEATH_TOWER_GET_BEST_RECORD>(pCVar5);
    uVar7 = MySQL::get_n_rows(local_18);
    *(undefined4 *)local_14 = uVar7;
    *(uint *)(local_14 + 4) = local_1c;
    local_10 = 0;
    while (uVar6 = MySQL::get_n_rows(local_18), local_10 < uVar6) {
      cVar2 = MySQL::fetch(local_18);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_ushort(local_18,0,(ushort *)(local_14 + local_10 * 0x1b0 + 0xc));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_binary(local_18,1,local_14 + local_10 * 0x1b0 + 0x10,0x17);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,2,(uint *)(local_14 + local_10 * 0x1b0 + 0x6c));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,3,(uint *)(local_14 + local_10 * 0x1b0 + 0x70));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0xe) = 1;
      cVar2 = MySQL::get_binary(local_18,4,local_14 + local_10 * 0x1b0 + 0x7c,0x2e);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,5,(uint *)(local_14 + local_10 * 0x1b0 + 0xd8));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,6,(uint *)(local_14 + local_10 * 0x1b0 + 0xdc));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0x7a) = 2;
      cVar2 = MySQL::get_binary(local_18,7,local_14 + local_10 * 0x1b0 + 0xe8,0x45);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,8,(uint *)(local_14 + local_10 * 0x1b0 + 0x144));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,9,(uint *)(local_14 + local_10 * 0x1b0 + 0x148));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0xe6) = 3;
      cVar2 = MySQL::get_binary(local_18,10,local_14 + local_10 * 0x1b0 + 0x154,0x5c);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,0xb,(uint *)(local_14 + local_10 * 0x1b0 + 0x1b0));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      cVar2 = MySQL::get_uint(local_18,0xc,(uint *)(local_14 + local_10 * 0x1b0 + 0x1b4));
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a033;
      }
      *(undefined2 *)(local_14 + local_10 * 0x1b0 + 0x152) = 4;
      local_10 = local_10 + 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
    uVar7 = 1;
LAB_0842a033:
    CStreamGuard::~CStreamGuard(local_24);
  }
  return uVar7;
}

```

---

## makeRequest

```asm
// === 0842a048 DB_GetDeathTowerBestRecord::makeRequest  [0x0842a048-0x842a11d] ===
 842a048:	55                   	push   %ebp
 842a049:	89 e5                	mov    %esp,%ebp
 842a04b:	56                   	push   %esi
 842a04c:	53                   	push   %ebx
 842a04d:	83 ec 20             	sub    $0x20,%esp
 842a050:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842a055:	c7 44 24 08 e0 6b 00 	movl   $0x6be0,0x8(%esp)
 842a05c:	00 
 842a05d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842a064:	08 
 842a065:	89 04 24             	mov    %eax,(%esp)
 842a068:	e8 19 5a e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842a06d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842a074:	00 
 842a075:	89 44 24 04          	mov    %eax,0x4(%esp)
 842a079:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a07c:	89 04 24             	mov    %eax,(%esp)
 842a07f:	e8 a2 eb c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842a084:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a087:	89 04 24             	mov    %eax,(%esp)
 842a08a:	e8 b7 eb c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a08f:	c7 44 24 04 e2 00 00 	movl   $0xe2,0x4(%esp)
 842a096:	00 
 842a097:	89 04 24             	mov    %eax,(%esp)
 842a09a:	e8 b7 eb c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a09f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a0a2:	89 04 24             	mov    %eax,(%esp)
 842a0a5:	e8 9c eb c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a0aa:	8b 55 08             	mov    0x8(%ebp),%edx
 842a0ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 842a0b1:	89 04 24             	mov    %eax,(%esp)
 842a0b4:	e8 9d eb c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842a0b9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a0bc:	89 04 24             	mov    %eax,(%esp)
 842a0bf:	e8 82 eb c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842a0c4:	8b 55 0c             	mov    0xc(%ebp),%edx
 842a0c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 842a0cb:	89 04 24             	mov    %eax,(%esp)
 842a0ce:	e8 bf 81 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 842a0d3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842a0d8:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842a0db:	89 54 24 08          	mov    %edx,0x8(%esp)
 842a0df:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842a0e6:	00 
 842a0e7:	89 04 24             	mov    %eax,(%esp)
 842a0ea:	e8 ef 6e 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842a0ef:	eb 1b                	jmp    842a10c <_ZN26DB_GetDeathTowerBestRecord11makeRequestEij+0xc4>
 842a0f1:	89 d3                	mov    %edx,%ebx
 842a0f3:	89 c6                	mov    %eax,%esi
 842a0f5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a0f8:	89 04 24             	mov    %eax,(%esp)
 842a0fb:	e8 d2 27 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a100:	89 f0                	mov    %esi,%eax
 842a102:	89 da                	mov    %ebx,%edx
 842a104:	89 04 24             	mov    %eax,(%esp)
 842a107:	e8 44 96 6b 00       	call   8ae3750 <_Unwind_Resume>
 842a10c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842a10f:	89 04 24             	mov    %eax,(%esp)
 842a112:	e8 bb 27 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842a117:	83 c4 20             	add    $0x20,%esp
 842a11a:	5b                   	pop    %ebx
 842a11b:	5e                   	pop    %esi
 842a11c:	5d                   	pop    %ebp
 842a11d:	c3                   	ret

```

```c
// DB_GetDeathTowerBestRecord::makeRequest @ 0x842a048

/* DB_GetDeathTowerBestRecord::makeRequest(int, unsigned int) */

void DB_GetDeathTowerBestRecord::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6be0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0842a09a to 0842a0ee has its CatchHandler @ 0842a0f1 */
  CStreamGuard::operator<<(pCVar2,0xe2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

