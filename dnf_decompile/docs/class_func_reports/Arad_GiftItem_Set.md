# Arad_GiftItem_Set

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## Arad_GiftItem_Set

```asm
// === 081a2a68 Arad_GiftItem_Set::Arad_GiftItem_Set  [0x081a2a68-0x81a2de9] ===
 81a2a68:	55                   	push   %ebp
 81a2a69:	89 e5                	mov    %esp,%ebp
 81a2a6b:	56                   	push   %esi
 81a2a6c:	53                   	push   %ebx
 81a2a6d:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 81a2a73:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2a76:	89 04 24             	mov    %eax,(%esp)
 81a2a79:	e8 c4 60 fe ff       	call   8188b42 <_ZN17Arad_ScriptLoaderC1Ev>
 81a2a7e:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2a81:	c7 00 40 d8 ba 08    	movl   $0x8bad840,(%eax)
 81a2a87:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2a8a:	83 c0 04             	add    $0x4,%eax
 81a2a8d:	89 04 24             	mov    %eax,(%esp)
 81a2a90:	e8 a9 1b 00 00       	call   81a463e <_ZNSt3mapIxN17Arad_GiftItem_Set4DataESt4lessIxESaISt4pairIKxS1_EEEC1Ev>
 81a2a95:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2a98:	83 c0 1c             	add    $0x1c,%eax
 81a2a9b:	89 04 24             	mov    %eax,(%esp)
 81a2a9e:	e8 47 a1 fd ff       	call   817cbea <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEC1Ev>
 81a2aa3:	c7 85 68 ff ff ff 01 	movl   $0x1,-0x98(%ebp)
 81a2aaa:	00 00 00 
 81a2aad:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81a2ab3:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 81a2ab9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2abd:	c7 44 24 04 40 c7 ba 	movl   $0x8bac740,0x4(%esp)
 81a2ac4:	08 
 81a2ac5:	89 04 24             	mov    %eax,(%esp)
 81a2ac8:	e8 ea 1b 00 00       	call   81a46b7 <_ZSt9make_pairIRA19_KcN17Arad_GiftItem_Set12ST_ITEM_KINDEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 81a2acd:	83 ec 04             	sub    $0x4,%esp
 81a2ad0:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81a2ad6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2ada:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81a2ae0:	89 04 24             	mov    %eax,(%esp)
 81a2ae3:	e8 12 1c 00 00       	call   81a46fa <_ZNSt4pairIKSsiEC1IPKcN17Arad_GiftItem_Set12ST_ITEM_KINDEEEOS_IT_T0_E>
 81a2ae8:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2aeb:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a2aee:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 81a2af4:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 81a2afa:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2afe:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2b02:	89 04 24             	mov    %eax,(%esp)
 81a2b05:	e8 6e 1c 00 00       	call   81a4778 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE6insertERKS4_>
 81a2b0a:	83 ec 04             	sub    $0x4,%esp
 81a2b0d:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81a2b13:	89 04 24             	mov    %eax,(%esp)
 81a2b16:	e8 5d a1 fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2b1b:	eb 1b                	jmp    81a2b38 <_ZN17Arad_GiftItem_SetC1Ev+0xd0>
 81a2b1d:	89 d3                	mov    %edx,%ebx
 81a2b1f:	89 c6                	mov    %eax,%esi
 81a2b21:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81a2b27:	89 04 24             	mov    %eax,(%esp)
 81a2b2a:	e8 49 a1 fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2b2f:	89 f0                	mov    %esi,%eax
 81a2b31:	89 da                	mov    %ebx,%edx
 81a2b33:	e9 71 02 00 00       	jmp    81a2da9 <_ZN17Arad_GiftItem_SetC1Ev+0x341>
 81a2b38:	c7 45 84 02 00 00 00 	movl   $0x2,-0x7c(%ebp)
 81a2b3f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 81a2b45:	8d 55 84             	lea    -0x7c(%ebp),%edx
 81a2b48:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2b4c:	c7 44 24 04 53 c7 ba 	movl   $0x8bac753,0x4(%esp)
 81a2b53:	08 
 81a2b54:	89 04 24             	mov    %eax,(%esp)
 81a2b57:	e8 48 1c 00 00       	call   81a47a4 <_ZSt9make_pairIRA20_KcN17Arad_GiftItem_Set12ST_ITEM_KINDEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 81a2b5c:	83 ec 04             	sub    $0x4,%esp
 81a2b5f:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 81a2b65:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2b69:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a2b6f:	89 04 24             	mov    %eax,(%esp)
 81a2b72:	e8 83 1b 00 00       	call   81a46fa <_ZNSt4pairIKSsiEC1IPKcN17Arad_GiftItem_Set12ST_ITEM_KINDEEEOS_IT_T0_E>
 81a2b77:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2b7a:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a2b7d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81a2b83:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 81a2b89:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2b8d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2b91:	89 04 24             	mov    %eax,(%esp)
 81a2b94:	e8 df 1b 00 00       	call   81a4778 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE6insertERKS4_>
 81a2b99:	83 ec 04             	sub    $0x4,%esp
 81a2b9c:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a2ba2:	89 04 24             	mov    %eax,(%esp)
 81a2ba5:	e8 ce a0 fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2baa:	eb 1b                	jmp    81a2bc7 <_ZN17Arad_GiftItem_SetC1Ev+0x15f>
 81a2bac:	89 d3                	mov    %edx,%ebx
 81a2bae:	89 c6                	mov    %eax,%esi
 81a2bb0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81a2bb6:	89 04 24             	mov    %eax,(%esp)
 81a2bb9:	e8 ba a0 fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2bbe:	89 f0                	mov    %esi,%eax
 81a2bc0:	89 da                	mov    %ebx,%edx
 81a2bc2:	e9 e2 01 00 00       	jmp    81a2da9 <_ZN17Arad_GiftItem_SetC1Ev+0x341>
 81a2bc7:	c7 45 a0 03 00 00 00 	movl   $0x3,-0x60(%ebp)
 81a2bce:	8d 45 98             	lea    -0x68(%ebp),%eax
 81a2bd1:	8d 55 a0             	lea    -0x60(%ebp),%edx
 81a2bd4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2bd8:	c7 44 24 04 67 c7 ba 	movl   $0x8bac767,0x4(%esp)
 81a2bdf:	08 
 81a2be0:	89 04 24             	mov    %eax,(%esp)
 81a2be3:	e8 bc 1b 00 00       	call   81a47a4 <_ZSt9make_pairIRA20_KcN17Arad_GiftItem_Set12ST_ITEM_KINDEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 81a2be8:	83 ec 04             	sub    $0x4,%esp
 81a2beb:	8d 45 98             	lea    -0x68(%ebp),%eax
 81a2bee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2bf2:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2bf5:	89 04 24             	mov    %eax,(%esp)
 81a2bf8:	e8 fd 1a 00 00       	call   81a46fa <_ZNSt4pairIKSsiEC1IPKcN17Arad_GiftItem_Set12ST_ITEM_KINDEEEOS_IT_T0_E>
 81a2bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2c00:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a2c03:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a2c06:	8d 55 90             	lea    -0x70(%ebp),%edx
 81a2c09:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2c0d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2c11:	89 04 24             	mov    %eax,(%esp)
 81a2c14:	e8 5f 1b 00 00       	call   81a4778 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE6insertERKS4_>
 81a2c19:	83 ec 04             	sub    $0x4,%esp
 81a2c1c:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2c1f:	89 04 24             	mov    %eax,(%esp)
 81a2c22:	e8 51 a0 fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2c27:	eb 18                	jmp    81a2c41 <_ZN17Arad_GiftItem_SetC1Ev+0x1d9>
 81a2c29:	89 d3                	mov    %edx,%ebx
 81a2c2b:	89 c6                	mov    %eax,%esi
 81a2c2d:	8d 45 90             	lea    -0x70(%ebp),%eax
 81a2c30:	89 04 24             	mov    %eax,(%esp)
 81a2c33:	e8 40 a0 fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2c38:	89 f0                	mov    %esi,%eax
 81a2c3a:	89 da                	mov    %ebx,%edx
 81a2c3c:	e9 68 01 00 00       	jmp    81a2da9 <_ZN17Arad_GiftItem_SetC1Ev+0x341>
 81a2c41:	c7 45 bc 04 00 00 00 	movl   $0x4,-0x44(%ebp)
 81a2c48:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81a2c4b:	8d 55 bc             	lea    -0x44(%ebp),%edx
 81a2c4e:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2c52:	c7 44 24 04 7b c7 ba 	movl   $0x8bac77b,0x4(%esp)
 81a2c59:	08 
 81a2c5a:	89 04 24             	mov    %eax,(%esp)
 81a2c5d:	e8 42 1b 00 00       	call   81a47a4 <_ZSt9make_pairIRA20_KcN17Arad_GiftItem_Set12ST_ITEM_KINDEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 81a2c62:	83 ec 04             	sub    $0x4,%esp
 81a2c65:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81a2c68:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2c6c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a2c6f:	89 04 24             	mov    %eax,(%esp)
 81a2c72:	e8 83 1a 00 00       	call   81a46fa <_ZNSt4pairIKSsiEC1IPKcN17Arad_GiftItem_Set12ST_ITEM_KINDEEEOS_IT_T0_E>
 81a2c77:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2c7a:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a2c7d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81a2c80:	8d 55 ac             	lea    -0x54(%ebp),%edx
 81a2c83:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2c87:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2c8b:	89 04 24             	mov    %eax,(%esp)
 81a2c8e:	e8 e5 1a 00 00       	call   81a4778 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE6insertERKS4_>
 81a2c93:	83 ec 04             	sub    $0x4,%esp
 81a2c96:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a2c99:	89 04 24             	mov    %eax,(%esp)
 81a2c9c:	e8 d7 9f fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2ca1:	eb 18                	jmp    81a2cbb <_ZN17Arad_GiftItem_SetC1Ev+0x253>
 81a2ca3:	89 d3                	mov    %edx,%ebx
 81a2ca5:	89 c6                	mov    %eax,%esi
 81a2ca7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a2caa:	89 04 24             	mov    %eax,(%esp)
 81a2cad:	e8 c6 9f fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2cb2:	89 f0                	mov    %esi,%eax
 81a2cb4:	89 da                	mov    %ebx,%edx
 81a2cb6:	e9 ee 00 00 00       	jmp    81a2da9 <_ZN17Arad_GiftItem_SetC1Ev+0x341>
 81a2cbb:	c7 45 d8 05 00 00 00 	movl   $0x5,-0x28(%ebp)
 81a2cc2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81a2cc5:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81a2cc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2ccc:	c7 44 24 04 8f c7 ba 	movl   $0x8bac78f,0x4(%esp)
 81a2cd3:	08 
 81a2cd4:	89 04 24             	mov    %eax,(%esp)
 81a2cd7:	e8 c8 1a 00 00       	call   81a47a4 <_ZSt9make_pairIRA20_KcN17Arad_GiftItem_Set12ST_ITEM_KINDEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 81a2cdc:	83 ec 04             	sub    $0x4,%esp
 81a2cdf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81a2ce2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2ce6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81a2ce9:	89 04 24             	mov    %eax,(%esp)
 81a2cec:	e8 09 1a 00 00       	call   81a46fa <_ZNSt4pairIKSsiEC1IPKcN17Arad_GiftItem_Set12ST_ITEM_KINDEEEOS_IT_T0_E>
 81a2cf1:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2cf4:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a2cf7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81a2cfa:	8d 55 c8             	lea    -0x38(%ebp),%edx
 81a2cfd:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2d01:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2d05:	89 04 24             	mov    %eax,(%esp)
 81a2d08:	e8 6b 1a 00 00       	call   81a4778 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE6insertERKS4_>
 81a2d0d:	83 ec 04             	sub    $0x4,%esp
 81a2d10:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81a2d13:	89 04 24             	mov    %eax,(%esp)
 81a2d16:	e8 5d 9f fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2d1b:	eb 15                	jmp    81a2d32 <_ZN17Arad_GiftItem_SetC1Ev+0x2ca>
 81a2d1d:	89 d3                	mov    %edx,%ebx
 81a2d1f:	89 c6                	mov    %eax,%esi
 81a2d21:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81a2d24:	89 04 24             	mov    %eax,(%esp)
 81a2d27:	e8 4c 9f fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2d2c:	89 f0                	mov    %esi,%eax
 81a2d2e:	89 da                	mov    %ebx,%edx
 81a2d30:	eb 77                	jmp    81a2da9 <_ZN17Arad_GiftItem_SetC1Ev+0x341>
 81a2d32:	c7 45 f4 06 00 00 00 	movl   $0x6,-0xc(%ebp)
 81a2d39:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a2d3c:	8d 55 f4             	lea    -0xc(%ebp),%edx
 81a2d3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2d43:	c7 44 24 04 a3 c7 ba 	movl   $0x8bac7a3,0x4(%esp)
 81a2d4a:	08 
 81a2d4b:	89 04 24             	mov    %eax,(%esp)
 81a2d4e:	e8 51 1a 00 00       	call   81a47a4 <_ZSt9make_pairIRA20_KcN17Arad_GiftItem_Set12ST_ITEM_KINDEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 81a2d53:	83 ec 04             	sub    $0x4,%esp
 81a2d56:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a2d59:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2d5d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a2d60:	89 04 24             	mov    %eax,(%esp)
 81a2d63:	e8 92 19 00 00       	call   81a46fa <_ZNSt4pairIKSsiEC1IPKcN17Arad_GiftItem_Set12ST_ITEM_KINDEEEOS_IT_T0_E>
 81a2d68:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2d6b:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a2d6e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a2d71:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81a2d74:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2d78:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2d7c:	89 04 24             	mov    %eax,(%esp)
 81a2d7f:	e8 f4 19 00 00       	call   81a4778 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE6insertERKS4_>
 81a2d84:	83 ec 04             	sub    $0x4,%esp
 81a2d87:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a2d8a:	89 04 24             	mov    %eax,(%esp)
 81a2d8d:	e8 e6 9e fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2d92:	eb 4b                	jmp    81a2ddf <_ZN17Arad_GiftItem_SetC1Ev+0x377>
 81a2d94:	89 d3                	mov    %edx,%ebx
 81a2d96:	89 c6                	mov    %eax,%esi
 81a2d98:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a2d9b:	89 04 24             	mov    %eax,(%esp)
 81a2d9e:	e8 d5 9e fd ff       	call   817cc78 <_ZNSt4pairIKSsiED1Ev>
 81a2da3:	89 f0                	mov    %esi,%eax
 81a2da5:	89 da                	mov    %ebx,%edx
 81a2da7:	eb 00                	jmp    81a2da9 <_ZN17Arad_GiftItem_SetC1Ev+0x341>
 81a2da9:	89 d3                	mov    %edx,%ebx
 81a2dab:	89 c6                	mov    %eax,%esi
 81a2dad:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2db0:	83 c0 1c             	add    $0x1c,%eax
 81a2db3:	89 04 24             	mov    %eax,(%esp)
 81a2db6:	e8 1b 9e fd ff       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 81a2dbb:	89 f0                	mov    %esi,%eax
 81a2dbd:	89 da                	mov    %ebx,%edx
 81a2dbf:	eb 00                	jmp    81a2dc1 <_ZN17Arad_GiftItem_SetC1Ev+0x359>
 81a2dc1:	89 d3                	mov    %edx,%ebx
 81a2dc3:	89 c6                	mov    %eax,%esi
 81a2dc5:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2dc8:	83 c0 04             	add    $0x4,%eax
 81a2dcb:	89 04 24             	mov    %eax,(%esp)
 81a2dce:	e8 b5 14 00 00       	call   81a4288 <_ZNSt3mapIxN17Arad_GiftItem_Set4DataESt4lessIxESaISt4pairIKxS1_EEED1Ev>
 81a2dd3:	89 f0                	mov    %esi,%eax
 81a2dd5:	89 da                	mov    %ebx,%edx
 81a2dd7:	89 04 24             	mov    %eax,(%esp)
 81a2dda:	e8 71 09 94 00       	call   8ae3750 <_Unwind_Resume>
 81a2ddf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a2de2:	83 c4 00             	add    $0x0,%esp
 81a2de5:	5b                   	pop    %ebx
 81a2de6:	5e                   	pop    %esi
 81a2de7:	5d                   	pop    %ebp
 81a2de8:	c3                   	ret
 81a2de9:	90                   	nop

```

