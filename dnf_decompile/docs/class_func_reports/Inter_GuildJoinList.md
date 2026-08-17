# Inter_GuildJoinList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3c60 Inter_GuildJoinList::dispatch_sig  [0x084e3c60-0x84e3f0d] ===
 84e3c60:	55                   	push   %ebp
 84e3c61:	89 e5                	mov    %esp,%ebp
 84e3c63:	56                   	push   %esi
 84e3c64:	53                   	push   %ebx
 84e3c65:	83 ec 30             	sub    $0x30,%esp
 84e3c68:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3c6b:	89 04 24             	mov    %eax,(%esp)
 84e3c6e:	e8 19 67 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e3c73:	83 f8 02             	cmp    $0x2,%eax
 84e3c76:	0f 9e c0             	setle  %al
 84e3c79:	84 c0                	test   %al,%al
 84e3c7b:	74 0a                	je     84e3c87 <_ZN19Inter_GuildJoinList12dispatch_sigEP5CUserPci+0x27>
 84e3c7d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3c82:	e9 7e 02 00 00       	jmp    84e3f05 <_ZN19Inter_GuildJoinList12dispatch_sigEP5CUserPci+0x2a5>
 84e3c87:	8b 45 10             	mov    0x10(%ebp),%eax
 84e3c8a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84e3c8d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3c90:	89 04 24             	mov    %eax,(%esp)
 84e3c93:	e8 b4 a0 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3c98:	c7 44 24 08 61 01 00 	movl   $0x161,0x8(%esp)
 84e3c9f:	00 
 84e3ca0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3ca7:	00 
 84e3ca8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3cab:	89 04 24             	mov    %eax,(%esp)
 84e3cae:	e8 49 7c be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e3cb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3cba:	00 
 84e3cbb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3cbe:	89 04 24             	mov    %eax,(%esp)
 84e3cc1:	e8 5a 7c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3cc6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e3cc9:	8b 00                	mov    (%eax),%eax
 84e3ccb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3ccf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3cd2:	89 04 24             	mov    %eax,(%esp)
 84e3cd5:	e8 62 7c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3cda:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84e3ce1:	e9 ba 01 00 00       	jmp    84e3ea0 <_ZN19Inter_GuildJoinList12dispatch_sigEP5CUserPci+0x240>
 84e3ce6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3ce9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84e3cec:	c1 e0 02             	shl    $0x2,%eax
 84e3cef:	89 c1                	mov    %eax,%ecx
 84e3cf1:	c1 e1 04             	shl    $0x4,%ecx
 84e3cf4:	01 c8                	add    %ecx,%eax
 84e3cf6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84e3cf9:	83 c0 04             	add    $0x4,%eax
 84e3cfc:	8b 00                	mov    (%eax),%eax
 84e3cfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3d02:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3d05:	89 04 24             	mov    %eax,(%esp)
 84e3d08:	e8 2f 7c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3d0d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3d10:	c1 e0 02             	shl    $0x2,%eax
 84e3d13:	89 c2                	mov    %eax,%edx
 84e3d15:	c1 e2 04             	shl    $0x4,%edx
 84e3d18:	01 d0                	add    %edx,%eax
 84e3d1a:	03 45 e8             	add    -0x18(%ebp),%eax
 84e3d1d:	83 c0 08             	add    $0x8,%eax
 84e3d20:	89 04 24             	mov    %eax,(%esp)
 84e3d23:	e8 88 a6 b9 ff       	call   807e3b0 <strlen@plt>
 84e3d28:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e3d2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3d2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3d32:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3d35:	89 04 24             	mov    %eax,(%esp)
 84e3d38:	e8 ff 7b be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3d3d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3d40:	c1 e0 02             	shl    $0x2,%eax
 84e3d43:	89 c2                	mov    %eax,%edx
 84e3d45:	c1 e2 04             	shl    $0x4,%edx
 84e3d48:	01 d0                	add    %edx,%eax
 84e3d4a:	03 45 e8             	add    -0x18(%ebp),%eax
 84e3d4d:	8d 50 08             	lea    0x8(%eax),%edx
 84e3d50:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3d53:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3d57:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3d5b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3d5e:	89 04 24             	mov    %eax,(%esp)
 84e3d61:	e8 7e 36 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e3d66:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3d69:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84e3d6c:	c1 e0 02             	shl    $0x2,%eax
 84e3d6f:	89 c1                	mov    %eax,%ecx
 84e3d71:	c1 e1 04             	shl    $0x4,%ecx
 84e3d74:	01 c8                	add    %ecx,%eax
 84e3d76:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84e3d79:	83 c0 20             	add    $0x20,%eax
 84e3d7c:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 84e3d80:	0f be c0             	movsbl %al,%eax
 84e3d83:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3d87:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3d8a:	89 04 24             	mov    %eax,(%esp)
 84e3d8d:	e8 8e 7b be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3d92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3d95:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84e3d98:	c1 e0 02             	shl    $0x2,%eax
 84e3d9b:	89 c1                	mov    %eax,%ecx
 84e3d9d:	c1 e1 04             	shl    $0x4,%ecx
 84e3da0:	01 c8                	add    %ecx,%eax
 84e3da2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84e3da5:	83 c0 20             	add    $0x20,%eax
 84e3da8:	0f b6 40 07          	movzbl 0x7(%eax),%eax
 84e3dac:	0f be c0             	movsbl %al,%eax
 84e3daf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3db3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3db6:	89 04 24             	mov    %eax,(%esp)
 84e3db9:	e8 62 7b be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3dbe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3dc1:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84e3dc4:	c1 e0 02             	shl    $0x2,%eax
 84e3dc7:	89 c1                	mov    %eax,%ecx
 84e3dc9:	c1 e1 04             	shl    $0x4,%ecx
 84e3dcc:	01 c8                	add    %ecx,%eax
 84e3dce:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84e3dd1:	83 c0 20             	add    $0x20,%eax
 84e3dd4:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84e3dd8:	0f be c0             	movsbl %al,%eax
 84e3ddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3ddf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3de2:	89 04 24             	mov    %eax,(%esp)
 84e3de5:	e8 36 7b be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3dea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3ded:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84e3df0:	c1 e0 02             	shl    $0x2,%eax
 84e3df3:	89 c1                	mov    %eax,%ecx
 84e3df5:	c1 e1 04             	shl    $0x4,%ecx
 84e3df8:	01 c8                	add    %ecx,%eax
 84e3dfa:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84e3dfd:	83 c0 20             	add    $0x20,%eax
 84e3e00:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84e3e04:	0f be c0             	movsbl %al,%eax
 84e3e07:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3e0b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3e0e:	89 04 24             	mov    %eax,(%esp)
 84e3e11:	e8 0a 7b be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3e16:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3e19:	c1 e0 02             	shl    $0x2,%eax
 84e3e1c:	89 c2                	mov    %eax,%edx
 84e3e1e:	c1 e2 04             	shl    $0x4,%edx
 84e3e21:	01 d0                	add    %edx,%eax
 84e3e23:	83 c0 20             	add    $0x20,%eax
 84e3e26:	03 45 e8             	add    -0x18(%ebp),%eax
 84e3e29:	83 c0 0a             	add    $0xa,%eax
 84e3e2c:	89 04 24             	mov    %eax,(%esp)
 84e3e2f:	e8 7c a5 b9 ff       	call   807e3b0 <strlen@plt>
 84e3e34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3e37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3e3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3e3e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3e41:	89 04 24             	mov    %eax,(%esp)
 84e3e44:	e8 f3 7a be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3e49:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3e4c:	c1 e0 02             	shl    $0x2,%eax
 84e3e4f:	89 c2                	mov    %eax,%edx
 84e3e51:	c1 e2 04             	shl    $0x4,%edx
 84e3e54:	01 d0                	add    %edx,%eax
 84e3e56:	83 c0 20             	add    $0x20,%eax
 84e3e59:	03 45 e8             	add    -0x18(%ebp),%eax
 84e3e5c:	8d 50 0a             	lea    0xa(%eax),%edx
 84e3e5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3e62:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3e66:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3e6a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3e6d:	89 04 24             	mov    %eax,(%esp)
 84e3e70:	e8 6f 35 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e3e75:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e3e78:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84e3e7b:	c1 e0 02             	shl    $0x2,%eax
 84e3e7e:	89 c1                	mov    %eax,%ecx
 84e3e80:	c1 e1 04             	shl    $0x4,%ecx
 84e3e83:	01 c8                	add    %ecx,%eax
 84e3e85:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84e3e88:	83 c0 44             	add    $0x44,%eax
 84e3e8b:	8b 00                	mov    (%eax),%eax
 84e3e8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3e91:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3e94:	89 04 24             	mov    %eax,(%esp)
 84e3e97:	e8 a0 7a be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3e9c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84e3ea0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e3ea3:	8b 00                	mov    (%eax),%eax
 84e3ea5:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 84e3ea8:	0f 9f c0             	setg   %al
 84e3eab:	84 c0                	test   %al,%al
 84e3ead:	0f 85 33 fe ff ff    	jne    84e3ce6 <_ZN19Inter_GuildJoinList12dispatch_sigEP5CUserPci+0x86>
 84e3eb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3eba:	00 
 84e3ebb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3ebe:	89 04 24             	mov    %eax,(%esp)
 84e3ec1:	e8 92 7a be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e3ec6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3ec9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3ecd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3ed0:	89 04 24             	mov    %eax,(%esp)
 84e3ed3:	e8 e2 46 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e3ed8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3edd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3ee0:	89 04 24             	mov    %eax,(%esp)
 84e3ee3:	e8 98 9f 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3ee8:	eb 1b                	jmp    84e3f05 <_ZN19Inter_GuildJoinList12dispatch_sigEP5CUserPci+0x2a5>
 84e3eea:	89 d3                	mov    %edx,%ebx
 84e3eec:	89 c6                	mov    %eax,%esi
 84e3eee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e3ef1:	89 04 24             	mov    %eax,(%esp)
 84e3ef4:	e8 87 9f 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3ef9:	89 f0                	mov    %esi,%eax
 84e3efb:	89 da                	mov    %ebx,%edx
 84e3efd:	89 04 24             	mov    %eax,(%esp)
 84e3f00:	e8 4b f8 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e3f05:	89 d8                	mov    %ebx,%eax
 84e3f07:	83 c4 30             	add    $0x30,%esp
 84e3f0a:	5b                   	pop    %ebx
 84e3f0b:	5e                   	pop    %esi
 84e3f0c:	5d                   	pop    %ebp
 84e3f0d:	c3                   	ret

