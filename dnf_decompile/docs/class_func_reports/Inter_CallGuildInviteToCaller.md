# Inter_CallGuildInviteToCaller

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d2a26 Inter_CallGuildInviteToCaller::dispatch_sig  [0x084d2a26-0x84d2b95] ===
 84d2a26:	55                   	push   %ebp
 84d2a27:	89 e5                	mov    %esp,%ebp
 84d2a29:	56                   	push   %esi
 84d2a2a:	53                   	push   %ebx
 84d2a2b:	83 ec 30             	sub    $0x30,%esp
 84d2a2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2a31:	89 04 24             	mov    %eax,(%esp)
 84d2a34:	e8 53 79 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d2a39:	85 c0                	test   %eax,%eax
 84d2a3b:	0f 94 c0             	sete   %al
 84d2a3e:	84 c0                	test   %al,%al
 84d2a40:	74 0a                	je     84d2a4c <_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci+0x26>
 84d2a42:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2a47:	e9 40 01 00 00       	jmp    84d2b8c <_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci+0x166>
 84d2a4c:	8b 45 10             	mov    0x10(%ebp),%eax
 84d2a4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d2a52:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2a59:	ff 
 84d2a5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2a5d:	89 04 24             	mov    %eax,(%esp)
 84d2a60:	e8 3b b5 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2a65:	89 c2                	mov    %eax,%edx
 84d2a67:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2a6a:	8b 40 0a             	mov    0xa(%eax),%eax
 84d2a6d:	39 c2                	cmp    %eax,%edx
 84d2a6f:	0f 95 c0             	setne  %al
 84d2a72:	84 c0                	test   %al,%al
 84d2a74:	74 57                	je     84d2acd <_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci+0xa7>
 84d2a76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2a79:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d2a7c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2a83:	ff 
 84d2a84:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2a87:	89 04 24             	mov    %eax,(%esp)
 84d2a8a:	e8 11 b5 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2a8f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d2a93:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d2a97:	c7 44 24 10 14 8d c8 	movl   $0x8c88d14,0x10(%esp)
 84d2a9e:	08 
 84d2a9f:	c7 44 24 0c 5c 33 00 	movl   $0x335c,0xc(%esp)
 84d2aa6:	00 
 84d2aa7:	c7 44 24 08 e0 ca c8 	movl   $0x8c8cae0,0x8(%esp)
 84d2aae:	08 
 84d2aaf:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d2ab6:	08 
 84d2ab7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d2abe:	e8 47 11 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d2ac3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2ac8:	e9 bf 00 00 00       	jmp    84d2b8c <_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci+0x166>
 84d2acd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2ad0:	89 04 24             	mov    %eax,(%esp)
 84d2ad3:	e8 74 b2 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d2ad8:	c7 44 24 08 9a 00 00 	movl   $0x9a,0x8(%esp)
 84d2adf:	00 
 84d2ae0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2ae7:	00 
 84d2ae8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2aeb:	89 04 24             	mov    %eax,(%esp)
 84d2aee:	e8 09 8e bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d2af3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2af6:	8b 40 12             	mov    0x12(%eax),%eax
 84d2af9:	85 c0                	test   %eax,%eax
 84d2afb:	75 15                	jne    84d2b12 <_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci+0xec>
 84d2afd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2b04:	00 
 84d2b05:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2b08:	89 04 24             	mov    %eax,(%esp)
 84d2b0b:	e8 10 8e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2b10:	eb 28                	jmp    84d2b3a <_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci+0x114>
 84d2b12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d2b19:	00 
 84d2b1a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2b1d:	89 04 24             	mov    %eax,(%esp)
 84d2b20:	e8 fb 8d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2b25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2b28:	8b 40 12             	mov    0x12(%eax),%eax
 84d2b2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2b2f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2b32:	89 04 24             	mov    %eax,(%esp)
 84d2b35:	e8 e6 8d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d2b3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d2b41:	00 
 84d2b42:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2b45:	89 04 24             	mov    %eax,(%esp)
 84d2b48:	e8 0b 8e bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d2b4d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2b50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2b54:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2b57:	89 04 24             	mov    %eax,(%esp)
 84d2b5a:	e8 5b 5a 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d2b5f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2b64:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2b67:	89 04 24             	mov    %eax,(%esp)
 84d2b6a:	e8 11 b3 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2b6f:	eb 1b                	jmp    84d2b8c <_ZN29Inter_CallGuildInviteToCaller12dispatch_sigEP5CUserPci+0x166>
 84d2b71:	89 d3                	mov    %edx,%ebx
 84d2b73:	89 c6                	mov    %eax,%esi
 84d2b75:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d2b78:	89 04 24             	mov    %eax,(%esp)
 84d2b7b:	e8 00 b3 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2b80:	89 f0                	mov    %esi,%eax
 84d2b82:	89 da                	mov    %ebx,%edx
 84d2b84:	89 04 24             	mov    %eax,(%esp)
 84d2b87:	e8 c4 0b 61 00       	call   8ae3750 <_Unwind_Resume>
 84d2b8c:	89 d8                	mov    %ebx,%eax
 84d2b8e:	83 c4 30             	add    $0x30,%esp
 84d2b91:	5b                   	pop    %ebx
 84d2b92:	5e                   	pop    %esi
 84d2b93:	5d                   	pop    %ebp
 84d2b94:	c3                   	ret
 84d2b95:	90                   	nop

```

```c
// Inter_CallGuildInviteToCaller::dispatch_sig @ 0x84d2a26

/* Inter_CallGuildInviteToCaller::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CallGuildInviteToCaller::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084d2aee to 084d2b5e has its CatchHandler @ 084d2b71 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9a);
      if (*(int *)(local_10 + 0x12) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
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
                 "virtual int Inter_CallGuildInviteToCaller::dispatch_sig(CUser*, char*, int)",
                 0x335c,
                 "MEMBER : Inter_CallGuildInviteToCaller::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

