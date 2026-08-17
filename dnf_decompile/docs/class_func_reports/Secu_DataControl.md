# Secu_DataControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SetControlData

```asm
// === 08286a30 Secu_DataControl::SetControlData  [0x08286a30-0x8286e3f] ===
 8286a30:	55                   	push   %ebp
 8286a31:	89 e5                	mov    %esp,%ebp
 8286a33:	53                   	push   %ebx
 8286a34:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 8286a3a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8286a3d:	8b 55 14             	mov    0x14(%ebp),%edx
 8286a40:	8b 45 18             	mov    0x18(%ebp),%eax
 8286a43:	88 4d 84             	mov    %cl,-0x7c(%ebp)
 8286a46:	66 89 55 80          	mov    %dx,-0x80(%ebp)
 8286a4a:	66 89 85 7c ff ff ff 	mov    %ax,-0x84(%ebp)
 8286a51:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8286a55:	0f 84 ce 03 00 00    	je     8286e29 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x3f9>
 8286a5b:	0f b6 45 84          	movzbl -0x7c(%ebp),%eax
 8286a5f:	83 f8 01             	cmp    $0x1,%eax
 8286a62:	0f 84 4e 01 00 00    	je     8286bb6 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x186>
 8286a68:	83 f8 01             	cmp    $0x1,%eax
 8286a6b:	7f 09                	jg     8286a76 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x46>
 8286a6d:	85 c0                	test   %eax,%eax
 8286a6f:	74 1c                	je     8286a8d <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x5d>
 8286a71:	e9 c0 03 00 00       	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286a76:	83 f8 02             	cmp    $0x2,%eax
 8286a79:	0f 84 62 02 00 00    	je     8286ce1 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x2b1>
 8286a7f:	83 f8 03             	cmp    $0x3,%eax
 8286a82:	0f 84 de 02 00 00    	je     8286d66 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x336>
 8286a88:	e9 a9 03 00 00       	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286a8d:	0f b7 45 80          	movzwl -0x80(%ebp),%eax
 8286a91:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8286a94:	0f b7 85 7c ff ff ff 	movzwl -0x84(%ebp),%eax
 8286a9b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8286a9e:	83 7d e4 64          	cmpl   $0x64,-0x1c(%ebp)
 8286aa2:	0f 8e cf 00 00 00    	jle    8286b77 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x147>
 8286aa8:	81 7d e4 a0 0f 00 00 	cmpl   $0xfa0,-0x1c(%ebp)
 8286aaf:	0f 8f c2 00 00 00    	jg     8286b77 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x147>
 8286ab5:	83 7d e8 09          	cmpl   $0x9,-0x18(%ebp)
 8286ab9:	0f 8f b8 00 00 00    	jg     8286b77 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x147>
 8286abf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286ac2:	89 04 24             	mov    %eax,(%esp)
 8286ac5:	e8 a4 38 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8286aca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8286ad1:	00 
 8286ad2:	89 04 24             	mov    %eax,(%esp)
 8286ad5:	e8 71 25 e8 ff       	call   810904b <_Z14NumberToStringji>
 8286ada:	89 c3                	mov    %eax,%ebx
 8286adc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8286ae3:	00 
 8286ae4:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8286aeb:	00 
 8286aec:	c7 44 24 04 40 1d c1 	movl   $0x8c11d40,0x4(%esp)
 8286af3:	08 
 8286af4:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8286af7:	89 04 24             	mov    %eax,(%esp)
 8286afa:	e8 19 8c 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8286aff:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8286b02:	89 44 24 10          	mov    %eax,0x10(%esp)
 8286b06:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8286b09:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8286b0d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8286b11:	c7 44 24 04 00 10 c1 	movl   $0x8c11000,0x4(%esp)
 8286b18:	08 
 8286b19:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8286b1c:	89 04 24             	mov    %eax,(%esp)
 8286b1f:	e8 64 8c 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8286b24:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8286b2b:	eb 3d                	jmp    8286b6a <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x13a>
 8286b2d:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8286b30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286b33:	89 04 24             	mov    %eax,(%esp)
 8286b36:	e8 1f 2e e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8286b3b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8286b42:	00 
 8286b43:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8286b4a:	00 
 8286b4b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8286b52:	00 
 8286b53:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8286b57:	8b 55 0c             	mov    0xc(%ebp),%edx
 8286b5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8286b5e:	89 04 24             	mov    %eax,(%esp)
 8286b61:	e8 18 21 e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8286b66:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8286b6a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8286b6d:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8286b70:	0f 9c c0             	setl   %al
 8286b73:	84 c0                	test   %al,%al
 8286b75:	75 b6                	jne    8286b2d <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0xfd>
 8286b77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286b7a:	89 04 24             	mov    %eax,(%esp)
 8286b7d:	e8 d8 2d e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8286b82:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8286b89:	00 
 8286b8a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8286b91:	00 
 8286b92:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8286b99:	00 
 8286b9a:	c7 44 24 08 62 02 00 	movl   $0x262,0x8(%esp)
 8286ba1:	00 
 8286ba2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8286ba5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8286ba9:	89 04 24             	mov    %eax,(%esp)
 8286bac:	e8 cd 20 e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8286bb1:	e9 80 02 00 00       	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286bb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286bb9:	89 04 24             	mov    %eax,(%esp)
 8286bbc:	e8 db ec eb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8286bc1:	83 f0 01             	xor    $0x1,%eax
 8286bc4:	84 c0                	test   %al,%al
 8286bc6:	0f 85 60 02 00 00    	jne    8286e2c <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x3fc>
 8286bcc:	c7 45 9c 10 27 00 00 	movl   $0x2710,-0x64(%ebp)
 8286bd3:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8286bda:	0f b7 45 80          	movzwl -0x80(%ebp),%eax
 8286bde:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8286be1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8286be4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286be8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8286beb:	89 04 24             	mov    %eax,(%esp)
 8286bee:	e8 25 76 e0 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8286bf3:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8286bf6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8286bfa:	89 04 24             	mov    %eax,(%esp)
 8286bfd:	e8 0c 8d e5 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8286c02:	8b 00                	mov    (%eax),%eax
 8286c04:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8286c07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286c0a:	89 04 24             	mov    %eax,(%esp)
 8286c0d:	e8 5c 37 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8286c12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8286c19:	00 
 8286c1a:	89 04 24             	mov    %eax,(%esp)
 8286c1d:	e8 29 24 e8 ff       	call   810904b <_Z14NumberToStringji>
 8286c22:	89 c3                	mov    %eax,%ebx
 8286c24:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8286c2b:	00 
 8286c2c:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 8286c33:	00 
 8286c34:	c7 44 24 04 40 1d c1 	movl   $0x8c11d40,0x4(%esp)
 8286c3b:	08 
 8286c3c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8286c3f:	89 04 24             	mov    %eax,(%esp)
 8286c42:	e8 d1 8a 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8286c47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8286c4a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8286c4e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8286c52:	c7 44 24 04 34 10 c1 	movl   $0x8c11034,0x4(%esp)
 8286c59:	08 
 8286c5a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8286c5d:	89 04 24             	mov    %eax,(%esp)
 8286c60:	e8 23 8b 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8286c65:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8286c68:	0f b7 c0             	movzwl %ax,%eax
 8286c6b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8286c6e:	81 c2 f0 e3 08 00    	add    $0x8e3f0,%edx
 8286c74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286c78:	89 14 24             	mov    %edx,(%esp)
 8286c7b:	e8 5e 04 00 00       	call   82870de <_ZN8WongWork12CMCAPManager8setPointEt>
 8286c80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286c83:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 8286c88:	89 04 24             	mov    %eax,(%esp)
 8286c8b:	e8 14 82 fa ff       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 8286c90:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 8286c95:	0f 97 c0             	seta   %al
 8286c98:	84 c0                	test   %al,%al
 8286c9a:	0f 84 8f 01 00 00    	je     8286e2f <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x3ff>
 8286ca0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286ca3:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 8286ca8:	89 04 24             	mov    %eax,(%esp)
 8286cab:	e8 f4 81 fa ff       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 8286cb0:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8286cb6:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8286cbb:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8286cc1:	f7 e2                	mul    %edx
 8286cc3:	c1 ea 05             	shr    $0x5,%edx
 8286cc6:	b8 64 00 00 00       	mov    $0x64,%eax
 8286ccb:	29 d0                	sub    %edx,%eax
 8286ccd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286cd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286cd4:	89 04 24             	mov    %eax,(%esp)
 8286cd7:	e8 80 04 00 00       	call   828715c <_ZN5CUser14setStdDropRateEi>
 8286cdc:	e9 55 01 00 00       	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286ce1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286ce4:	89 04 24             	mov    %eax,(%esp)
 8286ce7:	e8 b0 eb eb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8286cec:	83 f0 01             	xor    $0x1,%eax
 8286cef:	84 c0                	test   %al,%al
 8286cf1:	0f 85 3b 01 00 00    	jne    8286e32 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x402>
 8286cf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286cfa:	89 04 24             	mov    %eax,(%esp)
 8286cfd:	e8 6c 36 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8286d02:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8286d09:	00 
 8286d0a:	89 04 24             	mov    %eax,(%esp)
 8286d0d:	e8 39 23 e8 ff       	call   810904b <_Z14NumberToStringji>
 8286d12:	89 c3                	mov    %eax,%ebx
 8286d14:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8286d1b:	00 
 8286d1c:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8286d23:	00 
 8286d24:	c7 44 24 04 40 1d c1 	movl   $0x8c11d40,0x4(%esp)
 8286d2b:	08 
 8286d2c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8286d2f:	89 04 24             	mov    %eax,(%esp)
 8286d32:	e8 e1 89 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8286d37:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8286d3b:	c7 44 24 04 64 10 c1 	movl   $0x8c11064,0x4(%esp)
 8286d42:	08 
 8286d43:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8286d46:	89 04 24             	mov    %eax,(%esp)
 8286d49:	e8 3a 8a 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8286d4e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8286d55:	00 
 8286d56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286d59:	89 04 24             	mov    %eax,(%esp)
 8286d5c:	e8 57 95 3f 00       	call   86802b8 <_ZN5CUser24reqHumanCertify4ClearMapEb>
 8286d61:	e9 d0 00 00 00       	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286d69:	89 04 24             	mov    %eax,(%esp)
 8286d6c:	e8 2b eb eb ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8286d71:	83 f0 01             	xor    $0x1,%eax
 8286d74:	84 c0                	test   %al,%al
 8286d76:	0f 85 b9 00 00 00    	jne    8286e35 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x405>
 8286d7c:	c7 45 c8 64 00 00 00 	movl   $0x64,-0x38(%ebp)
 8286d83:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8286d8a:	0f b7 45 80          	movzwl -0x80(%ebp),%eax
 8286d8e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8286d91:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8286d94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286d98:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8286d9b:	89 04 24             	mov    %eax,(%esp)
 8286d9e:	e8 75 74 e0 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8286da3:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8286da6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8286daa:	89 04 24             	mov    %eax,(%esp)
 8286dad:	e8 5c 8b e5 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8286db2:	8b 00                	mov    (%eax),%eax
 8286db4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8286db7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286dba:	89 04 24             	mov    %eax,(%esp)
 8286dbd:	e8 ac 35 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8286dc2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8286dc9:	00 
 8286dca:	89 04 24             	mov    %eax,(%esp)
 8286dcd:	e8 79 22 e8 ff       	call   810904b <_Z14NumberToStringji>
 8286dd2:	89 c3                	mov    %eax,%ebx
 8286dd4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8286ddb:	00 
 8286ddc:	c7 44 24 08 4a 00 00 	movl   $0x4a,0x8(%esp)
 8286de3:	00 
 8286de4:	c7 44 24 04 40 1d c1 	movl   $0x8c11d40,0x4(%esp)
 8286deb:	08 
 8286dec:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8286def:	89 04 24             	mov    %eax,(%esp)
 8286df2:	e8 21 89 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8286df7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8286dfa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8286dfe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8286e02:	c7 44 24 04 8c 10 c1 	movl   $0x8c1108c,0x4(%esp)
 8286e09:	08 
 8286e0a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8286e0d:	89 04 24             	mov    %eax,(%esp)
 8286e10:	e8 73 89 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8286e15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8286e18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286e1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286e1f:	89 04 24             	mov    %eax,(%esp)
 8286e22:	e8 35 03 00 00       	call   828715c <_ZN5CUser14setStdDropRateEi>
 8286e27:	eb 0d                	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286e29:	90                   	nop
 8286e2a:	eb 0a                	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286e2c:	90                   	nop
 8286e2d:	eb 07                	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286e2f:	90                   	nop
 8286e30:	eb 04                	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286e32:	90                   	nop
 8286e33:	eb 01                	jmp    8286e36 <_ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x406>
 8286e35:	90                   	nop
 8286e36:	81 c4 b4 00 00 00    	add    $0xb4,%esp
 8286e3c:	5b                   	pop    %ebx
 8286e3d:	5d                   	pop    %ebp
 8286e3e:	c3                   	ret
 8286e3f:	90                   	nop

```

