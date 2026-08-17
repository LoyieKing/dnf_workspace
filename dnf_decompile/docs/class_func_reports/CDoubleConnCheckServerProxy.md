# CDoubleConnCheckServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CDoubleConnCheckServerProxy

```asm
// === 0846d300 CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy  [0x0846d300-0x846d355] ===
 846d300:	55                   	push   %ebp
 846d301:	89 e5                	mov    %esp,%ebp
 846d303:	56                   	push   %esi
 846d304:	53                   	push   %ebx
 846d305:	83 ec 10             	sub    $0x10,%esp
 846d308:	8b 45 08             	mov    0x8(%ebp),%eax
 846d30b:	8b 55 0c             	mov    0xc(%ebp),%edx
 846d30e:	89 54 24 04          	mov    %edx,0x4(%esp)
 846d312:	89 04 24             	mov    %eax,(%esp)
 846d315:	e8 96 a6 29 00       	call   87079b0 <_ZNSsC1ERKSs>
 846d31a:	8b 45 08             	mov    0x8(%ebp),%eax
 846d31d:	8b 55 10             	mov    0x10(%ebp),%edx
 846d320:	89 50 04             	mov    %edx,0x4(%eax)
 846d323:	8b 45 08             	mov    0x8(%ebp),%eax
 846d326:	83 c0 08             	add    $0x8,%eax
 846d329:	89 04 24             	mov    %eax,(%esp)
 846d32c:	e8 e7 61 01 00       	call   8483518 <_ZN11CUdpHandlerC1Ev>
 846d331:	eb 1b                	jmp    846d34e <_ZN27CDoubleConnCheckServerProxyC1ESsi+0x4e>
 846d333:	89 d3                	mov    %edx,%ebx
 846d335:	89 c6                	mov    %eax,%esi
 846d337:	8b 45 08             	mov    0x8(%ebp),%eax
 846d33a:	89 04 24             	mov    %eax,(%esp)
 846d33d:	e8 9e a8 29 00       	call   8707be0 <_ZNSsD1Ev>
 846d342:	89 f0                	mov    %esi,%eax
 846d344:	89 da                	mov    %ebx,%edx
 846d346:	89 04 24             	mov    %eax,(%esp)
 846d349:	e8 02 64 67 00       	call   8ae3750 <_Unwind_Resume>
 846d34e:	83 c4 10             	add    $0x10,%esp
 846d351:	5b                   	pop    %ebx
 846d352:	5e                   	pop    %esi
 846d353:	5d                   	pop    %ebp
 846d354:	c3                   	ret
 846d355:	90                   	nop

```

```c
// CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy @ 0x846d300

/* CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::string, int) */

void __thiscall
CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy
          (CDoubleConnCheckServerProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 0846d32c to 0846d330 has its CatchHandler @ 0846d333 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 8));
  return;
}

```

---

## Init

```asm
// === 0846d356 CDoubleConnCheckServerProxy::Init  [0x0846d356-0x846d3ad] ===
 846d356:	55                   	push   %ebp
 846d357:	89 e5                	mov    %esp,%ebp
 846d359:	83 ec 28             	sub    $0x28,%esp
 846d35c:	8b 45 08             	mov    0x8(%ebp),%eax
 846d35f:	83 c0 08             	add    $0x8,%eax
 846d362:	89 04 24             	mov    %eax,(%esp)
 846d365:	e8 30 63 01 00       	call   848369a <_ZN11CUdpHandler16InitClientSocketEv>
 846d36a:	83 f8 ff             	cmp    $0xffffffff,%eax
 846d36d:	0f 94 c0             	sete   %al
 846d370:	84 c0                	test   %al,%al
 846d372:	74 33                	je     846d3a7 <_ZN27CDoubleConnCheckServerProxy4InitEv+0x51>
 846d374:	c7 44 24 10 20 6f c6 	movl   $0x8c66f20,0x10(%esp)
 846d37b:	08 
 846d37c:	c7 44 24 0c 78 00 00 	movl   $0x78,0xc(%esp)
 846d383:	00 
 846d384:	c7 44 24 08 70 79 c6 	movl   $0x8c67970,0x8(%esp)
 846d38b:	08 
 846d38c:	c7 44 24 04 64 6f c6 	movl   $0x8c66f64,0x4(%esp)
 846d393:	08 
 846d394:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846d39b:	e8 6a 68 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846d3a0:	b8 00 00 00 00       	mov    $0x0,%eax
 846d3a5:	eb 05                	jmp    846d3ac <_ZN27CDoubleConnCheckServerProxy4InitEv+0x56>
 846d3a7:	b8 01 00 00 00       	mov    $0x1,%eax
 846d3ac:	c9                   	leave
 846d3ad:	c3                   	ret

```

