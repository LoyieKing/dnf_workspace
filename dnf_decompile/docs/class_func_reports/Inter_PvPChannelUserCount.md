# Inter_PvPChannelUserCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d8262 Inter_PvPChannelUserCount::dispatch_sig  [0x084d8262-0x84d82f5] ===
 84d8262:	55                   	push   %ebp
 84d8263:	89 e5                	mov    %esp,%ebp
 84d8265:	53                   	push   %ebx
 84d8266:	83 ec 24             	sub    $0x24,%esp
 84d8269:	8b 45 10             	mov    0x10(%ebp),%eax
 84d826c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d826f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d8272:	8b 40 12             	mov    0x12(%eax),%eax
 84d8275:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8279:	c7 04 24 80 e0 43 09 	movl   $0x943e080,(%esp)
 84d8280:	e8 0f 51 01 00       	call   84ed394 <_ZN10CSchoolMgr12GetUserCountEj>
 84d8285:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d8288:	89 42 1a             	mov    %eax,0x1a(%edx)
 84d828b:	e8 f1 3e bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84d8290:	89 04 24             	mov    %eax,(%esp)
 84d8293:	e8 32 28 c7 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84d8298:	89 c2                	mov    %eax,%edx
 84d829a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d829d:	89 50 16             	mov    %edx,0x16(%eax)
 84d82a0:	e8 d6 50 01 00       	call   84ed37b <_ZN12CLeagueMatch22GetPlayCountPerOneTeamEv>
 84d82a5:	0f b6 d0             	movzbl %al,%edx
 84d82a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d82ab:	89 50 22             	mov    %edx,0x22(%eax)
 84d82ae:	e8 d4 50 01 00       	call   84ed387 <_ZN12CLeagueMatch13GetBattleModeEv>
 84d82b3:	0f b6 d0             	movzbl %al,%edx
 84d82b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d82b9:	89 50 26             	mov    %edx,0x26(%eax)
 84d82bc:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84d82bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d82c2:	8b 50 1e             	mov    0x1e(%eax),%edx
 84d82c5:	a1 28 be 40 09       	mov    0x940be28,%eax
 84d82ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d82ce:	89 04 24             	mov    %eax,(%esp)
 84d82d1:	e8 b4 9d c3 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d82d6:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 84d82dd:	00 
 84d82de:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d82e2:	89 04 24             	mov    %eax,(%esp)
 84d82e5:	e8 5a 8b f9 ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84d82ea:	b8 00 00 00 00       	mov    $0x0,%eax
 84d82ef:	83 c4 24             	add    $0x24,%esp
 84d82f2:	5b                   	pop    %ebx
 84d82f3:	5d                   	pop    %ebp
 84d82f4:	c3                   	ret
 84d82f5:	90                   	nop

```

```c
// Inter_PvPChannelUserCount::dispatch_sig @ 0x84d8262

/* Inter_PvPChannelUserCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PvPChannelUserCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CEnvironment *this;
  uint uVar2;
  CMonitorServerProxy *this_00;
  
  uVar1 = CSchoolMgr::GetUserCount(0x943e080);
  *(undefined4 *)(param_3 + 0x1a) = uVar1;
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_channel_no(this);
  *(undefined4 *)(param_3 + 0x16) = uVar1;
  uVar2 = CLeagueMatch::GetPlayCountPerOneTeam();
  *(uint *)(param_3 + 0x22) = uVar2 & 0xff;
  uVar2 = CLeagueMatch::GetBattleMode();
  *(uint *)(param_3 + 0x26) = uVar2 & 0xff;
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(param_3 + 0x1e));
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)param_3,0x2a);
  return 0;
}

```