```c
// Arad_GiftItem_Set::Arad_GiftItem_Set @ 0x81a2a68

/* Arad_GiftItem_Set::Arad_GiftItem_Set() */

void __thiscall Arad_GiftItem_Set::Arad_GiftItem_Set(Arad_GiftItem_Set *this)

{
  pair local_b4 [8];
  pair<std::string_const,int> local_ac [8];
  char local_a4 [8];
  undefined4 local_9c;
  pair local_98 [8];
  pair<std::string_const,int> local_90 [8];
  char local_88 [8];
  undefined4 local_80;
  pair local_7c [8];
  pair<std::string_const,int> local_74 [8];
  char local_6c [8];
  undefined4 local_64;
  pair local_60 [8];
  pair<std::string_const,int> local_58 [8];
  char local_50 [8];
  undefined4 local_48;
  pair local_44 [8];
  pair<std::string_const,int> local_3c [8];
  char local_34 [8];
  undefined4 local_2c;
  pair local_28 [8];
  pair<std::string_const,int> local_20 [8];
  char local_18 [8];
  undefined4 local_10;
  
  Arad_ScriptLoader::Arad_ScriptLoader((Arad_ScriptLoader *)this);
  *(undefined ***)this = &PTR_open_08bad840;
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::map((map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
         *)(this + 4));
                    /* try { // try from 081a2a9e to 081a2aa2 has its CatchHandler @ 081a2dc1 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x1c));
  local_9c = 1;
                    /* try { // try from 081a2ac8 to 081a2ae7 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[19],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_a4,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_ac,local_a4);
                    /* try { // try from 081a2b05 to 081a2b09 has its CatchHandler @ 081a2b1d */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_b4);
                    /* try { // try from 081a2b16 to 081a2b1a has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_ac);
  local_80 = 2;
                    /* try { // try from 081a2b57 to 081a2b76 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_88,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM2");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_90,local_88);
                    /* try { // try from 081a2b94 to 081a2b98 has its CatchHandler @ 081a2bac */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_98);
                    /* try { // try from 081a2ba5 to 081a2ba9 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_90);
  local_64 = 3;
                    /* try { // try from 081a2be3 to 081a2bfc has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_6c,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM3");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_74,local_6c);
                    /* try { // try from 081a2c14 to 081a2c18 has its CatchHandler @ 081a2c29 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_7c);
                    /* try { // try from 081a2c22 to 081a2c26 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_74);
  local_48 = 4;
                    /* try { // try from 081a2c5d to 081a2c76 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_50,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM4");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_58,local_50);
                    /* try { // try from 081a2c8e to 081a2c92 has its CatchHandler @ 081a2ca3 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_60);
                    /* try { // try from 081a2c9c to 081a2ca0 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_58);
  local_2c = 5;
                    /* try { // try from 081a2cd7 to 081a2cf0 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_34,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM5");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_3c,local_34);
                    /* try { // try from 081a2d08 to 081a2d0c has its CatchHandler @ 081a2d1d */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_44);
                    /* try { // try from 081a2d16 to 081a2d1a has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_3c);
  local_10 = 6;
                    /* try { // try from 081a2d4e to 081a2d67 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_18,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM6");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_20,local_18);
                    /* try { // try from 081a2d7f to 081a2d83 has its CatchHandler @ 081a2d94 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_28);
                    /* try { // try from 081a2d8d to 081a2d91 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_20);
  return;
}

```

