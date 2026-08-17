# BaseServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## BaseServerProxy

```asm
// === 082fd350 BaseServerProxy::BaseServerProxy  [0x082fd350-0x82fd45f] ===
 82fd350:	55                   	push   %ebp
 82fd351:	89 e5                	mov    %esp,%ebp
 82fd353:	56                   	push   %esi
 82fd354:	53                   	push   %ebx
 82fd355:	83 ec 20             	sub    $0x20,%esp
 82fd358:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd35b:	c7 00 90 1a c2 08    	movl   $0x8c21a90,(%eax)
 82fd361:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd364:	83 c0 04             	add    $0x4,%eax
 82fd367:	89 04 24             	mov    %eax,(%esp)
 82fd36a:	e8 81 e1 fa ff       	call   82ab4f0 <_ZN8CNetworkILi100000ELi100000EEC1Ev>
 82fd36f:	8d 45 f6             	lea    -0xa(%ebp),%eax
 82fd372:	89 04 24             	mov    %eax,(%esp)
 82fd375:	e8 56 2d 3e 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82fd37a:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd37d:	8d 90 00 0e 03 00    	lea    0x30e00(%eax),%edx
 82fd383:	8d 45 f6             	lea    -0xa(%ebp),%eax
 82fd386:	89 44 24 08          	mov    %eax,0x8(%esp)
 82fd38a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fd38d:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fd391:	89 14 24             	mov    %edx,(%esp)
 82fd394:	e8 97 a2 40 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82fd399:	eb 18                	jmp    82fd3b3 <_ZN15BaseServerProxyC1EPciS0_+0x63>
 82fd39b:	89 d3                	mov    %edx,%ebx
 82fd39d:	89 c6                	mov    %eax,%esi
 82fd39f:	8d 45 f6             	lea    -0xa(%ebp),%eax
 82fd3a2:	89 04 24             	mov    %eax,(%esp)
 82fd3a5:	e8 46 2d 3e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82fd3aa:	89 f0                	mov    %esi,%eax
 82fd3ac:	89 da                	mov    %ebx,%edx
 82fd3ae:	e9 8f 00 00 00       	jmp    82fd442 <_ZN15BaseServerProxyC1EPciS0_+0xf2>
 82fd3b3:	8d 45 f6             	lea    -0xa(%ebp),%eax
 82fd3b6:	89 04 24             	mov    %eax,(%esp)
 82fd3b9:	e8 32 2d 3e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82fd3be:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd3c1:	8b 55 10             	mov    0x10(%ebp),%edx
 82fd3c4:	89 90 04 0e 03 00    	mov    %edx,0x30e04(%eax)
 82fd3ca:	8d 45 f7             	lea    -0x9(%ebp),%eax
 82fd3cd:	89 04 24             	mov    %eax,(%esp)
 82fd3d0:	e8 fb 2c 3e 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 82fd3d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd3d8:	8d 90 08 0e 03 00    	lea    0x30e08(%eax),%edx
 82fd3de:	8d 45 f7             	lea    -0x9(%ebp),%eax
 82fd3e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82fd3e5:	8b 45 14             	mov    0x14(%ebp),%eax
 82fd3e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fd3ec:	89 14 24             	mov    %edx,(%esp)
 82fd3ef:	e8 3c a2 40 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 82fd3f4:	eb 2d                	jmp    82fd423 <_ZN15BaseServerProxyC1EPciS0_+0xd3>
 82fd3f6:	89 d3                	mov    %edx,%ebx
 82fd3f8:	89 c6                	mov    %eax,%esi
 82fd3fa:	8d 45 f7             	lea    -0x9(%ebp),%eax
 82fd3fd:	89 04 24             	mov    %eax,(%esp)
 82fd400:	e8 eb 2c 3e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82fd405:	89 f0                	mov    %esi,%eax
 82fd407:	89 da                	mov    %ebx,%edx
 82fd409:	89 d3                	mov    %edx,%ebx
 82fd40b:	89 c6                	mov    %eax,%esi
 82fd40d:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd410:	05 00 0e 03 00       	add    $0x30e00,%eax
 82fd415:	89 04 24             	mov    %eax,(%esp)
 82fd418:	e8 c3 a7 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd41d:	89 f0                	mov    %esi,%eax
 82fd41f:	89 da                	mov    %ebx,%edx
 82fd421:	eb 1f                	jmp    82fd442 <_ZN15BaseServerProxyC1EPciS0_+0xf2>
 82fd423:	8d 45 f7             	lea    -0x9(%ebp),%eax
 82fd426:	89 04 24             	mov    %eax,(%esp)
 82fd429:	e8 c2 2c 3e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 82fd42e:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd431:	c7 80 fc 0d 03 00 00 	movl   $0x0,0x30dfc(%eax)
 82fd438:	00 00 00 
 82fd43b:	83 c4 20             	add    $0x20,%esp
 82fd43e:	5b                   	pop    %ebx
 82fd43f:	5e                   	pop    %esi
 82fd440:	5d                   	pop    %ebp
 82fd441:	c3                   	ret
 82fd442:	89 d3                	mov    %edx,%ebx
 82fd444:	89 c6                	mov    %eax,%esi
 82fd446:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd449:	83 c0 04             	add    $0x4,%eax
 82fd44c:	89 04 24             	mov    %eax,(%esp)
 82fd44f:	e8 3a e1 fa ff       	call   82ab58e <_ZN8CNetworkILi100000ELi100000EED1Ev>
 82fd454:	89 f0                	mov    %esi,%eax
 82fd456:	89 da                	mov    %ebx,%edx
 82fd458:	89 04 24             	mov    %eax,(%esp)
 82fd45b:	e8 f0 62 7e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// BaseServerProxy::BaseServerProxy @ 0x82fd350

/* BaseServerProxy::BaseServerProxy(char*, int, char*) */

void __thiscall
BaseServerProxy::BaseServerProxy(BaseServerProxy *this,char *param_1,int param_2,char *param_3)

{
  allocator<char> local_e;
  allocator<char> local_d;
  
  *(undefined ***)this = &PTR_OnDisconnect_08c21a90;
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)(this + 4));
  std::allocator<char>::allocator();
                    /* try { // try from 082fd394 to 082fd398 has its CatchHandler @ 082fd39b */
  std::string::string((string *)(this + 0x30e00),param_1,(allocator *)&local_e);
  std::allocator<char>::~allocator(&local_e);
  *(int *)(this + 0x30e04) = param_2;
  std::allocator<char>::allocator();
                    /* try { // try from 082fd3ef to 082fd3f3 has its CatchHandler @ 082fd3f6 */
  std::string::string((string *)(this + 0x30e08),param_3,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  *(undefined4 *)(this + 0x30dfc) = 0;
  return;
}

```

---

## Disconnect

