# XNuclear__CHades

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## AddHackTypeCnt

```asm
// === 084b9328 XNuclear::CHades::AddHackTypeCnt  [0x084b9328-0x84b9385] ===
 84b9328:	55                   	push   %ebp
 84b9329:	89 e5                	mov    %esp,%ebp
 84b932b:	83 ec 38             	sub    $0x38,%esp
 84b932e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9331:	89 04 24             	mov    %eax,(%esp)
 84b9334:	e8 df 03 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b9339:	8d 45 de             	lea    -0x22(%ebp),%eax
 84b933c:	89 04 24             	mov    %eax,(%esp)
 84b933f:	e8 4a 06 00 00       	call   84b998e <_ZN24Packet_Hades_AddHackTypeC1Ev>
 84b9344:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9347:	8b 40 20             	mov    0x20(%eax),%eax
 84b934a:	89 04 24             	mov    %eax,(%esp)
 84b934d:	e8 1c 10 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b9352:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84b9355:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9358:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 84b935c:	8b 45 10             	mov    0x10(%ebp),%eax
 84b935f:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 84b9363:	8b 45 14             	mov    0x14(%ebp),%eax
 84b9366:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b9369:	8b 45 18             	mov    0x18(%ebp),%eax
 84b936c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b936f:	8d 55 de             	lea    -0x22(%ebp),%edx
 84b9372:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b9377:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b937b:	89 04 24             	mov    %eax,(%esp)
 84b937e:	e8 cf 73 fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b9383:	c9                   	leave
 84b9384:	c3                   	ret
 84b9385:	90                   	nop

```

```c
// XNuclear::CHades::AddHackTypeCnt @ 0x84b9328

/* XNuclear::CHades::AddHackTypeCnt(unsigned long, unsigned long, unsigned long, unsigned long) */

void __thiscall
XNuclear::CHades::AddHackTypeCnt
          (CHades *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  Packet_Hades_AddHackType local_26 [10];
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  ulong local_14;
  ulong local_10;
  
  needLogin(this);
  Packet_Hades_AddHackType::Packet_Hades_AddHackType(local_26);
  local_1c = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_18 = (undefined2)param_1;
  local_16 = (undefined2)param_2;
  local_14 = param_3;
  local_10 = param_4;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_26);
  return;
}

```

---

## ChangeSecurity

```asm
// === 084b95a8 XNuclear::CHades::ChangeSecurity  [0x084b95a8-0x84b95bb] ===
 84b95a8:	55                   	push   %ebp
 84b95a9:	89 e5                	mov    %esp,%ebp
 84b95ab:	83 ec 18             	sub    $0x18,%esp
 84b95ae:	8b 45 08             	mov    0x8(%ebp),%eax
 84b95b1:	89 04 24             	mov    %eax,(%esp)
 84b95b4:	e8 5f 01 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b95b9:	c9                   	leave
 84b95ba:	c3                   	ret
 84b95bb:	90                   	nop

```

```c
// XNuclear::CHades::ChangeSecurity @ 0x84b95a8

/* XNuclear::CHades::ChangeSecurity(XNuclear::ENUM_HADES_SECURITY, unsigned int) */

void XNuclear::CHades::ChangeSecurity(CHades *param_1)

{
  needLogin(param_1);
  return;
}

```

---

## ExpUp

```asm
// === 084b953e XNuclear::CHades::ExpUp  [0x084b953e-0x84b9551] ===
 84b953e:	55                   	push   %ebp
 84b953f:	89 e5                	mov    %esp,%ebp
 84b9541:	83 ec 18             	sub    $0x18,%esp
 84b9544:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9547:	89 04 24             	mov    %eax,(%esp)
 84b954a:	e8 c9 01 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b954f:	c9                   	leave
 84b9550:	c3                   	ret
 84b9551:	90                   	nop

```

```c
// XNuclear::CHades::ExpUp @ 0x84b953e

/* XNuclear::CHades::ExpUp(unsigned int) */

void XNuclear::CHades::ExpUp(uint param_1)

{
  needLogin((CHades *)param_1);
  return;
}

```

---

## GetIP

```asm
// === 084b9774 XNuclear::CHades::GetIP  [0x084b9774-0x84b97fd] ===
 84b9774:	55                   	push   %ebp
 84b9775:	89 e5                	mov    %esp,%ebp
 84b9777:	83 ec 18             	sub    $0x18,%esp
 84b977a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b977d:	8b 40 20             	mov    0x20(%eax),%eax
 84b9780:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 84b9786:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84b978d:	00 
 84b978e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9791:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b9795:	89 14 24             	mov    %edx,(%esp)
 84b9798:	e8 91 90 ca ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 84b979d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b97a0:	0f b6 00             	movzbl (%eax),%eax
 84b97a3:	84 c0                	test   %al,%al
 84b97a5:	75 51                	jne    84b97f8 <_ZN8XNuclear6CHades5GetIPEPc+0x84>
 84b97a7:	8b 45 08             	mov    0x8(%ebp),%eax
 84b97aa:	8b 40 20             	mov    0x20(%eax),%eax
 84b97ad:	05 18 e4 08 00       	add    $0x8e418,%eax
 84b97b2:	0f b6 00             	movzbl (%eax),%eax
 84b97b5:	84 c0                	test   %al,%al
 84b97b7:	74 42                	je     84b97fb <_ZN8XNuclear6CHades5GetIPEPc+0x87>
 84b97b9:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84b97c0:	00 
 84b97c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b97c8:	00 
 84b97c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b97cc:	89 04 24             	mov    %eax,(%esp)
 84b97cf:	e8 ec 44 bc ff       	call   807dcc0 <memset@plt>
 84b97d4:	8b 45 08             	mov    0x8(%ebp),%eax
 84b97d7:	8b 40 20             	mov    0x20(%eax),%eax
 84b97da:	05 18 e4 08 00       	add    $0x8e418,%eax
 84b97df:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84b97e6:	00 
 84b97e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b97eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b97ee:	89 04 24             	mov    %eax,(%esp)
 84b97f1:	e8 da 40 bc ff       	call   807d8d0 <strncpy@plt>
 84b97f6:	eb 04                	jmp    84b97fc <_ZN8XNuclear6CHades5GetIPEPc+0x88>
 84b97f8:	90                   	nop
 84b97f9:	eb 01                	jmp    84b97fc <_ZN8XNuclear6CHades5GetIPEPc+0x88>
 84b97fb:	90                   	nop
 84b97fc:	c9                   	leave
 84b97fd:	c3                   	ret

```

