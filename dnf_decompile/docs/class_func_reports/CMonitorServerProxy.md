# CMonitorServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 30

---

## CMonitorServerProxy

```asm
// === 0847097c CMonitorServerProxy::CMonitorServerProxy  [0x0847097c-0x84709ff] ===
 847097c:	55                   	push   %ebp
 847097d:	89 e5                	mov    %esp,%ebp
 847097f:	56                   	push   %esi
 8470980:	53                   	push   %ebx
 8470981:	83 ec 10             	sub    $0x10,%esp
 8470984:	8b 45 08             	mov    0x8(%ebp),%eax
 8470987:	8b 55 0c             	mov    0xc(%ebp),%edx
 847098a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847098e:	89 04 24             	mov    %eax,(%esp)
 8470991:	e8 1a 70 29 00       	call   87079b0 <_ZNSsC1ERKSs>
 8470996:	8b 45 08             	mov    0x8(%ebp),%eax
 8470999:	8b 55 10             	mov    0x10(%ebp),%edx
 847099c:	89 50 04             	mov    %edx,0x4(%eax)
 847099f:	8b 45 08             	mov    0x8(%ebp),%eax
 84709a2:	8b 55 14             	mov    0x14(%ebp),%edx
 84709a5:	89 50 08             	mov    %edx,0x8(%eax)
 84709a8:	8b 45 08             	mov    0x8(%ebp),%eax
 84709ab:	83 c0 0c             	add    $0xc,%eax
 84709ae:	89 04 24             	mov    %eax,(%esp)
 84709b1:	e8 3a ab e3 ff       	call   82ab4f0 <_ZN8CNetworkILi100000ELi100000EEC1Ev>
 84709b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84709b9:	05 04 0e 03 00       	add    $0x30e04,%eax
 84709be:	89 04 24             	mov    %eax,(%esp)
 84709c1:	e8 52 2b 01 00       	call   8483518 <_ZN11CUdpHandlerC1Ev>
 84709c6:	eb 31                	jmp    84709f9 <_ZN19CMonitorServerProxyC1ESsii+0x7d>
 84709c8:	89 d3                	mov    %edx,%ebx
 84709ca:	89 c6                	mov    %eax,%esi
 84709cc:	8b 45 08             	mov    0x8(%ebp),%eax
 84709cf:	83 c0 0c             	add    $0xc,%eax
 84709d2:	89 04 24             	mov    %eax,(%esp)
 84709d5:	e8 b4 ab e3 ff       	call   82ab58e <_ZN8CNetworkILi100000ELi100000EED1Ev>
 84709da:	89 f0                	mov    %esi,%eax
 84709dc:	89 da                	mov    %ebx,%edx
 84709de:	89 d3                	mov    %edx,%ebx
 84709e0:	89 c6                	mov    %eax,%esi
 84709e2:	8b 45 08             	mov    0x8(%ebp),%eax
 84709e5:	89 04 24             	mov    %eax,(%esp)
 84709e8:	e8 f3 71 29 00       	call   8707be0 <_ZNSsD1Ev>
 84709ed:	89 f0                	mov    %esi,%eax
 84709ef:	89 da                	mov    %ebx,%edx
 84709f1:	89 04 24             	mov    %eax,(%esp)
 84709f4:	e8 57 2d 67 00       	call   8ae3750 <_Unwind_Resume>
 84709f9:	83 c4 10             	add    $0x10,%esp
 84709fc:	5b                   	pop    %ebx
 84709fd:	5e                   	pop    %esi
 84709fe:	5d                   	pop    %ebp
 84709ff:	c3                   	ret

```

```c
// CMonitorServerProxy::CMonitorServerProxy @ 0x847097c

/* CMonitorServerProxy::CMonitorServerProxy(std::string, int, int) */

void __thiscall
CMonitorServerProxy::CMonitorServerProxy
          (CMonitorServerProxy *this,string param_1,int param_2,int param_3)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)(this + 0xc));
                    /* try { // try from 084709c1 to 084709c5 has its CatchHandler @ 084709c8 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x30e04));
  return;
}

```

---

## Disconnect

```asm
// === 08470bee CMonitorServerProxy::Disconnect  [0x08470bee-0x8470c03] ===
 8470bee:	55                   	push   %ebp
 8470bef:	89 e5                	mov    %esp,%ebp
 8470bf1:	83 ec 18             	sub    $0x18,%esp
 8470bf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8470bf7:	83 c0 0c             	add    $0xc,%eax
 8470bfa:	89 04 24             	mov    %eax,(%esp)
 8470bfd:	e8 56 d3 e8 ff       	call   82fdf58 <_ZN8CNetworkILi100000ELi100000EE10disconnectEv>
 8470c02:	c9                   	leave
 8470c03:	c3                   	ret

```

```c
// CMonitorServerProxy::Disconnect @ 0x8470bee

/* CMonitorServerProxy::Disconnect() */

void __thiscall CMonitorServerProxy::Disconnect(CMonitorServerProxy *this)

{
  CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)(this + 0xc));
  return;
}

```

---

## Init

```asm
// === 08470a00 CMonitorServerProxy::Init  [0x08470a00-0x8470a7b] ===
 8470a00:	55                   	push   %ebp
 8470a01:	89 e5                	mov    %esp,%ebp
 8470a03:	83 ec 18             	sub    $0x18,%esp
 8470a06:	8b 45 08             	mov    0x8(%ebp),%eax
 8470a09:	8b 40 04             	mov    0x4(%eax),%eax
 8470a0c:	85 c0                	test   %eax,%eax
 8470a0e:	75 07                	jne    8470a17 <_ZN19CMonitorServerProxy4InitEv+0x17>
 8470a10:	b8 01 00 00 00       	mov    $0x1,%eax
 8470a15:	eb 63                	jmp    8470a7a <_ZN19CMonitorServerProxy4InitEv+0x7a>
 8470a17:	8b 45 08             	mov    0x8(%ebp),%eax
 8470a1a:	89 04 24             	mov    %eax,(%esp)
 8470a1d:	e8 5a 00 00 00       	call   8470a7c <_ZN19CMonitorServerProxy7InitUdpEv>
 8470a22:	83 f0 01             	xor    $0x1,%eax
 8470a25:	84 c0                	test   %al,%al
 8470a27:	74 07                	je     8470a30 <_ZN19CMonitorServerProxy4InitEv+0x30>
 8470a29:	b8 00 00 00 00       	mov    $0x0,%eax
 8470a2e:	eb 4a                	jmp    8470a7a <_ZN19CMonitorServerProxy4InitEv+0x7a>
 8470a30:	8b 45 08             	mov    0x8(%ebp),%eax
 8470a33:	89 04 24             	mov    %eax,(%esp)
 8470a36:	e8 9b 00 00 00       	call   8470ad6 <_ZN19CMonitorServerProxy7InitTcpEv>
 8470a3b:	83 f0 01             	xor    $0x1,%eax
 8470a3e:	84 c0                	test   %al,%al
 8470a40:	74 07                	je     8470a49 <_ZN19CMonitorServerProxy4InitEv+0x49>
 8470a42:	b8 00 00 00 00       	mov    $0x0,%eax
 8470a47:	eb 31                	jmp    8470a7a <_ZN19CMonitorServerProxy4InitEv+0x7a>
 8470a49:	e8 33 b7 c5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8470a4e:	89 04 24             	mov    %eax,(%esp)
 8470a51:	e8 74 a0 cd ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8470a56:	83 f8 01             	cmp    $0x1,%eax
 8470a59:	0f 94 c0             	sete   %al
 8470a5c:	84 c0                	test   %al,%al
 8470a5e:	74 15                	je     8470a75 <_ZN19CMonitorServerProxy4InitEv+0x75>
 8470a60:	a1 70 f7 41 09       	mov    0x941f770,%eax
 8470a65:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8470a6c:	00 
 8470a6d:	89 04 24             	mov    %eax,(%esp)
 8470a70:	e8 df 92 e2 ff       	call   8299d54 <_ZN7Gm_List25SendGMList_To_UpperServerEi>
 8470a75:	b8 01 00 00 00       	mov    $0x1,%eax
 8470a7a:	c9                   	leave
 8470a7b:	c3                   	ret

```

