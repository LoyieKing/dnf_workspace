# CCommunityServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CCommunityServerProxy

```asm
// === 0846c5c8 CCommunityServerProxy::CCommunityServerProxy  [0x0846c5c8-0x846c65f] ===
 846c5c8:	55                   	push   %ebp
 846c5c9:	89 e5                	mov    %esp,%ebp
 846c5cb:	56                   	push   %esi
 846c5cc:	53                   	push   %ebx
 846c5cd:	83 ec 20             	sub    $0x20,%esp
 846c5d0:	8b 45 08             	mov    0x8(%ebp),%eax
 846c5d3:	89 04 24             	mov    %eax,(%esp)
 846c5d6:	e8 15 ef e3 ff       	call   82ab4f0 <_ZN8CNetworkILi100000ELi100000EEC1Ev>
 846c5db:	8d 45 f7             	lea    -0x9(%ebp),%eax
 846c5de:	89 04 24             	mov    %eax,(%esp)
 846c5e1:	e8 ea 3a 27 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 846c5e6:	8b 45 08             	mov    0x8(%ebp),%eax
 846c5e9:	8d 90 fc 0d 03 00    	lea    0x30dfc(%eax),%edx
 846c5ef:	8d 45 f7             	lea    -0x9(%ebp),%eax
 846c5f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 846c5f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 846c5f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 846c5fd:	89 14 24             	mov    %edx,(%esp)
 846c600:	e8 2b b0 29 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 846c605:	eb 2e                	jmp    846c635 <_ZN21CCommunityServerProxyC1EPci+0x6d>
 846c607:	89 d3                	mov    %edx,%ebx
 846c609:	89 c6                	mov    %eax,%esi
 846c60b:	8d 45 f7             	lea    -0x9(%ebp),%eax
 846c60e:	89 04 24             	mov    %eax,(%esp)
 846c611:	e8 da 3a 27 00       	call   86e00f0 <_ZNSaIcED1Ev>
 846c616:	89 f0                	mov    %esi,%eax
 846c618:	89 da                	mov    %ebx,%edx
 846c61a:	89 d3                	mov    %edx,%ebx
 846c61c:	89 c6                	mov    %eax,%esi
 846c61e:	8b 45 08             	mov    0x8(%ebp),%eax
 846c621:	89 04 24             	mov    %eax,(%esp)
 846c624:	e8 65 ef e3 ff       	call   82ab58e <_ZN8CNetworkILi100000ELi100000EED1Ev>
 846c629:	89 f0                	mov    %esi,%eax
 846c62b:	89 da                	mov    %ebx,%edx
 846c62d:	89 04 24             	mov    %eax,(%esp)
 846c630:	e8 1b 71 67 00       	call   8ae3750 <_Unwind_Resume>
 846c635:	8d 45 f7             	lea    -0x9(%ebp),%eax
 846c638:	89 04 24             	mov    %eax,(%esp)
 846c63b:	e8 b0 3a 27 00       	call   86e00f0 <_ZNSaIcED1Ev>
 846c640:	8b 45 08             	mov    0x8(%ebp),%eax
 846c643:	8b 55 10             	mov    0x10(%ebp),%edx
 846c646:	89 90 00 0e 03 00    	mov    %edx,0x30e00(%eax)
 846c64c:	8b 45 08             	mov    0x8(%ebp),%eax
 846c64f:	c7 80 f8 0d 03 00 00 	movl   $0x0,0x30df8(%eax)
 846c656:	00 00 00 
 846c659:	83 c4 20             	add    $0x20,%esp
 846c65c:	5b                   	pop    %ebx
 846c65d:	5e                   	pop    %esi
 846c65e:	5d                   	pop    %ebp
 846c65f:	c3                   	ret

```

```c
// CCommunityServerProxy::CCommunityServerProxy @ 0x846c5c8

/* CCommunityServerProxy::CCommunityServerProxy(char*, int) */

void __thiscall
CCommunityServerProxy::CCommunityServerProxy(CCommunityServerProxy *this,char *param_1,int param_2)

{
  allocator<char> local_d;
  
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)this);
  std::allocator<char>::allocator();
                    /* try { // try from 0846c600 to 0846c604 has its CatchHandler @ 0846c607 */
  std::string::string((string *)(this + 0x30dfc),param_1,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  *(int *)(this + 0x30e00) = param_2;
  *(undefined4 *)(this + 0x30df8) = 0;
  return;
}

```

---

## Disconnect

```asm
// === 0846c770 CCommunityServerProxy::Disconnect  [0x0846c770-0x846c7c3] ===
 846c770:	55                   	push   %ebp
 846c771:	89 e5                	mov    %esp,%ebp
 846c773:	83 ec 18             	sub    $0x18,%esp
 846c776:	8b 45 08             	mov    0x8(%ebp),%eax
 846c779:	05 fc 0d 03 00       	add    $0x30dfc,%eax
 846c77e:	89 04 24             	mov    %eax,(%esp)
 846c781:	e8 ea 9e 29 00       	call   8706670 <_ZNKSs6lengthEv>
 846c786:	85 c0                	test   %eax,%eax
 846c788:	74 0d                	je     846c797 <_ZN21CCommunityServerProxy10DisconnectEv+0x27>
 846c78a:	8b 45 08             	mov    0x8(%ebp),%eax
 846c78d:	8b 80 00 0e 03 00    	mov    0x30e00(%eax),%eax
 846c793:	85 c0                	test   %eax,%eax
 846c795:	75 07                	jne    846c79e <_ZN21CCommunityServerProxy10DisconnectEv+0x2e>
 846c797:	b8 01 00 00 00       	mov    $0x1,%eax
 846c79c:	eb 05                	jmp    846c7a3 <_ZN21CCommunityServerProxy10DisconnectEv+0x33>
 846c79e:	b8 00 00 00 00       	mov    $0x0,%eax
 846c7a3:	84 c0                	test   %al,%al
 846c7a5:	75 1a                	jne    846c7c1 <_ZN21CCommunityServerProxy10DisconnectEv+0x51>
 846c7a7:	8b 45 08             	mov    0x8(%ebp),%eax
 846c7aa:	89 04 24             	mov    %eax,(%esp)
 846c7ad:	e8 a6 17 e9 ff       	call   82fdf58 <_ZN8CNetworkILi100000ELi100000EE10disconnectEv>
 846c7b2:	8b 45 08             	mov    0x8(%ebp),%eax
 846c7b5:	c7 80 f8 0d 03 00 00 	movl   $0x0,0x30df8(%eax)
 846c7bc:	00 00 00 
 846c7bf:	eb 01                	jmp    846c7c2 <_ZN21CCommunityServerProxy10DisconnectEv+0x52>
 846c7c1:	90                   	nop
 846c7c2:	c9                   	leave
 846c7c3:	c3                   	ret

```