```c
// XNuclear::CHades::GetIP @ 0x84b9774

/* XNuclear::CHades::GetIP(char*) */

void __thiscall XNuclear::CHades::GetIP(CHades *this,char *param_1)

{
  CNetwork<4096,450000>::GetPeerIP2
            ((CNetwork<4096,450000> *)(*(int *)(this + 0x20) + 0xe0),param_1,4);
  if ((*param_1 == '\0') && (*(char *)(*(int *)(this + 0x20) + 0x8e418) != '\0')) {
    memset(param_1,0,0x10);
    strncpy(param_1,(char *)(*(int *)(this + 0x20) + 0x8e418),0x10);
  }
  return;
}

```

---

## GoldMinus

```asm
// === 084b944a XNuclear::CHades::GoldMinus  [0x084b944a-0x84b9499] ===
 84b944a:	55                   	push   %ebp
 84b944b:	89 e5                	mov    %esp,%ebp
 84b944d:	83 ec 38             	sub    $0x38,%esp
 84b9450:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9453:	89 04 24             	mov    %eax,(%esp)
 84b9456:	e8 bd 02 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b945b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b945e:	89 04 24             	mov    %eax,(%esp)
 84b9461:	e8 70 05 00 00       	call   84b99d6 <_ZN23Packet_Hades_Gold_MinusC1Ev>
 84b9466:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9469:	8b 40 20             	mov    0x20(%eax),%eax
 84b946c:	89 04 24             	mov    %eax,(%esp)
 84b946f:	e8 fa 0e c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b9474:	89 45 ee             	mov    %eax,-0x12(%ebp)
 84b9477:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b947a:	89 45 f2             	mov    %eax,-0xe(%ebp)
 84b947d:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9480:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 84b9484:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84b9487:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b948c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b9490:	89 04 24             	mov    %eax,(%esp)
 84b9493:	e8 ba 72 fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b9498:	c9                   	leave
 84b9499:	c3                   	ret

```

```c
// XNuclear::CHades::GoldMinus @ 0x84b944a

/* XNuclear::CHades::GoldMinus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON) */

void __thiscall XNuclear::CHades::GoldMinus(CHades *this,undefined4 param_1,undefined2 param_3)

{
  Packet_Hades_Gold_Minus local_20 [10];
  undefined4 local_16;
  undefined4 local_12;
  undefined2 local_e;
  
  needLogin(this);
  Packet_Hades_Gold_Minus::Packet_Hades_Gold_Minus(local_20);
  local_16 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_12 = param_1;
  local_e = param_3;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_20);
  return;
}

```

---

## GoldPlus

```asm
// === 084b93fa XNuclear::CHades::GoldPlus  [0x084b93fa-0x84b9449] ===
 84b93fa:	55                   	push   %ebp
 84b93fb:	89 e5                	mov    %esp,%ebp
 84b93fd:	83 ec 38             	sub    $0x38,%esp
 84b9400:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9403:	89 04 24             	mov    %eax,(%esp)
 84b9406:	e8 0d 03 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b940b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b940e:	89 04 24             	mov    %eax,(%esp)
 84b9411:	e8 9c 05 00 00       	call   84b99b2 <_ZN22Packet_Hades_Gold_PlusC1Ev>
 84b9416:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9419:	8b 40 20             	mov    0x20(%eax),%eax
 84b941c:	89 04 24             	mov    %eax,(%esp)
 84b941f:	e8 4a 0f c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b9424:	89 45 ee             	mov    %eax,-0x12(%ebp)
 84b9427:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b942a:	89 45 f2             	mov    %eax,-0xe(%ebp)
 84b942d:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9430:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 84b9434:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84b9437:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b943c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b9440:	89 04 24             	mov    %eax,(%esp)
 84b9443:	e8 0a 73 fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b9448:	c9                   	leave
 84b9449:	c3                   	ret

```

```c
// XNuclear::CHades::GoldPlus @ 0x84b93fa

/* XNuclear::CHades::GoldPlus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON) */

void __thiscall XNuclear::CHades::GoldPlus(CHades *this,undefined4 param_1,undefined2 param_3)

{
  Packet_Hades_Gold_Plus local_20 [10];
  undefined4 local_16;
  undefined4 local_12;
  undefined2 local_e;
  
  needLogin(this);
  Packet_Hades_Gold_Plus::Packet_Hades_Gold_Plus(local_20);
  local_16 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_12 = param_1;
  local_e = param_3;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_20);
  return;
}

```

---

## GoldTracking

