# DisPatcher_SetPlayResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SendResult

```asm
// === 081f5db6 DisPatcher_SetPlayResult::SendResult  [0x081f5db6-0x81f5eb9] ===
 81f5db6:	55                   	push   %ebp
 81f5db7:	89 e5                	mov    %esp,%ebp
 81f5db9:	56                   	push   %esi
 81f5dba:	53                   	push   %ebx
 81f5dbb:	83 ec 20             	sub    $0x20,%esp
 81f5dbe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5dc1:	89 04 24             	mov    %eax,(%esp)
 81f5dc4:	e8 83 7f 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f5dc9:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 81f5dd0:	00 
 81f5dd1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f5dd8:	00 
 81f5dd9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5ddc:	89 04 24             	mov    %eax,(%esp)
 81f5ddf:	e8 18 5b ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f5de4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5de7:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 81f5deb:	0f b7 c0             	movzwl %ax,%eax
 81f5dee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5df2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5df5:	89 04 24             	mov    %eax,(%esp)
 81f5df8:	e8 23 5b ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f5dfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5e00:	8b 40 0c             	mov    0xc(%eax),%eax
 81f5e03:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5e07:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5e0a:	89 04 24             	mov    %eax,(%esp)
 81f5e0d:	e8 2a 5b ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f5e12:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5e15:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81f5e19:	0f be c0             	movsbl %al,%eax
 81f5e1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5e20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5e23:	89 04 24             	mov    %eax,(%esp)
 81f5e26:	e8 f5 5a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f5e2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5e2e:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 81f5e32:	0f be c0             	movsbl %al,%eax
 81f5e35:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5e39:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5e3c:	89 04 24             	mov    %eax,(%esp)
 81f5e3f:	e8 dc 5a ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f5e44:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5e47:	8b 40 0c             	mov    0xc(%eax),%eax
 81f5e4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f5e4e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5e51:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5e55:	8b 45 08             	mov    0x8(%ebp),%eax
 81f5e58:	89 04 24             	mov    %eax,(%esp)
 81f5e5b:	e8 98 83 3c 00       	call   85be1f8 <_ZN6CParty23makeBestClearTimePacketER11PacketGuardi>
 81f5e60:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f5e67:	00 
 81f5e68:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5e6b:	89 04 24             	mov    %eax,(%esp)
 81f5e6e:	e8 e5 5a ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f5e73:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5e76:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5e7a:	8b 45 08             	mov    0x8(%ebp),%eax
 81f5e7d:	89 04 24             	mov    %eax,(%esp)
 81f5e80:	e8 c9 72 3a 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81f5e85:	bb 01 00 00 00       	mov    $0x1,%ebx
 81f5e8a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5e8d:	89 04 24             	mov    %eax,(%esp)
 81f5e90:	e8 eb 7f 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f5e95:	89 d8                	mov    %ebx,%eax
 81f5e97:	83 c4 20             	add    $0x20,%esp
 81f5e9a:	5b                   	pop    %ebx
 81f5e9b:	5e                   	pop    %esi
 81f5e9c:	5d                   	pop    %ebp
 81f5e9d:	c3                   	ret
 81f5e9e:	89 d3                	mov    %edx,%ebx
 81f5ea0:	89 c6                	mov    %eax,%esi
 81f5ea2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81f5ea5:	89 04 24             	mov    %eax,(%esp)
 81f5ea8:	e8 d3 7f 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f5ead:	89 f0                	mov    %esi,%eax
 81f5eaf:	89 da                	mov    %ebx,%edx
 81f5eb1:	89 04 24             	mov    %eax,(%esp)
 81f5eb4:	e8 97 d8 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f5eb9:	90                   	nop

```