```c
// CMonitorServerProxy::Init @ 0x8470a00

/* CMonitorServerProxy::Init() */

undefined4 __thiscall CMonitorServerProxy::Init(CMonitorServerProxy *this)

{
  char cVar1;
  undefined4 uVar2;
  CEnvironment *this_00;
  int iVar3;
  
  if (*(int *)(this + 4) == 0) {
    uVar2 = 1;
  }
  else {
    cVar1 = InitUdp(this);
    if (cVar1 == '\x01') {
      cVar1 = InitTcp(this);
      if (cVar1 == '\x01') {
        this_00 = (CEnvironment *)G_CEnvironment();
        iVar3 = CEnvironment::get_channel_no(this_00);
        if (iVar3 == 1) {
          Gm_List::SendGMList_To_UpperServer(GlobalData::gmList,0);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## InitTcp

```asm
// === 08470ad6 CMonitorServerProxy::InitTcp  [0x08470ad6-0x8470bed] ===
 8470ad6:	55                   	push   %ebp
 8470ad7:	89 e5                	mov    %esp,%ebp
 8470ad9:	57                   	push   %edi
 8470ada:	56                   	push   %esi
 8470adb:	53                   	push   %ebx
 8470adc:	83 ec 5c             	sub    $0x5c,%esp
 8470adf:	8b 45 08             	mov    0x8(%ebp),%eax
 8470ae2:	8b 40 04             	mov    0x4(%eax),%eax
 8470ae5:	85 c0                	test   %eax,%eax
 8470ae7:	75 0a                	jne    8470af3 <_ZN19CMonitorServerProxy7InitTcpEv+0x1d>
 8470ae9:	b8 01 00 00 00       	mov    $0x1,%eax
 8470aee:	e9 f2 00 00 00       	jmp    8470be5 <_ZN19CMonitorServerProxy7InitTcpEv+0x10f>
 8470af3:	8b 45 08             	mov    0x8(%ebp),%eax
 8470af6:	8b 40 0c             	mov    0xc(%eax),%eax
 8470af9:	85 c0                	test   %eax,%eax
 8470afb:	0f 89 99 00 00 00    	jns    8470b9a <_ZN19CMonitorServerProxy7InitTcpEv+0xc4>
 8470b01:	8b 45 08             	mov    0x8(%ebp),%eax
 8470b04:	8b 58 08             	mov    0x8(%eax),%ebx
 8470b07:	8b 45 08             	mov    0x8(%ebp),%eax
 8470b0a:	89 04 24             	mov    %eax,(%esp)
 8470b0d:	e8 de 59 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 8470b12:	8b 55 08             	mov    0x8(%ebp),%edx
 8470b15:	83 c2 0c             	add    $0xc,%edx
 8470b18:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8470b1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470b20:	89 14 24             	mov    %edx,(%esp)
 8470b23:	e8 71 d2 e8 ff       	call   82fdd99 <_ZN8CNetworkILi100000ELi100000EE22CreateConnectionSocketERiPKci>
 8470b28:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8470b2b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8470b2f:	0f 95 c0             	setne  %al
 8470b32:	84 c0                	test   %al,%al
 8470b34:	74 64                	je     8470b9a <_ZN19CMonitorServerProxy7InitTcpEv+0xc4>
 8470b36:	e8 35 d2 c0 ff       	call   807dd70 <__errno_location@plt>
 8470b3b:	8b 00                	mov    (%eax),%eax
 8470b3d:	89 04 24             	mov    %eax,(%esp)
 8470b40:	e8 eb cb c0 ff       	call   807d730 <strerror@plt>
 8470b45:	89 c3                	mov    %eax,%ebx
 8470b47:	e8 24 d2 c0 ff       	call   807dd70 <__errno_location@plt>
 8470b4c:	8b 38                	mov    (%eax),%edi
 8470b4e:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8470b51:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8470b58:	00 
 8470b59:	c7 44 24 08 9b 04 00 	movl   $0x49b,0x8(%esp)
 8470b60:	00 
 8470b61:	c7 44 24 04 e0 b0 c6 	movl   $0x8c6b0e0,0x4(%esp)
 8470b68:	08 
 8470b69:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8470b6c:	89 04 24             	mov    %eax,(%esp)
 8470b6f:	e8 a4 eb 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8470b74:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8470b78:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8470b7c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8470b80:	c7 44 24 04 78 a0 c6 	movl   $0x8c6a078,0x4(%esp)
 8470b87:	08 
 8470b88:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8470b8b:	89 04 24             	mov    %eax,(%esp)
 8470b8e:	e8 f5 eb 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8470b93:	b8 00 00 00 00       	mov    $0x0,%eax
 8470b98:	eb 4b                	jmp    8470be5 <_ZN19CMonitorServerProxy7InitTcpEv+0x10f>
 8470b9a:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8470ba1:	00 
 8470ba2:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8470ba9:	00 
 8470baa:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8470bb1:	00 
 8470bb2:	c7 44 24 08 a0 04 00 	movl   $0x4a0,0x8(%esp)
 8470bb9:	00 
 8470bba:	c7 44 24 04 e0 b0 c6 	movl   $0x8c6b0e0,0x4(%esp)
 8470bc1:	08 
 8470bc2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8470bc5:	89 04 24             	mov    %eax,(%esp)
 8470bc8:	e8 79 eb 0d 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8470bcd:	c7 44 24 04 b8 a0 c6 	movl   $0x8c6a0b8,0x4(%esp)
 8470bd4:	08 
 8470bd5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8470bd8:	89 04 24             	mov    %eax,(%esp)
 8470bdb:	e8 a8 eb 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8470be0:	b8 01 00 00 00       	mov    $0x1,%eax
 8470be5:	83 c4 5c             	add    $0x5c,%esp
 8470be8:	5b                   	pop    %ebx
 8470be9:	5e                   	pop    %esi
 8470bea:	5f                   	pop    %edi
 8470beb:	5d                   	pop    %ebp
 8470bec:	c3                   	ret
 8470bed:	90                   	nop

```

```c
// CMonitorServerProxy::InitTcp @ 0x8470ad6

/* CMonitorServerProxy::InitTcp() */

undefined4 __thiscall CMonitorServerProxy::InitTcp(CMonitorServerProxy *this)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 0xc) < 0) {
      iVar1 = *(int *)(this + 8);
      pcVar3 = (char *)std::string::c_str((string *)this);
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)(this + 0xc),pcVar3,iVar1);
      if (local_20 != 0) {
        piVar4 = __errno_location();
        pcVar3 = strerror(*piVar4);
        piVar4 = __errno_location();
        iVar2 = local_20;
        iVar1 = *piVar4;
        cMyTrace::cMyTrace(local_40,"bool CMonitorServerProxy::InitTcp()",0x49b,0);
        cMyTrace::operator()
                  (local_40,"CMonitorServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,
                   iVar1,pcVar3);
        return 0;
      }
    }
    cMyTrace::cMyTrace(local_30,"bool CMonitorServerProxy::InitTcp()",0x4a0,9,true,true);
    cMyTrace::operator()(local_30,"[!] Connect To Monitor Server ... ");
  }
  return 1;
}

```

---

## InitUdp

```asm
// === 08470a7c CMonitorServerProxy::InitUdp  [0x08470a7c-0x8470ad5] ===
 8470a7c:	55                   	push   %ebp
 8470a7d:	89 e5                	mov    %esp,%ebp
 8470a7f:	83 ec 28             	sub    $0x28,%esp
 8470a82:	8b 45 08             	mov    0x8(%ebp),%eax
 8470a85:	05 04 0e 03 00       	add    $0x30e04,%eax
 8470a8a:	89 04 24             	mov    %eax,(%esp)
 8470a8d:	e8 08 2c 01 00       	call   848369a <_ZN11CUdpHandler16InitClientSocketEv>
 8470a92:	83 f8 ff             	cmp    $0xffffffff,%eax
 8470a95:	0f 94 c0             	sete   %al
 8470a98:	84 c0                	test   %al,%al
 8470a9a:	74 33                	je     8470acf <_ZN19CMonitorServerProxy7InitUdpEv+0x53>
 8470a9c:	c7 44 24 10 24 a0 c6 	movl   $0x8c6a024,0x10(%esp)
 8470aa3:	08 
 8470aa4:	c7 44 24 0c 85 04 00 	movl   $0x485,0xc(%esp)
 8470aab:	00 
 8470aac:	c7 44 24 08 20 b1 c6 	movl   $0x8c6b120,0x8(%esp)
 8470ab3:	08 
 8470ab4:	c7 44 24 04 5d a0 c6 	movl   $0x8c6a05d,0x4(%esp)
 8470abb:	08 
 8470abc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8470ac3:	e8 42 31 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8470ac8:	b8 00 00 00 00       	mov    $0x0,%eax
 8470acd:	eb 05                	jmp    8470ad4 <_ZN19CMonitorServerProxy7InitUdpEv+0x58>
 8470acf:	b8 01 00 00 00       	mov    $0x1,%eax
 8470ad4:	c9                   	leave
 8470ad5:	c3                   	ret

```

```c
// CMonitorServerProxy::InitUdp @ 0x8470a7c

/* CMonitorServerProxy::InitUdp() */

bool __thiscall CMonitorServerProxy::InitUdp(CMonitorServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x30e04));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_MonitorServerProxy.cpp","bool CMonitorServerProxy::InitUdp()",0x485,
               "[CMonitorServerProxy::Init] Can\'t init udp client socket");
  }
  return iVar1 != -1;
}

```

---

## OnTcpError

```asm
// === 08471444 CMonitorServerProxy::OnTcpError  [0x08471444-0x84714cd] ===
 8471444:	55                   	push   %ebp
 8471445:	89 e5                	mov    %esp,%ebp
 8471447:	56                   	push   %esi
 8471448:	53                   	push   %ebx
 8471449:	83 ec 20             	sub    $0x20,%esp
 847144c:	e8 1f c9 c0 ff       	call   807dd70 <__errno_location@plt>
 8471451:	8b 00                	mov    (%eax),%eax
 8471453:	85 c0                	test   %eax,%eax
 8471455:	74 6b                	je     84714c2 <_ZN19CMonitorServerProxy10OnTcpErrorEv+0x7e>
 8471457:	e8 14 c9 c0 ff       	call   807dd70 <__errno_location@plt>
 847145c:	8b 00                	mov    (%eax),%eax
 847145e:	89 04 24             	mov    %eax,(%esp)
 8471461:	e8 ca c2 c0 ff       	call   807d730 <strerror@plt>
 8471466:	89 c6                	mov    %eax,%esi
 8471468:	8b 45 08             	mov    0x8(%ebp),%eax
 847146b:	89 04 24             	mov    %eax,(%esp)
 847146e:	e8 c9 02 00 00       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 8471473:	89 04 24             	mov    %eax,(%esp)
 8471476:	e8 d3 ca e8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 847147b:	89 c3                	mov    %eax,%ebx
 847147d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8471484:	00 
 8471485:	c7 44 24 08 b6 06 00 	movl   $0x6b6,0x8(%esp)
 847148c:	00 
 847148d:	c7 44 24 04 a0 af c6 	movl   $0x8c6afa0,0x4(%esp)
 8471494:	08 
 8471495:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471498:	89 04 24             	mov    %eax,(%esp)
 847149b:	e8 78 e2 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84714a0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84714a4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84714a8:	c7 44 24 04 5c a1 c6 	movl   $0x8c6a15c,0x4(%esp)
 84714af:	08 
 84714b0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84714b3:	89 04 24             	mov    %eax,(%esp)
 84714b6:	e8 cd e2 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84714bb:	b8 00 00 00 00       	mov    $0x0,%eax
 84714c0:	eb 05                	jmp    84714c7 <_ZN19CMonitorServerProxy10OnTcpErrorEv+0x83>
 84714c2:	b8 01 00 00 00       	mov    $0x1,%eax
 84714c7:	83 c4 20             	add    $0x20,%esp
 84714ca:	5b                   	pop    %ebx
 84714cb:	5e                   	pop    %esi
 84714cc:	5d                   	pop    %ebp
 84714cd:	c3                   	ret

```

```c
// CMonitorServerProxy::OnTcpError @ 0x8471444