```asm
// === 084b949a XNuclear::CHades::GoldTracking  [0x084b949a-0x84b953d] ===
 84b949a:	55                   	push   %ebp
 84b949b:	89 e5                	mov    %esp,%ebp
 84b949d:	83 ec 58             	sub    $0x58,%esp
 84b94a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b94a3:	88 45 c4             	mov    %al,-0x3c(%ebp)
 84b94a6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b94a9:	89 04 24             	mov    %eax,(%esp)
 84b94ac:	e8 67 02 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b94b1:	8d 45 cf             	lea    -0x31(%ebp),%eax
 84b94b4:	89 04 24             	mov    %eax,(%esp)
 84b94b7:	e8 3e 05 00 00       	call   84b99fa <_ZN25Packet_Hades_GoldTrackingC1Ev>
 84b94bc:	8b 45 08             	mov    0x8(%ebp),%eax
 84b94bf:	8b 40 20             	mov    0x20(%eax),%eax
 84b94c2:	89 04 24             	mov    %eax,(%esp)
 84b94c5:	e8 a4 0e c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b94ca:	89 45 d9             	mov    %eax,-0x27(%ebp)
 84b94cd:	8b 45 10             	mov    0x10(%ebp),%eax
 84b94d0:	89 45 dd             	mov    %eax,-0x23(%ebp)
 84b94d3:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84b94da:	00 
 84b94db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b94e2:	00 
 84b94e3:	8d 45 cf             	lea    -0x31(%ebp),%eax
 84b94e6:	83 c0 12             	add    $0x12,%eax
 84b94e9:	89 04 24             	mov    %eax,(%esp)
 84b94ec:	e8 cf 47 bc ff       	call   807dcc0 <memset@plt>
 84b94f1:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 84b94f5:	74 1d                	je     84b9514 <_ZN8XNuclear6CHades12GoldTrackingEhjPcjj+0x7a>
 84b94f7:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84b94fe:	00 
 84b94ff:	8b 45 14             	mov    0x14(%ebp),%eax
 84b9502:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b9506:	8d 45 cf             	lea    -0x31(%ebp),%eax
 84b9509:	83 c0 12             	add    $0x12,%eax
 84b950c:	89 04 24             	mov    %eax,(%esp)
 84b950f:	e8 bc 43 bc ff       	call   807d8d0 <strncpy@plt>
 84b9514:	8b 45 18             	mov    0x18(%ebp),%eax
 84b9517:	89 45 f1             	mov    %eax,-0xf(%ebp)
 84b951a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 84b951d:	66 89 45 f5          	mov    %ax,-0xb(%ebp)
 84b9521:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 84b9525:	88 45 f7             	mov    %al,-0x9(%ebp)
 84b9528:	8d 55 cf             	lea    -0x31(%ebp),%edx
 84b952b:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b9530:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b9534:	89 04 24             	mov    %eax,(%esp)
 84b9537:	e8 16 72 fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b953c:	c9                   	leave
 84b953d:	c3                   	ret

```

```c
// XNuclear::CHades::GoldTracking @ 0x84b949a

/* XNuclear::CHades::GoldTracking(unsigned char, unsigned int, char*, unsigned int, unsigned int) */

void __thiscall
XNuclear::CHades::GoldTracking
          (CHades *this,uchar param_1,uint param_2,char *param_3,uint param_4,uint param_5)

{
  Packet_Hades_GoldTracking local_35 [10];
  undefined4 local_2b;
  uint local_27;
  char acStack_23 [16];
  uint local_13;
  undefined2 local_f;
  uchar local_d;
  
  needLogin(this);
  Packet_Hades_GoldTracking::Packet_Hades_GoldTracking(local_35);
  local_2b = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_27 = param_2;
  memset(acStack_23,0,0x10);
  if (param_3 != (char *)0x0) {
    strncpy(acStack_23,param_3,0x10);
  }
  local_13 = param_4;
  local_f = (undefined2)param_5;
  local_d = param_1;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_35);
  return;
}

```

---

## Init

```asm
// === 084b91e8 XNuclear::CHades::Init  [0x084b91e8-0x84b91ff] ===
 84b91e8:	55                   	push   %ebp
 84b91e9:	89 e5                	mov    %esp,%ebp
 84b91eb:	8b 45 08             	mov    0x8(%ebp),%eax
 84b91ee:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b91f1:	89 50 20             	mov    %edx,0x20(%eax)
 84b91f4:	8b 45 08             	mov    0x8(%ebp),%eax
 84b91f7:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 84b91fe:	5d                   	pop    %ebp
 84b91ff:	c3                   	ret

```

```c
// XNuclear::CHades::Init @ 0x84b91e8

/* XNuclear::CHades::Init(CUser*) */

void __thiscall XNuclear::CHades::Init(CHades *this,CUser *param_1)

{
  *(CUser **)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}

```

---

## RunHadesAction

