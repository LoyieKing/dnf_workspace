# game_master__CUpgradeCardDebug

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## SendChatMsg

```asm
// === 084b1e8a game_master::CUpgradeCardDebug::SendChatMsg  [0x084b1e8a-0x84b1f21] ===
 84b1e8a:	55                   	push   %ebp
 84b1e8b:	89 e5                	mov    %esp,%ebp
 84b1e8d:	56                   	push   %esi
 84b1e8e:	53                   	push   %ebx
 84b1e8f:	83 ec 30             	sub    $0x30,%esp
 84b1e92:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1e95:	89 04 24             	mov    %eax,(%esp)
 84b1e98:	e8 af be 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84b1e9d:	8b 45 10             	mov    0x10(%ebp),%eax
 84b1ea0:	89 04 24             	mov    %eax,(%esp)
 84b1ea3:	e8 08 c5 bc ff       	call   807e3b0 <strlen@plt>
 84b1ea8:	89 c3                	mov    %eax,%ebx
 84b1eaa:	e8 f8 84 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84b1eaf:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 84b1eb6:	00 
 84b1eb7:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 84b1ebe:	00 
 84b1ebf:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84b1ec3:	8b 55 10             	mov    0x10(%ebp),%edx
 84b1ec6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b1eca:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b1ecd:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b1ed1:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84b1ed4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b1ed8:	89 04 24             	mov    %eax,(%esp)
 84b1edb:	e8 6c 76 21 00       	call   86c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>
 84b1ee0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1ee3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1ee7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b1eea:	89 04 24             	mov    %eax,(%esp)
 84b1eed:	e8 c8 66 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84b1ef2:	eb 1b                	jmp    84b1f0f <_ZN11game_master17CUpgradeCardDebug11SendChatMsgEP5CUserPc+0x85>
 84b1ef4:	89 d3                	mov    %edx,%ebx
 84b1ef6:	89 c6                	mov    %eax,%esi
 84b1ef8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1efb:	89 04 24             	mov    %eax,(%esp)
 84b1efe:	e8 7d bf 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b1f03:	89 f0                	mov    %esi,%eax
 84b1f05:	89 da                	mov    %ebx,%edx
 84b1f07:	89 04 24             	mov    %eax,(%esp)
 84b1f0a:	e8 41 18 63 00       	call   8ae3750 <_Unwind_Resume>
 84b1f0f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84b1f12:	89 04 24             	mov    %eax,(%esp)
 84b1f15:	e8 66 bf 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84b1f1a:	83 c4 30             	add    $0x30,%esp
 84b1f1d:	5b                   	pop    %ebx
 84b1f1e:	5e                   	pop    %esi
 84b1f1f:	5d                   	pop    %ebp
 84b1f20:	c3                   	ret
 84b1f21:	90                   	nop

```

