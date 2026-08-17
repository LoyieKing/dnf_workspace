# Inter_ResposncePCRoomPlyerList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d9cbe Inter_ResposncePCRoomPlyerList::dispatch_sig  [0x084d9cbe-0x84da0a9] ===
 84d9cbe:	55                   	push   %ebp
 84d9cbf:	89 e5                	mov    %esp,%ebp
 84d9cc1:	56                   	push   %esi
 84d9cc2:	53                   	push   %ebx
 84d9cc3:	83 ec 40             	sub    $0x40,%esp
 84d9cc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9cc9:	89 04 24             	mov    %eax,(%esp)
 84d9ccc:	e8 bb 06 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d9cd1:	85 c0                	test   %eax,%eax
 84d9cd3:	0f 94 c0             	sete   %al
 84d9cd6:	84 c0                	test   %al,%al
 84d9cd8:	74 0a                	je     84d9ce4 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x26>
 84d9cda:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d9cdf:	e9 bc 03 00 00       	jmp    84da0a0 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x3e2>
 84d9ce4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9ce7:	89 04 24             	mov    %eax,(%esp)
 84d9cea:	e8 5d 40 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d9cef:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9cf2:	89 04 24             	mov    %eax,(%esp)
 84d9cf5:	e8 c8 70 c3 ff       	call   8110dc2 <_ZN5CUser11GetPCRoomNoEv>
 84d9cfa:	85 c0                	test   %eax,%eax
 84d9cfc:	0f 94 c0             	sete   %al
 84d9cff:	84 c0                	test   %al,%al
 84d9d01:	74 70                	je     84d9d73 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0xb5>
 84d9d03:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 84d9d0a:	00 
 84d9d0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9d12:	00 
 84d9d13:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9d16:	89 04 24             	mov    %eax,(%esp)
 84d9d19:	e8 de 1b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d9d1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9d25:	00 
 84d9d26:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9d29:	89 04 24             	mov    %eax,(%esp)
 84d9d2c:	e8 ef 1b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9d31:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84d9d38:	00 
 84d9d39:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9d3c:	89 04 24             	mov    %eax,(%esp)
 84d9d3f:	e8 dc 1b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9d44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9d4b:	00 
 84d9d4c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9d4f:	89 04 24             	mov    %eax,(%esp)
 84d9d52:	e8 01 1c bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d9d57:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9d5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9d5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9d61:	89 04 24             	mov    %eax,(%esp)
 84d9d64:	e8 51 e8 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d9d69:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d9d6e:	e9 22 03 00 00       	jmp    84da095 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x3d7>
 84d9d73:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9d76:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d9d79:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d9d80:	ff 
 84d9d81:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9d84:	89 04 24             	mov    %eax,(%esp)
 84d9d87:	e8 14 42 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d9d8c:	89 c2                	mov    %eax,%edx
 84d9d8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d9d91:	8b 40 0e             	mov    0xe(%eax),%eax
 84d9d94:	39 c2                	cmp    %eax,%edx
 84d9d96:	0f 95 c0             	setne  %al
 84d9d99:	84 c0                	test   %al,%al
 84d9d9b:	74 57                	je     84d9df4 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x136>
 84d9d9d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d9da0:	8b 58 0e             	mov    0xe(%eax),%ebx
 84d9da3:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d9daa:	ff 
 84d9dab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9dae:	89 04 24             	mov    %eax,(%esp)
 84d9db1:	e8 ea 41 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d9db6:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d9dba:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d9dbe:	c7 44 24 10 60 95 c8 	movl   $0x8c89560,0x10(%esp)
 84d9dc5:	08 
 84d9dc6:	c7 44 24 0c 92 41 00 	movl   $0x4192,0xc(%esp)
 84d9dcd:	00 
 84d9dce:	c7 44 24 08 80 c0 c8 	movl   $0x8c8c080,0x8(%esp)
 84d9dd5:	08 
 84d9dd6:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d9ddd:	08 
 84d9dde:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d9de5:	e8 20 9e 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d9dea:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d9def:	e9 a1 02 00 00       	jmp    84da095 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x3d7>
 84d9df4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d9df7:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d9dfb:	3c 28                	cmp    $0x28,%al
 84d9dfd:	76 70                	jbe    84d9e6f <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x1b1>
 84d9dff:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 84d9e06:	00 
 84d9e07:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9e0e:	00 
 84d9e0f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9e12:	89 04 24             	mov    %eax,(%esp)
 84d9e15:	e8 e2 1a bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d9e1a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d9e21:	00 
 84d9e22:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9e25:	89 04 24             	mov    %eax,(%esp)
 84d9e28:	e8 f3 1a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9e2d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84d9e34:	00 
 84d9e35:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9e38:	89 04 24             	mov    %eax,(%esp)
 84d9e3b:	e8 e0 1a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9e40:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9e47:	00 
 84d9e48:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9e4b:	89 04 24             	mov    %eax,(%esp)
 84d9e4e:	e8 05 1b bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d9e53:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9e56:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9e5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d9e5d:	89 04 24             	mov    %eax,(%esp)
 84d9e60:	e8 55 e7 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d9e65:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d9e6a:	e9 26 02 00 00       	jmp    84da095 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x3d7>
 84d9e6f:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 84d9e76:	00 
 84d9e77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9e7e:	00 
 84d9e7f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9e82:	89 04 24             	mov    %eax,(%esp)
 84d9e85:	e8 72 1a bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d9e8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d9e91:	00 
 84d9e92:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9e95:	89 04 24             	mov    %eax,(%esp)
 84d9e98:	e8 83 1a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9e9d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d9ea0:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d9ea4:	0f b6 c0             	movzbl %al,%eax
 84d9ea7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9eab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9eae:	89 04 24             	mov    %eax,(%esp)
 84d9eb1:	e8 6a 1a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9eb6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84d9ebd:	e9 74 01 00 00       	jmp    84da036 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x378>
 84d9ec2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d9ec5:	89 d0                	mov    %edx,%eax
 84d9ec7:	c1 e0 03             	shl    $0x3,%eax
 84d9eca:	01 d0                	add    %edx,%eax
 84d9ecc:	c1 e0 02             	shl    $0x2,%eax
 84d9ecf:	01 d0                	add    %edx,%eax
 84d9ed1:	83 c0 10             	add    $0x10,%eax
 84d9ed4:	03 45 ec             	add    -0x14(%ebp),%eax
 84d9ed7:	83 c0 07             	add    $0x7,%eax
 84d9eda:	89 04 24             	mov    %eax,(%esp)
 84d9edd:	e8 ce 44 ba ff       	call   807e3b0 <strlen@plt>
 84d9ee2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d9ee5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9ee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9eec:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9eef:	89 04 24             	mov    %eax,(%esp)
 84d9ef2:	e8 45 1a bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d9ef7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d9efa:	89 d0                	mov    %edx,%eax
 84d9efc:	c1 e0 03             	shl    $0x3,%eax
 84d9eff:	01 d0                	add    %edx,%eax
 84d9f01:	c1 e0 02             	shl    $0x2,%eax
 84d9f04:	01 d0                	add    %edx,%eax
 84d9f06:	83 c0 10             	add    $0x10,%eax
 84d9f09:	03 45 ec             	add    -0x14(%ebp),%eax
 84d9f0c:	8d 50 07             	lea    0x7(%eax),%edx
 84d9f0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d9f12:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d9f16:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d9f1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9f1d:	89 04 24             	mov    %eax,(%esp)
 84d9f20:	e8 bf d4 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d9f25:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d9f28:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84d9f2b:	89 d0                	mov    %edx,%eax
 84d9f2d:	c1 e0 03             	shl    $0x3,%eax
 84d9f30:	01 d0                	add    %edx,%eax
 84d9f32:	c1 e0 02             	shl    $0x2,%eax
 84d9f35:	01 d0                	add    %edx,%eax
 84d9f37:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d9f3a:	83 c0 10             	add    $0x10,%eax
 84d9f3d:	0f b7 40 05          	movzwl 0x5(%eax),%eax
 84d9f41:	98                   	cwtl
 84d9f42:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9f46:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9f49:	89 04 24             	mov    %eax,(%esp)
 84d9f4c:	e8 53 ff bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d9f51:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d9f54:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84d9f57:	89 d0                	mov    %edx,%eax
 84d9f59:	c1 e0 03             	shl    $0x3,%eax
 84d9f5c:	01 d0                	add    %edx,%eax
 84d9f5e:	c1 e0 02             	shl    $0x2,%eax
 84d9f61:	01 d0                	add    %edx,%eax
 84d9f63:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d9f66:	83 c0 13             	add    $0x13,%eax
 84d9f69:	0f b6 00             	movzbl (%eax),%eax
 84d9f6c:	0f be c0             	movsbl %al,%eax
 84d9f6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9f73:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9f76:	89 04 24             	mov    %eax,(%esp)
 84d9f79:	e8 a2 19 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9f7e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d9f81:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84d9f84:	89 d0                	mov    %edx,%eax
 84d9f86:	c1 e0 03             	shl    $0x3,%eax
 84d9f89:	01 d0                	add    %edx,%eax
 84d9f8b:	c1 e0 02             	shl    $0x2,%eax
 84d9f8e:	01 d0                	add    %edx,%eax
 84d9f90:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d9f93:	83 c0 14             	add    $0x14,%eax
 84d9f96:	0f b6 00             	movzbl (%eax),%eax
 84d9f99:	0f be c0             	movsbl %al,%eax
 84d9f9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9fa0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9fa3:	89 04 24             	mov    %eax,(%esp)
 84d9fa6:	e8 75 19 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9fab:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d9fae:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84d9fb1:	89 d0                	mov    %edx,%eax
 84d9fb3:	c1 e0 03             	shl    $0x3,%eax
 84d9fb6:	01 d0                	add    %edx,%eax
 84d9fb8:	c1 e0 02             	shl    $0x2,%eax
 84d9fbb:	01 d0                	add    %edx,%eax
 84d9fbd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d9fc0:	83 c0 35             	add    $0x35,%eax
 84d9fc3:	0f b6 00             	movzbl (%eax),%eax
 84d9fc6:	0f b6 c0             	movzbl %al,%eax
 84d9fc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9fcd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9fd0:	89 04 24             	mov    %eax,(%esp)
 84d9fd3:	e8 48 19 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d9fd8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d9fdb:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84d9fde:	89 d0                	mov    %edx,%eax
 84d9fe0:	c1 e0 03             	shl    $0x3,%eax
 84d9fe3:	01 d0                	add    %edx,%eax
 84d9fe5:	c1 e0 02             	shl    $0x2,%eax
 84d9fe8:	01 d0                	add    %edx,%eax
 84d9fea:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d9fed:	83 c0 36             	add    $0x36,%eax
 84d9ff0:	0f b6 00             	movzbl (%eax),%eax
 84d9ff3:	0f be c0             	movsbl %al,%eax
 84d9ff6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d9ffa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d9ffd:	89 04 24             	mov    %eax,(%esp)
 84da000:	e8 1b 19 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da005:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84da008:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84da00b:	89 d0                	mov    %edx,%eax
 84da00d:	c1 e0 03             	shl    $0x3,%eax
 84da010:	01 d0                	add    %edx,%eax
 84da012:	c1 e0 02             	shl    $0x2,%eax
 84da015:	01 d0                	add    %edx,%eax
 84da017:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84da01a:	83 c0 37             	add    $0x37,%eax
 84da01d:	0f b6 00             	movzbl (%eax),%eax
 84da020:	0f be c0             	movsbl %al,%eax
 84da023:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da027:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84da02a:	89 04 24             	mov    %eax,(%esp)
 84da02d:	e8 ee 18 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da032:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84da036:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84da039:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84da03d:	0f b6 c0             	movzbl %al,%eax
 84da040:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84da043:	0f 9f c0             	setg   %al
 84da046:	84 c0                	test   %al,%al
 84da048:	0f 85 74 fe ff ff    	jne    84d9ec2 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x204>
 84da04e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da055:	00 
 84da056:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84da059:	89 04 24             	mov    %eax,(%esp)
 84da05c:	e8 f7 18 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84da061:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84da064:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da068:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da06b:	89 04 24             	mov    %eax,(%esp)
 84da06e:	e8 47 e5 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84da073:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da078:	eb 1b                	jmp    84da095 <_ZN30Inter_ResposncePCRoomPlyerList12dispatch_sigEP5CUserPci+0x3d7>
 84da07a:	89 d3                	mov    %edx,%ebx
 84da07c:	89 c6                	mov    %eax,%esi
 84da07e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84da081:	89 04 24             	mov    %eax,(%esp)
 84da084:	e8 f7 3d 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da089:	89 f0                	mov    %esi,%eax
 84da08b:	89 da                	mov    %ebx,%edx
 84da08d:	89 04 24             	mov    %eax,(%esp)
 84da090:	e8 bb 96 60 00       	call   8ae3750 <_Unwind_Resume>
 84da095:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84da098:	89 04 24             	mov    %eax,(%esp)
 84da09b:	e8 e0 3d 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da0a0:	89 d8                	mov    %ebx,%eax
 84da0a2:	83 c4 40             	add    $0x40,%esp
 84da0a5:	5b                   	pop    %ebx
 84da0a6:	5e                   	pop    %esi
 84da0a7:	5d                   	pop    %ebp
 84da0a8:	c3                   	ret
 84da0a9:	90                   	nop

