# ARAD__DISPATCHER__Arad_INTER_kAvatarRoulette

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08198a9a ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig  [0x08198a9a-0x8198fcf] ===
 8198a9a:	55                   	push   %ebp
 8198a9b:	89 e5                	mov    %esp,%ebp
 8198a9d:	57                   	push   %edi
 8198a9e:	56                   	push   %esi
 8198a9f:	53                   	push   %ebx
 8198aa0:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8198aa6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8198aaa:	75 0a                	jne    8198ab6 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x1c>
 8198aac:	bb c8 03 00 00       	mov    $0x3c8,%ebx
 8198ab1:	e9 0c 05 00 00       	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198ab6:	8b 45 10             	mov    0x10(%ebp),%eax
 8198ab9:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8198abc:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8198ac0:	75 36                	jne    8198af8 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x5e>
 8198ac2:	c7 44 24 10 04 1c ba 	movl   $0x8ba1c04,0x10(%esp)
 8198ac9:	08 
 8198aca:	c7 44 24 0c cd 03 00 	movl   $0x3cd,0xc(%esp)
 8198ad1:	00 
 8198ad2:	c7 44 24 08 40 30 ba 	movl   $0x8ba3040,0x8(%esp)
 8198ad9:	08 
 8198ada:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8198ae1:	08 
 8198ae2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8198ae9:	e8 1c b1 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8198aee:	bb ce 03 00 00       	mov    $0x3ce,%ebx
 8198af3:	e9 ca 04 00 00       	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198af8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198afb:	89 04 24             	mov    %eax,(%esp)
 8198afe:	e8 2f 79 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8198b03:	85 c0                	test   %eax,%eax
 8198b05:	0f 94 c0             	sete   %al
 8198b08:	84 c0                	test   %al,%al
 8198b0a:	74 0a                	je     8198b16 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x7c>
 8198b0c:	bb d4 03 00 00       	mov    $0x3d4,%ebx
 8198b11:	e9 ac 04 00 00       	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198b16:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8198b1d:	00 
 8198b1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8198b25:	00 
 8198b26:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8198b29:	89 04 24             	mov    %eax,(%esp)
 8198b2c:	e8 8f 51 ee ff       	call   807dcc0 <memset@plt>
 8198b31:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8198b38:	e8 61 31 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8198b3d:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8198b40:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8198b43:	89 04 24             	mov    %eax,(%esp)
 8198b46:	e8 e5 57 ee ff       	call   807e330 <localtime@plt>
 8198b4b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8198b4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198b51:	89 04 24             	mov    %eax,(%esp)
 8198b54:	e8 f5 30 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8198b59:	89 c6                	mov    %eax,%esi
 8198b5b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8198b5e:	8b 78 0c             	mov    0xc(%eax),%edi
 8198b61:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8198b64:	8b 40 10             	mov    0x10(%eax),%eax
 8198b67:	83 c0 01             	add    $0x1,%eax
 8198b6a:	89 45 90             	mov    %eax,-0x70(%ebp)
 8198b6d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8198b70:	8b 40 14             	mov    0x14(%eax),%eax
 8198b73:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 8198b79:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8198b7e:	89 c8                	mov    %ecx,%eax
 8198b80:	f7 ea                	imul   %edx
 8198b82:	c1 fa 07             	sar    $0x7,%edx
 8198b85:	89 c8                	mov    %ecx,%eax
 8198b87:	c1 f8 1f             	sar    $0x1f,%eax
 8198b8a:	89 d3                	mov    %edx,%ebx
 8198b8c:	29 c3                	sub    %eax,%ebx
 8198b8e:	69 c3 d0 07 00 00    	imul   $0x7d0,%ebx,%eax
 8198b94:	89 cb                	mov    %ecx,%ebx
 8198b96:	29 c3                	sub    %eax,%ebx
 8198b98:	e8 e4 35 f3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8198b9d:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 8198ba3:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8198ba7:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8198bab:	8b 55 90             	mov    -0x70(%ebp),%edx
 8198bae:	89 54 24 14          	mov    %edx,0x14(%esp)
 8198bb2:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8198bb6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8198bba:	c7 44 24 08 5c 1c ba 	movl   $0x8ba1c5c,0x8(%esp)
 8198bc1:	08 
 8198bc2:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8198bc9:	00 
 8198bca:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8198bcd:	89 04 24             	mov    %eax,(%esp)
 8198bd0:	e8 47 3c 3f 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8198bd5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8198bd8:	89 04 24             	mov    %eax,(%esp)
 8198bdb:	e8 56 17 00 00       	call   819a336 <_ZN20AvatarRouletteServer16PickedAvatarInfoC1Ev>
 8198be0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8198be3:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8198be7:	0f b6 c8             	movzbl %al,%ecx
 8198bea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8198bed:	0f b6 00             	movzbl (%eax),%eax
 8198bf0:	0f b6 d0             	movzbl %al,%edx
 8198bf3:	a1 24 f8 41 09       	mov    0x941f824,%eax
 8198bf8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8198bfc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8198c00:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8198c03:	89 54 24 04          	mov    %edx,0x4(%esp)
 8198c07:	89 04 24             	mov    %eax,(%esp)
 8198c0a:	e8 19 6f fe ff       	call   817fb28 <_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii>
 8198c0f:	83 f0 01             	xor    $0x1,%eax
 8198c12:	84 c0                	test   %al,%al
 8198c14:	74 71                	je     8198c87 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x1ed>
 8198c16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198c19:	89 04 24             	mov    %eax,(%esp)
 8198c1c:	e8 2d 30 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8198c21:	89 c3                	mov    %eax,%ebx
 8198c23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198c26:	89 04 24             	mov    %eax,(%esp)
 8198c29:	e8 40 17 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8198c2e:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8198c32:	89 44 24 14          	mov    %eax,0x14(%esp)
 8198c36:	c7 44 24 10 74 1c ba 	movl   $0x8ba1c74,0x10(%esp)
 8198c3d:	08 
 8198c3e:	c7 44 24 0c e7 03 00 	movl   $0x3e7,0xc(%esp)
 8198c45:	00 
 8198c46:	c7 44 24 08 40 30 ba 	movl   $0x8ba3040,0x8(%esp)
 8198c4d:	08 
 8198c4e:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8198c55:	08 
 8198c56:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8198c5d:	e8 a8 af 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8198c62:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8198c69:	00 
 8198c6a:	c7 44 24 04 36 02 00 	movl   $0x236,0x4(%esp)
 8198c71:	00 
 8198c72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198c75:	89 04 24             	mov    %eax,(%esp)
 8198c78:	e8 c5 32 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8198c7d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8198c82:	e9 3b 03 00 00       	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198c87:	c6 45 df ff          	movb   $0xff,-0x21(%ebp)
 8198c8b:	0f b6 45 b7          	movzbl -0x49(%ebp),%eax
 8198c8f:	3c 01                	cmp    $0x1,%al
 8198c91:	7e 04                	jle    8198c97 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x1fd>
 8198c93:	c6 45 df 03          	movb   $0x3,-0x21(%ebp)
 8198c97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198c9a:	89 04 24             	mov    %eax,(%esp)
 8198c9d:	e8 68 a7 ff ff       	call   819340a <_ZN15CUserCharacInfo21getCurCharacInvenRefWEv>
 8198ca2:	05 58 06 00 00       	add    $0x658,%eax
 8198ca7:	89 04 24             	mov    %eax,(%esp)
 8198caa:	e8 95 72 fe ff       	call   817ff44 <_ZNK10AvatarCoin8IsUsableEv>
 8198caf:	83 f0 01             	xor    $0x1,%eax
 8198cb2:	84 c0                	test   %al,%al
 8198cb4:	74 71                	je     8198d27 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x28d>
 8198cb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198cb9:	89 04 24             	mov    %eax,(%esp)
 8198cbc:	e8 8d 2f f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8198cc1:	89 c3                	mov    %eax,%ebx
 8198cc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198cc6:	89 04 24             	mov    %eax,(%esp)
 8198cc9:	e8 a0 16 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8198cce:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8198cd2:	89 44 24 14          	mov    %eax,0x14(%esp)
 8198cd6:	c7 44 24 10 b0 1c ba 	movl   $0x8ba1cb0,0x10(%esp)
 8198cdd:	08 
 8198cde:	c7 44 24 0c f9 03 00 	movl   $0x3f9,0xc(%esp)
 8198ce5:	00 
 8198ce6:	c7 44 24 08 40 30 ba 	movl   $0x8ba3040,0x8(%esp)
 8198ced:	08 
 8198cee:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8198cf5:	08 
 8198cf6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8198cfd:	e8 08 af 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8198d02:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8198d09:	00 
 8198d0a:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 8198d11:	00 
 8198d12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198d15:	89 04 24             	mov    %eax,(%esp)
 8198d18:	e8 25 32 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8198d1d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8198d22:	e9 9b 02 00 00       	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198d27:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8198d2e:	0f b6 45 b6          	movzbl -0x4a(%ebp),%eax
 8198d32:	3c 03                	cmp    $0x3,%al
 8198d34:	75 07                	jne    8198d3d <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x2a3>
 8198d36:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8198d3d:	0f b6 45 b5          	movzbl -0x4b(%ebp),%eax
 8198d41:	66 98                	cbtw
 8198d43:	0f b7 c0             	movzwl %ax,%eax
 8198d46:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8198d49:	0f be 7d df          	movsbl -0x21(%ebp),%edi
 8198d4d:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8198d51:	0f be f0             	movsbl %al,%esi
 8198d54:	8b 5d b0             	mov    -0x50(%ebp),%ebx
 8198d57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198d5a:	89 04 24             	mov    %eax,(%esp)
 8198d5d:	e8 2c 15 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8198d62:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8198d65:	89 54 24 24          	mov    %edx,0x24(%esp)
 8198d69:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8198d70:	00 
 8198d71:	c7 44 24 1c 15 00 00 	movl   $0x15,0x1c(%esp)
 8198d78:	00 
 8198d79:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8198d7c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8198d80:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8198d84:	89 74 24 10          	mov    %esi,0x10(%esp)
 8198d88:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8198d8f:	00 
 8198d90:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8198d93:	89 54 24 08          	mov    %edx,0x8(%esp)
 8198d97:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8198d9b:	89 04 24             	mov    %eax,(%esp)
 8198d9e:	e8 fb 0d 37 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 8198da3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8198da6:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 8198daa:	75 71                	jne    8198e1d <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x383>
 8198dac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198daf:	89 04 24             	mov    %eax,(%esp)
 8198db2:	e8 97 2e f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8198db7:	89 c3                	mov    %eax,%ebx
 8198db9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198dbc:	89 04 24             	mov    %eax,(%esp)
 8198dbf:	e8 aa 15 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8198dc4:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8198dc8:	89 44 24 14          	mov    %eax,0x14(%esp)
 8198dcc:	c7 44 24 10 e0 1c ba 	movl   $0x8ba1ce0,0x10(%esp)
 8198dd3:	08 
 8198dd4:	c7 44 24 0c 07 04 00 	movl   $0x407,0xc(%esp)
 8198ddb:	00 
 8198ddc:	c7 44 24 08 40 30 ba 	movl   $0x8ba3040,0x8(%esp)
 8198de3:	08 
 8198de4:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8198deb:	08 
 8198dec:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8198df3:	e8 12 ae 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8198df8:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8198dff:	00 
 8198e00:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 8198e07:	00 
 8198e08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198e0b:	89 04 24             	mov    %eax,(%esp)
 8198e0e:	e8 2f 31 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8198e13:	bb 00 00 00 00       	mov    $0x0,%ebx
 8198e18:	e9 a5 01 00 00       	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198e1d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8198e20:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8198e24:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8198e2b:	00 
 8198e2c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8198e33:	00 
 8198e34:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198e37:	89 04 24             	mov    %eax,(%esp)
 8198e3a:	e8 1b 38 4e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8198e3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198e42:	89 04 24             	mov    %eax,(%esp)
 8198e45:	e8 c0 a5 ff ff       	call   819340a <_ZN15CUserCharacInfo21getCurCharacInvenRefWEv>
 8198e4a:	05 58 06 00 00       	add    $0x658,%eax
 8198e4f:	89 04 24             	mov    %eax,(%esp)
 8198e52:	e8 bd 70 fe ff       	call   817ff14 <_ZN10AvatarCoin3UseEv>
 8198e57:	83 f0 01             	xor    $0x1,%eax
 8198e5a:	84 c0                	test   %al,%al
 8198e5c:	74 71                	je     8198ecf <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x435>
 8198e5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198e61:	89 04 24             	mov    %eax,(%esp)
 8198e64:	e8 e5 2d f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8198e69:	89 c3                	mov    %eax,%ebx
 8198e6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198e6e:	89 04 24             	mov    %eax,(%esp)
 8198e71:	e8 f8 14 f4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8198e76:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8198e7a:	89 44 24 14          	mov    %eax,0x14(%esp)
 8198e7e:	c7 44 24 10 b0 1c ba 	movl   $0x8ba1cb0,0x10(%esp)
 8198e85:	08 
 8198e86:	c7 44 24 0c 10 04 00 	movl   $0x410,0xc(%esp)
 8198e8d:	00 
 8198e8e:	c7 44 24 08 40 30 ba 	movl   $0x8ba3040,0x8(%esp)
 8198e95:	08 
 8198e96:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8198e9d:	08 
 8198e9e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8198ea5:	e8 60 ad 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8198eaa:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8198eb1:	00 
 8198eb2:	c7 44 24 04 4a 02 00 	movl   $0x24a,0x4(%esp)
 8198eb9:	00 
 8198eba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198ebd:	89 04 24             	mov    %eax,(%esp)
 8198ec0:	e8 7d 30 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8198ec5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8198eca:	e9 f3 00 00 00       	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198ecf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8198ed6:	00 
 8198ed7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198eda:	89 04 24             	mov    %eax,(%esp)
 8198edd:	e8 72 70 fe ff       	call   817ff54 <_ZN10AvatarCoin10HistoryLog6SubLogEP5CUserj>
 8198ee2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198ee5:	89 04 24             	mov    %eax,(%esp)
 8198ee8:	e8 f7 70 fe ff       	call   817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>
 8198eed:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198ef0:	89 04 24             	mov    %eax,(%esp)
 8198ef3:	e8 54 4e 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8198ef8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198efb:	89 04 24             	mov    %eax,(%esp)
 8198efe:	e8 e3 29 f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8198f03:	c7 44 24 08 4a 02 00 	movl   $0x24a,0x8(%esp)
 8198f0a:	00 
 8198f0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8198f12:	00 
 8198f13:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f16:	89 04 24             	mov    %eax,(%esp)
 8198f19:	e8 de 29 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8198f1e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8198f25:	00 
 8198f26:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f29:	89 04 24             	mov    %eax,(%esp)
 8198f2c:	e8 ef 29 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8198f31:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8198f34:	98                   	cwtl
 8198f35:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198f39:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f3c:	89 04 24             	mov    %eax,(%esp)
 8198f3f:	e8 60 0f f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8198f44:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8198f48:	0f be c0             	movsbl %al,%eax
 8198f4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198f4f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f52:	89 04 24             	mov    %eax,(%esp)
 8198f55:	e8 c6 29 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8198f5a:	0f b6 45 b5          	movzbl -0x4b(%ebp),%eax
 8198f5e:	0f be c0             	movsbl %al,%eax
 8198f61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198f65:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f68:	89 04 24             	mov    %eax,(%esp)
 8198f6b:	e8 34 0f f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8198f70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8198f77:	00 
 8198f78:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f7b:	89 04 24             	mov    %eax,(%esp)
 8198f7e:	e8 d5 29 f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8198f83:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8198f8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8198f8d:	89 04 24             	mov    %eax,(%esp)
 8198f90:	e8 25 f6 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8198f95:	bb 00 00 00 00       	mov    $0x0,%ebx
 8198f9a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198f9d:	89 04 24             	mov    %eax,(%esp)
 8198fa0:	e8 db 4e 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8198fa5:	eb 1b                	jmp    8198fc2 <_ZN4ARAD10DISPATCHER26Arad_INTER_kAvatarRoulette12dispatch_sigEP5CUserPci+0x528>
 8198fa7:	89 d3                	mov    %edx,%ebx
 8198fa9:	89 c6                	mov    %eax,%esi
 8198fab:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8198fae:	89 04 24             	mov    %eax,(%esp)
 8198fb1:	e8 ca 4e 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8198fb6:	89 f0                	mov    %esi,%eax
 8198fb8:	89 da                	mov    %ebx,%edx
 8198fba:	89 04 24             	mov    %eax,(%esp)
 8198fbd:	e8 8e a7 94 00       	call   8ae3750 <_Unwind_Resume>
 8198fc2:	89 d8                	mov    %ebx,%eax
 8198fc4:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8198fca:	5b                   	pop    %ebx
 8198fcb:	5e                   	pop    %esi
 8198fcc:	5f                   	pop    %edi
 8198fcd:	5d                   	pop    %ebp
 8198fce:	c3                   	ret
 8198fcf:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig @ 0x8198a9a

/* ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  int iVar9;
  PacketGuard local_64 [12];
  PickedAvatarInfo local_58 [4];
  undefined4 local_54;
  char local_50;
  char local_4f;
  char local_4d;
  time_t local_4c;
  char local_48 [24];
  byte *local_30;
  tm *local_2c;
  char local_25;
  undefined4 local_24;
  int local_20;
  
  if (param_2 == (char *)0x0) {
    uVar8 = 0x3c8;
  }
  else {
    local_30 = (byte *)param_3;
    if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                 ,0x3cd,"AVATAR ROULETTE INTER_DSP(SigAvatarRoulette) null.");
      uVar8 = 0x3ce;
    }
    else {
      iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar4 == 0) {
        uVar8 = 0x3d4;
      }
      else {
        memset(local_48,0,0x18);
        local_4c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_2c = localtime(&local_4c);
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        iVar4 = local_2c->tm_mday;
        iVar9 = local_2c->tm_mon;
        iVar1 = local_2c->tm_year;
        iVar5 = G_CEnvironment();
        OS_API::snprintf(local_48,0x14,"M%02d%02d%02d%02d%10d",*(undefined4 *)(iVar5 + 0x1b0),
                         (iVar1 + 0x76c) % 2000,iVar9 + 1,iVar4,uVar8);
        AvatarRouletteServer::PickedAvatarInfo::PickedAvatarInfo(local_58);
        cVar2 = AvatarRouletteServer::Pickup
                          (GlobalData::s_pAvatarRoulette,local_58,(uint)*local_30,(uint)local_30[1])
        ;
        if (cVar2 == '\x01') {
          local_25 = -1;
          if ('\x01' < local_4d) {
            local_25 = '\x03';
          }
          iVar4 = CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_2);
          cVar2 = AvatarCoin::IsUsable((AvatarCoin *)(iVar4 + 0x658));
          if (cVar2 == '\x01') {
            local_24 = 0;
            sVar3 = (short)local_4f;
            iVar9 = (int)local_25;
            iVar4 = (int)local_50;
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            local_20 = CInventory::AddAvatarItem
                                 (pCVar7,local_54,local_24,0,iVar4,iVar9,local_48,0x15,0,sVar3);
            if (local_20 == -1) {
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
              uVar6 = CUser::get_acc_id((CUser *)param_2);
              LogManager::logFormat
                        (1,"localjapan/Arad_InterDispatcher.cpp",
                         "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                         ,0x407,"[kAvatarRoulette] no space in inventory. (%u - %u)",uVar6,uVar8);
              CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,4);
              uVar8 = 0;
            }
            else {
              CUser::SendUpdateItemList((CUser *)param_2,1,1,local_20);
              iVar4 = CUserCharacInfo::getCurCharacInvenRefW((CUserCharacInfo *)param_2);
              cVar2 = AvatarCoin::Use((AvatarCoin *)(iVar4 + 0x658));
              if (cVar2 == '\x01') {
                AvatarCoin::HistoryLog::SubLog((CUser *)param_2,1);
                AvatarCoin::SendSyncPacket((CUser *)param_2);
                PacketGuard::PacketGuard(local_64);
                    /* try { // try from 08198efe to 08198f94 has its CatchHandler @ 08198fa7 */
                InterfacePacketBuf::clear((InterfacePacketBuf *)local_64);
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x24a);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,1);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(int)(short)local_20);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,(int)local_50);
                InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,(int)local_4f);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
                CUser::Send((CUser *)param_2,local_64);
                uVar8 = 0;
                PacketGuard::~PacketGuard(local_64);
              }
              else {
                uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
                uVar6 = CUser::get_acc_id((CUser *)param_2);
                LogManager::logFormat
                          (1,"localjapan/Arad_InterDispatcher.cpp",
                           "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                           ,0x410,"[kAvatarRoulette] need avatarCoin. (%u - %u)",uVar6,uVar8);
                CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,0x16);
                uVar8 = 0;
              }
            }
          }
          else {
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            uVar6 = CUser::get_acc_id((CUser *)param_2);
            LogManager::logFormat
                      (1,"localjapan/Arad_InterDispatcher.cpp",
                       "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                       ,0x3f9,"[kAvatarRoulette] need avatarCoin. (%u - %u)",uVar6,uVar8);
            CUser::SendCmdErrorPacket((CUser *)param_2,0x24a,0x16);
            uVar8 = 0;
          }
        }
        else {
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          uVar6 = CUser::get_acc_id((CUser *)param_2);
          LogManager::logFormat
                    (1,"localjapan/Arad_InterDispatcher.cpp",
                     "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarRoulette::dispatch_sig(CUser*, char*, int)"
                     ,999,"[kAvatarRoulette] Avatar Roulette Pickup failed. (%u - %u)",uVar6,uVar8);
          CUser::SendCmdErrorPacket((CUser *)param_2,0x236,1);
          uVar8 = 0;
        }
      }
    }
  }
  return uVar8;
}

```

