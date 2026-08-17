# DisPatcher_ReqPeer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081eed08 DisPatcher_ReqPeer::dispatch_sig  [0x081eed08-0x81f0281] ===
 81eed08:	55                   	push   %ebp
 81eed09:	89 e5                	mov    %esp,%ebp
 81eed0b:	56                   	push   %esi
 81eed0c:	53                   	push   %ebx
 81eed0d:	83 c4 80             	add    $0xffffff80,%esp
 81eed10:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eed13:	89 04 24             	mov    %eax,(%esp)
 81eed16:	e8 71 b6 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eed1b:	83 f8 03             	cmp    $0x3,%eax
 81eed1e:	74 27                	je     81eed47 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x3f>
 81eed20:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eed23:	89 04 24             	mov    %eax,(%esp)
 81eed26:	e8 61 b6 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eed2b:	83 f8 06             	cmp    $0x6,%eax
 81eed2e:	74 17                	je     81eed47 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x3f>
 81eed30:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eed33:	89 04 24             	mov    %eax,(%esp)
 81eed36:	e8 51 b6 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eed3b:	83 f8 08             	cmp    $0x8,%eax
 81eed3e:	74 07                	je     81eed47 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x3f>
 81eed40:	b8 01 00 00 00       	mov    $0x1,%eax
 81eed45:	eb 05                	jmp    81eed4c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x44>
 81eed47:	b8 00 00 00 00       	mov    $0x0,%eax
 81eed4c:	84 c0                	test   %al,%al
 81eed4e:	74 0a                	je     81eed5a <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x52>
 81eed50:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eed55:	e9 1f 15 00 00       	jmp    81f0279 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1571>
 81eed5a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81eed5d:	89 04 24             	mov    %eax,(%esp)
 81eed60:	e8 e7 ef 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81eed65:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81eed68:	83 c0 0d             	add    $0xd,%eax
 81eed6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eed6f:	8b 45 10             	mov    0x10(%ebp),%eax
 81eed72:	89 04 24             	mov    %eax,(%esp)
 81eed75:	e8 36 e3 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81eed7a:	83 f0 01             	xor    $0x1,%eax
 81eed7d:	84 c0                	test   %al,%al
 81eed7f:	74 2b                	je     81eedac <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa4>
 81eed81:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eed88:	00 
 81eed89:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eed90:	00 
 81eed91:	c7 44 24 04 20 03 bd 	movl   $0x8bd0320,0x4(%esp)
 81eed98:	08 
 81eed99:	c7 04 24 5a 72 00 00 	movl   $0x725a,(%esp)
 81eeda0:	e8 32 1b 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eeda5:	89 c3                	mov    %eax,%ebx
 81eeda7:	e9 c2 14 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eedac:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81eedaf:	83 c0 0f             	add    $0xf,%eax
 81eedb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eedb6:	8b 45 10             	mov    0x10(%ebp),%eax
 81eedb9:	89 04 24             	mov    %eax,(%esp)
 81eedbc:	e8 61 e1 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81eedc1:	83 f0 01             	xor    $0x1,%eax
 81eedc4:	84 c0                	test   %al,%al
 81eedc6:	74 2b                	je     81eedf3 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xeb>
 81eedc8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eedcf:	00 
 81eedd0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eedd7:	00 
 81eedd8:	c7 44 24 04 20 03 bd 	movl   $0x8bd0320,0x4(%esp)
 81eeddf:	08 
 81eede0:	c7 04 24 5b 72 00 00 	movl   $0x725b,(%esp)
 81eede7:	e8 eb 1a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eedec:	89 c3                	mov    %eax,%ebx
 81eedee:	e9 7b 14 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eedf3:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81eedf6:	83 c0 10             	add    $0x10,%eax
 81eedf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eedfd:	8b 45 10             	mov    0x10(%ebp),%eax
 81eee00:	89 04 24             	mov    %eax,(%esp)
 81eee03:	e8 38 e4 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81eee08:	83 f0 01             	xor    $0x1,%eax
 81eee0b:	84 c0                	test   %al,%al
 81eee0d:	74 2b                	je     81eee3a <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x132>
 81eee0f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eee16:	00 
 81eee17:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eee1e:	00 
 81eee1f:	c7 44 24 04 20 03 bd 	movl   $0x8bd0320,0x4(%esp)
 81eee26:	08 
 81eee27:	c7 04 24 5c 72 00 00 	movl   $0x725c,(%esp)
 81eee2e:	e8 a4 1a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eee33:	89 c3                	mov    %eax,%ebx
 81eee35:	e9 34 14 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eee3a:	e8 a9 5d 3d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81eee3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 81eee42:	89 54 24 04          	mov    %edx,0x4(%esp)
 81eee46:	89 04 24             	mov    %eax,(%esp)
 81eee49:	e8 10 bf 3d 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81eee4e:	84 c0                	test   %al,%al
 81eee50:	74 30                	je     81eee82 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x17a>
 81eee52:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81eee56:	0f be c0             	movsbl %al,%eax
 81eee59:	c7 44 24 0c 3c 00 00 	movl   $0x3c,0xc(%esp)
 81eee60:	00 
 81eee61:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eee65:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81eee6c:	00 
 81eee6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eee70:	89 04 24             	mov    %eax,(%esp)
 81eee73:	e8 b6 cf 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81eee78:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eee7d:	e9 ec 13 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eee82:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eee85:	89 04 24             	mov    %eax,(%esp)
 81eee88:	e8 91 89 45 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 81eee8d:	84 c0                	test   %al,%al
 81eee8f:	74 30                	je     81eeec1 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1b9>
 81eee91:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81eee95:	0f be c0             	movsbl %al,%eax
 81eee98:	c7 44 24 0c bf 00 00 	movl   $0xbf,0xc(%esp)
 81eee9f:	00 
 81eeea0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eeea4:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81eeeab:	00 
 81eeeac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eeeaf:	89 04 24             	mov    %eax,(%esp)
 81eeeb2:	e8 77 cf 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81eeeb7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eeebc:	e9 ad 13 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eeec1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eeec4:	89 04 24             	mov    %eax,(%esp)
 81eeec7:	e8 0e b4 ee ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81eeecc:	84 c0                	test   %al,%al
 81eeece:	74 30                	je     81eef00 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1f8>
 81eeed0:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81eeed4:	0f be c0             	movsbl %al,%eax
 81eeed7:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81eeede:	00 
 81eeedf:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eeee3:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81eeeea:	00 
 81eeeeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eeeee:	89 04 24             	mov    %eax,(%esp)
 81eeef1:	e8 38 cf 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81eeef6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eeefb:	e9 6e 13 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eef00:	e8 a2 b4 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81eef05:	89 04 24             	mov    %eax,(%esp)
 81eef08:	e8 11 24 f0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81eef0d:	84 c0                	test   %al,%al
 81eef0f:	74 3d                	je     81eef4e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x246>
 81eef11:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81eef15:	0f be c0             	movsbl %al,%eax
 81eef18:	83 f8 02             	cmp    $0x2,%eax
 81eef1b:	74 30                	je     81eef4d <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x245>
 81eef1d:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81eef21:	0f be c0             	movsbl %al,%eax
 81eef24:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81eef2b:	00 
 81eef2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eef30:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81eef37:	00 
 81eef38:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eef3b:	89 04 24             	mov    %eax,(%esp)
 81eef3e:	e8 eb ce 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81eef43:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eef48:	e9 21 13 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eef4d:	90                   	nop
 81eef4e:	0f b7 45 bd          	movzwl -0x43(%ebp),%eax
 81eef52:	0f b7 d8             	movzwl %ax,%ebx
 81eef55:	e8 4d b4 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81eef5a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81eef5e:	89 04 24             	mov    %eax,(%esp)
 81eef61:	e8 36 5c 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81eef66:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81eef69:	c7 45 c8 01 00 00 00 	movl   $0x1,-0x38(%ebp)
 81eef70:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81eef74:	75 30                	jne    81eefa6 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x29e>
 81eef76:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81eef7a:	0f be c0             	movsbl %al,%eax
 81eef7d:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 81eef84:	00 
 81eef85:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eef89:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81eef90:	00 
 81eef91:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eef94:	89 04 24             	mov    %eax,(%esp)
 81eef97:	e8 92 ce 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81eef9c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eefa1:	e9 c8 12 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eefa6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81eefa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eefad:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81eefb0:	89 04 24             	mov    %eax,(%esp)
 81eefb3:	e8 04 ed 49 00       	call   868dcbc <_ZN5CUser14alonePlay_ModeERK15MSG_REQ_TO_PEER>
 81eefb8:	84 c0                	test   %al,%al
 81eefba:	74 44                	je     81ef000 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x2f8>
 81eefbc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81eefbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eefc3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81eefc6:	89 04 24             	mov    %eax,(%esp)
 81eefc9:	e8 a8 ed 49 00       	call   868dd76 <_ZN5CUser20get_SoloPlay_msgTypeERK15MSG_REQ_TO_PEER>
 81eefce:	89 c3                	mov    %eax,%ebx
 81eefd0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81eefd3:	89 04 24             	mov    %eax,(%esp)
 81eefd6:	e8 4d 20 f1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81eefdb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81eefdf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81eefe6:	00 
 81eefe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eefeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eefee:	89 04 24             	mov    %eax,(%esp)
 81eeff1:	e8 f8 f0 49 00       	call   868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>
 81eeff6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eeffb:	e9 6e 12 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef000:	c7 45 cc 24 00 00 00 	movl   $0x24,-0x34(%ebp)
 81ef007:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef00b:	0f be c0             	movsbl %al,%eax
 81ef00e:	83 f8 01             	cmp    $0x1,%eax
 81ef011:	74 20                	je     81ef033 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x32b>
 81ef013:	83 f8 01             	cmp    $0x1,%eax
 81ef016:	7f 06                	jg     81ef01e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x316>
 81ef018:	85 c0                	test   %eax,%eax
 81ef01a:	74 0e                	je     81ef02a <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x322>
 81ef01c:	eb 2e                	jmp    81ef04c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x344>
 81ef01e:	83 f8 02             	cmp    $0x2,%eax
 81ef021:	74 19                	je     81ef03c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x334>
 81ef023:	83 f8 03             	cmp    $0x3,%eax
 81ef026:	74 1d                	je     81ef045 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x33d>
 81ef028:	eb 22                	jmp    81ef04c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x344>
 81ef02a:	c7 45 cc 06 00 00 00 	movl   $0x6,-0x34(%ebp)
 81ef031:	eb 19                	jmp    81ef04c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x344>
 81ef033:	c7 45 cc 1f 00 00 00 	movl   $0x1f,-0x34(%ebp)
 81ef03a:	eb 10                	jmp    81ef04c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x344>
 81ef03c:	c7 45 cc 07 00 00 00 	movl   $0x7,-0x34(%ebp)
 81ef043:	eb 07                	jmp    81ef04c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x344>
 81ef045:	c7 45 cc 08 00 00 00 	movl   $0x8,-0x34(%ebp)
 81ef04c:	83 7d cc 24          	cmpl   $0x24,-0x34(%ebp)
 81ef050:	74 26                	je     81ef078 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x370>
 81ef052:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef055:	89 04 24             	mov    %eax,(%esp)
 81ef058:	e8 f1 0b 04 00       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 81ef05d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81ef060:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ef064:	89 04 24             	mov    %eax,(%esp)
 81ef067:	e8 da 81 2c 00       	call   84b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>
 81ef06c:	66 85 c0             	test   %ax,%ax
 81ef06f:	74 07                	je     81ef078 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x370>
 81ef071:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef076:	eb 05                	jmp    81ef07d <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x375>
 81ef078:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef07d:	84 c0                	test   %al,%al
 81ef07f:	74 44                	je     81ef0c5 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x3bd>
 81ef081:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81ef084:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef088:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef08b:	89 04 24             	mov    %eax,(%esp)
 81ef08e:	e8 e3 ec 49 00       	call   868dd76 <_ZN5CUser20get_SoloPlay_msgTypeERK15MSG_REQ_TO_PEER>
 81ef093:	89 c3                	mov    %eax,%ebx
 81ef095:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef098:	89 04 24             	mov    %eax,(%esp)
 81ef09b:	e8 88 1f f1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81ef0a0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81ef0a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ef0ab:	00 
 81ef0ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef0b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef0b3:	89 04 24             	mov    %eax,(%esp)
 81ef0b6:	e8 33 f0 49 00       	call   868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>
 81ef0bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef0c0:	e9 a9 11 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef0c5:	e8 dd b2 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ef0ca:	89 04 24             	mov    %eax,(%esp)
 81ef0cd:	e8 4c 22 f0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81ef0d2:	84 c0                	test   %al,%al
 81ef0d4:	74 60                	je     81ef136 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 81ef0d6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef0d9:	89 04 24             	mov    %eax,(%esp)
 81ef0dc:	e8 ab b2 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ef0e1:	83 f8 06             	cmp    $0x6,%eax
 81ef0e4:	74 10                	je     81ef0f6 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x3ee>
 81ef0e6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef0e9:	89 04 24             	mov    %eax,(%esp)
 81ef0ec:	e8 9b b2 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ef0f1:	83 f8 07             	cmp    $0x7,%eax
 81ef0f4:	75 07                	jne    81ef0fd <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x3f5>
 81ef0f6:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef0fb:	eb 05                	jmp    81ef102 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x3fa>
 81ef0fd:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef102:	84 c0                	test   %al,%al
 81ef104:	74 30                	je     81ef136 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 81ef106:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef10a:	0f be c0             	movsbl %al,%eax
 81ef10d:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81ef114:	00 
 81ef115:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef119:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef120:	00 
 81ef121:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef124:	89 04 24             	mov    %eax,(%esp)
 81ef127:	e8 02 cd 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef12c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef131:	e9 38 11 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef136:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef139:	89 04 24             	mov    %eax,(%esp)
 81ef13c:	e8 dd 86 45 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 81ef141:	84 c0                	test   %al,%al
 81ef143:	74 30                	je     81ef175 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x46d>
 81ef145:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef149:	0f be c0             	movsbl %al,%eax
 81ef14c:	c7 44 24 0c c0 00 00 	movl   $0xc0,0xc(%esp)
 81ef153:	00 
 81ef154:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef158:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef15f:	00 
 81ef160:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef163:	89 04 24             	mov    %eax,(%esp)
 81ef166:	e8 c3 cc 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef16b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef170:	e9 f9 10 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef175:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef179:	0f be d8             	movsbl %al,%ebx
 81ef17c:	e8 1f 5f 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81ef181:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81ef188:	00 
 81ef189:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ef18c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ef190:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ef193:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ef197:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ef19b:	89 04 24             	mov    %eax,(%esp)
 81ef19e:	e8 71 0c 10 00       	call   82efe14 <_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b>
 81ef1a3:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81ef1a6:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81ef1aa:	7e 0a                	jle    81ef1b6 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x4ae>
 81ef1ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef1b1:	e9 b8 10 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef1b6:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef1ba:	0f be c0             	movsbl %al,%eax
 81ef1bd:	83 f8 08             	cmp    $0x8,%eax
 81ef1c0:	0f 87 70 10 00 00    	ja     81f0236 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152e>
 81ef1c6:	8b 04 85 a0 21 bc 08 	mov    0x8bc21a0(,%eax,4),%eax
 81ef1cd:	ff e0                	jmp    *%eax
 81ef1cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef1d2:	89 04 24             	mov    %eax,(%esp)
 81ef1d5:	e8 b2 b1 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ef1da:	83 f8 05             	cmp    $0x5,%eax
 81ef1dd:	74 14                	je     81ef1f3 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x4eb>
 81ef1df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef1e2:	05 e0 00 00 00       	add    $0xe0,%eax
 81ef1e7:	89 04 24             	mov    %eax,(%esp)
 81ef1ea:	e8 f1 7b 04 00       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 81ef1ef:	84 c0                	test   %al,%al
 81ef1f1:	75 07                	jne    81ef1fa <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x4f2>
 81ef1f3:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef1f8:	eb 05                	jmp    81ef1ff <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x4f7>
 81ef1fa:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef1ff:	84 c0                	test   %al,%al
 81ef201:	74 30                	je     81ef233 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x52b>
 81ef203:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef207:	0f be c0             	movsbl %al,%eax
 81ef20a:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81ef211:	00 
 81ef212:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef216:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef21d:	00 
 81ef21e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef221:	89 04 24             	mov    %eax,(%esp)
 81ef224:	e8 05 cc 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef229:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef22e:	e9 3b 10 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef233:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81ef23a:	ff 
 81ef23b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef23e:	89 04 24             	mov    %eax,(%esp)
 81ef241:	e8 5a ed 45 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81ef246:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef24a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef24d:	89 04 24             	mov    %eax,(%esp)
 81ef250:	e8 af fe 48 00       	call   867f104 <_ZN5CUser11isBlackUserEj>
 81ef255:	84 c0                	test   %al,%al
 81ef257:	74 30                	je     81ef289 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x581>
 81ef259:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef25d:	0f be c0             	movsbl %al,%eax
 81ef260:	c7 44 24 0c 4d 00 00 	movl   $0x4d,0xc(%esp)
 81ef267:	00 
 81ef268:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef26c:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef273:	00 
 81ef274:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef277:	89 04 24             	mov    %eax,(%esp)
 81ef27a:	e8 af cb 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef27f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef284:	e9 e5 0f 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef289:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef28c:	89 04 24             	mov    %eax,(%esp)
 81ef28f:	e8 2c f7 49 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 81ef294:	84 c0                	test   %al,%al
 81ef296:	74 30                	je     81ef2c8 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x5c0>
 81ef298:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef29c:	0f be c0             	movsbl %al,%eax
 81ef29f:	c7 44 24 0c ea 00 00 	movl   $0xea,0xc(%esp)
 81ef2a6:	00 
 81ef2a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef2ab:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef2b2:	00 
 81ef2b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef2b6:	89 04 24             	mov    %eax,(%esp)
 81ef2b9:	e8 70 cb 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef2be:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef2c3:	e9 a6 0f 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef2c8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef2cb:	89 04 24             	mov    %eax,(%esp)
 81ef2ce:	e8 ed f6 49 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 81ef2d3:	84 c0                	test   %al,%al
 81ef2d5:	74 30                	je     81ef307 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x5ff>
 81ef2d7:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef2db:	0f be c0             	movsbl %al,%eax
 81ef2de:	c7 44 24 0c be 00 00 	movl   $0xbe,0xc(%esp)
 81ef2e5:	00 
 81ef2e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef2ea:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef2f1:	00 
 81ef2f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef2f5:	89 04 24             	mov    %eax,(%esp)
 81ef2f8:	e8 31 cb 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef2fd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef302:	e9 67 0f 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef307:	e8 dc 58 3d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81ef30c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ef30f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ef313:	89 04 24             	mov    %eax,(%esp)
 81ef316:	e8 43 ba 3d 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81ef31b:	84 c0                	test   %al,%al
 81ef31d:	74 30                	je     81ef34f <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x647>
 81ef31f:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef323:	0f be c0             	movsbl %al,%eax
 81ef326:	c7 44 24 0c 3d 00 00 	movl   $0x3d,0xc(%esp)
 81ef32d:	00 
 81ef32e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef332:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef339:	00 
 81ef33a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef33d:	89 04 24             	mov    %eax,(%esp)
 81ef340:	e8 e9 ca 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef345:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef34a:	e9 1f 0f 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef34f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef352:	89 04 24             	mov    %eax,(%esp)
 81ef355:	e8 80 af ee ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81ef35a:	84 c0                	test   %al,%al
 81ef35c:	74 30                	je     81ef38e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x686>
 81ef35e:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef362:	0f be c0             	movsbl %al,%eax
 81ef365:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81ef36c:	00 
 81ef36d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef371:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef378:	00 
 81ef379:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef37c:	89 04 24             	mov    %eax,(%esp)
 81ef37f:	e8 aa ca 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef384:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef389:	e9 e0 0e 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef38e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef391:	89 04 24             	mov    %eax,(%esp)
 81ef394:	e8 f3 af ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ef399:	83 f8 05             	cmp    $0x5,%eax
 81ef39c:	74 14                	je     81ef3b2 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x6aa>
 81ef39e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef3a1:	05 e0 00 00 00       	add    $0xe0,%eax
 81ef3a6:	89 04 24             	mov    %eax,(%esp)
 81ef3a9:	e8 32 7a 04 00       	call   8236de0 <_ZN8CNetworkILi4096ELi450000EE12get_nat_typeEv>
 81ef3ae:	84 c0                	test   %al,%al
 81ef3b0:	75 07                	jne    81ef3b9 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x6b1>
 81ef3b2:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef3b7:	eb 05                	jmp    81ef3be <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x6b6>
 81ef3b9:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef3be:	84 c0                	test   %al,%al
 81ef3c0:	74 30                	je     81ef3f2 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x6ea>
 81ef3c2:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef3c6:	0f be c0             	movsbl %al,%eax
 81ef3c9:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 81ef3d0:	00 
 81ef3d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef3d5:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef3dc:	00 
 81ef3dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef3e0:	89 04 24             	mov    %eax,(%esp)
 81ef3e3:	e8 46 ca 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef3e8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef3ed:	e9 7c 0e 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef3f2:	a1 50 be 40 09       	mov    0x940be50,%eax
 81ef3f7:	89 04 24             	mov    %eax,(%esp)
 81ef3fa:	e8 11 05 29 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 81ef3ff:	84 c0                	test   %al,%al
 81ef401:	0f 84 ff 00 00 00    	je     81ef506 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7fe>
 81ef407:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef40a:	89 04 24             	mov    %eax,(%esp)
 81ef40d:	e8 52 61 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81ef412:	3c 07                	cmp    $0x7,%al
 81ef414:	75 16                	jne    81ef42c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x724>
 81ef416:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef419:	89 04 24             	mov    %eax,(%esp)
 81ef41c:	e8 43 61 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81ef421:	3c 07                	cmp    $0x7,%al
 81ef423:	75 07                	jne    81ef42c <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x724>
 81ef425:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef42a:	eb 05                	jmp    81ef431 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x729>
 81ef42c:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef431:	84 c0                	test   %al,%al
 81ef433:	74 55                	je     81ef48a <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x782>
 81ef435:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef438:	89 04 24             	mov    %eax,(%esp)
 81ef43b:	e8 86 08 04 00       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 81ef440:	89 c3                	mov    %eax,%ebx
 81ef442:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef445:	89 04 24             	mov    %eax,(%esp)
 81ef448:	e8 79 08 04 00       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 81ef44d:	38 c3                	cmp    %al,%bl
 81ef44f:	0f 95 c0             	setne  %al
 81ef452:	84 c0                	test   %al,%al
 81ef454:	0f 84 ac 00 00 00    	je     81ef506 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7fe>
 81ef45a:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef45e:	0f be c0             	movsbl %al,%eax
 81ef461:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81ef468:	00 
 81ef469:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef46d:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef474:	00 
 81ef475:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef478:	89 04 24             	mov    %eax,(%esp)
 81ef47b:	e8 ae c9 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef480:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef485:	e9 e4 0d 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef48a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef48d:	89 04 24             	mov    %eax,(%esp)
 81ef490:	e8 cf 60 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81ef495:	3c 07                	cmp    $0x7,%al
 81ef497:	74 0f                	je     81ef4a8 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7a0>
 81ef499:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef49c:	89 04 24             	mov    %eax,(%esp)
 81ef49f:	e8 c0 60 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81ef4a4:	3c 07                	cmp    $0x7,%al
 81ef4a6:	74 1e                	je     81ef4c6 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7be>
 81ef4a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef4ab:	89 04 24             	mov    %eax,(%esp)
 81ef4ae:	e8 b1 60 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81ef4b3:	3c 07                	cmp    $0x7,%al
 81ef4b5:	75 16                	jne    81ef4cd <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7c5>
 81ef4b7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef4ba:	89 04 24             	mov    %eax,(%esp)
 81ef4bd:	e8 a2 60 45 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81ef4c2:	3c 07                	cmp    $0x7,%al
 81ef4c4:	74 07                	je     81ef4cd <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7c5>
 81ef4c6:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef4cb:	eb 05                	jmp    81ef4d2 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7ca>
 81ef4cd:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef4d2:	84 c0                	test   %al,%al
 81ef4d4:	74 30                	je     81ef506 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x7fe>
 81ef4d6:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef4da:	0f be c0             	movsbl %al,%eax
 81ef4dd:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81ef4e4:	00 
 81ef4e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef4e9:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef4f0:	00 
 81ef4f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef4f4:	89 04 24             	mov    %eax,(%esp)
 81ef4f7:	e8 32 c9 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef4fc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef501:	e9 68 0d 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef506:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef509:	89 04 24             	mov    %eax,(%esp)
 81ef50c:	e8 3b 5c 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ef511:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81ef514:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81ef518:	0f 84 87 00 00 00    	je     81ef5a5 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x89d>
 81ef51e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ef521:	89 04 24             	mov    %eax,(%esp)
 81ef524:	e8 41 ac 3a 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 81ef529:	83 f8 03             	cmp    $0x3,%eax
 81ef52c:	0f 9f c0             	setg   %al
 81ef52f:	84 c0                	test   %al,%al
 81ef531:	74 30                	je     81ef563 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x85b>
 81ef533:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef537:	0f be c0             	movsbl %al,%eax
 81ef53a:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81ef541:	00 
 81ef542:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef546:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef54d:	00 
 81ef54e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef551:	89 04 24             	mov    %eax,(%esp)
 81ef554:	e8 d5 c8 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef559:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef55e:	e9 0b 0d 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef563:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ef566:	89 04 24             	mov    %eax,(%esp)
 81ef569:	e8 aa ad 3a 00       	call   859a318 <_ZN6CParty28CanDoPartyActionAssalutStateEv>
 81ef56e:	83 f0 01             	xor    $0x1,%eax
 81ef571:	84 c0                	test   %al,%al
 81ef573:	74 30                	je     81ef5a5 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x89d>
 81ef575:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef579:	0f be c0             	movsbl %al,%eax
 81ef57c:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81ef583:	00 
 81ef584:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef588:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef58f:	00 
 81ef590:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef593:	89 04 24             	mov    %eax,(%esp)
 81ef596:	e8 93 c8 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef59b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef5a0:	e9 c9 0c 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef5a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef5a8:	89 04 24             	mov    %eax,(%esp)
 81ef5ab:	e8 64 ad ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81ef5b0:	84 c0                	test   %al,%al
 81ef5b2:	74 16                	je     81ef5ca <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x8c2>
 81ef5b4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef5b7:	89 04 24             	mov    %eax,(%esp)
 81ef5ba:	e8 55 ad ee ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 81ef5bf:	84 c0                	test   %al,%al
 81ef5c1:	74 07                	je     81ef5ca <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x8c2>
 81ef5c3:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef5c8:	eb 05                	jmp    81ef5cf <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x8c7>
 81ef5ca:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef5cf:	84 c0                	test   %al,%al
 81ef5d1:	74 30                	je     81ef603 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x8fb>
 81ef5d3:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef5d7:	0f be c0             	movsbl %al,%eax
 81ef5da:	c7 44 24 0c 12 00 00 	movl   $0x12,0xc(%esp)
 81ef5e1:	00 
 81ef5e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef5e6:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef5ed:	00 
 81ef5ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef5f1:	89 04 24             	mov    %eax,(%esp)
 81ef5f4:	e8 35 c8 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef5f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef5fe:	e9 6b 0c 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef603:	a1 50 be 40 09       	mov    0x940be50,%eax
 81ef608:	89 04 24             	mov    %eax,(%esp)
 81ef60b:	e8 00 03 29 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 81ef610:	83 f0 01             	xor    $0x1,%eax
 81ef613:	84 c0                	test   %al,%al
 81ef615:	0f 84 af 01 00 00    	je     81ef7ca <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xac2>
 81ef61b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81ef622:	e8 77 c6 ed ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81ef627:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81ef62a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ef631:	00 
 81ef632:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef635:	89 04 24             	mov    %eax,(%esp)
 81ef638:	e8 3f 1d 3e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 81ef63d:	84 c0                	test   %al,%al
 81ef63f:	0f 84 ad 00 00 00    	je     81ef6f2 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x9ea>
 81ef645:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef648:	89 04 24             	mov    %eax,(%esp)
 81ef64b:	e8 fc 5a 46 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ef650:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81ef653:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef656:	89 04 24             	mov    %eax,(%esp)
 81ef659:	e8 50 01 04 00       	call   822f7ae <_ZN15CUserCharacInfo25GetCurCharacChaosKillTimeEv>
 81ef65e:	05 58 02 00 00       	add    $0x258,%eax
 81ef663:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81ef666:	0f 9f c0             	setg   %al
 81ef669:	84 c0                	test   %al,%al
 81ef66b:	74 30                	je     81ef69d <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x995>
 81ef66d:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef671:	0f be c0             	movsbl %al,%eax
 81ef674:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81ef67b:	00 
 81ef67c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef680:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef687:	00 
 81ef688:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef68b:	89 04 24             	mov    %eax,(%esp)
 81ef68e:	e8 9b c7 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef693:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef698:	e9 d1 0b 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef69d:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81ef6a1:	74 16                	je     81ef6b9 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x9b1>
 81ef6a3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81ef6a6:	89 04 24             	mov    %eax,(%esp)
 81ef6a9:	e8 08 d4 3c 00       	call   85bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>
 81ef6ae:	84 c0                	test   %al,%al
 81ef6b0:	74 07                	je     81ef6b9 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x9b1>
 81ef6b2:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef6b7:	eb 05                	jmp    81ef6be <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x9b6>
 81ef6b9:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef6be:	84 c0                	test   %al,%al
 81ef6c0:	74 30                	je     81ef6f2 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x9ea>
 81ef6c2:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef6c6:	0f be c0             	movsbl %al,%eax
 81ef6c9:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81ef6d0:	00 
 81ef6d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef6d5:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef6dc:	00 
 81ef6dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef6e0:	89 04 24             	mov    %eax,(%esp)
 81ef6e3:	e8 46 c7 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef6e8:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef6ed:	e9 7c 0b 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef6f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef6f5:	89 04 24             	mov    %eax,(%esp)
 81ef6f8:	e8 b1 00 04 00       	call   822f7ae <_ZN15CUserCharacInfo25GetCurCharacChaosKillTimeEv>
 81ef6fd:	05 58 02 00 00       	add    $0x258,%eax
 81ef702:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81ef705:	7e 1e                	jle    81ef725 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa1d>
 81ef707:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ef70e:	00 
 81ef70f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef712:	89 04 24             	mov    %eax,(%esp)
 81ef715:	e8 62 1c 3e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 81ef71a:	84 c0                	test   %al,%al
 81ef71c:	74 07                	je     81ef725 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa1d>
 81ef71e:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef723:	eb 05                	jmp    81ef72a <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa22>
 81ef725:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef72a:	84 c0                	test   %al,%al
 81ef72c:	74 30                	je     81ef75e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa56>
 81ef72e:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef732:	0f be c0             	movsbl %al,%eax
 81ef735:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81ef73c:	00 
 81ef73d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef741:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef748:	00 
 81ef749:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef74c:	89 04 24             	mov    %eax,(%esp)
 81ef74f:	e8 da c6 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef754:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef759:	e9 10 0b 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef75e:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81ef762:	74 2d                	je     81ef791 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa89>
 81ef764:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ef767:	89 04 24             	mov    %eax,(%esp)
 81ef76a:	e8 47 d3 3c 00       	call   85bcab6 <_ZN6CParty29CheckMemberLastTryAssaultTimeEv>
 81ef76f:	84 c0                	test   %al,%al
 81ef771:	74 1e                	je     81ef791 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa89>
 81ef773:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ef77a:	00 
 81ef77b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef77e:	89 04 24             	mov    %eax,(%esp)
 81ef781:	e8 f6 1b 3e 00       	call   85d137c <_ZN10expert_job10CAlchemist17GetAssaultPreventEP5CUserPb>
 81ef786:	84 c0                	test   %al,%al
 81ef788:	74 07                	je     81ef791 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa89>
 81ef78a:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef78f:	eb 05                	jmp    81ef796 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xa8e>
 81ef791:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef796:	84 c0                	test   %al,%al
 81ef798:	74 30                	je     81ef7ca <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xac2>
 81ef79a:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef79e:	0f be c0             	movsbl %al,%eax
 81ef7a1:	c7 44 24 0c fa 00 00 	movl   $0xfa,0xc(%esp)
 81ef7a8:	00 
 81ef7a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef7ad:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef7b4:	00 
 81ef7b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef7b8:	89 04 24             	mov    %eax,(%esp)
 81ef7bb:	e8 6e c6 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef7c0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef7c5:	e9 a4 0a 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef7ca:	66 c7 45 a2 00 00    	movw   $0x0,-0x5e(%ebp)
 81ef7d0:	8d 45 a2             	lea    -0x5e(%ebp),%eax
 81ef7d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef7d7:	8b 45 10             	mov    0x10(%ebp),%eax
 81ef7da:	89 04 24             	mov    %eax,(%esp)
 81ef7dd:	e8 ce d8 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81ef7e2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef7e5:	89 04 24             	mov    %eax,(%esp)
 81ef7e8:	e8 f9 c0 ed ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81ef7ed:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81ef7f4:	00 
 81ef7f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ef7fc:	00 
 81ef7fd:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef800:	89 04 24             	mov    %eax,(%esp)
 81ef803:	e8 f4 c0 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ef808:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef80b:	89 04 24             	mov    %eax,(%esp)
 81ef80e:	e8 69 ab ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81ef813:	0f b7 c0             	movzwl %ax,%eax
 81ef816:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef81a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef81d:	89 04 24             	mov    %eax,(%esp)
 81ef820:	e8 7f a6 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ef825:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ef82c:	00 
 81ef82d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef830:	89 04 24             	mov    %eax,(%esp)
 81ef833:	e8 e8 c0 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ef838:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81ef83b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef83f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef842:	89 04 24             	mov    %eax,(%esp)
 81ef845:	e8 f2 c0 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81ef84a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef84d:	89 04 24             	mov    %eax,(%esp)
 81ef850:	e8 af 7f 46 00       	call   8657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>
 81ef855:	0f b7 d8             	movzwl %ax,%ebx
 81ef858:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef85b:	89 04 24             	mov    %eax,(%esp)
 81ef85e:	e8 03 7f 46 00       	call   8657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>
 81ef863:	0f b7 c0             	movzwl %ax,%eax
 81ef866:	89 da                	mov    %ebx,%edx
 81ef868:	29 c2                	sub    %eax,%edx
 81ef86a:	89 d0                	mov    %edx,%eax
 81ef86c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef870:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef873:	89 04 24             	mov    %eax,(%esp)
 81ef876:	e8 29 a6 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ef87b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef87e:	89 04 24             	mov    %eax,(%esp)
 81ef881:	e8 0a fb 03 00       	call   822f390 <_ZNK15CUserCharacInfo19getCurCharacStaminaEv>
 81ef886:	0f b6 c0             	movzbl %al,%eax
 81ef889:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef88d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef890:	89 04 24             	mov    %eax,(%esp)
 81ef893:	e8 0c a6 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ef898:	0f b7 45 a2          	movzwl -0x5e(%ebp),%eax
 81ef89c:	0f b7 c0             	movzwl %ax,%eax
 81ef89f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef8a3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef8a6:	89 04 24             	mov    %eax,(%esp)
 81ef8a9:	e8 f6 a5 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81ef8ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ef8b5:	00 
 81ef8b6:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef8b9:	89 04 24             	mov    %eax,(%esp)
 81ef8bc:	e8 97 c0 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ef8c1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81ef8c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ef8c8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ef8cb:	89 04 24             	mov    %eax,(%esp)
 81ef8ce:	e8 e7 8c 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ef8d3:	e9 5e 09 00 00       	jmp    81f0236 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152e>
 81ef8d8:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 81ef8df:	e8 02 2d f7 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81ef8e4:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 81ef8eb:	00 
 81ef8ec:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81ef8f3:	00 
 81ef8f4:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ef8f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ef8fb:	89 04 24             	mov    %eax,(%esp)
 81ef8fe:	e8 b5 ed f7 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81ef903:	84 c0                	test   %al,%al
 81ef905:	75 28                	jne    81ef92f <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xc27>
 81ef907:	e8 da 2c f7 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81ef90c:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 81ef913:	00 
 81ef914:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81ef91b:	00 
 81ef91c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ef91f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ef923:	89 04 24             	mov    %eax,(%esp)
 81ef926:	e8 8d ed f7 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81ef92b:	84 c0                	test   %al,%al
 81ef92d:	74 07                	je     81ef936 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xc2e>
 81ef92f:	b8 01 00 00 00       	mov    $0x1,%eax
 81ef934:	eb 05                	jmp    81ef93b <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xc33>
 81ef936:	b8 00 00 00 00       	mov    $0x0,%eax
 81ef93b:	84 c0                	test   %al,%al
 81ef93d:	74 30                	je     81ef96f <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xc67>
 81ef93f:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef943:	0f be c0             	movsbl %al,%eax
 81ef946:	c7 44 24 0c d1 00 00 	movl   $0xd1,0xc(%esp)
 81ef94d:	00 
 81ef94e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef952:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef959:	00 
 81ef95a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef95d:	89 04 24             	mov    %eax,(%esp)
 81ef960:	e8 c9 c4 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef965:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef96a:	e9 ff 08 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef96f:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81ef974:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ef977:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ef97b:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 81ef982:	00 
 81ef983:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ef986:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ef98a:	89 04 24             	mov    %eax,(%esp)
 81ef98d:	e8 02 90 09 00       	call   8288994 <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_>
 81ef992:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ef995:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81ef999:	74 32                	je     81ef9cd <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xcc5>
 81ef99b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ef99e:	0f b6 d0             	movzbl %al,%edx
 81ef9a1:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef9a5:	0f be c0             	movsbl %al,%eax
 81ef9a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ef9ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef9b0:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef9b7:	00 
 81ef9b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ef9bb:	89 04 24             	mov    %eax,(%esp)
 81ef9be:	e8 6b c4 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81ef9c3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ef9c8:	e9 a1 08 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81ef9cd:	e8 16 52 3d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81ef9d2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ef9d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ef9d9:	89 04 24             	mov    %eax,(%esp)
 81ef9dc:	e8 7d b3 3d 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81ef9e1:	84 c0                	test   %al,%al
 81ef9e3:	74 30                	je     81efa15 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xd0d>
 81ef9e5:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ef9e9:	0f be c0             	movsbl %al,%eax
 81ef9ec:	c7 44 24 0c 3d 00 00 	movl   $0x3d,0xc(%esp)
 81ef9f3:	00 
 81ef9f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ef9f8:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81ef9ff:	00 
 81efa00:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efa03:	89 04 24             	mov    %eax,(%esp)
 81efa06:	e8 23 c4 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efa0b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efa10:	e9 59 08 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efa15:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efa18:	89 04 24             	mov    %eax,(%esp)
 81efa1b:	e8 ba a8 ee ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81efa20:	84 c0                	test   %al,%al
 81efa22:	74 30                	je     81efa54 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xd4c>
 81efa24:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efa28:	0f be c0             	movsbl %al,%eax
 81efa2b:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81efa32:	00 
 81efa33:	89 44 24 08          	mov    %eax,0x8(%esp)
 81efa37:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81efa3e:	00 
 81efa3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efa42:	89 04 24             	mov    %eax,(%esp)
 81efa45:	e8 e4 c3 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efa4a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efa4f:	e9 1a 08 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efa54:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81efa5b:	ff 
 81efa5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efa5f:	89 04 24             	mov    %eax,(%esp)
 81efa62:	e8 39 e5 45 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81efa67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efa6b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efa6e:	89 04 24             	mov    %eax,(%esp)
 81efa71:	e8 8e f6 48 00       	call   867f104 <_ZN5CUser11isBlackUserEj>
 81efa76:	84 c0                	test   %al,%al
 81efa78:	74 30                	je     81efaaa <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xda2>
 81efa7a:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efa7e:	0f be c0             	movsbl %al,%eax
 81efa81:	c7 44 24 0c 4d 00 00 	movl   $0x4d,0xc(%esp)
 81efa88:	00 
 81efa89:	89 44 24 08          	mov    %eax,0x8(%esp)
 81efa8d:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81efa94:	00 
 81efa95:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efa98:	89 04 24             	mov    %eax,(%esp)
 81efa9b:	e8 8e c3 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efaa0:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efaa5:	e9 c4 07 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efaaa:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efaad:	89 04 24             	mov    %eax,(%esp)
 81efab0:	e8 49 a8 ee ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81efab5:	83 f0 01             	xor    $0x1,%eax
 81efab8:	84 c0                	test   %al,%al
 81efaba:	0f 84 e8 00 00 00    	je     81efba8 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xea0>
 81efac0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efac3:	89 04 24             	mov    %eax,(%esp)
 81efac6:	e8 c1 a8 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81efacb:	89 c3                	mov    %eax,%ebx
 81efacd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efad0:	89 04 24             	mov    %eax,(%esp)
 81efad3:	e8 b4 a8 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81efad8:	39 c3                	cmp    %eax,%ebx
 81efada:	0f 94 c0             	sete   %al
 81efadd:	84 c0                	test   %al,%al
 81efadf:	0f 84 bc 00 00 00    	je     81efba1 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xe99>
 81efae5:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81efaec:	00 
 81efaed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81efaf4:	00 
 81efaf5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efaf8:	89 04 24             	mov    %eax,(%esp)
 81efafb:	e8 fc bd ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81efb00:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efb03:	89 04 24             	mov    %eax,(%esp)
 81efb06:	e8 71 a8 ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81efb0b:	0f b7 c0             	movzwl %ax,%eax
 81efb0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efb12:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efb15:	89 04 24             	mov    %eax,(%esp)
 81efb18:	e8 87 a3 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81efb1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81efb24:	00 
 81efb25:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efb28:	89 04 24             	mov    %eax,(%esp)
 81efb2b:	e8 f0 bd ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81efb30:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81efb33:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efb37:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efb3a:	89 04 24             	mov    %eax,(%esp)
 81efb3d:	e8 fa bd ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81efb42:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efb45:	89 04 24             	mov    %eax,(%esp)
 81efb48:	e8 b5 f6 03 00       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 81efb4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efb51:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efb54:	89 04 24             	mov    %eax,(%esp)
 81efb57:	e8 e0 bd ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81efb5c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81efb63:	00 
 81efb64:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efb67:	89 04 24             	mov    %eax,(%esp)
 81efb6a:	e8 e9 bd ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81efb6f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efb72:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efb76:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efb79:	89 04 24             	mov    %eax,(%esp)
 81efb7c:	e8 39 8a 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81efb81:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efb85:	0f be c0             	movsbl %al,%eax
 81efb88:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efb8c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efb8f:	89 04 24             	mov    %eax,(%esp)
 81efb92:	e8 35 0d 04 00       	call   82308cc <_ZN5CUser22SetReceivedRequestTypeEc>
 81efb97:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efb9c:	e9 cd 06 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efba1:	c7 45 dc 13 00 00 00 	movl   $0x13,-0x24(%ebp)
 81efba8:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81efbac:	75 09                	jne    81efbb7 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xeaf>
 81efbae:	c7 45 dc 03 00 00 00 	movl   $0x3,-0x24(%ebp)
 81efbb5:	eb 16                	jmp    81efbcd <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xec5>
 81efbb7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efbba:	89 04 24             	mov    %eax,(%esp)
 81efbbd:	e8 3c a7 ee ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81efbc2:	84 c0                	test   %al,%al
 81efbc4:	74 07                	je     81efbcd <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xec5>
 81efbc6:	c7 45 dc 12 00 00 00 	movl   $0x12,-0x24(%ebp)
 81efbcd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81efbd0:	0f b6 d0             	movzbl %al,%edx
 81efbd3:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efbd7:	0f be c0             	movsbl %al,%eax
 81efbda:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81efbde:	89 44 24 08          	mov    %eax,0x8(%esp)
 81efbe2:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81efbe9:	00 
 81efbea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efbed:	89 04 24             	mov    %eax,(%esp)
 81efbf0:	e8 39 c2 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efbf5:	e9 3c 06 00 00       	jmp    81f0236 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152e>
 81efbfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efbfd:	89 04 24             	mov    %eax,(%esp)
 81efc00:	e8 89 55 46 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81efc05:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81efc08:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81efc0c:	75 2b                	jne    81efc39 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xf31>
 81efc0e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81efc15:	00 
 81efc16:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81efc1d:	00 
 81efc1e:	c7 44 24 04 20 03 bd 	movl   $0x8bd0320,0x4(%esp)
 81efc25:	08 
 81efc26:	c7 04 24 94 74 00 00 	movl   $0x7494,(%esp)
 81efc2d:	e8 a5 0c 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81efc32:	89 c3                	mov    %eax,%ebx
 81efc34:	e9 35 06 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efc39:	e8 aa 4f 3d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81efc3e:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81efc41:	89 54 24 04          	mov    %edx,0x4(%esp)
 81efc45:	89 04 24             	mov    %eax,(%esp)
 81efc48:	e8 11 b1 3d 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81efc4d:	84 c0                	test   %al,%al
 81efc4f:	74 30                	je     81efc81 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xf79>
 81efc51:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efc55:	0f be c0             	movsbl %al,%eax
 81efc58:	c7 44 24 0c 3d 00 00 	movl   $0x3d,0xc(%esp)
 81efc5f:	00 
 81efc60:	89 44 24 08          	mov    %eax,0x8(%esp)
 81efc64:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81efc6b:	00 
 81efc6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efc6f:	89 04 24             	mov    %eax,(%esp)
 81efc72:	e8 b7 c1 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efc77:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efc7c:	e9 ed 05 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efc81:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efc84:	89 04 24             	mov    %eax,(%esp)
 81efc87:	e8 4e a6 ee ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81efc8c:	84 c0                	test   %al,%al
 81efc8e:	74 30                	je     81efcc0 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xfb8>
 81efc90:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efc94:	0f be c0             	movsbl %al,%eax
 81efc97:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81efc9e:	00 
 81efc9f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81efca3:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81efcaa:	00 
 81efcab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efcae:	89 04 24             	mov    %eax,(%esp)
 81efcb1:	e8 78 c1 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efcb6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efcbb:	e9 ae 05 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efcc0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efcc3:	89 04 24             	mov    %eax,(%esp)
 81efcc6:	e8 f5 ec 49 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 81efccb:	84 c0                	test   %al,%al
 81efccd:	74 30                	je     81efcff <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0xff7>
 81efccf:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efcd3:	0f be c0             	movsbl %al,%eax
 81efcd6:	c7 44 24 0c be 00 00 	movl   $0xbe,0xc(%esp)
 81efcdd:	00 
 81efcde:	89 44 24 08          	mov    %eax,0x8(%esp)
 81efce2:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81efce9:	00 
 81efcea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efced:	89 04 24             	mov    %eax,(%esp)
 81efcf0:	e8 39 c1 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efcf5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efcfa:	e9 6f 05 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efcff:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efd02:	89 04 24             	mov    %eax,(%esp)
 81efd05:	e8 82 a6 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81efd0a:	83 f8 04             	cmp    $0x4,%eax
 81efd0d:	0f 9f c0             	setg   %al
 81efd10:	84 c0                	test   %al,%al
 81efd12:	74 0a                	je     81efd1e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1016>
 81efd14:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efd19:	e9 50 05 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efd1e:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81efd25:	00 
 81efd26:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81efd2d:	00 
 81efd2e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efd31:	89 04 24             	mov    %eax,(%esp)
 81efd34:	e8 c3 bb ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81efd39:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efd3c:	89 04 24             	mov    %eax,(%esp)
 81efd3f:	e8 38 a6 ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81efd44:	0f b7 c0             	movzwl %ax,%eax
 81efd47:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efd4b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efd4e:	89 04 24             	mov    %eax,(%esp)
 81efd51:	e8 4e a1 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81efd56:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81efd5d:	00 
 81efd5e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efd61:	89 04 24             	mov    %eax,(%esp)
 81efd64:	e8 b7 bb ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81efd69:	0f b7 45 bd          	movzwl -0x43(%ebp),%eax
 81efd6d:	0f b7 c0             	movzwl %ax,%eax
 81efd70:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efd74:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efd77:	89 04 24             	mov    %eax,(%esp)
 81efd7a:	e8 bd bb ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81efd7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81efd86:	00 
 81efd87:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efd8a:	89 04 24             	mov    %eax,(%esp)
 81efd8d:	e8 c6 bb ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81efd92:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efd95:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efd99:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efd9c:	89 04 24             	mov    %eax,(%esp)
 81efd9f:	e8 16 88 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81efda4:	e9 8d 04 00 00       	jmp    81f0236 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152e>
 81efda9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efdac:	89 04 24             	mov    %eax,(%esp)
 81efdaf:	e8 2a 54 46 00       	call   86551de <_ZN5CUser10GetWarRoomEv>
 81efdb4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81efdb7:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81efdbb:	75 2b                	jne    81efde8 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x10e0>
 81efdbd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81efdc4:	00 
 81efdc5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81efdcc:	00 
 81efdcd:	c7 44 24 04 20 03 bd 	movl   $0x8bd0320,0x4(%esp)
 81efdd4:	08 
 81efdd5:	c7 04 24 bf 74 00 00 	movl   $0x74bf,(%esp)
 81efddc:	e8 f6 0a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81efde1:	89 c3                	mov    %eax,%ebx
 81efde3:	e9 86 04 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efde8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efdeb:	89 04 24             	mov    %eax,(%esp)
 81efdee:	e8 99 a5 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81efdf3:	83 f8 04             	cmp    $0x4,%eax
 81efdf6:	0f 9f c0             	setg   %al
 81efdf9:	84 c0                	test   %al,%al
 81efdfb:	74 0a                	je     81efe07 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x10ff>
 81efdfd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efe02:	e9 67 04 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efe07:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81efe0a:	89 04 24             	mov    %eax,(%esp)
 81efe0d:	e8 84 f0 03 00       	call   822ee96 <_ZN7WarRoom8GetStateEv>
 81efe12:	83 f8 02             	cmp    $0x2,%eax
 81efe15:	0f 94 c0             	sete   %al
 81efe18:	84 c0                	test   %al,%al
 81efe1a:	74 0a                	je     81efe26 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x111e>
 81efe1c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81efe21:	e9 48 04 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81efe26:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81efe2d:	00 
 81efe2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81efe35:	00 
 81efe36:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efe39:	89 04 24             	mov    %eax,(%esp)
 81efe3c:	e8 bb ba ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81efe41:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efe44:	89 04 24             	mov    %eax,(%esp)
 81efe47:	e8 30 a5 ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81efe4c:	0f b7 c0             	movzwl %ax,%eax
 81efe4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efe53:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efe56:	89 04 24             	mov    %eax,(%esp)
 81efe59:	e8 46 a0 ee ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81efe5e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81efe65:	00 
 81efe66:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efe69:	89 04 24             	mov    %eax,(%esp)
 81efe6c:	e8 af ba ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81efe71:	0f b7 45 bd          	movzwl -0x43(%ebp),%eax
 81efe75:	0f b7 c0             	movzwl %ax,%eax
 81efe78:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efe7c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efe7f:	89 04 24             	mov    %eax,(%esp)
 81efe82:	e8 b5 ba ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81efe87:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81efe8e:	00 
 81efe8f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efe92:	89 04 24             	mov    %eax,(%esp)
 81efe95:	e8 be ba ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81efe9a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81efe9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81efea1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81efea4:	89 04 24             	mov    %eax,(%esp)
 81efea7:	e8 0e 87 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81efeac:	e9 85 03 00 00       	jmp    81f0236 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152e>
 81efeb1:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81efeb6:	c7 44 24 08 37 00 00 	movl   $0x37,0x8(%esp)
 81efebd:	00 
 81efebe:	8b 55 0c             	mov    0xc(%ebp),%edx
 81efec1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81efec5:	89 04 24             	mov    %eax,(%esp)
 81efec8:	e8 35 8b 09 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81efecd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81efed0:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81efed4:	74 32                	je     81eff08 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1200>
 81efed6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81efed9:	0f b6 d0             	movzbl %al,%edx
 81efedc:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81efee0:	0f be c0             	movsbl %al,%eax
 81efee3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81efee7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81efeeb:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81efef2:	00 
 81efef3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81efef6:	89 04 24             	mov    %eax,(%esp)
 81efef9:	e8 30 bf 48 00       	call   867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>
 81efefe:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eff03:	e9 66 03 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eff08:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81eff0b:	89 04 24             	mov    %eax,(%esp)
 81eff0e:	e8 79 a4 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eff13:	83 f8 04             	cmp    $0x4,%eax
 81eff16:	0f 9f c0             	setg   %al
 81eff19:	84 c0                	test   %al,%al
 81eff1b:	74 0a                	je     81eff27 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x121f>
 81eff1d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eff22:	e9 47 03 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eff27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eff2a:	89 04 24             	mov    %eax,(%esp)
 81eff2d:	e8 3c a4 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81eff32:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81eff38:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eff3c:	89 14 24             	mov    %edx,(%esp)
 81eff3f:	e8 02 94 f1 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81eff44:	83 f0 01             	xor    $0x1,%eax
 81eff47:	84 c0                	test   %al,%al
 81eff49:	74 28                	je     81eff73 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x126b>
 81eff4b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81eff4e:	89 04 24             	mov    %eax,(%esp)
 81eff51:	e8 18 a4 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81eff56:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81eff5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eff60:	89 14 24             	mov    %edx,(%esp)
 81eff63:	e8 de 93 f1 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81eff68:	84 c0                	test   %al,%al
 81eff6a:	74 07                	je     81eff73 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x126b>
 81eff6c:	b8 01 00 00 00       	mov    $0x1,%eax
 81eff71:	eb 05                	jmp    81eff78 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1270>
 81eff73:	b8 00 00 00 00       	mov    $0x0,%eax
 81eff78:	84 c0                	test   %al,%al
 81eff7a:	74 0a                	je     81eff86 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x127e>
 81eff7c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81eff81:	e9 e8 02 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81eff86:	e8 15 51 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81eff8b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eff92:	00 
 81eff93:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81eff96:	89 54 24 08          	mov    %edx,0x8(%esp)
 81eff9a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81eff9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81effa1:	89 04 24             	mov    %eax,(%esp)
 81effa4:	e8 11 e0 0f 00       	call   82edfba <_ZN11pvp_assault11CAssaultMgr16OnRequestAssaultEP5CUserS2_Pi>
 81effa9:	83 f0 01             	xor    $0x1,%eax
 81effac:	84 c0                	test   %al,%al
 81effae:	0f 84 81 02 00 00    	je     81f0235 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152d>
 81effb4:	bb 90 75 00 00       	mov    $0x7590,%ebx
 81effb9:	e9 b0 02 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81effbe:	e8 23 26 f7 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81effc3:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 81effca:	00 
 81effcb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81effd2:	00 
 81effd3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81effd6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81effda:	89 04 24             	mov    %eax,(%esp)
 81effdd:	e8 d6 e6 f7 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81effe2:	84 c0                	test   %al,%al
 81effe4:	74 37                	je     81f001d <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1315>
 81effe6:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81effea:	0f be c0             	movsbl %al,%eax
 81effed:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 81efff0:	89 54 24 10          	mov    %edx,0x10(%esp)
 81efff4:	c7 44 24 0c d1 00 00 	movl   $0xd1,0xc(%esp)
 81efffb:	00 
 81efffc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f0000:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81f0007:	00 
 81f0008:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f000b:	89 04 24             	mov    %eax,(%esp)
 81f000e:	e8 71 bd 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f0013:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0018:	e9 51 02 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81f001d:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f0022:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 81f0029:	00 
 81f002a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f002d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f0031:	89 04 24             	mov    %eax,(%esp)
 81f0034:	e8 c9 89 09 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81f0039:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81f003c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81f0040:	74 39                	je     81f007b <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1373>
 81f0042:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f0045:	0f b6 d0             	movzbl %al,%edx
 81f0048:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f004c:	0f be c0             	movsbl %al,%eax
 81f004f:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 81f0052:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f0056:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f005a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f005e:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81f0065:	00 
 81f0066:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0069:	89 04 24             	mov    %eax,(%esp)
 81f006c:	e8 13 bd 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f0071:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0076:	e9 f3 01 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81f007b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f007e:	89 04 24             	mov    %eax,(%esp)
 81f0081:	e8 0e f8 03 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81f0086:	83 f8 01             	cmp    $0x1,%eax
 81f0089:	0f 95 c0             	setne  %al
 81f008c:	84 c0                	test   %al,%al
 81f008e:	74 37                	je     81f00c7 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x13bf>
 81f0090:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f0094:	0f be c0             	movsbl %al,%eax
 81f0097:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 81f009a:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f009e:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 81f00a5:	00 
 81f00a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f00aa:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81f00b1:	00 
 81f00b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f00b5:	89 04 24             	mov    %eax,(%esp)
 81f00b8:	e8 c7 bc 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f00bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f00c2:	e9 a7 01 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81f00c7:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f00cb:	0f be d0             	movsbl %al,%edx
 81f00ce:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81f00d3:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 81f00d6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f00da:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f00de:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81f00e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f00e5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f00e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f00ec:	89 04 24             	mov    %eax,(%esp)
 81f00ef:	e8 62 e1 2a 00       	call   849e256 <_ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>
 81f00f4:	e9 3d 01 00 00       	jmp    81f0236 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152e>
 81f00f9:	e8 e8 24 f7 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81f00fe:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 81f0105:	00 
 81f0106:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81f010d:	00 
 81f010e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f0111:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f0115:	89 04 24             	mov    %eax,(%esp)
 81f0118:	e8 9b e5 f7 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81f011d:	84 c0                	test   %al,%al
 81f011f:	74 37                	je     81f0158 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1450>
 81f0121:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f0125:	0f be c0             	movsbl %al,%eax
 81f0128:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 81f012b:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f012f:	c7 44 24 0c d1 00 00 	movl   $0xd1,0xc(%esp)
 81f0136:	00 
 81f0137:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f013b:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81f0142:	00 
 81f0143:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f0146:	89 04 24             	mov    %eax,(%esp)
 81f0149:	e8 36 bc 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f014e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0153:	e9 16 01 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81f0158:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81f015d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81f0160:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f0164:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 81f016b:	00 
 81f016c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f016f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f0173:	89 04 24             	mov    %eax,(%esp)
 81f0176:	e8 19 88 09 00       	call   8288994 <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_>
 81f017b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f017e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81f0182:	74 39                	je     81f01bd <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x14b5>
 81f0184:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f0187:	0f b6 d0             	movzbl %al,%edx
 81f018a:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f018e:	0f be c0             	movsbl %al,%eax
 81f0191:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 81f0194:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f0198:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f019c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f01a0:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81f01a7:	00 
 81f01a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f01ab:	89 04 24             	mov    %eax,(%esp)
 81f01ae:	e8 d1 bb 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f01b3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f01b8:	e9 b1 00 00 00       	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81f01bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f01c0:	89 04 24             	mov    %eax,(%esp)
 81f01c3:	e8 cc f6 03 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81f01c8:	83 f8 01             	cmp    $0x1,%eax
 81f01cb:	0f 95 c0             	setne  %al
 81f01ce:	84 c0                	test   %al,%al
 81f01d0:	74 34                	je     81f0206 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x14fe>
 81f01d2:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f01d6:	0f be c0             	movsbl %al,%eax
 81f01d9:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 81f01dc:	89 54 24 10          	mov    %edx,0x10(%esp)
 81f01e0:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 81f01e7:	00 
 81f01e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f01ec:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 81f01f3:	00 
 81f01f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f01f7:	89 04 24             	mov    %eax,(%esp)
 81f01fa:	e8 85 bb 48 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 81f01ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0204:	eb 68                	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81f0206:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f020a:	0f be d0             	movsbl %al,%edx
 81f020d:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81f0212:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 81f0215:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81f0219:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f021d:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81f0220:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f0224:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f0227:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f022b:	89 04 24             	mov    %eax,(%esp)
 81f022e:	e8 23 e0 2a 00       	call   849e256 <_ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>
 81f0233:	eb 01                	jmp    81f0236 <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x152e>
 81f0235:	90                   	nop
 81f0236:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81f023a:	0f be c0             	movsbl %al,%eax
 81f023d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f0241:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f0244:	89 04 24             	mov    %eax,(%esp)
 81f0247:	e8 80 06 04 00       	call   82308cc <_ZN5CUser22SetReceivedRequestTypeEc>
 81f024c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f0251:	eb 1b                	jmp    81f026e <_ZN18DisPatcher_ReqPeer12dispatch_sigEP5CUserR9PacketBuf+0x1566>
 81f0253:	89 d3                	mov    %edx,%ebx
 81f0255:	89 c6                	mov    %eax,%esi
 81f0257:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81f025a:	89 04 24             	mov    %eax,(%esp)
 81f025d:	e8 1e dc 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f0262:	89 f0                	mov    %esi,%eax
 81f0264:	89 da                	mov    %ebx,%edx
 81f0266:	89 04 24             	mov    %eax,(%esp)
 81f0269:	e8 e2 34 8f 00       	call   8ae3750 <_Unwind_Resume>
 81f026e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81f0271:	89 04 24             	mov    %eax,(%esp)
 81f0274:	e8 07 dc 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f0279:	89 d8                	mov    %ebx,%eax
 81f027b:	83 ec 80             	sub    $0xffffff80,%esp
 81f027e:	5b                   	pop    %ebx
 81f027f:	5e                   	pop    %esi
 81f0280:	5d                   	pop    %ebp
 81f0281:	c3                   	ret

