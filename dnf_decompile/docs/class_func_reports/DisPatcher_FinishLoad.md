# DisPatcher_FinishLoad

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Party_hack_check

```asm
// === 08264c28 DisPatcher_FinishLoad::Party_hack_check  [0x08264c28-0x826503b] ===
 8264c28:	55                   	push   %ebp
 8264c29:	89 e5                	mov    %esp,%ebp
 8264c2b:	53                   	push   %ebx
 8264c2c:	81 ec 94 00 00 00    	sub    $0x94,%esp
 8264c32:	c6 45 c0 01          	movb   $0x1,-0x40(%ebp)
 8264c36:	c6 45 c1 01          	movb   $0x1,-0x3f(%ebp)
 8264c3a:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8264c41:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8264c48:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8264c4f:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8264c56:	c6 45 c2 00          	movb   $0x0,-0x3e(%ebp)
 8264c5a:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 8264c5e:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8264c65:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8264c6c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8264c73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264c76:	89 04 24             	mov    %eax,(%esp)
 8264c79:	e8 ce 04 3f 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8264c7e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8264c81:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8264c85:	0f 84 a7 03 00 00    	je     8265032 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x40a>
 8264c8b:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8264c92:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8264c95:	89 04 24             	mov    %eax,(%esp)
 8264c98:	e8 cd 54 33 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8264c9d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8264ca0:	83 7d d4 02          	cmpl   $0x2,-0x2c(%ebp)
 8264ca4:	0f 8e 88 03 00 00    	jle    8265032 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x40a>
 8264caa:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8264cb1:	e9 ed 02 00 00       	jmp    8264fa3 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x37b>
 8264cb6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8264cb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264cbd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8264cc0:	89 04 24             	mov    %eax,(%esp)
 8264cc3:	e8 a0 0b ee ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8264cc8:	83 f0 01             	xor    $0x1,%eax
 8264ccb:	84 c0                	test   %al,%al
 8264ccd:	0f 85 cb 02 00 00    	jne    8264f9e <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x376>
 8264cd3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8264cd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264cda:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8264cdd:	89 04 24             	mov    %eax,(%esp)
 8264ce0:	e8 7f 0a ee ff       	call   8145764 <_ZN6CParty8get_userEi>
 8264ce5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8264ce8:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8264cec:	0f 84 ad 02 00 00    	je     8264f9f <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x377>
 8264cf2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8264cf6:	0f 84 48 01 00 00    	je     8264e44 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x21c>
 8264cfc:	0f be 5d c2          	movsbl -0x3e(%ebp),%ebx
 8264d00:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264d03:	89 04 24             	mov    %eax,(%esp)
 8264d06:	e8 15 92 e9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8264d0b:	39 c3                	cmp    %eax,%ebx
 8264d0d:	75 10                	jne    8264d1f <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0xf7>
 8264d0f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264d12:	89 04 24             	mov    %eax,(%esp)
 8264d15:	e8 7a bf ea ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8264d1a:	3a 45 c3             	cmp    -0x3d(%ebp),%al
 8264d1d:	74 07                	je     8264d26 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0xfe>
 8264d1f:	b8 01 00 00 00       	mov    $0x1,%eax
 8264d24:	eb 05                	jmp    8264d2b <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x103>
 8264d26:	b8 00 00 00 00       	mov    $0x0,%eax
 8264d2b:	84 c0                	test   %al,%al
 8264d2d:	74 0d                	je     8264d3c <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x114>
 8264d2f:	c6 45 c0 00          	movb   $0x0,-0x40(%ebp)
 8264d33:	c6 45 c1 00          	movb   $0x0,-0x3f(%ebp)
 8264d37:	e9 76 02 00 00       	jmp    8264fb2 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x38a>
 8264d3c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8264d43:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8264d4a:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8264d51:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8264d58:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8264d5f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264d62:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 8264d68:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8264d6f:	00 
 8264d70:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8264d73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264d77:	89 14 24             	mov    %edx,(%esp)
 8264d7a:	e8 af da ef ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8264d7f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8264d82:	89 04 24             	mov    %eax,(%esp)
 8264d85:	e8 26 96 e1 ff       	call   807e3b0 <strlen@plt>
 8264d8a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8264d8d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8264d90:	89 44 24 08          	mov    %eax,0x8(%esp)
 8264d94:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8264d97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264d9b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8264d9e:	89 04 24             	mov    %eax,(%esp)
 8264da1:	e8 1a 9b e1 ff       	call   807e8c0 <strncmp@plt>
 8264da6:	85 c0                	test   %eax,%eax
 8264da8:	74 0d                	je     8264db7 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x18f>
 8264daa:	c6 45 c0 00          	movb   $0x0,-0x40(%ebp)
 8264dae:	c6 45 c1 00          	movb   $0x0,-0x3f(%ebp)
 8264db2:	e9 fb 01 00 00       	jmp    8264fb2 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x38a>
 8264db7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8264dbe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264dc1:	89 04 24             	mov    %eax,(%esp)
 8264dc4:	e8 67 a3 fc ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 8264dc9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8264dcc:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8264dd0:	75 0d                	jne    8264ddf <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x1b7>
 8264dd2:	c6 45 c0 00          	movb   $0x0,-0x40(%ebp)
 8264dd6:	c6 45 c1 00          	movb   $0x0,-0x3f(%ebp)
 8264dda:	e9 d3 01 00 00       	jmp    8264fb2 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x38a>
 8264ddf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8264de6:	00 
 8264de7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8264dea:	89 04 24             	mov    %eax,(%esp)
 8264ded:	e8 82 1a 3a 00       	call   8606874 <_ZNK9SkillSlot15get_skill_indexEi>
 8264df2:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 8264df5:	75 30                	jne    8264e27 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x1ff>
 8264df7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8264dfe:	00 
 8264dff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8264e02:	89 04 24             	mov    %eax,(%esp)
 8264e05:	e8 6a 1a 3a 00       	call   8606874 <_ZNK9SkillSlot15get_skill_indexEi>
 8264e0a:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 8264e0d:	75 18                	jne    8264e27 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x1ff>
 8264e0f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8264e16:	00 
 8264e17:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8264e1a:	89 04 24             	mov    %eax,(%esp)
 8264e1d:	e8 52 1a 3a 00       	call   8606874 <_ZNK9SkillSlot15get_skill_indexEi>
 8264e22:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 8264e25:	74 07                	je     8264e2e <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x206>
 8264e27:	b8 01 00 00 00       	mov    $0x1,%eax
 8264e2c:	eb 05                	jmp    8264e33 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x20b>
 8264e2e:	b8 00 00 00 00       	mov    $0x0,%eax
 8264e33:	84 c0                	test   %al,%al
 8264e35:	0f 84 64 01 00 00    	je     8264f9f <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x377>
 8264e3b:	c6 45 c0 00          	movb   $0x0,-0x40(%ebp)
 8264e3f:	e9 5b 01 00 00       	jmp    8264f9f <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x377>
 8264e44:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264e47:	89 04 24             	mov    %eax,(%esp)
 8264e4a:	e8 d1 90 e9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8264e4f:	88 45 c2             	mov    %al,-0x3e(%ebp)
 8264e52:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264e55:	89 04 24             	mov    %eax,(%esp)
 8264e58:	e8 37 be ea ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8264e5d:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8264e60:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8264e67:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 8264e6e:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8264e75:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8264e7c:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8264e83:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8264e8a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8264e91:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264e94:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 8264e9a:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8264ea1:	00 
 8264ea2:	8d 45 90             	lea    -0x70(%ebp),%eax
 8264ea5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264ea9:	89 14 24             	mov    %edx,(%esp)
 8264eac:	e8 7d d9 ef ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8264eb1:	8d 45 90             	lea    -0x70(%ebp),%eax
 8264eb4:	89 04 24             	mov    %eax,(%esp)
 8264eb7:	e8 f4 94 e1 ff       	call   807e3b0 <strlen@plt>
 8264ebc:	83 f8 08             	cmp    $0x8,%eax
 8264ebf:	77 0d                	ja     8264ece <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x2a6>
 8264ec1:	c6 45 c0 00          	movb   $0x0,-0x40(%ebp)
 8264ec5:	c6 45 c1 00          	movb   $0x0,-0x3f(%ebp)
 8264ec9:	e9 e4 00 00 00       	jmp    8264fb2 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x38a>
 8264ece:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 8264ed5:	00 
 8264ed6:	8d 45 90             	lea    -0x70(%ebp),%eax
 8264ed9:	89 04 24             	mov    %eax,(%esp)
 8264edc:	e8 63 03 00 00       	call   8265244 <_ZSt7strrchrPci>
 8264ee1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8264ee4:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8264ee8:	75 0d                	jne    8264ef7 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x2cf>
 8264eea:	c6 45 c0 00          	movb   $0x0,-0x40(%ebp)
 8264eee:	c6 45 c1 00          	movb   $0x0,-0x3f(%ebp)
 8264ef2:	e9 bb 00 00 00       	jmp    8264fb2 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x38a>
 8264ef7:	8d 45 90             	lea    -0x70(%ebp),%eax
 8264efa:	89 04 24             	mov    %eax,(%esp)
 8264efd:	e8 ae 94 e1 ff       	call   807e3b0 <strlen@plt>
 8264f02:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8264f05:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8264f08:	89 04 24             	mov    %eax,(%esp)
 8264f0b:	e8 a0 94 e1 ff       	call   807e3b0 <strlen@plt>
 8264f10:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8264f13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8264f16:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8264f19:	89 d1                	mov    %edx,%ecx
 8264f1b:	29 c1                	sub    %eax,%ecx
 8264f1d:	89 c8                	mov    %ecx,%eax
 8264f1f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8264f23:	8d 45 90             	lea    -0x70(%ebp),%eax
 8264f26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264f2a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8264f2d:	89 04 24             	mov    %eax,(%esp)
 8264f30:	e8 9b 89 e1 ff       	call   807d8d0 <strncpy@plt>
 8264f35:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8264f3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264f3f:	89 04 24             	mov    %eax,(%esp)
 8264f42:	e8 e9 a1 fc ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 8264f47:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8264f4a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8264f4e:	75 0a                	jne    8264f5a <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x332>
 8264f50:	c6 45 c0 00          	movb   $0x0,-0x40(%ebp)
 8264f54:	c6 45 c1 00          	movb   $0x0,-0x3f(%ebp)
 8264f58:	eb 58                	jmp    8264fb2 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x38a>
 8264f5a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8264f61:	00 
 8264f62:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8264f65:	89 04 24             	mov    %eax,(%esp)
 8264f68:	e8 07 19 3a 00       	call   8606874 <_ZNK9SkillSlot15get_skill_indexEi>
 8264f6d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8264f70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8264f77:	00 
 8264f78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8264f7b:	89 04 24             	mov    %eax,(%esp)
 8264f7e:	e8 f1 18 3a 00       	call   8606874 <_ZNK9SkillSlot15get_skill_indexEi>
 8264f83:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8264f86:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8264f8d:	00 
 8264f8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8264f91:	89 04 24             	mov    %eax,(%esp)
 8264f94:	e8 db 18 3a 00       	call   8606874 <_ZNK9SkillSlot15get_skill_indexEi>
 8264f99:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8264f9c:	eb 01                	jmp    8264f9f <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x377>
 8264f9e:	90                   	nop
 8264f9f:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8264fa3:	83 7d d8 03          	cmpl   $0x3,-0x28(%ebp)
 8264fa7:	0f 9e c0             	setle  %al
 8264faa:	84 c0                	test   %al,%al
 8264fac:	0f 85 04 fd ff ff    	jne    8264cb6 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x8e>
 8264fb2:	80 7d c1 00          	cmpb   $0x0,-0x3f(%ebp)
 8264fb6:	74 7a                	je     8265032 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x40a>
 8264fb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264fbb:	89 04 24             	mov    %eax,(%esp)
 8264fbe:	e8 97 49 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8264fc3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8264fca:	00 
 8264fcb:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8264fd2:	00 
 8264fd3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8264fda:	00 
 8264fdb:	c7 44 24 08 30 03 00 	movl   $0x330,0x8(%esp)
 8264fe2:	00 
 8264fe3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8264fe6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8264fea:	89 04 24             	mov    %eax,(%esp)
 8264fed:	e8 8c 3c e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8264ff2:	80 7d c0 00          	cmpb   $0x0,-0x40(%ebp)
 8264ff6:	74 3a                	je     8265032 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser+0x40a>
 8264ff8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264ffb:	89 04 24             	mov    %eax,(%esp)
 8264ffe:	e8 57 49 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8265003:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 826500a:	00 
 826500b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8265012:	00 
 8265013:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 826501a:	00 
 826501b:	c7 44 24 08 2f 03 00 	movl   $0x32f,0x8(%esp)
 8265022:	00 
 8265023:	8b 55 0c             	mov    0xc(%ebp),%edx
 8265026:	89 54 24 04          	mov    %edx,0x4(%esp)
 826502a:	89 04 24             	mov    %eax,(%esp)
 826502d:	e8 4c 3c e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8265032:	81 c4 94 00 00 00    	add    $0x94,%esp
 8265038:	5b                   	pop    %ebx
 8265039:	5d                   	pop    %ebp
 826503a:	c3                   	ret
 826503b:	90                   	nop

```

