# STEquipmentAniScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## STEquipmentAniScript

```asm
// === 0898ca36 STEquipmentAniScript::STEquipmentAniScript  [0x0898ca36-0x898ce61] ===
 898ca36:	55                   	push   %ebp
 898ca37:	89 e5                	mov    %esp,%ebp
 898ca39:	57                   	push   %edi
 898ca3a:	56                   	push   %esi
 898ca3b:	53                   	push   %ebx
 898ca3c:	83 ec 2c             	sub    $0x2c,%esp
 898ca3f:	8b 45 08             	mov    0x8(%ebp),%eax
 898ca42:	83 c0 04             	add    $0x4,%eax
 898ca45:	89 04 24             	mov    %eax,(%esp)
 898ca48:	e8 83 9b d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898ca4d:	8b 45 08             	mov    0x8(%ebp),%eax
 898ca50:	83 c0 08             	add    $0x8,%eax
 898ca53:	89 04 24             	mov    %eax,(%esp)
 898ca56:	e8 75 9b d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898ca5b:	8b 45 08             	mov    0x8(%ebp),%eax
 898ca5e:	83 c0 0c             	add    $0xc,%eax
 898ca61:	89 04 24             	mov    %eax,(%esp)
 898ca64:	e8 67 9b d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898ca69:	8b 45 08             	mov    0x8(%ebp),%eax
 898ca6c:	8d 70 10             	lea    0x10(%eax),%esi
 898ca6f:	89 f7                	mov    %esi,%edi
 898ca71:	bb 01 00 00 00       	mov    $0x1,%ebx
 898ca76:	eb 0e                	jmp    898ca86 <_ZN20STEquipmentAniScriptC1Ev+0x50>
 898ca78:	89 3c 24             	mov    %edi,(%esp)
 898ca7b:	e8 50 9b d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898ca80:	83 c7 04             	add    $0x4,%edi
 898ca83:	83 eb 01             	sub    $0x1,%ebx
 898ca86:	83 fb ff             	cmp    $0xffffffff,%ebx
 898ca89:	0f 95 c0             	setne  %al
 898ca8c:	84 c0                	test   %al,%al
 898ca8e:	75 e8                	jne    898ca78 <_ZN20STEquipmentAniScriptC1Ev+0x42>
 898ca90:	eb 31                	jmp    898cac3 <_ZN20STEquipmentAniScriptC1Ev+0x8d>
 898ca92:	89 d7                	mov    %edx,%edi
 898ca94:	89 45 dc             	mov    %eax,-0x24(%ebp)
 898ca97:	85 f6                	test   %esi,%esi
 898ca99:	74 1e                	je     898cab9 <_ZN20STEquipmentAniScriptC1Ev+0x83>
 898ca9b:	b8 01 00 00 00       	mov    $0x1,%eax
 898caa0:	29 d8                	sub    %ebx,%eax
 898caa2:	c1 e0 02             	shl    $0x2,%eax
 898caa5:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 898caa8:	39 f3                	cmp    %esi,%ebx
 898caaa:	74 0d                	je     898cab9 <_ZN20STEquipmentAniScriptC1Ev+0x83>
 898caac:	83 eb 04             	sub    $0x4,%ebx
 898caaf:	89 1c 24             	mov    %ebx,(%esp)
 898cab2:	e8 29 b1 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cab7:	eb ef                	jmp    898caa8 <_ZN20STEquipmentAniScriptC1Ev+0x72>
 898cab9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 898cabc:	89 fa                	mov    %edi,%edx
 898cabe:	e9 48 03 00 00       	jmp    898ce0b <_ZN20STEquipmentAniScriptC1Ev+0x3d5>
 898cac3:	8b 45 08             	mov    0x8(%ebp),%eax
 898cac6:	83 c0 18             	add    $0x18,%eax
 898cac9:	89 04 24             	mov    %eax,(%esp)
 898cacc:	e8 ff 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cad1:	8b 45 08             	mov    0x8(%ebp),%eax
 898cad4:	83 c0 1c             	add    $0x1c,%eax
 898cad7:	89 04 24             	mov    %eax,(%esp)
 898cada:	e8 f1 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cadf:	8b 45 08             	mov    0x8(%ebp),%eax
 898cae2:	83 c0 20             	add    $0x20,%eax
 898cae5:	89 04 24             	mov    %eax,(%esp)
 898cae8:	e8 e3 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898caed:	8b 45 08             	mov    0x8(%ebp),%eax
 898caf0:	83 c0 24             	add    $0x24,%eax
 898caf3:	89 04 24             	mov    %eax,(%esp)
 898caf6:	e8 d5 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cafb:	8b 45 08             	mov    0x8(%ebp),%eax
 898cafe:	83 c0 28             	add    $0x28,%eax
 898cb01:	89 04 24             	mov    %eax,(%esp)
 898cb04:	e8 c7 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cb09:	8b 45 08             	mov    0x8(%ebp),%eax
 898cb0c:	8d 70 2c             	lea    0x2c(%eax),%esi
 898cb0f:	89 f7                	mov    %esi,%edi
 898cb11:	bb 03 00 00 00       	mov    $0x3,%ebx
 898cb16:	eb 0e                	jmp    898cb26 <_ZN20STEquipmentAniScriptC1Ev+0xf0>
 898cb18:	89 3c 24             	mov    %edi,(%esp)
 898cb1b:	e8 b0 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cb20:	83 c7 04             	add    $0x4,%edi
 898cb23:	83 eb 01             	sub    $0x1,%ebx
 898cb26:	83 fb ff             	cmp    $0xffffffff,%ebx
 898cb29:	0f 95 c0             	setne  %al
 898cb2c:	84 c0                	test   %al,%al
 898cb2e:	75 e8                	jne    898cb18 <_ZN20STEquipmentAniScriptC1Ev+0xe2>
 898cb30:	eb 31                	jmp    898cb63 <_ZN20STEquipmentAniScriptC1Ev+0x12d>
 898cb32:	89 d7                	mov    %edx,%edi
 898cb34:	89 45 e0             	mov    %eax,-0x20(%ebp)
 898cb37:	85 f6                	test   %esi,%esi
 898cb39:	74 1e                	je     898cb59 <_ZN20STEquipmentAniScriptC1Ev+0x123>
 898cb3b:	b8 03 00 00 00       	mov    $0x3,%eax
 898cb40:	29 d8                	sub    %ebx,%eax
 898cb42:	c1 e0 02             	shl    $0x2,%eax
 898cb45:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 898cb48:	39 f3                	cmp    %esi,%ebx
 898cb4a:	74 0d                	je     898cb59 <_ZN20STEquipmentAniScriptC1Ev+0x123>
 898cb4c:	83 eb 04             	sub    $0x4,%ebx
 898cb4f:	89 1c 24             	mov    %ebx,(%esp)
 898cb52:	e8 89 b0 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cb57:	eb ef                	jmp    898cb48 <_ZN20STEquipmentAniScriptC1Ev+0x112>
 898cb59:	8b 45 e0             	mov    -0x20(%ebp),%eax
 898cb5c:	89 fa                	mov    %edi,%edx
 898cb5e:	e9 fe 01 00 00       	jmp    898cd61 <_ZN20STEquipmentAniScriptC1Ev+0x32b>
 898cb63:	8b 45 08             	mov    0x8(%ebp),%eax
 898cb66:	8d 70 3c             	lea    0x3c(%eax),%esi
 898cb69:	89 f7                	mov    %esi,%edi
 898cb6b:	bb 03 00 00 00       	mov    $0x3,%ebx
 898cb70:	eb 0e                	jmp    898cb80 <_ZN20STEquipmentAniScriptC1Ev+0x14a>
 898cb72:	89 3c 24             	mov    %edi,(%esp)
 898cb75:	e8 56 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cb7a:	83 c7 04             	add    $0x4,%edi
 898cb7d:	83 eb 01             	sub    $0x1,%ebx
 898cb80:	83 fb ff             	cmp    $0xffffffff,%ebx
 898cb83:	0f 95 c0             	setne  %al
 898cb86:	84 c0                	test   %al,%al
 898cb88:	75 e8                	jne    898cb72 <_ZN20STEquipmentAniScriptC1Ev+0x13c>
 898cb8a:	eb 31                	jmp    898cbbd <_ZN20STEquipmentAniScriptC1Ev+0x187>
 898cb8c:	89 d7                	mov    %edx,%edi
 898cb8e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 898cb91:	85 f6                	test   %esi,%esi
 898cb93:	74 1e                	je     898cbb3 <_ZN20STEquipmentAniScriptC1Ev+0x17d>
 898cb95:	b8 03 00 00 00       	mov    $0x3,%eax
 898cb9a:	29 d8                	sub    %ebx,%eax
 898cb9c:	c1 e0 02             	shl    $0x2,%eax
 898cb9f:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 898cba2:	39 f3                	cmp    %esi,%ebx
 898cba4:	74 0d                	je     898cbb3 <_ZN20STEquipmentAniScriptC1Ev+0x17d>
 898cba6:	83 eb 04             	sub    $0x4,%ebx
 898cba9:	89 1c 24             	mov    %ebx,(%esp)
 898cbac:	e8 2f b0 d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cbb1:	eb ef                	jmp    898cba2 <_ZN20STEquipmentAniScriptC1Ev+0x16c>
 898cbb3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 898cbb6:	89 fa                	mov    %edi,%edx
 898cbb8:	e9 72 01 00 00       	jmp    898cd2f <_ZN20STEquipmentAniScriptC1Ev+0x2f9>
 898cbbd:	8b 45 08             	mov    0x8(%ebp),%eax
 898cbc0:	83 c0 4c             	add    $0x4c,%eax
 898cbc3:	89 04 24             	mov    %eax,(%esp)
 898cbc6:	e8 05 9a d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cbcb:	8b 45 08             	mov    0x8(%ebp),%eax
 898cbce:	83 c0 50             	add    $0x50,%eax
 898cbd1:	89 04 24             	mov    %eax,(%esp)
 898cbd4:	e8 f7 99 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cbd9:	8b 45 08             	mov    0x8(%ebp),%eax
 898cbdc:	83 c0 54             	add    $0x54,%eax
 898cbdf:	89 04 24             	mov    %eax,(%esp)
 898cbe2:	e8 e9 99 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cbe7:	8b 45 08             	mov    0x8(%ebp),%eax
 898cbea:	83 c0 58             	add    $0x58,%eax
 898cbed:	89 04 24             	mov    %eax,(%esp)
 898cbf0:	e8 db 99 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cbf5:	8b 45 08             	mov    0x8(%ebp),%eax
 898cbf8:	83 c0 5c             	add    $0x5c,%eax
 898cbfb:	89 04 24             	mov    %eax,(%esp)
 898cbfe:	e8 cd 99 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cc03:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc06:	83 c0 60             	add    $0x60,%eax
 898cc09:	89 04 24             	mov    %eax,(%esp)
 898cc0c:	e8 bf 99 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898cc11:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc14:	83 c0 64             	add    $0x64,%eax
 898cc17:	89 04 24             	mov    %eax,(%esp)
 898cc1a:	e8 41 03 74 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 898cc1f:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc22:	83 c0 70             	add    $0x70,%eax
 898cc25:	89 04 24             	mov    %eax,(%esp)
 898cc28:	e8 33 03 74 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 898cc2d:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc30:	89 04 24             	mov    %eax,(%esp)
 898cc33:	e8 2a 02 00 00       	call   898ce62 <_ZN20STEquipmentAniScript5clearEv>
 898cc38:	e9 1c 02 00 00       	jmp    898ce59 <_ZN20STEquipmentAniScriptC1Ev+0x423>
 898cc3d:	89 d3                	mov    %edx,%ebx
 898cc3f:	89 c6                	mov    %eax,%esi
 898cc41:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc44:	83 c0 70             	add    $0x70,%eax
 898cc47:	89 04 24             	mov    %eax,(%esp)
 898cc4a:	e8 25 03 74 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 898cc4f:	89 f0                	mov    %esi,%eax
 898cc51:	89 da                	mov    %ebx,%edx
 898cc53:	eb 00                	jmp    898cc55 <_ZN20STEquipmentAniScriptC1Ev+0x21f>
 898cc55:	89 d3                	mov    %edx,%ebx
 898cc57:	89 c6                	mov    %eax,%esi
 898cc59:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc5c:	83 c0 64             	add    $0x64,%eax
 898cc5f:	89 04 24             	mov    %eax,(%esp)
 898cc62:	e8 0d 03 74 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 898cc67:	89 f0                	mov    %esi,%eax
 898cc69:	89 da                	mov    %ebx,%edx
 898cc6b:	eb 00                	jmp    898cc6d <_ZN20STEquipmentAniScriptC1Ev+0x237>
 898cc6d:	89 d3                	mov    %edx,%ebx
 898cc6f:	89 c6                	mov    %eax,%esi
 898cc71:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc74:	83 c0 60             	add    $0x60,%eax
 898cc77:	89 04 24             	mov    %eax,(%esp)
 898cc7a:	e8 61 af d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cc7f:	89 f0                	mov    %esi,%eax
 898cc81:	89 da                	mov    %ebx,%edx
 898cc83:	eb 00                	jmp    898cc85 <_ZN20STEquipmentAniScriptC1Ev+0x24f>
 898cc85:	89 d3                	mov    %edx,%ebx
 898cc87:	89 c6                	mov    %eax,%esi
 898cc89:	8b 45 08             	mov    0x8(%ebp),%eax
 898cc8c:	83 c0 5c             	add    $0x5c,%eax
 898cc8f:	89 04 24             	mov    %eax,(%esp)
 898cc92:	e8 49 af d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cc97:	89 f0                	mov    %esi,%eax
 898cc99:	89 da                	mov    %ebx,%edx
 898cc9b:	eb 00                	jmp    898cc9d <_ZN20STEquipmentAniScriptC1Ev+0x267>
 898cc9d:	89 d3                	mov    %edx,%ebx
 898cc9f:	89 c6                	mov    %eax,%esi
 898cca1:	8b 45 08             	mov    0x8(%ebp),%eax
 898cca4:	83 c0 58             	add    $0x58,%eax
 898cca7:	89 04 24             	mov    %eax,(%esp)
 898ccaa:	e8 31 af d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ccaf:	89 f0                	mov    %esi,%eax
 898ccb1:	89 da                	mov    %ebx,%edx
 898ccb3:	eb 00                	jmp    898ccb5 <_ZN20STEquipmentAniScriptC1Ev+0x27f>
 898ccb5:	89 d3                	mov    %edx,%ebx
 898ccb7:	89 c6                	mov    %eax,%esi
 898ccb9:	8b 45 08             	mov    0x8(%ebp),%eax
 898ccbc:	83 c0 54             	add    $0x54,%eax
 898ccbf:	89 04 24             	mov    %eax,(%esp)
 898ccc2:	e8 19 af d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ccc7:	89 f0                	mov    %esi,%eax
 898ccc9:	89 da                	mov    %ebx,%edx
 898cccb:	eb 00                	jmp    898cccd <_ZN20STEquipmentAniScriptC1Ev+0x297>
 898cccd:	89 d3                	mov    %edx,%ebx
 898cccf:	89 c6                	mov    %eax,%esi
 898ccd1:	8b 45 08             	mov    0x8(%ebp),%eax
 898ccd4:	83 c0 50             	add    $0x50,%eax
 898ccd7:	89 04 24             	mov    %eax,(%esp)
 898ccda:	e8 01 af d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ccdf:	89 f0                	mov    %esi,%eax
 898cce1:	89 da                	mov    %ebx,%edx
 898cce3:	eb 00                	jmp    898cce5 <_ZN20STEquipmentAniScriptC1Ev+0x2af>
 898cce5:	89 d3                	mov    %edx,%ebx
 898cce7:	89 c6                	mov    %eax,%esi
 898cce9:	8b 45 08             	mov    0x8(%ebp),%eax
 898ccec:	83 c0 4c             	add    $0x4c,%eax
 898ccef:	89 04 24             	mov    %eax,(%esp)
 898ccf2:	e8 e9 ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ccf7:	89 f0                	mov    %esi,%eax
 898ccf9:	89 da                	mov    %ebx,%edx
 898ccfb:	eb 00                	jmp    898ccfd <_ZN20STEquipmentAniScriptC1Ev+0x2c7>
 898ccfd:	89 d6                	mov    %edx,%esi
 898ccff:	89 c7                	mov    %eax,%edi
 898cd01:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd04:	83 c0 3c             	add    $0x3c,%eax
 898cd07:	85 c0                	test   %eax,%eax
 898cd09:	74 20                	je     898cd2b <_ZN20STEquipmentAniScriptC1Ev+0x2f5>
 898cd0b:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd0e:	83 c0 3c             	add    $0x3c,%eax
 898cd11:	8d 58 10             	lea    0x10(%eax),%ebx
 898cd14:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd17:	83 c0 3c             	add    $0x3c,%eax
 898cd1a:	39 c3                	cmp    %eax,%ebx
 898cd1c:	74 0d                	je     898cd2b <_ZN20STEquipmentAniScriptC1Ev+0x2f5>
 898cd1e:	83 eb 04             	sub    $0x4,%ebx
 898cd21:	89 1c 24             	mov    %ebx,(%esp)
 898cd24:	e8 b7 ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cd29:	eb e9                	jmp    898cd14 <_ZN20STEquipmentAniScriptC1Ev+0x2de>
 898cd2b:	89 f8                	mov    %edi,%eax
 898cd2d:	89 f2                	mov    %esi,%edx
 898cd2f:	89 d6                	mov    %edx,%esi
 898cd31:	89 c7                	mov    %eax,%edi
 898cd33:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd36:	83 c0 2c             	add    $0x2c,%eax
 898cd39:	85 c0                	test   %eax,%eax
 898cd3b:	74 20                	je     898cd5d <_ZN20STEquipmentAniScriptC1Ev+0x327>
 898cd3d:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd40:	83 c0 2c             	add    $0x2c,%eax
 898cd43:	8d 58 10             	lea    0x10(%eax),%ebx
 898cd46:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd49:	83 c0 2c             	add    $0x2c,%eax
 898cd4c:	39 c3                	cmp    %eax,%ebx
 898cd4e:	74 0d                	je     898cd5d <_ZN20STEquipmentAniScriptC1Ev+0x327>
 898cd50:	83 eb 04             	sub    $0x4,%ebx
 898cd53:	89 1c 24             	mov    %ebx,(%esp)
 898cd56:	e8 85 ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cd5b:	eb e9                	jmp    898cd46 <_ZN20STEquipmentAniScriptC1Ev+0x310>
 898cd5d:	89 f8                	mov    %edi,%eax
 898cd5f:	89 f2                	mov    %esi,%edx
 898cd61:	89 d3                	mov    %edx,%ebx
 898cd63:	89 c6                	mov    %eax,%esi
 898cd65:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd68:	83 c0 28             	add    $0x28,%eax
 898cd6b:	89 04 24             	mov    %eax,(%esp)
 898cd6e:	e8 6d ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cd73:	89 f0                	mov    %esi,%eax
 898cd75:	89 da                	mov    %ebx,%edx
 898cd77:	eb 00                	jmp    898cd79 <_ZN20STEquipmentAniScriptC1Ev+0x343>
 898cd79:	89 d3                	mov    %edx,%ebx
 898cd7b:	89 c6                	mov    %eax,%esi
 898cd7d:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd80:	83 c0 24             	add    $0x24,%eax
 898cd83:	89 04 24             	mov    %eax,(%esp)
 898cd86:	e8 55 ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cd8b:	89 f0                	mov    %esi,%eax
 898cd8d:	89 da                	mov    %ebx,%edx
 898cd8f:	eb 00                	jmp    898cd91 <_ZN20STEquipmentAniScriptC1Ev+0x35b>
 898cd91:	89 d3                	mov    %edx,%ebx
 898cd93:	89 c6                	mov    %eax,%esi
 898cd95:	8b 45 08             	mov    0x8(%ebp),%eax
 898cd98:	83 c0 20             	add    $0x20,%eax
 898cd9b:	89 04 24             	mov    %eax,(%esp)
 898cd9e:	e8 3d ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cda3:	89 f0                	mov    %esi,%eax
 898cda5:	89 da                	mov    %ebx,%edx
 898cda7:	eb 00                	jmp    898cda9 <_ZN20STEquipmentAniScriptC1Ev+0x373>
 898cda9:	89 d3                	mov    %edx,%ebx
 898cdab:	89 c6                	mov    %eax,%esi
 898cdad:	8b 45 08             	mov    0x8(%ebp),%eax
 898cdb0:	83 c0 1c             	add    $0x1c,%eax
 898cdb3:	89 04 24             	mov    %eax,(%esp)
 898cdb6:	e8 25 ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cdbb:	89 f0                	mov    %esi,%eax
 898cdbd:	89 da                	mov    %ebx,%edx
 898cdbf:	eb 00                	jmp    898cdc1 <_ZN20STEquipmentAniScriptC1Ev+0x38b>
 898cdc1:	89 d3                	mov    %edx,%ebx
 898cdc3:	89 c6                	mov    %eax,%esi
 898cdc5:	8b 45 08             	mov    0x8(%ebp),%eax
 898cdc8:	83 c0 18             	add    $0x18,%eax
 898cdcb:	89 04 24             	mov    %eax,(%esp)
 898cdce:	e8 0d ae d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898cdd3:	89 f0                	mov    %esi,%eax
 898cdd5:	89 da                	mov    %ebx,%edx
 898cdd7:	eb 00                	jmp    898cdd9 <_ZN20STEquipmentAniScriptC1Ev+0x3a3>
 898cdd9:	89 d6                	mov    %edx,%esi
 898cddb:	89 c7                	mov    %eax,%edi
 898cddd:	8b 45 08             	mov    0x8(%ebp),%eax
 898cde0:	83 c0 10             	add    $0x10,%eax
 898cde3:	85 c0                	test   %eax,%eax
 898cde5:	74 20                	je     898ce07 <_ZN20STEquipmentAniScriptC1Ev+0x3d1>
 898cde7:	8b 45 08             	mov    0x8(%ebp),%eax
 898cdea:	83 c0 10             	add    $0x10,%eax
 898cded:	8d 58 08             	lea    0x8(%eax),%ebx
 898cdf0:	8b 45 08             	mov    0x8(%ebp),%eax
 898cdf3:	83 c0 10             	add    $0x10,%eax
 898cdf6:	39 c3                	cmp    %eax,%ebx
 898cdf8:	74 0d                	je     898ce07 <_ZN20STEquipmentAniScriptC1Ev+0x3d1>
 898cdfa:	83 eb 04             	sub    $0x4,%ebx
 898cdfd:	89 1c 24             	mov    %ebx,(%esp)
 898ce00:	e8 db ad d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ce05:	eb e9                	jmp    898cdf0 <_ZN20STEquipmentAniScriptC1Ev+0x3ba>
 898ce07:	89 f8                	mov    %edi,%eax
 898ce09:	89 f2                	mov    %esi,%edx
 898ce0b:	89 d3                	mov    %edx,%ebx
 898ce0d:	89 c6                	mov    %eax,%esi
 898ce0f:	8b 45 08             	mov    0x8(%ebp),%eax
 898ce12:	83 c0 0c             	add    $0xc,%eax
 898ce15:	89 04 24             	mov    %eax,(%esp)
 898ce18:	e8 c3 ad d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ce1d:	89 f0                	mov    %esi,%eax
 898ce1f:	89 da                	mov    %ebx,%edx
 898ce21:	eb 00                	jmp    898ce23 <_ZN20STEquipmentAniScriptC1Ev+0x3ed>
 898ce23:	89 d3                	mov    %edx,%ebx
 898ce25:	89 c6                	mov    %eax,%esi
 898ce27:	8b 45 08             	mov    0x8(%ebp),%eax
 898ce2a:	83 c0 08             	add    $0x8,%eax
 898ce2d:	89 04 24             	mov    %eax,(%esp)
 898ce30:	e8 ab ad d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ce35:	89 f0                	mov    %esi,%eax
 898ce37:	89 da                	mov    %ebx,%edx
 898ce39:	eb 00                	jmp    898ce3b <_ZN20STEquipmentAniScriptC1Ev+0x405>
 898ce3b:	89 d3                	mov    %edx,%ebx
 898ce3d:	89 c6                	mov    %eax,%esi
 898ce3f:	8b 45 08             	mov    0x8(%ebp),%eax
 898ce42:	83 c0 04             	add    $0x4,%eax
 898ce45:	89 04 24             	mov    %eax,(%esp)
 898ce48:	e8 93 ad d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898ce4d:	89 f0                	mov    %esi,%eax
 898ce4f:	89 da                	mov    %ebx,%edx
 898ce51:	89 04 24             	mov    %eax,(%esp)
 898ce54:	e8 f7 68 15 00       	call   8ae3750 <_Unwind_Resume>
 898ce59:	83 c4 2c             	add    $0x2c,%esp
 898ce5c:	5b                   	pop    %ebx
 898ce5d:	5e                   	pop    %esi
 898ce5e:	5f                   	pop    %edi
 898ce5f:	5d                   	pop    %ebp
 898ce60:	c3                   	ret
 898ce61:	90                   	nop

```

