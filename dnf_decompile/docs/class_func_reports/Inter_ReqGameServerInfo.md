# Inter_ReqGameServerInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e2b94 Inter_ReqGameServerInfo::dispatch_sig  [0x084e2b94-0x84e2ded] ===
 84e2b94:	55                   	push   %ebp
 84e2b95:	89 e5                	mov    %esp,%ebp
 84e2b97:	57                   	push   %edi
 84e2b98:	56                   	push   %esi
 84e2b99:	53                   	push   %ebx
 84e2b9a:	83 ec 4c             	sub    $0x4c,%esp
 84e2b9d:	8b 45 10             	mov    0x10(%ebp),%eax
 84e2ba0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e2ba3:	e8 ff 77 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e2ba8:	89 04 24             	mov    %eax,(%esp)
 84e2bab:	e8 70 3f c3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84e2bb0:	83 f8 07             	cmp    $0x7,%eax
 84e2bb3:	0f 94 c0             	sete   %al
 84e2bb6:	84 c0                	test   %al,%al
 84e2bb8:	0f 85 22 02 00 00    	jne    84e2de0 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x24c>
 84e2bbe:	e8 e4 77 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e2bc3:	89 04 24             	mov    %eax,(%esp)
 84e2bc6:	e8 53 e7 c0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84e2bcb:	84 c0                	test   %al,%al
 84e2bcd:	0f 84 13 01 00 00    	je     84e2ce6 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x152>
 84e2bd3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e2bd6:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e2bda:	0f b6 c0             	movzbl %al,%eax
 84e2bdd:	85 c0                	test   %eax,%eax
 84e2bdf:	74 0e                	je     84e2bef <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x5b>
 84e2be1:	83 f8 01             	cmp    $0x1,%eax
 84e2be4:	0f 84 81 00 00 00    	je     84e2c6b <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0xd7>
 84e2bea:	e9 f1 01 00 00       	jmp    84e2de0 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x24c>
 84e2bef:	e8 8d 95 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2bf4:	89 04 24             	mov    %eax,(%esp)
 84e2bf7:	e8 ce 7e c6 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84e2bfc:	0f b6 c0             	movzbl %al,%eax
 84e2bff:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84e2c02:	e8 7a 95 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2c07:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84e2c0d:	0f b6 f8             	movzbl %al,%edi
 84e2c10:	e8 6c 95 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2c15:	89 04 24             	mov    %eax,(%esp)
 84e2c18:	e8 4d 41 dc ff       	call   82a6d6a <_ZN12CEnvironment12get_udp_portEv>
 84e2c1d:	0f b7 f0             	movzwl %ax,%esi
 84e2c20:	e8 5c 95 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2c25:	89 04 24             	mov    %eax,(%esp)
 84e2c28:	e8 af a5 00 00       	call   84ed1dc <_ZN12CEnvironment13get_server_ipEv>
 84e2c2d:	89 c3                	mov    %eax,%ebx
 84e2c2f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e2c32:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84e2c36:	0f b6 d0             	movzbl %al,%edx
 84e2c39:	a1 28 be 40 09       	mov    0x940be28,%eax
 84e2c3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e2c42:	89 04 24             	mov    %eax,(%esp)
 84e2c45:	e8 40 f4 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e2c4a:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84e2c4d:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e2c51:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84e2c55:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e2c59:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e2c5d:	89 04 24             	mov    %eax,(%esp)
 84e2c60:	e8 87 e8 f8 ff       	call   84714ec <_ZN19CMonitorServerProxy18SendGameServerInfoEPcthh>
 84e2c65:	90                   	nop
 84e2c66:	e9 75 01 00 00       	jmp    84e2de0 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x24c>
 84e2c6b:	e8 11 95 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2c70:	89 04 24             	mov    %eax,(%esp)
 84e2c73:	e8 52 7e c6 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84e2c78:	0f b6 c0             	movzbl %al,%eax
 84e2c7b:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84e2c7e:	e8 fe 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2c83:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84e2c89:	0f b6 f8             	movzbl %al,%edi
 84e2c8c:	e8 f0 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2c91:	89 04 24             	mov    %eax,(%esp)
 84e2c94:	e8 d1 40 dc ff       	call   82a6d6a <_ZN12CEnvironment12get_udp_portEv>
 84e2c99:	0f b7 f0             	movzwl %ax,%esi
 84e2c9c:	e8 e0 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2ca1:	89 04 24             	mov    %eax,(%esp)
 84e2ca4:	e8 33 a5 00 00       	call   84ed1dc <_ZN12CEnvironment13get_server_ipEv>
 84e2ca9:	89 c3                	mov    %eax,%ebx
 84e2cab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e2cae:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84e2cb2:	0f b6 d0             	movzbl %al,%edx
 84e2cb5:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84e2cba:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e2cbe:	89 04 24             	mov    %eax,(%esp)
 84e2cc1:	e8 f2 a6 c3 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e2cc6:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84e2cc9:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e2ccd:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84e2cd1:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e2cd5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e2cd9:	89 04 24             	mov    %eax,(%esp)
 84e2cdc:	e8 11 c4 f8 ff       	call   846f0f2 <_ZN17CGuildServerProxy18SendGameServerInfoEPcthh>
 84e2ce1:	e9 fa 00 00 00       	jmp    84e2de0 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x24c>
 84e2ce6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e2ce9:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84e2ced:	0f b6 c0             	movzbl %al,%eax
 84e2cf0:	85 c0                	test   %eax,%eax
 84e2cf2:	74 0a                	je     84e2cfe <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x16a>
 84e2cf4:	83 f8 01             	cmp    $0x1,%eax
 84e2cf7:	74 77                	je     84e2d70 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x1dc>
 84e2cf9:	e9 e2 00 00 00       	jmp    84e2de0 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x24c>
 84e2cfe:	e8 7e 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2d03:	89 04 24             	mov    %eax,(%esp)
 84e2d06:	e8 bf 7d c6 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84e2d0b:	0f b6 c0             	movzbl %al,%eax
 84e2d0e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84e2d11:	e8 6b 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2d16:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84e2d1c:	0f b6 f8             	movzbl %al,%edi
 84e2d1f:	e8 5d 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2d24:	89 04 24             	mov    %eax,(%esp)
 84e2d27:	e8 3e 40 dc ff       	call   82a6d6a <_ZN12CEnvironment12get_udp_portEv>
 84e2d2c:	0f b7 f0             	movzwl %ax,%esi
 84e2d2f:	e8 4d 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2d34:	89 04 24             	mov    %eax,(%esp)
 84e2d37:	e8 a0 a4 00 00       	call   84ed1dc <_ZN12CEnvironment13get_server_ipEv>
 84e2d3c:	89 c3                	mov    %eax,%ebx
 84e2d3e:	a1 28 be 40 09       	mov    0x940be28,%eax
 84e2d43:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e2d4a:	00 
 84e2d4b:	89 04 24             	mov    %eax,(%esp)
 84e2d4e:	e8 37 f3 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e2d53:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84e2d56:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e2d5a:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84e2d5e:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e2d62:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e2d66:	89 04 24             	mov    %eax,(%esp)
 84e2d69:	e8 7e e7 f8 ff       	call   84714ec <_ZN19CMonitorServerProxy18SendGameServerInfoEPcthh>
 84e2d6e:	eb 70                	jmp    84e2de0 <_ZN23Inter_ReqGameServerInfo12dispatch_sigEP5CUserPci+0x24c>
 84e2d70:	e8 0c 94 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2d75:	89 04 24             	mov    %eax,(%esp)
 84e2d78:	e8 4d 7d c6 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84e2d7d:	0f b6 c0             	movzbl %al,%eax
 84e2d80:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84e2d83:	e8 f9 93 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2d88:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84e2d8e:	0f b6 f8             	movzbl %al,%edi
 84e2d91:	e8 eb 93 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2d96:	89 04 24             	mov    %eax,(%esp)
 84e2d99:	e8 cc 3f dc ff       	call   82a6d6a <_ZN12CEnvironment12get_udp_portEv>
 84e2d9e:	0f b7 f0             	movzwl %ax,%esi
 84e2da1:	e8 db 93 be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e2da6:	89 04 24             	mov    %eax,(%esp)
 84e2da9:	e8 2e a4 00 00       	call   84ed1dc <_ZN12CEnvironment13get_server_ipEv>
 84e2dae:	89 c3                	mov    %eax,%ebx
 84e2db0:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84e2db5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e2dbc:	00 
 84e2dbd:	89 04 24             	mov    %eax,(%esp)
 84e2dc0:	e8 f3 a5 c3 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e2dc5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84e2dc8:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e2dcc:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84e2dd0:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e2dd4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e2dd8:	89 04 24             	mov    %eax,(%esp)
 84e2ddb:	e8 12 c3 f8 ff       	call   846f0f2 <_ZN17CGuildServerProxy18SendGameServerInfoEPcthh>
 84e2de0:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2de5:	83 c4 4c             	add    $0x4c,%esp
 84e2de8:	5b                   	pop    %ebx
 84e2de9:	5e                   	pop    %esi
 84e2dea:	5f                   	pop    %edi
 84e2deb:	5d                   	pop    %ebp
 84e2dec:	c3                   	ret
 84e2ded:	90                   	nop

