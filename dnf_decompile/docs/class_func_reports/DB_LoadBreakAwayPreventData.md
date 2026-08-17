# DB_LoadBreakAwayPreventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084389fe DB_LoadBreakAwayPreventData::dispatch  [0x084389fe-0x843915b] ===
 84389fe:	55                   	push   %ebp
 84389ff:	89 e5                	mov    %esp,%ebp
 8438a01:	56                   	push   %esi
 8438a02:	53                   	push   %ebx
 8438a03:	81 ec 40 03 00 00    	sub    $0x340,%esp
 8438a09:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8438a0e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8438a15:	00 
 8438a16:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8438a1d:	00 
 8438a1e:	89 04 24             	mov    %eax,(%esp)
 8438a21:	e8 18 c8 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8438a26:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8438a29:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 8438a2d:	8d 45 c7             	lea    -0x39(%ebp),%eax
 8438a30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8438a34:	8b 45 14             	mov    0x14(%ebp),%eax
 8438a37:	89 04 24             	mov    %eax,(%esp)
 8438a3a:	e8 3d 3a 1e 00       	call   861c47c <_ZN6StreamrsERb>
 8438a3f:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438a45:	89 04 24             	mov    %eax,(%esp)
 8438a48:	e8 63 48 ee ff       	call   831d2b0 <_ZN37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGERC1Ev>
 8438a4d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8438a54:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8438a5b:	c7 44 24 04 5c 43 c5 	movl   $0x8c5435c,0x4(%esp)
 8438a62:	08 
 8438a63:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438a66:	89 04 24             	mov    %eax,(%esp)
 8438a69:	e8 52 b7 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8438a6e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8438a75:	00 
 8438a76:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438a79:	89 04 24             	mov    %eax,(%esp)
 8438a7c:	e8 a5 b8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438a81:	83 f0 01             	xor    $0x1,%eax
 8438a84:	84 c0                	test   %al,%al
 8438a86:	74 0a                	je     8438a92 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x94>
 8438a88:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438a8d:	e9 bd 06 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438a92:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438a95:	89 04 24             	mov    %eax,(%esp)
 8438a98:	e8 cf 98 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8438a9d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8438aa0:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 8438aa4:	0f 85 cc 01 00 00    	jne    8438c76 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x278>
 8438aaa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438aad:	89 04 24             	mov    %eax,(%esp)
 8438ab0:	e8 07 ba fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8438ab5:	83 f0 01             	xor    $0x1,%eax
 8438ab8:	84 c0                	test   %al,%al
 8438aba:	74 0a                	je     8438ac6 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0xc8>
 8438abc:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438ac1:	e9 89 06 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438ac6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8438ac9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438acd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8438ad4:	00 
 8438ad5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438ad8:	89 04 24             	mov    %eax,(%esp)
 8438adb:	e8 4c de cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8438ae0:	83 f0 01             	xor    $0x1,%eax
 8438ae3:	84 c0                	test   %al,%al
 8438ae5:	74 0a                	je     8438af1 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0xf3>
 8438ae7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438aec:	e9 5e 06 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438af1:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438af7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438afb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8438b02:	00 
 8438b03:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438b06:	89 04 24             	mov    %eax,(%esp)
 8438b09:	e8 de 52 cc ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8438b0e:	83 f0 01             	xor    $0x1,%eax
 8438b11:	84 c0                	test   %al,%al
 8438b13:	74 0a                	je     8438b1f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x121>
 8438b15:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438b1a:	e9 30 06 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438b1f:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438b25:	83 c0 02             	add    $0x2,%eax
 8438b28:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438b2c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8438b33:	00 
 8438b34:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438b37:	89 04 24             	mov    %eax,(%esp)
 8438b3a:	e8 ad 52 cc ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8438b3f:	83 f0 01             	xor    $0x1,%eax
 8438b42:	84 c0                	test   %al,%al
 8438b44:	74 0a                	je     8438b50 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x152>
 8438b46:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438b4b:	e9 ff 05 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438b50:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438b56:	83 c0 04             	add    $0x4,%eax
 8438b59:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438b5d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8438b64:	00 
 8438b65:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438b68:	89 04 24             	mov    %eax,(%esp)
 8438b6b:	e8 7c 52 cc ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8438b70:	83 f0 01             	xor    $0x1,%eax
 8438b73:	84 c0                	test   %al,%al
 8438b75:	74 0a                	je     8438b81 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x183>
 8438b77:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438b7c:	e9 ce 05 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438b81:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438b87:	83 c0 06             	add    $0x6,%eax
 8438b8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438b8e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8438b95:	00 
 8438b96:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438b99:	89 04 24             	mov    %eax,(%esp)
 8438b9c:	e8 4b 52 cc ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8438ba1:	83 f0 01             	xor    $0x1,%eax
 8438ba4:	84 c0                	test   %al,%al
 8438ba6:	74 0a                	je     8438bb2 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x1b4>
 8438ba8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438bad:	e9 9d 05 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438bb2:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438bb8:	83 c0 08             	add    $0x8,%eax
 8438bbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438bbf:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8438bc6:	00 
 8438bc7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438bca:	89 04 24             	mov    %eax,(%esp)
 8438bcd:	e8 1a 52 cc ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8438bd2:	83 f0 01             	xor    $0x1,%eax
 8438bd5:	84 c0                	test   %al,%al
 8438bd7:	74 0a                	je     8438be3 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x1e5>
 8438bd9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438bde:	e9 6c 05 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438be3:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438be9:	83 c0 0a             	add    $0xa,%eax
 8438bec:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438bf0:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8438bf7:	00 
 8438bf8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438bfb:	89 04 24             	mov    %eax,(%esp)
 8438bfe:	e8 e9 51 cc ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8438c03:	83 f0 01             	xor    $0x1,%eax
 8438c06:	84 c0                	test   %al,%al
 8438c08:	74 0a                	je     8438c14 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x216>
 8438c0a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438c0f:	e9 3b 05 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438c14:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438c1a:	83 c0 0c             	add    $0xc,%eax
 8438c1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438c21:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8438c28:	00 
 8438c29:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438c2c:	89 04 24             	mov    %eax,(%esp)
 8438c2f:	e8 b8 51 cc ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8438c34:	83 f0 01             	xor    $0x1,%eax
 8438c37:	84 c0                	test   %al,%al
 8438c39:	74 0a                	je     8438c45 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x247>
 8438c3b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438c40:	e9 0a 05 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438c45:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8438c4b:	83 c0 0e             	add    $0xe,%eax
 8438c4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438c52:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8438c59:	00 
 8438c5a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438c5d:	89 04 24             	mov    %eax,(%esp)
 8438c60:	e8 ef 51 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8438c65:	83 f0 01             	xor    $0x1,%eax
 8438c68:	84 c0                	test   %al,%al
 8438c6a:	74 14                	je     8438c80 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x282>
 8438c6c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438c71:	e9 d9 04 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438c76:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438c7b:	e9 cf 04 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438c80:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8438c84:	83 f0 01             	xor    $0x1,%eax
 8438c87:	84 c0                	test   %al,%al
 8438c89:	0f 84 a0 00 00 00    	je     8438d2f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x331>
 8438c8f:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8438c92:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8438c96:	0f b6 c0             	movzbl %al,%eax
 8438c99:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8438c9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438ca1:	c7 44 24 04 10 44 c5 	movl   $0x8c54410,0x4(%esp)
 8438ca8:	08 
 8438ca9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438cac:	89 04 24             	mov    %eax,(%esp)
 8438caf:	e8 0c b5 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8438cb4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8438cbb:	00 
 8438cbc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438cbf:	89 04 24             	mov    %eax,(%esp)
 8438cc2:	e8 5f b6 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438cc7:	83 f0 01             	xor    $0x1,%eax
 8438cca:	84 c0                	test   %al,%al
 8438ccc:	75 11                	jne    8438cdf <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x2e1>
 8438cce:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438cd1:	89 04 24             	mov    %eax,(%esp)
 8438cd4:	e8 37 b6 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8438cd9:	09 d0                	or     %edx,%eax
 8438cdb:	85 c0                	test   %eax,%eax
 8438cdd:	75 07                	jne    8438ce6 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x2e8>
 8438cdf:	b8 01 00 00 00       	mov    $0x1,%eax
 8438ce4:	eb 05                	jmp    8438ceb <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x2ed>
 8438ce6:	b8 00 00 00 00       	mov    $0x0,%eax
 8438ceb:	84 c0                	test   %al,%al
 8438ced:	74 36                	je     8438d25 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x327>
 8438cef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8438cf6:	00 
 8438cf7:	c7 44 24 08 84 86 00 	movl   $0x8684,0x8(%esp)
 8438cfe:	00 
 8438cff:	c7 44 24 04 c0 bb c5 	movl   $0x8c5bbc0,0x4(%esp)
 8438d06:	08 
 8438d07:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8438d0a:	89 04 24             	mov    %eax,(%esp)
 8438d0d:	e8 06 6a 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8438d12:	c7 44 24 04 4c 44 c5 	movl   $0x8c5444c,0x4(%esp)
 8438d19:	08 
 8438d1a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8438d1d:	89 04 24             	mov    %eax,(%esp)
 8438d20:	e8 63 6a 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8438d25:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438d2a:	e9 20 04 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438d2f:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8438d32:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8438d36:	0f b6 c0             	movzbl %al,%eax
 8438d39:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8438d3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438d41:	c7 44 24 04 10 44 c5 	movl   $0x8c54410,0x4(%esp)
 8438d48:	08 
 8438d49:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438d4c:	89 04 24             	mov    %eax,(%esp)
 8438d4f:	e8 6c b4 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8438d54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8438d5b:	00 
 8438d5c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438d5f:	89 04 24             	mov    %eax,(%esp)
 8438d62:	e8 bf b5 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438d67:	83 f0 01             	xor    $0x1,%eax
 8438d6a:	84 c0                	test   %al,%al
 8438d6c:	75 11                	jne    8438d7f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x381>
 8438d6e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438d71:	89 04 24             	mov    %eax,(%esp)
 8438d74:	e8 97 b5 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8438d79:	09 d0                	or     %edx,%eax
 8438d7b:	85 c0                	test   %eax,%eax
 8438d7d:	75 07                	jne    8438d86 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x388>
 8438d7f:	b8 01 00 00 00       	mov    $0x1,%eax
 8438d84:	eb 05                	jmp    8438d8b <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x38d>
 8438d86:	b8 00 00 00 00       	mov    $0x0,%eax
 8438d8b:	84 c0                	test   %al,%al
 8438d8d:	74 36                	je     8438dc5 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x3c7>
 8438d8f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8438d96:	00 
 8438d97:	c7 44 24 08 8a 86 00 	movl   $0x868a,0x8(%esp)
 8438d9e:	00 
 8438d9f:	c7 44 24 04 c0 bb c5 	movl   $0x8c5bbc0,0x4(%esp)
 8438da6:	08 
 8438da7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8438daa:	89 04 24             	mov    %eax,(%esp)
 8438dad:	e8 66 69 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8438db2:	c7 44 24 04 74 44 c5 	movl   $0x8c54474,0x4(%esp)
 8438db9:	08 
 8438dba:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8438dbd:	89 04 24             	mov    %eax,(%esp)
 8438dc0:	e8 c3 69 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8438dc5:	0f b6 45 c7          	movzbl -0x39(%ebp),%eax
 8438dc9:	88 85 e2 fc ff ff    	mov    %al,-0x31e(%ebp)
 8438dcf:	c7 44 24 04 9c 44 c5 	movl   $0x8c5449c,0x4(%esp)
 8438dd6:	08 
 8438dd7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438dda:	89 04 24             	mov    %eax,(%esp)
 8438ddd:	e8 de b3 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8438de2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8438de9:	00 
 8438dea:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438ded:	89 04 24             	mov    %eax,(%esp)
 8438df0:	e8 31 b5 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8438df5:	83 f0 01             	xor    $0x1,%eax
 8438df8:	84 c0                	test   %al,%al
 8438dfa:	74 0a                	je     8438e06 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x408>
 8438dfc:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438e01:	e9 49 03 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438e06:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438e09:	89 04 24             	mov    %eax,(%esp)
 8438e0c:	e8 5b 95 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8438e11:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8438e14:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8438e1b:	e9 32 02 00 00       	jmp    8439052 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x654>
 8438e20:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438e23:	89 04 24             	mov    %eax,(%esp)
 8438e26:	e8 91 b6 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8438e2b:	83 f0 01             	xor    $0x1,%eax
 8438e2e:	84 c0                	test   %al,%al
 8438e30:	74 0a                	je     8438e3c <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x43e>
 8438e32:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438e37:	e9 13 03 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438e3c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8438e3f:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8438e45:	89 d0                	mov    %edx,%eax
 8438e47:	01 c0                	add    %eax,%eax
 8438e49:	01 d0                	add    %edx,%eax
 8438e4b:	c1 e0 03             	shl    $0x3,%eax
 8438e4e:	83 c0 10             	add    $0x10,%eax
 8438e51:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8438e54:	83 c0 01             	add    $0x1,%eax
 8438e57:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438e5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8438e62:	00 
 8438e63:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438e66:	89 04 24             	mov    %eax,(%esp)
 8438e69:	e8 e6 4f cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8438e6e:	83 f0 01             	xor    $0x1,%eax
 8438e71:	84 c0                	test   %al,%al
 8438e73:	74 0a                	je     8438e7f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x481>
 8438e75:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438e7a:	e9 d0 02 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438e7f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8438e82:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8438e88:	89 d0                	mov    %edx,%eax
 8438e8a:	01 c0                	add    %eax,%eax
 8438e8c:	01 d0                	add    %edx,%eax
 8438e8e:	c1 e0 03             	shl    $0x3,%eax
 8438e91:	83 c0 10             	add    $0x10,%eax
 8438e94:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8438e97:	83 c0 02             	add    $0x2,%eax
 8438e9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438e9e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8438ea5:	00 
 8438ea6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438ea9:	89 04 24             	mov    %eax,(%esp)
 8438eac:	e8 a3 4f cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8438eb1:	83 f0 01             	xor    $0x1,%eax
 8438eb4:	84 c0                	test   %al,%al
 8438eb6:	74 0a                	je     8438ec2 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x4c4>
 8438eb8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438ebd:	e9 8d 02 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438ec2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8438ec5:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8438ecb:	89 d0                	mov    %edx,%eax
 8438ecd:	01 c0                	add    %eax,%eax
 8438ecf:	01 d0                	add    %edx,%eax
 8438ed1:	c1 e0 03             	shl    $0x3,%eax
 8438ed4:	83 c0 10             	add    $0x10,%eax
 8438ed7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8438eda:	83 c0 04             	add    $0x4,%eax
 8438edd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438ee1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8438ee8:	00 
 8438ee9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438eec:	89 04 24             	mov    %eax,(%esp)
 8438eef:	e8 38 da cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8438ef4:	83 f0 01             	xor    $0x1,%eax
 8438ef7:	84 c0                	test   %al,%al
 8438ef9:	74 0a                	je     8438f05 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x507>
 8438efb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438f00:	e9 4a 02 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438f05:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8438f08:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8438f0e:	89 d0                	mov    %edx,%eax
 8438f10:	01 c0                	add    %eax,%eax
 8438f12:	01 d0                	add    %edx,%eax
 8438f14:	c1 e0 03             	shl    $0x3,%eax
 8438f17:	83 c0 10             	add    $0x10,%eax
 8438f1a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8438f1d:	83 c0 08             	add    $0x8,%eax
 8438f20:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438f24:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8438f2b:	00 
 8438f2c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438f2f:	89 04 24             	mov    %eax,(%esp)
 8438f32:	e8 f5 d9 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8438f37:	83 f0 01             	xor    $0x1,%eax
 8438f3a:	84 c0                	test   %al,%al
 8438f3c:	74 0a                	je     8438f48 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x54a>
 8438f3e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438f43:	e9 07 02 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438f48:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8438f4b:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8438f51:	89 d0                	mov    %edx,%eax
 8438f53:	01 c0                	add    %eax,%eax
 8438f55:	01 d0                	add    %edx,%eax
 8438f57:	c1 e0 03             	shl    $0x3,%eax
 8438f5a:	83 c0 10             	add    $0x10,%eax
 8438f5d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8438f60:	83 c0 0c             	add    $0xc,%eax
 8438f63:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438f67:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8438f6e:	00 
 8438f6f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438f72:	89 04 24             	mov    %eax,(%esp)
 8438f75:	e8 78 93 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8438f7a:	83 f0 01             	xor    $0x1,%eax
 8438f7d:	84 c0                	test   %al,%al
 8438f7f:	74 0a                	je     8438f8b <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x58d>
 8438f81:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438f86:	e9 c4 01 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438f8b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8438f8e:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8438f94:	89 d0                	mov    %edx,%eax
 8438f96:	01 c0                	add    %eax,%eax
 8438f98:	01 d0                	add    %edx,%eax
 8438f9a:	c1 e0 03             	shl    $0x3,%eax
 8438f9d:	83 c0 20             	add    $0x20,%eax
 8438fa0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8438fa3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438fa7:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8438fae:	00 
 8438faf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438fb2:	89 04 24             	mov    %eax,(%esp)
 8438fb5:	e8 72 d9 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8438fba:	83 f0 01             	xor    $0x1,%eax
 8438fbd:	84 c0                	test   %al,%al
 8438fbf:	74 0a                	je     8438fcb <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x5cd>
 8438fc1:	bb 00 00 00 00       	mov    $0x0,%ebx
 8438fc6:	e9 84 01 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8438fcb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8438fce:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8438fd4:	89 d0                	mov    %edx,%eax
 8438fd6:	01 c0                	add    %eax,%eax
 8438fd8:	01 d0                	add    %edx,%eax
 8438fda:	c1 e0 03             	shl    $0x3,%eax
 8438fdd:	83 c0 20             	add    $0x20,%eax
 8438fe0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8438fe3:	83 c0 04             	add    $0x4,%eax
 8438fe6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8438fea:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8438ff1:	00 
 8438ff2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8438ff5:	89 04 24             	mov    %eax,(%esp)
 8438ff8:	e8 2f d9 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8438ffd:	83 f0 01             	xor    $0x1,%eax
 8439000:	84 c0                	test   %al,%al
 8439002:	74 0a                	je     843900e <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x610>
 8439004:	bb 00 00 00 00       	mov    $0x0,%ebx
 8439009:	e9 41 01 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 843900e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8439011:	8d 8d d4 fc ff ff    	lea    -0x32c(%ebp),%ecx
 8439017:	89 d0                	mov    %edx,%eax
 8439019:	01 c0                	add    %eax,%eax
 843901b:	01 d0                	add    %edx,%eax
 843901d:	c1 e0 03             	shl    $0x3,%eax
 8439020:	83 c0 10             	add    $0x10,%eax
 8439023:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8439026:	89 44 24 08          	mov    %eax,0x8(%esp)
 843902a:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8439031:	00 
 8439032:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8439035:	89 04 24             	mov    %eax,(%esp)
 8439038:	e8 17 4e cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 843903d:	83 f0 01             	xor    $0x1,%eax
 8439040:	84 c0                	test   %al,%al
 8439042:	74 0a                	je     843904e <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x650>
 8439044:	bb 00 00 00 00       	mov    $0x0,%ebx
 8439049:	e9 01 01 00 00       	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 843904e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8439052:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439055:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8439058:	0f 9c c0             	setl   %al
 843905b:	84 c0                	test   %al,%al
 843905d:	0f 85 bd fd ff ff    	jne    8438e20 <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x422>
 8439063:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8439066:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8439069:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843906e:	c7 44 24 08 c5 86 00 	movl   $0x86c5,0x8(%esp)
 8439075:	00 
 8439076:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843907d:	08 
 843907e:	89 04 24             	mov    %eax,(%esp)
 8439081:	e8 00 6a e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8439086:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843908d:	00 
 843908e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8439092:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8439095:	89 04 24             	mov    %eax,(%esp)
 8439098:	e8 89 fb c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843909d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84390a0:	89 04 24             	mov    %eax,(%esp)
 84390a3:	e8 9e fb c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84390a8:	c7 44 24 04 41 01 00 	movl   $0x141,0x4(%esp)
 84390af:	00 
 84390b0:	89 04 24             	mov    %eax,(%esp)
 84390b3:	e8 9e fb c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84390b8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84390bb:	89 04 24             	mov    %eax,(%esp)
 84390be:	e8 83 fb c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84390c3:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84390ca:	ff 
 84390cb:	89 04 24             	mov    %eax,(%esp)
 84390ce:	e8 83 fb c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84390d3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84390d6:	89 04 24             	mov    %eax,(%esp)
 84390d9:	e8 70 fb c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84390de:	89 04 24             	mov    %eax,(%esp)
 84390e1:	e8 56 a6 01 00       	call   845373c <_ZN12CStreamGuard11GetInBufferI37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGEREEPT_v>
 84390e6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84390e9:	c7 44 24 08 e4 02 00 	movl   $0x2e4,0x8(%esp)
 84390f0:	00 
 84390f1:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 84390f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84390fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84390fe:	89 04 24             	mov    %eax,(%esp)
 8439101:	e8 9a 47 c4 ff       	call   807d8a0 <memcpy@plt>
 8439106:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843910b:	8d 55 b8             	lea    -0x48(%ebp),%edx
 843910e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8439112:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439119:	00 
 843911a:	89 04 24             	mov    %eax,(%esp)
 843911d:	e8 bc 7e 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8439122:	bb 01 00 00 00       	mov    $0x1,%ebx
 8439127:	8d 45 b8             	lea    -0x48(%ebp),%eax
 843912a:	89 04 24             	mov    %eax,(%esp)
 843912d:	e8 a0 37 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8439132:	eb 1b                	jmp    843914f <_ZN27DB_LoadBreakAwayPreventData8dispatchEiiP6Stream+0x751>
 8439134:	89 d3                	mov    %edx,%ebx
 8439136:	89 c6                	mov    %eax,%esi
 8439138:	8d 45 b8             	lea    -0x48(%ebp),%eax
 843913b:	89 04 24             	mov    %eax,(%esp)
 843913e:	e8 8f 37 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8439143:	89 f0                	mov    %esi,%eax
 8439145:	89 da                	mov    %ebx,%edx
 8439147:	89 04 24             	mov    %eax,(%esp)
 843914a:	e8 01 a6 6a 00       	call   8ae3750 <_Unwind_Resume>
 843914f:	89 d8                	mov    %ebx,%eax
 8439151:	81 c4 40 03 00 00    	add    $0x340,%esp
 8439157:	5b                   	pop    %ebx
 8439158:	5e                   	pop    %esi
 8439159:	5d                   	pop    %ebp
 843915a:	c3                   	ret
 843915b:	90                   	nop