```

```c
// DisPatcher_ReqPeer::dispatch_sig @ 0x81eed08

/* DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ReqPeer::dispatch_sig(DisPatcher_ReqPeer *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  CPrivateStoreMgr *pCVar8;
  GameWorld *pGVar9;
  undefined4 uVar10;
  CGameOption *pCVar11;
  CAssaultMgr *pCVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ServiceRestrictManager *pSVar16;
  ushort local_62;
  PacketGuard local_60 [12];
  MSG_REQ_TO_PEER local_54 [13];
  ushort local_47;
  char local_45;
  uint local_44;
  CUser *local_40;
  int local_3c;
  int local_38;
  CParty *local_34;
  int local_30;
  CParty *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  WarRoom *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  iVar6 = CUser::get_state(param_1);
  if (((iVar6 == 3) || (iVar6 = CUser::get_state(param_1), iVar6 == 6)) ||
     (iVar6 = CUser::get_state(param_1), iVar6 == 8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  PacketGuard::PacketGuard(local_60);
                    /* try { // try from 081eed75 to 081f0232 has its CatchHandler @ 081f0253 */
  cVar3 = PacketBuf::get_short(param_2,&local_47);
  if (cVar3 != '\x01') {
    uVar7 = LineFunc(0x725a,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0);
    goto LAB_081f026e;
  }
  cVar3 = PacketBuf::get_byte(param_2,&local_45);
  if (cVar3 != '\x01') {
    uVar7 = LineFunc(0x725b,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0);
    goto LAB_081f026e;
  }
  cVar3 = PacketBuf::get_int(param_2,&local_44);
  if (cVar3 != '\x01') {
    uVar7 = LineFunc(0x725c,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0);
    goto LAB_081f026e;
  }
  pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3c);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  cVar3 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xbf);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
  if (cVar3 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
  uVar2 = local_47;
  if ((cVar3 != '\0') && (local_45 != '\x02')) {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  local_40 = (CUser *)GameWorld::find_from_world(pGVar9,uVar2);
  local_3c = 1;
  if (local_40 == (CUser *)0x0) {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,3);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  cVar3 = CUser::alonePlay_Mode(local_40,local_54);
  if (cVar3 != '\0') {
    uVar7 = CUser::get_SoloPlay_msgType(local_40,local_54);
    uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_40);
    CUser::Send_SoloPlay_Reject_NotiPack(param_1,uVar10,1,uVar7);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  local_38 = 0x24;
  if (local_45 == '\x01') {
    local_38 = 0x1f;
  }
  else if (local_45 < '\x02') {
    if (local_45 == '\0') {
      local_38 = 6;
    }
  }
  else if (local_45 == '\x02') {
    local_38 = 7;
  }
  else if (local_45 == '\x03') {
    local_38 = 8;
  }
  if (local_38 == 0x24) {
LAB_081ef078:
    bVar1 = false;
  }
  else {
    pCVar11 = (CGameOption *)CUser::GetGameOptionRef(local_40);
    sVar5 = CGameOption::get_etc_option(pCVar11,local_38);
    if (sVar5 == 0) goto LAB_081ef078;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = CUser::get_SoloPlay_msgType(local_40,local_54);
    uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)local_40);
    CUser::Send_SoloPlay_Reject_NotiPack(param_1,uVar10,0,uVar7);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
  if (cVar3 != '\0') {
    iVar6 = CUser::get_state(local_40);
    if ((iVar6 == 6) || (iVar6 = CUser::get_state(local_40), iVar6 == 7)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
  }
  cVar4 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)local_40);
  cVar3 = local_45;
  if (cVar4 != '\0') {
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xc0);
    uVar7 = 0;
    goto LAB_081f026e;
  }
  pCVar12 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
  local_3c = pvp_assault::CAssaultMgr::check_party_teleport_user
                       (pCVar12,cVar3,param_1,local_40,true);
  if (0 < local_3c) {
    uVar7 = 0;
    goto LAB_081f026e;
  }
  switch(local_45) {
  case '\0':
    iVar6 = CUser::get_state(param_1);
    if ((iVar6 == 5) ||
       (cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0)),
       cVar3 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    uVar15 = CUser::get_charac_no(param_1,-1);
    cVar3 = CUser::isBlackUser(local_40,uVar15);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x4d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::isCompetitionMercenary(param_1);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xea);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::isCompetitionMercenary(local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xbe);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if ((iVar6 == 5) ||
       (cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_40 + 0xe0)),
       cVar3 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,3);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if (cVar3 != '\0') {
      cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      if ((cVar3 == '\a') &&
         (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_40), cVar3 == '\a')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cVar3 = CUser::getPowerSide(param_1);
        cVar4 = CUser::getPowerSide(local_40);
        if (cVar3 != cVar4) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
          uVar7 = 0;
          goto LAB_081f026e;
        }
      }
      else {
        cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        if (((cVar3 == '\a') ||
            (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_40), cVar3 != '\a'))
           && ((cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar3 != '\a'
               || (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_40),
                  cVar3 == '\a')))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
          uVar7 = 0;
          goto LAB_081f026e;
        }
      }
    }
    local_34 = (CParty *)CUser::GetParty(param_1);
    if (local_34 != (CParty *)0x0) {
      iVar6 = CParty::get_member_count(local_34);
      if (3 < iVar6) {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
        uVar7 = 0;
        goto LAB_081f026e;
      }
      cVar3 = CParty::CanDoPartyActionAssalutState(local_34);
      if (cVar3 != '\x01') {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
        uVar7 = 0;
        goto LAB_081f026e;
      }
    }
    cVar3 = CUser::CheckInParty(param_1);
    if ((cVar3 == '\0') || (cVar3 = CUser::CheckInParty(local_40), cVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x12);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if (cVar3 != '\x01') {
      local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      cVar3 = expert_job::CAlchemist::GetAssaultPrevent(param_1,(bool *)0x0);
      if (cVar3 != '\0') {
        local_2c = (CParty *)CUser::GetParty(local_40);
        iVar6 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)local_40);
        if (local_30 < iVar6 + 600) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
          uVar7 = 0;
          goto LAB_081f026e;
        }
        if ((local_2c == (CParty *)0x0) ||
           (cVar3 = CParty::CheckMemberLastTryAssaultTime(local_2c), cVar3 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
          uVar7 = 0;
          goto LAB_081f026e;
        }
      }
      iVar6 = CUserCharacInfo::GetCurCharacChaosKillTime((CUserCharacInfo *)param_1);
      if ((local_30 < iVar6 + 600) &&
         (cVar3 = expert_job::CAlchemist::GetAssaultPrevent(local_40,(bool *)0x0), cVar3 != '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
        uVar7 = 0;
        goto LAB_081f026e;
      }
      if (((local_34 == (CParty *)0x0) ||
          (cVar3 = CParty::CheckMemberLastTryAssaultTime(local_34), cVar3 == '\0')) ||
         (cVar3 = expert_job::CAlchemist::GetAssaultPrevent(local_40,(bool *)0x0), cVar3 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xfa);
        uVar7 = 0;
        goto LAB_081f026e;
      }
    }
    local_62 = 0;
    PacketBuf::get_short(param_2,&local_62);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
    uVar15 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_44);
    uVar15 = CUser::getCurCharacTotalMaxFatigue(param_1);
    uVar13 = CUser::getCurCharacTotalFatigue(param_1);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_60,(uVar15 & 0xffff) - (uVar13 & 0xffff));
    uVar15 = CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,(uint)local_62);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(local_40,local_60);
    break;
  case '\x01':
    local_28 = 1;
    pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar16,param_1,1,6);
    if (cVar3 == '\0') {
      pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
      cVar3 = ServiceRestrictManager::isRestricted(pSVar16,local_40,1,6);
      if (cVar3 != '\0') goto LAB_081ef92f;
      bVar1 = false;
    }
    else {
LAB_081ef92f:
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xd1);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    local_24 = CSecu_ProtectionField::CheckOpposite
                         (GlobalData::s_pSecuProtectionField,param_1,0x36,local_40);
    if (local_24 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_24 & 0xff);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    uVar15 = CUser::get_charac_no(param_1,-1);
    cVar3 = CUser::isBlackUser(local_40,uVar15);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x4d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::CheckInTrade(local_40);
    if (cVar3 != '\x01') {
      iVar6 = CUser::get_state(param_1);
      iVar14 = CUser::get_state(local_40);
      if (iVar6 == iVar14) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
        uVar15 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_44);
        iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,iVar6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
        CUser::Send(local_40,local_60);
        CUser::SetReceivedRequestType(local_40,local_45);
        uVar7 = 0;
        goto LAB_081f026e;
      }
      local_28 = 0x13;
    }
    if (local_40 == (CUser *)0x0) {
      local_28 = 3;
    }
    else {
      cVar3 = CUser::CheckInTrade(local_40);
      if (cVar3 != '\0') {
        local_28 = 0x12;
      }
    }
    CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_28 & 0xff);
    break;
  case '\x02':
    local_20 = CUser::GetPVPRoom(param_1);
    if (local_20 == 0) {
      uVar7 = LineFunc(0x7494,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
      goto LAB_081f026e;
    }
    pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x3d);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x13);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    cVar3 = CUser::isCompetitionMercenary(local_40);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xbe);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if (4 < iVar6) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
    uVar15 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,(uint)local_47);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(local_40,local_60);
    break;
  case '\x03':
    local_1c = (WarRoom *)CUser::GetWarRoom(param_1);
    if (local_1c == (WarRoom *)0x0) {
      uVar7 = LineFunc(0x74bf,"virtual int DisPatcher_ReqPeer::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if (4 < iVar6) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = WarRoom::GetState(local_1c);
    if (iVar6 == 2) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,7);
    uVar15 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,uVar15 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,3);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,(uint)local_47);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    CUser::Send(local_40,local_60);
    break;
  case '\x04':
    local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x37);
    if (local_18 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_18 & 0xff);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUser::get_state(local_40);
    if (4 < iVar6) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    uVar15 = CUser::get_acc_id(param_1);
    cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar15);
    if (cVar3 == '\x01') {
LAB_081eff73:
      bVar1 = false;
    }
    else {
      uVar15 = CUser::get_acc_id(local_40);
      cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar15);
      if (cVar3 == '\0') goto LAB_081eff73;
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = 0;
      goto LAB_081f026e;
    }
    pCVar12 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    cVar3 = pvp_assault::CAssaultMgr::OnRequestAssault(pCVar12,param_1,local_40,(int *)0x0);
    if (cVar3 != '\x01') {
      uVar7 = 0x7590;
      goto LAB_081f026e;
    }
    break;
  case '\x05':
  case '\a':
    pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar16,param_1,1,8);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xd1,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x21);
    if (local_14 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_14 & 0xff,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)local_40);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x17,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    expert_job::CExpertJobMgr::OnRequestPeer
              (GlobalData::s_ExpertJobMgr,param_1,local_40,(int)local_45,local_60);
    break;
  case '\x06':
  case '\b':
    pSVar16 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar16,param_1,1,8);
    if (cVar3 != '\0') {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0xd1,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    local_10 = CSecu_ProtectionField::CheckOpposite
                         (GlobalData::s_pSecuProtectionField,param_1,0x20,local_40);
    if (local_10 != 0) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,local_10 & 0xff,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    iVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar6 != 1) {
      CUser::SendCmdPeerErrorPacket(param_1,10,(int)local_45,0x17,local_60);
      uVar7 = 0;
      goto LAB_081f026e;
    }
    expert_job::CExpertJobMgr::OnRequestPeer
              (GlobalData::s_ExpertJobMgr,param_1,local_40,(int)local_45,local_60);
  }
  CUser::SetReceivedRequestType(local_40,local_45);
  uVar7 = 0;
LAB_081f026e:
  PacketGuard::~PacketGuard(local_60);
  return uVar7;
}

```

