# Dispatcher_AuctionRegistCancel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08214b96 Dispatcher_AuctionRegistCancel::dispatch_sig  [0x08214b96-0x8214e43] ===
 8214b96:	55                   	push   %ebp
 8214b97:	89 e5                	mov    %esp,%ebp
 8214b99:	53                   	push   %ebx
 8214b9a:	83 ec 64             	sub    $0x64,%esp
 8214b9d:	8d 45 d7             	lea    -0x29(%ebp),%eax
 8214ba0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214ba4:	8b 45 10             	mov    0x10(%ebp),%eax
 8214ba7:	89 04 24             	mov    %eax,(%esp)
 8214baa:	e8 c1 83 37 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8214baf:	83 f0 01             	xor    $0x1,%eax
 8214bb2:	84 c0                	test   %al,%al
 8214bb4:	74 29                	je     8214bdf <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x49>
 8214bb6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214bbd:	00 
 8214bbe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214bc5:	00 
 8214bc6:	c7 44 24 04 a0 dd bc 	movl   $0x8bcdda0,0x4(%esp)
 8214bcd:	08 
 8214bce:	c7 04 24 7f c4 00 00 	movl   $0xc47f,(%esp)
 8214bd5:	e8 fd bc 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214bda:	e9 5f 02 00 00       	jmp    8214e3e <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x2a8>
 8214bdf:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8214be3:	3c 01                	cmp    $0x1,%al
 8214be5:	76 29                	jbe    8214c10 <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x7a>
 8214be7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214bee:	00 
 8214bef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214bf6:	00 
 8214bf7:	c7 44 24 04 a0 dd bc 	movl   $0x8bcdda0,0x4(%esp)
 8214bfe:	08 
 8214bff:	c7 04 24 82 c4 00 00 	movl   $0xc482,(%esp)
 8214c06:	e8 cc bc 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214c0b:	e9 2e 02 00 00       	jmp    8214e3e <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x2a8>
 8214c10:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8214c14:	0f b6 c0             	movzbl %al,%eax
 8214c17:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8214c1a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8214c1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8214c21:	c7 44 24 04 bb 00 00 	movl   $0xbb,0x4(%esp)
 8214c28:	00 
 8214c29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214c2c:	89 04 24             	mov    %eax,(%esp)
 8214c2f:	e8 62 be 46 00       	call   8680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>
 8214c34:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8214c37:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8214c3b:	78 08                	js     8214c45 <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0xaf>
 8214c3d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8214c40:	e9 f9 01 00 00       	jmp    8214e3e <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x2a8>
 8214c45:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8214c4a:	c7 44 24 08 33 00 00 	movl   $0x33,0x8(%esp)
 8214c51:	00 
 8214c52:	8b 55 0c             	mov    0xc(%ebp),%edx
 8214c55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214c59:	89 04 24             	mov    %eax,(%esp)
 8214c5c:	e8 a1 3d 07 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8214c61:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8214c64:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8214c68:	74 27                	je     8214c91 <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 8214c6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8214c6d:	0f b6 c0             	movzbl %al,%eax
 8214c70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8214c74:	c7 44 24 04 bb 00 00 	movl   $0xbb,0x4(%esp)
 8214c7b:	00 
 8214c7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214c7f:	89 04 24             	mov    %eax,(%esp)
 8214c82:	e8 bb 72 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8214c87:	b8 00 00 00 00       	mov    $0x0,%eax
 8214c8c:	e9 ad 01 00 00       	jmp    8214e3e <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x2a8>
 8214c91:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 8214c95:	0f 85 8d 00 00 00    	jne    8214d28 <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x192>
 8214c9b:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 8214c9e:	89 04 24             	mov    %eax,(%esp)
 8214ca1:	e8 76 9d 01 00       	call   822ea1c <_ZN28PCK_AUCTION_REGIST_CANCEL_GPC1Ev>
 8214ca6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214ca9:	89 04 24             	mov    %eax,(%esp)
 8214cac:	e8 e5 3f eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8214cb1:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8214cb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214cb7:	89 04 24             	mov    %eax,(%esp)
 8214cba:	e8 8f 6f eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214cbf:	89 45 cb             	mov    %eax,-0x35(%ebp)
 8214cc2:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 8214cc5:	83 c0 1a             	add    $0x1a,%eax
 8214cc8:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8214ccf:	00 
 8214cd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214cd4:	8b 45 10             	mov    0x10(%ebp),%eax
 8214cd7:	89 04 24             	mov    %eax,(%esp)
 8214cda:	e8 d3 86 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8214cdf:	83 f0 01             	xor    $0x1,%eax
 8214ce2:	84 c0                	test   %al,%al
 8214ce4:	74 29                	je     8214d0f <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x179>
 8214ce6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214ced:	00 
 8214cee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214cf5:	00 
 8214cf6:	c7 44 24 04 a0 dd bc 	movl   $0x8bcdda0,0x4(%esp)
 8214cfd:	08 
 8214cfe:	c7 04 24 b1 c4 00 00 	movl   $0xc4b1,(%esp)
 8214d05:	e8 cd bb 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214d0a:	e9 2f 01 00 00       	jmp    8214e3e <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x2a8>
 8214d0f:	a1 4c be 40 09       	mov    0x940be4c,%eax
 8214d14:	8d 55 b5             	lea    -0x4b(%ebp),%edx
 8214d17:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214d1b:	89 04 24             	mov    %eax,(%esp)
 8214d1e:	e8 09 2f 0e 00       	call   82f7c2c <_ZN23CCeraAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8214d23:	e9 88 00 00 00       	jmp    8214db0 <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x21a>
 8214d28:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 8214d2b:	89 04 24             	mov    %eax,(%esp)
 8214d2e:	e8 91 98 01 00       	call   822e5c4 <_ZN28PCK_AUCTION_REGIST_CANCEL_GAC1Ev>
 8214d33:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214d36:	89 04 24             	mov    %eax,(%esp)
 8214d39:	e8 58 3f eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8214d3e:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8214d41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214d44:	89 04 24             	mov    %eax,(%esp)
 8214d47:	e8 02 6f eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214d4c:	89 45 cb             	mov    %eax,-0x35(%ebp)
 8214d4f:	8d 45 b5             	lea    -0x4b(%ebp),%eax
 8214d52:	83 c0 1a             	add    $0x1a,%eax
 8214d55:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8214d5c:	00 
 8214d5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214d61:	8b 45 10             	mov    0x10(%ebp),%eax
 8214d64:	89 04 24             	mov    %eax,(%esp)
 8214d67:	e8 46 86 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8214d6c:	83 f0 01             	xor    $0x1,%eax
 8214d6f:	84 c0                	test   %al,%al
 8214d71:	74 29                	je     8214d9c <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x206>
 8214d73:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214d7a:	00 
 8214d7b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214d82:	00 
 8214d83:	c7 44 24 04 a0 dd bc 	movl   $0x8bcdda0,0x4(%esp)
 8214d8a:	08 
 8214d8b:	c7 04 24 c4 c4 00 00 	movl   $0xc4c4,(%esp)
 8214d92:	e8 40 bb 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214d97:	e9 a2 00 00 00       	jmp    8214e3e <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x2a8>
 8214d9c:	a1 48 be 40 09       	mov    0x940be48,%eax
 8214da1:	8d 55 b5             	lea    -0x4b(%ebp),%edx
 8214da4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8214da8:	89 04 24             	mov    %eax,(%esp)
 8214dab:	e8 6c 2d 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8214db0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8214db7:	eb 75                	jmp    8214e2e <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x298>
 8214db9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8214dbc:	8b 04 85 d8 01 37 09 	mov    0x93701d8(,%eax,4),%eax
 8214dc3:	89 c3                	mov    %eax,%ebx
 8214dc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214dc8:	89 04 24             	mov    %eax,(%esp)
 8214dcb:	e8 7e 6e eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214dd0:	39 c3                	cmp    %eax,%ebx
 8214dd2:	0f 94 c0             	sete   %al
 8214dd5:	84 c0                	test   %al,%al
 8214dd7:	74 51                	je     8214e2a <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x294>
 8214dd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214ddc:	89 04 24             	mov    %eax,(%esp)
 8214ddf:	e8 6a 6e eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214de4:	89 c3                	mov    %eax,%ebx
 8214de6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214ded:	00 
 8214dee:	c7 44 24 08 d4 c4 00 	movl   $0xc4d4,0x8(%esp)
 8214df5:	00 
 8214df6:	c7 44 24 04 a0 dd bc 	movl   $0x8bcdda0,0x4(%esp)
 8214dfd:	08 
 8214dfe:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8214e01:	89 04 24             	mov    %eax,(%esp)
 8214e04:	e8 0f a9 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8214e09:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8214e0d:	c7 44 24 08 29 33 bc 	movl   $0x8bc3329,0x8(%esp)
 8214e14:	08 
 8214e15:	c7 44 24 04 f7 32 bc 	movl   $0x8bc32f7,0x4(%esp)
 8214e1c:	08 
 8214e1d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8214e20:	89 04 24             	mov    %eax,(%esp)
 8214e23:	e8 60 a9 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8214e28:	eb 0f                	jmp    8214e39 <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x2a3>
 8214e2a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8214e2e:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 8214e32:	0f 9e c0             	setle  %al
 8214e35:	84 c0                	test   %al,%al
 8214e37:	75 80                	jne    8214db9 <_ZN30Dispatcher_AuctionRegistCancel12dispatch_sigEP5CUserR9PacketBuf+0x223>
 8214e39:	b8 00 00 00 00       	mov    $0x0,%eax
 8214e3e:	83 c4 64             	add    $0x64,%esp
 8214e41:	5b                   	pop    %ebx
 8214e42:	5d                   	pop    %ebp
 8214e43:	c3                   	ret

