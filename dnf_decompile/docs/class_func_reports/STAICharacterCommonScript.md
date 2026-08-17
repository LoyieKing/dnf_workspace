# STAICharacterCommonScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## STAICharacterCommonScript

```asm
// === 088c8a78 STAICharacterCommonScript::STAICharacterCommonScript  [0x088c8a78-0x88c903b] ===
 88c8a78:	55                   	push   %ebp
 88c8a79:	89 e5                	mov    %esp,%ebp
 88c8a7b:	57                   	push   %edi
 88c8a7c:	56                   	push   %esi
 88c8a7d:	53                   	push   %ebx
 88c8a7e:	83 ec 2c             	sub    $0x2c,%esp
 88c8a81:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8a84:	c7 00 f0 a1 e0 08    	movl   $0x8e0a1f0,(%eax)
 88c8a8a:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8a8d:	83 c0 04             	add    $0x4,%eax
 88c8a90:	89 04 24             	mov    %eax,(%esp)
 88c8a93:	e8 4a 39 00 00       	call   88cc3e2 <_ZN11MinimumInfoC1Ev>
 88c8a98:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8a9b:	83 c0 0c             	add    $0xc,%eax
 88c8a9e:	89 04 24             	mov    %eax,(%esp)
 88c8aa1:	e8 98 ec a9 ff       	call   836773e <_ZN19STRDCharacterStatusC1Ev>
 88c8aa6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8aa9:	83 c0 64             	add    $0x64,%eax
 88c8aac:	89 04 24             	mov    %eax,(%esp)
 88c8aaf:	e8 3e 3a 00 00       	call   88cc4f2 <_ZNSt6vectorI26STAICharacterEquipmentDataSaIS0_EEC1Ev>
 88c8ab4:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8ab7:	8d 70 70             	lea    0x70(%eax),%esi
 88c8aba:	89 f7                	mov    %esi,%edi
 88c8abc:	bb 01 00 00 00       	mov    $0x1,%ebx
 88c8ac1:	eb 0e                	jmp    88c8ad1 <_ZN25STAICharacterCommonScriptC1Ev+0x59>
 88c8ac3:	89 3c 24             	mov    %edi,(%esp)
 88c8ac6:	e8 99 3a 00 00       	call   88cc564 <_ZNSt6vectorI22STAICharacterSkillDataSaIS0_EEC1Ev>
 88c8acb:	83 c7 0c             	add    $0xc,%edi
 88c8ace:	83 eb 01             	sub    $0x1,%ebx
 88c8ad1:	83 fb ff             	cmp    $0xffffffff,%ebx
 88c8ad4:	0f 95 c0             	setne  %al
 88c8ad7:	84 c0                	test   %al,%al
 88c8ad9:	75 e8                	jne    88c8ac3 <_ZN25STAICharacterCommonScriptC1Ev+0x4b>
 88c8adb:	eb 39                	jmp    88c8b16 <_ZN25STAICharacterCommonScriptC1Ev+0x9e>
 88c8add:	89 d7                	mov    %edx,%edi
 88c8adf:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88c8ae2:	85 f6                	test   %esi,%esi
 88c8ae4:	74 26                	je     88c8b0c <_ZN25STAICharacterCommonScriptC1Ev+0x94>
 88c8ae6:	b8 01 00 00 00       	mov    $0x1,%eax
 88c8aeb:	29 d8                	sub    %ebx,%eax
 88c8aed:	89 c2                	mov    %eax,%edx
 88c8aef:	89 d0                	mov    %edx,%eax
 88c8af1:	01 c0                	add    %eax,%eax
 88c8af3:	01 d0                	add    %edx,%eax
 88c8af5:	c1 e0 02             	shl    $0x2,%eax
 88c8af8:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 88c8afb:	39 f3                	cmp    %esi,%ebx
 88c8afd:	74 0d                	je     88c8b0c <_ZN25STAICharacterCommonScriptC1Ev+0x94>
 88c8aff:	83 eb 0c             	sub    $0xc,%ebx
 88c8b02:	89 1c 24             	mov    %ebx,(%esp)
 88c8b05:	e8 6e 3a 00 00       	call   88cc578 <_ZNSt6vectorI22STAICharacterSkillDataSaIS0_EED1Ev>
 88c8b0a:	eb ef                	jmp    88c8afb <_ZN25STAICharacterCommonScriptC1Ev+0x83>
 88c8b0c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88c8b0f:	89 fa                	mov    %edi,%edx
 88c8b11:	e9 e7 04 00 00       	jmp    88c8ffd <_ZN25STAICharacterCommonScriptC1Ev+0x585>
 88c8b16:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8b19:	05 88 00 00 00       	add    $0x88,%eax
 88c8b1e:	89 04 24             	mov    %eax,(%esp)
 88c8b21:	e8 b0 3a 00 00       	call   88cc5d6 <_ZNSt6vectorI28STAICharacterSkillCorrectionSaIS0_EEC1Ev>
 88c8b26:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8b29:	8d b0 94 00 00 00    	lea    0x94(%eax),%esi
 88c8b2f:	89 f7                	mov    %esi,%edi
 88c8b31:	bb 01 00 00 00       	mov    $0x1,%ebx
 88c8b36:	eb 0e                	jmp    88c8b46 <_ZN25STAICharacterCommonScriptC1Ev+0xce>
 88c8b38:	89 3c 24             	mov    %edi,(%esp)
 88c8b3b:	e8 08 3b 00 00       	call   88cc648 <_ZNSt6vectorI21STAICharacterItemDataSaIS0_EEC1Ev>
 88c8b40:	83 c7 0c             	add    $0xc,%edi
 88c8b43:	83 eb 01             	sub    $0x1,%ebx
 88c8b46:	83 fb ff             	cmp    $0xffffffff,%ebx
 88c8b49:	0f 95 c0             	setne  %al
 88c8b4c:	84 c0                	test   %al,%al
 88c8b4e:	75 e8                	jne    88c8b38 <_ZN25STAICharacterCommonScriptC1Ev+0xc0>
 88c8b50:	eb 39                	jmp    88c8b8b <_ZN25STAICharacterCommonScriptC1Ev+0x113>
 88c8b52:	89 d7                	mov    %edx,%edi
 88c8b54:	89 45 e0             	mov    %eax,-0x20(%ebp)
 88c8b57:	85 f6                	test   %esi,%esi
 88c8b59:	74 26                	je     88c8b81 <_ZN25STAICharacterCommonScriptC1Ev+0x109>
 88c8b5b:	b8 01 00 00 00       	mov    $0x1,%eax
 88c8b60:	29 d8                	sub    %ebx,%eax
 88c8b62:	89 c2                	mov    %eax,%edx
 88c8b64:	89 d0                	mov    %edx,%eax
 88c8b66:	01 c0                	add    %eax,%eax
 88c8b68:	01 d0                	add    %edx,%eax
 88c8b6a:	c1 e0 02             	shl    $0x2,%eax
 88c8b6d:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 88c8b70:	39 f3                	cmp    %esi,%ebx
 88c8b72:	74 0d                	je     88c8b81 <_ZN25STAICharacterCommonScriptC1Ev+0x109>
 88c8b74:	83 eb 0c             	sub    $0xc,%ebx
 88c8b77:	89 1c 24             	mov    %ebx,(%esp)
 88c8b7a:	e8 dd 3a 00 00       	call   88cc65c <_ZNSt6vectorI21STAICharacterItemDataSaIS0_EED1Ev>
 88c8b7f:	eb ef                	jmp    88c8b70 <_ZN25STAICharacterCommonScriptC1Ev+0xf8>
 88c8b81:	8b 45 e0             	mov    -0x20(%ebp),%eax
 88c8b84:	89 fa                	mov    %edi,%edx
 88c8b86:	e9 26 04 00 00       	jmp    88c8fb1 <_ZN25STAICharacterCommonScriptC1Ev+0x539>
 88c8b8b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8b8e:	05 ac 00 00 00       	add    $0xac,%eax
 88c8b93:	89 04 24             	mov    %eax,(%esp)
 88c8b96:	e8 ad e3 a9 ff       	call   8366f48 <_ZN14STAIInfoScriptC1Ev>
 88c8b9b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8b9e:	05 d0 02 00 00       	add    $0x2d0,%eax
 88c8ba3:	89 04 24             	mov    %eax,(%esp)
 88c8ba6:	e8 b5 43 80 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 88c8bab:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8bae:	05 dc 02 00 00       	add    $0x2dc,%eax
 88c8bb3:	89 04 24             	mov    %eax,(%esp)
 88c8bb6:	e8 a5 43 80 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 88c8bbb:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8bbe:	05 e8 02 00 00       	add    $0x2e8,%eax
 88c8bc3:	89 04 24             	mov    %eax,(%esp)
 88c8bc6:	e8 1f 40 8b ff       	call   817cbea <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEC1Ev>
 88c8bcb:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8bce:	8d b0 00 03 00 00    	lea    0x300(%eax),%esi
 88c8bd4:	89 f7                	mov    %esi,%edi
 88c8bd6:	bb 6e 00 00 00       	mov    $0x6e,%ebx
 88c8bdb:	eb 0e                	jmp    88c8beb <_ZN25STAICharacterCommonScriptC1Ev+0x173>
 88c8bdd:	89 3c 24             	mov    %edi,(%esp)
 88c8be0:	e8 43 37 00 00       	call   88cc328 <_ZN9APCSpeechC1Ev>
 88c8be5:	83 c7 18             	add    $0x18,%edi
 88c8be8:	83 eb 01             	sub    $0x1,%ebx
 88c8beb:	83 fb ff             	cmp    $0xffffffff,%ebx
 88c8bee:	0f 95 c0             	setne  %al
 88c8bf1:	84 c0                	test   %al,%al
 88c8bf3:	75 e8                	jne    88c8bdd <_ZN25STAICharacterCommonScriptC1Ev+0x165>
 88c8bf5:	eb 39                	jmp    88c8c30 <_ZN25STAICharacterCommonScriptC1Ev+0x1b8>
 88c8bf7:	89 d7                	mov    %edx,%edi
 88c8bf9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88c8bfc:	85 f6                	test   %esi,%esi
 88c8bfe:	74 26                	je     88c8c26 <_ZN25STAICharacterCommonScriptC1Ev+0x1ae>
 88c8c00:	b8 6e 00 00 00       	mov    $0x6e,%eax
 88c8c05:	29 d8                	sub    %ebx,%eax
 88c8c07:	89 c2                	mov    %eax,%edx
 88c8c09:	89 d0                	mov    %edx,%eax
 88c8c0b:	01 c0                	add    %eax,%eax
 88c8c0d:	01 d0                	add    %edx,%eax
 88c8c0f:	c1 e0 03             	shl    $0x3,%eax
 88c8c12:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 88c8c15:	39 f3                	cmp    %esi,%ebx
 88c8c17:	74 0d                	je     88c8c26 <_ZN25STAICharacterCommonScriptC1Ev+0x1ae>
 88c8c19:	83 eb 18             	sub    $0x18,%ebx
 88c8c1c:	89 1c 24             	mov    %ebx,(%esp)
 88c8c1f:	e8 e6 37 00 00       	call   88cc40a <_ZN9APCSpeechD1Ev>
 88c8c24:	eb ef                	jmp    88c8c15 <_ZN25STAICharacterCommonScriptC1Ev+0x19d>
 88c8c26:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88c8c29:	89 fa                	mov    %edi,%edx
 88c8c2b:	e9 e1 02 00 00       	jmp    88c8f11 <_ZN25STAICharacterCommonScriptC1Ev+0x499>
 88c8c30:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8c33:	05 68 0d 00 00       	add    $0xd68,%eax
 88c8c38:	89 04 24             	mov    %eax,(%esp)
 88c8c3b:	e8 7a 3a 00 00       	call   88cc6ba <_ZNSt6vectorI9APCSpeechSaIS0_EEC1Ev>
 88c8c40:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8c43:	05 74 0d 00 00       	add    $0xd74,%eax
 88c8c48:	89 04 24             	mov    %eax,(%esp)
 88c8c4b:	e8 6a 3a 00 00       	call   88cc6ba <_ZNSt6vectorI9APCSpeechSaIS0_EEC1Ev>
 88c8c50:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8c53:	05 88 0d 00 00       	add    $0xd88,%eax
 88c8c58:	89 04 24             	mov    %eax,(%esp)
 88c8c5b:	e8 76 bd 86 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 88c8c60:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8c63:	05 94 0d 00 00       	add    $0xd94,%eax
 88c8c68:	89 04 24             	mov    %eax,(%esp)
 88c8c6b:	e8 66 bd 86 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 88c8c70:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8c73:	05 ac 0d 00 00       	add    $0xdac,%eax
 88c8c78:	89 04 24             	mov    %eax,(%esp)
 88c8c7b:	e8 7a 36 00 00       	call   88cc2fa <_ZN23STRDCharacterStatusRateC1Ev>
 88c8c80:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8c83:	05 50 0e 00 00       	add    $0xe50,%eax
 88c8c88:	89 04 24             	mov    %eax,(%esp)
 88c8c8b:	e8 9c 3a 00 00       	call   88cc72c <_ZNSt6vectorI29STAICharacterCustomSkillLevelSaIS0_EEC1Ev>
 88c8c90:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8c93:	05 6c 0e 00 00       	add    $0xe6c,%eax
 88c8c98:	89 04 24             	mov    %eax,(%esp)
 88c8c9b:	e8 0c 55 7c ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 88c8ca0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8ca3:	05 78 0e 00 00       	add    $0xe78,%eax
 88c8ca8:	89 04 24             	mov    %eax,(%esp)
 88c8cab:	e8 4a 36 00 00       	call   88cc2fa <_ZN23STRDCharacterStatusRateC1Ev>
 88c8cb0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8cb3:	05 20 0f 00 00       	add    $0xf20,%eax
 88c8cb8:	89 04 24             	mov    %eax,(%esp)
 88c8cbb:	e8 ec 54 7c ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 88c8cc0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8cc3:	05 2c 0f 00 00       	add    $0xf2c,%eax
 88c8cc8:	89 04 24             	mov    %eax,(%esp)
 88c8ccb:	e8 fc 8b ab ff       	call   83818cc <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EEC1Ev>
 88c8cd0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8cd3:	05 38 0f 00 00       	add    $0xf38,%eax
 88c8cd8:	89 04 24             	mov    %eax,(%esp)
 88c8cdb:	e8 cc 54 7c ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 88c8ce0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8ce3:	05 50 0f 00 00       	add    $0xf50,%eax
 88c8ce8:	89 04 24             	mov    %eax,(%esp)
 88c8ceb:	e8 f8 00 aa ff       	call   8368de8 <_ZN23stEnamyDropAvatarInfo_tC1Ev>
 88c8cf0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8cf3:	05 90 0f 00 00       	add    $0xf90,%eax
 88c8cf8:	89 04 24             	mov    %eax,(%esp)
 88c8cfb:	e8 c2 37 00 00       	call   88cc4c2 <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EEC1Ev>
 88c8d00:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d03:	05 9c 0f 00 00       	add    $0xf9c,%eax
 88c8d08:	89 04 24             	mov    %eax,(%esp)
 88c8d0b:	e8 2c b8 ab ff       	call   838453c <_ZNSt6vectorIfSaIfEEC1Ev>
 88c8d10:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d13:	05 ac 0f 00 00       	add    $0xfac,%eax
 88c8d18:	89 04 24             	mov    %eax,(%esp)
 88c8d1b:	e8 ce f1 a9 ff       	call   8367eee <_ZN19ActiveActionFileSetC1Ev>
 88c8d20:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d23:	05 ec 0f 00 00       	add    $0xfec,%eax
 88c8d28:	89 04 24             	mov    %eax,(%esp)
 88c8d2b:	e8 a0 d8 e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88c8d30:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d33:	05 f0 0f 00 00       	add    $0xff0,%eax
 88c8d38:	89 04 24             	mov    %eax,(%esp)
 88c8d3b:	e8 90 d8 e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88c8d40:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d43:	89 04 24             	mov    %eax,(%esp)
 88c8d46:	e8 47 08 00 00       	call   88c9592 <_ZN25STAICharacterCommonScript5clearEv>
 88c8d4b:	e9 e3 02 00 00       	jmp    88c9033 <_ZN25STAICharacterCommonScriptC1Ev+0x5bb>
 88c8d50:	89 d3                	mov    %edx,%ebx
 88c8d52:	89 c6                	mov    %eax,%esi
 88c8d54:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d57:	05 f0 0f 00 00       	add    $0xff0,%eax
 88c8d5c:	89 04 24             	mov    %eax,(%esp)
 88c8d5f:	e8 7c ee e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88c8d64:	89 f0                	mov    %esi,%eax
 88c8d66:	89 da                	mov    %ebx,%edx
 88c8d68:	eb 00                	jmp    88c8d6a <_ZN25STAICharacterCommonScriptC1Ev+0x2f2>
 88c8d6a:	89 d3                	mov    %edx,%ebx
 88c8d6c:	89 c6                	mov    %eax,%esi
 88c8d6e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d71:	05 ec 0f 00 00       	add    $0xfec,%eax
 88c8d76:	89 04 24             	mov    %eax,(%esp)
 88c8d79:	e8 62 ee e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88c8d7e:	89 f0                	mov    %esi,%eax
 88c8d80:	89 da                	mov    %ebx,%edx
 88c8d82:	eb 00                	jmp    88c8d84 <_ZN25STAICharacterCommonScriptC1Ev+0x30c>
 88c8d84:	89 d3                	mov    %edx,%ebx
 88c8d86:	89 c6                	mov    %eax,%esi
 88c8d88:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8d8b:	05 ac 0f 00 00       	add    $0xfac,%eax
 88c8d90:	89 04 24             	mov    %eax,(%esp)
 88c8d93:	e8 5c f3 a9 ff       	call   83680f4 <_ZN19ActiveActionFileSetD1Ev>
 88c8d98:	89 f0                	mov    %esi,%eax
 88c8d9a:	89 da                	mov    %ebx,%edx
 88c8d9c:	eb 00                	jmp    88c8d9e <_ZN25STAICharacterCommonScriptC1Ev+0x326>
 88c8d9e:	89 d3                	mov    %edx,%ebx
 88c8da0:	89 c6                	mov    %eax,%esi
 88c8da2:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8da5:	05 9c 0f 00 00       	add    $0xf9c,%eax
 88c8daa:	89 04 24             	mov    %eax,(%esp)
 88c8dad:	e8 9e b7 ab ff       	call   8384550 <_ZNSt6vectorIfSaIfEED1Ev>
 88c8db2:	89 f0                	mov    %esi,%eax
 88c8db4:	89 da                	mov    %ebx,%edx
 88c8db6:	eb 00                	jmp    88c8db8 <_ZN25STAICharacterCommonScriptC1Ev+0x340>
 88c8db8:	89 d3                	mov    %edx,%ebx
 88c8dba:	89 c6                	mov    %eax,%esi
 88c8dbc:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8dbf:	05 90 0f 00 00       	add    $0xf90,%eax
 88c8dc4:	89 04 24             	mov    %eax,(%esp)
 88c8dc7:	e8 d4 6a ab ff       	call   837f8a0 <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EED1Ev>
 88c8dcc:	89 f0                	mov    %esi,%eax
 88c8dce:	89 da                	mov    %ebx,%edx
 88c8dd0:	eb 00                	jmp    88c8dd2 <_ZN25STAICharacterCommonScriptC1Ev+0x35a>
 88c8dd2:	89 d3                	mov    %edx,%ebx
 88c8dd4:	89 c6                	mov    %eax,%esi
 88c8dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8dd9:	05 50 0f 00 00       	add    $0xf50,%eax
 88c8dde:	89 04 24             	mov    %eax,(%esp)
 88c8de1:	e8 18 00 aa ff       	call   8368dfe <_ZN23stEnamyDropAvatarInfo_tD1Ev>
 88c8de6:	89 f0                	mov    %esi,%eax
 88c8de8:	89 da                	mov    %ebx,%edx
 88c8dea:	eb 00                	jmp    88c8dec <_ZN25STAICharacterCommonScriptC1Ev+0x374>
 88c8dec:	89 d3                	mov    %edx,%ebx
 88c8dee:	89 c6                	mov    %eax,%esi
 88c8df0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8df3:	05 38 0f 00 00       	add    $0xf38,%eax
 88c8df8:	89 04 24             	mov    %eax,(%esp)
 88c8dfb:	e8 da af 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c8e00:	89 f0                	mov    %esi,%eax
 88c8e02:	89 da                	mov    %ebx,%edx
 88c8e04:	eb 00                	jmp    88c8e06 <_ZN25STAICharacterCommonScriptC1Ev+0x38e>
 88c8e06:	89 d3                	mov    %edx,%ebx
 88c8e08:	89 c6                	mov    %eax,%esi
 88c8e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8e0d:	05 2c 0f 00 00       	add    $0xf2c,%eax
 88c8e12:	89 04 24             	mov    %eax,(%esp)
 88c8e15:	e8 c6 8a ab ff       	call   83818e0 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EED1Ev>
 88c8e1a:	89 f0                	mov    %esi,%eax
 88c8e1c:	89 da                	mov    %ebx,%edx
 88c8e1e:	eb 00                	jmp    88c8e20 <_ZN25STAICharacterCommonScriptC1Ev+0x3a8>
 88c8e20:	89 d3                	mov    %edx,%ebx
 88c8e22:	89 c6                	mov    %eax,%esi
 88c8e24:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8e27:	05 20 0f 00 00       	add    $0xf20,%eax
 88c8e2c:	89 04 24             	mov    %eax,(%esp)
 88c8e2f:	e8 a6 af 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c8e34:	89 f0                	mov    %esi,%eax
 88c8e36:	89 da                	mov    %ebx,%edx
 88c8e38:	eb 00                	jmp    88c8e3a <_ZN25STAICharacterCommonScriptC1Ev+0x3c2>
 88c8e3a:	89 d3                	mov    %edx,%ebx
 88c8e3c:	89 c6                	mov    %eax,%esi
 88c8e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8e41:	05 6c 0e 00 00       	add    $0xe6c,%eax
 88c8e46:	89 04 24             	mov    %eax,(%esp)
 88c8e49:	e8 8c af 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c8e4e:	89 f0                	mov    %esi,%eax
 88c8e50:	89 da                	mov    %ebx,%edx
 88c8e52:	eb 00                	jmp    88c8e54 <_ZN25STAICharacterCommonScriptC1Ev+0x3dc>
 88c8e54:	89 d3                	mov    %edx,%ebx
 88c8e56:	89 c6                	mov    %eax,%esi
 88c8e58:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8e5b:	05 50 0e 00 00       	add    $0xe50,%eax
 88c8e60:	89 04 24             	mov    %eax,(%esp)
 88c8e63:	e8 d8 38 00 00       	call   88cc740 <_ZNSt6vectorI29STAICharacterCustomSkillLevelSaIS0_EED1Ev>
 88c8e68:	89 f0                	mov    %esi,%eax
 88c8e6a:	89 da                	mov    %ebx,%edx
 88c8e6c:	eb 00                	jmp    88c8e6e <_ZN25STAICharacterCommonScriptC1Ev+0x3f6>
 88c8e6e:	89 d3                	mov    %edx,%ebx
 88c8e70:	89 c6                	mov    %eax,%esi
 88c8e72:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8e75:	05 94 0d 00 00       	add    $0xd94,%eax
 88c8e7a:	89 04 24             	mov    %eax,(%esp)
 88c8e7d:	e8 68 bb 86 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88c8e82:	89 f0                	mov    %esi,%eax
 88c8e84:	89 da                	mov    %ebx,%edx
 88c8e86:	eb 00                	jmp    88c8e88 <_ZN25STAICharacterCommonScriptC1Ev+0x410>
 88c8e88:	89 d3                	mov    %edx,%ebx
 88c8e8a:	89 c6                	mov    %eax,%esi
 88c8e8c:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8e8f:	05 88 0d 00 00       	add    $0xd88,%eax
 88c8e94:	89 04 24             	mov    %eax,(%esp)
 88c8e97:	e8 4e bb 86 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88c8e9c:	89 f0                	mov    %esi,%eax
 88c8e9e:	89 da                	mov    %ebx,%edx
 88c8ea0:	eb 00                	jmp    88c8ea2 <_ZN25STAICharacterCommonScriptC1Ev+0x42a>
 88c8ea2:	89 d3                	mov    %edx,%ebx
 88c8ea4:	89 c6                	mov    %eax,%esi
 88c8ea6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8ea9:	05 74 0d 00 00       	add    $0xd74,%eax
 88c8eae:	89 04 24             	mov    %eax,(%esp)
 88c8eb1:	e8 18 38 00 00       	call   88cc6ce <_ZNSt6vectorI9APCSpeechSaIS0_EED1Ev>
 88c8eb6:	89 f0                	mov    %esi,%eax
 88c8eb8:	89 da                	mov    %ebx,%edx
 88c8eba:	eb 00                	jmp    88c8ebc <_ZN25STAICharacterCommonScriptC1Ev+0x444>
 88c8ebc:	89 d3                	mov    %edx,%ebx
 88c8ebe:	89 c6                	mov    %eax,%esi
 88c8ec0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8ec3:	05 68 0d 00 00       	add    $0xd68,%eax
 88c8ec8:	89 04 24             	mov    %eax,(%esp)
 88c8ecb:	e8 fe 37 00 00       	call   88cc6ce <_ZNSt6vectorI9APCSpeechSaIS0_EED1Ev>
 88c8ed0:	89 f0                	mov    %esi,%eax
 88c8ed2:	89 da                	mov    %ebx,%edx
 88c8ed4:	eb 00                	jmp    88c8ed6 <_ZN25STAICharacterCommonScriptC1Ev+0x45e>
 88c8ed6:	89 d6                	mov    %edx,%esi
 88c8ed8:	89 c7                	mov    %eax,%edi
 88c8eda:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8edd:	05 00 03 00 00       	add    $0x300,%eax
 88c8ee2:	85 c0                	test   %eax,%eax
 88c8ee4:	74 27                	je     88c8f0d <_ZN25STAICharacterCommonScriptC1Ev+0x495>
 88c8ee6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8ee9:	05 00 03 00 00       	add    $0x300,%eax
 88c8eee:	8d 98 68 0a 00 00    	lea    0xa68(%eax),%ebx
 88c8ef4:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8ef7:	05 00 03 00 00       	add    $0x300,%eax
 88c8efc:	39 c3                	cmp    %eax,%ebx
 88c8efe:	74 0d                	je     88c8f0d <_ZN25STAICharacterCommonScriptC1Ev+0x495>
 88c8f00:	83 eb 18             	sub    $0x18,%ebx
 88c8f03:	89 1c 24             	mov    %ebx,(%esp)
 88c8f06:	e8 ff 34 00 00       	call   88cc40a <_ZN9APCSpeechD1Ev>
 88c8f0b:	eb e7                	jmp    88c8ef4 <_ZN25STAICharacterCommonScriptC1Ev+0x47c>
 88c8f0d:	89 f8                	mov    %edi,%eax
 88c8f0f:	89 f2                	mov    %esi,%edx
 88c8f11:	89 d3                	mov    %edx,%ebx
 88c8f13:	89 c6                	mov    %eax,%esi
 88c8f15:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8f18:	05 e8 02 00 00       	add    $0x2e8,%eax
 88c8f1d:	89 04 24             	mov    %eax,(%esp)
 88c8f20:	e8 b1 3c 8b ff       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 88c8f25:	89 f0                	mov    %esi,%eax
 88c8f27:	89 da                	mov    %ebx,%edx
 88c8f29:	eb 00                	jmp    88c8f2b <_ZN25STAICharacterCommonScriptC1Ev+0x4b3>
 88c8f2b:	89 d3                	mov    %edx,%ebx
 88c8f2d:	89 c6                	mov    %eax,%esi
 88c8f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8f32:	05 dc 02 00 00       	add    $0x2dc,%eax
 88c8f37:	89 04 24             	mov    %eax,(%esp)
 88c8f3a:	e8 35 40 80 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 88c8f3f:	89 f0                	mov    %esi,%eax
 88c8f41:	89 da                	mov    %ebx,%edx
 88c8f43:	eb 00                	jmp    88c8f45 <_ZN25STAICharacterCommonScriptC1Ev+0x4cd>
 88c8f45:	89 d3                	mov    %edx,%ebx
 88c8f47:	89 c6                	mov    %eax,%esi
 88c8f49:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8f4c:	05 d0 02 00 00       	add    $0x2d0,%eax
 88c8f51:	89 04 24             	mov    %eax,(%esp)
 88c8f54:	e8 1b 40 80 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 88c8f59:	89 f0                	mov    %esi,%eax
 88c8f5b:	89 da                	mov    %ebx,%edx
 88c8f5d:	eb 00                	jmp    88c8f5f <_ZN25STAICharacterCommonScriptC1Ev+0x4e7>
 88c8f5f:	89 d3                	mov    %edx,%ebx
 88c8f61:	89 c6                	mov    %eax,%esi
 88c8f63:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8f66:	05 ac 00 00 00       	add    $0xac,%eax
 88c8f6b:	89 04 24             	mov    %eax,(%esp)
 88c8f6e:	e8 31 e2 a9 ff       	call   83671a4 <_ZN14STAIInfoScriptD1Ev>
 88c8f73:	89 f0                	mov    %esi,%eax
 88c8f75:	89 da                	mov    %ebx,%edx
 88c8f77:	eb 00                	jmp    88c8f79 <_ZN25STAICharacterCommonScriptC1Ev+0x501>
 88c8f79:	89 d6                	mov    %edx,%esi
 88c8f7b:	89 c7                	mov    %eax,%edi
 88c8f7d:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8f80:	05 94 00 00 00       	add    $0x94,%eax
 88c8f85:	85 c0                	test   %eax,%eax
 88c8f87:	74 24                	je     88c8fad <_ZN25STAICharacterCommonScriptC1Ev+0x535>
 88c8f89:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8f8c:	05 94 00 00 00       	add    $0x94,%eax
 88c8f91:	8d 58 18             	lea    0x18(%eax),%ebx
 88c8f94:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8f97:	05 94 00 00 00       	add    $0x94,%eax
 88c8f9c:	39 c3                	cmp    %eax,%ebx
 88c8f9e:	74 0d                	je     88c8fad <_ZN25STAICharacterCommonScriptC1Ev+0x535>
 88c8fa0:	83 eb 0c             	sub    $0xc,%ebx
 88c8fa3:	89 1c 24             	mov    %ebx,(%esp)
 88c8fa6:	e8 b1 36 00 00       	call   88cc65c <_ZNSt6vectorI21STAICharacterItemDataSaIS0_EED1Ev>
 88c8fab:	eb e7                	jmp    88c8f94 <_ZN25STAICharacterCommonScriptC1Ev+0x51c>
 88c8fad:	89 f8                	mov    %edi,%eax
 88c8faf:	89 f2                	mov    %esi,%edx
 88c8fb1:	89 d3                	mov    %edx,%ebx
 88c8fb3:	89 c6                	mov    %eax,%esi
 88c8fb5:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8fb8:	05 88 00 00 00       	add    $0x88,%eax
 88c8fbd:	89 04 24             	mov    %eax,(%esp)
 88c8fc0:	e8 25 36 00 00       	call   88cc5ea <_ZNSt6vectorI28STAICharacterSkillCorrectionSaIS0_EED1Ev>
 88c8fc5:	89 f0                	mov    %esi,%eax
 88c8fc7:	89 da                	mov    %ebx,%edx
 88c8fc9:	eb 00                	jmp    88c8fcb <_ZN25STAICharacterCommonScriptC1Ev+0x553>
 88c8fcb:	89 d6                	mov    %edx,%esi
 88c8fcd:	89 c7                	mov    %eax,%edi
 88c8fcf:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8fd2:	83 c0 70             	add    $0x70,%eax
 88c8fd5:	85 c0                	test   %eax,%eax
 88c8fd7:	74 20                	je     88c8ff9 <_ZN25STAICharacterCommonScriptC1Ev+0x581>
 88c8fd9:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8fdc:	83 c0 70             	add    $0x70,%eax
 88c8fdf:	8d 58 18             	lea    0x18(%eax),%ebx
 88c8fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8fe5:	83 c0 70             	add    $0x70,%eax
 88c8fe8:	39 c3                	cmp    %eax,%ebx
 88c8fea:	74 0d                	je     88c8ff9 <_ZN25STAICharacterCommonScriptC1Ev+0x581>
 88c8fec:	83 eb 0c             	sub    $0xc,%ebx
 88c8fef:	89 1c 24             	mov    %ebx,(%esp)
 88c8ff2:	e8 81 35 00 00       	call   88cc578 <_ZNSt6vectorI22STAICharacterSkillDataSaIS0_EED1Ev>
 88c8ff7:	eb e9                	jmp    88c8fe2 <_ZN25STAICharacterCommonScriptC1Ev+0x56a>
 88c8ff9:	89 f8                	mov    %edi,%eax
 88c8ffb:	89 f2                	mov    %esi,%edx
 88c8ffd:	89 d3                	mov    %edx,%ebx
 88c8fff:	89 c6                	mov    %eax,%esi
 88c9001:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9004:	83 c0 64             	add    $0x64,%eax
 88c9007:	89 04 24             	mov    %eax,(%esp)
 88c900a:	e8 f7 34 00 00       	call   88cc506 <_ZNSt6vectorI26STAICharacterEquipmentDataSaIS0_EED1Ev>
 88c900f:	89 f0                	mov    %esi,%eax
 88c9011:	89 da                	mov    %ebx,%edx
 88c9013:	eb 00                	jmp    88c9015 <_ZN25STAICharacterCommonScriptC1Ev+0x59d>
 88c9015:	89 d3                	mov    %edx,%ebx
 88c9017:	89 c6                	mov    %eax,%esi
 88c9019:	8b 45 08             	mov    0x8(%ebp),%eax
 88c901c:	83 c0 04             	add    $0x4,%eax
 88c901f:	89 04 24             	mov    %eax,(%esp)
 88c9022:	e8 cf 33 00 00       	call   88cc3f6 <_ZN11MinimumInfoD1Ev>
 88c9027:	89 f0                	mov    %esi,%eax
 88c9029:	89 da                	mov    %ebx,%edx
 88c902b:	89 04 24             	mov    %eax,(%esp)
 88c902e:	e8 1d a7 21 00       	call   8ae3750 <_Unwind_Resume>
 88c9033:	83 c4 2c             	add    $0x2c,%esp
 88c9036:	5b                   	pop    %ebx
 88c9037:	5e                   	pop    %esi
 88c9038:	5f                   	pop    %edi
 88c9039:	5d                   	pop    %ebp
 88c903a:	c3                   	ret
 88c903b:	90                   	nop

```

