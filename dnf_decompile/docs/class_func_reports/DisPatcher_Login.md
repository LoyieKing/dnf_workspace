# DisPatcher_Login

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081e8c78 DisPatcher_Login::dispatch_sig  [0x081e8c78-0x81e9e83] ===
 81e8c78:	55                   	push   %ebp
 81e8c79:	89 e5                	mov    %esp,%ebp
 81e8c7b:	56                   	push   %esi
 81e8c7c:	53                   	push   %ebx
 81e8c7d:	81 ec c0 01 00 00    	sub    $0x1c0,%esp
 81e8c83:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8c86:	89 04 24             	mov    %eax,(%esp)
 81e8c89:	e8 fe 16 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e8c8e:	83 f8 01             	cmp    $0x1,%eax
 81e8c91:	0f 95 c0             	setne  %al
 81e8c94:	84 c0                	test   %al,%al
 81e8c96:	0f 84 a3 00 00 00    	je     81e8d3f <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xc7>
 81e8c9c:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81e8ca2:	89 04 24             	mov    %eax,(%esp)
 81e8ca5:	e8 a2 50 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e8caa:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81e8cb1:	00 
 81e8cb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8cb9:	00 
 81e8cba:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81e8cc0:	89 04 24             	mov    %eax,(%esp)
 81e8cc3:	e8 34 2c ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e8cc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8ccf:	00 
 81e8cd0:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81e8cd6:	89 04 24             	mov    %eax,(%esp)
 81e8cd9:	e8 42 2c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e8cde:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8ce5:	00 
 81e8ce6:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81e8cec:	89 04 24             	mov    %eax,(%esp)
 81e8cef:	e8 64 2c ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e8cf4:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81e8cfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8cfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8d01:	89 04 24             	mov    %eax,(%esp)
 81e8d04:	e8 b1 f8 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e8d09:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e8d0e:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81e8d14:	89 04 24             	mov    %eax,(%esp)
 81e8d17:	e8 64 51 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8d1c:	e9 56 11 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e8d21:	89 d3                	mov    %edx,%ebx
 81e8d23:	89 c6                	mov    %eax,%esi
 81e8d25:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 81e8d2b:	89 04 24             	mov    %eax,(%esp)
 81e8d2e:	e8 4d 51 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8d33:	89 f0                	mov    %esi,%eax
 81e8d35:	89 da                	mov    %ebx,%edx
 81e8d37:	89 04 24             	mov    %eax,(%esp)
 81e8d3a:	e8 11 aa 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e8d3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8d42:	89 04 24             	mov    %eax,(%esp)
 81e8d45:	e8 fc 74 04 00       	call   8230246 <_ZN5CUser11OnRecvEventEv>
 81e8d4a:	e8 58 16 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e8d4f:	89 04 24             	mov    %eax,(%esp)
 81e8d52:	e8 c9 dd f2 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 81e8d57:	83 f8 06             	cmp    $0x6,%eax
 81e8d5a:	0f 94 c0             	sete   %al
 81e8d5d:	84 c0                	test   %al,%al
 81e8d5f:	0f 84 46 01 00 00    	je     81e8eab <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x233>
 81e8d65:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8d6a:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 81e8d71:	00 
 81e8d72:	89 04 24             	mov    %eax,(%esp)
 81e8d75:	e8 1e cc f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8d7a:	8b 10                	mov    (%eax),%edx
 81e8d7c:	83 c2 34             	add    $0x34,%edx
 81e8d7f:	8b 12                	mov    (%edx),%edx
 81e8d81:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8d88:	00 
 81e8d89:	89 04 24             	mov    %eax,(%esp)
 81e8d8c:	ff d2                	call   *%edx
 81e8d8e:	83 f0 01             	xor    $0x1,%eax
 81e8d91:	84 c0                	test   %al,%al
 81e8d93:	0f 84 12 01 00 00    	je     81e8eab <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x233>
 81e8d99:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8d9f:	89 04 24             	mov    %eax,(%esp)
 81e8da2:	e8 a5 4f 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e8da7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e8dae:	00 
 81e8daf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8db6:	00 
 81e8db7:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8dbd:	89 04 24             	mov    %eax,(%esp)
 81e8dc0:	e8 37 2b ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e8dc5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8dcc:	00 
 81e8dcd:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8dd3:	89 04 24             	mov    %eax,(%esp)
 81e8dd6:	e8 45 2b ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e8ddb:	c7 44 24 04 42 00 00 	movl   $0x42,0x4(%esp)
 81e8de2:	00 
 81e8de3:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8de9:	89 04 24             	mov    %eax,(%esp)
 81e8dec:	e8 2f 2b ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e8df1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8df8:	00 
 81e8df9:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8dff:	89 04 24             	mov    %eax,(%esp)
 81e8e02:	e8 51 2b ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e8e07:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8e0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8e11:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8e14:	89 04 24             	mov    %eax,(%esp)
 81e8e17:	e8 9e f7 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e8e1c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e8e23:	00 
 81e8e24:	c7 44 24 08 f4 65 00 	movl   $0x65f4,0x8(%esp)
 81e8e2b:	00 
 81e8e2c:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e8e33:	08 
 81e8e34:	8d 45 80             	lea    -0x80(%ebp),%eax
 81e8e37:	89 04 24             	mov    %eax,(%esp)
 81e8e3a:	e8 d9 68 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e8e3f:	c7 44 24 04 20 1e bc 	movl   $0x8bc1e20,0x4(%esp)
 81e8e46:	08 
 81e8e47:	8d 45 80             	lea    -0x80(%ebp),%eax
 81e8e4a:	89 04 24             	mov    %eax,(%esp)
 81e8e4d:	e8 36 69 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e8e52:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e8e59:	00 
 81e8e5a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e8e61:	00 
 81e8e62:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 81e8e69:	00 
 81e8e6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8e6d:	89 04 24             	mov    %eax,(%esp)
 81e8e70:	e8 7f fb 45 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 81e8e75:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e8e7a:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8e80:	89 04 24             	mov    %eax,(%esp)
 81e8e83:	e8 f8 4f 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8e88:	e9 ea 0f 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e8e8d:	89 d3                	mov    %edx,%ebx
 81e8e8f:	89 c6                	mov    %eax,%esi
 81e8e91:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81e8e97:	89 04 24             	mov    %eax,(%esp)
 81e8e9a:	e8 e1 4f 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8e9f:	89 f0                	mov    %esi,%eax
 81e8ea1:	89 da                	mov    %ebx,%edx
 81e8ea3:	89 04 24             	mov    %eax,(%esp)
 81e8ea6:	e8 a5 a8 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e8eab:	c7 44 24 08 bf 00 00 	movl   $0xbf,0x8(%esp)
 81e8eb2:	00 
 81e8eb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8eba:	00 
 81e8ebb:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e8ec1:	89 04 24             	mov    %eax,(%esp)
 81e8ec4:	e8 f7 4d e9 ff       	call   807dcc0 <memset@plt>
 81e8ec9:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 81e8ed0:	00 00 00 
 81e8ed3:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 81e8ed9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8edd:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8ee0:	89 04 24             	mov    %eax,(%esp)
 81e8ee3:	e8 58 43 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e8ee8:	83 f0 01             	xor    $0x1,%eax
 81e8eeb:	84 c0                	test   %al,%al
 81e8eed:	74 2b                	je     81e8f1a <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x2a2>
 81e8eef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e8ef6:	00 
 81e8ef7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e8efe:	00 
 81e8eff:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e8f06:	08 
 81e8f07:	c7 04 24 01 66 00 00 	movl   $0x6601,(%esp)
 81e8f0e:	e8 c4 79 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e8f13:	89 c3                	mov    %eax,%ebx
 81e8f15:	e9 5d 0f 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e8f1a:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 81e8f20:	3d 10 0e 00 00       	cmp    $0xe10,%eax
 81e8f25:	76 73                	jbe    81e8f9a <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x322>
 81e8f27:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 81e8f2d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81e8f34:	00 
 81e8f35:	c7 44 24 08 05 66 00 	movl   $0x6605,0x8(%esp)
 81e8f3c:	00 
 81e8f3d:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e8f44:	08 
 81e8f45:	8d 45 90             	lea    -0x70(%ebp),%eax
 81e8f48:	89 04 24             	mov    %eax,(%esp)
 81e8f4b:	e8 c8 67 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e8f50:	c7 44 24 0c 10 0e 00 	movl   $0xe10,0xc(%esp)
 81e8f57:	00 
 81e8f58:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e8f5c:	c7 44 24 04 44 1e bc 	movl   $0x8bc1e44,0x4(%esp)
 81e8f63:	08 
 81e8f64:	8d 45 90             	lea    -0x70(%ebp),%eax
 81e8f67:	89 04 24             	mov    %eax,(%esp)
 81e8f6a:	e8 19 68 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e8f6f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e8f76:	00 
 81e8f77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e8f7e:	00 
 81e8f7f:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e8f86:	08 
 81e8f87:	c7 04 24 07 66 00 00 	movl   $0x6607,(%esp)
 81e8f8e:	e8 44 79 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e8f93:	89 c3                	mov    %eax,%ebx
 81e8f95:	e9 dd 0e 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e8f9a:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
 81e8fa1:	00 00 00 
 81e8fa4:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 81e8faa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8fae:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8fb1:	89 04 24             	mov    %eax,(%esp)
 81e8fb4:	e8 87 42 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e8fb9:	83 f0 01             	xor    $0x1,%eax
 81e8fbc:	84 c0                	test   %al,%al
 81e8fbe:	74 2b                	je     81e8feb <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x373>
 81e8fc0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e8fc7:	00 
 81e8fc8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e8fcf:	00 
 81e8fd0:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e8fd7:	08 
 81e8fd8:	c7 04 24 0d 66 00 00 	movl   $0x660d,(%esp)
 81e8fdf:	e8 f3 78 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e8fe4:	89 c3                	mov    %eax,%ebx
 81e8fe6:	e9 8c 0e 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e8feb:	c7 44 24 08 01 08 00 	movl   $0x801,0x8(%esp)
 81e8ff2:	00 
 81e8ff3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8ffa:	00 
 81e8ffb:	c7 04 24 e0 a2 40 09 	movl   $0x940a2e0,(%esp)
 81e9002:	e8 b9 4c e9 ff       	call   807dcc0 <memset@plt>
 81e9007:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81e900d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e9011:	c7 44 24 08 01 08 00 	movl   $0x801,0x8(%esp)
 81e9018:	00 
 81e9019:	c7 44 24 04 e0 a2 40 	movl   $0x940a2e0,0x4(%esp)
 81e9020:	09 
 81e9021:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9024:	89 04 24             	mov    %eax,(%esp)
 81e9027:	e8 90 42 3a 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81e902c:	83 f0 01             	xor    $0x1,%eax
 81e902f:	84 c0                	test   %al,%al
 81e9031:	74 2b                	je     81e905e <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x3e6>
 81e9033:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e903a:	00 
 81e903b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9042:	00 
 81e9043:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e904a:	08 
 81e904b:	c7 04 24 12 66 00 00 	movl   $0x6612,(%esp)
 81e9052:	e8 80 78 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9057:	89 c3                	mov    %eax,%ebx
 81e9059:	e9 19 0e 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e905e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9061:	89 04 24             	mov    %eax,(%esp)
 81e9064:	e8 b5 5d f8 ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 81e9069:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 81e906f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e9073:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e9077:	c7 04 24 e0 a2 40 09 	movl   $0x940a2e0,(%esp)
 81e907e:	e8 6f a1 f8 ff       	call   81731f2 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE>
 81e9083:	85 c0                	test   %eax,%eax
 81e9085:	0f 95 c0             	setne  %al
 81e9088:	84 c0                	test   %al,%al
 81e908a:	74 69                	je     81e90f5 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x47d>
 81e908c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81e9093:	00 
 81e9094:	c7 44 24 08 17 66 00 	movl   $0x6617,0x8(%esp)
 81e909b:	00 
 81e909c:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e90a3:	08 
 81e90a4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81e90a7:	89 04 24             	mov    %eax,(%esp)
 81e90aa:	e8 69 66 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e90af:	c7 44 24 08 e0 a2 40 	movl   $0x940a2e0,0x8(%esp)
 81e90b6:	09 
 81e90b7:	c7 44 24 04 7c 1e bc 	movl   $0x8bc1e7c,0x4(%esp)
 81e90be:	08 
 81e90bf:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81e90c2:	89 04 24             	mov    %eax,(%esp)
 81e90c5:	e8 be 66 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e90ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e90d1:	00 
 81e90d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e90d9:	00 
 81e90da:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e90e1:	08 
 81e90e2:	c7 04 24 18 66 00 00 	movl   $0x6618,(%esp)
 81e90e9:	e8 e9 77 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e90ee:	89 c3                	mov    %eax,%ebx
 81e90f0:	e9 82 0d 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e90f5:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 81e90fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e90fe:	89 04 24             	mov    %eax,(%esp)
 81e9101:	e8 18 5d f8 ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 81e9106:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e910a:	89 04 24             	mov    %eax,(%esp)
 81e910d:	e8 22 9f f8 ff       	call   8173034 <_ZN6Taiwan14GarenaAuthData12setPatchTimeEj>
 81e9112:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81e9119:	e8 80 2b ee ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81e911e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e9121:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9124:	89 04 24             	mov    %eax,(%esp)
 81e9127:	e8 f2 5c f8 ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 81e912c:	89 04 24             	mov    %eax,(%esp)
 81e912f:	e8 0e 9f f8 ff       	call   8173042 <_ZN6Taiwan14GarenaAuthData12getPatchTimeEv>
 81e9134:	89 c6                	mov    %eax,%esi
 81e9136:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9139:	89 04 24             	mov    %eax,(%esp)
 81e913c:	e8 dd 5c f8 ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 81e9141:	89 04 24             	mov    %eax,(%esp)
 81e9144:	e8 a1 9e f8 ff       	call   8172fea <_ZN6Taiwan14GarenaAuthData12getTimeStampEv>
 81e9149:	89 c3                	mov    %eax,%ebx
 81e914b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9152:	00 
 81e9153:	c7 44 24 08 1e 66 00 	movl   $0x661e,0x8(%esp)
 81e915a:	00 
 81e915b:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9162:	08 
 81e9163:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81e9166:	89 04 24             	mov    %eax,(%esp)
 81e9169:	e8 aa 65 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e916e:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e9172:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e9175:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e9179:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e917d:	c7 44 24 04 9c 1e bc 	movl   $0x8bc1e9c,0x4(%esp)
 81e9184:	08 
 81e9185:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81e9188:	89 04 24             	mov    %eax,(%esp)
 81e918b:	e8 f8 65 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e9190:	e8 51 94 f7 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81e9195:	c7 44 24 0c 21 00 00 	movl   $0x21,0xc(%esp)
 81e919c:	00 
 81e919d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e91a4:	00 
 81e91a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e91a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e91ac:	89 04 24             	mov    %eax,(%esp)
 81e91af:	e8 04 55 f8 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81e91b4:	84 c0                	test   %al,%al
 81e91b6:	74 25                	je     81e91dd <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x565>
 81e91b8:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 81e91bf:	00 
 81e91c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e91c7:	00 
 81e91c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e91cb:	89 04 24             	mov    %eax,(%esp)
 81e91ce:	e8 6f 2d 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e91d3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e91d8:	e9 9a 0c 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e91dd:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e91e3:	83 c0 0d             	add    $0xd,%eax
 81e91e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e91ea:	8b 45 10             	mov    0x10(%ebp),%eax
 81e91ed:	89 04 24             	mov    %eax,(%esp)
 81e91f0:	e8 4b 40 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e91f5:	83 f0 01             	xor    $0x1,%eax
 81e91f8:	84 c0                	test   %al,%al
 81e91fa:	74 2b                	je     81e9227 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x5af>
 81e91fc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9203:	00 
 81e9204:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e920b:	00 
 81e920c:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9213:	08 
 81e9214:	c7 04 24 5f 66 00 00 	movl   $0x665f,(%esp)
 81e921b:	e8 b7 76 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9220:	89 c3                	mov    %eax,%ebx
 81e9222:	e9 50 0c 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9227:	8b 85 66 fe ff ff    	mov    -0x19a(%ebp),%eax
 81e922d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e9231:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81e9238:	00 
 81e9239:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e923f:	83 c0 11             	add    $0x11,%eax
 81e9242:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9246:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9249:	89 04 24             	mov    %eax,(%esp)
 81e924c:	e8 6b 40 3a 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81e9251:	83 f0 01             	xor    $0x1,%eax
 81e9254:	84 c0                	test   %al,%al
 81e9256:	74 2b                	je     81e9283 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x60b>
 81e9258:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e925f:	00 
 81e9260:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9267:	00 
 81e9268:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e926f:	08 
 81e9270:	c7 04 24 7d 66 00 00 	movl   $0x667d,(%esp)
 81e9277:	e8 5b 76 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e927c:	89 c3                	mov    %eax,%ebx
 81e927e:	e9 f4 0b 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9283:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e9289:	83 c0 29             	add    $0x29,%eax
 81e928c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9290:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9293:	89 04 24             	mov    %eax,(%esp)
 81e9296:	e8 a5 3f 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e929b:	83 f0 01             	xor    $0x1,%eax
 81e929e:	84 c0                	test   %al,%al
 81e92a0:	74 2b                	je     81e92cd <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x655>
 81e92a2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e92a9:	00 
 81e92aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e92b1:	00 
 81e92b2:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e92b9:	08 
 81e92ba:	c7 04 24 92 66 00 00 	movl   $0x6692,(%esp)
 81e92c1:	e8 11 76 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e92c6:	89 c3                	mov    %eax,%ebx
 81e92c8:	e9 aa 0b 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e92cd:	8b 85 82 fe ff ff    	mov    -0x17e(%ebp),%eax
 81e92d3:	3d 83 00 00 00       	cmp    $0x83,%eax
 81e92d8:	76 2b                	jbe    81e9305 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x68d>
 81e92da:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e92e1:	00 
 81e92e2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e92e9:	00 
 81e92ea:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e92f1:	08 
 81e92f2:	c7 04 24 98 66 00 00 	movl   $0x6698,(%esp)
 81e92f9:	e8 d9 75 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e92fe:	89 c3                	mov    %eax,%ebx
 81e9300:	e9 72 0b 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9305:	8b 85 82 fe ff ff    	mov    -0x17e(%ebp),%eax
 81e930b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e930f:	c7 44 24 08 84 00 00 	movl   $0x84,0x8(%esp)
 81e9316:	00 
 81e9317:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e931d:	83 c0 2d             	add    $0x2d,%eax
 81e9320:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9324:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9327:	89 04 24             	mov    %eax,(%esp)
 81e932a:	e8 8d 3f 3a 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81e932f:	83 f0 01             	xor    $0x1,%eax
 81e9332:	84 c0                	test   %al,%al
 81e9334:	74 2b                	je     81e9361 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x6e9>
 81e9336:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e933d:	00 
 81e933e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9345:	00 
 81e9346:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e934d:	08 
 81e934e:	c7 04 24 a8 66 00 00 	movl   $0x66a8,(%esp)
 81e9355:	e8 7d 75 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e935a:	89 c3                	mov    %eax,%ebx
 81e935c:	e9 16 0b 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9361:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e9367:	05 b1 00 00 00       	add    $0xb1,%eax
 81e936c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9370:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9373:	89 04 24             	mov    %eax,(%esp)
 81e9376:	e8 f5 3b 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e937b:	83 f0 01             	xor    $0x1,%eax
 81e937e:	84 c0                	test   %al,%al
 81e9380:	74 2b                	je     81e93ad <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x735>
 81e9382:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9389:	00 
 81e938a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9391:	00 
 81e9392:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9399:	08 
 81e939a:	c7 04 24 34 67 00 00 	movl   $0x6734,(%esp)
 81e93a1:	e8 31 75 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e93a6:	89 c3                	mov    %eax,%ebx
 81e93a8:	e9 ca 0a 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e93ad:	0f b6 85 0a ff ff ff 	movzbl -0xf6(%ebp),%eax
 81e93b4:	84 c0                	test   %al,%al
 81e93b6:	74 48                	je     81e9400 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x788>
 81e93b8:	0f b6 85 0a ff ff ff 	movzbl -0xf6(%ebp),%eax
 81e93bf:	3c 01                	cmp    $0x1,%al
 81e93c1:	74 3d                	je     81e9400 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x788>
 81e93c3:	0f b6 85 0a ff ff ff 	movzbl -0xf6(%ebp),%eax
 81e93ca:	3c 02                	cmp    $0x2,%al
 81e93cc:	74 32                	je     81e9400 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x788>
 81e93ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e93d1:	89 04 24             	mov    %eax,(%esp)
 81e93d4:	e8 95 0f ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e93d9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e93dd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e93e4:	00 
 81e93e5:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e93ec:	08 
 81e93ed:	c7 04 24 38 67 00 00 	movl   $0x6738,(%esp)
 81e93f4:	e8 de 74 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e93f9:	89 c3                	mov    %eax,%ebx
 81e93fb:	e9 77 0a 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9400:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 81e9407:	00 00 00 
 81e940a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81e9410:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9414:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9417:	89 04 24             	mov    %eax,(%esp)
 81e941a:	e8 d1 3c 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e941f:	83 f0 01             	xor    $0x1,%eax
 81e9422:	84 c0                	test   %al,%al
 81e9424:	74 32                	je     81e9458 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x7e0>
 81e9426:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9429:	89 04 24             	mov    %eax,(%esp)
 81e942c:	e8 3d 0f ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e9431:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e9435:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e943c:	00 
 81e943d:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9444:	08 
 81e9445:	c7 04 24 3f 67 00 00 	movl   $0x673f,(%esp)
 81e944c:	e8 86 74 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9451:	89 c3                	mov    %eax,%ebx
 81e9453:	e9 1f 0a 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9458:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81e945e:	83 f8 08             	cmp    $0x8,%eax
 81e9461:	74 32                	je     81e9495 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x81d>
 81e9463:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9466:	89 04 24             	mov    %eax,(%esp)
 81e9469:	e8 00 0f ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e946e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e9472:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9479:	00 
 81e947a:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9481:	08 
 81e9482:	c7 04 24 41 67 00 00 	movl   $0x6741,(%esp)
 81e9489:	e8 49 74 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e948e:	89 c3                	mov    %eax,%ebx
 81e9490:	e9 e2 09 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9495:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81e949c:	00 
 81e949d:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e94a3:	05 b6 00 00 00       	add    $0xb6,%eax
 81e94a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e94ac:	8b 45 10             	mov    0x10(%ebp),%eax
 81e94af:	89 04 24             	mov    %eax,(%esp)
 81e94b2:	e8 fb 3e 3a 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81e94b7:	83 f0 01             	xor    $0x1,%eax
 81e94ba:	84 c0                	test   %al,%al
 81e94bc:	74 2b                	je     81e94e9 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x871>
 81e94be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e94c5:	00 
 81e94c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e94cd:	00 
 81e94ce:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e94d5:	08 
 81e94d6:	c7 04 24 42 67 00 00 	movl   $0x6742,(%esp)
 81e94dd:	e8 f5 73 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e94e2:	89 c3                	mov    %eax,%ebx
 81e94e4:	e9 8e 09 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e94e9:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81e94ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e94f3:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81e94f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e94fd:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e9503:	05 b6 00 00 00       	add    $0xb6,%eax
 81e9508:	89 04 24             	mov    %eax,(%esp)
 81e950b:	e8 2a 9e 07 00       	call   826333a <_ZN24Dispatcher_MouseRegister15decryptPasswordEPKcPcj>
 81e9510:	83 f0 01             	xor    $0x1,%eax
 81e9513:	84 c0                	test   %al,%al
 81e9515:	74 4d                	je     81e9564 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x8ec>
 81e9517:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e951e:	00 
 81e951f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e9526:	00 
 81e9527:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e952a:	89 04 24             	mov    %eax,(%esp)
 81e952d:	e8 10 2a 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e9532:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9535:	89 04 24             	mov    %eax,(%esp)
 81e9538:	e8 31 0e ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e953d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e9541:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9548:	00 
 81e9549:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9550:	08 
 81e9551:	c7 04 24 4e 67 00 00 	movl   $0x674e,(%esp)
 81e9558:	e8 7a 73 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e955d:	89 c3                	mov    %eax,%ebx
 81e955f:	e9 13 09 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9564:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81e956a:	89 04 24             	mov    %eax,(%esp)
 81e956d:	e8 58 9d 07 00       	call   82632ca <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc>
 81e9572:	83 f0 01             	xor    $0x1,%eax
 81e9575:	84 c0                	test   %al,%al
 81e9577:	74 4d                	je     81e95c6 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x94e>
 81e9579:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e9580:	00 
 81e9581:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e9588:	00 
 81e9589:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e958c:	89 04 24             	mov    %eax,(%esp)
 81e958f:	e8 ae 29 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e9594:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9597:	89 04 24             	mov    %eax,(%esp)
 81e959a:	e8 cf 0d ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e959f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e95a3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e95aa:	00 
 81e95ab:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e95b2:	08 
 81e95b3:	c7 04 24 54 67 00 00 	movl   $0x6754,(%esp)
 81e95ba:	e8 18 73 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e95bf:	89 c3                	mov    %eax,%ebx
 81e95c1:	e9 b1 08 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e95c6:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81e95cd:	00 
 81e95ce:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 81e95d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e95d8:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e95de:	05 b6 00 00 00       	add    $0xb6,%eax
 81e95e3:	89 04 24             	mov    %eax,(%esp)
 81e95e6:	e8 b5 42 e9 ff       	call   807d8a0 <memcpy@plt>
 81e95eb:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81e95f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e95f5:	8b 45 10             	mov    0x10(%ebp),%eax
 81e95f8:	89 04 24             	mov    %eax,(%esp)
 81e95fb:	e8 40 3c 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e9600:	83 f0 01             	xor    $0x1,%eax
 81e9603:	84 c0                	test   %al,%al
 81e9605:	74 2b                	je     81e9632 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x9ba>
 81e9607:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e960e:	00 
 81e960f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9616:	00 
 81e9617:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e961e:	08 
 81e961f:	c7 04 24 5c 67 00 00 	movl   $0x675c,(%esp)
 81e9626:	e8 ac 72 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e962b:	89 c3                	mov    %eax,%ebx
 81e962d:	e9 45 08 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e9632:	e8 64 2b ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e9637:	8b 90 c0 03 00 00    	mov    0x3c0(%eax),%edx
 81e963d:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 81e9643:	39 c2                	cmp    %eax,%edx
 81e9645:	0f 95 c0             	setne  %al
 81e9648:	84 c0                	test   %al,%al
 81e964a:	0f 84 2b 01 00 00    	je     81e977b <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xb03>
 81e9650:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e9656:	89 04 24             	mov    %eax,(%esp)
 81e9659:	e8 ee 46 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e965e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e9665:	00 
 81e9666:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e966d:	00 
 81e966e:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e9674:	89 04 24             	mov    %eax,(%esp)
 81e9677:	e8 80 22 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e967c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9683:	00 
 81e9684:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e968a:	89 04 24             	mov    %eax,(%esp)
 81e968d:	e8 8e 22 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e9692:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 81e9699:	00 
 81e969a:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e96a0:	89 04 24             	mov    %eax,(%esp)
 81e96a3:	e8 78 22 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e96a8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e96af:	00 
 81e96b0:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e96b6:	89 04 24             	mov    %eax,(%esp)
 81e96b9:	e8 9a 22 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e96be:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e96c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e96c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e96cb:	89 04 24             	mov    %eax,(%esp)
 81e96ce:	e8 e7 ee 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e96d3:	8b 45 08             	mov    0x8(%ebp),%eax
 81e96d6:	8b 40 04             	mov    0x4(%eax),%eax
 81e96d9:	8d 50 01             	lea    0x1(%eax),%edx
 81e96dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81e96df:	89 50 04             	mov    %edx,0x4(%eax)
 81e96e2:	8b 45 08             	mov    0x8(%ebp),%eax
 81e96e5:	8b 58 04             	mov    0x4(%eax),%ebx
 81e96e8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e96ef:	00 
 81e96f0:	c7 44 24 08 13 68 00 	movl   $0x6813,0x8(%esp)
 81e96f7:	00 
 81e96f8:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e96ff:	08 
 81e9700:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81e9703:	89 04 24             	mov    %eax,(%esp)
 81e9706:	e8 0d 60 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e970b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e970f:	c7 44 24 04 f1 1e bc 	movl   $0x8bc1ef1,0x4(%esp)
 81e9716:	08 
 81e9717:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81e971a:	89 04 24             	mov    %eax,(%esp)
 81e971d:	e8 66 60 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e9722:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9729:	00 
 81e972a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9731:	00 
 81e9732:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 81e9739:	00 
 81e973a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e973d:	89 04 24             	mov    %eax,(%esp)
 81e9740:	e8 af f2 45 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 81e9745:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e974a:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e9750:	89 04 24             	mov    %eax,(%esp)
 81e9753:	e8 28 47 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e9758:	e9 1a 07 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e975d:	89 d3                	mov    %edx,%ebx
 81e975f:	89 c6                	mov    %eax,%esi
 81e9761:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 81e9767:	89 04 24             	mov    %eax,(%esp)
 81e976a:	e8 11 47 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e976f:	89 f0                	mov    %esi,%eax
 81e9771:	89 da                	mov    %ebx,%edx
 81e9773:	89 04 24             	mov    %eax,(%esp)
 81e9776:	e8 d5 9f 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e977b:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 81e9782:	00 00 00 
 81e9785:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 81e978b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e978f:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9792:	89 04 24             	mov    %eax,(%esp)
 81e9795:	e8 a6 3a 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e979a:	83 f0 01             	xor    $0x1,%eax
 81e979d:	84 c0                	test   %al,%al
 81e979f:	74 2b                	je     81e97cc <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xb54>
 81e97a1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e97a8:	00 
 81e97a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e97b0:	00 
 81e97b1:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e97b8:	08 
 81e97b9:	c7 04 24 1b 68 00 00 	movl   $0x681b,(%esp)
 81e97c0:	e8 12 71 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e97c5:	89 c3                	mov    %eax,%ebx
 81e97c7:	e9 ab 06 00 00       	jmp    81e9e77 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11ff>
 81e97cc:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 81e97d1:	c7 44 24 08 72 69 00 	movl   $0x6972,0x8(%esp)
 81e97d8:	00 
 81e97d9:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81e97e0:	08 
 81e97e1:	89 04 24             	mov    %eax,(%esp)
 81e97e4:	e8 79 6a 0a 00       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 81e97e9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e97f0:	00 
 81e97f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e97f5:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81e97fb:	89 04 24             	mov    %eax,(%esp)
 81e97fe:	e8 23 f4 ed ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81e9803:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81e9809:	89 04 24             	mov    %eax,(%esp)
 81e980c:	e8 35 f4 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81e9811:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81e9818:	00 
 81e9819:	89 04 24             	mov    %eax,(%esp)
 81e981c:	e8 35 f4 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81e9821:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9824:	89 04 24             	mov    %eax,(%esp)
 81e9827:	e8 6a f4 ed ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81e982c:	89 c3                	mov    %eax,%ebx
 81e982e:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81e9834:	89 04 24             	mov    %eax,(%esp)
 81e9837:	e8 0a f4 ed ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81e983c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e9840:	89 04 24             	mov    %eax,(%esp)
 81e9843:	e8 0e f4 ed ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81e9848:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81e984e:	89 04 24             	mov    %eax,(%esp)
 81e9851:	e8 f8 f3 ed ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81e9856:	89 04 24             	mov    %eax,(%esp)
 81e9859:	e8 b4 de 04 00       	call   8237712 <_ZN12CStreamGuard11GetInBufferI14SIG_LOGIN_DATAEEPT_v>
 81e985e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e9861:	c7 44 24 08 58 43 00 	movl   $0x4358,0x8(%esp)
 81e9868:	00 
 81e9869:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9870:	00 
 81e9871:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9874:	89 04 24             	mov    %eax,(%esp)
 81e9877:	e8 44 44 e9 ff       	call   807dcc0 <memset@plt>
 81e987c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e987f:	05 38 3a 00 00       	add    $0x3a38,%eax
 81e9884:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9888:	8b 45 10             	mov    0x10(%ebp),%eax
 81e988b:	89 04 24             	mov    %eax,(%esp)
 81e988e:	e8 2d 37 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e9893:	83 f0 01             	xor    $0x1,%eax
 81e9896:	84 c0                	test   %al,%al
 81e9898:	74 2b                	je     81e98c5 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xc4d>
 81e989a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e98a1:	00 
 81e98a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e98a9:	00 
 81e98aa:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e98b1:	08 
 81e98b2:	c7 04 24 80 69 00 00 	movl   $0x6980,(%esp)
 81e98b9:	e8 19 70 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e98be:	89 c3                	mov    %eax,%ebx
 81e98c0:	e9 a4 05 00 00       	jmp    81e9e69 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11f1>
 81e98c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e98c8:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 81e98cf:	66 85 c0             	test   %ax,%ax
 81e98d2:	78 10                	js     81e98e4 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xc6c>
 81e98d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e98d7:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 81e98de:	66 83 f8 11          	cmp    $0x11,%ax
 81e98e2:	7e 0c                	jle    81e98f0 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xc78>
 81e98e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e98e7:	66 c7 80 38 3a 00 00 	movw   $0x0,0x3a38(%eax)
 81e98ee:	00 00 
 81e98f0:	e8 b2 0a ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e98f5:	89 04 24             	mov    %eax,(%esp)
 81e98f8:	e8 21 7a f0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81e98fd:	83 f0 01             	xor    $0x1,%eax
 81e9900:	84 c0                	test   %al,%al
 81e9902:	74 11                	je     81e9915 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xc9d>
 81e9904:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9907:	66 c7 80 38 3a 00 00 	movw   $0x0,0x3a38(%eax)
 81e990e:	00 00 
 81e9910:	e9 a5 00 00 00       	jmp    81e99ba <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xd42>
 81e9915:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9918:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 81e991f:	0f bf d8             	movswl %ax,%ebx
 81e9922:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9929:	00 
 81e992a:	c7 44 24 08 9a 69 00 	movl   $0x699a,0x8(%esp)
 81e9931:	00 
 81e9932:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9939:	08 
 81e993a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e993d:	89 04 24             	mov    %eax,(%esp)
 81e9940:	e8 d3 5d 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e9945:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e9949:	8d 85 59 fe ff ff    	lea    -0x1a7(%ebp),%eax
 81e994f:	83 c0 11             	add    $0x11,%eax
 81e9952:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e9956:	c7 44 24 04 10 1f bc 	movl   $0x8bc1f10,0x4(%esp)
 81e995d:	08 
 81e995e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e9961:	89 04 24             	mov    %eax,(%esp)
 81e9964:	e8 1f 5e 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e9969:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e996c:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 81e9973:	98                   	cwtl
 81e9974:	83 f8 0a             	cmp    $0xa,%eax
 81e9977:	77 41                	ja     81e99ba <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xd42>
 81e9979:	ba 01 00 00 00       	mov    $0x1,%edx
 81e997e:	89 d3                	mov    %edx,%ebx
 81e9980:	89 c1                	mov    %eax,%ecx
 81e9982:	d3 e3                	shl    %cl,%ebx
 81e9984:	89 d8                	mov    %ebx,%eax
 81e9986:	25 80 05 00 00       	and    $0x580,%eax
 81e998b:	85 c0                	test   %eax,%eax
 81e998d:	74 2b                	je     81e99ba <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xd42>
 81e998f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9996:	00 
 81e9997:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e999e:	00 
 81e999f:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e99a6:	08 
 81e99a7:	c7 04 24 a2 69 00 00 	movl   $0x69a2,(%esp)
 81e99ae:	e8 24 6f 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e99b3:	89 c3                	mov    %eax,%ebx
 81e99b5:	e9 af 04 00 00       	jmp    81e9e69 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11f1>
 81e99ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e99bd:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 81e99c4:	98                   	cwtl
 81e99c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e99c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e99cc:	89 04 24             	mov    %eax,(%esp)
 81e99cf:	e8 d8 66 04 00       	call   82300ac <_ZN5CUser14SetServerGroupE17ENUM_SERVER_GROUP>
 81e99d4:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
 81e99db:	00 00 00 
 81e99de:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 81e99e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e99e8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e99eb:	89 04 24             	mov    %eax,(%esp)
 81e99ee:	e8 fd 36 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e99f3:	83 f0 01             	xor    $0x1,%eax
 81e99f6:	84 c0                	test   %al,%al
 81e99f8:	74 2b                	je     81e9a25 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xdad>
 81e99fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9a01:	00 
 81e9a02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9a09:	00 
 81e9a0a:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9a11:	08 
 81e9a12:	c7 04 24 cf 69 00 00 	movl   $0x69cf,(%esp)
 81e9a19:	e8 b9 6e 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9a1e:	89 c3                	mov    %eax,%ebx
 81e9a20:	e9 44 04 00 00       	jmp    81e9e69 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11f1>
 81e9a25:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 81e9a2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9a2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9a32:	89 04 24             	mov    %eax,(%esp)
 81e9a35:	e8 c6 62 04 00       	call   822fd00 <_ZN5CUser20set_local_ip_addressEi>
 81e9a3a:	c6 85 57 ff ff ff 00 	movb   $0x0,-0xa9(%ebp)
 81e9a41:	8d 85 57 ff ff ff    	lea    -0xa9(%ebp),%eax
 81e9a47:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9a4b:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9a4e:	89 04 24             	mov    %eax,(%esp)
 81e9a51:	e8 1a 35 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e9a56:	83 f0 01             	xor    $0x1,%eax
 81e9a59:	84 c0                	test   %al,%al
 81e9a5b:	74 07                	je     81e9a64 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xdec>
 81e9a5d:	c6 85 57 ff ff ff 00 	movb   $0x0,-0xa9(%ebp)
 81e9a64:	0f b6 85 57 ff ff ff 	movzbl -0xa9(%ebp),%eax
 81e9a6b:	0f b6 c0             	movzbl %al,%eax
 81e9a6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9a72:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9a75:	89 04 24             	mov    %eax,(%esp)
 81e9a78:	e8 a5 63 04 00       	call   822fe22 <_ZN5CUser16SetLogInOutStateEh>
 81e9a7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9a80:	89 04 24             	mov    %eax,(%esp)
 81e9a83:	e8 96 53 f8 ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 81e9a88:	89 04 24             	mov    %eax,(%esp)
 81e9a8b:	e8 38 95 f8 ff       	call   8172fc8 <_ZN6Taiwan14GarenaAuthData6getUidEv>
 81e9a90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9a97:	00 
 81e9a98:	89 04 24             	mov    %eax,(%esp)
 81e9a9b:	e8 ab f5 f1 ff       	call   810904b <_Z14NumberToStringji>
 81e9aa0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e9aa3:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 81e9aaa:	00 
 81e9aab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9aaf:	89 14 24             	mov    %edx,(%esp)
 81e9ab2:	e8 19 3e e9 ff       	call   807d8d0 <strncpy@plt>
 81e9ab7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9aba:	83 c0 18             	add    $0x18,%eax
 81e9abd:	c7 44 24 08 84 00 00 	movl   $0x84,0x8(%esp)
 81e9ac4:	00 
 81e9ac5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9acc:	00 
 81e9acd:	89 04 24             	mov    %eax,(%esp)
 81e9ad0:	e8 eb 41 e9 ff       	call   807dcc0 <memset@plt>
 81e9ad5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9ad8:	89 04 24             	mov    %eax,(%esp)
 81e9adb:	e8 3e 53 f8 ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 81e9ae0:	89 04 24             	mov    %eax,(%esp)
 81e9ae3:	e8 02 95 f8 ff       	call   8172fea <_ZN6Taiwan14GarenaAuthData12getTimeStampEv>
 81e9ae8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e9aeb:	89 82 30 3a 00 00    	mov    %eax,0x3a30(%edx)
 81e9af1:	e8 b1 08 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e9af6:	89 04 24             	mov    %eax,(%esp)
 81e9af9:	e8 20 78 f0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81e9afe:	84 c0                	test   %al,%al
 81e9b00:	74 29                	je     81e9b2b <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xeb3>
 81e9b02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9b05:	0f b7 80 38 3a 00 00 	movzwl 0x3a38(%eax),%eax
 81e9b0c:	0f bf d8             	movswl %ax,%ebx
 81e9b0f:	e8 6d 26 ee ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81e9b14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e9b18:	89 04 24             	mov    %eax,(%esp)
 81e9b1b:	e8 04 aa 04 00       	call   8234524 <_ZN12CEnvironment18get_gc_no_hardcodeE17ENUM_SERVER_GROUP>
 81e9b20:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e9b23:	89 82 9c 00 00 00    	mov    %eax,0x9c(%edx)
 81e9b29:	eb 14                	jmp    81e9b3f <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0xec7>
 81e9b2b:	e8 51 26 ee ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81e9b30:	8b 90 98 01 00 00    	mov    0x198(%eax),%edx
 81e9b36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9b39:	89 90 9c 00 00 00    	mov    %edx,0x9c(%eax)
 81e9b3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9b42:	8d 90 a1 00 00 00    	lea    0xa1(%eax),%edx
 81e9b48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9b4b:	05 e0 00 00 00       	add    $0xe0,%eax
 81e9b50:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81e9b57:	00 
 81e9b58:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e9b5c:	89 04 24             	mov    %eax,(%esp)
 81e9b5f:	e8 ca 8c f7 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 81e9b64:	0f b6 95 0a ff ff ff 	movzbl -0xf6(%ebp),%edx
 81e9b6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9b6e:	88 90 a0 00 00 00    	mov    %dl,0xa0(%eax)
 81e9b74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9b77:	05 05 39 00 00       	add    $0x3905,%eax
 81e9b7c:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81e9b83:	00 
 81e9b84:	8d 95 59 fe ff ff    	lea    -0x1a7(%ebp),%edx
 81e9b8a:	81 c2 b6 00 00 00    	add    $0xb6,%edx
 81e9b90:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e9b94:	89 04 24             	mov    %eax,(%esp)
 81e9b97:	e8 34 3d e9 ff       	call   807d8d0 <strncpy@plt>
 81e9b9c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81e9ba3:	e8 f6 20 ee ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81e9ba8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9bac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9baf:	89 04 24             	mov    %eax,(%esp)
 81e9bb2:	e8 59 62 04 00       	call   822fe10 <_ZN5CUser12SetLoginTimeEl>
 81e9bb7:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 81e9bbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e9bc0:	89 90 34 3a 00 00    	mov    %edx,0x3a34(%eax)
 81e9bc6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81e9bcd:	e8 cc 20 ee ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81e9bd2:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e9bd5:	89 82 14 e4 08 00    	mov    %eax,0x8e414(%edx)
 81e9bdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9bde:	8d 90 18 e4 08 00    	lea    0x8e418(%eax),%edx
 81e9be4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9be7:	05 e0 00 00 00       	add    $0xe0,%eax
 81e9bec:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81e9bf3:	00 
 81e9bf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e9bf8:	89 04 24             	mov    %eax,(%esp)
 81e9bfb:	e8 2e 8c f7 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 81e9c00:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9c03:	c6 80 10 e4 08 00 00 	movb   $0x0,0x8e410(%eax)
 81e9c0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9c0d:	c7 80 30 e4 08 00 00 	movl   $0x0,0x8e430(%eax)
 81e9c14:	00 00 00 
 81e9c17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9c1a:	c7 80 2c e4 08 00 00 	movl   $0x0,0x8e42c(%eax)
 81e9c21:	00 00 00 
 81e9c24:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9c27:	c7 80 40 e4 08 00 00 	movl   $0x0,0x8e440(%eax)
 81e9c2e:	00 00 00 
 81e9c31:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9c37:	89 04 24             	mov    %eax,(%esp)
 81e9c3a:	e8 0d 41 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e9c3f:	c7 44 24 08 b7 00 00 	movl   $0xb7,0x8(%esp)
 81e9c46:	00 
 81e9c47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9c4e:	00 
 81e9c4f:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9c55:	89 04 24             	mov    %eax,(%esp)
 81e9c58:	e8 9f 1c ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e9c5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9c64:	00 
 81e9c65:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9c6b:	89 04 24             	mov    %eax,(%esp)
 81e9c6e:	e8 ad 1c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e9c73:	a1 48 be 40 09       	mov    0x940be48,%eax
 81e9c78:	89 04 24             	mov    %eax,(%esp)
 81e9c7b:	e8 c4 b2 04 00       	call   8234f44 <_ZN19CAuctionServerProxy9IsRunningEv>
 81e9c80:	84 c0                	test   %al,%al
 81e9c82:	74 18                	je     81e9c9c <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x1024>
 81e9c84:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e9c8b:	00 
 81e9c8c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9c92:	89 04 24             	mov    %eax,(%esp)
 81e9c95:	e8 86 1c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e9c9a:	eb 16                	jmp    81e9cb2 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x103a>
 81e9c9c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9ca3:	00 
 81e9ca4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9caa:	89 04 24             	mov    %eax,(%esp)
 81e9cad:	e8 6e 1c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e9cb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e9cb9:	00 
 81e9cba:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9cc0:	89 04 24             	mov    %eax,(%esp)
 81e9cc3:	e8 90 1c ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e9cc8:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9cce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9cd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9cd5:	89 04 24             	mov    %eax,(%esp)
 81e9cd8:	e8 dd e8 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e9cdd:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9ce3:	89 04 24             	mov    %eax,(%esp)
 81e9ce6:	e8 61 40 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e9ceb:	c7 44 24 08 b7 00 00 	movl   $0xb7,0x8(%esp)
 81e9cf2:	00 
 81e9cf3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9cfa:	00 
 81e9cfb:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9d01:	89 04 24             	mov    %eax,(%esp)
 81e9d04:	e8 f3 1b ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e9d09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e9d10:	00 
 81e9d11:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9d17:	89 04 24             	mov    %eax,(%esp)
 81e9d1a:	e8 01 1c ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e9d1f:	a1 4c be 40 09       	mov    0x940be4c,%eax
 81e9d24:	89 04 24             	mov    %eax,(%esp)
 81e9d27:	e8 28 b2 04 00       	call   8234f54 <_ZN23CCeraAuctionServerProxy9IsRunningEv>
 81e9d2c:	84 c0                	test   %al,%al
 81e9d2e:	74 24                	je     81e9d54 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x10dc>
 81e9d30:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e9d37:	00 
 81e9d38:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9d3e:	89 04 24             	mov    %eax,(%esp)
 81e9d41:	e8 da 1b ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e9d46:	c7 04 24 44 1f bc 08 	movl   $0x8bc1f44,(%esp)
 81e9d4d:	e8 1e 48 e9 ff       	call   807e570 <puts@plt>
 81e9d52:	eb 22                	jmp    81e9d76 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x10fe>
 81e9d54:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e9d5b:	00 
 81e9d5c:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9d62:	89 04 24             	mov    %eax,(%esp)
 81e9d65:	e8 b6 1b ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e9d6a:	c7 04 24 88 1f bc 08 	movl   $0x8bc1f88,(%esp)
 81e9d71:	e8 fa 47 e9 ff       	call   807e570 <puts@plt>
 81e9d76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e9d7d:	00 
 81e9d7e:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9d84:	89 04 24             	mov    %eax,(%esp)
 81e9d87:	e8 cc 1b ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e9d8c:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9d92:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9d96:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e9d99:	89 04 24             	mov    %eax,(%esp)
 81e9d9c:	e8 19 e8 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e9da1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9da8:	00 
 81e9da9:	c7 44 24 08 7b 6a 00 	movl   $0x6a7b,0x8(%esp)
 81e9db0:	00 
 81e9db1:	c7 44 24 04 60 08 bd 	movl   $0x8bd0860,0x4(%esp)
 81e9db8:	08 
 81e9db9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e9dbc:	89 04 24             	mov    %eax,(%esp)
 81e9dbf:	e8 54 59 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e9dc4:	c7 44 24 04 cc 1f bc 	movl   $0x8bc1fcc,0x4(%esp)
 81e9dcb:	08 
 81e9dcc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e9dcf:	89 04 24             	mov    %eax,(%esp)
 81e9dd2:	e8 b1 59 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e9dd7:	eb 18                	jmp    81e9df1 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x1179>
 81e9dd9:	89 d3                	mov    %edx,%ebx
 81e9ddb:	89 c6                	mov    %eax,%esi
 81e9ddd:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9de3:	89 04 24             	mov    %eax,(%esp)
 81e9de6:	e8 95 40 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e9deb:	89 f0                	mov    %esi,%eax
 81e9ded:	89 da                	mov    %ebx,%edx
 81e9def:	eb 42                	jmp    81e9e33 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11bb>
 81e9df1:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 81e9df7:	89 04 24             	mov    %eax,(%esp)
 81e9dfa:	e8 81 40 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e9dff:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81e9e04:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 81e9e0a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e9e0e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e9e15:	00 
 81e9e16:	89 04 24             	mov    %eax,(%esp)
 81e9e19:	e8 c0 71 38 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81e9e1e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e9e23:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9e29:	89 04 24             	mov    %eax,(%esp)
 81e9e2c:	e8 4f 40 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e9e31:	eb 36                	jmp    81e9e69 <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11f1>
 81e9e33:	89 d3                	mov    %edx,%ebx
 81e9e35:	89 c6                	mov    %eax,%esi
 81e9e37:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81e9e3d:	89 04 24             	mov    %eax,(%esp)
 81e9e40:	e8 3b 40 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e9e45:	89 f0                	mov    %esi,%eax
 81e9e47:	89 da                	mov    %ebx,%edx
 81e9e49:	eb 00                	jmp    81e9e4b <_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf+0x11d3>
 81e9e4b:	89 d3                	mov    %edx,%ebx
 81e9e4d:	89 c6                	mov    %eax,%esi
 81e9e4f:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81e9e55:	89 04 24             	mov    %eax,(%esp)
 81e9e58:	e8 75 2a 43 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81e9e5d:	89 f0                	mov    %esi,%eax
 81e9e5f:	89 da                	mov    %ebx,%edx
 81e9e61:	89 04 24             	mov    %eax,(%esp)
 81e9e64:	e8 e7 98 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e9e69:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 81e9e6f:	89 04 24             	mov    %eax,(%esp)
 81e9e72:	e8 5b 2a 43 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81e9e77:	89 d8                	mov    %ebx,%eax
 81e9e79:	81 c4 c0 01 00 00    	add    $0x1c0,%esp
 81e9e7f:	5b                   	pop    %ebx
 81e9e80:	5e                   	pop    %esi
 81e9e81:	5d                   	pop    %ebp
 81e9e82:	c3                   	ret
 81e9e83:	90                   	nop

