# CAuctionServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CAuctionServerProxy

```asm
// === 082f7a90 CAuctionServerProxy::CAuctionServerProxy  [0x082f7a90-0x82f7ad5] ===
 82f7a90:	55                   	push   %ebp
 82f7a91:	89 e5                	mov    %esp,%ebp
 82f7a93:	83 ec 18             	sub    $0x18,%esp
 82f7a96:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7a99:	8b 55 14             	mov    0x14(%ebp),%edx
 82f7a9c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82f7aa0:	8b 55 10             	mov    0x10(%ebp),%edx
 82f7aa3:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f7aa7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82f7aaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f7aae:	89 04 24             	mov    %eax,(%esp)
 82f7ab1:	e8 9a 58 00 00       	call   82fd350 <_ZN15BaseServerProxyC1EPciS0_>
 82f7ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7ab9:	c7 00 10 ec c1 08    	movl   $0x8c1ec10,(%eax)
 82f7abf:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7ac2:	c6 80 0c 0e 03 00 00 	movb   $0x0,0x30e0c(%eax)
 82f7ac9:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7acc:	89 04 24             	mov    %eax,(%esp)
 82f7acf:	e8 02 00 00 00       	call   82f7ad6 <_ZN19CAuctionServerProxy4InitEv>
 82f7ad4:	c9                   	leave
 82f7ad5:	c3                   	ret

```

```c
// CAuctionServerProxy::CAuctionServerProxy @ 0x82f7a90

/* CAuctionServerProxy::CAuctionServerProxy(char*, int, char*) */

void __thiscall
CAuctionServerProxy::CAuctionServerProxy
          (CAuctionServerProxy *this,char *param_1,int param_2,char *param_3)

{
  BaseServerProxy::BaseServerProxy((BaseServerProxy *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_OnDisconnect_08c1ec10;
  this[0x30e0c] = (CAuctionServerProxy)0x0;
  Init(this);
  return;
}

```

---

## Init

```asm
// === 082f7ad6 CAuctionServerProxy::Init  [0x082f7ad6-0x82f7ae5] ===
 82f7ad6:	55                   	push   %ebp
 82f7ad7:	89 e5                	mov    %esp,%ebp
 82f7ad9:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7adc:	c6 80 0c 0e 03 00 00 	movb   $0x0,0x30e0c(%eax)
 82f7ae3:	5d                   	pop    %ebp
 82f7ae4:	c3                   	ret
 82f7ae5:	90                   	nop

```

```c
// CAuctionServerProxy::Init @ 0x82f7ad6

/* CAuctionServerProxy::Init() */

void __thiscall CAuctionServerProxy::Init(CAuctionServerProxy *this)

{
  this[0x30e0c] = (CAuctionServerProxy)0x0;
  return;
}

```

---

## OnDisconnect

```asm
// === 082f7ae6 CAuctionServerProxy::OnDisconnect  [0x082f7ae6-0x82f7af9] ===
 82f7ae6:	55                   	push   %ebp
 82f7ae7:	89 e5                	mov    %esp,%ebp
 82f7ae9:	83 ec 04             	sub    $0x4,%esp
 82f7aec:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7aef:	89 04 24             	mov    %eax,(%esp)
 82f7af2:	e8 df ff ff ff       	call   82f7ad6 <_ZN19CAuctionServerProxy4InitEv>
 82f7af7:	c9                   	leave
 82f7af8:	c3                   	ret
 82f7af9:	90                   	nop

```

```c
// CAuctionServerProxy::OnDisconnect @ 0x82f7ae6

/* CAuctionServerProxy::OnDisconnect() */

void __thiscall CAuctionServerProxy::OnDisconnect(CAuctionServerProxy *this)

{
  Init(this);
  return;
}

```

---

## Parsing

```asm
// === 082f7afa CAuctionServerProxy::Parsing  [0x082f7afa-0x82f7b1b] ===
 82f7afa:	55                   	push   %ebp
 82f7afb:	89 e5                	mov    %esp,%ebp
 82f7afd:	83 ec 18             	sub    $0x18,%esp
 82f7b00:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7b03:	89 04 24             	mov    %eax,(%esp)
 82f7b06:	e8 cb 03 00 00       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 82f7b0b:	8b 55 0c             	mov    0xc(%ebp),%edx
 82f7b0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f7b12:	89 04 24             	mov    %eax,(%esp)
 82f7b15:	e8 c8 03 00 00       	call   82f7ee2 <_ZN8CNetworkILi100000ELi100000EE27Parsing_AuctionServerPacketEi>
 82f7b1a:	c9                   	leave
 82f7b1b:	c3                   	ret

```

```c
// CAuctionServerProxy::Parsing @ 0x82f7afa

/* CAuctionServerProxy::Parsing(int) */

void __thiscall CAuctionServerProxy::Parsing(CAuctionServerProxy *this,int param_1)

{
  CNetwork<100000,100000> *this_00;
  
  this_00 = (CNetwork<100000,100000> *)BaseServerProxy::GetTcpHandler((BaseServerProxy *)this);
  CNetwork<100000,100000>::Parsing_AuctionServerPacket(this_00,param_1);
  return;
}

```

