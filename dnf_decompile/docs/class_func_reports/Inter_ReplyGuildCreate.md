# Inter_ReplyGuildCreate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d368a Inter_ReplyGuildCreate::dispatch_sig  [0x084d368a-0x84d39ad] ===
 84d368a:	55                   	push   %ebp
 84d368b:	89 e5                	mov    %esp,%ebp
 84d368d:	56                   	push   %esi
 84d368e:	53                   	push   %ebx
 84d368f:	83 ec 50             	sub    $0x50,%esp
 84d3692:	8b 45 10             	mov    0x10(%ebp),%eax
 84d3695:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d3698:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d369b:	89 04 24             	mov    %eax,(%esp)
 84d369e:	e8 e9 6c c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d36a3:	83 f8 02             	cmp    $0x2,%eax
 84d36a6:	0f 9e c0             	setle  %al
 84d36a9:	84 c0                	test   %al,%al
 84d36ab:	74 40                	je     84d36ed <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0x63>
 84d36ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d36b0:	8b 40 0a             	mov    0xa(%eax),%eax
 84d36b3:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d36b7:	c7 44 24 10 58 8e c8 	movl   $0x8c88e58,0x10(%esp)
 84d36be:	08 
 84d36bf:	c7 44 24 0c 64 34 00 	movl   $0x3464,0xc(%esp)
 84d36c6:	00 
 84d36c7:	c7 44 24 08 60 c9 c8 	movl   $0x8c8c960,0x8(%esp)
 84d36ce:	08 
 84d36cf:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d36d6:	08 
 84d36d7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d36de:	e8 27 05 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d36e3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d36e8:	e9 b8 02 00 00       	jmp    84d39a5 <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0x31b>
 84d36ed:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d36f4:	ff 
 84d36f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d36f8:	89 04 24             	mov    %eax,(%esp)
 84d36fb:	e8 a0 a8 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d3700:	89 c2                	mov    %eax,%edx
 84d3702:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d3705:	8b 40 0a             	mov    0xa(%eax),%eax
 84d3708:	39 c2                	cmp    %eax,%edx
 84d370a:	0f 95 c0             	setne  %al
 84d370d:	84 c0                	test   %al,%al
 84d370f:	74 57                	je     84d3768 <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0xde>
 84d3711:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d3714:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d3717:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d371e:	ff 
 84d371f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3722:	89 04 24             	mov    %eax,(%esp)
 84d3725:	e8 76 a8 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d372a:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d372e:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d3732:	c7 44 24 10 90 8e c8 	movl   $0x8c88e90,0x10(%esp)
 84d3739:	08 
 84d373a:	c7 44 24 0c 6a 34 00 	movl   $0x346a,0xc(%esp)
 84d3741:	00 
 84d3742:	c7 44 24 08 60 c9 c8 	movl   $0x8c8c960,0x8(%esp)
 84d3749:	08 
 84d374a:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d3751:	08 
 84d3752:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d3759:	e8 ac 04 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d375e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d3763:	e9 3d 02 00 00       	jmp    84d39a5 <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0x31b>
 84d3768:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d376b:	89 04 24             	mov    %eax,(%esp)
 84d376e:	e8 d9 a5 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d3773:	c7 44 24 08 47 00 00 	movl   $0x47,0x8(%esp)
 84d377a:	00 
 84d377b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3782:	00 
 84d3783:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3786:	89 04 24             	mov    %eax,(%esp)
 84d3789:	e8 6e 81 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d378e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d3791:	8b 40 12             	mov    0x12(%eax),%eax
 84d3794:	85 c0                	test   %eax,%eax
 84d3796:	75 4c                	jne    84d37e4 <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0x15a>
 84d3798:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d379f:	00 
 84d37a0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d37a3:	89 04 24             	mov    %eax,(%esp)
 84d37a6:	e8 75 81 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d37ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d37ae:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d37b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d37b4:	8d 70 16             	lea    0x16(%eax),%esi
 84d37b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d37ba:	89 04 24             	mov    %eax,(%esp)
 84d37bd:	e8 aa bc d5 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84d37c2:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d37c5:	81 c2 00 97 07 00    	add    $0x79700,%edx
 84d37cb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d37cf:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d37d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d37d7:	89 14 24             	mov    %edx,(%esp)
 84d37da:	e8 99 21 1b 00       	call   8685978 <_ZN15cUserHistoryLog11GuildCreateEjPKcj>
 84d37df:	e9 8b 00 00 00       	jmp    84d386f <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0x1e5>
 84d37e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d37eb:	00 
 84d37ec:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d37ef:	89 04 24             	mov    %eax,(%esp)
 84d37f2:	e8 29 81 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d37f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d37fa:	8b 40 12             	mov    0x12(%eax),%eax
 84d37fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3801:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3804:	89 04 24             	mov    %eax,(%esp)
 84d3807:	e8 14 81 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d380c:	e8 8a 89 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84d3811:	8b 80 0c a5 00 00    	mov    0xa50c(%eax),%eax
 84d3817:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d381a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d381d:	89 04 24             	mov    %eax,(%esp)
 84d3820:	e8 69 6a c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84d3825:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84d382c:	00 
 84d382d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84d3834:	00 
 84d3835:	c7 44 24 08 19 00 00 	movl   $0x19,0x8(%esp)
 84d383c:	00 
 84d383d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d3840:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d3844:	89 04 24             	mov    %eax,(%esp)
 84d3847:	e8 50 ba 02 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 84d384c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d3853:	00 
 84d3854:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d385b:	00 
 84d385c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3863:	00 
 84d3864:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3867:	89 04 24             	mov    %eax,(%esp)
 84d386a:	e8 eb 8d 1a 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 84d386f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3876:	00 
 84d3877:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d387a:	89 04 24             	mov    %eax,(%esp)
 84d387d:	e8 d6 80 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d3882:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3885:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3889:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d388c:	89 04 24             	mov    %eax,(%esp)
 84d388f:	e8 26 4d 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d3894:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d3897:	8b 40 12             	mov    0x12(%eax),%eax
 84d389a:	85 c0                	test   %eax,%eax
 84d389c:	0f 85 d6 00 00 00    	jne    84d3978 <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0x2ee>
 84d38a2:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84d38a5:	89 04 24             	mov    %eax,(%esp)
 84d38a8:	e8 31 0c d6 ff       	call   82344de <_ZN12STGuildProxyC1Ev>
 84d38ad:	c6 45 e1 00          	movb   $0x0,-0x1f(%ebp)
 84d38b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d38b4:	83 c0 16             	add    $0x16,%eax
 84d38b7:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 84d38be:	00 
 84d38bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d38c3:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84d38c6:	89 04 24             	mov    %eax,(%esp)
 84d38c9:	e8 d2 9f ba ff       	call   807d8a0 <memcpy@plt>
 84d38ce:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 84d38d2:	8d 45 ca             	lea    -0x36(%ebp),%eax
 84d38d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d38d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d38dc:	89 04 24             	mov    %eax,(%esp)
 84d38df:	e8 26 94 18 00       	call   865cd0a <_ZN5CUser17SetGuildInfoProxyER12STGuildProxy>
 84d38e4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d38e7:	89 04 24             	mov    %eax,(%esp)
 84d38ea:	e8 f7 7f bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84d38ef:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84d38f6:	00 
 84d38f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d38fe:	00 
 84d38ff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3902:	89 04 24             	mov    %eax,(%esp)
 84d3905:	e8 f2 7f bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d390a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d3911:	00 
 84d3912:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3915:	89 04 24             	mov    %eax,(%esp)
 84d3918:	e8 03 80 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d391d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3924:	00 
 84d3925:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3928:	89 04 24             	mov    %eax,(%esp)
 84d392b:	e8 74 65 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d3930:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3933:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d393a:	00 
 84d393b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d393f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3942:	89 04 24             	mov    %eax,(%esp)
 84d3945:	e8 04 6b 18 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84d394a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3951:	00 
 84d3952:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3955:	89 04 24             	mov    %eax,(%esp)
 84d3958:	e8 fb 7f bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d395d:	e8 45 6a c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d3962:	8b 55 0c             	mov    0xc(%ebp),%edx
 84d3965:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d3969:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84d396c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d3970:	89 04 24             	mov    %eax,(%esp)
 84d3973:	e8 e4 0f c6 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 84d3978:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d397d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3980:	89 04 24             	mov    %eax,(%esp)
 84d3983:	e8 f8 a4 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3988:	eb 1b                	jmp    84d39a5 <_ZN22Inter_ReplyGuildCreate12dispatch_sigEP5CUserPci+0x31b>
 84d398a:	89 d3                	mov    %edx,%ebx
 84d398c:	89 c6                	mov    %eax,%esi
 84d398e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3991:	89 04 24             	mov    %eax,(%esp)
 84d3994:	e8 e7 a4 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3999:	89 f0                	mov    %esi,%eax
 84d399b:	89 da                	mov    %ebx,%edx
 84d399d:	89 04 24             	mov    %eax,(%esp)
 84d39a0:	e8 ab fd 60 00       	call   8ae3750 <_Unwind_Resume>
 84d39a5:	89 d8                	mov    %ebx,%eax
 84d39a7:	83 c4 50             	add    $0x50,%esp
 84d39aa:	5b                   	pop    %ebx
 84d39ab:	5e                   	pop    %esi
 84d39ac:	5d                   	pop    %ebp
 84d39ad:	c3                   	ret

