# Dispatcher_NotifyMessageToGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08207ffe Dispatcher_NotifyMessageToGuild::dispatch_sig  [0x08207ffe-0x82082d5] ===
 8207ffe:	55                   	push   %ebp
 8207fff:	89 e5                	mov    %esp,%ebp
 8208001:	56                   	push   %esi
 8208002:	53                   	push   %ebx
 8208003:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8208009:	8b 45 0c             	mov    0xc(%ebp),%eax
 820800c:	89 04 24             	mov    %eax,(%esp)
 820800f:	e8 78 23 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8208014:	83 f8 02             	cmp    $0x2,%eax
 8208017:	7e 0f                	jle    8208028 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 8208019:	8b 45 0c             	mov    0xc(%ebp),%eax
 820801c:	89 04 24             	mov    %eax,(%esp)
 820801f:	e8 0e 84 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8208024:	85 c0                	test   %eax,%eax
 8208026:	75 07                	jne    820802f <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x31>
 8208028:	b8 01 00 00 00       	mov    $0x1,%eax
 820802d:	eb 05                	jmp    8208034 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x36>
 820802f:	b8 00 00 00 00       	mov    $0x0,%eax
 8208034:	84 c0                	test   %al,%al
 8208036:	74 2b                	je     8208063 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x65>
 8208038:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820803f:	00 
 8208040:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208047:	00 
 8208048:	c7 44 24 04 c0 e7 bc 	movl   $0x8bce7c0,0x4(%esp)
 820804f:	08 
 8208050:	c7 04 24 f4 a2 00 00 	movl   $0xa2f4,(%esp)
 8208057:	e8 7b 88 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820805c:	89 c3                	mov    %eax,%ebx
 820805e:	e9 66 02 00 00       	jmp    82082c9 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 8208063:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208066:	89 04 24             	mov    %eax,(%esp)
 8208069:	e8 fe 73 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 820806e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8208071:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8208075:	75 25                	jne    820809c <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x9e>
 8208077:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 820807e:	00 
 820807f:	c7 44 24 04 9d 00 00 	movl   $0x9d,0x4(%esp)
 8208086:	00 
 8208087:	8b 45 0c             	mov    0xc(%ebp),%eax
 820808a:	89 04 24             	mov    %eax,(%esp)
 820808d:	e8 b0 3e 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8208092:	bb 00 00 00 00       	mov    $0x0,%ebx
 8208097:	e9 2d 02 00 00       	jmp    82082c9 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 820809c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820809f:	89 04 24             	mov    %eax,(%esp)
 82080a2:	e8 6d 43 46 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 82080a7:	83 f0 01             	xor    $0x1,%eax
 82080aa:	84 c0                	test   %al,%al
 82080ac:	74 19                	je     82080c7 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 82080ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 82080b1:	89 04 24             	mov    %eax,(%esp)
 82080b4:	e8 b9 80 02 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 82080b9:	83 f0 01             	xor    $0x1,%eax
 82080bc:	84 c0                	test   %al,%al
 82080be:	74 07                	je     82080c7 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 82080c0:	b8 01 00 00 00       	mov    $0x1,%eax
 82080c5:	eb 05                	jmp    82080cc <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0xce>
 82080c7:	b8 00 00 00 00       	mov    $0x0,%eax
 82080cc:	84 c0                	test   %al,%al
 82080ce:	74 25                	je     82080f5 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0xf7>
 82080d0:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 82080d7:	00 
 82080d8:	c7 44 24 04 9d 00 00 	movl   $0x9d,0x4(%esp)
 82080df:	00 
 82080e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82080e3:	89 04 24             	mov    %eax,(%esp)
 82080e6:	e8 57 3e 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82080eb:	bb 00 00 00 00       	mov    $0x0,%ebx
 82080f0:	e9 d4 01 00 00       	jmp    82082c9 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 82080f5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82080fc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82080ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208103:	8b 45 10             	mov    0x10(%ebp),%eax
 8208106:	89 04 24             	mov    %eax,(%esp)
 8208109:	e8 e2 4f 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 820810e:	83 f0 01             	xor    $0x1,%eax
 8208111:	84 c0                	test   %al,%al
 8208113:	74 2b                	je     8208140 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x142>
 8208115:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820811c:	00 
 820811d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208124:	00 
 8208125:	c7 44 24 04 c0 e7 bc 	movl   $0x8bce7c0,0x4(%esp)
 820812c:	08 
 820812d:	c7 04 24 09 a3 00 00 	movl   $0xa309,(%esp)
 8208134:	e8 9e 87 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208139:	89 c3                	mov    %eax,%ebx
 820813b:	e9 89 01 00 00       	jmp    82082c9 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 8208140:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208143:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8208147:	c7 44 24 08 65 00 00 	movl   $0x65,0x8(%esp)
 820814e:	00 
 820814f:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 8208155:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208159:	8b 45 10             	mov    0x10(%ebp),%eax
 820815c:	89 04 24             	mov    %eax,(%esp)
 820815f:	e8 58 51 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 8208164:	83 f0 01             	xor    $0x1,%eax
 8208167:	84 c0                	test   %al,%al
 8208169:	74 2b                	je     8208196 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x198>
 820816b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208172:	00 
 8208173:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820817a:	00 
 820817b:	c7 44 24 04 c0 e7 bc 	movl   $0x8bce7c0,0x4(%esp)
 8208182:	08 
 8208183:	c7 04 24 0c a3 00 00 	movl   $0xa30c,(%esp)
 820818a:	e8 48 87 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820818f:	89 c3                	mov    %eax,%ebx
 8208191:	e9 33 01 00 00       	jmp    82082c9 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 8208196:	e8 00 40 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 820819b:	8d 95 7f ff ff ff    	lea    -0x81(%ebp),%edx
 82081a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82081a5:	89 04 24             	mov    %eax,(%esp)
 82081a8:	e8 c5 b2 15 00       	call   8363472 <_ZN12CDataManager16hasPreventStringEPKc>
 82081ad:	84 c0                	test   %al,%al
 82081af:	75 1b                	jne    82081cc <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x1ce>
 82081b1:	e8 e5 3f ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 82081b6:	8d 95 7f ff ff ff    	lea    -0x81(%ebp),%edx
 82081bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 82081c0:	89 04 24             	mov    %eax,(%esp)
 82081c3:	e8 46 ac 15 00       	call   8362e0e <_ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc>
 82081c8:	84 c0                	test   %al,%al
 82081ca:	74 07                	je     82081d3 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x1d5>
 82081cc:	b8 01 00 00 00       	mov    $0x1,%eax
 82081d1:	eb 05                	jmp    82081d8 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x1da>
 82081d3:	b8 00 00 00 00       	mov    $0x0,%eax
 82081d8:	84 c0                	test   %al,%al
 82081da:	74 25                	je     8208201 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x203>
 82081dc:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 82081e3:	00 
 82081e4:	c7 44 24 04 9d 00 00 	movl   $0x9d,0x4(%esp)
 82081eb:	00 
 82081ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 82081ef:	89 04 24             	mov    %eax,(%esp)
 82081f2:	e8 4b 3d 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82081f7:	bb 00 00 00 00       	mov    $0x0,%ebx
 82081fc:	e9 c8 00 00 00       	jmp    82082c9 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 8208201:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8208204:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208207:	89 04 24             	mov    %eax,(%esp)
 820820a:	e8 81 3a ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 820820f:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8208215:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208219:	89 14 24             	mov    %edx,(%esp)
 820821c:	e8 97 51 f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8208221:	8d 95 7f ff ff ff    	lea    -0x81(%ebp),%edx
 8208227:	89 54 24 0c          	mov    %edx,0xc(%esp)
 820822b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 820822f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8208232:	89 54 24 04          	mov    %edx,0x4(%esp)
 8208236:	89 04 24             	mov    %eax,(%esp)
 8208239:	e8 b6 5f 26 00       	call   846e1f4 <_ZN17CGuildServerProxy18SendMessageToGuildEjiPc>
 820823e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208241:	89 04 24             	mov    %eax,(%esp)
 8208244:	e8 03 5b 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8208249:	c7 44 24 08 9d 00 00 	movl   $0x9d,0x8(%esp)
 8208250:	00 
 8208251:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8208258:	00 
 8208259:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820825c:	89 04 24             	mov    %eax,(%esp)
 820825f:	e8 98 36 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8208264:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820826b:	00 
 820826c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820826f:	89 04 24             	mov    %eax,(%esp)
 8208272:	e8 a9 36 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8208277:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820827e:	00 
 820827f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208282:	89 04 24             	mov    %eax,(%esp)
 8208285:	e8 ce 36 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820828a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820828d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208291:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208294:	89 04 24             	mov    %eax,(%esp)
 8208297:	e8 1e 03 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820829c:	bb 00 00 00 00       	mov    $0x0,%ebx
 82082a1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82082a4:	89 04 24             	mov    %eax,(%esp)
 82082a7:	e8 d4 5b 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82082ac:	eb 1b                	jmp    82082c9 <_ZN31Dispatcher_NotifyMessageToGuild12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 82082ae:	89 d3                	mov    %edx,%ebx
 82082b0:	89 c6                	mov    %eax,%esi
 82082b2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82082b5:	89 04 24             	mov    %eax,(%esp)
 82082b8:	e8 c3 5b 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82082bd:	89 f0                	mov    %esi,%eax
 82082bf:	89 da                	mov    %ebx,%edx
 82082c1:	89 04 24             	mov    %eax,(%esp)
 82082c4:	e8 87 b4 8d 00       	call   8ae3750 <_Unwind_Resume>
 82082c9:	89 d8                	mov    %ebx,%eax
 82082cb:	81 c4 90 00 00 00    	add    $0x90,%esp
 82082d1:	5b                   	pop    %ebx
 82082d2:	5e                   	pop    %esi
 82082d3:	5d                   	pop    %ebp
 82082d4:	c3                   	ret
 82082d5:	90                   	nop

