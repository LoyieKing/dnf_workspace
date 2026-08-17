# Inter_AuctionResultMyRegistedItems

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d7758 Inter_AuctionResultMyRegistedItems::dispatch_sig  [0x084d7758-0x84d78f3] ===
 84d7758:	55                   	push   %ebp
 84d7759:	89 e5                	mov    %esp,%ebp
 84d775b:	56                   	push   %esi
 84d775c:	53                   	push   %ebx
 84d775d:	83 ec 40             	sub    $0x40,%esp
 84d7760:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d7764:	75 0a                	jne    84d7770 <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0x18>
 84d7766:	b8 00 00 00 00       	mov    $0x0,%eax
 84d776b:	e9 7c 01 00 00       	jmp    84d78ec <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0x194>
 84d7770:	8b 45 14             	mov    0x14(%ebp),%eax
 84d7773:	83 f8 03             	cmp    $0x3,%eax
 84d7776:	0f 86 6b 01 00 00    	jbe    84d78e7 <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0x18f>
 84d777c:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84d7783:	00 
 84d7784:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7787:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d778b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d778e:	89 04 24             	mov    %eax,(%esp)
 84d7791:	e8 0a 61 ba ff       	call   807d8a0 <memcpy@plt>
 84d7796:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d7799:	89 c3                	mov    %eax,%ebx
 84d779b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d779e:	89 04 24             	mov    %eax,(%esp)
 84d77a1:	e8 a8 44 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d77a6:	39 c3                	cmp    %eax,%ebx
 84d77a8:	0f 95 c0             	setne  %al
 84d77ab:	84 c0                	test   %al,%al
 84d77ad:	74 0a                	je     84d77b9 <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0x61>
 84d77af:	b8 00 00 00 00       	mov    $0x0,%eax
 84d77b4:	e9 33 01 00 00       	jmp    84d78ec <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0x194>
 84d77b9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d77c0:	eb 75                	jmp    84d7837 <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0xdf>
 84d77c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d77c5:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d77cc:	89 c3                	mov    %eax,%ebx
 84d77ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d77d1:	89 04 24             	mov    %eax,(%esp)
 84d77d4:	e8 75 44 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d77d9:	39 c3                	cmp    %eax,%ebx
 84d77db:	0f 94 c0             	sete   %al
 84d77de:	84 c0                	test   %al,%al
 84d77e0:	74 51                	je     84d7833 <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0xdb>
 84d77e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d77e5:	89 04 24             	mov    %eax,(%esp)
 84d77e8:	e8 61 44 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d77ed:	89 c3                	mov    %eax,%ebx
 84d77ef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d77f6:	00 
 84d77f7:	c7 44 24 08 ed 3c 00 	movl   $0x3ced,0x8(%esp)
 84d77fe:	00 
 84d77ff:	c7 44 24 04 e0 c3 c8 	movl   $0x8c8c3e0,0x4(%esp)
 84d7806:	08 
 84d7807:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d780a:	89 04 24             	mov    %eax,(%esp)
 84d780d:	e8 06 7f 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d7812:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d7816:	c7 44 24 08 3c 93 c8 	movl   $0x8c8933c,0x8(%esp)
 84d781d:	08 
 84d781e:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d7825:	08 
 84d7826:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7829:	89 04 24             	mov    %eax,(%esp)
 84d782c:	e8 57 7f 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d7831:	eb 0f                	jmp    84d7842 <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0xea>
 84d7833:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d7837:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84d783b:	0f 9e c0             	setle  %al
 84d783e:	84 c0                	test   %al,%al
 84d7840:	75 80                	jne    84d77c2 <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0x6a>
 84d7842:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7845:	89 04 24             	mov    %eax,(%esp)
 84d7848:	e8 ff 64 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d784d:	c7 44 24 08 bf 00 00 	movl   $0xbf,0x8(%esp)
 84d7854:	00 
 84d7855:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d785c:	00 
 84d785d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7860:	89 04 24             	mov    %eax,(%esp)
 84d7863:	e8 94 40 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d7868:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d786f:	00 
 84d7870:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7873:	89 04 24             	mov    %eax,(%esp)
 84d7876:	e8 a5 40 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d787b:	8b 45 14             	mov    0x14(%ebp),%eax
 84d787e:	83 e8 04             	sub    $0x4,%eax
 84d7881:	8b 55 10             	mov    0x10(%ebp),%edx
 84d7884:	83 c2 04             	add    $0x4,%edx
 84d7887:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d788b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d788f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7892:	89 04 24             	mov    %eax,(%esp)
 84d7895:	e8 6e 66 c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84d789a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d78a1:	00 
 84d78a2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d78a5:	89 04 24             	mov    %eax,(%esp)
 84d78a8:	e8 ab 40 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d78ad:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d78b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d78b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d78b7:	89 04 24             	mov    %eax,(%esp)
 84d78ba:	e8 fb 0c 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d78bf:	eb 1b                	jmp    84d78dc <_ZN34Inter_AuctionResultMyRegistedItems12dispatch_sigEP5CUserPci+0x184>
 84d78c1:	89 d3                	mov    %edx,%ebx
 84d78c3:	89 c6                	mov    %eax,%esi
 84d78c5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d78c8:	89 04 24             	mov    %eax,(%esp)
 84d78cb:	e8 b0 65 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d78d0:	89 f0                	mov    %esi,%eax
 84d78d2:	89 da                	mov    %ebx,%edx
 84d78d4:	89 04 24             	mov    %eax,(%esp)
 84d78d7:	e8 74 be 60 00       	call   8ae3750 <_Unwind_Resume>
 84d78dc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d78df:	89 04 24             	mov    %eax,(%esp)
 84d78e2:	e8 99 65 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d78e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84d78ec:	83 c4 40             	add    $0x40,%esp
 84d78ef:	5b                   	pop    %ebx
 84d78f0:	5e                   	pop    %esi
 84d78f1:	5d                   	pop    %ebp
 84d78f2:	c3                   	ret
 84d78f3:	90                   	nop

```

```c
// Inter_AuctionResultMyRegistedItems::dispatch_sig @ 0x84d7758

/* Inter_AuctionResultMyRegistedItems::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_AuctionResultMyRegistedItems::dispatch_sig
          (Inter_AuctionResultMyRegistedItems *this,CUser *param_1,char *param_2,int param_3)

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
                             "virtual int Inter_AuctionResultMyRegistedItems::dispatch_sig(CUser*, char*, int)"
                             ,0x3ced,0);
          cMyTrace::operator()
                    (local_20,"Trace Auction Delay, %s(%d)","ACK AuctionResultMyRegistedItems",uVar3
                    );
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d7863 to 084d78be has its CatchHandler @ 084d78c1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xbf);
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

