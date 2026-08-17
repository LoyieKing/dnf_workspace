# Dispatcher_RefreshGuildInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d4886 Dispatcher_RefreshGuildInfo::process  [0x081d4886-0x81d491f] ===
 81d4886:	55                   	push   %ebp
 81d4887:	89 e5                	mov    %esp,%ebp
 81d4889:	56                   	push   %esi
 81d488a:	53                   	push   %ebx
 81d488b:	83 ec 10             	sub    $0x10,%esp
 81d488e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d4891:	89 04 24             	mov    %eax,(%esp)
 81d4894:	e8 f3 5a f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d4899:	83 f8 02             	cmp    $0x2,%eax
 81d489c:	0f 9e c0             	setle  %al
 81d489f:	84 c0                	test   %al,%al
 81d48a1:	74 07                	je     81d48aa <_ZN27Dispatcher_RefreshGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x24>
 81d48a3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d48a8:	eb 6f                	jmp    81d4919 <_ZN27Dispatcher_RefreshGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x93>
 81d48aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d48ad:	89 04 24             	mov    %eax,(%esp)
 81d48b0:	e8 b7 ab 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d48b5:	85 c0                	test   %eax,%eax
 81d48b7:	0f 94 c0             	sete   %al
 81d48ba:	84 c0                	test   %al,%al
 81d48bc:	74 07                	je     81d48c5 <_ZN27Dispatcher_RefreshGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81d48be:	b8 00 00 00 00       	mov    $0x0,%eax
 81d48c3:	eb 54                	jmp    81d4919 <_ZN27Dispatcher_RefreshGuildInfo7processEP5CUserR8MSG_BASER9ParamBase+0x93>
 81d48c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d48c8:	89 04 24             	mov    %eax,(%esp)
 81d48cb:	e8 9c ab 05 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81d48d0:	89 c3                	mov    %eax,%ebx
 81d48d2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81d48d9:	ff 
 81d48da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d48dd:	89 04 24             	mov    %eax,(%esp)
 81d48e0:	e8 bb 96 47 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81d48e5:	89 c6                	mov    %eax,%esi
 81d48e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d48ea:	89 04 24             	mov    %eax,(%esp)
 81d48ed:	e8 9e 73 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81d48f2:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81d48f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d48fc:	89 14 24             	mov    %edx,(%esp)
 81d48ff:	e8 b4 8a f4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81d4904:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d4908:	89 74 24 04          	mov    %esi,0x4(%esp)
 81d490c:	89 04 24             	mov    %eax,(%esp)
 81d490f:	e8 58 a8 29 00       	call   846f16c <_ZN17CGuildServerProxy20SendRefreshGuildInfoEjj>
 81d4914:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4919:	83 c4 10             	add    $0x10,%esp
 81d491c:	5b                   	pop    %ebx
 81d491d:	5e                   	pop    %esi
 81d491e:	5d                   	pop    %ebp
 81d491f:	c3                   	ret

```

```c
// Dispatcher_RefreshGuildInfo::process @ 0x81d4886

/* Dispatcher_RefreshGuildInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_RefreshGuildInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar1 != 0)) {
    uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendRefreshGuildInfo(this,uVar3,uVar2);
  }
  return 0;
}

```

---

## read

```asm
// === 081d487c Dispatcher_RefreshGuildInfo::read  [0x081d487c-0x81d4885] ===
 81d487c:	55                   	push   %ebp
 81d487d:	89 e5                	mov    %esp,%ebp
 81d487f:	b8 00 00 00 00       	mov    $0x0,%eax
 81d4884:	5d                   	pop    %ebp
 81d4885:	c3                   	ret

```

```c
// Dispatcher_RefreshGuildInfo::read @ 0x81d487c

/* Dispatcher_RefreshGuildInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_RefreshGuildInfo::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

