# advancealtar__Dispatcher_StartGame

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0813f7de advancealtar::Dispatcher_StartGame::check_error  [0x0813f7de-0x813f8cd] ===
 813f7de:	55                   	push   %ebp
 813f7df:	89 e5                	mov    %esp,%ebp
 813f7e1:	83 ec 18             	sub    $0x18,%esp
 813f7e4:	e8 01 d8 fe ff       	call   812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>
 813f7e9:	83 f0 01             	xor    $0x1,%eax
 813f7ec:	84 c0                	test   %al,%al
 813f7ee:	74 0a                	je     813f7fa <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0x1c>
 813f7f0:	b8 01 00 00 00       	mov    $0x1,%eax
 813f7f5:	e9 d2 00 00 00       	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f7fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f7fd:	89 04 24             	mov    %eax,(%esp)
 813f800:	e8 87 ab f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 813f805:	83 f8 03             	cmp    $0x3,%eax
 813f808:	0f 95 c0             	setne  %al
 813f80b:	84 c0                	test   %al,%al
 813f80d:	74 0a                	je     813f819 <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0x3b>
 813f80f:	b8 03 00 00 00       	mov    $0x3,%eax
 813f814:	e9 b3 00 00 00       	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f819:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f81c:	89 04 24             	mov    %eax,(%esp)
 813f81f:	e8 94 aa f9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 813f824:	83 f8 31             	cmp    $0x31,%eax
 813f827:	0f 9e c0             	setle  %al
 813f82a:	84 c0                	test   %al,%al
 813f82c:	74 0a                	je     813f838 <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0x5a>
 813f82e:	b8 04 00 00 00       	mov    $0x4,%eax
 813f833:	e9 94 00 00 00       	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f838:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f83b:	89 04 24             	mov    %eax,(%esp)
 813f83e:	e8 7d f1 54 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 813f843:	84 c0                	test   %al,%al
 813f845:	74 07                	je     813f84e <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0x70>
 813f847:	b8 03 00 00 00       	mov    $0x3,%eax
 813f84c:	eb 7e                	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f84e:	e8 95 53 48 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 813f853:	8b 55 0c             	mov    0xc(%ebp),%edx
 813f856:	89 54 24 04          	mov    %edx,0x4(%esp)
 813f85a:	89 04 24             	mov    %eax,(%esp)
 813f85d:	e8 fc b4 48 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 813f862:	84 c0                	test   %al,%al
 813f864:	74 07                	je     813f86d <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0x8f>
 813f866:	b8 03 00 00 00       	mov    $0x3,%eax
 813f86b:	eb 5f                	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f86d:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f870:	89 04 24             	mov    %eax,(%esp)
 813f873:	e8 86 aa f9 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 813f878:	84 c0                	test   %al,%al
 813f87a:	74 07                	je     813f883 <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xa5>
 813f87c:	b8 02 00 00 00       	mov    $0x2,%eax
 813f881:	eb 49                	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f883:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f886:	89 04 24             	mov    %eax,(%esp)
 813f889:	e8 90 7f 50 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 813f88e:	84 c0                	test   %al,%al
 813f890:	74 07                	je     813f899 <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xbb>
 813f892:	b8 03 00 00 00       	mov    $0x3,%eax
 813f897:	eb 33                	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f899:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f89c:	89 04 24             	mov    %eax,(%esp)
 813f89f:	e8 70 aa f9 ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 813f8a4:	84 c0                	test   %al,%al
 813f8a6:	74 07                	je     813f8af <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xd1>
 813f8a8:	b8 03 00 00 00       	mov    $0x3,%eax
 813f8ad:	eb 1d                	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f8af:	e8 f3 aa f9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 813f8b4:	89 04 24             	mov    %eax,(%esp)
 813f8b7:	e8 2c 2c 00 00       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 813f8bc:	84 c0                	test   %al,%al
 813f8be:	74 07                	je     813f8c7 <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xe9>
 813f8c0:	b8 03 00 00 00       	mov    $0x3,%eax
 813f8c5:	eb 05                	jmp    813f8cc <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE+0xee>
 813f8c7:	b8 00 00 00 00       	mov    $0x0,%eax
 813f8cc:	c9                   	leave
 813f8cd:	c3                   	ret

