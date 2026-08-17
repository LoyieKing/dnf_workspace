# DB_UpdatePvPGrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08428b26 DB_UpdatePvPGrade::dispatch  [0x08428b26-0x842939f] ===
 8428b26:	55                   	push   %ebp
 8428b27:	89 e5                	mov    %esp,%ebp
 8428b29:	57                   	push   %edi
 8428b2a:	56                   	push   %esi
 8428b2b:	53                   	push   %ebx
 8428b2c:	81 ec 4c 61 00 00    	sub    $0x614c,%esp
 8428b32:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8428b37:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8428b3e:	00 
 8428b3f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8428b46:	00 
 8428b47:	89 04 24             	mov    %eax,(%esp)
 8428b4a:	e8 ef c6 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8428b4f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8428b52:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 8428b57:	89 04 24             	mov    %eax,(%esp)
 8428b5a:	e8 09 4a 02 00       	call   844d568 <_ZN11RefPvpGrade19getPvPRankRateGradeEv>
 8428b5f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428b63:	c7 44 24 04 44 f2 c4 	movl   $0x8c4f244,0x4(%esp)
 8428b6a:	08 
 8428b6b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428b6e:	89 04 24             	mov    %eax,(%esp)
 8428b71:	e8 4a b6 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8428b76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8428b7d:	00 
 8428b7e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428b81:	89 04 24             	mov    %eax,(%esp)
 8428b84:	e8 9d b7 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8428b89:	83 f0 01             	xor    $0x1,%eax
 8428b8c:	84 c0                	test   %al,%al
 8428b8e:	75 0f                	jne    8428b9f <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x79>
 8428b90:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428b93:	89 04 24             	mov    %eax,(%esp)
 8428b96:	e8 d1 97 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8428b9b:	85 c0                	test   %eax,%eax
 8428b9d:	75 07                	jne    8428ba6 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x80>
 8428b9f:	b8 01 00 00 00       	mov    $0x1,%eax
 8428ba4:	eb 05                	jmp    8428bab <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x85>
 8428ba6:	b8 00 00 00 00       	mov    $0x0,%eax
 8428bab:	84 c0                	test   %al,%al
 8428bad:	74 0a                	je     8428bb9 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x93>
 8428baf:	bb 00 00 00 00       	mov    $0x0,%ebx
 8428bb4:	e9 d9 07 00 00       	jmp    8429392 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x86c>
 8428bb9:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8428bc0:	e8 d9 30 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8428bc5:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8428bc8:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8428bce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428bd2:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8428bd5:	89 04 24             	mov    %eax,(%esp)
 8428bd8:	e8 83 57 c5 ff       	call   807e360 <localtime_r@plt>
 8428bdd:	c7 85 24 ff ff ff 01 	movl   $0x1,-0xdc(%ebp)
 8428be4:	00 00 00 
 8428be7:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
 8428bee:	00 00 00 
 8428bf1:	c7 85 1c ff ff ff 00 	movl   $0x0,-0xe4(%ebp)
 8428bf8:	00 00 00 
 8428bfb:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 8428c01:	89 04 24             	mov    %eax,(%esp)
 8428c04:	e8 17 5c c5 ff       	call   807e820 <mktime@plt>
 8428c09:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8428c0c:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8428c0f:	2d 80 51 01 00       	sub    $0x15180,%eax
 8428c14:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8428c17:	8d 45 88             	lea    -0x78(%ebp),%eax
 8428c1a:	89 04 24             	mov    %eax,(%esp)
 8428c1d:	e8 82 96 02 00       	call   84522a4 <_ZNSt6vectorI16stPvPTempTable_tSaIS0_EEC1Ev>
 8428c22:	8d 9d 70 ff ff ff    	lea    -0x90(%ebp),%ebx
 8428c28:	89 df                	mov    %ebx,%edi
 8428c2a:	be 01 00 00 00       	mov    $0x1,%esi
 8428c2f:	eb 0e                	jmp    8428c3f <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x119>
 8428c31:	89 3c 24             	mov    %edi,(%esp)
 8428c34:	e8 73 55 c6 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8428c39:	83 c7 0c             	add    $0xc,%edi
 8428c3c:	83 ee 01             	sub    $0x1,%esi
 8428c3f:	83 fe ff             	cmp    $0xffffffff,%esi
 8428c42:	0f 95 c0             	setne  %al
 8428c45:	84 c0                	test   %al,%al
 8428c47:	75 e8                	jne    8428c31 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x10b>
 8428c49:	eb 3f                	jmp    8428c8a <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x164>
 8428c4b:	89 d7                	mov    %edx,%edi
 8428c4d:	89 85 d0 9e ff ff    	mov    %eax,-0x6130(%ebp)
 8428c53:	85 db                	test   %ebx,%ebx
 8428c55:	74 26                	je     8428c7d <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x157>
 8428c57:	b8 01 00 00 00       	mov    $0x1,%eax
 8428c5c:	29 f0                	sub    %esi,%eax
 8428c5e:	89 c2                	mov    %eax,%edx
 8428c60:	89 d0                	mov    %edx,%eax
 8428c62:	01 c0                	add    %eax,%eax
 8428c64:	01 d0                	add    %edx,%eax
 8428c66:	c1 e0 02             	shl    $0x2,%eax
 8428c69:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8428c6c:	39 de                	cmp    %ebx,%esi
 8428c6e:	74 0d                	je     8428c7d <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x157>
 8428c70:	83 ee 0c             	sub    $0xc,%esi
 8428c73:	89 34 24             	mov    %esi,(%esp)
 8428c76:	e8 5f b1 c5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8428c7b:	eb ef                	jmp    8428c6c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x146>
 8428c7d:	8b 85 d0 9e ff ff    	mov    -0x6130(%ebp),%eax
 8428c83:	89 fa                	mov    %edi,%edx
 8428c85:	e9 e2 06 00 00       	jmp    842936c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x846>
 8428c8a:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 8428c8f:	89 04 24             	mov    %eax,(%esp)
 8428c92:	e8 b5 48 02 00       	call   844d54c <_ZN11RefPvpGrade18getPvPExpLossGradeEv>
 8428c97:	8b 15 3c f7 41 09    	mov    0x941f73c,%edx
 8428c9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428ca1:	89 14 24             	mov    %edx,(%esp)
 8428ca4:	e8 89 bb 1a 00       	call   85d4832 <_ZNK11RefPvpGrade11GetPvpPointEi>
 8428ca9:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8428caf:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8428cb6:	e9 d7 01 00 00       	jmp    8428e92 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x36c>
 8428cbb:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428cbe:	89 04 24             	mov    %eax,(%esp)
 8428cc1:	e8 f6 b7 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8428cc6:	83 f0 01             	xor    $0x1,%eax
 8428cc9:	84 c0                	test   %al,%al
 8428ccb:	74 0a                	je     8428cd7 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x1b1>
 8428ccd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8428cd2:	e9 75 06 00 00       	jmp    842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 8428cd7:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8428cdd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428ce1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8428ce8:	00 
 8428ce9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428cec:	89 04 24             	mov    %eax,(%esp)
 8428cef:	e8 fe 95 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8428cf4:	83 f0 01             	xor    $0x1,%eax
 8428cf7:	84 c0                	test   %al,%al
 8428cf9:	74 0a                	je     8428d05 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x1df>
 8428cfb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8428d00:	e9 47 06 00 00       	jmp    842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 8428d05:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8428d0b:	83 c0 04             	add    $0x4,%eax
 8428d0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428d12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8428d19:	00 
 8428d1a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428d1d:	89 04 24             	mov    %eax,(%esp)
 8428d20:	e8 07 dc ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8428d25:	83 f0 01             	xor    $0x1,%eax
 8428d28:	84 c0                	test   %al,%al
 8428d2a:	74 0a                	je     8428d36 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x210>
 8428d2c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8428d31:	e9 16 06 00 00       	jmp    842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 8428d36:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8428d3c:	83 c0 08             	add    $0x8,%eax
 8428d3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428d43:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8428d4a:	00 
 8428d4b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428d4e:	89 04 24             	mov    %eax,(%esp)
 8428d51:	e8 d6 db ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8428d56:	83 f0 01             	xor    $0x1,%eax
 8428d59:	84 c0                	test   %al,%al
 8428d5b:	74 0a                	je     8428d67 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x241>
 8428d5d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8428d62:	e9 e5 05 00 00       	jmp    842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 8428d67:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8428d6d:	83 c0 0c             	add    $0xc,%eax
 8428d70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428d74:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8428d7b:	00 
 8428d7c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428d7f:	89 04 24             	mov    %eax,(%esp)
 8428d82:	e8 6b 95 cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8428d87:	83 f0 01             	xor    $0x1,%eax
 8428d8a:	84 c0                	test   %al,%al
 8428d8c:	74 0a                	je     8428d98 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x272>
 8428d8e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8428d93:	e9 b4 05 00 00       	jmp    842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 8428d98:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 8428d9d:	89 04 24             	mov    %eax,(%esp)
 8428da0:	e8 a7 47 02 00       	call   844d54c <_ZN11RefPvpGrade18getPvPExpLossGradeEv>
 8428da5:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8428dab:	39 d0                	cmp    %edx,%eax
 8428dad:	0f 9e c0             	setle  %al
 8428db0:	84 c0                	test   %al,%al
 8428db2:	0f 84 c1 00 00 00    	je     8428e79 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x353>
 8428db8:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 8428dbe:	3b 45 b4             	cmp    -0x4c(%ebp),%eax
 8428dc1:	0f 8f b2 00 00 00    	jg     8428e79 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x353>
 8428dc7:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 8428dcd:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8428dd3:	39 c2                	cmp    %eax,%edx
 8428dd5:	0f 8e 9e 00 00 00    	jle    8428e79 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x353>
 8428ddb:	8b 9d 50 ff ff ff    	mov    -0xb0(%ebp),%ebx
 8428de1:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 8428de6:	89 04 24             	mov    %eax,(%esp)
 8428de9:	e8 6c 47 02 00       	call   844d55a <_ZN11RefPvpGrade16getPvPExpLossExpEv>
 8428dee:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 8428df4:	01 d0                	add    %edx,%eax
 8428df6:	39 c3                	cmp    %eax,%ebx
 8428df8:	0f 9f c0             	setg   %al
 8428dfb:	84 c0                	test   %al,%al
 8428dfd:	74 20                	je     8428e1f <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x2f9>
 8428dff:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8428e05:	89 45 98             	mov    %eax,-0x68(%ebp)
 8428e08:	8d 45 98             	lea    -0x68(%ebp),%eax
 8428e0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428e0f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8428e15:	89 04 24             	mov    %eax,(%esp)
 8428e18:	e8 d1 53 c6 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8428e1d:	eb 21                	jmp    8428e40 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x31a>
 8428e1f:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8428e25:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8428e28:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8428e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428e2f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8428e35:	83 c0 0c             	add    $0xc,%eax
 8428e38:	89 04 24             	mov    %eax,(%esp)
 8428e3b:	e8 ae 53 c6 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 8428e40:	8b 9d 50 ff ff ff    	mov    -0xb0(%ebp),%ebx
 8428e46:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 8428e4b:	89 04 24             	mov    %eax,(%esp)
 8428e4e:	e8 07 47 02 00       	call   844d55a <_ZN11RefPvpGrade16getPvPExpLossExpEv>
 8428e53:	89 da                	mov    %ebx,%edx
 8428e55:	29 c2                	sub    %eax,%edx
 8428e57:	89 d0                	mov    %edx,%eax
 8428e59:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8428e5c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8428e5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428e63:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8428e69:	89 04 24             	mov    %eax,(%esp)
 8428e6c:	e8 a7 53 c6 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8428e71:	8b 00                	mov    (%eax),%eax
 8428e73:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8428e79:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8428e7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428e83:	8d 45 88             	lea    -0x78(%ebp),%eax
 8428e86:	89 04 24             	mov    %eax,(%esp)
 8428e89:	e8 88 94 02 00       	call   8452316 <_ZNSt6vectorI16stPvPTempTable_tSaIS0_EE9push_backERKS0_>
 8428e8e:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8428e92:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8428e95:	89 04 24             	mov    %eax,(%esp)
 8428e98:	e8 cf 94 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8428e9d:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 8428ea0:	0f 97 c0             	seta   %al
 8428ea3:	84 c0                	test   %al,%al
 8428ea5:	0f 85 10 fe ff ff    	jne    8428cbb <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x195>
 8428eab:	8d 45 88             	lea    -0x78(%ebp),%eax
 8428eae:	89 04 24             	mov    %eax,(%esp)
 8428eb1:	e8 d4 94 02 00       	call   845238a <_ZNKSt6vectorI16stPvPTempTable_tSaIS0_EE4sizeEv>
 8428eb6:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8428eb9:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 8428ebe:	89 04 24             	mov    %eax,(%esp)
 8428ec1:	e8 b0 46 02 00       	call   844d576 <_ZN11RefPvpGrade14getPvPRankRateEv>
 8428ec6:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8428ec9:	c7 45 c0 04 00 00 00 	movl   $0x4,-0x40(%ebp)
 8428ed0:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
 8428ed7:	00 00 00 
 8428eda:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
 8428ee1:	00 00 00 
 8428ee4:	c7 85 60 ff ff ff 00 	movl   $0x0,-0xa0(%ebp)
 8428eeb:	00 00 00 
 8428eee:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 8428ef5:	00 00 00 
 8428ef8:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 8428eff:	00 00 00 
 8428f02:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8428f09:	eb 43                	jmp    8428f4e <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x428>
 8428f0b:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 8428f0e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8428f11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428f15:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8428f18:	89 04 24             	mov    %eax,(%esp)
 8428f1b:	e8 54 16 cc ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 8428f20:	8b 00                	mov    (%eax),%eax
 8428f22:	0f af 45 b8          	imul   -0x48(%ebp),%eax
 8428f26:	8d 88 f4 01 00 00    	lea    0x1f4(%eax),%ecx
 8428f2c:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8428f31:	89 c8                	mov    %ecx,%eax
 8428f33:	f7 ea                	imul   %edx
 8428f35:	c1 fa 06             	sar    $0x6,%edx
 8428f38:	89 c8                	mov    %ecx,%eax
 8428f3a:	c1 f8 1f             	sar    $0x1f,%eax
 8428f3d:	89 d1                	mov    %edx,%ecx
 8428f3f:	29 c1                	sub    %eax,%ecx
 8428f41:	89 c8                	mov    %ecx,%eax
 8428f43:	89 84 9d 58 ff ff ff 	mov    %eax,-0xa8(%ebp,%ebx,4)
 8428f4a:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8428f4e:	83 7d d4 04          	cmpl   $0x4,-0x2c(%ebp)
 8428f52:	0f 9e c0             	setle  %al
 8428f55:	84 c0                	test   %al,%al
 8428f57:	75 b2                	jne    8428f0b <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x3e5>
 8428f59:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 8428f60:	eb 5a                	jmp    8428fbc <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x496>
 8428f62:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8428f65:	83 e8 01             	sub    $0x1,%eax
 8428f68:	8b 84 85 58 ff ff ff 	mov    -0xa8(%ebp,%eax,4),%eax
 8428f6f:	85 c0                	test   %eax,%eax
 8428f71:	7e 45                	jle    8428fb8 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x492>
 8428f73:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8428f76:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8428f79:	8b 94 85 58 ff ff ff 	mov    -0xa8(%ebp,%eax,4),%edx
 8428f80:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8428f83:	83 e8 01             	sub    $0x1,%eax
 8428f86:	8b 84 85 58 ff ff ff 	mov    -0xa8(%ebp,%eax,4),%eax
 8428f8d:	89 d1                	mov    %edx,%ecx
 8428f8f:	29 c1                	sub    %eax,%ecx
 8428f91:	89 c8                	mov    %ecx,%eax
 8428f93:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8428f96:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
 8428f9d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8428fa0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8428fa4:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8428fa7:	89 04 24             	mov    %eax,(%esp)
 8428faa:	e8 69 52 c6 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8428faf:	8b 00                	mov    (%eax),%eax
 8428fb1:	89 84 9d 58 ff ff ff 	mov    %eax,-0xa8(%ebp,%ebx,4)
 8428fb8:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8428fbc:	83 7d d8 04          	cmpl   $0x4,-0x28(%ebp)
 8428fc0:	0f 9e c0             	setle  %al
 8428fc3:	84 c0                	test   %al,%al
 8428fc5:	75 9b                	jne    8428f62 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x43c>
 8428fc7:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 8428fcb:	74 14                	je     8428fe1 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x4bb>
 8428fcd:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8428fd3:	85 c0                	test   %eax,%eax
 8428fd5:	75 0a                	jne    8428fe1 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x4bb>
 8428fd7:	c7 85 68 ff ff ff 01 	movl   $0x1,-0x98(%ebp)
 8428fde:	00 00 00 
 8428fe1:	8d 85 e0 9e ff ff    	lea    -0x6120(%ebp),%eax
 8428fe7:	ba 00 60 00 00       	mov    $0x6000,%edx
 8428fec:	89 54 24 08          	mov    %edx,0x8(%esp)
 8428ff0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8428ff7:	00 
 8428ff8:	89 04 24             	mov    %eax,(%esp)
 8428ffb:	e8 c0 4c c5 ff       	call   807dcc0 <memset@plt>
 8429000:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8429006:	89 04 24             	mov    %eax,(%esp)
 8429009:	e8 52 39 cf ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 842900e:	83 f0 01             	xor    $0x1,%eax
 8429011:	84 c0                	test   %al,%al
 8429013:	74 66                	je     842907b <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x555>
 8429015:	8d 85 e0 9e ff ff    	lea    -0x6120(%ebp),%eax
 842901b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842901f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8429025:	89 04 24             	mov    %eax,(%esp)
 8429028:	e8 d5 69 fd ff       	call   83ffa02 <_Z15getList2inQueryRKSt6vectorIiSaIiEEPc>
 842902d:	89 c3                	mov    %eax,%ebx
 842902f:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 8429034:	89 04 24             	mov    %eax,(%esp)
 8429037:	e8 1e 45 02 00       	call   844d55a <_ZN11RefPvpGrade16getPvPExpLossExpEv>
 842903c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8429040:	89 44 24 08          	mov    %eax,0x8(%esp)
 8429044:	c7 44 24 04 d8 f2 c4 	movl   $0x8c4f2d8,0x4(%esp)
 842904b:	08 
 842904c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 842904f:	89 04 24             	mov    %eax,(%esp)
 8429052:	e8 69 b1 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8429057:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842905e:	00 
 842905f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8429062:	89 04 24             	mov    %eax,(%esp)
 8429065:	e8 bc b2 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842906a:	83 f0 01             	xor    $0x1,%eax
 842906d:	84 c0                	test   %al,%al
 842906f:	74 0a                	je     842907b <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x555>
 8429071:	bb 00 00 00 00       	mov    $0x0,%ebx
 8429076:	e9 d1 02 00 00       	jmp    842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 842907b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8429081:	83 c0 0c             	add    $0xc,%eax
 8429084:	89 04 24             	mov    %eax,(%esp)
 8429087:	e8 d4 38 cf ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 842908c:	83 f0 01             	xor    $0x1,%eax
 842908f:	84 c0                	test   %al,%al
 8429091:	74 60                	je     84290f3 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x5cd>
 8429093:	8d 85 e0 9e ff ff    	lea    -0x6120(%ebp),%eax
 8429099:	89 44 24 04          	mov    %eax,0x4(%esp)
 842909d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84290a3:	83 c0 0c             	add    $0xc,%eax
 84290a6:	89 04 24             	mov    %eax,(%esp)
 84290a9:	e8 54 69 fd ff       	call   83ffa02 <_Z15getList2inQueryRKSt6vectorIiSaIiEEPc>
 84290ae:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 84290b4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84290b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84290bc:	c7 44 24 04 18 f3 c4 	movl   $0x8c4f318,0x4(%esp)
 84290c3:	08 
 84290c4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84290c7:	89 04 24             	mov    %eax,(%esp)
 84290ca:	e8 f1 b0 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84290cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84290d6:	00 
 84290d7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84290da:	89 04 24             	mov    %eax,(%esp)
 84290dd:	e8 44 b2 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84290e2:	83 f0 01             	xor    $0x1,%eax
 84290e5:	84 c0                	test   %al,%al
 84290e7:	74 0a                	je     84290f3 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x5cd>
 84290e9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84290ee:	e9 59 02 00 00       	jmp    842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 84290f3:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 84290fa:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 84290fd:	8b 84 85 58 ff ff ff 	mov    -0xa8(%ebp,%eax,4),%eax
 8429104:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8429107:	8d 9d e0 fe ff ff    	lea    -0x120(%ebp),%ebx
 842910d:	89 df                	mov    %ebx,%edi
 842910f:	be 04 00 00 00       	mov    $0x4,%esi
 8429114:	eb 0e                	jmp    8429124 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x5fe>
 8429116:	89 3c 24             	mov    %edi,(%esp)
 8429119:	e8 8e 50 c6 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 842911e:	83 c7 0c             	add    $0xc,%edi
 8429121:	83 ee 01             	sub    $0x1,%esi
 8429124:	83 fe ff             	cmp    $0xffffffff,%esi
 8429127:	0f 95 c0             	setne  %al
 842912a:	84 c0                	test   %al,%al
 842912c:	75 e8                	jne    8429116 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x5f0>
 842912e:	eb 3f                	jmp    842916f <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x649>
 8429130:	89 d7                	mov    %edx,%edi
 8429132:	89 85 d4 9e ff ff    	mov    %eax,-0x612c(%ebp)
 8429138:	85 db                	test   %ebx,%ebx
 842913a:	74 26                	je     8429162 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x63c>
 842913c:	b8 04 00 00 00       	mov    $0x4,%eax
 8429141:	29 f0                	sub    %esi,%eax
 8429143:	89 c2                	mov    %eax,%edx
 8429145:	89 d0                	mov    %edx,%eax
 8429147:	01 c0                	add    %eax,%eax
 8429149:	01 d0                	add    %edx,%eax
 842914b:	c1 e0 02             	shl    $0x2,%eax
 842914e:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 8429151:	39 de                	cmp    %ebx,%esi
 8429153:	74 0d                	je     8429162 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x63c>
 8429155:	83 ee 0c             	sub    $0xc,%esi
 8429158:	89 34 24             	mov    %esi,(%esp)
 842915b:	e8 7a ac c5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8429160:	eb ef                	jmp    8429151 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x62b>
 8429162:	8b 85 d4 9e ff ff    	mov    -0x612c(%ebp),%eax
 8429168:	89 fa                	mov    %edi,%edx
 842916a:	e9 b3 01 00 00       	jmp    8429322 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x7fc>
 842916f:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8429176:	eb 7b                	jmp    84291f3 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x6cd>
 8429178:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 842917c:	75 32                	jne    84291b0 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x68a>
 842917e:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8429182:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8429186:	83 7d c4 05          	cmpl   $0x5,-0x3c(%ebp)
 842918a:	75 06                	jne    8429192 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x66c>
 842918c:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 8429190:	eb 18                	jmp    84291aa <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x684>
 8429192:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8429195:	8b 84 85 58 ff ff ff 	mov    -0xa8(%ebp,%eax,4),%eax
 842919c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 842919f:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 84291a3:	0f 94 c0             	sete   %al
 84291a6:	84 c0                	test   %al,%al
 84291a8:	75 d8                	jne    8429182 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x65c>
 84291aa:	80 7d e3 00          	cmpb   $0x0,-0x1d(%ebp)
 84291ae:	75 5e                	jne    842920e <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x6e8>
 84291b0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84291b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84291b7:	8d 45 88             	lea    -0x78(%ebp),%eax
 84291ba:	89 04 24             	mov    %eax,(%esp)
 84291bd:	e8 e4 91 02 00       	call   84523a6 <_ZNSt6vectorI16stPvPTempTable_tSaIS0_EEixEj>
 84291c2:	8b 00                	mov    (%eax),%eax
 84291c4:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84291c7:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 84291ca:	8d 8d e0 fe ff ff    	lea    -0x120(%ebp),%ecx
 84291d0:	89 d0                	mov    %edx,%eax
 84291d2:	01 c0                	add    %eax,%eax
 84291d4:	01 d0                	add    %edx,%eax
 84291d6:	c1 e0 02             	shl    $0x2,%eax
 84291d9:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 84291dc:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84291df:	89 44 24 04          	mov    %eax,0x4(%esp)
 84291e3:	89 14 24             	mov    %edx,(%esp)
 84291e6:	e8 03 50 c6 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 84291eb:	83 6d c8 01          	subl   $0x1,-0x38(%ebp)
 84291ef:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84291f3:	8d 45 88             	lea    -0x78(%ebp),%eax
 84291f6:	89 04 24             	mov    %eax,(%esp)
 84291f9:	e8 8c 91 02 00       	call   845238a <_ZNKSt6vectorI16stPvPTempTable_tSaIS0_EE4sizeEv>
 84291fe:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8429201:	0f 97 c0             	seta   %al
 8429204:	84 c0                	test   %al,%al
 8429206:	0f 85 6c ff ff ff    	jne    8429178 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x652>
 842920c:	eb 01                	jmp    842920f <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x6e9>
 842920e:	90                   	nop
 842920f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8429216:	e8 83 2a ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 842921b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 842921e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8429225:	e9 98 00 00 00       	jmp    84292c2 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x79c>
 842922a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842922d:	8d 8d e0 fe ff ff    	lea    -0x120(%ebp),%ecx
 8429233:	89 d0                	mov    %edx,%eax
 8429235:	01 c0                	add    %eax,%eax
 8429237:	01 d0                	add    %edx,%eax
 8429239:	c1 e0 02             	shl    $0x2,%eax
 842923c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 842923f:	89 04 24             	mov    %eax,(%esp)
 8429242:	e8 19 37 cf ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 8429247:	84 c0                	test   %al,%al
 8429249:	75 72                	jne    84292bd <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x797>
 842924b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842924e:	8d 8d e0 fe ff ff    	lea    -0x120(%ebp),%ecx
 8429254:	89 d0                	mov    %edx,%eax
 8429256:	01 c0                	add    %eax,%eax
 8429258:	01 d0                	add    %edx,%eax
 842925a:	c1 e0 02             	shl    $0x2,%eax
 842925d:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 8429260:	8d 85 e0 9e ff ff    	lea    -0x6120(%ebp),%eax
 8429266:	89 44 24 04          	mov    %eax,0x4(%esp)
 842926a:	89 14 24             	mov    %edx,(%esp)
 842926d:	e8 90 67 fd ff       	call   83ffa02 <_Z15getList2inQueryRKSt6vectorIiSaIiEEPc>
 8429272:	ba 05 00 00 00       	mov    $0x5,%edx
 8429277:	2b 55 e4             	sub    -0x1c(%ebp),%edx
 842927a:	89 44 24 10          	mov    %eax,0x10(%esp)
 842927e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8429281:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8429285:	89 54 24 08          	mov    %edx,0x8(%esp)
 8429289:	c7 44 24 04 50 f3 c4 	movl   $0x8c4f350,0x4(%esp)
 8429290:	08 
 8429291:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8429294:	89 04 24             	mov    %eax,(%esp)
 8429297:	e8 24 af fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842929c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84292a3:	00 
 84292a4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84292a7:	89 04 24             	mov    %eax,(%esp)
 84292aa:	e8 77 b0 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84292af:	83 f0 01             	xor    $0x1,%eax
 84292b2:	84 c0                	test   %al,%al
 84292b4:	74 08                	je     84292be <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x798>
 84292b6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84292bb:	eb 45                	jmp    8429302 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x7dc>
 84292bd:	90                   	nop
 84292be:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84292c2:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 84292c6:	0f 9e c0             	setle  %al
 84292c9:	84 c0                	test   %al,%al
 84292cb:	0f 85 59 ff ff ff    	jne    842922a <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x704>
 84292d1:	bb 01 00 00 00       	mov    $0x1,%ebx
 84292d6:	eb 2a                	jmp    8429302 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x7dc>
 84292d8:	89 d6                	mov    %edx,%esi
 84292da:	89 c7                	mov    %eax,%edi
 84292dc:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 84292e2:	8d 58 3c             	lea    0x3c(%eax),%ebx
 84292e5:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 84292eb:	39 c3                	cmp    %eax,%ebx
 84292ed:	74 0d                	je     84292fc <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x7d6>
 84292ef:	83 eb 0c             	sub    $0xc,%ebx
 84292f2:	89 1c 24             	mov    %ebx,(%esp)
 84292f5:	e8 e0 aa c5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 84292fa:	eb e9                	jmp    84292e5 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x7bf>
 84292fc:	89 f8                	mov    %edi,%eax
 84292fe:	89 f2                	mov    %esi,%edx
 8429300:	eb 20                	jmp    8429322 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x7fc>
 8429302:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8429308:	8d 70 3c             	lea    0x3c(%eax),%esi
 842930b:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8429311:	39 c6                	cmp    %eax,%esi
 8429313:	74 37                	je     842934c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x826>
 8429315:	83 ee 0c             	sub    $0xc,%esi
 8429318:	89 34 24             	mov    %esi,(%esp)
 842931b:	e8 ba aa c5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8429320:	eb e9                	jmp    842930b <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x7e5>
 8429322:	89 d6                	mov    %edx,%esi
 8429324:	89 c7                	mov    %eax,%edi
 8429326:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 842932c:	8d 58 18             	lea    0x18(%eax),%ebx
 842932f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8429335:	39 c3                	cmp    %eax,%ebx
 8429337:	74 0d                	je     8429346 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x820>
 8429339:	83 eb 0c             	sub    $0xc,%ebx
 842933c:	89 1c 24             	mov    %ebx,(%esp)
 842933f:	e8 96 aa c5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8429344:	eb e9                	jmp    842932f <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x809>
 8429346:	89 f8                	mov    %edi,%eax
 8429348:	89 f2                	mov    %esi,%edx
 842934a:	eb 20                	jmp    842936c <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x846>
 842934c:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8429352:	8d 70 18             	lea    0x18(%eax),%esi
 8429355:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 842935b:	39 c6                	cmp    %eax,%esi
 842935d:	74 28                	je     8429387 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x861>
 842935f:	83 ee 0c             	sub    $0xc,%esi
 8429362:	89 34 24             	mov    %esi,(%esp)
 8429365:	e8 70 aa c5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 842936a:	eb e9                	jmp    8429355 <_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream+0x82f>
 842936c:	89 d3                	mov    %edx,%ebx
 842936e:	89 c6                	mov    %eax,%esi
 8429370:	8d 45 88             	lea    -0x78(%ebp),%eax
 8429373:	89 04 24             	mov    %eax,(%esp)
 8429376:	e8 3d 8f 02 00       	call   84522b8 <_ZNSt6vectorI16stPvPTempTable_tSaIS0_EED1Ev>
 842937b:	89 f0                	mov    %esi,%eax
 842937d:	89 da                	mov    %ebx,%edx
 842937f:	89 04 24             	mov    %eax,(%esp)
 8429382:	e8 c9 a3 6b 00       	call   8ae3750 <_Unwind_Resume>
 8429387:	8d 45 88             	lea    -0x78(%ebp),%eax
 842938a:	89 04 24             	mov    %eax,(%esp)
 842938d:	e8 26 8f 02 00       	call   84522b8 <_ZNSt6vectorI16stPvPTempTable_tSaIS0_EED1Ev>
 8429392:	89 d8                	mov    %ebx,%eax
 8429394:	81 c4 4c 61 00 00    	add    $0x614c,%esp
 842939a:	5b                   	pop    %ebx
 842939b:	5e                   	pop    %esi
 842939c:	5f                   	pop    %edi
 842939d:	5d                   	pop    %ebp
 842939e:	c3                   	ret
 842939f:	90                   	nop