```asm
// === 084b95bc XNuclear::CHades::RunHadesAction  [0x084b95bc-0x84b9717] ===
 84b95bc:	55                   	push   %ebp
 84b95bd:	89 e5                	mov    %esp,%ebp
 84b95bf:	83 ec 28             	sub    $0x28,%esp
 84b95c2:	83 7d 0c 40          	cmpl   $0x40,0xc(%ebp)
 84b95c6:	74 30                	je     84b95f8 <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc+0x3c>
 84b95c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b95cb:	8b 40 20             	mov    0x20(%eax),%eax
 84b95ce:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 84b95d4:	8b 45 18             	mov    0x18(%ebp),%eax
 84b95d7:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b95db:	8b 45 14             	mov    0x14(%ebp),%eax
 84b95de:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b95e2:	8b 45 10             	mov    0x10(%ebp),%eax
 84b95e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b95e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b95ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b95f0:	89 14 24             	mov    %edx,(%esp)
 84b95f3:	e8 20 be 1c 00       	call   8685418 <_ZN15cUserHistoryLog15HadesHistoryLogEjjjj>
 84b95f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b95fb:	83 e0 02             	and    $0x2,%eax
 84b95fe:	85 c0                	test   %eax,%eax
 84b9600:	74 5e                	je     84b9660 <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc+0xa4>
 84b9602:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9605:	8b 40 20             	mov    0x20(%eax),%eax
 84b9608:	89 04 24             	mov    %eax,(%esp)
 84b960b:	e8 82 04 00 00       	call   84b9a92 <_ZN5CUser15setHackUserFlagEv>
 84b9610:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9613:	8b 40 20             	mov    0x20(%eax),%eax
 84b9616:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84b961d:	00 
 84b961e:	89 04 24             	mov    %eax,(%esp)
 84b9621:	e8 6a 02 1d 00       	call   8689890 <_ZN5CUser18SetTradePunishTypeEi>
 84b9626:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9629:	8b 40 20             	mov    0x20(%eax),%eax
 84b962c:	89 04 24             	mov    %eax,(%esp)
 84b962f:	e8 3a 0d c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b9634:	8b 55 1c             	mov    0x1c(%ebp),%edx
 84b9637:	89 54 24 14          	mov    %edx,0x14(%esp)
 84b963b:	8b 55 18             	mov    0x18(%ebp),%edx
 84b963e:	89 54 24 10          	mov    %edx,0x10(%esp)
 84b9642:	8b 55 14             	mov    0x14(%ebp),%edx
 84b9645:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b9649:	8b 55 10             	mov    0x10(%ebp),%edx
 84b964c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b9650:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84b9657:	00 
 84b9658:	89 04 24             	mov    %eax,(%esp)
 84b965b:	e8 74 c7 f8 ff       	call   8445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>
 84b9660:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9663:	83 e0 01             	and    $0x1,%eax
 84b9666:	84 c0                	test   %al,%al
 84b9668:	74 1c                	je     84b9686 <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc+0xca>
 84b966a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b966d:	8b 40 20             	mov    0x20(%eax),%eax
 84b9670:	89 04 24             	mov    %eax,(%esp)
 84b9673:	e8 d4 66 d7 ff       	call   822fd4c <_ZNK5CUser15isHackUserTimerEv>
 84b9678:	83 f0 01             	xor    $0x1,%eax
 84b967b:	84 c0                	test   %al,%al
 84b967d:	74 07                	je     84b9686 <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc+0xca>
 84b967f:	b8 01 00 00 00       	mov    $0x1,%eax
 84b9684:	eb 05                	jmp    84b968b <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc+0xcf>
 84b9686:	b8 00 00 00 00       	mov    $0x0,%eax
 84b968b:	84 c0                	test   %al,%al
 84b968d:	74 56                	je     84b96e5 <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc+0x129>
 84b968f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9692:	8b 40 20             	mov    0x20(%eax),%eax
 84b9695:	89 04 24             	mov    %eax,(%esp)
 84b9698:	e8 f5 03 00 00       	call   84b9a92 <_ZN5CUser15setHackUserFlagEv>
 84b969d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b96a0:	8b 40 20             	mov    0x20(%eax),%eax
 84b96a3:	89 04 24             	mov    %eax,(%esp)
 84b96a6:	e8 d7 03 00 00       	call   84b9a82 <_ZN5CUser16setHackUserTimerEv>
 84b96ab:	8b 45 08             	mov    0x8(%ebp),%eax
 84b96ae:	8b 40 20             	mov    0x20(%eax),%eax
 84b96b1:	89 04 24             	mov    %eax,(%esp)
 84b96b4:	e8 b5 0c c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b96b9:	8b 55 1c             	mov    0x1c(%ebp),%edx
 84b96bc:	89 54 24 14          	mov    %edx,0x14(%esp)
 84b96c0:	8b 55 18             	mov    0x18(%ebp),%edx
 84b96c3:	89 54 24 10          	mov    %edx,0x10(%esp)
 84b96c7:	8b 55 14             	mov    0x14(%ebp),%edx
 84b96ca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b96ce:	8b 55 10             	mov    0x10(%ebp),%edx
 84b96d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b96d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b96dc:	00 
 84b96dd:	89 04 24             	mov    %eax,(%esp)
 84b96e0:	e8 ef c6 f8 ff       	call   8445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>
 84b96e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b96e8:	83 e0 04             	and    $0x4,%eax
 84b96eb:	85 c0                	test   %eax,%eax
 84b96ed:	74 26                	je     84b9715 <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc+0x159>
 84b96ef:	8b 45 08             	mov    0x8(%ebp),%eax
 84b96f2:	8b 40 20             	mov    0x20(%eax),%eax
 84b96f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84b96fc:	00 
 84b96fd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84b9704:	00 
 84b9705:	c7 44 24 04 39 00 00 	movl   $0x39,0x4(%esp)
 84b970c:	00 
 84b970d:	89 04 24             	mov    %eax,(%esp)
 84b9710:	e8 df f2 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84b9715:	c9                   	leave
 84b9716:	c3                   	ret
 84b9717:	90                   	nop

```

```c
// XNuclear::CHades::RunHadesAction @ 0x84b95bc

/* XNuclear::CHades::RunHadesAction(unsigned int, unsigned int, unsigned int, unsigned int, char*)
    */

void __thiscall
XNuclear::CHades::RunHadesAction
          (CHades *this,uint param_1,uint param_2,uint param_3,uint param_4,char *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  
  if (param_1 != 0x40) {
    cUserHistoryLog::HadesHistoryLog
              ((cUserHistoryLog *)(*(int *)(this + 0x20) + 0x79700),param_1,param_2,param_3,param_4)
    ;
  }
  if ((param_1 & 2) != 0) {
    CUser::setHackUserFlag(*(CUser **)(this + 0x20));
    CUser::SetTradePunishType(*(CUser **)(this + 0x20),4);
    uVar3 = CUser::get_acc_id(*(CUser **)(this + 0x20));
    DB_HadesPunish::makeRequest(uVar3,2,param_2,param_3,param_4,param_5);
  }
  if ((param_1 & 1) != 0) {
    cVar2 = CUser::isHackUserTimer(*(CUser **)(this + 0x20));
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_084b968b;
    }
  }
  bVar1 = false;
LAB_084b968b:
  if (bVar1) {
    CUser::setHackUserFlag(*(CUser **)(this + 0x20));
    CUser::setHackUserTimer(*(CUser **)(this + 0x20));
    uVar3 = CUser::get_acc_id(*(CUser **)(this + 0x20));
    DB_HadesPunish::makeRequest(uVar3,1,param_2,param_3,param_4,param_5);
  }
  if ((param_1 & 4) != 0) {
    CUser::DisConnSig(*(CUser **)(this + 0x20),0x39,1,0);
  }
  return;
}

```

