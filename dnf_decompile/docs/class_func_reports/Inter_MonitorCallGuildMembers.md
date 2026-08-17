# Inter_MonitorCallGuildMembers

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ca7e6 Inter_MonitorCallGuildMembers::dispatch_sig  [0x084ca7e6-0x84caa15] ===
 84ca7e6:	55                   	push   %ebp
 84ca7e7:	89 e5                	mov    %esp,%ebp
 84ca7e9:	56                   	push   %esi
 84ca7ea:	53                   	push   %ebx
 84ca7eb:	83 ec 40             	sub    $0x40,%esp
 84ca7ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca7f1:	89 04 24             	mov    %eax,(%esp)
 84ca7f4:	e8 93 fb c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ca7f9:	85 c0                	test   %eax,%eax
 84ca7fb:	0f 94 c0             	sete   %al
 84ca7fe:	84 c0                	test   %al,%al
 84ca800:	74 0a                	je     84ca80c <_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci+0x26>
 84ca802:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca807:	e9 01 02 00 00       	jmp    84caa0d <_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci+0x227>
 84ca80c:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca80f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ca812:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca819:	ff 
 84ca81a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca81d:	89 04 24             	mov    %eax,(%esp)
 84ca820:	e8 7b 37 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca825:	89 c2                	mov    %eax,%edx
 84ca827:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca82a:	8b 40 0e             	mov    0xe(%eax),%eax
 84ca82d:	39 c2                	cmp    %eax,%edx
 84ca82f:	0f 95 c0             	setne  %al
 84ca832:	84 c0                	test   %al,%al
 84ca834:	74 57                	je     84ca88d <_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci+0xa7>
 84ca836:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca839:	8b 58 0e             	mov    0xe(%eax),%ebx
 84ca83c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca843:	ff 
 84ca844:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca847:	89 04 24             	mov    %eax,(%esp)
 84ca84a:	e8 51 37 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca84f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84ca853:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ca857:	c7 44 24 10 74 7d c8 	movl   $0x8c87d74,0x10(%esp)
 84ca85e:	08 
 84ca85f:	c7 44 24 0c b9 24 00 	movl   $0x24b9,0xc(%esp)
 84ca866:	00 
 84ca867:	c7 44 24 08 20 d8 c8 	movl   $0x8c8d820,0x8(%esp)
 84ca86e:	08 
 84ca86f:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ca876:	08 
 84ca877:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ca87e:	e8 87 93 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ca883:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca888:	e9 80 01 00 00       	jmp    84caa0d <_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci+0x227>
 84ca88d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca890:	89 04 24             	mov    %eax,(%esp)
 84ca893:	e8 d4 4b d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84ca898:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ca89b:	8b 52 12             	mov    0x12(%edx),%edx
 84ca89e:	39 d0                	cmp    %edx,%eax
 84ca8a0:	0f 95 c0             	setne  %al
 84ca8a3:	84 c0                	test   %al,%al
 84ca8a5:	74 36                	je     84ca8dd <_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci+0xf7>
 84ca8a7:	c7 44 24 10 d4 7d c8 	movl   $0x8c87dd4,0x10(%esp)
 84ca8ae:	08 
 84ca8af:	c7 44 24 0c bf 24 00 	movl   $0x24bf,0xc(%esp)
 84ca8b6:	00 
 84ca8b7:	c7 44 24 08 20 d8 c8 	movl   $0x8c8d820,0x8(%esp)
 84ca8be:	08 
 84ca8bf:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ca8c6:	08 
 84ca8c7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ca8ce:	e8 37 93 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ca8d3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca8d8:	e9 30 01 00 00       	jmp    84caa0d <_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci+0x227>
 84ca8dd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca8e0:	89 04 24             	mov    %eax,(%esp)
 84ca8e3:	e8 64 34 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ca8e8:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 84ca8ef:	00 
 84ca8f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ca8f7:	00 
 84ca8f8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca8fb:	89 04 24             	mov    %eax,(%esp)
 84ca8fe:	e8 f9 0f c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ca903:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ca90a:	00 
 84ca90b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca90e:	89 04 24             	mov    %eax,(%esp)
 84ca911:	e8 0a 10 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca916:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca919:	8b 40 12             	mov    0x12(%eax),%eax
 84ca91c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca920:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca923:	89 04 24             	mov    %eax,(%esp)
 84ca926:	e8 11 10 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca92b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca92e:	83 c0 16             	add    $0x16,%eax
 84ca931:	89 04 24             	mov    %eax,(%esp)
 84ca934:	e8 77 3a bb ff       	call   807e3b0 <strlen@plt>
 84ca939:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ca93c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ca93f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca943:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca946:	89 04 24             	mov    %eax,(%esp)
 84ca949:	e8 ee 0f c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca94e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca951:	8d 50 16             	lea    0x16(%eax),%edx
 84ca954:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ca957:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca95b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca95f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca962:	89 04 24             	mov    %eax,(%esp)
 84ca965:	e8 7a ca ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84ca96a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca96d:	8b 40 2e             	mov    0x2e(%eax),%eax
 84ca970:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca974:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca977:	89 04 24             	mov    %eax,(%esp)
 84ca97a:	e8 bd 0f c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca97f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca982:	0f b7 40 32          	movzwl 0x32(%eax),%eax
 84ca986:	0f b7 c0             	movzwl %ax,%eax
 84ca989:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca98d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca990:	89 04 24             	mov    %eax,(%esp)
 84ca993:	e8 0c f5 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84ca998:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca99b:	8d 50 34             	lea    0x34(%eax),%edx
 84ca99e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ca9a1:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84ca9a5:	0f b6 c0             	movzbl %al,%eax
 84ca9a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ca9ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca9b0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca9b3:	89 04 24             	mov    %eax,(%esp)
 84ca9b6:	e8 bf f9 ff ff       	call   84ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>
 84ca9bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ca9c2:	00 
 84ca9c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca9c6:	89 04 24             	mov    %eax,(%esp)
 84ca9c9:	e8 8a 0f c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ca9ce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca9d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca9d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca9d8:	89 04 24             	mov    %eax,(%esp)
 84ca9db:	e8 da db 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ca9e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca9e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca9e8:	89 04 24             	mov    %eax,(%esp)
 84ca9eb:	e8 90 34 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ca9f0:	eb 1b                	jmp    84caa0d <_ZN29Inter_MonitorCallGuildMembers12dispatch_sigEP5CUserPci+0x227>
 84ca9f2:	89 d3                	mov    %edx,%ebx
 84ca9f4:	89 c6                	mov    %eax,%esi
 84ca9f6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca9f9:	89 04 24             	mov    %eax,(%esp)
 84ca9fc:	e8 7f 34 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84caa01:	89 f0                	mov    %esi,%eax
 84caa03:	89 da                	mov    %ebx,%edx
 84caa05:	89 04 24             	mov    %eax,(%esp)
 84caa08:	e8 43 8d 61 00       	call   8ae3750 <_Unwind_Resume>
 84caa0d:	89 d8                	mov    %ebx,%eax
 84caa0f:	83 c4 40             	add    $0x40,%esp
 84caa12:	5b                   	pop    %ebx
 84caa13:	5e                   	pop    %esi
 84caa14:	5d                   	pop    %ebp
 84caa15:	c3                   	ret

```

```c
// Inter_MonitorCallGuildMembers::dispatch_sig @ 0x84ca7e6

/* Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildMembers::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xe)) {
      iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar2 == *(int *)(local_14 + 0x12)) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084ca8fe to 084ca9df has its CatchHandler @ 084ca9f2 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x46);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        local_10 = strlen((char *)(local_14 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x2e));
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0x32));
        FunctionGuildMember::MakePacketGuildMembersInfo
                  (local_20,(uint)*(byte *)(local_14 + 0x2d),(ST_Guild_Mem_Info *)(local_14 + 0x34))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int)",
                   0x24bf,
                   "Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildMembers::dispatch_sig(CUser*, char*, int)",
                 0x24b9,
                 "Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