```

```c
// Dispatcher_AuctionRegistCancel::dispatch_sig @ 0x8214b96

/* Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionRegistCancel::dispatch_sig
          (Dispatcher_AuctionRegistCancel *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  PCK_AUCTION_REGIST_CANCEL_GP local_4f [18];
  undefined4 local_3d;
  undefined4 local_39;
  char acStack_35 [8];
  byte local_2d;
  cMyTrace local_2c [16];
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_2,&local_2d);
  if (cVar1 == '\x01') {
    if (local_2d < 2) {
      local_1c = (uint)local_2d;
      local_18 = CUser::AuctionPreCheck(param_1,0xbb,local_1c);
      if (local_18 < 0) {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x33);
        if (local_14 == 0) {
          if (local_1c == 1) {
            PCK_AUCTION_REGIST_CANCEL_GP::PCK_AUCTION_REGIST_CANCEL_GP(local_4f);
            local_3d = CUser::GetUID(param_1);
            local_39 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cVar1 = PacketBuf::get_binary(param_2,acStack_35,8);
            if (cVar1 != '\x01') {
              iVar2 = LineFunc(0xc4b1,
                               "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return iVar2;
            }
            CCeraAuctionServerProxy::SendPacket
                      (GlobalData::s_cera_auction_proxy,(PACKET_HEADER *)local_4f);
          }
          else {
            PCK_AUCTION_REGIST_CANCEL_GA::PCK_AUCTION_REGIST_CANCEL_GA
                      ((PCK_AUCTION_REGIST_CANCEL_GA *)local_4f);
            local_3d = CUser::GetUID(param_1);
            local_39 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            cVar1 = PacketBuf::get_binary(param_2,acStack_35,8);
            if (cVar1 != '\x01') {
              iVar2 = LineFunc(0xc4c4,
                               "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return iVar2;
            }
            CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_4f);
          }
          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
            iVar2 = *(int *)(gmList + local_10 * 4);
            iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            if (iVar2 == iVar3) {
              uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              cMyTrace::cMyTrace(local_2c,
                                 "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0xc4d4,0);
              cMyTrace::operator()
                        (local_2c,"Trace Auction Delay, %s(%d)","REQ AuctionRegistCancel",uVar4);
              break;
            }
          }
          local_18 = 0;
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0xbb,local_14 & 0xff);
          local_18 = 0;
        }
      }
    }
    else {
      local_18 = LineFunc(0xc482,
                          "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
    }
  }
  else {
    local_18 = LineFunc(0xc47f,
                        "virtual int Dispatcher_AuctionRegistCancel::dispatch_sig(CUser*, PacketBuf&)"
                        ,0,0);
  }
  return local_18;
}

```

