# Inter_AuctionResultRegistCancel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d741c Inter_AuctionResultRegistCancel::dispatch_sig  [0x084d741c-0x84d75bb] ===
 84d741c:	55                   	push   %ebp
 84d741d:	89 e5                	mov    %esp,%ebp
 84d741f:	56                   	push   %esi
 84d7420:	53                   	push   %ebx
 84d7421:	83 ec 40             	sub    $0x40,%esp
 84d7424:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d7428:	75 0a                	jne    84d7434 <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0x18>
 84d742a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d742f:	e9 7e 01 00 00       	jmp    84d75b2 <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0x196>
 84d7434:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7437:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d743a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d743d:	8b 40 04             	mov    0x4(%eax),%eax
 84d7440:	89 c3                	mov    %eax,%ebx
 84d7442:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7445:	89 04 24             	mov    %eax,(%esp)
 84d7448:	e8 01 48 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d744d:	39 c3                	cmp    %eax,%ebx
 84d744f:	0f 95 c0             	setne  %al
 84d7452:	84 c0                	test   %al,%al
 84d7454:	74 0a                	je     84d7460 <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0x44>
 84d7456:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d745b:	e9 52 01 00 00       	jmp    84d75b2 <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0x196>
 84d7460:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d7467:	eb 75                	jmp    84d74de <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0xc2>
 84d7469:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d746c:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d7473:	89 c3                	mov    %eax,%ebx
 84d7475:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7478:	89 04 24             	mov    %eax,(%esp)
 84d747b:	e8 ce 47 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7480:	39 c3                	cmp    %eax,%ebx
 84d7482:	0f 94 c0             	sete   %al
 84d7485:	84 c0                	test   %al,%al
 84d7487:	74 51                	je     84d74da <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0xbe>
 84d7489:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d748c:	89 04 24             	mov    %eax,(%esp)
 84d748f:	e8 ba 47 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d7494:	89 c3                	mov    %eax,%ebx
 84d7496:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d749d:	00 
 84d749e:	c7 44 24 08 88 3c 00 	movl   $0x3c88,0x8(%esp)
 84d74a5:	00 
 84d74a6:	c7 44 24 04 a0 c4 c8 	movl   $0x8c8c4a0,0x4(%esp)
 84d74ad:	08 
 84d74ae:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d74b1:	89 04 24             	mov    %eax,(%esp)
 84d74b4:	e8 5f 82 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d74b9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d74bd:	c7 44 24 08 04 93 c8 	movl   $0x8c89304,0x8(%esp)
 84d74c4:	08 
 84d74c5:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d74cc:	08 
 84d74cd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d74d0:	89 04 24             	mov    %eax,(%esp)
 84d74d3:	e8 b0 82 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d74d8:	eb 0f                	jmp    84d74e9 <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0xcd>
 84d74da:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d74de:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84d74e2:	0f 9e c0             	setle  %al
 84d74e5:	84 c0                	test   %al,%al
 84d74e7:	75 80                	jne    84d7469 <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0x4d>
 84d74e9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d74ec:	89 04 24             	mov    %eax,(%esp)
 84d74ef:	e8 58 68 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d74f4:	c7 44 24 08 bb 00 00 	movl   $0xbb,0x8(%esp)
 84d74fb:	00 
 84d74fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7503:	00 
 84d7504:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7507:	89 04 24             	mov    %eax,(%esp)
 84d750a:	e8 ed 43 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d750f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7512:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84d7516:	0f b6 c0             	movzbl %al,%eax
 84d7519:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d751d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7520:	89 04 24             	mov    %eax,(%esp)
 84d7523:	e8 f8 43 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7528:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d752b:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84d752f:	84 c0                	test   %al,%al
 84d7531:	75 19                	jne    84d754c <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0x130>
 84d7533:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7536:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84d753a:	0f b6 c0             	movzbl %al,%eax
 84d753d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7541:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7544:	89 04 24             	mov    %eax,(%esp)
 84d7547:	e8 d4 43 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d754c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d754f:	8b 00                	mov    (%eax),%eax
 84d7551:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7555:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7558:	89 04 24             	mov    %eax,(%esp)
 84d755b:	e8 c0 43 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d7560:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7567:	00 
 84d7568:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d756b:	89 04 24             	mov    %eax,(%esp)
 84d756e:	e8 e5 43 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d7573:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d7576:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d757a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d757d:	89 04 24             	mov    %eax,(%esp)
 84d7580:	e8 35 10 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d7585:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d758a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d758d:	89 04 24             	mov    %eax,(%esp)
 84d7590:	e8 eb 68 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d7595:	eb 1b                	jmp    84d75b2 <_ZN31Inter_AuctionResultRegistCancel12dispatch_sigEP5CUserPci+0x196>
 84d7597:	89 d3                	mov    %edx,%ebx
 84d7599:	89 c6                	mov    %eax,%esi
 84d759b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d759e:	89 04 24             	mov    %eax,(%esp)
 84d75a1:	e8 da 68 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d75a6:	89 f0                	mov    %esi,%eax
 84d75a8:	89 da                	mov    %ebx,%edx
 84d75aa:	89 04 24             	mov    %eax,(%esp)
 84d75ad:	e8 9e c1 60 00       	call   8ae3750 <_Unwind_Resume>
 84d75b2:	89 d8                	mov    %ebx,%eax
 84d75b4:	83 c4 40             	add    $0x40,%esp
 84d75b7:	5b                   	pop    %ebx
 84d75b8:	5e                   	pop    %esi
 84d75b9:	5d                   	pop    %ebp
 84d75ba:	c3                   	ret
 84d75bb:	90                   	nop

```

```c
// Inter_AuctionResultRegistCancel::dispatch_sig @ 0x84d741c

/* Inter_AuctionResultRegistCancel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultRegistCancel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int *local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_14 = (int *)param_3;
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        iVar1 = *(int *)(gmList + local_10 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_24,
                             "virtual int Inter_AuctionResultRegistCancel::dispatch_sig(CUser*, char*, int)"
                             ,0x3c88,0);
          cMyTrace::operator()
                    (local_24,"Trace Auction Delay, %s(%d)","ACK AuctionResultRegistCancel",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d750a to 084d7584 has its CatchHandler @ 084d7597 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xbb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_14 + 2));
      if ((char)local_14[2] == '\0') {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_30,(uint)*(byte *)((int)local_14 + 9));
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}

```

