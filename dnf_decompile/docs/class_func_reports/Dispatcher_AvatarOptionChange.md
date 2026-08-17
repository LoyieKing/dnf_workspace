# Dispatcher_AvatarOptionChange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e0a40 Dispatcher_AvatarOptionChange::check_error  [0x081e0a40-0x81e0e31] ===
 81e0a40:	55                   	push   %ebp
 81e0a41:	89 e5                	mov    %esp,%ebp
 81e0a43:	53                   	push   %ebx
 81e0a44:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 81e0a4a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e0a4e:	75 0a                	jne    81e0a5a <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x1a>
 81e0a50:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e0a55:	e9 d3 03 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0a5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0a5d:	89 04 24             	mov    %eax,(%esp)
 81e0a60:	e8 27 99 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e0a65:	83 f8 02             	cmp    $0x2,%eax
 81e0a68:	0f 9e c0             	setle  %al
 81e0a6b:	84 c0                	test   %al,%al
 81e0a6d:	74 0a                	je     81e0a79 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x39>
 81e0a6f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e0a74:	e9 b4 03 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0a79:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81e0a7e:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 81e0a85:	00 
 81e0a86:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e0a89:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e0a8d:	89 04 24             	mov    %eax,(%esp)
 81e0a90:	e8 6d 7f 0a 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81e0a95:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e0a98:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81e0a9c:	74 08                	je     81e0aa6 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x66>
 81e0a9e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e0aa1:	e9 87 03 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0aa6:	8b 45 10             	mov    0x10(%ebp),%eax
 81e0aa9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e0aac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0aaf:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e0ab3:	0f bf d8             	movswl %ax,%ebx
 81e0ab6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0ab9:	89 04 24             	mov    %eax,(%esp)
 81e0abc:	e8 bd 97 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e0ac1:	8d 55 87             	lea    -0x79(%ebp),%edx
 81e0ac4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e0ac8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e0acf:	00 
 81e0ad0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0ad4:	89 14 24             	mov    %edx,(%esp)
 81e0ad7:	e8 3c ae 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e0adc:	83 ec 04             	sub    $0x4,%esp
 81e0adf:	8b 55 89             	mov    -0x77(%ebp),%edx
 81e0ae2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0ae5:	8b 40 0f             	mov    0xf(%eax),%eax
 81e0ae8:	39 c2                	cmp    %eax,%edx
 81e0aea:	74 0a                	je     81e0af6 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0xb6>
 81e0aec:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0af1:	e9 37 03 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0af6:	8b 45 8e             	mov    -0x72(%ebp),%eax
 81e0af9:	85 c0                	test   %eax,%eax
 81e0afb:	7f 0a                	jg     81e0b07 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0xc7>
 81e0afd:	b8 16 00 00 00       	mov    $0x16,%eax
 81e0b02:	e9 26 03 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0b07:	8b 45 89             	mov    -0x77(%ebp),%eax
 81e0b0a:	89 c3                	mov    %eax,%ebx
 81e0b0c:	e8 8a b6 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e0b11:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e0b15:	89 04 24             	mov    %eax,(%esp)
 81e0b18:	e8 15 ef 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e0b1d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e0b20:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81e0b24:	75 0a                	jne    81e0b30 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0xf0>
 81e0b26:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0b2b:	e9 fd 02 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0b30:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0b33:	89 04 24             	mov    %eax,(%esp)
 81e0b36:	e8 bf 07 f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81e0b3b:	83 f0 01             	xor    $0x1,%eax
 81e0b3e:	84 c0                	test   %al,%al
 81e0b40:	74 0a                	je     81e0b4c <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x10c>
 81e0b42:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0b47:	e9 e1 02 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0b4c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0b4f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e0b52:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0b55:	89 04 24             	mov    %eax,(%esp)
 81e0b58:	e8 e5 df 32 00       	call   850eb42 <_ZNK14CStackableItem24IsAvatarOptionChangeItemEv>
 81e0b5d:	83 f0 01             	xor    $0x1,%eax
 81e0b60:	84 c0                	test   %al,%al
 81e0b62:	74 0a                	je     81e0b6e <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x12e>
 81e0b64:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0b69:	e9 bf 02 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0b6e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0b71:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81e0b75:	0f bf d8             	movswl %ax,%ebx
 81e0b78:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0b7b:	89 04 24             	mov    %eax,(%esp)
 81e0b7e:	e8 fb 96 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e0b83:	8d 95 4a ff ff ff    	lea    -0xb6(%ebp),%edx
 81e0b89:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e0b8d:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81e0b94:	00 
 81e0b95:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0b99:	89 14 24             	mov    %edx,(%esp)
 81e0b9c:	e8 77 ad 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e0ba1:	83 ec 04             	sub    $0x4,%esp
 81e0ba4:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 81e0baa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0bad:	8b 40 15             	mov    0x15(%eax),%eax
 81e0bb0:	39 c2                	cmp    %eax,%edx
 81e0bb2:	74 0a                	je     81e0bbe <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x17e>
 81e0bb4:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0bb9:	e9 6f 02 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0bbe:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0bc1:	8b 58 15             	mov    0x15(%eax),%ebx
 81e0bc4:	e8 d2 b5 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e0bc9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e0bcd:	89 04 24             	mov    %eax,(%esp)
 81e0bd0:	e8 5d ee 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e0bd5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e0bd8:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81e0bdc:	75 0a                	jne    81e0be8 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x1a8>
 81e0bde:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0be3:	e9 45 02 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0be8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e0beb:	89 04 24             	mov    %eax,(%esp)
 81e0bee:	e8 07 07 f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81e0bf3:	84 c0                	test   %al,%al
 81e0bf5:	74 0a                	je     81e0c01 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x1c1>
 81e0bf7:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0bfc:	e9 2c 02 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0c01:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e0c04:	8b 00                	mov    (%eax),%eax
 81e0c06:	83 c0 10             	add    $0x10,%eax
 81e0c09:	8b 10                	mov    (%eax),%edx
 81e0c0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e0c0e:	89 04 24             	mov    %eax,(%esp)
 81e0c11:	ff d2                	call   *%edx
 81e0c13:	83 f0 01             	xor    $0x1,%eax
 81e0c16:	84 c0                	test   %al,%al
 81e0c18:	74 0a                	je     81e0c24 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x1e4>
 81e0c1a:	b8 11 00 00 00       	mov    $0x11,%eax
 81e0c1f:	e9 09 02 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0c24:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0c27:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81e0c2b:	98                   	cwtl
 81e0c2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e0c30:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e0c37:	00 
 81e0c38:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0c3b:	89 04 24             	mov    %eax,(%esp)
 81e0c3e:	e8 ff 5c 46 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81e0c43:	84 c0                	test   %al,%al
 81e0c45:	74 0a                	je     81e0c51 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x211>
 81e0c47:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81e0c4c:	e9 dc 01 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0c51:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e0c54:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e0c57:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0c5a:	05 68 03 00 00       	add    $0x368,%eax
 81e0c5f:	89 04 24             	mov    %eax,(%esp)
 81e0c62:	e8 3b 63 05 00       	call   8236fa2 <_ZNKSt3setIiSt4lessIiESaIiEE5emptyEv>
 81e0c67:	83 f0 01             	xor    $0x1,%eax
 81e0c6a:	84 c0                	test   %al,%al
 81e0c6c:	74 6a                	je     81e0cd8 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x298>
 81e0c6e:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 81e0c74:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81e0c77:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0c7a:	8d 88 68 03 00 00    	lea    0x368(%eax),%ecx
 81e0c80:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e0c83:	8d 55 cc             	lea    -0x34(%ebp),%edx
 81e0c86:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e0c8a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81e0c8e:	89 04 24             	mov    %eax,(%esp)
 81e0c91:	e8 d4 97 ef ff       	call   80da46a <_ZNKSt3setIiSt4lessIiESaIiEE4findERKi>
 81e0c96:	83 ec 04             	sub    $0x4,%esp
 81e0c99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0c9c:	8d 90 68 03 00 00    	lea    0x368(%eax),%edx
 81e0ca2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e0ca5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e0ca9:	89 04 24             	mov    %eax,(%esp)
 81e0cac:	e8 e5 97 ef ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 81e0cb1:	83 ec 04             	sub    $0x4,%esp
 81e0cb4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e0cb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0cbb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e0cbe:	89 04 24             	mov    %eax,(%esp)
 81e0cc1:	e8 ec 98 ef ff       	call   80da5b2 <_ZNKSt23_Rb_tree_const_iteratorIiEeqERKS0_>
 81e0cc6:	84 c0                	test   %al,%al
 81e0cc8:	0f 84 b5 00 00 00    	je     81e0d83 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x343>
 81e0cce:	b8 ff 00 00 00       	mov    $0xff,%eax
 81e0cd3:	e9 55 01 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0cd8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0cdb:	05 65 03 00 00       	add    $0x365,%eax
 81e0ce0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e0ce3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0ce6:	0f b6 00             	movzbl (%eax),%eax
 81e0ce9:	0f be d0             	movsbl %al,%edx
 81e0cec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e0cef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e0cf3:	89 04 24             	mov    %eax,(%esp)
 81e0cf6:	e8 2d ca 32 00       	call   850d728 <_ZNK5CItem14check_job_typeEc>
 81e0cfb:	83 f0 01             	xor    $0x1,%eax
 81e0cfe:	84 c0                	test   %al,%al
 81e0d00:	74 14                	je     81e0d16 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x2d6>
 81e0d02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0d05:	0f b6 00             	movzbl (%eax),%eax
 81e0d08:	3c 0b                	cmp    $0xb,%al
 81e0d0a:	74 0a                	je     81e0d16 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x2d6>
 81e0d0c:	b8 fe 00 00 00       	mov    $0xfe,%eax
 81e0d11:	e9 17 01 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0d16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e0d19:	8b 00                	mov    (%eax),%eax
 81e0d1b:	83 c0 0c             	add    $0xc,%eax
 81e0d1e:	8b 10                	mov    (%eax),%edx
 81e0d20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e0d23:	89 04 24             	mov    %eax,(%esp)
 81e0d26:	ff d2                	call   *%edx
 81e0d28:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e0d2b:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 81e0d2f:	0f be d2             	movsbl %dl,%edx
 81e0d32:	39 d0                	cmp    %edx,%eax
 81e0d34:	0f 95 c0             	setne  %al
 81e0d37:	84 c0                	test   %al,%al
 81e0d39:	74 15                	je     81e0d50 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x310>
 81e0d3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0d3e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81e0d42:	3c 1a                	cmp    $0x1a,%al
 81e0d44:	74 0a                	je     81e0d50 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x310>
 81e0d46:	b8 fd 00 00 00       	mov    $0xfd,%eax
 81e0d4b:	e9 dd 00 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0d50:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e0d53:	89 04 24             	mov    %eax,(%esp)
 81e0d56:	e8 f9 fe f2 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 81e0d5b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e0d5e:	0f b6 52 02          	movzbl 0x2(%edx),%edx
 81e0d62:	0f be d2             	movsbl %dl,%edx
 81e0d65:	39 d0                	cmp    %edx,%eax
 81e0d67:	0f 95 c0             	setne  %al
 81e0d6a:	84 c0                	test   %al,%al
 81e0d6c:	74 15                	je     81e0d83 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x343>
 81e0d6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0d71:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 81e0d75:	84 c0                	test   %al,%al
 81e0d77:	74 0a                	je     81e0d83 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x343>
 81e0d79:	b8 fc 00 00 00       	mov    $0xfc,%eax
 81e0d7e:	e9 aa 00 00 00       	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0d83:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0d86:	05 80 03 00 00       	add    $0x380,%eax
 81e0d8b:	89 04 24             	mov    %eax,(%esp)
 81e0d8e:	e8 0f 62 05 00       	call   8236fa2 <_ZNKSt3setIiSt4lessIiESaIiEE5emptyEv>
 81e0d93:	83 f0 01             	xor    $0x1,%eax
 81e0d96:	84 c0                	test   %al,%al
 81e0d98:	74 67                	je     81e0e01 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3c1>
 81e0d9a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0d9d:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81e0da1:	0f be c0             	movsbl %al,%eax
 81e0da4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e0da7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0daa:	8d 88 80 03 00 00    	lea    0x380(%eax),%ecx
 81e0db0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81e0db3:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81e0db6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e0dba:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81e0dbe:	89 04 24             	mov    %eax,(%esp)
 81e0dc1:	e8 a4 96 ef ff       	call   80da46a <_ZNKSt3setIiSt4lessIiESaIiEE4findERKi>
 81e0dc6:	83 ec 04             	sub    $0x4,%esp
 81e0dc9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0dcc:	8d 90 80 03 00 00    	lea    0x380(%eax),%edx
 81e0dd2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e0dd5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e0dd9:	89 04 24             	mov    %eax,(%esp)
 81e0ddc:	e8 b5 96 ef ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 81e0de1:	83 ec 04             	sub    $0x4,%esp
 81e0de4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e0de7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0deb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81e0dee:	89 04 24             	mov    %eax,(%esp)
 81e0df1:	e8 5c 53 f0 ff       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 81e0df6:	84 c0                	test   %al,%al
 81e0df8:	74 07                	je     81e0e01 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3c1>
 81e0dfa:	b8 fb 00 00 00       	mov    $0xfb,%eax
 81e0dff:	eb 2c                	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0e01:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e0e04:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81e0e08:	0f be c0             	movsbl %al,%eax
 81e0e0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0e0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e0e12:	89 04 24             	mov    %eax,(%esp)
 81e0e15:	e8 24 27 33 00       	call   851353e <_ZNK10CEquipItem19IsAvatarOptionValidEc>
 81e0e1a:	83 f0 01             	xor    $0x1,%eax
 81e0e1d:	84 c0                	test   %al,%al
 81e0e1f:	74 07                	je     81e0e28 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3e8>
 81e0e21:	b8 fa 00 00 00       	mov    $0xfa,%eax
 81e0e26:	eb 05                	jmp    81e0e2d <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE+0x3ed>
 81e0e28:	b8 00 00 00 00       	mov    $0x0,%eax
 81e0e2d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81e0e30:	c9                   	leave
 81e0e31:	c3                   	ret