```c
// STAICharacterCommonScript::STAICharacterCommonScript @ 0x88c8a78

/* STAICharacterCommonScript::STAICharacterCommonScript() */

void __thiscall
STAICharacterCommonScript::STAICharacterCommonScript(STAICharacterCommonScript *this)

{
  int iVar1;
  vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *this_00;
  vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *this_01;
  APCSpeech *this_02;
  
  *(undefined ***)this = &PTR__STAICharacterCommonScript_08e0a1f0;
  MinimumInfo::MinimumInfo((MinimumInfo *)(this + 4));
  STRDCharacterStatus::STRDCharacterStatus((STRDCharacterStatus *)(this + 0xc));
                    /* try { // try from 088c8aaf to 088c8ab3 has its CatchHandler @ 088c9015 */
  std::vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>>::vector
            ((vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>> *)
             (this + 100));
  this_00 = (vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x70);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088c8ac6 to 088c8aca has its CatchHandler @ 088c8add */
    std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
                    /* try { // try from 088c8b21 to 088c8b25 has its CatchHandler @ 088c8fcb */
  std::vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>>::vector
            ((vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>> *)
             (this + 0x88));
  this_01 = (vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0x94);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088c8b3b to 088c8b3f has its CatchHandler @ 088c8b52 */
    std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 088c8b96 to 088c8b9a has its CatchHandler @ 088c8f79 */
  STAIInfoScript::STAIInfoScript((STAIInfoScript *)(this + 0xac));
                    /* try { // try from 088c8ba6 to 088c8baa has its CatchHandler @ 088c8f5f */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
                    /* try { // try from 088c8bb6 to 088c8bba has its CatchHandler @ 088c8f45 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2dc));
                    /* try { // try from 088c8bc6 to 088c8bca has its CatchHandler @ 088c8f2b */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x2e8));
  this_02 = (APCSpeech *)(this + 0x300);
  for (iVar1 = 0x6e; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088c8be0 to 088c8be4 has its CatchHandler @ 088c8bf7 */
    APCSpeech::APCSpeech(this_02);
    this_02 = this_02 + 0x18;
  }
                    /* try { // try from 088c8c3b to 088c8c3f has its CatchHandler @ 088c8ed6 */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd68));
                    /* try { // try from 088c8c4b to 088c8c4f has its CatchHandler @ 088c8ebc */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd74));
                    /* try { // try from 088c8c5b to 088c8c5f has its CatchHandler @ 088c8ea2 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd88));
                    /* try { // try from 088c8c6b to 088c8c6f has its CatchHandler @ 088c8e88 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd94));
  STRDCharacterStatusRate::STRDCharacterStatusRate((STRDCharacterStatusRate *)(this + 0xdac));
                    /* try { // try from 088c8c8b to 088c8c8f has its CatchHandler @ 088c8e6e */
  std::vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>>::vector
            ((vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>> *)
             (this + 0xe50));
                    /* try { // try from 088c8c9b to 088c8c9f has its CatchHandler @ 088c8e54 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xe6c));
  STRDCharacterStatusRate::STRDCharacterStatusRate((STRDCharacterStatusRate *)(this + 0xe78));
                    /* try { // try from 088c8cbb to 088c8cbf has its CatchHandler @ 088c8e3a */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xf20));
                    /* try { // try from 088c8ccb to 088c8ccf has its CatchHandler @ 088c8e20 */
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::vector
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0xf2c));
                    /* try { // try from 088c8cdb to 088c8cdf has its CatchHandler @ 088c8e06 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xf38));
                    /* try { // try from 088c8ceb to 088c8cef has its CatchHandler @ 088c8dec */
  stEnamyDropAvatarInfo_t::stEnamyDropAvatarInfo_t((stEnamyDropAvatarInfo_t *)(this + 0xf50));
                    /* try { // try from 088c8cfb to 088c8cff has its CatchHandler @ 088c8dd2 */
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::vector
            ((vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> *)(this + 0xf90));
                    /* try { // try from 088c8d0b to 088c8d0f has its CatchHandler @ 088c8db8 */
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0xf9c));
                    /* try { // try from 088c8d1b to 088c8d1f has its CatchHandler @ 088c8d9e */
  ActiveActionFileSet::ActiveActionFileSet((ActiveActionFileSet *)(this + 0xfac));
                    /* try { // try from 088c8d2b to 088c8d2f has its CatchHandler @ 088c8d84 */
  std::string::string((string *)(this + 0xfec));
                    /* try { // try from 088c8d3b to 088c8d3f has its CatchHandler @ 088c8d6a */
  std::string::string((string *)(this + 0xff0));
                    /* try { // try from 088c8d46 to 088c8d4a has its CatchHandler @ 088c8d50 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 088c9592 STAICharacterCommonScript::clear  [0x088c9592-0x88c98bb] ===
 88c9592:	55                   	push   %ebp
 88c9593:	89 e5                	mov    %esp,%ebp
 88c9595:	83 ec 18             	sub    $0x18,%esp
 88c9598:	8b 45 08             	mov    0x8(%ebp),%eax
 88c959b:	83 c0 04             	add    $0x4,%eax
 88c959e:	89 04 24             	mov    %eax,(%esp)
 88c95a1:	e8 ea 2b 00 00       	call   88cc190 <_ZN11MinimumInfo5clearEv>
 88c95a6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c95a9:	83 c0 0c             	add    $0xc,%eax
 88c95ac:	89 04 24             	mov    %eax,(%esp)
 88c95af:	e8 8e e0 a9 ff       	call   8367642 <_ZN19STRDCharacterStatus5ClearEv>
 88c95b4:	8b 45 08             	mov    0x8(%ebp),%eax
 88c95b7:	83 c0 64             	add    $0x64,%eax
 88c95ba:	89 04 24             	mov    %eax,(%esp)
 88c95bd:	e8 dc 31 00 00       	call   88cc79e <_ZNSt6vectorI26STAICharacterEquipmentDataSaIS0_EE5clearEv>
 88c95c2:	8b 45 08             	mov    0x8(%ebp),%eax
 88c95c5:	83 c0 70             	add    $0x70,%eax
 88c95c8:	89 04 24             	mov    %eax,(%esp)
 88c95cb:	e8 ea 31 00 00       	call   88cc7ba <_ZNSt6vectorI22STAICharacterSkillDataSaIS0_EE5clearEv>
 88c95d0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c95d3:	83 c0 7c             	add    $0x7c,%eax
 88c95d6:	89 04 24             	mov    %eax,(%esp)
 88c95d9:	e8 dc 31 00 00       	call   88cc7ba <_ZNSt6vectorI22STAICharacterSkillDataSaIS0_EE5clearEv>
 88c95de:	8b 45 08             	mov    0x8(%ebp),%eax
 88c95e1:	05 88 00 00 00       	add    $0x88,%eax
 88c95e6:	89 04 24             	mov    %eax,(%esp)
 88c95e9:	e8 e8 31 00 00       	call   88cc7d6 <_ZNSt6vectorI28STAICharacterSkillCorrectionSaIS0_EE5clearEv>
 88c95ee:	8b 45 08             	mov    0x8(%ebp),%eax
 88c95f1:	05 94 00 00 00       	add    $0x94,%eax
 88c95f6:	89 04 24             	mov    %eax,(%esp)
 88c95f9:	e8 f4 31 00 00       	call   88cc7f2 <_ZNSt6vectorI21STAICharacterItemDataSaIS0_EE5clearEv>
 88c95fe:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9601:	05 a0 00 00 00       	add    $0xa0,%eax
 88c9606:	89 04 24             	mov    %eax,(%esp)
 88c9609:	e8 e4 31 00 00       	call   88cc7f2 <_ZNSt6vectorI21STAICharacterItemDataSaIS0_EE5clearEv>
 88c960e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9611:	05 ac 00 00 00       	add    $0xac,%eax
 88c9616:	89 04 24             	mov    %eax,(%esp)
 88c9619:	e8 b6 dd a9 ff       	call   83673d4 <_ZN14STAIInfoScript5clearEv>
 88c961e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9621:	05 d0 02 00 00       	add    $0x2d0,%eax
 88c9626:	89 04 24             	mov    %eax,(%esp)
 88c9629:	e8 9a 80 a7 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 88c962e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9631:	05 dc 02 00 00       	add    $0x2dc,%eax
 88c9636:	89 04 24             	mov    %eax,(%esp)
 88c9639:	e8 8a 80 a7 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 88c963e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9641:	05 e8 02 00 00       	add    $0x2e8,%eax
 88c9646:	89 04 24             	mov    %eax,(%esp)
 88c9649:	e8 16 36 8b ff       	call   817cc64 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE5clearEv>
 88c964e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9651:	c7 80 80 0d 00 00 00 	movl   $0x0,0xd80(%eax)
 88c9658:	00 00 00 
 88c965b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c965e:	c7 80 84 0d 00 00 00 	movl   $0x0,0xd84(%eax)
 88c9665:	00 00 00 
 88c9668:	8b 45 08             	mov    0x8(%ebp),%eax
 88c966b:	05 88 0d 00 00       	add    $0xd88,%eax
 88c9670:	89 04 24             	mov    %eax,(%esp)
 88c9673:	e8 ca 0c 8b ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 88c9678:	8b 45 08             	mov    0x8(%ebp),%eax
 88c967b:	05 94 0d 00 00       	add    $0xd94,%eax
 88c9680:	89 04 24             	mov    %eax,(%esp)
 88c9683:	e8 ba 0c 8b ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 88c9688:	8b 45 08             	mov    0x8(%ebp),%eax
 88c968b:	c7 80 a0 0d 00 00 00 	movl   $0x0,0xda0(%eax)
 88c9692:	00 00 00 
 88c9695:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9698:	c7 80 a4 0d 00 00 00 	movl   $0x0,0xda4(%eax)
 88c969f:	00 00 00 
 88c96a2:	8b 45 08             	mov    0x8(%ebp),%eax
 88c96a5:	c7 80 a8 0d 00 00 00 	movl   $0x0,0xda8(%eax)
 88c96ac:	00 00 00 
 88c96af:	8b 45 08             	mov    0x8(%ebp),%eax
 88c96b2:	05 20 0f 00 00       	add    $0xf20,%eax
 88c96b7:	89 04 24             	mov    %eax,(%esp)
 88c96ba:	e8 af d4 7c ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 88c96bf:	8b 45 08             	mov    0x8(%ebp),%eax
 88c96c2:	05 ac 0d 00 00       	add    $0xdac,%eax
 88c96c7:	89 04 24             	mov    %eax,(%esp)
 88c96ca:	e8 d1 2a 00 00       	call   88cc1a0 <_ZN23STRDCharacterStatusRate5ClearEv>
 88c96cf:	8b 45 08             	mov    0x8(%ebp),%eax
 88c96d2:	05 50 0e 00 00       	add    $0xe50,%eax
 88c96d7:	89 04 24             	mov    %eax,(%esp)
 88c96da:	e8 2f 31 00 00       	call   88cc80e <_ZNSt6vectorI29STAICharacterCustomSkillLevelSaIS0_EE5clearEv>
 88c96df:	8b 45 08             	mov    0x8(%ebp),%eax
 88c96e2:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 88c96e7:	89 90 5c 0e 00 00    	mov    %edx,0xe5c(%eax)
 88c96ed:	8b 45 08             	mov    0x8(%ebp),%eax
 88c96f0:	c7 80 60 0e 00 00 00 	movl   $0x0,0xe60(%eax)
 88c96f7:	00 00 00 
 88c96fa:	8b 45 08             	mov    0x8(%ebp),%eax
 88c96fd:	c7 80 64 0e 00 00 02 	movl   $0x2,0xe64(%eax)
 88c9704:	00 00 00 
 88c9707:	8b 45 08             	mov    0x8(%ebp),%eax
 88c970a:	c7 80 68 0e 00 00 01 	movl   $0x1,0xe68(%eax)
 88c9711:	00 00 00 
 88c9714:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9717:	05 6c 0e 00 00       	add    $0xe6c,%eax
 88c971c:	89 04 24             	mov    %eax,(%esp)
 88c971f:	e8 4a d4 7c ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 88c9724:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9727:	05 78 0e 00 00       	add    $0xe78,%eax
 88c972c:	89 04 24             	mov    %eax,(%esp)
 88c972f:	e8 6c 2a 00 00       	call   88cc1a0 <_ZN23STRDCharacterStatusRate5ClearEv>
 88c9734:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9737:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 88c973c:	89 90 1c 0f 00 00    	mov    %edx,0xf1c(%eax)
 88c9742:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9745:	05 2c 0f 00 00       	add    $0xf2c,%eax
 88c974a:	89 04 24             	mov    %eax,(%esp)
 88c974d:	e8 d8 30 00 00       	call   88cc82a <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE5clearEv>
 88c9752:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9755:	05 68 0d 00 00       	add    $0xd68,%eax
 88c975a:	89 04 24             	mov    %eax,(%esp)
 88c975d:	e8 e4 30 00 00       	call   88cc846 <_ZNSt6vectorI9APCSpeechSaIS0_EE5clearEv>
 88c9762:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9765:	05 74 0d 00 00       	add    $0xd74,%eax
 88c976a:	89 04 24             	mov    %eax,(%esp)
 88c976d:	e8 d4 30 00 00       	call   88cc846 <_ZNSt6vectorI9APCSpeechSaIS0_EE5clearEv>
 88c9772:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9775:	05 38 0f 00 00       	add    $0xf38,%eax
 88c977a:	89 04 24             	mov    %eax,(%esp)
 88c977d:	e8 ec d3 7c ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 88c9782:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9785:	c7 80 44 0f 00 00 00 	movl   $0x0,0xf44(%eax)
 88c978c:	00 00 00 
 88c978f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9792:	c7 80 48 0f 00 00 00 	movl   $0x0,0xf48(%eax)
 88c9799:	00 00 00 
 88c979c:	8b 45 08             	mov    0x8(%ebp),%eax
 88c979f:	c7 80 4c 0f 00 00 00 	movl   $0x0,0xf4c(%eax)
 88c97a6:	00 00 00 
 88c97a9:	8b 45 08             	mov    0x8(%ebp),%eax
 88c97ac:	05 50 0f 00 00       	add    $0xf50,%eax
 88c97b1:	89 04 24             	mov    %eax,(%esp)
 88c97b4:	e8 53 29 00 00       	call   88cc10c <_ZN23stEnamyDropAvatarInfo_t5clearEv>
 88c97b9:	8b 45 08             	mov    0x8(%ebp),%eax
 88c97bc:	c7 80 8c 0f 00 00 01 	movl   $0x1,0xf8c(%eax)
 88c97c3:	00 00 00 
 88c97c6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c97c9:	05 90 0f 00 00       	add    $0xf90,%eax
 88c97ce:	89 04 24             	mov    %eax,(%esp)
 88c97d1:	e8 d0 2c 00 00       	call   88cc4a6 <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EE5clearEv>
 88c97d6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c97d9:	05 9c 0f 00 00       	add    $0xf9c,%eax
 88c97de:	89 04 24             	mov    %eax,(%esp)
 88c97e1:	e8 f2 a2 ab ff       	call   8383ad8 <_ZNSt6vectorIfSaIfEE5clearEv>
 88c97e6:	8b 45 08             	mov    0x8(%ebp),%eax
 88c97e9:	c6 80 a8 0f 00 00 01 	movb   $0x1,0xfa8(%eax)
 88c97f0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c97f3:	c6 80 f4 0f 00 00 00 	movb   $0x0,0xff4(%eax)
 88c97fa:	8b 45 08             	mov    0x8(%ebp),%eax
 88c97fd:	ba 00 00 a0 41       	mov    $0x41a00000,%edx
 88c9802:	89 90 f8 0f 00 00    	mov    %edx,0xff8(%eax)
 88c9808:	8b 45 08             	mov    0x8(%ebp),%eax
 88c980b:	ba 00 00 96 c3       	mov    $0xc3960000,%edx
 88c9810:	89 90 fc 0f 00 00    	mov    %edx,0xffc(%eax)
 88c9816:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9819:	c7 80 00 10 00 00 00 	movl   $0x0,0x1000(%eax)
 88c9820:	00 00 00 
 88c9823:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9826:	c7 80 08 10 00 00 ff 	movl   $0xffffffff,0x1008(%eax)
 88c982d:	ff ff ff 
 88c9830:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9833:	c6 80 04 10 00 00 01 	movb   $0x1,0x1004(%eax)
 88c983a:	8b 45 08             	mov    0x8(%ebp),%eax
 88c983d:	c7 80 b0 02 00 00 00 	movl   $0x0,0x2b0(%eax)
 88c9844:	00 00 00 
 88c9847:	8b 45 08             	mov    0x8(%ebp),%eax
 88c984a:	c7 80 b4 02 00 00 00 	movl   $0x0,0x2b4(%eax)
 88c9851:	00 00 00 
 88c9854:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9857:	c7 80 cc 02 00 00 00 	movl   $0x0,0x2cc(%eax)
 88c985e:	00 00 00 
 88c9861:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9864:	c7 80 c0 02 00 00 00 	movl   $0x0,0x2c0(%eax)
 88c986b:	00 00 00 
 88c986e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9871:	c7 80 c8 02 00 00 00 	movl   $0x0,0x2c8(%eax)
 88c9878:	00 00 00 
 88c987b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c987e:	c7 80 c4 02 00 00 00 	movl   $0x0,0x2c4(%eax)
 88c9885:	00 00 00 
 88c9888:	8b 45 08             	mov    0x8(%ebp),%eax
 88c988b:	c7 80 b8 02 00 00 00 	movl   $0x0,0x2b8(%eax)
 88c9892:	00 00 00 
 88c9895:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9898:	c7 80 bc 02 00 00 00 	movl   $0x0,0x2bc(%eax)
 88c989f:	00 00 00 
 88c98a2:	8b 45 08             	mov    0x8(%ebp),%eax
 88c98a5:	c6 80 0c 10 00 00 00 	movb   $0x0,0x100c(%eax)
 88c98ac:	8b 45 08             	mov    0x8(%ebp),%eax
 88c98af:	c7 80 10 10 00 00 0b 	movl   $0xb,0x1010(%eax)
 88c98b6:	00 00 00 
 88c98b9:	c9                   	leave
 88c98ba:	c3                   	ret
 88c98bb:	90                   	nop

```

