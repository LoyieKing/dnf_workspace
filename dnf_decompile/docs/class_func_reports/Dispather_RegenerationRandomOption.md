# Dispather_RegenerationRandomOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d6af4 Dispather_RegenerationRandomOption::process  [0x081d6af4-0x81d7277] ===
 81d6af4:	55                   	push   %ebp
 81d6af5:	89 e5                	mov    %esp,%ebp
 81d6af7:	57                   	push   %edi
 81d6af8:	56                   	push   %esi
 81d6af9:	53                   	push   %ebx
 81d6afa:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 81d6b00:	8b 45 10             	mov    0x10(%ebp),%eax
 81d6b03:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81d6b06:	8b 45 14             	mov    0x14(%ebp),%eax
 81d6b09:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81d6b0c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6b0f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81d6b16:	8d 85 fd fe ff ff    	lea    -0x103(%ebp),%eax
 81d6b1c:	89 c3                	mov    %eax,%ebx
 81d6b1e:	be 01 00 00 00       	mov    $0x1,%esi
 81d6b23:	eb 0e                	jmp    81d6b33 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81d6b25:	89 1c 24             	mov    %ebx,(%esp)
 81d6b28:	e8 27 4d ef ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81d6b2d:	83 c3 3d             	add    $0x3d,%ebx
 81d6b30:	83 ee 01             	sub    $0x1,%esi
 81d6b33:	83 fe ff             	cmp    $0xffffffff,%esi
 81d6b36:	0f 95 c0             	setne  %al
 81d6b39:	84 c0                	test   %al,%al
 81d6b3b:	75 e8                	jne    81d6b25 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 81d6b3d:	c6 45 ce 01          	movb   $0x1,-0x32(%ebp)
 81d6b41:	c6 45 cf 00          	movb   $0x0,-0x31(%ebp)
 81d6b45:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81d6b4c:	e9 c1 02 00 00       	jmp    81d6e12 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x31e>
 81d6b51:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 81d6b54:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81d6b57:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d6b5a:	0f b7 44 50 0d       	movzwl 0xd(%eax,%edx,2),%eax
 81d6b5f:	0f bf f0             	movswl %ax,%esi
 81d6b62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6b65:	89 04 24             	mov    %eax,(%esp)
 81d6b68:	e8 11 37 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d6b6d:	6b d3 3d             	imul   $0x3d,%ebx,%edx
 81d6b70:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81d6b73:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 81d6b76:	8d 9a 15 ff ff ff    	lea    -0xeb(%edx),%ebx
 81d6b7c:	8d 95 b8 fe ff ff    	lea    -0x148(%ebp),%edx
 81d6b82:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81d6b86:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d6b8d:	00 
 81d6b8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6b92:	89 14 24             	mov    %edx,(%esp)
 81d6b95:	e8 7e 4d 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d6b9a:	83 ec 04             	sub    $0x4,%esp
 81d6b9d:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 81d6ba3:	89 03                	mov    %eax,(%ebx)
 81d6ba5:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 81d6bab:	89 43 04             	mov    %eax,0x4(%ebx)
 81d6bae:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 81d6bb4:	89 43 08             	mov    %eax,0x8(%ebx)
 81d6bb7:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 81d6bbd:	89 43 0c             	mov    %eax,0xc(%ebx)
 81d6bc0:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 81d6bc6:	89 43 10             	mov    %eax,0x10(%ebx)
 81d6bc9:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 81d6bcf:	89 43 14             	mov    %eax,0x14(%ebx)
 81d6bd2:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 81d6bd8:	89 43 18             	mov    %eax,0x18(%ebx)
 81d6bdb:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 81d6be1:	89 43 1c             	mov    %eax,0x1c(%ebx)
 81d6be4:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 81d6bea:	89 43 20             	mov    %eax,0x20(%ebx)
 81d6bed:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 81d6bf3:	89 43 24             	mov    %eax,0x24(%ebx)
 81d6bf6:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 81d6bfc:	89 43 28             	mov    %eax,0x28(%ebx)
 81d6bff:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 81d6c05:	89 43 2c             	mov    %eax,0x2c(%ebx)
 81d6c08:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 81d6c0e:	89 43 30             	mov    %eax,0x30(%ebx)
 81d6c11:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 81d6c17:	89 43 34             	mov    %eax,0x34(%ebx)
 81d6c1a:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 81d6c20:	89 43 38             	mov    %eax,0x38(%ebx)
 81d6c23:	0f b6 85 f4 fe ff ff 	movzbl -0x10c(%ebp),%eax
 81d6c2a:	88 43 3c             	mov    %al,0x3c(%ebx)
 81d6c2d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d6c30:	8d 95 fd fe ff ff    	lea    -0x103(%ebp),%edx
 81d6c36:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81d6c39:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81d6c3c:	89 04 24             	mov    %eax,(%esp)
 81d6c3f:	e8 22 81 f4 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 81d6c44:	84 c0                	test   %al,%al
 81d6c46:	74 14                	je     81d6c5c <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x168>
 81d6c48:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6c4b:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81d6c52:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d6c57:	e9 0e 06 00 00       	jmp    81d726a <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x776>
 81d6c5c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d6c5f:	8d 95 fd fe ff ff    	lea    -0x103(%ebp),%edx
 81d6c65:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81d6c68:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81d6c6b:	89 04 24             	mov    %eax,(%esp)
 81d6c6e:	e8 9f 9b f7 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 81d6c73:	83 f0 01             	xor    $0x1,%eax
 81d6c76:	84 c0                	test   %al,%al
 81d6c78:	74 14                	je     81d6c8e <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x19a>
 81d6c7a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6c7d:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81d6c84:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d6c89:	e9 dc 05 00 00       	jmp    81d726a <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x776>
 81d6c8e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81d6c91:	8d 85 fd fe ff ff    	lea    -0x103(%ebp),%eax
 81d6c97:	6b d2 3d             	imul   $0x3d,%edx,%edx
 81d6c9a:	83 c2 10             	add    $0x10,%edx
 81d6c9d:	01 d0                	add    %edx,%eax
 81d6c9f:	83 c0 15             	add    $0x15,%eax
 81d6ca2:	89 04 24             	mov    %eax,(%esp)
 81d6ca5:	e8 26 3f 05 00       	call   822abd0 <_ZN12RandomOption5emptyEv>
 81d6caa:	84 c0                	test   %al,%al
 81d6cac:	74 14                	je     81d6cc2 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x1ce>
 81d6cae:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6cb1:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81d6cb8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d6cbd:	e9 a8 05 00 00       	jmp    81d726a <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x776>
 81d6cc2:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 81d6cc5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d6cc8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81d6ccb:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81d6cce:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81d6cd1:	2d eb 00 00 00       	sub    $0xeb,%eax
 81d6cd6:	8b 40 02             	mov    0x2(%eax),%eax
 81d6cd9:	89 c6                	mov    %eax,%esi
 81d6cdb:	e8 bb 54 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d6ce0:	89 74 24 04          	mov    %esi,0x4(%esp)
 81d6ce4:	89 04 24             	mov    %eax,(%esp)
 81d6ce7:	e8 46 8d 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d6cec:	89 44 9d bc          	mov    %eax,-0x44(%ebp,%ebx,4)
 81d6cf0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d6cf3:	8b 44 85 bc          	mov    -0x44(%ebp,%eax,4),%eax
 81d6cf7:	85 c0                	test   %eax,%eax
 81d6cf9:	74 21                	je     81d6d1c <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x228>
 81d6cfb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d6cfe:	8b 44 85 bc          	mov    -0x44(%ebp,%eax,4),%eax
 81d6d02:	8b 00                	mov    (%eax),%eax
 81d6d04:	83 c0 4c             	add    $0x4c,%eax
 81d6d07:	8b 10                	mov    (%eax),%edx
 81d6d09:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d6d0c:	8b 44 85 bc          	mov    -0x44(%ebp,%eax,4),%eax
 81d6d10:	89 04 24             	mov    %eax,(%esp)
 81d6d13:	ff d2                	call   *%edx
 81d6d15:	83 f0 01             	xor    $0x1,%eax
 81d6d18:	84 c0                	test   %al,%al
 81d6d1a:	74 07                	je     81d6d23 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x22f>
 81d6d1c:	b8 01 00 00 00       	mov    $0x1,%eax
 81d6d21:	eb 05                	jmp    81d6d28 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x234>
 81d6d23:	b8 00 00 00 00       	mov    $0x0,%eax
 81d6d28:	84 c0                	test   %al,%al
 81d6d2a:	74 14                	je     81d6d40 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x24c>
 81d6d2c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6d2f:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81d6d36:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d6d3b:	e9 2a 05 00 00       	jmp    81d726a <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x776>
 81d6d40:	e8 a1 b8 f8 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81d6d45:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 81d6d4c:	00 
 81d6d4d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d6d54:	00 
 81d6d55:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d6d58:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d6d5c:	89 04 24             	mov    %eax,(%esp)
 81d6d5f:	e8 54 79 f9 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81d6d64:	84 c0                	test   %al,%al
 81d6d66:	74 14                	je     81d6d7c <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x288>
 81d6d68:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6d6b:	c7 40 04 d1 00 00 00 	movl   $0xd1,0x4(%eax)
 81d6d72:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d6d77:	e9 ee 04 00 00       	jmp    81d726a <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x776>
 81d6d7c:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d6d81:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 81d6d88:	00 
 81d6d89:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d6d8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d6d90:	89 04 24             	mov    %eax,(%esp)
 81d6d93:	e8 6a 1c 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81d6d98:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81d6d9b:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81d6d9f:	74 13                	je     81d6db4 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2c0>
 81d6da1:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81d6da4:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6da7:	89 50 04             	mov    %edx,0x4(%eax)
 81d6daa:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d6daf:	e9 b6 04 00 00       	jmp    81d726a <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x776>
 81d6db4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81d6db7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d6dba:	0f b7 44 50 0d       	movzwl 0xd(%eax,%edx,2),%eax
 81d6dbf:	98                   	cwtl
 81d6dc0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d6dc4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d6dcb:	00 
 81d6dcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6dcf:	89 04 24             	mov    %eax,(%esp)
 81d6dd2:	e8 6b fb 46 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81d6dd7:	84 c0                	test   %al,%al
 81d6dd9:	74 14                	je     81d6def <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x2fb>
 81d6ddb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d6dde:	c7 40 04 d5 00 00 00 	movl   $0xd5,0x4(%eax)
 81d6de5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d6dea:	e9 7b 04 00 00       	jmp    81d726a <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x776>
 81d6def:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81d6df2:	6b c0 3d             	imul   $0x3d,%eax,%eax
 81d6df5:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 81d6df8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81d6dfb:	2d eb 00 00 00       	sub    $0xeb,%eax
 81d6e00:	0f b6 00             	movzbl (%eax),%eax
 81d6e03:	83 f0 01             	xor    $0x1,%eax
 81d6e06:	84 c0                	test   %al,%al
 81d6e08:	74 04                	je     81d6e0e <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x31a>
 81d6e0a:	c6 45 ce 00          	movb   $0x0,-0x32(%ebp)
 81d6e0e:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 81d6e12:	83 7d d4 01          	cmpl   $0x1,-0x2c(%ebp)
 81d6e16:	0f 9e c0             	setle  %al
 81d6e19:	84 c0                	test   %al,%al
 81d6e1b:	0f 85 30 fd ff ff    	jne    81d6b51 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x5d>
 81d6e21:	8d 85 fd fe ff ff    	lea    -0x103(%ebp),%eax
 81d6e27:	89 04 24             	mov    %eax,(%esp)
 81d6e2a:	e8 27 46 05 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 81d6e2f:	0f b6 d8             	movzbl %al,%ebx
 81d6e32:	8d 85 fd fe ff ff    	lea    -0x103(%ebp),%eax
 81d6e38:	83 c0 3d             	add    $0x3d,%eax
 81d6e3b:	89 04 24             	mov    %eax,(%esp)
 81d6e3e:	e8 13 46 05 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 81d6e43:	0f b6 c0             	movzbl %al,%eax
 81d6e46:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81d6e49:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 81d6e4f:	db 85 b4 fe ff ff    	fildl  -0x14c(%ebp)
 81d6e55:	d9 05 48 63 bd 08    	flds   0x8bd6348
 81d6e5b:	de f9                	fdivrp %st,%st(1)
 81d6e5d:	d9 05 4c 63 bd 08    	flds   0x8bd634c
 81d6e63:	de c1                	faddp  %st,%st(1)
 81d6e65:	d9 bd b2 fe ff ff    	fnstcw -0x14e(%ebp)
 81d6e6b:	0f b7 85 b2 fe ff ff 	movzwl -0x14e(%ebp),%eax
 81d6e72:	b4 0c                	mov    $0xc,%ah
 81d6e74:	66 89 85 b0 fe ff ff 	mov    %ax,-0x150(%ebp)
 81d6e7b:	d9 ad b0 fe ff ff    	fldcw  -0x150(%ebp)
 81d6e81:	df 9d ae fe ff ff    	fistps -0x152(%ebp)
 81d6e87:	d9 ad b2 fe ff ff    	fldcw  -0x14e(%ebp)
 81d6e8d:	0f b7 85 ae fe ff ff 	movzwl -0x152(%ebp),%eax
 81d6e94:	88 45 cf             	mov    %al,-0x31(%ebp)
 81d6e97:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81d6e9a:	89 04 24             	mov    %eax,(%esp)
 81d6e9d:	e8 2e f7 52 00       	call   87065d0 <_ZNSsC1Ev>
 81d6ea2:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 81d6ea8:	89 04 24             	mov    %eax,(%esp)
 81d6eab:	e8 a4 49 ef ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81d6eb0:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 81d6eb7:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81d6ebe:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d6ec1:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81d6ec5:	98                   	cwtl
 81d6ec6:	89 85 a8 fe ff ff    	mov    %eax,-0x158(%ebp)
 81d6ecc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d6ecf:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81d6ed3:	0f bf f8             	movswl %ax,%edi
 81d6ed6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81d6ed9:	89 04 24             	mov    %eax,(%esp)
 81d6edc:	e8 0d a4 f1 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 81d6ee1:	89 c6                	mov    %eax,%esi
 81d6ee3:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81d6ee6:	89 04 24             	mov    %eax,(%esp)
 81d6ee9:	e8 00 a4 f1 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 81d6eee:	89 c3                	mov    %eax,%ebx
 81d6ef0:	e8 a6 52 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d6ef5:	8d 90 40 50 00 00    	lea    0x5040(%eax),%edx
 81d6efb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6efe:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81d6f02:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 81d6f08:	89 44 24 18          	mov    %eax,0x18(%esp)
 81d6f0c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81d6f0f:	89 44 24 14          	mov    %eax,0x14(%esp)
 81d6f13:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 81d6f19:	89 44 24 10          	mov    %eax,0x10(%esp)
 81d6f1d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81d6f21:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d6f25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d6f29:	89 14 24             	mov    %edx,(%esp)
 81d6f2c:	e8 15 17 42 00       	call   85f8646 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser>
 81d6f31:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81d6f34:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81d6f38:	0f 94 c0             	sete   %al
 81d6f3b:	84 c0                	test   %al,%al
 81d6f3d:	0f 84 f1 02 00 00    	je     81d7234 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x740>
 81d6f43:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81d6f4a:	e8 0f d5 05 00       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 81d6f4f:	89 c3                	mov    %eax,%ebx
 81d6f51:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6f54:	89 04 24             	mov    %eax,(%esp)
 81d6f57:	e8 44 84 05 00       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 81d6f5c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81d6f60:	89 44 24 14          	mov    %eax,0x14(%esp)
 81d6f64:	c7 44 24 10 cc 18 bc 	movl   $0x8bc18cc,0x10(%esp)
 81d6f6b:	08 
 81d6f6c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d6f73:	00 
 81d6f74:	c7 44 24 08 d4 18 bc 	movl   $0x8bc18d4,0x8(%esp)
 81d6f7b:	08 
 81d6f7c:	c7 44 24 04 de 18 bc 	movl   $0x8bc18de,0x4(%esp)
 81d6f83:	08 
 81d6f84:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6f87:	89 04 24             	mov    %eax,(%esp)
 81d6f8a:	e8 43 8e 43 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 81d6f8f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81d6f92:	85 c0                	test   %eax,%eax
 81d6f94:	7e 4b                	jle    81d6fe1 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x4ed>
 81d6f96:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81d6f9d:	e8 bc d4 05 00       	call   823445e <_ZN11CSystemTime10getCurDateEv>
 81d6fa2:	89 c3                	mov    %eax,%ebx
 81d6fa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6fa7:	89 04 24             	mov    %eax,(%esp)
 81d6faa:	e8 f1 83 05 00       	call   822f3a0 <_ZNK15CUserCharacInfo27get_charac_10_level_sectionEv>
 81d6faf:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 81d6fb2:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81d6fb6:	89 44 24 14          	mov    %eax,0x14(%esp)
 81d6fba:	c7 44 24 10 cc 18 bc 	movl   $0x8bc18cc,0x10(%esp)
 81d6fc1:	08 
 81d6fc2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d6fc6:	c7 44 24 08 f0 18 bc 	movl   $0x8bc18f0,0x8(%esp)
 81d6fcd:	08 
 81d6fce:	c7 44 24 04 de 18 bc 	movl   $0x8bc18de,0x4(%esp)
 81d6fd5:	08 
 81d6fd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6fd9:	89 04 24             	mov    %eax,(%esp)
 81d6fdc:	e8 f1 8d 43 00       	call   860fdd2 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z>
 81d6fe1:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 81d6fe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6fe7:	89 04 24             	mov    %eax,(%esp)
 81d6fea:	e8 9f 32 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d6fef:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d6ff6:	00 
 81d6ff7:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 81d6ffe:	00 
 81d6fff:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d7003:	89 04 24             	mov    %eax,(%esp)
 81d7006:	e8 41 85 32 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81d700b:	83 f0 01             	xor    $0x1,%eax
 81d700e:	84 c0                	test   %al,%al
 81d7010:	74 14                	je     81d7026 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x532>
 81d7012:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d7015:	c7 40 04 0a 00 00 00 	movl   $0xa,0x4(%eax)
 81d701c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d7021:	e9 39 02 00 00       	jmp    81d725f <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x76b>
 81d7026:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d702d:	00 
 81d702e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7035:	00 
 81d7036:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d703d:	00 
 81d703e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7041:	89 04 24             	mov    %eax,(%esp)
 81d7044:	e8 11 56 4a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81d7049:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d704c:	89 04 24             	mov    %eax,(%esp)
 81d704f:	e8 3a 32 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d7054:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81d7057:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81d705e:	eb 5a                	jmp    81d70ba <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x5c6>
 81d7060:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81d7063:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d7066:	0f b7 44 50 0d       	movzwl 0xd(%eax,%edx,2),%eax
 81d706b:	98                   	cwtl
 81d706c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d7073:	00 
 81d7074:	c7 44 24 10 2e 00 00 	movl   $0x2e,0x10(%esp)
 81d707b:	00 
 81d707c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81d7083:	00 
 81d7084:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d7088:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d708f:	00 
 81d7090:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81d7093:	89 04 24             	mov    %eax,(%esp)
 81d7096:	e8 71 cf 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81d709b:	83 f0 01             	xor    $0x1,%eax
 81d709e:	84 c0                	test   %al,%al
 81d70a0:	74 14                	je     81d70b6 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x5c2>
 81d70a2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d70a5:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81d70ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d70b1:	e9 a9 01 00 00       	jmp    81d725f <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x76b>
 81d70b6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 81d70ba:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 81d70be:	0f 96 c0             	setbe  %al
 81d70c1:	84 c0                	test   %al,%al
 81d70c3:	75 9b                	jne    81d7060 <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x56c>
 81d70c5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d70c8:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d70cc:	98                   	cwtl
 81d70cd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d70d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d70d8:	00 
 81d70d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d70e0:	00 
 81d70e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d70e4:	89 04 24             	mov    %eax,(%esp)
 81d70e7:	e8 6e 55 4a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81d70ec:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d70ef:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81d70f3:	98                   	cwtl
 81d70f4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d70f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d70ff:	00 
 81d7100:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7107:	00 
 81d7108:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d710b:	89 04 24             	mov    %eax,(%esp)
 81d710e:	e8 47 55 4a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81d7113:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 81d7117:	88 85 77 ff ff ff    	mov    %al,-0x89(%ebp)
 81d711d:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 81d7121:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7125:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 81d712b:	89 04 24             	mov    %eax,(%esp)
 81d712e:	e8 33 43 05 00       	call   822b466 <_ZN10Inven_Item14SetReSealCountEh>
 81d7133:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7136:	89 04 24             	mov    %eax,(%esp)
 81d7139:	e8 50 31 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d713e:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 81d7145:	00 
 81d7146:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81d714d:	00 
 81d714e:	c7 44 24 44 36 00 00 	movl   $0x36,0x44(%esp)
 81d7155:	00 
 81d7156:	8b 95 77 ff ff ff    	mov    -0x89(%ebp),%edx
 81d715c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d7160:	8b 95 7b ff ff ff    	mov    -0x85(%ebp),%edx
 81d7166:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d716a:	8b 95 7f ff ff ff    	mov    -0x81(%ebp),%edx
 81d7170:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d7174:	8b 55 83             	mov    -0x7d(%ebp),%edx
 81d7177:	89 54 24 10          	mov    %edx,0x10(%esp)
 81d717b:	8b 55 87             	mov    -0x79(%ebp),%edx
 81d717e:	89 54 24 14          	mov    %edx,0x14(%esp)
 81d7182:	8b 55 8b             	mov    -0x75(%ebp),%edx
 81d7185:	89 54 24 18          	mov    %edx,0x18(%esp)
 81d7189:	8b 55 8f             	mov    -0x71(%ebp),%edx
 81d718c:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81d7190:	8b 55 93             	mov    -0x6d(%ebp),%edx
 81d7193:	89 54 24 20          	mov    %edx,0x20(%esp)
 81d7197:	8b 55 97             	mov    -0x69(%ebp),%edx
 81d719a:	89 54 24 24          	mov    %edx,0x24(%esp)
 81d719e:	8b 55 9b             	mov    -0x65(%ebp),%edx
 81d71a1:	89 54 24 28          	mov    %edx,0x28(%esp)
 81d71a5:	8b 55 9f             	mov    -0x61(%ebp),%edx
 81d71a8:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81d71ac:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 81d71af:	89 54 24 30          	mov    %edx,0x30(%esp)
 81d71b3:	8b 55 a7             	mov    -0x59(%ebp),%edx
 81d71b6:	89 54 24 34          	mov    %edx,0x34(%esp)
 81d71ba:	8b 55 ab             	mov    -0x55(%ebp),%edx
 81d71bd:	89 54 24 38          	mov    %edx,0x38(%esp)
 81d71c1:	8b 55 af             	mov    -0x51(%ebp),%edx
 81d71c4:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81d71c8:	0f b6 55 b3          	movzbl -0x4d(%ebp),%edx
 81d71cc:	88 54 24 40          	mov    %dl,0x40(%esp)
 81d71d0:	89 04 24             	mov    %eax,(%esp)
 81d71d3:	e8 ae bb 32 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81d71d8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81d71db:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81d71df:	78 2e                	js     81d720f <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x71b>
 81d71e1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d71e4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d71e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d71ef:	00 
 81d71f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d71f7:	00 
 81d71f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d71fb:	89 04 24             	mov    %eax,(%esp)
 81d71fe:	e8 57 54 4a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81d7203:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81d7206:	89 c2                	mov    %eax,%edx
 81d7208:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d720b:	66 89 50 08          	mov    %dx,0x8(%eax)
 81d720f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7212:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 81d7218:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d721f:	00 
 81d7220:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 81d7226:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d722a:	89 14 24             	mov    %edx,(%esp)
 81d722d:	e8 08 bb 4a 00       	call   8682d3a <_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE>
 81d7232:	eb 09                	jmp    81d723d <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x749>
 81d7234:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81d7237:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81d723a:	89 50 04             	mov    %edx,0x4(%eax)
 81d723d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d7242:	eb 1b                	jmp    81d725f <_ZN34Dispather_RegenerationRandomOption7processEP5CUserR8MSG_BASER9ParamBase+0x76b>
 81d7244:	89 d3                	mov    %edx,%ebx
 81d7246:	89 c6                	mov    %eax,%esi
 81d7248:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81d724b:	89 04 24             	mov    %eax,(%esp)
 81d724e:	e8 8d 09 53 00       	call   8707be0 <_ZNSsD1Ev>
 81d7253:	89 f0                	mov    %esi,%eax
 81d7255:	89 da                	mov    %ebx,%edx
 81d7257:	89 04 24             	mov    %eax,(%esp)
 81d725a:	e8 f1 c4 90 00       	call   8ae3750 <_Unwind_Resume>
 81d725f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81d7262:	89 04 24             	mov    %eax,(%esp)
 81d7265:	e8 76 09 53 00       	call   8707be0 <_ZNSsD1Ev>
 81d726a:	89 d8                	mov    %ebx,%eax
 81d726c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81d726f:	83 c4 00             	add    $0x0,%esp
 81d7272:	5b                   	pop    %ebx
 81d7273:	5e                   	pop    %esi
 81d7274:	5f                   	pop    %edi
 81d7275:	5d                   	pop    %ebp
 81d7276:	c3                   	ret
 81d7277:	90                   	nop

