# Dispatcher_GatheringPartyStatus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08203878 Dispatcher_GatheringPartyStatus::dispatch_sig  [0x08203878-0x820419f] ===
 8203878:	55                   	push   %ebp
 8203879:	89 e5                	mov    %esp,%ebp
 820387b:	56                   	push   %esi
 820387c:	53                   	push   %ebx
 820387d:	81 ec f0 01 00 00    	sub    $0x1f0,%esp
 8203883:	c7 44 24 08 b4 01 00 	movl   $0x1b4,0x8(%esp)
 820388a:	00 
 820388b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8203892:	00 
 8203893:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8203899:	89 04 24             	mov    %eax,(%esp)
 820389c:	e8 1f a4 e7 ff       	call   807dcc0 <memset@plt>
 82038a1:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 82038a7:	83 c0 0d             	add    $0xd,%eax
 82038aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82038ae:	8b 45 10             	mov    0x10(%ebp),%eax
 82038b1:	89 04 24             	mov    %eax,(%esp)
 82038b4:	e8 b7 96 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82038b9:	83 f0 01             	xor    $0x1,%eax
 82038bc:	84 c0                	test   %al,%al
 82038be:	74 2b                	je     82038eb <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x73>
 82038c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82038c7:	00 
 82038c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82038cf:	00 
 82038d0:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 82038d7:	08 
 82038d8:	c7 04 24 eb 9a 00 00 	movl   $0x9aeb,(%esp)
 82038df:	e8 f3 cf 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82038e4:	89 c3                	mov    %eax,%ebx
 82038e6:	e9 a8 08 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 82038eb:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 82038f1:	83 c0 0e             	add    $0xe,%eax
 82038f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82038f8:	8b 45 10             	mov    0x10(%ebp),%eax
 82038fb:	89 04 24             	mov    %eax,(%esp)
 82038fe:	e8 ed 97 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8203903:	83 f0 01             	xor    $0x1,%eax
 8203906:	84 c0                	test   %al,%al
 8203908:	74 2b                	je     8203935 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0xbd>
 820390a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203911:	00 
 8203912:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203919:	00 
 820391a:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203921:	08 
 8203922:	c7 04 24 ef 9a 00 00 	movl   $0x9aef,(%esp)
 8203929:	e8 a9 cf 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820392e:	89 c3                	mov    %eax,%ebx
 8203930:	e9 5e 08 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203935:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 820393b:	83 c0 12             	add    $0x12,%eax
 820393e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203942:	8b 45 10             	mov    0x10(%ebp),%eax
 8203945:	89 04 24             	mov    %eax,(%esp)
 8203948:	e8 a3 97 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 820394d:	83 f0 01             	xor    $0x1,%eax
 8203950:	84 c0                	test   %al,%al
 8203952:	74 2b                	je     820397f <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x107>
 8203954:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820395b:	00 
 820395c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203963:	00 
 8203964:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 820396b:	08 
 820396c:	c7 04 24 f2 9a 00 00 	movl   $0x9af2,(%esp)
 8203973:	e8 5f cf 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203978:	89 c3                	mov    %eax,%ebx
 820397a:	e9 14 08 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 820397f:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8203985:	83 c0 16             	add    $0x16,%eax
 8203988:	89 44 24 04          	mov    %eax,0x4(%esp)
 820398c:	8b 45 10             	mov    0x10(%ebp),%eax
 820398f:	89 04 24             	mov    %eax,(%esp)
 8203992:	e8 d9 95 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8203997:	83 f0 01             	xor    $0x1,%eax
 820399a:	84 c0                	test   %al,%al
 820399c:	74 2b                	je     82039c9 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x151>
 820399e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82039a5:	00 
 82039a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82039ad:	00 
 82039ae:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 82039b5:	08 
 82039b6:	c7 04 24 f4 9a 00 00 	movl   $0x9af4,(%esp)
 82039bd:	e8 15 cf 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82039c2:	89 c3                	mov    %eax,%ebx
 82039c4:	e9 ca 07 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 82039c9:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 82039cf:	83 c0 17             	add    $0x17,%eax
 82039d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82039d6:	8b 45 10             	mov    0x10(%ebp),%eax
 82039d9:	89 04 24             	mov    %eax,(%esp)
 82039dc:	e8 8f 95 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82039e1:	83 f0 01             	xor    $0x1,%eax
 82039e4:	84 c0                	test   %al,%al
 82039e6:	74 2b                	je     8203a13 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x19b>
 82039e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82039ef:	00 
 82039f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82039f7:	00 
 82039f8:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 82039ff:	08 
 8203a00:	c7 04 24 f6 9a 00 00 	movl   $0x9af6,(%esp)
 8203a07:	e8 cb ce 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203a0c:	89 c3                	mov    %eax,%ebx
 8203a0e:	e9 80 07 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203a13:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8203a19:	83 c0 18             	add    $0x18,%eax
 8203a1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203a20:	8b 45 10             	mov    0x10(%ebp),%eax
 8203a23:	89 04 24             	mov    %eax,(%esp)
 8203a26:	e8 15 98 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8203a2b:	83 f0 01             	xor    $0x1,%eax
 8203a2e:	84 c0                	test   %al,%al
 8203a30:	74 2b                	je     8203a5d <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x1e5>
 8203a32:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203a39:	00 
 8203a3a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203a41:	00 
 8203a42:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203a49:	08 
 8203a4a:	c7 04 24 f8 9a 00 00 	movl   $0x9af8,(%esp)
 8203a51:	e8 81 ce 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203a56:	89 c3                	mov    %eax,%ebx
 8203a58:	e9 36 07 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203a5d:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8203a63:	83 c0 1c             	add    $0x1c,%eax
 8203a66:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203a6a:	8b 45 10             	mov    0x10(%ebp),%eax
 8203a6d:	89 04 24             	mov    %eax,(%esp)
 8203a70:	e8 3b 96 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8203a75:	83 f0 01             	xor    $0x1,%eax
 8203a78:	84 c0                	test   %al,%al
 8203a7a:	74 2b                	je     8203aa7 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x22f>
 8203a7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203a83:	00 
 8203a84:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203a8b:	00 
 8203a8c:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203a93:	08 
 8203a94:	c7 04 24 fa 9a 00 00 	movl   $0x9afa,(%esp)
 8203a9b:	e8 37 ce 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203aa0:	89 c3                	mov    %eax,%ebx
 8203aa2:	e9 ec 06 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203aa7:	0f b7 85 4c fe ff ff 	movzwl -0x1b4(%ebp),%eax
 8203aae:	66 83 f8 1e          	cmp    $0x1e,%ax
 8203ab2:	76 5f                	jbe    8203b13 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 8203ab4:	c7 44 24 14 1e 00 00 	movl   $0x1e,0x14(%esp)
 8203abb:	00 
 8203abc:	c7 44 24 10 2c 29 bc 	movl   $0x8bc292c,0x10(%esp)
 8203ac3:	08 
 8203ac4:	c7 44 24 0c ff 9a 00 	movl   $0x9aff,0xc(%esp)
 8203acb:	00 
 8203acc:	c7 44 24 08 20 f1 bc 	movl   $0x8bcf120,0x8(%esp)
 8203ad3:	08 
 8203ad4:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8203adb:	08 
 8203adc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8203ae3:	e8 22 01 8d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8203ae8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203aef:	00 
 8203af0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203af7:	00 
 8203af8:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203aff:	08 
 8203b00:	c7 04 24 00 9b 00 00 	movl   $0x9b00,(%esp)
 8203b07:	e8 cb cd 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203b0c:	89 c3                	mov    %eax,%ebx
 8203b0e:	e9 80 06 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203b13:	0f b7 85 4c fe ff ff 	movzwl -0x1b4(%ebp),%eax
 8203b1a:	66 85 c0             	test   %ax,%ax
 8203b1d:	0f 84 a0 01 00 00    	je     8203cc3 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x44b>
 8203b23:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8203b2a:	e9 7c 01 00 00       	jmp    8203cab <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x433>
 8203b2f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8203b32:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203b38:	89 d0                	mov    %edx,%eax
 8203b3a:	c1 e0 02             	shl    $0x2,%eax
 8203b3d:	01 d0                	add    %edx,%eax
 8203b3f:	01 c0                	add    %eax,%eax
 8203b41:	83 c0 10             	add    $0x10,%eax
 8203b44:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203b47:	83 c0 0e             	add    $0xe,%eax
 8203b4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203b4e:	8b 45 10             	mov    0x10(%ebp),%eax
 8203b51:	89 04 24             	mov    %eax,(%esp)
 8203b54:	e8 17 94 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8203b59:	83 f0 01             	xor    $0x1,%eax
 8203b5c:	84 c0                	test   %al,%al
 8203b5e:	74 2b                	je     8203b8b <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x313>
 8203b60:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203b67:	00 
 8203b68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203b6f:	00 
 8203b70:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203b77:	08 
 8203b78:	c7 04 24 09 9b 00 00 	movl   $0x9b09,(%esp)
 8203b7f:	e8 53 cd 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203b84:	89 c3                	mov    %eax,%ebx
 8203b86:	e9 08 06 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203b8b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8203b8e:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203b94:	89 d0                	mov    %edx,%eax
 8203b96:	c1 e0 02             	shl    $0x2,%eax
 8203b99:	01 d0                	add    %edx,%eax
 8203b9b:	01 c0                	add    %eax,%eax
 8203b9d:	83 c0 10             	add    $0x10,%eax
 8203ba0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203ba3:	83 c0 0f             	add    $0xf,%eax
 8203ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203baa:	8b 45 10             	mov    0x10(%ebp),%eax
 8203bad:	89 04 24             	mov    %eax,(%esp)
 8203bb0:	e8 bb 93 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8203bb5:	83 f0 01             	xor    $0x1,%eax
 8203bb8:	84 c0                	test   %al,%al
 8203bba:	74 2b                	je     8203be7 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x36f>
 8203bbc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203bc3:	00 
 8203bc4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203bcb:	00 
 8203bcc:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203bd3:	08 
 8203bd4:	c7 04 24 0a 9b 00 00 	movl   $0x9b0a,(%esp)
 8203bdb:	e8 f7 cc 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203be0:	89 c3                	mov    %eax,%ebx
 8203be2:	e9 ac 05 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203be7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8203bea:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203bf0:	89 d0                	mov    %edx,%eax
 8203bf2:	c1 e0 02             	shl    $0x2,%eax
 8203bf5:	01 d0                	add    %edx,%eax
 8203bf7:	01 c0                	add    %eax,%eax
 8203bf9:	83 c0 10             	add    $0x10,%eax
 8203bfc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203bff:	83 c0 10             	add    $0x10,%eax
 8203c02:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8203c09:	00 
 8203c0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203c0e:	8b 45 10             	mov    0x10(%ebp),%eax
 8203c11:	89 04 24             	mov    %eax,(%esp)
 8203c14:	e8 99 97 38 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8203c19:	83 f0 01             	xor    $0x1,%eax
 8203c1c:	84 c0                	test   %al,%al
 8203c1e:	74 2b                	je     8203c4b <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x3d3>
 8203c20:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203c27:	00 
 8203c28:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203c2f:	00 
 8203c30:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203c37:	08 
 8203c38:	c7 04 24 0b 9b 00 00 	movl   $0x9b0b,(%esp)
 8203c3f:	e8 93 cc 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203c44:	89 c3                	mov    %eax,%ebx
 8203c46:	e9 48 05 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203c4b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8203c4e:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203c54:	89 d0                	mov    %edx,%eax
 8203c56:	c1 e0 02             	shl    $0x2,%eax
 8203c59:	01 d0                	add    %edx,%eax
 8203c5b:	01 c0                	add    %eax,%eax
 8203c5d:	83 c0 10             	add    $0x10,%eax
 8203c60:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203c63:	83 c0 14             	add    $0x14,%eax
 8203c66:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203c6a:	8b 45 10             	mov    0x10(%ebp),%eax
 8203c6d:	89 04 24             	mov    %eax,(%esp)
 8203c70:	e8 cb 95 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8203c75:	83 f0 01             	xor    $0x1,%eax
 8203c78:	84 c0                	test   %al,%al
 8203c7a:	74 2b                	je     8203ca7 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x42f>
 8203c7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203c83:	00 
 8203c84:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203c8b:	00 
 8203c8c:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203c93:	08 
 8203c94:	c7 04 24 0c 9b 00 00 	movl   $0x9b0c,(%esp)
 8203c9b:	e8 37 cc 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203ca0:	89 c3                	mov    %eax,%ebx
 8203ca2:	e9 ec 04 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203ca7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8203cab:	0f b7 85 4c fe ff ff 	movzwl -0x1b4(%ebp),%eax
 8203cb2:	0f b7 c0             	movzwl %ax,%eax
 8203cb5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8203cb8:	0f 9f c0             	setg   %al
 8203cbb:	84 c0                	test   %al,%al
 8203cbd:	0f 85 6c fe ff ff    	jne    8203b2f <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x2b7>
 8203cc3:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 8203cc9:	05 4a 01 00 00       	add    $0x14a,%eax
 8203cce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203cd2:	8b 45 10             	mov    0x10(%ebp),%eax
 8203cd5:	89 04 24             	mov    %eax,(%esp)
 8203cd8:	e8 d3 93 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8203cdd:	83 f0 01             	xor    $0x1,%eax
 8203ce0:	84 c0                	test   %al,%al
 8203ce2:	74 2b                	je     8203d0f <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x497>
 8203ce4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203ceb:	00 
 8203cec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203cf3:	00 
 8203cf4:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203cfb:	08 
 8203cfc:	c7 04 24 12 9b 00 00 	movl   $0x9b12,(%esp)
 8203d03:	e8 cf cb 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203d08:	89 c3                	mov    %eax,%ebx
 8203d0a:	e9 84 04 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203d0f:	e8 93 66 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8203d14:	89 04 24             	mov    %eax,(%esp)
 8203d17:	e8 cc e7 f3 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 8203d1c:	84 c0                	test   %al,%al
 8203d1e:	74 68                	je     8203d88 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x510>
 8203d20:	0f b7 85 7a ff ff ff 	movzwl -0x86(%ebp),%eax
 8203d27:	66 83 f8 08          	cmp    $0x8,%ax
 8203d2b:	0f 86 bb 00 00 00    	jbe    8203dec <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x574>
 8203d31:	c7 44 24 10 50 29 bc 	movl   $0x8bc2950,0x10(%esp)
 8203d38:	08 
 8203d39:	c7 44 24 0c 1c 9b 00 	movl   $0x9b1c,0xc(%esp)
 8203d40:	00 
 8203d41:	c7 44 24 08 20 f1 bc 	movl   $0x8bcf120,0x8(%esp)
 8203d48:	08 
 8203d49:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8203d50:	08 
 8203d51:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8203d58:	e8 ad fe 8c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8203d5d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203d64:	00 
 8203d65:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203d6c:	00 
 8203d6d:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203d74:	08 
 8203d75:	c7 04 24 1d 9b 00 00 	movl   $0x9b1d,(%esp)
 8203d7c:	e8 56 cb 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203d81:	89 c3                	mov    %eax,%ebx
 8203d83:	e9 0b 04 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203d88:	0f b7 85 7a ff ff ff 	movzwl -0x86(%ebp),%eax
 8203d8f:	66 83 f8 04          	cmp    $0x4,%ax
 8203d93:	76 57                	jbe    8203dec <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x574>
 8203d95:	c7 44 24 10 80 29 bc 	movl   $0x8bc2980,0x10(%esp)
 8203d9c:	08 
 8203d9d:	c7 44 24 0c 24 9b 00 	movl   $0x9b24,0xc(%esp)
 8203da4:	00 
 8203da5:	c7 44 24 08 20 f1 bc 	movl   $0x8bcf120,0x8(%esp)
 8203dac:	08 
 8203dad:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8203db4:	08 
 8203db5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8203dbc:	e8 49 fe 8c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8203dc1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203dc8:	00 
 8203dc9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203dd0:	00 
 8203dd1:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203dd8:	08 
 8203dd9:	c7 04 24 25 9b 00 00 	movl   $0x9b25,(%esp)
 8203de0:	e8 f2 ca 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203de5:	89 c3                	mov    %eax,%ebx
 8203de7:	e9 a7 03 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203dec:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8203df3:	e9 8c 01 00 00       	jmp    8203f84 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x70c>
 8203df8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8203dfb:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203e01:	89 d0                	mov    %edx,%eax
 8203e03:	01 c0                	add    %eax,%eax
 8203e05:	01 d0                	add    %edx,%eax
 8203e07:	c1 e0 02             	shl    $0x2,%eax
 8203e0a:	01 d0                	add    %edx,%eax
 8203e0c:	05 40 01 00 00       	add    $0x140,%eax
 8203e11:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203e14:	83 c0 0c             	add    $0xc,%eax
 8203e17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203e1b:	8b 45 10             	mov    0x10(%ebp),%eax
 8203e1e:	89 04 24             	mov    %eax,(%esp)
 8203e21:	e8 4a 91 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8203e26:	83 f0 01             	xor    $0x1,%eax
 8203e29:	84 c0                	test   %al,%al
 8203e2b:	74 2b                	je     8203e58 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x5e0>
 8203e2d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203e34:	00 
 8203e35:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203e3c:	00 
 8203e3d:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203e44:	08 
 8203e45:	c7 04 24 2e 9b 00 00 	movl   $0x9b2e,(%esp)
 8203e4c:	e8 86 ca 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203e51:	89 c3                	mov    %eax,%ebx
 8203e53:	e9 3b 03 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203e58:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8203e5b:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203e61:	89 d0                	mov    %edx,%eax
 8203e63:	01 c0                	add    %eax,%eax
 8203e65:	01 d0                	add    %edx,%eax
 8203e67:	c1 e0 02             	shl    $0x2,%eax
 8203e6a:	01 d0                	add    %edx,%eax
 8203e6c:	05 40 01 00 00       	add    $0x140,%eax
 8203e71:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203e74:	83 c0 0d             	add    $0xd,%eax
 8203e77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203e7b:	8b 45 10             	mov    0x10(%ebp),%eax
 8203e7e:	89 04 24             	mov    %eax,(%esp)
 8203e81:	e8 ba 93 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8203e86:	83 f0 01             	xor    $0x1,%eax
 8203e89:	84 c0                	test   %al,%al
 8203e8b:	74 2b                	je     8203eb8 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x640>
 8203e8d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203e94:	00 
 8203e95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203e9c:	00 
 8203e9d:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203ea4:	08 
 8203ea5:	c7 04 24 36 9b 00 00 	movl   $0x9b36,(%esp)
 8203eac:	e8 26 ca 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203eb1:	89 c3                	mov    %eax,%ebx
 8203eb3:	e9 db 02 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203eb8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8203ebb:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203ec1:	89 d0                	mov    %edx,%eax
 8203ec3:	01 c0                	add    %eax,%eax
 8203ec5:	01 d0                	add    %edx,%eax
 8203ec7:	c1 e0 02             	shl    $0x2,%eax
 8203eca:	01 d0                	add    %edx,%eax
 8203ecc:	05 40 01 00 00       	add    $0x140,%eax
 8203ed1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203ed4:	83 c0 11             	add    $0x11,%eax
 8203ed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203edb:	8b 45 10             	mov    0x10(%ebp),%eax
 8203ede:	89 04 24             	mov    %eax,(%esp)
 8203ee1:	e8 5a 93 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8203ee6:	83 f0 01             	xor    $0x1,%eax
 8203ee9:	84 c0                	test   %al,%al
 8203eeb:	74 2b                	je     8203f18 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x6a0>
 8203eed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203ef4:	00 
 8203ef5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203efc:	00 
 8203efd:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203f04:	08 
 8203f05:	c7 04 24 3e 9b 00 00 	movl   $0x9b3e,(%esp)
 8203f0c:	e8 c6 c9 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203f11:	89 c3                	mov    %eax,%ebx
 8203f13:	e9 7b 02 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203f18:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8203f1b:	8d 8d 30 fe ff ff    	lea    -0x1d0(%ebp),%ecx
 8203f21:	89 d0                	mov    %edx,%eax
 8203f23:	01 c0                	add    %eax,%eax
 8203f25:	01 d0                	add    %edx,%eax
 8203f27:	c1 e0 02             	shl    $0x2,%eax
 8203f2a:	01 d0                	add    %edx,%eax
 8203f2c:	05 40 01 00 00       	add    $0x140,%eax
 8203f31:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8203f34:	83 c0 15             	add    $0x15,%eax
 8203f37:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8203f3e:	00 
 8203f3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203f43:	8b 45 10             	mov    0x10(%ebp),%eax
 8203f46:	89 04 24             	mov    %eax,(%esp)
 8203f49:	e8 64 94 38 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8203f4e:	83 f0 01             	xor    $0x1,%eax
 8203f51:	84 c0                	test   %al,%al
 8203f53:	74 2b                	je     8203f80 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x708>
 8203f55:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203f5c:	00 
 8203f5d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203f64:	00 
 8203f65:	c7 44 24 04 20 f1 bc 	movl   $0x8bcf120,0x4(%esp)
 8203f6c:	08 
 8203f6d:	c7 04 24 47 9b 00 00 	movl   $0x9b47,(%esp)
 8203f74:	e8 5e c9 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203f79:	89 c3                	mov    %eax,%ebx
 8203f7b:	e9 13 02 00 00       	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8203f80:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8203f84:	0f b7 85 7a ff ff ff 	movzwl -0x86(%ebp),%eax
 8203f8b:	0f b7 c0             	movzwl %ax,%eax
 8203f8e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8203f91:	0f 9f c0             	setg   %al
 8203f94:	84 c0                	test   %al,%al
 8203f96:	0f 85 5c fe ff ff    	jne    8203df8 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x580>
 8203f9c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8203fa1:	c7 44 24 08 4e 9b 00 	movl   $0x9b4e,0x8(%esp)
 8203fa8:	00 
 8203fa9:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8203fb0:	08 
 8203fb1:	89 04 24             	mov    %eax,(%esp)
 8203fb4:	e8 cd ba 08 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8203fb9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8203fc0:	00 
 8203fc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203fc5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8203fc8:	89 04 24             	mov    %eax,(%esp)
 8203fcb:	e8 56 4c ec ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8203fd0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8203fd3:	89 04 24             	mov    %eax,(%esp)
 8203fd6:	e8 6b 4c ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8203fdb:	c7 44 24 04 8e 00 00 	movl   $0x8e,0x4(%esp)
 8203fe2:	00 
 8203fe3:	89 04 24             	mov    %eax,(%esp)
 8203fe6:	e8 6b 4c ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8203feb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8203fee:	89 04 24             	mov    %eax,(%esp)
 8203ff1:	e8 50 4c ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8203ff6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8203ffd:	ff 
 8203ffe:	89 04 24             	mov    %eax,(%esp)
 8204001:	e8 50 4c ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8204006:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8204009:	89 04 24             	mov    %eax,(%esp)
 820400c:	e8 3d 4c ec ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8204011:	89 04 24             	mov    %eax,(%esp)
 8204014:	e8 19 39 03 00       	call   8237932 <_ZN12CStreamGuard11GetInBufferI16SIG_PARTY_STATUSEEPT_v>
 8204019:	89 45 ec             	mov    %eax,-0x14(%ebp)
 820401c:	c7 44 24 08 c8 01 00 	movl   $0x1c8,0x8(%esp)
 8204023:	00 
 8204024:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820402b:	00 
 820402c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820402f:	89 04 24             	mov    %eax,(%esp)
 8204032:	e8 89 9c e7 ff       	call   807dcc0 <memset@plt>
 8204037:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820403a:	8b 55 0c             	mov    0xc(%ebp),%edx
 820403d:	81 c2 e0 00 00 00    	add    $0xe0,%edx
 8204043:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 820404a:	00 
 820404b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820404f:	89 14 24             	mov    %edx,(%esp)
 8204052:	e8 d7 e7 f5 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8204057:	8b 45 0c             	mov    0xc(%ebp),%eax
 820405a:	89 04 24             	mov    %eax,(%esp)
 820405d:	e8 0c 63 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8204062:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8204065:	89 42 10             	mov    %eax,0x10(%edx)
 8204068:	8b 45 0c             	mov    0xc(%ebp),%eax
 820406b:	05 e0 00 00 00       	add    $0xe0,%eax
 8204070:	89 04 24             	mov    %eax,(%esp)
 8204073:	e8 68 2d 03 00       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 8204078:	0f be d0             	movsbl %al,%edx
 820407b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820407e:	89 50 14             	mov    %edx,0x14(%eax)
 8204081:	8b 95 3e fe ff ff    	mov    -0x1c2(%ebp),%edx
 8204087:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820408a:	89 50 18             	mov    %edx,0x18(%eax)
 820408d:	8b 95 42 fe ff ff    	mov    -0x1be(%ebp),%edx
 8204093:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8204096:	89 50 1c             	mov    %edx,0x1c(%eax)
 8204099:	0f b6 95 46 fe ff ff 	movzbl -0x1ba(%ebp),%edx
 82040a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82040a3:	88 50 20             	mov    %dl,0x20(%eax)
 82040a6:	0f b6 95 47 fe ff ff 	movzbl -0x1b9(%ebp),%edx
 82040ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82040b0:	88 50 21             	mov    %dl,0x21(%eax)
 82040b3:	8b 95 48 fe ff ff    	mov    -0x1b8(%ebp),%edx
 82040b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82040bc:	89 50 22             	mov    %edx,0x22(%eax)
 82040bf:	0f b7 95 4c fe ff ff 	movzwl -0x1b4(%ebp),%edx
 82040c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82040c9:	66 89 50 26          	mov    %dx,0x26(%eax)
 82040cd:	0f b7 85 4c fe ff ff 	movzwl -0x1b4(%ebp),%eax
 82040d4:	0f b7 d0             	movzwl %ax,%edx
 82040d7:	89 d0                	mov    %edx,%eax
 82040d9:	c1 e0 02             	shl    $0x2,%eax
 82040dc:	01 d0                	add    %edx,%eax
 82040de:	01 c0                	add    %eax,%eax
 82040e0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 82040e3:	83 c2 28             	add    $0x28,%edx
 82040e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 82040ea:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 82040f0:	83 c0 1e             	add    $0x1e,%eax
 82040f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82040f7:	89 14 24             	mov    %edx,(%esp)
 82040fa:	e8 a1 97 e7 ff       	call   807d8a0 <memcpy@plt>
 82040ff:	0f b7 95 7a ff ff ff 	movzwl -0x86(%ebp),%edx
 8204106:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8204109:	66 89 90 5e 01 00 00 	mov    %dx,0x15e(%eax)
 8204110:	0f b7 85 7a ff ff ff 	movzwl -0x86(%ebp),%eax
 8204117:	0f b7 d0             	movzwl %ax,%edx
 820411a:	89 d0                	mov    %edx,%eax
 820411c:	01 c0                	add    %eax,%eax
 820411e:	01 d0                	add    %edx,%eax
 8204120:	c1 e0 02             	shl    $0x2,%eax
 8204123:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8204126:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8204129:	05 60 01 00 00       	add    $0x160,%eax
 820412e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8204132:	8d 95 30 fe ff ff    	lea    -0x1d0(%ebp),%edx
 8204138:	81 c2 4c 01 00 00    	add    $0x14c,%edx
 820413e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8204142:	89 04 24             	mov    %eax,(%esp)
 8204145:	e8 56 97 e7 ff       	call   807d8a0 <memcpy@plt>
 820414a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 820414f:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8204152:	89 54 24 08          	mov    %edx,0x8(%esp)
 8204156:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 820415d:	00 
 820415e:	89 04 24             	mov    %eax,(%esp)
 8204161:	e8 78 ce 36 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8204166:	bb 00 00 00 00       	mov    $0x0,%ebx
 820416b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820416e:	89 04 24             	mov    %eax,(%esp)
 8204171:	e8 5c 87 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8204176:	eb 1b                	jmp    8204193 <_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf+0x91b>
 8204178:	89 d3                	mov    %edx,%ebx
 820417a:	89 c6                	mov    %eax,%esi
 820417c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820417f:	89 04 24             	mov    %eax,(%esp)
 8204182:	e8 4b 87 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8204187:	89 f0                	mov    %esi,%eax
 8204189:	89 da                	mov    %ebx,%edx
 820418b:	89 04 24             	mov    %eax,(%esp)
 820418e:	e8 bd f5 8d 00       	call   8ae3750 <_Unwind_Resume>
 8204193:	89 d8                	mov    %ebx,%eax
 8204195:	81 c4 f0 01 00 00    	add    $0x1f0,%esp
 820419b:	5b                   	pop    %ebx
 820419c:	5e                   	pop    %esi
 820419d:	5d                   	pop    %ebp
 820419e:	c3                   	ret
 820419f:	90                   	nop

