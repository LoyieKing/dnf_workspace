# DisPatcher_UdpCharacteristic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## dispatch_sig

```asm
// === 0821abe0 DisPatcher_UdpCharacteristic::dispatch_sig  [0x0821abe0-0x821afbb] ===
 821abe0:	55                   	push   %ebp
 821abe1:	89 e5                	mov    %esp,%ebp
 821abe3:	53                   	push   %ebx
 821abe4:	83 ec 44             	sub    $0x44,%esp
 821abe7:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
 821abed:	c6 45 f5 00          	movb   $0x0,-0xb(%ebp)
 821abf1:	8d 45 f6             	lea    -0xa(%ebp),%eax
 821abf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 821abf8:	8b 45 10             	mov    0x10(%ebp),%eax
 821abfb:	89 04 24             	mov    %eax,(%esp)
 821abfe:	e8 ad 24 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821ac03:	83 f0 01             	xor    $0x1,%eax
 821ac06:	84 c0                	test   %al,%al
 821ac08:	74 29                	je     821ac33 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x53>
 821ac0a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ac11:	00 
 821ac12:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ac19:	00 
 821ac1a:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821ac21:	08 
 821ac22:	c7 04 24 12 ce 00 00 	movl   $0xce12,(%esp)
 821ac29:	e8 a9 5c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ac2e:	e9 82 03 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821ac33:	8d 45 f5             	lea    -0xb(%ebp),%eax
 821ac36:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ac3a:	8b 45 10             	mov    0x10(%ebp),%eax
 821ac3d:	89 04 24             	mov    %eax,(%esp)
 821ac40:	e8 2b 23 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821ac45:	83 f0 01             	xor    $0x1,%eax
 821ac48:	84 c0                	test   %al,%al
 821ac4a:	74 29                	je     821ac75 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x95>
 821ac4c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ac53:	00 
 821ac54:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ac5b:	00 
 821ac5c:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821ac63:	08 
 821ac64:	c7 04 24 14 ce 00 00 	movl   $0xce14,(%esp)
 821ac6b:	e8 67 5c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ac70:	e9 40 03 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821ac75:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 821ac79:	0f b7 c0             	movzwl %ax,%eax
 821ac7c:	83 f8 01             	cmp    $0x1,%eax
 821ac7f:	0f 84 ee 00 00 00    	je     821ad73 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x193>
 821ac85:	83 f8 02             	cmp    $0x2,%eax
 821ac88:	0f 84 25 02 00 00    	je     821aeb3 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x2d3>
 821ac8e:	85 c0                	test   %eax,%eax
 821ac90:	0f 85 f4 02 00 00    	jne    821af8a <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3aa>
 821ac96:	8d 45 e7             	lea    -0x19(%ebp),%eax
 821ac99:	89 04 24             	mov    %eax,(%esp)
 821ac9c:	e8 bf 10 01 00       	call   822bd60 <_ZN29Packet_Party_Result_StatisticC1Ev>
 821aca1:	8d 45 e7             	lea    -0x19(%ebp),%eax
 821aca4:	83 c0 0a             	add    $0xa,%eax
 821aca7:	89 44 24 04          	mov    %eax,0x4(%esp)
 821acab:	8b 45 10             	mov    0x10(%ebp),%eax
 821acae:	89 04 24             	mov    %eax,(%esp)
 821acb1:	e8 fa 23 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821acb6:	83 f0 01             	xor    $0x1,%eax
 821acb9:	84 c0                	test   %al,%al
 821acbb:	74 29                	je     821ace6 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x106>
 821acbd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821acc4:	00 
 821acc5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821accc:	00 
 821accd:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821acd4:	08 
 821acd5:	c7 04 24 1d ce 00 00 	movl   $0xce1d,(%esp)
 821acdc:	e8 f6 5b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ace1:	e9 cf 02 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821ace6:	8d 45 e7             	lea    -0x19(%ebp),%eax
 821ace9:	83 c0 0c             	add    $0xc,%eax
 821acec:	89 44 24 04          	mov    %eax,0x4(%esp)
 821acf0:	8b 45 10             	mov    0x10(%ebp),%eax
 821acf3:	89 04 24             	mov    %eax,(%esp)
 821acf6:	e8 b5 23 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821acfb:	83 f0 01             	xor    $0x1,%eax
 821acfe:	84 c0                	test   %al,%al
 821ad00:	74 29                	je     821ad2b <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x14b>
 821ad02:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ad09:	00 
 821ad0a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ad11:	00 
 821ad12:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821ad19:	08 
 821ad1a:	c7 04 24 1e ce 00 00 	movl   $0xce1e,(%esp)
 821ad21:	e8 b1 5b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ad26:	e9 8a 02 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821ad2b:	0f b7 55 f3          	movzwl -0xd(%ebp),%edx
 821ad2f:	0f b7 45 f1          	movzwl -0xf(%ebp),%eax
 821ad33:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821ad36:	66 89 45 f3          	mov    %ax,-0xd(%ebp)
 821ad3a:	8d 5d e7             	lea    -0x19(%ebp),%ebx
 821ad3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ad40:	89 04 24             	mov    %eax,(%esp)
 821ad43:	e8 48 0f eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821ad48:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821ad4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ad52:	89 14 24             	mov    %edx,(%esp)
 821ad55:	e8 9e 6f ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821ad5a:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 821ad61:	00 
 821ad62:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821ad66:	89 04 24             	mov    %eax,(%esp)
 821ad69:	e8 d6 72 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821ad6e:	e9 3d 02 00 00       	jmp    821afb0 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d0>
 821ad73:	66 c7 45 e4 00 00    	movw   $0x0,-0x1c(%ebp)
 821ad79:	66 c7 45 e2 00 00    	movw   $0x0,-0x1e(%ebp)
 821ad7f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 821ad82:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ad86:	8b 45 10             	mov    0x10(%ebp),%eax
 821ad89:	89 04 24             	mov    %eax,(%esp)
 821ad8c:	e8 1f 23 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821ad91:	83 f0 01             	xor    $0x1,%eax
 821ad94:	84 c0                	test   %al,%al
 821ad96:	74 29                	je     821adc1 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x1e1>
 821ad98:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ad9f:	00 
 821ada0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ada7:	00 
 821ada8:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821adaf:	08 
 821adb0:	c7 04 24 30 ce 00 00 	movl   $0xce30,(%esp)
 821adb7:	e8 1b 5b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821adbc:	e9 f4 01 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821adc1:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 821adc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 821adc8:	8b 45 10             	mov    0x10(%ebp),%eax
 821adcb:	89 04 24             	mov    %eax,(%esp)
 821adce:	e8 dd 22 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821add3:	83 f0 01             	xor    $0x1,%eax
 821add6:	84 c0                	test   %al,%al
 821add8:	74 29                	je     821ae03 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x223>
 821adda:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ade1:	00 
 821ade2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ade9:	00 
 821adea:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821adf1:	08 
 821adf2:	c7 04 24 31 ce 00 00 	movl   $0xce31,(%esp)
 821adf9:	e8 d9 5a 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821adfe:	e9 b2 01 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821ae03:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 821ae07:	84 c0                	test   %al,%al
 821ae09:	75 25                	jne    821ae30 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x250>
 821ae0b:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 821ae0e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821ae12:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 821ae15:	89 44 24 08          	mov    %eax,0x8(%esp)
 821ae19:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ae1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ae20:	8b 45 08             	mov    0x8(%ebp),%eax
 821ae23:	89 04 24             	mov    %eax,(%esp)
 821ae26:	e8 6d 02 00 00       	call   821b098 <_ZN28DisPatcher_UdpCharacteristic13partyPingStatEP5CUserRtS2_>
 821ae2b:	e9 80 01 00 00       	jmp    821afb0 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d0>
 821ae30:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 821ae34:	3c 01                	cmp    $0x1,%al
 821ae36:	75 25                	jne    821ae5d <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x27d>
 821ae38:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 821ae3b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821ae3f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 821ae42:	89 44 24 08          	mov    %eax,0x8(%esp)
 821ae46:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ae49:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ae4d:	8b 45 08             	mov    0x8(%ebp),%eax
 821ae50:	89 04 24             	mov    %eax,(%esp)
 821ae53:	e8 64 01 00 00       	call   821afbc <_ZN28DisPatcher_UdpCharacteristic11pvpPingStatEP5CUserRtS2_>
 821ae58:	e9 53 01 00 00       	jmp    821afb0 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d0>
 821ae5d:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 821ae61:	3c 02                	cmp    $0x2,%al
 821ae63:	75 25                	jne    821ae8a <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x2aa>
 821ae65:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 821ae68:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821ae6c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 821ae6f:	89 44 24 08          	mov    %eax,0x8(%esp)
 821ae73:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ae76:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ae7a:	8b 45 08             	mov    0x8(%ebp),%eax
 821ae7d:	89 04 24             	mov    %eax,(%esp)
 821ae80:	e8 a5 01 00 00       	call   821b02a <_ZN28DisPatcher_UdpCharacteristic15fairPvpPingStatEP5CUserRtS2_>
 821ae85:	e9 26 01 00 00       	jmp    821afb0 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d0>
 821ae8a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ae91:	00 
 821ae92:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ae99:	00 
 821ae9a:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821aea1:	08 
 821aea2:	c7 04 24 44 ce 00 00 	movl   $0xce44,(%esp)
 821aea9:	e8 29 5a 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821aeae:	e9 02 01 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821aeb3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821aeb6:	89 04 24             	mov    %eax,(%esp)
 821aeb9:	e8 0e 0f 01 00       	call   822bdcc <_ZN30Packet_Abnormal_Exit_StatisticC1Ev>
 821aebe:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821aec1:	83 c0 0a             	add    $0xa,%eax
 821aec4:	89 44 24 04          	mov    %eax,0x4(%esp)
 821aec8:	8b 45 10             	mov    0x10(%ebp),%eax
 821aecb:	89 04 24             	mov    %eax,(%esp)
 821aece:	e8 dd 21 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821aed3:	83 f0 01             	xor    $0x1,%eax
 821aed6:	84 c0                	test   %al,%al
 821aed8:	74 29                	je     821af03 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x323>
 821aeda:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821aee1:	00 
 821aee2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821aee9:	00 
 821aeea:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821aef1:	08 
 821aef2:	c7 04 24 68 ce 00 00 	movl   $0xce68,(%esp)
 821aef9:	e8 d9 59 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821aefe:	e9 b2 00 00 00       	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821af03:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821af06:	83 c0 0c             	add    $0xc,%eax
 821af09:	89 44 24 04          	mov    %eax,0x4(%esp)
 821af0d:	8b 45 10             	mov    0x10(%ebp),%eax
 821af10:	89 04 24             	mov    %eax,(%esp)
 821af13:	e8 98 21 37 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821af18:	83 f0 01             	xor    $0x1,%eax
 821af1b:	84 c0                	test   %al,%al
 821af1d:	74 26                	je     821af45 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x365>
 821af1f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821af26:	00 
 821af27:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821af2e:	00 
 821af2f:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821af36:	08 
 821af37:	c7 04 24 69 ce 00 00 	movl   $0xce69,(%esp)
 821af3e:	e8 94 59 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821af43:	eb 70                	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821af45:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 821af49:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 821af4d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821af50:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 821af54:	8d 5d d4             	lea    -0x2c(%ebp),%ebx
 821af57:	8b 45 0c             	mov    0xc(%ebp),%eax
 821af5a:	89 04 24             	mov    %eax,(%esp)
 821af5d:	e8 2e 0d eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821af62:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821af68:	89 44 24 04          	mov    %eax,0x4(%esp)
 821af6c:	89 14 24             	mov    %edx,(%esp)
 821af6f:	e8 84 6d ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821af74:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 821af7b:	00 
 821af7c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821af80:	89 04 24             	mov    %eax,(%esp)
 821af83:	e8 bc 70 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821af88:	eb 26                	jmp    821afb0 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d0>
 821af8a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821af91:	00 
 821af92:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821af99:	00 
 821af9a:	c7 44 24 04 00 d7 bc 	movl   $0x8bcd700,0x4(%esp)
 821afa1:	08 
 821afa2:	c7 04 24 76 ce 00 00 	movl   $0xce76,(%esp)
 821afa9:	e8 29 59 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821afae:	eb 05                	jmp    821afb5 <_ZN28DisPatcher_UdpCharacteristic12dispatch_sigEP5CUserR9PacketBuf+0x3d5>
 821afb0:	b8 00 00 00 00       	mov    $0x0,%eax
 821afb5:	83 c4 44             	add    $0x44,%esp
 821afb8:	5b                   	pop    %ebx
 821afb9:	5d                   	pop    %ebp
 821afba:	c3                   	ret
 821afbb:	90                   	nop

```