```c
// CCommunityServerProxy::Disconnect @ 0x846c770

/* CCommunityServerProxy::Disconnect() */

void __thiscall CCommunityServerProxy::Disconnect(CCommunityServerProxy *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = std::string::length((string *)(this + 0x30dfc));
  if ((iVar2 == 0) || (*(int *)(this + 0x30e00) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)this);
    *(undefined4 *)(this + 0x30df8) = 0;
  }
  return;
}

```

---

## Init

```asm
// === 0846c660 CCommunityServerProxy::Init  [0x0846c660-0x846c673] ===
 846c660:	55                   	push   %ebp
 846c661:	89 e5                	mov    %esp,%ebp
 846c663:	83 ec 18             	sub    $0x18,%esp
 846c666:	8b 45 08             	mov    0x8(%ebp),%eax
 846c669:	89 04 24             	mov    %eax,(%esp)
 846c66c:	e8 03 00 00 00       	call   846c674 <_ZN21CCommunityServerProxy7InitTcpEv>
 846c671:	c9                   	leave
 846c672:	c3                   	ret
 846c673:	90                   	nop

```

```c
// CCommunityServerProxy::Init @ 0x846c660

/* CCommunityServerProxy::Init() */

void __thiscall CCommunityServerProxy::Init(CCommunityServerProxy *this)

{
  InitTcp(this);
  return;
}

```

---

## InitTcp

```asm
// === 0846c674 CCommunityServerProxy::InitTcp  [0x0846c674-0x846c76f] ===
 846c674:	55                   	push   %ebp
 846c675:	89 e5                	mov    %esp,%ebp
 846c677:	57                   	push   %edi
 846c678:	56                   	push   %esi
 846c679:	53                   	push   %ebx
 846c67a:	83 ec 4c             	sub    $0x4c,%esp
 846c67d:	8b 45 08             	mov    0x8(%ebp),%eax
 846c680:	05 fc 0d 03 00       	add    $0x30dfc,%eax
 846c685:	89 04 24             	mov    %eax,(%esp)
 846c688:	e8 e3 9f 29 00       	call   8706670 <_ZNKSs6lengthEv>
 846c68d:	85 c0                	test   %eax,%eax
 846c68f:	74 0d                	je     846c69e <_ZN21CCommunityServerProxy7InitTcpEv+0x2a>
 846c691:	8b 45 08             	mov    0x8(%ebp),%eax
 846c694:	8b 80 00 0e 03 00    	mov    0x30e00(%eax),%eax
 846c69a:	85 c0                	test   %eax,%eax
 846c69c:	75 07                	jne    846c6a5 <_ZN21CCommunityServerProxy7InitTcpEv+0x31>
 846c69e:	b8 01 00 00 00       	mov    $0x1,%eax
 846c6a3:	eb 05                	jmp    846c6aa <_ZN21CCommunityServerProxy7InitTcpEv+0x36>
 846c6a5:	b8 00 00 00 00       	mov    $0x0,%eax
 846c6aa:	84 c0                	test   %al,%al
 846c6ac:	74 0a                	je     846c6b8 <_ZN21CCommunityServerProxy7InitTcpEv+0x44>
 846c6ae:	b8 00 00 00 00       	mov    $0x0,%eax
 846c6b3:	e9 b0 00 00 00       	jmp    846c768 <_ZN21CCommunityServerProxy7InitTcpEv+0xf4>
 846c6b8:	8b 45 08             	mov    0x8(%ebp),%eax
 846c6bb:	8b 00                	mov    (%eax),%eax
 846c6bd:	85 c0                	test   %eax,%eax
 846c6bf:	0f 89 9e 00 00 00    	jns    846c763 <_ZN21CCommunityServerProxy7InitTcpEv+0xef>
 846c6c5:	8b 45 08             	mov    0x8(%ebp),%eax
 846c6c8:	8b 98 00 0e 03 00    	mov    0x30e00(%eax),%ebx
 846c6ce:	8b 45 08             	mov    0x8(%ebp),%eax
 846c6d1:	05 fc 0d 03 00       	add    $0x30dfc,%eax
 846c6d6:	89 04 24             	mov    %eax,(%esp)
 846c6d9:	e8 12 9e 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846c6de:	8b 55 08             	mov    0x8(%ebp),%edx
 846c6e1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846c6e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 846c6e9:	89 14 24             	mov    %edx,(%esp)
 846c6ec:	e8 a8 16 e9 ff       	call   82fdd99 <_ZN8CNetworkILi100000ELi100000EE22CreateConnectionSocketERiPKci>
 846c6f1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 846c6f4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 846c6f8:	0f 95 c0             	setne  %al
 846c6fb:	84 c0                	test   %al,%al
 846c6fd:	74 64                	je     846c763 <_ZN21CCommunityServerProxy7InitTcpEv+0xef>
 846c6ff:	e8 6c 16 c1 ff       	call   807dd70 <__errno_location@plt>
 846c704:	8b 00                	mov    (%eax),%eax
 846c706:	89 04 24             	mov    %eax,(%esp)
 846c709:	e8 22 10 c1 ff       	call   807d730 <strerror@plt>
 846c70e:	89 c3                	mov    %eax,%ebx
 846c710:	e8 5b 16 c1 ff       	call   807dd70 <__errno_location@plt>
 846c715:	8b 38                	mov    (%eax),%edi
 846c717:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 846c71a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 846c721:	00 
 846c722:	c7 44 24 08 bf 00 00 	movl   $0xbf,0x8(%esp)
 846c729:	00 
 846c72a:	c7 44 24 04 e0 62 c6 	movl   $0x8c662e0,0x4(%esp)
 846c731:	08 
 846c732:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 846c735:	89 04 24             	mov    %eax,(%esp)
 846c738:	e8 db 2f 0e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 846c73d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 846c741:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 846c745:	89 74 24 08          	mov    %esi,0x8(%esp)
 846c749:	c7 44 24 04 a4 52 c6 	movl   $0x8c652a4,0x4(%esp)
 846c750:	08 
 846c751:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 846c754:	89 04 24             	mov    %eax,(%esp)
 846c757:	e8 2c 30 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846c75c:	b8 00 00 00 00       	mov    $0x0,%eax
 846c761:	eb 05                	jmp    846c768 <_ZN21CCommunityServerProxy7InitTcpEv+0xf4>
 846c763:	b8 01 00 00 00       	mov    $0x1,%eax
 846c768:	83 c4 4c             	add    $0x4c,%esp
 846c76b:	5b                   	pop    %ebx
 846c76c:	5e                   	pop    %esi
 846c76d:	5f                   	pop    %edi
 846c76e:	5d                   	pop    %ebp
 846c76f:	c3                   	ret

```