---

## Send_ChangeGold

```asm
// === 084b93ee XNuclear::CHades::Send_ChangeGold  [0x084b93ee-0x84b93f3] ===
 84b93ee:	55                   	push   %ebp
 84b93ef:	89 e5                	mov    %esp,%ebp
 84b93f1:	5d                   	pop    %ebp
 84b93f2:	c3                   	ret
 84b93f3:	90                   	nop

```

```c
// XNuclear::CHades::Send_ChangeGold @ 0x84b93ee

/* XNuclear::CHades::Send_ChangeGold() */

void XNuclear::CHades::Send_ChangeGold(void)

{
  return;
}

```

---

## Send_ChangeSecurity

```asm
// === 084b93f4 XNuclear::CHades::Send_ChangeSecurity  [0x084b93f4-0x84b93f9] ===
 84b93f4:	55                   	push   %ebp
 84b93f5:	89 e5                	mov    %esp,%ebp
 84b93f7:	5d                   	pop    %ebp
 84b93f8:	c3                   	ret
 84b93f9:	90                   	nop

```

```c
// XNuclear::CHades::Send_ChangeSecurity @ 0x84b93f4

/* XNuclear::CHades::Send_ChangeSecurity(XNuclear::ENUM_HADES_SECURITY) */

void XNuclear::CHades::Send_ChangeSecurity(void)

{
  return;
}

```

---

## Send_HackType

```asm
// === 084b9322 XNuclear::CHades::Send_HackType  [0x084b9322-0x84b9327] ===
 84b9322:	55                   	push   %ebp
 84b9323:	89 e5                	mov    %esp,%ebp
 84b9325:	5d                   	pop    %ebp
 84b9326:	c3                   	ret
 84b9327:	90                   	nop

```

```c
// XNuclear::CHades::Send_HackType @ 0x84b9322

/* XNuclear::CHades::Send_HackType() */

void XNuclear::CHades::Send_HackType(void)

{
  return;
}

```

---

## Send_Login

```asm
// === 084b9200 XNuclear::CHades::Send_Login  [0x084b9200-0x84b92e9] ===
 84b9200:	55                   	push   %ebp
 84b9201:	89 e5                	mov    %esp,%ebp
 84b9203:	81 ec 98 00 00 00    	sub    $0x98,%esp
 84b9209:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b920e:	89 04 24             	mov    %eax,(%esp)
 84b9211:	e8 9c 08 00 00       	call   84b9ab2 <_ZN17CHadesServerProxy21GetHadesSocketConnSecEv>
 84b9216:	8b 55 08             	mov    0x8(%ebp),%edx
 84b9219:	89 42 24             	mov    %eax,0x24(%edx)
 84b921c:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84b921f:	89 04 24             	mov    %eax,(%esp)
 84b9222:	e8 1f 07 00 00       	call   84b9946 <_ZN18Packet_Hades_LoginC1Ev>
 84b9227:	8b 45 08             	mov    0x8(%ebp),%eax
 84b922a:	8b 40 20             	mov    0x20(%eax),%eax
 84b922d:	89 04 24             	mov    %eax,(%esp)
 84b9230:	e8 39 11 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b9235:	89 45 8e             	mov    %eax,-0x72(%ebp)
 84b9238:	e8 44 2f c1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84b923d:	89 04 24             	mov    %eax,(%esp)
 84b9240:	e8 85 18 c9 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84b9245:	88 45 e3             	mov    %al,-0x1d(%ebp)
 84b9248:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84b924f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84b9256:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84b925d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84b9264:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b9267:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b926b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b926e:	89 04 24             	mov    %eax,(%esp)
 84b9271:	e8 fe 04 00 00       	call   84b9774 <_ZN8XNuclear6CHades5GetIPEPc>
 84b9276:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84b9279:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b927d:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84b9280:	83 c0 0e             	add    $0xe,%eax
 84b9283:	89 04 24             	mov    %eax,(%esp)
 84b9286:	e8 65 4c bc ff       	call   807def0 <strcpy@plt>
 84b928b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b928e:	8b 40 20             	mov    0x20(%eax),%eax
 84b9291:	05 e0 00 00 00       	add    $0xe0,%eax
 84b9296:	89 04 24             	mov    %eax,(%esp)
 84b9299:	e8 b2 ed dc ff       	call   8288050 <_ZNK8CNetworkILi4096ELi450000EE12get_mac_addrEv>
 84b929e:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 84b92a5:	00 
 84b92a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b92aa:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84b92ad:	83 c0 1e             	add    $0x1e,%eax
 84b92b0:	89 04 24             	mov    %eax,(%esp)
 84b92b3:	e8 18 46 bc ff       	call   807d8d0 <strncpy@plt>
 84b92b8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b92bb:	8b 40 20             	mov    0x20(%eax),%eax
 84b92be:	89 04 24             	mov    %eax,(%esp)
 84b92c1:	e8 d0 f9 c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84b92c6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84b92c9:	8d 55 84             	lea    -0x7c(%ebp),%edx
 84b92cc:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b92d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b92d5:	89 04 24             	mov    %eax,(%esp)
 84b92d8:	e8 75 74 fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b92dd:	8b 45 08             	mov    0x8(%ebp),%eax
 84b92e0:	89 04 24             	mov    %eax,(%esp)
 84b92e3:	e8 16 05 00 00       	call   84b97fe <_ZN8XNuclear6CHades15Send_UserStatusEv>
 84b92e8:	c9                   	leave
 84b92e9:	c3                   	ret

```

