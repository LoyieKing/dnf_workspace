# Dispatcher_SelectItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822997a Dispatcher_SelectItem::dispatch_sig  [0x0822997a-0x822a0a3] ===
 822997a:	55                   	push   %ebp
 822997b:	89 e5                	mov    %esp,%ebp
 822997d:	57                   	push   %edi
 822997e:	56                   	push   %esi
 822997f:	53                   	push   %ebx
 8229980:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 8229986:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229989:	89 04 24             	mov    %eax,(%esp)
 822998c:	e8 fb 09 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8229991:	83 f8 03             	cmp    $0x3,%eax
 8229994:	75 0f                	jne    82299a5 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8229996:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229999:	89 04 24             	mov    %eax,(%esp)
 822999c:	e8 91 6a ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82299a1:	85 c0                	test   %eax,%eax
 82299a3:	75 07                	jne    82299ac <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x32>
 82299a5:	b8 01 00 00 00       	mov    $0x1,%eax
 82299aa:	eb 05                	jmp    82299b1 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x37>
 82299ac:	b8 00 00 00 00       	mov    $0x0,%eax
 82299b1:	84 c0                	test   %al,%al
 82299b3:	74 0a                	je     82299bf <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x45>
 82299b5:	bb 00 00 00 00       	mov    $0x0,%ebx
 82299ba:	e9 d8 06 00 00       	jmp    822a097 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x71d>
 82299bf:	e8 e3 09 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 82299c4:	89 04 24             	mov    %eax,(%esp)
 82299c7:	e8 54 d1 ee ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 82299cc:	83 f8 0f             	cmp    $0xf,%eax
 82299cf:	74 19                	je     82299ea <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x70>
 82299d1:	e8 d1 09 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 82299d6:	89 04 24             	mov    %eax,(%esp)
 82299d9:	e8 42 d1 ee ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 82299de:	83 f8 10             	cmp    $0x10,%eax
 82299e1:	74 07                	je     82299ea <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x70>
 82299e3:	b8 01 00 00 00       	mov    $0x1,%eax
 82299e8:	eb 05                	jmp    82299ef <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x75>
 82299ea:	b8 00 00 00 00       	mov    $0x0,%eax
 82299ef:	84 c0                	test   %al,%al
 82299f1:	74 0a                	je     82299fd <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x83>
 82299f3:	bb 00 00 00 00       	mov    $0x0,%ebx
 82299f8:	e9 9a 06 00 00       	jmp    822a097 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x71d>
 82299fd:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8229a04:	00 
 8229a05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229a08:	89 04 24             	mov    %eax,(%esp)
 8229a0b:	e8 74 3b eb ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8229a10:	89 04 24             	mov    %eax,(%esp)
 8229a13:	e8 4c b5 00 00       	call   8234f64 <_ZNK8fair_pvp13CFairPvPScore11GetGiveItemEv>
 8229a18:	89 c6                	mov    %eax,%esi
 8229a1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229a1d:	89 04 24             	mov    %eax,(%esp)
 8229a20:	e8 25 54 f7 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8229a25:	89 c3                	mov    %eax,%ebx
 8229a27:	e8 6f 27 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229a2c:	83 c0 68             	add    $0x68,%eax
 8229a2f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8229a33:	89 04 24             	mov    %eax,(%esp)
 8229a36:	e8 c1 13 00 00       	call   822adfc <_ZN21ServerParameterScript17get_pvp_item_giveEi>
 8229a3b:	39 c6                	cmp    %eax,%esi
 8229a3d:	0f 9f c0             	setg   %al
 8229a40:	84 c0                	test   %al,%al
 8229a42:	74 0a                	je     8229a4e <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0xd4>
 8229a44:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229a49:	e9 49 06 00 00       	jmp    822a097 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x71d>
 8229a4e:	c6 45 b7 00          	movb   $0x0,-0x49(%ebp)
 8229a52:	c6 45 b6 00          	movb   $0x0,-0x4a(%ebp)
 8229a56:	8d 45 b7             	lea    -0x49(%ebp),%eax
 8229a59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229a5d:	8b 45 10             	mov    0x10(%ebp),%eax
 8229a60:	89 04 24             	mov    %eax,(%esp)
 8229a63:	e8 08 35 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8229a68:	83 f0 01             	xor    $0x1,%eax
 8229a6b:	84 c0                	test   %al,%al
 8229a6d:	74 2b                	je     8229a9a <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x120>
 8229a6f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8229a76:	00 
 8229a77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229a7e:	00 
 8229a7f:	c7 44 24 04 00 bf bc 	movl   $0x8bcbf00,0x4(%esp)
 8229a86:	08 
 8229a87:	c7 04 24 85 e7 00 00 	movl   $0xe785,(%esp)
 8229a8e:	e8 44 6e 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8229a93:	89 c3                	mov    %eax,%ebx
 8229a95:	e9 fd 05 00 00       	jmp    822a097 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x71d>
 8229a9a:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8229aa1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8229aa4:	89 04 24             	mov    %eax,(%esp)
 8229aa7:	e8 38 d6 00 00       	call   82370e4 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEC1Ev>
 8229aac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229aaf:	89 04 24             	mov    %eax,(%esp)
 8229ab2:	e8 93 53 f7 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8229ab7:	89 c3                	mov    %eax,%ebx
 8229ab9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229abc:	89 04 24             	mov    %eax,(%esp)
 8229abf:	e8 5c 44 ed ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8229ac4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8229ac8:	89 04 24             	mov    %eax,(%esp)
 8229acb:	e8 dd aa 66 00       	call   88945ad <_Z30makeFairPVPEquipmentPackageKeyii>
 8229ad0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8229ad3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8229ada:	e9 93 00 00 00       	jmp    8229b72 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x1f8>
 8229adf:	e8 b7 26 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229ae4:	8d 88 f8 86 00 00    	lea    0x86f8(%eax),%ecx
 8229aea:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8229aed:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8229af0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8229af4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8229af8:	89 04 24             	mov    %eax,(%esp)
 8229afb:	e8 f2 d5 00 00       	call   82370f2 <_ZNSt3mapIiSt6vectorIS0_I22STStackablePackageDataSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8229b00:	83 ec 04             	sub    $0x4,%esp
 8229b03:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8229b06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229b0a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8229b0d:	89 04 24             	mov    %eax,(%esp)
 8229b10:	e8 09 d6 00 00       	call   823711e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEC1ERKSt17_Rb_tree_iteratorIS8_E>
 8229b15:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8229b18:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8229b1b:	e8 7b 26 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229b20:	8d 90 f8 86 00 00    	lea    0x86f8(%eax),%edx
 8229b26:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8229b29:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229b2d:	89 04 24             	mov    %eax,(%esp)
 8229b30:	e8 f9 d5 00 00       	call   823712e <_ZNSt3mapIiSt6vectorIS0_I22STStackablePackageDataSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8229b35:	83 ec 04             	sub    $0x4,%esp
 8229b38:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8229b3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229b3f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8229b42:	89 04 24             	mov    %eax,(%esp)
 8229b45:	e8 d4 d5 00 00       	call   823711e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEC1ERKSt17_Rb_tree_iteratorIS8_E>
 8229b4a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8229b4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229b51:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8229b54:	89 04 24             	mov    %eax,(%esp)
 8229b57:	e8 58 e5 00 00       	call   82380b4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEneERKS9_>
 8229b5c:	84 c0                	test   %al,%al
 8229b5e:	75 2d                	jne    8229b8d <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x213>
 8229b60:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8229b63:	89 04 24             	mov    %eax,(%esp)
 8229b66:	e8 5b aa 66 00       	call   88945c6 <_Z40decreaseRankOfFairPVPEquipmentPackageKeyi>
 8229b6b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8229b6e:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8229b72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229b75:	89 04 24             	mov    %eax,(%esp)
 8229b78:	e8 cd 52 f7 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8229b7d:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8229b80:	0f 9d c0             	setge  %al
 8229b83:	84 c0                	test   %al,%al
 8229b85:	0f 85 54 ff ff ff    	jne    8229adf <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x165>
 8229b8b:	eb 01                	jmp    8229b8e <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x214>
 8229b8d:	90                   	nop
 8229b8e:	e8 08 26 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229b93:	8d 90 f8 86 00 00    	lea    0x86f8(%eax),%edx
 8229b99:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8229b9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229ba0:	89 04 24             	mov    %eax,(%esp)
 8229ba3:	e8 86 d5 00 00       	call   823712e <_ZNSt3mapIiSt6vectorIS0_I22STStackablePackageDataSaIS1_EESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8229ba8:	83 ec 04             	sub    $0x4,%esp
 8229bab:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8229bae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229bb2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8229bb5:	89 04 24             	mov    %eax,(%esp)
 8229bb8:	e8 61 d5 00 00       	call   823711e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEC1ERKSt17_Rb_tree_iteratorIS8_E>
 8229bbd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8229bc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229bc4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8229bc7:	89 04 24             	mov    %eax,(%esp)
 8229bca:	e8 85 d5 00 00       	call   8237154 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEeqERKS9_>
 8229bcf:	84 c0                	test   %al,%al
 8229bd1:	74 0a                	je     8229bdd <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x263>
 8229bd3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229bd8:	e9 ba 04 00 00       	jmp    822a097 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x71d>
 8229bdd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8229be0:	89 04 24             	mov    %eax,(%esp)
 8229be3:	e8 80 d5 00 00       	call   8237168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEptEv>
 8229be8:	83 c0 04             	add    $0x4,%eax
 8229beb:	89 04 24             	mov    %eax,(%esp)
 8229bee:	e8 d5 e4 00 00       	call   82380c8 <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EE4sizeEv>
 8229bf3:	0f b6 55 b7          	movzbl -0x49(%ebp),%edx
 8229bf7:	0f b6 d2             	movzbl %dl,%edx
 8229bfa:	39 d0                	cmp    %edx,%eax
 8229bfc:	0f 95 c0             	setne  %al
 8229bff:	84 c0                	test   %al,%al
 8229c01:	74 0a                	je     8229c0d <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x293>
 8229c03:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229c08:	e9 8a 04 00 00       	jmp    822a097 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x71d>
 8229c0d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8229c10:	89 04 24             	mov    %eax,(%esp)
 8229c13:	e8 7a 10 f2 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8229c18:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8229c1b:	89 04 24             	mov    %eax,(%esp)
 8229c1e:	e8 45 d5 00 00       	call   8237168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEptEv>
 8229c23:	8d 50 04             	lea    0x4(%eax),%edx
 8229c26:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8229c29:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229c2d:	89 04 24             	mov    %eax,(%esp)
 8229c30:	e8 41 d5 00 00       	call   8237176 <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EE5beginEv>
 8229c35:	83 ec 04             	sub    $0x4,%esp
 8229c38:	e9 7b 01 00 00       	jmp    8229db8 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x43e>
 8229c3d:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 8229c40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229c44:	8b 45 10             	mov    0x10(%ebp),%eax
 8229c47:	89 04 24             	mov    %eax,(%esp)
 8229c4a:	e8 21 33 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8229c4f:	83 f0 01             	xor    $0x1,%eax
 8229c52:	84 c0                	test   %al,%al
 8229c54:	74 2b                	je     8229c81 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x307>
 8229c56:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8229c5d:	00 
 8229c5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229c65:	00 
 8229c66:	c7 44 24 04 00 bf bc 	movl   $0x8bcbf00,0x4(%esp)
 8229c6d:	08 
 8229c6e:	c7 04 24 a1 e7 00 00 	movl   $0xe7a1,(%esp)
 8229c75:	e8 5d 6c 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8229c7a:	89 c3                	mov    %eax,%ebx
 8229c7c:	e9 0b 04 00 00       	jmp    822a08c <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x712>
 8229c81:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8229c84:	89 04 24             	mov    %eax,(%esp)
 8229c87:	e8 84 d5 00 00       	call   8237210 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEptEv>
 8229c8c:	89 04 24             	mov    %eax,(%esp)
 8229c8f:	e8 86 d5 00 00       	call   823721a <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE4sizeEv>
 8229c94:	0f b6 55 b6          	movzbl -0x4a(%ebp),%edx
 8229c98:	0f b6 d2             	movzbl %dl,%edx
 8229c9b:	39 d0                	cmp    %edx,%eax
 8229c9d:	0f 96 c0             	setbe  %al
 8229ca0:	84 c0                	test   %al,%al
 8229ca2:	74 2b                	je     8229ccf <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x355>
 8229ca4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8229cab:	00 
 8229cac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229cb3:	00 
 8229cb4:	c7 44 24 04 00 bf bc 	movl   $0x8bcbf00,0x4(%esp)
 8229cbb:	08 
 8229cbc:	c7 04 24 a4 e7 00 00 	movl   $0xe7a4,(%esp)
 8229cc3:	e8 0f 6c 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8229cc8:	89 c3                	mov    %eax,%ebx
 8229cca:	e9 bd 03 00 00       	jmp    822a08c <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x712>
 8229ccf:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8229cd5:	89 04 24             	mov    %eax,(%esp)
 8229cd8:	e8 77 1b ea ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8229cdd:	0f b6 45 b6          	movzbl -0x4a(%ebp),%eax
 8229ce1:	0f b6 d8             	movzbl %al,%ebx
 8229ce4:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8229ce7:	89 04 24             	mov    %eax,(%esp)
 8229cea:	e8 21 d5 00 00       	call   8237210 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEptEv>
 8229cef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8229cf3:	89 04 24             	mov    %eax,(%esp)
 8229cf6:	e8 3b d5 00 00       	call   8237236 <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE2atEj>
 8229cfb:	8b 00                	mov    (%eax),%eax
 8229cfd:	89 85 85 fe ff ff    	mov    %eax,-0x17b(%ebp)
 8229d03:	8b 85 85 fe ff ff    	mov    -0x17b(%ebp),%eax
 8229d09:	89 c3                	mov    %eax,%ebx
 8229d0b:	e8 8b 24 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8229d10:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8229d14:	89 04 24             	mov    %eax,(%esp)
 8229d17:	e8 16 5d 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8229d1c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8229d1f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8229d23:	75 25                	jne    8229d4a <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x3d0>
 8229d25:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8229d2c:	00 
 8229d2d:	c7 44 24 04 96 01 00 	movl   $0x196,0x4(%esp)
 8229d34:	00 
 8229d35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229d38:	89 04 24             	mov    %eax,(%esp)
 8229d3b:	e8 02 22 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8229d40:	bb 00 00 00 00       	mov    $0x0,%ebx
 8229d45:	e9 42 03 00 00       	jmp    822a08c <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x712>
 8229d4a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8229d4d:	8b 00                	mov    (%eax),%eax
 8229d4f:	83 c0 08             	add    $0x8,%eax
 8229d52:	8b 10                	mov    (%eax),%edx
 8229d54:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8229d5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229d5e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8229d61:	89 04 24             	mov    %eax,(%esp)
 8229d64:	ff d2                	call   *%edx
 8229d66:	0f b6 85 84 fe ff ff 	movzbl -0x17c(%ebp),%eax
 8229d6d:	3c 01                	cmp    $0x1,%al
 8229d6f:	74 27                	je     8229d98 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x41e>
 8229d71:	0f b6 45 b6          	movzbl -0x4a(%ebp),%eax
 8229d75:	0f b6 d8             	movzbl %al,%ebx
 8229d78:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8229d7b:	89 04 24             	mov    %eax,(%esp)
 8229d7e:	e8 8d d4 00 00       	call   8237210 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEptEv>
 8229d83:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8229d87:	89 04 24             	mov    %eax,(%esp)
 8229d8a:	e8 a7 d4 00 00       	call   8237236 <_ZNKSt6vectorI22STStackablePackageDataSaIS0_EE2atEj>
 8229d8f:	8b 40 04             	mov    0x4(%eax),%eax
 8229d92:	89 85 8a fe ff ff    	mov    %eax,-0x176(%ebp)
 8229d98:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8229d9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229da2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8229da5:	89 04 24             	mov    %eax,(%esp)
 8229da8:	e8 b5 d4 00 00       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8229dad:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8229db0:	89 04 24             	mov    %eax,(%esp)
 8229db3:	e8 42 d4 00 00       	call   82371fa <_ZN9__gnu_cxx17__normal_iteratorIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEppEv>
 8229db8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8229dbb:	89 04 24             	mov    %eax,(%esp)
 8229dbe:	e8 a5 d3 00 00       	call   8237168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIS2_I22STStackablePackageDataSaIS3_EESaIS5_EEEEptEv>
 8229dc3:	8d 50 04             	lea    0x4(%eax),%edx
 8229dc6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8229dc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229dcd:	89 04 24             	mov    %eax,(%esp)
 8229dd0:	e8 cd d3 00 00       	call   82371a2 <_ZNKSt6vectorIS_I22STStackablePackageDataSaIS0_EESaIS2_EE3endEv>
 8229dd5:	83 ec 04             	sub    $0x4,%esp
 8229dd8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8229ddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229ddf:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8229de2:	89 04 24             	mov    %eax,(%esp)
 8229de5:	e8 e4 d3 00 00       	call   82371ce <_ZN9__gnu_cxxneIPKSt6vectorI22STStackablePackageDataSaIS2_EES1_IS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8229dea:	84 c0                	test   %al,%al
 8229dec:	0f 85 4b fe ff ff    	jne    8229c3d <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x2c3>
 8229df2:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8229df9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8229dfc:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8229dff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229e03:	89 04 24             	mov    %eax,(%esp)
 8229e06:	e8 f9 0e f2 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8229e0b:	83 ec 04             	sub    $0x4,%esp
 8229e0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8229e11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229e15:	8d 45 98             	lea    -0x68(%ebp),%eax
 8229e18:	89 04 24             	mov    %eax,(%esp)
 8229e1b:	e8 cc 8c f2 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8229e20:	e9 d6 01 00 00       	jmp    8229ffb <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x681>
 8229e25:	8d 45 98             	lea    -0x68(%ebp),%eax
 8229e28:	89 04 24             	mov    %eax,(%esp)
 8229e2b:	e8 18 8d f2 ff       	call   8152b48 <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8229e30:	89 c3                	mov    %eax,%ebx
 8229e32:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229e35:	89 04 24             	mov    %eax,(%esp)
 8229e38:	e8 51 04 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8229e3d:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8229e44:	00 
 8229e45:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8229e4c:	00 
 8229e4d:	c7 44 24 44 08 00 00 	movl   $0x8,0x44(%esp)
 8229e54:	00 
 8229e55:	8b 13                	mov    (%ebx),%edx
 8229e57:	89 54 24 04          	mov    %edx,0x4(%esp)
 8229e5b:	8b 53 04             	mov    0x4(%ebx),%edx
 8229e5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8229e62:	8b 53 08             	mov    0x8(%ebx),%edx
 8229e65:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8229e69:	8b 53 0c             	mov    0xc(%ebx),%edx
 8229e6c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8229e70:	8b 53 10             	mov    0x10(%ebx),%edx
 8229e73:	89 54 24 14          	mov    %edx,0x14(%esp)
 8229e77:	8b 53 14             	mov    0x14(%ebx),%edx
 8229e7a:	89 54 24 18          	mov    %edx,0x18(%esp)
 8229e7e:	8b 53 18             	mov    0x18(%ebx),%edx
 8229e81:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8229e85:	8b 53 1c             	mov    0x1c(%ebx),%edx
 8229e88:	89 54 24 20          	mov    %edx,0x20(%esp)
 8229e8c:	8b 53 20             	mov    0x20(%ebx),%edx
 8229e8f:	89 54 24 24          	mov    %edx,0x24(%esp)
 8229e93:	8b 53 24             	mov    0x24(%ebx),%edx
 8229e96:	89 54 24 28          	mov    %edx,0x28(%esp)
 8229e9a:	8b 53 28             	mov    0x28(%ebx),%edx
 8229e9d:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8229ea1:	8b 53 2c             	mov    0x2c(%ebx),%edx
 8229ea4:	89 54 24 30          	mov    %edx,0x30(%esp)
 8229ea8:	8b 53 30             	mov    0x30(%ebx),%edx
 8229eab:	89 54 24 34          	mov    %edx,0x34(%esp)
 8229eaf:	8b 53 34             	mov    0x34(%ebx),%edx
 8229eb2:	89 54 24 38          	mov    %edx,0x38(%esp)
 8229eb6:	8b 53 38             	mov    0x38(%ebx),%edx
 8229eb9:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8229ebd:	0f b6 53 3c          	movzbl 0x3c(%ebx),%edx
 8229ec1:	88 54 24 40          	mov    %dl,0x40(%esp)
 8229ec5:	89 04 24             	mov    %eax,(%esp)
 8229ec8:	e8 b9 8e 2d 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8229ecd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8229ed0:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8229ed4:	78 27                	js     8229efd <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x583>
 8229ed6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8229ed9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8229edd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229ee4:	00 
 8229ee5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8229eec:	00 
 8229eed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229ef0:	89 04 24             	mov    %eax,(%esp)
 8229ef3:	e8 62 27 45 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8229ef8:	e9 f3 00 00 00       	jmp    8229ff0 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x676>
 8229efd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8229f04:	00 
 8229f05:	c7 44 24 08 a5 38 bc 	movl   $0x8bc38a5,0x8(%esp)
 8229f0c:	08 
 8229f0d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8229f14:	00 
 8229f15:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8229f1c:	e8 dd b8 87 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8229f21:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8229f28:	00 
 8229f29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229f2d:	8d 45 83             	lea    -0x7d(%ebp),%eax
 8229f30:	89 04 24             	mov    %eax,(%esp)
 8229f33:	e8 98 39 e5 ff       	call   807d8d0 <strncpy@plt>
 8229f38:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8229f3f:	00 
 8229f40:	c7 44 24 08 b9 38 bc 	movl   $0x8bc38b9,0x8(%esp)
 8229f47:	08 
 8229f48:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8229f4f:	00 
 8229f50:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8229f57:	e8 a2 b8 87 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8229f5c:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8229f63:	00 
 8229f64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229f68:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8229f6e:	89 04 24             	mov    %eax,(%esp)
 8229f71:	e8 5a 39 e5 ff       	call   807d8d0 <strncpy@plt>
 8229f76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229f79:	89 04 24             	mov    %eax,(%esp)
 8229f7c:	e8 0f 1d ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8229f81:	89 c6                	mov    %eax,%esi
 8229f83:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8229f89:	89 04 24             	mov    %eax,(%esp)
 8229f8c:	e8 1f 44 e5 ff       	call   807e3b0 <strlen@plt>
 8229f91:	89 c7                	mov    %eax,%edi
 8229f93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8229f96:	89 04 24             	mov    %eax,(%esp)
 8229f99:	e8 b0 1c ea ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8229f9e:	89 c3                	mov    %eax,%ebx
 8229fa0:	8d 45 98             	lea    -0x68(%ebp),%eax
 8229fa3:	89 04 24             	mov    %eax,(%esp)
 8229fa6:	e8 9d 8b f2 ff       	call   8152b48 <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 8229fab:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8229fb2:	00 
 8229fb3:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8229fba:	00 
 8229fbb:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8229fbf:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8229fc6:	00 
 8229fc7:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8229fcb:	8d 95 83 fe ff ff    	lea    -0x17d(%ebp),%edx
 8229fd1:	89 54 24 10          	mov    %edx,0x10(%esp)
 8229fd5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8229fd9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8229fe0:	00 
 8229fe1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8229fe5:	8d 45 83             	lea    -0x7d(%ebp),%eax
 8229fe8:	89 04 24             	mov    %eax,(%esp)
 8229feb:	e8 f8 b5 32 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8229ff0:	8d 45 98             	lea    -0x68(%ebp),%eax
 8229ff3:	89 04 24             	mov    %eax,(%esp)
 8229ff6:	e8 37 8b f2 ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 8229ffb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8229ffe:	8d 55 a0             	lea    -0x60(%ebp),%edx
 822a001:	89 54 24 04          	mov    %edx,0x4(%esp)
 822a005:	89 04 24             	mov    %eax,(%esp)
 822a008:	e8 dd 88 f2 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 822a00d:	83 ec 04             	sub    $0x4,%esp
 822a010:	8d 45 d8             	lea    -0x28(%ebp),%eax
 822a013:	89 44 24 04          	mov    %eax,0x4(%esp)
 822a017:	8d 45 98             	lea    -0x68(%ebp),%eax
 822a01a:	89 04 24             	mov    %eax,(%esp)
 822a01d:	e8 b3 d2 00 00       	call   82372d5 <_ZN9__gnu_cxxneIPK10Inven_ItemPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 822a022:	84 c0                	test   %al,%al
 822a024:	0f 85 fb fd ff ff    	jne    8229e25 <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x4ab>
 822a02a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a02d:	89 04 24             	mov    %eax,(%esp)
 822a030:	e8 15 4e f7 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 822a035:	8d 58 01             	lea    0x1(%eax),%ebx
 822a038:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 822a03f:	00 
 822a040:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a043:	89 04 24             	mov    %eax,(%esp)
 822a046:	e8 39 35 eb ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 822a04b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 822a04f:	89 04 24             	mov    %eax,(%esp)
 822a052:	e8 1d af 00 00       	call   8234f74 <_ZN8fair_pvp13CFairPvPScore11SetGiveItemEi>
 822a057:	c7 44 24 04 96 01 00 	movl   $0x196,0x4(%esp)
 822a05e:	00 
 822a05f:	8b 45 0c             	mov    0xc(%ebp),%eax
 822a062:	89 04 24             	mov    %eax,(%esp)
 822a065:	e8 36 1e 45 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 822a06a:	bb 00 00 00 00       	mov    $0x0,%ebx
 822a06f:	eb 1b                	jmp    822a08c <_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf+0x712>
 822a071:	89 d3                	mov    %edx,%ebx
 822a073:	89 c6                	mov    %eax,%esi
 822a075:	8d 45 a0             	lea    -0x60(%ebp),%eax
 822a078:	89 04 24             	mov    %eax,(%esp)
 822a07b:	e8 26 0c f2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 822a080:	89 f0                	mov    %esi,%eax
 822a082:	89 da                	mov    %ebx,%edx
 822a084:	89 04 24             	mov    %eax,(%esp)
 822a087:	e8 c4 96 8b 00       	call   8ae3750 <_Unwind_Resume>
 822a08c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 822a08f:	89 04 24             	mov    %eax,(%esp)
 822a092:	e8 0f 0c f2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 822a097:	89 d8                	mov    %ebx,%eax
 822a099:	8d 65 f4             	lea    -0xc(%ebp),%esp
 822a09c:	83 c4 00             	add    $0x0,%esp
 822a09f:	5b                   	pop    %ebx
 822a0a0:	5e                   	pop    %esi
 822a0a1:	5f                   	pop    %edi
 822a0a2:	5d                   	pop    %ebp
 822a0a3:	c3                   	ret

