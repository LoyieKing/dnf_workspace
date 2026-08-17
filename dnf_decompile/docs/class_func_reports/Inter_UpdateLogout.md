# Inter_UpdateLogout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ce548 Inter_UpdateLogout::dispatch_sig  [0x084ce548-0x84ce5c3] ===
 84ce548:	55                   	push   %ebp
 84ce549:	89 e5                	mov    %esp,%ebp
 84ce54b:	53                   	push   %ebx
 84ce54c:	83 ec 34             	sub    $0x34,%esp
 84ce54f:	8b 45 10             	mov    0x10(%ebp),%eax
 84ce552:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ce555:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce558:	8b 00                	mov    (%eax),%eax
 84ce55a:	85 c0                	test   %eax,%eax
 84ce55c:	75 07                	jne    84ce565 <_ZN18Inter_UpdateLogout12dispatch_sigEP5CUserPci+0x1d>
 84ce55e:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce563:	eb 58                	jmp    84ce5bd <_ZN18Inter_UpdateLogout12dispatch_sigEP5CUserPci+0x75>
 84ce565:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 84ce568:	89 04 24             	mov    %eax,(%esp)
 84ce56b:	e8 cc ad 01 00       	call   84e933c <_ZN34Packet_Monitor_UDP_Logout_CompleteC1Ev>
 84ce570:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce573:	8b 00                	mov    (%eax),%eax
 84ce575:	89 45 ef             	mov    %eax,-0x11(%ebp)
 84ce578:	e8 04 dc bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84ce57d:	89 04 24             	mov    %eax,(%esp)
 84ce580:	e8 45 c5 c7 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84ce585:	88 45 f3             	mov    %al,-0xd(%ebp)
 84ce588:	8d 5d e5             	lea    -0x1b(%ebp),%ebx
 84ce58b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce58e:	8b 40 0e             	mov    0xe(%eax),%eax
 84ce591:	89 c2                	mov    %eax,%edx
 84ce593:	a1 28 be 40 09       	mov    0x940be28,%eax
 84ce598:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce59c:	89 04 24             	mov    %eax,(%esp)
 84ce59f:	e8 e6 3a c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84ce5a4:	c7 44 24 08 0f 00 00 	movl   $0xf,0x8(%esp)
 84ce5ab:	00 
 84ce5ac:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ce5b0:	89 04 24             	mov    %eax,(%esp)
 84ce5b3:	e8 8c 28 fa ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84ce5b8:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce5bd:	83 c4 34             	add    $0x34,%esp
 84ce5c0:	5b                   	pop    %ebx
 84ce5c1:	5d                   	pop    %ebp
 84ce5c2:	c3                   	ret
 84ce5c3:	90                   	nop

```

```c
// Inter_UpdateLogout::dispatch_sig @ 0x84ce548

/* Inter_UpdateLogout::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateLogout::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CEnvironment *this;
  CMonitorServerProxy *this_00;
  Packet_Monitor_UDP_Logout_Complete local_1f [10];
  undefined4 local_15;
  undefined1 local_11;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)param_3;
  if (*(int *)param_3 != 0) {
    Packet_Monitor_UDP_Logout_Complete::Packet_Monitor_UDP_Logout_Complete(local_1f);
    local_15 = *local_10;
    this = (CEnvironment *)G_CEnvironment();
    local_11 = CEnvironment::get_channel_no(this);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)((int)local_10 + 0xe));
    CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_1f,0xf);
  }
  return 0;
}

```

