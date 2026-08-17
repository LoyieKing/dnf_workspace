# Inter_FindFactoryHub

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dc97a Inter_FindFactoryHub::dispatch_sig  [0x084dc97a-0x84dcaed] ===
 84dc97a:	55                   	push   %ebp
 84dc97b:	89 e5                	mov    %esp,%ebp
 84dc97d:	53                   	push   %ebx
 84dc97e:	83 ec 64             	sub    $0x64,%esp
 84dc981:	8b 45 10             	mov    0x10(%ebp),%eax
 84dc984:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84dc987:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84dc98b:	0f 84 51 01 00 00    	je     84dcae2 <_ZN20Inter_FindFactoryHub12dispatch_sigEP5CUserPci+0x168>
 84dc991:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dc994:	8b 00                	mov    (%eax),%eax
 84dc996:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dc99a:	c7 44 24 04 c0 02 00 	movl   $0x2c0,0x4(%esp)
 84dc9a1:	00 
 84dc9a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc9a5:	89 04 24             	mov    %eax,(%esp)
 84dc9a8:	e8 bb cf c1 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 84dc9ad:	89 c3                	mov    %eax,%ebx
 84dc9af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dc9b2:	89 04 24             	mov    %eax,(%esp)
 84dc9b5:	e8 a0 cf c1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84dc9ba:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84dc9c1:	00 
 84dc9c2:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84dc9c6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84dc9cd:	00 
 84dc9ce:	c7 44 24 08 c0 02 00 	movl   $0x2c0,0x8(%esp)
 84dc9d5:	00 
 84dc9d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 84dc9d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dc9dd:	89 04 24             	mov    %eax,(%esp)
 84dc9e0:	e8 99 c2 c1 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84dc9e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dc9e8:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84dc9ec:	84 c0                	test   %al,%al
 84dc9ee:	74 54                	je     84dca44 <_ZN20Inter_FindFactoryHub12dispatch_sigEP5CUserPci+0xca>
 84dc9f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dc9f3:	8b 00                	mov    (%eax),%eax
 84dc9f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84dc9f9:	c7 44 24 04 bd 02 00 	movl   $0x2bd,0x4(%esp)
 84dca00:	00 
 84dca01:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dca04:	89 04 24             	mov    %eax,(%esp)
 84dca07:	e8 5c cf c1 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 84dca0c:	89 c3                	mov    %eax,%ebx
 84dca0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dca11:	89 04 24             	mov    %eax,(%esp)
 84dca14:	e8 41 cf c1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84dca19:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84dca20:	00 
 84dca21:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84dca25:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84dca2c:	00 
 84dca2d:	c7 44 24 08 bd 02 00 	movl   $0x2bd,0x8(%esp)
 84dca34:	00 
 84dca35:	8b 55 0c             	mov    0xc(%ebp),%edx
 84dca38:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dca3c:	89 04 24             	mov    %eax,(%esp)
 84dca3f:	e8 3a c2 c1 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84dca44:	8d 45 bd             	lea    -0x43(%ebp),%eax
 84dca47:	89 04 24             	mov    %eax,(%esp)
 84dca4a:	e8 55 ca 00 00       	call   84e94a4 <_ZN36Packet_Monitor_Find_Factory_Hub_UserC1Ev>
 84dca4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dca52:	89 04 24             	mov    %eax,(%esp)
 84dca55:	e8 f4 f1 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84dca5a:	89 45 c7             	mov    %eax,-0x39(%ebp)
 84dca5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dca60:	83 c0 05             	add    $0x5,%eax
 84dca63:	89 04 24             	mov    %eax,(%esp)
 84dca66:	e8 45 19 ba ff       	call   807e3b0 <strlen@plt>
 84dca6b:	88 45 cb             	mov    %al,-0x35(%ebp)
 84dca6e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dca71:	83 c0 05             	add    $0x5,%eax
 84dca74:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 84dca7b:	00 
 84dca7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dca80:	8d 45 bd             	lea    -0x43(%ebp),%eax
 84dca83:	83 c0 0f             	add    $0xf,%eax
 84dca86:	89 04 24             	mov    %eax,(%esp)
 84dca89:	e8 42 0e ba ff       	call   807d8d0 <strncpy@plt>
 84dca8e:	66 c7 45 ea c1 02    	movw   $0x2c1,-0x16(%ebp)
 84dca94:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dca97:	89 04 24             	mov    %eax,(%esp)
 84dca9a:	e8 cf d8 bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84dca9f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84dcaa2:	66 c7 45 bf 33 00    	movw   $0x33,-0x41(%ebp)
 84dcaa8:	c7 45 f4 33 00 00 00 	movl   $0x33,-0xc(%ebp)
 84dcaaf:	8d 5d bd             	lea    -0x43(%ebp),%ebx
 84dcab2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dcab5:	89 04 24             	mov    %eax,(%esp)
 84dcab8:	e8 d3 f1 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84dcabd:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84dcac3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dcac7:	89 14 24             	mov    %edx,(%esp)
 84dcaca:	e8 bb 55 c3 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84dcacf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dcad2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84dcad6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dcada:	89 04 24             	mov    %eax,(%esp)
 84dcadd:	e8 12 43 f9 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84dcae2:	b8 00 00 00 00       	mov    $0x0,%eax
 84dcae7:	83 c4 64             	add    $0x64,%esp
 84dcaea:	5b                   	pop    %ebx
 84dcaeb:	5d                   	pop    %ebp
 84dcaec:	c3                   	ret
 84dcaed:	90                   	nop

```

```c
// Inter_FindFactoryHub::dispatch_sig @ 0x84dc97a

/* Inter_FindFactoryHub::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_FindFactoryHub::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  size_t sVar3;
  CMonitorServerProxy *this;
  Packet_Monitor_Find_Factory_Hub_User local_47 [2];
  undefined2 local_45;
  undefined4 local_3d;
  undefined1 local_39;
  char acStack_38 [30];
  undefined2 local_1a;
  undefined4 local_18;
  int *local_14;
  int local_10;
  
  local_14 = (int *)param_3;
  if (param_2 != (char *)0x0) {
    uVar1 = CUser::SetETC((CUser *)param_2,0x2c0,*(int *)param_3);
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,0x2c0,1,uVar1,0);
    if ((char)local_14[1] != '\0') {
      uVar1 = CUser::SetETC((CUser *)param_2,0x2bd,*local_14);
      pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,0x2bd,1,uVar1,0);
    }
    Packet_Monitor_Find_Factory_Hub_User::Packet_Monitor_Find_Factory_Hub_User(local_47);
    local_3d = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    sVar3 = strlen((char *)((int)local_14 + 5));
    local_39 = (undefined1)sVar3;
    strncpy(acStack_38,(char *)((int)local_14 + 5),0x1e);
    local_1a = 0x2c1;
    local_18 = CUser::get_acc_id((CUser *)param_2);
    local_45 = 0x33;
    local_10 = 0x33;
    uVar1 = CUser::GetServerGroup((CUser *)param_2);
    this = (CMonitorServerProxy *)
           CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                     (GlobalData::s_monitor_proxy_mgr,uVar1);
    CMonitorServerProxy::SendPacket(this,(char *)local_47,local_10);
  }
  return 0;
}

```