```c
// DisPatcher_UdpCharacteristic::dispatch_sig @ 0x821abe0

/* DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::dispatch_sig
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *pCVar3;
  Packet_Abnormal_Exit_Statistic local_30 [10];
  ushort local_26;
  ushort local_24 [3];
  Packet_Party_Result_Statistic local_1d [10];
  ushort local_13;
  ushort local_11;
  uchar local_f;
  ushort local_e [3];
  
  local_e[0] = 0;
  local_f = '\0';
  cVar1 = PacketBuf::get_short(param_2,local_e);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_2,&local_f);
    if (cVar1 == '\x01') {
      if (local_e[0] == 1) {
        local_24[2] = 0;
        local_24[1] = 0;
        cVar1 = PacketBuf::get_short(param_2,local_24 + 2);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce30,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,local_24 + 1);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce31,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        if (local_f == '\0') {
          partyPingStat(this,param_1,local_24 + 2,local_24 + 1);
        }
        else if (local_f == '\x01') {
          pvpPingStat(this,param_1,local_24 + 2,local_24 + 1);
        }
        else {
          if (local_f != '\x02') {
            uVar2 = LineFunc(0xce44,
                             "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar2;
          }
          fairPvpPingStat(this,param_1,local_24 + 2,local_24 + 1);
        }
      }
      else if (local_e[0] == 2) {
        Packet_Abnormal_Exit_Statistic::Packet_Abnormal_Exit_Statistic(local_30);
        cVar1 = PacketBuf::get_short(param_2,&local_26);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce68,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,local_24);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce69,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        local_24[0] = local_24[0] + local_26;
        uVar2 = CUser::GetServerGroup(param_1);
        pCVar3 = (CStatisticServerProxy *)
                 CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                           (GlobalData::s_statistic_proxy_mgr,uVar2);
        CStatisticServerProxy::SendPacket(pCVar3,(char *)local_30,0xe);
      }
      else {
        if (local_e[0] != 0) {
          uVar2 = LineFunc(0xce76,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        Packet_Party_Result_Statistic::Packet_Party_Result_Statistic(local_1d);
        cVar1 = PacketBuf::get_short(param_2,&local_13);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce1d,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_2,&local_11);
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0xce1e,
                           "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar2;
        }
        local_11 = local_11 + local_13;
        uVar2 = CUser::GetServerGroup(param_1);
        pCVar3 = (CStatisticServerProxy *)
                 CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                           (GlobalData::s_statistic_proxy_mgr,uVar2);
        CStatisticServerProxy::SendPacket(pCVar3,(char *)local_1d,0xe);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xce14,
                       "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xce12,
                     "virtual int DisPatcher_UdpCharacteristic::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar2;
}

```

