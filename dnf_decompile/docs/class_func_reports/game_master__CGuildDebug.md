# game_master__CGuildDebug

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ac76c game_master::CGuildDebug::execute  [0x084ac76c-0x84ac809] ===
 84ac76c:	55                   	push   %ebp
 84ac76d:	89 e5                	mov    %esp,%ebp
 84ac76f:	56                   	push   %esi
 84ac770:	53                   	push   %ebx
 84ac771:	83 ec 40             	sub    $0x40,%esp
 84ac774:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac777:	89 04 24             	mov    %eax,(%esp)
 84ac77a:	e8 3b 78 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ac77f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ac782:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 84ac785:	89 04 24             	mov    %eax,(%esp)
 84ac788:	e8 1b 7a 00 00       	call   84b41a8 <_ZN18Packet_Guild_DebugC1Ev>
 84ac78d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ac794:	ff 
 84ac795:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac798:	89 04 24             	mov    %eax,(%esp)
 84ac79b:	e8 00 18 1a 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ac7a0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ac7a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac7a6:	89 04 24             	mov    %eax,(%esp)
 84ac7a9:	e8 be 2c d8 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84ac7ae:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84ac7b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac7b4:	8b 40 08             	mov    0x8(%eax),%eax
 84ac7b7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84ac7ba:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac7bd:	8b 40 0c             	mov    0xc(%eax),%eax
 84ac7c0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84ac7c3:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac7c6:	8b 40 10             	mov    0x10(%eax),%eax
 84ac7c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ac7cc:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 84ac7d0:	0f b7 f0             	movzwl %ax,%esi
 84ac7d3:	8d 5d d6             	lea    -0x2a(%ebp),%ebx
 84ac7d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac7d9:	89 04 24             	mov    %eax,(%esp)
 84ac7dc:	e8 af f4 c1 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84ac7e1:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84ac7e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac7eb:	89 14 24             	mov    %edx,(%esp)
 84ac7ee:	e8 c5 0b c7 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84ac7f3:	89 74 24 08          	mov    %esi,0x8(%esp)
 84ac7f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ac7fb:	89 04 24             	mov    %eax,(%esp)
 84ac7fe:	e8 cb 14 fc ff       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 84ac803:	83 c4 40             	add    $0x40,%esp
 84ac806:	5b                   	pop    %ebx
 84ac807:	5e                   	pop    %esi
 84ac808:	5d                   	pop    %ebp
 84ac809:	c3                   	ret

```

```c
// game_master::CGuildDebug::execute @ 0x84ac76c

/* game_master::CGuildDebug::execute() */

void __thiscall game_master::CGuildDebug::execute(CGuildDebug *this)

{
  undefined4 uVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Debug local_2e [2];
  ushort local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  Packet_Guild_Debug::Packet_Guild_Debug(local_2e);
  local_20 = CUser::get_charac_no(local_10,-1);
  local_24 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_10);
  local_1c = *(undefined4 *)(this + 8);
  local_18 = *(undefined4 *)(this + 0xc);
  local_14 = *(undefined4 *)(this + 0x10);
  uVar1 = CUser::GetServerGroup(local_10);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar1);
  CGuildServerProxy::SendTcpPacket(this_00,(char *)local_2e,(uint)local_2c);
  return;
}

```

---

## parse

```asm
// === 084ac720 game_master::CGuildDebug::parse  [0x084ac720-0x84ac76b] ===
 84ac720:	55                   	push   %ebp
 84ac721:	89 e5                	mov    %esp,%ebp
 84ac723:	83 ec 18             	sub    $0x18,%esp
 84ac726:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac729:	8b 40 04             	mov    0x4(%eax),%eax
 84ac72c:	83 c0 0c             	add    $0xc,%eax
 84ac72f:	89 04 24             	mov    %eax,(%esp)
 84ac732:	e8 31 29 df ff       	call   829f068 <_Z4trimRSs>
 84ac737:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac73a:	8b 40 04             	mov    0x4(%eax),%eax
 84ac73d:	83 c0 0c             	add    $0xc,%eax
 84ac740:	89 04 24             	mov    %eax,(%esp)
 84ac743:	e8 a8 9d 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ac748:	89 04 24             	mov    %eax,(%esp)
 84ac74b:	e8 a0 1f bd ff       	call   807e6f0 <atoi@plt>
 84ac750:	8b 55 08             	mov    0x8(%ebp),%edx
 84ac753:	89 42 08             	mov    %eax,0x8(%edx)
 84ac756:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac759:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 84ac760:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac763:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 84ac76a:	c9                   	leave
 84ac76b:	c3                   	ret

```

```c
// game_master::CGuildDebug::parse @ 0x84ac720

/* game_master::CGuildDebug::parse() */

void __thiscall game_master::CGuildDebug::parse(CGuildDebug *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

```