---

## find

```asm
// === 081a311e Arad_GiftItem_Set::find  [0x081a311e-0x81a31c3] ===
 81a311e:	55                   	push   %ebp
 81a311f:	89 e5                	mov    %esp,%ebp
 81a3121:	53                   	push   %ebx
 81a3122:	83 ec 34             	sub    $0x34,%esp
 81a3125:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3128:	89 c2                	mov    %eax,%edx
 81a312a:	c1 fa 1f             	sar    $0x1f,%edx
 81a312d:	89 c1                	mov    %eax,%ecx
 81a312f:	89 d3                	mov    %edx,%ebx
 81a3131:	89 cb                	mov    %ecx,%ebx
 81a3133:	b9 00 00 00 00       	mov    $0x0,%ecx
 81a3138:	8b 45 10             	mov    0x10(%ebp),%eax
 81a313b:	0f b7 c0             	movzwl %ax,%eax
 81a313e:	c1 e0 10             	shl    $0x10,%eax
 81a3141:	89 c2                	mov    %eax,%edx
 81a3143:	c1 fa 1f             	sar    $0x1f,%edx
 81a3146:	01 c1                	add    %eax,%ecx
 81a3148:	11 d3                	adc    %edx,%ebx
 81a314a:	8b 45 14             	mov    0x14(%ebp),%eax
 81a314d:	89 c2                	mov    %eax,%edx
 81a314f:	c1 fa 1f             	sar    $0x1f,%edx
 81a3152:	01 c8                	add    %ecx,%eax
 81a3154:	11 da                	adc    %ebx,%edx
 81a3156:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81a3159:	89 55 ec             	mov    %edx,-0x14(%ebp)
 81a315c:	8b 45 08             	mov    0x8(%ebp),%eax
 81a315f:	8d 48 04             	lea    0x4(%eax),%ecx
 81a3162:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a3165:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81a3168:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a316c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a3170:	89 04 24             	mov    %eax,(%esp)
 81a3173:	e8 42 17 00 00       	call   81a48ba <_ZNSt3mapIxN17Arad_GiftItem_Set4DataESt4lessIxESaISt4pairIKxS1_EEE4findERS5_>
 81a3178:	83 ec 04             	sub    $0x4,%esp
 81a317b:	8b 45 08             	mov    0x8(%ebp),%eax
 81a317e:	8d 50 04             	lea    0x4(%eax),%edx
 81a3181:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3184:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3188:	89 04 24             	mov    %eax,(%esp)
 81a318b:	e8 56 17 00 00       	call   81a48e6 <_ZNSt3mapIxN17Arad_GiftItem_Set4DataESt4lessIxESaISt4pairIKxS1_EEE3endEv>
 81a3190:	83 ec 04             	sub    $0x4,%esp
 81a3193:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3196:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a319a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a319d:	89 04 24             	mov    %eax,(%esp)
 81a31a0:	e8 67 17 00 00       	call   81a490c <_ZNKSt17_Rb_tree_iteratorISt4pairIKxN17Arad_GiftItem_Set4DataEEEneERKS5_>
 81a31a5:	84 c0                	test   %al,%al
 81a31a7:	74 10                	je     81a31b9 <_ZN17Arad_GiftItem_Set4findEiii+0x9b>
 81a31a9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a31ac:	89 04 24             	mov    %eax,(%esp)
 81a31af:	e8 6c 17 00 00       	call   81a4920 <_ZNKSt17_Rb_tree_iteratorISt4pairIKxN17Arad_GiftItem_Set4DataEEEptEv>
 81a31b4:	83 c0 08             	add    $0x8,%eax
 81a31b7:	eb 05                	jmp    81a31be <_ZN17Arad_GiftItem_Set4findEiii+0xa0>
 81a31b9:	b8 00 00 00 00       	mov    $0x0,%eax
 81a31be:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81a31c1:	c9                   	leave
 81a31c2:	c3                   	ret
 81a31c3:	90                   	nop

```

