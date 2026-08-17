# Inter_MonitorLoginOK

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c7e0c Inter_MonitorLoginOK::dispatch_sig  [0x084c7e0c-0x84c89b1] ===
 84c7e0c:	55                   	push   %ebp
 84c7e0d:	89 e5                	mov    %esp,%ebp
 84c7e0f:	57                   	push   %edi
 84c7e10:	56                   	push   %esi
 84c7e11:	53                   	push   %ebx
 84c7e12:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 84c7e18:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7e1b:	89 04 24             	mov    %eax,(%esp)
 84c7e1e:	e8 69 25 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c7e23:	85 c0                	test   %eax,%eax
 84c7e25:	0f 94 c0             	sete   %al
 84c7e28:	84 c0                	test   %al,%al
 84c7e2a:	74 0a                	je     84c7e36 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x2a>
 84c7e2c:	bb 6a 20 00 00       	mov    $0x206a,%ebx
 84c7e31:	e9 6e 0b 00 00       	jmp    84c89a4 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb98>
 84c7e36:	8b 45 10             	mov    0x10(%ebp),%eax
 84c7e39:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84c7e3c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7e43:	00 
 84c7e44:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7e47:	89 04 24             	mov    %eax,(%esp)
 84c7e4a:	e8 0d 7f d6 ff       	call   822fd5c <_ZN5CUser20SetLastLoginCharacNoEi>
 84c7e4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7e56:	00 
 84c7e57:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7e5a:	89 04 24             	mov    %eax,(%esp)
 84c7e5d:	e8 0c 7f d6 ff       	call   822fd6e <_ZN5CUser21SetLastLoginChannelNoEi>
 84c7e62:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7e69:	00 
 84c7e6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c7e6d:	89 04 24             	mov    %eax,(%esp)
 84c7e70:	e8 0b 7f d6 ff       	call   822fd80 <_ZN5CUser23SetValidLastLoginCharacEb>
 84c7e75:	e8 2d 25 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c7e7a:	89 04 24             	mov    %eax,(%esp)
 84c7e7d:	e8 9e ec c4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c7e82:	83 f8 08             	cmp    $0x8,%eax
 84c7e85:	0f 94 c0             	sete   %al
 84c7e88:	84 c0                	test   %al,%al
 84c7e8a:	0f 84 8e 00 00 00    	je     84c7f1e <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x112>
 84c7e90:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7e93:	8b 40 24             	mov    0x24(%eax),%eax
 84c7e96:	85 c0                	test   %eax,%eax
 84c7e98:	0f 85 80 00 00 00    	jne    84c7f1e <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x112>
 84c7e9e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7ea1:	8b 40 28             	mov    0x28(%eax),%eax
 84c7ea4:	85 c0                	test   %eax,%eax
 84c7ea6:	75 76                	jne    84c7f1e <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x112>
 84c7ea8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7eab:	8b 78 28             	mov    0x28(%eax),%edi
 84c7eae:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7eb1:	8b 70 24             	mov    0x24(%eax),%esi
 84c7eb4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7eb7:	8b 40 0e             	mov    0xe(%eax),%eax
 84c7eba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7ec1:	00 
 84c7ec2:	89 04 24             	mov    %eax,(%esp)
 84c7ec5:	e8 81 11 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c7eca:	89 c3                	mov    %eax,%ebx
 84c7ecc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c7ed3:	00 
 84c7ed4:	c7 44 24 08 75 20 00 	movl   $0x2075,0x8(%esp)
 84c7edb:	00 
 84c7edc:	c7 44 24 04 20 de c8 	movl   $0x8c8de20,0x4(%esp)
 84c7ee3:	08 
 84c7ee4:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84c7eea:	89 04 24             	mov    %eax,(%esp)
 84c7eed:	e8 26 78 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c7ef2:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c7ef6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c7efa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c7efe:	c7 44 24 04 fc 76 c8 	movl   $0x8c876fc,0x4(%esp)
 84c7f05:	08 
 84c7f06:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 84c7f0c:	89 04 24             	mov    %eax,(%esp)
 84c7f0f:	e8 74 78 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c7f14:	bb 76 20 00 00       	mov    $0x2076,%ebx
 84c7f19:	e9 86 0a 00 00       	jmp    84c89a4 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb98>
 84c7f1e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7f21:	8b 78 28             	mov    0x28(%eax),%edi
 84c7f24:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7f27:	8b 70 24             	mov    0x24(%eax),%esi
 84c7f2a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7f2d:	8b 40 0e             	mov    0xe(%eax),%eax
 84c7f30:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7f37:	00 
 84c7f38:	89 04 24             	mov    %eax,(%esp)
 84c7f3b:	e8 0b 11 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c7f40:	89 c3                	mov    %eax,%ebx
 84c7f42:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c7f49:	00 
 84c7f4a:	c7 44 24 08 7a 20 00 	movl   $0x207a,0x8(%esp)
 84c7f51:	00 
 84c7f52:	c7 44 24 04 20 de c8 	movl   $0x8c8de20,0x4(%esp)
 84c7f59:	08 
 84c7f5a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c7f60:	89 04 24             	mov    %eax,(%esp)
 84c7f63:	e8 b0 77 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c7f68:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c7f6c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c7f70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c7f74:	c7 44 24 04 fc 76 c8 	movl   $0x8c876fc,0x4(%esp)
 84c7f7b:	08 
 84c7f7c:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 84c7f82:	89 04 24             	mov    %eax,(%esp)
 84c7f85:	e8 fe 77 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c7f8a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c7f90:	89 04 24             	mov    %eax,(%esp)
 84c7f93:	e8 b4 5d 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c7f98:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c7f9f:	00 
 84c7fa0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c7fa7:	00 
 84c7fa8:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c7fae:	89 04 24             	mov    %eax,(%esp)
 84c7fb1:	e8 46 39 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c7fb6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c7fb9:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 84c7fbd:	3c 02                	cmp    $0x2,%al
 84c7fbf:	0f 85 ba 00 00 00    	jne    84c807f <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x273>
 84c7fc5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7fcc:	00 
 84c7fcd:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c7fd3:	89 04 24             	mov    %eax,(%esp)
 84c7fd6:	e8 45 39 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c7fdb:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 84c7fe2:	00 
 84c7fe3:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c7fe9:	89 04 24             	mov    %eax,(%esp)
 84c7fec:	e8 2f 39 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c7ff1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c7ff8:	00 
 84c7ff9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c7fff:	89 04 24             	mov    %eax,(%esp)
 84c8002:	e8 51 39 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c8007:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c800d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8011:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8014:	89 04 24             	mov    %eax,(%esp)
 84c8017:	e8 9e 05 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c801c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8023:	00 
 84c8024:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c802b:	00 
 84c802c:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 84c8033:	00 
 84c8034:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8037:	89 04 24             	mov    %eax,(%esp)
 84c803a:	e8 b5 09 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c803f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8046:	00 
 84c8047:	c7 44 24 08 88 20 00 	movl   $0x2088,0x8(%esp)
 84c804e:	00 
 84c804f:	c7 44 24 04 20 de c8 	movl   $0x8c8de20,0x4(%esp)
 84c8056:	08 
 84c8057:	8d 45 80             	lea    -0x80(%ebp),%eax
 84c805a:	89 04 24             	mov    %eax,(%esp)
 84c805d:	e8 b6 76 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c8062:	c7 44 24 04 3c 77 c8 	movl   $0x8c8773c,0x4(%esp)
 84c8069:	08 
 84c806a:	8d 45 80             	lea    -0x80(%ebp),%eax
 84c806d:	89 04 24             	mov    %eax,(%esp)
 84c8070:	e8 13 77 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8075:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c807a:	e9 17 09 00 00       	jmp    84c8996 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb8a>
 84c807f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c8082:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 84c8086:	3c 03                	cmp    $0x3,%al
 84c8088:	0f 85 ba 00 00 00    	jne    84c8148 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x33c>
 84c808e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c8095:	00 
 84c8096:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c809c:	89 04 24             	mov    %eax,(%esp)
 84c809f:	e8 7c 38 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c80a4:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 84c80ab:	00 
 84c80ac:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c80b2:	89 04 24             	mov    %eax,(%esp)
 84c80b5:	e8 66 38 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c80ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c80c1:	00 
 84c80c2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c80c8:	89 04 24             	mov    %eax,(%esp)
 84c80cb:	e8 88 38 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c80d0:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c80d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c80da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c80dd:	89 04 24             	mov    %eax,(%esp)
 84c80e0:	e8 d5 04 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c80e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c80ec:	00 
 84c80ed:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c80f4:	00 
 84c80f5:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 84c80fc:	00 
 84c80fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8100:	89 04 24             	mov    %eax,(%esp)
 84c8103:	e8 ec 08 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c8108:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c810f:	00 
 84c8110:	c7 44 24 08 95 20 00 	movl   $0x2095,0x8(%esp)
 84c8117:	00 
 84c8118:	c7 44 24 04 20 de c8 	movl   $0x8c8de20,0x4(%esp)
 84c811f:	08 
 84c8120:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c8123:	89 04 24             	mov    %eax,(%esp)
 84c8126:	e8 ed 75 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c812b:	c7 44 24 04 3c 77 c8 	movl   $0x8c8773c,0x4(%esp)
 84c8132:	08 
 84c8133:	8d 45 90             	lea    -0x70(%ebp),%eax
 84c8136:	89 04 24             	mov    %eax,(%esp)
 84c8139:	e8 4a 76 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c813e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c8143:	e9 4e 08 00 00       	jmp    84c8996 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb8a>
 84c8148:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c814b:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 84c814f:	3c 01                	cmp    $0x1,%al
 84c8151:	0f 85 d4 07 00 00    	jne    84c892b <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb1f>
 84c8157:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c815e:	00 
 84c815f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8165:	89 04 24             	mov    %eax,(%esp)
 84c8168:	e8 b3 37 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c816d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8170:	89 04 24             	mov    %eax,(%esp)
 84c8173:	e8 fa 8e c3 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84c8178:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 84c817f:	00 
 84c8180:	89 04 24             	mov    %eax,(%esp)
 84c8183:	e8 18 67 bb ff       	call   807e8a0 <strnlen@plt>
 84c8188:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84c818b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c818e:	89 04 24             	mov    %eax,(%esp)
 84c8191:	e8 98 7b d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c8196:	89 04 24             	mov    %eax,(%esp)
 84c8199:	e8 3c 6e d6 ff       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 84c819e:	84 c0                	test   %al,%al
 84c81a0:	74 07                	je     84c81a9 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x39d>
 84c81a2:	b8 01 00 00 00       	mov    $0x1,%eax
 84c81a7:	eb 05                	jmp    84c81ae <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x3a2>
 84c81a9:	b8 00 00 00 00       	mov    $0x0,%eax
 84c81ae:	88 45 da             	mov    %al,-0x26(%ebp)
 84c81b1:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 84c81b5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84c81b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c81bc:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c81c2:	89 04 24             	mov    %eax,(%esp)
 84c81c5:	e8 72 37 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c81ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c81cd:	89 04 24             	mov    %eax,(%esp)
 84c81d0:	e8 9d 8e c3 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84c81d5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84c81d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c81dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c81e0:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c81e6:	89 04 24             	mov    %eax,(%esp)
 84c81e9:	e8 82 35 d6 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84c81ee:	0f be 45 da          	movsbl -0x26(%ebp),%eax
 84c81f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c81f6:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c81fc:	89 04 24             	mov    %eax,(%esp)
 84c81ff:	e8 1c 37 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8204:	0f be 45 db          	movsbl -0x25(%ebp),%eax
 84c8208:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c820c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8212:	89 04 24             	mov    %eax,(%esp)
 84c8215:	e8 06 37 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c821a:	e8 62 3f c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c821f:	89 04 24             	mov    %eax,(%esp)
 84c8222:	e8 b9 ea c3 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 84c8227:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c822a:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 84c822e:	75 18                	jne    84c8248 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x43c>
 84c8230:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c8237:	00 
 84c8238:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c823e:	89 04 24             	mov    %eax,(%esp)
 84c8241:	e8 da 36 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8246:	eb 35                	jmp    84c827d <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x471>
 84c8248:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c824b:	89 04 24             	mov    %eax,(%esp)
 84c824e:	e8 cb 6b ca ff       	call   816ee1e <_ZN5CUser17getGarenaAuthDataEv>
 84c8253:	89 04 24             	mov    %eax,(%esp)
 84c8256:	e8 c7 ad ca ff       	call   8173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>
 84c825b:	84 c0                	test   %al,%al
 84c825d:	74 07                	je     84c8266 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x45a>
 84c825f:	b8 01 00 00 00       	mov    $0x1,%eax
 84c8264:	eb 05                	jmp    84c826b <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x45f>
 84c8266:	b8 00 00 00 00       	mov    $0x0,%eax
 84c826b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c826f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8275:	89 04 24             	mov    %eax,(%esp)
 84c8278:	e8 a3 36 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c827d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8280:	89 04 24             	mov    %eax,(%esp)
 84c8283:	e8 00 5d c3 ff       	call   80fdf88 <_ZN5CUser6GetAgeEv>
 84c8288:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c828c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8292:	89 04 24             	mov    %eax,(%esp)
 84c8295:	e8 86 36 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c829a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c829d:	89 04 24             	mov    %eax,(%esp)
 84c82a0:	e8 5b 48 02 00       	call   84ecb00 <_ZNK5CUser12IsPCRoomUserEv>
 84c82a5:	0f b6 c0             	movzbl %al,%eax
 84c82a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c82ac:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c82b2:	89 04 24             	mov    %eax,(%esp)
 84c82b5:	e8 66 36 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c82ba:	e8 e8 20 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84c82bf:	89 04 24             	mov    %eax,(%esp)
 84c82c2:	e8 59 e8 c4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84c82c7:	0f b6 c0             	movzbl %al,%eax
 84c82ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c82ce:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c82d4:	89 04 24             	mov    %eax,(%esp)
 84c82d7:	e8 44 36 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c82dc:	e8 ba 3e c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84c82e1:	89 04 24             	mov    %eax,(%esp)
 84c82e4:	e8 21 10 02 00       	call   84e930a <_ZN12CDataManager28GetUpgradeRevisionPvPChannelEv>
 84c82e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c82ed:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c82f3:	89 04 24             	mov    %eax,(%esp)
 84c82f6:	e8 25 36 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c82fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c82fe:	89 04 24             	mov    %eax,(%esp)
 84c8301:	e8 0c 44 02 00       	call   84ec712 <_ZN5CUser19isTournamentAccountEv>
 84c8306:	0f b6 c0             	movzbl %al,%eax
 84c8309:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c830d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8313:	89 04 24             	mov    %eax,(%esp)
 84c8316:	e8 05 36 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c831b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c831e:	89 04 24             	mov    %eax,(%esp)
 84c8321:	e8 48 20 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c8326:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c832a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8330:	89 04 24             	mov    %eax,(%esp)
 84c8333:	e8 04 36 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c8338:	e8 44 3e c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c833d:	05 45 03 00 00       	add    $0x345,%eax
 84c8342:	89 04 24             	mov    %eax,(%esp)
 84c8345:	e8 66 60 bb ff       	call   807e3b0 <strlen@plt>
 84c834a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c834e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8354:	89 04 24             	mov    %eax,(%esp)
 84c8357:	e8 e0 35 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c835c:	e8 20 3e c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c8361:	05 45 03 00 00       	add    $0x345,%eax
 84c8366:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84c836d:	00 
 84c836e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8372:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8378:	89 04 24             	mov    %eax,(%esp)
 84c837b:	e8 64 f0 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c8380:	e8 fc 3d c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c8385:	8b 80 58 03 00 00    	mov    0x358(%eax),%eax
 84c838b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c838f:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8395:	89 04 24             	mov    %eax,(%esp)
 84c8398:	e8 9f 35 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c839d:	e8 df 3d c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c83a2:	8b 80 5c 03 00 00    	mov    0x35c(%eax),%eax
 84c83a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c83ac:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c83b2:	89 04 24             	mov    %eax,(%esp)
 84c83b5:	e8 82 35 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c83ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c83bd:	89 04 24             	mov    %eax,(%esp)
 84c83c0:	e8 4d 68 1b 00       	call   867ec12 <_ZN5CUser6getSexEv>
 84c83c5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c83c8:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
 84c83cc:	75 07                	jne    84c83d5 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x5c9>
 84c83ce:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 84c83d5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c83d8:	0f be c0             	movsbl %al,%eax
 84c83db:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c83df:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c83e5:	89 04 24             	mov    %eax,(%esp)
 84c83e8:	e8 33 35 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c83ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c83f0:	89 04 24             	mov    %eax,(%esp)
 84c83f3:	e8 88 6f d6 ff       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 84c83f8:	0f b6 c0             	movzbl %al,%eax
 84c83fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c83ff:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8405:	89 04 24             	mov    %eax,(%esp)
 84c8408:	e8 13 35 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c840d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8410:	89 04 24             	mov    %eax,(%esp)
 84c8413:	e8 08 79 d6 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84c8418:	89 04 24             	mov    %eax,(%esp)
 84c841b:	e8 ee 6a d6 ff       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 84c8420:	84 c0                	test   %al,%al
 84c8422:	74 07                	je     84c842b <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x61f>
 84c8424:	b8 01 00 00 00       	mov    $0x1,%eax
 84c8429:	eb 05                	jmp    84c8430 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x624>
 84c842b:	b8 00 00 00 00       	mov    $0x0,%eax
 84c8430:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8434:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c843a:	89 04 24             	mov    %eax,(%esp)
 84c843d:	e8 de 34 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8442:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8445:	89 04 24             	mov    %eax,(%esp)
 84c8448:	e8 d3 78 d6 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84c844d:	89 04 24             	mov    %eax,(%esp)
 84c8450:	e8 c5 6a d6 ff       	call   822ef1a <_ZNK8WongWork13CSecurityCard11isCertifiedEv>
 84c8455:	84 c0                	test   %al,%al
 84c8457:	74 07                	je     84c8460 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x654>
 84c8459:	b8 01 00 00 00       	mov    $0x1,%eax
 84c845e:	eb 05                	jmp    84c8465 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x659>
 84c8460:	b8 00 00 00 00       	mov    $0x0,%eax
 84c8465:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8469:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c846f:	89 04 24             	mov    %eax,(%esp)
 84c8472:	e8 a9 34 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8477:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c847a:	89 04 24             	mov    %eax,(%esp)
 84c847d:	e8 ac 78 d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c8482:	89 04 24             	mov    %eax,(%esp)
 84c8485:	e8 64 39 02 00       	call   84ebdee <_ZN8Sanicova4CPad14getVersionInfoEv>
 84c848a:	0f be c0             	movsbl %al,%eax
 84c848d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8491:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8497:	89 04 24             	mov    %eax,(%esp)
 84c849a:	e8 81 34 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c849f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c84a2:	89 04 24             	mov    %eax,(%esp)
 84c84a5:	e8 84 78 d6 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84c84aa:	89 04 24             	mov    %eax,(%esp)
 84c84ad:	e8 34 6b d6 ff       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 84c84b2:	0f b6 c0             	movzbl %al,%eax
 84c84b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c84b9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c84bf:	89 04 24             	mov    %eax,(%esp)
 84c84c2:	e8 59 34 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c84c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c84ca:	89 04 24             	mov    %eax,(%esp)
 84c84cd:	e8 ac 09 dc ff       	call   8288e7e <_ZN5CUser13isRestingUserEv>
 84c84d2:	0f b6 c0             	movzbl %al,%eax
 84c84d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c84d9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c84df:	89 04 24             	mov    %eax,(%esp)
 84c84e2:	e8 39 34 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c84e7:	c7 44 24 08 4c 00 00 	movl   $0x4c,0x8(%esp)
 84c84ee:	00 
 84c84ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c84f6:	00 
 84c84f7:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 84c84fd:	89 04 24             	mov    %eax,(%esp)
 84c8500:	e8 bb 57 bb ff       	call   807dcc0 <memset@plt>
 84c8505:	c7 85 50 ff ff ff 10 	movl   $0x10,-0xb0(%ebp)
 84c850c:	00 00 00 
 84c850f:	8d 9d 40 ff ff ff    	lea    -0xc0(%ebp),%ebx
 84c8515:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8518:	05 e0 00 00 00       	add    $0xe0,%eax
 84c851d:	89 04 24             	mov    %eax,(%esp)
 84c8520:	e8 93 a7 de ff       	call   82b2cb8 <_ZN8CNetworkILi4096ELi450000EE10get_socketEv>
 84c8525:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 84c852b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84c852f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c8533:	89 04 24             	mov    %eax,(%esp)
 84c8536:	e8 55 61 bb ff       	call   807e690 <getpeername@plt>
 84c853b:	85 c0                	test   %eax,%eax
 84c853d:	0f 94 c0             	sete   %al
 84c8540:	84 c0                	test   %al,%al
 84c8542:	74 43                	je     84c8587 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x77b>
 84c8544:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 84c854a:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 84c8550:	c7 85 34 ff ff ff ff 	movl   $0xffffffff,-0xcc(%ebp)
 84c8557:	ff ff ff 
 84c855a:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 84c855f:	8b 00                	mov    (%eax),%eax
 84c8561:	83 c0 04             	add    $0x4,%eax
 84c8564:	8b 38                	mov    (%eax),%edi
 84c8566:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8569:	89 04 24             	mov    %eax,(%esp)
 84c856c:	e8 1b 43 02 00       	call   84ec88c <_ZN5CUser16getClientVersionEv>
 84c8571:	89 c6                	mov    %eax,%esi
 84c8573:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8576:	89 04 24             	mov    %eax,(%esp)
 84c8579:	e8 f0 1d c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c857e:	89 c3                	mov    %eax,%ebx
 84c8580:	e8 fc 3b c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c8585:	eb 0a                	jmp    84c8591 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x785>
 84c8587:	bb 14 21 00 00       	mov    $0x2114,%ebx
 84c858c:	e9 05 04 00 00       	jmp    84c8996 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb8a>
 84c8591:	89 04 24             	mov    %eax,(%esp)
 84c8594:	e8 7d bf d6 ff       	call   8234516 <_ZNK12CEnvironment18getProcessSequenceEv>
 84c8599:	8b 15 e4 f7 41 09    	mov    0x941f7e4,%edx
 84c859f:	8d 8d f4 fe ff ff    	lea    -0x10c(%ebp),%ecx
 84c85a5:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84c85a9:	89 74 24 10          	mov    %esi,0x10(%esp)
 84c85ad:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84c85b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c85b8:	00 
 84c85b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c85bd:	89 14 24             	mov    %edx,(%esp)
 84c85c0:	ff d7                	call   *%edi
 84c85c2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c85c5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84c85c9:	0f 89 82 00 00 00    	jns    84c8651 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x845>
 84c85cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c85d2:	89 04 24             	mov    %eax,(%esp)
 84c85d5:	e8 b2 42 02 00       	call   84ec88c <_ZN5CUser16getClientVersionEv>
 84c85da:	89 c7                	mov    %eax,%edi
 84c85dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c85df:	89 04 24             	mov    %eax,(%esp)
 84c85e2:	e8 87 1d c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c85e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c85ee:	00 
 84c85ef:	89 04 24             	mov    %eax,(%esp)
 84c85f2:	e8 54 0a c4 ff       	call   810904b <_Z14NumberToStringji>
 84c85f7:	89 c6                	mov    %eax,%esi
 84c85f9:	e8 83 3b c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c85fe:	89 04 24             	mov    %eax,(%esp)
 84c8601:	e8 10 bf d6 ff       	call   8234516 <_ZNK12CEnvironment18getProcessSequenceEv>
 84c8606:	89 c3                	mov    %eax,%ebx
 84c8608:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c860f:	00 
 84c8610:	c7 44 24 08 1b 21 00 	movl   $0x211b,0x8(%esp)
 84c8617:	00 
 84c8618:	c7 44 24 04 20 de c8 	movl   $0x8c8de20,0x4(%esp)
 84c861f:	08 
 84c8620:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84c8623:	89 04 24             	mov    %eax,(%esp)
 84c8626:	e8 ed 70 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c862b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c862e:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c8632:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c8636:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c863a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c863e:	c7 44 24 04 6c 77 c8 	movl   $0x8c8776c,0x4(%esp)
 84c8645:	08 
 84c8646:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84c8649:	89 04 24             	mov    %eax,(%esp)
 84c864c:	e8 37 71 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8651:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8654:	c7 80 00 cf 08 00 00 	movl   $0x0,0x8cf00(%eax)
 84c865b:	00 00 00 
 84c865e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8661:	c6 80 51 d2 08 00 00 	movb   $0x0,0x8d251(%eax)
 84c8668:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c866b:	c6 80 52 d2 08 00 00 	movb   $0x0,0x8d252(%eax)
 84c8672:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 84c8677:	8b 00                	mov    (%eax),%eax
 84c8679:	83 c0 20             	add    $0x20,%eax
 84c867c:	8b 30                	mov    (%eax),%esi
 84c867e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8681:	89 04 24             	mov    %eax,(%esp)
 84c8684:	e8 03 42 02 00       	call   84ec88c <_ZN5CUser16getClientVersionEv>
 84c8689:	89 c3                	mov    %eax,%ebx
 84c868b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c868e:	89 04 24             	mov    %eax,(%esp)
 84c8691:	e8 d8 1c c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c8696:	8b 15 e4 f7 41 09    	mov    0x941f7e4,%edx
 84c869c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84c86a0:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 84c86a7:	ff 
 84c86a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c86ac:	89 14 24             	mov    %edx,(%esp)
 84c86af:	ff d6                	call   *%esi
 84c86b1:	83 f8 ff             	cmp    $0xffffffff,%eax
 84c86b4:	0f 94 c0             	sete   %al
 84c86b7:	84 c0                	test   %al,%al
 84c86b9:	74 7b                	je     84c8736 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x92a>
 84c86bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c86be:	89 04 24             	mov    %eax,(%esp)
 84c86c1:	e8 c6 41 02 00       	call   84ec88c <_ZN5CUser16getClientVersionEv>
 84c86c6:	89 c7                	mov    %eax,%edi
 84c86c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c86cb:	89 04 24             	mov    %eax,(%esp)
 84c86ce:	e8 9b 1c c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c86d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c86da:	00 
 84c86db:	89 04 24             	mov    %eax,(%esp)
 84c86de:	e8 68 09 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c86e3:	89 c6                	mov    %eax,%esi
 84c86e5:	e8 97 3a c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84c86ea:	89 04 24             	mov    %eax,(%esp)
 84c86ed:	e8 24 be d6 ff       	call   8234516 <_ZNK12CEnvironment18getProcessSequenceEv>
 84c86f2:	89 c3                	mov    %eax,%ebx
 84c86f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c86fb:	00 
 84c86fc:	c7 44 24 08 2c 21 00 	movl   $0x212c,0x8(%esp)
 84c8703:	00 
 84c8704:	c7 44 24 04 20 de c8 	movl   $0x8c8de20,0x4(%esp)
 84c870b:	08 
 84c870c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84c870f:	89 04 24             	mov    %eax,(%esp)
 84c8712:	e8 01 70 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c8717:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84c871b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84c871f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c8723:	c7 44 24 04 b8 77 c8 	movl   $0x8c877b8,0x4(%esp)
 84c872a:	08 
 84c872b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84c872e:	89 04 24             	mov    %eax,(%esp)
 84c8731:	e8 52 70 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8736:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c8739:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c873d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8740:	89 04 24             	mov    %eax,(%esp)
 84c8743:	e8 32 41 02 00       	call   84ec87a <_ZN5CUser13setAntibotKeyEi>
 84c8748:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c874b:	89 04 24             	mov    %eax,(%esp)
 84c874e:	e8 a5 6b d6 ff       	call   822f2f8 <_ZN15CUserCharacInfo25getUserEventCharacterFlagEv>
 84c8753:	0f b6 c0             	movzbl %al,%eax
 84c8756:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c875a:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8760:	89 04 24             	mov    %eax,(%esp)
 84c8763:	e8 b8 31 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8768:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c876b:	89 04 24             	mov    %eax,(%esp)
 84c876e:	e8 e5 3f 02 00       	call   84ec758 <_ZN5CUser28getOnlinePreliminaryPlayTypeEv>
 84c8773:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8777:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c877d:	89 04 24             	mov    %eax,(%esp)
 84c8780:	e8 9b 31 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8785:	e8 5e 77 09 00       	call   855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>
 84c878a:	0f b6 c0             	movzbl %al,%eax
 84c878d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8791:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8797:	89 04 24             	mov    %eax,(%esp)
 84c879a:	e8 81 31 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c879f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c87a2:	89 04 24             	mov    %eax,(%esp)
 84c87a5:	e8 c4 1b c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c87aa:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 84c87b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c87b4:	89 14 24             	mov    %edx,(%esp)
 84c87b7:	e8 8a 0b c4 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 84c87bc:	84 c0                	test   %al,%al
 84c87be:	74 07                	je     84c87c7 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x9bb>
 84c87c0:	b8 01 00 00 00       	mov    $0x1,%eax
 84c87c5:	eb 05                	jmp    84c87cc <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0x9c0>
 84c87c7:	b8 00 00 00 00       	mov    $0x0,%eax
 84c87cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c87d0:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c87d6:	89 04 24             	mov    %eax,(%esp)
 84c87d9:	e8 42 31 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c87de:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84c87e3:	89 04 24             	mov    %eax,(%esp)
 84c87e6:	e8 31 c6 d6 ff       	call   8234e1c <_ZNK9CTimeGate6isOpenEv>
 84c87eb:	84 c0                	test   %al,%al
 84c87ed:	74 21                	je     84c8810 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xa04>
 84c87ef:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84c87f4:	89 04 24             	mov    %eax,(%esp)
 84c87f7:	e8 9c 4c 02 00       	call   84ed498 <_ZNK9CTimeGate11getNpcIndexEv>
 84c87fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8800:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8806:	89 04 24             	mov    %eax,(%esp)
 84c8809:	e8 96 16 c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c880e:	eb 16                	jmp    84c8826 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xa1a>
 84c8810:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c8817:	00 
 84c8818:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c881e:	89 04 24             	mov    %eax,(%esp)
 84c8821:	e8 7e 16 c1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84c8826:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c882d:	00 
 84c882e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8834:	89 04 24             	mov    %eax,(%esp)
 84c8837:	e8 1c 31 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c883c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8842:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8846:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8849:	89 04 24             	mov    %eax,(%esp)
 84c884c:	e8 69 fd 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c8851:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8854:	c7 80 f8 96 07 00 00 	movl   $0x0,0x796f8(%eax)
 84c885b:	00 00 00 
 84c885e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8861:	89 04 24             	mov    %eax,(%esp)
 84c8864:	e8 13 1b c1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84c8869:	0f b7 f0             	movzwl %ax,%esi
 84c886c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c886f:	89 04 24             	mov    %eax,(%esp)
 84c8872:	e8 1f 04 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c8877:	89 c3                	mov    %eax,%ebx
 84c8879:	e8 fe db c2 ff       	call   80f647c <_Z12G_TimerQueuev>
 84c887e:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84c8885:	00 
 84c8886:	89 74 24 14          	mov    %esi,0x14(%esp)
 84c888a:	c7 44 24 10 2c 01 00 	movl   $0x12c,0x10(%esp)
 84c8891:	00 
 84c8892:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8899:	00 
 84c889a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c889e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c88a5:	00 
 84c88a6:	89 04 24             	mov    %eax,(%esp)
 84c88a9:	e8 68 85 16 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 84c88ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c88b1:	89 04 24             	mov    %eax,(%esp)
 84c88b4:	e8 0c c3 da ff       	call   8274bc5 <_Z21_NS_NonClient_RequestP5CUser>
 84c88b9:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84c88be:	8b 00                	mov    (%eax),%eax
 84c88c0:	83 c0 2c             	add    $0x2c,%eax
 84c88c3:	8b 08                	mov    (%eax),%ecx
 84c88c5:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84c88ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 84c88cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c88d1:	89 04 24             	mov    %eax,(%esp)
 84c88d4:	ff d1                	call   *%ecx
 84c88d6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c88d9:	8b 40 24             	mov    0x24(%eax),%eax
 84c88dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c88e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c88e3:	89 04 24             	mov    %eax,(%esp)
 84c88e6:	e8 71 74 d6 ff       	call   822fd5c <_ZN5CUser20SetLastLoginCharacNoEi>
 84c88eb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84c88ee:	8b 40 28             	mov    0x28(%eax),%eax
 84c88f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c88f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c88f8:	89 04 24             	mov    %eax,(%esp)
 84c88fb:	e8 6e 74 d6 ff       	call   822fd6e <_ZN5CUser21SetLastLoginChannelNoEi>
 84c8900:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8903:	89 04 24             	mov    %eax,(%esp)
 84c8906:	e8 63 1a c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84c890b:	89 c3                	mov    %eax,%ebx
 84c890d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8910:	89 04 24             	mov    %eax,(%esp)
 84c8913:	e8 7e 03 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84c8918:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c891c:	89 04 24             	mov    %eax,(%esp)
 84c891f:	e8 aa 9b f5 ff       	call   84224ce <_ZN17DB_LoadDnfHackLog11makeRequestEij>
 84c8924:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c8929:	eb 6b                	jmp    84c8996 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb8a>
 84c892b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84c8932:	00 
 84c8933:	c7 44 24 08 09 22 00 	movl   $0x2209,0x8(%esp)
 84c893a:	00 
 84c893b:	c7 44 24 04 20 de c8 	movl   $0x8c8de20,0x4(%esp)
 84c8942:	08 
 84c8943:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84c8946:	89 04 24             	mov    %eax,(%esp)
 84c8949:	e8 ca 6d 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c894e:	c7 44 24 0c 09 22 00 	movl   $0x2209,0xc(%esp)
 84c8955:	00 
 84c8956:	c7 44 24 08 20 de c8 	movl   $0x8c8de20,0x8(%esp)
 84c895d:	08 
 84c895e:	c7 44 24 04 07 78 c8 	movl   $0x8c87807,0x4(%esp)
 84c8965:	08 
 84c8966:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84c8969:	89 04 24             	mov    %eax,(%esp)
 84c896c:	e8 17 6e 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8971:	bb 0d 22 00 00       	mov    $0x220d,%ebx
 84c8976:	eb 1e                	jmp    84c8996 <_ZN20Inter_MonitorLoginOK12dispatch_sigEP5CUserPci+0xb8a>
 84c8978:	89 d3                	mov    %edx,%ebx
 84c897a:	89 c6                	mov    %eax,%esi
 84c897c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c8982:	89 04 24             	mov    %eax,(%esp)
 84c8985:	e8 f6 54 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c898a:	89 f0                	mov    %esi,%eax
 84c898c:	89 da                	mov    %ebx,%edx
 84c898e:	89 04 24             	mov    %eax,(%esp)
 84c8991:	e8 ba ad 61 00       	call   8ae3750 <_Unwind_Resume>
 84c8996:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 84c899c:	89 04 24             	mov    %eax,(%esp)
 84c899f:	e8 dc 54 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c89a4:	89 d8                	mov    %ebx,%eax
 84c89a6:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 84c89ac:	5b                   	pop    %ebx
 84c89ad:	5e                   	pop    %esi
 84c89ae:	5f                   	pop    %edi
 84c89af:	5d                   	pop    %ebp
 84c89b0:	c3                   	ret
 84c89b1:	90                   	nop

