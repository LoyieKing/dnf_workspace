# Inter_ReqChangeCharacName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d1c8a Inter_ReqChangeCharacName::dispatch_sig  [0x084d1c8a-0x84d22fb] ===
 84d1c8a:	55                   	push   %ebp
 84d1c8b:	89 e5                	mov    %esp,%ebp
 84d1c8d:	57                   	push   %edi
 84d1c8e:	56                   	push   %esi
 84d1c8f:	53                   	push   %ebx
 84d1c90:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 84d1c96:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1c99:	89 04 24             	mov    %eax,(%esp)
 84d1c9c:	e8 eb 86 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d1ca1:	83 f8 01             	cmp    $0x1,%eax
 84d1ca4:	0f 9e c0             	setle  %al
 84d1ca7:	84 c0                	test   %al,%al
 84d1ca9:	74 0a                	je     84d1cb5 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x2b>
 84d1cab:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1cb0:	e9 3c 06 00 00       	jmp    84d22f1 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x667>
 84d1cb5:	8b 45 10             	mov    0x10(%ebp),%eax
 84d1cb8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84d1cbb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1cbe:	8b 40 24             	mov    0x24(%eax),%eax
 84d1cc1:	85 c0                	test   %eax,%eax
 84d1cc3:	74 51                	je     84d1d16 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x8c>
 84d1cc5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1cc8:	8b 40 24             	mov    0x24(%eax),%eax
 84d1ccb:	0f b6 c0             	movzbl %al,%eax
 84d1cce:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d1cd2:	c7 44 24 04 8a 00 00 	movl   $0x8a,0x4(%esp)
 84d1cd9:	00 
 84d1cda:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1cdd:	89 04 24             	mov    %eax,(%esp)
 84d1ce0:	e8 5d a2 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d1ce5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1ce8:	8b 00                	mov    (%eax),%eax
 84d1cea:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84d1cf1:	00 
 84d1cf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1cf6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1cf9:	89 04 24             	mov    %eax,(%esp)
 84d1cfc:	e8 35 ae 01 00       	call   84ecb36 <_ZN5CUser28SetCharacViewStateByCharacNoEii>
 84d1d01:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1d04:	89 04 24             	mov    %eax,(%esp)
 84d1d07:	e8 34 fa 17 00       	call   8651740 <_ZN5CUser16UpdateCharacViewEv>
 84d1d0c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1d11:	e9 db 05 00 00       	jmp    84d22f1 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x667>
 84d1d16:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1d19:	83 c0 04             	add    $0x4,%eax
 84d1d1c:	89 c2                	mov    %eax,%edx
 84d1d1e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1d21:	8b 00                	mov    (%eax),%eax
 84d1d23:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d1d27:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1d2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1d2e:	89 04 24             	mov    %eax,(%esp)
 84d1d31:	e8 46 af 01 00       	call   84ecc7c <_ZN5CUser13setCharacNameEiPKc>
 84d1d36:	84 c0                	test   %al,%al
 84d1d38:	0f 84 dd 02 00 00    	je     84d201b <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x391>
 84d1d3e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d1d41:	89 04 24             	mov    %eax,(%esp)
 84d1d44:	e8 03 c0 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d1d49:	c7 44 24 08 8a 00 00 	movl   $0x8a,0x8(%esp)
 84d1d50:	00 
 84d1d51:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1d58:	00 
 84d1d59:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d1d5c:	89 04 24             	mov    %eax,(%esp)
 84d1d5f:	e8 98 9b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d1d64:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1d6b:	00 
 84d1d6c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d1d6f:	89 04 24             	mov    %eax,(%esp)
 84d1d72:	e8 a9 9b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1d77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d1d7e:	00 
 84d1d7f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d1d82:	89 04 24             	mov    %eax,(%esp)
 84d1d85:	e8 ce 9b bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d1d8a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d1d8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1d91:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1d94:	89 04 24             	mov    %eax,(%esp)
 84d1d97:	e8 1e 68 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d1d9c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1d9f:	8b 00                	mov    (%eax),%eax
 84d1da1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d1da8:	00 
 84d1da9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1dad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1db0:	89 04 24             	mov    %eax,(%esp)
 84d1db3:	e8 7e ad 01 00       	call   84ecb36 <_ZN5CUser28SetCharacViewStateByCharacNoEii>
 84d1db8:	8d 45 df             	lea    -0x21(%ebp),%eax
 84d1dbb:	89 04 24             	mov    %eax,(%esp)
 84d1dbe:	e8 0d e3 20 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84d1dc3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1dc6:	83 c0 04             	add    $0x4,%eax
 84d1dc9:	8d 55 df             	lea    -0x21(%ebp),%edx
 84d1dcc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d1dd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1dd4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d1dd7:	89 04 24             	mov    %eax,(%esp)
 84d1dda:	e8 51 58 23 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 84d1ddf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1de2:	8b 00                	mov    (%eax),%eax
 84d1de4:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84d1de7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d1deb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1def:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1df2:	89 04 24             	mov    %eax,(%esp)
 84d1df5:	e8 ec a7 01 00       	call   84ec5e6 <_ZN5CUser27UpdateCharacNameInMercenaryEjRKSs>
 84d1dfa:	eb 15                	jmp    84d1e11 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x187>
 84d1dfc:	89 d3                	mov    %edx,%ebx
 84d1dfe:	89 c6                	mov    %eax,%esi
 84d1e00:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d1e03:	89 04 24             	mov    %eax,(%esp)
 84d1e06:	e8 d5 5d 23 00       	call   8707be0 <_ZNSsD1Ev>
 84d1e0b:	89 f0                	mov    %esi,%eax
 84d1e0d:	89 da                	mov    %ebx,%edx
 84d1e0f:	eb 0d                	jmp    84d1e1e <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x194>
 84d1e11:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d1e14:	89 04 24             	mov    %eax,(%esp)
 84d1e17:	e8 c4 5d 23 00       	call   8707be0 <_ZNSsD1Ev>
 84d1e1c:	eb 18                	jmp    84d1e36 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x1ac>
 84d1e1e:	89 d3                	mov    %edx,%ebx
 84d1e20:	89 c6                	mov    %eax,%esi
 84d1e22:	8d 45 df             	lea    -0x21(%ebp),%eax
 84d1e25:	89 04 24             	mov    %eax,(%esp)
 84d1e28:	e8 c3 e2 20 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84d1e2d:	89 f0                	mov    %esi,%eax
 84d1e2f:	89 da                	mov    %ebx,%edx
 84d1e31:	e9 b0 01 00 00       	jmp    84d1fe6 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x35c>
 84d1e36:	8d 45 df             	lea    -0x21(%ebp),%eax
 84d1e39:	89 04 24             	mov    %eax,(%esp)
 84d1e3c:	e8 af e2 20 00       	call   86e00f0 <_ZNSaIcED1Ev>
 84d1e41:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1e44:	89 04 24             	mov    %eax,(%esp)
 84d1e47:	e8 f4 f8 17 00       	call   8651740 <_ZN5CUser16UpdateCharacViewEv>
 84d1e4c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1e4f:	8b 40 2c             	mov    0x2c(%eax),%eax
 84d1e52:	85 c0                	test   %eax,%eax
 84d1e54:	74 61                	je     84d1eb7 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x22d>
 84d1e56:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1e59:	83 c0 04             	add    $0x4,%eax
 84d1e5c:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 84d1e62:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1e65:	8b 78 2c             	mov    0x2c(%eax),%edi
 84d1e68:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1e6b:	8b 00                	mov    (%eax),%eax
 84d1e6d:	89 c6                	mov    %eax,%esi
 84d1e6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1e72:	89 04 24             	mov    %eax,(%esp)
 84d1e75:	e8 f4 84 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d1e7a:	89 c3                	mov    %eax,%ebx
 84d1e7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1e7f:	89 04 24             	mov    %eax,(%esp)
 84d1e82:	e8 09 9e bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d1e87:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84d1e8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1e91:	89 14 24             	mov    %edx,(%esp)
 84d1e94:	e8 1f b5 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d1e99:	8b 95 f8 fe ff ff    	mov    -0x108(%ebp),%edx
 84d1e9f:	89 54 24 10          	mov    %edx,0x10(%esp)
 84d1ea3:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84d1ea7:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d1eab:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d1eaf:	89 04 24             	mov    %eax,(%esp)
 84d1eb2:	e8 11 c5 f9 ff       	call   846e3c8 <_ZN17CGuildServerProxy18SendChangeCharNameEjjjPc>
 84d1eb7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1eba:	83 c0 04             	add    $0x4,%eax
 84d1ebd:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 84d1ec3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1ec6:	8b 78 2c             	mov    0x2c(%eax),%edi
 84d1ec9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1ecc:	8b 00                	mov    (%eax),%eax
 84d1ece:	89 c6                	mov    %eax,%esi
 84d1ed0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1ed3:	89 04 24             	mov    %eax,(%esp)
 84d1ed6:	e8 93 84 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d1edb:	89 c3                	mov    %eax,%ebx
 84d1edd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1ee0:	89 04 24             	mov    %eax,(%esp)
 84d1ee3:	e8 a8 9d bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d1ee8:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84d1eee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1ef2:	89 14 24             	mov    %edx,(%esp)
 84d1ef5:	e8 90 01 c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d1efa:	8b 95 fc fe ff ff    	mov    -0x104(%ebp),%edx
 84d1f00:	89 54 24 10          	mov    %edx,0x10(%esp)
 84d1f04:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84d1f08:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d1f0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d1f10:	89 04 24             	mov    %eax,(%esp)
 84d1f13:	e8 70 f3 f9 ff       	call   8471288 <_ZN19CMonitorServerProxy18SendChangeCharNameEjjjPc>
 84d1f18:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1f1b:	8b 40 2c             	mov    0x2c(%eax),%eax
 84d1f1e:	85 c0                	test   %eax,%eax
 84d1f20:	74 61                	je     84d1f83 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x2f9>
 84d1f22:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1f25:	83 c0 04             	add    $0x4,%eax
 84d1f28:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 84d1f2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1f31:	8b 78 2c             	mov    0x2c(%eax),%edi
 84d1f34:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1f37:	8b 00                	mov    (%eax),%eax
 84d1f39:	89 c6                	mov    %eax,%esi
 84d1f3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1f3e:	89 04 24             	mov    %eax,(%esp)
 84d1f41:	e8 28 84 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d1f46:	89 c3                	mov    %eax,%ebx
 84d1f48:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1f4b:	89 04 24             	mov    %eax,(%esp)
 84d1f4e:	e8 3d 9d bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d1f53:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84d1f59:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1f5d:	89 14 24             	mov    %edx,(%esp)
 84d1f60:	e8 53 b4 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d1f65:	8b 95 00 ff ff ff    	mov    -0x100(%ebp),%edx
 84d1f6b:	89 54 24 10          	mov    %edx,0x10(%esp)
 84d1f6f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84d1f73:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d1f77:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d1f7b:	89 04 24             	mov    %eax,(%esp)
 84d1f7e:	e8 45 c4 f9 ff       	call   846e3c8 <_ZN17CGuildServerProxy18SendChangeCharNameEjjjPc>
 84d1f83:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1f86:	83 c0 04             	add    $0x4,%eax
 84d1f89:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 84d1f8f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1f92:	8b 78 2c             	mov    0x2c(%eax),%edi
 84d1f95:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d1f98:	8b 00                	mov    (%eax),%eax
 84d1f9a:	89 c6                	mov    %eax,%esi
 84d1f9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1f9f:	89 04 24             	mov    %eax,(%esp)
 84d1fa2:	e8 c7 83 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d1fa7:	89 c3                	mov    %eax,%ebx
 84d1fa9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1fac:	89 04 24             	mov    %eax,(%esp)
 84d1faf:	e8 dc 9c bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d1fb4:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84d1fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1fbe:	89 14 24             	mov    %edx,(%esp)
 84d1fc1:	e8 c4 00 c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d1fc6:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 84d1fcc:	89 54 24 10          	mov    %edx,0x10(%esp)
 84d1fd0:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84d1fd4:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d1fd8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d1fdc:	89 04 24             	mov    %eax,(%esp)
 84d1fdf:	e8 a4 f2 f9 ff       	call   8471288 <_ZN19CMonitorServerProxy18SendChangeCharNameEjjjPc>
 84d1fe4:	eb 1b                	jmp    84d2001 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x377>
 84d1fe6:	89 d3                	mov    %edx,%ebx
 84d1fe8:	89 c6                	mov    %eax,%esi
 84d1fea:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d1fed:	89 04 24             	mov    %eax,(%esp)
 84d1ff0:	e8 8b be 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1ff5:	89 f0                	mov    %esi,%eax
 84d1ff7:	89 da                	mov    %ebx,%edx
 84d1ff9:	89 04 24             	mov    %eax,(%esp)
 84d1ffc:	e8 4f 17 61 00       	call   8ae3750 <_Unwind_Resume>
 84d2001:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d2004:	89 04 24             	mov    %eax,(%esp)
 84d2007:	e8 74 be 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d200c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d200f:	8b 40 28             	mov    0x28(%eax),%eax
 84d2012:	85 c0                	test   %eax,%eax
 84d2014:	74 0f                	je     84d2025 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x39b>
 84d2016:	e9 9c 02 00 00       	jmp    84d22b7 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x62d>
 84d201b:	b8 ae 31 00 00       	mov    $0x31ae,%eax
 84d2020:	e9 cc 02 00 00       	jmp    84d22f1 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x667>
 84d2025:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84d202c:	e8 6d 9c bf ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84d2031:	3d 50 1f 4a 46       	cmp    $0x464a1f50,%eax
 84d2036:	0f 9f c0             	setg   %al
 84d2039:	84 c0                	test   %al,%al
 84d203b:	74 0a                	je     84d2047 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x3bd>
 84d203d:	b8 00 00 00 00       	mov    $0x0,%eax
 84d2042:	e9 aa 02 00 00       	jmp    84d22f1 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x667>
 84d2047:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d204a:	8b 00                	mov    (%eax),%eax
 84d204c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2050:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2053:	89 04 24             	mov    %eax,(%esp)
 84d2056:	e8 85 ab 01 00       	call   84ecbe0 <_ZNK5CUser24getCharacLevelByCharacNoEi>
 84d205b:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 84d205f:	66 83 7d e6 00       	cmpw   $0x0,-0x1a(%ebp)
 84d2064:	7f 0a                	jg     84d2070 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x3e6>
 84d2066:	b8 b7 31 00 00       	mov    $0x31b7,%eax
 84d206b:	e9 81 02 00 00       	jmp    84d22f1 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x667>
 84d2070:	66 83 7d e6 31       	cmpw   $0x31,-0x1a(%ebp)
 84d2075:	0f 8e ad 00 00 00    	jle    84d2128 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x49e>
 84d207b:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84d207e:	89 04 24             	mov    %eax,(%esp)
 84d2081:	e8 ce 97 bf ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84d2086:	c7 45 91 24 00 00 00 	movl   $0x24,-0x6f(%ebp)
 84d208d:	c6 45 90 02          	movb   $0x2,-0x70(%ebp)
 84d2091:	c7 45 96 05 00 00 00 	movl   $0x5,-0x6a(%ebp)
 84d2098:	66 c7 45 9a 00 00    	movw   $0x0,-0x66(%ebp)
 84d209e:	8d 45 8f             	lea    -0x71(%ebp),%eax
 84d20a1:	89 04 24             	mov    %eax,(%esp)
 84d20a4:	e8 e9 97 bf ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 84d20a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d20ac:	89 04 24             	mov    %eax,(%esp)
 84d20af:	e8 dc 9b bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d20b4:	89 c3                	mov    %eax,%ebx
 84d20b6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d20b9:	8b 00                	mov    (%eax),%eax
 84d20bb:	89 c6                	mov    %eax,%esi
 84d20bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d20c4:	00 
 84d20c5:	c7 44 24 08 9b 8c c8 	movl   $0x8c88c9b,0x8(%esp)
 84d20cc:	08 
 84d20cd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d20d4:	00 
 84d20d5:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d20dc:	e8 1d 37 5d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d20e1:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84d20e8:	00 
 84d20e9:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84d20f0:	00 
 84d20f1:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84d20f5:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84d20fc:	00 
 84d20fd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d2104:	00 
 84d2105:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d210c:	00 
 84d210d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d2111:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d2118:	00 
 84d2119:	8d 55 8f             	lea    -0x71(%ebp),%edx
 84d211c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d2120:	89 04 24             	mov    %eax,(%esp)
 84d2123:	e8 c0 34 08 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84d2128:	66 83 7d e6 27       	cmpw   $0x27,-0x1a(%ebp)
 84d212d:	0f 8e c2 00 00 00    	jle    84d21f5 <_ZN25Inter_ReqChangeCharacName12dispatch_sigEP5CUserPci+0x56b>
 84d2133:	8d 85 52 ff ff ff    	lea    -0xae(%ebp),%eax
 84d2139:	89 04 24             	mov    %eax,(%esp)
 84d213c:	e8 13 97 bf ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84d2141:	c7 85 54 ff ff ff 10 	movl   $0x10,-0xac(%ebp)
 84d2148:	00 00 00 
 84d214b:	c6 85 53 ff ff ff 02 	movb   $0x2,-0xad(%ebp)
 84d2152:	c7 85 59 ff ff ff 01 	movl   $0x1,-0xa7(%ebp)
 84d2159:	00 00 00 
 84d215c:	66 c7 85 5d ff ff ff 	movw   $0x0,-0xa3(%ebp)
 84d2163:	00 00 
 84d2165:	8d 85 52 ff ff ff    	lea    -0xae(%ebp),%eax
 84d216b:	89 04 24             	mov    %eax,(%esp)
 84d216e:	e8 1f 97 bf ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 84d2173:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2176:	89 04 24             	mov    %eax,(%esp)
 84d2179:	e8 12 9b bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d217e:	89 c3                	mov    %eax,%ebx
 84d2180:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d2183:	8b 00                	mov    (%eax),%eax
 84d2185:	89 c6                	mov    %eax,%esi
 84d2187:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d218e:	00 
 84d218f:	c7 44 24 08 9b 8c c8 	movl   $0x8c88c9b,0x8(%esp)
 84d2196:	08 
 84d2197:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d219e:	00 
 84d219f:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d21a6:	e8 53 36 5d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d21ab:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84d21b2:	00 
 84d21b3:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84d21ba:	00 
 84d21bb:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84d21bf:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84d21c6:	00 
 84d21c7:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d21ce:	00 
 84d21cf:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d21d6:	00 
 84d21d7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d21db:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d21e2:	00 
 84d21e3:	8d 95 52 ff ff ff    	lea    -0xae(%ebp),%edx
 84d21e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d21ed:	89 04 24             	mov    %eax,(%esp)
 84d21f0:	e8 f3 33 08 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84d21f5:	8d 85 15 ff ff ff    	lea    -0xeb(%ebp),%eax
 84d21fb:	89 04 24             	mov    %eax,(%esp)
 84d21fe:	e8 51 96 bf ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84d2203:	c7 85 17 ff ff ff 01 	movl   $0x1,-0xe9(%ebp)
 84d220a:	00 00 00 
 84d220d:	c6 85 16 ff ff ff 02 	movb   $0x2,-0xea(%ebp)
 84d2214:	c7 85 1c ff ff ff 0a 	movl   $0xa,-0xe4(%ebp)
 84d221b:	00 00 00 
 84d221e:	66 c7 85 20 ff ff ff 	movw   $0x0,-0xe0(%ebp)
 84d2225:	00 00 
 84d2227:	8d 85 15 ff ff ff    	lea    -0xeb(%ebp),%eax
 84d222d:	89 04 24             	mov    %eax,(%esp)
 84d2230:	e8 5d 96 bf ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 84d2235:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2238:	89 04 24             	mov    %eax,(%esp)
 84d223b:	e8 50 9a bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d2240:	89 c3                	mov    %eax,%ebx
 84d2242:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d2245:	8b 00                	mov    (%eax),%eax
 84d2247:	89 c6                	mov    %eax,%esi
 84d2249:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d2250:	00 
 84d2251:	c7 44 24 08 9b 8c c8 	movl   $0x8c88c9b,0x8(%esp)
 84d2258:	08 
 84d2259:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d2260:	00 
 84d2261:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84d2268:	e8 91 35 5d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84d226d:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84d2274:	00 
 84d2275:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84d227c:	00 
 84d227d:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84d2281:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84d2288:	00 
 84d2289:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d2290:	00 
 84d2291:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d2298:	00 
 84d2299:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d229d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d22a4:	00 
 84d22a5:	8d 95 15 ff ff ff    	lea    -0xeb(%ebp),%edx
 84d22ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d22af:	89 04 24             	mov    %eax,(%esp)
 84d22b2:	e8 31 33 08 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84d22b7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d22ba:	8b 40 28             	mov    0x28(%eax),%eax
 84d22bd:	89 c3                	mov    %eax,%ebx
 84d22bf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d22c2:	83 c0 04             	add    $0x4,%eax
 84d22c5:	89 c1                	mov    %eax,%ecx
 84d22c7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d22ca:	8b 10                	mov    (%eax),%edx
 84d22cc:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84d22d1:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84d22d5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84d22d9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d22dd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d22e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d22e4:	89 04 24             	mov    %eax,(%esp)
 84d22e7:	e8 8a 3f c4 ff       	call   8116276 <_ZN13CEventManager16changeCharacNameEP5CUseriPci>
 84d22ec:	b8 00 00 00 00       	mov    $0x0,%eax
 84d22f1:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 84d22f7:	5b                   	pop    %ebx
 84d22f8:	5e                   	pop    %esi
 84d22f9:	5f                   	pop    %edi
 84d22fa:	5d                   	pop    %ebp
 84d22fb:	c3                   	ret