```c
// CDoubleConnCheckServerProxy::Init @ 0x846d356

/* CDoubleConnCheckServerProxy::Init() */

bool __thiscall CDoubleConnCheckServerProxy::Init(CDoubleConnCheckServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 8));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_DoubleConnCheckServerProxy.cpp","Init",0x78,
               "[CDoubleConnCheckServerProxy::Init] Can\'t init udp client socket\n");
  }
  return iVar1 != -1;
}

```

---

## SendHeartBeat

```asm
// === 0846d3ae CDoubleConnCheckServerProxy::SendHeartBeat  [0x0846d3ae-0x846d411] ===
 846d3ae:	55                   	push   %ebp
 846d3af:	89 e5                	mov    %esp,%ebp
 846d3b1:	53                   	push   %ebx
 846d3b2:	83 ec 34             	sub    $0x34,%esp
 846d3b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 846d3b8:	89 04 24             	mov    %eax,(%esp)
 846d3bb:	e8 42 02 00 00       	call   846d602 <_ZN40Packet_Double_Check_Server_UDP_HeartBeatC1Ev>
 846d3c0:	c7 45 f2 e8 03 00 00 	movl   $0x3e8,-0xe(%ebp)
 846d3c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d3ca:	88 45 f6             	mov    %al,-0xa(%ebp)
 846d3cd:	8b 45 10             	mov    0x10(%ebp),%eax
 846d3d0:	88 45 f7             	mov    %al,-0x9(%ebp)
 846d3d3:	8b 45 08             	mov    0x8(%ebp),%eax
 846d3d6:	89 04 24             	mov    %eax,(%esp)
 846d3d9:	e8 12 91 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846d3de:	8b 55 08             	mov    0x8(%ebp),%edx
 846d3e1:	8b 52 04             	mov    0x4(%edx),%edx
 846d3e4:	0f b7 ca             	movzwl %dx,%ecx
 846d3e7:	8d 55 ec             	lea    -0x14(%ebp),%edx
 846d3ea:	8b 5d 08             	mov    0x8(%ebp),%ebx
 846d3ed:	83 c3 08             	add    $0x8,%ebx
 846d3f0:	89 44 24 10          	mov    %eax,0x10(%esp)
 846d3f4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 846d3f8:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 846d3ff:	00 
 846d400:	89 54 24 04          	mov    %edx,0x4(%esp)
 846d404:	89 1c 24             	mov    %ebx,(%esp)
 846d407:	e8 5c 67 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 846d40c:	83 c4 34             	add    $0x34,%esp
 846d40f:	5b                   	pop    %ebx
 846d410:	5d                   	pop    %ebp
 846d411:	c3                   	ret

```

```c
// CDoubleConnCheckServerProxy::SendHeartBeat @ 0x846d3ae

/* CDoubleConnCheckServerProxy::SendHeartBeat(int, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendHeartBeat
          (CDoubleConnCheckServerProxy *this,int param_1,int param_2)

{
  char *pcVar1;
  Packet_Double_Check_Server_UDP_HeartBeat local_18 [6];
  undefined4 local_12;
  undefined1 local_e;
  undefined1 local_d;
  
  Packet_Double_Check_Server_UDP_HeartBeat::Packet_Double_Check_Server_UDP_HeartBeat(local_18);
  local_12 = 1000;
  local_e = (undefined1)param_1;
  local_d = (undefined1)param_2;
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),(char *)local_18,0xc,(ushort)*(undefined4 *)(this + 4),pcVar1
            );
  return;
}

```

---

## SendLogin

