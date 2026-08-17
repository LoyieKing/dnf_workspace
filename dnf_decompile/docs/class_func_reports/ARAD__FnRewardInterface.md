# ARAD__FnRewardInterface

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## make_data

```asm
// === 08194e58 ARAD::FnRewardInterface::make_data  [0x08194e58-0x8194ee1] ===
 8194e58:	55                   	push   %ebp
 8194e59:	89 e5                	mov    %esp,%ebp
 8194e5b:	56                   	push   %esi
 8194e5c:	53                   	push   %ebx
 8194e5d:	83 ec 10             	sub    $0x10,%esp
 8194e60:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8194e63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8194e66:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8194e6a:	84 c0                	test   %al,%al
 8194e6c:	74 3f                	je     8194ead <_ZN4ARAD17FnRewardInterface9make_dataEi+0x55>
 8194e6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8194e71:	8b 40 04             	mov    0x4(%eax),%eax
 8194e74:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8194e7b:	ff 
 8194e7c:	89 04 24             	mov    %eax,(%esp)
 8194e7f:	e8 1c 91 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8194e84:	89 c6                	mov    %eax,%esi
 8194e86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8194e89:	8b 40 04             	mov    0x4(%eax),%eax
 8194e8c:	89 04 24             	mov    %eax,(%esp)
 8194e8f:	e8 da 54 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8194e94:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8194e98:	89 44 24 08          	mov    %eax,0x8(%esp)
 8194e9c:	8b 45 10             	mov    0x10(%ebp),%eax
 8194e9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194ea3:	89 1c 24             	mov    %ebx,(%esp)
 8194ea6:	e8 e9 0e 00 00       	call   8195d94 <_ZN4ARAD19EventRewardItemAradC1Eijj>
 8194eab:	eb 29                	jmp    8194ed6 <_ZN4ARAD17FnRewardInterface9make_dataEi+0x7e>
 8194ead:	8b 45 0c             	mov    0xc(%ebp),%eax
 8194eb0:	8b 40 04             	mov    0x4(%eax),%eax
 8194eb3:	89 04 24             	mov    %eax,(%esp)
 8194eb6:	e8 b3 54 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8194ebb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8194ec2:	00 
 8194ec3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8194ec7:	8b 45 10             	mov    0x10(%ebp),%eax
 8194eca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194ece:	89 1c 24             	mov    %ebx,(%esp)
 8194ed1:	e8 be 0e 00 00       	call   8195d94 <_ZN4ARAD19EventRewardItemAradC1Eijj>
 8194ed6:	89 d8                	mov    %ebx,%eax
 8194ed8:	83 c4 10             	add    $0x10,%esp
 8194edb:	5b                   	pop    %ebx
 8194edc:	5e                   	pop    %esi
 8194edd:	5d                   	pop    %ebp
 8194ede:	c2 04 00             	ret    $0x4
 8194ee1:	90                   	nop

```

```c
// ARAD::FnRewardInterface::make_data @ 0x8194e58

/* ARAD::FnRewardInterface::make_data(int) */

int ARAD::FnRewardInterface::make_data(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (*(char *)(in_stack_00000008 + 8) == '\0') {
    uVar1 = CUser::get_acc_id(*(CUser **)(in_stack_00000008 + 4));
    EventRewardItemArad::EventRewardItemArad
              ((EventRewardItemArad *)param_1,in_stack_0000000c,uVar1,0);
  }
  else {
    uVar1 = CUser::get_charac_no(*(CUser **)(in_stack_00000008 + 4),-1);
    uVar2 = CUser::get_acc_id(*(CUser **)(in_stack_00000008 + 4));
    EventRewardItemArad::EventRewardItemArad
              ((EventRewardItemArad *)param_1,in_stack_0000000c,uVar2,uVar1);
  }
  return param_1;
}

```

---

## operator