```

```c
// Inter_ReqChangeCharacName::dispatch_sig @ 0x84d1c8a

/* Inter_ReqChangeCharacName::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqChangeCharacName::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  CGuildServerProxy *pCVar8;
  CMonitorServerProxy *pCVar9;
  undefined4 uVar10;
  Inven_Item local_ef;
  undefined1 local_ee;
  undefined4 local_ed;
  undefined4 local_e8;
  undefined2 local_e4;
  Inven_Item local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined4 local_ab;
  undefined2 local_a7;
  Inven_Item local_75;
  undefined1 local_74;
  undefined4 local_73;
  undefined4 local_6e;
  undefined2 local_6a;
  PacketGuard local_38 [12];
  string local_2c;
  allocator<char> local_25;
  uint *local_24;
  short local_1e;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 < 2) {
    uVar5 = 0;
  }
  else {
    local_24 = (uint *)param_3;
    if (*(int *)(param_3 + 0x24) == 0) {
      cVar3 = CUser::setCharacName((CUser *)param_2,*(int *)param_3,(char *)(param_3 + 4));
      if (cVar3 == '\0') {
        uVar5 = 0x31ae;
      }
      else {
        PacketGuard::PacketGuard(local_38);
                    /* try { // try from 084d1d5f to 084d1db7 has its CatchHandler @ 084d1fe6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x8a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        CUser::Send((CUser *)param_2,local_38);
        CUser::SetCharacViewStateByCharacNo((CUser *)param_2,*local_24,1);
        std::allocator<char>::allocator();
                    /* try { // try from 084d1dda to 084d1dde has its CatchHandler @ 084d1e1e */
        std::string::string((string *)&local_2c,(char *)(local_24 + 1),(allocator *)&local_25);
                    /* try { // try from 084d1df5 to 084d1df9 has its CatchHandler @ 084d1dfc */
        CUser::UpdateCharacNameInMercenary((CUser *)param_2,*local_24,&local_2c);
                    /* try { // try from 084d1e17 to 084d1e1b has its CatchHandler @ 084d1e1e */
        std::string::~string((string *)&local_2c);
        std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 084d1e47 to 084d1fe3 has its CatchHandler @ 084d1fe6 */
        CUser::UpdateCharacView((CUser *)param_2);
        if (local_24[0xb] != 0) {
          puVar6 = local_24 + 1;
          uVar1 = local_24[0xb];
          uVar2 = *local_24;
          uVar7 = CUser::get_acc_id((CUser *)param_2);
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar5);
          CGuildServerProxy::SendChangeCharName(pCVar8,uVar7,uVar2,uVar1,(char *)puVar6);
        }
        puVar6 = local_24 + 1;
        uVar1 = local_24[0xb];
        uVar2 = *local_24;
        uVar7 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        pCVar9 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,uVar5);
        CMonitorServerProxy::SendChangeCharName(pCVar9,uVar7,uVar2,uVar1,(char *)puVar6);
        if (local_24[0xb] != 0) {
          puVar6 = local_24 + 1;
          uVar1 = local_24[0xb];
          uVar2 = *local_24;
          uVar7 = CUser::get_acc_id((CUser *)param_2);
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar5);
          CGuildServerProxy::SendChangeCharName(pCVar8,uVar7,uVar2,uVar1,(char *)puVar6);
        }
        puVar6 = local_24 + 1;
        uVar1 = local_24[0xb];
        uVar2 = *local_24;
        uVar7 = CUser::get_acc_id((CUser *)param_2);
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        pCVar9 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,uVar5);
        CMonitorServerProxy::SendChangeCharName(pCVar9,uVar7,uVar2,uVar1,(char *)puVar6);
        PacketGuard::~PacketGuard(local_38);
        if (local_24[10] == 0) {
          iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          if (0x464a1f50 < iVar4) {
            return 0;
          }
          local_1e = CUser::getCharacLevelByCharacNo((CUser *)param_2,*local_24);
          if (local_1e < 1) {
            return 0x31b7;
          }
          if (0x31 < local_1e) {
            Inven_Item::Inven_Item(&local_75);
            local_73 = 0x24;
            local_74 = 2;
            local_6e = 5;
            local_6a = 0;
            Inven_Item::ResetItemAttr(&local_75);
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            uVar1 = *local_24;
            uVar10 = RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_01",(bool *)0x0);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar10,&local_75,0,uVar1,0,0,0,uVar5,0,0);
          }
          if (0x27 < local_1e) {
            Inven_Item::Inven_Item(&local_b2);
            local_b0 = 0x10;
            local_b1 = 2;
            local_ab = 1;
            local_a7 = 0;
            Inven_Item::ResetItemAttr(&local_b2);
            uVar5 = CUser::GetServerGroup((CUser *)param_2);
            uVar1 = *local_24;
            uVar10 = RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_01",(bool *)0x0);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar10,&local_b2,0,uVar1,0,0,0,uVar5,0,0);
          }
          Inven_Item::Inven_Item(&local_ef);
          local_ed = 1;
          local_ee = 2;
          local_e8 = 10;
          local_e4 = 0;
          Inven_Item::ResetItemAttr(&local_ef);
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          uVar1 = *local_24;
          uVar10 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_01",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar10,&local_ef,0,uVar1,0,0,0,uVar5,0,0)
          ;
        }
        CEventManager::changeCharacName
                  (GlobalData::s_event_manager,(CUser *)param_2,*local_24,(char *)(local_24 + 1),
                   local_24[10]);
        uVar5 = 0;
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x8a,*(uint *)(param_3 + 0x24) & 0xff);
      CUser::SetCharacViewStateByCharacNo((CUser *)param_2,*local_24,0xff);
      CUser::UpdateCharacView((CUser *)param_2);
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