```c
// game_master::CUpgradeCardDebug::SendChatMsg @ 0x84b1e8a

/* game_master::CUpgradeCardDebug::SendChatMsg(CUser*, char*) */

void __thiscall
game_master::CUpgradeCardDebug::SendChatMsg(CUpgradeCardDebug *this,CUser *param_1,char *param_2)

{
  size_t sVar1;
  GameWorld *pGVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  sVar1 = strlen(param_2);
                    /* try { // try from 084b1eaa to 084b1ef1 has its CatchHandler @ 084b1ef4 */
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::make_packet_chat_msg(pGVar2,local_18,param_1,param_2,sVar1,2,0xc);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## execute

```asm
// === 084b1b96 game_master::CUpgradeCardDebug::execute  [0x084b1b96-0x84b1e89] ===
 84b1b96:	55                   	push   %ebp
 84b1b97:	89 e5                	mov    %esp,%ebp
 84b1b99:	57                   	push   %edi
 84b1b9a:	56                   	push   %esi
 84b1b9b:	53                   	push   %ebx
 84b1b9c:	81 ec 8c 7b 01 00    	sub    $0x17b8c,%esp
 84b1ba2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1ba5:	89 04 24             	mov    %eax,(%esp)
 84b1ba8:	e8 0d 24 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b1bad:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84b1bb0:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 84b1bb4:	0f 84 be 02 00 00    	je     84b1e78 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x2e2>
 84b1bba:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1bbd:	8b 58 08             	mov    0x8(%eax),%ebx
 84b1bc0:	e8 d6 a5 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b1bc5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b1bc9:	89 04 24             	mov    %eax,(%esp)
 84b1bcc:	e8 61 de ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84b1bd1:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84b1bd4:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 84b1bd8:	0f 84 9d 02 00 00    	je     84b1e7b <_ZN11game_master17CUpgradeCardDebug7executeEv+0x2e5>
 84b1bde:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b1be1:	89 04 24             	mov    %eax,(%esp)
 84b1be4:	e8 11 f7 c3 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84b1be9:	83 f0 01             	xor    $0x1,%eax
 84b1bec:	84 c0                	test   %al,%al
 84b1bee:	0f 85 8a 02 00 00    	jne    84b1e7e <_ZN11game_master17CUpgradeCardDebug7executeEv+0x2e8>
 84b1bf4:	8d 95 a6 fb ff ff    	lea    -0x45a(%ebp),%edx
 84b1bfa:	bb 00 04 00 00       	mov    $0x400,%ebx
 84b1bff:	b8 00 00 00 00       	mov    $0x0,%eax
 84b1c04:	89 d1                	mov    %edx,%ecx
 84b1c06:	83 e1 02             	and    $0x2,%ecx
 84b1c09:	85 c9                	test   %ecx,%ecx
 84b1c0b:	74 09                	je     84b1c16 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x80>
 84b1c0d:	66 89 02             	mov    %ax,(%edx)
 84b1c10:	83 c2 02             	add    $0x2,%edx
 84b1c13:	83 eb 02             	sub    $0x2,%ebx
 84b1c16:	89 d9                	mov    %ebx,%ecx
 84b1c18:	c1 e9 02             	shr    $0x2,%ecx
 84b1c1b:	89 d7                	mov    %edx,%edi
 84b1c1d:	f3 ab                	rep stos %eax,%es:(%edi)
 84b1c1f:	89 fa                	mov    %edi,%edx
 84b1c21:	89 d9                	mov    %ebx,%ecx
 84b1c23:	83 e1 02             	and    $0x2,%ecx
 84b1c26:	85 c9                	test   %ecx,%ecx
 84b1c28:	74 06                	je     84b1c30 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x9a>
 84b1c2a:	66 89 02             	mov    %ax,(%edx)
 84b1c2d:	83 c2 02             	add    $0x2,%edx
 84b1c30:	89 d9                	mov    %ebx,%ecx
 84b1c32:	83 e1 01             	and    $0x1,%ecx
 84b1c35:	85 c9                	test   %ecx,%ecx
 84b1c37:	74 05                	je     84b1c3e <_ZN11game_master17CUpgradeCardDebug7executeEv+0xa8>
 84b1c39:	88 02                	mov    %al,(%edx)
 84b1c3b:	83 c2 01             	add    $0x1,%edx
 84b1c3e:	8d 85 8e 84 fe ff    	lea    -0x17b72(%ebp),%eax
 84b1c44:	ba 18 73 01 00       	mov    $0x17318,%edx
 84b1c49:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b1c4d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b1c54:	00 
 84b1c55:	89 04 24             	mov    %eax,(%esp)
 84b1c58:	e8 63 c0 bc ff       	call   807dcc0 <memset@plt>
 84b1c5d:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 84b1c60:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 84b1c65:	ba 00 00 00 00       	mov    $0x0,%edx
 84b1c6a:	89 c1                	mov    %eax,%ecx
 84b1c6c:	83 e1 02             	and    $0x2,%ecx
 84b1c6f:	85 c9                	test   %ecx,%ecx
 84b1c71:	74 09                	je     84b1c7c <_ZN11game_master17CUpgradeCardDebug7executeEv+0xe6>
 84b1c73:	66 89 10             	mov    %dx,(%eax)
 84b1c76:	83 c0 02             	add    $0x2,%eax
 84b1c79:	83 eb 02             	sub    $0x2,%ebx
 84b1c7c:	89 de                	mov    %ebx,%esi
 84b1c7e:	83 e6 fc             	and    $0xfffffffc,%esi
 84b1c81:	b9 00 00 00 00       	mov    $0x0,%ecx
 84b1c86:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 84b1c89:	83 c1 04             	add    $0x4,%ecx
 84b1c8c:	39 f1                	cmp    %esi,%ecx
 84b1c8e:	72 f6                	jb     84b1c86 <_ZN11game_master17CUpgradeCardDebug7executeEv+0xf0>
 84b1c90:	01 c8                	add    %ecx,%eax
 84b1c92:	89 d9                	mov    %ebx,%ecx
 84b1c94:	83 e1 02             	and    $0x2,%ecx
 84b1c97:	85 c9                	test   %ecx,%ecx
 84b1c99:	74 06                	je     84b1ca1 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x10b>
 84b1c9b:	66 89 10             	mov    %dx,(%eax)
 84b1c9e:	83 c0 02             	add    $0x2,%eax
 84b1ca1:	89 d9                	mov    %ebx,%ecx
 84b1ca3:	83 e1 01             	and    $0x1,%ecx
 84b1ca6:	85 c9                	test   %ecx,%ecx
 84b1ca8:	74 05                	je     84b1caf <_ZN11game_master17CUpgradeCardDebug7executeEv+0x119>
 84b1caa:	88 10                	mov    %dl,(%eax)
 84b1cac:	83 c0 01             	add    $0x1,%eax
 84b1caf:	8d 95 a6 f7 ff ff    	lea    -0x85a(%ebp),%edx
 84b1cb5:	bb 00 04 00 00       	mov    $0x400,%ebx
 84b1cba:	b8 00 00 00 00       	mov    $0x0,%eax
 84b1cbf:	89 d1                	mov    %edx,%ecx
 84b1cc1:	83 e1 02             	and    $0x2,%ecx
 84b1cc4:	85 c9                	test   %ecx,%ecx
 84b1cc6:	74 09                	je     84b1cd1 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x13b>
 84b1cc8:	66 89 02             	mov    %ax,(%edx)
 84b1ccb:	83 c2 02             	add    $0x2,%edx
 84b1cce:	83 eb 02             	sub    $0x2,%ebx
 84b1cd1:	89 d9                	mov    %ebx,%ecx
 84b1cd3:	c1 e9 02             	shr    $0x2,%ecx
 84b1cd6:	89 d7                	mov    %edx,%edi
 84b1cd8:	f3 ab                	rep stos %eax,%es:(%edi)
 84b1cda:	89 fa                	mov    %edi,%edx
 84b1cdc:	89 d9                	mov    %ebx,%ecx
 84b1cde:	83 e1 02             	and    $0x2,%ecx
 84b1ce1:	85 c9                	test   %ecx,%ecx
 84b1ce3:	74 06                	je     84b1ceb <_ZN11game_master17CUpgradeCardDebug7executeEv+0x155>
 84b1ce5:	66 89 02             	mov    %ax,(%edx)
 84b1ce8:	83 c2 02             	add    $0x2,%edx
 84b1ceb:	89 d9                	mov    %ebx,%ecx
 84b1ced:	83 e1 01             	and    $0x1,%ecx
 84b1cf0:	85 c9                	test   %ecx,%ecx
 84b1cf2:	74 05                	je     84b1cf9 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x163>
 84b1cf4:	88 02                	mov    %al,(%edx)
 84b1cf6:	83 c2 01             	add    $0x1,%edx
 84b1cf9:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84b1d00:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b1d03:	89 04 24             	mov    %eax,(%esp)
 84b1d06:	e8 3d ef c5 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84b1d0b:	3d 29 1d 00 00       	cmp    $0x1d29,%eax
 84b1d10:	74 28                	je     84b1d3a <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1a4>
 84b1d12:	3d 29 1d 00 00       	cmp    $0x1d29,%eax
 84b1d17:	7f 0c                	jg     84b1d25 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x18f>
 84b1d19:	2d 69 1c 00 00       	sub    $0x1c69,%eax
 84b1d1e:	83 f8 02             	cmp    $0x2,%eax
 84b1d21:	77 1e                	ja     84b1d41 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1ab>
 84b1d23:	eb 15                	jmp    84b1d3a <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1a4>
 84b1d25:	3d 3f 1e 00 00       	cmp    $0x1e3f,%eax
 84b1d2a:	7c 15                	jl     84b1d41 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1ab>
 84b1d2c:	3d 40 1e 00 00       	cmp    $0x1e40,%eax
 84b1d31:	7e 07                	jle    84b1d3a <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1a4>
 84b1d33:	3d 86 1e 00 00       	cmp    $0x1e86,%eax
 84b1d38:	75 07                	jne    84b1d41 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1ab>
 84b1d3a:	c7 45 cc 64 00 00 00 	movl   $0x64,-0x34(%ebp)
 84b1d41:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b1d44:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84b1d47:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b1d4a:	89 04 24             	mov    %eax,(%esp)
 84b1d4d:	e8 d0 24 00 00       	call   84b4222 <_ZN14CStackableItem17IsReinforceTicketEv>
 84b1d52:	84 c0                	test   %al,%al
 84b1d54:	74 2d                	je     84b1d83 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1ed>
 84b1d56:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b1d59:	89 04 24             	mov    %eax,(%esp)
 84b1d5c:	e8 d1 24 00 00       	call   84b4232 <_ZN14CStackableItem16GetReinforceRateEv>
 84b1d61:	88 45 df             	mov    %al,-0x21(%ebp)
 84b1d64:	80 7d df 00          	cmpb   $0x0,-0x21(%ebp)
 84b1d68:	78 06                	js     84b1d70 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1da>
 84b1d6a:	80 7d df 64          	cmpb   $0x64,-0x21(%ebp)
 84b1d6e:	7e 0a                	jle    84b1d7a <_ZN11game_master17CUpgradeCardDebug7executeEv+0x1e4>
 84b1d70:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84b1d77:	90                   	nop
 84b1d78:	eb 44                	jmp    84b1dbe <_ZN11game_master17CUpgradeCardDebug7executeEv+0x228>
 84b1d7a:	0f be 45 df          	movsbl -0x21(%ebp),%eax
 84b1d7e:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84b1d81:	eb 3b                	jmp    84b1dbe <_ZN11game_master17CUpgradeCardDebug7executeEv+0x228>
 84b1d83:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b1d86:	89 04 24             	mov    %eax,(%esp)
 84b1d89:	e8 b4 24 00 00       	call   84b4242 <_ZN14CStackableItem24IsAmplifyReinforceTicketEv>
 84b1d8e:	84 c0                	test   %al,%al
 84b1d90:	74 2c                	je     84b1dbe <_ZN11game_master17CUpgradeCardDebug7executeEv+0x228>
 84b1d92:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84b1d95:	89 04 24             	mov    %eax,(%esp)
 84b1d98:	e8 b5 24 00 00       	call   84b4252 <_ZN14CStackableItem23GetAmplifyReinforceRateEv>
 84b1d9d:	0f be c0             	movsbl %al,%eax
 84b1da0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84b1da3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84b1da7:	78 06                	js     84b1daf <_ZN11game_master17CUpgradeCardDebug7executeEv+0x219>
 84b1da9:	83 7d e0 64          	cmpl   $0x64,-0x20(%ebp)
 84b1dad:	7e 09                	jle    84b1db8 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x222>
 84b1daf:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84b1db6:	eb 06                	jmp    84b1dbe <_ZN11game_master17CUpgradeCardDebug7executeEv+0x228>
 84b1db8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84b1dbb:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84b1dbe:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84b1dc5:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84b1dcc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84b1dd3:	eb 24                	jmp    84b1df9 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x263>
 84b1dd5:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 84b1ddc:	e8 a6 fd 1f 00       	call   86b1b87 <_Z12get_rand_inti>
 84b1de1:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 84b1de4:	0f 9c c0             	setl   %al
 84b1de7:	84 c0                	test   %al,%al
 84b1de9:	74 06                	je     84b1df1 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x25b>
 84b1deb:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 84b1def:	eb 04                	jmp    84b1df5 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x25f>
 84b1df1:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 84b1df5:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84b1df9:	81 7d e4 0f 27 00 00 	cmpl   $0x270f,-0x1c(%ebp)
 84b1e00:	0f 9e c0             	setle  %al
 84b1e03:	84 c0                	test   %al,%al
 84b1e05:	75 ce                	jne    84b1dd5 <_ZN11game_master17CUpgradeCardDebug7executeEv+0x23f>
 84b1e07:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b1e0a:	89 04 24             	mov    %eax,(%esp)
 84b1e0d:	e8 36 ee c5 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84b1e12:	89 c3                	mov    %eax,%ebx
 84b1e14:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84b1e17:	89 04 24             	mov    %eax,(%esp)
 84b1e1a:	e8 63 cf c6 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84b1e1f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84b1e22:	89 54 24 18          	mov    %edx,0x18(%esp)
 84b1e26:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84b1e29:	89 54 24 14          	mov    %edx,0x14(%esp)
 84b1e2d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84b1e30:	89 54 24 10          	mov    %edx,0x10(%esp)
 84b1e34:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84b1e38:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b1e3c:	c7 44 24 04 5c 03 c8 	movl   $0x8c8035c,0x4(%esp)
 84b1e43:	08 
 84b1e44:	8d 85 a6 f7 ff ff    	lea    -0x85a(%ebp),%eax
 84b1e4a:	89 04 24             	mov    %eax,(%esp)
 84b1e4d:	e8 ee c5 bc ff       	call   807e440 <sprintf@plt>
 84b1e52:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1e55:	89 04 24             	mov    %eax,(%esp)
 84b1e58:	e8 5d 21 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b1e5d:	8d 95 a6 f7 ff ff    	lea    -0x85a(%ebp),%edx
 84b1e63:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b1e67:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1e6e:	89 04 24             	mov    %eax,(%esp)
 84b1e71:	e8 14 00 00 00       	call   84b1e8a <_ZN11game_master17CUpgradeCardDebug11SendChatMsgEP5CUserPc>
 84b1e76:	eb 07                	jmp    84b1e7f <_ZN11game_master17CUpgradeCardDebug7executeEv+0x2e9>
 84b1e78:	90                   	nop
 84b1e79:	eb 04                	jmp    84b1e7f <_ZN11game_master17CUpgradeCardDebug7executeEv+0x2e9>
 84b1e7b:	90                   	nop
 84b1e7c:	eb 01                	jmp    84b1e7f <_ZN11game_master17CUpgradeCardDebug7executeEv+0x2e9>
 84b1e7e:	90                   	nop
 84b1e7f:	81 c4 8c 7b 01 00    	add    $0x17b8c,%esp
 84b1e85:	5b                   	pop    %ebx
 84b1e86:	5e                   	pop    %esi
 84b1e87:	5f                   	pop    %edi
 84b1e88:	5d                   	pop    %ebp
 84b1e89:	c3                   	ret

