# game_master__NpcLimitBuyItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b1f28 game_master::NpcLimitBuyItem::execute  [0x084b1f28-0x84b1f8b] ===
 84b1f28:	55                   	push   %ebp
 84b1f29:	89 e5                	mov    %esp,%ebp
 84b1f2b:	53                   	push   %ebx
 84b1f2c:	83 ec 24             	sub    $0x24,%esp
 84b1f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b1f32:	89 04 24             	mov    %eax,(%esp)
 84b1f35:	e8 80 20 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b1f3a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b1f3d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b1f41:	74 41                	je     84b1f84 <_ZN11game_master15NpcLimitBuyItem7executeEv+0x5c>
 84b1f43:	8d 45 ea             	lea    -0x16(%ebp),%eax
 84b1f46:	89 04 24             	mov    %eax,(%esp)
 84b1f49:	e8 b0 22 00 00       	call   84b41fe <_ZN26LimitNpcBuyItemRequestInfoC1Ev>
 84b1f4e:	8d 5d ea             	lea    -0x16(%ebp),%ebx
 84b1f51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b1f54:	89 04 24             	mov    %eax,(%esp)
 84b1f57:	e8 34 9d c1 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84b1f5c:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84b1f62:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b1f66:	89 14 24             	mov    %edx,(%esp)
 84b1f69:	e8 1c 01 c6 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84b1f6e:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84b1f75:	00 
 84b1f76:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b1f7a:	89 04 24             	mov    %eax,(%esp)
 84b1f7d:	e8 72 ee fb ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84b1f82:	eb 01                	jmp    84b1f85 <_ZN11game_master15NpcLimitBuyItem7executeEv+0x5d>
 84b1f84:	90                   	nop
 84b1f85:	83 c4 24             	add    $0x24,%esp
 84b1f88:	5b                   	pop    %ebx
 84b1f89:	5d                   	pop    %ebp
 84b1f8a:	c3                   	ret
 84b1f8b:	90                   	nop

```

```c
// game_master::NpcLimitBuyItem::execute @ 0x84b1f28

/* game_master::NpcLimitBuyItem::execute() */

void __thiscall game_master::NpcLimitBuyItem::execute(NpcLimitBuyItem *this)

{
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  LimitNpcBuyItemRequestInfo local_1a [10];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    LimitNpcBuyItemRequestInfo::LimitNpcBuyItemRequestInfo(local_1a);
    uVar1 = CUser::GetServerGroup(local_10);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar1);
    CMonitorServerProxy::SendPacket(this_00,(char *)local_1a,10);
  }
  return;
}

```

---

## parse

```asm
// === 084b1f22 game_master::NpcLimitBuyItem::parse  [0x084b1f22-0x84b1f27] ===
 84b1f22:	55                   	push   %ebp
 84b1f23:	89 e5                	mov    %esp,%ebp
 84b1f25:	5d                   	pop    %ebp
 84b1f26:	c3                   	ret
 84b1f27:	90                   	nop

```

```c
// game_master::NpcLimitBuyItem::parse @ 0x84b1f22

/* game_master::NpcLimitBuyItem::parse() */

void game_master::NpcLimitBuyItem::parse(void)

{
  return;
}

```

