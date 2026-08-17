# DB_BlackIPMonitor

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08432ad2 DB_BlackIPMonitor::dispatch  [0x08432ad2-0x8432e7f] ===
 8432ad2:	55                   	push   %ebp
 8432ad3:	89 e5                	mov    %esp,%ebp
 8432ad5:	56                   	push   %esi
 8432ad6:	53                   	push   %ebx
 8432ad7:	81 ec c0 0c 00 00    	sub    $0xcc0,%esp
 8432add:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8432ae2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8432ae9:	00 
 8432aea:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8432af1:	00 
 8432af2:	89 04 24             	mov    %eax,(%esp)
 8432af5:	e8 44 27 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8432afa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8432afd:	c7 44 24 04 0c 26 c5 	movl   $0x8c5260c,0x4(%esp)
 8432b04:	08 
 8432b05:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432b08:	89 04 24             	mov    %eax,(%esp)
 8432b0b:	e8 b0 16 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8432b10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432b17:	00 
 8432b18:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432b1b:	89 04 24             	mov    %eax,(%esp)
 8432b1e:	e8 03 18 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8432b23:	83 f0 01             	xor    $0x1,%eax
 8432b26:	84 c0                	test   %al,%al
 8432b28:	74 0a                	je     8432b34 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x62>
 8432b2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8432b2f:	e9 41 03 00 00       	jmp    8432e75 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x3a3>
 8432b34:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432b37:	89 04 24             	mov    %eax,(%esp)
 8432b3a:	e8 2d f8 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8432b3f:	89 c3                	mov    %eax,%ebx
 8432b41:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8432b48:	00 
 8432b49:	c7 44 24 08 03 7a 00 	movl   $0x7a03,0x8(%esp)
 8432b50:	00 
 8432b51:	c7 44 24 04 20 c1 c5 	movl   $0x8c5c120,0x4(%esp)
 8432b58:	08 
 8432b59:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8432b5c:	89 04 24             	mov    %eax,(%esp)
 8432b5f:	e8 b4 cb 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8432b64:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8432b68:	c7 44 24 04 8c 26 c5 	movl   $0x8c5268c,0x4(%esp)
 8432b6f:	08 
 8432b70:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8432b73:	89 04 24             	mov    %eax,(%esp)
 8432b76:	e8 0d cc 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8432b7b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8432b82:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8432b89:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8432b8d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8432b94:	e9 be 02 00 00       	jmp    8432e57 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x385>
 8432b99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432b9c:	89 04 24             	mov    %eax,(%esp)
 8432b9f:	e8 18 19 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8432ba4:	83 f0 01             	xor    $0x1,%eax
 8432ba7:	84 c0                	test   %al,%al
 8432ba9:	74 0a                	je     8432bb5 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0xe3>
 8432bab:	b8 00 00 00 00       	mov    $0x0,%eax
 8432bb0:	e9 c0 02 00 00       	jmp    8432e75 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x3a3>
 8432bb5:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8432bb9:	75 1e                	jne    8432bd9 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x107>
 8432bbb:	c7 44 24 08 80 0c 00 	movl   $0xc80,0x8(%esp)
 8432bc2:	00 
 8432bc3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8432bca:	00 
 8432bcb:	8d 85 4c f3 ff ff    	lea    -0xcb4(%ebp),%eax
 8432bd1:	89 04 24             	mov    %eax,(%esp)
 8432bd4:	e8 e7 b0 c4 ff       	call   807dcc0 <memset@plt>
 8432bd9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8432bdc:	8d 85 4c f3 ff ff    	lea    -0xcb4(%ebp),%eax
 8432be2:	c1 e2 05             	shl    $0x5,%edx
 8432be5:	01 d0                	add    %edx,%eax
 8432be7:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 8432bee:	00 
 8432bef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432bf3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8432bfa:	00 
 8432bfb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432bfe:	89 04 24             	mov    %eax,(%esp)
 8432c01:	e8 e4 a1 cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8432c06:	83 f0 01             	xor    $0x1,%eax
 8432c09:	84 c0                	test   %al,%al
 8432c0b:	74 0a                	je     8432c17 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x145>
 8432c0d:	b8 00 00 00 00       	mov    $0x0,%eax
 8432c12:	e9 5e 02 00 00       	jmp    8432e75 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x3a3>
 8432c17:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8432c1a:	8d 85 4c f3 ff ff    	lea    -0xcb4(%ebp),%eax
 8432c20:	01 d2                	add    %edx,%edx
 8432c22:	83 c2 01             	add    $0x1,%edx
 8432c25:	c1 e2 04             	shl    $0x4,%edx
 8432c28:	01 d0                	add    %edx,%eax
 8432c2a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432c2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432c35:	00 
 8432c36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432c39:	89 04 24             	mov    %eax,(%esp)
 8432c3c:	e8 eb 3c ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8432c41:	83 f0 01             	xor    $0x1,%eax
 8432c44:	84 c0                	test   %al,%al
 8432c46:	74 0a                	je     8432c52 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x180>
 8432c48:	b8 00 00 00 00       	mov    $0x0,%eax
 8432c4d:	e9 23 02 00 00       	jmp    8432e75 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x3a3>
 8432c52:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8432c55:	8d 85 4c f3 ff ff    	lea    -0xcb4(%ebp),%eax
 8432c5b:	01 d2                	add    %edx,%edx
 8432c5d:	83 c2 01             	add    $0x1,%edx
 8432c60:	c1 e2 04             	shl    $0x4,%edx
 8432c63:	01 d0                	add    %edx,%eax
 8432c65:	83 c0 04             	add    $0x4,%eax
 8432c68:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432c6c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8432c73:	00 
 8432c74:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432c77:	89 04 24             	mov    %eax,(%esp)
 8432c7a:	e8 73 f6 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8432c7f:	83 f0 01             	xor    $0x1,%eax
 8432c82:	84 c0                	test   %al,%al
 8432c84:	74 0a                	je     8432c90 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x1be>
 8432c86:	b8 00 00 00 00       	mov    $0x0,%eax
 8432c8b:	e9 e5 01 00 00       	jmp    8432e75 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x3a3>
 8432c90:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8432c93:	8d 85 4c f3 ff ff    	lea    -0xcb4(%ebp),%eax
 8432c99:	01 d2                	add    %edx,%edx
 8432c9b:	83 c2 01             	add    $0x1,%edx
 8432c9e:	c1 e2 04             	shl    $0x4,%edx
 8432ca1:	01 d0                	add    %edx,%eax
 8432ca3:	83 c0 08             	add    $0x8,%eax
 8432ca6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432caa:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8432cb1:	00 
 8432cb2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432cb5:	89 04 24             	mov    %eax,(%esp)
 8432cb8:	e8 35 f6 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8432cbd:	83 f0 01             	xor    $0x1,%eax
 8432cc0:	84 c0                	test   %al,%al
 8432cc2:	74 0a                	je     8432cce <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x1fc>
 8432cc4:	b8 00 00 00 00       	mov    $0x0,%eax
 8432cc9:	e9 a7 01 00 00       	jmp    8432e75 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x3a3>
 8432cce:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8432cd1:	8d 85 4c f3 ff ff    	lea    -0xcb4(%ebp),%eax
 8432cd7:	01 d2                	add    %edx,%edx
 8432cd9:	83 c2 01             	add    $0x1,%edx
 8432cdc:	c1 e2 04             	shl    $0x4,%edx
 8432cdf:	01 d0                	add    %edx,%eax
 8432ce1:	83 c0 0c             	add    $0xc,%eax
 8432ce4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432ce8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8432cef:	00 
 8432cf0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432cf3:	89 04 24             	mov    %eax,(%esp)
 8432cf6:	e8 f7 f5 ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8432cfb:	83 f0 01             	xor    $0x1,%eax
 8432cfe:	84 c0                	test   %al,%al
 8432d00:	74 0a                	je     8432d0c <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x23a>
 8432d02:	b8 00 00 00 00       	mov    $0x0,%eax
 8432d07:	e9 69 01 00 00       	jmp    8432e75 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x3a3>
 8432d0c:	83 7d ec 62          	cmpl   $0x62,-0x14(%ebp)
 8432d10:	77 21                	ja     8432d33 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x261>
 8432d12:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432d15:	89 04 24             	mov    %eax,(%esp)
 8432d18:	e8 4f f6 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8432d1d:	83 e8 01             	sub    $0x1,%eax
 8432d20:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8432d23:	0f 97 c0             	seta   %al
 8432d26:	84 c0                	test   %al,%al
 8432d28:	74 09                	je     8432d33 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x261>
 8432d2a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8432d2e:	e9 20 01 00 00       	jmp    8432e53 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x381>
 8432d33:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8432d38:	c7 44 24 08 28 7a 00 	movl   $0x7a28,0x8(%esp)
 8432d3f:	00 
 8432d40:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8432d47:	08 
 8432d48:	89 04 24             	mov    %eax,(%esp)
 8432d4b:	e8 36 cd e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8432d50:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8432d57:	00 
 8432d58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8432d5c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8432d5f:	89 04 24             	mov    %eax,(%esp)
 8432d62:	e8 bf 5e c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8432d67:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8432d6a:	89 04 24             	mov    %eax,(%esp)
 8432d6d:	e8 d4 5e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8432d72:	c7 44 24 04 56 01 00 	movl   $0x156,0x4(%esp)
 8432d79:	00 
 8432d7a:	89 04 24             	mov    %eax,(%esp)
 8432d7d:	e8 d4 5e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8432d82:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8432d85:	89 04 24             	mov    %eax,(%esp)
 8432d88:	e8 b9 5e c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8432d8d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8432d94:	ff 
 8432d95:	89 04 24             	mov    %eax,(%esp)
 8432d98:	e8 b9 5e c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8432d9d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8432da0:	89 04 24             	mov    %eax,(%esp)
 8432da3:	e8 a6 5e c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8432da8:	89 04 24             	mov    %eax,(%esp)
 8432dab:	e8 98 02 02 00       	call   8453048 <_ZN12CStreamGuard11GetInBufferI21SIG_IP_MONITOR_PUNISHEEPT_v>
 8432db0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8432db3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8432db6:	83 c0 01             	add    $0x1,%eax
 8432db9:	89 c2                	mov    %eax,%edx
 8432dbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8432dbe:	89 10                	mov    %edx,(%eax)
 8432dc0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8432dc3:	8d 50 04             	lea    0x4(%eax),%edx
 8432dc6:	c7 44 24 08 80 0c 00 	movl   $0xc80,0x8(%esp)
 8432dcd:	00 
 8432dce:	8d 85 4c f3 ff ff    	lea    -0xcb4(%ebp),%eax
 8432dd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8432dd8:	89 14 24             	mov    %edx,(%esp)
 8432ddb:	e8 c0 aa c4 ff       	call   807d8a0 <memcpy@plt>
 8432de0:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8432de4:	83 f0 01             	xor    $0x1,%eax
 8432de7:	84 c0                	test   %al,%al
 8432de9:	74 13                	je     8432dfe <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x32c>
 8432deb:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8432def:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8432df2:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 8432df6:	88 90 84 0c 00 00    	mov    %dl,0xc84(%eax)
 8432dfc:	eb 0a                	jmp    8432e08 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x336>
 8432dfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8432e01:	c6 80 84 0c 00 00 00 	movb   $0x0,0xc84(%eax)
 8432e08:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8432e0d:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8432e10:	89 54 24 08          	mov    %edx,0x8(%esp)
 8432e14:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432e1b:	00 
 8432e1c:	89 04 24             	mov    %eax,(%esp)
 8432e1f:	e8 ba e1 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8432e24:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8432e2b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8432e2e:	89 04 24             	mov    %eax,(%esp)
 8432e31:	e8 9c 9a 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8432e36:	eb 1b                	jmp    8432e53 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0x381>
 8432e38:	89 d3                	mov    %edx,%ebx
 8432e3a:	89 c6                	mov    %eax,%esi
 8432e3c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8432e3f:	89 04 24             	mov    %eax,(%esp)
 8432e42:	e8 8b 9a 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8432e47:	89 f0                	mov    %esi,%eax
 8432e49:	89 da                	mov    %ebx,%edx
 8432e4b:	89 04 24             	mov    %eax,(%esp)
 8432e4e:	e8 fd 08 6b 00       	call   8ae3750 <_Unwind_Resume>
 8432e53:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8432e57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432e5a:	89 04 24             	mov    %eax,(%esp)
 8432e5d:	e8 0a f5 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8432e62:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8432e65:	0f 97 c0             	seta   %al
 8432e68:	84 c0                	test   %al,%al
 8432e6a:	0f 85 29 fd ff ff    	jne    8432b99 <_ZN17DB_BlackIPMonitor8dispatchEiiP6Stream+0xc7>
 8432e70:	b8 01 00 00 00       	mov    $0x1,%eax
 8432e75:	81 c4 c0 0c 00 00    	add    $0xcc0,%esp
 8432e7b:	5b                   	pop    %ebx
 8432e7c:	5e                   	pop    %esi
 8432e7d:	5d                   	pop    %ebp
 8432e7e:	c3                   	ret
 8432e7f:	90                   	nop

