# CmmChannelProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CmmChannelProxy

```asm
// === 081060f4 CmmChannelProxy::CmmChannelProxy  [0x081060f4-0x8106149] ===
 81060f4:	55                   	push   %ebp
 81060f5:	89 e5                	mov    %esp,%ebp
 81060f7:	56                   	push   %esi
 81060f8:	53                   	push   %ebx
 81060f9:	83 ec 10             	sub    $0x10,%esp
 81060fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81060ff:	8b 55 0c             	mov    0xc(%ebp),%edx
 8106102:	89 54 24 04          	mov    %edx,0x4(%esp)
 8106106:	89 04 24             	mov    %eax,(%esp)
 8106109:	e8 a2 18 60 00       	call   87079b0 <_ZNSsC1ERKSs>
 810610e:	8b 45 08             	mov    0x8(%ebp),%eax
 8106111:	8b 55 10             	mov    0x10(%ebp),%edx
 8106114:	89 50 04             	mov    %edx,0x4(%eax)
 8106117:	8b 45 08             	mov    0x8(%ebp),%eax
 810611a:	83 c0 10             	add    $0x10,%eax
 810611d:	89 04 24             	mov    %eax,(%esp)
 8106120:	e8 f3 d3 37 00       	call   8483518 <_ZN11CUdpHandlerC1Ev>
 8106125:	eb 1b                	jmp    8106142 <_ZN15CmmChannelProxyC1ESsi+0x4e>
 8106127:	89 d3                	mov    %edx,%ebx
 8106129:	89 c6                	mov    %eax,%esi
 810612b:	8b 45 08             	mov    0x8(%ebp),%eax
 810612e:	89 04 24             	mov    %eax,(%esp)
 8106131:	e8 aa 1a 60 00       	call   8707be0 <_ZNSsD1Ev>
 8106136:	89 f0                	mov    %esi,%eax
 8106138:	89 da                	mov    %ebx,%edx
 810613a:	89 04 24             	mov    %eax,(%esp)
 810613d:	e8 0e d6 9d 00       	call   8ae3750 <_Unwind_Resume>
 8106142:	83 c4 10             	add    $0x10,%esp
 8106145:	5b                   	pop    %ebx
 8106146:	5e                   	pop    %esi
 8106147:	5d                   	pop    %ebp
 8106148:	c3                   	ret
 8106149:	90                   	nop

```

```c
// CmmChannelProxy::CmmChannelProxy @ 0x81060f4

/* CmmChannelProxy::CmmChannelProxy(std::string, int) */

void __thiscall CmmChannelProxy::CmmChannelProxy(CmmChannelProxy *this,string param_1,int param_2)

{
  std::string::string((string *)this,(string *)param_1._M_dataplus._M_p);
  *(int *)(this + 4) = param_2;
                    /* try { // try from 08106120 to 08106124 has its CatchHandler @ 08106127 */
  CUdpHandler::CUdpHandler((CUdpHandler *)(this + 0x10));
  return;
}

```

---

## ConnectBridgeServer

```asm
// === 08106278 CmmChannelProxy::ConnectBridgeServer  [0x08106278-0x810637b] ===
 8106278:	55                   	push   %ebp
 8106279:	89 e5                	mov    %esp,%ebp
 810627b:	83 ec 38             	sub    $0x38,%esp
 810627e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8106285:	00 
 8106286:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810628d:	00 
 810628e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8106291:	89 04 24             	mov    %eax,(%esp)
 8106294:	e8 27 7a f7 ff       	call   807dcc0 <memset@plt>
 8106299:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81062a0:	00 
 81062a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81062a8:	00 
 81062a9:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81062b0:	e8 fb 77 f7 ff       	call   807dab0 <socket@plt>
 81062b5:	8b 55 08             	mov    0x8(%ebp),%edx
 81062b8:	89 42 18             	mov    %eax,0x18(%edx)
 81062bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81062be:	8b 40 18             	mov    0x18(%eax),%eax
 81062c1:	85 c0                	test   %eax,%eax
 81062c3:	79 16                	jns    81062db <_ZN15CmmChannelProxy19ConnectBridgeServerEv+0x63>
 81062c5:	c7 04 24 44 32 b4 08 	movl   $0x8b43244,(%esp)
 81062cc:	e8 9f 82 f7 ff       	call   807e570 <puts@plt>
 81062d1:	b8 00 00 00 00       	mov    $0x0,%eax
 81062d6:	e9 9e 00 00 00       	jmp    8106379 <_ZN15CmmChannelProxy19ConnectBridgeServerEv+0x101>
 81062db:	66 c7 45 e4 02 00    	movw   $0x2,-0x1c(%ebp)
 81062e1:	8b 45 08             	mov    0x8(%ebp),%eax
 81062e4:	89 04 24             	mov    %eax,(%esp)
 81062e7:	e8 04 02 60 00       	call   87064f0 <_ZNKSs5c_strEv>
 81062ec:	89 04 24             	mov    %eax,(%esp)
 81062ef:	e8 3c 82 f7 ff       	call   807e530 <inet_addr@plt>
 81062f4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81062f7:	e8 85 5e fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81062fc:	89 04 24             	mov    %eax,(%esp)
 81062ff:	e8 ea 09 00 00       	call   8106cee <_ZN12CEnvironment20get_tcp_port_channelEv>
 8106304:	0f b7 c0             	movzwl %ax,%eax
 8106307:	89 04 24             	mov    %eax,(%esp)
 810630a:	e8 71 83 f7 ff       	call   807e680 <htons@plt>
 810630f:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 8106313:	c7 45 f4 10 00 00 00 	movl   $0x10,-0xc(%ebp)
 810631a:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 810631d:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8106320:	8b 45 08             	mov    0x8(%ebp),%eax
 8106323:	8b 40 18             	mov    0x18(%eax),%eax
 8106326:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 810632a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810632e:	89 04 24             	mov    %eax,(%esp)
 8106331:	e8 fa 7e f7 ff       	call   807e230 <connect@plt>
 8106336:	c1 e8 1f             	shr    $0x1f,%eax
 8106339:	84 c0                	test   %al,%al
 810633b:	74 13                	je     8106350 <_ZN15CmmChannelProxy19ConnectBridgeServerEv+0xd8>
 810633d:	c7 04 24 84 32 b4 08 	movl   $0x8b43284,(%esp)
 8106344:	e8 27 82 f7 ff       	call   807e570 <puts@plt>
 8106349:	b8 00 00 00 00       	mov    $0x0,%eax
 810634e:	eb 29                	jmp    8106379 <_ZN15CmmChannelProxy19ConnectBridgeServerEv+0x101>
 8106350:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 8106357:	8b 45 08             	mov    0x8(%ebp),%eax
 810635a:	8b 40 18             	mov    0x18(%eax),%eax
 810635d:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8106360:	89 54 24 08          	mov    %edx,0x8(%esp)
 8106364:	c7 44 24 04 21 54 00 	movl   $0x5421,0x4(%esp)
 810636b:	00 
 810636c:	89 04 24             	mov    %eax,(%esp)
 810636f:	e8 3c 7f f7 ff       	call   807e2b0 <ioctl@plt>
 8106374:	b8 01 00 00 00       	mov    $0x1,%eax
 8106379:	c9                   	leave
 810637a:	c3                   	ret
 810637b:	90                   	nop

```