```c
// STEquipmentAniScript::STEquipmentAniScript @ 0x898ca36

/* STEquipmentAniScript::STEquipmentAniScript() */

void __thiscall STEquipmentAniScript::STEquipmentAniScript(STEquipmentAniScript *this)

{
  int iVar1;
  string *psVar2;
  
  std::string::string((string *)(this + 4));
                    /* try { // try from 0898ca56 to 0898ca5a has its CatchHandler @ 0898ce3b */
  std::string::string((string *)(this + 8));
                    /* try { // try from 0898ca64 to 0898ca68 has its CatchHandler @ 0898ce23 */
  std::string::string((string *)(this + 0xc));
  psVar2 = (string *)(this + 0x10);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0898ca7b to 0898ca7f has its CatchHandler @ 0898ca92 */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
                    /* try { // try from 0898cacc to 0898cad0 has its CatchHandler @ 0898cdd9 */
  std::string::string((string *)(this + 0x18));
                    /* try { // try from 0898cada to 0898cade has its CatchHandler @ 0898cdc1 */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0898cae8 to 0898caec has its CatchHandler @ 0898cda9 */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0898caf6 to 0898cafa has its CatchHandler @ 0898cd91 */
  std::string::string((string *)(this + 0x24));
                    /* try { // try from 0898cb04 to 0898cb08 has its CatchHandler @ 0898cd79 */
  std::string::string((string *)(this + 0x28));
  psVar2 = (string *)(this + 0x2c);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0898cb1b to 0898cb1f has its CatchHandler @ 0898cb32 */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
  psVar2 = (string *)(this + 0x3c);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0898cb75 to 0898cb79 has its CatchHandler @ 0898cb8c */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
                    /* try { // try from 0898cbc6 to 0898cbca has its CatchHandler @ 0898ccfd */
  std::string::string((string *)(this + 0x4c));
                    /* try { // try from 0898cbd4 to 0898cbd8 has its CatchHandler @ 0898cce5 */
  std::string::string((string *)(this + 0x50));
                    /* try { // try from 0898cbe2 to 0898cbe6 has its CatchHandler @ 0898cccd */
  std::string::string((string *)(this + 0x54));
                    /* try { // try from 0898cbf0 to 0898cbf4 has its CatchHandler @ 0898ccb5 */
  std::string::string((string *)(this + 0x58));
                    /* try { // try from 0898cbfe to 0898cc02 has its CatchHandler @ 0898cc9d */
  std::string::string((string *)(this + 0x5c));
                    /* try { // try from 0898cc0c to 0898cc10 has its CatchHandler @ 0898cc85 */
  std::string::string((string *)(this + 0x60));
                    /* try { // try from 0898cc1a to 0898cc1e has its CatchHandler @ 0898cc6d */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 100));
                    /* try { // try from 0898cc28 to 0898cc2c has its CatchHandler @ 0898cc55 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
                    /* try { // try from 0898cc33 to 0898cc37 has its CatchHandler @ 0898cc3d */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 0898ce62 STEquipmentAniScript::clear  [0x0898ce62-0x898d03d] ===
 898ce62:	55                   	push   %ebp
 898ce63:	89 e5                	mov    %esp,%ebp
 898ce65:	83 ec 28             	sub    $0x28,%esp
 898ce68:	8b 45 08             	mov    0x8(%ebp),%eax
 898ce6b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 898ce71:	8b 45 08             	mov    0x8(%ebp),%eax
 898ce74:	83 c0 04             	add    $0x4,%eax
 898ce77:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898ce7e:	08 
 898ce7f:	89 04 24             	mov    %eax,(%esp)
 898ce82:	e8 99 b8 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898ce87:	8b 45 08             	mov    0x8(%ebp),%eax
 898ce8a:	83 c0 08             	add    $0x8,%eax
 898ce8d:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898ce94:	08 
 898ce95:	89 04 24             	mov    %eax,(%esp)
 898ce98:	e8 83 b8 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898ce9d:	8b 45 08             	mov    0x8(%ebp),%eax
 898cea0:	83 c0 0c             	add    $0xc,%eax
 898cea3:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898ceaa:	08 
 898ceab:	89 04 24             	mov    %eax,(%esp)
 898ceae:	e8 6d b8 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898ceb3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 898ceba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 898cec1:	eb 20                	jmp    898cee3 <_ZN20STEquipmentAniScript5clearEv+0x81>
 898cec3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 898cec6:	83 c0 04             	add    $0x4,%eax
 898cec9:	c1 e0 02             	shl    $0x2,%eax
 898cecc:	03 45 08             	add    0x8(%ebp),%eax
 898cecf:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898ced6:	08 
 898ced7:	89 04 24             	mov    %eax,(%esp)
 898ceda:	e8 41 b8 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cedf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 898cee3:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 898cee7:	0f 9e c0             	setle  %al
 898ceea:	84 c0                	test   %al,%al
 898ceec:	75 d5                	jne    898cec3 <_ZN20STEquipmentAniScript5clearEv+0x61>
 898ceee:	8b 45 08             	mov    0x8(%ebp),%eax
 898cef1:	83 c0 18             	add    $0x18,%eax
 898cef4:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cefb:	08 
 898cefc:	89 04 24             	mov    %eax,(%esp)
 898ceff:	e8 1c b8 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cf04:	8b 45 08             	mov    0x8(%ebp),%eax
 898cf07:	83 c0 1c             	add    $0x1c,%eax
 898cf0a:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cf11:	08 
 898cf12:	89 04 24             	mov    %eax,(%esp)
 898cf15:	e8 06 b8 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cf1a:	8b 45 08             	mov    0x8(%ebp),%eax
 898cf1d:	83 c0 20             	add    $0x20,%eax
 898cf20:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cf27:	08 
 898cf28:	89 04 24             	mov    %eax,(%esp)
 898cf2b:	e8 f0 b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cf30:	8b 45 08             	mov    0x8(%ebp),%eax
 898cf33:	83 c0 24             	add    $0x24,%eax
 898cf36:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cf3d:	08 
 898cf3e:	89 04 24             	mov    %eax,(%esp)
 898cf41:	e8 da b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cf46:	8b 45 08             	mov    0x8(%ebp),%eax
 898cf49:	83 c0 28             	add    $0x28,%eax
 898cf4c:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cf53:	08 
 898cf54:	89 04 24             	mov    %eax,(%esp)
 898cf57:	e8 c4 b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cf5c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 898cf63:	eb 42                	jmp    898cfa7 <_ZN20STEquipmentAniScript5clearEv+0x145>
 898cf65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 898cf68:	83 c0 08             	add    $0x8,%eax
 898cf6b:	c1 e0 02             	shl    $0x2,%eax
 898cf6e:	03 45 08             	add    0x8(%ebp),%eax
 898cf71:	83 c0 0c             	add    $0xc,%eax
 898cf74:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cf7b:	08 
 898cf7c:	89 04 24             	mov    %eax,(%esp)
 898cf7f:	e8 9c b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cf84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 898cf87:	83 c0 0c             	add    $0xc,%eax
 898cf8a:	c1 e0 02             	shl    $0x2,%eax
 898cf8d:	03 45 08             	add    0x8(%ebp),%eax
 898cf90:	83 c0 0c             	add    $0xc,%eax
 898cf93:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cf9a:	08 
 898cf9b:	89 04 24             	mov    %eax,(%esp)
 898cf9e:	e8 7d b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cfa3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 898cfa7:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 898cfab:	0f 9e c0             	setle  %al
 898cfae:	84 c0                	test   %al,%al
 898cfb0:	75 b3                	jne    898cf65 <_ZN20STEquipmentAniScript5clearEv+0x103>
 898cfb2:	8b 45 08             	mov    0x8(%ebp),%eax
 898cfb5:	83 c0 4c             	add    $0x4c,%eax
 898cfb8:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cfbf:	08 
 898cfc0:	89 04 24             	mov    %eax,(%esp)
 898cfc3:	e8 58 b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cfc8:	8b 45 08             	mov    0x8(%ebp),%eax
 898cfcb:	83 c0 50             	add    $0x50,%eax
 898cfce:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cfd5:	08 
 898cfd6:	89 04 24             	mov    %eax,(%esp)
 898cfd9:	e8 42 b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cfde:	8b 45 08             	mov    0x8(%ebp),%eax
 898cfe1:	83 c0 54             	add    $0x54,%eax
 898cfe4:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898cfeb:	08 
 898cfec:	89 04 24             	mov    %eax,(%esp)
 898cfef:	e8 2c b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898cff4:	8b 45 08             	mov    0x8(%ebp),%eax
 898cff7:	83 c0 58             	add    $0x58,%eax
 898cffa:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d001:	08 
 898d002:	89 04 24             	mov    %eax,(%esp)
 898d005:	e8 16 b7 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d00a:	8b 45 08             	mov    0x8(%ebp),%eax
 898d00d:	83 c0 64             	add    $0x64,%eax
 898d010:	89 04 24             	mov    %eax,(%esp)
 898d013:	e8 b0 46 9b ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 898d018:	8b 45 08             	mov    0x8(%ebp),%eax
 898d01b:	83 c0 70             	add    $0x70,%eax
 898d01e:	89 04 24             	mov    %eax,(%esp)
 898d021:	e8 a2 46 9b ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 898d026:	8b 45 08             	mov    0x8(%ebp),%eax
 898d029:	83 c0 60             	add    $0x60,%eax
 898d02c:	c7 44 24 04 80 5e e1 	movl   $0x8e15e80,0x4(%esp)
 898d033:	08 
 898d034:	89 04 24             	mov    %eax,(%esp)
 898d037:	e8 e4 b6 d7 ff       	call   8708720 <_ZNSsaSEPKc>
 898d03c:	c9                   	leave
 898d03d:	c3                   	ret

```

```c
// STEquipmentAniScript::clear @ 0x898ce62

/* STEquipmentAniScript::clear() */

void __thiscall STEquipmentAniScript::clear(STEquipmentAniScript *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  std::string::operator=((string *)(this + 0xc),"");
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    std::string::operator=((string *)(this + (local_10 + 4) * 4),"");
  }
  std::string::operator=((string *)(this + 0x18),"");
  std::string::operator=((string *)(this + 0x1c),"");
  std::string::operator=((string *)(this + 0x20),"");
  std::string::operator=((string *)(this + 0x24),"");
  std::string::operator=((string *)(this + 0x28),"");
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    std::string::operator=((string *)(this + (local_10 + 8) * 4 + 0xc),"");
    std::string::operator=((string *)(this + (local_10 + 0xc) * 4 + 0xc),"");
  }
  std::string::operator=((string *)(this + 0x4c),"");
  std::string::operator=((string *)(this + 0x50),"");
  std::string::operator=((string *)(this + 0x54),"");
  std::string::operator=((string *)(this + 0x58),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 100));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::string::operator=((string *)(this + 0x60),"");
  return;
}

```

