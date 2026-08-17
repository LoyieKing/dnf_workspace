# CPCRoomServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CPCRoomServerProxy

```asm
// === 084717dc CPCRoomServerProxy::CPCRoomServerProxy  [0x084717dc-0x8471873] ===
 84717dc:	55                   	push   %ebp
 84717dd:	89 e5                	mov    %esp,%ebp
 84717df:	56                   	push   %esi
 84717e0:	53                   	push   %ebx
 84717e1:	83 ec 20             	sub    $0x20,%esp
 84717e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84717e7:	89 04 24             	mov    %eax,(%esp)
 84717ea:	e8 01 9d e3 ff       	call   82ab4f0 <_ZN8CNetworkILi100000ELi100000EEC1Ev>
 84717ef:	8d 45 f7             	lea    -0x9(%ebp),%eax
 84717f2:	89 04 24             	mov    %eax,(%esp)
 84717f5:	e8 d6 e8 26 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 84717fa:	8b 45 08             	mov    0x8(%ebp),%eax
 84717fd:	8d 90 f8 0d 03 00    	lea    0x30df8(%eax),%edx
 8471803:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8471806:	89 44 24 08          	mov    %eax,0x8(%esp)
 847180a:	8b 45 0c             	mov    0xc(%ebp),%eax
 847180d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471811:	89 14 24             	mov    %edx,(%esp)
 8471814:	e8 17 5e 29 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8471819:	eb 2e                	jmp    8471849 <_ZN18CPCRoomServerProxyC1EPci+0x6d>
 847181b:	89 d3                	mov    %edx,%ebx
 847181d:	89 c6                	mov    %eax,%esi
 847181f:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8471822:	89 04 24             	mov    %eax,(%esp)
 8471825:	e8 c6 e8 26 00       	call   86e00f0 <_ZNSaIcED1Ev>
 847182a:	89 f0                	mov    %esi,%eax
 847182c:	89 da                	mov    %ebx,%edx
 847182e:	89 d3                	mov    %edx,%ebx
 8471830:	89 c6                	mov    %eax,%esi
 8471832:	8b 45 08             	mov    0x8(%ebp),%eax
 8471835:	89 04 24             	mov    %eax,(%esp)
 8471838:	e8 51 9d e3 ff       	call   82ab58e <_ZN8CNetworkILi100000ELi100000EED1Ev>
 847183d:	89 f0                	mov    %esi,%eax
 847183f:	89 da                	mov    %ebx,%edx
 8471841:	89 04 24             	mov    %eax,(%esp)
 8471844:	e8 07 1f 67 00       	call   8ae3750 <_Unwind_Resume>
 8471849:	8d 45 f7             	lea    -0x9(%ebp),%eax
 847184c:	89 04 24             	mov    %eax,(%esp)
 847184f:	e8 9c e8 26 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8471854:	8b 45 08             	mov    0x8(%ebp),%eax
 8471857:	8b 55 10             	mov    0x10(%ebp),%edx
 847185a:	89 90 fc 0d 03 00    	mov    %edx,0x30dfc(%eax)
 8471860:	8b 45 08             	mov    0x8(%ebp),%eax
 8471863:	c7 80 00 0e 03 00 00 	movl   $0x0,0x30e00(%eax)
 847186a:	00 00 00 
 847186d:	83 c4 20             	add    $0x20,%esp
 8471870:	5b                   	pop    %ebx
 8471871:	5e                   	pop    %esi
 8471872:	5d                   	pop    %ebp
 8471873:	c3                   	ret

```

```c
// CPCRoomServerProxy::CPCRoomServerProxy @ 0x84717dc

/* CPCRoomServerProxy::CPCRoomServerProxy(char*, int) */

void __thiscall
CPCRoomServerProxy::CPCRoomServerProxy(CPCRoomServerProxy *this,char *param_1,int param_2)

{
  allocator<char> local_d;
  
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)this);
  std::allocator<char>::allocator();
                    /* try { // try from 08471814 to 08471818 has its CatchHandler @ 0847181b */
  std::string::string((string *)(this + 0x30df8),param_1,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  *(int *)(this + 0x30dfc) = param_2;
  *(undefined4 *)(this + 0x30e00) = 0;
  return;
}

```

