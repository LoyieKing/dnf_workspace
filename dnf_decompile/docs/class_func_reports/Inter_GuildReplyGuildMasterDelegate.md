# Inter_GuildReplyGuildMasterDelegate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c9b9a Inter_GuildReplyGuildMasterDelegate::dispatch_sig  [0x084c9b9a-0x84c9d09] ===
 84c9b9a:	55                   	push   %ebp
 84c9b9b:	89 e5                	mov    %esp,%ebp
 84c9b9d:	56                   	push   %esi
 84c9b9e:	53                   	push   %ebx
 84c9b9f:	83 ec 30             	sub    $0x30,%esp
 84c9ba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9ba5:	89 04 24             	mov    %eax,(%esp)
 84c9ba8:	e8 df 07 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c9bad:	85 c0                	test   %eax,%eax
 84c9baf:	0f 94 c0             	sete   %al
 84c9bb2:	84 c0                	test   %al,%al
 84c9bb4:	74 0a                	je     84c9bc0 <_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci+0x26>
 84c9bb6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9bbb:	e9 40 01 00 00       	jmp    84c9d00 <_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci+0x166>
 84c9bc0:	8b 45 10             	mov    0x10(%ebp),%eax
 84c9bc3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c9bc6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9bcd:	ff 
 84c9bce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9bd1:	89 04 24             	mov    %eax,(%esp)
 84c9bd4:	e8 c7 43 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9bd9:	89 c2                	mov    %eax,%edx
 84c9bdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9bde:	8b 40 0a             	mov    0xa(%eax),%eax
 84c9be1:	39 c2                	cmp    %eax,%edx
 84c9be3:	0f 95 c0             	setne  %al
 84c9be6:	84 c0                	test   %al,%al
 84c9be8:	74 57                	je     84c9c41 <_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci+0xa7>
 84c9bea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9bed:	8b 58 0a             	mov    0xa(%eax),%ebx
 84c9bf0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9bf7:	ff 
 84c9bf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9bfb:	89 04 24             	mov    %eax,(%esp)
 84c9bfe:	e8 9d 43 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9c03:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c9c07:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c9c0b:	c7 44 24 10 84 7a c8 	movl   $0x8c87a84,0x10(%esp)
 84c9c12:	08 
 84c9c13:	c7 44 24 0c ba 23 00 	movl   $0x23ba,0xc(%esp)
 84c9c1a:	00 
 84c9c1b:	c7 44 24 08 60 da c8 	movl   $0x8c8da60,0x8(%esp)
 84c9c22:	08 
 84c9c23:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c9c2a:	08 
 84c9c2b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c9c32:	e8 d3 9f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c9c37:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9c3c:	e9 bf 00 00 00       	jmp    84c9d00 <_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci+0x166>
 84c9c41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9c44:	89 04 24             	mov    %eax,(%esp)
 84c9c47:	e8 00 41 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c9c4c:	c7 44 24 08 9e 00 00 	movl   $0x9e,0x8(%esp)
 84c9c53:	00 
 84c9c54:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9c5b:	00 
 84c9c5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9c5f:	89 04 24             	mov    %eax,(%esp)
 84c9c62:	e8 95 1c c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c9c67:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9c6a:	8b 40 12             	mov    0x12(%eax),%eax
 84c9c6d:	85 c0                	test   %eax,%eax
 84c9c6f:	75 15                	jne    84c9c86 <_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci+0xec>
 84c9c71:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9c78:	00 
 84c9c79:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9c7c:	89 04 24             	mov    %eax,(%esp)
 84c9c7f:	e8 9c 1c c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9c84:	eb 28                	jmp    84c9cae <_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci+0x114>
 84c9c86:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c9c8d:	00 
 84c9c8e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9c91:	89 04 24             	mov    %eax,(%esp)
 84c9c94:	e8 87 1c c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9c99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9c9c:	8b 40 12             	mov    0x12(%eax),%eax
 84c9c9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9ca3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9ca6:	89 04 24             	mov    %eax,(%esp)
 84c9ca9:	e8 72 1c c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9cae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9cb5:	00 
 84c9cb6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9cb9:	89 04 24             	mov    %eax,(%esp)
 84c9cbc:	e8 97 1c c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c9cc1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9cc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9cc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9ccb:	89 04 24             	mov    %eax,(%esp)
 84c9cce:	e8 e7 e8 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c9cd3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9cd8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9cdb:	89 04 24             	mov    %eax,(%esp)
 84c9cde:	e8 9d 41 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9ce3:	eb 1b                	jmp    84c9d00 <_ZN35Inter_GuildReplyGuildMasterDelegate12dispatch_sigEP5CUserPci+0x166>
 84c9ce5:	89 d3                	mov    %edx,%ebx
 84c9ce7:	89 c6                	mov    %eax,%esi
 84c9ce9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9cec:	89 04 24             	mov    %eax,(%esp)
 84c9cef:	e8 8c 41 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9cf4:	89 f0                	mov    %esi,%eax
 84c9cf6:	89 da                	mov    %ebx,%edx
 84c9cf8:	89 04 24             	mov    %eax,(%esp)
 84c9cfb:	e8 50 9a 61 00       	call   8ae3750 <_Unwind_Resume>
 84c9d00:	89 d8                	mov    %ebx,%eax
 84c9d02:	83 c4 30             	add    $0x30,%esp
 84c9d05:	5b                   	pop    %ebx
 84c9d06:	5e                   	pop    %esi
 84c9d07:	5d                   	pop    %ebp
 84c9d08:	c3                   	ret
 84c9d09:	90                   	nop

```

```c
// Inter_GuildReplyGuildMasterDelegate::dispatch_sig @ 0x84c9b9a

/* Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084c9c62 to 084c9cd2 has its CatchHandler @ 084c9ce5 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9e);
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
                 "virtual int Inter_GuildReplyGuildMasterDelegate::dispatch_sig(CUser*, char*, int)"
                 ,0x23ba,
                 "Inter_NoticeGuildMasterDelegate::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

