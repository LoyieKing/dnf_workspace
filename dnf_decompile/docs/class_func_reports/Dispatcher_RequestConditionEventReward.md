# Dispatcher_RequestConditionEventReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082223a6 Dispatcher_RequestConditionEventReward::dispatch_sig  [0x082223a6-0x82226bf] ===
 82223a6:	55                   	push   %ebp
 82223a7:	89 e5                	mov    %esp,%ebp
 82223a9:	56                   	push   %esi
 82223aa:	53                   	push   %ebx
 82223ab:	83 ec 60             	sub    $0x60,%esp
 82223ae:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82223b2:	75 2b                	jne    82223df <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x39>
 82223b4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82223bb:	00 
 82223bc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82223c3:	00 
 82223c4:	c7 44 24 04 40 cd bc 	movl   $0x8bccd40,0x4(%esp)
 82223cb:	08 
 82223cc:	c7 04 24 da db 00 00 	movl   $0xdbda,(%esp)
 82223d3:	e8 ff e4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82223d8:	89 c3                	mov    %eax,%ebx
 82223da:	e9 d5 02 00 00       	jmp    82226b4 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x30e>
 82223df:	8b 45 0c             	mov    0xc(%ebp),%eax
 82223e2:	89 04 24             	mov    %eax,(%esp)
 82223e5:	e8 a2 7f eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82223ea:	83 f8 03             	cmp    $0x3,%eax
 82223ed:	0f 95 c0             	setne  %al
 82223f0:	84 c0                	test   %al,%al
 82223f2:	74 0a                	je     82223fe <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x58>
 82223f4:	bb 00 00 00 00       	mov    $0x0,%ebx
 82223f9:	e9 b6 02 00 00       	jmp    82226b4 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x30e>
 82223fe:	66 c7 45 ea 00 00    	movw   $0x0,-0x16(%ebp)
 8222404:	c6 45 e9 00          	movb   $0x0,-0x17(%ebp)
 8222408:	8d 45 ea             	lea    -0x16(%ebp),%eax
 822240b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822240f:	8b 45 10             	mov    0x10(%ebp),%eax
 8222412:	89 04 24             	mov    %eax,(%esp)
 8222415:	e8 a6 ab 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 822241a:	83 f0 01             	xor    $0x1,%eax
 822241d:	84 c0                	test   %al,%al
 822241f:	74 2b                	je     822244c <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0xa6>
 8222421:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8222428:	00 
 8222429:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222430:	00 
 8222431:	c7 44 24 04 40 cd bc 	movl   $0x8bccd40,0x4(%esp)
 8222438:	08 
 8222439:	c7 04 24 e1 db 00 00 	movl   $0xdbe1,(%esp)
 8222440:	e8 92 e4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8222445:	89 c3                	mov    %eax,%ebx
 8222447:	e9 68 02 00 00       	jmp    82226b4 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x30e>
 822244c:	8d 45 e9             	lea    -0x17(%ebp),%eax
 822244f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222453:	8b 45 10             	mov    0x10(%ebp),%eax
 8222456:	89 04 24             	mov    %eax,(%esp)
 8222459:	e8 c4 aa 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 822245e:	83 f0 01             	xor    $0x1,%eax
 8222461:	84 c0                	test   %al,%al
 8222463:	74 2b                	je     8222490 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0xea>
 8222465:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822246c:	00 
 822246d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222474:	00 
 8222475:	c7 44 24 04 40 cd bc 	movl   $0x8bccd40,0x4(%esp)
 822247c:	08 
 822247d:	c7 04 24 e2 db 00 00 	movl   $0xdbe2,(%esp)
 8222484:	e8 4e e4 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8222489:	89 c3                	mov    %eax,%ebx
 822248b:	e9 24 02 00 00       	jmp    82226b4 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x30e>
 8222490:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8222497:	e8 f2 9c ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 822249c:	89 04 24             	mov    %eax,(%esp)
 822249f:	e8 bc 6a 07 00       	call   8298f60 <_ZN12CGameManager24GetConditionEventManagerEv>
 82224a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82224a7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82224aa:	89 04 24             	mov    %eax,(%esp)
 82224ad:	e8 b2 47 ea ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 82224b2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82224b6:	74 30                	je     82224e8 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x142>
 82224b8:	0f b6 45 e9          	movzbl -0x17(%ebp),%eax
 82224bc:	0f be d0             	movsbl %al,%edx
 82224bf:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 82224c3:	98                   	cwtl
 82224c4:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 82224c7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 82224cb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 82224cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 82224d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82224d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82224da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82224dd:	89 04 24             	mov    %eax,(%esp)
 82224e0:	e8 6b 23 11 00       	call   8334850 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 82224e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82224e8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82224eb:	89 04 24             	mov    %eax,(%esp)
 82224ee:	e8 59 b8 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82224f3:	c7 44 24 08 07 01 00 	movl   $0x107,0x8(%esp)
 82224fa:	00 
 82224fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8222502:	00 
 8222503:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8222506:	89 04 24             	mov    %eax,(%esp)
 8222509:	e8 ee 93 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 822250e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8222512:	74 4f                	je     8222563 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x1bd>
 8222514:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 822251b:	00 
 822251c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 822251f:	89 04 24             	mov    %eax,(%esp)
 8222522:	e8 f9 93 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8222527:	8b 45 f0             	mov    -0x10(%ebp),%eax
 822252a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822252e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8222531:	89 04 24             	mov    %eax,(%esp)
 8222534:	e8 e7 93 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8222539:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8222540:	00 
 8222541:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8222544:	89 04 24             	mov    %eax,(%esp)
 8222547:	e8 0c 94 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 822254c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 822254f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222553:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222556:	89 04 24             	mov    %eax,(%esp)
 8222559:	e8 5c 60 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 822255e:	e9 04 01 00 00       	jmp    8222667 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x2c1>
 8222563:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 822256a:	00 
 822256b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 822256e:	89 04 24             	mov    %eax,(%esp)
 8222571:	e8 aa 93 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8222576:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 822257a:	0f be c0             	movsbl %al,%eax
 822257d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222581:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8222584:	89 04 24             	mov    %eax,(%esp)
 8222587:	e8 94 93 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 822258c:	0f b6 45 e9          	movzbl -0x17(%ebp),%eax
 8222590:	0f be c0             	movsbl %al,%eax
 8222593:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222597:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 822259a:	89 04 24             	mov    %eax,(%esp)
 822259d:	e8 7e 93 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82225a2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82225a5:	89 04 24             	mov    %eax,(%esp)
 82225a8:	e8 93 32 01 00       	call   8235840 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4sizeEv>
 82225ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 82225b1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82225b4:	89 04 24             	mov    %eax,(%esp)
 82225b7:	e8 64 93 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82225bc:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82225bf:	8d 55 d0             	lea    -0x30(%ebp),%edx
 82225c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 82225c6:	89 04 24             	mov    %eax,(%esp)
 82225c9:	e8 d2 f9 f2 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 82225ce:	83 ec 04             	sub    $0x4,%esp
 82225d1:	eb 44                	jmp    8222617 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x271>
 82225d3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82225d6:	89 04 24             	mov    %eax,(%esp)
 82225d9:	e8 62 ad ea ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 82225de:	8b 00                	mov    (%eax),%eax
 82225e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82225e4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 82225e7:	89 04 24             	mov    %eax,(%esp)
 82225ea:	e8 4d 93 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82225ef:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82225f2:	89 04 24             	mov    %eax,(%esp)
 82225f5:	e8 46 ad ea ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 82225fa:	8b 40 04             	mov    0x4(%eax),%eax
 82225fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222601:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8222604:	89 04 24             	mov    %eax,(%esp)
 8222607:	e8 30 93 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 822260c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 822260f:	89 04 24             	mov    %eax,(%esp)
 8222612:	e8 2f 81 eb ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 8222617:	8d 45 ec             	lea    -0x14(%ebp),%eax
 822261a:	8d 55 d0             	lea    -0x30(%ebp),%edx
 822261d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8222621:	89 04 24             	mov    %eax,(%esp)
 8222624:	e8 f1 ac ea ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8222629:	83 ec 04             	sub    $0x4,%esp
 822262c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 822262f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222633:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8222636:	89 04 24             	mov    %eax,(%esp)
 8222639:	e8 8a 7d eb ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 822263e:	84 c0                	test   %al,%al
 8222640:	75 91                	jne    82225d3 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x22d>
 8222642:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8222649:	00 
 822264a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 822264d:	89 04 24             	mov    %eax,(%esp)
 8222650:	e8 03 93 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8222655:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8222658:	89 44 24 04          	mov    %eax,0x4(%esp)
 822265c:	8b 45 0c             	mov    0xc(%ebp),%eax
 822265f:	89 04 24             	mov    %eax,(%esp)
 8222662:	e8 53 5f 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8222667:	bb 00 00 00 00       	mov    $0x0,%ebx
 822266c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 822266f:	89 04 24             	mov    %eax,(%esp)
 8222672:	e8 09 b8 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8222677:	eb 30                	jmp    82226a9 <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x303>
 8222679:	89 d3                	mov    %edx,%ebx
 822267b:	89 c6                	mov    %eax,%esi
 822267d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8222680:	89 04 24             	mov    %eax,(%esp)
 8222683:	e8 f8 b7 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8222688:	89 f0                	mov    %esi,%eax
 822268a:	89 da                	mov    %ebx,%edx
 822268c:	eb 00                	jmp    822268e <_ZN38Dispatcher_RequestConditionEventReward12dispatch_sigEP5CUserR9PacketBuf+0x2e8>
 822268e:	89 d3                	mov    %edx,%ebx
 8222690:	89 c6                	mov    %eax,%esi
 8222692:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8222695:	89 04 24             	mov    %eax,(%esp)
 8222698:	e8 29 44 ea ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 822269d:	89 f0                	mov    %esi,%eax
 822269f:	89 da                	mov    %ebx,%edx
 82226a1:	89 04 24             	mov    %eax,(%esp)
 82226a4:	e8 a7 10 8c 00       	call   8ae3750 <_Unwind_Resume>
 82226a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82226ac:	89 04 24             	mov    %eax,(%esp)
 82226af:	e8 12 44 ea ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 82226b4:	89 d8                	mov    %ebx,%eax
 82226b6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82226b9:	83 c4 00             	add    $0x0,%esp
 82226bc:	5b                   	pop    %ebx
 82226bd:	5e                   	pop    %esi
 82226be:	5d                   	pop    %ebp
 82226bf:	c3                   	ret

