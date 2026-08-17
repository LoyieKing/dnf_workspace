# Inter_MonitorNoticeMemberEnterReply

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cd5ca Inter_MonitorNoticeMemberEnterReply::dispatch_sig  [0x084cd5ca-0x84cd839] ===
 84cd5ca:	55                   	push   %ebp
 84cd5cb:	89 e5                	mov    %esp,%ebp
 84cd5cd:	56                   	push   %esi
 84cd5ce:	53                   	push   %ebx
 84cd5cf:	83 ec 40             	sub    $0x40,%esp
 84cd5d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd5d5:	89 04 24             	mov    %eax,(%esp)
 84cd5d8:	e8 af cd c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cd5dd:	85 c0                	test   %eax,%eax
 84cd5df:	0f 94 c0             	sete   %al
 84cd5e2:	84 c0                	test   %al,%al
 84cd5e4:	74 0a                	je     84cd5f0 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x26>
 84cd5e6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd5eb:	e9 40 02 00 00       	jmp    84cd830 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x266>
 84cd5f0:	8b 45 10             	mov    0x10(%ebp),%eax
 84cd5f3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cd5f6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd5fd:	ff 
 84cd5fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd601:	89 04 24             	mov    %eax,(%esp)
 84cd604:	e8 97 09 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd609:	89 c2                	mov    %eax,%edx
 84cd60b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd60e:	8b 40 11             	mov    0x11(%eax),%eax
 84cd611:	39 c2                	cmp    %eax,%edx
 84cd613:	0f 95 c0             	setne  %al
 84cd616:	84 c0                	test   %al,%al
 84cd618:	74 57                	je     84cd671 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0xa7>
 84cd61a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd61d:	8b 58 11             	mov    0x11(%eax),%ebx
 84cd620:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd627:	ff 
 84cd628:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd62b:	89 04 24             	mov    %eax,(%esp)
 84cd62e:	e8 6d 09 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd633:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cd637:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cd63b:	c7 44 24 10 18 86 c8 	movl   $0x8c88618,0x10(%esp)
 84cd642:	08 
 84cd643:	c7 44 24 0c d9 28 00 	movl   $0x28d9,0xc(%esp)
 84cd64a:	00 
 84cd64b:	c7 44 24 08 80 d2 c8 	movl   $0x8c8d280,0x8(%esp)
 84cd652:	08 
 84cd653:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cd65a:	08 
 84cd65b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cd662:	e8 a3 65 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cd667:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd66c:	e9 bf 01 00 00       	jmp    84cd830 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x266>
 84cd671:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd674:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd678:	3c 02                	cmp    $0x2,%al
 84cd67a:	75 0a                	jne    84cd686 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0xbc>
 84cd67c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd681:	e9 aa 01 00 00       	jmp    84cd830 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x266>
 84cd686:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd689:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd68d:	3c 03                	cmp    $0x3,%al
 84cd68f:	74 0b                	je     84cd69c <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0xd2>
 84cd691:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd694:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cd698:	3c 04                	cmp    $0x4,%al
 84cd69a:	75 0a                	jne    84cd6a6 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0xdc>
 84cd69c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd6a1:	e9 8a 01 00 00       	jmp    84cd830 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x266>
 84cd6a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd6a9:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84cd6ad:	3c 01                	cmp    $0x1,%al
 84cd6af:	74 0b                	je     84cd6bc <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0xf2>
 84cd6b1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd6b4:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84cd6b8:	3c 02                	cmp    $0x2,%al
 84cd6ba:	75 78                	jne    84cd734 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x16a>
 84cd6bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd6bf:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84cd6c3:	3c 01                	cmp    $0x1,%al
 84cd6c5:	75 58                	jne    84cd71f <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x155>
 84cd6c7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd6ca:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84cd6ce:	3c 01                	cmp    $0x1,%al
 84cd6d0:	75 4d                	jne    84cd71f <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x155>
 84cd6d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd6d5:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 84cd6d9:	0f b6 d0             	movzbl %al,%edx
 84cd6dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd6df:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd6e3:	89 04 24             	mov    %eax,(%esp)
 84cd6e6:	e8 95 84 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84cd6eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd6ee:	8b 50 35             	mov    0x35(%eax),%edx
 84cd6f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd6f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd6f8:	89 04 24             	mov    %eax,(%esp)
 84cd6fb:	e8 fa e9 01 00       	call   84ec0fa <_ZN15CUserCharacInfo24set_connect_upper_memberEj>
 84cd700:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd703:	89 04 24             	mov    %eax,(%esp)
 84cd706:	e8 41 7a 18 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84cd70b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cd70e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84cd712:	74 0b                	je     84cd71f <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x155>
 84cd714:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cd717:	89 04 24             	mov    %eax,(%esp)
 84cd71a:	e8 05 f6 0c 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 84cd71f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd722:	8b 50 11             	mov    0x11(%eax),%edx
 84cd725:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd728:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd72c:	89 04 24             	mov    %eax,(%esp)
 84cd72f:	e8 a8 e9 01 00       	call   84ec0dc <_ZN15CUserCharacInfo20set_charac_memberkeyEj>
 84cd734:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd737:	89 04 24             	mov    %eax,(%esp)
 84cd73a:	e8 0d 06 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cd73f:	c7 44 24 08 50 00 00 	movl   $0x50,0x8(%esp)
 84cd746:	00 
 84cd747:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd74e:	00 
 84cd74f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd752:	89 04 24             	mov    %eax,(%esp)
 84cd755:	e8 a2 e1 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cd75a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd761:	00 
 84cd762:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd765:	89 04 24             	mov    %eax,(%esp)
 84cd768:	e8 b3 e1 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd76d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd770:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84cd774:	0f b6 c0             	movzbl %al,%eax
 84cd777:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd77b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd77e:	89 04 24             	mov    %eax,(%esp)
 84cd781:	e8 9a e1 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd786:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd789:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 84cd78d:	0f b6 c0             	movzbl %al,%eax
 84cd790:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd794:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd797:	89 04 24             	mov    %eax,(%esp)
 84cd79a:	e8 81 e1 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd79f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd7a2:	83 c0 16             	add    $0x16,%eax
 84cd7a5:	89 04 24             	mov    %eax,(%esp)
 84cd7a8:	e8 03 0c bb ff       	call   807e3b0 <strlen@plt>
 84cd7ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cd7b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd7b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd7b7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd7ba:	89 04 24             	mov    %eax,(%esp)
 84cd7bd:	e8 7a e1 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cd7c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cd7c5:	8d 50 16             	lea    0x16(%eax),%edx
 84cd7c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd7cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cd7cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd7d3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd7d6:	89 04 24             	mov    %eax,(%esp)
 84cd7d9:	e8 06 9c ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cd7de:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd7e5:	00 
 84cd7e6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd7e9:	89 04 24             	mov    %eax,(%esp)
 84cd7ec:	e8 67 e1 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cd7f1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd7f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd7f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd7fb:	89 04 24             	mov    %eax,(%esp)
 84cd7fe:	e8 b7 ad 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cd803:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd808:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd80b:	89 04 24             	mov    %eax,(%esp)
 84cd80e:	e8 6d 06 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd813:	eb 1b                	jmp    84cd830 <_ZN35Inter_MonitorNoticeMemberEnterReply12dispatch_sigEP5CUserPci+0x266>
 84cd815:	89 d3                	mov    %edx,%ebx
 84cd817:	89 c6                	mov    %eax,%esi
 84cd819:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cd81c:	89 04 24             	mov    %eax,(%esp)
 84cd81f:	e8 5c 06 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd824:	89 f0                	mov    %esi,%eax
 84cd826:	89 da                	mov    %ebx,%edx
 84cd828:	89 04 24             	mov    %eax,(%esp)
 84cd82b:	e8 20 5f 61 00       	call   8ae3750 <_Unwind_Resume>
 84cd830:	89 d8                	mov    %ebx,%eax
 84cd832:	83 c4 40             	add    $0x40,%esp
 84cd835:	5b                   	pop    %ebx
 84cd836:	5e                   	pop    %esi
 84cd837:	5d                   	pop    %ebp
 84cd838:	c3                   	ret
 84cd839:	90                   	nop