```

```c
// DB_LoadBreakAwayPreventData::dispatch @ 0x84389fe

/* DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*) */

undefined4 DB_LoadBreakAwayPreventData::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER local_330 [2];
  short sStack_32e;
  short sStack_32c;
  short sStack_32a;
  short sStack_328;
  short sStack_326;
  short sStack_324;
  byte local_322 [2];
  char acStack_320 [4];
  uint auStack_31c [179];
  int local_50;
  CStreamGuard local_4c [8];
  int local_44;
  bool local_3d;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  int local_18;
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *local_14;
  int local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_3d = false;
  Stream::operator>>(in_stack_00000010,&local_3d);
  SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER::SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER(local_330);
  local_18 = 0;
  local_44 = 0;
  MySQL::set_query(local_1c,
                   "seLect no, weekday_var_a, weekday_var_b, weekday_var_c, weekend_var_x, weekend_var_y, weekend_var_z, next_reward_day, state_flag from churn_system_manager order by no desc limit 1"
                  );
  cVar2 = MySQL::exec(local_1c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_18 = MySQL::get_n_rows(local_1c);
  if (local_18 != 1) {
    return 0;
  }
  cVar2 = MySQL::fetch(local_1c);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_int(local_1c,0,&local_44);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,1,(short *)local_330);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,2,&sStack_32e);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,3,&sStack_32c);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = MySQL::get_short(local_1c,4,&sStack_32a);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::get_short(local_1c,5,&sStack_328);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_short(local_1c,6,&sStack_326);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_short(local_1c,7,&sStack_324);
    if (cVar2 != '\x01') {
      return 0;
    }
    cVar2 = MySQL::get_byte(local_1c,8,(char *)local_322);
    if (cVar2 != '\x01') {
      return 0;
    }
    if (local_3d != true) {
      MySQL::set_query(local_1c,"upDate churn_system_manager set state_flag=%d where no = %d",
                       (uint)local_3d,local_44);
      cVar2 = MySQL::exec(local_1c,true);
      if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_1c), lVar5 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cMyTrace::cMyTrace(local_3c,
                           "virtual bool DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*)",
                           0x8684,0);
        cMyTrace::operator()(local_3c,"BREAK_AWAY : STATE_FALG ALREADY OFF!!");
      }
      return 0;
    }
    MySQL::set_query(local_1c,"upDate churn_system_manager set state_flag=%d where no = %d",1,
                     local_44);
    cVar2 = MySQL::exec(local_1c,true);
    if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_1c), lVar5 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool DB_LoadBreakAwayPreventData::dispatch(int, int, Stream*)",
                         0x868a,0);
      cMyTrace::operator()(local_2c,"BREAK_AWAY : STATE_FALG ALREADY ON!!");
    }
    local_322[0] = local_3d;
    MySQL::set_query(local_1c,
                     "seLect min_day, max_day, min_val, max_val, item_id, add_info, luck_point, quest_id from churn_reward_manager"
                    );
    cVar2 = MySQL::exec(local_1c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
    local_18 = MySQL::get_n_rows(local_1c);
    local_10 = 0;
    while( true ) {
      if (local_18 <= local_10) {
        local_50 = local_18;
        pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x86c5);
        CStreamGuard::CStreamGuard(local_4c,pSVar3,true);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 084390b3 to 08439121 has its CatchHandler @ 08439134 */
        CStreamGuard::operator<<(pCVar4,0x141);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
        CStreamGuard::operator<<(pCVar4,-1);
        pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
        local_14 = CStreamGuard::GetInBuffer<SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER>(pCVar4);
        memcpy(local_14,local_330,0x2e4);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
        CStreamGuard::~CStreamGuard(local_4c);
        return 1;
      }
      cVar2 = MySQL::fetch(local_1c);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_byte(local_1c,0,acStack_320 + local_10 * 0x18 + 1);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_byte(local_1c,1,acStack_320 + local_10 * 0x18 + 2);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,2,(int *)(acStack_320 + local_10 * 0x18 + 4));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,3,(int *)(auStack_31c + local_10 * 6 + 1));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_uint(local_1c,4,auStack_31c + local_10 * 6 + 2);
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_int(local_1c,5,(int *)(auStack_31c + local_10 * 6 + 3));
      if (cVar2 != '\x01') break;
      cVar2 = MySQL::get_int(local_1c,6,(int *)(auStack_31c + local_10 * 6 + 4));
      if (cVar2 != '\x01') {
        return 0;
      }
      cVar2 = MySQL::get_byte(local_1c,7,acStack_320 + local_10 * 0x18);
      if (cVar2 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    return 0;
  }
  return 0;
}

