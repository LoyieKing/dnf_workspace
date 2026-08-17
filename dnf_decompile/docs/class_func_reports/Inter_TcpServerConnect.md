# Inter_TcpServerConnect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c8dca Inter_TcpServerConnect::dispatch_sig  [0x084c8dca-0x84c8ebf] ===
 84c8dca:	55                   	push   %ebp
 84c8dcb:	89 e5                	mov    %esp,%ebp
 84c8dcd:	83 ec 38             	sub    $0x38,%esp
 84c8dd0:	8b 45 10             	mov    0x10(%ebp),%eax
 84c8dd3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84c8dd6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c8dd9:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c8ddd:	3c cb                	cmp    $0xcb,%al
 84c8ddf:	75 67                	jne    84c8e48 <_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci+0x7e>
 84c8de1:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84c8de8:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84c8ded:	89 04 24             	mov    %eax,(%esp)
 84c8df0:	e8 5b ae de ff       	call   82b3c50 <_ZN15CServerProxyMgrI17CGuildServerProxyE13GetStartIndexEv>
 84c8df5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c8df8:	eb 33                	jmp    84c8e2d <_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci+0x63>
 84c8dfa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84c8dfd:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84c8e02:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c8e06:	89 04 24             	mov    %eax,(%esp)
 84c8e09:	e8 aa 45 c5 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84c8e0e:	89 04 24             	mov    %eax,(%esp)
 84c8e11:	e8 56 4b fa ff       	call   846d96c <_ZN17CGuildServerProxy7InitTcpEv>
 84c8e16:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84c8e1b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84c8e1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c8e22:	89 04 24             	mov    %eax,(%esp)
 84c8e25:	e8 5e ae de ff       	call   82b3c88 <_ZN15CServerProxyMgrI17CGuildServerProxyE12GetNextIndexERi>
 84c8e2a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c8e2d:	a1 2c be 40 09       	mov    0x940be2c,%eax
 84c8e32:	89 04 24             	mov    %eax,(%esp)
 84c8e35:	e8 42 ae de ff       	call   82b3c7c <_ZN15CServerProxyMgrI17CGuildServerProxyE11GetEndIndexEv>
 84c8e3a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84c8e3d:	39 d0                	cmp    %edx,%eax
 84c8e3f:	0f 9f c0             	setg   %al
 84c8e42:	84 c0                	test   %al,%al
 84c8e44:	75 b4                	jne    84c8dfa <_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci+0x30>
 84c8e46:	eb 70                	jmp    84c8eb8 <_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci+0xee>
 84c8e48:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84c8e4b:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84c8e4f:	3c c9                	cmp    $0xc9,%al
 84c8e51:	75 65                	jne    84c8eb8 <_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci+0xee>
 84c8e53:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84c8e5a:	a1 28 be 40 09       	mov    0x940be28,%eax
 84c8e5f:	89 04 24             	mov    %eax,(%esp)
 84c8e62:	e8 43 9c de ff       	call   82b2aaa <_ZN15CServerProxyMgrI19CMonitorServerProxyE13GetStartIndexEv>
 84c8e67:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c8e6a:	eb 33                	jmp    84c8e9f <_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci+0xd5>
 84c8e6c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84c8e6f:	a1 28 be 40 09       	mov    0x940be28,%eax
 84c8e74:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c8e78:	89 04 24             	mov    %eax,(%esp)
 84c8e7b:	e8 0a 92 c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84c8e80:	89 04 24             	mov    %eax,(%esp)
 84c8e83:	e8 4e 7c fa ff       	call   8470ad6 <_ZN19CMonitorServerProxy7InitTcpEv>
 84c8e88:	a1 28 be 40 09       	mov    0x940be28,%eax
 84c8e8d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84c8e90:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c8e94:	89 04 24             	mov    %eax,(%esp)
 84c8e97:	e8 46 9c de ff       	call   82b2ae2 <_ZN15CServerProxyMgrI19CMonitorServerProxyE12GetNextIndexERi>
 84c8e9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c8e9f:	a1 28 be 40 09       	mov    0x940be28,%eax
 84c8ea4:	89 04 24             	mov    %eax,(%esp)
 84c8ea7:	e8 2a 9c de ff       	call   82b2ad6 <_ZN15CServerProxyMgrI19CMonitorServerProxyE11GetEndIndexEv>
 84c8eac:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84c8eaf:	39 d0                	cmp    %edx,%eax
 84c8eb1:	0f 9f c0             	setg   %al
 84c8eb4:	84 c0                	test   %al,%al
 84c8eb6:	75 b4                	jne    84c8e6c <_ZN22Inter_TcpServerConnect12dispatch_sigEP5CUserPci+0xa2>
 84c8eb8:	b8 00 00 00 00       	mov    $0x0,%eax
 84c8ebd:	c9                   	leave
 84c8ebe:	c3                   	ret
 84c8ebf:	90                   	nop

```

```c
// Inter_TcpServerConnect::dispatch_sig @ 0x84c8dca

/* Inter_TcpServerConnect::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TcpServerConnect::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CGuildServerProxy *this;
  int iVar1;
  CMonitorServerProxy *this_00;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = param_3;
  if (*(char *)(param_3 + 10) == -0x35) {
    local_1c = 0;
    local_14 = CServerProxyMgr<CGuildServerProxy>::GetStartIndex(GlobalData::s_guild_proxy_mgr);
    while (iVar1 = CServerProxyMgr<CGuildServerProxy>::GetEndIndex(GlobalData::s_guild_proxy_mgr),
          local_1c < iVar1) {
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                       (GlobalData::s_guild_proxy_mgr,local_14);
      CGuildServerProxy::InitTcp(this);
      local_14 = CServerProxyMgr<CGuildServerProxy>::GetNextIndex
                           (GlobalData::s_guild_proxy_mgr,&local_1c);
    }
  }
  else if (*(char *)(param_3 + 10) == -0x37) {
    local_20 = 0;
    local_10 = CServerProxyMgr<CMonitorServerProxy>::GetStartIndex(GlobalData::s_monitor_proxy_mgr);
    while (iVar1 = CServerProxyMgr<CMonitorServerProxy>::GetEndIndex
                             (GlobalData::s_monitor_proxy_mgr), local_20 < iVar1) {
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,local_10);
      CMonitorServerProxy::InitTcp(this_00);
      local_10 = CServerProxyMgr<CMonitorServerProxy>::GetNextIndex
                           (GlobalData::s_monitor_proxy_mgr,&local_20);
    }
  }
  return 0;
}

```