---

## Disconnect

```asm
// === 084719de CPCRoomServerProxy::Disconnect  [0x084719de-0x8471a31] ===
 84719de:	55                   	push   %ebp
 84719df:	89 e5                	mov    %esp,%ebp
 84719e1:	83 ec 18             	sub    $0x18,%esp
 84719e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84719e7:	05 f8 0d 03 00       	add    $0x30df8,%eax
 84719ec:	89 04 24             	mov    %eax,(%esp)
 84719ef:	e8 7c 4c 29 00       	call   8706670 <_ZNKSs6lengthEv>
 84719f4:	85 c0                	test   %eax,%eax
 84719f6:	74 0d                	je     8471a05 <_ZN18CPCRoomServerProxy10DisconnectEv+0x27>
 84719f8:	8b 45 08             	mov    0x8(%ebp),%eax
 84719fb:	8b 80 fc 0d 03 00    	mov    0x30dfc(%eax),%eax
 8471a01:	85 c0                	test   %eax,%eax
 8471a03:	75 07                	jne    8471a0c <_ZN18CPCRoomServerProxy10DisconnectEv+0x2e>
 8471a05:	b8 01 00 00 00       	mov    $0x1,%eax
 8471a0a:	eb 05                	jmp    8471a11 <_ZN18CPCRoomServerProxy10DisconnectEv+0x33>
 8471a0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8471a11:	84 c0                	test   %al,%al
 8471a13:	75 1a                	jne    8471a2f <_ZN18CPCRoomServerProxy10DisconnectEv+0x51>
 8471a15:	8b 45 08             	mov    0x8(%ebp),%eax
 8471a18:	89 04 24             	mov    %eax,(%esp)
 8471a1b:	e8 38 c5 e8 ff       	call   82fdf58 <_ZN8CNetworkILi100000ELi100000EE10disconnectEv>
 8471a20:	8b 45 08             	mov    0x8(%ebp),%eax
 8471a23:	c7 80 00 0e 03 00 00 	movl   $0x0,0x30e00(%eax)
 8471a2a:	00 00 00 
 8471a2d:	eb 01                	jmp    8471a30 <_ZN18CPCRoomServerProxy10DisconnectEv+0x52>
 8471a2f:	90                   	nop
 8471a30:	c9                   	leave
 8471a31:	c3                   	ret

```

```c
// CPCRoomServerProxy::Disconnect @ 0x84719de

/* CPCRoomServerProxy::Disconnect() */

void __thiscall CPCRoomServerProxy::Disconnect(CPCRoomServerProxy *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = std::string::length((string *)(this + 0x30df8));
  if ((iVar2 == 0) || (*(int *)(this + 0x30dfc) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)this);
    *(undefined4 *)(this + 0x30e00) = 0;
  }
  return;
}

```

---

## Init

```asm
// === 084718bc CPCRoomServerProxy::Init  [0x084718bc-0x84718e1] ===
 84718bc:	55                   	push   %ebp
 84718bd:	89 e5                	mov    %esp,%ebp
 84718bf:	83 ec 18             	sub    $0x18,%esp
 84718c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84718c5:	89 04 24             	mov    %eax,(%esp)
 84718c8:	e8 15 00 00 00       	call   84718e2 <_ZN18CPCRoomServerProxy7InitTcpEv>
 84718cd:	83 f0 01             	xor    $0x1,%eax
 84718d0:	84 c0                	test   %al,%al
 84718d2:	74 07                	je     84718db <_ZN18CPCRoomServerProxy4InitEv+0x1f>
 84718d4:	b8 00 00 00 00       	mov    $0x0,%eax
 84718d9:	eb 05                	jmp    84718e0 <_ZN18CPCRoomServerProxy4InitEv+0x24>
 84718db:	b8 01 00 00 00       	mov    $0x1,%eax
 84718e0:	c9                   	leave
 84718e1:	c3                   	ret

```

