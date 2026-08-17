# advancealtar__DB_Load

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Select

```asm
// === 0813de40 advancealtar::DB_Load::Select  [0x0813de40-0x813e3e7] ===
 813de40:	55                   	push   %ebp
 813de41:	89 e5                	mov    %esp,%ebp
 813de43:	83 ec 48             	sub    $0x48,%esp
 813de46:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 813de4b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 813de52:	00 
 813de53:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 813de5a:	00 
 813de5b:	89 04 24             	mov    %eax,(%esp)
 813de5e:	e8 db 73 2b 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 813de63:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 813de66:	8b 45 0c             	mov    0xc(%ebp),%eax
 813de69:	8b 00                	mov    (%eax),%eax
 813de6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 813de6f:	c7 44 24 04 e0 d6 b6 	movl   $0x8b6d6e0,0x4(%esp)
 813de76:	08 
 813de77:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813de7a:	89 04 24             	mov    %eax,(%esp)
 813de7d:	e8 3e 63 2b 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 813de82:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813de89:	00 
 813de8a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813de8d:	89 04 24             	mov    %eax,(%esp)
 813de90:	e8 91 64 2b 00       	call   83f4326 <_ZN5MySQL4execEb>
 813de95:	83 f0 01             	xor    $0x1,%eax
 813de98:	84 c0                	test   %al,%al
 813de9a:	74 0a                	je     813dea6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x66>
 813de9c:	b8 00 00 00 00       	mov    $0x0,%eax
 813dea1:	e9 40 05 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813dea6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813dea9:	89 04 24             	mov    %eax,(%esp)
 813deac:	e8 bb 44 fa ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 813deb1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813deb4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 813debb:	e9 ff 04 00 00       	jmp    813e3bf <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x57f>
 813dec0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813dec3:	89 04 24             	mov    %eax,(%esp)
 813dec6:	e8 f1 65 2b 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 813decb:	83 f0 01             	xor    $0x1,%eax
 813dece:	84 c0                	test   %al,%al
 813ded0:	74 0a                	je     813dedc <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x9c>
 813ded2:	b8 00 00 00 00       	mov    $0x0,%eax
 813ded7:	e9 0a 05 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813dedc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813dedf:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 813dee5:	03 45 0c             	add    0xc(%ebp),%eax
 813dee8:	83 c0 04             	add    $0x4,%eax
 813deeb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813deee:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813def5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 813defc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813deff:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813df03:	8d 55 e0             	lea    -0x20(%ebp),%edx
 813df06:	89 54 24 08          	mov    %edx,0x8(%esp)
 813df0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 813df0e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813df11:	89 04 24             	mov    %eax,(%esp)
 813df14:	e8 13 8a fd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 813df19:	83 f0 01             	xor    $0x1,%eax
 813df1c:	84 c0                	test   %al,%al
 813df1e:	74 0a                	je     813df2a <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0xea>
 813df20:	b8 00 00 00 00       	mov    $0x0,%eax
 813df25:	e9 bc 04 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813df2a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 813df2d:	89 04 24             	mov    %eax,(%esp)
 813df30:	e8 bb b0 75 00       	call   8898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>
 813df35:	83 f0 01             	xor    $0x1,%eax
 813df38:	84 c0                	test   %al,%al
 813df3a:	74 3d                	je     813df79 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x139>
 813df3c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 813df3f:	89 44 24 14          	mov    %eax,0x14(%esp)
 813df43:	c7 44 24 10 e8 d7 b6 	movl   $0x8b6d7e8,0x10(%esp)
 813df4a:	08 
 813df4b:	c7 44 24 0c b1 00 00 	movl   $0xb1,0xc(%esp)
 813df52:	00 
 813df53:	c7 44 24 08 20 ec b6 	movl   $0x8b6ec20,0x8(%esp)
 813df5a:	08 
 813df5b:	c7 44 24 04 00 d8 b6 	movl   $0x8b6d800,0x4(%esp)
 813df62:	08 
 813df63:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 813df6a:	e8 9b 5c 99 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 813df6f:	b8 00 00 00 00       	mov    $0x0,%eax
 813df74:	e9 6d 04 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813df79:	8b 45 e0             	mov    -0x20(%ebp),%eax
 813df7c:	89 c2                	mov    %eax,%edx
 813df7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813df81:	89 10                	mov    %edx,(%eax)
 813df83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813df86:	8d 50 04             	lea    0x4(%eax),%edx
 813df89:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813df8c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813df90:	89 54 24 08          	mov    %edx,0x8(%esp)
 813df94:	89 44 24 04          	mov    %eax,0x4(%esp)
 813df98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813df9b:	89 04 24             	mov    %eax,(%esp)
 813df9e:	e8 79 40 00 00       	call   814201c <_ZN5MySQL9get_shortEiRi>
 813dfa3:	83 f0 01             	xor    $0x1,%eax
 813dfa6:	84 c0                	test   %al,%al
 813dfa8:	74 0a                	je     813dfb4 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x174>
 813dfaa:	b8 00 00 00 00       	mov    $0x0,%eax
 813dfaf:	e9 32 04 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813dfb4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813dfb7:	8d 50 08             	lea    0x8(%eax),%edx
 813dfba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813dfbd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813dfc1:	89 54 24 08          	mov    %edx,0x8(%esp)
 813dfc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 813dfc9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813dfcc:	89 04 24             	mov    %eax,(%esp)
 813dfcf:	e8 48 40 00 00       	call   814201c <_ZN5MySQL9get_shortEiRi>
 813dfd4:	83 f0 01             	xor    $0x1,%eax
 813dfd7:	84 c0                	test   %al,%al
 813dfd9:	74 0a                	je     813dfe5 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x1a5>
 813dfdb:	b8 00 00 00 00       	mov    $0x0,%eax
 813dfe0:	e9 01 04 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813dfe5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813dfe8:	8d 50 0c             	lea    0xc(%eax),%edx
 813dfeb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813dfee:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813dff2:	89 54 24 08          	mov    %edx,0x8(%esp)
 813dff6:	89 44 24 04          	mov    %eax,0x4(%esp)
 813dffa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813dffd:	89 04 24             	mov    %eax,(%esp)
 813e000:	e8 27 89 fd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 813e005:	83 f0 01             	xor    $0x1,%eax
 813e008:	84 c0                	test   %al,%al
 813e00a:	74 0a                	je     813e016 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x1d6>
 813e00c:	b8 00 00 00 00       	mov    $0x0,%eax
 813e011:	e9 d0 03 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e016:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e019:	8d 50 10             	lea    0x10(%eax),%edx
 813e01c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e01f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e023:	89 54 24 08          	mov    %edx,0x8(%esp)
 813e027:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e02b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e02e:	89 04 24             	mov    %eax,(%esp)
 813e031:	e8 f6 88 fd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 813e036:	83 f0 01             	xor    $0x1,%eax
 813e039:	84 c0                	test   %al,%al
 813e03b:	74 0a                	je     813e047 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x207>
 813e03d:	b8 00 00 00 00       	mov    $0x0,%eax
 813e042:	e9 9f 03 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e047:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e04a:	8d 50 14             	lea    0x14(%eax),%edx
 813e04d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e050:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e054:	89 54 24 08          	mov    %edx,0x8(%esp)
 813e058:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e05c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e05f:	89 04 24             	mov    %eax,(%esp)
 813e062:	e8 c5 88 fd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 813e067:	83 f0 01             	xor    $0x1,%eax
 813e06a:	84 c0                	test   %al,%al
 813e06c:	74 0a                	je     813e078 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x238>
 813e06e:	b8 00 00 00 00       	mov    $0x0,%eax
 813e073:	e9 6e 03 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e078:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e07b:	8d 50 18             	lea    0x18(%eax),%edx
 813e07e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e081:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e085:	89 54 24 08          	mov    %edx,0x8(%esp)
 813e089:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e08d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e090:	89 04 24             	mov    %eax,(%esp)
 813e093:	e8 54 fd fb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 813e098:	83 f0 01             	xor    $0x1,%eax
 813e09b:	84 c0                	test   %al,%al
 813e09d:	74 0a                	je     813e0a9 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x269>
 813e09f:	b8 00 00 00 00       	mov    $0x0,%eax
 813e0a4:	e9 3d 03 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e0a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e0ac:	8d 50 1a             	lea    0x1a(%eax),%edx
 813e0af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e0b2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e0b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 813e0ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e0be:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e0c1:	89 04 24             	mov    %eax,(%esp)
 813e0c4:	e8 23 fd fb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 813e0c9:	83 f0 01             	xor    $0x1,%eax
 813e0cc:	84 c0                	test   %al,%al
 813e0ce:	74 0a                	je     813e0da <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x29a>
 813e0d0:	b8 00 00 00 00       	mov    $0x0,%eax
 813e0d5:	e9 0c 03 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e0da:	66 c7 45 de 00 00    	movw   $0x0,-0x22(%ebp)
 813e0e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e0e3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e0e7:	8d 55 de             	lea    -0x22(%ebp),%edx
 813e0ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 813e0ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e0f2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e0f5:	89 04 24             	mov    %eax,(%esp)
 813e0f8:	e8 ef fc fb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 813e0fd:	83 f0 01             	xor    $0x1,%eax
 813e100:	84 c0                	test   %al,%al
 813e102:	74 0a                	je     813e10e <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x2ce>
 813e104:	b8 00 00 00 00       	mov    $0x0,%eax
 813e109:	e9 d8 02 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e10e:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 813e112:	66 85 c0             	test   %ax,%ax
 813e115:	7e 09                	jle    813e120 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x2e0>
 813e117:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e11a:	c6 40 20 01          	movb   $0x1,0x20(%eax)
 813e11e:	eb 07                	jmp    813e127 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x2e7>
 813e120:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e123:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 813e127:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813e12e:	00 
 813e12f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813e136:	00 
 813e137:	c7 04 24 80 0b 40 09 	movl   $0x9400b80,(%esp)
 813e13e:	e8 7d fb f3 ff       	call   807dcc0 <memset@plt>
 813e143:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813e14a:	00 
 813e14b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813e152:	00 
 813e153:	c7 04 24 80 2b 40 09 	movl   $0x9402b80,(%esp)
 813e15a:	e8 61 fb f3 ff       	call   807dcc0 <memset@plt>
 813e15f:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813e166:	00 
 813e167:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813e16e:	00 
 813e16f:	c7 04 24 80 1b 40 09 	movl   $0x9401b80,(%esp)
 813e176:	e8 45 fb f3 ff       	call   807dcc0 <memset@plt>
 813e17b:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813e182:	00 
 813e183:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813e18a:	00 
 813e18b:	c7 04 24 80 3b 40 09 	movl   $0x9403b80,(%esp)
 813e192:	e8 29 fb f3 ff       	call   807dcc0 <memset@plt>
 813e197:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e19a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e19e:	c7 44 24 14 00 08 00 	movl   $0x800,0x14(%esp)
 813e1a5:	00 
 813e1a6:	c7 44 24 10 80 0b 40 	movl   $0x9400b80,0x10(%esp)
 813e1ad:	09 
 813e1ae:	c7 44 24 0c 00 08 00 	movl   $0x800,0xc(%esp)
 813e1b5:	00 
 813e1b6:	c7 44 24 08 80 03 40 	movl   $0x9400380,0x8(%esp)
 813e1bd:	09 
 813e1be:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e1c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e1c5:	89 04 24             	mov    %eax,(%esp)
 813e1c8:	e8 7b fa ff ff       	call   813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>
 813e1cd:	83 f0 01             	xor    $0x1,%eax
 813e1d0:	84 c0                	test   %al,%al
 813e1d2:	74 0a                	je     813e1de <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x39e>
 813e1d4:	b8 00 00 00 00       	mov    $0x0,%eax
 813e1d9:	e9 08 02 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e1de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e1e1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e1e5:	c7 44 24 14 00 08 00 	movl   $0x800,0x14(%esp)
 813e1ec:	00 
 813e1ed:	c7 44 24 10 80 2b 40 	movl   $0x9402b80,0x10(%esp)
 813e1f4:	09 
 813e1f5:	c7 44 24 0c 00 08 00 	movl   $0x800,0xc(%esp)
 813e1fc:	00 
 813e1fd:	c7 44 24 08 80 23 40 	movl   $0x9402380,0x8(%esp)
 813e204:	09 
 813e205:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e209:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e20c:	89 04 24             	mov    %eax,(%esp)
 813e20f:	e8 34 fa ff ff       	call   813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>
 813e214:	83 f0 01             	xor    $0x1,%eax
 813e217:	84 c0                	test   %al,%al
 813e219:	74 0a                	je     813e225 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x3e5>
 813e21b:	b8 00 00 00 00       	mov    $0x0,%eax
 813e220:	e9 c1 01 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e225:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e228:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e22c:	c7 44 24 14 00 08 00 	movl   $0x800,0x14(%esp)
 813e233:	00 
 813e234:	c7 44 24 10 80 1b 40 	movl   $0x9401b80,0x10(%esp)
 813e23b:	09 
 813e23c:	c7 44 24 0c 00 08 00 	movl   $0x800,0xc(%esp)
 813e243:	00 
 813e244:	c7 44 24 08 80 13 40 	movl   $0x9401380,0x8(%esp)
 813e24b:	09 
 813e24c:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e250:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e253:	89 04 24             	mov    %eax,(%esp)
 813e256:	e8 ed f9 ff ff       	call   813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>
 813e25b:	83 f0 01             	xor    $0x1,%eax
 813e25e:	84 c0                	test   %al,%al
 813e260:	74 0a                	je     813e26c <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x42c>
 813e262:	b8 00 00 00 00       	mov    $0x0,%eax
 813e267:	e9 7a 01 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e26c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e26f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e273:	c7 44 24 14 00 08 00 	movl   $0x800,0x14(%esp)
 813e27a:	00 
 813e27b:	c7 44 24 10 80 3b 40 	movl   $0x9403b80,0x10(%esp)
 813e282:	09 
 813e283:	c7 44 24 0c 00 08 00 	movl   $0x800,0xc(%esp)
 813e28a:	00 
 813e28b:	c7 44 24 08 80 33 40 	movl   $0x9403380,0x8(%esp)
 813e292:	09 
 813e293:	89 44 24 04          	mov    %eax,0x4(%esp)
 813e297:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813e29a:	89 04 24             	mov    %eax,(%esp)
 813e29d:	e8 a6 f9 ff ff       	call   813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>
 813e2a2:	83 f0 01             	xor    $0x1,%eax
 813e2a5:	84 c0                	test   %al,%al
 813e2a7:	74 0a                	je     813e2b3 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x473>
 813e2a9:	b8 00 00 00 00       	mov    $0x0,%eax
 813e2ae:	e9 33 01 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e2b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e2b6:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 813e2bc:	83 c0 20             	add    $0x20,%eax
 813e2bf:	03 45 0c             	add    0xc(%ebp),%eax
 813e2c2:	83 c0 05             	add    $0x5,%eax
 813e2c5:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 813e2cc:	00 
 813e2cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e2d1:	c7 44 24 04 80 0b 40 	movl   $0x9400b80,0x4(%esp)
 813e2d8:	09 
 813e2d9:	8b 45 08             	mov    0x8(%ebp),%eax
 813e2dc:	89 04 24             	mov    %eax,(%esp)
 813e2df:	e8 04 01 00 00       	call   813e3e8 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi>
 813e2e4:	83 f0 01             	xor    $0x1,%eax
 813e2e7:	84 c0                	test   %al,%al
 813e2e9:	74 0a                	je     813e2f5 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x4b5>
 813e2eb:	b8 00 00 00 00       	mov    $0x0,%eax
 813e2f0:	e9 f1 00 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e2f5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e2f8:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 813e2fe:	05 b0 01 00 00       	add    $0x1b0,%eax
 813e303:	03 45 0c             	add    0xc(%ebp),%eax
 813e306:	83 c0 05             	add    $0x5,%eax
 813e309:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 813e310:	00 
 813e311:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e315:	c7 44 24 04 80 2b 40 	movl   $0x9402b80,0x4(%esp)
 813e31c:	09 
 813e31d:	8b 45 08             	mov    0x8(%ebp),%eax
 813e320:	89 04 24             	mov    %eax,(%esp)
 813e323:	e8 1a 02 00 00       	call   813e542 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi>
 813e328:	83 f0 01             	xor    $0x1,%eax
 813e32b:	84 c0                	test   %al,%al
 813e32d:	74 0a                	je     813e339 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x4f9>
 813e32f:	b8 00 00 00 00       	mov    $0x0,%eax
 813e334:	e9 ad 00 00 00       	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e339:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e33c:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 813e342:	05 20 02 00 00       	add    $0x220,%eax
 813e347:	03 45 0c             	add    0xc(%ebp),%eax
 813e34a:	83 c0 0d             	add    $0xd,%eax
 813e34d:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 813e354:	00 
 813e355:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e359:	c7 44 24 04 80 1b 40 	movl   $0x9401b80,0x4(%esp)
 813e360:	09 
 813e361:	8b 45 08             	mov    0x8(%ebp),%eax
 813e364:	89 04 24             	mov    %eax,(%esp)
 813e367:	e8 9c 03 00 00       	call   813e708 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi>
 813e36c:	83 f0 01             	xor    $0x1,%eax
 813e36f:	84 c0                	test   %al,%al
 813e371:	74 07                	je     813e37a <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x53a>
 813e373:	b8 00 00 00 00       	mov    $0x0,%eax
 813e378:	eb 6c                	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e37a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e37d:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 813e383:	05 80 04 00 00       	add    $0x480,%eax
 813e388:	03 45 0c             	add    0xc(%ebp),%eax
 813e38b:	83 c0 05             	add    $0x5,%eax
 813e38e:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 813e395:	00 
 813e396:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e39a:	c7 44 24 04 80 3b 40 	movl   $0x9403b80,0x4(%esp)
 813e3a1:	09 
 813e3a2:	8b 45 08             	mov    0x8(%ebp),%eax
 813e3a5:	89 04 24             	mov    %eax,(%esp)
 813e3a8:	e8 1f 05 00 00       	call   813e8cc <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi>
 813e3ad:	83 f0 01             	xor    $0x1,%eax
 813e3b0:	84 c0                	test   %al,%al
 813e3b2:	74 07                	je     813e3bb <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x57b>
 813e3b4:	b8 00 00 00 00       	mov    $0x0,%eax
 813e3b9:	eb 2b                	jmp    813e3e6 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x5a6>
 813e3bb:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 813e3bf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e3c2:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 813e3c5:	7d 0d                	jge    813e3d4 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x594>
 813e3c7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 813e3cb:	7f 07                	jg     813e3d4 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x594>
 813e3cd:	b8 01 00 00 00       	mov    $0x1,%eax
 813e3d2:	eb 05                	jmp    813e3d9 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x599>
 813e3d4:	b8 00 00 00 00       	mov    $0x0,%eax
 813e3d9:	84 c0                	test   %al,%al
 813e3db:	0f 85 df fa ff ff    	jne    813dec0 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE+0x80>
 813e3e1:	b8 01 00 00 00       	mov    $0x1,%eax
 813e3e6:	c9                   	leave
 813e3e7:	c3                   	ret

```

