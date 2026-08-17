# Dispatcher_AuctionMyBiddingInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08216b9a Dispatcher_AuctionMyBiddingInfo::dispatch_sig  [0x08216b9a-0x8216d01] ===
 8216b9a:	55                   	push   %ebp
 8216b9b:	89 e5                	mov    %esp,%ebp
 8216b9d:	53                   	push   %ebx
 8216b9e:	83 ec 44             	sub    $0x44,%esp
 8216ba1:	a1 48 be 40 09       	mov    0x940be48,%eax
 8216ba6:	89 04 24             	mov    %eax,(%esp)
 8216ba9:	e8 96 e3 01 00       	call   8234f44 <_ZN19CAuctionServerProxy9IsRunningEv>
 8216bae:	83 f0 01             	xor    $0x1,%eax
 8216bb1:	84 c0                	test   %al,%al
 8216bb3:	74 25                	je     8216bda <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x40>
 8216bb5:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 8216bbc:	00 
 8216bbd:	c7 44 24 04 c0 00 00 	movl   $0xc0,0x4(%esp)
 8216bc4:	00 
 8216bc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216bc8:	89 04 24             	mov    %eax,(%esp)
 8216bcb:	e8 72 53 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8216bd0:	b8 00 00 00 00       	mov    $0x0,%eax
 8216bd5:	e9 21 01 00 00       	jmp    8216cfb <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x161>
 8216bda:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216bdd:	89 04 24             	mov    %eax,(%esp)
 8216be0:	e8 a7 37 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8216be5:	83 f8 02             	cmp    $0x2,%eax
 8216be8:	7e 0f                	jle    8216bf9 <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x5f>
 8216bea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216bed:	89 04 24             	mov    %eax,(%esp)
 8216bf0:	e8 3d 98 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8216bf5:	85 c0                	test   %eax,%eax
 8216bf7:	75 07                	jne    8216c00 <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x66>
 8216bf9:	b8 01 00 00 00       	mov    $0x1,%eax
 8216bfe:	eb 05                	jmp    8216c05 <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x6b>
 8216c00:	b8 00 00 00 00       	mov    $0x0,%eax
 8216c05:	84 c0                	test   %al,%al
 8216c07:	74 29                	je     8216c32 <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x98>
 8216c09:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216c10:	00 
 8216c11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216c18:	00 
 8216c19:	c7 44 24 04 60 db bc 	movl   $0x8bcdb60,0x4(%esp)
 8216c20:	08 
 8216c21:	c7 04 24 36 c8 00 00 	movl   $0xc836,(%esp)
 8216c28:	e8 aa 9c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216c2d:	e9 c9 00 00 00       	jmp    8216cfb <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x161>
 8216c32:	8d 45 ca             	lea    -0x36(%ebp),%eax
 8216c35:	89 04 24             	mov    %eax,(%esp)
 8216c38:	e8 d7 7b 01 00       	call   822e814 <_ZN30PCK_AUCTION_MY_BIDDING_INFO_GAC1Ev>
 8216c3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216c40:	89 04 24             	mov    %eax,(%esp)
 8216c43:	e8 4e 20 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8216c48:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8216c4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216c4e:	89 04 24             	mov    %eax,(%esp)
 8216c51:	e8 f8 4f eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216c56:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8216c59:	a1 48 be 40 09       	mov    0x940be48,%eax
 8216c5e:	8d 55 ca             	lea    -0x36(%ebp),%edx
 8216c61:	89 54 24 04          	mov    %edx,0x4(%esp)
 8216c65:	89 04 24             	mov    %eax,(%esp)
 8216c68:	e8 af 0e 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8216c6d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8216c74:	eb 75                	jmp    8216ceb <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x151>
 8216c76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8216c79:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 8216c80:	89 c3                	mov    %eax,%ebx
 8216c82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216c85:	89 04 24             	mov    %eax,(%esp)
 8216c88:	e8 c1 4f eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216c8d:	39 c3                	cmp    %eax,%ebx
 8216c8f:	0f 94 c0             	sete   %al
 8216c92:	84 c0                	test   %al,%al
 8216c94:	74 51                	je     8216ce7 <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x14d>
 8216c96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216c99:	89 04 24             	mov    %eax,(%esp)
 8216c9c:	e8 ad 4f eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216ca1:	89 c3                	mov    %eax,%ebx
 8216ca3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216caa:	00 
 8216cab:	c7 44 24 08 4e c8 00 	movl   $0xc84e,0x8(%esp)
 8216cb2:	00 
 8216cb3:	c7 44 24 04 60 db bc 	movl   $0x8bcdb60,0x4(%esp)
 8216cba:	08 
 8216cbb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8216cbe:	89 04 24             	mov    %eax,(%esp)
 8216cc1:	e8 52 8a 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8216cc6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8216cca:	c7 44 24 08 aa 33 bc 	movl   $0x8bc33aa,0x8(%esp)
 8216cd1:	08 
 8216cd2:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 8216cd9:	08 
 8216cda:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8216cdd:	89 04 24             	mov    %eax,(%esp)
 8216ce0:	e8 a3 8a 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8216ce5:	eb 0f                	jmp    8216cf6 <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 8216ce7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8216ceb:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8216cef:	0f 9e c0             	setle  %al
 8216cf2:	84 c0                	test   %al,%al
 8216cf4:	75 80                	jne    8216c76 <_ZN31Dispatcher_AuctionMyBiddingInfo12dispatch_sigEP5CUserR9PacketBuf+0xdc>
 8216cf6:	b8 00 00 00 00       	mov    $0x0,%eax
 8216cfb:	83 c4 44             	add    $0x44,%esp
 8216cfe:	5b                   	pop    %ebx
 8216cff:	5d                   	pop    %ebp
 8216d00:	c3                   	ret
 8216d01:	90                   	nop

```

```c
// Dispatcher_AuctionMyBiddingInfo::dispatch_sig @ 0x8216b9a

/* Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  PCK_AUCTION_MY_BIDDING_INFO_GA local_3a [18];
  undefined4 local_28;
  undefined4 local_24;
  cMyTrace local_20 [16];
  int local_10;
  
  cVar2 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xc0,0x8c);
    return 0;
  }
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xc836,
                     "virtual int Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    PCK_AUCTION_MY_BIDDING_INFO_GA::PCK_AUCTION_MY_BIDDING_INFO_GA(local_3a);
    local_28 = CUser::GetUID((CUser *)param_2);
    local_24 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_3a);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      iVar3 = *(int *)(gmList + local_10 * 4);
      iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      if (iVar3 == iVar5) {
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        cMyTrace::cMyTrace(local_20,
                           "virtual int Dispatcher_AuctionMyBiddingInfo::dispatch_sig(CUser*, PacketBuf&)"
                           ,0xc84e,0);
        cMyTrace::operator()
                  (local_20,"Trace Auction Delay, %s(%d)","REQ AuctionMyBiddingInfo",uVar4);
        break;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

```

