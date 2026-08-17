# DisPatcher_SetPVPMapIndex

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f8602 DisPatcher_SetPVPMapIndex::dispatch_sig  [0x081f8602-0x81f88ad] ===
 81f8602:	55                   	push   %ebp
 81f8603:	89 e5                	mov    %esp,%ebp
 81f8605:	56                   	push   %esi
 81f8606:	53                   	push   %ebx
 81f8607:	83 ec 40             	sub    $0x40,%esp
 81f860a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f860d:	89 04 24             	mov    %eax,(%esp)
 81f8610:	e8 77 1d ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f8615:	83 f8 06             	cmp    $0x6,%eax
 81f8618:	0f 95 c0             	setne  %al
 81f861b:	84 c0                	test   %al,%al
 81f861d:	74 0a                	je     81f8629 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81f861f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f8624:	e9 7b 02 00 00       	jmp    81f88a4 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x2a2>
 81f8629:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f862c:	89 04 24             	mov    %eax,(%esp)
 81f862f:	e8 18 57 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f8634:	8d 45 e1             	lea    -0x1f(%ebp),%eax
 81f8637:	83 c0 0d             	add    $0xd,%eax
 81f863a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f863e:	8b 45 10             	mov    0x10(%ebp),%eax
 81f8641:	89 04 24             	mov    %eax,(%esp)
 81f8644:	e8 77 49 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f8649:	83 f0 01             	xor    $0x1,%eax
 81f864c:	84 c0                	test   %al,%al
 81f864e:	74 2b                	je     81f867b <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x79>
 81f8650:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f8657:	00 
 81f8658:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f865f:	00 
 81f8660:	c7 44 24 04 00 fe bc 	movl   $0x8bcfe00,0x4(%esp)
 81f8667:	08 
 81f8668:	c7 04 24 50 86 00 00 	movl   $0x8650,(%esp)
 81f866f:	e8 63 82 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f8674:	89 c3                	mov    %eax,%ebx
 81f8676:	e9 1e 02 00 00       	jmp    81f8899 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x297>
 81f867b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f867e:	89 04 24             	mov    %eax,(%esp)
 81f8681:	e8 08 cb 45 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81f8686:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81f8689:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81f868d:	75 2b                	jne    81f86ba <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0xb8>
 81f868f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f8696:	00 
 81f8697:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f869e:	00 
 81f869f:	c7 44 24 04 00 fe bc 	movl   $0x8bcfe00,0x4(%esp)
 81f86a6:	08 
 81f86a7:	c7 04 24 53 86 00 00 	movl   $0x8653,(%esp)
 81f86ae:	e8 24 82 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f86b3:	89 c3                	mov    %eax,%ebx
 81f86b5:	e9 df 01 00 00       	jmp    81f8899 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x297>
 81f86ba:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 81f86be:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81f86c2:	98                   	cwtl
 81f86c3:	8d 55 d3             	lea    -0x2d(%ebp),%edx
 81f86c6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f86ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f86ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f86d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f86d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f86d8:	89 04 24             	mov    %eax,(%esp)
 81f86db:	e8 56 52 3e 00       	call   85dd936 <_ZN8PvP_Room15CheckPvPMapModeEP5CUseriRb>
 81f86e0:	83 f0 01             	xor    $0x1,%eax
 81f86e3:	84 c0                	test   %al,%al
 81f86e5:	74 70                	je     81f8757 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x155>
 81f86e7:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 81f86ee:	00 
 81f86ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f86f6:	00 
 81f86f7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f86fa:	89 04 24             	mov    %eax,(%esp)
 81f86fd:	e8 fa 31 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f8702:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f8709:	00 
 81f870a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f870d:	89 04 24             	mov    %eax,(%esp)
 81f8710:	e8 0b 32 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f8715:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f871c:	00 
 81f871d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8720:	89 04 24             	mov    %eax,(%esp)
 81f8723:	e8 14 32 ed ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81f8728:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f872f:	00 
 81f8730:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8733:	89 04 24             	mov    %eax,(%esp)
 81f8736:	e8 1d 32 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f873b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f873e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8742:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8745:	89 04 24             	mov    %eax,(%esp)
 81f8748:	e8 6d fe 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f874d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f8752:	e9 42 01 00 00       	jmp    81f8899 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x297>
 81f8757:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81f875b:	98                   	cwtl
 81f875c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8760:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f8763:	89 04 24             	mov    %eax,(%esp)
 81f8766:	e8 33 52 03 00       	call   822d99e <_ZN8PvP_Room17SetRequestedMapNoEs>
 81f876b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f876e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8772:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f8775:	89 04 24             	mov    %eax,(%esp)
 81f8778:	e8 bd 35 3e 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 81f877d:	e8 25 1c ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f8782:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81f8785:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f8789:	89 04 24             	mov    %eax,(%esp)
 81f878c:	e8 83 04 4d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81f8791:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 81f8795:	83 f0 01             	xor    $0x1,%eax
 81f8798:	84 c0                	test   %al,%al
 81f879a:	0f 84 d7 00 00 00    	je     81f8877 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x275>
 81f87a0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f87a3:	89 04 24             	mov    %eax,(%esp)
 81f87a6:	e8 21 52 03 00       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 81f87ab:	83 f8 04             	cmp    $0x4,%eax
 81f87ae:	0f 94 c0             	sete   %al
 81f87b1:	84 c0                	test   %al,%al
 81f87b3:	0f 84 be 00 00 00    	je     81f8877 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x275>
 81f87b9:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 81f87c0:	00 
 81f87c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f87c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f87c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f87cb:	89 04 24             	mov    %eax,(%esp)
 81f87ce:	e8 f3 fc 3d 00       	call   85d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>
 81f87d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f87d6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81f87da:	7e 6d                	jle    81f8849 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x247>
 81f87dc:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 81f87e3:	00 
 81f87e4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f87eb:	00 
 81f87ec:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f87ef:	89 04 24             	mov    %eax,(%esp)
 81f87f2:	e8 05 31 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f87f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f87fe:	00 
 81f87ff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8802:	89 04 24             	mov    %eax,(%esp)
 81f8805:	e8 16 31 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f880a:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81f8811:	00 
 81f8812:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8815:	89 04 24             	mov    %eax,(%esp)
 81f8818:	e8 03 31 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f881d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f8824:	00 
 81f8825:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8828:	89 04 24             	mov    %eax,(%esp)
 81f882b:	e8 28 31 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f8830:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8833:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8837:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f883a:	89 04 24             	mov    %eax,(%esp)
 81f883d:	e8 78 fd 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f8842:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f8847:	eb 50                	jmp    81f8899 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x297>
 81f8849:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f884c:	c7 44 24 08 ff ff 00 	movl   $0xffff,0x8(%esp)
 81f8853:	00 
 81f8854:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8858:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f885b:	89 04 24             	mov    %eax,(%esp)
 81f885e:	e8 7f 31 3e 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 81f8863:	e8 3f 1b ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f8868:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81f886b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f886f:	89 04 24             	mov    %eax,(%esp)
 81f8872:	e8 9d 03 4d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81f8877:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f887c:	eb 1b                	jmp    81f8899 <_ZN25DisPatcher_SetPVPMapIndex12dispatch_sigEP5CUserR9PacketBuf+0x297>
 81f887e:	89 d3                	mov    %edx,%ebx
 81f8880:	89 c6                	mov    %eax,%esi
 81f8882:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f8885:	89 04 24             	mov    %eax,(%esp)
 81f8888:	e8 f3 55 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f888d:	89 f0                	mov    %esi,%eax
 81f888f:	89 da                	mov    %ebx,%edx
 81f8891:	89 04 24             	mov    %eax,(%esp)
 81f8894:	e8 b7 ae 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f8899:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f889c:	89 04 24             	mov    %eax,(%esp)
 81f889f:	e8 dc 55 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f88a4:	89 d8                	mov    %ebx,%eax
 81f88a6:	83 c4 40             	add    $0x40,%esp
 81f88a9:	5b                   	pop    %ebx
 81f88aa:	5e                   	pop    %esi
 81f88ab:	5d                   	pop    %ebp
 81f88ac:	c3                   	ret
 81f88ad:	90                   	nop