```c
// DisPatcher_FinishLoad::Party_hack_check @ 0x8264c28

/* DisPatcher_FinishLoad::Party_hack_check(CUser*) */

void __thiscall DisPatcher_FinishLoad::Party_hack_check(DisPatcher_FinishLoad *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  CHackAnalyzer *pCVar5;
  int iVar6;
  char local_74 [52];
  int local_40;
  int local_3c;
  int local_38;
  CParty *local_34;
  int local_30;
  int local_2c;
  CUserCharacInfo *local_28;
  size_t local_24;
  SkillSlot *local_20;
  char *local_1c;
  size_t local_18;
  size_t local_14;
  SkillSlot *local_10;
  
  local_74[0x30] = '\x01';
  local_74[0x31] = '\x01';
  local_74[0x20] = '\0';
  local_74[0x21] = '\0';
  local_74[0x22] = '\0';
  local_74[0x23] = '\0';
  local_74[0x24] = '\0';
  local_74[0x25] = '\0';
  local_74[0x26] = '\0';
  local_74[0x27] = '\0';
  local_74[0x28] = '\0';
  local_74[0x29] = '\0';
  local_74[0x2a] = '\0';
  local_74[0x2b] = '\0';
  local_74[0x2c] = '\0';
  local_74[0x2d] = '\0';
  local_74[0x2e] = '\0';
  local_74[0x2f] = '\0';
  local_74[0x32] = '\0';
  local_74[0x33] = '\0';
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = (CParty *)CUser::GetParty(param_1);
  if (local_34 != (CParty *)0x0) {
    local_30 = 0;
    local_30 = CParty::get_member_count(local_34);
    if (2 < local_30) {
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
        cVar2 = CParty::checkValidUser(local_34,local_2c);
        if (cVar2 == '\x01') {
          local_28 = (CUserCharacInfo *)CParty::get_user(local_34,local_2c);
          if (local_28 != (CUserCharacInfo *)0x0) {
            if (local_2c == 0) {
              local_74[0x32] = CUserCharacInfo::get_charac_job(local_28);
              local_74[0x33] = CUserCharacInfo::getCurCharFirstGrowType(local_28);
              local_1c = (char *)0x0;
              local_74[0] = '\0';
              local_74[1] = '\0';
              local_74[2] = '\0';
              local_74[3] = '\0';
              local_74[4] = '\0';
              local_74[5] = '\0';
              local_74[6] = '\0';
              local_74[7] = '\0';
              local_74[8] = '\0';
              local_74[9] = '\0';
              local_74[10] = '\0';
              local_74[0xb] = '\0';
              local_74[0xc] = '\0';
              local_74[0xd] = '\0';
              local_74[0xe] = '\0';
              local_74[0xf] = '\0';
              local_18 = 0;
              local_14 = 0;
              CNetwork<4096,450000>::GetPeerIP2
                        ((CNetwork<4096,450000> *)(local_28 + 0xe0),local_74,0x10);
              sVar4 = strlen(local_74);
              if (sVar4 < 9) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_1c = (char *)std::strrchr(local_74,0x2e);
              if (local_1c == (char *)0x0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_18 = strlen(local_74);
              local_14 = strlen(local_1c);
              strncpy(local_74 + 0x20,local_74,local_18 - local_14);
              local_10 = (SkillSlot *)0x0;
              local_10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(local_28);
              if (local_10 == (SkillSlot *)0x0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_40 = SkillSlot::get_skill_index(local_10,0);
              local_3c = SkillSlot::get_skill_index(local_10,1);
              local_38 = SkillSlot::get_skill_index(local_10,2);
            }
            else {
              iVar6 = (int)local_74[0x32];
              iVar3 = CUserCharacInfo::get_charac_job(local_28);
              if (iVar6 == iVar3) {
                cVar2 = CUserCharacInfo::getCurCharFirstGrowType(local_28);
                if (cVar2 != local_74[0x33]) goto LAB_08264d1f;
                bVar1 = false;
              }
              else {
LAB_08264d1f:
                bVar1 = true;
              }
              if (bVar1) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_24 = 0;
              local_74[0x10] = '\0';
              local_74[0x11] = '\0';
              local_74[0x12] = '\0';
              local_74[0x13] = '\0';
              local_74[0x14] = '\0';
              local_74[0x15] = '\0';
              local_74[0x16] = '\0';
              local_74[0x17] = '\0';
              local_74[0x18] = '\0';
              local_74[0x19] = '\0';
              local_74[0x1a] = '\0';
              local_74[0x1b] = '\0';
              local_74[0x1c] = '\0';
              local_74[0x1d] = '\0';
              local_74[0x1e] = '\0';
              local_74[0x1f] = '\0';
              CNetwork<4096,450000>::GetPeerIP2
                        ((CNetwork<4096,450000> *)(local_28 + 0xe0),local_74 + 0x10,0x10);
              local_24 = strlen(local_74 + 0x20);
              iVar3 = strncmp(local_74 + 0x20,local_74 + 0x10,local_24);
              if (iVar3 != 0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              local_20 = (SkillSlot *)0x0;
              local_20 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(local_28);
              if (local_20 == (SkillSlot *)0x0) {
                local_74[0x30] = '\0';
                local_74[0x31] = '\0';
                break;
              }
              iVar3 = SkillSlot::get_skill_index(local_20,0);
              if (iVar3 == local_40) {
                iVar3 = SkillSlot::get_skill_index(local_20,1);
                if (iVar3 != local_3c) goto LAB_08264e27;
                iVar3 = SkillSlot::get_skill_index(local_20,2);
                if (iVar3 != local_38) goto LAB_08264e27;
                bVar1 = false;
              }
              else {
LAB_08264e27:
                bVar1 = true;
              }
              if (bVar1) {
                local_74[0x30] = '\0';
              }
            }
          }
        }
      }
      if (local_74[0x31] != '\0') {
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x330,1,0,0);
        if (local_74[0x30] != '\0') {
          pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_1,0x32f,1,0,0);
        }
      }
    }
  }
  return;
}

```