```c
// Arad_GiftItem_Set::find @ 0x81a311e

/* Arad_GiftItem_Set::find(int, int, int) */

int __thiscall Arad_GiftItem_Set::find(Arad_GiftItem_Set *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<long_long_const,Arad_GiftItem_Set::Data>> local_20 [4];
  int local_1c;
  int local_18;
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  local_10 [8];
  
  uVar2 = param_2 * 0x10000;
  local_1c = param_3 + uVar2;
  local_18 = (param_3 >> 0x1f) + param_1 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_3,uVar2);
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::find((longlong *)local_20);
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>::operator->
                      (local_20);
    iVar3 = iVar3 + 8;
  }
  return iVar3;
}

```

---

## level_check

```asm
// === 081a31c4 Arad_GiftItem_Set::level_check  [0x081a31c4-0x81a329d] ===
 81a31c4:	55                   	push   %ebp
 81a31c5:	89 e5                	mov    %esp,%ebp
 81a31c7:	53                   	push   %ebx
 81a31c8:	83 ec 34             	sub    $0x34,%esp
 81a31cb:	8b 45 10             	mov    0x10(%ebp),%eax
 81a31ce:	05 50 01 00 00       	add    $0x150,%eax
 81a31d3:	89 04 24             	mov    %eax,(%esp)
 81a31d6:	e8 15 33 56 00       	call   87064f0 <_ZNKSs5c_strEv>
 81a31db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a31df:	8b 45 08             	mov    0x8(%ebp),%eax
 81a31e2:	89 04 24             	mov    %eax,(%esp)
 81a31e5:	e8 54 fc ff ff       	call   81a2e3e <_ZN17Arad_GiftItem_Set11str_to_enumEPKc>
 81a31ea:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81a31ed:	8b 45 10             	mov    0x10(%ebp),%eax
 81a31f0:	89 04 24             	mov    %eax,(%esp)
 81a31f3:	e8 f6 e0 f4 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 81a31f8:	89 c3                	mov    %eax,%ebx
 81a31fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a31fd:	89 04 24             	mov    %eax,(%esp)
 81a3200:	e8 1b ad f5 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81a3205:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81a3209:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a320d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a3210:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3214:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3217:	89 04 24             	mov    %eax,(%esp)
 81a321a:	e8 ff fe ff ff       	call   81a311e <_ZN17Arad_GiftItem_Set4findEiii>
 81a321f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a3222:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a3226:	75 07                	jne    81a322f <_ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem+0x6b>
 81a3228:	b8 01 00 00 00       	mov    $0x1,%eax
 81a322d:	eb 68                	jmp    81a3297 <_ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem+0xd3>
 81a322f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3232:	89 04 24             	mov    %eax,(%esp)
 81a3235:	e8 7e 70 f3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81a323a:	89 c3                	mov    %eax,%ebx
 81a323c:	8b 45 10             	mov    0x10(%ebp),%eax
 81a323f:	89 04 24             	mov    %eax,(%esp)
 81a3242:	e8 a7 e0 f4 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 81a3247:	39 c3                	cmp    %eax,%ebx
 81a3249:	0f 9c c0             	setl   %al
 81a324c:	84 c0                	test   %al,%al
 81a324e:	74 42                	je     81a3292 <_ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem+0xce>
 81a3250:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3253:	89 04 24             	mov    %eax,(%esp)
 81a3256:	e8 5d 70 f3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81a325b:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a325f:	c7 44 24 10 e4 c7 ba 	movl   $0x8bac7e4,0x10(%esp)
 81a3266:	08 
 81a3267:	c7 44 24 0c 4b 01 00 	movl   $0x14b,0xc(%esp)
 81a326e:	00 
 81a326f:	c7 44 24 08 20 d7 ba 	movl   $0x8bad720,0x8(%esp)
 81a3276:	08 
 81a3277:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a327e:	08 
 81a327f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a3286:	e8 7f 09 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a328b:	b8 00 00 00 00       	mov    $0x0,%eax
 81a3290:	eb 05                	jmp    81a3297 <_ZN17Arad_GiftItem_Set11level_checkEP5CUserPK14CStackableItem+0xd3>
 81a3292:	b8 01 00 00 00       	mov    $0x1,%eax
 81a3297:	83 c4 34             	add    $0x34,%esp
 81a329a:	5b                   	pop    %ebx
 81a329b:	5d                   	pop    %ebp
 81a329c:	c3                   	ret
 81a329d:	90                   	nop

```