```

```c
// DisPatcher_SetPVPMapIndex::dispatch_sig @ 0x81f8602

/* DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPVPMapIndex::dispatch_sig
          (DisPatcher_SetPVPMapIndex *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *pGVar4;
  bool local_31;
  PacketGuard local_30 [26];
  short local_16;
  PvP_Room *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 != 6) {
    return 0;
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081f8644 to 081f8876 has its CatchHandler @ 081f887e */
  cVar1 = PacketBuf::get_short(param_2,&local_16);
  if (cVar1 == '\x01') {
    local_14 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (local_14 == (PvP_Room *)0x0) {
      uVar3 = LineFunc(0x8653,
                       "virtual int DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
    else {
      local_31 = false;
      cVar1 = PvP_Room::CheckPvPMapMode(local_14,param_1,(int)local_16,&local_31);
      if (cVar1 == '\x01') {
        PvP_Room::SetRequestedMapNo(local_14,local_16);
        PvP_Room::make_state_info(local_14,(char *)local_30);
        pGVar4 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar4,local_30);
        if ((local_31 != true) && (iVar2 = PvP_Room::get_pvp_battle_mode(local_14), iVar2 == 4)) {
          local_10 = PvP_Room::set_pvp_mode(local_14,param_1,5);
          if (0 < local_10) {
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x3e);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x13);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
            CUser::Send(param_1,local_30);
            uVar3 = 0;
            goto LAB_081f8899;
          }
          PvP_Room::make_seat_info(local_14,(char *)local_30,0xffff);
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar4,local_30);
        }
        uVar3 = 0;
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x3e);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,0x13);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CUser::Send(param_1,local_30);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = LineFunc(0x8650,
                     "virtual int DisPatcher_SetPVPMapIndex::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
LAB_081f8899:
  PacketGuard::~PacketGuard(local_30);
  return uVar3;
}

```