```

```c
// Inter_GuildJoinList::dispatch_sig @ 0x84e3c60

/* Inter_GuildJoinList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildJoinList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_28 [12];
  int *local_1c;
  int local_18;
  size_t local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_1c = (int *)param_3;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084e3cae to 084e3ed7 has its CatchHandler @ 084e3eea */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x161);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*local_1c);
    for (local_18 = 0; local_18 < *local_1c; local_18 = local_18 + 1) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_1c[local_18 * 0x11 + 1]);
      local_14 = strlen((char *)(local_1c + local_18 * 0x11 + 2));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_14);
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_28,(char *)(local_1c + local_18 * 0x11 + 2),local_14);
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,
                 (int)*(char *)((int)local_1c + local_18 * 0x44 + 0x26));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,
                 (int)*(char *)((int)local_1c + local_18 * 0x44 + 0x27));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,
                 (int)*(char *)((int)local_1c + local_18 * 0x44 + 0x29));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_28,(int)(char)local_1c[local_18 * 0x11 + 10]);
      local_10 = strlen((char *)((int)local_1c + local_18 * 0x44 + 0x2a));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_28,(char *)((int)local_1c + local_18 * 0x44 + 0x2a),
                 local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_1c[local_18 * 0x11 + 0x11]);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}

```

