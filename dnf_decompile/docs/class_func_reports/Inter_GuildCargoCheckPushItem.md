# Inter_GuildCargoCheckPushItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dd856 Inter_GuildCargoCheckPushItem::dispatch_sig  [0x084dd856-0x84ddea1] ===
 84dd856:	55                   	push   %ebp
 84dd857:	89 e5                	mov    %esp,%ebp
 84dd859:	57                   	push   %edi
 84dd85a:	56                   	push   %esi
 84dd85b:	53                   	push   %ebx
 84dd85c:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 84dd862:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd865:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84dd868:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd86b:	89 04 24             	mov    %eax,(%esp)
 84dd86e:	e8 19 cb bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84dd873:	83 f8 02             	cmp    $0x2,%eax
 84dd876:	0f 9e c0             	setle  %al
 84dd879:	84 c0                	test   %al,%al
 84dd87b:	74 0a                	je     84dd887 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x31>
 84dd87d:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd882:	e9 10 06 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84dd887:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dd88e:	ff 
 84dd88f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd892:	89 04 24             	mov    %eax,(%esp)
 84dd895:	e8 06 07 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dd89a:	89 c2                	mov    %eax,%edx
 84dd89c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd89f:	8b 40 0e             	mov    0xe(%eax),%eax
 84dd8a2:	39 c2                	cmp    %eax,%edx
 84dd8a4:	0f 95 c0             	setne  %al
 84dd8a7:	84 c0                	test   %al,%al
 84dd8a9:	74 0a                	je     84dd8b5 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x5f>
 84dd8ab:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd8b0:	e9 e2 05 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84dd8b5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd8b8:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dd8bc:	3c c1                	cmp    $0xc1,%al
 84dd8be:	0f 84 a3 00 00 00    	je     84dd967 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x111>
 84dd8c4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd8c7:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 84dd8cb:	0f b7 c0             	movzwl %ax,%eax
 84dd8ce:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 84dd8d4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd8d7:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 84dd8db:	0f b6 f8             	movzbl %al,%edi
 84dd8de:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd8e1:	8b 70 1b             	mov    0x1b(%eax),%esi
 84dd8e4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd8e7:	8b 58 17             	mov    0x17(%eax),%ebx
 84dd8ea:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd8ed:	8b 48 13             	mov    0x13(%eax),%ecx
 84dd8f0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd8f3:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dd8f7:	0f b6 d0             	movzbl %al,%edx
 84dd8fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd8fd:	05 00 97 07 00       	add    $0x79700,%eax
 84dd902:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 84dd908:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 84dd90e:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84dd912:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84dd916:	89 74 24 14          	mov    %esi,0x14(%esp)
 84dd91a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84dd91e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84dd922:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dd926:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84dd92d:	00 
 84dd92e:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 84dd934:	89 14 24             	mov    %edx,(%esp)
 84dd937:	e8 ae 8c 1a 00       	call   86865ea <_ZN15cUserHistoryLog29GuildCargoCheckPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>
 84dd93c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd93f:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dd943:	0f b6 c0             	movzbl %al,%eax
 84dd946:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dd94a:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84dd951:	00 
 84dd952:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd955:	89 04 24             	mov    %eax,(%esp)
 84dd958:	e8 e5 e5 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84dd95d:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd962:	e9 30 05 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84dd967:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd96a:	89 04 24             	mov    %eax,(%esp)
 84dd96d:	e8 0c c9 bf ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84dd972:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84dd975:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd978:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 84dd97c:	0f b6 c0             	movzbl %al,%eax
 84dd97f:	89 04 24             	mov    %eax,(%esp)
 84dd982:	e8 be 9e c1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 84dd987:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84dd98a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd98d:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 84dd991:	0f b7 c8             	movzwl %ax,%ecx
 84dd994:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84dd997:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84dd99a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84dd99e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dd9a2:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84dd9a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dd9a9:	89 04 24             	mov    %eax,(%esp)
 84dd9ac:	e8 67 df 01 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84dd9b1:	83 ec 04             	sub    $0x4,%esp
 84dd9b4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd9b7:	8b 40 17             	mov    0x17(%eax),%eax
 84dd9ba:	85 c0                	test   %eax,%eax
 84dd9bc:	74 0d                	je     84dd9cb <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x175>
 84dd9be:	8b 55 91             	mov    -0x6f(%ebp),%edx
 84dd9c1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dd9c4:	8b 40 17             	mov    0x17(%eax),%eax
 84dd9c7:	39 c2                	cmp    %eax,%edx
 84dd9c9:	74 25                	je     84dd9f0 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x19a>
 84dd9cb:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84dd9d2:	00 
 84dd9d3:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84dd9da:	00 
 84dd9db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd9de:	89 04 24             	mov    %eax,(%esp)
 84dd9e1:	e8 5c e5 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84dd9e6:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd9eb:	e9 a7 04 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84dd9f0:	8b 45 91             	mov    -0x6f(%ebp),%eax
 84dd9f3:	89 c3                	mov    %eax,%ebx
 84dd9f5:	e8 a1 e7 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dd9fa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dd9fe:	89 04 24             	mov    %eax,(%esp)
 84dda01:	e8 2c 20 e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84dda06:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84dda09:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84dda0d:	74 21                	je     84dda30 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x1da>
 84dda0f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84dda12:	89 04 24             	mov    %eax,(%esp)
 84dda15:	e8 9a db da ff       	call   828b5b4 <_ZNK5CItem12isPackagableEv>
 84dda1a:	83 f0 01             	xor    $0x1,%eax
 84dda1d:	84 c0                	test   %al,%al
 84dda1f:	75 0f                	jne    84dda30 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x1da>
 84dda21:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84dda24:	89 04 24             	mov    %eax,(%esp)
 84dda27:	e8 2a ee d4 ff       	call   822c856 <_ZNK5CItem12GetCashPriceEv>
 84dda2c:	85 c0                	test   %eax,%eax
 84dda2e:	74 07                	je     84dda37 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x1e1>
 84dda30:	b8 01 00 00 00       	mov    $0x1,%eax
 84dda35:	eb 05                	jmp    84dda3c <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x1e6>
 84dda37:	b8 00 00 00 00       	mov    $0x0,%eax
 84dda3c:	84 c0                	test   %al,%al
 84dda3e:	74 25                	je     84dda65 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x20f>
 84dda40:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84dda47:	00 
 84dda48:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84dda4f:	00 
 84dda50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dda53:	89 04 24             	mov    %eax,(%esp)
 84dda56:	e8 e7 e4 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84dda5b:	b8 00 00 00 00       	mov    $0x0,%eax
 84dda60:	e9 32 04 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84dda65:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84dda68:	8b 00                	mov    (%eax),%eax
 84dda6a:	83 c0 40             	add    $0x40,%eax
 84dda6d:	8b 10                	mov    (%eax),%edx
 84dda6f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84dda72:	89 04 24             	mov    %eax,(%esp)
 84dda75:	ff d2                	call   *%edx
 84dda77:	84 c0                	test   %al,%al
 84dda79:	74 25                	je     84ddaa0 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x24a>
 84dda7b:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84dda82:	00 
 84dda83:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84dda8a:	00 
 84dda8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dda8e:	89 04 24             	mov    %eax,(%esp)
 84dda91:	e8 ac e4 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84dda96:	b8 00 00 00 00       	mov    $0x0,%eax
 84dda9b:	e9 f7 03 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84ddaa0:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84ddaa3:	89 04 24             	mov    %eax,(%esp)
 84ddaa6:	e8 31 27 c4 ff       	call   81201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>
 84ddaab:	84 c0                	test   %al,%al
 84ddaad:	74 25                	je     84ddad4 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x27e>
 84ddaaf:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84ddab6:	00 
 84ddab7:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84ddabe:	00 
 84ddabf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddac2:	89 04 24             	mov    %eax,(%esp)
 84ddac5:	e8 78 e4 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84ddaca:	b8 00 00 00 00       	mov    $0x0,%eax
 84ddacf:	e9 c3 03 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84ddad4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ddad7:	89 04 24             	mov    %eax,(%esp)
 84ddada:	e8 81 31 c3 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 84ddadf:	85 c0                	test   %eax,%eax
 84ddae1:	75 0f                	jne    84ddaf2 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x29c>
 84ddae3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ddae6:	89 04 24             	mov    %eax,(%esp)
 84ddae9:	e8 18 38 c1 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 84ddaee:	85 c0                	test   %eax,%eax
 84ddaf0:	74 07                	je     84ddaf9 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x2a3>
 84ddaf2:	b8 01 00 00 00       	mov    $0x1,%eax
 84ddaf7:	eb 05                	jmp    84ddafe <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x2a8>
 84ddaf9:	b8 00 00 00 00       	mov    $0x0,%eax
 84ddafe:	84 c0                	test   %al,%al
 84ddb00:	74 51                	je     84ddb53 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x2fd>
 84ddb02:	0f b7 45 9a          	movzwl -0x66(%ebp),%eax
 84ddb06:	0f b7 c0             	movzwl %ax,%eax
 84ddb09:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 84ddb0f:	05 80 4a a5 44       	add    $0x44a54a80,%eax
 84ddb14:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84ddb17:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84ddb1e:	e8 7b e1 be ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84ddb23:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ddb26:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ddb29:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84ddb2c:	7f 25                	jg     84ddb53 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x2fd>
 84ddb2e:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84ddb35:	00 
 84ddb36:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84ddb3d:	00 
 84ddb3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddb41:	89 04 24             	mov    %eax,(%esp)
 84ddb44:	e8 f9 e3 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84ddb49:	b8 00 00 00 00       	mov    $0x0,%eax
 84ddb4e:	e9 44 03 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84ddb53:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ddb56:	89 04 24             	mov    %eax,(%esp)
 84ddb59:	e8 9c 37 c1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84ddb5e:	84 c0                	test   %al,%al
 84ddb60:	74 32                	je     84ddb94 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x33e>
 84ddb62:	8b 55 96             	mov    -0x6a(%ebp),%edx
 84ddb65:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddb68:	8b 40 1b             	mov    0x1b(%eax),%eax
 84ddb6b:	39 c2                	cmp    %eax,%edx
 84ddb6d:	7d 25                	jge    84ddb94 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x33e>
 84ddb6f:	c7 44 24 08 c6 00 00 	movl   $0xc6,0x8(%esp)
 84ddb76:	00 
 84ddb77:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84ddb7e:	00 
 84ddb7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddb82:	89 04 24             	mov    %eax,(%esp)
 84ddb85:	e8 b8 e3 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84ddb8a:	b8 00 00 00 00       	mov    $0x0,%eax
 84ddb8f:	e9 03 03 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84ddb94:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ddb97:	89 04 24             	mov    %eax,(%esp)
 84ddb9a:	e8 43 37 c1 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 84ddb9f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84ddba2:	83 7d dc 01          	cmpl   $0x1,-0x24(%ebp)
 84ddba6:	74 2f                	je     84ddbd7 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x381>
 84ddba8:	83 7d dc 02          	cmpl   $0x2,-0x24(%ebp)
 84ddbac:	74 29                	je     84ddbd7 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x381>
 84ddbae:	83 7d dc 05          	cmpl   $0x5,-0x24(%ebp)
 84ddbb2:	74 23                	je     84ddbd7 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x381>
 84ddbb4:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 84ddbb8:	75 0b                	jne    84ddbc5 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x36f>
 84ddbba:	0f b6 45 8f          	movzbl -0x71(%ebp),%eax
 84ddbbe:	83 f0 01             	xor    $0x1,%eax
 84ddbc1:	84 c0                	test   %al,%al
 84ddbc3:	75 12                	jne    84ddbd7 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x381>
 84ddbc5:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84ddbc8:	83 c0 33             	add    $0x33,%eax
 84ddbcb:	89 04 24             	mov    %eax,(%esp)
 84ddbce:	e8 37 2f c3 ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 84ddbd3:	84 c0                	test   %al,%al
 84ddbd5:	74 07                	je     84ddbde <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x388>
 84ddbd7:	b8 01 00 00 00       	mov    $0x1,%eax
 84ddbdc:	eb 05                	jmp    84ddbe3 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x38d>
 84ddbde:	b8 00 00 00 00       	mov    $0x0,%eax
 84ddbe3:	84 c0                	test   %al,%al
 84ddbe5:	74 25                	je     84ddc0c <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x3b6>
 84ddbe7:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84ddbee:	00 
 84ddbef:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84ddbf6:	00 
 84ddbf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddbfa:	89 04 24             	mov    %eax,(%esp)
 84ddbfd:	e8 40 e3 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84ddc02:	b8 00 00 00 00       	mov    $0x0,%eax
 84ddc07:	e9 8b 02 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84ddc0c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddc0f:	8b 78 1b             	mov    0x1b(%eax),%edi
 84ddc12:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddc15:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 84ddc19:	0f b7 f0             	movzwl %ax,%esi
 84ddc1c:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84ddc1f:	89 04 24             	mov    %eax,(%esp)
 84ddc22:	e8 49 a5 e6 ff       	call   8348170 <_ZN10Inven_Item16GetInventoryTypeEv>
 84ddc27:	89 c3                	mov    %eax,%ebx
 84ddc29:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddc2c:	89 04 24             	mov    %eax,(%esp)
 84ddc2f:	e8 5a c6 bf ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84ddc34:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84ddc3b:	00 
 84ddc3c:	c7 44 24 10 22 00 00 	movl   $0x22,0x10(%esp)
 84ddc43:	00 
 84ddc44:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84ddc48:	89 74 24 08          	mov    %esi,0x8(%esp)
 84ddc4c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ddc50:	89 04 24             	mov    %eax,(%esp)
 84ddc53:	e8 b4 63 02 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 84ddc58:	83 f0 01             	xor    $0x1,%eax
 84ddc5b:	84 c0                	test   %al,%al
 84ddc5d:	74 25                	je     84ddc84 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x42e>
 84ddc5f:	c7 44 24 08 c5 00 00 	movl   $0xc5,0x8(%esp)
 84ddc66:	00 
 84ddc67:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84ddc6e:	00 
 84ddc6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddc72:	89 04 24             	mov    %eax,(%esp)
 84ddc75:	e8 c8 e2 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84ddc7a:	b8 00 00 00 00       	mov    $0x0,%eax
 84ddc7f:	e9 13 02 00 00       	jmp    84dde97 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x641>
 84ddc84:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddc87:	89 04 24             	mov    %eax,(%esp)
 84ddc8a:	e8 c3 21 17 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 84ddc8f:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84ddc95:	89 04 24             	mov    %eax,(%esp)
 84ddc98:	e8 97 b7 00 00       	call   84e9434 <_ZN34Packet_Guild_Guild_Cargo_Push_ItemC1Ev>
 84ddc9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddca0:	89 04 24             	mov    %eax,(%esp)
 84ddca3:	e8 c4 17 d5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84ddca8:	89 85 46 ff ff ff    	mov    %eax,-0xba(%ebp)
 84ddcae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddcb1:	89 04 24             	mov    %eax,(%esp)
 84ddcb4:	e8 95 df be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84ddcb9:	89 85 4a ff ff ff    	mov    %eax,-0xb6(%ebp)
 84ddcbf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddcc2:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 84ddcc6:	88 85 56 ff ff ff    	mov    %al,-0xaa(%ebp)
 84ddccc:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddccf:	8b 40 13             	mov    0x13(%eax),%eax
 84ddcd2:	89 85 4e ff ff ff    	mov    %eax,-0xb2(%ebp)
 84ddcd8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddcdb:	8b 40 1f             	mov    0x1f(%eax),%eax
 84ddcde:	89 85 52 ff ff ff    	mov    %eax,-0xae(%ebp)
 84ddce4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddce7:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 84ddceb:	66 89 45 8d          	mov    %ax,-0x73(%ebp)
 84ddcef:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84ddcf2:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 84ddcf6:	88 45 8c             	mov    %al,-0x74(%ebp)
 84ddcf9:	8b 45 91             	mov    -0x6f(%ebp),%eax
 84ddcfc:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 84ddd02:	8b 45 96             	mov    -0x6a(%ebp),%eax
 84ddd05:	89 85 5d ff ff ff    	mov    %eax,-0xa3(%ebp)
 84ddd0b:	0f b7 45 9a          	movzwl -0x66(%ebp),%eax
 84ddd0f:	66 89 85 61 ff ff ff 	mov    %ax,-0x9f(%ebp)
 84ddd16:	8b 45 9c             	mov    -0x64(%ebp),%eax
 84ddd19:	89 85 63 ff ff ff    	mov    %eax,-0x9d(%ebp)
 84ddd1f:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84ddd22:	89 04 24             	mov    %eax,(%esp)
 84ddd25:	e8 b2 2a c7 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 84ddd2a:	88 85 5c ff ff ff    	mov    %al,-0xa4(%ebp)
 84ddd30:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84ddd36:	83 c0 2c             	add    $0x2c,%eax
 84ddd39:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ddd3d:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84ddd43:	83 c0 2b             	add    $0x2b,%eax
 84ddd46:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ddd4a:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84ddd4d:	83 c0 11             	add    $0x11,%eax
 84ddd50:	89 04 24             	mov    %eax,(%esp)
 84ddd53:	e8 38 f7 f6 ff       	call   844d490 <_ZNK17stAmplifyOption_t9getValuesERhRt>
 84ddd58:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84ddd5b:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 84ddd61:	8b 45 b8             	mov    -0x48(%ebp),%eax
 84ddd64:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 84ddd6a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 84ddd6d:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 84ddd73:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 84ddd77:	66 89 45 80          	mov    %ax,-0x80(%ebp)
 84ddd7b:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84ddd7e:	83 c0 33             	add    $0x33,%eax
 84ddd81:	89 04 24             	mov    %eax,(%esp)
 84ddd84:	e8 cf 0f c4 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84ddd89:	0f b6 c0             	movzbl %al,%eax
 84ddd8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ddd90:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84ddd96:	83 c0 46             	add    $0x46,%eax
 84ddd99:	89 04 24             	mov    %eax,(%esp)
 84ddd9c:	e8 c9 b2 00 00       	call   84e906a <_ZN19UpgradeSeparateInfo18SetUpgradeSeparateEh>
 84ddda1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ddda4:	89 04 24             	mov    %eax,(%esp)
 84ddda7:	e8 4e 35 c1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84dddac:	84 c0                	test   %al,%al
 84dddae:	74 0e                	je     84dddbe <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x568>
 84dddb0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 84dddb3:	8b 40 1b             	mov    0x1b(%eax),%eax
 84dddb6:	89 85 5d ff ff ff    	mov    %eax,-0xa3(%ebp)
 84dddbc:	eb 09                	jmp    84dddc7 <_ZN29Inter_GuildCargoCheckPushItem12dispatch_sigEP5CUserPci+0x571>
 84dddbe:	8b 45 96             	mov    -0x6a(%ebp),%eax
 84dddc1:	89 85 5d ff ff ff    	mov    %eax,-0xa3(%ebp)
 84dddc7:	0f b7 85 3e ff ff ff 	movzwl -0xc2(%ebp),%eax
 84dddce:	0f b7 f0             	movzwl %ax,%esi
 84dddd1:	8d 9d 3c ff ff ff    	lea    -0xc4(%ebp),%ebx
 84dddd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dddda:	89 04 24             	mov    %eax,(%esp)
 84ddddd:	e8 ae de be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84ddde2:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84ddde8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dddec:	89 14 24             	mov    %edx,(%esp)
 84dddef:	e8 c4 f5 c3 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84dddf4:	89 74 24 08          	mov    %esi,0x8(%esp)
 84dddf8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dddfc:	89 04 24             	mov    %eax,(%esp)
 84dddff:	e8 ca fe f8 ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 84dde04:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 84dde0a:	83 c0 46             	add    $0x46,%eax
 84dde0d:	89 04 24             	mov    %eax,(%esp)
 84dde10:	e8 43 0f c4 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84dde15:	0f b6 d0             	movzbl %al,%edx
 84dde18:	0f b6 85 5c ff ff ff 	movzbl -0xa4(%ebp),%eax
 84dde1f:	0f b6 c0             	movzbl %al,%eax
 84dde22:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 84dde28:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 84dde2e:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 84dde34:	0f b7 85 61 ff ff ff 	movzwl -0x9f(%ebp),%eax
 84dde3b:	0f b7 f8             	movzwl %ax,%edi
 84dde3e:	8b b5 5d ff ff ff    	mov    -0xa3(%ebp),%esi
 84dde44:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 84dde4a:	89 c3                	mov    %eax,%ebx
 84dde4c:	8b 8d 4e ff ff ff    	mov    -0xb2(%ebp),%ecx
 84dde52:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dde55:	05 00 97 07 00       	add    $0x79700,%eax
 84dde5a:	89 54 24 20          	mov    %edx,0x20(%esp)
 84dde5e:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 84dde64:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84dde68:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 84dde6e:	89 54 24 18          	mov    %edx,0x18(%esp)
 84dde72:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84dde76:	89 74 24 10          	mov    %esi,0x10(%esp)
 84dde7a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84dde7e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84dde82:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 84dde89:	00 
 84dde8a:	89 04 24             	mov    %eax,(%esp)
 84dde8d:	e8 a6 87 1a 00       	call   8686638 <_ZN15cUserHistoryLog18GuildCargoPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiiih>
 84dde92:	b8 00 00 00 00       	mov    $0x0,%eax
 84dde97:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84dde9a:	83 c4 00             	add    $0x0,%esp
 84dde9d:	5b                   	pop    %ebx
 84dde9e:	5e                   	pop    %esi
 84dde9f:	5f                   	pop    %edi
 84ddea0:	5d                   	pop    %ebp
 84ddea1:	c3                   	ret