```c
// advancealtar::DB_Load::Select @ 0x813de40

/* advancealtar::DB_Load::Select(advancealtar::_CharacAdvanceAltarDbData&) */

undefined4 __thiscall
advancealtar::DB_Load::Select(DB_Load *this,_CharacAdvanceAltarDbData *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  short local_26;
  int local_24;
  MySQL *local_20;
  int local_1c;
  int local_18;
  _CharacAdvanceAltarDbData *local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_20,
                   "select ridable_id, ticket_free, ticket_cera, \t\t\t\t  star_game, star_cera, star_usable, \t\t\t\t  survival_best, star_reset_count, is_unlock_stage_effect, \t\t\t\t  stage_list, slot_list, buy_item_list, reward_list \t\t\t\t  from charac_advance_altar\t\t\t\t\t  where charac_no = %u"
                   ,*(undefined4 *)param_1);
  cVar3 = MySQL::exec(local_20,true);
  if (cVar3 == '\x01') {
    local_1c = MySQL::get_n_rows(local_20);
    local_18 = 0;
    while( true ) {
      if ((local_18 < local_1c) && (local_18 < 1)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return 1;
      }
      cVar3 = MySQL::fetch(local_20);
      if (cVar3 != '\x01') {
        return 0;
      }
      local_14 = param_1 + local_18 * 0x518 + 4;
      local_24 = 0;
      local_10 = 1;
      cVar3 = MySQL::get_int(local_20,0,&local_24);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = isValidRidableId(local_24);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"localglobal/global_AdvanceAltar_Dispatcher.cpp",
                   "bool advancealtar::DB_Load::Select(advancealtar::CharacAdvanceAltarDbData&)",
                   0xb1,"invalid RidableId=%d",local_24);
        return 0;
      }
      *(int *)local_14 = local_24;
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(int *)(local_14 + 4));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(int *)(local_14 + 8));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_int(local_20,iVar2,(int *)(local_14 + 0xc));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_int(local_20,iVar2,(int *)(local_14 + 0x10));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_int(local_20,iVar2,(int *)(local_14 + 0x14));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(short *)(local_14 + 0x18));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(short *)(local_14 + 0x1a));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_26 = 0;
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,&local_26);
      if (cVar3 != '\x01') {
        return 0;
      }
      if (local_26 < 1) {
        local_14[0x20] = (_CharacAdvanceAltarDbData)0x0;
      }
      else {
        local_14[0x20] = (_CharacAdvanceAltarDbData)0x1;
      }
      memset(g_StrStageBuffer,0,0x800);
      memset(g_StrSlotBuffer,0,0x800);
      memset(g_StrBuyItemBuffer,0,0x800);
      memset(g_StrRewardBuffer,0,0x800);
      iVar2 = local_10;
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipStageBuffer,0x800,g_StrStageBuffer,0x800);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipSlotBuffer,0x800,g_StrSlotBuffer,0x800);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipBuyItemBuffer,0x800,g_StrBuyItemBuffer,0x800);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipRewardBuffer,0x800,g_StrRewardBuffer,0x800);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseStage(this,g_StrStageBuffer,(_Stage *)(param_1 + local_18 * 0x518 + 0x25),0x32);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseSlot(this,g_StrSlotBuffer,(_Slot *)(param_1 + local_18 * 0x518 + 0x1b5),0xc);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseBuyItem(this,g_StrBuyItemBuffer,(_BuyItem *)(param_1 + local_18 * 0x518 + 0x22d),
                           0x32);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseReward(this,g_StrRewardBuffer,(_Reward *)(param_1 + local_18 * 0x518 + 0x485),
                          0x1e);
      if (cVar3 != '\x01') break;
      local_18 = local_18 + 1;
    }
  }
  return 0;
}

```