---

## check_error

```asm
// === 08264bfe DisPatcher_FinishLoad::check_error  [0x08264bfe-0x8264c27] ===
 8264bfe:	55                   	push   %ebp
 8264bff:	89 e5                	mov    %esp,%ebp
 8264c01:	83 ec 18             	sub    $0x18,%esp
 8264c04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264c07:	89 04 24             	mov    %eax,(%esp)
 8264c0a:	e8 1f 07 00 00       	call   826532e <_ZN5CUser15GetDebugCommandEv>
 8264c0f:	83 f8 01             	cmp    $0x1,%eax
 8264c12:	0f 94 c0             	sete   %al
 8264c15:	84 c0                	test   %al,%al
 8264c17:	74 07                	je     8264c20 <_ZN21DisPatcher_FinishLoad11check_errorEP5CUserR8MSG_BASE+0x22>
 8264c19:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 8264c1e:	eb 05                	jmp    8264c25 <_ZN21DisPatcher_FinishLoad11check_errorEP5CUserR8MSG_BASE+0x27>
 8264c20:	b8 00 00 00 00       	mov    $0x0,%eax
 8264c25:	c9                   	leave
 8264c26:	c3                   	ret
 8264c27:	90                   	nop

```

```c
// DisPatcher_FinishLoad::check_error @ 0x8264bfe

/* DisPatcher_FinishLoad::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_FinishLoad::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::GetDebugCommand((CUser *)param_2);
  if (iVar1 == 1) {
    uVar2 = 0x7fffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## process

```asm
// === 0826503c DisPatcher_FinishLoad::process  [0x0826503c-0x82651e7] ===
 826503c:	55                   	push   %ebp
 826503d:	89 e5                	mov    %esp,%ebp
 826503f:	83 ec 38             	sub    $0x38,%esp
 8265042:	8b 45 14             	mov    0x14(%ebp),%eax
 8265045:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8265048:	8b 45 10             	mov    0x10(%ebp),%eax
 826504b:	89 44 24 08          	mov    %eax,0x8(%esp)
 826504f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8265052:	89 44 24 04          	mov    %eax,0x4(%esp)
 8265056:	8b 45 08             	mov    0x8(%ebp),%eax
 8265059:	89 04 24             	mov    %eax,(%esp)
 826505c:	e8 9d fb ff ff       	call   8264bfe <_ZN21DisPatcher_FinishLoad11check_errorEP5CUserR8MSG_BASE>
 8265061:	89 c2                	mov    %eax,%edx
 8265063:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8265066:	89 50 04             	mov    %edx,0x4(%eax)
 8265069:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826506c:	8b 40 04             	mov    0x4(%eax),%eax
 826506f:	85 c0                	test   %eax,%eax
 8265071:	7e 0a                	jle    826507d <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 8265073:	b8 00 00 00 00       	mov    $0x0,%eax
 8265078:	e9 69 01 00 00       	jmp    82651e6 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x1aa>
 826507d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8265080:	8b 40 04             	mov    0x4(%eax),%eax
 8265083:	85 c0                	test   %eax,%eax
 8265085:	79 2b                	jns    82650b2 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x76>
 8265087:	8b 45 ec             	mov    -0x14(%ebp),%eax
 826508a:	8b 40 04             	mov    0x4(%eax),%eax
 826508d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8265094:	00 
 8265095:	89 44 24 08          	mov    %eax,0x8(%esp)
 8265099:	c7 44 24 04 e0 c5 be 	movl   $0x8bec5e0,0x4(%esp)
 82650a0:	08 
 82650a1:	c7 04 24 ca 06 00 00 	movl   $0x6ca,(%esp)
 82650a8:	e8 2a b8 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82650ad:	e9 34 01 00 00       	jmp    82651e6 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x1aa>
 82650b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82650b5:	89 04 24             	mov    %eax,(%esp)
 82650b8:	e8 59 18 ee ff       	call   8146916 <_ZN6Global14CBossTowerFunc10FinishLoadEP5CUser>
 82650bd:	84 c0                	test   %al,%al
 82650bf:	74 0a                	je     82650cb <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x8f>
 82650c1:	b8 00 00 00 00       	mov    $0x0,%eax
 82650c6:	e9 1b 01 00 00       	jmp    82651e6 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x1aa>
 82650cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82650ce:	89 04 24             	mov    %eax,(%esp)
 82650d1:	e8 dc bd ec ff       	call   8130eb2 <_ZN12advancealtar7Manager10finishLoadEP5CUser>
 82650d6:	84 c0                	test   %al,%al
 82650d8:	74 0a                	je     82650e4 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0xa8>
 82650da:	b8 00 00 00 00       	mov    $0x0,%eax
 82650df:	e9 02 01 00 00       	jmp    82651e6 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x1aa>
 82650e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82650e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82650eb:	8b 45 08             	mov    0x8(%ebp),%eax
 82650ee:	89 04 24             	mov    %eax,(%esp)
 82650f1:	e8 32 fb ff ff       	call   8264c28 <_ZN21DisPatcher_FinishLoad16Party_hack_checkEP5CUser>
 82650f6:	8b 45 10             	mov    0x10(%ebp),%eax
 82650f9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82650fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82650ff:	89 04 24             	mov    %eax,(%esp)
 8265102:	e8 45 00 3f 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8265107:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826510a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 826510e:	0f 84 cd 00 00 00    	je     82651e1 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x1a5>
 8265114:	8b 45 0c             	mov    0xc(%ebp),%eax
 8265117:	89 44 24 04          	mov    %eax,0x4(%esp)
 826511b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 826511e:	89 04 24             	mov    %eax,(%esp)
 8265121:	e8 ba c4 34 00       	call   85b15e0 <_ZN6CParty14finish_loadingEP5CUser>
 8265126:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8265129:	89 04 24             	mov    %eax,(%esp)
 826512c:	e8 2d 01 00 00       	call   826525e <_ZN6CParty14checkStartRoomEv>
 8265131:	84 c0                	test   %al,%al
 8265133:	0f 84 a8 00 00 00    	je     82651e1 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x1a5>
 8265139:	8b 45 0c             	mov    0xc(%ebp),%eax
 826513c:	89 04 24             	mov    %eax,(%esp)
 826513f:	e8 72 8f 3e 00       	call   864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>
 8265144:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8265147:	8b 52 0d             	mov    0xd(%edx),%edx
 826514a:	39 d0                	cmp    %edx,%eax
 826514c:	0f 95 c0             	setne  %al
 826514f:	84 c0                	test   %al,%al
 8265151:	74 3a                	je     826518d <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x151>
 8265153:	8b 45 0c             	mov    0xc(%ebp),%eax
 8265156:	89 04 24             	mov    %eax,(%esp)
 8265159:	e8 fc 47 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 826515e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8265165:	00 
 8265166:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 826516d:	00 
 826516e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8265175:	00 
 8265176:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 826517d:	00 
 826517e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8265181:	89 54 24 04          	mov    %edx,0x4(%esp)
 8265185:	89 04 24             	mov    %eax,(%esp)
 8265188:	e8 f1 3a e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 826518d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8265190:	89 04 24             	mov    %eax,(%esp)
 8265193:	e8 7c 8f 3e 00       	call   864e114 <_ZNK5CUser25getCurCharacSkillCheckSumEv>
 8265198:	8b 55 f0             	mov    -0x10(%ebp),%edx
 826519b:	8b 52 11             	mov    0x11(%edx),%edx
 826519e:	39 d0                	cmp    %edx,%eax
 82651a0:	0f 95 c0             	setne  %al
 82651a3:	84 c0                	test   %al,%al
 82651a5:	74 3a                	je     82651e1 <_ZN21DisPatcher_FinishLoad7processEP5CUserR8MSG_BASER9ParamBase+0x1a5>
 82651a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82651aa:	89 04 24             	mov    %eax,(%esp)
 82651ad:	e8 a8 47 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82651b2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82651b9:	00 
 82651ba:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82651c1:	00 
 82651c2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82651c9:	00 
 82651ca:	c7 44 24 08 5c 02 00 	movl   $0x25c,0x8(%esp)
 82651d1:	00 
 82651d2:	8b 55 0c             	mov    0xc(%ebp),%edx
 82651d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82651d9:	89 04 24             	mov    %eax,(%esp)
 82651dc:	e8 9d 3a e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82651e1:	b8 00 00 00 00       	mov    $0x0,%eax
 82651e6:	c9                   	leave
 82651e7:	c3                   	ret