```c
// CCommunityServerProxy::InitTcp @ 0x846c674

/* CCommunityServerProxy::InitTcp() */

undefined4 __thiscall CCommunityServerProxy::InitTcp(CCommunityServerProxy *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = std::string::length((string *)(this + 0x30dfc));
  if ((iVar3 == 0) || (*(int *)(this + 0x30e00) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)this < 0) {
      iVar3 = *(int *)(this + 0x30e00);
      pcVar5 = (char *)std::string::c_str((string *)(this + 0x30dfc));
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)this,pcVar5,iVar3);
      if (local_20 != 0) {
        piVar6 = __errno_location();
        pcVar5 = strerror(*piVar6);
        piVar6 = __errno_location();
        iVar2 = local_20;
        iVar3 = *piVar6;
        cMyTrace::cMyTrace(local_30,"bool CCommunityServerProxy::InitTcp()",0xbf,0);
        cMyTrace::operator()
                  (local_30,"CCommunityServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,
                   iVar3,pcVar5);
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## OnTcpError

```asm
// === 0846c962 CCommunityServerProxy::OnTcpError  [0x0846c962-0x846c9eb] ===
 846c962:	55                   	push   %ebp
 846c963:	89 e5                	mov    %esp,%ebp
 846c965:	56                   	push   %esi
 846c966:	53                   	push   %ebx
 846c967:	83 ec 20             	sub    $0x20,%esp
 846c96a:	e8 01 14 c1 ff       	call   807dd70 <__errno_location@plt>
 846c96f:	8b 00                	mov    (%eax),%eax
 846c971:	85 c0                	test   %eax,%eax
 846c973:	74 6b                	je     846c9e0 <_ZN21CCommunityServerProxy10OnTcpErrorEv+0x7e>
 846c975:	e8 f6 13 c1 ff       	call   807dd70 <__errno_location@plt>
 846c97a:	8b 00                	mov    (%eax),%eax
 846c97c:	89 04 24             	mov    %eax,(%esp)
 846c97f:	e8 ac 0d c1 ff       	call   807d730 <strerror@plt>
 846c984:	89 c6                	mov    %eax,%esi
 846c986:	8b 45 08             	mov    0x8(%ebp),%eax
 846c989:	89 04 24             	mov    %eax,(%esp)
 846c98c:	e8 b7 06 00 00       	call   846d048 <_ZN21CCommunityServerProxy13GetTcpHandlerEv>
 846c991:	89 04 24             	mov    %eax,(%esp)
 846c994:	e8 b5 15 e9 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 846c999:	89 c3                	mov    %eax,%ebx
 846c99b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 846c9a2:	00 
 846c9a3:	c7 44 24 08 0f 01 00 	movl   $0x10f,0x8(%esp)
 846c9aa:	00 
 846c9ab:	c7 44 24 04 c0 61 c6 	movl   $0x8c661c0,0x4(%esp)
 846c9b2:	08 
 846c9b3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846c9b6:	89 04 24             	mov    %eax,(%esp)
 846c9b9:	e8 5a 2d 0e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 846c9be:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846c9c2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846c9c6:	c7 44 24 04 8c 53 c6 	movl   $0x8c6538c,0x4(%esp)
 846c9cd:	08 
 846c9ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846c9d1:	89 04 24             	mov    %eax,(%esp)
 846c9d4:	e8 af 2d 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846c9d9:	b8 00 00 00 00       	mov    $0x0,%eax
 846c9de:	eb 05                	jmp    846c9e5 <_ZN21CCommunityServerProxy10OnTcpErrorEv+0x83>
 846c9e0:	b8 01 00 00 00       	mov    $0x1,%eax
 846c9e5:	83 c4 20             	add    $0x20,%esp
 846c9e8:	5b                   	pop    %ebx
 846c9e9:	5e                   	pop    %esi
 846c9ea:	5d                   	pop    %ebp
 846c9eb:	c3                   	ret

```

```c
// CCommunityServerProxy::OnTcpError @ 0x846c962

/* CCommunityServerProxy::OnTcpError() */