```c
// CmmChannelProxy::ConnectBridgeServer @ 0x8106278

/* CmmChannelProxy::ConnectBridgeServer() */

undefined4 __thiscall CmmChannelProxy::ConnectBridgeServer(CmmChannelProxy *this)

{
  uint16_t __hostshort;
  int iVar1;
  undefined4 uVar2;
  char *__cp;
  CEnvironment *this_00;
  undefined4 local_24;
  sockaddr local_20;
  undefined4 local_10;
  
  memset(&local_20,0,0x10);
  iVar1 = socket(2,1,0);
  *(int *)(this + 0x18) = iVar1;
  if (*(int *)(this + 0x18) < 0) {
    puts("[CmmChannelProxy::SendCheckChannelScript] Can\'t create socket");
    uVar2 = 0;
  }
  else {
    local_20.sa_family = 2;
    __cp = (char *)std::string::c_str((string *)this);
    local_20.sa_data._2_4_ = inet_addr(__cp);
    this_00 = (CEnvironment *)G_CEnvironment();
    __hostshort = CEnvironment::get_tcp_port_channel(this_00);
    local_20.sa_data._0_2_ = htons(__hostshort);
    local_10 = 0x10;
    iVar1 = connect(*(int *)(this + 0x18),&local_20,0x10);
    if (iVar1 < 0) {
      puts("[CmmChannelProxy::SendCheckChannelScript] Can\'t connect channel bridge server");
      uVar2 = 0;
    }
    else {
      local_24 = 1;
      ioctl(*(int *)(this + 0x18),0x5421,&local_24);
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## Init

```asm
// === 0810614a CmmChannelProxy::Init  [0x0810614a-0x810619d] ===
 810614a:	55                   	push   %ebp
 810614b:	89 e5                	mov    %esp,%ebp
 810614d:	83 ec 18             	sub    $0x18,%esp
 8106150:	8b 45 08             	mov    0x8(%ebp),%eax
 8106153:	83 c0 10             	add    $0x10,%eax
 8106156:	89 04 24             	mov    %eax,(%esp)
 8106159:	e8 3c d5 37 00       	call   848369a <_ZN11CUdpHandler16InitClientSocketEv>
 810615e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8106161:	0f 94 c0             	sete   %al
 8106164:	84 c0                	test   %al,%al
 8106166:	74 07                	je     810616f <_ZN15CmmChannelProxy4InitEv+0x25>
 8106168:	b8 00 00 00 00       	mov    $0x0,%eax
 810616d:	eb 2d                	jmp    810619c <_ZN15CmmChannelProxy4InitEv+0x52>
 810616f:	8b 45 08             	mov    0x8(%ebp),%eax
 8106172:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8106179:	8b 45 08             	mov    0x8(%ebp),%eax
 810617c:	83 c0 20             	add    $0x20,%eax
 810617f:	c7 44 24 08 00 00 08 	movl   $0x80000,0x8(%esp)
 8106186:	00 
 8106187:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810618e:	00 
 810618f:	89 04 24             	mov    %eax,(%esp)
 8106192:	e8 29 7b f7 ff       	call   807dcc0 <memset@plt>
 8106197:	b8 01 00 00 00       	mov    $0x1,%eax
 810619c:	c9                   	leave
 810619d:	c3                   	ret

```

```c
// CmmChannelProxy::Init @ 0x810614a

/* CmmChannelProxy::Init() */

bool __thiscall CmmChannelProxy::Init(CmmChannelProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x10));
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x1c) = 0;
    memset(this + 0x20,0,0x80000);
  }
  return iVar1 != -1;
}