```asm
// === 082fd6e4 BaseServerProxy::Disconnect  [0x082fd6e4-0x82fd829] ===
 82fd6e4:	55                   	push   %ebp
 82fd6e5:	89 e5                	mov    %esp,%ebp
 82fd6e7:	57                   	push   %edi
 82fd6e8:	56                   	push   %esi
 82fd6e9:	53                   	push   %ebx
 82fd6ea:	83 ec 5c             	sub    $0x5c,%esp
 82fd6ed:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd6f0:	83 c0 04             	add    $0x4,%eax
 82fd6f3:	89 04 24             	mov    %eax,(%esp)
 82fd6f6:	e8 53 08 00 00       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 82fd6fb:	89 c7                	mov    %eax,%edi
 82fd6fd:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd700:	8b 80 04 0e 03 00    	mov    0x30e04(%eax),%eax
 82fd706:	89 45 c0             	mov    %eax,-0x40(%ebp)
 82fd709:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd70c:	05 00 0e 03 00       	add    $0x30e00,%eax
 82fd711:	89 04 24             	mov    %eax,(%esp)
 82fd714:	e8 d7 8d 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd719:	89 c6                	mov    %eax,%esi
 82fd71b:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd71e:	8b 80 fc 0d 03 00    	mov    0x30dfc(%eax),%eax
 82fd724:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 82fd727:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fd72a:	8b 55 08             	mov    0x8(%ebp),%edx
 82fd72d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fd731:	89 04 24             	mov    %eax,(%esp)
 82fd734:	e8 33 06 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fd739:	83 ec 04             	sub    $0x4,%esp
 82fd73c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fd73f:	89 04 24             	mov    %eax,(%esp)
 82fd742:	e8 a9 8d 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd747:	89 c3                	mov    %eax,%ebx
 82fd749:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fd750:	00 
 82fd751:	c7 44 24 08 48 01 00 	movl   $0x148,0x8(%esp)
 82fd758:	00 
 82fd759:	c7 44 24 04 20 1a c2 	movl   $0x8c21a20,0x4(%esp)
 82fd760:	08 
 82fd761:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82fd764:	89 04 24             	mov    %eax,(%esp)
 82fd767:	e8 ac 1f 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fd76c:	89 7c 24 18          	mov    %edi,0x18(%esp)
 82fd770:	8b 45 c0             	mov    -0x40(%ebp),%eax
 82fd773:	89 44 24 14          	mov    %eax,0x14(%esp)
 82fd777:	89 74 24 10          	mov    %esi,0x10(%esp)
 82fd77b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 82fd77e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82fd782:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fd786:	c7 44 24 04 4c 0a c2 	movl   $0x8c20a4c,0x4(%esp)
 82fd78d:	08 
 82fd78e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82fd791:	89 04 24             	mov    %eax,(%esp)
 82fd794:	e8 ef 1f 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fd799:	eb 1b                	jmp    82fd7b6 <_ZN15BaseServerProxy10DisconnectEv+0xd2>
 82fd79b:	89 d3                	mov    %edx,%ebx
 82fd79d:	89 c6                	mov    %eax,%esi
 82fd79f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fd7a2:	89 04 24             	mov    %eax,(%esp)
 82fd7a5:	e8 36 a4 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd7aa:	89 f0                	mov    %esi,%eax
 82fd7ac:	89 da                	mov    %ebx,%edx
 82fd7ae:	89 04 24             	mov    %eax,(%esp)
 82fd7b1:	e8 9a 5f 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fd7b6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fd7b9:	89 04 24             	mov    %eax,(%esp)
 82fd7bc:	e8 1f a4 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd7c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd7c4:	05 00 0e 03 00       	add    $0x30e00,%eax
 82fd7c9:	89 04 24             	mov    %eax,(%esp)
 82fd7cc:	e8 9f 8e 40 00       	call   8706670 <_ZNKSs6lengthEv>
 82fd7d1:	85 c0                	test   %eax,%eax
 82fd7d3:	74 0d                	je     82fd7e2 <_ZN15BaseServerProxy10DisconnectEv+0xfe>
 82fd7d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd7d8:	8b 80 04 0e 03 00    	mov    0x30e04(%eax),%eax
 82fd7de:	85 c0                	test   %eax,%eax
 82fd7e0:	75 07                	jne    82fd7e9 <_ZN15BaseServerProxy10DisconnectEv+0x105>
 82fd7e2:	b8 01 00 00 00       	mov    $0x1,%eax
 82fd7e7:	eb 05                	jmp    82fd7ee <_ZN15BaseServerProxy10DisconnectEv+0x10a>
 82fd7e9:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd7ee:	84 c0                	test   %al,%al
 82fd7f0:	75 2c                	jne    82fd81e <_ZN15BaseServerProxy10DisconnectEv+0x13a>
 82fd7f2:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd7f5:	83 c0 04             	add    $0x4,%eax
 82fd7f8:	89 04 24             	mov    %eax,(%esp)
 82fd7fb:	e8 58 07 00 00       	call   82fdf58 <_ZN8CNetworkILi100000ELi100000EE10disconnectEv>
 82fd800:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd803:	c7 80 fc 0d 03 00 00 	movl   $0x0,0x30dfc(%eax)
 82fd80a:	00 00 00 
 82fd80d:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd810:	8b 00                	mov    (%eax),%eax
 82fd812:	8b 10                	mov    (%eax),%edx
 82fd814:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd817:	89 04 24             	mov    %eax,(%esp)
 82fd81a:	ff d2                	call   *%edx
 82fd81c:	eb 01                	jmp    82fd81f <_ZN15BaseServerProxy10DisconnectEv+0x13b>
 82fd81e:	90                   	nop
 82fd81f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82fd822:	83 c4 00             	add    $0x0,%esp
 82fd825:	5b                   	pop    %ebx
 82fd826:	5e                   	pop    %esi
 82fd827:	5f                   	pop    %edi
 82fd828:	5d                   	pop    %ebp
 82fd829:	c3                   	ret

```

```c
// BaseServerProxy::Disconnect @ 0x82fd6e4

/* BaseServerProxy::Disconnect() */

void __thiscall BaseServerProxy::Disconnect(BaseServerProxy *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  string local_30 [4];
  cMyTrace local_2c [28];
  
  uVar4 = CNetwork<100000,100000>::get_socket((CNetwork<100000,100000> *)(this + 4));
  uVar1 = *(undefined4 *)(this + 0x30e04);
  uVar5 = std::string::c_str((string *)(this + 0x30e00));
  uVar2 = *(undefined4 *)(this + 0x30dfc);
  GetServerName();
                    /* try { // try from 082fd742 to 082fd798 has its CatchHandler @ 082fd79b */
  uVar6 = std::string::c_str(local_30);
  cMyTrace::cMyTrace(local_2c,"virtual void BaseServerProxy::Disconnect()",0x148,0);
  cMyTrace::operator()
            (local_2c,
             "BaseServerProxy::Disconnect(), ServerName:%s,SocketState:%d,IP:%s,Port:%d,Socket:%d",
             uVar6,uVar2,uVar5,uVar1,uVar4);
  std::string::~string(local_30);
  iVar7 = std::string::length((string *)(this + 0x30e00));
  if ((iVar7 == 0) || (*(int *)(this + 0x30e04) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)(this + 4));
    *(undefined4 *)(this + 0x30dfc) = 0;
    (*(code *)**(undefined4 **)this)(this);
  }
  return;
}

```

---

## Init