```c
// STAICharacterCommonScript::clear @ 0x88c9592

/* STAICharacterCommonScript::clear() */

void __thiscall STAICharacterCommonScript::clear(STAICharacterCommonScript *this)

{
  MinimumInfo::clear((MinimumInfo *)(this + 4));
  STRDCharacterStatus::Clear((STRDCharacterStatus *)(this + 0xc));
  std::vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>>::clear
            ((vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>> *)
             (this + 100));
  std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::clear
            ((vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x70))
  ;
  std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::clear
            ((vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x7c))
  ;
  std::vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>>::clear
            ((vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>> *)
             (this + 0x88));
  std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::clear
            ((vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0x94));
  std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::clear
            ((vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0xa0));
  STAIInfoScript::clear((STAIInfoScript *)(this + 0xac));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2dc));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x2e8));
  *(undefined4 *)(this + 0xd80) = 0;
  *(undefined4 *)(this + 0xd84) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd88));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd94));
  *(undefined4 *)(this + 0xda0) = 0;
  *(undefined4 *)(this + 0xda4) = 0;
  *(undefined4 *)(this + 0xda8) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xf20));
  STRDCharacterStatusRate::Clear((STRDCharacterStatusRate *)(this + 0xdac));
  std::vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>>::clear
            ((vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>> *)
             (this + 0xe50));
  *(undefined4 *)(this + 0xe5c) = 0x3f800000;
  *(undefined4 *)(this + 0xe60) = 0;
  *(undefined4 *)(this + 0xe64) = 2;
  *(undefined4 *)(this + 0xe68) = 1;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xe6c));
  STRDCharacterStatusRate::Clear((STRDCharacterStatusRate *)(this + 0xe78));
  *(undefined4 *)(this + 0xf1c) = 0x3f800000;
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::clear
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0xf2c));
  std::vector<APCSpeech,std::allocator<APCSpeech>>::clear
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd68));
  std::vector<APCSpeech,std::allocator<APCSpeech>>::clear
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd74));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xf38));
  *(undefined4 *)(this + 0xf44) = 0;
  *(undefined4 *)(this + 0xf48) = 0;
  *(undefined4 *)(this + 0xf4c) = 0;
  stEnamyDropAvatarInfo_t::clear((stEnamyDropAvatarInfo_t *)(this + 0xf50));
  *(undefined4 *)(this + 0xf8c) = 1;
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::clear
            ((vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> *)(this + 0xf90));
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0xf9c));
  this[0xfa8] = (STAICharacterCommonScript)0x1;
  this[0xff4] = (STAICharacterCommonScript)0x0;
  *(undefined4 *)(this + 0xff8) = 0x41a00000;
  *(undefined4 *)(this + 0xffc) = 0xc3960000;
  *(undefined4 *)(this + 0x1000) = 0;
  *(undefined4 *)(this + 0x1008) = 0xffffffff;
  this[0x1004] = (STAICharacterCommonScript)0x1;
  *(undefined4 *)(this + 0x2b0) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  this[0x100c] = (STAICharacterCommonScript)0x0;
  *(undefined4 *)(this + 0x1010) = 0xb;
  return;
}

```