```

```c
// Dispather_RegenerationRandomOption::process @ 0x81d6af4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispather_RegenerationRandomOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispather_RegenerationRandomOption::process
          (Dispather_RegenerationRandomOption *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this_00;
  CItem *pCVar5;
  ServiceRestrictManager *pSVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  CInventory *pCVar13;
  Inven_Item *this_01;
  int iVar14;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  Inven_Item local_110;
  Inven_Item local_107 [8];
  undefined4 auStack_ff [7];
  RandomOption aRStack_e2 [3];
  undefined4 auStack_df [3];
  Inven_Item aIStack_d3 [4];
  Inven_Item aIStack_cf [4];
  Inven_Item aIStack_cb [62];
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined1 local_51;
  uint local_50;
  string local_4c [4];
  CItem *local_48 [2];
  MSG_BASE *local_40;
  ParamBase *local_3c;
  undefined1 local_36;
  uchar local_35;
  int local_34;
  int local_30;
  int local_2c;
  CInventory *local_28;
  int local_24;
  uint local_20;
  
  local_40 = param_2;
  local_3c = param_3;
  *(undefined4 *)(param_3 + 4) = 0;
  this_01 = local_107;
  for (iVar14 = 1; iVar14 != -1; iVar14 = iVar14 + -1) {
    Inven_Item::Inven_Item(this_01);
    this_01 = this_01 + 0x3d;
  }
  local_36 = 1;
  local_35 = 0;
  for (local_30 = 0; iVar14 = local_30, local_30 < 2; local_30 = local_30 + 1) {
    iVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar14 = iVar14 * 0x3d;
    CInventory::GetInvenSlot((int)&local_14c,iVar9);
    *(undefined4 *)(local_107 + iVar14) = local_14c;
    *(undefined4 *)(local_107 + iVar14 + 4) = local_148;
    *(undefined4 *)((int)auStack_ff + iVar14) = local_144;
    *(undefined4 *)((int)auStack_ff + iVar14 + 4) = local_140;
    *(undefined4 *)((int)auStack_ff + iVar14 + 8) = local_13c;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0xc) = local_138;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0x10) = local_134;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0x14) = local_130;
    *(undefined4 *)((int)auStack_ff + iVar14 + 0x18) = local_12c;
    *(undefined4 *)(&stack0xffffff1d + iVar14) = local_128;
    *(undefined4 *)((int)auStack_df + iVar14) = local_124;
    *(undefined4 *)((int)auStack_df + iVar14 + 4) = local_120;
    *(undefined4 *)((int)auStack_df + iVar14 + 8) = local_11c;
    *(undefined4 *)(aIStack_cb + iVar14 + -8) = local_118;
    *(undefined4 *)(aIStack_cb + iVar14 + -4) = local_114;
    aIStack_cb[iVar14] = local_110;
    cVar4 = Inven_Item::isEmpty(local_107 + local_30 * 0x3d);
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    cVar4 = Inven_Item::isEquipableItemType(local_107 + local_30 * 0x3d);
    if (cVar4 != '\x01') {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    cVar4 = RandomOption::empty(aRStack_e2 + local_30 * 0x3d);
    iVar14 = local_30;
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    iVar9 = *(int *)(local_107 + local_30 * 0x3d + 2);
    this_00 = (CDataManager *)G_CDataManager();
    pCVar5 = (CItem *)CDataManager::find_item(this_00,iVar9);
    local_48[iVar14] = pCVar5;
    if ((local_48[local_30] == (CItem *)0x0) ||
       (cVar4 = (**(code **)(*(int *)local_48[local_30] + 0x4c))(local_48[local_30]),
       cVar4 != '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(undefined4 *)(local_3c + 4) = 0x13;
      return 0;
    }
    pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar4 = ServiceRestrictManager::isRestricted(pSVar6,param_1,1,0x10);
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0xd1;
      return 0;
    }
    local_2c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1b);
    if (local_2c != 0) {
      *(int *)(local_3c + 4) = local_2c;
      return 0;
    }
    cVar4 = CUser::CheckItemLock(param_1,1,(int)*(short *)(local_40 + local_30 * 2 + 0xd));
    if (cVar4 != '\0') {
      *(undefined4 *)(local_3c + 4) = 0xd5;
      return 0;
    }
    if (local_107[local_30 * 0x3d] != (Inven_Item)0x1) {
      local_36 = 0;
    }
  }
  uVar7 = Inven_Item::GetReSealCount(local_107);
  uVar8 = Inven_Item::GetReSealCount(aIStack_cb + 1);
  local_35 = (uchar)(short)ROUND(_DAT_08bd634c +
                                 (float)((uVar7 & 0xff) + (uVar8 & 0xff)) / _DAT_08bd6348);
  std::string::string(local_4c);
  Inven_Item::Inven_Item((Inven_Item *)&local_8d);
  local_50 = 0;
  local_34 = 0;
  sVar1 = *(short *)(local_40 + 0x13);
  sVar2 = *(short *)(local_40 + 0x11);
  iVar14 = CItem::getUsableLevel(local_48[1]);
  iVar9 = CItem::getUsableLevel(local_48[0]);
                    /* try { // try from 081d6ef0 to 081d7231 has its CatchHandler @ 081d7244 */
  iVar10 = G_CDataManager();
  local_34 = RegenerationROI::Regenerate
                       ((RegenerationROI *)(iVar10 + 0x5040),iVar9,iVar14,(int)sVar2,(int)sVar1,
                        (int *)&local_50,(Inven_Item *)&local_8d,param_1);
  if (local_34 == 0) {
    uVar11 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
    uVar12 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
    statistc_proxy::add(param_1,"log_random_option","regen_cnt",1,"%d,\'%s\'",uVar12,uVar11);
    if (0 < (int)local_50) {
      uVar11 = CSystemTime::getCurDate((CSystemTime *)GlobalData::s_systemTime_);
      uVar12 = CUserCharacInfo::get_charac_10_level_section((CUserCharacInfo *)param_1);
      statistc_proxy::add(param_1,"log_random_option","regen_gold",local_50,"%d,\'%s\'",uVar12,
                          uVar11);
    }
    uVar7 = local_50;
    pCVar13 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar4 = CInventory::use_money(pCVar13,uVar7,0x2f,1);
    if (cVar4 == '\x01') {
      CUser::SendUpdateItemList(param_1,1,0,0);
      local_28 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
        cVar4 = CInventory::delete_item
                          (local_28,1,(int)*(short *)(local_40 + local_20 * 2 + 0xd),1,0x2e,1);
        if (cVar4 != '\x01') {
          *(undefined4 *)(local_3c + 4) = 0x13;
          goto LAB_081d725f;
        }
      }
      CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)(local_40 + 0xd));
      CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)(local_40 + 0xf));
      local_8d = CONCAT31(local_8d._1_3_,local_36);
      Inven_Item::SetReSealCount((Inven_Item *)&local_8d,local_35);
      uVar11 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_24 = CInventory::insertItemIntoInventory
                           (uVar11,local_8d,local_89,local_85,local_81,local_7d,local_79,local_75,
                            local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,local_55,
                            local_51,0x36,1,1);
      if (-1 < local_24) {
        CUser::SendUpdateItemList(param_1,1,0,local_24);
        *(short *)(local_3c + 8) = (short)local_24;
      }
      cUserHistoryLog::RandomOption((cUserHistoryLog *)(param_1 + 0x79700),&local_8d,1);
    }
    else {
      *(undefined4 *)(local_3c + 4) = 10;
    }
  }
  else {
    *(int *)(local_3c + 4) = local_34;
  }