```c
// CPCRoomServerProxy::Init @ 0x84718bc

/* CPCRoomServerProxy::Init() */

bool __thiscall CPCRoomServerProxy::Init(CPCRoomServerProxy *this)

{
  char cVar1;
  
  cVar1 = InitTcp(this);
  return cVar1 == '\x01';
}

```

---

## InitTcp

```asm
// === 084718e2 CPCRoomServerProxy::InitTcp  [0x084718e2-0x84719dd] ===
 84718e2:	55                   	push   %ebp
 84718e3:	89 e5                	mov    %esp,%ebp
 84718e5:	57                   	push   %edi
 84718e6:	56                   	push   %esi
 84718e7:	53                   	push   %ebx
 84718e8:	83 ec 4c             	sub    $0x4c,%esp
 84718eb:	8b 45 08             	mov    0x8(%ebp),%eax
 84718ee:	05 f8 0d 03 00       	add    $0x30df8,%eax
 84718f3:	89 04 24             	mov    %eax,(%esp)
 84718f6:	e8 75 4d 29 00       	call   8706670 <_ZNKSs6lengthEv>
 84718fb:	85 c0                	test   %eax,%eax
 84718fd:	74 0d                	je     847190c <_ZN18CPCRoomServerProxy7InitTcpEv+0x2a>
 84718ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8471902:	8b 80 fc 0d 03 00    	mov    0x30dfc(%eax),%eax
 8471908:	85 c0                	test   %eax,%eax
 847190a:	75 07                	jne    8471913 <_ZN18CPCRoomServerProxy7InitTcpEv+0x31>
 847190c:	b8 01 00 00 00       	mov    $0x1,%eax
 8471911:	eb 05                	jmp    8471918 <_ZN18CPCRoomServerProxy7InitTcpEv+0x36>
 8471913:	b8 00 00 00 00       	mov    $0x0,%eax
 8471918:	84 c0                	test   %al,%al
 847191a:	74 0a                	je     8471926 <_ZN18CPCRoomServerProxy7InitTcpEv+0x44>
 847191c:	b8 00 00 00 00       	mov    $0x0,%eax
 8471921:	e9 b0 00 00 00       	jmp    84719d6 <_ZN18CPCRoomServerProxy7InitTcpEv+0xf4>
 8471926:	8b 45 08             	mov    0x8(%ebp),%eax
 8471929:	8b 00                	mov    (%eax),%eax
 847192b:	85 c0                	test   %eax,%eax
 847192d:	0f 89 9e 00 00 00    	jns    84719d1 <_ZN18CPCRoomServerProxy7InitTcpEv+0xef>
 8471933:	8b 45 08             	mov    0x8(%ebp),%eax
 8471936:	8b 98 fc 0d 03 00    	mov    0x30dfc(%eax),%ebx
 847193c:	8b 45 08             	mov    0x8(%ebp),%eax
 847193f:	05 f8 0d 03 00       	add    $0x30df8,%eax
 8471944:	89 04 24             	mov    %eax,(%esp)
 8471947:	e8 a4 4b 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 847194c:	8b 55 08             	mov    0x8(%ebp),%edx
 847194f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8471953:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471957:	89 14 24             	mov    %edx,(%esp)
 847195a:	e8 3a c4 e8 ff       	call   82fdd99 <_ZN8CNetworkILi100000ELi100000EE22CreateConnectionSocketERiPKci>
 847195f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8471962:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8471966:	0f 95 c0             	setne  %al
 8471969:	84 c0                	test   %al,%al
 847196b:	74 64                	je     84719d1 <_ZN18CPCRoomServerProxy7InitTcpEv+0xef>
 847196d:	e8 fe c3 c0 ff       	call   807dd70 <__errno_location@plt>
 8471972:	8b 00                	mov    (%eax),%eax
 8471974:	89 04 24             	mov    %eax,(%esp)
 8471977:	e8 b4 bd c0 ff       	call   807d730 <strerror@plt>
 847197c:	89 c3                	mov    %eax,%ebx
 847197e:	e8 ed c3 c0 ff       	call   807dd70 <__errno_location@plt>
 8471983:	8b 38                	mov    (%eax),%edi
 8471985:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8471988:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 847198f:	00 
 8471990:	c7 44 24 08 16 01 00 	movl   $0x116,0x8(%esp)
 8471997:	00 
 8471998:	c7 44 24 04 96 cc c6 	movl   $0x8c6cc96,0x4(%esp)
 847199f:	08 
 84719a0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84719a3:	89 04 24             	mov    %eax,(%esp)
 84719a6:	e8 6d dd 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84719ab:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84719af:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84719b3:	89 74 24 08          	mov    %esi,0x8(%esp)
 84719b7:	c7 44 24 04 60 bd c6 	movl   $0x8c6bd60,0x4(%esp)
 84719be:	08 
 84719bf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84719c2:	89 04 24             	mov    %eax,(%esp)
 84719c5:	e8 be dd 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84719ca:	b8 00 00 00 00       	mov    $0x0,%eax
 84719cf:	eb 05                	jmp    84719d6 <_ZN18CPCRoomServerProxy7InitTcpEv+0xf4>
 84719d1:	b8 01 00 00 00       	mov    $0x1,%eax
 84719d6:	83 c4 4c             	add    $0x4c,%esp
 84719d9:	5b                   	pop    %ebx
 84719da:	5e                   	pop    %esi
 84719db:	5f                   	pop    %edi
 84719dc:	5d                   	pop    %ebp
 84719dd:	c3                   	ret

```

