# Dispatcher_New_Gmdebug_Command

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 0820bbde Dispatcher_New_Gmdebug_Command::dispatch_sig  [0x0820bbde-0x820bf2b] ===
 820bbde:	55                   	push   %ebp
 820bbdf:	89 e5                	mov    %esp,%ebp
 820bbe1:	56                   	push   %esi
 820bbe2:	53                   	push   %ebx
 820bbe3:	81 ec 90 01 00 00    	sub    $0x190,%esp
 820bbe9:	c6 45 e6 01          	movb   $0x1,-0x1a(%ebp)
 820bbed:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 820bbf1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820bbf8:	00 
 820bbf9:	8b 45 10             	mov    0x10(%ebp),%eax
 820bbfc:	89 04 24             	mov    %eax,(%esp)
 820bbff:	e8 fe fa 01 00       	call   822b702 <_ZN9PacketBuf10get_packetEi>
 820bc04:	89 45 e8             	mov    %eax,-0x18(%ebp)
 820bc07:	8b 45 0c             	mov    0xc(%ebp),%eax
 820bc0a:	89 04 24             	mov    %eax,(%esp)
 820bc0d:	e8 20 48 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820bc12:	85 c0                	test   %eax,%eax
 820bc14:	0f 94 c0             	sete   %al
 820bc17:	84 c0                	test   %al,%al
 820bc19:	74 2b                	je     820bc46 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x68>
 820bc1b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820bc22:	00 
 820bc23:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820bc2a:	00 
 820bc2b:	c7 44 24 04 80 df bc 	movl   $0x8bcdf80,0x4(%esp)
 820bc32:	08 
 820bc33:	c7 04 24 bc a9 00 00 	movl   $0xa9bc,(%esp)
 820bc3a:	e8 98 4c 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820bc3f:	89 c3                	mov    %eax,%ebx
 820bc41:	e9 d9 02 00 00       	jmp    820bf1f <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x341>
 820bc46:	8b 45 0c             	mov    0xc(%ebp),%eax
 820bc49:	89 04 24             	mov    %eax,(%esp)
 820bc4c:	e8 1d e7 ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820bc51:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 820bc57:	89 44 24 04          	mov    %eax,0x4(%esp)
 820bc5b:	89 14 24             	mov    %edx,(%esp)
 820bc5e:	e8 e3 d6 ef ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 820bc63:	83 f0 01             	xor    $0x1,%eax
 820bc66:	84 c0                	test   %al,%al
 820bc68:	74 04                	je     820bc6e <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x90>
 820bc6a:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 820bc6e:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 820bc72:	83 f0 01             	xor    $0x1,%eax
 820bc75:	84 c0                	test   %al,%al
 820bc77:	74 0a                	je     820bc83 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0xa5>
 820bc79:	bb 00 00 00 00       	mov    $0x0,%ebx
 820bc7e:	e9 9c 02 00 00       	jmp    820bf1f <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x341>
 820bc83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820bc8a:	00 
 820bc8b:	c7 44 24 08 c4 a9 00 	movl   $0xa9c4,0x8(%esp)
 820bc92:	00 
 820bc93:	c7 44 24 04 80 df bc 	movl   $0x8bcdf80,0x4(%esp)
 820bc9a:	08 
 820bc9b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820bc9e:	89 04 24             	mov    %eax,(%esp)
 820bca1:	e8 72 3a 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 820bca6:	c7 44 24 04 36 2c bc 	movl   $0x8bc2c36,0x4(%esp)
 820bcad:	08 
 820bcae:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820bcb1:	89 04 24             	mov    %eax,(%esp)
 820bcb4:	e8 cf 3a 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 820bcb9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820bcbc:	89 04 24             	mov    %eax,(%esp)
 820bcbf:	e8 9c 12 ec ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 820bcc4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 820bcc7:	83 c0 0d             	add    $0xd,%eax
 820bcca:	8b 00                	mov    (%eax),%eax
 820bccc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 820bccf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820bcd2:	8d 50 04             	lea    0x4(%eax),%edx
 820bcd5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 820bcd8:	c6 44 10 0d 00       	movb   $0x0,0xd(%eax,%edx,1)
 820bcdd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 820bce0:	8d 50 0d             	lea    0xd(%eax),%edx
 820bce3:	8b 45 0c             	mov    0xc(%ebp),%eax
 820bce6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 820bced:	00 
 820bcee:	c7 44 24 0c 48 2c bc 	movl   $0x8bc2c48,0xc(%esp)
 820bcf5:	08 
 820bcf6:	89 54 24 08          	mov    %edx,0x8(%esp)
 820bcfa:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 820bcfd:	89 54 24 04          	mov    %edx,0x4(%esp)
 820bd01:	89 04 24             	mov    %eax,(%esp)
 820bd04:	e8 75 a3 43 00       	call   864607e <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i>
 820bd09:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820bd0c:	89 04 24             	mov    %eax,(%esp)
 820bd0f:	e8 7c bd 02 00       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 820bd14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 820bd17:	eb 7e                	jmp    820bd97 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x1b9>
 820bd19:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 820bd1c:	89 04 24             	mov    %eax,(%esp)
 820bd1f:	e8 ac 43 4d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 820bd24:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 820bd27:	89 44 24 08          	mov    %eax,0x8(%esp)
 820bd2b:	c7 44 24 04 f9 13 bc 	movl   $0x8bc13f9,0x4(%esp)
 820bd32:	08 
 820bd33:	8d 45 e0             	lea    -0x20(%ebp),%eax
 820bd36:	89 04 24             	mov    %eax,(%esp)
 820bd39:	e8 f2 b8 4f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 820bd3e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 820bd41:	89 44 24 04          	mov    %eax,0x4(%esp)
 820bd45:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820bd48:	89 04 24             	mov    %eax,(%esp)
 820bd4b:	e8 5c bd 02 00       	call   8237aac <_ZNSt6vectorISsSaISsEE9push_backEOSs>
 820bd50:	eb 15                	jmp    820bd67 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x189>
 820bd52:	89 d3                	mov    %edx,%ebx
 820bd54:	89 c6                	mov    %eax,%esi
 820bd56:	8d 45 e0             	lea    -0x20(%ebp),%eax
 820bd59:	89 04 24             	mov    %eax,(%esp)
 820bd5c:	e8 7f be 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820bd61:	89 f0                	mov    %esi,%eax
 820bd63:	89 da                	mov    %ebx,%edx
 820bd65:	eb 0d                	jmp    820bd74 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x196>
 820bd67:	8d 45 e0             	lea    -0x20(%ebp),%eax
 820bd6a:	89 04 24             	mov    %eax,(%esp)
 820bd6d:	e8 6e be 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820bd72:	eb 18                	jmp    820bd8c <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 820bd74:	89 d3                	mov    %edx,%ebx
 820bd76:	89 c6                	mov    %eax,%esi
 820bd78:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 820bd7b:	89 04 24             	mov    %eax,(%esp)
 820bd7e:	e8 6d 43 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820bd83:	89 f0                	mov    %esi,%eax
 820bd85:	89 da                	mov    %ebx,%edx
 820bd87:	e9 6d 01 00 00       	jmp    820bef9 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x31b>
 820bd8c:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 820bd8f:	89 04 24             	mov    %eax,(%esp)
 820bd92:	e8 59 43 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820bd97:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820bd9a:	89 04 24             	mov    %eax,(%esp)
 820bd9d:	e8 ee bc 02 00       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 820bda2:	83 f8 09             	cmp    $0x9,%eax
 820bda5:	0f 96 c0             	setbe  %al
 820bda8:	84 c0                	test   %al,%al
 820bdaa:	0f 85 69 ff ff ff    	jne    820bd19 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x13b>
 820bdb0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 820bdb3:	89 04 24             	mov    %eax,(%esp)
 820bdb6:	e8 91 1f 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820bdbb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 820bdbe:	89 04 24             	mov    %eax,(%esp)
 820bdc1:	e8 4c 76 02 00       	call   8233412 <_ZN23DisPatcher_DebugCommandC1Ev>
 820bdc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 820bdc9:	89 04 24             	mov    %eax,(%esp)
 820bdcc:	e8 cb 9a f3 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 820bdd1:	83 f0 01             	xor    $0x1,%eax
 820bdd4:	84 c0                	test   %al,%al
 820bdd6:	74 0a                	je     820bde2 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x204>
 820bdd8:	bb 00 00 00 00       	mov    $0x0,%ebx
 820bddd:	e9 ff 00 00 00       	jmp    820bee1 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x303>
 820bde2:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 820bde8:	89 04 24             	mov    %eax,(%esp)
 820bdeb:	e8 b4 95 02 00       	call   82353a4 <_ZN11game_master7CParserC1Ev>
 820bdf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820bdf3:	89 85 90 fe ff ff    	mov    %eax,-0x170(%ebp)
 820bdf9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820bdfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 820be00:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 820be06:	05 1c 01 00 00       	add    $0x11c,%eax
 820be0b:	89 04 24             	mov    %eax,(%esp)
 820be0e:	e8 3d 97 02 00       	call   8235550 <_ZNSt6vectorISsSaISsEEaSERKS1_>
 820be13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820be1a:	00 
 820be1b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820be1e:	89 04 24             	mov    %eax,(%esp)
 820be21:	e8 a8 bc 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820be26:	8b 15 78 f7 41 09    	mov    0x941f778,%edx
 820be2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 820be30:	89 14 24             	mov    %edx,(%esp)
 820be33:	e8 78 ce 29 00       	call   84a8cb0 <_ZN11game_master14CGameMasterMgr10GetCommandERSs>
 820be38:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820be3b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 820be3f:	74 2b                	je     820be6c <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x28e>
 820be41:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 820be47:	89 44 24 04          	mov    %eax,0x4(%esp)
 820be4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820be4e:	89 04 24             	mov    %eax,(%esp)
 820be51:	e8 1c 8b 02 00       	call   8234972 <_ZN11game_master8CCommand9SetParserEPNS_7CParserE>
 820be56:	a1 78 f7 41 09       	mov    0x941f778,%eax
 820be5b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 820be5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 820be62:	89 04 24             	mov    %eax,(%esp)
 820be65:	e8 04 ce 29 00       	call   84a8c6e <_ZN11game_master14CGameMasterMgr13HandleRequestEPNS_8CCommandE>
 820be6a:	eb 20                	jmp    820be8c <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x2ae>
 820be6c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820be6f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820be73:	8b 45 10             	mov    0x10(%ebp),%eax
 820be76:	89 44 24 08          	mov    %eax,0x8(%esp)
 820be7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820be7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 820be81:	8b 45 08             	mov    0x8(%ebp),%eax
 820be84:	89 04 24             	mov    %eax,(%esp)
 820be87:	e8 a0 00 00 00       	call   820bf2c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE>
 820be8c:	bb 00 00 00 00       	mov    $0x0,%ebx
 820be91:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 820be97:	89 04 24             	mov    %eax,(%esp)
 820be9a:	e8 a7 95 02 00       	call   8235446 <_ZN11game_master7CParserD1Ev>
 820be9f:	eb 40                	jmp    820bee1 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x303>
 820bea1:	89 d3                	mov    %edx,%ebx
 820bea3:	89 c6                	mov    %eax,%esi
 820bea5:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 820beab:	89 04 24             	mov    %eax,(%esp)
 820beae:	e8 93 95 02 00       	call   8235446 <_ZN11game_master7CParserD1Ev>
 820beb3:	89 f0                	mov    %esi,%eax
 820beb5:	89 da                	mov    %ebx,%edx
 820beb7:	eb 00                	jmp    820beb9 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x2db>
 820beb9:	89 d3                	mov    %edx,%ebx
 820bebb:	89 c6                	mov    %eax,%esi
 820bebd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 820bec0:	89 04 24             	mov    %eax,(%esp)
 820bec3:	e8 66 75 02 00       	call   823342e <_ZN23DisPatcher_DebugCommandD1Ev>
 820bec8:	89 f0                	mov    %esi,%eax
 820beca:	89 da                	mov    %ebx,%edx
 820becc:	89 d3                	mov    %edx,%ebx
 820bece:	89 c6                	mov    %eax,%esi
 820bed0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 820bed3:	89 04 24             	mov    %eax,(%esp)
 820bed6:	e8 a5 1f 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820bedb:	89 f0                	mov    %esi,%eax
 820bedd:	89 da                	mov    %ebx,%edx
 820bedf:	eb 18                	jmp    820bef9 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x31b>
 820bee1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 820bee4:	89 04 24             	mov    %eax,(%esp)
 820bee7:	e8 42 75 02 00       	call   823342e <_ZN23DisPatcher_DebugCommandD1Ev>
 820beec:	8d 45 b8             	lea    -0x48(%ebp),%eax
 820beef:	89 04 24             	mov    %eax,(%esp)
 820bef2:	e8 89 1f 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820bef7:	eb 1b                	jmp    820bf14 <_ZN30Dispatcher_New_Gmdebug_Command12dispatch_sigEP5CUserR9PacketBuf+0x336>
 820bef9:	89 d3                	mov    %edx,%ebx
 820befb:	89 c6                	mov    %eax,%esi
 820befd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820bf00:	89 04 24             	mov    %eax,(%esp)
 820bf03:	e8 6c 10 ec ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 820bf08:	89 f0                	mov    %esi,%eax
 820bf0a:	89 da                	mov    %ebx,%edx
 820bf0c:	89 04 24             	mov    %eax,(%esp)
 820bf0f:	e8 3c 78 8d 00       	call   8ae3750 <_Unwind_Resume>
 820bf14:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820bf17:	89 04 24             	mov    %eax,(%esp)
 820bf1a:	e8 55 10 ec ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 820bf1f:	89 d8                	mov    %ebx,%eax
 820bf21:	81 c4 90 01 00 00    	add    $0x190,%esp
 820bf27:	5b                   	pop    %ebx
 820bf28:	5e                   	pop    %esi
 820bf29:	5d                   	pop    %ebp
 820bf2a:	c3                   	ret
 820bf2b:	90                   	nop

```

```c
// Dispatcher_New_Gmdebug_Command::dispatch_sig @ 0x820bbde

/* Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_New_Gmdebug_Command::dispatch_sig
          (Dispatcher_New_Gmdebug_Command *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  CParser local_178 [4];
  CUser *local_174;
  vector<std::string,std::allocator<std::string>> avStack_5c [12];
  DisPatcher_DebugCommand local_50 [4];
  PacketGuard local_4c [12];
  vector<std::string,std::allocator<std::string>> local_40 [12];
  cMyTrace local_34 [16];
  string local_24;
  allocator<char> local_1f;
  undefined1 local_1e;
  char local_1d;
  int local_1c;
  int local_18;
  undefined4 local_14;
  CCommand *local_10;
  
  local_1e = 1;
  local_1d = '\x01';
  local_1c = PacketBuf::get_packet(param_2,0);
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xa9bc,
                     "virtual int Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    uVar4 = CUser::get_acc_id(param_1);
    cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar4);
    if (cVar1 != '\x01') {
      local_1d = '\0';
    }
    if (local_1d == '\x01') {
      cMyTrace::cMyTrace(local_34,
                         "virtual int Dispatcher_New_Gmdebug_Command::dispatch_sig(CUser*, PacketBuf&)"
                         ,0xa9c4,0);
      cMyTrace::operator()(local_34,"GM Pass Complete!");
      std::vector<std::string,std::allocator<std::string>>::vector(local_40);
      local_18 = *(int *)(local_1c + 0xd);
      *(undefined1 *)(local_1c + local_18 + 0x11) = 0;
                    /* try { // try from 0820bd04 to 0820bd08 has its CatchHandler @ 0820bef9 */
      CUserCharacInfo::getSeparatedTextUnits
                ((CUserCharacInfo *)param_1,(vector *)local_40,(char *)(local_1c + 0xd)," ",0);
      local_14 = std::vector<std::string,std::allocator<std::string>>::size(local_40);
      while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size(local_40),
            uVar4 < 10) {
        std::allocator<char>::allocator();
                    /* try { // try from 0820bd39 to 0820bd3d has its CatchHandler @ 0820bd74 */
        std::string::string((string *)&local_24,"",(allocator *)&local_1f);
                    /* try { // try from 0820bd4b to 0820bd4f has its CatchHandler @ 0820bd52 */
        std::vector<std::string,std::allocator<std::string>>::push_back(local_40,&local_24);
                    /* try { // try from 0820bd6d to 0820bd71 has its CatchHandler @ 0820bd74 */
        std::string::~string((string *)&local_24);
        std::allocator<char>::~allocator(&local_1f);
      }
                    /* try { // try from 0820bdb6 to 0820bdba has its CatchHandler @ 0820bef9 */
      PacketGuard::PacketGuard(local_4c);
      DisPatcher_DebugCommand::DisPatcher_DebugCommand(local_50);
      cVar1 = CUser::isGMUser(param_1);
      if (cVar1 == '\x01') {
                    /* try { // try from 0820bdeb to 0820bdef has its CatchHandler @ 0820beb9 */
        game_master::CParser::CParser(local_178);
        local_174 = param_1;
                    /* try { // try from 0820be0e to 0820be8b has its CatchHandler @ 0820bea1 */
        std::vector<std::string,std::allocator<std::string>>::operator=
                  (avStack_5c,(vector *)local_40);
        std::vector<std::string,std::allocator<std::string>>::operator[](local_40,0);
        local_10 = (CCommand *)
                   game_master::CGameMasterMgr::GetCommand((string *)GlobalData::s_GameMasterMgr);
        if (local_10 == (CCommand *)0x0) {
          oldGmRoutine(this,param_1,param_2,(vector *)local_40);
        }
        else {
          game_master::CCommand::SetParser(local_10,local_178);
          game_master::CGameMasterMgr::HandleRequest(GlobalData::s_GameMasterMgr,local_10);
        }
                    /* try { // try from 0820be9a to 0820be9e has its CatchHandler @ 0820beb9 */
        game_master::CParser::~CParser(local_178);
      }
      uVar3 = 0;
      DisPatcher_DebugCommand::~DisPatcher_DebugCommand(local_50);
                    /* try { // try from 0820bef2 to 0820bef6 has its CatchHandler @ 0820bef9 */
      PacketGuard::~PacketGuard(local_4c);
      std::vector<std::string,std::allocator<std::string>>::~vector(local_40);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## oldGmRoutine

```asm
// === 0820bf2c Dispatcher_New_Gmdebug_Command::oldGmRoutine  [0x0820bf2c-0x82134a7] ===
 820bf2c:	55                   	push   %ebp
 820bf2d:	89 e5                	mov    %esp,%ebp
 820bf2f:	57                   	push   %edi
 820bf30:	56                   	push   %esi
 820bf31:	53                   	push   %ebx
 820bf32:	81 ec 7c 0b 00 00    	sub    $0xb7c,%esp
 820bf38:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 820bf3e:	89 04 24             	mov    %eax,(%esp)
 820bf41:	e8 cc 74 02 00       	call   8233412 <_ZN23DisPatcher_DebugCommandC1Ev>
 820bf46:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820bf4c:	89 04 24             	mov    %eax,(%esp)
 820bf4f:	e8 f8 1d 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820bf54:	c6 85 d3 fe ff ff 01 	movb   $0x1,-0x12d(%ebp)
 820bf5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820bf62:	00 
 820bf63:	8b 45 14             	mov    0x14(%ebp),%eax
 820bf66:	89 04 24             	mov    %eax,(%esp)
 820bf69:	e8 60 bb 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820bf6e:	c7 44 24 04 4a 2c bc 	movl   $0x8bc2c4a,0x4(%esp)
 820bf75:	08 
 820bf76:	89 04 24             	mov    %eax,(%esp)
 820bf79:	e8 23 4a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820bf7e:	84 c0                	test   %al,%al
 820bf80:	0f 84 1a 01 00 00    	je     820c0a0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x174>
 820bf86:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820bf8d:	00 
 820bf8e:	8b 45 14             	mov    0x14(%ebp),%eax
 820bf91:	89 04 24             	mov    %eax,(%esp)
 820bf94:	e8 35 bb 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820bf99:	89 04 24             	mov    %eax,(%esp)
 820bf9c:	e8 4f a5 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820bfa1:	89 04 24             	mov    %eax,(%esp)
 820bfa4:	e8 47 27 e7 ff       	call   807e6f0 <atoi@plt>
 820bfa9:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 820bfaf:	83 bd d4 fe ff ff 00 	cmpl   $0x0,-0x12c(%ebp)
 820bfb6:	0f 8e 84 74 00 00    	jle    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820bfbc:	81 bd d4 fe ff ff 0f 	cmpl   $0x270f,-0x12c(%ebp)
 820bfc3:	27 00 00 
 820bfc6:	0f 8f 74 74 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820bfcc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820bfd3:	00 
 820bfd4:	8b 45 14             	mov    0x14(%ebp),%eax
 820bfd7:	89 04 24             	mov    %eax,(%esp)
 820bfda:	e8 ef ba 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820bfdf:	89 04 24             	mov    %eax,(%esp)
 820bfe2:	e8 09 a5 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820bfe7:	89 04 24             	mov    %eax,(%esp)
 820bfea:	e8 01 27 e7 ff       	call   807e6f0 <atoi@plt>
 820bfef:	8b 55 0c             	mov    0xc(%ebp),%edx
 820bff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 820bff6:	89 14 24             	mov    %edx,(%esp)
 820bff9:	e8 1a 37 02 00       	call   822f718 <_ZN15CUserCharacInfo22SetCurCharacChaosPointEi>
 820bffe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820c005:	00 
 820c006:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 820c00d:	00 
 820c00e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c015:	00 
 820c016:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c019:	89 04 24             	mov    %eax,(%esp)
 820c01c:	e8 3b fa 46 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 820c021:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 820c028:	00 
 820c029:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c030:	00 
 820c031:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c037:	89 04 24             	mov    %eax,(%esp)
 820c03a:	e8 bd f8 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c03f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c046:	00 
 820c047:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c04d:	89 04 24             	mov    %eax,(%esp)
 820c050:	e8 cb f8 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c055:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 820c05c:	00 
 820c05d:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c063:	89 04 24             	mov    %eax,(%esp)
 820c066:	e8 b5 f8 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c06b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c072:	00 
 820c073:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c079:	89 04 24             	mov    %eax,(%esp)
 820c07c:	e8 d7 f8 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820c081:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c087:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c08b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c08e:	89 04 24             	mov    %eax,(%esp)
 820c091:	e8 24 c5 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820c096:	bb 00 00 00 00       	mov    $0x0,%ebx
 820c09b:	e9 bf 73 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820c0a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c0a7:	00 
 820c0a8:	8b 45 14             	mov    0x14(%ebp),%eax
 820c0ab:	89 04 24             	mov    %eax,(%esp)
 820c0ae:	e8 1b ba 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c0b3:	c7 44 24 04 52 2c bc 	movl   $0x8bc2c52,0x4(%esp)
 820c0ba:	08 
 820c0bb:	89 04 24             	mov    %eax,(%esp)
 820c0be:	e8 de 48 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c0c3:	84 c0                	test   %al,%al
 820c0c5:	0f 84 1f 01 00 00    	je     820c1ea <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2be>
 820c0cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c0d2:	00 
 820c0d3:	8b 45 14             	mov    0x14(%ebp),%eax
 820c0d6:	89 04 24             	mov    %eax,(%esp)
 820c0d9:	e8 f0 b9 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c0de:	89 04 24             	mov    %eax,(%esp)
 820c0e1:	e8 0a a4 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820c0e6:	89 04 24             	mov    %eax,(%esp)
 820c0e9:	e8 02 26 e7 ff       	call   807e6f0 <atoi@plt>
 820c0ee:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 820c0f4:	83 bd d8 fe ff ff 00 	cmpl   $0x0,-0x128(%ebp)
 820c0fb:	0f 8e 3f 73 00 00    	jle    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c101:	81 bd d8 fe ff ff 0f 	cmpl   $0x270f,-0x128(%ebp)
 820c108:	27 00 00 
 820c10b:	0f 8f 2f 73 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c111:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c118:	00 
 820c119:	8b 45 14             	mov    0x14(%ebp),%eax
 820c11c:	89 04 24             	mov    %eax,(%esp)
 820c11f:	e8 aa b9 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c124:	89 04 24             	mov    %eax,(%esp)
 820c127:	e8 c4 a3 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820c12c:	89 04 24             	mov    %eax,(%esp)
 820c12f:	e8 bc 25 e7 ff       	call   807e6f0 <atoi@plt>
 820c134:	6b c0 64             	imul   $0x64,%eax,%eax
 820c137:	89 c2                	mov    %eax,%edx
 820c139:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c13c:	89 54 24 04          	mov    %edx,0x4(%esp)
 820c140:	89 04 24             	mov    %eax,(%esp)
 820c143:	e8 1a 32 02 00       	call   822f362 <_ZN15CUserCharacInfo34setCurCharacHelpAbuseComputedRatioEj>
 820c148:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820c14f:	00 
 820c150:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 820c157:	00 
 820c158:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c15f:	00 
 820c160:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c163:	89 04 24             	mov    %eax,(%esp)
 820c166:	e8 f1 f8 46 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 820c16b:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 820c172:	00 
 820c173:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c17a:	00 
 820c17b:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c181:	89 04 24             	mov    %eax,(%esp)
 820c184:	e8 73 f7 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c189:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c190:	00 
 820c191:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c197:	89 04 24             	mov    %eax,(%esp)
 820c19a:	e8 81 f7 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c19f:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 820c1a6:	00 
 820c1a7:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c1ad:	89 04 24             	mov    %eax,(%esp)
 820c1b0:	e8 6b f7 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c1b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c1bc:	00 
 820c1bd:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c1c3:	89 04 24             	mov    %eax,(%esp)
 820c1c6:	e8 8d f7 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820c1cb:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c1d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c1d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c1d8:	89 04 24             	mov    %eax,(%esp)
 820c1db:	e8 da c3 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820c1e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 820c1e5:	e9 75 72 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820c1ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c1f1:	00 
 820c1f2:	8b 45 14             	mov    0x14(%ebp),%eax
 820c1f5:	89 04 24             	mov    %eax,(%esp)
 820c1f8:	e8 d1 b8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c1fd:	c7 44 24 04 56 2c bc 	movl   $0x8bc2c56,0x4(%esp)
 820c204:	08 
 820c205:	89 04 24             	mov    %eax,(%esp)
 820c208:	e8 94 47 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c20d:	84 c0                	test   %al,%al
 820c20f:	75 27                	jne    820c238 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x30c>
 820c211:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c218:	00 
 820c219:	8b 45 14             	mov    0x14(%ebp),%eax
 820c21c:	89 04 24             	mov    %eax,(%esp)
 820c21f:	e8 aa b8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c224:	c7 44 24 04 62 2c bc 	movl   $0x8bc2c62,0x4(%esp)
 820c22b:	08 
 820c22c:	89 04 24             	mov    %eax,(%esp)
 820c22f:	e8 6d 47 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c234:	84 c0                	test   %al,%al
 820c236:	74 07                	je     820c23f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x313>
 820c238:	b8 01 00 00 00       	mov    $0x1,%eax
 820c23d:	eb 05                	jmp    820c244 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x318>
 820c23f:	b8 00 00 00 00       	mov    $0x0,%eax
 820c244:	84 c0                	test   %al,%al
 820c246:	0f 84 5b 01 00 00    	je     820c3a7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x47b>
 820c24c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c253:	00 
 820c254:	8b 45 14             	mov    0x14(%ebp),%eax
 820c257:	89 04 24             	mov    %eax,(%esp)
 820c25a:	e8 6f b8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c25f:	c7 44 24 04 64 2c bc 	movl   $0x8bc2c64,0x4(%esp)
 820c266:	08 
 820c267:	89 04 24             	mov    %eax,(%esp)
 820c26a:	e8 32 47 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c26f:	84 c0                	test   %al,%al
 820c271:	0f 85 c9 71 00 00    	jne    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c277:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c27e:	00 
 820c27f:	8b 45 14             	mov    0x14(%ebp),%eax
 820c282:	89 04 24             	mov    %eax,(%esp)
 820c285:	e8 44 b8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c28a:	c7 44 24 04 67 2c bc 	movl   $0x8bc2c67,0x4(%esp)
 820c291:	08 
 820c292:	89 04 24             	mov    %eax,(%esp)
 820c295:	e8 07 47 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c29a:	84 c0                	test   %al,%al
 820c29c:	0f 85 9e 71 00 00    	jne    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c2a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c2a9:	00 
 820c2aa:	8b 45 14             	mov    0x14(%ebp),%eax
 820c2ad:	89 04 24             	mov    %eax,(%esp)
 820c2b0:	e8 19 b8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c2b5:	89 04 24             	mov    %eax,(%esp)
 820c2b8:	e8 33 a2 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820c2bd:	89 04 24             	mov    %eax,(%esp)
 820c2c0:	e8 2b 24 e7 ff       	call   807e6f0 <atoi@plt>
 820c2c5:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 820c2cb:	83 bd dc fe ff ff 00 	cmpl   $0x0,-0x124(%ebp)
 820c2d2:	0f 8e 68 71 00 00    	jle    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c2d8:	81 bd dc fe ff ff 9f 	cmpl   $0x1869f,-0x124(%ebp)
 820c2df:	86 01 00 
 820c2e2:	0f 8f 58 71 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c2e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c2ef:	00 
 820c2f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c2f3:	89 04 24             	mov    %eax,(%esp)
 820c2f6:	e8 93 39 02 00       	call   822fc8e <_ZN5CUser14setGmQuestFlagEb>
 820c2fb:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 820c302:	00 
 820c303:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820c30a:	00 
 820c30b:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 820c311:	89 44 24 08          	mov    %eax,0x8(%esp)
 820c315:	c7 44 24 04 23 00 00 	movl   $0x23,0x4(%esp)
 820c31c:	00 
 820c31d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c320:	89 04 24             	mov    %eax,(%esp)
 820c323:	e8 62 17 46 00       	call   866da8a <_ZN5CUser12quest_actionEiiii>
 820c328:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 820c32f:	00 
 820c330:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c337:	00 
 820c338:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c33e:	89 04 24             	mov    %eax,(%esp)
 820c341:	e8 b6 f5 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c346:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c34d:	00 
 820c34e:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c354:	89 04 24             	mov    %eax,(%esp)
 820c357:	e8 c4 f5 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c35c:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 820c363:	00 
 820c364:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c36a:	89 04 24             	mov    %eax,(%esp)
 820c36d:	e8 ae f5 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c372:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c379:	00 
 820c37a:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c380:	89 04 24             	mov    %eax,(%esp)
 820c383:	e8 d0 f5 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820c388:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c38e:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c392:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c395:	89 04 24             	mov    %eax,(%esp)
 820c398:	e8 1d c2 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820c39d:	bb 00 00 00 00       	mov    $0x0,%ebx
 820c3a2:	e9 b8 70 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820c3a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c3ae:	00 
 820c3af:	8b 45 14             	mov    0x14(%ebp),%eax
 820c3b2:	89 04 24             	mov    %eax,(%esp)
 820c3b5:	e8 14 b7 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c3ba:	c7 44 24 04 6b 2c bc 	movl   $0x8bc2c6b,0x4(%esp)
 820c3c1:	08 
 820c3c2:	89 04 24             	mov    %eax,(%esp)
 820c3c5:	e8 d7 45 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c3ca:	84 c0                	test   %al,%al
 820c3cc:	0f 84 37 01 00 00    	je     820c509 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5dd>
 820c3d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c3d9:	00 
 820c3da:	8b 45 14             	mov    0x14(%ebp),%eax
 820c3dd:	89 04 24             	mov    %eax,(%esp)
 820c3e0:	e8 e9 b6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c3e5:	c7 44 24 04 71 2c bc 	movl   $0x8bc2c71,0x4(%esp)
 820c3ec:	08 
 820c3ed:	89 04 24             	mov    %eax,(%esp)
 820c3f0:	e8 ac 45 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c3f5:	84 c0                	test   %al,%al
 820c3f7:	0f 84 43 70 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c3fd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820c404:	00 
 820c405:	8b 45 14             	mov    0x14(%ebp),%eax
 820c408:	89 04 24             	mov    %eax,(%esp)
 820c40b:	e8 be b6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c410:	89 04 24             	mov    %eax,(%esp)
 820c413:	e8 d8 a0 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820c418:	89 04 24             	mov    %eax,(%esp)
 820c41b:	e8 d0 22 e7 ff       	call   807e6f0 <atoi@plt>
 820c420:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 820c426:	83 bd e0 fe ff ff 00 	cmpl   $0x0,-0x120(%ebp)
 820c42d:	0f 8e 0d 70 00 00    	jle    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c433:	81 bd e0 fe ff ff 0f 	cmpl   $0x270f,-0x120(%ebp)
 820c43a:	27 00 00 
 820c43d:	0f 8f fd 6f 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c443:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820c44a:	00 
 820c44b:	8b 45 14             	mov    0x14(%ebp),%eax
 820c44e:	89 04 24             	mov    %eax,(%esp)
 820c451:	e8 78 b6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c456:	89 04 24             	mov    %eax,(%esp)
 820c459:	e8 92 a0 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820c45e:	89 04 24             	mov    %eax,(%esp)
 820c461:	e8 8a 22 e7 ff       	call   807e6f0 <atoi@plt>
 820c466:	8b 55 0c             	mov    0xc(%ebp),%edx
 820c469:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c46d:	89 14 24             	mov    %edx,(%esp)
 820c470:	e8 3f 99 43 00       	call   8645db4 <_ZN15CUserCharacInfo13set_guild_expEi>
 820c475:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c478:	c6 80 d9 96 07 00 01 	movb   $0x1,0x796d9(%eax)
 820c47f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c482:	89 04 24             	mov    %eax,(%esp)
 820c485:	e8 82 6a 44 00       	call   8652f0c <_ZN5CUser14WorkPerFiveMinEv>
 820c48a:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 820c491:	00 
 820c492:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c499:	00 
 820c49a:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c4a0:	89 04 24             	mov    %eax,(%esp)
 820c4a3:	e8 54 f4 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c4a8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c4af:	00 
 820c4b0:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c4b6:	89 04 24             	mov    %eax,(%esp)
 820c4b9:	e8 62 f4 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c4be:	c7 44 24 04 67 00 00 	movl   $0x67,0x4(%esp)
 820c4c5:	00 
 820c4c6:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c4cc:	89 04 24             	mov    %eax,(%esp)
 820c4cf:	e8 4c f4 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c4d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c4db:	00 
 820c4dc:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c4e2:	89 04 24             	mov    %eax,(%esp)
 820c4e5:	e8 6e f4 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820c4ea:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c4f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c4f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c4f7:	89 04 24             	mov    %eax,(%esp)
 820c4fa:	e8 bb c0 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820c4ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 820c504:	e9 56 6f 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820c509:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c510:	00 
 820c511:	8b 45 14             	mov    0x14(%ebp),%eax
 820c514:	89 04 24             	mov    %eax,(%esp)
 820c517:	e8 b2 b5 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c51c:	c7 44 24 04 75 2c bc 	movl   $0x8bc2c75,0x4(%esp)
 820c523:	08 
 820c524:	89 04 24             	mov    %eax,(%esp)
 820c527:	e8 75 44 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c52c:	84 c0                	test   %al,%al
 820c52e:	0f 84 c0 01 00 00    	je     820c6f4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7c8>
 820c534:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c53b:	00 
 820c53c:	8b 45 14             	mov    0x14(%ebp),%eax
 820c53f:	89 04 24             	mov    %eax,(%esp)
 820c542:	e8 87 b5 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c547:	c7 44 24 04 64 2c bc 	movl   $0x8bc2c64,0x4(%esp)
 820c54e:	08 
 820c54f:	89 04 24             	mov    %eax,(%esp)
 820c552:	e8 4a 44 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c557:	84 c0                	test   %al,%al
 820c559:	0f 84 b5 00 00 00    	je     820c614 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6e8>
 820c55f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c562:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 820c569:	00 
 820c56a:	89 04 24             	mov    %eax,(%esp)
 820c56d:	e8 42 31 02 00       	call   822f6b4 <_ZN15CUserCharacInfo23setCurrCharacBlackCountEj>
 820c572:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820c579:	00 
 820c57a:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 820c581:	00 
 820c582:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c589:	00 
 820c58a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c58d:	89 04 24             	mov    %eax,(%esp)
 820c590:	e8 c7 f4 46 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 820c595:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 820c59c:	00 
 820c59d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c5a4:	00 
 820c5a5:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c5ab:	89 04 24             	mov    %eax,(%esp)
 820c5ae:	e8 49 f3 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c5b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c5ba:	00 
 820c5bb:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c5c1:	89 04 24             	mov    %eax,(%esp)
 820c5c4:	e8 57 f3 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c5c9:	c7 44 24 04 68 00 00 	movl   $0x68,0x4(%esp)
 820c5d0:	00 
 820c5d1:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c5d7:	89 04 24             	mov    %eax,(%esp)
 820c5da:	e8 41 f3 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c5df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c5e6:	00 
 820c5e7:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c5ed:	89 04 24             	mov    %eax,(%esp)
 820c5f0:	e8 63 f3 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820c5f5:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c5fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c5ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c602:	89 04 24             	mov    %eax,(%esp)
 820c605:	e8 b0 bf 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820c60a:	bb 00 00 00 00       	mov    $0x0,%ebx
 820c60f:	e9 4b 6e 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820c614:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c61b:	00 
 820c61c:	8b 45 14             	mov    0x14(%ebp),%eax
 820c61f:	89 04 24             	mov    %eax,(%esp)
 820c622:	e8 a7 b4 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c627:	c7 44 24 04 67 2c bc 	movl   $0x8bc2c67,0x4(%esp)
 820c62e:	08 
 820c62f:	89 04 24             	mov    %eax,(%esp)
 820c632:	e8 6a 43 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c637:	84 c0                	test   %al,%al
 820c639:	0f 84 01 6e 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c63f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c642:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c649:	00 
 820c64a:	89 04 24             	mov    %eax,(%esp)
 820c64d:	e8 62 30 02 00       	call   822f6b4 <_ZN15CUserCharacInfo23setCurrCharacBlackCountEj>
 820c652:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820c659:	00 
 820c65a:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 820c661:	00 
 820c662:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c669:	00 
 820c66a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c66d:	89 04 24             	mov    %eax,(%esp)
 820c670:	e8 e7 f3 46 00       	call   867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>
 820c675:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 820c67c:	00 
 820c67d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c684:	00 
 820c685:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c68b:	89 04 24             	mov    %eax,(%esp)
 820c68e:	e8 69 f2 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c693:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c69a:	00 
 820c69b:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c6a1:	89 04 24             	mov    %eax,(%esp)
 820c6a4:	e8 77 f2 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c6a9:	c7 44 24 04 68 00 00 	movl   $0x68,0x4(%esp)
 820c6b0:	00 
 820c6b1:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c6b7:	89 04 24             	mov    %eax,(%esp)
 820c6ba:	e8 61 f2 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c6bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c6c6:	00 
 820c6c7:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c6cd:	89 04 24             	mov    %eax,(%esp)
 820c6d0:	e8 83 f2 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820c6d5:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c6db:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c6df:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c6e2:	89 04 24             	mov    %eax,(%esp)
 820c6e5:	e8 d0 be 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820c6ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 820c6ef:	e9 6b 6d 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820c6f4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c6fb:	00 
 820c6fc:	8b 45 14             	mov    0x14(%ebp),%eax
 820c6ff:	89 04 24             	mov    %eax,(%esp)
 820c702:	e8 c7 b3 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c707:	c7 44 24 04 82 2c bc 	movl   $0x8bc2c82,0x4(%esp)
 820c70e:	08 
 820c70f:	89 04 24             	mov    %eax,(%esp)
 820c712:	e8 8a 42 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c717:	84 c0                	test   %al,%al
 820c719:	0f 84 98 01 00 00    	je     820c8b7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x98b>
 820c71f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c726:	00 
 820c727:	8b 45 14             	mov    0x14(%ebp),%eax
 820c72a:	89 04 24             	mov    %eax,(%esp)
 820c72d:	e8 9c b3 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c732:	c7 44 24 04 8a 2c bc 	movl   $0x8bc2c8a,0x4(%esp)
 820c739:	08 
 820c73a:	89 04 24             	mov    %eax,(%esp)
 820c73d:	e8 5f 42 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c742:	84 c0                	test   %al,%al
 820c744:	0f 84 f5 00 00 00    	je     820c83f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x913>
 820c74a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820c751:	00 
 820c752:	8b 45 14             	mov    0x14(%ebp),%eax
 820c755:	89 04 24             	mov    %eax,(%esp)
 820c758:	e8 71 b3 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c75d:	89 04 24             	mov    %eax,(%esp)
 820c760:	e8 8b 9d 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820c765:	89 04 24             	mov    %eax,(%esp)
 820c768:	e8 83 1f e7 ff       	call   807e6f0 <atoi@plt>
 820c76d:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 820c773:	83 bd e4 fe ff ff 00 	cmpl   $0x0,-0x11c(%ebp)
 820c77a:	0f 88 c0 6c 00 00    	js     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c780:	81 bd e4 fe ff ff 0f 	cmpl   $0x270f,-0x11c(%ebp)
 820c787:	27 00 00 
 820c78a:	0f 8f b0 6c 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c790:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c793:	89 04 24             	mov    %eax,(%esp)
 820c796:	e8 3b 06 f2 ff       	call   812cdd6 <_ZNK15CUserCharacInfo22getCurCharacMaxFatigueEv>
 820c79b:	0f b7 c0             	movzwl %ax,%eax
 820c79e:	89 c2                	mov    %eax,%edx
 820c7a0:	2b 95 e4 fe ff ff    	sub    -0x11c(%ebp),%edx
 820c7a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c7a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 820c7ad:	89 04 24             	mov    %eax,(%esp)
 820c7b0:	e8 19 2b 02 00       	call   822f2ce <_ZN15CUserCharacInfo19setCurCharacFatigueEi>
 820c7b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c7b8:	89 04 24             	mov    %eax,(%esp)
 820c7bb:	e8 80 9d 44 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 820c7c0:	c7 44 24 08 b3 00 00 	movl   $0xb3,0x8(%esp)
 820c7c7:	00 
 820c7c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c7cf:	00 
 820c7d0:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c7d6:	89 04 24             	mov    %eax,(%esp)
 820c7d9:	e8 1e f1 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c7de:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c7e5:	00 
 820c7e6:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c7ec:	89 04 24             	mov    %eax,(%esp)
 820c7ef:	e8 2c f1 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c7f4:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 820c7fb:	00 
 820c7fc:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c802:	89 04 24             	mov    %eax,(%esp)
 820c805:	e8 16 f1 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820c80a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c811:	00 
 820c812:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c818:	89 04 24             	mov    %eax,(%esp)
 820c81b:	e8 38 f1 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820c820:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 820c826:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c82a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c82d:	89 04 24             	mov    %eax,(%esp)
 820c830:	e8 85 bd 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820c835:	bb 00 00 00 00       	mov    $0x0,%ebx
 820c83a:	e9 20 6c 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820c83f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c846:	00 
 820c847:	8b 45 14             	mov    0x14(%ebp),%eax
 820c84a:	89 04 24             	mov    %eax,(%esp)
 820c84d:	e8 7c b2 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c852:	89 04 24             	mov    %eax,(%esp)
 820c855:	e8 96 9c 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820c85a:	89 04 24             	mov    %eax,(%esp)
 820c85d:	e8 8e 1e e7 ff       	call   807e6f0 <atoi@plt>
 820c862:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 820c868:	83 bd e8 fe ff ff 00 	cmpl   $0x0,-0x118(%ebp)
 820c86f:	0f 88 cb 6b 00 00    	js     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c875:	81 bd e8 fe ff ff 0f 	cmpl   $0x270f,-0x118(%ebp)
 820c87c:	27 00 00 
 820c87f:	0f 8f bb 6b 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c885:	83 bd e8 fe ff ff 00 	cmpl   $0x0,-0x118(%ebp)
 820c88c:	0f 8e ae 6b 00 00    	jle    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c892:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 820c898:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c89c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c89f:	89 04 24             	mov    %eax,(%esp)
 820c8a2:	e8 b9 93 44 00       	call   8655c60 <_ZN5CUser9FatigueUpEi>
 820c8a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c8aa:	89 04 24             	mov    %eax,(%esp)
 820c8ad:	e8 8e 9c 44 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 820c8b2:	e9 89 6b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c8b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c8be:	00 
 820c8bf:	8b 45 14             	mov    0x14(%ebp),%eax
 820c8c2:	89 04 24             	mov    %eax,(%esp)
 820c8c5:	e8 04 b2 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c8ca:	c7 44 24 04 8e 2c bc 	movl   $0x8bc2c8e,0x4(%esp)
 820c8d1:	08 
 820c8d2:	89 04 24             	mov    %eax,(%esp)
 820c8d5:	e8 c7 40 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c8da:	84 c0                	test   %al,%al
 820c8dc:	0f 84 33 02 00 00    	je     820cb15 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xbe9>
 820c8e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820c8e9:	00 
 820c8ea:	8b 45 14             	mov    0x14(%ebp),%eax
 820c8ed:	89 04 24             	mov    %eax,(%esp)
 820c8f0:	e8 d9 b1 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820c8f5:	c7 44 24 04 93 2c bc 	movl   $0x8bc2c93,0x4(%esp)
 820c8fc:	08 
 820c8fd:	89 04 24             	mov    %eax,(%esp)
 820c900:	e8 9c 40 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820c905:	84 c0                	test   %al,%al
 820c907:	0f 84 33 6b 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820c90d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820c910:	89 04 24             	mov    %eax,(%esp)
 820c913:	e8 10 2f 02 00       	call   822f828 <_ZN15CUserCharacInfo21GetCurCharacLuckPointEv>
 820c918:	89 85 ec fe ff ff    	mov    %eax,-0x114(%ebp)
 820c91e:	8d 85 b6 fd ff ff    	lea    -0x24a(%ebp),%eax
 820c924:	89 04 24             	mov    %eax,(%esp)
 820c927:	e8 a4 37 4d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 820c92c:	8d 85 b6 fd ff ff    	lea    -0x24a(%ebp),%eax
 820c932:	89 44 24 08          	mov    %eax,0x8(%esp)
 820c936:	c7 44 24 04 96 2c bc 	movl   $0x8bc2c96,0x4(%esp)
 820c93d:	08 
 820c93e:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 820c944:	89 04 24             	mov    %eax,(%esp)
 820c947:	e8 e4 ac 4f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 820c94c:	eb 1b                	jmp    820c969 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xa3d>
 820c94e:	89 d3                	mov    %edx,%ebx
 820c950:	89 c6                	mov    %eax,%esi
 820c952:	8d 85 b6 fd ff ff    	lea    -0x24a(%ebp),%eax
 820c958:	89 04 24             	mov    %eax,(%esp)
 820c95b:	e8 90 37 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820c960:	89 f0                	mov    %esi,%eax
 820c962:	89 da                	mov    %ebx,%edx
 820c964:	e9 de 6a 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820c969:	8d 85 b6 fd ff ff    	lea    -0x24a(%ebp),%eax
 820c96f:	89 04 24             	mov    %eax,(%esp)
 820c972:	e8 79 37 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820c977:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 820c97d:	b8 00 00 00 00       	mov    $0x0,%eax
 820c982:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 820c987:	89 d7                	mov    %edx,%edi
 820c989:	f3 ab                	rep stos %eax,%es:(%edi)
 820c98b:	89 fa                	mov    %edi,%edx
 820c98d:	66 89 02             	mov    %ax,(%edx)
 820c990:	83 c2 02             	add    $0x2,%edx
 820c993:	88 02                	mov    %al,(%edx)
 820c995:	83 c2 01             	add    $0x1,%edx
 820c998:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 820c99e:	89 44 24 08          	mov    %eax,0x8(%esp)
 820c9a2:	c7 44 24 04 ad 2c bc 	movl   $0x8bc2cad,0x4(%esp)
 820c9a9:	08 
 820c9aa:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820c9b0:	89 04 24             	mov    %eax,(%esp)
 820c9b3:	e8 88 1a e7 ff       	call   807e440 <sprintf@plt>
 820c9b8:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820c9be:	89 44 24 04          	mov    %eax,0x4(%esp)
 820c9c2:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 820c9c8:	89 04 24             	mov    %eax,(%esp)
 820c9cb:	e8 60 b6 4f 00       	call   8708030 <_ZNSspLEPKc>
 820c9d0:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820c9d6:	89 04 24             	mov    %eax,(%esp)
 820c9d9:	e8 6e 13 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820c9de:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 820c9e5:	00 
 820c9e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820c9ed:	00 
 820c9ee:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820c9f4:	89 04 24             	mov    %eax,(%esp)
 820c9f7:	e8 00 ef eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820c9fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ca03:	00 
 820ca04:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820ca0a:	89 04 24             	mov    %eax,(%esp)
 820ca0d:	e8 0e ef eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820ca12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ca19:	00 
 820ca1a:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820ca20:	89 04 24             	mov    %eax,(%esp)
 820ca23:	e8 7c d4 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 820ca28:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ca2f:	00 
 820ca30:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820ca36:	89 04 24             	mov    %eax,(%esp)
 820ca39:	e8 e2 ee eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820ca3e:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 820ca44:	89 04 24             	mov    %eax,(%esp)
 820ca47:	e8 14 9c 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820ca4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 820ca50:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820ca56:	89 04 24             	mov    %eax,(%esp)
 820ca59:	e8 de ee eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 820ca5e:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 820ca64:	89 04 24             	mov    %eax,(%esp)
 820ca67:	e8 f4 9b 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820ca6c:	89 c3                	mov    %eax,%ebx
 820ca6e:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 820ca74:	89 04 24             	mov    %eax,(%esp)
 820ca77:	e8 74 9a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ca7c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820ca80:	89 44 24 04          	mov    %eax,0x4(%esp)
 820ca84:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820ca8a:	89 04 24             	mov    %eax,(%esp)
 820ca8d:	e8 de ec 01 00       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 820ca92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ca99:	00 
 820ca9a:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820caa0:	89 04 24             	mov    %eax,(%esp)
 820caa3:	e8 b0 ee eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820caa8:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820caae:	89 44 24 04          	mov    %eax,0x4(%esp)
 820cab2:	8b 45 0c             	mov    0xc(%ebp),%eax
 820cab5:	89 04 24             	mov    %eax,(%esp)
 820cab8:	e8 fd ba 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820cabd:	eb 18                	jmp    820cad7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xbab>
 820cabf:	89 d3                	mov    %edx,%ebx
 820cac1:	89 c6                	mov    %eax,%esi
 820cac3:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820cac9:	89 04 24             	mov    %eax,(%esp)
 820cacc:	e8 af 13 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820cad1:	89 f0                	mov    %esi,%eax
 820cad3:	89 da                	mov    %ebx,%edx
 820cad5:	eb 10                	jmp    820cae7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xbbb>
 820cad7:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 820cadd:	89 04 24             	mov    %eax,(%esp)
 820cae0:	e8 9b 13 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820cae5:	eb 1b                	jmp    820cb02 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xbd6>
 820cae7:	89 d3                	mov    %edx,%ebx
 820cae9:	89 c6                	mov    %eax,%esi
 820caeb:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 820caf1:	89 04 24             	mov    %eax,(%esp)
 820caf4:	e8 e7 b0 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820caf9:	89 f0                	mov    %esi,%eax
 820cafb:	89 da                	mov    %ebx,%edx
 820cafd:	e9 45 69 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820cb02:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 820cb08:	89 04 24             	mov    %eax,(%esp)
 820cb0b:	e8 d0 b0 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820cb10:	e9 2b 69 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cb15:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cb1c:	00 
 820cb1d:	8b 45 14             	mov    0x14(%ebp),%eax
 820cb20:	89 04 24             	mov    %eax,(%esp)
 820cb23:	e8 a6 af 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cb28:	c7 44 24 04 b3 2c bc 	movl   $0x8bc2cb3,0x4(%esp)
 820cb2f:	08 
 820cb30:	89 04 24             	mov    %eax,(%esp)
 820cb33:	e8 69 3e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820cb38:	84 c0                	test   %al,%al
 820cb3a:	0f 84 e7 01 00 00    	je     820cd27 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xdfb>
 820cb40:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820cb47:	00 
 820cb48:	8b 45 14             	mov    0x14(%ebp),%eax
 820cb4b:	89 04 24             	mov    %eax,(%esp)
 820cb4e:	e8 7b af 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cb53:	c7 44 24 04 93 2c bc 	movl   $0x8bc2c93,0x4(%esp)
 820cb5a:	08 
 820cb5b:	89 04 24             	mov    %eax,(%esp)
 820cb5e:	e8 3e 3e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820cb63:	84 c0                	test   %al,%al
 820cb65:	0f 84 d5 68 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cb6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820cb6e:	c7 44 24 04 a0 86 01 	movl   $0x186a0,0x4(%esp)
 820cb75:	00 
 820cb76:	89 04 24             	mov    %eax,(%esp)
 820cb79:	e8 cc 2c 02 00       	call   822f84a <_ZN15CUserCharacInfo21IncCurCharacLuckPointEi>
 820cb7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820cb81:	89 04 24             	mov    %eax,(%esp)
 820cb84:	e8 e7 dc f8 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 820cb89:	8d 85 b7 fd ff ff    	lea    -0x249(%ebp),%eax
 820cb8f:	89 04 24             	mov    %eax,(%esp)
 820cb92:	e8 39 35 4d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 820cb97:	8d 85 b7 fd ff ff    	lea    -0x249(%ebp),%eax
 820cb9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 820cba1:	c7 44 24 04 b7 2c bc 	movl   $0x8bc2cb7,0x4(%esp)
 820cba8:	08 
 820cba9:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 820cbaf:	89 04 24             	mov    %eax,(%esp)
 820cbb2:	e8 79 aa 4f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 820cbb7:	eb 1b                	jmp    820cbd4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xca8>
 820cbb9:	89 d3                	mov    %edx,%ebx
 820cbbb:	89 c6                	mov    %eax,%esi
 820cbbd:	8d 85 b7 fd ff ff    	lea    -0x249(%ebp),%eax
 820cbc3:	89 04 24             	mov    %eax,(%esp)
 820cbc6:	e8 25 35 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820cbcb:	89 f0                	mov    %esi,%eax
 820cbcd:	89 da                	mov    %ebx,%edx
 820cbcf:	e9 73 68 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820cbd4:	8d 85 b7 fd ff ff    	lea    -0x249(%ebp),%eax
 820cbda:	89 04 24             	mov    %eax,(%esp)
 820cbdd:	e8 0e 35 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820cbe2:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820cbe8:	89 04 24             	mov    %eax,(%esp)
 820cbeb:	e8 5c 11 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820cbf0:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 820cbf7:	00 
 820cbf8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cbff:	00 
 820cc00:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820cc06:	89 04 24             	mov    %eax,(%esp)
 820cc09:	e8 ee ec eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820cc0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cc15:	00 
 820cc16:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820cc1c:	89 04 24             	mov    %eax,(%esp)
 820cc1f:	e8 fc ec eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820cc24:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cc2b:	00 
 820cc2c:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820cc32:	89 04 24             	mov    %eax,(%esp)
 820cc35:	e8 6a d2 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 820cc3a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cc41:	00 
 820cc42:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820cc48:	89 04 24             	mov    %eax,(%esp)
 820cc4b:	e8 d0 ec eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820cc50:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 820cc56:	89 04 24             	mov    %eax,(%esp)
 820cc59:	e8 02 9a 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820cc5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 820cc62:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820cc68:	89 04 24             	mov    %eax,(%esp)
 820cc6b:	e8 cc ec eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 820cc70:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 820cc76:	89 04 24             	mov    %eax,(%esp)
 820cc79:	e8 e2 99 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820cc7e:	89 c3                	mov    %eax,%ebx
 820cc80:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 820cc86:	89 04 24             	mov    %eax,(%esp)
 820cc89:	e8 62 98 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820cc8e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820cc92:	89 44 24 04          	mov    %eax,0x4(%esp)
 820cc96:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820cc9c:	89 04 24             	mov    %eax,(%esp)
 820cc9f:	e8 cc ea 01 00       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 820cca4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ccab:	00 
 820ccac:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820ccb2:	89 04 24             	mov    %eax,(%esp)
 820ccb5:	e8 9e ec eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820ccba:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820ccc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 820ccc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ccc7:	89 04 24             	mov    %eax,(%esp)
 820ccca:	e8 eb b8 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820cccf:	eb 18                	jmp    820cce9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xdbd>
 820ccd1:	89 d3                	mov    %edx,%ebx
 820ccd3:	89 c6                	mov    %eax,%esi
 820ccd5:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820ccdb:	89 04 24             	mov    %eax,(%esp)
 820ccde:	e8 9d 11 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820cce3:	89 f0                	mov    %esi,%eax
 820cce5:	89 da                	mov    %ebx,%edx
 820cce7:	eb 10                	jmp    820ccf9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xdcd>
 820cce9:	8d 85 84 fd ff ff    	lea    -0x27c(%ebp),%eax
 820ccef:	89 04 24             	mov    %eax,(%esp)
 820ccf2:	e8 89 11 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820ccf7:	eb 1b                	jmp    820cd14 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xde8>
 820ccf9:	89 d3                	mov    %edx,%ebx
 820ccfb:	89 c6                	mov    %eax,%esi
 820ccfd:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 820cd03:	89 04 24             	mov    %eax,(%esp)
 820cd06:	e8 d5 ae 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820cd0b:	89 f0                	mov    %esi,%eax
 820cd0d:	89 da                	mov    %ebx,%edx
 820cd0f:	e9 33 67 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820cd14:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 820cd1a:	89 04 24             	mov    %eax,(%esp)
 820cd1d:	e8 be ae 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820cd22:	e9 19 67 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cd27:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cd2e:	00 
 820cd2f:	8b 45 14             	mov    0x14(%ebp),%eax
 820cd32:	89 04 24             	mov    %eax,(%esp)
 820cd35:	e8 94 ad 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cd3a:	c7 44 24 04 cb 2c bc 	movl   $0x8bc2ccb,0x4(%esp)
 820cd41:	08 
 820cd42:	89 04 24             	mov    %eax,(%esp)
 820cd45:	e8 57 3c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820cd4a:	84 c0                	test   %al,%al
 820cd4c:	74 5b                	je     820cda9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xe7d>
 820cd4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820cd55:	00 
 820cd56:	8b 45 14             	mov    0x14(%ebp),%eax
 820cd59:	89 04 24             	mov    %eax,(%esp)
 820cd5c:	e8 6d ad 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cd61:	89 04 24             	mov    %eax,(%esp)
 820cd64:	e8 87 97 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820cd69:	89 04 24             	mov    %eax,(%esp)
 820cd6c:	e8 7f 19 e7 ff       	call   807e6f0 <atoi@plt>
 820cd71:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 820cd77:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 820cd7d:	c7 44 24 0c 64 00 00 	movl   $0x64,0xc(%esp)
 820cd84:	00 
 820cd85:	89 44 24 08          	mov    %eax,0x8(%esp)
 820cd89:	8b 45 0c             	mov    0xc(%ebp),%eax
 820cd8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 820cd90:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 820cd96:	89 04 24             	mov    %eax,(%esp)
 820cd99:	e8 fe 1e 38 00       	call   858ec9c <_ZN23DisPatcher_DebugCommand20_debugCommandAddItemEP5CUsermi>
 820cd9e:	88 85 f7 fe ff ff    	mov    %al,-0x109(%ebp)
 820cda4:	e9 97 66 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cda9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cdb0:	00 
 820cdb1:	8b 45 14             	mov    0x14(%ebp),%eax
 820cdb4:	89 04 24             	mov    %eax,(%esp)
 820cdb7:	e8 12 ad 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cdbc:	c7 44 24 04 8e 2c bc 	movl   $0x8bc2c8e,0x4(%esp)
 820cdc3:	08 
 820cdc4:	89 04 24             	mov    %eax,(%esp)
 820cdc7:	e8 d5 3b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820cdcc:	84 c0                	test   %al,%al
 820cdce:	74 2a                	je     820cdfa <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xece>
 820cdd0:	8d 85 fc fb ff ff    	lea    -0x404(%ebp),%eax
 820cdd6:	89 44 24 08          	mov    %eax,0x8(%esp)
 820cdda:	8b 45 0c             	mov    0xc(%ebp),%eax
 820cddd:	89 44 24 04          	mov    %eax,0x4(%esp)
 820cde1:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 820cde7:	89 04 24             	mov    %eax,(%esp)
 820cdea:	e8 bd 38 38 00       	call   85906ac <_ZN23DisPatcher_DebugCommand20_debugCommandVisibleEP5CUserR17MSG_DEBUG_COMMAND>
 820cdef:	88 85 d3 fe ff ff    	mov    %al,-0x12d(%ebp)
 820cdf5:	e9 46 66 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cdfa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ce01:	00 
 820ce02:	8b 45 14             	mov    0x14(%ebp),%eax
 820ce05:	89 04 24             	mov    %eax,(%esp)
 820ce08:	e8 c1 ac 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ce0d:	c7 44 24 04 d0 2c bc 	movl   $0x8bc2cd0,0x4(%esp)
 820ce14:	08 
 820ce15:	89 04 24             	mov    %eax,(%esp)
 820ce18:	e8 84 3b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ce1d:	84 c0                	test   %al,%al
 820ce1f:	74 2a                	je     820ce4b <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xf1f>
 820ce21:	8d 85 cc fb ff ff    	lea    -0x434(%ebp),%eax
 820ce27:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ce2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ce2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 820ce32:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 820ce38:	89 04 24             	mov    %eax,(%esp)
 820ce3b:	e8 4a 37 38 00       	call   859058a <_ZN23DisPatcher_DebugCommand22_debugCommandInvisibleEP5CUserR17MSG_DEBUG_COMMAND>
 820ce40:	88 85 d3 fe ff ff    	mov    %al,-0x12d(%ebp)
 820ce46:	e9 f5 65 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ce4b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ce52:	00 
 820ce53:	8b 45 14             	mov    0x14(%ebp),%eax
 820ce56:	89 04 24             	mov    %eax,(%esp)
 820ce59:	e8 70 ac 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ce5e:	c7 44 24 04 d5 2c bc 	movl   $0x8bc2cd5,0x4(%esp)
 820ce65:	08 
 820ce66:	89 04 24             	mov    %eax,(%esp)
 820ce69:	e8 33 3b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ce6e:	84 c0                	test   %al,%al
 820ce70:	74 37                	je     820cea9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0xf7d>
 820ce72:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ce79:	00 
 820ce7a:	8b 45 14             	mov    0x14(%ebp),%eax
 820ce7d:	89 04 24             	mov    %eax,(%esp)
 820ce80:	e8 49 ac 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ce85:	89 04 24             	mov    %eax,(%esp)
 820ce88:	e8 63 96 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ce8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ce91:	c7 44 24 04 1f 00 00 	movl   $0x1f,0x4(%esp)
 820ce98:	00 
 820ce99:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ce9c:	89 04 24             	mov    %eax,(%esp)
 820ce9f:	e8 ec eb ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820cea4:	e9 97 65 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cea9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ceb0:	00 
 820ceb1:	8b 45 14             	mov    0x14(%ebp),%eax
 820ceb4:	89 04 24             	mov    %eax,(%esp)
 820ceb7:	e8 12 ac 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cebc:	c7 44 24 04 db 2c bc 	movl   $0x8bc2cdb,0x4(%esp)
 820cec3:	08 
 820cec4:	89 04 24             	mov    %eax,(%esp)
 820cec7:	e8 d5 3a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820cecc:	84 c0                	test   %al,%al
 820cece:	0f 84 a5 00 00 00    	je     820cf79 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x104d>
 820ced4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820cedb:	00 
 820cedc:	8b 45 14             	mov    0x14(%ebp),%eax
 820cedf:	89 04 24             	mov    %eax,(%esp)
 820cee2:	e8 e7 ab 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cee7:	89 04 24             	mov    %eax,(%esp)
 820ceea:	e8 01 96 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ceef:	89 04 24             	mov    %eax,(%esp)
 820cef2:	e8 f9 17 e7 ff       	call   807e6f0 <atoi@plt>
 820cef7:	89 85 aa fb ff ff    	mov    %eax,-0x456(%ebp)
 820cefd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820cf04:	00 
 820cf05:	8b 45 14             	mov    0x14(%ebp),%eax
 820cf08:	89 04 24             	mov    %eax,(%esp)
 820cf0b:	e8 be ab 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cf10:	89 04 24             	mov    %eax,(%esp)
 820cf13:	e8 d8 95 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820cf18:	89 04 24             	mov    %eax,(%esp)
 820cf1b:	e8 d0 17 e7 ff       	call   807e6f0 <atoi@plt>
 820cf20:	88 85 af fb ff ff    	mov    %al,-0x451(%ebp)
 820cf26:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 820cf2d:	00 
 820cf2e:	8b 45 14             	mov    0x14(%ebp),%eax
 820cf31:	89 04 24             	mov    %eax,(%esp)
 820cf34:	e8 95 ab 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cf39:	89 04 24             	mov    %eax,(%esp)
 820cf3c:	e8 af 95 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820cf41:	89 04 24             	mov    %eax,(%esp)
 820cf44:	e8 a7 17 e7 ff       	call   807e6f0 <atoi@plt>
 820cf49:	88 85 ae fb ff ff    	mov    %al,-0x452(%ebp)
 820cf4f:	8d 85 9c fb ff ff    	lea    -0x464(%ebp),%eax
 820cf55:	89 44 24 08          	mov    %eax,0x8(%esp)
 820cf59:	8b 45 0c             	mov    0xc(%ebp),%eax
 820cf5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 820cf60:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 820cf66:	89 04 24             	mov    %eax,(%esp)
 820cf69:	e8 48 28 38 00       	call   858f7b6 <_ZN23DisPatcher_DebugCommand22_debugCommandAddAvatarEP5CUserR17MSG_DEBUG_COMMAND>
 820cf6e:	88 85 d3 fe ff ff    	mov    %al,-0x12d(%ebp)
 820cf74:	e9 c7 64 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cf79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cf80:	00 
 820cf81:	8b 45 14             	mov    0x14(%ebp),%eax
 820cf84:	89 04 24             	mov    %eax,(%esp)
 820cf87:	e8 42 ab 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cf8c:	c7 44 24 04 e2 2c bc 	movl   $0x8bc2ce2,0x4(%esp)
 820cf93:	08 
 820cf94:	89 04 24             	mov    %eax,(%esp)
 820cf97:	e8 05 3a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820cf9c:	84 c0                	test   %al,%al
 820cf9e:	0f 85 9c 64 00 00    	jne    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820cfa4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820cfab:	00 
 820cfac:	8b 45 14             	mov    0x14(%ebp),%eax
 820cfaf:	89 04 24             	mov    %eax,(%esp)
 820cfb2:	e8 17 ab 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cfb7:	c7 44 24 04 e8 2c bc 	movl   $0x8bc2ce8,0x4(%esp)
 820cfbe:	08 
 820cfbf:	89 04 24             	mov    %eax,(%esp)
 820cfc2:	e8 da 39 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820cfc7:	84 c0                	test   %al,%al
 820cfc9:	0f 84 e4 00 00 00    	je     820d0b3 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1187>
 820cfcf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820cfd6:	00 
 820cfd7:	8b 45 14             	mov    0x14(%ebp),%eax
 820cfda:	89 04 24             	mov    %eax,(%esp)
 820cfdd:	e8 ec aa 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820cfe2:	89 04 24             	mov    %eax,(%esp)
 820cfe5:	e8 06 95 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820cfea:	89 04 24             	mov    %eax,(%esp)
 820cfed:	e8 fe 16 e7 ff       	call   807e6f0 <atoi@plt>
 820cff2:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 820cff8:	8b 45 0c             	mov    0xc(%ebp),%eax
 820cffb:	89 04 24             	mov    %eax,(%esp)
 820cffe:	e8 7b d2 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 820d003:	89 04 24             	mov    %eax,(%esp)
 820d006:	e8 7f 06 02 00       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 820d00b:	8b 95 f8 fe ff ff    	mov    -0x108(%ebp),%edx
 820d011:	29 d0                	sub    %edx,%eax
 820d013:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 820d019:	83 bd fc fe ff ff 00 	cmpl   $0x0,-0x104(%ebp)
 820d020:	79 0a                	jns    820d02c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1100>
 820d022:	c7 85 fc fe ff ff 00 	movl   $0x0,-0x104(%ebp)
 820d029:	00 00 00 
 820d02c:	8b 9d fc fe ff ff    	mov    -0x104(%ebp),%ebx
 820d032:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d035:	89 04 24             	mov    %eax,(%esp)
 820d038:	e8 51 d2 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 820d03d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820d041:	89 04 24             	mov    %eax,(%esp)
 820d044:	e8 33 06 02 00       	call   822d67c <_ZN10CInventory7SetCoinEj>
 820d049:	83 bd f8 fe ff ff 00 	cmpl   $0x0,-0x108(%ebp)
 820d050:	75 51                	jne    820d0a3 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1177>
 820d052:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d055:	89 04 24             	mov    %eax,(%esp)
 820d058:	e8 31 d2 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 820d05d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d064:	00 
 820d065:	89 04 24             	mov    %eax,(%esp)
 820d068:	e8 0f 06 02 00       	call   822d67c <_ZN10CInventory7SetCoinEj>
 820d06d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d070:	89 04 24             	mov    %eax,(%esp)
 820d073:	e8 16 d2 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 820d078:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d07f:	00 
 820d080:	89 04 24             	mov    %eax,(%esp)
 820d083:	e8 b2 f6 f9 ff       	call   81ac73a <_ZN10CInventory10SetPayCoinEj>
 820d088:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d08b:	89 04 24             	mov    %eax,(%esp)
 820d08e:	e8 fb d1 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 820d093:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d09a:	00 
 820d09b:	89 04 24             	mov    %eax,(%esp)
 820d09e:	e8 e3 3b f0 ff       	call   8110c86 <_ZN10CInventory12SetEventCoinEj>
 820d0a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d0a6:	89 04 24             	mov    %eax,(%esp)
 820d0a9:	e8 5a 97 44 00       	call   8656808 <_ZN5CUser8SendCoinEv>
 820d0ae:	e9 8d 63 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d0b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d0ba:	00 
 820d0bb:	8b 45 14             	mov    0x14(%ebp),%eax
 820d0be:	89 04 24             	mov    %eax,(%esp)
 820d0c1:	e8 08 aa 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d0c6:	c7 44 24 04 ed 2c bc 	movl   $0x8bc2ced,0x4(%esp)
 820d0cd:	08 
 820d0ce:	89 04 24             	mov    %eax,(%esp)
 820d0d1:	e8 cb 38 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d0d6:	84 c0                	test   %al,%al
 820d0d8:	0f 84 06 01 00 00    	je     820d1e4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x12b8>
 820d0de:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d0e5:	00 
 820d0e6:	8b 45 14             	mov    0x14(%ebp),%eax
 820d0e9:	89 04 24             	mov    %eax,(%esp)
 820d0ec:	e8 dd a9 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d0f1:	c7 44 24 04 cb 2c bc 	movl   $0x8bc2ccb,0x4(%esp)
 820d0f8:	08 
 820d0f9:	89 04 24             	mov    %eax,(%esp)
 820d0fc:	e8 a0 38 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d101:	84 c0                	test   %al,%al
 820d103:	0f 84 37 63 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d109:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820d110:	00 
 820d111:	8b 45 14             	mov    0x14(%ebp),%eax
 820d114:	89 04 24             	mov    %eax,(%esp)
 820d117:	e8 b2 a9 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d11c:	89 04 24             	mov    %eax,(%esp)
 820d11f:	e8 cc 93 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d124:	89 04 24             	mov    %eax,(%esp)
 820d127:	e8 c4 15 e7 ff       	call   807e6f0 <atoi@plt>
 820d12c:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 820d132:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 820d139:	00 
 820d13a:	8b 45 14             	mov    0x14(%ebp),%eax
 820d13d:	89 04 24             	mov    %eax,(%esp)
 820d140:	e8 89 a9 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d145:	89 04 24             	mov    %eax,(%esp)
 820d148:	e8 a3 93 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d14d:	89 04 24             	mov    %eax,(%esp)
 820d150:	e8 9b 15 e7 ff       	call   807e6f0 <atoi@plt>
 820d155:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 820d15b:	83 bd 00 ff ff ff 00 	cmpl   $0x0,-0x100(%ebp)
 820d162:	7e 09                	jle    820d16d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1241>
 820d164:	83 bd 00 ff ff ff 06 	cmpl   $0x6,-0x100(%ebp)
 820d16b:	7e 0a                	jle    820d177 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x124b>
 820d16d:	bb 00 00 00 00       	mov    $0x0,%ebx
 820d172:	e9 e8 62 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820d177:	83 85 00 ff ff ff 02 	addl   $0x2,-0x100(%ebp)
 820d17e:	c7 85 08 ff ff ff 00 	movl   $0x0,-0xf8(%ebp)
 820d185:	00 00 00 
 820d188:	eb 1d                	jmp    820d1a7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x127b>
 820d18a:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 820d190:	98                   	cwtl
 820d191:	89 44 24 04          	mov    %eax,0x4(%esp)
 820d195:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d198:	89 04 24             	mov    %eax,(%esp)
 820d19b:	e8 5c 86 45 00       	call   86657fc <_ZN5CUser15increase_statusEs>
 820d1a0:	83 85 08 ff ff ff 01 	addl   $0x1,-0xf8(%ebp)
 820d1a7:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 820d1ad:	3b 85 04 ff ff ff    	cmp    -0xfc(%ebp),%eax
 820d1b3:	0f 9c c0             	setl   %al
 820d1b6:	84 c0                	test   %al,%al
 820d1b8:	75 d0                	jne    820d18a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x125e>
 820d1ba:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 820d1c0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820d1c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820d1cb:	00 
 820d1cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d1d3:	00 
 820d1d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d1d7:	89 04 24             	mov    %eax,(%esp)
 820d1da:	e8 7b f4 46 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 820d1df:	e9 5c 62 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d1e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d1eb:	00 
 820d1ec:	8b 45 14             	mov    0x14(%ebp),%eax
 820d1ef:	89 04 24             	mov    %eax,(%esp)
 820d1f2:	e8 d7 a8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d1f7:	c7 44 24 04 f1 2c bc 	movl   $0x8bc2cf1,0x4(%esp)
 820d1fe:	08 
 820d1ff:	89 04 24             	mov    %eax,(%esp)
 820d202:	e8 9a 37 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d207:	84 c0                	test   %al,%al
 820d209:	0f 84 8e 00 00 00    	je     820d29d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1371>
 820d20f:	8d 9d 98 f9 ff ff    	lea    -0x668(%ebp),%ebx
 820d215:	b8 00 00 00 00       	mov    $0x0,%eax
 820d21a:	ba 40 00 00 00       	mov    $0x40,%edx
 820d21f:	89 df                	mov    %ebx,%edi
 820d221:	89 d1                	mov    %edx,%ecx
 820d223:	f3 ab                	rep stos %eax,%es:(%edi)
 820d225:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820d22c:	00 
 820d22d:	8b 45 14             	mov    0x14(%ebp),%eax
 820d230:	89 04 24             	mov    %eax,(%esp)
 820d233:	e8 96 a8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d238:	89 04 24             	mov    %eax,(%esp)
 820d23b:	e8 b0 92 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d240:	89 c3                	mov    %eax,%ebx
 820d242:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d249:	00 
 820d24a:	8b 45 14             	mov    0x14(%ebp),%eax
 820d24d:	89 04 24             	mov    %eax,(%esp)
 820d250:	e8 79 a8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d255:	89 04 24             	mov    %eax,(%esp)
 820d258:	e8 93 92 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d25d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820d261:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d265:	c7 44 24 04 f8 2c bc 	movl   $0x8bc2cf8,0x4(%esp)
 820d26c:	08 
 820d26d:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d273:	89 04 24             	mov    %eax,(%esp)
 820d276:	e8 c5 11 e7 ff       	call   807e440 <sprintf@plt>
 820d27b:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d281:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d285:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 820d28c:	00 
 820d28d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d290:	89 04 24             	mov    %eax,(%esp)
 820d293:	e8 f8 e7 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d298:	e9 a3 61 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d29d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d2a4:	00 
 820d2a5:	8b 45 14             	mov    0x14(%ebp),%eax
 820d2a8:	89 04 24             	mov    %eax,(%esp)
 820d2ab:	e8 1e a8 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d2b0:	c7 44 24 04 fe 2c bc 	movl   $0x8bc2cfe,0x4(%esp)
 820d2b7:	08 
 820d2b8:	89 04 24             	mov    %eax,(%esp)
 820d2bb:	e8 e1 36 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d2c0:	84 c0                	test   %al,%al
 820d2c2:	0f 84 8e 00 00 00    	je     820d356 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x142a>
 820d2c8:	8d 9d 98 f9 ff ff    	lea    -0x668(%ebp),%ebx
 820d2ce:	b8 00 00 00 00       	mov    $0x0,%eax
 820d2d3:	ba 40 00 00 00       	mov    $0x40,%edx
 820d2d8:	89 df                	mov    %ebx,%edi
 820d2da:	89 d1                	mov    %edx,%ecx
 820d2dc:	f3 ab                	rep stos %eax,%es:(%edi)
 820d2de:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820d2e5:	00 
 820d2e6:	8b 45 14             	mov    0x14(%ebp),%eax
 820d2e9:	89 04 24             	mov    %eax,(%esp)
 820d2ec:	e8 dd a7 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d2f1:	89 04 24             	mov    %eax,(%esp)
 820d2f4:	e8 f7 91 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d2f9:	89 c3                	mov    %eax,%ebx
 820d2fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d302:	00 
 820d303:	8b 45 14             	mov    0x14(%ebp),%eax
 820d306:	89 04 24             	mov    %eax,(%esp)
 820d309:	e8 c0 a7 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d30e:	89 04 24             	mov    %eax,(%esp)
 820d311:	e8 da 91 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d316:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820d31a:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d31e:	c7 44 24 04 f8 2c bc 	movl   $0x8bc2cf8,0x4(%esp)
 820d325:	08 
 820d326:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d32c:	89 04 24             	mov    %eax,(%esp)
 820d32f:	e8 0c 11 e7 ff       	call   807e440 <sprintf@plt>
 820d334:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d33a:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d33e:	c7 44 24 04 23 00 00 	movl   $0x23,0x4(%esp)
 820d345:	00 
 820d346:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d349:	89 04 24             	mov    %eax,(%esp)
 820d34c:	e8 3f e7 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d351:	e9 ea 60 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d356:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d35d:	00 
 820d35e:	8b 45 14             	mov    0x14(%ebp),%eax
 820d361:	89 04 24             	mov    %eax,(%esp)
 820d364:	e8 65 a7 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d369:	c7 44 24 04 06 2d bc 	movl   $0x8bc2d06,0x4(%esp)
 820d370:	08 
 820d371:	89 04 24             	mov    %eax,(%esp)
 820d374:	e8 28 36 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d379:	84 c0                	test   %al,%al
 820d37b:	74 37                	je     820d3b4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1488>
 820d37d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d384:	00 
 820d385:	8b 45 14             	mov    0x14(%ebp),%eax
 820d388:	89 04 24             	mov    %eax,(%esp)
 820d38b:	e8 3e a7 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d390:	89 04 24             	mov    %eax,(%esp)
 820d393:	e8 58 91 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d398:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d39c:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 820d3a3:	00 
 820d3a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d3a7:	89 04 24             	mov    %eax,(%esp)
 820d3aa:	e8 e1 e6 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d3af:	e9 8c 60 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d3b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d3bb:	00 
 820d3bc:	8b 45 14             	mov    0x14(%ebp),%eax
 820d3bf:	89 04 24             	mov    %eax,(%esp)
 820d3c2:	e8 07 a7 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d3c7:	c7 44 24 04 0e 2d bc 	movl   $0x8bc2d0e,0x4(%esp)
 820d3ce:	08 
 820d3cf:	89 04 24             	mov    %eax,(%esp)
 820d3d2:	e8 ca 35 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d3d7:	84 c0                	test   %al,%al
 820d3d9:	74 37                	je     820d412 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x14e6>
 820d3db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d3e2:	00 
 820d3e3:	8b 45 14             	mov    0x14(%ebp),%eax
 820d3e6:	89 04 24             	mov    %eax,(%esp)
 820d3e9:	e8 e0 a6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d3ee:	89 04 24             	mov    %eax,(%esp)
 820d3f1:	e8 fa 90 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d3f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d3fa:	c7 44 24 04 1c 00 00 	movl   $0x1c,0x4(%esp)
 820d401:	00 
 820d402:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d405:	89 04 24             	mov    %eax,(%esp)
 820d408:	e8 83 e6 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d40d:	e9 2e 60 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d412:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d419:	00 
 820d41a:	8b 45 14             	mov    0x14(%ebp),%eax
 820d41d:	89 04 24             	mov    %eax,(%esp)
 820d420:	e8 a9 a6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d425:	c7 44 24 04 14 2d bc 	movl   $0x8bc2d14,0x4(%esp)
 820d42c:	08 
 820d42d:	89 04 24             	mov    %eax,(%esp)
 820d430:	e8 6c 35 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d435:	84 c0                	test   %al,%al
 820d437:	0f 85 9c 00 00 00    	jne    820d4d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x15ad>
 820d43d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d444:	00 
 820d445:	8b 45 14             	mov    0x14(%ebp),%eax
 820d448:	89 04 24             	mov    %eax,(%esp)
 820d44b:	e8 7e a6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d450:	c7 44 24 04 18 2d bc 	movl   $0x8bc2d18,0x4(%esp)
 820d457:	08 
 820d458:	89 04 24             	mov    %eax,(%esp)
 820d45b:	e8 41 35 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d460:	84 c0                	test   %al,%al
 820d462:	75 75                	jne    820d4d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x15ad>
 820d464:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d46b:	00 
 820d46c:	8b 45 14             	mov    0x14(%ebp),%eax
 820d46f:	89 04 24             	mov    %eax,(%esp)
 820d472:	e8 57 a6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d477:	c7 44 24 04 28 2d bc 	movl   $0x8bc2d28,0x4(%esp)
 820d47e:	08 
 820d47f:	89 04 24             	mov    %eax,(%esp)
 820d482:	e8 1a 35 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d487:	84 c0                	test   %al,%al
 820d489:	75 4e                	jne    820d4d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x15ad>
 820d48b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d492:	00 
 820d493:	8b 45 14             	mov    0x14(%ebp),%eax
 820d496:	89 04 24             	mov    %eax,(%esp)
 820d499:	e8 30 a6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d49e:	c7 44 24 04 31 2d bc 	movl   $0x8bc2d31,0x4(%esp)
 820d4a5:	08 
 820d4a6:	89 04 24             	mov    %eax,(%esp)
 820d4a9:	e8 f3 34 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d4ae:	84 c0                	test   %al,%al
 820d4b0:	75 27                	jne    820d4d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x15ad>
 820d4b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d4b9:	00 
 820d4ba:	8b 45 14             	mov    0x14(%ebp),%eax
 820d4bd:	89 04 24             	mov    %eax,(%esp)
 820d4c0:	e8 09 a6 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d4c5:	c7 44 24 04 38 2d bc 	movl   $0x8bc2d38,0x4(%esp)
 820d4cc:	08 
 820d4cd:	89 04 24             	mov    %eax,(%esp)
 820d4d0:	e8 cc 34 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d4d5:	84 c0                	test   %al,%al
 820d4d7:	74 07                	je     820d4e0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x15b4>
 820d4d9:	b8 01 00 00 00       	mov    $0x1,%eax
 820d4de:	eb 05                	jmp    820d4e5 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x15b9>
 820d4e0:	b8 00 00 00 00       	mov    $0x0,%eax
 820d4e5:	84 c0                	test   %al,%al
 820d4e7:	0f 84 b8 01 00 00    	je     820d6a5 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1779>
 820d4ed:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 820d4f3:	b8 00 00 00 00       	mov    $0x0,%eax
 820d4f8:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 820d4fd:	89 d7                	mov    %edx,%edi
 820d4ff:	f3 ab                	rep stos %eax,%es:(%edi)
 820d501:	89 fa                	mov    %edi,%edx
 820d503:	66 89 02             	mov    %ax,(%edx)
 820d506:	83 c2 02             	add    $0x2,%edx
 820d509:	88 02                	mov    %al,(%edx)
 820d50b:	83 c2 01             	add    $0x1,%edx
 820d50e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d515:	00 
 820d516:	8b 45 14             	mov    0x14(%ebp),%eax
 820d519:	89 04 24             	mov    %eax,(%esp)
 820d51c:	e8 ad a5 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d521:	c7 44 24 04 28 2d bc 	movl   $0x8bc2d28,0x4(%esp)
 820d528:	08 
 820d529:	89 04 24             	mov    %eax,(%esp)
 820d52c:	e8 70 34 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d531:	84 c0                	test   %al,%al
 820d533:	74 42                	je     820d577 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x164b>
 820d535:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d53c:	00 
 820d53d:	8b 45 14             	mov    0x14(%ebp),%eax
 820d540:	89 04 24             	mov    %eax,(%esp)
 820d543:	e8 86 a5 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d548:	89 04 24             	mov    %eax,(%esp)
 820d54b:	e8 a0 8f 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d550:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820d554:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 820d55b:	00 
 820d55c:	c7 44 24 04 30 2c bc 	movl   $0x8bc2c30,0x4(%esp)
 820d563:	08 
 820d564:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d56a:	89 04 24             	mov    %eax,(%esp)
 820d56d:	e8 ce 0e e7 ff       	call   807e440 <sprintf@plt>
 820d572:	e9 0c 01 00 00       	jmp    820d683 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1757>
 820d577:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d57e:	00 
 820d57f:	8b 45 14             	mov    0x14(%ebp),%eax
 820d582:	89 04 24             	mov    %eax,(%esp)
 820d585:	e8 44 a5 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d58a:	c7 44 24 04 31 2d bc 	movl   $0x8bc2d31,0x4(%esp)
 820d591:	08 
 820d592:	89 04 24             	mov    %eax,(%esp)
 820d595:	e8 07 34 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d59a:	84 c0                	test   %al,%al
 820d59c:	74 42                	je     820d5e0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x16b4>
 820d59e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d5a5:	00 
 820d5a6:	8b 45 14             	mov    0x14(%ebp),%eax
 820d5a9:	89 04 24             	mov    %eax,(%esp)
 820d5ac:	e8 1d a5 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d5b1:	89 04 24             	mov    %eax,(%esp)
 820d5b4:	e8 37 8f 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d5b9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820d5bd:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 820d5c4:	00 
 820d5c5:	c7 44 24 04 30 2c bc 	movl   $0x8bc2c30,0x4(%esp)
 820d5cc:	08 
 820d5cd:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d5d3:	89 04 24             	mov    %eax,(%esp)
 820d5d6:	e8 65 0e e7 ff       	call   807e440 <sprintf@plt>
 820d5db:	e9 a3 00 00 00       	jmp    820d683 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1757>
 820d5e0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d5e7:	00 
 820d5e8:	8b 45 14             	mov    0x14(%ebp),%eax
 820d5eb:	89 04 24             	mov    %eax,(%esp)
 820d5ee:	e8 db a4 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d5f3:	c7 44 24 04 38 2d bc 	movl   $0x8bc2d38,0x4(%esp)
 820d5fa:	08 
 820d5fb:	89 04 24             	mov    %eax,(%esp)
 820d5fe:	e8 9e 33 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d603:	84 c0                	test   %al,%al
 820d605:	74 3f                	je     820d646 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x171a>
 820d607:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d60e:	00 
 820d60f:	8b 45 14             	mov    0x14(%ebp),%eax
 820d612:	89 04 24             	mov    %eax,(%esp)
 820d615:	e8 b4 a4 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d61a:	89 04 24             	mov    %eax,(%esp)
 820d61d:	e8 ce 8e 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d622:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820d626:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 820d62d:	00 
 820d62e:	c7 44 24 04 30 2c bc 	movl   $0x8bc2c30,0x4(%esp)
 820d635:	08 
 820d636:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d63c:	89 04 24             	mov    %eax,(%esp)
 820d63f:	e8 fc 0d e7 ff       	call   807e440 <sprintf@plt>
 820d644:	eb 3d                	jmp    820d683 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1757>
 820d646:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d64d:	00 
 820d64e:	8b 45 14             	mov    0x14(%ebp),%eax
 820d651:	89 04 24             	mov    %eax,(%esp)
 820d654:	e8 75 a4 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d659:	89 04 24             	mov    %eax,(%esp)
 820d65c:	e8 8f 8e 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d661:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820d665:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820d66c:	00 
 820d66d:	c7 44 24 04 30 2c bc 	movl   $0x8bc2c30,0x4(%esp)
 820d674:	08 
 820d675:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d67b:	89 04 24             	mov    %eax,(%esp)
 820d67e:	e8 bd 0d e7 ff       	call   807e440 <sprintf@plt>
 820d683:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d689:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d68d:	c7 44 24 04 4b 00 00 	movl   $0x4b,0x4(%esp)
 820d694:	00 
 820d695:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d698:	89 04 24             	mov    %eax,(%esp)
 820d69b:	e8 f0 e3 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d6a0:	e9 9b 5d 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d6a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d6ac:	00 
 820d6ad:	8b 45 14             	mov    0x14(%ebp),%eax
 820d6b0:	89 04 24             	mov    %eax,(%esp)
 820d6b3:	e8 16 a4 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d6b8:	c7 44 24 04 40 2d bc 	movl   $0x8bc2d40,0x4(%esp)
 820d6bf:	08 
 820d6c0:	89 04 24             	mov    %eax,(%esp)
 820d6c3:	e8 d9 32 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d6c8:	84 c0                	test   %al,%al
 820d6ca:	75 27                	jne    820d6f3 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x17c7>
 820d6cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d6d3:	00 
 820d6d4:	8b 45 14             	mov    0x14(%ebp),%eax
 820d6d7:	89 04 24             	mov    %eax,(%esp)
 820d6da:	e8 ef a3 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d6df:	c7 44 24 04 44 2d bc 	movl   $0x8bc2d44,0x4(%esp)
 820d6e6:	08 
 820d6e7:	89 04 24             	mov    %eax,(%esp)
 820d6ea:	e8 b2 32 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d6ef:	84 c0                	test   %al,%al
 820d6f1:	74 07                	je     820d6fa <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x17ce>
 820d6f3:	b8 01 00 00 00       	mov    $0x1,%eax
 820d6f8:	eb 05                	jmp    820d6ff <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x17d3>
 820d6fa:	b8 00 00 00 00       	mov    $0x0,%eax
 820d6ff:	84 c0                	test   %al,%al
 820d701:	0f 84 1f 01 00 00    	je     820d826 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x18fa>
 820d707:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 820d70d:	b8 00 00 00 00       	mov    $0x0,%eax
 820d712:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 820d717:	89 d7                	mov    %edx,%edi
 820d719:	f3 ab                	rep stos %eax,%es:(%edi)
 820d71b:	89 fa                	mov    %edi,%edx
 820d71d:	66 89 02             	mov    %ax,(%edx)
 820d720:	83 c2 02             	add    $0x2,%edx
 820d723:	88 02                	mov    %al,(%edx)
 820d725:	83 c2 01             	add    $0x1,%edx
 820d728:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d72f:	00 
 820d730:	8b 45 14             	mov    0x14(%ebp),%eax
 820d733:	89 04 24             	mov    %eax,(%esp)
 820d736:	e8 93 a3 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d73b:	c7 44 24 04 53 2d bc 	movl   $0x8bc2d53,0x4(%esp)
 820d742:	08 
 820d743:	89 04 24             	mov    %eax,(%esp)
 820d746:	e8 56 32 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d74b:	84 c0                	test   %al,%al
 820d74d:	74 5f                	je     820d7ae <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1882>
 820d74f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820d756:	00 
 820d757:	8b 45 14             	mov    0x14(%ebp),%eax
 820d75a:	89 04 24             	mov    %eax,(%esp)
 820d75d:	e8 6c a3 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d762:	89 04 24             	mov    %eax,(%esp)
 820d765:	e8 86 8d 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d76a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820d76e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 820d775:	00 
 820d776:	c7 44 24 04 30 2c bc 	movl   $0x8bc2c30,0x4(%esp)
 820d77d:	08 
 820d77e:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d784:	89 04 24             	mov    %eax,(%esp)
 820d787:	e8 b4 0c e7 ff       	call   807e440 <sprintf@plt>
 820d78c:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d792:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d796:	c7 44 24 04 4d 00 00 	movl   $0x4d,0x4(%esp)
 820d79d:	00 
 820d79e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d7a1:	89 04 24             	mov    %eax,(%esp)
 820d7a4:	e8 e7 e2 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d7a9:	e9 92 5c 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d7ae:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820d7b5:	00 
 820d7b6:	8b 45 14             	mov    0x14(%ebp),%eax
 820d7b9:	89 04 24             	mov    %eax,(%esp)
 820d7bc:	e8 0d a3 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d7c1:	89 04 24             	mov    %eax,(%esp)
 820d7c4:	e8 27 8d 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d7c9:	89 c3                	mov    %eax,%ebx
 820d7cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d7d2:	00 
 820d7d3:	8b 45 14             	mov    0x14(%ebp),%eax
 820d7d6:	89 04 24             	mov    %eax,(%esp)
 820d7d9:	e8 f0 a2 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d7de:	89 04 24             	mov    %eax,(%esp)
 820d7e1:	e8 0a 8d 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d7e6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820d7ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d7ee:	c7 44 24 04 f8 2c bc 	movl   $0x8bc2cf8,0x4(%esp)
 820d7f5:	08 
 820d7f6:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d7fc:	89 04 24             	mov    %eax,(%esp)
 820d7ff:	e8 3c 0c e7 ff       	call   807e440 <sprintf@plt>
 820d804:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820d80a:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d80e:	c7 44 24 04 4c 00 00 	movl   $0x4c,0x4(%esp)
 820d815:	00 
 820d816:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d819:	89 04 24             	mov    %eax,(%esp)
 820d81c:	e8 6f e2 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d821:	e9 1a 5c 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d826:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d82d:	00 
 820d82e:	8b 45 14             	mov    0x14(%ebp),%eax
 820d831:	89 04 24             	mov    %eax,(%esp)
 820d834:	e8 95 a2 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d839:	c7 44 24 04 57 2d bc 	movl   $0x8bc2d57,0x4(%esp)
 820d840:	08 
 820d841:	89 04 24             	mov    %eax,(%esp)
 820d844:	e8 58 31 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d849:	84 c0                	test   %al,%al
 820d84b:	75 27                	jne    820d874 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1948>
 820d84d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d854:	00 
 820d855:	8b 45 14             	mov    0x14(%ebp),%eax
 820d858:	89 04 24             	mov    %eax,(%esp)
 820d85b:	e8 6e a2 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d860:	c7 44 24 04 5d 2d bc 	movl   $0x8bc2d5d,0x4(%esp)
 820d867:	08 
 820d868:	89 04 24             	mov    %eax,(%esp)
 820d86b:	e8 31 31 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d870:	84 c0                	test   %al,%al
 820d872:	74 07                	je     820d87b <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x194f>
 820d874:	b8 01 00 00 00       	mov    $0x1,%eax
 820d879:	eb 05                	jmp    820d880 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1954>
 820d87b:	b8 00 00 00 00       	mov    $0x0,%eax
 820d880:	84 c0                	test   %al,%al
 820d882:	74 37                	je     820d8bb <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x198f>
 820d884:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d88b:	00 
 820d88c:	8b 45 14             	mov    0x14(%ebp),%eax
 820d88f:	89 04 24             	mov    %eax,(%esp)
 820d892:	e8 37 a2 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d897:	89 04 24             	mov    %eax,(%esp)
 820d89a:	e8 51 8c 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d89f:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d8a3:	c7 44 24 04 4e 00 00 	movl   $0x4e,0x4(%esp)
 820d8aa:	00 
 820d8ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d8ae:	89 04 24             	mov    %eax,(%esp)
 820d8b1:	e8 da e1 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d8b6:	e9 85 5b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d8bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d8c2:	00 
 820d8c3:	8b 45 14             	mov    0x14(%ebp),%eax
 820d8c6:	89 04 24             	mov    %eax,(%esp)
 820d8c9:	e8 00 a2 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d8ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 820d8d2:	c7 04 24 67 2d bc 08 	movl   $0x8bc2d67,(%esp)
 820d8d9:	e8 02 a2 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820d8de:	84 c0                	test   %al,%al
 820d8e0:	74 37                	je     820d919 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x19ed>
 820d8e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d8e9:	00 
 820d8ea:	8b 45 14             	mov    0x14(%ebp),%eax
 820d8ed:	89 04 24             	mov    %eax,(%esp)
 820d8f0:	e8 d9 a1 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d8f5:	89 04 24             	mov    %eax,(%esp)
 820d8f8:	e8 f3 8b 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d8fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d901:	c7 44 24 04 52 00 00 	movl   $0x52,0x4(%esp)
 820d908:	00 
 820d909:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d90c:	89 04 24             	mov    %eax,(%esp)
 820d90f:	e8 7c e1 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d914:	e9 27 5b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d919:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d920:	00 
 820d921:	8b 45 14             	mov    0x14(%ebp),%eax
 820d924:	89 04 24             	mov    %eax,(%esp)
 820d927:	e8 a2 a1 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d92c:	89 44 24 04          	mov    %eax,0x4(%esp)
 820d930:	c7 04 24 73 2d bc 08 	movl   $0x8bc2d73,(%esp)
 820d937:	e8 a4 a1 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820d93c:	84 c0                	test   %al,%al
 820d93e:	74 37                	je     820d977 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1a4b>
 820d940:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d947:	00 
 820d948:	8b 45 14             	mov    0x14(%ebp),%eax
 820d94b:	89 04 24             	mov    %eax,(%esp)
 820d94e:	e8 7b a1 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d953:	89 04 24             	mov    %eax,(%esp)
 820d956:	e8 95 8b 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d95b:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d95f:	c7 44 24 04 79 00 00 	movl   $0x79,0x4(%esp)
 820d966:	00 
 820d967:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d96a:	89 04 24             	mov    %eax,(%esp)
 820d96d:	e8 1e e1 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d972:	e9 c9 5a 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d977:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d97e:	00 
 820d97f:	8b 45 14             	mov    0x14(%ebp),%eax
 820d982:	89 04 24             	mov    %eax,(%esp)
 820d985:	e8 44 a1 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d98a:	c7 44 24 04 7c 2d bc 	movl   $0x8bc2d7c,0x4(%esp)
 820d991:	08 
 820d992:	89 04 24             	mov    %eax,(%esp)
 820d995:	e8 07 30 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d99a:	84 c0                	test   %al,%al
 820d99c:	74 37                	je     820d9d5 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1aa9>
 820d99e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820d9a5:	00 
 820d9a6:	8b 45 14             	mov    0x14(%ebp),%eax
 820d9a9:	89 04 24             	mov    %eax,(%esp)
 820d9ac:	e8 1d a1 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d9b1:	89 04 24             	mov    %eax,(%esp)
 820d9b4:	e8 37 8b 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820d9b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 820d9bd:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 820d9c4:	00 
 820d9c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820d9c8:	89 04 24             	mov    %eax,(%esp)
 820d9cb:	e8 c0 e0 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820d9d0:	e9 6b 5a 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820d9d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820d9dc:	00 
 820d9dd:	8b 45 14             	mov    0x14(%ebp),%eax
 820d9e0:	89 04 24             	mov    %eax,(%esp)
 820d9e3:	e8 e6 a0 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820d9e8:	c7 44 24 04 83 2d bc 	movl   $0x8bc2d83,0x4(%esp)
 820d9ef:	08 
 820d9f0:	89 04 24             	mov    %eax,(%esp)
 820d9f3:	e8 a9 2f e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820d9f8:	84 c0                	test   %al,%al
 820d9fa:	0f 84 8e 00 00 00    	je     820da8e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1b62>
 820da00:	8d 9d 98 f9 ff ff    	lea    -0x668(%ebp),%ebx
 820da06:	b8 00 00 00 00       	mov    $0x0,%eax
 820da0b:	ba 40 00 00 00       	mov    $0x40,%edx
 820da10:	89 df                	mov    %ebx,%edi
 820da12:	89 d1                	mov    %edx,%ecx
 820da14:	f3 ab                	rep stos %eax,%es:(%edi)
 820da16:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820da1d:	00 
 820da1e:	8b 45 14             	mov    0x14(%ebp),%eax
 820da21:	89 04 24             	mov    %eax,(%esp)
 820da24:	e8 a5 a0 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820da29:	89 04 24             	mov    %eax,(%esp)
 820da2c:	e8 bf 8a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820da31:	89 c3                	mov    %eax,%ebx
 820da33:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820da3a:	00 
 820da3b:	8b 45 14             	mov    0x14(%ebp),%eax
 820da3e:	89 04 24             	mov    %eax,(%esp)
 820da41:	e8 88 a0 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820da46:	89 04 24             	mov    %eax,(%esp)
 820da49:	e8 a2 8a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820da4e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820da52:	89 44 24 08          	mov    %eax,0x8(%esp)
 820da56:	c7 44 24 04 f8 2c bc 	movl   $0x8bc2cf8,0x4(%esp)
 820da5d:	08 
 820da5e:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820da64:	89 04 24             	mov    %eax,(%esp)
 820da67:	e8 d4 09 e7 ff       	call   807e440 <sprintf@plt>
 820da6c:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820da72:	89 44 24 08          	mov    %eax,0x8(%esp)
 820da76:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 820da7d:	00 
 820da7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820da81:	89 04 24             	mov    %eax,(%esp)
 820da84:	e8 07 e0 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820da89:	e9 b2 59 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820da8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820da95:	00 
 820da96:	8b 45 14             	mov    0x14(%ebp),%eax
 820da99:	89 04 24             	mov    %eax,(%esp)
 820da9c:	e8 2d a0 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820daa1:	c7 44 24 04 8a 2d bc 	movl   $0x8bc2d8a,0x4(%esp)
 820daa8:	08 
 820daa9:	89 04 24             	mov    %eax,(%esp)
 820daac:	e8 f0 2e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820dab1:	84 c0                	test   %al,%al
 820dab3:	0f 84 8e 00 00 00    	je     820db47 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1c1b>
 820dab9:	8d 9d 98 f9 ff ff    	lea    -0x668(%ebp),%ebx
 820dabf:	b8 00 00 00 00       	mov    $0x0,%eax
 820dac4:	ba 40 00 00 00       	mov    $0x40,%edx
 820dac9:	89 df                	mov    %ebx,%edi
 820dacb:	89 d1                	mov    %edx,%ecx
 820dacd:	f3 ab                	rep stos %eax,%es:(%edi)
 820dacf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820dad6:	00 
 820dad7:	8b 45 14             	mov    0x14(%ebp),%eax
 820dada:	89 04 24             	mov    %eax,(%esp)
 820dadd:	e8 ec 9f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dae2:	89 04 24             	mov    %eax,(%esp)
 820dae5:	e8 06 8a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820daea:	89 c3                	mov    %eax,%ebx
 820daec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820daf3:	00 
 820daf4:	8b 45 14             	mov    0x14(%ebp),%eax
 820daf7:	89 04 24             	mov    %eax,(%esp)
 820dafa:	e8 cf 9f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820daff:	89 04 24             	mov    %eax,(%esp)
 820db02:	e8 e9 89 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820db07:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820db0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 820db0f:	c7 44 24 04 f8 2c bc 	movl   $0x8bc2cf8,0x4(%esp)
 820db16:	08 
 820db17:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820db1d:	89 04 24             	mov    %eax,(%esp)
 820db20:	e8 1b 09 e7 ff       	call   807e440 <sprintf@plt>
 820db25:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820db2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 820db2f:	c7 44 24 04 48 00 00 	movl   $0x48,0x4(%esp)
 820db36:	00 
 820db37:	8b 45 0c             	mov    0xc(%ebp),%eax
 820db3a:	89 04 24             	mov    %eax,(%esp)
 820db3d:	e8 4e df ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820db42:	e9 f9 58 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820db47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820db4e:	00 
 820db4f:	8b 45 14             	mov    0x14(%ebp),%eax
 820db52:	89 04 24             	mov    %eax,(%esp)
 820db55:	e8 74 9f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820db5a:	c7 44 24 04 91 2d bc 	movl   $0x8bc2d91,0x4(%esp)
 820db61:	08 
 820db62:	89 04 24             	mov    %eax,(%esp)
 820db65:	e8 37 2e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820db6a:	84 c0                	test   %al,%al
 820db6c:	0f 84 1e 01 00 00    	je     820dc90 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1d64>
 820db72:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820db79:	00 
 820db7a:	8b 45 14             	mov    0x14(%ebp),%eax
 820db7d:	89 04 24             	mov    %eax,(%esp)
 820db80:	e8 49 9f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820db85:	c7 44 24 04 94 2d bc 	movl   $0x8bc2d94,0x4(%esp)
 820db8c:	08 
 820db8d:	89 04 24             	mov    %eax,(%esp)
 820db90:	e8 0c 2e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820db95:	84 c0                	test   %al,%al
 820db97:	74 37                	je     820dbd0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1ca4>
 820db99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dba0:	00 
 820dba1:	8b 45 14             	mov    0x14(%ebp),%eax
 820dba4:	89 04 24             	mov    %eax,(%esp)
 820dba7:	e8 22 9f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dbac:	89 04 24             	mov    %eax,(%esp)
 820dbaf:	e8 3c 89 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820dbb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 820dbb8:	c7 44 24 04 5d 00 00 	movl   $0x5d,0x4(%esp)
 820dbbf:	00 
 820dbc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dbc3:	89 04 24             	mov    %eax,(%esp)
 820dbc6:	e8 c5 de ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820dbcb:	e9 70 58 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820dbd0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dbd7:	00 
 820dbd8:	8b 45 14             	mov    0x14(%ebp),%eax
 820dbdb:	89 04 24             	mov    %eax,(%esp)
 820dbde:	e8 eb 9e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dbe3:	c7 44 24 04 9a 2d bc 	movl   $0x8bc2d9a,0x4(%esp)
 820dbea:	08 
 820dbeb:	89 04 24             	mov    %eax,(%esp)
 820dbee:	e8 ae 2d e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820dbf3:	84 c0                	test   %al,%al
 820dbf5:	74 37                	je     820dc2e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1d02>
 820dbf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dbfe:	00 
 820dbff:	8b 45 14             	mov    0x14(%ebp),%eax
 820dc02:	89 04 24             	mov    %eax,(%esp)
 820dc05:	e8 c4 9e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dc0a:	89 04 24             	mov    %eax,(%esp)
 820dc0d:	e8 de 88 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820dc12:	89 44 24 08          	mov    %eax,0x8(%esp)
 820dc16:	c7 44 24 04 5e 00 00 	movl   $0x5e,0x4(%esp)
 820dc1d:	00 
 820dc1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dc21:	89 04 24             	mov    %eax,(%esp)
 820dc24:	e8 67 de ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820dc29:	e9 12 58 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820dc2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dc35:	00 
 820dc36:	8b 45 14             	mov    0x14(%ebp),%eax
 820dc39:	89 04 24             	mov    %eax,(%esp)
 820dc3c:	e8 8d 9e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dc41:	c7 44 24 04 a1 2d bc 	movl   $0x8bc2da1,0x4(%esp)
 820dc48:	08 
 820dc49:	89 04 24             	mov    %eax,(%esp)
 820dc4c:	e8 50 2d e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820dc51:	84 c0                	test   %al,%al
 820dc53:	0f 84 e7 57 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820dc59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dc60:	00 
 820dc61:	8b 45 14             	mov    0x14(%ebp),%eax
 820dc64:	89 04 24             	mov    %eax,(%esp)
 820dc67:	e8 62 9e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dc6c:	89 04 24             	mov    %eax,(%esp)
 820dc6f:	e8 7c 88 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820dc74:	89 44 24 08          	mov    %eax,0x8(%esp)
 820dc78:	c7 44 24 04 5f 00 00 	movl   $0x5f,0x4(%esp)
 820dc7f:	00 
 820dc80:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dc83:	89 04 24             	mov    %eax,(%esp)
 820dc86:	e8 05 de ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820dc8b:	e9 b0 57 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820dc90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820dc97:	00 
 820dc98:	8b 45 14             	mov    0x14(%ebp),%eax
 820dc9b:	89 04 24             	mov    %eax,(%esp)
 820dc9e:	e8 2b 9e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dca3:	c7 44 24 04 a4 2d bc 	movl   $0x8bc2da4,0x4(%esp)
 820dcaa:	08 
 820dcab:	89 04 24             	mov    %eax,(%esp)
 820dcae:	e8 ee 2c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820dcb3:	84 c0                	test   %al,%al
 820dcb5:	75 27                	jne    820dcde <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1db2>
 820dcb7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820dcbe:	00 
 820dcbf:	8b 45 14             	mov    0x14(%ebp),%eax
 820dcc2:	89 04 24             	mov    %eax,(%esp)
 820dcc5:	e8 04 9e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dcca:	c7 44 24 04 ac 2d bc 	movl   $0x8bc2dac,0x4(%esp)
 820dcd1:	08 
 820dcd2:	89 04 24             	mov    %eax,(%esp)
 820dcd5:	e8 c7 2c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820dcda:	84 c0                	test   %al,%al
 820dcdc:	74 07                	je     820dce5 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1db9>
 820dcde:	b8 01 00 00 00       	mov    $0x1,%eax
 820dce3:	eb 05                	jmp    820dcea <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1dbe>
 820dce5:	b8 00 00 00 00       	mov    $0x0,%eax
 820dcea:	84 c0                	test   %al,%al
 820dcec:	0f 84 da 01 00 00    	je     820decc <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1fa0>
 820dcf2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dcf9:	00 
 820dcfa:	8b 45 14             	mov    0x14(%ebp),%eax
 820dcfd:	89 04 24             	mov    %eax,(%esp)
 820dd00:	e8 c9 9d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dd05:	c7 44 24 04 94 2d bc 	movl   $0x8bc2d94,0x4(%esp)
 820dd0c:	08 
 820dd0d:	89 04 24             	mov    %eax,(%esp)
 820dd10:	e8 8c 2c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820dd15:	84 c0                	test   %al,%al
 820dd17:	74 37                	je     820dd50 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1e24>
 820dd19:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dd20:	00 
 820dd21:	8b 45 14             	mov    0x14(%ebp),%eax
 820dd24:	89 04 24             	mov    %eax,(%esp)
 820dd27:	e8 a2 9d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dd2c:	89 04 24             	mov    %eax,(%esp)
 820dd2f:	e8 bc 87 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820dd34:	89 44 24 08          	mov    %eax,0x8(%esp)
 820dd38:	c7 44 24 04 60 00 00 	movl   $0x60,0x4(%esp)
 820dd3f:	00 
 820dd40:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dd43:	89 04 24             	mov    %eax,(%esp)
 820dd46:	e8 45 dd ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820dd4b:	e9 f0 56 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820dd50:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dd57:	00 
 820dd58:	8b 45 14             	mov    0x14(%ebp),%eax
 820dd5b:	89 04 24             	mov    %eax,(%esp)
 820dd5e:	e8 6b 9d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dd63:	c7 44 24 04 af 2d bc 	movl   $0x8bc2daf,0x4(%esp)
 820dd6a:	08 
 820dd6b:	89 04 24             	mov    %eax,(%esp)
 820dd6e:	e8 2e 2c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820dd73:	84 c0                	test   %al,%al
 820dd75:	74 37                	je     820ddae <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1e82>
 820dd77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820dd7e:	00 
 820dd7f:	8b 45 14             	mov    0x14(%ebp),%eax
 820dd82:	89 04 24             	mov    %eax,(%esp)
 820dd85:	e8 44 9d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dd8a:	89 04 24             	mov    %eax,(%esp)
 820dd8d:	e8 5e 87 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820dd92:	89 44 24 08          	mov    %eax,0x8(%esp)
 820dd96:	c7 44 24 04 61 00 00 	movl   $0x61,0x4(%esp)
 820dd9d:	00 
 820dd9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dda1:	89 04 24             	mov    %eax,(%esp)
 820dda4:	e8 e7 dc ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820dda9:	e9 92 56 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ddae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ddb5:	00 
 820ddb6:	8b 45 14             	mov    0x14(%ebp),%eax
 820ddb9:	89 04 24             	mov    %eax,(%esp)
 820ddbc:	e8 0d 9d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ddc1:	c7 44 24 04 b6 2d bc 	movl   $0x8bc2db6,0x4(%esp)
 820ddc8:	08 
 820ddc9:	89 04 24             	mov    %eax,(%esp)
 820ddcc:	e8 d0 2b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ddd1:	84 c0                	test   %al,%al
 820ddd3:	74 37                	je     820de0c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1ee0>
 820ddd5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820dddc:	00 
 820dddd:	8b 45 14             	mov    0x14(%ebp),%eax
 820dde0:	89 04 24             	mov    %eax,(%esp)
 820dde3:	e8 e6 9c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dde8:	89 04 24             	mov    %eax,(%esp)
 820ddeb:	e8 00 87 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ddf0:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ddf4:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 820ddfb:	00 
 820ddfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ddff:	89 04 24             	mov    %eax,(%esp)
 820de02:	e8 89 dc ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820de07:	e9 34 56 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820de0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820de13:	00 
 820de14:	8b 45 14             	mov    0x14(%ebp),%eax
 820de17:	89 04 24             	mov    %eax,(%esp)
 820de1a:	e8 af 9c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820de1f:	c7 44 24 04 bc 2d bc 	movl   $0x8bc2dbc,0x4(%esp)
 820de26:	08 
 820de27:	89 04 24             	mov    %eax,(%esp)
 820de2a:	e8 72 2b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820de2f:	84 c0                	test   %al,%al
 820de31:	74 37                	je     820de6a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x1f3e>
 820de33:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820de3a:	00 
 820de3b:	8b 45 14             	mov    0x14(%ebp),%eax
 820de3e:	89 04 24             	mov    %eax,(%esp)
 820de41:	e8 88 9c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820de46:	89 04 24             	mov    %eax,(%esp)
 820de49:	e8 a2 86 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820de4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 820de52:	c7 44 24 04 63 00 00 	movl   $0x63,0x4(%esp)
 820de59:	00 
 820de5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820de5d:	89 04 24             	mov    %eax,(%esp)
 820de60:	e8 2b dc ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820de65:	e9 d6 55 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820de6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820de71:	00 
 820de72:	8b 45 14             	mov    0x14(%ebp),%eax
 820de75:	89 04 24             	mov    %eax,(%esp)
 820de78:	e8 51 9c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820de7d:	c7 44 24 04 a1 2d bc 	movl   $0x8bc2da1,0x4(%esp)
 820de84:	08 
 820de85:	89 04 24             	mov    %eax,(%esp)
 820de88:	e8 14 2b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820de8d:	84 c0                	test   %al,%al
 820de8f:	0f 84 ab 55 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820de95:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820de9c:	00 
 820de9d:	8b 45 14             	mov    0x14(%ebp),%eax
 820dea0:	89 04 24             	mov    %eax,(%esp)
 820dea3:	e8 26 9c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dea8:	89 04 24             	mov    %eax,(%esp)
 820deab:	e8 40 86 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820deb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 820deb4:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 820debb:	00 
 820debc:	8b 45 0c             	mov    0xc(%ebp),%eax
 820debf:	89 04 24             	mov    %eax,(%esp)
 820dec2:	e8 c9 db ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820dec7:	e9 74 55 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820decc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ded3:	00 
 820ded4:	8b 45 14             	mov    0x14(%ebp),%eax
 820ded7:	89 04 24             	mov    %eax,(%esp)
 820deda:	e8 ef 9b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dedf:	c7 44 24 04 c0 2d bc 	movl   $0x8bc2dc0,0x4(%esp)
 820dee6:	08 
 820dee7:	89 04 24             	mov    %eax,(%esp)
 820deea:	e8 b2 2a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820deef:	84 c0                	test   %al,%al
 820def1:	0f 84 88 01 00 00    	je     820e07f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2153>
 820def7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820defe:	00 
 820deff:	8b 45 14             	mov    0x14(%ebp),%eax
 820df02:	89 04 24             	mov    %eax,(%esp)
 820df05:	e8 c4 9b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820df0a:	c7 44 24 04 c6 2d bc 	movl   $0x8bc2dc6,0x4(%esp)
 820df11:	08 
 820df12:	89 04 24             	mov    %eax,(%esp)
 820df15:	e8 87 2a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820df1a:	84 c0                	test   %al,%al
 820df1c:	74 53                	je     820df71 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2045>
 820df1e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820df25:	00 
 820df26:	8b 45 14             	mov    0x14(%ebp),%eax
 820df29:	89 04 24             	mov    %eax,(%esp)
 820df2c:	e8 9d 9b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820df31:	89 04 24             	mov    %eax,(%esp)
 820df34:	e8 b7 85 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820df39:	89 04 24             	mov    %eax,(%esp)
 820df3c:	e8 af 07 e7 ff       	call   807e6f0 <atoi@plt>
 820df41:	89 85 7a fb ff ff    	mov    %eax,-0x486(%ebp)
 820df47:	8d 85 6c fb ff ff    	lea    -0x494(%ebp),%eax
 820df4d:	89 44 24 08          	mov    %eax,0x8(%esp)
 820df51:	8b 45 0c             	mov    0xc(%ebp),%eax
 820df54:	89 44 24 04          	mov    %eax,0x4(%esp)
 820df58:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 820df5e:	89 04 24             	mov    %eax,(%esp)
 820df61:	e8 82 1f 38 00       	call   858fee8 <_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND>
 820df66:	88 85 d3 fe ff ff    	mov    %al,-0x12d(%ebp)
 820df6c:	e9 cf 54 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820df71:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820df78:	00 
 820df79:	8b 45 14             	mov    0x14(%ebp),%eax
 820df7c:	89 04 24             	mov    %eax,(%esp)
 820df7f:	e8 4a 9b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820df84:	c7 44 24 04 d0 2d bc 	movl   $0x8bc2dd0,0x4(%esp)
 820df8b:	08 
 820df8c:	89 04 24             	mov    %eax,(%esp)
 820df8f:	e8 0d 2a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820df94:	84 c0                	test   %al,%al
 820df96:	0f 84 81 00 00 00    	je     820e01d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x20f1>
 820df9c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820dfa3:	00 
 820dfa4:	8b 45 14             	mov    0x14(%ebp),%eax
 820dfa7:	89 04 24             	mov    %eax,(%esp)
 820dfaa:	e8 1f 9b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820dfaf:	89 04 24             	mov    %eax,(%esp)
 820dfb2:	e8 39 85 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820dfb7:	89 04 24             	mov    %eax,(%esp)
 820dfba:	e8 31 07 e7 ff       	call   807e6f0 <atoi@plt>
 820dfbf:	89 85 a6 fa ff ff    	mov    %eax,-0x55a(%ebp)
 820dfc5:	8b 85 a6 fa ff ff    	mov    -0x55a(%ebp),%eax
 820dfcb:	89 c7                	mov    %eax,%edi
 820dfcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dfd0:	89 04 24             	mov    %eax,(%esp)
 820dfd3:	e8 76 dc eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 820dfd8:	89 c6                	mov    %eax,%esi
 820dfda:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dfdd:	89 04 24             	mov    %eax,(%esp)
 820dfe0:	e8 87 14 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 820dfe5:	89 c3                	mov    %eax,%ebx
 820dfe7:	8b 45 0c             	mov    0xc(%ebp),%eax
 820dfea:	89 04 24             	mov    %eax,(%esp)
 820dfed:	e8 9e dc eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 820dff2:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 820dff8:	89 44 24 04          	mov    %eax,0x4(%esp)
 820dffc:	89 14 24             	mov    %edx,(%esp)
 820dfff:	e8 b4 f3 f0 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 820e004:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 820e008:	89 74 24 08          	mov    %esi,0x8(%esp)
 820e00c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820e010:	89 04 24             	mov    %eax,(%esp)
 820e013:	e8 1e 0d 26 00       	call   846ed36 <_ZN17CGuildServerProxy33SendIncreaseDecreasePowerWarPointEjji>
 820e018:	e9 23 54 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e01d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e024:	00 
 820e025:	8b 45 14             	mov    0x14(%ebp),%eax
 820e028:	89 04 24             	mov    %eax,(%esp)
 820e02b:	e8 9e 9a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e030:	c7 44 24 04 db 2d bc 	movl   $0x8bc2ddb,0x4(%esp)
 820e037:	08 
 820e038:	89 04 24             	mov    %eax,(%esp)
 820e03b:	e8 61 29 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e040:	84 c0                	test   %al,%al
 820e042:	0f 84 f8 53 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e048:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e04f:	00 
 820e050:	8b 45 14             	mov    0x14(%ebp),%eax
 820e053:	89 04 24             	mov    %eax,(%esp)
 820e056:	e8 73 9a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e05b:	89 04 24             	mov    %eax,(%esp)
 820e05e:	e8 8d 84 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e063:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e067:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 820e06e:	00 
 820e06f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e072:	89 04 24             	mov    %eax,(%esp)
 820e075:	e8 16 da ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e07a:	e9 c1 53 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e07f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e086:	00 
 820e087:	8b 45 14             	mov    0x14(%ebp),%eax
 820e08a:	89 04 24             	mov    %eax,(%esp)
 820e08d:	e8 3c 9a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e092:	c7 44 24 04 df 2d bc 	movl   $0x8bc2ddf,0x4(%esp)
 820e099:	08 
 820e09a:	89 04 24             	mov    %eax,(%esp)
 820e09d:	e8 ff 28 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e0a2:	84 c0                	test   %al,%al
 820e0a4:	0f 84 f4 00 00 00    	je     820e19e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2272>
 820e0aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e0b1:	00 
 820e0b2:	8b 45 14             	mov    0x14(%ebp),%eax
 820e0b5:	89 04 24             	mov    %eax,(%esp)
 820e0b8:	e8 11 9a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e0bd:	c7 44 24 04 e7 2d bc 	movl   $0x8bc2de7,0x4(%esp)
 820e0c4:	08 
 820e0c5:	89 04 24             	mov    %eax,(%esp)
 820e0c8:	e8 d4 28 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e0cd:	84 c0                	test   %al,%al
 820e0cf:	74 18                	je     820e0e9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x21bd>
 820e0d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e0d8:	00 
 820e0d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e0dc:	89 04 24             	mov    %eax,(%esp)
 820e0df:	e8 84 da ff ff       	call   820bb68 <_Z28SendVillageAttackedGMCommandP5CUseri>
 820e0e4:	e9 57 53 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e0e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e0f0:	00 
 820e0f1:	8b 45 14             	mov    0x14(%ebp),%eax
 820e0f4:	89 04 24             	mov    %eax,(%esp)
 820e0f7:	e8 d2 99 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e0fc:	c7 44 24 04 ef 2d bc 	movl   $0x8bc2def,0x4(%esp)
 820e103:	08 
 820e104:	89 04 24             	mov    %eax,(%esp)
 820e107:	e8 95 28 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e10c:	84 c0                	test   %al,%al
 820e10e:	74 18                	je     820e128 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x21fc>
 820e110:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e117:	00 
 820e118:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e11b:	89 04 24             	mov    %eax,(%esp)
 820e11e:	e8 45 da ff ff       	call   820bb68 <_Z28SendVillageAttackedGMCommandP5CUseri>
 820e123:	e9 18 53 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e128:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e12f:	00 
 820e130:	8b 45 14             	mov    0x14(%ebp),%eax
 820e133:	89 04 24             	mov    %eax,(%esp)
 820e136:	e8 93 99 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e13b:	c7 44 24 04 f4 2d bc 	movl   $0x8bc2df4,0x4(%esp)
 820e142:	08 
 820e143:	89 04 24             	mov    %eax,(%esp)
 820e146:	e8 56 28 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e14b:	84 c0                	test   %al,%al
 820e14d:	74 18                	je     820e167 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x223b>
 820e14f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 820e156:	00 
 820e157:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e15a:	89 04 24             	mov    %eax,(%esp)
 820e15d:	e8 06 da ff ff       	call   820bb68 <_Z28SendVillageAttackedGMCommandP5CUseri>
 820e162:	e9 d9 52 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e167:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e16e:	00 
 820e16f:	8b 45 14             	mov    0x14(%ebp),%eax
 820e172:	89 04 24             	mov    %eax,(%esp)
 820e175:	e8 54 99 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e17a:	89 04 24             	mov    %eax,(%esp)
 820e17d:	e8 6e 83 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e182:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e186:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 820e18d:	00 
 820e18e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e191:	89 04 24             	mov    %eax,(%esp)
 820e194:	e8 f7 d8 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e199:	e9 a2 52 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e19e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e1a5:	00 
 820e1a6:	8b 45 14             	mov    0x14(%ebp),%eax
 820e1a9:	89 04 24             	mov    %eax,(%esp)
 820e1ac:	e8 1d 99 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e1b1:	c7 44 24 04 f8 2d bc 	movl   $0x8bc2df8,0x4(%esp)
 820e1b8:	08 
 820e1b9:	89 04 24             	mov    %eax,(%esp)
 820e1bc:	e8 e0 27 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e1c1:	84 c0                	test   %al,%al
 820e1c3:	0f 84 1e 01 00 00    	je     820e2e7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x23bb>
 820e1c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e1d0:	00 
 820e1d1:	8b 45 14             	mov    0x14(%ebp),%eax
 820e1d4:	89 04 24             	mov    %eax,(%esp)
 820e1d7:	e8 f2 98 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e1dc:	c7 44 24 04 fc 2d bc 	movl   $0x8bc2dfc,0x4(%esp)
 820e1e3:	08 
 820e1e4:	89 04 24             	mov    %eax,(%esp)
 820e1e7:	e8 b5 27 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e1ec:	84 c0                	test   %al,%al
 820e1ee:	74 37                	je     820e227 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x22fb>
 820e1f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e1f7:	00 
 820e1f8:	8b 45 14             	mov    0x14(%ebp),%eax
 820e1fb:	89 04 24             	mov    %eax,(%esp)
 820e1fe:	e8 cb 98 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e203:	89 04 24             	mov    %eax,(%esp)
 820e206:	e8 e5 82 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e20b:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e20f:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 820e216:	00 
 820e217:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e21a:	89 04 24             	mov    %eax,(%esp)
 820e21d:	e8 6e d8 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e222:	e9 19 52 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e227:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e22e:	00 
 820e22f:	8b 45 14             	mov    0x14(%ebp),%eax
 820e232:	89 04 24             	mov    %eax,(%esp)
 820e235:	e8 94 98 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e23a:	c7 44 24 04 02 2e bc 	movl   $0x8bc2e02,0x4(%esp)
 820e241:	08 
 820e242:	89 04 24             	mov    %eax,(%esp)
 820e245:	e8 57 27 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e24a:	84 c0                	test   %al,%al
 820e24c:	74 37                	je     820e285 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2359>
 820e24e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e255:	00 
 820e256:	8b 45 14             	mov    0x14(%ebp),%eax
 820e259:	89 04 24             	mov    %eax,(%esp)
 820e25c:	e8 6d 98 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e261:	89 04 24             	mov    %eax,(%esp)
 820e264:	e8 87 82 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e269:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e26d:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 820e274:	00 
 820e275:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e278:	89 04 24             	mov    %eax,(%esp)
 820e27b:	e8 10 d8 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e280:	e9 bb 51 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e285:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e28c:	00 
 820e28d:	8b 45 14             	mov    0x14(%ebp),%eax
 820e290:	89 04 24             	mov    %eax,(%esp)
 820e293:	e8 36 98 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e298:	c7 44 24 04 07 2e bc 	movl   $0x8bc2e07,0x4(%esp)
 820e29f:	08 
 820e2a0:	89 04 24             	mov    %eax,(%esp)
 820e2a3:	e8 f9 26 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e2a8:	84 c0                	test   %al,%al
 820e2aa:	0f 84 90 51 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e2b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e2b7:	00 
 820e2b8:	8b 45 14             	mov    0x14(%ebp),%eax
 820e2bb:	89 04 24             	mov    %eax,(%esp)
 820e2be:	e8 0b 98 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e2c3:	89 04 24             	mov    %eax,(%esp)
 820e2c6:	e8 25 82 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e2cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e2cf:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 820e2d6:	00 
 820e2d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e2da:	89 04 24             	mov    %eax,(%esp)
 820e2dd:	e8 ae d7 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e2e2:	e9 59 51 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e2e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e2ee:	00 
 820e2ef:	8b 45 14             	mov    0x14(%ebp),%eax
 820e2f2:	89 04 24             	mov    %eax,(%esp)
 820e2f5:	e8 d4 97 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e2fa:	c7 44 24 04 0b 2e bc 	movl   $0x8bc2e0b,0x4(%esp)
 820e301:	08 
 820e302:	89 04 24             	mov    %eax,(%esp)
 820e305:	e8 97 26 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e30a:	84 c0                	test   %al,%al
 820e30c:	74 37                	je     820e345 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2419>
 820e30e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e315:	00 
 820e316:	8b 45 14             	mov    0x14(%ebp),%eax
 820e319:	89 04 24             	mov    %eax,(%esp)
 820e31c:	e8 ad 97 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e321:	89 04 24             	mov    %eax,(%esp)
 820e324:	e8 c7 81 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e329:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e32d:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 820e334:	00 
 820e335:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e338:	89 04 24             	mov    %eax,(%esp)
 820e33b:	e8 50 d7 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e340:	e9 fb 50 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e345:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e34c:	00 
 820e34d:	8b 45 14             	mov    0x14(%ebp),%eax
 820e350:	89 04 24             	mov    %eax,(%esp)
 820e353:	e8 76 97 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e358:	c7 44 24 04 0f 2e bc 	movl   $0x8bc2e0f,0x4(%esp)
 820e35f:	08 
 820e360:	89 04 24             	mov    %eax,(%esp)
 820e363:	e8 39 26 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e368:	84 c0                	test   %al,%al
 820e36a:	0f 84 8e 00 00 00    	je     820e3fe <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x24d2>
 820e370:	8d 9d 98 f9 ff ff    	lea    -0x668(%ebp),%ebx
 820e376:	b8 00 00 00 00       	mov    $0x0,%eax
 820e37b:	ba 40 00 00 00       	mov    $0x40,%edx
 820e380:	89 df                	mov    %ebx,%edi
 820e382:	89 d1                	mov    %edx,%ecx
 820e384:	f3 ab                	rep stos %eax,%es:(%edi)
 820e386:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e38d:	00 
 820e38e:	8b 45 14             	mov    0x14(%ebp),%eax
 820e391:	89 04 24             	mov    %eax,(%esp)
 820e394:	e8 35 97 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e399:	89 04 24             	mov    %eax,(%esp)
 820e39c:	e8 4f 81 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e3a1:	89 c3                	mov    %eax,%ebx
 820e3a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e3aa:	00 
 820e3ab:	8b 45 14             	mov    0x14(%ebp),%eax
 820e3ae:	89 04 24             	mov    %eax,(%esp)
 820e3b1:	e8 18 97 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e3b6:	89 04 24             	mov    %eax,(%esp)
 820e3b9:	e8 32 81 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e3be:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820e3c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e3c6:	c7 44 24 04 f8 2c bc 	movl   $0x8bc2cf8,0x4(%esp)
 820e3cd:	08 
 820e3ce:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e3d4:	89 04 24             	mov    %eax,(%esp)
 820e3d7:	e8 64 00 e7 ff       	call   807e440 <sprintf@plt>
 820e3dc:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e3e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e3e6:	c7 44 24 04 29 00 00 	movl   $0x29,0x4(%esp)
 820e3ed:	00 
 820e3ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e3f1:	89 04 24             	mov    %eax,(%esp)
 820e3f4:	e8 97 d6 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e3f9:	e9 42 50 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e3fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e405:	00 
 820e406:	8b 45 14             	mov    0x14(%ebp),%eax
 820e409:	89 04 24             	mov    %eax,(%esp)
 820e40c:	e8 bd 96 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e411:	c7 44 24 04 17 2e bc 	movl   $0x8bc2e17,0x4(%esp)
 820e418:	08 
 820e419:	89 04 24             	mov    %eax,(%esp)
 820e41c:	e8 80 25 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e421:	84 c0                	test   %al,%al
 820e423:	0f 84 c7 03 00 00    	je     820e7f0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x28c4>
 820e429:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e430:	00 
 820e431:	8b 45 14             	mov    0x14(%ebp),%eax
 820e434:	89 04 24             	mov    %eax,(%esp)
 820e437:	e8 92 96 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e43c:	c7 44 24 04 1b 2e bc 	movl   $0x8bc2e1b,0x4(%esp)
 820e443:	08 
 820e444:	89 04 24             	mov    %eax,(%esp)
 820e447:	e8 55 25 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e44c:	84 c0                	test   %al,%al
 820e44e:	75 27                	jne    820e477 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x254b>
 820e450:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e457:	00 
 820e458:	8b 45 14             	mov    0x14(%ebp),%eax
 820e45b:	89 04 24             	mov    %eax,(%esp)
 820e45e:	e8 6b 96 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e463:	c7 44 24 04 23 2e bc 	movl   $0x8bc2e23,0x4(%esp)
 820e46a:	08 
 820e46b:	89 04 24             	mov    %eax,(%esp)
 820e46e:	e8 2e 25 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e473:	84 c0                	test   %al,%al
 820e475:	74 07                	je     820e47e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2552>
 820e477:	b8 01 00 00 00       	mov    $0x1,%eax
 820e47c:	eb 05                	jmp    820e483 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2557>
 820e47e:	b8 00 00 00 00       	mov    $0x0,%eax
 820e483:	84 c0                	test   %al,%al
 820e485:	0f 84 b5 4f 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e48b:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e491:	89 04 24             	mov    %eax,(%esp)
 820e494:	e8 b3 f8 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820e499:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 820e49f:	b8 00 00 00 00       	mov    $0x0,%eax
 820e4a4:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 820e4a9:	89 d7                	mov    %edx,%edi
 820e4ab:	f3 ab                	rep stos %eax,%es:(%edi)
 820e4ad:	89 fa                	mov    %edi,%edx
 820e4af:	66 89 02             	mov    %ax,(%edx)
 820e4b2:	83 c2 02             	add    $0x2,%edx
 820e4b5:	88 02                	mov    %al,(%edx)
 820e4b7:	83 c2 01             	add    $0x1,%edx
 820e4ba:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e4c1:	00 
 820e4c2:	8b 45 14             	mov    0x14(%ebp),%eax
 820e4c5:	89 04 24             	mov    %eax,(%esp)
 820e4c8:	e8 01 96 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e4cd:	c7 44 24 04 e7 2d bc 	movl   $0x8bc2de7,0x4(%esp)
 820e4d4:	08 
 820e4d5:	89 04 24             	mov    %eax,(%esp)
 820e4d8:	e8 c4 24 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e4dd:	84 c0                	test   %al,%al
 820e4df:	75 27                	jne    820e508 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x25dc>
 820e4e1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e4e8:	00 
 820e4e9:	8b 45 14             	mov    0x14(%ebp),%eax
 820e4ec:	89 04 24             	mov    %eax,(%esp)
 820e4ef:	e8 da 95 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e4f4:	c7 44 24 04 26 2e bc 	movl   $0x8bc2e26,0x4(%esp)
 820e4fb:	08 
 820e4fc:	89 04 24             	mov    %eax,(%esp)
 820e4ff:	e8 9d 24 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e504:	84 c0                	test   %al,%al
 820e506:	74 07                	je     820e50f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x25e3>
 820e508:	b8 01 00 00 00       	mov    $0x1,%eax
 820e50d:	eb 05                	jmp    820e514 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x25e8>
 820e50f:	b8 00 00 00 00       	mov    $0x0,%eax
 820e514:	84 c0                	test   %al,%al
 820e516:	0f 84 b9 00 00 00    	je     820e5d5 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x26a9>
 820e51c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e51f:	89 04 24             	mov    %eax,(%esp)
 820e522:	e8 7f 08 f1 ff       	call   811eda6 <_ZN15CUserCharacInfo26getUpgradeSeparateTrueFlagEv>
 820e527:	84 c0                	test   %al,%al
 820e529:	0f 94 c0             	sete   %al
 820e52c:	84 c0                	test   %al,%al
 820e52e:	74 5c                	je     820e58c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2660>
 820e530:	c7 85 73 fd ff ff 6f 	movl   $0x6b6f,-0x28d(%ebp)
 820e537:	6b 00 00 
 820e53a:	c6 85 77 fd ff ff 00 	movb   $0x0,-0x289(%ebp)
 820e541:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e544:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e54b:	00 
 820e54c:	89 04 24             	mov    %eax,(%esp)
 820e54f:	e8 d8 14 02 00       	call   822fa2c <_ZN15CUserCharacInfo26setUpgradeSeparateTrueFlagEc>
 820e554:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e557:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e55e:	00 
 820e55f:	89 04 24             	mov    %eax,(%esp)
 820e562:	e8 ed 14 02 00       	call   822fa54 <_ZN15CUserCharacInfo27setUpgradeSeparateFalseFlagEc>
 820e567:	8d 85 73 fd ff ff    	lea    -0x28d(%ebp),%eax
 820e56d:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e571:	c7 44 24 04 28 2e bc 	movl   $0x8bc2e28,0x4(%esp)
 820e578:	08 
 820e579:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e57f:	89 04 24             	mov    %eax,(%esp)
 820e582:	e8 b9 fe e6 ff       	call   807e440 <sprintf@plt>
 820e587:	e9 5c 01 00 00       	jmp    820e6e8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x27bc>
 820e58c:	c7 85 6e fd ff ff 65 	movl   $0x646e65,-0x292(%ebp)
 820e593:	6e 64 00 
 820e596:	c6 85 72 fd ff ff 00 	movb   $0x0,-0x28e(%ebp)
 820e59d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e5a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e5a7:	00 
 820e5a8:	89 04 24             	mov    %eax,(%esp)
 820e5ab:	e8 7c 14 02 00       	call   822fa2c <_ZN15CUserCharacInfo26setUpgradeSeparateTrueFlagEc>
 820e5b0:	8d 85 6e fd ff ff    	lea    -0x292(%ebp),%eax
 820e5b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e5ba:	c7 44 24 04 28 2e bc 	movl   $0x8bc2e28,0x4(%esp)
 820e5c1:	08 
 820e5c2:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e5c8:	89 04 24             	mov    %eax,(%esp)
 820e5cb:	e8 70 fe e6 ff       	call   807e440 <sprintf@plt>
 820e5d0:	e9 13 01 00 00       	jmp    820e6e8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x27bc>
 820e5d5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e5dc:	00 
 820e5dd:	8b 45 14             	mov    0x14(%ebp),%eax
 820e5e0:	89 04 24             	mov    %eax,(%esp)
 820e5e3:	e8 e6 94 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e5e8:	c7 44 24 04 ef 2d bc 	movl   $0x8bc2def,0x4(%esp)
 820e5ef:	08 
 820e5f0:	89 04 24             	mov    %eax,(%esp)
 820e5f3:	e8 a9 23 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e5f8:	84 c0                	test   %al,%al
 820e5fa:	75 27                	jne    820e623 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x26f7>
 820e5fc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e603:	00 
 820e604:	8b 45 14             	mov    0x14(%ebp),%eax
 820e607:	89 04 24             	mov    %eax,(%esp)
 820e60a:	e8 bf 94 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e60f:	c7 44 24 04 41 2e bc 	movl   $0x8bc2e41,0x4(%esp)
 820e616:	08 
 820e617:	89 04 24             	mov    %eax,(%esp)
 820e61a:	e8 82 23 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e61f:	84 c0                	test   %al,%al
 820e621:	74 07                	je     820e62a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x26fe>
 820e623:	b8 01 00 00 00       	mov    $0x1,%eax
 820e628:	eb 05                	jmp    820e62f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2703>
 820e62a:	b8 00 00 00 00       	mov    $0x0,%eax
 820e62f:	84 c0                	test   %al,%al
 820e631:	0f 84 b1 00 00 00    	je     820e6e8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x27bc>
 820e637:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e63a:	89 04 24             	mov    %eax,(%esp)
 820e63d:	e8 88 07 f1 ff       	call   811edca <_ZN15CUserCharacInfo27getUpgradeSeparateFlaseFlagEv>
 820e642:	84 c0                	test   %al,%al
 820e644:	0f 94 c0             	sete   %al
 820e647:	84 c0                	test   %al,%al
 820e649:	74 59                	je     820e6a4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2778>
 820e64b:	c7 85 69 fd ff ff 6f 	movl   $0x6b6f,-0x297(%ebp)
 820e652:	6b 00 00 
 820e655:	c6 85 6d fd ff ff 00 	movb   $0x0,-0x293(%ebp)
 820e65c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e65f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e666:	00 
 820e667:	89 04 24             	mov    %eax,(%esp)
 820e66a:	e8 bd 13 02 00       	call   822fa2c <_ZN15CUserCharacInfo26setUpgradeSeparateTrueFlagEc>
 820e66f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e672:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e679:	00 
 820e67a:	89 04 24             	mov    %eax,(%esp)
 820e67d:	e8 d2 13 02 00       	call   822fa54 <_ZN15CUserCharacInfo27setUpgradeSeparateFalseFlagEc>
 820e682:	8d 85 69 fd ff ff    	lea    -0x297(%ebp),%eax
 820e688:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e68c:	c7 44 24 04 43 2e bc 	movl   $0x8bc2e43,0x4(%esp)
 820e693:	08 
 820e694:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e69a:	89 04 24             	mov    %eax,(%esp)
 820e69d:	e8 9e fd e6 ff       	call   807e440 <sprintf@plt>
 820e6a2:	eb 44                	jmp    820e6e8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x27bc>
 820e6a4:	c7 85 64 fd ff ff 65 	movl   $0x646e65,-0x29c(%ebp)
 820e6ab:	6e 64 00 
 820e6ae:	c6 85 68 fd ff ff 00 	movb   $0x0,-0x298(%ebp)
 820e6b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e6b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e6bf:	00 
 820e6c0:	89 04 24             	mov    %eax,(%esp)
 820e6c3:	e8 8c 13 02 00       	call   822fa54 <_ZN15CUserCharacInfo27setUpgradeSeparateFalseFlagEc>
 820e6c8:	8d 85 64 fd ff ff    	lea    -0x29c(%ebp),%eax
 820e6ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e6d2:	c7 44 24 04 43 2e bc 	movl   $0x8bc2e43,0x4(%esp)
 820e6d9:	08 
 820e6da:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e6e0:	89 04 24             	mov    %eax,(%esp)
 820e6e3:	e8 58 fd e6 ff       	call   807e440 <sprintf@plt>
 820e6e8:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 820e6ef:	00 
 820e6f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e6f7:	00 
 820e6f8:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e6fe:	89 04 24             	mov    %eax,(%esp)
 820e701:	e8 f6 d1 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820e706:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e70d:	00 
 820e70e:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e714:	89 04 24             	mov    %eax,(%esp)
 820e717:	e8 04 d2 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820e71c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e723:	00 
 820e724:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e72a:	89 04 24             	mov    %eax,(%esp)
 820e72d:	e8 72 b7 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 820e732:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e739:	00 
 820e73a:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e740:	89 04 24             	mov    %eax,(%esp)
 820e743:	e8 d8 d1 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820e748:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e74e:	89 04 24             	mov    %eax,(%esp)
 820e751:	e8 5a fc e6 ff       	call   807e3b0 <strlen@plt>
 820e756:	89 44 24 04          	mov    %eax,0x4(%esp)
 820e75a:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e760:	89 04 24             	mov    %eax,(%esp)
 820e763:	e8 d4 d1 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 820e768:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e76e:	89 04 24             	mov    %eax,(%esp)
 820e771:	e8 3a fc e6 ff       	call   807e3b0 <strlen@plt>
 820e776:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e77a:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820e780:	89 44 24 04          	mov    %eax,0x4(%esp)
 820e784:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e78a:	89 04 24             	mov    %eax,(%esp)
 820e78d:	e8 52 8c fa ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 820e792:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e799:	00 
 820e79a:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e7a0:	89 04 24             	mov    %eax,(%esp)
 820e7a3:	e8 b0 d1 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820e7a8:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e7ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 820e7b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e7b5:	89 04 24             	mov    %eax,(%esp)
 820e7b8:	e8 fd 9d 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820e7bd:	bb 00 00 00 00       	mov    $0x0,%ebx
 820e7c2:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e7c8:	89 04 24             	mov    %eax,(%esp)
 820e7cb:	e8 b0 f6 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820e7d0:	e9 8a 4c 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820e7d5:	89 d3                	mov    %edx,%ebx
 820e7d7:	89 c6                	mov    %eax,%esi
 820e7d9:	8d 85 78 fd ff ff    	lea    -0x288(%ebp),%eax
 820e7df:	89 04 24             	mov    %eax,(%esp)
 820e7e2:	e8 99 f6 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820e7e7:	89 f0                	mov    %esi,%eax
 820e7e9:	89 da                	mov    %ebx,%edx
 820e7eb:	e9 57 4c 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820e7f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e7f7:	00 
 820e7f8:	8b 45 14             	mov    0x14(%ebp),%eax
 820e7fb:	89 04 24             	mov    %eax,(%esp)
 820e7fe:	e8 cb 92 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e803:	c7 44 24 04 59 2e bc 	movl   $0x8bc2e59,0x4(%esp)
 820e80a:	08 
 820e80b:	89 04 24             	mov    %eax,(%esp)
 820e80e:	e8 8e 21 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e813:	84 c0                	test   %al,%al
 820e815:	74 37                	je     820e84e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2922>
 820e817:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e81e:	00 
 820e81f:	8b 45 14             	mov    0x14(%ebp),%eax
 820e822:	89 04 24             	mov    %eax,(%esp)
 820e825:	e8 a4 92 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e82a:	89 04 24             	mov    %eax,(%esp)
 820e82d:	e8 be 7c 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e832:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e836:	c7 44 24 04 3f 00 00 	movl   $0x3f,0x4(%esp)
 820e83d:	00 
 820e83e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e841:	89 04 24             	mov    %eax,(%esp)
 820e844:	e8 47 d2 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e849:	e9 f2 4b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e84e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e855:	00 
 820e856:	8b 45 14             	mov    0x14(%ebp),%eax
 820e859:	89 04 24             	mov    %eax,(%esp)
 820e85c:	e8 6d 92 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e861:	c7 44 24 04 62 2e bc 	movl   $0x8bc2e62,0x4(%esp)
 820e868:	08 
 820e869:	89 04 24             	mov    %eax,(%esp)
 820e86c:	e8 30 21 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e871:	84 c0                	test   %al,%al
 820e873:	74 37                	je     820e8ac <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2980>
 820e875:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e87c:	00 
 820e87d:	8b 45 14             	mov    0x14(%ebp),%eax
 820e880:	89 04 24             	mov    %eax,(%esp)
 820e883:	e8 46 92 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e888:	89 04 24             	mov    %eax,(%esp)
 820e88b:	e8 60 7c 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e890:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e894:	c7 44 24 04 42 00 00 	movl   $0x42,0x4(%esp)
 820e89b:	00 
 820e89c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e89f:	89 04 24             	mov    %eax,(%esp)
 820e8a2:	e8 e9 d1 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e8a7:	e9 94 4b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e8ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e8b3:	00 
 820e8b4:	8b 45 14             	mov    0x14(%ebp),%eax
 820e8b7:	89 04 24             	mov    %eax,(%esp)
 820e8ba:	e8 0f 92 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e8bf:	c7 44 24 04 6d 2e bc 	movl   $0x8bc2e6d,0x4(%esp)
 820e8c6:	08 
 820e8c7:	89 04 24             	mov    %eax,(%esp)
 820e8ca:	e8 d2 20 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e8cf:	84 c0                	test   %al,%al
 820e8d1:	74 37                	je     820e90a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x29de>
 820e8d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e8da:	00 
 820e8db:	8b 45 14             	mov    0x14(%ebp),%eax
 820e8de:	89 04 24             	mov    %eax,(%esp)
 820e8e1:	e8 e8 91 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e8e6:	89 04 24             	mov    %eax,(%esp)
 820e8e9:	e8 02 7c 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e8ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e8f2:	c7 44 24 04 2c 00 00 	movl   $0x2c,0x4(%esp)
 820e8f9:	00 
 820e8fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e8fd:	89 04 24             	mov    %eax,(%esp)
 820e900:	e8 8b d1 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e905:	e9 36 4b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e90a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e911:	00 
 820e912:	8b 45 14             	mov    0x14(%ebp),%eax
 820e915:	89 04 24             	mov    %eax,(%esp)
 820e918:	e8 b1 91 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e91d:	c7 44 24 04 76 2e bc 	movl   $0x8bc2e76,0x4(%esp)
 820e924:	08 
 820e925:	89 04 24             	mov    %eax,(%esp)
 820e928:	e8 74 20 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e92d:	84 c0                	test   %al,%al
 820e92f:	74 37                	je     820e968 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2a3c>
 820e931:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e938:	00 
 820e939:	8b 45 14             	mov    0x14(%ebp),%eax
 820e93c:	89 04 24             	mov    %eax,(%esp)
 820e93f:	e8 8a 91 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e944:	89 04 24             	mov    %eax,(%esp)
 820e947:	e8 a4 7b 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e94c:	89 44 24 08          	mov    %eax,0x8(%esp)
 820e950:	c7 44 24 04 2d 00 00 	movl   $0x2d,0x4(%esp)
 820e957:	00 
 820e958:	8b 45 0c             	mov    0xc(%ebp),%eax
 820e95b:	89 04 24             	mov    %eax,(%esp)
 820e95e:	e8 2d d1 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820e963:	e9 d8 4a 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820e968:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820e96f:	00 
 820e970:	8b 45 14             	mov    0x14(%ebp),%eax
 820e973:	89 04 24             	mov    %eax,(%esp)
 820e976:	e8 53 91 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e97b:	c7 44 24 04 81 2e bc 	movl   $0x8bc2e81,0x4(%esp)
 820e982:	08 
 820e983:	89 04 24             	mov    %eax,(%esp)
 820e986:	e8 16 20 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820e98b:	84 c0                	test   %al,%al
 820e98d:	0f 84 af 00 00 00    	je     820ea42 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2b16>
 820e993:	8d 9d 98 f9 ff ff    	lea    -0x668(%ebp),%ebx
 820e999:	b8 00 00 00 00       	mov    $0x0,%eax
 820e99e:	ba 40 00 00 00       	mov    $0x40,%edx
 820e9a3:	89 df                	mov    %ebx,%edi
 820e9a5:	89 d1                	mov    %edx,%ecx
 820e9a7:	f3 ab                	rep stos %eax,%es:(%edi)
 820e9a9:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 820e9b0:	00 
 820e9b1:	8b 45 14             	mov    0x14(%ebp),%eax
 820e9b4:	89 04 24             	mov    %eax,(%esp)
 820e9b7:	e8 12 91 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e9bc:	89 04 24             	mov    %eax,(%esp)
 820e9bf:	e8 2c 7b 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e9c4:	89 c6                	mov    %eax,%esi
 820e9c6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820e9cd:	00 
 820e9ce:	8b 45 14             	mov    0x14(%ebp),%eax
 820e9d1:	89 04 24             	mov    %eax,(%esp)
 820e9d4:	e8 f5 90 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e9d9:	89 04 24             	mov    %eax,(%esp)
 820e9dc:	e8 0f 7b 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e9e1:	89 c3                	mov    %eax,%ebx
 820e9e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820e9ea:	00 
 820e9eb:	8b 45 14             	mov    0x14(%ebp),%eax
 820e9ee:	89 04 24             	mov    %eax,(%esp)
 820e9f1:	e8 d8 90 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820e9f6:	89 04 24             	mov    %eax,(%esp)
 820e9f9:	e8 f2 7a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820e9fe:	89 74 24 10          	mov    %esi,0x10(%esp)
 820ea02:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820ea06:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ea0a:	c7 44 24 04 8c 2e bc 	movl   $0x8bc2e8c,0x4(%esp)
 820ea11:	08 
 820ea12:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820ea18:	89 04 24             	mov    %eax,(%esp)
 820ea1b:	e8 20 fa e6 ff       	call   807e440 <sprintf@plt>
 820ea20:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820ea26:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ea2a:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 820ea31:	00 
 820ea32:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ea35:	89 04 24             	mov    %eax,(%esp)
 820ea38:	e8 53 d0 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ea3d:	e9 fe 49 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ea42:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ea49:	00 
 820ea4a:	8b 45 14             	mov    0x14(%ebp),%eax
 820ea4d:	89 04 24             	mov    %eax,(%esp)
 820ea50:	e8 79 90 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ea55:	c7 44 24 04 95 2e bc 	movl   $0x8bc2e95,0x4(%esp)
 820ea5c:	08 
 820ea5d:	89 04 24             	mov    %eax,(%esp)
 820ea60:	e8 3c 1f e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ea65:	84 c0                	test   %al,%al
 820ea67:	74 37                	je     820eaa0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2b74>
 820ea69:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ea70:	00 
 820ea71:	8b 45 14             	mov    0x14(%ebp),%eax
 820ea74:	89 04 24             	mov    %eax,(%esp)
 820ea77:	e8 52 90 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ea7c:	89 04 24             	mov    %eax,(%esp)
 820ea7f:	e8 6c 7a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ea84:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ea88:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 820ea8f:	00 
 820ea90:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ea93:	89 04 24             	mov    %eax,(%esp)
 820ea96:	e8 f5 cf ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ea9b:	e9 a0 49 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820eaa0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820eaa7:	00 
 820eaa8:	8b 45 14             	mov    0x14(%ebp),%eax
 820eaab:	89 04 24             	mov    %eax,(%esp)
 820eaae:	e8 1b 90 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eab3:	c7 44 24 04 9e 2e bc 	movl   $0x8bc2e9e,0x4(%esp)
 820eaba:	08 
 820eabb:	89 04 24             	mov    %eax,(%esp)
 820eabe:	e8 de 1e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820eac3:	84 c0                	test   %al,%al
 820eac5:	74 37                	je     820eafe <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2bd2>
 820eac7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820eace:	00 
 820eacf:	8b 45 14             	mov    0x14(%ebp),%eax
 820ead2:	89 04 24             	mov    %eax,(%esp)
 820ead5:	e8 f4 8f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eada:	89 04 24             	mov    %eax,(%esp)
 820eadd:	e8 0e 7a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820eae2:	89 44 24 08          	mov    %eax,0x8(%esp)
 820eae6:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 820eaed:	00 
 820eaee:	8b 45 0c             	mov    0xc(%ebp),%eax
 820eaf1:	89 04 24             	mov    %eax,(%esp)
 820eaf4:	e8 97 cf ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820eaf9:	e9 42 49 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820eafe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820eb05:	00 
 820eb06:	8b 45 14             	mov    0x14(%ebp),%eax
 820eb09:	89 04 24             	mov    %eax,(%esp)
 820eb0c:	e8 bd 8f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eb11:	c7 44 24 04 a8 2e bc 	movl   $0x8bc2ea8,0x4(%esp)
 820eb18:	08 
 820eb19:	89 04 24             	mov    %eax,(%esp)
 820eb1c:	e8 80 1e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820eb21:	84 c0                	test   %al,%al
 820eb23:	74 37                	je     820eb5c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2c30>
 820eb25:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820eb2c:	00 
 820eb2d:	8b 45 14             	mov    0x14(%ebp),%eax
 820eb30:	89 04 24             	mov    %eax,(%esp)
 820eb33:	e8 96 8f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eb38:	89 04 24             	mov    %eax,(%esp)
 820eb3b:	e8 b0 79 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820eb40:	89 44 24 08          	mov    %eax,0x8(%esp)
 820eb44:	c7 44 24 04 31 00 00 	movl   $0x31,0x4(%esp)
 820eb4b:	00 
 820eb4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820eb4f:	89 04 24             	mov    %eax,(%esp)
 820eb52:	e8 39 cf ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820eb57:	e9 e4 48 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820eb5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820eb63:	00 
 820eb64:	8b 45 14             	mov    0x14(%ebp),%eax
 820eb67:	89 04 24             	mov    %eax,(%esp)
 820eb6a:	e8 5f 8f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eb6f:	c7 44 24 04 b0 2e bc 	movl   $0x8bc2eb0,0x4(%esp)
 820eb76:	08 
 820eb77:	89 04 24             	mov    %eax,(%esp)
 820eb7a:	e8 22 1e e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820eb7f:	84 c0                	test   %al,%al
 820eb81:	74 62                	je     820ebe5 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2cb9>
 820eb83:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820eb8a:	00 
 820eb8b:	8b 45 14             	mov    0x14(%ebp),%eax
 820eb8e:	89 04 24             	mov    %eax,(%esp)
 820eb91:	e8 38 8f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eb96:	c7 44 24 04 b6 2e bc 	movl   $0x8bc2eb6,0x4(%esp)
 820eb9d:	08 
 820eb9e:	89 04 24             	mov    %eax,(%esp)
 820eba1:	e8 fb 1d e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820eba6:	84 c0                	test   %al,%al
 820eba8:	0f 84 92 48 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ebae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ebb5:	00 
 820ebb6:	8b 45 14             	mov    0x14(%ebp),%eax
 820ebb9:	89 04 24             	mov    %eax,(%esp)
 820ebbc:	e8 0d 8f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ebc1:	89 04 24             	mov    %eax,(%esp)
 820ebc4:	e8 27 79 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ebc9:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ebcd:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 820ebd4:	00 
 820ebd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ebd8:	89 04 24             	mov    %eax,(%esp)
 820ebdb:	e8 b0 ce ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ebe0:	e9 5b 48 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ebe5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ebec:	00 
 820ebed:	8b 45 14             	mov    0x14(%ebp),%eax
 820ebf0:	89 04 24             	mov    %eax,(%esp)
 820ebf3:	e8 d6 8e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ebf8:	c7 44 24 04 bd 2e bc 	movl   $0x8bc2ebd,0x4(%esp)
 820ebff:	08 
 820ec00:	89 04 24             	mov    %eax,(%esp)
 820ec03:	e8 99 1d e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ec08:	84 c0                	test   %al,%al
 820ec0a:	74 37                	je     820ec43 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2d17>
 820ec0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ec13:	00 
 820ec14:	8b 45 14             	mov    0x14(%ebp),%eax
 820ec17:	89 04 24             	mov    %eax,(%esp)
 820ec1a:	e8 af 8e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ec1f:	89 04 24             	mov    %eax,(%esp)
 820ec22:	e8 c9 78 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ec27:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ec2b:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 820ec32:	00 
 820ec33:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ec36:	89 04 24             	mov    %eax,(%esp)
 820ec39:	e8 52 ce ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ec3e:	e9 fd 47 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ec43:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ec4a:	00 
 820ec4b:	8b 45 14             	mov    0x14(%ebp),%eax
 820ec4e:	89 04 24             	mov    %eax,(%esp)
 820ec51:	e8 78 8e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ec56:	c7 44 24 04 c7 2e bc 	movl   $0x8bc2ec7,0x4(%esp)
 820ec5d:	08 
 820ec5e:	89 04 24             	mov    %eax,(%esp)
 820ec61:	e8 3b 1d e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ec66:	84 c0                	test   %al,%al
 820ec68:	74 37                	je     820eca1 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2d75>
 820ec6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ec71:	00 
 820ec72:	8b 45 14             	mov    0x14(%ebp),%eax
 820ec75:	89 04 24             	mov    %eax,(%esp)
 820ec78:	e8 51 8e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ec7d:	89 04 24             	mov    %eax,(%esp)
 820ec80:	e8 6b 78 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ec85:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ec89:	c7 44 24 04 34 00 00 	movl   $0x34,0x4(%esp)
 820ec90:	00 
 820ec91:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ec94:	89 04 24             	mov    %eax,(%esp)
 820ec97:	e8 f4 cd ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ec9c:	e9 9f 47 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820eca1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820eca8:	00 
 820eca9:	8b 45 14             	mov    0x14(%ebp),%eax
 820ecac:	89 04 24             	mov    %eax,(%esp)
 820ecaf:	e8 1a 8e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ecb4:	c7 44 24 04 d0 2e bc 	movl   $0x8bc2ed0,0x4(%esp)
 820ecbb:	08 
 820ecbc:	89 04 24             	mov    %eax,(%esp)
 820ecbf:	e8 dd 1c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ecc4:	84 c0                	test   %al,%al
 820ecc6:	75 27                	jne    820ecef <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2dc3>
 820ecc8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820eccf:	00 
 820ecd0:	8b 45 14             	mov    0x14(%ebp),%eax
 820ecd3:	89 04 24             	mov    %eax,(%esp)
 820ecd6:	e8 f3 8d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ecdb:	c7 44 24 04 de 2e bc 	movl   $0x8bc2ede,0x4(%esp)
 820ece2:	08 
 820ece3:	89 04 24             	mov    %eax,(%esp)
 820ece6:	e8 b6 1c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820eceb:	84 c0                	test   %al,%al
 820eced:	74 07                	je     820ecf6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2dca>
 820ecef:	b8 01 00 00 00       	mov    $0x1,%eax
 820ecf4:	eb 05                	jmp    820ecfb <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2dcf>
 820ecf6:	b8 00 00 00 00       	mov    $0x0,%eax
 820ecfb:	84 c0                	test   %al,%al
 820ecfd:	74 37                	je     820ed36 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2e0a>
 820ecff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ed06:	00 
 820ed07:	8b 45 14             	mov    0x14(%ebp),%eax
 820ed0a:	89 04 24             	mov    %eax,(%esp)
 820ed0d:	e8 bc 8d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ed12:	89 04 24             	mov    %eax,(%esp)
 820ed15:	e8 d6 77 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ed1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ed1e:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 820ed25:	00 
 820ed26:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ed29:	89 04 24             	mov    %eax,(%esp)
 820ed2c:	e8 5f cd ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ed31:	e9 0a 47 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ed36:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ed3d:	00 
 820ed3e:	8b 45 14             	mov    0x14(%ebp),%eax
 820ed41:	89 04 24             	mov    %eax,(%esp)
 820ed44:	e8 85 8d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ed49:	c7 44 24 04 e1 2e bc 	movl   $0x8bc2ee1,0x4(%esp)
 820ed50:	08 
 820ed51:	89 04 24             	mov    %eax,(%esp)
 820ed54:	e8 48 1c e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ed59:	84 c0                	test   %al,%al
 820ed5b:	74 37                	je     820ed94 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2e68>
 820ed5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ed64:	00 
 820ed65:	8b 45 14             	mov    0x14(%ebp),%eax
 820ed68:	89 04 24             	mov    %eax,(%esp)
 820ed6b:	e8 5e 8d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ed70:	89 04 24             	mov    %eax,(%esp)
 820ed73:	e8 78 77 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ed78:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ed7c:	c7 44 24 04 3d 00 00 	movl   $0x3d,0x4(%esp)
 820ed83:	00 
 820ed84:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ed87:	89 04 24             	mov    %eax,(%esp)
 820ed8a:	e8 01 cd ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ed8f:	e9 ac 46 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ed94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ed9b:	00 
 820ed9c:	8b 45 14             	mov    0x14(%ebp),%eax
 820ed9f:	89 04 24             	mov    %eax,(%esp)
 820eda2:	e8 27 8d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eda7:	c7 44 24 04 ea 2e bc 	movl   $0x8bc2eea,0x4(%esp)
 820edae:	08 
 820edaf:	89 04 24             	mov    %eax,(%esp)
 820edb2:	e8 ea 1b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820edb7:	84 c0                	test   %al,%al
 820edb9:	0f 84 c0 00 00 00    	je     820ee7f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2f53>
 820edbf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820edc6:	00 
 820edc7:	8b 45 14             	mov    0x14(%ebp),%eax
 820edca:	89 04 24             	mov    %eax,(%esp)
 820edcd:	e8 fc 8c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820edd2:	c7 44 24 04 ed 2e bc 	movl   $0x8bc2eed,0x4(%esp)
 820edd9:	08 
 820edda:	89 04 24             	mov    %eax,(%esp)
 820eddd:	e8 bf 1b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ede2:	84 c0                	test   %al,%al
 820ede4:	74 37                	je     820ee1d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2ef1>
 820ede6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820eded:	00 
 820edee:	8b 45 14             	mov    0x14(%ebp),%eax
 820edf1:	89 04 24             	mov    %eax,(%esp)
 820edf4:	e8 d5 8c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820edf9:	89 04 24             	mov    %eax,(%esp)
 820edfc:	e8 ef 76 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ee01:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ee05:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 820ee0c:	00 
 820ee0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ee10:	89 04 24             	mov    %eax,(%esp)
 820ee13:	e8 78 cc ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ee18:	e9 23 46 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ee1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ee24:	00 
 820ee25:	8b 45 14             	mov    0x14(%ebp),%eax
 820ee28:	89 04 24             	mov    %eax,(%esp)
 820ee2b:	e8 9e 8c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ee30:	c7 44 24 04 f2 2e bc 	movl   $0x8bc2ef2,0x4(%esp)
 820ee37:	08 
 820ee38:	89 04 24             	mov    %eax,(%esp)
 820ee3b:	e8 61 1b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ee40:	84 c0                	test   %al,%al
 820ee42:	0f 84 f8 45 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ee48:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ee4f:	00 
 820ee50:	8b 45 14             	mov    0x14(%ebp),%eax
 820ee53:	89 04 24             	mov    %eax,(%esp)
 820ee56:	e8 73 8c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ee5b:	89 04 24             	mov    %eax,(%esp)
 820ee5e:	e8 8d 76 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ee63:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ee67:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 820ee6e:	00 
 820ee6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ee72:	89 04 24             	mov    %eax,(%esp)
 820ee75:	e8 16 cc ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ee7a:	e9 c1 45 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ee7f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ee86:	00 
 820ee87:	8b 45 14             	mov    0x14(%ebp),%eax
 820ee8a:	89 04 24             	mov    %eax,(%esp)
 820ee8d:	e8 3c 8c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ee92:	c7 44 24 04 f8 2e bc 	movl   $0x8bc2ef8,0x4(%esp)
 820ee99:	08 
 820ee9a:	89 04 24             	mov    %eax,(%esp)
 820ee9d:	e8 ff 1a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820eea2:	84 c0                	test   %al,%al
 820eea4:	74 37                	je     820eedd <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x2fb1>
 820eea6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820eead:	00 
 820eeae:	8b 45 14             	mov    0x14(%ebp),%eax
 820eeb1:	89 04 24             	mov    %eax,(%esp)
 820eeb4:	e8 15 8c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eeb9:	89 04 24             	mov    %eax,(%esp)
 820eebc:	e8 2f 76 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820eec1:	89 44 24 08          	mov    %eax,0x8(%esp)
 820eec5:	c7 44 24 04 76 00 00 	movl   $0x76,0x4(%esp)
 820eecc:	00 
 820eecd:	8b 45 0c             	mov    0xc(%ebp),%eax
 820eed0:	89 04 24             	mov    %eax,(%esp)
 820eed3:	e8 b8 cb ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820eed8:	e9 63 45 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820eedd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820eee4:	00 
 820eee5:	8b 45 14             	mov    0x14(%ebp),%eax
 820eee8:	89 04 24             	mov    %eax,(%esp)
 820eeeb:	e8 de 8b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820eef0:	c7 44 24 04 03 2f bc 	movl   $0x8bc2f03,0x4(%esp)
 820eef7:	08 
 820eef8:	89 04 24             	mov    %eax,(%esp)
 820eefb:	e8 a1 1a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ef00:	84 c0                	test   %al,%al
 820ef02:	74 37                	je     820ef3b <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x300f>
 820ef04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ef0b:	00 
 820ef0c:	8b 45 14             	mov    0x14(%ebp),%eax
 820ef0f:	89 04 24             	mov    %eax,(%esp)
 820ef12:	e8 b7 8b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ef17:	89 04 24             	mov    %eax,(%esp)
 820ef1a:	e8 d1 75 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ef1f:	89 44 24 08          	mov    %eax,0x8(%esp)
 820ef23:	c7 44 24 04 78 00 00 	movl   $0x78,0x4(%esp)
 820ef2a:	00 
 820ef2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ef2e:	89 04 24             	mov    %eax,(%esp)
 820ef31:	e8 5a cb ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820ef36:	e9 05 45 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ef3b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ef42:	00 
 820ef43:	8b 45 14             	mov    0x14(%ebp),%eax
 820ef46:	89 04 24             	mov    %eax,(%esp)
 820ef49:	e8 80 8b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ef4e:	c7 44 24 04 0e 2f bc 	movl   $0x8bc2f0e,0x4(%esp)
 820ef55:	08 
 820ef56:	89 04 24             	mov    %eax,(%esp)
 820ef59:	e8 43 1a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ef5e:	84 c0                	test   %al,%al
 820ef60:	0f 84 8e 00 00 00    	je     820eff4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x30c8>
 820ef66:	8d 9d 98 f9 ff ff    	lea    -0x668(%ebp),%ebx
 820ef6c:	b8 00 00 00 00       	mov    $0x0,%eax
 820ef71:	ba 40 00 00 00       	mov    $0x40,%edx
 820ef76:	89 df                	mov    %ebx,%edi
 820ef78:	89 d1                	mov    %edx,%ecx
 820ef7a:	f3 ab                	rep stos %eax,%es:(%edi)
 820ef7c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820ef83:	00 
 820ef84:	8b 45 14             	mov    0x14(%ebp),%eax
 820ef87:	89 04 24             	mov    %eax,(%esp)
 820ef8a:	e8 3f 8b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ef8f:	89 04 24             	mov    %eax,(%esp)
 820ef92:	e8 59 75 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ef97:	89 c3                	mov    %eax,%ebx
 820ef99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820efa0:	00 
 820efa1:	8b 45 14             	mov    0x14(%ebp),%eax
 820efa4:	89 04 24             	mov    %eax,(%esp)
 820efa7:	e8 22 8b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820efac:	89 04 24             	mov    %eax,(%esp)
 820efaf:	e8 3c 75 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820efb4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820efb8:	89 44 24 08          	mov    %eax,0x8(%esp)
 820efbc:	c7 44 24 04 f8 2c bc 	movl   $0x8bc2cf8,0x4(%esp)
 820efc3:	08 
 820efc4:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820efca:	89 04 24             	mov    %eax,(%esp)
 820efcd:	e8 6e f4 e6 ff       	call   807e440 <sprintf@plt>
 820efd2:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820efd8:	89 44 24 08          	mov    %eax,0x8(%esp)
 820efdc:	c7 44 24 04 7d 00 00 	movl   $0x7d,0x4(%esp)
 820efe3:	00 
 820efe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 820efe7:	89 04 24             	mov    %eax,(%esp)
 820efea:	e8 a1 ca ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 820efef:	e9 4c 44 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820eff4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820effb:	00 
 820effc:	8b 45 14             	mov    0x14(%ebp),%eax
 820efff:	89 04 24             	mov    %eax,(%esp)
 820f002:	e8 c7 8a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f007:	c7 44 24 04 19 2f bc 	movl   $0x8bc2f19,0x4(%esp)
 820f00e:	08 
 820f00f:	89 04 24             	mov    %eax,(%esp)
 820f012:	e8 8a 19 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f017:	84 c0                	test   %al,%al
 820f019:	0f 84 f8 01 00 00    	je     820f217 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x32eb>
 820f01f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f026:	00 
 820f027:	8b 45 14             	mov    0x14(%ebp),%eax
 820f02a:	89 04 24             	mov    %eax,(%esp)
 820f02d:	e8 9c 8a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f032:	c7 44 24 04 b3 2c bc 	movl   $0x8bc2cb3,0x4(%esp)
 820f039:	08 
 820f03a:	89 04 24             	mov    %eax,(%esp)
 820f03d:	e8 5f 19 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f042:	84 c0                	test   %al,%al
 820f044:	0f 84 f6 43 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f04a:	e8 4c d1 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 820f04f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820f056:	00 
 820f057:	89 04 24             	mov    %eax,(%esp)
 820f05a:	e8 d9 c5 01 00       	call   822b638 <_ZN12CDataManager21get_limit_inout_countE15ENUM_BLOOD_TYPE>
 820f05f:	0f be d0             	movsbl %al,%edx
 820f062:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f065:	89 54 24 08          	mov    %edx,0x8(%esp)
 820f069:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820f070:	00 
 820f071:	89 04 24             	mov    %eax,(%esp)
 820f074:	e8 53 01 02 00       	call   822f1cc <_ZN15CUserCharacInfo21setUltimateInoutValueEcc>
 820f079:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 820f07f:	89 04 24             	mov    %eax,(%esp)
 820f082:	e8 49 10 4d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 820f087:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 820f08d:	89 44 24 08          	mov    %eax,0x8(%esp)
 820f091:	c7 44 24 04 20 2f bc 	movl   $0x8bc2f20,0x4(%esp)
 820f098:	08 
 820f099:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 820f09f:	89 04 24             	mov    %eax,(%esp)
 820f0a2:	e8 89 85 4f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 820f0a7:	eb 1b                	jmp    820f0c4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3198>
 820f0a9:	89 d3                	mov    %edx,%ebx
 820f0ab:	89 c6                	mov    %eax,%esi
 820f0ad:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 820f0b3:	89 04 24             	mov    %eax,(%esp)
 820f0b6:	e8 35 10 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820f0bb:	89 f0                	mov    %esi,%eax
 820f0bd:	89 da                	mov    %ebx,%edx
 820f0bf:	e9 83 43 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820f0c4:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 820f0ca:	89 04 24             	mov    %eax,(%esp)
 820f0cd:	e8 1e 10 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820f0d2:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f0d8:	89 04 24             	mov    %eax,(%esp)
 820f0db:	e8 6c ec 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820f0e0:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 820f0e7:	00 
 820f0e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f0ef:	00 
 820f0f0:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f0f6:	89 04 24             	mov    %eax,(%esp)
 820f0f9:	e8 fe c7 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820f0fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f105:	00 
 820f106:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f10c:	89 04 24             	mov    %eax,(%esp)
 820f10f:	e8 0c c8 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820f114:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f11b:	00 
 820f11c:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f122:	89 04 24             	mov    %eax,(%esp)
 820f125:	e8 7a ad ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 820f12a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f131:	00 
 820f132:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f138:	89 04 24             	mov    %eax,(%esp)
 820f13b:	e8 e0 c7 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820f140:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 820f146:	89 04 24             	mov    %eax,(%esp)
 820f149:	e8 12 75 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820f14e:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f152:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f158:	89 04 24             	mov    %eax,(%esp)
 820f15b:	e8 dc c7 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 820f160:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 820f166:	89 04 24             	mov    %eax,(%esp)
 820f169:	e8 f2 74 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820f16e:	89 c3                	mov    %eax,%ebx
 820f170:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 820f176:	89 04 24             	mov    %eax,(%esp)
 820f179:	e8 72 73 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820f17e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820f182:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f186:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f18c:	89 04 24             	mov    %eax,(%esp)
 820f18f:	e8 dc c5 01 00       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 820f194:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f19b:	00 
 820f19c:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f1a2:	89 04 24             	mov    %eax,(%esp)
 820f1a5:	e8 ae c7 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820f1aa:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f1b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f1b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f1b7:	89 04 24             	mov    %eax,(%esp)
 820f1ba:	e8 fb 93 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820f1bf:	eb 18                	jmp    820f1d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x32ad>
 820f1c1:	89 d3                	mov    %edx,%ebx
 820f1c3:	89 c6                	mov    %eax,%esi
 820f1c5:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f1cb:	89 04 24             	mov    %eax,(%esp)
 820f1ce:	e8 ad ec 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820f1d3:	89 f0                	mov    %esi,%eax
 820f1d5:	89 da                	mov    %ebx,%edx
 820f1d7:	eb 10                	jmp    820f1e9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x32bd>
 820f1d9:	8d 85 54 fd ff ff    	lea    -0x2ac(%ebp),%eax
 820f1df:	89 04 24             	mov    %eax,(%esp)
 820f1e2:	e8 99 ec 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820f1e7:	eb 1b                	jmp    820f204 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x32d8>
 820f1e9:	89 d3                	mov    %edx,%ebx
 820f1eb:	89 c6                	mov    %eax,%esi
 820f1ed:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 820f1f3:	89 04 24             	mov    %eax,(%esp)
 820f1f6:	e8 e5 89 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820f1fb:	89 f0                	mov    %esi,%eax
 820f1fd:	89 da                	mov    %ebx,%edx
 820f1ff:	e9 43 42 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820f204:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 820f20a:	89 04 24             	mov    %eax,(%esp)
 820f20d:	e8 ce 89 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820f212:	e9 29 42 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f217:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f21e:	00 
 820f21f:	8b 45 14             	mov    0x14(%ebp),%eax
 820f222:	89 04 24             	mov    %eax,(%esp)
 820f225:	e8 a4 88 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f22a:	c7 44 24 04 3f 2f bc 	movl   $0x8bc2f3f,0x4(%esp)
 820f231:	08 
 820f232:	89 04 24             	mov    %eax,(%esp)
 820f235:	e8 67 17 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f23a:	84 c0                	test   %al,%al
 820f23c:	0f 84 20 02 00 00    	je     820f462 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3536>
 820f242:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f249:	00 
 820f24a:	8b 45 14             	mov    0x14(%ebp),%eax
 820f24d:	89 04 24             	mov    %eax,(%esp)
 820f250:	e8 79 88 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f255:	c7 44 24 04 b3 2c bc 	movl   $0x8bc2cb3,0x4(%esp)
 820f25c:	08 
 820f25d:	89 04 24             	mov    %eax,(%esp)
 820f260:	e8 3c 17 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f265:	84 c0                	test   %al,%al
 820f267:	0f 84 d3 41 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f26d:	c7 85 0c ff ff ff 00 	movl   $0x0,-0xf4(%ebp)
 820f274:	00 00 00 
 820f277:	eb 3d                	jmp    820f2b6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x338a>
 820f279:	e8 1d cf eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 820f27e:	8b 95 0c ff ff ff    	mov    -0xf4(%ebp),%edx
 820f284:	89 54 24 04          	mov    %edx,0x4(%esp)
 820f288:	89 04 24             	mov    %eax,(%esp)
 820f28b:	e8 82 c3 01 00       	call   822b612 <_ZN12CDataManager18get_dimensionInoutEi>
 820f290:	0f be c8             	movsbl %al,%ecx
 820f293:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 820f299:	0f be d0             	movsbl %al,%edx
 820f29c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f29f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 820f2a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 820f2a7:	89 04 24             	mov    %eax,(%esp)
 820f2aa:	e8 d5 fe 01 00       	call   822f184 <_ZN15CUserCharacInfo22setDemensionInoutValueEcc>
 820f2af:	83 85 0c ff ff ff 01 	addl   $0x1,-0xf4(%ebp)
 820f2b6:	83 bd 0c ff ff ff 05 	cmpl   $0x5,-0xf4(%ebp)
 820f2bd:	0f 9e c0             	setle  %al
 820f2c0:	84 c0                	test   %al,%al
 820f2c2:	75 b5                	jne    820f279 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x334d>
 820f2c4:	8d 85 b9 fd ff ff    	lea    -0x247(%ebp),%eax
 820f2ca:	89 04 24             	mov    %eax,(%esp)
 820f2cd:	e8 fe 0d 4d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 820f2d2:	8d 85 b9 fd ff ff    	lea    -0x247(%ebp),%eax
 820f2d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 820f2dc:	c7 44 24 04 48 2f bc 	movl   $0x8bc2f48,0x4(%esp)
 820f2e3:	08 
 820f2e4:	8d 85 50 fd ff ff    	lea    -0x2b0(%ebp),%eax
 820f2ea:	89 04 24             	mov    %eax,(%esp)
 820f2ed:	e8 3e 83 4f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 820f2f2:	eb 1b                	jmp    820f30f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x33e3>
 820f2f4:	89 d3                	mov    %edx,%ebx
 820f2f6:	89 c6                	mov    %eax,%esi
 820f2f8:	8d 85 b9 fd ff ff    	lea    -0x247(%ebp),%eax
 820f2fe:	89 04 24             	mov    %eax,(%esp)
 820f301:	e8 ea 0d 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820f306:	89 f0                	mov    %esi,%eax
 820f308:	89 da                	mov    %ebx,%edx
 820f30a:	e9 38 41 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820f30f:	8d 85 b9 fd ff ff    	lea    -0x247(%ebp),%eax
 820f315:	89 04 24             	mov    %eax,(%esp)
 820f318:	e8 d3 0d 4d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 820f31d:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f323:	89 04 24             	mov    %eax,(%esp)
 820f326:	e8 21 ea 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820f32b:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 820f332:	00 
 820f333:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f33a:	00 
 820f33b:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f341:	89 04 24             	mov    %eax,(%esp)
 820f344:	e8 b3 c5 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820f349:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f350:	00 
 820f351:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f357:	89 04 24             	mov    %eax,(%esp)
 820f35a:	e8 c1 c5 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820f35f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f366:	00 
 820f367:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f36d:	89 04 24             	mov    %eax,(%esp)
 820f370:	e8 2f ab ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 820f375:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f37c:	00 
 820f37d:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f383:	89 04 24             	mov    %eax,(%esp)
 820f386:	e8 95 c5 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820f38b:	8d 85 50 fd ff ff    	lea    -0x2b0(%ebp),%eax
 820f391:	89 04 24             	mov    %eax,(%esp)
 820f394:	e8 c7 72 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820f399:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f39d:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f3a3:	89 04 24             	mov    %eax,(%esp)
 820f3a6:	e8 91 c5 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 820f3ab:	8d 85 50 fd ff ff    	lea    -0x2b0(%ebp),%eax
 820f3b1:	89 04 24             	mov    %eax,(%esp)
 820f3b4:	e8 a7 72 4f 00       	call   8706660 <_ZNKSs4sizeEv>
 820f3b9:	89 c3                	mov    %eax,%ebx
 820f3bb:	8d 85 50 fd ff ff    	lea    -0x2b0(%ebp),%eax
 820f3c1:	89 04 24             	mov    %eax,(%esp)
 820f3c4:	e8 27 71 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820f3c9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820f3cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f3d1:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f3d7:	89 04 24             	mov    %eax,(%esp)
 820f3da:	e8 91 c3 01 00       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 820f3df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f3e6:	00 
 820f3e7:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f3ed:	89 04 24             	mov    %eax,(%esp)
 820f3f0:	e8 63 c5 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820f3f5:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f3fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f3ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f402:	89 04 24             	mov    %eax,(%esp)
 820f405:	e8 b0 91 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820f40a:	eb 18                	jmp    820f424 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x34f8>
 820f40c:	89 d3                	mov    %edx,%ebx
 820f40e:	89 c6                	mov    %eax,%esi
 820f410:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f416:	89 04 24             	mov    %eax,(%esp)
 820f419:	e8 62 ea 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820f41e:	89 f0                	mov    %esi,%eax
 820f420:	89 da                	mov    %ebx,%edx
 820f422:	eb 10                	jmp    820f434 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3508>
 820f424:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 820f42a:	89 04 24             	mov    %eax,(%esp)
 820f42d:	e8 4e ea 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820f432:	eb 1b                	jmp    820f44f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3523>
 820f434:	89 d3                	mov    %edx,%ebx
 820f436:	89 c6                	mov    %eax,%esi
 820f438:	8d 85 50 fd ff ff    	lea    -0x2b0(%ebp),%eax
 820f43e:	89 04 24             	mov    %eax,(%esp)
 820f441:	e8 9a 87 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820f446:	89 f0                	mov    %esi,%eax
 820f448:	89 da                	mov    %ebx,%edx
 820f44a:	e9 f8 3f 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820f44f:	8d 85 50 fd ff ff    	lea    -0x2b0(%ebp),%eax
 820f455:	89 04 24             	mov    %eax,(%esp)
 820f458:	e8 83 87 4f 00       	call   8707be0 <_ZNSsD1Ev>
 820f45d:	e9 de 3f 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f462:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f469:	00 
 820f46a:	8b 45 14             	mov    0x14(%ebp),%eax
 820f46d:	89 04 24             	mov    %eax,(%esp)
 820f470:	e8 59 86 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f475:	c7 44 24 04 68 2f bc 	movl   $0x8bc2f68,0x4(%esp)
 820f47c:	08 
 820f47d:	89 04 24             	mov    %eax,(%esp)
 820f480:	e8 1c 15 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f485:	84 c0                	test   %al,%al
 820f487:	0f 84 82 00 00 00    	je     820f50f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x35e3>
 820f48d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f494:	00 
 820f495:	8b 45 14             	mov    0x14(%ebp),%eax
 820f498:	89 04 24             	mov    %eax,(%esp)
 820f49b:	e8 2e 86 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f4a0:	c7 44 24 04 64 2c bc 	movl   $0x8bc2c64,0x4(%esp)
 820f4a7:	08 
 820f4a8:	89 04 24             	mov    %eax,(%esp)
 820f4ab:	e8 f1 14 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f4b0:	84 c0                	test   %al,%al
 820f4b2:	74 18                	je     820f4cc <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x35a0>
 820f4b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f4bb:	00 
 820f4bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f4bf:	89 04 24             	mov    %eax,(%esp)
 820f4c2:	e8 33 0d 02 00       	call   82301fa <_ZN5CUser15SetDebugCommandEi>
 820f4c7:	e9 74 3f 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f4cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f4d3:	00 
 820f4d4:	8b 45 14             	mov    0x14(%ebp),%eax
 820f4d7:	89 04 24             	mov    %eax,(%esp)
 820f4da:	e8 ef 85 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f4df:	c7 44 24 04 67 2c bc 	movl   $0x8bc2c67,0x4(%esp)
 820f4e6:	08 
 820f4e7:	89 04 24             	mov    %eax,(%esp)
 820f4ea:	e8 b2 14 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f4ef:	84 c0                	test   %al,%al
 820f4f1:	0f 84 49 3f 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f4f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f4fe:	00 
 820f4ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f502:	89 04 24             	mov    %eax,(%esp)
 820f505:	e8 f0 0c 02 00       	call   82301fa <_ZN5CUser15SetDebugCommandEi>
 820f50a:	e9 31 3f 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f50f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f516:	00 
 820f517:	8b 45 14             	mov    0x14(%ebp),%eax
 820f51a:	89 04 24             	mov    %eax,(%esp)
 820f51d:	e8 ac 85 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f522:	c7 44 24 04 71 2f bc 	movl   $0x8bc2f71,0x4(%esp)
 820f529:	08 
 820f52a:	89 04 24             	mov    %eax,(%esp)
 820f52d:	e8 6f 14 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f532:	84 c0                	test   %al,%al
 820f534:	0f 84 c8 00 00 00    	je     820f602 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x36d6>
 820f53a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f541:	00 
 820f542:	8b 45 14             	mov    0x14(%ebp),%eax
 820f545:	89 04 24             	mov    %eax,(%esp)
 820f548:	e8 81 85 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f54d:	89 04 24             	mov    %eax,(%esp)
 820f550:	e8 9b 6f 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820f555:	89 04 24             	mov    %eax,(%esp)
 820f558:	e8 93 f1 e6 ff       	call   807e6f0 <atoi@plt>
 820f55d:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 820f563:	83 bd 10 ff ff ff 25 	cmpl   $0x25,-0xf0(%ebp)
 820f56a:	7e 0a                	jle    820f576 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x364a>
 820f56c:	bb 00 00 00 00       	mov    $0x0,%ebx
 820f571:	e9 e9 3e 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820f576:	a1 3c f7 41 09       	mov    0x941f73c,%eax
 820f57b:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 820f581:	89 54 24 04          	mov    %edx,0x4(%esp)
 820f585:	89 04 24             	mov    %eax,(%esp)
 820f588:	e8 d3 52 3c 00       	call   85d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>
 820f58d:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 820f593:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f596:	89 04 24             	mov    %eax,(%esp)
 820f599:	e8 cc fb 01 00       	call   822f16a <_ZN15CUserCharacInfo13getPVPResultWEv>
 820f59e:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 820f5a4:	89 50 08             	mov    %edx,0x8(%eax)
 820f5a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f5aa:	89 04 24             	mov    %eax,(%esp)
 820f5ad:	e8 b8 fb 01 00       	call   822f16a <_ZN15CUserCharacInfo13getPVPResultWEv>
 820f5b2:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 820f5b8:	89 50 14             	mov    %edx,0x14(%eax)
 820f5bb:	e8 e7 ad ec ff       	call   80da3a7 <_Z11G_GameWorldv>
 820f5c0:	8b 55 0c             	mov    0xc(%ebp),%edx
 820f5c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 820f5c7:	89 04 24             	mov    %eax,(%esp)
 820f5ca:	e8 2d 8e 4b 00       	call   86c83fc <_ZN9GameWorld17send_AllBasicInfoEP5CUser>
 820f5cf:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 820f5d6:	00 
 820f5d7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820f5de:	00 
 820f5df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f5e6:	00 
 820f5e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f5ea:	89 04 24             	mov    %eax,(%esp)
 820f5ed:	e8 0e 5e 45 00       	call   8665400 <_ZN5CUser16givePvPSkillTreeEibi>
 820f5f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f5f5:	89 04 24             	mov    %eax,(%esp)
 820f5f8:	e8 6d ce 45 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 820f5fd:	e9 3e 3e 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f602:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f609:	00 
 820f60a:	8b 45 14             	mov    0x14(%ebp),%eax
 820f60d:	89 04 24             	mov    %eax,(%esp)
 820f610:	e8 b9 84 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f615:	c7 44 24 04 7f 2f bc 	movl   $0x8bc2f7f,0x4(%esp)
 820f61c:	08 
 820f61d:	89 04 24             	mov    %eax,(%esp)
 820f620:	e8 7c 13 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f625:	84 c0                	test   %al,%al
 820f627:	0f 84 be 00 00 00    	je     820f6eb <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x37bf>
 820f62d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f630:	89 04 24             	mov    %eax,(%esp)
 820f633:	e8 08 fb 01 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 820f638:	89 04 24             	mov    %eax,(%esp)
 820f63b:	e8 c8 57 3f 00       	call   8604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>
 820f640:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f643:	89 04 24             	mov    %eax,(%esp)
 820f646:	e8 f5 fa 01 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 820f64b:	8b 55 0c             	mov    0xc(%ebp),%edx
 820f64e:	89 54 24 04          	mov    %edx,0x4(%esp)
 820f652:	89 04 24             	mov    %eax,(%esp)
 820f655:	e8 d4 f7 01 00       	call   822ee2e <_ZN9SkillSlot10set_parentEP5CUser>
 820f65a:	8d 85 98 fa ff ff    	lea    -0x568(%ebp),%eax
 820f660:	89 04 24             	mov    %eax,(%esp)
 820f663:	e8 56 59 02 00       	call   8234fbe <_ZN8WongWork13CSkillChangerC1Ev>
 820f668:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820f66f:	00 
 820f670:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820f677:	00 
 820f678:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f67b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f67f:	8d 85 98 fa ff ff    	lea    -0x568(%ebp),%eax
 820f685:	89 04 24             	mov    %eax,(%esp)
 820f688:	e8 03 a8 3f 00       	call   8609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>
 820f68d:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 820f694:	00 
 820f695:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820f69c:	00 
 820f69d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f6a4:	00 
 820f6a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f6a8:	89 04 24             	mov    %eax,(%esp)
 820f6ab:	e8 50 5d 45 00       	call   8665400 <_ZN5CUser16givePvPSkillTreeEibi>
 820f6b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f6b3:	89 04 24             	mov    %eax,(%esp)
 820f6b6:	e8 af cd 45 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 820f6bb:	eb 1b                	jmp    820f6d8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x37ac>
 820f6bd:	89 d3                	mov    %edx,%ebx
 820f6bf:	89 c6                	mov    %eax,%esi
 820f6c1:	8d 85 98 fa ff ff    	lea    -0x568(%ebp),%eax
 820f6c7:	89 04 24             	mov    %eax,(%esp)
 820f6ca:	e8 f5 58 02 00       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 820f6cf:	89 f0                	mov    %esi,%eax
 820f6d1:	89 da                	mov    %ebx,%edx
 820f6d3:	e9 6f 3d 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820f6d8:	8d 85 98 fa ff ff    	lea    -0x568(%ebp),%eax
 820f6de:	89 04 24             	mov    %eax,(%esp)
 820f6e1:	e8 de 58 02 00       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 820f6e6:	e9 55 3d 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f6eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f6f2:	00 
 820f6f3:	8b 45 14             	mov    0x14(%ebp),%eax
 820f6f6:	89 04 24             	mov    %eax,(%esp)
 820f6f9:	e8 d0 83 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f6fe:	c7 44 24 04 85 2f bc 	movl   $0x8bc2f85,0x4(%esp)
 820f705:	08 
 820f706:	89 04 24             	mov    %eax,(%esp)
 820f709:	e8 93 12 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820f70e:	84 c0                	test   %al,%al
 820f710:	0f 84 89 00 00 00    	je     820f79f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3873>
 820f716:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f719:	89 04 24             	mov    %eax,(%esp)
 820f71c:	e8 6d 5a 44 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 820f721:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 820f727:	83 bd 18 ff ff ff 00 	cmpl   $0x0,-0xe8(%ebp)
 820f72e:	0f 84 0c 3d 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f734:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 820f73a:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 820f740:	85 c0                	test   %eax,%eax
 820f742:	0f 84 f8 3c 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f748:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 820f74e:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 820f754:	8b 00                	mov    (%eax),%eax
 820f756:	83 c0 68             	add    $0x68,%eax
 820f759:	8b 18                	mov    (%eax),%ebx
 820f75b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f762:	00 
 820f763:	8b 45 14             	mov    0x14(%ebp),%eax
 820f766:	89 04 24             	mov    %eax,(%esp)
 820f769:	e8 60 83 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f76e:	89 04 24             	mov    %eax,(%esp)
 820f771:	e8 7a 6d 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820f776:	89 04 24             	mov    %eax,(%esp)
 820f779:	e8 72 ef e6 ff       	call   807e6f0 <atoi@plt>
 820f77e:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 820f784:	8b 92 e4 06 00 00    	mov    0x6e4(%edx),%edx
 820f78a:	89 44 24 08          	mov    %eax,0x8(%esp)
 820f78e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f791:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f795:	89 14 24             	mov    %edx,(%esp)
 820f798:	ff d3                	call   *%ebx
 820f79a:	e9 a1 3c 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f79f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f7a6:	00 
 820f7a7:	8b 45 14             	mov    0x14(%ebp),%eax
 820f7aa:	89 04 24             	mov    %eax,(%esp)
 820f7ad:	e8 1c 83 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f7b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f7b6:	c7 04 24 8d 2f bc 08 	movl   $0x8bc2f8d,(%esp)
 820f7bd:	e8 1e 83 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820f7c2:	84 c0                	test   %al,%al
 820f7c4:	0f 84 c9 00 00 00    	je     820f893 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3967>
 820f7ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f7d1:	00 
 820f7d2:	8b 45 14             	mov    0x14(%ebp),%eax
 820f7d5:	89 04 24             	mov    %eax,(%esp)
 820f7d8:	e8 f1 82 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f7dd:	89 04 24             	mov    %eax,(%esp)
 820f7e0:	e8 0b 6d 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820f7e5:	89 04 24             	mov    %eax,(%esp)
 820f7e8:	e8 03 ef e6 ff       	call   807e6f0 <atoi@plt>
 820f7ed:	0f b7 c0             	movzwl %ax,%eax
 820f7f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f7f4:	8d 85 42 fd ff ff    	lea    -0x2be(%ebp),%eax
 820f7fa:	89 04 24             	mov    %eax,(%esp)
 820f7fd:	e8 b2 ef 3e 00       	call   85fe7b4 <_ZN9TOD_LayerC1Et>
 820f802:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 820f809:	00 
 820f80a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f80d:	89 04 24             	mov    %eax,(%esp)
 820f810:	e8 6f dd ec ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 820f815:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 820f81b:	8d 85 42 fd ff ff    	lea    -0x2be(%ebp),%eax
 820f821:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f825:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 820f82b:	89 04 24             	mov    %eax,(%esp)
 820f82e:	e8 c9 40 43 00       	call   86438fc <_ZN13TOD_UserState13setEnterLayerERK9TOD_Layer>
 820f833:	8d 85 ba fd ff ff    	lea    -0x246(%ebp),%eax
 820f839:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 820f83f:	89 54 24 04          	mov    %edx,0x4(%esp)
 820f843:	89 04 24             	mov    %eax,(%esp)
 820f846:	e8 f3 3f 43 00       	call   864383e <_ZNK13TOD_UserState18getTodayEnterLayerEv>
 820f84b:	83 ec 04             	sub    $0x4,%esp
 820f84e:	8d 85 ba fd ff ff    	lea    -0x246(%ebp),%eax
 820f854:	89 04 24             	mov    %eax,(%esp)
 820f857:	e8 e4 f3 01 00       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 820f85c:	0f b7 c0             	movzwl %ax,%eax
 820f85f:	89 44 24 08          	mov    %eax,0x8(%esp)
 820f863:	c7 44 24 04 94 2f bc 	movl   $0x8bc2f94,0x4(%esp)
 820f86a:	08 
 820f86b:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820f871:	89 04 24             	mov    %eax,(%esp)
 820f874:	e8 c7 eb e6 ff       	call   807e440 <sprintf@plt>
 820f879:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 820f87f:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f883:	8b 45 0c             	mov    0xc(%ebp),%eax
 820f886:	89 04 24             	mov    %eax,(%esp)
 820f889:	e8 d8 4a 43 00       	call   8644366 <_ZN17TowerOfDespairMgr18SendMessageToCUserEP5CUserPc>
 820f88e:	e9 ad 3b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f893:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820f89a:	00 
 820f89b:	8b 45 14             	mov    0x14(%ebp),%eax
 820f89e:	89 04 24             	mov    %eax,(%esp)
 820f8a1:	e8 28 82 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f8a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f8aa:	c7 04 24 a9 2f bc 08 	movl   $0x8bc2fa9,(%esp)
 820f8b1:	e8 2a 82 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820f8b6:	84 c0                	test   %al,%al
 820f8b8:	0f 84 02 02 00 00    	je     820fac0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3b94>
 820f8be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f8c5:	00 
 820f8c6:	8b 45 14             	mov    0x14(%ebp),%eax
 820f8c9:	89 04 24             	mov    %eax,(%esp)
 820f8cc:	e8 fd 81 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f8d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f8d5:	c7 04 24 b1 2f bc 08 	movl   $0x8bc2fb1,(%esp)
 820f8dc:	e8 ff 81 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820f8e1:	84 c0                	test   %al,%al
 820f8e3:	0f 84 c2 00 00 00    	je     820f9ab <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3a7f>
 820f8e9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 820f8ee:	c7 44 24 08 19 b7 00 	movl   $0xb719,0x8(%esp)
 820f8f5:	00 
 820f8f6:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 820f8fd:	08 
 820f8fe:	89 04 24             	mov    %eax,(%esp)
 820f901:	e8 80 01 08 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 820f906:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 820f90d:	00 
 820f90e:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f912:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 820f918:	89 04 24             	mov    %eax,(%esp)
 820f91b:	e8 06 93 eb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 820f920:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 820f926:	89 04 24             	mov    %eax,(%esp)
 820f929:	e8 18 93 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 820f92e:	c7 44 24 04 77 02 00 	movl   $0x277,0x4(%esp)
 820f935:	00 
 820f936:	89 04 24             	mov    %eax,(%esp)
 820f939:	e8 18 93 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 820f93e:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 820f944:	89 04 24             	mov    %eax,(%esp)
 820f947:	e8 fa 92 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 820f94c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 820f953:	ff 
 820f954:	89 04 24             	mov    %eax,(%esp)
 820f957:	e8 fa 92 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 820f95c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 820f961:	8d 95 38 fd ff ff    	lea    -0x2c8(%ebp),%edx
 820f967:	89 54 24 08          	mov    %edx,0x8(%esp)
 820f96b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820f972:	00 
 820f973:	89 04 24             	mov    %eax,(%esp)
 820f976:	e8 63 16 36 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 820f97b:	eb 1b                	jmp    820f998 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3a6c>
 820f97d:	89 d3                	mov    %edx,%ebx
 820f97f:	89 c6                	mov    %eax,%esi
 820f981:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 820f987:	89 04 24             	mov    %eax,(%esp)
 820f98a:	e8 43 cf 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 820f98f:	89 f0                	mov    %esi,%eax
 820f991:	89 da                	mov    %ebx,%edx
 820f993:	e9 af 3a 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820f998:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 820f99e:	89 04 24             	mov    %eax,(%esp)
 820f9a1:	e8 2c cf 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 820f9a6:	e9 95 3a 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820f9ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820f9b2:	00 
 820f9b3:	8b 45 14             	mov    0x14(%ebp),%eax
 820f9b6:	89 04 24             	mov    %eax,(%esp)
 820f9b9:	e8 10 81 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820f9be:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f9c2:	c7 04 24 b8 2f bc 08 	movl   $0x8bc2fb8,(%esp)
 820f9c9:	e8 12 81 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820f9ce:	84 c0                	test   %al,%al
 820f9d0:	0f 84 c2 00 00 00    	je     820fa98 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3b6c>
 820f9d6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 820f9db:	c7 44 24 08 20 b7 00 	movl   $0xb720,0x8(%esp)
 820f9e2:	00 
 820f9e3:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 820f9ea:	08 
 820f9eb:	89 04 24             	mov    %eax,(%esp)
 820f9ee:	e8 93 00 08 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 820f9f3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 820f9fa:	00 
 820f9fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 820f9ff:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 820fa05:	89 04 24             	mov    %eax,(%esp)
 820fa08:	e8 19 92 eb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 820fa0d:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 820fa13:	89 04 24             	mov    %eax,(%esp)
 820fa16:	e8 2b 92 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 820fa1b:	c7 44 24 04 75 02 00 	movl   $0x275,0x4(%esp)
 820fa22:	00 
 820fa23:	89 04 24             	mov    %eax,(%esp)
 820fa26:	e8 2b 92 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 820fa2b:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 820fa31:	89 04 24             	mov    %eax,(%esp)
 820fa34:	e8 0d 92 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 820fa39:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 820fa40:	ff 
 820fa41:	89 04 24             	mov    %eax,(%esp)
 820fa44:	e8 0d 92 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 820fa49:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 820fa4e:	8d 95 30 fd ff ff    	lea    -0x2d0(%ebp),%edx
 820fa54:	89 54 24 08          	mov    %edx,0x8(%esp)
 820fa58:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820fa5f:	00 
 820fa60:	89 04 24             	mov    %eax,(%esp)
 820fa63:	e8 76 15 36 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 820fa68:	eb 1b                	jmp    820fa85 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3b59>
 820fa6a:	89 d3                	mov    %edx,%ebx
 820fa6c:	89 c6                	mov    %eax,%esi
 820fa6e:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 820fa74:	89 04 24             	mov    %eax,(%esp)
 820fa77:	e8 56 ce 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 820fa7c:	89 f0                	mov    %esi,%eax
 820fa7e:	89 da                	mov    %ebx,%edx
 820fa80:	e9 c2 39 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 820fa85:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 820fa8b:	89 04 24             	mov    %eax,(%esp)
 820fa8e:	e8 3f ce 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 820fa93:	e9 a8 39 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fa98:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820fa9f:	00 
 820faa0:	8b 45 14             	mov    0x14(%ebp),%eax
 820faa3:	89 04 24             	mov    %eax,(%esp)
 820faa6:	e8 23 80 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820faab:	89 44 24 04          	mov    %eax,0x4(%esp)
 820faaf:	c7 04 24 c5 2f bc 08 	movl   $0x8bc2fc5,(%esp)
 820fab6:	e8 25 80 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fabb:	e9 80 39 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fac0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fac7:	00 
 820fac8:	8b 45 14             	mov    0x14(%ebp),%eax
 820facb:	89 04 24             	mov    %eax,(%esp)
 820face:	e8 fb 7f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fad7:	c7 04 24 cf 2f bc 08 	movl   $0x8bc2fcf,(%esp)
 820fade:	e8 fd 7f 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fae3:	84 c0                	test   %al,%al
 820fae5:	74 6b                	je     820fb52 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3c26>
 820fae7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 820faee:	00 
 820faef:	8b 45 14             	mov    0x14(%ebp),%eax
 820faf2:	89 04 24             	mov    %eax,(%esp)
 820faf5:	e8 d4 7f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fafa:	89 04 24             	mov    %eax,(%esp)
 820fafd:	e8 ee 69 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820fb02:	89 04 24             	mov    %eax,(%esp)
 820fb05:	e8 e6 eb e6 ff       	call   807e6f0 <atoi@plt>
 820fb0a:	89 c3                	mov    %eax,%ebx
 820fb0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820fb13:	00 
 820fb14:	8b 45 14             	mov    0x14(%ebp),%eax
 820fb17:	89 04 24             	mov    %eax,(%esp)
 820fb1a:	e8 af 7f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fb1f:	89 04 24             	mov    %eax,(%esp)
 820fb22:	e8 c9 69 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820fb27:	89 04 24             	mov    %eax,(%esp)
 820fb2a:	e8 c1 eb e6 ff       	call   807e6f0 <atoi@plt>
 820fb2f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820fb33:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fb37:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fb3a:	89 04 24             	mov    %eax,(%esp)
 820fb3d:	e8 16 2a 45 00       	call   8662558 <_ZN5CUser19SetMissionParameterEii>
 820fb42:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fb45:	89 04 24             	mov    %eax,(%esp)
 820fb48:	e8 db 29 45 00       	call   8662528 <_ZN5CUser16send_MissionListEv>
 820fb4d:	e9 ee 38 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fb52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fb59:	00 
 820fb5a:	8b 45 14             	mov    0x14(%ebp),%eax
 820fb5d:	89 04 24             	mov    %eax,(%esp)
 820fb60:	e8 69 7f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fb65:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fb69:	c7 04 24 d7 2f bc 08 	movl   $0x8bc2fd7,(%esp)
 820fb70:	e8 6b 7f 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fb75:	84 c0                	test   %al,%al
 820fb77:	74 1b                	je     820fb94 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3c68>
 820fb79:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fb7c:	89 04 24             	mov    %eax,(%esp)
 820fb7f:	e8 1a 2a 45 00       	call   866259e <_ZN5CUser17ResetDailyMissionEv>
 820fb84:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fb87:	89 04 24             	mov    %eax,(%esp)
 820fb8a:	e8 99 29 45 00       	call   8662528 <_ZN5CUser16send_MissionListEv>
 820fb8f:	e9 ac 38 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fb94:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fb9b:	00 
 820fb9c:	8b 45 14             	mov    0x14(%ebp),%eax
 820fb9f:	89 04 24             	mov    %eax,(%esp)
 820fba2:	e8 27 7f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fba7:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fbab:	c7 04 24 e7 2f bc 08 	movl   $0x8bc2fe7,(%esp)
 820fbb2:	e8 29 7f 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fbb7:	84 c0                	test   %al,%al
 820fbb9:	74 4e                	je     820fc09 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3cdd>
 820fbbb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820fbc2:	00 
 820fbc3:	8b 45 14             	mov    0x14(%ebp),%eax
 820fbc6:	89 04 24             	mov    %eax,(%esp)
 820fbc9:	e8 00 7f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fbce:	89 04 24             	mov    %eax,(%esp)
 820fbd1:	e8 1a 69 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820fbd6:	89 04 24             	mov    %eax,(%esp)
 820fbd9:	e8 12 eb e6 ff       	call   807e6f0 <atoi@plt>
 820fbde:	98                   	cwtl
 820fbdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fbe3:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fbe6:	89 04 24             	mov    %eax,(%esp)
 820fbe9:	e8 18 2a 45 00       	call   8662606 <_ZN5CUser12ClearMissionEs>
 820fbee:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fbf1:	89 04 24             	mov    %eax,(%esp)
 820fbf4:	e8 2f 29 45 00       	call   8662528 <_ZN5CUser16send_MissionListEv>
 820fbf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fbfc:	89 04 24             	mov    %eax,(%esp)
 820fbff:	e8 4e d1 44 00       	call   865cd52 <_ZN5CUser15send_pvp_recordEv>
 820fc04:	e9 37 38 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fc09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fc10:	00 
 820fc11:	8b 45 14             	mov    0x14(%ebp),%eax
 820fc14:	89 04 24             	mov    %eax,(%esp)
 820fc17:	e8 b2 7e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fc1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fc20:	c7 04 24 f4 2f bc 08 	movl   $0x8bc2ff4,(%esp)
 820fc27:	e8 b4 7e 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fc2c:	84 c0                	test   %al,%al
 820fc2e:	74 4e                	je     820fc7e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3d52>
 820fc30:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820fc37:	00 
 820fc38:	8b 45 14             	mov    0x14(%ebp),%eax
 820fc3b:	89 04 24             	mov    %eax,(%esp)
 820fc3e:	e8 8b 7e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fc43:	89 04 24             	mov    %eax,(%esp)
 820fc46:	e8 a5 68 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820fc4b:	89 04 24             	mov    %eax,(%esp)
 820fc4e:	e8 9d ea e6 ff       	call   807e6f0 <atoi@plt>
 820fc53:	98                   	cwtl
 820fc54:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fc58:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fc5b:	89 04 24             	mov    %eax,(%esp)
 820fc5e:	e8 3d 2a 45 00       	call   86626a0 <_ZN5CUser16ClearMissionKindEs>
 820fc63:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fc66:	89 04 24             	mov    %eax,(%esp)
 820fc69:	e8 ba 28 45 00       	call   8662528 <_ZN5CUser16send_MissionListEv>
 820fc6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fc71:	89 04 24             	mov    %eax,(%esp)
 820fc74:	e8 d9 d0 44 00       	call   865cd52 <_ZN5CUser15send_pvp_recordEv>
 820fc79:	e9 c2 37 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fc7e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fc85:	00 
 820fc86:	8b 45 14             	mov    0x14(%ebp),%eax
 820fc89:	89 04 24             	mov    %eax,(%esp)
 820fc8c:	e8 3d 7e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fc91:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fc95:	c7 04 24 05 30 bc 08 	movl   $0x8bc3005,(%esp)
 820fc9c:	e8 3f 7e 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fca1:	84 c0                	test   %al,%al
 820fca3:	74 1b                	je     820fcc0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3d94>
 820fca5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fca8:	89 04 24             	mov    %eax,(%esp)
 820fcab:	e8 aa 29 45 00       	call   866265a <_ZN5CUser16ResetMissionListEv>
 820fcb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fcb3:	89 04 24             	mov    %eax,(%esp)
 820fcb6:	e8 6d 28 45 00       	call   8662528 <_ZN5CUser16send_MissionListEv>
 820fcbb:	e9 80 37 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fcc0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fcc7:	00 
 820fcc8:	8b 45 14             	mov    0x14(%ebp),%eax
 820fccb:	89 04 24             	mov    %eax,(%esp)
 820fcce:	e8 fb 7d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fcd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fcd7:	c7 04 24 16 30 bc 08 	movl   $0x8bc3016,(%esp)
 820fcde:	e8 fd 7d 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fce3:	84 c0                	test   %al,%al
 820fce5:	74 2c                	je     820fd13 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3de7>
 820fce7:	e8 bb a6 ec ff       	call   80da3a7 <_Z11G_GameWorldv>
 820fcec:	89 04 24             	mov    %eax,(%esp)
 820fcef:	e8 f8 c6 4b 00       	call   86cc3ec <_ZN9GameWorld15ResetAllFatigueEv>
 820fcf4:	e8 ae a6 ec ff       	call   80da3a7 <_Z11G_GameWorldv>
 820fcf9:	89 04 24             	mov    %eax,(%esp)
 820fcfc:	e8 0f d3 4b 00       	call   86cd010 <_ZN9GameWorld18ReselectDailyQuestEv>
 820fd01:	e8 a1 a6 ec ff       	call   80da3a7 <_Z11G_GameWorldv>
 820fd06:	89 04 24             	mov    %eax,(%esp)
 820fd09:	e8 c0 d0 4b 00       	call   86ccdce <_ZN9GameWorld12AddDailyItemEv>
 820fd0e:	e9 2d 37 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fd13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fd1a:	00 
 820fd1b:	8b 45 14             	mov    0x14(%ebp),%eax
 820fd1e:	89 04 24             	mov    %eax,(%esp)
 820fd21:	e8 a8 7d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fd26:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fd2a:	c7 04 24 21 30 bc 08 	movl   $0x8bc3021,(%esp)
 820fd31:	e8 aa 7d 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fd36:	84 c0                	test   %al,%al
 820fd38:	74 72                	je     820fdac <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3e80>
 820fd3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820fd41:	00 
 820fd42:	8b 45 14             	mov    0x14(%ebp),%eax
 820fd45:	89 04 24             	mov    %eax,(%esp)
 820fd48:	e8 81 7d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fd4d:	89 04 24             	mov    %eax,(%esp)
 820fd50:	e8 9b 67 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820fd55:	89 04 24             	mov    %eax,(%esp)
 820fd58:	e8 93 e9 e6 ff       	call   807e6f0 <atoi@plt>
 820fd5d:	66 89 85 20 ff ff ff 	mov    %ax,-0xe0(%ebp)
 820fd64:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fd67:	89 04 24             	mov    %eax,(%esp)
 820fd6a:	e8 ad 76 f4 ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 820fd6f:	84 c0                	test   %al,%al
 820fd71:	75 07                	jne    820fd7a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3e4e>
 820fd73:	b8 1f 00 00 00       	mov    $0x1f,%eax
 820fd78:	eb 05                	jmp    820fd7f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3e53>
 820fd7a:	b8 20 00 00 00       	mov    $0x20,%eax
 820fd7f:	66 89 85 22 ff ff ff 	mov    %ax,-0xde(%ebp)
 820fd86:	0f bf 95 20 ff ff ff 	movswl -0xe0(%ebp),%edx
 820fd8d:	0f bf 85 22 ff ff ff 	movswl -0xde(%ebp),%eax
 820fd94:	89 54 24 08          	mov    %edx,0x8(%esp)
 820fd98:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fd9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fd9f:	89 04 24             	mov    %eax,(%esp)
 820fda2:	e8 63 2a 45 00       	call   866280a <_ZN5CUser19Update_ComboMissionEis>
 820fda7:	e9 94 36 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fdac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fdb3:	00 
 820fdb4:	8b 45 14             	mov    0x14(%ebp),%eax
 820fdb7:	89 04 24             	mov    %eax,(%esp)
 820fdba:	e8 0f 7d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fdbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fdc3:	c7 04 24 2e 30 bc 08 	movl   $0x8bc302e,(%esp)
 820fdca:	e8 11 7d 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 820fdcf:	84 c0                	test   %al,%al
 820fdd1:	0f 85 69 36 00 00    	jne    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fdd7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fdde:	00 
 820fddf:	8b 45 14             	mov    0x14(%ebp),%eax
 820fde2:	89 04 24             	mov    %eax,(%esp)
 820fde5:	e8 e4 7c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fdea:	c7 44 24 04 37 30 bc 	movl   $0x8bc3037,0x4(%esp)
 820fdf1:	08 
 820fdf2:	89 04 24             	mov    %eax,(%esp)
 820fdf5:	e8 a7 0b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820fdfa:	84 c0                	test   %al,%al
 820fdfc:	74 43                	je     820fe41 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3f15>
 820fdfe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820fe05:	00 
 820fe06:	8b 45 14             	mov    0x14(%ebp),%eax
 820fe09:	89 04 24             	mov    %eax,(%esp)
 820fe0c:	e8 bd 7c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fe11:	89 04 24             	mov    %eax,(%esp)
 820fe14:	e8 d7 66 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820fe19:	89 04 24             	mov    %eax,(%esp)
 820fe1c:	e8 cf e8 e6 ff       	call   807e6f0 <atoi@plt>
 820fe21:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 820fe27:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 820fe2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fe31:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fe34:	89 04 24             	mov    %eax,(%esp)
 820fe37:	e8 c2 ae 47 00       	call   868acfe <_ZN5CUser13setQuestPointEi>
 820fe3c:	e9 ff 35 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fe41:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fe48:	00 
 820fe49:	8b 45 14             	mov    0x14(%ebp),%eax
 820fe4c:	89 04 24             	mov    %eax,(%esp)
 820fe4f:	e8 7a 7c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fe54:	c7 44 24 04 3a 30 bc 	movl   $0x8bc303a,0x4(%esp)
 820fe5b:	08 
 820fe5c:	89 04 24             	mov    %eax,(%esp)
 820fe5f:	e8 3d 0b e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820fe64:	84 c0                	test   %al,%al
 820fe66:	74 28                	je     820fe90 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x3f64>
 820fe68:	8d 85 28 fd ff ff    	lea    -0x2d8(%ebp),%eax
 820fe6e:	89 04 24             	mov    %eax,(%esp)
 820fe71:	e8 fa cc 01 00       	call   822cb70 <_ZN13random_option27CRandomOptionItemHandleTestC1Ev>
 820fe76:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fe79:	89 44 24 04          	mov    %eax,0x4(%esp)
 820fe7d:	8d 85 28 fd ff ff    	lea    -0x2d8(%ebp),%eax
 820fe83:	89 04 24             	mov    %eax,(%esp)
 820fe86:	e8 09 41 3e 00       	call   85f3f94 <_ZN13random_option27CRandomOptionItemHandleTest19test_regist_auctionEP5CUser>
 820fe8b:	e9 b0 35 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820fe90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820fe97:	00 
 820fe98:	8b 45 14             	mov    0x14(%ebp),%eax
 820fe9b:	89 04 24             	mov    %eax,(%esp)
 820fe9e:	e8 2b 7c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fea3:	c7 44 24 04 48 30 bc 	movl   $0x8bc3048,0x4(%esp)
 820feaa:	08 
 820feab:	89 04 24             	mov    %eax,(%esp)
 820feae:	e8 ee 0a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820feb3:	84 c0                	test   %al,%al
 820feb5:	0f 84 89 00 00 00    	je     820ff44 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4018>
 820febb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820fec2:	00 
 820fec3:	8b 45 14             	mov    0x14(%ebp),%eax
 820fec6:	89 04 24             	mov    %eax,(%esp)
 820fec9:	e8 00 7c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820fece:	89 04 24             	mov    %eax,(%esp)
 820fed1:	e8 1a 66 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820fed6:	89 04 24             	mov    %eax,(%esp)
 820fed9:	e8 12 e8 e6 ff       	call   807e6f0 <atoi@plt>
 820fede:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 820fee4:	8b 9d 28 ff ff ff    	mov    -0xd8(%ebp),%ebx
 820feea:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 820fef1:	00 
 820fef2:	8b 45 0c             	mov    0xc(%ebp),%eax
 820fef5:	89 04 24             	mov    %eax,(%esp)
 820fef8:	e8 87 d6 ec ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 820fefd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820ff01:	89 04 24             	mov    %eax,(%esp)
 820ff04:	e8 a5 50 02 00       	call   8234fae <_ZN8fair_pvp13CFairPvPScore19SetRemainBonusCountEi>
 820ff09:	e8 8d c2 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 820ff0e:	0f b7 80 e0 49 00 00 	movzwl 0x49e0(%eax),%eax
 820ff15:	0f b7 c0             	movzwl %ax,%eax
 820ff18:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
 820ff1e:	89 c3                	mov    %eax,%ebx
 820ff20:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 820ff27:	00 
 820ff28:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ff2b:	89 04 24             	mov    %eax,(%esp)
 820ff2e:	e8 51 d6 ec ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 820ff33:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820ff37:	89 04 24             	mov    %eax,(%esp)
 820ff3a:	e8 53 50 02 00       	call   8234f92 <_ZN8fair_pvp13CFairPvPScore17SetDailyPlayCountEi>
 820ff3f:	e9 fc 34 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 820ff44:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820ff4b:	00 
 820ff4c:	8b 45 14             	mov    0x14(%ebp),%eax
 820ff4f:	89 04 24             	mov    %eax,(%esp)
 820ff52:	e8 77 7b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ff57:	c7 44 24 04 55 30 bc 	movl   $0x8bc3055,0x4(%esp)
 820ff5e:	08 
 820ff5f:	89 04 24             	mov    %eax,(%esp)
 820ff62:	e8 3a 0a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ff67:	84 c0                	test   %al,%al
 820ff69:	0f 84 33 03 00 00    	je     82102a2 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4376>
 820ff6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ff76:	00 
 820ff77:	8b 45 14             	mov    0x14(%ebp),%eax
 820ff7a:	89 04 24             	mov    %eax,(%esp)
 820ff7d:	e8 4c 7b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ff82:	c7 44 24 04 f9 13 bc 	movl   $0x8bc13f9,0x4(%esp)
 820ff89:	08 
 820ff8a:	89 04 24             	mov    %eax,(%esp)
 820ff8d:	e8 0f 0a e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 820ff92:	84 c0                	test   %al,%al
 820ff94:	74 0a                	je     820ffa0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4074>
 820ff96:	bb 00 00 00 00       	mov    $0x0,%ebx
 820ff9b:	e9 bf 34 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 820ffa0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820ffa7:	00 
 820ffa8:	8b 45 14             	mov    0x14(%ebp),%eax
 820ffab:	89 04 24             	mov    %eax,(%esp)
 820ffae:	e8 1b 7b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 820ffb3:	89 04 24             	mov    %eax,(%esp)
 820ffb6:	e8 35 65 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 820ffbb:	89 04 24             	mov    %eax,(%esp)
 820ffbe:	e8 2d e7 e6 ff       	call   807e6f0 <atoi@plt>
 820ffc3:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 820ffc9:	8d 85 2f fb ff ff    	lea    -0x4d1(%ebp),%eax
 820ffcf:	89 04 24             	mov    %eax,(%esp)
 820ffd2:	e8 7d b8 eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 820ffd7:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 820ffdd:	89 85 31 fb ff ff    	mov    %eax,-0x4cf(%ebp)
 820ffe3:	8b 85 31 fb ff ff    	mov    -0x4cf(%ebp),%eax
 820ffe9:	89 c3                	mov    %eax,%ebx
 820ffeb:	e8 ab c1 eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 820fff0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820fff4:	89 04 24             	mov    %eax,(%esp)
 820fff7:	e8 36 fa 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 820fffc:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 8210002:	83 bd 30 ff ff ff 00 	cmpl   $0x0,-0xd0(%ebp)
 8210009:	75 0a                	jne    8210015 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x40e9>
 821000b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8210010:	e9 4a 34 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8210015:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 821001b:	8b 00                	mov    (%eax),%eax
 821001d:	83 c0 08             	add    $0x8,%eax
 8210020:	8b 10                	mov    (%eax),%edx
 8210022:	8d 85 2f fb ff ff    	lea    -0x4d1(%ebp),%eax
 8210028:	89 44 24 04          	mov    %eax,0x4(%esp)
 821002c:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 8210032:	89 04 24             	mov    %eax,(%esp)
 8210035:	ff d2                	call   *%edx
 8210037:	c7 85 34 ff ff ff 02 	movl   $0x2,-0xcc(%ebp)
 821003e:	00 00 00 
 8210041:	c7 85 3c ff ff ff 00 	movl   $0x0,-0xc4(%ebp)
 8210048:	00 00 00 
 821004b:	e9 31 01 00 00       	jmp    8210181 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4255>
 8210050:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8210056:	89 44 24 04          	mov    %eax,0x4(%esp)
 821005a:	8b 45 14             	mov    0x14(%ebp),%eax
 821005d:	89 04 24             	mov    %eax,(%esp)
 8210060:	e8 69 7a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8210065:	c7 44 24 04 f9 13 bc 	movl   $0x8bc13f9,0x4(%esp)
 821006c:	08 
 821006d:	89 04 24             	mov    %eax,(%esp)
 8210070:	e8 2c 09 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8210075:	84 c0                	test   %al,%al
 8210077:	0f 85 18 01 00 00    	jne    8210195 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4269>
 821007d:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8210083:	83 c0 01             	add    $0x1,%eax
 8210086:	89 44 24 04          	mov    %eax,0x4(%esp)
 821008a:	8b 45 14             	mov    0x14(%ebp),%eax
 821008d:	89 04 24             	mov    %eax,(%esp)
 8210090:	e8 39 7a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8210095:	c7 44 24 04 f9 13 bc 	movl   $0x8bc13f9,0x4(%esp)
 821009c:	08 
 821009d:	89 04 24             	mov    %eax,(%esp)
 82100a0:	e8 fc 08 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82100a5:	84 c0                	test   %al,%al
 82100a7:	0f 85 eb 00 00 00    	jne    8210198 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x426c>
 82100ad:	8b 9d 3c ff ff ff    	mov    -0xc4(%ebp),%ebx
 82100b3:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 82100b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82100bd:	8b 45 14             	mov    0x14(%ebp),%eax
 82100c0:	89 04 24             	mov    %eax,(%esp)
 82100c3:	e8 06 7a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82100c8:	89 04 24             	mov    %eax,(%esp)
 82100cb:	e8 20 64 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82100d0:	89 04 24             	mov    %eax,(%esp)
 82100d3:	e8 18 e6 e6 ff       	call   807e6f0 <atoi@plt>
 82100d8:	89 c2                	mov    %eax,%edx
 82100da:	89 d8                	mov    %ebx,%eax
 82100dc:	01 c0                	add    %eax,%eax
 82100de:	01 d8                	add    %ebx,%eax
 82100e0:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 82100e3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 82100e6:	2d 94 04 00 00       	sub    $0x494,%eax
 82100eb:	88 10                	mov    %dl,(%eax)
 82100ed:	8b 9d 3c ff ff ff    	mov    -0xc4(%ebp),%ebx
 82100f3:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 82100f9:	83 c0 01             	add    $0x1,%eax
 82100fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210100:	8b 45 14             	mov    0x14(%ebp),%eax
 8210103:	89 04 24             	mov    %eax,(%esp)
 8210106:	e8 c3 79 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821010b:	89 04 24             	mov    %eax,(%esp)
 821010e:	e8 dd 63 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8210113:	89 04 24             	mov    %eax,(%esp)
 8210116:	e8 d5 e5 e6 ff       	call   807e6f0 <atoi@plt>
 821011b:	89 c2                	mov    %eax,%edx
 821011d:	89 d8                	mov    %ebx,%eax
 821011f:	01 c0                	add    %eax,%eax
 8210121:	01 d8                	add    %ebx,%eax
 8210123:	8d 7d e8             	lea    -0x18(%ebp),%edi
 8210126:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8210129:	2d 93 04 00 00       	sub    $0x493,%eax
 821012e:	88 10                	mov    %dl,(%eax)
 8210130:	8b 9d 3c ff ff ff    	mov    -0xc4(%ebp),%ebx
 8210136:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 821013c:	83 c0 01             	add    $0x1,%eax
 821013f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210143:	8b 45 14             	mov    0x14(%ebp),%eax
 8210146:	89 04 24             	mov    %eax,(%esp)
 8210149:	e8 80 79 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821014e:	89 04 24             	mov    %eax,(%esp)
 8210151:	e8 9a 63 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8210156:	89 04 24             	mov    %eax,(%esp)
 8210159:	e8 92 e5 e6 ff       	call   807e6f0 <atoi@plt>
 821015e:	89 c2                	mov    %eax,%edx
 8210160:	89 d8                	mov    %ebx,%eax
 8210162:	01 c0                	add    %eax,%eax
 8210164:	01 d8                	add    %ebx,%eax
 8210166:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8210169:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 821016c:	2d 92 04 00 00       	sub    $0x492,%eax
 8210171:	88 10                	mov    %dl,(%eax)
 8210173:	83 85 34 ff ff ff 02 	addl   $0x2,-0xcc(%ebp)
 821017a:	83 85 3c ff ff ff 01 	addl   $0x1,-0xc4(%ebp)
 8210181:	83 bd 3c ff ff ff 02 	cmpl   $0x2,-0xc4(%ebp)
 8210188:	0f 9e c0             	setle  %al
 821018b:	84 c0                	test   %al,%al
 821018d:	0f 85 bd fe ff ff    	jne    8210050 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4124>
 8210193:	eb 04                	jmp    8210199 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x426d>
 8210195:	90                   	nop
 8210196:	eb 01                	jmp    8210199 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x426d>
 8210198:	90                   	nop
 8210199:	8b 45 0c             	mov    0xc(%ebp),%eax
 821019c:	89 04 24             	mov    %eax,(%esp)
 821019f:	e8 ea a0 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82101a4:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 82101ab:	00 
 82101ac:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 82101b3:	00 
 82101b4:	c7 44 24 44 06 00 00 	movl   $0x6,0x44(%esp)
 82101bb:	00 
 82101bc:	8b 95 2f fb ff ff    	mov    -0x4d1(%ebp),%edx
 82101c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82101c6:	8b 95 33 fb ff ff    	mov    -0x4cd(%ebp),%edx
 82101cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 82101d0:	8b 95 37 fb ff ff    	mov    -0x4c9(%ebp),%edx
 82101d6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82101da:	8b 95 3b fb ff ff    	mov    -0x4c5(%ebp),%edx
 82101e0:	89 54 24 10          	mov    %edx,0x10(%esp)
 82101e4:	8b 95 3f fb ff ff    	mov    -0x4c1(%ebp),%edx
 82101ea:	89 54 24 14          	mov    %edx,0x14(%esp)
 82101ee:	8b 95 43 fb ff ff    	mov    -0x4bd(%ebp),%edx
 82101f4:	89 54 24 18          	mov    %edx,0x18(%esp)
 82101f8:	8b 95 47 fb ff ff    	mov    -0x4b9(%ebp),%edx
 82101fe:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8210202:	8b 95 4b fb ff ff    	mov    -0x4b5(%ebp),%edx
 8210208:	89 54 24 20          	mov    %edx,0x20(%esp)
 821020c:	8b 95 4f fb ff ff    	mov    -0x4b1(%ebp),%edx
 8210212:	89 54 24 24          	mov    %edx,0x24(%esp)
 8210216:	8b 95 53 fb ff ff    	mov    -0x4ad(%ebp),%edx
 821021c:	89 54 24 28          	mov    %edx,0x28(%esp)
 8210220:	8b 95 57 fb ff ff    	mov    -0x4a9(%ebp),%edx
 8210226:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 821022a:	8b 95 5b fb ff ff    	mov    -0x4a5(%ebp),%edx
 8210230:	89 54 24 30          	mov    %edx,0x30(%esp)
 8210234:	8b 95 5f fb ff ff    	mov    -0x4a1(%ebp),%edx
 821023a:	89 54 24 34          	mov    %edx,0x34(%esp)
 821023e:	8b 95 63 fb ff ff    	mov    -0x49d(%ebp),%edx
 8210244:	89 54 24 38          	mov    %edx,0x38(%esp)
 8210248:	8b 95 67 fb ff ff    	mov    -0x499(%ebp),%edx
 821024e:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8210252:	0f b6 95 6b fb ff ff 	movzbl -0x495(%ebp),%edx
 8210259:	88 54 24 40          	mov    %dl,0x40(%esp)
 821025d:	89 04 24             	mov    %eax,(%esp)
 8210260:	e8 21 2b 2f 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8210265:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 821026b:	83 bd 38 ff ff ff 00 	cmpl   $0x0,-0xc8(%ebp)
 8210272:	0f 88 c8 31 00 00    	js     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8210278:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 821027e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8210282:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8210289:	00 
 821028a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8210291:	00 
 8210292:	8b 45 0c             	mov    0xc(%ebp),%eax
 8210295:	89 04 24             	mov    %eax,(%esp)
 8210298:	e8 bd c3 46 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 821029d:	e9 9e 31 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82102a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82102a9:	00 
 82102aa:	8b 45 14             	mov    0x14(%ebp),%eax
 82102ad:	89 04 24             	mov    %eax,(%esp)
 82102b0:	e8 19 78 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82102b5:	c7 44 24 04 5e 30 bc 	movl   $0x8bc305e,0x4(%esp)
 82102bc:	08 
 82102bd:	89 04 24             	mov    %eax,(%esp)
 82102c0:	e8 dc 06 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82102c5:	84 c0                	test   %al,%al
 82102c7:	0f 84 42 05 00 00    	je     821080f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x48e3>
 82102cd:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 82102d3:	89 04 24             	mov    %eax,(%esp)
 82102d6:	e8 f5 62 4f 00       	call   87065d0 <_ZNSsC1Ev>
 82102db:	c7 85 50 ff ff ff 01 	movl   $0x1,-0xb0(%ebp)
 82102e2:	00 00 00 
 82102e5:	e9 81 00 00 00       	jmp    821036b <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x443f>
 82102ea:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 82102f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82102f4:	8b 45 14             	mov    0x14(%ebp),%eax
 82102f7:	89 04 24             	mov    %eax,(%esp)
 82102fa:	e8 cf 77 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82102ff:	89 04 24             	mov    %eax,(%esp)
 8210302:	e8 69 63 4f 00       	call   8706670 <_ZNKSs6lengthEv>
 8210307:	85 c0                	test   %eax,%eax
 8210309:	0f 94 c0             	sete   %al
 821030c:	84 c0                	test   %al,%al
 821030e:	75 6f                	jne    821037f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4453>
 8210310:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 8210316:	89 04 24             	mov    %eax,(%esp)
 8210319:	e8 52 63 4f 00       	call   8706670 <_ZNKSs6lengthEv>
 821031e:	85 c0                	test   %eax,%eax
 8210320:	0f 95 c0             	setne  %al
 8210323:	84 c0                	test   %al,%al
 8210325:	74 16                	je     821033d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4411>
 8210327:	c7 44 24 04 48 2c bc 	movl   $0x8bc2c48,0x4(%esp)
 821032e:	08 
 821032f:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 8210335:	89 04 24             	mov    %eax,(%esp)
 8210338:	e8 f3 7c 4f 00       	call   8708030 <_ZNSspLEPKc>
 821033d:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8210343:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210347:	8b 45 14             	mov    0x14(%ebp),%eax
 821034a:	89 04 24             	mov    %eax,(%esp)
 821034d:	e8 7c 77 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8210352:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210356:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 821035c:	89 04 24             	mov    %eax,(%esp)
 821035f:	e8 8c 7e 4f 00       	call   87081f0 <_ZNSspLERKSs>
 8210364:	83 85 50 ff ff ff 01 	addl   $0x1,-0xb0(%ebp)
 821036b:	83 bd 50 ff ff ff 09 	cmpl   $0x9,-0xb0(%ebp)
 8210372:	0f 9e c0             	setle  %al
 8210375:	84 c0                	test   %al,%al
 8210377:	0f 85 6d ff ff ff    	jne    82102ea <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x43be>
 821037d:	eb 01                	jmp    8210380 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4454>
 821037f:	90                   	nop
 8210380:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 8210386:	89 04 24             	mov    %eax,(%esp)
 8210389:	e8 62 61 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821038e:	89 c6                	mov    %eax,%esi
 8210390:	e8 06 be eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 8210395:	89 74 24 04          	mov    %esi,0x4(%esp)
 8210399:	89 04 24             	mov    %eax,(%esp)
 821039c:	e8 c7 f6 14 00       	call   835fa68 <_ZNK12CDataManager9find_itemEPKc>
 82103a1:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 82103a7:	83 bd 40 ff ff ff 00 	cmpl   $0x0,-0xc0(%ebp)
 82103ae:	0f 85 66 01 00 00    	jne    821051a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x45ee>
 82103b4:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 82103ba:	b8 00 00 00 00       	mov    $0x0,%eax
 82103bf:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 82103c4:	89 d7                	mov    %edx,%edi
 82103c6:	f3 ab                	rep stos %eax,%es:(%edi)
 82103c8:	89 fa                	mov    %edi,%edx
 82103ca:	66 89 02             	mov    %ax,(%edx)
 82103cd:	83 c2 02             	add    $0x2,%edx
 82103d0:	88 02                	mov    %al,(%edx)
 82103d2:	83 c2 01             	add    $0x1,%edx
 82103d5:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 82103db:	89 04 24             	mov    %eax,(%esp)
 82103de:	e8 0d 61 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82103e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82103e7:	c7 44 24 04 69 30 bc 	movl   $0x8bc3069,0x4(%esp)
 82103ee:	08 
 82103ef:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 82103f5:	89 04 24             	mov    %eax,(%esp)
 82103f8:	e8 43 e0 e6 ff       	call   807e440 <sprintf@plt>
 82103fd:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 8210403:	89 04 24             	mov    %eax,(%esp)
 8210406:	e8 41 d9 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821040b:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8210412:	00 
 8210413:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821041a:	00 
 821041b:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 8210421:	89 04 24             	mov    %eax,(%esp)
 8210424:	e8 d3 b4 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8210429:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8210430:	00 
 8210431:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 8210437:	89 04 24             	mov    %eax,(%esp)
 821043a:	e8 e1 b4 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821043f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8210446:	00 
 8210447:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 821044d:	89 04 24             	mov    %eax,(%esp)
 8210450:	e8 4f 9a ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8210455:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821045c:	00 
 821045d:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 8210463:	89 04 24             	mov    %eax,(%esp)
 8210466:	e8 b5 b4 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821046b:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8210471:	89 04 24             	mov    %eax,(%esp)
 8210474:	e8 37 df e6 ff       	call   807e3b0 <strlen@plt>
 8210479:	89 44 24 04          	mov    %eax,0x4(%esp)
 821047d:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 8210483:	89 04 24             	mov    %eax,(%esp)
 8210486:	e8 b1 b4 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821048b:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8210491:	89 04 24             	mov    %eax,(%esp)
 8210494:	e8 17 df e6 ff       	call   807e3b0 <strlen@plt>
 8210499:	89 44 24 08          	mov    %eax,0x8(%esp)
 821049d:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 82104a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82104a7:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 82104ad:	89 04 24             	mov    %eax,(%esp)
 82104b0:	e8 2f 6f fa ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 82104b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82104bc:	00 
 82104bd:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 82104c3:	89 04 24             	mov    %eax,(%esp)
 82104c6:	e8 8d b4 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82104cb:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 82104d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82104d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82104d8:	89 04 24             	mov    %eax,(%esp)
 82104db:	e8 da 80 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82104e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 82104e5:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 82104eb:	89 04 24             	mov    %eax,(%esp)
 82104ee:	e8 8d d9 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82104f3:	eb 1b                	jmp    8210510 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x45e4>
 82104f5:	89 d3                	mov    %edx,%ebx
 82104f7:	89 c6                	mov    %eax,%esi
 82104f9:	8d 85 14 fd ff ff    	lea    -0x2ec(%ebp),%eax
 82104ff:	89 04 24             	mov    %eax,(%esp)
 8210502:	e8 79 d9 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8210507:	89 f0                	mov    %esi,%eax
 8210509:	89 da                	mov    %ebx,%edx
 821050b:	e9 c9 02 00 00       	jmp    82107d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x48ad>
 8210510:	be 00 00 00 00       	mov    $0x0,%esi
 8210515:	e9 da 02 00 00       	jmp    82107f4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x48c8>
 821051a:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 8210520:	b8 00 00 00 00       	mov    $0x0,%eax
 8210525:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 821052a:	89 d7                	mov    %edx,%edi
 821052c:	f3 ab                	rep stos %eax,%es:(%edi)
 821052e:	89 fa                	mov    %edi,%edx
 8210530:	66 89 02             	mov    %ax,(%edx)
 8210533:	83 c2 02             	add    $0x2,%edx
 8210536:	88 02                	mov    %al,(%edx)
 8210538:	83 c2 01             	add    $0x1,%edx
 821053b:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8210541:	89 04 24             	mov    %eax,(%esp)
 8210544:	e8 ff 06 f0 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8210549:	89 44 24 08          	mov    %eax,0x8(%esp)
 821054d:	c7 44 24 04 80 30 bc 	movl   $0x8bc3080,0x4(%esp)
 8210554:	08 
 8210555:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 821055b:	89 04 24             	mov    %eax,(%esp)
 821055e:	e8 dd de e6 ff       	call   807e440 <sprintf@plt>
 8210563:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 8210569:	89 04 24             	mov    %eax,(%esp)
 821056c:	e8 db d7 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8210571:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8210578:	00 
 8210579:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8210580:	00 
 8210581:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 8210587:	89 04 24             	mov    %eax,(%esp)
 821058a:	e8 6d b3 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821058f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8210596:	00 
 8210597:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 821059d:	89 04 24             	mov    %eax,(%esp)
 82105a0:	e8 7b b3 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82105a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82105ac:	00 
 82105ad:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 82105b3:	89 04 24             	mov    %eax,(%esp)
 82105b6:	e8 e9 98 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82105bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82105c2:	00 
 82105c3:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 82105c9:	89 04 24             	mov    %eax,(%esp)
 82105cc:	e8 4f b3 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82105d1:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 82105d7:	89 04 24             	mov    %eax,(%esp)
 82105da:	e8 d1 dd e6 ff       	call   807e3b0 <strlen@plt>
 82105df:	89 44 24 04          	mov    %eax,0x4(%esp)
 82105e3:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 82105e9:	89 04 24             	mov    %eax,(%esp)
 82105ec:	e8 4b b3 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82105f1:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 82105f7:	89 04 24             	mov    %eax,(%esp)
 82105fa:	e8 b1 dd e6 ff       	call   807e3b0 <strlen@plt>
 82105ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8210603:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8210609:	89 44 24 04          	mov    %eax,0x4(%esp)
 821060d:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 8210613:	89 04 24             	mov    %eax,(%esp)
 8210616:	e8 c9 6d fa ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 821061b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8210622:	00 
 8210623:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 8210629:	89 04 24             	mov    %eax,(%esp)
 821062c:	e8 27 b3 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8210631:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 8210637:	89 44 24 04          	mov    %eax,0x4(%esp)
 821063b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821063e:	89 04 24             	mov    %eax,(%esp)
 8210641:	e8 74 7f 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8210646:	eb 1b                	jmp    8210663 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4737>
 8210648:	89 d3                	mov    %edx,%ebx
 821064a:	89 c6                	mov    %eax,%esi
 821064c:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 8210652:	89 04 24             	mov    %eax,(%esp)
 8210655:	e8 26 d8 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821065a:	89 f0                	mov    %esi,%eax
 821065c:	89 da                	mov    %ebx,%edx
 821065e:	e9 76 01 00 00       	jmp    82107d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x48ad>
 8210663:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 8210669:	89 04 24             	mov    %eax,(%esp)
 821066c:	e8 0f d8 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8210671:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8210677:	89 04 24             	mov    %eax,(%esp)
 821067a:	e8 c9 05 f0 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 821067f:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8210685:	c7 85 48 ff ff ff 64 	movl   $0x64,-0xb8(%ebp)
 821068c:	00 00 00 
 821068f:	83 bd 40 ff ff ff 00 	cmpl   $0x0,-0xc0(%ebp)
 8210696:	74 41                	je     82106d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x47ad>
 8210698:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 821069e:	89 04 24             	mov    %eax,(%esp)
 82106a1:	e8 54 0c ee ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 82106a6:	84 c0                	test   %al,%al
 82106a8:	74 2f                	je     82106d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x47ad>
 82106aa:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 82106b0:	89 04 24             	mov    %eax,(%esp)
 82106b3:	e8 44 c3 01 00       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 82106b8:	3b 85 48 ff ff ff    	cmp    -0xb8(%ebp),%eax
 82106be:	0f 9c c0             	setl   %al
 82106c1:	84 c0                	test   %al,%al
 82106c3:	74 14                	je     82106d9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x47ad>
 82106c5:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 82106cb:	89 04 24             	mov    %eax,(%esp)
 82106ce:	e8 29 c3 01 00       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 82106d3:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 82106d9:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 82106df:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82106e6:	00 
 82106e7:	8d 95 20 fd ff ff    	lea    -0x2e0(%ebp),%edx
 82106ed:	89 54 24 10          	mov    %edx,0x10(%esp)
 82106f1:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 82106f8:	00 
 82106f9:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 82106ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210703:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210707:	8b 45 0c             	mov    0xc(%ebp),%eax
 821070a:	89 04 24             	mov    %eax,(%esp)
 821070d:	e8 c2 af 46 00       	call   867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>
 8210712:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8210718:	83 bd 4c ff ff ff 00 	cmpl   $0x0,-0xb4(%ebp)
 821071f:	0f 88 a1 00 00 00    	js     82107c6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x489a>
 8210725:	8b 45 0c             	mov    0xc(%ebp),%eax
 8210728:	89 04 24             	mov    %eax,(%esp)
 821072b:	e8 f8 08 ef ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8210730:	89 c7                	mov    %eax,%edi
 8210732:	8b 45 0c             	mov    0xc(%ebp),%eax
 8210735:	89 04 24             	mov    %eax,(%esp)
 8210738:	e8 31 9c ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 821073d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8210744:	00 
 8210745:	89 04 24             	mov    %eax,(%esp)
 8210748:	e8 fe 88 ef ff       	call   810904b <_Z14NumberToStringji>
 821074d:	89 c6                	mov    %eax,%esi
 821074f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8210756:	00 
 8210757:	c7 44 24 08 16 b9 00 	movl   $0xb916,0x8(%esp)
 821075e:	00 
 821075f:	c7 44 24 04 20 df bc 	movl   $0x8bcdf20,0x4(%esp)
 8210766:	08 
 8210767:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 821076d:	89 04 24             	mov    %eax,(%esp)
 8210770:	e8 a3 ef 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8210775:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 821077b:	89 44 24 10          	mov    %eax,0x10(%esp)
 821077f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8210783:	89 74 24 08          	mov    %esi,0x8(%esp)
 8210787:	c7 44 24 04 90 30 bc 	movl   $0x8bc3090,0x4(%esp)
 821078e:	08 
 821078f:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 8210795:	89 04 24             	mov    %eax,(%esp)
 8210798:	e8 eb ef 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821079d:	8b 85 20 fd ff ff    	mov    -0x2e0(%ebp),%eax
 82107a3:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 82107a9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82107ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 82107b1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82107b8:	00 
 82107b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82107bc:	89 04 24             	mov    %eax,(%esp)
 82107bf:	e8 96 be 46 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 82107c4:	eb 0c                	jmp    82107d2 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x48a6>
 82107c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 82107cb:	be 00 00 00 00       	mov    $0x0,%esi
 82107d0:	eb 22                	jmp    82107f4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x48c8>
 82107d2:	be 01 00 00 00       	mov    $0x1,%esi
 82107d7:	eb 1b                	jmp    82107f4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x48c8>
 82107d9:	89 d3                	mov    %edx,%ebx
 82107db:	89 c6                	mov    %eax,%esi
 82107dd:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 82107e3:	89 04 24             	mov    %eax,(%esp)
 82107e6:	e8 f5 73 4f 00       	call   8707be0 <_ZNSsD1Ev>
 82107eb:	89 f0                	mov    %esi,%eax
 82107ed:	89 da                	mov    %ebx,%edx
 82107ef:	e9 53 2c 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 82107f4:	8d 85 24 fd ff ff    	lea    -0x2dc(%ebp),%eax
 82107fa:	89 04 24             	mov    %eax,(%esp)
 82107fd:	e8 de 73 4f 00       	call   8707be0 <_ZNSsD1Ev>
 8210802:	85 f6                	test   %esi,%esi
 8210804:	0f 84 55 2c 00 00    	je     821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 821080a:	e9 31 2c 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821080f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8210816:	00 
 8210817:	8b 45 14             	mov    0x14(%ebp),%eax
 821081a:	89 04 24             	mov    %eax,(%esp)
 821081d:	e8 ac 72 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8210822:	c7 44 24 04 ae 30 bc 	movl   $0x8bc30ae,0x4(%esp)
 8210829:	08 
 821082a:	89 04 24             	mov    %eax,(%esp)
 821082d:	e8 6f 01 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8210832:	84 c0                	test   %al,%al
 8210834:	0f 84 8d 00 00 00    	je     82108c7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x499b>
 821083a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8210841:	00 
 8210842:	8b 45 14             	mov    0x14(%ebp),%eax
 8210845:	89 04 24             	mov    %eax,(%esp)
 8210848:	e8 81 72 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821084d:	89 04 24             	mov    %eax,(%esp)
 8210850:	e8 9b 5c 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8210855:	89 04 24             	mov    %eax,(%esp)
 8210858:	e8 93 de e6 ff       	call   807e6f0 <atoi@plt>
 821085d:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8210863:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 821086a:	00 
 821086b:	8b 45 14             	mov    0x14(%ebp),%eax
 821086e:	89 04 24             	mov    %eax,(%esp)
 8210871:	e8 58 72 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8210876:	89 04 24             	mov    %eax,(%esp)
 8210879:	e8 72 5c 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821087e:	89 04 24             	mov    %eax,(%esp)
 8210881:	e8 6a de e6 ff       	call   807e6f0 <atoi@plt>
 8210886:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 821088c:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8210893:	00 
 8210894:	8b 45 0c             	mov    0xc(%ebp),%eax
 8210897:	89 04 24             	mov    %eax,(%esp)
 821089a:	e8 e5 cc ec ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 821089f:	8b 55 0c             	mov    0xc(%ebp),%edx
 82108a2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82108a6:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 82108ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 82108b0:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 82108b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82108ba:	89 04 24             	mov    %eax,(%esp)
 82108bd:	e8 62 54 33 00       	call   8545d24 <_ZN16CItemMakingSkill23SetItemMakingSkillPointEiiP5CUser>
 82108c2:	e9 79 2b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82108c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82108ce:	00 
 82108cf:	8b 45 14             	mov    0x14(%ebp),%eax
 82108d2:	89 04 24             	mov    %eax,(%esp)
 82108d5:	e8 f4 71 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82108da:	c7 44 24 04 b8 30 bc 	movl   $0x8bc30b8,0x4(%esp)
 82108e1:	08 
 82108e2:	89 04 24             	mov    %eax,(%esp)
 82108e5:	e8 b7 00 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82108ea:	84 c0                	test   %al,%al
 82108ec:	0f 84 3d 07 00 00    	je     821102f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5103>
 82108f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82108f9:	00 
 82108fa:	8b 45 14             	mov    0x14(%ebp),%eax
 82108fd:	89 04 24             	mov    %eax,(%esp)
 8210900:	e8 c9 71 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8210905:	c7 44 24 04 c2 30 bc 	movl   $0x8bc30c2,0x4(%esp)
 821090c:	08 
 821090d:	89 04 24             	mov    %eax,(%esp)
 8210910:	e8 8c 00 e7 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8210915:	84 c0                	test   %al,%al
 8210917:	0f 84 a9 02 00 00    	je     8210bc6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4c9a>
 821091d:	c7 85 5c ff ff ff c8 	movl   $0x8bc30c8,-0xa4(%ebp)
 8210924:	30 bc 08 
 8210927:	c7 85 60 ff ff ff d7 	movl   $0x8bc30d7,-0xa0(%ebp)
 821092e:	30 bc 08 
 8210931:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210937:	89 04 24             	mov    %eax,(%esp)
 821093a:	e8 97 40 f2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 821093f:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210945:	89 04 24             	mov    %eax,(%esp)
 8210948:	e8 f5 99 f6 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 821094d:	c7 85 d4 fd ff ff 05 	movl   $0x5,-0x22c(%ebp)
 8210954:	00 00 00 
 8210957:	c7 85 d8 fd ff ff dd 	movl   $0xbdd,-0x228(%ebp)
 821095e:	0b 00 00 
 8210961:	8d 85 cc fd ff ff    	lea    -0x234(%ebp),%eax
 8210967:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 821096d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210971:	8d 95 d8 fd ff ff    	lea    -0x228(%ebp),%edx
 8210977:	89 54 24 04          	mov    %edx,0x4(%esp)
 821097b:	89 04 24             	mov    %eax,(%esp)
 821097e:	e8 be 83 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210983:	83 ec 04             	sub    $0x4,%esp
 8210986:	8d 85 cc fd ff ff    	lea    -0x234(%ebp),%eax
 821098c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210990:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210996:	89 04 24             	mov    %eax,(%esp)
 8210999:	e8 68 cc ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 821099e:	c7 85 e4 fd ff ff 04 	movl   $0x4,-0x21c(%ebp)
 82109a5:	00 00 00 
 82109a8:	c7 85 e8 fd ff ff da 	movl   $0xbda,-0x218(%ebp)
 82109af:	0b 00 00 
 82109b2:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
 82109b8:	8d 95 e4 fd ff ff    	lea    -0x21c(%ebp),%edx
 82109be:	89 54 24 08          	mov    %edx,0x8(%esp)
 82109c2:	8d 95 e8 fd ff ff    	lea    -0x218(%ebp),%edx
 82109c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 82109cc:	89 04 24             	mov    %eax,(%esp)
 82109cf:	e8 6d 83 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 82109d4:	83 ec 04             	sub    $0x4,%esp
 82109d7:	8d 85 dc fd ff ff    	lea    -0x224(%ebp),%eax
 82109dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82109e1:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 82109e7:	89 04 24             	mov    %eax,(%esp)
 82109ea:	e8 17 cc ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 82109ef:	c7 85 f4 fd ff ff 03 	movl   $0x3,-0x20c(%ebp)
 82109f6:	00 00 00 
 82109f9:	c7 85 f8 fd ff ff d9 	movl   $0xbd9,-0x208(%ebp)
 8210a00:	0b 00 00 
 8210a03:	8d 85 ec fd ff ff    	lea    -0x214(%ebp),%eax
 8210a09:	8d 95 f4 fd ff ff    	lea    -0x20c(%ebp),%edx
 8210a0f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210a13:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 8210a19:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210a1d:	89 04 24             	mov    %eax,(%esp)
 8210a20:	e8 1c 83 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210a25:	83 ec 04             	sub    $0x4,%esp
 8210a28:	8d 85 ec fd ff ff    	lea    -0x214(%ebp),%eax
 8210a2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210a32:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210a38:	89 04 24             	mov    %eax,(%esp)
 8210a3b:	e8 c6 cb ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210a40:	c7 85 04 fe ff ff 02 	movl   $0x2,-0x1fc(%ebp)
 8210a47:	00 00 00 
 8210a4a:	c7 85 08 fe ff ff db 	movl   $0xbdb,-0x1f8(%ebp)
 8210a51:	0b 00 00 
 8210a54:	8d 85 fc fd ff ff    	lea    -0x204(%ebp),%eax
 8210a5a:	8d 95 04 fe ff ff    	lea    -0x1fc(%ebp),%edx
 8210a60:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210a64:	8d 95 08 fe ff ff    	lea    -0x1f8(%ebp),%edx
 8210a6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210a6e:	89 04 24             	mov    %eax,(%esp)
 8210a71:	e8 cb 82 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210a76:	83 ec 04             	sub    $0x4,%esp
 8210a79:	8d 85 fc fd ff ff    	lea    -0x204(%ebp),%eax
 8210a7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210a83:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210a89:	89 04 24             	mov    %eax,(%esp)
 8210a8c:	e8 75 cb ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210a91:	c7 85 14 fe ff ff 01 	movl   $0x1,-0x1ec(%ebp)
 8210a98:	00 00 00 
 8210a9b:	c7 85 18 fe ff ff dc 	movl   $0xbdc,-0x1e8(%ebp)
 8210aa2:	0b 00 00 
 8210aa5:	8d 85 0c fe ff ff    	lea    -0x1f4(%ebp),%eax
 8210aab:	8d 95 14 fe ff ff    	lea    -0x1ec(%ebp),%edx
 8210ab1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210ab5:	8d 95 18 fe ff ff    	lea    -0x1e8(%ebp),%edx
 8210abb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210abf:	89 04 24             	mov    %eax,(%esp)
 8210ac2:	e8 7a 82 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210ac7:	83 ec 04             	sub    $0x4,%esp
 8210aca:	8d 85 0c fe ff ff    	lea    -0x1f4(%ebp),%eax
 8210ad0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210ad4:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210ada:	89 04 24             	mov    %eax,(%esp)
 8210add:	e8 24 cb ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210ae2:	8d 85 36 f7 ff ff    	lea    -0x8ca(%ebp),%eax
 8210ae8:	89 c3                	mov    %eax,%ebx
 8210aea:	be 09 00 00 00       	mov    $0x9,%esi
 8210aef:	eb 0e                	jmp    8210aff <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4bd3>
 8210af1:	89 1c 24             	mov    %ebx,(%esp)
 8210af4:	e8 5b ad eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8210af9:	83 c3 3d             	add    $0x3d,%ebx
 8210afc:	83 ee 01             	sub    $0x1,%esi
 8210aff:	83 fe ff             	cmp    $0xffffffff,%esi
 8210b02:	0f 95 c0             	setne  %al
 8210b05:	84 c0                	test   %al,%al
 8210b07:	75 e8                	jne    8210af1 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4bc5>
 8210b09:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8210b10:	00 
 8210b11:	8d 85 36 f7 ff ff    	lea    -0x8ca(%ebp),%eax
 8210b17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210b1b:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210b21:	89 04 24             	mov    %eax,(%esp)
 8210b24:	e8 eb 5e 34 00       	call   8556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>
 8210b29:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8210b2f:	89 04 24             	mov    %eax,(%esp)
 8210b32:	e8 79 d8 e6 ff       	call   807e3b0 <strlen@plt>
 8210b37:	89 c3                	mov    %eax,%ebx
 8210b39:	8b 45 0c             	mov    0xc(%ebp),%eax
 8210b3c:	89 04 24             	mov    %eax,(%esp)
 8210b3f:	e8 0a b1 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8210b44:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8210b4b:	00 
 8210b4c:	c7 44 24 20 63 00 00 	movl   $0x63,0x20(%esp)
 8210b53:	00 
 8210b54:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8210b5b:	00 
 8210b5c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8210b60:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 8210b66:	89 54 24 14          	mov    %edx,0x14(%esp)
 8210b6a:	89 44 24 10          	mov    %eax,0x10(%esp)
 8210b6e:	c7 44 24 0c e8 03 00 	movl   $0x3e8,0xc(%esp)
 8210b75:	00 
 8210b76:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8210b7d:	00 
 8210b7e:	8d 85 36 f7 ff ff    	lea    -0x8ca(%ebp),%eax
 8210b84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210b88:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8210b8e:	89 04 24             	mov    %eax,(%esp)
 8210b91:	e8 d2 5f 34 00       	call   8556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>
 8210b96:	eb 1b                	jmp    8210bb3 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x4c87>
 8210b98:	89 d3                	mov    %edx,%ebx
 8210b9a:	89 c6                	mov    %eax,%esi
 8210b9c:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210ba2:	89 04 24             	mov    %eax,(%esp)
 8210ba5:	e8 40 3e f2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8210baa:	89 f0                	mov    %esi,%eax
 8210bac:	89 da                	mov    %ebx,%edx
 8210bae:	e9 94 28 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 8210bb3:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
 8210bb9:	89 04 24             	mov    %eax,(%esp)
 8210bbc:	e8 29 3e f2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8210bc1:	e9 7a 28 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8210bc6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8210bcd:	00 
 8210bce:	8b 45 14             	mov    0x14(%ebp),%eax
 8210bd1:	89 04 24             	mov    %eax,(%esp)
 8210bd4:	e8 f5 6e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8210bd9:	c7 44 24 04 eb 30 bc 	movl   $0x8bc30eb,0x4(%esp)
 8210be0:	08 
 8210be1:	89 04 24             	mov    %eax,(%esp)
 8210be4:	e8 b8 fd e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8210be9:	84 c0                	test   %al,%al
 8210beb:	0f 84 4f 28 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8210bf1:	c7 85 64 ff ff ff c8 	movl   $0x8bc30c8,-0x9c(%ebp)
 8210bf8:	30 bc 08 
 8210bfb:	c7 85 68 ff ff ff f1 	movl   $0x8bc30f1,-0x98(%ebp)
 8210c02:	30 bc 08 
 8210c05:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210c0b:	89 04 24             	mov    %eax,(%esp)
 8210c0e:	e8 c3 3d f2 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8210c13:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210c19:	89 04 24             	mov    %eax,(%esp)
 8210c1c:	e8 21 97 f6 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8210c21:	c7 85 24 fe ff ff 05 	movl   $0x5,-0x1dc(%ebp)
 8210c28:	00 00 00 
 8210c2b:	c7 85 28 fe ff ff 10 	movl   $0x2710,-0x1d8(%ebp)
 8210c32:	27 00 00 
 8210c35:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 8210c3b:	8d 95 24 fe ff ff    	lea    -0x1dc(%ebp),%edx
 8210c41:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210c45:	8d 95 28 fe ff ff    	lea    -0x1d8(%ebp),%edx
 8210c4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210c4f:	89 04 24             	mov    %eax,(%esp)
 8210c52:	e8 ea 80 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210c57:	83 ec 04             	sub    $0x4,%esp
 8210c5a:	8d 85 1c fe ff ff    	lea    -0x1e4(%ebp),%eax
 8210c60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210c64:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210c6a:	89 04 24             	mov    %eax,(%esp)
 8210c6d:	e8 94 c9 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210c72:	c7 85 34 fe ff ff 05 	movl   $0x5,-0x1cc(%ebp)
 8210c79:	00 00 00 
 8210c7c:	c7 85 38 fe ff ff 11 	movl   $0x2711,-0x1c8(%ebp)
 8210c83:	27 00 00 
 8210c86:	8d 85 2c fe ff ff    	lea    -0x1d4(%ebp),%eax
 8210c8c:	8d 95 34 fe ff ff    	lea    -0x1cc(%ebp),%edx
 8210c92:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210c96:	8d 95 38 fe ff ff    	lea    -0x1c8(%ebp),%edx
 8210c9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210ca0:	89 04 24             	mov    %eax,(%esp)
 8210ca3:	e8 99 80 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210ca8:	83 ec 04             	sub    $0x4,%esp
 8210cab:	8d 85 2c fe ff ff    	lea    -0x1d4(%ebp),%eax
 8210cb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210cb5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210cbb:	89 04 24             	mov    %eax,(%esp)
 8210cbe:	e8 43 c9 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210cc3:	c7 85 44 fe ff ff 05 	movl   $0x5,-0x1bc(%ebp)
 8210cca:	00 00 00 
 8210ccd:	c7 85 48 fe ff ff 12 	movl   $0x2712,-0x1b8(%ebp)
 8210cd4:	27 00 00 
 8210cd7:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 8210cdd:	8d 95 44 fe ff ff    	lea    -0x1bc(%ebp),%edx
 8210ce3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210ce7:	8d 95 48 fe ff ff    	lea    -0x1b8(%ebp),%edx
 8210ced:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210cf1:	89 04 24             	mov    %eax,(%esp)
 8210cf4:	e8 48 80 fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210cf9:	83 ec 04             	sub    $0x4,%esp
 8210cfc:	8d 85 3c fe ff ff    	lea    -0x1c4(%ebp),%eax
 8210d02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210d06:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210d0c:	89 04 24             	mov    %eax,(%esp)
 8210d0f:	e8 f2 c8 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210d14:	c7 85 54 fe ff ff 05 	movl   $0x5,-0x1ac(%ebp)
 8210d1b:	00 00 00 
 8210d1e:	c7 85 58 fe ff ff 13 	movl   $0x2713,-0x1a8(%ebp)
 8210d25:	27 00 00 
 8210d28:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 8210d2e:	8d 95 54 fe ff ff    	lea    -0x1ac(%ebp),%edx
 8210d34:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210d38:	8d 95 58 fe ff ff    	lea    -0x1a8(%ebp),%edx
 8210d3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210d42:	89 04 24             	mov    %eax,(%esp)
 8210d45:	e8 f7 7f fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210d4a:	83 ec 04             	sub    $0x4,%esp
 8210d4d:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 8210d53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210d57:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210d5d:	89 04 24             	mov    %eax,(%esp)
 8210d60:	e8 a1 c8 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210d65:	c7 85 64 fe ff ff 05 	movl   $0x5,-0x19c(%ebp)
 8210d6c:	00 00 00 
 8210d6f:	c7 85 68 fe ff ff 14 	movl   $0x2714,-0x198(%ebp)
 8210d76:	27 00 00 
 8210d79:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 8210d7f:	8d 95 64 fe ff ff    	lea    -0x19c(%ebp),%edx
 8210d85:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210d89:	8d 95 68 fe ff ff    	lea    -0x198(%ebp),%edx
 8210d8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210d93:	89 04 24             	mov    %eax,(%esp)
 8210d96:	e8 a6 7f fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210d9b:	83 ec 04             	sub    $0x4,%esp
 8210d9e:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 8210da4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210da8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210dae:	89 04 24             	mov    %eax,(%esp)
 8210db1:	e8 50 c8 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210db6:	c7 85 74 fe ff ff 05 	movl   $0x5,-0x18c(%ebp)
 8210dbd:	00 00 00 
 8210dc0:	c7 85 78 fe ff ff 15 	movl   $0x2715,-0x188(%ebp)
 8210dc7:	27 00 00 
 8210dca:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 8210dd0:	8d 95 74 fe ff ff    	lea    -0x18c(%ebp),%edx
 8210dd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210dda:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 8210de0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210de4:	89 04 24             	mov    %eax,(%esp)
 8210de7:	e8 55 7f fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210dec:	83 ec 04             	sub    $0x4,%esp
 8210def:	8d 85 6c fe ff ff    	lea    -0x194(%ebp),%eax
 8210df5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210df9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210dff:	89 04 24             	mov    %eax,(%esp)
 8210e02:	e8 ff c7 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210e07:	c7 85 84 fe ff ff 05 	movl   $0x5,-0x17c(%ebp)
 8210e0e:	00 00 00 
 8210e11:	c7 85 88 fe ff ff 16 	movl   $0x2716,-0x178(%ebp)
 8210e18:	27 00 00 
 8210e1b:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 8210e21:	8d 95 84 fe ff ff    	lea    -0x17c(%ebp),%edx
 8210e27:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210e2b:	8d 95 88 fe ff ff    	lea    -0x178(%ebp),%edx
 8210e31:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210e35:	89 04 24             	mov    %eax,(%esp)
 8210e38:	e8 04 7f fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210e3d:	83 ec 04             	sub    $0x4,%esp
 8210e40:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 8210e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210e4a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210e50:	89 04 24             	mov    %eax,(%esp)
 8210e53:	e8 ae c7 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210e58:	c7 85 94 fe ff ff 05 	movl   $0x5,-0x16c(%ebp)
 8210e5f:	00 00 00 
 8210e62:	c7 85 98 fe ff ff 17 	movl   $0x2717,-0x168(%ebp)
 8210e69:	27 00 00 
 8210e6c:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 8210e72:	8d 95 94 fe ff ff    	lea    -0x16c(%ebp),%edx
 8210e78:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210e7c:	8d 95 98 fe ff ff    	lea    -0x168(%ebp),%edx
 8210e82:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210e86:	89 04 24             	mov    %eax,(%esp)
 8210e89:	e8 b3 7e fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210e8e:	83 ec 04             	sub    $0x4,%esp
 8210e91:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 8210e97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210e9b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210ea1:	89 04 24             	mov    %eax,(%esp)
 8210ea4:	e8 5d c7 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210ea9:	c7 85 a4 fe ff ff 05 	movl   $0x5,-0x15c(%ebp)
 8210eb0:	00 00 00 
 8210eb3:	c7 85 a8 fe ff ff 18 	movl   $0x2718,-0x158(%ebp)
 8210eba:	27 00 00 
 8210ebd:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8210ec3:	8d 95 a4 fe ff ff    	lea    -0x15c(%ebp),%edx
 8210ec9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210ecd:	8d 95 a8 fe ff ff    	lea    -0x158(%ebp),%edx
 8210ed3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210ed7:	89 04 24             	mov    %eax,(%esp)
 8210eda:	e8 62 7e fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210edf:	83 ec 04             	sub    $0x4,%esp
 8210ee2:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8210ee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210eec:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210ef2:	89 04 24             	mov    %eax,(%esp)
 8210ef5:	e8 0c c7 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210efa:	c7 85 b4 fe ff ff 05 	movl   $0x5,-0x14c(%ebp)
 8210f01:	00 00 00 
 8210f04:	c7 85 b8 fe ff ff 19 	movl   $0x2719,-0x148(%ebp)
 8210f0b:	27 00 00 
 8210f0e:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 8210f14:	8d 95 b4 fe ff ff    	lea    -0x14c(%ebp),%edx
 8210f1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8210f1e:	8d 95 b8 fe ff ff    	lea    -0x148(%ebp),%edx
 8210f24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8210f28:	89 04 24             	mov    %eax,(%esp)
 8210f2b:	e8 11 7e fa ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 8210f30:	83 ec 04             	sub    $0x4,%esp
 8210f33:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 8210f39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210f3d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210f43:	89 04 24             	mov    %eax,(%esp)
 8210f46:	e8 bb c6 ec ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8210f4b:	8d 85 d4 f4 ff ff    	lea    -0xb2c(%ebp),%eax
 8210f51:	89 c3                	mov    %eax,%ebx
 8210f53:	be 09 00 00 00       	mov    $0x9,%esi
 8210f58:	eb 0e                	jmp    8210f68 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x503c>
 8210f5a:	89 1c 24             	mov    %ebx,(%esp)
 8210f5d:	e8 f2 a8 eb ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8210f62:	83 c3 3d             	add    $0x3d,%ebx
 8210f65:	83 ee 01             	sub    $0x1,%esi
 8210f68:	83 fe ff             	cmp    $0xffffffff,%esi
 8210f6b:	0f 95 c0             	setne  %al
 8210f6e:	84 c0                	test   %al,%al
 8210f70:	75 e8                	jne    8210f5a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x502e>
 8210f72:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8210f79:	00 
 8210f7a:	8d 85 d4 f4 ff ff    	lea    -0xb2c(%ebp),%eax
 8210f80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210f84:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8210f8a:	89 04 24             	mov    %eax,(%esp)
 8210f8d:	e8 82 5a 34 00       	call   8556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>
 8210f92:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8210f98:	89 04 24             	mov    %eax,(%esp)
 8210f9b:	e8 10 d4 e6 ff       	call   807e3b0 <strlen@plt>
 8210fa0:	89 c3                	mov    %eax,%ebx
 8210fa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8210fa5:	89 04 24             	mov    %eax,(%esp)
 8210fa8:	e8 a1 ac eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8210fad:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8210fb4:	00 
 8210fb5:	c7 44 24 20 63 00 00 	movl   $0x63,0x20(%esp)
 8210fbc:	00 
 8210fbd:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8210fc4:	00 
 8210fc5:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8210fc9:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8210fcf:	89 54 24 14          	mov    %edx,0x14(%esp)
 8210fd3:	89 44 24 10          	mov    %eax,0x10(%esp)
 8210fd7:	c7 44 24 0c 0f 27 00 	movl   $0x270f,0xc(%esp)
 8210fde:	00 
 8210fdf:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8210fe6:	00 
 8210fe7:	8d 85 d4 f4 ff ff    	lea    -0xb2c(%ebp),%eax
 8210fed:	89 44 24 04          	mov    %eax,0x4(%esp)
 8210ff1:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8210ff7:	89 04 24             	mov    %eax,(%esp)
 8210ffa:	e8 69 5b 34 00       	call   8556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>
 8210fff:	eb 1b                	jmp    821101c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x50f0>
 8211001:	89 d3                	mov    %edx,%ebx
 8211003:	89 c6                	mov    %eax,%esi
 8211005:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 821100b:	89 04 24             	mov    %eax,(%esp)
 821100e:	e8 d7 39 f2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8211013:	89 f0                	mov    %esi,%eax
 8211015:	89 da                	mov    %ebx,%edx
 8211017:	e9 2b 24 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 821101c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8211022:	89 04 24             	mov    %eax,(%esp)
 8211025:	e8 c0 39 f2 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 821102a:	e9 11 24 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821102f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211036:	00 
 8211037:	8b 45 14             	mov    0x14(%ebp),%eax
 821103a:	89 04 24             	mov    %eax,(%esp)
 821103d:	e8 8c 6a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211042:	c7 44 24 04 01 31 bc 	movl   $0x8bc3101,0x4(%esp)
 8211049:	08 
 821104a:	89 04 24             	mov    %eax,(%esp)
 821104d:	e8 4f f9 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211052:	84 c0                	test   %al,%al
 8211054:	74 3d                	je     8211093 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5167>
 8211056:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821105d:	00 
 821105e:	8b 45 14             	mov    0x14(%ebp),%eax
 8211061:	89 04 24             	mov    %eax,(%esp)
 8211064:	e8 65 6a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211069:	c7 44 24 04 0b 31 bc 	movl   $0x8bc310b,0x4(%esp)
 8211070:	08 
 8211071:	89 04 24             	mov    %eax,(%esp)
 8211074:	e8 28 f9 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211079:	84 c0                	test   %al,%al
 821107b:	0f 84 bf 23 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211081:	e8 91 c9 3f 00       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 8211086:	89 04 24             	mov    %eax,(%esp)
 8211089:	e8 3e cc 3f 00       	call   860dccc <_ZN21CCirculationStatistic26InsertCirculationStatisticEv>
 821108e:	e9 ad 23 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211093:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821109a:	00 
 821109b:	8b 45 14             	mov    0x14(%ebp),%eax
 821109e:	89 04 24             	mov    %eax,(%esp)
 82110a1:	e8 28 6a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82110a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82110aa:	c7 04 24 10 31 bc 08 	movl   $0x8bc3110,(%esp)
 82110b1:	e8 2a 6a 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 82110b6:	84 c0                	test   %al,%al
 82110b8:	75 27                	jne    82110e1 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x51b5>
 82110ba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82110c1:	00 
 82110c2:	8b 45 14             	mov    0x14(%ebp),%eax
 82110c5:	89 04 24             	mov    %eax,(%esp)
 82110c8:	e8 01 6a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82110cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82110d1:	c7 04 24 1a 31 bc 08 	movl   $0x8bc311a,(%esp)
 82110d8:	e8 03 6a 02 00       	call   8237ae0 <_ZSteqIcSt11char_traitsIcESaIcEEbPKT_RKSbIS3_T0_T1_E>
 82110dd:	84 c0                	test   %al,%al
 82110df:	74 07                	je     82110e8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x51bc>
 82110e1:	b8 01 00 00 00       	mov    $0x1,%eax
 82110e6:	eb 05                	jmp    82110ed <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x51c1>
 82110e8:	b8 00 00 00 00       	mov    $0x0,%eax
 82110ed:	84 c0                	test   %al,%al
 82110ef:	74 37                	je     8211128 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x51fc>
 82110f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82110f8:	00 
 82110f9:	8b 45 14             	mov    0x14(%ebp),%eax
 82110fc:	89 04 24             	mov    %eax,(%esp)
 82110ff:	e8 ca 69 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211104:	89 04 24             	mov    %eax,(%esp)
 8211107:	e8 e4 53 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821110c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8211110:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 8211117:	00 
 8211118:	8b 45 0c             	mov    0xc(%ebp),%eax
 821111b:	89 04 24             	mov    %eax,(%esp)
 821111e:	e8 6d a9 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 8211123:	e9 18 23 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211128:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821112f:	00 
 8211130:	8b 45 14             	mov    0x14(%ebp),%eax
 8211133:	89 04 24             	mov    %eax,(%esp)
 8211136:	e8 93 69 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821113b:	c7 44 24 04 1e 31 bc 	movl   $0x8bc311e,0x4(%esp)
 8211142:	08 
 8211143:	89 04 24             	mov    %eax,(%esp)
 8211146:	e8 56 f8 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821114b:	84 c0                	test   %al,%al
 821114d:	0f 84 65 01 00 00    	je     82112b8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x538c>
 8211153:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821115a:	00 
 821115b:	8b 45 14             	mov    0x14(%ebp),%eax
 821115e:	89 04 24             	mov    %eax,(%esp)
 8211161:	e8 68 69 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211166:	89 04 24             	mov    %eax,(%esp)
 8211169:	e8 82 53 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821116e:	89 04 24             	mov    %eax,(%esp)
 8211171:	e8 7a d5 e6 ff       	call   807e6f0 <atoi@plt>
 8211176:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 821117c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821117f:	89 04 24             	mov    %eax,(%esp)
 8211182:	e8 f7 90 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8211187:	89 04 24             	mov    %eax,(%esp)
 821118a:	e8 6d c5 01 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 821118f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8211192:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8211198:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 821119f:	00 
 82111a0:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 82111a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 82111aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82111ae:	89 0c 24             	mov    %ecx,(%esp)
 82111b1:	e8 06 2b 47 00       	call   8683cbc <_ZN15cUserHistoryLog15ExpandInventoryEiii>
 82111b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82111b9:	89 04 24             	mov    %eax,(%esp)
 82111bc:	e8 bd 90 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82111c1:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 82111c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82111cb:	89 04 24             	mov    %eax,(%esp)
 82111ce:	e8 1b c5 01 00       	call   822d6ee <_ZN10CInventory22set_inventory_capacityEi>
 82111d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82111d6:	89 04 24             	mov    %eax,(%esp)
 82111d9:	e8 a0 90 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82111de:	89 04 24             	mov    %eax,(%esp)
 82111e1:	e8 16 c5 01 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 82111e6:	89 c7                	mov    %eax,%edi
 82111e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82111eb:	89 04 24             	mov    %eax,(%esp)
 82111ee:	e8 5b aa eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82111f3:	89 c6                	mov    %eax,%esi
 82111f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82111f8:	89 04 24             	mov    %eax,(%esp)
 82111fb:	e8 96 7a eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8211200:	89 c3                	mov    %eax,%ebx
 8211202:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211205:	89 04 24             	mov    %eax,(%esp)
 8211208:	e8 83 aa eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821120d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8211211:	89 74 24 08          	mov    %esi,0x8(%esp)
 8211215:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8211219:	89 04 24             	mov    %eax,(%esp)
 821121c:	e8 f1 3a 23 00       	call   8444d12 <_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji>
 8211221:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 8211227:	89 04 24             	mov    %eax,(%esp)
 821122a:	e8 b7 a6 eb ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 821122f:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 8211236:	00 
 8211237:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821123e:	00 
 821123f:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 8211245:	89 04 24             	mov    %eax,(%esp)
 8211248:	e8 af a6 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821124d:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 8211254:	00 
 8211255:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 821125b:	89 04 24             	mov    %eax,(%esp)
 821125e:	e8 41 8c ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8211263:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211266:	89 04 24             	mov    %eax,(%esp)
 8211269:	e8 10 90 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 821126e:	89 04 24             	mov    %eax,(%esp)
 8211271:	e8 86 c4 01 00       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 8211276:	89 44 24 04          	mov    %eax,0x4(%esp)
 821127a:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 8211280:	89 04 24             	mov    %eax,(%esp)
 8211283:	e8 1c 8c ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8211288:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821128f:	00 
 8211290:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 8211296:	89 04 24             	mov    %eax,(%esp)
 8211299:	e8 ba a6 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821129e:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 82112a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82112a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82112ab:	89 04 24             	mov    %eax,(%esp)
 82112ae:	e8 07 73 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82112b3:	e9 88 21 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82112b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82112bf:	00 
 82112c0:	8b 45 14             	mov    0x14(%ebp),%eax
 82112c3:	89 04 24             	mov    %eax,(%esp)
 82112c6:	e8 03 68 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82112cb:	c7 44 24 04 27 31 bc 	movl   $0x8bc3127,0x4(%esp)
 82112d2:	08 
 82112d3:	89 04 24             	mov    %eax,(%esp)
 82112d6:	e8 c6 f6 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82112db:	84 c0                	test   %al,%al
 82112dd:	0f 84 6e 03 00 00    	je     8211651 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5725>
 82112e3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82112ea:	00 
 82112eb:	8b 45 14             	mov    0x14(%ebp),%eax
 82112ee:	89 04 24             	mov    %eax,(%esp)
 82112f1:	e8 d8 67 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82112f6:	89 04 24             	mov    %eax,(%esp)
 82112f9:	e8 f2 51 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82112fe:	89 04 24             	mov    %eax,(%esp)
 8211301:	e8 ea d3 e6 ff       	call   807e6f0 <atoi@plt>
 8211306:	89 c3                	mov    %eax,%ebx
 8211308:	e8 8e ae eb ff       	call   80cc19b <_Z14G_CDataManagerv>
 821130d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8211311:	89 04 24             	mov    %eax,(%esp)
 8211314:	e8 19 e7 14 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8211319:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 821131f:	83 bd 70 ff ff ff 00 	cmpl   $0x0,-0x90(%ebp)
 8211326:	0f 85 6c 01 00 00    	jne    8211498 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x556c>
 821132c:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 8211332:	b8 00 00 00 00       	mov    $0x0,%eax
 8211337:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 821133c:	89 d7                	mov    %edx,%edi
 821133e:	f3 ab                	rep stos %eax,%es:(%edi)
 8211340:	89 fa                	mov    %edi,%edx
 8211342:	66 89 02             	mov    %ax,(%edx)
 8211345:	83 c2 02             	add    $0x2,%edx
 8211348:	88 02                	mov    %al,(%edx)
 821134a:	83 c2 01             	add    $0x1,%edx
 821134d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211354:	00 
 8211355:	8b 45 14             	mov    0x14(%ebp),%eax
 8211358:	89 04 24             	mov    %eax,(%esp)
 821135b:	e8 6e 67 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211360:	89 04 24             	mov    %eax,(%esp)
 8211363:	e8 88 51 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8211368:	89 44 24 08          	mov    %eax,0x8(%esp)
 821136c:	c7 44 24 04 69 30 bc 	movl   $0x8bc3069,0x4(%esp)
 8211373:	08 
 8211374:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 821137a:	89 04 24             	mov    %eax,(%esp)
 821137d:	e8 be d0 e6 ff       	call   807e440 <sprintf@plt>
 8211382:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 8211388:	89 04 24             	mov    %eax,(%esp)
 821138b:	e8 bc c9 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8211390:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8211397:	00 
 8211398:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821139f:	00 
 82113a0:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 82113a6:	89 04 24             	mov    %eax,(%esp)
 82113a9:	e8 4e a5 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82113ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82113b5:	00 
 82113b6:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 82113bc:	89 04 24             	mov    %eax,(%esp)
 82113bf:	e8 5c a5 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82113c4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82113cb:	00 
 82113cc:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 82113d2:	89 04 24             	mov    %eax,(%esp)
 82113d5:	e8 ca 8a ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82113da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82113e1:	00 
 82113e2:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 82113e8:	89 04 24             	mov    %eax,(%esp)
 82113eb:	e8 30 a5 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82113f0:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 82113f6:	89 04 24             	mov    %eax,(%esp)
 82113f9:	e8 b2 cf e6 ff       	call   807e3b0 <strlen@plt>
 82113fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211402:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 8211408:	89 04 24             	mov    %eax,(%esp)
 821140b:	e8 2c a5 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8211410:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211416:	89 04 24             	mov    %eax,(%esp)
 8211419:	e8 92 cf e6 ff       	call   807e3b0 <strlen@plt>
 821141e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8211422:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211428:	89 44 24 04          	mov    %eax,0x4(%esp)
 821142c:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 8211432:	89 04 24             	mov    %eax,(%esp)
 8211435:	e8 aa 5f fa ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 821143a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211441:	00 
 8211442:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 8211448:	89 04 24             	mov    %eax,(%esp)
 821144b:	e8 08 a5 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8211450:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 8211456:	89 44 24 04          	mov    %eax,0x4(%esp)
 821145a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821145d:	89 04 24             	mov    %eax,(%esp)
 8211460:	e8 55 71 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8211465:	bb 00 00 00 00       	mov    $0x0,%ebx
 821146a:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 8211470:	89 04 24             	mov    %eax,(%esp)
 8211473:	e8 08 ca 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8211478:	e9 e2 1f 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 821147d:	89 d3                	mov    %edx,%ebx
 821147f:	89 c6                	mov    %eax,%esi
 8211481:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 8211487:	89 04 24             	mov    %eax,(%esp)
 821148a:	e8 f1 c9 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821148f:	89 f0                	mov    %esi,%eax
 8211491:	89 da                	mov    %ebx,%edx
 8211493:	e9 af 1f 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 8211498:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 821149e:	89 04 24             	mov    %eax,(%esp)
 82114a1:	e8 a2 f7 ef ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 82114a6:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 82114ac:	c7 85 78 ff ff ff 64 	movl   $0x64,-0x88(%ebp)
 82114b3:	00 00 00 
 82114b6:	83 bd 70 ff ff ff 00 	cmpl   $0x0,-0x90(%ebp)
 82114bd:	74 41                	je     8211500 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x55d4>
 82114bf:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 82114c5:	89 04 24             	mov    %eax,(%esp)
 82114c8:	e8 2d fe ed ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 82114cd:	84 c0                	test   %al,%al
 82114cf:	74 2f                	je     8211500 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x55d4>
 82114d1:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 82114d7:	89 04 24             	mov    %eax,(%esp)
 82114da:	e8 1d b5 01 00       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 82114df:	3b 85 78 ff ff ff    	cmp    -0x88(%ebp),%eax
 82114e5:	0f 9c c0             	setl   %al
 82114e8:	84 c0                	test   %al,%al
 82114ea:	74 14                	je     8211500 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x55d4>
 82114ec:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 82114f2:	89 04 24             	mov    %eax,(%esp)
 82114f5:	e8 02 b5 01 00       	call   822c9fc <_ZNK14CStackableItem17getStackableLimitEv>
 82114fa:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8211500:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8211506:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 821150d:	00 
 821150e:	8d 95 ec fc ff ff    	lea    -0x314(%ebp),%edx
 8211514:	89 54 24 10          	mov    %edx,0x10(%esp)
 8211518:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 821151f:	00 
 8211520:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 8211526:	89 54 24 08          	mov    %edx,0x8(%esp)
 821152a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821152e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211531:	89 04 24             	mov    %eax,(%esp)
 8211534:	e8 9b a1 46 00       	call   867b6d4 <_ZN5CUser7AddItemEii14eItemAddReasonR14ENUM_ITEMSPACEi>
 8211539:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 821153f:	83 bd 7c ff ff ff 00 	cmpl   $0x0,-0x84(%ebp)
 8211546:	0f 88 fb 00 00 00    	js     8211647 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x571b>
 821154c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821154f:	89 04 24             	mov    %eax,(%esp)
 8211552:	e8 b3 1e f8 ff       	call   819340a <_ZN15CUserCharacInfo21getCurCharacInvenRefWEv>
 8211557:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 821155d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8211561:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211568:	00 
 8211569:	89 04 24             	mov    %eax,(%esp)
 821156c:	e8 3d ad 2e 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 8211571:	89 45 80             	mov    %eax,-0x80(%ebp)
 8211574:	83 7d 80 00          	cmpl   $0x0,-0x80(%ebp)
 8211578:	74 29                	je     82115a3 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5677>
 821157a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8211581:	00 
 8211582:	8b 45 14             	mov    0x14(%ebp),%eax
 8211585:	89 04 24             	mov    %eax,(%esp)
 8211588:	e8 41 65 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821158d:	89 04 24             	mov    %eax,(%esp)
 8211590:	e8 5b 4f 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8211595:	89 04 24             	mov    %eax,(%esp)
 8211598:	e8 53 d1 e6 ff       	call   807e6f0 <atoi@plt>
 821159d:	8b 55 80             	mov    -0x80(%ebp),%edx
 82115a0:	89 42 07             	mov    %eax,0x7(%edx)
 82115a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82115a6:	89 04 24             	mov    %eax,(%esp)
 82115a9:	e8 7a fa ee ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82115ae:	89 c6                	mov    %eax,%esi
 82115b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82115b3:	89 04 24             	mov    %eax,(%esp)
 82115b6:	e8 b3 8d ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82115bb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82115c2:	00 
 82115c3:	89 04 24             	mov    %eax,(%esp)
 82115c6:	e8 80 7a ef ff       	call   810904b <_Z14NumberToStringji>
 82115cb:	89 c3                	mov    %eax,%ebx
 82115cd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82115d4:	00 
 82115d5:	c7 44 24 08 fb b9 00 	movl   $0xb9fb,0x8(%esp)
 82115dc:	00 
 82115dd:	c7 44 24 04 20 df bc 	movl   $0x8bcdf20,0x4(%esp)
 82115e4:	08 
 82115e5:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 82115eb:	89 04 24             	mov    %eax,(%esp)
 82115ee:	e8 25 e1 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82115f3:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 82115f9:	89 44 24 10          	mov    %eax,0x10(%esp)
 82115fd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8211601:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8211605:	c7 44 24 04 90 30 bc 	movl   $0x8bc3090,0x4(%esp)
 821160c:	08 
 821160d:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 8211613:	89 04 24             	mov    %eax,(%esp)
 8211616:	e8 6d e1 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821161b:	8b 85 ec fc ff ff    	mov    -0x314(%ebp),%eax
 8211621:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8211627:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821162b:	89 44 24 08          	mov    %eax,0x8(%esp)
 821162f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211636:	00 
 8211637:	8b 45 0c             	mov    0xc(%ebp),%eax
 821163a:	89 04 24             	mov    %eax,(%esp)
 821163d:	e8 18 b0 46 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8211642:	e9 f9 1d 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211647:	bb 00 00 00 00       	mov    $0x0,%ebx
 821164c:	e9 0e 1e 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8211651:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211658:	00 
 8211659:	8b 45 14             	mov    0x14(%ebp),%eax
 821165c:	89 04 24             	mov    %eax,(%esp)
 821165f:	e8 6a 64 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211664:	c7 44 24 04 30 31 bc 	movl   $0x8bc3130,0x4(%esp)
 821166b:	08 
 821166c:	89 04 24             	mov    %eax,(%esp)
 821166f:	e8 2d f3 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211674:	84 c0                	test   %al,%al
 8211676:	75 27                	jne    821169f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5773>
 8211678:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821167f:	00 
 8211680:	8b 45 14             	mov    0x14(%ebp),%eax
 8211683:	89 04 24             	mov    %eax,(%esp)
 8211686:	e8 43 64 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821168b:	c7 44 24 04 3b 31 bc 	movl   $0x8bc313b,0x4(%esp)
 8211692:	08 
 8211693:	89 04 24             	mov    %eax,(%esp)
 8211696:	e8 06 f3 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821169b:	84 c0                	test   %al,%al
 821169d:	74 07                	je     82116a6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x577a>
 821169f:	b8 01 00 00 00       	mov    $0x1,%eax
 82116a4:	eb 05                	jmp    82116ab <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x577f>
 82116a6:	b8 00 00 00 00       	mov    $0x0,%eax
 82116ab:	84 c0                	test   %al,%al
 82116ad:	0f 84 ec 01 00 00    	je     821189f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5973>
 82116b3:	e8 86 2e 02 00       	call   823453e <_Z18G_PacketDispatcherv>
 82116b8:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 82116bf:	00 
 82116c0:	89 04 24             	mov    %eax,(%esp)
 82116c3:	e8 66 08 02 00       	call   8231f2e <_ZN16PacketDispatcher13getDispatcherEi>
 82116c8:	89 45 84             	mov    %eax,-0x7c(%ebp)
 82116cb:	83 7d 84 00          	cmpl   $0x0,-0x7c(%ebp)
 82116cf:	75 0a                	jne    82116db <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x57af>
 82116d1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82116d6:	e9 84 1d 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 82116db:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 82116e1:	89 04 24             	mov    %eax,(%esp)
 82116e4:	e8 63 c6 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82116e9:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 82116f0:	00 
 82116f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82116f8:	00 
 82116f9:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 82116ff:	89 04 24             	mov    %eax,(%esp)
 8211702:	e8 f5 a1 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8211707:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821170e:	00 
 821170f:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211715:	89 04 24             	mov    %eax,(%esp)
 8211718:	e8 03 a2 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821171d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211724:	00 
 8211725:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 821172b:	89 04 24             	mov    %eax,(%esp)
 821172e:	e8 71 87 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8211733:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821173a:	00 
 821173b:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211741:	89 04 24             	mov    %eax,(%esp)
 8211744:	e8 f3 a1 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8211749:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211750:	00 
 8211751:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211757:	89 04 24             	mov    %eax,(%esp)
 821175a:	e8 dd a1 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 821175f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8211766:	00 
 8211767:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 821176d:	89 04 24             	mov    %eax,(%esp)
 8211770:	e8 ab a1 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8211775:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821177c:	00 
 821177d:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211783:	89 04 24             	mov    %eax,(%esp)
 8211786:	e8 19 87 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821178b:	c7 44 24 04 07 9b 00 	movl   $0x9b07,0x4(%esp)
 8211792:	00 
 8211793:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211799:	89 04 24             	mov    %eax,(%esp)
 821179c:	e8 9b a1 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82117a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82117a8:	00 
 82117a9:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 82117af:	89 04 24             	mov    %eax,(%esp)
 82117b2:	e8 85 a1 eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82117b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82117be:	00 
 82117bf:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 82117c5:	89 04 24             	mov    %eax,(%esp)
 82117c8:	e8 53 a1 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82117cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82117d4:	00 
 82117d5:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 82117db:	89 04 24             	mov    %eax,(%esp)
 82117de:	e8 3d a1 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82117e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82117ea:	00 
 82117eb:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 82117f1:	89 04 24             	mov    %eax,(%esp)
 82117f4:	e8 27 a1 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82117f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211800:	00 
 8211801:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211807:	89 04 24             	mov    %eax,(%esp)
 821180a:	e8 49 a1 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821180f:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 8211816:	00 
 8211817:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 821181d:	89 04 24             	mov    %eax,(%esp)
 8211820:	e8 8b 9f 01 00       	call   822b7b0 <_ZN18InterfacePacketBuf9set_indexEi>
 8211825:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8211828:	8b 00                	mov    (%eax),%eax
 821182a:	8b 30                	mov    (%eax),%esi
 821182c:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211832:	89 04 24             	mov    %eax,(%esp)
 8211835:	e8 2c 9f 01 00       	call   822b766 <_ZNK18InterfacePacketBuf3getEv>
 821183a:	89 44 24 08          	mov    %eax,0x8(%esp)
 821183e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211841:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211845:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8211848:	89 04 24             	mov    %eax,(%esp)
 821184b:	ff d6                	call   *%esi
 821184d:	85 c0                	test   %eax,%eax
 821184f:	0f 95 c0             	setne  %al
 8211852:	84 c0                	test   %al,%al
 8211854:	74 0c                	je     8211862 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5936>
 8211856:	bb 00 00 00 00       	mov    $0x0,%ebx
 821185b:	be 00 00 00 00       	mov    $0x0,%esi
 8211860:	eb 22                	jmp    8211884 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5958>
 8211862:	be 01 00 00 00       	mov    $0x1,%esi
 8211867:	eb 1b                	jmp    8211884 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5958>
 8211869:	89 d3                	mov    %edx,%ebx
 821186b:	89 c6                	mov    %eax,%esi
 821186d:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 8211873:	89 04 24             	mov    %eax,(%esp)
 8211876:	e8 05 c6 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821187b:	89 f0                	mov    %esi,%eax
 821187d:	89 da                	mov    %ebx,%edx
 821187f:	e9 c3 1b 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 8211884:	8d 85 d4 fc ff ff    	lea    -0x32c(%ebp),%eax
 821188a:	89 04 24             	mov    %eax,(%esp)
 821188d:	e8 ee c5 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8211892:	85 f6                	test   %esi,%esi
 8211894:	0f 84 c5 1b 00 00    	je     821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 821189a:	e9 a1 1b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821189f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82118a6:	00 
 82118a7:	8b 45 14             	mov    0x14(%ebp),%eax
 82118aa:	89 04 24             	mov    %eax,(%esp)
 82118ad:	e8 1c 62 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82118b2:	c7 44 24 04 3f 31 bc 	movl   $0x8bc313f,0x4(%esp)
 82118b9:	08 
 82118ba:	89 04 24             	mov    %eax,(%esp)
 82118bd:	e8 df f0 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82118c2:	84 c0                	test   %al,%al
 82118c4:	75 27                	jne    82118ed <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x59c1>
 82118c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82118cd:	00 
 82118ce:	8b 45 14             	mov    0x14(%ebp),%eax
 82118d1:	89 04 24             	mov    %eax,(%esp)
 82118d4:	e8 f5 61 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82118d9:	c7 44 24 04 47 31 bc 	movl   $0x8bc3147,0x4(%esp)
 82118e0:	08 
 82118e1:	89 04 24             	mov    %eax,(%esp)
 82118e4:	e8 b8 f0 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82118e9:	84 c0                	test   %al,%al
 82118eb:	74 07                	je     82118f4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x59c8>
 82118ed:	b8 01 00 00 00       	mov    $0x1,%eax
 82118f2:	eb 05                	jmp    82118f9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x59cd>
 82118f4:	b8 00 00 00 00       	mov    $0x0,%eax
 82118f9:	84 c0                	test   %al,%al
 82118fb:	74 6b                	je     8211968 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5a3c>
 82118fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211900:	89 04 24             	mov    %eax,(%esp)
 8211903:	e8 44 38 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8211908:	89 45 88             	mov    %eax,-0x78(%ebp)
 821190b:	83 7d 88 00          	cmpl   $0x0,-0x78(%ebp)
 821190f:	74 17                	je     8211928 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x59fc>
 8211911:	8b 45 88             	mov    -0x78(%ebp),%eax
 8211914:	89 04 24             	mov    %eax,(%esp)
 8211917:	e8 4e 88 38 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 821191c:	83 f8 01             	cmp    $0x1,%eax
 821191f:	7e 07                	jle    8211928 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x59fc>
 8211921:	b8 01 00 00 00       	mov    $0x1,%eax
 8211926:	eb 05                	jmp    821192d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5a01>
 8211928:	b8 00 00 00 00       	mov    $0x0,%eax
 821192d:	84 c0                	test   %al,%al
 821192f:	0f 84 0b 1b 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211935:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821193c:	00 
 821193d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211944:	00 
 8211945:	8b 45 88             	mov    -0x78(%ebp),%eax
 8211948:	89 04 24             	mov    %eax,(%esp)
 821194b:	e8 ee 9d 38 00       	call   859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>
 8211950:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211957:	00 
 8211958:	8b 45 88             	mov    -0x78(%ebp),%eax
 821195b:	89 04 24             	mov    %eax,(%esp)
 821195e:	e8 d3 bf 01 00       	call   822d936 <_ZN6CParty15set_quick_partyEb>
 8211963:	e9 d8 1a 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211968:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821196f:	00 
 8211970:	8b 45 14             	mov    0x14(%ebp),%eax
 8211973:	89 04 24             	mov    %eax,(%esp)
 8211976:	e8 53 61 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821197b:	c7 44 24 04 4b 31 bc 	movl   $0x8bc314b,0x4(%esp)
 8211982:	08 
 8211983:	89 04 24             	mov    %eax,(%esp)
 8211986:	e8 16 f0 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821198b:	84 c0                	test   %al,%al
 821198d:	75 27                	jne    82119b6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5a8a>
 821198f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211996:	00 
 8211997:	8b 45 14             	mov    0x14(%ebp),%eax
 821199a:	89 04 24             	mov    %eax,(%esp)
 821199d:	e8 2c 61 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82119a2:	c7 44 24 04 54 31 bc 	movl   $0x8bc3154,0x4(%esp)
 82119a9:	08 
 82119aa:	89 04 24             	mov    %eax,(%esp)
 82119ad:	e8 ef ef e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82119b2:	84 c0                	test   %al,%al
 82119b4:	74 07                	je     82119bd <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5a91>
 82119b6:	b8 01 00 00 00       	mov    $0x1,%eax
 82119bb:	eb 05                	jmp    82119c2 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5a96>
 82119bd:	b8 00 00 00 00       	mov    $0x0,%eax
 82119c2:	84 c0                	test   %al,%al
 82119c4:	74 6b                	je     8211a31 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5b05>
 82119c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82119c9:	89 04 24             	mov    %eax,(%esp)
 82119cc:	e8 7b 37 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82119d1:	89 45 8c             	mov    %eax,-0x74(%ebp)
 82119d4:	83 7d 8c 00          	cmpl   $0x0,-0x74(%ebp)
 82119d8:	74 17                	je     82119f1 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5ac5>
 82119da:	8b 45 8c             	mov    -0x74(%ebp),%eax
 82119dd:	89 04 24             	mov    %eax,(%esp)
 82119e0:	e8 85 87 38 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 82119e5:	83 f8 01             	cmp    $0x1,%eax
 82119e8:	7e 07                	jle    82119f1 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5ac5>
 82119ea:	b8 01 00 00 00       	mov    $0x1,%eax
 82119ef:	eb 05                	jmp    82119f6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5aca>
 82119f1:	b8 00 00 00 00       	mov    $0x0,%eax
 82119f6:	84 c0                	test   %al,%al
 82119f8:	0f 84 42 1a 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82119fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8211a05:	00 
 8211a06:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211a0d:	00 
 8211a0e:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8211a11:	89 04 24             	mov    %eax,(%esp)
 8211a14:	e8 25 9d 38 00       	call   859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>
 8211a19:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211a20:	00 
 8211a21:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8211a24:	89 04 24             	mov    %eax,(%esp)
 8211a27:	e8 0a bf 01 00       	call   822d936 <_ZN6CParty15set_quick_partyEb>
 8211a2c:	e9 0f 1a 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211a31:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211a38:	00 
 8211a39:	8b 45 14             	mov    0x14(%ebp),%eax
 8211a3c:	89 04 24             	mov    %eax,(%esp)
 8211a3f:	e8 8a 60 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211a44:	c7 44 24 04 59 31 bc 	movl   $0x8bc3159,0x4(%esp)
 8211a4b:	08 
 8211a4c:	89 04 24             	mov    %eax,(%esp)
 8211a4f:	e8 4d ef e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211a54:	84 c0                	test   %al,%al
 8211a56:	75 27                	jne    8211a7f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5b53>
 8211a58:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211a5f:	00 
 8211a60:	8b 45 14             	mov    0x14(%ebp),%eax
 8211a63:	89 04 24             	mov    %eax,(%esp)
 8211a66:	e8 63 60 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211a6b:	c7 44 24 04 65 31 bc 	movl   $0x8bc3165,0x4(%esp)
 8211a72:	08 
 8211a73:	89 04 24             	mov    %eax,(%esp)
 8211a76:	e8 26 ef e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211a7b:	84 c0                	test   %al,%al
 8211a7d:	74 07                	je     8211a86 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5b5a>
 8211a7f:	b8 01 00 00 00       	mov    $0x1,%eax
 8211a84:	eb 05                	jmp    8211a8b <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5b5f>
 8211a86:	b8 00 00 00 00       	mov    $0x0,%eax
 8211a8b:	84 c0                	test   %al,%al
 8211a8d:	0f 84 d7 01 00 00    	je     8211c6a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5d3e>
 8211a93:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211a9a:	00 
 8211a9b:	8b 45 14             	mov    0x14(%ebp),%eax
 8211a9e:	89 04 24             	mov    %eax,(%esp)
 8211aa1:	e8 28 60 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211aa6:	89 04 24             	mov    %eax,(%esp)
 8211aa9:	e8 42 4a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8211aae:	89 04 24             	mov    %eax,(%esp)
 8211ab1:	e8 3a cc e6 ff       	call   807e6f0 <atoi@plt>
 8211ab6:	89 45 90             	mov    %eax,-0x70(%ebp)
 8211ab9:	83 7d 90 00          	cmpl   $0x0,-0x70(%ebp)
 8211abd:	78 06                	js     8211ac5 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5b99>
 8211abf:	83 7d 90 0a          	cmpl   $0xa,-0x70(%ebp)
 8211ac3:	7e 0a                	jle    8211acf <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5ba3>
 8211ac5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8211aca:	e9 90 19 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8211acf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211ad2:	89 04 24             	mov    %eax,(%esp)
 8211ad5:	e8 72 36 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8211ada:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8211add:	83 7d 94 00          	cmpl   $0x0,-0x6c(%ebp)
 8211ae1:	74 17                	je     8211afa <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5bce>
 8211ae3:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8211ae6:	89 04 24             	mov    %eax,(%esp)
 8211ae9:	e8 7c 86 38 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8211aee:	83 f8 01             	cmp    $0x1,%eax
 8211af1:	7e 07                	jle    8211afa <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5bce>
 8211af3:	b8 01 00 00 00       	mov    $0x1,%eax
 8211af8:	eb 05                	jmp    8211aff <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5bd3>
 8211afa:	b8 00 00 00 00       	mov    $0x0,%eax
 8211aff:	84 c0                	test   %al,%al
 8211b01:	0f 84 39 19 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211b07:	8b 45 90             	mov    -0x70(%ebp),%eax
 8211b0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211b0e:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8211b11:	89 04 24             	mov    %eax,(%esp)
 8211b14:	e8 49 be 01 00       	call   822d962 <_ZN6CParty23set_gm_random_buff_typeEN10QuickParty14RandomBuffTypeE>
 8211b19:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 8211b1f:	b8 00 00 00 00       	mov    $0x0,%eax
 8211b24:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 8211b29:	89 d7                	mov    %edx,%edi
 8211b2b:	f3 ab                	rep stos %eax,%es:(%edi)
 8211b2d:	89 fa                	mov    %edi,%edx
 8211b2f:	66 89 02             	mov    %ax,(%edx)
 8211b32:	83 c2 02             	add    $0x2,%edx
 8211b35:	88 02                	mov    %al,(%edx)
 8211b37:	83 c2 01             	add    $0x1,%edx
 8211b3a:	8b 45 90             	mov    -0x70(%ebp),%eax
 8211b3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8211b41:	c7 44 24 04 68 31 bc 	movl   $0x8bc3168,0x4(%esp)
 8211b48:	08 
 8211b49:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211b4f:	89 04 24             	mov    %eax,(%esp)
 8211b52:	e8 e9 c8 e6 ff       	call   807e440 <sprintf@plt>
 8211b57:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211b5d:	89 04 24             	mov    %eax,(%esp)
 8211b60:	e8 e7 c1 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8211b65:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8211b6c:	00 
 8211b6d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211b74:	00 
 8211b75:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211b7b:	89 04 24             	mov    %eax,(%esp)
 8211b7e:	e8 79 9d eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8211b83:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211b8a:	00 
 8211b8b:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211b91:	89 04 24             	mov    %eax,(%esp)
 8211b94:	e8 87 9d eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8211b99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211ba0:	00 
 8211ba1:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211ba7:	89 04 24             	mov    %eax,(%esp)
 8211baa:	e8 f5 82 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8211baf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211bb6:	00 
 8211bb7:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211bbd:	89 04 24             	mov    %eax,(%esp)
 8211bc0:	e8 5b 9d eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8211bc5:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211bcb:	89 04 24             	mov    %eax,(%esp)
 8211bce:	e8 dd c7 e6 ff       	call   807e3b0 <strlen@plt>
 8211bd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211bd7:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211bdd:	89 04 24             	mov    %eax,(%esp)
 8211be0:	e8 57 9d eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8211be5:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211beb:	89 04 24             	mov    %eax,(%esp)
 8211bee:	e8 bd c7 e6 ff       	call   807e3b0 <strlen@plt>
 8211bf3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8211bf7:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211bfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211c01:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211c07:	89 04 24             	mov    %eax,(%esp)
 8211c0a:	e8 d5 57 fa ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 8211c0f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211c16:	00 
 8211c17:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211c1d:	89 04 24             	mov    %eax,(%esp)
 8211c20:	e8 33 9d eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8211c25:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211c2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211c2f:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8211c32:	89 04 24             	mov    %eax,(%esp)
 8211c35:	e8 14 b5 38 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8211c3a:	eb 1b                	jmp    8211c57 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5d2b>
 8211c3c:	89 d3                	mov    %edx,%ebx
 8211c3e:	89 c6                	mov    %eax,%esi
 8211c40:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211c46:	89 04 24             	mov    %eax,(%esp)
 8211c49:	e8 32 c2 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8211c4e:	89 f0                	mov    %esi,%eax
 8211c50:	89 da                	mov    %ebx,%edx
 8211c52:	e9 f0 17 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 8211c57:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8211c5d:	89 04 24             	mov    %eax,(%esp)
 8211c60:	e8 1b c2 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8211c65:	e9 d6 17 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211c6a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211c71:	00 
 8211c72:	8b 45 14             	mov    0x14(%ebp),%eax
 8211c75:	89 04 24             	mov    %eax,(%esp)
 8211c78:	e8 51 5e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211c7d:	c7 44 24 04 8f 31 bc 	movl   $0x8bc318f,0x4(%esp)
 8211c84:	08 
 8211c85:	89 04 24             	mov    %eax,(%esp)
 8211c88:	e8 14 ed e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211c8d:	84 c0                	test   %al,%al
 8211c8f:	75 27                	jne    8211cb8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5d8c>
 8211c91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211c98:	00 
 8211c99:	8b 45 14             	mov    0x14(%ebp),%eax
 8211c9c:	89 04 24             	mov    %eax,(%esp)
 8211c9f:	e8 2a 5e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211ca4:	c7 44 24 04 99 31 bc 	movl   $0x8bc3199,0x4(%esp)
 8211cab:	08 
 8211cac:	89 04 24             	mov    %eax,(%esp)
 8211caf:	e8 ed ec e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211cb4:	84 c0                	test   %al,%al
 8211cb6:	74 07                	je     8211cbf <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5d93>
 8211cb8:	b8 01 00 00 00       	mov    $0x1,%eax
 8211cbd:	eb 05                	jmp    8211cc4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5d98>
 8211cbf:	b8 00 00 00 00       	mov    $0x0,%eax
 8211cc4:	84 c0                	test   %al,%al
 8211cc6:	0f 84 f5 01 00 00    	je     8211ec1 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5f95>
 8211ccc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211cd3:	00 
 8211cd4:	8b 45 14             	mov    0x14(%ebp),%eax
 8211cd7:	89 04 24             	mov    %eax,(%esp)
 8211cda:	e8 ef 5d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211cdf:	89 04 24             	mov    %eax,(%esp)
 8211ce2:	e8 09 48 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8211ce7:	89 04 24             	mov    %eax,(%esp)
 8211cea:	e8 01 ca e6 ff       	call   807e6f0 <atoi@plt>
 8211cef:	89 45 98             	mov    %eax,-0x68(%ebp)
 8211cf2:	83 7d 98 00          	cmpl   $0x0,-0x68(%ebp)
 8211cf6:	78 06                	js     8211cfe <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5dd2>
 8211cf8:	83 7d 98 64          	cmpl   $0x64,-0x68(%ebp)
 8211cfc:	7e 0a                	jle    8211d08 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5ddc>
 8211cfe:	bb 00 00 00 00       	mov    $0x0,%ebx
 8211d03:	e9 57 17 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8211d08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211d0b:	89 04 24             	mov    %eax,(%esp)
 8211d0e:	e8 39 34 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8211d13:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8211d16:	83 7d 9c 00          	cmpl   $0x0,-0x64(%ebp)
 8211d1a:	74 17                	je     8211d33 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5e07>
 8211d1c:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8211d1f:	89 04 24             	mov    %eax,(%esp)
 8211d22:	e8 43 84 38 00       	call   859a16a <_ZN6CParty16get_member_countEv>
 8211d27:	83 f8 01             	cmp    $0x1,%eax
 8211d2a:	7e 07                	jle    8211d33 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5e07>
 8211d2c:	b8 01 00 00 00       	mov    $0x1,%eax
 8211d31:	eb 05                	jmp    8211d38 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5e0c>
 8211d33:	b8 00 00 00 00       	mov    $0x0,%eax
 8211d38:	84 c0                	test   %al,%al
 8211d3a:	0f 84 00 17 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211d40:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8211d43:	8d 90 2c 03 00 00    	lea    0x32c(%eax),%edx
 8211d49:	8b 45 98             	mov    -0x68(%ebp),%eax
 8211d4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211d50:	89 14 24             	mov    %edx,(%esp)
 8211d53:	e8 5a ba 01 00       	call   822d7b2 <_ZN10BattleData22SetHellPartyValueTotalEi>
 8211d58:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8211d5b:	89 04 24             	mov    %eax,(%esp)
 8211d5e:	e8 19 4c 3a 00       	call   85b697c <_ZN6CParty20send_hellParty_valueEv>
 8211d63:	8d 95 98 f9 ff ff    	lea    -0x668(%ebp),%edx
 8211d69:	b8 00 00 00 00       	mov    $0x0,%eax
 8211d6e:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 8211d73:	89 d7                	mov    %edx,%edi
 8211d75:	f3 ab                	rep stos %eax,%es:(%edi)
 8211d77:	89 fa                	mov    %edi,%edx
 8211d79:	66 89 02             	mov    %ax,(%edx)
 8211d7c:	83 c2 02             	add    $0x2,%edx
 8211d7f:	88 02                	mov    %al,(%edx)
 8211d81:	83 c2 01             	add    $0x1,%edx
 8211d84:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8211d87:	05 2c 03 00 00       	add    $0x32c,%eax
 8211d8c:	89 04 24             	mov    %eax,(%esp)
 8211d8f:	e8 30 ba 01 00       	call   822d7c4 <_ZN10BattleData22GetHellPartyValueTotalEv>
 8211d94:	89 44 24 08          	mov    %eax,0x8(%esp)
 8211d98:	c7 44 24 04 9c 31 bc 	movl   $0x8bc319c,0x4(%esp)
 8211d9f:	08 
 8211da0:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211da6:	89 04 24             	mov    %eax,(%esp)
 8211da9:	e8 92 c6 e6 ff       	call   807e440 <sprintf@plt>
 8211dae:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211db4:	89 04 24             	mov    %eax,(%esp)
 8211db7:	e8 90 bf 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8211dbc:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8211dc3:	00 
 8211dc4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211dcb:	00 
 8211dcc:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211dd2:	89 04 24             	mov    %eax,(%esp)
 8211dd5:	e8 22 9b eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8211dda:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211de1:	00 
 8211de2:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211de8:	89 04 24             	mov    %eax,(%esp)
 8211deb:	e8 30 9b eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8211df0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211df7:	00 
 8211df8:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211dfe:	89 04 24             	mov    %eax,(%esp)
 8211e01:	e8 9e 80 ec ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8211e06:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211e0d:	00 
 8211e0e:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211e14:	89 04 24             	mov    %eax,(%esp)
 8211e17:	e8 04 9b eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8211e1c:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211e22:	89 04 24             	mov    %eax,(%esp)
 8211e25:	e8 86 c5 e6 ff       	call   807e3b0 <strlen@plt>
 8211e2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211e2e:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211e34:	89 04 24             	mov    %eax,(%esp)
 8211e37:	e8 00 9b eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8211e3c:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211e42:	89 04 24             	mov    %eax,(%esp)
 8211e45:	e8 66 c5 e6 ff       	call   807e3b0 <strlen@plt>
 8211e4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8211e4e:	8d 85 98 f9 ff ff    	lea    -0x668(%ebp),%eax
 8211e54:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211e58:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211e5e:	89 04 24             	mov    %eax,(%esp)
 8211e61:	e8 7e 55 fa ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 8211e66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211e6d:	00 
 8211e6e:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211e74:	89 04 24             	mov    %eax,(%esp)
 8211e77:	e8 dc 9a eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8211e7c:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211e82:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211e86:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8211e89:	89 04 24             	mov    %eax,(%esp)
 8211e8c:	e8 bd b2 38 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8211e91:	eb 1b                	jmp    8211eae <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5f82>
 8211e93:	89 d3                	mov    %edx,%ebx
 8211e95:	89 c6                	mov    %eax,%esi
 8211e97:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211e9d:	89 04 24             	mov    %eax,(%esp)
 8211ea0:	e8 db bf 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8211ea5:	89 f0                	mov    %esi,%eax
 8211ea7:	89 da                	mov    %ebx,%edx
 8211ea9:	e9 99 15 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 8211eae:	8d 85 bc fc ff ff    	lea    -0x344(%ebp),%eax
 8211eb4:	89 04 24             	mov    %eax,(%esp)
 8211eb7:	e8 c4 bf 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8211ebc:	e9 7f 15 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211ec1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211ec8:	00 
 8211ec9:	8b 45 14             	mov    0x14(%ebp),%eax
 8211ecc:	89 04 24             	mov    %eax,(%esp)
 8211ecf:	e8 fa 5b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211ed4:	c7 44 24 04 b2 31 bc 	movl   $0x8bc31b2,0x4(%esp)
 8211edb:	08 
 8211edc:	89 04 24             	mov    %eax,(%esp)
 8211edf:	e8 bd ea e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211ee4:	84 c0                	test   %al,%al
 8211ee6:	75 27                	jne    8211f0f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5fe3>
 8211ee8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211eef:	00 
 8211ef0:	8b 45 14             	mov    0x14(%ebp),%eax
 8211ef3:	89 04 24             	mov    %eax,(%esp)
 8211ef6:	e8 d3 5b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211efb:	c7 44 24 04 bf 31 bc 	movl   $0x8bc31bf,0x4(%esp)
 8211f02:	08 
 8211f03:	89 04 24             	mov    %eax,(%esp)
 8211f06:	e8 96 ea e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211f0b:	84 c0                	test   %al,%al
 8211f0d:	74 07                	je     8211f16 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5fea>
 8211f0f:	b8 01 00 00 00       	mov    $0x1,%eax
 8211f14:	eb 05                	jmp    8211f1b <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x5fef>
 8211f16:	b8 00 00 00 00       	mov    $0x0,%eax
 8211f1b:	84 c0                	test   %al,%al
 8211f1d:	74 5b                	je     8211f7a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x604e>
 8211f1f:	8d 85 ae fc ff ff    	lea    -0x352(%ebp),%eax
 8211f25:	89 04 24             	mov    %eax,(%esp)
 8211f28:	e8 75 a5 01 00       	call   822c4a2 <_ZN21StatisticsGmCmdPacketC1Ev>
 8211f2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211f30:	89 04 24             	mov    %eax,(%esp)
 8211f33:	e8 16 9d eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8211f38:	89 85 b8 fc ff ff    	mov    %eax,-0x348(%ebp)
 8211f3e:	8d 9d ae fc ff ff    	lea    -0x352(%ebp),%ebx
 8211f44:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211f47:	89 04 24             	mov    %eax,(%esp)
 8211f4a:	e8 41 9d eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8211f4f:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 8211f55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8211f59:	89 14 24             	mov    %edx,(%esp)
 8211f5c:	e8 97 fd ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8211f61:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8211f68:	00 
 8211f69:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8211f6d:	89 04 24             	mov    %eax,(%esp)
 8211f70:	e8 cf 00 26 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 8211f75:	e9 c6 14 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211f7a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211f81:	00 
 8211f82:	8b 45 14             	mov    0x14(%ebp),%eax
 8211f85:	89 04 24             	mov    %eax,(%esp)
 8211f88:	e8 41 5b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211f8d:	c7 44 24 04 c2 31 bc 	movl   $0x8bc31c2,0x4(%esp)
 8211f94:	08 
 8211f95:	89 04 24             	mov    %eax,(%esp)
 8211f98:	e8 04 ea e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211f9d:	84 c0                	test   %al,%al
 8211f9f:	74 37                	je     8211fd8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x60ac>
 8211fa1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8211fa8:	00 
 8211fa9:	8b 45 14             	mov    0x14(%ebp),%eax
 8211fac:	89 04 24             	mov    %eax,(%esp)
 8211faf:	e8 1a 5b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211fb4:	89 04 24             	mov    %eax,(%esp)
 8211fb7:	e8 34 45 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8211fbc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8211fc0:	c7 44 24 04 6f 00 00 	movl   $0x6f,0x4(%esp)
 8211fc7:	00 
 8211fc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8211fcb:	89 04 24             	mov    %eax,(%esp)
 8211fce:	e8 bd 9a ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 8211fd3:	e9 68 14 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8211fd8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8211fdf:	00 
 8211fe0:	8b 45 14             	mov    0x14(%ebp),%eax
 8211fe3:	89 04 24             	mov    %eax,(%esp)
 8211fe6:	e8 e3 5a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8211feb:	c7 44 24 04 cb 31 bc 	movl   $0x8bc31cb,0x4(%esp)
 8211ff2:	08 
 8211ff3:	89 04 24             	mov    %eax,(%esp)
 8211ff6:	e8 a6 e9 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8211ffb:	84 c0                	test   %al,%al
 8211ffd:	74 37                	je     8212036 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x610a>
 8211fff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212006:	00 
 8212007:	8b 45 14             	mov    0x14(%ebp),%eax
 821200a:	89 04 24             	mov    %eax,(%esp)
 821200d:	e8 bc 5a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212012:	89 04 24             	mov    %eax,(%esp)
 8212015:	e8 d6 44 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821201a:	89 44 24 08          	mov    %eax,0x8(%esp)
 821201e:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 8212025:	00 
 8212026:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212029:	89 04 24             	mov    %eax,(%esp)
 821202c:	e8 5f 9a ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 8212031:	e9 0a 14 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212036:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821203d:	00 
 821203e:	8b 45 14             	mov    0x14(%ebp),%eax
 8212041:	89 04 24             	mov    %eax,(%esp)
 8212044:	e8 85 5a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212049:	c7 44 24 04 d2 31 bc 	movl   $0x8bc31d2,0x4(%esp)
 8212050:	08 
 8212051:	89 04 24             	mov    %eax,(%esp)
 8212054:	e8 48 e9 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212059:	84 c0                	test   %al,%al
 821205b:	74 55                	je     82120b2 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6186>
 821205d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212064:	00 
 8212065:	8b 45 14             	mov    0x14(%ebp),%eax
 8212068:	89 04 24             	mov    %eax,(%esp)
 821206b:	e8 5e 5a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212070:	c7 44 24 04 cb 2c bc 	movl   $0x8bc2ccb,0x4(%esp)
 8212077:	08 
 8212078:	89 04 24             	mov    %eax,(%esp)
 821207b:	e8 21 e9 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212080:	84 c0                	test   %al,%al
 8212082:	74 2e                	je     82120b2 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6186>
 8212084:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 821208b:	00 
 821208c:	8b 45 14             	mov    0x14(%ebp),%eax
 821208f:	89 04 24             	mov    %eax,(%esp)
 8212092:	e8 37 5a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212097:	c7 44 24 04 d7 31 bc 	movl   $0x8bc31d7,0x4(%esp)
 821209e:	08 
 821209f:	89 04 24             	mov    %eax,(%esp)
 82120a2:	e8 fa e8 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82120a7:	84 c0                	test   %al,%al
 82120a9:	74 07                	je     82120b2 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6186>
 82120ab:	b8 01 00 00 00       	mov    $0x1,%eax
 82120b0:	eb 05                	jmp    82120b7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x618b>
 82120b2:	b8 00 00 00 00       	mov    $0x0,%eax
 82120b7:	84 c0                	test   %al,%al
 82120b9:	0f 84 a3 00 00 00    	je     8212162 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6236>
 82120bf:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 82120c5:	89 04 24             	mov    %eax,(%esp)
 82120c8:	e8 03 45 4f 00       	call   87065d0 <_ZNSsC1Ev>
 82120cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82120d0:	89 04 24             	mov    %eax,(%esp)
 82120d3:	e8 3e d6 47 00       	call   868f716 <_ZN5CUser16getForceDropFlagEv>
 82120d8:	83 f0 01             	xor    $0x1,%eax
 82120db:	84 c0                	test   %al,%al
 82120dd:	74 18                	je     82120f7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x61cb>
 82120df:	c7 44 24 04 64 2c bc 	movl   $0x8bc2c64,0x4(%esp)
 82120e6:	08 
 82120e7:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 82120ed:	89 04 24             	mov    %eax,(%esp)
 82120f0:	e8 2b 66 4f 00       	call   8708720 <_ZNSsaSEPKc>
 82120f5:	eb 16                	jmp    821210d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x61e1>
 82120f7:	c7 44 24 04 67 2c bc 	movl   $0x8bc2c67,0x4(%esp)
 82120fe:	08 
 82120ff:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 8212105:	89 04 24             	mov    %eax,(%esp)
 8212108:	e8 13 66 4f 00       	call   8708720 <_ZNSsaSEPKc>
 821210d:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 8212113:	89 04 24             	mov    %eax,(%esp)
 8212116:	e8 d5 43 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821211b:	89 44 24 08          	mov    %eax,0x8(%esp)
 821211f:	c7 44 24 04 77 00 00 	movl   $0x77,0x4(%esp)
 8212126:	00 
 8212127:	8b 45 0c             	mov    0xc(%ebp),%eax
 821212a:	89 04 24             	mov    %eax,(%esp)
 821212d:	e8 5e 99 ff ff       	call   820ba90 <_Z19DoUserDefineCommandP5CUseriPKc>
 8212132:	eb 1b                	jmp    821214f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6223>
 8212134:	89 d3                	mov    %edx,%ebx
 8212136:	89 c6                	mov    %eax,%esi
 8212138:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 821213e:	89 04 24             	mov    %eax,(%esp)
 8212141:	e8 9a 5a 4f 00       	call   8707be0 <_ZNSsD1Ev>
 8212146:	89 f0                	mov    %esi,%eax
 8212148:	89 da                	mov    %ebx,%edx
 821214a:	e9 f8 12 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 821214f:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 8212155:	89 04 24             	mov    %eax,(%esp)
 8212158:	e8 83 5a 4f 00       	call   8707be0 <_ZNSsD1Ev>
 821215d:	e9 de 12 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212162:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212169:	00 
 821216a:	8b 45 14             	mov    0x14(%ebp),%eax
 821216d:	89 04 24             	mov    %eax,(%esp)
 8212170:	e8 59 59 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212175:	c7 44 24 04 dc 31 bc 	movl   $0x8bc31dc,0x4(%esp)
 821217c:	08 
 821217d:	89 04 24             	mov    %eax,(%esp)
 8212180:	e8 1c e8 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212185:	84 c0                	test   %al,%al
 8212187:	75 27                	jne    82121b0 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6284>
 8212189:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212190:	00 
 8212191:	8b 45 14             	mov    0x14(%ebp),%eax
 8212194:	89 04 24             	mov    %eax,(%esp)
 8212197:	e8 32 59 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821219c:	c7 44 24 04 e5 31 bc 	movl   $0x8bc31e5,0x4(%esp)
 82121a3:	08 
 82121a4:	89 04 24             	mov    %eax,(%esp)
 82121a7:	e8 f5 e7 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82121ac:	84 c0                	test   %al,%al
 82121ae:	74 07                	je     82121b7 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x628b>
 82121b0:	b8 01 00 00 00       	mov    $0x1,%eax
 82121b5:	eb 05                	jmp    82121bc <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6290>
 82121b7:	b8 00 00 00 00       	mov    $0x0,%eax
 82121bc:	84 c0                	test   %al,%al
 82121be:	0f 84 9c 00 00 00    	je     8212260 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6334>
 82121c4:	8d 85 91 fc ff ff    	lea    -0x36f(%ebp),%eax
 82121ca:	89 04 24             	mov    %eax,(%esp)
 82121cd:	e8 ee a5 01 00       	call   822c7c0 <_ZN21Packet_CollectItemsGmC1Ev>
 82121d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82121d9:	00 
 82121da:	8b 45 14             	mov    0x14(%ebp),%eax
 82121dd:	89 04 24             	mov    %eax,(%esp)
 82121e0:	e8 e9 58 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82121e5:	89 04 24             	mov    %eax,(%esp)
 82121e8:	e8 03 43 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82121ed:	89 04 24             	mov    %eax,(%esp)
 82121f0:	e8 fb c4 e6 ff       	call   807e6f0 <atoi@plt>
 82121f5:	89 85 9c fc ff ff    	mov    %eax,-0x364(%ebp)
 82121fb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8212202:	00 
 8212203:	8b 45 14             	mov    0x14(%ebp),%eax
 8212206:	89 04 24             	mov    %eax,(%esp)
 8212209:	e8 c0 58 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821220e:	89 04 24             	mov    %eax,(%esp)
 8212211:	e8 da 42 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212216:	89 04 24             	mov    %eax,(%esp)
 8212219:	e8 d2 c4 e6 ff       	call   807e6f0 <atoi@plt>
 821221e:	89 85 a0 fc ff ff    	mov    %eax,-0x360(%ebp)
 8212224:	8d 9d 91 fc ff ff    	lea    -0x36f(%ebp),%ebx
 821222a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821222d:	89 04 24             	mov    %eax,(%esp)
 8212230:	e8 5b 9a eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8212235:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 821223b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821223f:	89 14 24             	mov    %edx,(%esp)
 8212242:	e8 43 fe ef ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8212247:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 821224e:	00 
 821224f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8212253:	89 04 24             	mov    %eax,(%esp)
 8212256:	e8 e9 eb 25 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 821225b:	e9 e0 11 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212260:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212267:	00 
 8212268:	8b 45 14             	mov    0x14(%ebp),%eax
 821226b:	89 04 24             	mov    %eax,(%esp)
 821226e:	e8 5b 58 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212273:	c7 44 24 04 e8 31 bc 	movl   $0x8bc31e8,0x4(%esp)
 821227a:	08 
 821227b:	89 04 24             	mov    %eax,(%esp)
 821227e:	e8 1e e7 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212283:	84 c0                	test   %al,%al
 8212285:	74 4c                	je     82122d3 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x63a7>
 8212287:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821228e:	00 
 821228f:	8b 45 14             	mov    0x14(%ebp),%eax
 8212292:	89 04 24             	mov    %eax,(%esp)
 8212295:	e8 34 58 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821229a:	89 04 24             	mov    %eax,(%esp)
 821229d:	e8 4e 42 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82122a2:	89 04 24             	mov    %eax,(%esp)
 82122a5:	e8 50 6e ef ff       	call   81090fa <_Z14StringToNumberPKc>
 82122aa:	88 45 a3             	mov    %al,-0x5d(%ebp)
 82122ad:	80 7d a3 00          	cmpb   $0x0,-0x5d(%ebp)
 82122b1:	0f 8e 89 11 00 00    	jle    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82122b7:	80 7d a3 04          	cmpb   $0x4,-0x5d(%ebp)
 82122bb:	0f 8f 7f 11 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82122c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82122c4:	0f b6 55 a3          	movzbl -0x5d(%ebp),%edx
 82122c8:	88 90 cc 96 07 00    	mov    %dl,0x796cc(%eax)
 82122ce:	e9 6d 11 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82122d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82122da:	00 
 82122db:	8b 45 14             	mov    0x14(%ebp),%eax
 82122de:	89 04 24             	mov    %eax,(%esp)
 82122e1:	e8 e8 57 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82122e6:	c7 44 24 04 f6 31 bc 	movl   $0x8bc31f6,0x4(%esp)
 82122ed:	08 
 82122ee:	89 04 24             	mov    %eax,(%esp)
 82122f1:	e8 ab e6 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82122f6:	84 c0                	test   %al,%al
 82122f8:	74 37                	je     8212331 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6405>
 82122fa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212301:	00 
 8212302:	8b 45 14             	mov    0x14(%ebp),%eax
 8212305:	89 04 24             	mov    %eax,(%esp)
 8212308:	e8 c1 57 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821230d:	89 04 24             	mov    %eax,(%esp)
 8212310:	e8 db 41 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212315:	89 04 24             	mov    %eax,(%esp)
 8212318:	e8 dd 6d ef ff       	call   81090fa <_Z14StringToNumberPKc>
 821231d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8212320:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8212323:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212326:	89 90 d0 96 07 00    	mov    %edx,0x796d0(%eax)
 821232c:	e9 0f 11 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212331:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212338:	00 
 8212339:	8b 45 14             	mov    0x14(%ebp),%eax
 821233c:	89 04 24             	mov    %eax,(%esp)
 821233f:	e8 8a 57 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212344:	c7 44 24 04 94 2d bc 	movl   $0x8bc2d94,0x4(%esp)
 821234b:	08 
 821234c:	89 04 24             	mov    %eax,(%esp)
 821234f:	e8 4d e6 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212354:	84 c0                	test   %al,%al
 8212356:	74 72                	je     82123ca <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x649e>
 8212358:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821235f:	00 
 8212360:	8b 45 14             	mov    0x14(%ebp),%eax
 8212363:	89 04 24             	mov    %eax,(%esp)
 8212366:	e8 63 57 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821236b:	c7 44 24 04 82 2c bc 	movl   $0x8bc2c82,0x4(%esp)
 8212372:	08 
 8212373:	89 04 24             	mov    %eax,(%esp)
 8212376:	e8 26 e6 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821237b:	84 c0                	test   %al,%al
 821237d:	0f 84 bd 10 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212383:	e8 f4 40 ee ff       	call   80f647c <_Z12G_TimerQueuev>
 8212388:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 821238f:	00 
 8212390:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8212397:	00 
 8212398:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 821239f:	00 
 82123a0:	c7 44 24 0c 50 00 00 	movl   $0x50,0xc(%esp)
 82123a7:	00 
 82123a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82123af:	00 
 82123b0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82123b7:	00 
 82123b8:	89 04 24             	mov    %eax,(%esp)
 82123bb:	e8 56 ea 41 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 82123c0:	bb 00 00 00 00       	mov    $0x0,%ebx
 82123c5:	e9 95 10 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 82123ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82123d1:	00 
 82123d2:	8b 45 14             	mov    0x14(%ebp),%eax
 82123d5:	89 04 24             	mov    %eax,(%esp)
 82123d8:	e8 f1 56 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82123dd:	c7 44 24 04 fe 31 bc 	movl   $0x8bc31fe,0x4(%esp)
 82123e4:	08 
 82123e5:	89 04 24             	mov    %eax,(%esp)
 82123e8:	e8 b4 e5 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82123ed:	84 c0                	test   %al,%al
 82123ef:	0f 84 c8 00 00 00    	je     82124bd <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6591>
 82123f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82123fc:	00 
 82123fd:	8b 45 14             	mov    0x14(%ebp),%eax
 8212400:	89 04 24             	mov    %eax,(%esp)
 8212403:	e8 c6 56 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212408:	89 04 24             	mov    %eax,(%esp)
 821240b:	e8 e0 40 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212410:	89 04 24             	mov    %eax,(%esp)
 8212413:	e8 e2 6c ef ff       	call   81090fa <_Z14StringToNumberPKc>
 8212418:	89 45 a8             	mov    %eax,-0x58(%ebp)
 821241b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8212422:	00 
 8212423:	8b 45 14             	mov    0x14(%ebp),%eax
 8212426:	89 04 24             	mov    %eax,(%esp)
 8212429:	e8 a0 56 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821242e:	89 04 24             	mov    %eax,(%esp)
 8212431:	e8 ba 40 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212436:	89 04 24             	mov    %eax,(%esp)
 8212439:	e8 bc 6c ef ff       	call   81090fa <_Z14StringToNumberPKc>
 821243e:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8212441:	83 7d a8 00          	cmpl   $0x0,-0x58(%ebp)
 8212445:	79 0a                	jns    8212451 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6525>
 8212447:	bb 00 00 00 00       	mov    $0x0,%ebx
 821244c:	e9 0e 10 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8212451:	8d 85 85 fc ff ff    	lea    -0x37b(%ebp),%eax
 8212457:	89 04 24             	mov    %eax,(%esp)
 821245a:	e8 f3 41 f7 ff       	call   8186652 <_ZN22AradServerStateMessageC1Ev>
 821245f:	83 7d ac 00          	cmpl   $0x0,-0x54(%ebp)
 8212463:	74 07                	je     821246c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6540>
 8212465:	b8 01 00 00 00       	mov    $0x1,%eax
 821246a:	eb 05                	jmp    8212471 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6545>
 821246c:	b8 00 00 00 00       	mov    $0x0,%eax
 8212471:	66 89 85 85 fc ff ff 	mov    %ax,-0x37b(%ebp)
 8212478:	8b 45 ac             	mov    -0x54(%ebp),%eax
 821247b:	89 85 87 fc ff ff    	mov    %eax,-0x379(%ebp)
 8212481:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8212484:	a1 f0 f7 41 09       	mov    0x941f7f0,%eax
 8212489:	89 54 24 04          	mov    %edx,0x4(%esp)
 821248d:	89 04 24             	mov    %eax,(%esp)
 8212490:	e8 3f 6f f9 ff       	call   81a93d4 <_ZN4ARAD23Arad_ServerStateManager11deleteStateE23ENUM_GLOBAL_EFFECT_ARAD>
 8212495:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8212498:	a1 f0 f7 41 09       	mov    0x941f7f0,%eax
 821249d:	8d 8d 85 fc ff ff    	lea    -0x37b(%ebp),%ecx
 82124a3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82124a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82124ab:	89 04 24             	mov    %eax,(%esp)
 82124ae:	e8 bb 6e f9 ff       	call   81a936e <_ZN4ARAD23Arad_ServerStateManager11insertStateE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessage>
 82124b3:	bb 00 00 00 00       	mov    $0x0,%ebx
 82124b8:	e9 a2 0f 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 82124bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82124c4:	00 
 82124c5:	8b 45 14             	mov    0x14(%ebp),%eax
 82124c8:	89 04 24             	mov    %eax,(%esp)
 82124cb:	e8 fe 55 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82124d0:	c7 44 24 04 0b 32 bc 	movl   $0x8bc320b,0x4(%esp)
 82124d7:	08 
 82124d8:	89 04 24             	mov    %eax,(%esp)
 82124db:	e8 c1 e4 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82124e0:	84 c0                	test   %al,%al
 82124e2:	0f 84 af 00 00 00    	je     8212597 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x666b>
 82124e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82124ef:	00 
 82124f0:	8b 45 14             	mov    0x14(%ebp),%eax
 82124f3:	89 04 24             	mov    %eax,(%esp)
 82124f6:	e8 d3 55 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82124fb:	c7 44 24 04 10 32 bc 	movl   $0x8bc3210,0x4(%esp)
 8212502:	08 
 8212503:	89 04 24             	mov    %eax,(%esp)
 8212506:	e8 96 e4 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821250b:	84 c0                	test   %al,%al
 821250d:	74 12                	je     8212521 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x65f5>
 821250f:	a1 84 f7 41 09       	mov    0x941f784,%eax
 8212514:	89 04 24             	mov    %eax,(%esp)
 8212517:	e8 a0 42 f1 ff       	call   81267bc <_ZN21CDailyScheduleManager19GM_OpenSouthernDaleEv>
 821251c:	e9 1f 0f 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212521:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212528:	00 
 8212529:	8b 45 14             	mov    0x14(%ebp),%eax
 821252c:	89 04 24             	mov    %eax,(%esp)
 821252f:	e8 9a 55 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212534:	c7 44 24 04 13 32 bc 	movl   $0x8bc3213,0x4(%esp)
 821253b:	08 
 821253c:	89 04 24             	mov    %eax,(%esp)
 821253f:	e8 5d e4 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212544:	84 c0                	test   %al,%al
 8212546:	74 12                	je     821255a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x662e>
 8212548:	a1 84 f7 41 09       	mov    0x941f784,%eax
 821254d:	89 04 24             	mov    %eax,(%esp)
 8212550:	e8 63 47 f1 ff       	call   8126cb8 <_ZN21CDailyScheduleManager16GM_OpenBossTowerEv>
 8212555:	e9 e6 0e 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821255a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212561:	00 
 8212562:	8b 45 14             	mov    0x14(%ebp),%eax
 8212565:	89 04 24             	mov    %eax,(%esp)
 8212568:	e8 61 55 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821256d:	c7 44 24 04 18 32 bc 	movl   $0x8bc3218,0x4(%esp)
 8212574:	08 
 8212575:	89 04 24             	mov    %eax,(%esp)
 8212578:	e8 24 e4 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821257d:	84 c0                	test   %al,%al
 821257f:	0f 84 bb 0e 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212585:	a1 84 f7 41 09       	mov    0x941f784,%eax
 821258a:	89 04 24             	mov    %eax,(%esp)
 821258d:	e8 ce 47 f1 ff       	call   8126d60 <_ZN21CDailyScheduleManager19GM_OpenAdvanceAltarEv>
 8212592:	e9 a9 0e 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212597:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821259e:	00 
 821259f:	8b 45 14             	mov    0x14(%ebp),%eax
 82125a2:	89 04 24             	mov    %eax,(%esp)
 82125a5:	e8 24 55 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82125aa:	c7 44 24 04 1b 32 bc 	movl   $0x8bc321b,0x4(%esp)
 82125b1:	08 
 82125b2:	89 04 24             	mov    %eax,(%esp)
 82125b5:	e8 e7 e3 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82125ba:	84 c0                	test   %al,%al
 82125bc:	0f 84 af 00 00 00    	je     8212671 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6745>
 82125c2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82125c9:	00 
 82125ca:	8b 45 14             	mov    0x14(%ebp),%eax
 82125cd:	89 04 24             	mov    %eax,(%esp)
 82125d0:	e8 f9 54 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82125d5:	c7 44 24 04 10 32 bc 	movl   $0x8bc3210,0x4(%esp)
 82125dc:	08 
 82125dd:	89 04 24             	mov    %eax,(%esp)
 82125e0:	e8 bc e3 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82125e5:	84 c0                	test   %al,%al
 82125e7:	74 12                	je     82125fb <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x66cf>
 82125e9:	a1 84 f7 41 09       	mov    0x941f784,%eax
 82125ee:	89 04 24             	mov    %eax,(%esp)
 82125f1:	e8 dc 44 f1 ff       	call   8126ad2 <_ZN21CDailyScheduleManager20GM_CloseSouthernDaleEv>
 82125f6:	e9 45 0e 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82125fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212602:	00 
 8212603:	8b 45 14             	mov    0x14(%ebp),%eax
 8212606:	89 04 24             	mov    %eax,(%esp)
 8212609:	e8 c0 54 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821260e:	c7 44 24 04 13 32 bc 	movl   $0x8bc3213,0x4(%esp)
 8212615:	08 
 8212616:	89 04 24             	mov    %eax,(%esp)
 8212619:	e8 83 e3 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821261e:	84 c0                	test   %al,%al
 8212620:	74 12                	je     8212634 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6708>
 8212622:	a1 84 f7 41 09       	mov    0x941f784,%eax
 8212627:	89 04 24             	mov    %eax,(%esp)
 821262a:	e8 dd 46 f1 ff       	call   8126d0c <_ZN21CDailyScheduleManager17GM_CloseBossTowerEv>
 821262f:	e9 0c 0e 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212634:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821263b:	00 
 821263c:	8b 45 14             	mov    0x14(%ebp),%eax
 821263f:	89 04 24             	mov    %eax,(%esp)
 8212642:	e8 87 54 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212647:	c7 44 24 04 18 32 bc 	movl   $0x8bc3218,0x4(%esp)
 821264e:	08 
 821264f:	89 04 24             	mov    %eax,(%esp)
 8212652:	e8 4a e3 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212657:	84 c0                	test   %al,%al
 8212659:	0f 84 e1 0d 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821265f:	a1 84 f7 41 09       	mov    0x941f784,%eax
 8212664:	89 04 24             	mov    %eax,(%esp)
 8212667:	e8 24 47 f1 ff       	call   8126d90 <_ZN21CDailyScheduleManager20GM_CloseAdvanceAltarEv>
 821266c:	e9 cf 0d 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212671:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212678:	00 
 8212679:	8b 45 14             	mov    0x14(%ebp),%eax
 821267c:	89 04 24             	mov    %eax,(%esp)
 821267f:	e8 4a 54 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212684:	c7 44 24 04 21 32 bc 	movl   $0x8bc3221,0x4(%esp)
 821268b:	08 
 821268c:	89 04 24             	mov    %eax,(%esp)
 821268f:	e8 0d e3 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212694:	84 c0                	test   %al,%al
 8212696:	0f 84 d1 01 00 00    	je     821286d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6941>
 821269c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82126a3:	00 
 82126a4:	8b 45 14             	mov    0x14(%ebp),%eax
 82126a7:	89 04 24             	mov    %eax,(%esp)
 82126aa:	e8 1f 54 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82126af:	c7 44 24 04 8a 2c bc 	movl   $0x8bc2c8a,0x4(%esp)
 82126b6:	08 
 82126b7:	89 04 24             	mov    %eax,(%esp)
 82126ba:	e8 e2 e2 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82126bf:	84 c0                	test   %al,%al
 82126c1:	74 3d                	je     8212700 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x67d4>
 82126c3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82126ca:	00 
 82126cb:	8b 45 14             	mov    0x14(%ebp),%eax
 82126ce:	89 04 24             	mov    %eax,(%esp)
 82126d1:	e8 f8 53 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82126d6:	89 04 24             	mov    %eax,(%esp)
 82126d9:	e8 12 3e 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82126de:	89 04 24             	mov    %eax,(%esp)
 82126e1:	e8 0a c0 e6 ff       	call   807e6f0 <atoi@plt>
 82126e6:	89 45 b0             	mov    %eax,-0x50(%ebp)
 82126e9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 82126ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 82126f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82126f3:	89 04 24             	mov    %eax,(%esp)
 82126f6:	e8 f3 fe f0 ff       	call   81225ee <_ZN8APSystem9CUserProc6GM_SetEP5CUserj>
 82126fb:	e9 40 0d 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212700:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212707:	00 
 8212708:	8b 45 14             	mov    0x14(%ebp),%eax
 821270b:	89 04 24             	mov    %eax,(%esp)
 821270e:	e8 bb 53 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212713:	c7 44 24 04 94 2d bc 	movl   $0x8bc2d94,0x4(%esp)
 821271a:	08 
 821271b:	89 04 24             	mov    %eax,(%esp)
 821271e:	e8 7e e2 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212723:	84 c0                	test   %al,%al
 8212725:	74 10                	je     8212737 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x680b>
 8212727:	8b 45 0c             	mov    0xc(%ebp),%eax
 821272a:	89 04 24             	mov    %eax,(%esp)
 821272d:	e8 a0 fe f0 ff       	call   81225d2 <_ZN8APSystem9CUserProc8GM_ResetEP5CUser>
 8212732:	e9 09 0d 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212737:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821273e:	00 
 821273f:	8b 45 14             	mov    0x14(%ebp),%eax
 8212742:	89 04 24             	mov    %eax,(%esp)
 8212745:	e8 84 53 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821274a:	c7 44 24 04 24 32 bc 	movl   $0x8bc3224,0x4(%esp)
 8212751:	08 
 8212752:	89 04 24             	mov    %eax,(%esp)
 8212755:	e8 47 e2 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821275a:	84 c0                	test   %al,%al
 821275c:	74 0c                	je     821276a <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x683e>
 821275e:	c6 05 7c f0 3f 09 01 	movb   $0x1,0x93ff07c
 8212765:	e9 d6 0c 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821276a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212771:	00 
 8212772:	8b 45 14             	mov    0x14(%ebp),%eax
 8212775:	89 04 24             	mov    %eax,(%esp)
 8212778:	e8 51 53 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821277d:	c7 44 24 04 2b 32 bc 	movl   $0x8bc322b,0x4(%esp)
 8212784:	08 
 8212785:	89 04 24             	mov    %eax,(%esp)
 8212788:	e8 14 e2 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821278d:	84 c0                	test   %al,%al
 821278f:	74 13                	je     82127a4 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6878>
 8212791:	c6 05 7c f0 3f 09 00 	movb   $0x0,0x93ff07c
 8212798:	c6 05 8c 00 37 09 00 	movb   $0x0,0x937008c
 821279f:	e9 9c 0c 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82127a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82127ab:	00 
 82127ac:	8b 45 14             	mov    0x14(%ebp),%eax
 82127af:	89 04 24             	mov    %eax,(%esp)
 82127b2:	e8 17 53 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82127b7:	c7 44 24 04 34 32 bc 	movl   $0x8bc3234,0x4(%esp)
 82127be:	08 
 82127bf:	89 04 24             	mov    %eax,(%esp)
 82127c2:	e8 da e1 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82127c7:	84 c0                	test   %al,%al
 82127c9:	0f 84 71 0c 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82127cf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82127d6:	00 
 82127d7:	8b 45 14             	mov    0x14(%ebp),%eax
 82127da:	89 04 24             	mov    %eax,(%esp)
 82127dd:	e8 ec 52 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82127e2:	89 04 24             	mov    %eax,(%esp)
 82127e5:	e8 06 3d 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82127ea:	89 04 24             	mov    %eax,(%esp)
 82127ed:	e8 fe be e6 ff       	call   807e6f0 <atoi@plt>
 82127f2:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 82127f5:	c7 45 b8 07 00 00 00 	movl   $0x7,-0x48(%ebp)
 82127fc:	83 7d b4 07          	cmpl   $0x7,-0x4c(%ebp)
 8212800:	77 4d                	ja     821284f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6923>
 8212802:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8212805:	c1 e0 02             	shl    $0x2,%eax
 8212808:	8b 80 bc 32 bc 08    	mov    0x8bc32bc(%eax),%eax
 821280e:	ff e0                	jmp    *%eax
 8212810:	c7 45 b8 01 00 00 00 	movl   $0x1,-0x48(%ebp)
 8212817:	eb 40                	jmp    8212859 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x692d>
 8212819:	c7 45 b8 02 00 00 00 	movl   $0x2,-0x48(%ebp)
 8212820:	eb 37                	jmp    8212859 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x692d>
 8212822:	c7 45 b8 03 00 00 00 	movl   $0x3,-0x48(%ebp)
 8212829:	eb 2e                	jmp    8212859 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x692d>
 821282b:	c7 45 b8 04 00 00 00 	movl   $0x4,-0x48(%ebp)
 8212832:	eb 25                	jmp    8212859 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x692d>
 8212834:	c7 45 b8 05 00 00 00 	movl   $0x5,-0x48(%ebp)
 821283b:	eb 1c                	jmp    8212859 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x692d>
 821283d:	c7 45 b8 06 00 00 00 	movl   $0x6,-0x48(%ebp)
 8212844:	eb 13                	jmp    8212859 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x692d>
 8212846:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 821284d:	eb 0a                	jmp    8212859 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x692d>
 821284f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8212854:	e9 06 0c 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8212859:	c6 05 8c 00 37 09 01 	movb   $0x1,0x937008c
 8212860:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8212863:	a3 90 00 37 09       	mov    %eax,0x9370090
 8212868:	e9 d3 0b 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821286d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212874:	00 
 8212875:	8b 45 14             	mov    0x14(%ebp),%eax
 8212878:	89 04 24             	mov    %eax,(%esp)
 821287b:	e8 4e 52 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212880:	c7 44 24 04 39 32 bc 	movl   $0x8bc3239,0x4(%esp)
 8212887:	08 
 8212888:	89 04 24             	mov    %eax,(%esp)
 821288b:	e8 11 e1 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212890:	84 c0                	test   %al,%al
 8212892:	0f 84 51 01 00 00    	je     82129e9 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6abd>
 8212898:	8d 85 66 fc ff ff    	lea    -0x39a(%ebp),%eax
 821289e:	89 04 24             	mov    %eax,(%esp)
 82128a1:	e8 6e 95 01 00       	call   822be14 <_ZN22Packet_Pcroom_ResponseC1Ev>
 82128a6:	c7 85 78 fc ff ff 01 	movl   $0x1,-0x388(%ebp)
 82128ad:	00 00 00 
 82128b0:	c6 85 80 fc ff ff 01 	movb   $0x1,-0x380(%ebp)
 82128b7:	c6 85 81 fc ff ff 0b 	movb   $0xb,-0x37f(%ebp)
 82128be:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 82128c5:	e8 86 ae e6 ff       	call   807d750 <time@plt>
 82128ca:	05 80 3a 09 00       	add    $0x93a80,%eax
 82128cf:	89 85 7c fc ff ff    	mov    %eax,-0x384(%ebp)
 82128d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82128d8:	89 04 24             	mov    %eax,(%esp)
 82128db:	e8 b6 63 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82128e0:	89 85 70 fc ff ff    	mov    %eax,-0x390(%ebp)
 82128e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82128e9:	89 04 24             	mov    %eax,(%esp)
 82128ec:	e8 7d 7a ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82128f1:	89 85 74 fc ff ff    	mov    %eax,-0x38c(%ebp)
 82128f7:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 82128fc:	c7 44 24 08 0a bc 00 	movl   $0xbc0a,0x8(%esp)
 8212903:	00 
 8212904:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 821290b:	08 
 821290c:	89 04 24             	mov    %eax,(%esp)
 821290f:	e8 72 d1 07 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8212914:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821291b:	00 
 821291c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212920:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 8212926:	89 04 24             	mov    %eax,(%esp)
 8212929:	e8 f8 62 eb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 821292e:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 8212934:	89 04 24             	mov    %eax,(%esp)
 8212937:	e8 0a 63 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 821293c:	c7 44 24 04 7e 01 00 	movl   $0x17e,0x4(%esp)
 8212943:	00 
 8212944:	89 04 24             	mov    %eax,(%esp)
 8212947:	e8 0a 63 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 821294c:	8b 9d 70 fc ff ff    	mov    -0x390(%ebp),%ebx
 8212952:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 8212958:	89 04 24             	mov    %eax,(%esp)
 821295b:	e8 e6 62 eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8212960:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8212964:	89 04 24             	mov    %eax,(%esp)
 8212967:	e8 ea 62 eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 821296c:	0f b7 85 68 fc ff ff 	movzwl -0x398(%ebp),%eax
 8212973:	0f b7 d8             	movzwl %ax,%ebx
 8212976:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 821297c:	89 04 24             	mov    %eax,(%esp)
 821297f:	e8 ca 62 eb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8212984:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8212988:	8d 95 66 fc ff ff    	lea    -0x39a(%ebp),%edx
 821298e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8212992:	89 04 24             	mov    %eax,(%esp)
 8212995:	e8 b8 bc ec ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 821299a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 821299f:	8d 95 5c fc ff ff    	lea    -0x3a4(%ebp),%edx
 82129a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82129a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82129b0:	00 
 82129b1:	89 04 24             	mov    %eax,(%esp)
 82129b4:	e8 25 e6 35 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 82129b9:	eb 1b                	jmp    82129d6 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6aaa>
 82129bb:	89 d3                	mov    %edx,%ebx
 82129bd:	89 c6                	mov    %eax,%esi
 82129bf:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 82129c5:	89 04 24             	mov    %eax,(%esp)
 82129c8:	e8 05 9f 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82129cd:	89 f0                	mov    %esi,%eax
 82129cf:	89 da                	mov    %ebx,%edx
 82129d1:	e9 71 0a 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 82129d6:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 82129dc:	89 04 24             	mov    %eax,(%esp)
 82129df:	e8 ee 9e 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82129e4:	e9 57 0a 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82129e9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82129f0:	00 
 82129f1:	8b 45 14             	mov    0x14(%ebp),%eax
 82129f4:	89 04 24             	mov    %eax,(%esp)
 82129f7:	e8 d2 50 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82129fc:	c7 44 24 04 40 32 bc 	movl   $0x8bc3240,0x4(%esp)
 8212a03:	08 
 8212a04:	89 04 24             	mov    %eax,(%esp)
 8212a07:	e8 95 df e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212a0c:	84 c0                	test   %al,%al
 8212a0e:	74 7c                	je     8212a8c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6b60>
 8212a10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212a17:	00 
 8212a18:	8b 45 14             	mov    0x14(%ebp),%eax
 8212a1b:	89 04 24             	mov    %eax,(%esp)
 8212a1e:	e8 ab 50 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212a23:	89 04 24             	mov    %eax,(%esp)
 8212a26:	e8 c5 3a 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212a2b:	89 04 24             	mov    %eax,(%esp)
 8212a2e:	e8 bd bc e6 ff       	call   807e6f0 <atoi@plt>
 8212a33:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8212a36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212a39:	89 04 24             	mov    %eax,(%esp)
 8212a3c:	e8 3d 78 ec ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8212a41:	05 58 06 00 00       	add    $0x658,%eax
 8212a46:	89 04 24             	mov    %eax,(%esp)
 8212a49:	e8 a2 d4 f6 ff       	call   817fef0 <_ZNK10AvatarCoin3GetEv>
 8212a4e:	01 45 bc             	add    %eax,-0x44(%ebp)
 8212a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212a54:	89 04 24             	mov    %eax,(%esp)
 8212a57:	e8 32 78 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8212a5c:	8d 90 58 06 00 00    	lea    0x658(%eax),%edx
 8212a62:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8212a65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212a69:	89 14 24             	mov    %edx,(%esp)
 8212a6c:	e8 71 d4 f6 ff       	call   817fee2 <_ZN10AvatarCoin3SetEj>
 8212a71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212a74:	89 04 24             	mov    %eax,(%esp)
 8212a77:	e8 5a d6 f6 ff       	call   81800d6 <_ZN10AvatarCoin8SaveToDBEP5CUser>
 8212a7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212a7f:	89 04 24             	mov    %eax,(%esp)
 8212a82:	e8 5d d5 f6 ff       	call   817ffe4 <_ZN10AvatarCoin14SendSyncPacketEP5CUser>
 8212a87:	e9 b4 09 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212a8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212a93:	00 
 8212a94:	8b 45 14             	mov    0x14(%ebp),%eax
 8212a97:	89 04 24             	mov    %eax,(%esp)
 8212a9a:	e8 2f 50 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212a9f:	c7 44 24 04 4b 32 bc 	movl   $0x8bc324b,0x4(%esp)
 8212aa6:	08 
 8212aa7:	89 04 24             	mov    %eax,(%esp)
 8212aaa:	e8 f2 de e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212aaf:	84 c0                	test   %al,%al
 8212ab1:	0f 84 77 01 00 00    	je     8212c2e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6d02>
 8212ab7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212abe:	00 
 8212abf:	8b 45 14             	mov    0x14(%ebp),%eax
 8212ac2:	89 04 24             	mov    %eax,(%esp)
 8212ac5:	e8 04 50 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212aca:	c7 44 24 04 4f 32 bc 	movl   $0x8bc324f,0x4(%esp)
 8212ad1:	08 
 8212ad2:	89 04 24             	mov    %eax,(%esp)
 8212ad5:	e8 c7 de e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212ada:	84 c0                	test   %al,%al
 8212adc:	74 6e                	je     8212b4c <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6c20>
 8212ade:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8212ae5:	00 
 8212ae6:	8b 45 14             	mov    0x14(%ebp),%eax
 8212ae9:	89 04 24             	mov    %eax,(%esp)
 8212aec:	e8 dd 4f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212af1:	89 04 24             	mov    %eax,(%esp)
 8212af4:	e8 f7 39 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212af9:	89 04 24             	mov    %eax,(%esp)
 8212afc:	e8 ef bb e6 ff       	call   807e6f0 <atoi@plt>
 8212b01:	66 89 45 c0          	mov    %ax,-0x40(%ebp)
 8212b05:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8212b0c:	00 
 8212b0d:	8b 45 14             	mov    0x14(%ebp),%eax
 8212b10:	89 04 24             	mov    %eax,(%esp)
 8212b13:	e8 b6 4f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212b18:	89 04 24             	mov    %eax,(%esp)
 8212b1b:	e8 d0 39 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212b20:	89 04 24             	mov    %eax,(%esp)
 8212b23:	e8 c8 bb e6 ff       	call   807e6f0 <atoi@plt>
 8212b28:	66 89 45 c2          	mov    %ax,-0x3e(%ebp)
 8212b2c:	0f bf 55 c2          	movswl -0x3e(%ebp),%edx
 8212b30:	0f bf 45 c0          	movswl -0x40(%ebp),%eax
 8212b34:	89 54 24 08          	mov    %edx,0x8(%esp)
 8212b38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212b3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212b3f:	89 04 24             	mov    %eax,(%esp)
 8212b42:	e8 6f e6 f7 ff       	call   81911b6 <_ZN20AvatarRechargeServer17GmReduceEnduranceEP5CUserss>
 8212b47:	e9 f4 08 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212b4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212b53:	00 
 8212b54:	8b 45 14             	mov    0x14(%ebp),%eax
 8212b57:	89 04 24             	mov    %eax,(%esp)
 8212b5a:	e8 6f 4f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212b5f:	c7 44 24 04 56 32 bc 	movl   $0x8bc3256,0x4(%esp)
 8212b66:	08 
 8212b67:	89 04 24             	mov    %eax,(%esp)
 8212b6a:	e8 32 de e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212b6f:	84 c0                	test   %al,%al
 8212b71:	0f 84 c9 08 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212b77:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8212b7e:	00 
 8212b7f:	8b 45 14             	mov    0x14(%ebp),%eax
 8212b82:	89 04 24             	mov    %eax,(%esp)
 8212b85:	e8 44 4f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212b8a:	c7 44 24 04 64 2c bc 	movl   $0x8bc2c64,0x4(%esp)
 8212b91:	08 
 8212b92:	89 04 24             	mov    %eax,(%esp)
 8212b95:	e8 07 de e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212b9a:	84 c0                	test   %al,%al
 8212b9c:	74 45                	je     8212be3 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6cb7>
 8212b9e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8212ba5:	00 
 8212ba6:	8b 45 14             	mov    0x14(%ebp),%eax
 8212ba9:	89 04 24             	mov    %eax,(%esp)
 8212bac:	e8 1d 4f 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212bb1:	89 04 24             	mov    %eax,(%esp)
 8212bb4:	e8 37 39 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212bb9:	89 04 24             	mov    %eax,(%esp)
 8212bbc:	e8 2f bb e6 ff       	call   807e6f0 <atoi@plt>
 8212bc1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8212bc4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8212bc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8212bcb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212bd2:	00 
 8212bd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212bd6:	89 04 24             	mov    %eax,(%esp)
 8212bd9:	e8 3a e7 f7 ff       	call   8191318 <_ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi>
 8212bde:	e9 5d 08 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212be3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8212bea:	00 
 8212beb:	8b 45 14             	mov    0x14(%ebp),%eax
 8212bee:	89 04 24             	mov    %eax,(%esp)
 8212bf1:	e8 d8 4e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212bf6:	c7 44 24 04 67 2c bc 	movl   $0x8bc2c67,0x4(%esp)
 8212bfd:	08 
 8212bfe:	89 04 24             	mov    %eax,(%esp)
 8212c01:	e8 9b dd e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212c06:	84 c0                	test   %al,%al
 8212c08:	0f 84 32 08 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212c0e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8212c15:	00 
 8212c16:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212c1d:	00 
 8212c1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212c21:	89 04 24             	mov    %eax,(%esp)
 8212c24:	e8 ef e6 f7 ff       	call   8191318 <_ZN20AvatarRechargeServer27GmChangeEnduranceReduceRateEP5CUserbi>
 8212c29:	e9 12 08 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212c2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212c35:	00 
 8212c36:	8b 45 14             	mov    0x14(%ebp),%eax
 8212c39:	89 04 24             	mov    %eax,(%esp)
 8212c3c:	e8 8d 4e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212c41:	c7 44 24 04 5e 32 bc 	movl   $0x8bc325e,0x4(%esp)
 8212c48:	08 
 8212c49:	89 04 24             	mov    %eax,(%esp)
 8212c4c:	e8 50 dd e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212c51:	84 c0                	test   %al,%al
 8212c53:	0f 84 d6 00 00 00    	je     8212d2f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6e03>
 8212c59:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8212c5d:	0f 84 dd 07 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212c63:	8d 85 45 fc ff ff    	lea    -0x3bb(%ebp),%eax
 8212c69:	89 04 24             	mov    %eax,(%esp)
 8212c6c:	e8 51 97 01 00       	call   822c3c2 <_ZN39Packet_Game_Monitor_GM_Village_AttackedC1Ev>
 8212c71:	c6 85 4f fc ff ff 01 	movb   $0x1,-0x3b1(%ebp)
 8212c78:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212c7f:	00 
 8212c80:	8b 45 14             	mov    0x14(%ebp),%eax
 8212c83:	89 04 24             	mov    %eax,(%esp)
 8212c86:	e8 43 4e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212c8b:	89 04 24             	mov    %eax,(%esp)
 8212c8e:	e8 5d 38 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212c93:	89 04 24             	mov    %eax,(%esp)
 8212c96:	e8 55 ba e6 ff       	call   807e6f0 <atoi@plt>
 8212c9b:	89 85 50 fc ff ff    	mov    %eax,-0x3b0(%ebp)
 8212ca1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8212ca8:	00 
 8212ca9:	8b 45 14             	mov    0x14(%ebp),%eax
 8212cac:	89 04 24             	mov    %eax,(%esp)
 8212caf:	e8 1a 4e 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212cb4:	89 04 24             	mov    %eax,(%esp)
 8212cb7:	e8 34 38 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212cbc:	89 04 24             	mov    %eax,(%esp)
 8212cbf:	e8 2c ba e6 ff       	call   807e6f0 <atoi@plt>
 8212cc4:	89 85 54 fc ff ff    	mov    %eax,-0x3ac(%ebp)
 8212cca:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8212cd1:	00 
 8212cd2:	8b 45 14             	mov    0x14(%ebp),%eax
 8212cd5:	89 04 24             	mov    %eax,(%esp)
 8212cd8:	e8 f1 4d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212cdd:	89 04 24             	mov    %eax,(%esp)
 8212ce0:	e8 0b 38 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212ce5:	89 04 24             	mov    %eax,(%esp)
 8212ce8:	e8 03 ba e6 ff       	call   807e6f0 <atoi@plt>
 8212ced:	89 85 58 fc ff ff    	mov    %eax,-0x3a8(%ebp)
 8212cf3:	8d 9d 45 fc ff ff    	lea    -0x3bb(%ebp),%ebx
 8212cf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212cfc:	89 04 24             	mov    %eax,(%esp)
 8212cff:	e8 8c 8f eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8212d04:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8212d0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212d0e:	89 14 24             	mov    %edx,(%esp)
 8212d11:	e8 74 f3 ef ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8212d16:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8212d1d:	00 
 8212d1e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8212d22:	89 04 24             	mov    %eax,(%esp)
 8212d25:	e8 1a e1 25 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8212d2a:	e9 11 07 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212d2f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212d36:	00 
 8212d37:	8b 45 14             	mov    0x14(%ebp),%eax
 8212d3a:	89 04 24             	mov    %eax,(%esp)
 8212d3d:	e8 8c 4d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212d42:	c7 44 24 04 66 32 bc 	movl   $0x8bc3266,0x4(%esp)
 8212d49:	08 
 8212d4a:	89 04 24             	mov    %eax,(%esp)
 8212d4d:	e8 4f dc e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212d52:	84 c0                	test   %al,%al
 8212d54:	0f 84 ce 00 00 00    	je     8212e28 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6efc>
 8212d5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8212d61:	00 
 8212d62:	8b 45 14             	mov    0x14(%ebp),%eax
 8212d65:	89 04 24             	mov    %eax,(%esp)
 8212d68:	e8 61 4d 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212d6d:	89 04 24             	mov    %eax,(%esp)
 8212d70:	e8 7b 37 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212d75:	89 04 24             	mov    %eax,(%esp)
 8212d78:	e8 73 b9 e6 ff       	call   807e6f0 <atoi@plt>
 8212d7d:	89 c3                	mov    %eax,%ebx
 8212d7f:	8d 85 d2 fe ff ff    	lea    -0x12e(%ebp),%eax
 8212d85:	89 04 24             	mov    %eax,(%esp)
 8212d88:	e8 43 d3 4c 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8212d8d:	8d 85 d2 fe ff ff    	lea    -0x12e(%ebp),%eax
 8212d93:	89 44 24 08          	mov    %eax,0x8(%esp)
 8212d97:	c7 44 24 04 0c 21 bc 	movl   $0x8bc210c,0x4(%esp)
 8212d9e:	08 
 8212d9f:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8212da5:	89 04 24             	mov    %eax,(%esp)
 8212da8:	e8 83 48 4f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8212dad:	e8 48 51 f8 ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 8212db2:	8d 95 cc fe ff ff    	lea    -0x134(%ebp),%edx
 8212db8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8212dbc:	89 04 24             	mov    %eax,(%esp)
 8212dbf:	e8 e8 54 f7 ff       	call   81882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>
 8212dc4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8212dc8:	89 04 24             	mov    %eax,(%esp)
 8212dcb:	e8 ce 2a f8 ff       	call   819589e <_ZN4ARAD27Arad_EventPeriodDataManager18setCreatePeriod_GMEi>
 8212dd0:	eb 18                	jmp    8212dea <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6ebe>
 8212dd2:	89 d3                	mov    %edx,%ebx
 8212dd4:	89 c6                	mov    %eax,%esi
 8212dd6:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8212ddc:	89 04 24             	mov    %eax,(%esp)
 8212ddf:	e8 fc 4d 4f 00       	call   8707be0 <_ZNSsD1Ev>
 8212de4:	89 f0                	mov    %esi,%eax
 8212de6:	89 da                	mov    %ebx,%edx
 8212de8:	eb 10                	jmp    8212dfa <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6ece>
 8212dea:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8212df0:	89 04 24             	mov    %eax,(%esp)
 8212df3:	e8 e8 4d 4f 00       	call   8707be0 <_ZNSsD1Ev>
 8212df8:	eb 1b                	jmp    8212e15 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6ee9>
 8212dfa:	89 d3                	mov    %edx,%ebx
 8212dfc:	89 c6                	mov    %eax,%esi
 8212dfe:	8d 85 d2 fe ff ff    	lea    -0x12e(%ebp),%eax
 8212e04:	89 04 24             	mov    %eax,(%esp)
 8212e07:	e8 e4 d2 4c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8212e0c:	89 f0                	mov    %esi,%eax
 8212e0e:	89 da                	mov    %ebx,%edx
 8212e10:	e9 32 06 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 8212e15:	8d 85 d2 fe ff ff    	lea    -0x12e(%ebp),%eax
 8212e1b:	89 04 24             	mov    %eax,(%esp)
 8212e1e:	e8 cd d2 4c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8212e23:	e9 18 06 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8212e28:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8212e2f:	00 
 8212e30:	8b 45 14             	mov    0x14(%ebp),%eax
 8212e33:	89 04 24             	mov    %eax,(%esp)
 8212e36:	e8 93 4c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212e3b:	c7 44 24 04 76 32 bc 	movl   $0x8bc3276,0x4(%esp)
 8212e42:	08 
 8212e43:	89 04 24             	mov    %eax,(%esp)
 8212e46:	e8 56 db e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8212e4b:	84 c0                	test   %al,%al
 8212e4d:	0f 84 4b 02 00 00    	je     821309e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7172>
 8212e53:	8b 45 14             	mov    0x14(%ebp),%eax
 8212e56:	89 04 24             	mov    %eax,(%esp)
 8212e59:	e8 32 4c 02 00       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 8212e5e:	83 f8 04             	cmp    $0x4,%eax
 8212e61:	0f 96 c0             	setbe  %al
 8212e64:	84 c0                	test   %al,%al
 8212e66:	74 0a                	je     8212e72 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x6f46>
 8212e68:	bb 00 00 00 00       	mov    $0x0,%ebx
 8212e6d:	e9 ed 05 00 00       	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8212e72:	66 c7 45 ca 00 00    	movw   $0x0,-0x36(%ebp)
 8212e78:	c7 85 3c fc ff ff 00 	movl   $0x0,-0x3c4(%ebp)
 8212e7f:	00 00 00 
 8212e82:	c7 85 40 fc ff ff 00 	movl   $0x0,-0x3c0(%ebp)
 8212e89:	00 00 00 
 8212e8c:	0f bf 5d ca          	movswl -0x36(%ebp),%ebx
 8212e90:	0f bf 45 ca          	movswl -0x36(%ebp),%eax
 8212e94:	83 c0 01             	add    $0x1,%eax
 8212e97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212e9b:	8b 45 14             	mov    0x14(%ebp),%eax
 8212e9e:	89 04 24             	mov    %eax,(%esp)
 8212ea1:	e8 28 4c 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212ea6:	89 04 24             	mov    %eax,(%esp)
 8212ea9:	e8 42 36 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212eae:	89 04 24             	mov    %eax,(%esp)
 8212eb1:	e8 3a b8 e6 ff       	call   807e6f0 <atoi@plt>
 8212eb6:	66 89 84 5d 3c fc ff 	mov    %ax,-0x3c4(%ebp,%ebx,2)
 8212ebd:	ff 
 8212ebe:	66 83 45 ca 01       	addw   $0x1,-0x36(%ebp)
 8212ec3:	0f bf 5d ca          	movswl -0x36(%ebp),%ebx
 8212ec7:	0f bf 45 ca          	movswl -0x36(%ebp),%eax
 8212ecb:	83 c0 01             	add    $0x1,%eax
 8212ece:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212ed2:	8b 45 14             	mov    0x14(%ebp),%eax
 8212ed5:	89 04 24             	mov    %eax,(%esp)
 8212ed8:	e8 f1 4b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212edd:	89 04 24             	mov    %eax,(%esp)
 8212ee0:	e8 0b 36 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212ee5:	89 04 24             	mov    %eax,(%esp)
 8212ee8:	e8 03 b8 e6 ff       	call   807e6f0 <atoi@plt>
 8212eed:	66 89 84 5d 3c fc ff 	mov    %ax,-0x3c4(%ebp,%ebx,2)
 8212ef4:	ff 
 8212ef5:	66 83 45 ca 01       	addw   $0x1,-0x36(%ebp)
 8212efa:	0f bf 5d ca          	movswl -0x36(%ebp),%ebx
 8212efe:	0f bf 45 ca          	movswl -0x36(%ebp),%eax
 8212f02:	83 c0 01             	add    $0x1,%eax
 8212f05:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212f09:	8b 45 14             	mov    0x14(%ebp),%eax
 8212f0c:	89 04 24             	mov    %eax,(%esp)
 8212f0f:	e8 ba 4b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212f14:	89 04 24             	mov    %eax,(%esp)
 8212f17:	e8 d4 35 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212f1c:	89 04 24             	mov    %eax,(%esp)
 8212f1f:	e8 cc b7 e6 ff       	call   807e6f0 <atoi@plt>
 8212f24:	66 89 84 5d 3c fc ff 	mov    %ax,-0x3c4(%ebp,%ebx,2)
 8212f2b:	ff 
 8212f2c:	66 83 45 ca 01       	addw   $0x1,-0x36(%ebp)
 8212f31:	0f bf 5d ca          	movswl -0x36(%ebp),%ebx
 8212f35:	0f bf 45 ca          	movswl -0x36(%ebp),%eax
 8212f39:	83 c0 01             	add    $0x1,%eax
 8212f3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212f40:	8b 45 14             	mov    0x14(%ebp),%eax
 8212f43:	89 04 24             	mov    %eax,(%esp)
 8212f46:	e8 83 4b 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8212f4b:	89 04 24             	mov    %eax,(%esp)
 8212f4e:	e8 9d 35 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8212f53:	89 04 24             	mov    %eax,(%esp)
 8212f56:	e8 95 b7 e6 ff       	call   807e6f0 <atoi@plt>
 8212f5b:	66 89 84 5d 3c fc ff 	mov    %ax,-0x3c4(%ebp,%ebx,2)
 8212f62:	ff 
 8212f63:	66 83 45 ca 01       	addw   $0x1,-0x36(%ebp)
 8212f68:	8d 85 3c fc ff ff    	lea    -0x3c4(%ebp),%eax
 8212f6e:	89 04 24             	mov    %eax,(%esp)
 8212f71:	e8 4a 4a f8 ff       	call   81979c0 <_ZN4ARAD10uint32TimeEPs>
 8212f76:	89 c2                	mov    %eax,%edx
 8212f78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212f7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8212f7f:	89 04 24             	mov    %eax,(%esp)
 8212f82:	e8 95 c2 01 00       	call   822f21c <_ZN15CUserCharacInfo21set_charac_createtimeEl>
 8212f87:	8d 85 34 fc ff ff    	lea    -0x3cc(%ebp),%eax
 8212f8d:	89 04 24             	mov    %eax,(%esp)
 8212f90:	e8 a7 be 01 00       	call   822ee3c <_ZN4arad22SigSetCharacCreateTimeC1Ev>
 8212f95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212f98:	89 04 24             	mov    %eax,(%esp)
 8212f9b:	e8 62 c2 01 00       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 8212fa0:	89 c3                	mov    %eax,%ebx
 8212fa2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8212fa9:	ff 
 8212faa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8212fad:	89 04 24             	mov    %eax,(%esp)
 8212fb0:	e8 eb af 43 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8212fb5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8212fb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212fbd:	8d 85 34 fc ff ff    	lea    -0x3cc(%ebp),%eax
 8212fc3:	89 04 24             	mov    %eax,(%esp)
 8212fc6:	e8 a9 be 01 00       	call   822ee74 <_ZN4arad22SigSetCharacCreateTime3setEjj>
 8212fcb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8212fd0:	c7 44 24 08 83 bc 00 	movl   $0xbc83,0x8(%esp)
 8212fd7:	00 
 8212fd8:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8212fdf:	08 
 8212fe0:	89 04 24             	mov    %eax,(%esp)
 8212fe3:	e8 9e ca 07 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8212fe8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8212fef:	00 
 8212ff0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8212ff4:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 8212ffa:	89 04 24             	mov    %eax,(%esp)
 8212ffd:	e8 24 5c eb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8213002:	8b 45 0c             	mov    0xc(%ebp),%eax
 8213005:	89 04 24             	mov    %eax,(%esp)
 8213008:	e8 89 5c eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 821300d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8213011:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 8213018:	00 
 8213019:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 821301f:	89 04 24             	mov    %eax,(%esp)
 8213022:	e8 8f 47 f8 ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 8213027:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 821302d:	89 04 24             	mov    %eax,(%esp)
 8213030:	e8 19 5c eb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8213035:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 821303c:	00 
 821303d:	8d 95 34 fc ff ff    	lea    -0x3cc(%ebp),%edx
 8213043:	89 54 24 04          	mov    %edx,0x4(%esp)
 8213047:	89 04 24             	mov    %eax,(%esp)
 821304a:	e8 03 b6 ec ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 821304f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8213054:	8d 95 2c fc ff ff    	lea    -0x3d4(%ebp),%edx
 821305a:	89 54 24 08          	mov    %edx,0x8(%esp)
 821305e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8213065:	00 
 8213066:	89 04 24             	mov    %eax,(%esp)
 8213069:	e8 70 df 35 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 821306e:	eb 1b                	jmp    821308b <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x715f>
 8213070:	89 d3                	mov    %edx,%ebx
 8213072:	89 c6                	mov    %eax,%esi
 8213074:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 821307a:	89 04 24             	mov    %eax,(%esp)
 821307d:	e8 50 98 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8213082:	89 f0                	mov    %esi,%eax
 8213084:	89 da                	mov    %ebx,%edx
 8213086:	e9 bc 03 00 00       	jmp    8213447 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x751b>
 821308b:	8d 85 2c fc ff ff    	lea    -0x3d4(%ebp),%eax
 8213091:	89 04 24             	mov    %eax,(%esp)
 8213094:	e8 39 98 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8213099:	e9 a2 03 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821309e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82130a5:	00 
 82130a6:	8b 45 14             	mov    0x14(%ebp),%eax
 82130a9:	89 04 24             	mov    %eax,(%esp)
 82130ac:	e8 1d 4a 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82130b1:	c7 44 24 04 18 32 bc 	movl   $0x8bc3218,0x4(%esp)
 82130b8:	08 
 82130b9:	89 04 24             	mov    %eax,(%esp)
 82130bc:	e8 e0 d8 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82130c1:	84 c0                	test   %al,%al
 82130c3:	0f 84 21 02 00 00    	je     82132ea <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x73be>
 82130c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82130d0:	00 
 82130d1:	8b 45 14             	mov    0x14(%ebp),%eax
 82130d4:	89 04 24             	mov    %eax,(%esp)
 82130d7:	e8 f2 49 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82130dc:	c7 44 24 04 84 32 bc 	movl   $0x8bc3284,0x4(%esp)
 82130e3:	08 
 82130e4:	89 04 24             	mov    %eax,(%esp)
 82130e7:	e8 b5 d8 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82130ec:	84 c0                	test   %al,%al
 82130ee:	74 47                	je     8213137 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x720b>
 82130f0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82130f7:	00 
 82130f8:	8b 45 14             	mov    0x14(%ebp),%eax
 82130fb:	89 04 24             	mov    %eax,(%esp)
 82130fe:	e8 cb 49 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213103:	89 04 24             	mov    %eax,(%esp)
 8213106:	e8 e5 33 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821310b:	89 04 24             	mov    %eax,(%esp)
 821310e:	e8 dd b5 e6 ff       	call   807e6f0 <atoi@plt>
 8213113:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8213116:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 821311a:	0f 8e 20 03 00 00    	jle    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8213120:	83 7d cc 32          	cmpl   $0x32,-0x34(%ebp)
 8213124:	0f 8f 16 03 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821312a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 821312d:	a3 94 00 37 09       	mov    %eax,0x9370094
 8213132:	e9 09 03 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8213137:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821313e:	00 
 821313f:	8b 45 14             	mov    0x14(%ebp),%eax
 8213142:	89 04 24             	mov    %eax,(%esp)
 8213145:	e8 84 49 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821314a:	c7 44 24 04 89 32 bc 	movl   $0x8bc3289,0x4(%esp)
 8213151:	08 
 8213152:	89 04 24             	mov    %eax,(%esp)
 8213155:	e8 47 d8 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821315a:	84 c0                	test   %al,%al
 821315c:	74 5a                	je     82131b8 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x728c>
 821315e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8213165:	00 
 8213166:	8b 45 14             	mov    0x14(%ebp),%eax
 8213169:	89 04 24             	mov    %eax,(%esp)
 821316c:	e8 5d 49 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213171:	89 04 24             	mov    %eax,(%esp)
 8213174:	e8 77 33 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8213179:	89 04 24             	mov    %eax,(%esp)
 821317c:	e8 6f b5 e6 ff       	call   807e6f0 <atoi@plt>
 8213181:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8213184:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8213188:	0f 88 b2 02 00 00    	js     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821318e:	81 7d d0 e7 03 00 00 	cmpl   $0x3e7,-0x30(%ebp)
 8213195:	0f 8f a5 02 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821319b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821319e:	8d 90 60 df 08 00    	lea    0x8df60(%eax),%edx
 82131a4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 82131a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82131ab:	89 14 24             	mov    %edx,(%esp)
 82131ae:	e8 6d 05 f2 ff       	call   8133720 <_ZN12advancealtar25CharacAdvanceAltarManager9gmSetStarEi>
 82131b3:	e9 88 02 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82131b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82131bf:	00 
 82131c0:	8b 45 14             	mov    0x14(%ebp),%eax
 82131c3:	89 04 24             	mov    %eax,(%esp)
 82131c6:	e8 03 49 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82131cb:	c7 44 24 04 8e 32 bc 	movl   $0x8bc328e,0x4(%esp)
 82131d2:	08 
 82131d3:	89 04 24             	mov    %eax,(%esp)
 82131d6:	e8 c6 d7 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82131db:	84 c0                	test   %al,%al
 82131dd:	74 57                	je     8213236 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x730a>
 82131df:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82131e6:	00 
 82131e7:	8b 45 14             	mov    0x14(%ebp),%eax
 82131ea:	89 04 24             	mov    %eax,(%esp)
 82131ed:	e8 dc 48 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82131f2:	89 04 24             	mov    %eax,(%esp)
 82131f5:	e8 f6 32 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82131fa:	89 04 24             	mov    %eax,(%esp)
 82131fd:	e8 ee b4 e6 ff       	call   807e6f0 <atoi@plt>
 8213202:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8213205:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8213209:	0f 88 31 02 00 00    	js     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821320f:	83 7d d4 63          	cmpl   $0x63,-0x2c(%ebp)
 8213213:	0f 8f 27 02 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8213219:	8b 45 0c             	mov    0xc(%ebp),%eax
 821321c:	8d 90 60 df 08 00    	lea    0x8df60(%eax),%edx
 8213222:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8213225:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213229:	89 14 24             	mov    %edx,(%esp)
 821322c:	e8 2b 05 f2 ff       	call   813375c <_ZN12advancealtar25CharacAdvanceAltarManager11gmSetTicketEi>
 8213231:	e9 0a 02 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8213236:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821323d:	00 
 821323e:	8b 45 14             	mov    0x14(%ebp),%eax
 8213241:	89 04 24             	mov    %eax,(%esp)
 8213244:	e8 85 48 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213249:	c7 44 24 04 94 2d bc 	movl   $0x8bc2d94,0x4(%esp)
 8213250:	08 
 8213251:	89 04 24             	mov    %eax,(%esp)
 8213254:	e8 48 d7 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8213259:	84 c0                	test   %al,%al
 821325b:	0f 84 df 01 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 8213261:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8213268:	00 
 8213269:	8b 45 14             	mov    0x14(%ebp),%eax
 821326c:	89 04 24             	mov    %eax,(%esp)
 821326f:	e8 5a 48 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213274:	c7 44 24 04 89 32 bc 	movl   $0x8bc3289,0x4(%esp)
 821327b:	08 
 821327c:	89 04 24             	mov    %eax,(%esp)
 821327f:	e8 1d d7 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8213284:	84 c0                	test   %al,%al
 8213286:	0f 84 b4 01 00 00    	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821328c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8213293:	00 
 8213294:	8b 45 14             	mov    0x14(%ebp),%eax
 8213297:	89 04 24             	mov    %eax,(%esp)
 821329a:	e8 2f 48 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 821329f:	89 04 24             	mov    %eax,(%esp)
 82132a2:	e8 49 32 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82132a7:	89 04 24             	mov    %eax,(%esp)
 82132aa:	e8 41 b4 e6 ff       	call   807e6f0 <atoi@plt>
 82132af:	89 45 d8             	mov    %eax,-0x28(%ebp)
 82132b2:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 82132b6:	0f 88 84 01 00 00    	js     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82132bc:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 82132c0:	0f 8f 7a 01 00 00    	jg     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82132c6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82132c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 82132cc:	81 c2 60 df 08 00    	add    $0x8df60,%edx
 82132d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82132d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82132d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82132dd:	89 14 24             	mov    %edx,(%esp)
 82132e0:	e8 cd 00 f2 ff       	call   81333b2 <_ZN12advancealtar25CharacAdvanceAltarManager9resetStarEP5CUserN15CMDPacketStruct13ResetStarType1TE>
 82132e5:	e9 56 01 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82132ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82132f1:	00 
 82132f2:	8b 45 14             	mov    0x14(%ebp),%eax
 82132f5:	89 04 24             	mov    %eax,(%esp)
 82132f8:	e8 d1 47 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82132fd:	c7 44 24 04 95 32 bc 	movl   $0x8bc3295,0x4(%esp)
 8213304:	08 
 8213305:	89 04 24             	mov    %eax,(%esp)
 8213308:	e8 94 d6 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 821330d:	84 c0                	test   %al,%al
 821330f:	74 4d                	je     821335e <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7432>
 8213311:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8213318:	00 
 8213319:	8b 45 14             	mov    0x14(%ebp),%eax
 821331c:	89 04 24             	mov    %eax,(%esp)
 821331f:	e8 aa 47 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213324:	89 04 24             	mov    %eax,(%esp)
 8213327:	e8 c4 31 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 821332c:	89 04 24             	mov    %eax,(%esp)
 821332f:	e8 c6 5d ef ff       	call   81090fa <_Z14StringToNumberPKc>
 8213334:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8213337:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 821333a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821333d:	89 04 24             	mov    %eax,(%esp)
 8213340:	e8 29 70 ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8213345:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821334c:	00 
 821334d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8213351:	89 04 24             	mov    %eax,(%esp)
 8213354:	e8 f9 4d f1 ff       	call   8128152 <_ZN32CLocalChina_DB_LastDay_BreakAway11makeRequestEjii>
 8213359:	e9 e2 00 00 00       	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 821335e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8213365:	00 
 8213366:	8b 45 14             	mov    0x14(%ebp),%eax
 8213369:	89 04 24             	mov    %eax,(%esp)
 821336c:	e8 5d 47 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213371:	c7 44 24 04 a3 32 bc 	movl   $0x8bc32a3,0x4(%esp)
 8213378:	08 
 8213379:	89 04 24             	mov    %eax,(%esp)
 821337c:	e8 20 d6 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8213381:	84 c0                	test   %al,%al
 8213383:	74 4a                	je     82133cf <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x74a3>
 8213385:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821338c:	00 
 821338d:	8b 45 14             	mov    0x14(%ebp),%eax
 8213390:	89 04 24             	mov    %eax,(%esp)
 8213393:	e8 36 47 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213398:	89 04 24             	mov    %eax,(%esp)
 821339b:	e8 50 31 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 82133a0:	89 04 24             	mov    %eax,(%esp)
 82133a3:	e8 52 5d ef ff       	call   81090fa <_Z14StringToNumberPKc>
 82133a8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 82133ab:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 82133ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 82133b1:	89 04 24             	mov    %eax,(%esp)
 82133b4:	e8 b5 6f ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82133b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82133c0:	00 
 82133c1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82133c5:	89 04 24             	mov    %eax,(%esp)
 82133c8:	e8 85 4d f1 ff       	call   8128152 <_ZN32CLocalChina_DB_LastDay_BreakAway11makeRequestEjii>
 82133cd:	eb 71                	jmp    8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82133cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82133d6:	00 
 82133d7:	8b 45 14             	mov    0x14(%ebp),%eax
 82133da:	89 04 24             	mov    %eax,(%esp)
 82133dd:	e8 ec 46 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 82133e2:	c7 44 24 04 b0 32 bc 	movl   $0x8bc32b0,0x4(%esp)
 82133e9:	08 
 82133ea:	89 04 24             	mov    %eax,(%esp)
 82133ed:	e8 af d5 e6 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 82133f2:	84 c0                	test   %al,%al
 82133f4:	74 4a                	je     8213440 <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7514>
 82133f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82133fd:	00 
 82133fe:	8b 45 14             	mov    0x14(%ebp),%eax
 8213401:	89 04 24             	mov    %eax,(%esp)
 8213404:	e8 c5 46 02 00       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8213409:	89 04 24             	mov    %eax,(%esp)
 821340c:	e8 df 30 4f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8213411:	89 04 24             	mov    %eax,(%esp)
 8213414:	e8 e1 5c ef ff       	call   81090fa <_Z14StringToNumberPKc>
 8213419:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 821341c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821341f:	89 04 24             	mov    %eax,(%esp)
 8213422:	e8 47 6f ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8213427:	8b 15 6c f7 41 09    	mov    0x941f76c,%edx
 821342d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8213430:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8213434:	89 44 24 04          	mov    %eax,0x4(%esp)
 8213438:	89 14 24             	mov    %edx,(%esp)
 821343b:	e8 1a 96 10 00       	call   831ca5a <_ZN18break_away_prevent23CBreakAwayPreventSystem15GM_UpdateUvListEjj>
 8213440:	bb 00 00 00 00       	mov    $0x0,%ebx
 8213445:	eb 18                	jmp    821345f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7533>
 8213447:	89 d3                	mov    %edx,%ebx
 8213449:	89 c6                	mov    %eax,%esi
 821344b:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 8213451:	89 04 24             	mov    %eax,(%esp)
 8213454:	e8 27 aa 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8213459:	89 f0                	mov    %esi,%eax
 821345b:	89 da                	mov    %ebx,%edx
 821345d:	eb 10                	jmp    821346f <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7543>
 821345f:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 8213465:	89 04 24             	mov    %eax,(%esp)
 8213468:	e8 13 aa 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821346d:	eb 1e                	jmp    821348d <_ZN30Dispatcher_New_Gmdebug_Command12oldGmRoutineEP5CUserR9PacketBufRSt6vectorISsSaISsEE+0x7561>
 821346f:	89 d3                	mov    %edx,%ebx
 8213471:	89 c6                	mov    %eax,%esi
 8213473:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8213479:	89 04 24             	mov    %eax,(%esp)
 821347c:	e8 ad ff 01 00       	call   823342e <_ZN23DisPatcher_DebugCommandD1Ev>
 8213481:	89 f0                	mov    %esi,%eax
 8213483:	89 da                	mov    %ebx,%edx
 8213485:	89 04 24             	mov    %eax,(%esp)
 8213488:	e8 c3 02 8d 00       	call   8ae3750 <_Unwind_Resume>
 821348d:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 8213493:	89 04 24             	mov    %eax,(%esp)
 8213496:	e8 93 ff 01 00       	call   823342e <_ZN23DisPatcher_DebugCommandD1Ev>
 821349b:	89 d8                	mov    %ebx,%eax
 821349d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82134a0:	83 c4 00             	add    $0x0,%esp
 82134a3:	5b                   	pop    %ebx
 82134a4:	5e                   	pop    %esi
 82134a5:	5f                   	pop    %edi
 82134a6:	5d                   	pop    %ebp
 82134a7:	c3                   	ret

```

```c
// Dispatcher_New_Gmdebug_Command::oldGmRoutine @ 0x820bf2c

/* Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, std::vector<std::string,
   std::allocator<std::string > >&) */

undefined4 __thiscall
Dispatcher_New_Gmdebug_Command::oldGmRoutine
          (Dispatcher_New_Gmdebug_Command *this,CUser *param_1,PacketBuf *param_2,vector *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  string *psVar4;
  string *psVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  CInventory *pCVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  CGuildServerProxy *this_00;
  size_t sVar13;
  undefined4 uVar14;
  CDataManager *pCVar15;
  GameWorld *pGVar16;
  SkillSlot *pSVar17;
  Stream *pSVar18;
  CStreamGuard *pCVar19;
  int iVar20;
  CFairPvPScore *pCVar21;
  CItemMakingSkill *this_01;
  undefined4 uVar22;
  PacketDispatcher *this_02;
  CStatisticServerProxy *this_03;
  CMonitorServerProxy *pCVar23;
  TimerQueue *pTVar24;
  time_t tVar25;
  Arad_DataManager *this_04;
  Arad_EventPeriodDataManager *this_05;
  long lVar26;
  undefined4 unaff_EBX;
  Inven_Item *pIVar27;
  byte bVar28;
  Inven_Item local_b30 [610];
  Inven_Item local_8ce [610];
  char local_66c [256];
  CSkillChanger local_56c [14];
  int local_55e;
  undefined2 local_4d5;
  undefined2 uStack_4d3;
  undefined2 uStack_4d1;
  undefined2 uStack_4cf;
  undefined4 local_4cd;
  undefined4 local_4c9;
  undefined4 local_4c5;
  undefined4 local_4c1;
  undefined4 local_4bd;
  undefined4 local_4b9;
  undefined4 local_4b5;
  undefined4 local_4b1;
  undefined4 local_4ad;
  undefined4 local_4a9;
  undefined4 local_4a5;
  undefined4 local_4a1;
  undefined4 local_49d;
  undefined1 local_499;
  MSG_DEBUG_COMMAND local_498 [14];
  int local_48a;
  MSG_DEBUG_COMMAND local_468 [14];
  int local_45a;
  undefined1 local_456;
  undefined1 local_455;
  CStreamGuard local_3d8 [8];
  SigSetCharacCreateTime local_3d0 [8];
  undefined4 local_3c8;
  undefined4 local_3c4;
  Packet_Game_Monitor_GM_Village_Attacked local_3bf [10];
  undefined1 local_3b5;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  CStreamGuard local_3a8 [10];
  Packet_Pcroom_Response local_39e [2];
  ushort local_39c;
  int local_394;
  undefined4 local_390;
  undefined4 local_38c;
  int local_388;
  undefined1 local_384;
  undefined1 local_383;
  ushort local_37f;
  int local_37d;
  Packet_CollectItemsGm local_373 [11];
  int local_368;
  int local_364;
  string local_35c [6];
  StatisticsGmCmdPacket local_356 [10];
  undefined4 local_34c;
  PacketGuard local_348 [12];
  PacketGuard local_33c [12];
  PacketGuard local_330 [12];
  PacketGuard local_324 [12];
  undefined4 local_318;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_314 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_308 [12];
  PacketGuard local_2fc [12];
  PacketGuard local_2f0 [12];
  undefined4 local_2e4;
  string local_2e0 [4];
  CRandomOptionItemHandleTest local_2dc [8];
  CStreamGuard local_2d4 [8];
  CStreamGuard local_2cc [10];
  TOD_Layer local_2c2 [2];
  PacketGuard local_2c0 [12];
  string local_2b4 [4];
  PacketGuard local_2b0 [12];
  string local_2a4 [4];
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined4 local_29b;
  undefined1 local_297;
  undefined4 local_296;
  undefined1 local_292;
  undefined4 local_291;
  undefined1 local_28d;
  PacketGuard local_28c [12];
  PacketGuard local_280 [12];
  string local_274 [4];
  PacketGuard local_270 [12];
  string local_264 [4];
  PacketGuard local_260 [12];
  DisPatcher_DebugCommand local_254 [6];
  allocator<char> local_24e;
  allocator<char> local_24d;
  allocator<char> local_24c;
  allocator<char> local_24b;
  TOD_Layer local_24a [2];
  cMyTrace local_248 [16];
  int local_238 [2];
  undefined4 local_230;
  int local_22c;
  int local_228 [2];
  undefined4 local_220;
  int local_21c;
  int local_218 [2];
  undefined4 local_210;
  int local_20c;
  int local_208 [2];
  undefined4 local_200;
  int local_1fc;
  int local_1f8 [2];
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8 [2];
  undefined4 local_1e0;
  int local_1dc;
  int local_1d8 [2];
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8 [2];
  undefined4 local_1c0;
  int local_1bc;
  int local_1b8 [2];
  undefined4 local_1b0;
  int local_1ac;
  int local_1a8 [2];
  undefined4 local_1a0;
  int local_19c;
  int local_198 [2];
  undefined4 local_190;
  int local_18c;
  int local_188 [2];
  undefined4 local_180;
  int local_17c;
  int local_178 [2];
  undefined4 local_170;
  int local_16c;
  int local_168 [2];
  undefined4 local_160;
  int local_15c;
  int local_158 [2];
  undefined4 local_150;
  int local_14c;
  cMyTrace local_148 [16];
  string local_138 [6];
  allocator<char> local_132;
  undefined1 local_131;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  ulong local_114;
  undefined1 local_10d;
  int local_10c;
  uint local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  TOD_UserState *local_e8;
  short local_e4;
  short local_e2;
  int local_e0;
  int local_dc;
  int local_d8;
  int *local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  CItem *local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  int local_98;
  CItem *local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 *local_80;
  CParty *local_7c;
  CParty *local_78;
  int local_74;
  CParty *local_70;
  int local_6c;
  CParty *local_68;
  CUser local_61;
  undefined4 local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  short local_44;
  short local_42;
  int local_40;
  short local_3a;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar28 = 0;
  DisPatcher_DebugCommand::DisPatcher_DebugCommand(local_254);
                    /* try { // try from 0820bf4f to 0820bf53 has its CatchHandler @ 0821346f */
  PacketGuard::PacketGuard(local_260);
  local_131 = 1;
  psVar4 = (string *)
           std::vector<std::string,std::allocator<std::string>>::operator[]
                     ((vector<std::string,std::allocator<std::string>> *)param_3,0);
                    /* try { // try from 0820bf79 to 0820c904 has its CatchHandler @ 08213447 */
  bVar2 = std::operator==(psVar4,"lawless");
  if (bVar2) {
    psVar5 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)param_3,1);
    pcVar6 = (char *)std::string::c_str(psVar5);
    local_130 = atoi(pcVar6);
    if ((0 < local_130) && (local_130 < 10000)) {
      psVar5 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)param_3,1);
      pcVar6 = (char *)std::string::c_str(psVar5);
      iVar7 = atoi(pcVar6);
      CUserCharacInfo::SetCurCharacChaosPoint((CUserCharacInfo *)param_1,iVar7);
      CUser::SendNotiPacket(param_1,0,2,0);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,100);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
      CUser::Send(param_1,local_260);
      unaff_EBX = 0;
      goto LAB_0821345f;
    }
  }
  else {
    psVar4 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)param_3,0);
    bVar2 = std::operator==(psVar4,"bal");
    if (bVar2) {
      psVar5 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)param_3,1);
      pcVar6 = (char *)std::string::c_str(psVar5);
      local_12c = atoi(pcVar6);
      if ((0 < local_12c) && (local_12c < 10000)) {
        psVar5 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,1);
        pcVar6 = (char *)std::string::c_str(psVar5);
        iVar7 = atoi(pcVar6);
        CUserCharacInfo::setCurCharacHelpAbuseComputedRatio((CUserCharacInfo *)param_1,iVar7 * 100);
        CUser::SendNotiPacket(param_1,0,2,0);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x65);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
        CUser::Send(param_1,local_260);
        unaff_EBX = 0;
        goto LAB_0821345f;
      }
    }
    else {
      psVar4 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)param_3,0);
      bVar2 = std::operator==(psVar4,"questclear2");
      if (bVar2) {
LAB_0820c238:
        bVar2 = true;
      }
      else {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,0);
        bVar2 = std::operator==(psVar4,"q");
        if (bVar2) goto LAB_0820c238;
        bVar2 = false;
      }
      if (bVar2) {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,1);
        bVar2 = std::operator==(psVar4,"on");
        if (!bVar2) {
          psVar4 = (string *)
                   std::vector<std::string,std::allocator<std::string>>::operator[]
                             ((vector<std::string,std::allocator<std::string>> *)param_3,1);
          bVar2 = std::operator==(psVar4,"off");
          if (!bVar2) {
            psVar5 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,1);
            pcVar6 = (char *)std::string::c_str(psVar5);
            local_128 = atoi(pcVar6);
            if ((0 < local_128) && (local_128 < 100000)) {
              CUser::setGmQuestFlag(param_1,true);
              CUser::quest_action(param_1,0x23,local_128,0,0);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x66);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
          }
        }
      }
      else {
        psVar4 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[]
                           ((vector<std::string,std::allocator<std::string>> *)param_3,0);
        bVar2 = std::operator==(psVar4,"guild");
        if (bVar2) {
          psVar4 = (string *)
                   std::vector<std::string,std::allocator<std::string>>::operator[]
                             ((vector<std::string,std::allocator<std::string>> *)param_3,1);
          bVar2 = std::operator==(psVar4,"exp");
          if (bVar2) {
            psVar5 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,2);
            pcVar6 = (char *)std::string::c_str(psVar5);
            local_124 = atoi(pcVar6);
            if ((0 < local_124) && (local_124 < 10000)) {
              psVar5 = (string *)
                       std::vector<std::string,std::allocator<std::string>>::operator[]
                                 ((vector<std::string,std::allocator<std::string>> *)param_3,2);
              pcVar6 = (char *)std::string::c_str(psVar5);
              iVar7 = atoi(pcVar6);
              CUserCharacInfo::set_guild_exp((CUserCharacInfo *)param_1,iVar7);
              param_1[0x796d9] = (CUser)0x1;
              CUser::WorkPerFiveMin(param_1);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x67);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
          }
        }
        else {
          psVar4 = (string *)
                   std::vector<std::string,std::allocator<std::string>>::operator[]
                             ((vector<std::string,std::allocator<std::string>> *)param_3,0);
          bVar2 = std::operator==(psVar4,"troublemaker");
          if (bVar2) {
            psVar4 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,1);
            bVar2 = std::operator==(psVar4,"on");
            if (bVar2) {
              CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_1,100);
              CUser::SendNotiPacket(param_1,0,2,0);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x68);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
            psVar4 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,1);
            bVar2 = std::operator==(psVar4,"off");
            if (bVar2) {
              CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_1,0);
              CUser::SendNotiPacket(param_1,0,2,0);
              InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x68);
              InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
              CUser::Send(param_1,local_260);
              unaff_EBX = 0;
              goto LAB_0821345f;
            }
          }
          else {
            psVar4 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::operator[]
                               ((vector<std::string,std::allocator<std::string>> *)param_3,0);
            bVar2 = std::operator==(psVar4,"fatigue");
            if (bVar2) {
              psVar4 = (string *)
                       std::vector<std::string,std::allocator<std::string>>::operator[]
                                 ((vector<std::string,std::allocator<std::string>> *)param_3,1);
              bVar2 = std::operator==(psVar4,"set");
              if (bVar2) {
                psVar5 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,2);
                pcVar6 = (char *)std::string::c_str(psVar5);
                local_120 = atoi(pcVar6);
                if ((-1 < local_120) && (local_120 < 10000)) {
                  uVar8 = CUserCharacInfo::getCurCharacMaxFatigue((CUserCharacInfo *)param_1);
                  CUserCharacInfo::setCurCharacFatigue
                            ((CUserCharacInfo *)param_1,(uVar8 & 0xffff) - local_120);
                  CUser::SendFatigue(param_1);
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_260,1,0xb3);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,1);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_260,0x69);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_260,true);
                  CUser::Send(param_1,local_260);
                  unaff_EBX = 0;
                  goto LAB_0821345f;
                }
              }
              else {
                psVar5 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,1);
                pcVar6 = (char *)std::string::c_str(psVar5);
                local_11c = atoi(pcVar6);
                if (((-1 < local_11c) && (local_11c < 10000)) && (0 < local_11c)) {
                  CUser::FatigueUp(param_1,local_11c);
                  CUser::SendFatigue(param_1);
                }
              }
            }
            else {
              psVar4 = (string *)
                       std::vector<std::string,std::allocator<std::string>>::operator[]
                                 ((vector<std::string,std::allocator<std::string>> *)param_3,0);
              bVar2 = std::operator==(psVar4,"show");
              if (bVar2) {
                psVar4 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,1);
                bVar2 = std::operator==(psVar4,"lp");
                if (bVar2) {
                  local_118 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)param_1);
                  std::allocator<char>::allocator();
                    /* try { // try from 0820c947 to 0820c94b has its CatchHandler @ 0820c94e */
                  std::string::string(local_264,"remained luck point : ",(allocator *)&local_24e);
                  std::allocator<char>::~allocator(&local_24e);
                  pcVar6 = local_66c;
                  for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
                    pcVar6[0] = '\0';
                    pcVar6[1] = '\0';
                    pcVar6[2] = '\0';
                    pcVar6[3] = '\0';
                    pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                  }
                  pcVar6[0] = '\0';
                  pcVar6[1] = '\0';
                  pcVar6[2] = '\0';
                  sprintf(local_66c,"(%d) ",local_118);
                    /* try { // try from 0820c9cb to 0820c9dd has its CatchHandler @ 0820cae7 */
                  std::string::operator+=(local_264,local_66c);
                  PacketGuard::PacketGuard(local_270);
                    /* try { // try from 0820c9f7 to 0820cabc has its CatchHandler @ 0820cabf */
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_270,0,0xc);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_270,0);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_270,0);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_270,0);
                  iVar7 = std::string::size(local_264);
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_270,iVar7);
                  iVar7 = std::string::size(local_264);
                  pcVar6 = (char *)std::string::c_str(local_264);
                  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_270,pcVar6,iVar7);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_270,true);
                  CUser::Send(param_1,local_270);
                    /* try { // try from 0820cae0 to 0820cae4 has its CatchHandler @ 0820cae7 */
                  PacketGuard::~PacketGuard(local_270);
                    /* try { // try from 0820cb0b to 0820cb7d has its CatchHandler @ 08213447 */
                  std::string::~string(local_264);
                }
              }
              else {
                psVar4 = (string *)
                         std::vector<std::string,std::allocator<std::string>>::operator[]
                                   ((vector<std::string,std::allocator<std::string>> *)param_3,0);
                bVar2 = std::operator==(psVar4,"max");
                if (bVar2) {
                  psVar4 = (string *)
                           std::vector<std::string,std::allocator<std::string>>::operator[]
                                     ((vector<std::string,std::allocator<std::string>> *)param_3,1);
                  bVar2 = std::operator==(psVar4,"lp");
                  if (bVar2) {
                    CUserCharacInfo::IncCurCharacLuckPoint((CUserCharacInfo *)param_1,100000);
                    CUserCharacInfo::enableSaveCharacStat((CUserCharacInfo *)param_1);
                    std::allocator<char>::allocator();
                    /* try { // try from 0820cbb2 to 0820cbb6 has its CatchHandler @ 0820cbb9 */
                    std::string::string(local_274,"100000 luck point!!",(allocator *)&local_24d);
                    std::allocator<char>::~allocator(&local_24d);
                    /* try { // try from 0820cbeb to 0820cbef has its CatchHandler @ 0820ccf9 */
                    PacketGuard::PacketGuard(local_280);
                    /* try { // try from 0820cc09 to 0820ccce has its CatchHandler @ 0820ccd1 */
                    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_280,0,0xc);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_280,0);
                    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_280,0);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_280,0);
                    iVar7 = std::string::size(local_274);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_280,iVar7);
                    iVar7 = std::string::size(local_274);
                    pcVar6 = (char *)std::string::c_str(local_274);
                    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_280,pcVar6,iVar7);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_280,true);
                    CUser::Send(param_1,local_280);
                    /* try { // try from 0820ccf2 to 0820ccf6 has its CatchHandler @ 0820ccf9 */
                    PacketGuard::~PacketGuard(local_280);
                    /* try { // try from 0820cd1d to 0820e498 has its CatchHandler @ 08213447 */
                    std::string::~string(local_274);
                  }
                }
                else {
                  psVar4 = (string *)
                           std::vector<std::string,std::allocator<std::string>>::operator[]
                                     ((vector<std::string,std::allocator<std::string>> *)param_3,0);
                  bVar2 = std::operator==(psVar4,"item");
                  if (bVar2) {
                    psVar5 = (string *)
                             std::vector<std::string,std::allocator<std::string>>::operator[]
                                       ((vector<std::string,std::allocator<std::string>> *)param_3,1
                                       );
                    pcVar6 = (char *)std::string::c_str(psVar5);
                    local_114 = atoi(pcVar6);
                    local_10d = DisPatcher_DebugCommand::_debugCommandAddItem
                                          (local_254,param_1,local_114,100);
                  }
                  else {
                    psVar4 = (string *)
                             std::vector<std::string,std::allocator<std::string>>::operator[]
                                       ((vector<std::string,std::allocator<std::string>> *)param_3,0
                                       );
                    bVar2 = std::operator==(psVar4,"show");
                    if (bVar2) {
                      local_131 = DisPatcher_DebugCommand::_debugCommandVisible
                                            ((CUser *)local_254,(MSG_DEBUG_COMMAND *)param_1);
                    }
                    else {
                      psVar4 = (string *)
                               std::vector<std::string,std::allocator<std::string>>::operator[]
                                         ((vector<std::string,std::allocator<std::string>> *)param_3
                                          ,0);
                      bVar2 = std::operator==(psVar4,"hide");
                      if (bVar2) {
                        local_131 = DisPatcher_DebugCommand::_debugCommandInvisible
                                              ((CUser *)local_254,(MSG_DEBUG_COMMAND *)param_1);
                      }
                      else {
                        psVar4 = (string *)
                                 std::vector<std::string,std::allocator<std::string>>::operator[]
                                           ((vector<std::string,std::allocator<std::string>> *)
                                            param_3,0);
                        bVar2 = std::operator==(psVar4,"dirty");
                        if (bVar2) {
                          psVar5 = (string *)
                                   std::vector<std::string,std::allocator<std::string>>::operator[]
                                             ((vector<std::string,std::allocator<std::string>> *)
                                              param_3,1);
                          pcVar6 = (char *)std::string::c_str(psVar5);
                          DoUserDefineCommand(param_1,0x1f,pcVar6);
                        }
                        else {
                          psVar4 = (string *)
                                   std::vector<std::string,std::allocator<std::string>>::operator[]
                                             ((vector<std::string,std::allocator<std::string>> *)
                                              param_3,0);
                          bVar2 = std::operator==(psVar4,"avatar");
                          if (bVar2) {
                            psVar5 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,1);
                            pcVar6 = (char *)std::string::c_str(psVar5);
                            local_45a = atoi(pcVar6);
                            psVar5 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,2);
                            pcVar6 = (char *)std::string::c_str(psVar5);
                            iVar7 = atoi(pcVar6);
                            local_455 = (undefined1)iVar7;
                            psVar5 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,3);
                            pcVar6 = (char *)std::string::c_str(psVar5);
                            iVar7 = atoi(pcVar6);
                            local_456 = (undefined1)iVar7;
                            local_131 = DisPatcher_DebugCommand::_debugCommandAddAvatar
                                                  (local_254,param_1,local_468);
                          }
                          else {
                            psVar4 = (string *)
                                     std::vector<std::string,std::allocator<std::string>>::
                                     operator[]((vector<std::string,std::allocator<std::string>> *)
                                                param_3,0);
                            bVar2 = std::operator==(psVar4,"combo");
                            if (!bVar2) {
                              psVar4 = (string *)
                                       std::vector<std::string,std::allocator<std::string>>::
                                       operator[]((vector<std::string,std::allocator<std::string>> *
                                                  )param_3,0);
                              bVar2 = std::operator==(psVar4,"coin");
                              if (bVar2) {
                                psVar5 = (string *)
                                         std::vector<std::string,std::allocator<std::string>>::
                                         operator[]((vector<std::string,std::allocator<std::string>>
                                                     *)param_3,1);
                                pcVar6 = (char *)std::string::c_str(psVar5);
                                local_10c = atoi(pcVar6);
                                pCVar9 = (CInventory *)
                                         CUserCharacInfo::getCurCharacInvenR
                                                   ((CUserCharacInfo *)param_1);
                                iVar7 = CInventory::GetCoin(pCVar9);
                                local_108 = iVar7 - local_10c;
                                if ((int)local_108 < 0) {
                                  local_108 = 0;
                                }
                                uVar8 = local_108;
                                pCVar9 = (CInventory *)
                                         CUserCharacInfo::getCurCharacInvenW
                                                   ((CUserCharacInfo *)param_1);
                                CInventory::SetCoin(pCVar9,uVar8);
                                if (local_10c == 0) {
                                  pCVar9 = (CInventory *)
                                           CUserCharacInfo::getCurCharacInvenW
                                                     ((CUserCharacInfo *)param_1);
                                  CInventory::SetCoin(pCVar9,0);
                                  pCVar9 = (CInventory *)
                                           CUserCharacInfo::getCurCharacInvenW
                                                     ((CUserCharacInfo *)param_1);
                                  CInventory::SetPayCoin(pCVar9,0);
                                  pCVar9 = (CInventory *)
                                           CUserCharacInfo::getCurCharacInvenW
                                                     ((CUserCharacInfo *)param_1);
                                  CInventory::SetEventCoin(pCVar9,0);
                                }
                                CUser::SendCoin(param_1);
                              }
                              else {
                                psVar4 = (string *)
                                         std::vector<std::string,std::allocator<std::string>>::
                                         operator[]((vector<std::string,std::allocator<std::string>>
                                                     *)param_3,0);
                                bVar2 = std::operator==(psVar4,"use");
                                if (bVar2) {
                                  psVar4 = (string *)
                                           std::vector<std::string,std::allocator<std::string>>::
                                           operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                  bVar2 = std::operator==(psVar4,"item");
                                  if (bVar2) {
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                    pcVar6 = (char *)std::string::c_str(psVar5);
                                    local_104 = atoi(pcVar6);
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                    pcVar6 = (char *)std::string::c_str(psVar5);
                                    local_100 = atoi(pcVar6);
                                    if ((local_104 < 1) || (6 < local_104)) {
                                      unaff_EBX = 0;
                                      goto LAB_0821345f;
                                    }
                                    local_104 = local_104 + 2;
                                    for (local_fc = 0; local_fc < local_100; local_fc = local_fc + 1
                                        ) {
                                      CUser::increase_status(param_1,(short)local_104);
                                    }
                                    CUser::SendUpdateItemList(param_1,1,0,local_104);
                                  }
                                }
                                else {
                                  psVar4 = (string *)
                                           std::vector<std::string,std::allocator<std::string>>::
                                           operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                  bVar2 = std::operator==(psVar4,"npcfav");
                                  if (bVar2) {
                                    pcVar6 = local_66c;
                                    for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                                      pcVar6[0] = '\0';
                                      pcVar6[1] = '\0';
                                      pcVar6[2] = '\0';
                                      pcVar6[3] = '\0';
                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                    }
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                    uVar10 = std::string::c_str(psVar5);
                                    psVar5 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                    uVar11 = std::string::c_str(psVar5);
                                    sprintf(local_66c,"%s %s",uVar11,uVar10);
                                    DoUserDefineCommand(param_1,0x24,local_66c);
                                  }
                                  else {
                                    psVar4 = (string *)
                                             std::vector<std::string,std::allocator<std::string>>::
                                             operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                    bVar2 = std::operator==(psVar4,"favterm");
                                    if (bVar2) {
                                      pcVar6 = local_66c;
                                      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
                                        pcVar6[0] = '\0';
                                        pcVar6[1] = '\0';
                                        pcVar6[2] = '\0';
                                        pcVar6[3] = '\0';
                                        pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                      }
                                      psVar5 = (string *)
                                               std::vector<std::string,std::allocator<std::string>>
                                               ::operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                      uVar10 = std::string::c_str(psVar5);
                                      psVar5 = (string *)
                                               std::vector<std::string,std::allocator<std::string>>
                                               ::operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                      uVar11 = std::string::c_str(psVar5);
                                      sprintf(local_66c,"%s %s",uVar11,uVar10);
                                      DoUserDefineCommand(param_1,0x23,local_66c);
                                    }
                                    else {
                                      psVar4 = (string *)
                                               std::vector<std::string,std::allocator<std::string>>
                                               ::operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                      bVar2 = std::operator==(psVar4,"sumhell");
                                      if (bVar2) {
                                        psVar5 = (string *)
                                                 std::
                                                 vector<std::string,std::allocator<std::string>>::
                                                 operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                        pcVar6 = (char *)std::string::c_str(psVar5);
                                        DoUserDefineCommand(param_1,0x15,pcVar6);
                                      }
                                      else {
                                        psVar4 = (string *)
                                                 std::
                                                 vector<std::string,std::allocator<std::string>>::
                                                 operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                        bVar2 = std::operator==(psVar4,"sdale");
                                        if (bVar2) {
                                          psVar5 = (string *)
                                                   std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                          pcVar6 = (char *)std::string::c_str(psVar5);
                                          DoUserDefineCommand(param_1,0x1c,pcVar6);
                                        }
                                        else {
                                          psVar4 = (string *)
                                                   std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                          bVar2 = std::operator==(psVar4,"mdt");
                                          if (bVar2) {
LAB_0820d4d9:
                                            bVar2 = true;
                                          }
                                          else {
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"monsterdroptest");
                                            if (bVar2) goto LAB_0820d4d9;
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"startmdt");
                                            if (bVar2) goto LAB_0820d4d9;
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"endmdt");
                                            if (bVar2) goto LAB_0820d4d9;
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"goldmdt");
                                            if (bVar2) goto LAB_0820d4d9;
                                            bVar2 = false;
                                          }
                                          if (bVar2) {
                                            pcVar6 = local_66c;
                                            for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
                                              pcVar6[0] = '\0';
                                              pcVar6[1] = '\0';
                                              pcVar6[2] = '\0';
                                              pcVar6[3] = '\0';
                                              pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                            }
                                            pcVar6[0] = '\0';
                                            pcVar6[1] = '\0';
                                            pcVar6[2] = '\0';
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"startmdt");
                                            if (bVar2) {
                                              psVar5 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                              uVar10 = std::string::c_str(psVar5);
                                              sprintf(local_66c,"%d %s",1,uVar10);
                                            }
                                            else {
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                              bVar2 = std::operator==(psVar4,"endmdt");
                                              if (bVar2) {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                uVar10 = std::string::c_str(psVar5);
                                                sprintf(local_66c,"%d %s",2,uVar10);
                                              }
                                              else {
                                                psVar4 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                bVar2 = std::operator==(psVar4,"goldmdt");
                                                if (bVar2) {
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%d %s",3,uVar10);
                                                }
                                                else {
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%d %s",0,uVar10);
                                                }
                                              }
                                            }
                                            DoUserDefineCommand(param_1,0x4b,local_66c);
                                          }
                                          else {
                                            psVar4 = (string *)
                                                     std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                            bVar2 = std::operator==(psVar4,"cli");
                                            if (bVar2) {
LAB_0820d6f3:
                                              bVar2 = true;
                                            }
                                            else {
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                              bVar2 = std::operator==(psVar4,"checklottoitem");
                                              if (bVar2) goto LAB_0820d6f3;
                                              bVar2 = false;
                                            }
                                            if (bVar2) {
                                              pcVar6 = local_66c;
                                              for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
                                                pcVar6[0] = '\0';
                                                pcVar6[1] = '\0';
                                                pcVar6[2] = '\0';
                                                pcVar6[3] = '\0';
                                                pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                              }
                                              pcVar6[0] = '\0';
                                              pcVar6[1] = '\0';
                                              pcVar6[2] = '\0';
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                              bVar2 = std::operator==(psVar4,"ven");
                                              if (bVar2) {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                uVar10 = std::string::c_str(psVar5);
                                                sprintf(local_66c,"%d %s",1,uVar10);
                                                DoUserDefineCommand(param_1,0x4d,local_66c);
                                              }
                                              else {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                uVar10 = std::string::c_str(psVar5);
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                uVar11 = std::string::c_str(psVar5);
                                                sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                DoUserDefineCommand(param_1,0x4c,local_66c);
                                              }
                                            }
                                            else {
                                              psVar4 = (string *)
                                                       std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                              bVar2 = std::operator==(psVar4,"cbind");
                                              if (bVar2) {
LAB_0820d874:
                                                bVar2 = true;
                                              }
                                              else {
                                                psVar4 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                bVar2 = std::operator==(psVar4,"checkbind");
                                                if (bVar2) goto LAB_0820d874;
                                                bVar2 = false;
                                              }
                                              if (bVar2) {
                                                psVar5 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                pcVar6 = (char *)std::string::c_str(psVar5);
                                                DoUserDefineCommand(param_1,0x4e,pcVar6);
                                              }
                                              else {
                                                psVar4 = (string *)
                                                         std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                bVar2 = std::operator==("oneadayitem",psVar4);
                                                if (bVar2) {
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x52,pcVar6);
                                                }
                                                else {
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("craneDay",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x79,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"cinven");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x46,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pickup");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x47,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"refund");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x48,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"tb");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x5d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"adjust");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x5e,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"no");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x5f,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"achieve");
                                                  if (bVar2) {
LAB_0820dcde:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ac");
                                                  if (bVar2) goto LAB_0820dcde;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x60,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"report");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x61,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"clear");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x62,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"all");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,99,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"no");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,100,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"power");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"userpoint");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_48a = atoi(pcVar6);
                                                  local_131 = DisPatcher_DebugCommand::
                                                              _debugCommandUserPowerwarPointUp
                                                                        (local_254,param_1,local_498
                                                                        );
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"guildpoint");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_55e = iVar7;
                                                  uVar8 = CUserCharacInfo::getCurCharacNo
                                                                    ((CUserCharacInfo *)param_1);
                                                  uVar12 = CUserCharacInfo::get_charac_guildkey
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar10 = CUser::GetServerGroup(param_1);
                                                  this_00 = (CGuildServerProxy *)
                                                            CServerProxyMgr<CGuildServerProxy>::
                                                            GetServerProxy(GlobalData::
                                                                           s_guild_proxy_mgr,uVar10)
                                                  ;
                                                  CGuildServerProxy::
                                                  SendIncreaseDecreasePowerWarPoint
                                                            (this_00,uVar12,uVar8,iVar7);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"win");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2b,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"townatk");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"success");
                                                  if (bVar2) {
                                                    SendVillageAttackedGMCommand(param_1,1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"fail");
                                                  if (bVar2) {
                                                    SendVillageAttackedGMCommand(param_1,2);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"end");
                                                  if (bVar2) {
                                                    SendVillageAttackedGMCommand(param_1,3);
                                                  }
                                                  else {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x1e,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"rec");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"start");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x12,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"stop");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x13,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"run");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x14,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"spd");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,9,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"durable");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x29,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"sep");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"upgrade");
                                                  if (bVar2) {
LAB_0820e477:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"up");
                                                  if (bVar2) goto LAB_0820e477;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    PacketGuard::PacketGuard(local_28c);
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                    /* try { // try from 0820e4d8 to 0820e7bc has its CatchHandler @ 0820e7d5 */
                                                  bVar2 = std::operator==(psVar4,"success");
                                                  if (bVar2) {
LAB_0820e508:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"s");
                                                  if (bVar2) goto LAB_0820e508;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    cVar3 = CUserCharacInfo::
                                                            getUpgradeSeparateTrueFlag
                                                                      ((CUserCharacInfo *)param_1);
                                                    if (cVar3 == '\0') {
                                                      local_291 = 0x6b6f;
                                                      local_28d = 0;
                                                      CUserCharacInfo::setUpgradeSeparateTrueFlag
                                                                ((CUserCharacInfo *)param_1,'\x01');
                                                      CUserCharacInfo::setUpgradeSeparateFalseFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      sprintf(local_66c,"sep upgrade success - %s",
                                                              &local_291);
                                                    }
                                                    else {
                                                      local_296 = 0x646e65;
                                                      local_292 = 0;
                                                      CUserCharacInfo::setUpgradeSeparateTrueFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      sprintf(local_66c,"sep upgrade success - %s",
                                                              &local_296);
                                                    }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"fail");
                                                  if (bVar2) {
LAB_0820e623:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"f");
                                                  if (bVar2) goto LAB_0820e623;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    cVar3 = CUserCharacInfo::
                                                            getUpgradeSeparateFlaseFlag
                                                                      ((CUserCharacInfo *)param_1);
                                                    if (cVar3 == '\0') {
                                                      local_29b = 0x6b6f;
                                                      local_297 = 0;
                                                      CUserCharacInfo::setUpgradeSeparateTrueFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      CUserCharacInfo::setUpgradeSeparateFalseFlag
                                                                ((CUserCharacInfo *)param_1,'\x01');
                                                      sprintf(local_66c,"sep upgrade fail - %s",
                                                              &local_29b);
                                                    }
                                                    else {
                                                      local_2a0 = 0x646e65;
                                                      local_29c = 0;
                                                      CUserCharacInfo::setUpgradeSeparateFalseFlag
                                                                ((CUserCharacInfo *)param_1,'\0');
                                                      sprintf(local_66c,"sep upgrade fail - %s",
                                                              &local_2a0);
                                                    }
                                                  }
                                                  }
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_28c,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_28c,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_28c,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_28c,0);
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_28c,sVar13)
                                                  ;
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_28c,
                                                             local_66c,sVar13);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_28c,true);
                                                  CUser::Send(param_1,local_28c);
                                                  unaff_EBX = 0;
                    /* try { // try from 0820e7cb to 0820e7cf has its CatchHandler @ 08213447 */
                                                  PacketGuard::~PacketGuard(local_28c);
                                                  goto LAB_0821345f;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                    /* try { // try from 0820e80e to 0820f04e has its CatchHandler @ 08213447 */
                                                  bVar2 = std::operator==(psVar4,"initstat");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x3f,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"guilddebug");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x42,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"delguild");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2c,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"changename");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"startevent");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar14 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s %s",uVar14,uVar11,uVar10)
                                                  ;
                                                  DoUserDefineCommand(param_1,0x2e,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"endevent");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x2f,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"shopcheck");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x30,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"shopnpc");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x31,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"cargo");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"delete");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x36,pcVar6);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"guildfund");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x41,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"dropitem");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x34,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"premiumdelete");
                                                  if (bVar2) {
LAB_0820ecef:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pd");
                                                  if (bVar2) goto LAB_0820ecef;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x3c,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"mailitem");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x3d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ci");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"true");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x6d,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"false");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x6d,pcVar6);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ritemclear");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x76,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"difficulty");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x78,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"bluemarble");
                                                  if (bVar2) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x40; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar11 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"%s %s",uVar11,uVar10);
                                                  DoUserDefineCommand(param_1,0x7d,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ulti");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"max");
                                                  if (bVar2) {
                                                    pCVar15 = (CDataManager *)G_CDataManager();
                                                    cVar3 = CDataManager::get_limit_inout_count
                                                                      (pCVar15,2);
                                                    CUserCharacInfo::setUltimateInoutValue
                                                              ((CUserCharacInfo *)param_1,'\x02',
                                                               cVar3);
                                                    std::allocator<char>::allocator();
                    /* try { // try from 0820f0a2 to 0820f0a6 has its CatchHandler @ 0820f0a9 */
                                                    std::string::string(local_2a4,
                                                                                                                                                
                                                  "Add ultimate inout max count!!",
                                                  (allocator *)&local_24c);
                                                  std::allocator<char>::~allocator(&local_24c);
                    /* try { // try from 0820f0db to 0820f0df has its CatchHandler @ 0820f1e9 */
                                                  PacketGuard::PacketGuard(local_2b0);
                    /* try { // try from 0820f0f9 to 0820f1be has its CatchHandler @ 0820f1c1 */
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_2b0,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2b0,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_2b0,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2b0,0);
                                                  iVar7 = std::string::size(local_2a4);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_2b0,iVar7);
                                                  iVar7 = std::string::size(local_2a4);
                                                  pcVar6 = (char *)std::string::c_str(local_2a4);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_2b0,pcVar6,
                                                             iVar7);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_2b0,true);
                                                  CUser::Send(param_1,local_2b0);
                    /* try { // try from 0820f1e2 to 0820f1e6 has its CatchHandler @ 0820f1e9 */
                                                  PacketGuard::~PacketGuard(local_2b0);
                    /* try { // try from 0820f20d to 0820f27d has its CatchHandler @ 08213447 */
                                                  std::string::~string(local_2a4);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"dimen");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"max");
                                                  if (bVar2) {
                                                    for (local_f8 = 0; local_f8 < 6;
                                                        local_f8 = local_f8 + 1) {
                                                      pCVar15 = (CDataManager *)G_CDataManager();
                                                      cVar3 = CDataManager::get_dimensionInout
                                                                        (pCVar15,local_f8);
                                                      CUserCharacInfo::setDemensionInoutValue
                                                                ((CUserCharacInfo *)param_1,
                                                                 (char)local_f8,cVar3);
                                                    }
                                                    std::allocator<char>::allocator();
                    /* try { // try from 0820f2ed to 0820f2f1 has its CatchHandler @ 0820f2f4 */
                                                    std::string::string(local_2b4,
                                                                                                                                                
                                                  "Add dimension inout max count!!",
                                                  (allocator *)&local_24b);
                                                  std::allocator<char>::~allocator(&local_24b);
                    /* try { // try from 0820f326 to 0820f32a has its CatchHandler @ 0820f434 */
                                                  PacketGuard::PacketGuard(local_2c0);
                    /* try { // try from 0820f344 to 0820f409 has its CatchHandler @ 0820f40c */
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_2c0,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2c0,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_2c0,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_2c0,0);
                                                  iVar7 = std::string::size(local_2b4);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_2c0,iVar7);
                                                  iVar7 = std::string::size(local_2b4);
                                                  pcVar6 = (char *)std::string::c_str(local_2b4);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_2c0,pcVar6,
                                                             iVar7);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_2c0,true);
                                                  CUser::Send(param_1,local_2c0);
                    /* try { // try from 0820f42d to 0820f431 has its CatchHandler @ 0820f434 */
                                                  PacketGuard::~PacketGuard(local_2c0);
                    /* try { // try from 0820f458 to 0820f63f has its CatchHandler @ 08213447 */
                                                  std::string::~string(local_2b4);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"dontsend");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"on");
                                                  if (bVar2) {
                                                    CUser::SetDebugCommand(param_1,1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"off");
                                                  if (bVar2) {
                                                    CUser::SetDebugCommand(param_1,0);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pvpskilllevel");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_f4 = atoi(pcVar6);
                                                  if (0x25 < local_f4) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_f0 = RefPvpGrade::GetPvpNextRankPoint
                                                                       (GlobalData::s_ref_pvp_grade,
                                                                        local_f4);
                                                  iVar7 = CUserCharacInfo::getPVPResultW
                                                                    ((CUserCharacInfo *)param_1);
                                                  *(undefined4 *)(iVar7 + 8) = local_f0;
                                                  iVar7 = CUserCharacInfo::getPVPResultW
                                                                    ((CUserCharacInfo *)param_1);
                                                  *(int *)(iVar7 + 0x14) = local_f4;
                                                  pGVar16 = (GameWorld *)G_GameWorld();
                                                  GameWorld::send_AllBasicInfo(pGVar16,param_1);
                                                  CUser::givePvPSkillTree(param_1,0,false,3);
                                                  CUser::send_skill_info(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"lethe");
                                                  if (bVar2) {
                                                    pSVar17 = (SkillSlot *)
                                                              CUserCharacInfo::getCurCharacSkillW
                                                                        ((CUserCharacInfo *)param_1)
                                                    ;
                                                    SkillSlot::clear_all_skills_both(pSVar17);
                                                    pSVar17 = (SkillSlot *)
                                                              CUserCharacInfo::getCurCharacSkillW
                                                                        ((CUserCharacInfo *)param_1)
                                                    ;
                                                    SkillSlot::set_parent(pSVar17,param_1);
                                                    WongWork::CSkillChanger::CSkillChanger
                                                              (local_56c);
                    /* try { // try from 0820f688 to 0820f6ba has its CatchHandler @ 0820f6bd */
                                                    WongWork::CSkillChanger::SkillInitialize
                                                              (local_56c,param_1,0,false);
                                                    CUser::givePvPSkillTree(param_1,0,false,3);
                                                    CUser::send_skill_info(param_1);
                                                    WongWork::CSkillChanger::~CSkillChanger
                                                              (local_56c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                    /* try { // try from 0820f709 to 0820f905 has its CatchHandler @ 08213447 */
                                                  bVar2 = std::operator==(psVar4,"rematch");
                                                  if (bVar2) {
                                                    local_ec = CUser::GetPVPRoom(param_1);
                                                    if ((local_ec != 0) &&
                                                       (*(int *)(local_ec + 0x6e4) != 0)) {
                                                      pcVar1 = *(code **)(**(int **)(local_ec +
                                                                                    0x6e4) + 0x68);
                                                      psVar5 = (string *)
                                                               std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  (*pcVar1)(*(undefined4 *)(local_ec + 0x6e4),
                                                            param_1,iVar7);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("wjfakd",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  TOD_Layer::TOD_Layer(local_2c2,(ushort)iVar7);
                                                  local_e8 = (TOD_UserState *)
                                                             CUser::GetCharacExpandData(param_1,0xd)
                                                  ;
                                                  TOD_UserState::setEnterLayer(local_e8,local_2c2);
                                                  TOD_UserState::getTodayEnterLayer();
                                                  uVar8 = TOD_Layer::GetLayer(local_24a);
                                                  sprintf(local_66c,"set Enter Layer : %d",
                                                          uVar8 & 0xffff);
                                                  TowerOfDespairMgr::SendMessageToCUser
                                                            (param_1,local_66c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("wjfakd2",psVar4);
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==("reload",psVar4);
                                                  if (bVar2) {
                                                    pSVar18 = (Stream *)
                                                              StreamPool::Acquire(GlobalData::
                                                                                  s_stream_pool,
                                                                                                                                                                    
                                                  "PacketDispatcher_Impl_1.cpp",0xb719);
                                                  CStreamGuard::CStreamGuard(local_2cc,pSVar18,true)
                                                  ;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2cc);
                    /* try { // try from 0820f939 to 0820f97a has its CatchHandler @ 0820f97d */
                                                  CStreamGuard::operator<<(pCVar19,0x277);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2cc);
                                                  CStreamGuard::operator<<(pCVar19,-1);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,
                                                                   local_2cc);
                    /* try { // try from 0820f9a1 to 0820f9f2 has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_2cc);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==("randomselect",psVar4);
                                                  if (bVar2) {
                                                    pSVar18 = (Stream *)
                                                              StreamPool::Acquire(GlobalData::
                                                                                  s_stream_pool,
                                                                                                                                                                    
                                                  "PacketDispatcher_Impl_1.cpp",0xb720);
                                                  CStreamGuard::CStreamGuard(local_2d4,pSVar18,true)
                                                  ;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2d4);
                    /* try { // try from 0820fa26 to 0820fa67 has its CatchHandler @ 0820fa6a */
                                                  CStreamGuard::operator<<(pCVar19,0x275);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_2d4);
                                                  CStreamGuard::operator<<(pCVar19,-1);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,
                                                                   local_2d4);
                    /* try { // try from 0820fa8e to 082102da has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_2d4);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  std::operator==("layerinfo",psVar4);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("mission",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  CUser::SetMissionParameter(param_1,iVar20,iVar7);
                                                  CUser::send_MissionList(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("newdailymission",psVar4);
                                                  if (bVar2) {
                                                    CUser::ResetDailyMission(param_1);
                                                    CUser::send_MissionList(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("clearmission",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  CUser::ClearMission(param_1,(short)iVar7);
                                                  CUser::send_MissionList(param_1);
                                                  CUser::send_pvp_record(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("clearmissionkind",psVar4)
                                                  ;
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  CUser::ClearMissionKind(param_1,(short)iVar7);
                                                  CUser::send_MissionList(param_1);
                                                  CUser::send_pvp_record(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("resetmissionlist",psVar4)
                                                  ;
                                                  if (bVar2) {
                                                    CUser::ResetMissionList(param_1);
                                                    CUser::send_MissionList(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("resetdaily",psVar4);
                                                  if (bVar2) {
                                                    pGVar16 = (GameWorld *)G_GameWorld();
                                                    GameWorld::ResetAllFatigue(pGVar16);
                                                    G_GameWorld();
                                                    GameWorld::ReselectDailyQuest();
                                                    G_GameWorld();
                                                    GameWorld::AddDailyItem();
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("combomission",psVar4);
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_e4 = (short)iVar7;
                                                  cVar3 = CUserCharacInfo::getCurCharacGrowType
                                                                    ((CUserCharacInfo *)param_1);
                                                  if (cVar3 == '\0') {
                                                    local_e2 = 0x1f;
                                                  }
                                                  else {
                                                    local_e2 = 0x20;
                                                  }
                                                  CUser::Update_ComboMission
                                                            (param_1,(int)local_e2,local_e4);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("roiregen",psVar4);
                                                  if (!bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qp");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_e0 = atoi(pcVar6);
                                                  CUser::setQuestPoint(param_1,local_e0);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"registauction");
                                                  if (bVar2) {
                                                    random_option::CRandomOptionItemHandleTest::
                                                    CRandomOptionItemHandleTest(local_2dc);
                                                    random_option::CRandomOptionItemHandleTest::
                                                    test_regist_auction((CUser *)local_2dc);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"burningstage");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_dc = iVar7;
                                                  pCVar21 = (CFairPvPScore *)
                                                            CUser::GetCharacExpandData(param_1,7);
                                                  fair_pvp::CFairPvPScore::SetRemainBonusCount
                                                            (pCVar21,iVar7);
                                                  iVar7 = G_CDataManager();
                                                  iVar7 = (uint)*(ushort *)(iVar7 + 0x49e0) -
                                                          local_dc;
                                                  pCVar21 = (CFairPvPScore *)
                                                            CUser::GetCharacExpandData(param_1,7);
                                                  fair_pvp::CFairPvPScore::SetDailyPlayCount
                                                            (pCVar21,iVar7);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"randitem");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"");
                                                  if (bVar2) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_d8 = atoi(pcVar6);
                                                  Inven_Item::Inven_Item((Inven_Item *)&local_4d5);
                                                  iVar7 = local_d8;
                                                  uStack_4d3 = (undefined2)local_d8;
                                                  uStack_4d1 = (undefined2)((uint)local_d8 >> 0x10);
                                                  pCVar15 = (CDataManager *)G_CDataManager();
                                                  local_d4 = (int *)CDataManager::find_item
                                                                              (pCVar15,iVar7);
                                                  if (local_d4 == (int *)0x0) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  (**(code **)(*local_d4 + 8))(local_d4,&local_4d5);
                                                  local_d0 = 2;
                                                  for (local_c8 = 0; local_c8 < 3;
                                                      local_c8 = local_c8 + 1) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0);
                                                  bVar2 = std::operator==(psVar4,"");
                                                  if (bVar2) break;
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0 + 1);
                                                  bVar2 = std::operator==(psVar4,"");
                                                  iVar7 = local_c8;
                                                  if (bVar2) break;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  *(char *)((int)&local_4b1 + iVar7 * 3 + 1) =
                                                       (char)iVar20;
                                                  iVar7 = local_c8;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0 + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  *(char *)((int)&local_4b1 + iVar7 * 3 + 2) =
                                                       (char)iVar20;
                                                  iVar7 = local_c8;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_d0 + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar20 = atoi(pcVar6);
                                                  *(char *)((int)&local_4b1 + iVar7 * 3 + 3) =
                                                       (char)iVar20;
                                                  local_d0 = local_d0 + 2;
                                                  }
                                                  uVar10 = CUserCharacInfo::getCurCharacInvenW
                                                                     ((CUserCharacInfo *)param_1);
                                                  local_cc = CInventory::insertItemIntoInventory
                                                                       (uVar10,CONCAT22(uStack_4d3,
                                                                                        local_4d5),
                                                                        CONCAT22(uStack_4cf,
                                                                                 uStack_4d1),
                                                                        local_4cd,local_4c9,
                                                                        local_4c5,local_4c1,
                                                                        local_4bd,local_4b9,
                                                                        local_4b5,local_4b1,
                                                                        local_4ad,local_4a9,
                                                                        local_4a5,local_4a1,
                                                                        local_49d,local_499,6,1,1);
                                                  if (-1 < local_cc) {
                                                    CUser::SendUpdateItemList(param_1,1,0,local_cc);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"insertitem");
                                                  if (bVar2) {
                                                    std::string::string(local_2e0);
                                                    for (local_b4 = 1; (int)local_b4 < 10;
                                                        local_b4 = local_b4 + 1) {
                                                      psVar5 = (string *)
                                                               std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_b4);
                    /* try { // try from 08210302 to 0821040a has its CatchHandler @ 082107d9 */
                                                  iVar7 = std::string::length(psVar5);
                                                  if (iVar7 == 0) break;
                                                  iVar7 = std::string::length(local_2e0);
                                                  if (iVar7 != 0) {
                                                    std::string::operator+=(local_2e0," ");
                                                  }
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,local_b4);
                                                  std::string::operator+=(local_2e0,psVar5);
                                                  }
                                                  pcVar6 = (char *)std::string::c_str(local_2e0);
                                                  pCVar15 = (CDataManager *)G_CDataManager();
                                                  local_c4 = (CItem *)CDataManager::find_item
                                                                                (pCVar15,pcVar6);
                                                  if (local_c4 == (CItem *)0x0) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    uVar10 = std::string::c_str(local_2e0);
                                                    sprintf(local_66c,"cannot find item (%s) ",
                                                            uVar10);
                                                    PacketGuard::PacketGuard(local_2f0);
                    /* try { // try from 08210424 to 082104df has its CatchHandler @ 082104f5 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_2f0,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2f0,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_2f0,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2f0,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_2f0,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_2f0,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_2f0,true)
                                                    ;
                                                    CUser::Send(param_1,local_2f0);
                                                    unaff_EBX = 0;
                    /* try { // try from 082104ee to 082104f2 has its CatchHandler @ 082107d9 */
                                                    PacketGuard::~PacketGuard(local_2f0);
                                                    bVar2 = false;
                                                  }
                                                  else {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    uVar10 = CItem::get_index(local_c4);
                                                    sprintf(local_66c,"item_index(%d) ",uVar10);
                    /* try { // try from 0821056c to 08210570 has its CatchHandler @ 082107d9 */
                                                    PacketGuard::PacketGuard(local_2fc);
                    /* try { // try from 0821058a to 08210645 has its CatchHandler @ 08210648 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_2fc,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2fc,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_2fc,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_2fc,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_2fc,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_2fc,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_2fc,true)
                                                    ;
                                                    CUser::Send(param_1,local_2fc);
                    /* try { // try from 0821066c to 082107c3 has its CatchHandler @ 082107d9 */
                                                    PacketGuard::~PacketGuard(local_2fc);
                                                    local_c0 = CItem::get_index(local_c4);
                                                    local_bc = 100;
                                                    if (((local_c4 != (CItem *)0x0) &&
                                                        (cVar3 = CItem::is_stackable(local_c4),
                                                        cVar3 != '\0')) &&
                                                       (iVar7 = CStackableItem::getStackableLimit
                                                                          ((CStackableItem *)
                                                                           local_c4),
                                                       iVar7 < local_bc)) {
                                                      local_bc = CStackableItem::getStackableLimit
                                                                           ((CStackableItem *)
                                                                            local_c4);
                                                    }
                                                    local_b8 = CUser::AddItem(param_1,local_c0,
                                                                              local_bc,6,&local_2e4,
                                                                              0);
                                                    if (local_b8 < 0) {
                                                      unaff_EBX = 0;
                                                      bVar2 = false;
                                                    }
                                                    else {
                                                      uVar10 = CUserCharacInfo::getCurCharacName
                                                                         ((CUserCharacInfo *)param_1
                                                                         );
                                                      uVar8 = CUser::get_acc_id(param_1);
                                                      uVar11 = NumberToString(uVar8,0);
                                                      cMyTrace::cMyTrace(local_248,
                                                                                                                                                  
                                                  "int Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, StrVector&)"
                                                  ,0xb916,0);
                                                  cMyTrace::operator()
                                                            (local_248,
                                                             "%s:\'%s\' GM Mode Add Item(%d).",
                                                             uVar11,uVar10,local_b8);
                                                  CUser::SendUpdateItemList
                                                            (param_1,1,local_2e4,local_b8);
                                                  bVar2 = true;
                                                  }
                                                  }
                    /* try { // try from 082107fd to 0821093e has its CatchHandler @ 08213447 */
                                                  std::string::~string(local_2e0);
                                                  bVar2 = !bVar2;
joined_r0x08211894:
                                                  if (bVar2) goto LAB_0821345f;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"itemskill");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_b0 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_ac = atoi(pcVar6);
                                                  this_01 = (CItemMakingSkill *)
                                                            CUser::GetCharacExpandData(param_1,10);
                                                  CItemMakingSkill::SetItemMakingSkillPoint
                                                            (this_01,local_b0,local_ac,param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"multimail");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"stack");
                                                  if (bVar2) {
                                                    local_a8 = "multimail test";
                                                    local_a4 = "stackable item test";
                                                    std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::vector(local_308);
                    /* try { // try from 08210948 to 08210b95 has its CatchHandler @ 08210b98 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::clear(local_308);
                                                  local_230 = 5;
                                                  local_22c = 0xbdd;
                                                  std::make_pair<int,int>(local_238,&local_22c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_238);
                                                  local_220 = 4;
                                                  local_21c = 0xbda;
                                                  std::make_pair<int,int>(local_228,&local_21c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_228);
                                                  local_210 = 3;
                                                  local_20c = 0xbd9;
                                                  std::make_pair<int,int>(local_218,&local_20c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_218);
                                                  local_200 = 2;
                                                  local_1fc = 0xbdb;
                                                  std::make_pair<int,int>(local_208,&local_1fc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_208);
                                                  local_1f0 = 1;
                                                  local_1ec = 0xbdc;
                                                  std::make_pair<int,int>(local_1f8,&local_1ec);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_308,(pair *)local_1f8);
                                                  pIVar27 = local_8ce;
                                                  for (iVar7 = 9; iVar7 != -1; iVar7 = iVar7 + -1) {
                                                    Inven_Item::Inven_Item(pIVar27);
                                                    pIVar27 = pIVar27 + 0x3d;
                                                  }
                                                  WongWork::CMailBoxHelper::
                                                  MakeSystemMultiMailPostal
                                                            ((vector *)local_308,local_8ce,10);
                                                  sVar13 = strlen(local_a4);
                                                  uVar10 = CUserCharacInfo::getCurCharacNo
                                                                     ((CUserCharacInfo *)param_1);
                                                  WongWork::CMailBoxHelper::
                                                  ReqDBSendNewSystemMultiMail
                                                            (local_a8,local_8ce,5,1000,uVar10,
                                                             local_a4,sVar13,0,99,0);
                    /* try { // try from 08210bbc to 08210c12 has its CatchHandler @ 08213447 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::~vector(local_308);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"equip");
                                                  if (bVar2) {
                                                    local_a0 = "multimail test";
                                                    local_9c = "equip item test";
                                                    std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::vector(local_314);
                    /* try { // try from 08210c1c to 08210ffe has its CatchHandler @ 08211001 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::clear(local_314);
                                                  local_1e0 = 5;
                                                  local_1dc = 10000;
                                                  std::make_pair<int,int>(local_1e8,&local_1dc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1e8);
                                                  local_1d0 = 5;
                                                  local_1cc = 0x2711;
                                                  std::make_pair<int,int>(local_1d8,&local_1cc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1d8);
                                                  local_1c0 = 5;
                                                  local_1bc = 0x2712;
                                                  std::make_pair<int,int>(local_1c8,&local_1bc);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1c8);
                                                  local_1b0 = 5;
                                                  local_1ac = 0x2713;
                                                  std::make_pair<int,int>(local_1b8,&local_1ac);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1b8);
                                                  local_1a0 = 5;
                                                  local_19c = 0x2714;
                                                  std::make_pair<int,int>(local_1a8,&local_19c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_1a8);
                                                  local_190 = 5;
                                                  local_18c = 0x2715;
                                                  std::make_pair<int,int>(local_198,&local_18c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_198);
                                                  local_180 = 5;
                                                  local_17c = 0x2716;
                                                  std::make_pair<int,int>(local_188,&local_17c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_188);
                                                  local_170 = 5;
                                                  local_16c = 0x2717;
                                                  std::make_pair<int,int>(local_178,&local_16c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_178);
                                                  local_160 = 5;
                                                  local_15c = 0x2718;
                                                  std::make_pair<int,int>(local_168,&local_15c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_168);
                                                  local_150 = 5;
                                                  local_14c = 0x2719;
                                                  std::make_pair<int,int>(local_158,&local_14c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(local_314,(pair *)local_158);
                                                  pIVar27 = local_b30;
                                                  for (iVar7 = 9; iVar7 != -1; iVar7 = iVar7 + -1) {
                                                    Inven_Item::Inven_Item(pIVar27);
                                                    pIVar27 = pIVar27 + 0x3d;
                                                  }
                                                  WongWork::CMailBoxHelper::
                                                  MakeSystemMultiMailPostal
                                                            ((vector *)local_314,local_b30,10);
                                                  sVar13 = strlen(local_9c);
                                                  uVar10 = CUserCharacInfo::getCurCharacNo
                                                                     ((CUserCharacInfo *)param_1);
                                                  WongWork::CMailBoxHelper::
                                                  ReqDBSendNewSystemMultiMail
                                                            (local_a0,local_b30,10,9999,uVar10,
                                                             local_9c,sVar13,0,99,0);
                    /* try { // try from 08211025 to 0821138f has its CatchHandler @ 08213447 */
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::~vector(local_314);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"statistic");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"gold");
                                                  if (bVar2) {
                                                    GetInstanceCirculationStatistic();
                                                    CCirculationStatistic::
                                                    InsertCirculationStatistic();
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("ingameday",psVar4);
                                                  if (bVar2) {
LAB_082110e1:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==("day",psVar4);
                                                  if (bVar2) goto LAB_082110e1;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x66,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"setinven");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_98 = atoi(pcVar6);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  iVar7 = CInventory::get_inventory_capacity(pCVar9)
                                                  ;
                                                  cUserHistoryLog::ExpandInventory
                                                            ((cUserHistoryLog *)(param_1 + 0x79700),
                                                             iVar7,local_98,2);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  CInventory::set_inventory_capacity
                                                            (pCVar9,local_98);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar10 = CInventory::get_inventory_capacity
                                                                     (pCVar9);
                                                  uVar11 = CUserCharacInfo::getCurCharacNo
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar14 = CUser::GetUID(param_1);
                                                  uVar22 = CUser::GetServerGroup(param_1);
                                                  DB_UpdateInventoryCapacity::makeRequest
                                                            (uVar22,uVar14,uVar11,uVar10);
                                                  InterfacePacketBuf::clear
                                                            ((InterfacePacketBuf *)local_260);
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_260,0,0x42)
                                                  ;
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_260,0xb);
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenR
                                                                     ((CUserCharacInfo *)param_1);
                                                  iVar7 = CInventory::get_inventory_capacity(pCVar9)
                                                  ;
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_260,iVar7);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_260,true);
                                                  CUser::Send(param_1,local_260);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"itemseed");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  pCVar15 = (CDataManager *)G_CDataManager();
                                                  local_94 = (CItem *)CDataManager::find_item
                                                                                (pCVar15,iVar7);
                                                  if (local_94 == (CItem *)0x0) {
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  uVar10 = std::string::c_str(psVar5);
                                                  sprintf(local_66c,"cannot find item (%s) ",uVar10)
                                                  ;
                                                  PacketGuard::PacketGuard(local_324);
                    /* try { // try from 082113a9 to 08211464 has its CatchHandler @ 0821147d */
                                                  InterfacePacketBuf::put_header
                                                            ((InterfacePacketBuf *)local_324,0,0xc);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_324,0);
                                                  InterfacePacketBuf::put_short
                                                            ((InterfacePacketBuf *)local_324,0);
                                                  InterfacePacketBuf::put_byte
                                                            ((InterfacePacketBuf *)local_324,0);
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_int
                                                            ((InterfacePacketBuf *)local_324,sVar13)
                                                  ;
                                                  sVar13 = strlen(local_66c);
                                                  InterfacePacketBuf::put_str
                                                            ((InterfacePacketBuf *)local_324,
                                                             local_66c,sVar13);
                                                  InterfacePacketBuf::finalize
                                                            ((InterfacePacketBuf *)local_324,true);
                                                  CUser::Send(param_1,local_324);
                                                  unaff_EBX = 0;
                    /* try { // try from 08211473 to 08211477 has its CatchHandler @ 08213447 */
                                                  PacketGuard::~PacketGuard(local_324);
                                                  goto LAB_0821345f;
                                                  }
                                                  local_90 = CItem::get_index(local_94);
                                                  local_8c = 100;
                                                  if (((local_94 != (CItem *)0x0) &&
                                                      (cVar3 = CItem::is_stackable(local_94),
                                                      cVar3 != '\0')) &&
                                                     (iVar7 = CStackableItem::getStackableLimit
                                                                        ((CStackableItem *)local_94)
                                                     , iVar7 < local_8c)) {
                                                    local_8c = CStackableItem::getStackableLimit
                                                                         ((CStackableItem *)local_94
                                                                         );
                                                  }
                    /* try { // try from 08211534 to 082116e8 has its CatchHandler @ 08213447 */
                                                  local_88 = CUser::AddItem(param_1,local_90,
                                                                            local_8c,6,&local_318,0)
                                                  ;
                                                  if (local_88 < 0) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  pCVar9 = (CInventory *)
                                                           CUserCharacInfo::getCurCharacInvenRefW
                                                                     ((CUserCharacInfo *)param_1);
                                                  local_84 = CInventory::GetInvenRef
                                                                       (pCVar9,1,local_88);
                                                  if (local_84 != 0) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(int *)(local_84 + 7) = iVar7;
                                                  }
                                                  uVar10 = CUserCharacInfo::getCurCharacName
                                                                     ((CUserCharacInfo *)param_1);
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  uVar11 = NumberToString(uVar8,0);
                                                  cMyTrace::cMyTrace(local_148,
                                                                                                                                          
                                                  "int Dispatcher_New_Gmdebug_Command::oldGmRoutine(CUser*, PacketBuf&, StrVector&)"
                                                  ,0xb9fb,0);
                                                  cMyTrace::operator()
                                                            (local_148,
                                                             "%s:\'%s\' GM Mode Add Item(%d).",
                                                             uVar11,uVar10,local_88);
                                                  CUser::SendUpdateItemList
                                                            (param_1,1,local_318,local_88);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"moveavatar");
                                                  if (bVar2) {
LAB_0821169f:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"mva");
                                                  if (bVar2) goto LAB_0821169f;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    this_02 = (PacketDispatcher *)
                                                              G_PacketDispatcher();
                                                    local_80 = (undefined4 *)
                                                               PacketDispatcher::getDispatcher
                                                                         (this_02,0x13);
                                                    if (local_80 == (undefined4 *)0x0) {
                                                      unaff_EBX = 0;
                                                      goto LAB_0821345f;
                                                    }
                                                    PacketGuard::PacketGuard(local_330);
                    /* try { // try from 08211702 to 0821184c has its CatchHandler @ 08211869 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_330,1,
                                                               0x13);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,1);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,1);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,3);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_330,1);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,
                                                               0x9b07);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_330,0);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_330,false
                                                              );
                                                    InterfacePacketBuf::set_index
                                                              ((InterfacePacketBuf *)local_330,0xf);
                                                    pcVar1 = *(code **)*local_80;
                                                    uVar10 = InterfacePacketBuf::get
                                                                       ((InterfacePacketBuf *)
                                                                        local_330);
                                                    iVar7 = (*pcVar1)(local_80,param_1,uVar10);
                                                    bVar2 = iVar7 != 0;
                                                    if (bVar2) {
                                                      unaff_EBX = 0;
                                                    }
                    /* try { // try from 0821188d to 08211b64 has its CatchHandler @ 08213447 */
                                                    PacketGuard::~PacketGuard(local_330);
                                                    goto joined_r0x08211894;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"quickon");
                                                  if (bVar2) {
LAB_082118ed:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qon");
                                                  if (bVar2) goto LAB_082118ed;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    local_7c = (CParty *)CUser::GetParty(param_1);
                                                    if ((local_7c == (CParty *)0x0) ||
                                                       (iVar7 = CParty::get_member_count(local_7c),
                                                       iVar7 < 2)) {
                                                      bVar2 = false;
                                                    }
                                                    else {
                                                      bVar2 = true;
                                                    }
                                                    if (bVar2) {
                                                      CParty::send_quick_party_matching_result
                                                                (local_7c,true,(CUser *)0x0);
                                                      CParty::set_quick_party(local_7c,true);
                                                    }
                                                    goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"quickoff");
                                                  if (bVar2) {
LAB_082119b6:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qoff");
                                                  if (bVar2) goto LAB_082119b6;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    local_78 = (CParty *)CUser::GetParty(param_1);
                                                    if ((local_78 == (CParty *)0x0) ||
                                                       (iVar7 = CParty::get_member_count(local_78),
                                                       iVar7 < 2)) {
                                                      bVar2 = false;
                                                    }
                                                    else {
                                                      bVar2 = true;
                                                    }
                                                    if (bVar2) {
                                                      CParty::send_quick_party_matching_result
                                                                (local_78,false,(CUser *)0x0);
                                                      CParty::set_quick_party(local_78,false);
                                                    }
                                                    goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"quickreward");
                                                  if (bVar2) {
LAB_08211a7f:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"qr");
                                                  if (bVar2) goto LAB_08211a7f;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_74 = atoi(pcVar6);
                                                  if ((local_74 < 0) || (10 < local_74)) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_70 = (CParty *)CUser::GetParty(param_1);
                                                  if ((local_70 == (CParty *)0x0) ||
                                                     (iVar7 = CParty::get_member_count(local_70),
                                                     iVar7 < 2)) {
                                                    bVar2 = false;
                                                  }
                                                  else {
                                                    bVar2 = true;
                                                  }
                                                  if (bVar2) {
                                                    CParty::set_gm_random_buff_type
                                                              (local_70,local_74);
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    sprintf(local_66c,
                                                            "GM QUICK PARTY RANDOM BUFF (%d) TYPE!!"
                                                            ,local_74);
                                                    PacketGuard::PacketGuard(local_33c);
                    /* try { // try from 08211b7e to 08211c39 has its CatchHandler @ 08211c3c */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_33c,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_33c,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_33c,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_33c,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_33c,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_33c,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_33c,true)
                                                    ;
                                                    CParty::send_to_party(local_70,local_33c);
                    /* try { // try from 08211c60 to 08211dbb has its CatchHandler @ 08213447 */
                                                    PacketGuard::~PacketGuard(local_33c);
                                                  }
                                                  goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"hellvalue");
                                                  if (bVar2) {
LAB_08211cb8:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"hv");
                                                  if (bVar2) goto LAB_08211cb8;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_6c = atoi(pcVar6);
                                                  if ((local_6c < 0) || (100 < local_6c)) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_68 = (CParty *)CUser::GetParty(param_1);
                                                  if ((local_68 == (CParty *)0x0) ||
                                                     (iVar7 = CParty::get_member_count(local_68),
                                                     iVar7 < 2)) {
                                                    bVar2 = false;
                                                  }
                                                  else {
                                                    bVar2 = true;
                                                  }
                                                  if (bVar2) {
                                                    BattleData::SetHellPartyValueTotal
                                                              ((BattleData *)(local_68 + 0x32c),
                                                               local_6c);
                                                    CParty::send_hellParty_value(local_68);
                                                    pcVar6 = local_66c;
                                                    for (iVar7 = 0x3f; iVar7 != 0;
                                                        iVar7 = iVar7 + -1) {
                                                      pcVar6[0] = '\0';
                                                      pcVar6[1] = '\0';
                                                      pcVar6[2] = '\0';
                                                      pcVar6[3] = '\0';
                                                      pcVar6 = pcVar6 + ((uint)bVar28 * -2 + 1) * 4;
                                                    }
                                                    pcVar6[0] = '\0';
                                                    pcVar6[1] = '\0';
                                                    pcVar6[2] = '\0';
                                                    uVar10 = BattleData::GetHellPartyValueTotal
                                                                       ((BattleData *)
                                                                        (local_68 + 0x32c));
                                                    sprintf(local_66c,"HELL PARTY VALUE (%d)",uVar10
                                                           );
                                                    PacketGuard::PacketGuard(local_348);
                    /* try { // try from 08211dd5 to 08211e90 has its CatchHandler @ 08211e93 */
                                                    InterfacePacketBuf::put_header
                                                              ((InterfacePacketBuf *)local_348,0,0xc
                                                              );
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_348,0);
                                                    InterfacePacketBuf::put_short
                                                              ((InterfacePacketBuf *)local_348,0);
                                                    InterfacePacketBuf::put_byte
                                                              ((InterfacePacketBuf *)local_348,0);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_int
                                                              ((InterfacePacketBuf *)local_348,
                                                               sVar13);
                                                    sVar13 = strlen(local_66c);
                                                    InterfacePacketBuf::put_str
                                                              ((InterfacePacketBuf *)local_348,
                                                               local_66c,sVar13);
                                                    InterfacePacketBuf::finalize
                                                              ((InterfacePacketBuf *)local_348,true)
                                                    ;
                                                    CParty::send_to_party(local_68,local_348);
                    /* try { // try from 08211eb7 to 082120cc has its CatchHandler @ 08213447 */
                                                    PacketGuard::~PacketGuard(local_348);
                                                  }
                                                  goto LAB_08213440;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"statisticlog");
                                                  if (bVar2) {
LAB_08211f0f:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"sl");
                                                  if (bVar2) goto LAB_08211f0f;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    StatisticsGmCmdPacket::StatisticsGmCmdPacket
                                                              (local_356);
                                                    local_34c = CUserCharacInfo::getCurCharacNo
                                                                          ((CUserCharacInfo *)
                                                                           param_1);
                                                    uVar10 = CUser::GetServerGroup(param_1);
                                                    this_03 = (CStatisticServerProxy *)
                                                              CServerProxyMgr<CStatisticServerProxy>
                                                              ::GetServerProxy(GlobalData::
                                                                               s_statistic_proxy_mgr
                                                                               ,uVar10);
                                                    CStatisticServerProxy::SendPacket
                                                              (this_03,(char *)local_356,0xe);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"itemdrop");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x6f,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"upcard");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  DoUserDefineCommand(param_1,0x70,pcVar6);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"inde");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"item");
                                                  if (!bVar2) goto LAB_082120b2;
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"drop");
                                                  if (!bVar2) goto LAB_082120b2;
                                                  bVar2 = true;
                                                  }
                                                  else {
LAB_082120b2:
                                                    bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    std::string::string(local_35c);
                    /* try { // try from 082120d3 to 08212131 has its CatchHandler @ 08212134 */
                                                    cVar3 = CUser::getForceDropFlag(param_1);
                                                    if (cVar3 == '\x01') {
                                                      std::string::operator=(local_35c,"off");
                                                    }
                                                    else {
                                                      std::string::operator=(local_35c,"on");
                                                    }
                                                    pcVar6 = (char *)std::string::c_str(local_35c);
                                                    DoUserDefineCommand(param_1,0x77,pcVar6);
                    /* try { // try from 08212158 to 08212913 has its CatchHandler @ 08213447 */
                                                    std::string::~string(local_35c);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"timegate");
                                                  if (bVar2) {
LAB_082121b0:
                                                    bVar2 = true;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"tg");
                                                  if (bVar2) goto LAB_082121b0;
                                                  bVar2 = false;
                                                  }
                                                  if (bVar2) {
                                                    Packet_CollectItemsGm::Packet_CollectItemsGm
                                                              (local_373);
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_368 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_364 = atoi(pcVar6);
                                                  uVar10 = CUser::GetServerGroup(param_1);
                                                  pCVar23 = (CMonitorServerProxy *)
                                                            CServerProxyMgr<CMonitorServerProxy>::
                                                            GetServerProxy(GlobalData::
                                                                           s_monitor_proxy_mgr,
                                                                           uVar10);
                                                  CMonitorServerProxy::SendTcpPacket
                                                            (pCVar23,(char *)local_373,0x17);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"bossdifficult");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_61 = (CUser)StringToNumber(pcVar6);
                                                  if (('\0' < (char)local_61) &&
                                                     ((char)local_61 < '\x05')) {
                                                    param_1[0x796cc] = local_61;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"bossmap");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_60 = StringToNumber(pcVar6);
                                                  *(undefined4 *)(param_1 + 0x796d0) = local_60;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"fatigue");
                                                  if (bVar2) {
                                                    pTVar24 = (TimerQueue *)G_TimerQueue();
                                                    TimerQueue::InsertTimer(pTVar24,2,0,0x50,3,0,0);
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"apply_effect");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_5c = StringToNumber(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_58 = StringToNumber(pcVar6);
                                                  if (local_5c < 0) {
                                                    unaff_EBX = 0;
                                                  }
                                                  else {
                                                    AradServerStateMessage::AradServerStateMessage
                                                              ((AradServerStateMessage *)&local_37f)
                                                    ;
                                                    local_37f = (ushort)(local_58 != 0);
                                                    local_37d = local_58;
                                                    ARAD::Arad_ServerStateManager::deleteState
                                                              (GlobalData::s_serverStateManager_,
                                                               local_5c);
                                                    ARAD::Arad_ServerStateManager::insertState
                                                              (GlobalData::s_serverStateManager_,
                                                               local_5c,&local_37f);
                                                    unaff_EBX = 0;
                                                  }
                                                  goto LAB_0821345f;
                                                  }
                                                  psVar4 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"open");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"sd");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_OpenSouthernDale
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"boss");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_OpenBossTower
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"aa");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_OpenAdvanceAltar
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"close");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"sd");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_CloseSouthernDale
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"boss");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_CloseBossTower
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"aa");
                                                  if (bVar2) {
                                                    CDailyScheduleManager::GM_CloseAdvanceAltar
                                                              (GlobalData::s_DailyScheduleManager);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"ap");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"set");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_54 = atoi(pcVar6);
                                                  APSystem::CUserProc::GM_Set(param_1,local_54);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    APSystem::CUserProc::GM_Reset(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"gmmode");
                                                  if (bVar2) {
                                                    APSystem::CActionPointManager::_IsGMOn = 1;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"realmode");
                                                  if (bVar2) {
                                                    APSystem::CActionPointManager::_IsGMOn = 0;
                                                    APSystem::CActionPointManager::_gmWeekday = 0;
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"week");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_50 = atoi(pcVar6);
                                                  local_4c = 7;
                                                  switch(local_50) {
                                                  default:
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  case 1:
                                                    local_4c = 1;
                                                    break;
                                                  case 2:
                                                    local_4c = 2;
                                                    break;
                                                  case 3:
                                                    local_4c = 3;
                                                    break;
                                                  case 4:
                                                    local_4c = 4;
                                                    break;
                                                  case 5:
                                                    local_4c = 5;
                                                    break;
                                                  case 6:
                                                    local_4c = 6;
                                                    break;
                                                  case 7:
                                                    local_4c = 0;
                                                  }
                                                  APSystem::CActionPointManager::_gmWeekday = 1;
                                                  DAT_09370090 = local_4c;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"pcroom");
                                                  if (bVar2) {
                                                    Packet_Pcroom_Response::Packet_Pcroom_Response
                                                              (local_39e);
                                                    local_38c = 1;
                                                    local_384 = 1;
                                                    local_383 = 0xb;
                                                    tVar25 = time((time_t *)0x0);
                                                    local_388 = tVar25 + 0x93a80;
                                                    local_394 = CUser::GetUID(param_1);
                                                    local_390 = CUser::get_acc_id(param_1);
                                                    pSVar18 = (Stream *)
                                                              StreamPool::Acquire(GlobalData::
                                                                                  s_stream_pool,
                                                                                                                                                                    
                                                  "PacketDispatcher_Impl_1.cpp",0xbc0a);
                                                  CStreamGuard::CStreamGuard(local_3a8,pSVar18,true)
                                                  ;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_3a8);
                    /* try { // try from 08212947 to 082129b8 has its CatchHandler @ 082129bb */
                                                  CStreamGuard::operator<<(pCVar19,0x17e);
                                                  iVar7 = local_394;
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator*(local_3a8);
                                                  CStreamGuard::operator<<(pCVar19,iVar7);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator->(local_3a8);
                                                  CStreamGuard::put_binary
                                                            (pCVar19,local_39e,(uint)local_39c);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,
                                                                   local_3a8);
                    /* try { // try from 082129df to 08212d74 has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_3a8);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"avatarcoin");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_48 = atoi(pcVar6);
                                                  iVar7 = CUserCharacInfo::getCurCharacInvenR
                                                                    ((CUserCharacInfo *)param_1);
                                                  iVar7 = AvatarCoin::Get((AvatarCoin *)
                                                                          (iVar7 + 0x658));
                                                  local_48 = local_48 + iVar7;
                                                  iVar7 = CUserCharacInfo::getCurCharacInvenW
                                                                    ((CUserCharacInfo *)param_1);
                                                  AvatarCoin::Set((AvatarCoin *)(iVar7 + 0x658),
                                                                  local_48);
                                                  AvatarCoin::SaveToDB(param_1);
                                                  AvatarCoin::SendSyncPacket(param_1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"avr");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"sorneh");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_44 = (short)iVar7;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  local_42 = (short)iVar7;
                                                  AvatarRechargeServer::GmReduceEndurance
                                                            (param_1,local_44,local_42);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"ghkrfbf");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"on");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_40 = atoi(pcVar6);
                                                  AvatarRechargeServer::GmChangeEnduranceReduceRate
                                                            (param_1,true,local_40);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"off");
                                                  if (bVar2) {
                                                    AvatarRechargeServer::
                                                    GmChangeEnduranceReduceRate(param_1,false,0);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"startva");
                                                  if (bVar2) {
                                                    if (param_1 != (CUser *)0x0) {
                                                      Packet_Game_Monitor_GM_Village_Attacked::
                                                      Packet_Game_Monitor_GM_Village_Attacked
                                                                (local_3bf);
                                                      local_3b5 = 1;
                                                      psVar5 = (string *)
                                                               std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_3b4 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_3b0 = atoi(pcVar6);
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_3ac = atoi(pcVar6);
                                                  uVar10 = CUser::GetServerGroup(param_1);
                                                  pCVar23 = (CMonitorServerProxy *)
                                                            CServerProxyMgr<CMonitorServerProxy>::
                                                            GetServerProxy(GlobalData::
                                                                           s_monitor_proxy_mgr,
                                                                           uVar10);
                                                  CMonitorServerProxy::SendTcpPacket
                                                            (pCVar23,(char *)local_3bf,0x17);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetAvengerReady");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  std::allocator<char>::allocator();
                    /* try { // try from 08212da8 to 08212dac has its CatchHandler @ 08212dfa */
                                                  std::string::string(local_138,
                                                                      "Arad_EventPeriodDataManager",
                                                                      (allocator *)&local_132);
                    /* try { // try from 08212dad to 08212dcf has its CatchHandler @ 08212dd2 */
                                                  this_04 = (Arad_DataManager *)
                                                            ARAD::Singleton<ARAD::Arad_DataManager>
                                                            ::Get();
                                                  this_05 = (Arad_EventPeriodDataManager *)
                                                            ARAD::Arad_DataManager::findGameScript
                                                                      (this_04,(string)local_138);
                                                  ARAD::Arad_EventPeriodDataManager::
                                                  setCreatePeriod_GM(this_05,iVar7);
                    /* try { // try from 08212df3 to 08212df7 has its CatchHandler @ 08212dfa */
                                                  std::string::~string(local_138);
                                                  std::allocator<char>::~allocator(&local_132);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                    /* try { // try from 08212e46 to 08212fe7 has its CatchHandler @ 08213447 */
                                                  bVar2 = std::operator==(psVar4,"SetCreateTime");
                                                  if (bVar2) {
                                                    uVar8 = std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  size((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3);
                                                  if (uVar8 < 5) {
                                                    unaff_EBX = 0;
                                                    goto LAB_0821345f;
                                                  }
                                                  local_3a = 0;
                                                  local_3c8 = 0;
                                                  local_3c4 = 0;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                    /* WARNING: Ignoring partial resolution of indirect */
                                                  local_3c8._0_2_ = (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  iVar20 = (int)local_3a;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,(int)local_3a + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(short *)((int)&local_3c8 + iVar20 * 2) =
                                                       (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  iVar20 = (int)local_3a;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,(int)local_3a + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(short *)((int)&local_3c8 + iVar20 * 2) =
                                                       (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  iVar20 = (int)local_3a;
                                                  psVar5 = (string *)
                                                           std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,(int)local_3a + 1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = atoi(pcVar6);
                                                  *(short *)((int)&local_3c8 + iVar20 * 2) =
                                                       (short)iVar7;
                                                  local_3a = local_3a + 1;
                                                  lVar26 = ARAD::uint32Time((short *)&local_3c8);
                                                  CUserCharacInfo::set_charac_createtime
                                                            ((CUserCharacInfo *)param_1,lVar26);
                                                  arad::SigSetCharacCreateTime::
                                                  SigSetCharacCreateTime(local_3d0);
                                                  uVar8 = CUserCharacInfo::getCurCharacCreateTime
                                                                    ((CUserCharacInfo *)param_1);
                                                  uVar12 = CUser::get_charac_no(param_1,-1);
                                                  arad::SigSetCharacCreateTime::set
                                                            (local_3d0,uVar12,uVar8);
                                                  pSVar18 = (Stream *)
                                                            StreamPool::Acquire(GlobalData::
                                                                                s_stream_pool,
                                                                                                                                                                
                                                  "PacketDispatcher_Impl_1.cpp",0xbc83);
                                                  CStreamGuard::CStreamGuard(local_3d8,pSVar18,true)
                                                  ;
                                                  uVar10 = CUser::GetUID(param_1);
                    /* try { // try from 08213022 to 0821306d has its CatchHandler @ 08213070 */
                                                  ARAD::DISPATCHER::make_internal_stream_jpn
                                                            (local_3d8,0x24,uVar10);
                                                  pCVar19 = (CStreamGuard *)
                                                            CStreamGuard::operator->(local_3d8);
                                                  CStreamGuard::put_binary(pCVar19,local_3d0,8);
                                                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,
                                                                   local_3d8);
                    /* try { // try from 08213094 to 0821343f has its CatchHandler @ 08213447 */
                                                  CStreamGuard::~CStreamGuard(local_3d8);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"aa");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"time");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_38 = atoi(pcVar6);
                                                  if ((0 < local_38) && (local_38 < 0x33)) {
                                                    advancealtar::Manager::gmTimeSpeed_ = local_38;
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"star");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_34 = atoi(pcVar6);
                                                  if ((-1 < local_34) && (local_34 < 1000)) {
                                                    advancealtar::CharacAdvanceAltarManager::
                                                    gmSetStar((CharacAdvanceAltarManager *)
                                                              (param_1 + 0x8df60),local_34);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"ticket");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_30 = atoi(pcVar6);
                                                  if ((-1 < local_30) && (local_30 < 100)) {
                                                    advancealtar::CharacAdvanceAltarManager::
                                                    gmSetTicket((CharacAdvanceAltarManager *)
                                                                (param_1 + 0x8df60),local_30);
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  bVar2 = std::operator==(psVar4,"reset");
                                                  if (bVar2) {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,2);
                                                  bVar2 = std::operator==(psVar4,"star");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,3);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_2c = atoi(pcVar6);
                                                  if ((-1 < local_2c) && (local_2c < 2)) {
                                                    advancealtar::CharacAdvanceAltarManager::
                                                    resetStar((CharacAdvanceAltarManager *)
                                                              (param_1 + 0x8df60),param_1,local_2c);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetRewardLast");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = StringToNumber(pcVar6);
                                                  local_28 = iVar7;
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  CLocalChina_DB_LastDay_BreakAway::makeRequest
                                                            (uVar8,iVar7,1);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetQuestLast");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  iVar7 = StringToNumber(pcVar6);
                                                  local_24 = iVar7;
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  CLocalChina_DB_LastDay_BreakAway::makeRequest
                                                            (uVar8,iVar7,0);
                                                  }
                                                  else {
                                                    psVar4 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,0);
                                                  bVar2 = std::operator==(psVar4,"SetBreak");
                                                  if (bVar2) {
                                                    psVar5 = (string *)
                                                             std::
                                                  vector<std::string,std::allocator<std::string>>::
                                                  operator[]((
                                                  vector<std::string,std::allocator<std::string>> *)
                                                  param_3,1);
                                                  pcVar6 = (char *)std::string::c_str(psVar5);
                                                  local_20 = StringToNumber(pcVar6);
                                                  uVar8 = CUser::get_acc_id(param_1);
                                                  break_away_prevent::CBreakAwayPreventSystem::
                                                  GM_UpdateUvList(GlobalData::s_BreakAwaySys,uVar8,
                                                                  local_20);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_08213440:
  unaff_EBX = 0;
LAB_0821345f:
                    /* try { // try from 08213468 to 0821346c has its CatchHandler @ 0821346f */
  PacketGuard::~PacketGuard(local_260);
  DisPatcher_DebugCommand::~DisPatcher_DebugCommand(local_254);
  return unaff_EBX;
}

```