---

## fairPvpPingStat

```asm
// === 0821b02a DisPatcher_UdpCharacteristic::fairPvpPingStat  [0x0821b02a-0x821b097] ===
 821b02a:	55                   	push   %ebp
 821b02b:	89 e5                	mov    %esp,%ebp
 821b02d:	53                   	push   %ebx
 821b02e:	83 ec 24             	sub    $0x24,%esp
 821b031:	8d 45 ea             	lea    -0x16(%ebp),%eax
 821b034:	89 04 24             	mov    %eax,(%esp)
 821b037:	e8 cc 17 01 00       	call   822c808 <_ZN30Packet_Fair_Pvp_Ping_StatisticC1Ev>
 821b03c:	8b 45 10             	mov    0x10(%ebp),%eax
 821b03f:	0f b7 00             	movzwl (%eax),%eax
 821b042:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 821b046:	8b 45 14             	mov    0x14(%ebp),%eax
 821b049:	0f b7 10             	movzwl (%eax),%edx
 821b04c:	8b 45 10             	mov    0x10(%ebp),%eax
 821b04f:	0f b7 00             	movzwl (%eax),%eax
 821b052:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821b055:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 821b059:	8d 5d ea             	lea    -0x16(%ebp),%ebx
 821b05c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b05f:	89 04 24             	mov    %eax,(%esp)
 821b062:	e8 29 0c eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821b067:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821b06d:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b071:	89 14 24             	mov    %edx,(%esp)
 821b074:	e8 7f 6c ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821b079:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 821b080:	00 
 821b081:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821b085:	89 04 24             	mov    %eax,(%esp)
 821b088:	e8 b7 6f 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821b08d:	b8 00 00 00 00       	mov    $0x0,%eax
 821b092:	83 c4 24             	add    $0x24,%esp
 821b095:	5b                   	pop    %ebx
 821b096:	5d                   	pop    %ebp
 821b097:	c3                   	ret

```

