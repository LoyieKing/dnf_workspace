# Inter_AuctionResultMyBidding

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d78f4 Inter_AuctionResultMyBidding::dispatch_sig  [0x084d78f4-0x84d7a8f] ===
 84d78f4:	55                   	push   %ebp
 84d78f5:	89 e5                	mov    %esp,%ebp
 84d78f7:	56                   	push   %esi
 84d78f8:	53                   	push   %ebx
 84d78f9:	83 ec 40             	sub    $0x40,%esp
 84d78fc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d7900:	75 0a                	jne    84d790c <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0x18>
 84d7902:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7907:	e9 7c 01 00 00       	jmp    84d7a88 <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0x194>
 84d790c:	8b 45 14             	mov    0x14(%ebp),%eax
 84d790f:	83 f8 03             	cmp    $0x3,%eax
 84d7912:	0f 86 6b 01 00 00    	jbe    84d7a83 <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0x18f>
 84d7918:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84d791f:	00 
 84d7920:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7923:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7927:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d792a:	89 04 24             	mov    %eax,(%esp)
 84d792d:	e8 6e 5f ba ff       	call   807d8a0 <memcpy@plt>
 84d7932:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d7935:	89 c3                	mov    %eax,%ebx
 84d7937:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d793a:	89 04 24             	mov    %eax,(%esp)
 84d793d:	e8 0c 43 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7942:	39 c3                	cmp    %eax,%ebx
 84d7944:	0f 95 c0             	setne  %al
 84d7947:	84 c0                	test   %al,%al
 84d7949:	74 0a                	je     84d7955 <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0x61>
 84d794b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7950:	e9 33 01 00 00       	jmp    84d7a88 <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0x194>
 84d7955:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d795c:	eb 75                	jmp    84d79d3 <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0xdf>
 84d795e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7961:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d7968:	89 c3                	mov    %eax,%ebx
 84d796a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d796d:	89 04 24             	mov    %eax,(%esp)
 84d7970:	e8 d9 42 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7975:	39 c3                	cmp    %eax,%ebx
 84d7977:	0f 94 c0             	sete   %al
 84d797a:	84 c0                	test   %al,%al
 84d797c:	74 51                	je     84d79cf <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0xdb>
 84d797e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7981:	89 04 24             	mov    %eax,(%esp)
 84d7984:	e8 c5 42 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7989:	89 c3                	mov    %eax,%ebx
 84d798b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d7992:	00 
 84d7993:	c7 44 24 08 31 3d 00 	movl   $0x3d31,0x8(%esp)
 84d799a:	00 
 84d799b:	c7 44 24 04 80 c3 c8 	movl   $0x8c8c380,0x4(%esp)
 84d79a2:	08 
 84d79a3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d79a6:	89 04 24             	mov    %eax,(%esp)
 84d79a9:	e8 6a 7d 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d79ae:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d79b2:	c7 44 24 08 5d 93 c8 	movl   $0x8c8935d,0x8(%esp)
 84d79b9:	08 
 84d79ba:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d79c1:	08 
 84d79c2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d79c5:	89 04 24             	mov    %eax,(%esp)
 84d79c8:	e8 bb 7d 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d79cd:	eb 0f                	jmp    84d79de <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0xea>
 84d79cf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d79d3:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84d79d7:	0f 9e c0             	setle  %al
 84d79da:	84 c0                	test   %al,%al
 84d79dc:	75 80                	jne    84d795e <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0x6a>
 84d79de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d79e1:	89 04 24             	mov    %eax,(%esp)
 84d79e4:	e8 63 63 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d79e9:	c7 44 24 08 c0 00 00 	movl   $0xc0,0x8(%esp)
 84d79f0:	00 
 84d79f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d79f8:	00 
 84d79f9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d79fc:	89 04 24             	mov    %eax,(%esp)
 84d79ff:	e8 f8 3e bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d7a04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7a0b:	00 
 84d7a0c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7a0f:	89 04 24             	mov    %eax,(%esp)
 84d7a12:	e8 09 3f bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7a17:	8b 45 14             	mov    0x14(%ebp),%eax
 84d7a1a:	83 e8 04             	sub    $0x4,%eax
 84d7a1d:	8b 55 10             	mov    0x10(%ebp),%edx
 84d7a20:	83 c2 04             	add    $0x4,%edx
 84d7a23:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d7a27:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d7a2b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7a2e:	89 04 24             	mov    %eax,(%esp)
 84d7a31:	e8 d2 64 c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84d7a36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7a3d:	00 
 84d7a3e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7a41:	89 04 24             	mov    %eax,(%esp)
 84d7a44:	e8 0f 3f bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d7a49:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7a50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7a53:	89 04 24             	mov    %eax,(%esp)
 84d7a56:	e8 5f 0b 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d7a5b:	eb 1b                	jmp    84d7a78 <_ZN28Inter_AuctionResultMyBidding12dispatch_sigEP5CUserPci+0x184>
 84d7a5d:	89 d3                	mov    %edx,%ebx
 84d7a5f:	89 c6                	mov    %eax,%esi
 84d7a61:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7a64:	89 04 24             	mov    %eax,(%esp)
 84d7a67:	e8 14 64 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7a6c:	89 f0                	mov    %esi,%eax
 84d7a6e:	89 da                	mov    %ebx,%edx
 84d7a70:	89 04 24             	mov    %eax,(%esp)
 84d7a73:	e8 d8 bc 60 00       	call   8ae3750 <_Unwind_Resume>
 84d7a78:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7a7b:	89 04 24             	mov    %eax,(%esp)
 84d7a7e:	e8 fd 63 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7a83:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7a88:	83 c4 40             	add    $0x40,%esp
 84d7a8b:	5b                   	pop    %ebx
 84d7a8c:	5e                   	pop    %esi
 84d7a8d:	5d                   	pop    %ebp
 84d7a8e:	c3                   	ret
 84d7a8f:	90                   	nop

```

```c
// Inter_AuctionResultMyBidding::dispatch_sig @ 0x84d78f4

/* Inter_AuctionResultMyBidding::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_AuctionResultMyBidding::dispatch_sig
          (Inter_AuctionResultMyBidding *this,CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  int local_24;
  cMyTrace local_20 [16];
  int local_10;
  
  if ((param_1 != (CUser *)0x0) && (3 < (uint)param_3)) {
    memcpy(&local_24,param_2,4);
    iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if (local_24 == iVar1) {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        iVar1 = *(int *)(gmList + local_10 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          cMyTrace::cMyTrace(local_20,
                             "virtual int Inter_AuctionResultMyBidding::dispatch_sig(CUser*, char*, int)"
                             ,0x3d31,0);
          cMyTrace::operator()
                    (local_20,"Trace Auction Delay, %s(%d)","ACK AuctionResultMyBidding",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d79ff to 084d7a5a has its CatchHandler @ 084d7a5d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xc0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_30,param_2 + 4,param_3 + -4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}

```

