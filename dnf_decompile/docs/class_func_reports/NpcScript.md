# NpcScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## NpcScript

```asm
// === 089fb942 NpcScript::NpcScript  [0x089fb942-0x89fbf21] ===
 89fb942:	55                   	push   %ebp
 89fb943:	89 e5                	mov    %esp,%ebp
 89fb945:	57                   	push   %edi
 89fb946:	56                   	push   %esi
 89fb947:	53                   	push   %ebx
 89fb948:	83 ec 2c             	sub    $0x2c,%esp
 89fb94b:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb94e:	83 c0 04             	add    $0x4,%eax
 89fb951:	89 04 24             	mov    %eax,(%esp)
 89fb954:	e8 77 ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb959:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb95c:	83 c0 08             	add    $0x8,%eax
 89fb95f:	89 04 24             	mov    %eax,(%esp)
 89fb962:	e8 69 ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb967:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb96a:	83 c0 0c             	add    $0xc,%eax
 89fb96d:	89 04 24             	mov    %eax,(%esp)
 89fb970:	e8 5b ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb975:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb978:	83 c0 14             	add    $0x14,%eax
 89fb97b:	89 04 24             	mov    %eax,(%esp)
 89fb97e:	e8 4d ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb983:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb986:	83 c0 1c             	add    $0x1c,%eax
 89fb989:	89 04 24             	mov    %eax,(%esp)
 89fb98c:	e8 3f ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb991:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb994:	83 c0 24             	add    $0x24,%eax
 89fb997:	89 04 24             	mov    %eax,(%esp)
 89fb99a:	e8 31 ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb99f:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb9a2:	83 c0 28             	add    $0x28,%eax
 89fb9a5:	89 04 24             	mov    %eax,(%esp)
 89fb9a8:	e8 23 ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb9ad:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb9b0:	8d 70 2c             	lea    0x2c(%eax),%esi
 89fb9b3:	89 f7                	mov    %esi,%edi
 89fb9b5:	bb 01 00 00 00       	mov    $0x1,%ebx
 89fb9ba:	eb 0e                	jmp    89fb9ca <_ZN9NpcScriptC1Ev+0x88>
 89fb9bc:	89 3c 24             	mov    %edi,(%esp)
 89fb9bf:	e8 0c ac d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb9c4:	83 c7 04             	add    $0x4,%edi
 89fb9c7:	83 eb 01             	sub    $0x1,%ebx
 89fb9ca:	83 fb ff             	cmp    $0xffffffff,%ebx
 89fb9cd:	0f 95 c0             	setne  %al
 89fb9d0:	84 c0                	test   %al,%al
 89fb9d2:	75 e8                	jne    89fb9bc <_ZN9NpcScriptC1Ev+0x7a>
 89fb9d4:	eb 31                	jmp    89fba07 <_ZN9NpcScriptC1Ev+0xc5>
 89fb9d6:	89 d7                	mov    %edx,%edi
 89fb9d8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 89fb9db:	85 f6                	test   %esi,%esi
 89fb9dd:	74 1e                	je     89fb9fd <_ZN9NpcScriptC1Ev+0xbb>
 89fb9df:	b8 01 00 00 00       	mov    $0x1,%eax
 89fb9e4:	29 d8                	sub    %ebx,%eax
 89fb9e6:	c1 e0 02             	shl    $0x2,%eax
 89fb9e9:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 89fb9ec:	39 f3                	cmp    %esi,%ebx
 89fb9ee:	74 0d                	je     89fb9fd <_ZN9NpcScriptC1Ev+0xbb>
 89fb9f0:	83 eb 04             	sub    $0x4,%ebx
 89fb9f3:	89 1c 24             	mov    %ebx,(%esp)
 89fb9f6:	e8 e5 c1 d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fb9fb:	eb ef                	jmp    89fb9ec <_ZN9NpcScriptC1Ev+0xaa>
 89fb9fd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 89fba00:	89 fa                	mov    %edi,%edx
 89fba02:	e9 65 04 00 00       	jmp    89fbe6c <_ZN9NpcScriptC1Ev+0x52a>
 89fba07:	8b 45 08             	mov    0x8(%ebp),%eax
 89fba0a:	83 c0 3c             	add    $0x3c,%eax
 89fba0d:	89 04 24             	mov    %eax,(%esp)
 89fba10:	e8 bb ab d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fba15:	8b 45 08             	mov    0x8(%ebp),%eax
 89fba18:	83 c0 40             	add    $0x40,%eax
 89fba1b:	89 04 24             	mov    %eax,(%esp)
 89fba1e:	e8 89 27 69 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 89fba23:	8b 45 08             	mov    0x8(%ebp),%eax
 89fba26:	83 c0 4c             	add    $0x4c,%eax
 89fba29:	89 04 24             	mov    %eax,(%esp)
 89fba2c:	e8 df 5a 00 00       	call   8a01510 <_ZNSt3mapI13ENUM_NPC_ROLEiSt4lessIS0_ESaISt4pairIKS0_iEEEC1Ev>
 89fba31:	8b 45 08             	mov    0x8(%ebp),%eax
 89fba34:	83 c0 64             	add    $0x64,%eax
 89fba37:	89 04 24             	mov    %eax,(%esp)
 89fba3a:	e8 91 ab d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fba3f:	8b 45 08             	mov    0x8(%ebp),%eax
 89fba42:	8d 70 68             	lea    0x68(%eax),%esi
 89fba45:	89 f7                	mov    %esi,%edi
 89fba47:	bb 0b 00 00 00       	mov    $0xb,%ebx
 89fba4c:	eb 0e                	jmp    89fba5c <_ZN9NpcScriptC1Ev+0x11a>
 89fba4e:	89 3c 24             	mov    %edi,(%esp)
 89fba51:	e8 56 27 69 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 89fba56:	83 c7 0c             	add    $0xc,%edi
 89fba59:	83 eb 01             	sub    $0x1,%ebx
 89fba5c:	83 fb ff             	cmp    $0xffffffff,%ebx
 89fba5f:	0f 95 c0             	setne  %al
 89fba62:	84 c0                	test   %al,%al
 89fba64:	75 e8                	jne    89fba4e <_ZN9NpcScriptC1Ev+0x10c>
 89fba66:	eb 39                	jmp    89fbaa1 <_ZN9NpcScriptC1Ev+0x15f>
 89fba68:	89 d7                	mov    %edx,%edi
 89fba6a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 89fba6d:	85 f6                	test   %esi,%esi
 89fba6f:	74 26                	je     89fba97 <_ZN9NpcScriptC1Ev+0x155>
 89fba71:	b8 0b 00 00 00       	mov    $0xb,%eax
 89fba76:	29 d8                	sub    %ebx,%eax
 89fba78:	89 c2                	mov    %eax,%edx
 89fba7a:	89 d0                	mov    %edx,%eax
 89fba7c:	01 c0                	add    %eax,%eax
 89fba7e:	01 d0                	add    %edx,%eax
 89fba80:	c1 e0 02             	shl    $0x2,%eax
 89fba83:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 89fba86:	39 f3                	cmp    %esi,%ebx
 89fba88:	74 0d                	je     89fba97 <_ZN9NpcScriptC1Ev+0x155>
 89fba8a:	83 eb 0c             	sub    $0xc,%ebx
 89fba8d:	89 1c 24             	mov    %ebx,(%esp)
 89fba90:	e8 45 83 68 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89fba95:	eb ef                	jmp    89fba86 <_ZN9NpcScriptC1Ev+0x144>
 89fba97:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 89fba9a:	89 fa                	mov    %edi,%edx
 89fba9c:	e9 39 03 00 00       	jmp    89fbdda <_ZN9NpcScriptC1Ev+0x498>
 89fbaa1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbaa4:	05 f8 00 00 00       	add    $0xf8,%eax
 89fbaa9:	89 04 24             	mov    %eax,(%esp)
 89fbaac:	e8 1f ab d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fbab1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbab4:	05 fc 00 00 00       	add    $0xfc,%eax
 89fbab9:	89 04 24             	mov    %eax,(%esp)
 89fbabc:	e8 0f ab d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fbac1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbac4:	05 00 01 00 00       	add    $0x100,%eax
 89fbac9:	89 04 24             	mov    %eax,(%esp)
 89fbacc:	e8 ff aa d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fbad1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbad4:	05 04 01 00 00       	add    $0x104,%eax
 89fbad9:	89 04 24             	mov    %eax,(%esp)
 89fbadc:	e8 7f 14 6d ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 89fbae1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbae4:	05 10 01 00 00       	add    $0x110,%eax
 89fbae9:	89 04 24             	mov    %eax,(%esp)
 89fbaec:	e8 bb 26 69 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 89fbaf1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbaf4:	05 1c 01 00 00       	add    $0x11c,%eax
 89fbaf9:	89 04 24             	mov    %eax,(%esp)
 89fbafc:	e8 5f 14 6d ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 89fbb01:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb04:	05 28 01 00 00       	add    $0x128,%eax
 89fbb09:	89 04 24             	mov    %eax,(%esp)
 89fbb0c:	e8 9b 26 69 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 89fbb11:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb14:	05 34 01 00 00       	add    $0x134,%eax
 89fbb19:	89 04 24             	mov    %eax,(%esp)
 89fbb1c:	e8 45 7d 98 ff       	call   8383866 <_ZNSt6vectorI23InteractiveDialogScriptSaIS0_EEC1Ev>
 89fbb21:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb24:	05 40 01 00 00       	add    $0x140,%eax
 89fbb29:	89 04 24             	mov    %eax,(%esp)
 89fbb2c:	e8 f3 59 00 00       	call   8a01524 <_ZNSt6vectorI21PresentResponceScriptSaIS0_EEC1Ev>
 89fbb31:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb34:	05 4c 01 00 00       	add    $0x14c,%eax
 89fbb39:	89 04 24             	mov    %eax,(%esp)
 89fbb3c:	e8 1f 14 6d ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 89fbb41:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb44:	05 58 01 00 00       	add    $0x158,%eax
 89fbb49:	89 04 24             	mov    %eax,(%esp)
 89fbb4c:	e8 e7 59 00 00       	call   8a01538 <_ZNSt6vectorI30PresentResponceScriptExceptionSaIS0_EEC1Ev>
 89fbb51:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb54:	05 64 01 00 00       	add    $0x164,%eax
 89fbb59:	89 04 24             	mov    %eax,(%esp)
 89fbb5c:	e8 eb 59 00 00       	call   8a0154c <_ZNSt6vectorI26PresentResponceScriptEventSaIS0_EEC1Ev>
 89fbb61:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb64:	05 70 01 00 00       	add    $0x170,%eax
 89fbb69:	89 04 24             	mov    %eax,(%esp)
 89fbb6c:	e8 3f 53 00 00       	call   8a00eb0 <_ZN25stFavorableRelationShip_tC1Ev>
 89fbb71:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb74:	05 84 06 00 00       	add    $0x684,%eax
 89fbb79:	89 04 24             	mov    %eax,(%esp)
 89fbb7c:	e8 4f aa d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fbb81:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb84:	05 8c 06 00 00       	add    $0x68c,%eax
 89fbb89:	89 04 24             	mov    %eax,(%esp)
 89fbb8c:	e8 cf 13 6d ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 89fbb91:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbb94:	05 98 06 00 00       	add    $0x698,%eax
 89fbb99:	89 04 24             	mov    %eax,(%esp)
 89fbb9c:	e8 37 5a 00 00       	call   8a015d8 <_ZNSt6vectorI13ClickMarkInfoSaIS0_EEC1Ev>
 89fbba1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbba4:	05 a4 06 00 00       	add    $0x6a4,%eax
 89fbba9:	89 04 24             	mov    %eax,(%esp)
 89fbbac:	e8 57 50 00 00       	call   8a00c08 <_ZN24randomMessageBalloonInfoC1Ev>
 89fbbb1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbbb4:	05 bc 06 00 00       	add    $0x6bc,%eax
 89fbbb9:	89 04 24             	mov    %eax,(%esp)
 89fbbbc:	e8 cd fb ff ff       	call   89fb78e <_ZN12NpcMovieDataC1Ev>
 89fbbc1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbbc4:	89 04 24             	mov    %eax,(%esp)
 89fbbc7:	e8 56 03 00 00       	call   89fbf22 <_ZN9NpcScript5clearEv>
 89fbbcc:	e9 49 03 00 00       	jmp    89fbf1a <_ZN9NpcScriptC1Ev+0x5d8>
 89fbbd1:	89 d3                	mov    %edx,%ebx
 89fbbd3:	89 c6                	mov    %eax,%esi
 89fbbd5:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbbd8:	05 bc 06 00 00       	add    $0x6bc,%eax
 89fbbdd:	89 04 24             	mov    %eax,(%esp)
 89fbbe0:	e8 b1 61 b8 ff       	call   8581d96 <_ZN12NpcMovieDataD1Ev>
 89fbbe5:	89 f0                	mov    %esi,%eax
 89fbbe7:	89 da                	mov    %ebx,%edx
 89fbbe9:	eb 00                	jmp    89fbbeb <_ZN9NpcScriptC1Ev+0x2a9>
 89fbbeb:	89 d3                	mov    %edx,%ebx
 89fbbed:	89 c6                	mov    %eax,%esi
 89fbbef:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbbf2:	05 a4 06 00 00       	add    $0x6a4,%eax
 89fbbf7:	89 04 24             	mov    %eax,(%esp)
 89fbbfa:	e8 51 61 b8 ff       	call   8581d50 <_ZN24randomMessageBalloonInfoD1Ev>
 89fbbff:	89 f0                	mov    %esi,%eax
 89fbc01:	89 da                	mov    %ebx,%edx
 89fbc03:	eb 00                	jmp    89fbc05 <_ZN9NpcScriptC1Ev+0x2c3>
 89fbc05:	89 d3                	mov    %edx,%ebx
 89fbc07:	89 c6                	mov    %eax,%esi
 89fbc09:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbc0c:	05 98 06 00 00       	add    $0x698,%eax
 89fbc11:	89 04 24             	mov    %eax,(%esp)
 89fbc14:	e8 29 6c b8 ff       	call   8582842 <_ZNSt6vectorI13ClickMarkInfoSaIS0_EED1Ev>
 89fbc19:	89 f0                	mov    %esi,%eax
 89fbc1b:	89 da                	mov    %ebx,%edx
 89fbc1d:	eb 00                	jmp    89fbc1f <_ZN9NpcScriptC1Ev+0x2dd>
 89fbc1f:	89 d3                	mov    %edx,%ebx
 89fbc21:	89 c6                	mov    %eax,%esi
 89fbc23:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbc26:	05 8c 06 00 00       	add    $0x68c,%eax
 89fbc2b:	89 04 24             	mov    %eax,(%esp)
 89fbc2e:	e8 41 13 6d ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 89fbc33:	89 f0                	mov    %esi,%eax
 89fbc35:	89 da                	mov    %ebx,%edx
 89fbc37:	eb 00                	jmp    89fbc39 <_ZN9NpcScriptC1Ev+0x2f7>
 89fbc39:	89 d3                	mov    %edx,%ebx
 89fbc3b:	89 c6                	mov    %eax,%esi
 89fbc3d:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbc40:	05 84 06 00 00       	add    $0x684,%eax
 89fbc45:	89 04 24             	mov    %eax,(%esp)
 89fbc48:	e8 93 bf d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbc4d:	89 f0                	mov    %esi,%eax
 89fbc4f:	89 da                	mov    %ebx,%edx
 89fbc51:	eb 00                	jmp    89fbc53 <_ZN9NpcScriptC1Ev+0x311>
 89fbc53:	89 d3                	mov    %edx,%ebx
 89fbc55:	89 c6                	mov    %eax,%esi
 89fbc57:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbc5a:	05 70 01 00 00       	add    $0x170,%eax
 89fbc5f:	89 04 24             	mov    %eax,(%esp)
 89fbc62:	e8 79 5e b8 ff       	call   8581ae0 <_ZN25stFavorableRelationShip_tD1Ev>
 89fbc67:	89 f0                	mov    %esi,%eax
 89fbc69:	89 da                	mov    %ebx,%edx
 89fbc6b:	eb 00                	jmp    89fbc6d <_ZN9NpcScriptC1Ev+0x32b>
 89fbc6d:	89 d3                	mov    %edx,%ebx
 89fbc6f:	89 c6                	mov    %eax,%esi
 89fbc71:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbc74:	05 64 01 00 00       	add    $0x164,%eax
 89fbc79:	89 04 24             	mov    %eax,(%esp)
 89fbc7c:	e8 27 69 b8 ff       	call   85825a8 <_ZNSt6vectorI26PresentResponceScriptEventSaIS0_EED1Ev>
 89fbc81:	89 f0                	mov    %esi,%eax
 89fbc83:	89 da                	mov    %ebx,%edx
 89fbc85:	eb 00                	jmp    89fbc87 <_ZN9NpcScriptC1Ev+0x345>
 89fbc87:	89 d3                	mov    %edx,%ebx
 89fbc89:	89 c6                	mov    %eax,%esi
 89fbc8b:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbc8e:	05 58 01 00 00       	add    $0x158,%eax
 89fbc93:	89 04 24             	mov    %eax,(%esp)
 89fbc96:	e8 af 68 b8 ff       	call   858254a <_ZNSt6vectorI30PresentResponceScriptExceptionSaIS0_EED1Ev>
 89fbc9b:	89 f0                	mov    %esi,%eax
 89fbc9d:	89 da                	mov    %ebx,%edx
 89fbc9f:	eb 00                	jmp    89fbca1 <_ZN9NpcScriptC1Ev+0x35f>
 89fbca1:	89 d3                	mov    %edx,%ebx
 89fbca3:	89 c6                	mov    %eax,%esi
 89fbca5:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbca8:	05 4c 01 00 00       	add    $0x14c,%eax
 89fbcad:	89 04 24             	mov    %eax,(%esp)
 89fbcb0:	e8 bf 12 6d ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 89fbcb5:	89 f0                	mov    %esi,%eax
 89fbcb7:	89 da                	mov    %ebx,%edx
 89fbcb9:	eb 00                	jmp    89fbcbb <_ZN9NpcScriptC1Ev+0x379>
 89fbcbb:	89 d3                	mov    %edx,%ebx
 89fbcbd:	89 c6                	mov    %eax,%esi
 89fbcbf:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbcc2:	05 40 01 00 00       	add    $0x140,%eax
 89fbcc7:	89 04 24             	mov    %eax,(%esp)
 89fbcca:	e8 1d 68 b8 ff       	call   85824ec <_ZNSt6vectorI21PresentResponceScriptSaIS0_EED1Ev>
 89fbccf:	89 f0                	mov    %esi,%eax
 89fbcd1:	89 da                	mov    %ebx,%edx
 89fbcd3:	eb 00                	jmp    89fbcd5 <_ZN9NpcScriptC1Ev+0x393>
 89fbcd5:	89 d3                	mov    %edx,%ebx
 89fbcd7:	89 c6                	mov    %eax,%esi
 89fbcd9:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbcdc:	05 34 01 00 00       	add    $0x134,%eax
 89fbce1:	89 04 24             	mov    %eax,(%esp)
 89fbce4:	e8 91 7b 98 ff       	call   838387a <_ZNSt6vectorI23InteractiveDialogScriptSaIS0_EED1Ev>
 89fbce9:	89 f0                	mov    %esi,%eax
 89fbceb:	89 da                	mov    %ebx,%edx
 89fbced:	eb 00                	jmp    89fbcef <_ZN9NpcScriptC1Ev+0x3ad>
 89fbcef:	89 d3                	mov    %edx,%ebx
 89fbcf1:	89 c6                	mov    %eax,%esi
 89fbcf3:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbcf6:	05 28 01 00 00       	add    $0x128,%eax
 89fbcfb:	89 04 24             	mov    %eax,(%esp)
 89fbcfe:	e8 d7 80 68 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89fbd03:	89 f0                	mov    %esi,%eax
 89fbd05:	89 da                	mov    %ebx,%edx
 89fbd07:	eb 00                	jmp    89fbd09 <_ZN9NpcScriptC1Ev+0x3c7>
 89fbd09:	89 d3                	mov    %edx,%ebx
 89fbd0b:	89 c6                	mov    %eax,%esi
 89fbd0d:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbd10:	05 1c 01 00 00       	add    $0x11c,%eax
 89fbd15:	89 04 24             	mov    %eax,(%esp)
 89fbd18:	e8 57 12 6d ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 89fbd1d:	89 f0                	mov    %esi,%eax
 89fbd1f:	89 da                	mov    %ebx,%edx
 89fbd21:	eb 00                	jmp    89fbd23 <_ZN9NpcScriptC1Ev+0x3e1>
 89fbd23:	89 d3                	mov    %edx,%ebx
 89fbd25:	89 c6                	mov    %eax,%esi
 89fbd27:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbd2a:	05 10 01 00 00       	add    $0x110,%eax
 89fbd2f:	89 04 24             	mov    %eax,(%esp)
 89fbd32:	e8 a3 80 68 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89fbd37:	89 f0                	mov    %esi,%eax
 89fbd39:	89 da                	mov    %ebx,%edx
 89fbd3b:	eb 00                	jmp    89fbd3d <_ZN9NpcScriptC1Ev+0x3fb>
 89fbd3d:	89 d3                	mov    %edx,%ebx
 89fbd3f:	89 c6                	mov    %eax,%esi
 89fbd41:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbd44:	05 04 01 00 00       	add    $0x104,%eax
 89fbd49:	89 04 24             	mov    %eax,(%esp)
 89fbd4c:	e8 23 12 6d ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 89fbd51:	89 f0                	mov    %esi,%eax
 89fbd53:	89 da                	mov    %ebx,%edx
 89fbd55:	eb 00                	jmp    89fbd57 <_ZN9NpcScriptC1Ev+0x415>
 89fbd57:	89 d3                	mov    %edx,%ebx
 89fbd59:	89 c6                	mov    %eax,%esi
 89fbd5b:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbd5e:	05 00 01 00 00       	add    $0x100,%eax
 89fbd63:	89 04 24             	mov    %eax,(%esp)
 89fbd66:	e8 75 be d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbd6b:	89 f0                	mov    %esi,%eax
 89fbd6d:	89 da                	mov    %ebx,%edx
 89fbd6f:	eb 00                	jmp    89fbd71 <_ZN9NpcScriptC1Ev+0x42f>
 89fbd71:	89 d3                	mov    %edx,%ebx
 89fbd73:	89 c6                	mov    %eax,%esi
 89fbd75:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbd78:	05 fc 00 00 00       	add    $0xfc,%eax
 89fbd7d:	89 04 24             	mov    %eax,(%esp)
 89fbd80:	e8 5b be d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbd85:	89 f0                	mov    %esi,%eax
 89fbd87:	89 da                	mov    %ebx,%edx
 89fbd89:	eb 00                	jmp    89fbd8b <_ZN9NpcScriptC1Ev+0x449>
 89fbd8b:	89 d3                	mov    %edx,%ebx
 89fbd8d:	89 c6                	mov    %eax,%esi
 89fbd8f:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbd92:	05 f8 00 00 00       	add    $0xf8,%eax
 89fbd97:	89 04 24             	mov    %eax,(%esp)
 89fbd9a:	e8 41 be d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbd9f:	89 f0                	mov    %esi,%eax
 89fbda1:	89 da                	mov    %ebx,%edx
 89fbda3:	eb 00                	jmp    89fbda5 <_ZN9NpcScriptC1Ev+0x463>
 89fbda5:	89 d6                	mov    %edx,%esi
 89fbda7:	89 c7                	mov    %eax,%edi
 89fbda9:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbdac:	83 c0 68             	add    $0x68,%eax
 89fbdaf:	85 c0                	test   %eax,%eax
 89fbdb1:	74 23                	je     89fbdd6 <_ZN9NpcScriptC1Ev+0x494>
 89fbdb3:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbdb6:	83 c0 68             	add    $0x68,%eax
 89fbdb9:	8d 98 90 00 00 00    	lea    0x90(%eax),%ebx
 89fbdbf:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbdc2:	83 c0 68             	add    $0x68,%eax
 89fbdc5:	39 c3                	cmp    %eax,%ebx
 89fbdc7:	74 0d                	je     89fbdd6 <_ZN9NpcScriptC1Ev+0x494>
 89fbdc9:	83 eb 0c             	sub    $0xc,%ebx
 89fbdcc:	89 1c 24             	mov    %ebx,(%esp)
 89fbdcf:	e8 06 80 68 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89fbdd4:	eb e9                	jmp    89fbdbf <_ZN9NpcScriptC1Ev+0x47d>
 89fbdd6:	89 f8                	mov    %edi,%eax
 89fbdd8:	89 f2                	mov    %esi,%edx
 89fbdda:	89 d3                	mov    %edx,%ebx
 89fbddc:	89 c6                	mov    %eax,%esi
 89fbdde:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbde1:	83 c0 64             	add    $0x64,%eax
 89fbde4:	89 04 24             	mov    %eax,(%esp)
 89fbde7:	e8 f4 bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbdec:	89 f0                	mov    %esi,%eax
 89fbdee:	89 da                	mov    %ebx,%edx
 89fbdf0:	eb 00                	jmp    89fbdf2 <_ZN9NpcScriptC1Ev+0x4b0>
 89fbdf2:	89 d3                	mov    %edx,%ebx
 89fbdf4:	89 c6                	mov    %eax,%esi
 89fbdf6:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbdf9:	83 c0 4c             	add    $0x4c,%eax
 89fbdfc:	89 04 24             	mov    %eax,(%esp)
 89fbdff:	e8 54 5c b8 ff       	call   8581a58 <_ZNSt3mapI13ENUM_NPC_ROLEiSt4lessIS0_ESaISt4pairIKS0_iEEED1Ev>
 89fbe04:	89 f0                	mov    %esi,%eax
 89fbe06:	89 da                	mov    %ebx,%edx
 89fbe08:	eb 00                	jmp    89fbe0a <_ZN9NpcScriptC1Ev+0x4c8>
 89fbe0a:	89 d3                	mov    %edx,%ebx
 89fbe0c:	89 c6                	mov    %eax,%esi
 89fbe0e:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbe11:	83 c0 40             	add    $0x40,%eax
 89fbe14:	89 04 24             	mov    %eax,(%esp)
 89fbe17:	e8 be 7f 68 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89fbe1c:	89 f0                	mov    %esi,%eax
 89fbe1e:	89 da                	mov    %ebx,%edx
 89fbe20:	eb 00                	jmp    89fbe22 <_ZN9NpcScriptC1Ev+0x4e0>
 89fbe22:	89 d3                	mov    %edx,%ebx
 89fbe24:	89 c6                	mov    %eax,%esi
 89fbe26:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbe29:	83 c0 3c             	add    $0x3c,%eax
 89fbe2c:	89 04 24             	mov    %eax,(%esp)
 89fbe2f:	e8 ac bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbe34:	89 f0                	mov    %esi,%eax
 89fbe36:	89 da                	mov    %ebx,%edx
 89fbe38:	eb 00                	jmp    89fbe3a <_ZN9NpcScriptC1Ev+0x4f8>
 89fbe3a:	89 d6                	mov    %edx,%esi
 89fbe3c:	89 c7                	mov    %eax,%edi
 89fbe3e:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbe41:	83 c0 2c             	add    $0x2c,%eax
 89fbe44:	85 c0                	test   %eax,%eax
 89fbe46:	74 20                	je     89fbe68 <_ZN9NpcScriptC1Ev+0x526>
 89fbe48:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbe4b:	83 c0 2c             	add    $0x2c,%eax
 89fbe4e:	8d 58 08             	lea    0x8(%eax),%ebx
 89fbe51:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbe54:	83 c0 2c             	add    $0x2c,%eax
 89fbe57:	39 c3                	cmp    %eax,%ebx
 89fbe59:	74 0d                	je     89fbe68 <_ZN9NpcScriptC1Ev+0x526>
 89fbe5b:	83 eb 04             	sub    $0x4,%ebx
 89fbe5e:	89 1c 24             	mov    %ebx,(%esp)
 89fbe61:	e8 7a bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbe66:	eb e9                	jmp    89fbe51 <_ZN9NpcScriptC1Ev+0x50f>
 89fbe68:	89 f8                	mov    %edi,%eax
 89fbe6a:	89 f2                	mov    %esi,%edx
 89fbe6c:	89 d3                	mov    %edx,%ebx
 89fbe6e:	89 c6                	mov    %eax,%esi
 89fbe70:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbe73:	83 c0 28             	add    $0x28,%eax
 89fbe76:	89 04 24             	mov    %eax,(%esp)
 89fbe79:	e8 62 bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbe7e:	89 f0                	mov    %esi,%eax
 89fbe80:	89 da                	mov    %ebx,%edx
 89fbe82:	eb 00                	jmp    89fbe84 <_ZN9NpcScriptC1Ev+0x542>
 89fbe84:	89 d3                	mov    %edx,%ebx
 89fbe86:	89 c6                	mov    %eax,%esi
 89fbe88:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbe8b:	83 c0 24             	add    $0x24,%eax
 89fbe8e:	89 04 24             	mov    %eax,(%esp)
 89fbe91:	e8 4a bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbe96:	89 f0                	mov    %esi,%eax
 89fbe98:	89 da                	mov    %ebx,%edx
 89fbe9a:	eb 00                	jmp    89fbe9c <_ZN9NpcScriptC1Ev+0x55a>
 89fbe9c:	89 d3                	mov    %edx,%ebx
 89fbe9e:	89 c6                	mov    %eax,%esi
 89fbea0:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbea3:	83 c0 1c             	add    $0x1c,%eax
 89fbea6:	89 04 24             	mov    %eax,(%esp)
 89fbea9:	e8 32 bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbeae:	89 f0                	mov    %esi,%eax
 89fbeb0:	89 da                	mov    %ebx,%edx
 89fbeb2:	eb 00                	jmp    89fbeb4 <_ZN9NpcScriptC1Ev+0x572>
 89fbeb4:	89 d3                	mov    %edx,%ebx
 89fbeb6:	89 c6                	mov    %eax,%esi
 89fbeb8:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbebb:	83 c0 14             	add    $0x14,%eax
 89fbebe:	89 04 24             	mov    %eax,(%esp)
 89fbec1:	e8 1a bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbec6:	89 f0                	mov    %esi,%eax
 89fbec8:	89 da                	mov    %ebx,%edx
 89fbeca:	eb 00                	jmp    89fbecc <_ZN9NpcScriptC1Ev+0x58a>
 89fbecc:	89 d3                	mov    %edx,%ebx
 89fbece:	89 c6                	mov    %eax,%esi
 89fbed0:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbed3:	83 c0 0c             	add    $0xc,%eax
 89fbed6:	89 04 24             	mov    %eax,(%esp)
 89fbed9:	e8 02 bd d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbede:	89 f0                	mov    %esi,%eax
 89fbee0:	89 da                	mov    %ebx,%edx
 89fbee2:	eb 00                	jmp    89fbee4 <_ZN9NpcScriptC1Ev+0x5a2>
 89fbee4:	89 d3                	mov    %edx,%ebx
 89fbee6:	89 c6                	mov    %eax,%esi
 89fbee8:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbeeb:	83 c0 08             	add    $0x8,%eax
 89fbeee:	89 04 24             	mov    %eax,(%esp)
 89fbef1:	e8 ea bc d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbef6:	89 f0                	mov    %esi,%eax
 89fbef8:	89 da                	mov    %ebx,%edx
 89fbefa:	eb 00                	jmp    89fbefc <_ZN9NpcScriptC1Ev+0x5ba>
 89fbefc:	89 d3                	mov    %edx,%ebx
 89fbefe:	89 c6                	mov    %eax,%esi
 89fbf00:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf03:	83 c0 04             	add    $0x4,%eax
 89fbf06:	89 04 24             	mov    %eax,(%esp)
 89fbf09:	e8 d2 bc d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fbf0e:	89 f0                	mov    %esi,%eax
 89fbf10:	89 da                	mov    %ebx,%edx
 89fbf12:	89 04 24             	mov    %eax,(%esp)
 89fbf15:	e8 36 78 0e 00       	call   8ae3750 <_Unwind_Resume>
 89fbf1a:	83 c4 2c             	add    $0x2c,%esp
 89fbf1d:	5b                   	pop    %ebx
 89fbf1e:	5e                   	pop    %esi
 89fbf1f:	5f                   	pop    %edi
 89fbf20:	5d                   	pop    %ebp
 89fbf21:	c3                   	ret

```

