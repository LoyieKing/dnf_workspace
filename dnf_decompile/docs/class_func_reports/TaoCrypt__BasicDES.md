# TaoCrypt__BasicDES

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RawProcessBlock

```asm
// === 087a5ba0 TaoCrypt::BasicDES::RawProcessBlock  [0x087a5ba0-0x87a63df] ===
 87a5ba0:	55                   	push   %ebp
 87a5ba1:	89 e5                	mov    %esp,%ebp
 87a5ba3:	8b 45 10             	mov    0x10(%ebp),%eax
 87a5ba6:	57                   	push   %edi
 87a5ba7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87a5baa:	56                   	push   %esi
 87a5bab:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5bae:	53                   	push   %ebx
 87a5baf:	8b 38                	mov    (%eax),%edi
 87a5bb1:	e8 42 d2 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a5bb6:	81 c3 e2 6f bc 00    	add    $0xbc6fe2,%ebx
 87a5bbc:	89 fa                	mov    %edi,%edx
 87a5bbe:	c1 ca 04             	ror    $0x4,%edx
 87a5bc1:	33 11                	xor    (%ecx),%edx
 87a5bc3:	89 f9                	mov    %edi,%ecx
 87a5bc5:	33 4e 04             	xor    0x4(%esi),%ecx
 87a5bc8:	8b 75 0c             	mov    0xc(%ebp),%esi
 87a5bcb:	89 c8                	mov    %ecx,%eax
 87a5bcd:	83 e0 3f             	and    $0x3f,%eax
 87a5bd0:	8b 84 83 48 3c 9a ff 	mov    -0x65c3b8(%ebx,%eax,4),%eax
 87a5bd7:	33 06                	xor    (%esi),%eax
 87a5bd9:	89 d6                	mov    %edx,%esi
 87a5bdb:	83 e6 3f             	and    $0x3f,%esi
 87a5bde:	33 84 b3 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%esi,4),%eax
 87a5be5:	89 ce                	mov    %ecx,%esi
 87a5be7:	c1 ee 08             	shr    $0x8,%esi
 87a5bea:	83 e6 3f             	and    $0x3f,%esi
 87a5bed:	33 84 b3 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%esi,4),%eax
 87a5bf4:	89 ce                	mov    %ecx,%esi
 87a5bf6:	c1 ee 10             	shr    $0x10,%esi
 87a5bf9:	c1 e9 18             	shr    $0x18,%ecx
 87a5bfc:	83 e6 3f             	and    $0x3f,%esi
 87a5bff:	83 e1 3f             	and    $0x3f,%ecx
 87a5c02:	33 84 b3 48 38 9a ff 	xor    -0x65c7b8(%ebx,%esi,4),%eax
 87a5c09:	33 84 8b 48 36 9a ff 	xor    -0x65c9b8(%ebx,%ecx,4),%eax
 87a5c10:	89 d1                	mov    %edx,%ecx
 87a5c12:	c1 e9 08             	shr    $0x8,%ecx
 87a5c15:	83 e1 3f             	and    $0x3f,%ecx
 87a5c18:	33 84 8b 48 39 9a ff 	xor    -0x65c6b8(%ebx,%ecx,4),%eax
 87a5c1f:	89 d1                	mov    %edx,%ecx
 87a5c21:	c1 e9 10             	shr    $0x10,%ecx
 87a5c24:	c1 ea 18             	shr    $0x18,%edx
 87a5c27:	83 e1 3f             	and    $0x3f,%ecx
 87a5c2a:	83 e2 3f             	and    $0x3f,%edx
 87a5c2d:	33 84 8b 48 37 9a ff 	xor    -0x65c8b8(%ebx,%ecx,4),%eax
 87a5c34:	33 84 93 48 35 9a ff 	xor    -0x65cab8(%ebx,%edx,4),%eax
 87a5c3b:	8b 55 08             	mov    0x8(%ebp),%edx
 87a5c3e:	89 c1                	mov    %eax,%ecx
 87a5c40:	c1 c9 04             	ror    $0x4,%ecx
 87a5c43:	8b 72 0c             	mov    0xc(%edx),%esi
 87a5c46:	33 4a 08             	xor    0x8(%edx),%ecx
 87a5c49:	31 c6                	xor    %eax,%esi
 87a5c4b:	89 f2                	mov    %esi,%edx
 87a5c4d:	83 e2 3f             	and    $0x3f,%edx
 87a5c50:	33 bc 93 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edx,4),%edi
 87a5c57:	89 fa                	mov    %edi,%edx
 87a5c59:	89 cf                	mov    %ecx,%edi
 87a5c5b:	83 e7 3f             	and    $0x3f,%edi
 87a5c5e:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a5c65:	89 f7                	mov    %esi,%edi
 87a5c67:	c1 ef 08             	shr    $0x8,%edi
 87a5c6a:	83 e7 3f             	and    $0x3f,%edi
 87a5c6d:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a5c74:	89 f7                	mov    %esi,%edi
 87a5c76:	c1 ef 10             	shr    $0x10,%edi
 87a5c79:	c1 ee 18             	shr    $0x18,%esi
 87a5c7c:	83 e7 3f             	and    $0x3f,%edi
 87a5c7f:	83 e6 3f             	and    $0x3f,%esi
 87a5c82:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a5c89:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a5c90:	89 ce                	mov    %ecx,%esi
 87a5c92:	c1 ee 08             	shr    $0x8,%esi
 87a5c95:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a5c98:	83 e6 3f             	and    $0x3f,%esi
 87a5c9b:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a5ca2:	89 ce                	mov    %ecx,%esi
 87a5ca4:	c1 ee 10             	shr    $0x10,%esi
 87a5ca7:	c1 e9 18             	shr    $0x18,%ecx
 87a5caa:	83 e6 3f             	and    $0x3f,%esi
 87a5cad:	83 e1 3f             	and    $0x3f,%ecx
 87a5cb0:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a5cb7:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5cba:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a5cc1:	89 d1                	mov    %edx,%ecx
 87a5cc3:	c1 c9 04             	ror    $0x4,%ecx
 87a5cc6:	33 4e 10             	xor    0x10(%esi),%ecx
 87a5cc9:	89 d6                	mov    %edx,%esi
 87a5ccb:	33 77 14             	xor    0x14(%edi),%esi
 87a5cce:	89 f7                	mov    %esi,%edi
 87a5cd0:	83 e7 3f             	and    $0x3f,%edi
 87a5cd3:	33 84 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%eax
 87a5cda:	89 cf                	mov    %ecx,%edi
 87a5cdc:	83 e7 3f             	and    $0x3f,%edi
 87a5cdf:	33 84 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%eax
 87a5ce6:	89 f7                	mov    %esi,%edi
 87a5ce8:	c1 ef 08             	shr    $0x8,%edi
 87a5ceb:	83 e7 3f             	and    $0x3f,%edi
 87a5cee:	33 84 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%eax
 87a5cf5:	89 f7                	mov    %esi,%edi
 87a5cf7:	c1 ef 10             	shr    $0x10,%edi
 87a5cfa:	c1 ee 18             	shr    $0x18,%esi
 87a5cfd:	83 e7 3f             	and    $0x3f,%edi
 87a5d00:	83 e6 3f             	and    $0x3f,%esi
 87a5d03:	33 84 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%eax
 87a5d0a:	33 84 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%eax
 87a5d11:	89 ce                	mov    %ecx,%esi
 87a5d13:	c1 ee 08             	shr    $0x8,%esi
 87a5d16:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a5d19:	83 e6 3f             	and    $0x3f,%esi
 87a5d1c:	33 84 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%eax
 87a5d23:	89 ce                	mov    %ecx,%esi
 87a5d25:	c1 ee 10             	shr    $0x10,%esi
 87a5d28:	c1 e9 18             	shr    $0x18,%ecx
 87a5d2b:	83 e6 3f             	and    $0x3f,%esi
 87a5d2e:	83 e1 3f             	and    $0x3f,%ecx
 87a5d31:	33 84 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%eax
 87a5d38:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5d3b:	33 84 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%eax
 87a5d42:	89 c1                	mov    %eax,%ecx
 87a5d44:	c1 c9 04             	ror    $0x4,%ecx
 87a5d47:	33 4e 18             	xor    0x18(%esi),%ecx
 87a5d4a:	89 c6                	mov    %eax,%esi
 87a5d4c:	33 77 1c             	xor    0x1c(%edi),%esi
 87a5d4f:	89 f7                	mov    %esi,%edi
 87a5d51:	83 e7 3f             	and    $0x3f,%edi
 87a5d54:	33 94 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%edx
 87a5d5b:	89 cf                	mov    %ecx,%edi
 87a5d5d:	83 e7 3f             	and    $0x3f,%edi
 87a5d60:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a5d67:	89 f7                	mov    %esi,%edi
 87a5d69:	c1 ef 08             	shr    $0x8,%edi
 87a5d6c:	83 e7 3f             	and    $0x3f,%edi
 87a5d6f:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a5d76:	89 f7                	mov    %esi,%edi
 87a5d78:	c1 ef 10             	shr    $0x10,%edi
 87a5d7b:	c1 ee 18             	shr    $0x18,%esi
 87a5d7e:	83 e7 3f             	and    $0x3f,%edi
 87a5d81:	83 e6 3f             	and    $0x3f,%esi
 87a5d84:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a5d8b:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a5d92:	89 ce                	mov    %ecx,%esi
 87a5d94:	c1 ee 08             	shr    $0x8,%esi
 87a5d97:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a5d9a:	83 e6 3f             	and    $0x3f,%esi
 87a5d9d:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a5da4:	89 ce                	mov    %ecx,%esi
 87a5da6:	c1 ee 10             	shr    $0x10,%esi
 87a5da9:	83 e6 3f             	and    $0x3f,%esi
 87a5dac:	c1 e9 18             	shr    $0x18,%ecx
 87a5daf:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a5db6:	83 e1 3f             	and    $0x3f,%ecx
 87a5db9:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a5dc0:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5dc3:	89 d1                	mov    %edx,%ecx
 87a5dc5:	c1 c9 04             	ror    $0x4,%ecx
 87a5dc8:	33 4e 20             	xor    0x20(%esi),%ecx
 87a5dcb:	89 d6                	mov    %edx,%esi
 87a5dcd:	33 77 24             	xor    0x24(%edi),%esi
 87a5dd0:	89 f7                	mov    %esi,%edi
 87a5dd2:	83 e7 3f             	and    $0x3f,%edi
 87a5dd5:	33 84 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%eax
 87a5ddc:	89 cf                	mov    %ecx,%edi
 87a5dde:	83 e7 3f             	and    $0x3f,%edi
 87a5de1:	33 84 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%eax
 87a5de8:	89 f7                	mov    %esi,%edi
 87a5dea:	c1 ef 08             	shr    $0x8,%edi
 87a5ded:	83 e7 3f             	and    $0x3f,%edi
 87a5df0:	33 84 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%eax
 87a5df7:	89 f7                	mov    %esi,%edi
 87a5df9:	c1 ef 10             	shr    $0x10,%edi
 87a5dfc:	c1 ee 18             	shr    $0x18,%esi
 87a5dff:	83 e7 3f             	and    $0x3f,%edi
 87a5e02:	83 e6 3f             	and    $0x3f,%esi
 87a5e05:	33 84 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%eax
 87a5e0c:	33 84 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%eax
 87a5e13:	89 ce                	mov    %ecx,%esi
 87a5e15:	c1 ee 08             	shr    $0x8,%esi
 87a5e18:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a5e1b:	83 e6 3f             	and    $0x3f,%esi
 87a5e1e:	33 84 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%eax
 87a5e25:	89 ce                	mov    %ecx,%esi
 87a5e27:	c1 ee 10             	shr    $0x10,%esi
 87a5e2a:	c1 e9 18             	shr    $0x18,%ecx
 87a5e2d:	83 e6 3f             	and    $0x3f,%esi
 87a5e30:	83 e1 3f             	and    $0x3f,%ecx
 87a5e33:	33 84 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%eax
 87a5e3a:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5e3d:	33 84 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%eax
 87a5e44:	89 c1                	mov    %eax,%ecx
 87a5e46:	c1 c9 04             	ror    $0x4,%ecx
 87a5e49:	33 4e 28             	xor    0x28(%esi),%ecx
 87a5e4c:	89 c6                	mov    %eax,%esi
 87a5e4e:	33 77 2c             	xor    0x2c(%edi),%esi
 87a5e51:	89 f7                	mov    %esi,%edi
 87a5e53:	83 e7 3f             	and    $0x3f,%edi
 87a5e56:	33 94 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%edx
 87a5e5d:	89 cf                	mov    %ecx,%edi
 87a5e5f:	83 e7 3f             	and    $0x3f,%edi
 87a5e62:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a5e69:	89 f7                	mov    %esi,%edi
 87a5e6b:	c1 ef 08             	shr    $0x8,%edi
 87a5e6e:	83 e7 3f             	and    $0x3f,%edi
 87a5e71:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a5e78:	89 f7                	mov    %esi,%edi
 87a5e7a:	c1 ef 10             	shr    $0x10,%edi
 87a5e7d:	c1 ee 18             	shr    $0x18,%esi
 87a5e80:	83 e7 3f             	and    $0x3f,%edi
 87a5e83:	83 e6 3f             	and    $0x3f,%esi
 87a5e86:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a5e8d:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a5e94:	89 ce                	mov    %ecx,%esi
 87a5e96:	c1 ee 08             	shr    $0x8,%esi
 87a5e99:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a5e9c:	83 e6 3f             	and    $0x3f,%esi
 87a5e9f:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a5ea6:	89 ce                	mov    %ecx,%esi
 87a5ea8:	c1 ee 10             	shr    $0x10,%esi
 87a5eab:	c1 e9 18             	shr    $0x18,%ecx
 87a5eae:	83 e6 3f             	and    $0x3f,%esi
 87a5eb1:	83 e1 3f             	and    $0x3f,%ecx
 87a5eb4:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a5ebb:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5ebe:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a5ec5:	89 d1                	mov    %edx,%ecx
 87a5ec7:	c1 c9 04             	ror    $0x4,%ecx
 87a5eca:	33 4e 30             	xor    0x30(%esi),%ecx
 87a5ecd:	89 d6                	mov    %edx,%esi
 87a5ecf:	33 77 34             	xor    0x34(%edi),%esi
 87a5ed2:	89 f7                	mov    %esi,%edi
 87a5ed4:	83 e7 3f             	and    $0x3f,%edi
 87a5ed7:	33 84 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%eax
 87a5ede:	89 cf                	mov    %ecx,%edi
 87a5ee0:	83 e7 3f             	and    $0x3f,%edi
 87a5ee3:	33 84 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%eax
 87a5eea:	89 f7                	mov    %esi,%edi
 87a5eec:	c1 ef 08             	shr    $0x8,%edi
 87a5eef:	83 e7 3f             	and    $0x3f,%edi
 87a5ef2:	33 84 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%eax
 87a5ef9:	89 f7                	mov    %esi,%edi
 87a5efb:	c1 ef 10             	shr    $0x10,%edi
 87a5efe:	83 e7 3f             	and    $0x3f,%edi
 87a5f01:	c1 ee 18             	shr    $0x18,%esi
 87a5f04:	33 84 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%eax
 87a5f0b:	83 e6 3f             	and    $0x3f,%esi
 87a5f0e:	33 84 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%eax
 87a5f15:	89 ce                	mov    %ecx,%esi
 87a5f17:	c1 ee 08             	shr    $0x8,%esi
 87a5f1a:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a5f1d:	83 e6 3f             	and    $0x3f,%esi
 87a5f20:	33 84 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%eax
 87a5f27:	89 ce                	mov    %ecx,%esi
 87a5f29:	c1 ee 10             	shr    $0x10,%esi
 87a5f2c:	c1 e9 18             	shr    $0x18,%ecx
 87a5f2f:	83 e6 3f             	and    $0x3f,%esi
 87a5f32:	83 e1 3f             	and    $0x3f,%ecx
 87a5f35:	33 84 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%eax
 87a5f3c:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5f3f:	33 84 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%eax
 87a5f46:	89 c1                	mov    %eax,%ecx
 87a5f48:	c1 c9 04             	ror    $0x4,%ecx
 87a5f4b:	33 4e 38             	xor    0x38(%esi),%ecx
 87a5f4e:	89 c6                	mov    %eax,%esi
 87a5f50:	33 77 3c             	xor    0x3c(%edi),%esi
 87a5f53:	89 f7                	mov    %esi,%edi
 87a5f55:	83 e7 3f             	and    $0x3f,%edi
 87a5f58:	33 94 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%edx
 87a5f5f:	89 cf                	mov    %ecx,%edi
 87a5f61:	83 e7 3f             	and    $0x3f,%edi
 87a5f64:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a5f6b:	89 f7                	mov    %esi,%edi
 87a5f6d:	c1 ef 08             	shr    $0x8,%edi
 87a5f70:	83 e7 3f             	and    $0x3f,%edi
 87a5f73:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a5f7a:	89 f7                	mov    %esi,%edi
 87a5f7c:	c1 ef 10             	shr    $0x10,%edi
 87a5f7f:	c1 ee 18             	shr    $0x18,%esi
 87a5f82:	83 e7 3f             	and    $0x3f,%edi
 87a5f85:	83 e6 3f             	and    $0x3f,%esi
 87a5f88:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a5f8f:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a5f96:	89 ce                	mov    %ecx,%esi
 87a5f98:	c1 ee 08             	shr    $0x8,%esi
 87a5f9b:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a5f9e:	83 e6 3f             	and    $0x3f,%esi
 87a5fa1:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a5fa8:	89 ce                	mov    %ecx,%esi
 87a5faa:	c1 ee 10             	shr    $0x10,%esi
 87a5fad:	83 e6 3f             	and    $0x3f,%esi
 87a5fb0:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a5fb7:	c1 e9 18             	shr    $0x18,%ecx
 87a5fba:	8b 75 08             	mov    0x8(%ebp),%esi
 87a5fbd:	83 e1 3f             	and    $0x3f,%ecx
 87a5fc0:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a5fc7:	89 d1                	mov    %edx,%ecx
 87a5fc9:	c1 c9 04             	ror    $0x4,%ecx
 87a5fcc:	33 4e 40             	xor    0x40(%esi),%ecx
 87a5fcf:	89 d6                	mov    %edx,%esi
 87a5fd1:	33 77 44             	xor    0x44(%edi),%esi
 87a5fd4:	89 f7                	mov    %esi,%edi
 87a5fd6:	83 e7 3f             	and    $0x3f,%edi
 87a5fd9:	33 84 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%eax
 87a5fe0:	89 cf                	mov    %ecx,%edi
 87a5fe2:	83 e7 3f             	and    $0x3f,%edi
 87a5fe5:	33 84 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%eax
 87a5fec:	89 f7                	mov    %esi,%edi
 87a5fee:	c1 ef 08             	shr    $0x8,%edi
 87a5ff1:	83 e7 3f             	and    $0x3f,%edi
 87a5ff4:	33 84 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%eax
 87a5ffb:	89 f7                	mov    %esi,%edi
 87a5ffd:	c1 ef 10             	shr    $0x10,%edi
 87a6000:	c1 ee 18             	shr    $0x18,%esi
 87a6003:	83 e7 3f             	and    $0x3f,%edi
 87a6006:	83 e6 3f             	and    $0x3f,%esi
 87a6009:	33 84 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%eax
 87a6010:	33 84 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%eax
 87a6017:	89 ce                	mov    %ecx,%esi
 87a6019:	c1 ee 08             	shr    $0x8,%esi
 87a601c:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a601f:	83 e6 3f             	and    $0x3f,%esi
 87a6022:	33 84 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%eax
 87a6029:	89 ce                	mov    %ecx,%esi
 87a602b:	c1 ee 10             	shr    $0x10,%esi
 87a602e:	c1 e9 18             	shr    $0x18,%ecx
 87a6031:	83 e6 3f             	and    $0x3f,%esi
 87a6034:	83 e1 3f             	and    $0x3f,%ecx
 87a6037:	33 84 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%eax
 87a603e:	8b 75 08             	mov    0x8(%ebp),%esi
 87a6041:	33 84 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%eax
 87a6048:	89 c1                	mov    %eax,%ecx
 87a604a:	c1 c9 04             	ror    $0x4,%ecx
 87a604d:	33 4e 48             	xor    0x48(%esi),%ecx
 87a6050:	89 c6                	mov    %eax,%esi
 87a6052:	33 77 4c             	xor    0x4c(%edi),%esi
 87a6055:	89 f7                	mov    %esi,%edi
 87a6057:	83 e7 3f             	and    $0x3f,%edi
 87a605a:	33 94 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%edx
 87a6061:	89 cf                	mov    %ecx,%edi
 87a6063:	83 e7 3f             	and    $0x3f,%edi
 87a6066:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a606d:	89 f7                	mov    %esi,%edi
 87a606f:	c1 ef 08             	shr    $0x8,%edi
 87a6072:	83 e7 3f             	and    $0x3f,%edi
 87a6075:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a607c:	89 f7                	mov    %esi,%edi
 87a607e:	c1 ef 10             	shr    $0x10,%edi
 87a6081:	c1 ee 18             	shr    $0x18,%esi
 87a6084:	83 e7 3f             	and    $0x3f,%edi
 87a6087:	83 e6 3f             	and    $0x3f,%esi
 87a608a:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a6091:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a6098:	89 ce                	mov    %ecx,%esi
 87a609a:	c1 ee 08             	shr    $0x8,%esi
 87a609d:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a60a0:	83 e6 3f             	and    $0x3f,%esi
 87a60a3:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a60aa:	89 ce                	mov    %ecx,%esi
 87a60ac:	c1 ee 10             	shr    $0x10,%esi
 87a60af:	c1 e9 18             	shr    $0x18,%ecx
 87a60b2:	83 e6 3f             	and    $0x3f,%esi
 87a60b5:	83 e1 3f             	and    $0x3f,%ecx
 87a60b8:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a60bf:	8b 75 08             	mov    0x8(%ebp),%esi
 87a60c2:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a60c9:	89 d1                	mov    %edx,%ecx
 87a60cb:	c1 c9 04             	ror    $0x4,%ecx
 87a60ce:	33 4e 50             	xor    0x50(%esi),%ecx
 87a60d1:	89 d6                	mov    %edx,%esi
 87a60d3:	33 77 54             	xor    0x54(%edi),%esi
 87a60d6:	89 f7                	mov    %esi,%edi
 87a60d8:	83 e7 3f             	and    $0x3f,%edi
 87a60db:	33 84 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%eax
 87a60e2:	89 cf                	mov    %ecx,%edi
 87a60e4:	83 e7 3f             	and    $0x3f,%edi
 87a60e7:	33 84 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%eax
 87a60ee:	89 f7                	mov    %esi,%edi
 87a60f0:	c1 ef 08             	shr    $0x8,%edi
 87a60f3:	83 e7 3f             	and    $0x3f,%edi
 87a60f6:	33 84 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%eax
 87a60fd:	89 f7                	mov    %esi,%edi
 87a60ff:	c1 ef 10             	shr    $0x10,%edi
 87a6102:	83 e7 3f             	and    $0x3f,%edi
 87a6105:	33 84 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%eax
 87a610c:	c1 ee 18             	shr    $0x18,%esi
 87a610f:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a6112:	83 e6 3f             	and    $0x3f,%esi
 87a6115:	33 84 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%eax
 87a611c:	89 ce                	mov    %ecx,%esi
 87a611e:	c1 ee 08             	shr    $0x8,%esi
 87a6121:	83 e6 3f             	and    $0x3f,%esi
 87a6124:	33 84 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%eax
 87a612b:	89 ce                	mov    %ecx,%esi
 87a612d:	c1 ee 10             	shr    $0x10,%esi
 87a6130:	c1 e9 18             	shr    $0x18,%ecx
 87a6133:	83 e6 3f             	and    $0x3f,%esi
 87a6136:	83 e1 3f             	and    $0x3f,%ecx
 87a6139:	33 84 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%eax
 87a6140:	8b 75 08             	mov    0x8(%ebp),%esi
 87a6143:	33 84 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%eax
 87a614a:	89 c1                	mov    %eax,%ecx
 87a614c:	c1 c9 04             	ror    $0x4,%ecx
 87a614f:	33 4e 58             	xor    0x58(%esi),%ecx
 87a6152:	89 c6                	mov    %eax,%esi
 87a6154:	33 77 5c             	xor    0x5c(%edi),%esi
 87a6157:	89 f7                	mov    %esi,%edi
 87a6159:	83 e7 3f             	and    $0x3f,%edi
 87a615c:	33 94 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%edx
 87a6163:	89 cf                	mov    %ecx,%edi
 87a6165:	83 e7 3f             	and    $0x3f,%edi
 87a6168:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a616f:	89 f7                	mov    %esi,%edi
 87a6171:	c1 ef 08             	shr    $0x8,%edi
 87a6174:	83 e7 3f             	and    $0x3f,%edi
 87a6177:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a617e:	89 f7                	mov    %esi,%edi
 87a6180:	c1 ef 10             	shr    $0x10,%edi
 87a6183:	c1 ee 18             	shr    $0x18,%esi
 87a6186:	83 e7 3f             	and    $0x3f,%edi
 87a6189:	83 e6 3f             	and    $0x3f,%esi
 87a618c:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a6193:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a619a:	89 ce                	mov    %ecx,%esi
 87a619c:	c1 ee 08             	shr    $0x8,%esi
 87a619f:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a61a2:	83 e6 3f             	and    $0x3f,%esi
 87a61a5:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a61ac:	89 ce                	mov    %ecx,%esi
 87a61ae:	c1 ee 10             	shr    $0x10,%esi
 87a61b1:	83 e6 3f             	and    $0x3f,%esi
 87a61b4:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a61bb:	c1 e9 18             	shr    $0x18,%ecx
 87a61be:	8b 75 08             	mov    0x8(%ebp),%esi
 87a61c1:	83 e1 3f             	and    $0x3f,%ecx
 87a61c4:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a61cb:	89 d1                	mov    %edx,%ecx
 87a61cd:	c1 c9 04             	ror    $0x4,%ecx
 87a61d0:	33 4e 60             	xor    0x60(%esi),%ecx
 87a61d3:	89 d6                	mov    %edx,%esi
 87a61d5:	33 77 64             	xor    0x64(%edi),%esi
 87a61d8:	89 f7                	mov    %esi,%edi
 87a61da:	83 e7 3f             	and    $0x3f,%edi
 87a61dd:	33 84 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%eax
 87a61e4:	89 cf                	mov    %ecx,%edi
 87a61e6:	83 e7 3f             	and    $0x3f,%edi
 87a61e9:	33 84 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%eax
 87a61f0:	89 f7                	mov    %esi,%edi
 87a61f2:	c1 ef 08             	shr    $0x8,%edi
 87a61f5:	83 e7 3f             	and    $0x3f,%edi
 87a61f8:	33 84 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%eax
 87a61ff:	89 f7                	mov    %esi,%edi
 87a6201:	c1 ef 10             	shr    $0x10,%edi
 87a6204:	c1 ee 18             	shr    $0x18,%esi
 87a6207:	83 e7 3f             	and    $0x3f,%edi
 87a620a:	83 e6 3f             	and    $0x3f,%esi
 87a620d:	33 84 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%eax
 87a6214:	33 84 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%eax
 87a621b:	89 ce                	mov    %ecx,%esi
 87a621d:	c1 ee 08             	shr    $0x8,%esi
 87a6220:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a6223:	83 e6 3f             	and    $0x3f,%esi
 87a6226:	33 84 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%eax
 87a622d:	89 ce                	mov    %ecx,%esi
 87a622f:	c1 ee 10             	shr    $0x10,%esi
 87a6232:	c1 e9 18             	shr    $0x18,%ecx
 87a6235:	83 e6 3f             	and    $0x3f,%esi
 87a6238:	83 e1 3f             	and    $0x3f,%ecx
 87a623b:	33 84 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%eax
 87a6242:	8b 75 08             	mov    0x8(%ebp),%esi
 87a6245:	33 84 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%eax
 87a624c:	89 c1                	mov    %eax,%ecx
 87a624e:	c1 c9 04             	ror    $0x4,%ecx
 87a6251:	33 4e 68             	xor    0x68(%esi),%ecx
 87a6254:	89 c6                	mov    %eax,%esi
 87a6256:	33 77 6c             	xor    0x6c(%edi),%esi
 87a6259:	89 f7                	mov    %esi,%edi
 87a625b:	83 e7 3f             	and    $0x3f,%edi
 87a625e:	33 94 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%edx
 87a6265:	89 cf                	mov    %ecx,%edi
 87a6267:	83 e7 3f             	and    $0x3f,%edi
 87a626a:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a6271:	89 f7                	mov    %esi,%edi
 87a6273:	c1 ef 08             	shr    $0x8,%edi
 87a6276:	83 e7 3f             	and    $0x3f,%edi
 87a6279:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a6280:	89 f7                	mov    %esi,%edi
 87a6282:	c1 ef 10             	shr    $0x10,%edi
 87a6285:	c1 ee 18             	shr    $0x18,%esi
 87a6288:	83 e7 3f             	and    $0x3f,%edi
 87a628b:	83 e6 3f             	and    $0x3f,%esi
 87a628e:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a6295:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a629c:	89 ce                	mov    %ecx,%esi
 87a629e:	c1 ee 08             	shr    $0x8,%esi
 87a62a1:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a62a4:	83 e6 3f             	and    $0x3f,%esi
 87a62a7:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a62ae:	89 ce                	mov    %ecx,%esi
 87a62b0:	c1 ee 10             	shr    $0x10,%esi
 87a62b3:	c1 e9 18             	shr    $0x18,%ecx
 87a62b6:	83 e6 3f             	and    $0x3f,%esi
 87a62b9:	83 e1 3f             	and    $0x3f,%ecx
 87a62bc:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a62c3:	8b 75 08             	mov    0x8(%ebp),%esi
 87a62c6:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a62cd:	89 d1                	mov    %edx,%ecx
 87a62cf:	c1 c9 04             	ror    $0x4,%ecx
 87a62d2:	33 4e 70             	xor    0x70(%esi),%ecx
 87a62d5:	89 d6                	mov    %edx,%esi
 87a62d7:	33 77 74             	xor    0x74(%edi),%esi
 87a62da:	89 f7                	mov    %esi,%edi
 87a62dc:	83 e7 3f             	and    $0x3f,%edi
 87a62df:	33 84 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%eax
 87a62e6:	89 cf                	mov    %ecx,%edi
 87a62e8:	83 e7 3f             	and    $0x3f,%edi
 87a62eb:	33 84 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%eax
 87a62f2:	89 f7                	mov    %esi,%edi
 87a62f4:	c1 ef 08             	shr    $0x8,%edi
 87a62f7:	83 e7 3f             	and    $0x3f,%edi
 87a62fa:	33 84 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%eax
 87a6301:	89 f7                	mov    %esi,%edi
 87a6303:	c1 ef 10             	shr    $0x10,%edi
 87a6306:	83 e7 3f             	and    $0x3f,%edi
 87a6309:	33 84 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%eax
 87a6310:	c1 ee 18             	shr    $0x18,%esi
 87a6313:	8b 7d 08             	mov    0x8(%ebp),%edi
 87a6316:	83 e6 3f             	and    $0x3f,%esi
 87a6319:	33 84 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%eax
 87a6320:	89 ce                	mov    %ecx,%esi
 87a6322:	c1 ee 08             	shr    $0x8,%esi
 87a6325:	83 e6 3f             	and    $0x3f,%esi
 87a6328:	33 84 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%eax
 87a632f:	89 ce                	mov    %ecx,%esi
 87a6331:	c1 ee 10             	shr    $0x10,%esi
 87a6334:	c1 e9 18             	shr    $0x18,%ecx
 87a6337:	83 e6 3f             	and    $0x3f,%esi
 87a633a:	83 e1 3f             	and    $0x3f,%ecx
 87a633d:	33 84 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%eax
 87a6344:	8b 75 08             	mov    0x8(%ebp),%esi
 87a6347:	33 84 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%eax
 87a634e:	89 c1                	mov    %eax,%ecx
 87a6350:	c1 c9 04             	ror    $0x4,%ecx
 87a6353:	33 4e 78             	xor    0x78(%esi),%ecx
 87a6356:	89 c6                	mov    %eax,%esi
 87a6358:	33 77 7c             	xor    0x7c(%edi),%esi
 87a635b:	89 f7                	mov    %esi,%edi
 87a635d:	83 e7 3f             	and    $0x3f,%edi
 87a6360:	33 94 bb 48 3c 9a ff 	xor    -0x65c3b8(%ebx,%edi,4),%edx
 87a6367:	89 cf                	mov    %ecx,%edi
 87a6369:	83 e7 3f             	and    $0x3f,%edi
 87a636c:	33 94 bb 48 3b 9a ff 	xor    -0x65c4b8(%ebx,%edi,4),%edx
 87a6373:	89 f7                	mov    %esi,%edi
 87a6375:	c1 ef 08             	shr    $0x8,%edi
 87a6378:	83 e7 3f             	and    $0x3f,%edi
 87a637b:	33 94 bb 48 3a 9a ff 	xor    -0x65c5b8(%ebx,%edi,4),%edx
 87a6382:	89 f7                	mov    %esi,%edi
 87a6384:	c1 ef 10             	shr    $0x10,%edi
 87a6387:	c1 ee 18             	shr    $0x18,%esi
 87a638a:	83 e7 3f             	and    $0x3f,%edi
 87a638d:	83 e6 3f             	and    $0x3f,%esi
 87a6390:	33 94 bb 48 38 9a ff 	xor    -0x65c7b8(%ebx,%edi,4),%edx
 87a6397:	33 94 b3 48 36 9a ff 	xor    -0x65c9b8(%ebx,%esi,4),%edx
 87a639e:	89 ce                	mov    %ecx,%esi
 87a63a0:	c1 ee 08             	shr    $0x8,%esi
 87a63a3:	83 e6 3f             	and    $0x3f,%esi
 87a63a6:	33 94 b3 48 39 9a ff 	xor    -0x65c6b8(%ebx,%esi,4),%edx
 87a63ad:	89 ce                	mov    %ecx,%esi
 87a63af:	c1 ee 10             	shr    $0x10,%esi
 87a63b2:	83 e6 3f             	and    $0x3f,%esi
 87a63b5:	c1 e9 18             	shr    $0x18,%ecx
 87a63b8:	83 e1 3f             	and    $0x3f,%ecx
 87a63bb:	33 94 b3 48 37 9a ff 	xor    -0x65c8b8(%ebx,%esi,4),%edx
 87a63c2:	33 94 8b 48 35 9a ff 	xor    -0x65cab8(%ebx,%ecx,4),%edx
 87a63c9:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87a63cc:	89 01                	mov    %eax,(%ecx)
 87a63ce:	8b 75 10             	mov    0x10(%ebp),%esi
 87a63d1:	89 16                	mov    %edx,(%esi)
 87a63d3:	5b                   	pop    %ebx
 87a63d4:	5e                   	pop    %esi
 87a63d5:	5f                   	pop    %edi
 87a63d6:	5d                   	pop    %ebp
 87a63d7:	c3                   	ret
 87a63d8:	90                   	nop
 87a63d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::BasicDES::RawProcessBlock @ 0x87a5ba0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BasicDES::RawProcessBlock(unsigned int&, unsigned int&) const */

void __thiscall TaoCrypt::BasicDES::RawProcessBlock(BasicDES *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = *param_2;
  uVar7 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)this;
  uVar4 = uVar5 ^ *(uint *)(this + 4);
  uVar4 = *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x700) ^ *param_1 ^
          *(uint *)(Spbox + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar7 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar7 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar7 >> 0x18 & 0x3f) * 4);
  uVar7 = (uVar4 >> 4 | uVar4 << 0x1c) ^ *(uint *)(this + 8);
  uVar9 = *(uint *)(this + 0xc) ^ uVar4;
  uVar7 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar7 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar7 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar7 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar7 >> 0x18 & 0x3f) * 4);
  uVar5 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x10);
  uVar9 = uVar7 ^ *(uint *)(this + 0x14);
  uVar5 = uVar4 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar5 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar5 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar5 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar5 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x18);
  uVar9 = uVar5 ^ *(uint *)(this + 0x1c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x20);
  uVar9 = uVar7 ^ *(uint *)(this + 0x24);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x28);
  uVar9 = uVar5 ^ *(uint *)(this + 0x2c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x30);
  uVar9 = uVar7 ^ *(uint *)(this + 0x34);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x38);
  uVar9 = uVar5 ^ *(uint *)(this + 0x3c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x40);
  uVar9 = uVar7 ^ *(uint *)(this + 0x44);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x48);
  uVar9 = uVar5 ^ *(uint *)(this + 0x4c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x50);
  uVar9 = uVar7 ^ *(uint *)(this + 0x54);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x58);
  uVar9 = uVar5 ^ *(uint *)(this + 0x5c);
  uVar7 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar7 >> 4 | uVar7 << 0x1c) ^ *(uint *)(this + 0x60);
  uVar9 = uVar7 ^ *(uint *)(this + 100);
  uVar5 = uVar5 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar5 >> 4 | uVar5 << 0x1c) ^ *(uint *)(this + 0x68);
  uVar9 = uVar5 ^ *(uint *)(this + 0x6c);
  uVar8 = uVar7 ^ *(uint *)(Spbox + (uVar9 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar9 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar9 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar9 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar4 = (uVar8 >> 4 | uVar8 << 0x1c) ^ *(uint *)(this + 0x70);
  uVar7 = uVar8 ^ *(uint *)(this + 0x74);
  uVar3 = uVar5 ^ *(uint *)(Spbox + (uVar7 & 0x3f) * 4 + 0x700) ^
          *(uint *)(Spbox + (uVar4 & 0x3f) * 4 + 0x600) ^
          *(uint *)(Spbox + (uVar7 >> 8 & 0x3f) * 4 + 0x500) ^
          *(uint *)(Spbox + (uVar7 >> 0x10 & 0x3f) * 4 + 0x300) ^
          *(uint *)(Spbox + (uVar7 >> 0x18 & 0x3f) * 4 + 0x100) ^
          *(uint *)(Spbox + (uVar4 >> 8 & 0x3f) * 4 + 0x400) ^
          *(uint *)(Spbox + (uVar4 >> 0x10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(Spbox + (uVar4 >> 0x18 & 0x3f) * 4);
  uVar6 = (uVar3 >> 4 | uVar3 << 0x1c) ^ *(uint *)(this + 0x78);
  uVar10 = uVar3 ^ *(uint *)(this + 0x7c);
  uVar5 = *(uint *)(Spbox + (uVar10 & 0x3f) * 4 + 0x700);
  uVar4 = *(uint *)(Spbox + (uVar6 & 0x3f) * 4 + 0x600);
  uVar7 = *(uint *)(Spbox + (uVar10 >> 8 & 0x3f) * 4 + 0x500);
  uVar9 = *(uint *)(Spbox + (uVar10 >> 0x10 & 0x3f) * 4 + 0x300);
  uVar10 = *(uint *)(Spbox + (uVar10 >> 0x18 & 0x3f) * 4 + 0x100);
  uVar1 = *(uint *)(Spbox + (uVar6 >> 8 & 0x3f) * 4 + 0x400);
  uVar2 = *(uint *)(Spbox + (uVar6 >> 0x10 & 0x3f) * 4 + 0x200);
  uVar6 = *(uint *)(Spbox + (uVar6 >> 0x18 & 0x3f) * 4);
  *param_1 = uVar3;
  *param_2 = uVar8 ^ uVar5 ^ uVar4 ^ uVar7 ^ uVar9 ^ uVar10 ^ uVar1 ^ uVar2 ^ uVar6;
  return;
}

```