```c
// DisPatcher_SetPlayResult::SendResult @ 0x81f5db6

/* DisPatcher_SetPlayResult::SendResult(CParty*, GameResultSet&, int) */

undefined4 DisPatcher_SetPlayResult::SendResult(CParty *param_1,GameResultSet *param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081f5ddf to 081f5e84 has its CatchHandler @ 081f5e9e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x22);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)*(ushort *)(param_2 + 0x48));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_2 + 0xc));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_2[0x10]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_2[9]);
  CParty::makeBestClearTimePacket(param_1,local_18,*(int *)(param_2 + 0xc));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 081f4ce6 DisPatcher_SetPlayResult::dispatch_sig  [0x081f4ce6-0x81f5db5] ===
 81f4ce6:	55                   	push   %ebp
 81f4ce7:	89 e5                	mov    %esp,%ebp
 81f4ce9:	57                   	push   %edi
 81f4cea:	56                   	push   %esi
 81f4ceb:	53                   	push   %ebx
 81f4cec:	81 ec 0c 1d 00 00    	sub    $0x1d0c,%esp
 81f4cf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4cf5:	89 04 24             	mov    %eax,(%esp)
 81f4cf8:	e8 8f 56 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f4cfd:	83 f8 05             	cmp    $0x5,%eax
 81f4d00:	0f 95 c0             	setne  %al
 81f4d03:	84 c0                	test   %al,%al
 81f4d05:	74 0a                	je     81f4d11 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 81f4d07:	b8 00 00 00 00       	mov    $0x0,%eax
 81f4d0c:	e9 99 10 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4d11:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f4d14:	89 04 24             	mov    %eax,(%esp)
 81f4d17:	e8 32 b1 03 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81f4d1c:	0f bf d8             	movswl %ax,%ebx
 81f4d1f:	e8 6a 74 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f4d24:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f4d28:	89 04 24             	mov    %eax,(%esp)
 81f4d2b:	e8 02 02 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81f4d30:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81f4d33:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 81f4d37:	0f 94 c0             	sete   %al
 81f4d3a:	84 c0                	test   %al,%al
 81f4d3c:	74 29                	je     81f4d67 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x81>
 81f4d3e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4d45:	00 
 81f4d46:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4d4d:	00 
 81f4d4e:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f4d55:	08 
 81f4d56:	c7 04 24 55 81 00 00 	movl   $0x8155,(%esp)
 81f4d5d:	e8 75 bb 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4d62:	e9 43 10 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4d67:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4d6a:	8b 80 d8 0c 00 00    	mov    0xcd8(%eax),%eax
 81f4d70:	83 f8 01             	cmp    $0x1,%eax
 81f4d73:	75 0a                	jne    81f4d7f <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x99>
 81f4d75:	b8 00 00 00 00       	mov    $0x0,%eax
 81f4d7a:	e9 2b 10 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4d7f:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 81f4d83:	74 2a                	je     81f4daf <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 81f4d85:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4d88:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81f4d8e:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81f4d91:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81f4d95:	74 18                	je     81f4daf <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 81f4d97:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81f4d9a:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 81f4da1:	84 c0                	test   %al,%al
 81f4da3:	7e 0a                	jle    81f4daf <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 81f4da5:	b8 00 00 00 00       	mov    $0x0,%eax
 81f4daa:	e9 fb 0f 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4daf:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4db2:	05 f4 17 00 00       	add    $0x17f4,%eax
 81f4db7:	89 04 24             	mov    %eax,(%esp)
 81f4dba:	e8 83 26 2c 00       	call   84b7442 <_ZN14GameResultType5ClearEv>
 81f4dbf:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4dc2:	05 fd 17 00 00       	add    $0x17fd,%eax
 81f4dc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4dcb:	8b 45 10             	mov    0x10(%ebp),%eax
 81f4dce:	89 04 24             	mov    %eax,(%esp)
 81f4dd1:	e8 4c 81 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f4dd6:	83 f0 01             	xor    $0x1,%eax
 81f4dd9:	84 c0                	test   %al,%al
 81f4ddb:	74 29                	je     81f4e06 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x120>
 81f4ddd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4de4:	00 
 81f4de5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4dec:	00 
 81f4ded:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f4df4:	08 
 81f4df5:	c7 04 24 6d 81 00 00 	movl   $0x816d,(%esp)
 81f4dfc:	e8 d6 ba 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4e01:	e9 a4 0f 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4e06:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4e09:	05 fe 17 00 00       	add    $0x17fe,%eax
 81f4e0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4e12:	8b 45 10             	mov    0x10(%ebp),%eax
 81f4e15:	89 04 24             	mov    %eax,(%esp)
 81f4e18:	e8 05 81 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f4e1d:	83 f0 01             	xor    $0x1,%eax
 81f4e20:	84 c0                	test   %al,%al
 81f4e22:	74 29                	je     81f4e4d <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x167>
 81f4e24:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4e2b:	00 
 81f4e2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4e33:	00 
 81f4e34:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f4e3b:	08 
 81f4e3c:	c7 04 24 72 81 00 00 	movl   $0x8172,(%esp)
 81f4e43:	e8 8f ba 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4e48:	e9 5d 0f 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4e4d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4e50:	05 3e 18 00 00       	add    $0x183e,%eax
 81f4e55:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4e59:	8b 45 10             	mov    0x10(%ebp),%eax
 81f4e5c:	89 04 24             	mov    %eax,(%esp)
 81f4e5f:	e8 4c 82 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81f4e64:	83 f0 01             	xor    $0x1,%eax
 81f4e67:	84 c0                	test   %al,%al
 81f4e69:	74 29                	je     81f4e94 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 81f4e6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4e72:	00 
 81f4e73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4e7a:	00 
 81f4e7b:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f4e82:	08 
 81f4e83:	c7 04 24 74 81 00 00 	movl   $0x8174,(%esp)
 81f4e8a:	e8 48 ba 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4e8f:	e9 16 0f 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4e94:	c6 85 61 f1 ff ff 00 	movb   $0x0,-0xe9f(%ebp)
 81f4e9b:	8d 85 61 f1 ff ff    	lea    -0xe9f(%ebp),%eax
 81f4ea1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4ea5:	8b 45 10             	mov    0x10(%ebp),%eax
 81f4ea8:	89 04 24             	mov    %eax,(%esp)
 81f4eab:	e8 72 80 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f4eb0:	83 f0 01             	xor    $0x1,%eax
 81f4eb3:	84 c0                	test   %al,%al
 81f4eb5:	74 29                	je     81f4ee0 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x1fa>
 81f4eb7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4ebe:	00 
 81f4ebf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4ec6:	00 
 81f4ec7:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f4ece:	08 
 81f4ecf:	c7 04 24 79 81 00 00 	movl   $0x8179,(%esp)
 81f4ed6:	e8 fc b9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4edb:	e9 ca 0e 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4ee0:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 81f4ee7:	e9 a4 00 00 00       	jmp    81f4f90 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x2aa>
 81f4eec:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81f4eef:	05 00 03 00 00       	add    $0x300,%eax
 81f4ef4:	c1 e0 03             	shl    $0x3,%eax
 81f4ef7:	03 45 b8             	add    -0x48(%ebp),%eax
 81f4efa:	83 c0 08             	add    $0x8,%eax
 81f4efd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4f01:	8b 45 10             	mov    0x10(%ebp),%eax
 81f4f04:	89 04 24             	mov    %eax,(%esp)
 81f4f07:	e8 a4 81 39 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81f4f0c:	83 f0 01             	xor    $0x1,%eax
 81f4f0f:	84 c0                	test   %al,%al
 81f4f11:	74 29                	je     81f4f3c <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x256>
 81f4f13:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4f1a:	00 
 81f4f1b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4f22:	00 
 81f4f23:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f4f2a:	08 
 81f4f2b:	c7 04 24 7e 81 00 00 	movl   $0x817e,(%esp)
 81f4f32:	e8 a0 b9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4f37:	e9 6e 0e 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4f3c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81f4f3f:	05 00 03 00 00       	add    $0x300,%eax
 81f4f44:	c1 e0 03             	shl    $0x3,%eax
 81f4f47:	03 45 b8             	add    -0x48(%ebp),%eax
 81f4f4a:	83 c0 0c             	add    $0xc,%eax
 81f4f4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f4f51:	8b 45 10             	mov    0x10(%ebp),%eax
 81f4f54:	89 04 24             	mov    %eax,(%esp)
 81f4f57:	e8 94 81 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f4f5c:	83 f0 01             	xor    $0x1,%eax
 81f4f5f:	84 c0                	test   %al,%al
 81f4f61:	74 29                	je     81f4f8c <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x2a6>
 81f4f63:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4f6a:	00 
 81f4f6b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f4f72:	00 
 81f4f73:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f4f7a:	08 
 81f4f7b:	c7 04 24 81 81 00 00 	movl   $0x8181,(%esp)
 81f4f82:	e8 50 b9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f4f87:	e9 1e 0e 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f4f8c:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 81f4f90:	0f b6 85 61 f1 ff ff 	movzbl -0xe9f(%ebp),%eax
 81f4f97:	0f be c0             	movsbl %al,%eax
 81f4f9a:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 81f4f9d:	7e 0d                	jle    81f4fac <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x2c6>
 81f4f9f:	83 7d c8 03          	cmpl   $0x3,-0x38(%ebp)
 81f4fa3:	7f 07                	jg     81f4fac <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x2c6>
 81f4fa5:	b8 01 00 00 00       	mov    $0x1,%eax
 81f4faa:	eb 05                	jmp    81f4fb1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 81f4fac:	b8 00 00 00 00       	mov    $0x0,%eax
 81f4fb1:	84 c0                	test   %al,%al
 81f4fb3:	0f 85 33 ff ff ff    	jne    81f4eec <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x206>
 81f4fb9:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4fbc:	89 04 24             	mov    %eax,(%esp)
 81f4fbf:	e8 a4 17 3c 00       	call   85b6768 <_ZN6CParty17GetMapPlayingTimeEv>
 81f4fc4:	89 85 14 e3 ff ff    	mov    %eax,-0x1cec(%ebp)
 81f4fca:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81f4fcf:	8b 85 14 e3 ff ff    	mov    -0x1cec(%ebp),%eax
 81f4fd5:	f7 e2                	mul    %edx
 81f4fd7:	89 d0                	mov    %edx,%eax
 81f4fd9:	c1 e8 06             	shr    $0x6,%eax
 81f4fdc:	89 c2                	mov    %eax,%edx
 81f4fde:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f4fe1:	0f b7 80 3e 18 00 00 	movzwl 0x183e(%eax),%eax
 81f4fe8:	0f b7 c0             	movzwl %ax,%eax
 81f4feb:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 81f4fee:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 81f4ff4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f4ffb:	00 
 81f4ffc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f5000:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5004:	89 0c 24             	mov    %ecx,(%esp)
 81f5007:	e8 16 fb 48 00       	call   8684b22 <_ZN15cUserHistoryLog8MapClearEtii>
 81f500c:	c7 85 5c f1 ff ff 00 	movl   $0x0,-0xea4(%ebp)
 81f5013:	00 00 00 
 81f5016:	8d 85 5c f1 ff ff    	lea    -0xea4(%ebp),%eax
 81f501c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5020:	8b 45 10             	mov    0x10(%ebp),%eax
 81f5023:	89 04 24             	mov    %eax,(%esp)
 81f5026:	e8 c5 80 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f502b:	83 f0 01             	xor    $0x1,%eax
 81f502e:	84 c0                	test   %al,%al
 81f5030:	74 29                	je     81f505b <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x375>
 81f5032:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5039:	00 
 81f503a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5041:	00 
 81f5042:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f5049:	08 
 81f504a:	c7 04 24 8b 81 00 00 	movl   $0x818b,(%esp)
 81f5051:	e8 81 b8 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5056:	e9 4f 0d 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f505b:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 81f505f:	74 6a                	je     81f50cb <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x3e5>
 81f5061:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5064:	89 04 24             	mov    %eax,(%esp)
 81f5067:	e8 8a 88 03 00       	call   822d8f6 <_ZN6CParty13checkBossRoomEv>
 81f506c:	83 f0 01             	xor    $0x1,%eax
 81f506f:	84 c0                	test   %al,%al
 81f5071:	74 11                	je     81f5084 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x39e>
 81f5073:	8b 85 5c f1 ff ff    	mov    -0xea4(%ebp),%eax
 81f5079:	85 c0                	test   %eax,%eax
 81f507b:	74 07                	je     81f5084 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x39e>
 81f507d:	b8 01 00 00 00       	mov    $0x1,%eax
 81f5082:	eb 05                	jmp    81f5089 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x3a3>
 81f5084:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5089:	84 c0                	test   %al,%al
 81f508b:	74 3e                	je     81f50cb <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x3e5>
 81f508d:	8b 85 5c f1 ff ff    	mov    -0xea4(%ebp),%eax
 81f5093:	89 c3                	mov    %eax,%ebx
 81f5095:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5098:	89 04 24             	mov    %eax,(%esp)
 81f509b:	e8 ba 48 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f50a0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f50a7:	00 
 81f50a8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f50af:	00 
 81f50b0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81f50b4:	c7 44 24 08 fb 01 00 	movl   $0x1fb,0x8(%esp)
 81f50bb:	00 
 81f50bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f50bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f50c3:	89 04 24             	mov    %eax,(%esp)
 81f50c6:	e8 b3 3b f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f50cb:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f50ce:	05 40 18 00 00       	add    $0x1840,%eax
 81f50d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f50d7:	8b 45 10             	mov    0x10(%ebp),%eax
 81f50da:	89 04 24             	mov    %eax,(%esp)
 81f50dd:	e8 5e 81 39 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81f50e2:	83 f0 01             	xor    $0x1,%eax
 81f50e5:	84 c0                	test   %al,%al
 81f50e7:	74 29                	je     81f5112 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x42c>
 81f50e9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f50f0:	00 
 81f50f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f50f8:	00 
 81f50f9:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f5100:	08 
 81f5101:	c7 04 24 95 81 00 00 	movl   $0x8195,(%esp)
 81f5108:	e8 ca b7 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f510d:	e9 98 0c 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5112:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5115:	8b 80 40 18 00 00    	mov    0x1840(%eax),%eax
 81f511b:	3d 10 27 00 00       	cmp    $0x2710,%eax
 81f5120:	0f 86 9d 00 00 00    	jbe    81f51c3 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x4dd>
 81f5126:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 81f512d:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81f5134:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5137:	8b 80 40 18 00 00    	mov    0x1840(%eax),%eax
 81f513d:	89 85 14 e3 ff ff    	mov    %eax,-0x1cec(%ebp)
 81f5143:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 81f5148:	8b 85 14 e3 ff ff    	mov    -0x1cec(%ebp),%eax
 81f514e:	f7 e2                	mul    %edx
 81f5150:	89 d0                	mov    %edx,%eax
 81f5152:	c1 e8 0d             	shr    $0xd,%eax
 81f5155:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81f5158:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f515b:	8b 88 40 18 00 00    	mov    0x1840(%eax),%ecx
 81f5161:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 81f5166:	89 c8                	mov    %ecx,%eax
 81f5168:	f7 e2                	mul    %edx
 81f516a:	89 d0                	mov    %edx,%eax
 81f516c:	c1 e8 0d             	shr    $0xd,%eax
 81f516f:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 81f5175:	89 ca                	mov    %ecx,%edx
 81f5177:	29 c2                	sub    %eax,%edx
 81f5179:	89 d0                	mov    %edx,%eax
 81f517b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81f517e:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 81f5181:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5184:	89 04 24             	mov    %eax,(%esp)
 81f5187:	e8 ce 47 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f518c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f5193:	00 
 81f5194:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81f5198:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f519f:	00 
 81f51a0:	c7 44 24 08 78 00 00 	movl   $0x78,0x8(%esp)
 81f51a7:	00 
 81f51a8:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f51ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f51af:	89 04 24             	mov    %eax,(%esp)
 81f51b2:	e8 c7 3a f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f51b7:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81f51ba:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f51bd:	89 90 40 18 00 00    	mov    %edx,0x1840(%eax)
 81f51c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f51c6:	89 04 24             	mov    %eax,(%esp)
 81f51c9:	e8 52 8d f0 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81f51ce:	83 f8 03             	cmp    $0x3,%eax
 81f51d1:	74 1f                	je     81f51f2 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x50c>
 81f51d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f51d6:	89 04 24             	mov    %eax,(%esp)
 81f51d9:	e8 42 8d f0 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81f51de:	83 f8 04             	cmp    $0x4,%eax
 81f51e1:	75 16                	jne    81f51f9 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x513>
 81f51e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f51e6:	89 04 24             	mov    %eax,(%esp)
 81f51e9:	e8 a6 ba f1 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81f51ee:	3c 02                	cmp    $0x2,%al
 81f51f0:	75 07                	jne    81f51f9 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x513>
 81f51f2:	b8 01 00 00 00       	mov    $0x1,%eax
 81f51f7:	eb 05                	jmp    81f51fe <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x518>
 81f51f9:	b8 00 00 00 00       	mov    $0x0,%eax
 81f51fe:	84 c0                	test   %al,%al
 81f5200:	74 69                	je     81f526b <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x585>
 81f5202:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5205:	8b 80 40 18 00 00    	mov    0x1840(%eax),%eax
 81f520b:	ba 00 00 00 00       	mov    $0x0,%edx
 81f5210:	89 85 28 e3 ff ff    	mov    %eax,-0x1cd8(%ebp)
 81f5216:	89 95 2c e3 ff ff    	mov    %edx,-0x1cd4(%ebp)
 81f521c:	df ad 28 e3 ff ff    	fildll -0x1cd8(%ebp)
 81f5222:	dd 05 20 63 bd 08    	fldl   0x8bd6320
 81f5228:	de c9                	fmulp  %st,%st(1)
 81f522a:	d9 bd 26 e3 ff ff    	fnstcw -0x1cda(%ebp)
 81f5230:	0f b7 85 26 e3 ff ff 	movzwl -0x1cda(%ebp),%eax
 81f5237:	b4 0c                	mov    $0xc,%ah
 81f5239:	66 89 85 24 e3 ff ff 	mov    %ax,-0x1cdc(%ebp)
 81f5240:	d9 ad 24 e3 ff ff    	fldcw  -0x1cdc(%ebp)
 81f5246:	df bd 28 e3 ff ff    	fistpll -0x1cd8(%ebp)
 81f524c:	d9 ad 26 e3 ff ff    	fldcw  -0x1cda(%ebp)
 81f5252:	8b 85 28 e3 ff ff    	mov    -0x1cd8(%ebp),%eax
 81f5258:	8b 95 2c e3 ff ff    	mov    -0x1cd4(%ebp),%edx
 81f525e:	89 c2                	mov    %eax,%edx
 81f5260:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5263:	89 90 40 18 00 00    	mov    %edx,0x1840(%eax)
 81f5269:	eb 67                	jmp    81f52d2 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x5ec>
 81f526b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f526e:	8b 80 40 18 00 00    	mov    0x1840(%eax),%eax
 81f5274:	ba 00 00 00 00       	mov    $0x0,%edx
 81f5279:	89 85 28 e3 ff ff    	mov    %eax,-0x1cd8(%ebp)
 81f527f:	89 95 2c e3 ff ff    	mov    %edx,-0x1cd4(%ebp)
 81f5285:	df ad 28 e3 ff ff    	fildll -0x1cd8(%ebp)
 81f528b:	dd 05 28 63 bd 08    	fldl   0x8bd6328
 81f5291:	de c9                	fmulp  %st,%st(1)
 81f5293:	d9 bd 26 e3 ff ff    	fnstcw -0x1cda(%ebp)
 81f5299:	0f b7 85 26 e3 ff ff 	movzwl -0x1cda(%ebp),%eax
 81f52a0:	b4 0c                	mov    $0xc,%ah
 81f52a2:	66 89 85 24 e3 ff ff 	mov    %ax,-0x1cdc(%ebp)
 81f52a9:	d9 ad 24 e3 ff ff    	fldcw  -0x1cdc(%ebp)
 81f52af:	df bd 28 e3 ff ff    	fistpll -0x1cd8(%ebp)
 81f52b5:	d9 ad 26 e3 ff ff    	fldcw  -0x1cda(%ebp)
 81f52bb:	8b 85 28 e3 ff ff    	mov    -0x1cd8(%ebp),%eax
 81f52c1:	8b 95 2c e3 ff ff    	mov    -0x1cd4(%ebp),%edx
 81f52c7:	89 c2                	mov    %eax,%edx
 81f52c9:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f52cc:	89 90 40 18 00 00    	mov    %edx,0x1840(%eax)
 81f52d2:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f52d5:	8b 98 40 18 00 00    	mov    0x1840(%eax),%ebx
 81f52db:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f52de:	89 04 24             	mov    %eax,(%esp)
 81f52e1:	e8 82 14 3c 00       	call   85b6768 <_ZN6CParty17GetMapPlayingTimeEv>
 81f52e6:	89 85 14 e3 ff ff    	mov    %eax,-0x1cec(%ebp)
 81f52ec:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81f52f1:	8b 85 14 e3 ff ff    	mov    -0x1cec(%ebp),%eax
 81f52f7:	f7 e2                	mul    %edx
 81f52f9:	89 d0                	mov    %edx,%eax
 81f52fb:	c1 e8 06             	shr    $0x6,%eax
 81f52fe:	39 c3                	cmp    %eax,%ebx
 81f5300:	0f 97 c0             	seta   %al
 81f5303:	84 c0                	test   %al,%al
 81f5305:	74 3f                	je     81f5346 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x660>
 81f5307:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f530a:	8b 98 40 18 00 00    	mov    0x1840(%eax),%ebx
 81f5310:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5313:	89 04 24             	mov    %eax,(%esp)
 81f5316:	e8 3f 46 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f531b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f5322:	00 
 81f5323:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81f5327:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f532e:	00 
 81f532f:	c7 44 24 08 75 00 00 	movl   $0x75,0x8(%esp)
 81f5336:	00 
 81f5337:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f533a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f533e:	89 04 24             	mov    %eax,(%esp)
 81f5341:	e8 38 39 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f5346:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5349:	05 24 0b 00 00       	add    $0xb24,%eax
 81f534e:	89 04 24             	mov    %eax,(%esp)
 81f5351:	e8 82 7d 03 00       	call   822d0d8 <_ZN13CBattle_Field17get_dungeon_indexEv>
 81f5356:	8b 55 b8             	mov    -0x48(%ebp),%edx
 81f5359:	89 82 f8 17 00 00    	mov    %eax,0x17f8(%edx)
 81f535f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5362:	05 24 0b 00 00       	add    $0xb24,%eax
 81f5367:	89 04 24             	mov    %eax,(%esp)
 81f536a:	e8 ad 44 f0 ff       	call   80f981c <_ZN13CBattle_Field16get_dungeon_diffEv>
 81f536f:	89 c2                	mov    %eax,%edx
 81f5371:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5374:	88 90 fc 17 00 00    	mov    %dl,0x17fc(%eax)
 81f537a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f537d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5381:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5384:	89 04 24             	mov    %eax,(%esp)
 81f5387:	e8 56 cf 3b 00       	call   85b22e2 <_ZN6CParty26IncreaseSetPlayResultCountEP5CUser>
 81f538c:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f538f:	89 04 24             	mov    %eax,(%esp)
 81f5392:	e8 05 85 03 00       	call   822d89c <_ZN6CParty23get_dungeon_clear_stateEv>
 81f5397:	84 c0                	test   %al,%al
 81f5399:	0f 94 c0             	sete   %al
 81f539c:	84 c0                	test   %al,%al
 81f539e:	0f 84 c5 00 00 00    	je     81f5469 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x783>
 81f53a4:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f53a7:	05 24 0b 00 00       	add    $0xb24,%eax
 81f53ac:	89 04 24             	mov    %eax,(%esp)
 81f53af:	e8 d8 7c 03 00       	call   822d08c <_ZN13CBattle_Field14IsClearDungeonEv>
 81f53b4:	83 f0 01             	xor    $0x1,%eax
 81f53b7:	84 c0                	test   %al,%al
 81f53b9:	74 44                	je     81f53ff <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x719>
 81f53bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f53be:	89 04 24             	mov    %eax,(%esp)
 81f53c1:	e8 94 45 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f53c6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f53cd:	00 
 81f53ce:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f53d5:	00 
 81f53d6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f53dd:	00 
 81f53de:	c7 44 24 08 96 01 00 	movl   $0x196,0x8(%esp)
 81f53e5:	00 
 81f53e6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f53e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f53ed:	89 04 24             	mov    %eax,(%esp)
 81f53f0:	e8 89 38 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f53f5:	b8 00 00 00 00       	mov    $0x0,%eax
 81f53fa:	e9 ab 09 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f53ff:	c7 44 24 04 29 00 00 	movl   $0x29,0x4(%esp)
 81f5406:	00 
 81f5407:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f540a:	89 04 24             	mov    %eax,(%esp)
 81f540d:	e8 64 5a 3a 00       	call   859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>
 81f5412:	89 c6                	mov    %eax,%esi
 81f5414:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5417:	89 04 24             	mov    %eax,(%esp)
 81f541a:	e8 27 84 03 00       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 81f541f:	89 c3                	mov    %eax,%ebx
 81f5421:	e8 56 10 f0 ff       	call   80f647c <_Z12G_TimerQueuev>
 81f5426:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81f542d:	00 
 81f542e:	89 74 24 14          	mov    %esi,0x14(%esp)
 81f5432:	c7 44 24 10 0f 00 00 	movl   $0xf,0x10(%esp)
 81f5439:	00 
 81f543a:	c7 44 24 0c 29 00 00 	movl   $0x29,0xc(%esp)
 81f5441:	00 
 81f5442:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81f5446:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f544d:	00 
 81f544e:	89 04 24             	mov    %eax,(%esp)
 81f5451:	e8 c0 b9 43 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 81f5456:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f545d:	00 
 81f545e:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5461:	89 04 24             	mov    %eax,(%esp)
 81f5464:	e8 43 84 03 00       	call   822d8ac <_ZN6CParty23set_dungeon_clear_stateEc>
 81f5469:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f546c:	05 24 0b 00 00       	add    $0xb24,%eax
 81f5471:	89 04 24             	mov    %eax,(%esp)
 81f5474:	e8 53 77 03 00       	call   822cbcc <_ZN13CBattle_Field17GetCurrentMapInfoEv>
 81f5479:	8b 40 4c             	mov    0x4c(%eax),%eax
 81f547c:	85 c0                	test   %eax,%eax
 81f547e:	0f 94 c0             	sete   %al
 81f5481:	84 c0                	test   %al,%al
 81f5483:	0f 84 c3 01 00 00    	je     81f564c <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x966>
 81f5489:	8d 85 62 f1 ff ff    	lea    -0xe9e(%ebp),%eax
 81f548f:	89 04 24             	mov    %eax,(%esp)
 81f5492:	e8 b5 97 03 00       	call   822ec4c <_ZN11CHARAC_DATAC1Ev>
 81f5497:	8d 85 d8 f7 ff ff    	lea    -0x828(%ebp),%eax
 81f549d:	89 04 24             	mov    %eax,(%esp)
 81f54a0:	e8 09 99 03 00       	call   822edae <_ZN15TAG_CHARAC_DATAC1Ev>
 81f54a5:	8d 95 45 ea ff ff    	lea    -0x15bb(%ebp),%edx
 81f54ab:	bb 03 07 00 00       	mov    $0x703,%ebx
 81f54b0:	b8 00 00 00 00       	mov    $0x0,%eax
 81f54b5:	89 d1                	mov    %edx,%ecx
 81f54b7:	83 e1 01             	and    $0x1,%ecx
 81f54ba:	85 c9                	test   %ecx,%ecx
 81f54bc:	74 08                	je     81f54c6 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x7e0>
 81f54be:	88 02                	mov    %al,(%edx)
 81f54c0:	83 c2 01             	add    $0x1,%edx
 81f54c3:	83 eb 01             	sub    $0x1,%ebx
 81f54c6:	89 d1                	mov    %edx,%ecx
 81f54c8:	83 e1 02             	and    $0x2,%ecx
 81f54cb:	85 c9                	test   %ecx,%ecx
 81f54cd:	74 09                	je     81f54d8 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x7f2>
 81f54cf:	66 89 02             	mov    %ax,(%edx)
 81f54d2:	83 c2 02             	add    $0x2,%edx
 81f54d5:	83 eb 02             	sub    $0x2,%ebx
 81f54d8:	89 d9                	mov    %ebx,%ecx
 81f54da:	c1 e9 02             	shr    $0x2,%ecx
 81f54dd:	89 d7                	mov    %edx,%edi
 81f54df:	f3 ab                	rep stos %eax,%es:(%edi)
 81f54e1:	89 fa                	mov    %edi,%edx
 81f54e3:	89 d9                	mov    %ebx,%ecx
 81f54e5:	83 e1 02             	and    $0x2,%ecx
 81f54e8:	85 c9                	test   %ecx,%ecx
 81f54ea:	74 06                	je     81f54f2 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x80c>
 81f54ec:	66 89 02             	mov    %ax,(%edx)
 81f54ef:	83 c2 02             	add    $0x2,%edx
 81f54f2:	89 d9                	mov    %ebx,%ecx
 81f54f4:	83 e1 01             	and    $0x1,%ecx
 81f54f7:	85 c9                	test   %ecx,%ecx
 81f54f9:	74 05                	je     81f5500 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x81a>
 81f54fb:	88 02                	mov    %al,(%edx)
 81f54fd:	83 c2 01             	add    $0x1,%edx
 81f5500:	8d 85 51 ea ff ff    	lea    -0x15af(%ebp),%eax
 81f5506:	8d 95 62 f1 ff ff    	lea    -0xe9e(%ebp),%edx
 81f550c:	bb 76 06 00 00       	mov    $0x676,%ebx
 81f5511:	89 c1                	mov    %eax,%ecx
 81f5513:	83 e1 01             	and    $0x1,%ecx
 81f5516:	85 c9                	test   %ecx,%ecx
 81f5518:	74 0e                	je     81f5528 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x842>
 81f551a:	0f b6 0a             	movzbl (%edx),%ecx
 81f551d:	88 08                	mov    %cl,(%eax)
 81f551f:	83 c0 01             	add    $0x1,%eax
 81f5522:	83 c2 01             	add    $0x1,%edx
 81f5525:	83 eb 01             	sub    $0x1,%ebx
 81f5528:	89 c1                	mov    %eax,%ecx
 81f552a:	83 e1 02             	and    $0x2,%ecx
 81f552d:	85 c9                	test   %ecx,%ecx
 81f552f:	74 0f                	je     81f5540 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x85a>
 81f5531:	0f b7 0a             	movzwl (%edx),%ecx
 81f5534:	66 89 08             	mov    %cx,(%eax)
 81f5537:	83 c0 02             	add    $0x2,%eax
 81f553a:	83 c2 02             	add    $0x2,%edx
 81f553d:	83 eb 02             	sub    $0x2,%ebx
 81f5540:	89 d9                	mov    %ebx,%ecx
 81f5542:	c1 e9 02             	shr    $0x2,%ecx
 81f5545:	89 c7                	mov    %eax,%edi
 81f5547:	89 d6                	mov    %edx,%esi
 81f5549:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 81f554b:	89 f2                	mov    %esi,%edx
 81f554d:	89 f8                	mov    %edi,%eax
 81f554f:	b9 00 00 00 00       	mov    $0x0,%ecx
 81f5554:	89 de                	mov    %ebx,%esi
 81f5556:	83 e6 02             	and    $0x2,%esi
 81f5559:	85 f6                	test   %esi,%esi
 81f555b:	74 0b                	je     81f5568 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x882>
 81f555d:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 81f5561:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 81f5565:	83 c1 02             	add    $0x2,%ecx
 81f5568:	83 e3 01             	and    $0x1,%ebx
 81f556b:	85 db                	test   %ebx,%ebx
 81f556d:	74 07                	je     81f5576 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x890>
 81f556f:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 81f5573:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 81f5576:	8d 85 d0 f0 ff ff    	lea    -0xf30(%ebp),%eax
 81f557c:	8d 95 d8 f7 ff ff    	lea    -0x828(%ebp),%edx
 81f5582:	bb 78 00 00 00       	mov    $0x78,%ebx
 81f5587:	89 c1                	mov    %eax,%ecx
 81f5589:	83 e1 01             	and    $0x1,%ecx
 81f558c:	85 c9                	test   %ecx,%ecx
 81f558e:	74 0e                	je     81f559e <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x8b8>
 81f5590:	0f b6 0a             	movzbl (%edx),%ecx
 81f5593:	88 08                	mov    %cl,(%eax)
 81f5595:	83 c0 01             	add    $0x1,%eax
 81f5598:	83 c2 01             	add    $0x1,%edx
 81f559b:	83 eb 01             	sub    $0x1,%ebx
 81f559e:	89 c1                	mov    %eax,%ecx
 81f55a0:	83 e1 02             	and    $0x2,%ecx
 81f55a3:	85 c9                	test   %ecx,%ecx
 81f55a5:	74 0f                	je     81f55b6 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x8d0>
 81f55a7:	0f b7 0a             	movzwl (%edx),%ecx
 81f55aa:	66 89 08             	mov    %cx,(%eax)
 81f55ad:	83 c0 02             	add    $0x2,%eax
 81f55b0:	83 c2 02             	add    $0x2,%edx
 81f55b3:	83 eb 02             	sub    $0x2,%ebx
 81f55b6:	89 d9                	mov    %ebx,%ecx
 81f55b8:	c1 e9 02             	shr    $0x2,%ecx
 81f55bb:	89 c7                	mov    %eax,%edi
 81f55bd:	89 d6                	mov    %edx,%esi
 81f55bf:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 81f55c1:	89 f2                	mov    %esi,%edx
 81f55c3:	89 f8                	mov    %edi,%eax
 81f55c5:	b9 00 00 00 00       	mov    $0x0,%ecx
 81f55ca:	89 de                	mov    %ebx,%esi
 81f55cc:	83 e6 02             	and    $0x2,%esi
 81f55cf:	85 f6                	test   %esi,%esi
 81f55d1:	74 0b                	je     81f55de <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x8f8>
 81f55d3:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 81f55d7:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 81f55db:	83 c1 02             	add    $0x2,%ecx
 81f55de:	83 e3 01             	and    $0x1,%ebx
 81f55e1:	85 db                	test   %ebx,%ebx
 81f55e3:	74 07                	je     81f55ec <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x906>
 81f55e5:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 81f55e9:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 81f55ec:	8d 85 45 ea ff ff    	lea    -0x15bb(%ebp),%eax
 81f55f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f55f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f55f9:	89 04 24             	mov    %eax,(%esp)
 81f55fc:	e8 03 66 45 00       	call   864bc04 <_ZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARAC>
 81f5601:	84 c0                	test   %al,%al
 81f5603:	74 47                	je     81f564c <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x966>
 81f5605:	0f b7 85 76 ea ff ff 	movzwl -0x158a(%ebp),%eax
 81f560c:	66 83 f8 1d          	cmp    $0x1d,%ax
 81f5610:	7e 3a                	jle    81f564c <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x966>
 81f5612:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5615:	89 04 24             	mov    %eax,(%esp)
 81f5618:	e8 3d 43 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f561d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f5624:	00 
 81f5625:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f562c:	00 
 81f562d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f5634:	00 
 81f5635:	c7 44 24 08 e2 00 00 	movl   $0xe2,0x8(%esp)
 81f563c:	00 
 81f563d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f5640:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f5644:	89 04 24             	mov    %eax,(%esp)
 81f5647:	e8 32 36 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f564c:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f564f:	05 24 0b 00 00       	add    $0xb24,%eax
 81f5654:	89 04 24             	mov    %eax,(%esp)
 81f5657:	e8 70 75 03 00       	call   822cbcc <_ZN13CBattle_Field17GetCurrentMapInfoEv>
 81f565c:	83 c0 4c             	add    $0x4c,%eax
 81f565f:	89 04 24             	mov    %eax,(%esp)
 81f5662:	e8 1f 75 03 00       	call   822cb86 <_ZN25stMapMonsterKillChecker_t24getUseSkillMaterialCountEv>
 81f5667:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81f566a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f566d:	89 04 24             	mov    %eax,(%esp)
 81f5670:	e8 f3 10 3c 00       	call   85b6768 <_ZN6CParty17GetMapPlayingTimeEv>
 81f5675:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81f5678:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81f567f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81f5682:	89 85 14 e3 ff ff    	mov    %eax,-0x1cec(%ebp)
 81f5688:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81f568d:	8b 85 14 e3 ff ff    	mov    -0x1cec(%ebp),%eax
 81f5693:	f7 e2                	mul    %edx
 81f5695:	89 d0                	mov    %edx,%eax
 81f5697:	c1 e8 06             	shr    $0x6,%eax
 81f569a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81f569d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81f56a0:	89 95 14 e3 ff ff    	mov    %edx,-0x1cec(%ebp)
 81f56a6:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 81f56ab:	8b 85 14 e3 ff ff    	mov    -0x1cec(%ebp),%eax
 81f56b1:	f7 e2                	mul    %edx
 81f56b3:	89 d0                	mov    %edx,%eax
 81f56b5:	c1 e8 03             	shr    $0x3,%eax
 81f56b8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81f56bb:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 81f56be:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 81f56c3:	89 c8                	mov    %ecx,%eax
 81f56c5:	f7 e2                	mul    %edx
 81f56c7:	c1 ea 03             	shr    $0x3,%edx
 81f56ca:	89 d0                	mov    %edx,%eax
 81f56cc:	c1 e0 02             	shl    $0x2,%eax
 81f56cf:	01 d0                	add    %edx,%eax
 81f56d1:	01 c0                	add    %eax,%eax
 81f56d3:	89 ca                	mov    %ecx,%edx
 81f56d5:	29 c2                	sub    %eax,%edx
 81f56d7:	85 d2                	test   %edx,%edx
 81f56d9:	74 04                	je     81f56df <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x9f9>
 81f56db:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 81f56df:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81f56e2:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 81f56e5:	0f 83 9b 01 00 00    	jae    81f5886 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xba0>
 81f56eb:	8d 85 50 f8 ff ff    	lea    -0x7b0(%ebp),%eax
 81f56f1:	89 04 24             	mov    %eax,(%esp)
 81f56f4:	e8 53 95 03 00       	call   822ec4c <_ZN11CHARAC_DATAC1Ev>
 81f56f9:	8d 85 c6 fe ff ff    	lea    -0x13a(%ebp),%eax
 81f56ff:	89 04 24             	mov    %eax,(%esp)
 81f5702:	e8 a7 96 03 00       	call   822edae <_ZN15TAG_CHARAC_DATAC1Ev>
 81f5707:	8d 95 42 e3 ff ff    	lea    -0x1cbe(%ebp),%edx
 81f570d:	bb 03 07 00 00       	mov    $0x703,%ebx
 81f5712:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5717:	89 d1                	mov    %edx,%ecx
 81f5719:	83 e1 02             	and    $0x2,%ecx
 81f571c:	85 c9                	test   %ecx,%ecx
 81f571e:	74 09                	je     81f5729 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xa43>
 81f5720:	66 89 02             	mov    %ax,(%edx)
 81f5723:	83 c2 02             	add    $0x2,%edx
 81f5726:	83 eb 02             	sub    $0x2,%ebx
 81f5729:	89 d9                	mov    %ebx,%ecx
 81f572b:	c1 e9 02             	shr    $0x2,%ecx
 81f572e:	89 d7                	mov    %edx,%edi
 81f5730:	f3 ab                	rep stos %eax,%es:(%edi)
 81f5732:	89 fa                	mov    %edi,%edx
 81f5734:	89 d9                	mov    %ebx,%ecx
 81f5736:	83 e1 02             	and    $0x2,%ecx
 81f5739:	85 c9                	test   %ecx,%ecx
 81f573b:	74 06                	je     81f5743 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xa5d>
 81f573d:	66 89 02             	mov    %ax,(%edx)
 81f5740:	83 c2 02             	add    $0x2,%edx
 81f5743:	89 d9                	mov    %ebx,%ecx
 81f5745:	83 e1 01             	and    $0x1,%ecx
 81f5748:	85 c9                	test   %ecx,%ecx
 81f574a:	74 05                	je     81f5751 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xa6b>
 81f574c:	88 02                	mov    %al,(%edx)
 81f574e:	83 c2 01             	add    $0x1,%edx
 81f5751:	8d 85 4e e3 ff ff    	lea    -0x1cb2(%ebp),%eax
 81f5757:	8d 95 50 f8 ff ff    	lea    -0x7b0(%ebp),%edx
 81f575d:	bb 76 06 00 00       	mov    $0x676,%ebx
 81f5762:	89 c1                	mov    %eax,%ecx
 81f5764:	83 e1 02             	and    $0x2,%ecx
 81f5767:	85 c9                	test   %ecx,%ecx
 81f5769:	74 0f                	je     81f577a <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xa94>
 81f576b:	0f b7 0a             	movzwl (%edx),%ecx
 81f576e:	66 89 08             	mov    %cx,(%eax)
 81f5771:	83 c0 02             	add    $0x2,%eax
 81f5774:	83 c2 02             	add    $0x2,%edx
 81f5777:	83 eb 02             	sub    $0x2,%ebx
 81f577a:	89 d9                	mov    %ebx,%ecx
 81f577c:	c1 e9 02             	shr    $0x2,%ecx
 81f577f:	89 c7                	mov    %eax,%edi
 81f5781:	89 d6                	mov    %edx,%esi
 81f5783:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 81f5785:	89 f2                	mov    %esi,%edx
 81f5787:	89 f8                	mov    %edi,%eax
 81f5789:	b9 00 00 00 00       	mov    $0x0,%ecx
 81f578e:	89 de                	mov    %ebx,%esi
 81f5790:	83 e6 02             	and    $0x2,%esi
 81f5793:	85 f6                	test   %esi,%esi
 81f5795:	74 0b                	je     81f57a2 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xabc>
 81f5797:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 81f579b:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 81f579f:	83 c1 02             	add    $0x2,%ecx
 81f57a2:	83 e3 01             	and    $0x1,%ebx
 81f57a5:	85 db                	test   %ebx,%ebx
 81f57a7:	74 07                	je     81f57b0 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xaca>
 81f57a9:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 81f57ad:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 81f57b0:	8d 85 cd e9 ff ff    	lea    -0x1633(%ebp),%eax
 81f57b6:	8d 95 c6 fe ff ff    	lea    -0x13a(%ebp),%edx
 81f57bc:	bb 78 00 00 00       	mov    $0x78,%ebx
 81f57c1:	89 c1                	mov    %eax,%ecx
 81f57c3:	83 e1 01             	and    $0x1,%ecx
 81f57c6:	85 c9                	test   %ecx,%ecx
 81f57c8:	74 0e                	je     81f57d8 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xaf2>
 81f57ca:	0f b6 0a             	movzbl (%edx),%ecx
 81f57cd:	88 08                	mov    %cl,(%eax)
 81f57cf:	83 c0 01             	add    $0x1,%eax
 81f57d2:	83 c2 01             	add    $0x1,%edx
 81f57d5:	83 eb 01             	sub    $0x1,%ebx
 81f57d8:	89 c1                	mov    %eax,%ecx
 81f57da:	83 e1 02             	and    $0x2,%ecx
 81f57dd:	85 c9                	test   %ecx,%ecx
 81f57df:	74 0f                	je     81f57f0 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xb0a>
 81f57e1:	0f b7 0a             	movzwl (%edx),%ecx
 81f57e4:	66 89 08             	mov    %cx,(%eax)
 81f57e7:	83 c0 02             	add    $0x2,%eax
 81f57ea:	83 c2 02             	add    $0x2,%edx
 81f57ed:	83 eb 02             	sub    $0x2,%ebx
 81f57f0:	89 d9                	mov    %ebx,%ecx
 81f57f2:	c1 e9 02             	shr    $0x2,%ecx
 81f57f5:	89 c7                	mov    %eax,%edi
 81f57f7:	89 d6                	mov    %edx,%esi
 81f57f9:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 81f57fb:	89 f2                	mov    %esi,%edx
 81f57fd:	89 f8                	mov    %edi,%eax
 81f57ff:	b9 00 00 00 00       	mov    $0x0,%ecx
 81f5804:	89 de                	mov    %ebx,%esi
 81f5806:	83 e6 02             	and    $0x2,%esi
 81f5809:	85 f6                	test   %esi,%esi
 81f580b:	74 0b                	je     81f5818 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xb32>
 81f580d:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 81f5811:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 81f5815:	83 c1 02             	add    $0x2,%ecx
 81f5818:	83 e3 01             	and    $0x1,%ebx
 81f581b:	85 db                	test   %ebx,%ebx
 81f581d:	74 07                	je     81f5826 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xb40>
 81f581f:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 81f5823:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 81f5826:	8d 85 42 e3 ff ff    	lea    -0x1cbe(%ebp),%eax
 81f582c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5830:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5833:	89 04 24             	mov    %eax,(%esp)
 81f5836:	e8 c9 63 45 00       	call   864bc04 <_ZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARAC>
 81f583b:	84 c0                	test   %al,%al
 81f583d:	74 47                	je     81f5886 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xba0>
 81f583f:	0f b7 85 73 e3 ff ff 	movzwl -0x1c8d(%ebp),%eax
 81f5846:	66 83 f8 1d          	cmp    $0x1d,%ax
 81f584a:	7e 3a                	jle    81f5886 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xba0>
 81f584c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f584f:	89 04 24             	mov    %eax,(%esp)
 81f5852:	e8 03 41 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f5857:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f585e:	00 
 81f585f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f5866:	00 
 81f5867:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f586e:	00 
 81f586f:	c7 44 24 08 e3 00 00 	movl   $0xe3,0x8(%esp)
 81f5876:	00 
 81f5877:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f587a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f587e:	89 04 24             	mov    %eax,(%esp)
 81f5881:	e8 f8 33 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f5886:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5889:	89 04 24             	mov    %eax,(%esp)
 81f588c:	e8 d7 0e 3c 00       	call   85b6768 <_ZN6CParty17GetMapPlayingTimeEv>
 81f5891:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81f5894:	81 7d c0 0f 27 00 00 	cmpl   $0x270f,-0x40(%ebp)
 81f589b:	77 17                	ja     81f58b4 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xbce>
 81f589d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f58a0:	89 04 24             	mov    %eax,(%esp)
 81f58a3:	e8 10 4a ee ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81f58a8:	83 f8 0a             	cmp    $0xa,%eax
 81f58ab:	7e 07                	jle    81f58b4 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xbce>
 81f58ad:	b8 01 00 00 00       	mov    $0x1,%eax
 81f58b2:	eb 05                	jmp    81f58b9 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xbd3>
 81f58b4:	b8 00 00 00 00       	mov    $0x0,%eax
 81f58b9:	84 c0                	test   %al,%al
 81f58bb:	74 6a                	je     81f5927 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xc41>
 81f58bd:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 81f58c4:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 81f58c7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81f58ca:	89 85 14 e3 ff ff    	mov    %eax,-0x1cec(%ebp)
 81f58d0:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 81f58d5:	8b 85 14 e3 ff ff    	mov    -0x1cec(%ebp),%eax
 81f58db:	f7 e2                	mul    %edx
 81f58dd:	89 d0                	mov    %edx,%eax
 81f58df:	c1 e8 06             	shr    $0x6,%eax
 81f58e2:	89 ca                	mov    %ecx,%edx
 81f58e4:	29 c2                	sub    %eax,%edx
 81f58e6:	89 d0                	mov    %edx,%eax
 81f58e8:	83 c0 0a             	add    $0xa,%eax
 81f58eb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81f58ee:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 81f58f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f58f4:	89 04 24             	mov    %eax,(%esp)
 81f58f7:	e8 5e 40 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f58fc:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f5903:	00 
 81f5904:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f590b:	00 
 81f590c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81f5910:	c7 44 24 08 e5 00 00 	movl   $0xe5,0x8(%esp)
 81f5917:	00 
 81f5918:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f591b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f591f:	89 04 24             	mov    %eax,(%esp)
 81f5922:	e8 57 33 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f5927:	81 7d c0 1f 4e 00 00 	cmpl   $0x4e1f,-0x40(%ebp)
 81f592e:	77 17                	ja     81f5947 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xc61>
 81f5930:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5933:	89 04 24             	mov    %eax,(%esp)
 81f5936:	e8 7d 49 ee ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81f593b:	83 f8 0a             	cmp    $0xa,%eax
 81f593e:	7e 07                	jle    81f5947 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xc61>
 81f5940:	b8 01 00 00 00       	mov    $0x1,%eax
 81f5945:	eb 05                	jmp    81f594c <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xc66>
 81f5947:	b8 00 00 00 00       	mov    $0x0,%eax
 81f594c:	84 c0                	test   %al,%al
 81f594e:	74 3a                	je     81f598a <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xca4>
 81f5950:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5953:	89 04 24             	mov    %eax,(%esp)
 81f5956:	e8 ff 3f f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f595b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f5962:	00 
 81f5963:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f596a:	00 
 81f596b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f5972:	00 
 81f5973:	c7 44 24 08 e4 00 00 	movl   $0xe4,0x8(%esp)
 81f597a:	00 
 81f597b:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f597e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f5982:	89 04 24             	mov    %eax,(%esp)
 81f5985:	e8 f4 32 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f598a:	c7 85 58 f1 ff ff 00 	movl   $0x0,-0xea8(%ebp)
 81f5991:	00 00 00 
 81f5994:	c7 85 54 f1 ff ff 00 	movl   $0x0,-0xeac(%ebp)
 81f599b:	00 00 00 
 81f599e:	c7 85 50 f1 ff ff 00 	movl   $0x0,-0xeb0(%ebp)
 81f59a5:	00 00 00 
 81f59a8:	c7 85 4c f1 ff ff 00 	movl   $0x0,-0xeb4(%ebp)
 81f59af:	00 00 00 
 81f59b2:	c7 85 48 f1 ff ff 00 	movl   $0x0,-0xeb8(%ebp)
 81f59b9:	00 00 00 
 81f59bc:	8d 85 48 f1 ff ff    	lea    -0xeb8(%ebp),%eax
 81f59c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f59c6:	8b 45 10             	mov    0x10(%ebp),%eax
 81f59c9:	89 04 24             	mov    %eax,(%esp)
 81f59cc:	e8 1f 77 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f59d1:	83 f0 01             	xor    $0x1,%eax
 81f59d4:	84 c0                	test   %al,%al
 81f59d6:	74 29                	je     81f5a01 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xd1b>
 81f59d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f59df:	00 
 81f59e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f59e7:	00 
 81f59e8:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f59ef:	08 
 81f59f0:	c7 04 24 0e 82 00 00 	movl   $0x820e,(%esp)
 81f59f7:	e8 db ae 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f59fc:	e9 a9 03 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5a01:	8d 85 58 f1 ff ff    	lea    -0xea8(%ebp),%eax
 81f5a07:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5a0b:	8b 45 10             	mov    0x10(%ebp),%eax
 81f5a0e:	89 04 24             	mov    %eax,(%esp)
 81f5a11:	e8 da 76 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f5a16:	83 f0 01             	xor    $0x1,%eax
 81f5a19:	84 c0                	test   %al,%al
 81f5a1b:	74 29                	je     81f5a46 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xd60>
 81f5a1d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5a24:	00 
 81f5a25:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5a2c:	00 
 81f5a2d:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f5a34:	08 
 81f5a35:	c7 04 24 0f 82 00 00 	movl   $0x820f,(%esp)
 81f5a3c:	e8 96 ae 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5a41:	e9 64 03 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5a46:	8d 85 54 f1 ff ff    	lea    -0xeac(%ebp),%eax
 81f5a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5a50:	8b 45 10             	mov    0x10(%ebp),%eax
 81f5a53:	89 04 24             	mov    %eax,(%esp)
 81f5a56:	e8 95 76 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f5a5b:	83 f0 01             	xor    $0x1,%eax
 81f5a5e:	84 c0                	test   %al,%al
 81f5a60:	74 29                	je     81f5a8b <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xda5>
 81f5a62:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5a69:	00 
 81f5a6a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5a71:	00 
 81f5a72:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f5a79:	08 
 81f5a7a:	c7 04 24 10 82 00 00 	movl   $0x8210,(%esp)
 81f5a81:	e8 51 ae 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5a86:	e9 1f 03 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5a8b:	8d 85 50 f1 ff ff    	lea    -0xeb0(%ebp),%eax
 81f5a91:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5a95:	8b 45 10             	mov    0x10(%ebp),%eax
 81f5a98:	89 04 24             	mov    %eax,(%esp)
 81f5a9b:	e8 50 76 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f5aa0:	83 f0 01             	xor    $0x1,%eax
 81f5aa3:	84 c0                	test   %al,%al
 81f5aa5:	74 29                	je     81f5ad0 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xdea>
 81f5aa7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5aae:	00 
 81f5aaf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5ab6:	00 
 81f5ab7:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f5abe:	08 
 81f5abf:	c7 04 24 11 82 00 00 	movl   $0x8211,(%esp)
 81f5ac6:	e8 0c ae 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5acb:	e9 da 02 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5ad0:	8d 85 4c f1 ff ff    	lea    -0xeb4(%ebp),%eax
 81f5ad6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5ada:	8b 45 10             	mov    0x10(%ebp),%eax
 81f5add:	89 04 24             	mov    %eax,(%esp)
 81f5ae0:	e8 0b 76 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f5ae5:	83 f0 01             	xor    $0x1,%eax
 81f5ae8:	84 c0                	test   %al,%al
 81f5aea:	74 29                	je     81f5b15 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xe2f>
 81f5aec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5af3:	00 
 81f5af4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5afb:	00 
 81f5afc:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f5b03:	08 
 81f5b04:	c7 04 24 12 82 00 00 	movl   $0x8212,(%esp)
 81f5b0b:	e8 c7 ad 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5b10:	e9 95 02 00 00       	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5b15:	8b 85 48 f1 ff ff    	mov    -0xeb8(%ebp),%eax
 81f5b1b:	85 c0                	test   %eax,%eax
 81f5b1d:	0f 85 ce 00 00 00    	jne    81f5bf1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf0b>
 81f5b23:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5b26:	89 04 24             	mov    %eax,(%esp)
 81f5b29:	e8 ba 7d 03 00       	call   822d8e8 <_ZN6CParty16GetUsedCoinCountEv>
 81f5b2e:	85 c0                	test   %eax,%eax
 81f5b30:	0f 85 bb 00 00 00    	jne    81f5bf1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf0b>
 81f5b36:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5b39:	05 24 0b 00 00       	add    $0xb24,%eax
 81f5b3e:	89 04 24             	mov    %eax,(%esp)
 81f5b41:	e8 d6 82 11 00       	call   830de1c <_ZN13CBattle_Field21GetTotalSkillMaterialEv>
 81f5b46:	85 c0                	test   %eax,%eax
 81f5b48:	0f 85 a3 00 00 00    	jne    81f5bf1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf0b>
 81f5b4e:	8b 85 50 f1 ff ff    	mov    -0xeb0(%ebp),%eax
 81f5b54:	85 c0                	test   %eax,%eax
 81f5b56:	0f 84 95 00 00 00    	je     81f5bf1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf0b>
 81f5b5c:	8b 85 58 f1 ff ff    	mov    -0xea8(%ebp),%eax
 81f5b62:	89 85 34 e3 ff ff    	mov    %eax,-0x1ccc(%ebp)
 81f5b68:	db 85 34 e3 ff ff    	fildl  -0x1ccc(%ebp)
 81f5b6e:	8b 85 50 f1 ff ff    	mov    -0xeb0(%ebp),%eax
 81f5b74:	89 85 34 e3 ff ff    	mov    %eax,-0x1ccc(%ebp)
 81f5b7a:	db 85 34 e3 ff ff    	fildl  -0x1ccc(%ebp)
 81f5b80:	de f9                	fdivrp %st,%st(1)
 81f5b82:	d9 05 54 63 bd 08    	flds   0x8bd6354
 81f5b88:	de c9                	fmulp  %st,%st(1)
 81f5b8a:	d9 05 58 63 bd 08    	flds   0x8bd6358
 81f5b90:	d9 c9                	fxch   %st(1)
 81f5b92:	da e9                	fucompp
 81f5b94:	df e0                	fnstsw %ax
 81f5b96:	9e                   	sahf
 81f5b97:	0f 93 c0             	setae  %al
 81f5b9a:	84 c0                	test   %al,%al
 81f5b9c:	74 53                	je     81f5bf1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf0b>
 81f5b9e:	8b 85 4c f1 ff ff    	mov    -0xeb4(%ebp),%eax
 81f5ba4:	85 c0                	test   %eax,%eax
 81f5ba6:	74 49                	je     81f5bf1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf0b>
 81f5ba8:	8b 85 54 f1 ff ff    	mov    -0xeac(%ebp),%eax
 81f5bae:	89 85 34 e3 ff ff    	mov    %eax,-0x1ccc(%ebp)
 81f5bb4:	db 85 34 e3 ff ff    	fildl  -0x1ccc(%ebp)
 81f5bba:	8b 85 4c f1 ff ff    	mov    -0xeb4(%ebp),%eax
 81f5bc0:	89 85 34 e3 ff ff    	mov    %eax,-0x1ccc(%ebp)
 81f5bc6:	db 85 34 e3 ff ff    	fildl  -0x1ccc(%ebp)
 81f5bcc:	de f9                	fdivrp %st,%st(1)
 81f5bce:	d9 05 54 63 bd 08    	flds   0x8bd6354
 81f5bd4:	de c9                	fmulp  %st,%st(1)
 81f5bd6:	d9 05 58 63 bd 08    	flds   0x8bd6358
 81f5bdc:	d9 c9                	fxch   %st(1)
 81f5bde:	da e9                	fucompp
 81f5be0:	df e0                	fnstsw %ax
 81f5be2:	9e                   	sahf
 81f5be3:	0f 93 c0             	setae  %al
 81f5be6:	84 c0                	test   %al,%al
 81f5be8:	74 07                	je     81f5bf1 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf0b>
 81f5bea:	b8 01 00 00 00       	mov    $0x1,%eax
 81f5bef:	eb 05                	jmp    81f5bf6 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf10>
 81f5bf1:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5bf6:	84 c0                	test   %al,%al
 81f5bf8:	0f 84 48 01 00 00    	je     81f5d46 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x1060>
 81f5bfe:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 81f5c02:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81f5c09:	e9 e4 00 00 00       	jmp    81f5cf2 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x100c>
 81f5c0e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81f5c11:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5c15:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5c18:	89 04 24             	mov    %eax,(%esp)
 81f5c1b:	e8 48 fc f4 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81f5c20:	84 c0                	test   %al,%al
 81f5c22:	0f 84 c6 00 00 00    	je     81f5cee <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x1008>
 81f5c28:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5c2b:	89 04 24             	mov    %eax,(%esp)
 81f5c2e:	e8 e9 7c 03 00       	call   822d91c <_ZN6CParty9GetMemberEv>
 81f5c33:	89 c1                	mov    %eax,%ecx
 81f5c35:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81f5c38:	89 d0                	mov    %edx,%eax
 81f5c3a:	01 c0                	add    %eax,%eax
 81f5c3c:	01 d0                	add    %edx,%eax
 81f5c3e:	c1 e0 03             	shl    $0x3,%eax
 81f5c41:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f5c44:	8b 00                	mov    (%eax),%eax
 81f5c46:	89 04 24             	mov    %eax,(%esp)
 81f5c49:	e8 30 46 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f5c4e:	8d 95 3e ff ff ff    	lea    -0xc2(%ebp),%edx
 81f5c54:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 81f5c5b:	00 
 81f5c5c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5c63:	00 
 81f5c64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5c68:	89 14 24             	mov    %edx,(%esp)
 81f5c6b:	e8 a8 5c 30 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81f5c70:	83 ec 04             	sub    $0x4,%esp
 81f5c73:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 81f5c79:	3d d4 2a 00 00       	cmp    $0x2ad4,%eax
 81f5c7e:	74 58                	je     81f5cd8 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xff2>
 81f5c80:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5c83:	89 04 24             	mov    %eax,(%esp)
 81f5c86:	e8 91 7c 03 00       	call   822d91c <_ZN6CParty9GetMemberEv>
 81f5c8b:	89 c1                	mov    %eax,%ecx
 81f5c8d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81f5c90:	89 d0                	mov    %edx,%eax
 81f5c92:	01 c0                	add    %eax,%eax
 81f5c94:	01 d0                	add    %edx,%eax
 81f5c96:	c1 e0 03             	shl    $0x3,%eax
 81f5c99:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81f5c9c:	8b 00                	mov    (%eax),%eax
 81f5c9e:	89 04 24             	mov    %eax,(%esp)
 81f5ca1:	e8 d8 45 ee ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81f5ca6:	8d 95 7b ff ff ff    	lea    -0x85(%ebp),%edx
 81f5cac:	c7 44 24 0c 0e 00 00 	movl   $0xe,0xc(%esp)
 81f5cb3:	00 
 81f5cb4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5cbb:	00 
 81f5cbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5cc0:	89 14 24             	mov    %edx,(%esp)
 81f5cc3:	e8 50 5c 30 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81f5cc8:	83 ec 04             	sub    $0x4,%esp
 81f5ccb:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 81f5cd1:	3d 9e 32 00 00       	cmp    $0x329e,%eax
 81f5cd6:	75 07                	jne    81f5cdf <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xff9>
 81f5cd8:	b8 01 00 00 00       	mov    $0x1,%eax
 81f5cdd:	eb 05                	jmp    81f5ce4 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xffe>
 81f5cdf:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5ce4:	84 c0                	test   %al,%al
 81f5ce6:	74 06                	je     81f5cee <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x1008>
 81f5ce8:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 81f5cec:	eb 13                	jmp    81f5d01 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x101b>
 81f5cee:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 81f5cf2:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 81f5cf6:	0f 9e c0             	setle  %al
 81f5cf9:	84 c0                	test   %al,%al
 81f5cfb:	0f 85 0d ff ff ff    	jne    81f5c0e <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0xf28>
 81f5d01:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 81f5d05:	83 f0 01             	xor    $0x1,%eax
 81f5d08:	84 c0                	test   %al,%al
 81f5d0a:	74 3a                	je     81f5d46 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x1060>
 81f5d0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5d0f:	89 04 24             	mov    %eax,(%esp)
 81f5d12:	e8 43 3c f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81f5d17:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81f5d1e:	00 
 81f5d1f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81f5d26:	00 
 81f5d27:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81f5d2e:	00 
 81f5d2f:	c7 44 24 08 a2 01 00 	movl   $0x1a2,0x8(%esp)
 81f5d36:	00 
 81f5d37:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f5d3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f5d3e:	89 04 24             	mov    %eax,(%esp)
 81f5d41:	e8 38 2f f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81f5d46:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5d4d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5d50:	89 04 24             	mov    %eax,(%esp)
 81f5d53:	e8 80 e2 3b 00       	call   85b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>
 81f5d58:	83 f0 01             	xor    $0x1,%eax
 81f5d5b:	84 c0                	test   %al,%al
 81f5d5d:	74 07                	je     81f5d66 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x1080>
 81f5d5f:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5d64:	eb 44                	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5d69:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5d6d:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81f5d70:	89 04 24             	mov    %eax,(%esp)
 81f5d73:	e8 9a c6 3b 00       	call   85b2412 <_ZN6CParty13SetPlayResultEP5CUser>
 81f5d78:	83 f0 01             	xor    $0x1,%eax
 81f5d7b:	84 c0                	test   %al,%al
 81f5d7d:	74 26                	je     81f5da5 <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10bf>
 81f5d7f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5d86:	00 
 81f5d87:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5d8e:	00 
 81f5d8f:	c7 44 24 04 00 01 bd 	movl   $0x8bd0100,0x4(%esp)
 81f5d96:	08 
 81f5d97:	c7 04 24 35 82 00 00 	movl   $0x8235,(%esp)
 81f5d9e:	e8 34 ab 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5da3:	eb 05                	jmp    81f5daa <_ZN24DisPatcher_SetPlayResult12dispatch_sigEP5CUserR9PacketBuf+0x10c4>
 81f5da5:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5daa:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81f5dad:	83 c4 00             	add    $0x0,%esp
 81f5db0:	5b                   	pop    %ebx
 81f5db1:	5e                   	pop    %esi
 81f5db2:	5f                   	pop    %edi
 81f5db3:	5d                   	pop    %ebp
 81f5db4:	c3                   	ret
 81f5db5:	90                   	nop

```

