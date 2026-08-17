# Inter_AuctionResultAskPrice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d5740 Inter_AuctionResultAskPrice::dispatch_sig  [0x084d5740-0x84d592f] ===
 84d5740:	55                   	push   %ebp
 84d5741:	89 e5                	mov    %esp,%ebp
 84d5743:	56                   	push   %esi
 84d5744:	53                   	push   %ebx
 84d5745:	83 ec 40             	sub    $0x40,%esp
 84d5748:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d574c:	75 0a                	jne    84d5758 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x18>
 84d574e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d5753:	e9 ce 01 00 00       	jmp    84d5926 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x1e6>
 84d5758:	8b 45 10             	mov    0x10(%ebp),%eax
 84d575b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84d575e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d5761:	8b 40 04             	mov    0x4(%eax),%eax
 84d5764:	89 c3                	mov    %eax,%ebx
 84d5766:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5769:	89 04 24             	mov    %eax,(%esp)
 84d576c:	e8 dd 64 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d5771:	39 c3                	cmp    %eax,%ebx
 84d5773:	0f 95 c0             	setne  %al
 84d5776:	84 c0                	test   %al,%al
 84d5778:	74 0a                	je     84d5784 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x44>
 84d577a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d577f:	e9 a2 01 00 00       	jmp    84d5926 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x1e6>
 84d5784:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84d578b:	eb 75                	jmp    84d5802 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0xc2>
 84d578d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d5790:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d5797:	89 c3                	mov    %eax,%ebx
 84d5799:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d579c:	89 04 24             	mov    %eax,(%esp)
 84d579f:	e8 aa 64 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d57a4:	39 c3                	cmp    %eax,%ebx
 84d57a6:	0f 94 c0             	sete   %al
 84d57a9:	84 c0                	test   %al,%al
 84d57ab:	74 51                	je     84d57fe <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0xbe>
 84d57ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d57b0:	89 04 24             	mov    %eax,(%esp)
 84d57b3:	e8 96 64 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d57b8:	89 c3                	mov    %eax,%ebx
 84d57ba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d57c1:	00 
 84d57c2:	c7 44 24 08 7c 37 00 	movl   $0x377c,0x8(%esp)
 84d57c9:	00 
 84d57ca:	c7 44 24 04 20 c6 c8 	movl   $0x8c8c620,0x4(%esp)
 84d57d1:	08 
 84d57d2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d57d5:	89 04 24             	mov    %eax,(%esp)
 84d57d8:	e8 3b 9f 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d57dd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d57e1:	c7 44 24 08 cf 91 c8 	movl   $0x8c891cf,0x8(%esp)
 84d57e8:	08 
 84d57e9:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d57f0:	08 
 84d57f1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84d57f4:	89 04 24             	mov    %eax,(%esp)
 84d57f7:	e8 8c 9f 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d57fc:	eb 0f                	jmp    84d580d <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0xcd>
 84d57fe:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84d5802:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 84d5806:	0f 9e c0             	setle  %al
 84d5809:	84 c0                	test   %al,%al
 84d580b:	75 80                	jne    84d578d <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x4d>
 84d580d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d5810:	89 04 24             	mov    %eax,(%esp)
 84d5813:	e8 34 85 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d5818:	c7 44 24 08 b9 00 00 	movl   $0xb9,0x8(%esp)
 84d581f:	00 
 84d5820:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d5827:	00 
 84d5828:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d582b:	89 04 24             	mov    %eax,(%esp)
 84d582e:	e8 c9 60 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d5833:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d583a:	00 
 84d583b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d583e:	89 04 24             	mov    %eax,(%esp)
 84d5841:	e8 da 60 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d5846:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d5849:	8b 00                	mov    (%eax),%eax
 84d584b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d584f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d5852:	89 04 24             	mov    %eax,(%esp)
 84d5855:	e8 c6 60 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d585a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d585d:	8b 40 08             	mov    0x8(%eax),%eax
 84d5860:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5864:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d5867:	89 04 24             	mov    %eax,(%esp)
 84d586a:	e8 cd 60 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d586f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84d5876:	eb 1d                	jmp    84d5895 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x155>
 84d5878:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d587b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d587e:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 84d5882:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5886:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d5889:	89 04 24             	mov    %eax,(%esp)
 84d588c:	e8 ab 60 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d5891:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84d5895:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 84d5899:	0f 9e c0             	setle  %al
 84d589c:	84 c0                	test   %al,%al
 84d589e:	75 d8                	jne    84d5878 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x138>
 84d58a0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d58a7:	eb 20                	jmp    84d58c9 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x189>
 84d58a9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d58ac:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d58af:	83 c2 04             	add    $0x4,%edx
 84d58b2:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 84d58b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d58ba:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d58bd:	89 04 24             	mov    %eax,(%esp)
 84d58c0:	e8 77 60 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d58c5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d58c9:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 84d58cd:	0f 9e c0             	setle  %al
 84d58d0:	84 c0                	test   %al,%al
 84d58d2:	75 d5                	jne    84d58a9 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x169>
 84d58d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d58db:	00 
 84d58dc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d58df:	89 04 24             	mov    %eax,(%esp)
 84d58e2:	e8 71 60 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d58e7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d58ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d58ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d58f1:	89 04 24             	mov    %eax,(%esp)
 84d58f4:	e8 c1 2c 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d58f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d58fe:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d5901:	89 04 24             	mov    %eax,(%esp)
 84d5904:	e8 77 85 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d5909:	eb 1b                	jmp    84d5926 <_ZN27Inter_AuctionResultAskPrice12dispatch_sigEP5CUserPci+0x1e6>
 84d590b:	89 d3                	mov    %edx,%ebx
 84d590d:	89 c6                	mov    %eax,%esi
 84d590f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84d5912:	89 04 24             	mov    %eax,(%esp)
 84d5915:	e8 66 85 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d591a:	89 f0                	mov    %esi,%eax
 84d591c:	89 da                	mov    %ebx,%edx
 84d591e:	89 04 24             	mov    %eax,(%esp)
 84d5921:	e8 2a de 60 00       	call   8ae3750 <_Unwind_Resume>
 84d5926:	89 d8                	mov    %ebx,%eax
 84d5928:	83 c4 40             	add    $0x40,%esp
 84d592b:	5b                   	pop    %ebx
 84d592c:	5e                   	pop    %esi
 84d592d:	5d                   	pop    %ebp
 84d592e:	c3                   	ret
 84d592f:	90                   	nop

```

```c
// Inter_AuctionResultAskPrice::dispatch_sig @ 0x84d5740

/* Inter_AuctionResultAskPrice::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultAskPrice::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_38 [12];
  cMyTrace local_2c [16];
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_1c = (int *)param_3;
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
        iVar1 = *(int *)(gmList + local_18 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_2c,
                             "virtual int Inter_AuctionResultAskPrice::dispatch_sig(CUser*, char*, int)"
                             ,0x377c,0);
          cMyTrace::operator()
                    (local_2c,"Trace Auction Delay, %s(%d)","ACK AuctionResultAskPrice",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_38);
                    /* try { // try from 084d582e to 084d58f8 has its CatchHandler @ 084d590b */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0xb9);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,*local_1c);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_1c[2]);
      for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_1c[local_14 + 3]);
      }
      for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_1c[local_10 + 6]);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
      CUser::Send((CUser *)param_2,local_38);
      PacketGuard::~PacketGuard(local_38);
    }
  }
  return 0;
}

```

