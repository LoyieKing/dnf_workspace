# Inter_MonitorNoticeMemberSecede

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cd83a Inter_MonitorNoticeMemberSecede::dispatch_sig  [0x084cd83a-0x84cda73] ===
 84cd83a:	55                   	push   %ebp
 84cd83b:	89 e5                	mov    %esp,%ebp
 84cd83d:	56                   	push   %esi
 84cd83e:	53                   	push   %ebx
 84cd83f:	83 ec 40             	sub    $0x40,%esp
 84cd842:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd845:	89 04 24             	mov    %eax,(%esp)
 84cd848:	e8 3f cb c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cd84d:	85 c0                	test   %eax,%eax
 84cd84f:	0f 94 c0             	sete   %al
 84cd852:	84 c0                	test   %al,%al
 84cd854:	74 0a                	je     84cd860 <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x26>
 84cd856:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd85b:	e9 0a 02 00 00       	jmp    84cda6a <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x230>
 84cd860:	8b 45 10             	mov    0x10(%ebp),%eax
 84cd863:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cd866:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd86d:	ff 
 84cd86e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd871:	89 04 24             	mov    %eax,(%esp)
 84cd874:	e8 27 07 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd879:	89 c2                	mov    %eax,%edx
 84cd87b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd87e:	8b 40 0e             	mov    0xe(%eax),%eax
 84cd881:	39 c2                	cmp    %eax,%edx
 84cd883:	0f 95 c0             	setne  %al
 84cd886:	84 c0                	test   %al,%al
 84cd888:	74 57                	je     84cd8e1 <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0xa7>
 84cd88a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd88d:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cd890:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd897:	ff 
 84cd898:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd89b:	89 04 24             	mov    %eax,(%esp)
 84cd89e:	e8 fd 06 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd8a3:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cd8a7:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cd8ab:	c7 44 24 10 88 86 c8 	movl   $0x8c88688,0x10(%esp)
 84cd8b2:	08 
 84cd8b3:	c7 44 24 0c 14 29 00 	movl   $0x2914,0xc(%esp)
 84cd8ba:	00 
 84cd8bb:	c7 44 24 08 20 d2 c8 	movl   $0x8c8d220,0x8(%esp)
 84cd8c2:	08 
 84cd8c3:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cd8ca:	08 
 84cd8cb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cd8d2:	e8 33 63 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cd8d7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd8dc:	e9 89 01 00 00       	jmp    84cda6a <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x230>
 84cd8e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd8e4:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cd8e8:	3c 01                	cmp    $0x1,%al
 84cd8ea:	75 45                	jne    84cd931 <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0xf7>
 84cd8ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd8ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd8f6:	00 
 84cd8f7:	89 04 24             	mov    %eax,(%esp)
 84cd8fa:	e8 fb e7 01 00       	call   84ec0fa <_ZN15CUserCharacInfo24set_connect_upper_memberEj>
 84cd8ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd902:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd909:	00 
 84cd90a:	89 04 24             	mov    %eax,(%esp)
 84cd90d:	e8 6e 82 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84cd912:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd915:	89 04 24             	mov    %eax,(%esp)
 84cd918:	e8 2f 78 18 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84cd91d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cd920:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84cd924:	74 0b                	je     84cd931 <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0xf7>
 84cd926:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cd929:	89 04 24             	mov    %eax,(%esp)
 84cd92c:	e8 f3 f3 0c 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 84cd931:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd934:	89 04 24             	mov    %eax,(%esp)
 84cd937:	e8 10 04 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cd93c:	c7 44 24 08 51 00 00 	movl   $0x51,0x8(%esp)
 84cd943:	00 
 84cd944:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd94b:	00 
 84cd94c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd94f:	89 04 24             	mov    %eax,(%esp)
 84cd952:	e8 a5 df bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cd957:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd95a:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cd95e:	3c 01                	cmp    $0x1,%al
 84cd960:	74 0b                	je     84cd96d <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x133>
 84cd962:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd965:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cd969:	3c 02                	cmp    $0x2,%al
 84cd96b:	75 15                	jne    84cd982 <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x148>
 84cd96d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd974:	00 
 84cd975:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd978:	89 04 24             	mov    %eax,(%esp)
 84cd97b:	e8 a0 df bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd980:	eb 13                	jmp    84cd995 <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x15b>
 84cd982:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd989:	00 
 84cd98a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd98d:	89 04 24             	mov    %eax,(%esp)
 84cd990:	e8 8b df bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd995:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd998:	83 c0 13             	add    $0x13,%eax
 84cd99b:	89 04 24             	mov    %eax,(%esp)
 84cd99e:	e8 0d 0a bb ff       	call   807e3b0 <strlen@plt>
 84cd9a3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cd9a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd9a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd9ad:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd9b0:	89 04 24             	mov    %eax,(%esp)
 84cd9b3:	e8 84 df bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cd9b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd9bb:	8d 50 13             	lea    0x13(%eax),%edx
 84cd9be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd9c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cd9c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd9c9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd9cc:	89 04 24             	mov    %eax,(%esp)
 84cd9cf:	e8 10 9a ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cd9d4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd9d7:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cd9db:	3c 01                	cmp    $0x1,%al
 84cd9dd:	74 0b                	je     84cd9ea <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x1b0>
 84cd9df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd9e2:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cd9e6:	3c 02                	cmp    $0x2,%al
 84cd9e8:	75 15                	jne    84cd9ff <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x1c5>
 84cd9ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd9f1:	00 
 84cd9f2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd9f5:	89 04 24             	mov    %eax,(%esp)
 84cd9f8:	e8 23 df bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd9fd:	eb 19                	jmp    84cda18 <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x1de>
 84cd9ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cda02:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cda06:	0f b6 c0             	movzbl %al,%eax
 84cda09:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cda0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cda10:	89 04 24             	mov    %eax,(%esp)
 84cda13:	e8 08 df bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cda18:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cda1f:	00 
 84cda20:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cda23:	89 04 24             	mov    %eax,(%esp)
 84cda26:	e8 2d df bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cda2b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cda2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cda32:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cda35:	89 04 24             	mov    %eax,(%esp)
 84cda38:	e8 7d ab 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cda3d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cda42:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cda45:	89 04 24             	mov    %eax,(%esp)
 84cda48:	e8 33 04 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cda4d:	eb 1b                	jmp    84cda6a <_ZN31Inter_MonitorNoticeMemberSecede12dispatch_sigEP5CUserPci+0x230>
 84cda4f:	89 d3                	mov    %edx,%ebx
 84cda51:	89 c6                	mov    %eax,%esi
 84cda53:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cda56:	89 04 24             	mov    %eax,(%esp)
 84cda59:	e8 22 04 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cda5e:	89 f0                	mov    %esi,%eax
 84cda60:	89 da                	mov    %ebx,%edx
 84cda62:	89 04 24             	mov    %eax,(%esp)
 84cda65:	e8 e6 5c 61 00       	call   8ae3750 <_Unwind_Resume>
 84cda6a:	89 d8                	mov    %ebx,%eax
 84cda6c:	83 c4 40             	add    $0x40,%esp
 84cda6f:	5b                   	pop    %ebx
 84cda70:	5e                   	pop    %esi
 84cda71:	5d                   	pop    %ebp
 84cda72:	c3                   	ret
 84cda73:	90                   	nop

```

```c
// Inter_MonitorNoticeMemberSecede::dispatch_sig @ 0x84cd83a

/* Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      if (*(char *)(local_18 + 0x12) == '\x01') {
        CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)param_2,0);
        CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)param_2,'\0');
        local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
        if (local_10 != (CParty *)0x0) {
          CParty::send_party_realtime_info(local_10);
        }
      }
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cd952 to 084cda3c has its CatchHandler @ 084cda4f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x51);
      if ((*(char *)(local_18 + 0x12) == '\x01') || (*(char *)(local_18 + 0x12) == '\x02')) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      }
      local_14 = strlen((char *)(local_18 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x13),local_14)
      ;
      if ((*(char *)(local_18 + 0x12) == '\x01') || (*(char *)(local_18 + 0x12) == '\x02')) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      }
      else {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x12));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberSecede::dispatch_sig(CUser*, char*, int)",
                 0x2914,
                 "MEMBER : Inter_MonitorNoticeMemberSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCallerCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