---

## destroy

```asm
// === 088c98bc STAICharacterCommonScript::destroy  [0x088c98bc-0x88c98d3] ===
 88c98bc:	55                   	push   %ebp
 88c98bd:	89 e5                	mov    %esp,%ebp
 88c98bf:	83 ec 18             	sub    $0x18,%esp
 88c98c2:	8b 45 08             	mov    0x8(%ebp),%eax
 88c98c5:	05 ac 00 00 00       	add    $0xac,%eax
 88c98ca:	89 04 24             	mov    %eax,(%esp)
 88c98cd:	e8 68 dc a9 ff       	call   836753a <_ZN14STAIInfoScript7destroyEv>
 88c98d2:	c9                   	leave
 88c98d3:	c3                   	ret

```

```c
// STAICharacterCommonScript::destroy @ 0x88c98bc

/* STAICharacterCommonScript::destroy() */

void __thiscall STAICharacterCommonScript::destroy(STAICharacterCommonScript *this)

{
  STAIInfoScript::destroy((STAIInfoScript *)(this + 0xac));
  return;
}

```

---

## ~STAICharacterCommonScript

```asm
// === 088c903c STAICharacterCommonScript::~STAICharacterCommonScript  [0x088c903c-0x88c9573] ===
 88c903c:	55                   	push   %ebp
 88c903d:	89 e5                	mov    %esp,%ebp
 88c903f:	57                   	push   %edi
 88c9040:	56                   	push   %esi
 88c9041:	53                   	push   %ebx
 88c9042:	83 ec 1c             	sub    $0x1c,%esp
 88c9045:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9048:	c7 00 f0 a1 e0 08    	movl   $0x8e0a1f0,(%eax)
 88c904e:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9051:	89 04 24             	mov    %eax,(%esp)
 88c9054:	e8 63 08 00 00       	call   88c98bc <_ZN25STAICharacterCommonScript7destroyEv>
 88c9059:	eb 1a                	jmp    88c9075 <_ZN25STAICharacterCommonScriptD1Ev+0x39>
 88c905b:	89 d3                	mov    %edx,%ebx
 88c905d:	89 c6                	mov    %eax,%esi
 88c905f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9062:	05 f0 0f 00 00       	add    $0xff0,%eax
 88c9067:	89 04 24             	mov    %eax,(%esp)
 88c906a:	e8 71 eb e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88c906f:	89 f0                	mov    %esi,%eax
 88c9071:	89 da                	mov    %ebx,%edx
 88c9073:	eb 12                	jmp    88c9087 <_ZN25STAICharacterCommonScriptD1Ev+0x4b>
 88c9075:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9078:	05 f0 0f 00 00       	add    $0xff0,%eax
 88c907d:	89 04 24             	mov    %eax,(%esp)
 88c9080:	e8 5b eb e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88c9085:	eb 1a                	jmp    88c90a1 <_ZN25STAICharacterCommonScriptD1Ev+0x65>
 88c9087:	89 d3                	mov    %edx,%ebx
 88c9089:	89 c6                	mov    %eax,%esi
 88c908b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c908e:	05 ec 0f 00 00       	add    $0xfec,%eax
 88c9093:	89 04 24             	mov    %eax,(%esp)
 88c9096:	e8 45 eb e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88c909b:	89 f0                	mov    %esi,%eax
 88c909d:	89 da                	mov    %ebx,%edx
 88c909f:	eb 12                	jmp    88c90b3 <_ZN25STAICharacterCommonScriptD1Ev+0x77>
 88c90a1:	8b 45 08             	mov    0x8(%ebp),%eax
 88c90a4:	05 ec 0f 00 00       	add    $0xfec,%eax
 88c90a9:	89 04 24             	mov    %eax,(%esp)
 88c90ac:	e8 2f eb e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88c90b1:	eb 1a                	jmp    88c90cd <_ZN25STAICharacterCommonScriptD1Ev+0x91>
 88c90b3:	89 d3                	mov    %edx,%ebx
 88c90b5:	89 c6                	mov    %eax,%esi
 88c90b7:	8b 45 08             	mov    0x8(%ebp),%eax
 88c90ba:	05 ac 0f 00 00       	add    $0xfac,%eax
 88c90bf:	89 04 24             	mov    %eax,(%esp)
 88c90c2:	e8 2d f0 a9 ff       	call   83680f4 <_ZN19ActiveActionFileSetD1Ev>
 88c90c7:	89 f0                	mov    %esi,%eax
 88c90c9:	89 da                	mov    %ebx,%edx
 88c90cb:	eb 12                	jmp    88c90df <_ZN25STAICharacterCommonScriptD1Ev+0xa3>
 88c90cd:	8b 45 08             	mov    0x8(%ebp),%eax
 88c90d0:	05 ac 0f 00 00       	add    $0xfac,%eax
 88c90d5:	89 04 24             	mov    %eax,(%esp)
 88c90d8:	e8 17 f0 a9 ff       	call   83680f4 <_ZN19ActiveActionFileSetD1Ev>
 88c90dd:	eb 1a                	jmp    88c90f9 <_ZN25STAICharacterCommonScriptD1Ev+0xbd>
 88c90df:	89 d3                	mov    %edx,%ebx
 88c90e1:	89 c6                	mov    %eax,%esi
 88c90e3:	8b 45 08             	mov    0x8(%ebp),%eax
 88c90e6:	05 9c 0f 00 00       	add    $0xf9c,%eax
 88c90eb:	89 04 24             	mov    %eax,(%esp)
 88c90ee:	e8 5d b4 ab ff       	call   8384550 <_ZNSt6vectorIfSaIfEED1Ev>
 88c90f3:	89 f0                	mov    %esi,%eax
 88c90f5:	89 da                	mov    %ebx,%edx
 88c90f7:	eb 12                	jmp    88c910b <_ZN25STAICharacterCommonScriptD1Ev+0xcf>
 88c90f9:	8b 45 08             	mov    0x8(%ebp),%eax
 88c90fc:	05 9c 0f 00 00       	add    $0xf9c,%eax
 88c9101:	89 04 24             	mov    %eax,(%esp)
 88c9104:	e8 47 b4 ab ff       	call   8384550 <_ZNSt6vectorIfSaIfEED1Ev>
 88c9109:	eb 1a                	jmp    88c9125 <_ZN25STAICharacterCommonScriptD1Ev+0xe9>
 88c910b:	89 d3                	mov    %edx,%ebx
 88c910d:	89 c6                	mov    %eax,%esi
 88c910f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9112:	05 90 0f 00 00       	add    $0xf90,%eax
 88c9117:	89 04 24             	mov    %eax,(%esp)
 88c911a:	e8 81 67 ab ff       	call   837f8a0 <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EED1Ev>
 88c911f:	89 f0                	mov    %esi,%eax
 88c9121:	89 da                	mov    %ebx,%edx
 88c9123:	eb 12                	jmp    88c9137 <_ZN25STAICharacterCommonScriptD1Ev+0xfb>
 88c9125:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9128:	05 90 0f 00 00       	add    $0xf90,%eax
 88c912d:	89 04 24             	mov    %eax,(%esp)
 88c9130:	e8 6b 67 ab ff       	call   837f8a0 <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EED1Ev>
 88c9135:	eb 1a                	jmp    88c9151 <_ZN25STAICharacterCommonScriptD1Ev+0x115>
 88c9137:	89 d3                	mov    %edx,%ebx
 88c9139:	89 c6                	mov    %eax,%esi
 88c913b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c913e:	05 50 0f 00 00       	add    $0xf50,%eax
 88c9143:	89 04 24             	mov    %eax,(%esp)
 88c9146:	e8 b3 fc a9 ff       	call   8368dfe <_ZN23stEnamyDropAvatarInfo_tD1Ev>
 88c914b:	89 f0                	mov    %esi,%eax
 88c914d:	89 da                	mov    %ebx,%edx
 88c914f:	eb 12                	jmp    88c9163 <_ZN25STAICharacterCommonScriptD1Ev+0x127>
 88c9151:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9154:	05 50 0f 00 00       	add    $0xf50,%eax
 88c9159:	89 04 24             	mov    %eax,(%esp)
 88c915c:	e8 9d fc a9 ff       	call   8368dfe <_ZN23stEnamyDropAvatarInfo_tD1Ev>
 88c9161:	eb 1a                	jmp    88c917d <_ZN25STAICharacterCommonScriptD1Ev+0x141>
 88c9163:	89 d3                	mov    %edx,%ebx
 88c9165:	89 c6                	mov    %eax,%esi
 88c9167:	8b 45 08             	mov    0x8(%ebp),%eax
 88c916a:	05 38 0f 00 00       	add    $0xf38,%eax
 88c916f:	89 04 24             	mov    %eax,(%esp)
 88c9172:	e8 63 ac 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c9177:	89 f0                	mov    %esi,%eax
 88c9179:	89 da                	mov    %ebx,%edx
 88c917b:	eb 12                	jmp    88c918f <_ZN25STAICharacterCommonScriptD1Ev+0x153>
 88c917d:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9180:	05 38 0f 00 00       	add    $0xf38,%eax
 88c9185:	89 04 24             	mov    %eax,(%esp)
 88c9188:	e8 4d ac 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c918d:	eb 1a                	jmp    88c91a9 <_ZN25STAICharacterCommonScriptD1Ev+0x16d>
 88c918f:	89 d3                	mov    %edx,%ebx
 88c9191:	89 c6                	mov    %eax,%esi
 88c9193:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9196:	05 2c 0f 00 00       	add    $0xf2c,%eax
 88c919b:	89 04 24             	mov    %eax,(%esp)
 88c919e:	e8 3d 87 ab ff       	call   83818e0 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EED1Ev>
 88c91a3:	89 f0                	mov    %esi,%eax
 88c91a5:	89 da                	mov    %ebx,%edx
 88c91a7:	eb 12                	jmp    88c91bb <_ZN25STAICharacterCommonScriptD1Ev+0x17f>
 88c91a9:	8b 45 08             	mov    0x8(%ebp),%eax
 88c91ac:	05 2c 0f 00 00       	add    $0xf2c,%eax
 88c91b1:	89 04 24             	mov    %eax,(%esp)
 88c91b4:	e8 27 87 ab ff       	call   83818e0 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EED1Ev>
 88c91b9:	eb 1a                	jmp    88c91d5 <_ZN25STAICharacterCommonScriptD1Ev+0x199>
 88c91bb:	89 d3                	mov    %edx,%ebx
 88c91bd:	89 c6                	mov    %eax,%esi
 88c91bf:	8b 45 08             	mov    0x8(%ebp),%eax
 88c91c2:	05 20 0f 00 00       	add    $0xf20,%eax
 88c91c7:	89 04 24             	mov    %eax,(%esp)
 88c91ca:	e8 0b ac 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c91cf:	89 f0                	mov    %esi,%eax
 88c91d1:	89 da                	mov    %ebx,%edx
 88c91d3:	eb 12                	jmp    88c91e7 <_ZN25STAICharacterCommonScriptD1Ev+0x1ab>
 88c91d5:	8b 45 08             	mov    0x8(%ebp),%eax
 88c91d8:	05 20 0f 00 00       	add    $0xf20,%eax
 88c91dd:	89 04 24             	mov    %eax,(%esp)
 88c91e0:	e8 f5 ab 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c91e5:	eb 1a                	jmp    88c9201 <_ZN25STAICharacterCommonScriptD1Ev+0x1c5>
 88c91e7:	89 d3                	mov    %edx,%ebx
 88c91e9:	89 c6                	mov    %eax,%esi
 88c91eb:	8b 45 08             	mov    0x8(%ebp),%eax
 88c91ee:	05 6c 0e 00 00       	add    $0xe6c,%eax
 88c91f3:	89 04 24             	mov    %eax,(%esp)
 88c91f6:	e8 df ab 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c91fb:	89 f0                	mov    %esi,%eax
 88c91fd:	89 da                	mov    %ebx,%edx
 88c91ff:	eb 12                	jmp    88c9213 <_ZN25STAICharacterCommonScriptD1Ev+0x1d7>
 88c9201:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9204:	05 6c 0e 00 00       	add    $0xe6c,%eax
 88c9209:	89 04 24             	mov    %eax,(%esp)
 88c920c:	e8 c9 ab 7b ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 88c9211:	eb 1a                	jmp    88c922d <_ZN25STAICharacterCommonScriptD1Ev+0x1f1>
 88c9213:	89 d3                	mov    %edx,%ebx
 88c9215:	89 c6                	mov    %eax,%esi
 88c9217:	8b 45 08             	mov    0x8(%ebp),%eax
 88c921a:	05 50 0e 00 00       	add    $0xe50,%eax
 88c921f:	89 04 24             	mov    %eax,(%esp)
 88c9222:	e8 19 35 00 00       	call   88cc740 <_ZNSt6vectorI29STAICharacterCustomSkillLevelSaIS0_EED1Ev>
 88c9227:	89 f0                	mov    %esi,%eax
 88c9229:	89 da                	mov    %ebx,%edx
 88c922b:	eb 12                	jmp    88c923f <_ZN25STAICharacterCommonScriptD1Ev+0x203>
 88c922d:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9230:	05 50 0e 00 00       	add    $0xe50,%eax
 88c9235:	89 04 24             	mov    %eax,(%esp)
 88c9238:	e8 03 35 00 00       	call   88cc740 <_ZNSt6vectorI29STAICharacterCustomSkillLevelSaIS0_EED1Ev>
 88c923d:	eb 1a                	jmp    88c9259 <_ZN25STAICharacterCommonScriptD1Ev+0x21d>
 88c923f:	89 d3                	mov    %edx,%ebx
 88c9241:	89 c6                	mov    %eax,%esi
 88c9243:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9246:	05 94 0d 00 00       	add    $0xd94,%eax
 88c924b:	89 04 24             	mov    %eax,(%esp)
 88c924e:	e8 97 b7 86 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88c9253:	89 f0                	mov    %esi,%eax
 88c9255:	89 da                	mov    %ebx,%edx
 88c9257:	eb 12                	jmp    88c926b <_ZN25STAICharacterCommonScriptD1Ev+0x22f>
 88c9259:	8b 45 08             	mov    0x8(%ebp),%eax
 88c925c:	05 94 0d 00 00       	add    $0xd94,%eax
 88c9261:	89 04 24             	mov    %eax,(%esp)
 88c9264:	e8 81 b7 86 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88c9269:	eb 1a                	jmp    88c9285 <_ZN25STAICharacterCommonScriptD1Ev+0x249>
 88c926b:	89 d3                	mov    %edx,%ebx
 88c926d:	89 c6                	mov    %eax,%esi
 88c926f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9272:	05 88 0d 00 00       	add    $0xd88,%eax
 88c9277:	89 04 24             	mov    %eax,(%esp)
 88c927a:	e8 6b b7 86 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88c927f:	89 f0                	mov    %esi,%eax
 88c9281:	89 da                	mov    %ebx,%edx
 88c9283:	eb 12                	jmp    88c9297 <_ZN25STAICharacterCommonScriptD1Ev+0x25b>
 88c9285:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9288:	05 88 0d 00 00       	add    $0xd88,%eax
 88c928d:	89 04 24             	mov    %eax,(%esp)
 88c9290:	e8 55 b7 86 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88c9295:	eb 1a                	jmp    88c92b1 <_ZN25STAICharacterCommonScriptD1Ev+0x275>
 88c9297:	89 d3                	mov    %edx,%ebx
 88c9299:	89 c6                	mov    %eax,%esi
 88c929b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c929e:	05 74 0d 00 00       	add    $0xd74,%eax
 88c92a3:	89 04 24             	mov    %eax,(%esp)
 88c92a6:	e8 23 34 00 00       	call   88cc6ce <_ZNSt6vectorI9APCSpeechSaIS0_EED1Ev>
 88c92ab:	89 f0                	mov    %esi,%eax
 88c92ad:	89 da                	mov    %ebx,%edx
 88c92af:	eb 12                	jmp    88c92c3 <_ZN25STAICharacterCommonScriptD1Ev+0x287>
 88c92b1:	8b 45 08             	mov    0x8(%ebp),%eax
 88c92b4:	05 74 0d 00 00       	add    $0xd74,%eax
 88c92b9:	89 04 24             	mov    %eax,(%esp)
 88c92bc:	e8 0d 34 00 00       	call   88cc6ce <_ZNSt6vectorI9APCSpeechSaIS0_EED1Ev>
 88c92c1:	eb 1a                	jmp    88c92dd <_ZN25STAICharacterCommonScriptD1Ev+0x2a1>
 88c92c3:	89 d3                	mov    %edx,%ebx
 88c92c5:	89 c6                	mov    %eax,%esi
 88c92c7:	8b 45 08             	mov    0x8(%ebp),%eax
 88c92ca:	05 68 0d 00 00       	add    $0xd68,%eax
 88c92cf:	89 04 24             	mov    %eax,(%esp)
 88c92d2:	e8 f7 33 00 00       	call   88cc6ce <_ZNSt6vectorI9APCSpeechSaIS0_EED1Ev>
 88c92d7:	89 f0                	mov    %esi,%eax
 88c92d9:	89 da                	mov    %ebx,%edx
 88c92db:	eb 12                	jmp    88c92ef <_ZN25STAICharacterCommonScriptD1Ev+0x2b3>
 88c92dd:	8b 45 08             	mov    0x8(%ebp),%eax
 88c92e0:	05 68 0d 00 00       	add    $0xd68,%eax
 88c92e5:	89 04 24             	mov    %eax,(%esp)
 88c92e8:	e8 e1 33 00 00       	call   88cc6ce <_ZNSt6vectorI9APCSpeechSaIS0_EED1Ev>
 88c92ed:	eb 3d                	jmp    88c932c <_ZN25STAICharacterCommonScriptD1Ev+0x2f0>
 88c92ef:	89 d6                	mov    %edx,%esi
 88c92f1:	89 c7                	mov    %eax,%edi
 88c92f3:	8b 45 08             	mov    0x8(%ebp),%eax
 88c92f6:	05 00 03 00 00       	add    $0x300,%eax
 88c92fb:	85 c0                	test   %eax,%eax
 88c92fd:	74 27                	je     88c9326 <_ZN25STAICharacterCommonScriptD1Ev+0x2ea>
 88c92ff:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9302:	05 00 03 00 00       	add    $0x300,%eax
 88c9307:	8d 98 68 0a 00 00    	lea    0xa68(%eax),%ebx
 88c930d:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9310:	05 00 03 00 00       	add    $0x300,%eax
 88c9315:	39 c3                	cmp    %eax,%ebx
 88c9317:	74 0d                	je     88c9326 <_ZN25STAICharacterCommonScriptD1Ev+0x2ea>
 88c9319:	83 eb 18             	sub    $0x18,%ebx
 88c931c:	89 1c 24             	mov    %ebx,(%esp)
 88c931f:	e8 e6 30 00 00       	call   88cc40a <_ZN9APCSpeechD1Ev>
 88c9324:	eb e7                	jmp    88c930d <_ZN25STAICharacterCommonScriptD1Ev+0x2d1>
 88c9326:	89 f8                	mov    %edi,%eax
 88c9328:	89 f2                	mov    %esi,%edx
 88c932a:	eb 33                	jmp    88c935f <_ZN25STAICharacterCommonScriptD1Ev+0x323>
 88c932c:	8b 45 08             	mov    0x8(%ebp),%eax
 88c932f:	05 00 03 00 00       	add    $0x300,%eax
 88c9334:	85 c0                	test   %eax,%eax
 88c9336:	74 41                	je     88c9379 <_ZN25STAICharacterCommonScriptD1Ev+0x33d>
 88c9338:	8b 45 08             	mov    0x8(%ebp),%eax
 88c933b:	05 00 03 00 00       	add    $0x300,%eax
 88c9340:	8d 98 68 0a 00 00    	lea    0xa68(%eax),%ebx
 88c9346:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9349:	05 00 03 00 00       	add    $0x300,%eax
 88c934e:	39 c3                	cmp    %eax,%ebx
 88c9350:	74 27                	je     88c9379 <_ZN25STAICharacterCommonScriptD1Ev+0x33d>
 88c9352:	83 eb 18             	sub    $0x18,%ebx
 88c9355:	89 1c 24             	mov    %ebx,(%esp)
 88c9358:	e8 ad 30 00 00       	call   88cc40a <_ZN9APCSpeechD1Ev>
 88c935d:	eb e7                	jmp    88c9346 <_ZN25STAICharacterCommonScriptD1Ev+0x30a>
 88c935f:	89 d3                	mov    %edx,%ebx
 88c9361:	89 c6                	mov    %eax,%esi
 88c9363:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9366:	05 e8 02 00 00       	add    $0x2e8,%eax
 88c936b:	89 04 24             	mov    %eax,(%esp)
 88c936e:	e8 63 38 8b ff       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 88c9373:	89 f0                	mov    %esi,%eax
 88c9375:	89 da                	mov    %ebx,%edx
 88c9377:	eb 12                	jmp    88c938b <_ZN25STAICharacterCommonScriptD1Ev+0x34f>
 88c9379:	8b 45 08             	mov    0x8(%ebp),%eax
 88c937c:	05 e8 02 00 00       	add    $0x2e8,%eax
 88c9381:	89 04 24             	mov    %eax,(%esp)
 88c9384:	e8 4d 38 8b ff       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 88c9389:	eb 1a                	jmp    88c93a5 <_ZN25STAICharacterCommonScriptD1Ev+0x369>
 88c938b:	89 d3                	mov    %edx,%ebx
 88c938d:	89 c6                	mov    %eax,%esi
 88c938f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9392:	05 dc 02 00 00       	add    $0x2dc,%eax
 88c9397:	89 04 24             	mov    %eax,(%esp)
 88c939a:	e8 d5 3b 80 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 88c939f:	89 f0                	mov    %esi,%eax
 88c93a1:	89 da                	mov    %ebx,%edx
 88c93a3:	eb 12                	jmp    88c93b7 <_ZN25STAICharacterCommonScriptD1Ev+0x37b>
 88c93a5:	8b 45 08             	mov    0x8(%ebp),%eax
 88c93a8:	05 dc 02 00 00       	add    $0x2dc,%eax
 88c93ad:	89 04 24             	mov    %eax,(%esp)
 88c93b0:	e8 bf 3b 80 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 88c93b5:	eb 1a                	jmp    88c93d1 <_ZN25STAICharacterCommonScriptD1Ev+0x395>
 88c93b7:	89 d3                	mov    %edx,%ebx
 88c93b9:	89 c6                	mov    %eax,%esi
 88c93bb:	8b 45 08             	mov    0x8(%ebp),%eax
 88c93be:	05 d0 02 00 00       	add    $0x2d0,%eax
 88c93c3:	89 04 24             	mov    %eax,(%esp)
 88c93c6:	e8 a9 3b 80 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 88c93cb:	89 f0                	mov    %esi,%eax
 88c93cd:	89 da                	mov    %ebx,%edx
 88c93cf:	eb 12                	jmp    88c93e3 <_ZN25STAICharacterCommonScriptD1Ev+0x3a7>
 88c93d1:	8b 45 08             	mov    0x8(%ebp),%eax
 88c93d4:	05 d0 02 00 00       	add    $0x2d0,%eax
 88c93d9:	89 04 24             	mov    %eax,(%esp)
 88c93dc:	e8 93 3b 80 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 88c93e1:	eb 1a                	jmp    88c93fd <_ZN25STAICharacterCommonScriptD1Ev+0x3c1>
 88c93e3:	89 d3                	mov    %edx,%ebx
 88c93e5:	89 c6                	mov    %eax,%esi
 88c93e7:	8b 45 08             	mov    0x8(%ebp),%eax
 88c93ea:	05 ac 00 00 00       	add    $0xac,%eax
 88c93ef:	89 04 24             	mov    %eax,(%esp)
 88c93f2:	e8 ad dd a9 ff       	call   83671a4 <_ZN14STAIInfoScriptD1Ev>
 88c93f7:	89 f0                	mov    %esi,%eax
 88c93f9:	89 da                	mov    %ebx,%edx
 88c93fb:	eb 12                	jmp    88c940f <_ZN25STAICharacterCommonScriptD1Ev+0x3d3>
 88c93fd:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9400:	05 ac 00 00 00       	add    $0xac,%eax
 88c9405:	89 04 24             	mov    %eax,(%esp)
 88c9408:	e8 97 dd a9 ff       	call   83671a4 <_ZN14STAIInfoScriptD1Ev>
 88c940d:	eb 3a                	jmp    88c9449 <_ZN25STAICharacterCommonScriptD1Ev+0x40d>
 88c940f:	89 d6                	mov    %edx,%esi
 88c9411:	89 c7                	mov    %eax,%edi
 88c9413:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9416:	05 94 00 00 00       	add    $0x94,%eax
 88c941b:	85 c0                	test   %eax,%eax
 88c941d:	74 24                	je     88c9443 <_ZN25STAICharacterCommonScriptD1Ev+0x407>
 88c941f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9422:	05 94 00 00 00       	add    $0x94,%eax
 88c9427:	8d 58 18             	lea    0x18(%eax),%ebx
 88c942a:	8b 45 08             	mov    0x8(%ebp),%eax
 88c942d:	05 94 00 00 00       	add    $0x94,%eax
 88c9432:	39 c3                	cmp    %eax,%ebx
 88c9434:	74 0d                	je     88c9443 <_ZN25STAICharacterCommonScriptD1Ev+0x407>
 88c9436:	83 eb 0c             	sub    $0xc,%ebx
 88c9439:	89 1c 24             	mov    %ebx,(%esp)
 88c943c:	e8 1b 32 00 00       	call   88cc65c <_ZNSt6vectorI21STAICharacterItemDataSaIS0_EED1Ev>
 88c9441:	eb e7                	jmp    88c942a <_ZN25STAICharacterCommonScriptD1Ev+0x3ee>
 88c9443:	89 f8                	mov    %edi,%eax
 88c9445:	89 f2                	mov    %esi,%edx
 88c9447:	eb 30                	jmp    88c9479 <_ZN25STAICharacterCommonScriptD1Ev+0x43d>
 88c9449:	8b 45 08             	mov    0x8(%ebp),%eax
 88c944c:	05 94 00 00 00       	add    $0x94,%eax
 88c9451:	85 c0                	test   %eax,%eax
 88c9453:	74 3e                	je     88c9493 <_ZN25STAICharacterCommonScriptD1Ev+0x457>
 88c9455:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9458:	05 94 00 00 00       	add    $0x94,%eax
 88c945d:	8d 58 18             	lea    0x18(%eax),%ebx
 88c9460:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9463:	05 94 00 00 00       	add    $0x94,%eax
 88c9468:	39 c3                	cmp    %eax,%ebx
 88c946a:	74 27                	je     88c9493 <_ZN25STAICharacterCommonScriptD1Ev+0x457>
 88c946c:	83 eb 0c             	sub    $0xc,%ebx
 88c946f:	89 1c 24             	mov    %ebx,(%esp)
 88c9472:	e8 e5 31 00 00       	call   88cc65c <_ZNSt6vectorI21STAICharacterItemDataSaIS0_EED1Ev>
 88c9477:	eb e7                	jmp    88c9460 <_ZN25STAICharacterCommonScriptD1Ev+0x424>
 88c9479:	89 d3                	mov    %edx,%ebx
 88c947b:	89 c6                	mov    %eax,%esi
 88c947d:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9480:	05 88 00 00 00       	add    $0x88,%eax
 88c9485:	89 04 24             	mov    %eax,(%esp)
 88c9488:	e8 5d 31 00 00       	call   88cc5ea <_ZNSt6vectorI28STAICharacterSkillCorrectionSaIS0_EED1Ev>
 88c948d:	89 f0                	mov    %esi,%eax
 88c948f:	89 da                	mov    %ebx,%edx
 88c9491:	eb 12                	jmp    88c94a5 <_ZN25STAICharacterCommonScriptD1Ev+0x469>
 88c9493:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9496:	05 88 00 00 00       	add    $0x88,%eax
 88c949b:	89 04 24             	mov    %eax,(%esp)
 88c949e:	e8 47 31 00 00       	call   88cc5ea <_ZNSt6vectorI28STAICharacterSkillCorrectionSaIS0_EED1Ev>
 88c94a3:	eb 34                	jmp    88c94d9 <_ZN25STAICharacterCommonScriptD1Ev+0x49d>
 88c94a5:	89 d6                	mov    %edx,%esi
 88c94a7:	89 c7                	mov    %eax,%edi
 88c94a9:	8b 45 08             	mov    0x8(%ebp),%eax
 88c94ac:	83 c0 70             	add    $0x70,%eax
 88c94af:	85 c0                	test   %eax,%eax
 88c94b1:	74 20                	je     88c94d3 <_ZN25STAICharacterCommonScriptD1Ev+0x497>
 88c94b3:	8b 45 08             	mov    0x8(%ebp),%eax
 88c94b6:	83 c0 70             	add    $0x70,%eax
 88c94b9:	8d 58 18             	lea    0x18(%eax),%ebx
 88c94bc:	8b 45 08             	mov    0x8(%ebp),%eax
 88c94bf:	83 c0 70             	add    $0x70,%eax
 88c94c2:	39 c3                	cmp    %eax,%ebx
 88c94c4:	74 0d                	je     88c94d3 <_ZN25STAICharacterCommonScriptD1Ev+0x497>
 88c94c6:	83 eb 0c             	sub    $0xc,%ebx
 88c94c9:	89 1c 24             	mov    %ebx,(%esp)
 88c94cc:	e8 a7 30 00 00       	call   88cc578 <_ZNSt6vectorI22STAICharacterSkillDataSaIS0_EED1Ev>
 88c94d1:	eb e9                	jmp    88c94bc <_ZN25STAICharacterCommonScriptD1Ev+0x480>
 88c94d3:	89 f8                	mov    %edi,%eax
 88c94d5:	89 f2                	mov    %esi,%edx
 88c94d7:	eb 2a                	jmp    88c9503 <_ZN25STAICharacterCommonScriptD1Ev+0x4c7>
 88c94d9:	8b 45 08             	mov    0x8(%ebp),%eax
 88c94dc:	83 c0 70             	add    $0x70,%eax
 88c94df:	85 c0                	test   %eax,%eax
 88c94e1:	74 38                	je     88c951b <_ZN25STAICharacterCommonScriptD1Ev+0x4df>
 88c94e3:	8b 45 08             	mov    0x8(%ebp),%eax
 88c94e6:	83 c0 70             	add    $0x70,%eax
 88c94e9:	8d 58 18             	lea    0x18(%eax),%ebx
 88c94ec:	8b 45 08             	mov    0x8(%ebp),%eax
 88c94ef:	83 c0 70             	add    $0x70,%eax
 88c94f2:	39 c3                	cmp    %eax,%ebx
 88c94f4:	74 25                	je     88c951b <_ZN25STAICharacterCommonScriptD1Ev+0x4df>
 88c94f6:	83 eb 0c             	sub    $0xc,%ebx
 88c94f9:	89 1c 24             	mov    %ebx,(%esp)
 88c94fc:	e8 77 30 00 00       	call   88cc578 <_ZNSt6vectorI22STAICharacterSkillDataSaIS0_EED1Ev>
 88c9501:	eb e9                	jmp    88c94ec <_ZN25STAICharacterCommonScriptD1Ev+0x4b0>
 88c9503:	89 d3                	mov    %edx,%ebx
 88c9505:	89 c6                	mov    %eax,%esi
 88c9507:	8b 45 08             	mov    0x8(%ebp),%eax
 88c950a:	83 c0 64             	add    $0x64,%eax
 88c950d:	89 04 24             	mov    %eax,(%esp)
 88c9510:	e8 f1 2f 00 00       	call   88cc506 <_ZNSt6vectorI26STAICharacterEquipmentDataSaIS0_EED1Ev>
 88c9515:	89 f0                	mov    %esi,%eax
 88c9517:	89 da                	mov    %ebx,%edx
 88c9519:	eb 10                	jmp    88c952b <_ZN25STAICharacterCommonScriptD1Ev+0x4ef>
 88c951b:	8b 45 08             	mov    0x8(%ebp),%eax
 88c951e:	83 c0 64             	add    $0x64,%eax
 88c9521:	89 04 24             	mov    %eax,(%esp)
 88c9524:	e8 dd 2f 00 00       	call   88cc506 <_ZNSt6vectorI26STAICharacterEquipmentDataSaIS0_EED1Ev>
 88c9529:	eb 1e                	jmp    88c9549 <_ZN25STAICharacterCommonScriptD1Ev+0x50d>
 88c952b:	89 d3                	mov    %edx,%ebx
 88c952d:	89 c6                	mov    %eax,%esi
 88c952f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9532:	83 c0 04             	add    $0x4,%eax
 88c9535:	89 04 24             	mov    %eax,(%esp)
 88c9538:	e8 b9 2e 00 00       	call   88cc3f6 <_ZN11MinimumInfoD1Ev>
 88c953d:	89 f0                	mov    %esi,%eax
 88c953f:	89 da                	mov    %ebx,%edx
 88c9541:	89 04 24             	mov    %eax,(%esp)
 88c9544:	e8 07 a2 21 00       	call   8ae3750 <_Unwind_Resume>
 88c9549:	8b 45 08             	mov    0x8(%ebp),%eax
 88c954c:	83 c0 04             	add    $0x4,%eax
 88c954f:	89 04 24             	mov    %eax,(%esp)
 88c9552:	e8 9f 2e 00 00       	call   88cc3f6 <_ZN11MinimumInfoD1Ev>
 88c9557:	b8 00 00 00 00       	mov    $0x0,%eax
 88c955c:	84 c0                	test   %al,%al
 88c955e:	74 0b                	je     88c956b <_ZN25STAICharacterCommonScriptD1Ev+0x52f>
 88c9560:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9563:	89 04 24             	mov    %eax,(%esp)
 88c9566:	e8 85 af e5 ff       	call   87244f0 <_ZdlPv>
 88c956b:	83 c4 1c             	add    $0x1c,%esp
 88c956e:	5b                   	pop    %ebx
 88c956f:	5e                   	pop    %esi
 88c9570:	5f                   	pop    %edi
 88c9571:	5d                   	pop    %ebp
 88c9572:	c3                   	ret
 88c9573:	90                   	nop

```