/* CMonitorServerProxy::OnTcpError() */

bool __thiscall CMonitorServerProxy::OnTcpError(CMonitorServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"bool CMonitorServerProxy::OnTcpError()",0x6b6,0);
    cMyTrace::operator()(local_1c,"Monitor Server OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}

```

---

## OnTcpRecv

```asm
// === 084712e0 CMonitorServerProxy::OnTcpRecv  [0x084712e0-0x847139b] ===
 84712e0:	55                   	push   %ebp
 84712e1:	89 e5                	mov    %esp,%ebp
 84712e3:	83 ec 38             	sub    $0x38,%esp
 84712e6:	8b 45 08             	mov    0x8(%ebp),%eax
 84712e9:	83 c0 0c             	add    $0xc,%eax
 84712ec:	89 04 24             	mov    %eax,(%esp)
 84712ef:	e8 0a cf e8 ff       	call   82fe1fe <_ZN8CNetworkILi100000ELi100000EE11recv_packetEv>
 84712f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84712f7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84712fb:	7e 53                	jle    8471350 <_ZN19CMonitorServerProxy9OnTcpRecvEv+0x70>
 84712fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8471300:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471304:	8b 45 08             	mov    0x8(%ebp),%eax
 8471307:	89 04 24             	mov    %eax,(%esp)
 847130a:	e8 bf 01 00 00       	call   84714ce <_ZN19CMonitorServerProxy7ParsingEi>
 847130f:	83 f0 01             	xor    $0x1,%eax
 8471312:	84 c0                	test   %al,%al
 8471314:	74 33                	je     8471349 <_ZN19CMonitorServerProxy9OnTcpRecvEv+0x69>
 8471316:	c7 44 24 10 06 a1 c6 	movl   $0x8c6a106,0x10(%esp)
 847131d:	08 
 847131e:	c7 44 24 0c 85 06 00 	movl   $0x685,0xc(%esp)
 8471325:	00 
 8471326:	c7 44 24 08 20 b0 c6 	movl   $0x8c6b020,0x8(%esp)
 847132d:	08 
 847132e:	c7 44 24 04 5d a0 c6 	movl   $0x8c6a05d,0x4(%esp)
 8471335:	08 
 8471336:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847133d:	e8 c8 28 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8471342:	b8 00 00 00 00       	mov    $0x0,%eax
 8471347:	eb 50                	jmp    8471399 <_ZN19CMonitorServerProxy9OnTcpRecvEv+0xb9>
 8471349:	b8 01 00 00 00       	mov    $0x1,%eax
 847134e:	eb 49                	jmp    8471399 <_ZN19CMonitorServerProxy9OnTcpRecvEv+0xb9>
 8471350:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8471354:	79 3e                	jns    8471394 <_ZN19CMonitorServerProxy9OnTcpRecvEv+0xb4>
 8471356:	c7 44 24 10 22 a1 c6 	movl   $0x8c6a122,0x10(%esp)
 847135d:	08 
 847135e:	c7 44 24 0c 8e 06 00 	movl   $0x68e,0xc(%esp)
 8471365:	00 
 8471366:	c7 44 24 08 20 b0 c6 	movl   $0x8c6b020,0x8(%esp)
 847136d:	08 
 847136e:	c7 44 24 04 5d a0 c6 	movl   $0x8c6a05d,0x4(%esp)
 8471375:	08 
 8471376:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847137d:	e8 88 28 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8471382:	8b 45 08             	mov    0x8(%ebp),%eax
 8471385:	89 04 24             	mov    %eax,(%esp)
 8471388:	e8 61 f8 ff ff       	call   8470bee <_ZN19CMonitorServerProxy10DisconnectEv>
 847138d:	b8 00 00 00 00       	mov    $0x0,%eax
 8471392:	eb 05                	jmp    8471399 <_ZN19CMonitorServerProxy9OnTcpRecvEv+0xb9>
 8471394:	b8 01 00 00 00       	mov    $0x1,%eax
 8471399:	c9                   	leave
 847139a:	c3                   	ret
 847139b:	90                   	nop

```

```c
// CMonitorServerProxy::OnTcpRecv @ 0x84712e0

/* CMonitorServerProxy::OnTcpRecv() */

undefined4 __thiscall CMonitorServerProxy::OnTcpRecv(CMonitorServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)(this + 0xc));
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_MonitorServerProxy.cpp","bool CMonitorServerProxy::OnTcpRecv()",0x68e,
                 "Monitor Server maybe Die!!!");
      Disconnect(this);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = Parsing(this,iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DF_MonitorServerProxy.cpp","bool CMonitorServerProxy::OnTcpRecv()",0x685,
                 "Monitor Recv Parsing Err!!!");
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## OnTcpSend

```asm
// === 0847139c CMonitorServerProxy::OnTcpSend  [0x0847139c-0x8471443] ===
 847139c:	55                   	push   %ebp
 847139d:	89 e5                	mov    %esp,%ebp
 847139f:	56                   	push   %esi
 84713a0:	53                   	push   %ebx
 84713a1:	83 ec 20             	sub    $0x20,%esp
 84713a4:	8b 45 08             	mov    0x8(%ebp),%eax
 84713a7:	83 c0 0c             	add    $0xc,%eax
 84713aa:	89 04 24             	mov    %eax,(%esp)
 84713ad:	e8 a0 cf e8 ff       	call   82fe352 <_ZN8CNetworkILi100000ELi100000EE11send_packetEv>
 84713b2:	c1 e8 1f             	shr    $0x1f,%eax
 84713b5:	84 c0                	test   %al,%al
 84713b7:	74 76                	je     847142f <_ZN19CMonitorServerProxy9OnTcpSendEv+0x93>
 84713b9:	e8 b2 c9 c0 ff       	call   807dd70 <__errno_location@plt>
 84713be:	8b 00                	mov    (%eax),%eax
 84713c0:	89 04 24             	mov    %eax,(%esp)
 84713c3:	e8 68 c3 c0 ff       	call   807d730 <strerror@plt>
 84713c8:	89 c6                	mov    %eax,%esi
 84713ca:	8b 45 08             	mov    0x8(%ebp),%eax
 84713cd:	89 04 24             	mov    %eax,(%esp)
 84713d0:	e8 67 03 00 00       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 84713d5:	89 04 24             	mov    %eax,(%esp)
 84713d8:	e8 71 cb e8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 84713dd:	89 c3                	mov    %eax,%ebx
 84713df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84713e6:	00 
 84713e7:	c7 44 24 08 a3 06 00 	movl   $0x6a3,0x8(%esp)
 84713ee:	00 
 84713ef:	c7 44 24 04 e0 af c6 	movl   $0x8c6afe0,0x4(%esp)
 84713f6:	08 
 84713f7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84713fa:	89 04 24             	mov    %eax,(%esp)
 84713fd:	e8 16 e3 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8471402:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8471406:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847140a:	c7 44 24 04 3e a1 c6 	movl   $0x8c6a13e,0x4(%esp)
 8471411:	08 
 8471412:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471415:	89 04 24             	mov    %eax,(%esp)
 8471418:	e8 6b e3 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847141d:	8b 45 08             	mov    0x8(%ebp),%eax
 8471420:	89 04 24             	mov    %eax,(%esp)
 8471423:	e8 c6 f7 ff ff       	call   8470bee <_ZN19CMonitorServerProxy10DisconnectEv>
 8471428:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 847142d:	eb 0e                	jmp    847143d <_ZN19CMonitorServerProxy9OnTcpSendEv+0xa1>
 847142f:	8b 45 08             	mov    0x8(%ebp),%eax
 8471432:	83 c0 0c             	add    $0xc,%eax
 8471435:	89 04 24             	mov    %eax,(%esp)
 8471438:	e8 0b 03 00 00       	call   8471748 <_ZN8CNetworkILi100000ELi100000EE17GetRemainSendSizeEv>
 847143d:	83 c4 20             	add    $0x20,%esp
 8471440:	5b                   	pop    %ebx
 8471441:	5e                   	pop    %esi
 8471442:	5d                   	pop    %ebp
 8471443:	c3                   	ret

```

```c
// CMonitorServerProxy::OnTcpSend @ 0x847139c

/* CMonitorServerProxy::OnTcpSend() */

undefined4 __thiscall CMonitorServerProxy::OnTcpSend(CMonitorServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  iVar1 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0xc));
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"int CMonitorServerProxy::OnTcpSend()",0x6a3,0);
    cMyTrace::operator()(local_1c,"OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
    Disconnect(this);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = CNetwork<100000,100000>::GetRemainSendSize((CNetwork<100000,100000> *)(this + 0xc));
  }
  return uVar4;
}

```

---

## Parsing

```asm
// === 084714ce CMonitorServerProxy::Parsing  [0x084714ce-0x84714eb] ===
 84714ce:	55                   	push   %ebp
 84714cf:	89 e5                	mov    %esp,%ebp
 84714d1:	83 ec 18             	sub    $0x18,%esp
 84714d4:	8b 45 08             	mov    0x8(%ebp),%eax
 84714d7:	8d 50 0c             	lea    0xc(%eax),%edx
 84714da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84714dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84714e1:	89 14 24             	mov    %edx,(%esp)
 84714e4:	e8 67 bb ff ff       	call   846d050 <_ZN8CNetworkILi100000ELi100000EE20Parsing_ServerPacketEi>
 84714e9:	c9                   	leave
 84714ea:	c3                   	ret
 84714eb:	90                   	nop

```

```c
// CMonitorServerProxy::Parsing @ 0x84714ce

/* CMonitorServerProxy::Parsing(int) */

void __thiscall CMonitorServerProxy::Parsing(CMonitorServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)(this + 0xc),param_1);
  return;
}

```

---

## SendCallGuildInfo

