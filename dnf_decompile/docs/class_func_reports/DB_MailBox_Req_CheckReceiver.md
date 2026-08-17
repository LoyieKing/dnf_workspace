# DB_MailBox_Req_CheckReceiver

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c882 DB_MailBox_Req_CheckReceiver::dispatch  [0x0841c882-0x841cc69] ===
 841c882:	55                   	push   %ebp
 841c883:	89 e5                	mov    %esp,%ebp
 841c885:	57                   	push   %edi
 841c886:	56                   	push   %esi
 841c887:	53                   	push   %ebx
 841c888:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 841c88e:	8b 45 14             	mov    0x14(%ebp),%eax
 841c891:	89 04 24             	mov    %eax,(%esp)
 841c894:	e8 c1 4c 03 00       	call   845155a <_ZN6Stream12GetOutBufferI26SIG_MAILBOX_CHECK_RECEIVEREEPT_v>
 841c899:	89 45 d0             	mov    %eax,-0x30(%ebp)
 841c89c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 841c8a3:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 841c8aa:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 841c8b1:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 841c8b8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c8bd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c8c4:	00 
 841c8c5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841c8cc:	00 
 841c8cd:	89 04 24             	mov    %eax,(%esp)
 841c8d0:	e8 69 89 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c8d5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 841c8d8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c8dd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c8e4:	00 
 841c8e5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841c8ec:	00 
 841c8ed:	89 04 24             	mov    %eax,(%esp)
 841c8f0:	e8 49 89 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c8f5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 841c8f8:	c7 45 dc 70 bb c4 08 	movl   $0x8c4bb70,-0x24(%ebp)
 841c8ff:	8d 95 79 ff ff ff    	lea    -0x87(%ebp),%edx
 841c905:	bb 3b 00 00 00       	mov    $0x3b,%ebx
 841c90a:	b8 00 00 00 00       	mov    $0x0,%eax
 841c90f:	89 d1                	mov    %edx,%ecx
 841c911:	83 e1 01             	and    $0x1,%ecx
 841c914:	85 c9                	test   %ecx,%ecx
 841c916:	74 08                	je     841c920 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x9e>
 841c918:	88 02                	mov    %al,(%edx)
 841c91a:	83 c2 01             	add    $0x1,%edx
 841c91d:	83 eb 01             	sub    $0x1,%ebx
 841c920:	89 d1                	mov    %edx,%ecx
 841c922:	83 e1 02             	and    $0x2,%ecx
 841c925:	85 c9                	test   %ecx,%ecx
 841c927:	74 09                	je     841c932 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0xb0>
 841c929:	66 89 02             	mov    %ax,(%edx)
 841c92c:	83 c2 02             	add    $0x2,%edx
 841c92f:	83 eb 02             	sub    $0x2,%ebx
 841c932:	89 d9                	mov    %ebx,%ecx
 841c934:	c1 e9 02             	shr    $0x2,%ecx
 841c937:	89 d7                	mov    %edx,%edi
 841c939:	f3 ab                	rep stos %eax,%es:(%edi)
 841c93b:	89 fa                	mov    %edi,%edx
 841c93d:	89 d9                	mov    %ebx,%ecx
 841c93f:	83 e1 02             	and    $0x2,%ecx
 841c942:	85 c9                	test   %ecx,%ecx
 841c944:	74 06                	je     841c94c <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0xca>
 841c946:	66 89 02             	mov    %ax,(%edx)
 841c949:	83 c2 02             	add    $0x2,%edx
 841c94c:	89 d9                	mov    %ebx,%ecx
 841c94e:	83 e1 01             	and    $0x1,%ecx
 841c951:	85 c9                	test   %ecx,%ecx
 841c953:	74 05                	je     841c95a <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0xd8>
 841c955:	88 02                	mov    %al,(%edx)
 841c957:	83 c2 01             	add    $0x1,%edx
 841c95a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841c95d:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c961:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 841c967:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c96b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841c96e:	89 04 24             	mov    %eax,(%esp)
 841c971:	e8 34 7f fd ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 841c976:	8d 85 79 ff ff ff    	lea    -0x87(%ebp),%eax
 841c97c:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c980:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841c983:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c987:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841c98a:	89 04 24             	mov    %eax,(%esp)
 841c98d:	e8 2e 78 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841c992:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c999:	00 
 841c99a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841c99d:	89 04 24             	mov    %eax,(%esp)
 841c9a0:	e8 81 79 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841c9a5:	83 f0 01             	xor    $0x1,%eax
 841c9a8:	84 c0                	test   %al,%al
 841c9aa:	74 0a                	je     841c9b6 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x134>
 841c9ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 841c9b1:	e9 a7 02 00 00       	jmp    841cc5d <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x3db>
 841c9b6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 841c9bd:	e9 cc 00 00 00       	jmp    841ca8e <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x20c>
 841c9c2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841c9c5:	89 04 24             	mov    %eax,(%esp)
 841c9c8:	e8 ef 7a fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841c9cd:	83 f0 01             	xor    $0x1,%eax
 841c9d0:	84 c0                	test   %al,%al
 841c9d2:	74 0a                	je     841c9de <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x15c>
 841c9d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 841c9d9:	e9 7f 02 00 00       	jmp    841cc5d <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x3db>
 841c9de:	8d 45 cc             	lea    -0x34(%ebp),%eax
 841c9e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c9e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841c9ec:	00 
 841c9ed:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841c9f0:	89 04 24             	mov    %eax,(%esp)
 841c9f3:	e8 34 9f cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841c9f8:	83 f0 01             	xor    $0x1,%eax
 841c9fb:	84 c0                	test   %al,%al
 841c9fd:	74 0a                	je     841ca09 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x187>
 841c9ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ca04:	e9 54 02 00 00       	jmp    841cc5d <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x3db>
 841ca09:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841ca0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ca10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841ca17:	00 
 841ca18:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841ca1b:	89 04 24             	mov    %eax,(%esp)
 841ca1e:	e8 09 9f cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841ca23:	83 f0 01             	xor    $0x1,%eax
 841ca26:	84 c0                	test   %al,%al
 841ca28:	74 0a                	je     841ca34 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x1b2>
 841ca2a:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ca2f:	e9 29 02 00 00       	jmp    841cc5d <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x3db>
 841ca34:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 841ca37:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ca3b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841ca42:	00 
 841ca43:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841ca46:	89 04 24             	mov    %eax,(%esp)
 841ca49:	e8 de 9e cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841ca4e:	83 f0 01             	xor    $0x1,%eax
 841ca51:	84 c0                	test   %al,%al
 841ca53:	74 0a                	je     841ca5f <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x1dd>
 841ca55:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ca5a:	e9 fe 01 00 00       	jmp    841cc5d <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x3db>
 841ca5f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 841ca62:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ca66:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841ca6d:	00 
 841ca6e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841ca71:	89 04 24             	mov    %eax,(%esp)
 841ca74:	e8 79 58 cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841ca79:	83 f0 01             	xor    $0x1,%eax
 841ca7c:	84 c0                	test   %al,%al
 841ca7e:	74 0a                	je     841ca8a <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x208>
 841ca80:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ca85:	e9 d3 01 00 00       	jmp    841cc5d <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x3db>
 841ca8a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 841ca8e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841ca91:	89 04 24             	mov    %eax,(%esp)
 841ca94:	e8 d3 58 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841ca99:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 841ca9c:	0f 97 c0             	seta   %al
 841ca9f:	84 c0                	test   %al,%al
 841caa1:	0f 85 1b ff ff ff    	jne    841c9c2 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x140>
 841caa7:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 841caac:	c7 44 24 08 9a 50 00 	movl   $0x509a,0x8(%esp)
 841cab3:	00 
 841cab4:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841cabb:	08 
 841cabc:	89 04 24             	mov    %eax,(%esp)
 841cabf:	e8 9e 37 e7 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 841cac4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841cacb:	00 
 841cacc:	89 44 24 04          	mov    %eax,0x4(%esp)
 841cad0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841cad3:	89 04 24             	mov    %eax,(%esp)
 841cad6:	e8 4b c1 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841cadb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841cade:	89 04 24             	mov    %eax,(%esp)
 841cae1:	e8 60 c1 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841cae6:	c7 44 24 04 7e 00 00 	movl   $0x7e,0x4(%esp)
 841caed:	00 
 841caee:	89 04 24             	mov    %eax,(%esp)
 841caf1:	e8 60 c1 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841caf6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841caf9:	89 04 24             	mov    %eax,(%esp)
 841cafc:	e8 45 c1 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841cb01:	8b 55 10             	mov    0x10(%ebp),%edx
 841cb04:	89 54 24 04          	mov    %edx,0x4(%esp)
 841cb08:	89 04 24             	mov    %eax,(%esp)
 841cb0b:	e8 46 c1 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841cb10:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841cb13:	89 04 24             	mov    %eax,(%esp)
 841cb16:	e8 33 c1 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 841cb1b:	89 04 24             	mov    %eax,(%esp)
 841cb1e:	e8 8b 4a 03 00       	call   84515ae <_ZN12CStreamGuard11GetInBufferI26SIG_MAILBOX_CHECK_RECEIVEREEPT_v>
 841cb23:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841cb26:	8b 45 cc             	mov    -0x34(%ebp),%eax
 841cb29:	89 c2                	mov    %eax,%edx
 841cb2b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841cb2e:	89 50 1d             	mov    %edx,0x1d(%eax)
 841cb31:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841cb34:	89 c2                	mov    %eax,%edx
 841cb36:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841cb39:	89 50 21             	mov    %edx,0x21(%eax)
 841cb3c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841cb3f:	89 c2                	mov    %eax,%edx
 841cb41:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841cb44:	89 50 25             	mov    %edx,0x25(%eax)
 841cb47:	8b 55 c0             	mov    -0x40(%ebp),%edx
 841cb4a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841cb4d:	89 50 29             	mov    %edx,0x29(%eax)
 841cb50:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841cb53:	8d 50 31             	lea    0x31(%eax),%edx
 841cb56:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841cb59:	83 c0 31             	add    $0x31,%eax
 841cb5c:	c7 44 24 08 88 3f 00 	movl   $0x3f88,0x8(%esp)
 841cb63:	00 
 841cb64:	89 54 24 04          	mov    %edx,0x4(%esp)
 841cb68:	89 04 24             	mov    %eax,(%esp)
 841cb6b:	e8 30 0d c6 ff       	call   807d8a0 <memcpy@plt>
 841cb70:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841cb73:	8b 58 2d             	mov    0x2d(%eax),%ebx
 841cb76:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841cb79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841cb80:	00 
 841cb81:	89 04 24             	mov    %eax,(%esp)
 841cb84:	e8 c2 c4 ce ff       	call   810904b <_Z14NumberToStringji>
 841cb89:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 841cb8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 841cb91:	c7 44 24 04 c0 bb c4 	movl   $0x8c4bbc0,0x4(%esp)
 841cb98:	08 
 841cb99:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841cb9c:	89 04 24             	mov    %eax,(%esp)
 841cb9f:	e8 1c 76 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841cba4:	84 c0                	test   %al,%al
 841cba6:	74 6c                	je     841cc14 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x392>
 841cba8:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 841cbaf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841cbb2:	c7 80 b9 3f 00 00 00 	movl   $0x0,0x3fb9(%eax)
 841cbb9:	00 00 00 
 841cbbc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841cbc3:	00 
 841cbc4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841cbc7:	89 04 24             	mov    %eax,(%esp)
 841cbca:	e8 57 77 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841cbcf:	84 c0                	test   %al,%al
 841cbd1:	74 41                	je     841cc14 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x392>
 841cbd3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841cbd6:	89 04 24             	mov    %eax,(%esp)
 841cbd9:	e8 de 78 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841cbde:	84 c0                	test   %al,%al
 841cbe0:	74 32                	je     841cc14 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x392>
 841cbe2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 841cbe5:	89 44 24 08          	mov    %eax,0x8(%esp)
 841cbe9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841cbf0:	00 
 841cbf1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841cbf4:	89 04 24             	mov    %eax,(%esp)
 841cbf7:	e8 30 9d cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841cbfc:	84 c0                	test   %al,%al
 841cbfe:	74 14                	je     841cc14 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x392>
 841cc00:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 841cc03:	85 c0                	test   %eax,%eax
 841cc05:	7e 0d                	jle    841cc14 <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x392>
 841cc07:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841cc0a:	c7 80 b9 3f 00 00 4d 	movl   $0x4d,0x3fb9(%eax)
 841cc11:	00 00 00 
 841cc14:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841cc19:	8d 55 b8             	lea    -0x48(%ebp),%edx
 841cc1c:	89 54 24 08          	mov    %edx,0x8(%esp)
 841cc20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841cc27:	00 
 841cc28:	89 04 24             	mov    %eax,(%esp)
 841cc2b:	e8 ae 43 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841cc30:	bb 01 00 00 00       	mov    $0x1,%ebx
 841cc35:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841cc38:	89 04 24             	mov    %eax,(%esp)
 841cc3b:	e8 92 fc 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841cc40:	eb 1b                	jmp    841cc5d <_ZN28DB_MailBox_Req_CheckReceiver8dispatchEiiP6Stream+0x3db>
 841cc42:	89 d3                	mov    %edx,%ebx
 841cc44:	89 c6                	mov    %eax,%esi
 841cc46:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841cc49:	89 04 24             	mov    %eax,(%esp)
 841cc4c:	e8 81 fc 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841cc51:	89 f0                	mov    %esi,%eax
 841cc53:	89 da                	mov    %ebx,%edx
 841cc55:	89 04 24             	mov    %eax,(%esp)
 841cc58:	e8 f3 6a 6c 00       	call   8ae3750 <_Unwind_Resume>
 841cc5d:	89 d8                	mov    %ebx,%eax
 841cc5f:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 841cc65:	5b                   	pop    %ebx
 841cc66:	5e                   	pop    %esi
 841cc67:	5f                   	pop    %edi
 841cc68:	5d                   	pop    %ebp
 841cc69:	c3                   	ret

