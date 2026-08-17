# Inter_AuctionResultItemList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d75bc Inter_AuctionResultItemList::dispatch_sig  [0x084d75bc-0x84d7757] ===
 84d75bc:	55                   	push   %ebp
 84d75bd:	89 e5                	mov    %esp,%ebp
 84d75bf:	56                   	push   %esi
 84d75c0:	53                   	push   %ebx
 84d75c1:	83 ec 40             	sub    $0x40,%esp
 84d75c4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d75c8:	75 0a                	jne    84d75d4 <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0x18>
 84d75ca:	b8 00 00 00 00       	mov    $0x0,%eax
 84d75cf:	e9 7c 01 00 00       	jmp    84d7750 <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0x194>
 84d75d4:	8b 45 14             	mov    0x14(%ebp),%eax
 84d75d7:	83 f8 03             	cmp    $0x3,%eax
 84d75da:	0f 86 6b 01 00 00    	jbe    84d774b <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0x18f>
 84d75e0:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84d75e7:	00 
 84d75e8:	8b 45 10             	mov    0x10(%ebp),%eax
 84d75eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d75ef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d75f2:	89 04 24             	mov    %eax,(%esp)
 84d75f5:	e8 a6 62 ba ff       	call   807d8a0 <memcpy@plt>
 84d75fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d75fd:	89 c3                	mov    %eax,%ebx
 84d75ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7602:	89 04 24             	mov    %eax,(%esp)
 84d7605:	e8 44 46 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d760a:	39 c3                	cmp    %eax,%ebx
 84d760c:	0f 95 c0             	setne  %al
 84d760f:	84 c0                	test   %al,%al
 84d7611:	74 0a                	je     84d761d <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0x61>
 84d7613:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7618:	e9 33 01 00 00       	jmp    84d7750 <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0x194>
 84d761d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d7624:	eb 75                	jmp    84d769b <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0xdf>
 84d7626:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7629:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d7630:	89 c3                	mov    %eax,%ebx
 84d7632:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7635:	89 04 24             	mov    %eax,(%esp)
 84d7638:	e8 11 46 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d763d:	39 c3                	cmp    %eax,%ebx
 84d763f:	0f 94 c0             	sete   %al
 84d7642:	84 c0                	test   %al,%al
 84d7644:	74 51                	je     84d7697 <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0xdb>
 84d7646:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7649:	89 04 24             	mov    %eax,(%esp)
 84d764c:	e8 fd 45 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7651:	89 c3                	mov    %eax,%ebx
 84d7653:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d765a:	00 
 84d765b:	c7 44 24 08 ab 3c 00 	movl   $0x3cab,0x8(%esp)
 84d7662:	00 
 84d7663:	c7 44 24 04 40 c4 c8 	movl   $0x8c8c440,0x4(%esp)
 84d766a:	08 
 84d766b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d766e:	89 04 24             	mov    %eax,(%esp)
 84d7671:	e8 a2 80 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d7676:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d767a:	c7 44 24 08 22 93 c8 	movl   $0x8c89322,0x8(%esp)
 84d7681:	08 
 84d7682:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d7689:	08 
 84d768a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d768d:	89 04 24             	mov    %eax,(%esp)
 84d7690:	e8 f3 80 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d7695:	eb 0f                	jmp    84d76a6 <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0xea>
 84d7697:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d769b:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84d769f:	0f 9e c0             	setle  %al
 84d76a2:	84 c0                	test   %al,%al
 84d76a4:	75 80                	jne    84d7626 <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0x6a>
 84d76a6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d76a9:	89 04 24             	mov    %eax,(%esp)
 84d76ac:	e8 9b 66 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d76b1:	c7 44 24 08 bd 00 00 	movl   $0xbd,0x8(%esp)
 84d76b8:	00 
 84d76b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d76c0:	00 
 84d76c1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d76c4:	89 04 24             	mov    %eax,(%esp)
 84d76c7:	e8 30 42 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d76cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d76d3:	00 
 84d76d4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d76d7:	89 04 24             	mov    %eax,(%esp)
 84d76da:	e8 41 42 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d76df:	8b 45 14             	mov    0x14(%ebp),%eax
 84d76e2:	83 e8 04             	sub    $0x4,%eax
 84d76e5:	8b 55 10             	mov    0x10(%ebp),%edx
 84d76e8:	83 c2 04             	add    $0x4,%edx
 84d76eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d76ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d76f3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d76f6:	89 04 24             	mov    %eax,(%esp)
 84d76f9:	e8 0a 68 c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84d76fe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7705:	00 
 84d7706:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7709:	89 04 24             	mov    %eax,(%esp)
 84d770c:	e8 47 42 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d7711:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7714:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7718:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d771b:	89 04 24             	mov    %eax,(%esp)
 84d771e:	e8 97 0e 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d7723:	eb 1b                	jmp    84d7740 <_ZN27Inter_AuctionResultItemList12dispatch_sigEP5CUserPci+0x184>
 84d7725:	89 d3                	mov    %edx,%ebx
 84d7727:	89 c6                	mov    %eax,%esi
 84d7729:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d772c:	89 04 24             	mov    %eax,(%esp)
 84d772f:	e8 4c 67 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7734:	89 f0                	mov    %esi,%eax
 84d7736:	89 da                	mov    %ebx,%edx
 84d7738:	89 04 24             	mov    %eax,(%esp)
 84d773b:	e8 10 c0 60 00       	call   8ae3750 <_Unwind_Resume>
 84d7740:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7743:	89 04 24             	mov    %eax,(%esp)
 84d7746:	e8 35 67 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d774b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d7750:	83 c4 40             	add    $0x40,%esp
 84d7753:	5b                   	pop    %ebx
 84d7754:	5e                   	pop    %esi
 84d7755:	5d                   	pop    %ebp
 84d7756:	c3                   	ret
 84d7757:	90                   	nop

```

```c
// Inter_AuctionResultItemList::dispatch_sig @ 0x84d75bc

/* Inter_AuctionResultItemList::dispatch_sig(CUser*, char*, int) */

undefined4 __thiscall
Inter_AuctionResultItemList::dispatch_sig
          (Inter_AuctionResultItemList *this,CUser *param_1,char *param_2,int param_3)

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
                             "virtual int Inter_AuctionResultItemList::dispatch_sig(CUser*, char*, int)"
                             ,0x3cab,0);
          cMyTrace::operator()
                    (local_20,"Trace Auction Delay, %s(%d)","ACK AuctionResultItemList",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d76c7 to 084d7722 has its CatchHandler @ 084d7725 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xbd);
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