```c
// CPCRoomServerProxy::InitTcp @ 0x84718e2

/* CPCRoomServerProxy::InitTcp() */

undefined4 __thiscall CPCRoomServerProxy::InitTcp(CPCRoomServerProxy *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = std::string::length((string *)(this + 0x30df8));
  if ((iVar3 == 0) || (*(int *)(this + 0x30dfc) == 0)) {
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
      iVar3 = *(int *)(this + 0x30dfc);
      pcVar5 = (char *)std::string::c_str((string *)(this + 0x30df8));
      local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)this,pcVar5,iVar3);
      if (local_20 != 0) {
        piVar6 = __errno_location();
        pcVar5 = strerror(*piVar6);
        piVar6 = __errno_location();
        iVar2 = local_20;
        iVar3 = *piVar6;
        cMyTrace::cMyTrace(local_30,"InitTcp",0x116,0);
        cMyTrace::operator()
                  (local_30,"CPCRoomServerProxy CreateConnectionSocket() error(%d:%d:%s)",iVar2,
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
// === 08471bd0 CPCRoomServerProxy::OnTcpError  [0x08471bd0-0x8471c59] ===
 8471bd0:	55                   	push   %ebp
 8471bd1:	89 e5                	mov    %esp,%ebp
 8471bd3:	56                   	push   %esi
 8471bd4:	53                   	push   %ebx
 8471bd5:	83 ec 20             	sub    $0x20,%esp
 8471bd8:	e8 93 c1 c0 ff       	call   807dd70 <__errno_location@plt>
 8471bdd:	8b 00                	mov    (%eax),%eax
 8471bdf:	85 c0                	test   %eax,%eax
 8471be1:	74 6b                	je     8471c4e <_ZN18CPCRoomServerProxy10OnTcpErrorEv+0x7e>
 8471be3:	e8 88 c1 c0 ff       	call   807dd70 <__errno_location@plt>
 8471be8:	8b 00                	mov    (%eax),%eax
 8471bea:	89 04 24             	mov    %eax,(%esp)
 8471bed:	e8 3e bb c0 ff       	call   807d730 <strerror@plt>
 8471bf2:	89 c6                	mov    %eax,%esi
 8471bf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8471bf7:	89 04 24             	mov    %eax,(%esp)
 8471bfa:	e8 09 02 00 00       	call   8471e08 <_ZN18CPCRoomServerProxy13GetTcpHandlerEv>
 8471bff:	89 04 24             	mov    %eax,(%esp)
 8471c02:	e8 47 c3 e8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 8471c07:	89 c3                	mov    %eax,%ebx
 8471c09:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8471c10:	00 
 8471c11:	c7 44 24 08 7f 01 00 	movl   $0x17f,0x8(%esp)
 8471c18:	00 
 8471c19:	c7 44 24 04 45 cc c6 	movl   $0x8c6cc45,0x4(%esp)
 8471c20:	08 
 8471c21:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471c24:	89 04 24             	mov    %eax,(%esp)
 8471c27:	e8 ec da 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8471c2c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8471c30:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8471c34:	c7 44 24 04 34 be c6 	movl   $0x8c6be34,0x4(%esp)
 8471c3b:	08 
 8471c3c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471c3f:	89 04 24             	mov    %eax,(%esp)
 8471c42:	e8 41 db 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8471c47:	b8 00 00 00 00       	mov    $0x0,%eax
 8471c4c:	eb 05                	jmp    8471c53 <_ZN18CPCRoomServerProxy10OnTcpErrorEv+0x83>
 8471c4e:	b8 01 00 00 00       	mov    $0x1,%eax
 8471c53:	83 c4 20             	add    $0x20,%esp
 8471c56:	5b                   	pop    %ebx
 8471c57:	5e                   	pop    %esi
 8471c58:	5d                   	pop    %ebp
 8471c59:	c3                   	ret

```

