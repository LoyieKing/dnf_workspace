# TaoCrypt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 39

---

## AlmostInverse

```asm
// === 0875c980 TaoCrypt::AlmostInverse  [0x0875c980-0x875ce8f] ===
 875c980:	55                   	push   %ebp
 875c981:	89 e5                	mov    %esp,%ebp
 875c983:	57                   	push   %edi
 875c984:	56                   	push   %esi
 875c985:	53                   	push   %ebx
 875c986:	83 ec 7c             	sub    $0x7c,%esp
 875c989:	8b 55 0c             	mov    0xc(%ebp),%edx
 875c98c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875c98f:	e8 64 64 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875c994:	81 c3 04 02 c1 00    	add    $0xc10204,%ebx
 875c99a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875c99d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 875c9a4:	8d 34 c2             	lea    (%edx,%eax,8),%esi
 875c9a7:	8d 04 40             	lea    (%eax,%eax,2),%eax
 875c9aa:	8d 04 82             	lea    (%edx,%eax,4),%eax
 875c9ad:	89 45 c8             	mov    %eax,-0x38(%ebp)
 875c9b0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875c9b3:	85 c0                	test   %eax,%eax
 875c9b5:	74 67                	je     875ca1e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x9e>
 875c9b7:	8b 7d 1c             	mov    0x1c(%ebp),%edi
 875c9ba:	8b 45 18             	mov    0x18(%ebp),%eax
 875c9bd:	83 7c b8 f8 00       	cmpl   $0x0,-0x8(%eax,%edi,4)
 875c9c2:	0f 85 1d 03 00 00    	jne    875cce5 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x365>
 875c9c8:	83 7c b8 fc 00       	cmpl   $0x0,-0x4(%eax,%edi,4)
 875c9cd:	0f 85 12 03 00 00    	jne    875cce5 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x365>
 875c9d3:	8d 7c b8 f4          	lea    -0xc(%eax,%edi,4),%edi
 875c9d7:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875c9da:	8b 7d 1c             	mov    0x1c(%ebp),%edi
 875c9dd:	8d 7c b8 f0          	lea    -0x10(%eax,%edi,4),%edi
 875c9e1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875c9e4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875c9e7:	89 f8                	mov    %edi,%eax
 875c9e9:	8b 7d dc             	mov    -0x24(%ebp),%edi
 875c9ec:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875c9ef:	90                   	nop
 875c9f0:	83 6d e4 02          	subl   $0x2,-0x1c(%ebp)
 875c9f4:	0f 85 f8 00 00 00    	jne    875caf2 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x172>
 875c9fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875ca00:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875ca03:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875ca06:	8d 3c 40             	lea    (%eax,%eax,2),%edi
 875ca09:	85 ff                	test   %edi,%edi
 875ca0b:	74 11                	je     875ca1e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x9e>
 875ca0d:	31 c0                	xor    %eax,%eax
 875ca0f:	90                   	nop
 875ca10:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
 875ca17:	83 c0 01             	add    $0x1,%eax
 875ca1a:	39 c7                	cmp    %eax,%edi
 875ca1c:	77 f2                	ja     875ca10 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x90>
 875ca1e:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 875ca24:	8b 7d 14             	mov    0x14(%ebp),%edi
 875ca27:	85 ff                	test   %edi,%edi
 875ca29:	74 1d                	je     875ca48 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0xc8>
 875ca2b:	8b 7d 14             	mov    0x14(%ebp),%edi
 875ca2e:	31 c0                	xor    %eax,%eax
 875ca30:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875ca33:	90                   	nop
 875ca34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875ca38:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875ca3b:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875ca3e:	83 c0 01             	add    $0x1,%eax
 875ca41:	39 c7                	cmp    %eax,%edi
 875ca43:	77 f3                	ja     875ca38 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0xb8>
 875ca45:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875ca48:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875ca4b:	85 c9                	test   %ecx,%ecx
 875ca4d:	74 24                	je     875ca73 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0xf3>
 875ca4f:	89 75 e0             	mov    %esi,-0x20(%ebp)
 875ca52:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 875ca55:	31 c0                	xor    %eax,%eax
 875ca57:	8b 75 18             	mov    0x18(%ebp),%esi
 875ca5a:	8b 7d 1c             	mov    0x1c(%ebp),%edi
 875ca5d:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875ca60:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875ca63:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875ca66:	83 c0 01             	add    $0x1,%eax
 875ca69:	39 c7                	cmp    %eax,%edi
 875ca6b:	77 f3                	ja     875ca60 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0xe0>
 875ca6d:	8b 75 e0             	mov    -0x20(%ebp),%esi
 875ca70:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875ca73:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875ca76:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 875ca79:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 875ca7c:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 875ca83:	8d 0c 8a             	lea    (%edx,%ecx,4),%ecx
 875ca86:	83 ef 02             	sub    $0x2,%edi
 875ca89:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 875ca8c:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 875ca93:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 875ca9a:	89 7d b8             	mov    %edi,-0x48(%ebp)
 875ca9d:	8b 16                	mov    (%esi),%edx
 875ca9f:	85 d2                	test   %edx,%edx
 875caa1:	75 6e                	jne    875cb11 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x191>
 875caa3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875caa6:	8b 45 b8             	mov    -0x48(%ebp),%eax
 875caa9:	8d 54 96 fc          	lea    -0x4(%esi,%edx,4),%edx
 875caad:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 875cab0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875cab3:	c1 e0 02             	shl    $0x2,%eax
 875cab6:	89 45 c0             	mov    %eax,-0x40(%ebp)
 875cab9:	01 f0                	add    %esi,%eax
 875cabb:	89 45 d0             	mov    %eax,-0x30(%ebp)
 875cabe:	85 d2                	test   %edx,%edx
 875cac0:	0f 85 a4 02 00 00    	jne    875cd6a <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x3ea>
 875cac6:	66 90                	xchg   %ax,%ax
 875cac8:	8b 75 1c             	mov    0x1c(%ebp),%esi
 875cacb:	85 f6                	test   %esi,%esi
 875cacd:	74 17                	je     875cae6 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x166>
 875cacf:	8b 55 08             	mov    0x8(%ebp),%edx
 875cad2:	31 c0                	xor    %eax,%eax
 875cad4:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875cad7:	90                   	nop
 875cad8:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
 875cadf:	83 c0 01             	add    $0x1,%eax
 875cae2:	39 c1                	cmp    %eax,%ecx
 875cae4:	77 f2                	ja     875cad8 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x158>
 875cae6:	31 f6                	xor    %esi,%esi
 875cae8:	83 c4 7c             	add    $0x7c,%esp
 875caeb:	89 f0                	mov    %esi,%eax
 875caed:	5b                   	pop    %ebx
 875caee:	5e                   	pop    %esi
 875caef:	5f                   	pop    %edi
 875caf0:	5d                   	pop    %ebp
 875caf1:	c3                   	ret
 875caf2:	8b 10                	mov    (%eax),%edx
 875caf4:	85 d2                	test   %edx,%edx
 875caf6:	0f 85 04 ff ff ff    	jne    875ca00 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x80>
 875cafc:	8b 17                	mov    (%edi),%edx
 875cafe:	83 e8 08             	sub    $0x8,%eax
 875cb01:	83 ef 08             	sub    $0x8,%edi
 875cb04:	85 d2                	test   %edx,%edx
 875cb06:	0f 85 f4 fe ff ff    	jne    875ca00 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x80>
 875cb0c:	e9 df fe ff ff       	jmp    875c9f0 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x70>
 875cb11:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 875cb14:	c1 e1 02             	shl    $0x2,%ecx
 875cb17:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 875cb1a:	01 f1                	add    %esi,%ecx
 875cb1c:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 875cb1f:	31 c0                	xor    %eax,%eax
 875cb21:	f6 c2 01             	test   $0x1,%dl
 875cb24:	75 0c                	jne    875cb32 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x1b2>
 875cb26:	66 90                	xchg   %ax,%ax
 875cb28:	d1 ea                	shr    $1,%edx
 875cb2a:	83 c0 01             	add    $0x1,%eax
 875cb2d:	f6 c2 01             	test   $0x1,%dl
 875cb30:	74 f6                	je     875cb28 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x1a8>
 875cb32:	01 45 dc             	add    %eax,-0x24(%ebp)
 875cb35:	83 fa 01             	cmp    $0x1,%edx
 875cb38:	0f 84 85 01 00 00    	je     875ccc3 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x343>
 875cb3e:	85 c0                	test   %eax,%eax
 875cb40:	0f 84 ae 00 00 00    	je     875cbf4 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x274>
 875cb46:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875cb49:	83 e9 01             	sub    $0x1,%ecx
 875cb4c:	78 47                	js     875cb95 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x215>
 875cb4e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875cb51:	c7 45 d4 20 00 00 00 	movl   $0x20,-0x2c(%ebp)
 875cb58:	29 45 d4             	sub    %eax,-0x2c(%ebp)
 875cb5b:	8d 7c 96 fc          	lea    -0x4(%esi,%edx,4),%edi
 875cb5f:	31 d2                	xor    %edx,%edx
 875cb61:	89 75 bc             	mov    %esi,-0x44(%ebp)
 875cb64:	89 d6                	mov    %edx,%esi
 875cb66:	89 45 cc             	mov    %eax,-0x34(%ebp)
 875cb69:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 875cb6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875cb70:	8b 17                	mov    (%edi),%edx
 875cb72:	0f b6 4d cc          	movzbl -0x34(%ebp),%ecx
 875cb76:	89 d0                	mov    %edx,%eax
 875cb78:	d3 e8                	shr    %cl,%eax
 875cb7a:	0f b6 4d d4          	movzbl -0x2c(%ebp),%ecx
 875cb7e:	09 f0                	or     %esi,%eax
 875cb80:	89 d6                	mov    %edx,%esi
 875cb82:	89 07                	mov    %eax,(%edi)
 875cb84:	83 ef 04             	sub    $0x4,%edi
 875cb87:	d3 e6                	shl    %cl,%esi
 875cb89:	83 6d 94 01          	subl   $0x1,-0x6c(%ebp)
 875cb8d:	79 e1                	jns    875cb70 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x1f0>
 875cb8f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 875cb92:	8b 75 bc             	mov    -0x44(%ebp),%esi
 875cb95:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875cb98:	85 d2                	test   %edx,%edx
 875cb9a:	74 58                	je     875cbf4 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x274>
 875cb9c:	c7 45 d4 20 00 00 00 	movl   $0x20,-0x2c(%ebp)
 875cba3:	31 ff                	xor    %edi,%edi
 875cba5:	31 d2                	xor    %edx,%edx
 875cba7:	89 75 bc             	mov    %esi,-0x44(%ebp)
 875cbaa:	8b 75 d8             	mov    -0x28(%ebp),%esi
 875cbad:	29 45 d4             	sub    %eax,-0x2c(%ebp)
 875cbb0:	89 7d 94             	mov    %edi,-0x6c(%ebp)
 875cbb3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 875cbb6:	66 90                	xchg   %ax,%ax
 875cbb8:	8b 04 96             	mov    (%esi,%edx,4),%eax
 875cbbb:	0f b6 4d cc          	movzbl -0x34(%ebp),%ecx
 875cbbf:	89 c7                	mov    %eax,%edi
 875cbc1:	d3 e7                	shl    %cl,%edi
 875cbc3:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 875cbc6:	09 cf                	or     %ecx,%edi
 875cbc8:	0f b6 4d d4          	movzbl -0x2c(%ebp),%ecx
 875cbcc:	89 3c 96             	mov    %edi,(%esi,%edx,4)
 875cbcf:	83 c2 01             	add    $0x1,%edx
 875cbd2:	d3 e8                	shr    %cl,%eax
 875cbd4:	39 55 e0             	cmp    %edx,-0x20(%ebp)
 875cbd7:	89 45 94             	mov    %eax,-0x6c(%ebp)
 875cbda:	77 dc                	ja     875cbb8 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x238>
 875cbdc:	85 c0                	test   %eax,%eax
 875cbde:	89 c7                	mov    %eax,%edi
 875cbe0:	8b 75 bc             	mov    -0x44(%ebp),%esi
 875cbe3:	74 0f                	je     875cbf4 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x274>
 875cbe5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875cbe8:	8b 55 d8             	mov    -0x28(%ebp),%edx
 875cbeb:	89 3c 82             	mov    %edi,(%edx,%eax,4)
 875cbee:	83 c0 02             	add    $0x2,%eax
 875cbf1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875cbf4:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 875cbf7:	8b 01                	mov    (%ecx),%eax
 875cbf9:	85 c0                	test   %eax,%eax
 875cbfb:	75 31                	jne    875cc2e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x2ae>
 875cbfd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875cc00:	8b 7d c0             	mov    -0x40(%ebp),%edi
 875cc03:	8b 3c 38             	mov    (%eax,%edi,1),%edi
 875cc06:	85 ff                	test   %edi,%edi
 875cc08:	75 24                	jne    875cc2e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x2ae>
 875cc0a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875cc0d:	83 e8 01             	sub    $0x1,%eax
 875cc10:	8b 0c 86             	mov    (%esi,%eax,4),%ecx
 875cc13:	85 c9                	test   %ecx,%ecx
 875cc15:	75 17                	jne    875cc2e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x2ae>
 875cc17:	8b 55 c8             	mov    -0x38(%ebp),%edx
 875cc1a:	83 3c 82 00          	cmpl   $0x0,(%edx,%eax,4)
 875cc1e:	75 0e                	jne    875cc2e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x2ae>
 875cc20:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 875cc23:	89 cf                	mov    %ecx,%edi
 875cc25:	83 ef 02             	sub    $0x2,%edi
 875cc28:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 875cc2b:	89 7d b8             	mov    %edi,-0x48(%ebp)
 875cc2e:	8b 7d c8             	mov    -0x38(%ebp),%edi
 875cc31:	31 c9                	xor    %ecx,%ecx
 875cc33:	90                   	nop
 875cc34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875cc38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875cc3b:	01 c8                	add    %ecx,%eax
 875cc3d:	74 2b                	je     875cc6a <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x2ea>
 875cc3f:	8b 54 86 fc          	mov    -0x4(%esi,%eax,4),%edx
 875cc43:	8b 44 87 fc          	mov    -0x4(%edi,%eax,4),%eax
 875cc47:	39 c2                	cmp    %eax,%edx
 875cc49:	77 1f                	ja     875cc6a <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x2ea>
 875cc4b:	83 e9 01             	sub    $0x1,%ecx
 875cc4e:	39 c2                	cmp    %eax,%edx
 875cc50:	73 e6                	jae    875cc38 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x2b8>
 875cc52:	89 f0                	mov    %esi,%eax
 875cc54:	8b 7d d8             	mov    -0x28(%ebp),%edi
 875cc57:	8b 75 c8             	mov    -0x38(%ebp),%esi
 875cc5a:	89 45 c8             	mov    %eax,-0x38(%ebp)
 875cc5d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 875cc60:	83 45 b4 01          	addl   $0x1,-0x4c(%ebp)
 875cc64:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 875cc67:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875cc6a:	8b 55 c8             	mov    -0x38(%ebp),%edx
 875cc6d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875cc70:	89 74 24 04          	mov    %esi,0x4(%esp)
 875cc74:	89 34 24             	mov    %esi,(%esp)
 875cc77:	89 54 24 08          	mov    %edx,0x8(%esp)
 875cc7b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875cc7f:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875cc85:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 875cc88:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875cc8b:	8b 7d d8             	mov    -0x28(%ebp),%edi
 875cc8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 875cc92:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875cc96:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875cc9a:	89 04 24             	mov    %eax,(%esp)
 875cc9d:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875cca3:	85 c0                	test   %eax,%eax
 875cca5:	0f 84 f2 fd ff ff    	je     875ca9d <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x11d>
 875ccab:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875ccae:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 875ccb1:	c7 04 91 01 00 00 00 	movl   $0x1,(%ecx,%edx,4)
 875ccb8:	83 c2 02             	add    $0x2,%edx
 875ccbb:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875ccbe:	e9 da fd ff ff       	jmp    875ca9d <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x11d>
 875ccc3:	8b 56 04             	mov    0x4(%esi),%edx
 875ccc6:	85 d2                	test   %edx,%edx
 875ccc8:	0f 85 70 fe ff ff    	jne    875cb3e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x1be>
 875ccce:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 875ccd2:	0f 84 66 fe ff ff    	je     875cb3e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x1be>
 875ccd8:	8b 7d d0             	mov    -0x30(%ebp),%edi
 875ccdb:	83 3f 00             	cmpl   $0x0,(%edi)
 875ccde:	74 12                	je     875ccf2 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x372>
 875cce0:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875cce3:	eb 34                	jmp    875cd19 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x399>
 875cce5:	8b 7d 1c             	mov    0x1c(%ebp),%edi
 875cce8:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 875cceb:	89 f8                	mov    %edi,%eax
 875cced:	e9 14 fd ff ff       	jmp    875ca06 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x86>
 875ccf2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875ccf5:	83 7c 96 fc 00       	cmpl   $0x0,-0x4(%esi,%edx,4)
 875ccfa:	75 e4                	jne    875cce0 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x360>
 875ccfc:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875ccff:	8d 7c 96 f4          	lea    -0xc(%esi,%edx,4),%edi
 875cd03:	89 7d cc             	mov    %edi,-0x34(%ebp)
 875cd06:	8d 54 96 f0          	lea    -0x10(%esi,%edx,4),%edx
 875cd0a:	83 e9 02             	sub    $0x2,%ecx
 875cd0d:	0f 84 2b fe ff ff    	je     875cb3e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x1be>
 875cd13:	8b 3a                	mov    (%edx),%edi
 875cd15:	85 ff                	test   %edi,%edi
 875cd17:	74 3f                	je     875cd58 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x3d8>
 875cd19:	83 f9 02             	cmp    $0x2,%ecx
 875cd1c:	0f 85 1c fe ff ff    	jne    875cb3e <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x1be>
 875cd22:	f6 45 b4 01          	testb  $0x1,-0x4c(%ebp)
 875cd26:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875cd29:	0f 85 37 01 00 00    	jne    875ce66 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x4e6>
 875cd2f:	31 c0                	xor    %eax,%eax
 875cd31:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 875cd35:	0f 84 ad fd ff ff    	je     875cae8 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x168>
 875cd3b:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 875cd3e:	8b 7d 08             	mov    0x8(%ebp),%edi
 875cd41:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875cd44:	89 14 87             	mov    %edx,(%edi,%eax,4)
 875cd47:	83 c0 01             	add    $0x1,%eax
 875cd4a:	39 45 1c             	cmp    %eax,0x1c(%ebp)
 875cd4d:	77 f2                	ja     875cd41 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x3c1>
 875cd4f:	e9 94 fd ff ff       	jmp    875cae8 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x168>
 875cd54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875cd58:	8b 7d cc             	mov    -0x34(%ebp),%edi
 875cd5b:	83 ea 08             	sub    $0x8,%edx
 875cd5e:	83 6d cc 08          	subl   $0x8,-0x34(%ebp)
 875cd62:	8b 3f                	mov    (%edi),%edi
 875cd64:	85 ff                	test   %edi,%edi
 875cd66:	75 b1                	jne    875cd19 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x399>
 875cd68:	eb a0                	jmp    875cd0a <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x38a>
 875cd6a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875cd6d:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 875cd70:	8d 4c 8e f4          	lea    -0xc(%esi,%ecx,4),%ecx
 875cd74:	83 ef 04             	sub    $0x4,%edi
 875cd77:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 875cd7a:	89 7d bc             	mov    %edi,-0x44(%ebp)
 875cd7d:	8d 76 00             	lea    0x0(%esi),%esi
 875cd80:	8b 45 d0             	mov    -0x30(%ebp),%eax
 875cd83:	8b 00                	mov    (%eax),%eax
 875cd85:	85 c0                	test   %eax,%eax
 875cd87:	75 32                	jne    875cdbb <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x43b>
 875cd89:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 875cd8c:	8b 3a                	mov    (%edx),%edi
 875cd8e:	85 ff                	test   %edi,%edi
 875cd90:	75 29                	jne    875cdbb <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x43b>
 875cd92:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 875cd95:	8b 55 cc             	mov    -0x34(%ebp),%edx
 875cd98:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 875cd9b:	8d 04 8e             	lea    (%esi,%ecx,4),%eax
 875cd9e:	eb 0c                	jmp    875cdac <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x42c>
 875cda0:	8b 0a                	mov    (%edx),%ecx
 875cda2:	83 e8 08             	sub    $0x8,%eax
 875cda5:	83 ea 08             	sub    $0x8,%edx
 875cda8:	85 c9                	test   %ecx,%ecx
 875cdaa:	75 0f                	jne    875cdbb <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x43b>
 875cdac:	83 ef 02             	sub    $0x2,%edi
 875cdaf:	0f 84 13 fd ff ff    	je     875cac8 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x148>
 875cdb5:	8b 08                	mov    (%eax),%ecx
 875cdb7:	85 c9                	test   %ecx,%ecx
 875cdb9:	74 e5                	je     875cda0 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x420>
 875cdbb:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 875cdbf:	76 29                	jbe    875cdea <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x46a>
 875cdc1:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 875cdc4:	b8 02 00 00 00       	mov    $0x2,%eax
 875cdc9:	b9 01 00 00 00       	mov    $0x1,%ecx
 875cdce:	83 c7 01             	add    $0x1,%edi
 875cdd1:	eb 09                	jmp    875cddc <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x45c>
 875cdd3:	90                   	nop
 875cdd4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875cdd8:	89 c1                	mov    %eax,%ecx
 875cdda:	89 d0                	mov    %edx,%eax
 875cddc:	8b 14 8e             	mov    (%esi,%ecx,4),%edx
 875cddf:	89 54 86 f8          	mov    %edx,-0x8(%esi,%eax,4)
 875cde3:	8d 50 01             	lea    0x1(%eax),%edx
 875cde6:	39 fa                	cmp    %edi,%edx
 875cde8:	75 ee                	jne    875cdd8 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x458>
 875cdea:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875cded:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 875cdf0:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 875cdf3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875cdf6:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 875cdfc:	8b 4c 91 fc          	mov    -0x4(%ecx,%edx,4),%ecx
 875ce00:	83 c0 02             	add    $0x2,%eax
 875ce03:	85 c9                	test   %ecx,%ecx
 875ce05:	0f 44 c2             	cmove  %edx,%eax
 875ce08:	83 f8 01             	cmp    $0x1,%eax
 875ce0b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875ce0e:	76 50                	jbe    875ce60 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x4e0>
 875ce10:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875ce13:	83 e8 01             	sub    $0x1,%eax
 875ce16:	74 27                	je     875ce3f <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x4bf>
 875ce18:	8b 7d d8             	mov    -0x28(%ebp),%edi
 875ce1b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875ce1e:	8d 7c 87 fc          	lea    -0x4(%edi,%eax,4),%edi
 875ce22:	89 7d a4             	mov    %edi,-0x5c(%ebp)
 875ce25:	8b 7d d8             	mov    -0x28(%ebp),%edi
 875ce28:	8d 54 8f fc          	lea    -0x4(%edi,%ecx,4),%edx
 875ce2c:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 875ce2f:	90                   	nop
 875ce30:	8b 39                	mov    (%ecx),%edi
 875ce32:	83 e9 04             	sub    $0x4,%ecx
 875ce35:	89 3a                	mov    %edi,(%edx)
 875ce37:	83 ea 04             	sub    $0x4,%edx
 875ce3a:	83 e8 01             	sub    $0x1,%eax
 875ce3d:	75 f1                	jne    875ce30 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x4b0>
 875ce3f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875ce42:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 875ce48:	8b 16                	mov    (%esi),%edx
 875ce4a:	83 45 dc 20          	addl   $0x20,-0x24(%ebp)
 875ce4e:	85 d2                	test   %edx,%edx
 875ce50:	0f 84 2a ff ff ff    	je     875cd80 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x400>
 875ce56:	e9 c4 fc ff ff       	jmp    875cb1f <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x19f>
 875ce5b:	90                   	nop
 875ce5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875ce60:	85 c0                	test   %eax,%eax
 875ce62:	74 e4                	je     875ce48 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x4c8>
 875ce64:	eb aa                	jmp    875ce10 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x490>
 875ce66:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875ce69:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 875ce6c:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875ce6f:	8b 7d 08             	mov    0x8(%ebp),%edi
 875ce72:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875ce76:	89 54 24 08          	mov    %edx,0x8(%esp)
 875ce7a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875ce7e:	89 3c 24             	mov    %edi,(%esp)
 875ce81:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875ce87:	e9 5c fc ff ff       	jmp    875cae8 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j+0x168>
 875ce8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::AlmostInverse @ 0x875c980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned
   int const*, unsigned int) */

int TaoCrypt::AlmostInverse
              (uint *param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,uint param_6)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_70;
  uint local_4c;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  byte local_30;
  uint *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  
  local_20 = 0;
  local_3c = param_2 + param_6 * 3;
  if (param_6 != 0) {
    if ((param_5[param_6 - 2] == 0) && (param_5[param_6 - 1] == 0)) {
      puVar10 = param_5 + (param_6 - 3);
      puVar2 = param_5 + (param_6 - 4);
      local_20 = param_6;
      do {
        local_20 = local_20 - 2;
        if ((local_20 == 0) || (*puVar2 != 0)) break;
        uVar3 = *puVar10;
        puVar2 = puVar2 + -2;
        puVar10 = puVar10 + -2;
      } while (uVar3 == 0);
    }
    else {
      local_20 = param_6;
    }
    if (param_6 * 3 != 0) {
      uVar3 = 0;
      do {
        param_2[uVar3] = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_6 * 3);
    }
  }
  *param_2 = 1;
  if (param_4 != 0) {
    uVar3 = 0;
    do {
      (param_2 + param_6 * 2)[uVar3] = param_3[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  if (param_6 != 0) {
    uVar3 = 0;
    do {
      local_3c[uVar3] = param_5[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_6);
  }
  local_40 = param_2;
  bVar1 = 0;
  local_2c = param_2 + param_6;
  local_4c = local_20 - 2;
  local_28 = 0;
  local_24 = 2;
  puVar10 = param_2 + param_6 * 2;
  do {
    puVar2 = local_40;
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      if (local_20 == 0) {
LAB_0875cac8:
        if (param_6 != 0) {
          uVar3 = 0;
          do {
            param_1[uVar3] = 0;
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_6);
        }
        return 0;
      }
      do {
        if ((puVar10[local_4c] == 0) && (puVar10[local_20 - 1] == 0)) {
          puVar5 = puVar10 + (local_20 - 4);
          puVar9 = puVar10 + (local_20 - 3);
          uVar3 = local_20;
          do {
            uVar3 = uVar3 - 2;
            if (uVar3 == 0) goto LAB_0875cac8;
            if (*puVar5 != 0) break;
            uVar7 = *puVar9;
            puVar5 = puVar5 + -2;
            puVar9 = puVar9 + -2;
          } while (uVar7 == 0);
        }
        if (1 < local_20) {
          iVar8 = 2;
          iVar4 = 1;
          do {
            iVar6 = iVar8;
            puVar10[iVar6 + -2] = puVar10[iVar4];
            iVar8 = iVar6 + 1;
            iVar4 = iVar6;
          } while (iVar6 + 1 != local_20 + 1);
        }
        puVar10[local_20 - 1] = 0;
        uVar7 = local_24 + 2;
        if (local_2c[local_24 - 1] == 0) {
          uVar7 = local_24;
        }
        if ((1 < uVar7) || (uVar7 != 0)) {
          iVar8 = uVar7 - 1;
          if (iVar8 != 0) {
            puVar5 = local_2c + (uVar7 - 2);
            puVar9 = local_2c + (uVar7 - 1);
            do {
              uVar3 = *puVar5;
              puVar5 = puVar5 + -1;
              *puVar9 = uVar3;
              puVar9 = puVar9 + -1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *local_2c = 0;
        }
        uVar3 = *puVar10;
        local_28 = local_28 + 0x20;
        local_24 = uVar7;
      } while (uVar3 == 0);
    }
    local_34 = puVar10 + local_4c;
    iVar8 = 0;
    for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
      iVar8 = iVar8 + 1;
    }
    local_28 = local_28 + iVar8;
    if (((uVar3 == 1) && (puVar10[1] == 0)) && (local_20 != 0)) {
      uVar3 = local_20;
      if ((*local_34 == 0) && (puVar10[local_20 - 1] == 0)) {
        puVar5 = puVar10 + (local_20 - 4);
        local_38 = puVar10 + (local_20 - 3);
        do {
          uVar3 = uVar3 - 2;
          if (uVar3 == 0) goto LAB_0875cb3e;
          if (*puVar5 != 0) break;
          puVar5 = puVar5 + -2;
          uVar7 = *local_38;
          local_38 = local_38 + -2;
        } while (uVar7 == 0);
      }
      if (uVar3 == 2) {
        if ((bool)(bVar1 & 1)) {
          (*s_pSub)(param_1,param_5,local_40,param_6);
        }
        else {
          uVar3 = 0;
          if (param_6 != 0) {
            do {
              param_1[uVar3] = local_40[uVar3];
              uVar3 = uVar3 + 1;
            } while (uVar3 < param_6);
          }
        }
        return local_28;
      }
    }
LAB_0875cb3e:
    if (iVar8 != 0) {
      local_70 = local_20 - 1;
      local_38._0_1_ = (byte)iVar8;
      if (-1 < (int)local_70) {
        local_30 = 0x20 - (byte)local_38;
        puVar5 = puVar10 + (local_20 - 1);
        uVar3 = 0;
        do {
          uVar7 = *puVar5;
          *puVar5 = uVar7 >> ((byte)local_38 & 0x1f) | uVar3;
          puVar5 = puVar5 + -1;
          uVar3 = uVar7 << (local_30 & 0x1f);
          local_70 = local_70 + -1;
        } while (-1 < (int)local_70);
      }
      if (local_24 != 0) {
        uVar3 = 0;
        local_30 = 0x20 - (byte)local_38;
        local_70 = 0;
        do {
          uVar7 = local_2c[uVar3];
          local_2c[uVar3] = uVar7 << ((byte)local_38 & 0x1f) | local_70;
          uVar3 = uVar3 + 1;
          local_70 = uVar7 >> (local_30 & 0x1f);
        } while (uVar3 < local_24);
        if (local_70 != 0) {
          local_2c[local_24] = local_70;
          local_24 = local_24 + 2;
        }
      }
    }
    if (((*local_34 == 0) && (local_3c[local_4c] == 0)) &&
       ((puVar10[local_20 - 1] == 0 && (local_3c[local_20 - 1] == 0)))) {
      local_20 = local_4c;
      local_4c = local_4c - 2;
    }
    iVar8 = 0;
    do {
      iVar4 = local_20 + iVar8;
      puVar5 = puVar10;
      if (iVar4 == 0) goto LAB_0875cc6a;
      if (local_3c[iVar4 + -1] < puVar10[iVar4 + -1]) goto LAB_0875cc6a;
      iVar8 = iVar8 + -1;
    } while (local_3c[iVar4 + -1] <= puVar10[iVar4 + -1]);
    bVar1 = bVar1 + 1;
    local_40 = local_2c;
    local_2c = puVar2;
    puVar5 = local_3c;
    local_3c = puVar10;
LAB_0875cc6a:
    (*s_pSub)(puVar5,puVar5,local_3c,local_20);
    iVar8 = (*s_pAdd)(local_40,local_40,local_2c,local_24);
    puVar10 = puVar5;
    if (iVar8 != 0) {
      local_40[local_24] = 1;
      local_24 = local_24 + 2;
    }
  } while( true );
}

```

---

## AsymmetricMultiply

```asm
// === 0875c610 TaoCrypt::AsymmetricMultiply  [0x0875c610-0x875c97f] ===
 875c610:	55                   	push   %ebp
 875c611:	89 e5                	mov    %esp,%ebp
 875c613:	57                   	push   %edi
 875c614:	56                   	push   %esi
 875c615:	53                   	push   %ebx
 875c616:	83 ec 6c             	sub    $0x6c,%esp
 875c619:	8b 75 14             	mov    0x14(%ebp),%esi
 875c61c:	e8 d7 67 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875c621:	81 c3 77 05 c1 00    	add    $0xc10577,%ebx
 875c627:	39 75 1c             	cmp    %esi,0x1c(%ebp)
 875c62a:	0f 84 00 02 00 00    	je     875c830 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x220>
 875c630:	73 14                	jae    875c646 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x36>
 875c632:	89 f0                	mov    %esi,%eax
 875c634:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875c637:	8b 75 1c             	mov    0x1c(%ebp),%esi
 875c63a:	89 45 1c             	mov    %eax,0x1c(%ebp)
 875c63d:	8b 45 10             	mov    0x10(%ebp),%eax
 875c640:	89 4d 10             	mov    %ecx,0x10(%ebp)
 875c643:	89 45 18             	mov    %eax,0x18(%ebp)
 875c646:	83 fe 02             	cmp    $0x2,%esi
 875c649:	0f 84 a9 01 00 00    	je     875c7f8 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e8>
 875c64f:	8b 45 18             	mov    0x18(%ebp),%eax
 875c652:	8b 55 10             	mov    0x10(%ebp),%edx
 875c655:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875c658:	89 74 24 10          	mov    %esi,0x10(%esp)
 875c65c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c660:	8b 45 08             	mov    0x8(%ebp),%eax
 875c663:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c667:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875c66b:	89 04 24             	mov    %eax,(%esp)
 875c66e:	e8 4d f7 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c673:	8b 55 08             	mov    0x8(%ebp),%edx
 875c676:	85 f6                	test   %esi,%esi
 875c678:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875c67b:	8d 14 b2             	lea    (%edx,%esi,4),%edx
 875c67e:	8d 0c f1             	lea    (%ecx,%esi,8),%ecx
 875c681:	89 55 c0             	mov    %edx,-0x40(%ebp)
 875c684:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 875c687:	74 14                	je     875c69d <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x8d>
 875c689:	8b 7d c0             	mov    -0x40(%ebp),%edi
 875c68c:	31 c0                	xor    %eax,%eax
 875c68e:	66 90                	xchg   %ax,%ax
 875c690:	8b 14 87             	mov    (%edi,%eax,4),%edx
 875c693:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875c696:	83 c0 01             	add    $0x1,%eax
 875c699:	39 c6                	cmp    %eax,%esi
 875c69b:	77 f3                	ja     875c690 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x80>
 875c69d:	8d 3c 36             	lea    (%esi,%esi,1),%edi
 875c6a0:	3b 7d 1c             	cmp    0x1c(%ebp),%edi
 875c6a3:	73 73                	jae    875c718 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x108>
 875c6a5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875c6a8:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 875c6af:	89 45 d0             	mov    %eax,-0x30(%ebp)
 875c6b2:	8d 14 f5 00 00 00 00 	lea    0x0(,%esi,8),%edx
 875c6b9:	8d 04 37             	lea    (%edi,%esi,1),%eax
 875c6bc:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 875c6bf:	8d 14 81             	lea    (%ecx,%eax,4),%edx
 875c6c2:	8b 45 18             	mov    0x18(%ebp),%eax
 875c6c5:	03 45 d4             	add    -0x2c(%ebp),%eax
 875c6c8:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 875c6cb:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 875c6ce:	89 7d d0             	mov    %edi,-0x30(%ebp)
 875c6d1:	89 c6                	mov    %eax,%esi
 875c6d3:	89 d7                	mov    %edx,%edi
 875c6d5:	8d 76 00             	lea    0x0(%esi),%esi
 875c6d8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 875c6db:	8b 55 10             	mov    0x10(%ebp),%edx
 875c6de:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875c6e2:	89 3c 24             	mov    %edi,(%esp)
 875c6e5:	89 44 24 10          	mov    %eax,0x10(%esp)
 875c6e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c6ec:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 875c6ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c6f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c6f7:	e8 c4 f6 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c6fc:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 875c6ff:	03 4d d0             	add    -0x30(%ebp),%ecx
 875c702:	03 7d d4             	add    -0x2c(%ebp),%edi
 875c705:	03 75 d4             	add    -0x2c(%ebp),%esi
 875c708:	89 c8                	mov    %ecx,%eax
 875c70a:	2b 45 d0             	sub    -0x30(%ebp),%eax
 875c70d:	39 45 1c             	cmp    %eax,0x1c(%ebp)
 875c710:	77 c6                	ja     875c6d8 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0xc8>
 875c712:	8b 7d d0             	mov    -0x30(%ebp),%edi
 875c715:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 875c718:	3b 75 1c             	cmp    0x1c(%ebp),%esi
 875c71b:	73 68                	jae    875c785 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x175>
 875c71d:	8d 14 bd 00 00 00 00 	lea    0x0(,%edi,4),%edx
 875c724:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 875c727:	8b 55 08             	mov    0x8(%ebp),%edx
 875c72a:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 875c731:	8d 0c 37             	lea    (%edi,%esi,1),%ecx
 875c734:	89 7d d0             	mov    %edi,-0x30(%ebp)
 875c737:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 875c73a:	01 c2                	add    %eax,%edx
 875c73c:	03 45 18             	add    0x18(%ebp),%eax
 875c73f:	89 d7                	mov    %edx,%edi
 875c741:	89 c6                	mov    %eax,%esi
 875c743:	90                   	nop
 875c744:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c748:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 875c74b:	8b 55 10             	mov    0x10(%ebp),%edx
 875c74e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875c752:	89 3c 24             	mov    %edi,(%esp)
 875c755:	89 44 24 10          	mov    %eax,0x10(%esp)
 875c759:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c75c:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 875c75f:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c763:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c767:	e8 54 f6 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c76c:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 875c76f:	03 4d d0             	add    -0x30(%ebp),%ecx
 875c772:	03 7d d4             	add    -0x2c(%ebp),%edi
 875c775:	03 75 d4             	add    -0x2c(%ebp),%esi
 875c778:	89 c8                	mov    %ecx,%eax
 875c77a:	2b 45 d0             	sub    -0x30(%ebp),%eax
 875c77d:	39 45 1c             	cmp    %eax,0x1c(%ebp)
 875c780:	77 c6                	ja     875c748 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x138>
 875c782:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 875c785:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875c788:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 875c78b:	8b 55 bc             	mov    -0x44(%ebp),%edx
 875c78e:	29 f0                	sub    %esi,%eax
 875c790:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c794:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c798:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875c79c:	89 0c 24             	mov    %ecx,(%esp)
 875c79f:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c7a5:	85 c0                	test   %eax,%eax
 875c7a7:	74 47                	je     875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c7a9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875c7ac:	8b 55 08             	mov    0x8(%ebp),%edx
 875c7af:	8d 0c 82             	lea    (%edx,%eax,4),%ecx
 875c7b2:	8b 11                	mov    (%ecx),%edx
 875c7b4:	8d 42 01             	lea    0x1(%edx),%eax
 875c7b7:	39 c2                	cmp    %eax,%edx
 875c7b9:	89 01                	mov    %eax,(%ecx)
 875c7bb:	76 33                	jbe    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c7bd:	83 fe 01             	cmp    $0x1,%esi
 875c7c0:	76 2e                	jbe    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c7c2:	8b 51 04             	mov    0x4(%ecx),%edx
 875c7c5:	b8 01 00 00 00       	mov    $0x1,%eax
 875c7ca:	83 c2 01             	add    $0x1,%edx
 875c7cd:	85 d2                	test   %edx,%edx
 875c7cf:	89 51 04             	mov    %edx,0x4(%ecx)
 875c7d2:	74 11                	je     875c7e5 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1d5>
 875c7d4:	eb 1a                	jmp    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c7d6:	66 90                	xchg   %ax,%ax
 875c7d8:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875c7db:	83 c2 01             	add    $0x1,%edx
 875c7de:	85 d2                	test   %edx,%edx
 875c7e0:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875c7e3:	75 0b                	jne    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c7e5:	83 c0 01             	add    $0x1,%eax
 875c7e8:	39 c6                	cmp    %eax,%esi
 875c7ea:	77 ec                	ja     875c7d8 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1c8>
 875c7ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c7f0:	83 c4 6c             	add    $0x6c,%esp
 875c7f3:	5b                   	pop    %ebx
 875c7f4:	5e                   	pop    %esi
 875c7f5:	5f                   	pop    %edi
 875c7f6:	5d                   	pop    %ebp
 875c7f7:	c3                   	ret
 875c7f8:	8b 45 10             	mov    0x10(%ebp),%eax
 875c7fb:	8b 78 04             	mov    0x4(%eax),%edi
 875c7fe:	85 ff                	test   %edi,%edi
 875c800:	75 66                	jne    875c868 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x258>
 875c802:	8b 38                	mov    (%eax),%edi
 875c804:	85 ff                	test   %edi,%edi
 875c806:	0f 85 9c 00 00 00    	jne    875c8a8 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x298>
 875c80c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875c80f:	83 c2 02             	add    $0x2,%edx
 875c812:	74 dc                	je     875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c814:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c817:	31 c0                	xor    %eax,%eax
 875c819:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875c820:	c7 04 81 00 00 00 00 	movl   $0x0,(%ecx,%eax,4)
 875c827:	83 c0 01             	add    $0x1,%eax
 875c82a:	39 c2                	cmp    %eax,%edx
 875c82c:	77 f2                	ja     875c820 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x210>
 875c82e:	eb c0                	jmp    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c830:	8b 45 18             	mov    0x18(%ebp),%eax
 875c833:	39 45 10             	cmp    %eax,0x10(%ebp)
 875c836:	0f 84 0b 01 00 00    	je     875c947 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x337>
 875c83c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875c83f:	8b 75 10             	mov    0x10(%ebp),%esi
 875c842:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c846:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c849:	89 54 24 10          	mov    %edx,0x10(%esp)
 875c84d:	8b 55 08             	mov    0x8(%ebp),%edx
 875c850:	89 74 24 08          	mov    %esi,0x8(%esp)
 875c854:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c858:	89 14 24             	mov    %edx,(%esp)
 875c85b:	e8 60 f5 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c860:	83 c4 6c             	add    $0x6c,%esp
 875c863:	5b                   	pop    %ebx
 875c864:	5e                   	pop    %esi
 875c865:	5f                   	pop    %edi
 875c866:	5d                   	pop    %ebp
 875c867:	c3                   	ret
 875c868:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875c86b:	8b 55 0c             	mov    0xc(%ebp),%edx
 875c86e:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c872:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 875c879:	00 
 875c87a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875c87e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c881:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c885:	89 0c 24             	mov    %ecx,(%esp)
 875c888:	e8 33 f5 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c88d:	8b 45 08             	mov    0x8(%ebp),%eax
 875c890:	8b 55 0c             	mov    0xc(%ebp),%edx
 875c893:	83 c0 08             	add    $0x8,%eax
 875c896:	83 c2 10             	add    $0x10,%edx
 875c899:	89 45 c0             	mov    %eax,-0x40(%ebp)
 875c89c:	89 d1                	mov    %edx,%ecx
 875c89e:	89 55 bc             	mov    %edx,-0x44(%ebp)
 875c8a1:	e9 e3 fd ff ff       	jmp    875c689 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x79>
 875c8a6:	66 90                	xchg   %ax,%ax
 875c8a8:	83 ff 01             	cmp    $0x1,%edi
 875c8ab:	74 61                	je     875c90e <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x2fe>
 875c8ad:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875c8b0:	31 c0                	xor    %eax,%eax
 875c8b2:	31 c9                	xor    %ecx,%ecx
 875c8b4:	85 d2                	test   %edx,%edx
 875c8b6:	0f 84 b0 00 00 00    	je     875c96c <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x35c>
 875c8bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c8c0:	8b 75 18             	mov    0x18(%ebp),%esi
 875c8c3:	89 45 b0             	mov    %eax,-0x50(%ebp)
 875c8c6:	89 f8                	mov    %edi,%eax
 875c8c8:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 875c8cf:	f7 24 8e             	mull   (%esi,%ecx,4)
 875c8d2:	01 45 b0             	add    %eax,-0x50(%ebp)
 875c8d5:	11 55 b4             	adc    %edx,-0x4c(%ebp)
 875c8d8:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 875c8db:	8b 45 b0             	mov    -0x50(%ebp),%eax
 875c8de:	8b 75 b0             	mov    -0x50(%ebp),%esi
 875c8e1:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875c8e4:	8b 55 08             	mov    0x8(%ebp),%edx
 875c8e7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875c8ea:	89 34 8a             	mov    %esi,(%edx,%ecx,4)
 875c8ed:	83 c1 01             	add    $0x1,%ecx
 875c8f0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875c8f3:	3b 4d 1c             	cmp    0x1c(%ebp),%ecx
 875c8f6:	72 c8                	jb     875c8c0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x2b0>
 875c8f8:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875c8fb:	8b 75 08             	mov    0x8(%ebp),%esi
 875c8fe:	89 04 8e             	mov    %eax,(%esi,%ecx,4)
 875c901:	c7 44 8e 04 00 00 00 	movl   $0x0,0x4(%esi,%ecx,4)
 875c908:	00 
 875c909:	e9 e2 fe ff ff       	jmp    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c90e:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875c911:	31 c0                	xor    %eax,%eax
 875c913:	85 c9                	test   %ecx,%ecx
 875c915:	74 16                	je     875c92d <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x31d>
 875c917:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c91a:	8b 75 18             	mov    0x18(%ebp),%esi
 875c91d:	8b 7d 1c             	mov    0x1c(%ebp),%edi
 875c920:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875c923:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875c926:	83 c0 01             	add    $0x1,%eax
 875c929:	39 f8                	cmp    %edi,%eax
 875c92b:	72 f3                	jb     875c920 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x310>
 875c92d:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875c930:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c933:	c7 44 91 04 00 00 00 	movl   $0x0,0x4(%ecx,%edx,4)
 875c93a:	00 
 875c93b:	c7 04 91 00 00 00 00 	movl   $0x0,(%ecx,%edx,4)
 875c942:	e9 a9 fe ff ff       	jmp    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c947:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875c94a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875c94d:	8b 75 0c             	mov    0xc(%ebp),%esi
 875c950:	8b 45 08             	mov    0x8(%ebp),%eax
 875c953:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875c957:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c95b:	89 74 24 04          	mov    %esi,0x4(%esp)
 875c95f:	89 04 24             	mov    %eax,(%esp)
 875c962:	e8 a9 f9 ff ff       	call   875c310 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj>
 875c967:	e9 84 fe ff ff       	jmp    875c7f0 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x1e0>
 875c96c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875c96f:	eb 87                	jmp    875c8f8 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j+0x2e8>
 875c971:	eb 0d                	jmp    875c980 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j>
 875c973:	90                   	nop
 875c974:	90                   	nop
 875c975:	90                   	nop
 875c976:	90                   	nop
 875c977:	90                   	nop
 875c978:	90                   	nop
 875c979:	90                   	nop
 875c97a:	90                   	nop
 875c97b:	90                   	nop
 875c97c:	90                   	nop
 875c97d:	90                   	nop
 875c97e:	90                   	nop
 875c97f:	90                   	nop

```

```c
// TaoCrypt::AsymmetricMultiply @ 0x875c610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AsymmetricMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int,
   unsigned int const*, unsigned int) */

void TaoCrypt::AsymmetricMultiply
               (uint *param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,uint param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *local_48;
  uint *local_44;
  
  uVar2 = param_6;
  puVar6 = param_3;
  if (param_6 == param_4) {
    if (param_3 == param_5) {
      RecursiveSquare(param_1,param_2,param_3,param_6);
      return;
    }
    RecursiveMultiply(param_1,param_2,param_3,param_5,param_6);
    return;
  }
  if (param_6 < param_4) {
    param_6 = param_4;
    param_3 = param_5;
    param_5 = puVar6;
    param_4 = uVar2;
  }
  if (param_4 == 2) {
    if (param_3[1] == 0) {
      uVar2 = *param_3;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          uVar5 = 0;
          uVar4 = 0;
          if (param_6 == 0) {
            uVar5 = 0;
          }
          else {
            do {
              lVar1 = (ulonglong)uVar2 * (ulonglong)param_5[uVar4] + (ulonglong)uVar5;
              uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
              param_1[uVar4] = (uint)lVar1;
              uVar4 = uVar4 + 1;
            } while (uVar4 < param_6);
          }
          param_1[param_6] = uVar5;
          param_1[param_6 + 1] = 0;
          return;
        }
        uVar2 = 0;
        if (param_6 != 0) {
          do {
            param_1[uVar2] = param_5[uVar2];
            uVar2 = uVar2 + 1;
          } while (uVar2 < param_6);
        }
        param_1[param_6 + 1] = 0;
        param_1[param_6] = 0;
        return;
      }
      if (param_6 == 0xfffffffe) {
        return;
      }
      uVar2 = 0;
      do {
        param_1[uVar2] = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_6 + 2);
      return;
    }
    RecursiveMultiply(param_1,param_2,param_3,param_5,2);
    local_44 = param_1 + 2;
    local_48 = param_2 + 4;
  }
  else {
    RecursiveMultiply(param_1,param_2,param_3,param_5,param_4);
    local_44 = param_1 + param_4;
    local_48 = param_2 + param_4 * 2;
    if (param_4 == 0) goto LAB_0875c69d;
  }
  uVar2 = 0;
  do {
    local_48[uVar2] = local_44[uVar2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_4);
LAB_0875c69d:
  uVar2 = param_4 * 2;
  if (uVar2 < param_6) {
    iVar3 = param_4 * 4;
    puVar6 = param_2 + param_4 * 3;
    puVar7 = param_5;
    do {
      puVar7 = puVar7 + param_4 * 2;
      RecursiveMultiply(puVar6,param_2,param_3,puVar7,param_4);
      iVar3 = iVar3 + uVar2;
      puVar6 = puVar6 + param_4 * 2;
    } while (iVar3 + param_4 * -2 < param_6);
  }
  if (param_4 < param_6) {
    iVar3 = param_4 * 3;
    puVar7 = param_1 + param_4;
    puVar6 = param_5 + param_4;
    do {
      RecursiveMultiply(puVar7,param_2,param_3,puVar6,param_4);
      iVar3 = iVar3 + uVar2;
      puVar7 = puVar7 + param_4 * 2;
      puVar6 = puVar6 + param_4 * 2;
    } while (iVar3 + param_4 * -2 < param_6);
  }
  iVar3 = (*s_pAdd)(local_44,local_44,local_48,param_6 - param_4);
  if (iVar3 != 0) {
    puVar6 = param_1 + param_6;
    uVar5 = *puVar6;
    uVar2 = uVar5 + 1;
    *puVar6 = uVar2;
    if ((uVar2 < uVar5) && (1 < param_4)) {
      uVar2 = 1;
      uVar5 = puVar6[1] + 1;
      puVar6[1] = uVar5;
      while ((uVar5 == 0 && (uVar2 = uVar2 + 1, uVar2 < param_4))) {
        uVar5 = puVar6[uVar2] + 1;
        puVar6[uVar2] = uVar5;
      }
    }
  }
  return;
}

```

---

## BitPrecision

```asm
// === 08767540 TaoCrypt::BitPrecision  [0x08767540-0x876757f] ===
 8767540:	55                   	push   %ebp
 8767541:	31 d2                	xor    %edx,%edx
 8767543:	89 e5                	mov    %esp,%ebp
 8767545:	b8 20 00 00 00       	mov    $0x20,%eax
 876754a:	57                   	push   %edi
 876754b:	56                   	push   %esi
 876754c:	8b 75 08             	mov    0x8(%ebp),%esi
 876754f:	85 f6                	test   %esi,%esi
 8767551:	75 16                	jne    8767569 <_ZN8TaoCrypt12BitPrecisionEj+0x29>
 8767553:	eb 21                	jmp    8767576 <_ZN8TaoCrypt12BitPrecisionEj+0x36>
 8767555:	8d 76 00             	lea    0x0(%esi),%esi
 8767558:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
 876755b:	89 f7                	mov    %esi,%edi
 876755d:	d1 e9                	shr    $1,%ecx
 876755f:	d3 ef                	shr    %cl,%edi
 8767561:	85 ff                	test   %edi,%edi
 8767563:	0f 45 d1             	cmovne %ecx,%edx
 8767566:	0f 44 c1             	cmove  %ecx,%eax
 8767569:	89 c1                	mov    %eax,%ecx
 876756b:	29 d1                	sub    %edx,%ecx
 876756d:	83 f9 01             	cmp    $0x1,%ecx
 8767570:	77 e6                	ja     8767558 <_ZN8TaoCrypt12BitPrecisionEj+0x18>
 8767572:	5e                   	pop    %esi
 8767573:	5f                   	pop    %edi
 8767574:	5d                   	pop    %ebp
 8767575:	c3                   	ret
 8767576:	30 c0                	xor    %al,%al
 8767578:	5e                   	pop    %esi
 8767579:	5f                   	pop    %edi
 876757a:	5d                   	pop    %ebp
 876757b:	c3                   	ret
 876757c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::BitPrecision @ 0x8767540

/* TaoCrypt::BitPrecision(unsigned int) */

uint TaoCrypt::BitPrecision(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0x20;
  uVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  while (uVar3 = uVar2, 1 < uVar1 - uVar3) {
    uVar2 = uVar3 + uVar1 >> 1;
    if (param_1 >> ((byte)uVar2 & 0x1f) == 0) {
      uVar1 = uVar2;
      uVar2 = uVar3;
    }
  }
  return uVar1;
}

```

---

## BytePrecision

```asm
// === 08767500 TaoCrypt::BytePrecision  [0x08767500-0x876753f] ===
 8767500:	55                   	push   %ebp
 8767501:	b8 04 00 00 00       	mov    $0x4,%eax
 8767506:	89 e5                	mov    %esp,%ebp
 8767508:	8b 55 08             	mov    0x8(%ebp),%edx
 876750b:	89 d1                	mov    %edx,%ecx
 876750d:	c1 e9 18             	shr    $0x18,%ecx
 8767510:	85 c9                	test   %ecx,%ecx
 8767512:	75 1d                	jne    8767531 <_ZN8TaoCrypt13BytePrecisionEj+0x31>
 8767514:	89 d1                	mov    %edx,%ecx
 8767516:	b0 03                	mov    $0x3,%al
 8767518:	c1 e9 10             	shr    $0x10,%ecx
 876751b:	85 c9                	test   %ecx,%ecx
 876751d:	75 12                	jne    8767531 <_ZN8TaoCrypt13BytePrecisionEj+0x31>
 876751f:	89 d1                	mov    %edx,%ecx
 8767521:	b0 02                	mov    $0x2,%al
 8767523:	c1 e9 08             	shr    $0x8,%ecx
 8767526:	85 c9                	test   %ecx,%ecx
 8767528:	75 07                	jne    8767531 <_ZN8TaoCrypt13BytePrecisionEj+0x31>
 876752a:	31 c0                	xor    %eax,%eax
 876752c:	85 d2                	test   %edx,%edx
 876752e:	0f 95 c0             	setne  %al
 8767531:	5d                   	pop    %ebp
 8767532:	c3                   	ret
 8767533:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8767539:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::BytePrecision @ 0x8767500

/* TaoCrypt::BytePrecision(unsigned int) */

undefined1 TaoCrypt::BytePrecision(uint param_1)

{
  undefined1 uVar1;
  
  uVar1 = 4;
  if (((param_1 >> 0x18 == 0) && (uVar1 = 3, param_1 >> 0x10 == 0)) &&
     (uVar1 = 2, param_1 >> 8 == 0)) {
    uVar1 = param_1 != 0;
  }
  return uVar1;
}

```

---

## CRT

```asm
// === 087626b0 TaoCrypt::CRT  [0x087626b0-0x876280f] ===
 87626b0:	55                   	push   %ebp
 87626b1:	89 e5                	mov    %esp,%ebp
 87626b3:	57                   	push   %edi
 87626b4:	56                   	push   %esi
 87626b5:	53                   	push   %ebx
 87626b6:	e8 3d 07 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87626bb:	81 c3 dd a4 c0 00    	add    $0xc0a4dd,%ebx
 87626c1:	83 ec 6c             	sub    $0x6c,%esp
 87626c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 87626c7:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87626ca:	8d 55 d8             	lea    -0x28(%ebp),%edx
 87626cd:	8b 75 08             	mov    0x8(%ebp),%esi
 87626d0:	8d 7d c8             	lea    -0x38(%ebp),%edi
 87626d3:	89 55 a0             	mov    %edx,-0x60(%ebp)
 87626d6:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 87626d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 87626dd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87626e1:	89 14 24             	mov    %edx,(%esp)
 87626e4:	e8 f7 d9 ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 87626e9:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87626ec:	83 ec 04             	sub    $0x4,%esp
 87626ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 87626f3:	8b 55 1c             	mov    0x1c(%ebp),%edx
 87626f6:	89 3c 24             	mov    %edi,(%esp)
 87626f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 87626fd:	e8 5e fa ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 8762702:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8762705:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8762708:	89 55 a0             	mov    %edx,-0x60(%ebp)
 876270b:	83 ec 04             	sub    $0x4,%esp
 876270e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8762712:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762716:	8d 7d a8             	lea    -0x58(%ebp),%edi
 8762719:	89 14 24             	mov    %edx,(%esp)
 876271c:	e8 ff fe ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8762721:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8762724:	83 ec 04             	sub    $0x4,%esp
 8762727:	89 54 24 08          	mov    %edx,0x8(%esp)
 876272b:	8b 55 10             	mov    0x10(%ebp),%edx
 876272e:	89 3c 24             	mov    %edi,(%esp)
 8762731:	89 54 24 04          	mov    %edx,0x4(%esp)
 8762735:	e8 26 fa ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 876273a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 876273d:	83 ec 04             	sub    $0x4,%esp
 8762740:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762744:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762748:	89 34 24             	mov    %esi,(%esp)
 876274b:	e8 60 da ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 8762750:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8762753:	8b 7d ac             	mov    -0x54(%ebp),%edi
 8762756:	c1 e0 02             	shl    $0x2,%eax
 8762759:	83 ec 04             	sub    $0x4,%esp
 876275c:	89 3c 24             	mov    %edi,(%esp)
 876275f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762763:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876276a:	00 
 876276b:	e8 50 b5 91 ff       	call   807dcc0 <memset@plt>
 8762770:	89 3c 24             	mov    %edi,(%esp)
 8762773:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762778:	e8 a3 4f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876277d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8762780:	8b 7d bc             	mov    -0x44(%ebp),%edi
 8762783:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876278a:	00 
 876278b:	c1 e0 02             	shl    $0x2,%eax
 876278e:	89 3c 24             	mov    %edi,(%esp)
 8762791:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762795:	e8 26 b5 91 ff       	call   807dcc0 <memset@plt>
 876279a:	89 3c 24             	mov    %edi,(%esp)
 876279d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87627a2:	e8 79 4f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87627a7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87627aa:	8b 7d cc             	mov    -0x34(%ebp),%edi
 87627ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87627b4:	00 
 87627b5:	c1 e0 02             	shl    $0x2,%eax
 87627b8:	89 3c 24             	mov    %edi,(%esp)
 87627bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87627bf:	e8 fc b4 91 ff       	call   807dcc0 <memset@plt>
 87627c4:	89 3c 24             	mov    %edi,(%esp)
 87627c7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87627cc:	e8 4f 4f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87627d1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87627d4:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87627d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87627de:	00 
 87627df:	c1 e0 02             	shl    $0x2,%eax
 87627e2:	89 3c 24             	mov    %edi,(%esp)
 87627e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 87627e9:	e8 d2 b4 91 ff       	call   807dcc0 <memset@plt>
 87627ee:	89 3c 24             	mov    %edi,(%esp)
 87627f1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87627f6:	e8 25 4f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87627fb:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87627fe:	89 f0                	mov    %esi,%eax
 8762800:	5b                   	pop    %ebx
 8762801:	5e                   	pop    %esi
 8762802:	5f                   	pop    %edi
 8762803:	5d                   	pop    %ebp
 8762804:	c2 04 00             	ret    $0x4
 8762807:	89 f6                	mov    %esi,%esi
 8762809:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::CRT @ 0x87626b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CRT(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

Integer * TaoCrypt::CRT(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
                       Integer *param_5)

{
  uint uVar1;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87626bb;
  Integer::Minus((Integer *)&local_2c);
  Integer::Times((Integer *)&local_3c);
  Integer::Modulo((Integer *)&local_4c);
  Integer::Times((Integer *)&local_5c);
  Integer::Plus(param_1);
  uVar1 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}

```

---

## CleanUp

```asm
// === 0875ece0 TaoCrypt::CleanUp  [0x0875ece0-0x875ed9f] ===
 875ece0:	55                   	push   %ebp
 875ece1:	89 e5                	mov    %esp,%ebp
 875ece3:	83 ec 28             	sub    $0x28,%esp
 875ece6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875ece9:	e8 0a 41 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875ecee:	81 c3 aa de c0 00    	add    $0xc0deaa,%ebx
 875ecf4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875ecf7:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875ecfa:	8b b3 94 4c 12 00    	mov    0x124c94(%ebx),%esi
 875ed00:	85 f6                	test   %esi,%esi
 875ed02:	74 29                	je     875ed2d <_ZN8TaoCrypt7CleanUpEv+0x4d>
 875ed04:	8b 06                	mov    (%esi),%eax
 875ed06:	8b 7e 04             	mov    0x4(%esi),%edi
 875ed09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875ed10:	00 
 875ed11:	c1 e0 02             	shl    $0x2,%eax
 875ed14:	89 44 24 08          	mov    %eax,0x8(%esp)
 875ed18:	89 3c 24             	mov    %edi,(%esp)
 875ed1b:	e8 a0 ef 91 ff       	call   807dcc0 <memset@plt>
 875ed20:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875ed25:	89 3c 24             	mov    %edi,(%esp)
 875ed28:	e8 f3 89 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875ed2d:	89 34 24             	mov    %esi,(%esp)
 875ed30:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875ed35:	e8 b6 89 00 00       	call   87676f0 <_ZdlPvN8TaoCrypt5new_tE>
 875ed3a:	8b b3 98 4c 12 00    	mov    0x124c98(%ebx),%esi
 875ed40:	85 f6                	test   %esi,%esi
 875ed42:	74 29                	je     875ed6d <_ZN8TaoCrypt7CleanUpEv+0x8d>
 875ed44:	8b 06                	mov    (%esi),%eax
 875ed46:	8b 7e 04             	mov    0x4(%esi),%edi
 875ed49:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875ed50:	00 
 875ed51:	c1 e0 02             	shl    $0x2,%eax
 875ed54:	89 44 24 08          	mov    %eax,0x8(%esp)
 875ed58:	89 3c 24             	mov    %edi,(%esp)
 875ed5b:	e8 60 ef 91 ff       	call   807dcc0 <memset@plt>
 875ed60:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875ed65:	89 3c 24             	mov    %edi,(%esp)
 875ed68:	e8 b3 89 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875ed6d:	89 34 24             	mov    %esi,(%esp)
 875ed70:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875ed75:	e8 76 89 00 00       	call   87676f0 <_ZdlPvN8TaoCrypt5new_tE>
 875ed7a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875ed7d:	c7 83 94 4c 12 00 00 	movl   $0x0,0x124c94(%ebx)
 875ed84:	00 00 00 
 875ed87:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875ed8a:	c7 83 98 4c 12 00 00 	movl   $0x0,0x124c98(%ebx)
 875ed91:	00 00 00 
 875ed94:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875ed97:	89 ec                	mov    %ebp,%esp
 875ed99:	5d                   	pop    %ebp
 875ed9a:	c3                   	ret
 875ed9b:	90                   	nop
 875ed9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::CleanUp @ 0x875ece0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CleanUp() */

void TaoCrypt::CleanUp(void)

{
  void *pvVar1;
  int *piVar2;
  uint in_stack_ffffffd8;
  uint uVar3;
  
  piVar2 = one;
  if (one != (int *)0x0) {
    pvVar1 = (void *)one[1];
    uVar3 = 0;
    memset(pvVar1,0,*one << 2);
    in_stack_ffffffd8 = uVar3 & 0xffffff00;
    operator_delete__(pvVar1,in_stack_ffffffd8);
  }
  uVar3 = in_stack_ffffffd8 & 0xffffff00;
  operator_delete(piVar2,uVar3);
  piVar2 = zero;
  if (zero != (int *)0x0) {
    pvVar1 = (void *)zero[1];
    uVar3 = 0;
    memset(pvVar1,0,*zero << 2);
    uVar3 = uVar3 & 0xffffff00;
    operator_delete__(pvVar1,uVar3);
  }
  operator_delete(piVar2,uVar3 & 0xffffff00);
  one = (int *)0x0;
  zero = (int *)0x0;
  return;
}

```

---

## CpuId

```asm
// === 087675c0 TaoCrypt::CpuId  [0x087675c0-0x87675ef] ===
 87675c0:	55                   	push   %ebp
 87675c1:	89 e5                	mov    %esp,%ebp
 87675c3:	83 ec 08             	sub    $0x8,%esp
 87675c6:	89 34 24             	mov    %esi,(%esp)
 87675c9:	8b 75 0c             	mov    0xc(%ebp),%esi
 87675cc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87675d0:	8b 45 08             	mov    0x8(%ebp),%eax
 87675d3:	53                   	push   %ebx
 87675d4:	0f a2                	cpuid
 87675d6:	89 df                	mov    %ebx,%edi
 87675d8:	5b                   	pop    %ebx
 87675d9:	89 06                	mov    %eax,(%esi)
 87675db:	89 7e 04             	mov    %edi,0x4(%esi)
 87675de:	89 4e 08             	mov    %ecx,0x8(%esi)
 87675e1:	89 56 0c             	mov    %edx,0xc(%esi)
 87675e4:	8b 34 24             	mov    (%esp),%esi
 87675e7:	8b 7c 24 04          	mov    0x4(%esp),%edi
 87675eb:	89 ec                	mov    %ebp,%esp
 87675ed:	5d                   	pop    %ebp
 87675ee:	c3                   	ret
 87675ef:	90                   	nop

```

```c
// TaoCrypt::CpuId @ 0x87675c0

/* TaoCrypt::CpuId(unsigned int, unsigned int*) */

void TaoCrypt::CpuId(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    puVar1 = (uint *)cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    puVar1 = (uint *)cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    puVar1 = (uint *)cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    puVar1 = (uint *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    puVar1 = (uint *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    puVar1 = (uint *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    puVar1 = (uint *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    puVar1 = (uint *)cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    puVar1 = (uint *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    puVar1 = (uint *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == 0x80000002) {
    puVar1 = (uint *)cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == 0x80000003) {
    puVar1 = (uint *)cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == 0x80000004) {
    puVar1 = (uint *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (uint *)cpuid(param_1);
  }
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar2 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar4;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

```

---

## Crop

```asm
// === 08767580 TaoCrypt::Crop  [0x08767580-0x876759f] ===
 8767580:	55                   	push   %ebp
 8767581:	89 e5                	mov    %esp,%ebp
 8767583:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8767586:	8b 45 08             	mov    0x8(%ebp),%eax
 8767589:	83 f9 1f             	cmp    $0x1f,%ecx
 876758c:	77 0c                	ja     876759a <_ZN8TaoCrypt4CropEjj+0x1a>
 876758e:	ba 01 00 00 00       	mov    $0x1,%edx
 8767593:	d3 e2                	shl    %cl,%edx
 8767595:	83 ea 01             	sub    $0x1,%edx
 8767598:	21 d0                	and    %edx,%eax
 876759a:	5d                   	pop    %ebp
 876759b:	c3                   	ret
 876759c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Crop @ 0x8767580

/* TaoCrypt::Crop(unsigned int, unsigned int) */

uint TaoCrypt::Crop(uint param_1,uint param_2)

{
  if (param_2 < 0x20) {
    param_1 = param_1 & (1 << ((byte)param_2 & 0x1f)) - 1U;
  }
  return param_1;
}

```

---

## DecodeDSA_Signature

```asm
// === 08755120 TaoCrypt::DecodeDSA_Signature  [0x08755120-0x87552df] ===
 8755120:	55                   	push   %ebp
 8755121:	31 c0                	xor    %eax,%eax
 8755123:	89 e5                	mov    %esp,%ebp
 8755125:	83 ec 58             	sub    $0x58,%esp
 8755128:	8b 55 10             	mov    0x10(%ebp),%edx
 875512b:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875512e:	e8 c5 dc fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8755133:	81 c3 65 7a c1 00    	add    $0xc17a65,%ebx
 8755139:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875513c:	85 d2                	test   %edx,%edx
 875513e:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8755141:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8755144:	74 10                	je     8755156 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x36>
 8755146:	89 14 24             	mov    %edx,(%esp)
 8755149:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875514e:	e8 3d 26 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8755153:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8755156:	89 54 24 08          	mov    %edx,0x8(%esp)
 875515a:	8b 55 0c             	mov    0xc(%ebp),%edx
 875515d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8755160:	89 04 24             	mov    %eax,(%esp)
 8755163:	89 54 24 04          	mov    %edx,0x4(%esp)
 8755167:	e8 34 87 92 ff       	call   807d8a0 <memcpy@plt>
 875516c:	8b 75 d8             	mov    -0x28(%ebp),%esi
 875516f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8755176:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 875517d:	80 3e 30             	cmpb   $0x30,(%esi)
 8755180:	74 3e                	je     87551c0 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0xa0>
 8755182:	c7 45 e4 fc 03 00 00 	movl   $0x3fc,-0x1c(%ebp)
 8755189:	31 ff                	xor    %edi,%edi
 875518b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875518e:	89 34 24             	mov    %esi,(%esp)
 8755191:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755198:	00 
 8755199:	89 44 24 08          	mov    %eax,0x8(%esp)
 875519d:	e8 1e 8b 92 ff       	call   807dcc0 <memset@plt>
 87551a2:	89 34 24             	mov    %esi,(%esp)
 87551a5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87551aa:	e8 71 25 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87551af:	89 f8                	mov    %edi,%eax
 87551b1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87551b4:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87551b7:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87551ba:	89 ec                	mov    %ebp,%esp
 87551bc:	5d                   	pop    %ebp
 87551bd:	c3                   	ret
 87551be:	66 90                	xchg   %ax,%ax
 87551c0:	8d 7d d4             	lea    -0x2c(%ebp),%edi
 87551c3:	89 3c 24             	mov    %edi,(%esp)
 87551c6:	e8 35 e5 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 87551cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87551ce:	8b 75 d8             	mov    -0x28(%ebp),%esi
 87551d1:	8d 50 01             	lea    0x1(%eax),%edx
 87551d4:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87551d7:	80 3c 06 02          	cmpb   $0x2,(%esi,%eax,1)
 87551db:	74 0b                	je     87551e8 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0xc8>
 87551dd:	c7 45 e4 f2 03 00 00 	movl   $0x3f2,-0x1c(%ebp)
 87551e4:	31 ff                	xor    %edi,%edi
 87551e6:	eb a3                	jmp    875518b <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x6b>
 87551e8:	89 3c 24             	mov    %edi,(%esp)
 87551eb:	e8 10 e5 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 87551f0:	83 f8 14             	cmp    $0x14,%eax
 87551f3:	89 c2                	mov    %eax,%edx
 87551f5:	0f 84 c3 00 00 00    	je     87552be <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x19e>
 87551fb:	83 f8 15             	cmp    $0x15,%eax
 87551fe:	74 1a                	je     875521a <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0xfa>
 8755200:	83 f8 13             	cmp    $0x13,%eax
 8755203:	0f 84 a1 00 00 00    	je     87552aa <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x18a>
 8755209:	c7 45 e4 0b 04 00 00 	movl   $0x40b,-0x1c(%ebp)
 8755210:	31 ff                	xor    %edi,%edi
 8755212:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8755215:	e9 71 ff ff ff       	jmp    875518b <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x6b>
 875521a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875521d:	b2 14                	mov    $0x14,%dl
 875521f:	83 c0 01             	add    $0x1,%eax
 8755222:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8755225:	03 45 d8             	add    -0x28(%ebp),%eax
 8755228:	89 54 24 08          	mov    %edx,0x8(%esp)
 875522c:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 875522f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8755233:	8b 45 08             	mov    0x8(%ebp),%eax
 8755236:	89 04 24             	mov    %eax,(%esp)
 8755239:	e8 62 86 92 ff       	call   807d8a0 <memcpy@plt>
 875523e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8755241:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8755244:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8755247:	01 d0                	add    %edx,%eax
 8755249:	8d 48 01             	lea    0x1(%eax),%ecx
 875524c:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 875524f:	80 3c 06 02          	cmpb   $0x2,(%esi,%eax,1)
 8755253:	75 88                	jne    87551dd <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0xbd>
 8755255:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8755258:	89 3c 24             	mov    %edi,(%esp)
 875525b:	e8 a0 e4 ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8755260:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8755263:	83 f8 14             	cmp    $0x14,%eax
 8755266:	89 c6                	mov    %eax,%esi
 8755268:	74 6b                	je     87552d5 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x1b5>
 875526a:	83 f8 15             	cmp    $0x15,%eax
 875526d:	74 57                	je     87552c6 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x1a6>
 875526f:	83 f8 13             	cmp    $0x13,%eax
 8755272:	75 95                	jne    8755209 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0xe9>
 8755274:	8b 45 08             	mov    0x8(%ebp),%eax
 8755277:	c6 04 10 00          	movb   $0x0,(%eax,%edx,1)
 875527b:	83 c0 01             	add    $0x1,%eax
 875527e:	89 45 08             	mov    %eax,0x8(%ebp)
 8755281:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8755284:	03 55 08             	add    0x8(%ebp),%edx
 8755287:	bf 28 00 00 00       	mov    $0x28,%edi
 875528c:	03 45 d8             	add    -0x28(%ebp),%eax
 875528f:	89 74 24 08          	mov    %esi,0x8(%esp)
 8755293:	89 14 24             	mov    %edx,(%esp)
 8755296:	89 44 24 04          	mov    %eax,0x4(%esp)
 875529a:	e8 01 86 92 ff       	call   807d8a0 <memcpy@plt>
 875529f:	01 75 e0             	add    %esi,-0x20(%ebp)
 87552a2:	8b 75 d8             	mov    -0x28(%ebp),%esi
 87552a5:	e9 e1 fe ff ff       	jmp    875518b <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x6b>
 87552aa:	8b 45 08             	mov    0x8(%ebp),%eax
 87552ad:	c6 00 00             	movb   $0x0,(%eax)
 87552b0:	83 c0 01             	add    $0x1,%eax
 87552b3:	89 45 08             	mov    %eax,0x8(%ebp)
 87552b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87552b9:	e9 67 ff ff ff       	jmp    8755225 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x105>
 87552be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87552c1:	e9 5f ff ff ff       	jmp    8755225 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x105>
 87552c6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87552c9:	66 be 14 00          	mov    $0x14,%si
 87552cd:	83 c0 01             	add    $0x1,%eax
 87552d0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87552d3:	eb af                	jmp    8755284 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x164>
 87552d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87552d8:	eb aa                	jmp    8755284 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj+0x164>
 87552da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::DecodeDSA_Signature @ 0x8755120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DecodeDSA_Signature(unsigned char*, unsigned char const*, unsigned int) */

undefined4 TaoCrypt::DecodeDSA_Signature(uchar *param_1,uchar *param_2,uint param_3)

{
  char *pcVar1;
  size_t __n;
  int iVar2;
  size_t __n_00;
  undefined4 uVar3;
  uint in_stack_ffffffa8;
  uint uVar4;
  uint local_30;
  char *local_2c;
  int local_24;
  undefined4 local_20;
  
  local_2c = (char *)0x0;
  local_30 = param_3;
  if (param_3 != 0) {
    local_2c = operator_new__(param_3,in_stack_ffffffa8 & 0xffffff00);
  }
  memcpy(local_2c,param_2,local_30);
  local_20 = 0;
  local_24 = 1;
  if (*local_2c != '0') {
    local_20 = 0x3fc;
    uVar3 = 0;
    goto LAB_0875518b;
  }
  GetLength((Source *)&local_30);
  iVar2 = local_24 + 1;
  pcVar1 = local_2c + local_24;
  local_24 = iVar2;
  if (*pcVar1 == '\x02') {
    __n = GetLength((Source *)&local_30);
    if (__n != 0x14) {
      if (__n == 0x15) {
        __n = 0x14;
        local_24 = local_24 + 1;
        goto LAB_08755225;
      }
      if (__n == 0x13) {
        *param_1 = '\0';
        param_1 = param_1 + 1;
        goto LAB_08755225;
      }
LAB_08755209:
      local_20 = 0x40b;
      uVar3 = 0;
      goto LAB_0875518b;
    }
LAB_08755225:
    memcpy(param_1,local_2c + local_24,__n);
    iVar2 = local_24 + __n;
    local_24 = iVar2 + 1;
    if (local_2c[iVar2] == '\x02') {
      __n_00 = GetLength((Source *)&local_30);
      if (__n_00 != 0x14) {
        if (__n_00 == 0x15) {
          __n_00 = 0x14;
          local_24 = local_24 + 1;
        }
        else {
          if (__n_00 != 0x13) goto LAB_08755209;
          param_1[__n] = '\0';
          param_1 = param_1 + 1;
        }
      }
      uVar3 = 0x28;
      memcpy(param_1 + __n,local_2c + local_24,__n_00);
      local_24 = local_24 + __n_00;
      goto LAB_0875518b;
    }
  }
  local_20 = 0x3f2;
  uVar3 = 0;
LAB_0875518b:
  pcVar1 = local_2c;
  uVar4 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pcVar1,uVar4 & 0xffffff00);
  return uVar3;
}

```

---

## Divide

```asm
// === 0875e580 TaoCrypt::Divide  [0x0875e580-0x875ebdf] ===
 875e580:	55                   	push   %ebp
 875e581:	89 e5                	mov    %esp,%ebp
 875e583:	57                   	push   %edi
 875e584:	56                   	push   %esi
 875e585:	53                   	push   %ebx
 875e586:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 875e58c:	8b 45 18             	mov    0x18(%ebp),%eax
 875e58f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875e592:	8b 7d 10             	mov    0x10(%ebp),%edi
 875e595:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875e598:	83 c0 02             	add    $0x2,%eax
 875e59b:	8b 75 14             	mov    0x14(%ebp),%esi
 875e59e:	8d 0c 81             	lea    (%ecx,%eax,4),%ecx
 875e5a1:	89 45 c0             	mov    %eax,-0x40(%ebp)
 875e5a4:	8b 45 20             	mov    0x20(%ebp),%eax
 875e5a7:	03 45 c0             	add    -0x40(%ebp),%eax
 875e5aa:	e8 49 48 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875e5af:	81 c3 e9 e5 c0 00    	add    $0xc0e5e9,%ebx
 875e5b5:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 875e5b8:	8d 04 87             	lea    (%edi,%eax,4),%eax
 875e5bb:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 875e5be:	8b 45 20             	mov    0x20(%ebp),%eax
 875e5c1:	83 e8 01             	sub    $0x1,%eax
 875e5c4:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 875e5ca:	8b 04 82             	mov    (%edx,%eax,4),%eax
 875e5cd:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 875e5d3:	85 c0                	test   %eax,%eax
 875e5d5:	8d 3c b9             	lea    (%ecx,%edi,4),%edi
 875e5d8:	0f 94 c0             	sete   %al
 875e5db:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 875e5e1:	0f b6 c0             	movzbl %al,%eax
 875e5e4:	c7 01 00 00 00 00    	movl   $0x0,(%ecx)
 875e5ea:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 875e5f1:	89 7d b8             	mov    %edi,-0x48(%ebp)
 875e5f4:	8b 7d 20             	mov    0x20(%ebp),%edi
 875e5f7:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 875e5fa:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 875e5fd:	03 4d b4             	add    -0x4c(%ebp),%ecx
 875e600:	29 c7                	sub    %eax,%edi
 875e602:	74 1c                	je     875e620 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0xa0>
 875e604:	31 c0                	xor    %eax,%eax
 875e606:	89 75 bc             	mov    %esi,-0x44(%ebp)
 875e609:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875e610:	8b 34 82             	mov    (%edx,%eax,4),%esi
 875e613:	89 34 81             	mov    %esi,(%ecx,%eax,4)
 875e616:	83 c0 01             	add    $0x1,%eax
 875e619:	39 c7                	cmp    %eax,%edi
 875e61b:	77 f3                	ja     875e610 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x90>
 875e61d:	8b 75 bc             	mov    -0x44(%ebp),%esi
 875e620:	8b 7d b8             	mov    -0x48(%ebp),%edi
 875e623:	8b 07                	mov    (%edi),%eax
 875e625:	89 04 24             	mov    %eax,(%esp)
 875e628:	e8 13 8f 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 875e62d:	89 45 8c             	mov    %eax,-0x74(%ebp)
 875e630:	b8 20 00 00 00       	mov    $0x20,%eax
 875e635:	2b 45 8c             	sub    -0x74(%ebp),%eax
 875e638:	89 45 90             	mov    %eax,-0x70(%ebp)
 875e63b:	74 42                	je     875e67f <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0xff>
 875e63d:	8b 7d 20             	mov    0x20(%ebp),%edi
 875e640:	85 ff                	test   %edi,%edi
 875e642:	74 3b                	je     875e67f <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0xff>
 875e644:	89 75 bc             	mov    %esi,-0x44(%ebp)
 875e647:	8b 75 ac             	mov    -0x54(%ebp),%esi
 875e64a:	31 ff                	xor    %edi,%edi
 875e64c:	31 c0                	xor    %eax,%eax
 875e64e:	89 7d a8             	mov    %edi,-0x58(%ebp)
 875e651:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875e658:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875e65b:	0f b6 4d 90          	movzbl -0x70(%ebp),%ecx
 875e65f:	89 d7                	mov    %edx,%edi
 875e661:	d3 e7                	shl    %cl,%edi
 875e663:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 875e666:	09 cf                	or     %ecx,%edi
 875e668:	0f b6 4d 8c          	movzbl -0x74(%ebp),%ecx
 875e66c:	89 3c 86             	mov    %edi,(%esi,%eax,4)
 875e66f:	83 c0 01             	add    $0x1,%eax
 875e672:	d3 ea                	shr    %cl,%edx
 875e674:	39 45 20             	cmp    %eax,0x20(%ebp)
 875e677:	89 55 a8             	mov    %edx,-0x58(%ebp)
 875e67a:	77 dc                	ja     875e658 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0xd8>
 875e67c:	8b 75 bc             	mov    -0x44(%ebp),%esi
 875e67f:	8b 7d 18             	mov    0x18(%ebp),%edi
 875e682:	8b 45 10             	mov    0x10(%ebp),%eax
 875e685:	8b 55 18             	mov    0x18(%ebp),%edx
 875e688:	8d 3c b8             	lea    (%eax,%edi,4),%edi
 875e68b:	89 7d bc             	mov    %edi,-0x44(%ebp)
 875e68e:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 875e691:	8d 7c 90 04          	lea    0x4(%eax,%edx,4),%edi
 875e695:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 875e69b:	c7 01 00 00 00 00    	movl   $0x0,(%ecx)
 875e6a1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 875e6a7:	03 45 b4             	add    -0x4c(%ebp),%eax
 875e6aa:	85 d2                	test   %edx,%edx
 875e6ac:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 875e6b2:	74 1c                	je     875e6d0 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x150>
 875e6b4:	89 c1                	mov    %eax,%ecx
 875e6b6:	31 c0                	xor    %eax,%eax
 875e6b8:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 875e6bb:	89 d7                	mov    %edx,%edi
 875e6bd:	8d 76 00             	lea    0x0(%esi),%esi
 875e6c0:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875e6c3:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875e6c6:	83 c0 01             	add    $0x1,%eax
 875e6c9:	39 c7                	cmp    %eax,%edi
 875e6cb:	77 f3                	ja     875e6c0 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x140>
 875e6cd:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 875e6d0:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 875e6d3:	85 c9                	test   %ecx,%ecx
 875e6d5:	74 40                	je     875e717 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x197>
 875e6d7:	8b 55 c0             	mov    -0x40(%ebp),%edx
 875e6da:	85 d2                	test   %edx,%edx
 875e6dc:	74 39                	je     875e717 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x197>
 875e6de:	31 f6                	xor    %esi,%esi
 875e6e0:	31 c0                	xor    %eax,%eax
 875e6e2:	89 75 a8             	mov    %esi,-0x58(%ebp)
 875e6e5:	8b 75 10             	mov    0x10(%ebp),%esi
 875e6e8:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 875e6eb:	90                   	nop
 875e6ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875e6f0:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875e6f3:	0f b6 4d 90          	movzbl -0x70(%ebp),%ecx
 875e6f7:	89 d7                	mov    %edx,%edi
 875e6f9:	d3 e7                	shl    %cl,%edi
 875e6fb:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 875e6fe:	09 cf                	or     %ecx,%edi
 875e700:	0f b6 4d 8c          	movzbl -0x74(%ebp),%ecx
 875e704:	89 3c 86             	mov    %edi,(%esi,%eax,4)
 875e707:	83 c0 01             	add    $0x1,%eax
 875e70a:	d3 ea                	shr    %cl,%edx
 875e70c:	39 45 c0             	cmp    %eax,-0x40(%ebp)
 875e70f:	89 55 a8             	mov    %edx,-0x58(%ebp)
 875e712:	77 dc                	ja     875e6f0 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x170>
 875e714:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 875e717:	8b 07                	mov    (%edi),%eax
 875e719:	85 c0                	test   %eax,%eax
 875e71b:	75 0c                	jne    875e729 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x1a9>
 875e71d:	8b 75 bc             	mov    -0x44(%ebp),%esi
 875e720:	83 3e 01             	cmpl   $0x1,(%esi)
 875e723:	0f 86 0e 04 00 00    	jbe    875eb37 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x5b7>
 875e729:	8b 55 c0             	mov    -0x40(%ebp),%edx
 875e72c:	89 55 18             	mov    %edx,0x18(%ebp)
 875e72f:	8b 4d 20             	mov    0x20(%ebp),%ecx
 875e732:	8b 75 ac             	mov    -0x54(%ebp),%esi
 875e735:	8b 7d b8             	mov    -0x48(%ebp),%edi
 875e738:	8b 44 8e f8          	mov    -0x8(%esi,%ecx,4),%eax
 875e73c:	8b 3f                	mov    (%edi),%edi
 875e73e:	83 c0 01             	add    $0x1,%eax
 875e741:	89 45 88             	mov    %eax,-0x78(%ebp)
 875e744:	0f 94 c0             	sete   %al
 875e747:	0f b6 c0             	movzbl %al,%eax
 875e74a:	01 f8                	add    %edi,%eax
 875e74c:	89 45 94             	mov    %eax,-0x6c(%ebp)
 875e74f:	8b 45 18             	mov    0x18(%ebp),%eax
 875e752:	83 e8 02             	sub    $0x2,%eax
 875e755:	39 c1                	cmp    %eax,%ecx
 875e757:	89 45 9c             	mov    %eax,-0x64(%ebp)
 875e75a:	0f 87 28 02 00 00    	ja     875e988 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x408>
 875e760:	8b 45 18             	mov    0x18(%ebp),%eax
 875e763:	89 ca                	mov    %ecx,%edx
 875e765:	2b 45 20             	sub    0x20(%ebp),%eax
 875e768:	83 c2 02             	add    $0x2,%edx
 875e76b:	c1 e1 02             	shl    $0x2,%ecx
 875e76e:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 875e771:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 875e774:	8b 4d 20             	mov    0x20(%ebp),%ecx
 875e777:	89 55 80             	mov    %edx,-0x80(%ebp)
 875e77a:	8d 14 85 f8 ff ff ff 	lea    -0x8(,%eax,4),%edx
 875e781:	8b 45 84             	mov    -0x7c(%ebp),%eax
 875e784:	8b 7d 10             	mov    0x10(%ebp),%edi
 875e787:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 875e78e:	8d 4c 8e 04          	lea    0x4(%esi,%ecx,4),%ecx
 875e792:	8b 75 18             	mov    0x18(%ebp),%esi
 875e795:	8d 04 02             	lea    (%edx,%eax,1),%eax
 875e798:	01 f8                	add    %edi,%eax
 875e79a:	89 45 b8             	mov    %eax,-0x48(%ebp)
 875e79d:	8b 45 20             	mov    0x20(%ebp),%eax
 875e7a0:	8d 74 b7 f4          	lea    -0xc(%edi,%esi,4),%esi
 875e7a4:	01 d7                	add    %edx,%edi
 875e7a6:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 875e7a9:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875e7ac:	89 75 a8             	mov    %esi,-0x58(%ebp)
 875e7af:	8b 75 84             	mov    -0x7c(%ebp),%esi
 875e7b2:	f7 d0                	not    %eax
 875e7b4:	03 45 18             	add    0x18(%ebp),%eax
 875e7b7:	01 fa                	add    %edi,%edx
 875e7b9:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
 875e7bf:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 875e7c2:	8d 04 87             	lea    (%edi,%eax,4),%eax
 875e7c5:	8b 7d ac             	mov    -0x54(%ebp),%edi
 875e7c8:	89 45 b0             	mov    %eax,-0x50(%ebp)
 875e7cb:	8b 45 94             	mov    -0x6c(%ebp),%eax
 875e7ce:	0b 45 88             	or     -0x78(%ebp),%eax
 875e7d1:	89 55 bc             	mov    %edx,-0x44(%ebp)
 875e7d4:	8d 55 c8             	lea    -0x38(%ebp),%edx
 875e7d7:	8d 74 37 fc          	lea    -0x4(%edi,%esi,1),%esi
 875e7db:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 875e7e1:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 875e7e7:	89 8d 70 ff ff ff    	mov    %ecx,-0x90(%ebp)
 875e7ed:	89 75 a0             	mov    %esi,-0x60(%ebp)
 875e7f0:	8b 45 94             	mov    -0x6c(%ebp),%eax
 875e7f3:	8b 55 18             	mov    0x18(%ebp),%edx
 875e7f6:	8b 7d 88             	mov    -0x78(%ebp),%edi
 875e7f9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875e7fc:	8b 45 10             	mov    0x10(%ebp),%eax
 875e7ff:	03 45 98             	add    -0x68(%ebp),%eax
 875e802:	89 d1                	mov    %edx,%ecx
 875e804:	89 7d e0             	mov    %edi,-0x20(%ebp)
 875e807:	89 cf                	mov    %ecx,%edi
 875e809:	8b 74 90 fc          	mov    -0x4(%eax,%edx,4),%esi
 875e80d:	8b 4c 88 f4          	mov    -0xc(%eax,%ecx,4),%ecx
 875e811:	8b 54 90 f8          	mov    -0x8(%eax,%edx,4),%edx
 875e815:	8b 44 b8 f0          	mov    -0x10(%eax,%edi,4),%eax
 875e819:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 875e81f:	85 ff                	test   %edi,%edi
 875e821:	0f 85 ae 02 00 00    	jne    875ead5 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x555>
 875e827:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 875e82a:	85 f6                	test   %esi,%esi
 875e82c:	8b 7d b0             	mov    -0x50(%ebp),%edi
 875e82f:	89 11                	mov    %edx,(%ecx)
 875e831:	89 37                	mov    %esi,(%edi)
 875e833:	0f 84 0f 02 00 00    	je     875ea48 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x4c8>
 875e839:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 875e83f:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 875e842:	8b 55 84             	mov    -0x7c(%ebp),%edx
 875e845:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 875e84b:	c7 04 11 00 00 00 00 	movl   $0x0,(%ecx,%edx,1)
 875e852:	8b 75 20             	mov    0x20(%ebp),%esi
 875e855:	85 f6                	test   %esi,%esi
 875e857:	0f 84 9f 00 00 00    	je     875e8fc <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x37c>
 875e85d:	8b 7d ac             	mov    -0x54(%ebp),%edi
 875e860:	31 f6                	xor    %esi,%esi
 875e862:	89 f2                	mov    %esi,%edx
 875e864:	89 ce                	mov    %ecx,%esi
 875e866:	89 d0                	mov    %edx,%eax
 875e868:	8b 55 bc             	mov    -0x44(%ebp),%edx
 875e86b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875e86f:	83 c7 10             	add    $0x10,%edi
 875e872:	89 34 24             	mov    %esi,(%esp)
 875e875:	83 c6 10             	add    $0x10,%esi
 875e878:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 875e87e:	89 54 24 04          	mov    %edx,0x4(%esp)
 875e882:	e8 a9 ac ff ff       	call   8759530 <_ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_>
 875e887:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 875e88d:	83 c0 04             	add    $0x4,%eax
 875e890:	39 45 20             	cmp    %eax,0x20(%ebp)
 875e893:	77 d3                	ja     875e868 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x2e8>
 875e895:	83 7d 20 02          	cmpl   $0x2,0x20(%ebp)
 875e899:	76 61                	jbe    875e8fc <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x37c>
 875e89b:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 875e89e:	ba 06 00 00 00       	mov    $0x6,%edx
 875e8a3:	8b 7d ac             	mov    -0x54(%ebp),%edi
 875e8a6:	83 c6 08             	add    $0x8,%esi
 875e8a9:	83 c7 08             	add    $0x8,%edi
 875e8ac:	eb 04                	jmp    875e8b2 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x332>
 875e8ae:	66 90                	xchg   %ax,%ax
 875e8b0:	89 c2                	mov    %eax,%edx
 875e8b2:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 875e8b5:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 875e8bb:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875e8bf:	89 34 24             	mov    %esi,(%esp)
 875e8c2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875e8c6:	e8 e5 ad ff ff       	call   87596b0 <_ZN8TaoCrypt8Portable12Multiply2AddEPjPKjS3_>
 875e8cb:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 875e8d1:	85 c0                	test   %eax,%eax
 875e8d3:	74 19                	je     875e8ee <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x36e>
 875e8d5:	8b 46 10             	mov    0x10(%esi),%eax
 875e8d8:	8b 4e 14             	mov    0x14(%esi),%ecx
 875e8db:	83 c0 01             	add    $0x1,%eax
 875e8de:	85 c0                	test   %eax,%eax
 875e8e0:	89 46 10             	mov    %eax,0x10(%esi)
 875e8e3:	0f 94 c0             	sete   %al
 875e8e6:	0f b6 c0             	movzbl %al,%eax
 875e8e9:	01 c8                	add    %ecx,%eax
 875e8eb:	89 46 14             	mov    %eax,0x14(%esi)
 875e8ee:	83 c6 10             	add    $0x10,%esi
 875e8f1:	83 c7 10             	add    $0x10,%edi
 875e8f4:	39 55 20             	cmp    %edx,0x20(%ebp)
 875e8f7:	8d 42 04             	lea    0x4(%edx),%eax
 875e8fa:	77 b4                	ja     875e8b0 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x330>
 875e8fc:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 875e8ff:	8b 45 80             	mov    -0x80(%ebp),%eax
 875e902:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 875e905:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875e909:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875e90d:	89 54 24 08          	mov    %edx,0x8(%esp)
 875e911:	89 0c 24             	mov    %ecx,(%esp)
 875e914:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875e91a:	8b 75 b8             	mov    -0x48(%ebp),%esi
 875e91d:	8d 76 00             	lea    0x0(%esi),%esi
 875e920:	8b 36                	mov    (%esi),%esi
 875e922:	85 f6                	test   %esi,%esi
 875e924:	89 75 c0             	mov    %esi,-0x40(%ebp)
 875e927:	0f 85 cb 00 00 00    	jne    875e9f8 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x478>
 875e92d:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 875e930:	8b 55 a8             	mov    -0x58(%ebp),%edx
 875e933:	8b 45 20             	mov    0x20(%ebp),%eax
 875e936:	66 90                	xchg   %ax,%ax
 875e938:	85 c0                	test   %eax,%eax
 875e93a:	0f 84 b8 00 00 00    	je     875e9f8 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x478>
 875e940:	8b 3a                	mov    (%edx),%edi
 875e942:	8b 31                	mov    (%ecx),%esi
 875e944:	39 f7                	cmp    %esi,%edi
 875e946:	0f 87 ac 00 00 00    	ja     875e9f8 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x478>
 875e94c:	83 e8 01             	sub    $0x1,%eax
 875e94f:	83 ea 04             	sub    $0x4,%edx
 875e952:	83 e9 04             	sub    $0x4,%ecx
 875e955:	39 f7                	cmp    %esi,%edi
 875e957:	73 df                	jae    875e938 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x3b8>
 875e959:	83 6d 9c 02          	subl   $0x2,-0x64(%ebp)
 875e95d:	8b 75 9c             	mov    -0x64(%ebp),%esi
 875e960:	83 6d 98 08          	subl   $0x8,-0x68(%ebp)
 875e964:	83 6d a8 08          	subl   $0x8,-0x58(%ebp)
 875e968:	83 6d b8 08          	subl   $0x8,-0x48(%ebp)
 875e96c:	83 6d b4 08          	subl   $0x8,-0x4c(%ebp)
 875e970:	83 6d b0 08          	subl   $0x8,-0x50(%ebp)
 875e974:	83 6d bc 08          	subl   $0x8,-0x44(%ebp)
 875e978:	39 75 20             	cmp    %esi,0x20(%ebp)
 875e97b:	0f 86 6f fe ff ff    	jbe    875e7f0 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x270>
 875e981:	8b 7d 20             	mov    0x20(%ebp),%edi
 875e984:	85 ff                	test   %edi,%edi
 875e986:	74 1d                	je     875e9a5 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x425>
 875e988:	8b 8d 68 ff ff ff    	mov    -0x98(%ebp),%ecx
 875e98e:	31 c0                	xor    %eax,%eax
 875e990:	8b 75 08             	mov    0x8(%ebp),%esi
 875e993:	8b 7d 20             	mov    0x20(%ebp),%edi
 875e996:	66 90                	xchg   %ax,%ax
 875e998:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875e99b:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875e99e:	83 c0 01             	add    $0x1,%eax
 875e9a1:	39 c7                	cmp    %eax,%edi
 875e9a3:	77 f3                	ja     875e998 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x418>
 875e9a5:	8b 75 90             	mov    -0x70(%ebp),%esi
 875e9a8:	85 f6                	test   %esi,%esi
 875e9aa:	74 3b                	je     875e9e7 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x467>
 875e9ac:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 875e9b2:	85 ff                	test   %edi,%edi
 875e9b4:	78 31                	js     875e9e7 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x467>
 875e9b6:	8b 75 20             	mov    0x20(%ebp),%esi
 875e9b9:	8b 55 08             	mov    0x8(%ebp),%edx
 875e9bc:	89 7d bc             	mov    %edi,-0x44(%ebp)
 875e9bf:	8d 44 b2 fc          	lea    -0x4(%edx,%esi,4),%eax
 875e9c3:	31 f6                	xor    %esi,%esi
 875e9c5:	8d 76 00             	lea    0x0(%esi),%esi
 875e9c8:	8b 10                	mov    (%eax),%edx
 875e9ca:	0f b6 4d 90          	movzbl -0x70(%ebp),%ecx
 875e9ce:	89 d7                	mov    %edx,%edi
 875e9d0:	d3 ef                	shr    %cl,%edi
 875e9d2:	0f b6 4d 8c          	movzbl -0x74(%ebp),%ecx
 875e9d6:	09 f7                	or     %esi,%edi
 875e9d8:	89 d6                	mov    %edx,%esi
 875e9da:	89 38                	mov    %edi,(%eax)
 875e9dc:	83 e8 04             	sub    $0x4,%eax
 875e9df:	d3 e6                	shl    %cl,%esi
 875e9e1:	83 6d bc 01          	subl   $0x1,-0x44(%ebp)
 875e9e5:	79 e1                	jns    875e9c8 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x448>
 875e9e7:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 875e9ed:	5b                   	pop    %ebx
 875e9ee:	5e                   	pop    %esi
 875e9ef:	5f                   	pop    %edi
 875e9f0:	5d                   	pop    %ebp
 875e9f1:	c3                   	ret
 875e9f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875e9f8:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 875e9fb:	8b 7d 20             	mov    0x20(%ebp),%edi
 875e9fe:	8b 45 ac             	mov    -0x54(%ebp),%eax
 875ea01:	89 54 24 04          	mov    %edx,0x4(%esp)
 875ea05:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875ea09:	89 14 24             	mov    %edx,(%esp)
 875ea0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 875ea10:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875ea16:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 875ea19:	8b 75 b8             	mov    -0x48(%ebp),%esi
 875ea1c:	8b 7d b0             	mov    -0x50(%ebp),%edi
 875ea1f:	29 c1                	sub    %eax,%ecx
 875ea21:	89 0e                	mov    %ecx,(%esi)
 875ea23:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 875ea26:	8b 17                	mov    (%edi),%edx
 875ea28:	8b 01                	mov    (%ecx),%eax
 875ea2a:	83 c0 01             	add    $0x1,%eax
 875ea2d:	85 c0                	test   %eax,%eax
 875ea2f:	89 01                	mov    %eax,(%ecx)
 875ea31:	0f 94 c0             	sete   %al
 875ea34:	0f b6 c0             	movzbl %al,%eax
 875ea37:	8d 14 10             	lea    (%eax,%edx,1),%edx
 875ea3a:	89 17                	mov    %edx,(%edi)
 875ea3c:	e9 df fe ff ff       	jmp    875e920 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x3a0>
 875ea41:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875ea48:	8b 39                	mov    (%ecx),%edi
 875ea4a:	31 d2                	xor    %edx,%edx
 875ea4c:	31 c0                	xor    %eax,%eax
 875ea4e:	8b 4d 20             	mov    0x20(%ebp),%ecx
 875ea51:	85 c9                	test   %ecx,%ecx
 875ea53:	0f 84 d9 00 00 00    	je     875eb32 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x5b2>
 875ea59:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 875ea5f:	89 c1                	mov    %eax,%ecx
 875ea61:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875ea68:	8b 75 ac             	mov    -0x54(%ebp),%esi
 875ea6b:	89 f8                	mov    %edi,%eax
 875ea6d:	89 95 50 ff ff ff    	mov    %edx,-0xb0(%ebp)
 875ea73:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
 875ea7a:	00 00 00 
 875ea7d:	f7 24 8e             	mull   (%esi,%ecx,4)
 875ea80:	01 85 50 ff ff ff    	add    %eax,-0xb0(%ebp)
 875ea86:	11 95 54 ff ff ff    	adc    %edx,-0xac(%ebp)
 875ea8c:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 875ea92:	8b b5 50 ff ff ff    	mov    -0xb0(%ebp),%esi
 875ea98:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 875ea9e:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875eaa1:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 875eaa4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875eaa7:	89 34 8a             	mov    %esi,(%edx,%ecx,4)
 875eaaa:	83 c1 01             	add    $0x1,%ecx
 875eaad:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875eab0:	39 4d 20             	cmp    %ecx,0x20(%ebp)
 875eab3:	89 8d 4c ff ff ff    	mov    %ecx,-0xb4(%ebp)
 875eab9:	77 ad                	ja     875ea68 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x4e8>
 875eabb:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 875eabe:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 875eac1:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 875eac7:	89 14 0e             	mov    %edx,(%esi,%ecx,1)
 875eaca:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 875ead0:	e9 27 fe ff ff       	jmp    875e8fc <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x37c>
 875ead5:	89 45 c8             	mov    %eax,-0x38(%ebp)
 875ead8:	8b 45 94             	mov    -0x6c(%ebp),%eax
 875eadb:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 875eade:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 875eae4:	89 55 d0             	mov    %edx,-0x30(%ebp)
 875eae7:	8b 55 88             	mov    -0x78(%ebp),%edx
 875eaea:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 875eaed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 875eaf4:	00 
 875eaf5:	89 0c 24             	mov    %ecx,(%esp)
 875eaf8:	89 54 24 04          	mov    %edx,0x4(%esp)
 875eafc:	89 44 24 08          	mov    %eax,0x8(%esp)
 875eb00:	e8 fb 4e 00 00       	call   8763a00 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_>
 875eb05:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 875eb0b:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 875eb0e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 875eb15:	00 
 875eb16:	89 14 24             	mov    %edx,(%esp)
 875eb19:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875eb1d:	89 c6                	mov    %eax,%esi
 875eb1f:	8b 45 88             	mov    -0x78(%ebp),%eax
 875eb22:	89 44 24 04          	mov    %eax,0x4(%esp)
 875eb26:	e8 d5 4e 00 00       	call   8763a00 <_ZN8TaoCrypt21DivideThreeWordsByTwoIjNS_5DWordEEET_PS2_S2_S2_PT0_>
 875eb2b:	89 c2                	mov    %eax,%edx
 875eb2d:	e9 f5 fc ff ff       	jmp    875e827 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x2a7>
 875eb32:	8b 55 20             	mov    0x20(%ebp),%edx
 875eb35:	eb 84                	jmp    875eabb <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x53b>
 875eb37:	8b 45 18             	mov    0x18(%ebp),%eax
 875eb3a:	2b 45 20             	sub    0x20(%ebp),%eax
 875eb3d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875eb40:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875eb43:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 875eb4a:	01 d7                	add    %edx,%edi
 875eb4c:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 875eb52:	c7 44 81 04 00 00 00 	movl   $0x0,0x4(%ecx,%eax,4)
 875eb59:	00 
 875eb5a:	8b 75 20             	mov    0x20(%ebp),%esi
 875eb5d:	03 55 10             	add    0x10(%ebp),%edx
 875eb60:	89 7d b0             	mov    %edi,-0x50(%ebp)
 875eb63:	8b 7d bc             	mov    -0x44(%ebp),%edi
 875eb66:	8d 04 b5 fc ff ff ff 	lea    -0x4(,%esi,4),%eax
 875eb6d:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 875eb70:	01 c2                	add    %eax,%edx
 875eb72:	03 45 ac             	add    -0x54(%ebp),%eax
 875eb75:	89 55 a8             	mov    %edx,-0x58(%ebp)
 875eb78:	89 45 9c             	mov    %eax,-0x64(%ebp)
 875eb7b:	8b 3f                	mov    (%edi),%edi
 875eb7d:	85 ff                	test   %edi,%edi
 875eb7f:	89 7d c0             	mov    %edi,-0x40(%ebp)
 875eb82:	74 30                	je     875ebb4 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x634>
 875eb84:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 875eb87:	8b 45 20             	mov    0x20(%ebp),%eax
 875eb8a:	8b 55 ac             	mov    -0x54(%ebp),%edx
 875eb8d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875eb91:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875eb95:	89 54 24 08          	mov    %edx,0x8(%esp)
 875eb99:	89 0c 24             	mov    %ecx,(%esp)
 875eb9c:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875eba2:	8b 75 c0             	mov    -0x40(%ebp),%esi
 875eba5:	8b 7d bc             	mov    -0x44(%ebp),%edi
 875eba8:	29 c6                	sub    %eax,%esi
 875ebaa:	8b 45 b0             	mov    -0x50(%ebp),%eax
 875ebad:	89 37                	mov    %esi,(%edi)
 875ebaf:	83 00 01             	addl   $0x1,(%eax)
 875ebb2:	eb c7                	jmp    875eb7b <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x5fb>
 875ebb4:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 875ebb7:	8b 55 9c             	mov    -0x64(%ebp),%edx
 875ebba:	8b 45 20             	mov    0x20(%ebp),%eax
 875ebbd:	8d 76 00             	lea    0x0(%esi),%esi
 875ebc0:	85 c0                	test   %eax,%eax
 875ebc2:	74 c0                	je     875eb84 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x604>
 875ebc4:	8b 39                	mov    (%ecx),%edi
 875ebc6:	8b 32                	mov    (%edx),%esi
 875ebc8:	39 f7                	cmp    %esi,%edi
 875ebca:	77 b8                	ja     875eb84 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x604>
 875ebcc:	83 e8 01             	sub    $0x1,%eax
 875ebcf:	83 e9 04             	sub    $0x4,%ecx
 875ebd2:	83 ea 04             	sub    $0x4,%edx
 875ebd5:	39 f7                	cmp    %esi,%edi
 875ebd7:	73 e7                	jae    875ebc0 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x640>
 875ebd9:	e9 51 fb ff ff       	jmp    875e72f <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j+0x1af>
 875ebde:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Divide @ 0x875e580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Divide(unsigned int*, unsigned int*, unsigned int*, unsigned int const*, unsigned int,
   unsigned int const*, unsigned int) */

void TaoCrypt::Divide(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,
                     uint *param_6,uint param_7)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  byte local_78;
  byte local_74;
  int local_6c;
  uint local_68;
  uint *local_5c;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined8 local_2c;
  uint local_24;
  uint local_20;
  
  uVar4 = param_5 + 2;
  puVar11 = param_3 + uVar4;
  puVar1 = param_3 + param_7 + uVar4;
  iVar5 = param_7 - 1;
  uVar6 = param_6[iVar5];
  puVar13 = puVar11 + iVar5;
  *puVar13 = 0;
  uVar6 = (uint)(uVar6 == 0);
  *puVar11 = 0;
  if (param_7 != uVar6) {
    uVar7 = 0;
    do {
      puVar11[uVar6 + uVar7] = param_6[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_7 - uVar6);
  }
  iVar8 = BitPrecision(*puVar13);
  iVar9 = 0x20 - iVar8;
  local_74 = (byte)iVar9;
  local_78 = (byte)iVar8;
  if ((iVar9 != 0) && (param_7 != 0)) {
    uVar7 = 0;
    local_5c = (uint *)0x0;
    do {
      uVar10 = puVar11[uVar7];
      puVar11[uVar7] = uVar10 << (local_74 & 0x1f) | (uint)local_5c;
      uVar7 = uVar7 + 1;
      local_5c = (uint *)(uVar10 >> (local_78 & 0x1f));
    } while (uVar7 < param_7);
  }
  puVar16 = param_3 + param_5;
  param_3[param_5 + 1] = 0;
  *puVar16 = 0;
  *param_3 = 0;
  if (param_5 != 0) {
    uVar7 = 0;
    do {
      param_3[uVar6 + uVar7] = param_4[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_5);
  }
  if ((iVar9 != 0) && (uVar4 != 0)) {
    uVar7 = 0;
    local_5c = (uint *)0x0;
    do {
      uVar10 = param_3[uVar7];
      param_3[uVar7] = uVar10 << (local_74 & 0x1f) | (uint)local_5c;
      uVar7 = uVar7 + 1;
      local_5c = (uint *)(uVar10 >> (local_78 & 0x1f));
    } while (uVar7 < uVar4);
  }
  if ((param_3[param_5 + 1] != 0) || (1 < *puVar16)) {
LAB_0875e72f:
    param_5 = uVar4;
    uVar4 = puVar11[param_7 - 2] + 1;
    uVar7 = (uint)(uVar4 == 0) + *puVar13;
    local_68 = param_5 - 2;
    if (local_68 < param_7) {
LAB_0875e988:
      uVar4 = 0;
      do {
        param_1[uVar4] = param_3[uVar6 + uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_7);
LAB_0875e9a5:
      if ((iVar9 != 0) && (-1 < iVar5)) {
        puVar11 = param_1 + (param_7 - 1);
        uVar6 = 0;
        local_48 = (uint *)iVar5;
        do {
          uVar4 = *puVar11;
          *puVar11 = uVar4 >> (local_74 & 0x1f) | uVar6;
          puVar11 = puVar11 + -1;
          uVar6 = uVar4 << (local_78 & 0x1f);
          local_48 = (uint *)((int)local_48 + -1);
        } while (-1 < (int)local_48);
      }
      return;
    }
    iVar8 = param_5 - param_7;
    local_6c = 0;
    local_4c = param_3 + param_7 + iVar8 + -2;
    local_5c = param_3 + (param_5 - 3);
    local_50 = param_3 + iVar8 + -2;
    local_48 = param_2 + iVar8 + -2;
    local_54 = param_2 + ~param_7 + param_5;
LAB_0875e7f0:
    uVar10 = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -4);
    uVar12 = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -8);
    local_24 = uVar4;
    local_20 = uVar7;
    if (uVar7 != 0 || uVar4 != 0) {
      local_3c = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -0x10);
      local_38 = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -0xc);
      local_34 = uVar12;
      local_30 = uVar10;
      uVar10 = DivideThreeWordsByTwo<unsigned_int,TaoCrypt::DWord>
                         (&local_38,uVar4,uVar7,(DWord *)0x0);
      uVar12 = DivideThreeWordsByTwo<unsigned_int,TaoCrypt::DWord>
                         (&local_3c,uVar4,uVar7,(DWord *)0x0);
    }
    *local_48 = uVar12;
    *local_54 = uVar10;
    if (uVar10 == 0) {
      uVar12 = *local_48;
      uVar10 = 0;
      if (param_7 == 0) {
        uVar10 = 0;
      }
      else {
        uVar14 = 0;
        do {
          local_2c = (ulonglong)uVar12 * (ulonglong)puVar11[uVar14] + (ulonglong)uVar10;
          uVar10 = (uint)((ulonglong)local_2c >> 0x20);
          puVar1[uVar14] = (uint)local_2c;
          uVar14 = uVar14 + 1;
        } while (uVar14 < param_7);
      }
      puVar1[param_7] = uVar10;
      puVar1[param_7 + 1] = 0;
    }
    else {
      puVar1[param_7 + 1] = 0;
      puVar1[param_7] = 0;
      if (param_7 != 0) {
        uVar10 = 0;
        puVar13 = puVar1;
        puVar16 = puVar11;
        do {
          Portable::Multiply2(puVar13,local_48,puVar16);
          uVar10 = uVar10 + 4;
          puVar13 = puVar13 + 4;
          puVar16 = puVar16 + 4;
        } while (uVar10 < param_7);
        if (2 < param_7) {
          puVar13 = puVar1 + 2;
          puVar16 = puVar11 + 2;
          uVar10 = 6;
          do {
            iVar8 = Portable::Multiply2Add(puVar13,local_48,puVar16);
            if (iVar8 != 0) {
              uVar12 = puVar13[4];
              puVar13[4] = uVar12 + 1;
              puVar13[5] = (uint)(uVar12 + 1 == 0) + puVar13[5];
            }
            puVar13 = puVar13 + 4;
            puVar16 = puVar16 + 4;
            bVar3 = uVar10 < param_7;
            uVar10 = uVar10 + 4;
          } while (bVar3);
        }
      }
    }
    (*s_pSub)(local_50,local_50,puVar1,param_7 + 2);
    do {
      uVar10 = *local_4c;
      uVar12 = param_7;
      puVar13 = puVar11 + (param_7 - 1);
      puVar16 = local_5c;
      if (uVar10 == 0) {
        while (uVar12 != 0) {
          uVar14 = *puVar16;
          uVar2 = *puVar13;
          if (uVar2 < uVar14) break;
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + -1;
          puVar16 = puVar16 + -1;
          if (uVar14 < uVar2) {
            local_68 = local_68 - 2;
            local_6c = local_6c + -8;
            local_5c = local_5c + -2;
            local_4c = local_4c + -2;
            local_50 = local_50 + -2;
            local_54 = local_54 + -2;
            local_48 = local_48 + -2;
            if (param_7 <= local_68) goto LAB_0875e7f0;
            if (param_7 == 0) goto LAB_0875e9a5;
            goto LAB_0875e988;
          }
        }
      }
      iVar8 = (*s_pSub)(local_50,local_50,puVar11,param_7);
      *local_4c = uVar10 - iVar8;
      uVar10 = *local_54;
      uVar12 = *local_48;
      *local_48 = uVar12 + 1;
      *local_54 = (uVar12 + 1 == 0) + uVar10;
    } while( true );
  }
  iVar8 = param_5 - param_7;
  puVar19 = param_2 + iVar8;
  *puVar19 = 0;
  param_2[iVar8 + 1] = 0;
  puVar17 = param_3 + iVar8;
  do {
    uVar7 = *puVar16;
    uVar10 = param_7;
    puVar15 = puVar17 + (param_7 - 1);
    puVar18 = puVar11 + (param_7 - 1);
    if (uVar7 == 0) {
      while (uVar10 != 0) {
        uVar12 = *puVar15;
        uVar14 = *puVar18;
        if (uVar14 < uVar12) break;
        uVar10 = uVar10 - 1;
        puVar15 = puVar15 + -1;
        puVar18 = puVar18 + -1;
        uVar4 = param_5;
        if (uVar12 < uVar14) goto LAB_0875e72f;
      }
    }
    iVar8 = (*s_pSub)(puVar17,puVar17,puVar11,param_7);
    *puVar16 = uVar7 - iVar8;
    *puVar19 = *puVar19 + 1;
  } while( true );
}

```

---

## DivideByPower2Mod

```asm
// === 0875ce90 TaoCrypt::DivideByPower2Mod  [0x0875ce90-0x875cf8f] ===
 875ce90:	55                   	push   %ebp
 875ce91:	89 e5                	mov    %esp,%ebp
 875ce93:	57                   	push   %edi
 875ce94:	56                   	push   %esi
 875ce95:	53                   	push   %ebx
 875ce96:	83 ec 2c             	sub    $0x2c,%esp
 875ce99:	8b 7d 18             	mov    0x18(%ebp),%edi
 875ce9c:	e8 57 5f fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875cea1:	81 c3 f7 fc c0 00    	add    $0xc0fcf7,%ebx
 875cea7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875ceaa:	85 ff                	test   %edi,%edi
 875ceac:	74 17                	je     875cec5 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0x35>
 875ceae:	8b 75 08             	mov    0x8(%ebp),%esi
 875ceb1:	31 c0                	xor    %eax,%eax
 875ceb3:	8b 7d 18             	mov    0x18(%ebp),%edi
 875ceb6:	66 90                	xchg   %ax,%ax
 875ceb8:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875cebb:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875cebe:	83 c0 01             	add    $0x1,%eax
 875cec1:	39 c7                	cmp    %eax,%edi
 875cec3:	77 f3                	ja     875ceb8 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0x28>
 875cec5:	8b 45 18             	mov    0x18(%ebp),%eax
 875cec8:	8b 55 08             	mov    0x8(%ebp),%edx
 875cecb:	83 e8 01             	sub    $0x1,%eax
 875cece:	8d 14 82             	lea    (%edx,%eax,4),%edx
 875ced1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875ced4:	8b 45 18             	mov    0x18(%ebp),%eax
 875ced7:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875ceda:	8b 55 08             	mov    0x8(%ebp),%edx
 875cedd:	8d 44 82 fc          	lea    -0x4(%edx,%eax,4),%eax
 875cee1:	8b 55 10             	mov    0x10(%ebp),%edx
 875cee4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875cee7:	85 d2                	test   %edx,%edx
 875cee9:	74 3f                	je     875cf2a <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0x9a>
 875ceeb:	90                   	nop
 875ceec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875cef0:	8b 55 08             	mov    0x8(%ebp),%edx
 875cef3:	f6 02 01             	testb  $0x1,(%edx)
 875cef6:	75 40                	jne    875cf38 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0xa8>
 875cef8:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875cefb:	85 f6                	test   %esi,%esi
 875cefd:	78 20                	js     875cf1f <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0x8f>
 875ceff:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875cf02:	31 ff                	xor    %edi,%edi
 875cf04:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875cf07:	90                   	nop
 875cf08:	8b 30                	mov    (%eax),%esi
 875cf0a:	89 f2                	mov    %esi,%edx
 875cf0c:	d1 ea                	shr    $1,%edx
 875cf0e:	09 fa                	or     %edi,%edx
 875cf10:	89 f7                	mov    %esi,%edi
 875cf12:	89 10                	mov    %edx,(%eax)
 875cf14:	c1 e7 1f             	shl    $0x1f,%edi
 875cf17:	83 e8 04             	sub    $0x4,%eax
 875cf1a:	83 e9 01             	sub    $0x1,%ecx
 875cf1d:	79 e9                	jns    875cf08 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0x78>
 875cf1f:	83 6d 10 01          	subl   $0x1,0x10(%ebp)
 875cf23:	8b 55 10             	mov    0x10(%ebp),%edx
 875cf26:	85 d2                	test   %edx,%edx
 875cf28:	75 c6                	jne    875cef0 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0x60>
 875cf2a:	83 c4 2c             	add    $0x2c,%esp
 875cf2d:	5b                   	pop    %ebx
 875cf2e:	5e                   	pop    %esi
 875cf2f:	5f                   	pop    %edi
 875cf30:	5d                   	pop    %ebp
 875cf31:	c3                   	ret
 875cf32:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875cf38:	8b 45 18             	mov    0x18(%ebp),%eax
 875cf3b:	8b 55 14             	mov    0x14(%ebp),%edx
 875cf3e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875cf42:	8b 45 08             	mov    0x8(%ebp),%eax
 875cf45:	89 54 24 08          	mov    %edx,0x8(%esp)
 875cf49:	89 44 24 04          	mov    %eax,0x4(%esp)
 875cf4d:	89 04 24             	mov    %eax,(%esp)
 875cf50:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875cf56:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875cf59:	85 c9                	test   %ecx,%ecx
 875cf5b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875cf5e:	78 1f                	js     875cf7f <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0xef>
 875cf60:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875cf63:	31 ff                	xor    %edi,%edi
 875cf65:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875cf68:	8b 30                	mov    (%eax),%esi
 875cf6a:	89 f2                	mov    %esi,%edx
 875cf6c:	d1 ea                	shr    $1,%edx
 875cf6e:	09 fa                	or     %edi,%edx
 875cf70:	89 f7                	mov    %esi,%edi
 875cf72:	89 10                	mov    %edx,(%eax)
 875cf74:	c1 e7 1f             	shl    $0x1f,%edi
 875cf77:	83 e8 04             	sub    $0x4,%eax
 875cf7a:	83 e9 01             	sub    $0x1,%ecx
 875cf7d:	79 e9                	jns    875cf68 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0xd8>
 875cf7f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875cf82:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875cf85:	c1 e0 1f             	shl    $0x1f,%eax
 875cf88:	01 02                	add    %eax,(%edx)
 875cf8a:	83 6d 10 01          	subl   $0x1,0x10(%ebp)
 875cf8e:	eb 93                	jmp    875cf23 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j+0x93>

```

```c
// TaoCrypt::DivideByPower2Mod @ 0x875ce90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int
   const*, unsigned int) */

void TaoCrypt::DivideByPower2Mod
               (uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  if (param_5 != 0) {
    uVar2 = 0;
    do {
      param_1[uVar2] = param_2[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_5);
  }
  iVar3 = param_5 - 1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    if ((*param_1 & 1) == 0) {
      if (-1 < iVar3) {
        uVar2 = 0;
        puVar4 = param_1 + (param_5 - 1);
        iVar5 = iVar3;
        do {
          uVar1 = *puVar4;
          *puVar4 = uVar1 >> 1 | uVar2;
          uVar2 = uVar1 << 0x1f;
          puVar4 = puVar4 + -1;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
    else {
      iVar5 = (*s_pAdd)(param_1,param_1,param_4,param_5);
      if (-1 < iVar3) {
        uVar2 = 0;
        puVar4 = param_1 + (param_5 - 1);
        iVar6 = iVar3;
        do {
          uVar1 = *puVar4;
          *puVar4 = uVar1 >> 1 | uVar2;
          uVar2 = uVar1 << 0x1f;
          puVar4 = puVar4 + -1;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      param_1[iVar3] = param_1[iVar3] + iVar5 * -0x80000000;
    }
  }
  return;
}

```

---

## EncodeDSA_Signature

```asm
// === 087545b0 TaoCrypt::EncodeDSA_Signature  [0x087545b0-0x87546ff] ===
 87545b0:	55                   	push   %ebp
 87545b1:	89 e5                	mov    %esp,%ebp
 87545b3:	57                   	push   %edi
 87545b4:	56                   	push   %esi
 87545b5:	53                   	push   %ebx
 87545b6:	e8 3d e8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87545bb:	81 c3 dd 85 c1 00    	add    $0xc185dd,%ebx
 87545c1:	83 ec 5c             	sub    $0x5c,%esp
 87545c4:	8b 45 08             	mov    0x8(%ebp),%eax
 87545c7:	8b 75 10             	mov    0x10(%ebp),%esi
 87545ca:	89 04 24             	mov    %eax,(%esp)
 87545cd:	e8 5e a6 00 00       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 87545d2:	8b 55 0c             	mov    0xc(%ebp),%edx
 87545d5:	89 14 24             	mov    %edx,(%esp)
 87545d8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87545db:	e8 50 a6 00 00       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 87545e0:	8d 4d dd             	lea    -0x23(%ebp),%ecx
 87545e3:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 87545e6:	c6 45 dd 02          	movb   $0x2,-0x23(%ebp)
 87545ea:	c6 45 d7 02          	movb   $0x2,-0x29(%ebp)
 87545ee:	89 c7                	mov    %eax,%edi
 87545f0:	8d 45 de             	lea    -0x22(%ebp),%eax
 87545f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87545f7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87545fa:	89 04 24             	mov    %eax,(%esp)
 87545fd:	e8 de fe ff ff       	call   87544e0 <_ZN8TaoCrypt9SetLengthEjPh>
 8754602:	8d 55 d7             	lea    -0x29(%ebp),%edx
 8754605:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8754608:	89 3c 24             	mov    %edi,(%esp)
 875460b:	83 c0 01             	add    $0x1,%eax
 875460e:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8754611:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8754614:	89 44 24 04          	mov    %eax,0x4(%esp)
 8754618:	e8 c3 fe ff ff       	call   87544e0 <_ZN8TaoCrypt9SetLengthEjPh>
 875461d:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 8754620:	89 54 24 04          	mov    %edx,0x4(%esp)
 8754624:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8754627:	83 c0 01             	add    $0x1,%eax
 875462a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 875462d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8754630:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8754633:	03 45 b8             	add    -0x48(%ebp),%eax
 8754636:	03 45 bc             	add    -0x44(%ebp),%eax
 8754639:	89 04 24             	mov    %eax,(%esp)
 875463c:	e8 2f ff ff ff       	call   8754570 <_ZN8TaoCrypt11SetSequenceEjPh>
 8754641:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8754644:	89 34 24             	mov    %esi,(%esp)
 8754647:	89 54 24 04          	mov    %edx,0x4(%esp)
 875464b:	89 45 c0             	mov    %eax,-0x40(%ebp)
 875464e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8754652:	e8 49 92 92 ff       	call   807d8a0 <memcpy@plt>
 8754657:	8b 45 c0             	mov    -0x40(%ebp),%eax
 875465a:	8b 55 b8             	mov    -0x48(%ebp),%edx
 875465d:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 8754660:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8754663:	89 54 24 08          	mov    %edx,0x8(%esp)
 8754667:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875466b:	89 04 24             	mov    %eax,(%esp)
 875466e:	e8 2d 92 92 ff       	call   807d8a0 <memcpy@plt>
 8754673:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8754676:	03 55 c0             	add    -0x40(%ebp),%edx
 8754679:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 875467c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8754683:	00 
 8754684:	8d 04 16             	lea    (%esi,%edx,1),%eax
 8754687:	89 44 24 04          	mov    %eax,0x4(%esp)
 875468b:	8b 45 08             	mov    0x8(%ebp),%eax
 875468e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8754692:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8754695:	89 04 24             	mov    %eax,(%esp)
 8754698:	e8 73 c8 00 00       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 875469d:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 87546a0:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87546a3:	03 55 c4             	add    -0x3c(%ebp),%edx
 87546a6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87546aa:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 87546ad:	8d 04 16             	lea    (%esi,%edx,1),%eax
 87546b0:	89 55 ac             	mov    %edx,-0x54(%ebp)
 87546b3:	89 04 24             	mov    %eax,(%esp)
 87546b6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87546ba:	e8 e1 91 92 ff       	call   807d8a0 <memcpy@plt>
 87546bf:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87546c2:	03 55 bc             	add    -0x44(%ebp),%edx
 87546c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 87546c8:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87546cc:	01 d6                	add    %edx,%esi
 87546ce:	89 74 24 04          	mov    %esi,0x4(%esp)
 87546d2:	89 55 ac             	mov    %edx,-0x54(%ebp)
 87546d5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87546dc:	00 
 87546dd:	89 04 24             	mov    %eax,(%esp)
 87546e0:	e8 2b c8 00 00       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 87546e5:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87546e8:	83 c4 5c             	add    $0x5c,%esp
 87546eb:	5b                   	pop    %ebx
 87546ec:	5e                   	pop    %esi
 87546ed:	8d 04 3a             	lea    (%edx,%edi,1),%eax
 87546f0:	5f                   	pop    %edi
 87546f1:	5d                   	pop    %ebp
 87546f2:	c3                   	ret
 87546f3:	90                   	nop
 87546f4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87546fa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::EncodeDSA_Signature @ 0x87545b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::EncodeDSA_Signature(TaoCrypt::Integer const&, TaoCrypt::Integer const&, unsigned char*)
    */

int TaoCrypt::EncodeDSA_Signature(Integer *param_1,Integer *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined1 local_2d;
  uchar local_2c [5];
  undefined1 local_27;
  uchar local_26 [5];
  uchar local_21 [13];
  undefined4 uStack_14;
  
  uStack_14 = 0x87545bb;
  uVar1 = Integer::ByteCount(param_1);
  uVar2 = Integer::ByteCount(param_2);
  local_27 = 2;
  local_2d = 2;
  iVar3 = SetLength(uVar1,local_26);
  __n = iVar3 + 1;
  iVar3 = SetLength(uVar2,local_2c);
  __n_00 = iVar3 + 1;
  __n_01 = SetSequence(uVar2 + uVar1 + __n + __n_00,local_21);
  memcpy(param_3,local_21,__n_01);
  memcpy(param_3 + __n_01,&local_27,__n);
  Integer::Encode(param_1,param_3 + __n + __n_01,uVar1,0);
  iVar3 = __n + __n_01 + uVar1;
  memcpy(param_3 + iVar3,&local_2d,__n_00);
  iVar3 = iVar3 + __n_00;
  Integer::Encode(param_2,param_3 + iVar3,uVar2,0);
  return iVar3 + uVar2;
}

```

---

## EncodeDSA_Signature_087554a0

```asm
// === 087554a0 TaoCrypt::EncodeDSA_Signature  [0x087554a0-0x875556f] ===
 87554a0:	55                   	push   %ebp
 87554a1:	89 e5                	mov    %esp,%ebp
 87554a3:	57                   	push   %edi
 87554a4:	56                   	push   %esi
 87554a5:	53                   	push   %ebx
 87554a6:	e8 4d d9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87554ab:	81 c3 ed 76 c1 00    	add    $0xc176ed,%ebx
 87554b1:	83 ec 3c             	sub    $0x3c,%esp
 87554b4:	8b 7d 08             	mov    0x8(%ebp),%edi
 87554b7:	8d 75 d8             	lea    -0x28(%ebp),%esi
 87554ba:	89 34 24             	mov    %esi,(%esp)
 87554bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87554c4:	00 
 87554c5:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87554c9:	83 c7 14             	add    $0x14,%edi
 87554cc:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 87554d3:	00 
 87554d4:	e8 27 be 00 00       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 87554d9:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87554dd:	8d 7d c8             	lea    -0x38(%ebp),%edi
 87554e0:	89 3c 24             	mov    %edi,(%esp)
 87554e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 87554ea:	00 
 87554eb:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 87554f2:	00 
 87554f3:	e8 08 be 00 00       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 87554f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 87554fb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87554ff:	89 34 24             	mov    %esi,(%esp)
 8755502:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755506:	e8 a5 f0 ff ff       	call   87545b0 <_ZN8TaoCrypt19EncodeDSA_SignatureERKNS_7IntegerES2_Ph>
 875550b:	8b 75 cc             	mov    -0x34(%ebp),%esi
 875550e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755515:	00 
 8755516:	89 34 24             	mov    %esi,(%esp)
 8755519:	89 c7                	mov    %eax,%edi
 875551b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875551e:	c1 e0 02             	shl    $0x2,%eax
 8755521:	89 44 24 08          	mov    %eax,0x8(%esp)
 8755525:	e8 96 87 92 ff       	call   807dcc0 <memset@plt>
 875552a:	89 34 24             	mov    %esi,(%esp)
 875552d:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8755532:	e8 e9 21 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755537:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875553a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875553d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8755544:	00 
 8755545:	c1 e0 02             	shl    $0x2,%eax
 8755548:	89 34 24             	mov    %esi,(%esp)
 875554b:	89 44 24 08          	mov    %eax,0x8(%esp)
 875554f:	e8 6c 87 92 ff       	call   807dcc0 <memset@plt>
 8755554:	89 34 24             	mov    %esi,(%esp)
 8755557:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875555c:	e8 bf 21 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755561:	83 c4 3c             	add    $0x3c,%esp
 8755564:	89 f8                	mov    %edi,%eax
 8755566:	5b                   	pop    %ebx
 8755567:	5e                   	pop    %esi
 8755568:	5f                   	pop    %edi
 8755569:	5d                   	pop    %ebp
 875556a:	c3                   	ret
 875556b:	90                   	nop
 875556c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::EncodeDSA_Signature @ 0x87554a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::EncodeDSA_Signature(unsigned char const*, unsigned char*) */

undefined4 TaoCrypt::EncodeDSA_Signature(uchar *param_1,uchar *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87554ab;
  Integer::Integer((Integer *)&local_2c,param_1,0x14,0);
  Integer::Integer((Integer *)&local_3c,param_1 + 0x14,0x14,0);
  uVar1 = EncodeDSA_Signature((Integer *)&local_2c,(Integer *)&local_3c,param_2);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return uVar1;
}

```

---

## GetCert

```asm
// === 08754040 TaoCrypt::GetCert  [0x08754040-0x875419f] ===
 8754040:	55                   	push   %ebp
 8754041:	89 e5                	mov    %esp,%ebp
 8754043:	81 ec 88 00 00 00    	sub    $0x88,%esp
 8754049:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875404c:	8b 7d 08             	mov    0x8(%ebp),%edi
 875404f:	8d 45 9e             	lea    -0x62(%ebp),%eax
 8754052:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8754055:	e8 9e ed fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875405a:	81 c3 3e 8b c1 00    	add    $0xc18b3e,%ebx
 8754060:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8754063:	c7 45 9e 2d 2d 2d 2d 	movl   $0x2d2d2d2d,-0x62(%ebp)
 875406a:	c7 45 a2 2d 42 45 47 	movl   $0x4745422d,-0x5e(%ebp)
 8754071:	c7 45 a6 49 4e 20 43 	movl   $0x43204e49,-0x5a(%ebp)
 8754078:	c7 45 aa 45 52 54 49 	movl   $0x49545245,-0x56(%ebp)
 875407f:	c7 45 ae 46 49 43 41 	movl   $0x41434946,-0x52(%ebp)
 8754086:	c7 45 b2 54 45 2d 2d 	movl   $0x2d2d4554,-0x4e(%ebp)
 875408d:	c7 45 b6 2d 2d 2d 00 	movl   $0x2d2d2d,-0x4a(%ebp)
 8754094:	c7 45 ba 2d 2d 2d 2d 	movl   $0x2d2d2d2d,-0x46(%ebp)
 875409b:	c7 45 be 2d 45 4e 44 	movl   $0x444e452d,-0x42(%ebp)
 87540a2:	c7 45 c2 20 43 45 52 	movl   $0x52454320,-0x3e(%ebp)
 87540a9:	c7 45 c6 54 49 46 49 	movl   $0x49464954,-0x3a(%ebp)
 87540b0:	c7 45 ca 43 41 54 45 	movl   $0x45544143,-0x36(%ebp)
 87540b7:	c7 45 ce 2d 2d 2d 2d 	movl   $0x2d2d2d2d,-0x32(%ebp)
 87540be:	66 c7 45 d2 2d 00    	movw   $0x2d,-0x2e(%ebp)
 87540c4:	8b 77 04             	mov    0x4(%edi),%esi
 87540c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87540cb:	89 34 24             	mov    %esi,(%esp)
 87540ce:	e8 ed 99 92 ff       	call   807dac0 <strstr@plt>
 87540d3:	8d 55 ba             	lea    -0x46(%ebp),%edx
 87540d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 87540da:	89 34 24             	mov    %esi,(%esp)
 87540dd:	89 55 90             	mov    %edx,-0x70(%ebp)
 87540e0:	89 45 94             	mov    %eax,-0x6c(%ebp)
 87540e3:	e8 d8 99 92 ff       	call   807dac0 <strstr@plt>
 87540e8:	8b 55 90             	mov    -0x70(%ebp),%edx
 87540eb:	85 c0                	test   %eax,%eax
 87540ed:	89 c6                	mov    %eax,%esi
 87540ef:	75 17                	jne    8754108 <_ZN8TaoCrypt7GetCertERNS_6SourceE+0xc8>
 87540f1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 87540f6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87540f9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87540fc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87540ff:	89 ec                	mov    %ebp,%esp
 8754101:	5d                   	pop    %ebp
 8754102:	c3                   	ret
 8754103:	90                   	nop
 8754104:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8754108:	8b 45 94             	mov    -0x6c(%ebp),%eax
 875410b:	85 c0                	test   %eax,%eax
 875410d:	74 e2                	je     87540f1 <_ZN8TaoCrypt7GetCertERNS_6SourceE+0xb1>
 875410f:	39 75 94             	cmp    %esi,-0x6c(%ebp)
 8754112:	73 dd                	jae    87540f1 <_ZN8TaoCrypt7GetCertERNS_6SourceE+0xb1>
 8754114:	89 14 24             	mov    %edx,(%esp)
 8754117:	e8 94 a2 92 ff       	call   807e3b0 <strlen@plt>
 875411c:	01 c6                	add    %eax,%esi
 875411e:	31 c0                	xor    %eax,%eax
 8754120:	80 3e 0d             	cmpb   $0xd,(%esi)
 8754123:	0f 94 c0             	sete   %al
 8754126:	2b 75 94             	sub    -0x6c(%ebp),%esi
 8754129:	8d 54 06 01          	lea    0x1(%esi,%eax,1),%edx
 875412d:	31 c0                	xor    %eax,%eax
 875412f:	85 d2                	test   %edx,%edx
 8754131:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8754134:	74 10                	je     8754146 <_ZN8TaoCrypt7GetCertERNS_6SourceE+0x106>
 8754136:	89 14 24             	mov    %edx,(%esp)
 8754139:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875413e:	e8 4d 36 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8754143:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8754146:	89 54 24 08          	mov    %edx,0x8(%esp)
 875414a:	8b 55 94             	mov    -0x6c(%ebp),%edx
 875414d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8754150:	89 04 24             	mov    %eax,(%esp)
 8754153:	89 54 24 04          	mov    %edx,0x4(%esp)
 8754157:	e8 44 97 92 ff       	call   807d8a0 <memcpy@plt>
 875415c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875415f:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8754162:	8b 17                	mov    (%edi),%edx
 8754164:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 875416b:	89 07                	mov    %eax,(%edi)
 875416d:	8b 47 04             	mov    0x4(%edi),%eax
 8754170:	89 4f 04             	mov    %ecx,0x4(%edi)
 8754173:	8b 4f 0c             	mov    0xc(%edi),%ecx
 8754176:	c7 47 0c 00 00 00 00 	movl   $0x0,0xc(%edi)
 875417d:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8754180:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8754183:	89 44 24 04          	mov    %eax,0x4(%esp)
 8754187:	8d 45 dc             	lea    -0x24(%ebp),%eax
 875418a:	89 04 24             	mov    %eax,(%esp)
 875418d:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8754190:	89 54 24 08          	mov    %edx,0x8(%esp)
 8754194:	e8 f7 23 ff ff       	call   8746590 <_ZN8TaoCrypt20AllocatorWithCleanupIhE10deallocateEPvj>
 8754199:	31 c0                	xor    %eax,%eax
 875419b:	e9 56 ff ff ff       	jmp    87540f6 <_ZN8TaoCrypt7GetCertERNS_6SourceE+0xb6>

```

```c
// TaoCrypt::GetCert @ 0x8754040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::GetCert(TaoCrypt::Source&) */

undefined4 TaoCrypt::GetCert(Source *param_1)

{
  char *__needle;
  uint uVar1;
  void *pvVar2;
  char *__src;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  char *pcVar6;
  char local_66 [54];
  char *local_30;
  void *local_2c;
  AllocatorWithCleanup<unsigned_char> local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  
  builtin_strncpy(local_66,"-----BEGIN CERTIFICATE-----",0x1c);
  builtin_strncpy(local_66 + 0x1c,"-----END CERTIFICATE-----",0x1a);
  pcVar3 = *(char **)(param_1 + 4);
  __src = strstr(pcVar3,local_66);
  __needle = local_66 + 0x1c;
  pcVar6 = __needle;
  pcVar3 = strstr(pcVar3,__needle);
  if (((pcVar3 == (char *)0x0) || (__src == (char *)0x0)) || (pcVar3 <= __src)) {
    uVar4 = 0xffffffff;
  }
  else {
    sVar5 = strlen(__needle);
    local_30 = pcVar3 + sVar5 + (uint)(pcVar3[sVar5] == '\r') + (1 - (int)__src);
    local_2c = (void *)0x0;
    if (local_30 != (char *)0x0) {
      local_2c = operator_new__(local_30,(uint)pcVar6 & 0xffffff00);
    }
    memcpy(local_2c,__src,(size_t)local_30);
    uVar1 = *(uint *)param_1;
    local_20 = 0;
    *(char **)param_1 = local_30;
    pvVar2 = *(void **)(param_1 + 4);
    *(void **)(param_1 + 4) = local_2c;
    local_24 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = 0;
    local_30 = (char *)uVar1;
    local_2c = pvVar2;
    AllocatorWithCleanup<unsigned_char>::deallocate(local_28,pvVar2,uVar1);
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## GetLength

```asm
// === 08753700 TaoCrypt::GetLength  [0x08753700-0x875376f] ===
 8753700:	55                   	push   %ebp
 8753701:	89 e5                	mov    %esp,%ebp
 8753703:	57                   	push   %edi
 8753704:	56                   	push   %esi
 8753705:	83 ec 0c             	sub    $0xc,%esp
 8753708:	8b 75 08             	mov    0x8(%ebp),%esi
 875370b:	8b 46 0c             	mov    0xc(%esi),%eax
 875370e:	8b 7e 04             	mov    0x4(%esi),%edi
 8753711:	8d 50 01             	lea    0x1(%eax),%edx
 8753714:	89 56 0c             	mov    %edx,0xc(%esi)
 8753717:	0f b6 0c 07          	movzbl (%edi,%eax,1),%ecx
 875371b:	84 c9                	test   %cl,%cl
 875371d:	0f b6 c1             	movzbl %cl,%eax
 8753720:	78 0e                	js     8753730 <_ZN8TaoCrypt9GetLengthERNS_6SourceE+0x30>
 8753722:	83 c4 0c             	add    $0xc,%esp
 8753725:	5e                   	pop    %esi
 8753726:	5f                   	pop    %edi
 8753727:	5d                   	pop    %ebp
 8753728:	c3                   	ret
 8753729:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8753730:	31 c0                	xor    %eax,%eax
 8753732:	83 e1 7f             	and    $0x7f,%ecx
 8753735:	74 eb                	je     8753722 <_ZN8TaoCrypt9GetLengthERNS_6SourceE+0x22>
 8753737:	89 7d f4             	mov    %edi,-0xc(%ebp)
 875373a:	89 f7                	mov    %esi,%edi
 875373c:	89 75 f0             	mov    %esi,-0x10(%ebp)
 875373f:	eb 0c                	jmp    875374d <_ZN8TaoCrypt9GetLengthERNS_6SourceE+0x4d>
 8753741:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8753748:	8b 7d f0             	mov    -0x10(%ebp),%edi
 875374b:	89 f2                	mov    %esi,%edx
 875374d:	8d 72 01             	lea    0x1(%edx),%esi
 8753750:	89 77 0c             	mov    %esi,0xc(%edi)
 8753753:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8753756:	c1 e0 08             	shl    $0x8,%eax
 8753759:	89 45 ec             	mov    %eax,-0x14(%ebp)
 875375c:	0f b6 04 17          	movzbl (%edi,%edx,1),%eax
 8753760:	0b 45 ec             	or     -0x14(%ebp),%eax
 8753763:	83 e9 01             	sub    $0x1,%ecx
 8753766:	75 e0                	jne    8753748 <_ZN8TaoCrypt9GetLengthERNS_6SourceE+0x48>
 8753768:	83 c4 0c             	add    $0xc,%esp
 875376b:	5e                   	pop    %esi
 875376c:	5f                   	pop    %edi
 875376d:	5d                   	pop    %ebp
 875376e:	c3                   	ret
 875376f:	90                   	nop

```

```c
// TaoCrypt::GetLength @ 0x8753700

/* TaoCrypt::GetLength(TaoCrypt::Source&) */

void TaoCrypt::GetLength(Source *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = iVar2 + 1;
  *(int *)(param_1 + 0xc) = iVar4;
  bVar1 = *(byte *)(*(int *)(param_1 + 4) + iVar2);
  if (((char)bVar1 < '\0') && (uVar3 = bVar1 & 0x7f, (bVar1 & 0x7f) != 0)) {
    do {
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0xc) = iVar4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return;
  }
  return;
}

```

---

## GetPKCS_Cert

```asm
// === 08753c10 TaoCrypt::GetPKCS_Cert  [0x08753c10-0x8753c4f] ===
 8753c10:	55                   	push   %ebp
 8753c11:	89 e5                	mov    %esp,%ebp
 8753c13:	53                   	push   %ebx
 8753c14:	e8 df f1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753c19:	81 c3 7f 8f c1 00    	add    $0xc18f7f,%ebx
 8753c1f:	83 ec 24             	sub    $0x24,%esp
 8753c22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8753c25:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8753c28:	8b 83 0c fd ff ff    	mov    -0x2f4(%ebx),%eax
 8753c2e:	83 c0 08             	add    $0x8,%eax
 8753c31:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8753c34:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8753c37:	89 04 24             	mov    %eax,(%esp)
 8753c3a:	e8 11 ff ff ff       	call   8753b50 <_ZN8TaoCrypt14PKCS12_Decoder6DecodeEv>
 8753c3f:	83 c4 24             	add    $0x24,%esp
 8753c42:	31 c0                	xor    %eax,%eax
 8753c44:	5b                   	pop    %ebx
 8753c45:	5d                   	pop    %ebp
 8753c46:	c3                   	ret
 8753c47:	90                   	nop
 8753c48:	90                   	nop
 8753c49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::GetPKCS_Cert @ 0x8753c10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::GetPKCS_Cert(char const*, TaoCrypt::Source&) */

undefined4 TaoCrypt::GetPKCS_Cert(char *param_1,Source *param_2)

{
  undefined *local_14;
  Source *local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x8753c19;
  local_10 = param_2;
  local_14 = PTR_vtable_0936c8a4 + 8;
  PKCS12_Decoder::Decode((PKCS12_Decoder *)&local_14);
  return 0;
}

```

---

## HaveCpuId

```asm
// === 087675a0 TaoCrypt::HaveCpuId  [0x087675a0-0x87675bf] ===
 87675a0:	55                   	push   %ebp
 87675a1:	89 e5                	mov    %esp,%ebp
 87675a3:	9c                   	pushf
 87675a4:	9c                   	pushf
 87675a5:	5a                   	pop    %edx
 87675a6:	89 d0                	mov    %edx,%eax
 87675a8:	81 f2 00 00 20 00    	xor    $0x200000,%edx
 87675ae:	52                   	push   %edx
 87675af:	9d                   	popf
 87675b0:	9c                   	pushf
 87675b1:	5a                   	pop    %edx
 87675b2:	9d                   	popf
 87675b3:	39 c2                	cmp    %eax,%edx
 87675b5:	0f 95 c0             	setne  %al
 87675b8:	5d                   	pop    %ebp
 87675b9:	c3                   	ret
 87675ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::HaveCpuId @ 0x87675a0

/* TaoCrypt::HaveCpuId() */

undefined4 TaoCrypt::HaveCpuId(void)

{
  uint uVar1;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar2;
  
  uVar2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar1 = uVar2 ^ 0x200000;
  return CONCAT31((int3)(uVar2 >> 8),
                  ((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x800) != 0) * 0x800 |
                   (uint)((uVar1 & 0x200) != 0) * 0x200 | (uint)((uVar1 & 0x100) != 0) * 0x100 |
                   (uint)((uVar1 & 0x80) != 0) * 0x80 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
                   (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
                   (uint)((uVar1 & 1) != 0) | (uint)((uVar1 & 0x200000) != 0) * 0x200000 |
                  (uint)((uVar1 & 0x40000) != 0) * 0x40000) != uVar2);
}

```

---

## IsPentium

```asm
// === 087675f0 TaoCrypt::IsPentium  [0x087675f0-0x876768f] ===
 87675f0:	55                   	push   %ebp
 87675f1:	89 e5                	mov    %esp,%ebp
 87675f3:	83 ec 48             	sub    $0x48,%esp
 87675f6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87675f9:	e8 fa b7 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87675fe:	81 c3 9a 55 c0 00    	add    $0xc0559a,%ebx
 8767604:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8767607:	89 7d fc             	mov    %edi,-0x4(%ebp)
 876760a:	e8 91 ff ff ff       	call   87675a0 <_ZN8TaoCrypt9HaveCpuIdEv>
 876760f:	84 c0                	test   %al,%al
 8767611:	75 15                	jne    8767628 <_ZN8TaoCrypt9IsPentiumEv+0x38>
 8767613:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8767616:	31 c0                	xor    %eax,%eax
 8767618:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876761b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876761e:	89 ec                	mov    %ebp,%esp
 8767620:	5d                   	pop    %ebp
 8767621:	c3                   	ret
 8767622:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8767628:	8d 45 d8             	lea    -0x28(%ebp),%eax
 876762b:	89 44 24 04          	mov    %eax,0x4(%esp)
 876762f:	8d 75 dc             	lea    -0x24(%ebp),%esi
 8767632:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8767635:	8d bb 88 88 99 ff    	lea    -0x667778(%ebx),%edi
 876763b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8767642:	e8 79 ff ff ff       	call   87675c0 <_ZN8TaoCrypt5CpuIdEjPj>
 8767647:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 876764a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 876764d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8767650:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8767653:	b9 0c 00 00 00       	mov    $0xc,%ecx
 8767658:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 876765b:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 876765d:	75 b4                	jne    8767613 <_ZN8TaoCrypt9IsPentiumEv+0x23>
 876765f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767663:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 876766a:	e8 51 ff ff ff       	call   87675c0 <_ZN8TaoCrypt5CpuIdEjPj>
 876766f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8767672:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8767675:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8767678:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876767b:	c1 e8 08             	shr    $0x8,%eax
 876767e:	83 e0 0f             	and    $0xf,%eax
 8767681:	3c 04                	cmp    $0x4,%al
 8767683:	0f 97 c0             	seta   %al
 8767686:	89 ec                	mov    %ebp,%esp
 8767688:	5d                   	pop    %ebp
 8767689:	c3                   	ret
 876768a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::IsPentium @ 0x87675f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::IsPentium() */

bool TaoCrypt::IsPentium(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined4 local_2c;
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  
  bVar7 = 0;
  cVar2 = HaveCpuId();
  uVar6 = cVar2 == '\0';
  if (!(bool)uVar6) {
    CpuId(0,&local_2c);
    uVar1 = local_24;
    local_24 = local_20;
    iVar3 = 0xc;
    local_20 = uVar1;
    pcVar4 = local_28;
    pcVar5 = "GenuineIntel";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while ((bool)uVar6);
    if ((bool)uVar6) {
      CpuId(1,&local_2c);
      return 4 < (local_2c._1_1_ & 0xf);
    }
  }
  return false;
}

```

---

## ModularRoot

```asm
// === 08762810 TaoCrypt::ModularRoot  [0x08762810-0x876298f] ===
 8762810:	55                   	push   %ebp
 8762811:	89 e5                	mov    %esp,%ebp
 8762813:	57                   	push   %edi
 8762814:	56                   	push   %esi
 8762815:	53                   	push   %ebx
 8762816:	e8 dd 05 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876281b:	81 c3 7d a3 c0 00    	add    $0xc0a37d,%ebx
 8762821:	83 ec 7c             	sub    $0x7c,%esp
 8762824:	8b 55 0c             	mov    0xc(%ebp),%edx
 8762827:	8b 45 18             	mov    0x18(%ebp),%eax
 876282a:	8d 7d c8             	lea    -0x38(%ebp),%edi
 876282d:	8b 75 1c             	mov    0x1c(%ebp),%esi
 8762830:	89 3c 24             	mov    %edi,(%esp)
 8762833:	89 55 a0             	mov    %edx,-0x60(%ebp)
 8762836:	89 54 24 04          	mov    %edx,0x4(%esp)
 876283a:	89 44 24 08          	mov    %eax,0x8(%esp)
 876283e:	e8 dd fd ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8762843:	8b 45 18             	mov    0x18(%ebp),%eax
 8762846:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8762849:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 876284c:	83 ec 04             	sub    $0x4,%esp
 876284f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8762853:	8b 45 10             	mov    0x10(%ebp),%eax
 8762856:	89 0c 24             	mov    %ecx,(%esp)
 8762859:	89 7c 24 04          	mov    %edi,0x4(%esp)
 876285d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762861:	e8 ca cd ff ff       	call   875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>
 8762866:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8762869:	8b 7d cc             	mov    -0x34(%ebp),%edi
 876286c:	c1 e0 02             	shl    $0x2,%eax
 876286f:	83 ec 04             	sub    $0x4,%esp
 8762872:	89 3c 24             	mov    %edi,(%esp)
 8762875:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762879:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762880:	00 
 8762881:	e8 3a b4 91 ff       	call   807dcc0 <memset@plt>
 8762886:	89 3c 24             	mov    %edi,(%esp)
 8762889:	8d 7d b8             	lea    -0x48(%ebp),%edi
 876288c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762891:	e8 8a 4e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762896:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8762899:	8d 45 a8             	lea    -0x58(%ebp),%eax
 876289c:	89 45 a0             	mov    %eax,-0x60(%ebp)
 876289f:	89 74 24 08          	mov    %esi,0x8(%esp)
 87628a3:	89 04 24             	mov    %eax,(%esp)
 87628a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 87628aa:	e8 71 fd ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 87628af:	8b 55 14             	mov    0x14(%ebp),%edx
 87628b2:	8b 45 a0             	mov    -0x60(%ebp),%eax
 87628b5:	83 ec 04             	sub    $0x4,%esp
 87628b8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87628bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 87628c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87628c4:	89 3c 24             	mov    %edi,(%esp)
 87628c7:	e8 64 cd ff ff       	call   875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>
 87628cc:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87628cf:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87628d2:	c1 e0 02             	shl    $0x2,%eax
 87628d5:	89 55 a0             	mov    %edx,-0x60(%ebp)
 87628d8:	83 ec 04             	sub    $0x4,%esp
 87628db:	89 14 24             	mov    %edx,(%esp)
 87628de:	89 44 24 08          	mov    %eax,0x8(%esp)
 87628e2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87628e9:	00 
 87628ea:	e8 d1 b3 91 ff       	call   807dcc0 <memset@plt>
 87628ef:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87628f2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87628f7:	89 14 24             	mov    %edx,(%esp)
 87628fa:	e8 21 4e 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87628ff:	8b 45 20             	mov    0x20(%ebp),%eax
 8762902:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 8762905:	89 74 24 10          	mov    %esi,0x10(%esp)
 8762909:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 876290d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8762911:	8b 45 18             	mov    0x18(%ebp),%eax
 8762914:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8762918:	89 44 24 08          	mov    %eax,0x8(%esp)
 876291c:	8b 45 08             	mov    0x8(%ebp),%eax
 876291f:	89 04 24             	mov    %eax,(%esp)
 8762922:	e8 89 fd ff ff       	call   87626b0 <_ZN8TaoCrypt3CRTERKNS_7IntegerES2_S2_S2_S2_>
 8762927:	8b 45 b8             	mov    -0x48(%ebp),%eax
 876292a:	8b 75 bc             	mov    -0x44(%ebp),%esi
 876292d:	c1 e0 02             	shl    $0x2,%eax
 8762930:	83 ec 04             	sub    $0x4,%esp
 8762933:	89 34 24             	mov    %esi,(%esp)
 8762936:	89 44 24 08          	mov    %eax,0x8(%esp)
 876293a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762941:	00 
 8762942:	e8 79 b3 91 ff       	call   807dcc0 <memset@plt>
 8762947:	89 34 24             	mov    %esi,(%esp)
 876294a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876294f:	e8 cc 4d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762954:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8762957:	8b 75 dc             	mov    -0x24(%ebp),%esi
 876295a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762961:	00 
 8762962:	c1 e0 02             	shl    $0x2,%eax
 8762965:	89 34 24             	mov    %esi,(%esp)
 8762968:	89 44 24 08          	mov    %eax,0x8(%esp)
 876296c:	e8 4f b3 91 ff       	call   807dcc0 <memset@plt>
 8762971:	89 34 24             	mov    %esi,(%esp)
 8762974:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762979:	e8 a2 4d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 876297e:	8b 45 08             	mov    0x8(%ebp),%eax
 8762981:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8762984:	5b                   	pop    %ebx
 8762985:	5e                   	pop    %esi
 8762986:	5f                   	pop    %edi
 8762987:	5d                   	pop    %ebp
 8762988:	c2 04 00             	ret    $0x4
 876298b:	90                   	nop
 876298c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::ModularRoot @ 0x8762810

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularRoot(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

Integer * TaoCrypt::ModularRoot
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
                    Integer *param_5,Integer *param_6)

{
  uint uVar1;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x876281b;
  Integer::Modulo((Integer *)&local_3c);
  a_exp_b_mod_c((TaoCrypt *)&local_2c,(Integer *)&local_3c,param_3,param_5);
  uVar1 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar1 & 0xffffff00);
  Integer::Modulo((Integer *)&local_5c);
  a_exp_b_mod_c((TaoCrypt *)&local_4c,(Integer *)&local_5c,param_4,param_6);
  uVar1 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar1 & 0xffffff00);
  CRT(param_1,(Integer *)&local_2c,param_5,(Integer *)&local_4c,param_6);
  uVar1 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar1 & 0xffffff00);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}

```

---

## MontgomeryReduce

```asm
// === 0875e1e0 TaoCrypt::MontgomeryReduce  [0x0875e1e0-0x875e2bf] ===
 875e1e0:	55                   	push   %ebp
 875e1e1:	89 e5                	mov    %esp,%ebp
 875e1e3:	57                   	push   %edi
 875e1e4:	56                   	push   %esi
 875e1e5:	53                   	push   %ebx
 875e1e6:	83 ec 3c             	sub    $0x3c,%esp
 875e1e9:	8b 45 18             	mov    0x18(%ebp),%eax
 875e1ec:	e8 07 4c fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875e1f1:	81 c3 a7 e9 c0 00    	add    $0xc0e9a7,%ebx
 875e1f7:	8b 75 0c             	mov    0xc(%ebp),%esi
 875e1fa:	8b 7d 1c             	mov    0x1c(%ebp),%edi
 875e1fd:	8b 55 08             	mov    0x8(%ebp),%edx
 875e200:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875e204:	8b 45 10             	mov    0x10(%ebp),%eax
 875e207:	89 74 24 04          	mov    %esi,0x4(%esp)
 875e20b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 875e20f:	89 14 24             	mov    %edx,(%esp)
 875e212:	89 44 24 08          	mov    %eax,0x8(%esp)
 875e216:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875e219:	e8 72 e2 ff ff       	call   875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>
 875e21e:	8d 04 bd 00 00 00 00 	lea    0x0(,%edi,4),%eax
 875e225:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875e228:	8d 0c 06             	lea    (%esi,%eax,1),%ecx
 875e22b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 875e22e:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875e231:	89 34 24             	mov    %esi,(%esp)
 875e234:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875e238:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875e23b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875e23f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875e242:	89 7c 24 14          	mov    %edi,0x14(%esp)
 875e246:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875e24a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e24d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875e251:	e8 2a f7 ff ff       	call   875d980 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j>
 875e256:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875e259:	03 45 10             	add    0x10(%ebp),%eax
 875e25c:	89 74 24 08          	mov    %esi,0x8(%esp)
 875e260:	89 34 24             	mov    %esi,(%esp)
 875e263:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875e267:	89 44 24 04          	mov    %eax,0x4(%esp)
 875e26b:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875e271:	89 74 24 04          	mov    %esi,0x4(%esp)
 875e275:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875e279:	89 c1                	mov    %eax,%ecx
 875e27b:	8b 45 14             	mov    0x14(%ebp),%eax
 875e27e:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 875e281:	89 44 24 08          	mov    %eax,0x8(%esp)
 875e285:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875e288:	89 04 24             	mov    %eax,(%esp)
 875e28b:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875e291:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875e294:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875e297:	85 c9                	test   %ecx,%ecx
 875e299:	0f 45 75 e4          	cmovne -0x1c(%ebp),%esi
 875e29d:	85 ff                	test   %edi,%edi
 875e29f:	74 14                	je     875e2b5 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j+0xd5>
 875e2a1:	31 c0                	xor    %eax,%eax
 875e2a3:	90                   	nop
 875e2a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875e2a8:	8b 0c 86             	mov    (%esi,%eax,4),%ecx
 875e2ab:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 875e2ae:	83 c0 01             	add    $0x1,%eax
 875e2b1:	39 c7                	cmp    %eax,%edi
 875e2b3:	77 f3                	ja     875e2a8 <_ZN8TaoCrypt16MontgomeryReduceEPjS0_PKjS2_S2_j+0xc8>
 875e2b5:	83 c4 3c             	add    $0x3c,%esp
 875e2b8:	5b                   	pop    %ebx
 875e2b9:	5e                   	pop    %esi
 875e2ba:	5f                   	pop    %edi
 875e2bb:	5d                   	pop    %ebp
 875e2bc:	c3                   	ret
 875e2bd:	90                   	nop
 875e2be:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::MontgomeryReduce @ 0x875e1e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MontgomeryReduce(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int const*, unsigned int) */

void TaoCrypt::MontgomeryReduce
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  RecursiveMultiplyBottom(param_1,param_2,param_3,param_5,param_6);
  puVar1 = param_2 + param_6;
  RecursiveMultiplyTop(param_2,puVar1,param_3,param_1,param_4,param_6);
  iVar2 = (*s_pSub)(param_2,param_3 + param_6,param_2,param_6);
  (*s_pAdd)(puVar1,param_2,param_4,param_6);
  if (iVar2 != 0) {
    param_2 = puVar1;
  }
  if (param_6 != 0) {
    uVar3 = 0;
    do {
      param_1[uVar3] = param_2[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_6);
  }
  return;
}

```

---

## Multiply

```asm
// === 08762100 TaoCrypt::Multiply  [0x08762100-0x876215f] ===
 8762100:	55                   	push   %ebp
 8762101:	89 e5                	mov    %esp,%ebp
 8762103:	83 ec 28             	sub    $0x28,%esp
 8762106:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8762109:	8b 45 08             	mov    0x8(%ebp),%eax
 876210c:	e8 e7 0c fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8762111:	81 c3 87 aa c0 00    	add    $0xc0aa87,%ebx
 8762117:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876211a:	8b 75 10             	mov    0x10(%ebp),%esi
 876211d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8762120:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8762123:	89 04 24             	mov    %eax,(%esp)
 8762126:	89 74 24 08          	mov    %esi,0x8(%esp)
 876212a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 876212e:	e8 1d fd ff ff       	call   8761e50 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_>
 8762133:	83 7f 0c 01          	cmpl   $0x1,0xc(%edi)
 8762137:	0f 95 c2             	setne  %dl
 876213a:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 876213e:	0f 95 c0             	setne  %al
 8762141:	38 c2                	cmp    %al,%dl
 8762143:	74 0b                	je     8762150 <_ZN8TaoCrypt8MultiplyERNS_7IntegerERKS0_S3_+0x50>
 8762145:	8b 45 08             	mov    0x8(%ebp),%eax
 8762148:	89 04 24             	mov    %eax,(%esp)
 876214b:	e8 80 b1 ff ff       	call   875d2d0 <_ZN8TaoCrypt7Integer6NegateEv>
 8762150:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8762153:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8762156:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8762159:	89 ec                	mov    %ebp,%esp
 876215b:	5d                   	pop    %ebp
 876215c:	c3                   	ret
 876215d:	90                   	nop
 876215e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::Multiply @ 0x8762100

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Multiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void TaoCrypt::Multiply(Integer *param_1,Integer *param_2,Integer *param_3)

{
  PositiveMultiply(param_1,param_2,param_3);
  if ((*(int *)(param_2 + 0xc) != 1) != (*(int *)(param_3 + 0xc) != 1)) {
    Integer::Negate(param_1);
  }
  return;
}

```

---

## MultiplyByPower2Mod

```asm
// === 0875cf90 TaoCrypt::MultiplyByPower2Mod  [0x0875cf90-0x875d07f] ===
 875cf90:	55                   	push   %ebp
 875cf91:	89 e5                	mov    %esp,%ebp
 875cf93:	57                   	push   %edi
 875cf94:	56                   	push   %esi
 875cf95:	53                   	push   %ebx
 875cf96:	83 ec 2c             	sub    $0x2c,%esp
 875cf99:	8b 7d 18             	mov    0x18(%ebp),%edi
 875cf9c:	e8 57 5e fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875cfa1:	81 c3 f7 fb c0 00    	add    $0xc0fbf7,%ebx
 875cfa7:	8b 75 08             	mov    0x8(%ebp),%esi
 875cfaa:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875cfad:	85 ff                	test   %edi,%edi
 875cfaf:	74 14                	je     875cfc5 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0x35>
 875cfb1:	8b 7d 18             	mov    0x18(%ebp),%edi
 875cfb4:	31 c0                	xor    %eax,%eax
 875cfb6:	66 90                	xchg   %ax,%ax
 875cfb8:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875cfbb:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875cfbe:	83 c0 01             	add    $0x1,%eax
 875cfc1:	39 c7                	cmp    %eax,%edi
 875cfc3:	77 f3                	ja     875cfb8 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0x28>
 875cfc5:	8b 55 18             	mov    0x18(%ebp),%edx
 875cfc8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875cfcb:	8d 04 95 fc ff ff ff 	lea    -0x4(,%edx,4),%eax
 875cfd2:	8d 14 06             	lea    (%esi,%eax,1),%edx
 875cfd5:	03 45 14             	add    0x14(%ebp),%eax
 875cfd8:	85 c9                	test   %ecx,%ecx
 875cfda:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875cfdd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875cfe0:	74 59                	je     875d03b <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0xab>
 875cfe2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875cfe8:	8b 55 18             	mov    0x18(%ebp),%edx
 875cfeb:	31 ff                	xor    %edi,%edi
 875cfed:	31 c0                	xor    %eax,%eax
 875cfef:	85 d2                	test   %edx,%edx
 875cff1:	74 55                	je     875d048 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0xb8>
 875cff3:	90                   	nop
 875cff4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875cff8:	8b 0c 86             	mov    (%esi,%eax,4),%ecx
 875cffb:	8d 14 09             	lea    (%ecx,%ecx,1),%edx
 875cffe:	09 fa                	or     %edi,%edx
 875d000:	89 cf                	mov    %ecx,%edi
 875d002:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875d005:	c1 ef 1f             	shr    $0x1f,%edi
 875d008:	83 c0 01             	add    $0x1,%eax
 875d00b:	39 45 18             	cmp    %eax,0x18(%ebp)
 875d00e:	77 e8                	ja     875cff8 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0x68>
 875d010:	85 ff                	test   %edi,%edi
 875d012:	74 34                	je     875d048 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0xb8>
 875d014:	8b 45 18             	mov    0x18(%ebp),%eax
 875d017:	8b 55 14             	mov    0x14(%ebp),%edx
 875d01a:	89 74 24 04          	mov    %esi,0x4(%esp)
 875d01e:	89 34 24             	mov    %esi,(%esp)
 875d021:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875d025:	89 54 24 08          	mov    %edx,0x8(%esp)
 875d029:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875d02f:	90                   	nop
 875d030:	83 6d 10 01          	subl   $0x1,0x10(%ebp)
 875d034:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875d037:	85 c9                	test   %ecx,%ecx
 875d039:	75 ad                	jne    875cfe8 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0x58>
 875d03b:	83 c4 2c             	add    $0x2c,%esp
 875d03e:	5b                   	pop    %ebx
 875d03f:	5e                   	pop    %esi
 875d040:	5f                   	pop    %edi
 875d041:	5d                   	pop    %ebp
 875d042:	c3                   	ret
 875d043:	90                   	nop
 875d044:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d048:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875d04b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875d04e:	8b 45 18             	mov    0x18(%ebp),%eax
 875d051:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 875d054:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d058:	85 c0                	test   %eax,%eax
 875d05a:	74 1c                	je     875d078 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0xe8>
 875d05c:	8b 39                	mov    (%ecx),%edi
 875d05e:	83 e8 01             	sub    $0x1,%eax
 875d061:	8b 32                	mov    (%edx),%esi
 875d063:	39 f7                	cmp    %esi,%edi
 875d065:	77 11                	ja     875d078 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0xe8>
 875d067:	83 e9 04             	sub    $0x4,%ecx
 875d06a:	83 ea 04             	sub    $0x4,%edx
 875d06d:	39 f7                	cmp    %esi,%edi
 875d06f:	73 e7                	jae    875d058 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0xc8>
 875d071:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875d074:	eb ba                	jmp    875d030 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0xa0>
 875d076:	66 90                	xchg   %ax,%ax
 875d078:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875d07b:	eb 97                	jmp    875d014 <_ZN8TaoCrypt19MultiplyByPower2ModEPjPKjjS2_j+0x84>
 875d07d:	90                   	nop
 875d07e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::MultiplyByPower2Mod @ 0x875cf90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MultiplyByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int
   const*, unsigned int) */

void TaoCrypt::MultiplyByPower2Mod
               (uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_5 != 0) {
    uVar2 = 0;
    do {
      param_1[uVar2] = param_2[uVar2];
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_5);
  }
  do {
    if (param_3 == 0) {
      return;
    }
    uVar6 = 0;
    uVar3 = 0;
    uVar2 = param_5;
    puVar4 = param_1 + (param_5 - 1);
    puVar5 = param_4 + (param_5 - 1);
    if (param_5 == 0) {
LAB_0875d058:
      do {
        if (uVar2 == 0) goto LAB_0875d014;
        uVar3 = *puVar4;
        uVar6 = *puVar5;
        if (uVar6 < uVar3) goto LAB_0875d014;
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
      } while (uVar6 <= uVar3);
    }
    else {
      do {
        uVar1 = param_1[uVar3];
        param_1[uVar3] = uVar1 * 2 | uVar6;
        uVar6 = -((int)uVar1 >> 0x1f);
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_5);
      if (uVar6 == 0) goto LAB_0875d058;
LAB_0875d014:
      (*s_pSub)(param_1,param_1,param_4,param_5);
    }
    param_3 = param_3 - 1;
  } while( true );
}

```

---

## PositiveAdd

```asm
// === 0875fa30 TaoCrypt::PositiveAdd  [0x0875fa30-0x875fcbf] ===
 875fa30:	55                   	push   %ebp
 875fa31:	89 e5                	mov    %esp,%ebp
 875fa33:	57                   	push   %edi
 875fa34:	56                   	push   %esi
 875fa35:	53                   	push   %ebx
 875fa36:	83 ec 4c             	sub    $0x4c,%esp
 875fa39:	8b 55 0c             	mov    0xc(%ebp),%edx
 875fa3c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875fa3f:	e8 b4 33 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875fa44:	81 c3 54 d1 c0 00    	add    $0xc0d154,%ebx
 875fa4a:	8b 02                	mov    (%edx),%eax
 875fa4c:	8b 11                	mov    (%ecx),%edx
 875fa4e:	39 d0                	cmp    %edx,%eax
 875fa50:	0f 84 32 02 00 00    	je     875fc88 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x258>
 875fa56:	0f 86 f4 00 00 00    	jbe    875fb50 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x120>
 875fa5c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875fa5f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875fa63:	8b 75 0c             	mov    0xc(%ebp),%esi
 875fa66:	8b 55 08             	mov    0x8(%ebp),%edx
 875fa69:	8b 41 04             	mov    0x4(%ecx),%eax
 875fa6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 875fa70:	8b 46 04             	mov    0x4(%esi),%eax
 875fa73:	89 44 24 04          	mov    %eax,0x4(%esp)
 875fa77:	8b 42 04             	mov    0x4(%edx),%eax
 875fa7a:	89 04 24             	mov    %eax,(%esp)
 875fa7d:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875fa83:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875fa86:	8b 36                	mov    (%esi),%esi
 875fa88:	8b 09                	mov    (%ecx),%ecx
 875fa8a:	89 75 e0             	mov    %esi,-0x20(%ebp)
 875fa8d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875fa90:	8b 45 0c             	mov    0xc(%ebp),%eax
 875fa93:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 875fa96:	89 ca                	mov    %ecx,%edx
 875fa98:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875fa9b:	c1 e2 02             	shl    $0x2,%edx
 875fa9e:	89 d7                	mov    %edx,%edi
 875faa0:	03 78 04             	add    0x4(%eax),%edi
 875faa3:	31 c0                	xor    %eax,%eax
 875faa5:	03 51 04             	add    0x4(%ecx),%edx
 875faa8:	31 c9                	xor    %ecx,%ecx
 875faaa:	2b 75 cc             	sub    -0x34(%ebp),%esi
 875faad:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 875fab0:	74 28                	je     875fada <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xaa>
 875fab2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875fab8:	8b 0c 87             	mov    (%edi,%eax,4),%ecx
 875fabb:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 875fabe:	83 c0 01             	add    $0x1,%eax
 875fac1:	39 c6                	cmp    %eax,%esi
 875fac3:	77 f3                	ja     875fab8 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x88>
 875fac5:	8b 75 10             	mov    0x10(%ebp),%esi
 875fac8:	8b 45 0c             	mov    0xc(%ebp),%eax
 875facb:	8b 16                	mov    (%esi),%edx
 875facd:	8b 08                	mov    (%eax),%ecx
 875facf:	8b 75 08             	mov    0x8(%ebp),%esi
 875fad2:	29 d1                	sub    %edx,%ecx
 875fad4:	c1 e2 02             	shl    $0x2,%edx
 875fad7:	03 56 04             	add    0x4(%esi),%edx
 875fada:	8b 02                	mov    (%edx),%eax
 875fadc:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875fadf:	8d 34 30             	lea    (%eax,%esi,1),%esi
 875fae2:	39 f0                	cmp    %esi,%eax
 875fae4:	89 32                	mov    %esi,(%edx)
 875fae6:	76 55                	jbe    875fb3d <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x10d>
 875fae8:	83 f9 01             	cmp    $0x1,%ecx
 875faeb:	76 2f                	jbe    875fb1c <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xec>
 875faed:	8b 72 04             	mov    0x4(%edx),%esi
 875faf0:	b8 01 00 00 00       	mov    $0x1,%eax
 875faf5:	83 c6 01             	add    $0x1,%esi
 875faf8:	85 f6                	test   %esi,%esi
 875fafa:	89 72 04             	mov    %esi,0x4(%edx)
 875fafd:	75 3e                	jne    875fb3d <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x10d>
 875faff:	83 c0 01             	add    $0x1,%eax
 875fb02:	39 c8                	cmp    %ecx,%eax
 875fb04:	73 16                	jae    875fb1c <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xec>
 875fb06:	66 90                	xchg   %ax,%ax
 875fb08:	8b 34 82             	mov    (%edx,%eax,4),%esi
 875fb0b:	83 c6 01             	add    $0x1,%esi
 875fb0e:	85 f6                	test   %esi,%esi
 875fb10:	89 34 82             	mov    %esi,(%edx,%eax,4)
 875fb13:	75 28                	jne    875fb3d <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x10d>
 875fb15:	83 c0 01             	add    $0x1,%eax
 875fb18:	39 c8                	cmp    %ecx,%eax
 875fb1a:	72 ec                	jb     875fb08 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xd8>
 875fb1c:	8b 55 08             	mov    0x8(%ebp),%edx
 875fb1f:	8b 02                	mov    (%edx),%eax
 875fb21:	8d 34 00             	lea    (%eax,%eax,1),%esi
 875fb24:	39 c6                	cmp    %eax,%esi
 875fb26:	0f 87 04 01 00 00    	ja     875fc30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x200>
 875fb2c:	8b 55 08             	mov    0x8(%ebp),%edx
 875fb2f:	89 c6                	mov    %eax,%esi
 875fb31:	8b 42 04             	mov    0x4(%edx),%eax
 875fb34:	d1 ee                	shr    $1,%esi
 875fb36:	c7 04 b0 01 00 00 00 	movl   $0x1,(%eax,%esi,4)
 875fb3d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875fb40:	c7 41 0c 00 00 00 00 	movl   $0x0,0xc(%ecx)
 875fb47:	83 c4 4c             	add    $0x4c,%esp
 875fb4a:	5b                   	pop    %ebx
 875fb4b:	5e                   	pop    %esi
 875fb4c:	5f                   	pop    %edi
 875fb4d:	5d                   	pop    %ebp
 875fb4e:	c3                   	ret
 875fb4f:	90                   	nop
 875fb50:	8b 55 10             	mov    0x10(%ebp),%edx
 875fb53:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875fb57:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875fb5a:	8b 75 08             	mov    0x8(%ebp),%esi
 875fb5d:	8b 42 04             	mov    0x4(%edx),%eax
 875fb60:	89 44 24 08          	mov    %eax,0x8(%esp)
 875fb64:	8b 41 04             	mov    0x4(%ecx),%eax
 875fb67:	89 44 24 04          	mov    %eax,0x4(%esp)
 875fb6b:	8b 46 04             	mov    0x4(%esi),%eax
 875fb6e:	89 04 24             	mov    %eax,(%esp)
 875fb71:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875fb77:	8b 55 10             	mov    0x10(%ebp),%edx
 875fb7a:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875fb7d:	8b 12                	mov    (%edx),%edx
 875fb7f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875fb82:	8b 45 0c             	mov    0xc(%ebp),%eax
 875fb85:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875fb88:	8b 00                	mov    (%eax),%eax
 875fb8a:	89 c2                	mov    %eax,%edx
 875fb8c:	c1 e2 02             	shl    $0x2,%edx
 875fb8f:	89 d7                	mov    %edx,%edi
 875fb91:	03 56 04             	add    0x4(%esi),%edx
 875fb94:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875fb97:	89 45 d0             	mov    %eax,-0x30(%ebp)
 875fb9a:	31 c0                	xor    %eax,%eax
 875fb9c:	03 79 04             	add    0x4(%ecx),%edi
 875fb9f:	31 c9                	xor    %ecx,%ecx
 875fba1:	2b 75 d0             	sub    -0x30(%ebp),%esi
 875fba4:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 875fba7:	74 29                	je     875fbd2 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x1a2>
 875fba9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875fbb0:	8b 0c 87             	mov    (%edi,%eax,4),%ecx
 875fbb3:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 875fbb6:	83 c0 01             	add    $0x1,%eax
 875fbb9:	39 c6                	cmp    %eax,%esi
 875fbbb:	77 f3                	ja     875fbb0 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x180>
 875fbbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 875fbc0:	8b 75 10             	mov    0x10(%ebp),%esi
 875fbc3:	8b 10                	mov    (%eax),%edx
 875fbc5:	8b 0e                	mov    (%esi),%ecx
 875fbc7:	8b 45 08             	mov    0x8(%ebp),%eax
 875fbca:	29 d1                	sub    %edx,%ecx
 875fbcc:	c1 e2 02             	shl    $0x2,%edx
 875fbcf:	03 50 04             	add    0x4(%eax),%edx
 875fbd2:	8b 02                	mov    (%edx),%eax
 875fbd4:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875fbd7:	8d 34 30             	lea    (%eax,%esi,1),%esi
 875fbda:	39 f0                	cmp    %esi,%eax
 875fbdc:	89 32                	mov    %esi,(%edx)
 875fbde:	0f 86 59 ff ff ff    	jbe    875fb3d <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x10d>
 875fbe4:	83 f9 01             	cmp    $0x1,%ecx
 875fbe7:	0f 86 2f ff ff ff    	jbe    875fb1c <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xec>
 875fbed:	8b 72 04             	mov    0x4(%edx),%esi
 875fbf0:	b8 01 00 00 00       	mov    $0x1,%eax
 875fbf5:	83 c6 01             	add    $0x1,%esi
 875fbf8:	85 f6                	test   %esi,%esi
 875fbfa:	89 72 04             	mov    %esi,0x4(%edx)
 875fbfd:	0f 85 3a ff ff ff    	jne    875fb3d <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x10d>
 875fc03:	83 c0 01             	add    $0x1,%eax
 875fc06:	39 c8                	cmp    %ecx,%eax
 875fc08:	0f 83 0e ff ff ff    	jae    875fb1c <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xec>
 875fc0e:	66 90                	xchg   %ax,%ax
 875fc10:	8b 34 82             	mov    (%edx,%eax,4),%esi
 875fc13:	83 c6 01             	add    $0x1,%esi
 875fc16:	85 f6                	test   %esi,%esi
 875fc18:	89 34 82             	mov    %esi,(%edx,%eax,4)
 875fc1b:	0f 85 1c ff ff ff    	jne    875fb3d <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x10d>
 875fc21:	83 c0 01             	add    $0x1,%eax
 875fc24:	39 c8                	cmp    %ecx,%eax
 875fc26:	72 e8                	jb     875fc10 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x1e0>
 875fc28:	e9 ef fe ff ff       	jmp    875fb1c <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xec>
 875fc2d:	8d 76 00             	lea    0x0(%esi),%esi
 875fc30:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 875fc37:	00 
 875fc38:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875fc3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 875fc40:	8b 42 04             	mov    0x4(%edx),%eax
 875fc43:	89 44 24 04          	mov    %eax,0x4(%esp)
 875fc47:	89 d0                	mov    %edx,%eax
 875fc49:	83 c0 08             	add    $0x8,%eax
 875fc4c:	89 04 24             	mov    %eax,(%esp)
 875fc4f:	e8 6c 40 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 875fc54:	8b 55 08             	mov    0x8(%ebp),%edx
 875fc57:	89 f1                	mov    %esi,%ecx
 875fc59:	89 42 04             	mov    %eax,0x4(%edx)
 875fc5c:	8b 12                	mov    (%edx),%edx
 875fc5e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875fc65:	00 
 875fc66:	29 d1                	sub    %edx,%ecx
 875fc68:	8d 04 90             	lea    (%eax,%edx,4),%eax
 875fc6b:	c1 e1 02             	shl    $0x2,%ecx
 875fc6e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875fc72:	89 04 24             	mov    %eax,(%esp)
 875fc75:	e8 46 e0 91 ff       	call   807dcc0 <memset@plt>
 875fc7a:	8b 45 08             	mov    0x8(%ebp),%eax
 875fc7d:	89 30                	mov    %esi,(%eax)
 875fc7f:	89 c2                	mov    %eax,%edx
 875fc81:	e9 ab fe ff ff       	jmp    875fb31 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x101>
 875fc86:	66 90                	xchg   %ax,%ax
 875fc88:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875fc8c:	8b 75 0c             	mov    0xc(%ebp),%esi
 875fc8f:	8b 41 04             	mov    0x4(%ecx),%eax
 875fc92:	8b 55 08             	mov    0x8(%ebp),%edx
 875fc95:	89 44 24 08          	mov    %eax,0x8(%esp)
 875fc99:	8b 46 04             	mov    0x4(%esi),%eax
 875fc9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 875fca0:	8b 42 04             	mov    0x4(%edx),%eax
 875fca3:	89 04 24             	mov    %eax,(%esp)
 875fca6:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875fcac:	85 c0                	test   %eax,%eax
 875fcae:	0f 85 68 fe ff ff    	jne    875fb1c <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0xec>
 875fcb4:	e9 84 fe ff ff       	jmp    875fb3d <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_+0x10d>
 875fcb9:	90                   	nop
 875fcba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::PositiveAdd @ 0x875fa30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void TaoCrypt::PositiveAdd(Integer *param_1,Integer *param_2,Integer *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar5 = *(uint *)param_2;
  uVar7 = *(uint *)param_3;
  if (uVar5 == uVar7) {
    iVar6 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_3 + 4),uVar5);
    if (iVar6 == 0) goto LAB_0875fb3d;
  }
  else if (uVar7 < uVar5) {
    iVar4 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_3 + 4),uVar7);
    iVar6 = *(int *)param_2;
    iVar1 = *(int *)param_3;
    iVar2 = *(int *)(param_2 + 4);
    uVar5 = 0;
    puVar8 = (uint *)(iVar1 * 4 + *(int *)(param_1 + 4));
    uVar7 = 0;
    if (iVar6 != iVar1) {
      do {
        puVar8[uVar5] = *(uint *)(iVar1 * 4 + iVar2 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(iVar6 - iVar1));
      uVar7 = *(int *)param_2 - *(int *)param_3;
      puVar8 = (uint *)(*(int *)param_3 * 4 + *(int *)(param_1 + 4));
    }
    uVar3 = *puVar8;
    uVar5 = uVar3 + iVar4;
    *puVar8 = uVar5;
    if (uVar3 <= uVar5) goto LAB_0875fb3d;
    if (1 < uVar7) {
      uVar5 = puVar8[1];
      puVar8[1] = uVar5 + 1;
      if (uVar5 + 1 != 0) goto LAB_0875fb3d;
      uVar5 = 2;
      if (2 < uVar7) {
        do {
          uVar3 = puVar8[uVar5];
          puVar8[uVar5] = uVar3 + 1;
          if (uVar3 + 1 != 0) goto LAB_0875fb3d;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
    }
  }
  else {
    iVar4 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                      *(undefined4 *)(param_3 + 4),uVar5);
    iVar6 = *(int *)param_3;
    iVar1 = *(int *)param_2;
    puVar8 = (uint *)(iVar1 * 4 + *(int *)(param_1 + 4));
    uVar5 = 0;
    iVar2 = *(int *)(param_3 + 4);
    uVar7 = 0;
    if (iVar6 != iVar1) {
      do {
        puVar8[uVar5] = *(uint *)(iVar1 * 4 + iVar2 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(iVar6 - iVar1));
      uVar7 = *(int *)param_3 - *(int *)param_2;
      puVar8 = (uint *)(*(int *)param_2 * 4 + *(int *)(param_1 + 4));
    }
    uVar3 = *puVar8;
    uVar5 = uVar3 + iVar4;
    *puVar8 = uVar5;
    if (uVar3 <= uVar5) goto LAB_0875fb3d;
    if (1 < uVar7) {
      uVar5 = puVar8[1];
      puVar8[1] = uVar5 + 1;
      if (uVar5 + 1 != 0) goto LAB_0875fb3d;
      uVar5 = 2;
      if (2 < uVar7) {
        do {
          uVar3 = puVar8[uVar5];
          puVar8[uVar5] = uVar3 + 1;
          if (uVar3 + 1 != 0) goto LAB_0875fb3d;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
    }
  }
  uVar5 = *(uint *)param_1;
  uVar7 = uVar5 * 2;
  if (uVar5 < uVar7) {
    iVar6 = AllocatorWithCleanup<unsigned_int>::reallocate
                      ((AllocatorWithCleanup<unsigned_int> *)(param_1 + 8),*(uint **)(param_1 + 4),
                       uVar5,uVar7,true);
    *(int *)(param_1 + 4) = iVar6;
    memset((void *)(iVar6 + *(int *)param_1 * 4),0,(uVar7 - *(int *)param_1) * 4);
    *(uint *)param_1 = uVar7;
    uVar5 = uVar7;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + (uVar5 >> 1) * 4) = 1;
LAB_0875fb3d:
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

```

---

## PositiveDivide

```asm
// === 087621b0 TaoCrypt::PositiveDivide  [0x087621b0-0x876251f] ===
 87621b0:	55                   	push   %ebp
 87621b1:	89 e5                	mov    %esp,%ebp
 87621b3:	57                   	push   %edi
 87621b4:	56                   	push   %esi
 87621b5:	53                   	push   %ebx
 87621b6:	e8 3d 0c fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87621bb:	81 c3 dd a9 c0 00    	add    $0xc0a9dd,%ebx
 87621c1:	83 ec 6c             	sub    $0x6c,%esp
 87621c4:	8b 45 10             	mov    0x10(%ebp),%eax
 87621c7:	8b 75 08             	mov    0x8(%ebp),%esi
 87621ca:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87621cd:	89 04 24             	mov    %eax,(%esp)
 87621d0:	e8 5b af ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 87621d5:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87621d8:	89 0c 24             	mov    %ecx,(%esp)
 87621db:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87621de:	e8 4d af ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 87621e3:	89 c1                	mov    %eax,%ecx
 87621e5:	8b 45 14             	mov    0x14(%ebp),%eax
 87621e8:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87621eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 87621ef:	8b 45 10             	mov    0x10(%ebp),%eax
 87621f2:	89 04 24             	mov    %eax,(%esp)
 87621f5:	e8 76 af ff ff       	call   875d170 <_ZNK8TaoCrypt7Integer15PositiveCompareERKS0_>
 87621fa:	8b 55 c8             	mov    -0x38(%ebp),%edx
 87621fd:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8762200:	83 f8 ff             	cmp    $0xffffffff,%eax
 8762203:	0f 84 df 02 00 00    	je     87624e8 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x338>
 8762209:	89 d0                	mov    %edx,%eax
 876220b:	83 e0 01             	and    $0x1,%eax
 876220e:	01 d0                	add    %edx,%eax
 8762210:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8762213:	89 c8                	mov    %ecx,%eax
 8762215:	83 e0 01             	and    $0x1,%eax
 8762218:	01 c8                	add    %ecx,%eax
 876221a:	83 f8 08             	cmp    $0x8,%eax
 876221d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8762220:	0f 86 5a 02 00 00    	jbe    8762480 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x2d0>
 8762226:	83 7d d4 10          	cmpl   $0x10,-0x2c(%ebp)
 876222a:	ba 10 00 00 00       	mov    $0x10,%edx
 876222f:	c7 45 b4 40 00 00 00 	movl   $0x40,-0x4c(%ebp)
 8762236:	76 28                	jbe    8762260 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0xb0>
 8762238:	83 7d d4 20          	cmpl   $0x20,-0x2c(%ebp)
 876223c:	b2 20                	mov    $0x20,%dl
 876223e:	c7 45 b4 80 00 00 00 	movl   $0x80,-0x4c(%ebp)
 8762245:	76 19                	jbe    8762260 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0xb0>
 8762247:	83 7d d4 40          	cmpl   $0x40,-0x2c(%ebp)
 876224b:	b2 40                	mov    $0x40,%dl
 876224d:	c7 45 b4 00 01 00 00 	movl   $0x100,-0x4c(%ebp)
 8762254:	0f 87 3e 02 00 00    	ja     8762498 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x2e8>
 876225a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8762260:	8b 0e                	mov    (%esi),%ecx
 8762262:	8b 46 04             	mov    0x4(%esi),%eax
 8762265:	39 ca                	cmp    %ecx,%edx
 8762267:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 876226a:	74 23                	je     876228f <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0xdf>
 876226c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762270:	8d 46 08             	lea    0x8(%esi),%eax
 8762273:	89 04 24             	mov    %eax,(%esp)
 8762276:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8762279:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 876227d:	e8 fe 18 00 00       	call   8763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>
 8762282:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8762285:	31 c0                	xor    %eax,%eax
 8762287:	85 d2                	test   %edx,%edx
 8762289:	0f 85 b9 01 00 00    	jne    8762448 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x298>
 876228f:	89 16                	mov    %edx,(%esi)
 8762291:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8762294:	89 46 04             	mov    %eax,0x4(%esi)
 8762297:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876229e:	00 
 876229f:	89 04 24             	mov    %eax,(%esp)
 87622a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 87622a6:	e8 15 ba 91 ff       	call   807dcc0 <memset@plt>
 87622ab:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87622ae:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 87622b5:	83 c0 02             	add    $0x2,%eax
 87622b8:	2b 45 d4             	sub    -0x2c(%ebp),%eax
 87622bb:	83 f8 08             	cmp    $0x8,%eax
 87622be:	0f 86 a4 01 00 00    	jbe    8762468 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x2b8>
 87622c4:	83 f8 10             	cmp    $0x10,%eax
 87622c7:	ba 10 00 00 00       	mov    $0x10,%edx
 87622cc:	c7 45 d0 40 00 00 00 	movl   $0x40,-0x30(%ebp)
 87622d3:	76 23                	jbe    87622f8 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x148>
 87622d5:	83 f8 20             	cmp    $0x20,%eax
 87622d8:	b2 20                	mov    $0x20,%dl
 87622da:	c7 45 d0 80 00 00 00 	movl   $0x80,-0x30(%ebp)
 87622e1:	76 15                	jbe    87622f8 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x148>
 87622e3:	83 f8 40             	cmp    $0x40,%eax
 87622e6:	b2 40                	mov    $0x40,%dl
 87622e8:	c7 45 d0 00 01 00 00 	movl   $0x100,-0x30(%ebp)
 87622ef:	0f 87 cb 01 00 00    	ja     87624c0 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x310>
 87622f5:	8d 76 00             	lea    0x0(%esi),%esi
 87622f8:	8b 0f                	mov    (%edi),%ecx
 87622fa:	8b 47 04             	mov    0x4(%edi),%eax
 87622fd:	39 ca                	cmp    %ecx,%edx
 87622ff:	74 23                	je     8762324 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x174>
 8762301:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762305:	8d 47 08             	lea    0x8(%edi),%eax
 8762308:	89 04 24             	mov    %eax,(%esp)
 876230b:	89 55 c8             	mov    %edx,-0x38(%ebp)
 876230e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8762312:	e8 69 18 00 00       	call   8763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>
 8762317:	8b 55 c8             	mov    -0x38(%ebp),%edx
 876231a:	31 c0                	xor    %eax,%eax
 876231c:	85 d2                	test   %edx,%edx
 876231e:	0f 85 04 01 00 00    	jne    8762428 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x278>
 8762324:	89 17                	mov    %edx,(%edi)
 8762326:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8762329:	89 47 04             	mov    %eax,0x4(%edi)
 876232c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762333:	00 
 8762334:	89 04 24             	mov    %eax,(%esp)
 8762337:	89 54 24 08          	mov    %edx,0x8(%esp)
 876233b:	e8 80 b9 91 ff       	call   807dcc0 <memset@plt>
 8762340:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8762343:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8762346:	c7 47 0c 00 00 00 00 	movl   $0x0,0xc(%edi)
 876234d:	8d 54 48 04          	lea    0x4(%eax,%ecx,2),%edx
 8762351:	31 c0                	xor    %eax,%eax
 8762353:	85 d2                	test   %edx,%edx
 8762355:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8762358:	0f 85 b2 00 00 00    	jne    8762410 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x260>
 876235e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8762361:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762365:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8762368:	89 54 24 0c          	mov    %edx,0xc(%esp)
 876236c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8762370:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8762373:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 876237a:	00 
 876237b:	89 04 24             	mov    %eax,(%esp)
 876237e:	e8 3d 19 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 8762383:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8762386:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876238d:	00 
 876238e:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8762391:	c1 e2 02             	shl    $0x2,%edx
 8762394:	89 54 24 08          	mov    %edx,0x8(%esp)
 8762398:	89 45 e0             	mov    %eax,-0x20(%ebp)
 876239b:	89 04 24             	mov    %eax,(%esp)
 876239e:	e8 1d b9 91 ff       	call   807dcc0 <memset@plt>
 87623a3:	8b 4d 14             	mov    0x14(%ebp),%ecx
 87623a6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87623a9:	89 54 24 18          	mov    %edx,0x18(%esp)
 87623ad:	8b 41 04             	mov    0x4(%ecx),%eax
 87623b0:	8b 55 10             	mov    0x10(%ebp),%edx
 87623b3:	89 44 24 14          	mov    %eax,0x14(%esp)
 87623b7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87623ba:	89 44 24 10          	mov    %eax,0x10(%esp)
 87623be:	8b 42 04             	mov    0x4(%edx),%eax
 87623c1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87623c5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87623c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 87623cc:	8b 47 04             	mov    0x4(%edi),%eax
 87623cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 87623d3:	8b 46 04             	mov    0x4(%esi),%eax
 87623d6:	89 04 24             	mov    %eax,(%esp)
 87623d9:	e8 a2 c1 ff ff       	call   875e580 <_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j>
 87623de:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87623e1:	8b 75 e0             	mov    -0x20(%ebp),%esi
 87623e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87623eb:	00 
 87623ec:	c1 e0 02             	shl    $0x2,%eax
 87623ef:	89 34 24             	mov    %esi,(%esp)
 87623f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87623f6:	e8 c5 b8 91 ff       	call   807dcc0 <memset@plt>
 87623fb:	89 34 24             	mov    %esi,(%esp)
 87623fe:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762403:	e8 18 53 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762408:	83 c4 6c             	add    $0x6c,%esp
 876240b:	5b                   	pop    %ebx
 876240c:	5e                   	pop    %esi
 876240d:	5f                   	pop    %edi
 876240e:	5d                   	pop    %ebp
 876240f:	c3                   	ret
 8762410:	c1 e2 02             	shl    $0x2,%edx
 8762413:	89 14 24             	mov    %edx,(%esp)
 8762416:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876241b:	e8 70 53 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8762420:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8762423:	e9 36 ff ff ff       	jmp    876235e <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x1ae>
 8762428:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 876242b:	89 55 c8             	mov    %edx,-0x38(%ebp)
 876242e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762433:	89 0c 24             	mov    %ecx,(%esp)
 8762436:	e8 55 53 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 876243b:	8b 55 c8             	mov    -0x38(%ebp),%edx
 876243e:	e9 e1 fe ff ff       	jmp    8762324 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x174>
 8762443:	90                   	nop
 8762444:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8762448:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876244b:	89 55 c8             	mov    %edx,-0x38(%ebp)
 876244e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762453:	89 04 24             	mov    %eax,(%esp)
 8762456:	e8 35 53 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 876245b:	8b 55 c8             	mov    -0x38(%ebp),%edx
 876245e:	e9 2c fe ff ff       	jmp    876228f <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0xdf>
 8762463:	90                   	nop
 8762464:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8762468:	8b 94 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edx
 876246f:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 8762476:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8762479:	e9 7a fe ff ff       	jmp    87622f8 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x148>
 876247e:	66 90                	xchg   %ax,%ax
 8762480:	8b 94 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%edx
 8762487:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 876248e:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8762491:	e9 ca fd ff ff       	jmp    8762260 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0xb0>
 8762496:	66 90                	xchg   %ax,%ax
 8762498:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 876249b:	83 e8 01             	sub    $0x1,%eax
 876249e:	89 04 24             	mov    %eax,(%esp)
 87624a1:	e8 9a 50 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 87624a6:	ba 01 00 00 00       	mov    $0x1,%edx
 87624ab:	89 c1                	mov    %eax,%ecx
 87624ad:	d3 e2                	shl    %cl,%edx
 87624af:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 87624b6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 87624b9:	e9 a2 fd ff ff       	jmp    8762260 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0xb0>
 87624be:	66 90                	xchg   %ax,%ax
 87624c0:	83 e8 01             	sub    $0x1,%eax
 87624c3:	89 04 24             	mov    %eax,(%esp)
 87624c6:	e8 75 50 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 87624cb:	ba 01 00 00 00       	mov    $0x1,%edx
 87624d0:	89 c1                	mov    %eax,%ecx
 87624d2:	d3 e2                	shl    %cl,%edx
 87624d4:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 87624db:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87624de:	e9 15 fe ff ff       	jmp    87622f8 <_ZN8TaoCrypt14PositiveDivideERNS_7IntegerES1_RKS0_S3_+0x148>
 87624e3:	90                   	nop
 87624e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87624e8:	8b 55 10             	mov    0x10(%ebp),%edx
 87624eb:	89 34 24             	mov    %esi,(%esp)
 87624ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 87624f2:	e8 69 df ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87624f7:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 87624fe:	e8 5d d3 ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 8762503:	89 3c 24             	mov    %edi,(%esp)
 8762506:	89 44 24 04          	mov    %eax,0x4(%esp)
 876250a:	e8 51 df ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 876250f:	83 c4 6c             	add    $0x6c,%esp
 8762512:	5b                   	pop    %ebx
 8762513:	5e                   	pop    %esi
 8762514:	5f                   	pop    %edi
 8762515:	5d                   	pop    %ebp
 8762516:	c3                   	ret
 8762517:	90                   	nop
 8762518:	90                   	nop
 8762519:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::PositiveDivide @ 0x87621b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveDivide(TaoCrypt::Integer&, TaoCrypt::Integer&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&) */

void TaoCrypt::PositiveDivide(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint *puVar6;
  Integer *pIVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  size_t local_50;
  size_t local_34;
  AllocatorWithCleanup<unsigned_int> local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x87621bb;
  uVar2 = Integer::WordCount(param_3);
  uVar3 = Integer::WordCount(param_4);
  iVar4 = Integer::PositiveCompare(param_3,param_4);
  if (iVar4 == -1) {
    Integer::operator=(param_1,param_3);
    *(undefined4 *)(param_1 + 0xc) = 0;
    pIVar7 = (Integer *)Integer::Zero();
    Integer::operator=(param_2,pIVar7);
    return;
  }
  uVar2 = (uVar2 & 1) + uVar2;
  uVar3 = (uVar3 & 1) + uVar3;
  if (uVar3 < 9) {
    uVar8 = (&RoundupSizeTable)[uVar3];
    local_50 = uVar8 * 4;
  }
  else {
    uVar8 = 0x10;
    local_50 = 0x40;
    if (0x10 < uVar3) {
      uVar8 = 0x20;
      local_50 = 0x80;
      if (0x20 < uVar3) {
        uVar8 = 0x40;
        local_50 = 0x100;
        if (0x40 < uVar3) {
          bVar1 = BitPrecision(uVar3 - 1);
          uVar8 = 1 << (bVar1 & 0x1f);
          local_50 = uVar8 * 4;
        }
      }
    }
  }
  pvVar5 = *(void **)(param_1 + 4);
  if (uVar8 != *(uint *)param_1) {
    pvVar10 = pvVar5;
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(param_1 + 8),pvVar5,*(uint *)param_1);
    pvVar5 = (void *)0x0;
    if (uVar8 != 0) {
      pvVar5 = operator_new__(local_50,(uint)pvVar10 & 0xffffff00);
    }
  }
  *(uint *)param_1 = uVar8;
  *(void **)(param_1 + 4) = pvVar5;
  memset(pvVar5,0,local_50);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar8 = (uVar2 + 2) - uVar3;
  if (uVar8 < 9) {
    uVar9 = (&RoundupSizeTable)[uVar8];
    local_34 = uVar9 * 4;
  }
  else {
    uVar9 = 0x10;
    local_34 = 0x40;
    if (0x10 < uVar8) {
      uVar9 = 0x20;
      local_34 = 0x80;
      if (0x20 < uVar8) {
        uVar9 = 0x40;
        local_34 = 0x100;
        if (0x40 < uVar8) {
          bVar1 = BitPrecision(uVar8 - 1);
          uVar9 = 1 << (bVar1 & 0x1f);
          local_34 = uVar9 * 4;
        }
      }
    }
  }
  pvVar5 = *(void **)(param_2 + 4);
  if (uVar9 != *(uint *)param_2) {
    pvVar10 = pvVar5;
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(param_2 + 8),pvVar5,*(uint *)param_2);
    pvVar5 = (void *)0x0;
    if (uVar9 != 0) {
      pvVar5 = operator_new__(local_34,(uint)pvVar10 & 0xffffff00);
    }
  }
  *(uint *)param_2 = uVar9;
  *(void **)(param_2 + 4) = pvVar5;
  uVar9 = 0;
  memset(pvVar5,0,local_34);
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar8 = uVar2 + 4 + uVar3 * 2;
  puVar6 = (uint *)0x0;
  if (uVar8 != 0) {
    puVar6 = operator_new__(uVar8 * 4,uVar9 & 0xffffff00);
  }
  puVar6 = (uint *)AllocatorWithCleanup<unsigned_int>::reallocate(local_20,puVar6,uVar8,uVar8,false)
  ;
  memset(puVar6,0,uVar8 * 4);
  Divide(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),puVar6,*(uint **)(param_3 + 4),uVar2,
         *(uint **)(param_4 + 4),uVar3);
  uVar2 = 0;
  memset(puVar6,0,uVar8 * 4);
  operator_delete__(puVar6,uVar2 & 0xffffff00);
  return;
}

```

---

## PositiveMultiply

```asm
// === 08761e50 TaoCrypt::PositiveMultiply  [0x08761e50-0x87620ff] ===
 8761e50:	55                   	push   %ebp
 8761e51:	89 e5                	mov    %esp,%ebp
 8761e53:	57                   	push   %edi
 8761e54:	56                   	push   %esi
 8761e55:	53                   	push   %ebx
 8761e56:	e8 9d 0f fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8761e5b:	81 c3 3d ad c0 00    	add    $0xc0ad3d,%ebx
 8761e61:	83 ec 6c             	sub    $0x6c,%esp
 8761e64:	8b 45 0c             	mov    0xc(%ebp),%eax
 8761e67:	8b 75 08             	mov    0x8(%ebp),%esi
 8761e6a:	89 04 24             	mov    %eax,(%esp)
 8761e6d:	e8 be b2 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 8761e72:	83 f8 08             	cmp    $0x8,%eax
 8761e75:	0f 86 0d 02 00 00    	jbe    8762088 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x238>
 8761e7b:	83 f8 10             	cmp    $0x10,%eax
 8761e7e:	c7 45 d0 10 00 00 00 	movl   $0x10,-0x30(%ebp)
 8761e85:	76 21                	jbe    8761ea8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x58>
 8761e87:	83 f8 20             	cmp    $0x20,%eax
 8761e8a:	c7 45 d0 20 00 00 00 	movl   $0x20,-0x30(%ebp)
 8761e91:	76 15                	jbe    8761ea8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x58>
 8761e93:	83 f8 40             	cmp    $0x40,%eax
 8761e96:	c7 45 d0 40 00 00 00 	movl   $0x40,-0x30(%ebp)
 8761e9d:	0f 87 f5 01 00 00    	ja     8762098 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x248>
 8761ea3:	90                   	nop
 8761ea4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761ea8:	8b 45 10             	mov    0x10(%ebp),%eax
 8761eab:	89 04 24             	mov    %eax,(%esp)
 8761eae:	e8 7d b2 ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 8761eb3:	83 f8 08             	cmp    $0x8,%eax
 8761eb6:	0f 86 bc 01 00 00    	jbe    8762078 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x228>
 8761ebc:	83 f8 10             	cmp    $0x10,%eax
 8761ebf:	c7 45 d4 10 00 00 00 	movl   $0x10,-0x2c(%ebp)
 8761ec6:	76 20                	jbe    8761ee8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x98>
 8761ec8:	83 f8 20             	cmp    $0x20,%eax
 8761ecb:	c7 45 d4 20 00 00 00 	movl   $0x20,-0x2c(%ebp)
 8761ed2:	76 14                	jbe    8761ee8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x98>
 8761ed4:	83 f8 40             	cmp    $0x40,%eax
 8761ed7:	c7 45 d4 40 00 00 00 	movl   $0x40,-0x2c(%ebp)
 8761ede:	0f 87 d4 01 00 00    	ja     87620b8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x268>
 8761ee4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8761ee8:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8761eeb:	03 7d d0             	add    -0x30(%ebp),%edi
 8761eee:	83 ff 08             	cmp    $0x8,%edi
 8761ef1:	0f 86 69 01 00 00    	jbe    8762060 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x210>
 8761ef7:	83 ff 10             	cmp    $0x10,%edi
 8761efa:	ba 10 00 00 00       	mov    $0x10,%edx
 8761eff:	c7 45 b4 40 00 00 00 	movl   $0x40,-0x4c(%ebp)
 8761f06:	76 20                	jbe    8761f28 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0xd8>
 8761f08:	83 ff 20             	cmp    $0x20,%edi
 8761f0b:	b2 20                	mov    $0x20,%dl
 8761f0d:	c7 45 b4 80 00 00 00 	movl   $0x80,-0x4c(%ebp)
 8761f14:	76 12                	jbe    8761f28 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0xd8>
 8761f16:	83 ff 40             	cmp    $0x40,%edi
 8761f19:	b2 40                	mov    $0x40,%dl
 8761f1b:	c7 45 b4 00 01 00 00 	movl   $0x100,-0x4c(%ebp)
 8761f22:	0f 87 b0 01 00 00    	ja     87620d8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x288>
 8761f28:	8b 0e                	mov    (%esi),%ecx
 8761f2a:	8b 46 04             	mov    0x4(%esi),%eax
 8761f2d:	39 ca                	cmp    %ecx,%edx
 8761f2f:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 8761f32:	74 23                	je     8761f57 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x107>
 8761f34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8761f38:	8d 46 08             	lea    0x8(%esi),%eax
 8761f3b:	89 04 24             	mov    %eax,(%esp)
 8761f3e:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8761f41:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8761f45:	e8 36 1c 00 00       	call   8763b80 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10deallocateEPvj>
 8761f4a:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8761f4d:	31 c0                	xor    %eax,%eax
 8761f4f:	85 d2                	test   %edx,%edx
 8761f51:	0f 85 e9 00 00 00    	jne    8762040 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x1f0>
 8761f57:	89 16                	mov    %edx,(%esi)
 8761f59:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8761f5c:	89 46 04             	mov    %eax,0x4(%esi)
 8761f5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761f66:	00 
 8761f67:	89 04 24             	mov    %eax,(%esp)
 8761f6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8761f6e:	e8 4d bd 91 ff       	call   807dcc0 <memset@plt>
 8761f73:	31 c0                	xor    %eax,%eax
 8761f75:	85 ff                	test   %edi,%edi
 8761f77:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 8761f7e:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8761f81:	74 13                	je     8761f96 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x146>
 8761f83:	c1 e7 02             	shl    $0x2,%edi
 8761f86:	89 3c 24             	mov    %edi,(%esp)
 8761f89:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8761f8e:	e8 fd 57 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8761f93:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8761f96:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8761f99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8761f9d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8761fa0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8761fa4:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8761fa8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8761faf:	00 
 8761fb0:	89 04 24             	mov    %eax,(%esp)
 8761fb3:	e8 08 1d 00 00       	call   8763cc0 <_ZN8TaoCrypt20AllocatorWithCleanupIjE10reallocateEPjjjb>
 8761fb8:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8761fbb:	c1 e7 02             	shl    $0x2,%edi
 8761fbe:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8761fc2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8761fc9:	00 
 8761fca:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8761fcd:	89 04 24             	mov    %eax,(%esp)
 8761fd0:	e8 eb bc 91 ff       	call   807dcc0 <memset@plt>
 8761fd5:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8761fd8:	8b 55 10             	mov    0x10(%ebp),%edx
 8761fdb:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8761fdf:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8761fe2:	8b 42 04             	mov    0x4(%edx),%eax
 8761fe5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8761fe8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8761fec:	89 44 24 10          	mov    %eax,0x10(%esp)
 8761ff0:	8b 42 04             	mov    0x4(%edx),%eax
 8761ff3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8761ff7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8761ffa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8761ffe:	8b 46 04             	mov    0x4(%esi),%eax
 8762001:	89 04 24             	mov    %eax,(%esp)
 8762004:	e8 07 a6 ff ff       	call   875c610 <_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j>
 8762009:	8b 45 dc             	mov    -0x24(%ebp),%eax
 876200c:	8b 75 e0             	mov    -0x20(%ebp),%esi
 876200f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762016:	00 
 8762017:	c1 e0 02             	shl    $0x2,%eax
 876201a:	89 34 24             	mov    %esi,(%esp)
 876201d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762021:	e8 9a bc 91 ff       	call   807dcc0 <memset@plt>
 8762026:	89 34 24             	mov    %esi,(%esp)
 8762029:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876202e:	e8 ed 56 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762033:	83 c4 6c             	add    $0x6c,%esp
 8762036:	5b                   	pop    %ebx
 8762037:	5e                   	pop    %esi
 8762038:	5f                   	pop    %edi
 8762039:	5d                   	pop    %ebp
 876203a:	c3                   	ret
 876203b:	90                   	nop
 876203c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8762040:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8762043:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8762046:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876204b:	89 04 24             	mov    %eax,(%esp)
 876204e:	e8 3d 57 00 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8762053:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8762056:	e9 fc fe ff ff       	jmp    8761f57 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x107>
 876205b:	90                   	nop
 876205c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8762060:	8b 94 bb 48 87 99 ff 	mov    -0x6678b8(%ebx,%edi,4),%edx
 8762067:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 876206e:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8762071:	e9 b2 fe ff ff       	jmp    8761f28 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0xd8>
 8762076:	66 90                	xchg   %ax,%ax
 8762078:	8b 84 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%eax
 876207f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8762082:	e9 61 fe ff ff       	jmp    8761ee8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x98>
 8762087:	90                   	nop
 8762088:	8b 84 83 48 87 99 ff 	mov    -0x6678b8(%ebx,%eax,4),%eax
 876208f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8762092:	e9 11 fe ff ff       	jmp    8761ea8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x58>
 8762097:	90                   	nop
 8762098:	83 e8 01             	sub    $0x1,%eax
 876209b:	89 04 24             	mov    %eax,(%esp)
 876209e:	e8 9d 54 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 87620a3:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 87620aa:	89 c1                	mov    %eax,%ecx
 87620ac:	d3 65 d0             	shll   %cl,-0x30(%ebp)
 87620af:	e9 f4 fd ff ff       	jmp    8761ea8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x58>
 87620b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87620b8:	83 e8 01             	sub    $0x1,%eax
 87620bb:	89 04 24             	mov    %eax,(%esp)
 87620be:	e8 7d 54 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 87620c3:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 87620ca:	89 c1                	mov    %eax,%ecx
 87620cc:	d3 65 d4             	shll   %cl,-0x2c(%ebp)
 87620cf:	e9 14 fe ff ff       	jmp    8761ee8 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0x98>
 87620d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87620d8:	8d 47 ff             	lea    -0x1(%edi),%eax
 87620db:	89 04 24             	mov    %eax,(%esp)
 87620de:	e8 5d 54 00 00       	call   8767540 <_ZN8TaoCrypt12BitPrecisionEj>
 87620e3:	ba 01 00 00 00       	mov    $0x1,%edx
 87620e8:	89 c1                	mov    %eax,%ecx
 87620ea:	d3 e2                	shl    %cl,%edx
 87620ec:	8d 04 95 00 00 00 00 	lea    0x0(,%edx,4),%eax
 87620f3:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 87620f6:	e9 2d fe ff ff       	jmp    8761f28 <_ZN8TaoCrypt16PositiveMultiplyERNS_7IntegerERKS0_S3_+0xd8>
 87620fb:	90                   	nop
 87620fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::PositiveMultiply @ 0x8761e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveMultiply(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

void TaoCrypt::PositiveMultiply(Integer *param_1,Integer *param_2,Integer *param_3)

{
  byte bVar1;
  uint uVar2;
  void *__s;
  uint *puVar3;
  uint uVar4;
  void *pvVar5;
  size_t local_50;
  uint local_34;
  uint local_30;
  AllocatorWithCleanup<unsigned_int> local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x8761e5b;
  uVar2 = Integer::WordCount(param_2);
  if (uVar2 < 9) {
    local_34 = (&RoundupSizeTable)[uVar2];
  }
  else {
    local_34 = 0x10;
    if (((0x10 < uVar2) && (local_34 = 0x20, 0x20 < uVar2)) && (local_34 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      local_34 = 1 << (bVar1 & 0x1f);
    }
  }
  uVar2 = Integer::WordCount(param_3);
  if (uVar2 < 9) {
    local_30 = (&RoundupSizeTable)[uVar2];
  }
  else {
    local_30 = 0x10;
    if (((0x10 < uVar2) && (local_30 = 0x20, 0x20 < uVar2)) && (local_30 = 0x40, 0x40 < uVar2)) {
      bVar1 = BitPrecision(uVar2 - 1);
      local_30 = 1 << (bVar1 & 0x1f);
    }
  }
  uVar2 = local_30 + local_34;
  if (uVar2 < 9) {
    uVar4 = (&RoundupSizeTable)[uVar2];
    local_50 = uVar4 * 4;
  }
  else {
    uVar4 = 0x10;
    local_50 = 0x40;
    if (0x10 < uVar2) {
      uVar4 = 0x20;
      local_50 = 0x80;
      if (0x20 < uVar2) {
        uVar4 = 0x40;
        local_50 = 0x100;
        if (0x40 < uVar2) {
          bVar1 = BitPrecision(uVar2 - 1);
          uVar4 = 1 << (bVar1 & 0x1f);
          local_50 = uVar4 * 4;
        }
      }
    }
  }
  __s = *(void **)(param_1 + 4);
  if (uVar4 != *(uint *)param_1) {
    pvVar5 = __s;
    AllocatorWithCleanup<unsigned_int>::deallocate
              ((AllocatorWithCleanup<unsigned_int> *)(param_1 + 8),__s,*(uint *)param_1);
    __s = (void *)0x0;
    if (uVar4 != 0) {
      __s = operator_new__(local_50,(uint)pvVar5 & 0xffffff00);
    }
  }
  *(uint *)param_1 = uVar4;
  *(void **)(param_1 + 4) = __s;
  uVar4 = 0;
  memset(__s,0,local_50);
  puVar3 = (uint *)0x0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar2 != 0) {
    puVar3 = operator_new__(uVar2 * 4,uVar4 & 0xffffff00);
  }
  puVar3 = (uint *)AllocatorWithCleanup<unsigned_int>::reallocate(local_20,puVar3,uVar2,uVar2,false)
  ;
  memset(puVar3,0,uVar2 * 4);
  AsymmetricMultiply(*(uint **)(param_1 + 4),puVar3,*(uint **)(param_2 + 4),local_34,
                     *(uint **)(param_3 + 4),local_30);
  uVar4 = 0;
  memset(puVar3,0,uVar2 * 4);
  operator_delete__(puVar3,uVar4 & 0xffffff00);
  return;
}

```

---

## PositiveSubtract

```asm
// === 0875d310 TaoCrypt::PositiveSubtract  [0x0875d310-0x875d56f] ===
 875d310:	55                   	push   %ebp
 875d311:	89 e5                	mov    %esp,%ebp
 875d313:	57                   	push   %edi
 875d314:	56                   	push   %esi
 875d315:	53                   	push   %ebx
 875d316:	e8 dd 5a fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d31b:	81 c3 7d f8 c0 00    	add    $0xc0f87d,%ebx
 875d321:	83 ec 2c             	sub    $0x2c,%esp
 875d324:	8b 55 0c             	mov    0xc(%ebp),%edx
 875d327:	8b 7d 10             	mov    0x10(%ebp),%edi
 875d32a:	89 14 24             	mov    %edx,(%esp)
 875d32d:	89 55 d8             	mov    %edx,-0x28(%ebp)
 875d330:	e8 fb fd ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875d335:	89 3c 24             	mov    %edi,(%esp)
 875d338:	89 c6                	mov    %eax,%esi
 875d33a:	83 e6 01             	and    $0x1,%esi
 875d33d:	01 c6                	add    %eax,%esi
 875d33f:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 875d342:	e8 e9 fd ff ff       	call   875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>
 875d347:	8b 55 d8             	mov    -0x28(%ebp),%edx
 875d34a:	89 c6                	mov    %eax,%esi
 875d34c:	83 e6 01             	and    $0x1,%esi
 875d34f:	01 c6                	add    %eax,%esi
 875d351:	39 75 e4             	cmp    %esi,-0x1c(%ebp)
 875d354:	0f 84 6e 01 00 00    	je     875d4c8 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x1b8>
 875d35a:	0f 86 b8 00 00 00    	jbe    875d418 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x108>
 875d360:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875d364:	8b 47 04             	mov    0x4(%edi),%eax
 875d367:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875d36a:	89 55 d8             	mov    %edx,-0x28(%ebp)
 875d36d:	89 44 24 08          	mov    %eax,0x8(%esp)
 875d371:	8b 42 04             	mov    0x4(%edx),%eax
 875d374:	89 44 24 04          	mov    %eax,0x4(%esp)
 875d378:	8b 41 04             	mov    0x4(%ecx),%eax
 875d37b:	89 04 24             	mov    %eax,(%esp)
 875d37e:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875d384:	8b 55 d8             	mov    -0x28(%ebp),%edx
 875d387:	8b 4a 04             	mov    0x4(%edx),%ecx
 875d38a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875d38d:	8d 04 b5 00 00 00 00 	lea    0x0(,%esi,4),%eax
 875d394:	89 c2                	mov    %eax,%edx
 875d396:	01 c1                	add    %eax,%ecx
 875d398:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875d39b:	8b 45 08             	mov    0x8(%ebp),%eax
 875d39e:	03 50 04             	add    0x4(%eax),%edx
 875d3a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875d3a4:	29 f0                	sub    %esi,%eax
 875d3a6:	89 c6                	mov    %eax,%esi
 875d3a8:	74 1c                	je     875d3c6 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xb6>
 875d3aa:	31 c0                	xor    %eax,%eax
 875d3ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d3b0:	8b 3c 81             	mov    (%ecx,%eax,4),%edi
 875d3b3:	89 3c 82             	mov    %edi,(%edx,%eax,4)
 875d3b6:	83 c0 01             	add    $0x1,%eax
 875d3b9:	39 c6                	cmp    %eax,%esi
 875d3bb:	77 f3                	ja     875d3b0 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xa0>
 875d3bd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875d3c0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875d3c3:	03 51 04             	add    0x4(%ecx),%edx
 875d3c6:	8b 02                	mov    (%edx),%eax
 875d3c8:	89 c1                	mov    %eax,%ecx
 875d3ca:	2b 4d dc             	sub    -0x24(%ebp),%ecx
 875d3cd:	39 c8                	cmp    %ecx,%eax
 875d3cf:	89 0a                	mov    %ecx,(%edx)
 875d3d1:	73 31                	jae    875d404 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xf4>
 875d3d3:	83 fe 01             	cmp    $0x1,%esi
 875d3d6:	76 2c                	jbe    875d404 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xf4>
 875d3d8:	8b 4a 04             	mov    0x4(%edx),%ecx
 875d3db:	8d 41 ff             	lea    -0x1(%ecx),%eax
 875d3de:	85 c9                	test   %ecx,%ecx
 875d3e0:	89 42 04             	mov    %eax,0x4(%edx)
 875d3e3:	b8 01 00 00 00       	mov    $0x1,%eax
 875d3e8:	74 13                	je     875d3fd <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xed>
 875d3ea:	eb 18                	jmp    875d404 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xf4>
 875d3ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d3f0:	8b 0c 82             	mov    (%edx,%eax,4),%ecx
 875d3f3:	8d 79 ff             	lea    -0x1(%ecx),%edi
 875d3f6:	85 c9                	test   %ecx,%ecx
 875d3f8:	89 3c 82             	mov    %edi,(%edx,%eax,4)
 875d3fb:	75 07                	jne    875d404 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xf4>
 875d3fd:	83 c0 01             	add    $0x1,%eax
 875d400:	39 c6                	cmp    %eax,%esi
 875d402:	77 ec                	ja     875d3f0 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0xe0>
 875d404:	8b 45 08             	mov    0x8(%ebp),%eax
 875d407:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 875d40e:	83 c4 2c             	add    $0x2c,%esp
 875d411:	5b                   	pop    %ebx
 875d412:	5e                   	pop    %esi
 875d413:	5f                   	pop    %edi
 875d414:	5d                   	pop    %ebp
 875d415:	c3                   	ret
 875d416:	66 90                	xchg   %ax,%ax
 875d418:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875d41b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875d41f:	8b 42 04             	mov    0x4(%edx),%eax
 875d422:	8b 55 08             	mov    0x8(%ebp),%edx
 875d425:	89 44 24 08          	mov    %eax,0x8(%esp)
 875d429:	8b 47 04             	mov    0x4(%edi),%eax
 875d42c:	89 44 24 04          	mov    %eax,0x4(%esp)
 875d430:	8b 42 04             	mov    0x4(%edx),%eax
 875d433:	89 04 24             	mov    %eax,(%esp)
 875d436:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875d43c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875d43f:	c1 e1 02             	shl    $0x2,%ecx
 875d442:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 875d445:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875d448:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875d44b:	8b 45 08             	mov    0x8(%ebp),%eax
 875d44e:	03 4f 04             	add    0x4(%edi),%ecx
 875d451:	03 50 04             	add    0x4(%eax),%edx
 875d454:	2b 75 e4             	sub    -0x1c(%ebp),%esi
 875d457:	74 1d                	je     875d476 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x166>
 875d459:	31 c0                	xor    %eax,%eax
 875d45b:	90                   	nop
 875d45c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d460:	8b 3c 81             	mov    (%ecx,%eax,4),%edi
 875d463:	89 3c 82             	mov    %edi,(%edx,%eax,4)
 875d466:	83 c0 01             	add    $0x1,%eax
 875d469:	39 c6                	cmp    %eax,%esi
 875d46b:	77 f3                	ja     875d460 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x150>
 875d46d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875d470:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875d473:	03 51 04             	add    0x4(%ecx),%edx
 875d476:	8b 02                	mov    (%edx),%eax
 875d478:	89 c1                	mov    %eax,%ecx
 875d47a:	2b 4d dc             	sub    -0x24(%ebp),%ecx
 875d47d:	39 c8                	cmp    %ecx,%eax
 875d47f:	89 0a                	mov    %ecx,(%edx)
 875d481:	73 31                	jae    875d4b4 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x1a4>
 875d483:	83 fe 01             	cmp    $0x1,%esi
 875d486:	76 2c                	jbe    875d4b4 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x1a4>
 875d488:	8b 4a 04             	mov    0x4(%edx),%ecx
 875d48b:	8d 41 ff             	lea    -0x1(%ecx),%eax
 875d48e:	85 c9                	test   %ecx,%ecx
 875d490:	89 42 04             	mov    %eax,0x4(%edx)
 875d493:	b8 01 00 00 00       	mov    $0x1,%eax
 875d498:	74 13                	je     875d4ad <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x19d>
 875d49a:	eb 18                	jmp    875d4b4 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x1a4>
 875d49c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875d4a0:	8b 0c 82             	mov    (%edx,%eax,4),%ecx
 875d4a3:	8d 79 ff             	lea    -0x1(%ecx),%edi
 875d4a6:	85 c9                	test   %ecx,%ecx
 875d4a8:	89 3c 82             	mov    %edi,(%edx,%eax,4)
 875d4ab:	75 07                	jne    875d4b4 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x1a4>
 875d4ad:	83 c0 01             	add    $0x1,%eax
 875d4b0:	39 c6                	cmp    %eax,%esi
 875d4b2:	77 ec                	ja     875d4a0 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x190>
 875d4b4:	8b 45 08             	mov    0x8(%ebp),%eax
 875d4b7:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 875d4be:	83 c4 2c             	add    $0x2c,%esp
 875d4c1:	5b                   	pop    %ebx
 875d4c2:	5e                   	pop    %esi
 875d4c3:	5f                   	pop    %edi
 875d4c4:	5d                   	pop    %ebp
 875d4c5:	c3                   	ret
 875d4c6:	66 90                	xchg   %ax,%ax
 875d4c8:	8b 52 04             	mov    0x4(%edx),%edx
 875d4cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875d4ce:	8b 7f 04             	mov    0x4(%edi),%edi
 875d4d1:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875d4d4:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875d4d7:	8d 14 85 fc ff ff ff 	lea    -0x4(,%eax,4),%edx
 875d4de:	89 7d dc             	mov    %edi,-0x24(%ebp)
 875d4e1:	01 d1                	add    %edx,%ecx
 875d4e3:	01 fa                	add    %edi,%edx
 875d4e5:	8d 76 00             	lea    0x0(%esi),%esi
 875d4e8:	85 c0                	test   %eax,%eax
 875d4ea:	74 4c                	je     875d538 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x228>
 875d4ec:	8b 39                	mov    (%ecx),%edi
 875d4ee:	83 e8 01             	sub    $0x1,%eax
 875d4f1:	8b 32                	mov    (%edx),%esi
 875d4f3:	39 f7                	cmp    %esi,%edi
 875d4f5:	77 41                	ja     875d538 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x228>
 875d4f7:	83 e9 04             	sub    $0x4,%ecx
 875d4fa:	83 ea 04             	sub    $0x4,%edx
 875d4fd:	39 f7                	cmp    %esi,%edi
 875d4ff:	73 e7                	jae    875d4e8 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x1d8>
 875d501:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875d504:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875d507:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875d50a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875d50e:	8b 55 08             	mov    0x8(%ebp),%edx
 875d511:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875d515:	89 44 24 04          	mov    %eax,0x4(%esp)
 875d519:	8b 42 04             	mov    0x4(%edx),%eax
 875d51c:	89 04 24             	mov    %eax,(%esp)
 875d51f:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875d525:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875d528:	c7 41 0c 01 00 00 00 	movl   $0x1,0xc(%ecx)
 875d52f:	83 c4 2c             	add    $0x2c,%esp
 875d532:	5b                   	pop    %ebx
 875d533:	5e                   	pop    %esi
 875d534:	5f                   	pop    %edi
 875d535:	5d                   	pop    %ebp
 875d536:	c3                   	ret
 875d537:	90                   	nop
 875d538:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875d53b:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875d53e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875d541:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875d545:	8b 55 08             	mov    0x8(%ebp),%edx
 875d548:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875d54c:	89 44 24 04          	mov    %eax,0x4(%esp)
 875d550:	8b 42 04             	mov    0x4(%edx),%eax
 875d553:	89 04 24             	mov    %eax,(%esp)
 875d556:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875d55c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875d55f:	c7 41 0c 00 00 00 00 	movl   $0x0,0xc(%ecx)
 875d566:	e9 53 ff ff ff       	jmp    875d4be <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_+0x1ae>
 875d56b:	90                   	nop
 875d56c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::PositiveSubtract @ 0x875d310

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

void TaoCrypt::PositiveSubtract(Integer *param_1,Integer *param_2,Integer *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar3 = Integer::WordCount(param_2);
  uVar3 = (uVar3 & 1) + uVar3;
  uVar4 = Integer::WordCount(param_3);
  uVar4 = (uVar4 & 1) + uVar4;
  if (uVar3 == uVar4) {
    iVar7 = *(int *)(param_2 + 4);
    iVar5 = *(int *)(param_3 + 4);
    iVar1 = uVar3 * 4 + -4;
    puVar8 = (uint *)(iVar7 + iVar1);
    puVar9 = (uint *)(iVar1 + iVar5);
    uVar4 = uVar3;
    while (uVar4 != 0) {
      uVar6 = *puVar8;
      uVar4 = uVar4 - 1;
      uVar2 = *puVar9;
      if (uVar2 < uVar6) break;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + -1;
      if (uVar6 < uVar2) {
        (*s_pSub)(*(undefined4 *)(param_1 + 4),iVar5,iVar7,uVar3);
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
    }
    (*s_pSub)(*(undefined4 *)(param_1 + 4),iVar7,iVar5,uVar3);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    if (uVar4 < uVar3) {
      iVar5 = (*s_pSub)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),
                        *(undefined4 *)(param_3 + 4),uVar4);
      iVar7 = *(int *)(param_2 + 4);
      iVar1 = uVar4 * 4;
      puVar8 = (uint *)(iVar1 + *(int *)(param_1 + 4));
      uVar6 = uVar3 - uVar4;
      if (uVar3 != uVar4) {
        uVar3 = 0;
        do {
          puVar8[uVar3] = *(uint *)(iVar7 + iVar1 + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
        puVar8 = (uint *)(iVar1 + *(int *)(param_1 + 4));
      }
      uVar3 = *puVar8;
      uVar4 = uVar3 - iVar5;
      *puVar8 = uVar4;
      if ((uVar3 < uVar4) && (1 < uVar6)) {
        uVar3 = puVar8[1];
        puVar8[1] = uVar3 - 1;
        uVar4 = 1;
        while ((uVar3 == 0 && (uVar4 = uVar4 + 1, uVar4 < uVar6))) {
          uVar3 = puVar8[uVar4];
          puVar8[uVar4] = uVar3 - 1;
        }
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    iVar7 = (*s_pSub)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_3 + 4),
                      *(undefined4 *)(param_2 + 4),uVar3);
    iVar5 = uVar3 * 4;
    iVar1 = *(int *)(param_3 + 4);
    puVar8 = (uint *)(iVar5 + *(int *)(param_1 + 4));
    uVar6 = uVar4 - uVar3;
    if (uVar4 != uVar3) {
      uVar3 = 0;
      do {
        puVar8[uVar3] = *(uint *)(iVar5 + iVar1 + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
      puVar8 = (uint *)(iVar5 + *(int *)(param_1 + 4));
    }
    uVar3 = *puVar8;
    uVar4 = uVar3 - iVar7;
    *puVar8 = uVar4;
    if ((uVar3 < uVar4) && (1 < uVar6)) {
      uVar3 = puVar8[1];
      puVar8[1] = uVar3 - 1;
      uVar4 = 1;
      while ((uVar3 == 0 && (uVar4 = uVar4 + 1, uVar4 < uVar6))) {
        uVar3 = puVar8[uVar4];
        puVar8[uVar4] = uVar3 - 1;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}

```

---

## RecursiveInverseModPower2

```asm
// === 0875dfd0 TaoCrypt::RecursiveInverseModPower2  [0x0875dfd0-0x875e1df] ===
 875dfd0:	55                   	push   %ebp
 875dfd1:	89 e5                	mov    %esp,%ebp
 875dfd3:	57                   	push   %edi
 875dfd4:	56                   	push   %esi
 875dfd5:	53                   	push   %ebx
 875dfd6:	83 ec 3c             	sub    $0x3c,%esp
 875dfd9:	8b 7d 14             	mov    0x14(%ebp),%edi
 875dfdc:	e8 17 4e fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875dfe1:	81 c3 b7 eb c0 00    	add    $0xc0ebb7,%ebx
 875dfe7:	8b 75 0c             	mov    0xc(%ebp),%esi
 875dfea:	8b 45 10             	mov    0x10(%ebp),%eax
 875dfed:	83 ff 02             	cmp    $0x2,%edi
 875dff0:	0f 84 42 01 00 00    	je     875e138 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x168>
 875dff6:	8b 55 08             	mov    0x8(%ebp),%edx
 875dff9:	d1 ef                	shr    $1,%edi
 875dffb:	89 44 24 08          	mov    %eax,0x8(%esp)
 875dfff:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875e002:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875e006:	89 74 24 04          	mov    %esi,0x4(%esp)
 875e00a:	89 14 24             	mov    %edx,(%esp)
 875e00d:	e8 be ff ff ff       	call   875dfd0 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj>
 875e012:	89 f9                	mov    %edi,%ecx
 875e014:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875e017:	83 e9 01             	sub    $0x1,%ecx
 875e01a:	c7 06 01 00 00 00    	movl   $0x1,(%esi)
 875e020:	74 15                	je     875e037 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x67>
 875e022:	31 d2                	xor    %edx,%edx
 875e024:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875e028:	c7 44 96 04 00 00 00 	movl   $0x0,0x4(%esi,%edx,4)
 875e02f:	00 
 875e030:	83 c2 01             	add    $0x1,%edx
 875e033:	39 d1                	cmp    %edx,%ecx
 875e035:	77 f1                	ja     875e028 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x58>
 875e037:	8d 14 bd 00 00 00 00 	lea    0x0(,%edi,4),%edx
 875e03e:	8d 0c 16             	lea    (%esi,%edx,1),%ecx
 875e041:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 875e044:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875e047:	89 44 24 10          	mov    %eax,0x10(%esp)
 875e04b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875e04e:	89 55 d8             	mov    %edx,-0x28(%ebp)
 875e051:	01 d1                	add    %edx,%ecx
 875e053:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 875e056:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875e059:	89 7c 24 14          	mov    %edi,0x14(%esp)
 875e05d:	89 74 24 08          	mov    %esi,0x8(%esp)
 875e061:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875e065:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875e068:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875e06c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e06f:	89 0c 24             	mov    %ecx,(%esp)
 875e072:	e8 09 f9 ff ff       	call   875d980 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j>
 875e077:	8b 55 d8             	mov    -0x28(%ebp),%edx
 875e07a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 875e07d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 875e081:	89 34 24             	mov    %esi,(%esp)
 875e084:	01 d0                	add    %edx,%eax
 875e086:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875e089:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875e08d:	8b 45 08             	mov    0x8(%ebp),%eax
 875e090:	89 54 24 04          	mov    %edx,0x4(%esp)
 875e094:	89 44 24 08          	mov    %eax,0x8(%esp)
 875e098:	e8 f3 e3 ff ff       	call   875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>
 875e09d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e0a0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875e0a4:	89 74 24 08          	mov    %esi,0x8(%esp)
 875e0a8:	89 34 24             	mov    %esi,(%esp)
 875e0ab:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875e0af:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875e0b5:	8b 16                	mov    (%esi),%edx
 875e0b7:	8d 42 ff             	lea    -0x1(%edx),%eax
 875e0ba:	39 c2                	cmp    %eax,%edx
 875e0bc:	89 06                	mov    %eax,(%esi)
 875e0be:	73 70                	jae    875e130 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x160>
 875e0c0:	83 ff 01             	cmp    $0x1,%edi
 875e0c3:	76 6b                	jbe    875e130 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x160>
 875e0c5:	8b 56 04             	mov    0x4(%esi),%edx
 875e0c8:	8d 42 ff             	lea    -0x1(%edx),%eax
 875e0cb:	85 d2                	test   %edx,%edx
 875e0cd:	89 46 04             	mov    %eax,0x4(%esi)
 875e0d0:	b8 01 00 00 00       	mov    $0x1,%eax
 875e0d5:	74 16                	je     875e0ed <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x11d>
 875e0d7:	eb 1b                	jmp    875e0f4 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x124>
 875e0d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875e0e0:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875e0e3:	8d 4a ff             	lea    -0x1(%edx),%ecx
 875e0e6:	85 d2                	test   %edx,%edx
 875e0e8:	89 0c 86             	mov    %ecx,(%esi,%eax,4)
 875e0eb:	75 07                	jne    875e0f4 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x124>
 875e0ed:	83 c0 01             	add    $0x1,%eax
 875e0f0:	39 c7                	cmp    %eax,%edi
 875e0f2:	77 ec                	ja     875e0e0 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x110>
 875e0f4:	31 c0                	xor    %eax,%eax
 875e0f6:	66 90                	xchg   %ax,%ax
 875e0f8:	f7 14 86             	notl   (%esi,%eax,4)
 875e0fb:	83 c0 01             	add    $0x1,%eax
 875e0fe:	39 c7                	cmp    %eax,%edi
 875e100:	77 f6                	ja     875e0f8 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x128>
 875e102:	8b 45 08             	mov    0x8(%ebp),%eax
 875e105:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875e108:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e10b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 875e10f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875e113:	89 44 24 08          	mov    %eax,0x8(%esp)
 875e117:	89 54 24 04          	mov    %edx,0x4(%esp)
 875e11b:	89 0c 24             	mov    %ecx,(%esp)
 875e11e:	e8 6d e3 ff ff       	call   875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>
 875e123:	83 c4 3c             	add    $0x3c,%esp
 875e126:	5b                   	pop    %ebx
 875e127:	5e                   	pop    %esi
 875e128:	5f                   	pop    %edi
 875e129:	5d                   	pop    %ebp
 875e12a:	c3                   	ret
 875e12b:	90                   	nop
 875e12c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875e130:	85 ff                	test   %edi,%edi
 875e132:	75 c0                	jne    875e0f4 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x124>
 875e134:	eb cc                	jmp    875e102 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x132>
 875e136:	66 90                	xchg   %ax,%ax
 875e138:	8b 08                	mov    (%eax),%ecx
 875e13a:	8b 10                	mov    (%eax),%edx
 875e13c:	83 e1 07             	and    $0x7,%ecx
 875e13f:	0f af d1             	imul   %ecx,%edx
 875e142:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875e145:	89 fa                	mov    %edi,%edx
 875e147:	2b 55 e4             	sub    -0x1c(%ebp),%edx
 875e14a:	0f af ca             	imul   %edx,%ecx
 875e14d:	89 fa                	mov    %edi,%edx
 875e14f:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 875e152:	8b 08                	mov    (%eax),%ecx
 875e154:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
 875e158:	29 ca                	sub    %ecx,%edx
 875e15a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875e15d:	0f af ca             	imul   %edx,%ecx
 875e160:	8b 10                	mov    (%eax),%edx
 875e162:	0f af d1             	imul   %ecx,%edx
 875e165:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875e168:	89 fa                	mov    %edi,%edx
 875e16a:	2b 55 e4             	sub    -0x1c(%ebp),%edx
 875e16d:	0f af ca             	imul   %edx,%ecx
 875e170:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 875e173:	8b 08                	mov    (%eax),%ecx
 875e175:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
 875e179:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 875e180:	29 cf                	sub    %ecx,%edi
 875e182:	0f af 7d e4          	imul   -0x1c(%ebp),%edi
 875e186:	89 3e                	mov    %edi,(%esi)
 875e188:	8d 7e 08             	lea    0x8(%esi),%edi
 875e18b:	89 44 24 08          	mov    %eax,0x8(%esp)
 875e18f:	89 74 24 04          	mov    %esi,0x4(%esp)
 875e193:	89 3c 24             	mov    %edi,(%esp)
 875e196:	e8 c5 b4 ff ff       	call   8759660 <_ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_>
 875e19b:	8b 56 08             	mov    0x8(%esi),%edx
 875e19e:	8d 42 ff             	lea    -0x1(%edx),%eax
 875e1a1:	39 c2                	cmp    %eax,%edx
 875e1a3:	89 46 08             	mov    %eax,0x8(%esi)
 875e1a6:	73 04                	jae    875e1ac <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x1dc>
 875e1a8:	83 6e 0c 01          	subl   $0x1,0xc(%esi)
 875e1ac:	f7 17                	notl   (%edi)
 875e1ae:	8d 47 04             	lea    0x4(%edi),%eax
 875e1b1:	f7 10                	notl   (%eax)
 875e1b3:	8b 4e 08             	mov    0x8(%esi),%ecx
 875e1b6:	8d 51 02             	lea    0x2(%ecx),%edx
 875e1b9:	39 d1                	cmp    %edx,%ecx
 875e1bb:	89 56 08             	mov    %edx,0x8(%esi)
 875e1be:	76 03                	jbe    875e1c3 <_ZN8TaoCrypt25RecursiveInverseModPower2EPjS0_PKjj+0x1f3>
 875e1c0:	83 00 01             	addl   $0x1,(%eax)
 875e1c3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875e1c6:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875e1ca:	89 74 24 04          	mov    %esi,0x4(%esp)
 875e1ce:	89 0c 24             	mov    %ecx,(%esp)
 875e1d1:	e8 8a b4 ff ff       	call   8759660 <_ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_>
 875e1d6:	83 c4 3c             	add    $0x3c,%esp
 875e1d9:	5b                   	pop    %ebx
 875e1da:	5e                   	pop    %esi
 875e1db:	5f                   	pop    %edi
 875e1dc:	5d                   	pop    %ebp
 875e1dd:	c3                   	ret
 875e1de:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::RecursiveInverseModPower2 @ 0x875dfd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveInverseModPower2(unsigned int*, unsigned int*, unsigned int const*, unsigned
   int) */

void TaoCrypt::RecursiveInverseModPower2(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_4 == 2) {
    iVar4 = (*param_3 & 7) * (2 - *param_3 * (*param_3 & 7));
    iVar4 = iVar4 * (2 - *param_3 * iVar4);
    iVar4 = iVar4 * (2 - *param_3 * iVar4);
    uVar6 = *param_3;
    param_2[1] = 0;
    *param_2 = (2 - uVar6 * iVar4) * iVar4;
    puVar1 = param_2 + 2;
    Portable::Multiply2Bottom(puVar1,param_2,param_3);
    uVar5 = param_2[2];
    uVar6 = uVar5 - 1;
    param_2[2] = uVar6;
    if (uVar5 < uVar6) {
      param_2[3] = param_2[3] - 1;
    }
    *puVar1 = ~*puVar1;
    puVar3 = param_2 + 3;
    *puVar3 = ~*puVar3;
    uVar5 = param_2[2];
    uVar6 = uVar5 + 2;
    param_2[2] = uVar6;
    if (uVar6 < uVar5) {
      *puVar3 = *puVar3 + 1;
    }
    Portable::Multiply2Bottom(param_1,param_2,puVar1);
    return;
  }
  uVar6 = param_4 >> 1;
  RecursiveInverseModPower2(param_1,param_2,param_3,uVar6);
  *param_2 = 1;
  if (uVar6 != 1) {
    uVar5 = 0;
    do {
      param_2[uVar5 + 1] = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6 - 1);
  }
  puVar1 = param_2 + uVar6;
  puVar3 = param_1 + uVar6;
  RecursiveMultiplyTop(puVar3,puVar1,param_2,param_1,param_3,uVar6);
  RecursiveMultiplyBottom(param_2,puVar1,param_1,param_3 + uVar6,uVar6);
  (*s_pAdd)(param_2,puVar3,param_2,uVar6);
  uVar2 = *param_2;
  uVar5 = uVar2 - 1;
  *param_2 = uVar5;
  if ((uVar2 < uVar5) && (1 < uVar6)) {
    uVar5 = param_2[1];
    param_2[1] = uVar5 - 1;
    uVar2 = 1;
    while ((uVar5 == 0 && (uVar2 = uVar2 + 1, uVar2 < uVar6))) {
      uVar5 = param_2[uVar2];
      param_2[uVar2] = uVar5 - 1;
    }
  }
  else if (uVar6 == 0) goto LAB_0875e102;
  uVar5 = 0;
  do {
    param_2[uVar5] = ~param_2[uVar5];
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar6);
LAB_0875e102:
  RecursiveMultiplyBottom(puVar3,puVar1,param_1,param_2,uVar6);
  return;
}

```

---

## RecursiveMultiply

```asm
// === 0875bdc0 TaoCrypt::RecursiveMultiply  [0x0875bdc0-0x875c30f] ===
 875bdc0:	55                   	push   %ebp
 875bdc1:	89 e5                	mov    %esp,%ebp
 875bdc3:	57                   	push   %edi
 875bdc4:	56                   	push   %esi
 875bdc5:	53                   	push   %ebx
 875bdc6:	83 ec 4c             	sub    $0x4c,%esp
 875bdc9:	e8 2a 70 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875bdce:	81 c3 ca 0d c1 00    	add    $0xc10dca,%ebx
 875bdd4:	83 7d 18 08          	cmpl   $0x8,0x18(%ebp)
 875bdd8:	0f 84 5a 01 00 00    	je     875bf38 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x178>
 875bdde:	83 7d 18 04          	cmpl   $0x4,0x18(%ebp)
 875bde2:	0f 84 78 01 00 00    	je     875bf60 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x1a0>
 875bde8:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 875bdec:	0f 84 d6 04 00 00    	je     875c2c8 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x508>
 875bdf2:	8b 45 18             	mov    0x18(%ebp),%eax
 875bdf5:	8b 55 10             	mov    0x10(%ebp),%edx
 875bdf8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875bdfb:	d1 e8                	shr    $1,%eax
 875bdfd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875be00:	c1 e0 02             	shl    $0x2,%eax
 875be03:	01 c2                	add    %eax,%edx
 875be05:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875be08:	83 e8 04             	sub    $0x4,%eax
 875be0b:	89 55 d0             	mov    %edx,-0x30(%ebp)
 875be0e:	01 c1                	add    %eax,%ecx
 875be10:	01 c2                	add    %eax,%edx
 875be12:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875be15:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875be18:	85 c0                	test   %eax,%eax
 875be1a:	0f 84 78 04 00 00    	je     875c298 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x4d8>
 875be20:	8b 39                	mov    (%ecx),%edi
 875be22:	83 e8 01             	sub    $0x1,%eax
 875be25:	8b 32                	mov    (%edx),%esi
 875be27:	39 f7                	cmp    %esi,%edi
 875be29:	0f 87 79 04 00 00    	ja     875c2a8 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x4e8>
 875be2f:	83 e9 04             	sub    $0x4,%ecx
 875be32:	83 ea 04             	sub    $0x4,%edx
 875be35:	39 f7                	cmp    %esi,%edi
 875be37:	73 df                	jae    875be18 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x58>
 875be39:	c7 45 cc fd ff ff ff 	movl   $0xfffffffd,-0x34(%ebp)
 875be40:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875be43:	03 4d d8             	add    -0x28(%ebp),%ecx
 875be46:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875be49:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 875be4c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875be4f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 875be52:	03 4d dc             	add    -0x24(%ebp),%ecx
 875be55:	03 55 dc             	add    -0x24(%ebp),%edx
 875be58:	85 c0                	test   %eax,%eax
 875be5a:	74 1e                	je     875be7a <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0xba>
 875be5c:	8b 39                	mov    (%ecx),%edi
 875be5e:	83 e8 01             	sub    $0x1,%eax
 875be61:	8b 32                	mov    (%edx),%esi
 875be63:	39 f7                	cmp    %esi,%edi
 875be65:	0f 87 4d 04 00 00    	ja     875c2b8 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x4f8>
 875be6b:	83 e9 04             	sub    $0x4,%ecx
 875be6e:	83 ea 04             	sub    $0x4,%edx
 875be71:	39 f7                	cmp    %esi,%edi
 875be73:	73 e3                	jae    875be58 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x98>
 875be75:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 875be7a:	03 45 cc             	add    -0x34(%ebp),%eax
 875be7d:	83 f8 fe             	cmp    $0xfffffffe,%eax
 875be80:	0f 84 f2 02 00 00    	je     875c178 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x3b8>
 875be86:	0f 8f fc 00 00 00    	jg     875bf88 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x1c8>
 875be8c:	83 f8 fc             	cmp    $0xfffffffc,%eax
 875be8f:	0f 85 05 01 00 00    	jne    875bf9a <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x1da>
 875be95:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875be98:	8b 55 10             	mov    0x10(%ebp),%edx
 875be9b:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 875be9e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875bea2:	8b 45 08             	mov    0x8(%ebp),%eax
 875bea5:	89 54 24 08          	mov    %edx,0x8(%esp)
 875bea9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875bead:	89 04 24             	mov    %eax,(%esp)
 875beb0:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875beb6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875beb9:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 875bebc:	8b 75 08             	mov    0x8(%ebp),%esi
 875bebf:	8b 45 14             	mov    0x14(%ebp),%eax
 875bec2:	03 75 d8             	add    -0x28(%ebp),%esi
 875bec5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875bec9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875becd:	89 44 24 04          	mov    %eax,0x4(%esp)
 875bed1:	89 34 24             	mov    %esi,(%esp)
 875bed4:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875beda:	8b 55 18             	mov    0x18(%ebp),%edx
 875bedd:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875bee0:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875bee3:	8b 45 08             	mov    0x8(%ebp),%eax
 875bee6:	c1 e2 02             	shl    $0x2,%edx
 875bee9:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875beec:	01 d7                	add    %edx,%edi
 875beee:	8b 55 0c             	mov    0xc(%ebp),%edx
 875bef1:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875bef5:	89 44 24 08          	mov    %eax,0x8(%esp)
 875bef9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875befd:	89 14 24             	mov    %edx,(%esp)
 875bf00:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875bf04:	e8 b7 fe ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875bf09:	8b 45 0c             	mov    0xc(%ebp),%eax
 875bf0c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875bf0f:	8b 55 08             	mov    0x8(%ebp),%edx
 875bf12:	03 45 d8             	add    -0x28(%ebp),%eax
 875bf15:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875bf19:	89 54 24 08          	mov    %edx,0x8(%esp)
 875bf1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 875bf21:	89 04 24             	mov    %eax,(%esp)
 875bf24:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875bf2a:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 875bf31:	e9 aa 00 00 00       	jmp    875bfe0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x220>
 875bf36:	66 90                	xchg   %ax,%ax
 875bf38:	8b 45 14             	mov    0x14(%ebp),%eax
 875bf3b:	8b 55 10             	mov    0x10(%ebp),%edx
 875bf3e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875bf41:	89 44 24 08          	mov    %eax,0x8(%esp)
 875bf45:	89 54 24 04          	mov    %edx,0x4(%esp)
 875bf49:	89 0c 24             	mov    %ecx,(%esp)
 875bf4c:	e8 5f f8 ff ff       	call   875b7b0 <_ZN8TaoCrypt16PentiumOptimized9Multiply8EPjPKjS3_>
 875bf51:	83 c4 4c             	add    $0x4c,%esp
 875bf54:	5b                   	pop    %ebx
 875bf55:	5e                   	pop    %esi
 875bf56:	5f                   	pop    %edi
 875bf57:	5d                   	pop    %ebp
 875bf58:	c3                   	ret
 875bf59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875bf60:	8b 45 14             	mov    0x14(%ebp),%eax
 875bf63:	8b 55 10             	mov    0x10(%ebp),%edx
 875bf66:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875bf69:	89 44 24 08          	mov    %eax,0x8(%esp)
 875bf6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 875bf71:	89 0c 24             	mov    %ecx,(%esp)
 875bf74:	e8 f7 f6 ff ff       	call   875b670 <_ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_>
 875bf79:	83 c4 4c             	add    $0x4c,%esp
 875bf7c:	5b                   	pop    %ebx
 875bf7d:	5e                   	pop    %esi
 875bf7e:	5f                   	pop    %edi
 875bf7f:	5d                   	pop    %ebp
 875bf80:	c3                   	ret
 875bf81:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875bf88:	83 f8 02             	cmp    $0x2,%eax
 875bf8b:	0f 84 67 01 00 00    	je     875c0f8 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x338>
 875bf91:	83 f8 04             	cmp    $0x4,%eax
 875bf94:	0f 84 5e 02 00 00    	je     875c1f8 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x438>
 875bf9a:	8b 75 18             	mov    0x18(%ebp),%esi
 875bf9d:	31 c0                	xor    %eax,%eax
 875bf9f:	85 f6                	test   %esi,%esi
 875bfa1:	0f 84 3f 03 00 00    	je     875c2e6 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x526>
 875bfa7:	8b 55 0c             	mov    0xc(%ebp),%edx
 875bfaa:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875bfad:	8d 76 00             	lea    0x0(%esi),%esi
 875bfb0:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
 875bfb7:	83 c0 01             	add    $0x1,%eax
 875bfba:	39 c1                	cmp    %eax,%ecx
 875bfbc:	77 f2                	ja     875bfb0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x1f0>
 875bfbe:	8b 45 18             	mov    0x18(%ebp),%eax
 875bfc1:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875bfc4:	8b 75 08             	mov    0x8(%ebp),%esi
 875bfc7:	03 75 d8             	add    -0x28(%ebp),%esi
 875bfca:	c1 e0 02             	shl    $0x2,%eax
 875bfcd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875bfd0:	01 c7                	add    %eax,%edi
 875bfd2:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 875bfd9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875bfe0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875bfe3:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875bfe6:	8b 45 10             	mov    0x10(%ebp),%eax
 875bfe9:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875bfed:	89 54 24 10          	mov    %edx,0x10(%esp)
 875bff1:	8b 55 08             	mov    0x8(%ebp),%edx
 875bff4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875bff8:	89 44 24 08          	mov    %eax,0x8(%esp)
 875bffc:	89 14 24             	mov    %edx,(%esp)
 875bfff:	e8 bc fd ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c004:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875c007:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 875c00a:	8b 55 08             	mov    0x8(%ebp),%edx
 875c00d:	03 55 dc             	add    -0x24(%ebp),%edx
 875c010:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875c014:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 875c017:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c01b:	89 14 24             	mov    %edx,(%esp)
 875c01e:	89 55 c8             	mov    %edx,-0x38(%ebp)
 875c021:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c025:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875c029:	e8 92 fd ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c02e:	8b 45 18             	mov    0x18(%ebp),%eax
 875c031:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c034:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c038:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c03b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c03f:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c043:	89 04 24             	mov    %eax,(%esp)
 875c046:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c04c:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875c04f:	8b 55 c8             	mov    -0x38(%ebp),%edx
 875c052:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875c056:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c05a:	89 c7                	mov    %eax,%edi
 875c05c:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c05f:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c063:	89 04 24             	mov    %eax,(%esp)
 875c066:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c06c:	8b 55 18             	mov    0x18(%ebp),%edx
 875c06f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875c072:	89 74 24 04          	mov    %esi,0x4(%esp)
 875c076:	89 34 24             	mov    %esi,(%esp)
 875c079:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875c07d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c081:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875c084:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c08a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c08d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875c090:	03 55 18             	add    0x18(%ebp),%edx
 875c093:	03 7d d8             	add    -0x28(%ebp),%edi
 875c096:	8d 14 91             	lea    (%ecx,%edx,4),%edx
 875c099:	8b 0a                	mov    (%edx),%ecx
 875c09b:	01 cf                	add    %ecx,%edi
 875c09d:	03 7d e0             	add    -0x20(%ebp),%edi
 875c0a0:	8d 04 07             	lea    (%edi,%eax,1),%eax
 875c0a3:	39 c1                	cmp    %eax,%ecx
 875c0a5:	89 02                	mov    %eax,(%edx)
 875c0a7:	0f 86 a4 fe ff ff    	jbe    875bf51 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x191>
 875c0ad:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 875c0b1:	0f 86 9a fe ff ff    	jbe    875bf51 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x191>
 875c0b7:	8b 4a 04             	mov    0x4(%edx),%ecx
 875c0ba:	b8 01 00 00 00       	mov    $0x1,%eax
 875c0bf:	83 c1 01             	add    $0x1,%ecx
 875c0c2:	85 c9                	test   %ecx,%ecx
 875c0c4:	89 4a 04             	mov    %ecx,0x4(%edx)
 875c0c7:	0f 85 84 fe ff ff    	jne    875bf51 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x191>
 875c0cd:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 875c0d0:	eb 17                	jmp    875c0e9 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x329>
 875c0d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875c0d8:	8b 0c 82             	mov    (%edx,%eax,4),%ecx
 875c0db:	83 c1 01             	add    $0x1,%ecx
 875c0de:	85 c9                	test   %ecx,%ecx
 875c0e0:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 875c0e3:	0f 85 68 fe ff ff    	jne    875bf51 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x191>
 875c0e9:	83 c0 01             	add    $0x1,%eax
 875c0ec:	39 c6                	cmp    %eax,%esi
 875c0ee:	77 e8                	ja     875c0d8 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x318>
 875c0f0:	83 c4 4c             	add    $0x4c,%esp
 875c0f3:	5b                   	pop    %ebx
 875c0f4:	5e                   	pop    %esi
 875c0f5:	5f                   	pop    %edi
 875c0f6:	5d                   	pop    %ebp
 875c0f7:	c3                   	ret
 875c0f8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875c0fb:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 875c0fe:	8b 45 10             	mov    0x10(%ebp),%eax
 875c101:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875c105:	8b 55 08             	mov    0x8(%ebp),%edx
 875c108:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c10c:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c110:	89 14 24             	mov    %edx,(%esp)
 875c113:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875c119:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875c11c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 875c11f:	8b 75 08             	mov    0x8(%ebp),%esi
 875c122:	8b 45 14             	mov    0x14(%ebp),%eax
 875c125:	03 75 d8             	add    -0x28(%ebp),%esi
 875c128:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875c12c:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c130:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c134:	89 34 24             	mov    %esi,(%esp)
 875c137:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875c13d:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875c140:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875c143:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875c146:	8b 55 08             	mov    0x8(%ebp),%edx
 875c149:	c1 e1 02             	shl    $0x2,%ecx
 875c14c:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 875c14f:	01 cf                	add    %ecx,%edi
 875c151:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875c154:	89 44 24 10          	mov    %eax,0x10(%esp)
 875c158:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875c15c:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c160:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875c164:	89 0c 24             	mov    %ecx,(%esp)
 875c167:	e8 54 fc ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c16c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 875c173:	e9 68 fe ff ff       	jmp    875bfe0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x220>
 875c178:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875c17b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 875c17e:	8b 45 10             	mov    0x10(%ebp),%eax
 875c181:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875c185:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c188:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c18c:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c190:	89 0c 24             	mov    %ecx,(%esp)
 875c193:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875c199:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 875c19c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875c19f:	8b 75 08             	mov    0x8(%ebp),%esi
 875c1a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875c1a5:	03 75 d8             	add    -0x28(%ebp),%esi
 875c1a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c1ac:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875c1b0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c1b4:	89 34 24             	mov    %esi,(%esp)
 875c1b7:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875c1bd:	8b 45 18             	mov    0x18(%ebp),%eax
 875c1c0:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875c1c3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875c1c6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c1c9:	c1 e0 02             	shl    $0x2,%eax
 875c1cc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875c1cf:	01 c7                	add    %eax,%edi
 875c1d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c1d4:	89 54 24 10          	mov    %edx,0x10(%esp)
 875c1d8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875c1dc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c1e0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875c1e4:	89 04 24             	mov    %eax,(%esp)
 875c1e7:	e8 d4 fb ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c1ec:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 875c1f3:	e9 e8 fd ff ff       	jmp    875bfe0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x220>
 875c1f8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875c1fb:	8b 55 10             	mov    0x10(%ebp),%edx
 875c1fe:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 875c201:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c205:	8b 45 08             	mov    0x8(%ebp),%eax
 875c208:	89 54 24 08          	mov    %edx,0x8(%esp)
 875c20c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875c210:	89 04 24             	mov    %eax,(%esp)
 875c213:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875c219:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 875c21c:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 875c21f:	8b 75 08             	mov    0x8(%ebp),%esi
 875c222:	8b 45 14             	mov    0x14(%ebp),%eax
 875c225:	03 75 d8             	add    -0x28(%ebp),%esi
 875c228:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875c22c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c230:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c234:	89 34 24             	mov    %esi,(%esp)
 875c237:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875c23d:	8b 55 18             	mov    0x18(%ebp),%edx
 875c240:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875c243:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875c246:	8b 45 08             	mov    0x8(%ebp),%eax
 875c249:	c1 e2 02             	shl    $0x2,%edx
 875c24c:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875c24f:	01 d7                	add    %edx,%edi
 875c251:	8b 55 0c             	mov    0xc(%ebp),%edx
 875c254:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 875c258:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c25c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875c260:	89 14 24             	mov    %edx,(%esp)
 875c263:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875c267:	e8 54 fb ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c26c:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c26f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875c272:	03 45 d8             	add    -0x28(%ebp),%eax
 875c275:	89 74 24 08          	mov    %esi,0x8(%esp)
 875c279:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875c27d:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c281:	89 04 24             	mov    %eax,(%esp)
 875c284:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875c28a:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 875c291:	e9 4a fd ff ff       	jmp    875bfe0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x220>
 875c296:	66 90                	xchg   %ax,%ax
 875c298:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 875c29f:	e9 9c fb ff ff       	jmp    875be40 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x80>
 875c2a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c2a8:	c7 45 cc 03 00 00 00 	movl   $0x3,-0x34(%ebp)
 875c2af:	e9 8c fb ff ff       	jmp    875be40 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x80>
 875c2b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c2b8:	b8 01 00 00 00       	mov    $0x1,%eax
 875c2bd:	e9 b8 fb ff ff       	jmp    875be7a <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0xba>
 875c2c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875c2c8:	8b 45 14             	mov    0x14(%ebp),%eax
 875c2cb:	8b 55 10             	mov    0x10(%ebp),%edx
 875c2ce:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c2d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c2d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c2d9:	89 0c 24             	mov    %ecx,(%esp)
 875c2dc:	e8 4f d2 ff ff       	call   8759530 <_ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_>
 875c2e1:	e9 6b fc ff ff       	jmp    875bf51 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x191>
 875c2e6:	8b 75 08             	mov    0x8(%ebp),%esi
 875c2e9:	03 75 d8             	add    -0x28(%ebp),%esi
 875c2ec:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875c2ef:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 875c2f6:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 875c2fd:	e9 de fc ff ff       	jmp    875bfe0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j+0x220>
 875c302:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875c309:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RecursiveMultiply @ 0x875bdc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int) */

void TaoCrypt::RecursiveMultiply
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int local_38;
  int local_2c;
  int local_28;
  
  if (param_5 == 8) {
    PentiumOptimized::Multiply8(param_1,param_3,param_4);
    return;
  }
  if (param_5 == 4) {
    PentiumOptimized::Multiply4(param_1,param_3,param_4);
    return;
  }
  if (param_5 == 2) {
    Portable::Multiply2(param_1,param_3,param_4);
    return;
  }
  uVar2 = param_5 >> 1;
  puVar10 = param_3 + uVar2;
  puVar7 = param_3 + (uVar2 - 1);
  puVar8 = puVar10 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    if (uVar3 == 0) {
      local_38 = 0;
      goto LAB_0875be40;
    }
    uVar9 = *puVar7;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar8;
    if (uVar1 < uVar9) {
      local_38 = 3;
      goto LAB_0875be40;
    }
    puVar7 = puVar7 + -1;
    puVar8 = puVar8 + -1;
  } while (uVar1 <= uVar9);
  local_38 = -3;
LAB_0875be40:
  puVar7 = param_4 + uVar2;
  puVar8 = param_4 + (uVar2 - 1);
  puVar11 = puVar7 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    iVar4 = 0;
    if (uVar3 == 0) goto LAB_0875be7a;
    uVar9 = *puVar8;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar11;
    if (uVar1 < uVar9) {
      iVar4 = 1;
      goto LAB_0875be7a;
    }
    puVar8 = puVar8 + -1;
    puVar11 = puVar11 + -1;
  } while (uVar1 <= uVar9);
  iVar4 = -1;
LAB_0875be7a:
  iVar4 = iVar4 + local_38;
  if (iVar4 == -2) {
    (*s_pSub)(param_1,puVar10,param_3,uVar2);
    (*s_pSub)(param_1 + uVar2,param_4,puVar7,uVar2);
    local_28 = param_5 * 4;
    puVar8 = param_2 + param_5;
    RecursiveMultiply(param_2,puVar8,param_1,param_1 + uVar2,uVar2);
    local_2c = 0;
    goto LAB_0875bfe0;
  }
  if (iVar4 < -1) {
    if (iVar4 == -4) {
      (*s_pSub)(param_1,puVar10,param_3,uVar2);
      (*s_pSub)(param_1 + uVar2,param_4,puVar7,uVar2);
      local_28 = param_5 * 4;
      RecursiveMultiply(param_2,param_2 + param_5,param_1,param_1 + uVar2,uVar2);
      (*s_pSub)(param_2 + uVar2,param_2 + uVar2,param_1,uVar2);
      local_2c = -1;
      puVar8 = param_2 + param_5;
      goto LAB_0875bfe0;
    }
  }
  else {
    if (iVar4 == 2) {
      (*s_pSub)(param_1,param_3,puVar10,uVar2);
      (*s_pSub)(param_1 + uVar2,puVar7,param_4,uVar2);
      local_28 = param_5 * 4;
      puVar8 = param_2 + param_5;
      RecursiveMultiply(param_2,puVar8,param_1,param_1 + uVar2,uVar2);
      local_2c = 0;
      goto LAB_0875bfe0;
    }
    if (iVar4 == 4) {
      (*s_pSub)(param_1,puVar10,param_3,uVar2);
      puVar11 = param_1 + uVar2;
      (*s_pSub)(puVar11,param_4,puVar7,uVar2);
      local_28 = param_5 * 4;
      puVar8 = param_2 + param_5;
      RecursiveMultiply(param_2,puVar8,param_1,puVar11,uVar2);
      (*s_pSub)(param_2 + uVar2,param_2 + uVar2,puVar11,uVar2);
      local_2c = -1;
      goto LAB_0875bfe0;
    }
  }
  uVar3 = 0;
  if (param_5 == 0) {
    local_2c = 0;
    local_28 = 0;
    puVar8 = param_2;
  }
  else {
    do {
      param_2[uVar3] = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_5);
    local_28 = param_5 * 4;
    local_2c = 0;
    puVar8 = param_2 + param_5;
  }
LAB_0875bfe0:
  RecursiveMultiply(param_1,puVar8,param_3,param_4,uVar2);
  RecursiveMultiply((uint *)((int)param_1 + local_28),puVar8,puVar10,puVar7,uVar2);
  iVar4 = (*s_pAdd)(param_2,param_2,param_1,param_5);
  iVar5 = (*s_pAdd)(param_2,param_2,(uint *)((int)param_1 + local_28),param_5);
  iVar6 = (*s_pAdd)(param_1 + uVar2,param_1 + uVar2,param_2,param_5);
  puVar7 = param_1 + uVar2 + param_5;
  uVar9 = *puVar7;
  uVar3 = iVar4 + local_2c + uVar9 + iVar5 + iVar6;
  *puVar7 = uVar3;
  if ((uVar3 < uVar9) && (1 < uVar2)) {
    uVar3 = 1;
    uVar9 = puVar7[1] + 1;
    puVar7[1] = uVar9;
    while (uVar9 == 0) {
      uVar3 = uVar3 + 1;
      if (uVar2 <= uVar3) {
        return;
      }
      uVar9 = puVar7[uVar3] + 1;
      puVar7[uVar3] = uVar9;
    }
  }
  return;
}

```

---

## RecursiveMultiplyBottom

```asm
// === 0875c490 TaoCrypt::RecursiveMultiplyBottom  [0x0875c490-0x875c60f] ===
 875c490:	55                   	push   %ebp
 875c491:	89 e5                	mov    %esp,%ebp
 875c493:	83 ec 48             	sub    $0x48,%esp
 875c496:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875c499:	8b 7d 18             	mov    0x18(%ebp),%edi
 875c49c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875c49f:	8b 55 08             	mov    0x8(%ebp),%edx
 875c4a2:	e8 51 69 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875c4a7:	81 c3 f1 06 c1 00    	add    $0xc106f1,%ebx
 875c4ad:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875c4b0:	8b 75 0c             	mov    0xc(%ebp),%esi
 875c4b3:	83 ff 08             	cmp    $0x8,%edi
 875c4b6:	0f 84 d4 00 00 00    	je     875c590 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j+0x100>
 875c4bc:	83 ff 04             	cmp    $0x4,%edi
 875c4bf:	0f 84 f3 00 00 00    	je     875c5b8 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j+0x128>
 875c4c5:	83 ff 02             	cmp    $0x2,%edi
 875c4c8:	0f 84 12 01 00 00    	je     875c5e0 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j+0x150>
 875c4ce:	8b 45 14             	mov    0x14(%ebp),%eax
 875c4d1:	d1 ef                	shr    $1,%edi
 875c4d3:	89 14 24             	mov    %edx,(%esp)
 875c4d6:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875c4d9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 875c4dd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c4e1:	8b 45 10             	mov    0x10(%ebp),%eax
 875c4e4:	89 74 24 04          	mov    %esi,0x4(%esp)
 875c4e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c4ec:	e8 cf f8 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c4f1:	8d 0c bd 00 00 00 00 	lea    0x0(,%edi,4),%ecx
 875c4f8:	8d 04 0e             	lea    (%esi,%ecx,1),%eax
 875c4fb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875c4fe:	8b 45 14             	mov    0x14(%ebp),%eax
 875c501:	89 7c 24 10          	mov    %edi,0x10(%esp)
 875c505:	89 34 24             	mov    %esi,(%esp)
 875c508:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 875c50b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875c50f:	8b 45 10             	mov    0x10(%ebp),%eax
 875c512:	01 c8                	add    %ecx,%eax
 875c514:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c518:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875c51b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c51f:	e8 6c ff ff ff       	call   875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>
 875c524:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875c527:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875c52a:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875c52e:	89 74 24 08          	mov    %esi,0x8(%esp)
 875c532:	01 ca                	add    %ecx,%edx
 875c534:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c538:	89 14 24             	mov    %edx,(%esp)
 875c53b:	89 55 e0             	mov    %edx,-0x20(%ebp)
 875c53e:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c544:	8b 45 10             	mov    0x10(%ebp),%eax
 875c547:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 875c54a:	03 4d 14             	add    0x14(%ebp),%ecx
 875c54d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 875c551:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c555:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 875c558:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875c55c:	89 34 24             	mov    %esi,(%esp)
 875c55f:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c563:	e8 28 ff ff ff       	call   875c490 <_ZN8TaoCrypt23RecursiveMultiplyBottomEPjS0_PKjS2_j>
 875c568:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875c56b:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875c56f:	89 74 24 08          	mov    %esi,0x8(%esp)
 875c573:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c577:	89 14 24             	mov    %edx,(%esp)
 875c57a:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c580:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875c583:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875c586:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875c589:	89 ec                	mov    %ebp,%esp
 875c58b:	5d                   	pop    %ebp
 875c58c:	c3                   	ret
 875c58d:	8d 76 00             	lea    0x0(%esi),%esi
 875c590:	8b 45 14             	mov    0x14(%ebp),%eax
 875c593:	89 14 24             	mov    %edx,(%esp)
 875c596:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c59a:	8b 45 10             	mov    0x10(%ebp),%eax
 875c59d:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c5a1:	e8 fa f5 ff ff       	call   875bba0 <_ZN8TaoCrypt16PentiumOptimized15Multiply8BottomEPjPKjS3_>
 875c5a6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875c5a9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875c5ac:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875c5af:	89 ec                	mov    %ebp,%esp
 875c5b1:	5d                   	pop    %ebp
 875c5b2:	c3                   	ret
 875c5b3:	90                   	nop
 875c5b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c5b8:	8b 45 14             	mov    0x14(%ebp),%eax
 875c5bb:	89 14 24             	mov    %edx,(%esp)
 875c5be:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c5c2:	8b 45 10             	mov    0x10(%ebp),%eax
 875c5c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c5c9:	e8 b2 e7 ff ff       	call   875ad80 <_ZN8TaoCrypt8Portable15Multiply4BottomEPjPKjS3_>
 875c5ce:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875c5d1:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875c5d4:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875c5d7:	89 ec                	mov    %ebp,%esp
 875c5d9:	5d                   	pop    %ebp
 875c5da:	c3                   	ret
 875c5db:	90                   	nop
 875c5dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c5e0:	8b 45 14             	mov    0x14(%ebp),%eax
 875c5e3:	89 14 24             	mov    %edx,(%esp)
 875c5e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c5ea:	8b 45 10             	mov    0x10(%ebp),%eax
 875c5ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c5f1:	e8 6a d0 ff ff       	call   8759660 <_ZN8TaoCrypt8Portable15Multiply2BottomEPjPKjS3_>
 875c5f6:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875c5f9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875c5fc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875c5ff:	89 ec                	mov    %ebp,%esp
 875c601:	5d                   	pop    %ebp
 875c602:	c3                   	ret
 875c603:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875c609:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RecursiveMultiplyBottom @ 0x875c490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveMultiplyBottom(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int) */

void TaoCrypt::RecursiveMultiplyBottom
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_5 == 8) {
    PentiumOptimized::Multiply8Bottom(param_1,param_3,param_4);
    return;
  }
  if (param_5 != 4) {
    if (param_5 != 2) {
      uVar2 = param_5 >> 1;
      RecursiveMultiply(param_1,param_2,param_3,param_4,uVar2);
      RecursiveMultiplyBottom(param_2,param_2 + uVar2,param_3 + uVar2,param_4,uVar2);
      puVar1 = param_1 + uVar2;
      (*s_pAdd)(puVar1,puVar1,param_2,uVar2);
      RecursiveMultiplyBottom(param_2,param_2 + uVar2,param_3,param_4 + uVar2,uVar2);
      (*s_pAdd)(puVar1,puVar1,param_2,uVar2);
      return;
    }
    Portable::Multiply2Bottom(param_1,param_3,param_4);
    return;
  }
  Portable::Multiply4Bottom(param_1,param_3,param_4);
  return;
}

```

---

## RecursiveMultiplyTop

```asm
// === 0875d980 TaoCrypt::RecursiveMultiplyTop  [0x0875d980-0x875dfcf] ===
 875d980:	55                   	push   %ebp
 875d981:	89 e5                	mov    %esp,%ebp
 875d983:	57                   	push   %edi
 875d984:	56                   	push   %esi
 875d985:	53                   	push   %ebx
 875d986:	83 ec 5c             	sub    $0x5c,%esp
 875d989:	e8 6a 54 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d98e:	81 c3 0a f2 c0 00    	add    $0xc0f20a,%ebx
 875d994:	83 7d 1c 04          	cmpl   $0x4,0x1c(%ebp)
 875d998:	0f 84 9a 05 00 00    	je     875df38 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x5b8>
 875d99e:	83 7d 1c 02          	cmpl   $0x2,0x1c(%ebp)
 875d9a2:	0f 84 d1 05 00 00    	je     875df79 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x5f9>
 875d9a8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875d9ab:	8b 55 14             	mov    0x14(%ebp),%edx
 875d9ae:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875d9b1:	d1 e8                	shr    $1,%eax
 875d9b3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 875d9b6:	c1 e0 02             	shl    $0x2,%eax
 875d9b9:	01 c2                	add    %eax,%edx
 875d9bb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875d9be:	83 e8 04             	sub    $0x4,%eax
 875d9c1:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 875d9c4:	01 c1                	add    %eax,%ecx
 875d9c6:	01 c2                	add    %eax,%edx
 875d9c8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 875d9cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875d9ce:	66 90                	xchg   %ax,%ax
 875d9d0:	85 c0                	test   %eax,%eax
 875d9d2:	0f 84 30 05 00 00    	je     875df08 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x588>
 875d9d8:	8b 39                	mov    (%ecx),%edi
 875d9da:	83 e8 01             	sub    $0x1,%eax
 875d9dd:	8b 32                	mov    (%edx),%esi
 875d9df:	39 f7                	cmp    %esi,%edi
 875d9e1:	0f 87 41 05 00 00    	ja     875df28 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x5a8>
 875d9e7:	83 e9 04             	sub    $0x4,%ecx
 875d9ea:	83 ea 04             	sub    $0x4,%edx
 875d9ed:	39 f7                	cmp    %esi,%edi
 875d9ef:	73 df                	jae    875d9d0 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x50>
 875d9f1:	c7 45 cc fd ff ff ff 	movl   $0xfffffffd,-0x34(%ebp)
 875d9f8:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875d9fb:	03 4d d8             	add    -0x28(%ebp),%ecx
 875d9fe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875da01:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 875da04:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875da07:	8b 55 c8             	mov    -0x38(%ebp),%edx
 875da0a:	03 4d dc             	add    -0x24(%ebp),%ecx
 875da0d:	03 55 dc             	add    -0x24(%ebp),%edx
 875da10:	85 c0                	test   %eax,%eax
 875da12:	74 1e                	je     875da32 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0xb2>
 875da14:	8b 39                	mov    (%ecx),%edi
 875da16:	83 e8 01             	sub    $0x1,%eax
 875da19:	8b 32                	mov    (%edx),%esi
 875da1b:	39 f7                	cmp    %esi,%edi
 875da1d:	0f 87 f5 04 00 00    	ja     875df18 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x598>
 875da23:	83 e9 04             	sub    $0x4,%ecx
 875da26:	83 ea 04             	sub    $0x4,%edx
 875da29:	39 f7                	cmp    %esi,%edi
 875da2b:	73 e3                	jae    875da10 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x90>
 875da2d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 875da32:	03 45 cc             	add    -0x34(%ebp),%eax
 875da35:	83 f8 fe             	cmp    $0xfffffffe,%eax
 875da38:	0f 84 ea 03 00 00    	je     875de28 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x4a8>
 875da3e:	0f 8e ac 00 00 00    	jle    875daf0 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x170>
 875da44:	83 f8 02             	cmp    $0x2,%eax
 875da47:	0f 84 53 03 00 00    	je     875dda0 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x420>
 875da4d:	83 f8 04             	cmp    $0x4,%eax
 875da50:	0f 85 a3 00 00 00    	jne    875daf9 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x179>
 875da56:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875da59:	8b 55 14             	mov    0x14(%ebp),%edx
 875da5c:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 875da5f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875da63:	8b 45 08             	mov    0x8(%ebp),%eax
 875da66:	89 54 24 08          	mov    %edx,0x8(%esp)
 875da6a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875da6e:	89 04 24             	mov    %eax,(%esp)
 875da71:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875da77:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875da7a:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 875da7d:	8b 75 08             	mov    0x8(%ebp),%esi
 875da80:	8b 45 18             	mov    0x18(%ebp),%eax
 875da83:	03 75 d8             	add    -0x28(%ebp),%esi
 875da86:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875da8a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875da8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 875da92:	89 34 24             	mov    %esi,(%esp)
 875da95:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875da9b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875da9e:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875daa1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875daa4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875daa8:	89 0c 24             	mov    %ecx,(%esp)
 875daab:	8d 3c 91             	lea    (%ecx,%edx,4),%edi
 875daae:	8b 55 08             	mov    0x8(%ebp),%edx
 875dab1:	89 44 24 10          	mov    %eax,0x10(%esp)
 875dab5:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875dab9:	89 54 24 08          	mov    %edx,0x8(%esp)
 875dabd:	e8 fe e2 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875dac2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875dac5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875dac8:	03 4d d8             	add    -0x28(%ebp),%ecx
 875dacb:	89 74 24 08          	mov    %esi,0x8(%esp)
 875dacf:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 875dad2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875dad6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875dada:	89 0c 24             	mov    %ecx,(%esp)
 875dadd:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875dae3:	c7 45 cc ff ff ff ff 	movl   $0xffffffff,-0x34(%ebp)
 875daea:	eb 54                	jmp    875db40 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x1c0>
 875daec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875daf0:	83 f8 fc             	cmp    $0xfffffffc,%eax
 875daf3:	0f 84 6f 03 00 00    	je     875de68 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x4e8>
 875daf9:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875dafc:	31 c0                	xor    %eax,%eax
 875dafe:	85 c9                	test   %ecx,%ecx
 875db00:	0f 84 a2 04 00 00    	je     875dfa8 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x628>
 875db06:	8b 55 0c             	mov    0xc(%ebp),%edx
 875db09:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875db0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875db10:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
 875db17:	83 c0 01             	add    $0x1,%eax
 875db1a:	39 c1                	cmp    %eax,%ecx
 875db1c:	77 f2                	ja     875db10 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x190>
 875db1e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875db21:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875db24:	8b 75 08             	mov    0x8(%ebp),%esi
 875db27:	03 75 d8             	add    -0x28(%ebp),%esi
 875db2a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 875db31:	8d 3c 91             	lea    (%ecx,%edx,4),%edi
 875db34:	03 4d d8             	add    -0x28(%ebp),%ecx
 875db37:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 875db3a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875db40:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875db43:	8b 55 c8             	mov    -0x38(%ebp),%edx
 875db46:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 875db49:	89 3c 24             	mov    %edi,(%esp)
 875db4c:	89 44 24 10          	mov    %eax,0x10(%esp)
 875db50:	8b 45 08             	mov    0x8(%ebp),%eax
 875db53:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875db57:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875db5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875db5f:	e8 5c e2 ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875db64:	8b 4d 10             	mov    0x10(%ebp),%ecx
 875db67:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875db6a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875db6d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875db71:	01 c8                	add    %ecx,%eax
 875db73:	89 44 24 04          	mov    %eax,0x4(%esp)
 875db77:	8b 45 08             	mov    0x8(%ebp),%eax
 875db7a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875db7e:	89 04 24             	mov    %eax,(%esp)
 875db81:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875db87:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875db8a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875db8d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875db91:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875db95:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875db98:	8b 45 08             	mov    0x8(%ebp),%eax
 875db9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875db9f:	89 04 24             	mov    %eax,(%esp)
 875dba2:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875dba8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875dbab:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875dbae:	03 4d dc             	add    -0x24(%ebp),%ecx
 875dbb1:	89 75 dc             	mov    %esi,-0x24(%ebp)
 875dbb4:	8d 14 17             	lea    (%edi,%edx,1),%edx
 875dbb7:	89 45 d0             	mov    %eax,-0x30(%ebp)
 875dbba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875dbbd:	8d 76 00             	lea    0x0(%esi),%esi
 875dbc0:	85 c0                	test   %eax,%eax
 875dbc2:	0f 84 b8 01 00 00    	je     875dd80 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x400>
 875dbc8:	8b 39                	mov    (%ecx),%edi
 875dbca:	83 e8 01             	sub    $0x1,%eax
 875dbcd:	8b 32                	mov    (%edx),%esi
 875dbcf:	39 f7                	cmp    %esi,%edi
 875dbd1:	0f 87 a9 01 00 00    	ja     875dd80 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x400>
 875dbd7:	83 e9 04             	sub    $0x4,%ecx
 875dbda:	83 ea 04             	sub    $0x4,%edx
 875dbdd:	39 f7                	cmp    %esi,%edi
 875dbdf:	73 df                	jae    875dbc0 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x240>
 875dbe1:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875dbe4:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 875dbeb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875dbee:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875dbf1:	03 45 d0             	add    -0x30(%ebp),%eax
 875dbf4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 875dbfb:	8b 11                	mov    (%ecx),%edx
 875dbfd:	01 d0                	add    %edx,%eax
 875dbff:	03 45 dc             	add    -0x24(%ebp),%eax
 875dc02:	39 c2                	cmp    %eax,%edx
 875dc04:	89 01                	mov    %eax,(%ecx)
 875dc06:	0f 86 14 01 00 00    	jbe    875dd20 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x3a0>
 875dc0c:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 875dc10:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 875dc17:	0f 86 03 01 00 00    	jbe    875dd20 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x3a0>
 875dc1d:	8b 51 04             	mov    0x4(%ecx),%edx
 875dc20:	b8 01 00 00 00       	mov    $0x1,%eax
 875dc25:	83 c2 01             	add    $0x1,%edx
 875dc28:	85 d2                	test   %edx,%edx
 875dc2a:	89 51 04             	mov    %edx,0x4(%ecx)
 875dc2d:	0f 85 5d 01 00 00    	jne    875dd90 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x410>
 875dc33:	8b 7d e0             	mov    -0x20(%ebp),%edi
 875dc36:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875dc39:	eb 16                	jmp    875dc51 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x2d1>
 875dc3b:	90                   	nop
 875dc3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875dc40:	8b 14 81             	mov    (%ecx,%eax,4),%edx
 875dc43:	83 c2 01             	add    $0x1,%edx
 875dc46:	85 d2                	test   %edx,%edx
 875dc48:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875dc4b:	0f 85 3f 01 00 00    	jne    875dd90 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x410>
 875dc51:	83 c0 01             	add    $0x1,%eax
 875dc54:	39 c7                	cmp    %eax,%edi
 875dc56:	77 e8                	ja     875dc40 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x2c0>
 875dc58:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 875dc5f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875dc62:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 875dc65:	8b 45 08             	mov    0x8(%ebp),%eax
 875dc68:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875dc6c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875dc70:	89 44 24 04          	mov    %eax,0x4(%esp)
 875dc74:	89 04 24             	mov    %eax,(%esp)
 875dc77:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875dc7d:	8b 55 0c             	mov    0xc(%ebp),%edx
 875dc80:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875dc83:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875dc87:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875dc8a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875dc8d:	03 45 1c             	add    0x1c(%ebp),%eax
 875dc90:	8d 3c 82             	lea    (%edx,%eax,4),%edi
 875dc93:	8b 45 08             	mov    0x8(%ebp),%eax
 875dc96:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875dc9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875dc9e:	89 04 24             	mov    %eax,(%esp)
 875dca1:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875dca7:	89 c1                	mov    %eax,%ecx
 875dca9:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 875dcac:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875dcaf:	31 c0                	xor    %eax,%eax
 875dcb1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875dcb8:	8b 14 87             	mov    (%edi,%eax,4),%edx
 875dcbb:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875dcbe:	83 c0 01             	add    $0x1,%eax
 875dcc1:	39 c1                	cmp    %eax,%ecx
 875dcc3:	77 f3                	ja     875dcb8 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x338>
 875dcc5:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 875dcc8:	8b 06                	mov    (%esi),%eax
 875dcca:	8b 55 cc             	mov    -0x34(%ebp),%edx
 875dccd:	8d 14 10             	lea    (%eax,%edx,1),%edx
 875dcd0:	03 55 dc             	add    -0x24(%ebp),%edx
 875dcd3:	03 55 d8             	add    -0x28(%ebp),%edx
 875dcd6:	03 55 d4             	add    -0x2c(%ebp),%edx
 875dcd9:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 875dcdc:	39 c8                	cmp    %ecx,%eax
 875dcde:	89 0e                	mov    %ecx,(%esi)
 875dce0:	76 32                	jbe    875dd14 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x394>
 875dce2:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 875dce6:	76 2c                	jbe    875dd14 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x394>
 875dce8:	8b 56 04             	mov    0x4(%esi),%edx
 875dceb:	b8 01 00 00 00       	mov    $0x1,%eax
 875dcf0:	83 c2 01             	add    $0x1,%edx
 875dcf3:	85 d2                	test   %edx,%edx
 875dcf5:	89 56 04             	mov    %edx,0x4(%esi)
 875dcf8:	75 1a                	jne    875dd14 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x394>
 875dcfa:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875dcfd:	eb 0e                	jmp    875dd0d <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x38d>
 875dcff:	90                   	nop
 875dd00:	8b 14 86             	mov    (%esi,%eax,4),%edx
 875dd03:	83 c2 01             	add    $0x1,%edx
 875dd06:	85 d2                	test   %edx,%edx
 875dd08:	89 14 86             	mov    %edx,(%esi,%eax,4)
 875dd0b:	75 07                	jne    875dd14 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x394>
 875dd0d:	83 c0 01             	add    $0x1,%eax
 875dd10:	39 c1                	cmp    %eax,%ecx
 875dd12:	77 ec                	ja     875dd00 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x380>
 875dd14:	83 c4 5c             	add    $0x5c,%esp
 875dd17:	5b                   	pop    %ebx
 875dd18:	5e                   	pop    %esi
 875dd19:	5f                   	pop    %edi
 875dd1a:	5d                   	pop    %ebp
 875dd1b:	c3                   	ret
 875dd1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875dd20:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875dd23:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 875dd26:	8b 45 08             	mov    0x8(%ebp),%eax
 875dd29:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875dd2d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875dd31:	89 44 24 04          	mov    %eax,0x4(%esp)
 875dd35:	89 04 24             	mov    %eax,(%esp)
 875dd38:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875dd3e:	8b 55 0c             	mov    0xc(%ebp),%edx
 875dd41:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875dd44:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875dd48:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875dd4b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875dd4e:	03 45 1c             	add    0x1c(%ebp),%eax
 875dd51:	8d 3c 82             	lea    (%edx,%eax,4),%edi
 875dd54:	8b 45 08             	mov    0x8(%ebp),%eax
 875dd57:	89 7c 24 08          	mov    %edi,0x8(%esp)
 875dd5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875dd5f:	89 04 24             	mov    %eax,(%esp)
 875dd62:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875dd68:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875dd6b:	85 d2                	test   %edx,%edx
 875dd6d:	89 c1                	mov    %eax,%ecx
 875dd6f:	0f 85 34 ff ff ff    	jne    875dca9 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x329>
 875dd75:	e9 4e ff ff ff       	jmp    875dcc8 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x348>
 875dd7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875dd80:	8b 75 dc             	mov    -0x24(%ebp),%esi
 875dd83:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 875dd8a:	e9 5c fe ff ff       	jmp    875dbeb <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x26b>
 875dd8f:	90                   	nop
 875dd90:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 875dd97:	e9 c3 fe ff ff       	jmp    875dc5f <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x2df>
 875dd9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875dda0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875dda3:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 875dda6:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875dda9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875ddad:	8b 45 08             	mov    0x8(%ebp),%eax
 875ddb0:	89 54 24 08          	mov    %edx,0x8(%esp)
 875ddb4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875ddb8:	89 04 24             	mov    %eax,(%esp)
 875ddbb:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875ddc1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875ddc4:	8b 4d 18             	mov    0x18(%ebp),%ecx
 875ddc7:	8b 75 08             	mov    0x8(%ebp),%esi
 875ddca:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875ddcd:	03 75 d8             	add    -0x28(%ebp),%esi
 875ddd0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875ddd4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875ddd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 875dddc:	89 34 24             	mov    %esi,(%esp)
 875dddf:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875dde5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875dde8:	8b 55 1c             	mov    0x1c(%ebp),%edx
 875ddeb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875ddee:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875ddf2:	89 0c 24             	mov    %ecx,(%esp)
 875ddf5:	8d 3c 91             	lea    (%ecx,%edx,4),%edi
 875ddf8:	8b 55 08             	mov    0x8(%ebp),%edx
 875ddfb:	89 44 24 10          	mov    %eax,0x10(%esp)
 875ddff:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875de03:	89 54 24 08          	mov    %edx,0x8(%esp)
 875de07:	e8 b4 df ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875de0c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875de0f:	03 4d d8             	add    -0x28(%ebp),%ecx
 875de12:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 875de19:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 875de1c:	e9 1f fd ff ff       	jmp    875db40 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x1c0>
 875de21:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875de28:	8b 45 e0             	mov    -0x20(%ebp),%eax
 875de2b:	8b 55 14             	mov    0x14(%ebp),%edx
 875de2e:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 875de31:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875de35:	8b 45 08             	mov    0x8(%ebp),%eax
 875de38:	89 54 24 08          	mov    %edx,0x8(%esp)
 875de3c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875de40:	89 04 24             	mov    %eax,(%esp)
 875de43:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875de49:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875de4c:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 875de4f:	8b 75 08             	mov    0x8(%ebp),%esi
 875de52:	03 75 d8             	add    -0x28(%ebp),%esi
 875de55:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875de59:	8b 45 18             	mov    0x18(%ebp),%eax
 875de5c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875de60:	e9 73 ff ff ff       	jmp    875ddd8 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x458>
 875de65:	8d 76 00             	lea    0x0(%esi),%esi
 875de68:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875de6b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 875de6e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 875de71:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875de75:	8b 55 08             	mov    0x8(%ebp),%edx
 875de78:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875de7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 875de80:	89 14 24             	mov    %edx,(%esp)
 875de83:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875de89:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 875de8c:	8b 55 18             	mov    0x18(%ebp),%edx
 875de8f:	8b 75 08             	mov    0x8(%ebp),%esi
 875de92:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875de95:	03 75 d8             	add    -0x28(%ebp),%esi
 875de98:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875de9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 875dea0:	89 44 24 08          	mov    %eax,0x8(%esp)
 875dea4:	89 34 24             	mov    %esi,(%esp)
 875dea7:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875dead:	8b 45 0c             	mov    0xc(%ebp),%eax
 875deb0:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 875deb3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875deb6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875deba:	89 04 24             	mov    %eax,(%esp)
 875debd:	8d 3c 88             	lea    (%eax,%ecx,4),%edi
 875dec0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875dec3:	89 54 24 10          	mov    %edx,0x10(%esp)
 875dec7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875decb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875decf:	e8 ec de ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875ded4:	8b 45 0c             	mov    0xc(%ebp),%eax
 875ded7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 875deda:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875dedd:	03 45 d8             	add    -0x28(%ebp),%eax
 875dee0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875dee4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875dee7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875deeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 875deef:	89 04 24             	mov    %eax,(%esp)
 875def2:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875def8:	c7 45 cc ff ff ff ff 	movl   $0xffffffff,-0x34(%ebp)
 875deff:	e9 3c fc ff ff       	jmp    875db40 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x1c0>
 875df04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875df08:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 875df0f:	e9 e4 fa ff ff       	jmp    875d9f8 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x78>
 875df14:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875df18:	b8 01 00 00 00       	mov    $0x1,%eax
 875df1d:	e9 10 fb ff ff       	jmp    875da32 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0xb2>
 875df22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875df28:	c7 45 cc 03 00 00 00 	movl   $0x3,-0x34(%ebp)
 875df2f:	e9 c4 fa ff ff       	jmp    875d9f8 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x78>
 875df34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875df38:	8b 45 18             	mov    0x18(%ebp),%eax
 875df3b:	8b 55 14             	mov    0x14(%ebp),%edx
 875df3e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875df41:	89 44 24 08          	mov    %eax,0x8(%esp)
 875df45:	89 54 24 04          	mov    %edx,0x4(%esp)
 875df49:	89 0c 24             	mov    %ecx,(%esp)
 875df4c:	e8 1f d7 ff ff       	call   875b670 <_ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_>
 875df51:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875df54:	8b 45 0c             	mov    0xc(%ebp),%eax
 875df57:	8b 51 10             	mov    0x10(%ecx),%edx
 875df5a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875df5d:	83 c0 10             	add    $0x10,%eax
 875df60:	89 11                	mov    %edx,(%ecx)
 875df62:	8b 50 04             	mov    0x4(%eax),%edx
 875df65:	89 51 04             	mov    %edx,0x4(%ecx)
 875df68:	8b 50 08             	mov    0x8(%eax),%edx
 875df6b:	89 51 08             	mov    %edx,0x8(%ecx)
 875df6e:	8b 40 0c             	mov    0xc(%eax),%eax
 875df71:	89 41 0c             	mov    %eax,0xc(%ecx)
 875df74:	e9 9b fd ff ff       	jmp    875dd14 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x394>
 875df79:	8b 45 18             	mov    0x18(%ebp),%eax
 875df7c:	8b 55 14             	mov    0x14(%ebp),%edx
 875df7f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875df82:	89 44 24 08          	mov    %eax,0x8(%esp)
 875df86:	89 54 24 04          	mov    %edx,0x4(%esp)
 875df8a:	89 0c 24             	mov    %ecx,(%esp)
 875df8d:	e8 9e b5 ff ff       	call   8759530 <_ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_>
 875df92:	8b 55 0c             	mov    0xc(%ebp),%edx
 875df95:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875df98:	8b 42 08             	mov    0x8(%edx),%eax
 875df9b:	89 01                	mov    %eax,(%ecx)
 875df9d:	8b 42 0c             	mov    0xc(%edx),%eax
 875dfa0:	89 41 04             	mov    %eax,0x4(%ecx)
 875dfa3:	e9 6c fd ff ff       	jmp    875dd14 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x394>
 875dfa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 875dfab:	03 45 d8             	add    -0x28(%ebp),%eax
 875dfae:	8b 75 08             	mov    0x8(%ebp),%esi
 875dfb1:	03 75 d8             	add    -0x28(%ebp),%esi
 875dfb4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 875dfb7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 875dfba:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 875dfc1:	e9 7a fb ff ff       	jmp    875db40 <_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j+0x1c0>
 875dfc6:	8d 76 00             	lea    0x0(%esi),%esi
 875dfc9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RecursiveMultiplyTop @ 0x875d980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveMultiplyTop(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int const*, unsigned int) */

void TaoCrypt::RecursiveMultiplyTop
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int local_38;
  uint *local_30;
  int local_2c;
  int local_28;
  
  if (param_6 == 4) {
    PentiumOptimized::Multiply4(param_2,param_4,param_5);
    *param_1 = param_2[4];
    param_1[1] = param_2[5];
    param_1[2] = param_2[6];
    param_1[3] = param_2[7];
    return;
  }
  if (param_6 == 2) {
    Portable::Multiply2(param_2,param_4,param_5);
    *param_1 = param_2[2];
    param_1[1] = param_2[3];
    return;
  }
  uVar2 = param_6 >> 1;
  puVar9 = param_4 + uVar2;
  puVar8 = param_4 + (uVar2 - 1);
  puVar7 = puVar9 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    if (uVar3 == 0) {
      local_38 = 0;
      goto LAB_0875d9f8;
    }
    uVar6 = *puVar8;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar7;
    if (uVar1 < uVar6) {
      local_38 = 3;
      goto LAB_0875d9f8;
    }
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -1;
  } while (uVar1 <= uVar6);
  local_38 = -3;
LAB_0875d9f8:
  puVar8 = param_5 + uVar2;
  puVar7 = param_5 + (uVar2 - 1);
  puVar10 = puVar8 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    iVar4 = 0;
    if (uVar3 == 0) goto LAB_0875da32;
    uVar6 = *puVar7;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar10;
    if (uVar1 < uVar6) {
      iVar4 = 1;
      goto LAB_0875da32;
    }
    puVar7 = puVar7 + -1;
    puVar10 = puVar10 + -1;
  } while (uVar1 <= uVar6);
  iVar4 = -1;
LAB_0875da32:
  iVar4 = iVar4 + local_38;
  if (iVar4 == -2) {
    (*s_pSub)(param_1,puVar9,param_4,uVar2);
    puVar7 = param_5;
    param_5 = puVar8;
LAB_0875ddd8:
    (*s_pSub)(param_1 + uVar2,puVar7,param_5,uVar2);
    puVar7 = param_2 + param_6;
    RecursiveMultiply(param_2,puVar7,param_1,param_1 + uVar2,uVar2);
    local_38 = 0;
  }
  else if (iVar4 < -1) {
    if (iVar4 == -4) {
      (*s_pSub)(param_1,puVar9,param_4,uVar2);
      (*s_pSub)(param_1 + uVar2,param_5,puVar8,uVar2);
      puVar7 = param_2 + param_6;
      RecursiveMultiply(param_2,puVar7,param_1,param_1 + uVar2,uVar2);
      (*s_pSub)(param_2 + uVar2,param_2 + uVar2,param_1,uVar2);
      local_38 = -1;
    }
    else {
LAB_0875daf9:
      uVar3 = 0;
      if (param_6 == 0) {
        local_38 = 0;
        puVar7 = param_2;
      }
      else {
        do {
          param_2[uVar3] = 0;
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_6);
        local_38 = 0;
        puVar7 = param_2 + param_6;
      }
    }
  }
  else {
    if (iVar4 == 2) {
      (*s_pSub)(param_1,param_4,puVar9,uVar2);
      puVar7 = puVar8;
      goto LAB_0875ddd8;
    }
    if (iVar4 != 4) goto LAB_0875daf9;
    (*s_pSub)(param_1,puVar9,param_4,uVar2);
    puVar7 = param_1 + uVar2;
    (*s_pSub)(puVar7,param_5,puVar8,uVar2);
    RecursiveMultiply(param_2,param_2 + param_6,param_1,puVar7,uVar2);
    (*s_pSub)(param_2 + uVar2,param_2 + uVar2,puVar7,uVar2);
    local_38 = -1;
    puVar7 = param_2 + param_6;
  }
  local_30 = param_2 + uVar2;
  puVar10 = param_1 + uVar2;
  RecursiveMultiply(puVar7,param_1,puVar9,puVar8,uVar2);
  iVar4 = (*s_pSub)(param_1,param_3 + uVar2,param_3,uVar2);
  iVar5 = (*s_pSub)(param_1,param_1,param_2,uVar2);
  puVar8 = param_1 + (uVar2 - 1);
  puVar7 = puVar7 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    if (uVar3 == 0) {
LAB_0875dd80:
      local_28 = 0;
      goto LAB_0875dbeb;
    }
    uVar6 = *puVar8;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar7;
    if (uVar1 < uVar6) goto LAB_0875dd80;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -1;
  } while (uVar1 <= uVar6);
  local_28 = 1;
LAB_0875dbeb:
  local_2c = 0;
  uVar3 = *param_1;
  uVar6 = iVar4 + iVar5 + uVar3 + local_28;
  *param_1 = uVar6;
  if ((uVar6 < uVar3) && (local_2c = 1, 1 < uVar2)) {
    uVar3 = 1;
    uVar6 = param_1[1] + 1;
    param_1[1] = uVar6;
    while (uVar6 == 0) {
      uVar3 = uVar3 + 1;
      if (uVar2 <= uVar3) {
        local_2c = 1;
        goto LAB_0875dc5f;
      }
      uVar6 = param_1[uVar3] + 1;
      param_1[uVar3] = uVar6;
    }
    local_2c = 0;
LAB_0875dc5f:
    local_30 = (uint *)(*s_pAdd)(param_1,param_1,local_30,uVar2);
    puVar8 = param_2 + uVar2 + param_6;
    iVar4 = (*s_pAdd)(param_1,param_1,puVar8,uVar2);
  }
  else {
    local_30 = (uint *)(*s_pAdd)(param_1,param_1,local_30,uVar2);
    puVar8 = param_2 + uVar2 + param_6;
    iVar4 = (*s_pAdd)(param_1,param_1,puVar8,uVar2);
    if (uVar2 == 0) goto LAB_0875dcc8;
  }
  uVar3 = 0;
  do {
    puVar10[uVar3] = puVar8[uVar3];
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar2);
LAB_0875dcc8:
  uVar6 = *puVar10;
  uVar3 = uVar6 + local_38 + local_28 + local_2c + (int)local_30 + iVar4;
  *puVar10 = uVar3;
  if ((uVar3 < uVar6) && (1 < uVar2)) {
    uVar3 = 1;
    uVar6 = puVar10[1] + 1;
    puVar10[1] = uVar6;
    while ((uVar6 == 0 && (uVar3 = uVar3 + 1, uVar3 < uVar2))) {
      uVar6 = puVar10[uVar3] + 1;
      puVar10[uVar3] = uVar6;
    }
  }
  return;
}

```

---

## RecursiveSquare

```asm
// === 0875c310 TaoCrypt::RecursiveSquare  [0x0875c310-0x875c48f] ===
 875c310:	55                   	push   %ebp
 875c311:	89 e5                	mov    %esp,%ebp
 875c313:	57                   	push   %edi
 875c314:	56                   	push   %esi
 875c315:	53                   	push   %ebx
 875c316:	83 ec 5c             	sub    $0x5c,%esp
 875c319:	8b 7d 14             	mov    0x14(%ebp),%edi
 875c31c:	e8 d7 6a fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875c321:	81 c3 77 08 c1 00    	add    $0xc10877,%ebx
 875c327:	8b 45 10             	mov    0x10(%ebp),%eax
 875c32a:	83 ff 04             	cmp    $0x4,%edi
 875c32d:	0f 84 1d 01 00 00    	je     875c450 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x140>
 875c333:	83 ff 02             	cmp    $0x2,%edi
 875c336:	0f 84 34 01 00 00    	je     875c470 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x160>
 875c33c:	8b 55 0c             	mov    0xc(%ebp),%edx
 875c33f:	8d 0c bd 00 00 00 00 	lea    0x0(,%edi,4),%ecx
 875c346:	89 fe                	mov    %edi,%esi
 875c348:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 875c34b:	d1 ee                	shr    $1,%esi
 875c34d:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c351:	89 45 d8             	mov    %eax,-0x28(%ebp)
 875c354:	01 ca                	add    %ecx,%edx
 875c356:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c359:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c35d:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875c360:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875c364:	89 0c 24             	mov    %ecx,(%esp)
 875c367:	e8 a4 ff ff ff       	call   875c310 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj>
 875c36c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875c36f:	8d 0c b5 00 00 00 00 	lea    0x0(,%esi,4),%ecx
 875c376:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 875c379:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875c37c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 875c380:	01 c1                	add    %eax,%ecx
 875c382:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 875c385:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c389:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c38c:	03 4d e0             	add    -0x20(%ebp),%ecx
 875c38f:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c393:	89 0c 24             	mov    %ecx,(%esp)
 875c396:	e8 75 ff ff ff       	call   875c310 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj>
 875c39b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875c39e:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 875c3a1:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875c3a4:	89 74 24 10          	mov    %esi,0x10(%esp)
 875c3a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c3ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c3af:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 875c3b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c3b7:	89 04 24             	mov    %eax,(%esp)
 875c3ba:	e8 01 fa ff ff       	call   875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>
 875c3bf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 875c3c2:	8b 55 08             	mov    0x8(%ebp),%edx
 875c3c5:	03 55 e4             	add    -0x1c(%ebp),%edx
 875c3c8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875c3cc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 875c3d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c3d4:	89 14 24             	mov    %edx,(%esp)
 875c3d7:	89 55 dc             	mov    %edx,-0x24(%ebp)
 875c3da:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c3e0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 875c3e3:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 875c3e7:	8d 3c 3e             	lea    (%esi,%edi,1),%edi
 875c3ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 875c3ee:	89 14 24             	mov    %edx,(%esp)
 875c3f1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 875c3f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 875c3f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c3fb:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875c401:	8b 4d 08             	mov    0x8(%ebp),%ecx
 875c404:	03 45 e4             	add    -0x1c(%ebp),%eax
 875c407:	8d 14 b9             	lea    (%ecx,%edi,4),%edx
 875c40a:	8b 0a                	mov    (%edx),%ecx
 875c40c:	01 c8                	add    %ecx,%eax
 875c40e:	39 c1                	cmp    %eax,%ecx
 875c410:	89 02                	mov    %eax,(%edx)
 875c412:	76 30                	jbe    875c444 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x134>
 875c414:	83 fe 01             	cmp    $0x1,%esi
 875c417:	76 2b                	jbe    875c444 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x134>
 875c419:	8b 4a 04             	mov    0x4(%edx),%ecx
 875c41c:	b8 01 00 00 00       	mov    $0x1,%eax
 875c421:	83 c1 01             	add    $0x1,%ecx
 875c424:	85 c9                	test   %ecx,%ecx
 875c426:	89 4a 04             	mov    %ecx,0x4(%edx)
 875c429:	74 12                	je     875c43d <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x12d>
 875c42b:	eb 17                	jmp    875c444 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x134>
 875c42d:	8d 76 00             	lea    0x0(%esi),%esi
 875c430:	8b 0c 82             	mov    (%edx,%eax,4),%ecx
 875c433:	83 c1 01             	add    $0x1,%ecx
 875c436:	85 c9                	test   %ecx,%ecx
 875c438:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 875c43b:	75 07                	jne    875c444 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x134>
 875c43d:	83 c0 01             	add    $0x1,%eax
 875c440:	39 c6                	cmp    %eax,%esi
 875c442:	77 ec                	ja     875c430 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj+0x120>
 875c444:	83 c4 5c             	add    $0x5c,%esp
 875c447:	5b                   	pop    %ebx
 875c448:	5e                   	pop    %esi
 875c449:	5f                   	pop    %edi
 875c44a:	5d                   	pop    %ebp
 875c44b:	c3                   	ret
 875c44c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c450:	89 44 24 08          	mov    %eax,0x8(%esp)
 875c454:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c458:	8b 45 08             	mov    0x8(%ebp),%eax
 875c45b:	89 04 24             	mov    %eax,(%esp)
 875c45e:	e8 0d f2 ff ff       	call   875b670 <_ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_>
 875c463:	83 c4 5c             	add    $0x5c,%esp
 875c466:	5b                   	pop    %ebx
 875c467:	5e                   	pop    %esi
 875c468:	5f                   	pop    %edi
 875c469:	5d                   	pop    %ebp
 875c46a:	c3                   	ret
 875c46b:	90                   	nop
 875c46c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875c470:	8b 55 08             	mov    0x8(%ebp),%edx
 875c473:	89 44 24 04          	mov    %eax,0x4(%esp)
 875c477:	89 14 24             	mov    %edx,(%esp)
 875c47a:	e8 11 d7 ff ff       	call   8759b90 <_ZN8TaoCrypt8Portable7Square2EPjPKj>
 875c47f:	83 c4 5c             	add    $0x5c,%esp
 875c482:	5b                   	pop    %ebx
 875c483:	5e                   	pop    %esi
 875c484:	5f                   	pop    %edi
 875c485:	5d                   	pop    %ebp
 875c486:	c3                   	ret
 875c487:	89 f6                	mov    %esi,%esi
 875c489:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RecursiveSquare @ 0x875c310

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveSquare(unsigned int*, unsigned int*, unsigned int const*, unsigned int) */

void TaoCrypt::RecursiveSquare(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_4 == 4) {
    PentiumOptimized::Multiply4(param_1,param_3,param_3);
    return;
  }
  if (param_4 != 2) {
    uVar6 = param_4 >> 1;
    puVar5 = param_2 + param_4;
    RecursiveSquare(param_1,puVar5,param_3,uVar6);
    RecursiveSquare(param_1 + param_4,puVar5,param_3 + uVar6,uVar6);
    RecursiveMultiply(param_2,puVar5,param_3,param_3 + uVar6,uVar6);
    puVar5 = param_1 + uVar6;
    iVar1 = (*s_pAdd)(puVar5,puVar5,param_2,param_4);
    iVar2 = (*s_pAdd)(puVar5,puVar5,param_2,param_4);
    puVar5 = param_1 + uVar6 + param_4;
    uVar4 = *puVar5;
    uVar3 = iVar2 + iVar1 + uVar4;
    *puVar5 = uVar3;
    if ((uVar3 < uVar4) && (1 < uVar6)) {
      uVar4 = 1;
      uVar3 = puVar5[1] + 1;
      puVar5[1] = uVar3;
      while ((uVar3 == 0 && (uVar4 = uVar4 + 1, uVar4 < uVar6))) {
        uVar3 = puVar5[uVar4] + 1;
        puVar5[uVar4] = uVar3;
      }
    }
    return;
  }
  Portable::Square2(param_1,param_3);
  return;
}

```

---

## SSL_Decrypt

```asm
// === 08767e50 TaoCrypt::SSL_Decrypt  [0x08767e50-0x8767fff] ===
 8767e50:	55                   	push   %ebp
 8767e51:	89 e5                	mov    %esp,%ebp
 8767e53:	57                   	push   %edi
 8767e54:	31 ff                	xor    %edi,%edi
 8767e56:	56                   	push   %esi
 8767e57:	53                   	push   %ebx
 8767e58:	e8 9b af fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767e5d:	81 c3 3b 4d c0 00    	add    $0xc04d3b,%ebx
 8767e63:	83 ec 5c             	sub    $0x5c,%esp
 8767e66:	8b 45 08             	mov    0x8(%ebp),%eax
 8767e69:	89 04 24             	mov    %eax,(%esp)
 8767e6c:	e8 6f 6d ff ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 8767e71:	8d 70 06             	lea    0x6(%eax),%esi
 8767e74:	c1 ee 03             	shr    $0x3,%esi
 8767e77:	85 f6                	test   %esi,%esi
 8767e79:	0f 85 49 01 00 00    	jne    8767fc8 <_ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh+0x178>
 8767e7f:	89 74 24 08          	mov    %esi,0x8(%esp)
 8767e83:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8767e8a:	00 
 8767e8b:	89 3c 24             	mov    %edi,(%esp)
 8767e8e:	e8 2d 5e 91 ff       	call   807dcc0 <memset@plt>
 8767e93:	8b 55 08             	mov    0x8(%ebp),%edx
 8767e96:	89 14 24             	mov    %edx,(%esp)
 8767e99:	e8 92 6d ff ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8767e9e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8767ea5:	00 
 8767ea6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767eaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8767ead:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767eb1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8767eb4:	89 04 24             	mov    %eax,(%esp)
 8767eb7:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8767eba:	e8 41 94 ff ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 8767ebf:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8767ec2:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8767ec5:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8767ec8:	89 14 24             	mov    %edx,(%esp)
 8767ecb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767ecf:	8b 45 08             	mov    0x8(%ebp),%eax
 8767ed2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767ed6:	e8 25 ff ff ff       	call   8767e00 <_ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE>
 8767edb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8767ede:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8767ee1:	c1 e0 02             	shl    $0x2,%eax
 8767ee4:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8767ee7:	83 ec 04             	sub    $0x4,%esp
 8767eea:	89 14 24             	mov    %edx,(%esp)
 8767eed:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767ef1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8767ef8:	00 
 8767ef9:	e8 c2 5d 91 ff       	call   807dcc0 <memset@plt>
 8767efe:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8767f01:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8767f06:	89 14 24             	mov    %edx,(%esp)
 8767f09:	e8 12 f8 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8767f0e:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8767f11:	89 14 24             	mov    %edx,(%esp)
 8767f14:	e8 17 6d ff ff       	call   875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>
 8767f19:	39 f0                	cmp    %esi,%eax
 8767f1b:	0f 87 bf 00 00 00    	ja     8767fe0 <_ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh+0x190>
 8767f21:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8767f24:	89 74 24 08          	mov    %esi,0x8(%esp)
 8767f28:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8767f2c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8767f33:	00 
 8767f34:	89 14 24             	mov    %edx,(%esp)
 8767f37:	e8 d4 8f ff ff       	call   8760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>
 8767f3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8767f3f:	89 04 24             	mov    %eax,(%esp)
 8767f42:	e8 99 6c ff ff       	call   875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>
 8767f47:	8b 55 10             	mov    0x10(%ebp),%edx
 8767f4a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8767f4e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8767f52:	83 e8 01             	sub    $0x1,%eax
 8767f55:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767f59:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8767f5c:	89 04 24             	mov    %eax,(%esp)
 8767f5f:	e8 ac fa ff ff       	call   8767a10 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh>
 8767f64:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8767f67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8767f6e:	00 
 8767f6f:	89 14 24             	mov    %edx,(%esp)
 8767f72:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8767f75:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8767f78:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8767f7b:	c1 e0 02             	shl    $0x2,%eax
 8767f7e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8767f82:	e8 39 5d 91 ff       	call   807dcc0 <memset@plt>
 8767f87:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8767f8a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8767f8f:	89 14 24             	mov    %edx,(%esp)
 8767f92:	e8 89 f7 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8767f97:	89 74 24 08          	mov    %esi,0x8(%esp)
 8767f9b:	89 3c 24             	mov    %edi,(%esp)
 8767f9e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8767fa5:	00 
 8767fa6:	e8 15 5d 91 ff       	call   807dcc0 <memset@plt>
 8767fab:	89 3c 24             	mov    %edi,(%esp)
 8767fae:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8767fb3:	e8 68 f7 ff ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8767fb8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8767fbb:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8767fbe:	5b                   	pop    %ebx
 8767fbf:	5e                   	pop    %esi
 8767fc0:	5f                   	pop    %edi
 8767fc1:	5d                   	pop    %ebp
 8767fc2:	c3                   	ret
 8767fc3:	90                   	nop
 8767fc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8767fc8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8767fcd:	89 34 24             	mov    %esi,(%esp)
 8767fd0:	e8 bb f7 ff ff       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8767fd5:	89 c7                	mov    %eax,%edi
 8767fd7:	e9 a3 fe ff ff       	jmp    8767e7f <_ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh+0x2f>
 8767fdc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8767fe0:	e8 7b 78 ff ff       	call   875f860 <_ZN8TaoCrypt7Integer4ZeroEv>
 8767fe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767fe9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8767fec:	89 04 24             	mov    %eax,(%esp)
 8767fef:	e8 6c 84 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8767ff4:	e9 28 ff ff ff       	jmp    8767f21 <_ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh+0xd1>
 8767ff9:	90                   	nop
 8767ffa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::SSL_Decrypt @ 0x8767e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SSL_Decrypt(TaoCrypt::RSA_PublicKey const&, unsigned char const*, unsigned char*) */

undefined4 TaoCrypt::SSL_Decrypt(RSA_PublicKey *param_1,uchar *param_2,uchar *param_3)

{
  int iVar1;
  undefined4 uVar2;
  Integer *pIVar3;
  uint __n;
  uchar *__s;
  uint in_stack_ffffff98;
  uint uVar4;
  int local_40;
  void *local_3c;
  int local_30;
  void *local_2c;
  RSA_BlockType1 local_1d [9];
  undefined4 uStack_14;
  
  __s = (uchar *)0x0;
  uStack_14 = 0x8767e5d;
  iVar1 = Integer::BitCount((Integer *)param_1);
  __n = iVar1 + 6U >> 3;
  if (__n != 0) {
    __s = operator_new__(__n,in_stack_ffffff98 & 0xffffff00);
  }
  memset(__s,0,__n);
  uVar2 = Integer::ByteCount((Integer *)param_1);
  Integer::Integer((Integer *)&local_40,param_2,uVar2,0);
  RSA_PublicKey::ApplyFunction((Integer *)&local_30);
  uVar4 = 0;
  memset(local_3c,0,local_40 << 2);
  operator_delete__(local_3c,uVar4 & 0xffffff00);
  uVar4 = Integer::ByteCount((Integer *)&local_30);
  if (__n < uVar4) {
    pIVar3 = (Integer *)Integer::Zero();
    Integer::operator=((Integer *)&local_30,pIVar3);
  }
  Integer::Encode((Integer *)&local_30,__s,__n,0);
  iVar1 = Integer::BitCount((Integer *)param_1);
  uVar2 = RSA_BlockType1::UnPad(local_1d,__s,iVar1 - 1,param_3);
  uVar4 = 0;
  memset(local_2c,0,local_30 << 2);
  operator_delete__(local_2c,uVar4 & 0xffffff00);
  uVar4 = 0;
  memset(__s,0,__n);
  operator_delete__(__s,uVar4 & 0xffffff00);
  return uVar2;
}

```

---

## SetLength

```asm
// === 087544e0 TaoCrypt::SetLength  [0x087544e0-0x875456f] ===
 87544e0:	55                   	push   %ebp
 87544e1:	89 e5                	mov    %esp,%ebp
 87544e3:	83 ec 38             	sub    $0x38,%esp
 87544e6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87544e9:	8b 75 08             	mov    0x8(%ebp),%esi
 87544ec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87544ef:	e8 04 e9 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87544f4:	81 c3 a4 86 c1 00    	add    $0xc186a4,%ebx
 87544fa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87544fd:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8754500:	83 fe 7f             	cmp    $0x7f,%esi
 8754503:	77 1b                	ja     8754520 <_ZN8TaoCrypt9SetLengthEjPh+0x40>
 8754505:	89 f0                	mov    %esi,%eax
 8754507:	88 07                	mov    %al,(%edi)
 8754509:	b8 01 00 00 00       	mov    $0x1,%eax
 875450e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8754511:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8754514:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8754517:	89 ec                	mov    %ebp,%esp
 8754519:	5d                   	pop    %ebp
 875451a:	c3                   	ret
 875451b:	90                   	nop
 875451c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8754520:	89 34 24             	mov    %esi,(%esp)
 8754523:	e8 d8 2f 01 00       	call   8767500 <_ZN8TaoCrypt13BytePrecisionEj>
 8754528:	83 c8 80             	or     $0xffffff80,%eax
 875452b:	88 07                	mov    %al,(%edi)
 875452d:	89 34 24             	mov    %esi,(%esp)
 8754530:	e8 cb 2f 01 00       	call   8767500 <_ZN8TaoCrypt13BytePrecisionEj>
 8754535:	89 c2                	mov    %eax,%edx
 8754537:	b8 01 00 00 00       	mov    $0x1,%eax
 875453c:	85 d2                	test   %edx,%edx
 875453e:	74 ce                	je     875450e <_ZN8TaoCrypt9SetLengthEjPh+0x2e>
 8754540:	8d 0c d5 f8 ff ff ff 	lea    -0x8(,%edx,8),%ecx
 8754547:	83 c2 01             	add    $0x1,%edx
 875454a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875454d:	8d 76 00             	lea    0x0(%esi),%esi
 8754550:	89 f2                	mov    %esi,%edx
 8754552:	d3 ea                	shr    %cl,%edx
 8754554:	83 e9 08             	sub    $0x8,%ecx
 8754557:	88 14 07             	mov    %dl,(%edi,%eax,1)
 875455a:	83 c0 01             	add    $0x1,%eax
 875455d:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8754560:	75 ee                	jne    8754550 <_ZN8TaoCrypt9SetLengthEjPh+0x70>
 8754562:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8754565:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8754568:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875456b:	89 ec                	mov    %ebp,%esp
 875456d:	5d                   	pop    %ebp
 875456e:	c3                   	ret
 875456f:	90                   	nop

```

```c
// TaoCrypt::SetLength @ 0x87544e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SetLength(unsigned int, unsigned char*) */

int TaoCrypt::SetLength(uint param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 0x80) {
    *param_2 = (uchar)param_1;
  }
  else {
    bVar1 = BytePrecision(param_1);
    *param_2 = bVar1 | 0x80;
    iVar2 = BytePrecision(param_1);
    iVar3 = 1;
    if (iVar2 != 0) {
      iVar4 = iVar2 * 8;
      do {
        iVar4 = iVar4 + -8;
        param_2[iVar3] = (uchar)(param_1 >> ((byte)iVar4 & 0x1f));
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar2 + 1);
      return iVar3;
    }
  }
  return 1;
}

```

---

## SetSequence

```asm
// === 08754570 TaoCrypt::SetSequence  [0x08754570-0x87545af] ===
 8754570:	55                   	push   %ebp
 8754571:	89 e5                	mov    %esp,%ebp
 8754573:	53                   	push   %ebx
 8754574:	83 ec 14             	sub    $0x14,%esp
 8754577:	8b 45 0c             	mov    0xc(%ebp),%eax
 875457a:	e8 79 e8 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875457f:	81 c3 19 86 c1 00    	add    $0xc18619,%ebx
 8754585:	c6 00 30             	movb   $0x30,(%eax)
 8754588:	83 c0 01             	add    $0x1,%eax
 875458b:	89 44 24 04          	mov    %eax,0x4(%esp)
 875458f:	8b 45 08             	mov    0x8(%ebp),%eax
 8754592:	89 04 24             	mov    %eax,(%esp)
 8754595:	e8 46 ff ff ff       	call   87544e0 <_ZN8TaoCrypt9SetLengthEjPh>
 875459a:	83 c4 14             	add    $0x14,%esp
 875459d:	5b                   	pop    %ebx
 875459e:	5d                   	pop    %ebp
 875459f:	83 c0 01             	add    $0x1,%eax
 87545a2:	c3                   	ret
 87545a3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87545a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::SetSequence @ 0x8754570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SetSequence(unsigned int, unsigned char*) */

int TaoCrypt::SetSequence(uint param_1,uchar *param_2)

{
  int iVar1;
  
  *param_2 = '0';
  iVar1 = SetLength(param_1,param_2 + 1);
  return iVar1 + 1;
}

```

---

## Transform256

```asm
// === 0876d4a0 TaoCrypt::Transform256  [0x0876d4a0-0x876e34f] ===
 876d4a0:	55                   	push   %ebp
 876d4a1:	89 e5                	mov    %esp,%ebp
 876d4a3:	57                   	push   %edi
 876d4a4:	56                   	push   %esi
 876d4a5:	53                   	push   %ebx
 876d4a6:	81 ec 94 00 00 00    	sub    $0x94,%esp
 876d4ac:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 876d4b2:	89 c2                	mov    %eax,%edx
 876d4b4:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 876d4ba:	8b 00                	mov    (%eax),%eax
 876d4bc:	89 d1                	mov    %edx,%ecx
 876d4be:	e8 35 59 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876d4c3:	81 c3 d5 f6 bf 00    	add    $0xbff6d5,%ebx
 876d4c9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 876d4cc:	8b 42 04             	mov    0x4(%edx),%eax
 876d4cf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 876d4d2:	8b 42 08             	mov    0x8(%edx),%eax
 876d4d5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 876d4d8:	8b 42 0c             	mov    0xc(%edx),%eax
 876d4db:	89 45 e0             	mov    %eax,-0x20(%ebp)
 876d4de:	8b 72 10             	mov    0x10(%edx),%esi
 876d4e1:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 876d4e4:	8b 52 14             	mov    0x14(%edx),%edx
 876d4e7:	89 55 e8             	mov    %edx,-0x18(%ebp)
 876d4ea:	8b 41 18             	mov    0x18(%ecx),%eax
 876d4ed:	89 45 ec             	mov    %eax,-0x14(%ebp)
 876d4f0:	8b 79 1c             	mov    0x1c(%ecx),%edi
 876d4f3:	89 45 84             	mov    %eax,-0x7c(%ebp)
 876d4f6:	8d 83 48 8b 99 ff    	lea    -0x6674b8(%ebx),%eax
 876d4fc:	89 55 90             	mov    %edx,-0x70(%ebp)
 876d4ff:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 876d505:	89 bd 7c ff ff ff    	mov    %edi,-0x84(%ebp)
 876d50b:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%ebp)
 876d512:	00 00 00 
 876d515:	8b bd 70 ff ff ff    	mov    -0x90(%ebp),%edi
 876d51b:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876d521:	85 ff                	test   %edi,%edi
 876d523:	8b 11                	mov    (%ecx),%edx
 876d525:	0f 84 0d 0e 00 00    	je     876e338 <_ZN8TaoCryptL12Transform256EPjS0_+0xe98>
 876d52b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 876d52e:	8b 7d cc             	mov    -0x34(%ebp),%edi
 876d531:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 876d534:	03 4d 94             	add    -0x6c(%ebp),%ecx
 876d537:	c1 c8 11             	ror    $0x11,%eax
 876d53a:	c1 ef 0a             	shr    $0xa,%edi
 876d53d:	31 f8                	xor    %edi,%eax
 876d53f:	8b 7d cc             	mov    -0x34(%ebp),%edi
 876d542:	c1 cf 13             	ror    $0x13,%edi
 876d545:	31 f8                	xor    %edi,%eax
 876d547:	8d 3c 01             	lea    (%ecx,%eax,1),%edi
 876d54a:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876d54d:	8b 45 98             	mov    -0x68(%ebp),%eax
 876d550:	c1 c9 07             	ror    $0x7,%ecx
 876d553:	c1 e8 03             	shr    $0x3,%eax
 876d556:	31 c1                	xor    %eax,%ecx
 876d558:	8b 45 98             	mov    -0x68(%ebp),%eax
 876d55b:	c1 c8 12             	ror    $0x12,%eax
 876d55e:	31 c1                	xor    %eax,%ecx
 876d560:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876d563:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 876d566:	89 f7                	mov    %esi,%edi
 876d568:	89 f0                	mov    %esi,%eax
 876d56a:	c1 c8 06             	ror    $0x6,%eax
 876d56d:	c1 cf 0b             	ror    $0xb,%edi
 876d570:	31 c7                	xor    %eax,%edi
 876d572:	89 f0                	mov    %esi,%eax
 876d574:	c1 c8 19             	ror    $0x19,%eax
 876d577:	31 c7                	xor    %eax,%edi
 876d579:	8b 45 84             	mov    -0x7c(%ebp),%eax
 876d57c:	33 45 90             	xor    -0x70(%ebp),%eax
 876d57f:	03 95 7c ff ff ff    	add    -0x84(%ebp),%edx
 876d585:	21 f0                	and    %esi,%eax
 876d587:	33 45 84             	xor    -0x7c(%ebp),%eax
 876d58a:	01 fa                	add    %edi,%edx
 876d58c:	01 c2                	add    %eax,%edx
 876d58e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876d591:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 876d594:	8b 55 e0             	mov    -0x20(%ebp),%edx
 876d597:	89 c7                	mov    %eax,%edi
 876d599:	01 ca                	add    %ecx,%edx
 876d59b:	89 95 78 ff ff ff    	mov    %edx,-0x88(%ebp)
 876d5a1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 876d5a4:	09 d7                	or     %edx,%edi
 876d5a6:	21 d0                	and    %edx,%eax
 876d5a8:	23 7d dc             	and    -0x24(%ebp),%edi
 876d5ab:	89 d6                	mov    %edx,%esi
 876d5ad:	c1 ce 0d             	ror    $0xd,%esi
 876d5b0:	09 c7                	or     %eax,%edi
 876d5b2:	89 d0                	mov    %edx,%eax
 876d5b4:	c1 c8 02             	ror    $0x2,%eax
 876d5b7:	31 c6                	xor    %eax,%esi
 876d5b9:	89 d0                	mov    %edx,%eax
 876d5bb:	c1 c8 16             	ror    $0x16,%eax
 876d5be:	31 c6                	xor    %eax,%esi
 876d5c0:	8d 04 37             	lea    (%edi,%esi,1),%eax
 876d5c3:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 876d5c6:	01 c8                	add    %ecx,%eax
 876d5c8:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 876d5cb:	8b 7d e8             	mov    -0x18(%ebp),%edi
 876d5ce:	89 b5 7c ff ff ff    	mov    %esi,-0x84(%ebp)
 876d5d4:	89 4d 88             	mov    %ecx,-0x78(%ebp)
 876d5d7:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876d5dd:	89 7d 80             	mov    %edi,-0x80(%ebp)
 876d5e0:	8b 49 04             	mov    0x4(%ecx),%ecx
 876d5e3:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 876d5e6:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876d5ec:	85 c9                	test   %ecx,%ecx
 876d5ee:	0f 84 2c 0d 00 00    	je     876e320 <_ZN8TaoCryptL12Transform256EPjS0_+0xe80>
 876d5f4:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 876d5f7:	8b 75 d0             	mov    -0x30(%ebp),%esi
 876d5fa:	8b 7d bc             	mov    -0x44(%ebp),%edi
 876d5fd:	03 7d 98             	add    -0x68(%ebp),%edi
 876d600:	c1 c9 11             	ror    $0x11,%ecx
 876d603:	c1 ee 0a             	shr    $0xa,%esi
 876d606:	31 f1                	xor    %esi,%ecx
 876d608:	8b 75 d0             	mov    -0x30(%ebp),%esi
 876d60b:	c1 ce 13             	ror    $0x13,%esi
 876d60e:	31 f1                	xor    %esi,%ecx
 876d610:	8d 34 0f             	lea    (%edi,%ecx,1),%esi
 876d613:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 876d616:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 876d619:	c1 c9 07             	ror    $0x7,%ecx
 876d61c:	c1 ef 03             	shr    $0x3,%edi
 876d61f:	31 f9                	xor    %edi,%ecx
 876d621:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 876d624:	c1 cf 12             	ror    $0x12,%edi
 876d627:	31 f9                	xor    %edi,%ecx
 876d629:	01 f1                	add    %esi,%ecx
 876d62b:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 876d62e:	8b 75 84             	mov    -0x7c(%ebp),%esi
 876d631:	8b 7d 80             	mov    -0x80(%ebp),%edi
 876d634:	03 75 88             	add    -0x78(%ebp),%esi
 876d637:	33 bd 7c ff ff ff    	xor    -0x84(%ebp),%edi
 876d63d:	23 bd 78 ff ff ff    	and    -0x88(%ebp),%edi
 876d643:	33 7d 80             	xor    -0x80(%ebp),%edi
 876d646:	8d 3c 3e             	lea    (%esi,%edi,1),%edi
 876d649:	8b b5 78 ff ff ff    	mov    -0x88(%ebp),%esi
 876d64f:	89 7d 90             	mov    %edi,-0x70(%ebp)
 876d652:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876d658:	c1 ce 0b             	ror    $0xb,%esi
 876d65b:	c1 cf 06             	ror    $0x6,%edi
 876d65e:	31 fe                	xor    %edi,%esi
 876d660:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876d666:	c1 cf 19             	ror    $0x19,%edi
 876d669:	31 fe                	xor    %edi,%esi
 876d66b:	89 c7                	mov    %eax,%edi
 876d66d:	03 75 90             	add    -0x70(%ebp),%esi
 876d670:	09 d7                	or     %edx,%edi
 876d672:	23 7d d8             	and    -0x28(%ebp),%edi
 876d675:	21 c2                	and    %eax,%edx
 876d677:	8d 0c 0e             	lea    (%esi,%ecx,1),%ecx
 876d67a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 876d67d:	09 d7                	or     %edx,%edi
 876d67f:	89 c2                	mov    %eax,%edx
 876d681:	c1 ca 0d             	ror    $0xd,%edx
 876d684:	01 ce                	add    %ecx,%esi
 876d686:	89 75 84             	mov    %esi,-0x7c(%ebp)
 876d689:	89 c6                	mov    %eax,%esi
 876d68b:	c1 ce 02             	ror    $0x2,%esi
 876d68e:	31 f2                	xor    %esi,%edx
 876d690:	89 c6                	mov    %eax,%esi
 876d692:	c1 ce 16             	ror    $0x16,%esi
 876d695:	31 f2                	xor    %esi,%edx
 876d697:	8d 14 17             	lea    (%edi,%edx,1),%edx
 876d69a:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 876d6a0:	01 ca                	add    %ecx,%edx
 876d6a2:	89 55 90             	mov    %edx,-0x70(%ebp)
 876d6a5:	8b 4f 08             	mov    0x8(%edi),%ecx
 876d6a8:	8b bd 70 ff ff ff    	mov    -0x90(%ebp),%edi
 876d6ae:	85 ff                	test   %edi,%edi
 876d6b0:	0f 84 52 0c 00 00    	je     876e308 <_ZN8TaoCryptL12Transform256EPjS0_+0xe68>
 876d6b6:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876d6b9:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 876d6bc:	8b 75 c0             	mov    -0x40(%ebp),%esi
 876d6bf:	03 75 9c             	add    -0x64(%ebp),%esi
 876d6c2:	c1 ca 11             	ror    $0x11,%edx
 876d6c5:	c1 ef 0a             	shr    $0xa,%edi
 876d6c8:	31 fa                	xor    %edi,%edx
 876d6ca:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 876d6cd:	c1 cf 13             	ror    $0x13,%edi
 876d6d0:	31 fa                	xor    %edi,%edx
 876d6d2:	8d 3c 16             	lea    (%esi,%edx,1),%edi
 876d6d5:	8b 75 a0             	mov    -0x60(%ebp),%esi
 876d6d8:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876d6db:	c1 ce 07             	ror    $0x7,%esi
 876d6de:	c1 ea 03             	shr    $0x3,%edx
 876d6e1:	31 d6                	xor    %edx,%esi
 876d6e3:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876d6e6:	c1 ca 12             	ror    $0x12,%edx
 876d6e9:	31 d6                	xor    %edx,%esi
 876d6eb:	8d 34 37             	lea    (%edi,%esi,1),%esi
 876d6ee:	89 75 9c             	mov    %esi,-0x64(%ebp)
 876d6f1:	8b 55 80             	mov    -0x80(%ebp),%edx
 876d6f4:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876d6fa:	33 bd 7c ff ff ff    	xor    -0x84(%ebp),%edi
 876d700:	23 7d 84             	and    -0x7c(%ebp),%edi
 876d703:	33 bd 7c ff ff ff    	xor    -0x84(%ebp),%edi
 876d709:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876d70c:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876d70f:	01 fa                	add    %edi,%edx
 876d711:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 876d714:	c1 c9 06             	ror    $0x6,%ecx
 876d717:	c1 cf 0b             	ror    $0xb,%edi
 876d71a:	31 cf                	xor    %ecx,%edi
 876d71c:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876d71f:	c1 c9 19             	ror    $0x19,%ecx
 876d722:	31 cf                	xor    %ecx,%edi
 876d724:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 876d727:	01 fa                	add    %edi,%edx
 876d729:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876d72c:	01 f2                	add    %esi,%edx
 876d72e:	8b 75 90             	mov    -0x70(%ebp),%esi
 876d731:	01 d1                	add    %edx,%ecx
 876d733:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 876d736:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 876d739:	c1 cf 0d             	ror    $0xd,%edi
 876d73c:	21 c6                	and    %eax,%esi
 876d73e:	09 c1                	or     %eax,%ecx
 876d740:	23 4d d4             	and    -0x2c(%ebp),%ecx
 876d743:	09 f1                	or     %esi,%ecx
 876d745:	8b 75 90             	mov    -0x70(%ebp),%esi
 876d748:	c1 ce 02             	ror    $0x2,%esi
 876d74b:	31 f7                	xor    %esi,%edi
 876d74d:	8b 75 90             	mov    -0x70(%ebp),%esi
 876d750:	c1 ce 16             	ror    $0x16,%esi
 876d753:	31 f7                	xor    %esi,%edi
 876d755:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876d75b:	01 f9                	add    %edi,%ecx
 876d75d:	01 d1                	add    %edx,%ecx
 876d75f:	89 4d 80             	mov    %ecx,-0x80(%ebp)
 876d762:	8b 4e 0c             	mov    0xc(%esi),%ecx
 876d765:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 876d76b:	85 f6                	test   %esi,%esi
 876d76d:	0f 84 7d 0b 00 00    	je     876e2f0 <_ZN8TaoCryptL12Transform256EPjS0_+0xe50>
 876d773:	8b 55 98             	mov    -0x68(%ebp),%edx
 876d776:	8b 7d 98             	mov    -0x68(%ebp),%edi
 876d779:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 876d77c:	03 75 a0             	add    -0x60(%ebp),%esi
 876d77f:	c1 ca 11             	ror    $0x11,%edx
 876d782:	c1 ef 0a             	shr    $0xa,%edi
 876d785:	31 fa                	xor    %edi,%edx
 876d787:	8b 7d 98             	mov    -0x68(%ebp),%edi
 876d78a:	c1 cf 13             	ror    $0x13,%edi
 876d78d:	31 fa                	xor    %edi,%edx
 876d78f:	8d 3c 16             	lea    (%esi,%edx,1),%edi
 876d792:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 876d795:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 876d798:	c1 ce 07             	ror    $0x7,%esi
 876d79b:	c1 ea 03             	shr    $0x3,%edx
 876d79e:	31 d6                	xor    %edx,%esi
 876d7a0:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 876d7a3:	c1 ca 12             	ror    $0x12,%edx
 876d7a6:	31 d6                	xor    %edx,%esi
 876d7a8:	8d 34 37             	lea    (%edi,%esi,1),%esi
 876d7ab:	89 75 a0             	mov    %esi,-0x60(%ebp)
 876d7ae:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876d7b4:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 876d7b7:	33 bd 78 ff ff ff    	xor    -0x88(%ebp),%edi
 876d7bd:	23 7d 8c             	and    -0x74(%ebp),%edi
 876d7c0:	33 bd 78 ff ff ff    	xor    -0x88(%ebp),%edi
 876d7c6:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876d7c9:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876d7cc:	01 fa                	add    %edi,%edx
 876d7ce:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 876d7d1:	c1 c9 06             	ror    $0x6,%ecx
 876d7d4:	c1 cf 0b             	ror    $0xb,%edi
 876d7d7:	31 cf                	xor    %ecx,%edi
 876d7d9:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876d7dc:	c1 c9 19             	ror    $0x19,%ecx
 876d7df:	31 cf                	xor    %ecx,%edi
 876d7e1:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 876d7e4:	01 fa                	add    %edi,%edx
 876d7e6:	8b 7d 80             	mov    -0x80(%ebp),%edi
 876d7e9:	01 f2                	add    %esi,%edx
 876d7eb:	8b 75 80             	mov    -0x80(%ebp),%esi
 876d7ee:	23 75 90             	and    -0x70(%ebp),%esi
 876d7f1:	01 d1                	add    %edx,%ecx
 876d7f3:	89 4d 88             	mov    %ecx,-0x78(%ebp)
 876d7f6:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876d7f9:	c1 cf 0d             	ror    $0xd,%edi
 876d7fc:	0b 4d 90             	or     -0x70(%ebp),%ecx
 876d7ff:	21 c1                	and    %eax,%ecx
 876d801:	09 f1                	or     %esi,%ecx
 876d803:	8b 75 80             	mov    -0x80(%ebp),%esi
 876d806:	c1 ce 02             	ror    $0x2,%esi
 876d809:	31 f7                	xor    %esi,%edi
 876d80b:	8b 75 80             	mov    -0x80(%ebp),%esi
 876d80e:	c1 ce 16             	ror    $0x16,%esi
 876d811:	31 f7                	xor    %esi,%edi
 876d813:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876d819:	01 f9                	add    %edi,%ecx
 876d81b:	01 d1                	add    %edx,%ecx
 876d81d:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876d823:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
 876d829:	8b 4e 10             	mov    0x10(%esi),%ecx
 876d82c:	85 d2                	test   %edx,%edx
 876d82e:	0f 84 a4 0a 00 00    	je     876e2d8 <_ZN8TaoCryptL12Transform256EPjS0_+0xe38>
 876d834:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876d837:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 876d83a:	8b 75 c8             	mov    -0x38(%ebp),%esi
 876d83d:	03 75 a4             	add    -0x5c(%ebp),%esi
 876d840:	c1 ca 11             	ror    $0x11,%edx
 876d843:	c1 ef 0a             	shr    $0xa,%edi
 876d846:	31 fa                	xor    %edi,%edx
 876d848:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 876d84b:	c1 cf 13             	ror    $0x13,%edi
 876d84e:	31 fa                	xor    %edi,%edx
 876d850:	8d 3c 16             	lea    (%esi,%edx,1),%edi
 876d853:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876d856:	8b 75 a8             	mov    -0x58(%ebp),%esi
 876d859:	c1 ca 07             	ror    $0x7,%edx
 876d85c:	c1 ee 03             	shr    $0x3,%esi
 876d85f:	31 f2                	xor    %esi,%edx
 876d861:	8b 75 a8             	mov    -0x58(%ebp),%esi
 876d864:	c1 ce 12             	ror    $0x12,%esi
 876d867:	31 f2                	xor    %esi,%edx
 876d869:	8d 14 17             	lea    (%edi,%edx,1),%edx
 876d86c:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 876d86f:	8b 75 8c             	mov    -0x74(%ebp),%esi
 876d872:	03 8d 78 ff ff ff    	add    -0x88(%ebp),%ecx
 876d878:	33 75 84             	xor    -0x7c(%ebp),%esi
 876d87b:	23 75 88             	and    -0x78(%ebp),%esi
 876d87e:	33 75 84             	xor    -0x7c(%ebp),%esi
 876d881:	8b 7d 88             	mov    -0x78(%ebp),%edi
 876d884:	01 f1                	add    %esi,%ecx
 876d886:	8b 75 88             	mov    -0x78(%ebp),%esi
 876d889:	c1 cf 0b             	ror    $0xb,%edi
 876d88c:	c1 ce 06             	ror    $0x6,%esi
 876d88f:	31 f7                	xor    %esi,%edi
 876d891:	8b 75 88             	mov    -0x78(%ebp),%esi
 876d894:	c1 ce 19             	ror    $0x19,%esi
 876d897:	31 f7                	xor    %esi,%edi
 876d899:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 876d89f:	01 f9                	add    %edi,%ecx
 876d8a1:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 876d8a7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876d8aa:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876d8b0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 876d8b3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 876d8b9:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876d8bf:	c1 ce 02             	ror    $0x2,%esi
 876d8c2:	23 45 80             	and    -0x80(%ebp),%eax
 876d8c5:	0b 4d 80             	or     -0x80(%ebp),%ecx
 876d8c8:	23 4d 90             	and    -0x70(%ebp),%ecx
 876d8cb:	09 c1                	or     %eax,%ecx
 876d8cd:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876d8d3:	c1 c8 0d             	ror    $0xd,%eax
 876d8d6:	31 f0                	xor    %esi,%eax
 876d8d8:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 876d8de:	c1 ce 16             	ror    $0x16,%esi
 876d8e1:	31 f0                	xor    %esi,%eax
 876d8e3:	8d 34 01             	lea    (%ecx,%eax,1),%esi
 876d8e6:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876d8ec:	01 d6                	add    %edx,%esi
 876d8ee:	8b 57 14             	mov    0x14(%edi),%edx
 876d8f1:	85 c0                	test   %eax,%eax
 876d8f3:	0f 84 c7 09 00 00    	je     876e2c0 <_ZN8TaoCryptL12Transform256EPjS0_+0xe20>
 876d8f9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 876d8fc:	8b 7d a0             	mov    -0x60(%ebp),%edi
 876d8ff:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 876d902:	03 4d a8             	add    -0x58(%ebp),%ecx
 876d905:	c1 c8 11             	ror    $0x11,%eax
 876d908:	c1 ef 0a             	shr    $0xa,%edi
 876d90b:	31 f8                	xor    %edi,%eax
 876d90d:	8b 7d a0             	mov    -0x60(%ebp),%edi
 876d910:	c1 cf 13             	ror    $0x13,%edi
 876d913:	31 f8                	xor    %edi,%eax
 876d915:	8d 3c 01             	lea    (%ecx,%eax,1),%edi
 876d918:	8b 45 ac             	mov    -0x54(%ebp),%eax
 876d91b:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876d91e:	c1 c8 07             	ror    $0x7,%eax
 876d921:	c1 e9 03             	shr    $0x3,%ecx
 876d924:	31 c8                	xor    %ecx,%eax
 876d926:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876d929:	c1 c9 12             	ror    $0x12,%ecx
 876d92c:	31 c8                	xor    %ecx,%eax
 876d92e:	8d 04 07             	lea    (%edi,%eax,1),%eax
 876d931:	89 45 a8             	mov    %eax,-0x58(%ebp)
 876d934:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 876d937:	03 55 84             	add    -0x7c(%ebp),%edx
 876d93a:	33 4d 8c             	xor    -0x74(%ebp),%ecx
 876d93d:	23 8d 78 ff ff ff    	and    -0x88(%ebp),%ecx
 876d943:	33 4d 8c             	xor    -0x74(%ebp),%ecx
 876d946:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876d94c:	01 ca                	add    %ecx,%edx
 876d94e:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 876d954:	c1 cf 0b             	ror    $0xb,%edi
 876d957:	c1 c9 06             	ror    $0x6,%ecx
 876d95a:	31 cf                	xor    %ecx,%edi
 876d95c:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 876d962:	c1 c9 19             	ror    $0x19,%ecx
 876d965:	31 cf                	xor    %ecx,%edi
 876d967:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876d96d:	01 fa                	add    %edi,%edx
 876d96f:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876d972:	8d 04 02             	lea    (%edx,%eax,1),%eax
 876d975:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876d97b:	21 f1                	and    %esi,%ecx
 876d97d:	01 c7                	add    %eax,%edi
 876d97f:	09 f2                	or     %esi,%edx
 876d981:	23 55 80             	and    -0x80(%ebp),%edx
 876d984:	89 7d 84             	mov    %edi,-0x7c(%ebp)
 876d987:	89 f7                	mov    %esi,%edi
 876d989:	c1 cf 02             	ror    $0x2,%edi
 876d98c:	09 ca                	or     %ecx,%edx
 876d98e:	89 f1                	mov    %esi,%ecx
 876d990:	c1 c9 0d             	ror    $0xd,%ecx
 876d993:	31 f9                	xor    %edi,%ecx
 876d995:	89 f7                	mov    %esi,%edi
 876d997:	c1 cf 16             	ror    $0x16,%edi
 876d99a:	31 f9                	xor    %edi,%ecx
 876d99c:	8b bd 70 ff ff ff    	mov    -0x90(%ebp),%edi
 876d9a2:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 876d9a5:	01 c1                	add    %eax,%ecx
 876d9a7:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876d9ad:	89 4d 90             	mov    %ecx,-0x70(%ebp)
 876d9b0:	85 ff                	test   %edi,%edi
 876d9b2:	8b 50 18             	mov    0x18(%eax),%edx
 876d9b5:	0f 84 ed 08 00 00    	je     876e2a8 <_ZN8TaoCryptL12Transform256EPjS0_+0xe08>
 876d9bb:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 876d9be:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 876d9c1:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 876d9c4:	03 4d ac             	add    -0x54(%ebp),%ecx
 876d9c7:	c1 c8 11             	ror    $0x11,%eax
 876d9ca:	c1 ef 0a             	shr    $0xa,%edi
 876d9cd:	31 f8                	xor    %edi,%eax
 876d9cf:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 876d9d2:	c1 cf 13             	ror    $0x13,%edi
 876d9d5:	31 f8                	xor    %edi,%eax
 876d9d7:	8d 3c 01             	lea    (%ecx,%eax,1),%edi
 876d9da:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 876d9dd:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876d9e0:	c1 c9 07             	ror    $0x7,%ecx
 876d9e3:	c1 e8 03             	shr    $0x3,%eax
 876d9e6:	31 c1                	xor    %eax,%ecx
 876d9e8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876d9eb:	c1 c8 12             	ror    $0x12,%eax
 876d9ee:	31 c1                	xor    %eax,%ecx
 876d9f0:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876d9f3:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 876d9f6:	8b 45 8c             	mov    -0x74(%ebp),%eax
 876d9f9:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876d9ff:	33 7d 88             	xor    -0x78(%ebp),%edi
 876da02:	23 7d 84             	and    -0x7c(%ebp),%edi
 876da05:	33 7d 88             	xor    -0x78(%ebp),%edi
 876da08:	01 d0                	add    %edx,%eax
 876da0a:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876da0d:	01 f8                	add    %edi,%eax
 876da0f:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 876da12:	c1 ca 06             	ror    $0x6,%edx
 876da15:	c1 cf 0b             	ror    $0xb,%edi
 876da18:	31 d7                	xor    %edx,%edi
 876da1a:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876da1d:	c1 ca 19             	ror    $0x19,%edx
 876da20:	31 d7                	xor    %edx,%edi
 876da22:	8b 55 80             	mov    -0x80(%ebp),%edx
 876da25:	01 f8                	add    %edi,%eax
 876da27:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876da2a:	01 c8                	add    %ecx,%eax
 876da2c:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 876da2f:	01 c2                	add    %eax,%edx
 876da31:	89 55 8c             	mov    %edx,-0x74(%ebp)
 876da34:	8b 55 90             	mov    -0x70(%ebp),%edx
 876da37:	c1 cf 0d             	ror    $0xd,%edi
 876da3a:	21 f1                	and    %esi,%ecx
 876da3c:	09 f2                	or     %esi,%edx
 876da3e:	23 95 7c ff ff ff    	and    -0x84(%ebp),%edx
 876da44:	09 ca                	or     %ecx,%edx
 876da46:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 876da49:	c1 c9 02             	ror    $0x2,%ecx
 876da4c:	31 cf                	xor    %ecx,%edi
 876da4e:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 876da51:	c1 c9 16             	ror    $0x16,%ecx
 876da54:	31 cf                	xor    %ecx,%edi
 876da56:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876da5c:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 876da5f:	01 c7                	add    %eax,%edi
 876da61:	89 7d 80             	mov    %edi,-0x80(%ebp)
 876da64:	8b 51 1c             	mov    0x1c(%ecx),%edx
 876da67:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876da6d:	85 c9                	test   %ecx,%ecx
 876da6f:	0f 84 1b 08 00 00    	je     876e290 <_ZN8TaoCryptL12Transform256EPjS0_+0xdf0>
 876da75:	8b 45 a8             	mov    -0x58(%ebp),%eax
 876da78:	8b 7d a8             	mov    -0x58(%ebp),%edi
 876da7b:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 876da7e:	03 4d b0             	add    -0x50(%ebp),%ecx
 876da81:	c1 c8 11             	ror    $0x11,%eax
 876da84:	c1 ef 0a             	shr    $0xa,%edi
 876da87:	31 f8                	xor    %edi,%eax
 876da89:	8b 7d a8             	mov    -0x58(%ebp),%edi
 876da8c:	c1 cf 13             	ror    $0x13,%edi
 876da8f:	31 f8                	xor    %edi,%eax
 876da91:	8d 3c 01             	lea    (%ecx,%eax,1),%edi
 876da94:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 876da97:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876da9a:	c1 c9 07             	ror    $0x7,%ecx
 876da9d:	c1 e8 03             	shr    $0x3,%eax
 876daa0:	31 c1                	xor    %eax,%ecx
 876daa2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876daa5:	c1 c8 12             	ror    $0x12,%eax
 876daa8:	31 c1                	xor    %eax,%ecx
 876daaa:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876daad:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 876dab0:	8b 45 88             	mov    -0x78(%ebp),%eax
 876dab3:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 876dab6:	33 bd 78 ff ff ff    	xor    -0x88(%ebp),%edi
 876dabc:	23 7d 8c             	and    -0x74(%ebp),%edi
 876dabf:	33 bd 78 ff ff ff    	xor    -0x88(%ebp),%edi
 876dac5:	01 d0                	add    %edx,%eax
 876dac7:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876daca:	01 f8                	add    %edi,%eax
 876dacc:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 876dacf:	c1 ca 06             	ror    $0x6,%edx
 876dad2:	c1 cf 0b             	ror    $0xb,%edi
 876dad5:	31 d7                	xor    %edx,%edi
 876dad7:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876dada:	c1 ca 19             	ror    $0x19,%edx
 876dadd:	31 d7                	xor    %edx,%edi
 876dadf:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876dae5:	01 f8                	add    %edi,%eax
 876dae7:	8b 7d 80             	mov    -0x80(%ebp),%edi
 876daea:	01 c8                	add    %ecx,%eax
 876daec:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876daef:	23 4d 90             	and    -0x70(%ebp),%ecx
 876daf2:	01 c2                	add    %eax,%edx
 876daf4:	89 55 88             	mov    %edx,-0x78(%ebp)
 876daf7:	8b 55 80             	mov    -0x80(%ebp),%edx
 876dafa:	c1 cf 0d             	ror    $0xd,%edi
 876dafd:	0b 55 90             	or     -0x70(%ebp),%edx
 876db00:	21 f2                	and    %esi,%edx
 876db02:	09 ca                	or     %ecx,%edx
 876db04:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876db07:	c1 c9 02             	ror    $0x2,%ecx
 876db0a:	31 cf                	xor    %ecx,%edi
 876db0c:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876db0f:	c1 c9 16             	ror    $0x16,%ecx
 876db12:	31 cf                	xor    %ecx,%edi
 876db14:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876db1a:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 876db1d:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876db23:	01 c7                	add    %eax,%edi
 876db25:	89 bd 7c ff ff ff    	mov    %edi,-0x84(%ebp)
 876db2b:	8b 41 20             	mov    0x20(%ecx),%eax
 876db2e:	85 d2                	test   %edx,%edx
 876db30:	0f 84 42 07 00 00    	je     876e278 <_ZN8TaoCryptL12Transform256EPjS0_+0xdd8>
 876db36:	8b 55 ac             	mov    -0x54(%ebp),%edx
 876db39:	8b 7d ac             	mov    -0x54(%ebp),%edi
 876db3c:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 876db3f:	03 4d b4             	add    -0x4c(%ebp),%ecx
 876db42:	c1 ca 11             	ror    $0x11,%edx
 876db45:	c1 ef 0a             	shr    $0xa,%edi
 876db48:	31 fa                	xor    %edi,%edx
 876db4a:	8b 7d ac             	mov    -0x54(%ebp),%edi
 876db4d:	c1 cf 13             	ror    $0x13,%edi
 876db50:	31 fa                	xor    %edi,%edx
 876db52:	8d 3c 11             	lea    (%ecx,%edx,1),%edi
 876db55:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 876db58:	8b 55 b8             	mov    -0x48(%ebp),%edx
 876db5b:	c1 c9 07             	ror    $0x7,%ecx
 876db5e:	c1 ea 03             	shr    $0x3,%edx
 876db61:	31 d1                	xor    %edx,%ecx
 876db63:	8b 55 b8             	mov    -0x48(%ebp),%edx
 876db66:	c1 ca 12             	ror    $0x12,%edx
 876db69:	31 d1                	xor    %edx,%ecx
 876db6b:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876db6e:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876db71:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876db74:	03 85 78 ff ff ff    	add    -0x88(%ebp),%eax
 876db7a:	33 55 84             	xor    -0x7c(%ebp),%edx
 876db7d:	23 55 88             	and    -0x78(%ebp),%edx
 876db80:	33 55 84             	xor    -0x7c(%ebp),%edx
 876db83:	8b 7d 88             	mov    -0x78(%ebp),%edi
 876db86:	01 d0                	add    %edx,%eax
 876db88:	8b 55 88             	mov    -0x78(%ebp),%edx
 876db8b:	c1 cf 0b             	ror    $0xb,%edi
 876db8e:	c1 ca 06             	ror    $0x6,%edx
 876db91:	31 d7                	xor    %edx,%edi
 876db93:	8b 55 88             	mov    -0x78(%ebp),%edx
 876db96:	c1 ca 19             	ror    $0x19,%edx
 876db99:	31 d7                	xor    %edx,%edi
 876db9b:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876dba1:	01 f8                	add    %edi,%eax
 876dba3:	8d 0c 08             	lea    (%eax,%ecx,1),%ecx
 876dba6:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 876dbac:	23 55 80             	and    -0x80(%ebp),%edx
 876dbaf:	0b 45 80             	or     -0x80(%ebp),%eax
 876dbb2:	23 45 90             	and    -0x70(%ebp),%eax
 876dbb5:	8d 34 31             	lea    (%ecx,%esi,1),%esi
 876dbb8:	89 b5 74 ff ff ff    	mov    %esi,-0x8c(%ebp)
 876dbbe:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 876dbc4:	09 d0                	or     %edx,%eax
 876dbc6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876dbcc:	c1 ce 0d             	ror    $0xd,%esi
 876dbcf:	c1 ca 02             	ror    $0x2,%edx
 876dbd2:	31 d6                	xor    %edx,%esi
 876dbd4:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876dbda:	c1 ca 16             	ror    $0x16,%edx
 876dbdd:	31 d6                	xor    %edx,%esi
 876dbdf:	8d 14 30             	lea    (%eax,%esi,1),%edx
 876dbe2:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876dbe8:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876dbee:	01 ca                	add    %ecx,%edx
 876dbf0:	85 c0                	test   %eax,%eax
 876dbf2:	8b 4e 24             	mov    0x24(%esi),%ecx
 876dbf5:	0f 84 65 06 00 00    	je     876e260 <_ZN8TaoCryptL12Transform256EPjS0_+0xdc0>
 876dbfb:	8b 45 b0             	mov    -0x50(%ebp),%eax
 876dbfe:	8b 7d b0             	mov    -0x50(%ebp),%edi
 876dc01:	8b 75 9c             	mov    -0x64(%ebp),%esi
 876dc04:	03 75 b8             	add    -0x48(%ebp),%esi
 876dc07:	c1 c8 11             	ror    $0x11,%eax
 876dc0a:	c1 ef 0a             	shr    $0xa,%edi
 876dc0d:	31 f8                	xor    %edi,%eax
 876dc0f:	8b 7d b0             	mov    -0x50(%ebp),%edi
 876dc12:	c1 cf 13             	ror    $0x13,%edi
 876dc15:	31 f8                	xor    %edi,%eax
 876dc17:	8d 3c 06             	lea    (%esi,%eax,1),%edi
 876dc1a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 876dc1d:	8b 75 bc             	mov    -0x44(%ebp),%esi
 876dc20:	c1 c8 07             	ror    $0x7,%eax
 876dc23:	c1 ee 03             	shr    $0x3,%esi
 876dc26:	31 f0                	xor    %esi,%eax
 876dc28:	8b 75 bc             	mov    -0x44(%ebp),%esi
 876dc2b:	c1 ce 12             	ror    $0x12,%esi
 876dc2e:	31 f0                	xor    %esi,%eax
 876dc30:	8d 04 07             	lea    (%edi,%eax,1),%eax
 876dc33:	89 45 b8             	mov    %eax,-0x48(%ebp)
 876dc36:	8b 75 88             	mov    -0x78(%ebp),%esi
 876dc39:	03 4d 84             	add    -0x7c(%ebp),%ecx
 876dc3c:	33 75 8c             	xor    -0x74(%ebp),%esi
 876dc3f:	23 b5 74 ff ff ff    	and    -0x8c(%ebp),%esi
 876dc45:	33 75 8c             	xor    -0x74(%ebp),%esi
 876dc48:	8b bd 74 ff ff ff    	mov    -0x8c(%ebp),%edi
 876dc4e:	01 f1                	add    %esi,%ecx
 876dc50:	8b b5 74 ff ff ff    	mov    -0x8c(%ebp),%esi
 876dc56:	c1 cf 0b             	ror    $0xb,%edi
 876dc59:	c1 ce 06             	ror    $0x6,%esi
 876dc5c:	31 f7                	xor    %esi,%edi
 876dc5e:	8b b5 74 ff ff ff    	mov    -0x8c(%ebp),%esi
 876dc64:	c1 ce 19             	ror    $0x19,%esi
 876dc67:	31 f7                	xor    %esi,%edi
 876dc69:	8b b5 7c ff ff ff    	mov    -0x84(%ebp),%esi
 876dc6f:	01 f9                	add    %edi,%ecx
 876dc71:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876dc74:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 876dc77:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876dc7d:	21 d6                	and    %edx,%esi
 876dc7f:	01 c7                	add    %eax,%edi
 876dc81:	09 d1                	or     %edx,%ecx
 876dc83:	23 4d 80             	and    -0x80(%ebp),%ecx
 876dc86:	89 bd 78 ff ff ff    	mov    %edi,-0x88(%ebp)
 876dc8c:	89 d7                	mov    %edx,%edi
 876dc8e:	c1 cf 02             	ror    $0x2,%edi
 876dc91:	09 f1                	or     %esi,%ecx
 876dc93:	89 d6                	mov    %edx,%esi
 876dc95:	c1 ce 0d             	ror    $0xd,%esi
 876dc98:	31 fe                	xor    %edi,%esi
 876dc9a:	89 d7                	mov    %edx,%edi
 876dc9c:	c1 cf 16             	ror    $0x16,%edi
 876dc9f:	31 fe                	xor    %edi,%esi
 876dca1:	8b bd 70 ff ff ff    	mov    -0x90(%ebp),%edi
 876dca7:	8d 34 31             	lea    (%ecx,%esi,1),%esi
 876dcaa:	01 c6                	add    %eax,%esi
 876dcac:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 876dcb2:	89 75 84             	mov    %esi,-0x7c(%ebp)
 876dcb5:	85 ff                	test   %edi,%edi
 876dcb7:	8b 48 28             	mov    0x28(%eax),%ecx
 876dcba:	0f 84 88 05 00 00    	je     876e248 <_ZN8TaoCryptL12Transform256EPjS0_+0xda8>
 876dcc0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 876dcc3:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876dcc6:	8b 75 a0             	mov    -0x60(%ebp),%esi
 876dcc9:	03 75 bc             	add    -0x44(%ebp),%esi
 876dccc:	c1 c8 11             	ror    $0x11,%eax
 876dccf:	c1 ef 0a             	shr    $0xa,%edi
 876dcd2:	31 f8                	xor    %edi,%eax
 876dcd4:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876dcd7:	c1 cf 13             	ror    $0x13,%edi
 876dcda:	31 f8                	xor    %edi,%eax
 876dcdc:	8d 3c 06             	lea    (%esi,%eax,1),%edi
 876dcdf:	8b 75 c0             	mov    -0x40(%ebp),%esi
 876dce2:	8b 45 c0             	mov    -0x40(%ebp),%eax
 876dce5:	c1 ce 07             	ror    $0x7,%esi
 876dce8:	c1 e8 03             	shr    $0x3,%eax
 876dceb:	31 c6                	xor    %eax,%esi
 876dced:	8b 45 c0             	mov    -0x40(%ebp),%eax
 876dcf0:	c1 c8 12             	ror    $0x12,%eax
 876dcf3:	31 c6                	xor    %eax,%esi
 876dcf5:	8d 34 37             	lea    (%edi,%esi,1),%esi
 876dcf8:	89 75 bc             	mov    %esi,-0x44(%ebp)
 876dcfb:	8b bd 74 ff ff ff    	mov    -0x8c(%ebp),%edi
 876dd01:	03 4d 8c             	add    -0x74(%ebp),%ecx
 876dd04:	33 7d 88             	xor    -0x78(%ebp),%edi
 876dd07:	23 bd 78 ff ff ff    	and    -0x88(%ebp),%edi
 876dd0d:	33 7d 88             	xor    -0x78(%ebp),%edi
 876dd10:	8d 04 39             	lea    (%ecx,%edi,1),%eax
 876dd13:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876dd19:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 876dd1f:	c1 cf 0b             	ror    $0xb,%edi
 876dd22:	c1 c9 06             	ror    $0x6,%ecx
 876dd25:	31 cf                	xor    %ecx,%edi
 876dd27:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 876dd2d:	c1 c9 19             	ror    $0x19,%ecx
 876dd30:	31 cf                	xor    %ecx,%edi
 876dd32:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 876dd35:	01 f8                	add    %edi,%eax
 876dd37:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 876dd3a:	01 f0                	add    %esi,%eax
 876dd3c:	8b 75 84             	mov    -0x7c(%ebp),%esi
 876dd3f:	01 c1                	add    %eax,%ecx
 876dd41:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 876dd44:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876dd47:	c1 cf 0d             	ror    $0xd,%edi
 876dd4a:	21 d6                	and    %edx,%esi
 876dd4c:	09 d1                	or     %edx,%ecx
 876dd4e:	23 8d 7c ff ff ff    	and    -0x84(%ebp),%ecx
 876dd54:	09 f1                	or     %esi,%ecx
 876dd56:	8b 75 84             	mov    -0x7c(%ebp),%esi
 876dd59:	c1 ce 02             	ror    $0x2,%esi
 876dd5c:	31 f7                	xor    %esi,%edi
 876dd5e:	8b 75 84             	mov    -0x7c(%ebp),%esi
 876dd61:	c1 ce 16             	ror    $0x16,%esi
 876dd64:	31 f7                	xor    %esi,%edi
 876dd66:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876dd6c:	8d 3c 39             	lea    (%ecx,%edi,1),%edi
 876dd6f:	01 c7                	add    %eax,%edi
 876dd71:	89 7d 90             	mov    %edi,-0x70(%ebp)
 876dd74:	8b 4e 2c             	mov    0x2c(%esi),%ecx
 876dd77:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 876dd7d:	85 f6                	test   %esi,%esi
 876dd7f:	0f 84 ab 04 00 00    	je     876e230 <_ZN8TaoCryptL12Transform256EPjS0_+0xd90>
 876dd85:	8b 45 b8             	mov    -0x48(%ebp),%eax
 876dd88:	8b 7d b8             	mov    -0x48(%ebp),%edi
 876dd8b:	8b 75 a4             	mov    -0x5c(%ebp),%esi
 876dd8e:	03 75 c0             	add    -0x40(%ebp),%esi
 876dd91:	c1 c8 11             	ror    $0x11,%eax
 876dd94:	c1 ef 0a             	shr    $0xa,%edi
 876dd97:	31 f8                	xor    %edi,%eax
 876dd99:	8b 7d b8             	mov    -0x48(%ebp),%edi
 876dd9c:	c1 cf 13             	ror    $0x13,%edi
 876dd9f:	31 f8                	xor    %edi,%eax
 876dda1:	8d 3c 06             	lea    (%esi,%eax,1),%edi
 876dda4:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 876dda7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 876ddaa:	c1 ce 07             	ror    $0x7,%esi
 876ddad:	c1 e8 03             	shr    $0x3,%eax
 876ddb0:	31 c6                	xor    %eax,%esi
 876ddb2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 876ddb5:	c1 c8 12             	ror    $0x12,%eax
 876ddb8:	31 c6                	xor    %eax,%esi
 876ddba:	8d 34 37             	lea    (%edi,%esi,1),%esi
 876ddbd:	89 75 c0             	mov    %esi,-0x40(%ebp)
 876ddc0:	8b bd 78 ff ff ff    	mov    -0x88(%ebp),%edi
 876ddc6:	03 4d 88             	add    -0x78(%ebp),%ecx
 876ddc9:	33 bd 74 ff ff ff    	xor    -0x8c(%ebp),%edi
 876ddcf:	23 7d 8c             	and    -0x74(%ebp),%edi
 876ddd2:	33 bd 74 ff ff ff    	xor    -0x8c(%ebp),%edi
 876ddd8:	8d 04 39             	lea    (%ecx,%edi,1),%eax
 876dddb:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 876ddde:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876dde1:	c1 cf 0b             	ror    $0xb,%edi
 876dde4:	c1 c9 06             	ror    $0x6,%ecx
 876dde7:	31 cf                	xor    %ecx,%edi
 876dde9:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876ddec:	c1 c9 19             	ror    $0x19,%ecx
 876ddef:	31 cf                	xor    %ecx,%edi
 876ddf1:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876ddf7:	01 f8                	add    %edi,%eax
 876ddf9:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876ddfc:	01 f0                	add    %esi,%eax
 876ddfe:	8b 75 90             	mov    -0x70(%ebp),%esi
 876de01:	23 75 84             	and    -0x7c(%ebp),%esi
 876de04:	01 c1                	add    %eax,%ecx
 876de06:	89 4d 88             	mov    %ecx,-0x78(%ebp)
 876de09:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 876de0c:	c1 cf 0d             	ror    $0xd,%edi
 876de0f:	0b 4d 84             	or     -0x7c(%ebp),%ecx
 876de12:	21 d1                	and    %edx,%ecx
 876de14:	09 f1                	or     %esi,%ecx
 876de16:	8b 75 90             	mov    -0x70(%ebp),%esi
 876de19:	c1 ce 02             	ror    $0x2,%esi
 876de1c:	31 f7                	xor    %esi,%edi
 876de1e:	8b 75 90             	mov    -0x70(%ebp),%esi
 876de21:	c1 ce 16             	ror    $0x16,%esi
 876de24:	31 f7                	xor    %esi,%edi
 876de26:	8d 3c 39             	lea    (%ecx,%edi,1),%edi
 876de29:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 876de2f:	01 c7                	add    %eax,%edi
 876de31:	89 7d 80             	mov    %edi,-0x80(%ebp)
 876de34:	8b bd 6c ff ff ff    	mov    -0x94(%ebp),%edi
 876de3a:	85 c9                	test   %ecx,%ecx
 876de3c:	8b 77 30             	mov    0x30(%edi),%esi
 876de3f:	0f 84 d3 03 00 00    	je     876e218 <_ZN8TaoCryptL12Transform256EPjS0_+0xd78>
 876de45:	8b 45 bc             	mov    -0x44(%ebp),%eax
 876de48:	8b 7d bc             	mov    -0x44(%ebp),%edi
 876de4b:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 876de4e:	03 4d c4             	add    -0x3c(%ebp),%ecx
 876de51:	c1 c8 11             	ror    $0x11,%eax
 876de54:	c1 ef 0a             	shr    $0xa,%edi
 876de57:	31 f8                	xor    %edi,%eax
 876de59:	8b 7d bc             	mov    -0x44(%ebp),%edi
 876de5c:	c1 cf 13             	ror    $0x13,%edi
 876de5f:	31 f8                	xor    %edi,%eax
 876de61:	8d 3c 01             	lea    (%ecx,%eax,1),%edi
 876de64:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 876de67:	8b 45 c8             	mov    -0x38(%ebp),%eax
 876de6a:	c1 c9 07             	ror    $0x7,%ecx
 876de6d:	c1 e8 03             	shr    $0x3,%eax
 876de70:	31 c1                	xor    %eax,%ecx
 876de72:	8b 45 c8             	mov    -0x38(%ebp),%eax
 876de75:	c1 c8 12             	ror    $0x12,%eax
 876de78:	31 c1                	xor    %eax,%ecx
 876de7a:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876de7d:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 876de80:	8b 45 8c             	mov    -0x74(%ebp),%eax
 876de83:	03 b5 74 ff ff ff    	add    -0x8c(%ebp),%esi
 876de89:	33 85 78 ff ff ff    	xor    -0x88(%ebp),%eax
 876de8f:	23 45 88             	and    -0x78(%ebp),%eax
 876de92:	33 85 78 ff ff ff    	xor    -0x88(%ebp),%eax
 876de98:	8b 7d 88             	mov    -0x78(%ebp),%edi
 876de9b:	01 c6                	add    %eax,%esi
 876de9d:	8b 45 88             	mov    -0x78(%ebp),%eax
 876dea0:	c1 cf 0b             	ror    $0xb,%edi
 876dea3:	c1 c8 06             	ror    $0x6,%eax
 876dea6:	31 c7                	xor    %eax,%edi
 876dea8:	8b 45 88             	mov    -0x78(%ebp),%eax
 876deab:	c1 c8 19             	ror    $0x19,%eax
 876deae:	31 c7                	xor    %eax,%edi
 876deb0:	8b 45 80             	mov    -0x80(%ebp),%eax
 876deb3:	01 fe                	add    %edi,%esi
 876deb5:	8d 0c 0e             	lea    (%esi,%ecx,1),%ecx
 876deb8:	8b 75 80             	mov    -0x80(%ebp),%esi
 876debb:	23 45 90             	and    -0x70(%ebp),%eax
 876debe:	0b 75 90             	or     -0x70(%ebp),%esi
 876dec1:	23 75 84             	and    -0x7c(%ebp),%esi
 876dec4:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 876dec7:	89 55 f0             	mov    %edx,-0x10(%ebp)
 876deca:	09 c6                	or     %eax,%esi
 876decc:	8b 45 80             	mov    -0x80(%ebp),%eax
 876decf:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 876ded5:	8b 55 80             	mov    -0x80(%ebp),%edx
 876ded8:	c1 c8 02             	ror    $0x2,%eax
 876dedb:	c1 ca 0d             	ror    $0xd,%edx
 876dede:	31 c2                	xor    %eax,%edx
 876dee0:	8b 45 80             	mov    -0x80(%ebp),%eax
 876dee3:	c1 c8 16             	ror    $0x16,%eax
 876dee6:	31 c2                	xor    %eax,%edx
 876dee8:	8d 04 16             	lea    (%esi,%edx,1),%eax
 876deeb:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876def1:	01 c8                	add    %ecx,%eax
 876def3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 876def6:	8b 4a 34             	mov    0x34(%edx),%ecx
 876def9:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876deff:	85 d2                	test   %edx,%edx
 876df01:	0f 84 f9 02 00 00    	je     876e200 <_ZN8TaoCryptL12Transform256EPjS0_+0xd60>
 876df07:	8b 55 c0             	mov    -0x40(%ebp),%edx
 876df0a:	8b 7d c0             	mov    -0x40(%ebp),%edi
 876df0d:	8b 75 ac             	mov    -0x54(%ebp),%esi
 876df10:	03 75 c8             	add    -0x38(%ebp),%esi
 876df13:	c1 ca 11             	ror    $0x11,%edx
 876df16:	c1 ef 0a             	shr    $0xa,%edi
 876df19:	31 fa                	xor    %edi,%edx
 876df1b:	8b 7d c0             	mov    -0x40(%ebp),%edi
 876df1e:	c1 cf 13             	ror    $0x13,%edi
 876df21:	31 fa                	xor    %edi,%edx
 876df23:	8d 3c 16             	lea    (%esi,%edx,1),%edi
 876df26:	8b 75 cc             	mov    -0x34(%ebp),%esi
 876df29:	8b 55 cc             	mov    -0x34(%ebp),%edx
 876df2c:	c1 ce 07             	ror    $0x7,%esi
 876df2f:	c1 ea 03             	shr    $0x3,%edx
 876df32:	31 d6                	xor    %edx,%esi
 876df34:	8b 55 cc             	mov    -0x34(%ebp),%edx
 876df37:	c1 ca 12             	ror    $0x12,%edx
 876df3a:	31 d6                	xor    %edx,%esi
 876df3c:	8d 34 37             	lea    (%edi,%esi,1),%esi
 876df3f:	89 75 c8             	mov    %esi,-0x38(%ebp)
 876df42:	8b 55 88             	mov    -0x78(%ebp),%edx
 876df45:	03 8d 78 ff ff ff    	add    -0x88(%ebp),%ecx
 876df4b:	33 55 8c             	xor    -0x74(%ebp),%edx
 876df4e:	23 95 7c ff ff ff    	and    -0x84(%ebp),%edx
 876df54:	33 55 8c             	xor    -0x74(%ebp),%edx
 876df57:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 876df5d:	01 d1                	add    %edx,%ecx
 876df5f:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876df65:	c1 cf 0b             	ror    $0xb,%edi
 876df68:	c1 ca 06             	ror    $0x6,%edx
 876df6b:	31 d7                	xor    %edx,%edi
 876df6d:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876df73:	c1 ca 19             	ror    $0x19,%edx
 876df76:	31 d7                	xor    %edx,%edi
 876df78:	8b 55 80             	mov    -0x80(%ebp),%edx
 876df7b:	01 f9                	add    %edi,%ecx
 876df7d:	8b 7d 80             	mov    -0x80(%ebp),%edi
 876df80:	8d 34 31             	lea    (%ecx,%esi,1),%esi
 876df83:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876df86:	21 c2                	and    %eax,%edx
 876df88:	09 c7                	or     %eax,%edi
 876df8a:	23 7d 90             	and    -0x70(%ebp),%edi
 876df8d:	01 f1                	add    %esi,%ecx
 876df8f:	89 4d ec             	mov    %ecx,-0x14(%ebp)
 876df92:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 876df95:	89 c1                	mov    %eax,%ecx
 876df97:	09 d7                	or     %edx,%edi
 876df99:	89 c2                	mov    %eax,%edx
 876df9b:	c1 ca 02             	ror    $0x2,%edx
 876df9e:	c1 c9 0d             	ror    $0xd,%ecx
 876dfa1:	31 d1                	xor    %edx,%ecx
 876dfa3:	89 c2                	mov    %eax,%edx
 876dfa5:	c1 ca 16             	ror    $0x16,%edx
 876dfa8:	31 d1                	xor    %edx,%ecx
 876dfaa:	8d 14 0f             	lea    (%edi,%ecx,1),%edx
 876dfad:	8b bd 70 ff ff ff    	mov    -0x90(%ebp),%edi
 876dfb3:	01 f2                	add    %esi,%edx
 876dfb5:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876dfbb:	89 55 dc             	mov    %edx,-0x24(%ebp)
 876dfbe:	85 ff                	test   %edi,%edi
 876dfc0:	8b 76 38             	mov    0x38(%esi),%esi
 876dfc3:	89 b5 74 ff ff ff    	mov    %esi,-0x8c(%ebp)
 876dfc9:	0f 84 19 02 00 00    	je     876e1e8 <_ZN8TaoCryptL12Transform256EPjS0_+0xd48>
 876dfcf:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 876dfd2:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 876dfd5:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 876dfd8:	03 4d cc             	add    -0x34(%ebp),%ecx
 876dfdb:	c1 cf 11             	ror    $0x11,%edi
 876dfde:	c1 ee 0a             	shr    $0xa,%esi
 876dfe1:	31 f7                	xor    %esi,%edi
 876dfe3:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 876dfe6:	c1 ce 13             	ror    $0x13,%esi
 876dfe9:	31 f7                	xor    %esi,%edi
 876dfeb:	8d 34 39             	lea    (%ecx,%edi,1),%esi
 876dfee:	8b 7d d0             	mov    -0x30(%ebp),%edi
 876dff1:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 876dff4:	c1 cf 07             	ror    $0x7,%edi
 876dff7:	c1 e9 03             	shr    $0x3,%ecx
 876dffa:	31 cf                	xor    %ecx,%edi
 876dffc:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 876dfff:	c1 c9 12             	ror    $0x12,%ecx
 876e002:	31 cf                	xor    %ecx,%edi
 876e004:	01 f7                	add    %esi,%edi
 876e006:	89 7d cc             	mov    %edi,-0x34(%ebp)
 876e009:	8b b5 74 ff ff ff    	mov    -0x8c(%ebp),%esi
 876e00f:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876e015:	03 75 8c             	add    -0x74(%ebp),%esi
 876e018:	33 4d 88             	xor    -0x78(%ebp),%ecx
 876e01b:	23 4d 84             	and    -0x7c(%ebp),%ecx
 876e01e:	33 4d 88             	xor    -0x78(%ebp),%ecx
 876e021:	8d 0c 0e             	lea    (%esi,%ecx,1),%ecx
 876e024:	8b 75 84             	mov    -0x7c(%ebp),%esi
 876e027:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 876e02a:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876e02d:	c1 ce 0b             	ror    $0xb,%esi
 876e030:	c1 c9 06             	ror    $0x6,%ecx
 876e033:	31 ce                	xor    %ecx,%esi
 876e035:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876e038:	c1 c9 19             	ror    $0x19,%ecx
 876e03b:	31 ce                	xor    %ecx,%esi
 876e03d:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876e040:	01 f1                	add    %esi,%ecx
 876e042:	8b 75 90             	mov    -0x70(%ebp),%esi
 876e045:	01 f9                	add    %edi,%ecx
 876e047:	89 d7                	mov    %edx,%edi
 876e049:	09 c7                	or     %eax,%edi
 876e04b:	23 7d 80             	and    -0x80(%ebp),%edi
 876e04e:	01 ce                	add    %ecx,%esi
 876e050:	89 75 e8             	mov    %esi,-0x18(%ebp)
 876e053:	89 75 90             	mov    %esi,-0x70(%ebp)
 876e056:	89 d6                	mov    %edx,%esi
 876e058:	21 c6                	and    %eax,%esi
 876e05a:	09 f7                	or     %esi,%edi
 876e05c:	89 d6                	mov    %edx,%esi
 876e05e:	89 8d 78 ff ff ff    	mov    %ecx,-0x88(%ebp)
 876e064:	89 d1                	mov    %edx,%ecx
 876e066:	c1 c9 02             	ror    $0x2,%ecx
 876e069:	c1 ce 0d             	ror    $0xd,%esi
 876e06c:	31 ce                	xor    %ecx,%esi
 876e06e:	89 d1                	mov    %edx,%ecx
 876e070:	c1 c9 16             	ror    $0x16,%ecx
 876e073:	31 ce                	xor    %ecx,%esi
 876e075:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 876e07b:	8d 34 37             	lea    (%edi,%esi,1),%esi
 876e07e:	8d 0c 0e             	lea    (%esi,%ecx,1),%ecx
 876e081:	8b b5 6c ff ff ff    	mov    -0x94(%ebp),%esi
 876e087:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 876e08a:	8b 76 3c             	mov    0x3c(%esi),%esi
 876e08d:	89 b5 74 ff ff ff    	mov    %esi,-0x8c(%ebp)
 876e093:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 876e099:	85 f6                	test   %esi,%esi
 876e09b:	0f 84 2f 01 00 00    	je     876e1d0 <_ZN8TaoCryptL12Transform256EPjS0_+0xd30>
 876e0a1:	8b 75 d0             	mov    -0x30(%ebp),%esi
 876e0a4:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 876e0a7:	01 f7                	add    %esi,%edi
 876e0a9:	8b 75 c8             	mov    -0x38(%ebp),%esi
 876e0ac:	89 bd 78 ff ff ff    	mov    %edi,-0x88(%ebp)
 876e0b2:	8b 7d c8             	mov    -0x38(%ebp),%edi
 876e0b5:	c1 ce 11             	ror    $0x11,%esi
 876e0b8:	c1 ef 0a             	shr    $0xa,%edi
 876e0bb:	31 fe                	xor    %edi,%esi
 876e0bd:	8b 7d c8             	mov    -0x38(%ebp),%edi
 876e0c0:	c1 cf 13             	ror    $0x13,%edi
 876e0c3:	31 fe                	xor    %edi,%esi
 876e0c5:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 876e0c8:	03 b5 78 ff ff ff    	add    -0x88(%ebp),%esi
 876e0ce:	89 75 8c             	mov    %esi,-0x74(%ebp)
 876e0d1:	8b 75 94             	mov    -0x6c(%ebp),%esi
 876e0d4:	c1 ef 03             	shr    $0x3,%edi
 876e0d7:	c1 ce 07             	ror    $0x7,%esi
 876e0da:	31 fe                	xor    %edi,%esi
 876e0dc:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 876e0df:	c1 cf 12             	ror    $0x12,%edi
 876e0e2:	31 fe                	xor    %edi,%esi
 876e0e4:	03 75 8c             	add    -0x74(%ebp),%esi
 876e0e7:	89 b5 78 ff ff ff    	mov    %esi,-0x88(%ebp)
 876e0ed:	89 75 d0             	mov    %esi,-0x30(%ebp)
 876e0f0:	8b 75 88             	mov    -0x78(%ebp),%esi
 876e0f3:	8b 7d 84             	mov    -0x7c(%ebp),%edi
 876e0f6:	03 b5 74 ff ff ff    	add    -0x8c(%ebp),%esi
 876e0fc:	33 bd 7c ff ff ff    	xor    -0x84(%ebp),%edi
 876e102:	23 7d 90             	and    -0x70(%ebp),%edi
 876e105:	33 bd 7c ff ff ff    	xor    -0x84(%ebp),%edi
 876e10b:	83 85 70 ff ff ff 10 	addl   $0x10,-0x90(%ebp)
 876e112:	83 85 6c ff ff ff 40 	addl   $0x40,-0x94(%ebp)
 876e119:	01 f7                	add    %esi,%edi
 876e11b:	8b 75 90             	mov    -0x70(%ebp),%esi
 876e11e:	89 7d 88             	mov    %edi,-0x78(%ebp)
 876e121:	8b 7d 90             	mov    -0x70(%ebp),%edi
 876e124:	c1 ce 06             	ror    $0x6,%esi
 876e127:	c1 cf 0b             	ror    $0xb,%edi
 876e12a:	31 f7                	xor    %esi,%edi
 876e12c:	8b 75 90             	mov    -0x70(%ebp),%esi
 876e12f:	c1 ce 19             	ror    $0x19,%esi
 876e132:	31 f7                	xor    %esi,%edi
 876e134:	8b 75 80             	mov    -0x80(%ebp),%esi
 876e137:	03 7d 88             	add    -0x78(%ebp),%edi
 876e13a:	03 bd 78 ff ff ff    	add    -0x88(%ebp),%edi
 876e140:	01 fe                	add    %edi,%esi
 876e142:	89 7d 88             	mov    %edi,-0x78(%ebp)
 876e145:	89 cf                	mov    %ecx,%edi
 876e147:	09 d7                	or     %edx,%edi
 876e149:	21 ca                	and    %ecx,%edx
 876e14b:	21 c7                	and    %eax,%edi
 876e14d:	89 c8                	mov    %ecx,%eax
 876e14f:	09 d7                	or     %edx,%edi
 876e151:	89 ca                	mov    %ecx,%edx
 876e153:	c1 c8 0d             	ror    $0xd,%eax
 876e156:	c1 ca 02             	ror    $0x2,%edx
 876e159:	31 d0                	xor    %edx,%eax
 876e15b:	c1 c9 16             	ror    $0x16,%ecx
 876e15e:	31 c8                	xor    %ecx,%eax
 876e160:	01 c7                	add    %eax,%edi
 876e162:	03 7d 88             	add    -0x78(%ebp),%edi
 876e165:	83 bd 70 ff ff ff 40 	cmpl   $0x40,-0x90(%ebp)
 876e16c:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 876e16f:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 876e172:	0f 85 9d f3 ff ff    	jne    876d515 <_ZN8TaoCryptL12Transform256EPjS0_+0x75>
 876e178:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 876e17e:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 876e184:	01 38                	add    %edi,(%eax)
 876e186:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876e189:	01 42 04             	add    %eax,0x4(%edx)
 876e18c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 876e18f:	01 42 08             	add    %eax,0x8(%edx)
 876e192:	8b 45 e0             	mov    -0x20(%ebp),%eax
 876e195:	01 42 0c             	add    %eax,0xc(%edx)
 876e198:	01 72 10             	add    %esi,0x10(%edx)
 876e19b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 876e19e:	01 42 14             	add    %eax,0x14(%edx)
 876e1a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 876e1a4:	01 42 18             	add    %eax,0x18(%edx)
 876e1a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 876e1aa:	01 42 1c             	add    %eax,0x1c(%edx)
 876e1ad:	31 c0                	xor    %eax,%eax
 876e1af:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 876e1b2:	c7 04 02 00 00 00 00 	movl   $0x0,(%edx,%eax,1)
 876e1b9:	83 c0 04             	add    $0x4,%eax
 876e1bc:	83 f8 20             	cmp    $0x20,%eax
 876e1bf:	72 f1                	jb     876e1b2 <_ZN8TaoCryptL12Transform256EPjS0_+0xd12>
 876e1c1:	81 c4 94 00 00 00    	add    $0x94,%esp
 876e1c7:	5b                   	pop    %ebx
 876e1c8:	5e                   	pop    %esi
 876e1c9:	5f                   	pop    %edi
 876e1ca:	5d                   	pop    %ebp
 876e1cb:	c3                   	ret
 876e1cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876e1d0:	8b b5 64 ff ff ff    	mov    -0x9c(%ebp),%esi
 876e1d6:	8b 76 3c             	mov    0x3c(%esi),%esi
 876e1d9:	89 b5 78 ff ff ff    	mov    %esi,-0x88(%ebp)
 876e1df:	89 75 d0             	mov    %esi,-0x30(%ebp)
 876e1e2:	e9 09 ff ff ff       	jmp    876e0f0 <_ZN8TaoCryptL12Transform256EPjS0_+0xc50>
 876e1e7:	90                   	nop
 876e1e8:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 876e1ee:	8b 79 38             	mov    0x38(%ecx),%edi
 876e1f1:	89 7d cc             	mov    %edi,-0x34(%ebp)
 876e1f4:	e9 10 fe ff ff       	jmp    876e009 <_ZN8TaoCryptL12Transform256EPjS0_+0xb69>
 876e1f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e200:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876e206:	8b 72 34             	mov    0x34(%edx),%esi
 876e209:	89 75 c8             	mov    %esi,-0x38(%ebp)
 876e20c:	e9 31 fd ff ff       	jmp    876df42 <_ZN8TaoCryptL12Transform256EPjS0_+0xaa2>
 876e211:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e218:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 876e21e:	8b 48 30             	mov    0x30(%eax),%ecx
 876e221:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 876e224:	e9 57 fc ff ff       	jmp    876de80 <_ZN8TaoCryptL12Transform256EPjS0_+0x9e0>
 876e229:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e230:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 876e236:	8b 70 2c             	mov    0x2c(%eax),%esi
 876e239:	89 75 c0             	mov    %esi,-0x40(%ebp)
 876e23c:	e9 7f fb ff ff       	jmp    876ddc0 <_ZN8TaoCryptL12Transform256EPjS0_+0x920>
 876e241:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e248:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 876e24e:	8b 70 28             	mov    0x28(%eax),%esi
 876e251:	89 75 bc             	mov    %esi,-0x44(%ebp)
 876e254:	e9 a2 fa ff ff       	jmp    876dcfb <_ZN8TaoCryptL12Transform256EPjS0_+0x85b>
 876e259:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e260:	8b b5 64 ff ff ff    	mov    -0x9c(%ebp),%esi
 876e266:	8b 46 24             	mov    0x24(%esi),%eax
 876e269:	89 45 b8             	mov    %eax,-0x48(%ebp)
 876e26c:	e9 c5 f9 ff ff       	jmp    876dc36 <_ZN8TaoCryptL12Transform256EPjS0_+0x796>
 876e271:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e278:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876e27e:	8b 4a 20             	mov    0x20(%edx),%ecx
 876e281:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876e284:	e9 e8 f8 ff ff       	jmp    876db71 <_ZN8TaoCryptL12Transform256EPjS0_+0x6d1>
 876e289:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e290:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 876e296:	8b 48 1c             	mov    0x1c(%eax),%ecx
 876e299:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 876e29c:	e9 0f f8 ff ff       	jmp    876dab0 <_ZN8TaoCryptL12Transform256EPjS0_+0x610>
 876e2a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e2a8:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 876e2ae:	8b 48 18             	mov    0x18(%eax),%ecx
 876e2b1:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 876e2b4:	e9 3d f7 ff ff       	jmp    876d9f6 <_ZN8TaoCryptL12Transform256EPjS0_+0x556>
 876e2b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e2c0:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 876e2c6:	8b 41 14             	mov    0x14(%ecx),%eax
 876e2c9:	89 45 a8             	mov    %eax,-0x58(%ebp)
 876e2cc:	e9 63 f6 ff ff       	jmp    876d934 <_ZN8TaoCryptL12Transform256EPjS0_+0x494>
 876e2d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e2d8:	8b b5 64 ff ff ff    	mov    -0x9c(%ebp),%esi
 876e2de:	8b 56 10             	mov    0x10(%esi),%edx
 876e2e1:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 876e2e4:	e9 86 f5 ff ff       	jmp    876d86f <_ZN8TaoCryptL12Transform256EPjS0_+0x3cf>
 876e2e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e2f0:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876e2f6:	8b 72 0c             	mov    0xc(%edx),%esi
 876e2f9:	89 75 a0             	mov    %esi,-0x60(%ebp)
 876e2fc:	e9 ad f4 ff ff       	jmp    876d7ae <_ZN8TaoCryptL12Transform256EPjS0_+0x30e>
 876e301:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e308:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876e30e:	8b 72 08             	mov    0x8(%edx),%esi
 876e311:	89 75 9c             	mov    %esi,-0x64(%ebp)
 876e314:	e9 d8 f3 ff ff       	jmp    876d6f1 <_ZN8TaoCryptL12Transform256EPjS0_+0x251>
 876e319:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e320:	8b bd 64 ff ff ff    	mov    -0x9c(%ebp),%edi
 876e326:	8b 4f 04             	mov    0x4(%edi),%ecx
 876e329:	89 4d 98             	mov    %ecx,-0x68(%ebp)
 876e32c:	e9 fd f2 ff ff       	jmp    876d62e <_ZN8TaoCryptL12Transform256EPjS0_+0x18e>
 876e331:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876e338:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 876e33e:	8b 08                	mov    (%eax),%ecx
 876e340:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 876e343:	e9 1e f2 ff ff       	jmp    876d566 <_ZN8TaoCryptL12Transform256EPjS0_+0xc6>
 876e348:	90                   	nop
 876e349:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::Transform256 @ 0x876d4a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Transform256(unsigned int*, unsigned int*) */

void __regparm3 TaoCrypt::Transform256(uint *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *local_98;
  int local_94;
  uint local_88;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30 [8];
  
  local_30[0] = *param_1;
  local_30[1] = param_1[1];
  local_30[2] = param_1[2];
  local_30[3] = param_1[3];
  uVar4 = param_1[4];
  local_30[5] = param_1[5];
  local_30[6] = param_1[6];
  local_88 = param_1[7];
  local_98 = &K256;
  local_94 = 0;
  do {
    if (local_94 == 0) {
      local_70 = *param_2;
    }
    else {
      local_70 = local_4c + local_70 +
                 ((local_38 >> 0x11 | local_38 << 0xf) ^ local_38 >> 10 ^
                 (local_38 >> 0x13 | local_38 << 0xd)) +
                 ((local_6c >> 7 | local_6c << 0x19) ^ local_6c >> 3 ^
                 (local_6c >> 0x12 | local_6c << 0xe));
    }
    iVar7 = *local_98 + local_88 +
            ((uVar4 >> 0xb | uVar4 << 0x15) ^ (uVar4 >> 6 | uVar4 << 0x1a) ^
            (uVar4 >> 0x19 | uVar4 << 7)) + ((local_30[6] ^ local_30[5]) & uVar4 ^ local_30[6]) +
            local_70;
    local_30[3] = local_30[3] + iVar7;
    uVar2 = ((local_30[1] | local_30[0]) & local_30[2] | local_30[1] & local_30[0]) +
            ((local_30[0] >> 0xd | local_30[0] << 0x13) ^ (local_30[0] >> 2 | local_30[0] << 0x1e) ^
            (local_30[0] >> 0x16 | local_30[0] << 10)) + iVar7;
    if (local_94 == 0) {
      local_6c = param_2[1];
    }
    else {
      local_6c = ((local_68 >> 7 | local_68 << 0x19) ^ local_68 >> 3 ^
                 (local_68 >> 0x12 | local_68 << 0xe)) +
                 local_48 + local_6c +
                 ((local_34 >> 0x11 | local_34 << 0xf) ^ local_34 >> 10 ^
                 (local_34 >> 0x13 | local_34 << 0xd));
    }
    iVar7 = ((local_30[3] >> 0xb | local_30[3] * 0x200000) ^
             (local_30[3] >> 6 | local_30[3] * 0x4000000) ^
            (local_30[3] >> 0x19 | local_30[3] * 0x80)) +
            local_98[1] + local_30[6] + ((local_30[5] ^ uVar4) & local_30[3] ^ local_30[5]) +
            local_6c;
    local_30[2] = local_30[2] + iVar7;
    uVar6 = ((uVar2 | local_30[0]) & local_30[1] | local_30[0] & uVar2) +
            ((uVar2 >> 0xd | uVar2 * 0x80000) ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^
            (uVar2 >> 0x16 | uVar2 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_68 = param_2[2];
    }
    else {
      local_68 = local_44 + local_68 +
                 ((local_70 >> 0x11 | local_70 << 0xf) ^ local_70 >> 10 ^
                 (local_70 >> 0x13 | local_70 << 0xd)) +
                 ((local_64 >> 7 | local_64 << 0x19) ^ local_64 >> 3 ^
                 (local_64 >> 0x12 | local_64 << 0xe));
    }
    iVar7 = local_98[2] + local_30[5] + ((local_30[3] ^ uVar4) & local_30[2] ^ uVar4) +
            ((local_30[2] >> 0xb | local_30[2] * 0x200000) ^
             (local_30[2] >> 6 | local_30[2] * 0x4000000) ^
            (local_30[2] >> 0x19 | local_30[2] * 0x80)) + local_68;
    local_30[1] = local_30[1] + iVar7;
    uVar3 = ((uVar6 | uVar2) & local_30[0] | uVar6 & uVar2) +
            ((uVar6 >> 0xd | uVar6 * 0x80000) ^ (uVar6 >> 2 | uVar6 * 0x40000000) ^
            (uVar6 >> 0x16 | uVar6 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_64 = param_2[3];
    }
    else {
      local_64 = local_40 + local_64 +
                 ((local_6c >> 0x11 | local_6c << 0xf) ^ local_6c >> 10 ^
                 (local_6c >> 0x13 | local_6c << 0xd)) +
                 ((local_60 >> 7 | local_60 << 0x19) ^ local_60 >> 3 ^
                 (local_60 >> 0x12 | local_60 << 0xe));
    }
    iVar7 = local_98[3] + uVar4 + ((local_30[2] ^ local_30[3]) & local_30[1] ^ local_30[3]) +
            ((local_30[1] >> 0xb | local_30[1] * 0x200000) ^
             (local_30[1] >> 6 | local_30[1] * 0x4000000) ^
            (local_30[1] >> 0x19 | local_30[1] * 0x80)) + local_64;
    local_30[0] = local_30[0] + iVar7;
    uVar4 = ((uVar3 | uVar6) & uVar2 | uVar3 & uVar6) +
            ((uVar3 >> 0xd | uVar3 * 0x80000) ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^
            (uVar3 >> 0x16 | uVar3 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_60 = param_2[4];
    }
    else {
      local_60 = local_3c + local_60 +
                 ((local_68 >> 0x11 | local_68 << 0xf) ^ local_68 >> 10 ^
                 (local_68 >> 0x13 | local_68 << 0xd)) +
                 ((local_5c >> 7 | local_5c << 0x19) ^ local_5c >> 3 ^
                 (local_5c >> 0x12 | local_5c << 0xe));
    }
    iVar7 = local_98[4] + local_30[3] + ((local_30[1] ^ local_30[2]) & local_30[0] ^ local_30[2]) +
            ((local_30[0] >> 0xb | local_30[0] * 0x200000) ^
             (local_30[0] >> 6 | local_30[0] * 0x4000000) ^
            (local_30[0] >> 0x19 | local_30[0] * 0x80)) + local_60;
    uVar2 = iVar7 + uVar2;
    uVar8 = ((uVar4 | uVar3) & uVar6 | uVar4 & uVar3) +
            ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
            (uVar4 >> 0x16 | uVar4 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_5c = param_2[5];
    }
    else {
      local_5c = local_38 + local_5c +
                 ((local_64 >> 0x11 | local_64 << 0xf) ^ local_64 >> 10 ^
                 (local_64 >> 0x13 | local_64 << 0xd)) +
                 ((local_58 >> 7 | local_58 << 0x19) ^ local_58 >> 3 ^
                 (local_58 >> 0x12 | local_58 << 0xe));
    }
    iVar7 = local_98[5] + local_30[2] + ((local_30[0] ^ local_30[1]) & uVar2 ^ local_30[1]) +
            ((uVar2 >> 0xb | uVar2 * 0x200000) ^ (uVar2 >> 6 | uVar2 * 0x4000000) ^
            (uVar2 >> 0x19 | uVar2 * 0x80)) + local_5c;
    uVar6 = uVar6 + iVar7;
    uVar5 = ((uVar4 | uVar8) & uVar3 | uVar4 & uVar8) +
            ((uVar8 >> 0xd | uVar8 * 0x80000) ^ (uVar8 >> 2 | uVar8 * 0x40000000) ^
            (uVar8 >> 0x16 | uVar8 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_58 = param_2[6];
    }
    else {
      local_58 = local_34 + local_58 +
                 ((local_60 >> 0x11 | local_60 << 0xf) ^ local_60 >> 10 ^
                 (local_60 >> 0x13 | local_60 << 0xd)) +
                 ((local_54 >> 7 | local_54 << 0x19) ^ local_54 >> 3 ^
                 (local_54 >> 0x12 | local_54 << 0xe));
    }
    iVar7 = local_30[1] + local_98[6] + ((uVar2 ^ local_30[0]) & uVar6 ^ local_30[0]) +
            ((uVar6 >> 0xb | uVar6 * 0x200000) ^ (uVar6 >> 6 | uVar6 * 0x4000000) ^
            (uVar6 >> 0x19 | uVar6 * 0x80)) + local_58;
    uVar3 = uVar3 + iVar7;
    uVar9 = ((uVar5 | uVar8) & uVar4 | uVar5 & uVar8) +
            ((uVar5 >> 0xd | uVar5 * 0x80000) ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^
            (uVar5 >> 0x16 | uVar5 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_54 = param_2[7];
    }
    else {
      local_54 = local_70 + local_54 +
                 ((local_5c >> 0x11 | local_5c << 0xf) ^ local_5c >> 10 ^
                 (local_5c >> 0x13 | local_5c << 0xd)) +
                 ((local_50 >> 7 | local_50 << 0x19) ^ local_50 >> 3 ^
                 (local_50 >> 0x12 | local_50 << 0xe));
    }
    iVar7 = local_30[0] + local_98[7] + ((uVar6 ^ uVar2) & uVar3 ^ uVar2) +
            ((uVar3 >> 0xb | uVar3 * 0x200000) ^ (uVar3 >> 6 | uVar3 * 0x4000000) ^
            (uVar3 >> 0x19 | uVar3 * 0x80)) + local_54;
    uVar4 = uVar4 + iVar7;
    uVar10 = ((uVar9 | uVar5) & uVar8 | uVar9 & uVar5) +
             ((uVar9 >> 0xd | uVar9 * 0x80000) ^ (uVar9 >> 2 | uVar9 * 0x40000000) ^
             (uVar9 >> 0x16 | uVar9 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_50 = param_2[8];
    }
    else {
      local_50 = local_6c + local_50 +
                 ((local_58 >> 0x11 | local_58 << 0xf) ^ local_58 >> 10 ^
                 (local_58 >> 0x13 | local_58 << 0xd)) +
                 ((local_4c >> 7 | local_4c << 0x19) ^ local_4c >> 3 ^
                 (local_4c >> 0x12 | local_4c << 0xe));
    }
    iVar7 = local_98[8] + uVar2 + ((uVar3 ^ uVar6) & uVar4 ^ uVar6) +
            ((uVar4 >> 0xb | uVar4 * 0x200000) ^ (uVar4 >> 6 | uVar4 * 0x4000000) ^
            (uVar4 >> 0x19 | uVar4 * 0x80)) + local_50;
    uVar8 = iVar7 + uVar8;
    local_88 = ((uVar10 | uVar9) & uVar5 | uVar10 & uVar9) +
               ((uVar10 >> 0xd | uVar10 * 0x80000) ^ (uVar10 >> 2 | uVar10 * 0x40000000) ^
               (uVar10 >> 0x16 | uVar10 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_4c = param_2[9];
    }
    else {
      local_4c = local_68 + local_4c +
                 ((local_54 >> 0x11 | local_54 << 0xf) ^ local_54 >> 10 ^
                 (local_54 >> 0x13 | local_54 << 0xd)) +
                 ((local_48 >> 7 | local_48 << 0x19) ^ local_48 >> 3 ^
                 (local_48 >> 0x12 | local_48 << 0xe));
    }
    iVar7 = local_98[9] + uVar6 + ((uVar4 ^ uVar3) & uVar8 ^ uVar3) +
            ((uVar8 >> 0xb | uVar8 * 0x200000) ^ (uVar8 >> 6 | uVar8 * 0x4000000) ^
            (uVar8 >> 0x19 | uVar8 * 0x80)) + local_4c;
    uVar5 = uVar5 + iVar7;
    local_30[6] = ((uVar10 | local_88) & uVar9 | uVar10 & local_88) +
                  ((local_88 >> 0xd | local_88 * 0x80000) ^ (local_88 >> 2 | local_88 * 0x40000000)
                  ^ (local_88 >> 0x16 | local_88 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_48 = param_2[10];
    }
    else {
      local_48 = local_64 + local_48 +
                 ((local_50 >> 0x11 | local_50 << 0xf) ^ local_50 >> 10 ^
                 (local_50 >> 0x13 | local_50 << 0xd)) +
                 ((local_44 >> 7 | local_44 << 0x19) ^ local_44 >> 3 ^
                 (local_44 >> 0x12 | local_44 << 0xe));
    }
    iVar7 = local_98[10] + uVar3 + ((uVar8 ^ uVar4) & uVar5 ^ uVar4) +
            ((uVar5 >> 0xb | uVar5 * 0x200000) ^ (uVar5 >> 6 | uVar5 * 0x4000000) ^
            (uVar5 >> 0x19 | uVar5 * 0x80)) + local_48;
    uVar9 = uVar9 + iVar7;
    local_30[5] = ((local_30[6] | local_88) & uVar10 | local_30[6] & local_88) +
                  ((local_30[6] >> 0xd | local_30[6] * 0x80000) ^
                   (local_30[6] >> 2 | local_30[6] * 0x40000000) ^
                  (local_30[6] >> 0x16 | local_30[6] * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_44 = param_2[0xb];
    }
    else {
      local_44 = local_60 + local_44 +
                 ((local_4c >> 0x11 | local_4c << 0xf) ^ local_4c >> 10 ^
                 (local_4c >> 0x13 | local_4c << 0xd)) +
                 ((local_40 >> 7 | local_40 << 0x19) ^ local_40 >> 3 ^
                 (local_40 >> 0x12 | local_40 << 0xe));
    }
    iVar7 = local_98[0xb] + uVar4 + ((uVar5 ^ uVar8) & uVar9 ^ uVar8) +
            ((uVar9 >> 0xb | uVar9 * 0x200000) ^ (uVar9 >> 6 | uVar9 * 0x4000000) ^
            (uVar9 >> 0x19 | uVar9 * 0x80)) + local_44;
    uVar10 = uVar10 + iVar7;
    uVar4 = ((local_30[5] | local_30[6]) & local_88 | local_30[5] & local_30[6]) +
            ((local_30[5] >> 0xd | local_30[5] * 0x80000) ^
             (local_30[5] >> 2 | local_30[5] * 0x40000000) ^
            (local_30[5] >> 0x16 | local_30[5] * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_40 = param_2[0xc];
    }
    else {
      local_40 = local_5c + local_40 +
                 ((local_48 >> 0x11 | local_48 << 0xf) ^ local_48 >> 10 ^
                 (local_48 >> 0x13 | local_48 << 0xd)) +
                 ((local_3c >> 7 | local_3c << 0x19) ^ local_3c >> 3 ^
                 (local_3c >> 0x12 | local_3c << 0xe));
    }
    iVar7 = local_98[0xc] + uVar8 + ((uVar9 ^ uVar5) & uVar10 ^ uVar5) +
            ((uVar10 >> 0xb | uVar10 * 0x200000) ^ (uVar10 >> 6 | uVar10 * 0x4000000) ^
            (uVar10 >> 0x19 | uVar10 * 0x80)) + local_40;
    local_88 = iVar7 + local_88;
    local_30[3] = ((uVar4 | local_30[5]) & local_30[6] | uVar4 & local_30[5]) +
                  ((uVar4 >> 0xd | uVar4 * 0x80000) ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^
                  (uVar4 >> 0x16 | uVar4 * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_3c = param_2[0xd];
    }
    else {
      local_3c = local_58 + local_3c +
                 ((local_44 >> 0x11 | local_44 << 0xf) ^ local_44 >> 10 ^
                 (local_44 >> 0x13 | local_44 << 0xd)) +
                 ((local_38 >> 7 | local_38 << 0x19) ^ local_38 >> 3 ^
                 (local_38 >> 0x12 | local_38 << 0xe));
    }
    iVar7 = local_98[0xd] + uVar5 + ((uVar10 ^ uVar9) & local_88 ^ uVar9) +
            ((local_88 >> 0xb | local_88 * 0x200000) ^ (local_88 >> 6 | local_88 * 0x4000000) ^
            (local_88 >> 0x19 | local_88 * 0x80)) + local_3c;
    local_30[6] = local_30[6] + iVar7;
    local_30[2] = ((uVar4 | local_30[3]) & local_30[5] | uVar4 & local_30[3]) +
                  ((local_30[3] >> 0xd | local_30[3] * 0x80000) ^
                   (local_30[3] >> 2 | local_30[3] * 0x40000000) ^
                  (local_30[3] >> 0x16 | local_30[3] * 0x400)) + iVar7;
    if (local_94 == 0) {
      local_38 = param_2[0xe];
    }
    else {
      local_38 = ((local_34 >> 7 | local_34 << 0x19) ^ local_34 >> 3 ^
                 (local_34 >> 0x12 | local_34 << 0xe)) +
                 local_54 + local_38 +
                 ((local_40 >> 0x11 | local_40 << 0xf) ^ local_40 >> 10 ^
                 (local_40 >> 0x13 | local_40 << 0xd));
    }
    iVar7 = local_98[0xe] + uVar9 + ((local_88 ^ uVar10) & local_30[6] ^ uVar10) +
            ((local_30[6] >> 0xb | local_30[6] * 0x200000) ^
             (local_30[6] >> 6 | local_30[6] * 0x4000000) ^
            (local_30[6] >> 0x19 | local_30[6] * 0x80)) + local_38;
    local_30[5] = local_30[5] + iVar7;
    local_30[1] = ((local_30[2] | local_30[3]) & uVar4 | local_30[2] & local_30[3]) +
                  ((local_30[2] >> 0xd | local_30[2] * 0x80000) ^
                   (local_30[2] >> 2 | local_30[2] * 0x40000000) ^
                  (local_30[2] >> 0x16 | local_30[2] * 0x400)) + iVar7;
    piVar1 = local_98 + 0xf;
    if (local_94 == 0) {
      local_34 = param_2[0xf];
    }
    else {
      local_34 = ((local_70 >> 7 | local_70 << 0x19) ^ local_70 >> 3 ^
                 (local_70 >> 0x12 | local_70 << 0xe)) +
                 ((local_3c >> 0x11 | local_3c << 0xf) ^ local_3c >> 10 ^
                 (local_3c >> 0x13 | local_3c << 0xd)) + local_50 + local_34;
    }
    local_94 = local_94 + 0x10;
    local_98 = local_98 + 0x10;
    iVar7 = ((local_30[5] >> 0xb | local_30[5] * 0x200000) ^
             (local_30[5] >> 6 | local_30[5] * 0x4000000) ^
            (local_30[5] >> 0x19 | local_30[5] * 0x80)) +
            ((local_30[6] ^ local_88) & local_30[5] ^ local_88) + uVar10 + *piVar1 + local_34;
    uVar4 = uVar4 + iVar7;
    local_30[0] = ((local_30[1] | local_30[2]) & local_30[3] | local_30[2] & local_30[1]) +
                  ((local_30[1] >> 0xd | local_30[1] * 0x80000) ^
                   (local_30[1] >> 2 | local_30[1] * 0x40000000) ^
                  (local_30[1] >> 0x16 | local_30[1] * 0x400)) + iVar7;
  } while (local_94 != 0x40);
  *param_1 = *param_1 + local_30[0];
  param_1[1] = param_1[1] + local_30[1];
  param_1[2] = param_1[2] + local_30[2];
  param_1[3] = param_1[3] + local_30[3];
  param_1[4] = param_1[4] + uVar4;
  param_1[5] = param_1[5] + local_30[5];
  param_1[6] = param_1[6] + local_30[6];
  param_1[7] = param_1[7] + local_88;
  uVar4 = 0;
  do {
    *(undefined4 *)((int)local_30 + uVar4) = 0;
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x20);
  return;
}

```

---

## Transform512

```asm
// === 08769570 TaoCrypt::Transform512  [0x08769570-0x876d45f] ===
 8769570:	55                   	push   %ebp
 8769571:	89 e5                	mov    %esp,%ebp
 8769573:	57                   	push   %edi
 8769574:	56                   	push   %esi
 8769575:	53                   	push   %ebx
 8769576:	81 ec 44 04 00 00    	sub    $0x444,%esp
 876957c:	89 95 bc fe ff ff    	mov    %edx,-0x144(%ebp)
 8769582:	89 c2                	mov    %eax,%edx
 8769584:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 876958a:	8b 00                	mov    (%eax),%eax
 876958c:	e8 67 98 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8769591:	81 c3 07 36 c0 00    	add    $0xc03607,%ebx
 8769597:	89 45 b0             	mov    %eax,-0x50(%ebp)
 876959a:	8b 42 04             	mov    0x4(%edx),%eax
 876959d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 87695a0:	8b 42 08             	mov    0x8(%edx),%eax
 87695a3:	89 45 b8             	mov    %eax,-0x48(%ebp)
 87695a6:	8b 42 0c             	mov    0xc(%edx),%eax
 87695a9:	89 45 bc             	mov    %eax,-0x44(%ebp)
 87695ac:	8b 42 10             	mov    0x10(%edx),%eax
 87695af:	89 45 c0             	mov    %eax,-0x40(%ebp)
 87695b2:	8b 42 14             	mov    0x14(%edx),%eax
 87695b5:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87695b8:	8b 42 18             	mov    0x18(%edx),%eax
 87695bb:	89 45 c8             	mov    %eax,-0x38(%ebp)
 87695be:	8b 42 1c             	mov    0x1c(%edx),%eax
 87695c1:	89 45 cc             	mov    %eax,-0x34(%ebp)
 87695c4:	8b 42 20             	mov    0x20(%edx),%eax
 87695c7:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87695ca:	8b 42 24             	mov    0x24(%edx),%eax
 87695cd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87695d0:	8b 42 28             	mov    0x28(%edx),%eax
 87695d3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 87695d6:	8b 42 2c             	mov    0x2c(%edx),%eax
 87695d9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87695dc:	8b 42 30             	mov    0x30(%edx),%eax
 87695df:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87695e2:	8b 42 34             	mov    0x34(%edx),%eax
 87695e5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87695e8:	8b 42 38             	mov    0x38(%edx),%eax
 87695eb:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87695ee:	89 45 e8             	mov    %eax,-0x18(%ebp)
 87695f1:	8b 42 3c             	mov    0x3c(%edx),%eax
 87695f4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87695f7:	8b 75 e8             	mov    -0x18(%ebp),%esi
 87695fa:	c7 85 cc fe ff ff 00 	movl   $0x0,-0x134(%ebp)
 8769601:	00 00 00 
 8769604:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8769607:	8b 7d ec             	mov    -0x14(%ebp),%edi
 876960a:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 8769610:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8769613:	89 95 0c ff ff ff    	mov    %edx,-0xf4(%ebp)
 8769619:	8b 55 d8             	mov    -0x28(%ebp),%edx
 876961c:	89 b5 f8 fe ff ff    	mov    %esi,-0x108(%ebp)
 8769622:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8769625:	89 bd fc fe ff ff    	mov    %edi,-0x104(%ebp)
 876962b:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 876962e:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8769634:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876963a:	89 95 e8 fe ff ff    	mov    %edx,-0x118(%ebp)
 8769640:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 8769646:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876964c:	89 bd 1c ff ff ff    	mov    %edi,-0xe4(%ebp)
 8769652:	8d bb c8 88 99 ff    	lea    -0x667738(%ebx),%edi
 8769658:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 876965e:	89 f8                	mov    %edi,%eax
 8769660:	85 d2                	test   %edx,%edx
 8769662:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 8769668:	89 b5 18 ff ff ff    	mov    %esi,-0xe8(%ebp)
 876966e:	8b 30                	mov    (%eax),%esi
 8769670:	89 bd c8 fe ff ff    	mov    %edi,-0x138(%ebp)
 8769676:	8b 78 04             	mov    0x4(%eax),%edi
 8769679:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876967f:	89 8d ec fe ff ff    	mov    %ecx,-0x114(%ebp)
 8769685:	0f 84 98 3a 00 00    	je     876d123 <_ZN8TaoCryptL12Transform512EPyS0_+0x3bb3>
 876968b:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 8769691:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 8769697:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 876969d:	89 95 20 ff ff ff    	mov    %edx,-0xe0(%ebp)
 87696a3:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 87696a9:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 87696af:	89 8d 24 ff ff ff    	mov    %ecx,-0xdc(%ebp)
 87696b5:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87696b8:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 87696be:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87696c1:	89 d0                	mov    %edx,%eax
 87696c3:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 87696c7:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 87696cb:	89 95 10 ff ff ff    	mov    %edx,-0xf0(%ebp)
 87696d1:	8b 55 a0             	mov    -0x60(%ebp),%edx
 87696d4:	89 8d 14 ff ff ff    	mov    %ecx,-0xec(%ebp)
 87696da:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 87696dd:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 87696e3:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 87696e7:	c1 e9 06             	shr    $0x6,%ecx
 87696ea:	89 8d f4 fe ff ff    	mov    %ecx,-0x10c(%ebp)
 87696f0:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 87696f6:	33 85 f4 fe ff ff    	xor    -0x10c(%ebp),%eax
 87696fc:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8769702:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8769705:	31 d1                	xor    %edx,%ecx
 8769707:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 876970a:	89 8d d0 fe ff ff    	mov    %ecx,-0x130(%ebp)
 8769710:	89 c1                	mov    %eax,%ecx
 8769712:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 8769716:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876971a:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 8769720:	31 c1                	xor    %eax,%ecx
 8769722:	89 8d b0 fc ff ff    	mov    %ecx,-0x350(%ebp)
 8769728:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876972e:	8b 85 b0 fc ff ff    	mov    -0x350(%ebp),%eax
 8769734:	31 d1                	xor    %edx,%ecx
 8769736:	89 8d b4 fc ff ff    	mov    %ecx,-0x34c(%ebp)
 876973c:	8b 95 b4 fc ff ff    	mov    -0x34c(%ebp),%edx
 8769742:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 8769748:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 876974e:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 8769754:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 876975a:	89 d0                	mov    %edx,%eax
 876975c:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 8769760:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 8769764:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 876976a:	89 95 00 ff ff ff    	mov    %edx,-0x100(%ebp)
 8769770:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 8769776:	89 8d 04 ff ff ff    	mov    %ecx,-0xfc(%ebp)
 876977c:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 8769782:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 8769786:	33 95 00 ff ff ff    	xor    -0x100(%ebp),%edx
 876978c:	c1 e9 07             	shr    $0x7,%ecx
 876978f:	33 8d 04 ff ff ff    	xor    -0xfc(%ebp),%ecx
 8769795:	89 95 f0 fe ff ff    	mov    %edx,-0x110(%ebp)
 876979b:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 87697a1:	89 8d 10 ff ff ff    	mov    %ecx,-0xf0(%ebp)
 87697a7:	89 c1                	mov    %eax,%ecx
 87697a9:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 87697ad:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 87697b1:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 87697b7:	31 c1                	xor    %eax,%ecx
 87697b9:	89 8d a8 fc ff ff    	mov    %ecx,-0x358(%ebp)
 87697bf:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 87697c5:	8b 85 a8 fc ff ff    	mov    -0x358(%ebp),%eax
 87697cb:	31 d1                	xor    %edx,%ecx
 87697cd:	89 8d ac fc ff ff    	mov    %ecx,-0x354(%ebp)
 87697d3:	8b 95 ac fc ff ff    	mov    -0x354(%ebp),%edx
 87697d9:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 87697df:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 87697e5:	8b 8d 24 ff ff ff    	mov    -0xdc(%ebp),%ecx
 87697eb:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 87697f1:	89 8d 34 ff ff ff    	mov    %ecx,-0xcc(%ebp)
 87697f7:	89 95 30 ff ff ff    	mov    %edx,-0xd0(%ebp)
 87697fd:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 8769803:	8b 95 fc fe ff ff    	mov    -0x104(%ebp),%edx
 8769809:	01 f0                	add    %esi,%eax
 876980b:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 8769811:	11 fa                	adc    %edi,%edx
 8769813:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 8769819:	89 f1                	mov    %esi,%ecx
 876981b:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876981f:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 8769823:	89 b5 10 ff ff ff    	mov    %esi,-0xf0(%ebp)
 8769829:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876982f:	89 bd 14 ff ff ff    	mov    %edi,-0xec(%ebp)
 8769835:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876983b:	89 f1                	mov    %esi,%ecx
 876983d:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 8769841:	33 b5 10 ff ff ff    	xor    -0xf0(%ebp),%esi
 8769847:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876984b:	33 bd 14 ff ff ff    	xor    -0xec(%ebp),%edi
 8769851:	89 b5 00 ff ff ff    	mov    %esi,-0x100(%ebp)
 8769857:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876985d:	89 bd 10 ff ff ff    	mov    %edi,-0xf0(%ebp)
 8769863:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 8769869:	89 f1                	mov    %esi,%ecx
 876986b:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876986f:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 8769873:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 8769879:	31 f1                	xor    %esi,%ecx
 876987b:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
 8769881:	89 8d b0 fe ff ff    	mov    %ecx,-0x150(%ebp)
 8769887:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876988d:	31 f9                	xor    %edi,%ecx
 876988f:	89 8d b4 fe ff ff    	mov    %ecx,-0x14c(%ebp)
 8769895:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 876989b:	03 85 b0 fe ff ff    	add    -0x150(%ebp),%eax
 87698a1:	13 95 b4 fe ff ff    	adc    -0x14c(%ebp),%edx
 87698a7:	33 8d e8 fe ff ff    	xor    -0x118(%ebp),%ecx
 87698ad:	33 b5 ec fe ff ff    	xor    -0x114(%ebp),%esi
 87698b3:	23 8d 08 ff ff ff    	and    -0xf8(%ebp),%ecx
 87698b9:	23 b5 0c ff ff ff    	and    -0xf4(%ebp),%esi
 87698bf:	33 8d 18 ff ff ff    	xor    -0xe8(%ebp),%ecx
 87698c5:	33 b5 1c ff ff ff    	xor    -0xe4(%ebp),%esi
 87698cb:	89 8d a8 fe ff ff    	mov    %ecx,-0x158(%ebp)
 87698d1:	89 b5 ac fe ff ff    	mov    %esi,-0x154(%ebp)
 87698d7:	03 85 a8 fe ff ff    	add    -0x158(%ebp),%eax
 87698dd:	13 95 ac fe ff ff    	adc    -0x154(%ebp),%edx
 87698e3:	03 85 20 ff ff ff    	add    -0xe0(%ebp),%eax
 87698e9:	13 95 24 ff ff ff    	adc    -0xdc(%ebp),%edx
 87698ef:	89 c6                	mov    %eax,%esi
 87698f1:	89 d7                	mov    %edx,%edi
 87698f3:	03 75 c8             	add    -0x38(%ebp),%esi
 87698f6:	13 7d cc             	adc    -0x34(%ebp),%edi
 87698f9:	89 b5 f0 fe ff ff    	mov    %esi,-0x110(%ebp)
 87698ff:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8769902:	89 bd f4 fe ff ff    	mov    %edi,-0x10c(%ebp)
 8769908:	8b 7d bc             	mov    -0x44(%ebp),%edi
 876990b:	8b 75 b8             	mov    -0x48(%ebp),%esi
 876990e:	0b 75 b0             	or     -0x50(%ebp),%esi
 8769911:	23 75 c0             	and    -0x40(%ebp),%esi
 8769914:	09 f9                	or     %edi,%ecx
 8769916:	89 8d f8 fe ff ff    	mov    %ecx,-0x108(%ebp)
 876991c:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 876991f:	21 8d f8 fe ff ff    	and    %ecx,-0x108(%ebp)
 8769925:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8769928:	23 4d b0             	and    -0x50(%ebp),%ecx
 876992b:	23 7d b4             	and    -0x4c(%ebp),%edi
 876992e:	0b bd f8 fe ff ff    	or     -0x108(%ebp),%edi
 8769934:	09 ce                	or     %ecx,%esi
 8769936:	89 b5 a0 fe ff ff    	mov    %esi,-0x160(%ebp)
 876993c:	8b 75 b0             	mov    -0x50(%ebp),%esi
 876993f:	89 bd a4 fe ff ff    	mov    %edi,-0x15c(%ebp)
 8769945:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 8769948:	89 f1                	mov    %esi,%ecx
 876994a:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876994e:	89 b5 f8 fe ff ff    	mov    %esi,-0x108(%ebp)
 8769954:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 8769958:	8b 75 b0             	mov    -0x50(%ebp),%esi
 876995b:	89 bd fc fe ff ff    	mov    %edi,-0x104(%ebp)
 8769961:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 8769964:	89 f1                	mov    %esi,%ecx
 8769966:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876996a:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876996e:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8769974:	89 bd 1c ff ff ff    	mov    %edi,-0xe4(%ebp)
 876997a:	8b bd f8 fe ff ff    	mov    -0x108(%ebp),%edi
 8769980:	33 8d 1c ff ff ff    	xor    -0xe4(%ebp),%ecx
 8769986:	31 f7                	xor    %esi,%edi
 8769988:	8b 75 b0             	mov    -0x50(%ebp),%esi
 876998b:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 8769991:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 8769994:	89 8d 18 ff ff ff    	mov    %ecx,-0xe8(%ebp)
 876999a:	89 f1                	mov    %esi,%ecx
 876999c:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 87699a0:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 87699a4:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 87699aa:	31 f1                	xor    %esi,%ecx
 87699ac:	89 8d 98 fe ff ff    	mov    %ecx,-0x168(%ebp)
 87699b2:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 87699b8:	31 f9                	xor    %edi,%ecx
 87699ba:	89 8d 9c fe ff ff    	mov    %ecx,-0x164(%ebp)
 87699c0:	8b b5 a0 fe ff ff    	mov    -0x160(%ebp),%esi
 87699c6:	03 b5 98 fe ff ff    	add    -0x168(%ebp),%esi
 87699cc:	8b bd a4 fe ff ff    	mov    -0x15c(%ebp),%edi
 87699d2:	13 bd 9c fe ff ff    	adc    -0x164(%ebp),%edi
 87699d8:	89 b5 f8 fe ff ff    	mov    %esi,-0x108(%ebp)
 87699de:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87699e1:	01 85 f8 fe ff ff    	add    %eax,-0x108(%ebp)
 87699e7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87699ea:	89 bd fc fe ff ff    	mov    %edi,-0x104(%ebp)
 87699f0:	8b 7d d0             	mov    -0x30(%ebp),%edi
 87699f3:	11 95 fc fe ff ff    	adc    %edx,-0x104(%ebp)
 87699f9:	8b 55 d8             	mov    -0x28(%ebp),%edx
 87699fc:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8769a02:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 8769a08:	89 bd 00 ff ff ff    	mov    %edi,-0x100(%ebp)
 8769a0e:	89 8d 10 ff ff ff    	mov    %ecx,-0xf0(%ebp)
 8769a14:	89 95 20 ff ff ff    	mov    %edx,-0xe0(%ebp)
 8769a1a:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 8769a20:	8b 70 08             	mov    0x8(%eax),%esi
 8769a23:	8b 78 0c             	mov    0xc(%eax),%edi
 8769a26:	85 d2                	test   %edx,%edx
 8769a28:	0f 84 92 39 00 00    	je     876d3c0 <_ZN8TaoCryptL12Transform512EPyS0_+0x3e50>
 8769a2e:	8b 55 80             	mov    -0x80(%ebp),%edx
 8769a31:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 8769a34:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8769a3a:	89 95 18 ff ff ff    	mov    %edx,-0xe8(%ebp)
 8769a40:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 8769a46:	01 85 18 ff ff ff    	add    %eax,-0xe8(%ebp)
 8769a4c:	89 8d 1c ff ff ff    	mov    %ecx,-0xe4(%ebp)
 8769a52:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 8769a55:	11 95 1c ff ff ff    	adc    %edx,-0xe4(%ebp)
 8769a5b:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8769a5e:	89 d0                	mov    %edx,%eax
 8769a60:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 8769a64:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 8769a68:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 8769a6e:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8769a71:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 8769a77:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 8769a7a:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 8769a80:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 8769a84:	c1 e9 06             	shr    $0x6,%ecx
 8769a87:	89 8d c4 fe ff ff    	mov    %ecx,-0x13c(%ebp)
 8769a8d:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 8769a93:	33 85 c4 fe ff ff    	xor    -0x13c(%ebp),%eax
 8769a99:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 8769a9f:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8769aa2:	31 d1                	xor    %edx,%ecx
 8769aa4:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8769aa7:	89 8d b4 fb ff ff    	mov    %ecx,-0x44c(%ebp)
 8769aad:	89 c1                	mov    %eax,%ecx
 8769aaf:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 8769ab3:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 8769ab7:	8b 8d b4 fb ff ff    	mov    -0x44c(%ebp),%ecx
 8769abd:	31 c1                	xor    %eax,%ecx
 8769abf:	89 8d a0 fc ff ff    	mov    %ecx,-0x360(%ebp)
 8769ac5:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 8769acb:	8b 85 a0 fc ff ff    	mov    -0x360(%ebp),%eax
 8769ad1:	31 d1                	xor    %edx,%ecx
 8769ad3:	89 8d a4 fc ff ff    	mov    %ecx,-0x35c(%ebp)
 8769ad9:	8b 95 a4 fc ff ff    	mov    -0x35c(%ebp),%edx
 8769adf:	01 85 18 ff ff ff    	add    %eax,-0xe8(%ebp)
 8769ae5:	11 95 1c ff ff ff    	adc    %edx,-0xe4(%ebp)
 8769aeb:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 8769af1:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 8769af7:	89 d0                	mov    %edx,%eax
 8769af9:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 8769afd:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 8769b01:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8769b07:	89 95 e8 fe ff ff    	mov    %edx,-0x118(%ebp)
 8769b0d:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 8769b13:	89 8d ec fe ff ff    	mov    %ecx,-0x114(%ebp)
 8769b19:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 8769b1f:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 8769b23:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 8769b29:	c1 e9 07             	shr    $0x7,%ecx
 8769b2c:	33 95 e8 fe ff ff    	xor    -0x118(%ebp),%edx
 8769b32:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 8769b38:	33 8d ec fe ff ff    	xor    -0x114(%ebp),%ecx
 8769b3e:	89 95 c0 fe ff ff    	mov    %edx,-0x140(%ebp)
 8769b44:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 8769b4a:	89 8d e8 fe ff ff    	mov    %ecx,-0x118(%ebp)
 8769b50:	89 c1                	mov    %eax,%ecx
 8769b52:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 8769b56:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 8769b5a:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 8769b60:	31 c1                	xor    %eax,%ecx
 8769b62:	89 8d 98 fc ff ff    	mov    %ecx,-0x368(%ebp)
 8769b68:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 8769b6e:	8b 85 98 fc ff ff    	mov    -0x368(%ebp),%eax
 8769b74:	31 d1                	xor    %edx,%ecx
 8769b76:	89 8d 9c fc ff ff    	mov    %ecx,-0x364(%ebp)
 8769b7c:	8b 95 9c fc ff ff    	mov    -0x364(%ebp),%edx
 8769b82:	01 85 18 ff ff ff    	add    %eax,-0xe8(%ebp)
 8769b88:	11 95 1c ff ff ff    	adc    %edx,-0xe4(%ebp)
 8769b8e:	8b 8d 1c ff ff ff    	mov    -0xe4(%ebp),%ecx
 8769b94:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8769b9a:	89 8d 3c ff ff ff    	mov    %ecx,-0xc4(%ebp)
 8769ba0:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
 8769ba6:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 8769bac:	8b 95 dc fe ff ff    	mov    -0x124(%ebp),%edx
 8769bb2:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8769bb8:	01 f0                	add    %esi,%eax
 8769bba:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 8769bc0:	11 fa                	adc    %edi,%edx
 8769bc2:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 8769bc8:	33 b5 08 ff ff ff    	xor    -0xf8(%ebp),%esi
 8769bce:	23 b5 f4 fe ff ff    	and    -0x10c(%ebp),%esi
 8769bd4:	33 b5 10 ff ff ff    	xor    -0xf0(%ebp),%esi
 8769bda:	33 8d 00 ff ff ff    	xor    -0x100(%ebp),%ecx
 8769be0:	23 8d f0 fe ff ff    	and    -0x110(%ebp),%ecx
 8769be6:	89 b5 94 fe ff ff    	mov    %esi,-0x16c(%ebp)
 8769bec:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 8769bf2:	33 8d 20 ff ff ff    	xor    -0xe0(%ebp),%ecx
 8769bf8:	89 8d 90 fe ff ff    	mov    %ecx,-0x170(%ebp)
 8769bfe:	89 f1                	mov    %esi,%ecx
 8769c00:	03 85 90 fe ff ff    	add    -0x170(%ebp),%eax
 8769c06:	13 95 94 fe ff ff    	adc    -0x16c(%ebp),%edx
 8769c0c:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 8769c10:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 8769c16:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 8769c1a:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 8769c20:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 8769c26:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 8769c2c:	89 f1                	mov    %esi,%ecx
 8769c2e:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 8769c32:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 8769c36:	33 b5 e8 fe ff ff    	xor    -0x118(%ebp),%esi
 8769c3c:	89 bd 24 ff ff ff    	mov    %edi,-0xdc(%ebp)
 8769c42:	33 bd ec fe ff ff    	xor    -0x114(%ebp),%edi
 8769c48:	89 b5 10 ff ff ff    	mov    %esi,-0xf0(%ebp)
 8769c4e:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 8769c54:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 8769c5a:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 8769c60:	89 f1                	mov    %esi,%ecx
 8769c62:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 8769c66:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 8769c6a:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 8769c70:	31 f1                	xor    %esi,%ecx
 8769c72:	89 8d 88 fe ff ff    	mov    %ecx,-0x178(%ebp)
 8769c78:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8769c7e:	31 f9                	xor    %edi,%ecx
 8769c80:	89 8d 8c fe ff ff    	mov    %ecx,-0x174(%ebp)
 8769c86:	03 85 88 fe ff ff    	add    -0x178(%ebp),%eax
 8769c8c:	13 95 8c fe ff ff    	adc    -0x174(%ebp),%edx
 8769c92:	03 85 18 ff ff ff    	add    -0xe8(%ebp),%eax
 8769c98:	13 95 1c ff ff ff    	adc    -0xe4(%ebp),%edx
 8769c9e:	89 c6                	mov    %eax,%esi
 8769ca0:	89 d7                	mov    %edx,%edi
 8769ca2:	03 75 c0             	add    -0x40(%ebp),%esi
 8769ca5:	13 7d c4             	adc    -0x3c(%ebp),%edi
 8769ca8:	89 b5 10 ff ff ff    	mov    %esi,-0xf0(%ebp)
 8769cae:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 8769cb4:	89 bd 14 ff ff ff    	mov    %edi,-0xec(%ebp)
 8769cba:	8b 7d b0             	mov    -0x50(%ebp),%edi
 8769cbd:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 8769cc3:	0b 4d b4             	or     -0x4c(%ebp),%ecx
 8769cc6:	23 4d bc             	and    -0x44(%ebp),%ecx
 8769cc9:	09 fe                	or     %edi,%esi
 8769ccb:	23 bd f8 fe ff ff    	and    -0x108(%ebp),%edi
 8769cd1:	23 75 b8             	and    -0x48(%ebp),%esi
 8769cd4:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 8769cda:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 8769ce0:	0b b5 20 ff ff ff    	or     -0xe0(%ebp),%esi
 8769ce6:	23 7d b4             	and    -0x4c(%ebp),%edi
 8769ce9:	89 b5 80 fe ff ff    	mov    %esi,-0x180(%ebp)
 8769cef:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 8769cf5:	09 f9                	or     %edi,%ecx
 8769cf7:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 8769cfd:	89 8d 84 fe ff ff    	mov    %ecx,-0x17c(%ebp)
 8769d03:	89 f1                	mov    %esi,%ecx
 8769d05:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 8769d09:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 8769d0d:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 8769d13:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 8769d19:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 8769d1f:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 8769d25:	89 f1                	mov    %esi,%ecx
 8769d27:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 8769d2b:	33 b5 e8 fe ff ff    	xor    -0x118(%ebp),%esi
 8769d31:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 8769d35:	33 bd ec fe ff ff    	xor    -0x114(%ebp),%edi
 8769d3b:	89 b5 20 ff ff ff    	mov    %esi,-0xe0(%ebp)
 8769d41:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 8769d47:	89 bd 18 ff ff ff    	mov    %edi,-0xe8(%ebp)
 8769d4d:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 8769d53:	89 f1                	mov    %esi,%ecx
 8769d55:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 8769d59:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 8769d5d:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 8769d63:	31 f1                	xor    %esi,%ecx
 8769d65:	8b b5 80 fe ff ff    	mov    -0x180(%ebp),%esi
 8769d6b:	89 8d 78 fe ff ff    	mov    %ecx,-0x188(%ebp)
 8769d71:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 8769d77:	31 f9                	xor    %edi,%ecx
 8769d79:	8b bd 84 fe ff ff    	mov    -0x17c(%ebp),%edi
 8769d7f:	03 b5 78 fe ff ff    	add    -0x188(%ebp),%esi
 8769d85:	89 8d 7c fe ff ff    	mov    %ecx,-0x184(%ebp)
 8769d8b:	13 bd 7c fe ff ff    	adc    -0x184(%ebp),%edi
 8769d91:	89 b5 18 ff ff ff    	mov    %esi,-0xe8(%ebp)
 8769d97:	01 85 18 ff ff ff    	add    %eax,-0xe8(%ebp)
 8769d9d:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 8769da3:	89 bd 1c ff ff ff    	mov    %edi,-0xe4(%ebp)
 8769da9:	11 95 1c ff ff ff    	adc    %edx,-0xe4(%ebp)
 8769daf:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 8769db5:	8b 70 10             	mov    0x10(%eax),%esi
 8769db8:	8b 78 14             	mov    0x14(%eax),%edi
 8769dbb:	85 d2                	test   %edx,%edx
 8769dbd:	0f 84 cd 35 00 00    	je     876d390 <_ZN8TaoCryptL12Transform512EPyS0_+0x3e20>
 8769dc3:	8b 55 88             	mov    -0x78(%ebp),%edx
 8769dc6:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 8769dc9:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8769dcf:	89 95 20 ff ff ff    	mov    %edx,-0xe0(%ebp)
 8769dd5:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 8769ddb:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 8769de1:	89 8d 24 ff ff ff    	mov    %ecx,-0xdc(%ebp)
 8769de7:	8b 8d 34 ff ff ff    	mov    -0xcc(%ebp),%ecx
 8769ded:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 8769df3:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 8769df9:	89 d0                	mov    %edx,%eax
 8769dfb:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 8769dff:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 8769e03:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 8769e09:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 8769e0f:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 8769e15:	8b 8d 34 ff ff ff    	mov    -0xcc(%ebp),%ecx
 8769e1b:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 8769e21:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 8769e25:	c1 e9 06             	shr    $0x6,%ecx
 8769e28:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 8769e2e:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 8769e34:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 8769e3a:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 8769e40:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 8769e46:	31 d1                	xor    %edx,%ecx
 8769e48:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 8769e4e:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 8769e54:	89 c1                	mov    %eax,%ecx
 8769e56:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 8769e5a:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 8769e5e:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 8769e64:	31 c1                	xor    %eax,%ecx
 8769e66:	89 8d 90 fc ff ff    	mov    %ecx,-0x370(%ebp)
 8769e6c:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 8769e72:	8b 85 90 fc ff ff    	mov    -0x370(%ebp),%eax
 8769e78:	31 d1                	xor    %edx,%ecx
 8769e7a:	89 8d 94 fc ff ff    	mov    %ecx,-0x36c(%ebp)
 8769e80:	8b 95 94 fc ff ff    	mov    -0x36c(%ebp),%edx
 8769e86:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 8769e8c:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 8769e92:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 8769e98:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 8769e9e:	89 d0                	mov    %edx,%eax
 8769ea0:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 8769ea4:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 8769ea8:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8769eae:	89 95 e8 fe ff ff    	mov    %edx,-0x118(%ebp)
 8769eb4:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 8769eba:	89 8d ec fe ff ff    	mov    %ecx,-0x114(%ebp)
 8769ec0:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 8769ec6:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 8769eca:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 8769ed0:	c1 e9 07             	shr    $0x7,%ecx
 8769ed3:	33 95 e8 fe ff ff    	xor    -0x118(%ebp),%edx
 8769ed9:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 8769edf:	33 8d ec fe ff ff    	xor    -0x114(%ebp),%ecx
 8769ee5:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 8769eeb:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8769ef1:	89 8d e8 fe ff ff    	mov    %ecx,-0x118(%ebp)
 8769ef7:	89 c1                	mov    %eax,%ecx
 8769ef9:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 8769efd:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 8769f01:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 8769f07:	31 c1                	xor    %eax,%ecx
 8769f09:	89 8d 88 fc ff ff    	mov    %ecx,-0x378(%ebp)
 8769f0f:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 8769f15:	8b 85 88 fc ff ff    	mov    -0x378(%ebp),%eax
 8769f1b:	31 d1                	xor    %edx,%ecx
 8769f1d:	89 8d 8c fc ff ff    	mov    %ecx,-0x374(%ebp)
 8769f23:	8b 95 8c fc ff ff    	mov    -0x374(%ebp),%edx
 8769f29:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 8769f2f:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 8769f35:	8b 8d 24 ff ff ff    	mov    -0xdc(%ebp),%ecx
 8769f3b:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 8769f41:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 8769f47:	89 95 40 ff ff ff    	mov    %edx,-0xc0(%ebp)
 8769f4d:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 8769f53:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 8769f59:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 8769f5f:	01 f0                	add    %esi,%eax
 8769f61:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 8769f67:	11 fa                	adc    %edi,%edx
 8769f69:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 8769f6f:	33 b5 f4 fe ff ff    	xor    -0x10c(%ebp),%esi
 8769f75:	23 b5 14 ff ff ff    	and    -0xec(%ebp),%esi
 8769f7b:	33 b5 08 ff ff ff    	xor    -0xf8(%ebp),%esi
 8769f81:	33 8d f0 fe ff ff    	xor    -0x110(%ebp),%ecx
 8769f87:	23 8d 10 ff ff ff    	and    -0xf0(%ebp),%ecx
 8769f8d:	89 b5 74 fe ff ff    	mov    %esi,-0x18c(%ebp)
 8769f93:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 8769f99:	33 8d 00 ff ff ff    	xor    -0x100(%ebp),%ecx
 8769f9f:	89 8d 70 fe ff ff    	mov    %ecx,-0x190(%ebp)
 8769fa5:	89 f1                	mov    %esi,%ecx
 8769fa7:	03 85 70 fe ff ff    	add    -0x190(%ebp),%eax
 8769fad:	13 95 74 fe ff ff    	adc    -0x18c(%ebp),%edx
 8769fb3:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 8769fb7:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 8769fbb:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 8769fc1:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 8769fc7:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 8769fcd:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 8769fd3:	89 f1                	mov    %esi,%ecx
 8769fd5:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 8769fd9:	33 b5 e8 fe ff ff    	xor    -0x118(%ebp),%esi
 8769fdf:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 8769fe3:	33 bd ec fe ff ff    	xor    -0x114(%ebp),%edi
 8769fe9:	89 b5 08 ff ff ff    	mov    %esi,-0xf8(%ebp)
 8769fef:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 8769ff5:	89 bd 00 ff ff ff    	mov    %edi,-0x100(%ebp)
 8769ffb:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876a001:	89 f1                	mov    %esi,%ecx
 876a003:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876a007:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876a00b:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876a011:	31 f1                	xor    %esi,%ecx
 876a013:	89 8d 68 fe ff ff    	mov    %ecx,-0x198(%ebp)
 876a019:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876a01f:	31 f9                	xor    %edi,%ecx
 876a021:	89 8d 6c fe ff ff    	mov    %ecx,-0x194(%ebp)
 876a027:	03 85 68 fe ff ff    	add    -0x198(%ebp),%eax
 876a02d:	13 95 6c fe ff ff    	adc    -0x194(%ebp),%edx
 876a033:	03 85 20 ff ff ff    	add    -0xe0(%ebp),%eax
 876a039:	13 95 24 ff ff ff    	adc    -0xdc(%ebp),%edx
 876a03f:	89 c6                	mov    %eax,%esi
 876a041:	89 d7                	mov    %edx,%edi
 876a043:	03 75 b8             	add    -0x48(%ebp),%esi
 876a046:	13 7d bc             	adc    -0x44(%ebp),%edi
 876a049:	89 b5 00 ff ff ff    	mov    %esi,-0x100(%ebp)
 876a04f:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876a055:	89 bd 04 ff ff ff    	mov    %edi,-0xfc(%ebp)
 876a05b:	8b bd 18 ff ff ff    	mov    -0xe8(%ebp),%edi
 876a061:	23 bd f8 fe ff ff    	and    -0x108(%ebp),%edi
 876a067:	8b 8d 1c ff ff ff    	mov    -0xe4(%ebp),%ecx
 876a06d:	0b b5 f8 fe ff ff    	or     -0x108(%ebp),%esi
 876a073:	89 bd 08 ff ff ff    	mov    %edi,-0xf8(%ebp)
 876a079:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876a07f:	23 bd fc fe ff ff    	and    -0x104(%ebp),%edi
 876a085:	0b 8d fc fe ff ff    	or     -0x104(%ebp),%ecx
 876a08b:	23 75 b0             	and    -0x50(%ebp),%esi
 876a08e:	23 4d b4             	and    -0x4c(%ebp),%ecx
 876a091:	0b b5 08 ff ff ff    	or     -0xf8(%ebp),%esi
 876a097:	09 f9                	or     %edi,%ecx
 876a099:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876a09f:	89 b5 60 fe ff ff    	mov    %esi,-0x1a0(%ebp)
 876a0a5:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876a0ab:	89 8d 64 fe ff ff    	mov    %ecx,-0x19c(%ebp)
 876a0b1:	89 f1                	mov    %esi,%ecx
 876a0b3:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876a0b7:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 876a0bd:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876a0c1:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876a0c7:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 876a0cd:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876a0d3:	89 f1                	mov    %esi,%ecx
 876a0d5:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876a0d9:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876a0dd:	33 b5 e8 fe ff ff    	xor    -0x118(%ebp),%esi
 876a0e3:	89 bd 24 ff ff ff    	mov    %edi,-0xdc(%ebp)
 876a0e9:	33 bd ec fe ff ff    	xor    -0x114(%ebp),%edi
 876a0ef:	89 b5 08 ff ff ff    	mov    %esi,-0xf8(%ebp)
 876a0f5:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876a0fb:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 876a101:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876a107:	89 f1                	mov    %esi,%ecx
 876a109:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876a10d:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876a111:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876a117:	31 f1                	xor    %esi,%ecx
 876a119:	8b b5 60 fe ff ff    	mov    -0x1a0(%ebp),%esi
 876a11f:	89 8d 58 fe ff ff    	mov    %ecx,-0x1a8(%ebp)
 876a125:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 876a12b:	31 f9                	xor    %edi,%ecx
 876a12d:	8b bd 64 fe ff ff    	mov    -0x19c(%ebp),%edi
 876a133:	03 b5 58 fe ff ff    	add    -0x1a8(%ebp),%esi
 876a139:	89 8d 5c fe ff ff    	mov    %ecx,-0x1a4(%ebp)
 876a13f:	13 bd 5c fe ff ff    	adc    -0x1a4(%ebp),%edi
 876a145:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 876a14b:	01 85 e8 fe ff ff    	add    %eax,-0x118(%ebp)
 876a151:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876a157:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 876a15d:	11 95 ec fe ff ff    	adc    %edx,-0x114(%ebp)
 876a163:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876a169:	8b 70 18             	mov    0x18(%eax),%esi
 876a16c:	8b 78 1c             	mov    0x1c(%eax),%edi
 876a16f:	85 d2                	test   %edx,%edx
 876a171:	0f 84 e9 31 00 00    	je     876d360 <_ZN8TaoCryptL12Transform512EPyS0_+0x3df0>
 876a177:	8b 55 90             	mov    -0x70(%ebp),%edx
 876a17a:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 876a17d:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 876a183:	89 95 20 ff ff ff    	mov    %edx,-0xe0(%ebp)
 876a189:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 876a18f:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 876a195:	89 8d 24 ff ff ff    	mov    %ecx,-0xdc(%ebp)
 876a19b:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 876a1a1:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 876a1a7:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 876a1ad:	89 d0                	mov    %edx,%eax
 876a1af:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876a1b3:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876a1b7:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876a1bd:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 876a1c3:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876a1c9:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 876a1cf:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 876a1d5:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876a1d9:	c1 e9 06             	shr    $0x6,%ecx
 876a1dc:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876a1e2:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876a1e8:	33 85 dc fe ff ff    	xor    -0x124(%ebp),%eax
 876a1ee:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 876a1f4:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 876a1fa:	31 d1                	xor    %edx,%ecx
 876a1fc:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 876a202:	89 8d d0 fe ff ff    	mov    %ecx,-0x130(%ebp)
 876a208:	89 c1                	mov    %eax,%ecx
 876a20a:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876a20e:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876a212:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876a218:	31 c1                	xor    %eax,%ecx
 876a21a:	89 8d 80 fc ff ff    	mov    %ecx,-0x380(%ebp)
 876a220:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876a226:	8b 85 80 fc ff ff    	mov    -0x380(%ebp),%eax
 876a22c:	31 d1                	xor    %edx,%ecx
 876a22e:	89 8d 84 fc ff ff    	mov    %ecx,-0x37c(%ebp)
 876a234:	8b 95 84 fc ff ff    	mov    -0x37c(%ebp),%edx
 876a23a:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 876a240:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 876a246:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 876a24c:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 876a252:	89 d0                	mov    %edx,%eax
 876a254:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876a258:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876a25c:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 876a262:	89 95 08 ff ff ff    	mov    %edx,-0xf8(%ebp)
 876a268:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 876a26e:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 876a274:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 876a27a:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876a27e:	33 95 08 ff ff ff    	xor    -0xf8(%ebp),%edx
 876a284:	c1 e9 07             	shr    $0x7,%ecx
 876a287:	33 8d 0c ff ff ff    	xor    -0xf4(%ebp),%ecx
 876a28d:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876a293:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 876a299:	89 8d 08 ff ff ff    	mov    %ecx,-0xf8(%ebp)
 876a29f:	89 c1                	mov    %eax,%ecx
 876a2a1:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876a2a5:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876a2a9:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876a2af:	31 c1                	xor    %eax,%ecx
 876a2b1:	89 8d 78 fc ff ff    	mov    %ecx,-0x388(%ebp)
 876a2b7:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876a2bd:	8b 85 78 fc ff ff    	mov    -0x388(%ebp),%eax
 876a2c3:	31 d1                	xor    %edx,%ecx
 876a2c5:	89 8d 7c fc ff ff    	mov    %ecx,-0x384(%ebp)
 876a2cb:	8b 95 7c fc ff ff    	mov    -0x384(%ebp),%edx
 876a2d1:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 876a2d7:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 876a2dd:	8b 8d 24 ff ff ff    	mov    -0xdc(%ebp),%ecx
 876a2e3:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 876a2e9:	89 8d 4c ff ff ff    	mov    %ecx,-0xb4(%ebp)
 876a2ef:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 876a2f5:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 876a2fb:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 876a301:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876a307:	01 f0                	add    %esi,%eax
 876a309:	8b b5 14 ff ff ff    	mov    -0xec(%ebp),%esi
 876a30f:	11 fa                	adc    %edi,%edx
 876a311:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876a317:	33 b5 f4 fe ff ff    	xor    -0x10c(%ebp),%esi
 876a31d:	23 b5 04 ff ff ff    	and    -0xfc(%ebp),%esi
 876a323:	33 b5 f4 fe ff ff    	xor    -0x10c(%ebp),%esi
 876a329:	33 8d f0 fe ff ff    	xor    -0x110(%ebp),%ecx
 876a32f:	23 8d 00 ff ff ff    	and    -0x100(%ebp),%ecx
 876a335:	89 b5 54 fe ff ff    	mov    %esi,-0x1ac(%ebp)
 876a33b:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876a341:	33 8d f0 fe ff ff    	xor    -0x110(%ebp),%ecx
 876a347:	89 8d 50 fe ff ff    	mov    %ecx,-0x1b0(%ebp)
 876a34d:	89 f1                	mov    %esi,%ecx
 876a34f:	03 85 50 fe ff ff    	add    -0x1b0(%ebp),%eax
 876a355:	13 95 54 fe ff ff    	adc    -0x1ac(%ebp),%edx
 876a35b:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876a35f:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876a363:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876a369:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876a36f:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876a375:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876a37b:	89 f1                	mov    %esi,%ecx
 876a37d:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876a381:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876a387:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876a38b:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876a391:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876a397:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876a39d:	89 bd 08 ff ff ff    	mov    %edi,-0xf8(%ebp)
 876a3a3:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876a3a9:	89 f1                	mov    %esi,%ecx
 876a3ab:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876a3af:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876a3b3:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876a3b9:	31 f1                	xor    %esi,%ecx
 876a3bb:	89 8d 48 fe ff ff    	mov    %ecx,-0x1b8(%ebp)
 876a3c1:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876a3c7:	31 f9                	xor    %edi,%ecx
 876a3c9:	89 8d 4c fe ff ff    	mov    %ecx,-0x1b4(%ebp)
 876a3cf:	03 85 48 fe ff ff    	add    -0x1b8(%ebp),%eax
 876a3d5:	13 95 4c fe ff ff    	adc    -0x1b4(%ebp),%edx
 876a3db:	03 85 20 ff ff ff    	add    -0xe0(%ebp),%eax
 876a3e1:	13 95 24 ff ff ff    	adc    -0xdc(%ebp),%edx
 876a3e7:	89 c6                	mov    %eax,%esi
 876a3e9:	89 d7                	mov    %edx,%edi
 876a3eb:	03 75 b0             	add    -0x50(%ebp),%esi
 876a3ee:	13 7d b4             	adc    -0x4c(%ebp),%edi
 876a3f1:	89 b5 20 ff ff ff    	mov    %esi,-0xe0(%ebp)
 876a3f7:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876a3fd:	89 bd 24 ff ff ff    	mov    %edi,-0xdc(%ebp)
 876a403:	8b bd e8 fe ff ff    	mov    -0x118(%ebp),%edi
 876a409:	23 bd 18 ff ff ff    	and    -0xe8(%ebp),%edi
 876a40f:	0b b5 18 ff ff ff    	or     -0xe8(%ebp),%esi
 876a415:	8b 8d ec fe ff ff    	mov    -0x114(%ebp),%ecx
 876a41b:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876a421:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876a427:	23 b5 f8 fe ff ff    	and    -0x108(%ebp),%esi
 876a42d:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876a433:	23 bd 1c ff ff ff    	and    -0xe4(%ebp),%edi
 876a439:	0b 8d 1c ff ff ff    	or     -0xe4(%ebp),%ecx
 876a43f:	23 8d fc fe ff ff    	and    -0x104(%ebp),%ecx
 876a445:	89 b5 40 fe ff ff    	mov    %esi,-0x1c0(%ebp)
 876a44b:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876a451:	09 f9                	or     %edi,%ecx
 876a453:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876a459:	89 8d 44 fe ff ff    	mov    %ecx,-0x1bc(%ebp)
 876a45f:	89 f1                	mov    %esi,%ecx
 876a461:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876a465:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876a469:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876a46f:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876a475:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876a47b:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876a481:	89 f1                	mov    %esi,%ecx
 876a483:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876a487:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876a48d:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876a491:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876a497:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876a49d:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876a4a3:	89 bd 08 ff ff ff    	mov    %edi,-0xf8(%ebp)
 876a4a9:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876a4af:	89 f1                	mov    %esi,%ecx
 876a4b1:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876a4b5:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876a4b9:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876a4bf:	31 f1                	xor    %esi,%ecx
 876a4c1:	8b b5 40 fe ff ff    	mov    -0x1c0(%ebp),%esi
 876a4c7:	89 8d 38 fe ff ff    	mov    %ecx,-0x1c8(%ebp)
 876a4cd:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876a4d3:	31 f9                	xor    %edi,%ecx
 876a4d5:	8b bd 44 fe ff ff    	mov    -0x1bc(%ebp),%edi
 876a4db:	03 b5 38 fe ff ff    	add    -0x1c8(%ebp),%esi
 876a4e1:	89 8d 3c fe ff ff    	mov    %ecx,-0x1c4(%ebp)
 876a4e7:	13 bd 3c fe ff ff    	adc    -0x1c4(%ebp),%edi
 876a4ed:	89 b5 08 ff ff ff    	mov    %esi,-0xf8(%ebp)
 876a4f3:	01 85 08 ff ff ff    	add    %eax,-0xf8(%ebp)
 876a4f9:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876a4ff:	89 bd 0c ff ff ff    	mov    %edi,-0xf4(%ebp)
 876a505:	11 95 0c ff ff ff    	adc    %edx,-0xf4(%ebp)
 876a50b:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876a511:	8b 70 20             	mov    0x20(%eax),%esi
 876a514:	8b 78 24             	mov    0x24(%eax),%edi
 876a517:	85 d2                	test   %edx,%edx
 876a519:	0f 84 11 2e 00 00    	je     876d330 <_ZN8TaoCryptL12Transform512EPyS0_+0x3dc0>
 876a51f:	8b 55 98             	mov    -0x68(%ebp),%edx
 876a522:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 876a525:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 876a52b:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876a531:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 876a537:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876a53d:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876a543:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 876a549:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876a54f:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 876a555:	89 d0                	mov    %edx,%eax
 876a557:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876a55b:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876a55f:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876a565:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 876a56b:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876a571:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 876a577:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876a57d:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876a581:	c1 e9 06             	shr    $0x6,%ecx
 876a584:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876a58a:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876a590:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876a596:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876a59c:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 876a5a2:	31 d1                	xor    %edx,%ecx
 876a5a4:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 876a5aa:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876a5b0:	89 c1                	mov    %eax,%ecx
 876a5b2:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876a5b6:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876a5ba:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876a5c0:	31 c1                	xor    %eax,%ecx
 876a5c2:	89 8d 70 fc ff ff    	mov    %ecx,-0x390(%ebp)
 876a5c8:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876a5ce:	8b 85 70 fc ff ff    	mov    -0x390(%ebp),%eax
 876a5d4:	31 d1                	xor    %edx,%ecx
 876a5d6:	89 8d 74 fc ff ff    	mov    %ecx,-0x38c(%ebp)
 876a5dc:	8b 95 74 fc ff ff    	mov    -0x38c(%ebp),%edx
 876a5e2:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876a5e8:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876a5ee:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 876a5f4:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 876a5fa:	89 d0                	mov    %edx,%eax
 876a5fc:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876a600:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876a604:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 876a60a:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876a610:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 876a616:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876a61c:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 876a622:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876a626:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876a62c:	c1 e9 07             	shr    $0x7,%ecx
 876a62f:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876a635:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876a63b:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 876a641:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876a647:	89 c1                	mov    %eax,%ecx
 876a649:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876a64d:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876a651:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876a657:	31 c1                	xor    %eax,%ecx
 876a659:	89 8d 68 fc ff ff    	mov    %ecx,-0x398(%ebp)
 876a65f:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876a665:	8b 85 68 fc ff ff    	mov    -0x398(%ebp),%eax
 876a66b:	31 d1                	xor    %edx,%ecx
 876a66d:	89 8d 6c fc ff ff    	mov    %ecx,-0x394(%ebp)
 876a673:	8b 95 6c fc ff ff    	mov    -0x394(%ebp),%edx
 876a679:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876a67f:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876a685:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876a68b:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876a691:	89 8d 54 ff ff ff    	mov    %ecx,-0xac(%ebp)
 876a697:	89 95 50 ff ff ff    	mov    %edx,-0xb0(%ebp)
 876a69d:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 876a6a3:	8b 95 f4 fe ff ff    	mov    -0x10c(%ebp),%edx
 876a6a9:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876a6af:	01 f0                	add    %esi,%eax
 876a6b1:	8b b5 04 ff ff ff    	mov    -0xfc(%ebp),%esi
 876a6b7:	11 fa                	adc    %edi,%edx
 876a6b9:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876a6bf:	33 b5 14 ff ff ff    	xor    -0xec(%ebp),%esi
 876a6c5:	23 b5 24 ff ff ff    	and    -0xdc(%ebp),%esi
 876a6cb:	33 b5 14 ff ff ff    	xor    -0xec(%ebp),%esi
 876a6d1:	33 8d 10 ff ff ff    	xor    -0xf0(%ebp),%ecx
 876a6d7:	23 8d 20 ff ff ff    	and    -0xe0(%ebp),%ecx
 876a6dd:	89 b5 34 fe ff ff    	mov    %esi,-0x1cc(%ebp)
 876a6e3:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876a6e9:	33 8d 10 ff ff ff    	xor    -0xf0(%ebp),%ecx
 876a6ef:	89 8d 30 fe ff ff    	mov    %ecx,-0x1d0(%ebp)
 876a6f5:	89 f1                	mov    %esi,%ecx
 876a6f7:	03 85 30 fe ff ff    	add    -0x1d0(%ebp),%eax
 876a6fd:	13 95 34 fe ff ff    	adc    -0x1cc(%ebp),%edx
 876a703:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876a707:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876a70b:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876a711:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876a717:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876a71d:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876a723:	89 f1                	mov    %esi,%ecx
 876a725:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876a729:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876a72f:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876a733:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876a739:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876a73f:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876a745:	89 bd f0 fe ff ff    	mov    %edi,-0x110(%ebp)
 876a74b:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876a751:	89 f1                	mov    %esi,%ecx
 876a753:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876a757:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876a75b:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876a761:	31 f1                	xor    %esi,%ecx
 876a763:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876a769:	89 8d 28 fe ff ff    	mov    %ecx,-0x1d8(%ebp)
 876a76f:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 876a775:	31 f9                	xor    %edi,%ecx
 876a777:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876a77d:	89 8d 2c fe ff ff    	mov    %ecx,-0x1d4(%ebp)
 876a783:	03 85 28 fe ff ff    	add    -0x1d8(%ebp),%eax
 876a789:	13 95 2c fe ff ff    	adc    -0x1d4(%ebp),%edx
 876a78f:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876a795:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876a79b:	01 c6                	add    %eax,%esi
 876a79d:	11 d7                	adc    %edx,%edi
 876a79f:	89 b5 f8 fe ff ff    	mov    %esi,-0x108(%ebp)
 876a7a5:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876a7ab:	89 bd fc fe ff ff    	mov    %edi,-0x104(%ebp)
 876a7b1:	8b bd 08 ff ff ff    	mov    -0xf8(%ebp),%edi
 876a7b7:	23 bd e8 fe ff ff    	and    -0x118(%ebp),%edi
 876a7bd:	0b b5 e8 fe ff ff    	or     -0x118(%ebp),%esi
 876a7c3:	8b 8d 0c ff ff ff    	mov    -0xf4(%ebp),%ecx
 876a7c9:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876a7cf:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876a7d5:	23 b5 18 ff ff ff    	and    -0xe8(%ebp),%esi
 876a7db:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876a7e1:	23 bd ec fe ff ff    	and    -0x114(%ebp),%edi
 876a7e7:	0b 8d ec fe ff ff    	or     -0x114(%ebp),%ecx
 876a7ed:	23 8d 1c ff ff ff    	and    -0xe4(%ebp),%ecx
 876a7f3:	89 b5 20 fe ff ff    	mov    %esi,-0x1e0(%ebp)
 876a7f9:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876a7ff:	09 f9                	or     %edi,%ecx
 876a801:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876a807:	89 8d 24 fe ff ff    	mov    %ecx,-0x1dc(%ebp)
 876a80d:	89 f1                	mov    %esi,%ecx
 876a80f:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876a813:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876a817:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876a81d:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876a823:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876a829:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876a82f:	89 f1                	mov    %esi,%ecx
 876a831:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876a835:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876a83b:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876a83f:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876a845:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876a84b:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876a851:	89 bd f0 fe ff ff    	mov    %edi,-0x110(%ebp)
 876a857:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876a85d:	89 f1                	mov    %esi,%ecx
 876a85f:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876a863:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876a867:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876a86d:	31 f1                	xor    %esi,%ecx
 876a86f:	8b b5 20 fe ff ff    	mov    -0x1e0(%ebp),%esi
 876a875:	89 8d 18 fe ff ff    	mov    %ecx,-0x1e8(%ebp)
 876a87b:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 876a881:	31 f9                	xor    %edi,%ecx
 876a883:	8b bd 24 fe ff ff    	mov    -0x1dc(%ebp),%edi
 876a889:	03 b5 18 fe ff ff    	add    -0x1e8(%ebp),%esi
 876a88f:	89 8d 1c fe ff ff    	mov    %ecx,-0x1e4(%ebp)
 876a895:	13 bd 1c fe ff ff    	adc    -0x1e4(%ebp),%edi
 876a89b:	89 b5 f0 fe ff ff    	mov    %esi,-0x110(%ebp)
 876a8a1:	01 85 f0 fe ff ff    	add    %eax,-0x110(%ebp)
 876a8a7:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876a8ad:	89 bd f4 fe ff ff    	mov    %edi,-0x10c(%ebp)
 876a8b3:	11 95 f4 fe ff ff    	adc    %edx,-0x10c(%ebp)
 876a8b9:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876a8bf:	8b 70 28             	mov    0x28(%eax),%esi
 876a8c2:	8b 78 2c             	mov    0x2c(%eax),%edi
 876a8c5:	85 d2                	test   %edx,%edx
 876a8c7:	0f 84 33 2a 00 00    	je     876d300 <_ZN8TaoCryptL12Transform512EPyS0_+0x3d90>
 876a8cd:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876a8d0:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876a8d3:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 876a8d9:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876a8df:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 876a8e5:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876a8eb:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876a8f1:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 876a8f7:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876a8fd:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 876a903:	89 d0                	mov    %edx,%eax
 876a905:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876a909:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876a90d:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876a913:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 876a919:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876a91f:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 876a925:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876a92b:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876a92f:	c1 e9 06             	shr    $0x6,%ecx
 876a932:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876a938:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876a93e:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876a944:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876a94a:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 876a950:	31 d1                	xor    %edx,%ecx
 876a952:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 876a958:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876a95e:	89 c1                	mov    %eax,%ecx
 876a960:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876a964:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876a968:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876a96e:	31 c1                	xor    %eax,%ecx
 876a970:	89 8d 60 fc ff ff    	mov    %ecx,-0x3a0(%ebp)
 876a976:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876a97c:	8b 85 60 fc ff ff    	mov    -0x3a0(%ebp),%eax
 876a982:	31 d1                	xor    %edx,%ecx
 876a984:	89 8d 64 fc ff ff    	mov    %ecx,-0x39c(%ebp)
 876a98a:	8b 95 64 fc ff ff    	mov    -0x39c(%ebp),%edx
 876a990:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876a996:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876a99c:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 876a9a2:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 876a9a8:	89 d0                	mov    %edx,%eax
 876a9aa:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876a9ae:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876a9b2:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 876a9b8:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876a9be:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 876a9c4:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876a9ca:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 876a9d0:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876a9d4:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876a9da:	c1 e9 07             	shr    $0x7,%ecx
 876a9dd:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876a9e3:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876a9e9:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876a9ef:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876a9f5:	89 c1                	mov    %eax,%ecx
 876a9f7:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876a9fb:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876a9ff:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876aa05:	31 c1                	xor    %eax,%ecx
 876aa07:	89 8d 58 fc ff ff    	mov    %ecx,-0x3a8(%ebp)
 876aa0d:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876aa13:	8b 85 58 fc ff ff    	mov    -0x3a8(%ebp),%eax
 876aa19:	31 d1                	xor    %edx,%ecx
 876aa1b:	89 8d 5c fc ff ff    	mov    %ecx,-0x3a4(%ebp)
 876aa21:	8b 95 5c fc ff ff    	mov    -0x3a4(%ebp),%edx
 876aa27:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876aa2d:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876aa33:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876aa39:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876aa3f:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
 876aa45:	89 95 58 ff ff ff    	mov    %edx,-0xa8(%ebp)
 876aa4b:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 876aa51:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 876aa57:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 876aa5d:	01 f0                	add    %esi,%eax
 876aa5f:	8b b5 24 ff ff ff    	mov    -0xdc(%ebp),%esi
 876aa65:	11 fa                	adc    %edi,%edx
 876aa67:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876aa6d:	33 b5 04 ff ff ff    	xor    -0xfc(%ebp),%esi
 876aa73:	23 b5 fc fe ff ff    	and    -0x104(%ebp),%esi
 876aa79:	33 b5 04 ff ff ff    	xor    -0xfc(%ebp),%esi
 876aa7f:	33 8d 00 ff ff ff    	xor    -0x100(%ebp),%ecx
 876aa85:	23 8d f8 fe ff ff    	and    -0x108(%ebp),%ecx
 876aa8b:	89 b5 14 fe ff ff    	mov    %esi,-0x1ec(%ebp)
 876aa91:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876aa97:	33 8d 00 ff ff ff    	xor    -0x100(%ebp),%ecx
 876aa9d:	89 8d 10 fe ff ff    	mov    %ecx,-0x1f0(%ebp)
 876aaa3:	89 f1                	mov    %esi,%ecx
 876aaa5:	03 85 10 fe ff ff    	add    -0x1f0(%ebp),%eax
 876aaab:	13 95 14 fe ff ff    	adc    -0x1ec(%ebp),%edx
 876aab1:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876aab5:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876aab9:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876aabf:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876aac5:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876aacb:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876aad1:	89 f1                	mov    %esi,%ecx
 876aad3:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876aad7:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876aadd:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876aae1:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876aae7:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876aaed:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876aaf3:	89 bd 10 ff ff ff    	mov    %edi,-0xf0(%ebp)
 876aaf9:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876aaff:	89 f1                	mov    %esi,%ecx
 876ab01:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876ab05:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876ab09:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876ab0f:	31 f1                	xor    %esi,%ecx
 876ab11:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876ab17:	89 8d 08 fe ff ff    	mov    %ecx,-0x1f8(%ebp)
 876ab1d:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876ab23:	31 f9                	xor    %edi,%ecx
 876ab25:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876ab2b:	89 8d 0c fe ff ff    	mov    %ecx,-0x1f4(%ebp)
 876ab31:	03 85 08 fe ff ff    	add    -0x1f8(%ebp),%eax
 876ab37:	13 95 0c fe ff ff    	adc    -0x1f4(%ebp),%edx
 876ab3d:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876ab43:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876ab49:	01 c6                	add    %eax,%esi
 876ab4b:	11 d7                	adc    %edx,%edi
 876ab4d:	89 b5 18 ff ff ff    	mov    %esi,-0xe8(%ebp)
 876ab53:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876ab59:	89 bd 1c ff ff ff    	mov    %edi,-0xe4(%ebp)
 876ab5f:	8b bd f0 fe ff ff    	mov    -0x110(%ebp),%edi
 876ab65:	23 bd 08 ff ff ff    	and    -0xf8(%ebp),%edi
 876ab6b:	0b b5 08 ff ff ff    	or     -0xf8(%ebp),%esi
 876ab71:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 876ab77:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876ab7d:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876ab83:	23 b5 e8 fe ff ff    	and    -0x118(%ebp),%esi
 876ab89:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876ab8f:	23 bd 0c ff ff ff    	and    -0xf4(%ebp),%edi
 876ab95:	0b 8d 0c ff ff ff    	or     -0xf4(%ebp),%ecx
 876ab9b:	23 8d ec fe ff ff    	and    -0x114(%ebp),%ecx
 876aba1:	89 b5 00 fe ff ff    	mov    %esi,-0x200(%ebp)
 876aba7:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876abad:	09 f9                	or     %edi,%ecx
 876abaf:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876abb5:	89 8d 04 fe ff ff    	mov    %ecx,-0x1fc(%ebp)
 876abbb:	89 f1                	mov    %esi,%ecx
 876abbd:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876abc1:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876abc5:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876abcb:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876abd1:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876abd7:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876abdd:	89 f1                	mov    %esi,%ecx
 876abdf:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876abe3:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876abe9:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876abed:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876abf3:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876abf9:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876abff:	89 bd 10 ff ff ff    	mov    %edi,-0xf0(%ebp)
 876ac05:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876ac0b:	89 f1                	mov    %esi,%ecx
 876ac0d:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876ac11:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876ac15:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876ac1b:	31 f1                	xor    %esi,%ecx
 876ac1d:	8b b5 00 fe ff ff    	mov    -0x200(%ebp),%esi
 876ac23:	89 8d f8 fd ff ff    	mov    %ecx,-0x208(%ebp)
 876ac29:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876ac2f:	31 f9                	xor    %edi,%ecx
 876ac31:	8b bd 04 fe ff ff    	mov    -0x1fc(%ebp),%edi
 876ac37:	03 b5 f8 fd ff ff    	add    -0x208(%ebp),%esi
 876ac3d:	89 8d fc fd ff ff    	mov    %ecx,-0x204(%ebp)
 876ac43:	13 bd fc fd ff ff    	adc    -0x204(%ebp),%edi
 876ac49:	89 b5 10 ff ff ff    	mov    %esi,-0xf0(%ebp)
 876ac4f:	01 85 10 ff ff ff    	add    %eax,-0xf0(%ebp)
 876ac55:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876ac5b:	89 bd 14 ff ff ff    	mov    %edi,-0xec(%ebp)
 876ac61:	11 95 14 ff ff ff    	adc    %edx,-0xec(%ebp)
 876ac67:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876ac6d:	8b 70 30             	mov    0x30(%eax),%esi
 876ac70:	8b 78 34             	mov    0x34(%eax),%edi
 876ac73:	85 d2                	test   %edx,%edx
 876ac75:	0f 84 55 26 00 00    	je     876d2d0 <_ZN8TaoCryptL12Transform512EPyS0_+0x3d60>
 876ac7b:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876ac7e:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876ac81:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 876ac87:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876ac8d:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876ac93:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876ac99:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876ac9f:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 876aca5:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876acab:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 876acb1:	89 d0                	mov    %edx,%eax
 876acb3:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876acb7:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876acbb:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876acc1:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 876acc7:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876accd:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 876acd3:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876acd9:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876acdd:	c1 e9 06             	shr    $0x6,%ecx
 876ace0:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876ace6:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876acec:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876acf2:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876acf8:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 876acfe:	31 d1                	xor    %edx,%ecx
 876ad00:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 876ad06:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876ad0c:	89 c1                	mov    %eax,%ecx
 876ad0e:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876ad12:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876ad16:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876ad1c:	31 c1                	xor    %eax,%ecx
 876ad1e:	89 8d 50 fc ff ff    	mov    %ecx,-0x3b0(%ebp)
 876ad24:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876ad2a:	8b 85 50 fc ff ff    	mov    -0x3b0(%ebp),%eax
 876ad30:	31 d1                	xor    %edx,%ecx
 876ad32:	89 8d 54 fc ff ff    	mov    %ecx,-0x3ac(%ebp)
 876ad38:	8b 95 54 fc ff ff    	mov    -0x3ac(%ebp),%edx
 876ad3e:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876ad44:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876ad4a:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 876ad50:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876ad56:	89 d0                	mov    %edx,%eax
 876ad58:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876ad5c:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876ad60:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876ad66:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876ad6c:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 876ad72:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876ad78:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876ad7e:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876ad82:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876ad88:	c1 e9 07             	shr    $0x7,%ecx
 876ad8b:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876ad91:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876ad97:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876ad9d:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876ada3:	89 c1                	mov    %eax,%ecx
 876ada5:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876ada9:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876adad:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876adb3:	31 c1                	xor    %eax,%ecx
 876adb5:	89 8d 48 fc ff ff    	mov    %ecx,-0x3b8(%ebp)
 876adbb:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876adc1:	8b 85 48 fc ff ff    	mov    -0x3b8(%ebp),%eax
 876adc7:	31 d1                	xor    %edx,%ecx
 876adc9:	89 8d 4c fc ff ff    	mov    %ecx,-0x3b4(%ebp)
 876adcf:	8b 95 4c fc ff ff    	mov    -0x3b4(%ebp),%edx
 876add5:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876addb:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876ade1:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876ade7:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876aded:	89 8d 64 ff ff ff    	mov    %ecx,-0x9c(%ebp)
 876adf3:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 876adf9:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 876adff:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 876ae05:	8b 8d f8 fe ff ff    	mov    -0x108(%ebp),%ecx
 876ae0b:	01 f0                	add    %esi,%eax
 876ae0d:	8b b5 fc fe ff ff    	mov    -0x104(%ebp),%esi
 876ae13:	11 fa                	adc    %edi,%edx
 876ae15:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876ae1b:	33 b5 24 ff ff ff    	xor    -0xdc(%ebp),%esi
 876ae21:	23 b5 1c ff ff ff    	and    -0xe4(%ebp),%esi
 876ae27:	33 b5 24 ff ff ff    	xor    -0xdc(%ebp),%esi
 876ae2d:	33 8d 20 ff ff ff    	xor    -0xe0(%ebp),%ecx
 876ae33:	23 8d 18 ff ff ff    	and    -0xe8(%ebp),%ecx
 876ae39:	89 b5 f4 fd ff ff    	mov    %esi,-0x20c(%ebp)
 876ae3f:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876ae45:	33 8d 20 ff ff ff    	xor    -0xe0(%ebp),%ecx
 876ae4b:	89 8d f0 fd ff ff    	mov    %ecx,-0x210(%ebp)
 876ae51:	89 f1                	mov    %esi,%ecx
 876ae53:	03 85 f0 fd ff ff    	add    -0x210(%ebp),%eax
 876ae59:	13 95 f4 fd ff ff    	adc    -0x20c(%ebp),%edx
 876ae5f:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876ae63:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876ae67:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876ae6d:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876ae73:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876ae79:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876ae7f:	89 f1                	mov    %esi,%ecx
 876ae81:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876ae85:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876ae8b:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876ae8f:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876ae95:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876ae9b:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876aea1:	89 bd 00 ff ff ff    	mov    %edi,-0x100(%ebp)
 876aea7:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876aead:	89 f1                	mov    %esi,%ecx
 876aeaf:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876aeb3:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876aeb7:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876aebd:	31 f1                	xor    %esi,%ecx
 876aebf:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876aec5:	89 8d e8 fd ff ff    	mov    %ecx,-0x218(%ebp)
 876aecb:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876aed1:	31 f9                	xor    %edi,%ecx
 876aed3:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876aed9:	89 8d ec fd ff ff    	mov    %ecx,-0x214(%ebp)
 876aedf:	03 85 e8 fd ff ff    	add    -0x218(%ebp),%eax
 876aee5:	13 95 ec fd ff ff    	adc    -0x214(%ebp),%edx
 876aeeb:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876aef1:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876aef7:	01 c6                	add    %eax,%esi
 876aef9:	11 d7                	adc    %edx,%edi
 876aefb:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 876af01:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876af07:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 876af0d:	8b bd 10 ff ff ff    	mov    -0xf0(%ebp),%edi
 876af13:	23 bd f0 fe ff ff    	and    -0x110(%ebp),%edi
 876af19:	0b b5 f0 fe ff ff    	or     -0x110(%ebp),%esi
 876af1f:	8b 8d 14 ff ff ff    	mov    -0xec(%ebp),%ecx
 876af25:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876af2b:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876af31:	23 b5 08 ff ff ff    	and    -0xf8(%ebp),%esi
 876af37:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876af3d:	23 bd f4 fe ff ff    	and    -0x10c(%ebp),%edi
 876af43:	0b 8d f4 fe ff ff    	or     -0x10c(%ebp),%ecx
 876af49:	23 8d 0c ff ff ff    	and    -0xf4(%ebp),%ecx
 876af4f:	89 b5 e0 fd ff ff    	mov    %esi,-0x220(%ebp)
 876af55:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876af5b:	09 f9                	or     %edi,%ecx
 876af5d:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876af63:	89 8d e4 fd ff ff    	mov    %ecx,-0x21c(%ebp)
 876af69:	89 f1                	mov    %esi,%ecx
 876af6b:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876af6f:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876af73:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876af79:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876af7f:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876af85:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876af8b:	89 f1                	mov    %esi,%ecx
 876af8d:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876af91:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876af97:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876af9b:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876afa1:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876afa7:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876afad:	89 bd 00 ff ff ff    	mov    %edi,-0x100(%ebp)
 876afb3:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876afb9:	89 f1                	mov    %esi,%ecx
 876afbb:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876afbf:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876afc3:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876afc9:	31 f1                	xor    %esi,%ecx
 876afcb:	8b b5 e0 fd ff ff    	mov    -0x220(%ebp),%esi
 876afd1:	89 8d d8 fd ff ff    	mov    %ecx,-0x228(%ebp)
 876afd7:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876afdd:	31 f9                	xor    %edi,%ecx
 876afdf:	8b bd e4 fd ff ff    	mov    -0x21c(%ebp),%edi
 876afe5:	03 b5 d8 fd ff ff    	add    -0x228(%ebp),%esi
 876afeb:	89 8d dc fd ff ff    	mov    %ecx,-0x224(%ebp)
 876aff1:	13 bd dc fd ff ff    	adc    -0x224(%ebp),%edi
 876aff7:	89 b5 00 ff ff ff    	mov    %esi,-0x100(%ebp)
 876affd:	01 85 00 ff ff ff    	add    %eax,-0x100(%ebp)
 876b003:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876b009:	89 bd 04 ff ff ff    	mov    %edi,-0xfc(%ebp)
 876b00f:	11 95 04 ff ff ff    	adc    %edx,-0xfc(%ebp)
 876b015:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876b01b:	8b 70 38             	mov    0x38(%eax),%esi
 876b01e:	8b 78 3c             	mov    0x3c(%eax),%edi
 876b021:	85 d2                	test   %edx,%edx
 876b023:	0f 84 77 22 00 00    	je     876d2a0 <_ZN8TaoCryptL12Transform512EPyS0_+0x3d30>
 876b029:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 876b02f:	8b 8d 34 ff ff ff    	mov    -0xcc(%ebp),%ecx
 876b035:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876b03b:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876b041:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876b047:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b04d:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876b053:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 876b059:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b05f:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 876b065:	89 d0                	mov    %edx,%eax
 876b067:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876b06b:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876b06f:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876b075:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 876b07b:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876b081:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 876b087:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876b08d:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876b091:	c1 e9 06             	shr    $0x6,%ecx
 876b094:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876b09a:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876b0a0:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876b0a6:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876b0ac:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 876b0b2:	31 d1                	xor    %edx,%ecx
 876b0b4:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 876b0ba:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876b0c0:	89 c1                	mov    %eax,%ecx
 876b0c2:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876b0c6:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876b0ca:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876b0d0:	31 c1                	xor    %eax,%ecx
 876b0d2:	89 8d 40 fc ff ff    	mov    %ecx,-0x3c0(%ebp)
 876b0d8:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b0de:	8b 85 40 fc ff ff    	mov    -0x3c0(%ebp),%eax
 876b0e4:	31 d1                	xor    %edx,%ecx
 876b0e6:	89 8d 44 fc ff ff    	mov    %ecx,-0x3bc(%ebp)
 876b0ec:	8b 95 44 fc ff ff    	mov    -0x3bc(%ebp),%edx
 876b0f2:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b0f8:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b0fe:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876b104:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 876b10a:	89 d0                	mov    %edx,%eax
 876b10c:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876b110:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876b114:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876b11a:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876b120:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876b126:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876b12c:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 876b132:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876b136:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876b13c:	c1 e9 07             	shr    $0x7,%ecx
 876b13f:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876b145:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876b14b:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 876b151:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876b157:	89 c1                	mov    %eax,%ecx
 876b159:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876b15d:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876b161:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876b167:	31 c1                	xor    %eax,%ecx
 876b169:	89 8d 38 fc ff ff    	mov    %ecx,-0x3c8(%ebp)
 876b16f:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b175:	8b 85 38 fc ff ff    	mov    -0x3c8(%ebp),%eax
 876b17b:	31 d1                	xor    %edx,%ecx
 876b17d:	89 8d 3c fc ff ff    	mov    %ecx,-0x3c4(%ebp)
 876b183:	8b 95 3c fc ff ff    	mov    -0x3c4(%ebp),%edx
 876b189:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b18f:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b195:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876b19b:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876b1a1:	89 8d 6c ff ff ff    	mov    %ecx,-0x94(%ebp)
 876b1a7:	89 95 68 ff ff ff    	mov    %edx,-0x98(%ebp)
 876b1ad:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 876b1b3:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 876b1b9:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 876b1bf:	01 f0                	add    %esi,%eax
 876b1c1:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
 876b1c7:	11 fa                	adc    %edi,%edx
 876b1c9:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876b1cf:	33 b5 fc fe ff ff    	xor    -0x104(%ebp),%esi
 876b1d5:	23 b5 ec fe ff ff    	and    -0x114(%ebp),%esi
 876b1db:	33 b5 fc fe ff ff    	xor    -0x104(%ebp),%esi
 876b1e1:	33 8d f8 fe ff ff    	xor    -0x108(%ebp),%ecx
 876b1e7:	23 8d e8 fe ff ff    	and    -0x118(%ebp),%ecx
 876b1ed:	89 b5 d4 fd ff ff    	mov    %esi,-0x22c(%ebp)
 876b1f3:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876b1f9:	33 8d f8 fe ff ff    	xor    -0x108(%ebp),%ecx
 876b1ff:	89 8d d0 fd ff ff    	mov    %ecx,-0x230(%ebp)
 876b205:	89 f1                	mov    %esi,%ecx
 876b207:	03 85 d0 fd ff ff    	add    -0x230(%ebp),%eax
 876b20d:	13 95 d4 fd ff ff    	adc    -0x22c(%ebp),%edx
 876b213:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876b217:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876b21b:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876b221:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876b227:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876b22d:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876b233:	89 f1                	mov    %esi,%ecx
 876b235:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876b239:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876b23f:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876b243:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876b249:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876b24f:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876b255:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 876b25b:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876b261:	89 f1                	mov    %esi,%ecx
 876b263:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876b267:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876b26b:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b271:	31 f1                	xor    %esi,%ecx
 876b273:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876b279:	89 8d c8 fd ff ff    	mov    %ecx,-0x238(%ebp)
 876b27f:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 876b285:	31 f9                	xor    %edi,%ecx
 876b287:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876b28d:	89 8d cc fd ff ff    	mov    %ecx,-0x234(%ebp)
 876b293:	03 85 c8 fd ff ff    	add    -0x238(%ebp),%eax
 876b299:	13 95 cc fd ff ff    	adc    -0x234(%ebp),%edx
 876b29f:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876b2a5:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876b2ab:	01 c6                	add    %eax,%esi
 876b2ad:	11 d7                	adc    %edx,%edi
 876b2af:	89 b5 08 ff ff ff    	mov    %esi,-0xf8(%ebp)
 876b2b5:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876b2bb:	89 bd 0c ff ff ff    	mov    %edi,-0xf4(%ebp)
 876b2c1:	8b bd 00 ff ff ff    	mov    -0x100(%ebp),%edi
 876b2c7:	23 bd 10 ff ff ff    	and    -0xf0(%ebp),%edi
 876b2cd:	0b b5 10 ff ff ff    	or     -0xf0(%ebp),%esi
 876b2d3:	8b 8d 04 ff ff ff    	mov    -0xfc(%ebp),%ecx
 876b2d9:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876b2df:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876b2e5:	23 b5 f0 fe ff ff    	and    -0x110(%ebp),%esi
 876b2eb:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876b2f1:	23 bd 14 ff ff ff    	and    -0xec(%ebp),%edi
 876b2f7:	0b 8d 14 ff ff ff    	or     -0xec(%ebp),%ecx
 876b2fd:	23 8d f4 fe ff ff    	and    -0x10c(%ebp),%ecx
 876b303:	89 b5 c0 fd ff ff    	mov    %esi,-0x240(%ebp)
 876b309:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876b30f:	09 f9                	or     %edi,%ecx
 876b311:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876b317:	89 8d c4 fd ff ff    	mov    %ecx,-0x23c(%ebp)
 876b31d:	89 f1                	mov    %esi,%ecx
 876b31f:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876b323:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876b327:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876b32d:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876b333:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876b339:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876b33f:	89 f1                	mov    %esi,%ecx
 876b341:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876b345:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876b34b:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876b34f:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876b355:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876b35b:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876b361:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 876b367:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876b36d:	89 f1                	mov    %esi,%ecx
 876b36f:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876b373:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876b377:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876b37d:	31 f1                	xor    %esi,%ecx
 876b37f:	8b b5 c0 fd ff ff    	mov    -0x240(%ebp),%esi
 876b385:	89 8d b8 fd ff ff    	mov    %ecx,-0x248(%ebp)
 876b38b:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 876b391:	31 f9                	xor    %edi,%ecx
 876b393:	8b bd c4 fd ff ff    	mov    -0x23c(%ebp),%edi
 876b399:	03 b5 b8 fd ff ff    	add    -0x248(%ebp),%esi
 876b39f:	89 8d bc fd ff ff    	mov    %ecx,-0x244(%ebp)
 876b3a5:	13 bd bc fd ff ff    	adc    -0x244(%ebp),%edi
 876b3ab:	89 b5 20 ff ff ff    	mov    %esi,-0xe0(%ebp)
 876b3b1:	01 85 20 ff ff ff    	add    %eax,-0xe0(%ebp)
 876b3b7:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876b3bd:	89 bd 24 ff ff ff    	mov    %edi,-0xdc(%ebp)
 876b3c3:	11 95 24 ff ff ff    	adc    %edx,-0xdc(%ebp)
 876b3c9:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876b3cf:	8b 70 40             	mov    0x40(%eax),%esi
 876b3d2:	8b 78 44             	mov    0x44(%eax),%edi
 876b3d5:	85 d2                	test   %edx,%edx
 876b3d7:	0f 84 93 1e 00 00    	je     876d270 <_ZN8TaoCryptL12Transform512EPyS0_+0x3d00>
 876b3dd:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 876b3e3:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 876b3e9:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876b3ef:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876b3f5:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 876b3fb:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b401:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876b407:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 876b40d:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b413:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 876b419:	89 d0                	mov    %edx,%eax
 876b41b:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876b41f:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876b423:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876b429:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 876b42f:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876b435:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 876b43b:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876b441:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876b445:	c1 e9 06             	shr    $0x6,%ecx
 876b448:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876b44e:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876b454:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876b45a:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876b460:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 876b466:	31 d1                	xor    %edx,%ecx
 876b468:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876b46e:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876b474:	89 c1                	mov    %eax,%ecx
 876b476:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876b47a:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876b47e:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876b484:	31 c1                	xor    %eax,%ecx
 876b486:	89 8d 30 fc ff ff    	mov    %ecx,-0x3d0(%ebp)
 876b48c:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b492:	8b 85 30 fc ff ff    	mov    -0x3d0(%ebp),%eax
 876b498:	31 d1                	xor    %edx,%ecx
 876b49a:	89 8d 34 fc ff ff    	mov    %ecx,-0x3cc(%ebp)
 876b4a0:	8b 95 34 fc ff ff    	mov    -0x3cc(%ebp),%edx
 876b4a6:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b4ac:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b4b2:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876b4b8:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876b4be:	89 d0                	mov    %edx,%eax
 876b4c0:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876b4c4:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876b4c8:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 876b4ce:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876b4d4:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876b4da:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876b4e0:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876b4e6:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876b4ea:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876b4f0:	c1 e9 07             	shr    $0x7,%ecx
 876b4f3:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876b4f9:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876b4ff:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876b505:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876b50b:	89 c1                	mov    %eax,%ecx
 876b50d:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876b511:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876b515:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876b51b:	31 c1                	xor    %eax,%ecx
 876b51d:	89 8d 28 fc ff ff    	mov    %ecx,-0x3d8(%ebp)
 876b523:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b529:	8b 85 28 fc ff ff    	mov    -0x3d8(%ebp),%eax
 876b52f:	31 d1                	xor    %edx,%ecx
 876b531:	89 8d 2c fc ff ff    	mov    %ecx,-0x3d4(%ebp)
 876b537:	8b 95 2c fc ff ff    	mov    -0x3d4(%ebp),%edx
 876b53d:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b543:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b549:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876b54f:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876b555:	89 8d 74 ff ff ff    	mov    %ecx,-0x8c(%ebp)
 876b55b:	89 95 70 ff ff ff    	mov    %edx,-0x90(%ebp)
 876b561:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 876b567:	8b 95 fc fe ff ff    	mov    -0x104(%ebp),%edx
 876b56d:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 876b573:	01 f0                	add    %esi,%eax
 876b575:	8b b5 ec fe ff ff    	mov    -0x114(%ebp),%esi
 876b57b:	11 fa                	adc    %edi,%edx
 876b57d:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876b583:	33 b5 1c ff ff ff    	xor    -0xe4(%ebp),%esi
 876b589:	23 b5 0c ff ff ff    	and    -0xf4(%ebp),%esi
 876b58f:	33 b5 1c ff ff ff    	xor    -0xe4(%ebp),%esi
 876b595:	33 8d 18 ff ff ff    	xor    -0xe8(%ebp),%ecx
 876b59b:	23 8d 08 ff ff ff    	and    -0xf8(%ebp),%ecx
 876b5a1:	89 b5 b4 fd ff ff    	mov    %esi,-0x24c(%ebp)
 876b5a7:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876b5ad:	33 8d 18 ff ff ff    	xor    -0xe8(%ebp),%ecx
 876b5b3:	89 8d b0 fd ff ff    	mov    %ecx,-0x250(%ebp)
 876b5b9:	89 f1                	mov    %esi,%ecx
 876b5bb:	03 85 b0 fd ff ff    	add    -0x250(%ebp),%eax
 876b5c1:	13 95 b4 fd ff ff    	adc    -0x24c(%ebp),%edx
 876b5c7:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876b5cb:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876b5cf:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876b5d5:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876b5db:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876b5e1:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876b5e7:	89 f1                	mov    %esi,%ecx
 876b5e9:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876b5ed:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876b5f3:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876b5f7:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876b5fd:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876b603:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876b609:	89 bd f8 fe ff ff    	mov    %edi,-0x108(%ebp)
 876b60f:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876b615:	89 f1                	mov    %esi,%ecx
 876b617:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876b61b:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876b61f:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b625:	31 f1                	xor    %esi,%ecx
 876b627:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876b62d:	89 8d a8 fd ff ff    	mov    %ecx,-0x258(%ebp)
 876b633:	8b 8d f8 fe ff ff    	mov    -0x108(%ebp),%ecx
 876b639:	31 f9                	xor    %edi,%ecx
 876b63b:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876b641:	89 8d ac fd ff ff    	mov    %ecx,-0x254(%ebp)
 876b647:	03 85 a8 fd ff ff    	add    -0x258(%ebp),%eax
 876b64d:	13 95 ac fd ff ff    	adc    -0x254(%ebp),%edx
 876b653:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876b659:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876b65f:	01 c6                	add    %eax,%esi
 876b661:	11 d7                	adc    %edx,%edi
 876b663:	89 b5 f0 fe ff ff    	mov    %esi,-0x110(%ebp)
 876b669:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876b66f:	89 bd f4 fe ff ff    	mov    %edi,-0x10c(%ebp)
 876b675:	8b bd 20 ff ff ff    	mov    -0xe0(%ebp),%edi
 876b67b:	23 bd 00 ff ff ff    	and    -0x100(%ebp),%edi
 876b681:	0b b5 00 ff ff ff    	or     -0x100(%ebp),%esi
 876b687:	8b 8d 24 ff ff ff    	mov    -0xdc(%ebp),%ecx
 876b68d:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876b693:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876b699:	23 b5 10 ff ff ff    	and    -0xf0(%ebp),%esi
 876b69f:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876b6a5:	23 bd 04 ff ff ff    	and    -0xfc(%ebp),%edi
 876b6ab:	0b 8d 04 ff ff ff    	or     -0xfc(%ebp),%ecx
 876b6b1:	23 8d 14 ff ff ff    	and    -0xec(%ebp),%ecx
 876b6b7:	89 b5 a0 fd ff ff    	mov    %esi,-0x260(%ebp)
 876b6bd:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876b6c3:	09 f9                	or     %edi,%ecx
 876b6c5:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876b6cb:	89 8d a4 fd ff ff    	mov    %ecx,-0x25c(%ebp)
 876b6d1:	89 f1                	mov    %esi,%ecx
 876b6d3:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876b6d7:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876b6db:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876b6e1:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876b6e7:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876b6ed:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876b6f3:	89 f1                	mov    %esi,%ecx
 876b6f5:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876b6f9:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876b6ff:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876b703:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876b709:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876b70f:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876b715:	89 bd f8 fe ff ff    	mov    %edi,-0x108(%ebp)
 876b71b:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876b721:	89 f1                	mov    %esi,%ecx
 876b723:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876b727:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876b72b:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876b731:	31 f1                	xor    %esi,%ecx
 876b733:	8b b5 a0 fd ff ff    	mov    -0x260(%ebp),%esi
 876b739:	89 8d 98 fd ff ff    	mov    %ecx,-0x268(%ebp)
 876b73f:	8b 8d f8 fe ff ff    	mov    -0x108(%ebp),%ecx
 876b745:	31 f9                	xor    %edi,%ecx
 876b747:	8b bd a4 fd ff ff    	mov    -0x25c(%ebp),%edi
 876b74d:	03 b5 98 fd ff ff    	add    -0x268(%ebp),%esi
 876b753:	89 8d 9c fd ff ff    	mov    %ecx,-0x264(%ebp)
 876b759:	13 bd 9c fd ff ff    	adc    -0x264(%ebp),%edi
 876b75f:	89 b5 f8 fe ff ff    	mov    %esi,-0x108(%ebp)
 876b765:	01 85 f8 fe ff ff    	add    %eax,-0x108(%ebp)
 876b76b:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876b771:	89 bd fc fe ff ff    	mov    %edi,-0x104(%ebp)
 876b777:	11 95 fc fe ff ff    	adc    %edx,-0x104(%ebp)
 876b77d:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876b783:	8b 70 48             	mov    0x48(%eax),%esi
 876b786:	8b 78 4c             	mov    0x4c(%eax),%edi
 876b789:	85 d2                	test   %edx,%edx
 876b78b:	0f 84 af 1a 00 00    	je     876d240 <_ZN8TaoCryptL12Transform512EPyS0_+0x3cd0>
 876b791:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 876b797:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 876b79d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 876b7a3:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876b7a9:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876b7af:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b7b5:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876b7bb:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876b7c1:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b7c7:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 876b7cd:	89 d0                	mov    %edx,%eax
 876b7cf:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876b7d3:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876b7d7:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876b7dd:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 876b7e3:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876b7e9:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 876b7ef:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876b7f5:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876b7f9:	c1 e9 06             	shr    $0x6,%ecx
 876b7fc:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876b802:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876b808:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876b80e:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876b814:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876b81a:	31 d1                	xor    %edx,%ecx
 876b81c:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876b822:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876b828:	89 c1                	mov    %eax,%ecx
 876b82a:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876b82e:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876b832:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876b838:	31 c1                	xor    %eax,%ecx
 876b83a:	89 8d 20 fc ff ff    	mov    %ecx,-0x3e0(%ebp)
 876b840:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b846:	8b 85 20 fc ff ff    	mov    -0x3e0(%ebp),%eax
 876b84c:	31 d1                	xor    %edx,%ecx
 876b84e:	89 8d 24 fc ff ff    	mov    %ecx,-0x3dc(%ebp)
 876b854:	8b 95 24 fc ff ff    	mov    -0x3dc(%ebp),%edx
 876b85a:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b860:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b866:	8b 55 80             	mov    -0x80(%ebp),%edx
 876b869:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876b86c:	89 d0                	mov    %edx,%eax
 876b86e:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876b872:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876b876:	8b 45 80             	mov    -0x80(%ebp),%eax
 876b879:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876b87f:	8b 55 80             	mov    -0x80(%ebp),%edx
 876b882:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876b888:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876b88b:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876b88f:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876b895:	c1 e9 07             	shr    $0x7,%ecx
 876b898:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876b89e:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876b8a4:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876b8a7:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876b8ad:	89 c1                	mov    %eax,%ecx
 876b8af:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876b8b3:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876b8b7:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876b8bd:	31 c1                	xor    %eax,%ecx
 876b8bf:	89 8d 18 fc ff ff    	mov    %ecx,-0x3e8(%ebp)
 876b8c5:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b8cb:	8b 85 18 fc ff ff    	mov    -0x3e8(%ebp),%eax
 876b8d1:	31 d1                	xor    %edx,%ecx
 876b8d3:	89 8d 1c fc ff ff    	mov    %ecx,-0x3e4(%ebp)
 876b8d9:	8b 95 1c fc ff ff    	mov    -0x3e4(%ebp),%edx
 876b8df:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876b8e5:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876b8eb:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876b8f1:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876b8f7:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
 876b8fd:	89 95 78 ff ff ff    	mov    %edx,-0x88(%ebp)
 876b903:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 876b909:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 876b90f:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876b915:	01 f0                	add    %esi,%eax
 876b917:	8b b5 0c ff ff ff    	mov    -0xf4(%ebp),%esi
 876b91d:	11 fa                	adc    %edi,%edx
 876b91f:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876b925:	33 b5 ec fe ff ff    	xor    -0x114(%ebp),%esi
 876b92b:	23 b5 f4 fe ff ff    	and    -0x10c(%ebp),%esi
 876b931:	33 b5 ec fe ff ff    	xor    -0x114(%ebp),%esi
 876b937:	33 8d e8 fe ff ff    	xor    -0x118(%ebp),%ecx
 876b93d:	23 8d f0 fe ff ff    	and    -0x110(%ebp),%ecx
 876b943:	89 b5 94 fd ff ff    	mov    %esi,-0x26c(%ebp)
 876b949:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876b94f:	33 8d e8 fe ff ff    	xor    -0x118(%ebp),%ecx
 876b955:	89 8d 90 fd ff ff    	mov    %ecx,-0x270(%ebp)
 876b95b:	89 f1                	mov    %esi,%ecx
 876b95d:	03 85 90 fd ff ff    	add    -0x270(%ebp),%eax
 876b963:	13 95 94 fd ff ff    	adc    -0x26c(%ebp),%edx
 876b969:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876b96d:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876b971:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876b977:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876b97d:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876b983:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876b989:	89 f1                	mov    %esi,%ecx
 876b98b:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876b98f:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876b995:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876b999:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876b99f:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876b9a5:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876b9ab:	89 bd 18 ff ff ff    	mov    %edi,-0xe8(%ebp)
 876b9b1:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876b9b7:	89 f1                	mov    %esi,%ecx
 876b9b9:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876b9bd:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876b9c1:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876b9c7:	31 f1                	xor    %esi,%ecx
 876b9c9:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876b9cf:	89 8d 88 fd ff ff    	mov    %ecx,-0x278(%ebp)
 876b9d5:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 876b9db:	31 f9                	xor    %edi,%ecx
 876b9dd:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876b9e3:	89 8d 8c fd ff ff    	mov    %ecx,-0x274(%ebp)
 876b9e9:	03 85 88 fd ff ff    	add    -0x278(%ebp),%eax
 876b9ef:	13 95 8c fd ff ff    	adc    -0x274(%ebp),%edx
 876b9f5:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876b9fb:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876ba01:	01 c6                	add    %eax,%esi
 876ba03:	11 d7                	adc    %edx,%edi
 876ba05:	89 b5 10 ff ff ff    	mov    %esi,-0xf0(%ebp)
 876ba0b:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876ba11:	89 bd 14 ff ff ff    	mov    %edi,-0xec(%ebp)
 876ba17:	8b bd f8 fe ff ff    	mov    -0x108(%ebp),%edi
 876ba1d:	23 bd 20 ff ff ff    	and    -0xe0(%ebp),%edi
 876ba23:	0b b5 20 ff ff ff    	or     -0xe0(%ebp),%esi
 876ba29:	8b 8d fc fe ff ff    	mov    -0x104(%ebp),%ecx
 876ba2f:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876ba35:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876ba3b:	23 b5 00 ff ff ff    	and    -0x100(%ebp),%esi
 876ba41:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876ba47:	23 bd 24 ff ff ff    	and    -0xdc(%ebp),%edi
 876ba4d:	0b 8d 24 ff ff ff    	or     -0xdc(%ebp),%ecx
 876ba53:	23 8d 04 ff ff ff    	and    -0xfc(%ebp),%ecx
 876ba59:	89 b5 80 fd ff ff    	mov    %esi,-0x280(%ebp)
 876ba5f:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876ba65:	09 f9                	or     %edi,%ecx
 876ba67:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876ba6d:	89 8d 84 fd ff ff    	mov    %ecx,-0x27c(%ebp)
 876ba73:	89 f1                	mov    %esi,%ecx
 876ba75:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876ba79:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876ba7d:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876ba83:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876ba89:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876ba8f:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876ba95:	89 f1                	mov    %esi,%ecx
 876ba97:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876ba9b:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876baa1:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876baa5:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876baab:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876bab1:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876bab7:	89 bd 18 ff ff ff    	mov    %edi,-0xe8(%ebp)
 876babd:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876bac3:	89 f1                	mov    %esi,%ecx
 876bac5:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876bac9:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876bacd:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876bad3:	31 f1                	xor    %esi,%ecx
 876bad5:	8b b5 80 fd ff ff    	mov    -0x280(%ebp),%esi
 876badb:	89 8d 78 fd ff ff    	mov    %ecx,-0x288(%ebp)
 876bae1:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 876bae7:	31 f9                	xor    %edi,%ecx
 876bae9:	8b bd 84 fd ff ff    	mov    -0x27c(%ebp),%edi
 876baef:	03 b5 78 fd ff ff    	add    -0x288(%ebp),%esi
 876baf5:	89 8d 7c fd ff ff    	mov    %ecx,-0x284(%ebp)
 876bafb:	13 bd 7c fd ff ff    	adc    -0x284(%ebp),%edi
 876bb01:	89 b5 18 ff ff ff    	mov    %esi,-0xe8(%ebp)
 876bb07:	01 85 18 ff ff ff    	add    %eax,-0xe8(%ebp)
 876bb0d:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876bb13:	89 bd 1c ff ff ff    	mov    %edi,-0xe4(%ebp)
 876bb19:	11 95 1c ff ff ff    	adc    %edx,-0xe4(%ebp)
 876bb1f:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876bb25:	8b 70 50             	mov    0x50(%eax),%esi
 876bb28:	8b 78 54             	mov    0x54(%eax),%edi
 876bb2b:	85 d2                	test   %edx,%edx
 876bb2d:	0f 84 e5 16 00 00    	je     876d218 <_ZN8TaoCryptL12Transform512EPyS0_+0x3ca8>
 876bb33:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 876bb39:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 876bb3f:	8b 45 80             	mov    -0x80(%ebp),%eax
 876bb42:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876bb48:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876bb4b:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876bb51:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876bb57:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 876bb5d:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876bb63:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876bb69:	89 d0                	mov    %edx,%eax
 876bb6b:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876bb6f:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876bb73:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876bb79:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 876bb7f:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876bb85:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 876bb8b:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876bb91:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876bb95:	c1 e9 06             	shr    $0x6,%ecx
 876bb98:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876bb9e:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876bba4:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876bbaa:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876bbb0:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876bbb6:	31 d1                	xor    %edx,%ecx
 876bbb8:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 876bbbe:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876bbc4:	89 c1                	mov    %eax,%ecx
 876bbc6:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876bbca:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876bbce:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876bbd4:	31 c1                	xor    %eax,%ecx
 876bbd6:	89 8d 10 fc ff ff    	mov    %ecx,-0x3f0(%ebp)
 876bbdc:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876bbe2:	8b 85 10 fc ff ff    	mov    -0x3f0(%ebp),%eax
 876bbe8:	31 d1                	xor    %edx,%ecx
 876bbea:	89 8d 14 fc ff ff    	mov    %ecx,-0x3ec(%ebp)
 876bbf0:	8b 95 14 fc ff ff    	mov    -0x3ec(%ebp),%edx
 876bbf6:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876bbfc:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876bc02:	8b 55 88             	mov    -0x78(%ebp),%edx
 876bc05:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876bc08:	89 d0                	mov    %edx,%eax
 876bc0a:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876bc0e:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876bc12:	8b 45 88             	mov    -0x78(%ebp),%eax
 876bc15:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876bc1b:	8b 55 88             	mov    -0x78(%ebp),%edx
 876bc1e:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876bc24:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 876bc27:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876bc2b:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876bc31:	c1 e9 07             	shr    $0x7,%ecx
 876bc34:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876bc3a:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876bc40:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876bc43:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876bc49:	89 c1                	mov    %eax,%ecx
 876bc4b:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876bc4f:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876bc53:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876bc59:	31 c1                	xor    %eax,%ecx
 876bc5b:	89 8d 08 fc ff ff    	mov    %ecx,-0x3f8(%ebp)
 876bc61:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876bc67:	8b 85 08 fc ff ff    	mov    -0x3f8(%ebp),%eax
 876bc6d:	31 d1                	xor    %edx,%ecx
 876bc6f:	89 8d 0c fc ff ff    	mov    %ecx,-0x3f4(%ebp)
 876bc75:	8b 95 0c fc ff ff    	mov    -0x3f4(%ebp),%edx
 876bc7b:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876bc81:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876bc87:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876bc8d:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876bc93:	89 4d 84             	mov    %ecx,-0x7c(%ebp)
 876bc96:	89 55 80             	mov    %edx,-0x80(%ebp)
 876bc99:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 876bc9f:	8b 95 ec fe ff ff    	mov    -0x114(%ebp),%edx
 876bca5:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 876bcab:	01 f0                	add    %esi,%eax
 876bcad:	8b b5 f4 fe ff ff    	mov    -0x10c(%ebp),%esi
 876bcb3:	11 fa                	adc    %edi,%edx
 876bcb5:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876bcbb:	33 b5 0c ff ff ff    	xor    -0xf4(%ebp),%esi
 876bcc1:	23 b5 14 ff ff ff    	and    -0xec(%ebp),%esi
 876bcc7:	33 b5 0c ff ff ff    	xor    -0xf4(%ebp),%esi
 876bccd:	33 8d 08 ff ff ff    	xor    -0xf8(%ebp),%ecx
 876bcd3:	23 8d 10 ff ff ff    	and    -0xf0(%ebp),%ecx
 876bcd9:	89 b5 74 fd ff ff    	mov    %esi,-0x28c(%ebp)
 876bcdf:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876bce5:	33 8d 08 ff ff ff    	xor    -0xf8(%ebp),%ecx
 876bceb:	89 8d 70 fd ff ff    	mov    %ecx,-0x290(%ebp)
 876bcf1:	89 f1                	mov    %esi,%ecx
 876bcf3:	03 85 70 fd ff ff    	add    -0x290(%ebp),%eax
 876bcf9:	13 95 74 fd ff ff    	adc    -0x28c(%ebp),%edx
 876bcff:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876bd03:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876bd07:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876bd0d:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876bd13:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876bd19:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876bd1f:	89 f1                	mov    %esi,%ecx
 876bd21:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876bd25:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876bd2b:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876bd2f:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876bd35:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876bd3b:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876bd41:	89 bd e8 fe ff ff    	mov    %edi,-0x118(%ebp)
 876bd47:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876bd4d:	89 f1                	mov    %esi,%ecx
 876bd4f:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876bd53:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876bd57:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876bd5d:	31 f1                	xor    %esi,%ecx
 876bd5f:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876bd65:	89 8d 68 fd ff ff    	mov    %ecx,-0x298(%ebp)
 876bd6b:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 876bd71:	31 f9                	xor    %edi,%ecx
 876bd73:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876bd79:	89 8d 6c fd ff ff    	mov    %ecx,-0x294(%ebp)
 876bd7f:	03 85 68 fd ff ff    	add    -0x298(%ebp),%eax
 876bd85:	13 95 6c fd ff ff    	adc    -0x294(%ebp),%edx
 876bd8b:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876bd91:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876bd97:	01 c6                	add    %eax,%esi
 876bd99:	11 d7                	adc    %edx,%edi
 876bd9b:	89 b5 00 ff ff ff    	mov    %esi,-0x100(%ebp)
 876bda1:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876bda7:	89 bd 04 ff ff ff    	mov    %edi,-0xfc(%ebp)
 876bdad:	8b bd 18 ff ff ff    	mov    -0xe8(%ebp),%edi
 876bdb3:	23 bd f8 fe ff ff    	and    -0x108(%ebp),%edi
 876bdb9:	0b b5 f8 fe ff ff    	or     -0x108(%ebp),%esi
 876bdbf:	8b 8d 1c ff ff ff    	mov    -0xe4(%ebp),%ecx
 876bdc5:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876bdcb:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876bdd1:	23 b5 20 ff ff ff    	and    -0xe0(%ebp),%esi
 876bdd7:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876bddd:	23 bd fc fe ff ff    	and    -0x104(%ebp),%edi
 876bde3:	0b 8d fc fe ff ff    	or     -0x104(%ebp),%ecx
 876bde9:	23 8d 24 ff ff ff    	and    -0xdc(%ebp),%ecx
 876bdef:	89 b5 60 fd ff ff    	mov    %esi,-0x2a0(%ebp)
 876bdf5:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876bdfb:	09 f9                	or     %edi,%ecx
 876bdfd:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876be03:	89 8d 64 fd ff ff    	mov    %ecx,-0x29c(%ebp)
 876be09:	89 f1                	mov    %esi,%ecx
 876be0b:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876be0f:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876be13:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876be19:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876be1f:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876be25:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876be2b:	89 f1                	mov    %esi,%ecx
 876be2d:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876be31:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876be37:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876be3b:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876be41:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876be47:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876be4d:	89 bd e8 fe ff ff    	mov    %edi,-0x118(%ebp)
 876be53:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876be59:	89 f1                	mov    %esi,%ecx
 876be5b:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876be5f:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876be63:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876be69:	31 f1                	xor    %esi,%ecx
 876be6b:	8b b5 60 fd ff ff    	mov    -0x2a0(%ebp),%esi
 876be71:	89 8d 58 fd ff ff    	mov    %ecx,-0x2a8(%ebp)
 876be77:	8b 8d e8 fe ff ff    	mov    -0x118(%ebp),%ecx
 876be7d:	31 f9                	xor    %edi,%ecx
 876be7f:	8b bd 64 fd ff ff    	mov    -0x29c(%ebp),%edi
 876be85:	03 b5 58 fd ff ff    	add    -0x2a8(%ebp),%esi
 876be8b:	89 8d 5c fd ff ff    	mov    %ecx,-0x2a4(%ebp)
 876be91:	13 bd 5c fd ff ff    	adc    -0x2a4(%ebp),%edi
 876be97:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 876be9d:	01 85 e8 fe ff ff    	add    %eax,-0x118(%ebp)
 876bea3:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876bea9:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 876beaf:	11 95 ec fe ff ff    	adc    %edx,-0x114(%ebp)
 876beb5:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876bebb:	8b 70 58             	mov    0x58(%eax),%esi
 876bebe:	8b 78 5c             	mov    0x5c(%eax),%edi
 876bec1:	85 d2                	test   %edx,%edx
 876bec3:	0f 84 27 13 00 00    	je     876d1f0 <_ZN8TaoCryptL12Transform512EPyS0_+0x3c80>
 876bec9:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 876becf:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 876bed5:	8b 45 88             	mov    -0x78(%ebp),%eax
 876bed8:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876bede:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876bee1:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876bee7:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876beed:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876bef3:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876bef9:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876beff:	89 d0                	mov    %edx,%eax
 876bf01:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876bf05:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876bf09:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876bf0f:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 876bf15:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876bf1b:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
 876bf21:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876bf27:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876bf2b:	c1 e9 06             	shr    $0x6,%ecx
 876bf2e:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876bf34:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876bf3a:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876bf40:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876bf46:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 876bf4c:	31 d1                	xor    %edx,%ecx
 876bf4e:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 876bf54:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876bf5a:	89 c1                	mov    %eax,%ecx
 876bf5c:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876bf60:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876bf64:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876bf6a:	31 c1                	xor    %eax,%ecx
 876bf6c:	89 8d 00 fc ff ff    	mov    %ecx,-0x400(%ebp)
 876bf72:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876bf78:	8b 85 00 fc ff ff    	mov    -0x400(%ebp),%eax
 876bf7e:	31 d1                	xor    %edx,%ecx
 876bf80:	89 8d 04 fc ff ff    	mov    %ecx,-0x3fc(%ebp)
 876bf86:	8b 95 04 fc ff ff    	mov    -0x3fc(%ebp),%edx
 876bf8c:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876bf92:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876bf98:	8b 55 90             	mov    -0x70(%ebp),%edx
 876bf9b:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 876bf9e:	89 d0                	mov    %edx,%eax
 876bfa0:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876bfa4:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876bfa8:	8b 45 90             	mov    -0x70(%ebp),%eax
 876bfab:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876bfb1:	8b 55 90             	mov    -0x70(%ebp),%edx
 876bfb4:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876bfba:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 876bfbd:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876bfc1:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876bfc7:	c1 e9 07             	shr    $0x7,%ecx
 876bfca:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876bfd0:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876bfd6:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876bfd9:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876bfdf:	89 c1                	mov    %eax,%ecx
 876bfe1:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876bfe5:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876bfe9:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876bfef:	31 c1                	xor    %eax,%ecx
 876bff1:	89 8d f8 fb ff ff    	mov    %ecx,-0x408(%ebp)
 876bff7:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876bffd:	8b 85 f8 fb ff ff    	mov    -0x408(%ebp),%eax
 876c003:	31 d1                	xor    %edx,%ecx
 876c005:	89 8d fc fb ff ff    	mov    %ecx,-0x404(%ebp)
 876c00b:	8b 95 fc fb ff ff    	mov    -0x404(%ebp),%edx
 876c011:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876c017:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876c01d:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876c023:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876c029:	89 4d 8c             	mov    %ecx,-0x74(%ebp)
 876c02c:	89 55 88             	mov    %edx,-0x78(%ebp)
 876c02f:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 876c035:	8b 95 0c ff ff ff    	mov    -0xf4(%ebp),%edx
 876c03b:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876c041:	01 f0                	add    %esi,%eax
 876c043:	8b b5 14 ff ff ff    	mov    -0xec(%ebp),%esi
 876c049:	11 fa                	adc    %edi,%edx
 876c04b:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876c051:	33 b5 f4 fe ff ff    	xor    -0x10c(%ebp),%esi
 876c057:	23 b5 04 ff ff ff    	and    -0xfc(%ebp),%esi
 876c05d:	33 b5 f4 fe ff ff    	xor    -0x10c(%ebp),%esi
 876c063:	33 8d f0 fe ff ff    	xor    -0x110(%ebp),%ecx
 876c069:	23 8d 00 ff ff ff    	and    -0x100(%ebp),%ecx
 876c06f:	89 b5 54 fd ff ff    	mov    %esi,-0x2ac(%ebp)
 876c075:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876c07b:	33 8d f0 fe ff ff    	xor    -0x110(%ebp),%ecx
 876c081:	89 8d 50 fd ff ff    	mov    %ecx,-0x2b0(%ebp)
 876c087:	89 f1                	mov    %esi,%ecx
 876c089:	03 85 50 fd ff ff    	add    -0x2b0(%ebp),%eax
 876c08f:	13 95 54 fd ff ff    	adc    -0x2ac(%ebp),%edx
 876c095:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876c099:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876c09d:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876c0a3:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876c0a9:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876c0af:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876c0b5:	89 f1                	mov    %esi,%ecx
 876c0b7:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876c0bb:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876c0c1:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876c0c5:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876c0cb:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876c0d1:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876c0d7:	89 bd 08 ff ff ff    	mov    %edi,-0xf8(%ebp)
 876c0dd:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876c0e3:	89 f1                	mov    %esi,%ecx
 876c0e5:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876c0e9:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876c0ed:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876c0f3:	31 f1                	xor    %esi,%ecx
 876c0f5:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876c0fb:	89 8d 48 fd ff ff    	mov    %ecx,-0x2b8(%ebp)
 876c101:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876c107:	31 f9                	xor    %edi,%ecx
 876c109:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876c10f:	89 8d 4c fd ff ff    	mov    %ecx,-0x2b4(%ebp)
 876c115:	03 85 48 fd ff ff    	add    -0x2b8(%ebp),%eax
 876c11b:	13 95 4c fd ff ff    	adc    -0x2b4(%ebp),%edx
 876c121:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876c127:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876c12d:	01 c6                	add    %eax,%esi
 876c12f:	11 d7                	adc    %edx,%edi
 876c131:	89 b5 20 ff ff ff    	mov    %esi,-0xe0(%ebp)
 876c137:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876c13d:	89 bd 24 ff ff ff    	mov    %edi,-0xdc(%ebp)
 876c143:	8b bd e8 fe ff ff    	mov    -0x118(%ebp),%edi
 876c149:	23 bd 18 ff ff ff    	and    -0xe8(%ebp),%edi
 876c14f:	0b b5 18 ff ff ff    	or     -0xe8(%ebp),%esi
 876c155:	8b 8d ec fe ff ff    	mov    -0x114(%ebp),%ecx
 876c15b:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876c161:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876c167:	23 b5 f8 fe ff ff    	and    -0x108(%ebp),%esi
 876c16d:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876c173:	23 bd 1c ff ff ff    	and    -0xe4(%ebp),%edi
 876c179:	0b 8d 1c ff ff ff    	or     -0xe4(%ebp),%ecx
 876c17f:	23 8d fc fe ff ff    	and    -0x104(%ebp),%ecx
 876c185:	89 b5 40 fd ff ff    	mov    %esi,-0x2c0(%ebp)
 876c18b:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876c191:	09 f9                	or     %edi,%ecx
 876c193:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876c199:	89 8d 44 fd ff ff    	mov    %ecx,-0x2bc(%ebp)
 876c19f:	89 f1                	mov    %esi,%ecx
 876c1a1:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876c1a5:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876c1a9:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876c1af:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876c1b5:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876c1bb:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876c1c1:	89 f1                	mov    %esi,%ecx
 876c1c3:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876c1c7:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876c1cd:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876c1d1:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876c1d7:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876c1dd:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876c1e3:	89 bd 08 ff ff ff    	mov    %edi,-0xf8(%ebp)
 876c1e9:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876c1ef:	89 f1                	mov    %esi,%ecx
 876c1f1:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876c1f5:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876c1f9:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876c1ff:	31 f1                	xor    %esi,%ecx
 876c201:	8b b5 40 fd ff ff    	mov    -0x2c0(%ebp),%esi
 876c207:	89 8d 38 fd ff ff    	mov    %ecx,-0x2c8(%ebp)
 876c20d:	8b 8d 08 ff ff ff    	mov    -0xf8(%ebp),%ecx
 876c213:	31 f9                	xor    %edi,%ecx
 876c215:	8b bd 44 fd ff ff    	mov    -0x2bc(%ebp),%edi
 876c21b:	03 b5 38 fd ff ff    	add    -0x2c8(%ebp),%esi
 876c221:	89 8d 3c fd ff ff    	mov    %ecx,-0x2c4(%ebp)
 876c227:	13 bd 3c fd ff ff    	adc    -0x2c4(%ebp),%edi
 876c22d:	89 b5 08 ff ff ff    	mov    %esi,-0xf8(%ebp)
 876c233:	01 85 08 ff ff ff    	add    %eax,-0xf8(%ebp)
 876c239:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876c23f:	89 bd 0c ff ff ff    	mov    %edi,-0xf4(%ebp)
 876c245:	11 95 0c ff ff ff    	adc    %edx,-0xf4(%ebp)
 876c24b:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876c251:	8b 70 60             	mov    0x60(%eax),%esi
 876c254:	8b 78 64             	mov    0x64(%eax),%edi
 876c257:	85 d2                	test   %edx,%edx
 876c259:	0f 84 69 0f 00 00    	je     876d1c8 <_ZN8TaoCryptL12Transform512EPyS0_+0x3c58>
 876c25f:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 876c265:	8b 8d 5c ff ff ff    	mov    -0xa4(%ebp),%ecx
 876c26b:	8b 45 90             	mov    -0x70(%ebp),%eax
 876c26e:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
 876c274:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876c277:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876c27d:	89 8d 2c ff ff ff    	mov    %ecx,-0xd4(%ebp)
 876c283:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876c286:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876c28c:	8b 55 80             	mov    -0x80(%ebp),%edx
 876c28f:	89 d0                	mov    %edx,%eax
 876c291:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876c295:	0f ac c1 13          	shrd   $0x13,%eax,%ecx
 876c299:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876c29f:	8b 55 80             	mov    -0x80(%ebp),%edx
 876c2a2:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876c2a8:	8b 4d 84             	mov    -0x7c(%ebp),%ecx
 876c2ab:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 876c2b1:	0f ac ca 06          	shrd   $0x6,%ecx,%edx
 876c2b5:	c1 e9 06             	shr    $0x6,%ecx
 876c2b8:	89 8d d4 fe ff ff    	mov    %ecx,-0x12c(%ebp)
 876c2be:	8b 8d d8 fe ff ff    	mov    -0x128(%ebp),%ecx
 876c2c4:	33 85 d4 fe ff ff    	xor    -0x12c(%ebp),%eax
 876c2ca:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876c2d0:	8b 45 80             	mov    -0x80(%ebp),%eax
 876c2d3:	31 d1                	xor    %edx,%ecx
 876c2d5:	8b 55 84             	mov    -0x7c(%ebp),%edx
 876c2d8:	89 8d c0 fe ff ff    	mov    %ecx,-0x140(%ebp)
 876c2de:	89 c1                	mov    %eax,%ecx
 876c2e0:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876c2e4:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876c2e8:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876c2ee:	31 c1                	xor    %eax,%ecx
 876c2f0:	89 8d f0 fb ff ff    	mov    %ecx,-0x410(%ebp)
 876c2f6:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876c2fc:	8b 85 f0 fb ff ff    	mov    -0x410(%ebp),%eax
 876c302:	31 d1                	xor    %edx,%ecx
 876c304:	89 8d f4 fb ff ff    	mov    %ecx,-0x40c(%ebp)
 876c30a:	8b 95 f4 fb ff ff    	mov    -0x40c(%ebp),%edx
 876c310:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876c316:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876c31c:	8b 55 98             	mov    -0x68(%ebp),%edx
 876c31f:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 876c322:	89 d0                	mov    %edx,%eax
 876c324:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876c328:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876c32c:	8b 45 98             	mov    -0x68(%ebp),%eax
 876c32f:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876c335:	8b 55 98             	mov    -0x68(%ebp),%edx
 876c338:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876c33e:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 876c341:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876c345:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876c34b:	c1 e9 07             	shr    $0x7,%ecx
 876c34e:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876c354:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876c35a:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876c35d:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876c363:	89 c1                	mov    %eax,%ecx
 876c365:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876c369:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876c36d:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876c373:	31 c1                	xor    %eax,%ecx
 876c375:	89 8d e8 fb ff ff    	mov    %ecx,-0x418(%ebp)
 876c37b:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876c381:	8b 85 e8 fb ff ff    	mov    -0x418(%ebp),%eax
 876c387:	31 d1                	xor    %edx,%ecx
 876c389:	89 8d ec fb ff ff    	mov    %ecx,-0x414(%ebp)
 876c38f:	8b 95 ec fb ff ff    	mov    -0x414(%ebp),%edx
 876c395:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876c39b:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876c3a1:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876c3a7:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876c3ad:	89 4d 94             	mov    %ecx,-0x6c(%ebp)
 876c3b0:	89 55 90             	mov    %edx,-0x70(%ebp)
 876c3b3:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 876c3b9:	8b 95 f4 fe ff ff    	mov    -0x10c(%ebp),%edx
 876c3bf:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876c3c5:	01 f0                	add    %esi,%eax
 876c3c7:	8b b5 04 ff ff ff    	mov    -0xfc(%ebp),%esi
 876c3cd:	11 fa                	adc    %edi,%edx
 876c3cf:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876c3d5:	33 b5 14 ff ff ff    	xor    -0xec(%ebp),%esi
 876c3db:	23 b5 24 ff ff ff    	and    -0xdc(%ebp),%esi
 876c3e1:	33 b5 14 ff ff ff    	xor    -0xec(%ebp),%esi
 876c3e7:	33 8d 10 ff ff ff    	xor    -0xf0(%ebp),%ecx
 876c3ed:	23 8d 20 ff ff ff    	and    -0xe0(%ebp),%ecx
 876c3f3:	89 b5 34 fd ff ff    	mov    %esi,-0x2cc(%ebp)
 876c3f9:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876c3ff:	33 8d 10 ff ff ff    	xor    -0xf0(%ebp),%ecx
 876c405:	89 8d 30 fd ff ff    	mov    %ecx,-0x2d0(%ebp)
 876c40b:	89 f1                	mov    %esi,%ecx
 876c40d:	03 85 30 fd ff ff    	add    -0x2d0(%ebp),%eax
 876c413:	13 95 34 fd ff ff    	adc    -0x2cc(%ebp),%edx
 876c419:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876c41d:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876c421:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876c427:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876c42d:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876c433:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876c439:	89 f1                	mov    %esi,%ecx
 876c43b:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876c43f:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876c445:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876c449:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876c44f:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876c455:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
 876c45b:	89 bd f0 fe ff ff    	mov    %edi,-0x110(%ebp)
 876c461:	8b bd 24 ff ff ff    	mov    -0xdc(%ebp),%edi
 876c467:	89 f1                	mov    %esi,%ecx
 876c469:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876c46d:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876c471:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876c477:	31 f1                	xor    %esi,%ecx
 876c479:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876c47f:	89 8d 28 fd ff ff    	mov    %ecx,-0x2d8(%ebp)
 876c485:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 876c48b:	31 f9                	xor    %edi,%ecx
 876c48d:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876c493:	89 8d 2c fd ff ff    	mov    %ecx,-0x2d4(%ebp)
 876c499:	03 85 28 fd ff ff    	add    -0x2d8(%ebp),%eax
 876c49f:	13 95 2c fd ff ff    	adc    -0x2d4(%ebp),%edx
 876c4a5:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876c4ab:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876c4b1:	01 c6                	add    %eax,%esi
 876c4b3:	11 d7                	adc    %edx,%edi
 876c4b5:	89 b5 f8 fe ff ff    	mov    %esi,-0x108(%ebp)
 876c4bb:	8b 8d 0c ff ff ff    	mov    -0xf4(%ebp),%ecx
 876c4c1:	89 bd fc fe ff ff    	mov    %edi,-0x104(%ebp)
 876c4c7:	89 7d ec             	mov    %edi,-0x14(%ebp)
 876c4ca:	8b bd 08 ff ff ff    	mov    -0xf8(%ebp),%edi
 876c4d0:	23 bd e8 fe ff ff    	and    -0x118(%ebp),%edi
 876c4d6:	89 75 e8             	mov    %esi,-0x18(%ebp)
 876c4d9:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876c4df:	0b b5 e8 fe ff ff    	or     -0x118(%ebp),%esi
 876c4e5:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876c4eb:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876c4f1:	23 b5 18 ff ff ff    	and    -0xe8(%ebp),%esi
 876c4f7:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876c4fd:	23 bd ec fe ff ff    	and    -0x114(%ebp),%edi
 876c503:	0b 8d ec fe ff ff    	or     -0x114(%ebp),%ecx
 876c509:	23 8d 1c ff ff ff    	and    -0xe4(%ebp),%ecx
 876c50f:	89 b5 20 fd ff ff    	mov    %esi,-0x2e0(%ebp)
 876c515:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876c51b:	09 f9                	or     %edi,%ecx
 876c51d:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876c523:	89 8d 24 fd ff ff    	mov    %ecx,-0x2dc(%ebp)
 876c529:	89 f1                	mov    %esi,%ecx
 876c52b:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876c52f:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876c533:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876c539:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876c53f:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876c545:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876c54b:	89 f1                	mov    %esi,%ecx
 876c54d:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876c551:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876c557:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876c55b:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876c561:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876c567:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876c56d:	89 bd f0 fe ff ff    	mov    %edi,-0x110(%ebp)
 876c573:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876c579:	89 f1                	mov    %esi,%ecx
 876c57b:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876c57f:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876c583:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876c589:	31 f1                	xor    %esi,%ecx
 876c58b:	8b b5 20 fd ff ff    	mov    -0x2e0(%ebp),%esi
 876c591:	89 8d 18 fd ff ff    	mov    %ecx,-0x2e8(%ebp)
 876c597:	8b 8d f0 fe ff ff    	mov    -0x110(%ebp),%ecx
 876c59d:	31 f9                	xor    %edi,%ecx
 876c59f:	8b bd 24 fd ff ff    	mov    -0x2dc(%ebp),%edi
 876c5a5:	03 b5 18 fd ff ff    	add    -0x2e8(%ebp),%esi
 876c5ab:	89 8d 1c fd ff ff    	mov    %ecx,-0x2e4(%ebp)
 876c5b1:	13 bd 1c fd ff ff    	adc    -0x2e4(%ebp),%edi
 876c5b7:	89 b5 f0 fe ff ff    	mov    %esi,-0x110(%ebp)
 876c5bd:	01 85 f0 fe ff ff    	add    %eax,-0x110(%ebp)
 876c5c3:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 876c5c9:	89 bd f4 fe ff ff    	mov    %edi,-0x10c(%ebp)
 876c5cf:	11 95 f4 fe ff ff    	adc    %edx,-0x10c(%ebp)
 876c5d5:	8b 95 f4 fe ff ff    	mov    -0x10c(%ebp),%edx
 876c5db:	89 45 c8             	mov    %eax,-0x38(%ebp)
 876c5de:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 876c5e4:	89 55 cc             	mov    %edx,-0x34(%ebp)
 876c5e7:	8b 95 c8 fe ff ff    	mov    -0x138(%ebp),%edx
 876c5ed:	85 c0                	test   %eax,%eax
 876c5ef:	8b 72 68             	mov    0x68(%edx),%esi
 876c5f2:	8b 7a 6c             	mov    0x6c(%edx),%edi
 876c5f5:	0f 84 a5 0b 00 00    	je     876d1a0 <_ZN8TaoCryptL12Transform512EPyS0_+0x3c30>
 876c5fb:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 876c601:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 876c607:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
 876c60a:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876c610:	8b 45 88             	mov    -0x78(%ebp),%eax
 876c613:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876c619:	8b 55 98             	mov    -0x68(%ebp),%edx
 876c61c:	01 95 28 ff ff ff    	add    %edx,-0xd8(%ebp)
 876c622:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876c625:	11 8d 2c ff ff ff    	adc    %ecx,-0xd4(%ebp)
 876c62b:	89 c1                	mov    %eax,%ecx
 876c62d:	0f ac d0 13          	shrd   $0x13,%edx,%eax
 876c631:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876c635:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 876c63b:	8b 45 88             	mov    -0x78(%ebp),%eax
 876c63e:	89 95 dc fe ff ff    	mov    %edx,-0x124(%ebp)
 876c644:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876c647:	8b 8d dc fe ff ff    	mov    -0x124(%ebp),%ecx
 876c64d:	0f ac d0 06          	shrd   $0x6,%edx,%eax
 876c651:	c1 ea 06             	shr    $0x6,%edx
 876c654:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 876c65a:	8b 95 d8 fe ff ff    	mov    -0x128(%ebp),%edx
 876c660:	33 8d d4 fe ff ff    	xor    -0x12c(%ebp),%ecx
 876c666:	31 c2                	xor    %eax,%edx
 876c668:	8b 45 88             	mov    -0x78(%ebp),%eax
 876c66b:	89 95 c0 fe ff ff    	mov    %edx,-0x140(%ebp)
 876c671:	8b 55 8c             	mov    -0x74(%ebp),%edx
 876c674:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876c67a:	89 c1                	mov    %eax,%ecx
 876c67c:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876c680:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876c684:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876c68a:	31 c1                	xor    %eax,%ecx
 876c68c:	89 8d e0 fb ff ff    	mov    %ecx,-0x420(%ebp)
 876c692:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876c698:	8b 85 e0 fb ff ff    	mov    -0x420(%ebp),%eax
 876c69e:	31 d1                	xor    %edx,%ecx
 876c6a0:	89 8d e4 fb ff ff    	mov    %ecx,-0x41c(%ebp)
 876c6a6:	8b 95 e4 fb ff ff    	mov    -0x41c(%ebp),%edx
 876c6ac:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876c6b2:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876c6b8:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876c6bb:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876c6be:	89 d0                	mov    %edx,%eax
 876c6c0:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876c6c4:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876c6c8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 876c6cb:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876c6d1:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876c6d4:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876c6da:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876c6dd:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876c6e1:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876c6e7:	c1 e9 07             	shr    $0x7,%ecx
 876c6ea:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876c6f0:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876c6f6:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 876c6f9:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876c6ff:	89 c1                	mov    %eax,%ecx
 876c701:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876c705:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876c709:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876c70f:	31 c1                	xor    %eax,%ecx
 876c711:	89 8d d8 fb ff ff    	mov    %ecx,-0x428(%ebp)
 876c717:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876c71d:	8b 85 d8 fb ff ff    	mov    -0x428(%ebp),%eax
 876c723:	31 d1                	xor    %edx,%ecx
 876c725:	89 8d dc fb ff ff    	mov    %ecx,-0x424(%ebp)
 876c72b:	8b 95 dc fb ff ff    	mov    -0x424(%ebp),%edx
 876c731:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876c737:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876c73d:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876c743:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876c749:	89 4d 9c             	mov    %ecx,-0x64(%ebp)
 876c74c:	89 55 98             	mov    %edx,-0x68(%ebp)
 876c74f:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 876c755:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 876c75b:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 876c761:	01 f0                	add    %esi,%eax
 876c763:	8b b5 24 ff ff ff    	mov    -0xdc(%ebp),%esi
 876c769:	11 fa                	adc    %edi,%edx
 876c76b:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876c771:	33 b5 04 ff ff ff    	xor    -0xfc(%ebp),%esi
 876c777:	23 b5 fc fe ff ff    	and    -0x104(%ebp),%esi
 876c77d:	33 b5 04 ff ff ff    	xor    -0xfc(%ebp),%esi
 876c783:	33 8d 00 ff ff ff    	xor    -0x100(%ebp),%ecx
 876c789:	23 8d f8 fe ff ff    	and    -0x108(%ebp),%ecx
 876c78f:	89 b5 14 fd ff ff    	mov    %esi,-0x2ec(%ebp)
 876c795:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876c79b:	33 8d 00 ff ff ff    	xor    -0x100(%ebp),%ecx
 876c7a1:	89 8d 10 fd ff ff    	mov    %ecx,-0x2f0(%ebp)
 876c7a7:	89 f1                	mov    %esi,%ecx
 876c7a9:	03 85 10 fd ff ff    	add    -0x2f0(%ebp),%eax
 876c7af:	13 95 14 fd ff ff    	adc    -0x2ec(%ebp),%edx
 876c7b5:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876c7b9:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876c7bd:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876c7c3:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876c7c9:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876c7cf:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876c7d5:	89 f1                	mov    %esi,%ecx
 876c7d7:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876c7db:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876c7e1:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876c7e5:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876c7eb:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876c7f1:	8b b5 f8 fe ff ff    	mov    -0x108(%ebp),%esi
 876c7f7:	89 bd 10 ff ff ff    	mov    %edi,-0xf0(%ebp)
 876c7fd:	8b bd fc fe ff ff    	mov    -0x104(%ebp),%edi
 876c803:	89 f1                	mov    %esi,%ecx
 876c805:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876c809:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876c80d:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876c813:	31 f1                	xor    %esi,%ecx
 876c815:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876c81b:	89 8d 08 fd ff ff    	mov    %ecx,-0x2f8(%ebp)
 876c821:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876c827:	31 f9                	xor    %edi,%ecx
 876c829:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876c82f:	89 8d 0c fd ff ff    	mov    %ecx,-0x2f4(%ebp)
 876c835:	03 85 08 fd ff ff    	add    -0x2f8(%ebp),%eax
 876c83b:	13 95 0c fd ff ff    	adc    -0x2f4(%ebp),%edx
 876c841:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876c847:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876c84d:	01 c6                	add    %eax,%esi
 876c84f:	11 d7                	adc    %edx,%edi
 876c851:	89 b5 18 ff ff ff    	mov    %esi,-0xe8(%ebp)
 876c857:	8b 8d f4 fe ff ff    	mov    -0x10c(%ebp),%ecx
 876c85d:	89 bd 1c ff ff ff    	mov    %edi,-0xe4(%ebp)
 876c863:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 876c866:	8b bd f0 fe ff ff    	mov    -0x110(%ebp),%edi
 876c86c:	23 bd 08 ff ff ff    	and    -0xf8(%ebp),%edi
 876c872:	89 75 e0             	mov    %esi,-0x20(%ebp)
 876c875:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876c87b:	0b b5 08 ff ff ff    	or     -0xf8(%ebp),%esi
 876c881:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876c887:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876c88d:	23 b5 e8 fe ff ff    	and    -0x118(%ebp),%esi
 876c893:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876c899:	23 bd 0c ff ff ff    	and    -0xf4(%ebp),%edi
 876c89f:	0b 8d 0c ff ff ff    	or     -0xf4(%ebp),%ecx
 876c8a5:	23 8d ec fe ff ff    	and    -0x114(%ebp),%ecx
 876c8ab:	89 b5 00 fd ff ff    	mov    %esi,-0x300(%ebp)
 876c8b1:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876c8b7:	09 f9                	or     %edi,%ecx
 876c8b9:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876c8bf:	89 8d 04 fd ff ff    	mov    %ecx,-0x2fc(%ebp)
 876c8c5:	89 f1                	mov    %esi,%ecx
 876c8c7:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876c8cb:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876c8cf:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876c8d5:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876c8db:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876c8e1:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876c8e7:	89 f1                	mov    %esi,%ecx
 876c8e9:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876c8ed:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876c8f3:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876c8f7:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876c8fd:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876c903:	8b b5 f0 fe ff ff    	mov    -0x110(%ebp),%esi
 876c909:	89 bd 10 ff ff ff    	mov    %edi,-0xf0(%ebp)
 876c90f:	8b bd f4 fe ff ff    	mov    -0x10c(%ebp),%edi
 876c915:	89 f1                	mov    %esi,%ecx
 876c917:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876c91b:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876c91f:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876c925:	31 f1                	xor    %esi,%ecx
 876c927:	8b b5 00 fd ff ff    	mov    -0x300(%ebp),%esi
 876c92d:	89 8d f8 fc ff ff    	mov    %ecx,-0x308(%ebp)
 876c933:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876c939:	31 f9                	xor    %edi,%ecx
 876c93b:	8b bd 04 fd ff ff    	mov    -0x2fc(%ebp),%edi
 876c941:	03 b5 f8 fc ff ff    	add    -0x308(%ebp),%esi
 876c947:	89 8d fc fc ff ff    	mov    %ecx,-0x304(%ebp)
 876c94d:	13 bd fc fc ff ff    	adc    -0x304(%ebp),%edi
 876c953:	89 b5 10 ff ff ff    	mov    %esi,-0xf0(%ebp)
 876c959:	01 85 10 ff ff ff    	add    %eax,-0xf0(%ebp)
 876c95f:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 876c965:	89 bd 14 ff ff ff    	mov    %edi,-0xec(%ebp)
 876c96b:	11 95 14 ff ff ff    	adc    %edx,-0xec(%ebp)
 876c971:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 876c977:	89 45 c0             	mov    %eax,-0x40(%ebp)
 876c97a:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 876c980:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 876c983:	8b 95 c8 fe ff ff    	mov    -0x138(%ebp),%edx
 876c989:	85 c0                	test   %eax,%eax
 876c98b:	8b 72 70             	mov    0x70(%edx),%esi
 876c98e:	8b 7a 74             	mov    0x74(%edx),%edi
 876c991:	0f 84 e1 07 00 00    	je     876d178 <_ZN8TaoCryptL12Transform512EPyS0_+0x3c08>
 876c997:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 876c99d:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 876c9a3:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 876c9a6:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876c9ac:	8b 45 90             	mov    -0x70(%ebp),%eax
 876c9af:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876c9b5:	8b 55 a0             	mov    -0x60(%ebp),%edx
 876c9b8:	01 95 28 ff ff ff    	add    %edx,-0xd8(%ebp)
 876c9be:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876c9c1:	11 8d 2c ff ff ff    	adc    %ecx,-0xd4(%ebp)
 876c9c7:	89 c1                	mov    %eax,%ecx
 876c9c9:	0f ac d0 13          	shrd   $0x13,%edx,%eax
 876c9cd:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876c9d1:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 876c9d7:	8b 45 90             	mov    -0x70(%ebp),%eax
 876c9da:	89 95 dc fe ff ff    	mov    %edx,-0x124(%ebp)
 876c9e0:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876c9e3:	8b 8d dc fe ff ff    	mov    -0x124(%ebp),%ecx
 876c9e9:	0f ac d0 06          	shrd   $0x6,%edx,%eax
 876c9ed:	c1 ea 06             	shr    $0x6,%edx
 876c9f0:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 876c9f6:	8b 95 d8 fe ff ff    	mov    -0x128(%ebp),%edx
 876c9fc:	33 8d d4 fe ff ff    	xor    -0x12c(%ebp),%ecx
 876ca02:	31 c2                	xor    %eax,%edx
 876ca04:	8b 45 90             	mov    -0x70(%ebp),%eax
 876ca07:	89 95 c0 fe ff ff    	mov    %edx,-0x140(%ebp)
 876ca0d:	8b 55 94             	mov    -0x6c(%ebp),%edx
 876ca10:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876ca16:	89 c1                	mov    %eax,%ecx
 876ca18:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876ca1c:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876ca20:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876ca26:	31 c1                	xor    %eax,%ecx
 876ca28:	89 8d d0 fb ff ff    	mov    %ecx,-0x430(%ebp)
 876ca2e:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876ca34:	8b 85 d0 fb ff ff    	mov    -0x430(%ebp),%eax
 876ca3a:	31 d1                	xor    %edx,%ecx
 876ca3c:	89 8d d4 fb ff ff    	mov    %ecx,-0x42c(%ebp)
 876ca42:	8b 95 d4 fb ff ff    	mov    -0x42c(%ebp),%edx
 876ca48:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876ca4e:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876ca54:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876ca57:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876ca5a:	89 d0                	mov    %edx,%eax
 876ca5c:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876ca60:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876ca64:	8b 45 a8             	mov    -0x58(%ebp),%eax
 876ca67:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876ca6d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876ca70:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876ca76:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876ca79:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876ca7d:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876ca83:	c1 e9 07             	shr    $0x7,%ecx
 876ca86:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876ca8c:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876ca92:	8b 55 ac             	mov    -0x54(%ebp),%edx
 876ca95:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876ca9b:	89 c1                	mov    %eax,%ecx
 876ca9d:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876caa1:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876caa5:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876caab:	31 c1                	xor    %eax,%ecx
 876caad:	89 8d c8 fb ff ff    	mov    %ecx,-0x438(%ebp)
 876cab3:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876cab9:	8b 85 c8 fb ff ff    	mov    -0x438(%ebp),%eax
 876cabf:	31 d1                	xor    %edx,%ecx
 876cac1:	89 8d cc fb ff ff    	mov    %ecx,-0x434(%ebp)
 876cac7:	8b 95 cc fb ff ff    	mov    -0x434(%ebp),%edx
 876cacd:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876cad3:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876cad9:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876cadf:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876cae5:	89 4d a4             	mov    %ecx,-0x5c(%ebp)
 876cae8:	89 55 a0             	mov    %edx,-0x60(%ebp)
 876caeb:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 876caf1:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 876caf7:	8b 8d f8 fe ff ff    	mov    -0x108(%ebp),%ecx
 876cafd:	01 f0                	add    %esi,%eax
 876caff:	8b b5 fc fe ff ff    	mov    -0x104(%ebp),%esi
 876cb05:	11 fa                	adc    %edi,%edx
 876cb07:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876cb0d:	33 b5 24 ff ff ff    	xor    -0xdc(%ebp),%esi
 876cb13:	23 b5 1c ff ff ff    	and    -0xe4(%ebp),%esi
 876cb19:	33 b5 24 ff ff ff    	xor    -0xdc(%ebp),%esi
 876cb1f:	33 8d 20 ff ff ff    	xor    -0xe0(%ebp),%ecx
 876cb25:	23 8d 18 ff ff ff    	and    -0xe8(%ebp),%ecx
 876cb2b:	89 b5 f4 fc ff ff    	mov    %esi,-0x30c(%ebp)
 876cb31:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876cb37:	33 8d 20 ff ff ff    	xor    -0xe0(%ebp),%ecx
 876cb3d:	89 8d f0 fc ff ff    	mov    %ecx,-0x310(%ebp)
 876cb43:	89 f1                	mov    %esi,%ecx
 876cb45:	03 85 f0 fc ff ff    	add    -0x310(%ebp),%eax
 876cb4b:	13 95 f4 fc ff ff    	adc    -0x30c(%ebp),%edx
 876cb51:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876cb55:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876cb59:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876cb5f:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876cb65:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876cb6b:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876cb71:	89 f1                	mov    %esi,%ecx
 876cb73:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876cb77:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876cb7d:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876cb81:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876cb87:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876cb8d:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
 876cb93:	89 bd 00 ff ff ff    	mov    %edi,-0x100(%ebp)
 876cb99:	8b bd 1c ff ff ff    	mov    -0xe4(%ebp),%edi
 876cb9f:	89 f1                	mov    %esi,%ecx
 876cba1:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876cba5:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876cba9:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876cbaf:	31 f1                	xor    %esi,%ecx
 876cbb1:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876cbb7:	89 8d e8 fc ff ff    	mov    %ecx,-0x318(%ebp)
 876cbbd:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876cbc3:	31 f9                	xor    %edi,%ecx
 876cbc5:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876cbcb:	89 8d ec fc ff ff    	mov    %ecx,-0x314(%ebp)
 876cbd1:	03 85 e8 fc ff ff    	add    -0x318(%ebp),%eax
 876cbd7:	13 95 ec fc ff ff    	adc    -0x314(%ebp),%edx
 876cbdd:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876cbe3:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876cbe9:	01 c6                	add    %eax,%esi
 876cbeb:	11 d7                	adc    %edx,%edi
 876cbed:	89 b5 e8 fe ff ff    	mov    %esi,-0x118(%ebp)
 876cbf3:	8b 8d 14 ff ff ff    	mov    -0xec(%ebp),%ecx
 876cbf9:	89 bd ec fe ff ff    	mov    %edi,-0x114(%ebp)
 876cbff:	89 7d dc             	mov    %edi,-0x24(%ebp)
 876cc02:	8b bd 10 ff ff ff    	mov    -0xf0(%ebp),%edi
 876cc08:	23 bd f0 fe ff ff    	and    -0x110(%ebp),%edi
 876cc0e:	89 75 d8             	mov    %esi,-0x28(%ebp)
 876cc11:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876cc17:	0b b5 f0 fe ff ff    	or     -0x110(%ebp),%esi
 876cc1d:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876cc23:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876cc29:	23 b5 08 ff ff ff    	and    -0xf8(%ebp),%esi
 876cc2f:	0b b5 28 ff ff ff    	or     -0xd8(%ebp),%esi
 876cc35:	23 bd f4 fe ff ff    	and    -0x10c(%ebp),%edi
 876cc3b:	0b 8d f4 fe ff ff    	or     -0x10c(%ebp),%ecx
 876cc41:	23 8d 0c ff ff ff    	and    -0xf4(%ebp),%ecx
 876cc47:	89 b5 e0 fc ff ff    	mov    %esi,-0x320(%ebp)
 876cc4d:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876cc53:	09 f9                	or     %edi,%ecx
 876cc55:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876cc5b:	89 8d e4 fc ff ff    	mov    %ecx,-0x31c(%ebp)
 876cc61:	89 f1                	mov    %esi,%ecx
 876cc63:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876cc67:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876cc6b:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876cc71:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876cc77:	89 bd e4 fe ff ff    	mov    %edi,-0x11c(%ebp)
 876cc7d:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876cc83:	89 f1                	mov    %esi,%ecx
 876cc85:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876cc89:	33 b5 e0 fe ff ff    	xor    -0x120(%ebp),%esi
 876cc8f:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876cc93:	33 bd e4 fe ff ff    	xor    -0x11c(%ebp),%edi
 876cc99:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876cc9f:	8b b5 10 ff ff ff    	mov    -0xf0(%ebp),%esi
 876cca5:	89 bd 00 ff ff ff    	mov    %edi,-0x100(%ebp)
 876ccab:	8b bd 14 ff ff ff    	mov    -0xec(%ebp),%edi
 876ccb1:	89 f1                	mov    %esi,%ecx
 876ccb3:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876ccb7:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876ccbb:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876ccc1:	31 f1                	xor    %esi,%ecx
 876ccc3:	8b b5 e0 fc ff ff    	mov    -0x320(%ebp),%esi
 876ccc9:	89 8d d8 fc ff ff    	mov    %ecx,-0x328(%ebp)
 876cccf:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876ccd5:	31 f9                	xor    %edi,%ecx
 876ccd7:	8b bd e4 fc ff ff    	mov    -0x31c(%ebp),%edi
 876ccdd:	03 b5 d8 fc ff ff    	add    -0x328(%ebp),%esi
 876cce3:	89 8d dc fc ff ff    	mov    %ecx,-0x324(%ebp)
 876cce9:	13 bd dc fc ff ff    	adc    -0x324(%ebp),%edi
 876ccef:	89 b5 00 ff ff ff    	mov    %esi,-0x100(%ebp)
 876ccf5:	01 85 00 ff ff ff    	add    %eax,-0x100(%ebp)
 876ccfb:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 876cd01:	89 bd 04 ff ff ff    	mov    %edi,-0xfc(%ebp)
 876cd07:	11 95 04 ff ff ff    	adc    %edx,-0xfc(%ebp)
 876cd0d:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 876cd13:	89 45 b8             	mov    %eax,-0x48(%ebp)
 876cd16:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 876cd1c:	89 55 bc             	mov    %edx,-0x44(%ebp)
 876cd1f:	8b 95 c8 fe ff ff    	mov    -0x138(%ebp),%edx
 876cd25:	85 c0                	test   %eax,%eax
 876cd27:	8b 72 78             	mov    0x78(%edx),%esi
 876cd2a:	8b 7a 7c             	mov    0x7c(%edx),%edi
 876cd2d:	0f 84 1d 04 00 00    	je     876d150 <_ZN8TaoCryptL12Transform512EPyS0_+0x3be0>
 876cd33:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 876cd39:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 876cd3f:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 876cd42:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876cd48:	8b 45 98             	mov    -0x68(%ebp),%eax
 876cd4b:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876cd51:	8b 55 a8             	mov    -0x58(%ebp),%edx
 876cd54:	01 95 28 ff ff ff    	add    %edx,-0xd8(%ebp)
 876cd5a:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876cd5d:	11 8d 2c ff ff ff    	adc    %ecx,-0xd4(%ebp)
 876cd63:	89 c1                	mov    %eax,%ecx
 876cd65:	0f ac d0 13          	shrd   $0x13,%edx,%eax
 876cd69:	0f ac ca 13          	shrd   $0x13,%ecx,%edx
 876cd6d:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 876cd73:	8b 45 98             	mov    -0x68(%ebp),%eax
 876cd76:	89 95 dc fe ff ff    	mov    %edx,-0x124(%ebp)
 876cd7c:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876cd7f:	8b 8d dc fe ff ff    	mov    -0x124(%ebp),%ecx
 876cd85:	0f ac d0 06          	shrd   $0x6,%edx,%eax
 876cd89:	c1 ea 06             	shr    $0x6,%edx
 876cd8c:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 876cd92:	8b 95 d8 fe ff ff    	mov    -0x128(%ebp),%edx
 876cd98:	33 8d d4 fe ff ff    	xor    -0x12c(%ebp),%ecx
 876cd9e:	31 c2                	xor    %eax,%edx
 876cda0:	8b 45 98             	mov    -0x68(%ebp),%eax
 876cda3:	89 95 c0 fe ff ff    	mov    %edx,-0x140(%ebp)
 876cda9:	8b 55 9c             	mov    -0x64(%ebp),%edx
 876cdac:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876cdb2:	89 c1                	mov    %eax,%ecx
 876cdb4:	0f a4 d0 03          	shld   $0x3,%edx,%eax
 876cdb8:	0f a4 ca 03          	shld   $0x3,%ecx,%edx
 876cdbc:	8b 8d c0 fe ff ff    	mov    -0x140(%ebp),%ecx
 876cdc2:	31 c1                	xor    %eax,%ecx
 876cdc4:	89 8d c0 fb ff ff    	mov    %ecx,-0x440(%ebp)
 876cdca:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876cdd0:	8b 85 c0 fb ff ff    	mov    -0x440(%ebp),%eax
 876cdd6:	31 d1                	xor    %edx,%ecx
 876cdd8:	89 8d c4 fb ff ff    	mov    %ecx,-0x43c(%ebp)
 876cdde:	8b 95 c4 fb ff ff    	mov    -0x43c(%ebp),%edx
 876cde4:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876cdea:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876cdf0:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 876cdf6:	8b 8d 34 ff ff ff    	mov    -0xcc(%ebp),%ecx
 876cdfc:	89 d0                	mov    %edx,%eax
 876cdfe:	0f ac ca 01          	shrd   $0x1,%ecx,%edx
 876ce02:	0f ac c1 01          	shrd   $0x1,%eax,%ecx
 876ce06:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 876ce0c:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 876ce12:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 876ce18:	89 8d e4 fe ff ff    	mov    %ecx,-0x11c(%ebp)
 876ce1e:	8b 8d 34 ff ff ff    	mov    -0xcc(%ebp),%ecx
 876ce24:	0f ac ca 07          	shrd   $0x7,%ecx,%edx
 876ce28:	33 95 e0 fe ff ff    	xor    -0x120(%ebp),%edx
 876ce2e:	c1 e9 07             	shr    $0x7,%ecx
 876ce31:	33 8d e4 fe ff ff    	xor    -0x11c(%ebp),%ecx
 876ce37:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 876ce3d:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 876ce43:	89 8d e0 fe ff ff    	mov    %ecx,-0x120(%ebp)
 876ce49:	89 c1                	mov    %eax,%ecx
 876ce4b:	0f ac d0 08          	shrd   $0x8,%edx,%eax
 876ce4f:	0f ac ca 08          	shrd   $0x8,%ecx,%edx
 876ce53:	8b 8d d0 fe ff ff    	mov    -0x130(%ebp),%ecx
 876ce59:	31 c1                	xor    %eax,%ecx
 876ce5b:	89 8d b8 fb ff ff    	mov    %ecx,-0x448(%ebp)
 876ce61:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876ce67:	8b 85 b8 fb ff ff    	mov    -0x448(%ebp),%eax
 876ce6d:	31 d1                	xor    %edx,%ecx
 876ce6f:	89 8d bc fb ff ff    	mov    %ecx,-0x444(%ebp)
 876ce75:	8b 95 bc fb ff ff    	mov    -0x444(%ebp),%edx
 876ce7b:	01 85 28 ff ff ff    	add    %eax,-0xd8(%ebp)
 876ce81:	11 95 2c ff ff ff    	adc    %edx,-0xd4(%ebp)
 876ce87:	8b 8d 2c ff ff ff    	mov    -0xd4(%ebp),%ecx
 876ce8d:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 876ce93:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 876ce96:	89 55 a8             	mov    %edx,-0x58(%ebp)
 876ce99:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 876ce9f:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 876cea5:	8b 8d 18 ff ff ff    	mov    -0xe8(%ebp),%ecx
 876ceab:	01 f0                	add    %esi,%eax
 876cead:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
 876ceb3:	11 fa                	adc    %edi,%edx
 876ceb5:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876cebb:	33 b5 fc fe ff ff    	xor    -0x104(%ebp),%esi
 876cec1:	23 b5 ec fe ff ff    	and    -0x114(%ebp),%esi
 876cec7:	33 b5 fc fe ff ff    	xor    -0x104(%ebp),%esi
 876cecd:	33 8d f8 fe ff ff    	xor    -0x108(%ebp),%ecx
 876ced3:	23 8d e8 fe ff ff    	and    -0x118(%ebp),%ecx
 876ced9:	89 b5 d4 fc ff ff    	mov    %esi,-0x32c(%ebp)
 876cedf:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876cee5:	33 8d f8 fe ff ff    	xor    -0x108(%ebp),%ecx
 876ceeb:	89 8d d0 fc ff ff    	mov    %ecx,-0x330(%ebp)
 876cef1:	89 f1                	mov    %esi,%ecx
 876cef3:	03 85 d0 fc ff ff    	add    -0x330(%ebp),%eax
 876cef9:	13 95 d4 fc ff ff    	adc    -0x32c(%ebp),%edx
 876ceff:	0f ac fe 12          	shrd   $0x12,%edi,%esi
 876cf03:	0f ac cf 12          	shrd   $0x12,%ecx,%edi
 876cf07:	89 b5 d8 fe ff ff    	mov    %esi,-0x128(%ebp)
 876cf0d:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876cf13:	89 bd dc fe ff ff    	mov    %edi,-0x124(%ebp)
 876cf19:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876cf1f:	89 f1                	mov    %esi,%ecx
 876cf21:	0f ac fe 0e          	shrd   $0xe,%edi,%esi
 876cf25:	33 b5 d8 fe ff ff    	xor    -0x128(%ebp),%esi
 876cf2b:	0f ac cf 0e          	shrd   $0xe,%ecx,%edi
 876cf2f:	33 bd dc fe ff ff    	xor    -0x124(%ebp),%edi
 876cf35:	89 b5 e0 fe ff ff    	mov    %esi,-0x120(%ebp)
 876cf3b:	8b b5 e8 fe ff ff    	mov    -0x118(%ebp),%esi
 876cf41:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 876cf47:	8b bd ec fe ff ff    	mov    -0x114(%ebp),%edi
 876cf4d:	89 f1                	mov    %esi,%ecx
 876cf4f:	0f a4 fe 17          	shld   $0x17,%edi,%esi
 876cf53:	0f a4 cf 17          	shld   $0x17,%ecx,%edi
 876cf57:	8b 8d e0 fe ff ff    	mov    -0x120(%ebp),%ecx
 876cf5d:	31 f1                	xor    %esi,%ecx
 876cf5f:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876cf65:	89 8d c8 fc ff ff    	mov    %ecx,-0x338(%ebp)
 876cf6b:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
 876cf71:	31 f9                	xor    %edi,%ecx
 876cf73:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876cf79:	89 8d cc fc ff ff    	mov    %ecx,-0x334(%ebp)
 876cf7f:	03 85 c8 fc ff ff    	add    -0x338(%ebp),%eax
 876cf85:	13 95 cc fc ff ff    	adc    -0x334(%ebp),%edx
 876cf8b:	03 85 28 ff ff ff    	add    -0xd8(%ebp),%eax
 876cf91:	13 95 2c ff ff ff    	adc    -0xd4(%ebp),%edx
 876cf97:	01 c6                	add    %eax,%esi
 876cf99:	11 d7                	adc    %edx,%edi
 876cf9b:	89 b5 08 ff ff ff    	mov    %esi,-0xf8(%ebp)
 876cfa1:	8b 8d 00 ff ff ff    	mov    -0x100(%ebp),%ecx
 876cfa7:	89 bd 0c ff ff ff    	mov    %edi,-0xf4(%ebp)
 876cfad:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 876cfb0:	8b bd 00 ff ff ff    	mov    -0x100(%ebp),%edi
 876cfb6:	23 bd 10 ff ff ff    	and    -0xf0(%ebp),%edi
 876cfbc:	89 75 d0             	mov    %esi,-0x30(%ebp)
 876cfbf:	8b b5 04 ff ff ff    	mov    -0xfc(%ebp),%esi
 876cfc5:	0b b5 14 ff ff ff    	or     -0xec(%ebp),%esi
 876cfcb:	89 bd 20 ff ff ff    	mov    %edi,-0xe0(%ebp)
 876cfd1:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876cfd7:	23 bd 14 ff ff ff    	and    -0xec(%ebp),%edi
 876cfdd:	23 b5 f4 fe ff ff    	and    -0x10c(%ebp),%esi
 876cfe3:	0b 8d 10 ff ff ff    	or     -0xf0(%ebp),%ecx
 876cfe9:	23 8d f0 fe ff ff    	and    -0x110(%ebp),%ecx
 876cfef:	09 fe                	or     %edi,%esi
 876cff1:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876cff7:	89 b5 c4 fc ff ff    	mov    %esi,-0x33c(%ebp)
 876cffd:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876d003:	0b 8d 20 ff ff ff    	or     -0xe0(%ebp),%ecx
 876d009:	89 8d c0 fc ff ff    	mov    %ecx,-0x340(%ebp)
 876d00f:	89 f1                	mov    %esi,%ecx
 876d011:	0f a4 fe 1e          	shld   $0x1e,%edi,%esi
 876d015:	0f a4 cf 1e          	shld   $0x1e,%ecx,%edi
 876d019:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876d01f:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876d025:	89 bd 2c ff ff ff    	mov    %edi,-0xd4(%ebp)
 876d02b:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876d031:	89 f1                	mov    %esi,%ecx
 876d033:	0f ac fe 1c          	shrd   $0x1c,%edi,%esi
 876d037:	89 b5 20 ff ff ff    	mov    %esi,-0xe0(%ebp)
 876d03d:	0f ac cf 1c          	shrd   $0x1c,%ecx,%edi
 876d041:	33 b5 28 ff ff ff    	xor    -0xd8(%ebp),%esi
 876d047:	89 bd 24 ff ff ff    	mov    %edi,-0xdc(%ebp)
 876d04d:	33 bd 2c ff ff ff    	xor    -0xd4(%ebp),%edi
 876d053:	89 b5 10 ff ff ff    	mov    %esi,-0xf0(%ebp)
 876d059:	8b b5 00 ff ff ff    	mov    -0x100(%ebp),%esi
 876d05f:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
 876d065:	8b bd 04 ff ff ff    	mov    -0xfc(%ebp),%edi
 876d06b:	89 f1                	mov    %esi,%ecx
 876d06d:	0f a4 fe 19          	shld   $0x19,%edi,%esi
 876d071:	0f a4 cf 19          	shld   $0x19,%ecx,%edi
 876d075:	8b 8d 10 ff ff ff    	mov    -0xf0(%ebp),%ecx
 876d07b:	31 f1                	xor    %esi,%ecx
 876d07d:	89 8d b8 fc ff ff    	mov    %ecx,-0x348(%ebp)
 876d083:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
 876d089:	31 f9                	xor    %edi,%ecx
 876d08b:	89 8d bc fc ff ff    	mov    %ecx,-0x344(%ebp)
 876d091:	8b b5 c0 fc ff ff    	mov    -0x340(%ebp),%esi
 876d097:	03 b5 b8 fc ff ff    	add    -0x348(%ebp),%esi
 876d09d:	8b bd c4 fc ff ff    	mov    -0x33c(%ebp),%edi
 876d0a3:	13 bd bc fc ff ff    	adc    -0x344(%ebp),%edi
 876d0a9:	01 c6                	add    %eax,%esi
 876d0ab:	89 75 b0             	mov    %esi,-0x50(%ebp)
 876d0ae:	11 d7                	adc    %edx,%edi
 876d0b0:	83 85 cc fe ff ff 10 	addl   $0x10,-0x134(%ebp)
 876d0b7:	83 ad c8 fe ff ff 80 	subl   $0xffffff80,-0x138(%ebp)
 876d0be:	83 bd cc fe ff ff 50 	cmpl   $0x50,-0x134(%ebp)
 876d0c5:	89 7d b4             	mov    %edi,-0x4c(%ebp)
 876d0c8:	0f 84 22 03 00 00    	je     876d3f0 <_ZN8TaoCryptL12Transform512EPyS0_+0x3e80>
 876d0ce:	8b 55 dc             	mov    -0x24(%ebp),%edx
 876d0d1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876d0d4:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876d0da:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876d0e0:	89 95 e4 fe ff ff    	mov    %edx,-0x11c(%ebp)
 876d0e6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 876d0e9:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 876d0ef:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 876d0f2:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 876d0f8:	89 b5 28 ff ff ff    	mov    %esi,-0xd8(%ebp)
 876d0fe:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 876d104:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 876d10a:	89 bd 2c ff ff ff    	mov    %edi,-0xd4(%ebp)
 876d110:	89 8d dc fe ff ff    	mov    %ecx,-0x124(%ebp)
 876d116:	8b 30                	mov    (%eax),%esi
 876d118:	8b 78 04             	mov    0x4(%eax),%edi
 876d11b:	85 d2                	test   %edx,%edx
 876d11d:	0f 85 68 c5 ff ff    	jne    876968b <_ZN8TaoCryptL12Transform512EPyS0_+0x11b>
 876d123:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d129:	8b 02                	mov    (%edx),%eax
 876d12b:	8b 52 04             	mov    0x4(%edx),%edx
 876d12e:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 876d134:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 876d13a:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 876d140:	89 95 34 ff ff ff    	mov    %edx,-0xcc(%ebp)
 876d146:	e9 b2 c6 ff ff       	jmp    87697fd <_ZN8TaoCryptL12Transform512EPyS0_+0x28d>
 876d14b:	90                   	nop
 876d14c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876d150:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d156:	8b 42 78             	mov    0x78(%edx),%eax
 876d159:	8b 52 7c             	mov    0x7c(%edx),%edx
 876d15c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d162:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d168:	89 45 a8             	mov    %eax,-0x58(%ebp)
 876d16b:	89 55 ac             	mov    %edx,-0x54(%ebp)
 876d16e:	e9 26 fd ff ff       	jmp    876ce99 <_ZN8TaoCryptL12Transform512EPyS0_+0x3929>
 876d173:	90                   	nop
 876d174:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876d178:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d17e:	8b 42 70             	mov    0x70(%edx),%eax
 876d181:	8b 52 74             	mov    0x74(%edx),%edx
 876d184:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d18a:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d190:	89 45 a0             	mov    %eax,-0x60(%ebp)
 876d193:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 876d196:	e9 50 f9 ff ff       	jmp    876caeb <_ZN8TaoCryptL12Transform512EPyS0_+0x357b>
 876d19b:	90                   	nop
 876d19c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876d1a0:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d1a6:	8b 42 68             	mov    0x68(%edx),%eax
 876d1a9:	8b 52 6c             	mov    0x6c(%edx),%edx
 876d1ac:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d1b2:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d1b8:	89 45 98             	mov    %eax,-0x68(%ebp)
 876d1bb:	89 55 9c             	mov    %edx,-0x64(%ebp)
 876d1be:	e9 8c f5 ff ff       	jmp    876c74f <_ZN8TaoCryptL12Transform512EPyS0_+0x31df>
 876d1c3:	90                   	nop
 876d1c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876d1c8:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d1ce:	8b 42 60             	mov    0x60(%edx),%eax
 876d1d1:	8b 52 64             	mov    0x64(%edx),%edx
 876d1d4:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d1da:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d1e0:	89 45 90             	mov    %eax,-0x70(%ebp)
 876d1e3:	89 55 94             	mov    %edx,-0x6c(%ebp)
 876d1e6:	e9 c8 f1 ff ff       	jmp    876c3b3 <_ZN8TaoCryptL12Transform512EPyS0_+0x2e43>
 876d1eb:	90                   	nop
 876d1ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876d1f0:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d1f6:	8b 42 58             	mov    0x58(%edx),%eax
 876d1f9:	8b 52 5c             	mov    0x5c(%edx),%edx
 876d1fc:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d202:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d208:	89 45 88             	mov    %eax,-0x78(%ebp)
 876d20b:	89 55 8c             	mov    %edx,-0x74(%ebp)
 876d20e:	e9 1c ee ff ff       	jmp    876c02f <_ZN8TaoCryptL12Transform512EPyS0_+0x2abf>
 876d213:	90                   	nop
 876d214:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876d218:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d21e:	8b 42 50             	mov    0x50(%edx),%eax
 876d221:	8b 52 54             	mov    0x54(%edx),%edx
 876d224:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d22a:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d230:	89 45 80             	mov    %eax,-0x80(%ebp)
 876d233:	89 55 84             	mov    %edx,-0x7c(%ebp)
 876d236:	e9 5e ea ff ff       	jmp    876bc99 <_ZN8TaoCryptL12Transform512EPyS0_+0x2729>
 876d23b:	90                   	nop
 876d23c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 876d240:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d246:	8b 42 48             	mov    0x48(%edx),%eax
 876d249:	8b 52 4c             	mov    0x4c(%edx),%edx
 876d24c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d252:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d258:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 876d25e:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 876d264:	e9 9a e6 ff ff       	jmp    876b903 <_ZN8TaoCryptL12Transform512EPyS0_+0x2393>
 876d269:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d270:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d276:	8b 42 40             	mov    0x40(%edx),%eax
 876d279:	8b 52 44             	mov    0x44(%edx),%edx
 876d27c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d282:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d288:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 876d28e:	89 95 74 ff ff ff    	mov    %edx,-0x8c(%ebp)
 876d294:	e9 c8 e2 ff ff       	jmp    876b561 <_ZN8TaoCryptL12Transform512EPyS0_+0x1ff1>
 876d299:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d2a0:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d2a6:	8b 42 38             	mov    0x38(%edx),%eax
 876d2a9:	8b 52 3c             	mov    0x3c(%edx),%edx
 876d2ac:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d2b2:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d2b8:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 876d2be:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
 876d2c4:	e9 e4 de ff ff       	jmp    876b1ad <_ZN8TaoCryptL12Transform512EPyS0_+0x1c3d>
 876d2c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d2d0:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d2d6:	8b 42 30             	mov    0x30(%edx),%eax
 876d2d9:	8b 52 34             	mov    0x34(%edx),%edx
 876d2dc:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d2e2:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d2e8:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 876d2ee:	89 95 64 ff ff ff    	mov    %edx,-0x9c(%ebp)
 876d2f4:	e9 00 db ff ff       	jmp    876adf9 <_ZN8TaoCryptL12Transform512EPyS0_+0x1889>
 876d2f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d300:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d306:	8b 42 28             	mov    0x28(%edx),%eax
 876d309:	8b 52 2c             	mov    0x2c(%edx),%edx
 876d30c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d312:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d318:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 876d31e:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 876d324:	e9 22 d7 ff ff       	jmp    876aa4b <_ZN8TaoCryptL12Transform512EPyS0_+0x14db>
 876d329:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d330:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d336:	8b 42 20             	mov    0x20(%edx),%eax
 876d339:	8b 52 24             	mov    0x24(%edx),%edx
 876d33c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 876d342:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
 876d348:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 876d34e:	89 95 54 ff ff ff    	mov    %edx,-0xac(%ebp)
 876d354:	e9 44 d3 ff ff       	jmp    876a69d <_ZN8TaoCryptL12Transform512EPyS0_+0x112d>
 876d359:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d360:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d366:	8b 42 18             	mov    0x18(%edx),%eax
 876d369:	8b 52 1c             	mov    0x1c(%edx),%edx
 876d36c:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 876d372:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 876d378:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 876d37e:	89 95 4c ff ff ff    	mov    %edx,-0xb4(%ebp)
 876d384:	e9 6c cf ff ff       	jmp    876a2f5 <_ZN8TaoCryptL12Transform512EPyS0_+0xd85>
 876d389:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d390:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d396:	8b 42 10             	mov    0x10(%edx),%eax
 876d399:	8b 52 14             	mov    0x14(%edx),%edx
 876d39c:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 876d3a2:	89 95 24 ff ff ff    	mov    %edx,-0xdc(%ebp)
 876d3a8:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 876d3ae:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
 876d3b4:	e9 94 cb ff ff       	jmp    8769f4d <_ZN8TaoCryptL12Transform512EPyS0_+0x9dd>
 876d3b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d3c0:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 876d3c6:	8b 42 08             	mov    0x8(%edx),%eax
 876d3c9:	8b 52 0c             	mov    0xc(%edx),%edx
 876d3cc:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 876d3d2:	89 95 1c ff ff ff    	mov    %edx,-0xe4(%ebp)
 876d3d8:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 876d3de:	89 95 3c ff ff ff    	mov    %edx,-0xc4(%ebp)
 876d3e4:	e9 bd c7 ff ff       	jmp    8769ba6 <_ZN8TaoCryptL12Transform512EPyS0_+0x636>
 876d3e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 876d3f0:	8b 8d b8 fe ff ff    	mov    -0x148(%ebp),%ecx
 876d3f6:	01 31                	add    %esi,(%ecx)
 876d3f8:	11 79 04             	adc    %edi,0x4(%ecx)
 876d3fb:	8b 45 b8             	mov    -0x48(%ebp),%eax
 876d3fe:	8b 55 bc             	mov    -0x44(%ebp),%edx
 876d401:	01 41 08             	add    %eax,0x8(%ecx)
 876d404:	11 51 0c             	adc    %edx,0xc(%ecx)
 876d407:	8b 45 c0             	mov    -0x40(%ebp),%eax
 876d40a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 876d40d:	01 41 10             	add    %eax,0x10(%ecx)
 876d410:	11 51 14             	adc    %edx,0x14(%ecx)
 876d413:	8b 45 c8             	mov    -0x38(%ebp),%eax
 876d416:	8b 55 cc             	mov    -0x34(%ebp),%edx
 876d419:	8b b5 08 ff ff ff    	mov    -0xf8(%ebp),%esi
 876d41f:	01 41 18             	add    %eax,0x18(%ecx)
 876d422:	11 51 1c             	adc    %edx,0x1c(%ecx)
 876d425:	8b bd 0c ff ff ff    	mov    -0xf4(%ebp),%edi
 876d42b:	01 71 20             	add    %esi,0x20(%ecx)
 876d42e:	11 79 24             	adc    %edi,0x24(%ecx)
 876d431:	8b 45 d8             	mov    -0x28(%ebp),%eax
 876d434:	8b 55 dc             	mov    -0x24(%ebp),%edx
 876d437:	01 41 28             	add    %eax,0x28(%ecx)
 876d43a:	11 51 2c             	adc    %edx,0x2c(%ecx)
 876d43d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 876d440:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 876d443:	01 41 30             	add    %eax,0x30(%ecx)
 876d446:	11 51 34             	adc    %edx,0x34(%ecx)
 876d449:	8b 45 e8             	mov    -0x18(%ebp),%eax
 876d44c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 876d44f:	01 41 38             	add    %eax,0x38(%ecx)
 876d452:	11 51 3c             	adc    %edx,0x3c(%ecx)
 876d455:	81 c4 44 04 00 00    	add    $0x444,%esp
 876d45b:	5b                   	pop    %ebx
 876d45c:	5e                   	pop    %esi
 876d45d:	5f                   	pop    %edi
 876d45e:	5d                   	pop    %ebp
 876d45f:	c3                   	ret

```

```c
// TaoCrypt::Transform512 @ 0x8769570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Transform512(unsigned long long*, unsigned long long*) */

void __regparm3 TaoCrypt::Transform512(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  uint *local_13c;
  int local_138;
  uint local_10c;
  uint local_108;
  uint local_ec;
  uint local_e8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_54 = (uint)*param_1;
  local_50 = *(uint *)((int)param_1 + 4);
  local_4c = (uint)param_1[1];
  local_48 = *(uint *)((int)param_1 + 0xc);
  local_44 = (uint)param_1[2];
  local_40 = *(uint *)((int)param_1 + 0x14);
  local_3c = (uint)param_1[3];
  local_38 = *(uint *)((int)param_1 + 0x1c);
  local_34 = (uint)param_1[4];
  local_30 = *(uint *)((int)param_1 + 0x24);
  local_2c = (uint)param_1[5];
  local_28 = *(uint *)((int)param_1 + 0x2c);
  local_ec = (uint)param_1[6];
  local_e8 = *(uint *)((int)param_1 + 0x34);
  local_10c = (uint)param_1[7];
  local_108 = *(uint *)((int)param_1 + 0x3c);
  local_138 = 0;
  uVar22 = K512;
  uVar9 = DAT_08d05464;
  local_13c = &K512;
  do {
    local_d4 = (uint)*param_2;
    local_d0 = *(uint *)((int)param_2 + 4);
    while( true ) {
      uVar7 = (local_34 >> 0xe | local_30 << 0x12) ^ (local_34 >> 0x12 | local_30 << 0xe) ^
              (local_34 << 0x17 | local_30 >> 9);
      uVar4 = local_10c + uVar22 + uVar7;
      uVar8 = (local_ec ^ local_2c) & local_34 ^ local_ec;
      uVar5 = uVar4 + uVar8;
      uVar6 = uVar5 + local_d4;
      iVar23 = local_108 + uVar9 + (uint)CARRY4(local_10c,uVar22) +
               ((local_30 >> 0xe | local_34 << 0x12) ^ (local_30 >> 0x12 | local_34 << 0xe) ^
               (local_30 << 0x17 | local_34 >> 9)) + (uint)CARRY4(local_10c + uVar22,uVar7) +
               ((local_e8 ^ local_28) & local_30 ^ local_e8) + (uint)CARRY4(uVar4,uVar8) + local_d0
               + (uint)CARRY4(uVar5,local_d4);
      uVar4 = uVar6 + local_3c;
      uVar8 = iVar23 + local_38 + (uint)CARRY4(uVar6,local_3c);
      uVar5 = (local_4c | local_54) & local_44 | local_4c & local_54;
      uVar9 = (local_54 << 0x1e | local_50 >> 2) ^ (local_54 >> 0x1c | local_50 << 4) ^
              (local_54 << 0x19 | local_50 >> 7);
      uVar7 = uVar5 + uVar9;
      uVar22 = uVar7 + uVar6;
      uVar9 = (local_48 & local_50 | (local_50 | local_48) & local_40) +
              ((local_50 << 0x1e | local_54 >> 2) ^ (local_50 >> 0x1c | local_54 << 4) ^
              (local_50 << 0x19 | local_54 >> 7)) + (uint)CARRY4(uVar5,uVar9) + iVar23 +
              (uint)CARRY4(uVar7,uVar6);
      if (local_138 == 0) {
        local_cc = (uint)param_2[1];
        local_c8 = *(uint *)((int)param_2 + 0xc);
      }
      else {
        bVar27 = CARRY4(local_84,local_cc);
        uVar5 = local_84 + local_cc;
        uVar7 = (local_5c >> 0x13 | local_58 << 0xd) ^ (local_5c >> 6 | local_58 << 0x1a) ^
                (local_5c << 3 | local_58 >> 0x1d);
        uVar6 = uVar5 + uVar7;
        uVar10 = (local_c4 >> 7 | local_c0 << 0x19) ^ (local_c4 >> 1 | local_c0 << 0x1f) ^
                 (local_c4 >> 8 | local_c0 << 0x18);
        local_cc = uVar6 + uVar10;
        local_c8 = local_80 + local_c8 + (uint)bVar27 +
                   ((local_58 >> 0x13 | local_5c << 0xd) ^ local_58 >> 6 ^
                   (local_58 << 3 | local_5c >> 0x1d)) + (uint)CARRY4(uVar5,uVar7) +
                   (local_c0 >> 7 ^ (local_c0 >> 1 | local_c4 << 0x1f) ^
                   (local_c0 >> 8 | local_c4 << 0x18)) + (uint)CARRY4(uVar6,uVar10);
      }
      uVar5 = local_ec + local_13c[2];
      uVar11 = (local_2c ^ local_34) & uVar4 ^ local_2c;
      uVar6 = uVar5 + uVar11;
      uVar12 = (uVar4 >> 0xe | uVar8 * 0x40000) ^ (uVar4 >> 0x12 | uVar8 * 0x4000) ^
               (uVar4 * 0x800000 | uVar8 >> 9);
      uVar7 = uVar6 + uVar12;
      uVar10 = uVar7 + local_cc;
      iVar23 = local_e8 + local_13c[3] + (uint)CARRY4(local_ec,local_13c[2]) +
               ((local_28 ^ local_30) & uVar8 ^ local_28) + (uint)CARRY4(uVar5,uVar11) +
               ((uVar8 >> 0xe | uVar4 * 0x40000) ^ (uVar8 >> 0x12 | uVar4 * 0x4000) ^
               (uVar8 * 0x800000 | uVar4 >> 9)) + (uint)CARRY4(uVar6,uVar12) + local_c8 +
               (uint)CARRY4(uVar7,local_cc);
      uVar7 = uVar10 + local_44;
      uVar24 = iVar23 + local_40 + (uint)CARRY4(uVar10,local_44);
      uVar11 = (uVar22 | local_54) & local_4c | local_54 & uVar22;
      uVar6 = (uVar22 >> 0x1c | uVar9 * 0x10) ^ (uVar22 * 0x40000000 | uVar9 >> 2) ^
              (uVar22 * 0x2000000 | uVar9 >> 7);
      uVar12 = uVar11 + uVar6;
      uVar5 = uVar12 + uVar10;
      uVar6 = ((uVar9 | local_50) & local_48 | uVar9 & local_50) +
              ((uVar9 >> 0x1c | uVar22 * 0x10) ^ (uVar9 * 0x40000000 | uVar22 >> 2) ^
              (uVar9 * 0x2000000 | uVar22 >> 7)) + (uint)CARRY4(uVar11,uVar6) + iVar23 +
              (uint)CARRY4(uVar12,uVar10);
      if (local_138 == 0) {
        local_c4 = (uint)param_2[2];
        local_c0 = *(uint *)((int)param_2 + 0x14);
      }
      else {
        bVar27 = CARRY4(local_7c,local_c4);
        uVar10 = local_7c + local_c4;
        uVar12 = (local_d4 >> 0x13 | local_d0 << 0xd) ^ (local_d4 >> 6 | local_d0 << 0x1a) ^
                 (local_d4 << 3 | local_d0 >> 0x1d);
        uVar11 = uVar10 + uVar12;
        uVar13 = (local_bc >> 7 | local_b8 << 0x19) ^ (local_bc >> 1 | local_b8 << 0x1f) ^
                 (local_bc >> 8 | local_b8 << 0x18);
        local_c4 = uVar11 + uVar13;
        local_c0 = local_78 + local_c0 + (uint)bVar27 +
                   ((local_d0 >> 0x13 | local_d4 << 0xd) ^ local_d0 >> 6 ^
                   (local_d0 << 3 | local_d4 >> 0x1d)) + (uint)CARRY4(uVar10,uVar12) +
                   (local_b8 >> 7 ^ (local_b8 >> 1 | local_bc << 0x1f) ^
                   (local_b8 >> 8 | local_bc << 0x18)) + (uint)CARRY4(uVar11,uVar13);
      }
      uVar10 = local_2c + local_13c[4];
      uVar14 = (local_34 ^ uVar4) & uVar7 ^ local_34;
      uVar11 = uVar10 + uVar14;
      uVar15 = (uVar7 >> 0xe | uVar24 * 0x40000) ^ (uVar7 >> 0x12 | uVar24 * 0x4000) ^
               (uVar7 * 0x800000 | uVar24 >> 9);
      uVar12 = uVar11 + uVar15;
      uVar13 = uVar12 + local_c4;
      iVar23 = local_28 + local_13c[5] + (uint)CARRY4(local_2c,local_13c[4]) +
               ((local_30 ^ uVar8) & uVar24 ^ local_30) + (uint)CARRY4(uVar10,uVar14) +
               ((uVar24 >> 0xe | uVar7 * 0x40000) ^ (uVar24 >> 0x12 | uVar7 * 0x4000) ^
               (uVar24 * 0x800000 | uVar7 >> 9)) + (uint)CARRY4(uVar11,uVar15) + local_c0 +
               (uint)CARRY4(uVar12,local_c4);
      uVar12 = uVar13 + local_4c;
      uVar25 = iVar23 + local_48 + (uint)CARRY4(uVar13,local_4c);
      uVar14 = (uVar5 | uVar22) & local_54 | uVar5 & uVar22;
      uVar11 = (uVar5 >> 0x1c | uVar6 * 0x10) ^ (uVar5 * 0x40000000 | uVar6 >> 2) ^
               (uVar5 * 0x2000000 | uVar6 >> 7);
      uVar15 = uVar14 + uVar11;
      uVar10 = uVar15 + uVar13;
      uVar11 = ((uVar6 | uVar9) & local_50 | uVar6 & uVar9) +
               ((uVar6 >> 0x1c | uVar5 * 0x10) ^ (uVar6 * 0x40000000 | uVar5 >> 2) ^
               (uVar6 * 0x2000000 | uVar5 >> 7)) + (uint)CARRY4(uVar14,uVar11) + iVar23 +
               (uint)CARRY4(uVar15,uVar13);
      if (local_138 == 0) {
        local_bc = (uint)param_2[3];
        local_b8 = *(uint *)((int)param_2 + 0x1c);
      }
      else {
        bVar27 = CARRY4(local_74,local_bc);
        uVar13 = local_74 + local_bc;
        uVar15 = (local_cc >> 0x13 | local_c8 << 0xd) ^ (local_cc >> 6 | local_c8 << 0x1a) ^
                 (local_cc << 3 | local_c8 >> 0x1d);
        uVar14 = uVar13 + uVar15;
        uVar16 = (local_b4 >> 7 | local_b0 << 0x19) ^ (local_b4 >> 1 | local_b0 << 0x1f) ^
                 (local_b4 >> 8 | local_b0 << 0x18);
        local_bc = uVar14 + uVar16;
        local_b8 = local_70 + local_b8 + (uint)bVar27 +
                   ((local_c8 >> 0x13 | local_cc << 0xd) ^ local_c8 >> 6 ^
                   (local_c8 << 3 | local_cc >> 0x1d)) + (uint)CARRY4(uVar13,uVar15) +
                   (local_b0 >> 7 ^ (local_b0 >> 1 | local_b4 << 0x1f) ^
                   (local_b0 >> 8 | local_b4 << 0x18)) + (uint)CARRY4(uVar14,uVar16);
      }
      uVar13 = local_34 + local_13c[6];
      uVar17 = (uVar7 ^ uVar4) & uVar12 ^ uVar4;
      uVar14 = uVar13 + uVar17;
      uVar18 = (uVar12 >> 0xe | uVar25 * 0x40000) ^ (uVar12 >> 0x12 | uVar25 * 0x4000) ^
               (uVar12 * 0x800000 | uVar25 >> 9);
      uVar15 = uVar14 + uVar18;
      uVar16 = uVar15 + local_bc;
      iVar23 = local_30 + local_13c[7] + (uint)CARRY4(local_34,local_13c[6]) +
               ((uVar24 ^ uVar8) & uVar25 ^ uVar8) + (uint)CARRY4(uVar13,uVar17) +
               ((uVar25 >> 0xe | uVar12 * 0x40000) ^ (uVar25 >> 0x12 | uVar12 * 0x4000) ^
               (uVar25 * 0x800000 | uVar12 >> 9)) + (uint)CARRY4(uVar14,uVar18) + local_b8 +
               (uint)CARRY4(uVar15,local_bc);
      uVar15 = uVar16 + local_54;
      uVar26 = iVar23 + local_50 + (uint)CARRY4(uVar16,local_54);
      uVar17 = (uVar10 | uVar5) & uVar22 | uVar10 & uVar5;
      uVar14 = (uVar10 >> 0x1c | uVar11 * 0x10) ^ (uVar10 * 0x40000000 | uVar11 >> 2) ^
               (uVar10 * 0x2000000 | uVar11 >> 7);
      uVar18 = uVar17 + uVar14;
      uVar13 = uVar18 + uVar16;
      uVar14 = ((uVar11 | uVar6) & uVar9 | uVar11 & uVar6) +
               ((uVar11 >> 0x1c | uVar10 * 0x10) ^ (uVar11 * 0x40000000 | uVar10 >> 2) ^
               (uVar11 * 0x2000000 | uVar10 >> 7)) + (uint)CARRY4(uVar17,uVar14) + iVar23 +
               (uint)CARRY4(uVar18,uVar16);
      if (local_138 == 0) {
        local_b4 = (uint)param_2[4];
        local_b0 = *(uint *)((int)param_2 + 0x24);
      }
      else {
        bVar27 = CARRY4(local_6c,local_b4);
        uVar16 = local_6c + local_b4;
        uVar18 = (local_c4 >> 0x13 | local_c0 << 0xd) ^ (local_c4 >> 6 | local_c0 << 0x1a) ^
                 (local_c4 << 3 | local_c0 >> 0x1d);
        uVar17 = uVar16 + uVar18;
        uVar19 = (local_ac >> 7 | local_a8 << 0x19) ^ (local_ac >> 1 | local_a8 << 0x1f) ^
                 (local_ac >> 8 | local_a8 << 0x18);
        local_b4 = uVar17 + uVar19;
        local_b0 = local_68 + local_b0 + (uint)bVar27 +
                   ((local_c0 >> 0x13 | local_c4 << 0xd) ^ local_c0 >> 6 ^
                   (local_c0 << 3 | local_c4 >> 0x1d)) + (uint)CARRY4(uVar16,uVar18) +
                   (local_a8 >> 7 ^ (local_a8 >> 1 | local_ac << 0x1f) ^
                   (local_a8 >> 8 | local_ac << 0x18)) + (uint)CARRY4(uVar17,uVar19);
      }
      uVar16 = uVar4 + local_13c[8];
      uVar20 = (uVar12 ^ uVar7) & uVar15 ^ uVar7;
      uVar17 = uVar16 + uVar20;
      uVar21 = (uVar15 >> 0xe | uVar26 * 0x40000) ^ (uVar15 >> 0x12 | uVar26 * 0x4000) ^
               (uVar15 * 0x800000 | uVar26 >> 9);
      uVar18 = uVar17 + uVar21;
      uVar19 = uVar18 + local_b4;
      iVar23 = uVar8 + local_13c[9] + (uint)CARRY4(uVar4,local_13c[8]) +
               ((uVar25 ^ uVar24) & uVar26 ^ uVar24) + (uint)CARRY4(uVar16,uVar20) +
               ((uVar26 >> 0xe | uVar15 * 0x40000) ^ (uVar26 >> 0x12 | uVar15 * 0x4000) ^
               (uVar26 * 0x800000 | uVar15 >> 9)) + (uint)CARRY4(uVar17,uVar21) + local_b0 +
               (uint)CARRY4(uVar18,local_b4);
      uVar4 = uVar22 + uVar19;
      uVar17 = uVar9 + iVar23 + (uint)CARRY4(uVar22,uVar19);
      uVar8 = (uVar13 | uVar10) & uVar5 | uVar13 & uVar10;
      uVar9 = (uVar13 >> 0x1c | uVar14 * 0x10) ^ (uVar13 * 0x40000000 | uVar14 >> 2) ^
              (uVar13 * 0x2000000 | uVar14 >> 7);
      uVar16 = uVar8 + uVar9;
      uVar22 = uVar16 + uVar19;
      uVar9 = ((uVar14 | uVar11) & uVar6 | uVar14 & uVar11) +
              ((uVar14 >> 0x1c | uVar13 * 0x10) ^ (uVar14 * 0x40000000 | uVar13 >> 2) ^
              (uVar14 * 0x2000000 | uVar13 >> 7)) + (uint)CARRY4(uVar8,uVar9) + iVar23 +
              (uint)CARRY4(uVar16,uVar19);
      if (local_138 == 0) {
        local_ac = (uint)param_2[5];
        local_a8 = *(uint *)((int)param_2 + 0x2c);
      }
      else {
        bVar27 = CARRY4(local_64,local_ac);
        uVar8 = local_64 + local_ac;
        uVar18 = (local_bc >> 0x13 | local_b8 << 0xd) ^ (local_bc >> 6 | local_b8 << 0x1a) ^
                 (local_bc << 3 | local_b8 >> 0x1d);
        uVar16 = uVar8 + uVar18;
        uVar19 = (local_a4 >> 7 | local_a0 << 0x19) ^ (local_a4 >> 1 | local_a0 << 0x1f) ^
                 (local_a4 >> 8 | local_a0 << 0x18);
        local_ac = uVar16 + uVar19;
        local_a8 = local_60 + local_a8 + (uint)bVar27 +
                   ((local_b8 >> 0x13 | local_bc << 0xd) ^ local_b8 >> 6 ^
                   (local_b8 << 3 | local_bc >> 0x1d)) + (uint)CARRY4(uVar8,uVar18) +
                   (local_a0 >> 7 ^ (local_a0 >> 1 | local_a4 << 0x1f) ^
                   (local_a0 >> 8 | local_a4 << 0x18)) + (uint)CARRY4(uVar16,uVar19);
      }
      uVar8 = uVar7 + local_13c[10];
      uVar20 = (uVar15 ^ uVar12) & uVar4 ^ uVar12;
      uVar16 = uVar8 + uVar20;
      uVar21 = (uVar4 >> 0xe | uVar17 * 0x40000) ^ (uVar4 >> 0x12 | uVar17 * 0x4000) ^
               (uVar4 * 0x800000 | uVar17 >> 9);
      uVar18 = uVar16 + uVar21;
      uVar19 = uVar18 + local_ac;
      iVar23 = uVar24 + local_13c[0xb] + (uint)CARRY4(uVar7,local_13c[10]) +
               ((uVar26 ^ uVar25) & uVar17 ^ uVar25) + (uint)CARRY4(uVar8,uVar20) +
               ((uVar17 >> 0xe | uVar4 * 0x40000) ^ (uVar17 >> 0x12 | uVar4 * 0x4000) ^
               (uVar17 * 0x800000 | uVar4 >> 9)) + (uint)CARRY4(uVar16,uVar21) + local_a8 +
               (uint)CARRY4(uVar18,local_ac);
      uVar7 = uVar5 + uVar19;
      uVar16 = uVar6 + iVar23 + (uint)CARRY4(uVar5,uVar19);
      uVar8 = (uVar22 | uVar13) & uVar10 | uVar22 & uVar13;
      uVar6 = (uVar22 >> 0x1c | uVar9 * 0x10) ^ (uVar22 * 0x40000000 | uVar9 >> 2) ^
              (uVar22 * 0x2000000 | uVar9 >> 7);
      uVar24 = uVar8 + uVar6;
      uVar5 = uVar24 + uVar19;
      uVar6 = ((uVar9 | uVar14) & uVar11 | uVar9 & uVar14) +
              ((uVar9 >> 0x1c | uVar22 * 0x10) ^ (uVar9 * 0x40000000 | uVar22 >> 2) ^
              (uVar9 * 0x2000000 | uVar22 >> 7)) + (uint)CARRY4(uVar8,uVar6) + iVar23 +
              (uint)CARRY4(uVar24,uVar19);
      if (local_138 == 0) {
        local_a4 = (uint)param_2[6];
        local_a0 = *(uint *)((int)param_2 + 0x34);
      }
      else {
        bVar27 = CARRY4(local_5c,local_a4);
        uVar8 = local_5c + local_a4;
        uVar18 = (local_b4 >> 0x13 | local_b0 << 0xd) ^ (local_b4 >> 6 | local_b0 << 0x1a) ^
                 (local_b4 << 3 | local_b0 >> 0x1d);
        uVar24 = uVar8 + uVar18;
        uVar19 = (local_9c >> 7 | local_98 << 0x19) ^ (local_9c >> 1 | local_98 << 0x1f) ^
                 (local_9c >> 8 | local_98 << 0x18);
        local_a4 = uVar24 + uVar19;
        local_a0 = local_58 + local_a0 + (uint)bVar27 +
                   ((local_b0 >> 0x13 | local_b4 << 0xd) ^ local_b0 >> 6 ^
                   (local_b0 << 3 | local_b4 >> 0x1d)) + (uint)CARRY4(uVar8,uVar18) +
                   (local_98 >> 7 ^ (local_98 >> 1 | local_9c << 0x1f) ^
                   (local_98 >> 8 | local_9c << 0x18)) + (uint)CARRY4(uVar24,uVar19);
      }
      uVar8 = uVar12 + local_13c[0xc];
      uVar20 = (uVar4 ^ uVar15) & uVar7 ^ uVar15;
      uVar24 = uVar8 + uVar20;
      uVar21 = (uVar7 >> 0xe | uVar16 * 0x40000) ^ (uVar7 >> 0x12 | uVar16 * 0x4000) ^
               (uVar7 * 0x800000 | uVar16 >> 9);
      uVar18 = uVar24 + uVar21;
      uVar19 = uVar18 + local_a4;
      iVar23 = uVar25 + local_13c[0xd] + (uint)CARRY4(uVar12,local_13c[0xc]) +
               ((uVar17 ^ uVar26) & uVar16 ^ uVar26) + (uint)CARRY4(uVar8,uVar20) +
               ((uVar16 >> 0xe | uVar7 * 0x40000) ^ (uVar16 >> 0x12 | uVar7 * 0x4000) ^
               (uVar16 * 0x800000 | uVar7 >> 9)) + (uint)CARRY4(uVar24,uVar21) + local_a0 +
               (uint)CARRY4(uVar18,local_a4);
      uVar12 = uVar10 + uVar19;
      uVar25 = uVar11 + iVar23 + (uint)CARRY4(uVar10,uVar19);
      uVar11 = (uVar5 | uVar22) & uVar13 | uVar5 & uVar22;
      uVar10 = (uVar5 >> 0x1c | uVar6 * 0x10) ^ (uVar5 * 0x40000000 | uVar6 >> 2) ^
               (uVar5 * 0x2000000 | uVar6 >> 7);
      uVar24 = uVar11 + uVar10;
      uVar8 = uVar24 + uVar19;
      uVar10 = ((uVar6 | uVar9) & uVar14 | uVar6 & uVar9) +
               ((uVar6 >> 0x1c | uVar5 * 0x10) ^ (uVar6 * 0x40000000 | uVar5 >> 2) ^
               (uVar6 * 0x2000000 | uVar5 >> 7)) + (uint)CARRY4(uVar11,uVar10) + iVar23 +
               (uint)CARRY4(uVar24,uVar19);
      if (local_138 == 0) {
        local_9c = (uint)param_2[7];
        local_98 = *(uint *)((int)param_2 + 0x3c);
      }
      else {
        bVar27 = CARRY4(local_d4,local_9c);
        uVar11 = local_d4 + local_9c;
        uVar18 = (local_ac >> 0x13 | local_a8 << 0xd) ^ (local_ac >> 6 | local_a8 << 0x1a) ^
                 (local_ac << 3 | local_a8 >> 0x1d);
        uVar24 = uVar11 + uVar18;
        uVar19 = (local_94 >> 7 | local_90 << 0x19) ^ (local_94 >> 1 | local_90 << 0x1f) ^
                 (local_94 >> 8 | local_90 << 0x18);
        local_9c = uVar24 + uVar19;
        local_98 = local_d0 + local_98 + (uint)bVar27 +
                   ((local_a8 >> 0x13 | local_ac << 0xd) ^ local_a8 >> 6 ^
                   (local_a8 << 3 | local_ac >> 0x1d)) + (uint)CARRY4(uVar11,uVar18) +
                   (local_90 >> 7 ^ (local_90 >> 1 | local_94 << 0x1f) ^
                   (local_90 >> 8 | local_94 << 0x18)) + (uint)CARRY4(uVar24,uVar19);
      }
      uVar11 = uVar15 + local_13c[0xe];
      uVar20 = (uVar7 ^ uVar4) & uVar12 ^ uVar4;
      uVar24 = uVar11 + uVar20;
      uVar21 = (uVar12 >> 0xe | uVar25 * 0x40000) ^ (uVar12 >> 0x12 | uVar25 * 0x4000) ^
               (uVar12 * 0x800000 | uVar25 >> 9);
      uVar18 = uVar24 + uVar21;
      uVar19 = uVar18 + local_9c;
      iVar23 = uVar26 + local_13c[0xf] + (uint)CARRY4(uVar15,local_13c[0xe]) +
               ((uVar16 ^ uVar17) & uVar25 ^ uVar17) + (uint)CARRY4(uVar11,uVar20) +
               ((uVar25 >> 0xe | uVar12 * 0x40000) ^ (uVar25 >> 0x12 | uVar12 * 0x4000) ^
               (uVar25 * 0x800000 | uVar12 >> 9)) + (uint)CARRY4(uVar24,uVar21) + local_98 +
               (uint)CARRY4(uVar18,local_9c);
      uVar15 = uVar13 + uVar19;
      uVar18 = uVar14 + iVar23 + (uint)CARRY4(uVar13,uVar19);
      uVar13 = (uVar8 | uVar5) & uVar22 | uVar8 & uVar5;
      uVar24 = (uVar8 >> 0x1c | uVar10 * 0x10) ^ (uVar8 * 0x40000000 | uVar10 >> 2) ^
               (uVar8 * 0x2000000 | uVar10 >> 7);
      uVar14 = uVar13 + uVar24;
      uVar11 = uVar14 + uVar19;
      uVar24 = ((uVar10 | uVar6) & uVar9 | uVar10 & uVar6) +
               ((uVar10 >> 0x1c | uVar8 * 0x10) ^ (uVar10 * 0x40000000 | uVar8 >> 2) ^
               (uVar10 * 0x2000000 | uVar8 >> 7)) + (uint)CARRY4(uVar13,uVar24) + iVar23 +
               (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_94 = (uint)param_2[8];
        local_90 = *(uint *)((int)param_2 + 0x44);
      }
      else {
        bVar27 = CARRY4(local_cc,local_94);
        uVar13 = local_cc + local_94;
        uVar26 = (local_a4 >> 0x13 | local_a0 << 0xd) ^ (local_a4 >> 6 | local_a0 << 0x1a) ^
                 (local_a4 << 3 | local_a0 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_8c >> 7 | local_88 << 0x19) ^ (local_8c >> 1 | local_88 << 0x1f) ^
                 (local_8c >> 8 | local_88 << 0x18);
        local_94 = uVar14 + uVar19;
        local_90 = local_c8 + local_90 + (uint)bVar27 +
                   ((local_a0 >> 0x13 | local_a4 << 0xd) ^ local_a0 >> 6 ^
                   (local_a0 << 3 | local_a4 >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_88 >> 7 ^ (local_88 >> 1 | local_8c << 0x1f) ^
                   (local_88 >> 8 | local_8c << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar4 + local_13c[0x10];
      uVar20 = (uVar12 ^ uVar7) & uVar15 ^ uVar7;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar15 >> 0xe | uVar18 * 0x40000) ^ (uVar15 >> 0x12 | uVar18 * 0x4000) ^
               (uVar15 * 0x800000 | uVar18 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_94;
      iVar23 = uVar17 + local_13c[0x11] + (uint)CARRY4(uVar4,local_13c[0x10]) +
               ((uVar25 ^ uVar16) & uVar18 ^ uVar16) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar18 >> 0xe | uVar15 * 0x40000) ^ (uVar18 >> 0x12 | uVar15 * 0x4000) ^
               (uVar18 * 0x800000 | uVar15 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_90 +
               (uint)CARRY4(uVar26,local_94);
      uVar4 = uVar22 + uVar19;
      uVar17 = uVar9 + iVar23 + (uint)CARRY4(uVar22,uVar19);
      uVar13 = (uVar11 | uVar8) & uVar5 | uVar11 & uVar8;
      uVar9 = (uVar11 >> 0x1c | uVar24 * 0x10) ^ (uVar11 * 0x40000000 | uVar24 >> 2) ^
              (uVar11 * 0x2000000 | uVar24 >> 7);
      uVar14 = uVar13 + uVar9;
      uVar22 = uVar14 + uVar19;
      uVar9 = ((uVar24 | uVar10) & uVar6 | uVar24 & uVar10) +
              ((uVar24 >> 0x1c | uVar11 * 0x10) ^ (uVar24 * 0x40000000 | uVar11 >> 2) ^
              (uVar24 * 0x2000000 | uVar11 >> 7)) + (uint)CARRY4(uVar13,uVar9) + iVar23 +
              (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_8c = (uint)param_2[9];
        local_88 = *(uint *)((int)param_2 + 0x4c);
      }
      else {
        bVar27 = CARRY4(local_c4,local_8c);
        uVar13 = local_c4 + local_8c;
        uVar26 = (local_9c >> 0x13 | local_98 << 0xd) ^ (local_9c >> 6 | local_98 << 0x1a) ^
                 (local_9c << 3 | local_98 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_84 >> 7 | local_80 << 0x19) ^ (local_84 >> 1 | local_80 << 0x1f) ^
                 (local_84 >> 8 | local_80 << 0x18);
        local_8c = uVar14 + uVar19;
        local_88 = local_c0 + local_88 + (uint)bVar27 +
                   ((local_98 >> 0x13 | local_9c << 0xd) ^ local_98 >> 6 ^
                   (local_98 << 3 | local_9c >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_80 >> 7 ^ (local_80 >> 1 | local_84 << 0x1f) ^
                   (local_80 >> 8 | local_84 << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar7 + local_13c[0x12];
      uVar20 = (uVar15 ^ uVar12) & uVar4 ^ uVar12;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar4 >> 0xe | uVar17 * 0x40000) ^ (uVar4 >> 0x12 | uVar17 * 0x4000) ^
               (uVar4 * 0x800000 | uVar17 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_8c;
      iVar23 = uVar16 + local_13c[0x13] + (uint)CARRY4(uVar7,local_13c[0x12]) +
               ((uVar18 ^ uVar25) & uVar17 ^ uVar25) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar17 >> 0xe | uVar4 * 0x40000) ^ (uVar17 >> 0x12 | uVar4 * 0x4000) ^
               (uVar17 * 0x800000 | uVar4 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_88 +
               (uint)CARRY4(uVar26,local_8c);
      uVar7 = uVar5 + uVar19;
      uVar16 = uVar6 + iVar23 + (uint)CARRY4(uVar5,uVar19);
      uVar13 = (uVar22 | uVar11) & uVar8 | uVar22 & uVar11;
      uVar6 = (uVar22 >> 0x1c | uVar9 * 0x10) ^ (uVar22 * 0x40000000 | uVar9 >> 2) ^
              (uVar22 * 0x2000000 | uVar9 >> 7);
      uVar14 = uVar13 + uVar6;
      uVar5 = uVar14 + uVar19;
      uVar6 = ((uVar9 | uVar24) & uVar10 | uVar9 & uVar24) +
              ((uVar9 >> 0x1c | uVar22 * 0x10) ^ (uVar9 * 0x40000000 | uVar22 >> 2) ^
              (uVar9 * 0x2000000 | uVar22 >> 7)) + (uint)CARRY4(uVar13,uVar6) + iVar23 +
              (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_84 = (uint)param_2[10];
        local_80 = *(uint *)((int)param_2 + 0x54);
      }
      else {
        bVar27 = CARRY4(local_bc,local_84);
        uVar13 = local_bc + local_84;
        uVar26 = (local_94 >> 0x13 | local_90 << 0xd) ^ (local_94 >> 6 | local_90 << 0x1a) ^
                 (local_94 << 3 | local_90 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_7c >> 7 | local_78 << 0x19) ^ (local_7c >> 1 | local_78 << 0x1f) ^
                 (local_7c >> 8 | local_78 << 0x18);
        local_84 = uVar14 + uVar19;
        local_80 = local_b8 + local_80 + (uint)bVar27 +
                   ((local_90 >> 0x13 | local_94 << 0xd) ^ local_90 >> 6 ^
                   (local_90 << 3 | local_94 >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_78 >> 7 ^ (local_78 >> 1 | local_7c << 0x1f) ^
                   (local_78 >> 8 | local_7c << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar12 + local_13c[0x14];
      uVar20 = (uVar4 ^ uVar15) & uVar7 ^ uVar15;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar7 >> 0xe | uVar16 * 0x40000) ^ (uVar7 >> 0x12 | uVar16 * 0x4000) ^
               (uVar7 * 0x800000 | uVar16 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_84;
      iVar23 = uVar25 + local_13c[0x15] + (uint)CARRY4(uVar12,local_13c[0x14]) +
               ((uVar17 ^ uVar18) & uVar16 ^ uVar18) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar16 >> 0xe | uVar7 * 0x40000) ^ (uVar16 >> 0x12 | uVar7 * 0x4000) ^
               (uVar16 * 0x800000 | uVar7 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_80 +
               (uint)CARRY4(uVar26,local_84);
      uVar12 = uVar8 + uVar19;
      uVar25 = uVar10 + iVar23 + (uint)CARRY4(uVar8,uVar19);
      uVar13 = (uVar5 | uVar22) & uVar11 | uVar5 & uVar22;
      uVar10 = (uVar5 >> 0x1c | uVar6 * 0x10) ^ (uVar5 * 0x40000000 | uVar6 >> 2) ^
               (uVar5 * 0x2000000 | uVar6 >> 7);
      uVar14 = uVar13 + uVar10;
      uVar8 = uVar14 + uVar19;
      uVar10 = ((uVar6 | uVar9) & uVar24 | uVar6 & uVar9) +
               ((uVar6 >> 0x1c | uVar5 * 0x10) ^ (uVar6 * 0x40000000 | uVar5 >> 2) ^
               (uVar6 * 0x2000000 | uVar5 >> 7)) + (uint)CARRY4(uVar13,uVar10) + iVar23 +
               (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_7c = (uint)param_2[0xb];
        local_78 = *(uint *)((int)param_2 + 0x5c);
      }
      else {
        bVar27 = CARRY4(local_b4,local_7c);
        uVar13 = local_b4 + local_7c;
        uVar26 = (local_8c >> 0x13 | local_88 << 0xd) ^ (local_8c >> 6 | local_88 << 0x1a) ^
                 (local_8c << 3 | local_88 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_74 >> 7 | local_70 << 0x19) ^ (local_74 >> 1 | local_70 << 0x1f) ^
                 (local_74 >> 8 | local_70 << 0x18);
        local_7c = uVar14 + uVar19;
        local_78 = local_b0 + local_78 + (uint)bVar27 +
                   ((local_88 >> 0x13 | local_8c << 0xd) ^ local_88 >> 6 ^
                   (local_88 << 3 | local_8c >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_70 >> 7 ^ (local_70 >> 1 | local_74 << 0x1f) ^
                   (local_70 >> 8 | local_74 << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar15 + local_13c[0x16];
      uVar20 = (uVar7 ^ uVar4) & uVar12 ^ uVar4;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar12 >> 0xe | uVar25 * 0x40000) ^ (uVar12 >> 0x12 | uVar25 * 0x4000) ^
               (uVar12 * 0x800000 | uVar25 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_7c;
      iVar23 = uVar18 + local_13c[0x17] + (uint)CARRY4(uVar15,local_13c[0x16]) +
               ((uVar16 ^ uVar17) & uVar25 ^ uVar17) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar25 >> 0xe | uVar12 * 0x40000) ^ (uVar25 >> 0x12 | uVar12 * 0x4000) ^
               (uVar25 * 0x800000 | uVar12 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_78 +
               (uint)CARRY4(uVar26,local_7c);
      uVar13 = uVar11 + uVar19;
      uVar18 = uVar24 + iVar23 + (uint)CARRY4(uVar11,uVar19);
      uVar14 = (uVar8 | uVar5) & uVar22 | uVar8 & uVar5;
      uVar24 = (uVar8 >> 0x1c | uVar10 * 0x10) ^ (uVar8 * 0x40000000 | uVar10 >> 2) ^
               (uVar8 * 0x2000000 | uVar10 >> 7);
      uVar15 = uVar14 + uVar24;
      uVar11 = uVar15 + uVar19;
      uVar24 = ((uVar10 | uVar6) & uVar9 | uVar10 & uVar6) +
               ((uVar10 >> 0x1c | uVar8 * 0x10) ^ (uVar10 * 0x40000000 | uVar8 >> 2) ^
               (uVar10 * 0x2000000 | uVar8 >> 7)) + (uint)CARRY4(uVar14,uVar24) + iVar23 +
               (uint)CARRY4(uVar15,uVar19);
      if (local_138 == 0) {
        local_74 = (uint)param_2[0xc];
        local_70 = *(uint *)((int)param_2 + 100);
      }
      else {
        bVar27 = CARRY4(local_ac,local_74);
        uVar14 = local_ac + local_74;
        uVar26 = (local_84 >> 0x13 | local_80 << 0xd) ^ (local_84 >> 6 | local_80 << 0x1a) ^
                 (local_84 << 3 | local_80 >> 0x1d);
        uVar15 = uVar14 + uVar26;
        uVar19 = (local_6c >> 7 | local_68 << 0x19) ^ (local_6c >> 1 | local_68 << 0x1f) ^
                 (local_6c >> 8 | local_68 << 0x18);
        local_74 = uVar15 + uVar19;
        local_70 = local_a8 + local_70 + (uint)bVar27 +
                   ((local_80 >> 0x13 | local_84 << 0xd) ^ local_80 >> 6 ^
                   (local_80 << 3 | local_84 >> 0x1d)) + (uint)CARRY4(uVar14,uVar26) +
                   (local_68 >> 7 ^ (local_68 >> 1 | local_6c << 0x1f) ^
                   (local_68 >> 8 | local_6c << 0x18)) + (uint)CARRY4(uVar15,uVar19);
      }
      uVar14 = uVar4 + local_13c[0x18];
      uVar20 = (uVar12 ^ uVar7) & uVar13 ^ uVar7;
      uVar15 = uVar14 + uVar20;
      uVar21 = (uVar13 >> 0xe | uVar18 * 0x40000) ^ (uVar13 >> 0x12 | uVar18 * 0x4000) ^
               (uVar13 * 0x800000 | uVar18 >> 9);
      uVar26 = uVar15 + uVar21;
      uVar19 = uVar26 + local_74;
      iVar23 = uVar17 + local_13c[0x19] + (uint)CARRY4(uVar4,local_13c[0x18]) +
               ((uVar25 ^ uVar16) & uVar18 ^ uVar16) + (uint)CARRY4(uVar14,uVar20) +
               ((uVar18 >> 0xe | uVar13 * 0x40000) ^ (uVar18 >> 0x12 | uVar13 * 0x4000) ^
               (uVar18 * 0x800000 | uVar13 >> 9)) + (uint)CARRY4(uVar15,uVar21) + local_70 +
               (uint)CARRY4(uVar26,local_74);
      local_10c = uVar22 + uVar19;
      local_108 = uVar9 + iVar23 + (uint)CARRY4(uVar22,uVar19);
      uVar9 = (uVar11 | uVar8) & uVar5 | uVar11 & uVar8;
      uVar22 = (uVar11 >> 0x1c | uVar24 * 0x10) ^ (uVar11 * 0x40000000 | uVar24 >> 2) ^
               (uVar11 * 0x2000000 | uVar24 >> 7);
      uVar4 = uVar9 + uVar22;
      local_3c = uVar4 + uVar19;
      local_38 = ((uVar24 | uVar10) & uVar6 | uVar24 & uVar10) +
                 ((uVar24 >> 0x1c | uVar11 * 0x10) ^ (uVar24 * 0x40000000 | uVar11 >> 2) ^
                 (uVar24 * 0x2000000 | uVar11 >> 7)) + (uint)CARRY4(uVar9,uVar22) + iVar23 +
                 (uint)CARRY4(uVar4,uVar19);
      if (local_138 == 0) {
        local_6c = (uint)param_2[0xd];
        local_68 = *(uint *)((int)param_2 + 0x6c);
      }
      else {
        bVar27 = CARRY4(local_a4,local_6c);
        uVar22 = local_a4 + local_6c;
        uVar4 = (local_7c >> 0x13 | local_78 << 0xd) ^ (local_7c >> 6 | local_78 << 0x1a) ^
                (local_7c << 3 | local_78 >> 0x1d);
        uVar9 = uVar22 + uVar4;
        uVar14 = (local_64 >> 7 | local_60 << 0x19) ^ (local_64 >> 1 | local_60 << 0x1f) ^
                 (local_64 >> 8 | local_60 << 0x18);
        local_6c = uVar9 + uVar14;
        local_68 = local_a0 + local_68 + (uint)bVar27 +
                   ((local_78 >> 0x13 | local_7c << 0xd) ^ local_78 >> 6 ^
                   (local_78 << 3 | local_7c >> 0x1d)) + (uint)CARRY4(uVar22,uVar4) +
                   (local_60 >> 7 ^ (local_60 >> 1 | local_64 << 0x1f) ^
                   (local_60 >> 8 | local_64 << 0x18)) + (uint)CARRY4(uVar9,uVar14);
      }
      uVar22 = uVar7 + local_13c[0x1a];
      uVar15 = (uVar13 ^ uVar12) & local_10c ^ uVar12;
      uVar9 = uVar22 + uVar15;
      uVar17 = (local_10c >> 0xe | local_108 * 0x40000) ^ (local_10c >> 0x12 | local_108 * 0x4000) ^
               (local_10c * 0x800000 | local_108 >> 9);
      uVar4 = uVar9 + uVar17;
      uVar14 = uVar4 + local_6c;
      iVar23 = uVar16 + local_13c[0x1b] + (uint)CARRY4(uVar7,local_13c[0x1a]) +
               ((uVar18 ^ uVar25) & local_108 ^ uVar25) + (uint)CARRY4(uVar22,uVar15) +
               ((local_108 >> 0xe | local_10c * 0x40000) ^ (local_108 >> 0x12 | local_10c * 0x4000)
               ^ (local_108 * 0x800000 | local_10c >> 9)) + (uint)CARRY4(uVar9,uVar17) + local_68 +
               (uint)CARRY4(uVar4,local_6c);
      local_ec = uVar5 + uVar14;
      local_e8 = uVar6 + iVar23 + (uint)CARRY4(uVar5,uVar14);
      uVar9 = (local_3c | uVar11) & uVar8 | local_3c & uVar11;
      uVar22 = (local_3c >> 0x1c | local_38 * 0x10) ^ (local_3c * 0x40000000 | local_38 >> 2) ^
               (local_3c * 0x2000000 | local_38 >> 7);
      uVar4 = uVar9 + uVar22;
      local_44 = uVar4 + uVar14;
      local_40 = ((local_38 | uVar24) & uVar10 | local_38 & uVar24) +
                 ((local_38 >> 0x1c | local_3c * 0x10) ^ (local_38 * 0x40000000 | local_3c >> 2) ^
                 (local_38 * 0x2000000 | local_3c >> 7)) + (uint)CARRY4(uVar9,uVar22) + iVar23 +
                 (uint)CARRY4(uVar4,uVar14);
      if (local_138 == 0) {
        local_64 = (uint)param_2[0xe];
        local_60 = *(uint *)((int)param_2 + 0x74);
      }
      else {
        bVar27 = CARRY4(local_9c,local_64);
        uVar22 = local_9c + local_64;
        uVar4 = (local_74 >> 0x13 | local_70 << 0xd) ^ (local_74 >> 6 | local_70 << 0x1a) ^
                (local_74 << 3 | local_70 >> 0x1d);
        uVar9 = uVar22 + uVar4;
        uVar5 = (local_5c >> 7 | local_58 << 0x19) ^ (local_5c >> 1 | local_58 << 0x1f) ^
                (local_5c >> 8 | local_58 << 0x18);
        local_64 = uVar9 + uVar5;
        local_60 = local_98 + local_60 + (uint)bVar27 +
                   ((local_70 >> 0x13 | local_74 << 0xd) ^ local_70 >> 6 ^
                   (local_70 << 3 | local_74 >> 0x1d)) + (uint)CARRY4(uVar22,uVar4) +
                   (local_58 >> 7 ^ (local_58 >> 1 | local_5c << 0x1f) ^
                   (local_58 >> 8 | local_5c << 0x18)) + (uint)CARRY4(uVar9,uVar5);
      }
      uVar22 = uVar12 + local_13c[0x1c];
      uVar6 = (local_10c ^ uVar13) & local_ec ^ uVar13;
      uVar9 = uVar22 + uVar6;
      uVar7 = (local_ec >> 0xe | local_e8 * 0x40000) ^ (local_ec >> 0x12 | local_e8 * 0x4000) ^
              (local_ec * 0x800000 | local_e8 >> 9);
      uVar4 = uVar9 + uVar7;
      uVar5 = uVar4 + local_64;
      iVar23 = uVar25 + local_13c[0x1d] + (uint)CARRY4(uVar12,local_13c[0x1c]) +
               ((local_108 ^ uVar18) & local_e8 ^ uVar18) + (uint)CARRY4(uVar22,uVar6) +
               ((local_e8 >> 0xe | local_ec * 0x40000) ^ (local_e8 >> 0x12 | local_ec * 0x4000) ^
               (local_e8 * 0x800000 | local_ec >> 9)) + (uint)CARRY4(uVar9,uVar7) + local_60 +
               (uint)CARRY4(uVar4,local_64);
      local_2c = uVar8 + uVar5;
      local_28 = uVar10 + iVar23 + (uint)CARRY4(uVar8,uVar5);
      uVar9 = (local_44 | local_3c) & uVar11 | local_44 & local_3c;
      uVar22 = (local_44 >> 0x1c | local_40 * 0x10) ^ (local_44 * 0x40000000 | local_40 >> 2) ^
               (local_44 * 0x2000000 | local_40 >> 7);
      uVar4 = uVar9 + uVar22;
      local_4c = uVar4 + uVar5;
      local_48 = ((local_40 | local_38) & uVar24 | local_40 & local_38) +
                 ((local_40 >> 0x1c | local_44 * 0x10) ^ (local_40 * 0x40000000 | local_44 >> 2) ^
                 (local_40 * 0x2000000 | local_44 >> 7)) + (uint)CARRY4(uVar9,uVar22) + iVar23 +
                 (uint)CARRY4(uVar4,uVar5);
      if (local_138 == 0) {
        local_5c = (uint)param_2[0xf];
        local_58 = *(uint *)((int)param_2 + 0x7c);
      }
      else {
        bVar27 = CARRY4(local_94,local_5c);
        uVar22 = local_94 + local_5c;
        uVar4 = (local_6c >> 0x13 | local_68 << 0xd) ^ (local_6c >> 6 | local_68 << 0x1a) ^
                (local_6c << 3 | local_68 >> 0x1d);
        uVar9 = uVar22 + uVar4;
        uVar5 = (local_d4 >> 7 | local_d0 << 0x19) ^ (local_d4 >> 1 | local_d0 << 0x1f) ^
                (local_d4 >> 8 | local_d0 << 0x18);
        local_5c = uVar9 + uVar5;
        local_58 = local_90 + local_58 + (uint)bVar27 +
                   ((local_68 >> 0x13 | local_6c << 0xd) ^ local_68 >> 6 ^
                   (local_68 << 3 | local_6c >> 0x1d)) + (uint)CARRY4(uVar22,uVar4) +
                   (local_d0 >> 7 ^ (local_d0 >> 1 | local_d4 << 0x1f) ^
                   (local_d0 >> 8 | local_d4 << 0x18)) + (uint)CARRY4(uVar9,uVar5);
      }
      uVar22 = uVar13 + local_13c[0x1e];
      uVar6 = (local_ec ^ local_10c) & local_2c ^ local_10c;
      uVar9 = uVar22 + uVar6;
      uVar7 = (local_2c >> 0xe | local_28 * 0x40000) ^ (local_2c >> 0x12 | local_28 * 0x4000) ^
              (local_2c * 0x800000 | local_28 >> 9);
      uVar4 = uVar9 + uVar7;
      uVar5 = uVar4 + local_5c;
      iVar23 = uVar18 + local_13c[0x1f] + (uint)CARRY4(uVar13,local_13c[0x1e]) +
               ((local_e8 ^ local_108) & local_28 ^ local_108) + (uint)CARRY4(uVar22,uVar6) +
               ((local_28 >> 0xe | local_2c * 0x40000) ^ (local_28 >> 0x12 | local_2c * 0x4000) ^
               (local_28 * 0x800000 | local_2c >> 9)) + (uint)CARRY4(uVar9,uVar7) + local_58 +
               (uint)CARRY4(uVar4,local_5c);
      local_34 = uVar11 + uVar5;
      local_30 = uVar24 + iVar23 + (uint)CARRY4(uVar11,uVar5);
      uVar22 = (local_4c | local_44) & local_3c | local_4c & local_44;
      uVar9 = (local_4c >> 0x1c | local_48 * 0x10) ^ (local_4c * 0x40000000 | local_48 >> 2) ^
              (local_4c * 0x2000000 | local_48 >> 7);
      uVar4 = uVar22 + uVar9;
      local_54 = uVar4 + uVar5;
      local_50 = ((local_48 | local_40) & local_38 | local_48 & local_40) +
                 ((local_48 >> 0x1c | local_4c * 0x10) ^ (local_48 * 0x40000000 | local_4c >> 2) ^
                 (local_48 * 0x2000000 | local_4c >> 7)) + (uint)CARRY4(uVar22,uVar9) + iVar23 +
                 (uint)CARRY4(uVar4,uVar5);
      local_138 = local_138 + 0x10;
      puVar2 = local_13c + 0x20;
      if (local_138 == 0x50) {
        uVar3 = *param_1;
        *(uint *)param_1 = (int)*param_1 + local_54;
        *(int *)((int)param_1 + 4) =
             *(int *)((int)param_1 + 4) + local_50 + (uint)CARRY4((uint)uVar3,local_54);
        puVar1 = param_1 + 1;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_4c;
        *(int *)((int)param_1 + 0xc) =
             *(int *)((int)param_1 + 0xc) + local_48 + (uint)CARRY4((uint)uVar3,local_4c);
        puVar1 = param_1 + 2;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_44;
        *(int *)((int)param_1 + 0x14) =
             *(int *)((int)param_1 + 0x14) + local_40 + (uint)CARRY4((uint)uVar3,local_44);
        puVar1 = param_1 + 3;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_3c;
        *(int *)((int)param_1 + 0x1c) =
             *(int *)((int)param_1 + 0x1c) + local_38 + (uint)CARRY4((uint)uVar3,local_3c);
        puVar1 = param_1 + 4;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_34;
        *(int *)((int)param_1 + 0x24) =
             *(int *)((int)param_1 + 0x24) + local_30 + (uint)CARRY4((uint)uVar3,local_34);
        puVar1 = param_1 + 5;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_2c;
        *(int *)((int)param_1 + 0x2c) =
             *(int *)((int)param_1 + 0x2c) + local_28 + (uint)CARRY4((uint)uVar3,local_2c);
        puVar1 = param_1 + 6;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_ec;
        *(int *)((int)param_1 + 0x34) =
             *(int *)((int)param_1 + 0x34) + local_e8 + (uint)CARRY4((uint)uVar3,local_ec);
        puVar1 = param_1 + 7;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_10c;
        *(int *)((int)param_1 + 0x3c) =
             *(int *)((int)param_1 + 0x3c) + local_108 + (uint)CARRY4((uint)uVar3,local_10c);
        return;
      }
      uVar22 = *puVar2;
      uVar9 = local_13c[0x21];
      local_13c = puVar2;
      if (local_138 == 0) break;
      bVar27 = CARRY4(local_8c,local_d4);
      uVar4 = local_8c + local_d4;
      uVar6 = (local_64 >> 0x13 | local_60 << 0xd) ^ (local_64 >> 6 | local_60 << 0x1a) ^
              (local_64 << 3 | local_60 >> 0x1d);
      uVar5 = uVar4 + uVar6;
      uVar7 = (local_cc >> 7 | local_c8 << 0x19) ^ (local_cc >> 1 | local_c8 << 0x1f) ^
              (local_cc >> 8 | local_c8 << 0x18);
      local_d4 = uVar5 + uVar7;
      local_d0 = local_88 + local_d0 + (uint)bVar27 +
                 ((local_60 >> 0x13 | local_64 << 0xd) ^ local_60 >> 6 ^
                 (local_60 << 3 | local_64 >> 0x1d)) + (uint)CARRY4(uVar4,uVar6) +
                 (local_c8 >> 7 ^ (local_c8 >> 1 | local_cc << 0x1f) ^
                 (local_c8 >> 8 | local_cc << 0x18)) + (uint)CARRY4(uVar5,uVar7);
    }
  } while( true );
}

```

---

## a_exp_b_mod_c

```asm
// === 0875f630 TaoCrypt::a_exp_b_mod_c  [0x0875f630-0x875f75f] ===
 875f630:	55                   	push   %ebp
 875f631:	89 e5                	mov    %esp,%ebp
 875f633:	57                   	push   %edi
 875f634:	56                   	push   %esi
 875f635:	53                   	push   %ebx
 875f636:	e8 bd 37 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875f63b:	81 c3 5d d5 c0 00    	add    $0xc0d55d,%ebx
 875f641:	83 ec 6c             	sub    $0x6c,%esp
 875f644:	8b 55 14             	mov    0x14(%ebp),%edx
 875f647:	8b 75 08             	mov    0x8(%ebp),%esi
 875f64a:	89 54 24 04          	mov    %edx,0x4(%esp)
 875f64e:	89 55 a0             	mov    %edx,-0x60(%ebp)
 875f651:	8b 83 c0 ff ff ff    	mov    -0x40(%ebx),%eax
 875f657:	8b 8b 50 fd ff ff    	mov    -0x2b0(%ebx),%ecx
 875f65d:	83 c0 08             	add    $0x8,%eax
 875f660:	8d 79 08             	lea    0x8(%ecx),%edi
 875f663:	89 45 b0             	mov    %eax,-0x50(%ebp)
 875f666:	8d 4d b8             	lea    -0x48(%ebp),%ecx
 875f669:	8d 45 ac             	lea    -0x54(%ebp),%eax
 875f66c:	89 0c 24             	mov    %ecx,(%esp)
 875f66f:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 875f672:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 875f675:	89 7d ac             	mov    %edi,-0x54(%ebp)
 875f678:	e8 f3 fb ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 875f67d:	8b 55 a0             	mov    -0x60(%ebp),%edx
 875f680:	8b 12                	mov    (%edx),%edx
 875f682:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f689:	00 
 875f68a:	89 54 24 08          	mov    %edx,0x8(%esp)
 875f68e:	8d 55 c8             	lea    -0x38(%ebp),%edx
 875f691:	89 14 24             	mov    %edx,(%esp)
 875f694:	e8 57 fa ff ff       	call   875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>
 875f699:	8d 55 d8             	lea    -0x28(%ebp),%edx
 875f69c:	89 14 24             	mov    %edx,(%esp)
 875f69f:	e8 ec fe ff ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 875f6a4:	8b 55 10             	mov    0x10(%ebp),%edx
 875f6a7:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 875f6aa:	89 34 24             	mov    %esi,(%esp)
 875f6ad:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875f6b1:	8b 55 0c             	mov    0xc(%ebp),%edx
 875f6b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 875f6b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 875f6bc:	e8 9f 47 04 00       	call   87a3e60 <_ZNK8TaoCrypt12AbstractRing12ExponentiateERKNS_7IntegerES3_>
 875f6c1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 875f6c4:	89 7d ac             	mov    %edi,-0x54(%ebp)
 875f6c7:	8b 7d dc             	mov    -0x24(%ebp),%edi
 875f6ca:	c1 e0 02             	shl    $0x2,%eax
 875f6cd:	83 ec 04             	sub    $0x4,%esp
 875f6d0:	89 3c 24             	mov    %edi,(%esp)
 875f6d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 875f6d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f6de:	00 
 875f6df:	e8 dc e5 91 ff       	call   807dcc0 <memset@plt>
 875f6e4:	89 3c 24             	mov    %edi,(%esp)
 875f6e7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f6ec:	e8 2f 80 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875f6f1:	8b 45 c8             	mov    -0x38(%ebp),%eax
 875f6f4:	8b 7d cc             	mov    -0x34(%ebp),%edi
 875f6f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f6fe:	00 
 875f6ff:	c1 e0 02             	shl    $0x2,%eax
 875f702:	89 3c 24             	mov    %edi,(%esp)
 875f705:	89 44 24 08          	mov    %eax,0x8(%esp)
 875f709:	e8 b2 e5 91 ff       	call   807dcc0 <memset@plt>
 875f70e:	89 3c 24             	mov    %edi,(%esp)
 875f711:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f716:	e8 05 80 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875f71b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 875f71e:	8b 7d bc             	mov    -0x44(%ebp),%edi
 875f721:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875f728:	00 
 875f729:	c1 e0 02             	shl    $0x2,%eax
 875f72c:	89 3c 24             	mov    %edi,(%esp)
 875f72f:	89 44 24 08          	mov    %eax,0x8(%esp)
 875f733:	e8 88 e5 91 ff       	call   807dcc0 <memset@plt>
 875f738:	89 3c 24             	mov    %edi,(%esp)
 875f73b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 875f740:	e8 db 7f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 875f745:	8d 65 f4             	lea    -0xc(%ebp),%esp
 875f748:	89 f0                	mov    %esi,%eax
 875f74a:	5b                   	pop    %ebx
 875f74b:	5e                   	pop    %esi
 875f74c:	5f                   	pop    %edi
 875f74d:	5d                   	pop    %ebp
 875f74e:	c2 04 00             	ret    $0x4
 875f751:	90                   	nop
 875f752:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875f759:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::a_exp_b_mod_c @ 0x875f630

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

TaoCrypt * __thiscall
TaoCrypt::a_exp_b_mod_c(TaoCrypt *this,Integer *param_1,Integer *param_2,Integer *param_3)

{
  undefined *puVar1;
  size_t __n;
  uint uVar2;
  undefined *local_58;
  undefined *local_54;
  Integer *local_50;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x875f63b;
  local_54 = PTR_vtable_0936cb58 + 8;
  puVar1 = PTR_vtable_0936c8e8 + 8;
  local_58 = puVar1;
  local_50 = (Integer *)&local_58;
  Integer::Integer((Integer *)&local_4c,param_3);
  Integer::Integer((Integer *)&local_3c,0,*(uint *)param_3);
  Integer::Integer((Integer *)&local_2c);
  AbstractRing::Exponentiate((Integer *)this,(Integer *)&local_58);
  __n = local_2c << 2;
  uVar2 = 0;
  local_58 = puVar1;
  memset(local_28,0,__n);
  operator_delete__(local_28,uVar2 & 0xffffff00,__n,param_2);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar2 & 0xffffff00);
  return this;
}

```

---

## a_times_b_mod_c

```asm
// === 08762990 TaoCrypt::a_times_b_mod_c  [0x08762990-0x8762a1f] ===
 8762990:	55                   	push   %ebp
 8762991:	89 e5                	mov    %esp,%ebp
 8762993:	83 ec 38             	sub    $0x38,%esp
 8762996:	8b 45 10             	mov    0x10(%ebp),%eax
 8762999:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876299c:	e8 57 04 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87629a1:	81 c3 f7 a1 c0 00    	add    $0xc0a1f7,%ebx
 87629a7:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87629aa:	8d 7d d8             	lea    -0x28(%ebp),%edi
 87629ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 87629b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 87629b4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87629b7:	8b 75 08             	mov    0x8(%ebp),%esi
 87629ba:	89 3c 24             	mov    %edi,(%esp)
 87629bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 87629c1:	e8 9a f7 ff ff       	call   8762160 <_ZNK8TaoCrypt7Integer5TimesERKS0_>
 87629c6:	8b 45 14             	mov    0x14(%ebp),%eax
 87629c9:	83 ec 04             	sub    $0x4,%esp
 87629cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 87629d0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87629d4:	89 34 24             	mov    %esi,(%esp)
 87629d7:	e8 44 fc ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 87629dc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87629df:	8b 7d dc             	mov    -0x24(%ebp),%edi
 87629e2:	c1 e0 02             	shl    $0x2,%eax
 87629e5:	83 ec 04             	sub    $0x4,%esp
 87629e8:	89 3c 24             	mov    %edi,(%esp)
 87629eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87629ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87629f6:	00 
 87629f7:	e8 c4 b2 91 ff       	call   807dcc0 <memset@plt>
 87629fc:	89 3c 24             	mov    %edi,(%esp)
 87629ff:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762a04:	e8 17 4d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762a09:	89 f0                	mov    %esi,%eax
 8762a0b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8762a0e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8762a11:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8762a14:	89 ec                	mov    %ebp,%esp
 8762a16:	5d                   	pop    %ebp
 8762a17:	c2 04 00             	ret    $0x4
 8762a1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::a_times_b_mod_c @ 0x8762990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::a_times_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer
   const&) */

Integer * TaoCrypt::a_times_b_mod_c(Integer *param_1,Integer *param_2,Integer *param_3)

{
  uint uVar1;
  int local_2c;
  void *local_28;
  
  Integer::Times((Integer *)&local_2c);
  Integer::Modulo(param_1);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return param_1;
}

```

---

## xorbuf

```asm
// === 08767410 TaoCrypt::xorbuf  [0x08767410-0x87674ff] ===
 8767410:	55                   	push   %ebp
 8767411:	89 e5                	mov    %esp,%ebp
 8767413:	57                   	push   %edi
 8767414:	56                   	push   %esi
 8767415:	83 ec 04             	sub    $0x4,%esp
 8767418:	8b 7d 0c             	mov    0xc(%ebp),%edi
 876741b:	8b 45 10             	mov    0x10(%ebp),%eax
 876741e:	8b 55 08             	mov    0x8(%ebp),%edx
 8767421:	09 f8                	or     %edi,%eax
 8767423:	09 d0                	or     %edx,%eax
 8767425:	a8 03                	test   $0x3,%al
 8767427:	0f 84 83 00 00 00    	je     87674b0 <_ZN8TaoCrypt6xorbufEPhPKhj+0xa0>
 876742d:	8b 45 10             	mov    0x10(%ebp),%eax
 8767430:	85 c0                	test   %eax,%eax
 8767432:	74 6e                	je     87674a2 <_ZN8TaoCrypt6xorbufEPhPKhj+0x92>
 8767434:	83 7d 10 06          	cmpl   $0x6,0x10(%ebp)
 8767438:	0f 86 aa 00 00 00    	jbe    87674e8 <_ZN8TaoCrypt6xorbufEPhPKhj+0xd8>
 876743e:	89 d0                	mov    %edx,%eax
 8767440:	09 f8                	or     %edi,%eax
 8767442:	a8 03                	test   $0x3,%al
 8767444:	0f 85 9e 00 00 00    	jne    87674e8 <_ZN8TaoCrypt6xorbufEPhPKhj+0xd8>
 876744a:	8d 47 04             	lea    0x4(%edi),%eax
 876744d:	39 c2                	cmp    %eax,%edx
 876744f:	0f 86 83 00 00 00    	jbe    87674d8 <_ZN8TaoCrypt6xorbufEPhPKhj+0xc8>
 8767455:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8767458:	c1 e9 02             	shr    $0x2,%ecx
 876745b:	8d 34 8d 00 00 00 00 	lea    0x0(,%ecx,4),%esi
 8767462:	85 f6                	test   %esi,%esi
 8767464:	74 22                	je     8767488 <_ZN8TaoCrypt6xorbufEPhPKhj+0x78>
 8767466:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8767469:	31 c0                	xor    %eax,%eax
 876746b:	89 ce                	mov    %ecx,%esi
 876746d:	8d 76 00             	lea    0x0(%esi),%esi
 8767470:	8b 0c 82             	mov    (%edx,%eax,4),%ecx
 8767473:	33 0c 87             	xor    (%edi,%eax,4),%ecx
 8767476:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 8767479:	83 c0 01             	add    $0x1,%eax
 876747c:	39 f0                	cmp    %esi,%eax
 876747e:	72 f0                	jb     8767470 <_ZN8TaoCrypt6xorbufEPhPKhj+0x60>
 8767480:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8767483:	39 75 10             	cmp    %esi,0x10(%ebp)
 8767486:	74 1a                	je     87674a2 <_ZN8TaoCrypt6xorbufEPhPKhj+0x92>
 8767488:	8b 4d 10             	mov    0x10(%ebp),%ecx
 876748b:	01 f2                	add    %esi,%edx
 876748d:	01 f7                	add    %esi,%edi
 876748f:	90                   	nop
 8767490:	0f b6 07             	movzbl (%edi),%eax
 8767493:	83 c6 01             	add    $0x1,%esi
 8767496:	83 c7 01             	add    $0x1,%edi
 8767499:	30 02                	xor    %al,(%edx)
 876749b:	83 c2 01             	add    $0x1,%edx
 876749e:	39 f1                	cmp    %esi,%ecx
 87674a0:	77 ee                	ja     8767490 <_ZN8TaoCrypt6xorbufEPhPKhj+0x80>
 87674a2:	83 c4 04             	add    $0x4,%esp
 87674a5:	5e                   	pop    %esi
 87674a6:	5f                   	pop    %edi
 87674a7:	5d                   	pop    %ebp
 87674a8:	c3                   	ret
 87674a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87674b0:	8b 75 10             	mov    0x10(%ebp),%esi
 87674b3:	c1 ee 02             	shr    $0x2,%esi
 87674b6:	85 f6                	test   %esi,%esi
 87674b8:	74 e8                	je     87674a2 <_ZN8TaoCrypt6xorbufEPhPKhj+0x92>
 87674ba:	31 c0                	xor    %eax,%eax
 87674bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87674c0:	8b 0c 87             	mov    (%edi,%eax,4),%ecx
 87674c3:	31 0c 82             	xor    %ecx,(%edx,%eax,4)
 87674c6:	83 c0 01             	add    $0x1,%eax
 87674c9:	39 c6                	cmp    %eax,%esi
 87674cb:	77 f3                	ja     87674c0 <_ZN8TaoCrypt6xorbufEPhPKhj+0xb0>
 87674cd:	83 c4 04             	add    $0x4,%esp
 87674d0:	5e                   	pop    %esi
 87674d1:	5f                   	pop    %edi
 87674d2:	5d                   	pop    %ebp
 87674d3:	c3                   	ret
 87674d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87674d8:	8d 42 04             	lea    0x4(%edx),%eax
 87674db:	39 c7                	cmp    %eax,%edi
 87674dd:	0f 87 72 ff ff ff    	ja     8767455 <_ZN8TaoCrypt6xorbufEPhPKhj+0x45>
 87674e3:	90                   	nop
 87674e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87674e8:	8b 75 10             	mov    0x10(%ebp),%esi
 87674eb:	31 c0                	xor    %eax,%eax
 87674ed:	8d 76 00             	lea    0x0(%esi),%esi
 87674f0:	0f b6 0c 07          	movzbl (%edi,%eax,1),%ecx
 87674f4:	30 0c 02             	xor    %cl,(%edx,%eax,1)
 87674f7:	83 c0 01             	add    $0x1,%eax
 87674fa:	39 c6                	cmp    %eax,%esi
 87674fc:	77 f2                	ja     87674f0 <_ZN8TaoCrypt6xorbufEPhPKhj+0xe0>
 87674fe:	eb a2                	jmp    87674a2 <_ZN8TaoCrypt6xorbufEPhPKhj+0x92>

```

```c
// TaoCrypt::xorbuf @ 0x8767410

/* TaoCrypt::xorbuf(unsigned char*, unsigned char const*, unsigned int) */

void TaoCrypt::xorbuf(uchar *param_1,uchar *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (((param_3 | (uint)param_2 | (uint)param_1) & 3) == 0) {
    if (param_3 >> 2 != 0) {
      uVar5 = 0;
      do {
        *(uint *)(param_1 + uVar5 * 4) =
             *(uint *)(param_1 + uVar5 * 4) ^ *(uint *)(param_2 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3 >> 2);
      return;
    }
  }
  else if (param_3 != 0) {
    if (((param_3 < 7) || ((((uint)param_1 | (uint)param_2) & 3) != 0)) ||
       ((param_1 <= param_2 + 4 && (param_2 <= param_1 + 4)))) {
      uVar5 = 0;
      do {
        param_1[uVar5] = param_1[uVar5] ^ param_2[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
    else {
      uVar3 = param_3 >> 2;
      uVar5 = uVar3 * 4;
      if (uVar3 != 0) {
        uVar2 = 0;
        do {
          *(uint *)(param_1 + uVar2 * 4) =
               *(uint *)(param_1 + uVar2 * 4) ^ *(uint *)(param_2 + uVar2 * 4);
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
        if (param_3 == uVar5) {
          return;
        }
      }
      pbVar4 = param_1 + uVar5;
      pbVar6 = param_2 + uVar5;
      do {
        bVar1 = *pbVar6;
        uVar5 = uVar5 + 1;
        pbVar6 = pbVar6 + 1;
        *pbVar4 = *pbVar4 ^ bVar1;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 < param_3);
    }
  }
  return;
}

```