```asm
// === 082fd460 BaseServerProxy::Init  [0x082fd460-0x82fd47b] ===
 82fd460:	55                   	push   %ebp
 82fd461:	89 e5                	mov    %esp,%ebp
 82fd463:	83 ec 18             	sub    $0x18,%esp
 82fd466:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82fd46d:	00 
 82fd46e:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd471:	89 04 24             	mov    %eax,(%esp)
 82fd474:	e8 03 00 00 00       	call   82fd47c <_ZN15BaseServerProxy7InitTcpEb>
 82fd479:	c9                   	leave
 82fd47a:	c3                   	ret
 82fd47b:	90                   	nop

```

```c
// BaseServerProxy::Init @ 0x82fd460

/* BaseServerProxy::Init() */

void __thiscall BaseServerProxy::Init(BaseServerProxy *this)

{
  InitTcp(this,true);
  return;
}

```

---

## InitTcp

```asm
// === 082fd47c BaseServerProxy::InitTcp  [0x082fd47c-0x82fd6e3] ===
 82fd47c:	55                   	push   %ebp
 82fd47d:	89 e5                	mov    %esp,%ebp
 82fd47f:	57                   	push   %edi
 82fd480:	56                   	push   %esi
 82fd481:	53                   	push   %ebx
 82fd482:	83 ec 6c             	sub    $0x6c,%esp
 82fd485:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fd488:	88 45 b4             	mov    %al,-0x4c(%ebp)
 82fd48b:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd48e:	05 00 0e 03 00       	add    $0x30e00,%eax
 82fd493:	89 04 24             	mov    %eax,(%esp)
 82fd496:	e8 d5 91 40 00       	call   8706670 <_ZNKSs6lengthEv>
 82fd49b:	85 c0                	test   %eax,%eax
 82fd49d:	74 0d                	je     82fd4ac <_ZN15BaseServerProxy7InitTcpEb+0x30>
 82fd49f:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd4a2:	8b 80 04 0e 03 00    	mov    0x30e04(%eax),%eax
 82fd4a8:	85 c0                	test   %eax,%eax
 82fd4aa:	75 07                	jne    82fd4b3 <_ZN15BaseServerProxy7InitTcpEb+0x37>
 82fd4ac:	b8 01 00 00 00       	mov    $0x1,%eax
 82fd4b1:	eb 05                	jmp    82fd4b8 <_ZN15BaseServerProxy7InitTcpEb+0x3c>
 82fd4b3:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd4b8:	84 c0                	test   %al,%al
 82fd4ba:	74 0a                	je     82fd4c6 <_ZN15BaseServerProxy7InitTcpEb+0x4a>
 82fd4bc:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd4c1:	e9 12 02 00 00       	jmp    82fd6d8 <_ZN15BaseServerProxy7InitTcpEb+0x25c>
 82fd4c6:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd4c9:	8b 40 04             	mov    0x4(%eax),%eax
 82fd4cc:	85 c0                	test   %eax,%eax
 82fd4ce:	0f 89 ff 01 00 00    	jns    82fd6d3 <_ZN15BaseServerProxy7InitTcpEb+0x257>
 82fd4d4:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 82fd4d8:	0f 84 fc 00 00 00    	je     82fd5da <_ZN15BaseServerProxy7InitTcpEb+0x15e>
 82fd4de:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd4e1:	8b 98 04 0e 03 00    	mov    0x30e04(%eax),%ebx
 82fd4e7:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd4ea:	05 00 0e 03 00       	add    $0x30e00,%eax
 82fd4ef:	89 04 24             	mov    %eax,(%esp)
 82fd4f2:	e8 f9 8f 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd4f7:	8b 55 08             	mov    0x8(%ebp),%edx
 82fd4fa:	83 c2 04             	add    $0x4,%edx
 82fd4fd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fd501:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fd505:	89 14 24             	mov    %edx,(%esp)
 82fd508:	e8 8c 08 00 00       	call   82fdd99 <_ZN8CNetworkILi100000ELi100000EE22CreateConnectionSocketERiPKci>
 82fd50d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82fd510:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82fd514:	0f 95 c0             	setne  %al
 82fd517:	84 c0                	test   %al,%al
 82fd519:	0f 84 b4 01 00 00    	je     82fd6d3 <_ZN15BaseServerProxy7InitTcpEb+0x257>
 82fd51f:	e8 4c 08 d8 ff       	call   807dd70 <__errno_location@plt>
 82fd524:	8b 00                	mov    (%eax),%eax
 82fd526:	89 04 24             	mov    %eax,(%esp)
 82fd529:	e8 02 02 d8 ff       	call   807d730 <strerror@plt>
 82fd52e:	89 c6                	mov    %eax,%esi
 82fd530:	e8 3b 08 d8 ff       	call   807dd70 <__errno_location@plt>
 82fd535:	8b 00                	mov    (%eax),%eax
 82fd537:	89 45 ac             	mov    %eax,-0x54(%ebp)
 82fd53a:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 82fd53d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fd540:	8b 55 08             	mov    0x8(%ebp),%edx
 82fd543:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fd547:	89 04 24             	mov    %eax,(%esp)
 82fd54a:	e8 1d 08 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fd54f:	83 ec 04             	sub    $0x4,%esp
 82fd552:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fd555:	89 04 24             	mov    %eax,(%esp)
 82fd558:	e8 93 8f 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd55d:	89 c3                	mov    %eax,%ebx
 82fd55f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fd566:	00 
 82fd567:	c7 44 24 08 34 01 00 	movl   $0x134,0x8(%esp)
 82fd56e:	00 
 82fd56f:	c7 44 24 04 60 1a c2 	movl   $0x8c21a60,0x4(%esp)
 82fd576:	08 
 82fd577:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82fd57a:	89 04 24             	mov    %eax,(%esp)
 82fd57d:	e8 96 21 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fd582:	89 74 24 14          	mov    %esi,0x14(%esp)
 82fd586:	8b 45 ac             	mov    -0x54(%ebp),%eax
 82fd589:	89 44 24 10          	mov    %eax,0x10(%esp)
 82fd58d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82fd591:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fd595:	c7 44 24 04 20 0a c2 	movl   $0x8c20a20,0x4(%esp)
 82fd59c:	08 
 82fd59d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82fd5a0:	89 04 24             	mov    %eax,(%esp)
 82fd5a3:	e8 e0 21 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fd5a8:	eb 1b                	jmp    82fd5c5 <_ZN15BaseServerProxy7InitTcpEb+0x149>
 82fd5aa:	89 d3                	mov    %edx,%ebx
 82fd5ac:	89 c6                	mov    %eax,%esi
 82fd5ae:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fd5b1:	89 04 24             	mov    %eax,(%esp)
 82fd5b4:	e8 27 a6 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd5b9:	89 f0                	mov    %esi,%eax
 82fd5bb:	89 da                	mov    %ebx,%edx
 82fd5bd:	89 04 24             	mov    %eax,(%esp)
 82fd5c0:	e8 8b 61 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fd5c5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fd5c8:	89 04 24             	mov    %eax,(%esp)
 82fd5cb:	e8 10 a6 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd5d0:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd5d5:	e9 fe 00 00 00       	jmp    82fd6d8 <_ZN15BaseServerProxy7InitTcpEb+0x25c>
 82fd5da:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd5dd:	8b 98 04 0e 03 00    	mov    0x30e04(%eax),%ebx
 82fd5e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd5e6:	05 00 0e 03 00       	add    $0x30e00,%eax
 82fd5eb:	89 04 24             	mov    %eax,(%esp)
 82fd5ee:	e8 fd 8e 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd5f3:	8b 55 08             	mov    0x8(%ebp),%edx
 82fd5f6:	83 c2 04             	add    $0x4,%edx
 82fd5f9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fd5fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fd601:	89 14 24             	mov    %edx,(%esp)
 82fd604:	e8 92 08 00 00       	call   82fde9b <_ZN8CNetworkILi100000ELi100000EE27CreateConnectionBlockSocketERiPKci>
 82fd609:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82fd60c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82fd610:	0f 95 c0             	setne  %al
 82fd613:	84 c0                	test   %al,%al
 82fd615:	0f 84 b8 00 00 00    	je     82fd6d3 <_ZN15BaseServerProxy7InitTcpEb+0x257>
 82fd61b:	e8 50 07 d8 ff       	call   807dd70 <__errno_location@plt>
 82fd620:	8b 00                	mov    (%eax),%eax
 82fd622:	89 04 24             	mov    %eax,(%esp)
 82fd625:	e8 06 01 d8 ff       	call   807d730 <strerror@plt>
 82fd62a:	89 c6                	mov    %eax,%esi
 82fd62c:	e8 3f 07 d8 ff       	call   807dd70 <__errno_location@plt>
 82fd631:	8b 00                	mov    (%eax),%eax
 82fd633:	89 45 b0             	mov    %eax,-0x50(%ebp)
 82fd636:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 82fd639:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fd63c:	8b 55 08             	mov    0x8(%ebp),%edx
 82fd63f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fd643:	89 04 24             	mov    %eax,(%esp)
 82fd646:	e8 21 07 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fd64b:	83 ec 04             	sub    $0x4,%esp
 82fd64e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fd651:	89 04 24             	mov    %eax,(%esp)
 82fd654:	e8 97 8e 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd659:	89 c3                	mov    %eax,%ebx
 82fd65b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fd662:	00 
 82fd663:	c7 44 24 08 3d 01 00 	movl   $0x13d,0x8(%esp)
 82fd66a:	00 
 82fd66b:	c7 44 24 04 60 1a c2 	movl   $0x8c21a60,0x4(%esp)
 82fd672:	08 
 82fd673:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fd676:	89 04 24             	mov    %eax,(%esp)
 82fd679:	e8 9a 20 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fd67e:	89 74 24 14          	mov    %esi,0x14(%esp)
 82fd682:	8b 45 b0             	mov    -0x50(%ebp),%eax
 82fd685:	89 44 24 10          	mov    %eax,0x10(%esp)
 82fd689:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82fd68d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fd691:	c7 44 24 04 20 0a c2 	movl   $0x8c20a20,0x4(%esp)
 82fd698:	08 
 82fd699:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fd69c:	89 04 24             	mov    %eax,(%esp)
 82fd69f:	e8 e4 20 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fd6a4:	eb 1b                	jmp    82fd6c1 <_ZN15BaseServerProxy7InitTcpEb+0x245>
 82fd6a6:	89 d3                	mov    %edx,%ebx
 82fd6a8:	89 c6                	mov    %eax,%esi
 82fd6aa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fd6ad:	89 04 24             	mov    %eax,(%esp)
 82fd6b0:	e8 2b a5 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd6b5:	89 f0                	mov    %esi,%eax
 82fd6b7:	89 da                	mov    %ebx,%edx
 82fd6b9:	89 04 24             	mov    %eax,(%esp)
 82fd6bc:	e8 8f 60 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fd6c1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fd6c4:	89 04 24             	mov    %eax,(%esp)
 82fd6c7:	e8 14 a5 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd6cc:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd6d1:	eb 05                	jmp    82fd6d8 <_ZN15BaseServerProxy7InitTcpEb+0x25c>
 82fd6d3:	b8 01 00 00 00       	mov    $0x1,%eax
 82fd6d8:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82fd6db:	83 c4 00             	add    $0x0,%esp
 82fd6de:	5b                   	pop    %ebx
 82fd6df:	5e                   	pop    %esi
 82fd6e0:	5f                   	pop    %edi
 82fd6e1:	5d                   	pop    %ebp
 82fd6e2:	c3                   	ret
 82fd6e3:	90                   	nop

```