```c
// CPCRoomServerProxy::OnTcpError @ 0x8471bd0

/* CPCRoomServerProxy::OnTcpError() */

bool __thiscall CPCRoomServerProxy::OnTcpError(CPCRoomServerProxy *this)

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
    cMyTrace::cMyTrace(local_1c,"OnTcpError",0x17f,0);
    cMyTrace::operator()(local_1c,"PCRoomServer OnError() Socket[%d] Error(%s)",uVar4,pcVar3);
  }
  return iVar1 == 0;
}

```

---

## OnTcpRecv

```asm
// === 08471a9a CPCRoomServerProxy::OnTcpRecv  [0x08471a9a-0x8471b31] ===
 8471a9a:	55                   	push   %ebp
 8471a9b:	89 e5                	mov    %esp,%ebp
 8471a9d:	83 ec 38             	sub    $0x38,%esp
 8471aa0:	8b 45 08             	mov    0x8(%ebp),%eax
 8471aa3:	89 04 24             	mov    %eax,(%esp)
 8471aa6:	e8 53 c7 e8 ff       	call   82fe1fe <_ZN8CNetworkILi100000ELi100000EE11recv_packetEv>
 8471aab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8471aae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8471ab2:	7e 32                	jle    8471ae6 <_ZN18CPCRoomServerProxy9OnTcpRecvEv+0x4c>
 8471ab4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8471ab7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471abb:	8b 45 08             	mov    0x8(%ebp),%eax
 8471abe:	89 04 24             	mov    %eax,(%esp)
 8471ac1:	e8 94 01 00 00       	call   8471c5a <_ZN18CPCRoomServerProxy7ParsingEi>
 8471ac6:	83 f0 01             	xor    $0x1,%eax
 8471ac9:	84 c0                	test   %al,%al
 8471acb:	74 12                	je     8471adf <_ZN18CPCRoomServerProxy9OnTcpRecvEv+0x45>
 8471acd:	8b 45 08             	mov    0x8(%ebp),%eax
 8471ad0:	89 04 24             	mov    %eax,(%esp)
 8471ad3:	e8 06 ff ff ff       	call   84719de <_ZN18CPCRoomServerProxy10DisconnectEv>
 8471ad8:	b8 00 00 00 00       	mov    $0x0,%eax
 8471add:	eb 50                	jmp    8471b2f <_ZN18CPCRoomServerProxy9OnTcpRecvEv+0x95>
 8471adf:	b8 01 00 00 00       	mov    $0x1,%eax
 8471ae4:	eb 49                	jmp    8471b2f <_ZN18CPCRoomServerProxy9OnTcpRecvEv+0x95>
 8471ae6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8471aea:	79 3e                	jns    8471b2a <_ZN18CPCRoomServerProxy9OnTcpRecvEv+0x90>
 8471aec:	c7 44 24 10 d5 bd c6 	movl   $0x8c6bdd5,0x10(%esp)
 8471af3:	08 
 8471af4:	c7 44 24 0c 55 01 00 	movl   $0x155,0xc(%esp)
 8471afb:	00 
 8471afc:	c7 44 24 08 66 cc c6 	movl   $0x8c6cc66,0x8(%esp)
 8471b03:	08 
 8471b04:	c7 44 24 04 f0 bd c6 	movl   $0x8c6bdf0,0x4(%esp)
 8471b0b:	08 
 8471b0c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8471b13:	e8 f2 20 66 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8471b18:	8b 45 08             	mov    0x8(%ebp),%eax
 8471b1b:	89 04 24             	mov    %eax,(%esp)
 8471b1e:	e8 bb fe ff ff       	call   84719de <_ZN18CPCRoomServerProxy10DisconnectEv>
 8471b23:	b8 00 00 00 00       	mov    $0x0,%eax
 8471b28:	eb 05                	jmp    8471b2f <_ZN18CPCRoomServerProxy9OnTcpRecvEv+0x95>
 8471b2a:	b8 01 00 00 00       	mov    $0x1,%eax
 8471b2f:	c9                   	leave
 8471b30:	c3                   	ret
 8471b31:	90                   	nop

```