```

```c
// DB_UpdatePvPGrade::dispatch @ 0x8428b26

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DB_UpdatePvPGrade::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPGrade::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  tm *ptVar10;
  vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>> *this;
  vector<int,std::allocator<int>> *this_00;
  char local_6124 [24576];
  tm local_124;
  tm local_e8;
  uint local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac [6];
  vector<int,std::allocator<int>> local_94 [12];
  vector<int,std::allocator<int>> avStack_88 [12];
  vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>> local_7c [12];
  time_t local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60 [3];
  MySQL *local_54;
  int local_50;
  int local_4c;
  vector<int,std::allocator<int>> *local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  char local_21;
  int local_20;
  
  local_54 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = RefPvpGrade::getPvPRankRateGrade(GlobalData::s_ref_pvp_grade);
  MySQL::set_query(local_54,
                   "seLect charac_no,pvp_grade,pvp_point,unix_timestamp(last_play_time) from pvp_grade_expand where pvp_grade>=%d order by pvp_point desc limit 1500"
                   ,uVar3);
  cVar2 = MySQL::exec(local_54,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_54), iVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  local_70 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_70,&local_e8);
  local_e8.tm_hour = 1;
  local_e8.tm_min = 0;
  local_e8.tm_sec = 0;
  local_70 = mktime(&local_e8);
  local_50 = local_70 + -0x15180;
  std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::vector(local_7c);
  this_00 = local_94;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 08428c34 to 08428c38 has its CatchHandler @ 08428c4b */
    std::vector<int,std::allocator<int>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  iVar4 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
                    /* try { // try from 08428ca4 to 084290e1 has its CatchHandler @ 08429322 */
  local_ac[5] = RefPvpGrade::GetPvpPoint(GlobalData::s_ref_pvp_grade,iVar4);
  local_34 = 0;
  while (uVar6 = MySQL::get_n_rows(local_54), local_34 < uVar6) {
    cVar2 = MySQL::fetch(local_54);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_uint(local_54,0,&local_bc);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_int(local_54,1,&local_b8);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_int(local_54,2,&local_b4);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_uint(local_54,3,&local_b0);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    iVar5 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
    iVar4 = local_b4;
    if (((iVar5 <= local_b8) && ((int)local_b0 <= local_50)) && (local_ac[5] < local_b4)) {
      iVar5 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
      if (iVar5 + local_ac[5] < iVar4) {
        local_6c = local_bc;
        std::vector<int,std::allocator<int>>::push_back(local_94,(int *)&local_6c);
      }
      else {
        local_68 = local_bc;
        std::vector<int,std::allocator<int>>::push_back(avStack_88,(int *)&local_68);
      }
      iVar4 = local_b4;
      local_64 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
      local_64 = iVar4 - local_64;
      piVar7 = std::max<int>(local_ac + 5,&local_64);
      local_b4 = *piVar7;
    }
    std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::push_back
              (local_7c,(stPvPTempTable_t *)&local_bc);
    local_34 = local_34 + 1;
  }
  local_4c = std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::size(local_7c);
  local_48 = (vector<int,std::allocator<int>> *)
             RefPvpGrade::getPvPRankRate(GlobalData::s_ref_pvp_grade);
  local_44 = 4;
  local_ac[0] = 0;
  local_ac[1] = 0;
  local_ac[2] = 0;
  local_ac[3] = 0;
  local_ac[4] = 0;
  for (local_30 = 0; uVar6 = local_30, (int)local_30 < 5; local_30 = local_30 + 1) {
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_48,local_30);
    local_ac[uVar6] = (*piVar7 * local_4c + 500) / 1000;
  }
  for (local_2c = 1; iVar4 = local_2c, local_2c < 5; local_2c = local_2c + 1) {
    if (0 < local_ac[local_2c + -1]) {
      local_60[0] = local_ac[local_2c] - local_ac[local_2c + -1];
      local_60[1] = 1;
      piVar7 = std::max<int>(local_60 + 1,local_60);
      local_ac[iVar4] = *piVar7;
    }
  }
  if ((local_4c != 0) && (local_ac[3] == 0)) {
    local_ac[4] = 1;
  }
  memset(local_6124,0,0x6000);
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 != '\x01') {
    uVar3 = getList2inQuery((vector *)local_94,local_6124);
    uVar8 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
    MySQL::set_query(local_54,"upDate pvp_result set pvp_point=pvp_point-%d where charac_no %s",
                     uVar8,uVar3);
    cVar2 = MySQL::exec(local_54,true);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 != '\x01') {
    uVar3 = getList2inQuery((vector *)avStack_88,local_6124);
    MySQL::set_query(local_54,"upDate pvp_result set pvp_point=%d where charac_no %s",local_ac[5],
                     uVar3);
    cVar2 = MySQL::exec(local_54,true);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
  }
  local_40 = 0;
  local_3c = local_ac[0];
  ptVar10 = &local_124;
  for (iVar4 = 4; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 08429119 to 0842911d has its CatchHandler @ 08429130 */
    std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)ptVar10);
    ptVar10 = (tm *)&ptVar10->tm_mday;
  }
  local_28 = 0;
  while (uVar6 = std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::size(local_7c),
        local_28 < uVar6) {
    if (local_3c == 0) {
      local_21 = '\0';
      do {
        local_40 = local_40 + 1;
        if (local_40 == 5) {
          local_21 = '\x01';
          break;
        }
        local_3c = local_ac[local_40];
      } while (local_ac[local_40] == 0);
      if (local_21 != '\0') break;
    }
    puVar9 = (undefined4 *)
             std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::operator[]
                       (local_7c,local_28);
    local_60[2] = *puVar9;
                    /* try { // try from 084291e6 to 084292ae has its CatchHandler @ 084292d8 */
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(&local_124.tm_sec + local_40 * 3),local_60 + 2);
    local_3c = local_3c + -1;
    local_28 = local_28 + 1;
  }
  local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    cVar2 = std::vector<int,std::allocator<int>>::empty();
    if (cVar2 == '\0') {
      uVar3 = getList2inQuery((vector *)(&local_124.tm_sec + local_20 * 3),local_6124);
      MySQL::set_query(local_54,
                       "upDate pvp_result set pvp_grade_ext=%d, pvp_grade_ext_update_time=from_unixtime(%d) where charac_no %s"
                       ,5 - local_20,local_38,uVar3);
      cVar2 = MySQL::exec(local_54,true);
      if (cVar2 != '\x01') {
        uVar3 = 0;
        goto LAB_08429302;
      }
    }
  }
  uVar3 = 1;
