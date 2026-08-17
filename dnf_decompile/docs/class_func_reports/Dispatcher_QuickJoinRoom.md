# Dispatcher_QuickJoinRoom

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820350e Dispatcher_QuickJoinRoom::dispatch_sig  [0x0820350e-0x82037f9] ===
 820350e:	55                   	push   %ebp
 820350f:	89 e5                	mov    %esp,%ebp
 8203511:	56                   	push   %esi
 8203512:	53                   	push   %ebx
 8203513:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8203519:	8d 45 e7             	lea    -0x19(%ebp),%eax
 820351c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203520:	8b 45 10             	mov    0x10(%ebp),%eax
 8203523:	89 04 24             	mov    %eax,(%esp)
 8203526:	e8 45 9a 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 820352b:	83 f0 01             	xor    $0x1,%eax
 820352e:	84 c0                	test   %al,%al
 8203530:	74 2b                	je     820355d <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x4f>
 8203532:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203539:	00 
 820353a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203541:	00 
 8203542:	c7 44 24 04 e0 f1 bc 	movl   $0x8bcf1e0,0x4(%esp)
 8203549:	08 
 820354a:	c7 04 24 32 9a 00 00 	movl   $0x9a32,(%esp)
 8203551:	e8 81 d3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203556:	89 c3                	mov    %eax,%ebx
 8203558:	e9 90 02 00 00       	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 820355d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203560:	89 04 24             	mov    %eax,(%esp)
 8203563:	e8 58 b4 48 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 8203568:	84 c0                	test   %al,%al
 820356a:	74 25                	je     8203591 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x83>
 820356c:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8203573:	00 
 8203574:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 820357b:	00 
 820357c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820357f:	89 04 24             	mov    %eax,(%esp)
 8203582:	e8 bb 89 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8203587:	bb 00 00 00 00       	mov    $0x0,%ebx
 820358c:	e9 5c 02 00 00       	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 8203591:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8203595:	84 c0                	test   %al,%al
 8203597:	0f 85 c9 00 00 00    	jne    8203666 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x158>
 820359d:	e8 ec 8b ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 82035a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 82035a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 82035a9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82035b0:	00 
 82035b1:	89 04 24             	mov    %eax,(%esp)
 82035b4:	e8 49 fc 09 00       	call   82a3202 <_ZN12CGameManager24FindQuickJoinablePvPRoomEbP5CUser>
 82035b9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82035bc:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 82035c0:	75 5c                	jne    820361e <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x110>
 82035c2:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 82035c9:	00 
 82035ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82035d1:	00 
 82035d2:	8d 45 87             	lea    -0x79(%ebp),%eax
 82035d5:	89 04 24             	mov    %eax,(%esp)
 82035d8:	e8 e3 a6 e7 ff       	call   807dcc0 <memset@plt>
 82035dd:	66 c7 45 b3 01 00    	movw   $0x1,-0x4d(%ebp)
 82035e3:	c6 45 94 01          	movb   $0x1,-0x6c(%ebp)
 82035e7:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 82035ee:	00 
 82035ef:	c7 44 24 08 65 00 00 	movl   $0x65,0x8(%esp)
 82035f6:	00 
 82035f7:	8d 45 87             	lea    -0x79(%ebp),%eax
 82035fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82035fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203601:	89 04 24             	mov    %eax,(%esp)
 8203604:	e8 33 43 ff ff       	call   81f793c <_Z11MakePVPRoomP5CUserR17MSG_MAKE_PVP_ROOM14ENUM_CMDPACKET15PVP_BATTLE_MODE>
 8203609:	83 f0 01             	xor    $0x1,%eax
 820360c:	84 c0                	test   %al,%al
 820360e:	0f 84 d4 01 00 00    	je     82037e8 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2da>
 8203614:	bb 00 00 00 00       	mov    $0x0,%ebx
 8203619:	e9 cf 01 00 00       	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 820361e:	c7 45 de 00 00 00 00 	movl   $0x0,-0x22(%ebp)
 8203625:	c7 45 e2 00 00 00 00 	movl   $0x0,-0x1e(%ebp)
 820362c:	c6 45 e6 00          	movb   $0x0,-0x1a(%ebp)
 8203630:	8d 45 de             	lea    -0x22(%ebp),%eax
 8203633:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8203637:	c7 44 24 08 65 00 00 	movl   $0x65,0x8(%esp)
 820363e:	00 
 820363f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8203642:	89 44 24 04          	mov    %eax,0x4(%esp)
 8203646:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203649:	89 04 24             	mov    %eax,(%esp)
 820364c:	e8 49 9a fe ff       	call   81ed09a <_Z12EnterPVPRoomP5CUserP8PvP_Room14ENUM_CMDPACKETPKc>
 8203651:	83 f0 01             	xor    $0x1,%eax
 8203654:	84 c0                	test   %al,%al
 8203656:	0f 84 8c 01 00 00    	je     82037e8 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2da>
 820365c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8203661:	e9 87 01 00 00       	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 8203666:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 820366a:	3c 01                	cmp    $0x1,%al
 820366c:	0f 85 a1 00 00 00    	jne    8203713 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x205>
 8203672:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8203675:	89 04 24             	mov    %eax,(%esp)
 8203678:	e8 cf a6 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820367d:	c7 44 24 08 65 00 00 	movl   $0x65,0x8(%esp)
 8203684:	00 
 8203685:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820368c:	00 
 820368d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8203690:	89 04 24             	mov    %eax,(%esp)
 8203693:	e8 64 82 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8203698:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820369f:	00 
 82036a0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82036a3:	89 04 24             	mov    %eax,(%esp)
 82036a6:	e8 75 82 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82036ab:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 82036b2:	00 
 82036b3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82036b6:	89 04 24             	mov    %eax,(%esp)
 82036b9:	e8 62 82 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82036be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82036c5:	00 
 82036c6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82036c9:	89 04 24             	mov    %eax,(%esp)
 82036cc:	e8 87 82 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82036d1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82036d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82036d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82036db:	89 04 24             	mov    %eax,(%esp)
 82036de:	e8 d7 4e 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 82036e3:	bb 00 00 00 00       	mov    $0x0,%ebx
 82036e8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82036eb:	89 04 24             	mov    %eax,(%esp)
 82036ee:	e8 8d a7 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82036f3:	e9 f5 00 00 00       	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 82036f8:	89 d3                	mov    %edx,%ebx
 82036fa:	89 c6                	mov    %eax,%esi
 82036fc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82036ff:	89 04 24             	mov    %eax,(%esp)
 8203702:	e8 79 a7 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8203707:	89 f0                	mov    %esi,%eax
 8203709:	89 da                	mov    %ebx,%edx
 820370b:	89 04 24             	mov    %eax,(%esp)
 820370e:	e8 3d 00 8e 00       	call   8ae3750 <_Unwind_Resume>
 8203713:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8203717:	3c 02                	cmp    $0x2,%al
 8203719:	0f 85 c9 00 00 00    	jne    82037e8 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2da>
 820371f:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8203724:	c7 44 24 04 5f 00 00 	movl   $0x5f,0x4(%esp)
 820372b:	00 
 820372c:	89 04 24             	mov    %eax,(%esp)
 820372f:	e8 64 22 f1 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8203734:	8b 10                	mov    (%eax),%edx
 8203736:	83 c2 34             	add    $0x34,%edx
 8203739:	8b 12                	mov    (%edx),%edx
 820373b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8203742:	00 
 8203743:	89 04 24             	mov    %eax,(%esp)
 8203746:	ff d2                	call   *%edx
 8203748:	83 f0 01             	xor    $0x1,%eax
 820374b:	84 c0                	test   %al,%al
 820374d:	74 22                	je     8203771 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x263>
 820374f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8203756:	00 
 8203757:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 820375e:	00 
 820375f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203762:	89 04 24             	mov    %eax,(%esp)
 8203765:	e8 d8 87 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820376a:	bb 00 00 00 00       	mov    $0x0,%ebx
 820376f:	eb 7c                	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 8203771:	e8 18 8a ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 8203776:	89 04 24             	mov    %eax,(%esp)
 8203779:	e8 a6 fc 09 00       	call   82a3424 <_ZN12CGameManager22findJoinableBlueMarbleEv>
 820377e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8203781:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8203785:	75 22                	jne    82037a9 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x29b>
 8203787:	c7 44 24 08 be 00 00 	movl   $0xbe,0x8(%esp)
 820378e:	00 
 820378f:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 8203796:	00 
 8203797:	8b 45 0c             	mov    0xc(%ebp),%eax
 820379a:	89 04 24             	mov    %eax,(%esp)
 820379d:	e8 a0 87 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82037a2:	bb 00 00 00 00       	mov    $0x0,%ebx
 82037a7:	eb 44                	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 82037a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82037ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 82037b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82037b3:	89 04 24             	mov    %eax,(%esp)
 82037b6:	e8 55 5a ed ff       	call   80d9210 <_ZN10BlueMarble15enterBlueMarbleEP5CUser>
 82037bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82037be:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82037c2:	7e 24                	jle    82037e8 <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2da>
 82037c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82037c7:	0f b6 c0             	movzbl %al,%eax
 82037ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 82037ce:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 82037d5:	00 
 82037d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82037d9:	89 04 24             	mov    %eax,(%esp)
 82037dc:	e8 61 87 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82037e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 82037e6:	eb 05                	jmp    82037ed <_ZN24Dispatcher_QuickJoinRoom12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 82037e8:	bb 00 00 00 00       	mov    $0x0,%ebx
 82037ed:	89 d8                	mov    %ebx,%eax
 82037ef:	81 c4 90 00 00 00    	add    $0x90,%esp
 82037f5:	5b                   	pop    %ebx
 82037f6:	5e                   	pop    %esi
 82037f7:	5d                   	pop    %ebp
 82037f8:	c3                   	ret
 82037f9:	90                   	nop

