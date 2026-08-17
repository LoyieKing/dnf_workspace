# Dispatcher_ItemHyperLinkMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081da514 Dispatcher_ItemHyperLinkMessage::check_error  [0x081da514-0x81da583] ===
 81da514:	55                   	push   %ebp
 81da515:	89 e5                	mov    %esp,%ebp
 81da517:	83 ec 28             	sub    $0x28,%esp
 81da51a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81da51e:	75 07                	jne    81da527 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x13>
 81da520:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81da525:	eb 5a                	jmp    81da581 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x6d>
 81da527:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da52a:	89 04 24             	mov    %eax,(%esp)
 81da52d:	e8 5a fe ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81da532:	83 f8 02             	cmp    $0x2,%eax
 81da535:	0f 9e c0             	setle  %al
 81da538:	84 c0                	test   %al,%al
 81da53a:	74 07                	je     81da543 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x2f>
 81da53c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81da541:	eb 3e                	jmp    81da581 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x6d>
 81da543:	8b 45 10             	mov    0x10(%ebp),%eax
 81da546:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81da549:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da54c:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da550:	3c 24                	cmp    $0x24,%al
 81da552:	74 21                	je     81da575 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x61>
 81da554:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da557:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da55b:	3c 25                	cmp    $0x25,%al
 81da55d:	74 16                	je     81da575 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x61>
 81da55f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da562:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da566:	3c 21                	cmp    $0x21,%al
 81da568:	74 0b                	je     81da575 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x61>
 81da56a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da56d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da571:	3c 07                	cmp    $0x7,%al
 81da573:	75 07                	jne    81da57c <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x68>
 81da575:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81da57a:	eb 05                	jmp    81da581 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE+0x6d>
 81da57c:	b8 00 00 00 00       	mov    $0x0,%eax
 81da581:	c9                   	leave
 81da582:	c3                   	ret
 81da583:	90                   	nop

```

```c
// Dispatcher_ItemHyperLinkMessage::check_error @ 0x81da514