```

```c
// DB_BlackIPMonitor::dispatch @ 0x8432ad2

/* DB_BlackIPMonitor::dispatch(int, int, Stream*) */

undefined4 DB_BlackIPMonitor::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  uint local_cb8 [800];
  CStreamGuard local_38 [8];
  cMyTrace local_30 [16];
  MySQL *local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  SIG_IP_MONITOR_PUNISH *local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_20,
                   "seLect ip, type, m_id_cnt, unix_timestamp(start_time), unix_timestamp(end_time) from ip_monitor_punish ORDER BY start_time ASC"
                  );
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    uVar2 = MySQL::get_n_rows(local_20);
    cMyTrace::cMyTrace(local_30,"virtual bool DB_BlackIPMonitor::dispatch(int, int, Stream*)",0x7a03
                       ,0);
    cMyTrace::operator()(local_30,"BLACKIP GET DB ROWS COUNT : %d",uVar2);
    local_18 = 0;
    local_11 = '\0';
    local_1c = 0;
    while (uVar6 = MySQL::get_n_rows(local_20), local_1c < uVar6) {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 != '\x01') {
        return 0;
      }
      if (local_18 == 0) {
        memset(local_cb8,0,0xc80);
      }
      cVar1 = MySQL::get_str(local_20,0,(char *)(local_cb8 + local_18 * 8),0x10);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_int(local_20,1,(int *)(local_cb8 + (local_18 * 2 + 1) * 4));
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_20,2,local_cb8 + (local_18 * 2 + 1) * 4 + 1);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_20,3,local_cb8 + (local_18 * 2 + 1) * 4 + 2);
      if (cVar1 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_uint(local_20,4,local_cb8 + (local_18 * 2 + 1) * 4 + 3);
      if (cVar1 != '\x01') {
        return 0;
      }
      if ((local_18 < 99) && (iVar3 = MySQL::get_n_rows(local_20), local_1c < iVar3 - 1U)) {
        local_18 = local_18 + 1;
      }
      else {
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7a28);
        CStreamGuard::CStreamGuard(local_38,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08432d7d to 08432e23 has its CatchHandler @ 08432e38 */
        CStreamGuard::operator<<(pCVar5,0x156);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_38);
        CStreamGuard::operator<<(pCVar5,-1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_38);
        local_10 = CStreamGuard::GetInBuffer<SIG_IP_MONITOR_PUNISH>(pCVar5);
        *(uint *)local_10 = local_18 + 1;
        memcpy(local_10 + 4,local_cb8,0xc80);
        if (local_11 == '\x01') {
          local_10[0xc84] = (SIG_IP_MONITOR_PUNISH)0x0;
        }
        else {
          local_11 = '\x01';
          local_10[0xc84] = (SIG_IP_MONITOR_PUNISH)0x1;
        }
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
        local_18 = 0;
        CStreamGuard::~CStreamGuard(local_38);
      }
      local_1c = local_1c + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 08432e80 DB_BlackIPMonitor::makeRequest  [0x08432e80-0x8432f3d] ===
 8432e80:	55                   	push   %ebp
 8432e81:	89 e5                	mov    %esp,%ebp
 8432e83:	56                   	push   %esi
 8432e84:	53                   	push   %ebx
 8432e85:	83 ec 20             	sub    $0x20,%esp
 8432e88:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8432e8d:	c7 44 24 08 8e 7a 00 	movl   $0x7a8e,0x8(%esp)
 8432e94:	00 
 8432e95:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8432e9c:	08 
 8432e9d:	89 04 24             	mov    %eax,(%esp)
 8432ea0:	e8 e1 cb e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8432ea5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8432eac:	00 
 8432ead:	89 44 24 04          	mov    %eax,0x4(%esp)
 8432eb1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8432eb4:	89 04 24             	mov    %eax,(%esp)
 8432eb7:	e8 6a 5d c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8432ebc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8432ebf:	89 04 24             	mov    %eax,(%esp)
 8432ec2:	e8 7f 5d c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8432ec7:	c7 44 24 04 52 01 00 	movl   $0x152,0x4(%esp)
 8432ece:	00 
 8432ecf:	89 04 24             	mov    %eax,(%esp)
 8432ed2:	e8 7f 5d c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8432ed7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8432eda:	89 04 24             	mov    %eax,(%esp)
 8432edd:	e8 64 5d c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8432ee2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8432ee9:	ff 
 8432eea:	89 04 24             	mov    %eax,(%esp)
 8432eed:	e8 64 5d c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8432ef2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8432ef7:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8432efa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8432efe:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8432f05:	00 
 8432f06:	89 04 24             	mov    %eax,(%esp)
 8432f09:	e8 d0 e0 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8432f0e:	eb 1b                	jmp    8432f2b <_ZN17DB_BlackIPMonitor11makeRequestEv+0xab>
 8432f10:	89 d3                	mov    %edx,%ebx
 8432f12:	89 c6                	mov    %eax,%esi
 8432f14:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8432f17:	89 04 24             	mov    %eax,(%esp)
 8432f1a:	e8 b3 99 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8432f1f:	89 f0                	mov    %esi,%eax
 8432f21:	89 da                	mov    %ebx,%edx
 8432f23:	89 04 24             	mov    %eax,(%esp)
 8432f26:	e8 25 08 6b 00       	call   8ae3750 <_Unwind_Resume>
 8432f2b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8432f2e:	89 04 24             	mov    %eax,(%esp)
 8432f31:	e8 9c 99 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8432f36:	83 c4 20             	add    $0x20,%esp
 8432f39:	5b                   	pop    %ebx
 8432f3a:	5e                   	pop    %esi
 8432f3b:	5d                   	pop    %ebp
 8432f3c:	c3                   	ret
 8432f3d:	90                   	nop

```

```c
// DB_BlackIPMonitor::makeRequest @ 0x8432e80

/* DB_BlackIPMonitor::makeRequest() */

void DB_BlackIPMonitor::makeRequest(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7a8e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08432ed2 to 08432f0d has its CatchHandler @ 08432f10 */
  CStreamGuard::operator<<(pCVar2,0x152);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

