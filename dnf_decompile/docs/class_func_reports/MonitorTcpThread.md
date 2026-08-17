# MonitorTcpThread

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## MonitorTcpThread

```asm
// === 0857d8f0 MonitorTcpThread::MonitorTcpThread  [0x0857d8f0-0x857d90b] ===
 857d8f0:	55                   	push   %ebp
 857d8f1:	89 e5                	mov    %esp,%ebp
 857d8f3:	83 ec 18             	sub    $0x18,%esp
 857d8f6:	8b 45 08             	mov    0x8(%ebp),%eax
 857d8f9:	89 04 24             	mov    %eax,(%esp)
 857d8fc:	e8 37 32 0b 00       	call   8630b38 <_ZN15ThreadInterfaceC1Ev>
 857d901:	8b 45 08             	mov    0x8(%ebp),%eax
 857d904:	c7 00 80 90 ca 08    	movl   $0x8ca9080,(%eax)
 857d90a:	c9                   	leave
 857d90b:	c3                   	ret

```

```c
// MonitorTcpThread::MonitorTcpThread @ 0x857d8f0

/* MonitorTcpThread::MonitorTcpThread() */

void __thiscall MonitorTcpThread::MonitorTcpThread(MonitorTcpThread *this)

{
  ThreadInterface::ThreadInterface((ThreadInterface *)this);
  *(undefined ***)this = &PTR_stop_08ca9080;
  return;
}

```

---

## dispatch