```asm
// === 0846d412 CDoubleConnCheckServerProxy::SendLogin  [0x0846d412-0x846d47b] ===
 846d412:	55                   	push   %ebp
 846d413:	89 e5                	mov    %esp,%ebp
 846d415:	53                   	push   %ebx
 846d416:	83 ec 34             	sub    $0x34,%esp
 846d419:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846d41c:	89 04 24             	mov    %eax,(%esp)
 846d41f:	e8 66 01 00 00       	call   846d58a <_ZN28Packet_DoubleCheck_UDP_LoginC1Ev>
 846d424:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d427:	89 45 ee             	mov    %eax,-0x12(%ebp)
 846d42a:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d42d:	89 45 f2             	mov    %eax,-0xe(%ebp)
 846d430:	8b 45 10             	mov    0x10(%ebp),%eax
 846d433:	88 45 f6             	mov    %al,-0xa(%ebp)
 846d436:	8b 45 14             	mov    0x14(%ebp),%eax
 846d439:	88 45 f7             	mov    %al,-0x9(%ebp)
 846d43c:	8b 45 08             	mov    0x8(%ebp),%eax
 846d43f:	89 04 24             	mov    %eax,(%esp)
 846d442:	e8 a9 90 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846d447:	8b 55 08             	mov    0x8(%ebp),%edx
 846d44a:	8b 52 04             	mov    0x4(%edx),%edx
 846d44d:	0f b7 ca             	movzwl %dx,%ecx
 846d450:	8d 55 e8             	lea    -0x18(%ebp),%edx
 846d453:	8b 5d 08             	mov    0x8(%ebp),%ebx
 846d456:	83 c3 08             	add    $0x8,%ebx
 846d459:	89 44 24 10          	mov    %eax,0x10(%esp)
 846d45d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 846d461:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 846d468:	00 
 846d469:	89 54 24 04          	mov    %edx,0x4(%esp)
 846d46d:	89 1c 24             	mov    %ebx,(%esp)
 846d470:	e8 f3 66 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 846d475:	83 c4 34             	add    $0x34,%esp
 846d478:	5b                   	pop    %ebx
 846d479:	5d                   	pop    %ebp
 846d47a:	c3                   	ret
 846d47b:	90                   	nop

```

```c
// CDoubleConnCheckServerProxy::SendLogin @ 0x846d412

/* CDoubleConnCheckServerProxy::SendLogin(unsigned int, int, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendLogin
          (CDoubleConnCheckServerProxy *this,uint param_1,int param_2,int param_3)

{
  char *pcVar1;
  Packet_DoubleCheck_UDP_Login local_1c [6];
  uint local_16;
  uint local_12;
  undefined1 local_e;
  undefined1 local_d;
  
  Packet_DoubleCheck_UDP_Login::Packet_DoubleCheck_UDP_Login(local_1c);
  local_16 = param_1;
  local_12 = param_1;
  local_e = (undefined1)param_2;
  local_d = (undefined1)param_3;
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),(char *)local_1c,0x10,(ushort)*(undefined4 *)(this + 4),
             pcVar1);
  return;
}

```

---

## SendLogout