```

```c
// Inter_MonitorLoginOK::dispatch_sig @ 0x84c7e0c

/* Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorLoginOK::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  GameWorld *pGVar5;
  undefined4 uVar6;
  char *pcVar7;
  CPad *pCVar8;
  CEnvironment *pCVar9;
  GarenaAuthData *this;
  uint uVar10;
  CDataManager *this_00;
  size_t sVar11;
  CSecurityCard *pCVar12;
  undefined4 uVar13;
  TimerQueue *pTVar14;
  undefined4 uVar15;
  undefined1 local_110 [64];
  undefined4 local_d0;
  char local_c8 [4];
  sockaddr local_c4;
  socklen_t local_b4;
  PacketGuard local_b0 [12];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  size_t local_30;
  char local_2a;
  char local_29;
  int local_28;
  int local_24;
  int local_20;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 0) {
    uVar15 = 0x206a;
  }
  else {
    local_34 = param_3;
    CUser::SetLastLoginCharacNo((CUser *)param_2,0);
    CUser::SetLastLoginChannelNo((CUser *)param_2,0);
    CUser::SetValidLastLoginCharac((CUser *)param_2,false);
    pGVar5 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(pGVar5);
    if (((iVar4 == 8) && (*(int *)(local_34 + 0x24) == 0)) && (*(int *)(local_34 + 0x28) == 0)) {
      uVar15 = *(undefined4 *)(local_34 + 0x28);
      uVar13 = *(undefined4 *)(local_34 + 0x24);
      uVar6 = NumberToString(*(uint *)(local_34 + 0xe),0);
      cMyTrace::cMyTrace(local_a4,
                         "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",0x2075
                         ,0);
      cMyTrace::operator()
                (local_a4,"Inter_MonitorLoginOK() mid(%s), charac_no(%d), channel_no(%d)",uVar6,
                 uVar13,uVar15);
      uVar15 = 0x2076;
    }
    else {
      uVar15 = *(undefined4 *)(local_34 + 0x28);
      uVar13 = *(undefined4 *)(local_34 + 0x24);
      uVar6 = NumberToString(*(uint *)(local_34 + 0xe),0);
      cMyTrace::cMyTrace(local_94,
                         "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",0x207a
                         ,0);
      cMyTrace::operator()
                (local_94,"Inter_MonitorLoginOK() mid(%s), charac_no(%d), channel_no(%d)",uVar6,
                 uVar13,uVar15);
      PacketGuard::PacketGuard(local_b0);
                    /* try { // try from 084c7fb1 to 084c8970 has its CatchHandler @ 084c8978 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_b0,1,1);
      if (*(char *)(local_34 + 0x23) == '\x02') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x12);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
        CUser::Send((CUser *)param_2,local_b0);
        CUser::DisConnSig((CUser *)param_2,0xc,1,0);
        cMyTrace::cMyTrace(local_84,
                           "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                           0x2088,0);
        cMyTrace::operator()(local_84,"info.err_code == SIG_LOGIN_DATA::ERROR_ALREADY");
        uVar15 = 0;
      }
      else if (*(char *)(local_34 + 0x23) == '\x03') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,0x41);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
        CUser::Send((CUser *)param_2,local_b0);
        CUser::DisConnSig((CUser *)param_2,0x15,1,0);
        cMyTrace::cMyTrace(local_74,
                           "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                           0x2095,0);
        cMyTrace::operator()(local_74,"info.err_code == SIG_LOGIN_DATA::ERROR_ALREADY");
        uVar15 = 0;
      }
      else if (*(char *)(local_34 + 0x23) == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
        pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
        local_30 = strnlen(pcVar7,0x14);
        pCVar8 = (CPad *)CUser::getPad((CUser *)param_2);
        cVar2 = Sanicova::CPad::isActivate(pCVar8);
        local_2a = cVar2 != '\0';
        local_29 = '\0';
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,local_30);
        pcVar7 = (char *)CUser::get_acc_name((CUser *)param_2);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_b0,pcVar7,local_30);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)local_2a);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)local_29);
        pCVar9 = (CEnvironment *)G_CEnvironment();
        local_28 = CEnvironment::get_server_group(pCVar9);
        if (local_28 == 3) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,1);
        }
        else {
          this = (GarenaAuthData *)CUser::getGarenaAuthData((CUser *)param_2);
          cVar2 = Taiwan::GarenaAuthData::getMobileAuth(this);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
        }
        iVar4 = CUser::GetAge((CUser *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,iVar4);
        uVar10 = CUser::IsPCRoomUser();
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        pGVar5 = (GameWorld *)G_GameWorld();
        uVar10 = GameWorld::GetChannelType(pGVar5);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        this_00 = (CDataManager *)G_CDataManager();
        iVar4 = CDataManager::GetUpgradeRevisionPvPChannel(this_00);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,iVar4);
        uVar10 = CUser::isTournamentAccount((CUser *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        iVar4 = CUser::get_acc_id((CUser *)param_2);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,iVar4);
        iVar4 = G_CEnvironment();
        sVar11 = strlen((char *)(iVar4 + 0x345));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,sVar11);
        iVar4 = G_CEnvironment();
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_b0,(char *)(iVar4 + 0x345),0x10);
        iVar4 = G_CEnvironment();
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,*(int *)(iVar4 + 0x358));
        iVar4 = G_CEnvironment();
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_b0,*(int *)(iVar4 + 0x35c));
        local_24 = CUser::getSex((CUser *)param_2);
        if (local_24 == -1) {
          local_24 = 1;
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)(char)local_24);
        uVar10 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        pCVar12 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
        cVar2 = WongWork::CSecurityCard::isActivate(pCVar12);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
        pCVar12 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
        cVar2 = WongWork::CSecurityCard::isCertified(pCVar12);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
        pCVar8 = (CPad *)CUser::getPad((CUser *)param_2);
        cVar2 = Sanicova::CPad::getVersionInfo(pCVar8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(int)cVar2);
        pCVar8 = (CPad *)CUser::getPad((CUser *)param_2);
        uVar10 = Sanicova::CPad::isCertified(pCVar8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        uVar10 = CUser::isRestingUser((CUser *)param_2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
        memset(local_110,0,0x4c);
        local_b4 = 0x10;
        iVar4 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(param_2 + 0xe0));
        iVar4 = getpeername(iVar4,&local_c4,&local_b4);
        if (iVar4 == 0) {
          local_c8[0] = local_c4.sa_data[2];
          local_c8[1] = local_c4.sa_data[3];
          local_c8[2] = local_c4.sa_data[4];
          local_c8[3] = local_c4.sa_data[5];
          local_d0 = 0xffffffff;
          pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 4);
          uVar15 = CUser::getClientVersion((CUser *)param_2);
          uVar13 = CUser::get_acc_id((CUser *)param_2);
          pCVar9 = (CEnvironment *)G_CEnvironment();
          uVar6 = CEnvironment::getProcessSequence(pCVar9);
          local_20 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar6,0,uVar13,uVar15,local_110);
          if (local_20 < 0) {
            uVar15 = CUser::getClientVersion((CUser *)param_2);
            uVar10 = CUser::get_acc_id((CUser *)param_2);
            uVar13 = NumberToString(uVar10,0);
            pCVar9 = (CEnvironment *)G_CEnvironment();
            uVar6 = CEnvironment::getProcessSequence(pCVar9);
            cMyTrace::cMyTrace(local_64,
                               "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                               0x211b,0);
            cMyTrace::operator()
                      (local_64,
                       "AddClient ProcessSequence : %d, qq_id : %s, ClientVersion : %d, return : %d"
                       ,uVar6,uVar13,uVar15,local_20);
          }
          param_2[0x8cf00] = '\0';
          param_2[0x8cf01] = '\0';
          param_2[0x8cf02] = '\0';
          param_2[0x8cf03] = '\0';
          param_2[0x8d251] = '\0';
          param_2[0x8d252] = '\0';
          pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x20);
          uVar15 = CUser::getClientVersion((CUser *)param_2);
          uVar13 = CUser::get_acc_id((CUser *)param_2);
          iVar4 = (*pcVar1)(GlobalData::s_antibotChecker_,uVar13,0xffffffff,uVar15);
          if (iVar4 == -1) {
            uVar15 = CUser::getClientVersion((CUser *)param_2);
            uVar10 = CUser::get_acc_id((CUser *)param_2);
            uVar13 = NumberToString(uVar10,0);
            pCVar9 = (CEnvironment *)G_CEnvironment();
            uVar6 = CEnvironment::getProcessSequence(pCVar9);
            cMyTrace::cMyTrace(local_54,
                               "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                               0x212c,0);
            cMyTrace::operator()
                      (local_54,
                       "P2PAddClient ProcessSequence : %d, qq_id : %s, ClientVersion : %d, return : -1"
                       ,uVar6,uVar13,uVar15);
          }
          CUser::setAntibotKey((CUser *)param_2,local_20);
          uVar10 = CUserCharacInfo::getUserEventCharacterFlag((CUserCharacInfo *)param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
          iVar4 = CUser::getOnlinePreliminaryPlayType((CUser *)param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,iVar4);
          uVar10 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam();
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,uVar10 & 0xff);
          uVar10 = CUser::get_acc_id((CUser *)param_2);
          cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar10);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_b0,(uint)(cVar2 != '\0'));
          cVar2 = CTimeGate::isOpen(GlobalData::s_timeGate_);
          if (cVar2 == '\0') {
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,0);
          }
          else {
            iVar4 = CTimeGate::getNpcIndex(GlobalData::s_timeGate_);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_b0,iVar4);
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_b0,true);
          CUser::Send((CUser *)param_2,local_b0);
          param_2[0x796f8] = '\0';
          param_2[0x796f9] = '\0';
          param_2[0x796fa] = '\0';
          param_2[0x796fb] = '\0';
          uVar3 = CUser::get_unique_id((CUser *)param_2);
          uVar15 = CUser::GetUID((CUser *)param_2);
          pTVar14 = (TimerQueue *)G_TimerQueue();
          TimerQueue::InsertTimer(pTVar14,0,uVar15,0,300,uVar3,0);
          _NS_NonClient_Request((CUser *)param_2);
          (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_2);
          CUser::SetLastLoginCharacNo((CUser *)param_2,*(int *)(local_34 + 0x24));
          CUser::SetLastLoginChannelNo((CUser *)param_2,*(int *)(local_34 + 0x28));
          uVar10 = CUser::get_acc_id((CUser *)param_2);
          iVar4 = CUser::GetUID((CUser *)param_2);
          DB_LoadDnfHackLog::makeRequest(iVar4,uVar10);
          uVar15 = 0;
        }
        else {
          uVar15 = 0x2114;
        }
      }
      else {
        cMyTrace::cMyTrace(local_44,
                           "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",
                           0x2209,5);
        cMyTrace::operator()
                  (local_44,"[%s][%d]",
                   "virtual int Inter_MonitorLoginOK::dispatch_sig(CUser*, char*, int)",0x2209,
                   uVar15);
        uVar15 = 0x220d;
      }
      PacketGuard::~PacketGuard(local_b0);
    }
  }
  return uVar15;
}

```

