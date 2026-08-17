# Inter_NoticeDeleteGuildAgit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dab18 Inter_NoticeDeleteGuildAgit::dispatch_sig  [0x084dab18-0x84dacd9] ===
 84dab18:	55                   	push   %ebp
 84dab19:	89 e5                	mov    %esp,%ebp
 84dab1b:	56                   	push   %esi
 84dab1c:	53                   	push   %ebx
 84dab1d:	83 ec 30             	sub    $0x30,%esp
 84dab20:	8b 45 10             	mov    0x10(%ebp),%eax
 84dab23:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dab26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dab29:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84dab2d:	84 c0                	test   %al,%al
 84dab2f:	74 2b                	je     84dab5c <_ZN27Inter_NoticeDeleteGuildAgit12dispatch_sigEP5CUserPci+0x44>
 84dab31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dab34:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84dab38:	0f b6 c0             	movzbl %al,%eax
 84dab3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dab3f:	c7 44 24 04 e8 00 00 	movl   $0xe8,0x4(%esp)
 84dab46:	00 
 84dab47:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dab4a:	89 04 24             	mov    %eax,(%esp)
 84dab4d:	e8 f0 13 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84dab52:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dab57:	e9 75 01 00 00       	jmp    84dacd1 <_ZN27Inter_NoticeDeleteGuildAgit12dispatch_sigEP5CUserPci+0x1b9>
 84dab5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dab63:	00 
 84dab64:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dab67:	89 04 24             	mov    %eax,(%esp)
 84dab6a:	e8 3d 23 01 00       	call   84eceac <_ZN5CUser16SetGuildAgitFlagEb>
 84dab6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dab72:	8b 58 12             	mov    0x12(%eax),%ebx
 84dab75:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dab7c:	ff 
 84dab7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dab80:	89 04 24             	mov    %eax,(%esp)
 84dab83:	e8 18 34 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84dab88:	39 c3                	cmp    %eax,%ebx
 84dab8a:	0f 94 c0             	sete   %al
 84dab8d:	84 c0                	test   %al,%al
 84dab8f:	0f 84 86 00 00 00    	je     84dac1b <_ZN27Inter_NoticeDeleteGuildAgit12dispatch_sigEP5CUserPci+0x103>
 84dab95:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dab98:	89 04 24             	mov    %eax,(%esp)
 84dab9b:	e8 ac 31 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84daba0:	c7 44 24 08 e8 00 00 	movl   $0xe8,0x8(%esp)
 84daba7:	00 
 84daba8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dabaf:	00 
 84dabb0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dabb3:	89 04 24             	mov    %eax,(%esp)
 84dabb6:	e8 41 0d bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dabbb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dabc2:	00 
 84dabc3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dabc6:	89 04 24             	mov    %eax,(%esp)
 84dabc9:	e8 52 0d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dabce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dabd5:	00 
 84dabd6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dabd9:	89 04 24             	mov    %eax,(%esp)
 84dabdc:	e8 77 0d bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dabe1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dabe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dabe8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dabeb:	89 04 24             	mov    %eax,(%esp)
 84dabee:	e8 c7 d9 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dabf3:	eb 1b                	jmp    84dac10 <_ZN27Inter_NoticeDeleteGuildAgit12dispatch_sigEP5CUserPci+0xf8>
 84dabf5:	89 d3                	mov    %edx,%ebx
 84dabf7:	89 c6                	mov    %eax,%esi
 84dabf9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dabfc:	89 04 24             	mov    %eax,(%esp)
 84dabff:	e8 7c 32 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dac04:	89 f0                	mov    %esi,%eax
 84dac06:	89 da                	mov    %ebx,%edx
 84dac08:	89 04 24             	mov    %eax,(%esp)
 84dac0b:	e8 40 8b 60 00       	call   8ae3750 <_Unwind_Resume>
 84dac10:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84dac13:	89 04 24             	mov    %eax,(%esp)
 84dac16:	e8 65 32 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dac1b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dac1e:	89 04 24             	mov    %eax,(%esp)
 84dac21:	e8 26 31 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dac26:	c7 44 24 08 be 00 00 	movl   $0xbe,0x8(%esp)
 84dac2d:	00 
 84dac2e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dac35:	00 
 84dac36:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dac39:	89 04 24             	mov    %eax,(%esp)
 84dac3c:	e8 bb 0c bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dac41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dac48:	00 
 84dac49:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dac4c:	89 04 24             	mov    %eax,(%esp)
 84dac4f:	e8 04 0d bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dac54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dac57:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dac5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dac5e:	89 04 24             	mov    %eax,(%esp)
 84dac61:	e8 54 d9 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dac66:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dac69:	89 04 24             	mov    %eax,(%esp)
 84dac6c:	e8 fb 47 d5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84dac71:	89 c3                	mov    %eax,%ebx
 84dac73:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dac76:	89 04 24             	mov    %eax,(%esp)
 84dac79:	e8 12 10 bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84dac7e:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84dac84:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dac88:	89 14 24             	mov    %edx,(%esp)
 84dac8b:	e8 28 27 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84dac90:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84dac97:	00 
 84dac98:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dac9c:	89 04 24             	mov    %eax,(%esp)
 84dac9f:	e8 6a 3e f9 ff       	call   846eb0e <_ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh>
 84daca4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84daca9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dacac:	89 04 24             	mov    %eax,(%esp)
 84dacaf:	e8 cc 31 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dacb4:	eb 1b                	jmp    84dacd1 <_ZN27Inter_NoticeDeleteGuildAgit12dispatch_sigEP5CUserPci+0x1b9>
 84dacb6:	89 d3                	mov    %edx,%ebx
 84dacb8:	89 c6                	mov    %eax,%esi
 84dacba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dacbd:	89 04 24             	mov    %eax,(%esp)
 84dacc0:	e8 bb 31 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dacc5:	89 f0                	mov    %esi,%eax
 84dacc7:	89 da                	mov    %ebx,%edx
 84dacc9:	89 04 24             	mov    %eax,(%esp)
 84daccc:	e8 7f 8a 60 00       	call   8ae3750 <_Unwind_Resume>
 84dacd1:	89 d8                	mov    %ebx,%eax
 84dacd3:	83 c4 30             	add    $0x30,%esp
 84dacd6:	5b                   	pop    %ebx
 84dacd7:	5e                   	pop    %esi
 84dacd8:	5d                   	pop    %ebp
 84dacd9:	c3                   	ret

```

```c
// Inter_NoticeDeleteGuildAgit::dispatch_sig @ 0x84dab18

/* Inter_NoticeDeleteGuildAgit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeDeleteGuildAgit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(char *)(param_3 + 0x16) == '\0') {
    CUser::SetGuildAgitFlag((CUser *)param_2,false);
    iVar1 = *(int *)(local_10 + 0x12);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dabb6 to 084dabf2 has its CatchHandler @ 084dabf5 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xe8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dac3c to 084daca3 has its CatchHandler @ 084dacb6 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbe);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::ChangeGuildAgitFlagInProxy(this,uVar3,'\0');
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xe8,*(undefined1 *)(param_3 + 0x16));
  }
  return 0;
}

```