```c
// BaseServerProxy::InitTcp @ 0x82fd47c

/* BaseServerProxy::InitTcp(bool) */

undefined4 __thiscall BaseServerProxy::InitTcp(BaseServerProxy *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  string local_48 [4];
  cMyTrace local_44 [16];
  string local_34 [4];
  cMyTrace local_30 [16];
  int local_20;
  
  iVar3 = std::string::length((string *)(this + 0x30e00));
  if ((iVar3 == 0) || (*(int *)(this + 0x30e04) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (*(int *)(this + 4) < 0) {
      if (param_1) {
        iVar3 = *(int *)(this + 0x30e04);
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x30e00));
        local_20 = CNetwork<100000,100000>::CreateConnectionSocket((int *)(this + 4),pcVar4,iVar3);
        if (local_20 != 0) {
          piVar5 = __errno_location();
          pcVar4 = strerror(*piVar5);
          piVar5 = __errno_location();
          iVar2 = local_20;
          iVar3 = *piVar5;
          GetServerName();
                    /* try { // try from 082fd558 to 082fd5a7 has its CatchHandler @ 082fd5aa */
          uVar6 = std::string::c_str(local_48);
          cMyTrace::cMyTrace(local_44,"bool BaseServerProxy::InitTcp(bool)",0x134,0);
          cMyTrace::operator()
                    (local_44,"%s CreateConnectionSocket() error(%d:%d:%s)",uVar6,iVar2,iVar3,pcVar4
                    );
          std::string::~string(local_48);
          return 0;
        }
      }
      else {
        iVar3 = *(int *)(this + 0x30e04);
        pcVar4 = (char *)std::string::c_str((string *)(this + 0x30e00));
        local_20 = CNetwork<100000,100000>::CreateConnectionBlockSocket
                             ((int *)(this + 4),pcVar4,iVar3);
        if (local_20 != 0) {
          piVar5 = __errno_location();
          pcVar4 = strerror(*piVar5);
          piVar5 = __errno_location();
          iVar2 = local_20;
          iVar3 = *piVar5;
          GetServerName();
                    /* try { // try from 082fd654 to 082fd6a3 has its CatchHandler @ 082fd6a6 */
          uVar6 = std::string::c_str(local_34);
          cMyTrace::cMyTrace(local_30,"bool BaseServerProxy::InitTcp(bool)",0x13d,0);
          cMyTrace::operator()
                    (local_30,"%s CreateConnectionSocket() error(%d:%d:%s)",uVar6,iVar2,iVar3,pcVar4
                    );
          std::string::~string(local_34);
          return 0;
        }
      }
    }
    return 1;
  }
  return 0;
}

```

---

## OnDisconnect