```

```c
// Dispatcher_GatheringPartyStatus::dispatch_sig @ 0x8203878

/* Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_GatheringPartyStatus::dispatch_sig
          (Dispatcher_GatheringPartyStatus *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined1 local_1d4 [13];
  uchar uStack_1c7;
  int local_1c6;
  int local_1c2;
  SIG_PARTY_STATUS local_1be;
  SIG_PARTY_STATUS local_1bd;
  uint local_1bc;
  ushort local_1b8;
  uchar auStack_1b6 [6];
  uint auStack_1b0 [73];
  ushort local_8a;
  uchar uStack_88;
  uint auStack_87 [2];
  char acStack_7f [95];
  CStreamGuard local_20 [8];
  SIG_PARTY_STATUS *local_18;
  int local_14;
  int local_10;
  
  memset(local_1d4,0,0x1b4);
  cVar1 = PacketBuf::get_byte(param_2,&uStack_1c7);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_2,&local_1c6);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_1c2);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,(uchar *)&local_1be);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_2,(uchar *)&local_1bd);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&local_1bc);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&local_1b8);
              if (cVar1 == '\x01') {
                if (local_1b8 < 0x1f) {
                  if (local_1b8 != 0) {
                    for (local_14 = 0; local_14 < (int)(uint)local_1b8; local_14 = local_14 + 1) {
                      cVar1 = PacketBuf::get_byte(param_2,auStack_1b6 + local_14 * 10);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b09,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_byte(param_2,auStack_1b6 + local_14 * 10 + 1);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b0a,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_binary
                                        (param_2,(char *)(auStack_1b6 + local_14 * 10 + 2),4);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b0b,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_1b0 + local_14 * 10))
                      ;
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b0c,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                    }
                  }
                  cVar1 = PacketBuf::get_short(param_2,&local_8a);
                  if (cVar1 == '\x01') {
                    this_00 = (GameWorld *)G_GameWorld();
                    cVar1 = GameWorld::IsPVPChannel(this_00);
                    if (cVar1 == '\0') {
                      if (4 < local_8a) {
                        LogManager::logFormat
                                  (1,"PacketDispatcher_Impl_1.cpp",
                                   "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x9b24,"recv_pk_party_status.party_num > PARTY_PLAYER_MAX\n");
                        uVar2 = LineFunc(0x9b25,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                    }
                    else if (8 < local_8a) {
                      LogManager::logFormat
                                (1,"PacketDispatcher_Impl_1.cpp",
                                 "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x9b1c,"recv_pk_party_status.party_num > MAX_PVP_MEM\n");
                      uVar2 = LineFunc(0x9b1d,
                                       "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar2;
                    }
                    for (local_10 = 0; local_10 < (int)(uint)local_8a; local_10 = local_10 + 1) {
                      cVar1 = PacketBuf::get_byte(param_2,&uStack_88 + local_10 * 0xd);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b2e,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_87 + local_10 * 0xd))
                      ;
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b36,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_87 +
                                                                 local_10 * 0xd + 4));
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b3e,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_binary(param_2,acStack_7f + local_10 * 0xd,4);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b47,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                    }
                    pSVar3 = (Stream *)
                             StreamPool::Acquire(GlobalData::s_stream_pool,
                                                 "PacketDispatcher_Impl_1.cpp",0x9b4e);
                    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
                    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08203fe6 to 08204165 has its CatchHandler @ 08204178 */
                    CStreamGuard::operator<<(pCVar4,0x8e);
                    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    CStreamGuard::operator<<(pCVar4,-1);
                    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
                    local_18 = CStreamGuard::GetInBuffer<SIG_PARTY_STATUS>(pCVar4);
                    memset(local_18,0,0x1c8);
                    CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char *)local_18,0x10);
                    uVar2 = CUser::get_acc_id(param_1);
                    *(undefined4 *)(local_18 + 0x10) = uVar2;
                    cVar1 = CNetwork<4096,450000>::get_nat_type
                                      ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                    *(int *)(local_18 + 0x14) = (int)cVar1;
                    *(int *)(local_18 + 0x18) = local_1c6;
                    *(int *)(local_18 + 0x1c) = local_1c2;
                    local_18[0x20] = local_1be;
                    local_18[0x21] = local_1bd;
                    *(uint *)(local_18 + 0x22) = local_1bc;
                    *(ushort *)(local_18 + 0x26) = local_1b8;
                    memcpy(local_18 + 0x28,auStack_1b6,(uint)local_1b8 * 10);
                    *(ushort *)(local_18 + 0x15e) = local_8a;
                    memcpy(local_18 + 0x160,&uStack_88,(uint)local_8a * 0xd);
                    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_20);
                    uVar2 = 0;
                    CStreamGuard::~CStreamGuard(local_20);
                  }
                  else {
                    uVar2 = LineFunc(0x9b12,
                                     "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  LogManager::logFormat
                            (1,"PacketDispatcher_Impl_1.cpp",
                             "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                             ,0x9aff,"recv_pk_party_status.try_num > %d\n",0x1e);
                  uVar2 = LineFunc(0x9b00,
                                   "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0x9afa,
                                 "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x9af8,
                               "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x9af6,
                             "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x9af4,
                           "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x9af2,
                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x9aef,
                       "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x9aeb,
                     "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}

```