```asm
// === 08470f06 CMonitorServerProxy::SendCallGuildInfo  [0x08470f06-0x8470fb3] ===
 8470f06:	55                   	push   %ebp
 8470f07:	89 e5                	mov    %esp,%ebp
 8470f09:	81 ec c8 01 00 00    	sub    $0x1c8,%esp
 8470f0f:	8b 45 14             	mov    0x14(%ebp),%eax
 8470f12:	88 85 54 fe ff ff    	mov    %al,-0x1ac(%ebp)
 8470f18:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8470f1e:	89 04 24             	mov    %eax,(%esp)
 8470f21:	e8 4c e5 ff ff       	call   846f472 <_ZN30Packet_Monitor_Call_Guild_InfoC1Ev>
 8470f26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470f29:	89 85 73 fe ff ff    	mov    %eax,-0x18d(%ebp)
 8470f2f:	8b 45 10             	mov    0x10(%ebp),%eax
 8470f32:	89 85 6f fe ff ff    	mov    %eax,-0x191(%ebp)
 8470f38:	0f b6 85 54 fe ff ff 	movzbl -0x1ac(%ebp),%eax
 8470f3f:	88 85 77 fe ff ff    	mov    %al,-0x189(%ebp)
 8470f45:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8470f4c:	eb 1c                	jmp    8470f6a <_ZN19CMonitorServerProxy17SendCallGuildInfoEjjhPj+0x64>
 8470f4e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8470f51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8470f54:	c1 e0 02             	shl    $0x2,%eax
 8470f57:	03 45 18             	add    0x18(%ebp),%eax
 8470f5a:	8b 00                	mov    (%eax),%eax
 8470f5c:	83 c2 04             	add    $0x4,%edx
 8470f5f:	89 84 95 68 fe ff ff 	mov    %eax,-0x198(%ebp,%edx,4)
 8470f66:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8470f6a:	0f b6 85 54 fe ff ff 	movzbl -0x1ac(%ebp),%eax
 8470f71:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8470f74:	0f 9f c0             	setg   %al
 8470f77:	84 c0                	test   %al,%al
 8470f79:	75 d3                	jne    8470f4e <_ZN19CMonitorServerProxy17SendCallGuildInfoEjjhPj+0x48>
 8470f7b:	0f b6 85 54 fe ff ff 	movzbl -0x1ac(%ebp),%eax
 8470f82:	c1 e0 02             	shl    $0x2,%eax
 8470f85:	83 c0 13             	add    $0x13,%eax
 8470f88:	66 89 85 67 fe ff ff 	mov    %ax,-0x199(%ebp)
 8470f8f:	0f b7 85 67 fe ff ff 	movzwl -0x199(%ebp),%eax
 8470f96:	0f b7 d0             	movzwl %ax,%edx
 8470f99:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8470f9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470fa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8470faa:	89 04 24             	mov    %eax,(%esp)
 8470fad:	e8 42 fe ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8470fb2:	c9                   	leave
 8470fb3:	c3                   	ret

```

```c
// CMonitorServerProxy::SendCallGuildInfo @ 0x8470f06

/* CMonitorServerProxy::SendCallGuildInfo(unsigned int, unsigned int, unsigned char, unsigned int*)
    */

void __thiscall
CMonitorServerProxy::SendCallGuildInfo
          (CMonitorServerProxy *this,uint param_1,uint param_2,uchar param_3,uint *param_4)

{
  Packet_Monitor_Call_Guild_Info local_19f [2];
  undefined1 local_19d [8];
  uint local_195;
  uint local_191;
  uchar local_18d;
  uint auStack_18c [95];
  int local_10;
  
  Packet_Monitor_Call_Guild_Info::Packet_Monitor_Call_Guild_Info(local_19f);
  local_191 = param_1;
  local_195 = param_2;
  for (local_10 = 0; local_10 < (int)(uint)param_3; local_10 = local_10 + 1) {
    *(uint *)(local_19d + (local_10 + 4) * 4 + 1) = param_4[local_10];
  }
  local_19d._0_2_ = (ushort)param_3 * 4 + 0x13;
  local_18d = param_3;
  SendPacket(this,(char *)local_19f,(uint)(ushort)local_19d._0_2_);
  return;
}

```

---

## SendChangeCharName

```asm
// === 08471288 CMonitorServerProxy::SendChangeCharName  [0x08471288-0x84712df] ===
 8471288:	55                   	push   %ebp
 8471289:	89 e5                	mov    %esp,%ebp
 847128b:	83 ec 58             	sub    $0x58,%esp
 847128e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8471291:	89 04 24             	mov    %eax,(%esp)
 8471294:	e8 67 e7 ff ff       	call   846fa00 <_ZN23Packet_Change_Char_NameC1Ev>
 8471299:	8b 45 0c             	mov    0xc(%ebp),%eax
 847129c:	89 45 ce             	mov    %eax,-0x32(%ebp)
 847129f:	8b 45 10             	mov    0x10(%ebp),%eax
 84712a2:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 84712a5:	8b 45 14             	mov    0x14(%ebp),%eax
 84712a8:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 84712ab:	8b 45 18             	mov    0x18(%ebp),%eax
 84712ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84712b2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84712b5:	83 c0 16             	add    $0x16,%eax
 84712b8:	89 04 24             	mov    %eax,(%esp)
 84712bb:	e8 30 cc c0 ff       	call   807def0 <strcpy@plt>
 84712c0:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 84712c4:	0f b7 d0             	movzwl %ax,%edx
 84712c7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84712ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 84712ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 84712d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84712d5:	89 04 24             	mov    %eax,(%esp)
 84712d8:	e8 67 fb ff ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84712dd:	c9                   	leave
 84712de:	c3                   	ret
 84712df:	90                   	nop

```

```c
// CMonitorServerProxy::SendChangeCharName @ 0x8471288

/* CMonitorServerProxy::SendChangeCharName(unsigned int, unsigned int, unsigned int, char*) */

void __thiscall
CMonitorServerProxy::SendChangeCharName
          (CMonitorServerProxy *this,uint param_1,uint param_2,uint param_3,char *param_4)

{
  Packet_Change_Char_Name local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  uint local_2e;
  char acStack_2a [38];
  
  Packet_Change_Char_Name::Packet_Change_Char_Name(local_40);
  local_36 = param_1;
  local_32 = param_2;
  local_2e = param_3;
  strcpy(acStack_2a,param_4);
  SendTcpPacket(this,(char *)local_40,(uint)local_3e);
  return;
}

```

---

## SendCharLevelGrowType

```asm
// === 08470c04 CMonitorServerProxy::SendCharLevelGrowType  [0x08470c04-0x8470c5d] ===
 8470c04:	55                   	push   %ebp
 8470c05:	89 e5                	mov    %esp,%ebp
 8470c07:	83 ec 48             	sub    $0x48,%esp
 8470c0a:	8b 55 14             	mov    0x14(%ebp),%edx
 8470c0d:	8b 45 18             	mov    0x18(%ebp),%eax
 8470c10:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 8470c14:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 8470c18:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8470c1b:	89 04 24             	mov    %eax,(%esp)
 8470c1e:	e8 8d e6 ff ff       	call   846f2b0 <_ZN34Packet_Monitor_Char_Changable_InfoC1Ev>
 8470c23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470c26:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8470c29:	8b 45 10             	mov    0x10(%ebp),%eax
 8470c2c:	88 45 f4             	mov    %al,-0xc(%ebp)
 8470c2f:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8470c33:	66 89 45 f5          	mov    %ax,-0xb(%ebp)
 8470c37:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 8470c3b:	88 45 f7             	mov    %al,-0x9(%ebp)
 8470c3e:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 8470c42:	0f b7 d0             	movzwl %ax,%edx
 8470c45:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8470c48:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470c4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470c50:	8b 45 08             	mov    0x8(%ebp),%eax
 8470c53:	89 04 24             	mov    %eax,(%esp)
 8470c56:	e8 99 01 00 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8470c5b:	c9                   	leave
 8470c5c:	c3                   	ret
 8470c5d:	90                   	nop

```

```c
// CMonitorServerProxy::SendCharLevelGrowType @ 0x8470c04

/* CMonitorServerProxy::SendCharLevelGrowType(unsigned int, unsigned int, short, short) */

void __thiscall
CMonitorServerProxy::SendCharLevelGrowType
          (CMonitorServerProxy *this,uint param_1,uint param_2,short param_3,short param_4)

{
  Packet_Monitor_Char_Changable_Info local_1e [2];
  ushort local_1c;
  uint local_14;
  undefined1 local_10;
  short local_f;
  undefined1 local_d;
  
  Packet_Monitor_Char_Changable_Info::Packet_Monitor_Char_Changable_Info(local_1e);
  local_14 = param_1;
  local_10 = (undefined1)param_2;
  local_d = (undefined1)param_4;
  local_f = param_3;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendExchangeServerInfo

```asm
// === 08471124 CMonitorServerProxy::SendExchangeServerInfo  [0x08471124-0x847116f] ===
 8471124:	55                   	push   %ebp
 8471125:	89 e5                	mov    %esp,%ebp
 8471127:	83 ec 48             	sub    $0x48,%esp
 847112a:	8b 45 14             	mov    0x14(%ebp),%eax
 847112d:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 8471131:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8471134:	89 04 24             	mov    %eax,(%esp)
 8471137:	e8 34 05 00 00       	call   8471670 <_ZN27Packet_Exchange_Server_InfoC1Ev>
 847113c:	8b 45 0c             	mov    0xc(%ebp),%eax
 847113f:	89 45 ee             	mov    %eax,-0x12(%ebp)
 8471142:	8b 45 10             	mov    0x10(%ebp),%eax
 8471145:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8471148:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 847114c:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 8471150:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 8471154:	0f b7 d0             	movzwl %ax,%edx
 8471157:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 847115a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847115e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471162:	8b 45 08             	mov    0x8(%ebp),%eax
 8471165:	89 04 24             	mov    %eax,(%esp)
 8471168:	e8 87 fc ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 847116d:	c9                   	leave
 847116e:	c3                   	ret
 847116f:	90                   	nop

```

```c
// CMonitorServerProxy::SendExchangeServerInfo @ 0x8471124

/* CMonitorServerProxy::SendExchangeServerInfo(int, int, short) */

void __thiscall
CMonitorServerProxy::SendExchangeServerInfo
          (CMonitorServerProxy *this,int param_1,int param_2,short param_3)

{
  Packet_Exchange_Server_Info local_20 [2];
  ushort local_1e;
  int local_16;
  short local_12;
  int local_10;
  
  Packet_Exchange_Server_Info::Packet_Exchange_Server_Info(local_20);
  local_16 = param_1;
  local_10 = param_2;
  local_12 = param_3;
  SendPacket(this,(char *)local_20,(uint)local_1e);
  return;
}

