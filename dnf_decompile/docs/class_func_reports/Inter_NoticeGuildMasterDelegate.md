# Inter_NoticeGuildMasterDelegate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c9a32 Inter_NoticeGuildMasterDelegate::dispatch_sig  [0x084c9a32-0x84c9b99] ===
 84c9a32:	55                   	push   %ebp
 84c9a33:	89 e5                	mov    %esp,%ebp
 84c9a35:	56                   	push   %esi
 84c9a36:	53                   	push   %ebx
 84c9a37:	83 ec 40             	sub    $0x40,%esp
 84c9a3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9a3d:	89 04 24             	mov    %eax,(%esp)
 84c9a40:	e8 47 09 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c9a45:	85 c0                	test   %eax,%eax
 84c9a47:	0f 94 c0             	sete   %al
 84c9a4a:	84 c0                	test   %al,%al
 84c9a4c:	74 0a                	je     84c9a58 <_ZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPci+0x26>
 84c9a4e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9a53:	e9 38 01 00 00       	jmp    84c9b90 <_ZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPci+0x15e>
 84c9a58:	8b 45 10             	mov    0x10(%ebp),%eax
 84c9a5b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c9a5e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9a65:	ff 
 84c9a66:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9a69:	89 04 24             	mov    %eax,(%esp)
 84c9a6c:	e8 2f 45 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9a71:	89 c2                	mov    %eax,%edx
 84c9a73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9a76:	8b 40 0a             	mov    0xa(%eax),%eax
 84c9a79:	39 c2                	cmp    %eax,%edx
 84c9a7b:	0f 95 c0             	setne  %al
 84c9a7e:	84 c0                	test   %al,%al
 84c9a80:	74 57                	je     84c9ad9 <_ZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPci+0xa7>
 84c9a82:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9a85:	8b 58 0a             	mov    0xa(%eax),%ebx
 84c9a88:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9a8f:	ff 
 84c9a90:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9a93:	89 04 24             	mov    %eax,(%esp)
 84c9a96:	e8 05 45 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9a9b:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c9a9f:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c9aa3:	c7 44 24 10 84 7a c8 	movl   $0x8c87a84,0x10(%esp)
 84c9aaa:	08 
 84c9aab:	c7 44 24 0c a0 23 00 	movl   $0x23a0,0xc(%esp)
 84c9ab2:	00 
 84c9ab3:	c7 44 24 08 c0 da c8 	movl   $0x8c8dac0,0x8(%esp)
 84c9aba:	08 
 84c9abb:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c9ac2:	08 
 84c9ac3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c9aca:	e8 3b a1 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c9acf:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9ad4:	e9 b7 00 00 00       	jmp    84c9b90 <_ZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPci+0x15e>
 84c9ad9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9adc:	89 04 24             	mov    %eax,(%esp)
 84c9adf:	e8 68 42 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c9ae4:	c7 44 24 08 95 00 00 	movl   $0x95,0x8(%esp)
 84c9aeb:	00 
 84c9aec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c9af3:	00 
 84c9af4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9af7:	89 04 24             	mov    %eax,(%esp)
 84c9afa:	e8 fd 1d c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c9aff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9b02:	83 c0 12             	add    $0x12,%eax
 84c9b05:	89 04 24             	mov    %eax,(%esp)
 84c9b08:	e8 a3 48 bb ff       	call   807e3b0 <strlen@plt>
 84c9b0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c9b10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9b13:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9b17:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9b1a:	89 04 24             	mov    %eax,(%esp)
 84c9b1d:	e8 1a 1e c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9b22:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9b25:	8d 50 12             	lea    0x12(%eax),%edx
 84c9b28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9b2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c9b2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c9b33:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9b36:	89 04 24             	mov    %eax,(%esp)
 84c9b39:	e8 a6 d8 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c9b3e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9b45:	00 
 84c9b46:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9b49:	89 04 24             	mov    %eax,(%esp)
 84c9b4c:	e8 07 1e c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c9b51:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9b54:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9b58:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9b5b:	89 04 24             	mov    %eax,(%esp)
 84c9b5e:	e8 57 ea 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c9b63:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9b68:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9b6b:	89 04 24             	mov    %eax,(%esp)
 84c9b6e:	e8 0d 43 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9b73:	eb 1b                	jmp    84c9b90 <_ZN31Inter_NoticeGuildMasterDelegate12dispatch_sigEP5CUserPci+0x15e>
 84c9b75:	89 d3                	mov    %edx,%ebx
 84c9b77:	89 c6                	mov    %eax,%esi
 84c9b79:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9b7c:	89 04 24             	mov    %eax,(%esp)
 84c9b7f:	e8 fc 42 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9b84:	89 f0                	mov    %esi,%eax
 84c9b86:	89 da                	mov    %ebx,%edx
 84c9b88:	89 04 24             	mov    %eax,(%esp)
 84c9b8b:	e8 c0 9b 61 00       	call   8ae3750 <_Unwind_Resume>
 84c9b90:	89 d8                	mov    %ebx,%eax
 84c9b92:	83 c4 40             	add    $0x40,%esp
 84c9b95:	5b                   	pop    %ebx
 84c9b96:	5e                   	pop    %esi
 84c9b97:	5d                   	pop    %ebp
 84c9b98:	c3                   	ret
 84c9b99:	90                   	nop

```

```c
// Inter_NoticeGuildMasterDelegate::dispatch_sig @ 0x84c9a32

/* Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 10)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084c9afa to 084c9b62 has its CatchHandler @ 084c9b75 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x95);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_NoticeGuildMasterDelegate::dispatch_sig(CUser*, char*, int)",
                 0x23a0,
                 "Inter_NoticeGuildMasterDelegate::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

