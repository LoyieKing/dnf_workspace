# CCeraAuctionServerProxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CCeraAuctionServerProxy

```asm
// === 082f7ba0 CCeraAuctionServerProxy::CCeraAuctionServerProxy  [0x082f7ba0-0x82f7be5] ===
 82f7ba0:	55                   	push   %ebp
 82f7ba1:	89 e5                	mov    %esp,%ebp
 82f7ba3:	83 ec 18             	sub    $0x18,%esp
 82f7ba6:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7ba9:	8b 55 14             	mov    0x14(%ebp),%edx
 82f7bac:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82f7bb0:	8b 55 10             	mov    0x10(%ebp),%edx
 82f7bb3:	89 54 24 08          	mov    %edx,0x8(%esp)
 82f7bb7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82f7bba:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f7bbe:	89 04 24             	mov    %eax,(%esp)
 82f7bc1:	e8 8a 57 00 00       	call   82fd350 <_ZN15BaseServerProxyC1EPciS0_>
 82f7bc6:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7bc9:	c7 00 f8 eb c1 08    	movl   $0x8c1ebf8,(%eax)
 82f7bcf:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7bd2:	c6 80 0c 0e 03 00 00 	movb   $0x0,0x30e0c(%eax)
 82f7bd9:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7bdc:	89 04 24             	mov    %eax,(%esp)
 82f7bdf:	e8 02 00 00 00       	call   82f7be6 <_ZN23CCeraAuctionServerProxy4InitEv>
 82f7be4:	c9                   	leave
 82f7be5:	c3                   	ret

```

```c
// CCeraAuctionServerProxy::CCeraAuctionServerProxy @ 0x82f7ba0

/* CCeraAuctionServerProxy::CCeraAuctionServerProxy(char*, int, char*) */

void __thiscall
CCeraAuctionServerProxy::CCeraAuctionServerProxy
          (CCeraAuctionServerProxy *this,char *param_1,int param_2,char *param_3)

{
  BaseServerProxy::BaseServerProxy((BaseServerProxy *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_OnDisconnect_08c1ebf8;
  this[0x30e0c] = (CCeraAuctionServerProxy)0x0;
  Init(this);
  return;
}

```

---

## Init

```asm
// === 082f7be6 CCeraAuctionServerProxy::Init  [0x082f7be6-0x82f7bf5] ===
 82f7be6:	55                   	push   %ebp
 82f7be7:	89 e5                	mov    %esp,%ebp
 82f7be9:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7bec:	c6 80 0c 0e 03 00 00 	movb   $0x0,0x30e0c(%eax)
 82f7bf3:	5d                   	pop    %ebp
 82f7bf4:	c3                   	ret
 82f7bf5:	90                   	nop

```

```c
// CCeraAuctionServerProxy::Init @ 0x82f7be6

/* CCeraAuctionServerProxy::Init() */

void __thiscall CCeraAuctionServerProxy::Init(CCeraAuctionServerProxy *this)

{
  this[0x30e0c] = (CCeraAuctionServerProxy)0x0;
  return;
}

```

---

## OnDisconnect

```asm
// === 082f7bf6 CCeraAuctionServerProxy::OnDisconnect  [0x082f7bf6-0x82f7c09] ===
 82f7bf6:	55                   	push   %ebp
 82f7bf7:	89 e5                	mov    %esp,%ebp
 82f7bf9:	83 ec 04             	sub    $0x4,%esp
 82f7bfc:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7bff:	89 04 24             	mov    %eax,(%esp)
 82f7c02:	e8 df ff ff ff       	call   82f7be6 <_ZN23CCeraAuctionServerProxy4InitEv>
 82f7c07:	c9                   	leave
 82f7c08:	c3                   	ret
 82f7c09:	90                   	nop

```

```c
// CCeraAuctionServerProxy::OnDisconnect @ 0x82f7bf6

/* CCeraAuctionServerProxy::OnDisconnect() */

void __thiscall CCeraAuctionServerProxy::OnDisconnect(CCeraAuctionServerProxy *this)

{
  Init(this);
  return;
}

```

---

## Parsing

```asm
// === 082f7c0a CCeraAuctionServerProxy::Parsing  [0x082f7c0a-0x82f7c2b] ===
 82f7c0a:	55                   	push   %ebp
 82f7c0b:	89 e5                	mov    %esp,%ebp
 82f7c0d:	83 ec 18             	sub    $0x18,%esp
 82f7c10:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7c13:	89 04 24             	mov    %eax,(%esp)
 82f7c16:	e8 bb 02 00 00       	call   82f7ed6 <_ZN15BaseServerProxy13GetTcpHandlerEv>
 82f7c1b:	8b 55 0c             	mov    0xc(%ebp),%edx
 82f7c1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82f7c22:	89 04 24             	mov    %eax,(%esp)
 82f7c25:	e8 b8 02 00 00       	call   82f7ee2 <_ZN8CNetworkILi100000ELi100000EE27Parsing_AuctionServerPacketEi>
 82f7c2a:	c9                   	leave
 82f7c2b:	c3                   	ret

```

