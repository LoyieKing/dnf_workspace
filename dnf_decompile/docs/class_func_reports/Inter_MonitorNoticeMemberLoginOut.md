# Inter_MonitorNoticeMemberLoginOut

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cc90a Inter_MonitorNoticeMemberLoginOut::dispatch_sig  [0x084cc90a-0x84ccb9f] ===
 84cc90a:	55                   	push   %ebp
 84cc90b:	89 e5                	mov    %esp,%ebp
 84cc90d:	56                   	push   %esi
 84cc90e:	53                   	push   %ebx
 84cc90f:	83 ec 40             	sub    $0x40,%esp
 84cc912:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc915:	89 04 24             	mov    %eax,(%esp)
 84cc918:	e8 6f da c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cc91d:	85 c0                	test   %eax,%eax
 84cc91f:	0f 94 c0             	sete   %al
 84cc922:	84 c0                	test   %al,%al
 84cc924:	74 0a                	je     84cc930 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x26>
 84cc926:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc92b:	e9 66 02 00 00       	jmp    84ccb96 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x28c>
 84cc930:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc933:	89 04 24             	mov    %eax,(%esp)
 84cc936:	e8 89 2c d6 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 84cc93b:	85 c0                	test   %eax,%eax
 84cc93d:	0f 94 c0             	sete   %al
 84cc940:	84 c0                	test   %al,%al
 84cc942:	74 4d                	je     84cc991 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x87>
 84cc944:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc94b:	ff 
 84cc94c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc94f:	89 04 24             	mov    %eax,(%esp)
 84cc952:	e8 49 16 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc957:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cc95b:	c7 44 24 10 f8 82 c8 	movl   $0x8c882f8,0x10(%esp)
 84cc962:	08 
 84cc963:	c7 44 24 0c b5 27 00 	movl   $0x27b5,0xc(%esp)
 84cc96a:	00 
 84cc96b:	c7 44 24 08 60 d4 c8 	movl   $0x8c8d460,0x8(%esp)
 84cc972:	08 
 84cc973:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cc97a:	08 
 84cc97b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cc982:	e8 83 72 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cc987:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc98c:	e9 05 02 00 00       	jmp    84ccb96 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x28c>
 84cc991:	8b 45 10             	mov    0x10(%ebp),%eax
 84cc994:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cc997:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc99e:	ff 
 84cc99f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc9a2:	89 04 24             	mov    %eax,(%esp)
 84cc9a5:	e8 f6 15 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc9aa:	89 c2                	mov    %eax,%edx
 84cc9ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc9af:	8b 40 0f             	mov    0xf(%eax),%eax
 84cc9b2:	39 c2                	cmp    %eax,%edx
 84cc9b4:	0f 95 c0             	setne  %al
 84cc9b7:	84 c0                	test   %al,%al
 84cc9b9:	74 57                	je     84cca12 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x108>
 84cc9bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cc9be:	8b 58 0f             	mov    0xf(%eax),%ebx
 84cc9c1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc9c8:	ff 
 84cc9c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc9cc:	89 04 24             	mov    %eax,(%esp)
 84cc9cf:	e8 cc 15 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc9d4:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cc9d8:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cc9dc:	c7 44 24 10 68 83 c8 	movl   $0x8c88368,0x10(%esp)
 84cc9e3:	08 
 84cc9e4:	c7 44 24 0c bc 27 00 	movl   $0x27bc,0xc(%esp)
 84cc9eb:	00 
 84cc9ec:	c7 44 24 08 60 d4 c8 	movl   $0x8c8d460,0x8(%esp)
 84cc9f3:	08 
 84cc9f4:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cc9fb:	08 
 84cc9fc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cca03:	e8 02 72 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cca08:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cca0d:	e9 84 01 00 00       	jmp    84ccb96 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x28c>
 84cca12:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cca15:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cca19:	3c 01                	cmp    $0x1,%al
 84cca1b:	75 3b                	jne    84cca58 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x14e>
 84cca1d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cca20:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 84cca24:	3c 01                	cmp    $0x1,%al
 84cca26:	75 30                	jne    84cca58 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x14e>
 84cca28:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cca2b:	8b 50 34             	mov    0x34(%eax),%edx
 84cca2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cca31:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cca35:	89 04 24             	mov    %eax,(%esp)
 84cca38:	e8 bd f6 01 00       	call   84ec0fa <_ZN15CUserCharacInfo24set_connect_upper_memberEj>
 84cca3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cca40:	0f b6 40 33          	movzbl 0x33(%eax),%eax
 84cca44:	0f b6 d0             	movzbl %al,%edx
 84cca47:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cca4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cca4e:	89 04 24             	mov    %eax,(%esp)
 84cca51:	e8 2a 91 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84cca56:	eb 3c                	jmp    84cca94 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x18a>
 84cca58:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cca5b:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84cca5f:	84 c0                	test   %al,%al
 84cca61:	75 31                	jne    84cca94 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x18a>
 84cca63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cca66:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 84cca6a:	3c 01                	cmp    $0x1,%al
 84cca6c:	75 26                	jne    84cca94 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x18a>
 84cca6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cca71:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cca78:	00 
 84cca79:	89 04 24             	mov    %eax,(%esp)
 84cca7c:	e8 79 f6 01 00       	call   84ec0fa <_ZN15CUserCharacInfo24set_connect_upper_memberEj>
 84cca81:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cca84:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cca8b:	00 
 84cca8c:	89 04 24             	mov    %eax,(%esp)
 84cca8f:	e8 ec 90 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84cca94:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cca97:	89 04 24             	mov    %eax,(%esp)
 84cca9a:	e8 ad 12 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cca9f:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 84ccaa6:	00 
 84ccaa7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ccaae:	00 
 84ccaaf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccab2:	89 04 24             	mov    %eax,(%esp)
 84ccab5:	e8 42 ee bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ccaba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccabd:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84ccac1:	0f b6 c0             	movzbl %al,%eax
 84ccac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccac8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccacb:	89 04 24             	mov    %eax,(%esp)
 84ccace:	e8 4d ee bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ccad3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccad6:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 84ccada:	0f b6 c0             	movzbl %al,%eax
 84ccadd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccae1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccae4:	89 04 24             	mov    %eax,(%esp)
 84ccae7:	e8 34 ee bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ccaec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccaef:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 84ccaf3:	0f b6 c0             	movzbl %al,%eax
 84ccaf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccafa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccafd:	89 04 24             	mov    %eax,(%esp)
 84ccb00:	e8 1b ee bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ccb05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccb08:	83 c0 15             	add    $0x15,%eax
 84ccb0b:	89 04 24             	mov    %eax,(%esp)
 84ccb0e:	e8 9d 18 bb ff       	call   807e3b0 <strlen@plt>
 84ccb13:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ccb16:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ccb19:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccb1d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccb20:	89 04 24             	mov    %eax,(%esp)
 84ccb23:	e8 14 ee bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ccb28:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccb2b:	8d 50 15             	lea    0x15(%eax),%edx
 84ccb2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ccb31:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ccb35:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ccb39:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccb3c:	89 04 24             	mov    %eax,(%esp)
 84ccb3f:	e8 a0 a8 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84ccb44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ccb4b:	00 
 84ccb4c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccb4f:	89 04 24             	mov    %eax,(%esp)
 84ccb52:	e8 01 ee bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ccb57:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccb5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccb5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccb61:	89 04 24             	mov    %eax,(%esp)
 84ccb64:	e8 51 ba 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ccb69:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccb6e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccb71:	89 04 24             	mov    %eax,(%esp)
 84ccb74:	e8 07 13 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ccb79:	eb 1b                	jmp    84ccb96 <_ZN33Inter_MonitorNoticeMemberLoginOut12dispatch_sigEP5CUserPci+0x28c>
 84ccb7b:	89 d3                	mov    %edx,%ebx
 84ccb7d:	89 c6                	mov    %eax,%esi
 84ccb7f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccb82:	89 04 24             	mov    %eax,(%esp)
 84ccb85:	e8 f6 12 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ccb8a:	89 f0                	mov    %esi,%eax
 84ccb8c:	89 da                	mov    %ebx,%edx
 84ccb8e:	89 04 24             	mov    %eax,(%esp)
 84ccb91:	e8 ba 6b 61 00       	call   8ae3750 <_Unwind_Resume>
 84ccb96:	89 d8                	mov    %ebx,%eax
 84ccb98:	83 c4 40             	add    $0x40,%esp
 84ccb9b:	5b                   	pop    %ebx
 84ccb9c:	5e                   	pop    %esi
 84ccb9d:	5d                   	pop    %ebp
 84ccb9e:	c3                   	ret
 84ccb9f:	90                   	nop