bool __thiscall CCommunityServerProxy::OnTcpError(CCommunityServerProxy *this)

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
    cMyTrace::cMyTrace(local_1c,"bool CCommunityServerProxy::OnTcpError()",0x10f,0);
    cMyTrace::operator()(local_1c,"CommunityServer OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}

```

---

## OnTcpRecv

```asm
// === 0846c82c CCommunityServerProxy::OnTcpRecv  [0x0846c82c-0x846c8c3] ===
 846c82c:	55                   	push   %ebp
 846c82d:	89 e5                	mov    %esp,%ebp
 846c82f:	83 ec 38             	sub    $0x38,%esp
 846c832:	8b 45 08             	mov    0x8(%ebp),%eax
 846c835:	89 04 24             	mov    %eax,(%esp)
 846c838:	e8 c1 19 e9 ff       	call   82fe1fe <_ZN8CNetworkILi100000ELi100000EE11recv_packetEv>
 846c83d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846c840:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 846c844:	7e 32                	jle    846c878 <_ZN21CCommunityServerProxy9OnTcpRecvEv+0x4c>
 846c846:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846c849:	89 44 24 04          	mov    %eax,0x4(%esp)
 846c84d:	8b 45 08             	mov    0x8(%ebp),%eax
 846c850:	89 04 24             	mov    %eax,(%esp)
 846c853:	e8 94 01 00 00       	call   846c9ec <_ZN21CCommunityServerProxy7ParsingEi>
 846c858:	83 f0 01             	xor    $0x1,%eax
 846c85b:	84 c0                	test   %al,%al
 846c85d:	74 12                	je     846c871 <_ZN21CCommunityServerProxy9OnTcpRecvEv+0x45>
 846c85f:	8b 45 08             	mov    0x8(%ebp),%eax
 846c862:	89 04 24             	mov    %eax,(%esp)
 846c865:	e8 06 ff ff ff       	call   846c770 <_ZN21CCommunityServerProxy10DisconnectEv>
 846c86a:	b8 00 00 00 00       	mov    $0x0,%eax
 846c86f:	eb 50                	jmp    846c8c1 <_ZN21CCommunityServerProxy9OnTcpRecvEv+0x95>
 846c871:	b8 01 00 00 00       	mov    $0x1,%eax
 846c876:	eb 49                	jmp    846c8c1 <_ZN21CCommunityServerProxy9OnTcpRecvEv+0x95>
 846c878:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 846c87c:	79 3e                	jns    846c8bc <_ZN21CCommunityServerProxy9OnTcpRecvEv+0x90>
 846c87e:	c7 44 24 10 20 53 c6 	movl   $0x8c65320,0x10(%esp)
 846c885:	08 
 846c886:	c7 44 24 0c ed 00 00 	movl   $0xed,0xc(%esp)
 846c88d:	00 
 846c88e:	c7 44 24 08 40 62 c6 	movl   $0x8c66240,0x8(%esp)
 846c895:	08 
 846c896:	c7 44 24 04 3e 53 c6 	movl   $0x8c6533e,0x4(%esp)
 846c89d:	08 
 846c89e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 846c8a5:	e8 60 73 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 846c8aa:	8b 45 08             	mov    0x8(%ebp),%eax
 846c8ad:	89 04 24             	mov    %eax,(%esp)
 846c8b0:	e8 bb fe ff ff       	call   846c770 <_ZN21CCommunityServerProxy10DisconnectEv>
 846c8b5:	b8 00 00 00 00       	mov    $0x0,%eax
 846c8ba:	eb 05                	jmp    846c8c1 <_ZN21CCommunityServerProxy9OnTcpRecvEv+0x95>
 846c8bc:	b8 01 00 00 00       	mov    $0x1,%eax
 846c8c1:	c9                   	leave
 846c8c2:	c3                   	ret
 846c8c3:	90                   	nop

```

```c
// CCommunityServerProxy::OnTcpRecv @ 0x846c82c

/* CCommunityServerProxy::OnTcpRecv() */

undefined4 __thiscall CCommunityServerProxy::OnTcpRecv(CCommunityServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)this);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_CommunityServerProxy.cpp","bool CCommunityServerProxy::OnTcpRecv()",0xed,
                 "Community Server maybe Die!!!");
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
      Disconnect(this);
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## OnTcpSend

```asm
// === 0846c8c4 CCommunityServerProxy::OnTcpSend  [0x0846c8c4-0x846c961] ===
 846c8c4:	55                   	push   %ebp
 846c8c5:	89 e5                	mov    %esp,%ebp
 846c8c7:	56                   	push   %esi
 846c8c8:	53                   	push   %ebx
 846c8c9:	83 ec 20             	sub    $0x20,%esp
 846c8cc:	8b 45 08             	mov    0x8(%ebp),%eax
 846c8cf:	89 04 24             	mov    %eax,(%esp)
 846c8d2:	e8 7b 1a e9 ff       	call   82fe352 <_ZN8CNetworkILi100000ELi100000EE11send_packetEv>
 846c8d7:	c1 e8 1f             	shr    $0x1f,%eax
 846c8da:	84 c0                	test   %al,%al
 846c8dc:	74 76                	je     846c954 <_ZN21CCommunityServerProxy9OnTcpSendEv+0x90>
 846c8de:	e8 8d 14 c1 ff       	call   807dd70 <__errno_location@plt>
 846c8e3:	8b 00                	mov    (%eax),%eax
 846c8e5:	89 04 24             	mov    %eax,(%esp)
 846c8e8:	e8 43 0e c1 ff       	call   807d730 <strerror@plt>
 846c8ed:	89 c6                	mov    %eax,%esi
 846c8ef:	8b 45 08             	mov    0x8(%ebp),%eax
 846c8f2:	89 04 24             	mov    %eax,(%esp)
 846c8f5:	e8 4e 07 00 00       	call   846d048 <_ZN21CCommunityServerProxy13GetTcpHandlerEv>
 846c8fa:	89 04 24             	mov    %eax,(%esp)
 846c8fd:	e8 4c 16 e9 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 846c902:	89 c3                	mov    %eax,%ebx
 846c904:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 846c90b:	00 
 846c90c:	c7 44 24 08 01 01 00 	movl   $0x101,0x8(%esp)
 846c913:	00 
 846c914:	c7 44 24 04 00 62 c6 	movl   $0x8c66200,0x4(%esp)
 846c91b:	08 
 846c91c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846c91f:	89 04 24             	mov    %eax,(%esp)
 846c922:	e8 f1 2d 0e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 846c927:	89 74 24 0c          	mov    %esi,0xc(%esp)
 846c92b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 846c92f:	c7 44 24 04 5c 53 c6 	movl   $0x8c6535c,0x4(%esp)
 846c936:	08 
 846c937:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846c93a:	89 04 24             	mov    %eax,(%esp)
 846c93d:	e8 46 2e 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846c942:	8b 45 08             	mov    0x8(%ebp),%eax
 846c945:	89 04 24             	mov    %eax,(%esp)
 846c948:	e8 23 fe ff ff       	call   846c770 <_ZN21CCommunityServerProxy10DisconnectEv>
 846c94d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 846c952:	eb 06                	jmp    846c95a <_ZN21CCommunityServerProxy9OnTcpSendEv+0x96>
 846c954:	8b 45 08             	mov    0x8(%ebp),%eax
 846c957:	8b 40 18             	mov    0x18(%eax),%eax
 846c95a:	83 c4 20             	add    $0x20,%esp
 846c95d:	5b                   	pop    %ebx
 846c95e:	5e                   	pop    %esi
 846c95f:	5d                   	pop    %ebp
 846c960:	c3                   	ret
 846c961:	90                   	nop

```

