# Inter_AuctionResultBidding

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 084d6ca4 Inter_AuctionResultBidding::dispatch_sig  [0x084d6ca4-0x84d6cd9] ===
 84d6ca4:	55                   	push   %ebp
 84d6ca5:	89 e5                	mov    %esp,%ebp
 84d6ca7:	83 ec 18             	sub    $0x18,%esp
 84d6caa:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d6cae:	75 07                	jne    84d6cb7 <_ZN26Inter_AuctionResultBidding12dispatch_sigEP5CUserPci+0x13>
 84d6cb0:	b8 00 00 00 00       	mov    $0x0,%eax
 84d6cb5:	eb 20                	jmp    84d6cd7 <_ZN26Inter_AuctionResultBidding12dispatch_sigEP5CUserPci+0x33>
 84d6cb7:	8b 45 14             	mov    0x14(%ebp),%eax
 84d6cba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84d6cbe:	8b 45 10             	mov    0x10(%ebp),%eax
 84d6cc1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d6cc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6cc8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6ccc:	8b 45 08             	mov    0x8(%ebp),%eax
 84d6ccf:	89 04 24             	mov    %eax,(%esp)
 84d6cd2:	e8 03 00 00 00       	call   84d6cda <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci>
 84d6cd7:	c9                   	leave
 84d6cd8:	c3                   	ret
 84d6cd9:	90                   	nop

```

```c
// Inter_AuctionResultBidding::dispatch_sig @ 0x84d6ca4

