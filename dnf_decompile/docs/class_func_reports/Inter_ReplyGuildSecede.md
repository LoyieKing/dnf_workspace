# Inter_ReplyGuildSecede

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c9768 Inter_ReplyGuildSecede::dispatch_sig  [0x084c9768-0x84c9a31] ===
 84c9768:	55                   	push   %ebp
 84c9769:	89 e5                	mov    %esp,%ebp
 84c976b:	57                   	push   %edi
 84c976c:	56                   	push   %esi
 84c976d:	53                   	push   %ebx
 84c976e:	83 ec 4c             	sub    $0x4c,%esp
 84c9771:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9774:	89 04 24             	mov    %eax,(%esp)
 84c9777:	e8 10 0c c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c977c:	85 c0                	test   %eax,%eax
 84c977e:	0f 94 c0             	sete   %al
 84c9781:	84 c0                	test   %al,%al
 84c9783:	74 0a                	je     84c978f <_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci+0x27>
 84c9785:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c978a:	e9 99 02 00 00       	jmp    84c9a28 <_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci+0x2c0>
 84c978f:	8b 45 10             	mov    0x10(%ebp),%eax
 84c9792:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84c9795:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c979c:	ff 
 84c979d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c97a0:	89 04 24             	mov    %eax,(%esp)
 84c97a3:	e8 f8 47 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c97a8:	89 c2                	mov    %eax,%edx
 84c97aa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c97ad:	8b 40 10             	mov    0x10(%eax),%eax
 84c97b0:	39 c2                	cmp    %eax,%edx
 84c97b2:	0f 95 c0             	setne  %al
 84c97b5:	84 c0                	test   %al,%al
 84c97b7:	74 57                	je     84c9810 <_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci+0xa8>
 84c97b9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c97bc:	8b 58 10             	mov    0x10(%eax),%ebx
 84c97bf:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c97c6:	ff 
 84c97c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c97ca:	89 04 24             	mov    %eax,(%esp)
 84c97cd:	e8 ce 47 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c97d2:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c97d6:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c97da:	c7 44 24 10 28 7a c8 	movl   $0x8c87a28,0x10(%esp)
 84c97e1:	08 
 84c97e2:	c7 44 24 0c 6b 23 00 	movl   $0x236b,0xc(%esp)
 84c97e9:	00 
 84c97ea:	c7 44 24 08 20 db c8 	movl   $0x8c8db20,0x8(%esp)
 84c97f1:	08 
 84c97f2:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c97f9:	08 
 84c97fa:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c9801:	e8 04 a4 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c9806:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c980b:	e9 18 02 00 00       	jmp    84c9a28 <_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci+0x2c0>
 84c9810:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9813:	89 04 24             	mov    %eax,(%esp)
 84c9816:	e8 31 45 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c981b:	c7 44 24 08 9c 00 00 	movl   $0x9c,0x8(%esp)
 84c9822:	00 
 84c9823:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c982a:	00 
 84c982b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c982e:	89 04 24             	mov    %eax,(%esp)
 84c9831:	e8 c6 20 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c9836:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9839:	8b 40 18             	mov    0x18(%eax),%eax
 84c983c:	85 c0                	test   %eax,%eax
 84c983e:	74 52                	je     84c9892 <_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci+0x12a>
 84c9840:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c9847:	00 
 84c9848:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c984b:	89 04 24             	mov    %eax,(%esp)
 84c984e:	e8 cd 20 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9853:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9856:	8b 40 18             	mov    0x18(%eax),%eax
 84c9859:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c985d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9860:	89 04 24             	mov    %eax,(%esp)
 84c9863:	e8 b8 20 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c9868:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c986f:	00 
 84c9870:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9873:	89 04 24             	mov    %eax,(%esp)
 84c9876:	e8 dd 20 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c987b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c987e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9882:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9885:	89 04 24             	mov    %eax,(%esp)
 84c9888:	e8 2d ed 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c988d:	e9 1d 01 00 00       	jmp    84c99af <_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci+0x247>
 84c9892:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9899:	00 
 84c989a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c989d:	89 04 24             	mov    %eax,(%esp)
 84c98a0:	e8 7b 20 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c98a5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c98a8:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 84c98ac:	0f be c0             	movsbl %al,%eax
 84c98af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c98b3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c98b6:	89 04 24             	mov    %eax,(%esp)
 84c98b9:	e8 62 20 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c98be:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c98c1:	83 c0 3b             	add    $0x3b,%eax
 84c98c4:	89 04 24             	mov    %eax,(%esp)
 84c98c7:	e8 e4 4a bb ff       	call   807e3b0 <strlen@plt>
 84c98cc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c98cf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c98d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c98d6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c98d9:	89 04 24             	mov    %eax,(%esp)
 84c98dc:	e8 5b 20 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c98e1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c98e4:	8d 50 3b             	lea    0x3b(%eax),%edx
 84c98e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c98ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c98ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c98f2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c98f5:	89 04 24             	mov    %eax,(%esp)
 84c98f8:	e8 e7 da ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c98fd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9900:	83 c0 1d             	add    $0x1d,%eax
 84c9903:	89 04 24             	mov    %eax,(%esp)
 84c9906:	e8 a5 4a bb ff       	call   807e3b0 <strlen@plt>
 84c990b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c990e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c9911:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9915:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9918:	89 04 24             	mov    %eax,(%esp)
 84c991b:	e8 1c 20 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c9920:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9923:	8d 50 1d             	lea    0x1d(%eax),%edx
 84c9926:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c9929:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c992d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c9931:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9934:	89 04 24             	mov    %eax,(%esp)
 84c9937:	e8 a8 da ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c993c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9943:	00 
 84c9944:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9947:	89 04 24             	mov    %eax,(%esp)
 84c994a:	e8 09 20 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c994f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9952:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9956:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9959:	89 04 24             	mov    %eax,(%esp)
 84c995c:	e8 59 ec 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c9961:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9964:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84c9968:	83 e8 01             	sub    $0x1,%eax
 84c996b:	0f b7 d8             	movzwl %ax,%ebx
 84c996e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9971:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 84c9975:	0f be c8             	movsbl %al,%ecx
 84c9978:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c997b:	8b 50 10             	mov    0x10(%eax),%edx
 84c997e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9981:	8d 78 3b             	lea    0x3b(%eax),%edi
 84c9984:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84c9987:	8b 40 0a             	mov    0xa(%eax),%eax
 84c998a:	8b 75 0c             	mov    0xc(%ebp),%esi
 84c998d:	81 c6 00 97 07 00    	add    $0x79700,%esi
 84c9993:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84c9997:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84c999b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84c999f:	89 7c 24 08          	mov    %edi,0x8(%esp)
 84c99a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c99a7:	89 34 24             	mov    %esi,(%esp)
 84c99aa:	e8 51 c1 1b 00       	call   8685b00 <_ZN15cUserHistoryLog8GuildOutEjPKcjct>
 84c99af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c99b2:	89 04 24             	mov    %eax,(%esp)
 84c99b5:	e8 c4 08 c1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84c99ba:	89 04 24             	mov    %eax,(%esp)
 84c99bd:	e8 cc 15 03 00       	call   84faf8e <_ZNK10CInventory21SendItemLockListInvenEv>
 84c99c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c99c5:	89 04 24             	mov    %eax,(%esp)
 84c99c8:	e8 b1 08 c1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84c99cd:	89 04 24             	mov    %eax,(%esp)
 84c99d0:	e8 e9 15 03 00       	call   84fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>
 84c99d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c99d8:	89 04 24             	mov    %eax,(%esp)
 84c99db:	e8 a4 80 c8 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 84c99e0:	89 04 24             	mov    %eax,(%esp)
 84c99e3:	e8 68 23 04 00       	call   850bd50 <_ZNK6CCargo16SendItemLockListEv>
 84c99e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c99eb:	89 04 24             	mov    %eax,(%esp)
 84c99ee:	e8 8b 08 c1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84c99f3:	89 04 24             	mov    %eax,(%esp)
 84c99f6:	e8 f3 15 03 00       	call   84fafee <_ZNK10CInventory24SendItemLockListCreatureEv>
 84c99fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9a00:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9a03:	89 04 24             	mov    %eax,(%esp)
 84c9a06:	e8 75 44 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9a0b:	eb 1b                	jmp    84c9a28 <_ZN22Inter_ReplyGuildSecede12dispatch_sigEP5CUserPci+0x2c0>
 84c9a0d:	89 d3                	mov    %edx,%ebx
 84c9a0f:	89 c6                	mov    %eax,%esi
 84c9a11:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84c9a14:	89 04 24             	mov    %eax,(%esp)
 84c9a17:	e8 64 44 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9a1c:	89 f0                	mov    %esi,%eax
 84c9a1e:	89 da                	mov    %ebx,%edx
 84c9a20:	89 04 24             	mov    %eax,(%esp)
 84c9a23:	e8 28 9d 61 00       	call   8ae3750 <_Unwind_Resume>
 84c9a28:	89 d8                	mov    %ebx,%eax
 84c9a2a:	83 c4 4c             	add    $0x4c,%esp
 84c9a2d:	5b                   	pop    %ebx
 84c9a2e:	5e                   	pop    %esi
 84c9a2f:	5f                   	pop    %edi
 84c9a30:	5d                   	pop    %ebp
 84c9a31:	c3                   	ret

