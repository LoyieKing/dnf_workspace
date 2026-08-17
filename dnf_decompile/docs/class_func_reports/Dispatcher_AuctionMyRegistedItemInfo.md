# Dispatcher_AuctionMyRegistedItemInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08216966 Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig  [0x08216966-0x8216b99] ===
 8216966:	55                   	push   %ebp
 8216967:	89 e5                	mov    %esp,%ebp
 8216969:	53                   	push   %ebx
 821696a:	83 ec 64             	sub    $0x64,%esp
 821696d:	8d 45 df             	lea    -0x21(%ebp),%eax
 8216970:	89 44 24 04          	mov    %eax,0x4(%esp)
 8216974:	8b 45 10             	mov    0x10(%ebp),%eax
 8216977:	89 04 24             	mov    %eax,(%esp)
 821697a:	e8 f1 65 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821697f:	83 f0 01             	xor    $0x1,%eax
 8216982:	84 c0                	test   %al,%al
 8216984:	74 29                	je     82169af <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x49>
 8216986:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821698d:	00 
 821698e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216995:	00 
 8216996:	c7 44 24 04 c0 db bc 	movl   $0x8bcdbc0,0x4(%esp)
 821699d:	08 
 821699e:	c7 04 24 8e c7 00 00 	movl   $0xc78e,(%esp)
 82169a5:	e8 2d 9f 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82169aa:	e9 e5 01 00 00       	jmp    8216b94 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 82169af:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82169b3:	3c 01                	cmp    $0x1,%al
 82169b5:	76 29                	jbe    82169e0 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x7a>
 82169b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82169be:	00 
 82169bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82169c6:	00 
 82169c7:	c7 44 24 04 c0 db bc 	movl   $0x8bcdbc0,0x4(%esp)
 82169ce:	08 
 82169cf:	c7 04 24 91 c7 00 00 	movl   $0xc791,(%esp)
 82169d6:	e8 fc 9e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82169db:	e9 b4 01 00 00       	jmp    8216b94 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 82169e0:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 82169e4:	0f b6 c0             	movzbl %al,%eax
 82169e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82169ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82169ed:	0f b6 c0             	movzbl %al,%eax
 82169f0:	89 04 24             	mov    %eax,(%esp)
 82169f3:	e8 fa ce ff ff       	call   82138f2 <_Z27IsAuctionServerDisconnectedh>
 82169f8:	84 c0                	test   %al,%al
 82169fa:	74 2c                	je     8216a28 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0xc2>
 82169fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82169ff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8216a03:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 8216a0a:	00 
 8216a0b:	c7 44 24 04 bf 00 00 	movl   $0xbf,0x4(%esp)
 8216a12:	00 
 8216a13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216a16:	89 04 24             	mov    %eax,(%esp)
 8216a19:	e8 04 56 46 00       	call   867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>
 8216a1e:	b8 00 00 00 00       	mov    $0x0,%eax
 8216a23:	e9 6c 01 00 00       	jmp    8216b94 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8216a28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216a2b:	89 04 24             	mov    %eax,(%esp)
 8216a2e:	e8 59 39 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8216a33:	83 f8 02             	cmp    $0x2,%eax
 8216a36:	7e 0f                	jle    8216a47 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0xe1>
 8216a38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216a3b:	89 04 24             	mov    %eax,(%esp)
 8216a3e:	e8 ef 99 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8216a43:	85 c0                	test   %eax,%eax
 8216a45:	75 07                	jne    8216a4e <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0xe8>
 8216a47:	b8 01 00 00 00       	mov    $0x1,%eax
 8216a4c:	eb 05                	jmp    8216a53 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0xed>
 8216a4e:	b8 00 00 00 00       	mov    $0x0,%eax
 8216a53:	84 c0                	test   %al,%al
 8216a55:	74 29                	je     8216a80 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x11a>
 8216a57:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216a5e:	00 
 8216a5f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216a66:	00 
 8216a67:	c7 44 24 04 c0 db bc 	movl   $0x8bcdbc0,0x4(%esp)
 8216a6e:	08 
 8216a6f:	c7 04 24 b6 c7 00 00 	movl   $0xc7b6,(%esp)
 8216a76:	e8 5c 9e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216a7b:	e9 14 01 00 00       	jmp    8216b94 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8216a80:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8216a84:	75 45                	jne    8216acb <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x165>
 8216a86:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 8216a89:	89 04 24             	mov    %eax,(%esp)
 8216a8c:	e8 df 80 01 00       	call   822eb70 <_ZN36PCK_AUCTION_MY_REGISTED_ITEM_INFO_GPC1Ev>
 8216a91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216a94:	89 04 24             	mov    %eax,(%esp)
 8216a97:	e8 fa 21 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8216a9c:	89 45 d7             	mov    %eax,-0x29(%ebp)
 8216a9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216aa2:	89 04 24             	mov    %eax,(%esp)
 8216aa5:	e8 a4 51 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216aaa:	89 45 db             	mov    %eax,-0x25(%ebp)
 8216aad:	a1 4c be 40 09       	mov    0x940be4c,%eax
 8216ab2:	8d 55 c5             	lea    -0x3b(%ebp),%edx
 8216ab5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8216ab9:	89 04 24             	mov    %eax,(%esp)
 8216abc:	e8 6b 11 0e 00       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8216ac1:	b8 00 00 00 00       	mov    $0x0,%eax
 8216ac6:	e9 c9 00 00 00       	jmp    8216b94 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 8216acb:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8216ace:	89 04 24             	mov    %eax,(%esp)
 8216ad1:	e8 d6 7c 01 00       	call   822e7ac <_ZN36PCK_AUCTION_MY_REGISTED_ITEM_INFO_GAC1Ev>
 8216ad6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216ad9:	89 04 24             	mov    %eax,(%esp)
 8216adc:	e8 b5 21 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8216ae1:	89 45 bd             	mov    %eax,-0x43(%ebp)
 8216ae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216ae7:	89 04 24             	mov    %eax,(%esp)
 8216aea:	e8 5f 51 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216aef:	89 45 c1             	mov    %eax,-0x3f(%ebp)
 8216af2:	a1 48 be 40 09       	mov    0x940be48,%eax
 8216af7:	8d 55 ab             	lea    -0x55(%ebp),%edx
 8216afa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8216afe:	89 04 24             	mov    %eax,(%esp)
 8216b01:	e8 16 10 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8216b06:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8216b0d:	eb 75                	jmp    8216b84 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x21e>
 8216b0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8216b12:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 8216b19:	89 c3                	mov    %eax,%ebx
 8216b1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216b1e:	89 04 24             	mov    %eax,(%esp)
 8216b21:	e8 28 51 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216b26:	39 c3                	cmp    %eax,%ebx
 8216b28:	0f 94 c0             	sete   %al
 8216b2b:	84 c0                	test   %al,%al
 8216b2d:	74 51                	je     8216b80 <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x21a>
 8216b2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216b32:	89 04 24             	mov    %eax,(%esp)
 8216b35:	e8 14 51 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216b3a:	89 c3                	mov    %eax,%ebx
 8216b3c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216b43:	00 
 8216b44:	c7 44 24 08 23 c8 00 	movl   $0xc823,0x8(%esp)
 8216b4b:	00 
 8216b4c:	c7 44 24 04 c0 db bc 	movl   $0x8bcdbc0,0x4(%esp)
 8216b53:	08 
 8216b54:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8216b57:	89 04 24             	mov    %eax,(%esp)
 8216b5a:	e8 b9 8b 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8216b5f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8216b63:	c7 44 24 08 8c 33 bc 	movl   $0x8bc338c,0x8(%esp)
 8216b6a:	08 
 8216b6b:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 8216b72:	08 
 8216b73:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8216b76:	89 04 24             	mov    %eax,(%esp)
 8216b79:	e8 0a 8c 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8216b7e:	eb 0f                	jmp    8216b8f <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x229>
 8216b80:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8216b84:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8216b88:	0f 9e c0             	setle  %al
 8216b8b:	84 c0                	test   %al,%al
 8216b8d:	75 80                	jne    8216b0f <_ZN36Dispatcher_AuctionMyRegistedItemInfo12dispatch_sigEP5CUserR9PacketBuf+0x1a9>
 8216b8f:	b8 00 00 00 00       	mov    $0x0,%eax
 8216b94:	83 c4 64             	add    $0x64,%esp
 8216b97:	5b                   	pop    %ebx
 8216b98:	5d                   	pop    %ebp
 8216b99:	c3                   	ret