```c
// CCommunityServerProxy::OnTcpSend @ 0x846c8c4

/* CCommunityServerProxy::OnTcpSend() */

undefined4 __thiscall CCommunityServerProxy::OnTcpSend(CCommunityServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  cMyTrace local_1c [16];
  
  iVar1 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)this);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    cMyTrace::cMyTrace(local_1c,"int CCommunityServerProxy::OnTcpSend()",0x101,0);
    cMyTrace::operator()(local_1c,"CommunityServer OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
    Disconnect(this);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(this + 0x18);
  }
  return uVar4;
}

```

---

## Parsing

```asm
// === 0846c9ec CCommunityServerProxy::Parsing  [0x0846c9ec-0x846ca05] ===
 846c9ec:	55                   	push   %ebp
 846c9ed:	89 e5                	mov    %esp,%ebp
 846c9ef:	83 ec 18             	sub    $0x18,%esp
 846c9f2:	8b 45 08             	mov    0x8(%ebp),%eax
 846c9f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 846c9f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 846c9fc:	89 04 24             	mov    %eax,(%esp)
 846c9ff:	e8 4c 06 00 00       	call   846d050 <_ZN8CNetworkILi100000ELi100000EE20Parsing_ServerPacketEi>
 846ca04:	c9                   	leave
 846ca05:	c3                   	ret

```

```c
// CCommunityServerProxy::Parsing @ 0x846c9ec

/* CCommunityServerProxy::Parsing(int) */

void __thiscall CCommunityServerProxy::Parsing(CCommunityServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)this,param_1);
  return;
}

```

---

## SendLogin

```asm
// === 0846ca06 CCommunityServerProxy::SendLogin  [0x0846ca06-0x846cb43] ===
 846ca06:	55                   	push   %ebp
 846ca07:	89 e5                	mov    %esp,%ebp
 846ca09:	81 ec c8 05 00 00    	sub    $0x5c8,%esp
 846ca0f:	8d 85 56 fa ff ff    	lea    -0x5aa(%ebp),%eax
 846ca15:	89 04 24             	mov    %eax,(%esp)
 846ca18:	e8 f7 03 00 00       	call   846ce14 <_ZN22Packet_Community_LoginC1Ev>
 846ca1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ca20:	89 04 24             	mov    %eax,(%esp)
 846ca23:	e8 46 d9 c6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 846ca28:	89 85 60 fa ff ff    	mov    %eax,-0x5a0(%ebp)
 846ca2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ca31:	89 04 24             	mov    %eax,(%esp)
 846ca34:	e8 35 d9 c6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 846ca39:	89 85 65 fa ff ff    	mov    %eax,-0x59b(%ebp)
 846ca3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ca42:	89 04 24             	mov    %eax,(%esp)
 846ca45:	e8 46 f2 c5 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 846ca4a:	88 85 64 fa ff ff    	mov    %al,-0x59c(%ebp)
 846ca50:	e8 2c f7 c5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 846ca55:	89 04 24             	mov    %eax,(%esp)
 846ca58:	e8 6d e0 cd ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 846ca5d:	88 85 6d fa ff ff    	mov    %al,-0x593(%ebp)
 846ca63:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ca66:	89 04 24             	mov    %eax,(%esp)
 846ca69:	e8 28 c2 c5 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 846ca6e:	89 85 69 fa ff ff    	mov    %eax,-0x597(%ebp)
 846ca74:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ca77:	89 04 24             	mov    %eax,(%esp)
 846ca7a:	e8 cf f1 c5 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 846ca7f:	89 85 6e fa ff ff    	mov    %eax,-0x592(%ebp)
 846ca85:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ca88:	89 04 24             	mov    %eax,(%esp)
 846ca8b:	e8 8c a9 ce ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 846ca90:	88 85 92 fa ff ff    	mov    %al,-0x56e(%ebp)
 846ca96:	8b 45 0c             	mov    0xc(%ebp),%eax
 846ca99:	89 04 24             	mov    %eax,(%esp)
 846ca9c:	e8 17 d8 c6 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 846caa1:	88 85 90 fa ff ff    	mov    %al,-0x570(%ebp)
 846caa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 846caaa:	89 04 24             	mov    %eax,(%esp)
 846caad:	e8 6e 14 c9 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 846cab2:	88 85 91 fa ff ff    	mov    %al,-0x56f(%ebp)
 846cab8:	8b 45 0c             	mov    0xc(%ebp),%eax
 846cabb:	89 04 24             	mov    %eax,(%esp)
 846cabe:	e8 4f 21 21 00       	call   867ec12 <_ZN5CUser6getSexEv>
 846cac3:	88 85 93 fa ff ff    	mov    %al,-0x56d(%ebp)
 846cac9:	8b 45 0c             	mov    0xc(%ebp),%eax
 846cacc:	89 04 24             	mov    %eax,(%esp)
 846cacf:	e8 54 45 c9 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 846cad4:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 846cadb:	00 
 846cadc:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cae0:	8d 85 56 fa ff ff    	lea    -0x5aa(%ebp),%eax
 846cae6:	83 c0 1c             	add    $0x1c,%eax
 846cae9:	89 04 24             	mov    %eax,(%esp)
 846caec:	e8 af 0d c1 ff       	call   807d8a0 <memcpy@plt>
 846caf1:	8b 45 10             	mov    0x10(%ebp),%eax
 846caf4:	8b 00                	mov    (%eax),%eax
 846caf6:	89 85 94 fa ff ff    	mov    %eax,-0x56c(%ebp)
 846cafc:	8b 45 10             	mov    0x10(%ebp),%eax
 846caff:	83 c0 04             	add    $0x4,%eax
 846cb02:	c7 44 24 08 60 05 00 	movl   $0x560,0x8(%esp)
 846cb09:	00 
 846cb0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cb0e:	8d 85 56 fa ff ff    	lea    -0x5aa(%ebp),%eax
 846cb14:	83 c0 42             	add    $0x42,%eax
 846cb17:	89 04 24             	mov    %eax,(%esp)
 846cb1a:	e8 81 0d c1 ff       	call   807d8a0 <memcpy@plt>
 846cb1f:	0f b7 85 58 fa ff ff 	movzwl -0x5a8(%ebp),%eax
 846cb26:	0f b7 d0             	movzwl %ax,%edx
 846cb29:	8d 85 56 fa ff ff    	lea    -0x5aa(%ebp),%eax
 846cb2f:	89 54 24 08          	mov    %edx,0x8(%esp)
 846cb33:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cb37:	8b 45 08             	mov    0x8(%ebp),%eax
 846cb3a:	89 04 24             	mov    %eax,(%esp)
 846cb3d:	e8 82 fc ff ff       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 846cb42:	c9                   	leave
 846cb43:	c3                   	ret

```

