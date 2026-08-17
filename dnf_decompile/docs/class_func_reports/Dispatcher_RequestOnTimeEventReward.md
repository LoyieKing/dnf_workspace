# Dispatcher_RequestOnTimeEventReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822458c Dispatcher_RequestOnTimeEventReward::dispatch_sig  [0x0822458c-0x8224909] ===
 822458c:	55                   	push   %ebp
 822458d:	89 e5                	mov    %esp,%ebp
 822458f:	57                   	push   %edi
 8224590:	56                   	push   %esi
 8224591:	53                   	push   %ebx
 8224592:	81 ec 4c 01 00 00    	sub    $0x14c,%esp
 8224598:	e8 0a 5e eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 822459d:	89 04 24             	mov    %eax,(%esp)
 82245a0:	e8 43 df f1 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 82245a5:	84 c0                	test   %al,%al
 82245a7:	74 0a                	je     82245b3 <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x27>
 82245a9:	b8 00 00 00 00       	mov    $0x0,%eax
 82245ae:	e9 4b 03 00 00       	jmp    82248fe <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x372>
 82245b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82245b6:	89 04 24             	mov    %eax,(%esp)
 82245b9:	e8 ce 5d eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82245be:	83 f8 03             	cmp    $0x3,%eax
 82245c1:	0f 95 c0             	setne  %al
 82245c4:	84 c0                	test   %al,%al
 82245c6:	74 25                	je     82245ed <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x61>
 82245c8:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 82245cf:	00 
 82245d0:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 82245d7:	00 
 82245d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82245db:	89 04 24             	mov    %eax,(%esp)
 82245de:	e8 5f 79 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82245e3:	b8 00 00 00 00       	mov    $0x0,%eax
 82245e8:	e9 11 03 00 00       	jmp    82248fe <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x372>
 82245ed:	a1 30 f7 41 09       	mov    0x941f730,%eax
 82245f2:	c7 44 24 04 33 00 00 	movl   $0x33,0x4(%esp)
 82245f9:	00 
 82245fa:	89 04 24             	mov    %eax,(%esp)
 82245fd:	e8 96 13 ef ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8224602:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8224605:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8224609:	0f 84 f9 00 00 00    	je     8224708 <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x17c>
 822460f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8224612:	8b 00                	mov    (%eax),%eax
 8224614:	83 c0 34             	add    $0x34,%eax
 8224617:	8b 10                	mov    (%eax),%edx
 8224619:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 822461c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8224623:	00 
 8224624:	89 04 24             	mov    %eax,(%esp)
 8224627:	ff d2                	call   *%edx
 8224629:	83 f0 01             	xor    $0x1,%eax
 822462c:	84 c0                	test   %al,%al
 822462e:	0f 84 de 00 00 00    	je     8224712 <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x186>
 8224634:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 822463b:	00 
 822463c:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 8224643:	00 
 8224644:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224647:	89 04 24             	mov    %eax,(%esp)
 822464a:	e8 f3 78 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822464f:	8d 9d cc fe ff ff    	lea    -0x134(%ebp),%ebx
 8224655:	b8 00 00 00 00       	mov    $0x0,%eax
 822465a:	ba 40 00 00 00       	mov    $0x40,%edx
 822465f:	89 df                	mov    %ebx,%edi
 8224661:	89 d1                	mov    %edx,%ecx
 8224663:	f3 ab                	rep stos %eax,%es:(%edi)
 8224665:	e8 17 7b ea ff       	call   80cc181 <_Z14G_CEnvironmentv>
 822466a:	89 04 24             	mov    %eax,(%esp)
 822466d:	e8 28 5d eb ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 8224672:	89 44 24 08          	mov    %eax,0x8(%esp)
 8224676:	c7 44 24 04 a8 35 bc 	movl   $0x8bc35a8,0x4(%esp)
 822467d:	08 
 822467e:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8224684:	89 04 24             	mov    %eax,(%esp)
 8224687:	e8 b4 9d e5 ff       	call   807e440 <sprintf@plt>
 822468c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8224693:	ff 
 8224694:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224697:	89 04 24             	mov    %eax,(%esp)
 822469a:	e8 01 99 42 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 822469f:	89 c6                	mov    %eax,%esi
 82246a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82246a4:	89 04 24             	mov    %eax,(%esp)
 82246a7:	e8 c2 5c eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82246ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82246b3:	00 
 82246b4:	89 04 24             	mov    %eax,(%esp)
 82246b7:	e8 8f 49 ee ff       	call   810904b <_Z14NumberToStringji>
 82246bc:	89 c3                	mov    %eax,%ebx
 82246be:	c7 44 24 08 01 df 00 	movl   $0xdf01,0x8(%esp)
 82246c5:	00 
 82246c6:	c7 44 24 04 60 c8 bc 	movl   $0x8bcc860,0x4(%esp)
 82246cd:	08 
 82246ce:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82246d1:	89 04 24             	mov    %eax,(%esp)
 82246d4:	e8 93 31 ee ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 82246d9:	89 74 24 10          	mov    %esi,0x10(%esp)
 82246dd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82246e1:	c7 44 24 08 c0 35 bc 	movl   $0x8bc35c0,0x8(%esp)
 82246e8:	08 
 82246e9:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 82246ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 82246f3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82246f6:	89 04 24             	mov    %eax,(%esp)
 82246f9:	e8 9a 31 ee ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 82246fe:	b8 00 00 00 00       	mov    $0x0,%eax
 8224703:	e9 f6 01 00 00       	jmp    82248fe <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x372>
 8224708:	b8 00 00 00 00       	mov    $0x0,%eax
 822470d:	e9 ec 01 00 00       	jmp    82248fe <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x372>
 8224712:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8224715:	89 04 24             	mov    %eax,(%esp)
 8224718:	e8 4f 72 f9 ff       	call   81bb96c <_ZN12COnTimeEvent16get_reward_stateEv>
 822471d:	85 c0                	test   %eax,%eax
 822471f:	0f 95 c0             	setne  %al
 8224722:	84 c0                	test   %al,%al
 8224724:	0f 84 d4 00 00 00    	je     82247fe <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x272>
 822472a:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8224731:	00 
 8224732:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 8224739:	00 
 822473a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822473d:	89 04 24             	mov    %eax,(%esp)
 8224740:	e8 fd 77 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8224745:	8d 9d cc fe ff ff    	lea    -0x134(%ebp),%ebx
 822474b:	b8 00 00 00 00       	mov    $0x0,%eax
 8224750:	ba 40 00 00 00       	mov    $0x40,%edx
 8224755:	89 df                	mov    %ebx,%edi
 8224757:	89 d1                	mov    %edx,%ecx
 8224759:	f3 ab                	rep stos %eax,%es:(%edi)
 822475b:	e8 21 7a ea ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8224760:	89 04 24             	mov    %eax,(%esp)
 8224763:	e8 32 5c eb ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 8224768:	89 44 24 08          	mov    %eax,0x8(%esp)
 822476c:	c7 44 24 04 a8 35 bc 	movl   $0x8bc35a8,0x4(%esp)
 8224773:	08 
 8224774:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 822477a:	89 04 24             	mov    %eax,(%esp)
 822477d:	e8 be 9c e5 ff       	call   807e440 <sprintf@plt>
 8224782:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8224789:	ff 
 822478a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822478d:	89 04 24             	mov    %eax,(%esp)
 8224790:	e8 0b 98 42 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8224795:	89 c6                	mov    %eax,%esi
 8224797:	8b 45 0c             	mov    0xc(%ebp),%eax
 822479a:	89 04 24             	mov    %eax,(%esp)
 822479d:	e8 cc 5b eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82247a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82247a9:	00 
 82247aa:	89 04 24             	mov    %eax,(%esp)
 82247ad:	e8 99 48 ee ff       	call   810904b <_Z14NumberToStringji>
 82247b2:	89 c3                	mov    %eax,%ebx
 82247b4:	c7 44 24 08 14 df 00 	movl   $0xdf14,0x8(%esp)
 82247bb:	00 
 82247bc:	c7 44 24 04 60 c8 bc 	movl   $0x8bcc860,0x4(%esp)
 82247c3:	08 
 82247c4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82247c7:	89 04 24             	mov    %eax,(%esp)
 82247ca:	e8 9d 30 ee ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 82247cf:	89 74 24 10          	mov    %esi,0x10(%esp)
 82247d3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82247d7:	c7 44 24 08 08 36 bc 	movl   $0x8bc3608,0x8(%esp)
 82247de:	08 
 82247df:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 82247e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82247e9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82247ec:	89 04 24             	mov    %eax,(%esp)
 82247ef:	e8 a4 30 ee ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 82247f4:	b8 00 00 00 00       	mov    $0x0,%eax
 82247f9:	e9 00 01 00 00       	jmp    82248fe <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x372>
 82247fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224801:	89 04 24             	mov    %eax,(%esp)
 8224804:	e8 27 79 f9 ff       	call   81bc130 <_ZNK5CUser24get_ontime_last_recv_idxEv>
 8224809:	85 c0                	test   %eax,%eax
 822480b:	0f 94 c0             	sete   %al
 822480e:	84 c0                	test   %al,%al
 8224810:	0f 84 d1 00 00 00    	je     82248e7 <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x35b>
 8224816:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 822481d:	00 
 822481e:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 8224825:	00 
 8224826:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224829:	89 04 24             	mov    %eax,(%esp)
 822482c:	e8 11 77 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8224831:	8d 9d cc fe ff ff    	lea    -0x134(%ebp),%ebx
 8224837:	b8 00 00 00 00       	mov    $0x0,%eax
 822483c:	ba 40 00 00 00       	mov    $0x40,%edx
 8224841:	89 df                	mov    %ebx,%edi
 8224843:	89 d1                	mov    %edx,%ecx
 8224845:	f3 ab                	rep stos %eax,%es:(%edi)
 8224847:	e8 35 79 ea ff       	call   80cc181 <_Z14G_CEnvironmentv>
 822484c:	89 04 24             	mov    %eax,(%esp)
 822484f:	e8 46 5b eb ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 8224854:	89 44 24 08          	mov    %eax,0x8(%esp)
 8224858:	c7 44 24 04 a8 35 bc 	movl   $0x8bc35a8,0x4(%esp)
 822485f:	08 
 8224860:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8224866:	89 04 24             	mov    %eax,(%esp)
 8224869:	e8 d2 9b e5 ff       	call   807e440 <sprintf@plt>
 822486e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8224875:	ff 
 8224876:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224879:	89 04 24             	mov    %eax,(%esp)
 822487c:	e8 1f 97 42 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8224881:	89 c6                	mov    %eax,%esi
 8224883:	8b 45 0c             	mov    0xc(%ebp),%eax
 8224886:	89 04 24             	mov    %eax,(%esp)
 8224889:	e8 e0 5a eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 822488e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8224895:	00 
 8224896:	89 04 24             	mov    %eax,(%esp)
 8224899:	e8 ad 47 ee ff       	call   810904b <_Z14NumberToStringji>
 822489e:	89 c3                	mov    %eax,%ebx
 82248a0:	c7 44 24 08 20 df 00 	movl   $0xdf20,0x8(%esp)
 82248a7:	00 
 82248a8:	c7 44 24 04 60 c8 bc 	movl   $0x8bcc860,0x4(%esp)
 82248af:	08 
 82248b0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82248b3:	89 04 24             	mov    %eax,(%esp)
 82248b6:	e8 b1 2f ee ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 82248bb:	89 74 24 10          	mov    %esi,0x10(%esp)
 82248bf:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82248c3:	c7 44 24 08 64 36 bc 	movl   $0x8bc3664,0x8(%esp)
 82248ca:	08 
 82248cb:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 82248d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82248d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82248d8:	89 04 24             	mov    %eax,(%esp)
 82248db:	e8 b8 2f ee ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 82248e0:	b8 00 00 00 00       	mov    $0x0,%eax
 82248e5:	eb 17                	jmp    82248fe <_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf+0x372>
 82248e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82248ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 82248ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82248f1:	89 04 24             	mov    %eax,(%esp)
 82248f4:	e8 e3 70 f9 ff       	call   81bb9dc <_ZN12COnTimeEvent18insert_reward_userEP5CUser>
 82248f9:	b8 00 00 00 00       	mov    $0x0,%eax
 82248fe:	81 c4 4c 01 00 00    	add    $0x14c,%esp
 8224904:	5b                   	pop    %ebx
 8224905:	5e                   	pop    %esi
 8224906:	5f                   	pop    %edi
 8224907:	5d                   	pop    %ebp
 8224908:	c3                   	ret
 8224909:	90                   	nop

