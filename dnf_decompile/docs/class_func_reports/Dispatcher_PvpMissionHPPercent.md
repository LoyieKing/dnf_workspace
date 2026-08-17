# Dispatcher_PvpMissionHPPercent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081d5864 Dispatcher_PvpMissionHPPercent::process  [0x081d5864-0x81d58d5] ===
 81d5864:	55                   	push   %ebp
 81d5865:	89 e5                	mov    %esp,%ebp
 81d5867:	83 ec 28             	sub    $0x28,%esp
 81d586a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d586d:	89 04 24             	mov    %eax,(%esp)
 81d5870:	e8 bd ab f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d5875:	85 c0                	test   %eax,%eax
 81d5877:	0f 94 c0             	sete   %al
 81d587a:	84 c0                	test   %al,%al
 81d587c:	74 26                	je     81d58a4 <_ZN30Dispatcher_PvpMissionHPPercent7processEP5CUserR8MSG_BASER9ParamBase+0x40>
 81d587e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d5885:	00 
 81d5886:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d588d:	00 
 81d588e:	c7 44 24 04 00 2f bd 	movl   $0x8bd2f00,0x4(%esp)
 81d5895:	08 
 81d5896:	c7 04 24 30 39 00 00 	movl   $0x3930,(%esp)
 81d589d:	e8 35 b0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d58a2:	eb 30                	jmp    81d58d4 <_ZN30Dispatcher_PvpMissionHPPercent7processEP5CUserR8MSG_BASER9ParamBase+0x70>
 81d58a4:	8b 45 10             	mov    0x10(%ebp),%eax
 81d58a7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d58aa:	8b 45 14             	mov    0x14(%ebp),%eax
 81d58ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d58b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d58b3:	8d 50 04             	lea    0x4(%eax),%edx
 81d58b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d58b9:	83 c0 0e             	add    $0xe,%eax
 81d58bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d58c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d58c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d58c7:	89 04 24             	mov    %eax,(%esp)
 81d58ca:	e8 f9 cc 48 00       	call   86625c8 <_ZN5CUser22UpdateMissionConditionERSt6vectorIsSaIsEERS0_IiSaIiEE>
 81d58cf:	b8 00 00 00 00       	mov    $0x0,%eax
 81d58d4:	c9                   	leave
 81d58d5:	c3                   	ret

```

```c
// Dispatcher_PvpMissionHPPercent::process @ 0x81d5864