```c
// Arad_GiftItem_Set::level_check @ 0x81a31c4

/* Arad_GiftItem_Set::level_check(CUser*, CStackableItem const*) */

undefined4 __thiscall
Arad_GiftItem_Set::level_check(Arad_GiftItem_Set *this,CUser *param_1,CStackableItem *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar1 = (char *)std::string::c_str((string *)(param_2 + 0x150));
  iVar2 = str_to_enum(this,pcVar1);
  iVar3 = CItem::getUsableLevel((CItem *)param_2);
  iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar2 = find(this,iVar2,iVar4,iVar3);
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    iVar3 = CItem::getUsableLevel((CItem *)param_2);
    if (iVar2 < iVar3) {
      uVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"localjapan/Arad_Script_Loader.cpp",
                 "bool Arad_GiftItem_Set::level_check(CUser*, const CStackableItem*)",0x14b,
                 "[ERROR] user level limit charac_no(%d)",uVar5);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

```

---

## open

```asm
// === 081a2f1e Arad_GiftItem_Set::open  [0x081a2f1e-0x81a311d] ===
 81a2f1e:	55                   	push   %ebp
 81a2f1f:	89 e5                	mov    %esp,%ebp
 81a2f21:	56                   	push   %esi
 81a2f22:	53                   	push   %ebx
 81a2f23:	83 ec 70             	sub    $0x70,%esp
 81a2f26:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2f29:	8b 80 78 01 00 00    	mov    0x178(%eax),%eax
 81a2f2f:	85 c0                	test   %eax,%eax
 81a2f31:	75 0a                	jne    81a2f3d <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x1f>
 81a2f33:	be 00 00 00 00       	mov    $0x0,%esi
 81a2f38:	e9 d5 01 00 00       	jmp    81a3112 <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x1f4>
 81a2f3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2f40:	05 80 01 00 00       	add    $0x180,%eax
 81a2f45:	89 04 24             	mov    %eax,(%esp)
 81a2f48:	e8 a3 35 56 00       	call   87064f0 <_ZNKSs5c_strEv>
 81a2f4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2f51:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2f54:	89 04 24             	mov    %eax,(%esp)
 81a2f57:	e8 e2 fe ff ff       	call   81a2e3e <_ZN17Arad_GiftItem_Set11str_to_enumEPKc>
 81a2f5c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81a2f5f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81a2f63:	75 0a                	jne    81a2f6f <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x51>
 81a2f65:	be 00 00 00 00       	mov    $0x0,%esi
 81a2f6a:	e9 a3 01 00 00       	jmp    81a3112 <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x1f4>
 81a2f6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2f72:	8b 00                	mov    (%eax),%eax
 81a2f74:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81a2f77:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2f7a:	8b 40 5c             	mov    0x5c(%eax),%eax
 81a2f7d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81a2f80:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a2f87:	e9 35 01 00 00       	jmp    81a30c1 <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x1a3>
 81a2f8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2f8f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81a2f92:	0f b6 44 02 38       	movzbl 0x38(%edx,%eax,1),%eax
 81a2f97:	84 c0                	test   %al,%al
 81a2f99:	0f 84 1e 01 00 00    	je     81a30bd <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x19f>
 81a2f9f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81a2fa2:	89 c2                	mov    %eax,%edx
 81a2fa4:	c1 fa 1f             	sar    $0x1f,%edx
 81a2fa7:	89 c1                	mov    %eax,%ecx
 81a2fa9:	89 d3                	mov    %edx,%ebx
 81a2fab:	89 cb                	mov    %ecx,%ebx
 81a2fad:	b9 00 00 00 00       	mov    $0x0,%ecx
 81a2fb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a2fb5:	0f b7 c0             	movzwl %ax,%eax
 81a2fb8:	c1 e0 10             	shl    $0x10,%eax
 81a2fbb:	89 c2                	mov    %eax,%edx
 81a2fbd:	c1 fa 1f             	sar    $0x1f,%edx
 81a2fc0:	01 c1                	add    %eax,%ecx
 81a2fc2:	11 d3                	adc    %edx,%ebx
 81a2fc4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a2fc7:	89 c2                	mov    %eax,%edx
 81a2fc9:	c1 fa 1f             	sar    $0x1f,%edx
 81a2fcc:	01 c8                	add    %ecx,%eax
 81a2fce:	11 da                	adc    %ebx,%edx
 81a2fd0:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81a2fd3:	89 55 bc             	mov    %edx,-0x44(%ebp)
 81a2fd6:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a2fd9:	89 04 24             	mov    %eax,(%esp)
 81a2fdc:	e8 23 11 00 00       	call   81a4104 <_ZN17Arad_GiftItem_Set4DataC1Ev>
 81a2fe1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a2fe4:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81a2fe7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2fea:	05 84 01 00 00       	add    $0x184,%eax
 81a2fef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2ff3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a2ff6:	83 c0 04             	add    $0x4,%eax
 81a2ff9:	89 04 24             	mov    %eax,(%esp)
 81a2ffc:	e8 ff 4c 56 00       	call   8707d00 <_ZNSsaSERKSs>
 81a3001:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3004:	05 88 01 00 00       	add    $0x188,%eax
 81a3009:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a300d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a3010:	83 c0 08             	add    $0x8,%eax
 81a3013:	89 04 24             	mov    %eax,(%esp)
 81a3016:	e8 e5 4c 56 00       	call   8707d00 <_ZNSsaSERKSs>
 81a301b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a301e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a3022:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81a3025:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3029:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81a302c:	89 04 24             	mov    %eax,(%esp)
 81a302f:	e8 1c 18 00 00       	call   81a4850 <_ZNSt4pairIKxN17Arad_GiftItem_Set4DataEEC1IRxRS2_EEOT_OT0_>
 81a3034:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3037:	8d 48 04             	lea    0x4(%eax),%ecx
 81a303a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81a303d:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81a3040:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a3044:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a3048:	89 04 24             	mov    %eax,(%esp)
 81a304b:	e8 3e 18 00 00       	call   81a488e <_ZNSt3mapIxN17Arad_GiftItem_Set4DataESt4lessIxESaISt4pairIKxS1_EEE6insertERKS6_>
 81a3050:	83 ec 04             	sub    $0x4,%esp
 81a3053:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81a3056:	89 04 24             	mov    %eax,(%esp)
 81a3059:	e8 8a 12 00 00       	call   81a42e8 <_ZNSt4pairIKxN17Arad_GiftItem_Set4DataEED1Ev>
 81a305e:	eb 15                	jmp    81a3075 <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x157>
 81a3060:	89 d3                	mov    %edx,%ebx
 81a3062:	89 c6                	mov    %eax,%esi
 81a3064:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81a3067:	89 04 24             	mov    %eax,(%esp)
 81a306a:	e8 79 12 00 00       	call   81a42e8 <_ZNSt4pairIKxN17Arad_GiftItem_Set4DataEED1Ev>
 81a306f:	89 f0                	mov    %esi,%eax
 81a3071:	89 da                	mov    %ebx,%edx
 81a3073:	eb 1e                	jmp    81a3093 <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x175>
 81a3075:	0f b6 45 a8          	movzbl -0x58(%ebp),%eax
 81a3079:	83 f0 01             	xor    $0x1,%eax
 81a307c:	84 c0                	test   %al,%al
 81a307e:	74 0c                	je     81a308c <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x16e>
 81a3080:	be 22 01 00 00       	mov    $0x122,%esi
 81a3085:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a308a:	eb 22                	jmp    81a30ae <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x190>
 81a308c:	bb 01 00 00 00       	mov    $0x1,%ebx
 81a3091:	eb 1b                	jmp    81a30ae <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x190>
 81a3093:	89 d3                	mov    %edx,%ebx
 81a3095:	89 c6                	mov    %eax,%esi
 81a3097:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a309a:	89 04 24             	mov    %eax,(%esp)
 81a309d:	e8 fa 11 00 00       	call   81a429c <_ZN17Arad_GiftItem_Set4DataD1Ev>
 81a30a2:	89 f0                	mov    %esi,%eax
 81a30a4:	89 da                	mov    %ebx,%edx
 81a30a6:	89 04 24             	mov    %eax,(%esp)
 81a30a9:	e8 a2 06 94 00       	call   8ae3750 <_Unwind_Resume>
 81a30ae:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81a30b1:	89 04 24             	mov    %eax,(%esp)
 81a30b4:	e8 e3 11 00 00       	call   81a429c <_ZN17Arad_GiftItem_Set4DataD1Ev>
 81a30b9:	85 db                	test   %ebx,%ebx
 81a30bb:	74 55                	je     81a3112 <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x1f4>
 81a30bd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a30c1:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
 81a30c5:	0f 95 c0             	setne  %al
 81a30c8:	84 c0                	test   %al,%al
 81a30ca:	0f 85 bc fe ff ff    	jne    81a2f8c <_ZN17Arad_GiftItem_Set4openEP17STStackableScript+0x6e>
 81a30d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81a30d7:	00 
 81a30d8:	c7 44 24 08 27 01 00 	movl   $0x127,0x8(%esp)
 81a30df:	00 
 81a30e0:	c7 44 24 04 80 d7 ba 	movl   $0x8bad780,0x4(%esp)
 81a30e7:	08 
 81a30e8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a30eb:	89 04 24             	mov    %eax,(%esp)
 81a30ee:	e8 25 c6 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81a30f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a30f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a30fa:	c7 44 24 04 b8 c7 ba 	movl   $0x8bac7b8,0x4(%esp)
 81a3101:	08 
 81a3102:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81a3105:	89 04 24             	mov    %eax,(%esp)
 81a3108:	e8 7b c6 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81a310d:	be 00 00 00 00       	mov    $0x0,%esi
 81a3112:	89 f0                	mov    %esi,%eax
 81a3114:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a3117:	83 c4 00             	add    $0x0,%esp
 81a311a:	5b                   	pop    %ebx
 81a311b:	5e                   	pop    %esi
 81a311c:	5d                   	pop    %ebp
 81a311d:	c3                   	ret

```