```

```c
// Inter_ReplyGuildSecede::dispatch_sig @ 0x84c9768

/* Inter_ReplyGuildSecede::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildSecede::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  CCargo *this;
  PacketGuard local_34 [12];
  int local_28;
  size_t local_24;
  size_t local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_28 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_28 + 0x10)) {
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084c9831 to 084c99fa has its CatchHandler @ 084c9a0d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x9c);
      if (*(int *)(local_28 + 0x18) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)*(char *)(local_28 + 0x1c))
        ;
        local_24 = strlen((char *)(local_28 + 0x3b));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_24);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x3b),local_24);
        local_20 = strlen((char *)(local_28 + 0x1d));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_20);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x1d),local_20);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        CUser::Send((CUser *)param_2,local_34);
        cUserHistoryLog::GuildOut
                  ((cUserHistoryLog *)(param_2 + 0x79700),*(uint *)(local_28 + 10),
                   (char *)(local_28 + 0x3b),*(uint *)(local_28 + 0x10),*(char *)(local_28 + 0x1c),
                   *(short *)(local_28 + 0xe) - 1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x18));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
        CUser::Send((CUser *)param_2,local_34);
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::SendItemLockListInven(pCVar4);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::SendItemLockListAvatar(pCVar4);
      this = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_2);
      CCargo::SendItemLockList(this);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::SendItemLockListCreature(pCVar4);
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      uVar1 = *(undefined4 *)(local_28 + 0x10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildSecede::dispatch_sig(CUser*, char*, int)",0x236b,
                 "Inter_ReplyGuildSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