/* Inter_AuctionResultBidding::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultBidding::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = dispatch_sig_taiwan(param_1,param_2,param_3);
  }
  return uVar1;
}

```

---

## dispatch_sig_taiwan

```asm
// === 084d6cda Inter_AuctionResultBidding::dispatch_sig_taiwan  [0x084d6cda-0x84d741b] ===
 84d6cda:	55                   	push   %ebp
 84d6cdb:	89 e5                	mov    %esp,%ebp
 84d6cdd:	56                   	push   %esi
 84d6cde:	53                   	push   %ebx
 84d6cdf:	83 c4 80             	add    $0xffffff80,%esp
 84d6ce2:	8b 45 10             	mov    0x10(%ebp),%eax
 84d6ce5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84d6ce8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6ceb:	8b 40 04             	mov    0x4(%eax),%eax
 84d6cee:	89 c3                	mov    %eax,%ebx
 84d6cf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6cf3:	89 04 24             	mov    %eax,(%esp)
 84d6cf6:	e8 53 4f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6cfb:	39 c3                	cmp    %eax,%ebx
 84d6cfd:	0f 95 c0             	setne  %al
 84d6d00:	84 c0                	test   %al,%al
 84d6d02:	74 0a                	je     84d6d0e <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x34>
 84d6d04:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d6d09:	e9 04 07 00 00       	jmp    84d7412 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x738>
 84d6d0e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84d6d15:	eb 75                	jmp    84d6d8c <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0xb2>
 84d6d17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d6d1a:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d6d21:	89 c3                	mov    %eax,%ebx
 84d6d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6d26:	89 04 24             	mov    %eax,(%esp)
 84d6d29:	e8 20 4f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6d2e:	39 c3                	cmp    %eax,%ebx
 84d6d30:	0f 94 c0             	sete   %al
 84d6d33:	84 c0                	test   %al,%al
 84d6d35:	74 51                	je     84d6d88 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0xae>
 84d6d37:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6d3a:	89 04 24             	mov    %eax,(%esp)
 84d6d3d:	e8 0c 4f bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6d42:	89 c3                	mov    %eax,%ebx
 84d6d44:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d6d4b:	00 
 84d6d4c:	c7 44 24 08 12 3c 00 	movl   $0x3c12,0x8(%esp)
 84d6d53:	00 
 84d6d54:	c7 44 24 04 00 c5 c8 	movl   $0x8c8c500,0x4(%esp)
 84d6d5b:	08 
 84d6d5c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d6d5f:	89 04 24             	mov    %eax,(%esp)
 84d6d62:	e8 b1 89 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d6d67:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d6d6b:	c7 44 24 08 5c 92 c8 	movl   $0x8c8925c,0x8(%esp)
 84d6d72:	08 
 84d6d73:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d6d7a:	08 
 84d6d7b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84d6d7e:	89 04 24             	mov    %eax,(%esp)
 84d6d81:	e8 02 8a 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d6d86:	eb 0f                	jmp    84d6d97 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0xbd>
 84d6d88:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84d6d8c:	83 7d e8 04          	cmpl   $0x4,-0x18(%ebp)
 84d6d90:	0f 9e c0             	setle  %al
 84d6d93:	84 c0                	test   %al,%al
 84d6d95:	75 80                	jne    84d6d17 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x3d>
 84d6d97:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d6d9a:	89 04 24             	mov    %eax,(%esp)
 84d6d9d:	e8 aa 6f 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d6da2:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 84d6da9:	00 
 84d6daa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d6db1:	00 
 84d6db2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d6db5:	89 04 24             	mov    %eax,(%esp)
 84d6db8:	e8 3f 4b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d6dbd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6dc0:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84d6dc4:	0f b6 c0             	movzbl %al,%eax
 84d6dc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6dcb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d6dce:	89 04 24             	mov    %eax,(%esp)
 84d6dd1:	e8 4a 4b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d6dd6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6dd9:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84d6ddd:	84 c0                	test   %al,%al
 84d6ddf:	75 19                	jne    84d6dfa <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x120>
 84d6de1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6de4:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 84d6de8:	0f b6 c0             	movzbl %al,%eax
 84d6deb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6def:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d6df2:	89 04 24             	mov    %eax,(%esp)
 84d6df5:	e8 26 4b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d6dfa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6dfd:	8b 00                	mov    (%eax),%eax
 84d6dff:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6e03:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d6e06:	89 04 24             	mov    %eax,(%esp)
 84d6e09:	e8 12 4b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d6e0e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84d6e15:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84d6e1c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84d6e23:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d6e2a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6e2d:	8b 00                	mov    (%eax),%eax
 84d6e2f:	83 f8 01             	cmp    $0x1,%eax
 84d6e32:	0f 85 f2 00 00 00    	jne    84d6f2a <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x250>
 84d6e38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d6e3f:	00 
 84d6e40:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6e43:	89 04 24             	mov    %eax,(%esp)
 84d6e46:	e8 bd bb 1b 00       	call   8692a08 <_ZN5CUser13SetBuyingGoldEb>
 84d6e4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6e4e:	89 04 24             	mov    %eax,(%esp)
 84d6e51:	e8 f8 4d bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6e56:	89 c3                	mov    %eax,%ebx
 84d6e58:	e8 c3 b0 d5 ff       	call   8231f20 <_Z16G_CPrePayInfoMgrv>
 84d6e5d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d6e61:	89 04 24             	mov    %eax,(%esp)
 84d6e64:	e8 4f e3 d3 ff       	call   82151b8 <_ZN14CPrePayInfoMgr14FindPrePayInfoEi>
 84d6e69:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84d6e6c:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84d6e70:	75 45                	jne    84d6eb7 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x1dd>
 84d6e72:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6e75:	89 04 24             	mov    %eax,(%esp)
 84d6e78:	e8 d1 4d bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6e7d:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d6e81:	c7 44 24 10 78 92 c8 	movl   $0x8c89278,0x10(%esp)
 84d6e88:	08 
 84d6e89:	c7 44 24 0c 28 3c 00 	movl   $0x3c28,0xc(%esp)
 84d6e90:	00 
 84d6e91:	c7 44 24 08 00 c5 c8 	movl   $0x8c8c500,0x8(%esp)
 84d6e98:	08 
 84d6e99:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d6ea0:	08 
 84d6ea1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d6ea8:	e8 5d cd 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d6ead:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d6eb2:	e9 50 05 00 00       	jmp    84d7407 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x72d>
 84d6eb7:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84d6ebc:	8b 00                	mov    (%eax),%eax
 84d6ebe:	83 c0 3c             	add    $0x3c,%eax
 84d6ec1:	8b 10                	mov    (%eax),%edx
 84d6ec3:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84d6ec8:	89 04 24             	mov    %eax,(%esp)
 84d6ecb:	ff d2                	call   *%edx
 84d6ecd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84d6ed0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84d6ed3:	8b 50 10             	mov    0x10(%eax),%edx
 84d6ed6:	89 55 ac             	mov    %edx,-0x54(%ebp)
 84d6ed9:	8b 50 14             	mov    0x14(%eax),%edx
 84d6edc:	89 55 b0             	mov    %edx,-0x50(%ebp)
 84d6edf:	8b 40 18             	mov    0x18(%eax),%eax
 84d6ee2:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84d6ee5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84d6ee8:	8b 50 1c             	mov    0x1c(%eax),%edx
 84d6eeb:	89 55 a0             	mov    %edx,-0x60(%ebp)
 84d6eee:	8b 50 20             	mov    0x20(%eax),%edx
 84d6ef1:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 84d6ef4:	8b 40 24             	mov    0x24(%eax),%eax
 84d6ef7:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84d6efa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84d6efd:	8b 40 08             	mov    0x8(%eax),%eax
 84d6f00:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84d6f03:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84d6f06:	8b 40 0c             	mov    0xc(%eax),%eax
 84d6f09:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d6f0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6f0f:	89 04 24             	mov    %eax,(%esp)
 84d6f12:	e8 37 4d bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6f17:	89 c3                	mov    %eax,%ebx
 84d6f19:	e8 02 b0 d5 ff       	call   8231f20 <_Z16G_CPrePayInfoMgrv>
 84d6f1e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d6f22:	89 04 24             	mov    %eax,(%esp)
 84d6f25:	e8 e4 61 01 00       	call   84ed10e <_ZN14CPrePayInfoMgr16DeletePrePayInfoEi>
 84d6f2a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6f2d:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84d6f31:	84 c0                	test   %al,%al
 84d6f33:	0f 85 6c 02 00 00    	jne    84d71a5 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x4cb>
 84d6f39:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d6f3c:	8b 00                	mov    (%eax),%eax
 84d6f3e:	83 f8 01             	cmp    $0x1,%eax
 84d6f41:	0f 85 ee 01 00 00    	jne    84d7135 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x45b>
 84d6f47:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d6f4a:	89 04 24             	mov    %eax,(%esp)
 84d6f4d:	e8 9c 33 ca ff       	call   817a2ee <_ZN8WongWork3IPG7CIPGMgr14getBillingCashEv>
 84d6f52:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84d6f55:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d6f59:	89 04 24             	mov    %eax,(%esp)
 84d6f5c:	e8 bb cd c9 ff       	call   8173d1c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE>
 84d6f61:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d6f64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d6f67:	89 04 24             	mov    %eax,(%esp)
 84d6f6a:	e8 fa f6 c6 ff       	call   8146669 <_Z21CheckBillingErrorCodei>
 84d6f6f:	83 f0 01             	xor    $0x1,%eax
 84d6f72:	84 c0                	test   %al,%al
 84d6f74:	0f 84 92 00 00 00    	je     84d700c <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x332>
 84d6f7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6f7d:	89 04 24             	mov    %eax,(%esp)
 84d6f80:	e8 a3 a0 c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84d6f85:	89 c3                	mov    %eax,%ebx
 84d6f87:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6f8a:	89 04 24             	mov    %eax,(%esp)
 84d6f8d:	e8 bc 4c bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6f92:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84d6f95:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84d6f99:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d6f9d:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d6fa1:	c7 44 24 10 9c 92 c8 	movl   $0x8c8929c,0x10(%esp)
 84d6fa8:	08 
 84d6fa9:	c7 44 24 0c 3c 3c 00 	movl   $0x3c3c,0xc(%esp)
 84d6fb0:	00 
 84d6fb1:	c7 44 24 08 00 c5 c8 	movl   $0x8c8c500,0x8(%esp)
 84d6fb8:	08 
 84d6fb9:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d6fc0:	08 
 84d6fc1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d6fc8:	e8 3d cc 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d6fcd:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84d6fd0:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84d6fd3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d6fd6:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d6fdc:	c7 44 24 18 c7 92 c8 	movl   $0x8c892c7,0x18(%esp)
 84d6fe3:	08 
 84d6fe4:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84d6fe7:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84d6feb:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d6fee:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d6ff2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d6ff6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d6ffa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d7001:	00 
 84d7002:	89 1c 24             	mov    %ebx,(%esp)
 84d7005:	e8 2e e8 1a 00       	call   8685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>
 84d700a:	eb 2e                	jmp    84d703a <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x360>
 84d700c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84d700f:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84d7012:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d7015:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d701b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d701e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d7022:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d7026:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d702a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d7031:	00 
 84d7032:	89 1c 24             	mov    %ebx,(%esp)
 84d7035:	e8 66 e8 1a 00       	call   86858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>
 84d703a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d703d:	89 04 24             	mov    %eax,(%esp)
 84d7040:	e8 a9 32 ca ff       	call   817a2ee <_ZN8WongWork3IPG7CIPGMgr14getBillingCashEv>
 84d7045:	8d 55 a0             	lea    -0x60(%ebp),%edx
 84d7048:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d704c:	89 04 24             	mov    %eax,(%esp)
 84d704f:	e8 c8 cc c9 ff       	call   8173d1c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE>
 84d7054:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d7057:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d705a:	89 04 24             	mov    %eax,(%esp)
 84d705d:	e8 07 f6 c6 ff       	call   8146669 <_Z21CheckBillingErrorCodei>
 84d7062:	83 f0 01             	xor    $0x1,%eax
 84d7065:	84 c0                	test   %al,%al
 84d7067:	0f 84 95 00 00 00    	je     84d7102 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x428>
 84d706d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7070:	89 04 24             	mov    %eax,(%esp)
 84d7073:	e8 b0 9f c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84d7078:	89 c3                	mov    %eax,%ebx
 84d707a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d707d:	89 04 24             	mov    %eax,(%esp)
 84d7080:	e8 c9 4b bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7085:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84d7088:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84d708c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d7090:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d7094:	c7 44 24 10 9c 92 c8 	movl   $0x8c8929c,0x10(%esp)
 84d709b:	08 
 84d709c:	c7 44 24 0c 47 3c 00 	movl   $0x3c47,0xc(%esp)
 84d70a3:	00 
 84d70a4:	c7 44 24 08 00 c5 c8 	movl   $0x8c8c500,0x8(%esp)
 84d70ab:	08 
 84d70ac:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d70b3:	08 
 84d70b4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d70bb:	e8 4a cb 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d70c0:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84d70c3:	8b 55 a8             	mov    -0x58(%ebp),%edx
 84d70c6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d70c9:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d70cf:	c7 44 24 18 c7 92 c8 	movl   $0x8c892c7,0x18(%esp)
 84d70d6:	08 
 84d70d7:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84d70da:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84d70de:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84d70e1:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d70e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d70e9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d70ed:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d70f4:	00 
 84d70f5:	89 1c 24             	mov    %ebx,(%esp)
 84d70f8:	e8 3b e7 1a 00       	call   8685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>
 84d70fd:	e9 97 02 00 00       	jmp    84d7399 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x6bf>
 84d7102:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84d7105:	8b 55 a8             	mov    -0x58(%ebp),%edx
 84d7108:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d710b:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d7111:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84d7114:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d7118:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d711c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d7120:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d7127:	00 
 84d7128:	89 1c 24             	mov    %ebx,(%esp)
 84d712b:	e8 70 e7 1a 00       	call   86858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>
 84d7130:	e9 64 02 00 00       	jmp    84d7399 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x6bf>
 84d7135:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d7138:	8b 58 08             	mov    0x8(%eax),%ebx
 84d713b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d713e:	89 04 24             	mov    %eax,(%esp)
 84d7141:	e8 48 31 c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84d7146:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d714d:	00 
 84d714e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d7155:	00 
 84d7156:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 84d715d:	00 
 84d715e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d7162:	89 04 24             	mov    %eax,(%esp)
 84d7165:	e8 32 81 02 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 84d716a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d716d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d7170:	8b 40 08             	mov    0x8(%eax),%eax
 84d7173:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84d7176:	0f 8e 1d 02 00 00    	jle    84d7399 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x6bf>
 84d717c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d717f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d7182:	8b 40 08             	mov    0x8(%eax),%eax
 84d7185:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d7189:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d718d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d7194:	00 
 84d7195:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7198:	89 04 24             	mov    %eax,(%esp)
 84d719b:	e8 a4 56 1a 00       	call   867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>
 84d71a0:	e9 f4 01 00 00       	jmp    84d7399 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x6bf>
 84d71a5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d71a8:	8b 00                	mov    (%eax),%eax
 84d71aa:	83 f8 01             	cmp    $0x1,%eax
 84d71ad:	0f 85 e6 01 00 00    	jne    84d7399 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x6bf>
 84d71b3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d71b6:	89 04 24             	mov    %eax,(%esp)
 84d71b9:	e8 30 31 ca ff       	call   817a2ee <_ZN8WongWork3IPG7CIPGMgr14getBillingCashEv>
 84d71be:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84d71c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d71c5:	89 04 24             	mov    %eax,(%esp)
 84d71c8:	e8 7b ca c9 ff       	call   8173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>
 84d71cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d71d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d71d3:	89 04 24             	mov    %eax,(%esp)
 84d71d6:	e8 8e f4 c6 ff       	call   8146669 <_Z21CheckBillingErrorCodei>
 84d71db:	83 f0 01             	xor    $0x1,%eax
 84d71de:	84 c0                	test   %al,%al
 84d71e0:	0f 84 92 00 00 00    	je     84d7278 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x59e>
 84d71e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d71e9:	89 04 24             	mov    %eax,(%esp)
 84d71ec:	e8 37 9e c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84d71f1:	89 c3                	mov    %eax,%ebx
 84d71f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d71f6:	89 04 24             	mov    %eax,(%esp)
 84d71f9:	e8 50 4a bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d71fe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d7201:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84d7205:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d7209:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d720d:	c7 44 24 10 d0 92 c8 	movl   $0x8c892d0,0x10(%esp)
 84d7214:	08 
 84d7215:	c7 44 24 0c 5f 3c 00 	movl   $0x3c5f,0xc(%esp)
 84d721c:	00 
 84d721d:	c7 44 24 08 00 c5 c8 	movl   $0x8c8c500,0x8(%esp)
 84d7224:	08 
 84d7225:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d722c:	08 
 84d722d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d7234:	e8 d1 c9 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d7239:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84d723c:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84d723f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d7242:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d7248:	c7 44 24 18 fc 92 c8 	movl   $0x8c892fc,0x18(%esp)
 84d724f:	08 
 84d7250:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 84d7253:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84d7257:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d725a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d725e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d7262:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d7266:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d726d:	00 
 84d726e:	89 1c 24             	mov    %ebx,(%esp)
 84d7271:	e8 c2 e5 1a 00       	call   8685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>
 84d7276:	eb 2e                	jmp    84d72a6 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x5cc>
 84d7278:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84d727b:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84d727e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d7281:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d7287:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 84d728a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d728e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d7292:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d7296:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d729d:	00 
 84d729e:	89 1c 24             	mov    %ebx,(%esp)
 84d72a1:	e8 fa e5 1a 00       	call   86858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>
 84d72a6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d72a9:	89 04 24             	mov    %eax,(%esp)
 84d72ac:	e8 3d 30 ca ff       	call   817a2ee <_ZN8WongWork3IPG7CIPGMgr14getBillingCashEv>
 84d72b1:	8d 55 a0             	lea    -0x60(%ebp),%edx
 84d72b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d72b8:	89 04 24             	mov    %eax,(%esp)
 84d72bb:	e8 88 c9 c9 ff       	call   8173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>
 84d72c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d72c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d72c6:	89 04 24             	mov    %eax,(%esp)
 84d72c9:	e8 9b f3 c6 ff       	call   8146669 <_Z21CheckBillingErrorCodei>
 84d72ce:	83 f0 01             	xor    $0x1,%eax
 84d72d1:	84 c0                	test   %al,%al
 84d72d3:	0f 84 92 00 00 00    	je     84d736b <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x691>
 84d72d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d72dc:	89 04 24             	mov    %eax,(%esp)
 84d72df:	e8 44 9d c2 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84d72e4:	89 c3                	mov    %eax,%ebx
 84d72e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d72e9:	89 04 24             	mov    %eax,(%esp)
 84d72ec:	e8 5d 49 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d72f1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d72f4:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84d72f8:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d72fc:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d7300:	c7 44 24 10 d0 92 c8 	movl   $0x8c892d0,0x10(%esp)
 84d7307:	08 
 84d7308:	c7 44 24 0c 6a 3c 00 	movl   $0x3c6a,0xc(%esp)
 84d730f:	00 
 84d7310:	c7 44 24 08 00 c5 c8 	movl   $0x8c8c500,0x8(%esp)
 84d7317:	08 
 84d7318:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d731f:	08 
 84d7320:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d7327:	e8 de c8 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d732c:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84d732f:	8b 55 a8             	mov    -0x58(%ebp),%edx
 84d7332:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d7335:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d733b:	c7 44 24 18 fc 92 c8 	movl   $0x8c892fc,0x18(%esp)
 84d7342:	08 
 84d7343:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 84d7346:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84d734a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84d734d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d7351:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d7355:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d7359:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d7360:	00 
 84d7361:	89 1c 24             	mov    %ebx,(%esp)
 84d7364:	e8 cf e4 1a 00       	call   8685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>
 84d7369:	eb 2e                	jmp    84d7399 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x6bf>
 84d736b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84d736e:	8b 55 a8             	mov    -0x58(%ebp),%edx
 84d7371:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84d7374:	8d 99 00 97 07 00    	lea    0x79700(%ecx),%ebx
 84d737a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84d737d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84d7381:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d7385:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d7389:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d7390:	00 
 84d7391:	89 1c 24             	mov    %ebx,(%esp)
 84d7394:	e8 07 e5 1a 00       	call   86858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>
 84d7399:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d73a0:	00 
 84d73a1:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d73a4:	89 04 24             	mov    %eax,(%esp)
 84d73a7:	e8 ac 45 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d73ac:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d73af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d73b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d73b6:	89 04 24             	mov    %eax,(%esp)
 84d73b9:	e8 fc 11 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d73be:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84d73c1:	8b 00                	mov    (%eax),%eax
 84d73c3:	83 f8 01             	cmp    $0x1,%eax
 84d73c6:	75 1d                	jne    84d73e5 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x70b>
 84d73c8:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84d73cd:	8b 00                	mov    (%eax),%eax
 84d73cf:	83 c0 2c             	add    $0x2c,%eax
 84d73d2:	8b 08                	mov    (%eax),%ecx
 84d73d4:	a1 34 f7 41 09       	mov    0x941f734,%eax
 84d73d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d73dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d73e0:	89 04 24             	mov    %eax,(%esp)
 84d73e3:	ff d1                	call   *%ecx
 84d73e5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d73ea:	eb 1b                	jmp    84d7407 <_ZN26Inter_AuctionResultBidding19dispatch_sig_taiwanEP5CUserPci+0x72d>
 84d73ec:	89 d3                	mov    %edx,%ebx
 84d73ee:	89 c6                	mov    %eax,%esi
 84d73f0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d73f3:	89 04 24             	mov    %eax,(%esp)
 84d73f6:	e8 85 6a 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d73fb:	89 f0                	mov    %esi,%eax
 84d73fd:	89 da                	mov    %ebx,%edx
 84d73ff:	89 04 24             	mov    %eax,(%esp)
 84d7402:	e8 49 c3 60 00       	call   8ae3750 <_Unwind_Resume>
 84d7407:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84d740a:	89 04 24             	mov    %eax,(%esp)
 84d740d:	e8 6e 6a 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7412:	89 d8                	mov    %ebx,%eax
 84d7414:	83 ec 80             	sub    $0xffffff80,%esp
 84d7417:	5b                   	pop    %ebx
 84d7418:	5e                   	pop    %esi
 84d7419:	5d                   	pop    %ebp
 84d741a:	c3                   	ret
 84d741b:	90                   	nop

```

```c
// Inter_AuctionResultBidding::dispatch_sig_taiwan @ 0x84d6cda

/* Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int) */