```

```c
// game_master::CUpgradeCardDebug::execute @ 0x84b1b96

/* WARNING: Removing unreachable block (ram,0x084b1caa) */
/* WARNING: Removing unreachable block (ram,0x084b1c39) */
/* WARNING: Removing unreachable block (ram,0x084b1cf4) */
/* game_master::CUpgradeCardDebug::execute() */

void __thiscall game_master::CUpgradeCardDebug::execute(CUpgradeCardDebug *this)

{
  char cVar1;
  CDataManager *this_00;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CUser *pCVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  undefined1 auStack_17b76 [95000];
  char local_85e [1024];
  undefined2 local_45e;
  undefined4 auStack_45c [255];
  undefined2 local_5e;
  undefined2 local_5c [14];
  int local_40;
  CItem *local_3c;
  int local_38;
  int local_34;
  int local_30;
  CStackableItem *local_2c;
  char local_25;
  int local_24;
  int local_20;
  
  bVar12 = 0;
  local_40 = CCommand::GetUser((CCommand *)this);
  if (local_40 == 0) {
    return;
  }
  iVar3 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(this_00,iVar3);
  if (local_3c == (CItem *)0x0) {
    return;
  }
  cVar1 = CItem::is_stackable(local_3c);
  if (cVar1 != '\x01') {
    return;
  }
  puVar8 = (undefined4 *)&local_45e;
  uVar10 = 0x400;
  bVar11 = ((uint)puVar8 & 2) != 0;
  if (bVar11) {
    local_45e = 0;
    puVar8 = auStack_45c;
    uVar10 = 0x3fe;
  }
  for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
  }
  if (bVar11) {
    *(undefined2 *)puVar8 = 0;
  }
  memset(auStack_17b76,0,95000);
  puVar2 = &local_5e;
  uVar10 = 0x1e;
  bVar11 = ((uint)puVar2 & 2) != 0;
  if (bVar11) {
    local_5e = 0;
    puVar2 = local_5c;
    uVar10 = 0x1c;
  }
  uVar7 = 0;
  do {
    *(undefined4 *)((int)puVar2 + uVar7) = 0;
    uVar7 = uVar7 + 4;
  } while (uVar7 < (uVar10 & 0xfffffffc));
  if (!bVar11) {
    *(undefined2 *)((int)puVar2 + uVar7) = 0;
  }
  pcVar9 = local_85e;
  uVar10 = 0x400;
  bVar11 = ((uint)pcVar9 & 2) != 0;
  if (bVar11) {
    local_85e[0] = '\0';
    local_85e[1] = '\0';
    pcVar9 = local_85e + 2;
    uVar10 = 0x3fe;
  }
  for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
  }
  if (bVar11) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
  }
  local_38 = 0;
  iVar3 = CItem::get_index(local_3c);
  if (iVar3 != 0x1d29) {
    if (iVar3 < 0x1d2a) {
      if (2 < iVar3 - 0x1c69U) goto LAB_084b1d41;
    }
    else if ((iVar3 < 0x1e3f) || ((0x1e40 < iVar3 && (iVar3 != 0x1e86)))) goto LAB_084b1d41;
  }
  local_38 = 100;