```asm
// === 08194ac8 ARAD::FnRewardInterface::operator  [0x08194ac8-0x8194e57] ===
 8194ac8:	55                   	push   %ebp
 8194ac9:	89 e5                	mov    %esp,%ebp
 8194acb:	57                   	push   %edi
 8194acc:	56                   	push   %esi
 8194acd:	53                   	push   %ebx
 8194ace:	81 ec dc 01 00 00    	sub    $0x1dc,%esp
 8194ad4:	8b 45 14             	mov    0x14(%ebp),%eax
 8194ad7:	66 89 85 54 fe ff ff 	mov    %ax,-0x1ac(%ebp)
 8194ade:	8b 45 08             	mov    0x8(%ebp),%eax
 8194ae1:	8b 40 04             	mov    0x4(%eax),%eax
 8194ae4:	85 c0                	test   %eax,%eax
 8194ae6:	74 1a                	je     8194b02 <_ZN4ARAD17FnRewardInterfaceclEimsj+0x3a>
 8194ae8:	8b 45 08             	mov    0x8(%ebp),%eax
 8194aeb:	8b 40 04             	mov    0x4(%eax),%eax
 8194aee:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8194af5:	ff 
 8194af6:	89 04 24             	mov    %eax,(%esp)
 8194af9:	e8 a2 94 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8194afe:	85 c0                	test   %eax,%eax
 8194b00:	75 07                	jne    8194b09 <_ZN4ARAD17FnRewardInterfaceclEimsj+0x41>
 8194b02:	b8 01 00 00 00       	mov    $0x1,%eax
 8194b07:	eb 05                	jmp    8194b0e <_ZN4ARAD17FnRewardInterfaceclEimsj+0x46>
 8194b09:	b8 00 00 00 00       	mov    $0x0,%eax
 8194b0e:	84 c0                	test   %al,%al
 8194b10:	74 0a                	je     8194b1c <_ZN4ARAD17FnRewardInterfaceclEimsj+0x54>
 8194b12:	bb 00 00 00 00       	mov    $0x0,%ebx
 8194b17:	e9 2f 03 00 00       	jmp    8194e4b <_ZN4ARAD17FnRewardInterfaceclEimsj+0x383>
 8194b1c:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 8194b22:	89 04 24             	mov    %eax,(%esp)
 8194b25:	e8 2a 6d f3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8194b2a:	0f bf 85 54 fe ff ff 	movswl -0x1ac(%ebp),%eax
 8194b31:	8d 95 63 ff ff ff    	lea    -0x9d(%ebp),%edx
 8194b37:	89 54 24 08          	mov    %edx,0x8(%esp)
 8194b3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194b3f:	8b 45 10             	mov    0x10(%ebp),%eax
 8194b42:	89 04 24             	mov    %eax,(%esp)
 8194b45:	e8 2b 28 00 00       	call   8197375 <_ZN4ARAD9ARAD_ITEM14arad_make_itemEmiR10Inven_Item>
 8194b4a:	83 f0 01             	xor    $0x1,%eax
 8194b4d:	84 c0                	test   %al,%al
 8194b4f:	74 0a                	je     8194b5b <_ZN4ARAD17FnRewardInterfaceclEimsj+0x93>
 8194b51:	bb 00 00 00 00       	mov    $0x0,%ebx
 8194b56:	e9 f0 02 00 00       	jmp    8194e4b <_ZN4ARAD17FnRewardInterfaceclEimsj+0x383>
 8194b5b:	8d 95 63 fe ff ff    	lea    -0x19d(%ebp),%edx
 8194b61:	bb 00 01 00 00       	mov    $0x100,%ebx
 8194b66:	b8 00 00 00 00       	mov    $0x0,%eax
 8194b6b:	89 d1                	mov    %edx,%ecx
 8194b6d:	83 e1 01             	and    $0x1,%ecx
 8194b70:	85 c9                	test   %ecx,%ecx
 8194b72:	74 08                	je     8194b7c <_ZN4ARAD17FnRewardInterfaceclEimsj+0xb4>
 8194b74:	88 02                	mov    %al,(%edx)
 8194b76:	83 c2 01             	add    $0x1,%edx
 8194b79:	83 eb 01             	sub    $0x1,%ebx
 8194b7c:	89 d1                	mov    %edx,%ecx
 8194b7e:	83 e1 02             	and    $0x2,%ecx
 8194b81:	85 c9                	test   %ecx,%ecx
 8194b83:	74 09                	je     8194b8e <_ZN4ARAD17FnRewardInterfaceclEimsj+0xc6>
 8194b85:	66 89 02             	mov    %ax,(%edx)
 8194b88:	83 c2 02             	add    $0x2,%edx
 8194b8b:	83 eb 02             	sub    $0x2,%ebx
 8194b8e:	89 d9                	mov    %ebx,%ecx
 8194b90:	c1 e9 02             	shr    $0x2,%ecx
 8194b93:	89 d7                	mov    %edx,%edi
 8194b95:	f3 ab                	rep stos %eax,%es:(%edi)
 8194b97:	89 fa                	mov    %edi,%edx
 8194b99:	89 d9                	mov    %ebx,%ecx
 8194b9b:	83 e1 02             	and    $0x2,%ecx
 8194b9e:	85 c9                	test   %ecx,%ecx
 8194ba0:	74 06                	je     8194ba8 <_ZN4ARAD17FnRewardInterfaceclEimsj+0xe0>
 8194ba2:	66 89 02             	mov    %ax,(%edx)
 8194ba5:	83 c2 02             	add    $0x2,%edx
 8194ba8:	89 d9                	mov    %ebx,%ecx
 8194baa:	83 e1 01             	and    $0x1,%ecx
 8194bad:	85 c9                	test   %ecx,%ecx
 8194baf:	74 05                	je     8194bb6 <_ZN4ARAD17FnRewardInterfaceclEimsj+0xee>
 8194bb1:	88 02                	mov    %al,(%edx)
 8194bb3:	83 c2 01             	add    $0x1,%edx
 8194bb6:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8194bb9:	ba 15 00 00 00       	mov    $0x15,%edx
 8194bbe:	b9 00 00 00 00       	mov    $0x0,%ecx
 8194bc3:	89 c3                	mov    %eax,%ebx
 8194bc5:	83 e3 01             	and    $0x1,%ebx
 8194bc8:	85 db                	test   %ebx,%ebx
 8194bca:	74 08                	je     8194bd4 <_ZN4ARAD17FnRewardInterfaceclEimsj+0x10c>
 8194bcc:	88 08                	mov    %cl,(%eax)
 8194bce:	83 c0 01             	add    $0x1,%eax
 8194bd1:	83 ea 01             	sub    $0x1,%edx
 8194bd4:	89 c3                	mov    %eax,%ebx
 8194bd6:	83 e3 02             	and    $0x2,%ebx
 8194bd9:	85 db                	test   %ebx,%ebx
 8194bdb:	74 09                	je     8194be6 <_ZN4ARAD17FnRewardInterfaceclEimsj+0x11e>
 8194bdd:	66 89 08             	mov    %cx,(%eax)
 8194be0:	83 c0 02             	add    $0x2,%eax
 8194be3:	83 ea 02             	sub    $0x2,%edx
 8194be6:	89 d6                	mov    %edx,%esi
 8194be8:	83 e6 fc             	and    $0xfffffffc,%esi
 8194beb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8194bf0:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 8194bf3:	83 c3 04             	add    $0x4,%ebx
 8194bf6:	39 f3                	cmp    %esi,%ebx
 8194bf8:	72 f6                	jb     8194bf0 <_ZN4ARAD17FnRewardInterfaceclEimsj+0x128>
 8194bfa:	01 d8                	add    %ebx,%eax
 8194bfc:	89 d3                	mov    %edx,%ebx
 8194bfe:	83 e3 02             	and    $0x2,%ebx
 8194c01:	85 db                	test   %ebx,%ebx
 8194c03:	74 06                	je     8194c0b <_ZN4ARAD17FnRewardInterfaceclEimsj+0x143>
 8194c05:	66 89 08             	mov    %cx,(%eax)
 8194c08:	83 c0 02             	add    $0x2,%eax
 8194c0b:	83 e2 01             	and    $0x1,%edx
 8194c0e:	85 d2                	test   %edx,%edx
 8194c10:	74 05                	je     8194c17 <_ZN4ARAD17FnRewardInterfaceclEimsj+0x14f>
 8194c12:	88 08                	mov    %cl,(%eax)
 8194c14:	83 c0 01             	add    $0x1,%eax
 8194c17:	8b 45 08             	mov    0x8(%ebp),%eax
 8194c1a:	8b 00                	mov    (%eax),%eax
 8194c1c:	8b 10                	mov    (%eax),%edx
 8194c1e:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8194c21:	89 44 24 08          	mov    %eax,0x8(%esp)
 8194c25:	8d 85 63 fe ff ff    	lea    -0x19d(%ebp),%eax
 8194c2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194c2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8194c32:	89 04 24             	mov    %eax,(%esp)
 8194c35:	ff d2                	call   *%edx
 8194c37:	8b 45 08             	mov    0x8(%ebp),%eax
 8194c3a:	8b 40 04             	mov    0x4(%eax),%eax
 8194c3d:	89 04 24             	mov    %eax,(%esp)
 8194c40:	e8 4b 70 f3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8194c45:	89 c3                	mov    %eax,%ebx
 8194c47:	8d 85 63 fe ff ff    	lea    -0x19d(%ebp),%eax
 8194c4d:	89 04 24             	mov    %eax,(%esp)
 8194c50:	e8 5b 97 ee ff       	call   807e3b0 <strlen@plt>
 8194c55:	89 c6                	mov    %eax,%esi
 8194c57:	8b 45 08             	mov    0x8(%ebp),%eax
 8194c5a:	8b 40 04             	mov    0x4(%eax),%eax
 8194c5d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8194c64:	ff 
 8194c65:	89 04 24             	mov    %eax,(%esp)
 8194c68:	e8 33 93 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8194c6d:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8194c74:	00 
 8194c75:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8194c7c:	00 
 8194c7d:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8194c81:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 8194c88:	00 
 8194c89:	89 74 24 14          	mov    %esi,0x14(%esp)
 8194c8d:	8d 95 63 fe ff ff    	lea    -0x19d(%ebp),%edx
 8194c93:	89 54 24 10          	mov    %edx,0x10(%esp)
 8194c97:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8194c9b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8194ca2:	00 
 8194ca3:	8d 85 63 ff ff ff    	lea    -0x9d(%ebp),%eax
 8194ca9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194cad:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8194cb0:	89 04 24             	mov    %eax,(%esp)
 8194cb3:	e8 30 09 3c 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8194cb8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8194cbb:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8194cbf:	74 69                	je     8194d2a <_ZN4ARAD17FnRewardInterfaceclEimsj+0x262>
 8194cc1:	0f bf 9d 54 fe ff ff 	movswl -0x1ac(%ebp),%ebx
 8194cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8194ccb:	8b 40 04             	mov    0x4(%eax),%eax
 8194cce:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8194cd5:	ff 
 8194cd6:	89 04 24             	mov    %eax,(%esp)
 8194cd9:	e8 c2 92 4b 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8194cde:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8194ce2:	8b 55 10             	mov    0x10(%ebp),%edx
 8194ce5:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8194ce9:	89 44 24 18          	mov    %eax,0x18(%esp)
 8194ced:	8b 45 0c             	mov    0xc(%ebp),%eax
 8194cf0:	89 44 24 14          	mov    %eax,0x14(%esp)
 8194cf4:	c7 44 24 10 60 bb b9 	movl   $0x8b9bb60,0x10(%esp)
 8194cfb:	08 
 8194cfc:	c7 44 24 0c 2f 00 00 	movl   $0x2f,0xc(%esp)
 8194d03:	00 
 8194d04:	c7 44 24 08 e0 c9 b9 	movl   $0x8b9c9e0,0x8(%esp)
 8194d0b:	08 
 8194d0c:	c7 44 24 04 a4 bb b9 	movl   $0x8b9bba4,0x4(%esp)
 8194d13:	08 
 8194d14:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8194d1b:	e8 ea ee 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8194d20:	bb 00 00 00 00       	mov    $0x0,%ebx
 8194d25:	e9 21 01 00 00       	jmp    8194e4b <_ZN4ARAD17FnRewardInterfaceclEimsj+0x383>
 8194d2a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8194d2d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8194d30:	89 54 24 08          	mov    %edx,0x8(%esp)
 8194d34:	8b 55 08             	mov    0x8(%ebp),%edx
 8194d37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8194d3b:	89 04 24             	mov    %eax,(%esp)
 8194d3e:	e8 15 01 00 00       	call   8194e58 <_ZN4ARAD17FnRewardInterface9make_dataEi>
 8194d43:	83 ec 04             	sub    $0x4,%esp
 8194d46:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8194d49:	89 04 24             	mov    %eax,(%esp)
 8194d4c:	e8 83 0f 00 00       	call   8195cd4 <_ZN4arad22SigSaveRewardEventItemC1Ev>
 8194d51:	0f bf 8d 54 fe ff ff 	movswl -0x1ac(%ebp),%ecx
 8194d58:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8194d5b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8194d5e:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8194d61:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8194d65:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8194d69:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8194d6c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8194d70:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8194d74:	89 44 24 08          	mov    %eax,0x8(%esp)
 8194d78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8194d7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194d7f:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8194d82:	89 04 24             	mov    %eax,(%esp)
 8194d85:	e8 a2 0f 00 00       	call   8195d2c <_ZN4arad22SigSaveRewardEventItem3setEijjmsj>
 8194d8a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8194d8f:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 8194d96:	00 
 8194d97:	c7 44 24 04 a4 bb b9 	movl   $0x8b9bba4,0x4(%esp)
 8194d9e:	08 
 8194d9f:	89 04 24             	mov    %eax,(%esp)
 8194da2:	e8 df ac 0f 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8194da7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8194dae:	00 
 8194daf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8194db3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8194db6:	89 04 24             	mov    %eax,(%esp)
 8194db9:	e8 68 3e f3 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8194dbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8194dc1:	8b 40 04             	mov    0x4(%eax),%eax
 8194dc4:	89 04 24             	mov    %eax,(%esp)
 8194dc7:	e8 ca 3e f3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8194dcc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8194dd0:	c7 44 24 04 27 00 00 	movl   $0x27,0x4(%esp)
 8194dd7:	00 
 8194dd8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8194ddb:	89 04 24             	mov    %eax,(%esp)
 8194dde:	e8 d3 29 00 00       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 8194de3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8194de6:	89 04 24             	mov    %eax,(%esp)
 8194de9:	e8 60 3e f3 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8194dee:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8194df5:	00 
 8194df6:	8d 55 aa             	lea    -0x56(%ebp),%edx
 8194df9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8194dfd:	89 04 24             	mov    %eax,(%esp)
 8194e00:	e8 4d 98 f4 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8194e05:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8194e0a:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8194e0d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8194e11:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8194e18:	00 
 8194e19:	89 04 24             	mov    %eax,(%esp)
 8194e1c:	e8 bd c1 3d 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8194e21:	89 c3                	mov    %eax,%ebx
 8194e23:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8194e26:	89 04 24             	mov    %eax,(%esp)
 8194e29:	e8 a4 7a 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8194e2e:	eb 1b                	jmp    8194e4b <_ZN4ARAD17FnRewardInterfaceclEimsj+0x383>
 8194e30:	89 d3                	mov    %edx,%ebx
 8194e32:	89 c6                	mov    %eax,%esi
 8194e34:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8194e37:	89 04 24             	mov    %eax,(%esp)
 8194e3a:	e8 93 7a 48 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8194e3f:	89 f0                	mov    %esi,%eax
 8194e41:	89 da                	mov    %ebx,%edx
 8194e43:	89 04 24             	mov    %eax,(%esp)
 8194e46:	e8 05 e9 94 00       	call   8ae3750 <_Unwind_Resume>
 8194e4b:	89 d8                	mov    %ebx,%eax
 8194e4d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8194e50:	83 c4 00             	add    $0x0,%esp
 8194e53:	5b                   	pop    %ebx
 8194e54:	5e                   	pop    %esi
 8194e55:	5f                   	pop    %edi
 8194e56:	5d                   	pop    %ebp
 8194e57:	c3                   	ret

```