```asm
// === 0857d95a MonitorTcpThread::dispatch  [0x0857d95a-0x857f3a8] ===
 857d95a:	55                   	push   %ebp
 857d95b:	89 e5                	mov    %esp,%ebp
 857d95d:	57                   	push   %edi
 857d95e:	56                   	push   %esi
 857d95f:	53                   	push   %ebx
 857d960:	81 ec 1c 02 00 00    	sub    $0x21c,%esp
 857d966:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 857d96d:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 857d974:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 857d97b:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 857d982:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 857d989:	e9 fe 19 00 00       	jmp    857f38c <_ZN16MonitorTcpThread8dispatchEPv+0x1a32>
 857d98e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857d995:	e8 46 eb 00 00       	call   858c4e0 <_ZN6OS_API5SleepEi>
 857d99a:	a1 40 be 40 09       	mov    0x940be40,%eax
 857d99f:	89 04 24             	mov    %eax,(%esp)
 857d9a2:	e8 61 44 ef ff       	call   8471e08 <_ZN18CPCRoomServerProxy13GetTcpHandlerEv>
 857d9a7:	89 04 24             	mov    %eax,(%esp)
 857d9aa:	e8 9f 05 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857d9af:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 857d9b5:	a1 44 be 40 09       	mov    0x940be44,%eax
 857d9ba:	89 04 24             	mov    %eax,(%esp)
 857d9bd:	e8 86 f6 ee ff       	call   846d048 <_ZN21CCommunityServerProxy13GetTcpHandlerEv>
 857d9c2:	89 04 24             	mov    %eax,(%esp)
 857d9c5:	e8 84 05 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857d9ca:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 857d9d0:	a1 48 be 40 09       	mov    0x940be48,%eax
 857d9d5:	89 04 24             	mov    %eax,(%esp)
 857d9d8:	e8 f9 a4 d7 ff       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 857d9dd:	89 04 24             	mov    %eax,(%esp)
 857d9e0:	e8 69 05 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857d9e5:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 857d9eb:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857d9f0:	89 04 24             	mov    %eax,(%esp)
 857d9f3:	e8 de a4 d7 ff       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 857d9f8:	89 04 24             	mov    %eax,(%esp)
 857d9fb:	e8 4e 05 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857da00:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 857da06:	a1 34 be 40 09       	mov    0x940be34,%eax
 857da0b:	89 04 24             	mov    %eax,(%esp)
 857da0e:	e8 c3 a4 d7 ff       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 857da13:	89 04 24             	mov    %eax,(%esp)
 857da16:	e8 33 05 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857da1b:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 857da21:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 857da27:	89 45 b0             	mov    %eax,-0x50(%ebp)
 857da2a:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 857da31:	eb 11                	jmp    857da44 <_ZN16MonitorTcpThread8dispatchEPv+0xea>
 857da33:	8b 55 ac             	mov    -0x54(%ebp),%edx
 857da36:	8b 45 b0             	mov    -0x50(%ebp),%eax
 857da39:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 857da40:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 857da44:	83 7d ac 1f          	cmpl   $0x1f,-0x54(%ebp)
 857da48:	0f 96 c0             	setbe  %al
 857da4b:	84 c0                	test   %al,%al
 857da4d:	75 e4                	jne    857da33 <_ZN16MonitorTcpThread8dispatchEPv+0xd9>
 857da4f:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
 857da55:	89 45 b8             	mov    %eax,-0x48(%ebp)
 857da58:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 857da5f:	eb 11                	jmp    857da72 <_ZN16MonitorTcpThread8dispatchEPv+0x118>
 857da61:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 857da64:	8b 45 b8             	mov    -0x48(%ebp),%eax
 857da67:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 857da6e:	83 45 b4 01          	addl   $0x1,-0x4c(%ebp)
 857da72:	83 7d b4 1f          	cmpl   $0x1f,-0x4c(%ebp)
 857da76:	0f 96 c0             	setbe  %al
 857da79:	84 c0                	test   %al,%al
 857da7b:	75 e4                	jne    857da61 <_ZN16MonitorTcpThread8dispatchEPv+0x107>
 857da7d:	c7 85 2c ff ff ff 01 	movl   $0x1,-0xd4(%ebp)
 857da84:	00 00 00 
 857da87:	c7 85 30 ff ff ff 00 	movl   $0x0,-0xd0(%ebp)
 857da8e:	00 00 00 
 857da91:	c7 85 28 ff ff ff 00 	movl   $0x0,-0xd8(%ebp)
 857da98:	00 00 00 
 857da9b:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 857daa2:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 857daa9:	e9 b0 02 00 00       	jmp    857dd5e <_ZN16MonitorTcpThread8dispatchEPv+0x404>
 857daae:	a1 28 be 40 09       	mov    0x940be28,%eax
 857dab3:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dab6:	89 54 24 04          	mov    %edx,0x4(%esp)
 857daba:	89 04 24             	mov    %eax,(%esp)
 857dabd:	e8 0c 1e 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857dac2:	89 04 24             	mov    %eax,(%esp)
 857dac5:	e8 72 3c ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857daca:	89 04 24             	mov    %eax,(%esp)
 857dacd:	e8 7c 04 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dad2:	83 f8 ff             	cmp    $0xffffffff,%eax
 857dad5:	0f 95 c0             	setne  %al
 857dad8:	84 c0                	test   %al,%al
 857dada:	0f 84 24 01 00 00    	je     857dc04 <_ZN16MonitorTcpThread8dispatchEPv+0x2aa>
 857dae0:	a1 28 be 40 09       	mov    0x940be28,%eax
 857dae5:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dae8:	89 54 24 04          	mov    %edx,0x4(%esp)
 857daec:	89 04 24             	mov    %eax,(%esp)
 857daef:	e8 da 1d 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857daf4:	89 04 24             	mov    %eax,(%esp)
 857daf7:	e8 40 3c ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857dafc:	89 04 24             	mov    %eax,(%esp)
 857daff:	e8 4a 04 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857db04:	c1 e8 05             	shr    $0x5,%eax
 857db07:	89 c3                	mov    %eax,%ebx
 857db09:	8b b4 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%esi
 857db10:	a1 28 be 40 09       	mov    0x940be28,%eax
 857db15:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857db18:	89 54 24 04          	mov    %edx,0x4(%esp)
 857db1c:	89 04 24             	mov    %eax,(%esp)
 857db1f:	e8 aa 1d 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857db24:	89 04 24             	mov    %eax,(%esp)
 857db27:	e8 10 3c ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857db2c:	89 04 24             	mov    %eax,(%esp)
 857db2f:	e8 1a 04 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857db34:	83 e0 1f             	and    $0x1f,%eax
 857db37:	ba 01 00 00 00       	mov    $0x1,%edx
 857db3c:	89 d7                	mov    %edx,%edi
 857db3e:	89 c1                	mov    %eax,%ecx
 857db40:	d3 e7                	shl    %cl,%edi
 857db42:	89 f8                	mov    %edi,%eax
 857db44:	09 f0                	or     %esi,%eax
 857db46:	89 84 9d 78 fe ff ff 	mov    %eax,-0x188(%ebp,%ebx,4)
 857db4d:	a1 28 be 40 09       	mov    0x940be28,%eax
 857db52:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857db55:	89 54 24 04          	mov    %edx,0x4(%esp)
 857db59:	89 04 24             	mov    %eax,(%esp)
 857db5c:	e8 6d 1d 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857db61:	89 04 24             	mov    %eax,(%esp)
 857db64:	e8 d3 3b ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857db69:	89 04 24             	mov    %eax,(%esp)
 857db6c:	e8 dd 03 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857db71:	c1 e8 05             	shr    $0x5,%eax
 857db74:	89 c3                	mov    %eax,%ebx
 857db76:	8b b4 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%esi
 857db7d:	a1 28 be 40 09       	mov    0x940be28,%eax
 857db82:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857db85:	89 54 24 04          	mov    %edx,0x4(%esp)
 857db89:	89 04 24             	mov    %eax,(%esp)
 857db8c:	e8 3d 1d 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857db91:	89 04 24             	mov    %eax,(%esp)
 857db94:	e8 a3 3b ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857db99:	89 04 24             	mov    %eax,(%esp)
 857db9c:	e8 ad 03 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dba1:	83 e0 1f             	and    $0x1f,%eax
 857dba4:	ba 01 00 00 00       	mov    $0x1,%edx
 857dba9:	89 d7                	mov    %edx,%edi
 857dbab:	89 c1                	mov    %eax,%ecx
 857dbad:	d3 e7                	shl    %cl,%edi
 857dbaf:	89 f8                	mov    %edi,%eax
 857dbb1:	09 f0                	or     %esi,%eax
 857dbb3:	89 84 9d f8 fd ff ff 	mov    %eax,-0x208(%ebp,%ebx,4)
 857dbba:	a1 28 be 40 09       	mov    0x940be28,%eax
 857dbbf:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dbc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 857dbc6:	89 04 24             	mov    %eax,(%esp)
 857dbc9:	e8 00 1d 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857dbce:	89 04 24             	mov    %eax,(%esp)
 857dbd1:	e8 66 3b ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857dbd6:	89 04 24             	mov    %eax,(%esp)
 857dbd9:	e8 70 03 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dbde:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 857dbe4:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 857dbea:	89 44 24 04          	mov    %eax,0x4(%esp)
 857dbee:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 857dbf4:	89 04 24             	mov    %eax,(%esp)
 857dbf7:	e8 1c 06 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857dbfc:	8b 00                	mov    (%eax),%eax
 857dbfe:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857dc04:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857dc09:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dc0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 857dc10:	89 04 24             	mov    %eax,(%esp)
 857dc13:	e8 e6 1c 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857dc18:	89 04 24             	mov    %eax,(%esp)
 857dc1b:	e8 6e 20 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857dc20:	89 04 24             	mov    %eax,(%esp)
 857dc23:	e8 26 03 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dc28:	83 f8 ff             	cmp    $0xffffffff,%eax
 857dc2b:	0f 95 c0             	setne  %al
 857dc2e:	84 c0                	test   %al,%al
 857dc30:	0f 84 24 01 00 00    	je     857dd5a <_ZN16MonitorTcpThread8dispatchEPv+0x400>
 857dc36:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857dc3b:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dc3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 857dc42:	89 04 24             	mov    %eax,(%esp)
 857dc45:	e8 b4 1c 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857dc4a:	89 04 24             	mov    %eax,(%esp)
 857dc4d:	e8 3c 20 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857dc52:	89 04 24             	mov    %eax,(%esp)
 857dc55:	e8 f4 02 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dc5a:	c1 e8 05             	shr    $0x5,%eax
 857dc5d:	89 c3                	mov    %eax,%ebx
 857dc5f:	8b b4 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%esi
 857dc66:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857dc6b:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dc6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 857dc72:	89 04 24             	mov    %eax,(%esp)
 857dc75:	e8 84 1c 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857dc7a:	89 04 24             	mov    %eax,(%esp)
 857dc7d:	e8 0c 20 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857dc82:	89 04 24             	mov    %eax,(%esp)
 857dc85:	e8 c4 02 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dc8a:	83 e0 1f             	and    $0x1f,%eax
 857dc8d:	ba 01 00 00 00       	mov    $0x1,%edx
 857dc92:	89 d7                	mov    %edx,%edi
 857dc94:	89 c1                	mov    %eax,%ecx
 857dc96:	d3 e7                	shl    %cl,%edi
 857dc98:	89 f8                	mov    %edi,%eax
 857dc9a:	09 f0                	or     %esi,%eax
 857dc9c:	89 84 9d 78 fe ff ff 	mov    %eax,-0x188(%ebp,%ebx,4)
 857dca3:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857dca8:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dcab:	89 54 24 04          	mov    %edx,0x4(%esp)
 857dcaf:	89 04 24             	mov    %eax,(%esp)
 857dcb2:	e8 47 1c 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857dcb7:	89 04 24             	mov    %eax,(%esp)
 857dcba:	e8 cf 1f ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857dcbf:	89 04 24             	mov    %eax,(%esp)
 857dcc2:	e8 87 02 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dcc7:	c1 e8 05             	shr    $0x5,%eax
 857dcca:	89 c3                	mov    %eax,%ebx
 857dccc:	8b b4 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%esi
 857dcd3:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857dcd8:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dcdb:	89 54 24 04          	mov    %edx,0x4(%esp)
 857dcdf:	89 04 24             	mov    %eax,(%esp)
 857dce2:	e8 17 1c 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857dce7:	89 04 24             	mov    %eax,(%esp)
 857dcea:	e8 9f 1f ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857dcef:	89 04 24             	mov    %eax,(%esp)
 857dcf2:	e8 57 02 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dcf7:	83 e0 1f             	and    $0x1f,%eax
 857dcfa:	ba 01 00 00 00       	mov    $0x1,%edx
 857dcff:	89 d7                	mov    %edx,%edi
 857dd01:	89 c1                	mov    %eax,%ecx
 857dd03:	d3 e7                	shl    %cl,%edi
 857dd05:	89 f8                	mov    %edi,%eax
 857dd07:	09 f0                	or     %esi,%eax
 857dd09:	89 84 9d f8 fd ff ff 	mov    %eax,-0x208(%ebp,%ebx,4)
 857dd10:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857dd15:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857dd18:	89 54 24 04          	mov    %edx,0x4(%esp)
 857dd1c:	89 04 24             	mov    %eax,(%esp)
 857dd1f:	e8 da 1b 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857dd24:	89 04 24             	mov    %eax,(%esp)
 857dd27:	e8 62 1f ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857dd2c:	89 04 24             	mov    %eax,(%esp)
 857dd2f:	e8 1a 02 d8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857dd34:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 857dd3a:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 857dd40:	89 44 24 04          	mov    %eax,0x4(%esp)
 857dd44:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 857dd4a:	89 04 24             	mov    %eax,(%esp)
 857dd4d:	e8 c6 04 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857dd52:	8b 00                	mov    (%eax),%eax
 857dd54:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857dd5a:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 857dd5e:	a1 28 be 40 09       	mov    0x940be28,%eax
 857dd63:	89 04 24             	mov    %eax,(%esp)
 857dd66:	e8 57 1b 00 00       	call   857f8c2 <_ZN15CServerProxyMgrI19CMonitorServerProxyE23GetServerProxyArraySizeEv>
 857dd6b:	3b 45 a8             	cmp    -0x58(%ebp),%eax
 857dd6e:	0f 9f c0             	setg   %al
 857dd71:	84 c0                	test   %al,%al
 857dd73:	0f 85 35 fd ff ff    	jne    857daae <_ZN16MonitorTcpThread8dispatchEPv+0x154>
 857dd79:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857dd7f:	83 f8 ff             	cmp    $0xffffffff,%eax
 857dd82:	74 7e                	je     857de02 <_ZN16MonitorTcpThread8dispatchEPv+0x4a8>
 857dd84:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857dd8a:	c1 e8 05             	shr    $0x5,%eax
 857dd8d:	89 c2                	mov    %eax,%edx
 857dd8f:	8b 84 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%eax
 857dd96:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
 857dd9c:	83 e1 1f             	and    $0x1f,%ecx
 857dd9f:	bb 01 00 00 00       	mov    $0x1,%ebx
 857dda4:	89 de                	mov    %ebx,%esi
 857dda6:	d3 e6                	shl    %cl,%esi
 857dda8:	89 f1                	mov    %esi,%ecx
 857ddaa:	09 c8                	or     %ecx,%eax
 857ddac:	89 84 95 78 fe ff ff 	mov    %eax,-0x188(%ebp,%edx,4)
 857ddb3:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857ddb9:	c1 e8 05             	shr    $0x5,%eax
 857ddbc:	89 c2                	mov    %eax,%edx
 857ddbe:	8b 84 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%eax
 857ddc5:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
 857ddcb:	83 e1 1f             	and    $0x1f,%ecx
 857ddce:	bb 01 00 00 00       	mov    $0x1,%ebx
 857ddd3:	89 df                	mov    %ebx,%edi
 857ddd5:	d3 e7                	shl    %cl,%edi
 857ddd7:	89 f9                	mov    %edi,%ecx
 857ddd9:	09 c8                	or     %ecx,%eax
 857dddb:	89 84 95 f8 fd ff ff 	mov    %eax,-0x208(%ebp,%edx,4)
 857dde2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 857dde8:	89 44 24 04          	mov    %eax,0x4(%esp)
 857ddec:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 857ddf2:	89 04 24             	mov    %eax,(%esp)
 857ddf5:	e8 1e 04 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857ddfa:	8b 00                	mov    (%eax),%eax
 857ddfc:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857de02:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857de08:	83 f8 ff             	cmp    $0xffffffff,%eax
 857de0b:	74 7e                	je     857de8b <_ZN16MonitorTcpThread8dispatchEPv+0x531>
 857de0d:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857de13:	c1 e8 05             	shr    $0x5,%eax
 857de16:	89 c2                	mov    %eax,%edx
 857de18:	8b 84 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%eax
 857de1f:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 857de25:	83 e1 1f             	and    $0x1f,%ecx
 857de28:	bb 01 00 00 00       	mov    $0x1,%ebx
 857de2d:	89 de                	mov    %ebx,%esi
 857de2f:	d3 e6                	shl    %cl,%esi
 857de31:	89 f1                	mov    %esi,%ecx
 857de33:	09 c8                	or     %ecx,%eax
 857de35:	89 84 95 78 fe ff ff 	mov    %eax,-0x188(%ebp,%edx,4)
 857de3c:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857de42:	c1 e8 05             	shr    $0x5,%eax
 857de45:	89 c2                	mov    %eax,%edx
 857de47:	8b 84 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%eax
 857de4e:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 857de54:	83 e1 1f             	and    $0x1f,%ecx
 857de57:	bb 01 00 00 00       	mov    $0x1,%ebx
 857de5c:	89 df                	mov    %ebx,%edi
 857de5e:	d3 e7                	shl    %cl,%edi
 857de60:	89 f9                	mov    %edi,%ecx
 857de62:	09 c8                	or     %ecx,%eax
 857de64:	89 84 95 f8 fd ff ff 	mov    %eax,-0x208(%ebp,%edx,4)
 857de6b:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 857de71:	89 44 24 04          	mov    %eax,0x4(%esp)
 857de75:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 857de7b:	89 04 24             	mov    %eax,(%esp)
 857de7e:	e8 95 03 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857de83:	8b 00                	mov    (%eax),%eax
 857de85:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857de8b:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857de91:	83 f8 ff             	cmp    $0xffffffff,%eax
 857de94:	74 7e                	je     857df14 <_ZN16MonitorTcpThread8dispatchEPv+0x5ba>
 857de96:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857de9c:	c1 e8 05             	shr    $0x5,%eax
 857de9f:	89 c2                	mov    %eax,%edx
 857dea1:	8b 84 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%eax
 857dea8:	8b 8d 40 ff ff ff    	mov    -0xc0(%ebp),%ecx
 857deae:	83 e1 1f             	and    $0x1f,%ecx
 857deb1:	bb 01 00 00 00       	mov    $0x1,%ebx
 857deb6:	89 de                	mov    %ebx,%esi
 857deb8:	d3 e6                	shl    %cl,%esi
 857deba:	89 f1                	mov    %esi,%ecx
 857debc:	09 c8                	or     %ecx,%eax
 857debe:	89 84 95 78 fe ff ff 	mov    %eax,-0x188(%ebp,%edx,4)
 857dec5:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857decb:	c1 e8 05             	shr    $0x5,%eax
 857dece:	89 c2                	mov    %eax,%edx
 857ded0:	8b 84 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%eax
 857ded7:	8b 8d 40 ff ff ff    	mov    -0xc0(%ebp),%ecx
 857dedd:	83 e1 1f             	and    $0x1f,%ecx
 857dee0:	bb 01 00 00 00       	mov    $0x1,%ebx
 857dee5:	89 df                	mov    %ebx,%edi
 857dee7:	d3 e7                	shl    %cl,%edi
 857dee9:	89 f9                	mov    %edi,%ecx
 857deeb:	09 c8                	or     %ecx,%eax
 857deed:	89 84 95 f8 fd ff ff 	mov    %eax,-0x208(%ebp,%edx,4)
 857def4:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 857defa:	89 44 24 04          	mov    %eax,0x4(%esp)
 857defe:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 857df04:	89 04 24             	mov    %eax,(%esp)
 857df07:	e8 0c 03 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857df0c:	8b 00                	mov    (%eax),%eax
 857df0e:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857df14:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857df1a:	83 f8 ff             	cmp    $0xffffffff,%eax
 857df1d:	74 7e                	je     857df9d <_ZN16MonitorTcpThread8dispatchEPv+0x643>
 857df1f:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857df25:	c1 e8 05             	shr    $0x5,%eax
 857df28:	89 c2                	mov    %eax,%edx
 857df2a:	8b 84 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%eax
 857df31:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 857df37:	83 e1 1f             	and    $0x1f,%ecx
 857df3a:	bb 01 00 00 00       	mov    $0x1,%ebx
 857df3f:	89 de                	mov    %ebx,%esi
 857df41:	d3 e6                	shl    %cl,%esi
 857df43:	89 f1                	mov    %esi,%ecx
 857df45:	09 c8                	or     %ecx,%eax
 857df47:	89 84 95 78 fe ff ff 	mov    %eax,-0x188(%ebp,%edx,4)
 857df4e:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857df54:	c1 e8 05             	shr    $0x5,%eax
 857df57:	89 c2                	mov    %eax,%edx
 857df59:	8b 84 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%eax
 857df60:	8b 8d 3c ff ff ff    	mov    -0xc4(%ebp),%ecx
 857df66:	83 e1 1f             	and    $0x1f,%ecx
 857df69:	bb 01 00 00 00       	mov    $0x1,%ebx
 857df6e:	89 df                	mov    %ebx,%edi
 857df70:	d3 e7                	shl    %cl,%edi
 857df72:	89 f9                	mov    %edi,%ecx
 857df74:	09 c8                	or     %ecx,%eax
 857df76:	89 84 95 f8 fd ff ff 	mov    %eax,-0x208(%ebp,%edx,4)
 857df7d:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 857df83:	89 44 24 04          	mov    %eax,0x4(%esp)
 857df87:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 857df8d:	89 04 24             	mov    %eax,(%esp)
 857df90:	e8 83 02 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857df95:	8b 00                	mov    (%eax),%eax
 857df97:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857df9d:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857dfa3:	83 f8 ff             	cmp    $0xffffffff,%eax
 857dfa6:	74 7e                	je     857e026 <_ZN16MonitorTcpThread8dispatchEPv+0x6cc>
 857dfa8:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857dfae:	c1 e8 05             	shr    $0x5,%eax
 857dfb1:	89 c2                	mov    %eax,%edx
 857dfb3:	8b 84 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%eax
 857dfba:	8b 8d 38 ff ff ff    	mov    -0xc8(%ebp),%ecx
 857dfc0:	83 e1 1f             	and    $0x1f,%ecx
 857dfc3:	bb 01 00 00 00       	mov    $0x1,%ebx
 857dfc8:	89 de                	mov    %ebx,%esi
 857dfca:	d3 e6                	shl    %cl,%esi
 857dfcc:	89 f1                	mov    %esi,%ecx
 857dfce:	09 c8                	or     %ecx,%eax
 857dfd0:	89 84 95 78 fe ff ff 	mov    %eax,-0x188(%ebp,%edx,4)
 857dfd7:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857dfdd:	c1 e8 05             	shr    $0x5,%eax
 857dfe0:	89 c2                	mov    %eax,%edx
 857dfe2:	8b 84 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%eax
 857dfe9:	8b 8d 38 ff ff ff    	mov    -0xc8(%ebp),%ecx
 857dfef:	83 e1 1f             	and    $0x1f,%ecx
 857dff2:	bb 01 00 00 00       	mov    $0x1,%ebx
 857dff7:	89 df                	mov    %ebx,%edi
 857dff9:	d3 e7                	shl    %cl,%edi
 857dffb:	89 f9                	mov    %edi,%ecx
 857dffd:	09 c8                	or     %ecx,%eax
 857dfff:	89 84 95 f8 fd ff ff 	mov    %eax,-0x208(%ebp,%edx,4)
 857e006:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 857e00c:	89 44 24 04          	mov    %eax,0x4(%esp)
 857e010:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 857e016:	89 04 24             	mov    %eax,(%esp)
 857e019:	e8 fa 01 b1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 857e01e:	8b 00                	mov    (%eax),%eax
 857e020:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857e026:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 857e02c:	83 c0 01             	add    $0x1,%eax
 857e02f:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 857e035:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 857e03b:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 857e041:	89 54 24 10          	mov    %edx,0x10(%esp)
 857e045:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857e04c:	00 
 857e04d:	8d 95 f8 fd ff ff    	lea    -0x208(%ebp),%edx
 857e053:	89 54 24 08          	mov    %edx,0x8(%esp)
 857e057:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 857e05d:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e061:	89 04 24             	mov    %eax,(%esp)
 857e064:	e8 d7 07 b0 ff       	call   807e840 <select@plt>
 857e069:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 857e06f:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 857e075:	85 c0                	test   %eax,%eax
 857e077:	0f 88 0e 13 00 00    	js     857f38b <_ZN16MonitorTcpThread8dispatchEPv+0x1a31>
 857e07d:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 857e084:	e9 42 07 00 00       	jmp    857e7cb <_ZN16MonitorTcpThread8dispatchEPv+0xe71>
 857e089:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e08e:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e091:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e095:	89 04 24             	mov    %eax,(%esp)
 857e098:	e8 31 18 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e09d:	89 04 24             	mov    %eax,(%esp)
 857e0a0:	e8 97 36 ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857e0a5:	89 04 24             	mov    %eax,(%esp)
 857e0a8:	e8 a1 fe d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e0ad:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e0b0:	0f 95 c0             	setne  %al
 857e0b3:	84 c0                	test   %al,%al
 857e0b5:	0f 84 99 01 00 00    	je     857e254 <_ZN16MonitorTcpThread8dispatchEPv+0x8fa>
 857e0bb:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e0c0:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e0c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e0c7:	89 04 24             	mov    %eax,(%esp)
 857e0ca:	e8 ff 17 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e0cf:	89 04 24             	mov    %eax,(%esp)
 857e0d2:	e8 65 36 ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857e0d7:	89 04 24             	mov    %eax,(%esp)
 857e0da:	e8 6f fe d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e0df:	c1 e8 05             	shr    $0x5,%eax
 857e0e2:	8b 9c 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%ebx
 857e0e9:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e0ee:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e0f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e0f5:	89 04 24             	mov    %eax,(%esp)
 857e0f8:	e8 d1 17 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e0fd:	89 04 24             	mov    %eax,(%esp)
 857e100:	e8 37 36 ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857e105:	89 04 24             	mov    %eax,(%esp)
 857e108:	e8 41 fe d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e10d:	83 e0 1f             	and    $0x1f,%eax
 857e110:	89 de                	mov    %ebx,%esi
 857e112:	89 c1                	mov    %eax,%ecx
 857e114:	d3 fe                	sar    %cl,%esi
 857e116:	89 f0                	mov    %esi,%eax
 857e118:	83 e0 01             	and    $0x1,%eax
 857e11b:	84 c0                	test   %al,%al
 857e11d:	0f 84 31 01 00 00    	je     857e254 <_ZN16MonitorTcpThread8dispatchEPv+0x8fa>
 857e123:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e128:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e12b:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e12f:	89 04 24             	mov    %eax,(%esp)
 857e132:	e8 97 17 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e137:	89 04 24             	mov    %eax,(%esp)
 857e13a:	e8 a1 31 ef ff       	call   84712e0 <_ZN19CMonitorServerProxy9OnTcpRecvEv>
 857e13f:	83 f0 01             	xor    $0x1,%eax
 857e142:	84 c0                	test   %al,%al
 857e144:	0f 84 0a 01 00 00    	je     857e254 <_ZN16MonitorTcpThread8dispatchEPv+0x8fa>
 857e14a:	c7 44 24 10 58 7f ca 	movl   $0x8ca7f58,0x10(%esp)
 857e151:	08 
 857e152:	c7 44 24 0c 49 04 00 	movl   $0x449,0xc(%esp)
 857e159:	00 
 857e15a:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857e161:	08 
 857e162:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e169:	08 
 857e16a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857e171:	e8 94 5a 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857e176:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 857e17b:	c7 44 24 08 4c 04 00 	movl   $0x44c,0x8(%esp)
 857e182:	00 
 857e183:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e18a:	08 
 857e18b:	89 04 24             	mov    %eax,(%esp)
 857e18e:	e8 f3 18 d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 857e193:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857e19a:	00 
 857e19b:	89 44 24 04          	mov    %eax,0x4(%esp)
 857e19f:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 857e1a5:	89 04 24             	mov    %eax,(%esp)
 857e1a8:	e8 79 aa b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 857e1ad:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 857e1b3:	89 04 24             	mov    %eax,(%esp)
 857e1b6:	e8 8b aa b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e1bb:	c7 44 24 04 5f 01 00 	movl   $0x15f,0x4(%esp)
 857e1c2:	00 
 857e1c3:	89 04 24             	mov    %eax,(%esp)
 857e1c6:	e8 8b aa b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e1cb:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 857e1d1:	89 04 24             	mov    %eax,(%esp)
 857e1d4:	e8 6d aa b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e1d9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 857e1e0:	ff 
 857e1e1:	89 04 24             	mov    %eax,(%esp)
 857e1e4:	e8 6d aa b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e1e9:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 857e1ef:	89 04 24             	mov    %eax,(%esp)
 857e1f2:	e8 4f aa b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e1f7:	c7 44 24 04 c9 00 00 	movl   $0xc9,0x4(%esp)
 857e1fe:	00 
 857e1ff:	89 04 24             	mov    %eax,(%esp)
 857e202:	e8 4f aa b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e207:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857e20c:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 857e212:	89 54 24 08          	mov    %edx,0x8(%esp)
 857e216:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857e21d:	00 
 857e21e:	89 04 24             	mov    %eax,(%esp)
 857e221:	e8 b8 2d ff ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 857e226:	eb 1e                	jmp    857e246 <_ZN16MonitorTcpThread8dispatchEPv+0x8ec>
 857e228:	89 d3                	mov    %edx,%ebx
 857e22a:	89 c6                	mov    %eax,%esi
 857e22c:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 857e232:	89 04 24             	mov    %eax,(%esp)
 857e235:	e8 98 e6 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e23a:	89 f0                	mov    %esi,%eax
 857e23c:	89 da                	mov    %ebx,%edx
 857e23e:	89 04 24             	mov    %eax,(%esp)
 857e241:	e8 0a 55 56 00       	call   8ae3750 <_Unwind_Resume>
 857e246:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 857e24c:	89 04 24             	mov    %eax,(%esp)
 857e24f:	e8 7e e6 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e254:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e259:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e25c:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e260:	89 04 24             	mov    %eax,(%esp)
 857e263:	e8 66 16 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e268:	89 04 24             	mov    %eax,(%esp)
 857e26b:	e8 cc 34 ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857e270:	89 04 24             	mov    %eax,(%esp)
 857e273:	e8 d6 fc d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e278:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e27b:	0f 95 c0             	setne  %al
 857e27e:	84 c0                	test   %al,%al
 857e280:	0f 84 a2 01 00 00    	je     857e428 <_ZN16MonitorTcpThread8dispatchEPv+0xace>
 857e286:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e28b:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e28e:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e292:	89 04 24             	mov    %eax,(%esp)
 857e295:	e8 34 16 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e29a:	89 04 24             	mov    %eax,(%esp)
 857e29d:	e8 9a 34 ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857e2a2:	89 04 24             	mov    %eax,(%esp)
 857e2a5:	e8 a4 fc d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e2aa:	c1 e8 05             	shr    $0x5,%eax
 857e2ad:	8b 9c 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%ebx
 857e2b4:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e2b9:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e2bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e2c0:	89 04 24             	mov    %eax,(%esp)
 857e2c3:	e8 06 16 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e2c8:	89 04 24             	mov    %eax,(%esp)
 857e2cb:	e8 6c 34 ef ff       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 857e2d0:	89 04 24             	mov    %eax,(%esp)
 857e2d3:	e8 76 fc d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e2d8:	83 e0 1f             	and    $0x1f,%eax
 857e2db:	89 de                	mov    %ebx,%esi
 857e2dd:	89 c1                	mov    %eax,%ecx
 857e2df:	d3 fe                	sar    %cl,%esi
 857e2e1:	89 f0                	mov    %esi,%eax
 857e2e3:	83 e0 01             	and    $0x1,%eax
 857e2e6:	84 c0                	test   %al,%al
 857e2e8:	0f 84 3a 01 00 00    	je     857e428 <_ZN16MonitorTcpThread8dispatchEPv+0xace>
 857e2ee:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e2f3:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e2f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e2fa:	89 04 24             	mov    %eax,(%esp)
 857e2fd:	e8 cc 15 00 00       	call   857f8ce <_ZN15CServerProxyMgrI19CMonitorServerProxyE21GetServerProxyArrayAtEi>
 857e302:	89 04 24             	mov    %eax,(%esp)
 857e305:	e8 92 30 ef ff       	call   847139c <_ZN19CMonitorServerProxy9OnTcpSendEv>
 857e30a:	89 45 bc             	mov    %eax,-0x44(%ebp)
 857e30d:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 857e311:	0f 89 11 01 00 00    	jns    857e428 <_ZN16MonitorTcpThread8dispatchEPv+0xace>
 857e317:	8b 45 bc             	mov    -0x44(%ebp),%eax
 857e31a:	89 44 24 14          	mov    %eax,0x14(%esp)
 857e31e:	c7 44 24 10 78 7f ca 	movl   $0x8ca7f78,0x10(%esp)
 857e325:	08 
 857e326:	c7 44 24 0c 5e 04 00 	movl   $0x45e,0xc(%esp)
 857e32d:	00 
 857e32e:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857e335:	08 
 857e336:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e33d:	08 
 857e33e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857e345:	e8 c0 58 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857e34a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 857e34f:	c7 44 24 08 60 04 00 	movl   $0x460,0x8(%esp)
 857e356:	00 
 857e357:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e35e:	08 
 857e35f:	89 04 24             	mov    %eax,(%esp)
 857e362:	e8 1f 17 d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 857e367:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857e36e:	00 
 857e36f:	89 44 24 04          	mov    %eax,0x4(%esp)
 857e373:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 857e379:	89 04 24             	mov    %eax,(%esp)
 857e37c:	e8 a5 a8 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 857e381:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 857e387:	89 04 24             	mov    %eax,(%esp)
 857e38a:	e8 b7 a8 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e38f:	c7 44 24 04 5f 01 00 	movl   $0x15f,0x4(%esp)
 857e396:	00 
 857e397:	89 04 24             	mov    %eax,(%esp)
 857e39a:	e8 b7 a8 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e39f:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 857e3a5:	89 04 24             	mov    %eax,(%esp)
 857e3a8:	e8 99 a8 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e3ad:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 857e3b4:	ff 
 857e3b5:	89 04 24             	mov    %eax,(%esp)
 857e3b8:	e8 99 a8 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e3bd:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 857e3c3:	89 04 24             	mov    %eax,(%esp)
 857e3c6:	e8 7b a8 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e3cb:	c7 44 24 04 c9 00 00 	movl   $0xc9,0x4(%esp)
 857e3d2:	00 
 857e3d3:	89 04 24             	mov    %eax,(%esp)
 857e3d6:	e8 7b a8 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e3db:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857e3e0:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 857e3e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 857e3ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857e3f1:	00 
 857e3f2:	89 04 24             	mov    %eax,(%esp)
 857e3f5:	e8 e4 2b ff ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 857e3fa:	eb 1e                	jmp    857e41a <_ZN16MonitorTcpThread8dispatchEPv+0xac0>
 857e3fc:	89 d3                	mov    %edx,%ebx
 857e3fe:	89 c6                	mov    %eax,%esi
 857e400:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 857e406:	89 04 24             	mov    %eax,(%esp)
 857e409:	e8 c4 e4 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e40e:	89 f0                	mov    %esi,%eax
 857e410:	89 da                	mov    %ebx,%edx
 857e412:	89 04 24             	mov    %eax,(%esp)
 857e415:	e8 36 53 56 00       	call   8ae3750 <_Unwind_Resume>
 857e41a:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 857e420:	89 04 24             	mov    %eax,(%esp)
 857e423:	e8 aa e4 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e428:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e42d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e430:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e434:	89 04 24             	mov    %eax,(%esp)
 857e437:	e8 c2 14 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e43c:	89 04 24             	mov    %eax,(%esp)
 857e43f:	e8 4a 18 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857e444:	89 04 24             	mov    %eax,(%esp)
 857e447:	e8 02 fb d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e44c:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e44f:	0f 95 c0             	setne  %al
 857e452:	84 c0                	test   %al,%al
 857e454:	0f 84 99 01 00 00    	je     857e5f3 <_ZN16MonitorTcpThread8dispatchEPv+0xc99>
 857e45a:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e45f:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e462:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e466:	89 04 24             	mov    %eax,(%esp)
 857e469:	e8 90 14 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e46e:	89 04 24             	mov    %eax,(%esp)
 857e471:	e8 18 18 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857e476:	89 04 24             	mov    %eax,(%esp)
 857e479:	e8 d0 fa d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e47e:	c1 e8 05             	shr    $0x5,%eax
 857e481:	8b 9c 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%ebx
 857e488:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e48d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e490:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e494:	89 04 24             	mov    %eax,(%esp)
 857e497:	e8 62 14 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e49c:	89 04 24             	mov    %eax,(%esp)
 857e49f:	e8 ea 17 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857e4a4:	89 04 24             	mov    %eax,(%esp)
 857e4a7:	e8 a2 fa d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e4ac:	83 e0 1f             	and    $0x1f,%eax
 857e4af:	89 de                	mov    %ebx,%esi
 857e4b1:	89 c1                	mov    %eax,%ecx
 857e4b3:	d3 fe                	sar    %cl,%esi
 857e4b5:	89 f0                	mov    %esi,%eax
 857e4b7:	83 e0 01             	and    $0x1,%eax
 857e4ba:	84 c0                	test   %al,%al
 857e4bc:	0f 84 31 01 00 00    	je     857e5f3 <_ZN16MonitorTcpThread8dispatchEPv+0xc99>
 857e4c2:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e4c7:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e4ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e4ce:	89 04 24             	mov    %eax,(%esp)
 857e4d1:	e8 28 14 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e4d6:	89 04 24             	mov    %eax,(%esp)
 857e4d9:	e8 5e 00 ef ff       	call   846e53c <_ZN17CGuildServerProxy9OnTcpRecvEv>
 857e4de:	83 f0 01             	xor    $0x1,%eax
 857e4e1:	84 c0                	test   %al,%al
 857e4e3:	0f 84 0a 01 00 00    	je     857e5f3 <_ZN16MonitorTcpThread8dispatchEPv+0xc99>
 857e4e9:	c7 44 24 10 a6 7f ca 	movl   $0x8ca7fa6,0x10(%esp)
 857e4f0:	08 
 857e4f1:	c7 44 24 0c 6f 04 00 	movl   $0x46f,0xc(%esp)
 857e4f8:	00 
 857e4f9:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857e500:	08 
 857e501:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e508:	08 
 857e509:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857e510:	e8 f5 56 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857e515:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 857e51a:	c7 44 24 08 71 04 00 	movl   $0x471,0x8(%esp)
 857e521:	00 
 857e522:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e529:	08 
 857e52a:	89 04 24             	mov    %eax,(%esp)
 857e52d:	e8 54 15 d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 857e532:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857e539:	00 
 857e53a:	89 44 24 04          	mov    %eax,0x4(%esp)
 857e53e:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 857e544:	89 04 24             	mov    %eax,(%esp)
 857e547:	e8 da a6 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 857e54c:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 857e552:	89 04 24             	mov    %eax,(%esp)
 857e555:	e8 ec a6 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e55a:	c7 44 24 04 5f 01 00 	movl   $0x15f,0x4(%esp)
 857e561:	00 
 857e562:	89 04 24             	mov    %eax,(%esp)
 857e565:	e8 ec a6 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e56a:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 857e570:	89 04 24             	mov    %eax,(%esp)
 857e573:	e8 ce a6 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e578:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 857e57f:	ff 
 857e580:	89 04 24             	mov    %eax,(%esp)
 857e583:	e8 ce a6 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e588:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 857e58e:	89 04 24             	mov    %eax,(%esp)
 857e591:	e8 b0 a6 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e596:	c7 44 24 04 cb 00 00 	movl   $0xcb,0x4(%esp)
 857e59d:	00 
 857e59e:	89 04 24             	mov    %eax,(%esp)
 857e5a1:	e8 b0 a6 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e5a6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857e5ab:	8d 95 10 ff ff ff    	lea    -0xf0(%ebp),%edx
 857e5b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 857e5b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857e5bc:	00 
 857e5bd:	89 04 24             	mov    %eax,(%esp)
 857e5c0:	e8 19 2a ff ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 857e5c5:	eb 1e                	jmp    857e5e5 <_ZN16MonitorTcpThread8dispatchEPv+0xc8b>
 857e5c7:	89 d3                	mov    %edx,%ebx
 857e5c9:	89 c6                	mov    %eax,%esi
 857e5cb:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 857e5d1:	89 04 24             	mov    %eax,(%esp)
 857e5d4:	e8 f9 e2 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e5d9:	89 f0                	mov    %esi,%eax
 857e5db:	89 da                	mov    %ebx,%edx
 857e5dd:	89 04 24             	mov    %eax,(%esp)
 857e5e0:	e8 6b 51 56 00       	call   8ae3750 <_Unwind_Resume>
 857e5e5:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 857e5eb:	89 04 24             	mov    %eax,(%esp)
 857e5ee:	e8 df e2 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e5f3:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e5f8:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e5fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e5ff:	89 04 24             	mov    %eax,(%esp)
 857e602:	e8 f7 12 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e607:	89 04 24             	mov    %eax,(%esp)
 857e60a:	e8 7f 16 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857e60f:	89 04 24             	mov    %eax,(%esp)
 857e612:	e8 37 f9 d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e617:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e61a:	0f 95 c0             	setne  %al
 857e61d:	84 c0                	test   %al,%al
 857e61f:	0f 84 a2 01 00 00    	je     857e7c7 <_ZN16MonitorTcpThread8dispatchEPv+0xe6d>
 857e625:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e62a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e62d:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e631:	89 04 24             	mov    %eax,(%esp)
 857e634:	e8 c5 12 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e639:	89 04 24             	mov    %eax,(%esp)
 857e63c:	e8 4d 16 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857e641:	89 04 24             	mov    %eax,(%esp)
 857e644:	e8 05 f9 d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e649:	c1 e8 05             	shr    $0x5,%eax
 857e64c:	8b 9c 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%ebx
 857e653:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e658:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e65b:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e65f:	89 04 24             	mov    %eax,(%esp)
 857e662:	e8 97 12 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e667:	89 04 24             	mov    %eax,(%esp)
 857e66a:	e8 1f 16 ef ff       	call   846fc8e <_ZN17CGuildServerProxy13GetTcpHandlerEv>
 857e66f:	89 04 24             	mov    %eax,(%esp)
 857e672:	e8 d7 f8 d7 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 857e677:	83 e0 1f             	and    $0x1f,%eax
 857e67a:	89 de                	mov    %ebx,%esi
 857e67c:	89 c1                	mov    %eax,%ecx
 857e67e:	d3 fe                	sar    %cl,%esi
 857e680:	89 f0                	mov    %esi,%eax
 857e682:	83 e0 01             	and    $0x1,%eax
 857e685:	84 c0                	test   %al,%al
 857e687:	0f 84 3a 01 00 00    	je     857e7c7 <_ZN16MonitorTcpThread8dispatchEPv+0xe6d>
 857e68d:	a1 2c be 40 09       	mov    0x940be2c,%eax
 857e692:	8b 55 a8             	mov    -0x58(%ebp),%edx
 857e695:	89 54 24 04          	mov    %edx,0x4(%esp)
 857e699:	89 04 24             	mov    %eax,(%esp)
 857e69c:	e8 5d 12 00 00       	call   857f8fe <_ZN15CServerProxyMgrI17CGuildServerProxyE21GetServerProxyArrayAtEi>
 857e6a1:	89 04 24             	mov    %eax,(%esp)
 857e6a4:	e8 23 ff ee ff       	call   846e5cc <_ZN17CGuildServerProxy9OnTcpSendEv>
 857e6a9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 857e6ac:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 857e6b0:	0f 89 11 01 00 00    	jns    857e7c7 <_ZN16MonitorTcpThread8dispatchEPv+0xe6d>
 857e6b6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 857e6b9:	89 44 24 14          	mov    %eax,0x14(%esp)
 857e6bd:	c7 44 24 10 c4 7f ca 	movl   $0x8ca7fc4,0x10(%esp)
 857e6c4:	08 
 857e6c5:	c7 44 24 0c 80 04 00 	movl   $0x480,0xc(%esp)
 857e6cc:	00 
 857e6cd:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857e6d4:	08 
 857e6d5:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e6dc:	08 
 857e6dd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857e6e4:	e8 21 55 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857e6e9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 857e6ee:	c7 44 24 08 81 04 00 	movl   $0x481,0x8(%esp)
 857e6f5:	00 
 857e6f6:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e6fd:	08 
 857e6fe:	89 04 24             	mov    %eax,(%esp)
 857e701:	e8 80 13 d1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 857e706:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 857e70d:	00 
 857e70e:	89 44 24 04          	mov    %eax,0x4(%esp)
 857e712:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 857e718:	89 04 24             	mov    %eax,(%esp)
 857e71b:	e8 06 a5 b4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 857e720:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 857e726:	89 04 24             	mov    %eax,(%esp)
 857e729:	e8 18 a5 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e72e:	c7 44 24 04 5f 01 00 	movl   $0x15f,0x4(%esp)
 857e735:	00 
 857e736:	89 04 24             	mov    %eax,(%esp)
 857e739:	e8 18 a5 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e73e:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 857e744:	89 04 24             	mov    %eax,(%esp)
 857e747:	e8 fa a4 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e74c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 857e753:	ff 
 857e754:	89 04 24             	mov    %eax,(%esp)
 857e757:	e8 fa a4 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e75c:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 857e762:	89 04 24             	mov    %eax,(%esp)
 857e765:	e8 dc a4 b4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 857e76a:	c7 44 24 04 cb 00 00 	movl   $0xcb,0x4(%esp)
 857e771:	00 
 857e772:	89 04 24             	mov    %eax,(%esp)
 857e775:	e8 dc a4 b4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 857e77a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 857e77f:	8d 95 08 ff ff ff    	lea    -0xf8(%ebp),%edx
 857e785:	89 54 24 08          	mov    %edx,0x8(%esp)
 857e789:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857e790:	00 
 857e791:	89 04 24             	mov    %eax,(%esp)
 857e794:	e8 45 28 ff ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 857e799:	eb 1e                	jmp    857e7b9 <_ZN16MonitorTcpThread8dispatchEPv+0xe5f>
 857e79b:	89 d3                	mov    %edx,%ebx
 857e79d:	89 c6                	mov    %eax,%esi
 857e79f:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 857e7a5:	89 04 24             	mov    %eax,(%esp)
 857e7a8:	e8 25 e1 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e7ad:	89 f0                	mov    %esi,%eax
 857e7af:	89 da                	mov    %ebx,%edx
 857e7b1:	89 04 24             	mov    %eax,(%esp)
 857e7b4:	e8 97 4f 56 00       	call   8ae3750 <_Unwind_Resume>
 857e7b9:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 857e7bf:	89 04 24             	mov    %eax,(%esp)
 857e7c2:	e8 0b e1 09 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 857e7c7:	83 45 a8 01          	addl   $0x1,-0x58(%ebp)
 857e7cb:	a1 28 be 40 09       	mov    0x940be28,%eax
 857e7d0:	89 04 24             	mov    %eax,(%esp)
 857e7d3:	e8 ea 10 00 00       	call   857f8c2 <_ZN15CServerProxyMgrI19CMonitorServerProxyE23GetServerProxyArraySizeEv>
 857e7d8:	3b 45 a8             	cmp    -0x58(%ebp),%eax
 857e7db:	0f 9f c0             	setg   %al
 857e7de:	84 c0                	test   %al,%al
 857e7e0:	0f 85 a3 f8 ff ff    	jne    857e089 <_ZN16MonitorTcpThread8dispatchEPv+0x72f>
 857e7e6:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857e7ec:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e7ef:	74 41                	je     857e832 <_ZN16MonitorTcpThread8dispatchEPv+0xed8>
 857e7f1:	a1 34 be 40 09       	mov    0x940be34,%eax
 857e7f6:	89 04 24             	mov    %eax,(%esp)
 857e7f9:	e8 2e 21 ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857e7fe:	83 f8 02             	cmp    $0x2,%eax
 857e801:	75 2f                	jne    857e832 <_ZN16MonitorTcpThread8dispatchEPv+0xed8>
 857e803:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857e809:	c1 e8 05             	shr    $0x5,%eax
 857e80c:	8b 94 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%edx
 857e813:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857e819:	83 e0 1f             	and    $0x1f,%eax
 857e81c:	89 d3                	mov    %edx,%ebx
 857e81e:	89 c1                	mov    %eax,%ecx
 857e820:	d3 fb                	sar    %cl,%ebx
 857e822:	89 d8                	mov    %ebx,%eax
 857e824:	83 e0 01             	and    $0x1,%eax
 857e827:	84 c0                	test   %al,%al
 857e829:	74 07                	je     857e832 <_ZN16MonitorTcpThread8dispatchEPv+0xed8>
 857e82b:	b8 01 00 00 00       	mov    $0x1,%eax
 857e830:	eb 05                	jmp    857e837 <_ZN16MonitorTcpThread8dispatchEPv+0xedd>
 857e832:	b8 00 00 00 00       	mov    $0x0,%eax
 857e837:	84 c0                	test   %al,%al
 857e839:	74 40                	je     857e87b <_ZN16MonitorTcpThread8dispatchEPv+0xf21>
 857e83b:	a1 34 be 40 09       	mov    0x940be34,%eax
 857e840:	89 04 24             	mov    %eax,(%esp)
 857e843:	e8 c6 f0 d7 ff       	call   82fd90e <_ZN15BaseServerProxy9OnTcpRecvEv>
 857e848:	83 f0 01             	xor    $0x1,%eax
 857e84b:	84 c0                	test   %al,%al
 857e84d:	74 2c                	je     857e87b <_ZN16MonitorTcpThread8dispatchEPv+0xf21>
 857e84f:	c7 44 24 10 f0 7f ca 	movl   $0x8ca7ff0,0x10(%esp)
 857e856:	08 
 857e857:	c7 44 24 0c 93 04 00 	movl   $0x493,0xc(%esp)
 857e85e:	00 
 857e85f:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857e866:	08 
 857e867:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e86e:	08 
 857e86f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857e876:	e8 8f 53 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857e87b:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857e881:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e884:	74 71                	je     857e8f7 <_ZN16MonitorTcpThread8dispatchEPv+0xf9d>
 857e886:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857e88c:	c1 e8 05             	shr    $0x5,%eax
 857e88f:	8b 94 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%edx
 857e896:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 857e89c:	83 e0 1f             	and    $0x1f,%eax
 857e89f:	89 d3                	mov    %edx,%ebx
 857e8a1:	89 c1                	mov    %eax,%ecx
 857e8a3:	d3 fb                	sar    %cl,%ebx
 857e8a5:	89 d8                	mov    %ebx,%eax
 857e8a7:	83 e0 01             	and    $0x1,%eax
 857e8aa:	84 c0                	test   %al,%al
 857e8ac:	74 49                	je     857e8f7 <_ZN16MonitorTcpThread8dispatchEPv+0xf9d>
 857e8ae:	a1 34 be 40 09       	mov    0x940be34,%eax
 857e8b3:	89 04 24             	mov    %eax,(%esp)
 857e8b6:	e8 ef f1 d7 ff       	call   82fdaaa <_ZN15BaseServerProxy9OnTcpSendEv>
 857e8bb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 857e8be:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 857e8c2:	79 33                	jns    857e8f7 <_ZN16MonitorTcpThread8dispatchEPv+0xf9d>
 857e8c4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 857e8c7:	89 44 24 14          	mov    %eax,0x14(%esp)
 857e8cb:	c7 44 24 10 10 80 ca 	movl   $0x8ca8010,0x10(%esp)
 857e8d2:	08 
 857e8d3:	c7 44 24 0c 9d 04 00 	movl   $0x49d,0xc(%esp)
 857e8da:	00 
 857e8db:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857e8e2:	08 
 857e8e3:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e8ea:	08 
 857e8eb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857e8f2:	e8 13 53 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857e8f7:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857e8fd:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e900:	74 41                	je     857e943 <_ZN16MonitorTcpThread8dispatchEPv+0xfe9>
 857e902:	a1 40 be 40 09       	mov    0x940be40,%eax
 857e907:	89 04 24             	mov    %eax,(%esp)
 857e90a:	e8 47 0b 00 00       	call   857f456 <_ZN18CPCRoomServerProxy14GetSocketStateEv>
 857e90f:	83 f8 02             	cmp    $0x2,%eax
 857e912:	75 2f                	jne    857e943 <_ZN16MonitorTcpThread8dispatchEPv+0xfe9>
 857e914:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857e91a:	c1 e8 05             	shr    $0x5,%eax
 857e91d:	8b 94 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%edx
 857e924:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857e92a:	83 e0 1f             	and    $0x1f,%eax
 857e92d:	89 d3                	mov    %edx,%ebx
 857e92f:	89 c1                	mov    %eax,%ecx
 857e931:	d3 fb                	sar    %cl,%ebx
 857e933:	89 d8                	mov    %ebx,%eax
 857e935:	83 e0 01             	and    $0x1,%eax
 857e938:	84 c0                	test   %al,%al
 857e93a:	74 07                	je     857e943 <_ZN16MonitorTcpThread8dispatchEPv+0xfe9>
 857e93c:	b8 01 00 00 00       	mov    $0x1,%eax
 857e941:	eb 05                	jmp    857e948 <_ZN16MonitorTcpThread8dispatchEPv+0xfee>
 857e943:	b8 00 00 00 00       	mov    $0x0,%eax
 857e948:	84 c0                	test   %al,%al
 857e94a:	74 4f                	je     857e99b <_ZN16MonitorTcpThread8dispatchEPv+0x1041>
 857e94c:	a1 40 be 40 09       	mov    0x940be40,%eax
 857e951:	89 04 24             	mov    %eax,(%esp)
 857e954:	e8 41 31 ef ff       	call   8471a9a <_ZN18CPCRoomServerProxy9OnTcpRecvEv>
 857e959:	83 f0 01             	xor    $0x1,%eax
 857e95c:	84 c0                	test   %al,%al
 857e95e:	74 3b                	je     857e99b <_ZN16MonitorTcpThread8dispatchEPv+0x1041>
 857e960:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857e967:	e8 32 d3 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857e96c:	89 45 98             	mov    %eax,-0x68(%ebp)
 857e96f:	c7 44 24 10 3c 80 ca 	movl   $0x8ca803c,0x10(%esp)
 857e976:	08 
 857e977:	c7 44 24 0c e0 04 00 	movl   $0x4e0,0xc(%esp)
 857e97e:	00 
 857e97f:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857e986:	08 
 857e987:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857e98e:	08 
 857e98f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857e996:	e8 6f 52 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857e99b:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857e9a1:	83 f8 ff             	cmp    $0xffffffff,%eax
 857e9a4:	0f 84 06 01 00 00    	je     857eab0 <_ZN16MonitorTcpThread8dispatchEPv+0x1156>
 857e9aa:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857e9b0:	c1 e8 05             	shr    $0x5,%eax
 857e9b3:	8b 94 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%edx
 857e9ba:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857e9c0:	83 e0 1f             	and    $0x1f,%eax
 857e9c3:	89 d3                	mov    %edx,%ebx
 857e9c5:	89 c1                	mov    %eax,%ecx
 857e9c7:	d3 fb                	sar    %cl,%ebx
 857e9c9:	89 d8                	mov    %ebx,%eax
 857e9cb:	83 e0 01             	and    $0x1,%eax
 857e9ce:	84 c0                	test   %al,%al
 857e9d0:	0f 84 da 00 00 00    	je     857eab0 <_ZN16MonitorTcpThread8dispatchEPv+0x1156>
 857e9d6:	a1 40 be 40 09       	mov    0x940be40,%eax
 857e9db:	89 04 24             	mov    %eax,(%esp)
 857e9de:	e8 73 0a 00 00       	call   857f456 <_ZN18CPCRoomServerProxy14GetSocketStateEv>
 857e9e3:	83 f8 01             	cmp    $0x1,%eax
 857e9e6:	0f 94 c0             	sete   %al
 857e9e9:	84 c0                	test   %al,%al
 857e9eb:	74 6b                	je     857ea58 <_ZN16MonitorTcpThread8dispatchEPv+0x10fe>
 857e9ed:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 857e9f4:	c7 85 04 ff ff ff 04 	movl   $0x4,-0xfc(%ebp)
 857e9fb:	00 00 00 
 857e9fe:	8d 95 04 ff ff ff    	lea    -0xfc(%ebp),%edx
 857ea04:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 857ea0a:	89 54 24 10          	mov    %edx,0x10(%esp)
 857ea0e:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 857ea14:	89 54 24 0c          	mov    %edx,0xc(%esp)
 857ea18:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 857ea1f:	00 
 857ea20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857ea27:	00 
 857ea28:	89 04 24             	mov    %eax,(%esp)
 857ea2b:	e8 b0 fc af ff       	call   807e6e0 <getsockopt@plt>
 857ea30:	89 45 cc             	mov    %eax,-0x34(%ebp)
 857ea33:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 857ea39:	85 c0                	test   %eax,%eax
 857ea3b:	75 1b                	jne    857ea58 <_ZN16MonitorTcpThread8dispatchEPv+0x10fe>
 857ea3d:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 857ea41:	75 15                	jne    857ea58 <_ZN16MonitorTcpThread8dispatchEPv+0x10fe>
 857ea43:	a1 40 be 40 09       	mov    0x940be40,%eax
 857ea48:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 857ea4f:	00 
 857ea50:	89 04 24             	mov    %eax,(%esp)
 857ea53:	e8 ec 09 00 00       	call   857f444 <_ZN18CPCRoomServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857ea58:	a1 40 be 40 09       	mov    0x940be40,%eax
 857ea5d:	89 04 24             	mov    %eax,(%esp)
 857ea60:	e8 cd 30 ef ff       	call   8471b32 <_ZN18CPCRoomServerProxy9OnTcpSendEv>
 857ea65:	89 45 c8             	mov    %eax,-0x38(%ebp)
 857ea68:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 857ea6c:	79 42                	jns    857eab0 <_ZN16MonitorTcpThread8dispatchEPv+0x1156>
 857ea6e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857ea75:	e8 24 d2 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857ea7a:	89 45 98             	mov    %eax,-0x68(%ebp)
 857ea7d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 857ea80:	89 44 24 14          	mov    %eax,0x14(%esp)
 857ea84:	c7 44 24 10 5c 80 ca 	movl   $0x8ca805c,0x10(%esp)
 857ea8b:	08 
 857ea8c:	c7 44 24 0c f9 04 00 	movl   $0x4f9,0xc(%esp)
 857ea93:	00 
 857ea94:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857ea9b:	08 
 857ea9c:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857eaa3:	08 
 857eaa4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857eaab:	e8 5a 51 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857eab0:	a1 40 be 40 09       	mov    0x940be40,%eax
 857eab5:	89 04 24             	mov    %eax,(%esp)
 857eab8:	e8 99 09 00 00       	call   857f456 <_ZN18CPCRoomServerProxy14GetSocketStateEv>
 857eabd:	85 c0                	test   %eax,%eax
 857eabf:	0f 94 c0             	sete   %al
 857eac2:	84 c0                	test   %al,%al
 857eac4:	74 4c                	je     857eb12 <_ZN16MonitorTcpThread8dispatchEPv+0x11b8>
 857eac6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857eacd:	e8 cc d1 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857ead2:	2b 45 98             	sub    -0x68(%ebp),%eax
 857ead5:	83 f8 3c             	cmp    $0x3c,%eax
 857ead8:	0f 9f c0             	setg   %al
 857eadb:	84 c0                	test   %al,%al
 857eadd:	74 7f                	je     857eb5e <_ZN16MonitorTcpThread8dispatchEPv+0x1204>
 857eadf:	a1 40 be 40 09       	mov    0x940be40,%eax
 857eae4:	89 04 24             	mov    %eax,(%esp)
 857eae7:	e8 f6 2d ef ff       	call   84718e2 <_ZN18CPCRoomServerProxy7InitTcpEv>
 857eaec:	a1 40 be 40 09       	mov    0x940be40,%eax
 857eaf1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857eaf8:	00 
 857eaf9:	89 04 24             	mov    %eax,(%esp)
 857eafc:	e8 43 09 00 00       	call   857f444 <_ZN18CPCRoomServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857eb01:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857eb08:	e8 91 d1 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857eb0d:	89 45 98             	mov    %eax,-0x68(%ebp)
 857eb10:	eb 4c                	jmp    857eb5e <_ZN16MonitorTcpThread8dispatchEPv+0x1204>
 857eb12:	a1 40 be 40 09       	mov    0x940be40,%eax
 857eb17:	89 04 24             	mov    %eax,(%esp)
 857eb1a:	e8 37 09 00 00       	call   857f456 <_ZN18CPCRoomServerProxy14GetSocketStateEv>
 857eb1f:	83 f8 01             	cmp    $0x1,%eax
 857eb22:	0f 94 c0             	sete   %al
 857eb25:	84 c0                	test   %al,%al
 857eb27:	74 35                	je     857eb5e <_ZN16MonitorTcpThread8dispatchEPv+0x1204>
 857eb29:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857eb30:	e8 69 d1 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857eb35:	2b 45 98             	sub    -0x68(%ebp),%eax
 857eb38:	83 f8 3c             	cmp    $0x3c,%eax
 857eb3b:	0f 9f c0             	setg   %al
 857eb3e:	84 c0                	test   %al,%al
 857eb40:	74 1c                	je     857eb5e <_ZN16MonitorTcpThread8dispatchEPv+0x1204>
 857eb42:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857eb49:	e8 50 d1 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857eb4e:	89 45 98             	mov    %eax,-0x68(%ebp)
 857eb51:	a1 40 be 40 09       	mov    0x940be40,%eax
 857eb56:	89 04 24             	mov    %eax,(%esp)
 857eb59:	e8 80 2e ef ff       	call   84719de <_ZN18CPCRoomServerProxy10DisconnectEv>
 857eb5e:	e8 44 b8 b5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 857eb63:	89 04 24             	mov    %eax,(%esp)
 857eb66:	e8 b3 27 b7 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 857eb6b:	84 c0                	test   %al,%al
 857eb6d:	0f 84 30 02 00 00    	je     857eda3 <_ZN16MonitorTcpThread8dispatchEPv+0x1449>
 857eb73:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857eb79:	83 f8 ff             	cmp    $0xffffffff,%eax
 857eb7c:	74 41                	je     857ebbf <_ZN16MonitorTcpThread8dispatchEPv+0x1265>
 857eb7e:	a1 44 be 40 09       	mov    0x940be44,%eax
 857eb83:	89 04 24             	mov    %eax,(%esp)
 857eb86:	e8 eb 08 00 00       	call   857f476 <_ZN21CCommunityServerProxy14GetSocketStateEv>
 857eb8b:	83 f8 02             	cmp    $0x2,%eax
 857eb8e:	75 2f                	jne    857ebbf <_ZN16MonitorTcpThread8dispatchEPv+0x1265>
 857eb90:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857eb96:	c1 e8 05             	shr    $0x5,%eax
 857eb99:	8b 94 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%edx
 857eba0:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857eba6:	83 e0 1f             	and    $0x1f,%eax
 857eba9:	89 d3                	mov    %edx,%ebx
 857ebab:	89 c1                	mov    %eax,%ecx
 857ebad:	d3 fb                	sar    %cl,%ebx
 857ebaf:	89 d8                	mov    %ebx,%eax
 857ebb1:	83 e0 01             	and    $0x1,%eax
 857ebb4:	84 c0                	test   %al,%al
 857ebb6:	74 07                	je     857ebbf <_ZN16MonitorTcpThread8dispatchEPv+0x1265>
 857ebb8:	b8 01 00 00 00       	mov    $0x1,%eax
 857ebbd:	eb 05                	jmp    857ebc4 <_ZN16MonitorTcpThread8dispatchEPv+0x126a>
 857ebbf:	b8 00 00 00 00       	mov    $0x0,%eax
 857ebc4:	84 c0                	test   %al,%al
 857ebc6:	74 40                	je     857ec08 <_ZN16MonitorTcpThread8dispatchEPv+0x12ae>
 857ebc8:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ebcd:	89 04 24             	mov    %eax,(%esp)
 857ebd0:	e8 57 dc ee ff       	call   846c82c <_ZN21CCommunityServerProxy9OnTcpRecvEv>
 857ebd5:	83 f0 01             	xor    $0x1,%eax
 857ebd8:	84 c0                	test   %al,%al
 857ebda:	74 2c                	je     857ec08 <_ZN16MonitorTcpThread8dispatchEPv+0x12ae>
 857ebdc:	c7 44 24 10 8c 80 ca 	movl   $0x8ca808c,0x10(%esp)
 857ebe3:	08 
 857ebe4:	c7 44 24 0c 21 05 00 	movl   $0x521,0xc(%esp)
 857ebeb:	00 
 857ebec:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857ebf3:	08 
 857ebf4:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857ebfb:	08 
 857ebfc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857ec03:	e8 02 50 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857ec08:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857ec0e:	83 f8 ff             	cmp    $0xffffffff,%eax
 857ec11:	0f 84 f7 00 00 00    	je     857ed0e <_ZN16MonitorTcpThread8dispatchEPv+0x13b4>
 857ec17:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857ec1d:	c1 e8 05             	shr    $0x5,%eax
 857ec20:	8b 94 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%edx
 857ec27:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857ec2d:	83 e0 1f             	and    $0x1f,%eax
 857ec30:	89 d3                	mov    %edx,%ebx
 857ec32:	89 c1                	mov    %eax,%ecx
 857ec34:	d3 fb                	sar    %cl,%ebx
 857ec36:	89 d8                	mov    %ebx,%eax
 857ec38:	83 e0 01             	and    $0x1,%eax
 857ec3b:	84 c0                	test   %al,%al
 857ec3d:	0f 84 cb 00 00 00    	je     857ed0e <_ZN16MonitorTcpThread8dispatchEPv+0x13b4>
 857ec43:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ec48:	89 04 24             	mov    %eax,(%esp)
 857ec4b:	e8 26 08 00 00       	call   857f476 <_ZN21CCommunityServerProxy14GetSocketStateEv>
 857ec50:	83 f8 01             	cmp    $0x1,%eax
 857ec53:	0f 94 c0             	sete   %al
 857ec56:	84 c0                	test   %al,%al
 857ec58:	74 6b                	je     857ecc5 <_ZN16MonitorTcpThread8dispatchEPv+0x136b>
 857ec5a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 857ec61:	c7 85 00 ff ff ff 04 	movl   $0x4,-0x100(%ebp)
 857ec68:	00 00 00 
 857ec6b:	8d 95 00 ff ff ff    	lea    -0x100(%ebp),%edx
 857ec71:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 857ec77:	89 54 24 10          	mov    %edx,0x10(%esp)
 857ec7b:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 857ec81:	89 54 24 0c          	mov    %edx,0xc(%esp)
 857ec85:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 857ec8c:	00 
 857ec8d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857ec94:	00 
 857ec95:	89 04 24             	mov    %eax,(%esp)
 857ec98:	e8 43 fa af ff       	call   807e6e0 <getsockopt@plt>
 857ec9d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 857eca0:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 857eca6:	85 c0                	test   %eax,%eax
 857eca8:	75 1b                	jne    857ecc5 <_ZN16MonitorTcpThread8dispatchEPv+0x136b>
 857ecaa:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 857ecae:	75 15                	jne    857ecc5 <_ZN16MonitorTcpThread8dispatchEPv+0x136b>
 857ecb0:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ecb5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 857ecbc:	00 
 857ecbd:	89 04 24             	mov    %eax,(%esp)
 857ecc0:	e8 9f 07 00 00       	call   857f464 <_ZN21CCommunityServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857ecc5:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ecca:	89 04 24             	mov    %eax,(%esp)
 857eccd:	e8 f2 db ee ff       	call   846c8c4 <_ZN21CCommunityServerProxy9OnTcpSendEv>
 857ecd2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 857ecd5:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 857ecd9:	79 33                	jns    857ed0e <_ZN16MonitorTcpThread8dispatchEPv+0x13b4>
 857ecdb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 857ecde:	89 44 24 14          	mov    %eax,0x14(%esp)
 857ece2:	c7 44 24 10 b0 80 ca 	movl   $0x8ca80b0,0x10(%esp)
 857ece9:	08 
 857ecea:	c7 44 24 0c 37 05 00 	movl   $0x537,0xc(%esp)
 857ecf1:	00 
 857ecf2:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857ecf9:	08 
 857ecfa:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857ed01:	08 
 857ed02:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857ed09:	e8 fc 4e 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857ed0e:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ed13:	89 04 24             	mov    %eax,(%esp)
 857ed16:	e8 5b 07 00 00       	call   857f476 <_ZN21CCommunityServerProxy14GetSocketStateEv>
 857ed1b:	85 c0                	test   %eax,%eax
 857ed1d:	0f 94 c0             	sete   %al
 857ed20:	84 c0                	test   %al,%al
 857ed22:	74 33                	je     857ed57 <_ZN16MonitorTcpThread8dispatchEPv+0x13fd>
 857ed24:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ed29:	89 04 24             	mov    %eax,(%esp)
 857ed2c:	e8 43 d9 ee ff       	call   846c674 <_ZN21CCommunityServerProxy7InitTcpEv>
 857ed31:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ed36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857ed3d:	00 
 857ed3e:	89 04 24             	mov    %eax,(%esp)
 857ed41:	e8 1e 07 00 00       	call   857f464 <_ZN21CCommunityServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857ed46:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857ed4d:	e8 4c cf b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857ed52:	89 45 9c             	mov    %eax,-0x64(%ebp)
 857ed55:	eb 4c                	jmp    857eda3 <_ZN16MonitorTcpThread8dispatchEPv+0x1449>
 857ed57:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ed5c:	89 04 24             	mov    %eax,(%esp)
 857ed5f:	e8 12 07 00 00       	call   857f476 <_ZN21CCommunityServerProxy14GetSocketStateEv>
 857ed64:	83 f8 01             	cmp    $0x1,%eax
 857ed67:	0f 94 c0             	sete   %al
 857ed6a:	84 c0                	test   %al,%al
 857ed6c:	74 35                	je     857eda3 <_ZN16MonitorTcpThread8dispatchEPv+0x1449>
 857ed6e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857ed75:	e8 24 cf b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857ed7a:	2b 45 9c             	sub    -0x64(%ebp),%eax
 857ed7d:	83 f8 3c             	cmp    $0x3c,%eax
 857ed80:	0f 9f c0             	setg   %al
 857ed83:	84 c0                	test   %al,%al
 857ed85:	74 1c                	je     857eda3 <_ZN16MonitorTcpThread8dispatchEPv+0x1449>
 857ed87:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857ed8e:	e8 0b cf b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857ed93:	89 45 9c             	mov    %eax,-0x64(%ebp)
 857ed96:	a1 44 be 40 09       	mov    0x940be44,%eax
 857ed9b:	89 04 24             	mov    %eax,(%esp)
 857ed9e:	e8 cd d9 ee ff       	call   846c770 <_ZN21CCommunityServerProxy10DisconnectEv>
 857eda3:	e8 ff b5 b5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 857eda8:	89 04 24             	mov    %eax,(%esp)
 857edab:	e8 6e 25 b7 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 857edb0:	83 f0 01             	xor    $0x1,%eax
 857edb3:	84 c0                	test   %al,%al
 857edb5:	0f 84 d1 05 00 00    	je     857f38c <_ZN16MonitorTcpThread8dispatchEPv+0x1a32>
 857edbb:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857edc1:	83 f8 ff             	cmp    $0xffffffff,%eax
 857edc4:	74 41                	je     857ee07 <_ZN16MonitorTcpThread8dispatchEPv+0x14ad>
 857edc6:	a1 48 be 40 09       	mov    0x940be48,%eax
 857edcb:	89 04 24             	mov    %eax,(%esp)
 857edce:	e8 59 1b ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857edd3:	83 f8 02             	cmp    $0x2,%eax
 857edd6:	75 2f                	jne    857ee07 <_ZN16MonitorTcpThread8dispatchEPv+0x14ad>
 857edd8:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857edde:	c1 e8 05             	shr    $0x5,%eax
 857ede1:	8b 94 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%edx
 857ede8:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857edee:	83 e0 1f             	and    $0x1f,%eax
 857edf1:	89 d3                	mov    %edx,%ebx
 857edf3:	89 c1                	mov    %eax,%ecx
 857edf5:	d3 fb                	sar    %cl,%ebx
 857edf7:	89 d8                	mov    %ebx,%eax
 857edf9:	83 e0 01             	and    $0x1,%eax
 857edfc:	84 c0                	test   %al,%al
 857edfe:	74 07                	je     857ee07 <_ZN16MonitorTcpThread8dispatchEPv+0x14ad>
 857ee00:	b8 01 00 00 00       	mov    $0x1,%eax
 857ee05:	eb 05                	jmp    857ee0c <_ZN16MonitorTcpThread8dispatchEPv+0x14b2>
 857ee07:	b8 00 00 00 00       	mov    $0x0,%eax
 857ee0c:	84 c0                	test   %al,%al
 857ee0e:	74 40                	je     857ee50 <_ZN16MonitorTcpThread8dispatchEPv+0x14f6>
 857ee10:	a1 48 be 40 09       	mov    0x940be48,%eax
 857ee15:	89 04 24             	mov    %eax,(%esp)
 857ee18:	e8 f1 ea d7 ff       	call   82fd90e <_ZN15BaseServerProxy9OnTcpRecvEv>
 857ee1d:	83 f0 01             	xor    $0x1,%eax
 857ee20:	84 c0                	test   %al,%al
 857ee22:	74 2c                	je     857ee50 <_ZN16MonitorTcpThread8dispatchEPv+0x14f6>
 857ee24:	c7 44 24 10 e0 80 ca 	movl   $0x8ca80e0,0x10(%esp)
 857ee2b:	08 
 857ee2c:	c7 44 24 0c 34 07 00 	movl   $0x734,0xc(%esp)
 857ee33:	00 
 857ee34:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857ee3b:	08 
 857ee3c:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857ee43:	08 
 857ee44:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857ee4b:	e8 ba 4d 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857ee50:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857ee56:	83 f8 ff             	cmp    $0xffffffff,%eax
 857ee59:	0f 84 04 01 00 00    	je     857ef63 <_ZN16MonitorTcpThread8dispatchEPv+0x1609>
 857ee5f:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857ee65:	c1 e8 05             	shr    $0x5,%eax
 857ee68:	8b 94 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%edx
 857ee6f:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857ee75:	83 e0 1f             	and    $0x1f,%eax
 857ee78:	89 d3                	mov    %edx,%ebx
 857ee7a:	89 c1                	mov    %eax,%ecx
 857ee7c:	d3 fb                	sar    %cl,%ebx
 857ee7e:	89 d8                	mov    %ebx,%eax
 857ee80:	83 e0 01             	and    $0x1,%eax
 857ee83:	84 c0                	test   %al,%al
 857ee85:	0f 84 d8 00 00 00    	je     857ef63 <_ZN16MonitorTcpThread8dispatchEPv+0x1609>
 857ee8b:	a1 48 be 40 09       	mov    0x940be48,%eax
 857ee90:	89 04 24             	mov    %eax,(%esp)
 857ee93:	e8 94 1a ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857ee98:	83 f8 01             	cmp    $0x1,%eax
 857ee9b:	0f 94 c0             	sete   %al
 857ee9e:	84 c0                	test   %al,%al
 857eea0:	74 78                	je     857ef1a <_ZN16MonitorTcpThread8dispatchEPv+0x15c0>
 857eea2:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 857eea9:	c7 85 fc fe ff ff 04 	movl   $0x4,-0x104(%ebp)
 857eeb0:	00 00 00 
 857eeb3:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 857eeb9:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 857eebf:	89 54 24 10          	mov    %edx,0x10(%esp)
 857eec3:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 857eec9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 857eecd:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 857eed4:	00 
 857eed5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857eedc:	00 
 857eedd:	89 04 24             	mov    %eax,(%esp)
 857eee0:	e8 fb f7 af ff       	call   807e6e0 <getsockopt@plt>
 857eee5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 857eee8:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 857eeee:	85 c0                	test   %eax,%eax
 857eef0:	75 1b                	jne    857ef0d <_ZN16MonitorTcpThread8dispatchEPv+0x15b3>
 857eef2:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 857eef6:	75 15                	jne    857ef0d <_ZN16MonitorTcpThread8dispatchEPv+0x15b3>
 857eef8:	a1 48 be 40 09       	mov    0x940be48,%eax
 857eefd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 857ef04:	00 
 857ef05:	89 04 24             	mov    %eax,(%esp)
 857ef08:	e8 0d 1a ef ff       	call   847091a <_ZN15BaseServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857ef0d:	a1 48 be 40 09       	mov    0x940be48,%eax
 857ef12:	89 04 24             	mov    %eax,(%esp)
 857ef15:	e8 2c 8c d7 ff       	call   82f7b46 <_ZN19CAuctionServerProxy16SendRegistPacketEv>
 857ef1a:	a1 48 be 40 09       	mov    0x940be48,%eax
 857ef1f:	89 04 24             	mov    %eax,(%esp)
 857ef22:	e8 83 eb d7 ff       	call   82fdaaa <_ZN15BaseServerProxy9OnTcpSendEv>
 857ef27:	89 45 d8             	mov    %eax,-0x28(%ebp)
 857ef2a:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 857ef2e:	79 33                	jns    857ef63 <_ZN16MonitorTcpThread8dispatchEPv+0x1609>
 857ef30:	8b 45 d8             	mov    -0x28(%ebp),%eax
 857ef33:	89 44 24 14          	mov    %eax,0x14(%esp)
 857ef37:	c7 44 24 10 00 81 ca 	movl   $0x8ca8100,0x10(%esp)
 857ef3e:	08 
 857ef3f:	c7 44 24 0c 4c 07 00 	movl   $0x74c,0xc(%esp)
 857ef46:	00 
 857ef47:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857ef4e:	08 
 857ef4f:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857ef56:	08 
 857ef57:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857ef5e:	e8 a7 4c 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857ef63:	a1 48 be 40 09       	mov    0x940be48,%eax
 857ef68:	89 04 24             	mov    %eax,(%esp)
 857ef6b:	e8 bc 19 ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857ef70:	85 c0                	test   %eax,%eax
 857ef72:	0f 94 c0             	sete   %al
 857ef75:	84 c0                	test   %al,%al
 857ef77:	0f 84 97 00 00 00    	je     857f014 <_ZN16MonitorTcpThread8dispatchEPv+0x16ba>
 857ef7d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857ef84:	e8 15 cd b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857ef89:	2b 45 a0             	sub    -0x60(%ebp),%eax
 857ef8c:	83 f8 3c             	cmp    $0x3c,%eax
 857ef8f:	0f 9f c0             	setg   %al
 857ef92:	84 c0                	test   %al,%al
 857ef94:	0f 84 0b 01 00 00    	je     857f0a5 <_ZN16MonitorTcpThread8dispatchEPv+0x174b>
 857ef9a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857efa1:	00 
 857efa2:	c7 44 24 08 54 07 00 	movl   $0x754,0x8(%esp)
 857efa9:	00 
 857efaa:	c7 44 24 04 40 8f ca 	movl   $0x8ca8f40,0x4(%esp)
 857efb1:	08 
 857efb2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 857efb8:	89 04 24             	mov    %eax,(%esp)
 857efbb:	e8 58 07 fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857efc0:	c7 44 24 04 30 81 ca 	movl   $0x8ca8130,0x4(%esp)
 857efc7:	08 
 857efc8:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 857efce:	89 04 24             	mov    %eax,(%esp)
 857efd1:	e8 b2 07 fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857efd6:	a1 48 be 40 09       	mov    0x940be48,%eax
 857efdb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857efe2:	00 
 857efe3:	89 04 24             	mov    %eax,(%esp)
 857efe6:	e8 91 e4 d7 ff       	call   82fd47c <_ZN15BaseServerProxy7InitTcpEb>
 857efeb:	a1 48 be 40 09       	mov    0x940be48,%eax
 857eff0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857eff7:	00 
 857eff8:	89 04 24             	mov    %eax,(%esp)
 857effb:	e8 1a 19 ef ff       	call   847091a <_ZN15BaseServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857f000:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857f007:	e8 92 cc b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857f00c:	89 45 a0             	mov    %eax,-0x60(%ebp)
 857f00f:	e9 91 00 00 00       	jmp    857f0a5 <_ZN16MonitorTcpThread8dispatchEPv+0x174b>
 857f014:	a1 48 be 40 09       	mov    0x940be48,%eax
 857f019:	89 04 24             	mov    %eax,(%esp)
 857f01c:	e8 0b 19 ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857f021:	83 f8 01             	cmp    $0x1,%eax
 857f024:	0f 94 c0             	sete   %al
 857f027:	84 c0                	test   %al,%al
 857f029:	74 7a                	je     857f0a5 <_ZN16MonitorTcpThread8dispatchEPv+0x174b>
 857f02b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857f032:	e8 67 cc b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857f037:	2b 45 a0             	sub    -0x60(%ebp),%eax
 857f03a:	83 f8 3c             	cmp    $0x3c,%eax
 857f03d:	0f 9f c0             	setg   %al
 857f040:	84 c0                	test   %al,%al
 857f042:	74 61                	je     857f0a5 <_ZN16MonitorTcpThread8dispatchEPv+0x174b>
 857f044:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857f04b:	e8 4e cc b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857f050:	89 45 a0             	mov    %eax,-0x60(%ebp)
 857f053:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857f05a:	00 
 857f05b:	c7 44 24 08 61 07 00 	movl   $0x761,0x8(%esp)
 857f062:	00 
 857f063:	c7 44 24 04 40 8f ca 	movl   $0x8ca8f40,0x4(%esp)
 857f06a:	08 
 857f06b:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857f071:	89 04 24             	mov    %eax,(%esp)
 857f074:	e8 9f 06 fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857f079:	c7 44 24 04 68 81 ca 	movl   $0x8ca8168,0x4(%esp)
 857f080:	08 
 857f081:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 857f087:	89 04 24             	mov    %eax,(%esp)
 857f08a:	e8 f9 06 fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857f08f:	a1 48 be 40 09       	mov    0x940be48,%eax
 857f094:	8b 00                	mov    (%eax),%eax
 857f096:	83 c0 04             	add    $0x4,%eax
 857f099:	8b 10                	mov    (%eax),%edx
 857f09b:	a1 48 be 40 09       	mov    0x940be48,%eax
 857f0a0:	89 04 24             	mov    %eax,(%esp)
 857f0a3:	ff d2                	call   *%edx
 857f0a5:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857f0ab:	83 f8 ff             	cmp    $0xffffffff,%eax
 857f0ae:	74 41                	je     857f0f1 <_ZN16MonitorTcpThread8dispatchEPv+0x1797>
 857f0b0:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f0b5:	89 04 24             	mov    %eax,(%esp)
 857f0b8:	e8 6f 18 ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857f0bd:	83 f8 02             	cmp    $0x2,%eax
 857f0c0:	75 2f                	jne    857f0f1 <_ZN16MonitorTcpThread8dispatchEPv+0x1797>
 857f0c2:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857f0c8:	c1 e8 05             	shr    $0x5,%eax
 857f0cb:	8b 94 85 78 fe ff ff 	mov    -0x188(%ebp,%eax,4),%edx
 857f0d2:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857f0d8:	83 e0 1f             	and    $0x1f,%eax
 857f0db:	89 d3                	mov    %edx,%ebx
 857f0dd:	89 c1                	mov    %eax,%ecx
 857f0df:	d3 fb                	sar    %cl,%ebx
 857f0e1:	89 d8                	mov    %ebx,%eax
 857f0e3:	83 e0 01             	and    $0x1,%eax
 857f0e6:	84 c0                	test   %al,%al
 857f0e8:	74 07                	je     857f0f1 <_ZN16MonitorTcpThread8dispatchEPv+0x1797>
 857f0ea:	b8 01 00 00 00       	mov    $0x1,%eax
 857f0ef:	eb 05                	jmp    857f0f6 <_ZN16MonitorTcpThread8dispatchEPv+0x179c>
 857f0f1:	b8 00 00 00 00       	mov    $0x0,%eax
 857f0f6:	84 c0                	test   %al,%al
 857f0f8:	74 40                	je     857f13a <_ZN16MonitorTcpThread8dispatchEPv+0x17e0>
 857f0fa:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f0ff:	89 04 24             	mov    %eax,(%esp)
 857f102:	e8 07 e8 d7 ff       	call   82fd90e <_ZN15BaseServerProxy9OnTcpRecvEv>
 857f107:	83 f0 01             	xor    $0x1,%eax
 857f10a:	84 c0                	test   %al,%al
 857f10c:	74 2c                	je     857f13a <_ZN16MonitorTcpThread8dispatchEPv+0x17e0>
 857f10e:	c7 44 24 10 ac 81 ca 	movl   $0x8ca81ac,0x10(%esp)
 857f115:	08 
 857f116:	c7 44 24 0c 6c 07 00 	movl   $0x76c,0xc(%esp)
 857f11d:	00 
 857f11e:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857f125:	08 
 857f126:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857f12d:	08 
 857f12e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857f135:	e8 d0 4a 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857f13a:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857f140:	83 f8 ff             	cmp    $0xffffffff,%eax
 857f143:	0f 84 04 01 00 00    	je     857f24d <_ZN16MonitorTcpThread8dispatchEPv+0x18f3>
 857f149:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857f14f:	c1 e8 05             	shr    $0x5,%eax
 857f152:	8b 94 85 f8 fd ff ff 	mov    -0x208(%ebp,%eax,4),%edx
 857f159:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857f15f:	83 e0 1f             	and    $0x1f,%eax
 857f162:	89 d3                	mov    %edx,%ebx
 857f164:	89 c1                	mov    %eax,%ecx
 857f166:	d3 fb                	sar    %cl,%ebx
 857f168:	89 d8                	mov    %ebx,%eax
 857f16a:	83 e0 01             	and    $0x1,%eax
 857f16d:	84 c0                	test   %al,%al
 857f16f:	0f 84 d8 00 00 00    	je     857f24d <_ZN16MonitorTcpThread8dispatchEPv+0x18f3>
 857f175:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f17a:	89 04 24             	mov    %eax,(%esp)
 857f17d:	e8 aa 17 ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857f182:	83 f8 01             	cmp    $0x1,%eax
 857f185:	0f 94 c0             	sete   %al
 857f188:	84 c0                	test   %al,%al
 857f18a:	74 78                	je     857f204 <_ZN16MonitorTcpThread8dispatchEPv+0x18aa>
 857f18c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 857f193:	c7 85 f8 fe ff ff 04 	movl   $0x4,-0x108(%ebp)
 857f19a:	00 00 00 
 857f19d:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 857f1a3:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 857f1a9:	89 54 24 10          	mov    %edx,0x10(%esp)
 857f1ad:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 857f1b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 857f1b7:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 857f1be:	00 
 857f1bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857f1c6:	00 
 857f1c7:	89 04 24             	mov    %eax,(%esp)
 857f1ca:	e8 11 f5 af ff       	call   807e6e0 <getsockopt@plt>
 857f1cf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 857f1d2:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 857f1d8:	85 c0                	test   %eax,%eax
 857f1da:	75 1b                	jne    857f1f7 <_ZN16MonitorTcpThread8dispatchEPv+0x189d>
 857f1dc:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 857f1e0:	75 15                	jne    857f1f7 <_ZN16MonitorTcpThread8dispatchEPv+0x189d>
 857f1e2:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f1e7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 857f1ee:	00 
 857f1ef:	89 04 24             	mov    %eax,(%esp)
 857f1f2:	e8 23 17 ef ff       	call   847091a <_ZN15BaseServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857f1f7:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f1fc:	89 04 24             	mov    %eax,(%esp)
 857f1ff:	e8 52 8a d7 ff       	call   82f7c56 <_ZN23CCeraAuctionServerProxy16SendRegistPacketEv>
 857f204:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f209:	89 04 24             	mov    %eax,(%esp)
 857f20c:	e8 99 e8 d7 ff       	call   82fdaaa <_ZN15BaseServerProxy9OnTcpSendEv>
 857f211:	89 45 e0             	mov    %eax,-0x20(%ebp)
 857f214:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 857f218:	79 33                	jns    857f24d <_ZN16MonitorTcpThread8dispatchEPv+0x18f3>
 857f21a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 857f21d:	89 44 24 14          	mov    %eax,0x14(%esp)
 857f221:	c7 44 24 10 d4 81 ca 	movl   $0x8ca81d4,0x10(%esp)
 857f228:	08 
 857f229:	c7 44 24 0c 84 07 00 	movl   $0x784,0xc(%esp)
 857f230:	00 
 857f231:	c7 44 24 08 40 8f ca 	movl   $0x8ca8f40,0x8(%esp)
 857f238:	08 
 857f239:	c7 44 24 04 93 7c ca 	movl   $0x8ca7c93,0x4(%esp)
 857f240:	08 
 857f241:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 857f248:	e8 bd 49 55 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 857f24d:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f252:	89 04 24             	mov    %eax,(%esp)
 857f255:	e8 d2 16 ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857f25a:	85 c0                	test   %eax,%eax
 857f25c:	0f 94 c0             	sete   %al
 857f25f:	84 c0                	test   %al,%al
 857f261:	0f 84 97 00 00 00    	je     857f2fe <_ZN16MonitorTcpThread8dispatchEPv+0x19a4>
 857f267:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857f26e:	e8 2b ca b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857f273:	2b 45 a4             	sub    -0x5c(%ebp),%eax
 857f276:	83 f8 3c             	cmp    $0x3c,%eax
 857f279:	0f 9f c0             	setg   %al
 857f27c:	84 c0                	test   %al,%al
 857f27e:	0f 84 08 01 00 00    	je     857f38c <_ZN16MonitorTcpThread8dispatchEPv+0x1a32>
 857f284:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857f28b:	00 
 857f28c:	c7 44 24 08 8c 07 00 	movl   $0x78c,0x8(%esp)
 857f293:	00 
 857f294:	c7 44 24 04 40 8f ca 	movl   $0x8ca8f40,0x4(%esp)
 857f29b:	08 
 857f29c:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 857f2a2:	89 04 24             	mov    %eax,(%esp)
 857f2a5:	e8 6e 04 fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857f2aa:	c7 44 24 04 08 82 ca 	movl   $0x8ca8208,0x4(%esp)
 857f2b1:	08 
 857f2b2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 857f2b8:	89 04 24             	mov    %eax,(%esp)
 857f2bb:	e8 c8 04 fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857f2c0:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f2c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857f2cc:	00 
 857f2cd:	89 04 24             	mov    %eax,(%esp)
 857f2d0:	e8 a7 e1 d7 ff       	call   82fd47c <_ZN15BaseServerProxy7InitTcpEb>
 857f2d5:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f2da:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857f2e1:	00 
 857f2e2:	89 04 24             	mov    %eax,(%esp)
 857f2e5:	e8 30 16 ef ff       	call   847091a <_ZN15BaseServerProxy14SetSocketStateE17ENUM_SOCKET_STATE>
 857f2ea:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857f2f1:	e8 a8 c9 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857f2f6:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 857f2f9:	e9 8e 00 00 00       	jmp    857f38c <_ZN16MonitorTcpThread8dispatchEPv+0x1a32>
 857f2fe:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f303:	89 04 24             	mov    %eax,(%esp)
 857f306:	e8 21 16 ef ff       	call   847092c <_ZN15BaseServerProxy14GetSocketStateEv>
 857f30b:	83 f8 01             	cmp    $0x1,%eax
 857f30e:	0f 94 c0             	sete   %al
 857f311:	84 c0                	test   %al,%al
 857f313:	74 77                	je     857f38c <_ZN16MonitorTcpThread8dispatchEPv+0x1a32>
 857f315:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857f31c:	e8 7d c9 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857f321:	2b 45 a4             	sub    -0x5c(%ebp),%eax
 857f324:	83 f8 3c             	cmp    $0x3c,%eax
 857f327:	0f 9f c0             	setg   %al
 857f32a:	84 c0                	test   %al,%al
 857f32c:	74 5e                	je     857f38c <_ZN16MonitorTcpThread8dispatchEPv+0x1a32>
 857f32e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 857f335:	e8 64 c9 b4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 857f33a:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 857f33d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 857f344:	00 
 857f345:	c7 44 24 08 99 07 00 	movl   $0x799,0x8(%esp)
 857f34c:	00 
 857f34d:	c7 44 24 04 40 8f ca 	movl   $0x8ca8f40,0x4(%esp)
 857f354:	08 
 857f355:	8d 45 84             	lea    -0x7c(%ebp),%eax
 857f358:	89 04 24             	mov    %eax,(%esp)
 857f35b:	e8 b8 03 fd ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 857f360:	c7 44 24 04 44 82 ca 	movl   $0x8ca8244,0x4(%esp)
 857f367:	08 
 857f368:	8d 45 84             	lea    -0x7c(%ebp),%eax
 857f36b:	89 04 24             	mov    %eax,(%esp)
 857f36e:	e8 15 04 fd ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 857f373:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f378:	8b 00                	mov    (%eax),%eax
 857f37a:	83 c0 04             	add    $0x4,%eax
 857f37d:	8b 10                	mov    (%eax),%edx
 857f37f:	a1 4c be 40 09       	mov    0x940be4c,%eax
 857f384:	89 04 24             	mov    %eax,(%esp)
 857f387:	ff d2                	call   *%edx
 857f389:	eb 01                	jmp    857f38c <_ZN16MonitorTcpThread8dispatchEPv+0x1a32>
 857f38b:	90                   	nop
 857f38c:	0f b6 05 64 bd 40 09 	movzbl 0x940bd64,%eax
 857f393:	83 f0 01             	xor    $0x1,%eax
 857f396:	84 c0                	test   %al,%al
 857f398:	0f 85 f0 e5 ff ff    	jne    857d98e <_ZN16MonitorTcpThread8dispatchEPv+0x34>
 857f39e:	81 c4 1c 02 00 00    	add    $0x21c,%esp
 857f3a4:	5b                   	pop    %ebx
 857f3a5:	5e                   	pop    %esi
 857f3a6:	5f                   	pop    %edi
 857f3a7:	5d                   	pop    %ebp
 857f3a8:	c3                   	ret

```