```c
// DisPatcher_UdpCharacteristic::fairPvpPingStat @ 0x821b02a

/* DisPatcher_UdpCharacteristic::fairPvpPingStat(CUser*, unsigned short&, unsigned short&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::fairPvpPingStat
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Fair_Pvp_Ping_Statistic local_1a [10];
  ushort local_10;
  short local_e;
  
  Packet_Fair_Pvp_Ping_Statistic::Packet_Fair_Pvp_Ping_Statistic(local_1a);
  local_10 = *param_2;
  local_e = *param_3 + *param_2;
  uVar1 = CUser::GetServerGroup(param_1);
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_1a,0xe);
  return 0;
}

```

---

## partyPingStat

```asm
// === 0821b098 DisPatcher_UdpCharacteristic::partyPingStat  [0x0821b098-0x821b105] ===
 821b098:	55                   	push   %ebp
 821b099:	89 e5                	mov    %esp,%ebp
 821b09b:	53                   	push   %ebx
 821b09c:	83 ec 24             	sub    $0x24,%esp
 821b09f:	8d 45 ea             	lea    -0x16(%ebp),%eax
 821b0a2:	89 04 24             	mov    %eax,(%esp)
 821b0a5:	e8 da 0c 01 00       	call   822bd84 <_ZN27Packet_Party_Ping_StatisticC1Ev>
 821b0aa:	8b 45 10             	mov    0x10(%ebp),%eax
 821b0ad:	0f b7 00             	movzwl (%eax),%eax
 821b0b0:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 821b0b4:	8b 45 10             	mov    0x10(%ebp),%eax
 821b0b7:	0f b7 10             	movzwl (%eax),%edx
 821b0ba:	8b 45 14             	mov    0x14(%ebp),%eax
 821b0bd:	0f b7 00             	movzwl (%eax),%eax
 821b0c0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821b0c3:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 821b0c7:	8d 5d ea             	lea    -0x16(%ebp),%ebx
 821b0ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b0cd:	89 04 24             	mov    %eax,(%esp)
 821b0d0:	e8 bb 0b eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821b0d5:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821b0db:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b0df:	89 14 24             	mov    %edx,(%esp)
 821b0e2:	e8 11 6c ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821b0e7:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 821b0ee:	00 
 821b0ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821b0f3:	89 04 24             	mov    %eax,(%esp)
 821b0f6:	e8 49 6f 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821b0fb:	b8 00 00 00 00       	mov    $0x0,%eax
 821b100:	83 c4 24             	add    $0x24,%esp
 821b103:	5b                   	pop    %ebx
 821b104:	5d                   	pop    %ebp
 821b105:	c3                   	ret

```