```c
// Secu_DataControl::SetControlData @ 0x8286a30

/* Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short) */

void __thiscall
Secu_DataControl::SetControlData
          (Secu_DataControl *this,CUser *param_1,uchar param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  int *piVar5;
  cMyTrace local_78 [16];
  int local_68 [3];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  int local_3c [3];
  cMyTrace local_30 [16];
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    if (param_2 == '\x01') {
      cVar1 = CUser::isGMUser(param_1);
      if (cVar1 == '\x01') {
        local_68[0] = 10000;
        local_68[1] = 0;
        local_68[2] = (int)param_3;
        piVar5 = std::max<int>(local_68 + 2,local_68 + 1);
        piVar5 = std::min<int>(piVar5,local_68);
        local_14 = *piVar5;
        uVar2 = CUser::get_acc_id(param_1);
        uVar3 = NumberToString(uVar2,0);
        cMyTrace::cMyTrace(local_5c,
                           "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                           ,0x32,0);
        cMyTrace::operator()
                  (local_5c,"[SecuCommand] (mid:%s) CleanPad Set Point : %d",uVar3,local_14);
        WongWork::CMCAPManager::setPoint((CMCAPManager *)(param_1 + 0x8e3f0),(ushort)local_14);
        uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
        if (1000 < uVar2) {
          uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
          CUser::setStdDropRate(param_1,100 - uVar2 / 100);
        }
      }
    }
    else if (param_2 < 2) {
      if (param_2 == '\0') {
        local_20 = (uint)param_3;
        local_1c = (uint)param_4;
        if (((100 < local_20) && (local_20 < 0xfa1)) && (local_1c < 10)) {
          uVar2 = CUser::get_acc_id(param_1);
          uVar3 = NumberToString(uVar2,0);
          cMyTrace::cMyTrace(local_78,
                             "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                             ,0x1e,0);
          cMyTrace::operator()
                    (local_78,"[SecuCommand] (mid:%s) Hacktype : %d     Cnt : %d ",uVar3,local_20,
                     local_1c);
          for (local_18 = 0; uVar2 = local_20, local_18 < (int)local_1c; local_18 = local_18 + 1) {
            pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,uVar2,1,0,0);
          }
        }
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x262,1,0,0);
      }
    }
    else if (param_2 == '\x02') {
      cVar1 = CUser::isGMUser(param_1);
      if (cVar1 == '\x01') {
        uVar2 = CUser::get_acc_id(param_1);
        uVar3 = NumberToString(uVar2,0);
        cMyTrace::cMyTrace(local_4c,
                           "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                           ,0x40,0);
        cMyTrace::operator()(local_4c,"[SecuCommand] (mid:%s) CleanPad Open!",uVar3);
        CUser::reqHumanCertify4ClearMap(param_1,false);
      }
    }
    else if ((param_2 == '\x03') && (cVar1 = CUser::isGMUser(param_1), cVar1 == '\x01')) {
      local_3c[0] = 100;
      local_3c[1] = 0;
      local_3c[2] = (int)param_3;
      piVar5 = std::max<int>(local_3c + 2,local_3c + 1);
      piVar5 = std::min<int>(piVar5,local_3c);
      local_10 = *piVar5;
      uVar2 = CUser::get_acc_id(param_1);
      uVar3 = NumberToString(uVar2,0);
      cMyTrace::cMyTrace(local_30,
                         "void Secu_DataControl::SetControlData(CUser*, unsigned char, short unsigned int, short unsigned int)"
                         ,0x4a,0);
      cMyTrace::operator()(local_30,"[SecuCommand] (mid:%s) DropRate : %d",uVar3,local_10);
      CUser::setStdDropRate(param_1,local_10);
    }
  }
  return;
}

```

