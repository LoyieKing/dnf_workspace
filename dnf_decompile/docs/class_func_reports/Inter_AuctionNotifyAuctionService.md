# Inter_AuctionNotifyAuctionService

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d7ac8 Inter_AuctionNotifyAuctionService::dispatch_sig  [0x084d7ac8-0x84d7c4b] ===
 84d7ac8:	55                   	push   %ebp
 84d7ac9:	89 e5                	mov    %esp,%ebp
 84d7acb:	56                   	push   %esi
 84d7acc:	53                   	push   %ebx
 84d7acd:	83 ec 30             	sub    $0x30,%esp
 84d7ad0:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7ad3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d7ad6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7ad9:	89 04 24             	mov    %eax,(%esp)
 84d7adc:	e8 6b 62 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d7ae1:	c7 44 24 08 b7 00 00 	movl   $0xb7,0x8(%esp)
 84d7ae8:	00 
 84d7ae9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d7af0:	00 
 84d7af1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7af4:	89 04 24             	mov    %eax,(%esp)
 84d7af7:	e8 00 3e bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d7afc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7aff:	8b 00                	mov    (%eax),%eax
 84d7b01:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7b05:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7b08:	89 04 24             	mov    %eax,(%esp)
 84d7b0b:	e8 10 3e bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7b10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7b13:	8b 00                	mov    (%eax),%eax
 84d7b15:	83 f8 01             	cmp    $0x1,%eax
 84d7b18:	75 1d                	jne    84d7b37 <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0x6f>
 84d7b1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7b1d:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84d7b21:	0f b6 d0             	movzbl %al,%edx
 84d7b24:	a1 4c be 40 09       	mov    0x940be4c,%eax
 84d7b29:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d7b2d:	89 04 24             	mov    %eax,(%esp)
 84d7b30:	e8 2b 58 01 00       	call   84ed360 <_ZN23CCeraAuctionServerProxy10SetRunningEb>
 84d7b35:	eb 1b                	jmp    84d7b52 <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0x8a>
 84d7b37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7b3a:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84d7b3e:	0f b6 d0             	movzbl %al,%edx
 84d7b41:	a1 48 be 40 09       	mov    0x940be48,%eax
 84d7b46:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d7b4a:	89 04 24             	mov    %eax,(%esp)
 84d7b4d:	e8 f2 57 01 00       	call   84ed344 <_ZN19CAuctionServerProxy10SetRunningEb>
 84d7b52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7b55:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84d7b59:	84 c0                	test   %al,%al
 84d7b5b:	74 15                	je     84d7b72 <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0xaa>
 84d7b5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7b64:	00 
 84d7b65:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7b68:	89 04 24             	mov    %eax,(%esp)
 84d7b6b:	e8 b0 3d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7b70:	eb 13                	jmp    84d7b85 <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0xbd>
 84d7b72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d7b79:	00 
 84d7b7a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7b7d:	89 04 24             	mov    %eax,(%esp)
 84d7b80:	e8 9b 3d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7b85:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7b8c:	00 
 84d7b8d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7b90:	89 04 24             	mov    %eax,(%esp)
 84d7b93:	e8 c0 3d bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d7b98:	e8 0a 28 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d7b9d:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84d7ba0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d7ba4:	89 04 24             	mov    %eax,(%esp)
 84d7ba7:	e8 68 10 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d7bac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7baf:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84d7bb3:	84 c0                	test   %al,%al
 84d7bb5:	74 07                	je     84d7bbe <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0xf6>
 84d7bb7:	b8 78 93 c8 08       	mov    $0x8c89378,%eax
 84d7bbc:	eb 05                	jmp    84d7bc3 <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0xfb>
 84d7bbe:	b8 7f 93 c8 08       	mov    $0x8c8937f,%eax
 84d7bc3:	89 c6                	mov    %eax,%esi
 84d7bc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7bc8:	8b 00                	mov    (%eax),%eax
 84d7bca:	85 c0                	test   %eax,%eax
 84d7bcc:	75 07                	jne    84d7bd5 <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0x10d>
 84d7bce:	bb 86 93 c8 08       	mov    $0x8c89386,%ebx
 84d7bd3:	eb 05                	jmp    84d7bda <_ZN33Inter_AuctionNotifyAuctionService12dispatch_sigEP5CUserPci+0x112>
 84d7bd5:	bb 8e 93 c8 08       	mov    $0x8c8938e,%ebx
 84d7bda:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d7be1:	00 
 84d7be2:	c7 44 24 08 ea 3d 00 	movl   $0x3dea,0x8(%esp)
 84d7be9:	00 
 84d7bea:	c7 44 24 04 20 c3 c8 	movl   $0x8c8c320,0x4(%esp)
 84d7bf1:	08 
 84d7bf2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7bf5:	89 04 24             	mov    %eax,(%esp)
 84d7bf8:	e8 1b 7b 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d7bfd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d7c01:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d7c05:	c7 44 24 04 94 93 c8 	movl   $0x8c89394,0x4(%esp)
 84d7c0c:	08 
 84d7c0d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7c10:	89 04 24             	mov    %eax,(%esp)
 84d7c13:	e8 70 7b 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d7c18:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d7c1d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7c20:	89 04 24             	mov    %eax,(%esp)
 84d7c23:	e8 58 62 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7c28:	89 d8                	mov    %ebx,%eax
 84d7c2a:	83 c4 30             	add    $0x30,%esp
 84d7c2d:	5b                   	pop    %ebx
 84d7c2e:	5e                   	pop    %esi
 84d7c2f:	5d                   	pop    %ebp
 84d7c30:	c3                   	ret
 84d7c31:	89 d3                	mov    %edx,%ebx
 84d7c33:	89 c6                	mov    %eax,%esi
 84d7c35:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d7c38:	89 04 24             	mov    %eax,(%esp)
 84d7c3b:	e8 40 62 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7c40:	89 f0                	mov    %esi,%eax
 84d7c42:	89 da                	mov    %ebx,%edx
 84d7c44:	89 04 24             	mov    %eax,(%esp)
 84d7c47:	e8 04 bb 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_AuctionNotifyAuctionService::dispatch_sig @ 0x84d7ac8

/* Inter_AuctionNotifyAuctionService::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionNotifyAuctionService::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  char *pcVar1;
  char *pcVar2;
  PacketGuard local_2c [12];
  cMyTrace local_20 [16];
  int *local_10;
  
  local_10 = (int *)param_3;
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084d7af7 to 084d7c17 has its CatchHandler @ 084d7c31 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xb7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*local_10);
  if (*local_10 == 1) {
    CCeraAuctionServerProxy::SetRunning(GlobalData::s_cera_auction_proxy,SUB41(local_10[1],0));
  }
  else {
    CAuctionServerProxy::SetRunning(GlobalData::s_auction_proxy,SUB41(local_10[1],0));
  }
  if ((char)local_10[1] == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_2c);
  if ((char)local_10[1] == '\0') {
    pcVar1 = "Closed";
  }
  else {
    pcVar1 = "Opened";
  }
  if (*local_10 == 0) {
    pcVar2 = "Auction";
  }
  else {
    pcVar2 = "Point";
  }
  cMyTrace::cMyTrace(local_20,
                     "virtual int Inter_AuctionNotifyAuctionService::dispatch_sig(CUser*, char*, int)"
                     ,0x3dea,0);
  cMyTrace::operator()
            (local_20,"%s server %s! SEND SIG_AUCTION_NOTIFY_AUCTION_SERVICE TO ALL USERS",pcVar2,
             pcVar1);
  PacketGuard::~PacketGuard(local_2c);
  return 0;
}

```