```c
// DisPatcher_SetPlayResult::dispatch_sig @ 0x81f4ce6

/* WARNING: Removing unreachable block (ram,0x081f55e5) */
/* WARNING: Removing unreachable block (ram,0x081f5590) */
/* WARNING: Removing unreachable block (ram,0x081f57a9) */
/* WARNING: Removing unreachable block (ram,0x081f55a7) */
/* WARNING: Removing unreachable block (ram,0x081f55d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPlayResult::dispatch_sig
          (DisPatcher_SetPlayResult *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  CParty CVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CHackAnalyzer *pCVar6;
  uint uVar7;
  undefined4 uVar8;
  TimerQueue *pTVar9;
  CHARAC_DATA *pCVar10;
  TAG_CHARAC_DATA *pTVar11;
  SIG_LOAD_CHARAC *pSVar12;
  CHARAC_DATA *pCVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  TAG_CHARAC_DATA *pTVar16;
  bool bVar17;
  byte bVar18;
  undefined1 auStackY_2caa [3982];
  ulonglong local_1cdc;
  undefined1 local_1cc2 [12];
  undefined2 local_1cb6;
  undefined4 auStack_1cb4 [8];
  short local_1c91;
  TAG_CHARAC_DATA local_1637;
  TAG_CHARAC_DATA local_1636 [119];
  SIG_LOAD_CHARAC local_15bf;
  SIG_LOAD_CHARAC local_15be [11];
  CHARAC_DATA local_15b3;
  CHARAC_DATA local_15b2 [36];
  short local_158e;
  undefined4 local_f34 [30];
  int local_ebc;
  int local_eb8;
  int local_eb4;
  int local_eb0;
  int local_eac;
  int local_ea8;
  char local_ea3;
  CHARAC_DATA local_ea2;
  CHARAC_DATA local_ea1 [1653];
  TAG_CHARAC_DATA local_82c [120];
  undefined1 local_7b4 [1654];
  TAG_CHARAC_DATA local_13e;
  TAG_CHARAC_DATA local_13d [119];
  undefined1 local_c6 [2];
  int local_c4;
  undefined1 local_89 [2];
  int local_87;
  CParty *local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  char local_21;
  int local_20;
  
  bVar18 = 0;
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 5) {
    CUser::GetPartyIndex(param_1);
    iVar3 = G_CGameManager();
    local_4c = (CParty *)CGameManager::GetParty(iVar3);
    if (local_4c == (CParty *)0x0) {
      uVar4 = LineFunc(0x8155,
                       "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
    else if (*(int *)(local_4c + 0xcd8) == 1) {
      uVar4 = 0;
    }
    else if (((local_4c == (CParty *)0x0) || (local_40 = *(int *)(local_4c + 0xcac), local_40 == 0))
            || (*(char *)(local_40 + 0x89f) < '\x01')) {
      GameResultType::Clear((GameResultType *)(local_4c + 0x17f4));
      cVar1 = PacketBuf::get_byte(param_2,(char *)(local_4c + 0x17fd));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,(char *)(local_4c + 0x17fe));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,(ushort *)(local_4c + 0x183e));
          if (cVar1 == '\x01') {
            local_ea3 = '\0';
            cVar1 = PacketBuf::get_byte(param_2,&local_ea3);
            if (cVar1 == '\x01') {
              local_3c = 0;
              while( true ) {
                if ((local_3c < local_ea3) && (local_3c < 4)) {
                  bVar17 = true;
                }
                else {
                  bVar17 = false;
                }
                if (!bVar17) break;
                cVar1 = PacketBuf::get_short
                                  (param_2,(ushort *)(local_4c + (local_3c + 0x300) * 8 + 8));
                if (cVar1 != '\x01') {
                  uVar4 = LineFunc(0x817e,
                                   "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar4;
                }
                cVar1 = PacketBuf::get_int(param_2,(int *)(local_4c + (local_3c + 0x300) * 8 + 0xc))
                ;
                if (cVar1 != '\x01') {
                  uVar4 = LineFunc(0x8181,
                                   "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar4;
                }
                local_3c = local_3c + 1;
              }
              uVar5 = CParty::GetMapPlayingTime(local_4c);
              cUserHistoryLog::MapClear
                        ((cUserHistoryLog *)(param_1 + 0x79700),*(ushort *)(local_4c + 0x183e),
                         uVar5 / 1000,0);
              local_ea8 = 0;
              cVar1 = PacketBuf::get_int(param_2,&local_ea8);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x818b,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              if (local_4c != (CParty *)0x0) {
                cVar1 = CParty::checkBossRoom(local_4c);
                iVar3 = local_ea8;
                if ((cVar1 == '\x01') || (local_ea8 == 0)) {
                  bVar17 = false;
                }
                else {
                  bVar17 = true;
                }
                if (bVar17) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x1fb,iVar3,0,0);
                }
              }
              cVar1 = PacketBuf::get_int(param_2,(uint *)(local_4c + 0x1840));
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8195,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              if (10000 < *(uint *)(local_4c + 0x1840)) {
                uVar5 = *(uint *)(local_4c + 0x1840);
                local_34 = *(uint *)(local_4c + 0x1840) % 10000;
                local_38 = uVar5 / 10000;
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x78,1,uVar5 / 10000,0);
                *(uint *)(local_4c + 0x1840) = local_34;
              }
              iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
              if ((iVar3 == 3) ||
                 ((iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1), iVar3 == 4
                  && (cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1),
                     cVar1 == '\x02')))) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                local_1cdc = (ulonglong)*(uint *)(local_4c + 0x1840);
                local_1cdc._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6320 * (double)local_1cdc);
                *(undefined4 *)(local_4c + 0x1840) = (undefined4)local_1cdc;
              }
              else {
                local_1cdc = (ulonglong)*(uint *)(local_4c + 0x1840);
                local_1cdc._0_4_ = (undefined4)(longlong)ROUND(_DAT_08bd6328 * (double)local_1cdc);
                *(undefined4 *)(local_4c + 0x1840) = (undefined4)local_1cdc;
              }
              uVar5 = *(uint *)(local_4c + 0x1840);
              uVar7 = CParty::GetMapPlayingTime(local_4c);
              if (uVar7 / 1000 < uVar5) {
                uVar4 = *(undefined4 *)(local_4c + 0x1840);
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x75,1,uVar4,0);
              }
              uVar4 = CBattle_Field::get_dungeon_index((CBattle_Field *)(local_4c + 0xb24));
              *(undefined4 *)(local_4c + 0x17f8) = uVar4;
              CVar2 = (CParty)CBattle_Field::get_dungeon_diff((CBattle_Field *)(local_4c + 0xb24));
              local_4c[0x17fc] = CVar2;
              CParty::IncreaseSetPlayResultCount(local_4c,param_1);
              cVar1 = CParty::get_dungeon_clear_state(local_4c);
              if (cVar1 == '\0') {
                cVar1 = CBattle_Field::IsClearDungeon((CBattle_Field *)(local_4c + 0xb24));
                if (cVar1 != '\x01') {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x196,1,0,0);
                  return 0;
                }
                uVar4 = CParty::gen_timer_key(local_4c,0x29);
                uVar8 = CParty::GetPartyIndex(local_4c);
                pTVar9 = (TimerQueue *)G_TimerQueue();
                TimerQueue::InsertTimer(pTVar9,1,uVar8,0x29,0xf,uVar4,0);
                CParty::set_dungeon_clear_state(local_4c,'\x01');
              }
              iVar3 = CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(local_4c + 0xb24));
              if (*(int *)(iVar3 + 0x4c) == 0) {
                CHARAC_DATA::CHARAC_DATA(&local_ea2);
                TAG_CHARAC_DATA::TAG_CHARAC_DATA(local_82c);
                pSVar12 = &local_15bf;
                uVar5 = 0x703;
                bVar17 = ((uint)pSVar12 & 1) != 0;
                if (bVar17) {
                  local_15bf = (SIG_LOAD_CHARAC)0x0;
                  pSVar12 = local_15be;
                  uVar5 = 0x702;
                }
                if (((uint)pSVar12 & 2) != 0) {
                  *(undefined2 *)pSVar12 = 0;
                  pSVar12 = pSVar12 + 2;
                  uVar5 = uVar5 - 2;
                }
                for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pSVar12 = 0;
                  pSVar12 = pSVar12 + ((uint)bVar18 * -2 + 1) * 4;
                }
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)pSVar12 = 0;
                  pSVar12 = pSVar12 + 2;
                }
                if (!bVar17) {
                  *pSVar12 = (SIG_LOAD_CHARAC)0x0;
                }
                pCVar10 = &local_15b3;
                pCVar13 = &local_ea2;
                uVar5 = 0x676;
                bVar17 = ((uint)pCVar10 & 1) != 0;
                if (bVar17) {
                  local_15b3 = local_ea2;
                  pCVar10 = local_15b2;
                  pCVar13 = local_ea1;
                  uVar5 = 0x675;
                }
                if (((uint)pCVar10 & 2) != 0) {
                  *(undefined2 *)pCVar10 = *(undefined2 *)pCVar13;
                  pCVar10 = pCVar10 + 2;
                  pCVar13 = pCVar13 + 2;
                  uVar5 = uVar5 - 2;
                }
                for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pCVar10 = *(undefined4 *)pCVar13;
                  pCVar13 = pCVar13 + ((uint)bVar18 * -2 + 1) * 4;
                  pCVar10 = pCVar10 + ((uint)bVar18 * -2 + 1) * 4;
                }
                iVar3 = 0;
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)pCVar10 = *(undefined2 *)pCVar13;
                  iVar3 = 2;
                }
                if (bVar17) {
                  pCVar10[iVar3] = pCVar13[iVar3];
                }
                pTVar11 = local_82c;
                puVar14 = local_f34;
                for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *puVar14 = *(undefined4 *)pTVar11;
                  pTVar11 = pTVar11 + ((uint)bVar18 * -2 + 1) * 4;
                  puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
                }
                cVar1 = CUser::GetCharacInfo(param_1,&local_15bf);
                if ((cVar1 != '\0') && (0x1d < local_158e)) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe2,1,0,0);
                }
              }
              iVar3 = CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(local_4c + 0xb24));
              local_48 = stMapMonsterKillChecker_t::getUseSkillMaterialCount
                                   ((stMapMonsterKillChecker_t *)(iVar3 + 0x4c));
              local_30 = CParty::GetMapPlayingTime(local_4c);
              local_30 = local_30 / 1000;
              local_2c = local_30 / 10;
              if (local_30 % 10 != 0) {
                local_2c = local_2c + 1;
              }
              if (local_48 < local_2c) {
                CHARAC_DATA::CHARAC_DATA((CHARAC_DATA *)local_7b4);
                TAG_CHARAC_DATA::TAG_CHARAC_DATA(&local_13e);
                puVar14 = (undefined4 *)local_1cc2;
                uVar5 = 0x703;
                bVar17 = ((uint)puVar14 & 2) != 0;
                if (bVar17) {
                  local_1cc2._0_2_ = 0;
                  puVar14 = (undefined4 *)(local_1cc2 + 2);
                  uVar5 = 0x701;
                }
                for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar14 = 0;
                  puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
                }
                if (!bVar17) {
                  *(undefined2 *)puVar14 = 0;
                  puVar14 = (undefined4 *)((int)puVar14 + 2);
                }
                *(undefined1 *)puVar14 = 0;
                puVar14 = (undefined4 *)&local_1cb6;
                puVar15 = (undefined4 *)local_7b4;
                uVar5 = 0x676;
                bVar17 = ((uint)puVar14 & 2) != 0;
                if (bVar17) {
                  local_1cb6 = local_7b4._0_2_;
                  puVar14 = auStack_1cb4;
                  puVar15 = (undefined4 *)(local_7b4 + 2);
                  uVar5 = 0x674;
                }
                for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar14 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
                  puVar14 = puVar14 + (uint)bVar18 * -2 + 1;
                }
                if (!bVar17) {
                  *(undefined2 *)puVar14 = *(undefined2 *)puVar15;
                }
                pTVar11 = &local_1637;
                pTVar16 = &local_13e;
                uVar5 = 0x78;
                bVar17 = ((uint)pTVar11 & 1) != 0;
                if (bVar17) {
                  local_1637 = local_13e;
                  pTVar11 = local_1636;
                  pTVar16 = local_13d;
                  uVar5 = 0x77;
                }
                if (((uint)pTVar11 & 2) != 0) {
                  *(undefined2 *)pTVar11 = *(undefined2 *)pTVar16;
                  pTVar11 = pTVar11 + 2;
                  pTVar16 = pTVar16 + 2;
                  uVar5 = uVar5 - 2;
                }
                for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pTVar11 = *(undefined4 *)pTVar16;
                  pTVar16 = pTVar16 + ((uint)bVar18 * -2 + 1) * 4;
                  pTVar11 = pTVar11 + ((uint)bVar18 * -2 + 1) * 4;
                }
                iVar3 = 0;
                if ((uVar5 & 2) != 0) {
                  *(undefined2 *)pTVar11 = *(undefined2 *)pTVar16;
                  iVar3 = 2;
                }
                if (bVar17) {
                  pTVar11[iVar3] = pTVar16[iVar3];
                }
                cVar1 = CUser::GetCharacInfo(param_1,(SIG_LOAD_CHARAC *)local_1cc2);
                if ((cVar1 != '\0') && (0x1d < local_1c91)) {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe3,1,0,0);
                }
              }
              local_44 = CParty::GetMapPlayingTime(local_4c);
              if ((local_44 < 10000) &&
                 (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), 10 < iVar3)
                 ) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                iVar3 = 0xb - local_44 / 1000;
                local_28 = iVar3;
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe5,iVar3,0,0);
              }
              if ((local_44 < 20000) &&
                 (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), 10 < iVar3)
                 ) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
              if (bVar17) {
                pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xe4,1,0,0);
              }
              local_eac = 0;
              local_eb0 = 0;
              local_eb4 = 0;
              local_eb8 = 0;
              local_ebc = 0;
              cVar1 = PacketBuf::get_int(param_2,&local_ebc);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x820e,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eac);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x820f,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eb0);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8210,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eb4);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8211,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              cVar1 = PacketBuf::get_int(param_2,&local_eb8);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8212,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              if (((((local_ebc != 0) || (iVar3 = CParty::GetUsedCoinCount(local_4c), iVar3 != 0))
                   || (iVar3 = CBattle_Field::GetTotalSkillMaterial(), iVar3 != 0)) ||
                  ((local_eb4 == 0 ||
                   (_DAT_08bd6354 * ((float)local_eac / (float)local_eb4) < _DAT_08bd6358)))) ||
                 ((local_eb8 == 0 ||
                  (_DAT_08bd6354 * ((float)local_eb0 / (float)local_eb8) < _DAT_08bd6358)))) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              if (bVar17) {
                local_21 = '\0';
                for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
                  cVar1 = CParty::checkValidUser(local_4c,local_20);
                  if (cVar1 != '\0') {
                    iVar3 = CParty::GetMember(local_4c);
                    iVar3 = CUserCharacInfo::getCurCharacInvenR
                                      (*(CUserCharacInfo **)(iVar3 + local_20 * 0x18));
                    CInventory::GetInvenSlot((int)local_c6,iVar3);
                    if (local_c4 == 0x2ad4) {
LAB_081f5cd8:
                      bVar17 = true;
                    }
                    else {
                      iVar3 = CParty::GetMember(local_4c);
                      iVar3 = CUserCharacInfo::getCurCharacInvenR
                                        (*(CUserCharacInfo **)(iVar3 + local_20 * 0x18));
                      CInventory::GetInvenSlot((int)local_89,iVar3);
                      if (local_87 == 0x329e) goto LAB_081f5cd8;
                      bVar17 = false;
                    }
                    if (bVar17) {
                      local_21 = '\x01';
                      break;
                    }
                  }
                }
                if (local_21 != '\x01') {
                  pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
                  WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x1a2,1,0,0);
                }
              }
              cVar1 = CParty::CheckRecvFromAllMember(local_4c,param_1);
              if (cVar1 != '\x01') {
                return 0;
              }
              cVar1 = CParty::SetPlayResult(local_4c,param_1);
              if (cVar1 != '\x01') {
                uVar4 = LineFunc(0x8235,
                                 "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                return uVar4;
              }
              return 0;
            }
            uVar4 = LineFunc(0x8179,
                             "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
          else {
            uVar4 = LineFunc(0x8174,
                             "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0x8172,
                           "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)",
                           0,0);
        }
      }
      else {
        uVar4 = LineFunc(0x816d,
                         "virtual int DisPatcher_SetPlayResult::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