---

## UpdateSecurityServiceState

```asm
// === 08286e40 Secu_DataControl::UpdateSecurityServiceState  [0x08286e40-0x8287081] ===
 8286e40:	55                   	push   %ebp
 8286e41:	89 e5                	mov    %esp,%ebp
 8286e43:	57                   	push   %edi
 8286e44:	56                   	push   %esi
 8286e45:	53                   	push   %ebx
 8286e46:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8286e4c:	8b 55 10             	mov    0x10(%ebp),%edx
 8286e4f:	8b 45 14             	mov    0x14(%ebp),%eax
 8286e52:	88 95 74 ff ff ff    	mov    %dl,-0x8c(%ebp)
 8286e58:	88 85 70 ff ff ff    	mov    %al,-0x90(%ebp)
 8286e5e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8286e62:	0f 84 0f 02 00 00    	je     8287077 <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x237>
 8286e68:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8286e6c:	0f b6 85 74 ff ff ff 	movzbl -0x8c(%ebp),%eax
 8286e73:	85 c0                	test   %eax,%eax
 8286e75:	74 0a                	je     8286e81 <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x41>
 8286e77:	83 f8 01             	cmp    $0x1,%eax
 8286e7a:	74 3c                	je     8286eb8 <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x78>
 8286e7c:	e9 4d 01 00 00       	jmp    8286fce <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x18e>
 8286e81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286e84:	89 04 24             	mov    %eax,(%esp)
 8286e87:	e8 94 8e fa ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8286e8c:	89 04 24             	mov    %eax,(%esp)
 8286e8f:	e8 7a 80 fa ff       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 8286e94:	84 c0                	test   %al,%al
 8286e96:	0f 84 31 01 00 00    	je     8286fcd <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x18d>
 8286e9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286e9f:	89 04 24             	mov    %eax,(%esp)
 8286ea2:	e8 79 8e fa ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8286ea7:	89 04 24             	mov    %eax,(%esp)
 8286eaa:	e8 b9 6e 37 00       	call   85fdd68 <_ZN8WongWork13CSecurityCard4initEv>
 8286eaf:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 8286eb3:	e9 16 01 00 00       	jmp    8286fce <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x18e>
 8286eb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286ebb:	89 04 24             	mov    %eax,(%esp)
 8286ebe:	e8 6b 8e fa ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8286ec3:	89 04 24             	mov    %eax,(%esp)
 8286ec6:	e8 0f 81 fa ff       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 8286ecb:	84 c0                	test   %al,%al
 8286ecd:	0f 84 fb 00 00 00    	je     8286fce <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x18e>
 8286ed3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286ed6:	89 04 24             	mov    %eax,(%esp)
 8286ed9:	e8 50 8e fa ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8286ede:	89 04 24             	mov    %eax,(%esp)
 8286ee1:	e8 00 81 fa ff       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 8286ee6:	83 f0 01             	xor    $0x1,%eax
 8286ee9:	84 c0                	test   %al,%al
 8286eeb:	0f 84 d3 00 00 00    	je     8286fc4 <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x184>
 8286ef1:	8d 5d a4             	lea    -0x5c(%ebp),%ebx
 8286ef4:	b8 00 00 00 00       	mov    $0x0,%eax
 8286ef9:	ba 09 00 00 00       	mov    $0x9,%edx
 8286efe:	89 df                	mov    %ebx,%edi
 8286f00:	89 d1                	mov    %edx,%ecx
 8286f02:	f3 ab                	rep stos %eax,%es:(%edi)
 8286f04:	8d 5d 80             	lea    -0x80(%ebp),%ebx
 8286f07:	b8 00 00 00 00       	mov    $0x0,%eax
 8286f0c:	ba 09 00 00 00       	mov    $0x9,%edx
 8286f11:	89 df                	mov    %ebx,%edi
 8286f13:	89 d1                	mov    %edx,%ecx
 8286f15:	f3 ab                	rep stos %eax,%es:(%edi)
 8286f17:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8286f1e:	00 
 8286f1f:	8b 45 18             	mov    0x18(%ebp),%eax
 8286f22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8286f26:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8286f29:	89 04 24             	mov    %eax,(%esp)
 8286f2c:	e8 9f 69 df ff       	call   807d8d0 <strncpy@plt>
 8286f31:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8286f38:	00 
 8286f39:	c7 44 24 08 a0 00 00 	movl   $0xa0,0x8(%esp)
 8286f40:	00 
 8286f41:	c7 44 24 04 e0 1c c1 	movl   $0x8c11ce0,0x4(%esp)
 8286f48:	08 
 8286f49:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8286f4c:	89 04 24             	mov    %eax,(%esp)
 8286f4f:	e8 c4 87 2c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8286f54:	8b 45 18             	mov    0x18(%ebp),%eax
 8286f57:	89 44 24 08          	mov    %eax,0x8(%esp)
 8286f5b:	c7 44 24 04 b1 10 c1 	movl   $0x8c110b1,0x4(%esp)
 8286f62:	08 
 8286f63:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8286f66:	89 04 24             	mov    %eax,(%esp)
 8286f69:	e8 1a 88 2c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8286f6e:	a1 68 be 40 09       	mov    0x940be68,%eax
 8286f73:	8d 55 80             	lea    -0x80(%ebp),%edx
 8286f76:	89 54 24 08          	mov    %edx,0x8(%esp)
 8286f7a:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8286f7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8286f81:	89 04 24             	mov    %eax,(%esp)
 8286f84:	e8 0f 54 1e 00       	call   846c398 <_Z11encryptAES_P9CRijndaelPcS1_>
 8286f89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286f8c:	89 04 24             	mov    %eax,(%esp)
 8286f8f:	e8 9a 8d fa ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8286f94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8286f9b:	00 
 8286f9c:	89 04 24             	mov    %eax,(%esp)
 8286f9f:	e8 88 01 00 00       	call   828712c <_ZN8Sanicova4CPad10setFailCntEi>
 8286fa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8286fa7:	89 04 24             	mov    %eax,(%esp)
 8286faa:	e8 7f 8d fa ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8286faf:	8d 55 80             	lea    -0x80(%ebp),%edx
 8286fb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8286fb6:	89 04 24             	mov    %eax,(%esp)
 8286fb9:	e8 7c 01 00 00       	call   828713a <_ZN8Sanicova4CPad11setPasswordEPc>
 8286fbe:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 8286fc2:	eb 0a                	jmp    8286fce <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x18e>
 8286fc4:	c6 85 70 ff ff ff 01 	movb   $0x1,-0x90(%ebp)
 8286fcb:	eb 01                	jmp    8286fce <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x18e>
 8286fcd:	90                   	nop
 8286fce:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8286fd2:	0f 84 9f 00 00 00    	je     8287077 <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x237>
 8286fd8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8286fdb:	89 04 24             	mov    %eax,(%esp)
 8286fde:	e8 69 6d 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8286fe3:	c7 44 24 08 59 01 00 	movl   $0x159,0x8(%esp)
 8286fea:	00 
 8286feb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8286ff2:	00 
 8286ff3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8286ff6:	89 04 24             	mov    %eax,(%esp)
 8286ff9:	e8 fe 48 e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8286ffe:	0f b6 85 74 ff ff ff 	movzbl -0x8c(%ebp),%eax
 8287005:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287009:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828700c:	89 04 24             	mov    %eax,(%esp)
 828700f:	e8 0c 49 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8287014:	0f b6 85 70 ff ff ff 	movzbl -0x90(%ebp),%eax
 828701b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828701f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8287022:	89 04 24             	mov    %eax,(%esp)
 8287025:	e8 f6 48 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828702a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8287031:	00 
 8287032:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8287035:	89 04 24             	mov    %eax,(%esp)
 8287038:	e8 1b 49 e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 828703d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8287040:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287044:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287047:	89 04 24             	mov    %eax,(%esp)
 828704a:	e8 6b 15 3c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 828704f:	eb 1b                	jmp    828706c <_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc+0x22c>
 8287051:	89 d3                	mov    %edx,%ebx
 8287053:	89 c6                	mov    %eax,%esi
 8287055:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8287058:	89 04 24             	mov    %eax,(%esp)
 828705b:	e8 20 6e 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8287060:	89 f0                	mov    %esi,%eax
 8287062:	89 da                	mov    %ebx,%edx
 8287064:	89 04 24             	mov    %eax,(%esp)
 8287067:	e8 e4 c6 85 00       	call   8ae3750 <_Unwind_Resume>
 828706c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828706f:	89 04 24             	mov    %eax,(%esp)
 8287072:	e8 09 6e 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8287077:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 828707d:	5b                   	pop    %ebx
 828707e:	5e                   	pop    %esi
 828707f:	5f                   	pop    %edi
 8287080:	5d                   	pop    %ebp
 8287081:	c3                   	ret

```