---

## SendCheckAuctionReadyPacket

```asm
// === 082f7b7a CAuctionServerProxy::SendCheckAuctionReadyPacket  [0x082f7b7a-0x82f7b9f] ===
 82f7b7a:	55                   	push   %ebp
 82f7b7b:	89 e5                	mov    %esp,%ebp
 82f7b7d:	83 ec 38             	sub    $0x38,%esp
 82f7b80:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 82f7b83:	89 04 24             	mov    %eax,(%esp)
 82f7b86:	e8 13 02 00 00       	call   82f7d9e <_ZN34PCK_AUCTION_CHECK_AUCTION_READY_GAC1Ev>
 82f7b8b:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 82f7b8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f7b92:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7b95:	89 04 24             	mov    %eax,(%esp)
 82f7b98:	e8 7f ff ff ff       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 82f7b9d:	c9                   	leave
 82f7b9e:	c3                   	ret
 82f7b9f:	90                   	nop

```

```c
// CAuctionServerProxy::SendCheckAuctionReadyPacket @ 0x82f7b7a

/* CAuctionServerProxy::SendCheckAuctionReadyPacket() */

void __thiscall CAuctionServerProxy::SendCheckAuctionReadyPacket(CAuctionServerProxy *this)

{
  PCK_AUCTION_CHECK_AUCTION_READY_GA local_1e [26];
  
  PCK_AUCTION_CHECK_AUCTION_READY_GA::PCK_AUCTION_CHECK_AUCTION_READY_GA(local_1e);
  SendPacket(this,(PACKET_HEADER *)local_1e);
  return;
}

```

---

## SendPacket

```asm
// === 082f7b1c CAuctionServerProxy::SendPacket  [0x082f7b1c-0x82f7b45] ===
 82f7b1c:	55                   	push   %ebp
 82f7b1d:	89 e5                	mov    %esp,%ebp
 82f7b1f:	83 ec 18             	sub    $0x18,%esp
 82f7b22:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f7b25:	89 04 24             	mov    %eax,(%esp)
 82f7b28:	e8 ef 01 00 00       	call   82f7d1c <_ZN3nsl13PACKET_HEADER7getSizeEv>
 82f7b2d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82f7b30:	8b 55 08             	mov    0x8(%ebp),%edx
 82f7b33:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f7b37:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f7b3b:	89 14 24             	mov    %edx,(%esp)
 82f7b3e:	e8 ed 5c 00 00       	call   82fd830 <_ZN15BaseServerProxy13SendTcpPacketEPci>
 82f7b43:	c9                   	leave
 82f7b44:	c3                   	ret
 82f7b45:	90                   	nop

```

```c
// CAuctionServerProxy::SendPacket @ 0x82f7b1c

/* CAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*) */

void __thiscall CAuctionServerProxy::SendPacket(CAuctionServerProxy *this,PACKET_HEADER *param_1)

{
  int iVar1;
  
  iVar1 = nsl::PACKET_HEADER::getSize(param_1);
  BaseServerProxy::SendTcpPacket((BaseServerProxy *)this,(char *)param_1,iVar1);
  return;
}

```

---

## SendRegistPacket

```asm
// === 082f7b46 CAuctionServerProxy::SendRegistPacket  [0x082f7b46-0x82f7b79] ===
 82f7b46:	55                   	push   %ebp
 82f7b47:	89 e5                	mov    %esp,%ebp
 82f7b49:	83 ec 38             	sub    $0x38,%esp
 82f7b4c:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 82f7b4f:	89 04 24             	mov    %eax,(%esp)
 82f7b52:	e8 df 01 00 00       	call   82f7d36 <_ZN21PCK_AUCTION_REGIST_GAC1Ev>
 82f7b57:	e8 25 46 dd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82f7b5c:	8b 80 98 01 00 00    	mov    0x198(%eax),%eax
 82f7b62:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f7b65:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 82f7b68:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f7b6c:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7b6f:	89 04 24             	mov    %eax,(%esp)
 82f7b72:	e8 a5 ff ff ff       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 82f7b77:	c9                   	leave
 82f7b78:	c3                   	ret
 82f7b79:	90                   	nop

```

```c
// CAuctionServerProxy::SendRegistPacket @ 0x82f7b46

/* CAuctionServerProxy::SendRegistPacket() */

void __thiscall CAuctionServerProxy::SendRegistPacket(CAuctionServerProxy *this)

{
  int iVar1;
  PCK_AUCTION_REGIST_GA local_22 [18];
  undefined4 local_10;
  
  PCK_AUCTION_REGIST_GA::PCK_AUCTION_REGIST_GA(local_22);
  iVar1 = G_CEnvironment();
  local_10 = *(undefined4 *)(iVar1 + 0x198);
  SendPacket(this,(PACKET_HEADER *)local_22);
  return;
}

```