```c
// NpcScript::NpcScript @ 0x89fb942

/* NpcScript::NpcScript() */

void __thiscall NpcScript::NpcScript(NpcScript *this)

{
  int iVar1;
  string *this_00;
  vector<int,std::allocator<int>> *this_01;
  
  std::string::string((string *)(this + 4));
                    /* try { // try from 089fb962 to 089fb966 has its CatchHandler @ 089fbefc */
  std::string::string((string *)(this + 8));
                    /* try { // try from 089fb970 to 089fb974 has its CatchHandler @ 089fbee4 */
  std::string::string((string *)(this + 0xc));
                    /* try { // try from 089fb97e to 089fb982 has its CatchHandler @ 089fbecc */
  std::string::string((string *)(this + 0x14));
                    /* try { // try from 089fb98c to 089fb990 has its CatchHandler @ 089fbeb4 */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 089fb99a to 089fb99e has its CatchHandler @ 089fbe9c */
  std::string::string((string *)(this + 0x24));
                    /* try { // try from 089fb9a8 to 089fb9ac has its CatchHandler @ 089fbe84 */
  std::string::string((string *)(this + 0x28));
  this_00 = (string *)(this + 0x2c);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 089fb9bf to 089fb9c3 has its CatchHandler @ 089fb9d6 */
    std::string::string(this_00);
    this_00 = this_00 + 4;
  }
                    /* try { // try from 089fba10 to 089fba14 has its CatchHandler @ 089fbe3a */
  std::string::string((string *)(this + 0x3c));
                    /* try { // try from 089fba1e to 089fba22 has its CatchHandler @ 089fbe22 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x40));
                    /* try { // try from 089fba2c to 089fba30 has its CatchHandler @ 089fbe0a */
  std::
  map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
  ::map((map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
         *)(this + 0x4c));
                    /* try { // try from 089fba3a to 089fba3e has its CatchHandler @ 089fbdf2 */
  std::string::string((string *)(this + 100));
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x68);
  for (iVar1 = 0xb; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 089fba51 to 089fba55 has its CatchHandler @ 089fba68 */
    std::vector<int,std::allocator<int>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 089fbaac to 089fbab0 has its CatchHandler @ 089fbda5 */
  std::string::string((string *)(this + 0xf8));
                    /* try { // try from 089fbabc to 089fbac0 has its CatchHandler @ 089fbd8b */
  std::string::string((string *)(this + 0xfc));
                    /* try { // try from 089fbacc to 089fbad0 has its CatchHandler @ 089fbd71 */
  std::string::string((string *)(this + 0x100));
                    /* try { // try from 089fbadc to 089fbae0 has its CatchHandler @ 089fbd57 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x104));
                    /* try { // try from 089fbaec to 089fbaf0 has its CatchHandler @ 089fbd3d */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x110));
                    /* try { // try from 089fbafc to 089fbb00 has its CatchHandler @ 089fbd23 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x11c));
                    /* try { // try from 089fbb0c to 089fbb10 has its CatchHandler @ 089fbd09 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x128));
                    /* try { // try from 089fbb1c to 089fbb20 has its CatchHandler @ 089fbcef */
  std::vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>>::vector
            ((vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>> *)
             (this + 0x134));
                    /* try { // try from 089fbb2c to 089fbb30 has its CatchHandler @ 089fbcd5 */
  std::vector<PresentResponceScript,std::allocator<PresentResponceScript>>::vector
            ((vector<PresentResponceScript,std::allocator<PresentResponceScript>> *)(this + 0x140));
                    /* try { // try from 089fbb3c to 089fbb40 has its CatchHandler @ 089fbcbb */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x14c));
                    /* try { // try from 089fbb4c to 089fbb50 has its CatchHandler @ 089fbca1 */
  std::vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>::vector
            ((vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>
              *)(this + 0x158));
                    /* try { // try from 089fbb5c to 089fbb60 has its CatchHandler @ 089fbc87 */
  std::vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>>::vector
            ((vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>> *)
             (this + 0x164));
                    /* try { // try from 089fbb6c to 089fbb70 has its CatchHandler @ 089fbc6d */
  stFavorableRelationShip_t::stFavorableRelationShip_t((stFavorableRelationShip_t *)(this + 0x170));
                    /* try { // try from 089fbb7c to 089fbb80 has its CatchHandler @ 089fbc53 */
  std::string::string((string *)(this + 0x684));
                    /* try { // try from 089fbb8c to 089fbb90 has its CatchHandler @ 089fbc39 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68c));
                    /* try { // try from 089fbb9c to 089fbba0 has its CatchHandler @ 089fbc1f */
  std::vector<ClickMarkInfo,std::allocator<ClickMarkInfo>>::vector
            ((vector<ClickMarkInfo,std::allocator<ClickMarkInfo>> *)(this + 0x698));
                    /* try { // try from 089fbbac to 089fbbb0 has its CatchHandler @ 089fbc05 */
  randomMessageBalloonInfo::randomMessageBalloonInfo((randomMessageBalloonInfo *)(this + 0x6a4));
                    /* try { // try from 089fbbbc to 089fbbc0 has its CatchHandler @ 089fbbeb */
  NpcMovieData::NpcMovieData((NpcMovieData *)(this + 0x6bc));
                    /* try { // try from 089fbbc7 to 089fbbcb has its CatchHandler @ 089fbbd1 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 089fbf22 NpcScript::clear  [0x089fbf22-0x89fc1a7] ===
 89fbf22:	55                   	push   %ebp
 89fbf23:	89 e5                	mov    %esp,%ebp
 89fbf25:	83 ec 28             	sub    $0x28,%esp
 89fbf28:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf2b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 89fbf31:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf34:	83 c0 04             	add    $0x4,%eax
 89fbf37:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fbf3e:	08 
 89fbf3f:	89 04 24             	mov    %eax,(%esp)
 89fbf42:	e8 d9 c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fbf47:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf4a:	83 c0 08             	add    $0x8,%eax
 89fbf4d:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fbf54:	08 
 89fbf55:	89 04 24             	mov    %eax,(%esp)
 89fbf58:	e8 c3 c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fbf5d:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf60:	83 c0 0c             	add    $0xc,%eax
 89fbf63:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fbf6a:	08 
 89fbf6b:	89 04 24             	mov    %eax,(%esp)
 89fbf6e:	e8 ad c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fbf73:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf76:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 89fbf7d:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf80:	83 c0 14             	add    $0x14,%eax
 89fbf83:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fbf8a:	08 
 89fbf8b:	89 04 24             	mov    %eax,(%esp)
 89fbf8e:	e8 8d c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fbf93:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbf96:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 89fbf9d:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbfa0:	83 c0 1c             	add    $0x1c,%eax
 89fbfa3:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fbfaa:	08 
 89fbfab:	89 04 24             	mov    %eax,(%esp)
 89fbfae:	e8 6d c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fbfb3:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbfb6:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 89fbfbd:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbfc0:	83 c0 24             	add    $0x24,%eax
 89fbfc3:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fbfca:	08 
 89fbfcb:	89 04 24             	mov    %eax,(%esp)
 89fbfce:	e8 4d c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fbfd3:	8b 45 08             	mov    0x8(%ebp),%eax
 89fbfd6:	83 c0 28             	add    $0x28,%eax
 89fbfd9:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fbfe0:	08 
 89fbfe1:	89 04 24             	mov    %eax,(%esp)
 89fbfe4:	e8 37 c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fbfe9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 89fbff0:	eb 23                	jmp    89fc015 <_ZN9NpcScript5clearEv+0xf3>
 89fbff2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 89fbff5:	83 c0 08             	add    $0x8,%eax
 89fbff8:	c1 e0 02             	shl    $0x2,%eax
 89fbffb:	03 45 08             	add    0x8(%ebp),%eax
 89fbffe:	83 c0 0c             	add    $0xc,%eax
 89fc001:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fc008:	08 
 89fc009:	89 04 24             	mov    %eax,(%esp)
 89fc00c:	e8 0f c7 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fc011:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 89fc015:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 89fc019:	0f 9e c0             	setle  %al
 89fc01c:	84 c0                	test   %al,%al
 89fc01e:	75 d2                	jne    89fbff2 <_ZN9NpcScript5clearEv+0xd0>
 89fc020:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc023:	c6 40 34 01          	movb   $0x1,0x34(%eax)
 89fc027:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc02a:	83 c0 4c             	add    $0x4c,%eax
 89fc02d:	89 04 24             	mov    %eax,(%esp)
 89fc030:	e8 b7 55 00 00       	call   8a015ec <_ZNSt3mapI13ENUM_NPC_ROLEiSt4lessIS0_ESaISt4pairIKS0_iEEE5clearEv>
 89fc035:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc038:	83 c0 64             	add    $0x64,%eax
 89fc03b:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fc042:	08 
 89fc043:	89 04 24             	mov    %eax,(%esp)
 89fc046:	e8 d5 c6 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fc04b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89fc052:	eb 21                	jmp    89fc075 <_ZN9NpcScript5clearEv+0x153>
 89fc054:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89fc057:	89 d0                	mov    %edx,%eax
 89fc059:	01 c0                	add    %eax,%eax
 89fc05b:	01 d0                	add    %edx,%eax
 89fc05d:	c1 e0 02             	shl    $0x2,%eax
 89fc060:	83 c0 60             	add    $0x60,%eax
 89fc063:	03 45 08             	add    0x8(%ebp),%eax
 89fc066:	83 c0 08             	add    $0x8,%eax
 89fc069:	89 04 24             	mov    %eax,(%esp)
 89fc06c:	e8 fd aa 69 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 89fc071:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 89fc075:	83 7d f4 0b          	cmpl   $0xb,-0xc(%ebp)
 89fc079:	0f 9e c0             	setle  %al
 89fc07c:	84 c0                	test   %al,%al
 89fc07e:	75 d4                	jne    89fc054 <_ZN9NpcScript5clearEv+0x132>
 89fc080:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc083:	05 00 01 00 00       	add    $0x100,%eax
 89fc088:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fc08f:	08 
 89fc090:	89 04 24             	mov    %eax,(%esp)
 89fc093:	e8 88 c6 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fc098:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc09b:	c7 40 38 ff ff ff ff 	movl   $0xffffffff,0x38(%eax)
 89fc0a2:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc0a5:	05 04 01 00 00       	add    $0x104,%eax
 89fc0aa:	89 04 24             	mov    %eax,(%esp)
 89fc0ad:	e8 16 56 94 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 89fc0b2:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc0b5:	05 10 01 00 00       	add    $0x110,%eax
 89fc0ba:	89 04 24             	mov    %eax,(%esp)
 89fc0bd:	e8 ac aa 69 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 89fc0c2:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc0c5:	05 1c 01 00 00       	add    $0x11c,%eax
 89fc0ca:	89 04 24             	mov    %eax,(%esp)
 89fc0cd:	e8 f6 55 94 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 89fc0d2:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc0d5:	05 28 01 00 00       	add    $0x128,%eax
 89fc0da:	89 04 24             	mov    %eax,(%esp)
 89fc0dd:	e8 8c aa 69 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 89fc0e2:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc0e5:	05 34 01 00 00       	add    $0x134,%eax
 89fc0ea:	89 04 24             	mov    %eax,(%esp)
 89fc0ed:	e8 6c 74 98 ff       	call   838355e <_ZNSt6vectorI23InteractiveDialogScriptSaIS0_EE5clearEv>
 89fc0f2:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc0f5:	05 40 01 00 00       	add    $0x140,%eax
 89fc0fa:	89 04 24             	mov    %eax,(%esp)
 89fc0fd:	e8 fe 54 00 00       	call   8a01600 <_ZNSt6vectorI21PresentResponceScriptSaIS0_EE5clearEv>
 89fc102:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc105:	05 58 01 00 00       	add    $0x158,%eax
 89fc10a:	89 04 24             	mov    %eax,(%esp)
 89fc10d:	e8 0a 55 00 00       	call   8a0161c <_ZNSt6vectorI30PresentResponceScriptExceptionSaIS0_EE5clearEv>
 89fc112:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc115:	05 64 01 00 00       	add    $0x164,%eax
 89fc11a:	89 04 24             	mov    %eax,(%esp)
 89fc11d:	e8 16 55 00 00       	call   8a01638 <_ZNSt6vectorI26PresentResponceScriptEventSaIS0_EE5clearEv>
 89fc122:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc125:	05 70 01 00 00       	add    $0x170,%eax
 89fc12a:	89 04 24             	mov    %eax,(%esp)
 89fc12d:	e8 3a f4 ff ff       	call   89fb56c <_ZN25stFavorableRelationShip_t5clearEv>
 89fc132:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc135:	05 4c 01 00 00       	add    $0x14c,%eax
 89fc13a:	89 04 24             	mov    %eax,(%esp)
 89fc13d:	e8 86 55 94 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 89fc142:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc145:	c6 80 88 06 00 00 00 	movb   $0x0,0x688(%eax)
 89fc14c:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc14f:	05 8c 06 00 00       	add    $0x68c,%eax
 89fc154:	89 04 24             	mov    %eax,(%esp)
 89fc157:	e8 6c 55 94 ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 89fc15c:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc15f:	05 98 06 00 00       	add    $0x698,%eax
 89fc164:	89 04 24             	mov    %eax,(%esp)
 89fc167:	e8 e8 54 00 00       	call   8a01654 <_ZNSt6vectorI13ClickMarkInfoSaIS0_EE5clearEv>
 89fc16c:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc16f:	05 f8 00 00 00       	add    $0xf8,%eax
 89fc174:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fc17b:	08 
 89fc17c:	89 04 24             	mov    %eax,(%esp)
 89fc17f:	e8 9c c5 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fc184:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc187:	05 fc 00 00 00       	add    $0xfc,%eax
 89fc18c:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fc193:	08 
 89fc194:	89 04 24             	mov    %eax,(%esp)
 89fc197:	e8 84 c5 d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fc19c:	8b 45 08             	mov    0x8(%ebp),%eax
 89fc19f:	c6 80 b8 06 00 00 00 	movb   $0x0,0x6b8(%eax)
 89fc1a6:	c9                   	leave
 89fc1a7:	c3                   	ret

```

