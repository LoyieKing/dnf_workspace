# Inter_ReplyGuildInviteToInvited

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d2dfe Inter_ReplyGuildInviteToInvited::dispatch_sig  [0x084d2dfe-0x84d2f6d] ===
 84d2dfe:	55                   	push   %ebp
 84d2dff:	89 e5                	mov    %esp,%ebp
 84d2e01:	56                   	push   %esi
 84d2e02:	53                   	push   %ebx
 84d2e03:	83 ec 30             	sub    $0x30,%esp
 84d2e06:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2e09:	89 04 24             	mov    %eax,(%esp)
 84d2e0c:	e8 7b 75 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d2e11:	85 c0                	test   %eax,%eax
 84d2e13:	0f 94 c0             	sete   %al
 84d2e16:	84 c0                	test   %al,%al
 84d2e18:	74 0a                	je     84d2e24 <_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci+0x26>
 84d2e1a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2e1f:	e9 40 01 00 00       	jmp    84d2f64 <_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci+0x166>
 84d2e24:	8b 45 10             	mov    0x10(%ebp),%eax
 84d2e27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d2e2a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2e31:	ff 
 84d2e32:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2e35:	89 04 24             	mov    %eax,(%esp)
 84d2e38:	e8 63 b1 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2e3d:	89 c2                	mov    %eax,%edx
 84d2e3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2e42:	8b 40 0a             	mov    0xa(%eax),%eax
 84d2e45:	39 c2                	cmp    %eax,%edx
 84d2e47:	0f 95 c0             	setne  %al
 84d2e4a:	84 c0                	test   %al,%al
 84d2e4c:	74 57                	je     84d2ea5 <_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci+0xa7>
 84d2e4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2e51:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d2e54:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2e5b:	ff 
 84d2e5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2e5f:	89 04 24             	mov    %eax,(%esp)
 84d2e62:	e8 39 b1 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2e67:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d2e6b:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d2e6f:	c7 44 24 10 80 8d c8 	movl   $0x8c88d80,0x10(%esp)
 84d2e76:	08 
 84d2e77:	c7 44 24 0c ae 33 00 	movl   $0x33ae,0xc(%esp)
 84d2e7e:	00 
 84d2e7f:	c7 44 24 08 20 ca c8 	movl   $0x8c8ca20,0x8(%esp)
 84d2e86:	08 
 84d2e87:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d2e8e:	08 
 84d2e8f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d2e96:	e8 6f 0d 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d2e9b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2ea0:	e9 bf 00 00 00       	jmp    84d2f64 <_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci+0x166>
 84d2ea5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2ea8:	89 04 24             	mov    %eax,(%esp)
 84d2eab:	e8 9c ae 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d2eb0:	c7 44 24 08 9b 00 00 	movl   $0x9b,0x8(%esp)
 84d2eb7:	00 
 84d2eb8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2ebf:	00 
 84d2ec0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2ec3:	89 04 24             	mov    %eax,(%esp)
 84d2ec6:	e8 31 8a bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d2ecb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2ece:	8b 40 12             	mov    0x12(%eax),%eax
 84d2ed1:	85 c0                	test   %eax,%eax
 84d2ed3:	75 15                	jne    84d2eea <_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci+0xec>
 84d2ed5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2edc:	00 
 84d2edd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2ee0:	89 04 24             	mov    %eax,(%esp)
 84d2ee3:	e8 38 8a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2ee8:	eb 28                	jmp    84d2f12 <_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci+0x114>
 84d2eea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d2ef1:	00 
 84d2ef2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2ef5:	89 04 24             	mov    %eax,(%esp)
 84d2ef8:	e8 23 8a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2efd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2f00:	8b 40 12             	mov    0x12(%eax),%eax
 84d2f03:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2f07:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2f0a:	89 04 24             	mov    %eax,(%esp)
 84d2f0d:	e8 2a 8a bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d2f12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2f19:	00 
 84d2f1a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2f1d:	89 04 24             	mov    %eax,(%esp)
 84d2f20:	e8 33 8a bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d2f25:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2f28:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2f2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2f2f:	89 04 24             	mov    %eax,(%esp)
 84d2f32:	e8 83 56 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d2f37:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2f3c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2f3f:	89 04 24             	mov    %eax,(%esp)
 84d2f42:	e8 39 af 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2f47:	eb 1b                	jmp    84d2f64 <_ZN31Inter_ReplyGuildInviteToInvited12dispatch_sigEP5CUserPci+0x166>
 84d2f49:	89 d3                	mov    %edx,%ebx
 84d2f4b:	89 c6                	mov    %eax,%esi
 84d2f4d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2f50:	89 04 24             	mov    %eax,(%esp)
 84d2f53:	e8 28 af 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2f58:	89 f0                	mov    %esi,%eax
 84d2f5a:	89 da                	mov    %ebx,%edx
 84d2f5c:	89 04 24             	mov    %eax,(%esp)
 84d2f5f:	e8 ec 07 61 00       	call   8ae3750 <_Unwind_Resume>
 84d2f64:	89 d8                	mov    %ebx,%eax
 84d2f66:	83 c4 30             	add    $0x30,%esp
 84d2f69:	5b                   	pop    %ebx
 84d2f6a:	5e                   	pop    %esi
 84d2f6b:	5d                   	pop    %ebp
 84d2f6c:	c3                   	ret
 84d2f6d:	90                   	nop

```

```c
// Inter_ReplyGuildInviteToInvited::dispatch_sig @ 0x84d2dfe

/* Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 10)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d2ec6 to 084d2f36 has its CatchHandler @ 084d2f49 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9b);
      if (*(int *)(local_10 + 0x12) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildInviteToInvited::dispatch_sig(CUser*, char*, int)",
                 0x33ae,
                 "MEMBER : Inter_CallGuildInviteToInvited::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