```c
// Secu_DataControl::UpdateSecurityServiceState @ 0x8286e40

/* Secu_DataControl::UpdateSecurityServiceState(CUser*, unsigned char, unsigned char, char*) */

void __thiscall
Secu_DataControl::UpdateSecurityServiceState
          (Secu_DataControl *this,CUser *param_1,uchar param_2,uchar param_3,char *param_4)

{
  char cVar1;
  CSecurityCard *pCVar2;
  CPad *pCVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  byte local_94;
  char local_84 [36];
  char local_60 [36];
  PacketGuard local_3c [12];
  cMyTrace local_30 [19];
  char local_1d;
  
  bVar6 = 0;
  local_94 = param_3;
  if (param_1 != (CUser *)0x0) {
    local_1d = '\0';
    if (param_2 == '\0') {
      pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      cVar1 = WongWork::CSecurityCard::isActivate(pCVar2);
      if (cVar1 != '\0') {
        pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        WongWork::CSecurityCard::init(pCVar2);
        local_1d = '\x01';
      }
    }
    else if (param_2 == '\x01') {
      pCVar3 = (CPad *)CUser::getPad(param_1);
      cVar1 = Sanicova::CPad::isActivate(pCVar3);
      if (cVar1 != '\0') {
        pCVar3 = (CPad *)CUser::getPad(param_1);
        cVar1 = Sanicova::CPad::isCertified(pCVar3);
        if (cVar1 == '\x01') {
          local_94 = 1;
        }
        else {
          pcVar5 = local_60;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
          }
          pcVar5 = local_84;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
          }
          strncpy(local_60,param_4,8);
          cMyTrace::cMyTrace(local_30,
                             "void Secu_DataControl::UpdateSecurityServiceState(CUser*, unsigned char, unsigned char, char*)"
                             ,0xa0,0);
          cMyTrace::operator()(local_30,"[Secu_Web_Conn] (%s)  ",param_4);
          encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_60,local_84);
          pCVar3 = (CPad *)CUser::getPad(param_1);
          Sanicova::CPad::setFailCnt(pCVar3,0);
          pCVar3 = (CPad *)CUser::getPad(param_1);
          Sanicova::CPad::setPassword(pCVar3,local_84);
          local_1d = '\x01';
        }
      }
    }
    if (local_1d != '\0') {
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08286ff9 to 0828704e has its CatchHandler @ 08287051 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x159);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(uint)param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(uint)local_94);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      CUser::Send(param_1,local_3c);
      PacketGuard::~PacketGuard(local_3c);
    }
  }
  return;
}

```