/* Dispatcher_ItemHyperLinkMessage::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ItemHyperLinkMessage::check_error
          (Dispatcher_ItemHyperLinkMessage *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else if ((((param_2[0xd] == (MSG_BASE)0x24) || (param_2[0xd] == (MSG_BASE)0x25)) ||
             (param_2[0xd] == (MSG_BASE)0x21)) || (param_2[0xd] == (MSG_BASE)0x7)) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081d9c4a Dispatcher_ItemHyperLinkMessage::process  [0x081d9c4a-0x81da513] ===
 81d9c4a:	55                   	push   %ebp
 81d9c4b:	89 e5                	mov    %esp,%ebp
 81d9c4d:	56                   	push   %esi
 81d9c4e:	53                   	push   %ebx
 81d9c4f:	81 ec e0 02 00 00    	sub    $0x2e0,%esp
 81d9c55:	8b 45 14             	mov    0x14(%ebp),%eax
 81d9c58:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81d9c5b:	8b 45 10             	mov    0x10(%ebp),%eax
 81d9c5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d9c62:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9c65:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9c69:	8b 45 08             	mov    0x8(%ebp),%eax
 81d9c6c:	89 04 24             	mov    %eax,(%esp)
 81d9c6f:	e8 a0 08 00 00       	call   81da514 <_ZN31Dispatcher_ItemHyperLinkMessage11check_errorEP5CUserR8MSG_BASE>
 81d9c74:	8b 55 ac             	mov    -0x54(%ebp),%edx
 81d9c77:	89 42 04             	mov    %eax,0x4(%edx)
 81d9c7a:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81d9c7d:	8b 40 04             	mov    0x4(%eax),%eax
 81d9c80:	85 c0                	test   %eax,%eax
 81d9c82:	7e 0a                	jle    81d9c8e <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 81d9c84:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9c89:	e9 7c 08 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81d9c8e:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81d9c91:	8b 40 04             	mov    0x4(%eax),%eax
 81d9c94:	85 c0                	test   %eax,%eax
 81d9c96:	79 2b                	jns    81d9cc3 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 81d9c98:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81d9c9b:	8b 40 04             	mov    0x4(%eax),%eax
 81d9c9e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9ca5:	00 
 81d9ca6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d9caa:	c7 44 24 04 00 24 bd 	movl   $0x8bd2400,0x4(%esp)
 81d9cb1:	08 
 81d9cb2:	c7 04 24 aa 47 00 00 	movl   $0x47aa,(%esp)
 81d9cb9:	e8 19 6c 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9cbe:	e9 47 08 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81d9cc3:	8b 45 10             	mov    0x10(%ebp),%eax
 81d9cc6:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81d9cc9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9ccc:	8d 58 18             	lea    0x18(%eax),%ebx
 81d9ccf:	e8 c7 24 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d9cd4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d9cd8:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d9cdb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9cdf:	89 04 24             	mov    %eax,(%esp)
 81d9ce2:	e8 bb 5e 18 00       	call   835fba2 <_ZN12CDataManager21rewriteUsableEmoticonERK5CUserPc>
 81d9ce7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9cea:	89 04 24             	mov    %eax,(%esp)
 81d9ced:	e8 e8 05 f0 ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 81d9cf2:	84 c0                	test   %al,%al
 81d9cf4:	74 30                	je     81d9d26 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0xdc>
 81d9cf6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9cf9:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9cfd:	0f b6 c0             	movzbl %al,%eax
 81d9d00:	83 f8 08             	cmp    $0x8,%eax
 81d9d03:	77 16                	ja     81d9d1b <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0xd1>
 81d9d05:	ba 01 00 00 00       	mov    $0x1,%edx
 81d9d0a:	89 d3                	mov    %edx,%ebx
 81d9d0c:	89 c1                	mov    %eax,%ecx
 81d9d0e:	d3 e3                	shl    %cl,%ebx
 81d9d10:	89 d8                	mov    %ebx,%eax
 81d9d12:	25 44 01 00 00       	and    $0x144,%eax
 81d9d17:	85 c0                	test   %eax,%eax
 81d9d19:	75 0a                	jne    81d9d25 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0xdb>
 81d9d1b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9d20:	e9 e5 07 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81d9d25:	90                   	nop
 81d9d26:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9d29:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9d2d:	3c 26                	cmp    $0x26,%al
 81d9d2f:	0f 85 7a 01 00 00    	jne    81d9eaf <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x265>
 81d9d35:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 81d9d3b:	89 04 24             	mov    %eax,(%esp)
 81d9d3e:	e8 a3 26 05 00       	call   822c3e6 <_ZN44Packet_Monitor_Other_Channel_Chat_Hyper_LinkC1Ev>
 81d9d43:	c7 85 42 fd ff ff 01 	movl   $0x1,-0x2be(%ebp)
 81d9d4a:	00 00 00 
 81d9d4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9d50:	89 04 24             	mov    %eax,(%esp)
 81d9d53:	e8 16 06 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d9d58:	89 85 46 fd ff ff    	mov    %eax,-0x2ba(%ebp)
 81d9d5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9d61:	89 04 24             	mov    %eax,(%esp)
 81d9d64:	e8 e5 1e ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81d9d69:	89 85 4b fd ff ff    	mov    %eax,-0x2b5(%ebp)
 81d9d6f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9d72:	0f b6 80 3a 01 00 00 	movzbl 0x13a(%eax),%eax
 81d9d79:	88 85 4a fd ff ff    	mov    %al,-0x2b6(%ebp)
 81d9d7f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9d82:	8b 40 10             	mov    0x10(%eax),%eax
 81d9d85:	89 85 4f fd ff ff    	mov    %eax,-0x2b1(%ebp)
 81d9d8b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9d8e:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 81d9d94:	88 85 53 fd ff ff    	mov    %al,-0x2ad(%ebp)
 81d9d9a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9d9d:	8b 40 14             	mov    0x14(%eax),%eax
 81d9da0:	88 85 ab fe ff ff    	mov    %al,-0x155(%ebp)
 81d9da6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9da9:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 81d9daf:	8b 55 b0             	mov    -0x50(%ebp),%edx
 81d9db2:	81 c2 1c 01 00 00    	add    $0x11c,%edx
 81d9db8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d9dbc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9dc0:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 81d9dc6:	83 c0 1c             	add    $0x1c,%eax
 81d9dc9:	89 04 24             	mov    %eax,(%esp)
 81d9dcc:	e8 cf 3a ea ff       	call   807d8a0 <memcpy@plt>
 81d9dd1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9dd4:	8b 40 14             	mov    0x14(%eax),%eax
 81d9dd7:	8b 55 b0             	mov    -0x50(%ebp),%edx
 81d9dda:	83 c2 18             	add    $0x18,%edx
 81d9ddd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d9de1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9de5:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 81d9deb:	05 74 01 00 00       	add    $0x174,%eax
 81d9df0:	89 04 24             	mov    %eax,(%esp)
 81d9df3:	e8 a8 3a ea ff       	call   807d8a0 <memcpy@plt>
 81d9df8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9dfb:	0f b6 80 3b 01 00 00 	movzbl 0x13b(%eax),%eax
 81d9e02:	88 85 72 fd ff ff    	mov    %al,-0x28e(%ebp)
 81d9e08:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 81d9e0f:	eb 3d                	jmp    81d9e4e <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x204>
 81d9e11:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81d9e14:	6b c0 68             	imul   $0x68,%eax,%eax
 81d9e17:	05 30 01 00 00       	add    $0x130,%eax
 81d9e1c:	03 45 b0             	add    -0x50(%ebp),%eax
 81d9e1f:	8d 50 0c             	lea    0xc(%eax),%edx
 81d9e22:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 81d9e25:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 81d9e2b:	6b c9 68             	imul   $0x68,%ecx,%ecx
 81d9e2e:	83 c1 30             	add    $0x30,%ecx
 81d9e31:	01 c8                	add    %ecx,%eax
 81d9e33:	83 c0 0b             	add    $0xb,%eax
 81d9e36:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 81d9e3d:	00 
 81d9e3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9e42:	89 04 24             	mov    %eax,(%esp)
 81d9e45:	e8 56 3a ea ff       	call   807d8a0 <memcpy@plt>
 81d9e4a:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 81d9e4e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9e51:	0f b6 80 3b 01 00 00 	movzbl 0x13b(%eax),%eax
 81d9e58:	0f b6 c0             	movzbl %al,%eax
 81d9e5b:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 81d9e5e:	0f 9f c0             	setg   %al
 81d9e61:	84 c0                	test   %al,%al
 81d9e63:	75 ac                	jne    81d9e11 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x1c7>
 81d9e65:	0f b6 85 ab fe ff ff 	movzbl -0x155(%ebp),%eax
 81d9e6c:	0f b6 c0             	movzbl %al,%eax
 81d9e6f:	66 05 74 01          	add    $0x174,%ax
 81d9e73:	66 89 85 3a fd ff ff 	mov    %ax,-0x2c6(%ebp)
 81d9e7a:	0f b7 85 3a fd ff ff 	movzwl -0x2c6(%ebp),%eax
 81d9e81:	0f b7 c0             	movzwl %ax,%eax
 81d9e84:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81d9e87:	8d 95 38 fd ff ff    	lea    -0x2c8(%ebp),%edx
 81d9e8d:	a1 44 be 40 09       	mov    0x940be44,%eax
 81d9e92:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 81d9e95:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81d9e99:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9e9d:	89 04 24             	mov    %eax,(%esp)
 81d9ea0:	e8 1f 29 29 00       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 81d9ea5:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9eaa:	e9 5b 06 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81d9eaf:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9eb2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9eb6:	3c 0b                	cmp    $0xb,%al
 81d9eb8:	74 1a                	je     81d9ed4 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x28a>
 81d9eba:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9ebd:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9ec1:	3c 0c                	cmp    $0xc,%al
 81d9ec3:	74 0f                	je     81d9ed4 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x28a>
 81d9ec5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9ec8:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9ecc:	3c 23                	cmp    $0x23,%al
 81d9ece:	0f 85 73 01 00 00    	jne    81da047 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x3fd>
 81d9ed4:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9ed7:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d9edb:	0f b7 c0             	movzwl %ax,%eax
 81d9ede:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81d9ee1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81d9ee4:	8b 40 10             	mov    0x10(%eax),%eax
 81d9ee7:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81d9eea:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81d9eed:	89 04 24             	mov    %eax,(%esp)
 81d9ef0:	e8 50 d9 f1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81d9ef5:	89 c3                	mov    %eax,%ebx
 81d9ef7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9efa:	89 04 24             	mov    %eax,(%esp)
 81d9efd:	e8 7c 03 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d9f02:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81d9f05:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d9f09:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d9f0d:	89 04 24             	mov    %eax,(%esp)
 81d9f10:	e8 c9 22 32 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81d9f15:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81d9f18:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81d9f1c:	74 3f                	je     81d9f5d <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x313>
 81d9f1e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d9f21:	8b 40 02             	mov    0x2(%eax),%eax
 81d9f24:	83 f8 24             	cmp    $0x24,%eax
 81d9f27:	74 64                	je     81d9f8d <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x343>
 81d9f29:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d9f2c:	8b 40 02             	mov    0x2(%eax),%eax
 81d9f2f:	3d 82 03 00 00       	cmp    $0x382,%eax
 81d9f34:	74 57                	je     81d9f8d <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x343>
 81d9f36:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d9f39:	8b 40 02             	mov    0x2(%eax),%eax
 81d9f3c:	3d 50 d1 28 00       	cmp    $0x28d150,%eax
 81d9f41:	74 4a                	je     81d9f8d <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x343>
 81d9f43:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d9f46:	8b 40 02             	mov    0x2(%eax),%eax
 81d9f49:	3d dd 90 20 29       	cmp    $0x292090dd,%eax
 81d9f4e:	74 3d                	je     81d9f8d <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x343>
 81d9f50:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81d9f53:	8b 40 02             	mov    0x2(%eax),%eax
 81d9f56:	3d 38 91 20 29       	cmp    $0x29209138,%eax
 81d9f5b:	74 30                	je     81d9f8d <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x343>
 81d9f5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9f60:	89 04 24             	mov    %eax,(%esp)
 81d9f63:	e8 06 04 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d9f68:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d9f6c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9f73:	00 
 81d9f74:	c7 44 24 04 00 24 bd 	movl   $0x8bd2400,0x4(%esp)
 81d9f7b:	08 
 81d9f7c:	c7 04 24 01 48 00 00 	movl   $0x4801,(%esp)
 81d9f83:	e8 4f 69 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9f88:	e9 7d 05 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81d9f8d:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d9f92:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81d9f99:	00 
 81d9f9a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d9f9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9fa1:	89 04 24             	mov    %eax,(%esp)
 81d9fa4:	e8 59 ea 0a 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81d9fa9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81d9fac:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81d9fb0:	74 13                	je     81d9fc5 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x37b>
 81d9fb2:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81d9fb5:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81d9fb8:	89 50 04             	mov    %edx,0x4(%eax)
 81d9fbb:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9fc0:	e9 45 05 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81d9fc5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81d9fc8:	89 04 24             	mov    %eax,(%esp)
 81d9fcb:	e8 75 d8 f1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81d9fd0:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81d9fd3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d9fd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9fdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9fde:	89 04 24             	mov    %eax,(%esp)
 81d9fe1:	e8 5c c9 46 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81d9fe6:	84 c0                	test   %al,%al
 81d9fe8:	74 14                	je     81d9ffe <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x3b4>
 81d9fea:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81d9fed:	c7 40 04 d5 00 00 00 	movl   $0xd5,0x4(%eax)
 81d9ff4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9ff9:	e9 0c 05 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81d9ffe:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81da001:	98                   	cwtl
 81da002:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 81da009:	ff 
 81da00a:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 81da011:	ff 
 81da012:	8b 55 bc             	mov    -0x44(%ebp),%edx
 81da015:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da019:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da01d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da020:	89 04 24             	mov    %eax,(%esp)
 81da023:	e8 86 40 48 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81da028:	83 f0 01             	xor    $0x1,%eax
 81da02b:	84 c0                	test   %al,%al
 81da02d:	0f 84 5f 04 00 00    	je     81da492 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x848>
 81da033:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da036:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81da03d:	b8 00 00 00 00       	mov    $0x0,%eax
 81da042:	e9 c3 04 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da047:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da04a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da04e:	3c 0d                	cmp    $0xd,%al
 81da050:	74 0f                	je     81da061 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x417>
 81da052:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da055:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da059:	3c 0f                	cmp    $0xf,%al
 81da05b:	0f 85 92 01 00 00    	jne    81da1f3 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x5a9>
 81da061:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da064:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81da068:	0f b7 c0             	movzwl %ax,%eax
 81da06b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81da06e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da071:	8b 40 10             	mov    0x10(%eax),%eax
 81da074:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81da077:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81da07a:	89 04 24             	mov    %eax,(%esp)
 81da07d:	e8 c3 d7 f1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81da082:	89 c3                	mov    %eax,%ebx
 81da084:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da087:	89 04 24             	mov    %eax,(%esp)
 81da08a:	e8 ef 01 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81da08f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81da092:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da096:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81da09a:	89 04 24             	mov    %eax,(%esp)
 81da09d:	e8 3c 21 32 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81da0a2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81da0a5:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81da0a9:	75 30                	jne    81da0db <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x491>
 81da0ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da0ae:	89 04 24             	mov    %eax,(%esp)
 81da0b1:	e8 b8 02 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81da0b6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81da0ba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da0c1:	00 
 81da0c2:	c7 44 24 04 00 24 bd 	movl   $0x8bd2400,0x4(%esp)
 81da0c9:	08 
 81da0ca:	c7 04 24 21 48 00 00 	movl   $0x4821,(%esp)
 81da0d1:	e8 01 68 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da0d6:	e9 2f 04 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da0db:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da0de:	8b 40 02             	mov    0x2(%eax),%eax
 81da0e1:	83 f8 25             	cmp    $0x25,%eax
 81da0e4:	75 0b                	jne    81da0f1 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x4a7>
 81da0e6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da0e9:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da0ed:	3c 0d                	cmp    $0xd,%al
 81da0ef:	74 48                	je     81da139 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x4ef>
 81da0f1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da0f4:	8b 40 02             	mov    0x2(%eax),%eax
 81da0f7:	3d 2f 99 28 00       	cmp    $0x28992f,%eax
 81da0fc:	75 0b                	jne    81da109 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x4bf>
 81da0fe:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da101:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da105:	3c 0f                	cmp    $0xf,%al
 81da107:	74 30                	je     81da139 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x4ef>
 81da109:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da10c:	89 04 24             	mov    %eax,(%esp)
 81da10f:	e8 5a 02 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81da114:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81da118:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da11f:	00 
 81da120:	c7 44 24 04 00 24 bd 	movl   $0x8bd2400,0x4(%esp)
 81da127:	08 
 81da128:	c7 04 24 26 48 00 00 	movl   $0x4826,(%esp)
 81da12f:	e8 a3 67 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da134:	e9 d1 03 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da139:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81da13e:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81da145:	00 
 81da146:	8b 55 0c             	mov    0xc(%ebp),%edx
 81da149:	89 54 24 04          	mov    %edx,0x4(%esp)
 81da14d:	89 04 24             	mov    %eax,(%esp)
 81da150:	e8 ad e8 0a 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81da155:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81da158:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81da15c:	74 13                	je     81da171 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x527>
 81da15e:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da161:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81da164:	89 50 04             	mov    %edx,0x4(%eax)
 81da167:	b8 00 00 00 00       	mov    $0x0,%eax
 81da16c:	e9 99 03 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da171:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81da174:	89 04 24             	mov    %eax,(%esp)
 81da177:	e8 c9 d6 f1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81da17c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81da17f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da183:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da187:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da18a:	89 04 24             	mov    %eax,(%esp)
 81da18d:	e8 b0 c7 46 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81da192:	84 c0                	test   %al,%al
 81da194:	74 14                	je     81da1aa <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x560>
 81da196:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da199:	c7 40 04 d5 00 00 00 	movl   $0xd5,0x4(%eax)
 81da1a0:	b8 00 00 00 00       	mov    $0x0,%eax
 81da1a5:	e9 60 03 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da1aa:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81da1ad:	98                   	cwtl
 81da1ae:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 81da1b5:	ff 
 81da1b6:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 81da1bd:	ff 
 81da1be:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81da1c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da1c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da1c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da1cc:	89 04 24             	mov    %eax,(%esp)
 81da1cf:	e8 da 3e 48 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81da1d4:	83 f0 01             	xor    $0x1,%eax
 81da1d7:	84 c0                	test   %al,%al
 81da1d9:	0f 84 b6 02 00 00    	je     81da495 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x84b>
 81da1df:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da1e2:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81da1e9:	b8 00 00 00 00       	mov    $0x0,%eax
 81da1ee:	e9 17 03 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da1f3:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da1f6:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da1fa:	3c 0e                	cmp    $0xe,%al
 81da1fc:	0f 85 24 01 00 00    	jne    81da326 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x6dc>
 81da202:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da205:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81da209:	0f b7 c0             	movzwl %ax,%eax
 81da20c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81da20f:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da212:	8b 40 10             	mov    0x10(%eax),%eax
 81da215:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81da218:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81da21b:	89 04 24             	mov    %eax,(%esp)
 81da21e:	e8 22 d6 f1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81da223:	89 c3                	mov    %eax,%ebx
 81da225:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da228:	89 04 24             	mov    %eax,(%esp)
 81da22b:	e8 4e 00 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81da230:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81da233:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da237:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81da23b:	89 04 24             	mov    %eax,(%esp)
 81da23e:	e8 9b 1f 32 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81da243:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81da246:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81da24a:	74 0d                	je     81da259 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x60f>
 81da24c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81da24f:	8b 40 02             	mov    0x2(%eax),%eax
 81da252:	3d 60 04 00 00       	cmp    $0x460,%eax
 81da257:	74 30                	je     81da289 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x63f>
 81da259:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da25c:	89 04 24             	mov    %eax,(%esp)
 81da25f:	e8 0a 01 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81da264:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81da268:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da26f:	00 
 81da270:	c7 44 24 04 00 24 bd 	movl   $0x8bd2400,0x4(%esp)
 81da277:	08 
 81da278:	c7 04 24 47 48 00 00 	movl   $0x4847,(%esp)
 81da27f:	e8 53 66 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da284:	e9 81 02 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da289:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da28c:	89 04 24             	mov    %eax,(%esp)
 81da28f:	e8 da 00 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81da294:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81da29a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da29e:	89 14 24             	mov    %edx,(%esp)
 81da2a1:	e8 a0 f0 f2 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81da2a6:	83 f0 01             	xor    $0x1,%eax
 81da2a9:	84 c0                	test   %al,%al
 81da2ab:	74 30                	je     81da2dd <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x693>
 81da2ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da2b0:	89 04 24             	mov    %eax,(%esp)
 81da2b3:	e8 b6 00 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81da2b8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81da2bc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da2c3:	00 
 81da2c4:	c7 44 24 04 00 24 bd 	movl   $0x8bd2400,0x4(%esp)
 81da2cb:	08 
 81da2cc:	c7 04 24 4b 48 00 00 	movl   $0x484b,(%esp)
 81da2d3:	e8 ff 65 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da2d8:	e9 2d 02 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da2dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81da2e0:	98                   	cwtl
 81da2e1:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 81da2e8:	ff 
 81da2e9:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 81da2f0:	ff 
 81da2f1:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81da2f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da2f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da2fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da2ff:	89 04 24             	mov    %eax,(%esp)
 81da302:	e8 a7 3d 48 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81da307:	83 f0 01             	xor    $0x1,%eax
 81da30a:	84 c0                	test   %al,%al
 81da30c:	0f 84 84 01 00 00    	je     81da496 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x84c>
 81da312:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da315:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81da31c:	b8 00 00 00 00       	mov    $0x0,%eax
 81da321:	e9 e4 01 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da326:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da329:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da32d:	3c 22                	cmp    $0x22,%al
 81da32f:	0f 85 61 01 00 00    	jne    81da496 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x84c>
 81da335:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da338:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81da33c:	0f b7 c0             	movzwl %ax,%eax
 81da33f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81da342:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da345:	8b 40 10             	mov    0x10(%eax),%eax
 81da348:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81da34b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da34e:	89 04 24             	mov    %eax,(%esp)
 81da351:	e8 36 00 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81da356:	83 f8 03             	cmp    $0x3,%eax
 81da359:	0f 95 c0             	setne  %al
 81da35c:	84 c0                	test   %al,%al
 81da35e:	74 0a                	je     81da36a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x720>
 81da360:	b8 00 00 00 00       	mov    $0x0,%eax
 81da365:	e9 a0 01 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da36a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81da36d:	89 04 24             	mov    %eax,(%esp)
 81da370:	e8 d0 d4 f1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81da375:	89 c3                	mov    %eax,%ebx
 81da377:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da37a:	89 04 24             	mov    %eax,(%esp)
 81da37d:	e8 fc fe ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81da382:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81da385:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da389:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81da38d:	89 04 24             	mov    %eax,(%esp)
 81da390:	e8 49 1e 32 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81da395:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81da398:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81da39c:	74 0d                	je     81da3ab <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x761>
 81da39e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81da3a1:	8b 40 02             	mov    0x2(%eax),%eax
 81da3a4:	3d 9e 1d 00 00       	cmp    $0x1d9e,%eax
 81da3a9:	74 30                	je     81da3db <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x791>
 81da3ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da3ae:	89 04 24             	mov    %eax,(%esp)
 81da3b1:	e8 b8 ff ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81da3b6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81da3ba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da3c1:	00 
 81da3c2:	c7 44 24 04 00 24 bd 	movl   $0x8bd2400,0x4(%esp)
 81da3c9:	08 
 81da3ca:	c7 04 24 5d 48 00 00 	movl   $0x485d,(%esp)
 81da3d1:	e8 01 65 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da3d6:	e9 2f 01 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da3db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81da3de:	8b 40 02             	mov    0x2(%eax),%eax
 81da3e1:	89 c3                	mov    %eax,%ebx
 81da3e3:	e8 b3 1d ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81da3e8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81da3ec:	89 04 24             	mov    %eax,(%esp)
 81da3ef:	e8 3e 56 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81da3f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81da3f7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81da3fb:	75 14                	jne    81da411 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x7c7>
 81da3fd:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da400:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81da407:	b8 00 00 00 00       	mov    $0x0,%eax
 81da40c:	e9 f9 00 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da411:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da414:	89 04 24             	mov    %eax,(%esp)
 81da417:	e8 de 6e f1 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81da41c:	83 f0 01             	xor    $0x1,%eax
 81da41f:	84 c0                	test   %al,%al
 81da421:	74 14                	je     81da437 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x7ed>
 81da423:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da426:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81da42d:	b8 00 00 00 00       	mov    $0x0,%eax
 81da432:	e9 d3 00 00 00       	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da437:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81da43a:	89 04 24             	mov    %eax,(%esp)
 81da43d:	e8 03 d4 f1 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81da442:	89 c3                	mov    %eax,%ebx
 81da444:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da447:	89 04 24             	mov    %eax,(%esp)
 81da44a:	e8 3f fe ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81da44f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81da456:	00 
 81da457:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81da45e:	00 
 81da45f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81da466:	00 
 81da467:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81da46a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da46e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81da472:	89 04 24             	mov    %eax,(%esp)
 81da475:	e8 92 9b 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81da47a:	83 f0 01             	xor    $0x1,%eax
 81da47d:	84 c0                	test   %al,%al
 81da47f:	74 15                	je     81da496 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x84c>
 81da481:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81da484:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81da48b:	b8 00 00 00 00       	mov    $0x0,%eax
 81da490:	eb 78                	jmp    81da50a <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x8c0>
 81da492:	90                   	nop
 81da493:	eb 01                	jmp    81da496 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x84c>
 81da495:	90                   	nop
 81da496:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da499:	89 04 24             	mov    %eax,(%esp)
 81da49c:	e8 cd fe ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81da4a1:	8b 15 10 f7 41 09    	mov    0x941f710,%edx
 81da4a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da4ab:	89 14 24             	mov    %edx,(%esp)
 81da4ae:	e8 93 ee f2 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 81da4b3:	84 c0                	test   %al,%al
 81da4b5:	74 2b                	je     81da4e2 <_ZN31Dispatcher_ItemHyperLinkMessage7processEP5CUserR8MSG_BASER9ParamBase+0x898>
 81da4b7:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da4ba:	8d 70 18             	lea    0x18(%eax),%esi
 81da4bd:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81da4c0:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81da4c4:	0f be d8             	movsbl %al,%ebx
 81da4c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da4ca:	89 04 24             	mov    %eax,(%esp)
 81da4cd:	e8 7c 17 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81da4d2:	89 74 24 08          	mov    %esi,0x8(%esp)
 81da4d6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81da4da:	89 04 24             	mov    %eax,(%esp)
 81da4dd:	e8 c8 21 26 00       	call   843c6aa <_ZN27DB_InsertPoliceSaveChatting11makeRequestEjcPc>
 81da4e2:	e8 c0 fe ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81da4e7:	c7 44 24 0c 72 01 00 	movl   $0x172,0xc(%esp)
 81da4ee:	00 
 81da4ef:	8b 55 b0             	mov    -0x50(%ebp),%edx
 81da4f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da4f6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81da4f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81da4fd:	89 04 24             	mov    %eax,(%esp)
 81da500:	e8 0b 55 4f 00       	call   86cfa10 <_ZN9GameWorld24send_chat_msg_hyper_linkEP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET>
 81da505:	b8 00 00 00 00       	mov    $0x0,%eax
 81da50a:	81 c4 e0 02 00 00    	add    $0x2e0,%esp
 81da510:	5b                   	pop    %ebx
 81da511:	5e                   	pop    %esi
 81da512:	5d                   	pop    %ebp
 81da513:	c3                   	ret

```

```c
// Dispatcher_ItemHyperLinkMessage::process @ 0x81d9c4a

/* Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ItemHyperLinkMessage::process
          (Dispatcher_ItemHyperLinkMessage *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  MSG_BASE *pMVar1;
  MSG_BASE MVar2;
  char cVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  int iVar6;
  CInventory *pCVar7;
  uint uVar8;
  GameWorld *pGVar9;
  Packet_Monitor_Other_Channel_Chat_Hyper_Link local_2cc [2];
  ushort local_2ca;
  undefined4 local_2c2;
  undefined4 local_2be;
  MSG_BASE local_2ba;
  undefined4 local_2b9;
  undefined4 local_2b5;
  undefined1 local_2b1;
  undefined1 auStack_2b0 [30];
  MSG_BASE local_292;
  undefined1 auStack_291 [312];
  byte local_159;
  undefined1 auStack_158 [256];
  ParamBase *local_58;
  MSG_BASE *local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  local_58 = param_3;
  uVar4 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_58 + 4) = uVar4;
  if (*(int *)(local_58 + 4) < 1) {
    if (*(int *)(local_58 + 4) < 0) {
      uVar4 = LineFunc(0x47aa,
                       "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_58 + 4),0);
    }
    else {
      local_54 = param_2;
      pCVar5 = (CDataManager *)G_CDataManager();
      CDataManager::rewriteUsableEmoticon(pCVar5,param_1,(char *)(param_2 + 0x18));
      cVar3 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
      if ((cVar3 == '\0') ||
         (((byte)local_54[0xd] < 9 && ((1 << ((byte)local_54[0xd] & 0x1f) & 0x144U) != 0)))) {
        if (local_54[0xd] == (MSG_BASE)0x26) {
          Packet_Monitor_Other_Channel_Chat_Hyper_Link::Packet_Monitor_Other_Channel_Chat_Hyper_Link
                    (local_2cc);
          local_2c2 = 1;
          local_2be = CUser::get_acc_id(param_1);
          local_2b9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          local_2ba = local_54[0x13a];
          local_2b5 = *(undefined4 *)(local_54 + 0x10);
          local_2b1 = (undefined1)*(undefined4 *)(local_54 + 0x118);
          local_159 = (byte)*(undefined4 *)(local_54 + 0x14);
          memcpy(auStack_2b0,local_54 + 0x11c,*(size_t *)(local_54 + 0x118));
          memcpy(auStack_158,local_54 + 0x18,*(size_t *)(local_54 + 0x14));
          local_292 = local_54[0x13b];
          for (local_4c = 0; local_4c < (int)(uint)(byte)local_54[0x13b]; local_4c = local_4c + 1) {
            memcpy(auStack_291 + local_4c * 0x68,local_54 + local_4c * 0x68 + 0x13c,0x68);
          }
          local_2ca = local_159 + 0x174;
          local_50 = (uint)local_2ca;
          CCommunityServerProxy::SendTcpPacket
                    (GlobalData::s_community_proxy,(char *)local_2cc,local_50);
          uVar4 = 0;
        }
        else {
          if (((local_54[0xd] == (MSG_BASE)0xb) || (local_54[0xd] == (MSG_BASE)0xc)) ||
             (local_54[0xd] == (MSG_BASE)0x23)) {
            local_48 = (uint)*(ushort *)(local_54 + 0xe);
            local_44 = *(int *)(local_54 + 0x10);
            iVar6 = GetInvenTypeFromItemSpace(local_48);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_40 = CInventory::GetInvenRef(pCVar7,iVar6,local_44);
            if ((local_40 == 0) ||
               (((*(int *)(local_40 + 2) != 0x24 && (*(int *)(local_40 + 2) != 0x382)) &&
                ((*(int *)(local_40 + 2) != 0x28d150 &&
                 ((*(int *)(local_40 + 2) != 0x292090dd && (*(int *)(local_40 + 2) != 0x29209138))))
                )))) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4801,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            local_3c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x24)
            ;
            if (local_3c != 0) {
              *(int *)(local_58 + 4) = local_3c;
              return 0;
            }
            iVar6 = GetInvenTypeFromItemSpace(local_48);
            cVar3 = CUser::CheckItemLock(param_1,iVar6,local_44);
            if (cVar3 != '\0') {
              *(undefined4 *)(local_58 + 4) = 0xd5;
              return 0;
            }
            cVar3 = CUser::use_stackable(param_1,(short)local_44,local_48,-1,-1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          else if ((local_54[0xd] == (MSG_BASE)0xd) || (local_54[0xd] == (MSG_BASE)0xf)) {
            local_38 = (uint)*(ushort *)(local_54 + 0xe);
            local_34 = *(int *)(local_54 + 0x10);
            iVar6 = GetInvenTypeFromItemSpace(local_38);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_30 = CInventory::GetInvenRef(pCVar7,iVar6,local_34);
            if (local_30 == 0) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4821,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            if (((*(int *)(local_30 + 2) != 0x25) || (local_54[0xd] != (MSG_BASE)0xd)) &&
               ((*(int *)(local_30 + 2) != 0x28992f || (local_54[0xd] != (MSG_BASE)0xf)))) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4826,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            local_2c = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x24)
            ;
            if (local_2c != 0) {
              *(int *)(local_58 + 4) = local_2c;
              return 0;
            }
            iVar6 = GetInvenTypeFromItemSpace(local_38);
            cVar3 = CUser::CheckItemLock(param_1,iVar6,local_34);
            if (cVar3 != '\0') {
              *(undefined4 *)(local_58 + 4) = 0xd5;
              return 0;
            }
            cVar3 = CUser::use_stackable(param_1,(short)local_34,local_38,-1,-1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          else if (local_54[0xd] == (MSG_BASE)0xe) {
            local_28 = (uint)*(ushort *)(local_54 + 0xe);
            local_24 = *(int *)(local_54 + 0x10);
            iVar6 = GetInvenTypeFromItemSpace(local_28);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_20 = CInventory::GetInvenRef(pCVar7,iVar6,local_24);
            if ((local_20 == 0) || (*(int *)(local_20 + 2) != 0x460)) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x4847,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            uVar8 = CUser::get_acc_id(param_1);
            cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar8);
            if (cVar3 != '\x01') {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x484b,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            cVar3 = CUser::use_stackable(param_1,(short)local_24,local_28,-1,-1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          else if (local_54[0xd] == (MSG_BASE)0x22) {
            local_1c = (uint)*(ushort *)(local_54 + 0xe);
            local_18 = *(int *)(local_54 + 0x10);
            iVar6 = CUser::get_state(param_1);
            if (iVar6 != 3) {
              return 0;
            }
            iVar6 = GetInvenTypeFromItemSpace(local_1c);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            local_14 = CInventory::GetInvenRef(pCVar7,iVar6,local_18);
            if ((local_14 == 0) || (*(int *)(local_14 + 2) != 0x1d9e)) {
              uVar8 = CUser::get_acc_id(param_1);
              uVar4 = LineFunc(0x485d,
                               "virtual int Dispatcher_ItemHyperLinkMessage::process(CUser*, MSG_BASE&, ParamBase&)"
                               ,0,uVar8);
              return uVar4;
            }
            iVar6 = *(int *)(local_14 + 2);
            pCVar5 = (CDataManager *)G_CDataManager();
            local_10 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
            if (local_10 == (CItem *)0x0) {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
            cVar3 = CItem::is_stackable(local_10);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
            uVar4 = GetInvenTypeFromItemSpace(local_1c);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            cVar3 = CInventory::delete_item(pCVar7,uVar4,local_18,1,3,1);
            if (cVar3 != '\x01') {
              *(undefined4 *)(local_58 + 4) = 0x11;
              return 0;
            }
          }
          uVar8 = CUser::get_acc_id(param_1);
          cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar8);
          if (cVar3 != '\0') {
            pMVar1 = local_54 + 0x18;
            MVar2 = local_54[0xd];
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            DB_InsertPoliceSaveChatting::makeRequest(uVar8,(char)MVar2,(char *)pMVar1);
          }
          pGVar9 = (GameWorld *)G_GameWorld();
          GameWorld::send_chat_msg_hyper_link(pGVar9,param_1,local_54,0x172);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## read

```asm
// === 081d98c4 Dispatcher_ItemHyperLinkMessage::read  [0x081d98c4-0x81d9c49] ===
 81d98c4:	55                   	push   %ebp
 81d98c5:	89 e5                	mov    %esp,%ebp
 81d98c7:	83 ec 28             	sub    $0x28,%esp
 81d98ca:	8b 45 10             	mov    0x10(%ebp),%eax
 81d98cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d98d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d98d3:	83 c0 0d             	add    $0xd,%eax
 81d98d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d98da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d98dd:	89 04 24             	mov    %eax,(%esp)
 81d98e0:	e8 8b 36 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d98e5:	83 f0 01             	xor    $0x1,%eax
 81d98e8:	84 c0                	test   %al,%al
 81d98ea:	74 29                	je     81d9915 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x51>
 81d98ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d98f3:	00 
 81d98f4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d98fb:	00 
 81d98fc:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9903:	08 
 81d9904:	c7 04 24 65 47 00 00 	movl   $0x4765,(%esp)
 81d990b:	e8 c7 6f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9910:	e9 32 03 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9915:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9918:	83 c0 0e             	add    $0xe,%eax
 81d991b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d991f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9922:	89 04 24             	mov    %eax,(%esp)
 81d9925:	e8 86 37 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d992a:	83 f0 01             	xor    $0x1,%eax
 81d992d:	84 c0                	test   %al,%al
 81d992f:	74 29                	je     81d995a <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x96>
 81d9931:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9938:	00 
 81d9939:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9940:	00 
 81d9941:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9948:	08 
 81d9949:	c7 04 24 68 47 00 00 	movl   $0x4768,(%esp)
 81d9950:	e8 82 6f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9955:	e9 ed 02 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d995a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d995d:	83 c0 10             	add    $0x10,%eax
 81d9960:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9964:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9967:	89 04 24             	mov    %eax,(%esp)
 81d996a:	e8 d1 38 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d996f:	83 f0 01             	xor    $0x1,%eax
 81d9972:	84 c0                	test   %al,%al
 81d9974:	74 29                	je     81d999f <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0xdb>
 81d9976:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d997d:	00 
 81d997e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9985:	00 
 81d9986:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d998d:	08 
 81d998e:	c7 04 24 6b 47 00 00 	movl   $0x476b,(%esp)
 81d9995:	e8 3d 6f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d999a:	e9 a8 02 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d999f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d99a2:	83 c0 14             	add    $0x14,%eax
 81d99a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d99a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d99ac:	89 04 24             	mov    %eax,(%esp)
 81d99af:	e8 3c 37 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d99b4:	83 f0 01             	xor    $0x1,%eax
 81d99b7:	84 c0                	test   %al,%al
 81d99b9:	74 29                	je     81d99e4 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x120>
 81d99bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d99c2:	00 
 81d99c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d99ca:	00 
 81d99cb:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d99d2:	08 
 81d99d3:	c7 04 24 6e 47 00 00 	movl   $0x476e,(%esp)
 81d99da:	e8 f8 6e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d99df:	e9 63 02 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d99e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d99e7:	8b 40 14             	mov    0x14(%eax),%eax
 81d99ea:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d99ed:	83 c2 18             	add    $0x18,%edx
 81d99f0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d99f4:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81d99fb:	00 
 81d99fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9a00:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9a03:	89 04 24             	mov    %eax,(%esp)
 81d9a06:	e8 b1 38 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81d9a0b:	83 f0 01             	xor    $0x1,%eax
 81d9a0e:	84 c0                	test   %al,%al
 81d9a10:	74 29                	je     81d9a3b <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x177>
 81d9a12:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9a19:	00 
 81d9a1a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9a21:	00 
 81d9a22:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9a29:	08 
 81d9a2a:	c7 04 24 71 47 00 00 	movl   $0x4771,(%esp)
 81d9a31:	e8 a1 6e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9a36:	e9 0c 02 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9a3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9a3e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9a42:	3c 01                	cmp    $0x1,%al
 81d9a44:	74 0f                	je     81d9a55 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x191>
 81d9a46:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9a49:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d9a4d:	3c 26                	cmp    $0x26,%al
 81d9a4f:	0f 85 eb 00 00 00    	jne    81d9b40 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x27c>
 81d9a55:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9a58:	05 18 01 00 00       	add    $0x118,%eax
 81d9a5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9a61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9a64:	89 04 24             	mov    %eax,(%esp)
 81d9a67:	e8 84 36 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d9a6c:	83 f0 01             	xor    $0x1,%eax
 81d9a6f:	84 c0                	test   %al,%al
 81d9a71:	74 29                	je     81d9a9c <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x1d8>
 81d9a73:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9a7a:	00 
 81d9a7b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9a82:	00 
 81d9a83:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9a8a:	08 
 81d9a8b:	c7 04 24 85 47 00 00 	movl   $0x4785,(%esp)
 81d9a92:	e8 40 6e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9a97:	e9 ab 01 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9a9c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9a9f:	8b 80 18 01 00 00    	mov    0x118(%eax),%eax
 81d9aa5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d9aa8:	81 c2 1c 01 00 00    	add    $0x11c,%edx
 81d9aae:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d9ab2:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81d9ab9:	00 
 81d9aba:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d9abe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9ac1:	89 04 24             	mov    %eax,(%esp)
 81d9ac4:	e8 f3 37 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81d9ac9:	83 f0 01             	xor    $0x1,%eax
 81d9acc:	84 c0                	test   %al,%al
 81d9ace:	74 29                	je     81d9af9 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x235>
 81d9ad0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9ad7:	00 
 81d9ad8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9adf:	00 
 81d9ae0:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9ae7:	08 
 81d9ae8:	c7 04 24 88 47 00 00 	movl   $0x4788,(%esp)
 81d9aef:	e8 e3 6d 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9af4:	e9 4e 01 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9af9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9afc:	05 3a 01 00 00       	add    $0x13a,%eax
 81d9b01:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9b05:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9b08:	89 04 24             	mov    %eax,(%esp)
 81d9b0b:	e8 12 34 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d9b10:	83 f0 01             	xor    $0x1,%eax
 81d9b13:	84 c0                	test   %al,%al
 81d9b15:	74 29                	je     81d9b40 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x27c>
 81d9b17:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9b1e:	00 
 81d9b1f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9b26:	00 
 81d9b27:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9b2e:	08 
 81d9b2f:	c7 04 24 8c 47 00 00 	movl   $0x478c,(%esp)
 81d9b36:	e8 9c 6d 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9b3b:	e9 07 01 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9b40:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9b43:	05 3b 01 00 00       	add    $0x13b,%eax
 81d9b48:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9b4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9b4f:	89 04 24             	mov    %eax,(%esp)
 81d9b52:	e8 19 34 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d9b57:	83 f0 01             	xor    $0x1,%eax
 81d9b5a:	84 c0                	test   %al,%al
 81d9b5c:	74 29                	je     81d9b87 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x2c3>
 81d9b5e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9b65:	00 
 81d9b66:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9b6d:	00 
 81d9b6e:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9b75:	08 
 81d9b76:	c7 04 24 92 47 00 00 	movl   $0x4792,(%esp)
 81d9b7d:	e8 55 6d 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9b82:	e9 c0 00 00 00       	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9b87:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9b8a:	0f b6 80 3b 01 00 00 	movzbl 0x13b(%eax),%eax
 81d9b91:	84 c0                	test   %al,%al
 81d9b93:	74 0e                	je     81d9ba3 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x2df>
 81d9b95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9b98:	0f b6 80 3b 01 00 00 	movzbl 0x13b(%eax),%eax
 81d9b9f:	3c 03                	cmp    $0x3,%al
 81d9ba1:	76 26                	jbe    81d9bc9 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x305>
 81d9ba3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9baa:	00 
 81d9bab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9bb2:	00 
 81d9bb3:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9bba:	08 
 81d9bbb:	c7 04 24 95 47 00 00 	movl   $0x4795,(%esp)
 81d9bc2:	e8 10 6d 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9bc7:	eb 7e                	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9bc9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d9bd0:	eb 59                	jmp    81d9c2b <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x367>
 81d9bd2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d9bd5:	6b c0 68             	imul   $0x68,%eax,%eax
 81d9bd8:	05 30 01 00 00       	add    $0x130,%eax
 81d9bdd:	03 45 f0             	add    -0x10(%ebp),%eax
 81d9be0:	83 c0 0c             	add    $0xc,%eax
 81d9be3:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 81d9bea:	00 
 81d9beb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d9bef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d9bf2:	89 04 24             	mov    %eax,(%esp)
 81d9bf5:	e8 b8 37 3b 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81d9bfa:	83 f0 01             	xor    $0x1,%eax
 81d9bfd:	84 c0                	test   %al,%al
 81d9bff:	74 26                	je     81d9c27 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x363>
 81d9c01:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d9c08:	00 
 81d9c09:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d9c10:	00 
 81d9c11:	c7 44 24 04 60 24 bd 	movl   $0x8bd2460,0x4(%esp)
 81d9c18:	08 
 81d9c19:	c7 04 24 9a 47 00 00 	movl   $0x479a,(%esp)
 81d9c20:	e8 b2 6c 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d9c25:	eb 20                	jmp    81d9c47 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x383>
 81d9c27:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d9c2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d9c2e:	0f b6 80 3b 01 00 00 	movzbl 0x13b(%eax),%eax
 81d9c35:	0f b6 c0             	movzbl %al,%eax
 81d9c38:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81d9c3b:	0f 9f c0             	setg   %al
 81d9c3e:	84 c0                	test   %al,%al
 81d9c40:	75 90                	jne    81d9bd2 <_ZN31Dispatcher_ItemHyperLinkMessage4readER9PacketBufR8MSG_BASE+0x30e>
 81d9c42:	b8 00 00 00 00       	mov    $0x0,%eax
 81d9c47:	c9                   	leave
 81d9c48:	c3                   	ret
 81d9c49:	90                   	nop

```

```c
// Dispatcher_ItemHyperLinkMessage::read @ 0x81d98c4

/* Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ItemHyperLinkMessage::read
          (Dispatcher_ItemHyperLinkMessage *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x18),0x100,*(int *)(param_2 + 0x14)
                                    );
          if (cVar1 == '\x01') {
            if ((param_2[0xd] == (MSG_BASE)0x1) || (param_2[0xd] == (MSG_BASE)0x26)) {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x118));
              if (cVar1 != '\x01') {
                uVar2 = LineFunc(0x4785,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
                return uVar2;
              }
              cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11c),0x1e,
                                         *(int *)(param_2 + 0x118));
              if (cVar1 != '\x01') {
                uVar2 = LineFunc(0x4788,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
                return uVar2;
              }
              cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x13a));
              if (cVar1 != '\x01') {
                uVar2 = LineFunc(0x478c,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
                return uVar2;
              }
            }
            cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x13b));
            if (cVar1 == '\x01') {
              if ((param_2[0x13b] == (MSG_BASE)0x0) || (3 < (byte)param_2[0x13b])) {
                uVar2 = LineFunc(0x4795,
                                 "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
              else {
                for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0x13b];
                    local_10 = local_10 + 1) {
                  cVar1 = PacketBuf::get_binary
                                    (param_1,(char *)(param_2 + local_10 * 0x68 + 0x13c),0x68);
                  if (cVar1 != '\x01') {
                    uVar2 = LineFunc(0x479a,
                                     "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                    return uVar2;
                  }
                }
                uVar2 = 0;
              }
            }
            else {
              uVar2 = LineFunc(0x4792,
                               "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x4771,
                             "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x476e,
                           "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x476b,
                         "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x4768,
                       "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x4765,
                     "virtual int Dispatcher_ItemHyperLinkMessage::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081da584 Dispatcher_ItemHyperLinkMessage::send  [0x081da584-0x81da5d1] ===
 81da584:	55                   	push   %ebp
 81da585:	89 e5                	mov    %esp,%ebp
 81da587:	83 ec 28             	sub    $0x28,%esp
 81da58a:	8b 45 10             	mov    0x10(%ebp),%eax
 81da58d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81da590:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da593:	8b 40 04             	mov    0x4(%eax),%eax
 81da596:	85 c0                	test   %eax,%eax
 81da598:	75 15                	jne    81da5af <_ZN31Dispatcher_ItemHyperLinkMessage4sendEP5CUserR9ParamBase+0x2b>
 81da59a:	c7 44 24 04 a9 01 00 	movl   $0x1a9,0x4(%esp)
 81da5a1:	00 
 81da5a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da5a5:	89 04 24             	mov    %eax,(%esp)
 81da5a8:	e8 f3 18 4a 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81da5ad:	eb 20                	jmp    81da5cf <_ZN31Dispatcher_ItemHyperLinkMessage4sendEP5CUserR9ParamBase+0x4b>
 81da5af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da5b2:	8b 40 04             	mov    0x4(%eax),%eax
 81da5b5:	0f b6 c0             	movzbl %al,%eax
 81da5b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81da5bc:	c7 44 24 04 a9 01 00 	movl   $0x1a9,0x4(%esp)
 81da5c3:	00 
 81da5c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da5c7:	89 04 24             	mov    %eax,(%esp)
 81da5ca:	e8 73 19 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81da5cf:	c9                   	leave
 81da5d0:	c3                   	ret
 81da5d1:	90                   	nop

```

```c
// Dispatcher_ItemHyperLinkMessage::send @ 0x81da584

/* Dispatcher_ItemHyperLinkMessage::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ItemHyperLinkMessage::send
          (Dispatcher_ItemHyperLinkMessage *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1a9);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1a9,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