```

---

## RecvPacket

```asm
// === 0810645c CmmChannelProxy::RecvPacket  [0x0810645c-0x81066e9] ===
 810645c:	55                   	push   %ebp
 810645d:	89 e5                	mov    %esp,%ebp
 810645f:	57                   	push   %edi
 8106460:	56                   	push   %esi
 8106461:	53                   	push   %ebx
 8106462:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 8106468:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 810646f:	c7 45 ac 2c 01 00 00 	movl   $0x12c,-0x54(%ebp)
 8106476:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 810647d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8106484:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 810648a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810648d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8106494:	eb 11                	jmp    81064a7 <_ZN15CmmChannelProxy10RecvPacketEv+0x4b>
 8106496:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8106499:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810649c:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81064a3:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81064a7:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81064ab:	0f 96 c0             	setbe  %al
 81064ae:	84 c0                	test   %al,%al
 81064b0:	75 e4                	jne    8106496 <_ZN15CmmChannelProxy10RecvPacketEv+0x3a>
 81064b2:	8b 45 08             	mov    0x8(%ebp),%eax
 81064b5:	8b 40 18             	mov    0x18(%eax),%eax
 81064b8:	c1 e8 05             	shr    $0x5,%eax
 81064bb:	89 c2                	mov    %eax,%edx
 81064bd:	8b 9c 85 24 ff ff ff 	mov    -0xdc(%ebp,%eax,4),%ebx
 81064c4:	8b 45 08             	mov    0x8(%ebp),%eax
 81064c7:	8b 40 18             	mov    0x18(%eax),%eax
 81064ca:	83 e0 1f             	and    $0x1f,%eax
 81064cd:	be 01 00 00 00       	mov    $0x1,%esi
 81064d2:	89 f7                	mov    %esi,%edi
 81064d4:	89 c1                	mov    %eax,%ecx
 81064d6:	d3 e7                	shl    %cl,%edi
 81064d8:	89 f8                	mov    %edi,%eax
 81064da:	09 d8                	or     %ebx,%eax
 81064dc:	89 84 95 24 ff ff ff 	mov    %eax,-0xdc(%ebp,%edx,4)
 81064e3:	8b 45 08             	mov    0x8(%ebp),%eax
 81064e6:	8b 40 18             	mov    0x18(%eax),%eax
 81064e9:	8d 50 01             	lea    0x1(%eax),%edx
 81064ec:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81064ef:	89 44 24 10          	mov    %eax,0x10(%esp)
 81064f3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81064fa:	00 
 81064fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8106502:	00 
 8106503:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8106509:	89 44 24 04          	mov    %eax,0x4(%esp)
 810650d:	89 14 24             	mov    %edx,(%esp)
 8106510:	e8 2b 83 f7 ff       	call   807e840 <select@plt>
 8106515:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8106518:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 810651c:	7f 0a                	jg     8106528 <_ZN15CmmChannelProxy10RecvPacketEv+0xcc>
 810651e:	b8 00 00 00 00       	mov    $0x0,%eax
 8106523:	e9 b7 01 00 00       	jmp    81066df <_ZN15CmmChannelProxy10RecvPacketEv+0x283>
 8106528:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 810652f:	c7 45 a4 04 00 00 00 	movl   $0x4,-0x5c(%ebp)
 8106536:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8106539:	8b 45 08             	mov    0x8(%ebp),%eax
 810653c:	8b 40 18             	mov    0x18(%eax),%eax
 810653f:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 8106542:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8106546:	89 54 24 0c          	mov    %edx,0xc(%esp)
 810654a:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8106551:	00 
 8106552:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8106559:	00 
 810655a:	89 04 24             	mov    %eax,(%esp)
 810655d:	e8 7e 81 f7 ff       	call   807e6e0 <getsockopt@plt>
 8106562:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 8106569:	e8 72 5f 48 00       	call   858c4e0 <_ZN6OS_API5SleepEi>
 810656e:	8b 45 08             	mov    0x8(%ebp),%eax
 8106571:	8b 40 1c             	mov    0x1c(%eax),%eax
 8106574:	ba 00 00 08 00       	mov    $0x80000,%edx
 8106579:	89 d1                	mov    %edx,%ecx
 810657b:	29 c1                	sub    %eax,%ecx
 810657d:	89 c8                	mov    %ecx,%eax
 810657f:	89 c2                	mov    %eax,%edx
 8106581:	8b 45 08             	mov    0x8(%ebp),%eax
 8106584:	8d 48 20             	lea    0x20(%eax),%ecx
 8106587:	8b 45 08             	mov    0x8(%ebp),%eax
 810658a:	8b 40 1c             	mov    0x1c(%eax),%eax
 810658d:	01 c1                	add    %eax,%ecx
 810658f:	8b 45 08             	mov    0x8(%ebp),%eax
 8106592:	8b 40 18             	mov    0x18(%eax),%eax
 8106595:	89 54 24 08          	mov    %edx,0x8(%esp)
 8106599:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810659d:	89 04 24             	mov    %eax,(%esp)
 81065a0:	e8 bb 78 f7 ff       	call   807de60 <read@plt>
 81065a5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81065a8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81065ab:	c1 e8 1f             	shr    $0x1f,%eax
 81065ae:	84 c0                	test   %al,%al
 81065b0:	0f 84 a3 00 00 00    	je     8106659 <_ZN15CmmChannelProxy10RecvPacketEv+0x1fd>
 81065b6:	e8 b5 77 f7 ff       	call   807dd70 <__errno_location@plt>
 81065bb:	8b 00                	mov    (%eax),%eax
 81065bd:	83 f8 0b             	cmp    $0xb,%eax
 81065c0:	74 23                	je     81065e5 <_ZN15CmmChannelProxy10RecvPacketEv+0x189>
 81065c2:	e8 a9 77 f7 ff       	call   807dd70 <__errno_location@plt>
 81065c7:	8b 00                	mov    (%eax),%eax
 81065c9:	83 f8 04             	cmp    $0x4,%eax
 81065cc:	74 17                	je     81065e5 <_ZN15CmmChannelProxy10RecvPacketEv+0x189>
 81065ce:	e8 9d 77 f7 ff       	call   807dd70 <__errno_location@plt>
 81065d3:	8b 00                	mov    (%eax),%eax
 81065d5:	83 f8 0b             	cmp    $0xb,%eax
 81065d8:	74 0b                	je     81065e5 <_ZN15CmmChannelProxy10RecvPacketEv+0x189>
 81065da:	e8 91 77 f7 ff       	call   807dd70 <__errno_location@plt>
 81065df:	8b 00                	mov    (%eax),%eax
 81065e1:	85 c0                	test   %eax,%eax
 81065e3:	75 0a                	jne    81065ef <_ZN15CmmChannelProxy10RecvPacketEv+0x193>
 81065e5:	b8 00 00 00 00       	mov    $0x0,%eax
 81065ea:	e9 f0 00 00 00       	jmp    81066df <_ZN15CmmChannelProxy10RecvPacketEv+0x283>
 81065ef:	e8 7c 77 f7 ff       	call   807dd70 <__errno_location@plt>
 81065f4:	8b 00                	mov    (%eax),%eax
 81065f6:	89 04 24             	mov    %eax,(%esp)
 81065f9:	e8 32 71 f7 ff       	call   807d730 <strerror@plt>
 81065fe:	89 c3                	mov    %eax,%ebx
 8106600:	e8 6b 77 f7 ff       	call   807dd70 <__errno_location@plt>
 8106605:	8b 38                	mov    (%eax),%edi
 8106607:	8b 45 08             	mov    0x8(%ebp),%eax
 810660a:	8b 70 18             	mov    0x18(%eax),%esi
 810660d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8106614:	00 
 8106615:	c7 44 24 08 14 01 00 	movl   $0x114,0x8(%esp)
 810661c:	00 
 810661d:	c7 44 24 04 00 40 b4 	movl   $0x8b44000,0x4(%esp)
 8106624:	08 
 8106625:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8106628:	89 04 24             	mov    %eax,(%esp)
 810662b:	e8 e8 90 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8106630:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8106634:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8106638:	89 74 24 08          	mov    %esi,0x8(%esp)
 810663c:	c7 44 24 04 00 33 b4 	movl   $0x8b43300,0x4(%esp)
 8106643:	08 
 8106644:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8106647:	89 04 24             	mov    %eax,(%esp)
 810664a:	e8 39 91 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810664f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8106654:	e9 86 00 00 00       	jmp    81066df <_ZN15CmmChannelProxy10RecvPacketEv+0x283>
 8106659:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 810665d:	75 6c                	jne    81066cb <_ZN15CmmChannelProxy10RecvPacketEv+0x26f>
 810665f:	e8 0c 77 f7 ff       	call   807dd70 <__errno_location@plt>
 8106664:	8b 00                	mov    (%eax),%eax
 8106666:	89 04 24             	mov    %eax,(%esp)
 8106669:	e8 c2 70 f7 ff       	call   807d730 <strerror@plt>
 810666e:	89 c3                	mov    %eax,%ebx
 8106670:	e8 fb 76 f7 ff       	call   807dd70 <__errno_location@plt>
 8106675:	8b 30                	mov    (%eax),%esi
 8106677:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810667e:	00 
 810667f:	c7 44 24 08 1a 01 00 	movl   $0x11a,0x8(%esp)
 8106686:	00 
 8106687:	c7 44 24 04 00 40 b4 	movl   $0x8b44000,0x4(%esp)
 810668e:	08 
 810668f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8106692:	89 04 24             	mov    %eax,(%esp)
 8106695:	e8 7e 90 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810669a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 810669d:	89 44 24 14          	mov    %eax,0x14(%esp)
 81066a1:	c7 44 24 10 00 00 08 	movl   $0x80000,0x10(%esp)
 81066a8:	00 
 81066a9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81066ad:	89 74 24 08          	mov    %esi,0x8(%esp)
 81066b1:	c7 44 24 04 2c 33 b4 	movl   $0x8b4332c,0x4(%esp)
 81066b8:	08 
 81066b9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81066bc:	89 04 24             	mov    %eax,(%esp)
 81066bf:	e8 c4 90 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81066c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81066c9:	eb 14                	jmp    81066df <_ZN15CmmChannelProxy10RecvPacketEv+0x283>
 81066cb:	8b 45 08             	mov    0x8(%ebp),%eax
 81066ce:	8b 40 1c             	mov    0x1c(%eax),%eax
 81066d1:	89 c2                	mov    %eax,%edx
 81066d3:	03 55 dc             	add    -0x24(%ebp),%edx
 81066d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81066d9:	89 50 1c             	mov    %edx,0x1c(%eax)
 81066dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81066df:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 81066e5:	5b                   	pop    %ebx
 81066e6:	5e                   	pop    %esi
 81066e7:	5f                   	pop    %edi
 81066e8:	5d                   	pop    %ebp
 81066e9:	c3                   	ret

```

```c
// CmmChannelProxy::RecvPacket @ 0x810645c