```

---

## SendGameServerInfo

```asm
// === 084714ec CMonitorServerProxy::SendGameServerInfo  [0x084714ec-0x8471565] ===
 84714ec:	55                   	push   %ebp
 84714ed:	89 e5                	mov    %esp,%ebp
 84714ef:	83 ec 48             	sub    $0x48,%esp
 84714f2:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84714f5:	8b 55 14             	mov    0x14(%ebp),%edx
 84714f8:	8b 45 18             	mov    0x18(%ebp),%eax
 84714fb:	66 89 4d d4          	mov    %cx,-0x2c(%ebp)
 84714ff:	88 55 d0             	mov    %dl,-0x30(%ebp)
 8471502:	88 45 cc             	mov    %al,-0x34(%ebp)
 8471505:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8471508:	89 04 24             	mov    %eax,(%esp)
 847150b:	e8 b0 e5 ff ff       	call   846fac0 <_ZN25Packet_Game_Server_RegistC1Ev>
 8471510:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 8471514:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8471517:	0f b6 45 cc          	movzbl -0x34(%ebp),%eax
 847151b:	88 45 e5             	mov    %al,-0x1b(%ebp)
 847151e:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 8471522:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8471526:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 847152a:	8d 45 d9             	lea    -0x27(%ebp),%eax
 847152d:	8d 50 0d             	lea    0xd(%eax),%edx
 8471530:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8471537:	00 
 8471538:	8b 45 0c             	mov    0xc(%ebp),%eax
 847153b:	89 44 24 04          	mov    %eax,0x4(%esp)
 847153f:	89 14 24             	mov    %edx,(%esp)
 8471542:	e8 89 c3 c0 ff       	call   807d8d0 <strncpy@plt>
 8471547:	0f b7 45 db          	movzwl -0x25(%ebp),%eax
 847154b:	0f b7 d0             	movzwl %ax,%edx
 847154e:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8471551:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471555:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471559:	8b 45 08             	mov    0x8(%ebp),%eax
 847155c:	89 04 24             	mov    %eax,(%esp)
 847155f:	e8 e0 f8 ff ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8471564:	c9                   	leave
 8471565:	c3                   	ret

```

```c
// CMonitorServerProxy::SendGameServerInfo @ 0x84714ec

/* CMonitorServerProxy::SendGameServerInfo(char*, unsigned short, unsigned char, unsigned char) */

void __thiscall
CMonitorServerProxy::SendGameServerInfo
          (CMonitorServerProxy *this,char *param_1,ushort param_2,uchar param_3,uchar param_4)

{
  Packet_Game_Server_Regist local_2b [2];
  ushort local_29;
  undefined1 local_21;
  uchar local_20;
  uchar local_1f;
  char local_1e [16];
  ushort local_e;
  
  Packet_Game_Server_Regist::Packet_Game_Server_Regist(local_2b);
  local_21 = 1;
  local_20 = param_3;
  local_1f = param_4;
  local_e = param_2;
  strncpy(local_1e,param_1,0x10);
  SendTcpPacket(this,(char *)local_2b,(uint)local_29);
  return;
}

```

---

## SendGuildLevelup

```asm
// === 08470ec4 CMonitorServerProxy::SendGuildLevelup  [0x08470ec4-0x8470f05] ===
 8470ec4:	55                   	push   %ebp
 8470ec5:	89 e5                	mov    %esp,%ebp
 8470ec7:	83 ec 38             	sub    $0x38,%esp
 8470eca:	8d 45 dd             	lea    -0x23(%ebp),%eax
 8470ecd:	89 04 24             	mov    %eax,(%esp)
 8470ed0:	e8 4b e5 ff ff       	call   846f420 <_ZN34Packet_Monitor_Call_Guild_Level_UpC1Ev>
 8470ed5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470ed8:	89 45 e7             	mov    %eax,-0x19(%ebp)
 8470edb:	8b 45 10             	mov    0x10(%ebp),%eax
 8470ede:	89 45 eb             	mov    %eax,-0x15(%ebp)
 8470ee1:	8b 45 14             	mov    0x14(%ebp),%eax
 8470ee4:	89 45 ef             	mov    %eax,-0x11(%ebp)
 8470ee7:	0f b7 45 df          	movzwl -0x21(%ebp),%eax
 8470eeb:	0f b7 d0             	movzwl %ax,%edx
 8470eee:	8d 45 dd             	lea    -0x23(%ebp),%eax
 8470ef1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470ef5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470ef9:	8b 45 08             	mov    0x8(%ebp),%eax
 8470efc:	89 04 24             	mov    %eax,(%esp)
 8470eff:	e8 40 ff ff ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8470f04:	c9                   	leave
 8470f05:	c3                   	ret

```

```c
// CMonitorServerProxy::SendGuildLevelup @ 0x8470ec4

/* CMonitorServerProxy::SendGuildLevelup(int, unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::SendGuildLevelup
          (CMonitorServerProxy *this,int param_1,uint param_2,uint param_3)

{
  Packet_Monitor_Call_Guild_Level_Up local_27 [2];
  ushort local_25;
  int local_1d;
  uint local_19;
  uint local_15;
  
  Packet_Monitor_Call_Guild_Level_Up::Packet_Monitor_Call_Guild_Level_Up(local_27);
  local_1d = param_1;
  local_19 = param_2;
  local_15 = param_3;
  SendTcpPacket(this,(char *)local_27,(uint)local_25);
  return;
}

```

---

## SendGuildWarEnd

```asm
// === 084710a8 CMonitorServerProxy::SendGuildWarEnd  [0x084710a8-0x84710e5] ===
 84710a8:	55                   	push   %ebp
 84710a9:	89 e5                	mov    %esp,%ebp
 84710ab:	83 ec 38             	sub    $0x38,%esp
 84710ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84710b1:	88 45 e4             	mov    %al,-0x1c(%ebp)
 84710b4:	8d 45 ed             	lea    -0x13(%ebp),%eax
 84710b7:	89 04 24             	mov    %eax,(%esp)
 84710ba:	e8 b7 e4 ff ff       	call   846f576 <_ZN27Packet_Notice_Guild_War_EndC1Ev>
 84710bf:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 84710c3:	88 45 f7             	mov    %al,-0x9(%ebp)
 84710c6:	0f b7 45 ef          	movzwl -0x11(%ebp),%eax
 84710ca:	0f b7 d0             	movzwl %ax,%edx
 84710cd:	8d 45 ed             	lea    -0x13(%ebp),%eax
 84710d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84710d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84710d8:	8b 45 08             	mov    0x8(%ebp),%eax
 84710db:	89 04 24             	mov    %eax,(%esp)
 84710de:	e8 11 fd ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84710e3:	c9                   	leave
 84710e4:	c3                   	ret
 84710e5:	90                   	nop

```

```c
// CMonitorServerProxy::SendGuildWarEnd @ 0x84710a8

/* CMonitorServerProxy::SendGuildWarEnd(unsigned char) */

void __thiscall CMonitorServerProxy::SendGuildWarEnd(CMonitorServerProxy *this,uchar param_1)

{
  Packet_Notice_Guild_War_End local_17 [2];
  ushort local_15;
  uchar local_d;
  
  Packet_Notice_Guild_War_End::Packet_Notice_Guild_War_End(local_17);
  local_d = param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}

```

---

## SendGuildWarStart

```asm
// === 084710e6 CMonitorServerProxy::SendGuildWarStart  [0x084710e6-0x8471123] ===
 84710e6:	55                   	push   %ebp
 84710e7:	89 e5                	mov    %esp,%ebp
 84710e9:	83 ec 38             	sub    $0x38,%esp
 84710ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84710ef:	88 45 e4             	mov    %al,-0x1c(%ebp)
 84710f2:	8d 45 ed             	lea    -0x13(%ebp),%eax
 84710f5:	89 04 24             	mov    %eax,(%esp)
 84710f8:	e8 9d e4 ff ff       	call   846f59a <_ZN29Packet_Notice_Guild_War_StartC1Ev>
 84710fd:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8471101:	88 45 f7             	mov    %al,-0x9(%ebp)
 8471104:	0f b7 45 ef          	movzwl -0x11(%ebp),%eax
 8471108:	0f b7 d0             	movzwl %ax,%edx
 847110b:	8d 45 ed             	lea    -0x13(%ebp),%eax
 847110e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471112:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471116:	8b 45 08             	mov    0x8(%ebp),%eax
 8471119:	89 04 24             	mov    %eax,(%esp)
 847111c:	e8 d3 fc ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8471121:	c9                   	leave
 8471122:	c3                   	ret
 8471123:	90                   	nop

```

```c
// CMonitorServerProxy::SendGuildWarStart @ 0x84710e6

/* CMonitorServerProxy::SendGuildWarStart(unsigned char) */

void __thiscall CMonitorServerProxy::SendGuildWarStart(CMonitorServerProxy *this,uchar param_1)

{
  Packet_Notice_Guild_War_Start local_17 [2];
  ushort local_15;
  uchar local_d;
  
  Packet_Notice_Guild_War_Start::Packet_Notice_Guild_War_Start(local_17);
  local_d = param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}

```

---

## SendHeartBeat

```asm
// === 08470c5e CMonitorServerProxy::SendHeartBeat  [0x08470c5e-0x8470c93] ===
 8470c5e:	55                   	push   %ebp
 8470c5f:	89 e5                	mov    %esp,%ebp
 8470c61:	83 ec 28             	sub    $0x28,%esp
 8470c64:	8d 45 ed             	lea    -0x13(%ebp),%eax
 8470c67:	89 04 24             	mov    %eax,(%esp)
 8470c6a:	e8 dd e6 ff ff       	call   846f34c <_ZN28Packet_Monitor_UDP_HeartBeatC1Ev>
 8470c6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470c72:	88 45 f7             	mov    %al,-0x9(%ebp)
 8470c75:	0f b7 45 ef          	movzwl -0x11(%ebp),%eax
 8470c79:	0f b7 d0             	movzwl %ax,%edx
 8470c7c:	8d 45 ed             	lea    -0x13(%ebp),%eax
 8470c7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470c83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470c87:	8b 45 08             	mov    0x8(%ebp),%eax
 8470c8a:	89 04 24             	mov    %eax,(%esp)
 8470c8d:	e8 62 01 00 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8470c92:	c9                   	leave
 8470c93:	c3                   	ret

