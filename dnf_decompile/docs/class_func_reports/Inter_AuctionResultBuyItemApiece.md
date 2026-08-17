# Inter_AuctionResultBuyItemApiece

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d7c8e Inter_AuctionResultBuyItemApiece::dispatch_sig  [0x084d7c8e-0x84d7e83] ===
 84d7c8e:	55                   	push   %ebp
 84d7c8f:	89 e5                	mov    %esp,%ebp
 84d7c91:	56                   	push   %esi
 84d7c92:	53                   	push   %ebx
 84d7c93:	83 ec 50             	sub    $0x50,%esp
 84d7c96:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d7c9a:	75 0a                	jne    84d7ca6 <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x18>
 84d7c9c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d7ca1:	e9 d4 01 00 00       	jmp    84d7e7a <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x1ec>
 84d7ca6:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7ca9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d7cac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d7caf:	8b 00                	mov    (%eax),%eax
 84d7cb1:	89 c3                	mov    %eax,%ebx
 84d7cb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7cb6:	89 04 24             	mov    %eax,(%esp)
 84d7cb9:	e8 90 3f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7cbe:	39 c3                	cmp    %eax,%ebx
 84d7cc0:	0f 95 c0             	setne  %al
 84d7cc3:	84 c0                	test   %al,%al
 84d7cc5:	74 0a                	je     84d7cd1 <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x43>
 84d7cc7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d7ccc:	e9 a9 01 00 00       	jmp    84d7e7a <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x1ec>
 84d7cd1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84d7cd8:	eb 75                	jmp    84d7d4f <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0xc1>
 84d7cda:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7cdd:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d7ce4:	89 c3                	mov    %eax,%ebx
 84d7ce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7ce9:	89 04 24             	mov    %eax,(%esp)
 84d7cec:	e8 5d 3f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7cf1:	39 c3                	cmp    %eax,%ebx
 84d7cf3:	0f 94 c0             	sete   %al
 84d7cf6:	84 c0                	test   %al,%al
 84d7cf8:	74 51                	je     84d7d4b <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0xbd>
 84d7cfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7cfd:	89 04 24             	mov    %eax,(%esp)
 84d7d00:	e8 49 3f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7d05:	89 c3                	mov    %eax,%ebx
 84d7d07:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d7d0e:	00 
 84d7d0f:	c7 44 24 08 12 3e 00 	movl   $0x3e12,0x8(%esp)
 84d7d16:	00 
 84d7d17:	c7 44 24 04 c0 c2 c8 	movl   $0x8c8c2c0,0x4(%esp)
 84d7d1e:	08 
 84d7d1f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d7d22:	89 04 24             	mov    %eax,(%esp)
 84d7d25:	e8 ee 79 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d7d2a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d7d2e:	c7 44 24 08 d8 93 c8 	movl   $0x8c893d8,0x8(%esp)
 84d7d35:	08 
 84d7d36:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d7d3d:	08 
 84d7d3e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d7d41:	89 04 24             	mov    %eax,(%esp)
 84d7d44:	e8 3f 7a 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d7d49:	eb 0f                	jmp    84d7d5a <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0xcc>
 84d7d4b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84d7d4f:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 84d7d53:	0f 9e c0             	setle  %al
 84d7d56:	84 c0                	test   %al,%al
 84d7d58:	75 80                	jne    84d7cda <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x4c>
 84d7d5a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7d5d:	89 04 24             	mov    %eax,(%esp)
 84d7d60:	e8 e7 5f 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d7d65:	c7 44 24 08 4f 01 00 	movl   $0x14f,0x8(%esp)
 84d7d6c:	00 
 84d7d6d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7d74:	00 
 84d7d75:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7d78:	89 04 24             	mov    %eax,(%esp)
 84d7d7b:	e8 7c 3b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d7d80:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d7d83:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84d7d87:	0f b6 c0             	movzbl %al,%eax
 84d7d8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7d8e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7d91:	89 04 24             	mov    %eax,(%esp)
 84d7d94:	e8 87 3b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7d99:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d7d9c:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84d7da0:	84 c0                	test   %al,%al
 84d7da2:	0f 85 80 00 00 00    	jne    84d7e28 <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x19a>
 84d7da8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d7dab:	8b 58 04             	mov    0x4(%eax),%ebx
 84d7dae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7db1:	89 04 24             	mov    %eax,(%esp)
 84d7db4:	e8 d5 24 c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84d7db9:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d7dc0:	00 
 84d7dc1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d7dc8:	00 
 84d7dc9:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84d7dd0:	00 
 84d7dd1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d7dd5:	89 04 24             	mov    %eax,(%esp)
 84d7dd8:	e8 bf 74 02 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 84d7ddd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d7de0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d7de3:	8b 40 04             	mov    0x4(%eax),%eax
 84d7de6:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84d7de9:	7e 24                	jle    84d7e0f <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x181>
 84d7deb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d7dee:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d7df1:	8b 40 04             	mov    0x4(%eax),%eax
 84d7df4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d7df8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d7dfc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d7e03:	00 
 84d7e04:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7e07:	89 04 24             	mov    %eax,(%esp)
 84d7e0a:	e8 35 4a 1a 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 84d7e0f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d7e12:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84d7e16:	0f b6 c0             	movzbl %al,%eax
 84d7e19:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7e1d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7e20:	89 04 24             	mov    %eax,(%esp)
 84d7e23:	e8 f8 3a bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7e28:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7e2f:	00 
 84d7e30:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7e33:	89 04 24             	mov    %eax,(%esp)
 84d7e36:	e8 1d 3b bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d7e3b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7e3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7e42:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7e45:	89 04 24             	mov    %eax,(%esp)
 84d7e48:	e8 6d 07 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d7e4d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d7e52:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7e55:	89 04 24             	mov    %eax,(%esp)
 84d7e58:	e8 23 60 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7e5d:	eb 1b                	jmp    84d7e7a <_ZN32Inter_AuctionResultBuyItemApiece12dispatch_sigEP5CUserPci+0x1ec>
 84d7e5f:	89 d3                	mov    %edx,%ebx
 84d7e61:	89 c6                	mov    %eax,%esi
 84d7e63:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d7e66:	89 04 24             	mov    %eax,(%esp)
 84d7e69:	e8 12 60 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7e6e:	89 f0                	mov    %esi,%eax
 84d7e70:	89 da                	mov    %ebx,%edx
 84d7e72:	89 04 24             	mov    %eax,(%esp)
 84d7e75:	e8 d6 b8 60 00       	call   8ae3750 <_Unwind_Resume>
 84d7e7a:	89 d8                	mov    %ebx,%eax
 84d7e7c:	83 c4 50             	add    $0x50,%esp
 84d7e7f:	5b                   	pop    %ebx
 84d7e80:	5e                   	pop    %esi
 84d7e81:	5d                   	pop    %ebp
 84d7e82:	c3                   	ret
 84d7e83:	90                   	nop

```

```c
// Inter_AuctionResultBuyItemApiece::dispatch_sig @ 0x84d7c8e

/* Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  PacketGuard local_34 [12];
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_18 = param_3;
    iVar1 = *(int *)param_3;
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        iVar1 = *(int *)(gmList + local_14 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_28,
                             "virtual int Inter_AuctionResultBuyItemApiece::dispatch_sig(CUser*, char*, int)"
                             ,0x3e12,0);
          cMyTrace::operator()
                    (local_28,"Trace Auction Delay, %s(%d)","ACK AuctionResultBuyItemApiece",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084d7d7b to 084d7e4c has its CatchHandler @ 084d7e5f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x14f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_18 + 8));
      if (*(char *)(local_18 + 8) == '\0') {
        uVar3 = *(undefined4 *)(local_18 + 4);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        local_10 = CInventory::gain_money(pCVar4,uVar3,0x14,1,0);
        if (local_10 < *(int *)(local_18 + 4)) {
          CUser::SendMoneyFullReason((CUser *)param_2,0,*(undefined4 *)(local_18 + 4),local_10);
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_18 + 9));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send((CUser *)param_2,local_34);
      PacketGuard::~PacketGuard(local_34);
    }
  }
  return 0;
}

```