LAB_084b1d41:
  local_2c = (CStackableItem *)local_3c;
  cVar1 = CStackableItem::IsReinforceTicket((CStackableItem *)local_3c);
  if (cVar1 == '\0') {
    cVar1 = CStackableItem::IsAmplifyReinforceTicket(local_2c);
    if (cVar1 != '\0') {
      cVar1 = CStackableItem::GetAmplifyReinforceRate(local_2c);
      local_24 = (int)cVar1;
      if ((local_24 < 0) || (local_38 = local_24, 100 < local_24)) {
        local_38 = 0;
      }
    }
  }
  else {
    local_25 = CStackableItem::GetReinforceRate(local_2c);
    if ((local_25 < '\0') || ('d' < local_25)) {
      local_38 = 0;
    }
    else {
      local_38 = (int)local_25;
    }
  }
  local_34 = 0;
  local_30 = 0;
  for (local_20 = 0; local_20 < 10000; local_20 = local_20 + 1) {
    iVar3 = get_rand_int(100);
    if (iVar3 < local_38) {
      local_34 = local_34 + 1;
    }
    else {
      local_30 = local_30 + 1;
    }
  }
  uVar4 = CItem::get_index(local_3c);
  uVar5 = CItem::GetItemName(local_3c);
  sprintf(local_85e,&DAT_08c8035c,uVar5,uVar4,local_38,local_34,local_30);
  pCVar6 = (CUser *)CCommand::GetUser((CCommand *)this);
  SendChatMsg(this,pCVar6,local_85e);
  return;
}