```

```c
// DisPatcher_FinishLoad::process @ 0x826503c

/* DisPatcher_FinishLoad::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_FinishLoad::process
          (DisPatcher_FinishLoad *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  CParty *this_00;
  int iVar3;
  CHackAnalyzer *pCVar4;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x6ca,
                       "virtual int DisPatcher_FinishLoad::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      cVar1 = Global::CBossTowerFunc::FinishLoad(param_1);
      if (cVar1 == '\0') {
        cVar1 = advancealtar::Manager::finishLoad(param_1);
        if (cVar1 == '\0') {
          Party_hack_check(this,param_1);
          this_00 = (CParty *)CUser::GetParty(param_1);
          if (this_00 != (CParty *)0x0) {
            CParty::finish_loading(this_00,param_1);
            cVar1 = CParty::checkStartRoom(this_00);
            if (cVar1 != '\0') {
              iVar3 = CUser::getCurCharacInvenCheckSum(param_1);
              if (iVar3 != *(int *)(param_2 + 0xd)) {
                pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25b,1,0,0);
              }
              iVar3 = CUser::getCurCharacSkillCheckSum(param_1);
              if (iVar3 != *(int *)(param_2 + 0x11)) {
                pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25c,1,0,0);
              }
            }
          }
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 08264b66 DisPatcher_FinishLoad::read  [0x08264b66-0x8264bfd] ===
 8264b66:	55                   	push   %ebp
 8264b67:	89 e5                	mov    %esp,%ebp
 8264b69:	83 ec 28             	sub    $0x28,%esp
 8264b6c:	8b 45 10             	mov    0x10(%ebp),%eax
 8264b6f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8264b72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8264b75:	83 c0 0d             	add    $0xd,%eax
 8264b78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264b7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264b7f:	89 04 24             	mov    %eax,(%esp)
 8264b82:	e8 69 85 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8264b87:	83 f0 01             	xor    $0x1,%eax
 8264b8a:	84 c0                	test   %al,%al
 8264b8c:	74 26                	je     8264bb4 <_ZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASE+0x4e>
 8264b8e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264b95:	00 
 8264b96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264b9d:	00 
 8264b9e:	c7 44 24 04 40 c6 be 	movl   $0x8bec640,0x4(%esp)
 8264ba5:	08 
 8264ba6:	c7 04 24 f7 05 00 00 	movl   $0x5f7,(%esp)
 8264bad:	e8 25 bd 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264bb2:	eb 47                	jmp    8264bfb <_ZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASE+0x95>
 8264bb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8264bb7:	83 c0 11             	add    $0x11,%eax
 8264bba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264bbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264bc1:	89 04 24             	mov    %eax,(%esp)
 8264bc4:	e8 27 85 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8264bc9:	83 f0 01             	xor    $0x1,%eax
 8264bcc:	84 c0                	test   %al,%al
 8264bce:	74 26                	je     8264bf6 <_ZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASE+0x90>
 8264bd0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264bd7:	00 
 8264bd8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264bdf:	00 
 8264be0:	c7 44 24 04 40 c6 be 	movl   $0x8bec640,0x4(%esp)
 8264be7:	08 
 8264be8:	c7 04 24 f8 05 00 00 	movl   $0x5f8,(%esp)
 8264bef:	e8 e3 bc 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264bf4:	eb 05                	jmp    8264bfb <_ZN21DisPatcher_FinishLoad4readER9PacketBufR8MSG_BASE+0x95>
 8264bf6:	b8 00 00 00 00       	mov    $0x0,%eax
 8264bfb:	c9                   	leave
 8264bfc:	c3                   	ret
 8264bfd:	90                   	nop

```

```c
// DisPatcher_FinishLoad::read @ 0x8264b66

/* DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_FinishLoad::read(DisPatcher_FinishLoad *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5f8,"virtual int DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x5f7,"virtual int DisPatcher_FinishLoad::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