---

## SendResult

```asm
// === 0813ea46 advancealtar::DB_Load::SendResult  [0x0813ea46-0x813eb37] ===
 813ea46:	55                   	push   %ebp
 813ea47:	89 e5                	mov    %esp,%ebp
 813ea49:	56                   	push   %esi
 813ea4a:	53                   	push   %ebx
 813ea4b:	83 ec 30             	sub    $0x30,%esp
 813ea4e:	8b 45 18             	mov    0x18(%ebp),%eax
 813ea51:	88 45 e4             	mov    %al,-0x1c(%ebp)
 813ea54:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 813ea58:	0f 84 ce 00 00 00    	je     813eb2c <_ZN12advancealtar7DB_Load10SendResultEiiRNS_25_CharacAdvanceAltarDbDataEb+0xe6>
 813ea5e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 813ea63:	c7 44 24 08 bf 01 00 	movl   $0x1bf,0x8(%esp)
 813ea6a:	00 
 813ea6b:	c7 44 24 04 00 d8 b6 	movl   $0x8b6d800,0x4(%esp)
 813ea72:	08 
 813ea73:	89 04 24             	mov    %eax,(%esp)
 813ea76:	e8 0b 10 15 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 813ea7b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 813ea82:	00 
 813ea83:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ea87:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813ea8a:	89 04 24             	mov    %eax,(%esp)
 813ea8d:	e8 94 a1 f8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 813ea92:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813ea95:	89 04 24             	mov    %eax,(%esp)
 813ea98:	e8 a9 a1 f8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 813ea9d:	8b 55 0c             	mov    0xc(%ebp),%edx
 813eaa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 813eaa4:	89 04 24             	mov    %eax,(%esp)
 813eaa7:	e8 aa a1 f8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 813eaac:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813eaaf:	89 04 24             	mov    %eax,(%esp)
 813eab2:	e8 8f a1 f8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 813eab7:	8b 55 10             	mov    0x10(%ebp),%edx
 813eaba:	89 54 24 04          	mov    %edx,0x4(%esp)
 813eabe:	89 04 24             	mov    %eax,(%esp)
 813eac1:	e8 90 a1 f8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 813eac6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813eac9:	89 04 24             	mov    %eax,(%esp)
 813eacc:	e8 7d a1 f8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 813ead1:	c7 44 24 08 1c 05 00 	movl   $0x51c,0x8(%esp)
 813ead8:	00 
 813ead9:	8b 55 14             	mov    0x14(%ebp),%edx
 813eadc:	89 54 24 04          	mov    %edx,0x4(%esp)
 813eae0:	89 04 24             	mov    %eax,(%esp)
 813eae3:	e8 6a fb f9 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 813eae8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 813eaed:	8d 55 f0             	lea    -0x10(%ebp),%edx
 813eaf0:	89 54 24 08          	mov    %edx,0x8(%esp)
 813eaf4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813eafb:	00 
 813eafc:	89 04 24             	mov    %eax,(%esp)
 813eaff:	e8 da 24 43 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 813eb04:	eb 1b                	jmp    813eb21 <_ZN12advancealtar7DB_Load10SendResultEiiRNS_25_CharacAdvanceAltarDbDataEb+0xdb>
 813eb06:	89 d3                	mov    %edx,%ebx
 813eb08:	89 c6                	mov    %eax,%esi
 813eb0a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813eb0d:	89 04 24             	mov    %eax,(%esp)
 813eb10:	e8 bd dd 4d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 813eb15:	89 f0                	mov    %esi,%eax
 813eb17:	89 da                	mov    %ebx,%edx
 813eb19:	89 04 24             	mov    %eax,(%esp)
 813eb1c:	e8 2f 4c 9a 00       	call   8ae3750 <_Unwind_Resume>
 813eb21:	8d 45 f0             	lea    -0x10(%ebp),%eax
 813eb24:	89 04 24             	mov    %eax,(%esp)
 813eb27:	e8 a6 dd 4d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 813eb2c:	b8 01 00 00 00       	mov    $0x1,%eax
 813eb31:	83 c4 30             	add    $0x30,%esp
 813eb34:	5b                   	pop    %ebx
 813eb35:	5e                   	pop    %esi
 813eb36:	5d                   	pop    %ebp
 813eb37:	c3                   	ret

```