undefined4 Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  TaiwanCash *pTVar5;
  undefined4 uVar6;
  CInventory *pCVar7;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  PacketGuard local_4c [12];
  cMyTrace local_40 [16];
  int *local_30;
  int local_2c;
  CIPGMgr *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_30 = (int *)param_3;
  iVar4 = *(int *)(param_3 + 4);
  iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  if (iVar4 != iVar2) {
    return 0;
  }
  for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
    iVar4 = *(int *)(gmList + local_1c * 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar4 == iVar2) {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      cMyTrace::cMyTrace(local_40,
                         "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",
                         0x3c12,0);
      cMyTrace::operator()(local_40,"Trace Auction Delay, %s(%d)","ACK AuctionResultBidding",uVar3);
      break;
    }
  }
  PacketGuard::PacketGuard(local_4c);
                    /* try { // try from 084d6db8 to 084d73e4 has its CatchHandler @ 084d73ec */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_4c,1,0xbc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,(uint)*(byte *)(local_30 + 3));
  if ((char)local_30[3] == '\0') {
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_4c,(uint)*(byte *)((int)local_30 + 0xd));
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_4c,*local_30);
  local_2c = 0;
  local_28 = (CIPGMgr *)0x0;
  local_24 = 0;
  local_20 = 0;
  if (*local_30 == 1) {
    CUser::SetBuyingGold((CUser *)param_2,false);
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar4 = G_CPrePayInfoMgr();
    local_2c = CPrePayInfoMgr::FindPrePayInfo(iVar4);
    if (local_2c == 0) {
      uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c28,
                 "PrePayInfo is null. character:%u",uVar3);
      goto LAB_084d7407;
    }
    local_28 = (CIPGMgr *)
               (**(code **)(*GlobalData::s_pIPGHelper + 0x3c))(GlobalData::s_pIPGHelper,uVar3);
    local_58 = *(undefined4 *)(local_2c + 0x10);
    local_54 = *(undefined4 *)(local_2c + 0x14);
    local_50 = *(undefined4 *)(local_2c + 0x18);
    local_64 = *(undefined4 *)(local_2c + 0x1c);
    local_60 = *(undefined4 *)(local_2c + 0x20);
    local_5c = *(undefined4 *)(local_2c + 0x24);
    local_24 = *(undefined4 *)(local_2c + 8);
    local_20 = *(undefined4 *)(local_2c + 0xc);
    CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    iVar4 = G_CPrePayInfoMgr();
    CPrePayInfoMgr::DeletePrePayInfo(iVar4);
  }
  if ((char)local_30[3] == '\0') {
    if (*local_30 == 1) {
      pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
      local_18 = Taiwan::TaiwanCash::cancel(pTVar5,(BillTransaction *)&local_58);
      cVar1 = CheckBillingErrorCode(local_18);
      if (cVar1 == '\x01') {
        cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_54,local_50,local_24);
      }
      else {
        uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c3c,
                   "IPG_CANCEL user: %d, charac: %s reason: %d",uVar6,uVar3,local_18);
        cUserHistoryLog::BillingFail
                  (param_2 + 0x79700,2,local_54,local_50,local_24,local_18,"rollback");
      }
      pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
      local_18 = Taiwan::TaiwanCash::cancel(pTVar5,(BillTransaction *)&local_64);
      cVar1 = CheckBillingErrorCode(local_18);
      if (cVar1 == '\x01') {
        cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_60,local_5c,local_20);
      }
      else {
        uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c47,
                   "IPG_CANCEL user: %d, charac: %s reason: %d",uVar6,uVar3,local_18);
        cUserHistoryLog::BillingFail
                  (param_2 + 0x79700,2,local_60,local_5c,local_20,local_18,"rollback");
      }
    }
    else {
      iVar4 = local_30[2];
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_14 = CInventory::gain_money(pCVar7,iVar4,0x14,1,0);
      if (local_14 < local_30[2]) {
        CUser::SendMoneyFullReason((CUser *)param_2,0,local_30[2],local_14);
      }
    }
  }
  else if (*local_30 == 1) {
    pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
    local_10 = Taiwan::TaiwanCash::confirm(pTVar5,(BillTransaction *)&local_58);
    cVar1 = CheckBillingErrorCode(local_10);
    if (cVar1 == '\x01') {
      cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_54,local_50,local_24);
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c5f,
                 "IPG_CONFIRM user: %d, charac: %s reason: %d",uVar6,uVar3,local_10);
      cUserHistoryLog::BillingFail
                (param_2 + 0x79700,2,local_54,local_50,local_24,local_10,"confirm");
    }
    pTVar5 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_28);
    local_10 = Taiwan::TaiwanCash::confirm(pTVar5,(BillTransaction *)&local_64);
    cVar1 = CheckBillingErrorCode(local_10);
    if (cVar1 == '\x01') {
      cUserHistoryLog::BillingSuccess(param_2 + 0x79700,2,local_60,local_5c,local_20);
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "int Inter_AuctionResultBidding::dispatch_sig_taiwan(CUser*, char*, int)",0x3c6a,
                 "IPG_CONFIRM user: %d, charac: %s reason: %d",uVar6,uVar3,local_10);
      cUserHistoryLog::BillingFail
                (param_2 + 0x79700,2,local_60,local_5c,local_20,local_10,"confirm");
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_4c,true);
  CUser::Send((CUser *)param_2,local_4c);
  if (*local_30 == 1) {
    (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_2);
  }
LAB_084d7407:
  PacketGuard::~PacketGuard(local_4c);
  return 0;
}

```