```

```c
// Dispatcher_RequestOnTimeEventReward::dispatch_sig @ 0x822458c

/* Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  GameWorld *this;
  int iVar2;
  CEnvironment *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte bVar8;
  char local_138 [256];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  COnTimeEvent *local_20;
  
  bVar8 = 0;
  this = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(this);
  if (cVar1 == '\0') {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      local_20 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
      if (local_20 != (COnTimeEvent *)0x0) {
        cVar1 = (**(code **)(*(int *)local_20 + 0x34))(local_20,0);
        if (cVar1 == '\x01') {
          iVar2 = COnTimeEvent::get_reward_state(local_20);
          if (iVar2 == 0) {
            iVar2 = CUser::get_ontime_last_recv_idx((CUser *)param_2);
            if (iVar2 == 0) {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x120,2);
              pcVar7 = local_138;
              for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
                pcVar7[0] = '\0';
                pcVar7[1] = '\0';
                pcVar7[2] = '\0';
                pcVar7[3] = '\0';
                pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
              }
              pCVar3 = (CEnvironment *)G_CEnvironment();
              uVar4 = CEnvironment::get_file_name(pCVar3);
              sprintf(local_138,"./log/%s/OnTimeEvent",uVar4);
              uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
              uVar5 = CUser::get_acc_id((CUser *)param_2);
              uVar6 = NumberToString(uVar5,0);
              CMyFileLog::CMyFileLog
                        (local_28,
                         "virtual int Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)"
                         ,0xdf20);
              CMyFileLog::operator()
                        (local_28,local_138,
                         "On Time Event:Request Reward user db error m_id(%s) charac_no(%u)",uVar6,
                         uVar4);
            }
            else {
              COnTimeEvent::insert_reward_user(local_20,(CUser *)param_2);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x13);
            pcVar7 = local_138;
            for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7[2] = '\0';
              pcVar7[3] = '\0';
              pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
            }
            pCVar3 = (CEnvironment *)G_CEnvironment();
            uVar4 = CEnvironment::get_file_name(pCVar3);
            sprintf(local_138,"./log/%s/OnTimeEvent",uVar4);
            uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
            uVar5 = CUser::get_acc_id((CUser *)param_2);
            uVar6 = NumberToString(uVar5,0);
            CMyFileLog::CMyFileLog
                      (local_30,
                       "virtual int Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xdf14);
            CMyFileLog::operator()
                      (local_30,local_138,
                       "On Time Event:Request Reward ENUM_ONTIME_EVENT_ON_REWARD_ON error m_id(%s) charac_no(%u)"
                       ,uVar6,uVar4);
          }
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x13);
          pcVar7 = local_138;
          for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
            pcVar7[0] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
          }
          pCVar3 = (CEnvironment *)G_CEnvironment();
          uVar4 = CEnvironment::get_file_name(pCVar3);
          sprintf(local_138,"./log/%s/OnTimeEvent",uVar4);
          uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
          uVar5 = CUser::get_acc_id((CUser *)param_2);
          uVar6 = NumberToString(uVar5,0);
          CMyFileLog::CMyFileLog
                    (local_38,
                     "virtual int Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)"
                     ,0xdf01);
          CMyFileLog::operator()
                    (local_38,local_138,
                     "On Time Event:Request Reward IsEventing error m_id(%s) charac_no(%u)",uVar6,
                     uVar4);
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0xd8);
    }
  }
  return 0;
}

```