```

```c
// Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig @ 0x8216966

/* Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig
          (Dispatcher_AuctionMyRegistedItemInfo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PCK_AUCTION_MY_REGISTED_ITEM_INFO_GA local_59 [18];
  undefined4 local_47;
  undefined4 local_43;
  PCK_AUCTION_MY_REGISTED_ITEM_INFO_GP local_3f [18];
  undefined4 local_2d;
  undefined4 local_29;
  byte local_25;
  cMyTrace local_24 [16];
  uint local_14;
  int local_10;
  
  cVar2 = PacketBuf::get_byte(param_2,&local_25);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xc78e,
                     "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  if (1 < local_25) {
    uVar3 = LineFunc(0xc791,
                     "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_14 = (uint)local_25;
  cVar2 = IsAuctionServerDisconnected(local_25);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,0xbf,0x8c,local_14);
    return 0;
  }
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = LineFunc(0xc7b6,
                     "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (local_14 == 1) {
    PCK_AUCTION_MY_REGISTED_ITEM_INFO_GP::PCK_AUCTION_MY_REGISTED_ITEM_INFO_GP(local_3f);
    local_2d = CUser::GetUID(param_1);
    local_29 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    CCeraAuctionServerProxy::SendPacket(GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_3f);
    uVar3 = 0;
  }
  else {
    PCK_AUCTION_MY_REGISTED_ITEM_INFO_GA::PCK_AUCTION_MY_REGISTED_ITEM_INFO_GA(local_59);
    local_47 = CUser::GetUID(param_1);
    local_43 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_59);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      iVar4 = *(int *)(gmList + local_10 * 4);
      iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      if (iVar4 == iVar5) {
        uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        cMyTrace::cMyTrace(local_24,
                           "virtual int Dispatcher_AuctionMyRegistedItemInfo::dispatch_sig(CUser*, PacketBuf&)"
                           ,0xc823,0);
        cMyTrace::operator()
                  (local_24,"Trace Auction Delay, %s(%d)","REQ AuctionMyRegistedItemInfo",uVar3);
        break;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

