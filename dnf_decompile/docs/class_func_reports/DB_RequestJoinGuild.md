# DB_RequestJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843ccf2 DB_RequestJoinGuild::dispatch  [0x0843ccf2-0x843d199] ===
 843ccf2:	55                   	push   %ebp
 843ccf3:	89 e5                	mov    %esp,%ebp
 843ccf5:	57                   	push   %edi
 843ccf6:	56                   	push   %esi
 843ccf7:	53                   	push   %ebx
 843ccf8:	83 ec 7c             	sub    $0x7c,%esp
 843ccfb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843cd00:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843cd07:	00 
 843cd08:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 843cd0f:	00 
 843cd10:	89 04 24             	mov    %eax,(%esp)
 843cd13:	e8 26 85 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843cd18:	89 45 d8             	mov    %eax,-0x28(%ebp)
 843cd1b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843cd20:	c7 44 24 08 29 91 00 	movl   $0x9129,0x8(%esp)
 843cd27:	00 
 843cd28:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843cd2f:	08 
 843cd30:	89 04 24             	mov    %eax,(%esp)
 843cd33:	e8 4e 2d e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843cd38:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843cd3f:	00 
 843cd40:	89 44 24 04          	mov    %eax,0x4(%esp)
 843cd44:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843cd47:	89 04 24             	mov    %eax,(%esp)
 843cd4a:	e8 d7 be c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843cd4f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843cd52:	89 04 24             	mov    %eax,(%esp)
 843cd55:	e8 ec be c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843cd5a:	c7 44 24 04 17 02 00 	movl   $0x217,0x4(%esp)
 843cd61:	00 
 843cd62:	89 04 24             	mov    %eax,(%esp)
 843cd65:	e8 ec be c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843cd6a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843cd6d:	89 04 24             	mov    %eax,(%esp)
 843cd70:	e8 d1 be c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843cd75:	8b 55 10             	mov    0x10(%ebp),%edx
 843cd78:	89 54 24 04          	mov    %edx,0x4(%esp)
 843cd7c:	89 04 24             	mov    %eax,(%esp)
 843cd7f:	e8 d2 be c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843cd84:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843cd87:	89 04 24             	mov    %eax,(%esp)
 843cd8a:	e8 bf be c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843cd8f:	89 04 24             	mov    %eax,(%esp)
 843cd92:	e8 63 6d 01 00       	call   8453afa <_ZN12CStreamGuard11GetInBufferI31SIG_REQUEST_JOIN_GUILD_DB_REPLYEEPT_v>
 843cd97:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843cd9a:	8b 45 14             	mov    0x14(%ebp),%eax
 843cd9d:	89 04 24             	mov    %eax,(%esp)
 843cda0:	e8 6b 6d 01 00       	call   8453b10 <_ZN6Stream12GetOutBufferI22SIG_REQUEST_JOIN_GUILDEEPT_v>
 843cda5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843cda8:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843cdaf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843cdb2:	8b 50 20             	mov    0x20(%eax),%edx
 843cdb5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843cdb8:	8b 40 18             	mov    0x18(%eax),%eax
 843cdbb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843cdbf:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cdc3:	c7 44 24 04 38 52 c5 	movl   $0x8c55238,0x4(%esp)
 843cdca:	08 
 843cdcb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cdce:	89 04 24             	mov    %eax,(%esp)
 843cdd1:	e8 ea 73 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843cdd6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843cddd:	00 
 843cdde:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cde1:	89 04 24             	mov    %eax,(%esp)
 843cde4:	e8 3d 75 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843cde9:	83 f0 01             	xor    $0x1,%eax
 843cdec:	84 c0                	test   %al,%al
 843cdee:	74 0a                	je     843cdfa <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x108>
 843cdf0:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cdf5:	e9 8a 03 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cdfa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cdfd:	89 04 24             	mov    %eax,(%esp)
 843ce00:	e8 67 55 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843ce05:	85 c0                	test   %eax,%eax
 843ce07:	0f 95 c0             	setne  %al
 843ce0a:	84 c0                	test   %al,%al
 843ce0c:	74 2f                	je     843ce3d <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x14b>
 843ce0e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843ce11:	c7 00 12 00 00 00    	movl   $0x12,(%eax)
 843ce17:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843ce1c:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843ce1f:	89 54 24 08          	mov    %edx,0x8(%esp)
 843ce23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ce2a:	00 
 843ce2b:	89 04 24             	mov    %eax,(%esp)
 843ce2e:	e8 ab 41 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843ce33:	bb 00 00 00 00       	mov    $0x0,%ebx
 843ce38:	e9 47 03 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843ce3d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 843ce40:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843ce43:	8b 40 20             	mov    0x20(%eax),%eax
 843ce46:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843ce4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ce4e:	c7 44 24 04 80 52 c5 	movl   $0x8c55280,0x4(%esp)
 843ce55:	08 
 843ce56:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843ce59:	89 04 24             	mov    %eax,(%esp)
 843ce5c:	e8 5f 73 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ce61:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ce68:	00 
 843ce69:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843ce6c:	89 04 24             	mov    %eax,(%esp)
 843ce6f:	e8 b2 74 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ce74:	83 f0 01             	xor    $0x1,%eax
 843ce77:	84 c0                	test   %al,%al
 843ce79:	74 0a                	je     843ce85 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x193>
 843ce7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 843ce80:	e9 ff 02 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843ce85:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843ce88:	89 04 24             	mov    %eax,(%esp)
 843ce8b:	e8 dc 54 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843ce90:	85 c0                	test   %eax,%eax
 843ce92:	0f 94 c0             	sete   %al
 843ce95:	84 c0                	test   %al,%al
 843ce97:	74 2f                	je     843cec8 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x1d6>
 843ce99:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843ce9c:	c7 00 15 00 00 00    	movl   $0x15,(%eax)
 843cea2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843cea7:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843ceaa:	89 54 24 08          	mov    %edx,0x8(%esp)
 843ceae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ceb5:	00 
 843ceb6:	89 04 24             	mov    %eax,(%esp)
 843ceb9:	e8 20 41 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843cebe:	bb 01 00 00 00       	mov    $0x1,%ebx
 843cec3:	e9 bc 02 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cec8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cecb:	89 04 24             	mov    %eax,(%esp)
 843cece:	e8 e9 75 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843ced3:	83 f0 01             	xor    $0x1,%eax
 843ced6:	84 c0                	test   %al,%al
 843ced8:	74 0a                	je     843cee4 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x1f2>
 843ceda:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cedf:	e9 a0 02 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cee4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843cee7:	83 c0 04             	add    $0x4,%eax
 843ceea:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ceee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843cef5:	00 
 843cef6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cef9:	89 04 24             	mov    %eax,(%esp)
 843cefc:	e8 f1 53 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843cf01:	83 f0 01             	xor    $0x1,%eax
 843cf04:	84 c0                	test   %al,%al
 843cf06:	74 0a                	je     843cf12 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x220>
 843cf08:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cf0d:	e9 72 02 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cf12:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843cf15:	83 c0 26             	add    $0x26,%eax
 843cf18:	c7 44 24 0c 17 00 00 	movl   $0x17,0xc(%esp)
 843cf1f:	00 
 843cf20:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cf24:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843cf2b:	00 
 843cf2c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cf2f:	89 04 24             	mov    %eax,(%esp)
 843cf32:	e8 b3 fe ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843cf37:	83 f0 01             	xor    $0x1,%eax
 843cf3a:	84 c0                	test   %al,%al
 843cf3c:	74 0a                	je     843cf48 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x256>
 843cf3e:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cf43:	e9 3c 02 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cf48:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843cf4b:	83 c0 08             	add    $0x8,%eax
 843cf4e:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 843cf55:	00 
 843cf56:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cf5a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843cf61:	00 
 843cf62:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cf65:	89 04 24             	mov    %eax,(%esp)
 843cf68:	e8 7d fe ca ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843cf6d:	83 f0 01             	xor    $0x1,%eax
 843cf70:	84 c0                	test   %al,%al
 843cf72:	74 0a                	je     843cf7e <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x28c>
 843cf74:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cf79:	e9 06 02 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cf7e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843cf81:	83 c0 40             	add    $0x40,%eax
 843cf84:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cf88:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843cf8f:	00 
 843cf90:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cf93:	89 04 24             	mov    %eax,(%esp)
 843cf96:	e8 91 99 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843cf9b:	83 f0 01             	xor    $0x1,%eax
 843cf9e:	84 c0                	test   %al,%al
 843cfa0:	74 0a                	je     843cfac <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x2ba>
 843cfa2:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cfa7:	e9 d8 01 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cfac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843cfaf:	83 c0 44             	add    $0x44,%eax
 843cfb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cfb6:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843cfbd:	00 
 843cfbe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cfc1:	89 04 24             	mov    %eax,(%esp)
 843cfc4:	e8 63 99 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843cfc9:	83 f0 01             	xor    $0x1,%eax
 843cfcc:	84 c0                	test   %al,%al
 843cfce:	74 0a                	je     843cfda <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x2e8>
 843cfd0:	bb 00 00 00 00       	mov    $0x0,%ebx
 843cfd5:	e9 aa 01 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843cfda:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843cfdd:	8b 40 04             	mov    0x4(%eax),%eax
 843cfe0:	89 44 24 08          	mov    %eax,0x8(%esp)
 843cfe4:	c7 44 24 04 04 53 c5 	movl   $0x8c55304,0x4(%esp)
 843cfeb:	08 
 843cfec:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843cfef:	89 04 24             	mov    %eax,(%esp)
 843cff2:	e8 c9 71 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843cff7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843cffe:	00 
 843cfff:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843d002:	89 04 24             	mov    %eax,(%esp)
 843d005:	e8 1c 73 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843d00a:	83 f0 01             	xor    $0x1,%eax
 843d00d:	84 c0                	test   %al,%al
 843d00f:	74 0a                	je     843d01b <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x329>
 843d011:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d016:	e9 69 01 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843d01b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843d01e:	89 04 24             	mov    %eax,(%esp)
 843d021:	e8 46 53 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843d026:	83 f8 31             	cmp    $0x31,%eax
 843d029:	0f 97 c0             	seta   %al
 843d02c:	84 c0                	test   %al,%al
 843d02e:	74 2f                	je     843d05f <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x36d>
 843d030:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843d033:	c7 00 5f 00 00 00    	movl   $0x5f,(%eax)
 843d039:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d03e:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843d041:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d045:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d04c:	00 
 843d04d:	89 04 24             	mov    %eax,(%esp)
 843d050:	e8 89 3f 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d055:	bb 01 00 00 00       	mov    $0x1,%ebx
 843d05a:	e9 25 01 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843d05f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843d062:	83 c0 27             	add    $0x27,%eax
 843d065:	89 44 24 08          	mov    %eax,0x8(%esp)
 843d069:	8d 45 9b             	lea    -0x65(%ebp),%eax
 843d06c:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d070:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843d073:	89 04 24             	mov    %eax,(%esp)
 843d076:	e8 2f 78 fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 843d07b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843d07e:	8d 78 24             	lea    0x24(%eax),%edi
 843d081:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843d084:	8b 70 18             	mov    0x18(%eax),%esi
 843d087:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843d08a:	8b 58 20             	mov    0x20(%eax),%ebx
 843d08d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843d090:	8b 40 1c             	mov    0x1c(%eax),%eax
 843d093:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843d09a:	00 
 843d09b:	89 04 24             	mov    %eax,(%esp)
 843d09e:	e8 a8 bf cc ff       	call   810904b <_Z14NumberToStringji>
 843d0a3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 843d0a6:	8b 52 04             	mov    0x4(%edx),%edx
 843d0a9:	8d 4d 9b             	lea    -0x65(%ebp),%ecx
 843d0ac:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 843d0b0:	89 7c 24 18          	mov    %edi,0x18(%esp)
 843d0b4:	89 74 24 14          	mov    %esi,0x14(%esp)
 843d0b8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 843d0bc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843d0c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d0c4:	c7 44 24 04 34 53 c5 	movl   $0x8c55334,0x4(%esp)
 843d0cb:	08 
 843d0cc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843d0cf:	89 04 24             	mov    %eax,(%esp)
 843d0d2:	e8 e9 70 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843d0d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d0de:	00 
 843d0df:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843d0e2:	89 04 24             	mov    %eax,(%esp)
 843d0e5:	e8 3c 72 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843d0ea:	83 f0 01             	xor    $0x1,%eax
 843d0ed:	84 c0                	test   %al,%al
 843d0ef:	74 0a                	je     843d0fb <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x409>
 843d0f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 843d0f6:	e9 89 00 00 00       	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843d0fb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843d0fe:	89 04 24             	mov    %eax,(%esp)
 843d101:	e8 0a 72 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843d106:	09 d0                	or     %edx,%eax
 843d108:	85 c0                	test   %eax,%eax
 843d10a:	0f 94 c0             	sete   %al
 843d10d:	84 c0                	test   %al,%al
 843d10f:	74 2c                	je     843d13d <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x44b>
 843d111:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843d114:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 843d11a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d11f:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843d122:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d126:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d12d:	00 
 843d12e:	89 04 24             	mov    %eax,(%esp)
 843d131:	e8 a8 3e 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d136:	bb 01 00 00 00       	mov    $0x1,%ebx
 843d13b:	eb 47                	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843d13d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843d140:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 843d146:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d14b:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843d14e:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d152:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843d159:	00 
 843d15a:	89 04 24             	mov    %eax,(%esp)
 843d15d:	e8 7c 3e 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d162:	bb 01 00 00 00       	mov    $0x1,%ebx
 843d167:	eb 1b                	jmp    843d184 <_ZN19DB_RequestJoinGuild8dispatchEiiP6Stream+0x492>
 843d169:	89 d3                	mov    %edx,%ebx
 843d16b:	89 c6                	mov    %eax,%esi
 843d16d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843d170:	89 04 24             	mov    %eax,(%esp)
 843d173:	e8 5a f7 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d178:	89 f0                	mov    %esi,%eax
 843d17a:	89 da                	mov    %ebx,%edx
 843d17c:	89 04 24             	mov    %eax,(%esp)
 843d17f:	e8 cc 65 6a 00       	call   8ae3750 <_Unwind_Resume>
 843d184:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843d187:	89 04 24             	mov    %eax,(%esp)
 843d18a:	e8 43 f7 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d18f:	89 d8                	mov    %ebx,%eax
 843d191:	83 c4 7c             	add    $0x7c,%esp
 843d194:	5b                   	pop    %ebx
 843d195:	5e                   	pop    %esi
 843d196:	5f                   	pop    %edi
 843d197:	5d                   	pop    %ebp
 843d198:	c3                   	ret
 843d199:	90                   	nop