```c
// Arad_GiftItem_Set::open @ 0x81a2f1e

/* Arad_GiftItem_Set::open(STStackableScript*) */

undefined4 __thiscall Arad_GiftItem_Set::open(Arad_GiftItem_Set *this,STStackableScript *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 unaff_ESI;
  bool bVar3;
  pair local_60 [4];
  char local_5c;
  undefined4 local_58;
  string asStack_54 [4];
  string asStack_50 [4];
  int local_4c;
  int local_48;
  pair<long_long_const,Arad_GiftItem_Set::Data> local_40 [20];
  cMyTrace local_2c [16];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)(param_1 + 0x180));
    local_1c = str_to_enum(this,pcVar1);
    if (local_1c != 0) {
      local_18 = *(undefined4 *)param_1;
      local_14 = *(uint *)(param_1 + 0x5c);
      for (local_10 = 0; local_10 != 0xb; local_10 = local_10 + 1) {
        if (param_1[local_10 + 0x38] != (STStackableScript)0x0) {
          uVar2 = local_10 * 0x10000;
          local_4c = local_14 + uVar2;
          local_48 = ((int)local_14 >> 0x1f) + local_1c + ((int)uVar2 >> 0x1f) +
                     (uint)CARRY4(local_14,uVar2);
          Data::Data((Data *)&local_58);
          local_58 = local_18;
                    /* try { // try from 081a2ffc to 081a3033 has its CatchHandler @ 081a3093 */
          std::string::operator=(asStack_54,(string *)(param_1 + 0x184));
          std::string::operator=(asStack_50,(string *)(param_1 + 0x188));
          std::pair<long_long_const,Arad_GiftItem_Set::Data>::
          pair<long_long&,Arad_GiftItem_Set::Data&>
                    (local_40,(longlong *)&local_4c,(Data *)&local_58);
                    /* try { // try from 081a304b to 081a304f has its CatchHandler @ 081a3060 */
          std::
          map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
          ::insert(local_60);
                    /* try { // try from 081a3059 to 081a305d has its CatchHandler @ 081a3093 */
          std::pair<long_long_const,Arad_GiftItem_Set::Data>::~pair(local_40);
          bVar3 = local_5c != '\x01';
          if (bVar3) {
            unaff_ESI = 0x122;
          }
          Data::~Data((Data *)&local_58);
          if (bVar3) {
            return unaff_ESI;
          }
        }
      }
      cMyTrace::cMyTrace(local_2c,"int Arad_GiftItem_Set::open(STStackableScript*)",0x127,0);
      cMyTrace::operator()(local_2c,"[!] Arad GiftItem Loding Sucess!! Item:%d",local_18);
    }
  }
  return 0;
}

```

---

## send_mail