```c
// CPCRoomServerProxy::OnTcpRecv @ 0x8471a9a

/* CPCRoomServerProxy::OnTcpRecv() */

undefined4 __thiscall CPCRoomServerProxy::OnTcpRecv(CPCRoomServerProxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)this);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      LogManager::logFormat
                (1,"DF_PCRoomServerProxy.cpp","OnTcpRecv",0x155,"PCRoom Server maybe Die!!!");
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
// === 08471b32 CPCRoomServerProxy::OnTcpSend  [0x08471b32-0x8471bcf] ===
 8471b32:	55                   	push   %ebp
 8471b33:	89 e5                	mov    %esp,%ebp
 8471b35:	56                   	push   %esi
 8471b36:	53                   	push   %ebx
 8471b37:	83 ec 20             	sub    $0x20,%esp
 8471b3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8471b3d:	89 04 24             	mov    %eax,(%esp)
 8471b40:	e8 0d c8 e8 ff       	call   82fe352 <_ZN8CNetworkILi100000ELi100000EE11send_packetEv>
 8471b45:	c1 e8 1f             	shr    $0x1f,%eax
 8471b48:	84 c0                	test   %al,%al
 8471b4a:	74 76                	je     8471bc2 <_ZN18CPCRoomServerProxy9OnTcpSendEv+0x90>
 8471b4c:	e8 1f c2 c0 ff       	call   807dd70 <__errno_location@plt>
 8471b51:	8b 00                	mov    (%eax),%eax
 8471b53:	89 04 24             	mov    %eax,(%esp)
 8471b56:	e8 d5 bb c0 ff       	call   807d730 <strerror@plt>
 8471b5b:	89 c6                	mov    %eax,%esi
 8471b5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8471b60:	89 04 24             	mov    %eax,(%esp)
 8471b63:	e8 a0 02 00 00       	call   8471e08 <_ZN18CPCRoomServerProxy13GetTcpHandlerEv>
 8471b68:	89 04 24             	mov    %eax,(%esp)
 8471b6b:	e8 de c3 e8 ff       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 8471b70:	89 c3                	mov    %eax,%ebx
 8471b72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8471b79:	00 
 8471b7a:	c7 44 24 08 6d 01 00 	movl   $0x16d,0x8(%esp)
 8471b81:	00 
 8471b82:	c7 44 24 04 50 cc c6 	movl   $0x8c6cc50,0x4(%esp)
 8471b89:	08 
 8471b8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471b8d:	89 04 24             	mov    %eax,(%esp)
 8471b90:	e8 83 db 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8471b95:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8471b99:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8471b9d:	c7 44 24 04 0c be c6 	movl   $0x8c6be0c,0x4(%esp)
 8471ba4:	08 
 8471ba5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471ba8:	89 04 24             	mov    %eax,(%esp)
 8471bab:	e8 d8 db 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8471bb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8471bb3:	89 04 24             	mov    %eax,(%esp)
 8471bb6:	e8 23 fe ff ff       	call   84719de <_ZN18CPCRoomServerProxy10DisconnectEv>
 8471bbb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8471bc0:	eb 06                	jmp    8471bc8 <_ZN18CPCRoomServerProxy9OnTcpSendEv+0x96>
 8471bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8471bc5:	8b 40 18             	mov    0x18(%eax),%eax
 8471bc8:	83 c4 20             	add    $0x20,%esp
 8471bcb:	5b                   	pop    %ebx
 8471bcc:	5e                   	pop    %esi
 8471bcd:	5d                   	pop    %ebp
 8471bce:	c3                   	ret
 8471bcf:	90                   	nop

```

