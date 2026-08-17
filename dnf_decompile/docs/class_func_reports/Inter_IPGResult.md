# Inter_IPGResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ceaee Inter_IPGResult::dispatch_sig  [0x084ceaee-0x84ceea1] ===
 84ceaee:	55                   	push   %ebp
 84ceaef:	89 e5                	mov    %esp,%ebp
 84ceaf1:	57                   	push   %edi
 84ceaf2:	56                   	push   %esi
 84ceaf3:	53                   	push   %ebx
 84ceaf4:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 84ceafa:	8b 45 10             	mov    0x10(%ebp),%eax
 84ceafd:	0f b6 00             	movzbl (%eax),%eax
 84ceb00:	88 45 cf             	mov    %al,-0x31(%ebp)
 84ceb03:	80 7d cf 00          	cmpb   $0x0,-0x31(%ebp)
 84ceb07:	0f 85 fb 02 00 00    	jne    84cee08 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x31a>
 84ceb0d:	8b 45 10             	mov    0x10(%ebp),%eax
 84ceb10:	83 c0 01             	add    $0x1,%eax
 84ceb13:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84ceb16:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ceb19:	8b 40 20             	mov    0x20(%eax),%eax
 84ceb1c:	89 c3                	mov    %eax,%ebx
 84ceb1e:	e8 6b d6 bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84ceb23:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84ceb2a:	00 
 84ceb2b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ceb2f:	89 04 24             	mov    %eax,(%esp)
 84ceb32:	e8 6d 5c dc ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 84ceb37:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ceb3a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84ceb3e:	75 0a                	jne    84ceb4a <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x5c>
 84ceb40:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ceb45:	e9 4a 03 00 00       	jmp    84cee94 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x3a6>
 84ceb4a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ceb4d:	89 04 24             	mov    %eax,(%esp)
 84ceb50:	e8 f7 f1 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ceb55:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ceb58:	8b 40 1c             	mov    0x1c(%eax),%eax
 84ceb5b:	83 f8 04             	cmp    $0x4,%eax
 84ceb5e:	75 18                	jne    84ceb78 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x8a>
 84ceb60:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ceb67:	00 
 84ceb68:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ceb6b:	89 04 24             	mov    %eax,(%esp)
 84ceb6e:	e8 b7 1c 18 00       	call   865082a <_ZN5CUser12SendCashDataEb>
 84ceb73:	e9 2a 02 00 00       	jmp    84ceda2 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x2b4>
 84ceb78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ceb7b:	8b 40 1c             	mov    0x1c(%eax),%eax
 84ceb7e:	83 f8 06             	cmp    $0x6,%eax
 84ceb81:	0f 85 98 00 00 00    	jne    84cec1f <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x131>
 84ceb87:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84ceb8c:	8b 00                	mov    (%eax),%eax
 84ceb8e:	83 c0 2c             	add    $0x2c,%eax
 84ceb91:	8b 08                	mov    (%eax),%ecx
 84ceb93:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84ceb98:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84ceb9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ceb9f:	89 04 24             	mov    %eax,(%esp)
 84ceba2:	ff d1                	call   *%ecx
 84ceba4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84ceba7:	05 b3 00 00 00       	add    $0xb3,%eax
 84cebac:	89 45 90             	mov    %eax,-0x70(%ebp)
 84cebaf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cebb2:	0f b6 80 b1 00 00 00 	movzbl 0xb1(%eax),%eax
 84cebb9:	0f be f8             	movsbl %al,%edi
 84cebbc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cebbf:	83 c0 64             	add    $0x64,%eax
 84cebc2:	89 c6                	mov    %eax,%esi
 84cebc4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cebc7:	83 c0 3c             	add    $0x3c,%eax
 84cebca:	89 c3                	mov    %eax,%ebx
 84cebcc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84cebd3:	00 
 84cebd4:	c7 44 24 08 65 2b 00 	movl   $0x2b65,0x8(%esp)
 84cebdb:	00 
 84cebdc:	c7 44 24 04 a0 cf c8 	movl   $0x8c8cfa0,0x4(%esp)
 84cebe3:	08 
 84cebe4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84cebe7:	89 04 24             	mov    %eax,(%esp)
 84cebea:	e8 29 0b 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84cebef:	8b 45 90             	mov    -0x70(%ebp),%eax
 84cebf2:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cebf6:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84cebfa:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84cebfe:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84cec02:	c7 44 24 04 cc 89 c8 	movl   $0x8c889cc,0x4(%esp)
 84cec09:	08 
 84cec0a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84cec0d:	89 04 24             	mov    %eax,(%esp)
 84cec10:	e8 73 0b 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84cec15:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cec1a:	e9 d9 01 00 00       	jmp    84cedf8 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x30a>
 84cec1f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cec22:	8b 40 1c             	mov    0x1c(%eax),%eax
 84cec25:	85 c0                	test   %eax,%eax
 84cec27:	75 7b                	jne    84ceca4 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x1b6>
 84cec29:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cec2c:	0f b6 80 6d 02 00 00 	movzbl 0x26d(%eax),%eax
 84cec33:	0f b6 f8             	movzbl %al,%edi
 84cec36:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cec39:	05 6e 02 00 00       	add    $0x26e,%eax
 84cec3e:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84cec41:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cec44:	83 c0 50             	add    $0x50,%eax
 84cec47:	89 c6                	mov    %eax,%esi
 84cec49:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cec4c:	83 c0 28             	add    $0x28,%eax
 84cec4f:	89 c3                	mov    %eax,%ebx
 84cec51:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84cec58:	00 
 84cec59:	c7 44 24 08 6e 2b 00 	movl   $0x2b6e,0x8(%esp)
 84cec60:	00 
 84cec61:	c7 44 24 04 a0 cf c8 	movl   $0x8c8cfa0,0x4(%esp)
 84cec68:	08 
 84cec69:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84cec6c:	89 04 24             	mov    %eax,(%esp)
 84cec6f:	e8 a4 0a 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84cec74:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84cec78:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84cec7b:	89 44 24 10          	mov    %eax,0x10(%esp)
 84cec7f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84cec83:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84cec87:	c7 44 24 04 08 8a c8 	movl   $0x8c88a08,0x4(%esp)
 84cec8e:	08 
 84cec8f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84cec92:	89 04 24             	mov    %eax,(%esp)
 84cec95:	e8 ee 0a 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84cec9a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cec9f:	e9 54 01 00 00       	jmp    84cedf8 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x30a>
 84ceca4:	c7 44 24 08 43 00 00 	movl   $0x43,0x8(%esp)
 84cecab:	00 
 84cecac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cecb3:	00 
 84cecb4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84cecb7:	89 04 24             	mov    %eax,(%esp)
 84cecba:	e8 3d cc bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cecbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cecc6:	00 
 84cecc7:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84cecca:	89 04 24             	mov    %eax,(%esp)
 84ceccd:	e8 4e cc bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cecd2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cecd9:	00 
 84cecda:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84cecdd:	89 04 24             	mov    %eax,(%esp)
 84cece0:	e8 3b cc bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cece5:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 84cecec:	00 
 84ceced:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84cecf0:	89 04 24             	mov    %eax,(%esp)
 84cecf3:	e8 ac b1 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cecf8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cecff:	00 
 84ced00:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced03:	89 04 24             	mov    %eax,(%esp)
 84ced06:	e8 15 cc bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ced0b:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 84ced12:	00 
 84ced13:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced16:	89 04 24             	mov    %eax,(%esp)
 84ced19:	e8 02 cc bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ced1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ced25:	00 
 84ced26:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced29:	89 04 24             	mov    %eax,(%esp)
 84ced2c:	e8 0b cc bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ced31:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ced38:	00 
 84ced39:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced3c:	89 04 24             	mov    %eax,(%esp)
 84ced3f:	e8 f8 cb bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ced44:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ced4b:	00 
 84ced4c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced4f:	89 04 24             	mov    %eax,(%esp)
 84ced52:	e8 e5 cb bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ced57:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ced5e:	00 
 84ced5f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced62:	89 04 24             	mov    %eax,(%esp)
 84ced65:	e8 d2 cb bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ced6a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ced71:	ff 
 84ced72:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced75:	89 04 24             	mov    %eax,(%esp)
 84ced78:	e8 bf cb bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ced7d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ced84:	00 
 84ced85:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced88:	89 04 24             	mov    %eax,(%esp)
 84ced8b:	e8 c8 cb bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ced90:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84ced93:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ced97:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ced9a:	89 04 24             	mov    %eax,(%esp)
 84ced9d:	e8 18 98 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ceda2:	c7 44 24 14 40 8a c8 	movl   $0x8c88a40,0x14(%esp)
 84ceda9:	08 
 84cedaa:	c7 44 24 10 52 8a c8 	movl   $0x8c88a52,0x10(%esp)
 84cedb1:	08 
 84cedb2:	c7 44 24 0c 96 2b 00 	movl   $0x2b96,0xc(%esp)
 84cedb9:	00 
 84cedba:	c7 44 24 08 a0 cf c8 	movl   $0x8c8cfa0,0x8(%esp)
 84cedc1:	08 
 84cedc2:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cedc9:	08 
 84cedca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cedd1:	e8 34 4e 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cedd6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ceddb:	eb 1b                	jmp    84cedf8 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x30a>
 84ceddd:	89 d3                	mov    %edx,%ebx
 84ceddf:	89 c6                	mov    %eax,%esi
 84cede1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84cede4:	89 04 24             	mov    %eax,(%esp)
 84cede7:	e8 94 f0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cedec:	89 f0                	mov    %esi,%eax
 84cedee:	89 da                	mov    %ebx,%edx
 84cedf0:	89 04 24             	mov    %eax,(%esp)
 84cedf3:	e8 58 49 61 00       	call   8ae3750 <_Unwind_Resume>
 84cedf8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84cedfb:	89 04 24             	mov    %eax,(%esp)
 84cedfe:	e8 7d f0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cee03:	e9 8c 00 00 00       	jmp    84cee94 <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x3a6>
 84cee08:	8b 45 10             	mov    0x10(%ebp),%eax
 84cee0b:	83 c0 01             	add    $0x1,%eax
 84cee0e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84cee11:	8b 45 10             	mov    0x10(%ebp),%eax
 84cee14:	05 dd 02 00 00       	add    $0x2dd,%eax
 84cee19:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84cee1c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cee1f:	8b 40 20             	mov    0x20(%eax),%eax
 84cee22:	89 c3                	mov    %eax,%ebx
 84cee24:	e8 65 d3 bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84cee29:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 84cee30:	00 
 84cee31:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cee35:	89 04 24             	mov    %eax,(%esp)
 84cee38:	e8 67 59 dc ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 84cee3d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84cee40:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cee43:	8b 80 d8 02 00 00    	mov    0x2d8(%eax),%eax
 84cee49:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84cee4c:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84cee50:	74 29                	je     84cee7b <_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci+0x38d>
 84cee52:	a1 60 f7 41 09       	mov    0x941f760,%eax
 84cee57:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84cee5a:	89 54 24 10          	mov    %edx,0x10(%esp)
 84cee5e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84cee61:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84cee65:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84cee68:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cee6c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84cee6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cee73:	89 04 24             	mov    %eax,(%esp)
 84cee76:	e8 7b d6 07 00       	call   854c4f6 <_ZN18ItemVendingMachine18ProcessIPGUserDataEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>
 84cee7b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84cee80:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84cee83:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cee87:	89 04 24             	mov    %eax,(%esp)
 84cee8a:	e8 99 0c dc ff       	call   828fb28 <_ZN10StreamPool4FreeEP6Stream>
 84cee8f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cee94:	89 d8                	mov    %ebx,%eax
 84cee96:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 84cee9c:	5b                   	pop    %ebx
 84cee9d:	5e                   	pop    %esi
 84cee9e:	5f                   	pop    %edi
 84cee9f:	5d                   	pop    %ebp
 84ceea0:	c3                   	ret
 84ceea1:	90                   	nop

