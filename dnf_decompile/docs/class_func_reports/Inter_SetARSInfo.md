# Inter_SetARSInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e09ce Inter_SetARSInfo::dispatch_sig  [0x084e09ce-0x84e0dc5] ===
 84e09ce:	55                   	push   %ebp
 84e09cf:	89 e5                	mov    %esp,%ebp
 84e09d1:	57                   	push   %edi
 84e09d2:	56                   	push   %esi
 84e09d3:	53                   	push   %ebx
 84e09d4:	81 ec ac 00 00 00    	sub    $0xac,%esp
 84e09da:	8b 45 10             	mov    0x10(%ebp),%eax
 84e09dd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84e09e0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e09e3:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84e09e7:	84 c0                	test   %al,%al
 84e09e9:	75 43                	jne    84e0a2e <_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci+0x60>
 84e09eb:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84e09f0:	89 04 24             	mov    %eax,(%esp)
 84e09f3:	e8 a4 50 dc ff       	call   82a5a9c <_ZN8WongWork26CAutoPunishRuleHackTypeMgr5resetEv>
 84e09f8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e09ff:	00 
 84e0a00:	c7 44 24 08 5e 4f 00 	movl   $0x4f5e,0x8(%esp)
 84e0a07:	00 
 84e0a08:	c7 44 24 04 40 ba c8 	movl   $0x8c8ba40,0x4(%esp)
 84e0a0f:	08 
 84e0a10:	8d 45 90             	lea    -0x70(%ebp),%eax
 84e0a13:	89 04 24             	mov    %eax,(%esp)
 84e0a16:	e8 fd ec 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0a1b:	c7 44 24 04 1f 9c c8 	movl   $0x8c89c1f,0x4(%esp)
 84e0a22:	08 
 84e0a23:	8d 45 90             	lea    -0x70(%ebp),%eax
 84e0a26:	89 04 24             	mov    %eax,(%esp)
 84e0a29:	e8 5a ed 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0a2e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0a31:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84e0a35:	0f be f0             	movsbl %al,%esi
 84e0a38:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0a3b:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e0a3e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0a45:	00 
 84e0a46:	c7 44 24 08 64 4f 00 	movl   $0x4f64,0x8(%esp)
 84e0a4d:	00 
 84e0a4e:	c7 44 24 04 40 ba c8 	movl   $0x8c8ba40,0x4(%esp)
 84e0a55:	08 
 84e0a56:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84e0a59:	89 04 24             	mov    %eax,(%esp)
 84e0a5c:	e8 b7 ec 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0a61:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e0a65:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e0a69:	c7 44 24 04 30 9c c8 	movl   $0x8c89c30,0x4(%esp)
 84e0a70:	08 
 84e0a71:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84e0a74:	89 04 24             	mov    %eax,(%esp)
 84e0a77:	e8 0c ed 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0a7c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0a7f:	8b 40 0a             	mov    0xa(%eax),%eax
 84e0a82:	83 f8 64             	cmp    $0x64,%eax
 84e0a85:	7e 40                	jle    84e0ac7 <_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci+0xf9>
 84e0a87:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0a8e:	00 
 84e0a8f:	c7 44 24 08 6b 4f 00 	movl   $0x4f6b,0x8(%esp)
 84e0a96:	00 
 84e0a97:	c7 44 24 04 40 ba c8 	movl   $0x8c8ba40,0x4(%esp)
 84e0a9e:	08 
 84e0a9f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e0aa2:	89 04 24             	mov    %eax,(%esp)
 84e0aa5:	e8 6e ec 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0aaa:	c7 44 24 04 50 9c c8 	movl   $0x8c89c50,0x4(%esp)
 84e0ab1:	08 
 84e0ab2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84e0ab5:	89 04 24             	mov    %eax,(%esp)
 84e0ab8:	e8 cb ec 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0abd:	b8 00 00 00 00       	mov    $0x0,%eax
 84e0ac2:	e9 f3 02 00 00       	jmp    84e0dba <_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci+0x3ec>
 84e0ac7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84e0ace:	e9 ce 02 00 00       	jmp    84e0da1 <_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci+0x3d3>
 84e0ad3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0ad6:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0ad9:	89 d0                	mov    %edx,%eax
 84e0adb:	01 c0                	add    %eax,%eax
 84e0add:	01 d0                	add    %edx,%eax
 84e0adf:	c1 e0 02             	shl    $0x2,%eax
 84e0ae2:	0f b7 44 08 0f       	movzwl 0xf(%eax,%ecx,1),%eax
 84e0ae7:	66 85 c0             	test   %ax,%ax
 84e0aea:	0f 85 bf 00 00 00    	jne    84e0baf <_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci+0x1e1>
 84e0af0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0af3:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0af6:	89 d0                	mov    %edx,%eax
 84e0af8:	01 c0                	add    %eax,%eax
 84e0afa:	01 d0                	add    %edx,%eax
 84e0afc:	c1 e0 02             	shl    $0x2,%eax
 84e0aff:	0f b7 44 08 19       	movzwl 0x19(%eax,%ecx,1),%eax
 84e0b04:	0f b7 c0             	movzwl %ax,%eax
 84e0b07:	89 c2                	mov    %eax,%edx
 84e0b09:	b9 00 00 00 00       	mov    $0x0,%ecx
 84e0b0e:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84e0b11:	8b 75 e0             	mov    -0x20(%ebp),%esi
 84e0b14:	89 d8                	mov    %ebx,%eax
 84e0b16:	01 c0                	add    %eax,%eax
 84e0b18:	01 d8                	add    %ebx,%eax
 84e0b1a:	c1 e0 02             	shl    $0x2,%eax
 84e0b1d:	0f b7 44 30 11       	movzwl 0x11(%eax,%esi,1),%eax
 84e0b22:	0f b7 d8             	movzwl %ax,%ebx
 84e0b25:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84e0b2a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e0b2e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e0b32:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e0b36:	89 04 24             	mov    %eax,(%esp)
 84e0b39:	e8 96 ae 00 00       	call   84eb9d4 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr13setTotalTradeEjy>
 84e0b3e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0b41:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0b44:	89 d0                	mov    %edx,%eax
 84e0b46:	01 c0                	add    %eax,%eax
 84e0b48:	01 d0                	add    %edx,%eax
 84e0b4a:	c1 e0 02             	shl    $0x2,%eax
 84e0b4d:	0f b7 44 08 11       	movzwl 0x11(%eax,%ecx,1),%eax
 84e0b52:	0f b7 f0             	movzwl %ax,%esi
 84e0b55:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0b58:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0b5b:	89 d0                	mov    %edx,%eax
 84e0b5d:	01 c0                	add    %eax,%eax
 84e0b5f:	01 d0                	add    %edx,%eax
 84e0b61:	c1 e0 02             	shl    $0x2,%eax
 84e0b64:	0f b7 44 08 19       	movzwl 0x19(%eax,%ecx,1),%eax
 84e0b69:	0f b7 d8             	movzwl %ax,%ebx
 84e0b6c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0b73:	00 
 84e0b74:	c7 44 24 08 82 4f 00 	movl   $0x4f82,0x8(%esp)
 84e0b7b:	00 
 84e0b7c:	c7 44 24 04 40 ba c8 	movl   $0x8c8ba40,0x4(%esp)
 84e0b83:	08 
 84e0b84:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e0b87:	89 04 24             	mov    %eax,(%esp)
 84e0b8a:	e8 89 eb 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0b8f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e0b93:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e0b97:	c7 44 24 04 70 9c c8 	movl   $0x8c89c70,0x4(%esp)
 84e0b9e:	08 
 84e0b9f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84e0ba2:	89 04 24             	mov    %eax,(%esp)
 84e0ba5:	e8 de eb 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0baa:	e9 ee 01 00 00       	jmp    84e0d9d <_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci+0x3cf>
 84e0baf:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0bb2:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0bb5:	89 d0                	mov    %edx,%eax
 84e0bb7:	01 c0                	add    %eax,%eax
 84e0bb9:	01 d0                	add    %edx,%eax
 84e0bbb:	c1 e0 02             	shl    $0x2,%eax
 84e0bbe:	0f b7 44 08 19       	movzwl 0x19(%eax,%ecx,1),%eax
 84e0bc3:	0f b7 f8             	movzwl %ax,%edi
 84e0bc6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0bc9:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0bcc:	89 d0                	mov    %edx,%eax
 84e0bce:	01 c0                	add    %eax,%eax
 84e0bd0:	01 d0                	add    %edx,%eax
 84e0bd2:	c1 e0 02             	shl    $0x2,%eax
 84e0bd5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e0bd8:	83 c0 18             	add    $0x18,%eax
 84e0bdb:	0f b6 00             	movzbl (%eax),%eax
 84e0bde:	0f b6 c0             	movzbl %al,%eax
 84e0be1:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 84e0be7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0bea:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0bed:	89 d0                	mov    %edx,%eax
 84e0bef:	01 c0                	add    %eax,%eax
 84e0bf1:	01 d0                	add    %edx,%eax
 84e0bf3:	c1 e0 02             	shl    $0x2,%eax
 84e0bf6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e0bf9:	83 c0 17             	add    $0x17,%eax
 84e0bfc:	0f b6 00             	movzbl (%eax),%eax
 84e0bff:	0f b6 c0             	movzbl %al,%eax
 84e0c02:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 84e0c08:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0c0b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0c0e:	89 d0                	mov    %edx,%eax
 84e0c10:	01 c0                	add    %eax,%eax
 84e0c12:	01 d0                	add    %edx,%eax
 84e0c14:	c1 e0 02             	shl    $0x2,%eax
 84e0c17:	0f b7 44 08 15       	movzwl 0x15(%eax,%ecx,1),%eax
 84e0c1c:	0f b7 c0             	movzwl %ax,%eax
 84e0c1f:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 84e0c25:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0c28:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0c2b:	89 d0                	mov    %edx,%eax
 84e0c2d:	01 c0                	add    %eax,%eax
 84e0c2f:	01 d0                	add    %edx,%eax
 84e0c31:	c1 e0 02             	shl    $0x2,%eax
 84e0c34:	0f b7 44 08 13       	movzwl 0x13(%eax,%ecx,1),%eax
 84e0c39:	0f b7 f0             	movzwl %ax,%esi
 84e0c3c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0c3f:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0c42:	89 d0                	mov    %edx,%eax
 84e0c44:	01 c0                	add    %eax,%eax
 84e0c46:	01 d0                	add    %edx,%eax
 84e0c48:	c1 e0 02             	shl    $0x2,%eax
 84e0c4b:	0f b7 44 08 11       	movzwl 0x11(%eax,%ecx,1),%eax
 84e0c50:	0f b7 d8             	movzwl %ax,%ebx
 84e0c53:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0c56:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0c59:	89 d0                	mov    %edx,%eax
 84e0c5b:	01 c0                	add    %eax,%eax
 84e0c5d:	01 d0                	add    %edx,%eax
 84e0c5f:	c1 e0 02             	shl    $0x2,%eax
 84e0c62:	0f b7 44 08 0f       	movzwl 0xf(%eax,%ecx,1),%eax
 84e0c67:	0f b7 d0             	movzwl %ax,%edx
 84e0c6a:	a1 d4 f7 41 09       	mov    0x941f7d4,%eax
 84e0c6f:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84e0c73:	8b 8d 70 ff ff ff    	mov    -0x90(%ebp),%ecx
 84e0c79:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84e0c7d:	8b 8d 74 ff ff ff    	mov    -0x8c(%ebp),%ecx
 84e0c83:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84e0c87:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 84e0c8d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84e0c91:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e0c95:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e0c99:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e0c9d:	89 04 24             	mov    %eax,(%esp)
 84e0ca0:	e8 af ab 00 00       	call   84eb854 <_ZN8WongWork26CAutoPunishRuleHackTypeMgr10setHackCntENS_13ENUM_HACKTYPEEjS1_jjjj>
 84e0ca5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0ca8:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0cab:	89 d0                	mov    %edx,%eax
 84e0cad:	01 c0                	add    %eax,%eax
 84e0caf:	01 d0                	add    %edx,%eax
 84e0cb1:	c1 e0 02             	shl    $0x2,%eax
 84e0cb4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e0cb7:	83 c0 18             	add    $0x18,%eax
 84e0cba:	0f b6 00             	movzbl (%eax),%eax
 84e0cbd:	0f b6 c0             	movzbl %al,%eax
 84e0cc0:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 84e0cc6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0cc9:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0ccc:	89 d0                	mov    %edx,%eax
 84e0cce:	01 c0                	add    %eax,%eax
 84e0cd0:	01 d0                	add    %edx,%eax
 84e0cd2:	c1 e0 02             	shl    $0x2,%eax
 84e0cd5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e0cd8:	83 c0 17             	add    $0x17,%eax
 84e0cdb:	0f b6 00             	movzbl (%eax),%eax
 84e0cde:	0f b6 c0             	movzbl %al,%eax
 84e0ce1:	89 45 80             	mov    %eax,-0x80(%ebp)
 84e0ce4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0ce7:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0cea:	89 d0                	mov    %edx,%eax
 84e0cec:	01 c0                	add    %eax,%eax
 84e0cee:	01 d0                	add    %edx,%eax
 84e0cf0:	c1 e0 02             	shl    $0x2,%eax
 84e0cf3:	0f b7 44 08 15       	movzwl 0x15(%eax,%ecx,1),%eax
 84e0cf8:	0f b7 c0             	movzwl %ax,%eax
 84e0cfb:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84e0cfe:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0d01:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0d04:	89 d0                	mov    %edx,%eax
 84e0d06:	01 c0                	add    %eax,%eax
 84e0d08:	01 d0                	add    %edx,%eax
 84e0d0a:	c1 e0 02             	shl    $0x2,%eax
 84e0d0d:	0f b7 44 08 13       	movzwl 0x13(%eax,%ecx,1),%eax
 84e0d12:	0f b7 f8             	movzwl %ax,%edi
 84e0d15:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0d18:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0d1b:	89 d0                	mov    %edx,%eax
 84e0d1d:	01 c0                	add    %eax,%eax
 84e0d1f:	01 d0                	add    %edx,%eax
 84e0d21:	c1 e0 02             	shl    $0x2,%eax
 84e0d24:	0f b7 44 08 11       	movzwl 0x11(%eax,%ecx,1),%eax
 84e0d29:	0f b7 f0             	movzwl %ax,%esi
 84e0d2c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e0d2f:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84e0d32:	89 d0                	mov    %edx,%eax
 84e0d34:	01 c0                	add    %eax,%eax
 84e0d36:	01 d0                	add    %edx,%eax
 84e0d38:	c1 e0 02             	shl    $0x2,%eax
 84e0d3b:	0f b7 44 08 0f       	movzwl 0xf(%eax,%ecx,1),%eax
 84e0d40:	0f b7 d8             	movzwl %ax,%ebx
 84e0d43:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0d4a:	00 
 84e0d4b:	c7 44 24 08 8e 4f 00 	movl   $0x4f8e,0x8(%esp)
 84e0d52:	00 
 84e0d53:	c7 44 24 04 40 ba c8 	movl   $0x8c8ba40,0x4(%esp)
 84e0d5a:	08 
 84e0d5b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e0d5e:	89 04 24             	mov    %eax,(%esp)
 84e0d61:	e8 b2 e9 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0d66:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 84e0d6c:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84e0d70:	8b 4d 80             	mov    -0x80(%ebp),%ecx
 84e0d73:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84e0d77:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84e0d7a:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e0d7e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84e0d82:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e0d86:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e0d8a:	c7 44 24 04 9c 9c c8 	movl   $0x8c89c9c,0x4(%esp)
 84e0d91:	08 
 84e0d92:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e0d95:	89 04 24             	mov    %eax,(%esp)
 84e0d98:	e8 eb e9 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0d9d:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84e0da1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84e0da4:	8b 40 0a             	mov    0xa(%eax),%eax
 84e0da7:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84e0daa:	0f 9f c0             	setg   %al
 84e0dad:	84 c0                	test   %al,%al
 84e0daf:	0f 85 1e fd ff ff    	jne    84e0ad3 <_ZN16Inter_SetARSInfo12dispatch_sigEP5CUserPci+0x105>
 84e0db5:	b8 00 00 00 00       	mov    $0x0,%eax
 84e0dba:	81 c4 ac 00 00 00    	add    $0xac,%esp
 84e0dc0:	5b                   	pop    %ebx
 84e0dc1:	5e                   	pop    %esi
 84e0dc2:	5f                   	pop    %edi
 84e0dc3:	5d                   	pop    %ebp
 84e0dc4:	c3                   	ret
 84e0dc5:	90                   	nop