```c
// XNuclear::CHades::Send_Login @ 0x84b9200

/* XNuclear::CHades::Send_Login() */

void __thiscall XNuclear::CHades::Send_Login(CHades *this)

{
  undefined4 uVar1;
  CEnvironment *this_00;
  char *__src;
  Packet_Hades_Login local_80 [10];
  undefined4 local_76;
  char acStack_72 [16];
  char acStack_62 [65];
  undefined1 local_21;
  undefined4 local_20;
  char local_1c [24];
  
  uVar1 = CHadesServerProxy::GetHadesSocketConnSec(GlobalData::s_hades_proxy);
  *(undefined4 *)(this + 0x24) = uVar1;
  Packet_Hades_Login::Packet_Hades_Login(local_80);
  local_76 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  this_00 = (CEnvironment *)G_CEnvironment();
  local_21 = CEnvironment::get_channel_no(this_00);
  local_1c[0] = '\0';
  local_1c[1] = '\0';
  local_1c[2] = '\0';
  local_1c[3] = '\0';
  local_1c[4] = '\0';
  local_1c[5] = '\0';
  local_1c[6] = '\0';
  local_1c[7] = '\0';
  local_1c[8] = '\0';
  local_1c[9] = '\0';
  local_1c[10] = '\0';
  local_1c[0xb] = '\0';
  local_1c[0xc] = '\0';
  local_1c[0xd] = '\0';
  local_1c[0xe] = '\0';
  local_1c[0xf] = '\0';
  GetIP(this,local_1c);
  strcpy(acStack_72,local_1c);
  __src = (char *)CNetwork<4096,450000>::get_mac_addr
                            ((CNetwork<4096,450000> *)(*(int *)(this + 0x20) + 0xe0));
  strncpy(acStack_62,__src,0x41);
  local_20 = CUser::GetUID(*(CUser **)(this + 0x20));
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_80);
  Send_UserStatus(this);
  return;
}

```

---

## Send_Logout

```asm
// === 084b92ea XNuclear::CHades::Send_Logout  [0x084b92ea-0x84b9321] ===
 84b92ea:	55                   	push   %ebp
 84b92eb:	89 e5                	mov    %esp,%ebp
 84b92ed:	83 ec 28             	sub    $0x28,%esp
 84b92f0:	8d 45 ea             	lea    -0x16(%ebp),%eax
 84b92f3:	89 04 24             	mov    %eax,(%esp)
 84b92f6:	e8 6f 06 00 00       	call   84b996a <_ZN19Packet_Hades_LogoutC1Ev>
 84b92fb:	8b 45 08             	mov    0x8(%ebp),%eax
 84b92fe:	8b 40 20             	mov    0x20(%eax),%eax
 84b9301:	89 04 24             	mov    %eax,(%esp)
 84b9304:	e8 65 10 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b9309:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b930c:	8d 55 ea             	lea    -0x16(%ebp),%edx
 84b930f:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b9314:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b9318:	89 04 24             	mov    %eax,(%esp)
 84b931b:	e8 32 74 fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b9320:	c9                   	leave
 84b9321:	c3                   	ret

```

```c
// XNuclear::CHades::Send_Logout @ 0x84b92ea

/* XNuclear::CHades::Send_Logout() */

void __thiscall XNuclear::CHades::Send_Logout(CHades *this)

{
  Packet_Hades_Logout local_1a [10];
  undefined4 local_10;
  
  Packet_Hades_Logout::Packet_Hades_Logout(local_1a);
  local_10 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_1a);
  return;
}

```

---

## Send_ReturnToVillage

```asm
// === 084b9386 XNuclear::CHades::Send_ReturnToVillage  [0x084b9386-0x84b938b] ===
 84b9386:	55                   	push   %ebp
 84b9387:	89 e5                	mov    %esp,%ebp
 84b9389:	5d                   	pop    %ebp
 84b938a:	c3                   	ret
 84b938b:	90                   	nop

```

```c
// XNuclear::CHades::Send_ReturnToVillage @ 0x84b9386

/* XNuclear::CHades::Send_ReturnToVillage() */

void XNuclear::CHades::Send_ReturnToVillage(void)

{
  return;
}

```

---

## Send_UserStatus