```c
// STAICharacterCommonScript::~STAICharacterCommonScript @ 0x88c903c

/* WARNING: Removing unreachable block (ram,0x088c9560) */
/* STAICharacterCommonScript::~STAICharacterCommonScript() */

void __thiscall
STAICharacterCommonScript::~STAICharacterCommonScript(STAICharacterCommonScript *this)

{
  APCSpeech *this_00;
  vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *this_01;
  vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *this_02;
  
  *(undefined ***)this = &PTR__STAICharacterCommonScript_08e0a1f0;
                    /* try { // try from 088c9054 to 088c9058 has its CatchHandler @ 088c905b */
  destroy(this);
                    /* try { // try from 088c9080 to 088c9084 has its CatchHandler @ 088c9087 */
  std::string::~string((string *)(this + 0xff0));
                    /* try { // try from 088c90ac to 088c90b0 has its CatchHandler @ 088c90b3 */
  std::string::~string((string *)(this + 0xfec));
                    /* try { // try from 088c90d8 to 088c90dc has its CatchHandler @ 088c90df */
  ActiveActionFileSet::~ActiveActionFileSet((ActiveActionFileSet *)(this + 0xfac));
                    /* try { // try from 088c9104 to 088c9108 has its CatchHandler @ 088c910b */
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0xf9c));
                    /* try { // try from 088c9130 to 088c9134 has its CatchHandler @ 088c9137 */
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::~vector
            ((vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> *)(this + 0xf90));
                    /* try { // try from 088c915c to 088c9160 has its CatchHandler @ 088c9163 */
  stEnamyDropAvatarInfo_t::~stEnamyDropAvatarInfo_t((stEnamyDropAvatarInfo_t *)(this + 0xf50));
                    /* try { // try from 088c9188 to 088c918c has its CatchHandler @ 088c918f */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf38));
                    /* try { // try from 088c91b4 to 088c91b8 has its CatchHandler @ 088c91bb */
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::~vector
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0xf2c));
                    /* try { // try from 088c91e0 to 088c91e4 has its CatchHandler @ 088c91e7 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf20));
                    /* try { // try from 088c920c to 088c9210 has its CatchHandler @ 088c9213 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xe6c));
                    /* try { // try from 088c9238 to 088c923c has its CatchHandler @ 088c923f */
  std::vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>>::~vector
            ((vector<STAICharacterCustomSkillLevel,std::allocator<STAICharacterCustomSkillLevel>> *)
             (this + 0xe50));
                    /* try { // try from 088c9264 to 088c9268 has its CatchHandler @ 088c926b */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd94));
                    /* try { // try from 088c9290 to 088c9294 has its CatchHandler @ 088c9297 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xd88));
                    /* try { // try from 088c92bc to 088c92c0 has its CatchHandler @ 088c92c3 */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::~vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd74));
                    /* try { // try from 088c92e8 to 088c92ec has its CatchHandler @ 088c92ef */
  std::vector<APCSpeech,std::allocator<APCSpeech>>::~vector
            ((vector<APCSpeech,std::allocator<APCSpeech>> *)(this + 0xd68));
  if (this != (STAICharacterCommonScript *)0xfffffd00) {
    this_00 = (APCSpeech *)(this + 0xd68);
    while (this_00 != (APCSpeech *)(this + 0x300)) {
      this_00 = this_00 + -0x18;
                    /* try { // try from 088c9358 to 088c935c has its CatchHandler @ 088c935f */
      APCSpeech::~APCSpeech(this_00);
    }
  }
                    /* try { // try from 088c9384 to 088c9388 has its CatchHandler @ 088c938b */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x2e8));
                    /* try { // try from 088c93b0 to 088c93b4 has its CatchHandler @ 088c93b7 */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2dc));
                    /* try { // try from 088c93dc to 088c93e0 has its CatchHandler @ 088c93e3 */
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
                    /* try { // try from 088c9408 to 088c940c has its CatchHandler @ 088c940f */
  STAIInfoScript::~STAIInfoScript((STAIInfoScript *)(this + 0xac));
  if (this != (STAICharacterCommonScript *)0xffffff6c) {
    this_01 = (vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0xac);
    while (this_01 !=
           (vector<STAICharacterItemData,std::allocator<STAICharacterItemData>> *)(this + 0x94)) {
      this_01 = this_01 + -0xc;
                    /* try { // try from 088c9472 to 088c9476 has its CatchHandler @ 088c9479 */
      std::vector<STAICharacterItemData,std::allocator<STAICharacterItemData>>::~vector(this_01);
    }
  }
                    /* try { // try from 088c949e to 088c94a2 has its CatchHandler @ 088c94a5 */
  std::vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>>::~vector
            ((vector<STAICharacterSkillCorrection,std::allocator<STAICharacterSkillCorrection>> *)
             (this + 0x88));
  if (this != (STAICharacterCommonScript *)0xffffff90) {
    this_02 = (vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x88)
    ;
    while (this_02 !=
           (vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>> *)(this + 0x70)) {
      this_02 = this_02 + -0xc;
                    /* try { // try from 088c94fc to 088c9500 has its CatchHandler @ 088c9503 */
      std::vector<STAICharacterSkillData,std::allocator<STAICharacterSkillData>>::~vector(this_02);
    }
  }
                    /* try { // try from 088c9524 to 088c9528 has its CatchHandler @ 088c952b */
  std::vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>>::~vector
            ((vector<STAICharacterEquipmentData,std::allocator<STAICharacterEquipmentData>> *)
             (this + 100));
  MinimumInfo::~MinimumInfo((MinimumInfo *)(this + 4));
  return;
}

```

