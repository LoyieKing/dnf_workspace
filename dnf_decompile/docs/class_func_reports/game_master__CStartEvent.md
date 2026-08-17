# game_master__CStartEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## execute

```asm
// === 084ab886 game_master::CStartEvent::execute  [0x084ab886-0x84ab913] ===
 84ab886:	55                   	push   %ebp
 84ab887:	89 e5                	mov    %esp,%ebp
 84ab889:	53                   	push   %ebx
 84ab88a:	83 ec 34             	sub    $0x34,%esp
 84ab88d:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab890:	89 04 24             	mov    %eax,(%esp)
 84ab893:	e8 22 87 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ab898:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ab89b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab89e:	89 04 24             	mov    %eax,(%esp)
 84ab8a1:	e8 f6 9f c9 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 84ab8a6:	83 f0 01             	xor    $0x1,%eax
 84ab8a9:	84 c0                	test   %al,%al
 84ab8ab:	75 60                	jne    84ab90d <_ZN11game_master11CStartEvent7executeEv+0x87>
 84ab8ad:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 84ab8b0:	89 04 24             	mov    %eax,(%esp)
 84ab8b3:	e8 cc 88 00 00       	call   84b4184 <_ZN26Packet_Monitor_Event_StartC1Ev>
 84ab8b8:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab8bb:	8b 40 0c             	mov    0xc(%eax),%eax
 84ab8be:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84ab8c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab8c4:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84ab8c8:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 84ab8cc:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab8cf:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 84ab8d3:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 84ab8d7:	8d 5d e2             	lea    -0x1e(%ebp),%ebx
 84ab8da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab8dd:	89 04 24             	mov    %eax,(%esp)
 84ab8e0:	e8 ab 03 c2 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84ab8e5:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84ab8eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab8ef:	89 14 24             	mov    %edx,(%esp)
 84ab8f2:	e8 93 67 c6 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84ab8f7:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 84ab8fe:	00 
 84ab8ff:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab903:	89 04 24             	mov    %eax,(%esp)
 84ab906:	e8 39 55 fc ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84ab90b:	eb 01                	jmp    84ab90e <_ZN11game_master11CStartEvent7executeEv+0x88>
 84ab90d:	90                   	nop
 84ab90e:	83 c4 34             	add    $0x34,%esp
 84ab911:	5b                   	pop    %ebx
 84ab912:	5d                   	pop    %ebp
 84ab913:	c3                   	ret

```

```c
// game_master::CStartEvent::execute @ 0x84ab886

/* game_master::CStartEvent::execute() */

void __thiscall game_master::CStartEvent::execute(CStartEvent *this)

{
  char cVar1;
  undefined4 uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Event_Start local_22 [10];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUser::isGMUser(local_10);
  if (cVar1 == '\x01') {
    Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_22);
    local_18 = *(undefined4 *)(this + 0xc);
    local_14 = *(undefined2 *)(this + 0x10);
    local_12 = *(undefined2 *)(this + 0x12);
    uVar2 = CUser::GetServerGroup(local_10);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar2);
    CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_22,0x12);
  }
  return;
}

```

---

## getParam