```c
// MonitorTcpThread::dispatch @ 0x857d95a

/* MonitorTcpThread::dispatch(void*) */

void MonitorTcpThread::dispatch(void *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  CNetwork<100000,100000> *pCVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  CMonitorServerProxy *pCVar8;
  uint uVar9;
  Stream *pSVar10;
  CStreamGuard *pCVar11;
  CGuildServerProxy *pCVar12;
  GameWorld *pGVar13;
  fd_set local_20c;
  fd_set local_18c;
  socklen_t local_10c [4];
  CStreamGuard local_fc [8];
  CStreamGuard local_f4 [8];
  CStreamGuard local_ec [8];
  CStreamGuard local_e4 [8];
  int local_dc;
  timeval local_d8;
  int local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  cMyTrace local_b0 [16];
  cMyTrace local_a0 [16];
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  fd_set *local_54;
  uint local_50;
  fd_set *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  do {
    do {
      do {
        if (GlobalData::s_server_stop == '\x01') {
          return;
        }
        OS_API::Sleep(1);
        pCVar4 = (CNetwork<100000,100000> *)
                 CPCRoomServerProxy::GetTcpHandler(GlobalData::s_pcroom_proxy);
        local_bc = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 CCommunityServerProxy::GetTcpHandler(GlobalData::s_community_proxy);
        local_c0 = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 BaseServerProxy::GetTcpHandler(GlobalData::s_auction_proxy);
        local_c4 = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 BaseServerProxy::GetTcpHandler(GlobalData::s_cera_auction_proxy);
        local_c8 = CNetwork<100000,100000>::get_socket(pCVar4);
        pCVar4 = (CNetwork<100000,100000> *)
                 BaseServerProxy::GetTcpHandler(GlobalData::s_hades_proxy);
        local_cc = CNetwork<100000,100000>::get_socket(pCVar4);
        local_54 = &local_18c;
        for (local_58 = 0; local_58 < 0x20; local_58 = local_58 + 1) {
          local_54->fds_bits[local_58] = 0;
        }
        local_4c = &local_20c;
        for (local_50 = 0; local_50 < 0x20; local_50 = local_50 + 1) {
          local_4c->fds_bits[local_50] = 0;
        }
        local_d8.tv_sec = 1;
        local_d8.tv_usec = 0;
        local_dc = 0;
        local_5c = 0;
        while( true ) {
          iVar6 = CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArraySize
                            (GlobalData::s_monitor_proxy_mgr);
          if (iVar6 <= local_5c) break;
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
          if (iVar6 != -1) {
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_18c.fds_bits[uVar5 >> 5];
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_18c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_20c.fds_bits[uVar5 >> 5];
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_20c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
            local_b8 = CNetwork<100000,100000>::get_socket(pCVar4);
            piVar7 = std::max<int>(&local_dc,&local_b8);
            local_dc = *piVar7;
          }
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
          if (iVar6 != -1) {
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_18c.fds_bits[uVar5 >> 5];
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_18c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            uVar5 = CNetwork<100000,100000>::get_socket(pCVar4);
            uVar9 = local_20c.fds_bits[uVar5 >> 5];
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
            local_20c.fds_bits[uVar5 >> 5] = 1 << (bVar2 & 0x1f) | uVar9;
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
            local_b4 = CNetwork<100000,100000>::get_socket(pCVar4);
            piVar7 = std::max<int>(&local_dc,&local_b4);
            local_dc = *piVar7;
          }
          local_5c = local_5c + 1;
        }
        if (local_bc != 0xffffffff) {
          local_18c.fds_bits[local_bc >> 5] =
               local_18c.fds_bits[local_bc >> 5] | 1 << ((byte)local_bc & 0x1f);
          local_20c.fds_bits[local_bc >> 5] =
               local_20c.fds_bits[local_bc >> 5] | 1 << ((byte)local_bc & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_bc);
          local_dc = *piVar7;
        }
        if (local_c0 != 0xffffffff) {
          local_18c.fds_bits[local_c0 >> 5] =
               local_18c.fds_bits[local_c0 >> 5] | 1 << ((byte)local_c0 & 0x1f);
          local_20c.fds_bits[local_c0 >> 5] =
               local_20c.fds_bits[local_c0 >> 5] | 1 << ((byte)local_c0 & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_c0);
          local_dc = *piVar7;
        }
        if (local_c4 != 0xffffffff) {
          local_18c.fds_bits[local_c4 >> 5] =
               local_18c.fds_bits[local_c4 >> 5] | 1 << ((byte)local_c4 & 0x1f);
          local_20c.fds_bits[local_c4 >> 5] =
               local_20c.fds_bits[local_c4 >> 5] | 1 << ((byte)local_c4 & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_c4);
          local_dc = *piVar7;
        }
        if (local_c8 != 0xffffffff) {
          local_18c.fds_bits[local_c8 >> 5] =
               local_18c.fds_bits[local_c8 >> 5] | 1 << ((byte)local_c8 & 0x1f);
          local_20c.fds_bits[local_c8 >> 5] =
               local_20c.fds_bits[local_c8 >> 5] | 1 << ((byte)local_c8 & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_c8);
          local_dc = *piVar7;
        }
        if (local_cc != 0xffffffff) {
          local_18c.fds_bits[local_cc >> 5] =
               local_18c.fds_bits[local_cc >> 5] | 1 << ((byte)local_cc & 0x1f);
          local_20c.fds_bits[local_cc >> 5] =
               local_20c.fds_bits[local_cc >> 5] | 1 << ((byte)local_cc & 0x1f);
          piVar7 = std::max<int>(&local_dc,(int *)&local_cc);
          local_dc = *piVar7;
        }
        local_dc = local_dc + 1;
        local_d0 = select(local_dc,&local_18c,&local_20c,(fd_set *)0x0,&local_d8);
      } while (local_d0 < 0);
      local_5c = 0;
      while( true ) {
        iVar6 = CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArraySize
                          (GlobalData::s_monitor_proxy_mgr);
        if (iVar6 <= local_5c) break;
        pCVar8 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                           (GlobalData::s_monitor_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_18c.fds_bits[uVar9 >> 5];
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            cVar3 = CMonitorServerProxy::OnTcpRecv(pCVar8);
            if (cVar3 != '\x01') {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x449,"Monitor::OnTcpRecv == false!!!");
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x44c);
              CStreamGuard::CStreamGuard(local_e4,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
                    /* try { // try from 0857e1c6 to 0857e225 has its CatchHandler @ 0857e228 */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_e4);
              CStreamGuard::operator<<(pCVar11,0xc9);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e4);
              CStreamGuard::~CStreamGuard(local_e4);
            }
          }
        }
        pCVar8 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                           (GlobalData::s_monitor_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_20c.fds_bits[uVar9 >> 5];
          pCVar8 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                             (GlobalData::s_monitor_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CMonitorServerProxy::GetTcpHandler(pCVar8);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar8 = (CMonitorServerProxy *)
                     CServerProxyMgr<CMonitorServerProxy>::GetServerProxyArrayAt
                               (GlobalData::s_monitor_proxy_mgr,local_5c);
            local_48 = CMonitorServerProxy::OnTcpSend(pCVar8);
            if (local_48 < 0) {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x45e,"Monitor::OnTcpSend == false!!!remain_size(%d)",local_48);
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x460);
              CStreamGuard::CStreamGuard(local_ec,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
                    /* try { // try from 0857e39a to 0857e3f9 has its CatchHandler @ 0857e3fc */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_ec);
              CStreamGuard::operator<<(pCVar11,0xc9);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_ec);
              CStreamGuard::~CStreamGuard(local_ec);
            }
          }
        }
        pCVar12 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                            (GlobalData::s_guild_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_18c.fds_bits[uVar9 >> 5];
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            cVar3 = CGuildServerProxy::OnTcpRecv(pCVar12);
            if (cVar3 != '\x01') {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x46f,"Guild::OnTcpRecv == false!!!");
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x471);
              CStreamGuard::CStreamGuard(local_f4,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
                    /* try { // try from 0857e565 to 0857e5c4 has its CatchHandler @ 0857e5c7 */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_f4);
              CStreamGuard::operator<<(pCVar11,0xcb);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f4);
              CStreamGuard::~CStreamGuard(local_f4);
            }
          }
        }
        pCVar12 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                            (GlobalData::s_guild_proxy_mgr,local_5c);
        pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
        iVar6 = CNetwork<100000,100000>::get_socket(pCVar4);
        if (iVar6 != -1) {
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          uVar9 = CNetwork<100000,100000>::get_socket(pCVar4);
          iVar6 = local_20c.fds_bits[uVar9 >> 5];
          pCVar12 = (CGuildServerProxy *)
                    CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                              (GlobalData::s_guild_proxy_mgr,local_5c);
          pCVar4 = (CNetwork<100000,100000> *)CGuildServerProxy::GetTcpHandler(pCVar12);
          bVar2 = CNetwork<100000,100000>::get_socket(pCVar4);
          if ((iVar6 >> (bVar2 & 0x1f) & 1U) != 0) {
            pCVar12 = (CGuildServerProxy *)
                      CServerProxyMgr<CGuildServerProxy>::GetServerProxyArrayAt
                                (GlobalData::s_guild_proxy_mgr,local_5c);
            local_44 = CGuildServerProxy::OnTcpSend(pCVar12);
            if (local_44 < 0) {
              LogManager::logFormat
                        (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",
                         0x480,"Guild::OnTcpSend == false!!!remain_size(%d)",local_44);
              pSVar10 = (Stream *)
                        StreamPool::Acquire(GlobalData::s_stream_pool,"NetworkThread.cpp",0x481);
              CStreamGuard::CStreamGuard(local_fc,pSVar10,true);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_fc);
                    /* try { // try from 0857e739 to 0857e798 has its CatchHandler @ 0857e79b */
              CStreamGuard::operator<<(pCVar11,0x15f);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_fc);
              CStreamGuard::operator<<(pCVar11,-1);
              pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_fc);
              CStreamGuard::operator<<(pCVar11,0xcb);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_fc);
              CStreamGuard::~CStreamGuard(local_fc);
            }
          }
        }
        local_5c = local_5c + 1;
      }
      if (local_cc == 0xffffffff) {
LAB_0857e832:
        bVar1 = false;
      }
      else {
        iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_hades_proxy);
        if ((iVar6 != 2) ||
           ((local_18c.fds_bits[local_cc >> 5] >> ((byte)local_cc & 0x1f) & 1U) == 0))
        goto LAB_0857e832;
        bVar1 = true;
      }
      if (bVar1) {
        cVar3 = BaseServerProxy::OnTcpRecv(GlobalData::s_hades_proxy);
        if (cVar3 != '\x01') {
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x493,
                     "HADES::OnTcpRecv == false!!!");
        }
      }
      if ((local_cc != 0xffffffff) &&
         ((local_20c.fds_bits[local_cc >> 5] >> ((byte)local_cc & 0x1f) & 1U) != 0)) {
        local_40 = BaseServerProxy::OnTcpSend(GlobalData::s_hades_proxy);
        if (local_40 < 0) {
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x49d,
                     "HADES::OnTcpSend == false!!!remain_size(%d)",local_40);
        }
      }
      if (local_bc == 0xffffffff) {
LAB_0857e943:
        bVar1 = false;
      }
      else {
        iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
        if ((iVar6 != 2) ||
           ((local_18c.fds_bits[local_bc >> 5] >> ((byte)local_bc & 0x1f) & 1U) == 0))
        goto LAB_0857e943;
        bVar1 = true;
      }
      if (bVar1) {
        cVar3 = CPCRoomServerProxy::OnTcpRecv(GlobalData::s_pcroom_proxy);
        if (cVar3 != '\x01') {
          local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x4e0,
                     "PCROOM::OnTcpRecv == false!!!");
        }
      }
      if ((local_bc != 0xffffffff) &&
         ((local_20c.fds_bits[local_bc >> 5] >> ((byte)local_bc & 0x1f) & 1U) != 0)) {
        iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
        if (iVar6 == 1) {
          local_38 = 0;
          local_10c[3] = 4;
          local_38 = getsockopt(local_bc,1,4,&local_d0,local_10c + 3);
          if ((local_d0 == 0) && (local_38 == 0)) {
            CPCRoomServerProxy::SetSocketState(GlobalData::s_pcroom_proxy,2);
          }
        }
        local_3c = CPCRoomServerProxy::OnTcpSend(GlobalData::s_pcroom_proxy);
        if (local_3c < 0) {
          local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          LogManager::logFormat
                    (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x4f9,
                     "PCROOM::OnTcpSend == false!!!remain_size(%d)",local_3c);
        }
      }
      iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
      if (iVar6 == 0) {
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (0x3c < iVar6 - local_6c) {
          CPCRoomServerProxy::InitTcp(GlobalData::s_pcroom_proxy);
          CPCRoomServerProxy::SetSocketState(GlobalData::s_pcroom_proxy,1);
          local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        }
      }
      else {
        iVar6 = CPCRoomServerProxy::GetSocketState(GlobalData::s_pcroom_proxy);
        if (iVar6 == 1) {
          iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          if (0x3c < iVar6 - local_6c) {
            local_6c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            CPCRoomServerProxy::Disconnect(GlobalData::s_pcroom_proxy);
          }
        }
      }
      pGVar13 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar13);
      if (cVar3 != '\0') {
        if (local_c0 == 0xffffffff) {
LAB_0857ebbf:
          bVar1 = false;
        }
        else {
          iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
          if ((iVar6 != 2) ||
             ((local_18c.fds_bits[local_c0 >> 5] >> ((byte)local_c0 & 0x1f) & 1U) == 0))
          goto LAB_0857ebbf;
          bVar1 = true;
        }
        if (bVar1) {
          cVar3 = CCommunityServerProxy::OnTcpRecv(GlobalData::s_community_proxy);
          if (cVar3 != '\x01') {
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x521,
                       "COMMUNITY::OnTcpRecv == false!!!");
          }
        }
        if ((local_c0 != 0xffffffff) &&
           ((local_20c.fds_bits[local_c0 >> 5] >> ((byte)local_c0 & 0x1f) & 1U) != 0)) {
          iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
          if (iVar6 == 1) {
            local_30 = 0;
            local_10c[2] = 4;
            local_30 = getsockopt(local_c0,1,4,&local_d0,local_10c + 2);
            if ((local_d0 == 0) && (local_30 == 0)) {
              CCommunityServerProxy::SetSocketState(GlobalData::s_community_proxy,2);
            }
          }
          local_34 = CCommunityServerProxy::OnTcpSend(GlobalData::s_community_proxy);
          if (local_34 < 0) {
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x537,
                       "COMMUNITY::OnTcpSend == false!!!remain_size(%d)",local_34);
          }
        }
        iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
        if (iVar6 == 0) {
          CCommunityServerProxy::InitTcp(GlobalData::s_community_proxy);
          CCommunityServerProxy::SetSocketState(GlobalData::s_community_proxy,1);
          local_68 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        }
        else {
          iVar6 = CCommunityServerProxy::GetSocketState(GlobalData::s_community_proxy);
          if (iVar6 == 1) {
            iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
            if (0x3c < iVar6 - local_68) {
              local_68 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
              CCommunityServerProxy::Disconnect(GlobalData::s_community_proxy);
            }
          }
        }
      }
      pGVar13 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar13);
    } while (cVar3 == '\x01');
    if (local_c4 == 0xffffffff) {
LAB_0857ee07:
      bVar1 = false;
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
      if ((iVar6 != 2) || ((local_18c.fds_bits[local_c4 >> 5] >> ((byte)local_c4 & 0x1f) & 1U) == 0)
         ) goto LAB_0857ee07;
      bVar1 = true;
    }
    if (bVar1) {
      cVar3 = BaseServerProxy::OnTcpRecv(GlobalData::s_auction_proxy);
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x734,
                   "AUCTION - OnTcpRecv == false!!!");
      }
    }
    if ((local_c4 != 0xffffffff) &&
       ((local_20c.fds_bits[local_c4 >> 5] >> ((byte)local_c4 & 0x1f) & 1U) != 0)) {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
      if (iVar6 == 1) {
        local_28 = 0;
        local_10c[1] = 4;
        local_28 = getsockopt(local_c4,1,4,&local_d0,local_10c + 1);
        if ((local_d0 == 0) && (local_28 == 0)) {
          BaseServerProxy::SetSocketState(GlobalData::s_auction_proxy,2);
        }
        CAuctionServerProxy::SendRegistPacket((CAuctionServerProxy *)GlobalData::s_auction_proxy);
      }
      local_2c = BaseServerProxy::OnTcpSend(GlobalData::s_auction_proxy);
      if (local_2c < 0) {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x74c,
                   "AUCTION - OnTcpSend == false!!!remain_size(%d)",local_2c);
      }
    }
    iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
    if (iVar6 == 0) {
      iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (0x3c < iVar6 - local_64) {
        cMyTrace::cMyTrace(local_b0,"virtual void MonitorTcpThread::dispatch(void*)",0x754,0);
        cMyTrace::operator()(local_b0,"AUCTION - invoke InitTcp() by time out or disconnect");
        BaseServerProxy::InitTcp(GlobalData::s_auction_proxy,true);
        BaseServerProxy::SetSocketState(GlobalData::s_auction_proxy,1);
        local_64 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      }
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_auction_proxy);
      if (iVar6 == 1) {
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (0x3c < iVar6 - local_64) {
          local_64 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          cMyTrace::cMyTrace(local_a0,"virtual void MonitorTcpThread::dispatch(void*)",0x761,0);
          cMyTrace::operator()
                    (local_a0,"AUCTION - Disconnect to Auction Server(Timeout for connect trying)");
          (**(code **)(*(int *)GlobalData::s_auction_proxy + 4))(GlobalData::s_auction_proxy);
        }
      }
    }
    if (local_c8 == 0xffffffff) {
LAB_0857f0f1:
      bVar1 = false;
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
      if ((iVar6 != 2) || ((local_18c.fds_bits[local_c8 >> 5] >> ((byte)local_c8 & 0x1f) & 1U) == 0)
         ) goto LAB_0857f0f1;
      bVar1 = true;
    }
    if (bVar1) {
      cVar3 = BaseServerProxy::OnTcpRecv(GlobalData::s_cera_auction_proxy);
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x76c,
                   "Cera AUCTION - OnTcpRecv == false!!!");
      }
    }
    if ((local_c8 != 0xffffffff) &&
       ((local_20c.fds_bits[local_c8 >> 5] >> ((byte)local_c8 & 0x1f) & 1U) != 0)) {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
      if (iVar6 == 1) {
        local_20 = 0;
        local_10c[0] = 4;
        local_20 = getsockopt(local_c8,1,4,&local_d0,local_10c);
        if ((local_d0 == 0) && (local_20 == 0)) {
          BaseServerProxy::SetSocketState(GlobalData::s_cera_auction_proxy,2);
        }
        CCeraAuctionServerProxy::SendRegistPacket
                  ((CCeraAuctionServerProxy *)GlobalData::s_cera_auction_proxy);
      }
      local_24 = BaseServerProxy::OnTcpSend(GlobalData::s_cera_auction_proxy);
      if (local_24 < 0) {
        LogManager::logFormat
                  (1,"NetworkThread.cpp","virtual void MonitorTcpThread::dispatch(void*)",0x784,
                   "Cera AUCTION - OnTcpSend == false!!!remain_size(%d)",local_24);
      }
    }
    iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
    if (iVar6 == 0) {
      iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (0x3c < iVar6 - local_60) {
        cMyTrace::cMyTrace(local_90,"virtual void MonitorTcpThread::dispatch(void*)",0x78c,0);
        cMyTrace::operator()(local_90,"Cera AUCTION - invoke InitTcp() by time out or disconnect");
        BaseServerProxy::InitTcp(GlobalData::s_cera_auction_proxy,true);
        BaseServerProxy::SetSocketState(GlobalData::s_cera_auction_proxy,1);
        local_60 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      }
    }
    else {
      iVar6 = BaseServerProxy::GetSocketState(GlobalData::s_cera_auction_proxy);
      if (iVar6 == 1) {
        iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (0x3c < iVar6 - local_60) {
          local_60 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          cMyTrace::cMyTrace(local_80,"virtual void MonitorTcpThread::dispatch(void*)",0x799,0);
          cMyTrace::operator()
                    (local_80,
                     "Cera AUCTION - Disconnect to Cera Auction Server(Timeout for connect trying)")
          ;
          (**(code **)(*(int *)GlobalData::s_cera_auction_proxy + 4))
                    (GlobalData::s_cera_auction_proxy);
        }
      }
    }
  } while( true );
}

```