LAB_081d725f:
  std::string::~string(local_4c);
  return 0;
}

```

---

## read

```asm
// === 081d69d2 Dispather_RegenerationRandomOption::read  [0x081d69d2-0x81d6af3] ===
 81d69d2:	55                   	push   %ebp
 81d69d3:	89 e5                	mov    %esp,%ebp
 81d69d5:	83 ec 28             	sub    $0x28,%esp
 81d69d8:	8b 45 10             	mov    0x10(%ebp),%eax
 81d69db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d69de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d69e1:	83 c0 0d             	add    $0xd,%eax
 81d69e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d69e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d69eb:	89 04 24             	mov    %eax,(%esp)
 81d69ee:	e8 cd 65 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d69f3:	83 f0 01             	xor    $0x1,%eax
 81d69f6:	84 c0                	test   %al,%al
 81d69f8:	74 29                	je     81d6a23 <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0x51>
 81d69fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d6a01:	00 
 81d6a02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d6a09:	00 
 81d6a0a:	c7 44 24 04 e0 29 bd 	movl   $0x8bd29e0,0x4(%esp)
 81d6a11:	08 
 81d6a12:	c7 04 24 d3 40 00 00 	movl   $0x40d3,(%esp)
 81d6a19:	e8 b9 9e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6a1e:	e9 ce 00 00 00       	jmp    81d6af1 <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0x11f>
 81d6a23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d6a26:	83 c0 0f             	add    $0xf,%eax
 81d6a29:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6a2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6a30:	89 04 24             	mov    %eax,(%esp)
 81d6a33:	e8 88 65 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d6a38:	83 f0 01             	xor    $0x1,%eax
 81d6a3b:	84 c0                	test   %al,%al
 81d6a3d:	74 29                	je     81d6a68 <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0x96>
 81d6a3f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d6a46:	00 
 81d6a47:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d6a4e:	00 
 81d6a4f:	c7 44 24 04 e0 29 bd 	movl   $0x8bd29e0,0x4(%esp)
 81d6a56:	08 
 81d6a57:	c7 04 24 d6 40 00 00 	movl   $0x40d6,(%esp)
 81d6a5e:	e8 74 9e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6a63:	e9 89 00 00 00       	jmp    81d6af1 <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0x11f>
 81d6a68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d6a6b:	83 c0 11             	add    $0x11,%eax
 81d6a6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6a72:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6a75:	89 04 24             	mov    %eax,(%esp)
 81d6a78:	e8 43 65 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d6a7d:	83 f0 01             	xor    $0x1,%eax
 81d6a80:	84 c0                	test   %al,%al
 81d6a82:	74 26                	je     81d6aaa <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0xd8>
 81d6a84:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d6a8b:	00 
 81d6a8c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d6a93:	00 
 81d6a94:	c7 44 24 04 e0 29 bd 	movl   $0x8bd29e0,0x4(%esp)
 81d6a9b:	08 
 81d6a9c:	c7 04 24 da 40 00 00 	movl   $0x40da,(%esp)
 81d6aa3:	e8 2f 9e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6aa8:	eb 47                	jmp    81d6af1 <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0x11f>
 81d6aaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d6aad:	83 c0 13             	add    $0x13,%eax
 81d6ab0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d6ab4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d6ab7:	89 04 24             	mov    %eax,(%esp)
 81d6aba:	e8 01 65 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d6abf:	83 f0 01             	xor    $0x1,%eax
 81d6ac2:	84 c0                	test   %al,%al
 81d6ac4:	74 26                	je     81d6aec <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0x11a>
 81d6ac6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d6acd:	00 
 81d6ace:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d6ad5:	00 
 81d6ad6:	c7 44 24 04 e0 29 bd 	movl   $0x8bd29e0,0x4(%esp)
 81d6add:	08 
 81d6ade:	c7 04 24 dd 40 00 00 	movl   $0x40dd,(%esp)
 81d6ae5:	e8 ed 9d 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d6aea:	eb 05                	jmp    81d6af1 <_ZN34Dispather_RegenerationRandomOption4readER9PacketBufR8MSG_BASE+0x11f>
 81d6aec:	b8 00 00 00 00       	mov    $0x0,%eax
 81d6af1:	c9                   	leave
 81d6af2:	c3                   	ret
 81d6af3:	90                   	nop

