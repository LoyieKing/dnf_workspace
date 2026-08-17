# Inter_GuildExpLimit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dcaee Inter_GuildExpLimit::dispatch_sig  [0x084dcaee-0x84dcb17] ===
 84dcaee:	55                   	push   %ebp
 84dcaef:	89 e5                	mov    %esp,%ebp
 84dcaf1:	83 ec 18             	sub    $0x18,%esp
 84dcaf4:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84dcaf9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dcb00:	00 
 84dcb01:	89 04 24             	mov    %eax,(%esp)
 84dcb04:	e8 af 08 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84dcb09:	89 04 24             	mov    %eax,(%esp)
 84dcb0c:	e8 33 23 f9 ff       	call   846ee44 <_ZN17CGuildServerProxy17SendGuildExpLimitEv>
 84dcb11:	b8 00 00 00 00       	mov    $0x0,%eax
 84dcb16:	c9                   	leave
 84dcb17:	c3                   	ret

```

```c
// Inter_GuildExpLimit::dispatch_sig @ 0x84dcaee

/* Inter_GuildExpLimit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildExpLimit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CGuildServerProxy *this;
  
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
  CGuildServerProxy::SendGuildExpLimit(this);
  return 0;
}

```