```asm
// === 082fd82a BaseServerProxy::OnDisconnect  [0x082fd82a-0x82fd82f] ===
 82fd82a:	55                   	push   %ebp
 82fd82b:	89 e5                	mov    %esp,%ebp
 82fd82d:	5d                   	pop    %ebp
 82fd82e:	c3                   	ret
 82fd82f:	90                   	nop

```

```c
// BaseServerProxy::OnDisconnect @ 0x82fd82a

/* BaseServerProxy::OnDisconnect() */

void BaseServerProxy::OnDisconnect(void)

{
  return;
}

```

---

## OnTcpError

```asm
// === 082fdc2e BaseServerProxy::OnTcpError  [0x082fdc2e-0x82fdd0e] ===
 82fdc2e:	55                   	push   %ebp
 82fdc2f:	89 e5                	mov    %esp,%ebp
 82fdc31:	57                   	push   %edi
 82fdc32:	56                   	push   %esi
 82fdc33:	53                   	push   %ebx
 82fdc34:	83 ec 4c             	sub    $0x4c,%esp
 82fdc37:	e8 34 01 d8 ff       	call   807dd70 <__errno_location@plt>
 82fdc3c:	8b 00                	mov    (%eax),%eax
 82fdc3e:	85 c0                	test   %eax,%eax
 82fdc40:	0f 84 b9 00 00 00    	je     82fdcff <_ZN15BaseServerProxy10OnTcpErrorEv+0xd1>
 82fdc46:	e8 25 01 d8 ff       	call   807dd70 <__errno_location@plt>
 82fdc4b:	8b 00                	mov    (%eax),%eax
 82fdc4d:	89 04 24             	mov    %eax,(%esp)
 82fdc50:	e8 db fa d7 ff       	call   807d730 <strerror@plt>
 82fdc55:	89 c7                	mov    %eax,%edi
 82fdc57:	8b 45 08             	mov    0x8(%ebp),%eax
 82fdc5a:	89 04 24             	mov    %eax,(%esp)
 82fdc5d:	e8 74 a2 ff ff       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 82fdc62:	89 04 24             	mov    %eax,(%esp)
 82fdc65:	e8 e4 02 00 00       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 82fdc6a:	89 c6                	mov    %eax,%esi
 82fdc6c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fdc6f:	8b 55 08             	mov    0x8(%ebp),%edx
 82fdc72:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fdc76:	89 04 24             	mov    %eax,(%esp)
 82fdc79:	e8 ee 00 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fdc7e:	83 ec 04             	sub    $0x4,%esp
 82fdc81:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fdc84:	89 04 24             	mov    %eax,(%esp)
 82fdc87:	e8 64 88 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fdc8c:	89 c3                	mov    %eax,%ebx
 82fdc8e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fdc95:	00 
 82fdc96:	c7 44 24 08 9f 01 00 	movl   $0x19f,0x8(%esp)
 82fdc9d:	00 
 82fdc9e:	c7 44 24 04 20 19 c2 	movl   $0x8c21920,0x4(%esp)
 82fdca5:	08 
 82fdca6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82fdca9:	89 04 24             	mov    %eax,(%esp)
 82fdcac:	e8 67 1a 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fdcb1:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82fdcb5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82fdcb9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fdcbd:	c7 44 24 04 7c 0b c2 	movl   $0x8c20b7c,0x4(%esp)
 82fdcc4:	08 
 82fdcc5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 82fdcc8:	89 04 24             	mov    %eax,(%esp)
 82fdccb:	e8 b8 1a 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fdcd0:	eb 1b                	jmp    82fdced <_ZN15BaseServerProxy10OnTcpErrorEv+0xbf>
 82fdcd2:	89 d3                	mov    %edx,%ebx
 82fdcd4:	89 c6                	mov    %eax,%esi
 82fdcd6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fdcd9:	89 04 24             	mov    %eax,(%esp)
 82fdcdc:	e8 ff 9e 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fdce1:	89 f0                	mov    %esi,%eax
 82fdce3:	89 da                	mov    %ebx,%edx
 82fdce5:	89 04 24             	mov    %eax,(%esp)
 82fdce8:	e8 63 5a 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fdced:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fdcf0:	89 04 24             	mov    %eax,(%esp)
 82fdcf3:	e8 e8 9e 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fdcf8:	b8 00 00 00 00       	mov    $0x0,%eax
 82fdcfd:	eb 05                	jmp    82fdd04 <_ZN15BaseServerProxy10OnTcpErrorEv+0xd6>
 82fdcff:	b8 01 00 00 00       	mov    $0x1,%eax
 82fdd04:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82fdd07:	83 c4 00             	add    $0x0,%esp
 82fdd0a:	5b                   	pop    %ebx
 82fdd0b:	5e                   	pop    %esi
 82fdd0c:	5f                   	pop    %edi
 82fdd0d:	5d                   	pop    %ebp
 82fdd0e:	c3                   	ret

```

```c
// BaseServerProxy::OnTcpError @ 0x82fdc2e

/* BaseServerProxy::OnTcpError() */

bool __thiscall BaseServerProxy::OnTcpError(BaseServerProxy *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  string local_30 [4];
  cMyTrace local_2c [28];
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar4 = CNetwork<100000,100000>::get_socket(this_00);
    GetServerName();
                    /* try { // try from 082fdc87 to 082fdccf has its CatchHandler @ 082fdcd2 */
    uVar5 = std::string::c_str(local_30);
    cMyTrace::cMyTrace(local_2c,"bool BaseServerProxy::OnTcpError()",0x19f,0);
    cMyTrace::operator()(local_2c,"%s OnError() Socket[%d] Error(%s)",uVar5,uVar4,pcVar3);
    std::string::~string(local_30);
  }
  return iVar1 == 0;
}

```

---

## OnTcpRecv