/* WARNING: Type propagation algorithm not settling */
/* CmmChannelProxy::RecvPacket() */

ssize_t __thiscall CmmChannelProxy::RecvPacket(CmmChannelProxy *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  fd_set local_e0;
  socklen_t local_60 [2];
  timeval local_58;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  int local_30;
  undefined4 local_2c;
  ssize_t local_28;
  uint local_24;
  fd_set *local_20;
  
  local_30 = 0;
  local_58.tv_sec = 300;
  local_58.tv_usec = 0;
  local_2c = 0;
  local_20 = &local_e0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_e0.fds_bits[local_24] = 0;
  }
  local_e0.fds_bits[*(uint *)(this + 0x18) >> 5] =
       1 << ((byte)*(undefined4 *)(this + 0x18) & 0x1f) |
       local_e0.fds_bits[*(uint *)(this + 0x18) >> 5];
  local_30 = select(*(int *)(this + 0x18) + 1,&local_e0,(fd_set *)0x0,(fd_set *)0x0,&local_58);
  if (local_30 < 1) {
    local_28 = 0;
  }
  else {
    local_60[1] = 0;
    local_60[0] = 4;
    getsockopt(*(int *)(this + 0x18),1,8,local_60 + 1,local_60);
    OS_API::Sleep(100);
    local_28 = ::read(*(int *)(this + 0x18),this + *(int *)(this + 0x1c) + 0x20,
                      0x80000 - *(int *)(this + 0x1c));
    if (local_28 < 0) {
      piVar3 = __errno_location();
      if ((((*piVar3 != 0xb) && (piVar3 = __errno_location(), *piVar3 != 4)) &&
          (piVar3 = __errno_location(), *piVar3 != 0xb)) &&
         (piVar3 = __errno_location(), *piVar3 != 0)) {
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        uVar2 = *(undefined4 *)(this + 0x18);
        cMyTrace::cMyTrace(local_50,"int CmmChannelProxy::RecvPacket()",0x114,0);
        cMyTrace::operator()
                  (local_50,"RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)",uVar2,iVar1,pcVar4);
        return -1;
      }
      local_28 = 0;
    }
    else if (local_28 == 0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      cMyTrace::cMyTrace(local_40,"int CmmChannelProxy::RecvPacket()",0x11a,0);
      cMyTrace::operator()
                (local_40,"Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)",iVar1,pcVar4,0x80000,
                 local_28);
      local_28 = -1;
    }
    else {
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + local_28;
    }
  }
  return local_28;
}

```

---

## SendChannelInfo

```asm
// === 0810619e CmmChannelProxy::SendChannelInfo  [0x0810619e-0x8106277] ===
 810619e:	55                   	push   %ebp
 810619f:	89 e5                	mov    %esp,%ebp
 81061a1:	56                   	push   %esi
 81061a2:	53                   	push   %ebx
 81061a3:	83 ec 60             	sub    $0x60,%esp
 81061a6:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 81061a9:	89 04 24             	mov    %eax,(%esp)
 81061ac:	e8 4b 0a 00 00       	call   8106bfc <_ZN25tagCS_UPDATE_CHANNEL_INFOC1Ev>
 81061b1:	e8 cb 5f fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81061b6:	8b 80 98 01 00 00    	mov    0x198(%eax),%eax
 81061bc:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81061bf:	e8 bd 5f fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81061c4:	89 04 24             	mov    %eax,(%esp)
 81061c7:	e8 14 0b 00 00       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 81061cc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81061cf:	e8 ad 5f fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81061d4:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 81061da:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81061dd:	e8 9f 5f fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81061e2:	8b 80 c0 03 00 00    	mov    0x3c0(%eax),%eax
 81061e8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81061eb:	e8 b7 41 fd ff       	call   80da3a7 <_Z11G_GameWorldv>
 81061f0:	05 34 01 00 00       	add    $0x134,%eax
 81061f5:	89 04 24             	mov    %eax,(%esp)
 81061f8:	e8 ff 0a 00 00       	call   8106cfc <_ZNKSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE4sizeEv>
 81061fd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8106200:	e8 7c 5f fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8106205:	05 b4 01 00 00       	add    $0x1b4,%eax
 810620a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810620e:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8106211:	83 c0 1f             	add    $0x1f,%eax
 8106214:	89 04 24             	mov    %eax,(%esp)
 8106217:	e8 d4 7c f7 ff       	call   807def0 <strcpy@plt>
 810621c:	e8 60 5f fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8106221:	8b 80 c8 01 00 00    	mov    0x1c8(%eax),%eax
 8106227:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810622a:	8b 45 08             	mov    0x8(%ebp),%eax
 810622d:	89 04 24             	mov    %eax,(%esp)
 8106230:	e8 bb 02 60 00       	call   87064f0 <_ZNKSs5c_strEv>
 8106235:	89 c3                	mov    %eax,%ebx
 8106237:	8b 45 08             	mov    0x8(%ebp),%eax
 810623a:	8b 40 04             	mov    0x4(%eax),%eax
 810623d:	0f b7 f0             	movzwl %ax,%esi
 8106240:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8106243:	89 04 24             	mov    %eax,(%esp)
 8106246:	e8 81 09 00 00       	call   8106bcc <_ZN15tagPacketHeader7getSizeEv>
 810624b:	8b 55 08             	mov    0x8(%ebp),%edx
 810624e:	83 c2 10             	add    $0x10,%edx
 8106251:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8106255:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8106259:	89 44 24 08          	mov    %eax,0x8(%esp)
 810625d:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8106260:	89 44 24 04          	mov    %eax,0x4(%esp)
 8106264:	89 14 24             	mov    %edx,(%esp)
 8106267:	e8 fc d8 37 00       	call   8483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>
 810626c:	b8 01 00 00 00       	mov    $0x1,%eax
 8106271:	83 c4 60             	add    $0x60,%esp
 8106274:	5b                   	pop    %ebx
 8106275:	5e                   	pop    %esi
 8106276:	5d                   	pop    %ebp
 8106277:	c3                   	ret

```

```c
// CmmChannelProxy::SendChannelInfo @ 0x810619e

/* CmmChannelProxy::SendChannelInfo() */

undefined4 __thiscall CmmChannelProxy::SendChannelInfo(CmmChannelProxy *this)

{
  undefined4 uVar1;
  int iVar2;
  CEnvironment *this_00;
  char *pcVar3;
  tagCS_UPDATE_CHANNEL_INFO local_3f [11];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char acStack_20 [16];
  undefined4 local_10;
  
  tagCS_UPDATE_CHANNEL_INFO::tagCS_UPDATE_CHANNEL_INFO(local_3f);
  iVar2 = G_CEnvironment();
  local_34 = *(undefined4 *)(iVar2 + 0x198);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_30 = CEnvironment::get_server_group(this_00);
  iVar2 = G_CEnvironment();
  local_2c = *(undefined4 *)(iVar2 + 0x1b0);
  iVar2 = G_CEnvironment();
  local_28 = *(undefined4 *)(iVar2 + 0x3c0);
  iVar2 = G_GameWorld();
  local_24 = std::
             map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
             ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                     *)(iVar2 + 0x134));
  iVar2 = G_CEnvironment();
  strcpy(acStack_20,(char *)(iVar2 + 0x1b4));
  iVar2 = G_CEnvironment();
  local_10 = *(undefined4 *)(iVar2 + 0x1c8);
  pcVar3 = (char *)std::string::c_str((string *)this);
  uVar1 = *(undefined4 *)(this + 4);
  iVar2 = tagPacketHeader::getSize((tagPacketHeader *)local_3f);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 0x10),(char *)local_3f,iVar2,(ushort)uVar1,pcVar3);
  return 1;
}