```c
// CCeraAuctionServerProxy::Parsing @ 0x82f7c0a

/* CCeraAuctionServerProxy::Parsing(int) */

void __thiscall CCeraAuctionServerProxy::Parsing(CCeraAuctionServerProxy *this,int param_1)

{
  CNetwork<100000,100000> *this_00;
  
  this_00 = (CNetwork<100000,100000> *)BaseServerProxy::GetTcpHandler((BaseServerProxy *)this);
  CNetwork<100000,100000>::Parsing_AuctionServerPacket(this_00,param_1);
  return;
}

```

---

## SendCheckCeraAuctionReadyPacket

```asm
// === 082f7c8a CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket  [0x082f7c8a-0x82f7cae] ===
 82f7c8a:	55                   	push   %ebp
 82f7c8b:	89 e5                	mov    %esp,%ebp
 82f7c8d:	83 ec 38             	sub    $0x38,%esp
 82f7c90:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 82f7c93:	89 04 24             	mov    %eax,(%esp)
 82f7c96:	e8 d3 01 00 00       	call   82f7e6e <_ZN34PCK_AUCTION_CHECK_AUCTION_READY_GPC1Ev>
 82f7c9b:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 82f7c9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f7ca2:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7ca5:	89 04 24             	mov    %eax,(%esp)
 82f7ca8:	e8 7f ff ff ff       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 82f7cad:	c9                   	leave
 82f7cae:	c3                   	ret

```

```c
// CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket @ 0x82f7c8a

/* CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket() */

void __thiscall
CCeraAuctionServerProxy::SendCheckCeraAuctionReadyPacket(CCeraAuctionServerProxy *this)

{
  PCK_AUCTION_CHECK_AUCTION_READY_GP local_1e [26];
  
  PCK_AUCTION_CHECK_AUCTION_READY_GP::PCK_AUCTION_CHECK_AUCTION_READY_GP(local_1e);
  SendPacket(this,(PACKET_HEADER *)local_1e);
  return;
}

```

---

## SendPacket

```asm
// === 082f7c2c CCeraAuctionServerProxy::SendPacket  [0x082f7c2c-0x82f7c55] ===
 82f7c2c:	55                   	push   %ebp
 82f7c2d:	89 e5                	mov    %esp,%ebp
 82f7c2f:	83 ec 18             	sub    $0x18,%esp
 82f7c32:	8b 45 0c             	mov    0xc(%ebp),%eax
 82f7c35:	89 04 24             	mov    %eax,(%esp)
 82f7c38:	e8 df 00 00 00       	call   82f7d1c <_ZN3nsl13PACKET_HEADER7getSizeEv>
 82f7c3d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82f7c40:	8b 55 08             	mov    0x8(%ebp),%edx
 82f7c43:	89 44 24 08          	mov    %eax,0x8(%esp)
 82f7c47:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 82f7c4b:	89 14 24             	mov    %edx,(%esp)
 82f7c4e:	e8 dd 5b 00 00       	call   82fd830 <_ZN15BaseServerProxy13SendTcpPacketEPci>
 82f7c53:	c9                   	leave
 82f7c54:	c3                   	ret
 82f7c55:	90                   	nop

```

```c
// CCeraAuctionServerProxy::SendPacket @ 0x82f7c2c

/* CCeraAuctionServerProxy::SendPacket(nsl::PACKET_HEADER*) */

void __thiscall
CCeraAuctionServerProxy::SendPacket(CCeraAuctionServerProxy *this,PACKET_HEADER *param_1)

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
// === 082f7c56 CCeraAuctionServerProxy::SendRegistPacket  [0x082f7c56-0x82f7c89] ===
 82f7c56:	55                   	push   %ebp
 82f7c57:	89 e5                	mov    %esp,%ebp
 82f7c59:	83 ec 38             	sub    $0x38,%esp
 82f7c5c:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 82f7c5f:	89 04 24             	mov    %eax,(%esp)
 82f7c62:	e8 9f 01 00 00       	call   82f7e06 <_ZN21PCK_AUCTION_REGIST_GPC1Ev>
 82f7c67:	e8 15 45 dd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82f7c6c:	8b 80 98 01 00 00    	mov    0x198(%eax),%eax
 82f7c72:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82f7c75:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 82f7c78:	89 44 24 04          	mov    %eax,0x4(%esp)
 82f7c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 82f7c7f:	89 04 24             	mov    %eax,(%esp)
 82f7c82:	e8 a5 ff ff ff       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 82f7c87:	c9                   	leave
 82f7c88:	c3                   	ret
 82f7c89:	90                   	nop

```

```c
// CCeraAuctionServerProxy::SendRegistPacket @ 0x82f7c56

/* CCeraAuctionServerProxy::SendRegistPacket() */

void __thiscall CCeraAuctionServerProxy::SendRegistPacket(CCeraAuctionServerProxy *this)

{
  int iVar1;
  PCK_AUCTION_REGIST_GP local_22 [18];
  undefined4 local_10;
  
  PCK_AUCTION_REGIST_GP::PCK_AUCTION_REGIST_GP(local_22);
  iVar1 = G_CEnvironment();
  local_10 = *(undefined4 *)(iVar1 + 0x198);
  SendPacket(this,(PACKET_HEADER *)local_22);
  return;
}

```