```asm
// === 081a329e Arad_GiftItem_Set::send_mail  [0x081a329e-0x81a3415] ===
 81a329e:	55                   	push   %ebp
 81a329f:	89 e5                	mov    %esp,%ebp
 81a32a1:	53                   	push   %ebx
 81a32a2:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 81a32a8:	8b 45 14             	mov    0x14(%ebp),%eax
 81a32ab:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81a32af:	8b 45 18             	mov    0x18(%ebp),%eax
 81a32b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a32b6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81a32b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a32bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81a32c0:	89 04 24             	mov    %eax,(%esp)
 81a32c3:	e8 56 fe ff ff       	call   81a311e <_ZN17Arad_GiftItem_Set4findEiii>
 81a32c8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81a32cb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81a32cf:	75 36                	jne    81a3307 <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii+0x69>
 81a32d1:	c7 44 24 10 30 c8 ba 	movl   $0x8bac830,0x10(%esp)
 81a32d8:	08 
 81a32d9:	c7 44 24 0c 5d 01 00 	movl   $0x15d,0xc(%esp)
 81a32e0:	00 
 81a32e1:	c7 44 24 08 e0 d6 ba 	movl   $0x8bad6e0,0x8(%esp)
 81a32e8:	08 
 81a32e9:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a32f0:	08 
 81a32f1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a32f8:	e8 0d 09 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a32fd:	b8 00 00 00 00       	mov    $0x0,%eax
 81a3302:	e9 05 01 00 00       	jmp    81a340c <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii+0x16e>
 81a3307:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81a330a:	89 04 24             	mov    %eax,(%esp)
 81a330d:	e8 e0 0c 00 00       	call   81a3ff2 <_ZN10ARAD_DATAS12AradMailInfoC1Ev>
 81a3312:	8b 45 10             	mov    0x10(%ebp),%eax
 81a3315:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81a3318:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a331b:	89 04 24             	mov    %eax,(%esp)
 81a331e:	e8 6d 89 f2 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81a3323:	88 45 b8             	mov    %al,-0x48(%ebp)
 81a3326:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a3329:	83 c0 04             	add    $0x4,%eax
 81a332c:	89 04 24             	mov    %eax,(%esp)
 81a332f:	e8 bc 31 56 00       	call   87064f0 <_ZNKSs5c_strEv>
 81a3334:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81a3337:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a333a:	83 c0 08             	add    $0x8,%eax
 81a333d:	89 04 24             	mov    %eax,(%esp)
 81a3340:	e8 ab 31 56 00       	call   87064f0 <_ZNKSs5c_strEv>
 81a3345:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81a3348:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a334b:	83 c0 08             	add    $0x8,%eax
 81a334e:	89 04 24             	mov    %eax,(%esp)
 81a3351:	e8 1a 33 56 00       	call   8706670 <_ZNKSs6lengthEv>
 81a3356:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81a3359:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a335c:	8b 00                	mov    (%eax),%eax
 81a335e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81a3361:	c6 45 e0 02          	movb   $0x2,-0x20(%ebp)
 81a3365:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 81a336c:	66 c7 45 e2 00 00    	movw   $0x0,-0x1e(%ebp)
 81a3372:	c6 45 ec 00          	movb   $0x0,-0x14(%ebp)
 81a3376:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 81a337c:	89 04 24             	mov    %eax,(%esp)
 81a337f:	e8 d0 84 f2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81a3384:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81a3387:	89 c3                	mov    %eax,%ebx
 81a3389:	e8 0d 8e f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81a338e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81a3392:	89 04 24             	mov    %eax,(%esp)
 81a3395:	e8 98 c6 1b 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81a339a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a339d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a33a1:	75 3a                	jne    81a33dd <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii+0x13f>
 81a33a3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81a33a6:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a33aa:	c7 44 24 10 50 c8 ba 	movl   $0x8bac850,0x10(%esp)
 81a33b1:	08 
 81a33b2:	c7 44 24 0c 75 01 00 	movl   $0x175,0xc(%esp)
 81a33b9:	00 
 81a33ba:	c7 44 24 08 e0 d6 ba 	movl   $0x8bad6e0,0x8(%esp)
 81a33c1:	08 
 81a33c2:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a33c9:	08 
 81a33ca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a33d1:	e8 34 08 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a33d6:	b8 00 00 00 00       	mov    $0x0,%eax
 81a33db:	eb 2f                	jmp    81a340c <_ZN17Arad_GiftItem_Set9send_mailEP5CUseriiii+0x16e>
 81a33dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a33e0:	8b 00                	mov    (%eax),%eax
 81a33e2:	83 c0 08             	add    $0x8,%eax
 81a33e5:	8b 10                	mov    (%eax),%edx
 81a33e7:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 81a33ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a33f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a33f4:	89 04 24             	mov    %eax,(%esp)
 81a33f7:	ff d2                	call   *%edx
 81a33f9:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 81a33fd:	66 89 45 e2          	mov    %ax,-0x1e(%ebp)
 81a3401:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81a3404:	89 04 24             	mov    %eax,(%esp)
 81a3407:	e8 f7 36 ff ff       	call   8196b03 <_ZN4ARAD9send_mailERN10ARAD_DATAS12AradMailInfoE>
 81a340c:	81 c4 a4 00 00 00    	add    $0xa4,%esp
 81a3412:	5b                   	pop    %ebx
 81a3413:	5d                   	pop    %ebp
 81a3414:	c3                   	ret
 81a3415:	90                   	nop

```

```c
// Arad_GiftItem_Set::send_mail @ 0x81a329e

/* Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int) */

undefined4 __thiscall
Arad_GiftItem_Set::send_mail
          (Arad_GiftItem_Set *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  Inven_Item local_89 [11];
  undefined2 local_7e;
  AradMailInfo local_4c [12];
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 local_22;
  int local_20;
  undefined1 local_18;
  int *local_14;
  int *local_10;
  
  local_14 = (int *)find(this,param_5,param_4,param_3);
  if (local_14 == (int *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Script_Loader.cpp",
               "bool Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)",0x15d,
               "[ERROR] send mail - Data None ");
    uVar2 = 0;
  }
  else {
    ARAD_DATAS::AradMailInfo::AradMailInfo(local_4c);
    local_40 = param_2;
    local_4c[0] = (AradMailInfo)CUser::GetServerGroup(param_1);
    local_30 = std::string::c_str((string *)(local_14 + 1));
    local_34 = std::string::c_str((string *)(local_14 + 2));
    local_38 = std::string::length((string *)(local_14 + 2));
    local_20 = *local_14;
    local_24 = 2;
    local_28 = 1;
    local_22 = 0;
    local_18 = 0;
    Inven_Item::Inven_Item(local_89);
    iVar1 = local_20;
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar1);
    if (local_10 == (int *)0x0) {
      LogManager::logFormat
                (1,"localjapan/Arad_Script_Loader.cpp",
                 "bool Arad_GiftItem_Set::send_mail(CUser*, int, int, int, int)",0x175,
                 "[ARAD_RYOSIKA] Item Null. (index:%d)",local_20);
      uVar2 = 0;
    }
    else {
      (**(code **)(*local_10 + 8))(local_10,local_89);
      local_22 = local_7e;
      uVar2 = ARAD::send_mail(local_4c);
    }
  }
  return uVar2;
}

```

---

## str_to_enum