```

```c
// Inter_MonitorNoticeMemberEnterReply::dispatch_sig @ 0x84cd5ca

/* Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    if (iVar2 == *(int *)(local_18 + 0x11)) {
      if (((*(char *)(local_18 + 10) != '\x02') && (*(char *)(local_18 + 10) != '\x03')) &&
         (*(char *)(local_18 + 10) != '\x04')) {
        if ((*(char *)(local_18 + 0xb) == '\x01') || (*(char *)(local_18 + 0xb) == '\x02')) {
          if ((*(char *)(local_18 + 0xb) == '\x01') && (*(char *)(local_18 + 0xc) == '\x01')) {
            CUserCharacInfo::set_uppermember_exp_level
                      ((CUserCharacInfo *)param_2,*(uchar *)(local_18 + 0x34));
            CUserCharacInfo::set_connect_upper_member
                      ((CUserCharacInfo *)param_2,*(uint *)(local_18 + 0x35));
            local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
            if (local_10 != (CParty *)0x0) {
              CParty::send_party_realtime_info(local_10);
            }
          }
          CUserCharacInfo::set_charac_memberkey
                    ((CUserCharacInfo *)param_2,*(uint *)(local_18 + 0x11));
        }
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cd755 to 084cd802 has its CatchHandler @ 084cd815 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x50);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0xb))
        ;
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x15));
        local_14 = strlen((char *)(local_18 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x16),local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0x11);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberEnterReply::dispatch_sig(CUser*, char*, int)"
                 ,0x28d9,
                 "MEMBER : Inter_MonitorNoticeMemberEnterReply::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