```asm
// === 084ab64e game_master::CStartEvent::getParam  [0x084ab64e-0x84ab885] ===
 84ab64e:	55                   	push   %ebp
 84ab64f:	89 e5                	mov    %esp,%ebp
 84ab651:	57                   	push   %edi
 84ab652:	56                   	push   %esi
 84ab653:	53                   	push   %ebx
 84ab654:	83 ec 7c             	sub    $0x7c,%esp
 84ab657:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84ab65e:	8d 5d 9c             	lea    -0x64(%ebp),%ebx
 84ab661:	89 df                	mov    %ebx,%edi
 84ab663:	be 0f 00 00 00       	mov    $0xf,%esi
 84ab668:	eb 0e                	jmp    84ab678 <_ZN11game_master11CStartEvent8getParamESs+0x2a>
 84ab66a:	89 3c 24             	mov    %edi,(%esp)
 84ab66d:	e8 5e af 25 00       	call   87065d0 <_ZNSsC1Ev>
 84ab672:	83 c7 04             	add    $0x4,%edi
 84ab675:	83 ee 01             	sub    $0x1,%esi
 84ab678:	83 fe ff             	cmp    $0xffffffff,%esi
 84ab67b:	0f 95 c0             	setne  %al
 84ab67e:	84 c0                	test   %al,%al
 84ab680:	75 e8                	jne    84ab66a <_ZN11game_master11CStartEvent8getParamESs+0x1c>
 84ab682:	eb 34                	jmp    84ab6b8 <_ZN11game_master11CStartEvent8getParamESs+0x6a>
 84ab684:	89 d7                	mov    %edx,%edi
 84ab686:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84ab689:	85 db                	test   %ebx,%ebx
 84ab68b:	74 1e                	je     84ab6ab <_ZN11game_master11CStartEvent8getParamESs+0x5d>
 84ab68d:	b8 0f 00 00 00       	mov    $0xf,%eax
 84ab692:	29 f0                	sub    %esi,%eax
 84ab694:	c1 e0 02             	shl    $0x2,%eax
 84ab697:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 84ab69a:	39 de                	cmp    %ebx,%esi
 84ab69c:	74 0d                	je     84ab6ab <_ZN11game_master11CStartEvent8getParamESs+0x5d>
 84ab69e:	83 ee 04             	sub    $0x4,%esi
 84ab6a1:	89 34 24             	mov    %esi,(%esp)
 84ab6a4:	e8 37 c5 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab6a9:	eb ef                	jmp    84ab69a <_ZN11game_master11CStartEvent8getParamESs+0x4c>
 84ab6ab:	8b 45 94             	mov    -0x6c(%ebp),%eax
 84ab6ae:	89 fa                	mov    %edi,%edx
 84ab6b0:	89 04 24             	mov    %eax,(%esp)
 84ab6b3:	e8 98 80 63 00       	call   8ae3750 <_Unwind_Resume>
 84ab6b8:	e9 d6 00 00 00       	jmp    84ab793 <_ZN11game_master11CStartEvent8getParamESs+0x145>
 84ab6bd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84ab6c0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab6c3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84ab6c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ab6ce:	00 
 84ab6cf:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ab6d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ab6d6:	89 04 24             	mov    %eax,(%esp)
 84ab6d9:	e8 a2 c1 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84ab6de:	83 ec 04             	sub    $0x4,%esp
 84ab6e1:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab6e4:	8b 50 08             	mov    0x8(%eax),%edx
 84ab6e7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab6ea:	c1 e2 02             	shl    $0x2,%edx
 84ab6ed:	8d 14 10             	lea    (%eax,%edx,1),%edx
 84ab6f0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab6f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab6f7:	89 14 24             	mov    %edx,(%esp)
 84ab6fa:	e8 01 c6 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84ab6ff:	eb 18                	jmp    84ab719 <_ZN11game_master11CStartEvent8getParamESs+0xcb>
 84ab701:	89 d3                	mov    %edx,%ebx
 84ab703:	89 c6                	mov    %eax,%esi
 84ab705:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab708:	89 04 24             	mov    %eax,(%esp)
 84ab70b:	e8 d0 c4 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab710:	89 f0                	mov    %esi,%eax
 84ab712:	89 da                	mov    %ebx,%edx
 84ab714:	e9 24 01 00 00       	jmp    84ab83d <_ZN11game_master11CStartEvent8getParamESs+0x1ef>
 84ab719:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84ab71c:	89 04 24             	mov    %eax,(%esp)
 84ab71f:	e8 bc c4 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab724:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ab727:	83 c0 01             	add    $0x1,%eax
 84ab72a:	89 c2                	mov    %eax,%edx
 84ab72c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84ab72f:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84ab736:	ff 
 84ab737:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ab73b:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ab73e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ab742:	89 04 24             	mov    %eax,(%esp)
 84ab745:	e8 36 c1 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84ab74a:	83 ec 04             	sub    $0x4,%esp
 84ab74d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84ab750:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab754:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ab757:	89 04 24             	mov    %eax,(%esp)
 84ab75a:	e8 a1 c5 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84ab75f:	eb 18                	jmp    84ab779 <_ZN11game_master11CStartEvent8getParamESs+0x12b>
 84ab761:	89 d3                	mov    %edx,%ebx
 84ab763:	89 c6                	mov    %eax,%esi
 84ab765:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84ab768:	89 04 24             	mov    %eax,(%esp)
 84ab76b:	e8 70 c4 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab770:	89 f0                	mov    %esi,%eax
 84ab772:	89 da                	mov    %ebx,%edx
 84ab774:	e9 c4 00 00 00       	jmp    84ab83d <_ZN11game_master11CStartEvent8getParamESs+0x1ef>
 84ab779:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84ab77c:	89 04 24             	mov    %eax,(%esp)
 84ab77f:	e8 5c c4 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab784:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab787:	8b 40 08             	mov    0x8(%eax),%eax
 84ab78a:	8d 50 01             	lea    0x1(%eax),%edx
 84ab78d:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab790:	89 50 08             	mov    %edx,0x8(%eax)
 84ab793:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ab79a:	00 
 84ab79b:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 84ab7a2:	00 
 84ab7a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ab7a6:	89 04 24             	mov    %eax,(%esp)
 84ab7a9:	e8 52 b8 25 00       	call   8707000 <_ZNKSs4findEcj>
 84ab7ae:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ab7b1:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 84ab7b5:	0f 95 c0             	setne  %al
 84ab7b8:	84 c0                	test   %al,%al
 84ab7ba:	0f 85 fd fe ff ff    	jne    84ab6bd <_ZN11game_master11CStartEvent8getParamESs+0x6f>
 84ab7c0:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab7c3:	8b 50 08             	mov    0x8(%eax),%edx
 84ab7c6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab7c9:	c1 e2 02             	shl    $0x2,%edx
 84ab7cc:	8d 14 10             	lea    (%eax,%edx,1),%edx
 84ab7cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ab7d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab7d6:	89 14 24             	mov    %edx,(%esp)
 84ab7d9:	e8 22 c5 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84ab7de:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab7e1:	89 04 24             	mov    %eax,(%esp)
 84ab7e4:	e8 07 ad 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ab7e9:	89 04 24             	mov    %eax,(%esp)
 84ab7ec:	e8 ff 2e bd ff       	call   807e6f0 <atoi@plt>
 84ab7f1:	8b 55 08             	mov    0x8(%ebp),%edx
 84ab7f4:	89 42 0c             	mov    %eax,0xc(%edx)
 84ab7f7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab7fa:	83 c0 04             	add    $0x4,%eax
 84ab7fd:	89 04 24             	mov    %eax,(%esp)
 84ab800:	e8 eb ac 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ab805:	89 04 24             	mov    %eax,(%esp)
 84ab808:	e8 e3 2e bd ff       	call   807e6f0 <atoi@plt>
 84ab80d:	89 c2                	mov    %eax,%edx
 84ab80f:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab812:	66 89 50 10          	mov    %dx,0x10(%eax)
 84ab816:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab819:	83 c0 08             	add    $0x8,%eax
 84ab81c:	89 04 24             	mov    %eax,(%esp)
 84ab81f:	e8 cc ac 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84ab824:	89 04 24             	mov    %eax,(%esp)
 84ab827:	e8 c4 2e bd ff       	call   807e6f0 <atoi@plt>
 84ab82c:	89 c2                	mov    %eax,%edx
 84ab82e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab831:	66 89 50 12          	mov    %dx,0x12(%eax)
 84ab835:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab838:	8d 58 40             	lea    0x40(%eax),%ebx
 84ab83b:	eb 2a                	jmp    84ab867 <_ZN11game_master11CStartEvent8getParamESs+0x219>
 84ab83d:	89 d6                	mov    %edx,%esi
 84ab83f:	89 c7                	mov    %eax,%edi
 84ab841:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab844:	8d 58 40             	lea    0x40(%eax),%ebx
 84ab847:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab84a:	39 c3                	cmp    %eax,%ebx
 84ab84c:	74 0d                	je     84ab85b <_ZN11game_master11CStartEvent8getParamESs+0x20d>
 84ab84e:	83 eb 04             	sub    $0x4,%ebx
 84ab851:	89 1c 24             	mov    %ebx,(%esp)
 84ab854:	e8 87 c3 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab859:	eb ec                	jmp    84ab847 <_ZN11game_master11CStartEvent8getParamESs+0x1f9>
 84ab85b:	89 f8                	mov    %edi,%eax
 84ab85d:	89 f2                	mov    %esi,%edx
 84ab85f:	89 04 24             	mov    %eax,(%esp)
 84ab862:	e8 e9 7e 63 00       	call   8ae3750 <_Unwind_Resume>
 84ab867:	8d 45 9c             	lea    -0x64(%ebp),%eax
 84ab86a:	39 c3                	cmp    %eax,%ebx
 84ab86c:	74 0d                	je     84ab87b <_ZN11game_master11CStartEvent8getParamESs+0x22d>
 84ab86e:	83 eb 04             	sub    $0x4,%ebx
 84ab871:	89 1c 24             	mov    %ebx,(%esp)
 84ab874:	e8 67 c3 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab879:	eb ec                	jmp    84ab867 <_ZN11game_master11CStartEvent8getParamESs+0x219>
 84ab87b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84ab87e:	83 c4 00             	add    $0x0,%esp
 84ab881:	5b                   	pop    %ebx
 84ab882:	5e                   	pop    %esi
 84ab883:	5f                   	pop    %edi
 84ab884:	5d                   	pop    %ebp
 84ab885:	c3                   	ret

```

