# Inter_VillageAttackedRewardServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e05c2 Inter_VillageAttackedRewardServer::dispatch_sig  [0x084e05c2-0x84e0815] ===
 84e05c2:	55                   	push   %ebp
 84e05c3:	89 e5                	mov    %esp,%ebp
 84e05c5:	56                   	push   %esi
 84e05c6:	53                   	push   %ebx
 84e05c7:	83 ec 40             	sub    $0x40,%esp
 84e05ca:	e8 d8 9d bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e05cf:	89 04 24             	mov    %eax,(%esp)
 84e05d2:	e8 47 0d c1 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 84e05d7:	84 c0                	test   %al,%al
 84e05d9:	74 0a                	je     84e05e5 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x23>
 84e05db:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e05e0:	e9 24 02 00 00       	jmp    84e0809 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x247>
 84e05e5:	e8 97 bb be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e05ea:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84e05f0:	83 f8 01             	cmp    $0x1,%eax
 84e05f3:	74 10                	je     84e0605 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x43>
 84e05f5:	e8 87 bb be ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84e05fa:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 84e0600:	83 f8 02             	cmp    $0x2,%eax
 84e0603:	75 07                	jne    84e060c <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x4a>
 84e0605:	b8 01 00 00 00       	mov    $0x1,%eax
 84e060a:	eb 05                	jmp    84e0611 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x4f>
 84e060c:	b8 00 00 00 00       	mov    $0x0,%eax
 84e0611:	84 c0                	test   %al,%al
 84e0613:	74 0a                	je     84e061f <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x5d>
 84e0615:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e061a:	e9 ea 01 00 00       	jmp    84e0809 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x247>
 84e061f:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84e0626:	00 
 84e0627:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e062e:	00 
 84e062f:	8d 45 de             	lea    -0x22(%ebp),%eax
 84e0632:	89 04 24             	mov    %eax,(%esp)
 84e0635:	e8 86 d6 b9 ff       	call   807dcc0 <memset@plt>
 84e063a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e063d:	89 04 24             	mov    %eax,(%esp)
 84e0640:	e8 07 d7 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e0645:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e0648:	89 04 24             	mov    %eax,(%esp)
 84e064b:	e8 96 b2 be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84e0650:	c7 44 24 08 ec 01 00 	movl   $0x1ec,0x8(%esp)
 84e0657:	00 
 84e0658:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e065f:	00 
 84e0660:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e0663:	89 04 24             	mov    %eax,(%esp)
 84e0666:	e8 91 b2 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e066b:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 84e0670:	89 04 24             	mov    %eax,(%esp)
 84e0673:	e8 80 cd 00 00       	call   84ed3f8 <_ZN16village_attacked18CVillageMonsterMgr13GetRewardTypeEv>
 84e0678:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e067b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e067e:	83 f8 01             	cmp    $0x1,%eax
 84e0681:	74 07                	je     84e068a <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0xc8>
 84e0683:	83 f8 02             	cmp    $0x2,%eax
 84e0686:	74 08                	je     84e0690 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0xce>
 84e0688:	eb 0a                	jmp    84e0694 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0xd2>
 84e068a:	c6 45 de 00          	movb   $0x0,-0x22(%ebp)
 84e068e:	eb 04                	jmp    84e0694 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0xd2>
 84e0690:	c6 45 de 01          	movb   $0x1,-0x22(%ebp)
 84e0694:	c6 45 df 02          	movb   $0x2,-0x21(%ebp)
 84e0698:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84e069f:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84e06a6:	8d 45 de             	lea    -0x22(%ebp),%eax
 84e06a9:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84e06b0:	00 
 84e06b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e06b5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e06b8:	89 04 24             	mov    %eax,(%esp)
 84e06bb:	e8 48 d8 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e06c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e06c7:	00 
 84e06c8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e06cb:	89 04 24             	mov    %eax,(%esp)
 84e06ce:	e8 85 b2 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e06d3:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84e06d8:	89 04 24             	mov    %eax,(%esp)
 84e06db:	e8 4a d6 f9 ff       	call   847dd2a <_ZN16village_attacked15CRevengeDungeon19CloseRevengeDungeonEv>
 84e06e0:	a1 80 f7 41 09       	mov    0x941f780,%eax
 84e06e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e06ec:	00 
 84e06ed:	89 04 24             	mov    %eax,(%esp)
 84e06f0:	e8 41 d6 f9 ff       	call   847dd36 <_ZN16village_attacked15CRevengeDungeon12SetCloseTimeEj>
 84e06f5:	e8 ad 9c bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e06fa:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 84e0700:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84e0703:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e0707:	89 04 24             	mov    %eax,(%esp)
 84e070a:	e8 97 71 c1 ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 84e070f:	83 ec 04             	sub    $0x4,%esp
 84e0712:	e9 81 00 00 00       	jmp    84e0798 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x1d6>
 84e0717:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84e071a:	89 04 24             	mov    %eax,(%esp)
 84e071d:	e8 22 72 c1 ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 84e0722:	8b 40 04             	mov    0x4(%eax),%eax
 84e0725:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e0728:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e072c:	74 4d                	je     84e077b <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x1b9>
 84e072e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0731:	89 04 24             	mov    %eax,(%esp)
 84e0734:	e8 53 9c bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e0739:	83 f8 02             	cmp    $0x2,%eax
 84e073c:	0f 9f c0             	setg   %al
 84e073f:	84 c0                	test   %al,%al
 84e0741:	74 38                	je     84e077b <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x1b9>
 84e0743:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0746:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e074d:	00 
 84e074e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e0755:	00 
 84e0756:	89 04 24             	mov    %eax,(%esp)
 84e0759:	e8 42 ba 00 00       	call   84ec1a0 <_ZN15CUserCharacInfo23SetCurCharacRevengeDataEhh>
 84e075e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0761:	89 04 24             	mov    %eax,(%esp)
 84e0764:	e8 91 ba 00 00       	call   84ec1fa <_ZN15CUserCharacInfo25VillageAttack_NotDBUpdateEv>
 84e0769:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e076c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e0770:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0773:	89 04 24             	mov    %eax,(%esp)
 84e0776:	e8 3f 7e 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e077b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e077e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e0785:	00 
 84e0786:	8d 55 cc             	lea    -0x34(%ebp),%edx
 84e0789:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e078d:	89 04 24             	mov    %eax,(%esp)
 84e0790:	e8 71 71 c1 ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 84e0795:	83 ec 04             	sub    $0x4,%esp
 84e0798:	e8 0a 9c bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e079d:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 84e07a3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e07a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e07aa:	89 04 24             	mov    %eax,(%esp)
 84e07ad:	e8 1a 71 c1 ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 84e07b2:	83 ec 04             	sub    $0x4,%esp
 84e07b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e07b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e07bc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84e07bf:	89 04 24             	mov    %eax,(%esp)
 84e07c2:	e8 2b 71 c1 ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 84e07c7:	84 c0                	test   %al,%al
 84e07c9:	0f 85 48 ff ff ff    	jne    84e0717 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x155>
 84e07cf:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 84e07d4:	89 04 24             	mov    %eax,(%esp)
 84e07d7:	e8 10 3d 1d 00       	call   86b44ec <_ZN16village_attacked18CVillageMonsterMgr25OnEndRewardVillageMonsterEv>
 84e07dc:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e07e1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e07e4:	89 04 24             	mov    %eax,(%esp)
 84e07e7:	e8 94 d6 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e07ec:	eb 1b                	jmp    84e0809 <_ZN33Inter_VillageAttackedRewardServer12dispatch_sigEP5CUserPci+0x247>
 84e07ee:	89 d3                	mov    %edx,%ebx
 84e07f0:	89 c6                	mov    %eax,%esi
 84e07f2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e07f5:	89 04 24             	mov    %eax,(%esp)
 84e07f8:	e8 83 d6 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e07fd:	89 f0                	mov    %esi,%eax
 84e07ff:	89 da                	mov    %ebx,%edx
 84e0801:	89 04 24             	mov    %eax,(%esp)
 84e0804:	e8 47 2f 60 00       	call   8ae3750 <_Unwind_Resume>
 84e0809:	89 d8                	mov    %ebx,%eax
 84e080b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84e080e:	83 c4 00             	add    $0x0,%esp
 84e0811:	5b                   	pop    %ebx
 84e0812:	5e                   	pop    %esi
 84e0813:	5d                   	pop    %ebp
 84e0814:	c3                   	ret
 84e0815:	90                   	nop