```c
// advancealtar::DB_Load::SendResult @ 0x813ea46

/* advancealtar::DB_Load::SendResult(int, int, advancealtar::_CharacAdvanceAltarDbData&, bool) */

undefined4 __thiscall
advancealtar::DB_Load::SendResult
          (DB_Load *this,int param_1,int param_2,_CharacAdvanceAltarDbData *param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  if (param_4) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localglobal/global_AdvanceAltar_Dispatcher.cpp",0x1bf);
    CStreamGuard::CStreamGuard(local_14,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0813eaa7 to 0813eb03 has its CatchHandler @ 0813eb06 */
    CStreamGuard::operator<<(pCVar2,param_1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,param_2);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_3,0x51c);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return 1;
}

```

---

## dispatch

```asm
// === 0813ddb2 advancealtar::DB_Load::dispatch  [0x0813ddb2-0x813de3f] ===
 813ddb2:	55                   	push   %ebp
 813ddb3:	89 e5                	mov    %esp,%ebp
 813ddb5:	83 ec 38             	sub    $0x38,%esp
 813ddb8:	8b 45 08             	mov    0x8(%ebp),%eax
 813ddbb:	8b 55 14             	mov    0x14(%ebp),%edx
 813ddbe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 813ddc2:	8b 55 10             	mov    0x10(%ebp),%edx
 813ddc5:	89 54 24 08          	mov    %edx,0x8(%esp)
 813ddc9:	8b 55 0c             	mov    0xc(%ebp),%edx
 813ddcc:	89 54 24 04          	mov    %edx,0x4(%esp)
 813ddd0:	89 04 24             	mov    %eax,(%esp)
 813ddd3:	e8 a4 e1 2b 00       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 813ddd8:	83 f0 01             	xor    $0x1,%eax
 813dddb:	84 c0                	test   %al,%al
 813dddd:	74 07                	je     813dde6 <_ZN12advancealtar7DB_Load8dispatchEiiP6Stream+0x34>
 813dddf:	b8 00 00 00 00       	mov    $0x0,%eax
 813dde4:	eb 58                	jmp    813de3e <_ZN12advancealtar7DB_Load8dispatchEiiP6Stream+0x8c>
 813dde6:	8b 45 14             	mov    0x14(%ebp),%eax
 813dde9:	89 04 24             	mov    %eax,(%esp)
 813ddec:	e8 9b 49 00 00       	call   814278c <_ZN6Stream12GetOutBufferIN12advancealtar25_CharacAdvanceAltarDbDataEEEPT_v>
 813ddf1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813ddf4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813ddf8:	75 07                	jne    813de01 <_ZN12advancealtar7DB_Load8dispatchEiiP6Stream+0x4f>
 813ddfa:	b8 00 00 00 00       	mov    $0x0,%eax
 813ddff:	eb 3d                	jmp    813de3e <_ZN12advancealtar7DB_Load8dispatchEiiP6Stream+0x8c>
 813de01:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813de04:	89 44 24 04          	mov    %eax,0x4(%esp)
 813de08:	8b 45 08             	mov    0x8(%ebp),%eax
 813de0b:	89 04 24             	mov    %eax,(%esp)
 813de0e:	e8 2d 00 00 00       	call   813de40 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE>
 813de13:	88 45 f7             	mov    %al,-0x9(%ebp)
 813de16:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 813de1a:	89 44 24 10          	mov    %eax,0x10(%esp)
 813de1e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813de21:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813de25:	8b 45 10             	mov    0x10(%ebp),%eax
 813de28:	89 44 24 08          	mov    %eax,0x8(%esp)
 813de2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 813de2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 813de33:	8b 45 08             	mov    0x8(%ebp),%eax
 813de36:	89 04 24             	mov    %eax,(%esp)
 813de39:	e8 08 0c 00 00       	call   813ea46 <_ZN12advancealtar7DB_Load10SendResultEiiRNS_25_CharacAdvanceAltarDbDataEb>
 813de3e:	c9                   	leave
 813de3f:	c3                   	ret

```