---

## ~STAICharacterCommonScript_088c9574

```asm
// === 088c9574 STAICharacterCommonScript::~STAICharacterCommonScript  [0x088c9574-0x88c9591] ===
 88c9574:	55                   	push   %ebp
 88c9575:	89 e5                	mov    %esp,%ebp
 88c9577:	83 ec 18             	sub    $0x18,%esp
 88c957a:	8b 45 08             	mov    0x8(%ebp),%eax
 88c957d:	89 04 24             	mov    %eax,(%esp)
 88c9580:	e8 b7 fa ff ff       	call   88c903c <_ZN25STAICharacterCommonScriptD1Ev>
 88c9585:	8b 45 08             	mov    0x8(%ebp),%eax
 88c9588:	89 04 24             	mov    %eax,(%esp)
 88c958b:	e8 60 af e5 ff       	call   87244f0 <_ZdlPv>
 88c9590:	c9                   	leave
 88c9591:	c3                   	ret

```

```c
// STAICharacterCommonScript::~STAICharacterCommonScript @ 0x88c9574

/* STAICharacterCommonScript::~STAICharacterCommonScript() */

void __thiscall
STAICharacterCommonScript::~STAICharacterCommonScript(STAICharacterCommonScript *this)

{
  ~STAICharacterCommonScript(this);
  operator_delete(this);
  return;
}

```