```

```c
// Inter_ReqGameServerInfo::dispatch_sig @ 0x84e2b94

/* Inter_ReqGameServerInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqGameServerInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  uchar uVar3;
  ushort uVar4;
  GameWorld *pGVar5;
  int iVar6;
  CMonitorServerProxy *pCVar7;
  CEnvironment *pCVar8;
  char *pcVar9;
  CGuildServerProxy *pCVar10;
  
  pGVar5 = (GameWorld *)G_GameWorld();
  iVar6 = GameWorld::GetChannelType(pGVar5);
  if (iVar6 != 7) {
    pGVar5 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar5);
    if (cVar2 == '\0') {
      if (*(char *)(param_3 + 10) == '\0') {
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar3 = CEnvironment::get_channel_no(pCVar8);
        iVar6 = G_CEnvironment();
        uVar1 = *(undefined4 *)(iVar6 + 0x378);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar4 = CEnvironment::get_udp_port(pCVar8);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
        pCVar7 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,0);
        CMonitorServerProxy::SendGameServerInfo(pCVar7,pcVar9,uVar4,(uchar)uVar1,uVar3);
      }
      else if (*(char *)(param_3 + 10) == '\x01') {
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar3 = CEnvironment::get_channel_no(pCVar8);
        iVar6 = G_CEnvironment();
        uVar1 = *(undefined4 *)(iVar6 + 0x378);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        uVar4 = CEnvironment::get_udp_port(pCVar8);
        pCVar8 = (CEnvironment *)G_CEnvironment();
        pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
        pCVar10 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,0);
        CGuildServerProxy::SendGameServerInfo(pCVar10,pcVar9,uVar4,(uchar)uVar1,uVar3);
      }
    }
    else if (*(char *)(param_3 + 10) == '\0') {
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_channel_no(pCVar8);
      iVar6 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar6 + 0x378);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_udp_port(pCVar8);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
      pCVar7 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,*(undefined1 *)(param_3 + 0xb));
      CMonitorServerProxy::SendGameServerInfo(pCVar7,pcVar9,uVar4,(uchar)uVar1,uVar3);
    }
    else if (*(char *)(param_3 + 10) == '\x01') {
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_channel_no(pCVar8);
      iVar6 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar6 + 0x378);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_udp_port(pCVar8);
      pCVar8 = (CEnvironment *)G_CEnvironment();
      pcVar9 = (char *)CEnvironment::get_server_ip(pCVar8);
      pCVar10 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,*(undefined1 *)(param_3 + 0xb));
      CGuildServerProxy::SendGameServerInfo(pCVar10,pcVar9,uVar4,(uchar)uVar1,uVar3);
    }
  }
  return 0;
}

```