```

---

## parse

```asm
// === 084b1b5e game_master::CUpgradeCardDebug::parse  [0x084b1b5e-0x84b1b95] ===
 84b1b5e:	55                   	push   %ebp
 84b1b5f:	89 e5                	mov    %esp,%ebp
 84b1b61:	83 ec 18             	sub    $0x18,%esp
 84b1b64:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1b67:	8b 40 04             	mov    0x4(%eax),%eax
 84b1b6a:	83 c0 0c             	add    $0xc,%eax
 84b1b6d:	89 04 24             	mov    %eax,(%esp)
 84b1b70:	e8 f3 d4 de ff       	call   829f068 <_Z4trimRSs>
 84b1b75:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1b78:	8b 40 04             	mov    0x4(%eax),%eax
 84b1b7b:	83 c0 0c             	add    $0xc,%eax
 84b1b7e:	89 04 24             	mov    %eax,(%esp)
 84b1b81:	e8 6a 49 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b1b86:	89 04 24             	mov    %eax,(%esp)
 84b1b89:	e8 62 cb bc ff       	call   807e6f0 <atoi@plt>
 84b1b8e:	8b 55 08             	mov    0x8(%ebp),%edx
 84b1b91:	89 42 08             	mov    %eax,0x8(%edx)
 84b1b94:	c9                   	leave
 84b1b95:	c3                   	ret

```

```c
// game_master::CUpgradeCardDebug::parse @ 0x84b1b5e

/* game_master::CUpgradeCardDebug::parse() */

void __thiscall game_master::CUpgradeCardDebug::parse(CUpgradeCardDebug *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

