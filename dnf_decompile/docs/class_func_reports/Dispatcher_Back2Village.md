# Dispatcher_Back2Village

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820559a Dispatcher_Back2Village::dispatch_sig  [0x0820559a-0x8205790] ===
 820559a:	55                   	push   %ebp
 820559b:	89 e5                	mov    %esp,%ebp
 820559d:	56                   	push   %esi
 820559e:	53                   	push   %ebx
 820559f:	83 ec 30             	sub    $0x30,%esp
 82055a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82055a5:	89 04 24             	mov    %eax,(%esp)
 82055a8:	e8 df 4d ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82055ad:	83 f8 0d             	cmp    $0xd,%eax
 82055b0:	0f 94 c0             	sete   %al
 82055b3:	84 c0                	test   %al,%al
 82055b5:	74 15                	je     82055cc <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x32>
 82055b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82055ba:	89 04 24             	mov    %eax,(%esp)
 82055bd:	e8 f0 ba f2 ff       	call   81310b2 <_ZN12advancealtar7Manager9leaveUserEP5CUser>
 82055c2:	b8 00 00 00 00       	mov    $0x0,%eax
 82055c7:	e9 be 01 00 00       	jmp    820578a <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 82055cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82055cf:	89 04 24             	mov    %eax,(%esp)
 82055d2:	e8 b5 4d ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82055d7:	83 f8 05             	cmp    $0x5,%eax
 82055da:	0f 95 c0             	setne  %al
 82055dd:	84 c0                	test   %al,%al
 82055df:	74 0a                	je     82055eb <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x51>
 82055e1:	b8 00 00 00 00       	mov    $0x0,%eax
 82055e6:	e9 9f 01 00 00       	jmp    820578a <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 82055eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82055ee:	89 04 24             	mov    %eax,(%esp)
 82055f1:	e8 56 fb 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82055f6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82055f9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82055fd:	75 0a                	jne    8205609 <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x6f>
 82055ff:	b8 00 00 00 00       	mov    $0x0,%eax
 8205604:	e9 81 01 00 00       	jmp    820578a <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 8205609:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820560c:	89 04 24             	mov    %eax,(%esp)
 820560f:	e8 08 02 f4 ff       	call   814581c <_ZN6CParty12GetEPLPStateEv>
 8205614:	84 c0                	test   %al,%al
 8205616:	0f 95 c0             	setne  %al
 8205619:	84 c0                	test   %al,%al
 820561b:	74 0a                	je     8205627 <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x8d>
 820561d:	b8 00 00 00 00       	mov    $0x0,%eax
 8205622:	e9 63 01 00 00       	jmp    820578a <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 8205627:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820562a:	89 04 24             	mov    %eax,(%esp)
 820562d:	e8 4e 01 f4 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 8205632:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8205635:	0f 95 c0             	setne  %al
 8205638:	84 c0                	test   %al,%al
 820563a:	0f 84 09 01 00 00    	je     8205749 <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1af>
 8205640:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8205647:	00 
 8205648:	8b 45 0c             	mov    0xc(%ebp),%eax
 820564b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820564f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8205652:	89 04 24             	mov    %eax,(%esp)
 8205655:	e8 ba 6a 39 00       	call   859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>
 820565a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820565d:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8205661:	0f 84 db 00 00 00    	je     8205742 <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1a8>
 8205667:	e8 3b 4d ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 820566c:	8b 55 0c             	mov    0xc(%ebp),%edx
 820566f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8205673:	89 04 24             	mov    %eax,(%esp)
 8205676:	e8 9b 13 4c 00       	call   86c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>
 820567b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820567e:	89 04 24             	mov    %eax,(%esp)
 8205681:	e8 c6 86 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8205686:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8205689:	89 04 24             	mov    %eax,(%esp)
 820568c:	e8 55 62 ec ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8205691:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8205698:	00 
 8205699:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82056a0:	00 
 82056a1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82056a4:	89 04 24             	mov    %eax,(%esp)
 82056a7:	e8 50 62 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82056ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82056b3:	00 
 82056b4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82056b7:	89 04 24             	mov    %eax,(%esp)
 82056ba:	e8 61 62 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82056bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82056c6:	00 
 82056c7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82056ca:	89 04 24             	mov    %eax,(%esp)
 82056cd:	e8 d2 47 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82056d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82056d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82056dc:	00 
 82056dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82056e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82056e4:	89 04 24             	mov    %eax,(%esp)
 82056e7:	e8 62 4d 45 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 82056ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82056f3:	00 
 82056f4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82056f7:	89 04 24             	mov    %eax,(%esp)
 82056fa:	e8 59 62 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82056ff:	e8 a3 4c ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8205704:	8b 55 0c             	mov    0xc(%ebp),%edx
 8205707:	89 54 24 08          	mov    %edx,0x8(%esp)
 820570b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 820570e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8205712:	89 04 24             	mov    %eax,(%esp)
 8205715:	e8 42 f2 f2 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 820571a:	eb 1b                	jmp    8205737 <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x19d>
 820571c:	89 d3                	mov    %edx,%ebx
 820571e:	89 c6                	mov    %eax,%esi
 8205720:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8205723:	89 04 24             	mov    %eax,(%esp)
 8205726:	e8 55 87 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820572b:	89 f0                	mov    %esi,%eax
 820572d:	89 da                	mov    %ebx,%edx
 820572f:	89 04 24             	mov    %eax,(%esp)
 8205732:	e8 19 e0 8d 00       	call   8ae3750 <_Unwind_Resume>
 8205737:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820573a:	89 04 24             	mov    %eax,(%esp)
 820573d:	e8 3e 87 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8205742:	b8 00 00 00 00       	mov    $0x0,%eax
 8205747:	eb 41                	jmp    820578a <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 8205749:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820574c:	89 04 24             	mov    %eax,(%esp)
 820574f:	e8 d4 81 02 00       	call   822d928 <_ZN6CParty21get_quick_party_indexEv>
 8205754:	83 f8 ff             	cmp    $0xffffffff,%eax
 8205757:	0f 95 c0             	setne  %al
 820575a:	84 c0                	test   %al,%al
 820575c:	74 1c                	je     820577a <_ZN23Dispatcher_Back2Village12dispatch_sigEP5CUserR9PacketBuf+0x1e0>
 820575e:	e8 2b 6a ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 8205763:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 820576a:	00 
 820576b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 820576e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8205772:	89 04 24             	mov    %eax,(%esp)
 8205775:	e8 82 2c 09 00       	call   82983fc <_ZN12CGameManager18CheckOutQuickPartyEP6CPartyb>
 820577a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820577d:	89 04 24             	mov    %eax,(%esp)
 8205780:	e8 db 72 3a 00       	call   85aca60 <_ZN6CParty15ReturnToVillageEv>
 8205785:	b8 00 00 00 00       	mov    $0x0,%eax
 820578a:	83 c4 30             	add    $0x30,%esp
 820578d:	5b                   	pop    %ebx
 820578e:	5e                   	pop    %esi
 820578f:	5d                   	pop    %ebp
 8205790:	c3                   	ret