```asm
// === 084b97fe XNuclear::CHades::Send_UserStatus  [0x084b97fe-0x84b98e9] ===
 84b97fe:	55                   	push   %ebp
 84b97ff:	89 e5                	mov    %esp,%ebp
 84b9801:	83 ec 38             	sub    $0x38,%esp
 84b9804:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 84b9807:	89 04 24             	mov    %eax,(%esp)
 84b980a:	e8 0f 02 00 00       	call   84b9a1e <_ZN23Packet_Hades_UserStatusC1Ev>
 84b980f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9812:	8b 40 20             	mov    0x20(%eax),%eax
 84b9815:	89 04 24             	mov    %eax,(%esp)
 84b9818:	e8 51 0b c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b981d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b9820:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84b9827:	8b 45 08             	mov    0x8(%ebp),%eax
 84b982a:	8b 40 20             	mov    0x20(%eax),%eax
 84b982d:	89 04 24             	mov    %eax,(%esp)
 84b9830:	e8 6d 02 00 00       	call   84b9aa2 <_ZN5CUser11getSecuTypeEv>
 84b9835:	0f b6 c0             	movzbl %al,%eax
 84b9838:	83 e0 01             	and    $0x1,%eax
 84b983b:	84 c0                	test   %al,%al
 84b983d:	75 30                	jne    84b986f <_ZN8XNuclear6CHades15Send_UserStatusEv+0x71>
 84b983f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9842:	8b 40 20             	mov    0x20(%eax),%eax
 84b9845:	89 04 24             	mov    %eax,(%esp)
 84b9848:	e8 55 02 00 00       	call   84b9aa2 <_ZN5CUser11getSecuTypeEv>
 84b984d:	0f b6 c0             	movzbl %al,%eax
 84b9850:	83 e0 02             	and    $0x2,%eax
 84b9853:	85 c0                	test   %eax,%eax
 84b9855:	75 18                	jne    84b986f <_ZN8XNuclear6CHades15Send_UserStatusEv+0x71>
 84b9857:	8b 45 08             	mov    0x8(%ebp),%eax
 84b985a:	8b 40 20             	mov    0x20(%eax),%eax
 84b985d:	89 04 24             	mov    %eax,(%esp)
 84b9860:	e8 3d 02 00 00       	call   84b9aa2 <_ZN5CUser11getSecuTypeEv>
 84b9865:	0f b6 c0             	movzbl %al,%eax
 84b9868:	83 e0 20             	and    $0x20,%eax
 84b986b:	85 c0                	test   %eax,%eax
 84b986d:	74 07                	je     84b9876 <_ZN8XNuclear6CHades15Send_UserStatusEv+0x78>
 84b986f:	b8 01 00 00 00       	mov    $0x1,%eax
 84b9874:	eb 05                	jmp    84b987b <_ZN8XNuclear6CHades15Send_UserStatusEv+0x7d>
 84b9876:	b8 00 00 00 00       	mov    $0x0,%eax
 84b987b:	84 c0                	test   %al,%al
 84b987d:	74 09                	je     84b9888 <_ZN8XNuclear6CHades15Send_UserStatusEv+0x8a>
 84b987f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b9882:	83 c8 01             	or     $0x1,%eax
 84b9885:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b9888:	8b 45 08             	mov    0x8(%ebp),%eax
 84b988b:	8b 40 20             	mov    0x20(%eax),%eax
 84b988e:	89 04 24             	mov    %eax,(%esp)
 84b9891:	e8 0c 02 00 00       	call   84b9aa2 <_ZN5CUser11getSecuTypeEv>
 84b9896:	0f b6 c0             	movzbl %al,%eax
 84b9899:	83 e0 08             	and    $0x8,%eax
 84b989c:	85 c0                	test   %eax,%eax
 84b989e:	0f 95 c0             	setne  %al
 84b98a1:	84 c0                	test   %al,%al
 84b98a3:	74 09                	je     84b98ae <_ZN8XNuclear6CHades15Send_UserStatusEv+0xb0>
 84b98a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b98a8:	83 c8 02             	or     $0x2,%eax
 84b98ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b98ae:	8b 45 08             	mov    0x8(%ebp),%eax
 84b98b1:	8b 40 20             	mov    0x20(%eax),%eax
 84b98b4:	89 04 24             	mov    %eax,(%esp)
 84b98b7:	e8 e6 01 00 00       	call   84b9aa2 <_ZN5CUser11getSecuTypeEv>
 84b98bc:	0f b6 c0             	movzbl %al,%eax
 84b98bf:	83 e0 10             	and    $0x10,%eax
 84b98c2:	85 c0                	test   %eax,%eax
 84b98c4:	0f 95 c0             	setne  %al
 84b98c7:	84 c0                	test   %al,%al
 84b98c9:	74 09                	je     84b98d4 <_ZN8XNuclear6CHades15Send_UserStatusEv+0xd6>
 84b98cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b98ce:	83 c8 04             	or     $0x4,%eax
 84b98d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b98d4:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 84b98d7:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b98dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b98e0:	89 04 24             	mov    %eax,(%esp)
 84b98e3:	e8 6a 6e fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b98e8:	c9                   	leave
 84b98e9:	c3                   	ret

```

```c
// XNuclear::CHades::Send_UserStatus @ 0x84b97fe

/* XNuclear::CHades::Send_UserStatus() */

void __thiscall XNuclear::CHades::Send_UserStatus(CHades *this)

{
  bool bVar1;
  uint uVar2;
  Packet_Hades_UserStatus local_1e [10];
  undefined4 local_14;
  uint local_10;
  
  Packet_Hades_UserStatus::Packet_Hades_UserStatus(local_1e);
  local_14 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_10 = 0;
  uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
  if ((uVar2 & 1) == 0) {
    uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
    if ((uVar2 & 2) == 0) {
      uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
      if ((uVar2 & 0x20) == 0) {
        bVar1 = false;
        goto LAB_084b987b;
      }
    }
  }
  bVar1 = true;
LAB_084b987b:
  if (bVar1) {
    local_10 = local_10 | 1;
  }
  uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
  if ((uVar2 & 8) != 0) {
    local_10 = local_10 | 2;
  }
  uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
  if ((uVar2 & 0x10) != 0) {
    local_10 = local_10 | 4;
  }
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_1e);
  return;
}

```

---

## StdCateUpdate

```asm
// === 084b938c XNuclear::CHades::StdCateUpdate  [0x084b938c-0x84b93ed] ===
 84b938c:	55                   	push   %ebp
 84b938d:	89 e5                	mov    %esp,%ebp
 84b938f:	83 ec 48             	sub    $0x48,%esp
 84b9392:	8b 55 0c             	mov    0xc(%ebp),%edx
 84b9395:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9398:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 84b939c:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 84b93a0:	8b 45 08             	mov    0x8(%ebp),%eax
 84b93a3:	89 04 24             	mov    %eax,(%esp)
 84b93a6:	e8 6d 03 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b93ab:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 84b93ae:	89 04 24             	mov    %eax,(%esp)
 84b93b1:	e8 8c 06 00 00       	call   84b9a42 <_ZN22Packet_Hades_StdUpdateC1Ev>
 84b93b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b93b9:	8b 40 20             	mov    0x20(%eax),%eax
 84b93bc:	89 04 24             	mov    %eax,(%esp)
 84b93bf:	e8 aa 0f c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b93c4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b93c7:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 84b93cb:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 84b93cf:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 84b93d3:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 84b93d7:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 84b93da:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b93df:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b93e3:	89 04 24             	mov    %eax,(%esp)
 84b93e6:	e8 67 73 fb ff       	call   8470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>
 84b93eb:	c9                   	leave
 84b93ec:	c3                   	ret
 84b93ed:	90                   	nop

```