```c
// CPCRoomServerProxy::OnTcpSend @ 0x8471b32

/* CPCRoomServerProxy::OnTcpSend() */

undefined4 __thiscall CPCRoomServerProxy::OnTcpSend(CPCRoomServerProxy *this)

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
    cMyTrace::cMyTrace(local_1c,"OnTcpSend",0x16d,0);
    cMyTrace::operator()(local_1c,"PCRoom OnSend() Socket[%d] Error(%s)",uVar4,pcVar3);
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
// === 08471c5a CPCRoomServerProxy::Parsing  [0x08471c5a-0x8471c73] ===
 8471c5a:	55                   	push   %ebp
 8471c5b:	89 e5                	mov    %esp,%ebp
 8471c5d:	83 ec 18             	sub    $0x18,%esp
 8471c60:	8b 45 08             	mov    0x8(%ebp),%eax
 8471c63:	8b 55 0c             	mov    0xc(%ebp),%edx
 8471c66:	89 54 24 04          	mov    %edx,0x4(%esp)
 8471c6a:	89 04 24             	mov    %eax,(%esp)
 8471c6d:	e8 de b3 ff ff       	call   846d050 <_ZN8CNetworkILi100000ELi100000EE20Parsing_ServerPacketEi>
 8471c72:	c9                   	leave
 8471c73:	c3                   	ret

```

```c
// CPCRoomServerProxy::Parsing @ 0x8471c5a

/* CPCRoomServerProxy::Parsing(int) */

void __thiscall CPCRoomServerProxy::Parsing(CPCRoomServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)this,param_1);
  return;
}

```

---

## SendTcpPacket

```asm
// === 08471a32 CPCRoomServerProxy::SendTcpPacket  [0x08471a32-0x8471a99] ===
 8471a32:	55                   	push   %ebp
 8471a33:	89 e5                	mov    %esp,%ebp
 8471a35:	83 ec 28             	sub    $0x28,%esp
 8471a38:	8b 45 08             	mov    0x8(%ebp),%eax
 8471a3b:	8b 80 00 0e 03 00    	mov    0x30e00(%eax),%eax
 8471a41:	83 f8 02             	cmp    $0x2,%eax
 8471a44:	74 38                	je     8471a7e <_ZN18CPCRoomServerProxy13SendTcpPacketEPci+0x4c>
 8471a46:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8471a4d:	00 
 8471a4e:	c7 44 24 08 38 01 00 	movl   $0x138,0x8(%esp)
 8471a55:	00 
 8471a56:	c7 44 24 04 7c cc c6 	movl   $0x8c6cc7c,0x4(%esp)
 8471a5d:	08 
 8471a5e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471a61:	89 04 24             	mov    %eax,(%esp)
 8471a64:	e8 af dc 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8471a69:	c7 44 24 04 9c bd c6 	movl   $0x8c6bd9c,0x4(%esp)
 8471a70:	08 
 8471a71:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8471a74:	89 04 24             	mov    %eax,(%esp)
 8471a77:	e8 0c dd 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8471a7c:	eb 19                	jmp    8471a97 <_ZN18CPCRoomServerProxy13SendTcpPacketEPci+0x65>
 8471a7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8471a81:	8b 55 10             	mov    0x10(%ebp),%edx
 8471a84:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471a88:	8b 55 0c             	mov    0xc(%ebp),%edx
 8471a8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8471a8f:	89 04 24             	mov    %eax,(%esp)
 8471a92:	e8 35 c5 e8 ff       	call   82fdfcc <_ZN8CNetworkILi100000ELi100000EE11send_packetEPci>
 8471a97:	c9                   	leave
 8471a98:	c3                   	ret
 8471a99:	90                   	nop

```