```

```c
// Inter_ReplyGuildCreate::dispatch_sig @ 0x84d368a

/* Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildCreate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  CInventory *pCVar7;
  GameWorld *this;
  STGuildProxy local_3a [23];
  undefined1 local_23;
  undefined1 local_22;
  PacketGuard local_20 [12];
  int local_14;
  undefined4 local_10;
  
  local_14 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 < 3) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int)",0x3464,
               "GUILD : Inter_ReplyGuildCreate:: recv->m_uCharID(%d)",*(undefined4 *)(local_14 + 10)
              );
  }
  else {
    iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar4 == *(int *)(local_14 + 10)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d3789 to 084d3977 has its CatchHandler @ 084d398a */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x47);
      if (*(int *)(local_14 + 0x12) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        uVar3 = *(uint *)(local_14 + 10);
        pcVar1 = (char *)(local_14 + 0x16);
        uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        cUserHistoryLog::GuildCreate((cUserHistoryLog *)(param_2 + 0x79700),uVar6,pcVar1,uVar3);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        iVar4 = G_CDataManager();
        local_10 = *(undefined4 *)(iVar4 + 0xa50c);
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        CInventory::gain_money(pCVar7,local_10,0x19,1,0);
        CUser::SendUpdateItemList((CUser *)param_2,1,0,0);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      if (*(int *)(local_14 + 0x12) == 0) {
        STGuildProxy::STGuildProxy(local_3a);
        local_23 = 0;
        memcpy(local_3a,(void *)(local_14 + 0x16),0x16);
        local_22 = 0;
        CUser::SetGuildInfoProxy((CUser *)param_2,local_3a);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
        CUser::make_basic_info((CUser *)param_2,(char *)local_20,'\0');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        this = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this,local_20,(CUser *)param_2);
      }
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar2 = *(undefined4 *)(local_14 + 10);
      uVar5 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildCreate::dispatch_sig(CUser*, char*, int)",0x346a,
                 "GUILD : Inter_ReplyGuildCreate:: : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar5,uVar2);
    }
  }
  return 0;
}

```