```

---

## makeRequest

```asm
// === 08438920 DB_LoadBreakAwayPreventData::makeRequest  [0x08438920-0x84389fd] ===
 8438920:	55                   	push   %ebp
 8438921:	89 e5                	mov    %esp,%ebp
 8438923:	56                   	push   %esi
 8438924:	53                   	push   %ebx
 8438925:	83 ec 30             	sub    $0x30,%esp
 8438928:	8b 45 08             	mov    0x8(%ebp),%eax
 843892b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 843892e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8438933:	c7 44 24 08 42 86 00 	movl   $0x8642,0x8(%esp)
 843893a:	00 
 843893b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8438942:	08 
 8438943:	89 04 24             	mov    %eax,(%esp)
 8438946:	e8 3b 71 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843894b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8438952:	00 
 8438953:	89 44 24 04          	mov    %eax,0x4(%esp)
 8438957:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843895a:	89 04 24             	mov    %eax,(%esp)
 843895d:	e8 c4 02 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8438962:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8438965:	89 04 24             	mov    %eax,(%esp)
 8438968:	e8 d9 02 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843896d:	c7 44 24 04 41 01 00 	movl   $0x141,0x4(%esp)
 8438974:	00 
 8438975:	89 04 24             	mov    %eax,(%esp)
 8438978:	e8 d9 02 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843897d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8438980:	89 04 24             	mov    %eax,(%esp)
 8438983:	e8 be 02 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8438988:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843898f:	ff 
 8438990:	89 04 24             	mov    %eax,(%esp)
 8438993:	e8 be 02 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8438998:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 843899c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843899f:	89 04 24             	mov    %eax,(%esp)
 84389a2:	e8 9f 02 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84389a7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84389ab:	89 04 24             	mov    %eax,(%esp)
 84389ae:	e8 7d 4a 01 00       	call   844d430 <_ZN12CStreamGuardlsEb>
 84389b3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84389b8:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84389bb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84389bf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84389c6:	00 
 84389c7:	89 04 24             	mov    %eax,(%esp)
 84389ca:	e8 0f 86 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84389cf:	eb 1b                	jmp    84389ec <_ZN27DB_LoadBreakAwayPreventData11makeRequestEb+0xcc>
 84389d1:	89 d3                	mov    %edx,%ebx
 84389d3:	89 c6                	mov    %eax,%esi
 84389d5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84389d8:	89 04 24             	mov    %eax,(%esp)
 84389db:	e8 f2 3e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84389e0:	89 f0                	mov    %esi,%eax
 84389e2:	89 da                	mov    %ebx,%edx
 84389e4:	89 04 24             	mov    %eax,(%esp)
 84389e7:	e8 64 ad 6a 00       	call   8ae3750 <_Unwind_Resume>
 84389ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84389ef:	89 04 24             	mov    %eax,(%esp)
 84389f2:	e8 db 3e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84389f7:	83 c4 30             	add    $0x30,%esp
 84389fa:	5b                   	pop    %ebx
 84389fb:	5e                   	pop    %esi
 84389fc:	5d                   	pop    %ebp
 84389fd:	c3                   	ret

```

```c
// DB_LoadBreakAwayPreventData::makeRequest @ 0x8438920

/* DB_LoadBreakAwayPreventData::makeRequest(bool) */

void DB_LoadBreakAwayPreventData::makeRequest(bool param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8642);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08438978 to 084389ce has its CatchHandler @ 084389d1 */
  CStreamGuard::operator<<(pCVar2,0x141);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