```

```c
// Inter_IPGResult::dispatch_sig @ 0x84ceaee

/* Inter_IPGResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_IPGResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  PacketGuard local_64 [12];
  cMyTrace local_58 [16];
  cMyTrace local_48 [19];
  char local_35;
  SIPGData *local_34;
  SIPGData *local_30;
  CUser *local_2c;
  Stream *local_28;
  int local_24;
  CUser *local_20;
  
  local_35 = *(char *)param_3;
  if (local_35 != '\0') {
    local_34 = (SIPGData *)(param_3 + 1);
    local_30 = (SIPGData *)(param_3 + 0x2dd);
    iVar4 = *(int *)(param_3 + 0x21);
    iVar3 = G_CGameManager();
    local_2c = (CUser *)CGameManager::getUser(iVar3,iVar4);
    local_28 = *(Stream **)(local_34 + 0x2d8);
    if (local_2c != (CUser *)0x0) {
      ItemVendingMachine::ProcessIPGUserData
                (GlobalData::s_pItemVendingMachine,local_2c,local_30,local_34,local_28);
    }
    StreamPool::Free(GlobalData::s_stream_pool,local_28);
    return 0;
  }
  local_24 = param_3 + 1;
  iVar4 = *(int *)(param_3 + 0x21);
  iVar3 = G_CGameManager();
  uVar6 = 10;
  local_20 = (CUser *)CGameManager::getUser(iVar3,iVar4);
  if (local_20 == (CUser *)0x0) {
    return 0;
  }
  PacketGuard::PacketGuard(local_64);
  if (*(int *)(local_24 + 0x1c) == 4) {
                    /* try { // try from 084ceb6e to 084cedd5 has its CatchHandler @ 084ceddd */
    CUser::SendCashData(local_20,true);
  }
  else {
    if (*(int *)(local_24 + 0x1c) == 6) {
      (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,local_20,uVar6);
      iVar4 = local_24 + 0xb3;
      cVar1 = *(char *)(local_24 + 0xb1);
      iVar3 = local_24 + 100;
      iVar5 = local_24 + 0x3c;
      cMyTrace::cMyTrace(local_58,"virtual int Inter_IPGResult::dispatch_sig(CUser*, char*, int)",
                         0x2b65,0);
      cMyTrace::operator()
                (local_58,"[Taiwan, Billing] ChargePointQuery Result:%s, %s, %d, %s",iVar5,iVar3,
                 (int)cVar1,iVar4);
      goto LAB_084cedf8;
    }
    if (*(int *)(local_24 + 0x1c) == 0) {
      bVar2 = *(byte *)(local_24 + 0x26d);
      iVar4 = local_24 + 0x26e;
      iVar3 = local_24 + 0x50;
      iVar5 = local_24 + 0x28;
      cMyTrace::cMyTrace(local_48,"virtual int Inter_IPGResult::dispatch_sig(CUser*, char*, int)",
                         0x2b6e,0);
      cMyTrace::operator()
                (local_48,"[Taiwan, Billing] ChargeCeraQuery Result:%s, %s, %s, %d",iVar5,iVar3,
                 iVar4,(uint)bVar2);
      goto LAB_084cedf8;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x43);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,0x19);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0x19);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,-1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    CUser::Send(local_20,local_64);
  }
  LogManager::logFormat
            (1,"InterDispatcher.cpp","virtual int Inter_IPGResult::dispatch_sig(CUser*, char*, int)"
             ,0x2b96,"IPG ERROR (%s)","IPG Network Error");
LAB_084cedf8:
  PacketGuard::~PacketGuard(local_64);
  return 0;
}

```