```c
// CCommunityServerProxy::SendLogin @ 0x846ca06

/* CCommunityServerProxy::SendLogin(CUser*, SIG_LOAD_PVP_BUDDY*) */

void __thiscall
CCommunityServerProxy::SendLogin
          (CCommunityServerProxy *this,CUser *param_1,SIG_LOAD_PVP_BUDDY *param_2)

{
  CEnvironment *this_00;
  void *__src;
  Packet_Community_Login local_5ae [2];
  ushort local_5ac;
  undefined4 local_5a4;
  undefined1 local_5a0;
  undefined4 local_59f;
  undefined4 local_59b;
  undefined1 local_597;
  undefined4 local_596;
  undefined1 auStack_592 [30];
  undefined1 local_574;
  undefined1 local_573;
  undefined1 local_572;
  undefined1 local_571;
  undefined4 local_570;
  undefined1 auStack_56c [1384];
  
  Packet_Community_Login::Packet_Community_Login(local_5ae);
  local_5a4 = CUser::get_acc_id(param_1);
  local_59f = CUser::get_acc_id(param_1);
  local_5a0 = CUser::GetServerGroup(param_1);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_597 = CEnvironment::get_channel_no(this_00);
  local_59b = CUser::GetUID(param_1);
  local_596 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  local_572 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_574 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_573 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_571 = CUser::getSex(param_1);
  __src = (void *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  memcpy(auStack_592,__src,0x1d);
  local_570 = *(undefined4 *)param_2;
  memcpy(auStack_56c,param_2 + 4,0x560);
  SendTcpPacket(this,(char *)local_5ae,(uint)local_5ac);
  return;
}

```

---

## SendLogout

```asm
// === 0846cb44 CCommunityServerProxy::SendLogout  [0x0846cb44-0x846cb7f] ===
 846cb44:	55                   	push   %ebp
 846cb45:	89 e5                	mov    %esp,%ebp
 846cb47:	83 ec 38             	sub    $0x38,%esp
 846cb4a:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846cb4d:	89 04 24             	mov    %eax,(%esp)
 846cb50:	e8 6f 03 00 00       	call   846cec4 <_ZN23Packet_Community_LogoutC1Ev>
 846cb55:	8b 45 0c             	mov    0xc(%ebp),%eax
 846cb58:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846cb5b:	8b 45 10             	mov    0x10(%ebp),%eax
 846cb5e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846cb61:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 846cb65:	0f b7 d0             	movzwl %ax,%edx
 846cb68:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846cb6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 846cb6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cb73:	8b 45 08             	mov    0x8(%ebp),%eax
 846cb76:	89 04 24             	mov    %eax,(%esp)
 846cb79:	e8 46 fc ff ff       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 846cb7e:	c9                   	leave
 846cb7f:	c3                   	ret

```

```c
// CCommunityServerProxy::SendLogout @ 0x846cb44

/* CCommunityServerProxy::SendLogout(unsigned int, unsigned int) */

void __thiscall
CCommunityServerProxy::SendLogout(CCommunityServerProxy *this,uint param_1,uint param_2)

{
  Packet_Community_Logout local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Community_Logout::Packet_Community_Logout(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendTcpPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendPvPBuddyList

```asm
// === 0846cb80 CCommunityServerProxy::SendPvPBuddyList  [0x0846cb80-0x846cbbb] ===
 846cb80:	55                   	push   %ebp
 846cb81:	89 e5                	mov    %esp,%ebp
 846cb83:	83 ec 38             	sub    $0x38,%esp
 846cb86:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846cb89:	89 04 24             	mov    %eax,(%esp)
 846cb8c:	e8 6b 03 00 00       	call   846cefc <_ZN34Packet_Request_PvP_Buddy_Conn_ListC1Ev>
 846cb91:	8b 45 0c             	mov    0xc(%ebp),%eax
 846cb94:	89 45 f0             	mov    %eax,-0x10(%ebp)
 846cb97:	8b 45 10             	mov    0x10(%ebp),%eax
 846cb9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846cb9d:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 846cba1:	0f b7 d0             	movzwl %ax,%edx
 846cba4:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 846cba7:	89 54 24 08          	mov    %edx,0x8(%esp)
 846cbab:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cbaf:	8b 45 08             	mov    0x8(%ebp),%eax
 846cbb2:	89 04 24             	mov    %eax,(%esp)
 846cbb5:	e8 0a fc ff ff       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 846cbba:	c9                   	leave
 846cbbb:	c3                   	ret

```

```c
// CCommunityServerProxy::SendPvPBuddyList @ 0x846cb80

/* CCommunityServerProxy::SendPvPBuddyList(unsigned int, unsigned int) */

void __thiscall
CCommunityServerProxy::SendPvPBuddyList(CCommunityServerProxy *this,uint param_1,uint param_2)