```

```c
// Dispatcher_AvatarOptionChange::check_error @ 0x81e0a40

/* Dispatcher_AvatarOptionChange::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_AvatarOptionChange::check_error
          (Dispatcher_AvatarOptionChange *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_ba [2];
  int local_b8;
  undefined1 local_7d [2];
  int local_7b;
  int local_76;
  _Rb_tree_const_iterator<int> local_40 [4];
  _Rb_tree_const_iterator<int> local_3c [4];
  int local_38;
  set<int,std::less<int>,std::allocator<int>> local_34 [4];
  int local_30;
  set<int,std::less<int>,std::allocator<int>> local_2c [4];
  int local_28;
  MSG_BASE *local_24;
  CStackableItem *local_20;
  CStackableItem *local_1c;
  CItem *local_18;
  CItem *local_14;
  CStackableItem *local_10;
  
  if (param_1 == (CUser *)0x0) {
    local_28 = -1;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      local_28 = -1;
    }
    else {
      local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
      if (local_28 == 0) {
        local_24 = param_2;
        iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_7d,iVar2);
        if (local_7b == *(int *)(local_24 + 0xf)) {
          if (local_76 < 1) {
            local_28 = 0x16;
          }
          else {
            pCVar3 = (CDataManager *)G_CDataManager();
            local_20 = (CStackableItem *)CDataManager::find_item(pCVar3,local_7b);
            if (local_20 == (CStackableItem *)0x0) {
              local_28 = 0x11;
            }
            else {
              cVar1 = CItem::is_stackable((CItem *)local_20);
              if (cVar1 == '\x01') {
                local_1c = local_20;
                cVar1 = CStackableItem::IsAvatarOptionChangeItem(local_20);
                if (cVar1 == '\x01') {
                  iVar4 = (int)*(short *)(local_24 + 0x13);
                  iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  uVar5 = 2;
                  CInventory::GetInvenSlot((int)local_ba,iVar2);
                  if (local_b8 == *(int *)(local_24 + 0x15)) {
                    iVar2 = *(int *)(local_24 + 0x15);
                    pCVar3 = (CDataManager *)G_CDataManager();
                    local_18 = (CItem *)CDataManager::find_item(pCVar3,iVar2);
                    if (local_18 == (CItem *)0x0) {
                      local_28 = 0x11;
                    }
                    else {
                      cVar1 = CItem::is_stackable(local_18);
                      if (cVar1 == '\0') {
                        cVar1 = (**(code **)(*(int *)local_18 + 0x10))(local_18,iVar2,uVar5,iVar4);
                        if (cVar1 == '\x01') {
                          cVar1 = CUser::CheckItemLock(param_1,2,(int)*(short *)(local_24 + 0x13));
                          if (cVar1 == '\0') {
                            local_14 = local_18;
                            cVar1 = std::set<int,std::less<int>,std::allocator<int>>::empty
                                              ((set<int,std::less<int>,std::allocator<int>> *)
                                               (local_1c + 0x368));
                            if (cVar1 == '\x01') {
                              local_10 = local_1c + 0x365;
                              cVar1 = CItem::check_job_type(local_14,(char)*local_10);
                              if ((cVar1 != '\x01') && (*local_10 != (CStackableItem)0xb)) {
                                return 0xfe;
                              }
                              iVar2 = (**(code **)(*(int *)local_14 + 0xc))(local_14);
                              if ((iVar2 != (char)local_10[1]) &&
                                 (local_10[1] != (CStackableItem)0x1a)) {
                                return 0xfd;
                              }
                              iVar2 = CItem::get_grade(local_14);
                              if ((iVar2 != (char)local_10[2]) &&
                                 (local_10[2] != (CStackableItem)0x0)) {
                                return 0xfc;
                              }
                            }
                            else {
                              local_38 = local_b8;
                              std::set<int,std::less<int>,std::allocator<int>>::find
                                        ((int *)local_3c);
                              std::set<int,std::less<int>,std::allocator<int>>::end(local_34);
                              cVar1 = std::_Rb_tree_const_iterator<int>::operator==
                                                (local_3c,(_Rb_tree_const_iterator *)local_34);
                              if (cVar1 != '\0') {
                                return 0xff;
                              }
                            }
                            cVar1 = std::set<int,std::less<int>,std::allocator<int>>::empty
                                              ((set<int,std::less<int>,std::allocator<int>> *)
                                               (local_1c + 0x380));
                            if (cVar1 != '\x01') {
                              local_30 = (int)(char)local_24[0x19];
                              std::set<int,std::less<int>,std::allocator<int>>::find
                                        ((int *)local_40);
                              std::set<int,std::less<int>,std::allocator<int>>::end(local_2c);
                              cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                                                (local_40,(_Rb_tree_const_iterator *)local_2c);
                              if (cVar1 != '\0') {
                                return 0xfb;
                              }
                            }
                            cVar1 = CEquipItem::IsAvatarOptionValid
                                              ((CEquipItem *)local_14,(char)local_24[0x19]);
                            if (cVar1 == '\x01') {
                              local_28 = 0;
                            }
                            else {
                              local_28 = 0xfa;
                            }
                          }
                          else {
                            local_28 = 0xd5;
                          }
                        }
                        else {
                          local_28 = 0x11;
                        }
                      }
                      else {
                        local_28 = 0x11;
                      }
                    }
                  }
                  else {
                    local_28 = 0x11;
                  }
                }
                else {
                  local_28 = 0x11;
                }
              }
              else {
                local_28 = 0x11;
              }
            }
          }
        }
        else {
          local_28 = 0x11;
        }
      }
    }
  }
  return local_28;
}

```

---

## process

```asm
// === 081e0774 Dispatcher_AvatarOptionChange::process  [0x081e0774-0x81e0a3f] ===
 81e0774:	55                   	push   %ebp
 81e0775:	89 e5                	mov    %esp,%ebp
 81e0777:	56                   	push   %esi
 81e0778:	53                   	push   %ebx
 81e0779:	81 ec 30 c9 00 00    	sub    $0xc930,%esp
 81e077f:	8b 45 14             	mov    0x14(%ebp),%eax
 81e0782:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e0785:	8b 45 10             	mov    0x10(%ebp),%eax
 81e0788:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e078c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e078f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0793:	8b 45 08             	mov    0x8(%ebp),%eax
 81e0796:	89 04 24             	mov    %eax,(%esp)
 81e0799:	e8 a2 02 00 00       	call   81e0a40 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE>
 81e079e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81e07a1:	89 42 04             	mov    %eax,0x4(%edx)
 81e07a4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e07a7:	8b 40 04             	mov    0x4(%eax),%eax
 81e07aa:	85 c0                	test   %eax,%eax
 81e07ac:	7e 0a                	jle    81e07b8 <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 81e07ae:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e07b3:	e9 7c 02 00 00       	jmp    81e0a34 <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x2c0>
 81e07b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e07bb:	8b 40 04             	mov    0x4(%eax),%eax
 81e07be:	85 c0                	test   %eax,%eax
 81e07c0:	79 2d                	jns    81e07ef <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81e07c2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e07c5:	8b 40 04             	mov    0x4(%eax),%eax
 81e07c8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e07cf:	00 
 81e07d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e07d4:	c7 44 24 04 a0 19 bd 	movl   $0x8bd19a0,0x4(%esp)
 81e07db:	08 
 81e07dc:	c7 04 24 ab 53 00 00 	movl   $0x53ab,(%esp)
 81e07e3:	e8 ef 00 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e07e8:	89 c3                	mov    %eax,%ebx
 81e07ea:	e9 45 02 00 00       	jmp    81e0a34 <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x2c0>
 81e07ef:	8b 45 10             	mov    0x10(%ebp),%eax
 81e07f2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e07f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e07f8:	89 04 24             	mov    %eax,(%esp)
 81e07fb:	e8 8e 9a ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e0800:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e0803:	8d 85 28 f8 ff ff    	lea    -0x7d8(%ebp),%eax
 81e0809:	89 04 24             	mov    %eax,(%esp)
 81e080c:	e8 1b cd 04 00       	call   822d52c <_ZN10CInventoryC1Ev>
 81e0811:	8d 85 e9 36 ff ff    	lea    -0xc917(%ebp),%eax
 81e0817:	89 04 24             	mov    %eax,(%esp)
 81e081a:	e8 99 cb 04 00       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 81e081f:	8d 85 e9 36 ff ff    	lea    -0xc917(%ebp),%eax
 81e0825:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0829:	8d 85 28 f8 ff ff    	lea    -0x7d8(%ebp),%eax
 81e082f:	89 04 24             	mov    %eax,(%esp)
 81e0832:	e8 bf cc 04 00       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 81e0837:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e083a:	89 04 24             	mov    %eax,(%esp)
 81e083d:	e8 88 fb f9 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81e0842:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0846:	8d 85 28 f8 ff ff    	lea    -0x7d8(%ebp),%eax
 81e084c:	89 04 24             	mov    %eax,(%esp)
 81e084f:	e8 c0 9a 31 00       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 81e0854:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0857:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e085b:	98                   	cwtl
 81e085c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81e0863:	00 
 81e0864:	c7 44 24 10 2f 00 00 	movl   $0x2f,0x10(%esp)
 81e086b:	00 
 81e086c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e0873:	00 
 81e0874:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e0878:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e087f:	00 
 81e0880:	8d 85 28 f8 ff ff    	lea    -0x7d8(%ebp),%eax
 81e0886:	89 04 24             	mov    %eax,(%esp)
 81e0889:	e8 7e 37 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e088e:	88 45 ef             	mov    %al,-0x11(%ebp)
 81e0891:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 81e0895:	83 f0 01             	xor    $0x1,%eax
 81e0898:	84 c0                	test   %al,%al
 81e089a:	74 14                	je     81e08b0 <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x13c>
 81e089c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e089f:	c7 40 04 16 00 00 00 	movl   $0x16,0x4(%eax)
 81e08a6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e08ab:	e9 76 01 00 00       	jmp    81e0a26 <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x2b2>
 81e08b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e08b3:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81e08b7:	98                   	cwtl
 81e08b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e08bc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e08c3:	00 
 81e08c4:	8d 85 28 f8 ff ff    	lea    -0x7d8(%ebp),%eax
 81e08ca:	89 04 24             	mov    %eax,(%esp)
 81e08cd:	e8 dc b9 31 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 81e08d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e08d5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81e08d9:	75 14                	jne    81e08ef <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x17b>
 81e08db:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e08de:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81e08e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e08ea:	e9 37 01 00 00       	jmp    81e0a26 <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x2b2>
 81e08ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e08f2:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e08f6:	98                   	cwtl
 81e08f7:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e08fe:	00 
 81e08ff:	c7 44 24 10 2f 00 00 	movl   $0x2f,0x10(%esp)
 81e0906:	00 
 81e0907:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e090e:	00 
 81e090f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e0913:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e091a:	00 
 81e091b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e091e:	89 04 24             	mov    %eax,(%esp)
 81e0921:	e8 e6 36 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e0926:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0929:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81e092d:	98                   	cwtl
 81e092e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e0932:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e0939:	00 
 81e093a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e093d:	89 04 24             	mov    %eax,(%esp)
 81e0940:	e8 69 b9 31 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 81e0945:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e0948:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e094b:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81e094f:	0f be d8             	movsbl %al,%ebx
 81e0952:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0955:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 81e0959:	0f b7 c8             	movzwl %ax,%ecx
 81e095c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e095f:	8b 40 02             	mov    0x2(%eax),%eax
 81e0962:	89 c2                	mov    %eax,%edx
 81e0964:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0967:	8b 40 07             	mov    0x7(%eax),%eax
 81e096a:	8b 75 0c             	mov    0xc(%ebp),%esi
 81e096d:	81 c6 00 97 07 00    	add    $0x79700,%esi
 81e0973:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81e0977:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81e097b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e097f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0983:	89 34 24             	mov    %esi,(%esp)
 81e0986:	e8 83 63 4a 00       	call   8686d0e <_ZN15cUserHistoryLog21UseAvatarOptionChangeEiiii>
 81e098b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e098e:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81e0992:	66 0f be d0          	movsbw %al,%dx
 81e0996:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0999:	66 89 50 0b          	mov    %dx,0xb(%eax)
 81e099d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e09a0:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81e09a4:	0f be d0             	movsbl %al,%edx
 81e09a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e09aa:	8b 40 07             	mov    0x7(%eax),%eax
 81e09ad:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81e09b4:	00 
 81e09b5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81e09bc:	00 
 81e09bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e09c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e09c5:	c7 44 24 04 c3 02 00 	movl   $0x2c3,0x4(%esp)
 81e09cc:	00 
 81e09cd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e09d0:	89 04 24             	mov    %eax,(%esp)
 81e09d3:	e8 56 82 32 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 81e09d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e09db:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 81e09df:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e09e2:	66 89 50 08          	mov    %dx,0x8(%eax)
 81e09e6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e09e9:	0f b7 50 13          	movzwl 0x13(%eax),%edx
 81e09ed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e09f0:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81e09f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e09f7:	0f b6 50 19          	movzbl 0x19(%eax),%edx
 81e09fb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e09fe:	88 50 0c             	mov    %dl,0xc(%eax)
 81e0a01:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e0a06:	eb 1e                	jmp    81e0a26 <_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase+0x2b2>
 81e0a08:	89 d3                	mov    %edx,%ebx
 81e0a0a:	89 c6                	mov    %eax,%esi
 81e0a0c:	8d 85 28 f8 ff ff    	lea    -0x7d8(%ebp),%eax
 81e0a12:	89 04 24             	mov    %eax,(%esp)
 81e0a15:	e8 e6 cb 04 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81e0a1a:	89 f0                	mov    %esi,%eax
 81e0a1c:	89 da                	mov    %ebx,%edx
 81e0a1e:	89 04 24             	mov    %eax,(%esp)
 81e0a21:	e8 2a 2d 90 00       	call   8ae3750 <_Unwind_Resume>
 81e0a26:	8d 85 28 f8 ff ff    	lea    -0x7d8(%ebp),%eax
 81e0a2c:	89 04 24             	mov    %eax,(%esp)
 81e0a2f:	e8 cc cb 04 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81e0a34:	89 d8                	mov    %ebx,%eax
 81e0a36:	81 c4 30 c9 00 00    	add    $0xc930,%esp
 81e0a3c:	5b                   	pop    %ebx
 81e0a3d:	5e                   	pop    %esi
 81e0a3e:	5d                   	pop    %ebp
 81e0a3f:	c3                   	ret

```

```c
// Dispatcher_AvatarOptionChange::process @ 0x81e0774

/* Dispatcher_AvatarOptionChange::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_AvatarOptionChange::process
          (Dispatcher_AvatarOptionChange *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CInventory *pCVar2;
  InventoryMemory local_c91b [49471];
  CInventory local_7dc [1976];
  ParamBase *local_24;
  MSG_BASE *local_20;
  CInventory *local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  local_24 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_24 + 4) = uVar1;
  if (*(int *)(local_24 + 4) < 1) {
    if (*(int *)(local_24 + 4) < 0) {
      uVar1 = LineFunc(0x53ab,
                       "virtual int Dispatcher_AvatarOptionChange::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_24 + 4),0);
    }
    else {
      local_20 = param_2;
      local_1c = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::CInventory(local_7dc);
      InventoryMemory::InventoryMemory(local_c91b);
      CInventory::SetInventoryMemory(local_7dc,local_c91b);
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081e084f to 081e09d7 has its CatchHandler @ 081e0a08 */
      CInventory::setCopy(local_7dc,pCVar2);
      local_15 = CInventory::delete_item(local_7dc,1,(int)*(short *)(local_20 + 0xd),1,0x2f,0);
      if (local_15 == '\x01') {
        local_14 = CInventory::GetInvenRef(local_7dc,2,(int)*(short *)(local_20 + 0x13));
        if (local_14 == 0) {
          *(undefined4 *)(local_24 + 4) = 0x11;
        }
        else {
          CInventory::delete_item(local_1c,1,(int)*(short *)(local_20 + 0xd),1,0x2f,1);
          local_10 = CInventory::GetInvenRef(local_1c,2,(int)*(short *)(local_20 + 0x13));
          cUserHistoryLog::UseAvatarOptionChange
                    ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(local_10 + 7),
                     *(int *)(local_10 + 2),(uint)*(ushort *)(local_10 + 0xb),
                     (int)(char)local_20[0x19]);
          *(short *)(local_10 + 0xb) = (short)(char)local_20[0x19];
          CInventory::SendAvatarEvent
                    (local_1c,0x2c3,*(int *)(local_10 + 7),(int)(char)local_20[0x19],0,0);
          *(undefined2 *)(local_24 + 8) = *(undefined2 *)(local_20 + 0xd);
          *(undefined2 *)(local_24 + 10) = *(undefined2 *)(local_20 + 0x13);
          *(MSG_BASE *)(local_24 + 0xc) = local_20[0x19];
        }
      }
      else {
        *(undefined4 *)(local_24 + 4) = 0x16;
      }
      uVar1 = 0;
      CInventory::~CInventory(local_7dc);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081e04f2 Dispatcher_AvatarOptionChange::read  [0x081e04f2-0x81e0773] ===
 81e04f2:	55                   	push   %ebp
 81e04f3:	89 e5                	mov    %esp,%ebp
 81e04f5:	83 ec 28             	sub    $0x28,%esp
 81e04f8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e04fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e04fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0501:	83 c0 0d             	add    $0xd,%eax
 81e0504:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0508:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e050b:	89 04 24             	mov    %eax,(%esp)
 81e050e:	e8 ad ca 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e0513:	83 f0 01             	xor    $0x1,%eax
 81e0516:	84 c0                	test   %al,%al
 81e0518:	74 29                	je     81e0543 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x51>
 81e051a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0521:	00 
 81e0522:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0529:	00 
 81e052a:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e0531:	08 
 81e0532:	c7 04 24 80 53 00 00 	movl   $0x5380,(%esp)
 81e0539:	e8 99 03 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e053e:	e9 2e 02 00 00       	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e0543:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0546:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e054a:	66 85 c0             	test   %ax,%ax
 81e054d:	78 0d                	js     81e055c <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x6a>
 81e054f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0552:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81e0556:	66 3d 37 01          	cmp    $0x137,%ax
 81e055a:	7e 29                	jle    81e0585 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x93>
 81e055c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0563:	00 
 81e0564:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e056b:	00 
 81e056c:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e0573:	08 
 81e0574:	c7 04 24 83 53 00 00 	movl   $0x5383,(%esp)
 81e057b:	e8 57 03 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e0580:	e9 ec 01 00 00       	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e0585:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0588:	83 c0 0f             	add    $0xf,%eax
 81e058b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e058f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0592:	89 04 24             	mov    %eax,(%esp)
 81e0595:	e8 56 cb 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e059a:	83 f0 01             	xor    $0x1,%eax
 81e059d:	84 c0                	test   %al,%al
 81e059f:	74 29                	je     81e05ca <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0xd8>
 81e05a1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e05a8:	00 
 81e05a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e05b0:	00 
 81e05b1:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e05b8:	08 
 81e05b9:	c7 04 24 86 53 00 00 	movl   $0x5386,(%esp)
 81e05c0:	e8 12 03 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e05c5:	e9 a7 01 00 00       	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e05ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e05cd:	8b 40 0f             	mov    0xf(%eax),%eax
 81e05d0:	85 c0                	test   %eax,%eax
 81e05d2:	79 29                	jns    81e05fd <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x10b>
 81e05d4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e05db:	00 
 81e05dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e05e3:	00 
 81e05e4:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e05eb:	08 
 81e05ec:	c7 04 24 89 53 00 00 	movl   $0x5389,(%esp)
 81e05f3:	e8 df 02 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e05f8:	e9 74 01 00 00       	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e05fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0600:	83 c0 13             	add    $0x13,%eax
 81e0603:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0607:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e060a:	89 04 24             	mov    %eax,(%esp)
 81e060d:	e8 ae c9 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e0612:	83 f0 01             	xor    $0x1,%eax
 81e0615:	84 c0                	test   %al,%al
 81e0617:	74 29                	je     81e0642 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x150>
 81e0619:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0620:	00 
 81e0621:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0628:	00 
 81e0629:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e0630:	08 
 81e0631:	c7 04 24 8c 53 00 00 	movl   $0x538c,(%esp)
 81e0638:	e8 9a 02 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e063d:	e9 2f 01 00 00       	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e0642:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0645:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81e0649:	66 85 c0             	test   %ax,%ax
 81e064c:	78 0d                	js     81e065b <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x169>
 81e064e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0651:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81e0655:	66 83 f8 68          	cmp    $0x68,%ax
 81e0659:	7e 29                	jle    81e0684 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x192>
 81e065b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0662:	00 
 81e0663:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e066a:	00 
 81e066b:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e0672:	08 
 81e0673:	c7 04 24 90 53 00 00 	movl   $0x5390,(%esp)
 81e067a:	e8 58 02 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e067f:	e9 ed 00 00 00       	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e0684:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0687:	83 c0 15             	add    $0x15,%eax
 81e068a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e068e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0691:	89 04 24             	mov    %eax,(%esp)
 81e0694:	e8 57 ca 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e0699:	83 f0 01             	xor    $0x1,%eax
 81e069c:	84 c0                	test   %al,%al
 81e069e:	74 29                	je     81e06c9 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x1d7>
 81e06a0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e06a7:	00 
 81e06a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e06af:	00 
 81e06b0:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e06b7:	08 
 81e06b8:	c7 04 24 93 53 00 00 	movl   $0x5393,(%esp)
 81e06bf:	e8 13 02 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e06c4:	e9 a8 00 00 00       	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e06c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e06cc:	8b 40 15             	mov    0x15(%eax),%eax
 81e06cf:	85 c0                	test   %eax,%eax
 81e06d1:	79 26                	jns    81e06f9 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x207>
 81e06d3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e06da:	00 
 81e06db:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e06e2:	00 
 81e06e3:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e06ea:	08 
 81e06eb:	c7 04 24 96 53 00 00 	movl   $0x5396,(%esp)
 81e06f2:	e8 e0 01 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e06f7:	eb 78                	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e06f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e06fc:	83 c0 19             	add    $0x19,%eax
 81e06ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0703:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0706:	89 04 24             	mov    %eax,(%esp)
 81e0709:	e8 14 c8 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e070e:	83 f0 01             	xor    $0x1,%eax
 81e0711:	84 c0                	test   %al,%al
 81e0713:	74 26                	je     81e073b <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x249>
 81e0715:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e071c:	00 
 81e071d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0724:	00 
 81e0725:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e072c:	08 
 81e072d:	c7 04 24 99 53 00 00 	movl   $0x5399,(%esp)
 81e0734:	e8 9e 01 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e0739:	eb 36                	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e073b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e073e:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 81e0742:	84 c0                	test   %al,%al
 81e0744:	79 26                	jns    81e076c <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27a>
 81e0746:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e074d:	00 
 81e074e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0755:	00 
 81e0756:	c7 44 24 04 00 1a bd 	movl   $0x8bd1a00,0x4(%esp)
 81e075d:	08 
 81e075e:	c7 04 24 9c 53 00 00 	movl   $0x539c,(%esp)
 81e0765:	e8 6d 01 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e076a:	eb 05                	jmp    81e0771 <_ZN29Dispatcher_AvatarOptionChange4readER9PacketBufR8MSG_BASE+0x27f>
 81e076c:	b8 00 00 00 00       	mov    $0x0,%eax
 81e0771:	c9                   	leave
 81e0772:	c3                   	ret
 81e0773:	90                   	nop