```c
// CPCRoomServerProxy::SendTcpPacket @ 0x8471a32

/* CPCRoomServerProxy::SendTcpPacket(char*, int) */

void __thiscall
CPCRoomServerProxy::SendTcpPacket(CPCRoomServerProxy *this,char *param_1,int param_2)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x30e00) == 2) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)this,param_1,param_2);
  }
  else {
    cMyTrace::cMyTrace(local_1c,"SendTcpPacket",0x138,0);
    cMyTrace::operator()(local_1c,"cannot send packet because PCRoom Server is disconnected");
  }
  return;
}

```

---

## ~CPCRoomServerProxy

```asm
// === 08471874 CPCRoomServerProxy::~CPCRoomServerProxy  [0x08471874-0x84718bb] ===
 8471874:	55                   	push   %ebp
 8471875:	89 e5                	mov    %esp,%ebp
 8471877:	56                   	push   %esi
 8471878:	53                   	push   %ebx
 8471879:	83 ec 10             	sub    $0x10,%esp
 847187c:	8b 45 08             	mov    0x8(%ebp),%eax
 847187f:	05 f8 0d 03 00       	add    $0x30df8,%eax
 8471884:	89 04 24             	mov    %eax,(%esp)
 8471887:	e8 54 63 29 00       	call   8707be0 <_ZNSsD1Ev>
 847188c:	eb 1b                	jmp    84718a9 <_ZN18CPCRoomServerProxyD1Ev+0x35>
 847188e:	89 d3                	mov    %edx,%ebx
 8471890:	89 c6                	mov    %eax,%esi
 8471892:	8b 45 08             	mov    0x8(%ebp),%eax
 8471895:	89 04 24             	mov    %eax,(%esp)
 8471898:	e8 f1 9c e3 ff       	call   82ab58e <_ZN8CNetworkILi100000ELi100000EED1Ev>
 847189d:	89 f0                	mov    %esi,%eax
 847189f:	89 da                	mov    %ebx,%edx
 84718a1:	89 04 24             	mov    %eax,(%esp)
 84718a4:	e8 a7 1e 67 00       	call   8ae3750 <_Unwind_Resume>
 84718a9:	8b 45 08             	mov    0x8(%ebp),%eax
 84718ac:	89 04 24             	mov    %eax,(%esp)
 84718af:	e8 da 9c e3 ff       	call   82ab58e <_ZN8CNetworkILi100000ELi100000EED1Ev>
 84718b4:	83 c4 10             	add    $0x10,%esp
 84718b7:	5b                   	pop    %ebx
 84718b8:	5e                   	pop    %esi
 84718b9:	5d                   	pop    %ebp
 84718ba:	c3                   	ret
 84718bb:	90                   	nop

```

```c
// CPCRoomServerProxy::~CPCRoomServerProxy @ 0x8471874

/* CPCRoomServerProxy::~CPCRoomServerProxy() */

void __thiscall CPCRoomServerProxy::~CPCRoomServerProxy(CPCRoomServerProxy *this)

{
                    /* try { // try from 08471887 to 0847188b has its CatchHandler @ 0847188e */
  std::string::~string((string *)(this + 0x30df8));
  CNetwork<100000,100000>::~CNetwork((CNetwork<100000,100000> *)this);
  return;
}

```

