# Inter_NoticeCreateGuildAgit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084da98e Inter_NoticeCreateGuildAgit::dispatch_sig  [0x084da98e-0x84dab17] ===
 84da98e:	55                   	push   %ebp
 84da98f:	89 e5                	mov    %esp,%ebp
 84da991:	56                   	push   %esi
 84da992:	53                   	push   %ebx
 84da993:	83 ec 30             	sub    $0x30,%esp
 84da996:	8b 45 10             	mov    0x10(%ebp),%eax
 84da999:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84da99c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da9a3:	00 
 84da9a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da9a7:	89 04 24             	mov    %eax,(%esp)
 84da9aa:	e8 fd 24 01 00       	call   84eceac <_ZN5CUser16SetGuildAgitFlagEb>
 84da9af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84da9b2:	8b 58 12             	mov    0x12(%eax),%ebx
 84da9b5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84da9bc:	ff 
 84da9bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da9c0:	89 04 24             	mov    %eax,(%esp)
 84da9c3:	e8 d8 35 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84da9c8:	39 c3                	cmp    %eax,%ebx
 84da9ca:	0f 94 c0             	sete   %al
 84da9cd:	84 c0                	test   %al,%al
 84da9cf:	0f 84 86 00 00 00    	je     84daa5b <_ZN27Inter_NoticeCreateGuildAgit12dispatch_sigEP5CUserPci+0xcd>
 84da9d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84da9d8:	89 04 24             	mov    %eax,(%esp)
 84da9db:	e8 6c 33 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84da9e0:	c7 44 24 08 e7 00 00 	movl   $0xe7,0x8(%esp)
 84da9e7:	00 
 84da9e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da9ef:	00 
 84da9f0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84da9f3:	89 04 24             	mov    %eax,(%esp)
 84da9f6:	e8 01 0f bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84da9fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84daa02:	00 
 84daa03:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84daa06:	89 04 24             	mov    %eax,(%esp)
 84daa09:	e8 12 0f bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84daa0e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84daa15:	00 
 84daa16:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84daa19:	89 04 24             	mov    %eax,(%esp)
 84daa1c:	e8 37 0f bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84daa21:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84daa24:	89 44 24 04          	mov    %eax,0x4(%esp)
 84daa28:	8b 45 0c             	mov    0xc(%ebp),%eax
 84daa2b:	89 04 24             	mov    %eax,(%esp)
 84daa2e:	e8 87 db 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84daa33:	eb 1b                	jmp    84daa50 <_ZN27Inter_NoticeCreateGuildAgit12dispatch_sigEP5CUserPci+0xc2>
 84daa35:	89 d3                	mov    %edx,%ebx
 84daa37:	89 c6                	mov    %eax,%esi
 84daa39:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84daa3c:	89 04 24             	mov    %eax,(%esp)
 84daa3f:	e8 3c 34 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84daa44:	89 f0                	mov    %esi,%eax
 84daa46:	89 da                	mov    %ebx,%edx
 84daa48:	89 04 24             	mov    %eax,(%esp)
 84daa4b:	e8 00 8d 60 00       	call   8ae3750 <_Unwind_Resume>
 84daa50:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84daa53:	89 04 24             	mov    %eax,(%esp)
 84daa56:	e8 25 34 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84daa5b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84daa5e:	89 04 24             	mov    %eax,(%esp)
 84daa61:	e8 e6 32 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84daa66:	c7 44 24 08 bd 00 00 	movl   $0xbd,0x8(%esp)
 84daa6d:	00 
 84daa6e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84daa75:	00 
 84daa76:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84daa79:	89 04 24             	mov    %eax,(%esp)
 84daa7c:	e8 7b 0e bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84daa81:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84daa88:	00 
 84daa89:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84daa8c:	89 04 24             	mov    %eax,(%esp)
 84daa8f:	e8 c4 0e bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84daa94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84daa97:	89 44 24 04          	mov    %eax,0x4(%esp)
 84daa9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84daa9e:	89 04 24             	mov    %eax,(%esp)
 84daaa1:	e8 14 db 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84daaa6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84daaa9:	89 04 24             	mov    %eax,(%esp)
 84daaac:	e8 bb 49 d5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84daab1:	89 c3                	mov    %eax,%ebx
 84daab3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84daab6:	89 04 24             	mov    %eax,(%esp)
 84daab9:	e8 d2 11 bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84daabe:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84daac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84daac8:	89 14 24             	mov    %edx,(%esp)
 84daacb:	e8 e8 28 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84daad0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84daad7:	00 
 84daad8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84daadc:	89 04 24             	mov    %eax,(%esp)
 84daadf:	e8 2a 40 f9 ff       	call   846eb0e <_ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh>
 84daae4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84daae9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84daaec:	89 04 24             	mov    %eax,(%esp)
 84daaef:	e8 8c 33 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84daaf4:	89 d8                	mov    %ebx,%eax
 84daaf6:	83 c4 30             	add    $0x30,%esp
 84daaf9:	5b                   	pop    %ebx
 84daafa:	5e                   	pop    %esi
 84daafb:	5d                   	pop    %ebp
 84daafc:	c3                   	ret
 84daafd:	89 d3                	mov    %edx,%ebx
 84daaff:	89 c6                	mov    %eax,%esi
 84dab01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dab04:	89 04 24             	mov    %eax,(%esp)
 84dab07:	e8 74 33 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dab0c:	89 f0                	mov    %esi,%eax
 84dab0e:	89 da                	mov    %ebx,%edx
 84dab10:	89 04 24             	mov    %eax,(%esp)
 84dab13:	e8 38 8c 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_NoticeCreateGuildAgit::dispatch_sig @ 0x84da98e

/* Inter_NoticeCreateGuildAgit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeCreateGuildAgit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
  CUser::SetGuildAgitFlag((CUser *)param_2,true);
  iVar1 = *(int *)(local_10 + 0x12);
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar1 == iVar2) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084da9f6 to 084daa32 has its CatchHandler @ 084daa35 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xe7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084daa7c to 084daae3 has its CatchHandler @ 084daafd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbd);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  uVar4 = CUser::GetServerGroup((CUser *)param_2);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::ChangeGuildAgitFlagInProxy(this,uVar3,'\x01');
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