```c
// XNuclear::CHades::StdCateUpdate @ 0x84b938c

/* XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short) */

void __thiscall XNuclear::CHades::StdCateUpdate(CHades *this,ushort param_1,ushort param_2)

{
  Packet_Hades_StdUpdate local_1e [10];
  undefined4 local_14;
  ushort local_10;
  ushort local_e;
  
  needLogin(this);
  Packet_Hades_StdUpdate::Packet_Hades_StdUpdate(local_1e);
  local_14 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_10 = param_1;
  local_e = param_2;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_1e);
  return;
}

```

---

## UseFatigue

```asm
// === 084b9552 XNuclear::CHades::UseFatigue  [0x084b9552-0x84b95a7] ===
 84b9552:	55                   	push   %ebp
 84b9553:	89 e5                	mov    %esp,%ebp
 84b9555:	83 ec 18             	sub    $0x18,%esp
 84b9558:	8b 45 08             	mov    0x8(%ebp),%eax
 84b955b:	89 04 24             	mov    %eax,(%esp)
 84b955e:	e8 b5 01 00 00       	call   84b9718 <_ZN8XNuclear6CHades9needLoginEv>
 84b9563:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9566:	8b 40 1c             	mov    0x1c(%eax),%eax
 84b9569:	8d 50 01             	lea    0x1(%eax),%edx
 84b956c:	8b 45 08             	mov    0x8(%ebp),%eax
 84b956f:	89 50 1c             	mov    %edx,0x1c(%eax)
 84b9572:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9575:	8b 40 1c             	mov    0x1c(%eax),%eax
 84b9578:	83 f8 01             	cmp    $0x1,%eax
 84b957b:	76 27                	jbe    84b95a4 <_ZN8XNuclear6CHades10UseFatigueEj+0x52>
 84b957d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b9584:	00 
 84b9585:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b958c:	00 
 84b958d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9590:	89 04 24             	mov    %eax,(%esp)
 84b9593:	e8 f4 fd ff ff       	call   84b938c <_ZN8XNuclear6CHades13StdCateUpdateEtt>
 84b9598:	8b 45 08             	mov    0x8(%ebp),%eax
 84b959b:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 84b95a2:	eb 01                	jmp    84b95a5 <_ZN8XNuclear6CHades10UseFatigueEj+0x53>
 84b95a4:	90                   	nop
 84b95a5:	c9                   	leave
 84b95a6:	c3                   	ret
 84b95a7:	90                   	nop

```

```c
// XNuclear::CHades::UseFatigue @ 0x84b9552

/* XNuclear::CHades::UseFatigue(unsigned int) */

void XNuclear::CHades::UseFatigue(uint param_1)

{
  needLogin((CHades *)param_1);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (1 < *(uint *)(param_1 + 0x1c)) {
    StdCateUpdate((CHades *)param_1,1,0);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

```

---

## needLogin

```asm
// === 084b9718 XNuclear::CHades::needLogin  [0x084b9718-0x84b9773] ===
 84b9718:	55                   	push   %ebp
 84b9719:	89 e5                	mov    %esp,%ebp
 84b971b:	53                   	push   %ebx
 84b971c:	83 ec 14             	sub    $0x14,%esp
 84b971f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9722:	8b 58 24             	mov    0x24(%eax),%ebx
 84b9725:	a1 34 be 40 09       	mov    0x940be34,%eax
 84b972a:	89 04 24             	mov    %eax,(%esp)
 84b972d:	e8 80 03 00 00       	call   84b9ab2 <_ZN17CHadesServerProxy21GetHadesSocketConnSecEv>
 84b9732:	39 c3                	cmp    %eax,%ebx
 84b9734:	0f 95 c0             	setne  %al
 84b9737:	84 c0                	test   %al,%al
 84b9739:	74 2d                	je     84b9768 <_ZN8XNuclear6CHades9needLoginEv+0x50>
 84b973b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b973e:	89 04 24             	mov    %eax,(%esp)
 84b9741:	e8 ba fa ff ff       	call   84b9200 <_ZN8XNuclear6CHades10Send_LoginEv>
 84b9746:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b974d:	00 
 84b974e:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84b9755:	00 
 84b9756:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9759:	89 04 24             	mov    %eax,(%esp)
 84b975c:	e8 2b fc ff ff       	call   84b938c <_ZN8XNuclear6CHades13StdCateUpdateEtt>
 84b9761:	b8 01 00 00 00       	mov    $0x1,%eax
 84b9766:	eb 05                	jmp    84b976d <_ZN8XNuclear6CHades9needLoginEv+0x55>
 84b9768:	b8 00 00 00 00       	mov    $0x0,%eax
 84b976d:	83 c4 14             	add    $0x14,%esp
 84b9770:	5b                   	pop    %ebx
 84b9771:	5d                   	pop    %ebp
 84b9772:	c3                   	ret
 84b9773:	90                   	nop

```

```c
// XNuclear::CHades::needLogin @ 0x84b9718

/* XNuclear::CHades::needLogin() */

bool __thiscall XNuclear::CHades::needLogin(CHades *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x24);
  iVar2 = CHadesServerProxy::GetHadesSocketConnSec(GlobalData::s_hades_proxy);
  if (iVar1 != iVar2) {
    Send_Login(this);
    StdCateUpdate(this,3,0);
  }
  return iVar1 != iVar2;
}

```