```

```c
// Dispather_RegenerationRandomOption::read @ 0x81d69d2

/* Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispather_RegenerationRandomOption::read
          (Dispather_RegenerationRandomOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x13));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x40dd,
                           "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x40da,
                         "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x40d6,
                       "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x40d3,
                     "virtual int Dispather_RegenerationRandomOption::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d7278 Dispather_RegenerationRandomOption::send  [0x081d7278-0x81d735d] ===
 81d7278:	55                   	push   %ebp
 81d7279:	89 e5                	mov    %esp,%ebp
 81d727b:	56                   	push   %esi
 81d727c:	53                   	push   %ebx
 81d727d:	83 ec 20             	sub    $0x20,%esp
 81d7280:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7283:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7286:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d7289:	89 04 24             	mov    %eax,(%esp)
 81d728c:	e8 bb 6a 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d7291:	c7 44 24 08 97 01 00 	movl   $0x197,0x8(%esp)
 81d7298:	00 
 81d7299:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d72a0:	00 
 81d72a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d72a4:	89 04 24             	mov    %eax,(%esp)
 81d72a7:	e8 50 46 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d72ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d72af:	8b 40 04             	mov    0x4(%eax),%eax
 81d72b2:	85 c0                	test   %eax,%eax
 81d72b4:	75 2c                	jne    81d72e2 <_ZN34Dispather_RegenerationRandomOption4sendEP5CUserR9ParamBase+0x6a>
 81d72b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d72bd:	00 
 81d72be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d72c1:	89 04 24             	mov    %eax,(%esp)
 81d72c4:	e8 57 46 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d72c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d72cc:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81d72d0:	98                   	cwtl
 81d72d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d72d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d72d8:	89 04 24             	mov    %eax,(%esp)
 81d72db:	e8 c4 2b f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d72e0:	eb 28                	jmp    81d730a <_ZN34Dispather_RegenerationRandomOption4sendEP5CUserR9ParamBase+0x92>
 81d72e2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d72e9:	00 
 81d72ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d72ed:	89 04 24             	mov    %eax,(%esp)
 81d72f0:	e8 2b 46 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d72f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d72f8:	8b 40 04             	mov    0x4(%eax),%eax
 81d72fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d72ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d7302:	89 04 24             	mov    %eax,(%esp)
 81d7305:	e8 32 46 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d730a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7311:	00 
 81d7312:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d7315:	89 04 24             	mov    %eax,(%esp)
 81d7318:	e8 3b 46 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d731d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d7320:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7324:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7327:	89 04 24             	mov    %eax,(%esp)
 81d732a:	e8 8b 12 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d732f:	eb 1b                	jmp    81d734c <_ZN34Dispather_RegenerationRandomOption4sendEP5CUserR9ParamBase+0xd4>
 81d7331:	89 d3                	mov    %edx,%ebx
 81d7333:	89 c6                	mov    %eax,%esi
 81d7335:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d7338:	89 04 24             	mov    %eax,(%esp)
 81d733b:	e8 40 6b 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7340:	89 f0                	mov    %esi,%eax
 81d7342:	89 da                	mov    %ebx,%edx
 81d7344:	89 04 24             	mov    %eax,(%esp)
 81d7347:	e8 04 c4 90 00       	call   8ae3750 <_Unwind_Resume>
 81d734c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d734f:	89 04 24             	mov    %eax,(%esp)
 81d7352:	e8 29 6b 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7357:	83 c4 20             	add    $0x20,%esp
 81d735a:	5b                   	pop    %ebx
 81d735b:	5e                   	pop    %esi
 81d735c:	5d                   	pop    %ebp
 81d735d:	c3                   	ret

```

```c
// Dispather_RegenerationRandomOption::send @ 0x81d7278

/* Dispather_RegenerationRandomOption::send(CUser*, ParamBase&) */

void __thiscall
Dispather_RegenerationRandomOption::send
          (Dispather_RegenerationRandomOption *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d72a7 to 081d732e has its CatchHandler @ 081d7331 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x197);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 8));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