```asm
// === 0846d47c CDoubleConnCheckServerProxy::SendLogout  [0x0846d47c-0x846d4ed] ===
 846d47c:	55                   	push   %ebp
 846d47d:	89 e5                	mov    %esp,%ebp
 846d47f:	53                   	push   %ebx
 846d480:	83 ec 34             	sub    $0x34,%esp
 846d483:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 846d487:	74 5e                	je     846d4e7 <_ZN27CDoubleConnCheckServerProxy10SendLogoutEjii+0x6b>
 846d489:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846d48c:	89 04 24             	mov    %eax,(%esp)
 846d48f:	e8 32 01 00 00       	call   846d5c6 <_ZN29Packet_DoubleCheck_UDP_LogoutC1Ev>
 846d494:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d497:	89 45 ee             	mov    %eax,-0x12(%ebp)
 846d49a:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d49d:	89 45 f2             	mov    %eax,-0xe(%ebp)
 846d4a0:	8b 45 10             	mov    0x10(%ebp),%eax
 846d4a3:	88 45 f6             	mov    %al,-0xa(%ebp)
 846d4a6:	8b 45 14             	mov    0x14(%ebp),%eax
 846d4a9:	88 45 f7             	mov    %al,-0x9(%ebp)
 846d4ac:	8b 45 08             	mov    0x8(%ebp),%eax
 846d4af:	89 04 24             	mov    %eax,(%esp)
 846d4b2:	e8 39 90 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846d4b7:	8b 55 08             	mov    0x8(%ebp),%edx
 846d4ba:	8b 52 04             	mov    0x4(%edx),%edx
 846d4bd:	0f b7 ca             	movzwl %dx,%ecx
 846d4c0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 846d4c3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 846d4c6:	83 c3 08             	add    $0x8,%ebx
 846d4c9:	89 44 24 10          	mov    %eax,0x10(%esp)
 846d4cd:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 846d4d1:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 846d4d8:	00 
 846d4d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 846d4dd:	89 1c 24             	mov    %ebx,(%esp)
 846d4e0:	e8 83 66 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 846d4e5:	eb 01                	jmp    846d4e8 <_ZN27CDoubleConnCheckServerProxy10SendLogoutEjii+0x6c>
 846d4e7:	90                   	nop
 846d4e8:	83 c4 34             	add    $0x34,%esp
 846d4eb:	5b                   	pop    %ebx
 846d4ec:	5d                   	pop    %ebp
 846d4ed:	c3                   	ret

```

```c
// CDoubleConnCheckServerProxy::SendLogout @ 0x846d47c

/* CDoubleConnCheckServerProxy::SendLogout(unsigned int, int, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendLogout
          (CDoubleConnCheckServerProxy *this,uint param_1,int param_2,int param_3)

{
  char *pcVar1;
  Packet_DoubleCheck_UDP_Logout local_1c [6];
  uint local_16;
  uint local_12;
  undefined1 local_e;
  undefined1 local_d;
  
  if (param_1 != 0) {
    Packet_DoubleCheck_UDP_Logout::Packet_DoubleCheck_UDP_Logout(local_1c);
    local_16 = param_1;
    local_12 = param_1;
    local_e = (undefined1)param_2;
    local_d = (undefined1)param_3;
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 8),(char *)local_1c,0x10,(ushort)*(undefined4 *)(this + 4),
               pcVar1);
  }
  return;
}

```

---

## SendPacket

```asm
// === 0846d4ee CDoubleConnCheckServerProxy::SendPacket  [0x0846d4ee-0x846d52d] ===
 846d4ee:	55                   	push   %ebp
 846d4ef:	89 e5                	mov    %esp,%ebp
 846d4f1:	83 ec 28             	sub    $0x28,%esp
 846d4f4:	8b 45 08             	mov    0x8(%ebp),%eax
 846d4f7:	89 04 24             	mov    %eax,(%esp)
 846d4fa:	e8 f1 8f 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846d4ff:	8b 55 08             	mov    0x8(%ebp),%edx
 846d502:	8b 52 04             	mov    0x4(%edx),%edx
 846d505:	0f b7 d2             	movzwl %dx,%edx
 846d508:	8b 4d 08             	mov    0x8(%ebp),%ecx
 846d50b:	83 c1 08             	add    $0x8,%ecx
 846d50e:	89 44 24 10          	mov    %eax,0x10(%esp)
 846d512:	89 54 24 0c          	mov    %edx,0xc(%esp)
 846d516:	8b 45 10             	mov    0x10(%ebp),%eax
 846d519:	89 44 24 08          	mov    %eax,0x8(%esp)
 846d51d:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d520:	89 44 24 04          	mov    %eax,0x4(%esp)
 846d524:	89 0c 24             	mov    %ecx,(%esp)
 846d527:	e8 3c 66 01 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 846d52c:	c9                   	leave
 846d52d:	c3                   	ret

```

```c
// CDoubleConnCheckServerProxy::SendPacket @ 0x846d4ee

/* CDoubleConnCheckServerProxy::SendPacket(char*, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendPacket(CDoubleConnCheckServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),param_1,param_2,(ushort)*(undefined4 *)(this + 4),pcVar1);
  return;
}

```

