# Dispatcher_UpdateServerMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821d9ee Dispatcher_UpdateServerMessage::dispatch_sig  [0x0821d9ee-0x821df69] ===
 821d9ee:	55                   	push   %ebp
 821d9ef:	89 e5                	mov    %esp,%ebp
 821d9f1:	56                   	push   %esi
 821d9f2:	53                   	push   %ebx
 821d9f3:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 821d9f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d9fc:	89 04 24             	mov    %eax,(%esp)
 821d9ff:	e8 88 c9 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821da04:	83 f8 03             	cmp    $0x3,%eax
 821da07:	0f 95 c0             	setne  %al
 821da0a:	84 c0                	test   %al,%al
 821da0c:	0f 84 93 00 00 00    	je     821daa5 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 821da12:	8b 45 0c             	mov    0xc(%ebp),%eax
 821da15:	89 04 24             	mov    %eax,(%esp)
 821da18:	e8 51 c9 eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 821da1d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821da24:	00 
 821da25:	89 04 24             	mov    %eax,(%esp)
 821da28:	e8 1e b6 ee ff       	call   810904b <_Z14NumberToStringji>
 821da2d:	89 c3                	mov    %eax,%ebx
 821da2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 821da32:	89 04 24             	mov    %eax,(%esp)
 821da35:	e8 52 c9 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821da3a:	89 c6                	mov    %eax,%esi
 821da3c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821da43:	00 
 821da44:	c7 44 24 08 c6 d1 00 	movl   $0xd1c6,0x8(%esp)
 821da4b:	00 
 821da4c:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821da53:	08 
 821da54:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821da57:	89 04 24             	mov    %eax,(%esp)
 821da5a:	e8 b9 1c 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 821da5f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821da63:	89 74 24 08          	mov    %esi,0x8(%esp)
 821da67:	c7 44 24 04 c4 34 bc 	movl   $0x8bc34c4,0x4(%esp)
 821da6e:	08 
 821da6f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 821da72:	89 04 24             	mov    %eax,(%esp)
 821da75:	e8 0e 1d 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821da7a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821da81:	00 
 821da82:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821da89:	00 
 821da8a:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821da91:	08 
 821da92:	c7 04 24 c7 d1 00 00 	movl   $0xd1c7,(%esp)
 821da99:	e8 39 2e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821da9e:	89 c3                	mov    %eax,%ebx
 821daa0:	e9 b9 04 00 00       	jmp    821df5e <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x570>
 821daa5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821daa8:	89 04 24             	mov    %eax,(%esp)
 821daab:	e8 9c 02 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821dab0:	c7 44 24 08 dd 00 00 	movl   $0xdd,0x8(%esp)
 821dab7:	00 
 821dab8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821dabf:	00 
 821dac0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821dac3:	89 04 24             	mov    %eax,(%esp)
 821dac6:	e8 31 de ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821dacb:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 821dacf:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 821dad2:	89 44 24 04          	mov    %eax,0x4(%esp)
 821dad6:	8b 45 10             	mov    0x10(%ebp),%eax
 821dad9:	89 04 24             	mov    %eax,(%esp)
 821dadc:	e8 8f f4 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821dae1:	83 f0 01             	xor    $0x1,%eax
 821dae4:	84 c0                	test   %al,%al
 821dae6:	74 2b                	je     821db13 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x125>
 821dae8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821daef:	00 
 821daf0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821daf7:	00 
 821daf8:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821daff:	08 
 821db00:	c7 04 24 d0 d1 00 00 	movl   $0xd1d0,(%esp)
 821db07:	e8 cb 2d 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821db0c:	89 c3                	mov    %eax,%ebx
 821db0e:	e9 40 04 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821db13:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 821db1a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 821db1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 821db21:	8b 45 10             	mov    0x10(%ebp),%eax
 821db24:	89 04 24             	mov    %eax,(%esp)
 821db27:	e8 c4 f5 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821db2c:	83 f0 01             	xor    $0x1,%eax
 821db2f:	84 c0                	test   %al,%al
 821db31:	74 2b                	je     821db5e <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x170>
 821db33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821db3a:	00 
 821db3b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821db42:	00 
 821db43:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821db4a:	08 
 821db4b:	c7 04 24 d5 d1 00 00 	movl   $0xd1d5,(%esp)
 821db52:	e8 80 2d 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821db57:	89 c3                	mov    %eax,%ebx
 821db59:	e9 f5 03 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821db5e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821db61:	85 c0                	test   %eax,%eax
 821db63:	78 08                	js     821db6d <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 821db65:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821db68:	83 f8 31             	cmp    $0x31,%eax
 821db6b:	7e 55                	jle    821dbc2 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x1d4>
 821db6d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821db74:	00 
 821db75:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821db78:	89 04 24             	mov    %eax,(%esp)
 821db7b:	e8 a0 dd ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821db80:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821db87:	00 
 821db88:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821db8b:	89 04 24             	mov    %eax,(%esp)
 821db8e:	e8 8d dd ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821db93:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821db9a:	00 
 821db9b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821db9e:	89 04 24             	mov    %eax,(%esp)
 821dba1:	e8 b2 dd ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821dba6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821dba9:	89 44 24 04          	mov    %eax,0x4(%esp)
 821dbad:	8b 45 0c             	mov    0xc(%ebp),%eax
 821dbb0:	89 04 24             	mov    %eax,(%esp)
 821dbb3:	e8 02 aa 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821dbb8:	bb 00 00 00 00       	mov    $0x0,%ebx
 821dbbd:	e9 91 03 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821dbc2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821dbc5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821dbc9:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 821dbd0:	00 
 821dbd1:	8d 85 72 ff ff ff    	lea    -0x8e(%ebp),%eax
 821dbd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 821dbdb:	8b 45 10             	mov    0x10(%ebp),%eax
 821dbde:	89 04 24             	mov    %eax,(%esp)
 821dbe1:	e8 d6 f6 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 821dbe6:	83 f0 01             	xor    $0x1,%eax
 821dbe9:	84 c0                	test   %al,%al
 821dbeb:	74 2b                	je     821dc18 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x22a>
 821dbed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821dbf4:	00 
 821dbf5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821dbfc:	00 
 821dbfd:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821dc04:	08 
 821dc05:	c7 04 24 e4 d1 00 00 	movl   $0xd1e4,(%esp)
 821dc0c:	e8 c6 2c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821dc11:	89 c3                	mov    %eax,%ebx
 821dc13:	e9 3b 03 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821dc18:	e8 7e e5 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 821dc1d:	8d 95 72 ff ff ff    	lea    -0x8e(%ebp),%edx
 821dc23:	89 54 24 04          	mov    %edx,0x4(%esp)
 821dc27:	89 04 24             	mov    %eax,(%esp)
 821dc2a:	e8 43 58 14 00       	call   8363472 <_ZN12CDataManager16hasPreventStringEPKc>
 821dc2f:	84 c0                	test   %al,%al
 821dc31:	74 55                	je     821dc88 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x29a>
 821dc33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821dc3a:	00 
 821dc3b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821dc3e:	89 04 24             	mov    %eax,(%esp)
 821dc41:	e8 da dc ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821dc46:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 821dc4d:	00 
 821dc4e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821dc51:	89 04 24             	mov    %eax,(%esp)
 821dc54:	e8 c7 dc ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821dc59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821dc60:	00 
 821dc61:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821dc64:	89 04 24             	mov    %eax,(%esp)
 821dc67:	e8 ec dc ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821dc6c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821dc6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 821dc73:	8b 45 0c             	mov    0xc(%ebp),%eax
 821dc76:	89 04 24             	mov    %eax,(%esp)
 821dc79:	e8 3c a9 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821dc7e:	bb 00 00 00 00       	mov    $0x0,%ebx
 821dc83:	e9 cb 02 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821dc88:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 821dc8f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 821dc92:	89 44 24 04          	mov    %eax,0x4(%esp)
 821dc96:	8b 45 10             	mov    0x10(%ebp),%eax
 821dc99:	89 04 24             	mov    %eax,(%esp)
 821dc9c:	e8 4f f4 36 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 821dca1:	83 f0 01             	xor    $0x1,%eax
 821dca4:	84 c0                	test   %al,%al
 821dca6:	74 2b                	je     821dcd3 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x2e5>
 821dca8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821dcaf:	00 
 821dcb0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821dcb7:	00 
 821dcb8:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821dcbf:	08 
 821dcc0:	c7 04 24 f4 d1 00 00 	movl   $0xd1f4,(%esp)
 821dcc7:	e8 0b 2c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821dccc:	89 c3                	mov    %eax,%ebx
 821dcce:	e9 80 02 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821dcd3:	8d 45 aa             	lea    -0x56(%ebp),%eax
 821dcd6:	bb 1e 00 00 00       	mov    $0x1e,%ebx
 821dcdb:	ba 00 00 00 00       	mov    $0x0,%edx
 821dce0:	89 c1                	mov    %eax,%ecx
 821dce2:	83 e1 02             	and    $0x2,%ecx
 821dce5:	85 c9                	test   %ecx,%ecx
 821dce7:	74 09                	je     821dcf2 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x304>
 821dce9:	66 89 10             	mov    %dx,(%eax)
 821dcec:	83 c0 02             	add    $0x2,%eax
 821dcef:	83 eb 02             	sub    $0x2,%ebx
 821dcf2:	89 de                	mov    %ebx,%esi
 821dcf4:	83 e6 fc             	and    $0xfffffffc,%esi
 821dcf7:	b9 00 00 00 00       	mov    $0x0,%ecx
 821dcfc:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 821dcff:	83 c1 04             	add    $0x4,%ecx
 821dd02:	39 f1                	cmp    %esi,%ecx
 821dd04:	72 f6                	jb     821dcfc <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x30e>
 821dd06:	01 c8                	add    %ecx,%eax
 821dd08:	89 d9                	mov    %ebx,%ecx
 821dd0a:	83 e1 02             	and    $0x2,%ecx
 821dd0d:	85 c9                	test   %ecx,%ecx
 821dd0f:	74 06                	je     821dd17 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x329>
 821dd11:	66 89 10             	mov    %dx,(%eax)
 821dd14:	83 c0 02             	add    $0x2,%eax
 821dd17:	89 d9                	mov    %ebx,%ecx
 821dd19:	83 e1 01             	and    $0x1,%ecx
 821dd1c:	85 c9                	test   %ecx,%ecx
 821dd1e:	74 05                	je     821dd25 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x337>
 821dd20:	88 10                	mov    %dl,(%eax)
 821dd22:	83 c0 01             	add    $0x1,%eax
 821dd25:	8b 45 c8             	mov    -0x38(%ebp),%eax
 821dd28:	89 44 24 0c          	mov    %eax,0xc(%esp)
 821dd2c:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 821dd33:	00 
 821dd34:	8d 45 aa             	lea    -0x56(%ebp),%eax
 821dd37:	89 44 24 04          	mov    %eax,0x4(%esp)
 821dd3b:	8b 45 10             	mov    0x10(%ebp),%eax
 821dd3e:	89 04 24             	mov    %eax,(%esp)
 821dd41:	e8 76 f5 36 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 821dd46:	83 f0 01             	xor    $0x1,%eax
 821dd49:	84 c0                	test   %al,%al
 821dd4b:	74 2b                	je     821dd78 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x38a>
 821dd4d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821dd54:	00 
 821dd55:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821dd5c:	00 
 821dd5d:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821dd64:	08 
 821dd65:	c7 04 24 f9 d1 00 00 	movl   $0xd1f9,(%esp)
 821dd6c:	e8 66 2b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821dd71:	89 c3                	mov    %eax,%ebx
 821dd73:	e9 db 01 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821dd78:	8b 45 0c             	mov    0xc(%ebp),%eax
 821dd7b:	89 04 24             	mov    %eax,(%esp)
 821dd7e:	e8 a5 32 ee ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 821dd83:	89 44 24 04          	mov    %eax,0x4(%esp)
 821dd87:	8d 45 aa             	lea    -0x56(%ebp),%eax
 821dd8a:	89 04 24             	mov    %eax,(%esp)
 821dd8d:	e8 4e 07 e6 ff       	call   807e4e0 <strcmp@plt>
 821dd92:	85 c0                	test   %eax,%eax
 821dd94:	0f 95 c0             	setne  %al
 821dd97:	84 c0                	test   %al,%al
 821dd99:	74 2b                	je     821ddc6 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x3d8>
 821dd9b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821dda2:	00 
 821dda3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ddaa:	00 
 821ddab:	c7 44 24 04 a0 d3 bc 	movl   $0x8bcd3a0,0x4(%esp)
 821ddb2:	08 
 821ddb3:	c7 04 24 fd d1 00 00 	movl   $0xd1fd,(%esp)
 821ddba:	e8 18 2b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ddbf:	89 c3                	mov    %eax,%ebx
 821ddc1:	e9 8d 01 00 00       	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821ddc6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 821ddcd:	e8 cc de ea ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 821ddd2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821ddd5:	e8 b4 e3 ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 821ddda:	89 04 24             	mov    %eax,(%esp)
 821dddd:	e8 0a b1 07 00       	call   8298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>
 821dde2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821dde5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 821dde9:	0f 84 07 01 00 00    	je     821def6 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x508>
 821ddef:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 821ddf6:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 821ddfa:	0f b6 c0             	movzbl %al,%eax
 821ddfd:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 821de00:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821de04:	89 44 24 08          	mov    %eax,0x8(%esp)
 821de08:	8b 45 0c             	mov    0xc(%ebp),%eax
 821de0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821de0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821de12:	89 04 24             	mov    %eax,(%esp)
 821de15:	e8 b2 2f 3e 00       	call   8600dcc <_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi>
 821de1a:	84 c0                	test   %al,%al
 821de1c:	0f 84 93 00 00 00    	je     821deb5 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x4c7>
 821de22:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821de25:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 821de29:	0f b6 c0             	movzbl %al,%eax
 821de2c:	89 54 24 08          	mov    %edx,0x8(%esp)
 821de30:	89 44 24 04          	mov    %eax,0x4(%esp)
 821de34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821de37:	89 04 24             	mov    %eax,(%esp)
 821de3a:	e8 89 2e 3e 00       	call   8600cc8 <_ZN27CSharedServerMessageManager18IsChangableMessageEii>
 821de3f:	84 c0                	test   %al,%al
 821de41:	74 4a                	je     821de8d <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x49f>
 821de43:	8b 55 f0             	mov    -0x10(%ebp),%edx
 821de46:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 821de4a:	0f b6 c0             	movzbl %al,%eax
 821de4d:	89 54 24 14          	mov    %edx,0x14(%esp)
 821de51:	8d 55 aa             	lea    -0x56(%ebp),%edx
 821de54:	89 54 24 10          	mov    %edx,0x10(%esp)
 821de58:	8d 95 72 ff ff ff    	lea    -0x8e(%ebp),%edx
 821de5e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821de62:	89 44 24 08          	mov    %eax,0x8(%esp)
 821de66:	8b 45 0c             	mov    0xc(%ebp),%eax
 821de69:	89 44 24 04          	mov    %eax,0x4(%esp)
 821de6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821de70:	89 04 24             	mov    %eax,(%esp)
 821de73:	e8 48 30 3e 00       	call   8600ec0 <_ZN27CSharedServerMessageManager19UpdateServerMessageEP5CUseriPcS2_i>
 821de78:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821de7f:	00 
 821de80:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821de83:	89 04 24             	mov    %eax,(%esp)
 821de86:	e8 95 da ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821de8b:	eb 69                	jmp    821def6 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x508>
 821de8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821de94:	00 
 821de95:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821de98:	89 04 24             	mov    %eax,(%esp)
 821de9b:	e8 80 da ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821dea0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821dea7:	00 
 821dea8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821deab:	89 04 24             	mov    %eax,(%esp)
 821deae:	e8 6d da ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821deb3:	eb 41                	jmp    821def6 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x508>
 821deb5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821debc:	00 
 821debd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821dec0:	89 04 24             	mov    %eax,(%esp)
 821dec3:	e8 58 da ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821dec8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 821decb:	85 c0                	test   %eax,%eax
 821decd:	74 14                	je     821dee3 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x4f5>
 821decf:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 821ded2:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ded6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821ded9:	89 04 24             	mov    %eax,(%esp)
 821dedc:	e8 3f da ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821dee1:	eb 13                	jmp    821def6 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x508>
 821dee3:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 821deea:	00 
 821deeb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821deee:	89 04 24             	mov    %eax,(%esp)
 821def1:	e8 2a da ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821def6:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 821defa:	0f b6 c0             	movzbl %al,%eax
 821defd:	89 44 24 04          	mov    %eax,0x4(%esp)
 821df01:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821df04:	89 04 24             	mov    %eax,(%esp)
 821df07:	e8 14 da ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821df0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821df13:	00 
 821df14:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821df17:	89 04 24             	mov    %eax,(%esp)
 821df1a:	e8 39 da ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821df1f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821df22:	89 44 24 04          	mov    %eax,0x4(%esp)
 821df26:	8b 45 0c             	mov    0xc(%ebp),%eax
 821df29:	89 04 24             	mov    %eax,(%esp)
 821df2c:	e8 89 a6 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821df31:	bb 00 00 00 00       	mov    $0x0,%ebx
 821df36:	eb 1b                	jmp    821df53 <_ZN30Dispatcher_UpdateServerMessage12dispatch_sigEP5CUserR9PacketBuf+0x565>
 821df38:	89 d3                	mov    %edx,%ebx
 821df3a:	89 c6                	mov    %eax,%esi
 821df3c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821df3f:	89 04 24             	mov    %eax,(%esp)
 821df42:	e8 39 ff 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821df47:	89 f0                	mov    %esi,%eax
 821df49:	89 da                	mov    %ebx,%edx
 821df4b:	89 04 24             	mov    %eax,(%esp)
 821df4e:	e8 fd 57 8c 00       	call   8ae3750 <_Unwind_Resume>
 821df53:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821df56:	89 04 24             	mov    %eax,(%esp)
 821df59:	e8 22 ff 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821df5e:	89 d8                	mov    %ebx,%eax
 821df60:	81 c4 b0 00 00 00    	add    $0xb0,%esp
 821df66:	5b                   	pop    %ebx
 821df67:	5e                   	pop    %esi
 821df68:	5d                   	pop    %ebp
 821df69:	c3                   	ret