```

```c
// Dispatcher_QuickJoinRoom::dispatch_sig @ 0x820350e

/* Dispatcher_QuickJoinRoom::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_QuickJoinRoom::dispatch_sig
          (Dispatcher_QuickJoinRoom *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CGameManager *this_00;
  int *piVar3;
  undefined1 local_7d [13];
  undefined1 local_70;
  undefined2 local_51;
  PacketGuard local_34 [14];
  undefined4 local_26;
  undefined4 local_22;
  undefined1 local_1e;
  uchar local_1d;
  int local_1c;
  BlueMarble *local_14;
  uint local_10;
  
  cVar1 = PacketBuf::get_byte(param_2,&local_1d);
  if (cVar1 == '\x01') {
    cVar1 = CUser::isCompetitionMercenary(param_1);
    if (cVar1 == '\0') {
      if (local_1d == '\0') {
        this_00 = (CGameManager *)G_CGameManager();
        local_1c = CGameManager::FindQuickJoinablePvPRoom(this_00,true,param_1);
        if (local_1c == 0) {
          memset(local_7d,0,0x3d);
          local_51 = 1;
          local_70 = 1;
          cVar1 = MakePVPRoom(param_1,local_7d,0x65,2);
          if (cVar1 != '\x01') {
            return 0;
          }
        }
        else {
          local_26 = 0;
          local_22 = 0;
          local_1e = 0;
          cVar1 = EnterPVPRoom(param_1,local_1c,0x65,&local_26);
          if (cVar1 != '\x01') {
            return 0;
          }
        }
      }
      else {
        if (local_1d == '\x01') {
          PacketGuard::PacketGuard(local_34);
                    /* try { // try from 08203693 to 082036e2 has its CatchHandler @ 082036f8 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x65);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,4);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
          CUser::Send(param_1,local_34);
          PacketGuard::~PacketGuard(local_34);
          return 0;
        }
        if (local_1d == '\x02') {
          piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5f);
          cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
          if (cVar1 != '\x01') {
            CUser::SendCmdErrorPacket(param_1,0x65,8);
            return 0;
          }
          G_CGameManager();
          local_14 = (BlueMarble *)CGameManager::findJoinableBlueMarble();
          if (local_14 == (BlueMarble *)0x0) {
            CUser::SendCmdErrorPacket(param_1,0x65,0xbe);
            return 0;
          }
          local_10 = BlueMarble::enterBlueMarble(local_14,param_1);
          if (0 < (int)local_10) {
            CUser::SendCmdErrorPacket(param_1,0x65,local_10 & 0xff);
            return 0;
          }
        }
      }
      uVar2 = 0;
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x65,0x15);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = LineFunc(0x9a32,"virtual int Dispatcher_QuickJoinRoom::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}

```