```

```c
// advancealtar::Dispatcher_StartGame::check_error @ 0x813f7de

/* advancealtar::Dispatcher_StartGame::check_error(CUser*, MSG_BASE&) */

undefined4 advancealtar::Dispatcher_StartGame::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CPrivateStoreMgr *this;
  GameWorld *this_00;
  
  cVar1 = isOpenAdvanceAltar();
  if (cVar1 == '\x01') {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 3) {
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      if (iVar3 < 0x32) {
        uVar2 = 4;
      }
      else {
        cVar1 = CUser::isCompetitionMercenary((CUser *)param_2);
        if (cVar1 == '\0') {
          this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
          cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_2);
          if (cVar1 == '\0') {
            cVar1 = CUser::CheckInTrade((CUser *)param_2);
            if (cVar1 == '\0') {
              cVar1 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_2);
              if (cVar1 == '\0') {
                cVar1 = CUser::CheckInParty((CUser *)param_2);
                if (cVar1 == '\0') {
                  this_00 = (GameWorld *)G_GameWorld();
                  cVar1 = GameWorld::IsPVPChannel(this_00);
                  if (cVar1 == '\0') {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 3;
                  }
                }
                else {
                  uVar2 = 3;
                }
              }
              else {
                uVar2 = 3;
              }
            }
            else {
              uVar2 = 2;
            }
          }
          else {
            uVar2 = 3;
          }
        }
        else {
          uVar2 = 3;
        }
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## process

```asm
// === 0813f8ce advancealtar::Dispatcher_StartGame::process  [0x0813f8ce-0x813f929] ===
 813f8ce:	55                   	push   %ebp
 813f8cf:	89 e5                	mov    %esp,%ebp
 813f8d1:	83 ec 28             	sub    $0x28,%esp
 813f8d4:	8b 45 10             	mov    0x10(%ebp),%eax
 813f8d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813f8da:	8b 45 14             	mov    0x14(%ebp),%eax
 813f8dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813f8e0:	8b 45 10             	mov    0x10(%ebp),%eax
 813f8e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 813f8e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f8ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f8ee:	8b 45 08             	mov    0x8(%ebp),%eax
 813f8f1:	89 04 24             	mov    %eax,(%esp)
 813f8f4:	e8 e5 fe ff ff       	call   813f7de <_ZN12advancealtar20Dispatcher_StartGame11check_errorEP5CUserR8MSG_BASE>
 813f8f9:	89 c2                	mov    %eax,%edx
 813f8fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f8fe:	89 50 04             	mov    %edx,0x4(%eax)
 813f901:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f904:	8b 40 04             	mov    0x4(%eax),%eax
 813f907:	85 c0                	test   %eax,%eax
 813f909:	74 07                	je     813f912 <_ZN12advancealtar20Dispatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x44>
 813f90b:	b8 00 00 00 00       	mov    $0x0,%eax
 813f910:	eb 15                	jmp    813f927 <_ZN12advancealtar20Dispatcher_StartGame7processEP5CUserR8MSG_BASER9ParamBase+0x59>
 813f912:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f915:	05 60 df 08 00       	add    $0x8df60,%eax
 813f91a:	89 04 24             	mov    %eax,(%esp)
 813f91d:	e8 04 1b ff ff       	call   8131426 <_ZN12advancealtar25CharacAdvanceAltarManager28checkAndCreateDefaultRidableEv>
 813f922:	b8 00 00 00 00       	mov    $0x0,%eax
 813f927:	c9                   	leave
 813f928:	c3                   	ret
 813f929:	90                   	nop

```

```c
// advancealtar::Dispatcher_StartGame::process @ 0x813f8ce

/* advancealtar::Dispatcher_StartGame::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
advancealtar::Dispatcher_StartGame::process
          (Dispatcher_StartGame *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    CharacAdvanceAltarManager::checkAndCreateDefaultRidable
              ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
  }
  return 0;
}

```

---

## read

