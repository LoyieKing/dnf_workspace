# Inter_TOD_ReturnToMonitor_APCSettingComplete

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4d90 Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig  [0x084e4d90-0x84e4e25] ===
 84e4d90:	55                   	push   %ebp
 84e4d91:	89 e5                	mov    %esp,%ebp
 84e4d93:	53                   	push   %ebx
 84e4d94:	83 ec 34             	sub    $0x34,%esp
 84e4d97:	e8 e5 73 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e4d9c:	89 04 24             	mov    %eax,(%esp)
 84e4d9f:	e8 3c 1f c2 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 84e4da4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4da7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84e4daa:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e4db1:	00 
 84e4db2:	c7 44 24 08 f7 61 00 	movl   $0x61f7,0x8(%esp)
 84e4db9:	00 
 84e4dba:	c7 44 24 04 e0 b6 c8 	movl   $0x8c8b6e0,0x4(%esp)
 84e4dc1:	08 
 84e4dc2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e4dc5:	89 04 24             	mov    %eax,(%esp)
 84e4dc8:	e8 4b a9 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e4dcd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e4dd1:	c7 44 24 04 d0 a0 c8 	movl   $0x8c8a0d0,0x4(%esp)
 84e4dd8:	08 
 84e4dd9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e4ddc:	89 04 24             	mov    %eax,(%esp)
 84e4ddf:	e8 a4 a9 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e4de4:	8d 45 da             	lea    -0x26(%ebp),%eax
 84e4de7:	89 04 24             	mov    %eax,(%esp)
 84e4dea:	e8 5d 47 00 00       	call   84e954c <_ZN25Packet_TOD_DoRandomSelectC1Ev>
 84e4def:	8d 5d da             	lea    -0x26(%ebp),%ebx
 84e4df2:	a1 28 be 40 09       	mov    0x940be28,%eax
 84e4df7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e4dfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4dfe:	89 04 24             	mov    %eax,(%esp)
 84e4e01:	e8 84 d2 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e4e06:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84e4e0d:	00 
 84e4e0e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e4e12:	89 04 24             	mov    %eax,(%esp)
 84e4e15:	e8 2a c0 f8 ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84e4e1a:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4e1f:	83 c4 34             	add    $0x34,%esp
 84e4e22:	5b                   	pop    %ebx
 84e4e23:	5d                   	pop    %ebp
 84e4e24:	c3                   	ret
 84e4e25:	90                   	nop

```

```c
// Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig @ 0x84e4d90

/* Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CEnvironment *this;
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  Packet_TOD_DoRandomSelect local_2a [10];
  cMyTrace local_20 [16];
  undefined4 local_10;
  
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_server_group(this);
  local_10 = uVar1;
  cMyTrace::cMyTrace(local_20,
                     "virtual int Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser*, char*, int)"
                     ,0x61f7,5);
  cMyTrace::operator()(local_20,"TOD Random Select Complete. send->monitor group(%d)",uVar1);
  Packet_TOD_DoRandomSelect::Packet_TOD_DoRandomSelect(local_2a);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,local_10);
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_2a,10);
  return 0;
}

```