```asm
// === 081a2e3e Arad_GiftItem_Set::str_to_enum  [0x081a2e3e-0x81a2f1d] ===
 81a2e3e:	55                   	push   %ebp
 81a2e3f:	89 e5                	mov    %esp,%ebp
 81a2e41:	56                   	push   %esi
 81a2e42:	53                   	push   %ebx
 81a2e43:	83 ec 20             	sub    $0x20,%esp
 81a2e46:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a2e49:	89 04 24             	mov    %eax,(%esp)
 81a2e4c:	e8 7f d2 53 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81a2e51:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a2e54:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a2e58:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a2e5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2e5f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a2e62:	89 04 24             	mov    %eax,(%esp)
 81a2e65:	e8 c6 47 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81a2e6a:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2e6d:	8d 48 1c             	lea    0x1c(%eax),%ecx
 81a2e70:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a2e73:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81a2e76:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a2e7a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81a2e7e:	89 04 24             	mov    %eax,(%esp)
 81a2e81:	e8 2a 9f fd ff       	call   817cdb0 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE4findERS3_>
 81a2e86:	83 ec 04             	sub    $0x4,%esp
 81a2e89:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a2e8c:	89 04 24             	mov    %eax,(%esp)
 81a2e8f:	e8 4c 4d 56 00       	call   8707be0 <_ZNSsD1Ev>
 81a2e94:	eb 30                	jmp    81a2ec6 <_ZN17Arad_GiftItem_Set11str_to_enumEPKc+0x88>
 81a2e96:	89 d3                	mov    %edx,%ebx
 81a2e98:	89 c6                	mov    %eax,%esi
 81a2e9a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a2e9d:	89 04 24             	mov    %eax,(%esp)
 81a2ea0:	e8 3b 4d 56 00       	call   8707be0 <_ZNSsD1Ev>
 81a2ea5:	89 f0                	mov    %esi,%eax
 81a2ea7:	89 da                	mov    %ebx,%edx
 81a2ea9:	eb 00                	jmp    81a2eab <_ZN17Arad_GiftItem_Set11str_to_enumEPKc+0x6d>
 81a2eab:	89 d3                	mov    %edx,%ebx
 81a2ead:	89 c6                	mov    %eax,%esi
 81a2eaf:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a2eb2:	89 04 24             	mov    %eax,(%esp)
 81a2eb5:	e8 36 d2 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81a2eba:	89 f0                	mov    %esi,%eax
 81a2ebc:	89 da                	mov    %ebx,%edx
 81a2ebe:	89 04 24             	mov    %eax,(%esp)
 81a2ec1:	e8 8a 08 94 00       	call   8ae3750 <_Unwind_Resume>
 81a2ec6:	8d 45 f3             	lea    -0xd(%ebp),%eax
 81a2ec9:	89 04 24             	mov    %eax,(%esp)
 81a2ecc:	e8 1f d2 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81a2ed1:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2ed4:	8d 50 1c             	lea    0x1c(%eax),%edx
 81a2ed7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a2eda:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a2ede:	89 04 24             	mov    %eax,(%esp)
 81a2ee1:	e8 f6 9e fd ff       	call   817cddc <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE3endEv>
 81a2ee6:	83 ec 04             	sub    $0x4,%esp
 81a2ee9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a2eec:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a2ef0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a2ef3:	89 04 24             	mov    %eax,(%esp)
 81a2ef6:	e8 07 9f fd ff       	call   817ce02 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEneERKS3_>
 81a2efb:	84 c0                	test   %al,%al
 81a2efd:	74 10                	je     81a2f0f <_ZN17Arad_GiftItem_Set11str_to_enumEPKc+0xd1>
 81a2eff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a2f02:	89 04 24             	mov    %eax,(%esp)
 81a2f05:	e8 0c 9f fd ff       	call   817ce16 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEptEv>
 81a2f0a:	8b 40 04             	mov    0x4(%eax),%eax
 81a2f0d:	eb 05                	jmp    81a2f14 <_ZN17Arad_GiftItem_Set11str_to_enumEPKc+0xd6>
 81a2f0f:	b8 00 00 00 00       	mov    $0x0,%eax
 81a2f14:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81a2f17:	83 c4 00             	add    $0x0,%esp
 81a2f1a:	5b                   	pop    %ebx
 81a2f1b:	5e                   	pop    %esi
 81a2f1c:	5d                   	pop    %ebp
 81a2f1d:	c3                   	ret

```

```c
// Arad_GiftItem_Set::str_to_enum @ 0x81a2e3e

/* Arad_GiftItem_Set::str_to_enum(char const*) */

undefined4 __thiscall Arad_GiftItem_Set::str_to_enum(Arad_GiftItem_Set *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string local_1c;
  string local_18 [7];
  allocator<char> local_11;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 081a2e65 to 081a2e69 has its CatchHandler @ 081a2eab */
  std::string::string(local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 081a2e81 to 081a2e85 has its CatchHandler @ 081a2e96 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_1c);
                    /* try { // try from 081a2e8f to 081a2e93 has its CatchHandler @ 081a2eab */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)local_10,
                     (_Rb_tree_iterator *)&local_1c);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## ~Arad_GiftItem_Set

```asm
// === 081a2dea Arad_GiftItem_Set::~Arad_GiftItem_Set  [0x081a2dea-0x81a2e3d] ===
 81a2dea:	55                   	push   %ebp
 81a2deb:	89 e5                	mov    %esp,%ebp
 81a2ded:	56                   	push   %esi
 81a2dee:	53                   	push   %ebx
 81a2def:	83 ec 10             	sub    $0x10,%esp
 81a2df2:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2df5:	c7 00 40 d8 ba 08    	movl   $0x8bad840,(%eax)
 81a2dfb:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2dfe:	83 c0 1c             	add    $0x1c,%eax
 81a2e01:	89 04 24             	mov    %eax,(%esp)
 81a2e04:	e8 cd 9d fd ff       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 81a2e09:	eb 1e                	jmp    81a2e29 <_ZN17Arad_GiftItem_SetD1Ev+0x3f>
 81a2e0b:	89 d3                	mov    %edx,%ebx
 81a2e0d:	89 c6                	mov    %eax,%esi
 81a2e0f:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2e12:	83 c0 04             	add    $0x4,%eax
 81a2e15:	89 04 24             	mov    %eax,(%esp)
 81a2e18:	e8 6b 14 00 00       	call   81a4288 <_ZNSt3mapIxN17Arad_GiftItem_Set4DataESt4lessIxESaISt4pairIKxS1_EEED1Ev>
 81a2e1d:	89 f0                	mov    %esi,%eax
 81a2e1f:	89 da                	mov    %ebx,%edx
 81a2e21:	89 04 24             	mov    %eax,(%esp)
 81a2e24:	e8 27 09 94 00       	call   8ae3750 <_Unwind_Resume>
 81a2e29:	8b 45 08             	mov    0x8(%ebp),%eax
 81a2e2c:	83 c0 04             	add    $0x4,%eax
 81a2e2f:	89 04 24             	mov    %eax,(%esp)
 81a2e32:	e8 51 14 00 00       	call   81a4288 <_ZNSt3mapIxN17Arad_GiftItem_Set4DataESt4lessIxESaISt4pairIKxS1_EEED1Ev>
 81a2e37:	83 c4 10             	add    $0x10,%esp
 81a2e3a:	5b                   	pop    %ebx
 81a2e3b:	5e                   	pop    %esi
 81a2e3c:	5d                   	pop    %ebp
 81a2e3d:	c3                   	ret

```

```c
// Arad_GiftItem_Set::~Arad_GiftItem_Set @ 0x81a2dea

/* Arad_GiftItem_Set::~Arad_GiftItem_Set() */

void __thiscall Arad_GiftItem_Set::~Arad_GiftItem_Set(Arad_GiftItem_Set *this)

{
  *(undefined ***)this = &PTR_open_08bad840;
                    /* try { // try from 081a2e04 to 081a2e08 has its CatchHandler @ 081a2e0b */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x1c));
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::~map((map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
          *)(this + 4));
  return;
}

```