```asm
// === 082fd90e BaseServerProxy::OnTcpRecv  [0x082fd90e-0x82fdaa9] ===
 82fd90e:	55                   	push   %ebp
 82fd90f:	89 e5                	mov    %esp,%ebp
 82fd911:	56                   	push   %esi
 82fd912:	53                   	push   %ebx
 82fd913:	83 ec 40             	sub    $0x40,%esp
 82fd916:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd919:	83 c0 04             	add    $0x4,%eax
 82fd91c:	89 04 24             	mov    %eax,(%esp)
 82fd91f:	e8 da 08 00 00       	call   82fe1fe <_ZN8CNetworkILi100000ELi100000EE11recv_packetEv>
 82fd924:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82fd927:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82fd92b:	0f 8e ce 00 00 00    	jle    82fd9ff <_ZN15BaseServerProxy9OnTcpRecvEv+0xf1>
 82fd931:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd934:	8b 00                	mov    (%eax),%eax
 82fd936:	83 c0 08             	add    $0x8,%eax
 82fd939:	8b 10                	mov    (%eax),%edx
 82fd93b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82fd93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fd942:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd945:	89 04 24             	mov    %eax,(%esp)
 82fd948:	ff d2                	call   *%edx
 82fd94a:	83 f0 01             	xor    $0x1,%eax
 82fd94d:	84 c0                	test   %al,%al
 82fd94f:	0f 84 a0 00 00 00    	je     82fd9f5 <_ZN15BaseServerProxy9OnTcpRecvEv+0xe7>
 82fd955:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fd958:	8b 55 08             	mov    0x8(%ebp),%edx
 82fd95b:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fd95f:	89 04 24             	mov    %eax,(%esp)
 82fd962:	e8 05 04 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fd967:	83 ec 04             	sub    $0x4,%esp
 82fd96a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fd96d:	89 04 24             	mov    %eax,(%esp)
 82fd970:	e8 7b 8b 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd975:	89 c3                	mov    %eax,%ebx
 82fd977:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fd97e:	00 
 82fd97f:	c7 44 24 08 6f 01 00 	movl   $0x16f,0x8(%esp)
 82fd986:	00 
 82fd987:	c7 44 24 04 a0 19 c2 	movl   $0x8c219a0,0x4(%esp)
 82fd98e:	08 
 82fd98f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82fd992:	89 04 24             	mov    %eax,(%esp)
 82fd995:	e8 7e 1d 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fd99a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fd99e:	c7 44 24 04 d0 0a c2 	movl   $0x8c20ad0,0x4(%esp)
 82fd9a5:	08 
 82fd9a6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82fd9a9:	89 04 24             	mov    %eax,(%esp)
 82fd9ac:	e8 d7 1d 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fd9b1:	eb 1b                	jmp    82fd9ce <_ZN15BaseServerProxy9OnTcpRecvEv+0xc0>
 82fd9b3:	89 d3                	mov    %edx,%ebx
 82fd9b5:	89 c6                	mov    %eax,%esi
 82fd9b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fd9ba:	89 04 24             	mov    %eax,(%esp)
 82fd9bd:	e8 1e a2 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd9c2:	89 f0                	mov    %esi,%eax
 82fd9c4:	89 da                	mov    %ebx,%edx
 82fd9c6:	89 04 24             	mov    %eax,(%esp)
 82fd9c9:	e8 82 5d 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fd9ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82fd9d1:	89 04 24             	mov    %eax,(%esp)
 82fd9d4:	e8 07 a2 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd9d9:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd9dc:	8b 00                	mov    (%eax),%eax
 82fd9de:	83 c0 04             	add    $0x4,%eax
 82fd9e1:	8b 10                	mov    (%eax),%edx
 82fd9e3:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd9e6:	89 04 24             	mov    %eax,(%esp)
 82fd9e9:	ff d2                	call   *%edx
 82fd9eb:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd9f0:	e9 aa 00 00 00       	jmp    82fda9f <_ZN15BaseServerProxy9OnTcpRecvEv+0x191>
 82fd9f5:	b8 01 00 00 00       	mov    $0x1,%eax
 82fd9fa:	e9 a0 00 00 00       	jmp    82fda9f <_ZN15BaseServerProxy9OnTcpRecvEv+0x191>
 82fd9ff:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82fda03:	0f 89 91 00 00 00    	jns    82fda9a <_ZN15BaseServerProxy9OnTcpRecvEv+0x18c>
 82fda09:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fda0c:	8b 55 08             	mov    0x8(%ebp),%edx
 82fda0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fda13:	89 04 24             	mov    %eax,(%esp)
 82fda16:	e8 51 03 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fda1b:	83 ec 04             	sub    $0x4,%esp
 82fda1e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fda21:	89 04 24             	mov    %eax,(%esp)
 82fda24:	e8 c7 8a 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fda29:	89 44 24 14          	mov    %eax,0x14(%esp)
 82fda2d:	c7 44 24 10 f9 0a c2 	movl   $0x8c20af9,0x10(%esp)
 82fda34:	08 
 82fda35:	c7 44 24 0c 7a 01 00 	movl   $0x17a,0xc(%esp)
 82fda3c:	00 
 82fda3d:	c7 44 24 08 a0 19 c2 	movl   $0x8c219a0,0x8(%esp)
 82fda44:	08 
 82fda45:	c7 44 24 04 09 0b c2 	movl   $0x8c20b09,0x4(%esp)
 82fda4c:	08 
 82fda4d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82fda54:	e8 b1 61 7d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82fda59:	eb 1b                	jmp    82fda76 <_ZN15BaseServerProxy9OnTcpRecvEv+0x168>
 82fda5b:	89 d3                	mov    %edx,%ebx
 82fda5d:	89 c6                	mov    %eax,%esi
 82fda5f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fda62:	89 04 24             	mov    %eax,(%esp)
 82fda65:	e8 76 a1 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fda6a:	89 f0                	mov    %esi,%eax
 82fda6c:	89 da                	mov    %ebx,%edx
 82fda6e:	89 04 24             	mov    %eax,(%esp)
 82fda71:	e8 da 5c 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fda76:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82fda79:	89 04 24             	mov    %eax,(%esp)
 82fda7c:	e8 5f a1 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fda81:	8b 45 08             	mov    0x8(%ebp),%eax
 82fda84:	8b 00                	mov    (%eax),%eax
 82fda86:	83 c0 04             	add    $0x4,%eax
 82fda89:	8b 10                	mov    (%eax),%edx
 82fda8b:	8b 45 08             	mov    0x8(%ebp),%eax
 82fda8e:	89 04 24             	mov    %eax,(%esp)
 82fda91:	ff d2                	call   *%edx
 82fda93:	b8 00 00 00 00       	mov    $0x0,%eax
 82fda98:	eb 05                	jmp    82fda9f <_ZN15BaseServerProxy9OnTcpRecvEv+0x191>
 82fda9a:	b8 01 00 00 00       	mov    $0x1,%eax
 82fda9f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82fdaa2:	83 c4 00             	add    $0x0,%esp
 82fdaa5:	5b                   	pop    %ebx
 82fdaa6:	5e                   	pop    %esi
 82fdaa7:	5d                   	pop    %ebp
 82fdaa8:	c3                   	ret
 82fdaa9:	90                   	nop

```