---

## ~MonitorTcpThread

```asm
// === 0857d90c MonitorTcpThread::~MonitorTcpThread  [0x0857d90c-0x857d93b] ===
 857d90c:	55                   	push   %ebp
 857d90d:	89 e5                	mov    %esp,%ebp
 857d90f:	83 ec 18             	sub    $0x18,%esp
 857d912:	8b 45 08             	mov    0x8(%ebp),%eax
 857d915:	c7 00 80 90 ca 08    	movl   $0x8ca9080,(%eax)
 857d91b:	8b 45 08             	mov    0x8(%ebp),%eax
 857d91e:	89 04 24             	mov    %eax,(%esp)
 857d921:	e8 20 32 0b 00       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 857d926:	b8 00 00 00 00       	mov    $0x0,%eax
 857d92b:	84 c0                	test   %al,%al
 857d92d:	74 0b                	je     857d93a <_ZN16MonitorTcpThreadD1Ev+0x2e>
 857d92f:	8b 45 08             	mov    0x8(%ebp),%eax
 857d932:	89 04 24             	mov    %eax,(%esp)
 857d935:	e8 b6 6b 1a 00       	call   87244f0 <_ZdlPv>
 857d93a:	c9                   	leave
 857d93b:	c3                   	ret

```

```c
// MonitorTcpThread::~MonitorTcpThread @ 0x857d90c

/* WARNING: Removing unreachable block (ram,0x0857d92f) */
/* MonitorTcpThread::~MonitorTcpThread() */

void __thiscall MonitorTcpThread::~MonitorTcpThread(MonitorTcpThread *this)

{
  *(undefined ***)this = &PTR_stop_08ca9080;
  ThreadInterface::~ThreadInterface((ThreadInterface *)this);
  return;
}

```

---

## ~MonitorTcpThread_0857d93c

```asm
// === 0857d93c MonitorTcpThread::~MonitorTcpThread  [0x0857d93c-0x857d959] ===
 857d93c:	55                   	push   %ebp
 857d93d:	89 e5                	mov    %esp,%ebp
 857d93f:	83 ec 18             	sub    $0x18,%esp
 857d942:	8b 45 08             	mov    0x8(%ebp),%eax
 857d945:	89 04 24             	mov    %eax,(%esp)
 857d948:	e8 bf ff ff ff       	call   857d90c <_ZN16MonitorTcpThreadD1Ev>
 857d94d:	8b 45 08             	mov    0x8(%ebp),%eax
 857d950:	89 04 24             	mov    %eax,(%esp)
 857d953:	e8 98 6b 1a 00       	call   87244f0 <_ZdlPv>
 857d958:	c9                   	leave
 857d959:	c3                   	ret

```

```c
// MonitorTcpThread::~MonitorTcpThread @ 0x857d93c

/* MonitorTcpThread::~MonitorTcpThread() */

void __thiscall MonitorTcpThread::~MonitorTcpThread(MonitorTcpThread *this)

{
  ~MonitorTcpThread(this);
  operator_delete(this);
  return;
}

```