```

```c
// Inter_GuildCargoCheckPushItem::dispatch_sig @ 0x84dd856

/* Inter_GuildCargoCheckPushItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoCheckPushItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  uchar uVar4;
  undefined1 uVar5;
  int iVar6;
  CDataManager *this;
  undefined4 uVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  CGuildServerProxy *this_00;
  uint uVar10;
  Packet_Guild_Guild_Cargo_Push_Item local_c8 [2];
  ushort local_c6;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined1 local_ae;
  int local_ac;
  undefined1 local_a8;
  int local_a7;
  ushort local_a3;
  undefined4 local_a1;
  uchar uStack_9d;
  ushort auStack_9c [6];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  UpgradeSeparateInfo aUStack_82 [10];
  undefined1 local_78;
  undefined2 local_77;
  Inven_Item local_75 [2];
  int local_73;
  int local_6e;
  ushort local_6a;
  undefined4 local_68;
  stAmplifyOption_t asStack_64 [20];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  UpgradeSeparateInfo aUStack_42 [10];
  int local_38;
  int local_34;
  undefined4 local_30;
  CItem *local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_38 = param_3;
  iVar6 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar6) &&
     (iVar6 = CUser::get_charac_no((CUser *)param_2,-1), iVar6 == *(int *)(local_38 + 0xe))) {
    if (*(char *)(local_38 + 0x12) == -0x3f) {
      local_34 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      local_30 = GetInvenTypeFromItemSpace(*(undefined1 *)(local_38 + 0x24));
      uVar10 = (uint)*(ushort *)(local_38 + 0x25);
      CInventory::GetInvenSlot((int)local_75,local_34);
      iVar6 = local_73;
      if ((*(int *)(local_38 + 0x17) == 0) || (local_73 != *(int *)(local_38 + 0x17))) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5,uVar10);
      }
      else {
        this = (CDataManager *)G_CDataManager();
        local_2c = (CItem *)CDataManager::find_item(this,iVar6);
        if (((local_2c == (CItem *)0x0) || (cVar3 = CItem::isPackagable(local_2c), cVar3 != '\x01'))
           || (iVar6 = CItem::GetCashPrice(local_2c), iVar6 != 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
        }
        else {
          cVar3 = (**(code **)(*(int *)local_2c + 0x40))(local_2c);
          if (cVar3 == '\0') {
            cVar3 = IsTradeLimitAttachTypeItem(local_75);
            if (cVar3 == '\0') {
              iVar6 = CItem::getUsablePeriod(local_2c);
              if ((iVar6 == 0) && (iVar6 = CItem::getExpirationDate(local_2c), iVar6 == 0)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                local_24 = (uint)local_6a * 0x15180 + 0x44a54a80;
                local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                if (local_24 <= local_20) {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
                  return 0;
                }
              }
              cVar3 = CItem::is_stackable(local_2c);
              if ((cVar3 == '\0') || (*(int *)(local_38 + 0x1b) <= local_6e)) {
                local_28 = CItem::GetAttachType(local_2c);
                if ((((local_28 == 1) || ((local_28 == 2 || (local_28 == 5)))) ||
                    ((local_28 == 3 && (local_75[0] != (Inven_Item)0x1)))) ||
                   (cVar3 = UpgradeSeparateInfo::IsTradeRestriction(aUStack_42), cVar3 != '\0')) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
                }
                else {
                  uVar9 = *(undefined4 *)(local_38 + 0x1b);
                  uVar1 = *(undefined2 *)(local_38 + 0x25);
                  uVar7 = Inven_Item::GetInventoryType(local_75);
                  pCVar8 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
                  cVar3 = CInventory::delete_item(pCVar8,uVar7,uVar1,uVar9,0x22,1);
                  if (cVar3 == '\x01') {
                    CUser::SaveInventory((CUser *)param_2);
                    Packet_Guild_Guild_Cargo_Push_Item::Packet_Guild_Guild_Cargo_Push_Item(local_c8)
                    ;
                    local_be = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
                    local_ba = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
                    local_ae = *(undefined1 *)(local_38 + 0x23);
                    local_b6 = *(undefined4 *)(local_38 + 0x13);
                    local_b2 = *(undefined4 *)(local_38 + 0x1f);
                    local_77 = *(undefined2 *)(local_38 + 0x25);
                    local_78 = *(undefined1 *)(local_38 + 0x24);
                    local_ac = local_73;
                    local_a7 = local_6e;
                    local_a3 = local_6a;
                    local_a1 = local_68;
                    local_a8 = Inven_Item::GetItemAttr(local_75);
                    stAmplifyOption_t::getValues(asStack_64,&uStack_9d,auStack_9c);
                    local_90 = local_50;
                    local_8c = local_4c;
                    local_88 = local_48;
                    local_84 = local_44;
                    uVar4 = UpgradeSeparateInfo::GetUpgradeSeparate(aUStack_42);
                    UpgradeSeparateInfo::SetUpgradeSeparate(aUStack_82,uVar4);
                    cVar3 = CItem::is_stackable(local_2c);
                    if (cVar3 == '\0') {
                      local_a7 = local_6e;
                    }
                    else {
                      local_a7 = *(int *)(local_38 + 0x1b);
                    }
                    uVar9 = CUser::GetServerGroup((CUser *)param_2);
                    this_00 = (CGuildServerProxy *)
                              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                        (GlobalData::s_guild_proxy_mgr,uVar9);
                    CGuildServerProxy::SendTcpPacket(this_00,(char *)local_c8,(uint)local_c6);
                    uVar5 = UpgradeSeparateInfo::GetUpgradeSeparate(aUStack_82);
                    cUserHistoryLog::GuildCargoPushItem
                              ((cUserHistoryLog *)(param_2 + 0x79700),7,local_b6,local_ac,local_a7,
                               local_a3,local_a1,local_a8,uVar5);
                  }
                  else {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
                  }
                }
              }
              else {
                CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc6);
              }
            }
            else {
              CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,0xc5);
          }
        }
      }
    }
    else {
      cUserHistoryLog::GuildCargoCheckPushItemResult
                ((cUserHistoryLog *)(param_2 + 0x79700),6,*(undefined1 *)(local_38 + 0x12),
                 *(undefined4 *)(local_38 + 0x13),*(undefined4 *)(local_38 + 0x17),
                 *(undefined4 *)(local_38 + 0x1b),*(undefined1 *)(local_38 + 0x24),
                 *(undefined2 *)(local_38 + 0x25));
      CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,*(undefined1 *)(local_38 + 0x12));
    }
  }
  return 0;
}

```