LAB_08429302:
  ptVar10 = &local_e8;
  while (ptVar10 != &local_124) {
    ptVar10 = (tm *)&ptVar10[-1].tm_isdst;
                    /* try { // try from 0842931b to 0842931f has its CatchHandler @ 08429322 */
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)ptVar10);
  }
LAB_0842934c:
  this = local_7c;
  while (this != (vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>> *)local_94) {
    this = this + -0xc;
                    /* try { // try from 08429365 to 08429369 has its CatchHandler @ 0842936c */
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)this);
  }
  std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::~vector(local_7c);
  return uVar3;
}

```

---

## makeRequest

```asm
// === 084293a0 DB_UpdatePvPGrade::makeRequest  [0x084293a0-0x842945d] ===
 84293a0:	55                   	push   %ebp
 84293a1:	89 e5                	mov    %esp,%ebp
 84293a3:	56                   	push   %esi
 84293a4:	53                   	push   %ebx
 84293a5:	83 ec 20             	sub    $0x20,%esp
 84293a8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84293ad:	c7 44 24 08 c8 6a 00 	movl   $0x6ac8,0x8(%esp)
 84293b4:	00 
 84293b5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84293bc:	08 
 84293bd:	89 04 24             	mov    %eax,(%esp)
 84293c0:	e8 c1 66 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84293c5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84293cc:	00 
 84293cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84293d1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84293d4:	89 04 24             	mov    %eax,(%esp)
 84293d7:	e8 4a f8 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84293dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84293df:	89 04 24             	mov    %eax,(%esp)
 84293e2:	e8 5f f8 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84293e7:	c7 44 24 04 d4 00 00 	movl   $0xd4,0x4(%esp)
 84293ee:	00 
 84293ef:	89 04 24             	mov    %eax,(%esp)
 84293f2:	e8 5f f8 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84293f7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84293fa:	89 04 24             	mov    %eax,(%esp)
 84293fd:	e8 44 f8 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8429402:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8429409:	ff 
 842940a:	89 04 24             	mov    %eax,(%esp)
 842940d:	e8 44 f8 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8429412:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8429417:	8d 55 f0             	lea    -0x10(%ebp),%edx
 842941a:	89 54 24 08          	mov    %edx,0x8(%esp)
 842941e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8429425:	00 
 8429426:	89 04 24             	mov    %eax,(%esp)
 8429429:	e8 b0 7b 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842942e:	eb 1b                	jmp    842944b <_ZN17DB_UpdatePvPGrade11makeRequestEv+0xab>
 8429430:	89 d3                	mov    %edx,%ebx
 8429432:	89 c6                	mov    %eax,%esi
 8429434:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8429437:	89 04 24             	mov    %eax,(%esp)
 842943a:	e8 93 34 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842943f:	89 f0                	mov    %esi,%eax
 8429441:	89 da                	mov    %ebx,%edx
 8429443:	89 04 24             	mov    %eax,(%esp)
 8429446:	e8 05 a3 6b 00       	call   8ae3750 <_Unwind_Resume>
 842944b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842944e:	89 04 24             	mov    %eax,(%esp)
 8429451:	e8 7c 34 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8429456:	83 c4 20             	add    $0x20,%esp
 8429459:	5b                   	pop    %ebx
 842945a:	5e                   	pop    %esi
 842945b:	5d                   	pop    %ebp
 842945c:	c3                   	ret
 842945d:	90                   	nop

```

```c
// DB_UpdatePvPGrade::makeRequest @ 0x84293a0

/* DB_UpdatePvPGrade::makeRequest() */

void DB_UpdatePvPGrade::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6ac8);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084293f2 to 0842942d has its CatchHandler @ 08429430 */
  CStreamGuard::operator<<(pCVar2,0xd4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