```

```c
// Inter_ResposncePCRoomPlyerList::dispatch_sig @ 0x84d9cbe

/* Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    PacketGuard::PacketGuard(local_24);
    iVar2 = CUser::GetPCRoomNo((CUser *)param_2);
    if (iVar2 == 0) {
                    /* try { // try from 084d9d19 to 084da072 has its CatchHandler @ 084da07a */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,3);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
    }
    else {
      local_18 = param_3;
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_18 + 0xe)) {
        if (*(byte *)(local_18 + 0x12) < 0x29) {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd8);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x12));
          for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_18 + 0x12);
              local_14 = local_14 + 1) {
            local_10 = strlen((char *)(local_14 * 0x25 + local_18 + 0x17));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_10);
            InterfacePacketBuf::put_str
                      ((InterfacePacketBuf *)local_24,(char *)(local_14 * 0x25 + local_18 + 0x17),
                       local_10);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_24,
                       (int)*(short *)(local_18 + local_14 * 0x25 + 0x15));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x13));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x14));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (uint)*(byte *)(local_18 + local_14 * 0x25 + 0x35));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x36));
            InterfacePacketBuf::put_byte
                      ((InterfacePacketBuf *)local_24,
                       (int)*(char *)(local_18 + local_14 * 0x25 + 0x37));
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send((CUser *)param_2,local_24);
        }
        else {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0xd8);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,3);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send((CUser *)param_2,local_24);
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_18 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_ResposncePCRoomPlyerList::dispatch_sig(CUser*, char*, int)",
                   0x4192,
                   "Inter_ResposncePCRoomPlyerList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
    PacketGuard::~PacketGuard(local_24);
  }
  return 0;
}

```

