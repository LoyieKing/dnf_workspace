# Inter_Monitor_MegaphoneMsgHyperLink

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e5c26 Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig  [0x084e5c26-0x84e5e1d] ===
 84e5c26:	55                   	push   %ebp
 84e5c27:	89 e5                	mov    %esp,%ebp
 84e5c29:	56                   	push   %esi
 84e5c2a:	53                   	push   %ebx
 84e5c2b:	83 ec 30             	sub    $0x30,%esp
 84e5c2e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e5c31:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e5c34:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5c37:	89 04 24             	mov    %eax,(%esp)
 84e5c3a:	e8 0d 81 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e5c3f:	c7 44 24 08 74 01 00 	movl   $0x174,0x8(%esp)
 84e5c46:	00 
 84e5c47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5c4e:	00 
 84e5c4f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5c52:	89 04 24             	mov    %eax,(%esp)
 84e5c55:	e8 a2 5c be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e5c5a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5c5d:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84e5c61:	0f b6 c0             	movzbl %al,%eax
 84e5c64:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5c68:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5c6b:	89 04 24             	mov    %eax,(%esp)
 84e5c6e:	e8 ad 5c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5c73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5c76:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84e5c7a:	0f b6 c0             	movzbl %al,%eax
 84e5c7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5c81:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5c84:	89 04 24             	mov    %eax,(%esp)
 84e5c87:	e8 94 5c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5c8c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5c8f:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84e5c93:	0f b7 c0             	movzwl %ax,%eax
 84e5c96:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5c9a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5c9d:	89 04 24             	mov    %eax,(%esp)
 84e5ca0:	e8 ff 41 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e5ca5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5ca8:	83 c0 0f             	add    $0xf,%eax
 84e5cab:	89 04 24             	mov    %eax,(%esp)
 84e5cae:	e8 fd 86 b9 ff       	call   807e3b0 <strlen@plt>
 84e5cb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5cb7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5cba:	89 04 24             	mov    %eax,(%esp)
 84e5cbd:	e8 7a 5c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5cc2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5cc5:	83 c0 0f             	add    $0xf,%eax
 84e5cc8:	89 04 24             	mov    %eax,(%esp)
 84e5ccb:	e8 e0 86 b9 ff       	call   807e3b0 <strlen@plt>
 84e5cd0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84e5cd3:	83 c2 0f             	add    $0xf,%edx
 84e5cd6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5cda:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5cde:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5ce1:	89 04 24             	mov    %eax,(%esp)
 84e5ce4:	e8 fb 16 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e5ce9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5cec:	0f b6 80 66 01 00 00 	movzbl 0x166(%eax),%eax
 84e5cf3:	0f b6 c0             	movzbl %al,%eax
 84e5cf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5cfa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5cfd:	89 04 24             	mov    %eax,(%esp)
 84e5d00:	e8 37 5c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5d05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5d08:	0f b6 80 66 01 00 00 	movzbl 0x166(%eax),%eax
 84e5d0f:	0f b6 c0             	movzbl %al,%eax
 84e5d12:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84e5d15:	81 c2 67 01 00 00    	add    $0x167,%edx
 84e5d1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5d1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5d23:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5d26:	89 04 24             	mov    %eax,(%esp)
 84e5d29:	e8 b6 16 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e5d2e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5d31:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84e5d35:	0f b6 c0             	movzbl %al,%eax
 84e5d38:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5d3c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5d3f:	89 04 24             	mov    %eax,(%esp)
 84e5d42:	e8 d9 5b be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5d47:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e5d4e:	eb 2a                	jmp    84e5d7a <_ZN35Inter_Monitor_MegaphoneMsgHyperLink12dispatch_sigEP5CUserPci+0x154>
 84e5d50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e5d53:	6b c0 68             	imul   $0x68,%eax,%eax
 84e5d56:	83 c0 20             	add    $0x20,%eax
 84e5d59:	03 45 f0             	add    -0x10(%ebp),%eax
 84e5d5c:	83 c0 0e             	add    $0xe,%eax
 84e5d5f:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 84e5d66:	00 
 84e5d67:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5d6b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5d6e:	89 04 24             	mov    %eax,(%esp)
 84e5d71:	e8 92 81 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e5d76:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e5d7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5d7d:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84e5d81:	0f b6 c0             	movzbl %al,%eax
 84e5d84:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e5d87:	0f 9f c0             	setg   %al
 84e5d8a:	84 c0                	test   %al,%al
 84e5d8c:	75 c2                	jne    84e5d50 <_ZN35Inter_Monitor_MegaphoneMsgHyperLink12dispatch_sigEP5CUserPci+0x12a>
 84e5d8e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e5d95:	00 
 84e5d96:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5d99:	89 04 24             	mov    %eax,(%esp)
 84e5d9c:	e8 b7 5b be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e5da1:	e8 01 46 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e5da6:	89 04 24             	mov    %eax,(%esp)
 84e5da9:	e8 70 b5 c0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84e5dae:	84 c0                	test   %al,%al
 84e5db0:	74 24                	je     84e5dd6 <_ZN35Inter_Monitor_MegaphoneMsgHyperLink12dispatch_sigEP5CUserPci+0x1b0>
 84e5db2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5db5:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e5db9:	0f be d8             	movsbl %al,%ebx
 84e5dbc:	e8 e6 45 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e5dc1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e5dc5:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84e5dc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5dcc:	89 04 24             	mov    %eax,(%esp)
 84e5dcf:	e8 da 32 1e 00       	call   86c90ae <_ZN9GameWorld17send_server_groupER11PacketGuardc>
 84e5dd4:	eb 14                	jmp    84e5dea <_ZN35Inter_Monitor_MegaphoneMsgHyperLink12dispatch_sigEP5CUserPci+0x1c4>
 84e5dd6:	e8 cc 45 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e5ddb:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84e5dde:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5de2:	89 04 24             	mov    %eax,(%esp)
 84e5de5:	e8 2a 2e 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84e5dea:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e5def:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5df2:	89 04 24             	mov    %eax,(%esp)
 84e5df5:	e8 86 80 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5dfa:	89 d8                	mov    %ebx,%eax
 84e5dfc:	83 c4 30             	add    $0x30,%esp
 84e5dff:	5b                   	pop    %ebx
 84e5e00:	5e                   	pop    %esi
 84e5e01:	5d                   	pop    %ebp
 84e5e02:	c3                   	ret
 84e5e03:	89 d3                	mov    %edx,%ebx
 84e5e05:	89 c6                	mov    %eax,%esi
 84e5e07:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e5e0a:	89 04 24             	mov    %eax,(%esp)
 84e5e0d:	e8 6e 80 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5e12:	89 f0                	mov    %esi,%eax
 84e5e14:	89 da                	mov    %ebx,%edx
 84e5e16:	89 04 24             	mov    %eax,(%esp)
 84e5e19:	e8 32 d9 5f 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig @ 0x84e5c26

/* Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_MegaphoneMsgHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  size_t sVar2;
  GameWorld *pGVar3;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e5c55 to 084e5de9 has its CatchHandler @ 084e5e03 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x174);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0xe));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0xb));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0xc));
  sVar2 = strlen((char *)(local_14 + 0xf));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,sVar2);
  sVar2 = strlen((char *)(local_14 + 0xf));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0xf),sVar2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x166));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x167),
             (uint)*(byte *)(local_14 + 0x166));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x2d));
  for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_14 + 0x2d); local_10 = local_10 + 1) {
    InterfacePacketBuf::put_binary
              ((InterfacePacketBuf *)local_20,(char *)(local_10 * 0x68 + local_14 + 0x2e),0x68);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(pGVar3);
  if (cVar1 == '\0') {
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_20);
  }
  else {
    cVar1 = *(char *)(local_14 + 10);
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_server_group(pGVar3,local_20,cVar1);
  }
  PacketGuard::~PacketGuard(local_20);
  return 0;
}

```