```

---

## SendCheckChannelScript

```asm
// === 081066ea CmmChannelProxy::SendCheckChannelScript  [0x081066ea-0x8106b3d] ===
 81066ea:	55                   	push   %ebp
 81066eb:	89 e5                	mov    %esp,%ebp
 81066ed:	53                   	push   %ebx
 81066ee:	81 ec f4 04 00 00    	sub    $0x4f4,%esp
 81066f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81066f7:	89 04 24             	mov    %eax,(%esp)
 81066fa:	e8 79 fb ff ff       	call   8106278 <_ZN15CmmChannelProxy19ConnectBridgeServerEv>
 81066ff:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8106706:	00 
 8106707:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810670e:	00 
 810670f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8106712:	89 04 24             	mov    %eax,(%esp)
 8106715:	e8 a6 75 f7 ff       	call   807dcc0 <memset@plt>
 810671a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8106721:	00 
 8106722:	c7 44 24 04 5c 33 b4 	movl   $0x8b4335c,0x4(%esp)
 8106729:	08 
 810672a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 810672d:	89 04 24             	mov    %eax,(%esp)
 8106730:	e8 9b 71 f7 ff       	call   807d8d0 <strncpy@plt>
 8106735:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 810673b:	89 44 24 04          	mov    %eax,0x4(%esp)
 810673f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8106742:	89 04 24             	mov    %eax,(%esp)
 8106745:	e8 50 04 00 00       	call   8106b9a <stat>
 810674a:	c1 e8 1f             	shr    $0x1f,%eax
 810674d:	84 c0                	test   %al,%al
 810674f:	74 21                	je     8106772 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x88>
 8106751:	e8 1a 76 f7 ff       	call   807dd70 <__errno_location@plt>
 8106756:	8b 00                	mov    (%eax),%eax
 8106758:	83 f8 02             	cmp    $0x2,%eax
 810675b:	74 0a                	je     8106767 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x7d>
 810675d:	b8 00 00 00 00       	mov    $0x0,%eax
 8106762:	e9 ce 03 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 8106767:	8d 45 ac             	lea    -0x54(%ebp),%eax
 810676a:	89 04 24             	mov    %eax,(%esp)
 810676d:	e8 65 23 00 00       	call   8108ad7 <_ZN7DNFFLib8Make_DirEPc>
 8106772:	c7 44 24 04 69 33 b4 	movl   $0x8b43369,0x4(%esp)
 8106779:	08 
 810677a:	c7 04 24 6d 33 b4 08 	movl   $0x8b4336d,(%esp)
 8106781:	e8 ea 7f f7 ff       	call   807e770 <fopen@plt>
 8106786:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8106789:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 810678d:	0f 94 c0             	sete   %al
 8106790:	84 c0                	test   %al,%al
 8106792:	74 50                	je     81067e4 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0xfa>
 8106794:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 810679b:	00 
 810679c:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81067a3:	00 
 81067a4:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81067ab:	00 
 81067ac:	c7 44 24 08 43 01 00 	movl   $0x143,0x8(%esp)
 81067b3:	00 
 81067b4:	c7 44 24 04 c0 3f b4 	movl   $0x8b43fc0,0x4(%esp)
 81067bb:	08 
 81067bc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81067bf:	89 04 24             	mov    %eax,(%esp)
 81067c2:	e8 7f 8f 44 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81067c7:	c7 44 24 04 84 33 b4 	movl   $0x8b43384,0x4(%esp)
 81067ce:	08 
 81067cf:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81067d2:	89 04 24             	mov    %eax,(%esp)
 81067d5:	e8 ae 8f 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81067da:	b8 00 00 00 00       	mov    $0x0,%eax
 81067df:	e9 51 03 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 81067e4:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81067eb:	e9 80 00 00 00       	jmp    8106870 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x186>
 81067f0:	8d 85 2c fb ff ff    	lea    -0x4d4(%ebp),%eax
 81067f6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81067f9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81067fc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81067ff:	eb 04                	jmp    8106805 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x11b>
 8106801:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8106805:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8106808:	0f b6 00             	movzbl (%eax),%eax
 810680b:	3c 20                	cmp    $0x20,%al
 810680d:	74 0a                	je     8106819 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x12f>
 810680f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8106812:	0f b6 00             	movzbl (%eax),%eax
 8106815:	3c 09                	cmp    $0x9,%al
 8106817:	75 07                	jne    8106820 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x136>
 8106819:	b8 01 00 00 00       	mov    $0x1,%eax
 810681e:	eb 05                	jmp    8106825 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x13b>
 8106820:	b8 00 00 00 00       	mov    $0x0,%eax
 8106825:	84 c0                	test   %al,%al
 8106827:	75 d8                	jne    8106801 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x117>
 8106829:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810682c:	0f b6 10             	movzbl (%eax),%edx
 810682f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8106832:	88 10                	mov    %dl,(%eax)
 8106834:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8106838:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810683b:	0f b6 00             	movzbl (%eax),%eax
 810683e:	84 c0                	test   %al,%al
 8106840:	0f 95 c0             	setne  %al
 8106843:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8106847:	84 c0                	test   %al,%al
 8106849:	75 ba                	jne    8106805 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x11b>
 810684b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 810684e:	0f b6 84 05 2c fb ff 	movzbl -0x4d4(%ebp,%eax,1),%eax
 8106855:	ff 
 8106856:	3c 0a                	cmp    $0xa,%al
 8106858:	74 0f                	je     8106869 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x17f>
 810685a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 810685d:	0f b6 84 05 2c fb ff 	movzbl -0x4d4(%ebp,%eax,1),%eax
 8106864:	ff 
 8106865:	3c 23                	cmp    $0x23,%al
 8106867:	75 07                	jne    8106870 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x186>
 8106869:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8106870:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8106873:	89 44 24 08          	mov    %eax,0x8(%esp)
 8106877:	c7 44 24 04 00 04 00 	movl   $0x400,0x4(%esp)
 810687e:	00 
 810687f:	8d 85 2c fb ff ff    	lea    -0x4d4(%ebp),%eax
 8106885:	89 04 24             	mov    %eax,(%esp)
 8106888:	e8 d3 79 f7 ff       	call   807e260 <fgets@plt>
 810688d:	85 c0                	test   %eax,%eax
 810688f:	0f 95 c0             	setne  %al
 8106892:	84 c0                	test   %al,%al
 8106894:	0f 85 56 ff ff ff    	jne    81067f0 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x106>
 810689a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 810689d:	89 04 24             	mov    %eax,(%esp)
 81068a0:	e8 fb 75 f7 ff       	call   807dea0 <fclose@plt>
 81068a5:	8d 45 91             	lea    -0x6f(%ebp),%eax
 81068a8:	89 04 24             	mov    %eax,(%esp)
 81068ab:	e8 e4 03 00 00       	call   8106c94 <_ZN26tagCS_CHECK_SCRIPT_VERSIONC1Ev>
 81068b0:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81068b7:	00 
 81068b8:	8d 85 2c fb ff ff    	lea    -0x4d4(%ebp),%eax
 81068be:	89 44 24 04          	mov    %eax,0x4(%esp)
 81068c2:	8d 45 91             	lea    -0x6f(%ebp),%eax
 81068c5:	83 c0 0b             	add    $0xb,%eax
 81068c8:	89 04 24             	mov    %eax,(%esp)
 81068cb:	e8 00 70 f7 ff       	call   807d8d0 <strncpy@plt>
 81068d0:	8d 45 91             	lea    -0x6f(%ebp),%eax
 81068d3:	89 04 24             	mov    %eax,(%esp)
 81068d6:	e8 f1 02 00 00       	call   8106bcc <_ZN15tagPacketHeader7getSizeEv>
 81068db:	89 44 24 08          	mov    %eax,0x8(%esp)
 81068df:	8d 45 91             	lea    -0x6f(%ebp),%eax
 81068e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81068e6:	8b 45 08             	mov    0x8(%ebp),%eax
 81068e9:	89 04 24             	mov    %eax,(%esp)
 81068ec:	e8 8b fa ff ff       	call   810637c <_ZN15CmmChannelProxy10SendPacketEPci>
 81068f1:	85 c0                	test   %eax,%eax
 81068f3:	0f 94 c0             	sete   %al
 81068f6:	84 c0                	test   %al,%al
 81068f8:	74 0a                	je     8106904 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x21a>
 81068fa:	b8 00 00 00 00       	mov    $0x0,%eax
 81068ff:	e9 31 02 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 8106904:	8b 45 08             	mov    0x8(%ebp),%eax
 8106907:	89 04 24             	mov    %eax,(%esp)
 810690a:	e8 4d fb ff ff       	call   810645c <_ZN15CmmChannelProxy10RecvPacketEv>
 810690f:	85 c0                	test   %eax,%eax
 8106911:	0f 94 c0             	sete   %al
 8106914:	84 c0                	test   %al,%al
 8106916:	74 0a                	je     8106922 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x238>
 8106918:	b8 00 00 00 00       	mov    $0x0,%eax
 810691d:	e9 13 02 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 8106922:	8b 45 08             	mov    0x8(%ebp),%eax
 8106925:	83 c0 20             	add    $0x20,%eax
 8106928:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810692b:	eb 1e                	jmp    810694b <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x261>
 810692d:	8b 45 08             	mov    0x8(%ebp),%eax
 8106930:	89 04 24             	mov    %eax,(%esp)
 8106933:	e8 24 fb ff ff       	call   810645c <_ZN15CmmChannelProxy10RecvPacketEv>
 8106938:	85 c0                	test   %eax,%eax
 810693a:	0f 94 c0             	sete   %al
 810693d:	84 c0                	test   %al,%al
 810693f:	74 0a                	je     810694b <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x261>
 8106941:	b8 00 00 00 00       	mov    $0x0,%eax
 8106946:	e9 ea 01 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 810694b:	8b 45 08             	mov    0x8(%ebp),%eax
 810694e:	8b 58 1c             	mov    0x1c(%eax),%ebx
 8106951:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8106954:	89 04 24             	mov    %eax,(%esp)
 8106957:	e8 70 02 00 00       	call   8106bcc <_ZN15tagPacketHeader7getSizeEv>
 810695c:	39 c3                	cmp    %eax,%ebx
 810695e:	0f 95 c0             	setne  %al
 8106961:	84 c0                	test   %al,%al
 8106963:	75 c8                	jne    810692d <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x243>
 8106965:	c7 44 24 04 b9 33 b4 	movl   $0x8b433b9,0x4(%esp)
 810696c:	08 
 810696d:	c7 04 24 6d 33 b4 08 	movl   $0x8b4336d,(%esp)
 8106974:	e8 f7 7d f7 ff       	call   807e770 <fopen@plt>
 8106979:	89 45 e0             	mov    %eax,-0x20(%ebp)
 810697c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8106980:	0f 94 c0             	sete   %al
 8106983:	84 c0                	test   %al,%al
 8106985:	74 50                	je     81069d7 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x2ed>
 8106987:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 810698e:	00 
 810698f:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8106996:	00 
 8106997:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 810699e:	00 
 810699f:	c7 44 24 08 88 01 00 	movl   $0x188,0x8(%esp)
 81069a6:	00 
 81069a7:	c7 44 24 04 c0 3f b4 	movl   $0x8b43fc0,0x4(%esp)
 81069ae:	08 
 81069af:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81069b2:	89 04 24             	mov    %eax,(%esp)
 81069b5:	e8 8c 8d 44 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81069ba:	c7 44 24 04 84 33 b4 	movl   $0x8b43384,0x4(%esp)
 81069c1:	08 
 81069c2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81069c5:	89 04 24             	mov    %eax,(%esp)
 81069c8:	e8 bb 8d 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81069cd:	b8 00 00 00 00       	mov    $0x0,%eax
 81069d2:	e9 5e 01 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 81069d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81069da:	8d 50 0f             	lea    0xf(%eax),%edx
 81069dd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81069e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81069e4:	89 14 24             	mov    %edx,(%esp)
 81069e7:	e8 34 7d f7 ff       	call   807e720 <fputs@plt>
 81069ec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81069ef:	89 04 24             	mov    %eax,(%esp)
 81069f2:	e8 a9 74 f7 ff       	call   807dea0 <fclose@plt>
 81069f7:	8b 45 08             	mov    0x8(%ebp),%eax
 81069fa:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8106a01:	8b 45 08             	mov    0x8(%ebp),%eax
 8106a04:	83 c0 20             	add    $0x20,%eax
 8106a07:	c7 44 24 08 00 00 08 	movl   $0x80000,0x8(%esp)
 8106a0e:	00 
 8106a0f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8106a16:	00 
 8106a17:	89 04 24             	mov    %eax,(%esp)
 8106a1a:	e8 a1 72 f7 ff       	call   807dcc0 <memset@plt>
 8106a1f:	8d 45 86             	lea    -0x7a(%ebp),%eax
 8106a22:	89 04 24             	mov    %eax,(%esp)
 8106a25:	e8 1e 02 00 00       	call   8106c48 <_ZN16tagCS_GET_SCRIPTC1Ev>
 8106a2a:	8d 45 86             	lea    -0x7a(%ebp),%eax
 8106a2d:	89 04 24             	mov    %eax,(%esp)
 8106a30:	e8 97 01 00 00       	call   8106bcc <_ZN15tagPacketHeader7getSizeEv>
 8106a35:	89 44 24 08          	mov    %eax,0x8(%esp)
 8106a39:	8d 45 86             	lea    -0x7a(%ebp),%eax
 8106a3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8106a40:	8b 45 08             	mov    0x8(%ebp),%eax
 8106a43:	89 04 24             	mov    %eax,(%esp)
 8106a46:	e8 31 f9 ff ff       	call   810637c <_ZN15CmmChannelProxy10SendPacketEPci>
 8106a4b:	85 c0                	test   %eax,%eax
 8106a4d:	0f 94 c0             	sete   %al
 8106a50:	84 c0                	test   %al,%al
 8106a52:	74 0a                	je     8106a5e <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x374>
 8106a54:	b8 00 00 00 00       	mov    $0x0,%eax
 8106a59:	e9 d7 00 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 8106a5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8106a61:	89 04 24             	mov    %eax,(%esp)
 8106a64:	e8 f3 f9 ff ff       	call   810645c <_ZN15CmmChannelProxy10RecvPacketEv>
 8106a69:	85 c0                	test   %eax,%eax
 8106a6b:	0f 94 c0             	sete   %al
 8106a6e:	84 c0                	test   %al,%al
 8106a70:	74 0a                	je     8106a7c <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x392>
 8106a72:	b8 00 00 00 00       	mov    $0x0,%eax
 8106a77:	e9 b9 00 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 8106a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8106a7f:	83 c0 20             	add    $0x20,%eax
 8106a82:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8106a85:	eb 1e                	jmp    8106aa5 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x3bb>
 8106a87:	8b 45 08             	mov    0x8(%ebp),%eax
 8106a8a:	89 04 24             	mov    %eax,(%esp)
 8106a8d:	e8 ca f9 ff ff       	call   810645c <_ZN15CmmChannelProxy10RecvPacketEv>
 8106a92:	85 c0                	test   %eax,%eax
 8106a94:	0f 94 c0             	sete   %al
 8106a97:	84 c0                	test   %al,%al
 8106a99:	74 0a                	je     8106aa5 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x3bb>
 8106a9b:	b8 00 00 00 00       	mov    $0x0,%eax
 8106aa0:	e9 90 00 00 00       	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 8106aa5:	8b 45 08             	mov    0x8(%ebp),%eax
 8106aa8:	8b 58 1c             	mov    0x1c(%eax),%ebx
 8106aab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8106aae:	89 04 24             	mov    %eax,(%esp)
 8106ab1:	e8 16 01 00 00       	call   8106bcc <_ZN15tagPacketHeader7getSizeEv>
 8106ab6:	39 c3                	cmp    %eax,%ebx
 8106ab8:	0f 95 c0             	setne  %al
 8106abb:	84 c0                	test   %al,%al
 8106abd:	75 c8                	jne    8106a87 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x39d>
 8106abf:	c7 44 24 04 bd 33 b4 	movl   $0x8b433bd,0x4(%esp)
 8106ac6:	08 
 8106ac7:	c7 04 24 c0 33 b4 08 	movl   $0x8b433c0,(%esp)
 8106ace:	e8 9d 7c f7 ff       	call   807e770 <fopen@plt>
 8106ad3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8106ad6:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8106ada:	0f 94 c0             	sete   %al
 8106add:	84 c0                	test   %al,%al
 8106adf:	74 07                	je     8106ae8 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x3fe>
 8106ae1:	b8 00 00 00 00       	mov    $0x0,%eax
 8106ae6:	eb 4d                	jmp    8106b35 <_ZN15CmmChannelProxy22SendCheckChannelScriptEv+0x44b>
 8106ae8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8106aeb:	89 04 24             	mov    %eax,(%esp)
 8106aee:	e8 d9 00 00 00       	call   8106bcc <_ZN15tagPacketHeader7getSizeEv>
 8106af3:	8d 48 f5             	lea    -0xb(%eax),%ecx
 8106af6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8106af9:	8d 50 0b             	lea    0xb(%eax),%edx
 8106afc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8106aff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8106b03:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8106b07:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8106b0e:	00 
 8106b0f:	89 14 24             	mov    %edx,(%esp)
 8106b12:	e8 09 78 f7 ff       	call   807e320 <fwrite@plt>
 8106b17:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8106b1a:	89 04 24             	mov    %eax,(%esp)
 8106b1d:	e8 7e 73 f7 ff       	call   807dea0 <fclose@plt>
 8106b22:	8b 45 08             	mov    0x8(%ebp),%eax
 8106b25:	8b 40 18             	mov    0x18(%eax),%eax
 8106b28:	89 04 24             	mov    %eax,(%esp)
 8106b2b:	e8 30 6d f7 ff       	call   807d860 <close@plt>
 8106b30:	b8 01 00 00 00       	mov    $0x1,%eax
 8106b35:	81 c4 f4 04 00 00    	add    $0x4f4,%esp
 8106b3b:	5b                   	pop    %ebx
 8106b3c:	5d                   	pop    %ebp
 8106b3d:	c3                   	ret