```

```c
// Inter_MonitorNoticeMemberLoginOut::dispatch_sig @ 0x84cc90a

/* Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int)",
                 0x27b5,
                 "MEMBER : Inter_MonitorNoticeMemberLoginOut::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_14 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_14 + 0xf)) {
        if ((*(char *)(local_14 + 10) == '\x01') && (*(char *)(local_14 + 0x14) == '\x01')) {
          CUserCharacInfo::set_connect_upper_member
                    ((CUserCharacInfo *)param_2,*(uint *)(local_14 + 0x34));
          CUserCharacInfo::set_uppermember_exp_level
                    ((CUserCharacInfo *)param_2,*(uchar *)(local_14 + 0x33));
        }
        else if ((*(char *)(local_14 + 10) == '\0') && (*(char *)(local_14 + 0x14) == '\x01')) {
          CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)param_2,0);
          CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)param_2,'\0');
        }
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084ccab5 to 084ccb68 has its CatchHandler @ 084ccb7b */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x48);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 10));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x14));
        local_10 = strlen((char *)(local_14 + 0x15));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x15),local_10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        uVar2 = *(undefined4 *)(local_14 + 0xf);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeMemberLoginOut::dispatch_sig(CUser*, char*, int)"
                   ,0x27bc,
                   "MEMBER : Inter_MonitorNoticeMemberLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}

```