```c
// ARAD::FnRewardInterface::operator @ 0x8194ac8

/* ARAD::FnRewardInterface::TEMPNAMEPLACEHOLDERVALUE(int, unsigned long, short, unsigned int) */

undefined4 __thiscall
ARAD::FnRewardInterface::operator()
          (FnRewardInterface *this,int param_1,ulong param_2,short param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  size_t sVar4;
  undefined4 uVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_1a1;
  char local_1a0 [255];
  Inven_Item local_a1 [61];
  CStreamGuard local_64 [10];
  SigSaveRewardEventItem local_5a [22];
  undefined1 local_44 [4];
  uint local_40;
  uint local_3c;
  undefined1 local_35 [21];
  int local_20;
  
  bVar12 = 0;
  if (*(int *)(this + 4) != 0) {
    iVar2 = CUser::get_charac_no(*(CUser **)(this + 4),-1);
    if (iVar2 != 0) {
      bVar11 = false;
      goto LAB_08194b0e;
    }
  }
  bVar11 = true;
LAB_08194b0e:
  if (bVar11) {
    uVar9 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_a1);
    cVar1 = ARAD_ITEM::arad_make_item(param_2,(int)param_3,local_a1);
    if (cVar1 == '\x01') {
      pcVar8 = &local_1a1;
      uVar10 = 0x100;
      bVar11 = ((uint)pcVar8 & 1) != 0;
      if (bVar11) {
        local_1a1 = '\0';
        pcVar8 = local_1a0;
        uVar10 = 0xff;
      }
      if (((uint)pcVar8 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
        uVar10 = uVar10 - 2;
      }
      for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if ((uVar10 & 2) != 0) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8 = pcVar8 + 2;
      }
      if (bVar11) {
        *pcVar8 = '\0';
      }
      puVar3 = (undefined2 *)local_35;
      uVar10 = 0x15;
      bVar11 = ((uint)puVar3 & 1) != 0;
      if (bVar11) {
        local_35[0] = 0;
        puVar3 = (undefined2 *)(local_35 + 1);
        uVar10 = 0x14;
      }
      if (((uint)puVar3 & 2) != 0) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
        uVar10 = uVar10 - 2;
      }
      uVar7 = 0;
      do {
        *(undefined4 *)((int)puVar3 + uVar7) = 0;
        uVar7 = uVar7 + 4;
      } while (uVar7 < (uVar10 & 0xfffffffc));
      puVar3 = (undefined2 *)((int)puVar3 + uVar7);
      if ((uVar10 & 2) != 0) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      if (!bVar11) {
        *(undefined1 *)puVar3 = 0;
      }
      (*(code *)**(undefined4 **)this)(this,&local_1a1,local_35);
      uVar9 = CUser::GetServerGroup(*(CUser **)(this + 4));
      sVar4 = strlen(&local_1a1);
      uVar5 = CUser::get_charac_no(*(CUser **)(this + 4),-1);
      local_20 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                           (local_35,local_a1,0,uVar5,&local_1a1,sVar4,0xc,uVar9,0,0);
      if (local_20 == 0) {
        make_data((int)local_44);
        arad::SigSaveRewardEventItem::SigSaveRewardEventItem(local_5a);
        arad::SigSaveRewardEventItem::set
                  (local_5a,param_1,local_40,local_3c,param_2,param_3,param_4);
        pSVar6 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,
                                     "localjapan/Arad_EventPeriodDataManager.cpp",0x36);
        CStreamGuard::CStreamGuard(local_64,pSVar6,true);
        uVar9 = CUser::GetUID(*(CUser **)(this + 4));
                    /* try { // try from 08194dde to 08194e20 has its CatchHandler @ 08194e30 */
        DISPATCHER::make_internal_stream_jpn(local_64,0x27,uVar9);
        this_00 = (CStreamGuard *)CStreamGuard::operator->(local_64);
        CStreamGuard::put_binary(this_00,local_5a,0x16);
        uVar9 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_64);
        CStreamGuard::~CStreamGuard(local_64);
      }
      else {
        uVar9 = CUser::get_charac_no(*(CUser **)(this + 4),-1);
        LogManager::logFormat
                  (1,"localjapan/Arad_EventPeriodDataManager.cpp",
                   "bool ARAD::FnRewardInterface::operator()(int, itemindex_t, short int, arad_uint32)"
                   ,0x2f,"[FnReward] send mail fail. (code:%u, charac:%u, item:%u, cnt:%d)",param_1,
                   uVar9,param_2,(int)param_3);
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0;
    }
  }
  return uVar9;
}

```