```

```c
// CmmChannelProxy::SendCheckChannelScript @ 0x81066ea

/* CmmChannelProxy::SendCheckChannelScript() */

undefined4 __thiscall CmmChannelProxy::SendCheckChannelScript(CmmChannelProxy *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char local_4d8 [1024];
  stat local_d8;
  tagCS_GET_SCRIPT local_7e [11];
  tagCS_CHECK_SCRIPT_VERSION local_73 [11];
  char acStack_68 [16];
  char local_58 [20];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  FILE *local_24;
  tagPacketHeader *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  tagPacketHeader *local_10;
  
  ConnectBridgeServer(this);
  memset(local_58,0,0x14);
  strncpy(local_58,"channel_info",0x14);
  iVar3 = stat(local_58,&local_d8);
  if (iVar3 < 0) {
    piVar4 = __errno_location();
    if (*piVar4 != 2) {
      return 0;
    }
    DNFFLib::Make_Dir(local_58);
  }
  local_24 = fopen("channel_info/version","wb+");
  if (local_24 == (FILE *)0x0) {
    cMyTrace::cMyTrace(local_44,"bool CmmChannelProxy::SendCheckChannelScript()",0x143,9,true,true);
    cMyTrace::operator()(local_44,"\t- [ERROR] : cannt open channel_script_version file\n");
    return 0;
  }
  local_1c = 0;
  while (pcVar5 = fgets(local_4d8,0x400,local_24), pcVar5 != (char *)0x0) {
    local_18 = local_4d8;
    local_14 = local_18;
    do {
      while( true ) {
        if ((*local_18 == ' ') || (*local_18 == '\t')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) break;
        local_18 = local_18 + 1;
      }
      *local_14 = *local_18;
      local_14 = local_14 + 1;
      cVar1 = *local_18;
      local_18 = local_18 + 1;
    } while (cVar1 != '\0');
    if ((local_4d8[local_1c] == '\n') || (local_4d8[local_1c] == '#')) {
      local_1c = 0;
    }
  }
  fclose(local_24);
  tagCS_CHECK_SCRIPT_VERSION::tagCS_CHECK_SCRIPT_VERSION(local_73);
  strncpy(acStack_68,local_4d8,0x10);
  iVar3 = tagPacketHeader::getSize((tagPacketHeader *)local_73);
  iVar3 = SendPacket(this,(char *)local_73,iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = RecvPacket(this);
  if (iVar3 == 0) {
    return 0;
  }
  local_20 = (tagPacketHeader *)(this + 0x20);
  while (iVar3 = *(int *)(this + 0x1c), iVar6 = tagPacketHeader::getSize(local_20), iVar3 != iVar6)
  {
    iVar3 = RecvPacket(this);
    if (iVar3 == 0) {
      return 0;
    }
  }
  local_24 = fopen("channel_info/version","rb+");
  if (local_24 == (FILE *)0x0) {
    cMyTrace::cMyTrace(local_34,"bool CmmChannelProxy::SendCheckChannelScript()",0x188,9,true,true);
    cMyTrace::operator()(local_34,"\t- [ERROR] : cannt open channel_script_version file\n");
    return 0;
  }
  fputs((char *)(local_20 + 0xf),local_24);
  fclose(local_24);
  *(undefined4 *)(this + 0x1c) = 0;
  memset(this + 0x20,0,0x80000);
  tagCS_GET_SCRIPT::tagCS_GET_SCRIPT(local_7e);
  iVar3 = tagPacketHeader::getSize((tagPacketHeader *)local_7e);
  iVar3 = SendPacket(this,(char *)local_7e,iVar3);
  if (iVar3 != 0) {
    iVar3 = RecvPacket(this);
    if (iVar3 == 0) {
      return 0;
    }
    local_10 = (tagPacketHeader *)(this + 0x20);
    do {
      iVar3 = *(int *)(this + 0x1c);
      iVar6 = tagPacketHeader::getSize(local_10);
      if (iVar3 == iVar6) {
        local_24 = fopen("channel_info/channel_info.etc","w+");
        if (local_24 == (FILE *)0x0) {
          return 0;
        }
        iVar3 = tagPacketHeader::getSize(local_10);
        fwrite(local_10 + 0xb,1,iVar3 - 0xb,local_24);
        fclose(local_24);
        close(*(int *)(this + 0x18));
        return 1;
      }
      iVar3 = RecvPacket(this);
    } while (iVar3 != 0);
    return 0;
  }
  return 0;
}

```

---

## SendPacket

```asm
// === 0810637c CmmChannelProxy::SendPacket  [0x0810637c-0x810645b] ===
 810637c:	55                   	push   %ebp
 810637d:	89 e5                	mov    %esp,%ebp
 810637f:	57                   	push   %edi
 8106380:	56                   	push   %esi
 8106381:	53                   	push   %ebx
 8106382:	83 ec 4c             	sub    $0x4c,%esp
 8106385:	8b 55 10             	mov    0x10(%ebp),%edx
 8106388:	8b 45 08             	mov    0x8(%ebp),%eax
 810638b:	8b 40 18             	mov    0x18(%eax),%eax
 810638e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8106392:	8b 55 0c             	mov    0xc(%ebp),%edx
 8106395:	89 54 24 04          	mov    %edx,0x4(%esp)
 8106399:	89 04 24             	mov    %eax,(%esp)
 810639c:	e8 8f 84 f7 ff       	call   807e830 <write@plt>
 81063a1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81063a4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81063a8:	0f 9e c0             	setle  %al
 81063ab:	84 c0                	test   %al,%al
 81063ad:	0f 84 9d 00 00 00    	je     8106450 <_ZN15CmmChannelProxy10SendPacketEPci+0xd4>
 81063b3:	e8 b8 79 f7 ff       	call   807dd70 <__errno_location@plt>
 81063b8:	8b 00                	mov    (%eax),%eax
 81063ba:	83 f8 0b             	cmp    $0xb,%eax
 81063bd:	74 23                	je     81063e2 <_ZN15CmmChannelProxy10SendPacketEPci+0x66>
 81063bf:	e8 ac 79 f7 ff       	call   807dd70 <__errno_location@plt>
 81063c4:	8b 00                	mov    (%eax),%eax
 81063c6:	83 f8 04             	cmp    $0x4,%eax
 81063c9:	74 17                	je     81063e2 <_ZN15CmmChannelProxy10SendPacketEPci+0x66>
 81063cb:	e8 a0 79 f7 ff       	call   807dd70 <__errno_location@plt>
 81063d0:	8b 00                	mov    (%eax),%eax
 81063d2:	83 f8 0b             	cmp    $0xb,%eax
 81063d5:	74 0b                	je     81063e2 <_ZN15CmmChannelProxy10SendPacketEPci+0x66>
 81063d7:	e8 94 79 f7 ff       	call   807dd70 <__errno_location@plt>
 81063dc:	8b 00                	mov    (%eax),%eax
 81063de:	85 c0                	test   %eax,%eax
 81063e0:	75 07                	jne    81063e9 <_ZN15CmmChannelProxy10SendPacketEPci+0x6d>
 81063e2:	b8 00 00 00 00       	mov    $0x0,%eax
 81063e7:	eb 6a                	jmp    8106453 <_ZN15CmmChannelProxy10SendPacketEPci+0xd7>
 81063e9:	e8 82 79 f7 ff       	call   807dd70 <__errno_location@plt>
 81063ee:	8b 00                	mov    (%eax),%eax
 81063f0:	89 04 24             	mov    %eax,(%esp)
 81063f3:	e8 38 73 f7 ff       	call   807d730 <strerror@plt>
 81063f8:	89 c3                	mov    %eax,%ebx
 81063fa:	e8 71 79 f7 ff       	call   807dd70 <__errno_location@plt>
 81063ff:	8b 38                	mov    (%eax),%edi
 8106401:	8b 45 08             	mov    0x8(%ebp),%eax
 8106404:	8b 70 18             	mov    0x18(%eax),%esi
 8106407:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810640e:	00 
 810640f:	c7 44 24 08 c8 00 00 	movl   $0xc8,0x8(%esp)
 8106416:	00 
 8106417:	c7 44 24 04 40 40 b4 	movl   $0x8b44040,0x4(%esp)
 810641e:	08 
 810641f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8106422:	89 04 24             	mov    %eax,(%esp)
 8106425:	e8 ee 92 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810642a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 810642e:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8106432:	89 74 24 08          	mov    %esi,0x8(%esp)
 8106436:	c7 44 24 04 d4 32 b4 	movl   $0x8b432d4,0x4(%esp)
 810643d:	08 
 810643e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8106441:	89 04 24             	mov    %eax,(%esp)
 8106444:	e8 3f 93 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8106449:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 810644e:	eb 03                	jmp    8106453 <_ZN15CmmChannelProxy10SendPacketEPci+0xd7>
 8106450:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8106453:	83 c4 4c             	add    $0x4c,%esp
 8106456:	5b                   	pop    %ebx
 8106457:	5e                   	pop    %esi
 8106458:	5f                   	pop    %edi
 8106459:	5d                   	pop    %ebp
 810645a:	c3                   	ret
 810645b:	90                   	nop

```

```c
// CmmChannelProxy::SendPacket @ 0x810637c

/* CmmChannelProxy::SendPacket(char*, int) */

ssize_t __thiscall CmmChannelProxy::SendPacket(CmmChannelProxy *this,char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  cMyTrace local_30 [16];
  ssize_t local_20;
  
  local_20 = write(*(int *)(this + 0x18),param_1,param_2);
  if (local_20 < 1) {
    piVar3 = __errno_location();
    if ((((*piVar3 == 0xb) || (piVar3 = __errno_location(), *piVar3 == 4)) ||
        (piVar3 = __errno_location(), *piVar3 == 0xb)) ||
       (piVar3 = __errno_location(), *piVar3 == 0)) {
      local_20 = 0;
    }
    else {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      uVar2 = *(undefined4 *)(this + 0x18);
      cMyTrace::cMyTrace(local_30,"int CmmChannelProxy::SendPacket(char*, int)",200,0);
      cMyTrace::operator()(local_30,"SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)",uVar2,iVar1,pcVar4)
      ;
      local_20 = -1;
    }
  }
  return local_20;
}

```