```

```c
// Dispatcher_SelectItem::dispatch_sig @ 0x822997a

/* Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SelectItem::dispatch_sig(Dispatcher_SelectItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  GameWorld *pGVar4;
  CFairPvPScore *pCVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> *pvVar9;
  int *piVar10;
  CDataManager *this_00;
  undefined4 *puVar11;
  char *pcVar12;
  size_t sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Inven_Item local_181;
  char local_180;
  int local_17f;
  undefined4 local_17a;
  char local_81 [21];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_6c [4];
  __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
  local_68 [4];
  vector<Inven_Item,std::allocator<Inven_Item>> local_64 [12];
  undefined4 local_58;
  int local_54;
  byte local_4e;
  byte local_4d;
  undefined4 local_4c;
  _Rb_tree_iterator local_48 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
  local_44 [4];
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  local_40 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
  local_3c [4];
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  int local_28;
  int local_24;
  int *local_20;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar4);
  if (iVar3 != 0xf) {
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar4);
    if (iVar3 != 0x10) {
      bVar2 = true;
      goto LAB_082299ef;
    }
  }
  bVar2 = false;
LAB_082299ef:
  if (bVar2) {
    uVar16 = 0;
  }
  else {
    pCVar5 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    iVar3 = fair_pvp::CFairPvPScore::GetGiveItem(pCVar5);
    iVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    iVar7 = G_CDataManager();
    iVar6 = ServerParameterScript::get_pvp_item_give((ServerParameterScript *)(iVar7 + 0x68),iVar6);
    if (iVar6 < iVar3) {
      uVar16 = 0;
    }
    else {
      local_4d = 0;
      local_4e = 0;
      cVar1 = PacketBuf::get_byte(param_2,&local_4d);
      if (cVar1 == '\x01') {
        local_54 = 0;
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
        ::_Rb_tree_const_iterator
                  ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                    *)&local_58);
        iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
        iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        local_54 = makeFairPVPEquipmentPackageKey(iVar6,iVar3);
        local_24 = 0;
        while (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), local_24 <= iVar3
              ) {
          G_CDataManager();
          std::
          map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
          ::find((int *)local_48);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
          ::_Rb_tree_const_iterator
                    ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                      *)&local_4c,local_48);
          local_58 = local_4c;
          G_CDataManager();
          std::
          map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
          ::end(local_40);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
          ::_Rb_tree_const_iterator(local_44,(_Rb_tree_iterator *)local_40);
          cVar1 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  ::operator!=((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                                *)&local_58,(_Rb_tree_const_iterator *)local_44);
          if (cVar1 != '\0') break;
          local_54 = decreaseRankOfFairPVPEquipmentPackageKey(local_54);
          local_24 = local_24 + 1;
        }
        G_CDataManager();
        std::
        map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
        ::end(local_38);
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
        ::_Rb_tree_const_iterator(local_3c,(_Rb_tree_iterator *)local_38);
        cVar1 = std::
                _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                              *)&local_58,(_Rb_tree_const_iterator *)local_3c);
        if (cVar1 == '\0') {
          iVar3 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                                *)&local_58);
          uVar8 = std::
                  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                  ::size((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                          *)(iVar3 + 4));
          if (uVar8 == local_4d) {
            std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_64);
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                          *)&local_58);
                    /* try { // try from 08229c30 to 0822a069 has its CatchHandler @ 0822a071 */
            std::
            vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
            ::begin();
            while( true ) {
              std::
              _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
              ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                            *)&local_58);
              std::
              vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
              ::end();
              bVar2 = __gnu_cxx::operator!=(local_68,local_34);
              if (!bVar2) break;
              cVar1 = PacketBuf::get_byte(param_2,&local_4e);
              if (cVar1 != '\x01') {
                uVar16 = LineFunc(0xe7a1,
                                  "virtual int Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)"
                                  ,0,0);
                goto LAB_0822a08c;
              }
              pvVar9 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                       __gnu_cxx::
                       __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                       ::operator->(local_68);
              uVar8 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::
                      size(pvVar9);
              if (uVar8 <= local_4e) {
                uVar16 = LineFunc(0xe7a4,
                                  "virtual int Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)"
                                  ,0,0);
                goto LAB_0822a08c;
              }
              Inven_Item::Inven_Item(&local_181);
              uVar8 = (uint)local_4e;
              pvVar9 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                       __gnu_cxx::
                       __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                       ::operator->(local_68);
              piVar10 = (int *)std::
                               vector<STStackablePackageData,std::allocator<STStackablePackageData>>
                               ::at(pvVar9,uVar8);
              iVar3 = *piVar10;
              local_17f = iVar3;
              this_00 = (CDataManager *)G_CDataManager();
              local_20 = (int *)CDataManager::find_item(this_00,iVar3);
              if (local_20 == (int *)0x0) {
                CUser::SendCmdErrorPacket(param_1,0x196,0x11);
                uVar16 = 0;
                goto LAB_0822a08c;
              }
              (**(code **)(*local_20 + 8))(local_20,&local_181);
              if (local_180 != '\x01') {
                uVar8 = (uint)local_4e;
                pvVar9 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                         __gnu_cxx::
                         __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                         ::operator->(local_68);
                iVar3 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::
                        at(pvVar9,uVar8);
                local_17a = *(undefined4 *)(iVar3 + 4);
              }
              std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_64,&local_181);
              __gnu_cxx::
              __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
              ::operator++(local_68);
            }
            local_28 = 0;
            std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
            __gnu_cxx::
            __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
            ::__normal_iterator<Inven_Item*>(local_6c,local_30);
            while( true ) {
              std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
              bVar2 = __gnu_cxx::operator!=(local_6c,local_2c);
              if (!bVar2) break;
              puVar11 = (undefined4 *)
                        __gnu_cxx::
                        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                        ::operator*(local_6c);
              uVar16 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              local_28 = CInventory::insertItemIntoInventory
                                   (uVar16,*puVar11,puVar11[1],puVar11[2],puVar11[3],puVar11[4],
                                    puVar11[5],puVar11[6],puVar11[7],puVar11[8],puVar11[9],
                                    puVar11[10],puVar11[0xb],puVar11[0xc],puVar11[0xd],puVar11[0xe],
                                    *(undefined1 *)(puVar11 + 0xf),8,1,1);
              if (local_28 < 0) {
                pcVar12 = (char *)RDARScriptStringManager::findString
                                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                             "game_server_msg_171",(bool *)0x0);
                strncpy(local_81,pcVar12,0x14);
                pcVar12 = (char *)RDARScriptStringManager::findString
                                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                             "game_server_msg_172",(bool *)0x0);
                strncpy((char *)&local_181,pcVar12,0xff);
                uVar16 = CUser::GetServerGroup(param_1);
                sVar13 = strlen((char *)&local_181);
                uVar14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                uVar15 = __gnu_cxx::
                         __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                         ::operator*(local_6c);
                WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (local_81,uVar15,0,uVar14,&local_181,sVar13,0,uVar16,0,0);
              }
              else {
                CUser::SendUpdateItemList(param_1,1,0,local_28);
              }
              __gnu_cxx::
              __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
              ::operator++(local_6c);
            }
            iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
            pCVar5 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
            fair_pvp::CFairPvPScore::SetGiveItem(pCVar5,iVar3 + 1);
            CUser::SendCmdOkPacket(param_1,0x196);
            uVar16 = 0;
LAB_0822a08c:
            std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_64);
          }
          else {
            uVar16 = 0;
          }
        }
        else {
          uVar16 = 0;
        }
      }
      else {
        uVar16 = LineFunc(0xe785,
                          "virtual int Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
  }
  return uVar16;
}

```