```asm
// === 0813f7b0 advancealtar::Dispatcher_StartGame::read  [0x0813f7b0-0x813f7dd] ===
 813f7b0:	55                   	push   %ebp
 813f7b1:	89 e5                	mov    %esp,%ebp
 813f7b3:	83 ec 28             	sub    $0x28,%esp
 813f7b6:	8b 45 10             	mov    0x10(%ebp),%eax
 813f7b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813f7bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f7bf:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 813f7c6:	00 
 813f7c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f7ce:	89 04 24             	mov    %eax,(%esp)
 813f7d1:	e8 dc db 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 813f7d6:	b8 00 00 00 00       	mov    $0x0,%eax
 813f7db:	c9                   	leave
 813f7dc:	c3                   	ret
 813f7dd:	90                   	nop

```

```c
// advancealtar::Dispatcher_StartGame::read @ 0x813f7b0

/* advancealtar::Dispatcher_StartGame::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
advancealtar::Dispatcher_StartGame::read
          (Dispatcher_StartGame *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0xd);
  return 0;
}

```

---

## send

```asm
// === 0813f92a advancealtar::Dispatcher_StartGame::send  [0x0813f92a-0x813facf] ===
 813f92a:	55                   	push   %ebp
 813f92b:	89 e5                	mov    %esp,%ebp
 813f92d:	56                   	push   %esi
 813f92e:	53                   	push   %ebx
 813f92f:	83 ec 30             	sub    $0x30,%esp
 813f932:	8b 45 10             	mov    0x10(%ebp),%eax
 813f935:	89 45 ec             	mov    %eax,-0x14(%ebp)
 813f938:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813f93b:	8b 40 04             	mov    0x4(%eax),%eax
 813f93e:	85 c0                	test   %eax,%eax
 813f940:	75 0b                	jne    813f94d <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0x23>
 813f942:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f945:	89 04 24             	mov    %eax,(%esp)
 813f948:	e8 87 04 ff ff       	call   812fdd4 <_ZN12advancealtar12StageControl9gotoStageEP5CUser>
 813f94d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813f950:	89 04 24             	mov    %eax,(%esp)
 813f953:	e8 f4 e3 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 813f958:	c7 44 24 08 3c 02 00 	movl   $0x23c,0x8(%esp)
 813f95f:	00 
 813f960:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813f967:	00 
 813f968:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813f96b:	89 04 24             	mov    %eax,(%esp)
 813f96e:	e8 89 bf f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 813f973:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813f97a:	00 
 813f97b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813f97e:	89 04 24             	mov    %eax,(%esp)
 813f981:	e8 9a bf f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 813f986:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813f989:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 813f990:	00 
 813f991:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f995:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813f998:	89 04 24             	mov    %eax,(%esp)
 813f99b:	e8 68 e5 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 813f9a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 813f9a3:	8b 40 04             	mov    0x4(%eax),%eax
 813f9a6:	85 c0                	test   %eax,%eax
 813f9a8:	74 2a                	je     813f9d4 <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0xaa>
 813f9aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813f9b1:	00 
 813f9b2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813f9b5:	89 04 24             	mov    %eax,(%esp)
 813f9b8:	e8 9b bf f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 813f9bd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813f9c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f9c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f9c7:	89 04 24             	mov    %eax,(%esp)
 813f9ca:	e8 eb 8b 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 813f9cf:	e9 ea 00 00 00       	jmp    813fabe <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0x194>
 813f9d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f9d7:	05 60 df 08 00       	add    $0x8df60,%eax
 813f9dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813f9e3:	00 
 813f9e4:	89 04 24             	mov    %eax,(%esp)
 813f9e7:	e8 68 18 ff ff       	call   8131254 <_ZN12advancealtar25CharacAdvanceAltarManager26setCurrentAdvanceAltarDataENS_9RidableId1TE>
 813f9ec:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 813f9f3:	00 
 813f9f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f9f7:	89 04 24             	mov    %eax,(%esp)
 813f9fa:	e8 b3 f3 53 00       	call   867edb2 <_ZN5CUser9set_stateE8ch_state>
 813f9ff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813fa06:	00 
 813fa07:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813fa0a:	89 04 24             	mov    %eax,(%esp)
 813fa0d:	e8 2a bf f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 813fa12:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 813fa19:	eb 56                	jmp    813fa71 <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0x147>
 813fa1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fa1e:	8d 90 60 df 08 00    	lea    0x8df60(%eax),%edx
 813fa24:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813fa27:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fa2b:	89 14 24             	mov    %edx,(%esp)
 813fa2e:	e8 b5 1c ff ff       	call   81316e8 <_ZN12advancealtar25CharacAdvanceAltarManager26getAdvanceAltarDataByIndexEi>
 813fa33:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813fa36:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 813fa3a:	74 30                	je     813fa6c <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0x142>
 813fa3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813fa3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fa43:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813fa46:	89 04 24             	mov    %eax,(%esp)
 813fa49:	e8 33 1d 00 00       	call   8141781 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE>
 813fa4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813fa51:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 813fa55:	84 c0                	test   %al,%al
 813fa57:	74 14                	je     813fa6d <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0x143>
 813fa59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813fa5c:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 813fa60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813fa63:	c6 80 cc 00 00 00 01 	movb   $0x1,0xcc(%eax)
 813fa6a:	eb 01                	jmp    813fa6d <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0x143>
 813fa6c:	90                   	nop
 813fa6d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 813fa71:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813fa75:	0f 9e c0             	setle  %al
 813fa78:	84 c0                	test   %al,%al
 813fa7a:	75 9f                	jne    813fa1b <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0xf1>
 813fa7c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813fa83:	00 
 813fa84:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813fa87:	89 04 24             	mov    %eax,(%esp)
 813fa8a:	e8 c9 be f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 813fa8f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813fa92:	89 44 24 04          	mov    %eax,0x4(%esp)
 813fa96:	8b 45 0c             	mov    0xc(%ebp),%eax
 813fa99:	89 04 24             	mov    %eax,(%esp)
 813fa9c:	e8 19 8b 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 813faa1:	eb 1b                	jmp    813fabe <_ZN12advancealtar20Dispatcher_StartGame4sendEP5CUserR9ParamBase+0x194>
 813faa3:	89 d3                	mov    %edx,%ebx
 813faa5:	89 c6                	mov    %eax,%esi
 813faa7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813faaa:	89 04 24             	mov    %eax,(%esp)
 813faad:	e8 ce e3 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 813fab2:	89 f0                	mov    %esi,%eax
 813fab4:	89 da                	mov    %ebx,%edx
 813fab6:	89 04 24             	mov    %eax,(%esp)
 813fab9:	e8 92 3c 9a 00       	call   8ae3750 <_Unwind_Resume>
 813fabe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 813fac1:	89 04 24             	mov    %eax,(%esp)
 813fac4:	e8 b7 e3 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 813fac9:	83 c4 30             	add    $0x30,%esp
 813facc:	5b                   	pop    %ebx
 813facd:	5e                   	pop    %esi
 813face:	5d                   	pop    %ebp
 813facf:	c3                   	ret

```

