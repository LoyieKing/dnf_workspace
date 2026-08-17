# Inter_MonitorNoticeGuildChatMsg

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c9e30 Inter_MonitorNoticeGuildChatMsg::dispatch_sig  [0x084c9e30-0x84ca00b] ===
 84c9e30:	55                   	push   %ebp
 84c9e31:	89 e5                	mov    %esp,%ebp
 84c9e33:	56                   	push   %esi
 84c9e34:	53                   	push   %ebx
 84c9e35:	83 ec 40             	sub    $0x40,%esp
 84c9e38:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9e3b:	89 04 24             	mov    %eax,(%esp)
 84c9e3e:	e8 49 05 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c9e43:	85 c0                	test   %eax,%eax
 84c9e45:	0f 94 c0             	sete   %al
 84c9e48:	84 c0                	test   %al,%al
 84c9e4a:	74 0a                	je     84c9e56 <_ZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPci+0x26>
 84c9e4c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9e51:	e9 ad 01 00 00       	jmp    84ca003 <_ZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPci+0x1d3>
 84c9e56:	8b 45 10             	mov    0x10(%ebp),%eax
 84c9e59:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c9e5c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9e63:	ff 
 84c9e64:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9e67:	89 04 24             	mov    %eax,(%esp)
 84c9e6a:	e8 31 41 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9e6f:	89 c2                	mov    %eax,%edx
 84c9e71:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9e74:	8b 40 0e             	mov    0xe(%eax),%eax
 84c9e77:	39 c2                	cmp    %eax,%edx
 84c9e79:	0f 95 c0             	setne  %al
 84c9e7c:	84 c0                	test   %al,%al
 84c9e7e:	74 57                	je     84c9ed7 <_ZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPci+0xa7>
 84c9e80:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9e83:	8b 58 0e             	mov    0xe(%eax),%ebx
 84c9e86:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9e8d:	ff 
 84c9e8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9e91:	89 04 24             	mov    %eax,(%esp)
 84c9e94:	e8 07 41 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9e99:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c9e9d:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c9ea1:	c7 44 24 10 4c 7b c8 	movl   $0x8c87b4c,0x10(%esp)
 84c9ea8:	08 
 84c9ea9:	c7 44 24 0c f1 23 00 	movl   $0x23f1,0xc(%esp)
 84c9eb0:	00 
 84c9eb1:	c7 44 24 08 a0 d9 c8 	movl   $0x8c8d9a0,0x8(%esp)
 84c9eb8:	08 
 84c9eb9:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c9ec0:	08 
 84c9ec1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c9ec8:	e8 3d 9d 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c9ecd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9ed2:	e9 2c 01 00 00       	jmp    84ca003 <_ZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPci+0x1d3>
 84c9ed7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9eda:	89 04 24             	mov    %eax,(%esp)
 84c9edd:	e8 6a 3e 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c9ee2:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 84c9ee9:	00 
 84c9eea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c9ef1:	00 
 84c9ef2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9ef5:	89 04 24             	mov    %eax,(%esp)
 84c9ef8:	e8 ff 19 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c9efd:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84c9f04:	00 
 84c9f05:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9f08:	89 04 24             	mov    %eax,(%esp)
 84c9f0b:	e8 10 1a c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9f10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c9f17:	00 
 84c9f18:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9f1b:	89 04 24             	mov    %eax,(%esp)
 84c9f1e:	e8 fd 19 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9f23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9f26:	83 c0 12             	add    $0x12,%eax
 84c9f29:	89 04 24             	mov    %eax,(%esp)
 84c9f2c:	e8 7f 44 bb ff       	call   807e3b0 <strlen@plt>
 84c9f31:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c9f34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9f37:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9f3b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9f3e:	89 04 24             	mov    %eax,(%esp)
 84c9f41:	e8 f6 19 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9f46:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9f49:	8d 50 12             	lea    0x12(%eax),%edx
 84c9f4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9f4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c9f53:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c9f57:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9f5a:	89 04 24             	mov    %eax,(%esp)
 84c9f5d:	e8 82 d4 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c9f62:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c9f69:	00 
 84c9f6a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9f6d:	89 04 24             	mov    %eax,(%esp)
 84c9f70:	e8 ab 19 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9f75:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9f78:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84c9f7c:	0f b6 c0             	movzbl %al,%eax
 84c9f7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9f83:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9f86:	89 04 24             	mov    %eax,(%esp)
 84c9f89:	e8 ae 19 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9f8e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c9f91:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84c9f95:	0f b6 c0             	movzbl %al,%eax
 84c9f98:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84c9f9b:	83 c2 31             	add    $0x31,%edx
 84c9f9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c9fa2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c9fa6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9fa9:	89 04 24             	mov    %eax,(%esp)
 84c9fac:	e8 33 d4 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c9fb1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9fb8:	00 
 84c9fb9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9fbc:	89 04 24             	mov    %eax,(%esp)
 84c9fbf:	e8 94 19 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c9fc4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9fc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9fcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9fce:	89 04 24             	mov    %eax,(%esp)
 84c9fd1:	e8 e4 e5 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c9fd6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9fdb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9fde:	89 04 24             	mov    %eax,(%esp)
 84c9fe1:	e8 9a 3e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9fe6:	eb 1b                	jmp    84ca003 <_ZN31Inter_MonitorNoticeGuildChatMsg12dispatch_sigEP5CUserPci+0x1d3>
 84c9fe8:	89 d3                	mov    %edx,%ebx
 84c9fea:	89 c6                	mov    %eax,%esi
 84c9fec:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c9fef:	89 04 24             	mov    %eax,(%esp)
 84c9ff2:	e8 89 3e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9ff7:	89 f0                	mov    %esi,%eax
 84c9ff9:	89 da                	mov    %ebx,%edx
 84c9ffb:	89 04 24             	mov    %eax,(%esp)
 84c9ffe:	e8 4d 97 61 00       	call   8ae3750 <_Unwind_Resume>
 84ca003:	89 d8                	mov    %ebx,%eax
 84ca005:	83 c4 40             	add    $0x40,%esp
 84ca008:	5b                   	pop    %ebx
 84ca009:	5e                   	pop    %esi
 84ca00a:	5d                   	pop    %ebp
 84ca00b:	c3                   	ret

```

```c
// Inter_MonitorNoticeGuildChatMsg::dispatch_sig @ 0x84c9e30

/* Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    if (iVar2 == *(int *)(local_14 + 0xe)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084c9ef8 to 084c9fd5 has its CatchHandler @ 084c9fe8 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x41);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,6);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x30));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x31),
                 (uint)*(byte *)(local_14 + 0x30));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildChatMsg::dispatch_sig(CUser*, char*, int)",
                 0x23f1,
                 "Inter_MonitorNoticeGuildChatMsg::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