```

```c
// Dispatcher_UpdateServerMessage::dispatch_sig @ 0x821d9ee

/* WARNING: Removing unreachable block (ram,0x0821dd20) */
/* Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpdateServerMessage::dispatch_sig
          (Dispatcher_UpdateServerMessage *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CDataManager *this_00;
  char *pcVar7;
  CGameManager *this_01;
  uint uVar8;
  bool bVar9;
  char local_92 [50];
  int local_60;
  char local_5a [30];
  int local_3c;
  int local_38;
  byte local_31;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int local_14;
  CSharedServerMessageManager *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 3) {
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0821dac6 to 0821df30 has its CatchHandler @ 0821df38 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xdd);
    local_31 = 0;
    cVar2 = PacketBuf::get_byte(param_2,&local_31);
    if (cVar2 == '\x01') {
      local_38 = 0;
      cVar2 = PacketBuf::get_int(param_2,&local_38);
      if (cVar2 == '\x01') {
        if ((local_38 < 0) || (0x31 < local_38)) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
          CUser::Send(param_1,local_30);
          uVar5 = 0;
        }
        else {
          cVar2 = PacketBuf::get_str(param_2,local_92,0x32,local_38);
          if (cVar2 == '\x01') {
            this_00 = (CDataManager *)G_CDataManager();
            cVar2 = CDataManager::hasPreventString(this_00,local_92);
            if (cVar2 == '\0') {
              local_3c = 0;
              cVar2 = PacketBuf::get_int(param_2,&local_3c);
              if (cVar2 == '\x01') {
                pcVar7 = local_5a;
                uVar4 = 0x1e;
                bVar9 = ((uint)pcVar7 & 2) != 0;
                if (bVar9) {
                  local_5a[0] = '\0';
                  local_5a[1] = '\0';
                  pcVar7 = local_5a + 2;
                  uVar4 = 0x1c;
                }
                uVar8 = 0;
                do {
                  pcVar1 = pcVar7 + uVar8;
                  pcVar1[0] = '\0';
                  pcVar1[1] = '\0';
                  pcVar1[2] = '\0';
                  pcVar1[3] = '\0';
                  uVar8 = uVar8 + 4;
                } while (uVar8 < (uVar4 & 0xfffffffc));
                if (!bVar9) {
                  (pcVar7 + uVar8)[0] = '\0';
                  (pcVar7 + uVar8)[1] = '\0';
                }
                cVar2 = PacketBuf::get_str(param_2,local_5a,0x1e,local_3c);
                if (cVar2 == '\x01') {
                  pcVar7 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  iVar3 = strcmp(local_5a,pcVar7);
                  if (iVar3 == 0) {
                    local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    this_01 = (CGameManager *)G_CGameManager();
                    local_10 = (CSharedServerMessageManager *)
                               CGameManager::GetSharedServerMessageManager(this_01);
                    if (local_10 != (CSharedServerMessageManager *)0x0) {
                      local_60 = 0;
                      cVar2 = CSharedServerMessageManager::CheckUserCondition
                                        ((CUser *)local_10,(int)param_1,(int *)(uint)local_31);
                      if (cVar2 == '\0') {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                        if (local_60 == 0) {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,3);
                        }
                        else {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_60);
                        }
                      }
                      else {
                        cVar2 = CSharedServerMessageManager::IsChangableMessage
                                          (local_10,(uint)local_31,local_14);
                        if (cVar2 == '\0') {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
                        }
                        else {
                          CSharedServerMessageManager::UpdateServerMessage
                                    (local_10,param_1,(uint)local_31,local_92,local_5a,local_14);
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
                        }
                      }
                    }
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_31);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
                    CUser::Send(param_1,local_30);
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = LineFunc(0xd1fd,
                                     "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar5 = LineFunc(0xd1f9,
                                   "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar5 = LineFunc(0xd1f4,
                                 "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x17);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
              CUser::Send(param_1,local_30);
              uVar5 = 0;
            }
          }
          else {
            uVar5 = LineFunc(0xd1e4,
                             "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar5 = LineFunc(0xd1d5,
                         "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xd1d0,
                       "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    PacketGuard::~PacketGuard(local_30);
  }
  else {
    uVar4 = CUser::get_acc_id(param_1);
    uVar5 = NumberToString(uVar4,0);
    uVar6 = CUser::get_state(param_1);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd1c6,0);
    cMyTrace::operator()
              (local_24,
               "ServerMessage : Dispatcher_UpdateServerMessage => User State : %d, m_id : %s",uVar6,
               uVar5);
    uVar5 = LineFunc(0xd1c7,
                     "virtual int Dispatcher_UpdateServerMessage::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  return uVar5;
}

```