```

```c
// DB_RequestJoinGuild::dispatch @ 0x843ccf2

/* DB_RequestJoinGuild::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_RequestJoinGuild::dispatch(DB_RequestJoinGuild *this,int param_1,int param_2,Stream *param_3)

{
  SIG_REQUEST_JOIN_GUILD *pSVar1;
  undefined4 uVar2;
  char cVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char local_69 [53];
  CStreamGuard local_34 [8];
  MySQL *local_2c;
  SIG_REQUEST_JOIN_GUILD_DB_REPLY *local_28;
  SIG_REQUEST_JOIN_GUILD *local_24;
  undefined4 local_20;
  
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9129);
  CStreamGuard::CStreamGuard(local_34,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843cd65 to 0843d161 has its CatchHandler @ 0843d169 */
  CStreamGuard::operator<<(pCVar5,0x217);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
  CStreamGuard::operator<<(pCVar5,param_2);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
  local_28 = CStreamGuard::GetInBuffer<SIG_REQUEST_JOIN_GUILD_DB_REPLY>(pCVar5);
  local_24 = Stream::GetOutBuffer<SIG_REQUEST_JOIN_GUILD>(param_3);
  local_20 = 0;
  MySQL::set_query(local_2c,"seLect * from guild_join_list where charac_no=%d and server_group=%d",
                   *(undefined4 *)(local_24 + 0x18),*(undefined4 *)(local_24 + 0x20));
  cVar3 = MySQL::exec(local_2c,true);
  if (cVar3 == '\x01') {
    iVar6 = MySQL::get_n_rows(local_2c);
    if (iVar6 == 0) {
      MySQL::set_query(local_2c,
                       "seLect guild_id,guild_name,master_name,lev,member_count from guild_info where server_id=%d and expire_flag=0 and guild_name=\'%s\'"
                       ,*(undefined4 *)(local_24 + 0x20),local_24);
      cVar3 = MySQL::exec(local_2c,true);
      if (cVar3 == '\x01') {
        iVar6 = MySQL::get_n_rows(local_2c);
        if (iVar6 == 0) {
          *(undefined4 *)local_28 = 0x15;
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
          uVar9 = 1;
        }
        else {
          cVar3 = MySQL::fetch(local_2c);
          if (cVar3 == '\x01') {
            cVar3 = MySQL::get_uint(local_2c,0,(uint *)(local_28 + 4));
            if (cVar3 == '\x01') {
              cVar3 = MySQL::get_str(local_2c,1,(char *)(local_28 + 0x26),0x17);
              if (cVar3 == '\x01') {
                cVar3 = MySQL::get_str(local_2c,2,(char *)(local_28 + 8),0x1e);
                if (cVar3 == '\x01') {
                  cVar3 = MySQL::get_int(local_2c,3,(int *)(local_28 + 0x40));
                  if (cVar3 == '\x01') {
                    cVar3 = MySQL::get_int(local_2c,4,(int *)(local_28 + 0x44));
                    if (cVar3 == '\x01') {
                      MySQL::set_query(local_2c,"seLect * from guild_join_list where guild_id=%d",
                                       *(undefined4 *)(local_28 + 4));
                      cVar3 = MySQL::exec(local_2c,true);
                      if (cVar3 == '\x01') {
                        uVar7 = MySQL::get_n_rows(local_2c);
                        if (uVar7 < 0x32) {
                          MySQL::escape_string(local_2c,local_69,(char *)(local_24 + 0x27));
                          pSVar1 = local_24 + 0x24;
                          uVar9 = *(undefined4 *)(local_24 + 0x18);
                          uVar2 = *(undefined4 *)(local_24 + 0x20);
                          uVar8 = NumberToString(*(uint *)(local_24 + 0x1c),0);
                          MySQL::set_query(local_2c,
                                           "inSert into guild_join_list(guild_id,m_id,server_group,charac_no,born_year,memo,occ_time) values(%d,%s,%d,%d,\'%s\',\'%s\',now())"
                                           ,*(undefined4 *)(local_28 + 4),uVar8,uVar2,uVar9,pSVar1,
                                           local_69);
                          cVar3 = MySQL::exec(local_2c,true);
                          if (cVar3 == '\x01') {
                            lVar10 = MySQL::getAffectedRowCount(local_2c);
                            if (lVar10 == 0) {
                              *(undefined4 *)local_28 = 2;
                              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                              uVar9 = 1;
                            }
                            else {
                              *(undefined4 *)local_28 = 0;
                              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                              uVar9 = 1;
                            }
                          }
                          else {
                            uVar9 = 0;
                          }
                        }
                        else {
                          *(undefined4 *)local_28 = 0x5f;
                          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                          uVar9 = 1;
                        }
                      }
                      else {
                        uVar9 = 0;
                      }
                    }
                    else {
                      uVar9 = 0;
                    }
                  }
                  else {
                    uVar9 = 0;
                  }
                }
                else {
                  uVar9 = 0;
                }
              }
              else {
                uVar9 = 0;
              }
            }
            else {
              uVar9 = 0;
            }
          }
          else {
            uVar9 = 0;
          }
        }
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      *(undefined4 *)local_28 = 0x12;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0;
  }
  CStreamGuard::~CStreamGuard(local_34);
  return uVar9;
}

```

---

## makeRequest

```asm
// === 0843d19a DB_RequestJoinGuild::makeRequest  [0x0843d19a-0x843d285] ===
 843d19a:	55                   	push   %ebp
 843d19b:	89 e5                	mov    %esp,%ebp
 843d19d:	56                   	push   %esi
 843d19e:	53                   	push   %ebx
 843d19f:	83 ec 20             	sub    $0x20,%esp
 843d1a2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843d1a7:	c7 44 24 08 a8 91 00 	movl   $0x91a8,0x8(%esp)
 843d1ae:	00 
 843d1af:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843d1b6:	08 
 843d1b7:	89 04 24             	mov    %eax,(%esp)
 843d1ba:	e8 c7 28 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843d1bf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843d1c6:	00 
 843d1c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d1cb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d1ce:	89 04 24             	mov    %eax,(%esp)
 843d1d1:	e8 50 ba c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843d1d6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d1d9:	89 04 24             	mov    %eax,(%esp)
 843d1dc:	e8 65 ba c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d1e1:	c7 44 24 04 17 02 00 	movl   $0x217,0x4(%esp)
 843d1e8:	00 
 843d1e9:	89 04 24             	mov    %eax,(%esp)
 843d1ec:	e8 65 ba c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d1f1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d1f4:	89 04 24             	mov    %eax,(%esp)
 843d1f7:	e8 4a ba c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843d1fc:	8b 55 08             	mov    0x8(%ebp),%edx
 843d1ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 843d203:	89 04 24             	mov    %eax,(%esp)
 843d206:	e8 4b ba c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843d20b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d20e:	89 04 24             	mov    %eax,(%esp)
 843d211:	e8 38 ba c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843d216:	89 04 24             	mov    %eax,(%esp)
 843d219:	e8 46 69 01 00       	call   8453b64 <_ZN12CStreamGuard11GetInBufferI22SIG_REQUEST_JOIN_GUILDEEPT_v>
 843d21e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843d221:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 843d228:	00 
 843d229:	8b 45 0c             	mov    0xc(%ebp),%eax
 843d22c:	89 44 24 04          	mov    %eax,0x4(%esp)
 843d230:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843d233:	89 04 24             	mov    %eax,(%esp)
 843d236:	e8 65 06 c4 ff       	call   807d8a0 <memcpy@plt>
 843d23b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843d240:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843d243:	89 54 24 08          	mov    %edx,0x8(%esp)
 843d247:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843d24e:	00 
 843d24f:	89 04 24             	mov    %eax,(%esp)
 843d252:	e8 87 3d 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843d257:	eb 1b                	jmp    843d274 <_ZN19DB_RequestJoinGuild11makeRequestEiP22SIG_REQUEST_JOIN_GUILD+0xda>
 843d259:	89 d3                	mov    %edx,%ebx
 843d25b:	89 c6                	mov    %eax,%esi
 843d25d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d260:	89 04 24             	mov    %eax,(%esp)
 843d263:	e8 6a f6 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d268:	89 f0                	mov    %esi,%eax
 843d26a:	89 da                	mov    %ebx,%edx
 843d26c:	89 04 24             	mov    %eax,(%esp)
 843d26f:	e8 dc 64 6a 00       	call   8ae3750 <_Unwind_Resume>
 843d274:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843d277:	89 04 24             	mov    %eax,(%esp)
 843d27a:	e8 53 f6 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843d27f:	83 c4 20             	add    $0x20,%esp
 843d282:	5b                   	pop    %ebx
 843d283:	5e                   	pop    %esi
 843d284:	5d                   	pop    %ebp
 843d285:	c3                   	ret

```

```c
// DB_RequestJoinGuild::makeRequest @ 0x843d19a

/* DB_RequestJoinGuild::makeRequest(int, SIG_REQUEST_JOIN_GUILD*) */

void DB_RequestJoinGuild::makeRequest(int param_1,SIG_REQUEST_JOIN_GUILD *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQUEST_JOIN_GUILD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x91a8);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843d1ec to 0843d256 has its CatchHandler @ 0843d259 */
  CStreamGuard::operator<<(pCVar2,0x217);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_JOIN_GUILD>(pCVar2);
  memcpy(local_10,param_2,0x44);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