```c
// advancealtar::DB_Load::dispatch @ 0x813ddb2

/* advancealtar::DB_Load::dispatch(int, int, Stream*) */

undefined4 __thiscall
advancealtar::DB_Load::dispatch(DB_Load *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  _CharacAdvanceAltarDbData *p_Var4;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    p_Var4 = Stream::GetOutBuffer<advancealtar::_CharacAdvanceAltarDbData>(param_3);
    if (p_Var4 == (_CharacAdvanceAltarDbData *)0x0) {
      uVar3 = 0;
    }
    else {
      bVar2 = (bool)Select(this,p_Var4);
      uVar3 = SendResult(this,param_1,param_2,p_Var4,bVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## parseBuyItem

```asm
// === 0813e708 advancealtar::DB_Load::parseBuyItem  [0x0813e708-0x813e8cb] ===
 813e708:	55                   	push   %ebp
 813e709:	89 e5                	mov    %esp,%ebp
 813e70b:	53                   	push   %ebx
 813e70c:	83 ec 34             	sub    $0x34,%esp
 813e70f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813e713:	74 06                	je     813e71b <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x13>
 813e715:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813e719:	75 0a                	jne    813e725 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x1d>
 813e71b:	b8 00 00 00 00       	mov    $0x0,%eax
 813e720:	e9 a0 01 00 00       	jmp    813e8c5 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x1bd>
 813e725:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 813e72c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e72f:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e733:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813e73a:	08 
 813e73b:	8b 45 0c             	mov    0xc(%ebp),%eax
 813e73e:	89 04 24             	mov    %eax,(%esp)
 813e741:	e8 0a fa f3 ff       	call   807e150 <strtok_r@plt>
 813e746:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813e749:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 813e750:	e9 49 01 00 00       	jmp    813e89e <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x196>
 813e755:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 813e75c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e75f:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e763:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e76a:	08 
 813e76b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 813e76e:	89 04 24             	mov    %eax,(%esp)
 813e771:	e8 da f9 f3 ff       	call   807e150 <strtok_r@plt>
 813e776:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e779:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813e780:	e9 d4 00 00 00       	jmp    813e859 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x151>
 813e785:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e789:	0f 84 ec 00 00 00    	je     813e87b <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x173>
 813e78f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e792:	83 f8 01             	cmp    $0x1,%eax
 813e795:	74 3d                	je     813e7d4 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0xcc>
 813e797:	83 f8 01             	cmp    $0x1,%eax
 813e79a:	7f 09                	jg     813e7a5 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x9d>
 813e79c:	85 c0                	test   %eax,%eax
 813e79e:	74 14                	je     813e7b4 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0xac>
 813e7a0:	e9 92 00 00 00       	jmp    813e837 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x12f>
 813e7a5:	83 f8 02             	cmp    $0x2,%eax
 813e7a8:	74 4b                	je     813e7f5 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0xed>
 813e7aa:	83 f8 03             	cmp    $0x3,%eax
 813e7ad:	74 68                	je     813e817 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x10f>
 813e7af:	e9 83 00 00 00       	jmp    813e837 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x12f>
 813e7b4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e7b7:	89 d0                	mov    %edx,%eax
 813e7b9:	01 c0                	add    %eax,%eax
 813e7bb:	01 d0                	add    %edx,%eax
 813e7bd:	c1 e0 02             	shl    $0x2,%eax
 813e7c0:	89 c3                	mov    %eax,%ebx
 813e7c2:	03 5d 10             	add    0x10(%ebp),%ebx
 813e7c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e7c8:	89 04 24             	mov    %eax,(%esp)
 813e7cb:	e8 20 ff f3 ff       	call   807e6f0 <atoi@plt>
 813e7d0:	89 03                	mov    %eax,(%ebx)
 813e7d2:	eb 63                	jmp    813e837 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x12f>
 813e7d4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e7d7:	89 d0                	mov    %edx,%eax
 813e7d9:	01 c0                	add    %eax,%eax
 813e7db:	01 d0                	add    %edx,%eax
 813e7dd:	c1 e0 02             	shl    $0x2,%eax
 813e7e0:	89 c3                	mov    %eax,%ebx
 813e7e2:	03 5d 10             	add    0x10(%ebp),%ebx
 813e7e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e7e8:	89 04 24             	mov    %eax,(%esp)
 813e7eb:	e8 00 ff f3 ff       	call   807e6f0 <atoi@plt>
 813e7f0:	89 43 04             	mov    %eax,0x4(%ebx)
 813e7f3:	eb 42                	jmp    813e837 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x12f>
 813e7f5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e7f8:	89 d0                	mov    %edx,%eax
 813e7fa:	01 c0                	add    %eax,%eax
 813e7fc:	01 d0                	add    %edx,%eax
 813e7fe:	c1 e0 02             	shl    $0x2,%eax
 813e801:	89 c3                	mov    %eax,%ebx
 813e803:	03 5d 10             	add    0x10(%ebp),%ebx
 813e806:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e809:	89 04 24             	mov    %eax,(%esp)
 813e80c:	e8 df fe f3 ff       	call   807e6f0 <atoi@plt>
 813e811:	66 89 43 08          	mov    %ax,0x8(%ebx)
 813e815:	eb 20                	jmp    813e837 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x12f>
 813e817:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e81a:	89 d0                	mov    %edx,%eax
 813e81c:	01 c0                	add    %eax,%eax
 813e81e:	01 d0                	add    %edx,%eax
 813e820:	c1 e0 02             	shl    $0x2,%eax
 813e823:	89 c3                	mov    %eax,%ebx
 813e825:	03 5d 10             	add    0x10(%ebp),%ebx
 813e828:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e82b:	89 04 24             	mov    %eax,(%esp)
 813e82e:	e8 bd fe f3 ff       	call   807e6f0 <atoi@plt>
 813e833:	66 89 43 0a          	mov    %ax,0xa(%ebx)
 813e837:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e83a:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e83e:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e845:	08 
 813e846:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813e84d:	e8 fe f8 f3 ff       	call   807e150 <strtok_r@plt>
 813e852:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e855:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e859:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e85d:	74 0d                	je     813e86c <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x164>
 813e85f:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 813e863:	7f 07                	jg     813e86c <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x164>
 813e865:	b8 01 00 00 00       	mov    $0x1,%eax
 813e86a:	eb 05                	jmp    813e871 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x169>
 813e86c:	b8 00 00 00 00       	mov    $0x0,%eax
 813e871:	84 c0                	test   %al,%al
 813e873:	0f 85 0c ff ff ff    	jne    813e785 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x7d>
 813e879:	eb 01                	jmp    813e87c <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x174>
 813e87b:	90                   	nop
 813e87c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e87f:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e883:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813e88a:	08 
 813e88b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813e892:	e8 b9 f8 f3 ff       	call   807e150 <strtok_r@plt>
 813e897:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813e89a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 813e89e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 813e8a2:	74 0f                	je     813e8b3 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x1ab>
 813e8a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e8a7:	3b 45 14             	cmp    0x14(%ebp),%eax
 813e8aa:	7d 07                	jge    813e8b3 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x1ab>
 813e8ac:	b8 01 00 00 00       	mov    $0x1,%eax
 813e8b1:	eb 05                	jmp    813e8b8 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x1b0>
 813e8b3:	b8 00 00 00 00       	mov    $0x0,%eax
 813e8b8:	84 c0                	test   %al,%al
 813e8ba:	0f 85 95 fe ff ff    	jne    813e755 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi+0x4d>
 813e8c0:	b8 01 00 00 00       	mov    $0x1,%eax
 813e8c5:	83 c4 34             	add    $0x34,%esp
 813e8c8:	5b                   	pop    %ebx
 813e8c9:	5d                   	pop    %ebp
 813e8ca:	c3                   	ret
 813e8cb:	90                   	nop

```

```c
// advancealtar::DB_Load::parseBuyItem @ 0x813e708