```

```c
// Dispatcher_RequestConditionEventReward::dispatch_sig @ 0x82223a6

/* Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestConditionEventReward::dispatch_sig
          (Dispatcher_RequestConditionEventReward *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CGameManager *this_00;
  int *piVar4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_44 [4];
  PacketGuard local_40 [12];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [25];
  char local_1b;
  short local_1a;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  int local_14;
  CConditionEventManager *local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = LineFunc(0xdbda,
                     "virtual int Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      local_1a = 0;
      local_1b = '\0';
      cVar1 = PacketBuf::get_short(param_2,&local_1a);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,&local_1b);
        if (cVar1 == '\x01') {
          local_14 = 0;
          this_00 = (CGameManager *)G_CGameManager();
          local_10 = (CConditionEventManager *)CGameManager::GetConditionEventManager(this_00);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_34);
          if (local_10 != (CConditionEventManager *)0x0) {
                    /* try { // try from 082224e0 to 082224f2 has its CatchHandler @ 0822268e */
            local_14 = CConditionEventManager::RequestConditionEventReward
                                 (local_10,param_1,local_1a,local_1b,(map *)local_34);
          }
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 08222509 to 08222666 has its CatchHandler @ 08222679 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,0x107);
          if (local_14 == 0) {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)(char)local_1a);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(int)local_1b);
            iVar3 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::size
                              (local_34);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,iVar3);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                      (local_44);
            while( true ) {
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                        (local_18);
              cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44,
                                 (_Rb_tree_iterator *)local_18);
              if (cVar1 == '\0') break;
              piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*piVar4);
              iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(iVar3 + 4));
              std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_44);
            }
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
            CUser::Send(param_1,local_40);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,local_14);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
            CUser::Send(param_1,local_40);
          }
          uVar2 = 0;
                    /* try { // try from 08222672 to 08222676 has its CatchHandler @ 0822268e */
          PacketGuard::~PacketGuard(local_40);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_34);
        }
        else {
          uVar2 = LineFunc(0xdbe2,
                           "virtual int Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0xdbe1,
                         "virtual int Dispatcher_RequestConditionEventReward::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