/* Dispatcher_PvpMissionHPPercent::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PvpMissionHPPercent::process
          (Dispatcher_PvpMissionHPPercent *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 == 0) {
    uVar2 = LineFunc(0x3930,
                     "virtual int Dispatcher_PvpMissionHPPercent::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0,0);
  }
  else {
    CUser::UpdateMissionCondition(param_1,(vector *)(param_2 + 0xe),(vector *)(param_3 + 4));
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d574e Dispatcher_PvpMissionHPPercent::read  [0x081d574e-0x81d5863] ===
 81d574e:	55                   	push   %ebp
 81d574f:	89 e5                	mov    %esp,%ebp
 81d5751:	53                   	push   %ebx
 81d5752:	83 ec 34             	sub    $0x34,%esp
 81d5755:	8b 45 10             	mov    0x10(%ebp),%eax
 81d5758:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d575b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d575e:	83 c0 0d             	add    $0xd,%eax
 81d5761:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5765:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5768:	89 04 24             	mov    %eax,(%esp)
 81d576b:	e8 00 78 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d5770:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5773:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d5777:	84 c0                	test   %al,%al
 81d5779:	74 0b                	je     81d5786 <_ZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASE+0x38>
 81d577b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d577e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d5782:	3c 04                	cmp    $0x4,%al
 81d5784:	76 6a                	jbe    81d57f0 <_ZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASE+0xa2>
 81d5786:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5789:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d578d:	0f b6 d8             	movzbl %al,%ebx
 81d5790:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81d5797:	00 
 81d5798:	c7 44 24 08 24 39 00 	movl   $0x3924,0x8(%esp)
 81d579f:	00 
 81d57a0:	c7 44 24 04 60 2f bd 	movl   $0x8bd2f60,0x4(%esp)
 81d57a7:	08 
 81d57a8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81d57ab:	89 04 24             	mov    %eax,(%esp)
 81d57ae:	e8 65 9f 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81d57b3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d57b7:	c7 44 24 04 68 18 bc 	movl   $0x8bc1868,0x4(%esp)
 81d57be:	08 
 81d57bf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81d57c2:	89 04 24             	mov    %eax,(%esp)
 81d57c5:	e8 be 9f 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81d57ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d57d1:	00 
 81d57d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d57d9:	00 
 81d57da:	c7 44 24 04 60 2f bd 	movl   $0x8bd2f60,0x4(%esp)
 81d57e1:	08 
 81d57e2:	c7 04 24 25 39 00 00 	movl   $0x3925,(%esp)
 81d57e9:	e8 e9 b0 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d57ee:	eb 6e                	jmp    81d585e <_ZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASE+0x110>
 81d57f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d57f3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d57f7:	0f b6 c0             	movzbl %al,%eax
 81d57fa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d57fd:	83 c2 0e             	add    $0xe,%edx
 81d5800:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d5807:	00 
 81d5808:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d580c:	89 14 24             	mov    %edx,(%esp)
 81d580f:	e8 02 18 06 00       	call   8237016 <_ZNSt6vectorIsSaIsEE6resizeEjs>
 81d5814:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d581b:	eb 28                	jmp    81d5845 <_ZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASE+0xf7>
 81d581d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5820:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d5823:	83 c2 0e             	add    $0xe,%edx
 81d5826:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d582a:	89 14 24             	mov    %edx,(%esp)
 81d582d:	e8 b6 96 f9 ff       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 81d5832:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d5836:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d5839:	89 04 24             	mov    %eax,(%esp)
 81d583c:	e8 7f 77 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d5841:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d5845:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5848:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d584c:	0f b6 c0             	movzbl %al,%eax
 81d584f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81d5852:	0f 9f c0             	setg   %al
 81d5855:	84 c0                	test   %al,%al
 81d5857:	75 c4                	jne    81d581d <_ZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASE+0xcf>
 81d5859:	b8 00 00 00 00       	mov    $0x0,%eax
 81d585e:	83 c4 34             	add    $0x34,%esp
 81d5861:	5b                   	pop    %ebx
 81d5862:	5d                   	pop    %ebp
 81d5863:	c3                   	ret

```

```c
// Dispatcher_PvpMissionHPPercent::read @ 0x81d574e

/* Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PvpMissionHPPercent::read
          (Dispatcher_PvpMissionHPPercent *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  short *psVar3;
  cMyTrace local_24 [16];
  MSG_BASE *local_14;
  uint local_10;
  
  local_14 = param_2;
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if ((local_14[0xd] == (MSG_BASE)0x0) || (4 < (byte)local_14[0xd])) {
    MVar1 = local_14[0xd];
    cMyTrace::cMyTrace(local_24,
                       "virtual int Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&)",
                       0x3924,5);
    cMyTrace::operator()
              (local_24,"[@missionSystem] HackUser: <clearMissionCount : %d>",(uint)(byte)MVar1);
    uVar2 = LineFunc(0x3925,
                     "virtual int Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  else {
    std::vector<short,std::allocator<short>>::resize
              ((vector<short,std::allocator<short>> *)(local_14 + 0xe),(uint)(byte)local_14[0xd],0);
    for (local_10 = 0; (int)local_10 < (int)(uint)(byte)local_14[0xd]; local_10 = local_10 + 1) {
      psVar3 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                  ((vector<short,std::allocator<short>> *)(local_14 + 0xe),local_10)
      ;
      PacketBuf::get_short(param_1,psVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d58d6 Dispatcher_PvpMissionHPPercent::send  [0x081d58d6-0x81d59c5] ===
 81d58d6:	55                   	push   %ebp
 81d58d7:	89 e5                	mov    %esp,%ebp
 81d58d9:	56                   	push   %esi
 81d58da:	53                   	push   %ebx
 81d58db:	83 ec 30             	sub    $0x30,%esp
 81d58de:	8b 45 10             	mov    0x10(%ebp),%eax
 81d58e1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d58e4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d58e7:	89 04 24             	mov    %eax,(%esp)
 81d58ea:	e8 5d 84 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d58ef:	c7 44 24 08 41 01 00 	movl   $0x141,0x8(%esp)
 81d58f6:	00 
 81d58f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d58fe:	00 
 81d58ff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d5902:	89 04 24             	mov    %eax,(%esp)
 81d5905:	e8 f2 5f ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d590a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d590d:	83 c0 04             	add    $0x4,%eax
 81d5910:	89 04 24             	mov    %eax,(%esp)
 81d5913:	e8 a8 88 eb ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 81d5918:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d591c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d591f:	89 04 24             	mov    %eax,(%esp)
 81d5922:	e8 f9 5f ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d5927:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d592e:	eb 2a                	jmp    81d595a <_ZN30Dispatcher_PvpMissionHPPercent4sendEP5CUserR9ParamBase+0x84>
 81d5930:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d5933:	8d 50 04             	lea    0x4(%eax),%edx
 81d5936:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d5939:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d593d:	89 14 24             	mov    %edx,(%esp)
 81d5940:	e8 97 88 eb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 81d5945:	8b 00                	mov    (%eax),%eax
 81d5947:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d594b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d594e:	89 04 24             	mov    %eax,(%esp)
 81d5951:	e8 4e 45 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d5956:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81d595a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d595d:	83 c0 04             	add    $0x4,%eax
 81d5960:	89 04 24             	mov    %eax,(%esp)
 81d5963:	e8 58 88 eb ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 81d5968:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81d596b:	0f 97 c0             	seta   %al
 81d596e:	84 c0                	test   %al,%al
 81d5970:	75 be                	jne    81d5930 <_ZN30Dispatcher_PvpMissionHPPercent4sendEP5CUserR9ParamBase+0x5a>
 81d5972:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d5979:	00 
 81d597a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d597d:	89 04 24             	mov    %eax,(%esp)
 81d5980:	e8 d3 5f ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d5985:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d5988:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d598c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d598f:	89 04 24             	mov    %eax,(%esp)
 81d5992:	e8 23 2c 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d5997:	eb 1b                	jmp    81d59b4 <_ZN30Dispatcher_PvpMissionHPPercent4sendEP5CUserR9ParamBase+0xde>
 81d5999:	89 d3                	mov    %edx,%ebx
 81d599b:	89 c6                	mov    %eax,%esi
 81d599d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d59a0:	89 04 24             	mov    %eax,(%esp)
 81d59a3:	e8 d8 84 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d59a8:	89 f0                	mov    %esi,%eax
 81d59aa:	89 da                	mov    %ebx,%edx
 81d59ac:	89 04 24             	mov    %eax,(%esp)
 81d59af:	e8 9c dd 90 00       	call   8ae3750 <_Unwind_Resume>
 81d59b4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d59b7:	89 04 24             	mov    %eax,(%esp)
 81d59ba:	e8 c1 84 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d59bf:	83 c4 30             	add    $0x30,%esp
 81d59c2:	5b                   	pop    %ebx
 81d59c3:	5e                   	pop    %esi
 81d59c4:	5d                   	pop    %ebp
 81d59c5:	c3                   	ret

```

```c
// Dispatcher_PvpMissionHPPercent::send @ 0x81d58d6

/* Dispatcher_PvpMissionHPPercent::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PvpMissionHPPercent::send
          (Dispatcher_PvpMissionHPPercent *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  uint local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d5905 to 081d5996 has its CatchHandler @ 081d5999 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x141);
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(local_14 + 4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,iVar1);
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(local_14 + 4));
    if (uVar3 <= local_10) break;
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(local_14 + 4),local_10);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar2);
    local_10 = local_10 + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

