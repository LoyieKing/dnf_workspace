# Dispatcher_AuctionMyAuctionHistory

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08216d02 Dispatcher_AuctionMyAuctionHistory::dispatch_sig  [0x08216d02-0x8216dcb] ===
 8216d02:	55                   	push   %ebp
 8216d03:	89 e5                	mov    %esp,%ebp
 8216d05:	83 ec 38             	sub    $0x38,%esp
 8216d08:	a1 48 be 40 09       	mov    0x940be48,%eax
 8216d0d:	89 04 24             	mov    %eax,(%esp)
 8216d10:	e8 2f e2 01 00       	call   8234f44 <_ZN19CAuctionServerProxy9IsRunningEv>
 8216d15:	83 f0 01             	xor    $0x1,%eax
 8216d18:	84 c0                	test   %al,%al
 8216d1a:	74 0a                	je     8216d26 <_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf+0x24>
 8216d1c:	b8 00 00 00 00       	mov    $0x0,%eax
 8216d21:	e9 a3 00 00 00       	jmp    8216dc9 <_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf+0xc7>
 8216d26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216d29:	89 04 24             	mov    %eax,(%esp)
 8216d2c:	e8 5b 36 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8216d31:	83 f8 02             	cmp    $0x2,%eax
 8216d34:	7e 0f                	jle    8216d45 <_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf+0x43>
 8216d36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216d39:	89 04 24             	mov    %eax,(%esp)
 8216d3c:	e8 f1 96 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8216d41:	85 c0                	test   %eax,%eax
 8216d43:	75 07                	jne    8216d4c <_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf+0x4a>
 8216d45:	b8 01 00 00 00       	mov    $0x1,%eax
 8216d4a:	eb 05                	jmp    8216d51 <_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf+0x4f>
 8216d4c:	b8 00 00 00 00       	mov    $0x0,%eax
 8216d51:	84 c0                	test   %al,%al
 8216d53:	74 26                	je     8216d7b <_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf+0x79>
 8216d55:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8216d5c:	00 
 8216d5d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8216d64:	00 
 8216d65:	c7 44 24 04 00 db bc 	movl   $0x8bcdb00,0x4(%esp)
 8216d6c:	08 
 8216d6d:	c7 04 24 64 c8 00 00 	movl   $0xc864,(%esp)
 8216d74:	e8 5e 9b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8216d79:	eb 4e                	jmp    8216dc9 <_ZN34Dispatcher_AuctionMyAuctionHistory12dispatch_sigEP5CUserR9PacketBuf+0xc7>
 8216d7b:	8d 45 da             	lea    -0x26(%ebp),%eax
 8216d7e:	89 04 24             	mov    %eax,(%esp)
 8216d81:	e8 f6 7a 01 00       	call   822e87c <_ZN33PCK_AUCTION_MY_AUCTION_HISTORY_GAC1Ev>
 8216d86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216d89:	89 04 24             	mov    %eax,(%esp)
 8216d8c:	e8 05 1f eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8216d91:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8216d94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216d97:	89 04 24             	mov    %eax,(%esp)
 8216d9a:	e8 af 4e eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8216d9f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8216da2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8216da5:	89 04 24             	mov    %eax,(%esp)
 8216da8:	e8 c1 35 ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8216dad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8216db0:	a1 48 be 40 09       	mov    0x940be48,%eax
 8216db5:	8d 55 da             	lea    -0x26(%ebp),%edx
 8216db8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8216dbc:	89 04 24             	mov    %eax,(%esp)
 8216dbf:	e8 58 0d 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8216dc4:	b8 00 00 00 00       	mov    $0x0,%eax
 8216dc9:	c9                   	leave
 8216dca:	c3                   	ret
 8216dcb:	90                   	nop

```

```c
// Dispatcher_AuctionMyAuctionHistory::dispatch_sig @ 0x8216d02

/* Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  PCK_AUCTION_MY_AUCTION_HISTORY_GA local_2a [18];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar2 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar2 == '\x01') {
    iVar3 = CUser::get_state((CUser *)param_2);
    if ((iVar3 < 3) ||
       (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = LineFunc(0xc864,
                       "virtual int Dispatcher_AuctionMyAuctionHistory::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      PCK_AUCTION_MY_AUCTION_HISTORY_GA::PCK_AUCTION_MY_AUCTION_HISTORY_GA(local_2a);
      local_18 = CUser::GetUID((CUser *)param_2);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      local_10 = CUser::get_acc_id((CUser *)param_2);
      CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_2a);
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0;
}

```