```c
// game_master::CStartEvent::getParam @ 0x84ab64e

/* game_master::CStartEvent::getParam(std::string) */

void __thiscall game_master::CStartEvent::getParam(CStartEvent *this,string param_1)

{
  char *pcVar1;
  string *psVar2;
  int iVar3;
  string local_68 [4];
  string asStack_64 [4];
  string asStack_60 [56];
  string local_28 [4];
  string local_24 [4];
  int local_20;
  
  local_20 = 0;
  psVar2 = local_68;
  for (iVar3 = 0xf; iVar3 != -1; iVar3 = iVar3 + -1) {
                    /* try { // try from 084ab66d to 084ab671 has its CatchHandler @ 084ab684 */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
  while (local_20 = std::string::find((string *)param_1._M_dataplus._M_p,' ',0), local_20 != -1) {
                    /* try { // try from 084ab6d9 to 084ab6dd has its CatchHandler @ 084ab83d */
    std::string::substr((uint)local_28,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084ab6fa to 084ab6fe has its CatchHandler @ 084ab701 */
    std::string::operator=(local_68 + *(int *)(this + 8) * 4,local_28);
                    /* try { // try from 084ab71f to 084ab749 has its CatchHandler @ 084ab83d */
    std::string::~string(local_28);
    std::string::substr((uint)local_24,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084ab75a to 084ab75e has its CatchHandler @ 084ab761 */
    std::string::operator=((string *)param_1._M_dataplus._M_p,local_24);
                    /* try { // try from 084ab77f to 084ab823 has its CatchHandler @ 084ab83d */
    std::string::~string(local_24);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  std::string::operator=(local_68 + *(int *)(this + 8) * 4,(string *)param_1._M_dataplus._M_p);
  pcVar1 = (char *)std::string::c_str(local_68);
  iVar3 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar3;
  pcVar1 = (char *)std::string::c_str(asStack_64);
  iVar3 = atoi(pcVar1);
  *(short *)(this + 0x10) = (short)iVar3;
  pcVar1 = (char *)std::string::c_str(asStack_60);
  iVar3 = atoi(pcVar1);
  *(short *)(this + 0x12) = (short)iVar3;
  psVar2 = local_28;
  while (psVar2 != local_68) {
    psVar2 = psVar2 + -4;
    std::string::~string(psVar2);
  }
  return;
}

```