```

```c
// CMonitorServerProxy::SendHeartBeat @ 0x8470c5e

/* CMonitorServerProxy::SendHeartBeat(int) */

void __thiscall CMonitorServerProxy::SendHeartBeat(CMonitorServerProxy *this,int param_1)

{
  Packet_Monitor_UDP_HeartBeat local_17 [2];
  ushort local_15;
  undefined1 local_d;
  
  Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat(local_17);
  local_d = (undefined1)param_1;
  SendPacket(this,(char *)local_17,(uint)local_15);
  return;
}

```

---

## SendLogin

```asm
// === 08470c94 CMonitorServerProxy::SendLogin  [0x08470c94-0x8470d67] ===
 8470c94:	55                   	push   %ebp
 8470c95:	89 e5                	mov    %esp,%ebp
 8470c97:	83 ec 78             	sub    $0x78,%esp
 8470c9a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8470c9d:	88 45 b4             	mov    %al,-0x4c(%ebp)
 8470ca0:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8470ca3:	89 04 24             	mov    %eax,(%esp)
 8470ca6:	e8 a1 e5 ff ff       	call   846f24c <_ZN24Packet_Monitor_UDP_LoginC1Ev>
 8470cab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470cae:	89 45 cf             	mov    %eax,-0x31(%ebp)
 8470cb1:	8b 45 10             	mov    0x10(%ebp),%eax
 8470cb4:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 8470cb7:	8b 45 14             	mov    0x14(%ebp),%eax
 8470cba:	88 45 d7             	mov    %al,-0x29(%ebp)
 8470cbd:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8470cc1:	74 1f                	je     8470ce2 <_ZN19CMonitorServerProxy9SendLoginEijiPchS0_+0x4e>
 8470cc3:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8470cca:	00 
 8470ccb:	8b 45 18             	mov    0x18(%ebp),%eax
 8470cce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470cd2:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8470cd5:	83 c0 13             	add    $0x13,%eax
 8470cd8:	89 04 24             	mov    %eax,(%esp)
 8470cdb:	e8 f0 cb c0 ff       	call   807d8d0 <strncpy@plt>
 8470ce0:	eb 43                	jmp    8470d25 <_ZN19CMonitorServerProxy9SendLoginEijiPchS0_+0x91>
 8470ce2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8470ce9:	00 
 8470cea:	8b 45 10             	mov    0x10(%ebp),%eax
 8470ced:	89 04 24             	mov    %eax,(%esp)
 8470cf0:	e8 56 83 c9 ff       	call   810904b <_Z14NumberToStringji>
 8470cf5:	89 44 24 14          	mov    %eax,0x14(%esp)
 8470cf9:	c7 44 24 10 dc a0 c6 	movl   $0x8c6a0dc,0x10(%esp)
 8470d00:	08 
 8470d01:	c7 44 24 0c f3 04 00 	movl   $0x4f3,0xc(%esp)
 8470d08:	00 
 8470d09:	c7 44 24 08 60 b0 c6 	movl   $0x8c6b060,0x8(%esp)
 8470d10:	08 
 8470d11:	c7 44 24 04 5d a0 c6 	movl   $0x8c6a05d,0x4(%esp)
 8470d18:	08 
 8470d19:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8470d20:	e8 e5 2e 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8470d25:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8470d29:	88 45 e8             	mov    %al,-0x18(%ebp)
 8470d2c:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 8470d33:	00 
 8470d34:	8b 45 20             	mov    0x20(%ebp),%eax
 8470d37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470d3b:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8470d3e:	83 c0 2c             	add    $0x2c,%eax
 8470d41:	89 04 24             	mov    %eax,(%esp)
 8470d44:	e8 57 cb c0 ff       	call   807d8a0 <memcpy@plt>
 8470d49:	0f b7 45 c7          	movzwl -0x39(%ebp),%eax
 8470d4d:	0f b7 d0             	movzwl %ax,%edx
 8470d50:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8470d53:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470d57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470d5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8470d5e:	89 04 24             	mov    %eax,(%esp)
 8470d61:	e8 de 00 00 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8470d66:	c9                   	leave
 8470d67:	c3                   	ret

```

```c
// CMonitorServerProxy::SendLogin @ 0x8470c94

/* CMonitorServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*) */

void __thiscall
CMonitorServerProxy::SendLogin
          (CMonitorServerProxy *this,int param_1,uint param_2,int param_3,char *param_4,
          uchar param_5,char *param_6)

{
  undefined4 uVar1;
  Packet_Monitor_UDP_Login local_3f [2];
  ushort local_3d;
  int local_35;
  uint local_31;
  undefined1 local_2d;
  char acStack_2c [16];
  uchar local_1c;
  undefined1 auStack_13 [15];
  
  Packet_Monitor_UDP_Login::Packet_Monitor_UDP_Login(local_3f);
  local_35 = param_1;
  local_31 = param_2;
  local_2d = (undefined1)param_3;
  if (param_4 == (char *)0x0) {
    uVar1 = NumberToString(param_2,0);
    LogManager::logFormat
              (1,"DF_MonitorServerProxy.cpp",
               "void CMonitorServerProxy::SendLogin(int, memberIdentificationNumber_t, int, char*, unsigned char, char*)"
               ,0x4f3,"CMonitorServerProxy::SendLogin! DB ID(%s)",uVar1);
  }
  else {
    strncpy(acStack_2c,param_4,0x10);
  }
  local_1c = param_5;
  memcpy(auStack_13,param_6,6);
  SendTcpPacket(this,(char *)local_3f,(uint)local_3d);
  return;
}

```

---

## SendLogout

```asm
// === 08470d68 CMonitorServerProxy::SendLogout  [0x08470d68-0x8470df3] ===
 8470d68:	55                   	push   %ebp
 8470d69:	89 e5                	mov    %esp,%ebp
 8470d6b:	83 ec 68             	sub    $0x68,%esp
 8470d6e:	8b 55 24             	mov    0x24(%ebp),%edx
 8470d71:	8b 45 28             	mov    0x28(%ebp),%eax
 8470d74:	88 55 b4             	mov    %dl,-0x4c(%ebp)
 8470d77:	88 45 b0             	mov    %al,-0x50(%ebp)
 8470d7a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8470d7e:	74 71                	je     8470df1 <_ZN19CMonitorServerProxy10SendLogoutEjiPcjjjhh+0x89>
 8470d80:	8d 45 bd             	lea    -0x43(%ebp),%eax
 8470d83:	89 04 24             	mov    %eax,(%esp)
 8470d86:	e8 49 e5 ff ff       	call   846f2d4 <_ZN25Packet_Monitor_UDP_LogoutC1Ev>
 8470d8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470d8e:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8470d91:	8b 45 10             	mov    0x10(%ebp),%eax
 8470d94:	88 45 cb             	mov    %al,-0x35(%ebp)
 8470d97:	8b 45 18             	mov    0x18(%ebp),%eax
 8470d9a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8470d9d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8470da0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8470da3:	8b 45 20             	mov    0x20(%ebp),%eax
 8470da6:	89 45 d5             	mov    %eax,-0x2b(%ebp)
 8470da9:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8470dad:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8470db0:	0f b6 45 b0          	movzbl -0x50(%ebp),%eax
 8470db4:	88 45 f7             	mov    %al,-0x9(%ebp)
 8470db7:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8470dbb:	74 15                	je     8470dd2 <_ZN19CMonitorServerProxy10SendLogoutEjiPcjjjhh+0x6a>
 8470dbd:	8b 45 14             	mov    0x14(%ebp),%eax
 8470dc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470dc4:	8d 45 bd             	lea    -0x43(%ebp),%eax
 8470dc7:	83 c0 1c             	add    $0x1c,%eax
 8470dca:	89 04 24             	mov    %eax,(%esp)
 8470dcd:	e8 1e d1 c0 ff       	call   807def0 <strcpy@plt>
 8470dd2:	0f b7 45 bf          	movzwl -0x41(%ebp),%eax
 8470dd6:	0f b7 d0             	movzwl %ax,%edx
 8470dd9:	8d 45 bd             	lea    -0x43(%ebp),%eax
 8470ddc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470de0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470de4:	8b 45 08             	mov    0x8(%ebp),%eax
 8470de7:	89 04 24             	mov    %eax,(%esp)
 8470dea:	e8 55 00 00 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8470def:	eb 01                	jmp    8470df2 <_ZN19CMonitorServerProxy10SendLogoutEjiPcjjjhh+0x8a>
 8470df1:	90                   	nop
 8470df2:	c9                   	leave
 8470df3:	c3                   	ret

```

```c
// CMonitorServerProxy::SendLogout @ 0x8470d68

/* CMonitorServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned
   int, unsigned char, unsigned char) */

void __thiscall
CMonitorServerProxy::SendLogout
          (CMonitorServerProxy *this,uint param_1,int param_2,char *param_3,uint param_4,
          uint param_5,uint param_6,uchar param_7,uchar param_8)

{
  Packet_Monitor_UDP_Logout local_47 [2];
  ushort local_45;
  uint local_3d;
  undefined1 local_39;
  uint local_38;
  uint local_34;
  uchar local_30;
  uint local_2f;
  char acStack_2b [30];
  uchar local_d;
  
  if (param_1 != 0) {
    Packet_Monitor_UDP_Logout::Packet_Monitor_UDP_Logout(local_47);
    local_3d = param_1;
    local_39 = (undefined1)param_2;
    local_38 = param_4;
    local_34 = param_5;
    local_2f = param_6;
    local_30 = param_7;
    local_d = param_8;
    if (param_3 != (char *)0x0) {
      strcpy(acStack_2b,param_3);
    }
    SendTcpPacket(this,(char *)local_47,(uint)local_45);
  }
  return;
}