---

## SetKey

```asm
// === 087a7a10 TaoCrypt::BasicDES::SetKey  [0x087a7a10-0x87a7c6f] ===
 87a7a10:	55                   	push   %ebp
 87a7a11:	31 c0                	xor    %eax,%eax
 87a7a13:	89 e5                	mov    %esp,%ebp
 87a7a15:	57                   	push   %edi
 87a7a16:	56                   	push   %esi
 87a7a17:	53                   	push   %ebx
 87a7a18:	e8 db b3 f7 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87a7a1d:	81 c3 7b 51 bc 00    	add    $0xbc517b,%ebx
 87a7a23:	81 ec 94 00 00 00    	sub    $0x94,%esp
 87a7a29:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87a7a2c:	8d 8d 7c ff ff ff    	lea    -0x84(%ebp),%ecx
 87a7a32:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87a7a38:	0f b6 94 18 48 3d 9a 	movzbl -0x65c2b8(%eax,%ebx,1),%edx
 87a7a3f:	ff 
 87a7a40:	83 ea 01             	sub    $0x1,%edx
 87a7a43:	89 d6                	mov    %edx,%esi
 87a7a45:	83 e2 07             	and    $0x7,%edx
 87a7a48:	c1 fe 03             	sar    $0x3,%esi
 87a7a4b:	0f b6 34 37          	movzbl (%edi,%esi,1),%esi
 87a7a4f:	85 b4 93 88 3d 9a ff 	test   %esi,-0x65c278(%ebx,%edx,4)
 87a7a56:	0f 95 04 01          	setne  (%ecx,%eax,1)
 87a7a5a:	83 c0 01             	add    $0x1,%eax
 87a7a5d:	83 f8 38             	cmp    $0x38,%eax
 87a7a60:	75 d6                	jne    87a7a38 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE+0x28>
 87a7a62:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 87a7a69:	00 00 00 
 87a7a6c:	8b bd 68 ff ff ff    	mov    -0x98(%ebp),%edi
 87a7a72:	8d 45 ec             	lea    -0x14(%ebp),%eax
 87a7a75:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 87a7a7b:	90                   	nop
 87a7a7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a7a80:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 87a7a86:	31 c0                	xor    %eax,%eax
 87a7a88:	0f b6 b4 3b a8 3d 9a 	movzbl -0x65c258(%ebx,%edi,1),%esi
 87a7a8f:	ff 
 87a7a90:	89 8d 60 ff ff ff    	mov    %ecx,-0xa0(%ebp)
 87a7a96:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 87a7a9c:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
 87a7aa3:	8d 56 e4             	lea    -0x1c(%esi),%edx
 87a7aa6:	89 b5 6c ff ff ff    	mov    %esi,-0x94(%ebp)
 87a7aac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87a7ab0:	8b 8d 6c ff ff ff    	mov    -0x94(%ebp),%ecx
 87a7ab6:	be 1c 00 00 00       	mov    $0x1c,%esi
 87a7abb:	bf 38 00 00 00       	mov    $0x38,%edi
 87a7ac0:	01 c1                	add    %eax,%ecx
 87a7ac2:	83 f8 1c             	cmp    $0x1c,%eax
 87a7ac5:	0f 4c fe             	cmovl  %esi,%edi
 87a7ac8:	39 cf                	cmp    %ecx,%edi
 87a7aca:	8b bd 60 ff ff ff    	mov    -0xa0(%ebp),%edi
 87a7ad0:	8d 72 1c             	lea    0x1c(%edx),%esi
 87a7ad3:	0f 4e f2             	cmovle %edx,%esi
 87a7ad6:	83 c2 01             	add    $0x1,%edx
 87a7ad9:	0f b6 34 37          	movzbl (%edi,%esi,1),%esi
 87a7add:	89 f1                	mov    %esi,%ecx
 87a7adf:	88 4c 07 38          	mov    %cl,0x38(%edi,%eax,1)
 87a7ae3:	83 c0 01             	add    $0x1,%eax
 87a7ae6:	83 f8 38             	cmp    $0x38,%eax
 87a7ae9:	75 c5                	jne    87a7ab0 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE+0xa0>
 87a7aeb:	89 f9                	mov    %edi,%ecx
 87a7aed:	31 f6                	xor    %esi,%esi
 87a7aef:	90                   	nop
 87a7af0:	0f b6 84 1e c8 3d 9a 	movzbl -0x65c238(%esi,%ebx,1),%eax
 87a7af7:	ff 
 87a7af8:	80 7c 01 37 00       	cmpb   $0x0,0x37(%ecx,%eax,1)
 87a7afd:	74 2b                	je     87a7b2a <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE+0x11a>
 87a7aff:	b8 ab aa aa 2a       	mov    $0x2aaaaaab,%eax
 87a7b04:	f7 ee                	imul   %esi
 87a7b06:	89 f0                	mov    %esi,%eax
 87a7b08:	c1 f8 1f             	sar    $0x1f,%eax
 87a7b0b:	29 c2                	sub    %eax,%edx
 87a7b0d:	8d 04 52             	lea    (%edx,%edx,2),%eax
 87a7b10:	8d 3c 00             	lea    (%eax,%eax,1),%edi
 87a7b13:	89 f0                	mov    %esi,%eax
 87a7b15:	29 f8                	sub    %edi,%eax
 87a7b17:	8b bd 64 ff ff ff    	mov    -0x9c(%ebp),%edi
 87a7b1d:	8b 84 83 88 3d 9a ff 	mov    -0x65c278(%ebx,%eax,4),%eax
 87a7b24:	c1 f8 02             	sar    $0x2,%eax
 87a7b27:	08 04 17             	or     %al,(%edi,%edx,1)
 87a7b2a:	83 c6 01             	add    $0x1,%esi
 87a7b2d:	83 fe 30             	cmp    $0x30,%esi
 87a7b30:	75 be                	jne    87a7af0 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE+0xe0>
 87a7b32:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
 87a7b36:	0f b6 55 ee          	movzbl -0x12(%ebp),%edx
 87a7b3a:	8b 75 08             	mov    0x8(%ebp),%esi
 87a7b3d:	8b bd 68 ff ff ff    	mov    -0x98(%ebp),%edi
 87a7b43:	c1 e0 18             	shl    $0x18,%eax
 87a7b46:	c1 e2 10             	shl    $0x10,%edx
 87a7b49:	09 d0                	or     %edx,%eax
 87a7b4b:	0f b6 55 f2          	movzbl -0xe(%ebp),%edx
 87a7b4f:	09 d0                	or     %edx,%eax
 87a7b51:	0f b6 55 f0          	movzbl -0x10(%ebp),%edx
 87a7b55:	c1 e2 08             	shl    $0x8,%edx
 87a7b58:	09 d0                	or     %edx,%eax
 87a7b5a:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 87a7b60:	89 04 d6             	mov    %eax,(%esi,%edx,8)
 87a7b63:	0f b6 45 ed          	movzbl -0x13(%ebp),%eax
 87a7b67:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 87a7b6b:	c1 e0 18             	shl    $0x18,%eax
 87a7b6e:	c1 e2 10             	shl    $0x10,%edx
 87a7b71:	09 d0                	or     %edx,%eax
 87a7b73:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 87a7b77:	09 d0                	or     %edx,%eax
 87a7b79:	0f b6 55 f1          	movzbl -0xf(%ebp),%edx
 87a7b7d:	c1 e2 08             	shl    $0x8,%edx
 87a7b80:	09 d0                	or     %edx,%eax
 87a7b82:	89 44 fe 04          	mov    %eax,0x4(%esi,%edi,8)
 87a7b86:	83 c7 01             	add    $0x1,%edi
 87a7b89:	83 ff 10             	cmp    $0x10,%edi
 87a7b8c:	89 bd 68 ff ff ff    	mov    %edi,-0x98(%ebp)
 87a7b92:	0f 85 e8 fe ff ff    	jne    87a7a80 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE+0x70>
 87a7b98:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87a7b9c:	0f 85 be 00 00 00    	jne    87a7c60 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE+0x250>
 87a7ba2:	8b 06                	mov    (%esi),%eax
 87a7ba4:	8b 56 78             	mov    0x78(%esi),%edx
 87a7ba7:	89 46 78             	mov    %eax,0x78(%esi)
 87a7baa:	8b 46 04             	mov    0x4(%esi),%eax
 87a7bad:	89 16                	mov    %edx,(%esi)
 87a7baf:	8b 56 7c             	mov    0x7c(%esi),%edx
 87a7bb2:	89 46 7c             	mov    %eax,0x7c(%esi)
 87a7bb5:	8b 46 08             	mov    0x8(%esi),%eax
 87a7bb8:	89 56 04             	mov    %edx,0x4(%esi)
 87a7bbb:	8b 56 70             	mov    0x70(%esi),%edx
 87a7bbe:	89 46 70             	mov    %eax,0x70(%esi)
 87a7bc1:	8b 46 0c             	mov    0xc(%esi),%eax
 87a7bc4:	89 56 08             	mov    %edx,0x8(%esi)
 87a7bc7:	8b 56 74             	mov    0x74(%esi),%edx
 87a7bca:	89 46 74             	mov    %eax,0x74(%esi)
 87a7bcd:	8b 46 10             	mov    0x10(%esi),%eax
 87a7bd0:	89 56 0c             	mov    %edx,0xc(%esi)
 87a7bd3:	8b 56 68             	mov    0x68(%esi),%edx
 87a7bd6:	89 46 68             	mov    %eax,0x68(%esi)
 87a7bd9:	8b 46 14             	mov    0x14(%esi),%eax
 87a7bdc:	89 56 10             	mov    %edx,0x10(%esi)
 87a7bdf:	8b 56 6c             	mov    0x6c(%esi),%edx
 87a7be2:	89 46 6c             	mov    %eax,0x6c(%esi)
 87a7be5:	8b 46 18             	mov    0x18(%esi),%eax
 87a7be8:	89 56 14             	mov    %edx,0x14(%esi)
 87a7beb:	8b 56 60             	mov    0x60(%esi),%edx
 87a7bee:	89 46 60             	mov    %eax,0x60(%esi)
 87a7bf1:	8b 46 1c             	mov    0x1c(%esi),%eax
 87a7bf4:	89 56 18             	mov    %edx,0x18(%esi)
 87a7bf7:	8b 56 64             	mov    0x64(%esi),%edx
 87a7bfa:	89 46 64             	mov    %eax,0x64(%esi)
 87a7bfd:	8b 46 20             	mov    0x20(%esi),%eax
 87a7c00:	89 56 1c             	mov    %edx,0x1c(%esi)
 87a7c03:	8b 56 58             	mov    0x58(%esi),%edx
 87a7c06:	89 56 20             	mov    %edx,0x20(%esi)
 87a7c09:	8b 56 5c             	mov    0x5c(%esi),%edx
 87a7c0c:	89 46 58             	mov    %eax,0x58(%esi)
 87a7c0f:	8b 46 24             	mov    0x24(%esi),%eax
 87a7c12:	89 56 24             	mov    %edx,0x24(%esi)
 87a7c15:	8b 56 50             	mov    0x50(%esi),%edx
 87a7c18:	89 46 5c             	mov    %eax,0x5c(%esi)
 87a7c1b:	8b 46 28             	mov    0x28(%esi),%eax
 87a7c1e:	89 56 28             	mov    %edx,0x28(%esi)
 87a7c21:	8b 56 54             	mov    0x54(%esi),%edx
 87a7c24:	89 46 50             	mov    %eax,0x50(%esi)
 87a7c27:	8b 46 2c             	mov    0x2c(%esi),%eax
 87a7c2a:	89 56 2c             	mov    %edx,0x2c(%esi)
 87a7c2d:	8b 56 48             	mov    0x48(%esi),%edx
 87a7c30:	89 46 54             	mov    %eax,0x54(%esi)
 87a7c33:	8b 46 30             	mov    0x30(%esi),%eax
 87a7c36:	89 56 30             	mov    %edx,0x30(%esi)
 87a7c39:	8b 56 4c             	mov    0x4c(%esi),%edx
 87a7c3c:	89 46 48             	mov    %eax,0x48(%esi)
 87a7c3f:	8b 46 34             	mov    0x34(%esi),%eax
 87a7c42:	89 56 34             	mov    %edx,0x34(%esi)
 87a7c45:	8b 56 40             	mov    0x40(%esi),%edx
 87a7c48:	89 46 4c             	mov    %eax,0x4c(%esi)
 87a7c4b:	8b 46 38             	mov    0x38(%esi),%eax
 87a7c4e:	89 56 38             	mov    %edx,0x38(%esi)
 87a7c51:	8b 56 44             	mov    0x44(%esi),%edx
 87a7c54:	89 46 40             	mov    %eax,0x40(%esi)
 87a7c57:	8b 46 3c             	mov    0x3c(%esi),%eax
 87a7c5a:	89 56 3c             	mov    %edx,0x3c(%esi)
 87a7c5d:	89 46 44             	mov    %eax,0x44(%esi)
 87a7c60:	81 c4 94 00 00 00    	add    $0x94,%esp
 87a7c66:	5b                   	pop    %ebx
 87a7c67:	5e                   	pop    %esi
 87a7c68:	5f                   	pop    %edi
 87a7c69:	5d                   	pop    %ebp
 87a7c6a:	c3                   	ret
 87a7c6b:	90                   	nop
 87a7c6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::BasicDES::SetKey @ 0x87a7a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void __thiscall
TaoCrypt::BasicDES::SetKey(BasicDES *this,int param_1,undefined4 param_2,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_9c;
  char local_88 [112];
  byte local_18 [8];
  
  iVar4 = 0;
  do {
    local_88[iVar4] =
         ((&bytebit)[(byte)(&pc1)[iVar4] - 1 & 7] &
         (uint)*(byte *)(param_1 + ((int)((byte)(&pc1)[iVar4] - 1) >> 3))) != 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x38);
  local_9c = 0;
  do {
    iVar5 = 0;
    bVar1 = totrot[local_9c];
    iVar4 = bVar1 - 0x1c;
    do {
      iVar7 = 0x38;
      if (iVar5 < 0x1c) {
        iVar7 = 0x1c;
      }
      iVar6 = iVar4 + 0x1c;
      if (iVar7 <= (int)((uint)bVar1 + iVar5)) {
        iVar6 = iVar4;
      }
      iVar4 = iVar4 + 1;
      local_88[iVar5 + 0x38] = local_88[iVar6];
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x38);
    iVar4 = 0;
    do {
      if (local_88[(byte)(&pc2)[iVar4] + 0x37] != '\0') {
        local_18[iVar4 / 6] = local_18[iVar4 / 6] | (byte)((int)(&bytebit)[iVar4 % 6] >> 2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x30);
    *(undefined4 *)(this + local_9c * 8) = 0;
    *(undefined4 *)(this + local_9c * 8 + 4) = 0;
    local_9c = local_9c + 1;
  } while (local_9c != 0x10);
  if (param_4 == 1) {
    uVar2 = *(undefined4 *)(this + 0x78);
    *(undefined4 *)(this + 0x78) = *(undefined4 *)this;
    *(undefined4 *)this = uVar2;
    uVar2 = *(undefined4 *)(this + 0x7c);
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(this + 4);
    *(undefined4 *)(this + 4) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = uVar2;
    uVar2 = *(undefined4 *)(this + 100);
    *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x1c);
    uVar3 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x1c) = uVar2;
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x58);
    *(undefined4 *)(this + 0x58) = uVar3;
    uVar2 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(this + 0x5c) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x50);
    *(undefined4 *)(this + 0x50) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x54);
    *(undefined4 *)(this + 0x54) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x48) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x4c) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x40) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0x44) = uVar2;
  }
  return;
}

```