```c
// DisPatcher_UdpCharacteristic::partyPingStat @ 0x821b098

/* DisPatcher_UdpCharacteristic::partyPingStat(CUser*, unsigned short&, unsigned short&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::partyPingStat
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Party_Ping_Statistic local_1a [10];
  ushort local_10;
  short local_e;
  
  Packet_Party_Ping_Statistic::Packet_Party_Ping_Statistic(local_1a);
  local_10 = *param_2;
  local_e = *param_2 + *param_3;
  uVar1 = CUser::GetServerGroup(param_1);
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_1a,0xe);
  return 0;
}

```

---

## pvpPingStat

```asm
// === 0821afbc DisPatcher_UdpCharacteristic::pvpPingStat  [0x0821afbc-0x821b029] ===
 821afbc:	55                   	push   %ebp
 821afbd:	89 e5                	mov    %esp,%ebp
 821afbf:	53                   	push   %ebx
 821afc0:	83 ec 24             	sub    $0x24,%esp
 821afc3:	8d 45 ea             	lea    -0x16(%ebp),%eax
 821afc6:	89 04 24             	mov    %eax,(%esp)
 821afc9:	e8 da 0d 01 00       	call   822bda8 <_ZN25Packet_Pvp_Ping_StatisticC1Ev>
 821afce:	8b 45 10             	mov    0x10(%ebp),%eax
 821afd1:	0f b7 00             	movzwl (%eax),%eax
 821afd4:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 821afd8:	8b 45 14             	mov    0x14(%ebp),%eax
 821afdb:	0f b7 10             	movzwl (%eax),%edx
 821afde:	8b 45 10             	mov    0x10(%ebp),%eax
 821afe1:	0f b7 00             	movzwl (%eax),%eax
 821afe4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 821afe7:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 821afeb:	8d 5d ea             	lea    -0x16(%ebp),%ebx
 821afee:	8b 45 0c             	mov    0xc(%ebp),%eax
 821aff1:	89 04 24             	mov    %eax,(%esp)
 821aff4:	e8 97 0c eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821aff9:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821afff:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b003:	89 14 24             	mov    %edx,(%esp)
 821b006:	e8 ed 6c ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821b00b:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 821b012:	00 
 821b013:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821b017:	89 04 24             	mov    %eax,(%esp)
 821b01a:	e8 25 70 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821b01f:	b8 00 00 00 00       	mov    $0x0,%eax
 821b024:	83 c4 24             	add    $0x24,%esp
 821b027:	5b                   	pop    %ebx
 821b028:	5d                   	pop    %ebp
 821b029:	c3                   	ret

```

```c
// DisPatcher_UdpCharacteristic::pvpPingStat @ 0x821afbc

/* DisPatcher_UdpCharacteristic::pvpPingStat(CUser*, unsigned short&, unsigned short&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::pvpPingStat
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Pvp_Ping_Statistic local_1a [10];
  ushort local_10;
  short local_e;
  
  Packet_Pvp_Ping_Statistic::Packet_Pvp_Ping_Statistic(local_1a);
  local_10 = *param_2;
  local_e = *param_3 + *param_2;
  uVar1 = CUser::GetServerGroup(param_1);
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_1a,0xe);
  return 0;
}

```

