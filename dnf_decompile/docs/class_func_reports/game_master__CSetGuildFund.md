# game_master__CSetGuildFund

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084ac6a0 game_master::CSetGuildFund::execute  [0x084ac6a0-0x84ac71f] ===
 84ac6a0:	55                   	push   %ebp
 84ac6a1:	89 e5                	mov    %esp,%ebp
 84ac6a3:	57                   	push   %edi
 84ac6a4:	56                   	push   %esi
 84ac6a5:	53                   	push   %ebx
 84ac6a6:	83 ec 3c             	sub    $0x3c,%esp
 84ac6a9:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac6ac:	89 04 24             	mov    %eax,(%esp)
 84ac6af:	e8 06 79 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ac6b4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ac6b7:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac6ba:	8b 78 08             	mov    0x8(%eax),%edi
 84ac6bd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ac6c0:	89 04 24             	mov    %eax,(%esp)
 84ac6c3:	e8 a4 2d d8 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84ac6c8:	89 c3                	mov    %eax,%ebx
 84ac6ca:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ac6d1:	ff 
 84ac6d2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ac6d5:	89 04 24             	mov    %eax,(%esp)
 84ac6d8:	e8 c3 18 1a 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ac6dd:	89 c6                	mov    %eax,%esi
 84ac6df:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ac6e2:	89 04 24             	mov    %eax,(%esp)
 84ac6e5:	e8 a6 f5 c1 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84ac6ea:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84ac6f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac6f4:	89 14 24             	mov    %edx,(%esp)
 84ac6f7:	e8 bc 0c c7 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84ac6fc:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 84ac703:	00 
 84ac704:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84ac708:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ac70c:	89 74 24 04          	mov    %esi,0x4(%esp)
 84ac710:	89 04 24             	mov    %eax,(%esp)
 84ac713:	e8 90 2a fc ff       	call   846f1a8 <_ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE>
 84ac718:	83 c4 3c             	add    $0x3c,%esp
 84ac71b:	5b                   	pop    %ebx
 84ac71c:	5e                   	pop    %esi
 84ac71d:	5f                   	pop    %edi
 84ac71e:	5d                   	pop    %ebp
 84ac71f:	c3                   	ret

```

```c
// game_master::CSetGuildFund::execute @ 0x84ac6a0

/* game_master::CSetGuildFund::execute() */

void __thiscall game_master::CSetGuildFund::execute(CSetGuildFund *this)

{
  undefined4 uVar1;
  CUserCharacInfo *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CGuildServerProxy *pCVar5;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = CUserCharacInfo::get_charac_guildkey(this_00);
  uVar3 = CUser::get_charac_no((CUser *)this_00,-1);
  uVar4 = CUser::GetServerGroup((CUser *)this_00);
  pCVar5 = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::SendAddGuildFund(pCVar5,uVar3,uVar2,uVar1,2);
  return;
}

```

---

## parse

```asm
// === 084ac668 game_master::CSetGuildFund::parse  [0x084ac668-0x84ac69f] ===
 84ac668:	55                   	push   %ebp
 84ac669:	89 e5                	mov    %esp,%ebp
 84ac66b:	83 ec 18             	sub    $0x18,%esp
 84ac66e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac671:	8b 40 04             	mov    0x4(%eax),%eax
 84ac674:	83 c0 0c             	add    $0xc,%eax
 84ac677:	89 04 24             	mov    %eax,(%esp)
 84ac67a:	e8 e9 29 df ff       	call   829f068 <_Z4trimRSs>
 84ac67f:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac682:	8b 40 04             	mov    0x4(%eax),%eax
 84ac685:	83 c0 0c             	add    $0xc,%eax
 84ac688:	89 04 24             	mov    %eax,(%esp)
 84ac68b:	e8 60 9e 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ac690:	89 04 24             	mov    %eax,(%esp)
 84ac693:	e8 58 20 bd ff       	call   807e6f0 <atoi@plt>
 84ac698:	8b 55 08             	mov    0x8(%ebp),%edx
 84ac69b:	89 42 08             	mov    %eax,0x8(%edx)
 84ac69e:	c9                   	leave
 84ac69f:	c3                   	ret

```

```c
// game_master::CSetGuildFund::parse @ 0x84ac668

/* game_master::CSetGuildFund::parse() */

void __thiscall game_master::CSetGuildFund::parse(CSetGuildFund *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