```

---

## SendMemberPayTax

```asm
// === 08470fb4 CMonitorServerProxy::SendMemberPayTax  [0x08470fb4-0x8471019] ===
 8470fb4:	55                   	push   %ebp
 8470fb5:	89 e5                	mov    %esp,%ebp
 8470fb7:	83 ec 48             	sub    $0x48,%esp
 8470fba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470fbd:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8470fc0:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8470fc4:	83 f0 01             	xor    $0x1,%eax
 8470fc7:	84 c0                	test   %al,%al
 8470fc9:	75 48                	jne    8471013 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii+0x5f>
 8470fcb:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8470fcf:	75 06                	jne    8470fd7 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii+0x23>
 8470fd1:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8470fd5:	74 3f                	je     8471016 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii+0x62>
 8470fd7:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8470fda:	89 04 24             	mov    %eax,(%esp)
 8470fdd:	e8 e0 05 00 00       	call   84715c2 <_ZN29Packet_Monitor_Member_Pay_TaxC1Ev>
 8470fe2:	8b 45 10             	mov    0x10(%ebp),%eax
 8470fe5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8470fe8:	8b 45 14             	mov    0x14(%ebp),%eax
 8470feb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8470fee:	8b 45 18             	mov    0x18(%ebp),%eax
 8470ff1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8470ff4:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8470ff8:	0f b7 d0             	movzwl %ax,%edx
 8470ffb:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8470ffe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471002:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471006:	8b 45 08             	mov    0x8(%ebp),%eax
 8471009:	89 04 24             	mov    %eax,(%esp)
 847100c:	e8 e3 fd ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8471011:	eb 04                	jmp    8471017 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii+0x63>
 8471013:	90                   	nop
 8471014:	eb 01                	jmp    8471017 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii+0x63>
 8471016:	90                   	nop
 8471017:	c9                   	leave
 8471018:	c3                   	ret
 8471019:	90                   	nop

```

```c
// CMonitorServerProxy::SendMemberPayTax @ 0x8470fb4

/* CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int) */

void __thiscall
CMonitorServerProxy::SendMemberPayTax
          (CMonitorServerProxy *this,bool param_1,uint param_2,int param_3,int param_4)

{
  Packet_Monitor_Member_Pay_Tax local_22 [2];
  ushort local_20;
  uint local_18;
  int local_14;
  int local_10;
  
  if ((param_1) && ((param_3 != 0 || (param_4 != 0)))) {
    Packet_Monitor_Member_Pay_Tax::Packet_Monitor_Member_Pay_Tax(local_22);
    local_18 = param_2;
    local_14 = param_3;
    local_10 = param_4;
    SendPacket(this,(char *)local_22,(uint)local_20);
  }
  return;
}

```

---

## SendNoticeCharLive

```asm
// === 08471170 CMonitorServerProxy::SendNoticeCharLive  [0x08471170-0x84711a5] ===
 8471170:	55                   	push   %ebp
 8471171:	89 e5                	mov    %esp,%ebp
 8471173:	83 ec 28             	sub    $0x28,%esp
 8471176:	8d 45 ea             	lea    -0x16(%ebp),%eax
 8471179:	89 04 24             	mov    %eax,(%esp)
 847117c:	e8 65 04 00 00       	call   84715e6 <_ZN44Packet_Monitor_Notice_Charac_Live_On_Ten_MinC1Ev>
 8471181:	8b 45 0c             	mov    0xc(%ebp),%eax
 8471184:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8471187:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 847118b:	0f b7 d0             	movzwl %ax,%edx
 847118e:	8d 45 ea             	lea    -0x16(%ebp),%eax
 8471191:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471195:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471199:	8b 45 08             	mov    0x8(%ebp),%eax
 847119c:	89 04 24             	mov    %eax,(%esp)
 847119f:	e8 50 fc ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84711a4:	c9                   	leave
 84711a5:	c3                   	ret

```

```c
// CMonitorServerProxy::SendNoticeCharLive @ 0x8471170

/* CMonitorServerProxy::SendNoticeCharLive(unsigned int) */

void __thiscall CMonitorServerProxy::SendNoticeCharLive(CMonitorServerProxy *this,uint param_1)

{
  Packet_Monitor_Notice_Charac_Live_On_Ten_Min local_1a [2];
  ushort local_18;
  uint local_10;
  
  Packet_Monitor_Notice_Charac_Live_On_Ten_Min::Packet_Monitor_Notice_Charac_Live_On_Ten_Min
            (local_1a);
  local_10 = param_1;
  SendPacket(this,(char *)local_1a,(uint)local_18);
  return;
}

```

---

## SendNotifyNewMail

```asm
// === 08471072 CMonitorServerProxy::SendNotifyNewMail  [0x08471072-0x84710a7] ===
 8471072:	55                   	push   %ebp
 8471073:	89 e5                	mov    %esp,%ebp
 8471075:	83 ec 38             	sub    $0x38,%esp
 8471078:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 847107b:	89 04 24             	mov    %eax,(%esp)
 847107e:	e8 c9 05 00 00       	call   847164c <_ZN30Packet_Monitor_Notify_New_MailC1Ev>
 8471083:	8b 45 0c             	mov    0xc(%ebp),%eax
 8471086:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8471089:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 847108d:	0f b7 d0             	movzwl %ax,%edx
 8471090:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8471093:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471097:	89 44 24 04          	mov    %eax,0x4(%esp)
 847109b:	8b 45 08             	mov    0x8(%ebp),%eax
 847109e:	89 04 24             	mov    %eax,(%esp)
 84710a1:	e8 4e fd ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84710a6:	c9                   	leave
 84710a7:	c3                   	ret

```

```c
// CMonitorServerProxy::SendNotifyNewMail @ 0x8471072

/* CMonitorServerProxy::SendNotifyNewMail(unsigned int) */

void __thiscall CMonitorServerProxy::SendNotifyNewMail(CMonitorServerProxy *this,uint param_1)