{
  Packet_Request_PvP_Buddy_Conn_List local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Request_PvP_Buddy_Conn_List::Packet_Request_PvP_Buddy_Conn_List(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendTcpPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}

```

---

## SendRemovePvPBuddy

```asm
// === 0846cc88 CCommunityServerProxy::SendRemovePvPBuddy  [0x0846cc88-0x846ccec] ===
 846cc88:	55                   	push   %ebp
 846cc89:	89 e5                	mov    %esp,%ebp
 846cc8b:	83 ec 68             	sub    $0x68,%esp
 846cc8e:	8b 45 14             	mov    0x14(%ebp),%eax
 846cc91:	88 45 b4             	mov    %al,-0x4c(%ebp)
 846cc94:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846cc97:	89 04 24             	mov    %eax,(%esp)
 846cc9a:	e8 4d 03 00 00       	call   846cfec <_ZN31Packet_Request_Remove_PvP_BuddyC1Ev>
 846cc9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 846cca2:	89 45 d1             	mov    %eax,-0x2f(%ebp)
 846cca5:	8b 45 10             	mov    0x10(%ebp),%eax
 846cca8:	89 45 d5             	mov    %eax,-0x2b(%ebp)
 846ccab:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 846ccaf:	88 45 d9             	mov    %al,-0x27(%ebp)
 846ccb2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846ccb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 846ccb9:	8b 45 18             	mov    0x18(%ebp),%eax
 846ccbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 846ccc0:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846ccc3:	83 c0 13             	add    $0x13,%eax
 846ccc6:	89 04 24             	mov    %eax,(%esp)
 846ccc9:	e8 d2 0b c1 ff       	call   807d8a0 <memcpy@plt>
 846ccce:	0f b7 45 c9          	movzwl -0x37(%ebp),%eax
 846ccd2:	0f b7 d0             	movzwl %ax,%edx
 846ccd5:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846ccd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 846ccdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cce0:	8b 45 08             	mov    0x8(%ebp),%eax
 846cce3:	89 04 24             	mov    %eax,(%esp)
 846cce6:	e8 d9 fa ff ff       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 846cceb:	c9                   	leave
 846ccec:	c3                   	ret

```

```c
// CCommunityServerProxy::SendRemovePvPBuddy @ 0x846cc88

/* CCommunityServerProxy::SendRemovePvPBuddy(unsigned int, unsigned int, char, char*, int) */

void __thiscall
CCommunityServerProxy::SendRemovePvPBuddy
          (CCommunityServerProxy *this,uint param_1,uint param_2,char param_3,char *param_4,
          int param_5)

{
  Packet_Request_Remove_PvP_Buddy local_3d [2];
  ushort local_3b;
  uint local_33;
  uint local_2f;
  char local_2b;
  undefined1 auStack_2a [38];
  
  Packet_Request_Remove_PvP_Buddy::Packet_Request_Remove_PvP_Buddy(local_3d);
  local_33 = param_1;
  local_2f = param_2;
  local_2b = param_3;
  memcpy(auStack_2a,param_4,param_5);
  SendTcpPacket(this,(char *)local_3d,(uint)local_3b);
  return;
}

```

---

## SendReqAddPvPBuddy

```asm
// === 0846cbbc CCommunityServerProxy::SendReqAddPvPBuddy  [0x0846cbbc-0x846cc21] ===
 846cbbc:	55                   	push   %ebp
 846cbbd:	89 e5                	mov    %esp,%ebp
 846cbbf:	83 ec 68             	sub    $0x68,%esp
 846cbc2:	8b 45 14             	mov    0x14(%ebp),%eax
 846cbc5:	88 45 b4             	mov    %al,-0x4c(%ebp)
 846cbc8:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846cbcb:	89 04 24             	mov    %eax,(%esp)
 846cbce:	e8 61 03 00 00       	call   846cf34 <_ZN28Packet_Request_Add_PvP_BuddyC1Ev>
 846cbd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 846cbd6:	89 45 d1             	mov    %eax,-0x2f(%ebp)
 846cbd9:	8b 45 10             	mov    0x10(%ebp),%eax
 846cbdc:	89 45 d5             	mov    %eax,-0x2b(%ebp)
 846cbdf:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 846cbe3:	88 45 d9             	mov    %al,-0x27(%ebp)
 846cbe6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846cbe9:	89 44 24 08          	mov    %eax,0x8(%esp)
 846cbed:	8b 45 18             	mov    0x18(%ebp),%eax
 846cbf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cbf4:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846cbf7:	83 c0 13             	add    $0x13,%eax
 846cbfa:	89 04 24             	mov    %eax,(%esp)
 846cbfd:	e8 9e 0c c1 ff       	call   807d8a0 <memcpy@plt>
 846cc02:	0f b7 45 c9          	movzwl -0x37(%ebp),%eax
 846cc06:	0f b7 d0             	movzwl %ax,%edx
 846cc09:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846cc0c:	89 54 24 08          	mov    %edx,0x8(%esp)
 846cc10:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cc14:	8b 45 08             	mov    0x8(%ebp),%eax
 846cc17:	89 04 24             	mov    %eax,(%esp)
 846cc1a:	e8 a5 fb ff ff       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 846cc1f:	c9                   	leave
 846cc20:	c3                   	ret
 846cc21:	90                   	nop

```

```c
// CCommunityServerProxy::SendReqAddPvPBuddy @ 0x846cbbc

/* CCommunityServerProxy::SendReqAddPvPBuddy(unsigned int, unsigned int, char, char*, int) */

void __thiscall
CCommunityServerProxy::SendReqAddPvPBuddy
          (CCommunityServerProxy *this,uint param_1,uint param_2,char param_3,char *param_4,
          int param_5)

{
  Packet_Request_Add_PvP_Buddy local_3d [2];
  ushort local_3b;
  uint local_33;
  uint local_2f;
  char local_2b;
  undefined1 auStack_2a [38];
  
  Packet_Request_Add_PvP_Buddy::Packet_Request_Add_PvP_Buddy(local_3d);
  local_33 = param_1;
  local_2f = param_2;
  local_2b = param_3;
  memcpy(auStack_2a,param_4,param_5);
  SendTcpPacket(this,(char *)local_3d,(uint)local_3b);
  return;
}

```

---

## SendResAddPvPBuddy

```asm
// === 0846cc22 CCommunityServerProxy::SendResAddPvPBuddy  [0x0846cc22-0x846cc87] ===
 846cc22:	55                   	push   %ebp
 846cc23:	89 e5                	mov    %esp,%ebp
 846cc25:	83 ec 68             	sub    $0x68,%esp
 846cc28:	8b 45 14             	mov    0x14(%ebp),%eax
 846cc2b:	88 45 b4             	mov    %al,-0x4c(%ebp)
 846cc2e:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846cc31:	89 04 24             	mov    %eax,(%esp)
 846cc34:	e8 57 03 00 00       	call   846cf90 <_ZN29Packet_Response_Add_PvP_BuddyC1Ev>
 846cc39:	8b 45 0c             	mov    0xc(%ebp),%eax
 846cc3c:	89 45 d1             	mov    %eax,-0x2f(%ebp)
 846cc3f:	8b 45 10             	mov    0x10(%ebp),%eax
 846cc42:	89 45 d5             	mov    %eax,-0x2b(%ebp)
 846cc45:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 846cc49:	88 45 d9             	mov    %al,-0x27(%ebp)
 846cc4c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 846cc4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 846cc53:	8b 45 18             	mov    0x18(%ebp),%eax
 846cc56:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cc5a:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846cc5d:	83 c0 13             	add    $0x13,%eax
 846cc60:	89 04 24             	mov    %eax,(%esp)
 846cc63:	e8 38 0c c1 ff       	call   807d8a0 <memcpy@plt>
 846cc68:	0f b7 45 c9          	movzwl -0x37(%ebp),%eax
 846cc6c:	0f b7 d0             	movzwl %ax,%edx
 846cc6f:	8d 45 c7             	lea    -0x39(%ebp),%eax
 846cc72:	89 54 24 08          	mov    %edx,0x8(%esp)
 846cc76:	89 44 24 04          	mov    %eax,0x4(%esp)
 846cc7a:	8b 45 08             	mov    0x8(%ebp),%eax
 846cc7d:	89 04 24             	mov    %eax,(%esp)
 846cc80:	e8 3f fb ff ff       	call   846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>
 846cc85:	c9                   	leave
 846cc86:	c3                   	ret
 846cc87:	90                   	nop

```

```c
// CCommunityServerProxy::SendResAddPvPBuddy @ 0x846cc22

/* CCommunityServerProxy::SendResAddPvPBuddy(unsigned int, unsigned int, char, char*, int) */

void __thiscall
CCommunityServerProxy::SendResAddPvPBuddy
          (CCommunityServerProxy *this,uint param_1,uint param_2,char param_3,char *param_4,
          int param_5)

{
  Packet_Response_Add_PvP_Buddy local_3d [2];
  ushort local_3b;
  uint local_33;
  uint local_2f;
  char local_2b;
  undefined1 auStack_2a [38];
  
  Packet_Response_Add_PvP_Buddy::Packet_Response_Add_PvP_Buddy(local_3d);
  local_33 = param_1;
  local_2f = param_2;
  local_2b = param_3;
  memcpy(auStack_2a,param_4,param_5);
  SendTcpPacket(this,(char *)local_3d,(uint)local_3b);
  return;
}

```

---

## SendTcpPacket

```asm
// === 0846c7c4 CCommunityServerProxy::SendTcpPacket  [0x0846c7c4-0x846c82b] ===
 846c7c4:	55                   	push   %ebp
 846c7c5:	89 e5                	mov    %esp,%ebp
 846c7c7:	83 ec 28             	sub    $0x28,%esp
 846c7ca:	8b 45 08             	mov    0x8(%ebp),%eax
 846c7cd:	8b 80 f8 0d 03 00    	mov    0x30df8(%eax),%eax
 846c7d3:	83 f8 02             	cmp    $0x2,%eax
 846c7d6:	74 38                	je     846c810 <_ZN21CCommunityServerProxy13SendTcpPacketEPci+0x4c>
 846c7d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 846c7df:	00 
 846c7e0:	c7 44 24 08 d4 00 00 	movl   $0xd4,0x8(%esp)
 846c7e7:	00 
 846c7e8:	c7 44 24 04 80 62 c6 	movl   $0x8c66280,0x4(%esp)
 846c7ef:	08 
 846c7f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846c7f3:	89 04 24             	mov    %eax,(%esp)
 846c7f6:	e8 1d 2f 0e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 846c7fb:	c7 44 24 04 e4 52 c6 	movl   $0x8c652e4,0x4(%esp)
 846c802:	08 
 846c803:	8d 45 e8             	lea    -0x18(%ebp),%eax
 846c806:	89 04 24             	mov    %eax,(%esp)
 846c809:	e8 7a 2f 0e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 846c80e:	eb 19                	jmp    846c829 <_ZN21CCommunityServerProxy13SendTcpPacketEPci+0x65>
 846c810:	8b 45 08             	mov    0x8(%ebp),%eax
 846c813:	8b 55 10             	mov    0x10(%ebp),%edx
 846c816:	89 54 24 08          	mov    %edx,0x8(%esp)
 846c81a:	8b 55 0c             	mov    0xc(%ebp),%edx
 846c81d:	89 54 24 04          	mov    %edx,0x4(%esp)
 846c821:	89 04 24             	mov    %eax,(%esp)
 846c824:	e8 a3 17 e9 ff       	call   82fdfcc <_ZN8CNetworkILi100000ELi100000EE11send_packetEPci>
 846c829:	c9                   	leave
 846c82a:	c3                   	ret
 846c82b:	90                   	nop

```

```c
// CCommunityServerProxy::SendTcpPacket @ 0x846c7c4

/* CCommunityServerProxy::SendTcpPacket(char*, int) */

void __thiscall
CCommunityServerProxy::SendTcpPacket(CCommunityServerProxy *this,char *param_1,int param_2)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x30df8) == 2) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)this,param_1,param_2);
  }
  else {
    cMyTrace::cMyTrace(local_1c,"void CCommunityServerProxy::SendTcpPacket(char*, int)",0xd4,0);
    cMyTrace::operator()(local_1c,"cannot send packet because Community Server is disconnected");
  }
  return;
}

```