---

## parse

```asm
// === 084ab5b6 game_master::CStartEvent::parse  [0x084ab5b6-0x84ab64d] ===
 84ab5b6:	55                   	push   %ebp
 84ab5b7:	89 e5                	mov    %esp,%ebp
 84ab5b9:	56                   	push   %esi
 84ab5ba:	53                   	push   %ebx
 84ab5bb:	83 ec 20             	sub    $0x20,%esp
 84ab5be:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab5c1:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 84ab5c8:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab5cb:	66 c7 40 10 00 00    	movw   $0x0,0x10(%eax)
 84ab5d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab5d4:	66 c7 40 12 00 00    	movw   $0x0,0x12(%eax)
 84ab5da:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab5dd:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 84ab5e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab5e7:	8b 40 04             	mov    0x4(%eax),%eax
 84ab5ea:	83 c0 0c             	add    $0xc,%eax
 84ab5ed:	89 04 24             	mov    %eax,(%esp)
 84ab5f0:	e8 73 3a df ff       	call   829f068 <_Z4trimRSs>
 84ab5f5:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab5f8:	8b 40 04             	mov    0x4(%eax),%eax
 84ab5fb:	83 c0 0c             	add    $0xc,%eax
 84ab5fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab602:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84ab605:	89 04 24             	mov    %eax,(%esp)
 84ab608:	e8 a3 c3 25 00       	call   87079b0 <_ZNSsC1ERKSs>
 84ab60d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84ab610:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ab614:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab617:	89 04 24             	mov    %eax,(%esp)
 84ab61a:	e8 2f 00 00 00       	call   84ab64e <_ZN11game_master11CStartEvent8getParamESs>
 84ab61f:	eb 1b                	jmp    84ab63c <_ZN11game_master11CStartEvent5parseEv+0x86>
 84ab621:	89 d3                	mov    %edx,%ebx
 84ab623:	89 c6                	mov    %eax,%esi
 84ab625:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84ab628:	89 04 24             	mov    %eax,(%esp)
 84ab62b:	e8 b0 c5 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab630:	89 f0                	mov    %esi,%eax
 84ab632:	89 da                	mov    %ebx,%edx
 84ab634:	89 04 24             	mov    %eax,(%esp)
 84ab637:	e8 14 81 63 00       	call   8ae3750 <_Unwind_Resume>
 84ab63c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84ab63f:	89 04 24             	mov    %eax,(%esp)
 84ab642:	e8 99 c5 25 00       	call   8707be0 <_ZNSsD1Ev>
 84ab647:	83 c4 20             	add    $0x20,%esp
 84ab64a:	5b                   	pop    %ebx
 84ab64b:	5e                   	pop    %esi
 84ab64c:	5d                   	pop    %ebp
 84ab64d:	c3                   	ret

```

```c
// game_master::CStartEvent::parse @ 0x84ab5b6

/* game_master::CStartEvent::parse() */

void __thiscall game_master::CStartEvent::parse(CStartEvent *this)

{
  string local_10 [4];
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x12) = 0;
  *(undefined4 *)(this + 8) = 0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  std::string::string(local_10,(string *)(*(int *)(this + 4) + 0xc));
                    /* try { // try from 084ab61a to 084ab61e has its CatchHandler @ 084ab621 */
  getParam(this,(string)local_10);
  std::string::~string(local_10);
  return;
}

```