```c
// BaseServerProxy::OnTcpRecv @ 0x82fd90e

/* BaseServerProxy::OnTcpRecv() */

undefined4 __thiscall BaseServerProxy::OnTcpRecv(BaseServerProxy *this)

{
  char cVar1;
  undefined4 uVar2;
  string local_28 [4];
  cMyTrace local_24 [16];
  string local_14 [4];
  int local_10;
  
  local_10 = CNetwork<100000,100000>::recv_packet((CNetwork<100000,100000> *)(this + 4));
  if (local_10 < 1) {
    if (local_10 < 0) {
      GetServerName();
                    /* try { // try from 082fda24 to 082fda58 has its CatchHandler @ 082fda5b */
      uVar2 = std::string::c_str(local_14);
      LogManager::logFormat
                (1,"BaseServerProxy.cpp","bool BaseServerProxy::OnTcpRecv()",0x17a,"%s maybe Die!!!"
                 ,uVar2);
      std::string::~string(local_14);
      (**(code **)(*(int *)this + 4))(this);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    cVar1 = (**(code **)(*(int *)this + 8))(this,local_10);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      GetServerName();
                    /* try { // try from 082fd970 to 082fd9b0 has its CatchHandler @ 082fd9b3 */
      uVar2 = std::string::c_str(local_28);
      cMyTrace::cMyTrace(local_24,"bool BaseServerProxy::OnTcpRecv()",0x16f,0);
      cMyTrace::operator()(local_24,"%s occur Error at parsing receive packet",uVar2);
      std::string::~string(local_28);
      (**(code **)(*(int *)this + 4))(this);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## OnTcpSend

```asm
// === 082fdaaa BaseServerProxy::OnTcpSend  [0x082fdaaa-0x82fdc2d] ===
 82fdaaa:	55                   	push   %ebp
 82fdaab:	89 e5                	mov    %esp,%ebp
 82fdaad:	57                   	push   %edi
 82fdaae:	56                   	push   %esi
 82fdaaf:	53                   	push   %ebx
 82fdab0:	83 ec 5c             	sub    $0x5c,%esp
 82fdab3:	8b 45 08             	mov    0x8(%ebp),%eax
 82fdab6:	83 c0 04             	add    $0x4,%eax
 82fdab9:	89 04 24             	mov    %eax,(%esp)
 82fdabc:	e8 91 08 00 00       	call   82fe352 <_ZN8CNetworkILi100000ELi100000EE11send_packetEv>
 82fdac1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 82fdac4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 82fdac8:	0f 89 4f 01 00 00    	jns    82fdc1d <_ZN15BaseServerProxy9OnTcpSendEv+0x173>
 82fdace:	e8 9d 02 d8 ff       	call   807dd70 <__errno_location@plt>
 82fdad3:	8b 00                	mov    (%eax),%eax
 82fdad5:	89 04 24             	mov    %eax,(%esp)
 82fdad8:	e8 53 fc d7 ff       	call   807d730 <strerror@plt>
 82fdadd:	89 c7                	mov    %eax,%edi
 82fdadf:	8b 45 08             	mov    0x8(%ebp),%eax
 82fdae2:	89 04 24             	mov    %eax,(%esp)
 82fdae5:	e8 ec a3 ff ff       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 82fdaea:	89 04 24             	mov    %eax,(%esp)
 82fdaed:	e8 5c 04 00 00       	call   82fdf4e <_ZN8CNetworkILi100000ELi100000EE10get_socketEv>
 82fdaf2:	89 c6                	mov    %eax,%esi
 82fdaf4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fdaf7:	8b 55 08             	mov    0x8(%ebp),%edx
 82fdafa:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fdafe:	89 04 24             	mov    %eax,(%esp)
 82fdb01:	e8 66 02 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fdb06:	83 ec 04             	sub    $0x4,%esp
 82fdb09:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fdb0c:	89 04 24             	mov    %eax,(%esp)
 82fdb0f:	e8 dc 89 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fdb14:	89 c3                	mov    %eax,%ebx
 82fdb16:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fdb1d:	00 
 82fdb1e:	c7 44 24 08 8f 01 00 	movl   $0x18f,0x8(%esp)
 82fdb25:	00 
 82fdb26:	c7 44 24 04 60 19 c2 	movl   $0x8c21960,0x4(%esp)
 82fdb2d:	08 
 82fdb2e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82fdb31:	89 04 24             	mov    %eax,(%esp)
 82fdb34:	e8 df 1b 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fdb39:	89 7c 24 10          	mov    %edi,0x10(%esp)
 82fdb3d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82fdb41:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fdb45:	c7 44 24 04 20 0b c2 	movl   $0x8c20b20,0x4(%esp)
 82fdb4c:	08 
 82fdb4d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82fdb50:	89 04 24             	mov    %eax,(%esp)
 82fdb53:	e8 30 1c 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fdb58:	eb 1b                	jmp    82fdb75 <_ZN15BaseServerProxy9OnTcpSendEv+0xcb>
 82fdb5a:	89 d3                	mov    %edx,%ebx
 82fdb5c:	89 c6                	mov    %eax,%esi
 82fdb5e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fdb61:	89 04 24             	mov    %eax,(%esp)
 82fdb64:	e8 77 a0 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fdb69:	89 f0                	mov    %esi,%eax
 82fdb6b:	89 da                	mov    %ebx,%edx
 82fdb6d:	89 04 24             	mov    %eax,(%esp)
 82fdb70:	e8 db 5b 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fdb75:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82fdb78:	89 04 24             	mov    %eax,(%esp)
 82fdb7b:	e8 60 a0 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fdb80:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fdb83:	8b 55 08             	mov    0x8(%ebp),%edx
 82fdb86:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fdb8a:	89 04 24             	mov    %eax,(%esp)
 82fdb8d:	e8 da 01 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fdb92:	83 ec 04             	sub    $0x4,%esp
 82fdb95:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fdb98:	89 04 24             	mov    %eax,(%esp)
 82fdb9b:	e8 50 89 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fdba0:	89 c3                	mov    %eax,%ebx
 82fdba2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fdba9:	00 
 82fdbaa:	c7 44 24 08 92 01 00 	movl   $0x192,0x8(%esp)
 82fdbb1:	00 
 82fdbb2:	c7 44 24 04 60 19 c2 	movl   $0x8c21960,0x4(%esp)
 82fdbb9:	08 
 82fdbba:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fdbbd:	89 04 24             	mov    %eax,(%esp)
 82fdbc0:	e8 53 1b 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fdbc5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fdbc9:	c7 44 24 04 44 0b c2 	movl   $0x8c20b44,0x4(%esp)
 82fdbd0:	08 
 82fdbd1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82fdbd4:	89 04 24             	mov    %eax,(%esp)
 82fdbd7:	e8 ac 1b 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fdbdc:	eb 1b                	jmp    82fdbf9 <_ZN15BaseServerProxy9OnTcpSendEv+0x14f>
 82fdbde:	89 d3                	mov    %edx,%ebx
 82fdbe0:	89 c6                	mov    %eax,%esi
 82fdbe2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fdbe5:	89 04 24             	mov    %eax,(%esp)
 82fdbe8:	e8 f3 9f 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fdbed:	89 f0                	mov    %esi,%eax
 82fdbef:	89 da                	mov    %ebx,%edx
 82fdbf1:	89 04 24             	mov    %eax,(%esp)
 82fdbf4:	e8 57 5b 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fdbf9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82fdbfc:	89 04 24             	mov    %eax,(%esp)
 82fdbff:	e8 dc 9f 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fdc04:	8b 45 08             	mov    0x8(%ebp),%eax
 82fdc07:	8b 00                	mov    (%eax),%eax
 82fdc09:	83 c0 04             	add    $0x4,%eax
 82fdc0c:	8b 10                	mov    (%eax),%edx
 82fdc0e:	8b 45 08             	mov    0x8(%ebp),%eax
 82fdc11:	89 04 24             	mov    %eax,(%esp)
 82fdc14:	ff d2                	call   *%edx
 82fdc16:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 82fdc1b:	eb 06                	jmp    82fdc23 <_ZN15BaseServerProxy9OnTcpSendEv+0x179>
 82fdc1d:	8b 45 08             	mov    0x8(%ebp),%eax
 82fdc20:	8b 40 1c             	mov    0x1c(%eax),%eax
 82fdc23:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82fdc26:	83 c4 00             	add    $0x0,%esp
 82fdc29:	5b                   	pop    %ebx
 82fdc2a:	5e                   	pop    %esi
 82fdc2b:	5f                   	pop    %edi
 82fdc2c:	5d                   	pop    %ebp
 82fdc2d:	c3                   	ret