```

```c
// Inter_SetARSInfo::dispatch_sig @ 0x84e09ce

/* Inter_SetARSInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SetARSInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  int local_20;
  
  local_24 = param_3;
  if (*(char *)(param_3 + 0xe) == '\0') {
    WongWork::CAutoPunishRuleHackTypeMgr::reset(GlobalData::g_autoPunishRuleHackTypeMgr);
    cMyTrace::cMyTrace(local_74,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)",
                       0x4f5e,0);
    cMyTrace::operator()(local_74,"[ARS_INFO] Reset");
  }
  cVar1 = *(char *)(local_24 + 0xe);
  uVar8 = *(undefined4 *)(local_24 + 10);
  cMyTrace::cMyTrace(local_64,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)",
                     0x4f64,0);
  cMyTrace::operator()(local_64,"[ARS_INFO] Cnt : %d, State : %d",uVar8,(int)cVar1);
  if (*(int *)(local_24 + 10) < 0x65) {
    for (local_20 = 0; local_20 < *(int *)(local_24 + 10); local_20 = local_20 + 1) {
      if (*(short *)(local_20 * 0xc + 0xf + local_24) == 0) {
        WongWork::CAutoPunishRuleHackTypeMgr::setTotalTrade
                  ((uint)GlobalData::g_autoPunishRuleHackTypeMgr,
                   (ulonglong)
                   CONCAT24(*(undefined2 *)(local_20 * 0xc + 0x19 + local_24),
                            (uint)*(ushort *)(local_20 * 0xc + 0x11 + local_24)));
        uVar4 = *(ushort *)(local_20 * 0xc + 0x11 + local_24);
        uVar5 = *(ushort *)(local_20 * 0xc + 0x19 + local_24);
        cMyTrace::cMyTrace(local_44,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)"
                           ,0x4f82,0);
        cMyTrace::operator()
                  (local_44,"[ARS_INFO] TotalGold: %llu, TotalCount: %d",(uint)uVar5,(uint)uVar4);
      }
      else {
        WongWork::CAutoPunishRuleHackTypeMgr::setHackCnt
                  (GlobalData::g_autoPunishRuleHackTypeMgr,
                   *(undefined2 *)(local_20 * 0xc + 0xf + local_24),
                   *(undefined2 *)(local_20 * 0xc + 0x11 + local_24),
                   *(undefined2 *)(local_20 * 0xc + 0x13 + local_24),
                   *(undefined2 *)(local_20 * 0xc + 0x15 + local_24),
                   *(undefined1 *)(local_24 + local_20 * 0xc + 0x17),
                   *(undefined1 *)(local_24 + local_20 * 0xc + 0x18),
                   *(undefined2 *)(local_20 * 0xc + 0x19 + local_24));
        bVar2 = *(byte *)(local_24 + local_20 * 0xc + 0x18);
        bVar3 = *(byte *)(local_24 + local_20 * 0xc + 0x17);
        uVar4 = *(ushort *)(local_20 * 0xc + 0x15 + local_24);
        uVar5 = *(ushort *)(local_20 * 0xc + 0x13 + local_24);
        uVar6 = *(ushort *)(local_20 * 0xc + 0x11 + local_24);
        uVar7 = *(ushort *)(local_20 * 0xc + 0xf + local_24);
        cMyTrace::cMyTrace(local_34,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)"
                           ,0x4f8e,0);
        cMyTrace::operator()
                  (local_34,
                   "[ARS_INFO] MainType : %d (%d), SubType : %d(%d), ApplyFlag %d, IpCnt : %d",
                   (uint)uVar7,(uint)uVar6,(uint)uVar5,(uint)uVar4,(uint)bVar3,(uint)bVar2);
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_54,"virtual int Inter_SetARSInfo::dispatch_sig(CUser*, char*, int)",
                       0x4f6b,0);
    cMyTrace::operator()(local_54,"[ARS_INFO] Cnt OverFlag(100)");
  }
  return 0;
}

```