```

```c
// Dispatcher_NotifyMessageToGuild::dispatch_sig @ 0x8207ffe

/* Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_NotifyMessageToGuild::dispatch_sig
          (Dispatcher_NotifyMessageToGuild *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  CGuildServerProxy *this_00;
  char local_85 [101];
  PacketGuard local_20 [12];
  int local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xa2f4,
                     "virtual int Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  local_10 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (local_10 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x9d,0x22);
    return 0;
  }
  cVar2 = CUser::IsSubGuildMaster(param_1);
  if ((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x9d,0x24);
    return 0;
  }
  local_14 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_14);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xa309,
                     "virtual int Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_str(param_2,local_85,0x65,local_14);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0xa30c,
                     "virtual int Dispatcher_NotifyMessageToGuild::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar4;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  cVar2 = CDataManager::hasPreventString(pCVar5,local_85);
  if (cVar2 == '\0') {
    pCVar5 = (CDataManager *)G_CDataManager();
    cVar2 = CDataManager::hasSpecialCharacterExceptSpace(pCVar5,local_85);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_082081d8;
    }
  }
  bVar1 = true;
LAB_082081d8:
  iVar3 = local_14;
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x9d,0x6c);
  }
  else {
    uVar4 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendMessageToGuild(this_00,local_10,iVar3,local_85);
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0820825f to 0820829b has its CatchHandler @ 082082ae */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x9d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send(param_1,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