{
  Packet_Monitor_Notify_New_Mail local_1e [2];
  ushort local_1c;
  uint local_14;
  
  Packet_Monitor_Notify_New_Mail::Packet_Monitor_Notify_New_Mail(local_1e);
  local_14 = param_1;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendPacket

```asm
// === 08470df4 CMonitorServerProxy::SendPacket  [0x08470df4-0x8470e43] ===
 8470df4:	55                   	push   %ebp
 8470df5:	89 e5                	mov    %esp,%ebp
 8470df7:	83 ec 28             	sub    $0x28,%esp
 8470dfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8470dfd:	8b 40 04             	mov    0x4(%eax),%eax
 8470e00:	85 c0                	test   %eax,%eax
 8470e02:	74 3d                	je     8470e41 <_ZN19CMonitorServerProxy10SendPacketEPci+0x4d>
 8470e04:	8b 45 08             	mov    0x8(%ebp),%eax
 8470e07:	89 04 24             	mov    %eax,(%esp)
 8470e0a:	e8 e1 56 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 8470e0f:	8b 55 08             	mov    0x8(%ebp),%edx
 8470e12:	8b 52 04             	mov    0x4(%edx),%edx
 8470e15:	0f b7 d2             	movzwl %dx,%edx
 8470e18:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8470e1b:	81 c1 04 0e 03 00    	add    $0x30e04,%ecx
 8470e21:	89 44 24 10          	mov    %eax,0x10(%esp)
 8470e25:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8470e29:	8b 45 10             	mov    0x10(%ebp),%eax
 8470e2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8470e30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470e33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470e37:	89 0c 24             	mov    %ecx,(%esp)
 8470e3a:	e8 29 2d 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 8470e3f:	eb 01                	jmp    8470e42 <_ZN19CMonitorServerProxy10SendPacketEPci+0x4e>
 8470e41:	90                   	nop
 8470e42:	c9                   	leave
 8470e43:	c3                   	ret

```

```c
// CMonitorServerProxy::SendPacket @ 0x8470df4

/* CMonitorServerProxy::SendPacket(char*, int) */

void __thiscall CMonitorServerProxy::SendPacket(CMonitorServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(this + 4) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 0x30e04),param_1,param_2,(ushort)*(undefined4 *)(this + 4),
               pcVar1);
  }
  return;
}

```

---

## SendPacketCallGuildMembers

```asm
// === 08470e88 CMonitorServerProxy::SendPacketCallGuildMembers  [0x08470e88-0x8470ec3] ===
 8470e88:	55                   	push   %ebp
 8470e89:	89 e5                	mov    %esp,%ebp
 8470e8b:	83 ec 38             	sub    $0x38,%esp
 8470e8e:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8470e91:	89 04 24             	mov    %eax,(%esp)
 8470e94:	e8 07 e5 ff ff       	call   846f3a0 <_ZN33Packet_Monitor_Call_Guild_MembersC1Ev>
 8470e99:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470e9c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8470e9f:	8b 45 10             	mov    0x10(%ebp),%eax
 8470ea2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8470ea5:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 8470ea9:	0f b7 d0             	movzwl %ax,%edx
 8470eac:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8470eaf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8470eb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470eb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8470eba:	89 04 24             	mov    %eax,(%esp)
 8470ebd:	e8 32 ff ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8470ec2:	c9                   	leave
 8470ec3:	c3                   	ret

```

```c
// CMonitorServerProxy::SendPacketCallGuildMembers @ 0x8470e88

/* CMonitorServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::SendPacketCallGuildMembers(CMonitorServerProxy *this,uint param_1,uint param_2)

{
  Packet_Monitor_Call_Guild_Members local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Monitor_Call_Guild_Members::Packet_Monitor_Call_Guild_Members(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendRequestOnTimeEventReward

```asm
// === 084711fe CMonitorServerProxy::SendRequestOnTimeEventReward  [0x084711fe-0x847123f] ===
 84711fe:	55                   	push   %ebp
 84711ff:	89 e5                	mov    %esp,%ebp
 8471201:	83 ec 38             	sub    $0x38,%esp
 8471204:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8471207:	89 04 24             	mov    %eax,(%esp)
 847120a:	e8 eb 04 00 00       	call   84716fa <_ZN36Packet_GTM_OntimeEvent_RequestRewardC1Ev>
 847120f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8471212:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8471215:	8b 45 10             	mov    0x10(%ebp),%eax
 8471218:	89 45 f0             	mov    %eax,-0x10(%ebp)
 847121b:	8b 45 14             	mov    0x14(%ebp),%eax
 847121e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8471221:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8471225:	0f b7 d0             	movzwl %ax,%edx
 8471228:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 847122b:	89 54 24 08          	mov    %edx,0x8(%esp)
 847122f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471233:	8b 45 08             	mov    0x8(%ebp),%eax
 8471236:	89 04 24             	mov    %eax,(%esp)
 8471239:	e8 b6 fb ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 847123e:	c9                   	leave
 847123f:	c3                   	ret

```

```c
// CMonitorServerProxy::SendRequestOnTimeEventReward @ 0x84711fe

/* CMonitorServerProxy::SendRequestOnTimeEventReward(unsigned int, unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::SendRequestOnTimeEventReward
          (CMonitorServerProxy *this,uint param_1,uint param_2,uint param_3)

{
  Packet_GTM_OntimeEvent_RequestReward local_22 [2];
  ushort local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_GTM_OntimeEvent_RequestReward::Packet_GTM_OntimeEvent_RequestReward(local_22);
  local_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  SendPacket(this,(char *)local_22,(uint)local_20);
  return;
}

```

---

## SendRequestUserMid

```asm
// === 084711a6 CMonitorServerProxy::SendRequestUserMid  [0x084711a6-0x84711fd] ===
 84711a6:	55                   	push   %ebp
 84711a7:	89 e5                	mov    %esp,%ebp
 84711a9:	83 ec 58             	sub    $0x58,%esp
 84711ac:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84711af:	89 04 24             	mov    %eax,(%esp)
 84711b2:	e8 dd 04 00 00       	call   8471694 <_ZN21Packet_GM_Request_MidC1Ev>
 84711b7:	8b 45 10             	mov    0x10(%ebp),%eax
 84711ba:	89 45 ce             	mov    %eax,-0x32(%ebp)
 84711bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84711c0:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 84711c3:	8b 45 18             	mov    0x18(%ebp),%eax
 84711c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84711ca:	8b 45 14             	mov    0x14(%ebp),%eax
 84711cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84711d1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84711d4:	83 c0 16             	add    $0x16,%eax
 84711d7:	89 04 24             	mov    %eax,(%esp)
 84711da:	e8 c1 c6 c0 ff       	call   807d8a0 <memcpy@plt>
 84711df:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 84711e3:	0f b7 d0             	movzwl %ax,%edx
 84711e6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84711e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84711ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 84711f1:	8b 45 08             	mov    0x8(%ebp),%eax
 84711f4:	89 04 24             	mov    %eax,(%esp)
 84711f7:	e8 f8 fb ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84711fc:	c9                   	leave
 84711fd:	c3                   	ret

```

```c
// CMonitorServerProxy::SendRequestUserMid @ 0x84711a6

/* CMonitorServerProxy::SendRequestUserMid(unsigned int, unsigned int, char*, int) */

void __thiscall
CMonitorServerProxy::SendRequestUserMid
          (CMonitorServerProxy *this,uint param_1,uint param_2,char *param_3,int param_4)

{
  Packet_GM_Request_Mid local_40 [2];
  ushort local_3e;
  uint local_36;
  uint local_32;
  undefined1 auStack_2a [38];
  
  Packet_GM_Request_Mid::Packet_GM_Request_Mid(local_40);
  local_36 = param_2;
  local_32 = param_1;
  memcpy(auStack_2a,param_3,param_4);
  SendPacket(this,(char *)local_40,(uint)local_3e);
  return;
}

```

---

## SendTcpPacket

```asm
// === 08470e44 CMonitorServerProxy::SendTcpPacket  [0x08470e44-0x8470e87] ===
 8470e44:	55                   	push   %ebp
 8470e45:	89 e5                	mov    %esp,%ebp
 8470e47:	83 ec 18             	sub    $0x18,%esp
 8470e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8470e4d:	89 04 24             	mov    %eax,(%esp)
 8470e50:	e8 e7 08 00 00       	call   847173c <_ZN19CMonitorServerProxy13GetTcpHandlerEv>
 8470e55:	89 04 24             	mov    %eax,(%esp)
 8470e58:	e8 f1 d0 e8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 8470e5d:	83 f8 ff             	cmp    $0xffffffff,%eax
 8470e60:	0f 94 c0             	sete   %al
 8470e63:	84 c0                	test   %al,%al
 8470e65:	75 1e                	jne    8470e85 <_ZN19CMonitorServerProxy13SendTcpPacketEPci+0x41>
 8470e67:	8b 45 08             	mov    0x8(%ebp),%eax
 8470e6a:	8d 50 0c             	lea    0xc(%eax),%edx
 8470e6d:	8b 45 10             	mov    0x10(%ebp),%eax
 8470e70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8470e74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8470e77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8470e7b:	89 14 24             	mov    %edx,(%esp)
 8470e7e:	e8 49 d1 e8 ff       	call   82fdfcc <_ZN8CNetworkILi100000ELi100000EE11send_packetEPci>
 8470e83:	eb 01                	jmp    8470e86 <_ZN19CMonitorServerProxy13SendTcpPacketEPci+0x42>
 8470e85:	90                   	nop
 8470e86:	c9                   	leave
 8470e87:	c3                   	ret

```

```c
// CMonitorServerProxy::SendTcpPacket @ 0x8470e44

/* CMonitorServerProxy::SendTcpPacket(char*, int) */

void __thiscall
CMonitorServerProxy::SendTcpPacket(CMonitorServerProxy *this,char *param_1,int param_2)

{
  CNetwork<100000,100000> *this_00;
  int iVar1;
  
  this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
  iVar1 = CNetwork<100000,100000>::get_socket(this_00);
  if (iVar1 != -1) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0xc),param_1,param_2);
  }
  return;
}

```

---

## SendUserRepel

```asm
// === 0847101a CMonitorServerProxy::SendUserRepel  [0x0847101a-0x8471071] ===
 847101a:	55                   	push   %ebp
 847101b:	89 e5                	mov    %esp,%ebp
 847101d:	83 ec 48             	sub    $0x48,%esp
 8471020:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8471023:	89 04 24             	mov    %eax,(%esp)
 8471026:	e8 df 05 00 00       	call   847160a <_ZN36Packet_Monitor_User_Repel_ByCharNameC1Ev>
 847102b:	8b 45 10             	mov    0x10(%ebp),%eax
 847102e:	89 45 d2             	mov    %eax,-0x2e(%ebp)
 8471031:	8b 45 0c             	mov    0xc(%ebp),%eax
 8471034:	89 45 d6             	mov    %eax,-0x2a(%ebp)
 8471037:	8b 45 18             	mov    0x18(%ebp),%eax
 847103a:	89 44 24 08          	mov    %eax,0x8(%esp)
 847103e:	8b 45 14             	mov    0x14(%ebp),%eax
 8471041:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471045:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8471048:	83 c0 12             	add    $0x12,%eax
 847104b:	89 04 24             	mov    %eax,(%esp)
 847104e:	e8 4d c8 c0 ff       	call   807d8a0 <memcpy@plt>
 8471053:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 8471057:	0f b7 d0             	movzwl %ax,%edx
 847105a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 847105d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471061:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471065:	8b 45 08             	mov    0x8(%ebp),%eax
 8471068:	89 04 24             	mov    %eax,(%esp)
 847106b:	e8 84 fd ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8471070:	c9                   	leave
 8471071:	c3                   	ret

```

```c
// CMonitorServerProxy::SendUserRepel @ 0x847101a

/* CMonitorServerProxy::SendUserRepel(unsigned int, unsigned int, char*, int) */

void __thiscall
CMonitorServerProxy::SendUserRepel
          (CMonitorServerProxy *this,uint param_1,uint param_2,char *param_3,int param_4)

{
  Packet_Monitor_User_Repel_ByCharName local_3c [2];
  ushort local_3a;
  uint local_32;
  uint local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Monitor_User_Repel_ByCharName::Packet_Monitor_User_Repel_ByCharName(local_3c);
  local_32 = param_2;
  local_2e = param_1;
  memcpy(auStack_2a,param_3,param_4);
  SendPacket(this,(char *)local_3c,(uint)local_3a);
  return;
}

```

---

## updateTowerRank

```asm
// === 08471240 CMonitorServerProxy::updateTowerRank  [0x08471240-0x8471287] ===
 8471240:	55                   	push   %ebp
 8471241:	89 e5                	mov    %esp,%ebp
 8471243:	83 ec 38             	sub    $0x38,%esp
 8471246:	8d 45 de             	lea    -0x22(%ebp),%eax
 8471249:	89 04 24             	mov    %eax,(%esp)
 847124c:	e8 85 04 00 00       	call   84716d6 <_ZN42Packet_Request_Charac_Tower_Update_RankingC1Ev>
 8471251:	8b 45 0c             	mov    0xc(%ebp),%eax
 8471254:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8471257:	8b 45 10             	mov    0x10(%ebp),%eax
 847125a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 847125d:	8b 45 14             	mov    0x14(%ebp),%eax
 8471260:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8471263:	8b 45 18             	mov    0x18(%ebp),%eax
 8471266:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8471269:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 847126d:	0f b7 d0             	movzwl %ax,%edx
 8471270:	8d 45 de             	lea    -0x22(%ebp),%eax
 8471273:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471277:	89 44 24 04          	mov    %eax,0x4(%esp)
 847127b:	8b 45 08             	mov    0x8(%ebp),%eax
 847127e:	89 04 24             	mov    %eax,(%esp)
 8471281:	e8 6e fb ff ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8471286:	c9                   	leave
 8471287:	c3                   	ret

```

```c
// CMonitorServerProxy::updateTowerRank @ 0x8471240

/* CMonitorServerProxy::updateTowerRank(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
CMonitorServerProxy::updateTowerRank
          (CMonitorServerProxy *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  Packet_Request_Charac_Tower_Update_Ranking local_26 [2];
  ushort local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  Packet_Request_Charac_Tower_Update_Ranking::Packet_Request_Charac_Tower_Update_Ranking(local_26);
  local_1c = param_1;
  local_18 = param_2;
  local_14 = param_3;
  local_10 = param_4;
  SendPacket(this,(char *)local_26,(uint)local_24);
  return;
}

```