```

```c
// BaseServerProxy::OnTcpSend @ 0x82fdaaa

/* BaseServerProxy::OnTcpSend() */

undefined4 __thiscall BaseServerProxy::OnTcpSend(BaseServerProxy *this)

{
  int *piVar1;
  char *pcVar2;
  CNetwork<100000,100000> *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  string local_48 [4];
  cMyTrace local_44 [16];
  string local_34 [4];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 4));
  if (local_20 < 0) {
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
    this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
    uVar3 = CNetwork<100000,100000>::get_socket(this_00);
    GetServerName();
                    /* try { // try from 082fdb0f to 082fdb57 has its CatchHandler @ 082fdb5a */
    uVar4 = std::string::c_str(local_48);
    cMyTrace::cMyTrace(local_44,"int BaseServerProxy::OnTcpSend()",399,0);
    cMyTrace::operator()(local_44,"%s OnSend() Socket[%d] Error(%s)",uVar4,uVar3,pcVar2);
    std::string::~string(local_48);
    GetServerName();
                    /* try { // try from 082fdb9b to 082fdbdb has its CatchHandler @ 082fdbde */
    uVar3 = std::string::c_str(local_34);
    cMyTrace::cMyTrace(local_30,"int BaseServerProxy::OnTcpSend()",0x192,0);
    cMyTrace::operator()(local_30,"Disconnect to %s (send_packet() returns minus value)",uVar3);
    std::string::~string(local_34);
    (**(code **)(*(int *)this + 4))(this);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x1c);
  }
  return uVar3;
}

```

---

## SendTcpPacket

```asm
// === 082fd830 BaseServerProxy::SendTcpPacket  [0x082fd830-0x82fd90d] ===
 82fd830:	55                   	push   %ebp
 82fd831:	89 e5                	mov    %esp,%ebp
 82fd833:	56                   	push   %esi
 82fd834:	53                   	push   %ebx
 82fd835:	83 ec 30             	sub    $0x30,%esp
 82fd838:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd83b:	8b 80 fc 0d 03 00    	mov    0x30dfc(%eax),%eax
 82fd841:	83 f8 02             	cmp    $0x2,%eax
 82fd844:	0f 84 8b 00 00 00    	je     82fd8d5 <_ZN15BaseServerProxy13SendTcpPacketEPci+0xa5>
 82fd84a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82fd84d:	8b 55 08             	mov    0x8(%ebp),%edx
 82fd850:	89 54 24 04          	mov    %edx,0x4(%esp)
 82fd854:	89 04 24             	mov    %eax,(%esp)
 82fd857:	e8 10 05 00 00       	call   82fdd6c <_ZN15BaseServerProxy13GetServerNameEv>
 82fd85c:	83 ec 04             	sub    $0x4,%esp
 82fd85f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82fd862:	89 04 24             	mov    %eax,(%esp)
 82fd865:	e8 86 8c 40 00       	call   87064f0 <_ZNKSs5c_strEv>
 82fd86a:	89 c3                	mov    %eax,%ebx
 82fd86c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82fd873:	00 
 82fd874:	c7 44 24 08 5d 01 00 	movl   $0x15d,0x8(%esp)
 82fd87b:	00 
 82fd87c:	c7 44 24 04 e0 19 c2 	movl   $0x8c219e0,0x4(%esp)
 82fd883:	08 
 82fd884:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fd887:	89 04 24             	mov    %eax,(%esp)
 82fd88a:	e8 89 1e 25 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82fd88f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82fd893:	c7 44 24 04 a0 0a c2 	movl   $0x8c20aa0,0x4(%esp)
 82fd89a:	08 
 82fd89b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82fd89e:	89 04 24             	mov    %eax,(%esp)
 82fd8a1:	e8 e2 1e 25 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82fd8a6:	eb 1b                	jmp    82fd8c3 <_ZN15BaseServerProxy13SendTcpPacketEPci+0x93>
 82fd8a8:	89 d3                	mov    %edx,%ebx
 82fd8aa:	89 c6                	mov    %eax,%esi
 82fd8ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82fd8af:	89 04 24             	mov    %eax,(%esp)
 82fd8b2:	e8 29 a3 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd8b7:	89 f0                	mov    %esi,%eax
 82fd8b9:	89 da                	mov    %ebx,%edx
 82fd8bb:	89 04 24             	mov    %eax,(%esp)
 82fd8be:	e8 8d 5e 7e 00       	call   8ae3750 <_Unwind_Resume>
 82fd8c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82fd8c6:	89 04 24             	mov    %eax,(%esp)
 82fd8c9:	e8 12 a3 40 00       	call   8707be0 <_ZNSsD1Ev>
 82fd8ce:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd8d3:	eb 2f                	jmp    82fd904 <_ZN15BaseServerProxy13SendTcpPacketEPci+0xd4>
 82fd8d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82fd8d8:	8d 50 04             	lea    0x4(%eax),%edx
 82fd8db:	8b 45 10             	mov    0x10(%ebp),%eax
 82fd8de:	89 44 24 08          	mov    %eax,0x8(%esp)
 82fd8e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82fd8e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82fd8e9:	89 14 24             	mov    %edx,(%esp)
 82fd8ec:	e8 db 06 00 00       	call   82fdfcc <_ZN8CNetworkILi100000ELi100000EE11send_packetEPci>
 82fd8f1:	c1 e8 1f             	shr    $0x1f,%eax
 82fd8f4:	84 c0                	test   %al,%al
 82fd8f6:	74 07                	je     82fd8ff <_ZN15BaseServerProxy13SendTcpPacketEPci+0xcf>
 82fd8f8:	b8 00 00 00 00       	mov    $0x0,%eax
 82fd8fd:	eb 05                	jmp    82fd904 <_ZN15BaseServerProxy13SendTcpPacketEPci+0xd4>
 82fd8ff:	b8 01 00 00 00       	mov    $0x1,%eax
 82fd904:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82fd907:	83 c4 00             	add    $0x0,%esp
 82fd90a:	5b                   	pop    %ebx
 82fd90b:	5e                   	pop    %esi
 82fd90c:	5d                   	pop    %ebp
 82fd90d:	c3                   	ret

```

```c
// BaseServerProxy::SendTcpPacket @ 0x82fd830

/* BaseServerProxy::SendTcpPacket(char*, int) */

undefined4 __thiscall
BaseServerProxy::SendTcpPacket(BaseServerProxy *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  string local_20 [4];
  cMyTrace local_1c [16];
  
  if (*(int *)(this + 0x30dfc) == 2) {
    iVar2 = CNetwork<100000,100000>::send_packet
                      ((CNetwork<100000,100000> *)(this + 4),param_1,param_2);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    GetServerName();
                    /* try { // try from 082fd865 to 082fd8a5 has its CatchHandler @ 082fd8a8 */
    uVar1 = std::string::c_str(local_20);
    cMyTrace::cMyTrace(local_1c,"bool BaseServerProxy::SendTcpPacket(char*, int)",0x15d,0);
    cMyTrace::operator()(local_1c,"cannot send packet because %s is disconnected",uVar1);
    std::string::~string(local_20);
    uVar1 = 0;
  }
  return uVar1;
}

```