```

```c
// Dispatcher_Back2Village::dispatch_sig @ 0x820559a

/* Dispatcher_Back2Village::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Back2Village::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  PacketBuf *pPVar3;
  GameWorld *pGVar4;
  CGameManager *this;
  PacketGuard local_20 [12];
  CParty *local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0xd) {
    advancealtar::Manager::leaveUser((CUser *)param_2);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (((iVar2 == 5) &&
        (local_14 = (CParty *)CUser::GetParty((CUser *)param_2), local_14 != (CParty *)0x0)) &&
       (cVar1 = CParty::GetEPLPState(local_14), cVar1 == '\0')) {
      pPVar3 = (PacketBuf *)CParty::getManager(local_14);
      if (pPVar3 == param_2) {
        iVar2 = CParty::get_quick_party_index(local_14);
        if (iVar2 != -1) {
          this = (CGameManager *)G_CGameManager();
          CGameManager::CheckOutQuickParty(this,local_14,true);
        }
        CParty::ReturnToVillage(local_14);
      }
      else {
        local_10 = CParty::leave_user(local_14,param_2,2);
        if (local_10 != 1) {
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::out_from_dungeon(pGVar4,(CUser *)param_2);
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0820568c to 08205719 has its CatchHandler @ 0820571c */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
          CUser::make_basic_info((CUser *)param_2,(char *)local_20,'\0');
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
          pGVar4 = (GameWorld *)G_GameWorld();
          GameWorld::send_all(pGVar4,local_20,(CUser *)param_2);
          PacketGuard::~PacketGuard(local_20);
        }
      }
    }
  }
  return 0;
}

```