```c
// advancealtar::Dispatcher_StartGame::send @ 0x813f92a

/* advancealtar::Dispatcher_StartGame::send(CUser*, ParamBase&) */

void __thiscall
advancealtar::Dispatcher_StartGame::send
          (Dispatcher_StartGame *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_24 [12];
  ParamBase *local_18;
  int local_14;
  AdvanceAltarData *local_10;
  
  local_18 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    StageControl::gotoStage(param_1);
  }
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0813f96e to 0813faa0 has its CatchHandler @ 0813faa3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x23c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)local_18,8);
  if (*(int *)(local_18 + 4) == 0) {
    CharacAdvanceAltarManager::setCurrentAdvanceAltarData
              ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),1);
    CUser::set_state(param_1,0xd);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,1);
    for (local_14 = 0; local_14 < 1; local_14 = local_14 + 1) {
      local_10 = (AdvanceAltarData *)
                 CharacAdvanceAltarManager::getAdvanceAltarDataByIndex
                           ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),local_14);
      if (local_10 != (AdvanceAltarData *)0x0) {
        putRidableInfoToPacket(local_24,local_10);
        if (local_10[0x20] != (AdvanceAltarData)0x0) {
          local_10[0x20] = (AdvanceAltarData)0x0;
          local_10[0xcc] = (AdvanceAltarData)0x1;
        }
      }
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(param_1,local_24);
  }
  else {
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(param_1,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