```

```c
// Inter_VillageAttackedRewardServer::dispatch_sig @ 0x84e05c2

/* Inter_VillageAttackedRewardServer::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_VillageAttackedRewardServer::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_38 [4];
  PacketGuard local_34 [14];
  char local_26 [10];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  int local_14;
  CUserCharacInfo *local_10;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      memset(local_26,0,10);
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084e064b to 084e07db has its CatchHandler @ 084e07ee */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x1ec);
      local_14 = village_attacked::CVillageMonsterMgr::GetRewardType
                           (GlobalData::s_villageMonsterMgr);
      if (local_14 == 1) {
        local_26[0] = '\0';
      }
      else if (local_14 == 2) {
        local_26[0] = '\x01';
      }
      local_26[1] = 2;
      local_26[2] = '\0';
      local_26[3] = '\0';
      local_26[4] = '\0';
      local_26[5] = '\0';
      local_26[6] = '\0';
      local_26[7] = '\0';
      local_26[8] = '\0';
      local_26[9] = '\0';
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_34,local_26,10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
      village_attacked::CRevengeDungeon::SetCloseTime(GlobalData::s_revengeDungeonMgr,0);
      G_GameWorld();
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::begin(local_38);
      while( true ) {
        G_GameWorld();
        std::
        map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
        ::end(local_1c);
        cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_38,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar2 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_38);
        local_10 = *(CUserCharacInfo **)(iVar3 + 4);
        if ((local_10 != (CUserCharacInfo *)0x0) &&
           (iVar3 = CUser::get_state((CUser *)local_10), 2 < iVar3)) {
          CUserCharacInfo::SetCurCharacRevengeData(local_10,'\0','\0');
          CUserCharacInfo::VillageAttack_NotDBUpdate(local_10);
          CUser::Send((CUser *)local_10,local_34);
        }
        std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                  (local_18,(int)local_38);
      }
      village_attacked::CVillageMonsterMgr::OnEndRewardVillageMonster
                (GlobalData::s_villageMonsterMgr);
      PacketGuard::~PacketGuard(local_34);
    }
  }
  return 0;
}

```