/* advancealtar::DB_Load::parseBuyItem(char*, advancealtar::_BuyItem*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseBuyItem(DB_Load *this,char *param_1,_BuyItem *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == (_BuyItem *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_20 = (char *)0x0;
    local_1c = strtok_r(param_1,"|",&local_20);
    local_18 = 0;
    while( true ) {
      if ((local_1c == (char *)0x0) || (param_3 <= local_18)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_24 = (char *)0x0;
      local_14 = strtok_r(local_1c,",",&local_24);
      local_10 = 0;
      while( true ) {
        if ((local_14 == (char *)0x0) || (3 < local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((!bVar1) || (local_14 == (char *)0x0)) break;
        if (local_10 == 1) {
          iVar3 = local_18 * 0xc;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar3 + 4) = iVar4;
        }
        else if (local_10 < 2) {
          if (local_10 == 0) {
            iVar3 = local_18 * 0xc;
            iVar4 = atoi(local_14);
            *(int *)(param_2 + iVar3) = iVar4;
          }
        }
        else if (local_10 == 2) {
          iVar3 = local_18 * 0xc;
          iVar4 = atoi(local_14);
          *(short *)(param_2 + iVar3 + 8) = (short)iVar4;
        }
        else if (local_10 == 3) {
          iVar3 = local_18 * 0xc;
          iVar4 = atoi(local_14);
          *(short *)(param_2 + iVar3 + 10) = (short)iVar4;
        }
        local_14 = strtok_r((char *)0x0,",",&local_24);
        local_10 = local_10 + 1;
      }
      local_1c = strtok_r((char *)0x0,"|",&local_20);
      local_18 = local_18 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## parseReward

```asm
// === 0813e8cc advancealtar::DB_Load::parseReward  [0x0813e8cc-0x813ea45] ===
 813e8cc:	55                   	push   %ebp
 813e8cd:	89 e5                	mov    %esp,%ebp
 813e8cf:	53                   	push   %ebx
 813e8d0:	83 ec 34             	sub    $0x34,%esp
 813e8d3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813e8d7:	74 06                	je     813e8df <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x13>
 813e8d9:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813e8dd:	75 0a                	jne    813e8e9 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x1d>
 813e8df:	b8 00 00 00 00       	mov    $0x0,%eax
 813e8e4:	e9 57 01 00 00       	jmp    813ea40 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x174>
 813e8e9:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 813e8f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e8f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e8f7:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813e8fe:	08 
 813e8ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 813e902:	89 04 24             	mov    %eax,(%esp)
 813e905:	e8 46 f8 f3 ff       	call   807e150 <strtok_r@plt>
 813e90a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813e90d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 813e914:	e9 00 01 00 00       	jmp    813ea19 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x14d>
 813e919:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 813e920:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e923:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e927:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e92e:	08 
 813e92f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 813e932:	89 04 24             	mov    %eax,(%esp)
 813e935:	e8 16 f8 f3 ff       	call   807e150 <strtok_r@plt>
 813e93a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e93d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813e944:	e9 8b 00 00 00       	jmp    813e9d4 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x108>
 813e949:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e94d:	0f 84 a3 00 00 00    	je     813e9f6 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x12a>
 813e953:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e956:	85 c0                	test   %eax,%eax
 813e958:	74 07                	je     813e961 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x95>
 813e95a:	83 f8 01             	cmp    $0x1,%eax
 813e95d:	74 20                	je     813e97f <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0xb3>
 813e95f:	eb 51                	jmp    813e9b2 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0xe6>
 813e961:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e964:	89 d0                	mov    %edx,%eax
 813e966:	c1 e0 02             	shl    $0x2,%eax
 813e969:	01 d0                	add    %edx,%eax
 813e96b:	89 c3                	mov    %eax,%ebx
 813e96d:	03 5d 10             	add    0x10(%ebp),%ebx
 813e970:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e973:	89 04 24             	mov    %eax,(%esp)
 813e976:	e8 75 fd f3 ff       	call   807e6f0 <atoi@plt>
 813e97b:	89 03                	mov    %eax,(%ebx)
 813e97d:	eb 33                	jmp    813e9b2 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0xe6>
 813e97f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e982:	89 04 24             	mov    %eax,(%esp)
 813e985:	e8 66 fd f3 ff       	call   807e6f0 <atoi@plt>
 813e98a:	85 c0                	test   %eax,%eax
 813e98c:	75 13                	jne    813e9a1 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0xd5>
 813e98e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e991:	89 d0                	mov    %edx,%eax
 813e993:	c1 e0 02             	shl    $0x2,%eax
 813e996:	01 d0                	add    %edx,%eax
 813e998:	03 45 10             	add    0x10(%ebp),%eax
 813e99b:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 813e99f:	eb 11                	jmp    813e9b2 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0xe6>
 813e9a1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e9a4:	89 d0                	mov    %edx,%eax
 813e9a6:	c1 e0 02             	shl    $0x2,%eax
 813e9a9:	01 d0                	add    %edx,%eax
 813e9ab:	03 45 10             	add    0x10(%ebp),%eax
 813e9ae:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 813e9b2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e9b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e9b9:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e9c0:	08 
 813e9c1:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813e9c8:	e8 83 f7 f3 ff       	call   807e150 <strtok_r@plt>
 813e9cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e9d0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e9d4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e9d8:	74 0d                	je     813e9e7 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x11b>
 813e9da:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 813e9de:	7f 07                	jg     813e9e7 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x11b>
 813e9e0:	b8 01 00 00 00       	mov    $0x1,%eax
 813e9e5:	eb 05                	jmp    813e9ec <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x120>
 813e9e7:	b8 00 00 00 00       	mov    $0x0,%eax
 813e9ec:	84 c0                	test   %al,%al
 813e9ee:	0f 85 55 ff ff ff    	jne    813e949 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x7d>
 813e9f4:	eb 01                	jmp    813e9f7 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x12b>
 813e9f6:	90                   	nop
 813e9f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e9fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e9fe:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813ea05:	08 
 813ea06:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813ea0d:	e8 3e f7 f3 ff       	call   807e150 <strtok_r@plt>
 813ea12:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813ea15:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 813ea19:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 813ea1d:	74 0f                	je     813ea2e <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x162>
 813ea1f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813ea22:	3b 45 14             	cmp    0x14(%ebp),%eax
 813ea25:	7d 07                	jge    813ea2e <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x162>
 813ea27:	b8 01 00 00 00       	mov    $0x1,%eax
 813ea2c:	eb 05                	jmp    813ea33 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x167>
 813ea2e:	b8 00 00 00 00       	mov    $0x0,%eax
 813ea33:	84 c0                	test   %al,%al
 813ea35:	0f 85 de fe ff ff    	jne    813e919 <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi+0x4d>
 813ea3b:	b8 01 00 00 00       	mov    $0x1,%eax
 813ea40:	83 c4 34             	add    $0x34,%esp
 813ea43:	5b                   	pop    %ebx
 813ea44:	5d                   	pop    %ebp
 813ea45:	c3                   	ret

```

```c
// advancealtar::DB_Load::parseReward @ 0x813e8cc

/* advancealtar::DB_Load::parseReward(char*, advancealtar::_Reward*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseReward(DB_Load *this,char *param_1,_Reward *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == (_Reward *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_20 = (char *)0x0;
    local_1c = strtok_r(param_1,"|",&local_20);
    local_18 = 0;
    while( true ) {
      if ((local_1c == (char *)0x0) || (param_3 <= local_18)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_24 = (char *)0x0;
      local_14 = strtok_r(local_1c,",",&local_24);
      local_10 = 0;
      while( true ) {
        if ((local_14 == (char *)0x0) || (1 < local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((!bVar1) || (local_14 == (char *)0x0)) break;
        if (local_10 == 0) {
          iVar4 = local_18 * 5;
          iVar3 = atoi(local_14);
          *(int *)(param_2 + iVar4) = iVar3;
        }
        else if (local_10 == 1) {
          iVar4 = atoi(local_14);
          if (iVar4 == 0) {
            param_2[local_18 * 5 + 4] = (_Reward)0x0;
          }
          else {
            param_2[local_18 * 5 + 4] = (_Reward)0x1;
          }
        }
        local_14 = strtok_r((char *)0x0,",",&local_24);
        local_10 = local_10 + 1;
      }
      local_1c = strtok_r((char *)0x0,"|",&local_20);
      local_18 = local_18 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## parseSlot

```asm
// === 0813e542 advancealtar::DB_Load::parseSlot  [0x0813e542-0x813e707] ===
 813e542:	55                   	push   %ebp
 813e543:	89 e5                	mov    %esp,%ebp
 813e545:	53                   	push   %ebx
 813e546:	83 ec 34             	sub    $0x34,%esp
 813e549:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813e54d:	74 06                	je     813e555 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x13>
 813e54f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813e553:	75 0a                	jne    813e55f <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x1d>
 813e555:	b8 00 00 00 00       	mov    $0x0,%eax
 813e55a:	e9 a3 01 00 00       	jmp    813e702 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x1c0>
 813e55f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 813e566:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e569:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e56d:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813e574:	08 
 813e575:	8b 45 0c             	mov    0xc(%ebp),%eax
 813e578:	89 04 24             	mov    %eax,(%esp)
 813e57b:	e8 d0 fb f3 ff       	call   807e150 <strtok_r@plt>
 813e580:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813e583:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 813e58a:	e9 4c 01 00 00       	jmp    813e6db <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x199>
 813e58f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 813e596:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e599:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e59d:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e5a4:	08 
 813e5a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 813e5a8:	89 04 24             	mov    %eax,(%esp)
 813e5ab:	e8 a0 fb f3 ff       	call   807e150 <strtok_r@plt>
 813e5b0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e5b3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813e5ba:	e9 d7 00 00 00       	jmp    813e696 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x154>
 813e5bf:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e5c3:	0f 84 ef 00 00 00    	je     813e6b8 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x176>
 813e5c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e5cc:	83 f8 01             	cmp    $0x1,%eax
 813e5cf:	74 42                	je     813e613 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0xd1>
 813e5d1:	83 f8 01             	cmp    $0x1,%eax
 813e5d4:	7f 09                	jg     813e5df <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x9d>
 813e5d6:	85 c0                	test   %eax,%eax
 813e5d8:	74 14                	je     813e5ee <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0xac>
 813e5da:	e9 95 00 00 00       	jmp    813e674 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x132>
 813e5df:	83 f8 02             	cmp    $0x2,%eax
 813e5e2:	74 50                	je     813e634 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0xf2>
 813e5e4:	83 f8 03             	cmp    $0x3,%eax
 813e5e7:	74 6c                	je     813e655 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x113>
 813e5e9:	e9 86 00 00 00       	jmp    813e674 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x132>
 813e5ee:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e5f1:	89 d0                	mov    %edx,%eax
 813e5f3:	c1 e0 02             	shl    $0x2,%eax
 813e5f6:	01 d0                	add    %edx,%eax
 813e5f8:	01 c0                	add    %eax,%eax
 813e5fa:	89 c3                	mov    %eax,%ebx
 813e5fc:	03 5d 10             	add    0x10(%ebp),%ebx
 813e5ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e602:	89 04 24             	mov    %eax,(%esp)
 813e605:	e8 e6 00 f4 ff       	call   807e6f0 <atoi@plt>
 813e60a:	85 c0                	test   %eax,%eax
 813e60c:	0f 9f c0             	setg   %al
 813e60f:	88 03                	mov    %al,(%ebx)
 813e611:	eb 61                	jmp    813e674 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x132>
 813e613:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e616:	89 d0                	mov    %edx,%eax
 813e618:	c1 e0 02             	shl    $0x2,%eax
 813e61b:	01 d0                	add    %edx,%eax
 813e61d:	01 c0                	add    %eax,%eax
 813e61f:	89 c3                	mov    %eax,%ebx
 813e621:	03 5d 10             	add    0x10(%ebp),%ebx
 813e624:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e627:	89 04 24             	mov    %eax,(%esp)
 813e62a:	e8 c1 00 f4 ff       	call   807e6f0 <atoi@plt>
 813e62f:	89 43 01             	mov    %eax,0x1(%ebx)
 813e632:	eb 40                	jmp    813e674 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x132>
 813e634:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e637:	89 d0                	mov    %edx,%eax
 813e639:	c1 e0 02             	shl    $0x2,%eax
 813e63c:	01 d0                	add    %edx,%eax
 813e63e:	01 c0                	add    %eax,%eax
 813e640:	89 c3                	mov    %eax,%ebx
 813e642:	03 5d 10             	add    0x10(%ebp),%ebx
 813e645:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e648:	89 04 24             	mov    %eax,(%esp)
 813e64b:	e8 a0 00 f4 ff       	call   807e6f0 <atoi@plt>
 813e650:	88 43 05             	mov    %al,0x5(%ebx)
 813e653:	eb 1f                	jmp    813e674 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x132>
 813e655:	8b 55 ec             	mov    -0x14(%ebp),%edx
 813e658:	89 d0                	mov    %edx,%eax
 813e65a:	c1 e0 02             	shl    $0x2,%eax
 813e65d:	01 d0                	add    %edx,%eax
 813e65f:	01 c0                	add    %eax,%eax
 813e661:	89 c3                	mov    %eax,%ebx
 813e663:	03 5d 10             	add    0x10(%ebp),%ebx
 813e666:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e669:	89 04 24             	mov    %eax,(%esp)
 813e66c:	e8 7f 00 f4 ff       	call   807e6f0 <atoi@plt>
 813e671:	89 43 06             	mov    %eax,0x6(%ebx)
 813e674:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e677:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e67b:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e682:	08 
 813e683:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813e68a:	e8 c1 fa f3 ff       	call   807e150 <strtok_r@plt>
 813e68f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e692:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e696:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e69a:	74 0d                	je     813e6a9 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x167>
 813e69c:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 813e6a0:	7f 07                	jg     813e6a9 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x167>
 813e6a2:	b8 01 00 00 00       	mov    $0x1,%eax
 813e6a7:	eb 05                	jmp    813e6ae <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x16c>
 813e6a9:	b8 00 00 00 00       	mov    $0x0,%eax
 813e6ae:	84 c0                	test   %al,%al
 813e6b0:	0f 85 09 ff ff ff    	jne    813e5bf <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x7d>
 813e6b6:	eb 01                	jmp    813e6b9 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x177>
 813e6b8:	90                   	nop
 813e6b9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e6bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e6c0:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813e6c7:	08 
 813e6c8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813e6cf:	e8 7c fa f3 ff       	call   807e150 <strtok_r@plt>
 813e6d4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813e6d7:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 813e6db:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 813e6df:	74 0f                	je     813e6f0 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x1ae>
 813e6e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e6e4:	3b 45 14             	cmp    0x14(%ebp),%eax
 813e6e7:	7d 07                	jge    813e6f0 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x1ae>
 813e6e9:	b8 01 00 00 00       	mov    $0x1,%eax
 813e6ee:	eb 05                	jmp    813e6f5 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x1b3>
 813e6f0:	b8 00 00 00 00       	mov    $0x0,%eax
 813e6f5:	84 c0                	test   %al,%al
 813e6f7:	0f 85 92 fe ff ff    	jne    813e58f <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi+0x4d>
 813e6fd:	b8 01 00 00 00       	mov    $0x1,%eax
 813e702:	83 c4 34             	add    $0x34,%esp
 813e705:	5b                   	pop    %ebx
 813e706:	5d                   	pop    %ebp
 813e707:	c3                   	ret

```

```c
// advancealtar::DB_Load::parseSlot @ 0x813e542

/* advancealtar::DB_Load::parseSlot(char*, advancealtar::_Slot*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseSlot(DB_Load *this,char *param_1,_Slot *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == (_Slot *)0x0)) {
    uVar3 = 0;
  }
  else {
    local_20 = (char *)0x0;
    local_1c = strtok_r(param_1,"|",&local_20);
    local_18 = 0;
    while( true ) {
      if ((local_1c == (char *)0x0) || (param_3 <= local_18)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      local_24 = (char *)0x0;
      local_14 = strtok_r(local_1c,",",&local_24);
      local_10 = 0;
      while( true ) {
        if ((local_14 == (char *)0x0) || (3 < local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || (local_14 == (char *)0x0)) break;
        if (local_10 == 1) {
          iVar1 = local_18 * 10;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar1 + 1) = iVar4;
        }
        else if (local_10 < 2) {
          if (local_10 == 0) {
            iVar1 = local_18 * 10;
            iVar4 = atoi(local_14);
            param_2[iVar1] = (_Slot)(0 < iVar4);
          }
        }
        else if (local_10 == 2) {
          iVar1 = local_18 * 10;
          iVar4 = atoi(local_14);
          param_2[iVar1 + 5] = SUB41(iVar4,0);
        }
        else if (local_10 == 3) {
          iVar1 = local_18 * 10;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar1 + 6) = iVar4;
        }
        local_14 = strtok_r((char *)0x0,",",&local_24);
        local_10 = local_10 + 1;
      }
      local_1c = strtok_r((char *)0x0,"|",&local_20);
      local_18 = local_18 + 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## parseStage

```asm
// === 0813e3e8 advancealtar::DB_Load::parseStage  [0x0813e3e8-0x813e541] ===
 813e3e8:	55                   	push   %ebp
 813e3e9:	89 e5                	mov    %esp,%ebp
 813e3eb:	53                   	push   %ebx
 813e3ec:	83 ec 34             	sub    $0x34,%esp
 813e3ef:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 813e3f3:	74 06                	je     813e3fb <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x13>
 813e3f5:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813e3f9:	75 0a                	jne    813e405 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x1d>
 813e3fb:	b8 00 00 00 00       	mov    $0x0,%eax
 813e400:	e9 36 01 00 00       	jmp    813e53b <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x153>
 813e405:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 813e40c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e40f:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e413:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813e41a:	08 
 813e41b:	8b 45 0c             	mov    0xc(%ebp),%eax
 813e41e:	89 04 24             	mov    %eax,(%esp)
 813e421:	e8 2a fd f3 ff       	call   807e150 <strtok_r@plt>
 813e426:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813e429:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 813e430:	e9 df 00 00 00       	jmp    813e514 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x12c>
 813e435:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 813e43c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e43f:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e443:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e44a:	08 
 813e44b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 813e44e:	89 04 24             	mov    %eax,(%esp)
 813e451:	e8 fa fc f3 ff       	call   807e150 <strtok_r@plt>
 813e456:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e459:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813e460:	eb 6d                	jmp    813e4cf <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0xe7>
 813e462:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e466:	0f 84 85 00 00 00    	je     813e4f1 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x109>
 813e46c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813e46f:	85 c0                	test   %eax,%eax
 813e471:	74 07                	je     813e47a <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x92>
 813e473:	83 f8 01             	cmp    $0x1,%eax
 813e476:	74 1c                	je     813e494 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0xac>
 813e478:	eb 33                	jmp    813e4ad <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0xc5>
 813e47a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e47d:	c1 e0 03             	shl    $0x3,%eax
 813e480:	89 c3                	mov    %eax,%ebx
 813e482:	03 5d 10             	add    0x10(%ebp),%ebx
 813e485:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e488:	89 04 24             	mov    %eax,(%esp)
 813e48b:	e8 60 02 f4 ff       	call   807e6f0 <atoi@plt>
 813e490:	89 03                	mov    %eax,(%ebx)
 813e492:	eb 19                	jmp    813e4ad <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0xc5>
 813e494:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e497:	c1 e0 03             	shl    $0x3,%eax
 813e49a:	89 c3                	mov    %eax,%ebx
 813e49c:	03 5d 10             	add    0x10(%ebp),%ebx
 813e49f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813e4a2:	89 04 24             	mov    %eax,(%esp)
 813e4a5:	e8 46 02 f4 ff       	call   807e6f0 <atoi@plt>
 813e4aa:	89 43 04             	mov    %eax,0x4(%ebx)
 813e4ad:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813e4b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e4b4:	c7 44 24 04 31 d8 b6 	movl   $0x8b6d831,0x4(%esp)
 813e4bb:	08 
 813e4bc:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813e4c3:	e8 88 fc f3 ff       	call   807e150 <strtok_r@plt>
 813e4c8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813e4cb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813e4cf:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813e4d3:	74 0d                	je     813e4e2 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0xfa>
 813e4d5:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 813e4d9:	7f 07                	jg     813e4e2 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0xfa>
 813e4db:	b8 01 00 00 00       	mov    $0x1,%eax
 813e4e0:	eb 05                	jmp    813e4e7 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0xff>
 813e4e2:	b8 00 00 00 00       	mov    $0x0,%eax
 813e4e7:	84 c0                	test   %al,%al
 813e4e9:	0f 85 73 ff ff ff    	jne    813e462 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x7a>
 813e4ef:	eb 01                	jmp    813e4f2 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x10a>
 813e4f1:	90                   	nop
 813e4f2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 813e4f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 813e4f9:	c7 44 24 04 2f d8 b6 	movl   $0x8b6d82f,0x4(%esp)
 813e500:	08 
 813e501:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 813e508:	e8 43 fc f3 ff       	call   807e150 <strtok_r@plt>
 813e50d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 813e510:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 813e514:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 813e518:	74 0f                	je     813e529 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x141>
 813e51a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813e51d:	3b 45 14             	cmp    0x14(%ebp),%eax
 813e520:	7d 07                	jge    813e529 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x141>
 813e522:	b8 01 00 00 00       	mov    $0x1,%eax
 813e527:	eb 05                	jmp    813e52e <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x146>
 813e529:	b8 00 00 00 00       	mov    $0x0,%eax
 813e52e:	84 c0                	test   %al,%al
 813e530:	0f 85 ff fe ff ff    	jne    813e435 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi+0x4d>
 813e536:	b8 01 00 00 00       	mov    $0x1,%eax
 813e53b:	83 c4 34             	add    $0x34,%esp
 813e53e:	5b                   	pop    %ebx
 813e53f:	5d                   	pop    %ebp
 813e540:	c3                   	ret
 813e541:	90                   	nop

```

```c
// advancealtar::DB_Load::parseStage @ 0x813e3e8

/* advancealtar::DB_Load::parseStage(char*, advancealtar::_Stage*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseStage(DB_Load *this,char *param_1,_Stage *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == (_Stage *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_20 = (char *)0x0;
    local_1c = strtok_r(param_1,"|",&local_20);
    local_18 = 0;
    while( true ) {
      if ((local_1c == (char *)0x0) || (param_3 <= local_18)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_24 = (char *)0x0;
      local_14 = strtok_r(local_1c,",",&local_24);
      local_10 = 0;
      while( true ) {
        if ((local_14 == (char *)0x0) || (1 < local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((!bVar1) || (local_14 == (char *)0x0)) break;
        if (local_10 == 0) {
          iVar3 = local_18 * 8;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar3) = iVar4;
        }
        else if (local_10 == 1) {
          iVar3 = local_18 * 8;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar3 + 4) = iVar4;
        }
        local_14 = strtok_r((char *)0x0,",",&local_24);
        local_10 = local_10 + 1;
      }
      local_1c = strtok_r((char *)0x0,"|",&local_20);
      local_18 = local_18 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

```