```

```c
// DisPatcher_Login::dispatch_sig @ 0x81e8c78

/* DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Login::dispatch_sig(DisPatcher_Login *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  int *piVar5;
  undefined4 uVar6;
  GarenaAuthData *pGVar7;
  undefined4 uVar8;
  ServiceRestrictManager *pSVar9;
  uint uVar10;
  Stream *pSVar11;
  CStreamGuard *pCVar12;
  char *__src;
  CEnvironment *pCVar13;
  long lVar14;
  undefined1 local_1ab [13];
  uint local_19e;
  char acStack_19a [24];
  uint local_182;
  char acStack_17e [132];
  SIG_LOGIN_DATA local_fa [5];
  char acStack_f5 [9];
  PacketGuard local_ec [12];
  PacketGuard local_e0 [12];
  PacketGuard local_d4 [12];
  PacketGuard local_c8 [12];
  PacketGuard local_bc [15];
  uchar local_ad;
  int local_ac;
  CStreamGuard local_a8 [8];
  uint local_a0;
  uint local_9c;
  char local_98 [8];
  uint local_90;
  uint local_8c;
  uint local_88;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  undefined4 local_14;
  SIG_LOGIN_DATA *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 1) {
    PacketGuard::PacketGuard(local_c8);
                    /* try { // try from 081e8cc3 to 081e8d08 has its CatchHandler @ 081e8d21 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c8,1,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c8,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c8,true);
    CUser::Send(param_1,local_c8);
    PacketGuard::~PacketGuard(local_c8);
    return 0;
  }
  CUser::OnRecvEvent(param_1);
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar4);
  if (iVar3 == 6) {
    piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x21);
    cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
    if (cVar2 != '\x01') {
      PacketGuard::PacketGuard(local_d4);
                    /* try { // try from 081e8dc0 to 081e8e74 has its CatchHandler @ 081e8e8d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0x42);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
      CUser::Send(param_1,local_d4);
      cMyTrace::cMyTrace(local_84,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                         0x65f4,0);
      cMyTrace::operator()(local_84,"Can\'t Enter Into Guild War Channel ");
      CUser::DisConnSig(param_1,0x16,1,0);
      PacketGuard::~PacketGuard(local_d4);
      return 0;
    }
  }
  memset(local_1ab,0,0xbf);
  local_88 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_88);
  uVar10 = local_88;
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6601,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  if (0xe10 < local_88) {
    cMyTrace::cMyTrace(local_74,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                       0x6605,5);
    cMyTrace::operator()
              (local_74,"[Taiwan, Auth] Invalid patch time. (time:%d,limit:%d)",uVar10,0xe10);
    uVar6 = LineFunc(0x6607,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  local_8c = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_8c);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x660d,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  memset(dispatch_sig(CUser*,PacketBuf&)::garenaToken,0,0x801);
  cVar2 = PacketBuf::get_str(param_2,dispatch_sig(CUser*,PacketBuf&)::garenaToken,0x801,local_8c);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6612,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  iVar3 = Taiwan::AuthGarenaToken::decrypt
                    (dispatch_sig(CUser*,PacketBuf&)::garenaToken,local_8c,pGVar7);
  uVar10 = local_88;
  if (iVar3 != 0) {
    cMyTrace::cMyTrace(local_64,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                       0x6617,5);
    cMyTrace::operator()
              (local_64,"[Taiwan, Auth] Fail decrypt:%s",
               dispatch_sig(CUser*,PacketBuf&)::garenaToken);
    uVar6 = LineFunc(0x6618,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  Taiwan::GarenaAuthData::setPatchTime(pGVar7,uVar10);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  uVar6 = Taiwan::GarenaAuthData::getPatchTime(pGVar7);
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  uVar8 = Taiwan::GarenaAuthData::getTimeStamp(pGVar7);
  cMyTrace::cMyTrace(local_54,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                     0x661e,0);
  cMyTrace::operator()
            (local_54,
             "[Taiwan, Auth] Token timestamp info. (token_time:%u, current_time:%u, patch_time:%d)",
             uVar8,local_14,uVar6);
  pSVar9 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar9,param_1,1,0x21);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,1,0xd1);
    return 0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_19e);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x665f,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_str(param_2,acStack_19a,0x18,local_19e);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x667d,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_182);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6692,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  if (0x83 < local_182) {
    uVar6 = LineFunc(0x6698,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_str(param_2,acStack_17e,0x84,local_182);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x66a8,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_byte(param_2,(uchar *)local_fa);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6734,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  if (((local_fa[0] != (SIG_LOGIN_DATA)0x0) && (local_fa[0] != (SIG_LOGIN_DATA)0x1)) &&
     (local_fa[0] != (SIG_LOGIN_DATA)0x2)) {
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x6738,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  local_90 = 0;
  cVar2 = PacketBuf::get_int(param_2,(int *)&local_90);
  if (cVar2 != '\x01') {
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x673f,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  if (local_90 != 8) {
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x6741,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  cVar2 = PacketBuf::get_binary(param_2,acStack_f5,8);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6742,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = Dispatcher_MouseRegister::decryptPassword(acStack_f5,local_98,local_90);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,1,1);
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x674e,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  cVar2 = Dispatcher_MouseRegister::checkValiedPassword(local_98);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,1,1);
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x6754,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  memcpy(acStack_f5,local_98,7);
  cVar2 = PacketBuf::get_int(param_2,&local_9c);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x675c,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  iVar3 = G_CDataManager();
  if (*(uint *)(iVar3 + 0x3c0) != local_9c) {
    PacketGuard::PacketGuard(local_e0);
                    /* try { // try from 081e9677 to 081e9744 has its CatchHandler @ 081e975d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e0,1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e0,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e0,0x17);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e0,true);
    CUser::Send(param_1,local_e0);
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar6 = *(undefined4 *)(this + 4);
    cMyTrace::cMyTrace(local_44,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                       0x6813,0);
    cMyTrace::operator()(local_44,"version dismatched: count(%d)",uVar6);
    CUser::DisConnSig(param_1,0x19,0,0);
    PacketGuard::~PacketGuard(local_e0);
    return 0;
  }
  local_a0 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_a0);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x681b,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  pSVar11 = (Stream *)
            BigStreamPool::Acquire
                      (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x6972);
  CStreamGuard::CStreamGuard(local_a8,pSVar11,true);
  pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
                    /* try { // try from 081e981c to 081e9c3e has its CatchHandler @ 081e9e4b */
  CStreamGuard::operator<<(pCVar12,3);
  iVar3 = CUser::GetUID(param_1);
  pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
  CStreamGuard::operator<<(pCVar12,iVar3);
  pCVar12 = (CStreamGuard *)CStreamGuard::operator->(local_a8);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOGIN_DATA>(pCVar12);
  memset(local_10,0,0x4358);
  cVar2 = PacketBuf::get_short(param_2,(short *)(local_10 + 0x3a38));
  if (cVar2 == '\x01') {
    if ((*(short *)(local_10 + 0x3a38) < 0) || (0x11 < *(short *)(local_10 + 0x3a38))) {
      *(undefined2 *)(local_10 + 0x3a38) = 0;
    }
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar4);
    if (cVar2 == '\x01') {
      sVar1 = *(short *)(local_10 + 0x3a38);
      cMyTrace::cMyTrace(local_34,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                         0x699a,0);
      cMyTrace::operator()
                (local_34,"CheckLoginServerGroup user_id(%s), server_group(%d)",acStack_19a,
                 (int)sVar1);
      if ((*(ushort *)(local_10 + 0x3a38) < 0xb) &&
         ((1 << ((byte)*(ushort *)(local_10 + 0x3a38) & 0x1f) & 0x580U) != 0)) {
        uVar6 = LineFunc(0x69a2,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
        goto LAB_081e9e69;
      }
    }
    else {
      *(undefined2 *)(local_10 + 0x3a38) = 0;
    }
    CUser::SetServerGroup(param_1,(int)*(short *)(local_10 + 0x3a38));
    local_ac = 0;
    cVar2 = PacketBuf::get_int(param_2,&local_ac);
    if (cVar2 == '\x01') {
      CUser::set_local_ip_address(param_1,local_ac);
      local_ad = '\0';
      cVar2 = PacketBuf::get_byte(param_2,&local_ad);
      if (cVar2 != '\x01') {
        local_ad = '\0';
      }
      CUser::SetLogInOutState(param_1,local_ad);
      pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
      uVar10 = Taiwan::GarenaAuthData::getUid(pGVar7);
      __src = (char *)NumberToString(uVar10,0);
      strncpy((char *)local_10,__src,0x18);
      memset(local_10 + 0x18,0,0x84);
      pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
      uVar6 = Taiwan::GarenaAuthData::getTimeStamp(pGVar7);
      *(undefined4 *)(local_10 + 0x3a30) = uVar6;
      pGVar4 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar4);
      if (cVar2 == '\0') {
        iVar3 = G_CEnvironment();
        *(undefined4 *)(local_10 + 0x9c) = *(undefined4 *)(iVar3 + 0x198);
      }
      else {
        sVar1 = *(short *)(local_10 + 0x3a38);
        pCVar13 = (CEnvironment *)G_CEnvironment();
        uVar6 = CEnvironment::get_gc_no_hardcode(pCVar13,(int)sVar1);
        *(undefined4 *)(local_10 + 0x9c) = uVar6;
      }
      CNetwork<4096,450000>::GetPeerIP2
                ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char *)(local_10 + 0xa1),0x14);
      local_10[0xa0] = local_fa[0];
      strncpy((char *)(local_10 + 0x3905),acStack_f5,7);
      lVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUser::SetLoginTime(param_1,lVar14);
      *(uint *)(local_10 + 0x3a34) = local_a0;
      uVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      *(undefined4 *)(param_1 + 0x8e414) = uVar6;
      CNetwork<4096,450000>::GetPeerIP2
                ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char *)(param_1 + 0x8e418),0x14);
      param_1[0x8e410] = (CUser)0x0;
      *(undefined4 *)(param_1 + 0x8e430) = 0;
      *(undefined4 *)(param_1 + 0x8e42c) = 0;
      *(undefined4 *)(param_1 + 0x8e440) = 0;
      PacketGuard::PacketGuard(local_bc);
                    /* try { // try from 081e9c58 to 081e9cea has its CatchHandler @ 081e9e33 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,0,0xb7);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      cVar2 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,1);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
      CUser::Send(param_1,local_bc);
      PacketGuard::PacketGuard(local_ec);
                    /* try { // try from 081e9d04 to 081e9dd6 has its CatchHandler @ 081e9dd9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_ec,0,0xb7);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ec,1);
      cVar2 = CCeraAuctionServerProxy::IsRunning(GlobalData::s_cera_auction_proxy);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ec,0);
        puts("\n\nInter_AuctionNotifyAuctionService::dispatch_sig : point closed\n");
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ec,1);
        puts("\n\nInter_AuctionNotifyAuctionService::dispatch_sig : point opened\n");
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_ec,true);
      CUser::Send(param_1,local_ec);
      cMyTrace::cMyTrace(local_24,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                         0x6a7b,0);
      cMyTrace::operator()
                (local_24,"USER LOGINED! SEND ENUM_NOTIPACKET_AUCTION_NOTIFY_AUCTION_SERVICE");
                    /* try { // try from 081e9dfa to 081e9e1d has its CatchHandler @ 081e9e33 */
      PacketGuard::~PacketGuard(local_ec);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_a8);
      uVar6 = 0;
                    /* try { // try from 081e9e2c to 081e9e30 has its CatchHandler @ 081e9e4b */
      PacketGuard::~PacketGuard(local_bc);
    }
    else {
      uVar6 = LineFunc(0x69cf,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  else {
    uVar6 = LineFunc(0x6980,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
LAB_081e9e69:
  CStreamGuard::~CStreamGuard(local_a8);
  return uVar6;
}

```