```

```c
// Dispatcher_AvatarOptionChange::read @ 0x81e04f2

/* Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_AvatarOptionChange::read
          (Dispatcher_AvatarOptionChange *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if ((*(short *)(param_2 + 0xd) < 0) || (0x137 < *(short *)(param_2 + 0xd))) {
      uVar2 = LineFunc(0x5383,
                       "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
    else {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        if (*(int *)(param_2 + 0xf) < 0) {
          uVar2 = LineFunc(0x5389,
                           "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
        else {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            if ((*(short *)(param_2 + 0x13) < 0) || (0x68 < *(short *)(param_2 + 0x13))) {
              uVar2 = LineFunc(0x5390,
                               "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
            else {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
              if (cVar1 == '\x01') {
                if (*(int *)(param_2 + 0x15) < 0) {
                  uVar2 = LineFunc(0x5396,
                                   "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
                else {
                  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x19));
                  if (cVar1 == '\x01') {
                    if ((char)param_2[0x19] < '\0') {
                      uVar2 = LineFunc(0x539c,
                                       "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                       ,0,0);
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = LineFunc(0x5399,
                                     "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                  }
                }
              }
              else {
                uVar2 = LineFunc(0x5393,
                                 "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
          }
          else {
            uVar2 = LineFunc(0x538c,
                             "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar2 = LineFunc(0x5386,
                         "virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
  }
  else {
    uVar2 = LineFunc(0x5380,"virtual int Dispatcher_AvatarOptionChange::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e0e32 Dispatcher_AvatarOptionChange::send  [0x081e0e32-0x81e0f5f] ===
 81e0e32:	55                   	push   %ebp
 81e0e33:	89 e5                	mov    %esp,%ebp
 81e0e35:	56                   	push   %esi
 81e0e36:	53                   	push   %ebx
 81e0e37:	83 ec 20             	sub    $0x20,%esp
 81e0e3a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e0e3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e0e40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0e43:	8b 40 04             	mov    0x4(%eax),%eax
 81e0e46:	85 c0                	test   %eax,%eax
 81e0e48:	0f 85 ea 00 00 00    	jne    81e0f38 <_ZN29Dispatcher_AvatarOptionChange4sendEP5CUserR9ParamBase+0x106>
 81e0e4e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0e51:	89 04 24             	mov    %eax,(%esp)
 81e0e54:	e8 f3 ce 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e0e59:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0e5c:	89 04 24             	mov    %eax,(%esp)
 81e0e5f:	e8 82 aa ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81e0e64:	c7 44 24 08 cc 01 00 	movl   $0x1cc,0x8(%esp)
 81e0e6b:	00 
 81e0e6c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e0e73:	00 
 81e0e74:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0e77:	89 04 24             	mov    %eax,(%esp)
 81e0e7a:	e8 7d aa ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e0e7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e0e86:	00 
 81e0e87:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0e8a:	89 04 24             	mov    %eax,(%esp)
 81e0e8d:	e8 8e aa ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e0e92:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0e95:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81e0e99:	98                   	cwtl
 81e0e9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0e9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0ea1:	89 04 24             	mov    %eax,(%esp)
 81e0ea4:	e8 fb 8f ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e0ea9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0eac:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 81e0eb0:	0f be c0             	movsbl %al,%eax
 81e0eb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0eb7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0eba:	89 04 24             	mov    %eax,(%esp)
 81e0ebd:	e8 5e aa ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e0ec2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e0ec9:	00 
 81e0eca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0ecd:	89 04 24             	mov    %eax,(%esp)
 81e0ed0:	e8 83 aa ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e0ed5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0ed8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0edc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0edf:	89 04 24             	mov    %eax,(%esp)
 81e0ee2:	e8 d3 76 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e0ee7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0eea:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81e0eee:	98                   	cwtl
 81e0eef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e0ef3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0efa:	00 
 81e0efb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e0f02:	00 
 81e0f03:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0f06:	89 04 24             	mov    %eax,(%esp)
 81e0f09:	e8 4c b7 49 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81e0f0e:	eb 1b                	jmp    81e0f2b <_ZN29Dispatcher_AvatarOptionChange4sendEP5CUserR9ParamBase+0xf9>
 81e0f10:	89 d3                	mov    %edx,%ebx
 81e0f12:	89 c6                	mov    %eax,%esi
 81e0f14:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0f17:	89 04 24             	mov    %eax,(%esp)
 81e0f1a:	e8 61 cf 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e0f1f:	89 f0                	mov    %esi,%eax
 81e0f21:	89 da                	mov    %ebx,%edx
 81e0f23:	89 04 24             	mov    %eax,(%esp)
 81e0f26:	e8 25 28 90 00       	call   8ae3750 <_Unwind_Resume>
 81e0f2b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e0f2e:	89 04 24             	mov    %eax,(%esp)
 81e0f31:	e8 4a cf 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e0f36:	eb 20                	jmp    81e0f58 <_ZN29Dispatcher_AvatarOptionChange4sendEP5CUserR9ParamBase+0x126>
 81e0f38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0f3b:	8b 40 04             	mov    0x4(%eax),%eax
 81e0f3e:	0f b6 c0             	movzbl %al,%eax
 81e0f41:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e0f45:	c7 44 24 04 cc 01 00 	movl   $0x1cc,0x4(%esp)
 81e0f4c:	00 
 81e0f4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0f50:	89 04 24             	mov    %eax,(%esp)
 81e0f53:	e8 ea af 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e0f58:	83 c4 20             	add    $0x20,%esp
 81e0f5b:	5b                   	pop    %ebx
 81e0f5c:	5e                   	pop    %esi
 81e0f5d:	5d                   	pop    %ebp
 81e0f5e:	c3                   	ret
 81e0f5f:	90                   	nop

```

```c
// Dispatcher_AvatarOptionChange::send @ 0x81e0e32

/* Dispatcher_AvatarOptionChange::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_AvatarOptionChange::send
          (Dispatcher_AvatarOptionChange *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e0e5f to 081e0f0d has its CatchHandler @ 081e0f10 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1cc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0xc]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)(local_10 + 8));
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1cc,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