```c
// NpcScript::clear @ 0x89fbf22

/* NpcScript::clear() */

void __thiscall NpcScript::clear(NpcScript *this)

{
  int local_14;
  int local_10;
  
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  std::string::operator=((string *)(this + 0xc),"");
  *(undefined4 *)(this + 0x10) = 0;
  std::string::operator=((string *)(this + 0x14),"");
  *(undefined4 *)(this + 0x18) = 0;
  std::string::operator=((string *)(this + 0x1c),"");
  *(undefined4 *)(this + 0x20) = 0;
  std::string::operator=((string *)(this + 0x24),"");
  std::string::operator=((string *)(this + 0x28),"");
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    std::string::operator=((string *)(this + (local_14 + 8) * 4 + 0xc),"");
  }
  this[0x34] = (NpcScript)0x1;
  std::
  map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
  ::clear((map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
           *)(this + 0x4c));
  std::string::operator=((string *)(this + 100),"");
  for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
    std::vector<int,std::allocator<int>>::clear
              ((vector<int,std::allocator<int>> *)(this + local_10 * 0xc + 0x68));
  }
  std::string::operator=((string *)(this + 0x100),"");
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x104));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x110));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x11c));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x128));
  std::vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>>::clear
            ((vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>> *)
             (this + 0x134));
  std::vector<PresentResponceScript,std::allocator<PresentResponceScript>>::clear
            ((vector<PresentResponceScript,std::allocator<PresentResponceScript>> *)(this + 0x140));
  std::vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>::clear
            ((vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>
              *)(this + 0x158));
  std::vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>>::clear
            ((vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>> *)
             (this + 0x164));
  stFavorableRelationShip_t::clear((stFavorableRelationShip_t *)(this + 0x170));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x14c));
  this[0x688] = (NpcScript)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68c));
  std::vector<ClickMarkInfo,std::allocator<ClickMarkInfo>>::clear
            ((vector<ClickMarkInfo,std::allocator<ClickMarkInfo>> *)(this + 0x698));
  std::string::operator=((string *)(this + 0xf8),"");
  std::string::operator=((string *)(this + 0xfc),"");
  this[0x6b8] = (NpcScript)0x0;
  return;
}

```