```

```c
// DB_MailBox_Req_CheckReceiver::dispatch @ 0x841c882

/* DB_MailBox_Req_CheckReceiver::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_CheckReceiver::dispatch
          (DB_MailBox_Req_CheckReceiver *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  byte bVar10;
  char local_8b;
  char local_8a [58];
  int local_50;
  CStreamGuard local_4c [8];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  SIG_MAILBOX_CHECK_RECEIVER *local_34;
  MySQL *local_30;
  MySQL *local_2c;
  char *local_28;
  SIG_MAILBOX_CHECK_RECEIVER *local_24;
  uint local_20;
  
  bVar10 = 0;
  local_34 = Stream::GetOutBuffer<SIG_MAILBOX_CHECK_RECEIVER>(param_3);
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_28 = "seLect charac_no,lev,delete_flag,m_id from charac_info where charac_name=\'%s\'";
  pcVar6 = &local_8b;
  uVar7 = 0x3b;
  bVar9 = ((uint)pcVar6 & 1) != 0;
  if (bVar9) {
    local_8b = '\0';
    pcVar6 = local_8a;
    uVar7 = 0x3a;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar10 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar9) {
    *pcVar6 = '\0';
  }
  MySQL::escape_string(local_30,&local_8b,(char *)local_34);
  MySQL::set_query(local_30,local_28,&local_8b);
  cVar1 = MySQL::exec(local_30,true);
  if (cVar1 == '\x01') {
    local_20 = 0;
    while (uVar7 = MySQL::get_n_rows(local_30), local_20 < uVar7) {
      cVar1 = MySQL::fetch(local_30);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_30,0,&local_38);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_30,1,&local_3c);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_30,2,&local_40);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_30,3,&local_44);
      if (cVar1 != '\x01') {
        return 0;
      }
      local_20 = local_20 + 1;
    }
    pSVar2 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x509a);
    CStreamGuard::CStreamGuard(local_4c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 0841caf1 to 0841cc2f has its CatchHandler @ 0841cc42 */
    CStreamGuard::operator<<(pCVar3,0x7e);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
    local_24 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar3);
    *(int *)(local_24 + 0x1d) = local_38;
    *(int *)(local_24 + 0x21) = local_3c;
    *(int *)(local_24 + 0x25) = local_40;
    *(uint *)(local_24 + 0x29) = local_44;
    memcpy(local_24 + 0x31,local_34 + 0x31,0x3f88);
    uVar8 = *(undefined4 *)(local_34 + 0x2d);
    uVar4 = NumberToString(local_44,0);
    cVar1 = MySQL::set_query(local_2c,
                             "seLect count(*) from charac_black_list where m_id = %s and charac_no = %d"
                             ,uVar4,uVar8);
    if (cVar1 != '\0') {
      local_50 = 0;
      *(undefined4 *)(local_24 + 0x3fb9) = 0;
      cVar1 = MySQL::exec(local_2c,true);
      if ((((cVar1 != '\0') && (cVar1 = MySQL::fetch(local_2c), cVar1 != '\0')) &&
          (cVar1 = MySQL::get_int(local_2c,0,&local_50), cVar1 != '\0')) && (0 < local_50)) {
        *(undefined4 *)(local_24 + 0x3fb9) = 0x4d;
      }
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
    uVar8 = 1;
    CStreamGuard::~CStreamGuard(local_4c);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

```

